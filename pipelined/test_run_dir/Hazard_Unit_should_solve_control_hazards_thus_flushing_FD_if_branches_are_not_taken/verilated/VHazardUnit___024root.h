// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHazardUnit.h for the primary calling header

#ifndef VERILATED_VHAZARDUNIT___024ROOT_H_
#define VERILATED_VHAZARDUNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VHazardUnit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VHazardUnit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_rs1_ex,4,0);
    VL_IN8(io_rs2_ex,4,0);
    VL_IN8(io_rd_mem,4,0);
    VL_IN8(io_rd_wb,4,0);
    VL_IN8(io_reg_wr_enable_mem,0,0);
    VL_IN8(io_reg_wr_enable_wb,0,0);
    VL_OUT8(io_alu_rs1_src,1,0);
    VL_OUT8(io_alu_rs2_src,1,0);
    VL_IN8(io_rs1_d,4,0);
    VL_IN8(io_rs2_d,4,0);
    VL_IN8(io_rd_ex,4,0);
    VL_IN8(io_ex_regs_write_src,1,0);
    VL_OUT8(io_pc_stall,0,0);
    VL_OUT8(io_srFD_stall,0,0);
    VL_OUT8(io_srDE_flush,0,0);
    VL_IN8(io_ex_jump_flag,0,0);
    VL_OUT8(io_srFD_flush,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VHazardUnit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VHazardUnit___024root(VHazardUnit__Syms* symsp, const char* v__name);
    ~VHazardUnit___024root();
    VL_UNCOPYABLE(VHazardUnit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
