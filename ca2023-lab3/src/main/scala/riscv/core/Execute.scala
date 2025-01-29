// mycpu is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package riscv.core

import chisel3._
import chisel3.util.Cat
import chisel3.util.MuxLookup
import riscv.Parameters
import chisel3.util.Fill

class Execute extends Module {
  val io = IO(new Bundle {
    val instruction         = Input(UInt(Parameters.InstructionWidth))
    val instruction_address = Input(UInt(Parameters.AddrWidth))
    val reg1_data           = Input(UInt(Parameters.DataWidth))
    val reg2_data           = Input(UInt(Parameters.DataWidth))
    val immediate           = Input(UInt(Parameters.DataWidth))
    val aluop1_source       = Input(UInt(1.W))
    val aluop2_source       = Input(UInt(1.W))

    val mem_alu_result  = Output(UInt(Parameters.DataWidth))
    val if_jump_flag    = Output(Bool())
    val if_jump_address = Output(UInt(Parameters.DataWidth))
  })

  val opcode = io.instruction(6, 0)
  val funct3 = io.instruction(14, 12)
  val funct7 = io.instruction(31, 25)
  val rd     = io.instruction(11, 7)
  val uimm   = io.instruction(19, 15)

  val alu      = Module(new ALU)

  // FIXME: meter al alu_ctrl en el Decode, porque la señal que gobierna el comportamiento de la ALU también debería formar parte de la palabra de control
  val alu_ctrl = Module(new ALUControl) // NOTE: ALUControl es un módulo encargado de extraer la operación a realizar en base al opcode y los campos func3 y func7

  alu_ctrl.io.opcode := opcode
  alu_ctrl.io.funct3 := funct3
  alu_ctrl.io.funct7 := funct7

  // lab3(Execute) begin

  // NOTE: configuración del tipo de operación en la ALU
  alu.io.func := alu_ctrl.io.alu_funct

  // NOTE: selección del primer operando en base a la salida del Mux del decode en el que se toma la decisión de tomar la dirección de la instrucción o el valor del primer registro de datos
  alu.io.op1 := Mux(
    io.aluop1_source.asBool,
    io.instruction_address,
    io.reg1_data
  )

  // NOTE: selección del segundo operando de la ALU, también, a partir del valor de salida del Mux del decode en el que se toma la decisión de operar con el inmediato o el segundo registro de datos
  alu.io.op2 := Mux(
    io.aluop2_source.asBool,
    io.immediate,
    io.reg2_data
  )

  // lab3(Execute) end

  io.mem_alu_result := alu.io.result
  io.if_jump_flag := opcode === Instructions.jal ||
    (opcode === Instructions.jalr) ||
    (opcode === InstructionTypes.B) && MuxLookup(
      funct3,
      false.B,
      IndexedSeq(
        InstructionsTypeB.beq  -> (io.reg1_data === io.reg2_data),
        InstructionsTypeB.bne  -> (io.reg1_data =/= io.reg2_data),
        InstructionsTypeB.blt  -> (io.reg1_data.asSInt < io.reg2_data.asSInt),
        InstructionsTypeB.bge  -> (io.reg1_data.asSInt >= io.reg2_data.asSInt),
        InstructionsTypeB.bltu -> (io.reg1_data.asUInt < io.reg2_data.asUInt),
        InstructionsTypeB.bgeu -> (io.reg1_data.asUInt >= io.reg2_data.asUInt)
      )
    )
  io.if_jump_address := io.immediate + Mux(opcode === Instructions.jalr, io.reg1_data, io.instruction_address)
}
