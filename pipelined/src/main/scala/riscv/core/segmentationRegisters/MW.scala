package riscv.core.segmentationRegisters

import chisel3._
import chisel3.util._
import chisel3.IO
import chisel3.Bundle
import riscv.Parameters

class MW extends Module {
  val io = IO(new Bundle {
    val m_alu_result        = Input(UInt(Parameters.DataWidth))
    val m_mem_read_data     = Input(UInt(Parameters.DataWidth))
    val m_next_pc           = Input(UInt(Parameters.InstructionWidth))
    val m_wb_src            = Input(UInt(2.W))
    val m_reg_write_enable  = Input(Bool())
    val m_reg_write_address = Input(UInt(Parameters.PhysicalRegisterAddrWidth))

    val w_alu_result        = Output(UInt(Parameters.DataWidth))
    val w_mem_read_data     = Output(UInt(Parameters.DataWidth))
    val w_next_pc           = Output(UInt(Parameters.InstructionWidth))
    val w_wb_src            = Output(UInt(2.W))
    val w_reg_write_enable  = Output(Bool())
    val w_reg_write_address = Output(UInt(Parameters.PhysicalRegisterAddrWidth))
  })

  val alu_result          = RegInit(0.U(Parameters.DataWidth))
  val mem_read_data       = RegInit(0.U(Parameters.DataWidth))
  val next_pc             = RegInit(0.U(Parameters.InstructionWidth))
  val wb_src              = RegInit(0.U(2.W))
  val reg_write_enable    = RegInit(0.U.asBool)
  val reg_write_address   = RegInit(0.U(Parameters.PhysicalRegisterAddrWidth))

  alu_result        := io.m_alu_result
  mem_read_data     := io.m_mem_read_data
  next_pc           := io.m_next_pc
  wb_src            := io.m_wb_src
  reg_write_enable  := io.m_reg_write_enable
  reg_write_address := io.m_reg_write_address

  io.w_alu_result        := alu_result
  io.w_mem_read_data     := mem_read_data
  io.w_next_pc           := next_pc
  io.w_wb_src            := wb_src
  io.w_reg_write_enable  := reg_write_enable
  io.w_reg_write_address := reg_write_address

}
