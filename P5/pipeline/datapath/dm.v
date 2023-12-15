`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:45:34 11/13/2023 
// Design Name: 
// Module Name:    dm 
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
module dm(
    input clk,
    input reset,
    input memW,
    input [31:0] memRa,
    input [31:0] memWd,
    input [31:0] pc,
    output [31:0] memOut
    );
	reg [31:0] dm [3071:0];
	integer i;
	assign memOut = dm[memRa >> 2];
	always@(posedge clk) begin
		if (reset == 1) begin
			for(i=0;i<3072;i=i+1) begin
				dm[i] <= 0;
			end
		end else if(memW == 1) begin
			dm[memRa >> 2] <= memWd;
			$display("%d@%h: *%h <= %h", $time, pc, memRa, memWd);
		end else begin end
	end

endmodule
