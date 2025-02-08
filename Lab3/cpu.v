// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted,
           output [31:0]print_reg[0:31]
           ); // Whehther to finish simulation
  /***** Wire declarations *****/
  wire mem_read;
  wire mem_to_reg;
  wire mem_write;
  wire alu_src;
  wire pc_write;
  wire pc_branch;
  wire pc_source;
  wire alu_src_a;
  wire [1:0] alu_src_b;
  wire iord;
  wire irwrite;
  wire reg_write;
  wire is_ecall;
  wire alu_pc;

  //immgen
  wire[31:0] imm_gen_out;

  //pc
  wire [31:0] current_pc;
  wire [31:0]next_pc;

  //wire

  wire [4:0]rs1;
  wire [4:0]rs2;
  wire [31:0]rs1_dout;
  wire [31:0]rs2_dout;
  wire [4:0]rd;

  // wire [4:0]rd;
  wire [31:0]rd_din;
  wire [31:0] reg_write_data;//reg에 쓸 write_data중 mux 0에 해당되는 와이어


  //memory
  wire [31:0] mem_out;
  wire [31:0] addr;

  //alu
  wire [3:0]alu_op;
  wire [31:0]alu_in_1;
  wire [31:0]alu_in_2;
  wire [31:0]alu_result;
  wire bcond;



  /***** Register declarations *****/
  reg [31:0] IR; // instruction register
  reg [31:0] MDR; // memory data register
  reg [31:0] A; // Read 1 data register
  reg [31:0] B; // Read 2 data register
  reg [31:0] ALUOut; // ALU output register
  // Do not modify and use registers declared above.

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  pc pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),     // input

    .pc_write(pc_write),

    .current_pc(current_pc)   // output
  );

  pc_mux pc_mux(
    .pc_source(pc_source),
    .ALUOut(ALUOut),
    .current_pc(current_pc),
    .alu_result(alu_result),
    .pc_branch(pc_branch),
    .bcond(bcond),
    .next_pc(next_pc)
  );

  mem_mux mem_mux(
    .iord(iord),
    .pc(current_pc),
    .ALUOut(ALUOut),
    .addr(addr)
  );
  
  mem2reg_mux mem2reg_mux(
    .mem_to_reg(mem_to_reg),
    .MDR(MDR),
    .ALUOut(ALUOut),
    .rd_din(rd_din)
  );

  // ---------- Register File ----------
  RegisterFile reg_file(
    .reset(reset),        // input
    .clk(clk),          // input
    .rs1(IR[19:15]),          // input
    .rs2(IR[24:20]),          // input
    .rd(IR[11:7]),           // input
    .rd_din(rd_din),       // input
    .is_ecall(is_ecall),
    .is_halted(is_halted),
    .write_enable(reg_write),    // input
    .rs1_dout(A),     // output
    .rs2_dout(B),      // output
    .print_reg(print_reg)     // output (TO PRINT REGISTER VALUES IN TESTBENCH)
  );

  alu_input1_mux alu_input1_mux(
    .alu_src_a(alu_src_a),
    .PC(current_pc),
    .A(A),
    .alu_in_1(alu_in_1)
  );

  alu_input2_mux alu_input2_mux(
    .alu_src_b(alu_src_b),
    .B(B),
    .imm_gen_out(imm_gen_out),
    .alu_in_2(alu_in_2)
  );

  // ---------- Memory ----------
  Memory memory(
    .reset(reset),        // input
    .clk(clk),          // input
    .addr(addr),         // input
    .din(B),          // input
    .mem_read(mem_read),     // input
    .mem_write(mem_write),    // input
    .dout(mem_out)          // output
  );

  always @ (posedge clk) begin
    if(irwrite ==1) begin
      IR <= mem_out;
    end
    MDR <= mem_out;
    ALUOut <= alu_result;
  end

  // ---------- Control Unit ----------
  control_unit control_unit(
     .opcode(IR[6:0]),
     .clk(clk),
     .mem_read(mem_read),
     .mem_to_reg(mem_to_reg),
     .mem_write(mem_write),
     .pc_source(pc_source),
     .pc_branch(pc_branch),
     .pc_write(pc_write),
     .alu_src_a(alu_src_a),
     .alu_src_b(alu_src_b),
     .alu_pc(alu_pc),
     .reg_write(reg_write),
     .iord(iord),     
     .irwrite(irwrite),
     .is_ecall(is_ecall)
  );

  // ---------- Immediate Generator ----------
  immediate_generator immediate_generator(
    .instr(IR),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_control_unit(
    .opcode(IR[6:0]),  // input         
    .funct7(IR[30]),
    .funct3(IR[14:12]),
    .alu_pc(alu_pc),
    .alu_op(alu_op)
  );

  // ---------- ALU ----------
  alu alu(
    .alu_op(alu_op),      // input
    .alu_in_1(alu_in_1),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .bcond(bcond)     // output
  );

endmodule
