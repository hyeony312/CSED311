`include "vending_machine_def.v"

	

module check_time_and_coin(i_input_coin,i_select_item,o_available_item,clk,reset_n,wait_time);
	input clk;
	input reset_n;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;
	input [`kNumItems-1:0] o_available_item;

	output reg [31:0] wait_time;
	reg [31:0] wait_time_nxt;


	// initiate values
	initial begin
		// TODO: initiate values
		wait_time = `kWaitTime;
	end


	// update coin return time  i_input_coin, i_select_item, o_available_item
	always @(*) begin
		// TODO: update coin return time

		if(i_input_coin[0]==1) begin
			wait_time_nxt = `kWaitTime;
		end
		else if(i_input_coin[1]==1) begin
			wait_time_nxt = `kWaitTime;
		end
		else if(i_input_coin[2]==1) begin
			wait_time_nxt = `kWaitTime;
		end
		//select item 따라 시간 바꾸기
		else if(i_select_item[0]==1 && o_available_item[0]==1) begin
				wait_time_nxt = `kWaitTime;
		end

		else if(i_select_item[1]==1 && o_available_item[1]==1) begin
				wait_time_nxt = `kWaitTime;
		end

		else if(i_select_item[2]==1 && o_available_item[2]==1) begin
				wait_time_nxt = `kWaitTime;
		end

		else if(i_select_item[3]==1 && o_available_item[3]==1) begin
				wait_time_nxt = `kWaitTime;
		end
		else begin
			wait_time_nxt = wait_time-1;
		end
		
	end

	always @(posedge clk ) begin

		if (!reset_n) begin
		// TODO: reset all states.
			wait_time <= `kWaitTime;
		end
		else begin
		// TODO: update all states.
			wait_time <= wait_time_nxt;
		end
	end
endmodule 
