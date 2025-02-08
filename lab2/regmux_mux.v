module regmux_mux(
    input [31:0] mem_out,
    input [31:0] alu_result,
    input mem_to_reg,
    output reg [31:0] reg_write_data);
    
    always @(*) begin
        if(mem_to_reg==1)begin
            assign reg_write_data =mem_out;
        end
        else begin
            assign reg_write_data = alu_result;
        end
    end


  endmodule
