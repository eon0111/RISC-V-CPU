package riscv.core

import chisel3._
import riscv.Parameters

class HazardUnit extends Module {

  val io = IO(new Bundle {
    val jump_flag = Input(Bool())

    val FD_flush  = Output(Bool())
  })

  io.FD_flush := Mux(
    io.jump_flag,
    1.B,
    0.B
  )
  
}
