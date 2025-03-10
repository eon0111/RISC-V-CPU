package riscv

import java.nio.ByteBuffer
import java.nio.ByteOrder

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import peripheral.InstructionROM
import peripheral.Memory
import peripheral.ROMLoader
import riscv.core.CPU
import riscv.core.ProgramCounter
import riscv.Parameters
import riscv.TestAnnotations
import chisel3.util.experimental.loadMemoryFromFileInline
import org.scalatest.tagobjects
import firrtl.FirrtlProtos.Firrtl.Statement
import riscv.core.segmentationRegisters.FD

class TestTopModule(exeFilename: String) extends Module {
  val io = IO(new Bundle {
    val mem_debug_read_address  = Input(UInt(Parameters.AddrWidth))
    val regs_debug_read_address = Input(UInt(Parameters.PhysicalRegisterAddrWidth))
    val regs_debug_read_data    = Output(UInt(Parameters.DataWidth))
    val mem_debug_read_data     = Output(UInt(Parameters.DataWidth))

    val instruction_valid       = Output(Bool())

    val srFD_d_instruction_address = Output(UInt(Parameters.AddrWidth))
    val srFD_d_instruction         = Output(UInt(Parameters.InstructionWidth))
  })

  /* NOTE: En el proceso de carga de binarios están involucrados 4 módulos, que son:
   *
   * - Memory: la memoria principal de la CPU. La memoria está unificada, es decir, que no hay
   *   memoria de instrucciones por un lado y memoria de datos por otro, sino que tanto datos como
   *   instrucciones se emplazan sobre la misma memoria física. El valor de capacidad que se pasa
   *   como parámetro es el número de entradas de la memoria, por lo que la capacidad será
   *   8192 * 32 = 262144 bits = 32 KiB
   * 
   * - ROMLoader: en el módulo ROMLoader se define el comportamiento hardware del cargador que,
   *   básicamente, es controlar que no se excede la capacidad de la memoria durante la carga del
   *   binario, e ir generando las direcciones físicas sobre las que se irán emplazando las
   *   instrucciones leídas del fichero binario. En la línea 30 del fichero de implementación de
   *   este módulo, con '(address << 2.U)' se van formando múltiplos de 4 a partir del 0, y se suma
   *   ese desplazamiento al entry point ('Parameters.EntryAddress') para formar la dirección
   *   efectiva en que será emplazada la siguiente instrucción en memoria, que será leída por medio
   *   del puerto 'rom_data', que se conecta al puerto de salida ('data') de la ROM de instrucciones
   *   ('InstructionROM'). Por ese puerto se van sacando las instrucciones que se leen del fichero
   *   binario que se indica en la instanciación del módulo 'InstructionROM'
   * 
   * - InstructionROM: en el módulo InstructionROM se define la función 'readAsmBinary' que lee un
   *   fichero de código binario y elabora un fichero de texto plano con las instrucciones de que se
   *   compone el binario.
   *   El puerto de entrada 'adress' se conecta al puerto de salida 'rom_address' de ROMLoader,
   *   por donde sale el offset con el que se localiza la siguiente instrucción a sacar por 'data'.
   *   Este offset se calcula en la línea 32 de 'ROMLoader.scala', y es valor del registro 'address'
   *   (0, 1, 2, ... capacity-1)
   */
  val mem             = Module(new Memory(8192))
  val instruction_rom = Module(new InstructionROM(exeFilename))
  val rom_loader      = Module(new ROMLoader(instruction_rom.capacity))
  
  rom_loader.io.rom_data     := instruction_rom.io.data
  rom_loader.io.load_address := Parameters.EntryAddress
  instruction_rom.io.address := rom_loader.io.rom_address

  // NOTE: esto vamos a usarlo para hacer que la CPU vaya más lenta. Vamos a probar con múltiples configuraciones hasta que con alguna de ellas las cosas funcionen
  // val CPU_clkdiv = RegInit(UInt(2.W), 0.U)
  // val CPU_tick   = Wire(Bool())
  // val CPU_next   = Wire(UInt(2.W))
  // CPU_next   := Mux(CPU_clkdiv === 3.U, 0.U, CPU_clkdiv + 1.U)
  // CPU_tick   := CPU_clkdiv === 0.U
  // CPU_clkdiv := CPU_next

  // withClock(CPU_tick.asClock) {
    val cpu = Module(new CPU)
    cpu.io.debug_read_address  := 0.U
    cpu.io.instruction_valid   := rom_loader.io.load_finished // NOTE: Hasta que el cargador no termina de leer el binario no se activa el flag que hace que la unidad de fetch comience a realizar las actualizaciones del PC, el cual se inicializa con la dirección establecida en Parameters.EntryAddress (0x1000)
    io.instruction_valid       := rom_loader.io.load_finished // NOTE: se conecta el flag que indica que el programa ha sido cargado en memoria, a la señal que me permite esperar a que se produzca ese evento antes de depurar el código
    mem.io.instruction_address := cpu.io.instruction_address  // NOTE: Inicialmente, se establece en la unidad de fetch que la primera instrucción del programa se encuentra localizada en la dirección 0x1000 (Parameters.EntryAddress)
    cpu.io.instruction         := mem.io.instruction

    when(!rom_loader.io.load_finished) {
      rom_loader.io.bundle <> mem.io.bundle // NOTE: el operador '<>' conecta señales con el mismo nombre
      cpu.io.memory_bundle.read_data := 0.U
    }.otherwise {
      rom_loader.io.bundle.read_data := 0.U
      cpu.io.memory_bundle <> mem.io.bundle // NOTE: cuando el cargador finaliza su trabajo, se desacopla de la memoria y esta se conecta al core ya con el programa cargado y listo para ejecutar
    }

    cpu.io.debug_read_address := io.regs_debug_read_address
    io.regs_debug_read_data   := cpu.io.debug_read_data

    // Connect segmentation registers debug signals
    io.srFD_d_instruction_address := cpu.io.srFD_d_instruction_address
    io.srFD_d_instruction         := cpu.io.srFD_d_instruction
  // }

  mem.io.debug_read_address := io.mem_debug_read_address
  io.mem_debug_read_data    := mem.io.debug_read_data

}
