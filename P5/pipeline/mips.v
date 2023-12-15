`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:35:34 11/13/2023 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
	wire isStall;
//-------------------declaration of variables------------------------------------
	//-----------IF Stage--------------------------
	wire [31:0] instr_F, npc_F;
	reg [31:0] pc_F;
	wire [2:0] npcOp_F;
	wire [31:0] pc8_F = pc_F + 32'h0000_0008;
	wire [31:0] pc4_F = pc_F + 32'h0000_0004;
	
	//-----------ID Stage--------------------------
	wire [31:0] npc_D, instr_D, pc8_D, pc4_D;
	wire [31:0] pc_D;
	wire cmpOut_D, regW_D, memToreg_D, memW_D, extWay_D;
	wire [4:0] rs_D, rt_D, rd_D, regWa_D;
	wire [5:0] code_D, func_D;
	wire [15:0] offset_D;
	wire [25:0] index_D;
	wire [1:0] regWsrc_D, regWdst_D;
	wire [2:0] aluOp_D, npcOp_D, cmpOp_D;
	wire aluSrc1_D, aluSrc2_D;
	wire [31:0] regOut1_D, regOut2_D, offset32_D;
	//-------stall ctrl-------
	wire [1:0] Tnew_D, Tuse1_D, Tuse2_D;
	//-------forward ctrl-----
	wire [31:0] regFor1_D, regFor2_D, pc8For_D;
	
	//------------E Stage--------------------------
	wire [31:0] pc_E, pc8_E, instr_E, offset32_E, regOut1_E, regOut2_E, aluOut_E;
	wire regW_E, memToreg_E, memW_E, aluSrc1_E, aluSrc2_E;
	wire [15:0] offset_E;
	wire [4:0] regWa_E, rs_E, rt_E, rd_E;
	wire [1:0] regWsrc_E;
	wire [2:0] aluOp_E;
	wire [1:0] Tnew_E;
	//--------forward ctrl----------
	wire [31:0] regFor1_E, regFor2_E, pc8For_E;
	
	//------------M Stage--------------------------
	wire [31:0] pc_M, pc8_M, instr_M, regOut1_M, regOut2_M, aluOut_M, regWd_M, memOut_M;
	wire regW_M, memToreg_M, memW_M;
	wire [4:0] regWa_M, rs_M, rt_M, rd_M;
	wire [1:0] Tnew_M;
	//------forward ctrl--------------
	wire [31:0] regFor1_M, regFor2_M, pc8For_M;
	
	//------------W Stage--------------------------
	wire regW_W;
	wire [4:0] regWa_W;
	wire [31:0] regWd_W, pc_W, pc8_W, instr_W;
	
//-------------------IF Stage----------------------------------------------------
	
	im im(pc_F, instr_F);
	pipereg2 F_pc_D(clk, reset, isStall, pc_F, pc_D);
	pipereg2 F_instr_D(clk, reset, isStall, instr_F, instr_D);
	pipereg2 F_pc8_D(clk, reset, isStall, pc8_F, pc8_D);
	pipereg2 F_pc4_D(clk, reset, isStall, pc4_F, pc4_D);
	//pipereg D_npc_F(clk, reset, 1'b0, npc_D, npc_F);
	pipereg#(.WIDTH(3)) D_npcOp_F (clk, reset, isStall, npcOp_D, npcOp_F);
	always@(posedge clk) begin
		if(reset == 1) begin
			pc_F <= 32'h0000_3000;
		end else if(isStall == 1) begin
			pc_F <= pc_F;
		end else begin 
			//if(npcOp_F == 3'b000) begin
			//	pc_F <= pc_F + 32'h0000_0004;
			//end else pc_F <= npc_F;
			pc_F <= npc_F;
		end
	end
	
//-------------------ID Stage----------------------------------------------------
	wire [1:0] Tnew_tmpD = (Tnew_D == 2'b00) ? 2'b00 : Tnew_D - 2'b01;
	
	ctrl ctrl(pc_D, instr_D, isStall, code_D, func_D, rs_D, rt_D, rd_D, offset_D, index_D, regW_D, regWsrc_D,
		regWdst_D, memToreg_D, memW_D, aluOp_D, extWay_D, npcOp_D, cmpOp_D, aluSrc2_D, Tnew_D, regW_E, regW_M, regWa_E, regWa_M, Tnew_E, Tnew_M);
	grf grf(clk, reset, rs_D, rt_D, regW_W, regWa_W, regWd_W, pc_W, regOut1_D, regOut2_D);
	cmp cmp(regFor1_D, regFor2_D, cmpOp_D, cmpOut_D);
	ext ext_offset(extWay_D, offset_D, offset32_D);
	forwardctrl forwardctrl(regOut1_D, regOut2_D, regOut1_E, regOut2_E, regOut1_M, regOut2_M, rs_D, rt_D, rs_E, rt_E, rs_M, rt_M,
		regW_E, regWa_E, regW_M, regWa_M, regWd_M, regW_W, regWa_W, regWd_W, pc8_D, pc8_E, pc8_M, pc8_W, regFor1_D, regFor2_D, regFor1_E, regFor2_E, 
		regFor1_M, regFor2_M, pc8For_D, pc8For_E, pc8For_M);
	
	
	assign regWa_D = (regWdst_D == 2'b00) ? rd_D
						 :(regWdst_D == 2'b01) ? rt_D
						 :(regWdst_D == 2'b10) ? 5'b11111
						 :5'b00000;
	wire [31:0] offset_signedD;
	ext ext16_32(1'b1, offset_D, offset_signedD);
	
	wire [31:0] npc_branch = (cmpOut_D == 1) ? (offset_signedD<<2) + pc4_D : pc8_D;
	assign npc_F = (npcOp_D == 3'b000) ? pc4_F
					  :(npcOp_D == 3'b001) ? npc_branch
					  :(npcOp_D == 3'b010) ? regFor1_D
					  :(npcOp_D == 3'b011) ? {pc_D[31:28], index_D, {2{1'b0}}}
					  :pc4_F;
	
	//-------D-E reg----------
	pipereg D_pc_E (clk, reset, isStall, pc_D, pc_E);
	pipereg D_pc8_E (clk, reset ,isStall, pc8_D, pc8_E);
	pipereg D_instr_E (clk, reset, isStall, instr_D, instr_E);
	pipereg#(.WIDTH(1)) D_regW_E (clk, reset, isStall, regW_D, regW_E);
	pipereg#(.WIDTH(1)) D_memToreg_E (clk, reset, isStall, memToreg_D, memToreg_E);
	pipereg#(.WIDTH(1)) D_memW_E (clk, reset, isStall, memW_D, memW_E);
	//pipereg#(.WIDTH(1))(clk, reset, isStall, extWay_D, extWay_E);
	pipereg#(.WIDTH(5)) D_rs_E (clk, reset, isStall, rs_D, rs_E);
	pipereg#(.WIDTH(5)) D_rt_E (clk, reset, isStall, rt_D, rt_E);
	pipereg#(.WIDTH(5)) D_rd_E (clk, reset, isStall, rd_D, rd_E);
	pipereg#(.WIDTH(5)) D_regWa_E (clk, reset, isStall, regWa_D, regWa_E);
	pipereg#(.WIDTH(2)) D_regWsrc_E (clk, reset, isStall, regWsrc_D, regWsrc_E);
	pipereg#(.WIDTH(3)) D_aluOp_E (clk, reset, isStall, aluOp_D, aluOp_E);
	pipereg#(.WIDTH(1)) D_aluSrc1_E (clk, reset, isStall, aluSrc1_D, aluSrc1_E);
	pipereg#(.WIDTH(1)) D_aluSrc2_E (clk, reset, isStall, aluSrc2_D, aluSrc2_E);
	pipereg D_offset32_E (clk, reset, isStall, offset32_D, offset32_E);
	pipereg#(.WIDTH(2)) D_Tnew_E (clk, reset, isStall, Tnew_tmpD, Tnew_E);
	pipereg D_regOut1_E (clk, reset, isStall, regFor1_D, regOut1_E);
	pipereg D_regOut2_E (clk, reset, isStall, regFor2_D, regOut2_E);
	pipereg#(.WIDTH(16)) D_offset_E (clk, reset, isStall, offset_D, offset_E);
	
//------------------E stage-------------------------------------------------------
	wire [1:0] Tnew_tmpE = (Tnew_E == 2'b00) ? 2'b00 : Tnew_E - 2'b01;
	wire [31:0] aluIn2_E = (aluSrc2_E == 2'b00) ? regFor2_E : offset32_E;
	alu alu(regFor1_E, aluIn2_E, offset_E, aluOp_E, aluOut_E);
	wire [31:0] regWd_E = (regWsrc_E == 2'b00) ? aluOut_E : pc8_E;
	
	//--------E-M reg---------------
	pipereg E_pc_M(clk, reset, 1'b0, pc_E, pc_M);
	pipereg E_pc8_M(clk, reset, 1'b0, pc8_E, pc8_M);
	pipereg E_instr_M(clk, reset, 1'b0, instr_E, instr_M);
	pipereg E_regOut1_M(clk, reset, 1'b0, regFor1_E, regOut1_M);
	pipereg E_regOut2_M(clk, reset, 1'b0, regFor2_E, regOut2_M);
	pipereg E_aluOut_M(clk, reset, 1'b0, aluOut_E, aluOut_M);
	pipereg E_regWd_M(clk, reset, 1'b0, regWd_E, regWd_M);
	pipereg#(.WIDTH(1)) E_regW_M(clk, reset, 1'b0, regW_E, regW_M);
	pipereg#(.WIDTH(1)) E_memToreg_M(clk, reset, 1'b0, memToreg_E, memToreg_M);
	pipereg#(.WIDTH(1)) E_memW_M(clk, reset, 1'b0, memW_E, memW_M);
	pipereg#(.WIDTH(5)) E_rs_M(clk, reset, 1'b0, rs_E, rs_M);
	pipereg#(.WIDTH(5)) E_rt_M(clk, reset, 1'b0, rt_E, rt_M);
	pipereg#(.WIDTH(5)) E_rd_M(clk, reset, 1'b0, rd_E, rd_M);
	pipereg#(.WIDTH(5)) E_regWa_M(clk, reset, 1'b0, regWa_E, regWa_M);
	pipereg#(.WIDTH(2)) E_Tnew_M(clk, reset, 1'b0, Tnew_tmpE, Tnew_M);
	
//------------------M stage-------------------------------------------------------
	dm dm(clk, reset, memW_M, aluOut_M, regFor2_M, pc_M, memOut_M);
	
	wire [31:0] regWd_tmpM = (memToreg_M == 0) ? regWd_M : memOut_M;
	//------M_W reg-------------------
	pipereg M_pc_W(clk, reset, 1'b0, pc_M, pc_W);
	pipereg M_pc8_W(clk, reset, 1'b0, pc8_M, pc8_W);
	pipereg M_instr_W(clk, reset, 1'b0, instr_M, instr_W);
	pipereg M_regWd_W(clk, reset, 1'b0, regWd_tmpM, regWd_W);
	pipereg#(.WIDTH(1)) M_regW_W(clk, reset, 1'b0, regW_M, regW_W);
	pipereg#(.WIDTH(5)) M_regWa_W(clk, reset, 1'b0, regWa_M, regWa_W);
	
//------------------W stage-------------------------------------------------------
	

endmodule
