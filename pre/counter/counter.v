`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:28:36 09/04/2023 
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
module code(
    input Clk,
    input Reset,
    input Slt,
    input En,
    output reg [63:0] Output0,
    output reg [63:0] Output1
    );
	reg [1:0] Aff_1;
	initial begin
		Aff_1=2'b00;
		Output0 = 64'h0000_0000_0000_0000;
		Output1 = 64'h0000_0000_0000_0000;
	end
	always@(posedge Clk) begin
		if(Reset==1) begin
			Output0 <= 0;
			Output1 <= 0;
			Aff_1 <= 2'b00;
		end else if(En==1) begin
			if(Slt==0) begin
				Output0 <= Output0 + 1;
			end
			else begin
				Aff_1 <= Aff_1 + 1;
				if(Aff_1 == 2'b11) begin
					Output1 <= Output1 + 1;
				end
			end
		end
		else begin
			Output0 <= Output0;
			Output1 <= Output1;
		end
	end
			

endmodule
