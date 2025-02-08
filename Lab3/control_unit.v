`include "opcodes.v"

`define IF 3'b000 // IF stage
`define ID 3'b001 // ID stage
`define EX_1 3'b010 // alu 연산
`define EX_2 3'b011 // branch(Bcond == 1)
`define MEM 3'b100 // MEM Stage
`define WB 3'b101 // WB Stage

module control_unit( input [6:0]opcode,
                     input clk,
                     output reg mem_read,
                     output reg mem_to_reg,
                     output reg mem_write,
                     output reg pc_source,
                     output reg pc_branch,
                     output reg pc_write,
                     output reg alu_src_a,
                     output reg [1:0]alu_src_b,
                     output reg reg_write,
                     output reg iord,     
                     output reg irwrite,
                     output reg alu_pc,
                     output reg is_ecall                                   
                     );

  reg [2:0]curr_stage;
  reg [2:0]next_stage;

  initial begin
    curr_stage = 0;
    next_stage =0;
  end

  always @(*) begin
     alu_pc = 0;
     mem_read =0;
     mem_to_reg =0;
     mem_write =0;
     pc_source =0;
     pc_branch =0;
     pc_write =0;
     alu_src_a =0;
     alu_src_b =0;
     reg_write =0;
     iord =0;
     irwrite =0;
     is_ecall =0;

    if(opcode == `ARITHMETIC) begin //r-type

      case(curr_stage) 
        `IF : begin
          next_stage = 1;
          mem_read =1;
          irwrite =1;
        end
        `ID : begin
          next_stage = 2;
          alu_src_a =0;
          alu_src_b =1;
          alu_pc = 1; 
          pc_write=1;//어차피 pc 안바뀌니까 먼저 업데이트
          pc_source =0;
        end
        `EX_1 : begin
             next_stage = 5;
             alu_src_a = 1;
             alu_src_b = 0;
        end
        `WB : begin
             next_stage =0;
             reg_write =1;

             pc_source =0;
        end 
        default: begin
    end
      endcase
    end

    else if(opcode == `ARITHMETIC_IMM) begin//i-type
      case(curr_stage) 
        `IF : begin
          next_stage = 1;
          mem_read =1;
          irwrite =1;
        end
        `ID : begin
          next_stage = 2;
          alu_src_a =0;
          alu_src_b =1;
          alu_pc = 1;
          pc_write=1;//어차피 pc 안바뀌니까 먼저 업데이트
          pc_source =0;
        end
        `EX_1 : begin
          next_stage = 5;
          alu_src_a = 1;
          alu_src_b = 2;
        end
        `WB : begin
          next_stage = 0;
          reg_write = 1;
        end 
        default: begin
        end
      endcase
    end
    else if(opcode == `LOAD) begin
      case(curr_stage) 
        `IF : begin
             next_stage = 1;
             mem_read =1;
             irwrite =1;
        end

        `ID : begin
             next_stage = 2;
             alu_src_a =0;
             alu_src_b =1;
             alu_pc = 1;
             pc_write =1;
             pc_source =0;

        end
        `EX_1 : begin
             next_stage = 4;
             alu_src_a = 1;
             alu_src_b = 2;
        end
        `MEM : begin
             next_stage =5;
             iord =1;//메모리 주소 받아야됨.
             mem_read =1;
        end
        `WB : begin
             next_stage =0;

             reg_write =1;
             mem_to_reg =1;
        end 
        default: begin
    end
      endcase
    end
    else if(opcode ==`STORE) begin
      case(curr_stage) 
        `IF : begin
          next_stage = 1;
          mem_read =1;
          irwrite =1;
        end

        `ID : begin
          next_stage = 2;
          alu_src_a =0;//pc 업데이트
          alu_src_b =1;
          alu_pc = 1;
          pc_write =1;
          pc_source =0;
        end
        `EX_1 : begin
          next_stage = 4;
          alu_src_a = 1;
          alu_src_b = 2;
        end
        `MEM : begin
          next_stage =0;
          iord =1;//메모리 주소 받아야됨.
          mem_write =1;
        end
        default: begin
    end
      endcase
    end
    else if(opcode == `BRANCH) begin
    case(curr_stage)
    `IF: begin
      mem_read = 1; // fetch instruction
      irwrite =1;
      next_stage = 1; // go to ID
    end
    `ID: begin
      next_stage = 2; // go to EX1
    end
    `EX_1: begin 
      alu_src_a =0; // MUX: PC
      alu_src_b =2; // MUX: Immediate value
      alu_pc = 1; // ALUOut = PC + IMM

      next_stage = 3; // go to EX2
    end
    `EX_2: begin// for bcond
      alu_src_a =1; // MUX: A
      alu_src_b =0; // MUX: B

      pc_write = 1;   
      pc_branch = 1; // Update PC conditionaly

      next_stage = 0; // go to WB
    end
    default: begin
    end
    endcase
  end
  else if(opcode == `JAL) begin
    case(curr_stage)
    `IF: begin
       mem_read = 1; // fetch instruction
       next_stage = 1; // go to ID
       irwrite =1;
    end
    `ID: begin
       next_stage = 5; // go to WB
       alu_src_a =0;
       alu_src_b =1; // ALUOut = PC + 4
       alu_pc = 1;
    end
    `WB: begin
       mem_to_reg = 0;
       reg_write = 1; // reg = ALUOut(PC + 4)

       alu_src_a = 0; // MUX: PC
       alu_src_b = 2; // MUX: Immediate value
       pc_source = 0;
       pc_write = 1; // PC = PC + Immediate value

       next_stage = 0; // go to IF
    end
    default: begin
    end
    endcase
  end
  else if(opcode == `JALR) begin
    case(curr_stage)
    `IF: begin
       mem_read = 1; // fetch instructio
       next_stage = 1; // go to ID
       irwrite =1;
    end
    `ID: begin
       next_stage = 5; // go to WB
       alu_src_a =0;
       alu_src_b =1; // ALUOut = PC + 4
       alu_pc = 1;
    end
    `WB: begin
       mem_to_reg = 0;
       reg_write = 1; // reg = ALUOut(PC + 4)
       alu_src_a = 1; // MUX: A
       alu_src_b = 2; // MUX: Immediate value
       pc_source = 0;
       pc_write = 1; // PC = A + Immediate value
      
       next_stage = 0; // go to IF
    end
    default: begin
    end
    endcase
  end
  else if(opcode == `ECALL) begin //ecall
      is_ecall =1;
      alu_src_a =0;
      alu_src_b =1; // ALUOut = PC + 4
      alu_pc = 1;
      pc_source = 0;
      pc_write=1;

      mem_read =1;
      irwrite =1;
      next_stage =1;
  end
  else begin
    mem_read =1;
    irwrite =1;
    next_stage =1;
  end
  end

  always @(posedge clk) begin
    curr_stage <= next_stage;
  end

endmodule
    
