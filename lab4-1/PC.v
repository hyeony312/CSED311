module PC(
    input reset,
    input clk,
    input pc_write,
    output reg [31:0]current_pc
);
    reg[31:0] pc_reg;

    always @(posedge clk) begin
        if(reset) begin
            current_pc <= 0;
            pc_reg <=0;
        end
        else if(pc_write == 0) begin//load로 인한 hazard가 생겼을 경우 fetch 한번 쉬어야함
             current_pc <= pc_reg;
        end
        else begin
            current_pc <= current_pc+4;
            pc_reg <= current_pc+4;
        end
    end



endmodule
