`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    sub32 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module sub32(X,Y,Z,overflow);

	//parameter definitions

	//port definitions - customize for different bit widths
	input  wire [31:0] X;
	input  wire [31:0] Y;
	output wire [31:0] Z;
	output wire overflow;
	
	wire add_overflow; 
	add32 ADD_NEG_Y(.X(X), .Y(~Y), .Z(Z), .overflow(add_overflow), .cin(1'b1)); 
	
	// overflow takes place if we are subtracting a negative number from a positive number 
	// and the result is negative, or vice versa. 
	assign overflow = (X[31] ^ Y[31]) & (X[31] ^ Z[31]); 


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
