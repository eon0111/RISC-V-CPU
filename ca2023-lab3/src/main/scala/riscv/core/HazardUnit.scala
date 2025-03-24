package riscv.core

import chisel3._
import riscv.Parameters

class HazardUnit extends Module {
  val io = IO(new Bundle {
    val rs1_ex            = Input(UInt(Parameters.PhysicalRegisterAddrWidth))
    val rs2_ex            = Input(UInt(Parameters.PhysicalRegisterAddrWidth))
    val rd_mem            = Input(UInt(Parameters.PhysicalRegisterAddrWidth))
    val rd_wb             = Input(UInt(Parameters.PhysicalRegisterAddrWidth))
    val reg_wr_enable_mem = Input(Bool())
    val reg_wr_enable_wb  = Input(Bool())

    val rs1_d             = Input(UInt(Parameters.PhysicalRegisterAddrWidth))
    val rs2_d             = Input(UInt(Parameters.PhysicalRegisterAddrWidth))
    val rd_ex             = Input(UInt(Parameters.PhysicalRegisterAddrWidth))
    val ex_regs_write_src = Input(UInt(2.W))

    val alu_rs1_src = Output(UInt(2.W))
    val alu_rs2_src = Output(UInt(2.W))

    val lw_stall    = Output(Bool())
    val pc_stall    = Output(Bool())
    val srFD_stall  = Output(Bool())
    val srDE_flush  = Output(Bool())
  })

  /* TODO: comentar el funcionamiento del forwarding con rs1 */
  io.alu_rs1_src := Mux(
    ((io.rs1_ex === io.rd_mem) & io.reg_wr_enable_mem) & (io.rs1_ex =/= 0.U),
    RsFwSel.ALUResultMemFw,
    Mux(
      ((io.rs1_ex === io.rd_wb) & io.reg_wr_enable_wb) & (io.rs1_ex =/= 0.U),
      RsFwSel.ALUResultWbFw,
      RsFwSel.RegFileData
    )
  )

  /* TODO: comentar el funcionamiento del forwarding con rs2 */
  io.alu_rs2_src := Mux(
    ((io.rs2_ex === io.rd_mem) & io.reg_wr_enable_mem) & (io.rs2_ex =/= 0.U),
    RsFwSel.ALUResultMemFw,
    Mux(
      ((io.rs2_ex === io.rd_wb) & io.reg_wr_enable_wb) & (io.rs2_ex =/= 0.U),
      RsFwSel.ALUResultWbFw,
      RsFwSel.RegFileData
    )
  )

  /* TODO: comentar la generación de la señal lw_stall */
  io.lw_stall   := io.ex_regs_write_src(0) & ((io.rs1_d === io.rd_ex) | (io.rs2_d === io.rd_ex))
  io.pc_stall   := io.lw_stall
  io.srFD_stall := io.lw_stall
  io.srDE_flush := io.lw_stall

}
