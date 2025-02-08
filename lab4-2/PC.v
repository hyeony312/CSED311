module PC(
    input reset,
    input clk,
    input pc_write,
    input [31:0] next_pc,
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
            current_pc <= next_pc;
            pc_reg <= next_pc;
        end
    end



endmodule
