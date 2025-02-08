module eq_mux(
    input is_ecall,
    input [4:0]rs1,
    output reg[4:0]rs1_in
);
    always @(*) begin
        rs1_in = rs1;

        if(is_ecall==1) begin
            rs1_in =17;
        end
    end

endmodule
