`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:04:59 10/12/2023
// Design Name:   BlockChecker
// Module Name:   C:/Users/123/Desktop/verilog/BlockChecker/BlockChecker_tb.v
// Project Name:  BlockChecker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BlockChecker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BlockChecker_tb;

	// inputs
	reg clk;
	reg reset;
	reg [7:0] in;

	// Outputs
	wire result;
	wire [1:0]t;

	// instantiate the Unit Under Test (UUT)
	BlockChecker uut (
		.clk(clk), 
		.reset(reset), 
		.in(in), 
		.result(result), 
		.t(t)
	);

	initial begin
		// initialize inputs
		clk = 0;
		reset = 0;
		in = "b";

#2 in = "e";

#2 in = "g";

#2 in = "i";

#2 in = "n";

#2 in = " ";

#2 in = " ";

#2 in = "b";

#2 in = "e";

#2 in = "g";

#2 in = "i";

#2 in = "n";

#2 in = " ";

#2 in = "e";

#2 in = "n";

#2 in = "d";

#2 in = " ";

#2 in = "b";

#2 in = "e";

#2 in = "g";

#2 in = "i";

#2 in = "n";

#2 in = " ";

#2 in = " ";

#2 in = " ";

#2 in = " ";

#2 in = " ";

#2 in = "e";

#2 in = "n";

#2 in = "d";

#2 in = " ";

#2 in = " ";

#2 in = "e";

#2 in = "n";

#2 in = "d";

#2 in = " ";

#2 in = " ";

#2 in = "e";

#2 in = "n";

#2 in = "d";

#2 in = " ";

#2 in = "b";

#2 in = "e";

#2 in = "g";

#2 in = "i";

#2 in = "n";

#2 in = " ";

#2 in = "e";

#2 in = "n";

#2 in = "d";

#2 in = " ";

#2 in = "e";

#2 in = "n";

#2 in = "d";

#2 in = " ";

#2 in = "b";

#2 in = "e";

#2 in = "g";

#2 in = "i";

#2 in = "n";

#2 in = " ";
		#100;
        
		// Add stimulus here

	end
	always #1 clk = ~clk;
      
endmodule

