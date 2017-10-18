`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:01:16 10/25/2016 
// Design Name: 
// Module Name:    alu8bit 
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
// alu8bit.v - 8-bit ALU. This is the Top Module.
module alu8bit(
    input [7:0] A,
    input [7:0] B,
    input [1:0] Opcode,
    output reg [7:0] Y,
	 output reg [7:0] Y1, //Y1 stores higher order 8 bits in 16-bit product. For other operations, it is 0.
    output reg C,
    output reg O
    );
	 wire [7:0] S,A1,X1,P1,P0;
	 wire C1,O1;
	 adder8bit Sum(A,B,0,S,C1,O1);
	 and8bit AND(A,B,A1);
	 xor8bit XOR(A,B,X1);
	 mult8bit Product(A,B,P1,P0);
always@(*)
begin
case(Opcode)
	2'b00: begin
			 Y = S;
			 C = C1;
			 O = O1;
			 Y1 = 0;
			 end
	2'b01: begin 
			 Y = A1;
			 O = 0;
			 C = 0;
			 Y1 = 0;
			 end
	2'b10: begin 
			 Y = X1;
			 O = 0;
			 C = 0;
			 Y1 = 0;
			 end
	2'b11: begin 
			 Y = P0;
			 Y1 = P1;
			 O = 0;
			 C = 0;
			 end
endcase
end 
endmodule
