// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTopModule.h for the primary calling header

#include "VTestTopModule__pch.h"
#include "VTestTopModule__Syms.h"
#include "VTestTopModule___024root.h"

void VTestTopModule___024root___ctor_var_reset(VTestTopModule___024root* vlSelf);

VTestTopModule___024root::VTestTopModule___024root(VTestTopModule__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTestTopModule___024root___ctor_var_reset(this);
}

void VTestTopModule___024root___configure_coverage(VTestTopModule___024root* vlSelf, bool first);

void VTestTopModule___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VTestTopModule___024root___configure_coverage(this, first);
}

VTestTopModule___024root::~VTestTopModule___024root() {
}

// Coverage
void VTestTopModule___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
