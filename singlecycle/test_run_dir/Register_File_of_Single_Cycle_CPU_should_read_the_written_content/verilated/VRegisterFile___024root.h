// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegisterFile.h for the primary calling header

#ifndef VERILATED_VREGISTERFILE___024ROOT_H_
#define VERILATED_VREGISTERFILE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VRegisterFile__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegisterFile___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_write_enable,0,0);
    VL_IN8(io_write_address,4,0);
    VL_IN8(io_read_address1,4,0);
    VL_IN8(io_read_address2,4,0);
    VL_IN8(io_debug_read_address,4,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(io_write_data,31,0);
    VL_OUT(io_read_data1,31,0);
    VL_OUT(io_read_data2,31,0);
    VL_OUT(io_debug_read_data,31,0);
    IData/*31:0*/ RegisterFile__DOT__registers_0;
    IData/*31:0*/ RegisterFile__DOT__registers_1;
    IData/*31:0*/ RegisterFile__DOT__registers_2;
    IData/*31:0*/ RegisterFile__DOT__registers_3;
    IData/*31:0*/ RegisterFile__DOT__registers_4;
    IData/*31:0*/ RegisterFile__DOT__registers_5;
    IData/*31:0*/ RegisterFile__DOT__registers_6;
    IData/*31:0*/ RegisterFile__DOT__registers_7;
    IData/*31:0*/ RegisterFile__DOT__registers_8;
    IData/*31:0*/ RegisterFile__DOT__registers_9;
    IData/*31:0*/ RegisterFile__DOT__registers_10;
    IData/*31:0*/ RegisterFile__DOT__registers_11;
    IData/*31:0*/ RegisterFile__DOT__registers_12;
    IData/*31:0*/ RegisterFile__DOT__registers_13;
    IData/*31:0*/ RegisterFile__DOT__registers_14;
    IData/*31:0*/ RegisterFile__DOT__registers_15;
    IData/*31:0*/ RegisterFile__DOT__registers_16;
    IData/*31:0*/ RegisterFile__DOT__registers_17;
    IData/*31:0*/ RegisterFile__DOT__registers_18;
    IData/*31:0*/ RegisterFile__DOT__registers_19;
    IData/*31:0*/ RegisterFile__DOT__registers_20;
    IData/*31:0*/ RegisterFile__DOT__registers_21;
    IData/*31:0*/ RegisterFile__DOT__registers_22;
    IData/*31:0*/ RegisterFile__DOT__registers_23;
    IData/*31:0*/ RegisterFile__DOT__registers_24;
    IData/*31:0*/ RegisterFile__DOT__registers_25;
    IData/*31:0*/ RegisterFile__DOT__registers_26;
    IData/*31:0*/ RegisterFile__DOT__registers_27;
    IData/*31:0*/ RegisterFile__DOT__registers_28;
    IData/*31:0*/ RegisterFile__DOT__registers_29;
    IData/*31:0*/ RegisterFile__DOT__registers_30;
    IData/*31:0*/ RegisterFile__DOT__registers_31;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRegisterFile__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRegisterFile___024root(VRegisterFile__Syms* symsp, const char* v__name);
    ~VRegisterFile___024root();
    VL_UNCOPYABLE(VRegisterFile___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
