module mem2reg_mux(
    input mem_to_reg,
    input [31:0] MDR,
    input [31:0] ALUOut,
    output reg [31:0] rd_din
);
    always @(*) begin
        if(mem_to_reg ==1)begin
            assign rd_din = MDR ;
        end
        else begin
            assign rd_din = ALUOut;
        end
    end

endmodule
