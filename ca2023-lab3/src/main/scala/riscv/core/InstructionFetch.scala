// mycpu is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package riscv.core

import chisel3._
import riscv.Parameters

object ProgramCounter {
  val EntryAddress = Parameters.EntryAddress
}

class InstructionFetch extends Module {
  val io = IO(new Bundle {
    val jump_flag_id          = Input(Bool()) // Indica si se ha producido un salto (es el cable que controla la entrada del PC -> la dirección de un branch o el PC+4)
    val jump_address_id       = Input(UInt(Parameters.AddrWidth)) // La dirección de un salto en caso de indicarse con el flag
    val instruction_read_data = Input(UInt(Parameters.DataWidth))
    val instruction_valid     = Input(Bool())

    val instruction_address = Output(UInt(Parameters.AddrWidth))  // La dirección de la siguiente instrucción a ejecutar
    val instruction         = Output(UInt(Parameters.InstructionWidth)) // La siguiente instrucción a ejecutar
  })
  val pc = RegInit(ProgramCounter.EntryAddress)

  when(io.instruction_valid) {
    io.instruction := io.instruction_read_data
    // lab3(InstructionFetch) begin

    // NOTE: en el flanco ascendente del primer ciclo de reloj, la señal instruction_address posee
    // el valor EntryAddress, que llega al registro de segmentación FD, donde se guardará ese valor
    // cuando llegue el flanco descendente del reloj. En ese momento, además, se guardará en el pc
    // la dirección de la siguiente instrucción a ejecutar, que será, o bien el target calculado en
    // una instrucción de salto, o el PC+4. 
    pc  := Mux(io.jump_flag_id, io.jump_address_id, pc + 4.U)

    // lab3(InstructionFetch) end

  }.otherwise {
    pc             := pc
    io.instruction := 0x00000013.U
  }
  io.instruction_address := pc
}
