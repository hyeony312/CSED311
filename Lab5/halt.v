module halt(
    input is_ecall,
    input [31:0]rs1_dout,
    output reg is_halted);//is_halted는 cpu에 wire선언해서 연결해줘야함.(그리고 posedge clk마다 ID_EX_is_halted에 그 wire로 업데이트)

    always @(is_ecall, rs1_dout) begin

        if (is_ecall && (rs1_dout == 10)) begin
            is_halted = 1;
        end 
        else begin
            is_halted = 0;
        end
    end

endmodule
