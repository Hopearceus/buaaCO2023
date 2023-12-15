`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:24:31 11/14/2023 
// Design Name: 
// Module Name:    npc 
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
module npc(
    input [31:0] pc,
    input [25:0] index,
	 input [15:0] offset,
    input [2:0] npcOp,
    input reset,
    input cmpOut,
    input [31:0] ra,
    output [31:0] npc
    );
	wire [31:0] offset_;
	
	assign npc_branch = (cmpOut == 1) ? pc + 32'd4 + (offset_ << 2) : pc +32'd4;
	assign npc = (npcOp == 3'b000) ? pc + 32'd4
					:(npcOp == 3'b001) ? npc_branch
					:(npcOp == 3'b010) ? ra
					:(npcOp == 3'b011) ? {pc[31:28], index, {2{1'b0}}}
					:pc + 32'd4;

endmodule
