module pcmux(
    input [31:0] current_pc,
    input [31:0] imm_gen_out,//pc+sing_extend(imm21)
    input [31:0] alu_result,//pc <- gpr[rs1] +sign_extend(imm12)
    input branch,
    input is_jal,
    input is_jalr,
    input bcond,
    output reg [31:0] next_pc);

    always @(*) begin
        assign next_pc=0;

        if( (branch ==1 && bcond==1) || is_jal==1 )begin//(jal, jalr은 조건에 안넣어도 될듯)
            assign next_pc = current_pc+imm_gen_out;
        end

        else if(is_jalr ==1 )begin
            assign next_pc = alu_result;
        end

        else begin
            assign next_pc = current_pc+4;
        end
    end

endmodule
