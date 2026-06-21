module Mux4(
  input         clock,
  input         reset,
  input  [31:0] io_i1, // @[src/main/scala/mux4/mux4.scala 7:14]
  input  [31:0] io_i2, // @[src/main/scala/mux4/mux4.scala 7:14]
  input  [31:0] io_i3, // @[src/main/scala/mux4/mux4.scala 7:14]
  input  [31:0] io_i4, // @[src/main/scala/mux4/mux4.scala 7:14]
  output [31:0] io_o, // @[src/main/scala/mux4/mux4.scala 7:14]
  output [1:0]  io_sel // @[src/main/scala/mux4/mux4.scala 7:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] selTmp; // @[src/main/scala/mux4/mux4.scala 17:23]
  wire [1:0] _selTmp_T_1 = selTmp + 2'h1; // @[src/main/scala/mux4/mux4.scala 18:20]
  wire [31:0] _io_o_T_1 = 2'h1 == selTmp ? io_i2 : io_i1; // @[src/main/scala/mux4/mux4.scala 20:35]
  wire [31:0] _io_o_T_3 = 2'h2 == selTmp ? io_i3 : _io_o_T_1; // @[src/main/scala/mux4/mux4.scala 20:35]
  assign io_o = 2'h3 == selTmp ? io_i4 : _io_o_T_3; // @[src/main/scala/mux4/mux4.scala 20:35]
  assign io_sel = selTmp; // @[src/main/scala/mux4/mux4.scala 29:10]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/mux4/mux4.scala 17:23]
      selTmp <= 2'h0; // @[src/main/scala/mux4/mux4.scala 17:23]
    end else begin
      selTmp <= _selTmp_T_1; // @[src/main/scala/mux4/mux4.scala 18:10]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  selTmp = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
