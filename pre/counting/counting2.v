`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:28:09 09/03/2023 
// Design Name: 
// Module Name:    counting2 
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
`define start 2'b00
module counting(
    input [1:0] num,
    input clk,
    output ans
    );
	reg [1:0] status;
	initial begin
		status = `start;
	end
	always@(posedge clk) begin
		case(status)
			2'b00: begin
				if(num==2'b01) status <= 2'b01;
				else status <= 2'b00;
				end
			2'b01: begin
				if(num==2'b01) status <= 2'b01;
				else if(num==2'b10) status <= 2'b10;
				else status <=2'b00;
				end
			2'b10: begin
				if(num==2'b01) status <= 2'b01;
				else if(num==2'b10) status <= 2'b10;
				else status <= 2'b11;
				end
			2'b11:begin
				if(num==2'b11) status <= 2'b11;
				else if(num==2'b01) status <= 2'b01;
				else status <=2'b00;
				end
		endcase
	end
	assign ans = (status==2'b11)?1:0;

endmodule
