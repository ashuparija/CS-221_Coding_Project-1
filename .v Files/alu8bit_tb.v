`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:29:06 10/28/2016
// Design Name:   alu8bit
// Module Name:   F:/Studies/Semester 3/CS-221 Coding Project-1/Xilinx Files/CP1/alu8bit_tb.v
// Project Name:  CP1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu8bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
// GroupID-10 (15116001_15116010) - A.S.Akil Arif Ibrahim & Ashutosh Parija
// Date: October 28, 2016
// alu8bit_tb.v - Test Bench For Top Module 8-bit ALU
module alu8bit_tb;

	// Inputs
	reg [7:0] A;
	reg [7:0] B;
	reg [1:0] Opcode;
	reg [17:0] Instruction;
	// Outputs
	wire [7:0] Y;
	wire [7:0] Y1;
	wire C;
	wire O;

	// Instantiate the Unit Under Test (UUT)
	alu8bit uut (
		.A(A), 
		.B(B), 
		.Opcode(Opcode), 
		.Y(Y), 
		.Y1(Y1), 
		.C(C), 
		.O(O)
	);
	
always@(Instruction)
		begin
		B = Instruction[7:0];
		A = Instruction[15:8];
		Opcode = Instruction[17:16];
		end
	initial begin

			  Instruction = 18'b000000011000000100;  //6,4
		#100 Instruction = 18'b010000011000000100;
		#100 Instruction = 18'b100000011000000100;
		#100 Instruction = 18'b110000011000000100;
		
		#100 Instruction = 18'b001111101000000100;  //-6,4
		#100 Instruction = 18'b011111101000000100;
		#100 Instruction = 18'b101111101000000100;		
		#100 Instruction = 18'b111111101000000100;
		
		#100 Instruction = 18'b001000000011110000;  //-128,-16 --> Overflow
		
		#100 Instruction = 18'b000111111101111101;  //63,16 --> Overflow
		
	end
      
endmodule

