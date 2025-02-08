module pc_mux(
    input[1:0] pc_src,
    input[31:0] current_pc,
    input[31:0] imm_plus_pc,
    input[31:0] jalr_pc,
    output reg [31:0] next_pc
);
    always @(*) begin
        if(pc_src ==0) begin
            next_pc =current_pc+4;
        end
        else if(pc_src ==1) begin
            next_pc = imm_plus_pc;
        end
        else begin
            next_pc = jalr_pc;
        end
    end


endmodule
