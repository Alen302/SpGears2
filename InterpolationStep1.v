// Generator : SpinalHDL v1.7.0b    git head : 541894e01cf6b5ef03f924225e4f769fb167dea8
// Component : InterpolationStep1
// Git hash  : ff52db1e704c4e63bb498022240ed39576d2ed80

`timescale 1ns/1ps

module InterpolationStep1 (
  input               dataIn_valid,
  output reg          dataIn_ready,
  input      [7:0]    dataIn_payload,
  input               StartIn,
  input               frameStartIn,
  input               rowEndIn,
  input               inpTwoCompleteIn,
  input               inpThreeCompleteIn,
  output reg          dataOut_valid,
  input               dataOut_ready,
  output reg [7:0]    dataOut_payload,
  output reg          startOut,
  output reg          frameStartOut,
  output reg          rowEndOut,
  output reg          inpValidOut,
  output reg          inpCompleteOut,
  input      [7:0]    thresholdIn,
  input      [9:0]    widthIn,
  input      [9:0]    heightIn,
  input               clk,
  input               reset
);
  localparam inpStateMachine_enumDef_BOOT = 2'd0;
  localparam inpStateMachine_enumDef_EVEN = 2'd1;
  localparam inpStateMachine_enumDef_ODD = 2'd2;

  wire       [7:0]    _zz_lineBufferOne_port1;
  wire       [7:0]    _zz_lineBufferOne_port2;
  wire       [7:0]    _zz_lineBufferOne_port3;
  wire       [7:0]    _zz_lineBufferOne_port4;
  wire       [7:0]    _zz_lineBufferOne_port5;
  wire       [7:0]    _zz_lineBufferOne_port6;
  wire       [7:0]    _zz_lineBufferOne_port7;
  wire       [7:0]    _zz_lineBufferOne_port8;
  wire       [7:0]    _zz_lineBufferOne_port9;
  wire       [7:0]    _zz_lineBufferOne_port10;
  wire       [7:0]    _zz_lineBufferOne_port11;
  wire       [7:0]    _zz_lineBufferOne_port12;
  wire       [7:0]    _zz_lineBufferOne_port13;
  wire       [7:0]    _zz_lineBufferOne_port14;
  wire       [7:0]    _zz_lineBufferOne_port15;
  wire       [7:0]    _zz_lineBufferOne_port16;
  wire       [7:0]    _zz_lineBufferOne_port17;
  wire       [7:0]    _zz_lineBufferOne_port18;
  wire       [7:0]    _zz_lineBufferOne_port19;
  wire       [7:0]    _zz_lineBufferOne_port20;
  wire       [7:0]    _zz_lineBufferOne_port21;
  wire       [7:0]    _zz_lineBufferOne_port22;
  wire       [7:0]    _zz_lineBufferOne_port23;
  wire       [7:0]    _zz_lineBufferOne_port24;
  wire       [7:0]    _zz_lineBufferOne_port25;
  wire       [7:0]    _zz_lineBufferOne_port26;
  wire       [7:0]    _zz_lineBufferOne_port27;
  wire       [7:0]    _zz_lineBufferOne_port28;
  wire       [7:0]    _zz_lineBufferOne_port29;
  wire       [7:0]    _zz_lineBufferOne_port30;
  wire       [7:0]    _zz_lineBufferOne_port31;
  wire       [7:0]    _zz_lineBufferOne_port32;
  wire       [7:0]    _zz_lineBufferOne_port33;
  wire       [7:0]    _zz_lineBufferOne_port34;
  wire       [7:0]    _zz_lineBufferOne_port35;
  wire       [7:0]    _zz_lineBufferOne_port36;
  wire       [7:0]    _zz_lineBufferOne_port37;
  wire       [7:0]    _zz_lineBufferOne_port38;
  wire       [7:0]    _zz_lineBufferOne_port39;
  wire       [7:0]    _zz_lineBufferOne_port40;
  wire       [7:0]    _zz_lineBufferOne_port41;
  wire       [7:0]    _zz_lineBufferOne_port42;
  wire       [7:0]    _zz_lineBufferOne_port43;
  wire       [7:0]    _zz_lineBufferOne_port44;
  wire       [7:0]    _zz_lineBufferOne_port45;
  wire       [7:0]    _zz_lineBufferOne_port46;
  wire       [7:0]    _zz_lineBufferOne_port47;
  wire       [7:0]    _zz_lineBufferOne_port48;
  wire       [7:0]    _zz_lineBufferOne_port49;
  wire       [7:0]    _zz_lineBufferOne_port50;
  wire       [7:0]    _zz_lineBufferOne_port51;
  wire       [7:0]    _zz_lineBufferOne_port52;
  wire       [7:0]    _zz_lineBufferOne_port53;
  wire       [7:0]    _zz_lineBufferOne_port54;
  wire       [7:0]    _zz_lineBufferOne_port55;
  wire       [7:0]    _zz_lineBufferOne_port56;
  wire       [7:0]    _zz_lineBufferOne_port57;
  wire       [7:0]    _zz_lineBufferOne_port58;
  wire       [7:0]    _zz_lineBufferOne_port59;
  wire       [7:0]    _zz_lineBufferOne_port60;
  wire       [7:0]    _zz_lineBufferOne_port61;
  wire       [7:0]    _zz_lineBufferOne_port62;
  wire       [7:0]    _zz_lineBufferOne_port63;
  wire       [7:0]    _zz_lineBufferOne_port64;
  wire       [7:0]    _zz_lineBufferOne_port65;
  wire       [7:0]    _zz_lineBufferOne_port66;
  wire       [7:0]    _zz_lineBufferOne_port67;
  wire       [7:0]    _zz_lineBufferOne_port68;
  wire       [7:0]    _zz_lineBufferOne_port69;
  wire       [7:0]    _zz_lineBufferOne_port70;
  wire       [7:0]    _zz_lineBufferOne_port71;
  wire       [7:0]    _zz_lineBufferOne_port72;
  wire       [7:0]    _zz_lineBufferOne_port73;
  wire       [7:0]    _zz_lineBufferOne_port74;
  wire       [7:0]    _zz_lineBufferOne_port75;
  wire       [7:0]    _zz_lineBufferOne_port76;
  wire       [7:0]    _zz_lineBufferOne_port77;
  wire       [7:0]    _zz_lineBufferOne_port78;
  wire       [7:0]    _zz_lineBufferOne_port79;
  wire       [7:0]    _zz_lineBufferOne_port80;
  wire       [7:0]    _zz_lineBufferOne_port81;
  wire       [7:0]    _zz_lineBufferOne_port82;
  wire       [7:0]    _zz_lineBufferOne_port83;
  wire       [7:0]    _zz_lineBufferOne_port84;
  wire       [7:0]    _zz_lineBufferOne_port85;
  wire       [7:0]    _zz_lineBufferOne_port86;
  wire       [7:0]    _zz_lineBufferOne_port87;
  wire       [7:0]    _zz_lineBufferOne_port88;
  wire       [7:0]    _zz_lineBufferOne_port89;
  wire       [7:0]    _zz_lineBufferOne_port90;
  wire       [7:0]    _zz_lineBufferOne_port91;
  wire       [7:0]    _zz_lineBufferOne_port92;
  wire       [7:0]    _zz_lineBufferOne_port93;
  wire       [7:0]    _zz_lineBufferOne_port94;
  wire       [7:0]    _zz_lineBufferOne_port95;
  wire       [7:0]    _zz_lineBufferOne_port96;
  wire       [7:0]    _zz_lineBufferOne_port97;
  wire       [7:0]    _zz_lineBufferOne_port98;
  wire       [7:0]    _zz_lineBufferOne_port99;
  wire       [7:0]    _zz_lineBufferOne_port100;
  wire       [7:0]    _zz_lineBufferOne_port101;
  wire       [7:0]    _zz_lineBufferOne_port102;
  wire       [7:0]    _zz_lineBufferOne_port103;
  wire       [7:0]    _zz_lineBufferOne_port104;
  wire       [7:0]    _zz_lineBufferOne_port105;
  wire       [7:0]    _zz_lineBufferOne_port106;
  wire       [7:0]    _zz_lineBufferOne_port107;
  wire       [7:0]    _zz_lineBufferOne_port108;
  wire       [7:0]    _zz_lineBufferOne_port109;
  wire       [7:0]    _zz_lineBufferOne_port110;
  wire       [7:0]    _zz_lineBufferOne_port111;
  wire       [7:0]    _zz_lineBufferTwo_port1;
  wire       [7:0]    _zz_lineBufferTwo_port2;
  wire       [7:0]    _zz_lineBufferTwo_port3;
  wire       [7:0]    _zz_lineBufferTwo_port4;
  wire       [7:0]    _zz_lineBufferTwo_port5;
  wire       [7:0]    _zz_lineBufferTwo_port6;
  wire       [7:0]    _zz_lineBufferTwo_port7;
  wire       [7:0]    _zz_lineBufferTwo_port8;
  wire       [7:0]    _zz_lineBufferTwo_port9;
  wire       [7:0]    _zz_lineBufferTwo_port10;
  wire       [7:0]    _zz_lineBufferTwo_port11;
  wire       [7:0]    _zz_lineBufferTwo_port12;
  wire       [7:0]    _zz_lineBufferTwo_port13;
  wire       [7:0]    _zz_lineBufferTwo_port14;
  wire       [7:0]    _zz_lineBufferTwo_port15;
  wire       [7:0]    _zz_lineBufferTwo_port16;
  wire       [7:0]    _zz_lineBufferTwo_port17;
  wire       [7:0]    _zz_lineBufferTwo_port18;
  wire       [7:0]    _zz_lineBufferTwo_port19;
  wire       [7:0]    _zz_lineBufferTwo_port20;
  wire       [7:0]    _zz_lineBufferTwo_port21;
  wire       [7:0]    _zz_lineBufferTwo_port22;
  wire       [7:0]    _zz_lineBufferTwo_port23;
  wire       [7:0]    _zz_lineBufferTwo_port24;
  wire       [7:0]    _zz_lineBufferTwo_port25;
  wire       [7:0]    _zz_lineBufferTwo_port26;
  wire       [7:0]    _zz_lineBufferTwo_port27;
  wire       [7:0]    _zz_lineBufferTwo_port28;
  wire       [7:0]    _zz_lineBufferTwo_port29;
  wire       [7:0]    _zz_lineBufferTwo_port30;
  wire       [7:0]    _zz_lineBufferTwo_port31;
  wire       [7:0]    _zz_lineBufferTwo_port32;
  wire       [7:0]    _zz_lineBufferTwo_port33;
  wire       [7:0]    _zz_lineBufferTwo_port34;
  wire       [7:0]    _zz_lineBufferTwo_port35;
  wire       [7:0]    _zz_lineBufferTwo_port36;
  wire       [7:0]    _zz_lineBufferTwo_port37;
  wire       [7:0]    _zz_lineBufferTwo_port38;
  wire       [7:0]    _zz_lineBufferTwo_port39;
  wire       [7:0]    _zz_lineBufferTwo_port40;
  wire       [7:0]    _zz_lineBufferTwo_port41;
  wire       [7:0]    _zz_lineBufferTwo_port42;
  wire       [7:0]    _zz_lineBufferTwo_port43;
  wire       [7:0]    _zz_lineBufferTwo_port44;
  wire       [7:0]    _zz_lineBufferTwo_port45;
  wire       [7:0]    _zz_lineBufferTwo_port46;
  wire       [7:0]    _zz_lineBufferTwo_port47;
  wire       [7:0]    _zz_lineBufferTwo_port48;
  wire       [7:0]    _zz_lineBufferTwo_port49;
  wire       [7:0]    _zz_lineBufferTwo_port50;
  wire       [7:0]    _zz_lineBufferTwo_port51;
  wire       [7:0]    _zz_lineBufferTwo_port52;
  wire       [7:0]    _zz_lineBufferTwo_port53;
  wire       [7:0]    _zz_lineBufferTwo_port54;
  wire       [7:0]    _zz_lineBufferTwo_port55;
  wire       [7:0]    _zz_lineBufferTwo_port56;
  wire       [7:0]    _zz_lineBufferTwo_port57;
  wire       [7:0]    _zz_lineBufferTwo_port58;
  wire       [7:0]    _zz_lineBufferTwo_port59;
  wire       [7:0]    _zz_lineBufferTwo_port60;
  wire       [7:0]    _zz_lineBufferTwo_port61;
  wire       [7:0]    _zz_lineBufferTwo_port62;
  wire       [7:0]    _zz_lineBufferTwo_port63;
  wire       [7:0]    _zz_lineBufferTwo_port64;
  wire       [7:0]    _zz_lineBufferTwo_port65;
  wire       [7:0]    _zz_lineBufferTwo_port66;
  wire       [7:0]    _zz_lineBufferTwo_port67;
  wire       [7:0]    _zz_lineBufferTwo_port68;
  wire       [7:0]    _zz_lineBufferTwo_port69;
  wire       [7:0]    _zz_lineBufferTwo_port70;
  wire       [7:0]    _zz_lineBufferTwo_port71;
  wire       [7:0]    _zz_lineBufferTwo_port72;
  wire       [7:0]    _zz_lineBufferTwo_port73;
  wire       [7:0]    _zz_lineBufferTwo_port74;
  wire       [7:0]    _zz_lineBufferTwo_port75;
  wire       [7:0]    _zz_lineBufferTwo_port76;
  wire       [7:0]    _zz_lineBufferTwo_port77;
  wire       [7:0]    _zz_lineBufferTwo_port78;
  wire       [7:0]    _zz_lineBufferTwo_port79;
  wire       [7:0]    _zz_lineBufferTwo_port80;
  wire       [7:0]    _zz_lineBufferTwo_port81;
  wire       [7:0]    _zz_lineBufferTwo_port82;
  wire       [7:0]    _zz_lineBufferTwo_port83;
  wire       [7:0]    _zz_lineBufferTwo_port84;
  wire       [7:0]    _zz_lineBufferTwo_port85;
  wire       [7:0]    _zz_lineBufferTwo_port86;
  wire       [7:0]    _zz_lineBufferTwo_port87;
  wire       [7:0]    _zz_lineBufferTwo_port88;
  wire       [7:0]    _zz_lineBufferTwo_port89;
  wire       [7:0]    _zz_lineBufferTwo_port90;
  wire       [7:0]    _zz_lineBufferTwo_port91;
  wire       [7:0]    _zz_lineBufferTwo_port92;
  wire       [7:0]    _zz_lineBufferTwo_port93;
  wire       [7:0]    _zz_lineBufferTwo_port94;
  wire       [7:0]    _zz_lineBufferTwo_port95;
  wire       [7:0]    _zz_lineBufferTwo_port96;
  wire       [7:0]    _zz_lineBufferTwo_port97;
  wire       [7:0]    _zz_lineBufferTwo_port98;
  wire       [7:0]    _zz_lineBufferTwo_port99;
  wire       [7:0]    _zz_lineBufferTwo_port100;
  wire       [7:0]    _zz_lineBufferTwo_port101;
  wire       [7:0]    _zz_lineBufferTwo_port102;
  wire       [7:0]    _zz_lineBufferTwo_port103;
  wire       [7:0]    _zz_lineBufferTwo_port104;
  wire       [7:0]    _zz_lineBufferTwo_port105;
  wire       [7:0]    _zz_lineBufferTwo_port106;
  wire       [7:0]    _zz_lineBufferTwo_port107;
  wire       [7:0]    _zz_lineBufferTwo_port108;
  wire       [7:0]    _zz_lineBufferTwo_port109;
  wire       [7:0]    _zz_lineBufferTwo_port110;
  wire       [7:0]    _zz_lineBufferTwo_port111;
  wire       [9:0]    _zz_bufferRowCount_valueNext;
  wire       [0:0]    _zz_bufferRowCount_valueNext_1;
  wire       [9:0]    _zz_bufferWAddr_valueNext;
  wire       [0:0]    _zz_bufferWAddr_valueNext_1;
  wire       [10:0]   _zz_outPixelAddr_valueNext;
  wire       [0:0]    _zz_outPixelAddr_valueNext_1;
  wire       [10:0]   _zz_outRowCount_valueNext;
  wire       [0:0]    _zz_outRowCount_valueNext_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l121;
  wire       [11:0]   _zz_when_InterpolationStep1_l121_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l121_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l122;
  wire       [11:0]   _zz_when_InterpolationStep1_l122_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l122_2;
  wire       [9:0]    _zz_when_InterpolationStep1_l129;
  wire       [7:0]    _zz_lineBufferTwo_port;
  wire                _zz_lineBufferTwo_port_1;
  wire       [7:0]    _zz_lineBufferOne_port;
  wire                _zz_lineBufferOne_port_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l180;
  wire       [10:0]   _zz_when_InterpolationStep1_l180_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l180_2;
  wire       [10:0]   _zz_when_InterpolationStep1_l181;
  wire       [11:0]   _zz_when_InterpolationStep1_l181_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l181_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l181_3;
  wire       [11:0]   _zz_when_InterpolationStep1_l181_4;
  wire       [10:0]   _zz_when_InterpolationStep1_l186;
  wire       [11:0]   _zz_when_InterpolationStep1_l186_1;
  wire       [10:0]   _zz_when_InterpolationStep1_l186_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l186_3;
  wire       [11:0]   _zz_when_InterpolationStep1_l186_4;
  wire       [10:0]   _zz_when_InterpolationStep1_l186_5;
  wire       [11:0]   _zz_when_InterpolationStep1_l186_6;
  wire       [11:0]   _zz_when_InterpolationStep1_l189;
  wire       [10:0]   _zz_when_InterpolationStep1_l189_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l189_2;
  wire       [10:0]   _zz_when_InterpolationStep1_l190;
  wire       [11:0]   _zz_when_InterpolationStep1_l190_1;
  wire       [10:0]   _zz_when_InterpolationStep1_l190_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l190_3;
  wire       [11:0]   _zz_when_InterpolationStep1_l190_4;
  wire       [10:0]   _zz_when_InterpolationStep1_l190_5;
  wire       [11:0]   _zz_when_InterpolationStep1_l190_6;
  wire       [10:0]   _zz_when_InterpolationStep1_l191;
  wire       [11:0]   _zz_when_InterpolationStep1_l191_1;
  wire       [10:0]   _zz_when_InterpolationStep1_l191_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l191_3;
  wire       [11:0]   _zz_when_InterpolationStep1_l191_4;
  wire       [10:0]   _zz_when_InterpolationStep1_l191_5;
  wire       [11:0]   _zz_when_InterpolationStep1_l191_6;
  wire       [10:0]   _zz_leftBufferAddr;
  wire       [10:0]   _zz_rightBufferAddr;
  wire       [10:0]   _zz_rightBufferAddr_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l222;
  wire       [10:0]   _zz_when_InterpolationStep1_l222_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l222_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l222_3;
  wire       [0:0]    _zz_preCompare;
  wire       [0:0]    _zz_preCompare_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l236;
  wire       [10:0]   _zz_when_InterpolationStep1_l236_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l236_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l236_3;
  wire       [0:0]    _zz_preCompare_2;
  wire       [0:0]    _zz_preCompare_3;
  wire       [11:0]   _zz_when_InterpolationStep1_l252;
  wire       [10:0]   _zz_when_InterpolationStep1_l252_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l252_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l252_3;
  wire       [7:0]    _zz_when_InterpolationStep1_l256;
  wire       [8:0]    _zz_retPixel;
  wire       [8:0]    _zz_retPixel_1;
  wire       [7:0]    _zz_when_InterpolationStep1_l267;
  wire       [8:0]    _zz_retPixel_2;
  wire       [8:0]    _zz_retPixel_3;
  wire       [7:0]    _zz_when_InterpolationStep1_l281;
  wire       [8:0]    _zz_retPixel_4;
  wire       [8:0]    _zz_retPixel_5;
  wire       [7:0]    _zz_when_InterpolationStep1_l292;
  wire       [8:0]    _zz_retPixel_6;
  wire       [8:0]    _zz_retPixel_7;
  wire       [11:0]   _zz_when_InterpolationStep1_l316;
  wire       [10:0]   _zz_when_InterpolationStep1_l316_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l316_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l316_3;
  wire       [0:0]    _zz_preCompare_4;
  wire       [0:0]    _zz_preCompare_5;
  wire       [0:0]    _zz_preCompare_6;
  wire       [0:0]    _zz_preCompare_7;
  wire       [11:0]   _zz_when_InterpolationStep1_l358;
  wire       [10:0]   _zz_when_InterpolationStep1_l358_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l358_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l358_3;
  wire       [7:0]    _zz_when_InterpolationStep1_l362;
  wire       [8:0]    _zz_retPixel_8;
  wire       [8:0]    _zz_retPixel_9;
  wire       [7:0]    _zz_when_InterpolationStep1_l373;
  wire       [8:0]    _zz_retPixel_10;
  wire       [8:0]    _zz_retPixel_11;
  wire       [7:0]    _zz_when_InterpolationStep1_l387;
  wire       [8:0]    _zz_retPixel_12;
  wire       [8:0]    _zz_retPixel_13;
  wire       [7:0]    _zz_when_InterpolationStep1_l398;
  wire       [8:0]    _zz_retPixel_14;
  wire       [8:0]    _zz_retPixel_15;
  wire       [10:0]   _zz_leftBufferAddr_1;
  wire       [10:0]   _zz_leftBufferAddr_2;
  wire       [10:0]   _zz_rightBufferAddr_2;
  wire       [10:0]   _zz_rightBufferAddr_3;
  wire       [11:0]   _zz_when_InterpolationStep1_l443;
  wire       [10:0]   _zz_when_InterpolationStep1_l443_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l443_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l444;
  wire       [11:0]   _zz_when_InterpolationStep1_l444_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l447;
  wire       [10:0]   _zz_when_InterpolationStep1_l447_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l447_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l447_3;
  wire       [11:0]   _zz_when_InterpolationStep1_l447_4;
  wire       [11:0]   _zz_when_InterpolationStep1_l447_5;
  wire       [10:0]   _zz_when_InterpolationStep1_l448;
  wire       [11:0]   _zz_when_InterpolationStep1_l448_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l448_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l448_3;
  wire       [11:0]   _zz_when_InterpolationStep1_l448_4;
  wire       [10:0]   _zz_when_InterpolationStep1_l453;
  wire       [11:0]   _zz_when_InterpolationStep1_l453_1;
  wire       [10:0]   _zz_when_InterpolationStep1_l453_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l453_3;
  wire       [11:0]   _zz_when_InterpolationStep1_l453_4;
  wire       [10:0]   _zz_when_InterpolationStep1_l453_5;
  wire       [11:0]   _zz_when_InterpolationStep1_l453_6;
  wire       [11:0]   _zz_when_InterpolationStep1_l456;
  wire       [10:0]   _zz_when_InterpolationStep1_l456_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l456_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l456_3;
  wire       [11:0]   _zz_when_InterpolationStep1_l456_4;
  wire       [11:0]   _zz_when_InterpolationStep1_l456_5;
  wire       [10:0]   _zz_when_InterpolationStep1_l457;
  wire       [11:0]   _zz_when_InterpolationStep1_l457_1;
  wire       [10:0]   _zz_when_InterpolationStep1_l457_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l457_3;
  wire       [11:0]   _zz_when_InterpolationStep1_l457_4;
  wire       [10:0]   _zz_when_InterpolationStep1_l457_5;
  wire       [11:0]   _zz_when_InterpolationStep1_l457_6;
  wire       [10:0]   _zz_when_InterpolationStep1_l458;
  wire       [11:0]   _zz_when_InterpolationStep1_l458_1;
  wire       [10:0]   _zz_when_InterpolationStep1_l458_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l458_3;
  wire       [11:0]   _zz_when_InterpolationStep1_l458_4;
  wire       [10:0]   _zz_when_InterpolationStep1_l458_5;
  wire       [11:0]   _zz_when_InterpolationStep1_l458_6;
  wire       [0:0]    _zz_preCompare_8;
  wire       [0:0]    _zz_preCompare_9;
  wire       [0:0]    _zz_preCompare_10;
  wire       [0:0]    _zz_preCompare_11;
  wire       [7:0]    _zz_switch_InterpolationStep1_l513;
  wire       [8:0]    _zz_retPixel_16;
  wire       [8:0]    _zz_retPixel_17;
  wire       [7:0]    _zz_switch_InterpolationStep1_l527;
  wire       [8:0]    _zz_retPixel_18;
  wire       [8:0]    _zz_retPixel_19;
  wire       [7:0]    _zz_switch_InterpolationStep1_l544;
  wire       [8:0]    _zz_retPixel_20;
  wire       [8:0]    _zz_retPixel_21;
  wire       [7:0]    _zz_switch_InterpolationStep1_l558;
  wire       [8:0]    _zz_retPixel_22;
  wire       [8:0]    _zz_retPixel_23;
  wire       [0:0]    _zz_preTwoCompare;
  wire       [0:0]    _zz_preTwoCompare_1;
  wire       [0:0]    _zz_preTwoCompare_2;
  wire       [0:0]    _zz_preTwoCompare_3;
  wire       [7:0]    _zz_when_InterpolationStep1_l609;
  wire       [8:0]    _zz_retOddPixelInOddRow;
  wire       [8:0]    _zz_retOddPixelInOddRow_1;
  wire       [7:0]    _zz_when_InterpolationStep1_l622;
  wire       [8:0]    _zz_retOddPixelInOddRow_2;
  wire       [8:0]    _zz_retOddPixelInOddRow_3;
  wire       [0:0]    _zz_preTwoCompare_4;
  wire       [0:0]    _zz_preTwoCompare_5;
  wire       [7:0]    _zz_when_InterpolationStep1_l674;
  wire       [7:0]    _zz_when_InterpolationStep1_l681;
  wire       [7:0]    _zz_when_InterpolationStep1_l690;
  wire       [7:0]    _zz_when_InterpolationStep1_l697;
  wire       [7:0]    _zz_when_InterpolationStep1_l708;
  wire       [7:0]    _zz_when_InterpolationStep1_l715;
  wire       [7:0]    _zz_when_InterpolationStep1_l724;
  wire       [7:0]    _zz_when_InterpolationStep1_l731;
  wire       [8:0]    _zz_retOddPixelInOddRow_4;
  wire       [8:0]    _zz_retOddPixelInOddRow_5;
  wire       [8:0]    _zz_retOddPixelInOddRow_6;
  wire       [8:0]    _zz_retOddPixelInOddRow_7;
  wire       [8:0]    _zz_retOddPixelInOddRow_8;
  wire       [8:0]    _zz_retOddPixelInOddRow_9;
  wire       [8:0]    _zz_retOddPixelInOddRow_10;
  wire       [8:0]    _zz_retOddPixelInOddRow_11;
  wire       [10:0]   _zz_leftBufferAddr_3;
  wire       [11:0]   _zz_when_InterpolationStep1_l787;
  wire       [11:0]   _zz_when_InterpolationStep1_l787_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l787_2;
  wire       [10:0]   _zz_when_InterpolationStep1_l787_3;
  wire       [10:0]   _zz_rightBufferAddr_4;
  wire       [10:0]   _zz_rightBufferAddr_5;
  wire       [10:0]   _zz_rightBufferAddr_6;
  wire       [0:0]    _zz_preTwoCompare_6;
  wire       [0:0]    _zz_preTwoCompare_7;
  wire       [7:0]    _zz_when_InterpolationStep1_l847;
  wire       [7:0]    _zz_when_InterpolationStep1_l854;
  wire       [7:0]    _zz_when_InterpolationStep1_l863;
  wire       [7:0]    _zz_when_InterpolationStep1_l870;
  wire       [7:0]    _zz_when_InterpolationStep1_l881;
  wire       [7:0]    _zz_when_InterpolationStep1_l888;
  wire       [7:0]    _zz_when_InterpolationStep1_l897;
  wire       [7:0]    _zz_when_InterpolationStep1_l904;
  wire       [8:0]    _zz_retOddPixelInOddRow_12;
  wire       [8:0]    _zz_retOddPixelInOddRow_13;
  wire       [8:0]    _zz_retOddPixelInOddRow_14;
  wire       [8:0]    _zz_retOddPixelInOddRow_15;
  wire       [8:0]    _zz_retOddPixelInOddRow_16;
  wire       [8:0]    _zz_retOddPixelInOddRow_17;
  wire       [8:0]    _zz_retOddPixelInOddRow_18;
  wire       [8:0]    _zz_retOddPixelInOddRow_19;
  wire       [0:0]    _zz_preCompare_12;
  wire       [0:0]    _zz_preCompare_13;
  wire       [0:0]    _zz_preCompare_14;
  wire       [0:0]    _zz_preCompare_15;
  wire       [7:0]    _zz_switch_InterpolationStep1_l1001;
  wire       [8:0]    _zz_retPixel_24;
  wire       [8:0]    _zz_retPixel_25;
  wire       [7:0]    _zz_switch_InterpolationStep1_l1015;
  wire       [8:0]    _zz_retPixel_26;
  wire       [8:0]    _zz_retPixel_27;
  wire       [7:0]    _zz_switch_InterpolationStep1_l1032;
  wire       [8:0]    _zz_retPixel_28;
  wire       [8:0]    _zz_retPixel_29;
  wire       [7:0]    _zz_switch_InterpolationStep1_l1046;
  wire       [8:0]    _zz_retPixel_30;
  wire       [8:0]    _zz_retPixel_31;
  wire       [10:0]   _zz_leftBufferAddr_4;
  wire       [10:0]   _zz_leftBufferAddr_5;
  wire       [10:0]   _zz_rightBufferAddr_7;
  wire       [10:0]   _zz_rightBufferAddr_8;
  wire       [11:0]   _zz_when_InterpolationStep1_l166;
  wire       [10:0]   _zz_when_InterpolationStep1_l166_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l166_2;
  wire       [11:0]   _zz_when_InterpolationStep1_l432;
  wire       [10:0]   _zz_when_InterpolationStep1_l432_1;
  wire       [11:0]   _zz_when_InterpolationStep1_l432_2;
  reg                 frameStart;
  reg                 slaveStart;
  wire                dataIn_fire;
  wire                when_InterpolationStep1_l49;
  reg        [7:0]    inpThreshold;
  reg                 holdBuffer;
  reg                 StartIn_regNext;
  wire                when_InterpolationStep1_l55;
  reg                 interComplete;
  reg                 StartIn_regNext_1;
  wire                when_InterpolationStep1_l58;
  reg                 sameBuffer;
  reg                 StartIn_regNext_2;
  wire                when_InterpolationStep1_l61;
  reg                 bufferRowCount_willIncrement;
  reg                 bufferRowCount_willClear;
  reg        [9:0]    bufferRowCount_valueNext;
  reg        [9:0]    bufferRowCount_value;
  wire                bufferRowCount_willOverflowIfInc;
  wire                bufferRowCount_willOverflow;
  reg                 bufferSwitch;
  reg                 StartIn_regNext_3;
  wire                when_InterpolationStep1_l67;
  reg                 bufferEnable;
  reg                 StartIn_regNext_4;
  wire                when_InterpolationStep1_l70;
  reg                 nextRowBuffer;
  reg                 StartIn_regNext_5;
  wire                when_InterpolationStep1_l73;
  reg                 bufferWAddr_willIncrement;
  reg                 bufferWAddr_willClear;
  reg        [9:0]    bufferWAddr_valueNext;
  reg        [9:0]    bufferWAddr_value;
  wire                bufferWAddr_willOverflowIfInc;
  wire                bufferWAddr_willOverflow;
  reg                 outPixelAddr_willIncrement;
  reg                 outPixelAddr_willClear;
  reg        [10:0]   outPixelAddr_valueNext;
  reg        [10:0]   outPixelAddr_value;
  wire                outPixelAddr_willOverflowIfInc;
  wire                outPixelAddr_willOverflow;
  reg        [9:0]    bmpWidth;
  reg        [9:0]    bmpHeight;
  reg                 outRowCount_willIncrement;
  reg                 outRowCount_willClear;
  reg        [10:0]   outRowCount_valueNext;
  reg        [10:0]   outRowCount_value;
  wire                outRowCount_willOverflowIfInc;
  wire                outRowCount_willOverflow;
  wire       [7:0]    upPixel;
  wire       [7:0]    downPixel;
  reg                 evenPixelInEvenRowOutEnable;
  reg                 oddPixelInEvenRowOutEnable;
  reg                 evenPixelInOddRowOutEnable;
  reg                 oddPixelInOddRowOutEnable;
  reg        [9:0]    leftBufferAddr;
  reg        [9:0]    rightBufferAddr;
  reg        [7:0]    retPixel;
  reg        [7:0]    retOddPixelInOddRow;
  reg        [1:0]    preCompare;
  reg                 comparePixelState;
  reg                 compareThreshState;
  reg        [1:0]    preTwoCompare;
  reg                 compareMainPixelState;
  reg                 compareCounterPixelState;
  reg                 compareMainThreshState;
  reg                 compareCounterThreshState;
  reg                 holdEvenPixelStateInOddRow;
  reg                 holdOddPixelStateInOddRow;
  reg                 willRowEndOutIfFire;
  wire                dataOut_fire;
  wire                when_InterpolationStep1_l121;
  reg                 willCompleteIfRowEnd;
  wire                when_InterpolationStep1_l122;
  reg        [7:0]    mainDiagDiff;
  reg        [7:0]    counterDiagDiff;
  wire                dataIn_fire_1;
  wire                when_InterpolationStep1_l129;
  wire                dataIn_fire_2;
  wire                when_InterpolationStep1_l134;
  wire                dataIn_fire_3;
  wire                when_InterpolationStep1_l137;
  wire                when_InterpolationStep1_l138;
  wire                dataIn_fire_4;
  wire                when_InterpolationStep1_l140;
  wire                dataIn_fire_5;
  wire                inpStateMachine_wantExit;
  reg                 inpStateMachine_wantStart;
  wire                inpStateMachine_wantKill;
  wire                dataOut_fire_1;
  wire                when_InterpolationStep1_l1100;
  reg        [1:0]    inpStateMachine_stateReg;
  reg        [1:0]    inpStateMachine_stateNext;
  wire                dataOut_fire_2;
  wire                when_InterpolationStep1_l177;
  wire                when_InterpolationStep1_l180;
  wire                dataOut_fire_3;
  wire                dataIn_fire_6;
  wire                when_InterpolationStep1_l181;
  wire                dataIn_fire_7;
  wire                when_InterpolationStep1_l186;
  wire                when_InterpolationStep1_l189;
  wire                dataIn_fire_8;
  wire                when_InterpolationStep1_l190;
  wire                dataOut_fire_4;
  wire                dataIn_fire_9;
  wire                when_InterpolationStep1_l191;
  wire                when_InterpolationStep1_l197;
  wire                dataOut_fire_5;
  wire                when_InterpolationStep1_l200;
  wire                dataOut_fire_6;
  wire                when_InterpolationStep1_l222;
  wire                switch_InterpolationStep1_l223;
  wire                when_InterpolationStep1_l236;
  wire                switch_InterpolationStep1_l237;
  wire                when_InterpolationStep1_l251;
  wire                when_InterpolationStep1_l252;
  wire                when_InterpolationStep1_l256;
  wire                when_InterpolationStep1_l267;
  wire                when_InterpolationStep1_l281;
  wire                when_InterpolationStep1_l292;
  wire                when_InterpolationStep1_l310;
  wire                when_InterpolationStep1_l315;
  wire                when_InterpolationStep1_l316;
  wire                switch_InterpolationStep1_l319;
  wire                switch_InterpolationStep1_l332;
  wire                when_InterpolationStep1_l357;
  wire                when_InterpolationStep1_l358;
  wire                when_InterpolationStep1_l362;
  wire                when_InterpolationStep1_l373;
  wire                when_InterpolationStep1_l387;
  wire                when_InterpolationStep1_l398;
  wire                dataOut_fire_7;
  wire                dataOut_fire_8;
  wire                when_InterpolationStep1_l419;
  wire                dataOut_fire_9;
  wire                when_InterpolationStep1_l441;
  wire                dataIn_fire_10;
  wire                when_InterpolationStep1_l443;
  wire                dataIn_fire_11;
  wire                when_InterpolationStep1_l444;
  wire                when_InterpolationStep1_l447;
  wire                dataOut_fire_10;
  wire                dataIn_fire_12;
  wire                when_InterpolationStep1_l448;
  wire                dataIn_fire_13;
  wire                when_InterpolationStep1_l453;
  wire                when_InterpolationStep1_l456;
  wire                dataIn_fire_14;
  wire                when_InterpolationStep1_l457;
  wire                dataOut_fire_11;
  wire                dataIn_fire_15;
  wire                when_InterpolationStep1_l458;
  wire                when_InterpolationStep1_l464;
  wire                when_InterpolationStep1_l465;
  wire                when_InterpolationStep1_l480;
  wire                switch_InterpolationStep1_l483;
  wire                switch_InterpolationStep1_l495;
  wire                when_InterpolationStep1_l509;
  wire                switch_InterpolationStep1_l513;
  wire                switch_InterpolationStep1_l527;
  wire                switch_InterpolationStep1_l544;
  wire                switch_InterpolationStep1_l558;
  wire                when_InterpolationStep1_l580;
  wire                when_InterpolationStep1_l583;
  wire                when_InterpolationStep1_l594;
  wire                when_InterpolationStep1_l606;
  wire                when_InterpolationStep1_l609;
  wire                when_InterpolationStep1_l622;
  wire                when_InterpolationStep1_l637;
  wire                when_InterpolationStep1_l640;
  wire                when_InterpolationStep1_l646;
  wire                when_InterpolationStep1_l654;
  wire                when_InterpolationStep1_l660;
  wire                when_InterpolationStep1_l670;
  wire                when_InterpolationStep1_l674;
  wire                when_InterpolationStep1_l681;
  wire                when_InterpolationStep1_l690;
  wire                when_InterpolationStep1_l697;
  wire                when_InterpolationStep1_l708;
  wire                when_InterpolationStep1_l715;
  wire                when_InterpolationStep1_l724;
  wire                when_InterpolationStep1_l731;
  wire                when_InterpolationStep1_l743;
  wire                when_InterpolationStep1_l744;
  wire                when_InterpolationStep1_l747;
  wire                when_InterpolationStep1_l754;
  wire                when_InterpolationStep1_l764;
  wire                when_InterpolationStep1_l771;
  wire                dataOut_fire_12;
  wire                when_InterpolationStep1_l787;
  wire                when_InterpolationStep1_l800;
  wire                when_InterpolationStep1_l801;
  wire                when_InterpolationStep1_l810;
  wire                when_InterpolationStep1_l813;
  wire                when_InterpolationStep1_l819;
  wire                when_InterpolationStep1_l827;
  wire                when_InterpolationStep1_l833;
  wire                when_InterpolationStep1_l843;
  wire                when_InterpolationStep1_l847;
  wire                when_InterpolationStep1_l854;
  wire                when_InterpolationStep1_l863;
  wire                when_InterpolationStep1_l870;
  wire                when_InterpolationStep1_l881;
  wire                when_InterpolationStep1_l888;
  wire                when_InterpolationStep1_l897;
  wire                when_InterpolationStep1_l904;
  wire                when_InterpolationStep1_l916;
  wire                when_InterpolationStep1_l917;
  wire                when_InterpolationStep1_l920;
  wire                when_InterpolationStep1_l927;
  wire                when_InterpolationStep1_l937;
  wire                when_InterpolationStep1_l944;
  wire                when_InterpolationStep1_l968;
  wire                switch_InterpolationStep1_l971;
  wire                switch_InterpolationStep1_l983;
  wire                when_InterpolationStep1_l997;
  wire                switch_InterpolationStep1_l1001;
  wire                switch_InterpolationStep1_l1015;
  wire                switch_InterpolationStep1_l1032;
  wire                switch_InterpolationStep1_l1046;
  wire                dataOut_fire_13;
  wire                dataOut_fire_14;
  wire                when_InterpolationStep1_l1072;
  wire                when_StateMachine_l245;
  wire                when_InterpolationStep1_l160;
  wire                when_InterpolationStep1_l162;
  wire                dataIn_fire_16;
  wire                when_InterpolationStep1_l166;
  wire                when_StateMachine_l245_1;
  wire                dataIn_fire_17;
  wire                when_InterpolationStep1_l432;
  `ifndef SYNTHESIS
  reg [31:0] inpStateMachine_stateReg_string;
  reg [31:0] inpStateMachine_stateNext_string;
  `endif

  (* ram_style = "distributed" *) reg [7:0] lineBufferOne [0:959];
  (* ram_style = "distributed" *) reg [7:0] lineBufferTwo [0:959];
  function  zz_inpValidOut(input dummy);
    begin
      zz_inpValidOut = 1'b0;
      zz_inpValidOut = 1'b1;
    end
  endfunction
  wire  _zz_1;

  assign _zz_bufferRowCount_valueNext_1 = bufferRowCount_willIncrement;
  assign _zz_bufferRowCount_valueNext = {9'd0, _zz_bufferRowCount_valueNext_1};
  assign _zz_bufferWAddr_valueNext_1 = bufferWAddr_willIncrement;
  assign _zz_bufferWAddr_valueNext = {9'd0, _zz_bufferWAddr_valueNext_1};
  assign _zz_outPixelAddr_valueNext_1 = outPixelAddr_willIncrement;
  assign _zz_outPixelAddr_valueNext = {10'd0, _zz_outPixelAddr_valueNext_1};
  assign _zz_outRowCount_valueNext_1 = outRowCount_willIncrement;
  assign _zz_outRowCount_valueNext = {10'd0, _zz_outRowCount_valueNext_1};
  assign _zz_when_InterpolationStep1_l121 = {1'd0, outPixelAddr_value};
  assign _zz_when_InterpolationStep1_l121_1 = (_zz_when_InterpolationStep1_l121_2 - 12'h002);
  assign _zz_when_InterpolationStep1_l121_2 = (2'b10 * bmpWidth);
  assign _zz_when_InterpolationStep1_l122 = {1'd0, outRowCount_value};
  assign _zz_when_InterpolationStep1_l122_1 = (_zz_when_InterpolationStep1_l122_2 - 12'h001);
  assign _zz_when_InterpolationStep1_l122_2 = (2'b10 * bmpHeight);
  assign _zz_when_InterpolationStep1_l129 = (bmpHeight - 10'h001);
  assign _zz_when_InterpolationStep1_l180_1 = (11'h002 + outRowCount_value);
  assign _zz_when_InterpolationStep1_l180 = {1'd0, _zz_when_InterpolationStep1_l180_1};
  assign _zz_when_InterpolationStep1_l180_2 = (2'b10 * bufferRowCount_value);
  assign _zz_when_InterpolationStep1_l181 = (outPixelAddr_value % 2'b10);
  assign _zz_when_InterpolationStep1_l181_1 = {1'd0, outPixelAddr_value};
  assign _zz_when_InterpolationStep1_l181_2 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l181_3 = {1'd0, outPixelAddr_value};
  assign _zz_when_InterpolationStep1_l181_4 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l186 = (outPixelAddr_value % 2'b10);
  assign _zz_when_InterpolationStep1_l186_2 = (11'h001 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l186_1 = {1'd0, _zz_when_InterpolationStep1_l186_2};
  assign _zz_when_InterpolationStep1_l186_3 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l186_5 = (11'h001 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l186_4 = {1'd0, _zz_when_InterpolationStep1_l186_5};
  assign _zz_when_InterpolationStep1_l186_6 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l189_1 = (11'h002 + outRowCount_value);
  assign _zz_when_InterpolationStep1_l189 = {1'd0, _zz_when_InterpolationStep1_l189_1};
  assign _zz_when_InterpolationStep1_l189_2 = (2'b10 * bufferRowCount_value);
  assign _zz_when_InterpolationStep1_l190 = (outPixelAddr_value % 2'b10);
  assign _zz_when_InterpolationStep1_l190_2 = (11'h002 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l190_1 = {1'd0, _zz_when_InterpolationStep1_l190_2};
  assign _zz_when_InterpolationStep1_l190_3 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l190_5 = (11'h002 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l190_4 = {1'd0, _zz_when_InterpolationStep1_l190_5};
  assign _zz_when_InterpolationStep1_l190_6 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l191 = (outPixelAddr_value % 2'b10);
  assign _zz_when_InterpolationStep1_l191_2 = (11'h001 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l191_1 = {1'd0, _zz_when_InterpolationStep1_l191_2};
  assign _zz_when_InterpolationStep1_l191_3 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l191_5 = (11'h001 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l191_4 = {1'd0, _zz_when_InterpolationStep1_l191_5};
  assign _zz_when_InterpolationStep1_l191_6 = (2'b10 * bufferWAddr_value);
  assign _zz_leftBufferAddr = (outPixelAddr_value / 2'b10);
  assign _zz_rightBufferAddr = (_zz_rightBufferAddr_1 / 2'b10);
  assign _zz_rightBufferAddr_1 = (11'h002 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l222_1 = (11'h002 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l222 = {1'd0, _zz_when_InterpolationStep1_l222_1};
  assign _zz_when_InterpolationStep1_l222_2 = (_zz_when_InterpolationStep1_l222_3 - 12'h001);
  assign _zz_when_InterpolationStep1_l222_3 = (2'b10 * bmpWidth);
  assign _zz_preCompare = 1'b1;
  assign _zz_preCompare_1 = 1'b1;
  assign _zz_when_InterpolationStep1_l236_1 = (11'h002 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l236 = {1'd0, _zz_when_InterpolationStep1_l236_1};
  assign _zz_when_InterpolationStep1_l236_2 = (_zz_when_InterpolationStep1_l236_3 - 12'h001);
  assign _zz_when_InterpolationStep1_l236_3 = (2'b10 * bmpWidth);
  assign _zz_preCompare_2 = 1'b1;
  assign _zz_preCompare_3 = 1'b1;
  assign _zz_when_InterpolationStep1_l252_1 = (11'h002 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l252 = {1'd0, _zz_when_InterpolationStep1_l252_1};
  assign _zz_when_InterpolationStep1_l252_2 = (_zz_when_InterpolationStep1_l252_3 - 12'h001);
  assign _zz_when_InterpolationStep1_l252_3 = (2'b10 * bmpWidth);
  assign _zz_when_InterpolationStep1_l256 = (_zz_lineBufferOne_port4 - _zz_lineBufferOne_port5);
  assign _zz_retPixel = (_zz_retPixel_1 / 2'b10);
  assign _zz_retPixel_1 = ({1'b0,_zz_lineBufferOne_port7} + {1'b0,_zz_lineBufferOne_port8});
  assign _zz_when_InterpolationStep1_l267 = (_zz_lineBufferTwo_port4 - _zz_lineBufferTwo_port5);
  assign _zz_retPixel_2 = (_zz_retPixel_3 / 2'b10);
  assign _zz_retPixel_3 = ({1'b0,_zz_lineBufferTwo_port7} + {1'b0,_zz_lineBufferTwo_port8});
  assign _zz_when_InterpolationStep1_l281 = (_zz_lineBufferOne_port9 - _zz_lineBufferOne_port10);
  assign _zz_retPixel_4 = (_zz_retPixel_5 / 2'b10);
  assign _zz_retPixel_5 = ({1'b0,_zz_lineBufferOne_port12} + {1'b0,_zz_lineBufferOne_port13});
  assign _zz_when_InterpolationStep1_l292 = (_zz_lineBufferTwo_port9 - _zz_lineBufferTwo_port10);
  assign _zz_retPixel_6 = (_zz_retPixel_7 / 2'b10);
  assign _zz_retPixel_7 = ({1'b0,_zz_lineBufferTwo_port12} + {1'b0,_zz_lineBufferTwo_port13});
  assign _zz_when_InterpolationStep1_l316_1 = (11'h001 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l316 = {1'd0, _zz_when_InterpolationStep1_l316_1};
  assign _zz_when_InterpolationStep1_l316_2 = (_zz_when_InterpolationStep1_l316_3 - 12'h001);
  assign _zz_when_InterpolationStep1_l316_3 = (2'b10 * bmpWidth);
  assign _zz_preCompare_4 = 1'b1;
  assign _zz_preCompare_5 = 1'b1;
  assign _zz_preCompare_6 = 1'b1;
  assign _zz_preCompare_7 = 1'b1;
  assign _zz_when_InterpolationStep1_l358_1 = (11'h001 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l358 = {1'd0, _zz_when_InterpolationStep1_l358_1};
  assign _zz_when_InterpolationStep1_l358_2 = (_zz_when_InterpolationStep1_l358_3 - 12'h001);
  assign _zz_when_InterpolationStep1_l358_3 = (2'b10 * bmpWidth);
  assign _zz_when_InterpolationStep1_l362 = (_zz_lineBufferOne_port17 - _zz_lineBufferOne_port18);
  assign _zz_retPixel_8 = (_zz_retPixel_9 / 2'b10);
  assign _zz_retPixel_9 = ({1'b0,_zz_lineBufferOne_port20} + {1'b0,_zz_lineBufferOne_port21});
  assign _zz_when_InterpolationStep1_l373 = (_zz_lineBufferTwo_port17 - _zz_lineBufferTwo_port18);
  assign _zz_retPixel_10 = (_zz_retPixel_11 / 2'b10);
  assign _zz_retPixel_11 = ({1'b0,_zz_lineBufferTwo_port20} + {1'b0,_zz_lineBufferTwo_port21});
  assign _zz_when_InterpolationStep1_l387 = (_zz_lineBufferOne_port22 - _zz_lineBufferOne_port23);
  assign _zz_retPixel_12 = (_zz_retPixel_13 / 2'b10);
  assign _zz_retPixel_13 = ({1'b0,_zz_lineBufferOne_port25} + {1'b0,_zz_lineBufferOne_port26});
  assign _zz_when_InterpolationStep1_l398 = (_zz_lineBufferTwo_port22 - _zz_lineBufferTwo_port23);
  assign _zz_retPixel_14 = (_zz_retPixel_15 / 2'b10);
  assign _zz_retPixel_15 = ({1'b0,_zz_lineBufferTwo_port25} + {1'b0,_zz_lineBufferTwo_port26});
  assign _zz_leftBufferAddr_1 = (_zz_leftBufferAddr_2 / 2'b10);
  assign _zz_leftBufferAddr_2 = (11'h001 + outPixelAddr_value);
  assign _zz_rightBufferAddr_2 = (_zz_rightBufferAddr_3 / 2'b10);
  assign _zz_rightBufferAddr_3 = (11'h003 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l443_1 = (11'h001 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l443 = {1'd0, _zz_when_InterpolationStep1_l443_1};
  assign _zz_when_InterpolationStep1_l443_2 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l444 = {1'd0, outPixelAddr_value};
  assign _zz_when_InterpolationStep1_l444_1 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l447_1 = (11'h003 + outRowCount_value);
  assign _zz_when_InterpolationStep1_l447 = {1'd0, _zz_when_InterpolationStep1_l447_1};
  assign _zz_when_InterpolationStep1_l447_2 = (2'b10 * bufferRowCount_value);
  assign _zz_when_InterpolationStep1_l447_3 = {1'd0, outRowCount_value};
  assign _zz_when_InterpolationStep1_l447_4 = (_zz_when_InterpolationStep1_l447_5 - 12'h001);
  assign _zz_when_InterpolationStep1_l447_5 = (2'b10 * bmpHeight);
  assign _zz_when_InterpolationStep1_l448 = (outPixelAddr_value % 2'b10);
  assign _zz_when_InterpolationStep1_l448_1 = {1'd0, outPixelAddr_value};
  assign _zz_when_InterpolationStep1_l448_2 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l448_3 = {1'd0, outPixelAddr_value};
  assign _zz_when_InterpolationStep1_l448_4 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l453 = (outPixelAddr_value % 2'b10);
  assign _zz_when_InterpolationStep1_l453_2 = (11'h001 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l453_1 = {1'd0, _zz_when_InterpolationStep1_l453_2};
  assign _zz_when_InterpolationStep1_l453_3 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l453_5 = (11'h001 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l453_4 = {1'd0, _zz_when_InterpolationStep1_l453_5};
  assign _zz_when_InterpolationStep1_l453_6 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l456_1 = (11'h003 + outRowCount_value);
  assign _zz_when_InterpolationStep1_l456 = {1'd0, _zz_when_InterpolationStep1_l456_1};
  assign _zz_when_InterpolationStep1_l456_2 = (2'b10 * bufferRowCount_value);
  assign _zz_when_InterpolationStep1_l456_3 = {1'd0, outRowCount_value};
  assign _zz_when_InterpolationStep1_l456_4 = (_zz_when_InterpolationStep1_l456_5 - 12'h001);
  assign _zz_when_InterpolationStep1_l456_5 = (2'b10 * bmpHeight);
  assign _zz_when_InterpolationStep1_l457 = (outPixelAddr_value % 2'b10);
  assign _zz_when_InterpolationStep1_l457_2 = (11'h002 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l457_1 = {1'd0, _zz_when_InterpolationStep1_l457_2};
  assign _zz_when_InterpolationStep1_l457_3 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l457_5 = (11'h002 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l457_4 = {1'd0, _zz_when_InterpolationStep1_l457_5};
  assign _zz_when_InterpolationStep1_l457_6 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l458 = (outPixelAddr_value % 2'b10);
  assign _zz_when_InterpolationStep1_l458_2 = (11'h001 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l458_1 = {1'd0, _zz_when_InterpolationStep1_l458_2};
  assign _zz_when_InterpolationStep1_l458_3 = (2'b10 * bufferWAddr_value);
  assign _zz_when_InterpolationStep1_l458_5 = (11'h001 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l458_4 = {1'd0, _zz_when_InterpolationStep1_l458_5};
  assign _zz_when_InterpolationStep1_l458_6 = (2'b10 * bufferWAddr_value);
  assign _zz_preCompare_8 = 1'b1;
  assign _zz_preCompare_9 = 1'b1;
  assign _zz_preCompare_10 = 1'b1;
  assign _zz_preCompare_11 = 1'b1;
  assign _zz_switch_InterpolationStep1_l513 = (_zz_lineBufferOne_port30 - _zz_lineBufferTwo_port30);
  assign _zz_retPixel_16 = (_zz_retPixel_17 / 2'b10);
  assign _zz_retPixel_17 = ({1'b0,_zz_lineBufferOne_port32} + {1'b0,_zz_lineBufferTwo_port31});
  assign _zz_switch_InterpolationStep1_l527 = (_zz_lineBufferTwo_port32 - _zz_lineBufferOne_port33);
  assign _zz_retPixel_18 = (_zz_retPixel_19 / 2'b10);
  assign _zz_retPixel_19 = ({1'b0,_zz_lineBufferTwo_port34} + {1'b0,_zz_lineBufferOne_port34});
  assign _zz_switch_InterpolationStep1_l544 = (_zz_lineBufferTwo_port35 - _zz_lineBufferOne_port35);
  assign _zz_retPixel_20 = (_zz_retPixel_21 / 2'b10);
  assign _zz_retPixel_21 = ({1'b0,_zz_lineBufferOne_port37} + {1'b0,_zz_lineBufferTwo_port36});
  assign _zz_switch_InterpolationStep1_l558 = (_zz_lineBufferOne_port38 - _zz_lineBufferTwo_port37);
  assign _zz_retPixel_22 = (_zz_retPixel_23 / 2'b10);
  assign _zz_retPixel_23 = ({1'b0,_zz_lineBufferTwo_port39} + {1'b0,_zz_lineBufferOne_port39});
  assign _zz_preTwoCompare = 1'b1;
  assign _zz_preTwoCompare_1 = 1'b1;
  assign _zz_preTwoCompare_2 = 1'b1;
  assign _zz_preTwoCompare_3 = 1'b1;
  assign _zz_when_InterpolationStep1_l609 = (_zz_lineBufferOne_port42 - _zz_lineBufferOne_port43);
  assign _zz_retOddPixelInOddRow = (_zz_retOddPixelInOddRow_1 / 2'b10);
  assign _zz_retOddPixelInOddRow_1 = ({1'b0,_zz_lineBufferOne_port45} + {1'b0,_zz_lineBufferOne_port46});
  assign _zz_when_InterpolationStep1_l622 = (_zz_lineBufferTwo_port42 - _zz_lineBufferTwo_port43);
  assign _zz_retOddPixelInOddRow_2 = (_zz_retOddPixelInOddRow_3 / 2'b10);
  assign _zz_retOddPixelInOddRow_3 = ({1'b0,_zz_lineBufferTwo_port45} + {1'b0,_zz_lineBufferTwo_port46});
  assign _zz_preTwoCompare_4 = 1'b1;
  assign _zz_preTwoCompare_5 = 1'b1;
  assign _zz_when_InterpolationStep1_l674 = (_zz_lineBufferOne_port51 - _zz_lineBufferTwo_port51);
  assign _zz_when_InterpolationStep1_l681 = (_zz_lineBufferTwo_port53 - _zz_lineBufferOne_port53);
  assign _zz_when_InterpolationStep1_l690 = (_zz_lineBufferTwo_port55 - _zz_lineBufferOne_port55);
  assign _zz_when_InterpolationStep1_l697 = (_zz_lineBufferOne_port57 - _zz_lineBufferTwo_port57);
  assign _zz_when_InterpolationStep1_l708 = (_zz_lineBufferTwo_port59 - _zz_lineBufferOne_port59);
  assign _zz_when_InterpolationStep1_l715 = (_zz_lineBufferOne_port61 - _zz_lineBufferTwo_port61);
  assign _zz_when_InterpolationStep1_l724 = (_zz_lineBufferOne_port63 - _zz_lineBufferTwo_port63);
  assign _zz_when_InterpolationStep1_l731 = (_zz_lineBufferTwo_port65 - _zz_lineBufferOne_port65);
  assign _zz_retOddPixelInOddRow_4 = (_zz_retOddPixelInOddRow_5 / 2'b10);
  assign _zz_retOddPixelInOddRow_5 = ({1'b0,_zz_lineBufferTwo_port69} + {1'b0,_zz_lineBufferOne_port69});
  assign _zz_retOddPixelInOddRow_6 = (_zz_retOddPixelInOddRow_7 / 2'b10);
  assign _zz_retOddPixelInOddRow_7 = ({1'b0,_zz_lineBufferOne_port70} + {1'b0,_zz_lineBufferTwo_port70});
  assign _zz_retOddPixelInOddRow_8 = (_zz_retOddPixelInOddRow_9 / 2'b10);
  assign _zz_retOddPixelInOddRow_9 = ({1'b0,_zz_lineBufferOne_port71} + {1'b0,_zz_lineBufferTwo_port71});
  assign _zz_retOddPixelInOddRow_10 = (_zz_retOddPixelInOddRow_11 / 2'b10);
  assign _zz_retOddPixelInOddRow_11 = ({1'b0,_zz_lineBufferTwo_port72} + {1'b0,_zz_lineBufferOne_port72});
  assign _zz_leftBufferAddr_3 = (outPixelAddr_value / 2'b10);
  assign _zz_when_InterpolationStep1_l787 = (_zz_when_InterpolationStep1_l787_1 - 12'h001);
  assign _zz_when_InterpolationStep1_l787_1 = (2'b10 * bmpWidth);
  assign _zz_when_InterpolationStep1_l787_3 = (11'h002 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l787_2 = {1'd0, _zz_when_InterpolationStep1_l787_3};
  assign _zz_rightBufferAddr_4 = (outPixelAddr_value / 2'b10);
  assign _zz_rightBufferAddr_5 = (_zz_rightBufferAddr_6 / 2'b10);
  assign _zz_rightBufferAddr_6 = (11'h002 + outPixelAddr_value);
  assign _zz_preTwoCompare_6 = 1'b1;
  assign _zz_preTwoCompare_7 = 1'b1;
  assign _zz_when_InterpolationStep1_l847 = (_zz_lineBufferOne_port77 - _zz_lineBufferTwo_port77);
  assign _zz_when_InterpolationStep1_l854 = (_zz_lineBufferTwo_port79 - _zz_lineBufferOne_port79);
  assign _zz_when_InterpolationStep1_l863 = (_zz_lineBufferTwo_port81 - _zz_lineBufferOne_port81);
  assign _zz_when_InterpolationStep1_l870 = (_zz_lineBufferOne_port83 - _zz_lineBufferTwo_port83);
  assign _zz_when_InterpolationStep1_l881 = (_zz_lineBufferTwo_port85 - _zz_lineBufferOne_port85);
  assign _zz_when_InterpolationStep1_l888 = (_zz_lineBufferOne_port87 - _zz_lineBufferTwo_port87);
  assign _zz_when_InterpolationStep1_l897 = (_zz_lineBufferOne_port89 - _zz_lineBufferTwo_port89);
  assign _zz_when_InterpolationStep1_l904 = (_zz_lineBufferTwo_port91 - _zz_lineBufferOne_port91);
  assign _zz_retOddPixelInOddRow_12 = (_zz_retOddPixelInOddRow_13 / 2'b10);
  assign _zz_retOddPixelInOddRow_13 = ({1'b0,_zz_lineBufferTwo_port95} + {1'b0,_zz_lineBufferOne_port95});
  assign _zz_retOddPixelInOddRow_14 = (_zz_retOddPixelInOddRow_15 / 2'b10);
  assign _zz_retOddPixelInOddRow_15 = ({1'b0,_zz_lineBufferOne_port96} + {1'b0,_zz_lineBufferTwo_port96});
  assign _zz_retOddPixelInOddRow_16 = (_zz_retOddPixelInOddRow_17 / 2'b10);
  assign _zz_retOddPixelInOddRow_17 = ({1'b0,_zz_lineBufferOne_port97} + {1'b0,_zz_lineBufferTwo_port97});
  assign _zz_retOddPixelInOddRow_18 = (_zz_retOddPixelInOddRow_19 / 2'b10);
  assign _zz_retOddPixelInOddRow_19 = ({1'b0,_zz_lineBufferTwo_port98} + {1'b0,_zz_lineBufferOne_port98});
  assign _zz_preCompare_12 = 1'b1;
  assign _zz_preCompare_13 = 1'b1;
  assign _zz_preCompare_14 = 1'b1;
  assign _zz_preCompare_15 = 1'b1;
  assign _zz_switch_InterpolationStep1_l1001 = (_zz_lineBufferOne_port102 - _zz_lineBufferTwo_port102);
  assign _zz_retPixel_24 = (_zz_retPixel_25 / 2'b10);
  assign _zz_retPixel_25 = ({1'b0,_zz_lineBufferOne_port104} + {1'b0,_zz_lineBufferTwo_port103});
  assign _zz_switch_InterpolationStep1_l1015 = (_zz_lineBufferTwo_port104 - _zz_lineBufferOne_port105);
  assign _zz_retPixel_26 = (_zz_retPixel_27 / 2'b10);
  assign _zz_retPixel_27 = ({1'b0,_zz_lineBufferTwo_port106} + {1'b0,_zz_lineBufferOne_port106});
  assign _zz_switch_InterpolationStep1_l1032 = (_zz_lineBufferTwo_port107 - _zz_lineBufferOne_port107);
  assign _zz_retPixel_28 = (_zz_retPixel_29 / 2'b10);
  assign _zz_retPixel_29 = ({1'b0,_zz_lineBufferOne_port109} + {1'b0,_zz_lineBufferTwo_port108});
  assign _zz_switch_InterpolationStep1_l1046 = (_zz_lineBufferOne_port110 - _zz_lineBufferTwo_port109);
  assign _zz_retPixel_30 = (_zz_retPixel_31 / 2'b10);
  assign _zz_retPixel_31 = ({1'b0,_zz_lineBufferTwo_port111} + {1'b0,_zz_lineBufferOne_port111});
  assign _zz_leftBufferAddr_4 = (_zz_leftBufferAddr_5 / 2'b10);
  assign _zz_leftBufferAddr_5 = (11'h001 + outPixelAddr_value);
  assign _zz_rightBufferAddr_7 = (_zz_rightBufferAddr_8 / 2'b10);
  assign _zz_rightBufferAddr_8 = (11'h003 + outPixelAddr_value);
  assign _zz_when_InterpolationStep1_l166_1 = (11'h002 + outRowCount_value);
  assign _zz_when_InterpolationStep1_l166 = {1'd0, _zz_when_InterpolationStep1_l166_1};
  assign _zz_when_InterpolationStep1_l166_2 = (2'b10 * bufferRowCount_value);
  assign _zz_when_InterpolationStep1_l432_1 = (11'h003 + outRowCount_value);
  assign _zz_when_InterpolationStep1_l432 = {1'd0, _zz_when_InterpolationStep1_l432_1};
  assign _zz_when_InterpolationStep1_l432_2 = (2'b10 * bufferRowCount_value);
  assign _zz_lineBufferOne_port = dataIn_payload;
  assign _zz_lineBufferOne_port_1 = (bufferEnable && (! bufferSwitch));
  assign _zz_lineBufferTwo_port = dataIn_payload;
  assign _zz_lineBufferTwo_port_1 = (bufferEnable && bufferSwitch);
  initial begin
    $readmemb("InterpolationStep1.v_toplevel_lineBufferOne.bin",lineBufferOne);
  end
  always @(posedge clk) begin
    if(_zz_lineBufferOne_port_1) begin
      lineBufferOne[bufferWAddr_value] <= _zz_lineBufferOne_port;
    end
  end

  assign _zz_lineBufferOne_port1 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port2 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port3 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port4 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port5 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port6 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port7 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port8 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port9 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port10 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port11 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port12 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port13 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port14 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port15 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port16 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port17 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port18 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port19 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port20 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port21 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port22 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port23 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port24 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port25 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port26 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port27 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port28 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port29 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port30 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port31 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port32 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port33 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port34 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port35 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port36 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port37 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port38 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port39 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port40 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port41 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port42 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port43 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port44 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port45 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port46 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port47 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port48 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port49 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port50 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port51 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port52 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port53 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port54 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port55 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port56 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port57 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port58 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port59 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port60 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port61 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port62 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port63 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port64 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port65 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port66 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port67 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port68 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port69 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port70 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port71 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port72 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port73 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port74 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port75 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port76 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port77 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port78 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port79 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port80 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port81 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port82 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port83 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port84 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port85 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port86 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port87 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port88 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port89 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port90 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port91 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port92 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port93 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port94 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port95 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port96 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port97 = lineBufferOne[leftBufferAddr];
  assign _zz_lineBufferOne_port98 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port99 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port100 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port101 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port102 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port103 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port104 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port105 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port106 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port107 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port108 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port109 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port110 = lineBufferOne[rightBufferAddr];
  assign _zz_lineBufferOne_port111 = lineBufferOne[rightBufferAddr];
  initial begin
    $readmemb("InterpolationStep1.v_toplevel_lineBufferTwo.bin",lineBufferTwo);
  end
  always @(posedge clk) begin
    if(_zz_lineBufferTwo_port_1) begin
      lineBufferTwo[bufferWAddr_value] <= _zz_lineBufferTwo_port;
    end
  end

  assign _zz_lineBufferTwo_port1 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port2 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port3 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port4 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port5 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port6 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port7 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port8 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port9 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port10 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port11 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port12 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port13 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port14 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port15 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port16 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port17 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port18 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port19 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port20 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port21 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port22 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port23 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port24 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port25 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port26 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port27 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port28 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port29 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port30 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port31 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port32 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port33 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port34 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port35 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port36 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port37 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port38 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port39 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port40 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port41 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port42 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port43 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port44 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port45 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port46 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port47 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port48 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port49 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port50 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port51 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port52 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port53 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port54 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port55 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port56 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port57 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port58 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port59 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port60 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port61 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port62 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port63 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port64 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port65 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port66 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port67 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port68 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port69 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port70 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port71 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port72 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port73 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port74 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port75 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port76 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port77 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port78 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port79 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port80 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port81 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port82 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port83 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port84 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port85 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port86 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port87 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port88 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port89 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port90 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port91 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port92 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port93 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port94 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port95 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port96 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port97 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port98 = lineBufferTwo[leftBufferAddr];
  assign _zz_lineBufferTwo_port99 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port100 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port101 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port102 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port103 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port104 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port105 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port106 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port107 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port108 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port109 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port110 = lineBufferTwo[rightBufferAddr];
  assign _zz_lineBufferTwo_port111 = lineBufferTwo[rightBufferAddr];
  `ifndef SYNTHESIS
  always @(*) begin
    case(inpStateMachine_stateReg)
      inpStateMachine_enumDef_BOOT : inpStateMachine_stateReg_string = "BOOT";
      inpStateMachine_enumDef_EVEN : inpStateMachine_stateReg_string = "EVEN";
      inpStateMachine_enumDef_ODD : inpStateMachine_stateReg_string = "ODD ";
      default : inpStateMachine_stateReg_string = "????";
    endcase
  end
  always @(*) begin
    case(inpStateMachine_stateNext)
      inpStateMachine_enumDef_BOOT : inpStateMachine_stateNext_string = "BOOT";
      inpStateMachine_enumDef_EVEN : inpStateMachine_stateNext_string = "EVEN";
      inpStateMachine_enumDef_ODD : inpStateMachine_stateNext_string = "ODD ";
      default : inpStateMachine_stateNext_string = "????";
    endcase
  end
  `endif

  always @(*) begin
    dataIn_ready = 1'b0;
    if(when_InterpolationStep1_l138) begin
      dataIn_ready = bufferEnable;
    end
  end

  always @(*) begin
    dataOut_valid = 1'b0;
    case(inpStateMachine_stateReg)
      inpStateMachine_enumDef_EVEN : begin
        if(evenPixelInEvenRowOutEnable) begin
          dataOut_valid = 1'b1;
        end else begin
          if(oddPixelInEvenRowOutEnable) begin
            if(when_InterpolationStep1_l310) begin
              dataOut_valid = 1'b1;
            end else begin
              if(when_InterpolationStep1_l315) begin
                if(!when_InterpolationStep1_l316) begin
                  dataOut_valid = 1'b1;
                end
              end
            end
          end
        end
      end
      inpStateMachine_enumDef_ODD : begin
        if(when_InterpolationStep1_l464) begin
          if(when_InterpolationStep1_l465) begin
            dataOut_valid = 1'b1;
          end else begin
            if(sameBuffer) begin
              dataOut_valid = 1'b1;
            end
          end
        end
        if(when_InterpolationStep1_l800) begin
          if(when_InterpolationStep1_l801) begin
            if(sameBuffer) begin
              dataOut_valid = 1'b1;
            end else begin
              dataOut_valid = 1'b1;
            end
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    dataOut_payload = 8'h0;
    case(inpStateMachine_stateReg)
      inpStateMachine_enumDef_EVEN : begin
        if(evenPixelInEvenRowOutEnable) begin
          case(nextRowBuffer)
            1'b1 : begin
              dataOut_payload = _zz_lineBufferOne_port1;
            end
            default : begin
              dataOut_payload = _zz_lineBufferTwo_port1;
            end
          endcase
        end else begin
          if(oddPixelInEvenRowOutEnable) begin
            if(when_InterpolationStep1_l310) begin
              dataOut_payload = retPixel;
            end else begin
              if(when_InterpolationStep1_l315) begin
                if(!when_InterpolationStep1_l316) begin
                  case(nextRowBuffer)
                    1'b1 : begin
                      dataOut_payload = _zz_lineBufferOne_port16;
                    end
                    default : begin
                      dataOut_payload = _zz_lineBufferTwo_port16;
                    end
                  endcase
                end
              end
            end
          end
        end
      end
      inpStateMachine_enumDef_ODD : begin
        if(when_InterpolationStep1_l464) begin
          if(when_InterpolationStep1_l465) begin
            dataOut_payload = retPixel;
          end else begin
            if(sameBuffer) begin
              case(nextRowBuffer)
                1'b1 : begin
                  dataOut_payload = _zz_lineBufferOne_port27;
                end
                default : begin
                  dataOut_payload = _zz_lineBufferTwo_port27;
                end
              endcase
            end
          end
        end
        if(when_InterpolationStep1_l800) begin
          if(when_InterpolationStep1_l801) begin
            if(sameBuffer) begin
              dataOut_payload = retOddPixelInOddRow;
            end else begin
              dataOut_payload = retOddPixelInOddRow;
            end
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    startOut = 1'b0;
    startOut = slaveStart;
  end

  always @(*) begin
    frameStartOut = 1'b0;
    case(inpStateMachine_stateReg)
      inpStateMachine_enumDef_EVEN : begin
        if(when_InterpolationStep1_l197) begin
          frameStartOut = 1'b1;
        end
      end
      inpStateMachine_enumDef_ODD : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    rowEndOut = 1'b0;
    if(when_InterpolationStep1_l1100) begin
      rowEndOut = 1'b1;
    end
  end

  assign _zz_1 = zz_inpValidOut(1'b0);
  always @(*) inpValidOut = _zz_1;
  always @(*) begin
    inpCompleteOut = 1'b0;
    inpCompleteOut = interComplete;
  end

  assign dataIn_fire = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l49 = (dataIn_fire && (! inpTwoCompleteIn));
  assign when_InterpolationStep1_l55 = ((! StartIn) && StartIn_regNext);
  assign when_InterpolationStep1_l58 = (StartIn && (! StartIn_regNext_1));
  assign when_InterpolationStep1_l61 = (StartIn && (! StartIn_regNext_2));
  always @(*) begin
    bufferRowCount_willIncrement = 1'b0;
    if(when_InterpolationStep1_l134) begin
      bufferRowCount_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    bufferRowCount_willClear = 1'b0;
    if(dataOut_fire_1) begin
      if(willRowEndOutIfFire) begin
        if(willCompleteIfRowEnd) begin
          bufferRowCount_willClear = 1'b1;
        end
      end
    end
  end

  assign bufferRowCount_willOverflowIfInc = (bufferRowCount_value == 10'h21c);
  assign bufferRowCount_willOverflow = (bufferRowCount_willOverflowIfInc && bufferRowCount_willIncrement);
  always @(*) begin
    if(bufferRowCount_willOverflow) begin
      bufferRowCount_valueNext = 10'h0;
    end else begin
      bufferRowCount_valueNext = (bufferRowCount_value + _zz_bufferRowCount_valueNext);
    end
    if(bufferRowCount_willClear) begin
      bufferRowCount_valueNext = 10'h0;
    end
  end

  assign when_InterpolationStep1_l67 = (StartIn && (! StartIn_regNext_3));
  assign when_InterpolationStep1_l70 = (StartIn && (! StartIn_regNext_4));
  assign when_InterpolationStep1_l73 = (StartIn && (! StartIn_regNext_5));
  always @(*) begin
    bufferWAddr_willIncrement = 1'b0;
    if(dataIn_fire_5) begin
      if(!rowEndIn) begin
        bufferWAddr_willIncrement = 1'b1;
      end
    end
  end

  always @(*) begin
    bufferWAddr_willClear = 1'b0;
    if(dataIn_fire_5) begin
      if(rowEndIn) begin
        bufferWAddr_willClear = 1'b1;
      end
    end
    if(dataOut_fire_1) begin
      if(willRowEndOutIfFire) begin
        if(willCompleteIfRowEnd) begin
          bufferWAddr_willClear = 1'b1;
        end
      end
    end
  end

  assign bufferWAddr_willOverflowIfInc = (bufferWAddr_value == 10'h3bf);
  assign bufferWAddr_willOverflow = (bufferWAddr_willOverflowIfInc && bufferWAddr_willIncrement);
  always @(*) begin
    if(bufferWAddr_willOverflow) begin
      bufferWAddr_valueNext = 10'h0;
    end else begin
      bufferWAddr_valueNext = (bufferWAddr_value + _zz_bufferWAddr_valueNext);
    end
    if(bufferWAddr_willClear) begin
      bufferWAddr_valueNext = 10'h0;
    end
  end

  always @(*) begin
    outPixelAddr_willIncrement = 1'b0;
    if(dataOut_fire_1) begin
      if(!willRowEndOutIfFire) begin
        outPixelAddr_willIncrement = 1'b1;
      end
    end
  end

  always @(*) begin
    outPixelAddr_willClear = 1'b0;
    if(dataOut_fire_1) begin
      if(willRowEndOutIfFire) begin
        outPixelAddr_willClear = 1'b1;
      end
    end
  end

  assign outPixelAddr_willOverflowIfInc = (outPixelAddr_value == 11'h77f);
  assign outPixelAddr_willOverflow = (outPixelAddr_willOverflowIfInc && outPixelAddr_willIncrement);
  always @(*) begin
    if(outPixelAddr_willOverflow) begin
      outPixelAddr_valueNext = 11'h0;
    end else begin
      outPixelAddr_valueNext = (outPixelAddr_value + _zz_outPixelAddr_valueNext);
    end
    if(outPixelAddr_willClear) begin
      outPixelAddr_valueNext = 11'h0;
    end
  end

  always @(*) begin
    outRowCount_willIncrement = 1'b0;
    if(dataOut_fire_1) begin
      if(willRowEndOutIfFire) begin
        if(!willCompleteIfRowEnd) begin
          outRowCount_willIncrement = 1'b1;
        end
      end
    end
  end

  always @(*) begin
    outRowCount_willClear = 1'b0;
    if(dataOut_fire_1) begin
      if(willRowEndOutIfFire) begin
        if(willCompleteIfRowEnd) begin
          outRowCount_willClear = 1'b1;
        end
      end
    end
  end

  assign outRowCount_willOverflowIfInc = (outRowCount_value == 11'h438);
  assign outRowCount_willOverflow = (outRowCount_willOverflowIfInc && outRowCount_willIncrement);
  always @(*) begin
    if(outRowCount_willOverflow) begin
      outRowCount_valueNext = 11'h0;
    end else begin
      outRowCount_valueNext = (outRowCount_value + _zz_outRowCount_valueNext);
    end
    if(outRowCount_willClear) begin
      outRowCount_valueNext = 11'h0;
    end
  end

  assign upPixel = 8'h0;
  assign downPixel = 8'h0;
  assign dataOut_fire = (dataOut_valid && dataOut_ready);
  assign when_InterpolationStep1_l121 = ((_zz_when_InterpolationStep1_l121 == _zz_when_InterpolationStep1_l121_1) && dataOut_fire);
  assign when_InterpolationStep1_l122 = (_zz_when_InterpolationStep1_l122 == _zz_when_InterpolationStep1_l122_1);
  assign dataIn_fire_1 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l129 = (((bufferRowCount_value == _zz_when_InterpolationStep1_l129) && rowEndIn) && dataIn_fire_1);
  assign dataIn_fire_2 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l134 = (rowEndIn && dataIn_fire_2);
  assign dataIn_fire_3 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l137 = (rowEndIn && dataIn_fire_3);
  assign when_InterpolationStep1_l138 = (StartIn && (! holdBuffer));
  assign dataIn_fire_4 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l140 = (((10'h001 <= bufferRowCount_value) && rowEndIn) && dataIn_fire_4);
  assign dataIn_fire_5 = (dataIn_valid && dataIn_ready);
  assign inpStateMachine_wantExit = 1'b0;
  always @(*) begin
    inpStateMachine_wantStart = 1'b0;
    case(inpStateMachine_stateReg)
      inpStateMachine_enumDef_EVEN : begin
      end
      inpStateMachine_enumDef_ODD : begin
      end
      default : begin
        inpStateMachine_wantStart = 1'b1;
      end
    endcase
  end

  assign inpStateMachine_wantKill = 1'b0;
  assign dataOut_fire_1 = (dataOut_valid && dataOut_ready);
  assign when_InterpolationStep1_l1100 = (willRowEndOutIfFire && dataOut_valid);
  always @(*) begin
    inpStateMachine_stateNext = inpStateMachine_stateReg;
    case(inpStateMachine_stateReg)
      inpStateMachine_enumDef_EVEN : begin
        if(when_InterpolationStep1_l177) begin
          inpStateMachine_stateNext = inpStateMachine_enumDef_ODD;
        end
      end
      inpStateMachine_enumDef_ODD : begin
        if(when_InterpolationStep1_l441) begin
          inpStateMachine_stateNext = inpStateMachine_enumDef_EVEN;
        end
      end
      default : begin
      end
    endcase
    if(inpStateMachine_wantStart) begin
      inpStateMachine_stateNext = inpStateMachine_enumDef_EVEN;
    end
    if(inpStateMachine_wantKill) begin
      inpStateMachine_stateNext = inpStateMachine_enumDef_BOOT;
    end
  end

  assign dataOut_fire_2 = (dataOut_valid && dataOut_ready);
  assign when_InterpolationStep1_l177 = (willRowEndOutIfFire && dataOut_fire_2);
  assign when_InterpolationStep1_l180 = (_zz_when_InterpolationStep1_l180 <= _zz_when_InterpolationStep1_l180_2);
  assign dataOut_fire_3 = (dataOut_valid && dataOut_ready);
  assign dataIn_fire_6 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l181 = (((((! (dataOut_fire_3 && evenPixelInEvenRowOutEnable)) && (_zz_when_InterpolationStep1_l181 == 11'h0)) && (_zz_when_InterpolationStep1_l181_1 <= _zz_when_InterpolationStep1_l181_2)) && dataIn_fire_6) || (_zz_when_InterpolationStep1_l181_3 < _zz_when_InterpolationStep1_l181_4));
  assign dataIn_fire_7 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l186 = ((((_zz_when_InterpolationStep1_l186 == 11'h001) && (_zz_when_InterpolationStep1_l186_1 <= _zz_when_InterpolationStep1_l186_3)) && dataIn_fire_7) || (_zz_when_InterpolationStep1_l186_4 < _zz_when_InterpolationStep1_l186_6));
  assign when_InterpolationStep1_l189 = (_zz_when_InterpolationStep1_l189 <= _zz_when_InterpolationStep1_l189_2);
  assign dataIn_fire_8 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l190 = ((((_zz_when_InterpolationStep1_l190 == 11'h0) && (_zz_when_InterpolationStep1_l190_1 <= _zz_when_InterpolationStep1_l190_3)) && dataIn_fire_8) || (_zz_when_InterpolationStep1_l190_4 < _zz_when_InterpolationStep1_l190_6));
  assign dataOut_fire_4 = (dataOut_valid && dataOut_ready);
  assign dataIn_fire_9 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l191 = (((((! (dataOut_fire_4 && oddPixelInEvenRowOutEnable)) && (_zz_when_InterpolationStep1_l191 == 11'h001)) && (_zz_when_InterpolationStep1_l191_1 <= _zz_when_InterpolationStep1_l191_3)) && dataIn_fire_9) || (_zz_when_InterpolationStep1_l191_4 < _zz_when_InterpolationStep1_l191_6));
  assign when_InterpolationStep1_l197 = (frameStart && dataOut_valid);
  assign dataOut_fire_5 = (dataOut_valid && dataOut_ready);
  assign when_InterpolationStep1_l200 = (frameStart && dataOut_fire_5);
  assign dataOut_fire_6 = (dataOut_valid && dataOut_ready);
  assign when_InterpolationStep1_l222 = (_zz_when_InterpolationStep1_l222 <= _zz_when_InterpolationStep1_l222_2);
  assign switch_InterpolationStep1_l223 = (_zz_lineBufferOne_port3 <= _zz_lineBufferOne_port2);
  assign when_InterpolationStep1_l236 = (_zz_when_InterpolationStep1_l236 <= _zz_when_InterpolationStep1_l236_2);
  assign switch_InterpolationStep1_l237 = (_zz_lineBufferTwo_port3 <= _zz_lineBufferTwo_port2);
  assign when_InterpolationStep1_l251 = (preCompare == 2'b01);
  assign when_InterpolationStep1_l252 = (_zz_when_InterpolationStep1_l252 <= _zz_when_InterpolationStep1_l252_2);
  assign when_InterpolationStep1_l256 = (inpThreshold <= _zz_when_InterpolationStep1_l256);
  assign when_InterpolationStep1_l267 = (inpThreshold <= _zz_when_InterpolationStep1_l267);
  assign when_InterpolationStep1_l281 = (inpThreshold <= _zz_when_InterpolationStep1_l281);
  assign when_InterpolationStep1_l292 = (inpThreshold <= _zz_when_InterpolationStep1_l292);
  assign when_InterpolationStep1_l310 = (preCompare == 2'b10);
  assign when_InterpolationStep1_l315 = (preCompare == 2'b00);
  assign when_InterpolationStep1_l316 = (_zz_when_InterpolationStep1_l316 <= _zz_when_InterpolationStep1_l316_2);
  assign switch_InterpolationStep1_l319 = (_zz_lineBufferOne_port15 <= _zz_lineBufferOne_port14);
  assign switch_InterpolationStep1_l332 = (_zz_lineBufferTwo_port15 <= _zz_lineBufferTwo_port14);
  assign when_InterpolationStep1_l357 = (preCompare == 2'b01);
  assign when_InterpolationStep1_l358 = (_zz_when_InterpolationStep1_l358 <= _zz_when_InterpolationStep1_l358_2);
  assign when_InterpolationStep1_l362 = (inpThreshold <= _zz_when_InterpolationStep1_l362);
  assign when_InterpolationStep1_l373 = (inpThreshold <= _zz_when_InterpolationStep1_l373);
  assign when_InterpolationStep1_l387 = (inpThreshold <= _zz_when_InterpolationStep1_l387);
  assign when_InterpolationStep1_l398 = (inpThreshold <= _zz_when_InterpolationStep1_l398);
  assign dataOut_fire_7 = (dataOut_valid && dataOut_ready);
  assign dataOut_fire_8 = (dataOut_valid && dataOut_ready);
  assign when_InterpolationStep1_l419 = (! (willRowEndOutIfFire && dataOut_fire_8));
  assign dataOut_fire_9 = (dataOut_valid && dataOut_ready);
  assign when_InterpolationStep1_l441 = (willRowEndOutIfFire && dataOut_fire_9);
  assign dataIn_fire_10 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l443 = ((_zz_when_InterpolationStep1_l443 <= _zz_when_InterpolationStep1_l443_2) && dataIn_fire_10);
  assign dataIn_fire_11 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l444 = ((_zz_when_InterpolationStep1_l444 <= _zz_when_InterpolationStep1_l444_1) && dataIn_fire_11);
  assign when_InterpolationStep1_l447 = ((_zz_when_InterpolationStep1_l447 <= _zz_when_InterpolationStep1_l447_2) || (_zz_when_InterpolationStep1_l447_3 == _zz_when_InterpolationStep1_l447_4));
  assign dataOut_fire_10 = (dataOut_valid && dataOut_ready);
  assign dataIn_fire_12 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l448 = (((((! (dataOut_fire_10 && evenPixelInOddRowOutEnable)) && (_zz_when_InterpolationStep1_l448 == 11'h0)) && (_zz_when_InterpolationStep1_l448_1 <= _zz_when_InterpolationStep1_l448_2)) && dataIn_fire_12) || (_zz_when_InterpolationStep1_l448_3 < _zz_when_InterpolationStep1_l448_4));
  assign dataIn_fire_13 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l453 = ((((_zz_when_InterpolationStep1_l453 == 11'h001) && (_zz_when_InterpolationStep1_l453_1 <= _zz_when_InterpolationStep1_l453_3)) && dataIn_fire_13) || (_zz_when_InterpolationStep1_l453_4 < _zz_when_InterpolationStep1_l453_6));
  assign when_InterpolationStep1_l456 = ((_zz_when_InterpolationStep1_l456 <= _zz_when_InterpolationStep1_l456_2) || (_zz_when_InterpolationStep1_l456_3 == _zz_when_InterpolationStep1_l456_4));
  assign dataIn_fire_14 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l457 = ((((_zz_when_InterpolationStep1_l457 == 11'h0) && (_zz_when_InterpolationStep1_l457_1 <= _zz_when_InterpolationStep1_l457_3)) && dataIn_fire_14) || (_zz_when_InterpolationStep1_l457_4 < _zz_when_InterpolationStep1_l457_6));
  assign dataOut_fire_11 = (dataOut_valid && dataOut_ready);
  assign dataIn_fire_15 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l458 = (((((! (dataOut_fire_11 && oddPixelInOddRowOutEnable)) && (_zz_when_InterpolationStep1_l458 == 11'h001)) && (_zz_when_InterpolationStep1_l458_1 <= _zz_when_InterpolationStep1_l458_3)) && dataIn_fire_15) || (_zz_when_InterpolationStep1_l458_4 < _zz_when_InterpolationStep1_l458_6));
  assign when_InterpolationStep1_l464 = (evenPixelInOddRowOutEnable && holdEvenPixelStateInOddRow);
  assign when_InterpolationStep1_l465 = (preCompare == 2'b10);
  assign when_InterpolationStep1_l480 = (preCompare == 2'b00);
  assign switch_InterpolationStep1_l483 = (_zz_lineBufferTwo_port28 <= _zz_lineBufferOne_port28);
  assign switch_InterpolationStep1_l495 = (_zz_lineBufferOne_port29 <= _zz_lineBufferTwo_port29);
  assign when_InterpolationStep1_l509 = (preCompare == 2'b01);
  assign switch_InterpolationStep1_l513 = (inpThreshold <= _zz_switch_InterpolationStep1_l513);
  assign switch_InterpolationStep1_l527 = (inpThreshold <= _zz_switch_InterpolationStep1_l527);
  assign switch_InterpolationStep1_l544 = (inpThreshold <= _zz_switch_InterpolationStep1_l544);
  assign switch_InterpolationStep1_l558 = (inpThreshold <= _zz_switch_InterpolationStep1_l558);
  assign when_InterpolationStep1_l580 = (preTwoCompare == 2'b00);
  assign when_InterpolationStep1_l583 = (_zz_lineBufferOne_port41 <= _zz_lineBufferOne_port40);
  assign when_InterpolationStep1_l594 = (_zz_lineBufferTwo_port41 <= _zz_lineBufferTwo_port40);
  assign when_InterpolationStep1_l606 = (preTwoCompare == 2'b01);
  assign when_InterpolationStep1_l609 = (inpThreshold <= _zz_when_InterpolationStep1_l609);
  assign when_InterpolationStep1_l622 = (inpThreshold <= _zz_when_InterpolationStep1_l622);
  assign when_InterpolationStep1_l637 = (preTwoCompare == 2'b00);
  assign when_InterpolationStep1_l640 = (_zz_lineBufferTwo_port47 <= _zz_lineBufferOne_port47);
  assign when_InterpolationStep1_l646 = (_zz_lineBufferOne_port48 <= _zz_lineBufferTwo_port48);
  assign when_InterpolationStep1_l654 = (_zz_lineBufferOne_port49 <= _zz_lineBufferTwo_port49);
  assign when_InterpolationStep1_l660 = (_zz_lineBufferTwo_port50 <= _zz_lineBufferOne_port50);
  assign when_InterpolationStep1_l670 = (preTwoCompare == 2'b01);
  assign when_InterpolationStep1_l674 = (inpThreshold <= _zz_when_InterpolationStep1_l674);
  assign when_InterpolationStep1_l681 = (inpThreshold <= _zz_when_InterpolationStep1_l681);
  assign when_InterpolationStep1_l690 = (inpThreshold <= _zz_when_InterpolationStep1_l690);
  assign when_InterpolationStep1_l697 = (inpThreshold <= _zz_when_InterpolationStep1_l697);
  assign when_InterpolationStep1_l708 = (inpThreshold <= _zz_when_InterpolationStep1_l708);
  assign when_InterpolationStep1_l715 = (inpThreshold <= _zz_when_InterpolationStep1_l715);
  assign when_InterpolationStep1_l724 = (inpThreshold <= _zz_when_InterpolationStep1_l724);
  assign when_InterpolationStep1_l731 = (inpThreshold <= _zz_when_InterpolationStep1_l731);
  assign when_InterpolationStep1_l743 = (preTwoCompare == 2'b10);
  assign when_InterpolationStep1_l744 = (compareMainThreshState && compareCounterThreshState);
  assign when_InterpolationStep1_l747 = (counterDiagDiff <= mainDiagDiff);
  assign when_InterpolationStep1_l754 = (counterDiagDiff <= mainDiagDiff);
  assign when_InterpolationStep1_l764 = (counterDiagDiff <= mainDiagDiff);
  assign when_InterpolationStep1_l771 = (counterDiagDiff <= mainDiagDiff);
  assign dataOut_fire_12 = (dataOut_valid && dataOut_ready);
  assign when_InterpolationStep1_l787 = (_zz_when_InterpolationStep1_l787 < _zz_when_InterpolationStep1_l787_2);
  assign when_InterpolationStep1_l800 = (oddPixelInOddRowOutEnable && holdOddPixelStateInOddRow);
  assign when_InterpolationStep1_l801 = (preTwoCompare == 2'b11);
  assign when_InterpolationStep1_l810 = (preTwoCompare == 2'b00);
  assign when_InterpolationStep1_l813 = (_zz_lineBufferTwo_port73 <= _zz_lineBufferOne_port73);
  assign when_InterpolationStep1_l819 = (_zz_lineBufferOne_port74 <= _zz_lineBufferTwo_port74);
  assign when_InterpolationStep1_l827 = (_zz_lineBufferOne_port75 <= _zz_lineBufferTwo_port75);
  assign when_InterpolationStep1_l833 = (_zz_lineBufferTwo_port76 <= _zz_lineBufferOne_port76);
  assign when_InterpolationStep1_l843 = (preTwoCompare == 2'b01);
  assign when_InterpolationStep1_l847 = (inpThreshold <= _zz_when_InterpolationStep1_l847);
  assign when_InterpolationStep1_l854 = (inpThreshold <= _zz_when_InterpolationStep1_l854);
  assign when_InterpolationStep1_l863 = (inpThreshold <= _zz_when_InterpolationStep1_l863);
  assign when_InterpolationStep1_l870 = (inpThreshold <= _zz_when_InterpolationStep1_l870);
  assign when_InterpolationStep1_l881 = (inpThreshold <= _zz_when_InterpolationStep1_l881);
  assign when_InterpolationStep1_l888 = (inpThreshold <= _zz_when_InterpolationStep1_l888);
  assign when_InterpolationStep1_l897 = (inpThreshold <= _zz_when_InterpolationStep1_l897);
  assign when_InterpolationStep1_l904 = (inpThreshold <= _zz_when_InterpolationStep1_l904);
  assign when_InterpolationStep1_l916 = (preTwoCompare == 2'b10);
  assign when_InterpolationStep1_l917 = (compareMainThreshState && compareCounterThreshState);
  assign when_InterpolationStep1_l920 = (counterDiagDiff <= mainDiagDiff);
  assign when_InterpolationStep1_l927 = (counterDiagDiff <= mainDiagDiff);
  assign when_InterpolationStep1_l937 = (counterDiagDiff <= mainDiagDiff);
  assign when_InterpolationStep1_l944 = (counterDiagDiff <= mainDiagDiff);
  assign when_InterpolationStep1_l968 = (preCompare == 2'b00);
  assign switch_InterpolationStep1_l971 = (_zz_lineBufferTwo_port100 <= _zz_lineBufferOne_port100);
  assign switch_InterpolationStep1_l983 = (_zz_lineBufferOne_port101 <= _zz_lineBufferTwo_port101);
  assign when_InterpolationStep1_l997 = (preCompare == 2'b01);
  assign switch_InterpolationStep1_l1001 = (inpThreshold <= _zz_switch_InterpolationStep1_l1001);
  assign switch_InterpolationStep1_l1015 = (inpThreshold <= _zz_switch_InterpolationStep1_l1015);
  assign switch_InterpolationStep1_l1032 = (inpThreshold <= _zz_switch_InterpolationStep1_l1032);
  assign switch_InterpolationStep1_l1046 = (inpThreshold <= _zz_switch_InterpolationStep1_l1046);
  assign dataOut_fire_13 = (dataOut_valid && dataOut_ready);
  assign dataOut_fire_14 = (dataOut_valid && dataOut_ready);
  assign when_InterpolationStep1_l1072 = (! (willRowEndOutIfFire && dataOut_fire_14));
  assign when_StateMachine_l245 = ((! (inpStateMachine_stateReg == inpStateMachine_enumDef_EVEN)) && (inpStateMachine_stateNext == inpStateMachine_enumDef_EVEN));
  assign when_InterpolationStep1_l160 = (outRowCount_value != 11'h0);
  assign when_InterpolationStep1_l162 = (bufferRowCount_value != bmpHeight);
  assign dataIn_fire_16 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l166 = (((_zz_when_InterpolationStep1_l166 <= _zz_when_InterpolationStep1_l166_2) || ((bufferWAddr_value == 10'h0) && dataIn_fire_16)) || (10'h0 < bufferWAddr_value));
  assign when_StateMachine_l245_1 = ((! (inpStateMachine_stateReg == inpStateMachine_enumDef_ODD)) && (inpStateMachine_stateNext == inpStateMachine_enumDef_ODD));
  assign dataIn_fire_17 = (dataIn_valid && dataIn_ready);
  assign when_InterpolationStep1_l432 = (((_zz_when_InterpolationStep1_l432 <= _zz_when_InterpolationStep1_l432_2) || ((bufferWAddr_value == 10'h0) && dataIn_fire_17)) || (10'h0 < bufferWAddr_value));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      frameStart <= 1'b0;
      slaveStart <= 1'b0;
      inpThreshold <= 8'h80;
      holdBuffer <= 1'b0;
      interComplete <= 1'b0;
      sameBuffer <= 1'b0;
      bufferRowCount_value <= 10'h0;
      bufferSwitch <= 1'b0;
      bufferEnable <= 1'b0;
      nextRowBuffer <= 1'b1;
      bufferWAddr_value <= 10'h0;
      outPixelAddr_value <= 11'h0;
      bmpWidth <= 10'h3c0;
      bmpHeight <= 10'h21c;
      outRowCount_value <= 11'h0;
      evenPixelInEvenRowOutEnable <= 1'b0;
      oddPixelInEvenRowOutEnable <= 1'b0;
      evenPixelInOddRowOutEnable <= 1'b0;
      oddPixelInOddRowOutEnable <= 1'b0;
      leftBufferAddr <= 10'h0;
      rightBufferAddr <= 10'h001;
      retPixel <= 8'h0;
      retOddPixelInOddRow <= 8'h0;
      preCompare <= 2'b00;
      comparePixelState <= 1'b0;
      compareThreshState <= 1'b0;
      preTwoCompare <= 2'b00;
      compareMainPixelState <= 1'b0;
      compareCounterPixelState <= 1'b0;
      compareMainThreshState <= 1'b0;
      compareCounterThreshState <= 1'b0;
      holdEvenPixelStateInOddRow <= 1'b0;
      holdOddPixelStateInOddRow <= 1'b0;
      willRowEndOutIfFire <= 1'b0;
      willCompleteIfRowEnd <= 1'b0;
      mainDiagDiff <= 8'h0;
      counterDiagDiff <= 8'h0;
      inpStateMachine_stateReg <= inpStateMachine_enumDef_BOOT;
    end else begin
      if(frameStartIn) begin
        frameStart <= 1'b1;
      end
      if(when_InterpolationStep1_l49) begin
        slaveStart <= 1'b1;
      end
      if(inpTwoCompleteIn) begin
        slaveStart <= 1'b0;
      end
      inpThreshold <= thresholdIn;
      if(when_InterpolationStep1_l55) begin
        holdBuffer <= 1'b0;
      end
      if(inpThreeCompleteIn) begin
        interComplete <= 1'b1;
      end
      if(when_InterpolationStep1_l58) begin
        interComplete <= 1'b0;
      end
      if(when_InterpolationStep1_l61) begin
        sameBuffer <= 1'b0;
      end
      bufferRowCount_value <= bufferRowCount_valueNext;
      if(when_InterpolationStep1_l67) begin
        bufferSwitch <= 1'b0;
      end
      if(when_InterpolationStep1_l70) begin
        bufferEnable <= 1'b1;
      end
      if(when_InterpolationStep1_l73) begin
        nextRowBuffer <= 1'b1;
      end
      bufferWAddr_value <= bufferWAddr_valueNext;
      outPixelAddr_value <= outPixelAddr_valueNext;
      bmpWidth <= widthIn;
      bmpHeight <= heightIn;
      outRowCount_value <= outRowCount_valueNext;
      if(when_InterpolationStep1_l121) begin
        willRowEndOutIfFire <= 1'b1;
      end
      if(when_InterpolationStep1_l122) begin
        willCompleteIfRowEnd <= 1'b1;
      end
      if(when_InterpolationStep1_l129) begin
        holdBuffer <= 1'b1;
        sameBuffer <= 1'b1;
      end
      if(when_InterpolationStep1_l137) begin
        bufferSwitch <= (! bufferSwitch);
      end
      if(when_InterpolationStep1_l140) begin
        bufferEnable <= 1'b0;
      end
      if(dataOut_fire_1) begin
        if(willRowEndOutIfFire) begin
          willRowEndOutIfFire <= 1'b0;
          if(willCompleteIfRowEnd) begin
            sameBuffer <= 1'b0;
            willCompleteIfRowEnd <= 1'b0;
          end
        end
      end
      if(interComplete) begin
        interComplete <= 1'b0;
      end
      inpStateMachine_stateReg <= inpStateMachine_stateNext;
      case(inpStateMachine_stateReg)
        inpStateMachine_enumDef_EVEN : begin
          if(when_InterpolationStep1_l180) begin
            evenPixelInEvenRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l181) begin
            evenPixelInEvenRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l186) begin
            evenPixelInEvenRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l189) begin
            oddPixelInEvenRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l190) begin
            oddPixelInEvenRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l191) begin
            oddPixelInEvenRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l200) begin
            frameStart <= 1'b0;
          end
          if(evenPixelInEvenRowOutEnable) begin
            if(dataOut_fire_6) begin
              evenPixelInEvenRowOutEnable <= 1'b0;
              leftBufferAddr <= _zz_leftBufferAddr[9:0];
              rightBufferAddr <= _zz_rightBufferAddr[9:0];
            end
            if(oddPixelInEvenRowOutEnable) begin
              case(nextRowBuffer)
                1'b1 : begin
                  if(when_InterpolationStep1_l222) begin
                    case(switch_InterpolationStep1_l223)
                      1'b1 : begin
                        comparePixelState <= 1'b1;
                        preCompare <= {1'd0, _zz_preCompare};
                      end
                      default : begin
                        comparePixelState <= 1'b0;
                        preCompare <= {1'd0, _zz_preCompare_1};
                      end
                    endcase
                  end
                end
                default : begin
                  if(when_InterpolationStep1_l236) begin
                    case(switch_InterpolationStep1_l237)
                      1'b1 : begin
                        comparePixelState <= 1'b1;
                        preCompare <= {1'd0, _zz_preCompare_2};
                      end
                      default : begin
                        comparePixelState <= 1'b0;
                        preCompare <= {1'd0, _zz_preCompare_3};
                      end
                    endcase
                  end
                end
              endcase
              if(when_InterpolationStep1_l251) begin
                if(when_InterpolationStep1_l252) begin
                  if(comparePixelState) begin
                    case(nextRowBuffer)
                      1'b1 : begin
                        if(when_InterpolationStep1_l256) begin
                          compareThreshState <= 1'b1;
                          preCompare <= 2'b10;
                          retPixel <= _zz_lineBufferOne_port6;
                        end else begin
                          compareThreshState <= 1'b0;
                          preCompare <= 2'b10;
                          retPixel <= _zz_retPixel[7:0];
                        end
                      end
                      default : begin
                        if(when_InterpolationStep1_l267) begin
                          compareThreshState <= 1'b1;
                          preCompare <= 2'b10;
                          retPixel <= _zz_lineBufferTwo_port6;
                        end else begin
                          compareThreshState <= 1'b0;
                          preCompare <= 2'b10;
                          retPixel <= _zz_retPixel_2[7:0];
                        end
                      end
                    endcase
                  end else begin
                    case(nextRowBuffer)
                      1'b1 : begin
                        if(when_InterpolationStep1_l281) begin
                          compareThreshState <= 1'b1;
                          preCompare <= 2'b10;
                          retPixel <= _zz_lineBufferOne_port11;
                        end else begin
                          compareThreshState <= 1'b0;
                          preCompare <= 2'b10;
                          retPixel <= _zz_retPixel_4[7:0];
                        end
                      end
                      default : begin
                        if(when_InterpolationStep1_l292) begin
                          compareThreshState <= 1'b1;
                          preCompare <= 2'b10;
                          retPixel <= _zz_lineBufferTwo_port11;
                        end else begin
                          compareThreshState <= 1'b0;
                          preCompare <= 2'b10;
                          retPixel <= _zz_retPixel_6[7:0];
                        end
                      end
                    endcase
                  end
                end
              end
            end
          end else begin
            if(oddPixelInEvenRowOutEnable) begin
              if(!when_InterpolationStep1_l310) begin
                if(when_InterpolationStep1_l315) begin
                  if(when_InterpolationStep1_l316) begin
                    case(nextRowBuffer)
                      1'b1 : begin
                        case(switch_InterpolationStep1_l319)
                          1'b1 : begin
                            comparePixelState <= 1'b1;
                            preCompare <= {1'd0, _zz_preCompare_4};
                          end
                          default : begin
                            comparePixelState <= 1'b0;
                            preCompare <= {1'd0, _zz_preCompare_5};
                          end
                        endcase
                      end
                      default : begin
                        case(switch_InterpolationStep1_l332)
                          1'b1 : begin
                            comparePixelState <= 1'b1;
                            preCompare <= {1'd0, _zz_preCompare_6};
                          end
                          default : begin
                            comparePixelState <= 1'b0;
                            preCompare <= {1'd0, _zz_preCompare_7};
                          end
                        endcase
                      end
                    endcase
                  end
                end
                if(when_InterpolationStep1_l357) begin
                  if(when_InterpolationStep1_l358) begin
                    if(comparePixelState) begin
                      case(nextRowBuffer)
                        1'b1 : begin
                          if(when_InterpolationStep1_l362) begin
                            compareThreshState <= 1'b1;
                            preCompare <= 2'b10;
                            retPixel <= _zz_lineBufferOne_port19;
                          end else begin
                            compareThreshState <= 1'b0;
                            preCompare <= 2'b10;
                            retPixel <= _zz_retPixel_8[7:0];
                          end
                        end
                        default : begin
                          if(when_InterpolationStep1_l373) begin
                            compareThreshState <= 1'b1;
                            preCompare <= 2'b10;
                            retPixel <= _zz_lineBufferTwo_port19;
                          end else begin
                            compareThreshState <= 1'b0;
                            preCompare <= 2'b10;
                            retPixel <= _zz_retPixel_10[7:0];
                          end
                        end
                      endcase
                    end else begin
                      case(nextRowBuffer)
                        1'b1 : begin
                          if(when_InterpolationStep1_l387) begin
                            compareThreshState <= 1'b1;
                            preCompare <= 2'b10;
                            retPixel <= _zz_lineBufferOne_port24;
                          end else begin
                            compareThreshState <= 1'b0;
                            preCompare <= 2'b10;
                            retPixel <= _zz_retPixel_12[7:0];
                          end
                        end
                        default : begin
                          if(when_InterpolationStep1_l398) begin
                            compareThreshState <= 1'b1;
                            preCompare <= 2'b10;
                            retPixel <= _zz_lineBufferTwo_port24;
                          end else begin
                            compareThreshState <= 1'b0;
                            preCompare <= 2'b10;
                            retPixel <= _zz_retPixel_14[7:0];
                          end
                        end
                      endcase
                    end
                  end
                end
              end
              if(dataOut_fire_7) begin
                oddPixelInEvenRowOutEnable <= 1'b0;
                preCompare <= 2'b00;
                comparePixelState <= 1'b0;
                compareThreshState <= 1'b0;
                if(when_InterpolationStep1_l419) begin
                  leftBufferAddr <= _zz_leftBufferAddr_1[9:0];
                  rightBufferAddr <= _zz_rightBufferAddr_2[9:0];
                end
              end else begin
                evenPixelInEvenRowOutEnable <= 1'b0;
              end
            end
          end
        end
        inpStateMachine_enumDef_ODD : begin
          if(when_InterpolationStep1_l443) begin
            evenPixelInOddRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l444) begin
            oddPixelInOddRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l447) begin
            evenPixelInOddRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l448) begin
            evenPixelInOddRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l453) begin
            evenPixelInOddRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l456) begin
            oddPixelInOddRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l457) begin
            oddPixelInOddRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l458) begin
            oddPixelInOddRowOutEnable <= 1'b1;
          end
          if(when_InterpolationStep1_l464) begin
            if(!when_InterpolationStep1_l465) begin
              if(!sameBuffer) begin
                if(when_InterpolationStep1_l480) begin
                  case(nextRowBuffer)
                    1'b1 : begin
                      case(switch_InterpolationStep1_l483)
                        1'b1 : begin
                          comparePixelState <= 1'b1;
                          preCompare <= {1'd0, _zz_preCompare_8};
                        end
                        default : begin
                          comparePixelState <= 1'b0;
                          preCompare <= {1'd0, _zz_preCompare_9};
                        end
                      endcase
                    end
                    default : begin
                      case(switch_InterpolationStep1_l495)
                        1'b1 : begin
                          comparePixelState <= 1'b1;
                          preCompare <= {1'd0, _zz_preCompare_10};
                        end
                        default : begin
                          comparePixelState <= 1'b0;
                          preCompare <= {1'd0, _zz_preCompare_11};
                        end
                      endcase
                    end
                  endcase
                end
                if(when_InterpolationStep1_l509) begin
                  if(comparePixelState) begin
                    case(nextRowBuffer)
                      1'b1 : begin
                        case(switch_InterpolationStep1_l513)
                          1'b1 : begin
                            compareThreshState <= 1'b1;
                            preCompare <= 2'b10;
                            retPixel <= _zz_lineBufferOne_port31;
                          end
                          default : begin
                            compareThreshState <= 1'b0;
                            preCompare <= 2'b10;
                            retPixel <= _zz_retPixel_16[7:0];
                          end
                        endcase
                      end
                      default : begin
                        case(switch_InterpolationStep1_l527)
                          1'b1 : begin
                            compareThreshState <= 1'b1;
                            preCompare <= 2'b10;
                            retPixel <= _zz_lineBufferTwo_port33;
                          end
                          default : begin
                            compareThreshState <= 1'b0;
                            preCompare <= 2'b10;
                            retPixel <= _zz_retPixel_18[7:0];
                          end
                        endcase
                      end
                    endcase
                  end else begin
                    case(nextRowBuffer)
                      1'b1 : begin
                        case(switch_InterpolationStep1_l544)
                          1'b1 : begin
                            compareThreshState <= 1'b1;
                            preCompare <= 2'b10;
                            retPixel <= _zz_lineBufferOne_port36;
                          end
                          default : begin
                            compareThreshState <= 1'b0;
                            preCompare <= 2'b10;
                            retPixel <= _zz_retPixel_20[7:0];
                          end
                        endcase
                      end
                      default : begin
                        case(switch_InterpolationStep1_l558)
                          1'b1 : begin
                            compareThreshState <= 1'b1;
                            preCompare <= 2'b10;
                            retPixel <= _zz_lineBufferTwo_port38;
                          end
                          default : begin
                            compareThreshState <= 1'b0;
                            preCompare <= 2'b10;
                            retPixel <= _zz_retPixel_22[7:0];
                          end
                        endcase
                      end
                    endcase
                  end
                end
              end
            end
            if(oddPixelInOddRowOutEnable) begin
              if(sameBuffer) begin
                if(when_InterpolationStep1_l580) begin
                  case(nextRowBuffer)
                    1'b1 : begin
                      if(when_InterpolationStep1_l583) begin
                        compareMainPixelState <= 1'b1;
                        compareCounterPixelState <= 1'b1;
                        preTwoCompare <= {1'd0, _zz_preTwoCompare};
                      end else begin
                        compareMainPixelState <= 1'b0;
                        compareCounterPixelState <= 1'b0;
                        preTwoCompare <= {1'd0, _zz_preTwoCompare_1};
                      end
                    end
                    default : begin
                      if(when_InterpolationStep1_l594) begin
                        compareMainPixelState <= 1'b1;
                        compareCounterPixelState <= 1'b1;
                        preTwoCompare <= {1'd0, _zz_preTwoCompare_2};
                      end else begin
                        compareMainPixelState <= 1'b0;
                        compareCounterPixelState <= 1'b0;
                        preTwoCompare <= {1'd0, _zz_preTwoCompare_3};
                      end
                    end
                  endcase
                end
                if(when_InterpolationStep1_l606) begin
                  case(nextRowBuffer)
                    1'b1 : begin
                      if(when_InterpolationStep1_l609) begin
                        compareMainThreshState <= 1'b1;
                        compareCounterThreshState <= 1'b1;
                        preTwoCompare <= 2'b11;
                        retOddPixelInOddRow <= _zz_lineBufferOne_port44;
                      end else begin
                        compareMainThreshState <= 1'b0;
                        compareCounterThreshState <= 1'b0;
                        preTwoCompare <= 2'b11;
                        retOddPixelInOddRow <= _zz_retOddPixelInOddRow[7:0];
                      end
                    end
                    default : begin
                      if(when_InterpolationStep1_l622) begin
                        compareMainThreshState <= 1'b1;
                        compareCounterThreshState <= 1'b1;
                        preTwoCompare <= 2'b11;
                        retOddPixelInOddRow <= _zz_lineBufferTwo_port44;
                      end else begin
                        compareMainThreshState <= 1'b0;
                        compareCounterThreshState <= 1'b0;
                        preTwoCompare <= 2'b11;
                        retOddPixelInOddRow <= _zz_retOddPixelInOddRow_2[7:0];
                      end
                    end
                  endcase
                end
              end else begin
                if(when_InterpolationStep1_l637) begin
                  case(nextRowBuffer)
                    1'b1 : begin
                      if(when_InterpolationStep1_l640) begin
                        compareMainPixelState <= 1'b1;
                      end else begin
                        compareMainPixelState <= 1'b0;
                      end
                      if(when_InterpolationStep1_l646) begin
                        compareCounterPixelState <= 1'b1;
                      end else begin
                        compareCounterPixelState <= 1'b0;
                      end
                      preTwoCompare <= {1'd0, _zz_preTwoCompare_4};
                    end
                    default : begin
                      if(when_InterpolationStep1_l654) begin
                        compareMainPixelState <= 1'b1;
                      end else begin
                        compareMainPixelState <= 1'b0;
                      end
                      if(when_InterpolationStep1_l660) begin
                        compareCounterPixelState <= 1'b1;
                      end else begin
                        compareCounterPixelState <= 1'b0;
                      end
                      preTwoCompare <= {1'd0, _zz_preTwoCompare_5};
                    end
                  endcase
                end
                if(when_InterpolationStep1_l670) begin
                  case(nextRowBuffer)
                    1'b1 : begin
                      if(compareMainPixelState) begin
                        if(when_InterpolationStep1_l674) begin
                          compareMainThreshState <= 1'b1;
                        end else begin
                          compareMainThreshState <= 1'b0;
                        end
                        mainDiagDiff <= (_zz_lineBufferOne_port52 - _zz_lineBufferTwo_port52);
                      end else begin
                        if(when_InterpolationStep1_l681) begin
                          compareMainThreshState <= 1'b1;
                        end else begin
                          compareMainThreshState <= 1'b0;
                        end
                        mainDiagDiff <= (_zz_lineBufferTwo_port54 - _zz_lineBufferOne_port54);
                      end
                      if(compareCounterPixelState) begin
                        if(when_InterpolationStep1_l690) begin
                          compareCounterThreshState <= 1'b1;
                        end else begin
                          compareCounterThreshState <= 1'b0;
                        end
                        counterDiagDiff <= (_zz_lineBufferTwo_port56 - _zz_lineBufferOne_port56);
                      end else begin
                        if(when_InterpolationStep1_l697) begin
                          compareCounterThreshState <= 1'b1;
                        end else begin
                          compareCounterThreshState <= 1'b0;
                        end
                        counterDiagDiff <= (_zz_lineBufferOne_port58 - _zz_lineBufferTwo_port58);
                      end
                      preTwoCompare <= 2'b10;
                    end
                    default : begin
                      if(compareMainPixelState) begin
                        if(when_InterpolationStep1_l708) begin
                          compareMainThreshState <= 1'b1;
                        end else begin
                          compareMainThreshState <= 1'b0;
                        end
                        mainDiagDiff <= (_zz_lineBufferTwo_port60 - _zz_lineBufferOne_port60);
                      end else begin
                        if(when_InterpolationStep1_l715) begin
                          compareMainThreshState <= 1'b1;
                        end else begin
                          compareMainThreshState <= 1'b0;
                        end
                        mainDiagDiff <= (_zz_lineBufferOne_port62 - _zz_lineBufferTwo_port62);
                      end
                      if(compareCounterPixelState) begin
                        if(when_InterpolationStep1_l724) begin
                          compareCounterThreshState <= 1'b1;
                        end else begin
                          compareCounterThreshState <= 1'b0;
                        end
                        counterDiagDiff <= (_zz_lineBufferOne_port64 - _zz_lineBufferTwo_port64);
                      end else begin
                        if(when_InterpolationStep1_l731) begin
                          compareCounterThreshState <= 1'b1;
                        end else begin
                          compareCounterThreshState <= 1'b0;
                        end
                        counterDiagDiff <= (_zz_lineBufferTwo_port66 - _zz_lineBufferOne_port66);
                      end
                      preTwoCompare <= 2'b10;
                    end
                  endcase
                end
                if(when_InterpolationStep1_l743) begin
                  if(when_InterpolationStep1_l744) begin
                    case(nextRowBuffer)
                      1'b1 : begin
                        if(when_InterpolationStep1_l747) begin
                          retOddPixelInOddRow <= _zz_lineBufferOne_port67;
                        end else begin
                          retOddPixelInOddRow <= _zz_lineBufferTwo_port67;
                        end
                      end
                      default : begin
                        if(when_InterpolationStep1_l754) begin
                          retOddPixelInOddRow <= _zz_lineBufferTwo_port68;
                        end else begin
                          retOddPixelInOddRow <= _zz_lineBufferOne_port68;
                        end
                      end
                    endcase
                  end else begin
                    case(nextRowBuffer)
                      1'b1 : begin
                        if(when_InterpolationStep1_l764) begin
                          retOddPixelInOddRow <= _zz_retOddPixelInOddRow_4[7:0];
                        end else begin
                          retOddPixelInOddRow <= _zz_retOddPixelInOddRow_6[7:0];
                        end
                      end
                      default : begin
                        if(when_InterpolationStep1_l771) begin
                          retOddPixelInOddRow <= _zz_retOddPixelInOddRow_8[7:0];
                        end else begin
                          retOddPixelInOddRow <= _zz_retOddPixelInOddRow_10[7:0];
                        end
                      end
                    endcase
                  end
                  preTwoCompare <= 2'b11;
                end
              end
            end
            if(dataOut_fire_12) begin
              evenPixelInOddRowOutEnable <= 1'b0;
              leftBufferAddr <= _zz_leftBufferAddr_3[9:0];
              if(when_InterpolationStep1_l787) begin
                rightBufferAddr <= _zz_rightBufferAddr_4[9:0];
              end else begin
                rightBufferAddr <= _zz_rightBufferAddr_5[9:0];
              end
              preCompare <= 2'b00;
              comparePixelState <= 1'b0;
              compareThreshState <= 1'b0;
              holdEvenPixelStateInOddRow <= 1'b0;
              holdOddPixelStateInOddRow <= 1'b1;
            end
          end
          if(when_InterpolationStep1_l800) begin
            if(!when_InterpolationStep1_l801) begin
              if(when_InterpolationStep1_l810) begin
                case(nextRowBuffer)
                  1'b1 : begin
                    if(when_InterpolationStep1_l813) begin
                      compareMainPixelState <= 1'b1;
                    end else begin
                      compareMainPixelState <= 1'b0;
                    end
                    if(when_InterpolationStep1_l819) begin
                      compareCounterPixelState <= 1'b1;
                    end else begin
                      compareCounterPixelState <= 1'b0;
                    end
                    preTwoCompare <= {1'd0, _zz_preTwoCompare_6};
                  end
                  default : begin
                    if(when_InterpolationStep1_l827) begin
                      compareMainPixelState <= 1'b1;
                    end else begin
                      compareMainPixelState <= 1'b0;
                    end
                    if(when_InterpolationStep1_l833) begin
                      compareCounterPixelState <= 1'b1;
                    end else begin
                      compareCounterPixelState <= 1'b0;
                    end
                    preTwoCompare <= {1'd0, _zz_preTwoCompare_7};
                  end
                endcase
              end
              if(when_InterpolationStep1_l843) begin
                case(nextRowBuffer)
                  1'b1 : begin
                    if(compareMainPixelState) begin
                      if(when_InterpolationStep1_l847) begin
                        compareMainThreshState <= 1'b1;
                      end else begin
                        compareMainThreshState <= 1'b0;
                      end
                      mainDiagDiff <= (_zz_lineBufferOne_port78 - _zz_lineBufferTwo_port78);
                    end else begin
                      if(when_InterpolationStep1_l854) begin
                        compareMainThreshState <= 1'b1;
                      end else begin
                        compareMainThreshState <= 1'b0;
                      end
                      mainDiagDiff <= (_zz_lineBufferTwo_port80 - _zz_lineBufferOne_port80);
                    end
                    if(compareCounterPixelState) begin
                      if(when_InterpolationStep1_l863) begin
                        compareCounterThreshState <= 1'b1;
                      end else begin
                        compareCounterThreshState <= 1'b0;
                      end
                      counterDiagDiff <= (_zz_lineBufferTwo_port82 - _zz_lineBufferOne_port82);
                    end else begin
                      if(when_InterpolationStep1_l870) begin
                        compareCounterThreshState <= 1'b1;
                      end else begin
                        compareCounterThreshState <= 1'b0;
                      end
                      counterDiagDiff <= (_zz_lineBufferOne_port84 - _zz_lineBufferTwo_port84);
                    end
                    preTwoCompare <= 2'b10;
                  end
                  default : begin
                    if(compareMainPixelState) begin
                      if(when_InterpolationStep1_l881) begin
                        compareMainThreshState <= 1'b1;
                      end else begin
                        compareMainThreshState <= 1'b0;
                      end
                      mainDiagDiff <= (_zz_lineBufferTwo_port86 - _zz_lineBufferOne_port86);
                    end else begin
                      if(when_InterpolationStep1_l888) begin
                        compareMainThreshState <= 1'b1;
                      end else begin
                        compareMainThreshState <= 1'b0;
                      end
                      mainDiagDiff <= (_zz_lineBufferOne_port88 - _zz_lineBufferTwo_port88);
                    end
                    if(compareCounterPixelState) begin
                      if(when_InterpolationStep1_l897) begin
                        compareCounterThreshState <= 1'b1;
                      end else begin
                        compareCounterThreshState <= 1'b0;
                      end
                      counterDiagDiff <= (_zz_lineBufferOne_port90 - _zz_lineBufferTwo_port90);
                    end else begin
                      if(when_InterpolationStep1_l904) begin
                        compareCounterThreshState <= 1'b1;
                      end else begin
                        compareCounterThreshState <= 1'b0;
                      end
                      counterDiagDiff <= (_zz_lineBufferTwo_port92 - _zz_lineBufferOne_port92);
                    end
                    preTwoCompare <= 2'b10;
                  end
                endcase
              end
              if(when_InterpolationStep1_l916) begin
                if(when_InterpolationStep1_l917) begin
                  case(nextRowBuffer)
                    1'b1 : begin
                      if(when_InterpolationStep1_l920) begin
                        retOddPixelInOddRow <= _zz_lineBufferOne_port93;
                      end else begin
                        retOddPixelInOddRow <= _zz_lineBufferTwo_port93;
                      end
                    end
                    default : begin
                      if(when_InterpolationStep1_l927) begin
                        retOddPixelInOddRow <= _zz_lineBufferTwo_port94;
                      end else begin
                        retOddPixelInOddRow <= _zz_lineBufferOne_port94;
                      end
                    end
                  endcase
                end else begin
                  case(nextRowBuffer)
                    1'b1 : begin
                      if(when_InterpolationStep1_l937) begin
                        retOddPixelInOddRow <= _zz_retOddPixelInOddRow_12[7:0];
                      end else begin
                        retOddPixelInOddRow <= _zz_retOddPixelInOddRow_14[7:0];
                      end
                    end
                    default : begin
                      if(when_InterpolationStep1_l944) begin
                        retOddPixelInOddRow <= _zz_retOddPixelInOddRow_16[7:0];
                      end else begin
                        retOddPixelInOddRow <= _zz_retOddPixelInOddRow_18[7:0];
                      end
                    end
                  endcase
                end
                preTwoCompare <= 2'b11;
              end
            end
            if(evenPixelInOddRowOutEnable) begin
              if(sameBuffer) begin
                case(nextRowBuffer)
                  1'b1 : begin
                    retPixel <= _zz_lineBufferOne_port99;
                  end
                  default : begin
                    retPixel <= _zz_lineBufferTwo_port99;
                  end
                endcase
                preCompare <= 2'b10;
              end else begin
                if(when_InterpolationStep1_l968) begin
                  case(nextRowBuffer)
                    1'b1 : begin
                      case(switch_InterpolationStep1_l971)
                        1'b1 : begin
                          comparePixelState <= 1'b1;
                          preCompare <= {1'd0, _zz_preCompare_12};
                        end
                        default : begin
                          comparePixelState <= 1'b0;
                          preCompare <= {1'd0, _zz_preCompare_13};
                        end
                      endcase
                    end
                    default : begin
                      case(switch_InterpolationStep1_l983)
                        1'b1 : begin
                          comparePixelState <= 1'b1;
                          preCompare <= {1'd0, _zz_preCompare_14};
                        end
                        default : begin
                          comparePixelState <= 1'b0;
                          preCompare <= {1'd0, _zz_preCompare_15};
                        end
                      endcase
                    end
                  endcase
                end
                if(when_InterpolationStep1_l997) begin
                  if(comparePixelState) begin
                    case(nextRowBuffer)
                      1'b1 : begin
                        case(switch_InterpolationStep1_l1001)
                          1'b1 : begin
                            compareThreshState <= 1'b1;
                            preCompare <= 2'b10;
                            retPixel <= _zz_lineBufferOne_port103;
                          end
                          default : begin
                            compareThreshState <= 1'b0;
                            preCompare <= 2'b10;
                            retPixel <= _zz_retPixel_24[7:0];
                          end
                        endcase
                      end
                      default : begin
                        case(switch_InterpolationStep1_l1015)
                          1'b1 : begin
                            compareThreshState <= 1'b1;
                            preCompare <= 2'b10;
                            retPixel <= _zz_lineBufferTwo_port105;
                          end
                          default : begin
                            compareThreshState <= 1'b0;
                            preCompare <= 2'b10;
                            retPixel <= _zz_retPixel_26[7:0];
                          end
                        endcase
                      end
                    endcase
                  end else begin
                    case(nextRowBuffer)
                      1'b1 : begin
                        case(switch_InterpolationStep1_l1032)
                          1'b1 : begin
                            compareThreshState <= 1'b1;
                            preCompare <= 2'b10;
                            retPixel <= _zz_lineBufferOne_port108;
                          end
                          default : begin
                            compareThreshState <= 1'b0;
                            preCompare <= 2'b10;
                            retPixel <= _zz_retPixel_28[7:0];
                          end
                        endcase
                      end
                      default : begin
                        case(switch_InterpolationStep1_l1046)
                          1'b1 : begin
                            compareThreshState <= 1'b1;
                            preCompare <= 2'b10;
                            retPixel <= _zz_lineBufferTwo_port110;
                          end
                          default : begin
                            compareThreshState <= 1'b0;
                            preCompare <= 2'b10;
                            retPixel <= _zz_retPixel_30[7:0];
                          end
                        endcase
                      end
                    endcase
                  end
                end
              end
            end
            if(dataOut_fire_13) begin
              oddPixelInOddRowOutEnable <= 1'b0;
              preTwoCompare <= 2'b00;
              compareMainPixelState <= 1'b0;
              compareCounterPixelState <= 1'b0;
              compareMainThreshState <= 1'b0;
              compareCounterThreshState <= 1'b0;
              if(when_InterpolationStep1_l1072) begin
                leftBufferAddr <= _zz_leftBufferAddr_4[9:0];
                rightBufferAddr <= _zz_rightBufferAddr_7[9:0];
              end
              holdOddPixelStateInOddRow <= 1'b0;
              holdEvenPixelStateInOddRow <= 1'b1;
            end
          end
        end
        default : begin
        end
      endcase
      if(when_StateMachine_l245) begin
        if(when_InterpolationStep1_l160) begin
          nextRowBuffer <= (! nextRowBuffer);
          if(when_InterpolationStep1_l162) begin
            bufferEnable <= 1'b1;
          end
        end
        if(when_InterpolationStep1_l166) begin
          evenPixelInEvenRowOutEnable <= 1'b1;
        end
        evenPixelInOddRowOutEnable <= 1'b0;
        oddPixelInOddRowOutEnable <= 1'b0;
        leftBufferAddr <= 10'h0;
        rightBufferAddr <= 10'h001;
        preCompare <= 2'b00;
      end
      if(when_StateMachine_l245_1) begin
        oddPixelInEvenRowOutEnable <= 1'b0;
        evenPixelInEvenRowOutEnable <= 1'b0;
        if(when_InterpolationStep1_l432) begin
          evenPixelInOddRowOutEnable <= 1'b1;
        end
        leftBufferAddr <= 10'h0;
        rightBufferAddr <= 10'h001;
        holdEvenPixelStateInOddRow <= 1'b1;
      end
    end
  end

  always @(posedge clk) begin
    StartIn_regNext <= StartIn;
    StartIn_regNext_1 <= StartIn;
    StartIn_regNext_2 <= StartIn;
    StartIn_regNext_3 <= StartIn;
    StartIn_regNext_4 <= StartIn;
    StartIn_regNext_5 <= StartIn;
  end


endmodule
