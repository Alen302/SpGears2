import spinal.core._
import spinal.lib._
import spinal.core.sim._

import scala.util.Random

import scala.annotation.tailrec

case class BitonicSortV2 [T <: Data] (datatpye :HardType[T] , n :Int , comparator :(Seq[T] , Boolean) => Seq[T] , isUp :Boolean) extends Component {
  require(isPow2(n) , "You should check you input")

  val dataIn = slave Flow Vec(datatpye , n)
  val dataOut = master Flow Vec(datatpye , n)

  private def sub_sort_v1 (dataIn :Seq[T] , isUp :Boolean) :Seq[T] = {
    val l = dataIn.length
    l match {
      case 2 => if(isUp) comparator(dataIn , isUp) else comparator(dataIn , isUp)
      case _ => {
        val (half_p1 , half_p2) = dataIn.splitAt(l/2)
        val aftercom = half_p1.zip(half_p2.reverse).map{ case (h1 , h2) => comparator(Seq(h1 , h2) , isUp) }
        val ordered = Seq(0 , 1).map( i => aftercom.map(_.apply(i)))
        RegNext(Vec(sub_sort_v2(ordered(0) , isUp) ++ sub_sort_v2(ordered(1).reverse , isUp)))
      }
    }
  }
  private def sub_sort_v2 (dataIn :Seq[T] , isUp :Boolean) :Seq[T] = {
    val l = dataIn.length
    l match {
      case 2 => if(isUp) comparator(dataIn , isUp) else comparator(dataIn , isUp)
      case _ => {
        val (half_p1 , half_p2) = dataIn.splitAt(l/2)
        val aftercom = half_p1.zip(half_p2).map{ case (h1 , h2) => comparator(Seq(h1 , h2) , isUp) }
        val ordered = Seq(0 , 1).map( i => aftercom.map(_.apply(i)))
        RegNext(Vec(sub_sort_v2(ordered(0) , isUp) ++ sub_sort_v2(ordered(1) , isUp)))
      }
    }
  }

  val maxComStep = n << 1

  @tailrec
  private def div (dataIn :Seq[T] , step :Int = 2) :Seq[T] = {
    if(step == maxComStep) dataIn
    else {
      val ordered = dataIn.grouped(step).toSeq.zipWithIndex.map{ case (dataAfterGroup , index) => (dataAfterGroup , isUp)}
        .map{ case(data , mode) => sub_sort_v1(data , mode)}.flatten
      div(RegNext(Vec(ordered)) , step << 1)
    }
  }

  dataOut.payload := Vec(div(dataIn.payload , 2))
  val comdelay = (1 to log2Up(n)).sum
  dataOut.valid := Delay(dataIn.valid , comdelay , init = False)
}

object BitonicSortV2 extends App {
  def unitcomparator (datain :Seq[UInt] , isUp :Boolean) :Vec[UInt] = {
    val datahead = datain.head
    val datalast = datain.last
    if(isUp) {Mux(datahead < datalast , Vec(datahead , datalast) , Vec(datalast , datahead))}
    else {Mux(datahead < datalast , Vec(datalast , datahead) , Vec(datahead , datalast))}
  }
  val size = 256
  val comNum = 256
  SimConfig.withWave.compile(BitonicSortV2(UInt(log2Up(size) bits) , comNum , unitcomparator , true)).doSim{ dut =>
    dut.clockDomain.forkStimulus(3)
    dut.dataIn.valid #= false
    dut.clockDomain.waitSampling()

    val testCase = (0 until comNum).map(_ => Random.nextInt(size))
    println(testCase.mkString(" "))

    dut.dataIn.payload.zip(testCase).foreach{case (data , testdata) => data #= testdata}
    dut.dataIn.valid #= true
    dut.clockDomain.waitSampling()

    dut.dataIn.valid #= false
    dut.clockDomain.waitSampling(dut.comdelay)
    val result = dut.dataOut.payload.map(_.toInt)

    println(result.mkString(" "))
    assert(result.zip(testCase.sorted).forall{ case (i, i1) => i == i1})
  }
}