`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:22:00 09/21/2023
// Design Name:   cpu_checker
// Module Name:   C:/Users/123/Desktop/verilog/cpu_checker1/cpu_checker_tb.v
// Project Name:  cpu_checker1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpu_checker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_checker_tb;

	// Inputs
	reg [7:0] char;
	reg reset;
	reg clk;

	// Outputs
	wire [1:0] format_type;

	// Instantiate the Unit Under Test (UUT)
	cpu_checker uut (
		.char(char), 
		.reset(reset), 
		.clk(clk), 
		.format_type(format_type)
	);
	always #1 clk = ~clk;
	// $monitor("now=%b num=%b",now, num);
	initial begin
		// Initialize Inputs
		char = 0;
		reset = 0;
		clk = 0;
		#2 char = "^";
#2 char = "3";
#2 char = "3";
#2 char = "8";
#2 char = "@";
#2 char = "0";
#2 char = "0";
#2 char = "0";
#2 char = "0";
#2 char = "3";
#2 char = "1";
#2 char = "3";
#2 char = "0";
#2 char = ":";
#2 char = " ";
#2 char = "*";
#2 char = "0";
#2 char = "0";
#2 char = "0";
#2 char = "0";
#2 char = "0";
#2 char = "0";
#2 char = "8";
#2 char = "8";
#2 char = " ";
#2 char = "<";
#2 char = "=";
#2 char = " ";
#2 char = "f";
#2 char = "f";
#2 char = "f";
#2 char = "f";
#2 char = "b";
#2 char = "5";
#2 char = "2";
#2 char = "8";
#2 char = "#";

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here

	end
      
endmodule

