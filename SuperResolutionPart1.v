// Generator : SpinalHDL v1.7.0b    git head : 541894e01cf6b5ef03f924225e4f769fb167dea8
// Component : SuperResolutionPart1
// Git hash  : e7ffd1bea239a06a9b6254e74a69a781a1c27788

`timescale 1ns/1ps

module SuperResolutionPart1 (
  input               dataIn_valid,
  output reg          dataIn_ready,
  input      [7:0]    dataIn_payload,
  input               StartIn,
  input               frameStartIn,
  input               rowEndIn,
  input               inpTwoCompleteIn,
  input               inpThreeCompleteIn,
  output              dataOut_valid,
  input               dataOut_ready,
  output     [7:0]    dataOut_payload,
  output              startOut,
  output reg          frameStartOut,
  output              rowEndOut,
  output              inpValidOut,
  output              inpCompleteOut,
  input      [7:0]    thresholdIn,
  input      [9:0]    widthIn,
  input      [9:0]    heightIn,
  input               clk,
  input               reset
);

  wire       [9:0]    _zz_bufferRowCount_valueNext;
  wire       [0:0]    _zz_bufferRowCount_valueNext_1;
  wire       [9:0]    _zz_bufferWAddr_valueNext;
  wire       [0:0]    _zz_bufferWAddr_valueNext_1;
  wire       [10:0]   _zz_outPixelAddr_valueNext;
  wire       [0:0]    _zz_outPixelAddr_valueNext_1;
  wire       [10:0]   _zz_outRowCount_valueNext;
  wire       [0:0]    _zz_outRowCount_valueNext_1;
  wire       [9:0]    _zz_when_SuperResolutionPart1_l103;
  wire       [10:0]   _zz_when_SuperResolutionPart1_l111;
  wire       [7:0]    _zz_lineBufferTwo_port;
  wire                _zz_lineBufferTwo_port_1;
  wire       [7:0]    _zz_lineBufferOne_port;
  wire                _zz_lineBufferOne_port_1;
  reg                 startIn_1;
  reg                 frameStart;
  reg                 slaveStart;
  wire                dataIn_fire;
  wire                when_SuperResolutionPart1_l52;
  reg        [7:0]    inpThreshold;
  reg                 holdBuffer;
  wire                when_SuperResolutionPart1_l58;
  reg                 interComplete;
  reg                 bufferRowCount_willIncrement;
  wire                bufferRowCount_willClear;
  reg        [9:0]    bufferRowCount_valueNext;
  reg        [9:0]    bufferRowCount_value;
  wire                bufferRowCount_willOverflowIfInc;
  wire                bufferRowCount_willOverflow;
  reg                 bufferSwitch;
  reg                 bufferEnable;
  wire                when_SuperResolutionPart1_l70;
  reg                 nextRowBuffer;
  reg                 bufferWAddr_willIncrement;
  reg                 bufferWAddr_willClear;
  reg        [9:0]    bufferWAddr_valueNext;
  reg        [9:0]    bufferWAddr_value;
  wire                bufferWAddr_willOverflowIfInc;
  wire                bufferWAddr_willOverflow;
  wire                outPixelAddr_willIncrement;
  wire                outPixelAddr_willClear;
  reg        [10:0]   outPixelAddr_valueNext;
  reg        [10:0]   outPixelAddr_value;
  wire                outPixelAddr_willOverflowIfInc;
  wire                outPixelAddr_willOverflow;
  reg        [9:0]    bmpWidth;
  reg        [9:0]    bmpHeight;
  wire                outRowCount_willIncrement;
  wire                outRowCount_willClear;
  reg        [10:0]   outRowCount_valueNext;
  reg        [10:0]   outRowCount_value;
  wire                outRowCount_willOverflowIfInc;
  wire                outRowCount_willOverflow;
  wire                when_SuperResolutionPart1_l95;
  wire                dataOut_fire;
  wire                when_SuperResolutionPart1_l98;
  wire                dataIn_fire_1;
  wire                when_SuperResolutionPart1_l103;
  wire                dataIn_fire_2;
  wire                when_SuperResolutionPart1_l106;
  wire                dataIn_fire_3;
  wire                when_SuperResolutionPart1_l109;
  wire                dataIn_fire_4;
  wire                when_SuperResolutionPart1_l110;
  wire                when_SuperResolutionPart1_l111;
  wire                dataStream_valid;
  wire                dataStream_ready;
  wire       [7:0]    dataStream_payload;
  wire                dataStream_fire;
  wire                dataStream_fire_1;
  wire                dataStream_fire_2;
  reg [7:0] lineBufferOne [0:959];
  reg [7:0] lineBufferTwo [0:959];

  assign _zz_bufferRowCount_valueNext_1 = bufferRowCount_willIncrement;
  assign _zz_bufferRowCount_valueNext = {9'd0, _zz_bufferRowCount_valueNext_1};
  assign _zz_bufferWAddr_valueNext_1 = bufferWAddr_willIncrement;
  assign _zz_bufferWAddr_valueNext = {9'd0, _zz_bufferWAddr_valueNext_1};
  assign _zz_outPixelAddr_valueNext_1 = outPixelAddr_willIncrement;
  assign _zz_outPixelAddr_valueNext = {10'd0, _zz_outPixelAddr_valueNext_1};
  assign _zz_outRowCount_valueNext_1 = outRowCount_willIncrement;
  assign _zz_outRowCount_valueNext = {10'd0, _zz_outRowCount_valueNext_1};
  assign _zz_when_SuperResolutionPart1_l103 = (bmpHeight - 10'h001);
  assign _zz_when_SuperResolutionPart1_l111 = (outRowCount_value % 2'b10);
  assign _zz_lineBufferOne_port = dataStream_payload;
  assign _zz_lineBufferOne_port_1 = (dataStream_fire_1 && (! bufferSwitch));
  assign _zz_lineBufferTwo_port = dataStream_payload;
  assign _zz_lineBufferTwo_port_1 = (dataStream_fire && bufferSwitch);
  initial begin
    $readmemb("SuperResolutionPart1.v_toplevel_lineBufferOne.bin",lineBufferOne);
  end
  always @(posedge clk) begin
    if(_zz_lineBufferOne_port_1) begin
      lineBufferOne[bufferWAddr_value] <= _zz_lineBufferOne_port;
    end
  end

  initial begin
    $readmemb("SuperResolutionPart1.v_toplevel_lineBufferTwo.bin",lineBufferTwo);
  end
  always @(posedge clk) begin
    if(_zz_lineBufferTwo_port_1) begin
      lineBufferTwo[bufferWAddr_value] <= _zz_lineBufferTwo_port;
    end
  end

  always @(*) begin
    dataIn_ready = 1'b0;
    dataIn_ready = (dataStream_ready && bufferEnable);
  end

  assign dataOut_valid = 1'b0;
  assign dataOut_payload = 8'h0;
  assign startOut = 1'b0;
  always @(*) begin
    frameStartOut = 1'b0;
    if(when_SuperResolutionPart1_l95) begin
      frameStartOut = 1'b1;
    end
  end

  assign rowEndOut = 1'b0;
  assign inpValidOut = 1'b0;
  assign inpCompleteOut = 1'b0;
  assign dataIn_fire = (dataIn_valid && dataIn_ready);
  assign when_SuperResolutionPart1_l52 = (dataIn_fire && (! inpTwoCompleteIn));
  assign when_SuperResolutionPart1_l58 = (! StartIn);
  always @(*) begin
    bufferRowCount_willIncrement = 1'b0;
    if(when_SuperResolutionPart1_l106) begin
      bufferRowCount_willIncrement = 1'b1;
    end
  end

  assign bufferRowCount_willClear = 1'b0;
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

  assign when_SuperResolutionPart1_l70 = (StartIn && (! holdBuffer));
  always @(*) begin
    bufferWAddr_willIncrement = 1'b0;
    if(dataStream_fire_2) begin
      if(!rowEndIn) begin
        bufferWAddr_willIncrement = 1'b1;
      end
    end
  end

  always @(*) begin
    bufferWAddr_willClear = 1'b0;
    if(dataStream_fire_2) begin
      if(rowEndIn) begin
        bufferWAddr_willClear = 1'b1;
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

  assign outPixelAddr_willIncrement = 1'b0;
  assign outPixelAddr_willClear = 1'b0;
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

  assign outRowCount_willIncrement = 1'b0;
  assign outRowCount_willClear = 1'b0;
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

  assign when_SuperResolutionPart1_l95 = (frameStart && dataOut_valid);
  assign dataOut_fire = (dataOut_valid && dataOut_ready);
  assign when_SuperResolutionPart1_l98 = (frameStart && dataOut_fire);
  assign dataIn_fire_1 = (dataIn_valid && dataIn_ready);
  assign when_SuperResolutionPart1_l103 = (((bufferRowCount_value == _zz_when_SuperResolutionPart1_l103) && rowEndIn) && dataIn_fire_1);
  assign dataIn_fire_2 = (dataIn_valid && dataIn_ready);
  assign when_SuperResolutionPart1_l106 = (rowEndIn && dataIn_fire_2);
  assign dataIn_fire_3 = (dataIn_valid && dataIn_ready);
  assign when_SuperResolutionPart1_l109 = (rowEndIn && dataIn_fire_3);
  assign dataIn_fire_4 = (dataIn_valid && dataIn_ready);
  assign when_SuperResolutionPart1_l110 = (((10'h001 <= bufferRowCount_value) && rowEndIn) && dataIn_fire_4);
  assign when_SuperResolutionPart1_l111 = (((_zz_when_SuperResolutionPart1_l111 == 11'h001) && rowEndOut) && (! holdBuffer));
  assign dataStream_valid = (dataIn_valid && bufferEnable);
  assign dataStream_payload = dataIn_payload;
  assign dataStream_ready = 1'b1;
  assign dataStream_fire = (dataStream_valid && dataStream_ready);
  assign dataStream_fire_1 = (dataStream_valid && dataStream_ready);
  assign dataStream_fire_2 = (dataStream_valid && dataStream_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      startIn_1 <= 1'b0;
      frameStart <= 1'b0;
      slaveStart <= 1'b0;
      inpThreshold <= 8'h80;
      holdBuffer <= 1'b0;
      interComplete <= 1'b0;
      bufferRowCount_value <= 10'h0;
      bufferSwitch <= 1'b0;
      bufferEnable <= 1'b0;
      nextRowBuffer <= 1'b1;
      bufferWAddr_value <= 10'h0;
      outPixelAddr_value <= 11'h0;
      bmpWidth <= 10'h3c0;
      bmpHeight <= 10'h21c;
      outRowCount_value <= 11'h0;
    end else begin
      startIn_1 <= StartIn;
      if(frameStartIn) begin
        frameStart <= 1'b1;
      end
      if(when_SuperResolutionPart1_l52) begin
        slaveStart <= 1'b1;
      end
      if(inpTwoCompleteIn) begin
        slaveStart <= 1'b0;
      end
      inpThreshold <= thresholdIn;
      if(when_SuperResolutionPart1_l58) begin
        holdBuffer <= 1'b0;
      end
      if(inpThreeCompleteIn) begin
        interComplete <= 1'b1;
      end
      if(StartIn) begin
        interComplete <= 1'b0;
      end
      bufferRowCount_value <= bufferRowCount_valueNext;
      if(StartIn) begin
        bufferSwitch <= 1'b0;
      end
      if(when_SuperResolutionPart1_l70) begin
        bufferEnable <= 1'b1;
      end
      if(StartIn) begin
        bufferEnable <= 1'b0;
      end
      if(StartIn) begin
        nextRowBuffer <= 1'b1;
      end
      bufferWAddr_value <= bufferWAddr_valueNext;
      outPixelAddr_value <= outPixelAddr_valueNext;
      bmpWidth <= widthIn;
      bmpHeight <= heightIn;
      outRowCount_value <= outRowCount_valueNext;
      if(when_SuperResolutionPart1_l98) begin
        frameStart <= 1'b0;
      end
      if(when_SuperResolutionPart1_l103) begin
        holdBuffer <= 1'b1;
      end
      if(when_SuperResolutionPart1_l109) begin
        bufferSwitch <= (! bufferSwitch);
      end
      if(when_SuperResolutionPart1_l110) begin
        bufferEnable <= 1'b0;
      end
      if(when_SuperResolutionPart1_l111) begin
        bufferEnable <= 1'b1;
      end
    end
  end


endmodule
