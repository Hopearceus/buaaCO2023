`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:53:36 10/12/2023 
// Design Name: 
// Module Name:    expr 
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
`define null 2'b00
`define num 2'b01
`define alpha 2'b10
`define err 2'b11
module expr(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
	reg [1:0] state;
	reg [1:0] nextstate;
	initial begin
		state = `null;
		nextstate = `null;
	end
	always@(posedge clr) begin
		if (clr == 1) begin
			state = `null;
			nextstate = `null;
		end
	end
	
	always@(state, in) begin
		if (clr == 1) begin
			state <= `null;
		end else begin
			case (state)
				`null:begin
						if (in >= "0" && in <= "9" ) nextstate <= `num;
						else nextstate <= `err;
				end
				`num: begin
						if (in == "+" || in == "*") nextstate <= `alpha;
						else nextstate <= `err;
				end
				`alpha: begin
						if (in >= "0" && in <= "9") nextstate <= `num;
						else nextstate <= `err;
				end
				`err: begin
						nextstate <= `err;
				end
			endcase
		end
	end
	
	always@(posedge clk) begin
		state <= nextstate;
	end
	
	assign out = (state == `num) ? 1 : 0;


endmodule
