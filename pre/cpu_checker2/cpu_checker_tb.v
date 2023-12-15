`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:36:38 09/23/2023
// Design Name:   cpu_checker
// Module Name:   C:/Users/123/Desktop/verilog/cpu_checker2/cpu_checker_tb.v
// Project Name:  cpu_checker2
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
	reg [15:0] freq;

	// Outputs
	wire [1:0] format_type;
	wire [3:0] error_code;

	// Instantiate the Unit Under Test (UUT)
	cpu_checker uut (
		.char(char), 
		.reset(reset), 
		.clk(clk), 
		.freq(freq), 
		.format_type(format_type), 
		.error_code(error_code)
	);

	initial begin
		// Initialize Inputs
		char = 0;
		reset = 0;
		clk = 0;
		freq = 2;
		#2 char = "^";

#2 char = "2";

#2 char = "2";

#2 char = "4";

#2 char = "@";

#2 char = "0";

#2 char = "0";

#2 char = "0";

#2 char = "0";

#2 char = "4";

#2 char = "0";

#2 char = "0";

#2 char = "0";
//$stop;

#2 char = ":";

#2 char = " ";

#2 char = " ";

#2 char = " ";

#2 char = "*";
#2 char = "0";
#2 char = "0";
#2 char = "0";
#2 char = "0";
#2 char = "3";

#2 char = "0";
#2 char = "0";
#2 char = "0";

#2 char = "<";

#2 char = "=";

#2 char = " ";

#2 char = "1";

#2 char = "1";

#2 char = "1";

#2 char = "1";

#2 char = "1";

#2 char = "1";

#2 char = "1";

#2 char = "1";

#2 char = "#";

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #1 clk = ~clk;
      
endmodule

