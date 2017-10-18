`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:14:30 10/25/2016 
// Design Name: 
// Module Name:    multest 
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
module multest(
    input [7:0] mc, 
	 input [7:0] mp,
    output [15:0] prod
	 );
reg [7:0] A, Q, M;
reg Q_1,start,clk;
reg [3:0] count;
wire t1,t2;
wire [7:0] sum, difference;

initial begin
A = 8'b0;      
M = mc;
Q = mp;
Q_1 = 1'b0;      
count = 4'b0;
clk = 0;
end    
always begin
#5 clk = ~clk;
end

always @(posedge clk)
begin
      case ({Q[0], Q_1})
         2'b0_1 : {A, Q, Q_1} <= {sum[7], sum, Q};
         2'b1_0 : {A, Q, Q_1} <= {difference[7], difference, Q};
         default: {A, Q, Q_1} <= {A[7], A, Q};
      endcase
      count <= count + 1'b1;
end

adder8bit adder (A, M, 1'b0,sum,t1,t2);
adder8bit subtractor (A, ~M, 1'b1,difference,t1,t2);

assign prod = {A, Q};

endmodule


