package DatenLord.Mandelbrot

import spinal.lib._
import spinal.core._

case class PixelSolverMultiCore(g: PixelSolverGenerics, coreCount: Int) extends Component {
  val io = new Bundle {
    val cmd = slave Stream (PixelTask(g))
    val rsp = master Stream (PixelResult(g))
  }

  val pixelTaskDispatcher = StreamDispatcherSequencial(io.cmd, coreCount)
  val pixelTaskSolver     = Seq.fill(coreCount)(PixelSolver(g))
  val pixelResults        = pixelTaskSolver.map(_.io.rsp.stage())
  val pixelResultArbiter  = StreamCombinerSequential(pixelResults)

  for (solverId <- 0 until coreCount) {
    pixelTaskSolver(solverId).io.cmd <-< pixelTaskDispatcher(solverId)
  }
  io.rsp << pixelResultArbiter
}
object GenPixelSolverMultiCore extends App {
  SpinalVerilog(PixelSolverMultiCore(PixelSolverGenerics(7, -20, 63), 4))
}
