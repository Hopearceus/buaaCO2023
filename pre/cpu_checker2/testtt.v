`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:12:31 09/28/2023 
// Design Name: 
// Module Name:    testtt 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module testtt(
	output reg a,
	output reg b,
	output reg c
    );
	 initial begin
		a = 1;
		b = 0;
		c = 1;
	 end
	 initial begin
		#1
		a <= b;
		#1
		b <= c;
		#1
		c <= a;
	 end


endmodule
