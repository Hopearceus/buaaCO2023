`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:05:38 11/14/2023 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [31:0] aluA,
    input [31:0] aluB,
	 input [15:0] offset,
    input [2:0] aluOp,
    //input [4:0] shamt,
    input [31:0] aluOut
    );
	assign aluOut = (aluOp == 3'b000) ? aluA + aluB
						:(aluOp == 3'b001) ? aluA - aluB
						:(aluOp == 3'b010) ? aluA * aluB
						:(aluOp == 3'b011) ? aluA | aluB
						:(aluOp == 3'b100) ? 32'h0000_0000
						:(aluOp == 3'b101) ? {offset, {16{1'b0}}}
						:32'h0000_0000;

endmodule
