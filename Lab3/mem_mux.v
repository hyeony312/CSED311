module mem_mux(
    input iord,
    input [31:0] pc,
    input [31:0] ALUOut,
    output reg [31:0] addr
);

    always@ (*) begin
        if (iord ==1) begin
            assign addr = ALUOut;
        end
        else begin
            assign addr = pc;
        end
    end

endmodule
