`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:21:42 10/16/2023 
// Design Name: 
// Module Name:    coloring 
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
module coloring(
    input clk,
    input rst_n,
    input [1:0] color,
    output check
    );
	reg [5:0] mem;
	reg state;
	initial begin
		mem=6'b111111;
		state=1'b0;
	end
	
	always @(negedge rst_n) begin
		mem <= 6'b111111;
		state <= 1'b0;
	end
	always @(posedge clk) begin
		if(rst_n == 0) begin
			mem<=6'b111111;
			state <= 1'b0;
		end else begin
			if (mem[3:2] == mem[1:0] && mem[1:0]==color) begin
				state <= 1'b1;
			end else if((mem[1:0]==2'b00&&color==2'b01)||(mem[1:0]==2'b01&&color==2'b00)) begin
				state <= 1'b1;
			end else begin
				state <= 1'b0;
				mem <= (mem << 2)+color;
			end
		end
	end
	assign check = (state == 1'b0)?0:1;
endmodule
