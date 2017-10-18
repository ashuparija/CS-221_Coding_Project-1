`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:46:27 10/25/2016 
// Design Name: 
// Module Name:    xor8bit 
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
// xor8bit.v - 8-bit XOR
module xor8bit(
    input [7:0] A,
    input [7:0] B,
    output [7:0] Y
    );
xor(Y[0],A[0],B[0]);
xor(Y[1],A[1],B[1]);
xor(Y[2],A[2],B[2]);
xor(Y[3],A[3],B[3]);
xor(Y[4],A[4],B[4]);
xor(Y[5],A[5],B[5]);
xor(Y[6],A[6],B[6]);
xor(Y[7],A[7],B[7]);
endmodule
