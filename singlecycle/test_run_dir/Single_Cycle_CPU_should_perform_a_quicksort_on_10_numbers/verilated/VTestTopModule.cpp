// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTestTopModule__pch.h"

//============================================================
// Constructors

VTestTopModule::VTestTopModule(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTestTopModule__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_regs_debug_read_address{vlSymsp->TOP.io_regs_debug_read_address}
    , io_mem_debug_read_address{vlSymsp->TOP.io_mem_debug_read_address}
    , io_regs_debug_read_data{vlSymsp->TOP.io_regs_debug_read_data}
    , io_mem_debug_read_data{vlSymsp->TOP.io_mem_debug_read_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTestTopModule::VTestTopModule(const char* _vcname__)
    : VTestTopModule(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTestTopModule::~VTestTopModule() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTestTopModule___024root___eval_debug_assertions(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG
void VTestTopModule___024root___eval_static(VTestTopModule___024root* vlSelf);
void VTestTopModule___024root___eval_initial(VTestTopModule___024root* vlSelf);
void VTestTopModule___024root___eval_settle(VTestTopModule___024root* vlSelf);
void VTestTopModule___024root___eval(VTestTopModule___024root* vlSelf);

void VTestTopModule::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTestTopModule::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTestTopModule___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTestTopModule___024root___eval_static(&(vlSymsp->TOP));
        VTestTopModule___024root___eval_initial(&(vlSymsp->TOP));
        VTestTopModule___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTestTopModule___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTestTopModule::eventsPending() { return false; }

uint64_t VTestTopModule::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTestTopModule::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTestTopModule___024root___eval_final(VTestTopModule___024root* vlSelf);

VL_ATTR_COLD void VTestTopModule::final() {
    VTestTopModule___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTestTopModule::hierName() const { return vlSymsp->name(); }
const char* VTestTopModule::modelName() const { return "VTestTopModule"; }
unsigned VTestTopModule::threads() const { return 1; }
void VTestTopModule::prepareClone() const { contextp()->prepareClone(); }
void VTestTopModule::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VTestTopModule::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VTestTopModule::trace()' called on model that was Verilated without --trace option");
}
