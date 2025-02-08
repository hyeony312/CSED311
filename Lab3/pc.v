module pc(
    input reset,       // input (Use reset to initialize PC. Initial value must be 0)
    input clk,         // input
    input [31:0]next_pc,     // input

    input pc_write,

    output reg [31:0]current_pc   // output
  );
  
  reg pc_enable;

  initial begin
    current_pc =0;
  end

  always @(*) begin
    pc_enable = 0;
    if(pc_write==1) begin
        pc_enable = 1;
    end
  end

  always @(posedge clk) begin
    if(reset)begin
        current_pc<=0;
    end
    else begin
      if(pc_write == 1) begin
        current_pc <= next_pc;
      end
    end
  end

endmodule
