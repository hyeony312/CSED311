module pc_mux (
    input pc_source,
    input [31:0] ALUOut,
    input [31:0] alu_result,
    input [31:0] current_pc,
    input pc_branch,
    input bcond,
    output reg [31:0] next_pc
  );
  always @(*) begin
    if(pc_branch ==1)begin
      if(bcond==1)begin
        assign next_pc = ALUOut;
      end
      else begin
        assign next_pc = current_pc + 4;
      end
    end
    else if(pc_source == 0) begin
        assign next_pc = alu_result;
    end
    else begin
        assign next_pc = ALUOut;
    end
  end
endmodule
