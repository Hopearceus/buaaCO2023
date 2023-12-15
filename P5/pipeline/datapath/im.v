`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:36:08 11/13/2023 
// Design Name: 
// Module Name:    im 
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
module im(
    input [31:0] pc,
    output [31:0] instr
    );
	reg [31:0] im_data [0:4098];
	integer which;
	initial begin
		$readmemh("code.txt", im_data, 0, 4096);
	end
	always @(*) begin
		which = (pc - 32'h00003000) >> 2;
	end
	assign instr = im_data[which];

endmodule
