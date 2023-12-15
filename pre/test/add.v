`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:20:54 08/31/2023 
// Design Name: 
// Module Name:    add 
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
module add;
	reg a;
	reg b;
	wire c;
	mips uut (
	.a(a),
	.b(b),
	.c(c)
	);
	initial begin
		a=0;
		b=1;
	end
endmodule
