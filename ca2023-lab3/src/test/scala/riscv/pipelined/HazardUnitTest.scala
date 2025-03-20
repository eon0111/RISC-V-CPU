package riscv.pipelined

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import riscv.core.HazardUnit
import riscv.TestAnnotations
import riscv.Parameters
import riscv.core.RsFwSel

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

  it should "detect RAW hazards involving load instructions" in {
    test(new HazardUnit).withAnnotations(TestAnnotations.annos) { c =>
      
    }
  }
}