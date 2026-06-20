// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VHAZARDUNIT_H_
#define VERILATED_VHAZARDUNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VHazardUnit__Syms;
class VHazardUnit___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VHazardUnit VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VHazardUnit__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_rs1_ex,4,0);
    VL_IN8(&io_rs2_ex,4,0);
    VL_IN8(&io_rd_mem,4,0);
    VL_IN8(&io_rd_wb,4,0);
    VL_IN8(&io_reg_wr_enable_mem,0,0);
    VL_IN8(&io_reg_wr_enable_wb,0,0);
    VL_OUT8(&io_alu_rs1_src,1,0);
    VL_OUT8(&io_alu_rs2_src,1,0);
    VL_IN8(&io_rs1_d,4,0);
    VL_IN8(&io_rs2_d,4,0);
    VL_IN8(&io_rd_ex,4,0);
    VL_IN8(&io_ex_regs_write_src,1,0);
    VL_OUT8(&io_pc_stall,0,0);
    VL_OUT8(&io_srFD_stall,0,0);
    VL_OUT8(&io_srDE_flush,0,0);
    VL_IN8(&io_ex_jump_flag,0,0);
    VL_OUT8(&io_srFD_flush,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VHazardUnit___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VHazardUnit(VerilatedContext* contextp, const char* name = "TOP");
    explicit VHazardUnit(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VHazardUnit();
  private:
    VL_UNCOPYABLE(VHazardUnit);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
