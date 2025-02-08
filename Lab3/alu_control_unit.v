`include "opcodes.v"
module alu_control_unit (input [6:0]opcode,  // input
                         input  funct7,
                         input  [2:0]funct3,
                         input alu_pc, // 설정되어 있으면 무조건 더하기 -> PC + 4 계산
                         output reg [3:0]alu_op   // output
                        );
  always @(*) begin
    assign alu_op = 0;

    if(alu_pc == 1) begin // alu_pc가 1이면 무조건 add 연산
        assign alu_op = `alu_ADD;
    end
    else if(opcode == `ARITHMETIC && funct7 ==1) begin
        assign alu_op = `alu_SUB;
    end

    else if(opcode == `JAL || opcode == `JALR || opcode ==`LOAD || opcode == `STORE || 
            ((opcode == `ARITHMETIC || opcode ==`ARITHMETIC_IMM) && funct3 ==`FUNCT3_ADD) )begin
        assign alu_op =`alu_ADD;
    end

    else if(opcode == `BRANCH) begin
        if(funct3 == `FUNCT3_BEQ) begin
            assign alu_op =`alu_BEQ;
        end
        else if(funct3 == `FUNCT3_BGE)begin
            assign alu_op =`alu_BGE;
        end
        else if(funct3 == `FUNCT3_BLT)begin
            assign alu_op =`alu_BLT;
        end
        else begin
            assign alu_op =`alu_BNE;
        end
    end

    else if(opcode==`ARITHMETIC_IMM )begin //xori ,xor 등등 하기
        if(funct3 == 3'b100)begin//xori
            assign alu_op = `alu_XOR;
        end
        else if(funct3 == 3'b110)begin//ori
            assign alu_op = `alu_OR;
        end
        else if(funct3 == 3'b111)begin//andi
            assign alu_op = `alu_AND;
        end
        else if(funct3 == 3'b001)begin//slli
            assign alu_op = `alu_LLS;
        end
        else if(funct3 == 3'b101)begin//srli
            assign alu_op = `alu_LRS;
        end
    end

    else if(opcode ==`ARITHMETIC)begin
        if(funct3 == 3'b100)begin//xor
            assign alu_op = `alu_XOR;
        end
        else if(funct3 == 3'b110)begin//or
            assign alu_op = `alu_OR;
        end
        else if(funct3 == 3'b111)begin//and
            assign alu_op = `alu_AND;
        end
        else if(funct3 == 3'b001)begin//sll
            assign alu_op = `alu_LLS;
        end
        else if(funct3 == 3'b101)begin//srl
            assign alu_op = `alu_LRS;
        end
    end

  end

endmodule
