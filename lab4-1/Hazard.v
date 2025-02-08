`include "opcodes.v"

  module Hazard(
    input ID_EX_mem_read,
    input ID_EX_reg_write,
    input EX_MEM_reg_write,
    input [4:0] id_rs1,
    input [4:0] id_rs2,
    input [4:0] ex_rd,
    input [4:0] mem_rd,
    input [6:0]opcode,//ecall인데 raw일 경우 stall 필요
    output reg stall,
    output reg pc_write,
    output reg IF_ID_write );

    always @(*) begin
        stall =0;
        pc_write =1;
        IF_ID_write =1;

        if((ID_EX_mem_read ==1)  && (id_rs1 == ex_rd) && (id_rs1 != 17)) begin
            stall =1;
            pc_write =0;
            IF_ID_write =0;
        end

        if((ID_EX_mem_read ==1)  && (id_rs2 == ex_rd) && (id_rs2 != 17)) begin
            stall= 1;
            pc_write =0;
            IF_ID_write =0;
        end
        if(opcode ==`ECALL)begin
            if(ex_rd ==17 && ID_EX_reg_write ==1) begin
                stall=1;
                pc_write=0;
                IF_ID_write=0;
            end
            else if(mem_rd ==17 && EX_MEM_reg_write ==1)begin
                stall=1;
                pc_write=0;
                IF_ID_write=0;
            end
            else begin
                stall =0;
                pc_write =1;
                IF_ID_write =1;
            end
        end
    end




  endmodule
