`include "opcodes.v"

module ControlUnit( input [6:0]part_of_inst,
                     input stall,

                    input [1:0] pc_src, // new signal
                    input bubble, // new signal

                     output reg is_jal,
                     output reg is_jalr,
                     output reg branch,

                     output reg mem_read,
                     output reg mem_to_reg,
                     output reg mem_write,
                     output reg alu_src,
                     output reg reg_write,
                     output reg is_ecall
                     );

  always @(*) begin
    assign is_jal=0;
    assign is_jalr = 0;
    assign branch =0;

    assign mem_read =0;
    assign mem_to_reg =0;
    assign mem_write =0;
    assign alu_src =0;
    assign reg_write =0;
    assign is_ecall =0;

    if(part_of_inst == `ARITHMETIC) begin
        assign reg_write=1;
    end
    else if(part_of_inst == `ARITHMETIC_IMM) begin
        assign alu_src =1;
        assign reg_write =1;
    end
    else if(part_of_inst == `STORE) begin
        assign mem_write=1;
        assign alu_src=1;
    end
    else if(part_of_inst ==`LOAD) begin
        assign mem_to_reg=1;
        assign reg_write =1;
        assign alu_src =1;
        assign mem_read =1;
    end
    else if(part_of_inst ==`BRANCH) begin
        assign branch =1;
    end
    else if(part_of_inst == `JAL) begin
        assign is_jal =1;
        assign reg_write=1;
    end
    else if(part_of_inst ==`JALR) begin
        assign is_jalr =1;
        assign reg_write=1;
        assign alu_src=1;
    end
    else if(part_of_inst == `ECALL)begin
        assign is_ecall=1;
    end

    if (stall || (pc_src!=0) || bubble) begin // make bubble for branch
        assign mem_read = 0;//load에서 안꼬이게
        assign mem_write = 0;
        assign reg_write = 0;
        assign is_jal=0;
        assign is_jalr = 0;
        assign branch =0;
    end
  end




endmodule
