`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Author: Praveen Kumar Pendyala 
// 
// Create Date:    15:35:17 03/25/2014
// Module Name:    RunLengthEncoder 
//
// Dependencies:
// FIFO.v
//
// Additional Comments: 
// ESC character handling - When ESC occurs in 1 or 2 continuous bytes, we write ESC followed by 1 or 2. Since normally ESC
// is always followed by number >2 the decoder can take this as the actual ESC character.
//
//////////////////////////////////////////////////////////////////////////////////
module RunLengthEncoder(
		input reset,
		input fast_clk,
		input data_clk,
		input [7:0] data_in,
		output reg [7:0] data_out		
    );
	
	//FSM states
	localparam  RESET = 0;
	localparam  ENCODING = 1;
	
	localparam ESC = 8'h1B;
	
	// State variable
	reg [1:0] currState;
	
	// FIFO variables
	reg fifo_read_en;
	reg fifo_write_en;
	reg [7:0] fifo_data_in;
	wire [7:0] fifo_data_out;
	wire fifo_empty;
	
	// temporaries
	// For counting the repetitions of a Byte
	reg [7:0] prevByte;
	reg [7:0] prevCount;
	
	// For writing data to FIFO
	reg [7:0] writeByte;
	reg [7:0] writeCount;
	
	// For keeping track of write command issue
	reg write_to_fifo;
	
	// For writing multiple bytes to FIFO with one byte per cycle
	reg [1:0] cycle_count_fifo;
	
	initial begin
		currState <= RESET;
		write_to_fifo <= 0;
		cycle_count_fifo <= 3;
	end
	
	always @(posedge data_clk) begin
		case(currState)
			RESET: begin
				prevByte <= data_in;
				prevCount <= 8'h01;
				currState <= ENCODING;
			end
			
			ENCODING: begin
			
				/**************** DataIn handling ****************/
				if(data_in == prevByte) begin
					// Increment counts only if < 255
					if(prevCount < 255) begin
						prevCount <= prevCount + 1;
						// Disable writing to FIFO because as aren't done counting yet.
						write_to_fifo <= 0;
					end
					
					// Counter overflow. Write to FIFO and start a fresh count.
					else begin
						// Write the prevByte to FIFO
						writeByte <= prevByte;
						writeCount <= prevCount;
						
						// Update the new value in place of prevByte for future counting
						prevByte <= data_in;
						prevCount <= 8'h01;
						
						// Enable writing to FIFO
						write_to_fifo <= 1;
					end
					
				end
				else begin
					// Write the prevByte to FIFO
					writeByte <= prevByte;
					writeCount <= prevCount;
					
					// Update the new value in place of prevByte for future counting
					prevByte <= data_in;
					prevCount <= 8'h01;
					
					// Enable writing to FIFO
					write_to_fifo <= 1;
				end

				/**************** DataOut handling ****************/
				if(fifo_empty == 0) begin
					fifo_read_en <= 1;
				end
				else begin
					fifo_read_en <= 0;
				end
				
				if(fifo_read_en == 1) begin
					data_out <= fifo_data_out;
				end
				
			end	
			
		endcase
			
	end
	
	
	/********************* FIFO updating block *************************/
	always @(posedge fast_clk) begin
		cycle_count_fifo <= cycle_count_fifo + 1;
	
		// If a write command has been issued
		if(write_to_fifo == 1) begin
		
			// count: 1
			if(writeCount == 1 && writeByte != 8'h1B) begin
				if(cycle_count_fifo == 0) begin
					fifo_write_en <= 1;
					fifo_data_in <= writeByte; 	// Write data
				end
				else if(cycle_count_fifo == 1) begin
					fifo_write_en <= 0;		 	// stop writing
				end				
			end
			
			// count: 2
			if(writeCount == 2 && writeByte != 8'h1B) begin
				if(cycle_count_fifo == 0) begin
					fifo_write_en <= 1;
					fifo_data_in <= writeByte;	//write data
				end
				else if(cycle_count_fifo == 1) begin
					fifo_data_in <= writeByte;	//write data		
				end
				else if(cycle_count_fifo == 2) begin
					fifo_write_en <= 0;			// stop writing
				end				
			end
			
			// count: > 2
			if(writeCount > 2 || writeByte == 8'h1B) begin
				if(cycle_count_fifo == 0) begin
					fifo_write_en <= 1;
					fifo_data_in <= 8'h1B; 		// write an ESC character
				end
				else if(cycle_count_fifo == 1) begin
					fifo_data_in <= writeCount; // write count			
				end
				else if(cycle_count_fifo == 2) begin
					fifo_data_in <= writeByte; 	// write data
				end
				else if(cycle_count_fifo == 3) begin
					fifo_write_en <= 0;			// stop writing
				end
			end
				
		end
	end
	
	FIFO fifo_1(
		.fast_clk(fast_clk),
		.data_clk(data_clk),
		.reset(reset),
		.read_en(fifo_read_en),
		.write_en(fifo_write_en),
		.data_in(fifo_data_in),
		.data_out(fifo_data_out),
		.empty(fifo_empty)
	);


endmodule
