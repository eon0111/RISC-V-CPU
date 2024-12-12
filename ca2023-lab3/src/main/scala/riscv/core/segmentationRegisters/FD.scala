package riscv.core.segmentationRegisters

import chisel3._
import chisel3.util._
import chisel3.IO
import chisel3.Bundle
import riscv.Parameters

class FD extends Module {

  val io = IO(new Bundle {
    val f_instruction         = Input(UInt(Parameters.InstructionWidth))
    val f_instruction_address = Input(UInt(Parameters.InstructionWidth))

    val d_instruction         = Output(UInt(Parameters.InstructionWidth))
    val d_instruction_address = Output(UInt(Parameters.InstructionWidth))
  })

  val instruction         = RegInit(0.U(Parameters.InstructionWidth)) := io.f_instruction
  val instruction_address = RegInit(0.U(Parameters.InstructionWidth)) := io.f_instruction_address

}
