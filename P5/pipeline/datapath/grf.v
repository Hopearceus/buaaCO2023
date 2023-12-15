`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:18:07 11/14/2023 
// Design Name: 
// Module Name:    grf 
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
module grf(
    input clk,
    input reset,
    input [4:0] regRa1,
    input [4:0] regRa2,
    input regW,
    input [4:0] regWa,
    input [31:0] regWd,
    input [31:0] pc,
    output [31:0] regOut1,
    output [31:0] regOut2
    );
	integer i;
	reg [31:0] register [0:31];
	assign regOut1 = register [regRa1];
	assign regOut2 = register [regRa2];
	always @(posedge clk) begin
		if(reset == 1) begin
			for(i=0;i<32;i=i+1) begin
				register[i] <= 32'h0000_0000;
			end
		end else begin
			if(regW == 1) begin
				if(regWa == 5'b00000) register[0] <= 32'h0000_0000;
				else register[regWa] <= regWd;
				$display("%d@%h: $%d <= %h", $time, pc, regWa, regWd);
			end
		end
	end

endmodule
