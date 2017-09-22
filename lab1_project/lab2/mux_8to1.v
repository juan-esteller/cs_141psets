`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    mux_8to1 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module mux_8to1(I_0,I_1,I_2,I_3,I_4,I_5,I_6,I_7,control,result);

	//parameter definitions
   parameter WIDTH = 32; 
	
	//port definitions - customize for different bit widths
	input wire [(WIDTH - 1) : 0]  I_0, I_1, I_2, I_3, I_4, I_5, I_6, I_7; 
   input wire [2 : 0] control;
	output wire[(WIDTH - 1) : 0] result;
	wire [(WIDTH - 1) : 0] mux_top, mux_bottom;
	
	mux_4to1 #(.WIDTH(WIDTH)) MUX_4_TOP(.I_0(I_0), .I_1(I_1), .I_2(I_2), .I_3(I_3),
	  .control(control[1:0]), .result(mux_top)); 
	  
   mux_4to1 #(.WIDTH(WIDTH)) MUX_4_BOTTOM(.I_0(I_4), .I_1(I_5), .I_2(I_6), .I_3(I_7),
	  .control(control[1:0]), .result(mux_bottom)); 
	  
	assign result = control[2]? mux_bottom : mux_top; 
	
	
endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
