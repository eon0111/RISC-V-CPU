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
    test(new TestTopModule("hazards_with_hu.asmbin")).withAnnotations(TestAnnotations.annos) { c =>
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
      c.io.regs_debug_read_data.expect(13.U)
    }
  }
}

class AUIPCTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Pipelined CPU")
  it should "add 0x1000 to PC and store the result in t0, then, add 1 to t0" in {
    test(new TestTopModule("auipc.asmbin")).withAnnotations(TestAnnotations.annos) { c =>
      // NOTE: espera hasta que el cargador termine
      while(!c.io.instruction_valid.peek().litToBoolean) {
        c.clock.step()
        c.io.mem_debug_read_address.poke(4.U) // Avoid timeout
      }
      
      for (i <- 1 to 200) {
        c.clock.step()
        c.io.mem_debug_read_address.poke((i * 4).U) // Avoid timeout
      }

      c.io.regs_debug_read_address.poke(5.U)   // t0
      c.io.regs_debug_read_data.expect(0x2001)

      c.io.regs_debug_read_address.poke(6.U)   // t1
      c.io.regs_debug_read_data.expect(0x1)
    }
  }
}

class SubroutineTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Pipelined CPU")
  it should "manage calls to subroutines" in {
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

      c.io.regs_debug_read_address.poke(6.U) // t1
      c.io.regs_debug_read_data.expect(5.U)
    }
  }
}

class SimpleTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Pipelined CPU")
  it should "store a value in memory" in {
    test(new TestTopModule("simple.asmbin")).withAnnotations(TestAnnotations.annos) { c =>
      for (i <- 1 to 10000) {
        c.clock.step()
        c.io.mem_debug_read_address.poke((i * 4).U) // Avoid timeout
      }

      c.io.mem_debug_read_address.poke(4.U)
      c.clock.step()
      c.io.mem_debug_read_data.expect(255.U)
    }
  }
}