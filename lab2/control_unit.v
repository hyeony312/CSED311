`include "opcodes.v"

module control_unit( input [6:0]part_of_inst,
                     output reg is_jal,
                     output reg is_jalr,
                     output reg branch,
                     output reg mem_read,
                     output reg mem_to_reg,
                     output reg mem_write,
                     output reg alu_src,
                     output reg write_enable,
                     output reg pc_to_reg,
                     output reg is_ecall
                     );

  always @(*) begin//becond는 어떻게??
    assign is_jal=0;
    assign is_jalr = 0;
    assign branch =0;
    assign mem_read =0;
    assign mem_to_reg =0;
    assign mem_write =0;
    assign alu_src =0;
    assign write_enable =0;
    assign pc_to_reg =0;
    assign is_ecall =0;


    if(part_of_inst == `ARITHMETIC) begin
        assign write_enable=1;
    end
    else if(part_of_inst == `ARITHMETIC_IMM) begin
        assign alu_src =1;
        assign write_enable =1;
    end
    else if(part_of_inst == `STORE) begin
        assign mem_write=1;
        assign alu_src=1;
    end
    else if(part_of_inst ==`LOAD) begin
        assign mem_to_reg=1;
        assign write_enable =1;
        assign alu_src =1;
        assign mem_read =1;
    end
    else if(part_of_inst ==`BRANCH) begin
        assign branch =1;
    end
    else if(part_of_inst == `JAL) begin
        assign is_jal =1;
        assign write_enable=1;
        assign pc_to_reg =1;
    end
    else if(part_of_inst ==`JALR) begin
        assign is_jalr =1;
        assign write_enable=1;
        assign pc_to_reg =1;
        assign alu_src=1;
    end
    else if(part_of_inst == `ECALL)begin
        assign is_ecall=1;
    end
  end




endmodule
    

