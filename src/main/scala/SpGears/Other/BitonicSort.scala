package SpGears.Other

import spinal.core._
import spinal.core.sim._
import spinal.lib._

import scala.annotation.tailrec
import scala.language.postfixOps
import scala.util.Random

case class BitonicSort[T <: Data](dataType: HardType[T], n: Int, comparator: (Seq[T], Boolean) => Seq[T], isAscending: Boolean) extends Component {
  require(isPow2(n), "You should check you input !")

  val dataIn: Flow[Vec[T]]  = slave Flow Vec(dataType, n)
  val dataOut: Flow[Vec[T]] = master Flow Vec(dataType, n)

  private def subSortV1(dataIn: Seq[T], isAscending: Boolean): Seq[T] = {
    val len: Int = dataIn.length
    len match {
      case 2 => if (isAscending) comparator(dataIn, isAscending) else comparator(dataIn, isAscending)
      case _ =>
        val (halfP1, halfP2) = dataIn.splitAt(len / 2)
        val compared         = halfP1.zip(halfP2.reverse).map { case (h1, h2) => comparator(Seq(h1, h2), isAscending) }
        val ordered          = Seq(0, 1).map(i => compared.map(_.apply(i)))
        RegNext(Vec(subSortV2(ordered.head, isAscending) ++ subSortV2(ordered.last.reverse, isAscending)))
    }
  }
  private def subSortV2(dataIn: Seq[T], isAscending: Boolean): Seq[T] = {
    val len: Int = dataIn.length
    len match {
      case 2 => if (isAscending) comparator(dataIn, isAscending) else comparator(dataIn, isAscending)
      case _ =>
        val (halfP1, halfP2) = dataIn.splitAt(len / 2)
        val compared         = halfP1.zip(halfP2).map { case (h1, h2) => comparator(Seq(h1, h2), isAscending) }
        val ordered          = Seq(0, 1).map(i => compared.map(_.apply(i)))
        RegNext(Vec(subSortV2(ordered.head, isAscending) ++ subSortV2(ordered.last, isAscending)))
    }
  }

  val maxComStep: Int = n << 1

  @tailrec
  private def div(dataIn: Seq[T], step: Int = 2): Seq[T] = {
    if (step == maxComStep) dataIn
    else {
      val ordered: Seq[T] = dataIn
        .grouped(step)
        .toSeq
        .zipWithIndex
        .map { case (dataAfterGroup, _) => (dataAfterGroup, isAscending) }
        .flatMap { case (data, mode) => subSortV1(data, mode) }
      div(RegNext(Vec(ordered)), step << 1)
    }
  }

  dataOut.payload := Vec(div(dataIn.payload))
  val comDelay: Int = (1 to log2Up(n)).sum
  dataOut.valid := Delay(dataIn.valid, comDelay, init = False)
}

object BitonicSort extends App {
  def uIntComparator(dataIn: Seq[UInt], isAscending: Boolean): Vec[UInt] = {
    val dataHead: UInt = dataIn.head
    val dataLast: UInt = dataIn.last
    if (isAscending) { Mux(dataHead < dataLast, Vec(dataHead, dataLast), Vec(dataLast, dataHead)) }
    else { Mux(dataHead < dataLast, Vec(dataLast, dataHead), Vec(dataHead, dataLast)) }
  }
  val size   = 256
  val comNum = 256
  SimConfig.withWave.compile(BitonicSort(UInt(log2Up(size) bits), comNum, uIntComparator, isAscending = true)).doSim { dut =>
    dut.clockDomain.forkStimulus(3)
    dut.dataIn.valid #= false
    dut.clockDomain.waitSampling()

    val testCase: IndexedSeq[Int] = (0 until comNum).map(_ => Random.nextInt(size))
    println(testCase.mkString(" "))

    dut.dataIn.payload.zip(testCase).foreach { case (data, stimulus) => data #= stimulus }
    dut.dataIn.valid #= true
    dut.clockDomain.waitSampling()

    dut.dataIn.valid #= false
    dut.clockDomain.waitSampling(dut.comDelay)
    val result: IndexedSeq[Int] = dut.dataOut.payload.map(_.toInt)

    println(result.mkString(" "))
    if (result.zip(testCase.sorted).forall { case (i, i1) => i == i1 }) {
      simSuccess()
    } else {
      simFailure("Test fail !")
    }
  }
}
