`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:15:36 09/03/2023 
// Design Name: 
// Module Name:    counting 
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
module counting1(
    input [1:0] num,
    input clk,
    output ans
    );
	reg [1:0] status;
	initial begin
		status = 2'b00;
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
				else if(num==2'b10) status <= 2'b00;
				else status <= 2'b11;
				end
			2'b11:status <=2'b11; 
		endcase
	end
	assign ans = (status==2'b11)?1:0;

endmodule
