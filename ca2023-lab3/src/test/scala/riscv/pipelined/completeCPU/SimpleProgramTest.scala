package riscv.pipelined.completeCPU

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import peripheral.MemoryFromFile
import riscv.core.CPU
import riscv.Parameters

class CPUWrapper(memoryFile: String) extends Module {

	/* Por medio de este bundle podrán inspeccionarse los contenidos tanto de la memoria principal
	 * como del banco de registros del core */
	val io = IO(new Bundle {
		val sram_debug_read_address	= Input(UInt(Parameters.AddrWidth))
		val regs_debug_read_address	= Input(UInt(Parameters.PhysicalRegisterAddrWidth))
		val sram_debug_read_data	= Output(UInt(Parameters.DataWidth))
		val regs_debug_read_data	= Output(UInt(Parameters.DataWidth))
	})

	val SRAM = Module(new MemoryFromFile(8192, memoryFile))
	val core = Module(new CPU)

	/* Se conecta la memoria al core */
	core.io.memory_bundle <> SRAM.io.bundle

	/* La memoria recibe la dirección generada por el módulo de fetch del core, y este último recibe
	 * la instrucción leída en esa posición de la memoria. Además, se indica al core que la ejecución
	 * del programa puede comenzar (flag instruction_valid) */
	SRAM.io.instruction_address	:= core.io.instruction_address
	core.io.instruction			:= SRAM.io.instruction
	core.io.instruction_valid	:= true.B

	/* Conexiones para la depuración del banco de registros y la memoria */
	core.io.debug_read_address	:= io.regs_debug_read_address
	io.regs_debug_read_data		:= core.io.debug_read_data
	SRAM.io.debug_read_address	:= io.sram_debug_read_address
	io.sram_debug_read_data		:= SRAM.io.debug_read_data

}

class LoadedMemoryTest extends AnyFlatSpec with ChiselScalatestTester {
	behavior.of("Single Cycle CPU")
	it should "store memory contents from file" in {
		test(new CPUWrapper("test.mem")) { c =>
			c.io.sram_debug_read_address.poke(0x0)
			c.io.sram_debug_read_data.expect("h_deadbeef".U)
			c.io.sram_debug_read_address.poke(0x4)
			c.io.sram_debug_read_data.expect("h_abcddcba".U)
			c.io.sram_debug_read_address.poke(0x8)
			c.io.sram_debug_read_data.expect("h_abbaabba".U)
			c.io.sram_debug_read_address.poke(0xC)
			c.io.sram_debug_read_data.expect("h_feeddeef".U)
		}
	}
}