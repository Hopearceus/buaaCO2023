`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:03:30 09/21/2023 
// Design Name: 
// Module Name:    cpu_checker 
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
`define start 4'h0
`define readNor 4'h1
`define readTime 4'h2
`define readAt 4'h3
`define readPC 4'h4
`define readColon 4'h5
`define readDollar 4'h6
`define readStar 4'h7
`define readGrf 4'h8
`define readAddr 4'h9
`define readLess 4'ha
`define readEqual 4'hb
`define readData 4'hc
`define readEnd 4'hd

`define Error 2'b00
`define Register 2'b01
`define Storage 2'b10
module cpu_checker(
    input [7:0] char,
    input reset,
    input clk,
    output [1:0] format_type
    );
	 reg [3:0] now;
	 reg [1:0] type;
	 reg [3:0] num;
	 initial begin
		now = `start;
		type = `Error;
		num = 4'b0000;
	 end
	 always @(posedge clk) begin
		if(reset == 1) begin
			now <= `start;
			type <= `Error;
			num <= 4'b0000;
		end
		else begin
			if(now == `start) begin
				type <= `Error;
				if(char == "^") now <= `readNor;
				else now <= `start;
			end
			else if(now == `readNor) begin
				if(char <= "9" && char >= "0") begin
					now <= `readTime;
					num <= 4'b0001;
				end
			end
			else if(now == `readTime) begin
				if(char <= "9" && char >= "0") begin
					if(num < $unsigned(4'b0100)) begin
						num <= num + 1;
						now <= `readTime;
					end else begin
						now <= `start;
						num <= 4'b0000;
					end
				end
				else if(char == "@") begin
					now <= `readAt;
					num <= 4'b0000;
				end else begin
					now <= `start;
					num <= 4'b0000;
				end
			end
			else if(now == `readAt) begin
				if((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) begin
					num <= 4'b0001;
					now <= `readPC;
				end else begin
					now <= `start;
				end
			end
			else if(now == `readPC) begin
				if((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) begin
					if(num < 4'b1000) begin
						num <= num + 1;
						now <= `readPC;
					end else begin
						num <= 4'b0000;
						now <= `start;
					end
				end else if(char == ":") begin
					if(num == 4'b1000) begin
						now <= `readColon;
						num <= 4'b0000;
					end else begin
						now <= `start;
						num <= 4'b0000;
					end
				end else begin
					now <= `start;
					num <= 4'b0000;
				end
			end
			else if(now == `readColon) begin
				if(char == " ") now <= `readColon;
				else if(char == "$") begin
					now <= `readDollar;
					type <= `Register;
				end
				else if(char == "*") begin
					now <= `readStar;
					type <= `Storage;
				end
				else now <= `start;
			end
			else if(now == `readDollar) begin
				if(char >= "0" && char <= "9") begin
					num <= 4'b0001;
					now <= `readGrf;
				end else now <= `start;
			end
			else if(now == `readStar) begin
				if((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) begin
					num <= 4'b0001;
					now <= `readAddr;
				end else now <= `start;
			end
			else if(now == `readGrf) begin
				if(char >= "0" && char <= "9") begin
					if (num < 4'b0100) begin
						num <= num +1;
						now <= `readGrf;
					end else begin
					num <= 4'b0000;
					now <= `start;
					end
				end else if(char == " ") begin
					num <= 4'b0100;
					now <= `readGrf;
				end else if(char == "<") begin
					num <= 4'b0000;
					now <= `readLess;
				end else begin
					now <= `start;
					num <= 4'b0000;
				end
			end
			else if(now == `readAddr) begin
				if((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) begin
					if(num < 4'b1000) begin
						num <= num + 1;
						now <= `readAddr;
					end else begin
						num <= 4'b0000;
						now <= `start;
					end
				end else if(char == " ") begin
					if(num == 4'b1000) begin
						now <= `readAddr;
						num <= 4'b1000;
					end else begin
						now <= `start;
						num <= 4'b0000;
					end
				end else if(char == "<") begin
					if(num == 4'b1000) begin
						now <= `readLess;
						num <= 4'b0000;
					end else begin
						now <= `start;
						num <= 4'b0000;
					end
				end else begin
					now <= `start;
					num <= 4'b0000;
				end
			end
			else if(now == `readLess) begin
				if(char == "=") now <= `readEqual;
				else now <= `start;
			end
			else if(now == `readEqual) begin
				if(char == " ") now <= `readEqual;
				else if((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) begin
					num <= 4'b0001;
					now <= `readData;
				end else now <= `start;
			end
			else if(now == `readData) begin
				if((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) begin
					if(num < 4'b1000) begin
						num <= num + 1;
						now <= `readData;
					end else begin
						num <= 4'b0000;
						now <= `start;
					end
				end else if(char == "#") begin
					if(num == 4'b1000) begin
						now <= `readEnd;
						num <= 4'b0000;
					end else begin
						now <= `start;
						num <= 4'b0000;
					end
				end else begin
					now <= `start;
					num <= 4'b0000;
				end
			end
			else begin
				if(char == "^") begin
					now <= `readNor;
					num <= 4'b0000;
					type <= `Error;
				end else begin
					now <= `start;
					num <= 4'b0000;
					type <= `Error;
				end
			end
		end
	 end
	 assign format_type = (now == `readEnd) ? type : `Error;
	 
endmodule
