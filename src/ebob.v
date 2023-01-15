`timescale 1ns / 1ps

module ebob(clk,numb1,numb2,ebobb,clkrst);

	input wire [3:0] numb1,numb2;
	
	output reg [3:0] ebobb;
	
	input clk,clkrst;
	
	reg [3:0] minor,major;
	
	reg [2:0] state;
	parameter [1:0] S0=2'b00,S1=2'b01,S2=2'b10,S3=2'b11;
	
	/*initial begin

	end //initial**/
	
	always @(posedge clk) begin
	if(clkrst==1)begin
	state<=S3;
	major=numb1;
	minor=numb2;
	end else begin
	case(state)
	S0: if(minor>major)begin
			minor=minor-major;
			state<=S3;
			end
		 else 
			state<=S3;
	
	S1: if(major>minor)begin
			major=major-minor;
			state<=S3;
			end
		 else
			state<=S3;
			
	S2: if(minor==major)begin
			ebobb=minor;
			state<=S3;
			end
		  else
			state<=S3;
	
	S3: if(minor>major)
			state<=S0;
		 else if(major>minor)
			state<=S1;
		 else if(minor==major)
			state<=S2;
	
		endcase
		end
	end //always

endmodule
