`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:49:12 11/15/2023 
// Design Name: 
// Module Name:    forwardctrl 
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
module forwardctrl(
	 input [31:0] D_regOut1,
	 input [31:0] D_regOut2,
	 input [31:0] E_regOut1,
	 input [31:0] E_regOut2,
	 input [31:0] M_regOut1,
	 input [31:0] M_regOut2,
    input [4:0] D_rs,
    input [4:0] D_rt,
    input [4:0] E_rs,
    input [4:0] E_rt,
    input [4:0] M_rs,
    input [4:0] M_rt,
	 input D_regW_E,
	 input [4:0] D_regWa_E,
    input E_regW_M,
    input [4:0] E_regWa_M,
	 input [31:0] E_regWd_M,
    input M_regW_W,
    input [4:0] M_regWa_W,
	 input [31:0] M_regWd_W,
	 input [31:0] D_pc8,
    input [31:0] D_pc8_E,
    input [31:0] E_pc8_M,
    input [31:0] M_pc8_W,
    output reg [31:0] regFor1_D,
    output reg [31:0] regFor2_D,
    output reg [31:0] regFor1_E,
    output reg [31:0] regFor2_E,
    output reg [31:0] regFor1_M,
    output reg [31:0] regFor2_M,
	 output reg [31:0] pc8For_D,
	 output reg [31:0] pc8For_E,
	 output reg [31:0] pc8For_M
    );
//---------------------------PC8-----------------------------------------
	 always@(*) begin
		pc8For_D = D_pc8_E;
		pc8For_E = E_pc8_M;
		pc8For_M = M_pc8_W;
	end
//---------------------------D stage-------------------------------------
	always@(*) begin
		regFor1_D = D_regOut1;
		regFor2_D = D_regOut2;
		if(D_rs != 5'b00000) begin
			if (D_regW_E == 1 && D_regWa_E == D_rs && D_rs == 5'b11111) regFor1_D = D_pc8_E;
			else if(E_regW_M == 1 && E_regWa_M == D_rs) regFor1_D = E_regWd_M;
			else if(M_regW_W == 1 && M_regWa_W == D_rs) regFor1_D = M_regWd_W;
		end
		if(D_rt != 5'b00000) begin
			if (D_regW_E == 1 && D_regWa_E == D_rt && D_rt == 5'b11111) regFor2_D = D_pc8_E;
			else if(E_regW_M == 1 && E_regWa_M == D_rt) regFor2_D = E_regWd_M;
			else if(M_regW_W == 1 && M_regWa_W == D_rt) regFor2_D = M_regWd_W;
		end
	end
		
//---------------------------E stage-------------------------------------
	always@(*) begin
		regFor1_E = E_regOut1;
		regFor2_E = E_regOut2;
		if(E_rs != 5'b00000) begin
			if(E_regW_M == 1 && E_regWa_M == E_rs) regFor1_E = E_regWd_M;
			else if(M_regW_W == 1 && M_regWa_W == E_rs) regFor1_E = M_regWd_W;
		end
		if(E_rt != 5'b00000) begin
			if(E_regW_M == 1 && E_regWa_M == E_rt) regFor2_E = E_regWd_M;
			else if(M_regW_W == 1 && M_regWa_W == E_rt) regFor2_E = M_regWd_W;
		end
	end
	
//---------------------------M stage-------------------------------------
	always@(*) begin
		regFor1_M = M_regOut1;
		regFor2_M = M_regOut2;
		if(M_regW_W == 1) begin
			if(M_regWa_W == M_rs && M_rs != 5'b00000) regFor1_M = M_regWd_W;
			if(M_regWa_W == M_rt && M_rt != 5'b00000) regFor2_M = M_regWd_W;
		end
	end


endmodule
