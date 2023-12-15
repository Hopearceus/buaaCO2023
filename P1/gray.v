`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:37:54 10/12/2023 
// Design Name: 
// Module Name:    gray 
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

module gray(
    input Clk,
    input Reset,
    input En,
    output reg [2:0] Output,
    output reg Overflow
    );
	reg [2:0] tmp;
	initial begin
		Overflow <= 0;
		Output <= 3'b000;
		tmp <= 3'b000;
	end
	always@(posedge Clk) begin
		if(Reset == 1) begin
			Output <= 0;
			Overflow <= 0;
			tmp <= 3'b000;
		end
		else begin
			if(En == 1) begin
				if(tmp <= 3'b110) begin
					tmp <= tmp + 3'b001;
					Output <= ({{(tmp + 3'b001)},1'b0} ^ {1'b0,{tmp + 3'b001}}) >> 1'b1;
				end else begin
					Overflow <= 1;
					tmp <= 0;
					Output <= 0;
				end
			end
		end
	end

endmodule
