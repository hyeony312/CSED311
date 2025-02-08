`include "opcodes.v"

module ALU(
          input [3:0] alu_op,
          input [31 : 0] alu_in_1, 
          input [31 : 0] alu_in_2, 
          output reg [31 : 0] alu_result
          //output reg bcond
          );

initial begin
   alu_result = 0;
   //bcond = 0;
end      

always @(*)begin
   //bcond = 0;
   alu_result=0;

   if(alu_op == `alu_ADD)begin
      assign alu_result = alu_in_1+alu_in_2;
   end

   else if(alu_op == `alu_SUB) begin
      assign alu_result = alu_in_1-alu_in_2;
   end

   else if(alu_op == `alu_AND)begin
      assign alu_result = alu_in_1 & alu_in_2;
   end

   else if(alu_op == `alu_OR)begin
      assign alu_result = alu_in_1 | alu_in_2;
   end

   else if(alu_op == `alu_XOR)begin
      assign alu_result = alu_in_1^alu_in_2;
   end

   else if(alu_op == `alu_LLS)begin
      assign alu_result = $signed(alu_in_1)<<$signed(alu_in_2);
   end

   else if(alu_op == `alu_LRS)begin
      assign alu_result = $signed(alu_in_1)>>$signed(alu_in_2);
   end
/*
   else if(alu_op == `alu_BEQ)begin
      assign alu_result = alu_in_1 - alu_in_2;

        if(alu_result == 0)begin
            bcond = 1;
        end
        else begin
            bcond = 0;
        end
   end

    else if(alu_op == `alu_BNE)begin
      assign alu_result = alu_in_1 - alu_in_2;
        
        if(alu_result == 0)begin
            bcond = 0;
        end
        else begin
            bcond = 1;
        end
   end

    else if(alu_op == `alu_BLT)begin
      assign alu_result = alu_in_1 - alu_in_2;

        if($signed(alu_in_1)<$signed(alu_in_2))begin
         bcond = 1;
        end
        else begin
         bcond = 0;
        end
   end

    else if(alu_op == `alu_BGE)begin
      assign alu_result = alu_in_1 - alu_in_2;

        if($signed(alu_in_1)>=$signed(alu_in_2))begin
         bcond = 1;
        end
        else begin
         bcond = 0;
        end
   end
   */

end

endmodule

