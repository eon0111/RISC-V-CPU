// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMux4.h for the primary calling header

#ifndef VERILATED_VMUX4___024ROOT_H_
#define VERILATED_VMUX4___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VMux4__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMux4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_sel,1,0);
    CData/*1:0*/ Mux4__DOT__selTmp;
    CData/*1:0*/ Mux4__DOT___selTmp_T_1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(io_i1,31,0);
    VL_IN(io_i2,31,0);
    VL_IN(io_i3,31,0);
    VL_IN(io_i4,31,0);
    VL_OUT(io_o,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMux4__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMux4___024root(VMux4__Syms* symsp, const char* v__name);
    ~VMux4___024root();
    VL_UNCOPYABLE(VMux4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
