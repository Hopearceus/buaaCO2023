`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:29:16 10/12/2023 
// Design Name: 
// Module Name:    BlockChecker 
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
`define S0 4'h0
`define S1 4'h1
`define S2 4'h2
`define S3 4'h3
`define S4 4'h4
`define S5 4'h5
`define S6 4'h6
`define S7 4'h7
`define S8 4'h8
`define S9 4'h9
`define Sa 4'ha
`define Sb 4'hb
module BlockChecker(
    input clk,
    input reset,
    input [7:0] in,
    output result,
	 output reg[1:0] t
    );
	reg [3:0] state;
	reg [3:0] next_state;
	reg [63:0] num;
	reg [1:0] flag;
	integer i;
	reg [3:0] c;
	initial begin
		num = 64'h0000_0000_0000_0000;
		state = `S1;
		next_state = `S0;
		c = 4'b0110;
		t = 4'b0000;
		flag = 0;
		for(i=0;i<2;i=i+1) begin
			t = t + c[3-2*i-:2];
		end
	end
	always@(posedge reset) begin
		num = 64'h0000_0000_0000_0000;
		state = `S1;
		next_state = `S0;
		flag = 0;
	end
	
	always@(posedge clk) begin
		if(reset) begin
			num <= 64'h0000_0000_0000_0000;
			state <= `S1;
			next_state <= `S0;
			flag <= 0;
		end else state <= next_state;
		if(next_state == `S6) begin
			if(flag == 2'b00) num <= num + 64'h0000_0000_0000_0001;
		end else if (next_state == `S7) begin
			if(flag == 2'b00) num <= num - 64'h0000_0000_0000_0001;
		end else if (next_state == `Sa) begin
			if(num > 64'h0000_0000_0000_0000) begin
				num <= num - 64'h0000_0000_0000_0001;
			end else begin
				if(flag == 2'b00) flag <= 2'b01;
				else flag = 2'b10;
				num <= 64'h0000_0000_0000_0000;
			end
		end else if(next_state == `Sb)begin
			//if (mod == 1) num <= num + 64'h0000_0000_0000_0001;
			if(flag == 2'b00) num <= num + 64'h0000_0000_0000_0001;
			else begin
				if(flag == 2'b01) flag <= 2'b00;
				else flag <= 2'b10;
				num <= 64'h0000_0000_0000_0000;
			end
		end
		//mod <= 0;
	end
	
	always@(in, state) begin
		case(state)
		`S0: begin
			if(in == " ") next_state = `S1;
			else next_state = `S0;
		end
		`S1: begin
			if(in == "b" || in == "B") next_state = `S2;
			else if(in == "e" || in == "E") next_state = `S8;
			else if(in == " ") next_state = `S1;
			else next_state = `S0;
		end
		`S2: begin
			if(in == "e" || in == "E") next_state = `S3;
			else next_state = `S0;
		end
		`S3: begin
			if(in == "g" || in == "G") next_state = `S4;
			else next_state = `S0;
		end
		`S4: begin
			if(in == "i" || in == "I") next_state = `S5;
			else next_state = `S0;
		end
		`S5: begin
			if(in == "n" || in == "N") next_state = `S6;
			else next_state = `S0;
		end
		`S6: begin
			if(in == " ") next_state = `S1;
			else next_state = `S7;
		end
		`S7: begin
			
			//if(in == "b" || in == "B") next_state = `S2;
			//else if(in == "e" || in == "E") next_state = `S8;
			if(in == " ") next_state = `S1;
			else next_state = `S0;
		end
		`S8: begin
			if(in == "n" || in == "N") next_state = `S9;
			else next_state = `S0;
		end
		`S9: begin
			if(in == "d" || in == "D") next_state = `Sa;
			else next_state = `S0;
		end
		`Sa: begin
			if(in == " ") next_state = `S1;
			else begin
				next_state = `Sb;
			end
		end
		`Sb: begin
			//mod = 1;
			if(in == " ") next_state = `S1;
			else next_state = `S0;
		end
		endcase
	end
	assign result = (flag > 2'b00) ? 0 :
					(num == 64'h0000_0000_0000_0000) ? 1 : 0;
endmodule
