`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:43:56 10/25/2016 
// Design Name: 
// Module Name:    adder8bit 
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
// adder8bit.v - 8-bit Ripple Carry Adder
module FullAdder(
    input A,
    input B,
    input Cin,
    output S,
    output Cout
    );
xor(S,A,B,Cin);
wire w1,w2,w3;
xor(w1,A,B);
and(w2,Cin,w1);
and(w3,A,B);
or(Cout,w2,w3);
endmodule

module adder8bit(
    input [7:0] A,
    input [7:0] B,
	 input Cin,
    output [7:0] S,
    output Cout,
	 output O
    );
wire [7:0] S0;
FullAdder FA0(A[0],B[0],Cin,S0[0],Co0);
FullAdder FA1(A[1],B[1],Co0,S0[1],Co1);
FullAdder FA2(A[2],B[2],Co1,S0[2],Co2);
FullAdder FA3(A[3],B[3],Co2,S0[3],Co3);
FullAdder FA4(A[4],B[4],Co3,S0[4],Co4);
FullAdder FA5(A[5],B[5],Co4,S0[5],Co5);
FullAdder FA6(A[6],B[6],Co5,S0[6],Co6);
FullAdder FA7(A[7],B[7],Co6,S0[7],Cout);

xor(O,Cout,Co6);
and(S[0],S0[0],~O);
and(S[1],S0[1],~O);
and(S[2],S0[2],~O);
and(S[3],S0[3],~O);
and(S[4],S0[4],~O);
and(S[5],S0[5],~O);
and(S[6],S0[6],~O);
and(S[7],S0[7],~O);

endmodule
