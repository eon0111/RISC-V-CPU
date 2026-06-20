// mycpu is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package peripheral

import java.io.FileWriter
import java.nio.file.Files
import java.nio.file.Paths
import java.nio.ByteBuffer
import java.nio.ByteOrder

import chisel3._
import chisel3.experimental.annotate
import chisel3.experimental.ChiselAnnotation
import chisel3.util.experimental.loadMemoryFromFileInline
import firrtl.annotations.MemorySynthInit
import riscv.Parameters

class InstructionROM(instructionFilename: String) extends Module {
  val io = IO(new Bundle {
    val address = Input(UInt(Parameters.AddrWidth))
    val data    = Output(UInt(Parameters.InstructionWidth))
  })

  val (instructionsInitFile, capacity) = readAsmBinary(instructionFilename)
  val mem                              = Mem(capacity, UInt(Parameters.InstructionWidth))
  annotate(new ChiselAnnotation {
    override def toFirrtl =
      MemorySynthInit
  })

  // NOTE: https://github.com/chipsalliance/chisel/blob/main/src/main/scala/chisel3/util/experimental/LoadMemoryTransform.scala
  // NOTE: https://www.chisel-lang.org/docs/appendix/experimental-features#loading-memories-for-simulation-or-fpga-initialization
  loadMemoryFromFileInline(mem, instructionsInitFile.toString.replaceAll("\\\\", "/"))
  io.data := mem.read(io.address)


  // NOTE: esta función tan solo se emplea para generar, a partir de un fichero de código binario,
  // un fichero de texto plano donde puedan verse las instrucciones albergadas en ese fichero-
  // Asimismo, en base a la lectura del fichero binario determina el tamaño ('capacity')
  // con que deberá configurarse la ROM de instrucciones donde se volcarán las instrucciones que
  // conforman el programa, el cual será trasladado más adelante a la memoria principal del core.
  def readAsmBinary(filename: String) = {
    val inputStream = if (Files.exists(Paths.get(filename))) {
      Files.newInputStream(Paths.get(filename))
    } else {
      getClass.getClassLoader.getResourceAsStream(filename)
    }
    var instructions = new Array[BigInt](0)
    val arr          = new Array[Byte](4)
    while (inputStream.read(arr) == 4) {
      val instBuf = ByteBuffer.wrap(arr)
      instBuf.order(ByteOrder.LITTLE_ENDIAN)
      val inst = BigInt(instBuf.getInt() & 0xffffffffL)
      instructions = instructions :+ inst
    }
    instructions = instructions :+ BigInt(0x00000013L)
    instructions = instructions :+ BigInt(0x00000013L)
    instructions = instructions :+ BigInt(0x00000013L)
    val currentDir = System.getProperty("user.dir")
    val exeTxtPath = Paths.get(currentDir, "verilog", f"${instructionFilename}.txt")
    val writer     = new FileWriter(exeTxtPath.toString)
    for (i <- instructions.indices) {
      writer.write(f"@$i%x\n${instructions(i)}%08x\n")
    }
    writer.close()
    (exeTxtPath, instructions.length)
  }
}
