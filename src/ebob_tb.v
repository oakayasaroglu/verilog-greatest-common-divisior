`timescale 1ns / 1ps



module ebob_tb;

	// Inputs
	reg clk,clkrst;
	reg [3:0] numb1;
	reg [3:0] numb2;

	// Outputs
	wire [3:0] ebobb;

	// Instantiate the Unit Under Test (UUT)
	ebob uut (
		.clk(clk), 
		.numb1(numb1), 
		.numb2(numb2), 
		.ebobb(ebobb),
		.clkrst(clkrst)
	);

	initial begin
		// Initialize Inputs
		clkrst = 1;
		clk=0;
		numb1 = 4'b1111;
		numb2 = 4'b1010;

		// Wait 100 ns for global reset to finish
		#100;
		numb1 = 4'b1111;
		numb2 = 4'b1010;

		
        
		// Add stimulus here


	end

		
		always #1 clk=~clk;
		always #100 clkrst=~clkrst;
			
endmodule

