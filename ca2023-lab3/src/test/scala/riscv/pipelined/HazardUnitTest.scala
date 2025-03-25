package riscv.pipelined

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import riscv.core.HazardUnit
import riscv.TestAnnotations
import riscv.Parameters
import riscv.core.RsFwSel
import riscv.core.RegWriteSource

class HazardUnitTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Hazard Unit")
  it should "detect RAW hazards involving instructions in the execute, memory and writeback phases" in {
    test(new HazardUnit).withAnnotations(TestAnnotations.annos) { c =>

      /* RAW @ Memory (rs1_ex = rd_mem), por ejemplo:
       *    li   t0, 1
       *    addi t1, t0, 1
       */
      c.io.reg_wr_enable_mem.poke(1.B)
      c.io.reg_wr_enable_wb.poke(1.B)
      c.io.rs1_ex.poke(5.U(Parameters.PhysicalRegisterAddrWidth))
      c.io.rd_mem.poke(5.U(Parameters.PhysicalRegisterAddrWidth))
      c.io.alu_rs1_src.expect(RsFwSel.ALUResultMemFw, "Fallo en la primera condición para rs1")

      /* RAW @ Writeback (rs1_ex = rd_wb), por ejemplo:
       *    li   t0, 1
       *    sub  t2, t2, t1
       *    addi t1, t0, 1
       */
      c.io.reg_wr_enable_mem.poke(1.B)
      c.io.reg_wr_enable_wb.poke(1.B)
      c.io.rs1_ex.poke(5.U(Parameters.PhysicalRegisterAddrWidth))
      c.io.rd_wb.poke(5.U(Parameters.PhysicalRegisterAddrWidth))
      c.io.alu_rs1_src.expect(RsFwSel.ALUResultMemFw, "Fallo en la segunda condición para rs1")

      /* RAW @ Memory (rs2_ex = rd_mem), por ejemplo:
       *    li  t0, 1
       *    add t1, t1, t0
       */
      c.io.reg_wr_enable_mem.poke(1.B)
      c.io.reg_wr_enable_wb.poke(1.B)
      c.io.rs2_ex.poke(5.U(Parameters.PhysicalRegisterAddrWidth))
      c.io.rd_mem.poke(5.U(Parameters.PhysicalRegisterAddrWidth))
      c.io.alu_rs2_src.expect(RsFwSel.ALUResultMemFw, "Fallo en la primera condición para rs2")

      /* RAW @ Writeback (rs2_ex = rd_wb), por ejemplo:
       *    li  t0, 1
       *    sub t2, t2, t1
       *    add t1, t1, t0
       */
      c.io.reg_wr_enable_mem.poke(1.B)
      c.io.reg_wr_enable_wb.poke(1.B)
      c.io.rs2_ex.poke(5.U(Parameters.PhysicalRegisterAddrWidth))
      c.io.rd_wb.poke(5.U(Parameters.PhysicalRegisterAddrWidth))
      c.io.alu_rs2_src.expect(RsFwSel.ALUResultMemFw, "Fallo en la segunda condición para rs2")
    }
  }

  it should "solve the lw hazard, thus flushing DE and stalling FD" in {
    test(new HazardUnit).withAnnotations(TestAnnotations.annos) { c =>
      /*
       * TODO: generar los casos para probar la resolución de hazards de control
       */
      c.io.ex_regs_write_src.poke(RegWriteSource.Memory)
      c.io.rs1_d.poke(5.U(Parameters.PhysicalRegisterAddrWidth))
      c.io.rs1_d.poke(6.U(Parameters.PhysicalRegisterAddrWidth))
      c.io.pc_stall.expect(1.B)
      c.io.srFD_stall.expect(1.B)
      c.io.srDE_flush(1.B)
    }

    // TODO: podría implementar un programilla en ensamblador con todos los hazards e ir
    // probando cada uno poco a poco (ciclo a ciclo), comprobando que se generan las señales
    // adecuadas para resolverlos
  }
}