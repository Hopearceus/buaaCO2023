`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:13:50 09/28/2023
// Design Name:   testtt
// Module Name:   C:/Users/123/Desktop/verilog/cpu_checker2/testttt_tb.v
// Project Name:  cpu_checker2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: testtt
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testttt_tb;

	// Outputs
	wire a;
	wire b;
	wire c;

	// Instantiate the Unit Under Test (UUT)
	testtt uut (
		.a(a), 
		.b(b), 
		.c(c)
	);

	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		#5;
        
		// Add stimulus here

	end
      
endmodule

