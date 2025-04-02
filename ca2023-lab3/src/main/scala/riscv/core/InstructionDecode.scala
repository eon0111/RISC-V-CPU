// mycpu is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package riscv.core

import scala.collection.immutable.ArraySeq

import chisel3._
import chisel3.util._
import riscv.Parameters

object InstructionTypes {
  val L  = "b0000011".U
  val I  = "b0010011".U
  val S  = "b0100011".U
  val RM = "b0110011".U
  val B  = "b1100011".U
}

object Instructions {       
  val lui   = "b0110111".U
  val nop   = "b0000001".U
  val jal   = "b1101111".U
  val jalr  = "b1100111".U
  val auipc = "b0010111".U
  val csr   = "b1110011".U
  val fence = "b0001111".U
}

object InstructionsTypeL {
  val lb  = "b000".U
  val lh  = "b001".U
  val lw  = "b010".U
  val lbu = "b100".U
  val lhu = "b101".U
}

object InstructionsTypeI {
  val addi  = 0.U
  val slli  = 1.U
  val slti  = 2.U
  val sltiu = 3.U
  val xori  = 4.U
  val sri   = 5.U
  val ori   = 6.U
  val andi  = 7.U
}

object InstructionsTypeS {
  val sb = "b000".U
  val sh = "b001".U
  val sw = "b010".U
}

object InstructionsTypeR {
  val add_sub = 0.U
  val sll     = 1.U
  val slt     = 2.U
  val sltu    = 3.U
  val xor     = 4.U
  val sr      = 5.U
  val or      = 6.U
  val and     = 7.U
}

object InstructionsTypeM {
  val mul    = 0.U
  val mulh   = 1.U
  val mulhsu = 2.U
  val mulhum = 3.U
  val div    = 4.U
  val divu   = 5.U
  val rem    = 6.U
  val remu   = 7.U
}

object InstructionsTypeB {
  val beq  = "b000".U
  val bne  = "b001".U
  val blt  = "b100".U
  val bge  = "b101".U
  val bltu = "b110".U
  val bgeu = "b111".U
}

object InstructionsTypeCSR {
  val csrrw  = "b001".U
  val csrrs  = "b010".U
  val csrrc  = "b011".U
  val csrrwi = "b101".U
  val csrrsi = "b110".U
  val csrrci = "b111".U
}

object InstructionsNop {
  val nop = 0x00000013L.U(Parameters.DataWidth)
}

object InstructionsRet {
  val mret = 0x30200073L.U(Parameters.DataWidth)
  val ret  = 0x00008067L.U(Parameters.DataWidth)
}

object InstructionsEnv {
  val ecall  = 0x00000073L.U(Parameters.DataWidth)
  val ebreak = 0x00100073L.U(Parameters.DataWidth)
}

object ALUOp1Source {
  val Register           = 0.U(1.W)
  val InstructionAddress = 1.U(1.W)
}

object ALUOp2Source {
  val Register  = 0.U(1.W)
  val Immediate = 1.U(1.W)
}

object RegWriteSource {
  val ALUResult              = 0.U(2.W)
  val Memory                 = 1.U(2.W)
  val NextInstructionAddress = 2.U(2.W)
  // val CSR = 3.U(2.W)
}

class InstructionDecode extends Module {
  val io = IO(new Bundle {
    val instruction = Input(UInt(Parameters.InstructionWidth))

    val regs_reg1_read_address = Output(UInt(Parameters.PhysicalRegisterAddrWidth))
    val regs_reg2_read_address = Output(UInt(Parameters.PhysicalRegisterAddrWidth))
    val ex_alu_func            = Output(ALUFunctions())
    val ex_immediate           = Output(UInt(Parameters.DataWidth))
    val ex_aluop1_source       = Output(UInt(1.W))
    val ex_aluop2_source       = Output(UInt(1.W))
    val memory_read_enable     = Output(Bool())
    val memory_write_enable    = Output(Bool())
    val wb_src                 = Output(UInt(2.W))
    val reg_write_enable       = Output(Bool())
    val reg_write_address      = Output(UInt(Parameters.PhysicalRegisterAddrWidth))
  })
  val opcode = io.instruction(6, 0)
  val funct3 = io.instruction(14, 12)
  val funct7 = io.instruction(31, 25)
  val rd     = io.instruction(11, 7)
  val rs1    = io.instruction(19, 15)
  val rs2    = io.instruction(24, 20)

  io.regs_reg1_read_address := Mux(opcode === Instructions.lui, 0.U(Parameters.PhysicalRegisterAddrWidth), rs1)
  io.regs_reg2_read_address := rs2
  val immediate = MuxLookup(
    opcode,
    Cat(Fill(20, io.instruction(31)), io.instruction(31, 20)),
    IndexedSeq(
      InstructionTypes.I -> Cat(Fill(21, io.instruction(31)), io.instruction(30, 20)),  // NOTE: con 'Fill' extiende el signo del inmediato a 32 bits, y concatena el resultado de la extensión (que es el signo repetido tantas veces como sea necesario) al valor del inmediato
      InstructionTypes.L -> Cat(Fill(21, io.instruction(31)), io.instruction(30, 20)),
      Instructions.jalr  -> Cat(Fill(21, io.instruction(31)), io.instruction(30, 20)),
      InstructionTypes.S -> Cat(Fill(21, io.instruction(31)), io.instruction(30, 25), io.instruction(11, 7)), // NOTE: en las instrucciones del tipo 'S' el inmediato se encuentra segregado en dos mitades. Se extiende el signo de la mitad que ocupa los bits más significativos, y se concatena con la segunda mitad para formar un inmediato de 32 bits
      InstructionTypes.B -> Cat(
        Fill(20, io.instruction(31)),
        io.instruction(7),
        io.instruction(30, 25),
        io.instruction(11, 8),
        0.U(1.W)
      ),
      Instructions.lui   -> Cat(io.instruction(31, 12), 0.U(12.W)), // NOTE: doc@p19 -> 'lui' mueve un inmediato de 20 bits (con signo) a un registro.
                                                                    // TODO: en un principio no habría diferencia entre hacer 'lui rd, imm' y 'addi rd, x0, imm', no?
      /* NOTE: la instrucción 'auipc' guarda en el registro 'rd' la suma del PC de la instrucción
       * más un offset de 20 bits, desplazado 12 bits hacia la izda. Esto permite, mediante la
       * consecución de una instrucción 'auipc' y un 'jal', realizar saltos a cualquier punto del
       * espacio de direccionamiento que, en el caso de nuestra arquitectura, es de 32 bits (20 MSB's
       * del 'auipc' + 12 LSB's del 'jal') */
      Instructions.auipc -> Cat(io.instruction(31, 12), 0.U(12.W)),
      // jal's imm represents a multiple of 2 bytes.
      Instructions.jal -> Cat(
        Fill(12, io.instruction(31)),
        io.instruction(19, 12),
        io.instruction(20),
        io.instruction(30, 21),
        0.U(1.W)
      )
    )
  )
  io.ex_immediate := immediate

  /* NOTE: ALUControl es un módulo encargado de extraer la operación a realizar en la ALU en base al
   * opcode y los campos func3 y func7, y se ha optado por cambiarlo de localización al 'decode'
   * (antes estaba en 'execute') ya que la señal que gobierna el comportamiento de la ALU también
   * debería formar parte de la palabra de control */
  val alu_ctrl = Module(new ALUControl)
  alu_ctrl.io.opcode := opcode
  alu_ctrl.io.funct3 := funct3
  alu_ctrl.io.funct7 := funct7

  io.ex_alu_func := alu_ctrl.io.alu_funct

  io.ex_aluop1_source := Mux(
    opcode === Instructions.auipc || opcode === InstructionTypes.B || opcode === Instructions.jal,
    ALUOp1Source.InstructionAddress,
    ALUOp1Source.Register
  )

  // ALU op2 from reg: R-type,
  // ALU op2 from imm: L-Type (I-type subtype),
  //                   I-type (nop=addi, jalr, csr-class, fence),
  //                   J-type (jal),
  //                   U-type (lui, auipc),
  //                   S-type (rs2 value sent to MemControl, ALU computes rs1 + imm.)
  //                   B-type (rs2 compares with rs1 in jump judge unit, ALU computes jump address PC+imm.)
  io.ex_aluop2_source := Mux(
    opcode === InstructionTypes.RM,
    ALUOp2Source.Register,
    ALUOp2Source.Immediate
  )

  // lab3(InstructionDecode) begin

  // Configuracion de las señales que controlan el acceso a memoria
  io.memory_read_enable := Mux(
    opcode === InstructionTypes.L,
    true.B,
    false.B
  )

  io.memory_write_enable := Mux(
    opcode === InstructionTypes.S,
    true.B,
    false.B
  )

  // Configuración de la señal de control que habilita la escritura en el banco de registros
  io.wb_src := Mux(
    opcode === InstructionTypes.L,
    true.B,
    false.B
  )

  // lab3(InstructionDecode) end

  io.wb_src := MuxCase(
    RegWriteSource.ALUResult,
    ArraySeq(
      (opcode === InstructionTypes.RM || opcode === InstructionTypes.I ||
        opcode === Instructions.lui || opcode === Instructions.auipc) -> RegWriteSource.ALUResult, // same as default
      (opcode === InstructionTypes.L)                                 -> RegWriteSource.Memory,
      (opcode === Instructions.jal || opcode === Instructions.jalr)   -> RegWriteSource.NextInstructionAddress
    )
  )

  io.reg_write_enable := (opcode === InstructionTypes.RM) || (opcode === InstructionTypes.I) ||
    (opcode === InstructionTypes.L) || (opcode === Instructions.auipc) || (opcode === Instructions.lui) ||
    (opcode === Instructions.jal) || (opcode === Instructions.jalr)
  io.reg_write_address := rd
}
