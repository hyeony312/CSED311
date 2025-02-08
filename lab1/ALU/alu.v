`include "alu_func.v"

module alu #(parameter data_width = 16) (
	input [data_width - 1 : 0] A, 
	input [data_width - 1 : 0] B, 
	input [3 : 0] FuncCode,
       	output reg [data_width - 1: 0] C,
       	output reg OverflowFlag);
// Do not use delay in your implementation.

// You can declare any variables as needed.

initial begin
	C = 0;
	OverflowFlag = 0;
end   	

// TODO: You should implement the functionality of ALU!
// (HINT: Use 'always @(...) begin ... end')
always @(*)begin
	if(FuncCode == 0 )begin
		assign C = A+B;
		assign OverflowFlag = (( (A>>(data_width-1)) ^ (B>>(data_width-1)) )==0) && ( ( (A>>(data_width-1)) ^ (C>>(data_width-1)) )==1);//A,B부호 같고, A,C부호 다를때
	end

	else if(FuncCode == 1) begin
		assign C = A-B;
		assign OverflowFlag = (( (A>>(data_width-1)) ^ (B>>(data_width-1)) )==1) &&  ( ( (A>>(data_width-1)) ^ (C>>(data_width-1)) )==1); //A,B 부호가 다르고, A와 C의 부호가 다를때
	end

	else if(FuncCode == 2) begin
		assign C =A;
		assign OverflowFlag =0;
	end

	else if(FuncCode == 3)begin
		assign C = ~A;
		assign OverflowFlag =0;
	end

	else if(FuncCode == 4)begin
		assign C = A & B;
		assign OverflowFlag =0;
	end

	else if(FuncCode == 5)begin
		assign C = A | B;
		assign OverflowFlag =0;
	end

	else if(FuncCode == 6)begin
		assign C = ~(A & B);
		assign OverflowFlag =0;
	end

	else if(FuncCode == 7)begin
		assign C= ~(A|B);
		assign OverflowFlag =0;
	end

	else if(FuncCode == 8)begin
		assign C = A^B;
		assign OverflowFlag =0;
	end

	else if(FuncCode == 9)begin
		assign C = ~(A^B);
		assign OverflowFlag =0;
	end

	else if(FuncCode == 10)begin
		assign C = A<<1;
		assign OverflowFlag =0;
	end

	else if(FuncCode == 11)begin
		assign C = A>>1;
		assign OverflowFlag =0;
	end

	else if(FuncCode == 12)begin
		assign C = A<<<1;
		assign OverflowFlag =0;
	end

	else if(FuncCode == 13)begin
		assign C = $signed(A)>>>1;
		assign OverflowFlag =0;
	end

	else if(FuncCode == 14)begin
		assign C = ~A+1;
		assign OverflowFlag =0;
	end

	else begin
		assign C = 0;
		assign OverflowFlag =0;
	end
end

endmodule


