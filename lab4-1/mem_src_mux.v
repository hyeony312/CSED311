module mem_src_mux(
    input mem2reg, //signal
    input [31:0] MEM_src_1,
    input [31:0] MEM_src_2,
    output reg [31:0] MEM_output
);
    always @(*) begin
        if (mem2reg == 1) begin
            assign MEM_output = MEM_src_1;
        end
        else begin
            assign MEM_output = MEM_src_2;
        end
    end

endmodule
