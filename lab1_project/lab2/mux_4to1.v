`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    mux_4to1 
// Author(s): Juan Esteller	
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module mux_4to1(I_0, I_1, I_2, I_3, control, result);

	// set default width to 32 
	parameter WIDTH = 32; 

	//port definitions - customize for different bit widths
	input  wire [(WIDTH - 1) : 0] I_0, I_1, I_2, I_3;
	input  wire [1:0] control;
	output wire [(WIDTH - 1) : 0] result;
	
	// declaration of intermediate wires
	wire [(WIDTH - 1) : 0] mux_top, mux_bottom; 
	
	assign mux_top = control[0]? I_1 : I_0; 
	assign mux_bottom = control[0]? I_3 : I_2; 
	
	assign result = control[1]? mux_bottom : mux_top; 
	
endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
