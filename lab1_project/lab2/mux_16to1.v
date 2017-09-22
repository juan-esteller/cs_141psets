`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    mux_16to1 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module mux_16to1(I_0,I_1,I_2,I_3,I_4,I_5,I_6,I_7,I_8,I_9,I_10,I_11,I_12,I_13,I_14,I_15,control,result);

	// parameter definitions-- default width is 32 
   parameter WIDTH = 32; 
	
	// port definitions - customize for different bit widths
	input  wire [(WIDTH - 1) : 0] I_0, I_1, I_2, I_3, I_4, I_5, I_6, I_7, I_8, 
	  I_9, I_10, I_11, I_12, I_13, I_14, I_15; 
	input  wire [3 : 0] control;
	output wire [(WIDTH - 1) : 0] result; 
	
	wire [(WIDTH - 1) : 0] mux_top, mux_bottom; 
	
	mux_8to1 #(.WIDTH(WIDTH)) MUX_8_TOP(.I_0(I_0), .I_1(I_1), .I_2(I_2), .I_3(I_3), 
	.I_4(I_4), .I_5(I_5), .I_6(I_6), .I_7(I_7), .control(control[2:0]), .result(mux_top));

   mux_8to1 #(.WIDTH(WIDTH)) MUX_8_BOTTOM(.I_0(I_8), .I_1(I_9), .I_2(I_10), .I_3(I_11), 
	.I_4(I_12), .I_5(I_13), .I_6(I_14), .I_7(I_15), .control(control[2:0]), .result(mux_bottom));

   assign result = control[3] ? mux_bottom : mux_top; 	  

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
