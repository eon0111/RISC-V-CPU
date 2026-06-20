// mycpu is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package riscv.core

import chisel3._
import chisel3.util._
import riscv.Parameters

class WriteBack extends Module {

  val io = IO(new Bundle() {
    val next_pc = Input(UInt(Parameters.AddrWidth))
    val alu_result          = Input(UInt(Parameters.DataWidth))
    val memory_read_data    = Input(UInt(Parameters.DataWidth))
    val regs_write_source   = Input(UInt(2.W))

    val regs_write_data     = Output(UInt(Parameters.DataWidth))
  })

  io.regs_write_data := MuxLookup(
    io.regs_write_source,
    io.alu_result,
    IndexedSeq(
      RegWriteSource.Memory                 -> io.memory_read_data,
      RegWriteSource.NextInstructionAddress -> io.next_pc
      /* NOTE: esto antes era un poco chapucero, porque se calculaba el PC+4 dos veces, una en el
       * módulo de fetch y, otra, en el de writeback (fetch y wb). Esto se ha corregido de forma
       * que se calcule el PC+4 tan solo en el fetch, y se vaya avanzando hasta llegar al writeback,
       * ahorrando un sumador */
    )
  )
  
}
