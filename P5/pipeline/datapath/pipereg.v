`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:46:16 11/14/2023 
// Design Name: 
// Module Name:    pipereg 
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
module pipereg #(parameter WIDTH = 32)(
    input clk,
    input reset,
    input isStall,
    input [WIDTH - 1:0] in,
    output reg [WIDTH - 1:0] out
    );
	always@(posedge clk) begin
		if(reset == 1) begin
			out <= 0;
		end else begin 
			if(isStall == 0) begin
				out <= in;
			end else out <= 0;
		end
	end

endmodule
