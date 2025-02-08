`include "vending_machine_def.v"


module change_state(clk,reset_n,current_total_nxt,current_total,return_coin_nxt,o_return_coin);

	input clk;
	input reset_n;
	input [`kTotalBits-1:0] current_total_nxt;
	input [`kNumCoins-1:0] return_coin_nxt;
	output reg [`kNumCoins-1:0] o_return_coin;
	output reg [`kTotalBits-1:0] current_total;
	
	// Sequential circuit to reset or update the states
	always @(posedge clk ) begin
		if (!reset_n) begin
			// TODO: reset all states.
			current_total<=0;
			o_return_coin<=0;
		end
		else begin
			// TODO: update all states.
			current_total <= current_total_nxt ;
			o_return_coin <= return_coin_nxt;
		end
	end
endmodule 
