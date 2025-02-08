module forward_b_mux(
    input [1:0] forward_b,
    input [31:0] rs2_data,
    input [31:0] MEM_WB_output,
    input [31:0] EX_MEM_alu_out,
    output reg [31:0] Imm_mux_input
);
    always @(*) begin
        if(forward_b == 0)begin
            assign Imm_mux_input = rs2_data;
        end
        else if(forward_b==1) begin
            assign Imm_mux_input = MEM_WB_output;
        end
        else begin
            assign Imm_mux_input = EX_MEM_alu_out;
        end
    end

endmodule
