FIRRTL version 1.2.0
circuit Mux2 :
  module Mux2 :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip i1 : UInt<1>, flip i2 : UInt<1>, flip sel : UInt<1>, o : UInt<1>} @[src/main/scala/mux4/mux4.scala 7:14]

    node _io_o_T = eq(UInt<1>("h1"), io.sel) @[src/main/scala/mux4/mux4.scala 15:33]
    node _io_o_T_1 = mux(_io_o_T, io.i2, io.i1) @[src/main/scala/mux4/mux4.scala 15:33]
    io.o <= _io_o_T_1 @[src/main/scala/mux4/mux4.scala 15:8]

