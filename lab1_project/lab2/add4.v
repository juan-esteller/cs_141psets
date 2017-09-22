`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    add4 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module add4(X,Y,Z,cin,cout);

	//parameter definitions

	//port definitions - customize for different bit widths
	input  wire [3:0] X;
	input  wire [3:0] Y;
	output wire [3:0] Z;
	input  wire cin;
	output wire cout;
	
	wire cout_lower; 
	
	add2 ADD_2_LOWER(.X(X[1:0]), .Y(Y[1:0]), .Z(Z[1:0]), .cin(cin), .cout(cout_lower)); 
   add2 ADD_2_UPPER(.X(X[3:2]), .Y(Y[3:2]), .Z(Z[3:2]), .cin(cout_lower), .cout(cout)); 

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
