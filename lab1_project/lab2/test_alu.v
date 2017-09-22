`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:   CS141
// Engineer:  Avinash Uttamchandani
//
////////////////////////////////////////////////////////////////////////////////

`include "alu_defines.v"

module test_alu;

	// Inputs
	reg [31:0] X;
	reg [31:0] Y;
	reg [3:0] op_code;

	// Outputs
	wire [31:0] Z;
	wire equal;
	wire overflow;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.X(X), 
		.Y(Y), 
		.Z(Z), 
		.op_code(op_code), 
		.equal(equal), 
		.overflow(overflow), 
		.zero(zero)
	);

	// HINT: 'integer' variables might be useful
	integer i, j, k; 
   integer error; 	
	
	initial begin
		// Initialize Inputs
		X = 0;
		Y = 0;
		op_code = 0;
		error = 0; 
		
		// throw the dishwasher at the alu
		for(i = 0; i <= 2147483647; i = i + 1) begin
		  X = i;
		  #5;
        for(j = 0; j <= 2147483647; j = j + 1) begin 		  
		      Y = j;
		      for(k = 0; k <= 16; k = k + 1) begin
                op_code = k; 
					 #2; 
            end	
         end		  
		end
		
	//	$finish;
	
	end
	
	//a checker
	always @(X,Y,op_code) begin
		#1;
		case (op_code)
			`ALU_OP_AND : begin
				//only executes when the op code is 0000 (AND)
				if( Z !== (X & Y) ) begin
					$display("ERROR: AND:  op_code = %b, X = %h, Y = %h, Z = %h", op_code, X, Y, Z);
					error = error + 1;
				end
			end
			// ADD IN YOUR OWN OP CODE CHECKERS HERE!!!
			`ALU_OP_XOR : begin
			    if(Z != (X ^ Y)) begin 
				   $display("ERROR: XOR:  op_code = %b, X = %h, Y = %h, Z = %h", op_code, X, Y, Z);
					error = error + 1;
		        end
			end
			`ALU_OP_OR : begin
               if(Z != (X  | Y)) begin 
				     $display("ERROR: OR:  op_code = %b, X = %h, Y = %h, Z = %h", op_code, X, Y, Z);
					  error = error + 1;
				   end	
			end
			`ALU_OP_NOR: begin
			      if(Z !== ~(X  | Y)) begin 
				     $display("ERROR: NOR:  op_code = %b, X = %h, Y = %h, Z = %h", op_code, X, Y, Z);
					  error = error + 1;
				   end
			end
			`ALU_OP_ADD: begin
			      if(Z !== X  + Y) begin 
				     $display("ERROR: ADD:  op_code = %b, X = %h, Y = %h, Z = %h", op_code, X, Y, Z);
					  error = error + 1;
				   end
			end
			`ALU_OP_SUB: begin
			end
			`ALU_OP_SLT: begin
			end
			`ALU_OP_SRL: begin
			end
			`ALU_OP_SLL: begin
			end
			`ALU_OP_SRA: begin
			end
			default : begin
				//executes at default
				if (Z !== 32'd0) begin
					$display("ERROR HAPPENED! invalid op code, Z was not zero, op_code = %b, X = %h, Y = %h, Z = %h", op_code, X, Y, Z);
				end
			end
		endcase
		
	end
	
endmodule

