`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:23:04 08/31/2023 
// Design Name: 
// Module Name:    counter 
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
module counter(
    input clk,
    input rst_n,
    output reg [3:0] cnt
    );
always@(posedge clk, negedge rst_n)
	begin
	if (!rst_n)
	cnt<=0;
	else
	cnt<=cnt+1'b1;
	end

endmodule
