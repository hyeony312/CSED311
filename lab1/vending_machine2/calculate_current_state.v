
`include "vending_machine_def.v"
	

module calculate_current_state(i_input_coin,i_select_item,i_trigger_return,item_price,coin_value,current_total,
		current_total_nxt,wait_time,o_available_item,o_output_item,return_coin_nxt);


	
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;			
	input i_trigger_return;
	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];	
	input [`kTotalBits-1:0] current_total;
	input [31:0] wait_time;
	output reg [`kNumItems-1:0] o_available_item,o_output_item;
	output reg  [`kTotalBits-1:0]current_total_nxt;
	output reg [`kNumCoins-1:0] return_coin_nxt;

	integer i;
	
	// Combinational logic for the next states   
	initial begin
		o_available_item = 0;
		o_output_item = 0;
		return_coin_nxt = 0;
		current_total_nxt = 0;
		i =0;
	end

	always @(*) begin
		// TODO: current_total_nxt
		return_coin_nxt = 0;
		o_output_item = 0;
		
		if(i_input_coin != 0) begin
			i=0;
			if(i_input_coin[0]!=0) begin
				current_total_nxt = current_total + coin_value[0];
			end
			else if(i_input_coin[1]!=0) begin
				current_total_nxt = current_total + coin_value[1];
			end
			else if(i_input_coin[2]!=0) begin
				current_total_nxt = current_total + coin_value[2];
			end
			else begin
				current_total_nxt = current_total;
			end
		end

		else if(i_select_item != 0) begin
				i=0;
				if(i_select_item[0] && o_available_item[0]) begin
					current_total_nxt = current_total - item_price[0];
					o_output_item[0]=1;
				end
				else if(i_select_item[1] && o_available_item[1]) begin
					current_total_nxt = current_total - item_price[1];
					o_output_item[1]=1;
				end
				else if(i_select_item[2] && o_available_item[2]) begin
					current_total_nxt = current_total - item_price[2];
					o_output_item[2]=1;
				end
				else if(i_select_item[3] && o_available_item[3]) begin
					current_total_nxt = current_total - item_price[3];
					o_output_item[3]=1;
				end
				else begin
					current_total_nxt = current_total;
					o_output_item = 0;
				end
		end
		else if(i_trigger_return == 1) begin
			if(i >= 7) begin
				if(current_total >= 1600) begin
					return_coin_nxt = 3'b111;
					current_total_nxt = current_total-1600;
				end
				else if(current_total >= 1500) begin
					return_coin_nxt = 3'b110;
					current_total_nxt = current_total-1500;
				end
				else if(current_total >= 1100) begin
					return_coin_nxt = 3'b101;
					current_total_nxt = current_total-1100;
				end
				else if(current_total >= 1000) begin
					return_coin_nxt = 3'b100;
					current_total_nxt = current_total-1000;
				end
				else if(current_total >= 600) begin
					return_coin_nxt = 3'b011;
					current_total_nxt = current_total-600;
				end
				else if(current_total >= 500) begin
					return_coin_nxt = 3'b010;
					current_total_nxt = current_total-500;
				end
				else if(current_total >= 100) begin
					return_coin_nxt = 3'b001;
					current_total_nxt = current_total-100;
				end
				else begin
					current_total_nxt = current_total;
				end
			end

			else begin
				current_total_nxt = current_total;
			end
			i = i+1;

		end

		else if($signed(wait_time) <= -1) begin
			i=0;
			if(current_total >= 1600) begin
            	return_coin_nxt = 3'b111;
            	current_total_nxt = current_total-1600;
        	end
			else if(current_total >= 1500) begin
				return_coin_nxt = 3'b110;
				current_total_nxt = current_total-1500;
			end
			else if(current_total >= 1100) begin
				return_coin_nxt = 3'b101;
				current_total_nxt = current_total-1100;
			end
			else if(current_total >= 1000) begin
				return_coin_nxt = 3'b100;
				current_total_nxt = current_total-1000;
			end
			else if(current_total >= 600) begin
				return_coin_nxt = 3'b011;
				current_total_nxt = current_total-600;
			end
			else if(current_total >= 500) begin
				return_coin_nxt = 3'b010;
				current_total_nxt = current_total-500;
			end
			else if(current_total >= 100) begin
				return_coin_nxt = 3'b001;
				current_total_nxt = current_total-100;
			end
			else begin
				current_total_nxt = current_total;
			end
		end
		else begin
			i=0;
			current_total_nxt = current_total;
		end

	end

	// Combinational logic for the outputs
	always @(*) begin
		// TODO: o_available_item
		if(current_total >= 2000) begin
			o_available_item = 4'b1111;
		end
		else if(current_total >= 1000) begin
			o_available_item = 4'b0111;
		end
		else if(current_total >= 500) begin
			o_available_item = 4'b0011;
		end
		else if(current_total >= 400) begin
			o_available_item=4'b0001;
		end
		else begin
			o_available_item = 4'b0000;
		end
	end
	


endmodule 
