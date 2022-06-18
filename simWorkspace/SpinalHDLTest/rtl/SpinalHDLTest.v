// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : SpinalHDLTest
// Git hash  : 99e8397e0e93b4c6ddf5c8775464765f14d802be

`timescale 1ns/1ps

module SpinalHDLTest (
  input      [7:0]    io_in1,
  input      [7:0]    io_in2,
  output reg [7:0]    io_out1,
  output     [5:0]    io_out2,
  output     [5:0]    io_out3,
  output     [5:0]    io_out4,
  output     [5:0]    io_out5,
  input               clk,
  input               reset
);

  wire       [7:0]    _zz_io_out1;
  wire       [15:0]   _zz_io_out3;
  wire       [7:0]    _zz_io_out4;
  wire       [7:0]    _zz_io_out5;
  wire                name_lqx;
  reg        [7:0]    _zz_io_out2;

  assign _zz_io_out1 = (io_in2 + 8'h01);
  assign _zz_io_out3 = (io_in1 * io_in2);
  assign _zz_io_out4 = (io_in1 / io_in2);
  assign _zz_io_out5 = (io_in1 % io_in2);
  always @(*) begin
    io_out1 = (io_in1 + io_in2);
    if(name_lqx) begin
      io_out1 = (io_in1 + _zz_io_out1);
    end
  end

  assign name_lqx = (8'h0 < io_in1);
  assign io_out2 = _zz_io_out2[5:0];
  assign io_out3 = _zz_io_out3[5:0];
  assign io_out4 = _zz_io_out4[5:0];
  assign io_out5 = _zz_io_out5[5:0];
  always @(posedge clk) begin
    _zz_io_out2 <= (io_in1 - io_in2);
  end


endmodule
