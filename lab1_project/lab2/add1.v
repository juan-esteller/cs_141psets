`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    add1 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module add1(X,Y,Z,cin,cout);

	//parameter definitions

	//port definitions - customize for different bit widths
	input  wire X;
	input  wire Y;
	output wire Z;
	input  wire cin;
	output wire cout;
	
	assign Z = X ^ Y ^ cin; 
	assign cout = (X & Y) | (X & cin) | (Y & cin); 


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
