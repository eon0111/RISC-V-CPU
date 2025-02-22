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
    val jump_flag_id          = Input(Bool()) // Indica si se ha producido un salto (es el cable que controla la entrada del PC -> el target de un salto, o el PC+4)
    val jump_address_id       = Input(UInt(Parameters.AddrWidth)) // La dirección de un salto en caso de indicarse con el flag
    val instruction_read_data = Input(UInt(Parameters.DataWidth)) // La instrucción leída de memoria en la dirección que indica el PC actual (current_pc)
    val instruction_valid     = Input(Bool())

    val current_pc            = Output(UInt(Parameters.AddrWidth))  // La dirección de la instrucción que va a leerse de la memoria en el flanco ascendente del ciclo actual
    val next_pc               = Output(UInt(Parameters.AddrWidth))  // La dirección de la instrucción siguiente (PC + 4)
    val instruction           = Output(UInt(Parameters.InstructionWidth)) // La siguiente instrucción a ejecutar
  })

  val pc = RegInit(ProgramCounter.EntryAddress)

  /* NOTE: se crea esta señal para no tener un sumador en la realimentación del PC, y otro en la
   * del PC+4 hacia la fase de decode */
  val pc_plus_four = pc + 4.U

  when(io.instruction_valid && !io.jump_flag_id) {
    io.instruction := io.instruction_read_data
    // lab3(InstructionFetch) begin

    /*
      NOTE: en el flanco ascendente del primer ciclo de reloj, la señal current_pc posee
     * el valor EntryAddress, que llega al registro de segmentación FD, donde se guardará ese valor
     * cuando llegue el flanco descendente del reloj. En ese momento, además, se guardará en el pc
     * la dirección de la siguiente instrucción a ejecutar, que será, o bien el target calculado por
     * una instrucción de salto, o el PC+4
     */
    pc  := Mux(io.jump_flag_id, io.jump_address_id, pc_plus_four)

    // lab3(InstructionFetch) end

  }.otherwise {
    /* 
      NOTE: cuando se decodifica una instrucción de salto y se determina que ese salto debe llevarse
      a cabo, se activa la señal jump_flag_id, tras lo cual, se guarda en el PC el target del salto.
      No obstante, el cambio en el valor del PC no es instantáneo, sino que, debido a cómo se
      construyen internamente los registros en Chisel, el valor en la entrada de un registro no se
      escribe en él hasta llegado el siguiente flanco ascendente del reloj. En el contexto de nuestra
      CPU, esto implica que cuando se determina que un salto debe ser tomado, el PC siguiente a la
      instrucción de salto no es el targe, si no el PC de la instrucción siguiente al salto, lo cual
      provoca que esa instrucción sea leída de la memoria y pase al pipeline. Es por ello por lo que
      se sobreescribe el valor de la señal de salida instruction, haciendo que mientras el flag de
      salto se encuentre activo, la siguiente instrucción que pase al pipeline, más concretamente,
      al registro de segmentación FD, sea un NOP.
      Debido a la inserción del NOP, se pierde un ciclo por cada salto tomado.

      - Ejemplo (simple_subroutine.S): cuando la instrucción de salto a la subrutina 'add_one' pasa
      por primera vez a la segunda fase en el pipeline, la lógica del módulo de 'execute' determina
      que hay un salto incondicional, y activa la señal 'jump_flag_id'. A la activación de esa señal,
      la lógica del módulo de 'fetch' determina que el siguiente PC deberá ser el target, y que la
      instrucción que saldrá del módulo (puerto 'instruction'), será un 'NOP', invalidando la lectura
      de la instrucción siguiente al 'JAL'. En el siguiente ciclo de reloj, se decodificará un 'NOP',
      y la instrucción leída será la primera de la subrutina, puesto que así lo indicará el PC.
    */
    pc             := Mux(io.jump_flag_id, io.jump_address_id, pc)
    io.instruction := 0x00000013.U
  }

  io.current_pc := pc
  io.next_pc    := pc_plus_four
}
