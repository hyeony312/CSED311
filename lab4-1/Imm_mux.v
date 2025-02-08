module Imm_mux(
    input alu_src,
    input [31:0] Imm_mux_input,
    input [31:0] imm_gen_out,
    output reg [31:0] alu_input2
);
    always @(*) begin
        if(alu_src == 0)begin
            assign alu_input2 = Imm_mux_input;
        end
        else begin
            assign alu_input2 = imm_gen_out;
        end

    end

endmodule
