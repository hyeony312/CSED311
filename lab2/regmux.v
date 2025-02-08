module regmux(
    input [31:0] current_pc,
    input [31:0] reg_write_data,
    input pc_to_reg,
    output reg [31:0] rd_din);
    
    always @(*) begin
        rd_din=0;

        if(pc_to_reg ==1 )begin
            rd_din = current_pc+4;
        end
        else begin
            rd_din = reg_write_data;
        end
    end

endmodule
