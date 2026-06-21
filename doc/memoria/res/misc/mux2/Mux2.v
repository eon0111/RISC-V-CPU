module Mux2(
  input   clock,
  input   reset,
  input   io_i1, // @[src/main/scala/mux4/mux4.scala 7:14]
  input   io_i2, // @[src/main/scala/mux4/mux4.scala 7:14]
  input   io_sel, // @[src/main/scala/mux4/mux4.scala 7:14]
  output  io_o // @[src/main/scala/mux4/mux4.scala 7:14]
);
  assign io_o = io_sel ? io_i2 : io_i1; // @[src/main/scala/mux4/mux4.scala 15:33]
endmodule
