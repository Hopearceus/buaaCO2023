`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:12:10 09/05/2023
// Design Name:   id_fsm
// Module Name:   C:/Users/123/Desktop/verilog/id_fsm/id_fsm_tb.v
// Project Name:  id_fsm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: id_fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module id_fsm_tb;

	// Inputs
	reg [7:0] char;
	reg clk;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	id_fsm uut (
		.char(char), 
		.clk(clk), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		char = 0;
		clk = 0;
		#5
		char = 8'h61;//a
		#5 char = 8'h7a;
		#5 char = 8'h35;
		#5 char = 8'h5a;
		#5 char = 8'h2f;
		#5 char = 8'h7a;
		#5 char = 8'h30;
		#5 char = 8'h30;
		#5 char = 8'h2f;
		#5 char = 8'h30;
		#5 char = 8'h30;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #2.5 clk = ~clk;
      
endmodule

