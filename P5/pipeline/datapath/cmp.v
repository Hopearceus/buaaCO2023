`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:02:04 11/14/2023 
// Design Name: 
// Module Name:    cmp 
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
module cmp(
    input [31:0] cmpA,
    input [31:0] cmpB,
    input [2:0] cmpOp,
    output cmpOut
    );
	assign cmpOut = (cmpOp == 3'b000 && cmpA == cmpB)? 1 : 0;

endmodule
