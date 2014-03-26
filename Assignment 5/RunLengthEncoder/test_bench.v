`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Author: Praveen Kumar Pendyala 
// 
// Create Date:    15:35:17 03/25/2014
// Module Name:    test_bench
//
// Dependencies:
// RunLengthEncoder.v
//
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module test_bench(
		input reset,
		input fast_clk,
		input data_clk
	);
	reg [7:0] data_in;
	wire [7:0] data_out;
	
	// Temporaries
	reg [8:0] count;
	
	initial begin
		count <= 0;
		data_in <= 8'h01;
	end
	
	
	always @(posedge data_clk) begin
		count <= count + 1;
		if(count == 0) data_in <= 8'h01;
		else if(count == 1) data_in <= 8'h01;
		else if(count == 2) data_in <= 8'h1B;
		else if(count == 3) data_in <= 8'h03;
		else if(count == 4) data_in <= 8'h04;
		else if(count == 5) data_in <= 8'h1B;
		else if(count == 6) data_in <= 8'h1B;
		else if(count == 7) data_in <= 8'h07;
		else if(count == 8) data_in <= 8'h08;
		else if(count < 270) data_in <= 8'hAA;
		else if(count == 271) data_in <= 8'h55;
	end
	
	RunLengthEncoder rle(
		.reset(reset),
		.fast_clk(fast_clk),
		.data_clk(data_clk),
		.data_in(data_in),
		.data_out(data_out)	
    );

endmodule
