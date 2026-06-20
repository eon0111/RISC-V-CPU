// mycpu is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package peripheral

import chisel3._
import chisel3.util._
import riscv.Parameters
import chisel3.util.experimental.loadMemoryFromFileInline

class RAMBundle extends Bundle {
  val address      = Input(UInt(Parameters.AddrWidth))
  val write_data   = Input(UInt(Parameters.DataWidth))
  val write_enable = Input(Bool())
  val write_strobe = Input(Vec(Parameters.WordSize, Bool()))
  val read_data    = Output(UInt(Parameters.DataWidth))
}
// The purpose of this module is to help the synthesis tool recognize
// our memory as a Block RAM template
class BlockRAM(capacity: Int) extends Module {
  val io = IO(new Bundle {
    val read_address  = Input(UInt(Parameters.AddrWidth))
    val write_address = Input(UInt(Parameters.AddrWidth))
    val write_data    = Input(UInt(Parameters.DataWidth))
    val write_enable  = Input(Bool())
    val write_strobe  = Input(Vec(Parameters.WordSize, Bool()))

    val debug_read_address = Input(UInt(Parameters.AddrWidth))

    val read_data       = Output(UInt(Parameters.DataWidth))
    val debug_read_data = Output(UInt(Parameters.DataWidth))
  })
  val mem = SyncReadMem(capacity, Vec(Parameters.WordSize, UInt(Parameters.ByteWidth)))
  when(io.write_enable) {
    val write_data_vec = Wire(Vec(Parameters.WordSize, UInt(Parameters.ByteWidth)))
    for (i <- 0 until Parameters.WordSize) {
      write_data_vec(i) := io.write_data((i + 1) * Parameters.ByteBits - 1, i * Parameters.ByteBits)
    }
    mem.write((io.write_address >> 2.U).asUInt, write_data_vec, io.write_strobe)
  }
  io.read_data       := mem.read((io.read_address >> 2.U).asUInt, true.B).asUInt
  io.debug_read_data := mem.read((io.debug_read_address >> 2.U).asUInt, true.B).asUInt
}

class Memory(capacity: Int) extends Module {
  val io = IO(new Bundle {
    val bundle = new RAMBundle

    val instruction         = Output(UInt(Parameters.DataWidth))
    val instruction_address = Input(UInt(Parameters.AddrWidth))

    val debug_read_address = Input(UInt(Parameters.AddrWidth))
    val debug_read_data    = Output(UInt(Parameters.DataWidth))
  })

  /* NOTE: las memorias que proporciona Chisel son direccionables a palabra, no a byte. Esta
   * decisión puede deberse a la necesidad de dotar a la librería con la capacidad de generar
   * memorias de cualquier tipología y tipo de direccionamiento, en función del tipo de dato con que
   * se inicialize la memoria en el constructor, y en función de la máscara que se emplee en los
   * accesos a estas memorias. Por ejemplo, una memoria inicializada del siguiente modo:
   * SyncReadMem(4096, Vec(4, 32)), daría como resultado una memoria con 4096 entradas donde, cada
   * entrada, albergaría 4 palabras de 32 bits cada una.
   * Puede intuirse que este mecanismo de generación de memorias y acceso a las mimas permite, entre
   * otros, construir caches, indicando el tag en el parámetro de dirección de los métodos de
   * lectura/escritura. */
  /* NOTE: he tenido que cambiar el tipo de memoria porque las memorias de la clase SyncReadMem no
   * permiten realizar lecturas de manera asíncrona/combinacional, esto es, que cuando se solicita la
   * lectura de la memoria, el dato leído no sale de esta hasta el siguiente flanco ascendente de reloj,
   * lo que imposibilita mantener la sincronía entre el PC y las instrucciones leídas.
   * Al crear una memoria del tipo Mem, la lectura del dato se lleva a cabo en el instante mismo en
   * que se solicita.
   * Este cambio se ha hecho principalmente para facilitar la depuración de las trazas en GTKWave,
   * puesto que no supone ninguna alteración sobre el flujo de ejecución de los programas. */
  val mem = Mem(capacity, Vec(Parameters.WordSize, UInt(Parameters.ByteWidth)))

  when(io.bundle.write_enable) {
	// NOTE: write_data_vec es la palabra a escribir en memoria, descrita como un vector de 4 bytes
    val write_data_vec = Wire(Vec(Parameters.WordSize, UInt(Parameters.ByteWidth)))

	// NOTE: Se forma la palabra leyendo el dato de entrada (io.bundle.write_data) byte a byte (accede
	// a secciones del dato con los paréntesis -> i=0::(7,0); i=1::(15,8);...)
    for (i <- 0 until Parameters.WordSize) {
      write_data_vec(i) := io.bundle.write_data((i + 1) * Parameters.ByteBits - 1, i * Parameters.ByteBits)
    }

	// NOTE: el método 'write' toma como parámetros la dirección y el dato a escribir, y un tercer
	// parámetro opcional que es una máscara (Masks@https://www.chisel-lang.org/docs/explanations/memories)
	// La máscara que se emplea en el contexto de este código consiste en un vector de 4 bits (4 booleanos),
	// que indican el byte o los bytes de la palabra que deberán escribirse en memoria, de modo que
	// puedan realizarse escrituras de tamaño inferior al tamaño de la palabra.
    mem.write((io.bundle.address >> 2.U).asUInt, write_data_vec, io.bundle.write_strobe)
  }
  io.bundle.read_data := mem.read((io.bundle.address >> 2.U).asUInt, true.B.asClock).asUInt
  io.debug_read_data  := mem.read((io.debug_read_address >> 2.U).asUInt, true.B.asClock).asUInt
  io.instruction      := mem.read((io.instruction_address >> 2.U).asUInt, true.B.asClock).asUInt
}

class MemoryFromFile(capacity: Int, memFile: String) extends Module {
  val io = IO(new Bundle {
    val bundle = new RAMBundle

    val instruction         = Output(UInt(Parameters.DataWidth))
    val instruction_address = Input(UInt(Parameters.AddrWidth))

    val debug_read_address = Input(UInt(Parameters.AddrWidth))
    val debug_read_data    = Output(UInt(Parameters.DataWidth))
  })

  val mem = SyncReadMem(capacity, Vec(Parameters.WordSize, UInt(Parameters.ByteWidth)))
  loadMemoryFromFileInline(mem, memFile)

  when(io.bundle.write_enable) {
    val write_data_vec = Wire(Vec(Parameters.WordSize, UInt(Parameters.ByteWidth)))

    for (i <- 0 until Parameters.WordSize) {
      write_data_vec(i) := io.bundle.write_data((i + 1) * Parameters.ByteBits - 1, i * Parameters.ByteBits)
    }

    mem.write((io.bundle.address >> 2.U).asUInt, write_data_vec, io.bundle.write_strobe)
  }
  io.bundle.read_data := mem.read((io.bundle.address >> 2.U).asUInt, true.B).asUInt
  io.debug_read_data  := mem.read((io.debug_read_address >> 2.U).asUInt, true.B).asUInt
  io.instruction      := mem.read((io.instruction_address >> 2.U).asUInt, true.B).asUInt
}
