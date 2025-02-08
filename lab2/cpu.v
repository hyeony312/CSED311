// Submit this file with other files you created.
// Do not touch port declarations of the module 'cpu'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,                     // positive reset signal
           input clk,                       // clock signal
           output is_halted,                // Whehther to finish simulation
           output [31:0] print_reg [0:31]); // TO PRINT REGISTER VALUES IN TESTBENCH (YOU SHOULD NOT USE THIS)
  /***** Wire declarations *****/

  /***** Register declarations *****/
  //control signal
  wire is_jal;
  wire is_jalr;
  wire branch;
  wire mem_read;
  wire mem_to_reg;
  wire mem_write;
  wire alu_src;
  wire write_enable;
  wire pc_to_reg;
  wire is_ecall;
  //immgen
  wire[31:0] imm_gen_out;

  //pc
  wire [31:0] current_pc;
  wire [31:0]next_pc;

  //register
  wire [31:0]instr;
  // wire [4:0]rs1;
  // wire [4:0]rs2;
  wire [31:0]rs1_dout;
  wire [31:0]rs2_dout;
  // wire [4:0]rd;
  wire [31:0]rd_din;
  wire [31:0] reg_write_data;//reg에 쓸 write_data중 mux 0에 해당되는 와이어


  //memory
  wire [31:0] mem_out;


  //alu
  wire [3:0]alu_op;
  // wire [31:0]alu_in_1;
  wire [31:0]alu_in_2;
  wire [31:0]alu_result;
  wire bcond;



  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  pc pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),     // input
    .current_pc(current_pc)   // output
  );
  
  // ---------- Instruction Memory ----------
  instruction_memory imem(
    .reset(reset),   // input
    .clk(clk),     // input
    .addr(current_pc),    // input
    .dout(instr)     // output
  );

  regmux regmux(
    .current_pc(current_pc),
    .reg_write_data(reg_write_data),
    .pc_to_reg(pc_to_reg),
    .rd_din(rd_din)
  );

  // ---------- Register File ----------
  register_file reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (instr[19:15]),          // input
    .rs2 (instr[24:20]),          // input
    .rd (instr[11:7]),           // input
    .rd_din (rd_din),       // input
    .write_enable (write_enable), // input
    .is_ecall(is_ecall), // is ecall
    .is_halted(is_halted), // output: is_halted
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),     // output
    .print_reg (print_reg)  //DO NOT TOUCH THIS
  );


  // ---------- Control Unit ----------
  control_unit ctrl_unit (
    .part_of_inst(instr[6:0]),  // input
    .is_jal(is_jal),        // output
    .is_jalr(is_jalr),       // output
    .branch(branch),        // output
    .mem_read(mem_read),      // output
    .mem_to_reg(mem_to_reg),    // output
    .mem_write(mem_write),     // output
    .alu_src(alu_src),       // output
    .write_enable(write_enable),  // output
    .pc_to_reg(pc_to_reg),     // output
    .is_ecall(is_ecall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .instr(instr),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit (
    .opcode(instr[6:0]),
    .funct7(instr[30]),  // input
    .funct3(instr[14:12]),
    .alu_op(alu_op)        // output
  );
  alumux alumux(
    .rs2_dout(rs2_dout),
    .imm_gen_out(imm_gen_out),
    .alu_src(alu_src),
    .alu_in_2(alu_in_2)
  );
    
  // ---------- ALU ----------
  alu alu (
    .alu_op(alu_op),      // input
    .alu_in_1(rs1_dout),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .bcond(bcond)    // output
  );

  pcmux pcmux(
    .current_pc(current_pc),
    .imm_gen_out(imm_gen_out),//pc+sing_extend(imm21)
    .alu_result(alu_result),//pc <- gpr[rs1] +sign_extend(imm12)
    .branch(branch),
    .is_jal(is_jal),
    .is_jalr(is_jalr),
    .bcond(bcond),
    .next_pc(next_pc)
  );

  // ---------- Data Memory ----------
  data_memory dmem(
    .reset (reset),      // input
    .clk (clk),        // input
    .addr (alu_result),       // input
    .din (rs2_dout),        // input
    .mem_read (mem_read),   // input
    .mem_write (mem_write),  // input
    .dout (mem_out)        // output
  );

  regmux_mux regmux_mux(
    .mem_out(mem_out),
    .alu_result(alu_result),
    .mem_to_reg(mem_to_reg),
    .reg_write_data(reg_write_data)
  );

 
endmodule
