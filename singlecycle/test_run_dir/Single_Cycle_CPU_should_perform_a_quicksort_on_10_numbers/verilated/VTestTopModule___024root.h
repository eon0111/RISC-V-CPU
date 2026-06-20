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
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__regs_clock;
        VL_IN8(reset,0,0);
        VL_IN8(io_regs_debug_read_address,4,0);
        CData/*1:0*/ TestTopModule__DOT__CPU_clkdiv;
        CData/*1:0*/ TestTopModule__DOT___CPU_next_T_2;
        CData/*0:0*/ TestTopModule__DOT__mem__DOT__mem_0_MPORT_en;
        CData/*0:0*/ TestTopModule__DOT__rom_loader__DOT__valid;
        CData/*0:0*/ TestTopModule__DOT__rom_loader__DOT___GEN_0;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__regs_io_write_enable;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__regs_io_write_address;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__regs_io_read_address1;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__regs_io_read_address2;
        CData/*1:0*/ TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source;
        CData/*6:0*/ TestTopModule__DOT__cpu__DOT__id__DOT__opcode;
        CData/*3:0*/ TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_func;
        CData/*2:0*/ TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4529f3cd__0;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45fa5d80__0;
        CData/*7:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0;
        CData/*7:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0;
        CData/*7:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0;
        CData/*7:0*/ __VdfgTmp_ha885c88e__0;
        CData/*7:0*/ __VdfgTmp_hcdfd3b03__0;
        CData/*7:0*/ __VdfgTmp_h668a7439__0;
        CData/*0:0*/ __VdfgTmp_h90b3d085__0;
        CData/*7:0*/ __VdfgTmp_hd329e994__0;
        CData/*7:0*/ __VdfgTmp_hf7b7a7fe__0;
        CData/*7:0*/ __VdfgTmp_h39040509__0;
        CData/*7:0*/ __VdfgTmp_haeeb6a10__0;
        CData/*7:0*/ __VdfgTmp_h65e1bffd__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TestTopModule__DOT__cpu__DOT__regs_clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*12:0*/ TestTopModule__DOT__mem__DOT__mem_2_io_instruction_MPORT_addr_pipe_0;
        SData/*12:0*/ TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0;
        SData/*12:0*/ TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0;
        SData/*12:0*/ TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0;
        SData/*15:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0;
        SData/*15:0*/ __VdfgTmp_he1cdd106__0;
        SData/*15:0*/ __VdfgTmp_hf6cf16cb__0;
        VL_IN(io_mem_debug_read_address,31,0);
        VL_OUT(io_regs_debug_read_data,31,0);
        VL_OUT(io_mem_debug_read_data,31,0);
        IData/*31:0*/ TestTopModule__DOT__mem_io_bundle_address;
        IData/*31:0*/ TestTopModule__DOT__mem_io_bundle_write_data;
        IData/*31:0*/ TestTopModule__DOT__rom_loader__DOT__address;
        IData/*31:0*/ TestTopModule__DOT__rom_loader__DOT___address_T_1;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs_io_write_data;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs_io_read_data1;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs_io_read_data2;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_address_id;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__id_io_ex_immediate;
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
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1;
        IData/*23:0*/ __VdfgTmp_h1bc5eb2c__0;
        IData/*31:0*/ __Vdly__TestTopModule__DOT__rom_loader__DOT__address;
        IData/*31:0*/ __VactIterCount;
        QData/*62:0*/ __VdfgTmp_h6e50e5ad__0;
        VlUnpacked<CData/*7:0*/, 8192> TestTopModule__DOT__mem__DOT__mem_0;
        VlUnpacked<CData/*7:0*/, 8192> TestTopModule__DOT__mem__DOT__mem_1;
        VlUnpacked<CData/*7:0*/, 8192> TestTopModule__DOT__mem__DOT__mem_2;
        VlUnpacked<CData/*7:0*/, 8192> TestTopModule__DOT__mem__DOT__mem_3;
        VlUnpacked<IData/*31:0*/, 1037> TestTopModule__DOT__instruction_rom__DOT__mem;
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
