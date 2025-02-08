module alu_input1_mux (
    input alu_src_a,
    input [31:0] PC, 
    input [31:0] A, 
    output reg [31:0] alu_in_1);

    always @(*) begin
        if(alu_src_a==0) begin
            assign alu_in_1 = PC;
        end
        else begin
            assign alu_in_1 = A;
        end
    end

endmodule
