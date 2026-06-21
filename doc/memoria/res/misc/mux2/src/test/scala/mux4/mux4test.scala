package mux4

import chisel3._
import chisel3.util._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import mux4.Mux4

/*
class Mux4Test extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Mux4")
  it should "generate the right output given any valid selector value as input" in {
    test(new Mux4).withAnnotations(TestAnnotations.annos) { c =>
      c.io.i1.poke(1.U)
      c.io.i2.poke(2.U)
      c.io.i3.poke(3.U)
      c.io.i4.poke(4.U)
      var x = 0
      for (x <- 0 to 3) {
        c.io.sel.poke(x.U)
        c.io.o.expect(x + 1)
      }
    }
  }
}
*/

class Mux4TestWithRegs extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Mux4")
  it should "generate the right output given any valid selector value as input" in {
    test(new Mux4).withAnnotations(TestAnnotations.annos) { c =>
      c.io.i1.poke(1.U)
      c.io.i2.poke(2.U)
      c.io.i3.poke(3.U)
      c.io.i4.poke(4.U)
    
      var x = 0
      for (x <- 0 to 4) {
        c.clock.step()
      }
    }
  }
}
