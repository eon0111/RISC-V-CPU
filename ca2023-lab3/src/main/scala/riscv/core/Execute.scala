// mycpu is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package riscv.core

import chisel3._
import chisel3.util.Cat
import chisel3.util.MuxLookup
import riscv.Parameters
import chisel3.util.Fill

object RsFwSel {
  val RegFileData    = 0.U(2.W)
  val ALUResultMemFw = 1.U(2.W)
  val ALUResultWbFw  = 2.U(2.W)
}

class Execute extends Module {
  val io = IO(new Bundle {
    val opcode              = Input(UInt(Parameters.OpcodeWidth))
    val funct3              = Input(UInt(Parameters.Func3Width))
    val rd                  = Input(UInt(Parameters.RDAddrWidth))
    val instruction_address = Input(UInt(Parameters.AddrWidth))
    val reg1_data           = Input(UInt(Parameters.DataWidth))
    val reg2_data           = Input(UInt(Parameters.DataWidth))
    val immediate           = Input(UInt(Parameters.DataWidth))
    val aluop1_source       = Input(UInt(1.W))
    val aluop2_source       = Input(UInt(1.W))
    val alu_func            = Input(ALUFunctions())

    // Señales de control para la gestión de las entradas de la ALU cuando se hace forwarding
    val rs1_src = Input(UInt(2.W))
    val rs2_src = Input(UInt(2.W))
    
    // Resultados adelantados desde las fases de memoria y writeback
    val alu_result_mem_fw = Input(UInt(Parameters.DataWidth))
    val alu_result_wb_fw  = Input(UInt(Parameters.DataWidth))

    val mem_alu_result  = Output(UInt(Parameters.DataWidth))
    val if_jump_flag    = Output(Bool())
    val if_jump_address = Output(UInt(Parameters.DataWidth))
  })

  val alu = Module(new ALU)

  val alu_rs1_src = MuxLookup(
    io.rs1_src,
    io.reg1_data,
    IndexedSeq(
      RsFwSel.RegFileData       -> io.reg1_data,
      RsFwSel.ALUResultMemFw -> io.alu_result_mem_fw,
      RsFwSel.ALUResultWbFw  -> io.alu_result_wb_fw
    )
  )

  val alu_rs2_src = MuxLookup(
    io.rs2_src,
    io.reg2_data,
    IndexedSeq(
      RsFwSel.RegFileData       -> io.reg2_data,
      RsFwSel.ALUResultMemFw -> io.alu_result_mem_fw,
      RsFwSel.ALUResultWbFw  -> io.alu_result_wb_fw
    )
  )

  // lab3(Execute) begin

  // Configuración del tipo de operación en la ALU
  alu.io.func := io.alu_func

  /* Selección del primer operando en base a la salida del Mux del decode en el que se toma la
   * decisión de tomar la dirección de la instrucción o el valor del primer registro de datos */
  alu.io.op1 := Mux(
    io.aluop1_source.asBool,
    io.instruction_address,
    alu_rs1_src
  )

  /* Selección del segundo operando de la ALU, también, a partir del valor de salida del Mux de
   * decode en el que se toma la decisión de operar con el inmediato o el segundo registro de datos */
  alu.io.op2 := Mux(
    io.aluop2_source.asBool,
    io.immediate,
    alu_rs2_src
  )

  // lab3(Execute) end

  io.mem_alu_result := alu.io.result

  /* NOTE: la arquitectura de este core difiere ligeramente de la arquitectura presentada en el
   * Harris, en lo que respecta a la etapa de ejecución. En las instrucciones de salto, el core del 
   * Harris emplea la ALU para determinar el cumplimiento de la condición de los saltos, en aquellos
   * en los que corresponda hacerlo, y utiliza un sumador separado para computar el target del salto
   * (PC + inmediato extendido)... */
  // TODO: comprobar qué hace la ALU en los saltos, porque el target se computa en un sumador a parte, y el flag se genera en una lógica adicional, no en la ALU. */
  // TODO: igual habría que integrar esta lógica adicional en la ALU, en lugar de tenerla fuera aunque, a priori, da un poco igual
  io.if_jump_flag := io.opcode === Instructions.jal ||
    (io.opcode === Instructions.jalr) ||
    (io.opcode === InstructionTypes.B) && MuxLookup(
      io.funct3,
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
  io.if_jump_address := io.immediate + Mux(io.opcode === Instructions.jalr, io.reg1_data, io.instruction_address)
}
