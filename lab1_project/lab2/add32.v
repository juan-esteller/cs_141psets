`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    add32 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module add32(X,Y,Z, cin, overflow);

	//parameter definitions

	//port definitions - customize for different bit widths
	input  wire [31:0] X;
	input  wire [31:0] Y;
	input  wire cin; 
	output wire [31:0] Z;
	output wire overflow; 

	wire cout_lower; 
	
	add16 ADD_LOWER_16(.X(X[15:0]), .Y(Y[15:0]), .Z(Z[15:0]), .cin(1'b0), .cout(cout_lower));

   wire cout_upper; 

   add16 ADD_UPPER_16(.X(X[31:16]), .Y(Y[31:16]), .Z(Z[31:16]), .cin(cout_lower), .cout(cout_upper)); 	
	
	
	// there is overflow if the sign of X and Y is the same, but Z has a different sign 
	assign overflow = (~(X[31] ^ Y[31])) & (X[31] ^ Z[31]);


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
