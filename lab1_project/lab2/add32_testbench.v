`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:57:10 09/17/2017
// Design Name:   add32
// Module Name:   Z:/cs141_vm_shared/lab2/add32_testbench.v
// Project Name:  lab2_alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: add32
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module add32_testbench;

	// Inputs
	reg [31:0] X;
	reg [31:0] Y;
	reg [31:0] check; 

	// Outputs
	wire [31:0] Z;
	wire overflow;

	// Instantiate the Unit Under Test (UUT)
	add32 uut (
		.X(X), 
		.Y(Y), 
		.Z(Z), 
		.overflow(overflow)
	);

	initial begin
		// Initialize Inputs
		X = 3;
		Y = 20;
		check = 3 + 20; 

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

