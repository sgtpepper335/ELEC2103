`timescale 1ns/1ps
module testbench();

	logic [1:0] KEY ;
	logic [7:0] LED;
	logic  clk;
	logic finish_flag;
	logic ins_irq0_irq;
	LT24_interface_irq dut (
		.avs_s0_address(),     //      avs_s0.address
		.avs_s0_read(),        //            .read
		.avs_s0_readdata(),    //            .readdata
		.avs_s0_write(),       //            .write
		.avs_s0_writedata(),   //            .writedata
		.avs_s0_waitrequest(), //            .waitrequest
		.clock_clk(clk),          //       clock.clk
		.reset_reset(KEY[1]),        //       reset.reset
		.ins_irq0_irq(ins_irq0_irq),       //    ins_irq0.irq
		.finish_flag(finish_flag),        // conduit_end.new_signal
		.counter(),            //            .new_signal_1
		.pattern()             //            .new_signal_2
	);
	
	always #10 clk = ~clk;
	
	initial
		begin
				clk = 1'b0;
				KEY = 2'b11;
				finish_flag = 1'b0;
				
				#45;
				
				KEY = 2'b01;
				
				#40
				KEY = 2'b01;
				
				#40 
				KEY = 2'b01;
				finish_flag = 1'b1;				#60;
				
			
				
				#40;
				
				KEY = 2'b11;
				
				#40 ; 
				
				KEY = 2'b10;
				
				#40;
				
				KEY = 2'b11;
				
				#40 ; 
				
				KEY = 2'b10;
				
				#40;
				
				KEY = 2'b11;
				
				#40 ; 
				
				KEY = 2'b10;
				
				#40;
				
				KEY = 2'b11;
				
				#40 ; 
				
				KEY = 2'b10;
				
				#40;
				
				KEY = 2'b11;
				
				#40 ; 
				
				KEY = 2'b01;
				#40;
				
				KEY = 2'b11;
				
				#40 ; 
				
				KEY = 2'b01;
				#40;
				
				KEY = 2'b11;
				
				#40 ; 
				
				KEY = 2'b01;

				#40;
				
				KEY = 2'b11;
				
				#40 ; 
				
				KEY = 2'b01;
				finish_flag = 1'b0;
								
		end
endmodule