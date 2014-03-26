`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Author: Praveen Kumar Pendyala 
// 
// Create Date:    15:35:17 03/25/2014 
// Design Name: 
// Module Name:    FIFO 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module FIFO(
		input clk,
		input reset,
		input read_en,
		input write_en,
		input [7:0] data_in,
		output [7:0] data_out,
		output empty
	);
	reg [7:0] data_out;
	reg empty;
	
	// Other variables for FIFO implementation
	reg [7:0] FIFO_MEM [0:31]; // Memory of FIFO
	reg [4:0] read_pointer;
	reg [4:0] write_pointer;
	
	initial begin
		read_pointer <= 0;
		write_pointer <= 0;
		empty <= 1;
	end
	
	always @(posedge clk) begin
		if(read_en == 1) begin
			data_out <= FIFO_MEM[read_pointer];
			read_pointer <= read_pointer + 1;
		end
		
		if(write_en == 1) begin
			FIFO_MEM[write_pointer] <= data_in;
			write_pointer <= write_pointer + 1;
		end
		
		if(read_pointer == write_pointer) begin
			empty <= 1;
		end
		else begin
			empty <= 0;
		end
	end
	
	//assign empty = (read_pointer == write_pointer)?1:0;
	
endmodule