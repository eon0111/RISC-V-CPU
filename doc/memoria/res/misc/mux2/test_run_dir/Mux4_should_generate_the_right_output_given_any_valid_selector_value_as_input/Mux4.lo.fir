FIRRTL version 1.2.0
circuit Mux4 :
  module Mux4 :
    input clock : Clock
    input reset : UInt<1>
    input io_i1 : UInt<32> @[src/main/scala/mux4/mux4.scala 7:14]
    input io_i2 : UInt<32> @[src/main/scala/mux4/mux4.scala 7:14]
    input io_i3 : UInt<32> @[src/main/scala/mux4/mux4.scala 7:14]
    input io_i4 : UInt<32> @[src/main/scala/mux4/mux4.scala 7:14]
    output io_o : UInt<32> @[src/main/scala/mux4/mux4.scala 7:14]
    output io_sel : UInt<2> @[src/main/scala/mux4/mux4.scala 7:14]

    reg selTmp : UInt<2>, clock with :
      reset => (UInt<1>("h0"), selTmp) @[src/main/scala/mux4/mux4.scala 17:23]
    node _selTmp_T = add(selTmp, UInt<1>("h1")) @[src/main/scala/mux4/mux4.scala 18:20]
    node _selTmp_T_1 = tail(_selTmp_T, 1) @[src/main/scala/mux4/mux4.scala 18:20]
    node _io_o_T = eq(UInt<1>("h1"), selTmp) @[src/main/scala/mux4/mux4.scala 20:35]
    node _io_o_T_1 = mux(_io_o_T, io_i2, io_i1) @[src/main/scala/mux4/mux4.scala 20:35]
    node _io_o_T_2 = eq(UInt<2>("h2"), selTmp) @[src/main/scala/mux4/mux4.scala 20:35]
    node _io_o_T_3 = mux(_io_o_T_2, io_i3, _io_o_T_1) @[src/main/scala/mux4/mux4.scala 20:35]
    node _io_o_T_4 = eq(UInt<2>("h3"), selTmp) @[src/main/scala/mux4/mux4.scala 20:35]
    node _io_o_T_5 = mux(_io_o_T_4, io_i4, _io_o_T_3) @[src/main/scala/mux4/mux4.scala 20:35]
    io_o <= _io_o_T_5 @[src/main/scala/mux4/mux4.scala 20:8]
    io_sel <= selTmp @[src/main/scala/mux4/mux4.scala 29:10]
    selTmp <= mux(reset, UInt<2>("h0"), _selTmp_T_1) @[src/main/scala/mux4/mux4.scala 17:{23,23} 18:10]
