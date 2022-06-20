// Generator : SpinalHDL v1.7.0b    git head : 541894e01cf6b5ef03f924225e4f769fb167dea8
// Component : TestUtils.STreamUtilsTest
// Git hash  : c54a5c8a6bc169e2fb8b3189591cb8f780d9540c

`timescale 1ns/1ps

module TestUtils.STreamUtilsTest (
  input               dataIn_valid,
  output              dataIn_ready,
  input      [7:0]    dataIn_payload,
  output              dataOut_valid,
  input               dataOut_ready,
  output     [7:0]    dataOut_payload,
  input               clk,
  input               reset
);

  wire                dataIn_s2mPipe_valid;
  reg                 dataIn_s2mPipe_ready;
  wire       [7:0]    dataIn_s2mPipe_payload;
  reg                 dataIn_rValid;
  reg        [7:0]    dataIn_rData;
  wire                dataIn_s2mPipe_m2sPipe_valid;
  wire                dataIn_s2mPipe_m2sPipe_ready;
  wire       [7:0]    dataIn_s2mPipe_m2sPipe_payload;
  reg                 dataIn_s2mPipe_rValid;
  reg        [7:0]    dataIn_s2mPipe_rData;
  wire                when_Stream_l368;

  assign dataIn_ready = (! dataIn_rValid);
  assign dataIn_s2mPipe_valid = (dataIn_valid || dataIn_rValid);
  assign dataIn_s2mPipe_payload = (dataIn_rValid ? dataIn_rData : dataIn_payload);
  always @(*) begin
    dataIn_s2mPipe_ready = dataIn_s2mPipe_m2sPipe_ready;
    if(when_Stream_l368) begin
      dataIn_s2mPipe_ready = 1'b1;
    end
  end

  assign when_Stream_l368 = (! dataIn_s2mPipe_m2sPipe_valid);
  assign dataIn_s2mPipe_m2sPipe_valid = dataIn_s2mPipe_rValid;
  assign dataIn_s2mPipe_m2sPipe_payload = dataIn_s2mPipe_rData;
  assign dataOut_valid = dataIn_s2mPipe_m2sPipe_valid;
  assign dataIn_s2mPipe_m2sPipe_ready = dataOut_ready;
  assign dataOut_payload = dataIn_s2mPipe_m2sPipe_payload;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      dataIn_rValid <= 1'b0;
      dataIn_s2mPipe_rValid <= 1'b0;
    end else begin
      if(dataIn_valid) begin
        dataIn_rValid <= 1'b1;
      end
      if(dataIn_s2mPipe_ready) begin
        dataIn_rValid <= 1'b0;
      end
      if(dataIn_s2mPipe_ready) begin
        dataIn_s2mPipe_rValid <= dataIn_s2mPipe_valid;
      end
    end
  end

  always @(posedge clk) begin
    if(dataIn_ready) begin
      dataIn_rData <= dataIn_payload;
    end
    if(dataIn_s2mPipe_ready) begin
      dataIn_s2mPipe_rData <= dataIn_s2mPipe_payload;
    end
  end


endmodule
