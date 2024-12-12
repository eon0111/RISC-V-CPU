package riscv.core.segmentationRegisters

import chisel3._
import chisel3.util._
import chisel3.IO
import chisel3.Bundle
import riscv.Parameters

class DE extends Module {
  
  val io = IO(new Bundle {
    val d_fetch_instr_addr    = Input(UInt(Parameters.InstructionWidth))
    val d_fetch_instr         = Input(UInt(Parameters.InstructionWidth))
    val d_regs_read_data_1    = Input(UInt(Parameters.DataWidth))
    val d_regs_read_data_2    = Input(UInt(Parameters.DataWidth))
    val d_ex_immediate        = Input(UInt(Parameters.DataWidth))
    val d_ex_aluop1_source    = Input(UInt(1.W))
    val d_ex_aluop2_source    = Input(UInt(1.W))
    val d_memory_read_enable  = Input(Bool())
    val d_memory_write_enable = Input(Bool())
    val d_wb_reg_write_source = Input(UInt(2.W))

    val e_fetch_instr_addr    = Output(UInt(Parameters.InstructionWidth))
    val e_fetch_instr         = Output(UInt(Parameters.InstructionWidth)) // FIXME: esto es una marranada. Pasar tan solo los campos de la instr. que necesite el Execute
                                                                          // TODO: revisar más cosas como esta
    val e_regs_read_data_1    = Output(UInt(Parameters.DataWidth))
    val e_regs_read_data_2    = Output(UInt(Parameters.DataWidth))
    val e_ex_immediate        = Output(UInt(Parameters.DataWidth))
    val e_ex_aluop1_source    = Output(UInt(1.W))
    val e_ex_aluop2_source    = Output(UInt(1.W))
    val e_memory_read_enable  = Output(Bool())
    val e_memory_write_enable = Output(Bool())
    val e_wb_reg_write_source = Output(UInt(2.W))
  })

  val fetch_instr_addr    = RegInit(0.U(Parameters.InstructionWidth)) := io.d_fetch_instr_addr
  val fetch_instr         = RegInit(0.U(Parameters.InstructionWidth)) := io.d_fetch_instr
  val regs_read_data_1    = RegInit(0.U(Parameters.DataWidth))        := io.d_regs_read_data_1
  val regs_read_data_2    = RegInit(0.U(Parameters.DataWidth))        := io.d_regs_read_data_2
  val ex_immediate        = RegInit(0.U(Parameters.DataWidth))        := io.d_ex_immediate
  val ex_aluop1_source    = RegInit(0.U(1.W))                         := io.d_ex_aluop1_source
  val ex_aluop2_source    = RegInit(0.U(1.W))                         := io.d_ex_aluop1_source
  val memory_read_enable  = RegInit(0.B)                              := io.d_memory_read_enable
  val memory_write_enable = RegInit(0.B)                              := io.d_memory_write_enable
  val wb_reg_write_source = RegInit(0.U(2.W))                         := io.d_wb_reg_write_source

}
