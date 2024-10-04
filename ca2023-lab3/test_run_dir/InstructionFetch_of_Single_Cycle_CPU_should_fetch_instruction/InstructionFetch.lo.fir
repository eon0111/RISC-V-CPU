FIRRTL version 1.2.0
circuit InstructionFetch :
  module InstructionFetch :
    input clock : Clock
    input reset : UInt<1>
    input io_jump_flag_id : UInt<1> @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 14:14]
    input io_jump_address_id : UInt<32> @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 14:14]
    input io_instruction_read_data : UInt<32> @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 14:14]
    input io_instruction_valid : UInt<1> @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 14:14]
    output io_instruction_address : UInt<32> @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 14:14]
    output io_instruction : UInt<32> @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 14:14]

    reg pc : UInt<32>, clock with :
      reset => (UInt<1>("h0"), pc) @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 23:19]
    node _pc_T = add(pc, UInt<3>("h4")) @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 29:56]
    node _pc_T_1 = tail(_pc_T, 1) @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 29:56]
    node _pc_T_2 = mux(io_jump_flag_id, io_jump_address_id, _pc_T_1) @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 29:15]
    node _GEN_0 = mux(io_instruction_valid, io_instruction_read_data, UInt<5>("h13")) @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 25:30 26:20 35:20]
    node _GEN_1 = mux(io_instruction_valid, _pc_T_2, pc) @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 25:30 29:9 34:20]
    io_instruction_address <= pc @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 37:26]
    io_instruction <= _GEN_0
    pc <= mux(reset, UInt<32>("h1000"), _GEN_1) @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 23:{19,19}]
