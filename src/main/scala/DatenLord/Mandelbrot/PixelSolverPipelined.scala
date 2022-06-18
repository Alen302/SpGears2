package DatenLord.Mandelbrot

import spinal.lib._
import spinal.core._

case class PixelSolverPipelined(g: PixelSolverGenerics) extends Component {
  val io = new Bundle {
    val cmd = slave Stream PixelTask(g)
    val rsp = master Stream PixelResult(g)
  }

  import g._

  val idWidth = 3
  class Context extends Bundle {
    val id        = UInt(idWidth bits)
    val x0, y0    = fixType
    val iteration = UInt(iterationWidth bits) default (0)
    val done      = Bool default (False)
  }

  case class InserterAndRouterAndAddStageContext() extends Context {
    val x, y = fixType
  }

  case class MulStageContext() extends Context {
    val xx, yy, xy = fixType
  }

  val inserter = new Area {
    val loopback   = Stream(InserterAndRouterAndAddStageContext())
    val freeId     = Counter(1 << idWidth, inc = io.cmd.fire)
    val cmdContext = Stream(InserterAndRouterAndAddStageContext())
    cmdContext.arbitrationFrom(io.cmd)
    cmdContext.id := freeId
    cmdContext.x0 := io.cmd.x
    cmdContext.y0 := io.cmd.y
    cmdContext.x  := 0.0
    cmdContext.y  := 0.0
    val output = StreamArbiterFactory.lowerFirst.noLock.on(Seq(loopback, cmdContext))
  }

  val mulStage = new Area {
    val input  = inserter.output.pipelined(true, true)
    val output = Stream(MulStageContext())
    output.arbitrationFrom(input)
    output.payload.assignSomeByName(input.payload)
    output.xx := (input.x * input.x).truncated
    output.yy := (input.y * input.y).truncated
    output.xy := (input.x * input.y).truncated
  }

  val addStage = new Area {
    val input  = mulStage.output.stage().stage()
    val output = Stream(InserterAndRouterAndAddStageContext())
    output.arbitrationFrom(input)
    output.payload.assignSomeByName(input.payload)
    output.x := (input.xx - input.yy + input.x0).truncated
    output.y := ((input.xy << 1) + input.y0).truncated
    output.done.allowOverride
    output.iteration.allowOverride
    output.done      := input.done || input.xx + input.yy >= 4.0 || input.iteration === iterationLimit
    output.iteration := input.iteration + (!output.done).asUInt
  }

  val router = new Area {
    val input    = addStage.output.stage()
    val wantedId = Counter(1 << idWidth, inc = io.rsp.fire)

    val rspValid = input.valid && input.done && wantedId === input.id

    val outputs = StreamDemux(input, rspValid.asUInt, 2)

    io.rsp.arbitrationFrom(outputs(1))
    io.rsp.iteration := input.iteration

    inserter.loopback << outputs(0)
  }

}

object GenPixelSolverPipelined extends App {
  SpinalVerilog(PixelSolverPipelined(PixelSolverGenerics(7, -20, 63)))
}
