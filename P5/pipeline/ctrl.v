`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:13:34 11/14/2023 
// Design Name: 
// Module Name:    ctrl 
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
`define ADD 6'b100000
`define SUB 6'b100010
`define ORI 6'b001101
`define LW 6'b100011
`define SW 6'b101011
`define BEQ 6'b000100
`define LUI 6'b001111
`define JAL 6'b000011
`define JR 6'b001000
`define j 6'b000010
`define R_type 6'b000000
module ctrl(
    input [31:0] pc,
    input [31:0] instr,
    input isStall,
    output [5:0] code,
    output [5:0] func,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [15:0] offset,
	 output [25:0] index,
    output regW,
    output [1:0] regWsrc,
    output [1:0] regWdst,
    output memToreg,
    output memW,
    output [2:0] aluOp,
    output extWay,
    output [2:0] npcOp,
	 output [2:0] cmpOp,
    output aluSrc2,
	 //---------Stall Ctrl----------------------
	 output [1:0] Tnew,
	 input E_regW,
	 input M_regW,
	 input [4:0] E_regWa,
	 input [4:0] M_regWa,
	 input [1:0] E_Tnew,
	 input [1:0] M_Tnew
    );
	assign code = instr[31:26];
	assign func = instr[5:0];
	assign rs = instr[25:21];
	assign rt = instr[20:16];
	assign rd = instr[15:11];
	assign offset = instr[15:0];
	assign index = instr[25:0];
// ------------------------DECODE---------------------------------	
	wire add = (code == `R_type) && (func == `ADD);
	wire sub = (code == `R_type) && (func == `SUB);
	wire ori = (code == `ORI);
	wire lw = (code == `LW);
	wire sw = (code == `SW);
	wire beq = (code == `BEQ);
	wire lui = (code == `LUI);
	wire jal = (code == `JAL);
	wire jr = (code == `R_type) && (func == `JR);
	wire j = (code == `j);
// ------------------------CTRL-----------------------------------
	assign regW = add | sub | ori | lw | lui | jal;
	assign memToreg = lw;
	assign memW = sw;
	assign extWay = beq | lw | sw;
	assign aluSrc2 = ori | lw | sw;
	assign regWdst = (ori | lw | lui) ? 2'b01
						 :(jal) ? 2'b10
						 :(add | sub) ? 2'b00:
						 2'b00;
	assign regWsrc = jal ? 2'b10
						 :(add | sub | ori | lui) ? 2'b00
						 :2'b00;
	assign aluOp = (add | lw | sw | beq) ? 3'b000
					  :(sub) ? 3'b001
					  :(ori) ? 3'b011
					  :(lui) ? 3'b101
					  :3'b100;
	assign npcOp = (beq) ? 3'b001
					  :(jal | j) ? 3'b011
					  :(jr) ? 3'b010
					  :3'b000;
	assign cmpOp = (beq) ? 3'b000 : 3'b000;
// -----------------------Stall Ctrl-------------------------------
	wire rsUse = add | sub | ori | lw | sw | beq | jr;
	wire rtUse = add | sub | ori | lw | sw | beq | lui;
	assign Tnew = (add | sub | ori | lui) ? 2'b10
					 :(lw) ? 2'b11
					 :2'b00;
	wire [1:0] Tuse1 = (add | sub | ori | lw | sw) ? 2'b01 : 2'b00;
	wire [1:0] Tuse2 = (add | sub | lui) ? 2'b01
					:(sw) ? 2'b10
					:(ori | lw) ? 2'b11
					:2'b00;
	stallctrl stallctrl(rsUse, rtUse, rs, rt, E_regW, E_regWa, M_regW, M_regWa, Tuse1, Tuse2, E_Tnew, M_Tnew, isStall);
	

endmodule
