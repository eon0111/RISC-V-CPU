package mux2

import chisel3._
import chisel3.util._

class Mux2 extends Module {
  val io = IO(new Bundle{
    val i1  = Input(Bool())
    val i2  = Input(Bool())
    val sel = Input(Bool())

    val o = Output(Bool())
  })

  io.o := MuxLookup(io.sel, 0.B)(
    Seq(
      0.U -> io.i1,
      1.U -> io.i2
    )
  )
}

object Mux2 extends App {
  (new chisel3.stage.ChiselStage).emitVerilog(new Mux2())
}