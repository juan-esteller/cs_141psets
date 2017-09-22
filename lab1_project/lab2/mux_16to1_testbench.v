`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:43:01 09/17/2017
// Design Name:   mux_16to1
// Module Name:   Z:/cs141_vm_shared/lab2/mux_16to1_testbench.v
// Project Name:  lab2_alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux_16to1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux_16to1_testbench;

	// Inputs
	reg [31:0] I_0;
	reg [31:0] I_1;
	reg [31:0] I_2;
	reg [31:0] I_3;
	reg [31:0] I_4;
	reg [31:0] I_5;
	reg [31:0] I_6;
	reg [31:0] I_7;
	reg [31:0] I_8;
	reg [31:0] I_9;
	reg [31:0] I_10;
	reg [31:0] I_11;
	reg [31:0] I_12;
	reg [31:0] I_13;
	reg [31:0] I_14;
	reg [31:0] I_15;
	reg [3:0] control;

	// Outputs
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	mux_16to1 uut (
		.I_0(I_0), 
		.I_1(I_1), 
		.I_2(I_2), 
		.I_3(I_3), 
		.I_4(I_4), 
		.I_5(I_5), 
		.I_6(I_6), 
		.I_7(I_7), 
		.I_8(I_8), 
		.I_9(I_9), 
		.I_10(I_10), 
		.I_11(I_11), 
		.I_12(I_12), 
		.I_13(I_13), 
		.I_14(I_14), 
		.I_15(I_15), 
		.control(control), 
		.result(result)
	);
   
	integer i; 
	
	initial begin
		// Set each input to the control sequence that enables it
		I_0 = 0;
		I_1 = 1;
		I_2 = 2;
		I_3 = 3;
		I_4 = 4;
		I_5 = 5;
		I_6 = 6;
		I_7 = 7;
		I_8 = 8;
		I_9 = 9;
		I_10 = 10;
		I_11 = 11;
		I_12 = 12;
		I_13 = 13;
		I_14 = 14;
		I_15 = 15;
		control = 0;
		//set the control to be every possible value once
		for(i = 0; i <= 16; i = i + 1) begin
	       control = i[3:0];
			 #10;
		end
		// $finish;
	 end
	 
	 always@(control) begin 
	   #1
	   if (control[3:0] != result[3:0]) begin
   	  $display("ERROR: control is not equal to result\n"); 
		  $stop; 
		end
	 end
      
endmodule

