module instr_reg(
    input irwrite,
    input [31:0]mem_out,
    output reg[31:0]IR,
    output reg [31:0] MDR
);
    reg [31:0]instr;

    initial begin
        assign instr = 0;
        assign MDR = mem_out;
    end

    always @(*) begin
      if(irwrite ==1) begin
        assign instr = mem_out;
        assign IR = mem_out;
      end

      else begin
        assign IR = instr;
      end
    end
    
endmodule
