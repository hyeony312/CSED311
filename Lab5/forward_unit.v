module forward_unit(
    input [4:0]ID_EX_rs1,
    input [4:0]ID_EX_rs2,
    input EX_MEM_reg_write,
    input MEM_WB_reg_write,
    input [4:0] EX_MEM_rd,
    input [4:0] MEM_WB_rd,
    output reg [1:0]forward_a,
    output reg [1:0]forward_b
);

initial begin
    forward_a = 0;
    forward_b = 0;
end
    always @(*) begin
        if((ID_EX_rs1!=0)&&(ID_EX_rs1==EX_MEM_rd)&&EX_MEM_reg_write) begin
            assign forward_a=2;
        end
        else if((ID_EX_rs1!=0)&&(ID_EX_rs1==MEM_WB_rd)&&MEM_WB_reg_write) begin
            assign forward_a=1;
        end
        else begin
            assign forward_a=0;
        end

        if((ID_EX_rs2!=0)&&(ID_EX_rs2==EX_MEM_rd)&&EX_MEM_reg_write) begin
            assign forward_b=2;
        end
        else if((ID_EX_rs2!=0)&&(ID_EX_rs2==MEM_WB_rd)&&MEM_WB_reg_write) begin
            assign forward_b=1;
        end
        else begin
            assign forward_b=0;
        end
    end

endmodule
