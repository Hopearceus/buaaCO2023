`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:24:12 09/05/2023 
// Design Name: 
// Module Name:    id_fsm 
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
`define Null 2'b00
`define Alpha 2'b01
`define Num 2'b10
module id_fsm(
    input [7:0] char,
    input clk,
    output out
    );
	reg [1:0] state;
	initial begin
		state = `Null;
	end
	always@(posedge clk) begin
		if(((char >= "a") && (char <= "z")) || ((char >= "A") && (char <= "Z"))) begin
			//if(state == `Null) state <= `Alpha;
			//else if(state == `Alpha) state <= `Alpha;
			//else state <= `Alpha;
			state <= `Alpha;
		end
		else if(char >= "0" && char <= "9") begin
			if(state == `Null) state <= `Null;
			//else if(state == `Alpha) state <= `Num;
			else state <= `Num;
		end
		else begin
			//if(state == `Null) state <= `Null;
			//else if(state == `Num) state <= `Null;
			//else state <= `Null;
			state <= `Null;
		end
	end
	assign out = (state == `Num) ? 1: 0;

endmodule
