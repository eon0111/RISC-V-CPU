package riscv.pipelined

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

import riscv.core.segmentationRegisters.FD
import riscv.TestAnnotations

class SegRegFDTest extends AnyFlatSpec with ChiselScalatestTester {
behavior.of("Fetch-Decode Segmentation Register")
  it should "store fetch outputs and pass them to the decoder" in {
    test(new FD).withAnnotations(TestAnnotations.annos) { c =>
      c.io.f_instruction.poke(0x01010101.U)
      c.io.f_current_pc.poke(0x00110011.U)
      c.io.f_next_pc.poke(0x00110011.U)
      c.clock.step()
      c.io.d_instruction.expect(0x01010101.U)
      c.io.f_current_pc.expect(0x00110011.U)
      c.io.f_next_pc.expect(0x00110011.U)
    }
  }
}