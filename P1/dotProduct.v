`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:01:44 10/16/2023 
// Design Name: 
// Module Name:    dotProduct 
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
module dotProduct(
    input [31:0] vector_a,
    input [31:0] vector_b,
    output reg[5:0] result
    );
	reg [6:0] i;
	reg [5:0] sum;
	//integer i;
	always@(vector_a, vector_b) begin
		sum = 6'b000000;
		//result = (vector_a[0]&vecor_b[0]) + (
		 for(i = 0;i < 6'b100000 ;i = i + 6'b000001)
			sum = sum + (vector_a[i] * vector_b[i]);
		result = sum;
	end

endmodule
