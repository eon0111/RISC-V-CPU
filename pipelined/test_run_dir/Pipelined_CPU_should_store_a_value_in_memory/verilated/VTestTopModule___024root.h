// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestTopModule.h for the primary calling header

#ifndef VERILATED_VTESTTOPMODULE___024ROOT_H_
#define VERILATED_VTESTTOPMODULE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VTestTopModule__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTestTopModule___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_regs_debug_read_address,4,0);
        VL_OUT8(io_instruction_valid,0,0);
        CData/*7:0*/ TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_data;
        CData/*0:0*/ TestTopModule__DOT__mem__DOT__mem_0_MPORT_en;
        CData/*7:0*/ TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_data;
        CData/*7:0*/ TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_data;
        CData/*7:0*/ TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_data;
        CData/*0:0*/ TestTopModule__DOT__rom_loader__DOT__valid;
        CData/*0:0*/ TestTopModule__DOT__rom_loader__DOT___GEN_0;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__regs_io_read_address1;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_flag_id;
        CData/*1:0*/ TestTopModule__DOT__cpu__DOT__ex_io_rs1_src;
        CData/*1:0*/ TestTopModule__DOT__cpu__DOT__ex_io_rs2_src;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_src_T_4;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall;
        CData/*6:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__opcode;
        CData/*6:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__func3;
        CData/*3:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop1_source;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop2_source;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__memory_read_enable;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__memory_write_enable;
        CData/*1:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__wb_src;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_enable;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_address;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__rs1;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__rs2;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable;
        CData/*2:0*/ TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3;
        CData/*1:0*/ TestTopModule__DOT__cpu__DOT__srEM__DOT__wb_src;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_enable;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_address;
        CData/*1:0*/ TestTopModule__DOT__cpu__DOT__srMW__DOT__wb_src;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_enable;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ TestTopModule__DOT__mem__DOT__io_bundle_read_data_lo;
        SData/*15:0*/ TestTopModule__DOT__mem__DOT__io_bundle_read_data_hi;
        SData/*15:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0;
        VL_IN(io_mem_debug_read_address,31,0);
        VL_OUT(io_regs_debug_read_data,31,0);
        VL_OUT(io_mem_debug_read_data,31,0);
        IData/*31:0*/ TestTopModule__DOT__mem_io_bundle_address;
        IData/*31:0*/ TestTopModule__DOT__mem_io_bundle_write_data;
        IData/*31:0*/ TestTopModule__DOT__instruction_rom__DOT__initvar;
        IData/*31:0*/ TestTopModule__DOT__rom_loader__DOT__address;
        IData/*31:0*/ TestTopModule__DOT__rom_loader__DOT___address_T_1;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs_io_write_data;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4;
    };
    struct {
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_117;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_154;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc_plus_four;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_7;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_63;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srFD__DOT__current_pc;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srFD__DOT__next_pc;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__current_pc;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__next_pc;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_1;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_2;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_immediate;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srEM__DOT__regs_read_data_2;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srEM__DOT__next_pc;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srMW__DOT__alu_result;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srMW__DOT__mem_read_data;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__srMW__DOT__next_pc;
        IData/*31:0*/ __VactIterCount;
        QData/*39:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_22;
        VlUnpacked<CData/*7:0*/, 8192> TestTopModule__DOT__mem__DOT__mem_0;
        VlUnpacked<CData/*7:0*/, 8192> TestTopModule__DOT__mem__DOT__mem_1;
        VlUnpacked<CData/*7:0*/, 8192> TestTopModule__DOT__mem__DOT__mem_2;
        VlUnpacked<CData/*7:0*/, 8192> TestTopModule__DOT__mem__DOT__mem_3;
        VlUnpacked<IData/*31:0*/, 123> TestTopModule__DOT__instruction_rom__DOT__mem;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTestTopModule__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestTopModule___024root(VTestTopModule__Syms* symsp, const char* v__name);
    ~VTestTopModule___024root();
    VL_UNCOPYABLE(VTestTopModule___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
