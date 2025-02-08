`define None            3'b000
`define CompareTag      3'b001
`define Evict           3'b010
`define Allocate        3'b011
`define WriteBack       3'b100



module Cache #(parameter LINE_SIZE = 16,
               parameter NUM_SETS = 16,
               parameter NUM_WAYS =1) (
    input reset,
    input clk,

    input is_input_valid,
    input [31:0] addr,
    input mem_rw,
    input [31:0] din,

    output is_ready,
    output is_output_valid,
    output reg [31:0] dout,
    output reg is_hit);
  // Wire declarations
  wire is_data_mem_ready;

  //cache 
  wire [3:0] idx;
  assign idx = addr[7:4];

  wire [1:0] offset;
  assign offset = addr[3:2];

  wire [23:0] tag;
  assign tag = addr[31:8];

  //for DataMem 위에 is_data_mem_ready있음

  reg [127:0]mem_din;
  wire [127:0] data_mem_dout;   
  reg mem_output_valid; 
  reg mem_input_valid;
  reg [127:0]cache_update_data;


  reg _mem_read;
  reg _mem_write;
  reg [31:0]mem_addr;

  // Reg declarations
  integer i;
  reg[2:0] current_state;
  reg[2:0] next_state;
  //for cache 
  reg [127:0] data_bank [15:0]; 
  reg [23:0] tag_bank [15:0]; 
  reg [15:0] is_valid;
  reg [15:0] is_dirty;

  reg cache_update;//synchronously하게 캐시를 업데이트하는 시그널(아래는 이 시그널이 켜지면 synchronous하게 업데이트할 블록의 값들)

  reg [23:0] cache_update_tag;
  reg cache_update_dirty;
  reg cache_update_valid;

  assign is_ready = is_data_mem_ready;//skeleton
  assign is_output_valid = (next_state == `None);



  initial begin
    _mem_read = 0;
    _mem_write = 0; 
    mem_input_valid =0;
    mem_din =0;
    current_state = `None;
    next_state =`None;
    cache_update_valid =0;
    cache_update_dirty =0;
    cache_update_data =0;
  end

  always @(posedge clk) begin
    if(reset) begin
      current_state <= `None;
    end
    else begin
      current_state <= next_state;
    end
  end


  //synchronously write to cache
  always @(posedge clk) begin
    if(reset) begin
      for(i = 0; i < NUM_SETS; i = i + NUM_WAYS) begin
        data_bank[i] <= 0;
        tag_bank[i] <= 0;
        is_valid[i] <= 0;
        is_dirty[i] <= 0;
      end
    end
    else begin
      if(cache_update) begin

          data_bank[idx] <= cache_update_data;
          tag_bank[idx] <= addr[31:8];
          is_valid[idx] <= cache_update_valid;
          is_dirty[idx] <= cache_update_dirty;
        
          //cache_update <=0;//update해줬으면 다시 0으로 바꿔야함.
      end
    end
  end


  //state 로직
  always @(*) begin
      mem_input_valid = 0;
      cache_update=0;
      cache_update_valid = 0;
      cache_update_dirty = 0;
      dout = 0;
      is_hit =1;
      _mem_read =0;
      _mem_write =0;
      mem_din =0;
      cache_update =0;
      mem_addr =0;
      cache_update_data=0;

  case (current_state)
      `None: begin
        if (is_input_valid) begin
          next_state = `CompareTag;

        end
        else begin
          next_state = `None;
        end
      end

      `CompareTag: begin
        if ((is_valid[idx] == 1) &&(tag == tag_bank[idx]) ) begin//hit

          if(mem_rw ==0) begin//read
            case(offset)
              2'b00: dout = data_bank[idx][31: 0];
              2'b01: dout = data_bank[idx][63: 32];
              2'b10: dout = data_bank[idx][95: 64];
              2'b11: dout = data_bank[idx][127: 96];
            endcase
          end
          else begin//write
            cache_update=1;
            cache_update_valid = 1;
            cache_update_dirty = 1;
            case (offset)
              2'b00: cache_update_data = {data_bank[idx][127:32], din};
              2'b01: cache_update_data = {data_bank[idx][127:64], din, data_bank[idx][31:0]};
              2'b10: cache_update_data = {data_bank[idx][127:96], din, data_bank[idx][63:0]};
              2'b11: cache_update_data = {din, data_bank[idx][95:0]};
            endcase
          end

          next_state = `None;
          is_hit = 1;
        end
        else begin//miss
          is_hit=0;//cache_stall 켜짐.
          next_state = `Evict;
        end
      end

      `Evict : begin
        is_hit =0;
        if(is_dirty[idx]) begin
          next_state = `WriteBack;
        end
        else begin
          next_state = `Allocate;
        end
      end

      `Allocate: begin//write back 끝났거나 필요x 인 상태


          _mem_read =1;
          _mem_write =0;
          mem_addr = addr;
          mem_input_valid = 1;

          is_hit =0;


        if (mem_output_valid) begin
          is_hit =1;
          cache_update = 1;
          cache_update_data = data_mem_dout;
          cache_update_valid =1;
          cache_update_dirty =0;//한라인 긁어 넣음.

         /* if(mem_rw ==0) begin//read
            cache_update_dirty =0;
            case(offset)
              2'b00: dout = data_mem_dout[31:0];
              2'b01: dout = data_mem_dout[63:32];
              2'b10: dout = data_mem_dout[95:64];
              2'b11: dout = data_mem_dout[127:96];
            endcase
          end
          else begin//write인 경우.
            cache_update_dirty =1; //라인 갈이끼고 워드 한개 수정.
          end*/

          mem_input_valid = 0;
          next_state = `CompareTag;
        end

        else begin
          next_state =`Allocate;
        end
      end

      `WriteBack: begin


        is_hit=0;
        if (is_data_mem_ready) begin
          mem_addr = {tag_bank[idx], idx, 4'b0000};//addr랑 writeback 해야하는 라인 주소 다름
          mem_input_valid = 1;
          _mem_write =1;
          _mem_read =0;
          mem_din = data_bank[idx];
          next_state = `Allocate;
        end
        else begin
          next_state =`WriteBack;
        end

      end

      default : begin
        next_state = `None;
      end

    endcase

  end
  // Instantiate data memory
  DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),

    .is_input_valid(mem_input_valid),
    .addr(mem_addr >> 4),        // NOTE: address must be shifted by CLOG2(LINE_SIZE)
    .mem_read(_mem_read),
    .mem_write(_mem_write),
    .din(mem_din),

    // is output from the data memory valid?
    .is_output_valid(mem_output_valid),
    .dout(data_mem_dout),
    // is data memory ready to accept request?
    .mem_ready(is_data_mem_ready)
  );



endmodule
