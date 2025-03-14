package riscv.core.segmentationRegisters

import chisel3._
import chisel3.util._
import chisel3.IO
import chisel3.Bundle
import riscv.Parameters

class EM extends Module {
  val io = IO(new Bundle {
    val e_alu_result          = Input(UInt(Parameters.DataWidth))
    val e_regs_read_data_2    = Input(UInt(Parameters.DataWidth))
    val e_memory_read_enable  = Input(Bool())
    val e_memory_write_enable = Input(Bool())
    val e_funct3              = Input(UInt(3.W))
    val e_next_pc             = Input(UInt(Parameters.InstructionWidth))
    val e_wb_src              = Input(UInt(2.W))
    val e_reg_write_enable    = Input(Bool())
    val e_reg_write_address   = Input(UInt(Parameters.PhysicalRegisterAddrWidth))

    val m_alu_result          = Output(UInt(Parameters.DataWidth))
    val m_regs_read_data_2    = Output(UInt(Parameters.DataWidth))
    val m_memory_read_enable  = Output(Bool())
    val m_memory_write_enable = Output(Bool())
    val m_funct3              = Output(UInt(3.W))
    val m_next_pc             = Output(UInt(Parameters.InstructionWidth))
    val m_wb_src              = Output(UInt(2.W))
    val m_reg_write_enable    = Output(Bool())
    val m_reg_write_address   = Output(UInt(Parameters.PhysicalRegisterAddrWidth))
  })

  val alu_result          = RegInit(0.U(Parameters.DataWidth))        
  val regs_read_data_2    = RegInit(0.U(Parameters.DataWidth))        
  val memory_read_enable  = RegInit(0.B)                              
  val memory_write_enable = RegInit(0.B)                              
  val funct3              = RegInit(0.U(3.W))     
  val next_pc             = RegInit(0.U(Parameters.InstructionWidth))
  val wb_src              = RegInit(0.U(2.W))
  val reg_write_enable    = RegInit(0.U.asBool)
  val reg_write_address   = RegInit(0.U(Parameters.PhysicalRegisterAddrWidth))

  alu_result          := io.e_alu_result
  regs_read_data_2    := io.e_regs_read_data_2
  memory_read_enable  := io.e_memory_read_enable
  memory_write_enable := io.e_memory_write_enable
  funct3              := io.e_funct3
  next_pc             := io.e_next_pc
  wb_src              := io.e_wb_src
  reg_write_enable    := io.e_reg_write_enable
  reg_write_address   := io.e_reg_write_address

  io.m_alu_result          := alu_result
  io.m_regs_read_data_2    := regs_read_data_2
  io.m_memory_read_enable  := memory_read_enable
  io.m_memory_write_enable := memory_write_enable
  io.m_funct3              := funct3
  io.m_next_pc             := next_pc
  io.m_wb_src              := wb_src
  io.m_reg_write_enable    := reg_write_enable
  io.m_reg_write_address   := reg_write_address

}
