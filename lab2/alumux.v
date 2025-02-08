module alumux(
    input [31:0] rs2_dout,
    input [31:0] imm_gen_out,
    input alu_src,
    output reg [31:0] alu_in_2
);
    always @(*) begin
        assign alu_in_2=0;

        if(alu_src ==1 )begin
            assign alu_in_2 = imm_gen_out;
        end
        else begin
            assign alu_in_2 = rs2_dout;
        end
    end

endmodule
