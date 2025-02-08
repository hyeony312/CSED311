  `include "opcodes.v"
  
  module ImmediateGenerator(
        input [31:0] instr,
        output reg [31:0] imm_gen_out
    );

    reg [6:0] opcode;

    always @(*) begin
        assign opcode = instr[6:0];

        if (opcode == `ARITHMETIC_IMM || opcode == `LOAD || opcode == `JALR) begin
            // I-type instrunction
            imm_gen_out = { {20{instr[31]}}, instr[31:20] };
            
        end else if (opcode == `STORE) begin
            // S-type instrunction
            imm_gen_out = { {20{instr[31]}} , instr[31:25] , instr[11:7] };

        end else if (opcode == `BRANCH) begin
            // SB-type instrunction
            imm_gen_out = { {19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0 };

        end else if (opcode == `JAL) begin
            // UJ-Type instrunction
            imm_gen_out = { {11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0 };
        end
        else begin
            imm_gen_out = 32'b0;
        end
    end

  endmodule
