package DatenLord.Mandelbrot

import spinal.core._
import spinal.lib._

case class PixelSolverGenerics(fixAmplitude: Int, fixResolution: Int, iterationLimit: Int) {
  val iterationWidth = log2Up(iterationLimit + 1)
  def iterationType  = UInt(iterationWidth bits)
  def fixType = SFix(
    peak       = fixAmplitude exp,
    resolution = fixResolution exp
  )
}

case class PixelTask(g: PixelSolverGenerics) extends Bundle {
  val x, y = g.fixType
}

case class PixelResult(g: PixelSolverGenerics) extends Bundle {
  val iteration = g.iterationType
}

case class PixelSolver(g: PixelSolverGenerics) extends Component {
  val io = new Bundle {
    val cmd = slave Stream PixelTask(g)
    val rsp = master Stream PixelResult(g)
  }

  import g._

  //Define states
  val x, y      = Reg(fixType) init (0)
  val iteration = Reg(iterationType) init (0)

  //Do some shared calculation
  val xx = x * x
  val yy = y * y
  val xy = x * y

  //Apply default assignment
  io.cmd.ready     := False
  io.rsp.valid     := False
  io.rsp.iteration := iteration

  when(io.cmd.valid) { // the mandelbrot iteration done
    when(xx + yy >= 4.0 || iteration === iterationLimit) {
      io.rsp.valid.set()
      when(io.rsp.ready) {
        io.cmd.freeRun()
        x         := 0
        y         := 0
        iteration := 0
      }
    } otherwise {
      x         := (xx - yy + io.cmd.x).truncated
      y         := ((xy << 1) + io.cmd.y).truncated
      iteration := iteration + 1
    }
  }
}
object GenPixelSolver extends App {
  SpinalVerilog(PixelSolver(PixelSolverGenerics(7, -20, 63)))
}
