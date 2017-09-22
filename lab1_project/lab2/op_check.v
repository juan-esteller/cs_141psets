`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    op_check 
// Author(s): Juan Esteller
// Description: Determines whether a particular op_code is valid 
//
//
//////////////////////////////////////////////////////////////////////////////////
module op_check(op_code,is_valid);

	//parameter definitions

	//port definitions - customize for different bit widths
	input  wire[3:0] op_code;
	output wire is_valid;
	
	/* checks situations as follows: top two bits are set to 1, in 
	 which case code is greater than any op_code. Otherwise, compares 
	 directly to two op_codes whose top two bits are not both one */ 
	assign is_valid = (~(op_code[2] & op_code[3])) & 
	                  (|(op_code ^ 4'b0100)) & 
							(|(op_code ^ 4'b1011));

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
