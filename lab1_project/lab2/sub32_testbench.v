`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:25:20 09/17/2017
// Design Name:   sub32
// Module Name:   Z:/cs141_vm_shared/lab2/sub32_testbench.v
// Project Name:  lab2_alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sub32
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sub32_testbench;

	// Inputs
	reg [31:0] X;
	reg [31:0] Y;

	// Outputs
	wire [31:0] Z;
	wire overflow;

	// Instantiate the Unit Under Test (UUT)
	sub32 uut (
		.X(X), 
		.Y(Y), 
		.Z(Z), 
		.overflow(overflow)
	);

	initial begin
		// Initialize Inputs
		X = -2147483647;
		Y = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

