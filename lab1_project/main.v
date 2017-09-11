`timescale 1ns / 1ps  //sets the timescale (for simulation)

`default_nettype none //overrides default behaviour: errors when a net type is not declired

module main(switch, led);

//declare the inputs and outputs of our design
input  wire [7:0] switch;        //8 input switches
output wire [7:0] led;           //8 output leds

// cover top left gate 
assign led[0] = switch[0] ^ switch[1]; 

// cover top right gate 
assign led[1] = &switch;

// wires for circuit of MUXes
wire [5:0] mux_top, mux_bottom; 

assign mux_top = switch[2] ? 6'b101010: 6'b000000;
assign mux_bottom = switch[3] ? 6'b101010: 6'b111111; 
 
assign led[7:2] = switch[4] ? mux_bottom: mux_top; 

endmodule

`default_nettype none //reengages default behaviour: needed for other Xilinx modules
