// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisterFile.h for the primary calling header

#include "VRegisterFile__pch.h"
#include "VRegisterFile__Syms.h"
#include "VRegisterFile___024root.h"

void VRegisterFile___024root___ctor_var_reset(VRegisterFile___024root* vlSelf);

VRegisterFile___024root::VRegisterFile___024root(VRegisterFile__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRegisterFile___024root___ctor_var_reset(this);
}

void VRegisterFile___024root___configure_coverage(VRegisterFile___024root* vlSelf, bool first);

void VRegisterFile___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VRegisterFile___024root___configure_coverage(this, first);
}

VRegisterFile___024root::~VRegisterFile___024root() {
}

// Coverage
void VRegisterFile___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
