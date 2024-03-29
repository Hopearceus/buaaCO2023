`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:33:23 09/04/2023
// Design Name:   code
// Module Name:   C:/Users/123/Desktop/verilog/counter/counter_tb.v
// Project Name:  counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: code
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counter_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg Slt;
	reg En;

	// Outputs
	wire [63:0] Output0;
	wire [63:0] Output1;

	// Instantiate the Unit Under Test (UUT)
	code uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.Slt(Slt), 
		.En(En), 
		.Output0(Output0), 
		.Output1(Output1)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 0;
		Slt = 0;
		En = 0;

		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here
		$stop;
	end
	always #2 Clk = ~Clk;
	always begin
		#10 Slt = ~Slt;
		#20 En = ~En;
		//40 Reset = ~Reset;
	end
	//always #10 Slt = ~Slt;
	//always #40 Reset = ~Reset;
	//always #20 En = ~En;
	
      
endmodule

