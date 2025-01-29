// mycpu is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package riscv.core

import chisel3._
import chisel3.util._
import riscv.Parameters

class WriteBack extends Module {

  val io = IO(new Bundle() {
    val instruction_address = Input(UInt(Parameters.AddrWidth))
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
      RegWriteSource.NextInstructionAddress -> (io.instruction_address + 4.U) // FIXME: esto es un poco chapucero, porque se calcula el PC+4 dos veces (fetch y wb). Lo suyo sería tener un puerto de salida en InstructionFetch por donde se saque el PC + 4, y poner uno de entrada en WriteBack por donde se pase ese valor
    )
  )
  
}
