package riscv.core.segmentationRegisters

import chisel3._
import chisel3.util._
import chisel3.IO
import chisel3.Bundle
import riscv.Parameters

class EM extends Module {
  val io = IO(new Bundle {
    val e_fetch_instr_addr    = Input(UInt(Parameters.InstructionWidth))
    val e_alu_result          = Input(UInt(Parameters.DataWidth))
    val e_regs_read_data_2    = Input(UInt(Parameters.DataWidth))
    val e_memory_read_enable  = Input(Bool())
    val e_memory_write_enable = Input(Bool())
    val e_funct3              = Input(UInt(3.W))

    val m_fetch_instr_addr    = Input(UInt(Parameters.InstructionWidth))
    val m_alu_result          = Output(UInt(Parameters.DataWidth))
    val m_regs_read_data_2    = Output(UInt(Parameters.DataWidth))
    val m_memory_read_enable  = Output(Bool())
    val m_memory_write_enable = Output(Bool())
    val m_funct3              = Output(UInt(3.W))
  })

  val fetch_instr_addr    = Output(UInt(Parameters.InstructionWidth)) := io.e_fetch_instr_addr
  val alu_result          = RegInit(0.U(Parameters.DataWidth))        := io.e_alu_result
  val regs_read_data_2    = RegInit(0.U(Parameters.DataWidth))        := io.e_regs_read_data_2
  val memory_read_enable  = RegInit(0.B)                              := io.e_memory_read_enable
  val memory_write_enable = RegInit(0.B)                              := io.e_memory_write_enable
  val funct3              = RegInit(0.U(3.W))                         := io.e_funct3

}
