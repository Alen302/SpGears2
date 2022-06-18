// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : BCAM
// Git hash  : 99e8397e0e93b4c6ddf5c8775464765f14d802be

`timescale 1ns/1ps

module BCAM (
  input               io_WStream_valid,
  output reg          io_WStream_ready,
  input      [3:0]    io_WStream_payload_WAddr,
  input      [2:0]    io_WStream_payload_WPatt,
  input               io_WStream_payload_Wr,
  input               io_MPattStream_valid,
  output              io_MPattStream_ready,
  input      [2:0]    io_MPattStream_payload_MPatt,
  output              io_MAddrStream_valid,
  input               io_MAddrStream_ready,
  output     [3:0]    io_MAddrStream_payload_MAddr,
  output              io_MAddrStream_payload_Match,
  input               clk,
  input               reset
);

  reg        [15:0]   _zz__zz_1_port2;
  reg        [2:0]    _zz__zz_2_port1;
  wire       [2:0]    _zz__zz_2_port;
  wire       [15:0]   _zz__zz_1_port;
  wire       [15:0]   _zz__zz_1_port_1;
  wire                _zz__zz_1_port_2;
  wire       [15:0]   _zz__zz_1_port_3;
  wire       [15:0]   _zz__zz_1_port_4;
  wire                _zz__zz_1_port_5;
  wire       [15:0]   _zz__zz_io_MAddrStream_payload_MAddr_2;
  reg                 when_BCAM_l79;
  reg                 when_BCAM_l95;
  reg        [3:0]    _zz_3;
  reg        [2:0]    _zz_4;
  reg                 _zz_5;
  reg        [3:0]    _zz_6;
  reg        [2:0]    _zz_7;
  wire                io_WStream_fire;
  reg                 _zz_8;
  reg                 _zz_9;
  wire                _zz_10;
  wire       [2:0]    _zz_11;
  reg                 _zz_io_MAddrStream_valid;
  wire       [15:0]   _zz_io_MAddrStream_payload_MAddr;
  wire                io_MAddrStream_isFree;
  wire       [15:0]   _zz_io_MAddrStream_payload_MAddr_1;
  wire       [15:0]   _zz_io_MAddrStream_payload_MAddr_2;
  wire                _zz_io_MAddrStream_payload_MAddr_3;
  wire                _zz_io_MAddrStream_payload_MAddr_4;
  wire                _zz_io_MAddrStream_payload_MAddr_5;
  wire                _zz_io_MAddrStream_payload_MAddr_6;
  wire                _zz_io_MAddrStream_payload_MAddr_7;
  wire                _zz_io_MAddrStream_payload_MAddr_8;
  wire                _zz_io_MAddrStream_payload_MAddr_9;
  wire                _zz_io_MAddrStream_payload_MAddr_10;
  wire                _zz_io_MAddrStream_payload_MAddr_11;
  wire                _zz_io_MAddrStream_payload_MAddr_12;
  wire                _zz_io_MAddrStream_payload_MAddr_13;
  wire                _zz_io_MAddrStream_payload_MAddr_14;
  wire                _zz_io_MAddrStream_payload_MAddr_15;
  wire                _zz_io_MAddrStream_payload_MAddr_16;
  wire                _zz_io_MAddrStream_payload_MAddr_17;
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol0 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol1 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol2 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol3 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol4 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol5 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol6 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol7 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol8 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol9 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol10 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol11 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol12 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol13 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol14 [0:7];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol15 [0:7];
  reg [0:0] _zz__zz_1symbol_read;
  reg [0:0] _zz__zz_1symbol_read_1;
  reg [0:0] _zz__zz_1symbol_read_2;
  reg [0:0] _zz__zz_1symbol_read_3;
  reg [0:0] _zz__zz_1symbol_read_4;
  reg [0:0] _zz__zz_1symbol_read_5;
  reg [0:0] _zz__zz_1symbol_read_6;
  reg [0:0] _zz__zz_1symbol_read_7;
  reg [0:0] _zz__zz_1symbol_read_8;
  reg [0:0] _zz__zz_1symbol_read_9;
  reg [0:0] _zz__zz_1symbol_read_10;
  reg [0:0] _zz__zz_1symbol_read_11;
  reg [0:0] _zz__zz_1symbol_read_12;
  reg [0:0] _zz__zz_1symbol_read_13;
  reg [0:0] _zz__zz_1symbol_read_14;
  reg [0:0] _zz__zz_1symbol_read_15;
  (* ram_style = "block" *) reg [2:0] _zz_2 [0:15];

  assign _zz__zz_1_port_1 = ({15'd0,1'b1} <<< _zz_3);
  assign _zz__zz_1_port_4 = ({15'd0,1'b1} <<< _zz_6);
  assign _zz__zz_io_MAddrStream_payload_MAddr_2 = (_zz_io_MAddrStream_payload_MAddr_1 - 16'h0001);
  assign _zz__zz_1_port = 16'hffff;
  assign _zz__zz_1_port_2 = (_zz_9 && when_BCAM_l95);
  assign _zz__zz_1_port_3 = 16'h0;
  assign _zz__zz_1_port_5 = ((! _zz_9) && _zz_5);
  assign _zz__zz_2_port = _zz_7;
  initial begin
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol0.bin",_zz_1_symbol0);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol1.bin",_zz_1_symbol1);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol2.bin",_zz_1_symbol2);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol3.bin",_zz_1_symbol3);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol4.bin",_zz_1_symbol4);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol5.bin",_zz_1_symbol5);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol6.bin",_zz_1_symbol6);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol7.bin",_zz_1_symbol7);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol8.bin",_zz_1_symbol8);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol9.bin",_zz_1_symbol9);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol10.bin",_zz_1_symbol10);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol11.bin",_zz_1_symbol11);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol12.bin",_zz_1_symbol12);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol13.bin",_zz_1_symbol13);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol14.bin",_zz_1_symbol14);
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_1_symbol15.bin",_zz_1_symbol15);
  end
  always @(*) begin
    _zz__zz_1_port2 = {_zz__zz_1symbol_read_15, _zz__zz_1symbol_read_14, _zz__zz_1symbol_read_13, _zz__zz_1symbol_read_12, _zz__zz_1symbol_read_11, _zz__zz_1symbol_read_10, _zz__zz_1symbol_read_9, _zz__zz_1symbol_read_8, _zz__zz_1symbol_read_7, _zz__zz_1symbol_read_6, _zz__zz_1symbol_read_5, _zz__zz_1symbol_read_4, _zz__zz_1symbol_read_3, _zz__zz_1symbol_read_2, _zz__zz_1symbol_read_1, _zz__zz_1symbol_read};
  end
  always @(posedge clk) begin
    if(_zz__zz_1_port_1[0] && _zz__zz_1_port_2) begin
      _zz_1_symbol0[_zz_11] <= _zz__zz_1_port[0 : 0];
    end
    if(_zz__zz_1_port_1[1] && _zz__zz_1_port_2) begin
      _zz_1_symbol1[_zz_11] <= _zz__zz_1_port[1 : 1];
    end
    if(_zz__zz_1_port_1[2] && _zz__zz_1_port_2) begin
      _zz_1_symbol2[_zz_11] <= _zz__zz_1_port[2 : 2];
    end
    if(_zz__zz_1_port_1[3] && _zz__zz_1_port_2) begin
      _zz_1_symbol3[_zz_11] <= _zz__zz_1_port[3 : 3];
    end
    if(_zz__zz_1_port_1[4] && _zz__zz_1_port_2) begin
      _zz_1_symbol4[_zz_11] <= _zz__zz_1_port[4 : 4];
    end
    if(_zz__zz_1_port_1[5] && _zz__zz_1_port_2) begin
      _zz_1_symbol5[_zz_11] <= _zz__zz_1_port[5 : 5];
    end
    if(_zz__zz_1_port_1[6] && _zz__zz_1_port_2) begin
      _zz_1_symbol6[_zz_11] <= _zz__zz_1_port[6 : 6];
    end
    if(_zz__zz_1_port_1[7] && _zz__zz_1_port_2) begin
      _zz_1_symbol7[_zz_11] <= _zz__zz_1_port[7 : 7];
    end
    if(_zz__zz_1_port_1[8] && _zz__zz_1_port_2) begin
      _zz_1_symbol8[_zz_11] <= _zz__zz_1_port[8 : 8];
    end
    if(_zz__zz_1_port_1[9] && _zz__zz_1_port_2) begin
      _zz_1_symbol9[_zz_11] <= _zz__zz_1_port[9 : 9];
    end
    if(_zz__zz_1_port_1[10] && _zz__zz_1_port_2) begin
      _zz_1_symbol10[_zz_11] <= _zz__zz_1_port[10 : 10];
    end
    if(_zz__zz_1_port_1[11] && _zz__zz_1_port_2) begin
      _zz_1_symbol11[_zz_11] <= _zz__zz_1_port[11 : 11];
    end
    if(_zz__zz_1_port_1[12] && _zz__zz_1_port_2) begin
      _zz_1_symbol12[_zz_11] <= _zz__zz_1_port[12 : 12];
    end
    if(_zz__zz_1_port_1[13] && _zz__zz_1_port_2) begin
      _zz_1_symbol13[_zz_11] <= _zz__zz_1_port[13 : 13];
    end
    if(_zz__zz_1_port_1[14] && _zz__zz_1_port_2) begin
      _zz_1_symbol14[_zz_11] <= _zz__zz_1_port[14 : 14];
    end
    if(_zz__zz_1_port_1[15] && _zz__zz_1_port_2) begin
      _zz_1_symbol15[_zz_11] <= _zz__zz_1_port[15 : 15];
    end
  end

  always @(posedge clk) begin
    if(_zz__zz_1_port_4[0] && _zz__zz_1_port_5) begin
      _zz_1_symbol0[_zz_11] <= _zz__zz_1_port_3[0 : 0];
    end
    if(_zz__zz_1_port_4[1] && _zz__zz_1_port_5) begin
      _zz_1_symbol1[_zz_11] <= _zz__zz_1_port_3[1 : 1];
    end
    if(_zz__zz_1_port_4[2] && _zz__zz_1_port_5) begin
      _zz_1_symbol2[_zz_11] <= _zz__zz_1_port_3[2 : 2];
    end
    if(_zz__zz_1_port_4[3] && _zz__zz_1_port_5) begin
      _zz_1_symbol3[_zz_11] <= _zz__zz_1_port_3[3 : 3];
    end
    if(_zz__zz_1_port_4[4] && _zz__zz_1_port_5) begin
      _zz_1_symbol4[_zz_11] <= _zz__zz_1_port_3[4 : 4];
    end
    if(_zz__zz_1_port_4[5] && _zz__zz_1_port_5) begin
      _zz_1_symbol5[_zz_11] <= _zz__zz_1_port_3[5 : 5];
    end
    if(_zz__zz_1_port_4[6] && _zz__zz_1_port_5) begin
      _zz_1_symbol6[_zz_11] <= _zz__zz_1_port_3[6 : 6];
    end
    if(_zz__zz_1_port_4[7] && _zz__zz_1_port_5) begin
      _zz_1_symbol7[_zz_11] <= _zz__zz_1_port_3[7 : 7];
    end
    if(_zz__zz_1_port_4[8] && _zz__zz_1_port_5) begin
      _zz_1_symbol8[_zz_11] <= _zz__zz_1_port_3[8 : 8];
    end
    if(_zz__zz_1_port_4[9] && _zz__zz_1_port_5) begin
      _zz_1_symbol9[_zz_11] <= _zz__zz_1_port_3[9 : 9];
    end
    if(_zz__zz_1_port_4[10] && _zz__zz_1_port_5) begin
      _zz_1_symbol10[_zz_11] <= _zz__zz_1_port_3[10 : 10];
    end
    if(_zz__zz_1_port_4[11] && _zz__zz_1_port_5) begin
      _zz_1_symbol11[_zz_11] <= _zz__zz_1_port_3[11 : 11];
    end
    if(_zz__zz_1_port_4[12] && _zz__zz_1_port_5) begin
      _zz_1_symbol12[_zz_11] <= _zz__zz_1_port_3[12 : 12];
    end
    if(_zz__zz_1_port_4[13] && _zz__zz_1_port_5) begin
      _zz_1_symbol13[_zz_11] <= _zz__zz_1_port_3[13 : 13];
    end
    if(_zz__zz_1_port_4[14] && _zz__zz_1_port_5) begin
      _zz_1_symbol14[_zz_11] <= _zz__zz_1_port_3[14 : 14];
    end
    if(_zz__zz_1_port_4[15] && _zz__zz_1_port_5) begin
      _zz_1_symbol15[_zz_11] <= _zz__zz_1_port_3[15 : 15];
    end
  end

  always @(posedge clk) begin
    if(io_MPattStream_ready) begin
      _zz__zz_1symbol_read <= _zz_1_symbol0[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_1 <= _zz_1_symbol1[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_2 <= _zz_1_symbol2[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_3 <= _zz_1_symbol3[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_4 <= _zz_1_symbol4[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_5 <= _zz_1_symbol5[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_6 <= _zz_1_symbol6[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_7 <= _zz_1_symbol7[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_8 <= _zz_1_symbol8[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_9 <= _zz_1_symbol9[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_10 <= _zz_1_symbol10[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_11 <= _zz_1_symbol11[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_12 <= _zz_1_symbol12[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_13 <= _zz_1_symbol13[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_14 <= _zz_1_symbol14[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_15 <= _zz_1_symbol15[io_MPattStream_payload_MPatt];
    end
  end

  initial begin
    $readmemb("/home/lqx/IdeaProjects/LicioLib/tmp/job_1/BCAM.v_toplevel__zz_2.bin",_zz_2);
  end
  always @(posedge clk) begin
    if(_zz_8) begin
      _zz_2[_zz_6] <= _zz__zz_2_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_10) begin
      _zz__zz_2_port1 <= _zz_2[_zz_3];
    end
  end

  assign io_WStream_fire = (io_WStream_valid && io_WStream_ready);
  always @(*) begin
    io_WStream_ready = 1'b0;
    if(when_BCAM_l79) begin
      io_WStream_ready = 1'b1;
    end
  end

  assign _zz_10 = (! _zz_8);
  assign _zz_11 = (_zz_9 ? _zz_4 : _zz__zz_2_port1);
  assign _zz_io_MAddrStream_payload_MAddr = _zz__zz_1_port2;
  assign io_MAddrStream_isFree = ((! io_MAddrStream_valid) || io_MAddrStream_ready);
  assign io_MPattStream_ready = io_MAddrStream_isFree;
  assign io_MAddrStream_valid = _zz_io_MAddrStream_valid;
  assign _zz_io_MAddrStream_payload_MAddr_1 = _zz_io_MAddrStream_payload_MAddr;
  assign _zz_io_MAddrStream_payload_MAddr_2 = (_zz_io_MAddrStream_payload_MAddr_1 & (~ _zz__zz_io_MAddrStream_payload_MAddr_2));
  assign _zz_io_MAddrStream_payload_MAddr_3 = _zz_io_MAddrStream_payload_MAddr_2[3];
  assign _zz_io_MAddrStream_payload_MAddr_4 = _zz_io_MAddrStream_payload_MAddr_2[5];
  assign _zz_io_MAddrStream_payload_MAddr_5 = _zz_io_MAddrStream_payload_MAddr_2[6];
  assign _zz_io_MAddrStream_payload_MAddr_6 = _zz_io_MAddrStream_payload_MAddr_2[7];
  assign _zz_io_MAddrStream_payload_MAddr_7 = _zz_io_MAddrStream_payload_MAddr_2[9];
  assign _zz_io_MAddrStream_payload_MAddr_8 = _zz_io_MAddrStream_payload_MAddr_2[10];
  assign _zz_io_MAddrStream_payload_MAddr_9 = _zz_io_MAddrStream_payload_MAddr_2[11];
  assign _zz_io_MAddrStream_payload_MAddr_10 = _zz_io_MAddrStream_payload_MAddr_2[12];
  assign _zz_io_MAddrStream_payload_MAddr_11 = _zz_io_MAddrStream_payload_MAddr_2[13];
  assign _zz_io_MAddrStream_payload_MAddr_12 = _zz_io_MAddrStream_payload_MAddr_2[14];
  assign _zz_io_MAddrStream_payload_MAddr_13 = _zz_io_MAddrStream_payload_MAddr_2[15];
  assign _zz_io_MAddrStream_payload_MAddr_14 = (((((((_zz_io_MAddrStream_payload_MAddr_2[1] || _zz_io_MAddrStream_payload_MAddr_3) || _zz_io_MAddrStream_payload_MAddr_4) || _zz_io_MAddrStream_payload_MAddr_6) || _zz_io_MAddrStream_payload_MAddr_7) || _zz_io_MAddrStream_payload_MAddr_9) || _zz_io_MAddrStream_payload_MAddr_11) || _zz_io_MAddrStream_payload_MAddr_13);
  assign _zz_io_MAddrStream_payload_MAddr_15 = (((((((_zz_io_MAddrStream_payload_MAddr_2[2] || _zz_io_MAddrStream_payload_MAddr_3) || _zz_io_MAddrStream_payload_MAddr_5) || _zz_io_MAddrStream_payload_MAddr_6) || _zz_io_MAddrStream_payload_MAddr_8) || _zz_io_MAddrStream_payload_MAddr_9) || _zz_io_MAddrStream_payload_MAddr_12) || _zz_io_MAddrStream_payload_MAddr_13);
  assign _zz_io_MAddrStream_payload_MAddr_16 = (((((((_zz_io_MAddrStream_payload_MAddr_2[4] || _zz_io_MAddrStream_payload_MAddr_4) || _zz_io_MAddrStream_payload_MAddr_5) || _zz_io_MAddrStream_payload_MAddr_6) || _zz_io_MAddrStream_payload_MAddr_10) || _zz_io_MAddrStream_payload_MAddr_11) || _zz_io_MAddrStream_payload_MAddr_12) || _zz_io_MAddrStream_payload_MAddr_13);
  assign _zz_io_MAddrStream_payload_MAddr_17 = (((((((_zz_io_MAddrStream_payload_MAddr_2[8] || _zz_io_MAddrStream_payload_MAddr_7) || _zz_io_MAddrStream_payload_MAddr_8) || _zz_io_MAddrStream_payload_MAddr_9) || _zz_io_MAddrStream_payload_MAddr_10) || _zz_io_MAddrStream_payload_MAddr_11) || _zz_io_MAddrStream_payload_MAddr_12) || _zz_io_MAddrStream_payload_MAddr_13);
  assign io_MAddrStream_payload_MAddr = {_zz_io_MAddrStream_payload_MAddr_17,{_zz_io_MAddrStream_payload_MAddr_16,{_zz_io_MAddrStream_payload_MAddr_15,_zz_io_MAddrStream_payload_MAddr_14}}};
  assign io_MAddrStream_payload_Match = ((((_zz_io_MAddrStream_payload_MAddr[0] || _zz_io_MAddrStream_payload_MAddr[1]) || (_zz_io_MAddrStream_payload_MAddr[2] || _zz_io_MAddrStream_payload_MAddr[3])) || ((_zz_io_MAddrStream_payload_MAddr[4] || _zz_io_MAddrStream_payload_MAddr[5]) || (_zz_io_MAddrStream_payload_MAddr[6] || _zz_io_MAddrStream_payload_MAddr[7]))) || (((_zz_io_MAddrStream_payload_MAddr[8] || _zz_io_MAddrStream_payload_MAddr[9]) || (_zz_io_MAddrStream_payload_MAddr[10] || _zz_io_MAddrStream_payload_MAddr[11])) || ((_zz_io_MAddrStream_payload_MAddr[12] || _zz_io_MAddrStream_payload_MAddr[13]) || (_zz_io_MAddrStream_payload_MAddr[14] || _zz_io_MAddrStream_payload_MAddr[15]))));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      when_BCAM_l79 <= 1'b1;
      when_BCAM_l95 <= 1'b0;
      _zz_3 <= 4'b0000;
      _zz_4 <= 3'b000;
      _zz_5 <= 1'b0;
      _zz_6 <= 4'b0000;
      _zz_7 <= 3'b000;
      _zz_8 <= 1'b0;
      _zz_9 <= 1'b1;
      _zz_io_MAddrStream_valid <= 1'b0;
    end else begin
      if(io_WStream_fire) begin
        when_BCAM_l79 <= 1'b0;
        when_BCAM_l95 <= io_WStream_payload_Wr;
        _zz_3 <= io_WStream_payload_WAddr;
        _zz_4 <= io_WStream_payload_WPatt;
      end else begin
        when_BCAM_l95 <= 1'b0;
        when_BCAM_l79 <= 1'b1;
      end
      _zz_5 <= when_BCAM_l95;
      _zz_6 <= _zz_3;
      _zz_7 <= _zz_4;
      if(when_BCAM_l95) begin
        _zz_9 <= 1'b0;
        _zz_8 <= 1'b1;
      end else begin
        _zz_9 <= 1'b1;
        _zz_8 <= 1'b0;
      end
      if(io_MAddrStream_ready) begin
        _zz_io_MAddrStream_valid <= 1'b0;
      end
      if(io_MPattStream_ready) begin
        _zz_io_MAddrStream_valid <= io_MPattStream_valid;
      end
    end
  end


endmodule
