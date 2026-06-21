// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMux4__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMux4::VMux4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMux4__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_sel{vlSymsp->TOP.io_sel}
    , io_i1{vlSymsp->TOP.io_i1}
    , io_i2{vlSymsp->TOP.io_i2}
    , io_i3{vlSymsp->TOP.io_i3}
    , io_i4{vlSymsp->TOP.io_i4}
    , io_o{vlSymsp->TOP.io_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMux4::VMux4(const char* _vcname__)
    : VMux4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMux4::~VMux4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMux4___024root___eval_debug_assertions(VMux4___024root* vlSelf);
#endif  // VL_DEBUG
void VMux4___024root___eval_static(VMux4___024root* vlSelf);
void VMux4___024root___eval_initial(VMux4___024root* vlSelf);
void VMux4___024root___eval_settle(VMux4___024root* vlSelf);
void VMux4___024root___eval(VMux4___024root* vlSelf);

void VMux4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMux4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMux4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMux4___024root___eval_static(&(vlSymsp->TOP));
        VMux4___024root___eval_initial(&(vlSymsp->TOP));
        VMux4___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMux4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMux4::eventsPending() { return false; }

uint64_t VMux4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMux4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMux4___024root___eval_final(VMux4___024root* vlSelf);

VL_ATTR_COLD void VMux4::final() {
    VMux4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMux4::hierName() const { return vlSymsp->name(); }
const char* VMux4::modelName() const { return "VMux4"; }
unsigned VMux4::threads() const { return 1; }
void VMux4::prepareClone() const { contextp()->prepareClone(); }
void VMux4::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VMux4::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VMux4___024root__trace_decl_types(VerilatedVcd* tracep);

void VMux4___024root__trace_init_top(VMux4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMux4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMux4___024root*>(voidSelf);
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VMux4___024root__trace_decl_types(tracep);
    VMux4___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VMux4___024root__trace_register(VMux4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMux4::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VMux4::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMux4___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
