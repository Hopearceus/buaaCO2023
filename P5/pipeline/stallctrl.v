`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:51:19 11/14/2023 
// Design Name: 
// Module Name:    stallctrl 
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
module stallctrl(
	 input rs,
	 input rt,
    input [4:0] D_rs,
    input [4:0] D_rt,
    input E_regW,
    input [4:0] E_regWa,
    input M_regW,
    input [4:0] M_regWa,
    input [1:0] D_Tuse1,
    input [1:0] D_Tuse2,
    input [1:0] E_Tnew,
    input [1:0] M_Tnew,
    output reg isStall
    );
	always@(*) begin
		if(E_regW) begin
			if(rs && D_rs==E_regWa && D_Tuse1<E_Tnew && D_rs != 5'b00000) isStall = 1;
			else if(rt && D_rt == E_regWa && D_Tuse2<E_Tnew && D_rt != 5'b00000) isStall =1;
			else if(M_regW) begin
				if(rs && D_rs==M_regWa && D_Tuse1<M_Tnew && D_rs != 5'b00000) isStall = 1;
				else if(rt && D_rt==M_regWa && D_Tuse2<M_Tnew && D_rt != 5'b00000) isStall = 1;
				else isStall = 0;
			end else isStall =0;
		end else if(M_regW) begin
			if(rs && D_rs==M_regWa && D_Tuse1<M_Tnew && D_rs != 5'b00000) isStall = 1;
			else if(rt && D_rt==M_regWa && D_Tuse2<M_Tnew && D_rt != 5'b00000) isStall = 1;
			else isStall = 0;
		end else isStall = 0;
	end

endmodule
