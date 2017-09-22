`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:45:17 09/17/2017
// Design Name:   slt
// Module Name:   Z:/cs141_vm_shared/lab2/slt_testbench.v
// Project Name:  lab2_alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: slt
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module slt_testbench;

	// Inputs
	reg X_sign;
	reg Y_sign;
	reg [31:0] diff;
	reg overflow;

	// Outputs
	wire [31:0] Z;

	// Instantiate the Unit Under Test (UUT)
	slt uut (
		.X_sign(X_sign), 
		.Y_sign(Y_sign), 
		.diff(diff), 
		.overflow(overflow), 
		.Z(Z)
	);

	initial begin
		// Initialize Inputs
		X_sign = 1;
		Y_sign = 0;
		diff = -1;
		overflow = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

