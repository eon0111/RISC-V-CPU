// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestTopModule__Syms.h"


VL_ATTR_COLD void VTestTopModule___024root__trace_init_sub__TOP__0(VTestTopModule___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+144,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"io_mem_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"io_regs_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+148,0,"io_regs_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"io_mem_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"io_instruction_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("TestTopModule", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"io_mem_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"io_regs_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+148,0,"io_regs_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"io_mem_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"io_instruction_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"mem_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"mem_io_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"mem_io_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"mem_io_bundle_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"mem_io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"mem_io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"mem_io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"mem_io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"mem_io_bundle_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"mem_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"mem_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"mem_io_debug_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"mem_io_debug_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"instruction_rom_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"instruction_rom_io_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"instruction_rom_io_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"rom_loader_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"rom_loader_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"rom_loader_io_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"rom_loader_io_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"rom_loader_io_bundle_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"rom_loader_io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"rom_loader_io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"rom_loader_io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"rom_loader_io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"rom_loader_io_rom_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"rom_loader_io_rom_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"rom_loader_io_load_finished",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"cpu_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"cpu_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"cpu_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"cpu_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"cpu_io_memory_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"cpu_io_memory_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"cpu_io_memory_bundle_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"cpu_io_memory_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"cpu_io_memory_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"cpu_io_memory_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"cpu_io_memory_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"cpu_io_memory_bundle_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"cpu_io_instruction_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"cpu_io_debug_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+148,0,"cpu_io_debug_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"io_memory_bundle_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"io_memory_bundle_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"io_memory_bundle_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"io_memory_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"io_memory_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"io_memory_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"io_memory_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"io_memory_bundle_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"io_instruction_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"io_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+148,0,"io_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,0,"regs_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"regs_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"regs_io_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"regs_io_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"regs_io_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"regs_io_read_address1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"regs_io_read_address2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+152,0,"regs_io_read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"regs_io_read_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"regs_io_debug_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+148,0,"regs_io_debug_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"inst_fetch_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"inst_fetch_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"inst_fetch_io_jump_flag_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"inst_fetch_io_jump_address_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"inst_fetch_io_instruction_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"inst_fetch_io_instruction_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"inst_fetch_io_pc_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"inst_fetch_io_current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"inst_fetch_io_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"inst_fetch_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"id_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"id_io_regs_reg1_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"id_io_regs_reg2_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"id_io_ex_alu_func",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"id_io_ex_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"id_io_ex_aluop1_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"id_io_ex_aluop2_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"id_io_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"id_io_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"id_io_wb_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+42,0,"id_io_reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"id_io_reg_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"ex_io_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"ex_io_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+46,0,"ex_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"ex_io_reg1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"ex_io_reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"ex_io_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"ex_io_aluop1_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"ex_io_aluop2_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"ex_io_alu_func",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"ex_io_rs1_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"ex_io_rs2_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,0,"ex_io_alu_result_mem_fw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"ex_io_wb_regs_write_data_fw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"ex_io_mem_reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"ex_io_mem_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"ex_io_if_jump_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"ex_io_if_jump_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"mem_io_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"mem_io_reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"mem_io_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"mem_io_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"mem_io_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+62,0,"mem_io_wb_memory_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"mem_io_memory_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"mem_io_memory_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"mem_io_memory_bundle_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"mem_io_memory_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"mem_io_memory_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"mem_io_memory_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"mem_io_memory_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"mem_io_memory_bundle_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"wb_io_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"wb_io_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"wb_io_memory_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"wb_io_regs_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+26,0,"wb_io_regs_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"hazard_unit_io_rs1_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,0,"hazard_unit_io_rs2_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+69,0,"hazard_unit_io_rd_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"hazard_unit_io_rd_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+70,0,"hazard_unit_io_reg_wr_enable_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"hazard_unit_io_reg_wr_enable_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"hazard_unit_io_alu_rs1_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"hazard_unit_io_alu_rs2_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"hazard_unit_io_rs1_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"hazard_unit_io_rs2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"hazard_unit_io_rd_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"hazard_unit_io_ex_regs_write_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"hazard_unit_io_pc_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"hazard_unit_io_srFD_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"hazard_unit_io_srDE_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"hazard_unit_io_ex_jump_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"hazard_unit_io_srFD_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"srFD_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"srFD_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"srFD_io_f_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"srFD_io_f_current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"srFD_io_f_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"srFD_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"srFD_io_d_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"srFD_io_d_current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"srFD_io_d_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"srDE_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"srDE_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"srDE_io_d_ex_alu_func",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+37,0,"srDE_io_d_ex_aluop1_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"srDE_io_d_ex_aluop2_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"srDE_io_d_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"srDE_io_d_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"srDE_io_d_wb_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+42,0,"srDE_io_d_reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"srDE_io_d_reg_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,0,"srDE_io_d_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"srDE_io_d_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"srDE_io_e_ex_alu_func",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+50,0,"srDE_io_e_ex_aluop1_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"srDE_io_e_ex_aluop2_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"srDE_io_e_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"srDE_io_e_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"srDE_io_e_wb_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+78,0,"srDE_io_e_reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"srDE_io_e_reg_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"srDE_io_e_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,0,"srDE_io_e_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"srDE_io_d_ex_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"srDE_io_d_current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"srDE_io_d_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"srDE_io_d_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+80,0,"srDE_io_d_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+152,0,"srDE_io_d_regs_read_data_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"srDE_io_d_regs_read_data_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"srDE_io_e_ex_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"srDE_io_e_current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"srDE_io_e_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"srDE_io_e_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"srDE_io_e_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"srDE_io_e_regs_read_data_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"srDE_io_e_regs_read_data_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"srEM_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"srEM_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"srEM_io_e_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"srEM_io_e_regs_read_data_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"srEM_io_e_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"srEM_io_e_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"srEM_io_e_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"srEM_io_e_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"srEM_io_e_wb_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+78,0,"srEM_io_e_reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"srEM_io_e_reg_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"srEM_io_m_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"srEM_io_m_regs_read_data_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"srEM_io_m_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"srEM_io_m_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"srEM_io_m_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+83,0,"srEM_io_m_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"srEM_io_m_wb_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+70,0,"srEM_io_m_reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"srEM_io_m_reg_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+144,0,"srMW_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"srMW_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"srMW_io_m_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"srMW_io_m_mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"srMW_io_m_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"srMW_io_m_wb_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+70,0,"srMW_io_m_reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"srMW_io_m_reg_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"srMW_io_w_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"srMW_io_w_mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"srMW_io_w_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"srMW_io_w_wb_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+24,0,"srMW_io_w_reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"srMW_io_w_reg_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"io_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"io_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+46,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"io_reg1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_reg2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"io_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"io_aluop1_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"io_aluop2_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"io_alu_func",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"io_rs1_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"io_rs2_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,0,"io_alu_result_mem_fw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"io_wb_regs_write_data_fw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"io_mem_reg2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"io_mem_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"io_if_jump_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"io_if_jump_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"alu_io_func",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+85,0,"alu_io_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"alu_io_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"alu_io_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"alu_rs1_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"alu_rs2_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"io_func",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+85,0,"io_op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"io_op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"io_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("hazard_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+67,0,"io_rs1_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,0,"io_rs2_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+69,0,"io_rd_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"io_rd_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+70,0,"io_reg_wr_enable_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"io_reg_wr_enable_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"io_alu_rs1_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"io_alu_rs2_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"io_rs1_d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"io_rs2_d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"io_rd_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"io_ex_regs_write_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"io_pc_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"io_srFD_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"io_srDE_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_ex_jump_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_srFD_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"lw_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("id", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"io_regs_reg1_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"io_regs_reg2_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"io_ex_alu_func",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"io_ex_immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"io_ex_aluop1_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"io_ex_aluop2_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"io_memory_read_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"io_memory_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"io_wb_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+42,0,"io_reg_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"io_reg_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+79,0,"alu_ctrl_io_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+88,0,"alu_ctrl_io_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+89,0,"alu_ctrl_io_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"alu_ctrl_io_alu_funct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+43,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("alu_ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"io_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+88,0,"io_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+89,0,"io_funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"io_alu_funct",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("inst_fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_jump_flag_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"io_jump_address_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_instruction_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"io_instruction_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"io_pc_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"io_next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"io_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"pc_plus_four",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"io_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"io_reg2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"io_memory_read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"io_memory_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"io_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+62,0,"io_wb_memory_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"io_memory_bundle_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"io_memory_bundle_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"io_memory_bundle_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"io_memory_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"io_memory_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"io_memory_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"io_memory_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"io_memory_bundle_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"mem_address_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("regs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+151,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"io_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"io_write_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"io_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"io_read_address1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"io_read_address2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+152,0,"io_read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"io_read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"io_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+148,0,"io_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"registers_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"registers_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"registers_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"registers_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"registers_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"registers_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"registers_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"registers_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"registers_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"registers_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"registers_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"registers_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"registers_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"registers_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"registers_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"registers_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"registers_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"registers_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"registers_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"registers_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"registers_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"registers_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"registers_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"registers_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"registers_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"registers_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"registers_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"registers_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"registers_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"registers_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"registers_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"registers_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srDE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"io_d_ex_alu_func",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+37,0,"io_d_ex_aluop1_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"io_d_ex_aluop2_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"io_d_memory_read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"io_d_memory_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"io_d_wb_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+42,0,"io_d_reg_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"io_d_reg_write_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,0,"io_d_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"io_d_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"io_e_ex_alu_func",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+50,0,"io_e_ex_aluop1_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"io_e_ex_aluop2_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"io_e_memory_read_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"io_e_memory_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"io_e_wb_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+78,0,"io_e_reg_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"io_e_reg_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"io_e_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,0,"io_e_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"io_d_ex_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"io_d_current_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"io_d_next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"io_d_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+80,0,"io_d_func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+152,0,"io_d_regs_read_data_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"io_d_regs_read_data_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"io_e_ex_immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"io_e_current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"io_e_next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"io_e_opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"io_e_func3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"io_e_regs_read_data_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_e_regs_read_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"regs_read_data_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"regs_read_data_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"ex_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"ex_alu_func",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+50,0,"ex_aluop1_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"ex_aluop2_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"wb_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+78,0,"reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"reg_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("srEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"io_e_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"io_e_regs_read_data_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"io_e_memory_read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"io_e_memory_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"io_e_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"io_e_next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"io_e_wb_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+78,0,"io_e_reg_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"io_e_reg_write_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"io_m_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"io_m_regs_read_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"io_m_memory_read_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"io_m_memory_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"io_m_funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+83,0,"io_m_next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"io_m_wb_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+70,0,"io_m_reg_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"io_m_reg_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"regs_read_data_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+83,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"wb_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+70,0,"reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"reg_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("srFD", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"io_f_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"io_f_current_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"io_f_next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"io_d_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"io_d_current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"io_d_next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srMW", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"io_m_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"io_m_mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_m_next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"io_m_wb_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+70,0,"io_m_reg_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"io_m_reg_write_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"io_w_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_w_mem_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_w_next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"io_w_wb_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+24,0,"io_w_reg_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"io_w_reg_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"wb_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+24,0,"reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"reg_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+63,0,"io_next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"io_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_memory_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"io_regs_write_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+26,0,"io_regs_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instruction_rom", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"io_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"io_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+161,0,"mem_io_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"mem_io_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+12,0,"mem_io_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"initvar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_bundle_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_bundle_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"io_bundle_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"io_bundle_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"io_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"io_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+161,0,"mem_0_io_bundle_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"mem_0_io_bundle_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+94,0,"mem_0_io_bundle_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+161,0,"mem_0_io_debug_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"mem_0_io_debug_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+155,0,"mem_0_io_debug_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+161,0,"mem_0_io_instruction_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"mem_0_io_instruction_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+96,0,"mem_0_io_instruction_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"mem_0_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"mem_0_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+4,0,"mem_0_MPORT_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"mem_0_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"mem_1_io_bundle_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"mem_1_io_bundle_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+98,0,"mem_1_io_bundle_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+161,0,"mem_1_io_debug_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"mem_1_io_debug_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+156,0,"mem_1_io_debug_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+161,0,"mem_1_io_instruction_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"mem_1_io_instruction_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+99,0,"mem_1_io_instruction_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+100,0,"mem_1_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"mem_1_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+5,0,"mem_1_MPORT_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"mem_1_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"mem_2_io_bundle_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"mem_2_io_bundle_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+101,0,"mem_2_io_bundle_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+161,0,"mem_2_io_debug_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"mem_2_io_debug_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+157,0,"mem_2_io_debug_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+161,0,"mem_2_io_instruction_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"mem_2_io_instruction_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+102,0,"mem_2_io_instruction_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,0,"mem_2_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"mem_2_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+6,0,"mem_2_MPORT_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"mem_2_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"mem_3_io_bundle_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"mem_3_io_bundle_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+104,0,"mem_3_io_bundle_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+161,0,"mem_3_io_debug_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"mem_3_io_debug_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+158,0,"mem_3_io_debug_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+161,0,"mem_3_io_instruction_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"mem_3_io_instruction_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+105,0,"mem_3_io_instruction_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+106,0,"mem_3_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"mem_3_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+7,0,"mem_3_MPORT_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"mem_3_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"io_bundle_read_data_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+108,0,"io_bundle_read_data_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+159,0,"io_debug_read_data_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+160,0,"io_debug_read_data_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+109,0,"io_instruction_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+110,0,"io_instruction_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("rom_loader", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"io_bundle_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"io_bundle_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"io_bundle_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"io_rom_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"io_rom_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"io_load_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTestTopModule___024root__trace_init_top(VTestTopModule___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root__trace_init_top\n"); );
    // Body
    VTestTopModule___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTestTopModule___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestTopModule___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTestTopModule___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTestTopModule___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTestTopModule___024root__trace_register(VTestTopModule___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTestTopModule___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTestTopModule___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTestTopModule___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTestTopModule___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTestTopModule___024root__trace_const_0_sub_0(VTestTopModule___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTestTopModule___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root__trace_const_0\n"); );
    // Init
    VTestTopModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestTopModule___024root*>(voidSelf);
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTestTopModule___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTestTopModule___024root__trace_const_0_sub_0(VTestTopModule___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+161,(1U));
    bufp->fullIData(oldp+162,(vlSelf->TestTopModule__DOT__instruction_rom__DOT__initvar),32);
}

VL_ATTR_COLD void VTestTopModule___024root__trace_full_0_sub_0(VTestTopModule___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTestTopModule___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root__trace_full_0\n"); );
    // Init
    VTestTopModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestTopModule___024root*>(voidSelf);
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTestTopModule___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTestTopModule___024root__trace_full_0_sub_0(VTestTopModule___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->TestTopModule__DOT__mem_io_bundle_address),32);
    bufp->fullIData(oldp+2,(vlSelf->TestTopModule__DOT__mem_io_bundle_write_data),32);
    bufp->fullBit(oldp+3,(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en));
    bufp->fullBit(oldp+4,(((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                            ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                               & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                                  & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                      ? (0U == (3U 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                      : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
                            : (0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address))));
    bufp->fullBit(oldp+5,(((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                            ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                               & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                                  & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                      ? (1U == (3U 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                      : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
                            : (0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address))));
    bufp->fullBit(oldp+6,(((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                            ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                               & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                                  & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                      ? (2U == (3U 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                      : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
                            : (0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address))));
    bufp->fullBit(oldp+7,(((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                            ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                               & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                                  & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                      ? (3U == (3U 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                      : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
                            : (0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address))));
    bufp->fullIData(oldp+8,((((IData)(vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_hi) 
                              << 0x10U) | (IData)(vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_lo))),32);
    bufp->fullIData(oldp+9,(vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data),32);
    bufp->fullIData(oldp+10,(vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc),32);
    bufp->fullIData(oldp+11,(vlSelf->TestTopModule__DOT__rom_loader__DOT__address),32);
    bufp->fullIData(oldp+12,(((0x7aU >= (0x7fU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address))
                               ? vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem
                              [(0x7fU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address)]
                               : 0U)),32);
    bufp->fullIData(oldp+13,(((0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)
                               ? ((IData)(0x1000U) 
                                  + (IData)(((QData)((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) 
                                             << 2U)))
                               : 0U)),32);
    bufp->fullIData(oldp+14,(((0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)
                               ? ((0x7aU >= (0x7fU 
                                             & vlSelf->TestTopModule__DOT__rom_loader__DOT__address))
                                   ? vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem
                                  [(0x7fU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address)]
                                   : 0U) : 0U)),32);
    bufp->fullBit(oldp+15,((0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)));
    bufp->fullIData(oldp+16,((0x1fffffffU & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result)),32);
    bufp->fullIData(oldp+17,(((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)
                               ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable)
                                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_22)
                                        : 0U))),32);
    bufp->fullBit(oldp+18,(((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                            & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable))));
    bufp->fullBit(oldp+19,(((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                            & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                               & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                   ? (0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                   : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))));
    bufp->fullBit(oldp+20,(((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                            & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                               & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                   ? (1U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                   : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))));
    bufp->fullBit(oldp+21,(((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                            & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                               & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                   ? (2U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                   : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))));
    bufp->fullBit(oldp+22,(((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                            & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                               & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                   ? (3U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                   : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))));
    bufp->fullIData(oldp+23,(vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data),32);
    bufp->fullBit(oldp+24,(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_enable));
    bufp->fullCData(oldp+25,(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address),5);
    bufp->fullIData(oldp+26,(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data),32);
    bufp->fullCData(oldp+27,(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1),5);
    bufp->fullCData(oldp+28,((0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+29,(vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_flag_id));
    bufp->fullIData(oldp+30,((vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_immediate 
                              + ((0x67U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__opcode))
                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src
                                  : vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__current_pc))),32);
    bufp->fullBit(oldp+31,(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall));
    bufp->fullIData(oldp+32,(((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc)),32);
    bufp->fullIData(oldp+33,((((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall)) 
                               & (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid))
                               ? vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data
                               : (((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
                                   & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall))
                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data
                                   : 0x13U))),32);
    bufp->fullIData(oldp+34,(vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction),32);
    bufp->fullCData(oldp+35,(((0x13U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                               ? ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                >> 0xcU)))
                                   ? ((0x40000000U 
                                       & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                                       ? 9U : 8U) : 
                                  ((7U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                 >> 0xcU)))
                                    ? 7U : ((6U == 
                                             (7U & 
                                              (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                               >> 0xcU)))
                                             ? 6U : 
                                            ((4U == 
                                              (7U & 
                                               (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                >> 0xcU)))
                                              ? 5U : 
                                             ((3U == 
                                               (7U 
                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                   >> 0xcU)))
                                               ? 0xaU
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                       >> 0xcU)))
                                                   ? 4U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 1U)))))))
                               : ((0x33U == (0x7fU 
                                             & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                   ? ((5U == (7U & 
                                              (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                               >> 0xcU)))
                                       ? ((0x40000000U 
                                           & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                                           ? 9U : 8U)
                                       : ((7U == (7U 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                     >> 0xcU)))
                                           ? 7U : (
                                                   (6U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                        >> 0xcU)))
                                                    ? 6U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                         >> 0xcU)))
                                                     ? 5U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                          >> 0xcU)))
                                                      ? 0xaU
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                           >> 0xcU)))
                                                       ? 4U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                            >> 0xcU)))
                                                        ? 3U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                                                         ? 2U
                                                         : 1U))))))))
                                   : ((0x63U == (0x7fU 
                                                 & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                      | ((3U == (0x7fU 
                                                 & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                         | ((0x23U 
                                             == (0x7fU 
                                                 & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                               | ((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                                  | ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                                     | (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))))))))))),4);
    bufp->fullIData(oldp+36,(((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                               ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                     >> 0x1fU) ? 0xfffU
                                     : 0U) << 0x14U) 
                                  | ((0xff000U & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction) 
                                     | ((0x800U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                            >> 0x14U)))))
                               : ((0x17U == (0x7fU 
                                             & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                   ? (0xfffff000U & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                                   : ((0x37U == (0x7fU 
                                                 & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                       ? (0xfffff000U 
                                          & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                                       : ((0x63U == 
                                           (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                           ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                 >> 0x1fU)
                                                 ? 0xfffffU
                                                 : 0U) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                          >> 7U)))))
                                           : ((0x23U 
                                               == (0x7fU 
                                                   & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                               ? ((
                                                   ((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                     >> 0x1fU)
                                                     ? 0x1fffffU
                                                     : 0U) 
                                                   << 0xbU) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                           >> 7U))))
                                               : ((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_7
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_7
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_7
                                                     : 
                                                    ((((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                        >> 0x1fU)
                                                        ? 0xfffffU
                                                        : 0U) 
                                                      << 0xcU) 
                                                     | (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                        >> 0x14U))))))))))),32);
    bufp->fullBit(oldp+37,(((0x17U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                            | ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                               | (0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))))));
    bufp->fullBit(oldp+38,((0x33U != (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))));
    bufp->fullBit(oldp+39,((3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))));
    bufp->fullBit(oldp+40,((0x23U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))));
    bufp->fullCData(oldp+41,(((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_src_T_4) 
                                | (0x37U == (0x7fU 
                                             & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))) 
                               | (0x17U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)))
                               ? 0U : ((3U == (0x7fU 
                                               & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                        ? 1U : (((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                                 | (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)))
                                                 ? 2U
                                                 : 0U)))),2);
    bufp->fullBit(oldp+42,(((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_src_T_4) 
                              | (3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))) 
                             | ((0x17U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                | ((0x37U == (0x7fU 
                                              & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))))) 
                            | (0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)))));
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullCData(oldp+44,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__opcode),7);
    bufp->fullCData(oldp+45,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__func3),7);
    bufp->fullIData(oldp+46,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__current_pc),32);
    bufp->fullIData(oldp+47,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_1),32);
    bufp->fullIData(oldp+48,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_2),32);
    bufp->fullIData(oldp+49,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_immediate),32);
    bufp->fullBit(oldp+50,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop1_source));
    bufp->fullBit(oldp+51,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop2_source));
    bufp->fullCData(oldp+52,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func),4);
    bufp->fullCData(oldp+53,(vlSelf->TestTopModule__DOT__cpu__DOT__ex_io_rs1_src),2);
    bufp->fullCData(oldp+54,(vlSelf->TestTopModule__DOT__cpu__DOT__ex_io_rs2_src),2);
    bufp->fullIData(oldp+55,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result),32);
    bufp->fullIData(oldp+56,(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src),32);
    bufp->fullIData(oldp+57,((IData)((0x7fffffffffffffffULL 
                                      & ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                          ? (QData)((IData)(
                                                            (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                             + vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)))
                                          : ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                              ? (QData)((IData)(
                                                                (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                 - vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)))
                                              : ((3U 
                                                  == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                  ? 
                                                 ((QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6)) 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7))
                                                  : (QData)((IData)(
                                                                    ((4U 
                                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                                      ? 
                                                                     VL_LTS_III(32, vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6, vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                                       ? 
                                                                      (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                       ^ vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                                        ? 
                                                                       (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                        | vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)
                                                                        : 
                                                                       ((7U 
                                                                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                                         ? 
                                                                        (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                         & vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                                          ? 
                                                                         (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7))
                                                                          : 
                                                                         ((9U 
                                                                           == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                                           ? 
                                                                          VL_SHIFTRS_III(32,32,5, vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6, 
                                                                                (0x1fU 
                                                                                & vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7))
                                                                           : 
                                                                          ((0xaU 
                                                                            == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func)) 
                                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                              < vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)))))))))))))))),32);
    bufp->fullIData(oldp+58,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__regs_read_data_2),32);
    bufp->fullBit(oldp+59,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable));
    bufp->fullBit(oldp+60,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable));
    bufp->fullCData(oldp+61,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3),3);
    bufp->fullIData(oldp+62,(((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)
                               ? ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data
                                   : ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                       ? ((0U == (3U 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                           ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0)
                                           : VL_SHIFTR_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data, 0x10U))
                                       : vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_63))
                               : 0U)),32);
    bufp->fullIData(oldp+63,(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__next_pc),32);
    bufp->fullIData(oldp+64,(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__alu_result),32);
    bufp->fullIData(oldp+65,(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__mem_read_data),32);
    bufp->fullCData(oldp+66,(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__wb_src),2);
    bufp->fullCData(oldp+67,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs1),5);
    bufp->fullCData(oldp+68,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs2),5);
    bufp->fullCData(oldp+69,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_address),5);
    bufp->fullBit(oldp+70,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_enable));
    bufp->fullCData(oldp+71,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_address),5);
    bufp->fullCData(oldp+72,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__wb_src),2);
    bufp->fullBit(oldp+73,(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush));
    bufp->fullIData(oldp+74,(vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__current_pc),32);
    bufp->fullIData(oldp+75,(vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__next_pc),32);
    bufp->fullBit(oldp+76,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__memory_read_enable));
    bufp->fullBit(oldp+77,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__memory_write_enable));
    bufp->fullBit(oldp+78,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_enable));
    bufp->fullCData(oldp+79,((0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)),7);
    bufp->fullCData(oldp+80,((7U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                    >> 0xcU))),7);
    bufp->fullIData(oldp+81,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__next_pc),32);
    bufp->fullCData(oldp+82,((7U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__func3))),3);
    bufp->fullIData(oldp+83,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__next_pc),32);
    bufp->fullCData(oldp+84,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__wb_src),2);
    bufp->fullIData(oldp+85,(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6),32);
    bufp->fullIData(oldp+86,(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7),32);
    bufp->fullIData(oldp+87,(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src),32);
    bufp->fullCData(oldp+88,((7U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+89,((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+90,((0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+91,((3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result)),2);
    bufp->fullCData(oldp+92,((0x7fU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address)),7);
    bufp->fullSData(oldp+93,((0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                                         >> 2U))),13);
    bufp->fullCData(oldp+94,(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_data),8);
    bufp->fullSData(oldp+95,((0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                         >> 2U))),13);
    bufp->fullCData(oldp+96,(vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                             [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                          >> 2U))]),8);
    bufp->fullCData(oldp+97,((0xffU & vlSelf->TestTopModule__DOT__mem_io_bundle_write_data)),8);
    bufp->fullCData(oldp+98,(vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_data),8);
    bufp->fullCData(oldp+99,(vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                             [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                          >> 2U))]),8);
    bufp->fullCData(oldp+100,((0xffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                                        >> 8U))),8);
    bufp->fullCData(oldp+101,(vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_data),8);
    bufp->fullCData(oldp+102,(vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                              [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                           >> 2U))]),8);
    bufp->fullCData(oldp+103,((0xffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+104,(vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_data),8);
    bufp->fullCData(oldp+105,(vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                              [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                           >> 2U))]),8);
    bufp->fullCData(oldp+106,((vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                               >> 0x18U)),8);
    bufp->fullSData(oldp+107,(vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_lo),16);
    bufp->fullSData(oldp+108,(vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_hi),16);
    bufp->fullSData(oldp+109,(((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                                [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                             >> 2U))] 
                                << 8U) | vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                               [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U))])),16);
    bufp->fullSData(oldp+110,(((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                                [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                             >> 2U))] 
                                << 8U) | vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                               [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U))])),16);
    bufp->fullBit(oldp+111,(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid));
    bufp->fullIData(oldp+112,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0),32);
    bufp->fullIData(oldp+113,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1),32);
    bufp->fullIData(oldp+114,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2),32);
    bufp->fullIData(oldp+115,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3),32);
    bufp->fullIData(oldp+116,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4),32);
    bufp->fullIData(oldp+117,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5),32);
    bufp->fullIData(oldp+118,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6),32);
    bufp->fullIData(oldp+119,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7),32);
    bufp->fullIData(oldp+120,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8),32);
    bufp->fullIData(oldp+121,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9),32);
    bufp->fullIData(oldp+122,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10),32);
    bufp->fullIData(oldp+123,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11),32);
    bufp->fullIData(oldp+124,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12),32);
    bufp->fullIData(oldp+125,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13),32);
    bufp->fullIData(oldp+126,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14),32);
    bufp->fullIData(oldp+127,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15),32);
    bufp->fullIData(oldp+128,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16),32);
    bufp->fullIData(oldp+129,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17),32);
    bufp->fullIData(oldp+130,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18),32);
    bufp->fullIData(oldp+131,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19),32);
    bufp->fullIData(oldp+132,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20),32);
    bufp->fullIData(oldp+133,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21),32);
    bufp->fullIData(oldp+134,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22),32);
    bufp->fullIData(oldp+135,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23),32);
    bufp->fullIData(oldp+136,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24),32);
    bufp->fullIData(oldp+137,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25),32);
    bufp->fullIData(oldp+138,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26),32);
    bufp->fullIData(oldp+139,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27),32);
    bufp->fullIData(oldp+140,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28),32);
    bufp->fullIData(oldp+141,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29),32);
    bufp->fullIData(oldp+142,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30),32);
    bufp->fullIData(oldp+143,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31),32);
    bufp->fullBit(oldp+144,(vlSelf->clock));
    bufp->fullBit(oldp+145,(vlSelf->reset));
    bufp->fullIData(oldp+146,(vlSelf->io_mem_debug_read_address),32);
    bufp->fullCData(oldp+147,(vlSelf->io_regs_debug_read_address),5);
    bufp->fullIData(oldp+148,(vlSelf->io_regs_debug_read_data),32);
    bufp->fullIData(oldp+149,(vlSelf->io_mem_debug_read_data),32);
    bufp->fullBit(oldp+150,(vlSelf->io_instruction_valid));
    bufp->fullBit(oldp+151,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+152,(((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                ? 0U : ((0x1fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                                         : ((0x1eU 
                                             == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22
                                                        : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_117)))))))))))),32);
    bufp->fullIData(oldp+153,(((0U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                >> 0x14U)))
                                ? 0U : ((0x1fU == (0x1fU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                      >> 0x14U)))
                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                    >> 0x14U)))
                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                                             : ((0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                     >> 0x14U)))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                                 : 
                                                ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                      >> 0x14U)))
                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                       >> 0x14U)))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                                   : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_154))))))),32);
    bufp->fullSData(oldp+154,((0x1fffU & (vlSelf->io_mem_debug_read_address 
                                          >> 2U))),13);
    bufp->fullCData(oldp+155,(vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                              [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                           >> 2U))]),8);
    bufp->fullCData(oldp+156,(vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                              [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                           >> 2U))]),8);
    bufp->fullCData(oldp+157,(vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                              [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                           >> 2U))]),8);
    bufp->fullCData(oldp+158,(vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                              [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                           >> 2U))]),8);
    bufp->fullSData(oldp+159,(((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                                [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                             >> 2U))] 
                                << 8U) | vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                               [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                            >> 2U))])),16);
    bufp->fullSData(oldp+160,(((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                                [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                             >> 2U))] 
                                << 8U) | vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                               [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                            >> 2U))])),16);
}
