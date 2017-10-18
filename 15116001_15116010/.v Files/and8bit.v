`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:45:43 10/25/2016 
// Design Name: 
// Module Name:    and8bit 
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
// GroupID-10 (15116001_15116010) - A.S.Akil Arif Ibrahim & Ashutosh Parija
// Date: October 28, 2016
// and8bit.v - 8-bit AND
module and8bit(
    input [7:0] A,
    input [7:0] B,
    output [7:0] Y
    );
and(Y[0],A[0],B[0]);
and(Y[1],A[1],B[1]);
and(Y[2],A[2],B[2]);
and(Y[3],A[3],B[3]);
and(Y[4],A[4],B[4]);
and(Y[5],A[5],B[5]);
and(Y[6],A[6],B[6]);
and(Y[7],A[7],B[7]);
endmodule
