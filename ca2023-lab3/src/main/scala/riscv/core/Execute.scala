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
  val alu_ctrl = Module(new ALUControl) // NOTE: ALUControl es un módulo encargado de extraer la operación a realizar en base al opcode y los campos func3 y func7

  alu_ctrl.io.opcode := opcode
  alu_ctrl.io.funct3 := funct3
  alu_ctrl.io.funct7 := funct7

  // lab3(Execute) begin


  // NOTE: configuración del tipo de operación en la ALU
  alu.io.func := alu_ctrl.io.alu_funct

  // NOTE: configuración de los operandos
  alu.io.op1 := MuxLookup(
    opcode,
    0.U(Parameters.DataWidth),
    IndexedSeq(
      InstructionTypes.I  -> io.reg1_data,            // NOTE: si la instrucción es del tipo 'I' (operaciones con inmediatos), el primer operando es el dato alojado en el registro 'rs1'. Esto aplica también al subtipo 'l' (loads), puesto que el registro 'rs1' alberga la dirección base a la que se accederá
      InstructionTypes.S  -> io.reg1_data,            // NOTE: si la instrucción es del tipo 'S' (stores), el primer operando es la dirección base alojada en el registro 'rs1'
      InstructionTypes.B  -> io.instruction_address,  // NOTE: el primer operando en un branch es la dirección base del salto
      Instructions.jal    -> io.instruction_address,  // NOTE: si la instrucción es un salto incondicional, el primer operando de la ALU será la dirección de la instrucción de salto
      // Instructions.lui    -> 
    )
  )

  alu.io.op2 := MuxLookup(
    opcode,
    0.U(Parameters.DataWidth),
    IndexedSeq(
      InstructionTypes.I  -> io.immediate,                                        // NOTE: el segundo operando en las instrucciones del tipo 'I' es el inmediato a usar en la operación
      InstructionTypes.S  -> Cat(io.instruction(31, 35), io.instruction(11, 7)),  // NOTE: se concatenan las dos mitades del inmediato para formar el offset a partir de la dirección base alojada en 'rs1'
      InstructionTypes.B  -> Fill(26, io.instruction(30, 25)),                    // NOTE: el segundo operando de un branch es el offset a partir de la dirección base del salto (la dirección de la instrucción branch)
      Instructions.jal    -> Fill(22, io.instruction(30, 21))                     // NOTE: si la instrucción es un salto incondicional, el segundo operando será el offset (con signo, extendido a 32 bits) a partir de la dirección base
    )
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
