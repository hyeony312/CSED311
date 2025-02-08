module alu_input2_mux(
    input [1:0]alu_src_b,
    input [31:0] B,
    input [31:0] imm_gen_out,
    output reg [31:0] alu_in_2
);
    always @(*) begin
        if(alu_src_b == 0)begin
            assign alu_in_2 = B;
        end
        else if(alu_src_b ==1) begin
            assign alu_in_2 =4;
        end
        else begin
            assign alu_in_2 = imm_gen_out;
        end

    end

endmodule
