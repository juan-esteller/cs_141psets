`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    add8 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module add8(X,Y,Z,cin,cout);

	//parameter definitions

	//port definitions - customize for different bit widths
	input  wire[7:0] X;
	input  wire[7:0] Y;
	output wire[7:0] Z;
	input  wire cin;
	output wire cout;
	
	wire cout_lower; 
	add4 ADD_4_LOWER(.X(X[3:0]), .Y(Y[3:0]), .Z(Z[3:0]), .cin(cin), .cout(cout_lower)); 
	add4 ADD_4_UPPER(.X(X[7:4]), .Y(Y[7:4]), .Z(Z[7:4]), .cin(cout_lower), .cout(cout)); 
	
endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
