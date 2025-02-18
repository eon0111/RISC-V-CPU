// mycpu is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package riscv.core

import chisel3._
import chisel3.util.Cat
import riscv.CPUBundle
import riscv.Parameters
import riscv.core.segmentationRegisters.FD
import riscv.core.segmentationRegisters.DE
import riscv.core.segmentationRegisters.MW
import riscv.core.segmentationRegisters.EM

class CPU extends Module {

  val io         = IO(new CPUBundle)
  val regs       = Module(new RegisterFile)
  val inst_fetch = Module(new InstructionFetch)
  val id         = Module(new InstructionDecode)
  val ex         = Module(new Execute)
  val mem        = Module(new MemoryAccess)
  val wb         = Module(new WriteBack)

  // Registros de segmentación
  val srFD       = Module(new FD)
  // val srDE       = Module(new DE)
  // val srEM       = Module(new EM)
  // val srMW       = Module(new MW)

  // when(!io.instruction_valid) {
  //   inst_fetch.io.pc_reset := 1.B
  // } .otherwise {
  //   inst_fetch.io.pc_reset := hazard_unit.io.PC_reset
  // }

  // Conexionado de los registros de segmentación a la E/S de depuración de la CPU
  io.srFD_d_instruction_address := srFD.io.d_instruction_address
  io.srFD_d_instruction         := srFD.io.d_instruction

  io.deviceSelect := mem.io.memory_bundle
    .address(Parameters.AddrBits - 1, Parameters.AddrBits - Parameters.SlaveDeviceCountBits)

  inst_fetch.io.jump_address_id       := ex.io.if_jump_address
  inst_fetch.io.jump_flag_id          := ex.io.if_jump_flag
  inst_fetch.io.instruction_valid     := io.instruction_valid
  inst_fetch.io.instruction_read_data := io.instruction
  
  /*
    NOTE: se pasa la dirección de la siguiente instrucción, generada en en el fetch, al puerto
    instruction_address de la E/S del módulo CPU. De este modo se posibilita la lectura de la
    instrucción alojada en memoria.
  */
  io.instruction_address := inst_fetch.io.next_pc

  // NOTE: Conexionado de las etapas de fetch y decodificación a su registro de segmentación
  srFD.io.f_instruction         := inst_fetch.io.instruction
  srFD.io.f_instruction_address := inst_fetch.io.next_pc
  id.io.instruction             := srFD.io.d_instruction
  
  regs.io.write_enable  := id.io.reg_write_enable
  regs.io.write_address := id.io.reg_write_address
  regs.io.write_data    := wb.io.regs_write_data
  regs.io.read_address1 := id.io.regs_reg1_read_address
  regs.io.read_address2 := id.io.regs_reg2_read_address
  
  regs.io.debug_read_address := io.debug_read_address
  io.debug_read_data         := regs.io.debug_read_data
  
  // lab3(cpu) begin

  ex.io.instruction         := srFD.io.d_instruction
  ex.io.instruction_address := srFD.io.d_instruction_address // FIXME: comprobar si este forwarding es correcto hacerlo o no
  ex.io.reg1_data           := regs.io.read_data1
  ex.io.reg2_data           := regs.io.read_data2
  ex.io.immediate           := id.io.ex_immediate
  ex.io.aluop1_source       := id.io.ex_aluop1_source
  ex.io.aluop2_source       := id.io.ex_aluop2_source

  // lab3(cpu) end

  mem.io.alu_result          := ex.io.mem_alu_result
  mem.io.reg2_data           := regs.io.read_data2
  mem.io.memory_read_enable  := id.io.memory_read_enable
  mem.io.memory_write_enable := id.io.memory_write_enable
  mem.io.funct3              := srFD.io.d_instruction(14, 12)

  io.memory_bundle.address := Cat(
    0.U(Parameters.SlaveDeviceCountBits.W),
    mem.io.memory_bundle.address(Parameters.AddrBits - 1 - Parameters.SlaveDeviceCountBits, 0)
  )
  io.memory_bundle.write_enable  := mem.io.memory_bundle.write_enable
  io.memory_bundle.write_data    := mem.io.memory_bundle.write_data
  io.memory_bundle.write_strobe  := mem.io.memory_bundle.write_strobe
  mem.io.memory_bundle.read_data := io.memory_bundle.read_data

  wb.io.instruction_address := srFD.io.d_instruction_address
  wb.io.alu_result          := ex.io.mem_alu_result
  wb.io.memory_read_data    := mem.io.wb_memory_read_data
  wb.io.regs_write_source   := id.io.wb_reg_write_source

}
