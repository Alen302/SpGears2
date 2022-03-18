// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : SpinalHDLTest
// Git hash  : 86ab8cc8511dd0580f28e0d3dfd9c500a46c1281

`timescale 1ns/1ps 

module SpinalHDLTest (
  input      [7:0]    in1,
  input      [5:0]    in2,
  output     [5:0]    out1,
  output     [5:0]    out2,
  output     [5:0]    out3,
  output     [5:0]    out4,
  output     [5:0]    out5,
  output              out6
);

  wire       [7:0]    _zz_out1;
  wire       [7:0]    _zz_out1_1;
  wire       [7:0]    _zz_out2;
  wire       [7:0]    _zz_out2_1;
  wire       [13:0]   _zz_out3;
  wire       [7:0]    _zz_out4;
  wire       [7:0]    _zz_out5;
  wire       [7:0]    _zz_out6;

  assign _zz_out1 = (in1 + _zz_out1_1);
  assign _zz_out1_1 = {2'd0, in2};
  assign _zz_out2 = (in1 - _zz_out2_1);
  assign _zz_out2_1 = {2'd0, in2};
  assign _zz_out3 = (in1 * in2);
  assign _zz_out4 = (in1 / in2);
  assign _zz_out5 = (in1 % in2);
  assign _zz_out6 = {2'd0, in2};
  assign out1 = _zz_out1[5:0];
  assign out2 = _zz_out2[5:0];
  assign out3 = _zz_out3[5:0];
  assign out4 = _zz_out4[5:0];
  assign out5 = _zz_out5[5:0];
  assign out6 = (_zz_out6 < in1);

endmodule
