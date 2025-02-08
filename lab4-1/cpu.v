// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify modules (except InstMemory, DataMemory, and RegisterFile)
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted, // Whehther to finish simulation
           output [31:0]print_reg[0:31]); // Whehther to finish simulation
  /***** Wire declarations *****/
  wire [31:0] current_pc;
  wire [31:0] inst;

  wire [4:0] rs1_in;
  wire [31:0] rs1_dout;
  wire [31:0] rs2_dout;
  wire [31:0] imm_gen_out;

  wire is_ecall;
  wire pc_write;
  wire stall;
  wire IF_ID_write;
  wire mem_read;
  wire mem_write;
  wire reg_write;
  wire mem_to_reg;
  wire alu_src;
  wire halt_id;


  wire [3:0]alu_op;
  wire [1:0] forward_a;
  wire [1:0] forward_b;
  wire [31:0] alu_1_forward;
  wire [31:0] alu_2_forward;
  wire [31:0]Imm_mux_input;
  wire [31:0]alu_result;


  wire[31:0] mem_dout;

  wire [31:0] rd_din;


  /***** Register declarations *****/
  // You need to modify the width of registers
  // In addition, 
  // 1. You might need other pipeline registers that are not described below
  // 2. You might not need registers described below
  /***** IF/ID pipeline registers *****/
  reg [31:0]IF_ID_inst;           // will be used in ID stage
  /***** ID/EX pipeline registers *****/
  // From the control unit
  //reg ID_EX_alu_op;         // will be used in EX stage
  reg ID_EX_alu_src;        // will be used in EX stage
  reg ID_EX_mem_write;      // will be used in MEM stage
  reg ID_EX_mem_read;       // will be used in MEM stage
  reg ID_EX_mem_to_reg;     // will be used in WB stage
  reg ID_EX_reg_write;      // will be used in WB stage
  reg ID_EX_is_halted;

  // From others
  reg [31:0]ID_EX_rs1_data;
  reg [31:0]ID_EX_rs2_data;
  reg [31:0]ID_EX_imm;
  //reg ID_EX_ALU_ctrl_unit_input;
  reg [4:0]ID_EX_rd;
  reg [4:0]ID_EX_rs1;
  reg [4:0]ID_EX_rs2;
  reg [31:0]ID_EX_inst;

  /***** EX/MEM pipeline registers *****/
  // From the control unit
  reg EX_MEM_mem_write;     // will be used in MEM stage
  reg EX_MEM_mem_read;      // will be used in MEM stage
  //reg EX_MEM_is_branch;     // will be used in MEM stage
  reg EX_MEM_mem_to_reg;    // will be used in WB stage
  reg EX_MEM_reg_write;     // will be used in WB stage
  reg EX_MEM_is_halted;
  // From others
  reg [31:0]EX_MEM_alu_out;
  reg [31:0]EX_MEM_dmem_data;
  reg [4:0]EX_MEM_rd;

  /***** MEM/WB pipeline registers *****/
  // From the control unit
  reg MEM_WB_mem_to_reg;    // will be used in WB stage
  reg MEM_WB_reg_write;     // will be used in WB stage
  reg MEM_WB_is_halted;
  reg [4:0]MEM_WB_rd;
  // From others
  reg [31:0]MEM_WB_mem_to_reg_src_1;
  reg [31:0]MEM_WB_mem_to_reg_src_2;

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .pc_write(pc_write),
    .current_pc(current_pc)   // output
  );
  
  // ---------- Instruction Memory ----------
  InstMemory imem(
    .reset(reset),   // input
    .clk(clk),     // input
    .addr(current_pc),    // input
    .dout(inst)     // output
  );

  // Update IF/ID pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      IF_ID_inst <=0;
    end
    else if(IF_ID_write ==1)begin
      IF_ID_inst <= inst;
    end
  end

  // ---------- Register File ----------

  eq_mux eq_mux(
    .is_ecall(is_ecall),
    .rs1(IF_ID_inst[19:15]),
    .rs1_in(rs1_in)

  );

  RegisterFile reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (rs1_in),          // input
    .rs2 (IF_ID_inst[24:20]),          // input
    .rd (MEM_WB_rd),           // input
    .rd_din (rd_din),       // input
    .write_enable (MEM_WB_reg_write),    // input
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),      // output
    .print_reg(print_reg)
  );



  // ---------- Control Unit ----------
  ControlUnit ctrl_unit (
    .part_of_inst(IF_ID_inst[6:0]),  // input
    .stall(stall),
    .mem_read(mem_read),      // output
    .mem_to_reg(mem_to_reg),    // output
    .mem_write(mem_write),     // output
    .alu_src(alu_src),       // output
    .reg_write(reg_write),  // output
    .is_ecall(is_ecall)       // output (ecall inst)
  );

  Hazard hazard(
    .ID_EX_mem_read(ID_EX_mem_read),
    .ID_EX_reg_write(ID_EX_reg_write),
    .EX_MEM_reg_write(EX_MEM_reg_write),
    .id_rs1(IF_ID_inst[19:15]),
    .id_rs2(IF_ID_inst[24:20]),
    .ex_rd(ID_EX_rd),
    .mem_rd(EX_MEM_rd),
    .opcode(IF_ID_inst[6:0]),//ecall인데 raw일 경우 stall 필요
    .stall(stall),
    .pc_write(pc_write),
    .IF_ID_write(IF_ID_write)
  );

  halt halt(
    .is_ecall(is_ecall),
    .rs1_dout(rs1_dout),
    .is_halted(halt_id)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .instr(IF_ID_inst),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // Update ID/EX pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      ID_EX_alu_src <= 1'b0;
      ID_EX_mem_write <= 1'b0;
      ID_EX_mem_read <= 1'b0;
      ID_EX_mem_to_reg <= 1'b0;
      ID_EX_reg_write <= 1'b0;
      ID_EX_rs1_data <= 32'b0;
      ID_EX_rs2_data <= 32'b0;
      ID_EX_imm <= 32'b0;
      ID_EX_is_halted <= 1'b0;
      ID_EX_rd <= 5'b0;
      ID_EX_rs1 <= 5'b0;
      ID_EX_rs2 <= 5'b0;
      ID_EX_inst <= 32'b0;
    end
    else begin
      ID_EX_alu_src <= alu_src;
      ID_EX_mem_write <= mem_write;
      ID_EX_mem_read <= mem_read;
      ID_EX_mem_to_reg <= mem_to_reg;
      ID_EX_reg_write <= reg_write;
      ID_EX_rs1_data <= rs1_dout;//
      ID_EX_rs2_data <= rs2_dout;//
      ID_EX_imm <= imm_gen_out;//
      ID_EX_is_halted <= halt_id;
      ID_EX_rd <= IF_ID_inst[11:7];
      ID_EX_rs1 <= IF_ID_inst[19:15];
      ID_EX_rs2 <= IF_ID_inst[24:20];
      ID_EX_inst <= IF_ID_inst;
    end
  end

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit (
    .opcode(ID_EX_inst[6:0]),  // input
    .funct7(ID_EX_inst[30]),
    .funct3(ID_EX_inst[14:12]),
    .alu_op(alu_op)         // output
  );

  forward_a_mux forward_a_mux(
    .forward_a(forward_a),
    .rs1_data(ID_EX_rs1_data),
    .MEM_WB_output(rd_din),
    .EX_MEM_alu_out(EX_MEM_alu_out),
    .alu_input1(alu_1_forward)
  );


  forward_b_mux forward_b_mux(
    .forward_b(forward_b),
    .rs2_data(ID_EX_rs2_data),
    .MEM_WB_output(rd_din),
    .EX_MEM_alu_out(EX_MEM_alu_out),
    .Imm_mux_input(Imm_mux_input)
  );

  Imm_mux Imm_mux(
    .alu_src(ID_EX_alu_src),
    .Imm_mux_input(Imm_mux_input),
    .imm_gen_out(ID_EX_imm),
    .alu_input2(alu_2_forward)
  );



  // ---------- ALU ----------
  ALU alu (
    .alu_op(alu_op),      // input
    .alu_in_1(alu_1_forward),    // input  
    .alu_in_2(alu_2_forward),    // input
    .alu_result(alu_result)  // output
    //.alu_zero()     // output
  );

  // Update EX/MEM pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      EX_MEM_mem_write <= 1'b0;
      EX_MEM_mem_read <= 1'b0;
      EX_MEM_mem_to_reg <= 1'b0;
      EX_MEM_reg_write <= 1'b0;
      EX_MEM_alu_out <= 32'b0;
      EX_MEM_dmem_data <= 32'b0;
      EX_MEM_rd <= 5'b0;
      EX_MEM_is_halted <= 1'b0;
    end
    else begin
      EX_MEM_mem_write <= ID_EX_mem_write;
      EX_MEM_mem_read <= ID_EX_mem_read;
      EX_MEM_mem_to_reg <= ID_EX_mem_to_reg;
      EX_MEM_reg_write <= ID_EX_reg_write;
      EX_MEM_alu_out <= alu_result;
      EX_MEM_dmem_data <= Imm_mux_input;
      EX_MEM_rd <= ID_EX_rd;
      EX_MEM_is_halted <= ID_EX_is_halted;
    end
  end

  // ---------- Data Memory ----------
  DataMemory dmem(
    .reset (reset),      // input
    .clk (clk),        // input
    .addr (EX_MEM_alu_out),       // input
    .din (EX_MEM_dmem_data),        // input
    .mem_read (EX_MEM_mem_read),   // input
    .mem_write (EX_MEM_mem_write),  // input
    .dout (mem_dout)        // output
  );

  // Update MEM/WB pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      MEM_WB_mem_to_reg <= 1'b0;
      MEM_WB_reg_write <= 1'b0;
      MEM_WB_rd <= 5'b0;
      MEM_WB_mem_to_reg_src_1 <= 32'b0;
      MEM_WB_mem_to_reg_src_2 <= 32'b0;
      MEM_WB_is_halted <= 1'b0;
    end
    else begin
      MEM_WB_mem_to_reg <= EX_MEM_mem_to_reg;
      MEM_WB_reg_write <= EX_MEM_reg_write;
      MEM_WB_rd <= EX_MEM_rd;
      MEM_WB_mem_to_reg_src_1 <= mem_dout;
      MEM_WB_mem_to_reg_src_2 <= EX_MEM_alu_out;
      MEM_WB_is_halted <= EX_MEM_is_halted;
    end
  end

  mem_src_mux mem_src_mux(
    .mem2reg(MEM_WB_mem_to_reg),
    .MEM_src_1(MEM_WB_mem_to_reg_src_1),
    .MEM_src_2(MEM_WB_mem_to_reg_src_2),
    .MEM_output(rd_din)
  );
  
  forward_unit forward_unit(
    .ID_EX_rs1(ID_EX_rs1),
    .ID_EX_rs2(ID_EX_rs2),
    .EX_MEM_reg_write(EX_MEM_reg_write),
    .MEM_WB_reg_write(MEM_WB_reg_write),
    .EX_MEM_rd(EX_MEM_rd),
    .MEM_WB_rd(MEM_WB_rd),
    .forward_a(forward_a),
    .forward_b(forward_b)
  );

  reg halt_flag;

  always @(posedge clk) begin
    if (reset) begin
      halt_flag <= 1'b0;
    end 
    else begin
      halt_flag <= MEM_WB_is_halted;
    end
  end
  
  assign is_halted = halt_flag;

  
endmodule
