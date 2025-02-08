module mem_src_mux(
    input mem2reg, //signal

    input is_jal, // new signal for branch
    input is_jalr,

    input [31:0] cur_pc, // pc address for pc + 4

    input [31:0] MEM_src_1,
    input [31:0] MEM_src_2,
    output reg [31:0] MEM_output
);
    always @(*) begin
        if (is_jal||is_jalr) begin
            assign MEM_output = cur_pc + 4;
        end
        else if (mem2reg == 1) begin
            assign MEM_output = MEM_src_1;
        end
        else begin
            assign MEM_output = MEM_src_2;
        end
    end

endmodule
