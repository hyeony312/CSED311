module forward_a_mux(
    input [1:0] forward_a,
    input [31:0] rs1_data,
    input [31:0] MEM_WB_output,
    input [31:0] EX_MEM_alu_out,
    output reg [31:0] alu_input1
);
    always @(*) begin
        if(forward_a == 0)begin
            assign alu_input1 = rs1_data;
        end
        else if(forward_a==1) begin
            assign alu_input1 = MEM_WB_output;
        end
        else begin
            assign alu_input1 = EX_MEM_alu_out;
        end
    end

endmodule
