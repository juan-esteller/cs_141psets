`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2016
// Module Name:    alu 
// Author(s): Juan Esteller
// Description: CS 141 lab 2
//
//
//////////////////////////////////////////////////////////////////////////////////
`include "alu_defines.v"

module alu(X,Y,Z,op_code, equal, overflow, zero);

	//port definitions - customize for different bit widths
	input  wire [31:0] X;
	input  wire [31:0] Y;
	output wire [31:0] Z;
	input  wire [3:0] op_code;
	
	output wire equal, overflow, zero;
	
	wire [31:0] and_out, or_out, xor_out, nor_out, add_out, sub_out, slt_out, srl_out, sll_out, sra_out;
	
	//functional blocks
	
   // take care of outputs that don't require a module 
	assign and_out = X & Y; 
	assign or_out = X | Y; 
	assign xor_out = X ^ Y; 
	assign nor_out = ~ or_out;	
	
	// wires for whether overflow took place in addition or subtraction
	wire add_overflow, sub_overflow; 
	
	//// TODO: create modules for all of these outputs
   add32 ADD(.X(X), .Y(Y), .Z(add_out), .overflow(add_overflow), .cin(1'b0)); 
	
	sub32 SUB(.X(X), .Y(Y), .Z(sub_out), .overflow(sub_overflow)); 

	slt SLT(.X_sign(X[31]), .Y_sign(Y[31]), .overflow(sub_overflow), .Z(slt_out)); 
	
	assign srl_out = 32'h00000000;
	assign sll_out = 32'h00000000;
	assign sra_out = 32'h00000000;

	
	// wires into which we store temporary values
	wire [31:0] temp_z; 
	wire temp_equal, temp_overflow, temp_zero; 
	
	// X and Y are equal in the case XOR is zero everywhere
	assign temp_equal = ~ (| xor_out); 
   assign zero = ~ (| temp_z); 

 

   mux_16to1 OUTPUT(.control(op_code), .result(Z), .I_0(and_out), .I_1(or_out), 
	.I_2(xor_out), .I_3(nor_out), .I_4(32'b0), .I_5(add_out), .I_6(sub_out), 
	.I_7(slt_out), .I_8(srl_out), .I_9(sll_out), .I_10(sra_out), .I_11(32'b0), 
	.I_12(32'b0), .I_13(32'b0), .I_14(32'b0), .I_15(32'b0)); 

	
endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
