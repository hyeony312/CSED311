module branch_bubble_unit(
    input ID_EX_is_branch,
    input ID_EX_is_jal,
    input ID_EX_is_jalr,
    input bcond,
    output reg bubble,
    output reg [1:0] pc_src
);

    initial begin
            assign pc_src = 0;
            assign bubble = 0;
    end
    
    always @(*) begin
        if((ID_EX_is_branch && bcond) || ID_EX_is_jal)begin
            assign pc_src = 1;
            assign bubble = 1;
        end
        else if(ID_EX_is_jalr) begin
            assign pc_src=2;
            assign bubble =1;
        end
        else begin
            assign pc_src = 0;
            assign bubble = 0;
        end
    end

endmodule
