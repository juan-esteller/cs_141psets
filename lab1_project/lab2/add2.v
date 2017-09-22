`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    add2 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module add2(X,Y,Z,cin,cout);

	//parameter definitions

	//port definitions - customize for different bit widths
	input  wire [1:0] X;
	input  wire [1:0] Y;
	output wire [1:0] Z;
	input  wire cin;
	output wire cout;
	
	wire cout_lower; 
	
	add1 ADD_1_LOWER(.X(X[0]), .Y(Y[0]), .Z(Z[0]), .cin(cin), .cout(cout_lower));
   add1 ADD_1_UPPER(.X(X[1]), .Y(Y[1]), .Z(Z[1]), .cin(cout_lower), .cout(cout)); 	


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
