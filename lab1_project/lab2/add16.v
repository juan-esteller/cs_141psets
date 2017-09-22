`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    add16 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module add16(X,Y,Z,cin,cout);

	//parameter definitions

	//port definitions - customize for different bit widths
	input  wire[15:0] X;
	input  wire[15:0] Y;
	output wire[15:0] Z;
	input  wire cin;
	output wire cout;
	
	wire cout_lower; 
	
	add8 ADD_LOWER_8(.X(X[7:0]), .Y(Y[7:0]), .Z(Z[7:0]), .cin(cin), .cout(cout_lower)); 
	add8 ADD_UPPER_8(.X(X[15:8]), .Y(Y[15:8]), .Z(Z[15:8]), .cin(cout_lower), .cout(cout));
	
endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
