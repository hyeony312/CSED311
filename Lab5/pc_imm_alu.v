module pc_imm_alu(
    input[31:0] current_pc,
    input[31:0] imm,
    output reg [31:0] imm_plus_pc
);
    always @(*) begin
        imm_plus_pc = current_pc + imm;
    end
        
endmodule
