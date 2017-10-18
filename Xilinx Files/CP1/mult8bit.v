`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:59:20 10/25/2016 
// Design Name: 
// Module Name:    mult8bit 
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
// mult8bit.v - 8-bit Boothe's Multiplier
module mult8bit(
    input [7:0] Q0,
    input [7:0] M,
    output reg [7:0] A, //A is a 8-bit register which stores higher order 8 bits in the 16-bit product
	 output reg [7:0] Q  //Q is a 8-bit register which stores lower order 8 bits in the 16-bit product
    );
integer i;
reg Q_1;
integer count;
reg clk;
wire [7:0] Sum,Difference;
wire t1,t2,t3,t4;
initial begin
Q = Q0;
A = 0;
Q_1 = 0;
count = 8;
clk = 0;
end    
always begin
#5 clk = ~clk;
end

always @(Q0)
begin
Q <= Q0;
count = 8;
end 

adder8bit Add(A,M,0,Sum,t1,t2);
adder8bit Subtract(A,~M,1,Difference,t3,t4);
		
always @(posedge clk)
begin
if(count > 0)
	begin
	if(Q[0] == 0 && Q_1 == 1)
		A <= Sum;
	else if(Q[0] == 1 && Q_1 == 0)
		A <= Difference;
	Q_1 <= Q[0];
	for (i = 0; i < 7; i = i+1) 
		begin
		Q[i] <= Q[i+1];
		end
	#2 Q[7] <= A[0];
	#2 for (i = 0; i < 7; i = i+1) 
		begin
		A[i] <= A[i+1];
		end
	count <= count-1;
	end
end

endmodule
