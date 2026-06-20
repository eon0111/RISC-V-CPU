// mycpu is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package board.verilator

import chisel3._
import chisel3.stage.ChiselGeneratorAnnotation
import chisel3.stage.ChiselStage
import peripheral._
import riscv.core.CPU
import riscv.CPUBundle
import riscv.Parameters

class Top extends Module {

  val io   = IO(new Bundle {
    // NOTE: lo mapearemos a uno de los switches de la placa para controlar la
    // ejecución de los programas en el core de modo que, cuando el switch se
    // encuentre en una determinada posición, se proceda a la inicialización de
    // la memoria conforme al binario transmitido al dispositivo UART y, cuando
    // el switch se encuentre en la posición opuesta, el core comience a ejecutar
    // las instrucciones del programa
    val instruction_valid  = Input(Bool())
    val i_uart_rx          = Input(Bool()) // NOTE: la línea de datos del UART
    val o_program_finished = Output(Bool())
  })
  
  val cpu  = Module(new CPU)
  val mem  = Module(new Memory(8192))
  val uart = Module(new UART)

  withReset(~reset.asBool) {
    uart.io.sw_tx     := io.instruction_valid
    uart.io.i_uart_rx := io.i_uart_rx
  
    // io.deviceSelect           := 0.U
    // cpu.io.debug_read_address := io.debug_read_address
    // io.debug_read_data        := cpu.io.debug_read_data
  
    cpu.io.debug_read_address  := 0.U
    mem.io.debug_read_address  := 0.U
    cpu.io.instruction_valid   := io.instruction_valid
    mem.io.instruction_address := cpu.io.instruction_address
    cpu.io.instruction         := mem.io.instruction
  
  
    when(!io.instruction_valid) {
      uart.io.mem_bundle <> mem.io.bundle
      cpu.io.memory_bundle.read_data := 0.U
    } .otherwise {
      uart.io.mem_bundle.read_data := 0.U
      cpu.io.memory_bundle <> mem.io.bundle
    }
  }

  // FIXME: habrá que identificar el fin del programa desde dentro del core,
  // reconociendo el bucle que se produce al final. Por ahora tengo puesto esto
  // porque si no el compilador FIRRTL va a asumir que como los módulos dentro de
  // Top no producen ninguna salida que vaya a poder ser leída fuera del módulo
  // ("en el mundo real"), es código muerto y va a optimizarlo eliminándolo.
  // Es una puta absurdez, pero es lo que hay...
  io.o_program_finished := cpu.io.instruction_address(0,0)

}

//object VerilogGenerator extends App {
//  (new ChiselStage)
//    .execute(Array("-X", "verilog", "-td", "verilog/verilator"), Seq(ChiselGeneratorAnnotation(() => new Top())))
//}

object Top extends App {
  (new chisel3.stage.ChiselStage).emitVerilog(new Top())
  //println(chisel3.getVerilogString(new Top))
}

// https://stackoverflow.com/questions/59005845/chisel-compiled-successfully-but-cant-generate-correctly-verilog