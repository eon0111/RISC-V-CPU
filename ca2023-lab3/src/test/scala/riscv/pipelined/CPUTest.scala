// mycpu is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package riscv.singlecycle

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
import riscv.TestTopModule

class SegRegFDTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Pipelined CPU")
  it should "run a simple program with a segmentation register placed in between fetch and decode phases" in {
    test(new TestTopModule("simple_subroutine.asmbin")).withAnnotations(TestAnnotations.annos) { c =>
      // NOTE: espera hasta que el cargador termine
      while(!c.io.instruction_valid.peek().litToBoolean) {
        c.clock.step()
        c.io.mem_debug_read_address.poke(4.U) // Avoid timeout
      }
      
      for (i <- 1 to 200) {
        c.clock.step()
        c.io.mem_debug_read_address.poke((i * 4).U) // Avoid timeout
      }

      c.io.regs_debug_read_address.poke(6.U)  // t1
      c.io.regs_debug_read_data.expect(5.U)
    }
  }
}

class AllSegRegsTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Pipelined CPU")
  it should "run a simple program with FD, DE and EM segmentation registers present in the pipeline" in {
    test(new TestTopModule("simple_asm.asmbin")).withAnnotations(TestAnnotations.annos) { c =>
      // NOTE: espera hasta que el cargador termine
      while(!c.io.instruction_valid.peek().litToBoolean) {
        c.clock.step()
        c.io.mem_debug_read_address.poke(4.U) // Avoid timeout
      }
      
      for (i <- 1 to 200) {
        c.clock.step()
        c.io.mem_debug_read_address.poke((i * 4).U) // Avoid timeout
      }

      c.io.regs_debug_read_address.poke(5.U)  // t0
      c.io.regs_debug_read_data.expect(12.U)

      // TODO: mirar a ver por qué falla el programa con la parte de lectura/escritura en memoria
      c.io.regs_debug_read_address.poke(7.U)  // t2
      c.io.regs_debug_read_data.expect(12.U)
    }
  }
}