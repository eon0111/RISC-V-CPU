module InstructionFetch(
  input         clock,
  input         reset,
  input         io_jump_flag_id, // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  input  [31:0] io_jump_address_id, // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  input  [31:0] io_instruction_read_data, // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  input         io_instruction_valid, // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  output [31:0] io_instruction_address, // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  output [31:0] io_instruction // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 14:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 23:19]
  wire [31:0] _pc_T_1 = pc + 32'h4; // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 29:56]
  assign io_instruction_address = pc; // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 37:26]
  assign io_instruction = io_instruction_valid ? io_instruction_read_data : 32'h13; // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 25:30 26:20 35:20]
  always @(posedge clock) begin
    if (reset) begin // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 23:19]
      pc <= 32'h1000; // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 23:19]
    end else if (io_instruction_valid) begin // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 25:30]
      if (io_jump_flag_id) begin // @[ca2023-lab3/src/main/scala/riscv/core/InstructionFetch.scala 29:15]
        pc <= io_jump_address_id;
      end else begin
        pc <= _pc_T_1;
      end
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
  pc = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
