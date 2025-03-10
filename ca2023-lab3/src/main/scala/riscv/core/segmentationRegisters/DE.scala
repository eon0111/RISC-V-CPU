package riscv.core.segmentationRegisters

import chisel3._
import chisel3.util._
import chisel3.IO
import chisel3.Bundle
import riscv.Parameters
import riscv.core.ALUFunctions

class DE extends Module {
  
  val io = IO(new Bundle {
    // Palabra de control
    val d_ex_immediate        = Input(UInt(Parameters.DataWidth))
    val d_ex_alu_func         = Input(ALUFunctions())
    val d_ex_aluop1_source    = Input(UInt(1.W))
    val d_ex_aluop2_source    = Input(UInt(1.W))
    val d_memory_read_enable  = Input(Bool())
    val d_memory_write_enable = Input(Bool())
    val d_wb_reg_write_source = Input(UInt(2.W))
    val d_reg_write_enable    = Input(Bool())
    val d_reg_write_address   = Input(UInt(Parameters.PhysicalRegisterAddrWidth))

    val e_ex_immediate        = Output(UInt(Parameters.DataWidth))
    val e_ex_alu_func         = Output(ALUFunctions())
    val e_ex_aluop1_source    = Output(UInt(1.W))
    val e_ex_aluop2_source    = Output(UInt(1.W))
    val e_memory_read_enable  = Output(Bool())
    val e_memory_write_enable = Output(Bool())
    val e_wb_reg_write_source = Output(UInt(2.W))
    val e_reg_write_enable    = Output(Bool())
    val e_reg_write_address   = Output(UInt(Parameters.PhysicalRegisterAddrWidth))
    
    // Datos
    val d_current_pc       = Input(UInt(Parameters.InstructionWidth))
    val d_next_pc          = Input(UInt(Parameters.InstructionWidth))
    val d_opcode           = Input(UInt(Parameters.OpcodeWidth))
    val d_func3            = Input(UInt(Parameters.Func3Width))
    val d_func7            = Input(UInt(Parameters.Func7Width))
    val d_regs_read_data_1 = Input(UInt(Parameters.DataWidth))
    val d_regs_read_data_2 = Input(UInt(Parameters.DataWidth))

    val e_current_pc       = Output(UInt(Parameters.InstructionWidth))
    val e_next_pc          = Output(UInt(Parameters.InstructionWidth))
    val e_opcode           = Output(UInt(Parameters.OpcodeWidth))
    val e_func3            = Output(UInt(Parameters.Func3Width))
    val e_func7            = Output(UInt(Parameters.Func7Width))
    val e_regs_read_data_1 = Output(UInt(Parameters.DataWidth))
    val e_regs_read_data_2 = Output(UInt(Parameters.DataWidth))
  })

  val current_pc          = RegInit(0.U(Parameters.InstructionWidth))
  val next_pc             = RegInit(0.U(Parameters.InstructionWidth))
  val opcode              = RegInit(0.U(Parameters.OpcodeWidth))
  val func3               = RegInit(0.U(Parameters.Func3Width))
  val func7               = RegInit(0.U(Parameters.Func7Width))
  val regs_read_data_1    = RegInit(0.U(Parameters.DataWidth))
  val regs_read_data_2    = RegInit(0.U(Parameters.DataWidth))
  val ex_immediate        = RegInit(0.U(Parameters.DataWidth))
  val ex_alu_func         = RegInit(ALUFunctions.add)
  val ex_aluop1_source    = RegInit(0.U(1.W))
  val ex_aluop2_source    = RegInit(0.U(1.W))
  val memory_read_enable  = RegInit(0.B)
  val memory_write_enable = RegInit(0.B)
  val wb_reg_write_source = RegInit(0.U(2.W))
  val reg_write_enable    = RegInit(0.U.asBool)
  val reg_write_address   = RegInit(0.U(Parameters.PhysicalRegisterAddrWidth))

  current_pc          := io.d_current_pc
  next_pc             := io.d_next_pc
  opcode              := io.d_opcode
  func3               := io.d_func3
  func7               := io.d_func7
  regs_read_data_1    := io.d_regs_read_data_1
  regs_read_data_2    := io.d_regs_read_data_2
  ex_immediate        := io.d_ex_immediate
  ex_alu_func         := io.d_ex_alu_func
  ex_aluop1_source    := io.d_ex_aluop1_source
  ex_aluop2_source    := io.d_ex_aluop2_source
  memory_read_enable  := io.d_memory_read_enable
  memory_write_enable := io.d_memory_write_enable
  wb_reg_write_source := io.d_wb_reg_write_source
  reg_write_enable    := io.d_reg_write_enable
  reg_write_address   := io.d_reg_write_address

  io.e_current_pc          := current_pc
  io.e_next_pc             := next_pc
  io.e_opcode              := opcode
  io.e_func3               := func3
  io.e_func7               := func7
  io.e_ex_alu_func         := ex_alu_func
  io.e_regs_read_data_1    := regs_read_data_1
  io.e_regs_read_data_2    := regs_read_data_2
  io.e_ex_immediate        := ex_immediate
  io.e_ex_aluop1_source    := ex_aluop1_source
  io.e_ex_aluop2_source    := ex_aluop2_source
  io.e_memory_read_enable  := memory_read_enable
  io.e_memory_write_enable := memory_write_enable
  io.e_wb_reg_write_source := wb_reg_write_source
  io.e_reg_write_enable    := reg_write_enable
  io.e_reg_write_address   := reg_write_address

}
