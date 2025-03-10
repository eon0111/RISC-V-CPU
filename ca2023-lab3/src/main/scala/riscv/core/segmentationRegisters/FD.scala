package riscv.core.segmentationRegisters

import chisel3._
import chisel3.util._
import chisel3.IO
import chisel3.Bundle
import riscv.Parameters
import riscv.core.Instructions

class FD extends Module {

  val io = IO(new Bundle {
    val f_instruction = Input(UInt(Parameters.InstructionWidth))
    val f_current_pc  = Input(UInt(Parameters.AddrWidth))
    val f_next_pc     = Input(UInt(Parameters.AddrWidth))

    /* TODO: meter una señal de entrada que sea el reset que llega de la hazard unit cuando se
     * determina el valor del jump_flag en 'execute' */
    /* TODO: conectar el reset que llega de la unidad de amenazas al reset de todos los registros */

    val d_instruction = Output(UInt(Parameters.InstructionWidth))
    val d_current_pc  = Output(UInt(Parameters.AddrWidth))
    val d_next_pc     = Output(UInt(Parameters.AddrWidth))
  })

  val instruction = RegInit(0.U(Parameters.InstructionWidth))
  val current_pc  = RegInit(0.U(Parameters.AddrWidth))
  val next_pc     = RegInit(0.U(Parameters.AddrWidth))

  instruction := io.f_instruction
  current_pc  := io.f_current_pc
  next_pc     := io.f_next_pc

  io.d_instruction := instruction
  io.d_current_pc  := current_pc
  io.d_next_pc     := next_pc
}
