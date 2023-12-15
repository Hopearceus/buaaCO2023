`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:59:15 11/13/2023 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input extWay,
    input [15:0] offset,
    output [31:0] offset32
    );
	assign offset32 = (extWay == 0) ? {{16{1'b0}},offset} : {{16{offset[15]}},offset};

endmodule
