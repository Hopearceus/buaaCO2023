`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:50:01 09/01/2023
// Design Name:   counter
// Module Name:   C:/Users/123/Desktop/verilog/test/counting_tb.v
// Project Name:  test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counting_tb;

	// Inputs
	reg clk;
	reg rst_n;
	r [3:0] cnt;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.cnt(cnt)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;

		// Wait 100 ns for global reset to finish
		#100;
      #5;
		rst_n=1;
		// Add stimulus here

	end
	
	always #5 clk=~clk;
      
endmodule

