package riscv.core.segmentationRegisters

import chisel3._
import chisel3.util._
import chisel3.IO
import chisel3.Bundle
import riscv.Parameters
import riscv.core.Instructions

class FD extends Module {

  val io = IO(new Bundle {
    val f_instruction         = Input(UInt(Parameters.InstructionWidth))
    val f_instruction_address = Input(UInt(Parameters.AddrWidth))

    // FIXME: por el momento no necesito sacar el PC+4 del InstructionFetch porque se hace en
    // Writeback, pero es un poco chapucero...

    val d_instruction         = Output(UInt(Parameters.InstructionWidth))
    val d_instruction_address = Output(UInt(Parameters.AddrWidth))
  })

  val instruction         = RegInit(0.U(Parameters.InstructionWidth))
  val instruction_address = RegInit(0.U(Parameters.AddrWidth))

  instruction         := io.f_instruction
  instruction_address := io.f_instruction_address

  io.d_instruction         := instruction
  io.d_instruction_address := instruction_address
}
