package SpGears.Algos.SuperResolution

import spinal.core._
import spinal.lib._
import spinal.lib.fsm._

case class InterpolationStep1(config: IPConfig) extends Component {

  def dW = config.dataW

  def sW = config.srcW

  def sH = config.srcH

  val io = new Bundle {
    // from master
    val dataIn       = slave Stream UInt(dW bits)
    val StartIn      = in Bool ()
    val frameStartIn = in Bool ()
    val rowEndIn     = in Bool ()

    // from slave
    val inpTwoCompleteIn   = in Bool ()
    val inpThreeCompleteIn = in Bool ()

    // to slave
    val dataOut       = master Stream UInt(dW bits)
    val startOut      = out Bool ()
    val frameStartOut = out Bool ()
    val rowEndOut     = out Bool ()
    val inpValidOut   = out Bool ()

    // to master
    val inpCompleteOut = out Bool ()

    // wait for axi-lite config signal
    val thresholdIn = in UInt (dW bits)
    val widthIn     = in UInt (log2Up(sW + 1) bits)
    val heightIn    = in UInt (log2Up(sH + 1) bits)
  }
  noIoPrefix()

  /* set the initial state */
  io.setInvalid()
  /* register the frame start signal */
  val frameStart = RegNextWhen(True, io.frameStartIn).init(False)

  /* register the startOut signal */
  val slaveStart = RegInit(False).setWhen(io.dataIn.fire && !io.inpTwoCompleteIn).clearWhen(io.inpTwoCompleteIn)

  /* register the threshold */
  val inpThreshold = RegNext(io.thresholdIn).init(U(128, dW bits))

  /* start buffer data signal */
  val holdBuffer = RegInit(False).clearWhen(io.StartIn.fall())

  /* the signal indicate last interpolation is complete */
  val interComplete = RegInit(False).setWhen(io.inpThreeCompleteIn).clearWhen(io.StartIn.rise())

  /* when this signal is true, it means the nextRowBuffer is also lastRowBuffer */
  val sameBuffer = RegInit(False).clearWhen(io.StartIn.rise())

  /* record the number of row which is buffered */
  val bufferRowCount = Counter(sH + 1)

  /* when this signal is True, it means that the dataIn should be store in lineBufferTwo when we can receive dataIn */
  val bufferSwitch = RegInit(False).clearWhen(io.StartIn.rise())

  /* the write enable signal of lineBuffer*/
  val bufferEnable = RegInit(False).setWhen(io.StartIn.rise())

  /* when it be true, it means the lineBufferTwo now is store the next row */
  val nextRowBuffer = RegInit(True).setWhen(io.StartIn.rise())

  /* address Counter for write data to buffer */
  val bufferWAddr = Counter(sW)

  /* address Counter for output pixels */
  val outPixelAddr = Counter(2 * sW)

  /* input bmp picture width */
  val bmpWidth = RegNext(io.widthIn).init(U(sW, log2Up(sW + 1) bits))

  /* input bmp picture height */
  val bmpHeight = RegNext(io.heightIn).init(U(sH, log2Up(sH + 1) bits))

  /* the number of row which is already output*/
  val outRowCount = Counter(2 * sH + 1)

  /* the following lineBuffer is used to store two line pixels of source bmp */
  val lineBufferOne = Mem(UInt(dW bits), sW).init(Seq.fill(sW)(U(0).resized))
  val lineBufferTwo = Mem(UInt(dW bits), sW).init(Seq.fill(sW)(U(0).resized))

  val upPixel   = RegInit(U(0, dW bits))
  val downPixel = RegInit(U(0, dW bits))

  val evenPixelInEvenRowOutEnable = RegInit(False)
  val oddPixelInEvenRowOutEnable  = RegInit(False)
  val evenPixelInOddRowOutEnable  = RegInit(False)
  val oddPixelInOddRowOutEnable   = RegInit(False)

  val leftBufferAddr  = RegInit(U(0, log2Up(sW) bits))
  val rightBufferAddr = RegInit(U(1, log2Up(sW) bits))

  val retPixel            = RegInit(U(0, dW bits))
  val retOddPixelInOddRow = RegInit(U(0, dW bits))

  val preCompare         = RegInit(U(0, 2 bits))
  val comparePixelState  = RegInit(False)
  val compareThreshState = RegInit(False)

  val preTwoCompare             = RegInit(U(0, 2 bits))
  val compareMainPixelState     = RegInit(False)
  val compareCounterPixelState  = RegInit(False)
  val compareMainThreshState    = RegInit(False)
  val compareCounterThreshState = RegInit(False)

  val holdEvenPixelStateInOddRow = RegInit(False)
  val holdOddPixelStateInOddRow  = RegInit(False)

  val willRowEndOutIfFire  = RegInit(False).setWhen(outPixelAddr === U(2) * bmpWidth - U(2) && io.dataOut.fire)
  val willCompleteIfRowEnd = RegInit(False).setWhen(outRowCount === U(2) * bmpHeight - U(1))

  /* diagonal diffs */
  val mainDiagDiff    = RegInit(U(0, dW bits))
  val counterDiagDiff = RegInit(U(0, dW bits))

  /* the holdBuffer and rowCount logic */
  when(bufferRowCount === bmpHeight - U(1) && io.rowEndIn && io.dataIn.fire) {
    holdBuffer := True
    sameBuffer := True
  }

  when(io.rowEndIn && io.dataIn.fire) { bufferRowCount.increment() }

  /* the bufferSwitch and bufferEnable logic */
  when(io.rowEndIn && io.dataIn.fire) { bufferSwitch := ~bufferSwitch }
  when(io.StartIn && !holdBuffer) { io.dataIn.ready := bufferEnable }

  when(bufferRowCount >= U(1) && io.rowEndIn && io.dataIn.fire) { bufferEnable := False }

  /* write data to buffer logic */
  when(io.dataIn.fire) {
    lineBufferTwo.write(bufferWAddr, io.dataIn.payload, bufferEnable && bufferSwitch)
    lineBufferOne.write(bufferWAddr, io.dataIn.payload, bufferEnable && !bufferSwitch)
    when(io.rowEndIn) {
      bufferWAddr.clear()
    }.otherwise {
      bufferWAddr.increment()
    }
  }

  /* interpolate and output logic */

  val inpStateMachine = new StateMachine {
    val EVEN = StateEntryPoint()
    val ODD  = State()

    EVEN.onEntry {
      when(outRowCount =/= U(0)) {
        nextRowBuffer := ~nextRowBuffer
        when(bufferRowCount =/= bmpHeight) {
          bufferEnable := True
        }
      }
      evenPixelInEvenRowOutEnable.setWhen(U(2) * bufferRowCount >= U(2) + outRowCount || bufferWAddr === U(0) && io.dataIn.fire || bufferWAddr > U(0))
      evenPixelInOddRowOutEnable.clear()
      oddPixelInOddRowOutEnable.clear()

      leftBufferAddr  := U(0, log2Up(sW) bits)
      rightBufferAddr := U(1, log2Up(sW) bits)

      preCompare := U(0).resized
    }

    EVEN.whenIsActive {
      when(willRowEndOutIfFire && io.dataOut.fire) { goto(ODD) }

      evenPixelInEvenRowOutEnable
        .setWhen(U(2) * bufferRowCount >= U(2) + outRowCount)
        .setWhen(
          !(io.dataOut.fire && evenPixelInEvenRowOutEnable) && outPixelAddr % U(2) === U(0) && U(2) * bufferWAddr >= outPixelAddr && io.dataIn.fire || U(
            2
          ) * bufferWAddr > outPixelAddr
        )
        .setWhen(outPixelAddr % U(2) === U(1) && U(2) * bufferWAddr >= U(1) + outPixelAddr && io.dataIn.fire || U(2) * bufferWAddr > U(1) + outPixelAddr)

      oddPixelInEvenRowOutEnable
        .setWhen(U(2) * bufferRowCount >= U(2) + outRowCount)
        .setWhen(outPixelAddr % U(2) === U(0) && U(2) * bufferWAddr >= U(2) + outPixelAddr && io.dataIn.fire || U(2) * bufferWAddr > U(2) + outPixelAddr)
        .setWhen(
          !(io.dataOut.fire && oddPixelInEvenRowOutEnable) && outPixelAddr % U(2) === U(1) && U(2) * bufferWAddr >= U(1) + outPixelAddr && io.dataIn.fire || U(
            2
          ) * bufferWAddr > U(1) + outPixelAddr
        )

      when(frameStart && io.dataOut.valid) {
        io.frameStartOut := True
      }
      when(frameStart && io.dataOut.fire) {
        frameStart := False
      }
      when(evenPixelInEvenRowOutEnable) {
        io.dataOut.valid := True
        switch(nextRowBuffer) {
          is(True) {
            io.dataOut.payload := lineBufferOne.readAsync(leftBufferAddr)
          }
          is(False) {
            io.dataOut.payload := lineBufferTwo.readAsync(leftBufferAddr)
          }
        }
        when(io.dataOut.fire) {
          evenPixelInEvenRowOutEnable.clear()
          leftBufferAddr  := (outPixelAddr / U(2)).resized
          rightBufferAddr := ((U(2) + outPixelAddr) / U(2)).resized
        }

        when(oddPixelInEvenRowOutEnable) {
          switch(nextRowBuffer) {
            is(True) {
              when(U(2) + outPixelAddr <= U(2) * bmpWidth - U(1)) {
                switch(lineBufferOne.readAsync(leftBufferAddr) >= lineBufferOne.readAsync(rightBufferAddr)) {
                  is(True) {
                    comparePixelState.set()
                    preCompare := U(1).resized
                  }
                  is(False) {
                    comparePixelState.clear()
                    preCompare := U(1).resized
                  }
                }
              }
            }
            is(False) {
              when(U(2) + outPixelAddr <= U(2) * bmpWidth - U(1)) {
                switch(lineBufferTwo.readAsync(leftBufferAddr) >= lineBufferTwo.readAsync(rightBufferAddr)) {
                  is(True) {
                    comparePixelState.set()
                    preCompare := U(1).resized
                  }
                  is(False) {
                    comparePixelState.clear()
                    preCompare := U(1).resized
                  }
                }
              }
            }
          }

          when(preCompare === U(1)) {
            when(U(2) + outPixelAddr <= U(2) * bmpWidth - U(1)) {
              when(comparePixelState) {
                switch(nextRowBuffer) {
                  is(True) {
                    when(lineBufferOne.readAsync(leftBufferAddr) - lineBufferOne.readAsync(rightBufferAddr) >= inpThreshold) {
                      compareThreshState.set()
                      preCompare := U(2).resized
                      retPixel   := lineBufferOne.readAsync(leftBufferAddr)
                    }.otherwise {
                      compareThreshState.clear()
                      preCompare := U(2).resized
                      retPixel   := ((lineBufferOne.readAsync(leftBufferAddr) +^ lineBufferOne.readAsync(rightBufferAddr)) / U(2)).resized
                    }
                  }
                  is(False) {
                    when(lineBufferTwo.readAsync(leftBufferAddr) - lineBufferTwo.readAsync(rightBufferAddr) >= inpThreshold) {
                      compareThreshState.set()
                      preCompare := U(2).resized
                      retPixel   := lineBufferTwo.readAsync(leftBufferAddr)
                    }.otherwise {
                      compareThreshState.clear()
                      preCompare := U(2).resized
                      retPixel   := ((lineBufferTwo.readAsync(leftBufferAddr) +^ lineBufferTwo.readAsync(rightBufferAddr)) / U(2)).resized
                    }
                  }
                }
              }.otherwise {
                switch(nextRowBuffer) {
                  is(True) {
                    when(lineBufferOne.readAsync(rightBufferAddr) - lineBufferOne.readAsync(leftBufferAddr) >= inpThreshold) {
                      compareThreshState.set()
                      preCompare := U(2).resized
                      retPixel   := lineBufferOne.readAsync(leftBufferAddr)
                    }.otherwise {
                      compareThreshState.clear()
                      preCompare := U(2).resized
                      retPixel   := ((lineBufferOne.readAsync(leftBufferAddr) +^ lineBufferOne.readAsync(rightBufferAddr)) / U(2)).resized
                    }
                  }
                  is(False) {
                    when(lineBufferTwo.readAsync(rightBufferAddr) - lineBufferTwo.readAsync(leftBufferAddr) >= inpThreshold) {
                      compareThreshState.set()
                      preCompare := U(2).resized
                      retPixel   := lineBufferTwo.readAsync(leftBufferAddr)
                    }.otherwise {
                      compareThreshState.clear()
                      preCompare := U(2).resized
                      retPixel   := ((lineBufferTwo.readAsync(leftBufferAddr) +^ lineBufferTwo.readAsync(rightBufferAddr)) / U(2)).resized
                    }
                  }
                }
              }
            }
          }
        }

      }
        .elsewhen(oddPixelInEvenRowOutEnable) {
          when(preCompare === U(2)) {
            io.dataOut.valid   := True
            io.dataOut.payload := retPixel
          }.otherwise {

            when(preCompare === U(0)) {
              when(U(1) + outPixelAddr <= U(2) * bmpWidth - U(1)) {
                switch(nextRowBuffer) {
                  is(True) {
                    switch(lineBufferOne.readAsync(leftBufferAddr) >= lineBufferOne.readAsync(rightBufferAddr)) {
                      is(True) {
                        comparePixelState.set()
                        preCompare := U(1).resized
                      }
                      is(False) {
                        comparePixelState.clear()
                        preCompare := U(1).resized
                      }
                    }

                  }
                  is(False) {
                    switch(lineBufferTwo.readAsync(leftBufferAddr) >= lineBufferTwo.readAsync(rightBufferAddr)) {
                      is(True) {
                        comparePixelState.set()
                        preCompare := U(1).resized
                      }
                      is(False) {
                        comparePixelState.clear()
                        preCompare := U(1).resized
                      }
                    }
                  }
                }
              }.otherwise {
                switch(nextRowBuffer) {
                  is(True) {
                    io.dataOut.payload := lineBufferOne.readAsync(leftBufferAddr)
                  }
                  is(False) {
                    io.dataOut.payload := lineBufferTwo.readAsync(leftBufferAddr)
                  }
                }
                io.dataOut.valid := True
              }
            }

            when(preCompare === U(1)) {
              when(U(1) + outPixelAddr <= U(2) * bmpWidth - U(1)) {
                when(comparePixelState) {
                  switch(nextRowBuffer) {
                    is(True) {
                      when(lineBufferOne.readAsync(leftBufferAddr) - lineBufferOne.readAsync(rightBufferAddr) >= inpThreshold) {
                        compareThreshState.set()
                        preCompare := U(2).resized
                        retPixel   := lineBufferOne.readAsync(leftBufferAddr)
                      }.otherwise {
                        compareThreshState.clear()
                        preCompare := U(2).resized
                        retPixel   := ((lineBufferOne.readAsync(leftBufferAddr) +^ lineBufferOne.readAsync(rightBufferAddr)) / U(2)).resized
                      }
                    }
                    is(False) {
                      when(lineBufferTwo.readAsync(leftBufferAddr) - lineBufferTwo.readAsync(rightBufferAddr) >= inpThreshold) {
                        compareThreshState.set()
                        preCompare := U(2).resized
                        retPixel   := lineBufferTwo.readAsync(leftBufferAddr)
                      }.otherwise {
                        compareThreshState.clear()
                        preCompare := U(2).resized
                        retPixel   := ((lineBufferTwo.readAsync(leftBufferAddr) +^ lineBufferTwo.readAsync(rightBufferAddr)) / U(2)).resized
                      }
                    }
                  }
                }.otherwise {
                  switch(nextRowBuffer) {
                    is(True) {
                      when(lineBufferOne.readAsync(rightBufferAddr) - lineBufferOne.readAsync(leftBufferAddr) >= inpThreshold) {
                        compareThreshState.set()
                        preCompare := U(2).resized
                        retPixel   := lineBufferOne.readAsync(leftBufferAddr)
                      }.otherwise {
                        compareThreshState.clear()
                        preCompare := U(2).resized
                        retPixel   := ((lineBufferOne.readAsync(leftBufferAddr) +^ lineBufferOne.readAsync(rightBufferAddr)) / U(2)).resized
                      }
                    }
                    is(False) {
                      when(lineBufferTwo.readAsync(rightBufferAddr) - lineBufferTwo.readAsync(leftBufferAddr) >= inpThreshold) {
                        compareThreshState.set()
                        preCompare := U(2).resized
                        retPixel   := lineBufferTwo.readAsync(leftBufferAddr)
                      }.otherwise {
                        compareThreshState.clear()
                        preCompare := U(2).resized
                        retPixel   := ((lineBufferTwo.readAsync(leftBufferAddr) +^ lineBufferTwo.readAsync(rightBufferAddr)) / U(2)).resized
                      }
                    }
                  }
                }
              }
            }
          }

          when(io.dataOut.fire) {
            oddPixelInEvenRowOutEnable.clear()
            preCompare := U(0).resized
            comparePixelState.clear()
            compareThreshState.clear()
            when(!(willRowEndOutIfFire && io.dataOut.fire)) {
              leftBufferAddr  := ((U(1) + outPixelAddr) / U(2)).resized
              rightBufferAddr := ((U(3) + outPixelAddr) / U(2)).resized
            }
          }.otherwise {
            evenPixelInEvenRowOutEnable.clear()
          }
        }
    }

    ODD.onEntry {
      oddPixelInEvenRowOutEnable.clear()
      evenPixelInEvenRowOutEnable.clear()
      evenPixelInOddRowOutEnable.setWhen(U(2) * bufferRowCount >= U(3) + outRowCount || bufferWAddr === U(0) && io.dataIn.fire || bufferWAddr > U(0))

      leftBufferAddr  := U(0, log2Up(sW) bits)
      rightBufferAddr := U(1, log2Up(sW) bits)

      holdEvenPixelStateInOddRow.set()
    }

    ODD.whenIsActive {
      when(willRowEndOutIfFire && io.dataOut.fire) { goto(EVEN) }

      evenPixelInOddRowOutEnable.setWhen(U(2) * bufferWAddr >= U(1) + outPixelAddr && io.dataIn.fire)
      oddPixelInOddRowOutEnable.setWhen(U(2) * bufferWAddr >= outPixelAddr && io.dataIn.fire)

      evenPixelInOddRowOutEnable
        .setWhen(U(2) * bufferRowCount >= U(3) + outRowCount || outRowCount === U(2) * bmpHeight - U(1))
        .setWhen(
          !(io.dataOut.fire && evenPixelInOddRowOutEnable) && outPixelAddr % U(2) === U(0) && U(2) * bufferWAddr >= outPixelAddr && io.dataIn.fire || U(
            2
          ) * bufferWAddr > outPixelAddr
        )
        .setWhen(outPixelAddr % U(2) === U(1) && U(2) * bufferWAddr >= U(1) + outPixelAddr && io.dataIn.fire || U(2) * bufferWAddr > U(1) + outPixelAddr)

      oddPixelInOddRowOutEnable
        .setWhen(U(2) * bufferRowCount >= U(3) + outRowCount || outRowCount === U(2) * bmpHeight - U(1))
        .setWhen(outPixelAddr % U(2) === U(0) && U(2) * bufferWAddr >= U(2) + outPixelAddr && io.dataIn.fire || U(2) * bufferWAddr > U(2) + outPixelAddr)
        .setWhen(
          !(io.dataOut.fire && oddPixelInOddRowOutEnable) && outPixelAddr % U(2) === U(1) && U(2) * bufferWAddr >= U(1) + outPixelAddr && io.dataIn.fire || U(
            2
          ) * bufferWAddr > U(1) + outPixelAddr
        )

      when(evenPixelInOddRowOutEnable && holdEvenPixelStateInOddRow) {
        when(preCompare === U(2)) {
          io.dataOut.valid   := True
          io.dataOut.payload := retPixel
        }.otherwise {
          when(sameBuffer) {
            io.dataOut.valid := True
            switch(nextRowBuffer) {
              is(True) {
                io.dataOut.payload := lineBufferOne.readAsync(leftBufferAddr)
              }
              is(False) {
                io.dataOut.payload := lineBufferTwo.readAsync(leftBufferAddr)
              }
            }
          }.otherwise {
            when(preCompare === U(0)) {
              switch(nextRowBuffer) {
                is(True) {
                  switch(lineBufferOne.readAsync(leftBufferAddr) >= lineBufferTwo.readAsync(leftBufferAddr)) {
                    is(True) {
                      comparePixelState.set()
                      preCompare := U(1).resized
                    }
                    is(False) {
                      comparePixelState.clear()
                      preCompare := U(1).resized
                    }
                  }
                }
                is(False) {
                  switch(lineBufferTwo.readAsync(leftBufferAddr) >= lineBufferOne.readAsync(leftBufferAddr)) {
                    is(True) {
                      comparePixelState.set()
                      preCompare := U(1).resized
                    }
                    is(False) {
                      comparePixelState.clear()
                      preCompare := U(1).resized
                    }
                  }
                }
              }
            }

            when(preCompare === U(1)) {
              when(comparePixelState) {
                switch(nextRowBuffer) {
                  is(True) {
                    switch(lineBufferOne.readAsync(leftBufferAddr) - lineBufferTwo.readAsync(leftBufferAddr) >= inpThreshold) {
                      is(True) {
                        compareThreshState.set()
                        preCompare := U(2).resized
                        retPixel   := lineBufferOne.readAsync(leftBufferAddr)
                      }
                      is(False) {
                        compareThreshState.clear()
                        preCompare := U(2).resized
                        retPixel   := ((lineBufferOne.readAsync(leftBufferAddr) +^ lineBufferTwo.readAsync(leftBufferAddr)) / U(2)).resized
                      }
                    }
                  }
                  is(False) {
                    switch(lineBufferTwo.readAsync(leftBufferAddr) - lineBufferOne.readAsync(leftBufferAddr) >= inpThreshold) {
                      is(True) {
                        compareThreshState.set()
                        preCompare := U(2).resized
                        retPixel   := lineBufferTwo.readAsync(leftBufferAddr)
                      }
                      is(False) {
                        compareThreshState.clear()
                        preCompare := U(2).resized
                        retPixel   := ((lineBufferTwo.readAsync(leftBufferAddr) +^ lineBufferOne.readAsync(leftBufferAddr)) / U(2)).resized
                      }
                    }
                  }
                }
              }.otherwise {
                switch(nextRowBuffer) {
                  is(True) {
                    switch(lineBufferTwo.readAsync(leftBufferAddr) - lineBufferOne.readAsync(leftBufferAddr) >= inpThreshold) {
                      is(True) {
                        compareThreshState.set()
                        preCompare := U(2).resized
                        retPixel   := lineBufferOne.readAsync(leftBufferAddr)
                      }
                      is(False) {
                        compareThreshState.clear()
                        preCompare := U(2).resized
                        retPixel   := ((lineBufferOne.readAsync(leftBufferAddr) +^ lineBufferTwo.readAsync(leftBufferAddr)) / U(2)).resized
                      }
                    }
                  }
                  is(False) {
                    switch(lineBufferOne.readAsync(leftBufferAddr) - lineBufferTwo.readAsync(leftBufferAddr) >= inpThreshold) {
                      is(True) {
                        compareThreshState.set()
                        preCompare := U(2).resized
                        retPixel   := lineBufferTwo.readAsync(leftBufferAddr)
                      }
                      is(False) {
                        compareThreshState.clear()
                        preCompare := U(2).resized
                        retPixel   := ((lineBufferTwo.readAsync(leftBufferAddr) +^ lineBufferOne.readAsync(leftBufferAddr)) / U(2)).resized
                      }
                    }
                  }
                }
              }
            }
          }

        }

        when(oddPixelInOddRowOutEnable) {
          when(sameBuffer) {
            when(preTwoCompare === U(0)) {
              switch(nextRowBuffer) {
                is(True) {
                  when(lineBufferOne.readAsync(leftBufferAddr) >= lineBufferOne.readAsync(rightBufferAddr)) {
                    compareMainPixelState.set()
                    compareCounterPixelState.set()
                    preTwoCompare := U(1).resized
                  }.otherwise {
                    compareMainPixelState.clear()
                    compareCounterPixelState.clear()
                    preTwoCompare := U(1).resized
                  }
                }
                is(False) {
                  when(lineBufferTwo.readAsync(leftBufferAddr) >= lineBufferTwo.readAsync(rightBufferAddr)) {
                    compareMainPixelState.set()
                    compareCounterPixelState.set()
                    preTwoCompare := U(1).resized
                  }.otherwise {
                    compareMainPixelState.clear()
                    compareCounterPixelState.clear()
                    preTwoCompare := U(1).resized
                  }
                }
              }
            }
            when(preTwoCompare === U(1)) {
              switch(nextRowBuffer) {
                is(True) {
                  when(lineBufferOne.readAsync(leftBufferAddr) - lineBufferOne.readAsync(rightBufferAddr) >= inpThreshold) {
                    compareMainThreshState.set()
                    compareCounterThreshState.set()
                    preTwoCompare       := U(3).resized
                    retOddPixelInOddRow := lineBufferOne.readAsync(leftBufferAddr)
                  }.otherwise {
                    compareMainThreshState.clear()
                    compareCounterThreshState.clear()
                    preTwoCompare       := U(3).resized
                    retOddPixelInOddRow := ((lineBufferOne.readAsync(leftBufferAddr) +^ lineBufferOne.readAsync(rightBufferAddr)) / U(2)).resized
                  }
                }
                is(False) {
                  when(lineBufferTwo.readAsync(leftBufferAddr) - lineBufferTwo.readAsync(rightBufferAddr) >= inpThreshold) {
                    compareMainThreshState.set()
                    compareCounterThreshState.set()
                    preTwoCompare       := U(3).resized
                    retOddPixelInOddRow := lineBufferTwo.readAsync(leftBufferAddr)
                  }.otherwise {
                    compareMainThreshState.clear()
                    compareCounterThreshState.clear()
                    preTwoCompare       := U(3).resized
                    retOddPixelInOddRow := ((lineBufferTwo.readAsync(leftBufferAddr) +^ lineBufferTwo.readAsync(rightBufferAddr)) / U(2)).resized
                  }
                }
              }
            }
          }.otherwise {
            when(preTwoCompare === U(0)) {
              switch(nextRowBuffer) {
                is(True) {
                  when(lineBufferOne.readAsync(leftBufferAddr) >= lineBufferTwo.readAsync(rightBufferAddr)) {
                    compareMainPixelState.set()
                  }.otherwise {
                    compareMainPixelState.clear()
                  }

                  when(lineBufferTwo.readAsync(leftBufferAddr) >= lineBufferOne.readAsync(rightBufferAddr)) {
                    compareCounterPixelState.set()
                  }.otherwise {
                    compareCounterPixelState.clear()
                  }
                  preTwoCompare := U(1).resized
                }
                is(False) {
                  when(lineBufferTwo.readAsync(leftBufferAddr) >= lineBufferOne.readAsync(rightBufferAddr)) {
                    compareMainPixelState.set()
                  }.otherwise {
                    compareMainPixelState.clear()
                  }

                  when(lineBufferOne.readAsync(leftBufferAddr) >= lineBufferTwo.readAsync(rightBufferAddr)) {
                    compareCounterPixelState.set()
                  }.otherwise {
                    compareCounterPixelState.clear()
                  }
                  preTwoCompare := U(1).resized
                }
              }
            }

            when(preTwoCompare === U(1)) {
              switch(nextRowBuffer) {
                is(True) {
                  when(compareMainPixelState) {
                    when(lineBufferOne.readAsync(leftBufferAddr) - lineBufferTwo.readAsync(rightBufferAddr) >= inpThreshold) {
                      compareMainThreshState.set()
                    }.otherwise {
                      compareMainThreshState.clear()
                    }
                    mainDiagDiff := lineBufferOne.readAsync(leftBufferAddr) - lineBufferTwo.readAsync(rightBufferAddr)
                  }.otherwise {
                    when(lineBufferTwo.readAsync(rightBufferAddr) - lineBufferOne.readAsync(leftBufferAddr) >= inpThreshold) {
                      compareMainThreshState.set()
                    }.otherwise {
                      compareMainThreshState.clear()
                    }
                    mainDiagDiff := lineBufferTwo.readAsync(rightBufferAddr) - lineBufferOne.readAsync(leftBufferAddr)
                  }

                  when(compareCounterPixelState) {
                    when(lineBufferTwo.readAsync(leftBufferAddr) - lineBufferOne.readAsync(rightBufferAddr) >= inpThreshold) {
                      compareCounterThreshState.set()
                    }.otherwise {
                      compareCounterThreshState.clear()
                    }
                    counterDiagDiff := lineBufferTwo.readAsync(leftBufferAddr) - lineBufferOne.readAsync(rightBufferAddr)
                  }.otherwise {
                    when(lineBufferOne.readAsync(rightBufferAddr) - lineBufferTwo.readAsync(leftBufferAddr) >= inpThreshold) {
                      compareCounterThreshState.set()
                    }.otherwise {
                      compareCounterThreshState.clear()
                    }
                    counterDiagDiff := lineBufferOne.readAsync(rightBufferAddr) - lineBufferTwo.readAsync(leftBufferAddr)
                  }
                  preTwoCompare := U(2).resized
                }
                is(False) {
                  when(compareMainPixelState) {
                    when(lineBufferTwo.readAsync(leftBufferAddr) - lineBufferOne.readAsync(rightBufferAddr) >= inpThreshold) {
                      compareMainThreshState.set()
                    }.otherwise {
                      compareMainThreshState.clear()
                    }
                    mainDiagDiff := lineBufferTwo.readAsync(leftBufferAddr) - lineBufferOne.readAsync(rightBufferAddr)
                  }.otherwise {
                    when(lineBufferOne.readAsync(rightBufferAddr) - lineBufferTwo.readAsync(leftBufferAddr) >= inpThreshold) {
                      compareMainThreshState.set()
                    }.otherwise {
                      compareMainThreshState.clear()
                    }
                    mainDiagDiff := lineBufferOne.readAsync(rightBufferAddr) - lineBufferTwo.readAsync(leftBufferAddr)
                  }

                  when(compareCounterPixelState) {
                    when(lineBufferOne.readAsync(leftBufferAddr) - lineBufferTwo.readAsync(rightBufferAddr) >= inpThreshold) {
                      compareCounterThreshState.set()
                    }.otherwise {
                      compareCounterThreshState.clear()
                    }
                    counterDiagDiff := lineBufferOne.readAsync(leftBufferAddr) - lineBufferTwo.readAsync(rightBufferAddr)
                  }.otherwise {
                    when(lineBufferTwo.readAsync(rightBufferAddr) - lineBufferOne.readAsync(leftBufferAddr) >= inpThreshold) {
                      compareCounterThreshState.set()
                    }.otherwise {
                      compareCounterThreshState.clear()
                    }
                    counterDiagDiff := lineBufferTwo.readAsync(rightBufferAddr) - lineBufferOne.readAsync(leftBufferAddr)
                  }
                  preTwoCompare := U(2).resized
                }
              }
            }

            when(preTwoCompare === U(2)) {
              when(compareMainThreshState && compareCounterThreshState) {
                switch(nextRowBuffer) {
                  is(True) {
                    when(mainDiagDiff >= counterDiagDiff) {
                      retOddPixelInOddRow := lineBufferOne.readAsync(leftBufferAddr)
                    }.otherwise {
                      retOddPixelInOddRow := lineBufferTwo.readAsync(leftBufferAddr)
                    }
                  }
                  is(False) {
                    when(mainDiagDiff >= counterDiagDiff) {
                      retOddPixelInOddRow := lineBufferTwo.readAsync(leftBufferAddr)
                    }.otherwise {
                      retOddPixelInOddRow := lineBufferOne.readAsync(leftBufferAddr)
                    }
                  }
                }
              }.otherwise {
                switch(nextRowBuffer) {
                  is(True) {
                    when(mainDiagDiff >= counterDiagDiff) {
                      retOddPixelInOddRow := ((lineBufferTwo.readAsync(leftBufferAddr) +^ lineBufferOne.readAsync(rightBufferAddr)) / U(2)).resized
                    }.otherwise {
                      retOddPixelInOddRow := ((lineBufferOne.readAsync(leftBufferAddr) +^ lineBufferTwo.readAsync(rightBufferAddr)) / U(2)).resized
                    }
                  }
                  is(False) {
                    when(mainDiagDiff >= counterDiagDiff) {
                      retOddPixelInOddRow := ((lineBufferOne.readAsync(leftBufferAddr) +^ lineBufferTwo.readAsync(rightBufferAddr)) / U(2)).resized
                    }.otherwise {
                      retOddPixelInOddRow := ((lineBufferTwo.readAsync(leftBufferAddr) +^ lineBufferOne.readAsync(rightBufferAddr)) / U(2)).resized
                    }
                  }
                }
              }
              preTwoCompare := U(3).resized
            }
          }
        }

        when(io.dataOut.fire) {
          evenPixelInOddRowOutEnable.clear()
          leftBufferAddr := (outPixelAddr / U(2)).resized
          when(U(2) + outPixelAddr > U(2) * bmpWidth - U(1)) {
            rightBufferAddr := (outPixelAddr / U(2)).resized
          }.otherwise {
            rightBufferAddr := ((U(2) + outPixelAddr) / U(2)).resized
          }
          preCompare := U(0).resized
          comparePixelState.clear()
          compareThreshState.clear()
          holdEvenPixelStateInOddRow.clear()
          holdOddPixelStateInOddRow.set()
        }
      }

      when(oddPixelInOddRowOutEnable && holdOddPixelStateInOddRow) {
        when(preTwoCompare === U(3)) {
          when(sameBuffer) {
            io.dataOut.valid   := True
            io.dataOut.payload := retOddPixelInOddRow
          }.otherwise {
            io.dataOut.valid   := True
            io.dataOut.payload := retOddPixelInOddRow
          }
        }.otherwise {
          when(preTwoCompare === U(0)) {
            switch(nextRowBuffer) {
              is(True) {
                when(lineBufferOne.readAsync(leftBufferAddr) >= lineBufferTwo.readAsync(rightBufferAddr)) {
                  compareMainPixelState.set()
                }.otherwise {
                  compareMainPixelState.clear()
                }

                when(lineBufferTwo.readAsync(leftBufferAddr) >= lineBufferOne.readAsync(rightBufferAddr)) {
                  compareCounterPixelState.set()
                }.otherwise {
                  compareCounterPixelState.clear()
                }
                preTwoCompare := U(1).resized
              }
              is(False) {
                when(lineBufferTwo.readAsync(leftBufferAddr) >= lineBufferOne.readAsync(rightBufferAddr)) {
                  compareMainPixelState.set()
                }.otherwise {
                  compareMainPixelState.clear()
                }

                when(lineBufferOne.readAsync(leftBufferAddr) >= lineBufferTwo.readAsync(rightBufferAddr)) {
                  compareCounterPixelState.set()
                }.otherwise {
                  compareCounterPixelState.clear()
                }
                preTwoCompare := U(1).resized
              }
            }
          }

          when(preTwoCompare === U(1)) {
            switch(nextRowBuffer) {
              is(True) {
                when(compareMainPixelState) {
                  when(lineBufferOne.readAsync(leftBufferAddr) - lineBufferTwo.readAsync(rightBufferAddr) >= inpThreshold) {
                    compareMainThreshState.set()
                  }.otherwise {
                    compareMainThreshState.clear()
                  }
                  mainDiagDiff := lineBufferOne.readAsync(leftBufferAddr) - lineBufferTwo.readAsync(rightBufferAddr)
                }.otherwise {
                  when(lineBufferTwo.readAsync(rightBufferAddr) - lineBufferOne.readAsync(leftBufferAddr) >= inpThreshold) {
                    compareMainThreshState.set()
                  }.otherwise {
                    compareMainThreshState.clear()
                  }
                  mainDiagDiff := lineBufferTwo.readAsync(rightBufferAddr) - lineBufferOne.readAsync(leftBufferAddr)
                }

                when(compareCounterPixelState) {
                  when(lineBufferTwo.readAsync(leftBufferAddr) - lineBufferOne.readAsync(rightBufferAddr) >= inpThreshold) {
                    compareCounterThreshState.set()
                  }.otherwise {
                    compareCounterThreshState.clear()
                  }
                  counterDiagDiff := lineBufferTwo.readAsync(leftBufferAddr) - lineBufferOne.readAsync(rightBufferAddr)
                }.otherwise {
                  when(lineBufferOne.readAsync(rightBufferAddr) - lineBufferTwo.readAsync(leftBufferAddr) >= inpThreshold) {
                    compareCounterThreshState.set()
                  }.otherwise {
                    compareCounterThreshState.clear()
                  }
                  counterDiagDiff := lineBufferOne.readAsync(rightBufferAddr) - lineBufferTwo.readAsync(leftBufferAddr)
                }
                preTwoCompare := U(2).resized
              }
              is(False) {
                when(compareMainPixelState) {
                  when(lineBufferTwo.readAsync(leftBufferAddr) - lineBufferOne.readAsync(rightBufferAddr) >= inpThreshold) {
                    compareMainThreshState.set()
                  }.otherwise {
                    compareMainThreshState.clear()
                  }
                  mainDiagDiff := lineBufferTwo.readAsync(leftBufferAddr) - lineBufferOne.readAsync(rightBufferAddr)
                }.otherwise {
                  when(lineBufferOne.readAsync(rightBufferAddr) - lineBufferTwo.readAsync(leftBufferAddr) >= inpThreshold) {
                    compareMainThreshState.set()
                  }.otherwise {
                    compareMainThreshState.clear()
                  }
                  mainDiagDiff := lineBufferOne.readAsync(rightBufferAddr) - lineBufferTwo.readAsync(leftBufferAddr)
                }

                when(compareCounterPixelState) {
                  when(lineBufferOne.readAsync(leftBufferAddr) - lineBufferTwo.readAsync(rightBufferAddr) >= inpThreshold) {
                    compareCounterThreshState.set()
                  }.otherwise {
                    compareCounterThreshState.clear()
                  }
                  counterDiagDiff := lineBufferOne.readAsync(leftBufferAddr) - lineBufferTwo.readAsync(rightBufferAddr)
                }.otherwise {
                  when(lineBufferTwo.readAsync(rightBufferAddr) - lineBufferOne.readAsync(leftBufferAddr) >= inpThreshold) {
                    compareCounterThreshState.set()
                  }.otherwise {
                    compareCounterThreshState.clear()
                  }
                  counterDiagDiff := lineBufferTwo.readAsync(rightBufferAddr) - lineBufferOne.readAsync(leftBufferAddr)
                }
                preTwoCompare := U(2).resized
              }
            }
          }

          when(preTwoCompare === U(2)) {
            when(compareMainThreshState && compareCounterThreshState) {
              switch(nextRowBuffer) {
                is(True) {
                  when(mainDiagDiff >= counterDiagDiff) {
                    retOddPixelInOddRow := lineBufferOne.readAsync(leftBufferAddr)
                  }.otherwise {
                    retOddPixelInOddRow := lineBufferTwo.readAsync(leftBufferAddr)
                  }
                }
                is(False) {
                  when(mainDiagDiff >= counterDiagDiff) {
                    retOddPixelInOddRow := lineBufferTwo.readAsync(leftBufferAddr)
                  }.otherwise {
                    retOddPixelInOddRow := lineBufferOne.readAsync(leftBufferAddr)
                  }
                }
              }
            }.otherwise {
              switch(nextRowBuffer) {
                is(True) {
                  when(mainDiagDiff >= counterDiagDiff) {
                    retOddPixelInOddRow := ((lineBufferTwo.readAsync(leftBufferAddr) +^ lineBufferOne.readAsync(rightBufferAddr)) / U(2)).resized
                  }.otherwise {
                    retOddPixelInOddRow := ((lineBufferOne.readAsync(leftBufferAddr) +^ lineBufferTwo.readAsync(rightBufferAddr)) / U(2)).resized
                  }
                }
                is(False) {
                  when(mainDiagDiff >= counterDiagDiff) {
                    retOddPixelInOddRow := ((lineBufferOne.readAsync(leftBufferAddr) +^ lineBufferTwo.readAsync(rightBufferAddr)) / U(2)).resized
                  }.otherwise {
                    retOddPixelInOddRow := ((lineBufferTwo.readAsync(leftBufferAddr) +^ lineBufferOne.readAsync(rightBufferAddr)) / U(2)).resized
                  }
                }
              }
            }
            preTwoCompare := U(3).resized
          }
        }

        when(evenPixelInOddRowOutEnable) {
          when(sameBuffer) {
            switch(nextRowBuffer) {
              is(True) {
                retPixel := lineBufferOne.readAsync(rightBufferAddr)
              }
              is(False) {
                retPixel := lineBufferTwo.readAsync(rightBufferAddr)
              }
            }
            preCompare := U(2).resized
          }.otherwise {
            when(preCompare === U(0)) {
              switch(nextRowBuffer) {
                is(True) {
                  switch(lineBufferOne.readAsync(rightBufferAddr) >= lineBufferTwo.readAsync(rightBufferAddr)) {
                    is(True) {
                      comparePixelState.set()
                      preCompare := U(1).resized
                    }
                    is(False) {
                      comparePixelState.clear()
                      preCompare := U(1).resized
                    }
                  }
                }
                is(False) {
                  switch(lineBufferTwo.readAsync(rightBufferAddr) >= lineBufferOne.readAsync(rightBufferAddr)) {
                    is(True) {
                      comparePixelState.set()
                      preCompare := U(1).resized
                    }
                    is(False) {
                      comparePixelState.clear()
                      preCompare := U(1).resized
                    }
                  }
                }
              }
            }

            when(preCompare === U(1)) {
              when(comparePixelState) {
                switch(nextRowBuffer) {
                  is(True) {
                    switch(lineBufferOne.readAsync(rightBufferAddr) - lineBufferTwo.readAsync(rightBufferAddr) >= inpThreshold) {
                      is(True) {
                        compareThreshState.set()
                        preCompare := U(2).resized
                        retPixel   := lineBufferOne.readAsync(rightBufferAddr)
                      }
                      is(False) {
                        compareThreshState.clear()
                        preCompare := U(2).resized
                        retPixel   := ((lineBufferOne.readAsync(rightBufferAddr) +^ lineBufferTwo.readAsync(rightBufferAddr)) / U(2)).resized
                      }
                    }
                  }
                  is(False) {
                    switch(lineBufferTwo.readAsync(rightBufferAddr) - lineBufferOne.readAsync(rightBufferAddr) >= inpThreshold) {
                      is(True) {
                        compareThreshState.set()
                        preCompare := U(2).resized
                        retPixel   := lineBufferTwo.readAsync(rightBufferAddr)
                      }
                      is(False) {
                        compareThreshState.clear()
                        preCompare := U(2).resized
                        retPixel   := ((lineBufferTwo.readAsync(rightBufferAddr) +^ lineBufferOne.readAsync(rightBufferAddr)) / U(2)).resized
                      }
                    }
                  }
                }
              }.otherwise {
                switch(nextRowBuffer) {
                  is(True) {
                    switch(lineBufferTwo.readAsync(rightBufferAddr) - lineBufferOne.readAsync(rightBufferAddr) >= inpThreshold) {
                      is(True) {
                        compareThreshState.set()
                        preCompare := U(2).resized
                        retPixel   := lineBufferOne.readAsync(rightBufferAddr)
                      }
                      is(False) {
                        compareThreshState.clear()
                        preCompare := U(2).resized
                        retPixel   := ((lineBufferOne.readAsync(rightBufferAddr) +^ lineBufferTwo.readAsync(rightBufferAddr)) / U(2)).resized
                      }
                    }
                  }
                  is(False) {
                    switch(lineBufferOne.readAsync(rightBufferAddr) - lineBufferTwo.readAsync(rightBufferAddr) >= inpThreshold) {
                      is(True) {
                        compareThreshState.set()
                        preCompare := U(2).resized
                        retPixel   := lineBufferTwo.readAsync(rightBufferAddr)
                      }
                      is(False) {
                        compareThreshState.clear()
                        preCompare := U(2).resized
                        retPixel   := ((lineBufferTwo.readAsync(rightBufferAddr) +^ lineBufferOne.readAsync(rightBufferAddr)) / U(2)).resized
                      }
                    }
                  }
                }
              }
            }
          }
        }

        when(io.dataOut.fire) {
          oddPixelInOddRowOutEnable.clear()
          preTwoCompare := U(0).resized
          compareMainPixelState.clear()
          compareCounterPixelState.clear()
          compareMainThreshState.clear()
          compareCounterThreshState.clear()
          when(!(willRowEndOutIfFire && io.dataOut.fire)) {
            leftBufferAddr  := ((U(1) + outPixelAddr) / U(2)).resized
            rightBufferAddr := ((U(3) + outPixelAddr) / U(2)).resized
          }
          holdOddPixelStateInOddRow.clear()
          holdEvenPixelStateInOddRow.set()
        }
      }
    }
  }

  when(io.dataOut.fire) {
    when(willRowEndOutIfFire) {
      outPixelAddr.clear()
      willRowEndOutIfFire.clear()
      when(willCompleteIfRowEnd) {
        outRowCount.clear()
        sameBuffer := False
        bufferRowCount.clear()
        bufferWAddr.clear()
        willCompleteIfRowEnd.clear()
      }.otherwise {
        outRowCount.increment()
      }
    }.otherwise {
      outPixelAddr.increment()
    }
  }
  when(willRowEndOutIfFire && io.dataOut.valid) {
    io.rowEndOut := True
  }
  when(interComplete) { interComplete := False }

  io.inpValidOut.allowOverride
  io.inpCompleteOut.allowOverride
  io.startOut.allowOverride
  io.inpValidOut    := True
  io.inpCompleteOut := interComplete
  io.startOut       := slaveStart
}

object GenTest extends App {
  SpinalVerilog(InterpolationStep1(IPConfig()))
}
