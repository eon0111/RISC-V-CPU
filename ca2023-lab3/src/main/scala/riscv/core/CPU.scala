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

  /* NOTE: Se inicializa el banco de registros de este modo para que en la fase de writeback se
   * produzca la escritura del banco de registros, y no se espere al siguiente flanco ascendente
   * del reloj */
  val regs       = withClock((~this.clock.asBool).asClock){Module(new RegisterFile)}
  val inst_fetch = Module(new InstructionFetch)
  val id         = Module(new InstructionDecode)
  val ex         = Module(new Execute)
  val mem        = Module(new MemoryAccess)
  val wb         = Module(new WriteBack)
  
  // Unidad de amenazas
  val hazard_unit = Module(new HazardUnit)

  // Registros de segmentación
  val srFD       = withReset(hazard_unit.io.srFD_flush){Module(new FD)}
  val srDE       = withReset(hazard_unit.io.srDE_flush){Module(new DE)}
  val srEM       = Module(new EM)
  val srMW       = Module(new MW)
  
  /* Conexionado de la unidad de amenazas a los distintos eltos. del pipeline sobre los que tiene
   * control para resolver las amenazas detectadas, valga la redundancia */
  hazard_unit.io.rs1_ex            := srDE.io.e_rs1
  hazard_unit.io.rs2_ex            := srDE.io.e_rs2
  hazard_unit.io.rd_mem            := srEM.io.m_reg_write_address
  hazard_unit.io.rd_wb             := srMW.io.w_reg_write_address
  hazard_unit.io.reg_wr_enable_mem := srEM.io.m_reg_write_enable
  hazard_unit.io.reg_wr_enable_wb  := srMW.io.w_reg_write_enable
  hazard_unit.io.rs1_d             := id.io.regs_reg1_read_address
  hazard_unit.io.rs2_d             := id.io.regs_reg2_read_address
  hazard_unit.io.rd_ex             := srDE.io.e_reg_write_address
  hazard_unit.io.ex_regs_write_src := srDE.io.e_wb_src
  hazard_unit.io.ex_jump_flag      := ex.io.if_jump_flag
  
  io.deviceSelect := mem.io.memory_bundle
    .address(Parameters.AddrBits - 1, Parameters.AddrBits - Parameters.SlaveDeviceCountBits)

  inst_fetch.io.jump_address_id       := ex.io.if_jump_address
  inst_fetch.io.jump_flag_id          := ex.io.if_jump_flag
  inst_fetch.io.instruction_valid     := io.instruction_valid
  inst_fetch.io.instruction_read_data := io.instruction
  inst_fetch.io.pc_stall              := hazard_unit.io.pc_stall
  
  /* NOTE: se pasa la dirección de la siguiente instrucción, generada en el fetch, al puerto
   * instruction_address de la E/S del módulo CPU. De este modo se posibilita la lectura de la
   * instrucción alojada en memoria */
  io.instruction_address := inst_fetch.io.current_pc

  // Conexionado de las etapas de fetch y decodificación a su registro de segmentación
  srFD.io.f_instruction := inst_fetch.io.instruction
  srFD.io.f_current_pc  := inst_fetch.io.current_pc
  srFD.io.f_next_pc     := inst_fetch.io.next_pc
  srFD.io.stall         := hazard_unit.io.srFD_stall
  id.io.instruction     := srFD.io.d_instruction
  
  // Conexionado del banco de registros
  regs.io.write_enable  := srMW.io.w_reg_write_enable
  regs.io.write_address := srMW.io.w_reg_write_address
  regs.io.write_data    := wb.io.regs_write_data
  regs.io.read_address1 := id.io.regs_reg1_read_address
  regs.io.read_address2 := id.io.regs_reg2_read_address
  
  // Conexionado del banco de registros a los puertos de depuración
  regs.io.debug_read_address := io.debug_read_address
  io.debug_read_data         := regs.io.debug_read_data

  // Conexionado de las etapas de decodificación y ejecución a su registro de segmentación
  srDE.io.d_current_pc          := srFD.io.d_current_pc
  srDE.io.d_next_pc             := srFD.io.d_next_pc
  srDE.io.d_opcode              := srFD.io.d_instruction(6, 0)
  srDE.io.d_func3               := srFD.io.d_instruction(14, 12)
  srDE.io.d_func7               := srFD.io.d_instruction(11,7)
  srDE.io.d_regs_read_data_1    := regs.io.read_data1
  srDE.io.d_regs_read_data_2    := regs.io.read_data2
  srDE.io.d_ex_immediate        := id.io.ex_immediate
  srDE.io.d_ex_alu_func         := id.io.ex_alu_func
  srDE.io.d_ex_aluop1_source    := id.io.ex_aluop1_source
  srDE.io.d_ex_aluop2_source    := id.io.ex_aluop2_source
  srDE.io.d_memory_read_enable  := id.io.memory_read_enable
  srDE.io.d_memory_write_enable := id.io.memory_write_enable
  srDE.io.d_wb_src              := id.io.wb_src
  srDE.io.d_reg_write_enable    := id.io.reg_write_enable
  srDE.io.d_reg_write_address   := id.io.reg_write_address
  srDE.io.d_rs1                 := id.io.regs_reg1_read_address
  srDE.io.d_rs2                 := id.io.regs_reg2_read_address

  // lab3(cpu) begin

  ex.io.instruction_address   := srDE.io.e_current_pc
  ex.io.opcode                := srDE.io.e_opcode
  ex.io.funct3                := srDE.io.e_func3
  ex.io.rd                    := srDE.io.e_func7
  ex.io.reg1_data             := srDE.io.e_regs_read_data_1
  ex.io.reg2_data             := srDE.io.e_regs_read_data_2
  ex.io.immediate             := srDE.io.e_ex_immediate
  ex.io.alu_func              := srDE.io.e_ex_alu_func
  ex.io.aluop1_source         := srDE.io.e_ex_aluop1_source
  ex.io.aluop2_source         := srDE.io.e_ex_aluop2_source
  ex.io.rs1_src               := hazard_unit.io.alu_rs1_src
  ex.io.rs2_src               := hazard_unit.io.alu_rs2_src
  ex.io.alu_result_mem_fw     := srEM.io.m_alu_result
  ex.io.wb_regs_write_data_fw := wb.io.regs_write_data

  // lab3(cpu) end

  // Conexionado de las etapas de ejecución y memoria a su registro de segmentación
  srEM.io.e_alu_result          := ex.io.mem_alu_result
  srEM.io.e_funct3              := srDE.io.e_func3
  srEM.io.e_memory_read_enable  := srDE.io.e_memory_read_enable
  srEM.io.e_memory_write_enable := srDE.io.e_memory_write_enable

  /* FIXME: en las instrucciones de escritura en memoria (sw, sh, sb), el dato a escribir se recibe
   * por el puerto reg2_data@Memory. Ese dato tiene su origen en el banco de registros y, en el diseño
   * del core monociclo, pasa directamente a la memoria. No obstante, en el diseño segmentado, esta
   * conexión no puede llevarse a cabo por dos motivos: en primer lugar, y como es lógico, debe
   * mantenerse la coherencia en el pipeline, esto es, que el dato debe atravesarlo en sincronía junto
   * con el resto de datos y señales de control que se generan en las distintas fases del core como
   * resultado del fetch de una instrucción concreta de modo que, en cada ciclo y en cada etapa, se
   * estén empleando los datos y señales específicos de cada instrucción.
   * En segundo lugar y, pese a que en un primer momento pareciera lógico facilitar el tránsito directo
   * del dato a través de la fase de ejecución, esta implementación no tendría en cuenta los posibles
   * riesgos de datos que pudieran originarse como resultado del fetch de instrucciones
   * aritmético-lógicas y de escritura en memoria consecutivas. Es por ello por lo que debe implementarse
   * lógica adicional dentro de la fase de ejecución, la cual permitirá, gracias a la operativa de
   * la unidad de amenazas, realizar el forwarding del resultado de la ALU en la fase de memoria, o
   * del dato seleccionado en el writeback, a la fase de ejecución */
  srEM.io.e_regs_read_data_2    := ex.io.mem_reg2_data
  srEM.io.e_next_pc             := srDE.io.e_next_pc
  srEM.io.e_wb_src              := srDE.io.e_wb_src
  srEM.io.e_reg_write_enable    := srDE.io.e_reg_write_enable
  srEM.io.e_reg_write_address   := srDE.io.e_reg_write_address
  
  mem.io.alu_result          := srEM.io.m_alu_result
  mem.io.reg2_data           := srEM.io.m_regs_read_data_2
  mem.io.memory_read_enable  := srEM.io.m_memory_read_enable
  mem.io.memory_write_enable := srEM.io.m_memory_write_enable
  mem.io.funct3              := srEM.io.m_funct3

  io.memory_bundle.address := Cat(
    0.U(Parameters.SlaveDeviceCountBits.W),
    mem.io.memory_bundle.address(Parameters.AddrBits - 1 - Parameters.SlaveDeviceCountBits, 0)
  )
  io.memory_bundle.write_enable  := mem.io.memory_bundle.write_enable
  io.memory_bundle.write_data    := mem.io.memory_bundle.write_data
  io.memory_bundle.write_strobe  := mem.io.memory_bundle.write_strobe
  mem.io.memory_bundle.read_data := io.memory_bundle.read_data

  // Conexionado de las etapas de memoria y writeback a su registro de segmentación
  srMW.io.m_alu_result        := srEM.io.m_alu_result
  srMW.io.m_mem_read_data     := mem.io.wb_memory_read_data
  srMW.io.m_next_pc           := srEM.io.m_next_pc
  srMW.io.m_wb_src            := srEM.io.m_wb_src
  srMW.io.m_reg_write_enable  := srEM.io.m_reg_write_enable
  srMW.io.m_reg_write_address := srEM.io.m_reg_write_address

  wb.io.next_pc           := srMW.io.w_next_pc
  wb.io.alu_result        := srMW.io.w_alu_result
  wb.io.memory_read_data  := srMW.io.w_mem_read_data
  wb.io.regs_write_source := srMW.io.w_wb_src

}
