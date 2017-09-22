`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    slt 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module slt(X_sign,Y_sign,diff,overflow,Z);

	//parameter definitions

	//port definitions - customize for different bit widths
	input  wire X_sign;
	input  wire Y_sign;
	input  wire [31:0] diff;
	input  wire overflow;
	output wire [31:0] Z;
	
	assign Z = overflow ? X_sign : diff[31]; 


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
