module Memory(
  input         clock,
  input  [31:0] io_bundle_address, // @[src/main/scala/peripheral/Memory.scala 46:14]
  input  [31:0] io_bundle_write_data, // @[src/main/scala/peripheral/Memory.scala 46:14]
  input         io_bundle_write_enable, // @[src/main/scala/peripheral/Memory.scala 46:14]
  input         io_bundle_write_strobe_0, // @[src/main/scala/peripheral/Memory.scala 46:14]
  input         io_bundle_write_strobe_1, // @[src/main/scala/peripheral/Memory.scala 46:14]
  input         io_bundle_write_strobe_2, // @[src/main/scala/peripheral/Memory.scala 46:14]
  input         io_bundle_write_strobe_3, // @[src/main/scala/peripheral/Memory.scala 46:14]
  output [31:0] io_bundle_read_data, // @[src/main/scala/peripheral/Memory.scala 46:14]
  output [31:0] io_instruction, // @[src/main/scala/peripheral/Memory.scala 46:14]
  input  [31:0] io_instruction_address, // @[src/main/scala/peripheral/Memory.scala 46:14]
  input  [31:0] io_debug_read_address, // @[src/main/scala/peripheral/Memory.scala 46:14]
  output [31:0] io_debug_read_data // @[src/main/scala/peripheral/Memory.scala 46:14]
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_MEM_INIT
  reg [7:0] mem_0 [0:8191]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_0_io_bundle_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_0_io_bundle_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_0_io_bundle_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_0_io_debug_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_0_io_debug_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_0_io_debug_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_0_io_instruction_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_0_io_instruction_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_0_io_instruction_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_0_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_0_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_0_MPORT_mask; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_0_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  reg [7:0] mem_1 [0:8191]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_1_io_bundle_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_1_io_bundle_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_1_io_bundle_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_1_io_debug_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_1_io_debug_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_1_io_debug_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_1_io_instruction_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_1_io_instruction_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_1_io_instruction_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_1_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_1_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_1_MPORT_mask; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_1_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  reg [7:0] mem_2 [0:8191]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_2_io_bundle_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_2_io_bundle_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_2_io_bundle_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_2_io_debug_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_2_io_debug_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_2_io_debug_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_2_io_instruction_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_2_io_instruction_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_2_io_instruction_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_2_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_2_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_2_MPORT_mask; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_2_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  reg [7:0] mem_3 [0:8191]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_3_io_bundle_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_3_io_bundle_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_3_io_bundle_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_3_io_debug_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_3_io_debug_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_3_io_debug_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_3_io_instruction_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_3_io_instruction_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_3_io_instruction_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [7:0] mem_3_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [12:0] mem_3_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_3_MPORT_mask; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire  mem_3_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 74:16]
  wire [31:0] _T = {{2'd0}, io_bundle_address[31:2]}; // @[src/main/scala/peripheral/Memory.scala 91:34]
  wire [15:0] io_bundle_read_data_lo = {mem_1_io_bundle_read_data_MPORT_data,mem_0_io_bundle_read_data_MPORT_data}; // @[src/main/scala/peripheral/Memory.scala 93:86]
  wire [15:0] io_bundle_read_data_hi = {mem_3_io_bundle_read_data_MPORT_data,mem_2_io_bundle_read_data_MPORT_data}; // @[src/main/scala/peripheral/Memory.scala 93:86]
  wire [31:0] _io_debug_read_data_T = {{2'd0}, io_debug_read_address[31:2]}; // @[src/main/scala/peripheral/Memory.scala 94:58]
  wire [15:0] io_debug_read_data_lo = {mem_1_io_debug_read_data_MPORT_data,mem_0_io_debug_read_data_MPORT_data}; // @[src/main/scala/peripheral/Memory.scala 94:90]
  wire [15:0] io_debug_read_data_hi = {mem_3_io_debug_read_data_MPORT_data,mem_2_io_debug_read_data_MPORT_data}; // @[src/main/scala/peripheral/Memory.scala 94:90]
  wire [31:0] _io_instruction_T = {{2'd0}, io_instruction_address[31:2]}; // @[src/main/scala/peripheral/Memory.scala 95:59]
  wire [15:0] io_instruction_lo = {mem_1_io_instruction_MPORT_data,mem_0_io_instruction_MPORT_data}; // @[src/main/scala/peripheral/Memory.scala 95:91]
  wire [15:0] io_instruction_hi = {mem_3_io_instruction_MPORT_data,mem_2_io_instruction_MPORT_data}; // @[src/main/scala/peripheral/Memory.scala 95:91]
  wire  _GEN_0 = 1'h1;
  wire  _GEN_1 = 1'h1;
  wire  _GEN_2 = 1'h1;
  wire  _GEN_3 = 1'h1;
  wire  _GEN_4 = 1'h1;
  wire  _GEN_5 = 1'h1;
  wire  _GEN_6 = 1'h1;
  wire  _GEN_7 = 1'h1;
  wire  _GEN_8 = 1'h1;
  wire  _GEN_9 = 1'h1;
  wire  _GEN_10 = 1'h1;
  wire  _GEN_11 = 1'h1;
  assign mem_0_io_bundle_read_data_MPORT_en = 1'h1;
  assign mem_0_io_bundle_read_data_MPORT_addr = _T[12:0];
  assign mem_0_io_bundle_read_data_MPORT_data = mem_0[mem_0_io_bundle_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  assign mem_0_io_debug_read_data_MPORT_en = 1'h1;
  assign mem_0_io_debug_read_data_MPORT_addr = _io_debug_read_data_T[12:0];
  assign mem_0_io_debug_read_data_MPORT_data = mem_0[mem_0_io_debug_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  assign mem_0_io_instruction_MPORT_en = 1'h1;
  assign mem_0_io_instruction_MPORT_addr = _io_instruction_T[12:0];
  assign mem_0_io_instruction_MPORT_data = mem_0[mem_0_io_instruction_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  assign mem_0_MPORT_data = io_bundle_write_data[7:0];
  assign mem_0_MPORT_addr = _T[12:0];
  assign mem_0_MPORT_mask = io_bundle_write_strobe_0;
  assign mem_0_MPORT_en = io_bundle_write_enable;
  assign mem_1_io_bundle_read_data_MPORT_en = 1'h1;
  assign mem_1_io_bundle_read_data_MPORT_addr = _T[12:0];
  assign mem_1_io_bundle_read_data_MPORT_data = mem_1[mem_1_io_bundle_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  assign mem_1_io_debug_read_data_MPORT_en = 1'h1;
  assign mem_1_io_debug_read_data_MPORT_addr = _io_debug_read_data_T[12:0];
  assign mem_1_io_debug_read_data_MPORT_data = mem_1[mem_1_io_debug_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  assign mem_1_io_instruction_MPORT_en = 1'h1;
  assign mem_1_io_instruction_MPORT_addr = _io_instruction_T[12:0];
  assign mem_1_io_instruction_MPORT_data = mem_1[mem_1_io_instruction_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  assign mem_1_MPORT_data = io_bundle_write_data[15:8];
  assign mem_1_MPORT_addr = _T[12:0];
  assign mem_1_MPORT_mask = io_bundle_write_strobe_1;
  assign mem_1_MPORT_en = io_bundle_write_enable;
  assign mem_2_io_bundle_read_data_MPORT_en = 1'h1;
  assign mem_2_io_bundle_read_data_MPORT_addr = _T[12:0];
  assign mem_2_io_bundle_read_data_MPORT_data = mem_2[mem_2_io_bundle_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  assign mem_2_io_debug_read_data_MPORT_en = 1'h1;
  assign mem_2_io_debug_read_data_MPORT_addr = _io_debug_read_data_T[12:0];
  assign mem_2_io_debug_read_data_MPORT_data = mem_2[mem_2_io_debug_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  assign mem_2_io_instruction_MPORT_en = 1'h1;
  assign mem_2_io_instruction_MPORT_addr = _io_instruction_T[12:0];
  assign mem_2_io_instruction_MPORT_data = mem_2[mem_2_io_instruction_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  assign mem_2_MPORT_data = io_bundle_write_data[23:16];
  assign mem_2_MPORT_addr = _T[12:0];
  assign mem_2_MPORT_mask = io_bundle_write_strobe_2;
  assign mem_2_MPORT_en = io_bundle_write_enable;
  assign mem_3_io_bundle_read_data_MPORT_en = 1'h1;
  assign mem_3_io_bundle_read_data_MPORT_addr = _T[12:0];
  assign mem_3_io_bundle_read_data_MPORT_data = mem_3[mem_3_io_bundle_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  assign mem_3_io_debug_read_data_MPORT_en = 1'h1;
  assign mem_3_io_debug_read_data_MPORT_addr = _io_debug_read_data_T[12:0];
  assign mem_3_io_debug_read_data_MPORT_data = mem_3[mem_3_io_debug_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  assign mem_3_io_instruction_MPORT_en = 1'h1;
  assign mem_3_io_instruction_MPORT_addr = _io_instruction_T[12:0];
  assign mem_3_io_instruction_MPORT_data = mem_3[mem_3_io_instruction_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 74:16]
  assign mem_3_MPORT_data = io_bundle_write_data[31:24];
  assign mem_3_MPORT_addr = _T[12:0];
  assign mem_3_MPORT_mask = io_bundle_write_strobe_3;
  assign mem_3_MPORT_en = io_bundle_write_enable;
  assign io_bundle_read_data = {io_bundle_read_data_hi,io_bundle_read_data_lo}; // @[src/main/scala/peripheral/Memory.scala 93:86]
  assign io_instruction = {io_instruction_hi,io_instruction_lo}; // @[src/main/scala/peripheral/Memory.scala 95:91]
  assign io_debug_read_data = {io_debug_read_data_hi,io_debug_read_data_lo}; // @[src/main/scala/peripheral/Memory.scala 94:90]
  always @(posedge clock) begin
    if (mem_0_MPORT_en & mem_0_MPORT_mask) begin
      mem_0[mem_0_MPORT_addr] <= mem_0_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
    end
    if (mem_1_MPORT_en & mem_1_MPORT_mask) begin
      mem_1[mem_1_MPORT_addr] <= mem_1_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
    end
    if (mem_2_MPORT_en & mem_2_MPORT_mask) begin
      mem_2[mem_2_MPORT_addr] <= mem_2_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
    end
    if (mem_3_MPORT_en & mem_3_MPORT_mask) begin
      mem_3[mem_3_MPORT_addr] <= mem_3_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 74:16]
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    mem_0[initvar] = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    mem_1[initvar] = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    mem_2[initvar] = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    mem_3[initvar] = _RAND_3[7:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module InstructionROM(
  input         clock,
  input  [31:0] io_address, // @[src/main/scala/peripheral/InstructionROM.scala 20:14]
  output [31:0] io_data // @[src/main/scala/peripheral/InstructionROM.scala 20:14]
);
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_GARBAGE_ASSIGN
  reg [31:0] mem [0:6]; // @[src/main/scala/peripheral/InstructionROM.scala 26:45]
  wire  mem_io_data_MPORT_en; // @[src/main/scala/peripheral/InstructionROM.scala 26:45]
  wire [2:0] mem_io_data_MPORT_addr; // @[src/main/scala/peripheral/InstructionROM.scala 26:45]
  wire [31:0] mem_io_data_MPORT_data; // @[src/main/scala/peripheral/InstructionROM.scala 26:45]
  assign mem_io_data_MPORT_en = 1'h1;
  assign mem_io_data_MPORT_addr = io_address[2:0];
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_io_data_MPORT_data = mem[mem_io_data_MPORT_addr]; // @[src/main/scala/peripheral/InstructionROM.scala 26:45]
  `else
  assign mem_io_data_MPORT_data = mem_io_data_MPORT_addr >= 3'h7 ? _RAND_0[31:0] : mem[mem_io_data_MPORT_addr]; // @[src/main/scala/peripheral/InstructionROM.scala 26:45]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign io_data = mem_io_data_MPORT_data; // @[src/main/scala/peripheral/InstructionROM.scala 35:11]
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
  integer initvar;
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
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  _RAND_0 = {1{`RANDOM}};
`endif // RANDOMIZE_GARBAGE_ASSIGN
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
initial begin
  $readmemh("/home/eon/tfm/02-ca2024-lab3-pipelined/verilog/auipc.asmbin.txt", mem);
end
endmodule
module ROMLoader(
  input         clock,
  input         reset,
  output [31:0] io_bundle_address, // @[src/main/scala/peripheral/ROMLoader.scala 10:14]
  output [31:0] io_bundle_write_data, // @[src/main/scala/peripheral/ROMLoader.scala 10:14]
  output        io_bundle_write_enable, // @[src/main/scala/peripheral/ROMLoader.scala 10:14]
  output        io_bundle_write_strobe_0, // @[src/main/scala/peripheral/ROMLoader.scala 10:14]
  output        io_bundle_write_strobe_1, // @[src/main/scala/peripheral/ROMLoader.scala 10:14]
  output        io_bundle_write_strobe_2, // @[src/main/scala/peripheral/ROMLoader.scala 10:14]
  output        io_bundle_write_strobe_3, // @[src/main/scala/peripheral/ROMLoader.scala 10:14]
  output [31:0] io_rom_address, // @[src/main/scala/peripheral/ROMLoader.scala 10:14]
  input  [31:0] io_rom_data, // @[src/main/scala/peripheral/ROMLoader.scala 10:14]
  output        io_load_finished // @[src/main/scala/peripheral/ROMLoader.scala 10:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] address; // @[src/main/scala/peripheral/ROMLoader.scala 20:24]
  reg  valid; // @[src/main/scala/peripheral/ROMLoader.scala 21:24]
  wire [33:0] _GEN_10 = {address, 2'h0}; // @[src/main/scala/peripheral/ROMLoader.scala 30:40]
  wire [34:0] _io_bundle_address_T = {{1'd0}, _GEN_10}; // @[src/main/scala/peripheral/ROMLoader.scala 30:40]
  wire [34:0] _io_bundle_address_T_2 = _io_bundle_address_T + 35'h1000; // @[src/main/scala/peripheral/ROMLoader.scala 30:55]
  wire [31:0] _address_T_1 = address + 32'h1; // @[src/main/scala/peripheral/ROMLoader.scala 32:39]
  wire  _GEN_0 = address == 32'h6 | valid; // @[src/main/scala/peripheral/ROMLoader.scala 33:40 34:13 21:24]
  wire [34:0] _GEN_3 = address <= 32'h6 ? _io_bundle_address_T_2 : 35'h0; // @[src/main/scala/peripheral/ROMLoader.scala 24:26 27:37 30:28]
  assign io_bundle_address = _GEN_3[31:0];
  assign io_bundle_write_data = address <= 32'h6 ? io_rom_data : 32'h0; // @[src/main/scala/peripheral/ROMLoader.scala 25:26 27:37 29:28]
  assign io_bundle_write_enable = address <= 32'h6; // @[src/main/scala/peripheral/ROMLoader.scala 27:16]
  assign io_bundle_write_strobe_0 = address <= 32'h6; // @[src/main/scala/peripheral/ROMLoader.scala 27:16]
  assign io_bundle_write_strobe_1 = address <= 32'h6; // @[src/main/scala/peripheral/ROMLoader.scala 27:16]
  assign io_bundle_write_strobe_2 = address <= 32'h6; // @[src/main/scala/peripheral/ROMLoader.scala 27:16]
  assign io_bundle_write_strobe_3 = address <= 32'h6; // @[src/main/scala/peripheral/ROMLoader.scala 27:16]
  assign io_rom_address = address; // @[src/main/scala/peripheral/ROMLoader.scala 38:20]
  assign io_load_finished = valid; // @[src/main/scala/peripheral/ROMLoader.scala 37:20]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/peripheral/ROMLoader.scala 20:24]
      address <= 32'h0; // @[src/main/scala/peripheral/ROMLoader.scala 20:24]
    end else if (address <= 32'h6) begin // @[src/main/scala/peripheral/ROMLoader.scala 27:37]
      address <= _address_T_1; // @[src/main/scala/peripheral/ROMLoader.scala 32:28]
    end
    if (reset) begin // @[src/main/scala/peripheral/ROMLoader.scala 21:24]
      valid <= 1'h0; // @[src/main/scala/peripheral/ROMLoader.scala 21:24]
    end else if (address <= 32'h6) begin // @[src/main/scala/peripheral/ROMLoader.scala 27:37]
      valid <= _GEN_0;
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
  address = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  valid = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module RegisterFile(
  input         clock,
  input         reset,
  input         io_write_enable, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [4:0]  io_write_address, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [31:0] io_write_data, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [4:0]  io_read_address1, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [4:0]  io_read_address2, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  output [31:0] io_read_data1, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  output [31:0] io_read_data2, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [4:0]  io_debug_read_address, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  output [31:0] io_debug_read_data // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] registers_0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_1; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_2; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_3; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_4; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_5; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_6; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_7; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_8; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_9; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_10; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_11; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_12; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_13; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_14; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_15; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_16; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_17; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_18; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_19; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_20; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_21; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_22; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_23; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_24; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_25; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_26; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_27; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_28; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_29; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_30; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_31; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  wire  _io_read_data1_T = io_read_address1 == 5'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 38:22]
  wire [31:0] _GEN_97 = 5'h1 == io_read_address1 ? registers_1 : registers_0; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_98 = 5'h2 == io_read_address1 ? registers_2 : _GEN_97; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_99 = 5'h3 == io_read_address1 ? registers_3 : _GEN_98; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_100 = 5'h4 == io_read_address1 ? registers_4 : _GEN_99; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_101 = 5'h5 == io_read_address1 ? registers_5 : _GEN_100; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_102 = 5'h6 == io_read_address1 ? registers_6 : _GEN_101; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_103 = 5'h7 == io_read_address1 ? registers_7 : _GEN_102; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_104 = 5'h8 == io_read_address1 ? registers_8 : _GEN_103; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_105 = 5'h9 == io_read_address1 ? registers_9 : _GEN_104; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_106 = 5'ha == io_read_address1 ? registers_10 : _GEN_105; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_107 = 5'hb == io_read_address1 ? registers_11 : _GEN_106; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_108 = 5'hc == io_read_address1 ? registers_12 : _GEN_107; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_109 = 5'hd == io_read_address1 ? registers_13 : _GEN_108; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_110 = 5'he == io_read_address1 ? registers_14 : _GEN_109; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_111 = 5'hf == io_read_address1 ? registers_15 : _GEN_110; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_112 = 5'h10 == io_read_address1 ? registers_16 : _GEN_111; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_113 = 5'h11 == io_read_address1 ? registers_17 : _GEN_112; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_114 = 5'h12 == io_read_address1 ? registers_18 : _GEN_113; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_115 = 5'h13 == io_read_address1 ? registers_19 : _GEN_114; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_116 = 5'h14 == io_read_address1 ? registers_20 : _GEN_115; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_117 = 5'h15 == io_read_address1 ? registers_21 : _GEN_116; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_118 = 5'h16 == io_read_address1 ? registers_22 : _GEN_117; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_119 = 5'h17 == io_read_address1 ? registers_23 : _GEN_118; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_120 = 5'h18 == io_read_address1 ? registers_24 : _GEN_119; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_121 = 5'h19 == io_read_address1 ? registers_25 : _GEN_120; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_122 = 5'h1a == io_read_address1 ? registers_26 : _GEN_121; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_123 = 5'h1b == io_read_address1 ? registers_27 : _GEN_122; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_124 = 5'h1c == io_read_address1 ? registers_28 : _GEN_123; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_125 = 5'h1d == io_read_address1 ? registers_29 : _GEN_124; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_126 = 5'h1e == io_read_address1 ? registers_30 : _GEN_125; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_127 = 5'h1f == io_read_address1 ? registers_31 : _GEN_126; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire  _io_read_data2_T = io_read_address2 == 5'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 44:22]
  wire [31:0] _GEN_129 = 5'h1 == io_read_address2 ? registers_1 : registers_0; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_130 = 5'h2 == io_read_address2 ? registers_2 : _GEN_129; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_131 = 5'h3 == io_read_address2 ? registers_3 : _GEN_130; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_132 = 5'h4 == io_read_address2 ? registers_4 : _GEN_131; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_133 = 5'h5 == io_read_address2 ? registers_5 : _GEN_132; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_134 = 5'h6 == io_read_address2 ? registers_6 : _GEN_133; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_135 = 5'h7 == io_read_address2 ? registers_7 : _GEN_134; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_136 = 5'h8 == io_read_address2 ? registers_8 : _GEN_135; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_137 = 5'h9 == io_read_address2 ? registers_9 : _GEN_136; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_138 = 5'ha == io_read_address2 ? registers_10 : _GEN_137; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_139 = 5'hb == io_read_address2 ? registers_11 : _GEN_138; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_140 = 5'hc == io_read_address2 ? registers_12 : _GEN_139; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_141 = 5'hd == io_read_address2 ? registers_13 : _GEN_140; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_142 = 5'he == io_read_address2 ? registers_14 : _GEN_141; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_143 = 5'hf == io_read_address2 ? registers_15 : _GEN_142; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_144 = 5'h10 == io_read_address2 ? registers_16 : _GEN_143; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_145 = 5'h11 == io_read_address2 ? registers_17 : _GEN_144; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_146 = 5'h12 == io_read_address2 ? registers_18 : _GEN_145; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_147 = 5'h13 == io_read_address2 ? registers_19 : _GEN_146; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_148 = 5'h14 == io_read_address2 ? registers_20 : _GEN_147; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_149 = 5'h15 == io_read_address2 ? registers_21 : _GEN_148; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_150 = 5'h16 == io_read_address2 ? registers_22 : _GEN_149; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_151 = 5'h17 == io_read_address2 ? registers_23 : _GEN_150; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_152 = 5'h18 == io_read_address2 ? registers_24 : _GEN_151; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_153 = 5'h19 == io_read_address2 ? registers_25 : _GEN_152; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_154 = 5'h1a == io_read_address2 ? registers_26 : _GEN_153; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_155 = 5'h1b == io_read_address2 ? registers_27 : _GEN_154; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_156 = 5'h1c == io_read_address2 ? registers_28 : _GEN_155; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_157 = 5'h1d == io_read_address2 ? registers_29 : _GEN_156; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_158 = 5'h1e == io_read_address2 ? registers_30 : _GEN_157; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_159 = 5'h1f == io_read_address2 ? registers_31 : _GEN_158; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire  _io_debug_read_data_T = io_debug_read_address == 5'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 50:27]
  wire [31:0] _GEN_161 = 5'h1 == io_debug_read_address ? registers_1 : registers_0; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_162 = 5'h2 == io_debug_read_address ? registers_2 : _GEN_161; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_163 = 5'h3 == io_debug_read_address ? registers_3 : _GEN_162; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_164 = 5'h4 == io_debug_read_address ? registers_4 : _GEN_163; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_165 = 5'h5 == io_debug_read_address ? registers_5 : _GEN_164; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_166 = 5'h6 == io_debug_read_address ? registers_6 : _GEN_165; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_167 = 5'h7 == io_debug_read_address ? registers_7 : _GEN_166; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_168 = 5'h8 == io_debug_read_address ? registers_8 : _GEN_167; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_169 = 5'h9 == io_debug_read_address ? registers_9 : _GEN_168; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_170 = 5'ha == io_debug_read_address ? registers_10 : _GEN_169; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_171 = 5'hb == io_debug_read_address ? registers_11 : _GEN_170; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_172 = 5'hc == io_debug_read_address ? registers_12 : _GEN_171; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_173 = 5'hd == io_debug_read_address ? registers_13 : _GEN_172; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_174 = 5'he == io_debug_read_address ? registers_14 : _GEN_173; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_175 = 5'hf == io_debug_read_address ? registers_15 : _GEN_174; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_176 = 5'h10 == io_debug_read_address ? registers_16 : _GEN_175; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_177 = 5'h11 == io_debug_read_address ? registers_17 : _GEN_176; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_178 = 5'h12 == io_debug_read_address ? registers_18 : _GEN_177; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_179 = 5'h13 == io_debug_read_address ? registers_19 : _GEN_178; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_180 = 5'h14 == io_debug_read_address ? registers_20 : _GEN_179; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_181 = 5'h15 == io_debug_read_address ? registers_21 : _GEN_180; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_182 = 5'h16 == io_debug_read_address ? registers_22 : _GEN_181; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_183 = 5'h17 == io_debug_read_address ? registers_23 : _GEN_182; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_184 = 5'h18 == io_debug_read_address ? registers_24 : _GEN_183; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_185 = 5'h19 == io_debug_read_address ? registers_25 : _GEN_184; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_186 = 5'h1a == io_debug_read_address ? registers_26 : _GEN_185; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_187 = 5'h1b == io_debug_read_address ? registers_27 : _GEN_186; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_188 = 5'h1c == io_debug_read_address ? registers_28 : _GEN_187; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_189 = 5'h1d == io_debug_read_address ? registers_29 : _GEN_188; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_190 = 5'h1e == io_debug_read_address ? registers_30 : _GEN_189; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_191 = 5'h1f == io_debug_read_address ? registers_31 : _GEN_190; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  assign io_read_data1 = _io_read_data1_T ? 32'h0 : _GEN_127; // @[src/main/scala/riscv/core/RegisterFile.scala 37:23]
  assign io_read_data2 = _io_read_data2_T ? 32'h0 : _GEN_159; // @[src/main/scala/riscv/core/RegisterFile.scala 43:23]
  assign io_debug_read_data = _io_debug_read_data_T ? 32'h0 : _GEN_191; // @[src/main/scala/riscv/core/RegisterFile.scala 49:28]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_0 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h0 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_0 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_1 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_1 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_2 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h2 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_2 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_3 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h3 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_3 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_4 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h4 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_4 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_5 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h5 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_5 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_6 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h6 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_6 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_7 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h7 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_7 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_8 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h8 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_8 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_9 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h9 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_9 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_10 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'ha == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_10 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_11 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'hb == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_11 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_12 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'hc == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_12 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_13 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'hd == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_13 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_14 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'he == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_14 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_15 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'hf == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_15 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_16 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h10 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_16 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_17 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h11 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_17 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_18 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h12 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_18 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_19 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h13 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_19 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_20 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h14 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_20 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_21 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h15 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_21 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_22 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h16 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_22 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_23 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h17 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_23 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_24 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h18 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_24 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_25 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h19 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_25 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_26 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1a == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_26 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_27 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1b == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_27 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_28 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1c == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_28 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_29 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1d == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_29 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_30 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1e == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_30 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_31 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1f == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_31 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
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
  registers_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  registers_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  registers_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  registers_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  registers_4 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  registers_5 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  registers_6 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  registers_7 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  registers_8 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  registers_9 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  registers_10 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  registers_11 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  registers_12 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  registers_13 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  registers_14 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  registers_15 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  registers_16 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  registers_17 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  registers_18 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  registers_19 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  registers_20 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  registers_21 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  registers_22 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  registers_23 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  registers_24 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  registers_25 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  registers_26 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  registers_27 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  registers_28 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  registers_29 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  registers_30 = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  registers_31 = _RAND_31[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module InstructionFetch(
  input         clock,
  input         reset,
  input         io_jump_flag_id, // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  input  [31:0] io_jump_address_id, // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  input  [31:0] io_instruction_read_data, // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  input         io_instruction_valid, // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  input         io_pc_stall, // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  output [31:0] io_current_pc, // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  output [31:0] io_next_pc, // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  output [31:0] io_instruction // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[src/main/scala/riscv/core/InstructionFetch.scala 26:19]
  wire [31:0] pc_plus_four = pc + 32'h4; // @[src/main/scala/riscv/core/InstructionFetch.scala 30:25]
  wire [31:0] _GEN_1 = io_instruction_valid & io_pc_stall ? io_instruction_read_data : 32'h13; // @[src/main/scala/riscv/core/InstructionFetch.scala 47:51 49:20 52:20]
  assign io_current_pc = pc; // @[src/main/scala/riscv/core/InstructionFetch.scala 55:17]
  assign io_next_pc = pc + 32'h4; // @[src/main/scala/riscv/core/InstructionFetch.scala 30:25]
  assign io_instruction = io_instruction_valid & ~io_pc_stall ? io_instruction_read_data : _GEN_1; // @[src/main/scala/riscv/core/InstructionFetch.scala 32:45 33:20]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/riscv/core/InstructionFetch.scala 26:19]
      pc <= 32'h1000; // @[src/main/scala/riscv/core/InstructionFetch.scala 26:19]
    end else if (io_instruction_valid & ~io_pc_stall) begin // @[src/main/scala/riscv/core/InstructionFetch.scala 32:45]
      if (io_jump_flag_id) begin // @[src/main/scala/riscv/core/InstructionFetch.scala 43:14]
        pc <= io_jump_address_id;
      end else begin
        pc <= pc_plus_four;
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
module ALUControl(
  input  [6:0] io_opcode, // @[src/main/scala/riscv/core/ALUControl.scala 10:14]
  input  [2:0] io_funct3, // @[src/main/scala/riscv/core/ALUControl.scala 10:14]
  input  [6:0] io_funct7, // @[src/main/scala/riscv/core/ALUControl.scala 10:14]
  output [3:0] io_alu_funct // @[src/main/scala/riscv/core/ALUControl.scala 10:14]
);
  wire [3:0] _io_alu_funct_T_1 = io_funct7[5] ? 4'h9 : 4'h8; // @[src/main/scala/riscv/core/ALUControl.scala 33:41]
  wire [1:0] _io_alu_funct_T_3 = 3'h1 == io_funct3 ? 2'h3 : 2'h1; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [2:0] _io_alu_funct_T_5 = 3'h2 == io_funct3 ? 3'h4 : {{1'd0}, _io_alu_funct_T_3}; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [3:0] _io_alu_funct_T_7 = 3'h3 == io_funct3 ? 4'ha : {{1'd0}, _io_alu_funct_T_5}; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [3:0] _io_alu_funct_T_9 = 3'h4 == io_funct3 ? 4'h5 : _io_alu_funct_T_7; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [3:0] _io_alu_funct_T_11 = 3'h6 == io_funct3 ? 4'h6 : _io_alu_funct_T_9; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [3:0] _io_alu_funct_T_13 = 3'h7 == io_funct3 ? 4'h7 : _io_alu_funct_T_11; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [3:0] _io_alu_funct_T_15 = 3'h5 == io_funct3 ? _io_alu_funct_T_1 : _io_alu_funct_T_13; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [1:0] _io_alu_funct_T_17 = io_funct7[5] ? 2'h2 : 2'h1; // @[src/main/scala/riscv/core/ALUControl.scala 42:43]
  wire [1:0] _io_alu_funct_T_21 = 3'h1 == io_funct3 ? 2'h3 : _io_alu_funct_T_17; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [2:0] _io_alu_funct_T_23 = 3'h2 == io_funct3 ? 3'h4 : {{1'd0}, _io_alu_funct_T_21}; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [3:0] _io_alu_funct_T_25 = 3'h3 == io_funct3 ? 4'ha : {{1'd0}, _io_alu_funct_T_23}; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [3:0] _io_alu_funct_T_27 = 3'h4 == io_funct3 ? 4'h5 : _io_alu_funct_T_25; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [3:0] _io_alu_funct_T_29 = 3'h6 == io_funct3 ? 4'h6 : _io_alu_funct_T_27; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [3:0] _io_alu_funct_T_31 = 3'h7 == io_funct3 ? 4'h7 : _io_alu_funct_T_29; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [3:0] _io_alu_funct_T_33 = 3'h5 == io_funct3 ? _io_alu_funct_T_1 : _io_alu_funct_T_31; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _GEN_1 = 7'h37 == io_opcode | 7'h17 == io_opcode; // @[src/main/scala/riscv/core/ALUControl.scala 20:21 69:20]
  wire  _GEN_2 = 7'h67 == io_opcode | _GEN_1; // @[src/main/scala/riscv/core/ALUControl.scala 20:21 66:20]
  wire  _GEN_3 = 7'h6f == io_opcode | _GEN_2; // @[src/main/scala/riscv/core/ALUControl.scala 20:21 63:20]
  wire  _GEN_4 = 7'h23 == io_opcode | _GEN_3; // @[src/main/scala/riscv/core/ALUControl.scala 20:21 60:20]
  wire  _GEN_5 = 7'h3 == io_opcode | _GEN_4; // @[src/main/scala/riscv/core/ALUControl.scala 20:21 57:20]
  wire  _GEN_6 = 7'h63 == io_opcode | _GEN_5; // @[src/main/scala/riscv/core/ALUControl.scala 20:21 54:20]
  wire [3:0] _GEN_7 = 7'h33 == io_opcode ? _io_alu_funct_T_33 : {{3'd0}, _GEN_6}; // @[src/main/scala/riscv/core/ALUControl.scala 20:21 38:20]
  assign io_alu_funct = 7'h13 == io_opcode ? _io_alu_funct_T_15 : _GEN_7; // @[src/main/scala/riscv/core/ALUControl.scala 20:21 22:20]
endmodule
module InstructionDecode(
  input  [31:0] io_instruction, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [4:0]  io_regs_reg1_read_address, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [4:0]  io_regs_reg2_read_address, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [3:0]  io_ex_alu_func, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [31:0] io_ex_immediate, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_ex_aluop1_source, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_ex_aluop2_source, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_memory_read_enable, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_memory_write_enable, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [1:0]  io_wb_src, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_reg_write_enable, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [4:0]  io_reg_write_address // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
);
  wire [6:0] alu_ctrl_io_opcode; // @[src/main/scala/riscv/core/InstructionDecode.scala 190:24]
  wire [2:0] alu_ctrl_io_funct3; // @[src/main/scala/riscv/core/InstructionDecode.scala 190:24]
  wire [6:0] alu_ctrl_io_funct7; // @[src/main/scala/riscv/core/InstructionDecode.scala 190:24]
  wire [3:0] alu_ctrl_io_alu_funct; // @[src/main/scala/riscv/core/InstructionDecode.scala 190:24]
  wire [6:0] opcode = io_instruction[6:0]; // @[src/main/scala/riscv/core/InstructionDecode.scala 142:30]
  wire [4:0] rd = io_instruction[11:7]; // @[src/main/scala/riscv/core/InstructionDecode.scala 145:30]
  wire [4:0] rs1 = io_instruction[19:15]; // @[src/main/scala/riscv/core/InstructionDecode.scala 146:30]
  wire  _io_regs_reg1_read_address_T = opcode == 7'h37; // @[src/main/scala/riscv/core/InstructionDecode.scala 149:43]
  wire [19:0] _immediate_T_1 = io_instruction[31] ? 20'hfffff : 20'h0; // @[src/main/scala/riscv/core/InstructionDecode.scala 153:13]
  wire [31:0] _immediate_T_3 = {_immediate_T_1,io_instruction[31:20]}; // @[src/main/scala/riscv/core/InstructionDecode.scala 153:8]
  wire [20:0] _immediate_T_5 = io_instruction[31] ? 21'h1fffff : 21'h0; // @[src/main/scala/riscv/core/InstructionDecode.scala 155:37]
  wire [31:0] _immediate_T_7 = {_immediate_T_5,io_instruction[30:20]}; // @[src/main/scala/riscv/core/InstructionDecode.scala 155:32]
  wire [31:0] _immediate_T_20 = {_immediate_T_5,io_instruction[30:25],rd}; // @[src/main/scala/riscv/core/InstructionDecode.scala 158:32]
  wire [31:0] _immediate_T_26 = {_immediate_T_1,io_instruction[7],io_instruction[30:25],io_instruction[11:8],1'h0}; // @[src/main/scala/riscv/core/InstructionDecode.scala 159:32]
  wire [31:0] _immediate_T_28 = {io_instruction[31:12],12'h0}; // @[src/main/scala/riscv/core/InstructionDecode.scala 166:32]
  wire [11:0] _immediate_T_32 = io_instruction[31] ? 12'hfff : 12'h0; // @[src/main/scala/riscv/core/InstructionDecode.scala 176:13]
  wire [31:0] _immediate_T_36 = {_immediate_T_32,io_instruction[19:12],io_instruction[20],io_instruction[30:21],1'h0}; // @[src/main/scala/riscv/core/InstructionDecode.scala 175:30]
  wire [31:0] _immediate_T_38 = 7'h13 == opcode ? _immediate_T_7 : _immediate_T_3; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_40 = 7'h3 == opcode ? _immediate_T_7 : _immediate_T_38; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_42 = 7'h67 == opcode ? _immediate_T_7 : _immediate_T_40; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_44 = 7'h23 == opcode ? _immediate_T_20 : _immediate_T_42; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_46 = 7'h63 == opcode ? _immediate_T_26 : _immediate_T_44; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_48 = 7'h37 == opcode ? _immediate_T_28 : _immediate_T_46; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_50 = 7'h17 == opcode ? _immediate_T_28 : _immediate_T_48; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_ex_aluop1_source_T = opcode == 7'h17; // @[src/main/scala/riscv/core/InstructionDecode.scala 198:12]
  wire  _io_ex_aluop1_source_T_3 = opcode == 7'h6f; // @[src/main/scala/riscv/core/InstructionDecode.scala 198:78]
  wire  _io_ex_aluop2_source_T = opcode == 7'h33; // @[src/main/scala/riscv/core/InstructionDecode.scala 211:12]
  wire  _io_memory_read_enable_T = opcode == 7'h3; // @[src/main/scala/riscv/core/InstructionDecode.scala 220:12]
  wire  _io_wb_src_T_4 = _io_ex_aluop2_source_T | opcode == 7'h13; // @[src/main/scala/riscv/core/InstructionDecode.scala 243:39]
  wire  _io_wb_src_T_6 = _io_ex_aluop2_source_T | opcode == 7'h13 | _io_regs_reg1_read_address_T; // @[src/main/scala/riscv/core/InstructionDecode.scala 243:72]
  wire  _io_wb_src_T_8 = _io_wb_src_T_6 | _io_ex_aluop1_source_T; // @[src/main/scala/riscv/core/InstructionDecode.scala 244:37]
  wire  _io_wb_src_T_11 = opcode == 7'h67; // @[src/main/scala/riscv/core/InstructionDecode.scala 246:46]
  wire  _io_wb_src_T_12 = _io_ex_aluop1_source_T_3 | opcode == 7'h67; // @[src/main/scala/riscv/core/InstructionDecode.scala 246:36]
  wire [1:0] _io_wb_src_T_13 = _io_wb_src_T_12 ? 2'h2 : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [1:0] _io_wb_src_T_14 = _io_memory_read_enable_T ? 2'h1 : _io_wb_src_T_13; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire  _io_reg_write_enable_T_4 = _io_wb_src_T_4 | _io_memory_read_enable_T; // @[src/main/scala/riscv/core/InstructionDecode.scala 250:94]
  wire  _io_reg_write_enable_T_10 = _io_reg_write_enable_T_4 | _io_ex_aluop1_source_T | _io_regs_reg1_read_address_T |
    _io_ex_aluop1_source_T_3; // @[src/main/scala/riscv/core/InstructionDecode.scala 251:105]
  ALUControl alu_ctrl ( // @[src/main/scala/riscv/core/InstructionDecode.scala 190:24]
    .io_opcode(alu_ctrl_io_opcode),
    .io_funct3(alu_ctrl_io_funct3),
    .io_funct7(alu_ctrl_io_funct7),
    .io_alu_funct(alu_ctrl_io_alu_funct)
  );
  assign io_regs_reg1_read_address = opcode == 7'h37 ? 5'h0 : rs1; // @[src/main/scala/riscv/core/InstructionDecode.scala 149:35]
  assign io_regs_reg2_read_address = io_instruction[24:20]; // @[src/main/scala/riscv/core/InstructionDecode.scala 147:30]
  assign io_ex_alu_func = alu_ctrl_io_alu_funct; // @[src/main/scala/riscv/core/InstructionDecode.scala 195:18]
  assign io_ex_immediate = 7'h6f == opcode ? _immediate_T_36 : _immediate_T_50; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  assign io_ex_aluop1_source = opcode == 7'h17 | opcode == 7'h63 | opcode == 7'h6f; // @[src/main/scala/riscv/core/InstructionDecode.scala 198:68]
  assign io_ex_aluop2_source = _io_ex_aluop2_source_T ? 1'h0 : 1'h1; // @[src/main/scala/riscv/core/InstructionDecode.scala 210:29]
  assign io_memory_read_enable = opcode == 7'h3; // @[src/main/scala/riscv/core/InstructionDecode.scala 220:12]
  assign io_memory_write_enable = opcode == 7'h23; // @[src/main/scala/riscv/core/InstructionDecode.scala 226:12]
  assign io_wb_src = _io_wb_src_T_8 ? 2'h0 : _io_wb_src_T_14; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  assign io_reg_write_enable = _io_reg_write_enable_T_10 | _io_wb_src_T_11; // @[src/main/scala/riscv/core/InstructionDecode.scala 252:35]
  assign io_reg_write_address = io_instruction[11:7]; // @[src/main/scala/riscv/core/InstructionDecode.scala 145:30]
  assign alu_ctrl_io_opcode = io_instruction[6:0]; // @[src/main/scala/riscv/core/InstructionDecode.scala 142:30]
  assign alu_ctrl_io_funct3 = io_instruction[14:12]; // @[src/main/scala/riscv/core/InstructionDecode.scala 143:30]
  assign alu_ctrl_io_funct7 = io_instruction[31:25]; // @[src/main/scala/riscv/core/InstructionDecode.scala 144:30]
endmodule
module ALU(
  input  [3:0]  io_func, // @[src/main/scala/riscv/core/ALU.scala 16:14]
  input  [31:0] io_op1, // @[src/main/scala/riscv/core/ALU.scala 16:14]
  input  [31:0] io_op2, // @[src/main/scala/riscv/core/ALU.scala 16:14]
  output [31:0] io_result // @[src/main/scala/riscv/core/ALU.scala 16:14]
);
  wire [31:0] _io_result_T_1 = io_op1 + io_op2; // @[src/main/scala/riscv/core/ALU.scala 28:27]
  wire [31:0] _io_result_T_3 = io_op1 - io_op2; // @[src/main/scala/riscv/core/ALU.scala 31:27]
  wire [62:0] _GEN_10 = {{31'd0}, io_op1}; // @[src/main/scala/riscv/core/ALU.scala 34:27]
  wire [62:0] _io_result_T_5 = _GEN_10 << io_op2[4:0]; // @[src/main/scala/riscv/core/ALU.scala 34:27]
  wire [31:0] _io_result_T_6 = io_op1; // @[src/main/scala/riscv/core/ALU.scala 37:27]
  wire [31:0] _io_result_T_7 = io_op2; // @[src/main/scala/riscv/core/ALU.scala 37:43]
  wire [31:0] _io_result_T_9 = io_op1 ^ io_op2; // @[src/main/scala/riscv/core/ALU.scala 40:27]
  wire [31:0] _io_result_T_10 = io_op1 | io_op2; // @[src/main/scala/riscv/core/ALU.scala 43:27]
  wire [31:0] _io_result_T_11 = io_op1 & io_op2; // @[src/main/scala/riscv/core/ALU.scala 46:27]
  wire [31:0] _io_result_T_13 = io_op1 >> io_op2[4:0]; // @[src/main/scala/riscv/core/ALU.scala 49:27]
  wire [31:0] _io_result_T_17 = $signed(io_op1) >>> io_op2[4:0]; // @[src/main/scala/riscv/core/ALU.scala 52:52]
  wire  _GEN_0 = 4'ha == io_func & io_op1 < io_op2; // @[src/main/scala/riscv/core/ALU.scala 25:13 26:19 55:17]
  wire [31:0] _GEN_1 = 4'h9 == io_func ? _io_result_T_17 : {{31'd0}, _GEN_0}; // @[src/main/scala/riscv/core/ALU.scala 26:19 52:17]
  wire [31:0] _GEN_2 = 4'h8 == io_func ? _io_result_T_13 : _GEN_1; // @[src/main/scala/riscv/core/ALU.scala 26:19 49:17]
  wire [31:0] _GEN_3 = 4'h7 == io_func ? _io_result_T_11 : _GEN_2; // @[src/main/scala/riscv/core/ALU.scala 26:19 46:17]
  wire [31:0] _GEN_4 = 4'h6 == io_func ? _io_result_T_10 : _GEN_3; // @[src/main/scala/riscv/core/ALU.scala 26:19 43:17]
  wire [31:0] _GEN_5 = 4'h5 == io_func ? _io_result_T_9 : _GEN_4; // @[src/main/scala/riscv/core/ALU.scala 26:19 40:17]
  wire [31:0] _GEN_6 = 4'h4 == io_func ? {{31'd0}, $signed(_io_result_T_6) < $signed(_io_result_T_7)} : _GEN_5; // @[src/main/scala/riscv/core/ALU.scala 26:19 37:17]
  wire [62:0] _GEN_7 = 4'h3 == io_func ? _io_result_T_5 : {{31'd0}, _GEN_6}; // @[src/main/scala/riscv/core/ALU.scala 26:19 34:17]
  wire [62:0] _GEN_8 = 4'h2 == io_func ? {{31'd0}, _io_result_T_3} : _GEN_7; // @[src/main/scala/riscv/core/ALU.scala 26:19 31:17]
  wire [62:0] _GEN_9 = 4'h1 == io_func ? {{31'd0}, _io_result_T_1} : _GEN_8; // @[src/main/scala/riscv/core/ALU.scala 26:19 28:17]
  assign io_result = _GEN_9[31:0];
endmodule
module Execute(
  input  [6:0]  io_opcode, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  input  [6:0]  io_funct3, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  input  [31:0] io_instruction_address, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  input  [31:0] io_reg1_data, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  input  [31:0] io_reg2_data, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  input  [31:0] io_immediate, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  input         io_aluop1_source, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  input         io_aluop2_source, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  input  [3:0]  io_alu_func, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  input  [1:0]  io_rs1_src, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  input  [1:0]  io_rs2_src, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  input  [31:0] io_alu_result_mem_fw, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  input  [31:0] io_wb_regs_write_data_fw, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  output [31:0] io_mem_reg2_data, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  output [31:0] io_mem_alu_result, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  output        io_if_jump_flag, // @[src/main/scala/riscv/core/Execute.scala 19:14]
  output [31:0] io_if_jump_address // @[src/main/scala/riscv/core/Execute.scala 19:14]
);
  wire [3:0] alu_io_func; // @[src/main/scala/riscv/core/Execute.scala 45:19]
  wire [31:0] alu_io_op1; // @[src/main/scala/riscv/core/Execute.scala 45:19]
  wire [31:0] alu_io_op2; // @[src/main/scala/riscv/core/Execute.scala 45:19]
  wire [31:0] alu_io_result; // @[src/main/scala/riscv/core/Execute.scala 45:19]
  wire [31:0] _alu_rs1_src_T_3 = 2'h1 == io_rs1_src ? io_alu_result_mem_fw : io_reg1_data; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] alu_rs1_src = 2'h2 == io_rs1_src ? io_wb_regs_write_data_fw : _alu_rs1_src_T_3; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _alu_rs2_src_T_3 = 2'h1 == io_rs2_src ? io_alu_result_mem_fw : io_reg2_data; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] alu_rs2_src = 2'h2 == io_rs2_src ? io_wb_regs_write_data_fw : _alu_rs2_src_T_3; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_if_jump_flag_T_1 = io_opcode == 7'h67; // @[src/main/scala/riscv/core/Execute.scala 104:16]
  wire  _io_if_jump_flag_T_2 = io_opcode == 7'h6f | _io_if_jump_flag_T_1; // @[src/main/scala/riscv/core/Execute.scala 103:53]
  wire  _io_if_jump_flag_T_4 = alu_rs1_src == alu_rs2_src; // @[src/main/scala/riscv/core/Execute.scala 109:48]
  wire  _io_if_jump_flag_T_5 = alu_rs1_src != alu_rs2_src; // @[src/main/scala/riscv/core/Execute.scala 110:48]
  wire [31:0] _io_if_jump_flag_T_6 = 2'h2 == io_rs1_src ? io_wb_regs_write_data_fw : _alu_rs1_src_T_3; // @[src/main/scala/riscv/core/Execute.scala 111:48]
  wire [31:0] _io_if_jump_flag_T_7 = 2'h2 == io_rs2_src ? io_wb_regs_write_data_fw : _alu_rs2_src_T_3; // @[src/main/scala/riscv/core/Execute.scala 111:69]
  wire  _io_if_jump_flag_T_8 = $signed(_io_if_jump_flag_T_6) < $signed(_io_if_jump_flag_T_7); // @[src/main/scala/riscv/core/Execute.scala 111:55]
  wire  _io_if_jump_flag_T_11 = $signed(_io_if_jump_flag_T_6) >= $signed(_io_if_jump_flag_T_7); // @[src/main/scala/riscv/core/Execute.scala 112:55]
  wire  _io_if_jump_flag_T_12 = alu_rs1_src < alu_rs2_src; // @[src/main/scala/riscv/core/Execute.scala 113:55]
  wire  _io_if_jump_flag_T_13 = alu_rs1_src >= alu_rs2_src; // @[src/main/scala/riscv/core/Execute.scala 114:55]
  wire  _io_if_jump_flag_T_17 = 7'h1 == io_funct3 ? _io_if_jump_flag_T_5 : 7'h0 == io_funct3 & _io_if_jump_flag_T_4; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_if_jump_flag_T_19 = 7'h4 == io_funct3 ? _io_if_jump_flag_T_8 : _io_if_jump_flag_T_17; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_if_jump_flag_T_21 = 7'h5 == io_funct3 ? _io_if_jump_flag_T_11 : _io_if_jump_flag_T_19; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_if_jump_flag_T_23 = 7'h6 == io_funct3 ? _io_if_jump_flag_T_12 : _io_if_jump_flag_T_21; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_if_jump_flag_T_25 = 7'h7 == io_funct3 ? _io_if_jump_flag_T_13 : _io_if_jump_flag_T_23; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_if_jump_flag_T_26 = io_opcode == 7'h63 & _io_if_jump_flag_T_25; // @[src/main/scala/riscv/core/Execute.scala 105:40]
  wire [31:0] _io_if_jump_address_T_1 = _io_if_jump_flag_T_1 ? alu_rs1_src : io_instruction_address; // @[src/main/scala/riscv/core/Execute.scala 120:43]
  ALU alu ( // @[src/main/scala/riscv/core/Execute.scala 45:19]
    .io_func(alu_io_func),
    .io_op1(alu_io_op1),
    .io_op2(alu_io_op2),
    .io_result(alu_io_result)
  );
  assign io_mem_reg2_data = 2'h2 == io_rs2_src ? io_wb_regs_write_data_fw : _alu_rs2_src_T_3; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  assign io_mem_alu_result = alu_io_result; // @[src/main/scala/riscv/core/Execute.scala 92:21]
  assign io_if_jump_flag = _io_if_jump_flag_T_2 | _io_if_jump_flag_T_26; // @[src/main/scala/riscv/core/Execute.scala 104:39]
  assign io_if_jump_address = io_immediate + _io_if_jump_address_T_1; // @[src/main/scala/riscv/core/Execute.scala 120:38]
  assign alu_io_func = io_alu_func; // @[src/main/scala/riscv/core/Execute.scala 72:15]
  assign alu_io_op1 = io_aluop1_source ? io_instruction_address : alu_rs1_src; // @[src/main/scala/riscv/core/Execute.scala 76:20]
  assign alu_io_op2 = io_aluop2_source ? io_immediate : alu_rs2_src; // @[src/main/scala/riscv/core/Execute.scala 84:20]
endmodule
module MemoryAccess(
  input  [31:0] io_alu_result, // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
  input  [31:0] io_reg2_data, // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
  input         io_memory_read_enable, // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
  input         io_memory_write_enable, // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
  input  [2:0]  io_funct3, // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
  output [31:0] io_wb_memory_read_data, // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
  output [31:0] io_memory_bundle_address, // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
  output [31:0] io_memory_bundle_write_data, // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
  output        io_memory_bundle_write_enable, // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
  output        io_memory_bundle_write_strobe_0, // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
  output        io_memory_bundle_write_strobe_1, // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
  output        io_memory_bundle_write_strobe_2, // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
  output        io_memory_bundle_write_strobe_3, // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
  input  [31:0] io_memory_bundle_read_data // @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
);
  wire [1:0] mem_address_index = io_alu_result[1:0]; // @[src/main/scala/riscv/core/MemoryAccess.scala 23:40]
  wire [23:0] _io_wb_memory_read_data_T_1 = io_memory_bundle_read_data[31] ? 24'hffffff : 24'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 39:19]
  wire [31:0] _io_wb_memory_read_data_T_3 = {_io_wb_memory_read_data_T_1,io_memory_bundle_read_data[31:24]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 39:14]
  wire [23:0] _io_wb_memory_read_data_T_5 = io_memory_bundle_read_data[7] ? 24'hffffff : 24'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 41:28]
  wire [31:0] _io_wb_memory_read_data_T_7 = {_io_wb_memory_read_data_T_5,io_memory_bundle_read_data[7:0]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 41:23]
  wire [23:0] _io_wb_memory_read_data_T_9 = io_memory_bundle_read_data[15] ? 24'hffffff : 24'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 42:28]
  wire [31:0] _io_wb_memory_read_data_T_11 = {_io_wb_memory_read_data_T_9,io_memory_bundle_read_data[15:8]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 42:23]
  wire [23:0] _io_wb_memory_read_data_T_13 = io_memory_bundle_read_data[23] ? 24'hffffff : 24'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 43:28]
  wire [31:0] _io_wb_memory_read_data_T_15 = {_io_wb_memory_read_data_T_13,io_memory_bundle_read_data[23:16]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 43:23]
  wire  _io_wb_memory_read_data_T_16 = 2'h0 == mem_address_index; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_17 = 2'h0 == mem_address_index ? _io_wb_memory_read_data_T_7 :
    _io_wb_memory_read_data_T_3; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_wb_memory_read_data_T_18 = 2'h1 == mem_address_index; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_19 = 2'h1 == mem_address_index ? _io_wb_memory_read_data_T_11 :
    _io_wb_memory_read_data_T_17; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_wb_memory_read_data_T_20 = 2'h2 == mem_address_index; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_21 = 2'h2 == mem_address_index ? _io_wb_memory_read_data_T_15 :
    _io_wb_memory_read_data_T_19; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_24 = {24'h0,io_memory_bundle_read_data[31:24]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 48:14]
  wire [31:0] _io_wb_memory_read_data_T_27 = {24'h0,io_memory_bundle_read_data[7:0]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 50:23]
  wire [31:0] _io_wb_memory_read_data_T_30 = {24'h0,io_memory_bundle_read_data[15:8]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 51:23]
  wire [31:0] _io_wb_memory_read_data_T_33 = {24'h0,io_memory_bundle_read_data[23:16]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 52:23]
  wire [31:0] _io_wb_memory_read_data_T_35 = 2'h0 == mem_address_index ? _io_wb_memory_read_data_T_27 :
    _io_wb_memory_read_data_T_24; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_37 = 2'h1 == mem_address_index ? _io_wb_memory_read_data_T_30 :
    _io_wb_memory_read_data_T_35; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_39 = 2'h2 == mem_address_index ? _io_wb_memory_read_data_T_33 :
    _io_wb_memory_read_data_T_37; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_wb_memory_read_data_T_40 = mem_address_index == 2'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 56:29]
  wire [15:0] _io_wb_memory_read_data_T_42 = io_memory_bundle_read_data[15] ? 16'hffff : 16'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 57:19]
  wire [31:0] _io_wb_memory_read_data_T_44 = {_io_wb_memory_read_data_T_42,io_memory_bundle_read_data[15:0]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 57:14]
  wire [15:0] _io_wb_memory_read_data_T_46 = io_memory_bundle_read_data[31] ? 16'hffff : 16'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 58:19]
  wire [31:0] _io_wb_memory_read_data_T_48 = {_io_wb_memory_read_data_T_46,io_memory_bundle_read_data[31:16]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 58:14]
  wire [31:0] _io_wb_memory_read_data_T_49 = _io_wb_memory_read_data_T_40 ? _io_wb_memory_read_data_T_44 :
    _io_wb_memory_read_data_T_48; // @[src/main/scala/riscv/core/MemoryAccess.scala 55:36]
  wire [31:0] _io_wb_memory_read_data_T_53 = {16'h0,io_memory_bundle_read_data[15:0]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 62:14]
  wire [31:0] _io_wb_memory_read_data_T_56 = {16'h0,io_memory_bundle_read_data[31:16]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 63:14]
  wire [31:0] _io_wb_memory_read_data_T_57 = _io_wb_memory_read_data_T_40 ? _io_wb_memory_read_data_T_53 :
    _io_wb_memory_read_data_T_56; // @[src/main/scala/riscv/core/MemoryAccess.scala 60:37]
  wire [31:0] _io_wb_memory_read_data_T_59 = 3'h0 == io_funct3 ? _io_wb_memory_read_data_T_21 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_61 = 3'h4 == io_funct3 ? _io_wb_memory_read_data_T_39 :
    _io_wb_memory_read_data_T_59; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_63 = 3'h1 == io_funct3 ? _io_wb_memory_read_data_T_49 :
    _io_wb_memory_read_data_T_61; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_65 = 3'h5 == io_funct3 ? _io_wb_memory_read_data_T_57 :
    _io_wb_memory_read_data_T_63; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_67 = 3'h2 == io_funct3 ? io_memory_bundle_read_data :
    _io_wb_memory_read_data_T_65; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _GEN_3 = 2'h3 == mem_address_index; // @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 73:{56,56}]
  wire [4:0] _io_memory_bundle_write_data_T_1 = {mem_address_index, 3'h0}; // @[src/main/scala/riscv/core/MemoryAccess.scala 74:97]
  wire [39:0] _GEN_0 = {{31'd0}, io_reg2_data[8:0]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 74:75]
  wire [39:0] _io_memory_bundle_write_data_T_2 = _GEN_0 << _io_memory_bundle_write_data_T_1; // @[src/main/scala/riscv/core/MemoryAccess.scala 74:75]
  wire [32:0] _io_memory_bundle_write_data_T_5 = {io_reg2_data[16:0], 16'h0}; // @[src/main/scala/riscv/core/MemoryAccess.scala 90:11]
  wire [32:0] _GEN_6 = _io_wb_memory_read_data_T_40 ? {{16'd0}, io_reg2_data[16:0]} : _io_memory_bundle_write_data_T_5; // @[src/main/scala/riscv/core/MemoryAccess.scala 78:39 82:37 87:37]
  wire  _GEN_7 = _io_wb_memory_read_data_T_40 ? 1'h0 : 1'h1; // @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 78:39 85:44]
  wire  _T_3 = io_funct3 == 3'h2; // @[src/main/scala/riscv/core/MemoryAccess.scala 92:26]
  wire  _GEN_13 = io_funct3 == 3'h1 ? _io_wb_memory_read_data_T_40 : _T_3; // @[src/main/scala/riscv/core/MemoryAccess.scala 77:52]
  wire [32:0] _GEN_15 = io_funct3 == 3'h1 ? _GEN_6 : {{1'd0}, io_reg2_data}; // @[src/main/scala/riscv/core/MemoryAccess.scala 69:35 77:52]
  wire  _GEN_16 = io_funct3 == 3'h1 ? _GEN_7 : _T_3; // @[src/main/scala/riscv/core/MemoryAccess.scala 77:52]
  wire  _GEN_18 = io_funct3 == 3'h0 ? _io_wb_memory_read_data_T_16 : _GEN_13; // @[src/main/scala/riscv/core/MemoryAccess.scala 72:46]
  wire  _GEN_19 = io_funct3 == 3'h0 ? _io_wb_memory_read_data_T_18 : _GEN_13; // @[src/main/scala/riscv/core/MemoryAccess.scala 72:46]
  wire  _GEN_20 = io_funct3 == 3'h0 ? _io_wb_memory_read_data_T_20 : _GEN_16; // @[src/main/scala/riscv/core/MemoryAccess.scala 72:46]
  wire  _GEN_21 = io_funct3 == 3'h0 ? _GEN_3 : _GEN_16; // @[src/main/scala/riscv/core/MemoryAccess.scala 72:46]
  wire [39:0] _GEN_22 = io_funct3 == 3'h0 ? _io_memory_bundle_write_data_T_2 : {{7'd0}, _GEN_15}; // @[src/main/scala/riscv/core/MemoryAccess.scala 72:46 74:35]
  wire [39:0] _GEN_23 = io_memory_write_enable ? _GEN_22 : 40'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 26:33 68:38]
  wire  _GEN_25 = io_memory_write_enable & _GEN_18; // @[src/main/scala/riscv/core/MemoryAccess.scala 28:33 68:38]
  wire  _GEN_26 = io_memory_write_enable & _GEN_19; // @[src/main/scala/riscv/core/MemoryAccess.scala 28:33 68:38]
  wire  _GEN_27 = io_memory_write_enable & _GEN_20; // @[src/main/scala/riscv/core/MemoryAccess.scala 28:33 68:38]
  wire  _GEN_28 = io_memory_write_enable & _GEN_21; // @[src/main/scala/riscv/core/MemoryAccess.scala 28:33 68:38]
  wire [39:0] _GEN_30 = io_memory_read_enable ? 40'h0 : _GEN_23; // @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 26:33]
  assign io_wb_memory_read_data = io_memory_read_enable ? _io_wb_memory_read_data_T_67 : 32'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 33:28 29:33]
  assign io_memory_bundle_address = io_alu_result; // @[src/main/scala/riscv/core/MemoryAccess.scala 27:33]
  assign io_memory_bundle_write_data = _GEN_30[31:0];
  assign io_memory_bundle_write_enable = io_memory_read_enable ? 1'h0 : io_memory_write_enable; // @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 25:33]
  assign io_memory_bundle_write_strobe_0 = io_memory_read_enable ? 1'h0 : _GEN_25; // @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 28:33]
  assign io_memory_bundle_write_strobe_1 = io_memory_read_enable ? 1'h0 : _GEN_26; // @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 28:33]
  assign io_memory_bundle_write_strobe_2 = io_memory_read_enable ? 1'h0 : _GEN_27; // @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 28:33]
  assign io_memory_bundle_write_strobe_3 = io_memory_read_enable ? 1'h0 : _GEN_28; // @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 28:33]
endmodule
module WriteBack(
  input  [31:0] io_next_pc, // @[src/main/scala/riscv/core/WriteBack.scala 12:14]
  input  [31:0] io_alu_result, // @[src/main/scala/riscv/core/WriteBack.scala 12:14]
  input  [31:0] io_memory_read_data, // @[src/main/scala/riscv/core/WriteBack.scala 12:14]
  input  [1:0]  io_regs_write_source, // @[src/main/scala/riscv/core/WriteBack.scala 12:14]
  output [31:0] io_regs_write_data // @[src/main/scala/riscv/core/WriteBack.scala 12:14]
);
  wire [31:0] _io_regs_write_data_T_1 = 2'h1 == io_regs_write_source ? io_memory_read_data : io_alu_result; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  assign io_regs_write_data = 2'h2 == io_regs_write_source ? io_next_pc : _io_regs_write_data_T_1; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
endmodule
module HazardUnit(
  input  [4:0] io_rs1_ex, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  input  [4:0] io_rs2_ex, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  input  [4:0] io_rd_mem, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  input  [4:0] io_rd_wb, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  input        io_reg_wr_enable_mem, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  input        io_reg_wr_enable_wb, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  output [1:0] io_alu_rs1_src, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  output [1:0] io_alu_rs2_src, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  input  [4:0] io_rs1_d, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  input  [4:0] io_rs2_d, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  input  [4:0] io_rd_ex, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  input  [1:0] io_ex_regs_write_src, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  output       io_pc_stall, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  output       io_srFD_stall, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  output       io_srDE_flush, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  input        io_ex_jump_flag, // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
  output       io_srFD_flush // @[src/main/scala/riscv/core/HazardUnit.scala 7:14]
);
  wire  _io_alu_rs1_src_T_2 = io_rs1_ex != 5'h0; // @[src/main/scala/riscv/core/HazardUnit.scala 39:69]
  wire  _io_alu_rs1_src_T_3 = io_rs1_ex == io_rd_mem & io_reg_wr_enable_mem & io_rs1_ex != 5'h0; // @[src/main/scala/riscv/core/HazardUnit.scala 39:56]
  wire  _io_alu_rs1_src_T_7 = io_rs1_ex == io_rd_wb & io_reg_wr_enable_wb & _io_alu_rs1_src_T_2; // @[src/main/scala/riscv/core/HazardUnit.scala 42:56]
  wire [1:0] _io_alu_rs1_src_T_8 = _io_alu_rs1_src_T_7 ? 2'h2 : 2'h0; // @[src/main/scala/riscv/core/HazardUnit.scala 41:8]
  wire  _io_alu_rs2_src_T_2 = io_rs2_ex != 5'h0; // @[src/main/scala/riscv/core/HazardUnit.scala 50:69]
  wire  _io_alu_rs2_src_T_3 = io_rs2_ex == io_rd_mem & io_reg_wr_enable_mem & io_rs2_ex != 5'h0; // @[src/main/scala/riscv/core/HazardUnit.scala 50:56]
  wire  _io_alu_rs2_src_T_7 = io_rs2_ex == io_rd_wb & io_reg_wr_enable_wb & _io_alu_rs2_src_T_2; // @[src/main/scala/riscv/core/HazardUnit.scala 53:56]
  wire [1:0] _io_alu_rs2_src_T_8 = _io_alu_rs2_src_T_7 ? 2'h2 : 2'h0; // @[src/main/scala/riscv/core/HazardUnit.scala 52:8]
  wire  lw_stall = io_ex_regs_write_src[0] & (io_rs1_d == io_rd_ex | io_rs2_d == io_rd_ex); // @[src/main/scala/riscv/core/HazardUnit.scala 60:42]
  assign io_alu_rs1_src = _io_alu_rs1_src_T_3 ? 2'h1 : _io_alu_rs1_src_T_8; // @[src/main/scala/riscv/core/HazardUnit.scala 38:24]
  assign io_alu_rs2_src = _io_alu_rs2_src_T_3 ? 2'h1 : _io_alu_rs2_src_T_8; // @[src/main/scala/riscv/core/HazardUnit.scala 49:24]
  assign io_pc_stall = io_ex_regs_write_src[0] & (io_rs1_d == io_rd_ex | io_rs2_d == io_rd_ex); // @[src/main/scala/riscv/core/HazardUnit.scala 60:42]
  assign io_srFD_stall = io_ex_regs_write_src[0] & (io_rs1_d == io_rd_ex | io_rs2_d == io_rd_ex); // @[src/main/scala/riscv/core/HazardUnit.scala 60:42]
  assign io_srDE_flush = lw_stall | io_ex_jump_flag; // @[src/main/scala/riscv/core/HazardUnit.scala 64:29]
  assign io_srFD_flush = io_ex_jump_flag; // @[src/main/scala/riscv/core/HazardUnit.scala 66:17]
endmodule
module FD(
  input         clock,
  input         reset,
  input  [31:0] io_f_instruction, // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 12:14]
  input  [31:0] io_f_current_pc, // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 12:14]
  input  [31:0] io_f_next_pc, // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 12:14]
  input         io_stall, // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 12:14]
  output [31:0] io_d_instruction, // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 12:14]
  output [31:0] io_d_current_pc, // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 12:14]
  output [31:0] io_d_next_pc // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 12:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] instruction; // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 23:28]
  reg [31:0] current_pc; // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 24:28]
  reg [31:0] next_pc; // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 25:28]
  assign io_d_instruction = instruction; // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 37:20]
  assign io_d_current_pc = current_pc; // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 38:20]
  assign io_d_next_pc = next_pc; // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 39:20]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 23:28]
      instruction <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 23:28]
    end else if (~io_stall) begin // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 27:19]
      instruction <= io_f_instruction; // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 28:17]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 24:28]
      current_pc <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 24:28]
    end else if (~io_stall) begin // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 27:19]
      current_pc <= io_f_current_pc; // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 29:17]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 25:28]
      next_pc <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 25:28]
    end else if (~io_stall) begin // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 27:19]
      next_pc <= io_f_next_pc; // @[src/main/scala/riscv/core/segmentationRegisters/FD.scala 30:17]
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
  instruction = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  current_pc = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  next_pc = _RAND_2[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module DE(
  input         clock,
  input         reset,
  input  [3:0]  io_d_ex_alu_func, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input         io_d_ex_aluop1_source, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input         io_d_ex_aluop2_source, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input         io_d_memory_read_enable, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input         io_d_memory_write_enable, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input  [1:0]  io_d_wb_src, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input         io_d_reg_write_enable, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input  [4:0]  io_d_reg_write_address, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input  [4:0]  io_d_rs1, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input  [4:0]  io_d_rs2, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output [3:0]  io_e_ex_alu_func, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output        io_e_ex_aluop1_source, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output        io_e_ex_aluop2_source, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output        io_e_memory_read_enable, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output        io_e_memory_write_enable, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output [1:0]  io_e_wb_src, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output        io_e_reg_write_enable, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output [4:0]  io_e_reg_write_address, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output [4:0]  io_e_rs1, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output [4:0]  io_e_rs2, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input  [31:0] io_d_ex_immediate, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input  [31:0] io_d_current_pc, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input  [31:0] io_d_next_pc, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input  [6:0]  io_d_opcode, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input  [6:0]  io_d_func3, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input  [31:0] io_d_regs_read_data_1, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  input  [31:0] io_d_regs_read_data_2, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output [31:0] io_e_ex_immediate, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output [31:0] io_e_current_pc, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output [31:0] io_e_next_pc, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output [6:0]  io_e_opcode, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output [6:0]  io_e_func3, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output [31:0] io_e_regs_read_data_1, // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
  output [31:0] io_e_regs_read_data_2 // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 12:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] current_pc; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 56:36]
  reg [31:0] next_pc; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 57:36]
  reg [6:0] opcode; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 58:36]
  reg [6:0] func3; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 59:36]
  reg [31:0] regs_read_data_1; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 61:36]
  reg [31:0] regs_read_data_2; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 62:36]
  reg [31:0] ex_immediate; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 63:36]
  reg [3:0] ex_alu_func; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 64:36]
  reg  ex_aluop1_source; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 65:36]
  reg  ex_aluop2_source; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 66:36]
  reg  memory_read_enable; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 67:36]
  reg  memory_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 68:36]
  reg [1:0] wb_src; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 69:36]
  reg  reg_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 70:36]
  reg [4:0] reg_write_address; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 71:36]
  reg [4:0] rs1; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 72:36]
  reg [4:0] rs2; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 73:36]
  assign io_e_ex_alu_func = ex_alu_func; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 99:28]
  assign io_e_ex_aluop1_source = ex_aluop1_source; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 103:28]
  assign io_e_ex_aluop2_source = ex_aluop2_source; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 104:28]
  assign io_e_memory_read_enable = memory_read_enable; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 105:28]
  assign io_e_memory_write_enable = memory_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 106:28]
  assign io_e_wb_src = wb_src; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 107:28]
  assign io_e_reg_write_enable = reg_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 108:28]
  assign io_e_reg_write_address = reg_write_address; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 109:28]
  assign io_e_rs1 = rs1; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 110:28]
  assign io_e_rs2 = rs2; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 111:28]
  assign io_e_ex_immediate = ex_immediate; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 102:28]
  assign io_e_current_pc = current_pc; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 94:28]
  assign io_e_next_pc = next_pc; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 95:28]
  assign io_e_opcode = opcode; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 96:28]
  assign io_e_func3 = func3; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 97:28]
  assign io_e_regs_read_data_1 = regs_read_data_1; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 100:28]
  assign io_e_regs_read_data_2 = regs_read_data_2; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 101:28]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 56:36]
      current_pc <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 56:36]
    end else begin
      current_pc <= io_d_current_pc; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 75:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 57:36]
      next_pc <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 57:36]
    end else begin
      next_pc <= io_d_next_pc; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 76:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 58:36]
      opcode <= 7'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 58:36]
    end else begin
      opcode <= io_d_opcode; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 77:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 59:36]
      func3 <= 7'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 59:36]
    end else begin
      func3 <= io_d_func3; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 78:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 61:36]
      regs_read_data_1 <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 61:36]
    end else begin
      regs_read_data_1 <= io_d_regs_read_data_1; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 80:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 62:36]
      regs_read_data_2 <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 62:36]
    end else begin
      regs_read_data_2 <= io_d_regs_read_data_2; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 81:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 63:36]
      ex_immediate <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 63:36]
    end else begin
      ex_immediate <= io_d_ex_immediate; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 82:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 64:36]
      ex_alu_func <= 4'h1; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 64:36]
    end else begin
      ex_alu_func <= io_d_ex_alu_func; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 83:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 65:36]
      ex_aluop1_source <= 1'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 65:36]
    end else begin
      ex_aluop1_source <= io_d_ex_aluop1_source; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 84:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 66:36]
      ex_aluop2_source <= 1'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 66:36]
    end else begin
      ex_aluop2_source <= io_d_ex_aluop2_source; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 85:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 67:36]
      memory_read_enable <= 1'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 67:36]
    end else begin
      memory_read_enable <= io_d_memory_read_enable; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 86:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 68:36]
      memory_write_enable <= 1'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 68:36]
    end else begin
      memory_write_enable <= io_d_memory_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 87:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 69:36]
      wb_src <= 2'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 69:36]
    end else begin
      wb_src <= io_d_wb_src; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 88:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 70:36]
      reg_write_enable <= 1'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 70:36]
    end else begin
      reg_write_enable <= io_d_reg_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 89:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 71:36]
      reg_write_address <= 5'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 71:36]
    end else begin
      reg_write_address <= io_d_reg_write_address; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 90:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 72:36]
      rs1 <= 5'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 72:36]
    end else begin
      rs1 <= io_d_rs1; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 91:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 73:36]
      rs2 <= 5'h0; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 73:36]
    end else begin
      rs2 <= io_d_rs2; // @[src/main/scala/riscv/core/segmentationRegisters/DE.scala 92:23]
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
  current_pc = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  next_pc = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  opcode = _RAND_2[6:0];
  _RAND_3 = {1{`RANDOM}};
  func3 = _RAND_3[6:0];
  _RAND_4 = {1{`RANDOM}};
  regs_read_data_1 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  regs_read_data_2 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  ex_immediate = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  ex_alu_func = _RAND_7[3:0];
  _RAND_8 = {1{`RANDOM}};
  ex_aluop1_source = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  ex_aluop2_source = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  memory_read_enable = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  memory_write_enable = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  wb_src = _RAND_12[1:0];
  _RAND_13 = {1{`RANDOM}};
  reg_write_enable = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  reg_write_address = _RAND_14[4:0];
  _RAND_15 = {1{`RANDOM}};
  rs1 = _RAND_15[4:0];
  _RAND_16 = {1{`RANDOM}};
  rs2 = _RAND_16[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module EM(
  input         clock,
  input         reset,
  input  [31:0] io_e_alu_result, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  input  [31:0] io_e_regs_read_data_2, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  input         io_e_memory_read_enable, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  input         io_e_memory_write_enable, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  input  [2:0]  io_e_funct3, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  input  [31:0] io_e_next_pc, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  input  [1:0]  io_e_wb_src, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  input         io_e_reg_write_enable, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  input  [4:0]  io_e_reg_write_address, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  output [31:0] io_m_alu_result, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  output [31:0] io_m_regs_read_data_2, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  output        io_m_memory_read_enable, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  output        io_m_memory_write_enable, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  output [2:0]  io_m_funct3, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  output [31:0] io_m_next_pc, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  output [1:0]  io_m_wb_src, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  output        io_m_reg_write_enable, // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
  output [4:0]  io_m_reg_write_address // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 10:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] alu_result; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 32:36]
  reg [31:0] regs_read_data_2; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 33:36]
  reg  memory_read_enable; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 34:36]
  reg  memory_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 35:36]
  reg [2:0] funct3; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 36:36]
  reg [31:0] next_pc; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 37:36]
  reg [1:0] wb_src; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 38:36]
  reg  reg_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 39:36]
  reg [4:0] reg_write_address; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 40:36]
  assign io_m_alu_result = alu_result; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 52:28]
  assign io_m_regs_read_data_2 = regs_read_data_2; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 53:28]
  assign io_m_memory_read_enable = memory_read_enable; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 54:28]
  assign io_m_memory_write_enable = memory_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 55:28]
  assign io_m_funct3 = funct3; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 56:28]
  assign io_m_next_pc = next_pc; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 57:28]
  assign io_m_wb_src = wb_src; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 58:28]
  assign io_m_reg_write_enable = reg_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 59:28]
  assign io_m_reg_write_address = reg_write_address; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 60:28]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 32:36]
      alu_result <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 32:36]
    end else begin
      alu_result <= io_e_alu_result; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 42:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 33:36]
      regs_read_data_2 <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 33:36]
    end else begin
      regs_read_data_2 <= io_e_regs_read_data_2; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 43:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 34:36]
      memory_read_enable <= 1'h0; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 34:36]
    end else begin
      memory_read_enable <= io_e_memory_read_enable; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 44:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 35:36]
      memory_write_enable <= 1'h0; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 35:36]
    end else begin
      memory_write_enable <= io_e_memory_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 45:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 36:36]
      funct3 <= 3'h0; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 36:36]
    end else begin
      funct3 <= io_e_funct3; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 46:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 37:36]
      next_pc <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 37:36]
    end else begin
      next_pc <= io_e_next_pc; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 47:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 38:36]
      wb_src <= 2'h0; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 38:36]
    end else begin
      wb_src <= io_e_wb_src; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 48:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 39:36]
      reg_write_enable <= 1'h0; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 39:36]
    end else begin
      reg_write_enable <= io_e_reg_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 49:23]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 40:36]
      reg_write_address <= 5'h0; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 40:36]
    end else begin
      reg_write_address <= io_e_reg_write_address; // @[src/main/scala/riscv/core/segmentationRegisters/EM.scala 50:23]
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
  alu_result = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  regs_read_data_2 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  memory_read_enable = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  memory_write_enable = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  funct3 = _RAND_4[2:0];
  _RAND_5 = {1{`RANDOM}};
  next_pc = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  wb_src = _RAND_6[1:0];
  _RAND_7 = {1{`RANDOM}};
  reg_write_enable = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  reg_write_address = _RAND_8[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MW(
  input         clock,
  input         reset,
  input  [31:0] io_m_alu_result, // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 10:14]
  input  [31:0] io_m_mem_read_data, // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 10:14]
  input  [31:0] io_m_next_pc, // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 10:14]
  input  [1:0]  io_m_wb_src, // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 10:14]
  input         io_m_reg_write_enable, // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 10:14]
  input  [4:0]  io_m_reg_write_address, // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 10:14]
  output [31:0] io_w_alu_result, // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 10:14]
  output [31:0] io_w_mem_read_data, // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 10:14]
  output [31:0] io_w_next_pc, // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 10:14]
  output [1:0]  io_w_wb_src, // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 10:14]
  output        io_w_reg_write_enable, // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 10:14]
  output [4:0]  io_w_reg_write_address // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 10:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] alu_result; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 26:36]
  reg [31:0] mem_read_data; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 27:36]
  reg [31:0] next_pc; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 28:36]
  reg [1:0] wb_src; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 29:36]
  reg  reg_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 30:36]
  reg [4:0] reg_write_address; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 31:36]
  assign io_w_alu_result = alu_result; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 40:26]
  assign io_w_mem_read_data = mem_read_data; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 41:26]
  assign io_w_next_pc = next_pc; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 42:26]
  assign io_w_wb_src = wb_src; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 43:26]
  assign io_w_reg_write_enable = reg_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 44:26]
  assign io_w_reg_write_address = reg_write_address; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 45:26]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 26:36]
      alu_result <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 26:36]
    end else begin
      alu_result <= io_m_alu_result; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 33:21]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 27:36]
      mem_read_data <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 27:36]
    end else begin
      mem_read_data <= io_m_mem_read_data; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 34:21]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 28:36]
      next_pc <= 32'h0; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 28:36]
    end else begin
      next_pc <= io_m_next_pc; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 35:21]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 29:36]
      wb_src <= 2'h0; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 29:36]
    end else begin
      wb_src <= io_m_wb_src; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 36:21]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 30:36]
      reg_write_enable <= 1'h0; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 30:36]
    end else begin
      reg_write_enable <= io_m_reg_write_enable; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 37:21]
    end
    if (reset) begin // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 31:36]
      reg_write_address <= 5'h0; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 31:36]
    end else begin
      reg_write_address <= io_m_reg_write_address; // @[src/main/scala/riscv/core/segmentationRegisters/MW.scala 38:21]
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
  alu_result = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  mem_read_data = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  next_pc = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  wb_src = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  reg_write_enable = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  reg_write_address = _RAND_5[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module CPU(
  input         clock,
  input         reset,
  output [31:0] io_instruction_address, // @[src/main/scala/riscv/core/CPU.scala 17:22]
  input  [31:0] io_instruction, // @[src/main/scala/riscv/core/CPU.scala 17:22]
  output [31:0] io_memory_bundle_address, // @[src/main/scala/riscv/core/CPU.scala 17:22]
  output [31:0] io_memory_bundle_write_data, // @[src/main/scala/riscv/core/CPU.scala 17:22]
  output        io_memory_bundle_write_enable, // @[src/main/scala/riscv/core/CPU.scala 17:22]
  output        io_memory_bundle_write_strobe_0, // @[src/main/scala/riscv/core/CPU.scala 17:22]
  output        io_memory_bundle_write_strobe_1, // @[src/main/scala/riscv/core/CPU.scala 17:22]
  output        io_memory_bundle_write_strobe_2, // @[src/main/scala/riscv/core/CPU.scala 17:22]
  output        io_memory_bundle_write_strobe_3, // @[src/main/scala/riscv/core/CPU.scala 17:22]
  input  [31:0] io_memory_bundle_read_data, // @[src/main/scala/riscv/core/CPU.scala 17:22]
  input         io_instruction_valid, // @[src/main/scala/riscv/core/CPU.scala 17:22]
  input  [4:0]  io_debug_read_address, // @[src/main/scala/riscv/core/CPU.scala 17:22]
  output [31:0] io_debug_read_data // @[src/main/scala/riscv/core/CPU.scala 17:22]
);
  wire  regs_clock; // @[src/main/scala/riscv/core/CPU.scala 22:66]
  wire  regs_reset; // @[src/main/scala/riscv/core/CPU.scala 22:66]
  wire  regs_io_write_enable; // @[src/main/scala/riscv/core/CPU.scala 22:66]
  wire [4:0] regs_io_write_address; // @[src/main/scala/riscv/core/CPU.scala 22:66]
  wire [31:0] regs_io_write_data; // @[src/main/scala/riscv/core/CPU.scala 22:66]
  wire [4:0] regs_io_read_address1; // @[src/main/scala/riscv/core/CPU.scala 22:66]
  wire [4:0] regs_io_read_address2; // @[src/main/scala/riscv/core/CPU.scala 22:66]
  wire [31:0] regs_io_read_data1; // @[src/main/scala/riscv/core/CPU.scala 22:66]
  wire [31:0] regs_io_read_data2; // @[src/main/scala/riscv/core/CPU.scala 22:66]
  wire [4:0] regs_io_debug_read_address; // @[src/main/scala/riscv/core/CPU.scala 22:66]
  wire [31:0] regs_io_debug_read_data; // @[src/main/scala/riscv/core/CPU.scala 22:66]
  wire  inst_fetch_clock; // @[src/main/scala/riscv/core/CPU.scala 23:26]
  wire  inst_fetch_reset; // @[src/main/scala/riscv/core/CPU.scala 23:26]
  wire  inst_fetch_io_jump_flag_id; // @[src/main/scala/riscv/core/CPU.scala 23:26]
  wire [31:0] inst_fetch_io_jump_address_id; // @[src/main/scala/riscv/core/CPU.scala 23:26]
  wire [31:0] inst_fetch_io_instruction_read_data; // @[src/main/scala/riscv/core/CPU.scala 23:26]
  wire  inst_fetch_io_instruction_valid; // @[src/main/scala/riscv/core/CPU.scala 23:26]
  wire  inst_fetch_io_pc_stall; // @[src/main/scala/riscv/core/CPU.scala 23:26]
  wire [31:0] inst_fetch_io_current_pc; // @[src/main/scala/riscv/core/CPU.scala 23:26]
  wire [31:0] inst_fetch_io_next_pc; // @[src/main/scala/riscv/core/CPU.scala 23:26]
  wire [31:0] inst_fetch_io_instruction; // @[src/main/scala/riscv/core/CPU.scala 23:26]
  wire [31:0] id_io_instruction; // @[src/main/scala/riscv/core/CPU.scala 24:26]
  wire [4:0] id_io_regs_reg1_read_address; // @[src/main/scala/riscv/core/CPU.scala 24:26]
  wire [4:0] id_io_regs_reg2_read_address; // @[src/main/scala/riscv/core/CPU.scala 24:26]
  wire [3:0] id_io_ex_alu_func; // @[src/main/scala/riscv/core/CPU.scala 24:26]
  wire [31:0] id_io_ex_immediate; // @[src/main/scala/riscv/core/CPU.scala 24:26]
  wire  id_io_ex_aluop1_source; // @[src/main/scala/riscv/core/CPU.scala 24:26]
  wire  id_io_ex_aluop2_source; // @[src/main/scala/riscv/core/CPU.scala 24:26]
  wire  id_io_memory_read_enable; // @[src/main/scala/riscv/core/CPU.scala 24:26]
  wire  id_io_memory_write_enable; // @[src/main/scala/riscv/core/CPU.scala 24:26]
  wire [1:0] id_io_wb_src; // @[src/main/scala/riscv/core/CPU.scala 24:26]
  wire  id_io_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 24:26]
  wire [4:0] id_io_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 24:26]
  wire [6:0] ex_io_opcode; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [6:0] ex_io_funct3; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [31:0] ex_io_instruction_address; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [31:0] ex_io_reg1_data; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [31:0] ex_io_reg2_data; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [31:0] ex_io_immediate; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire  ex_io_aluop1_source; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire  ex_io_aluop2_source; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [3:0] ex_io_alu_func; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [1:0] ex_io_rs1_src; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [1:0] ex_io_rs2_src; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [31:0] ex_io_alu_result_mem_fw; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [31:0] ex_io_wb_regs_write_data_fw; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [31:0] ex_io_mem_reg2_data; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [31:0] ex_io_mem_alu_result; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire  ex_io_if_jump_flag; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [31:0] ex_io_if_jump_address; // @[src/main/scala/riscv/core/CPU.scala 25:26]
  wire [31:0] mem_io_alu_result; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire [31:0] mem_io_reg2_data; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire  mem_io_memory_read_enable; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire  mem_io_memory_write_enable; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire [2:0] mem_io_funct3; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire [31:0] mem_io_wb_memory_read_data; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire [31:0] mem_io_memory_bundle_address; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire [31:0] mem_io_memory_bundle_write_data; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire  mem_io_memory_bundle_write_enable; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire  mem_io_memory_bundle_write_strobe_0; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire  mem_io_memory_bundle_write_strobe_1; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire  mem_io_memory_bundle_write_strobe_2; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire  mem_io_memory_bundle_write_strobe_3; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire [31:0] mem_io_memory_bundle_read_data; // @[src/main/scala/riscv/core/CPU.scala 26:26]
  wire [31:0] wb_io_next_pc; // @[src/main/scala/riscv/core/CPU.scala 27:26]
  wire [31:0] wb_io_alu_result; // @[src/main/scala/riscv/core/CPU.scala 27:26]
  wire [31:0] wb_io_memory_read_data; // @[src/main/scala/riscv/core/CPU.scala 27:26]
  wire [1:0] wb_io_regs_write_source; // @[src/main/scala/riscv/core/CPU.scala 27:26]
  wire [31:0] wb_io_regs_write_data; // @[src/main/scala/riscv/core/CPU.scala 27:26]
  wire [4:0] hazard_unit_io_rs1_ex; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire [4:0] hazard_unit_io_rs2_ex; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire [4:0] hazard_unit_io_rd_mem; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire [4:0] hazard_unit_io_rd_wb; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire  hazard_unit_io_reg_wr_enable_mem; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire  hazard_unit_io_reg_wr_enable_wb; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire [1:0] hazard_unit_io_alu_rs1_src; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire [1:0] hazard_unit_io_alu_rs2_src; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire [4:0] hazard_unit_io_rs1_d; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire [4:0] hazard_unit_io_rs2_d; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire [4:0] hazard_unit_io_rd_ex; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire [1:0] hazard_unit_io_ex_regs_write_src; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire  hazard_unit_io_pc_stall; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire  hazard_unit_io_srFD_stall; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire  hazard_unit_io_srDE_flush; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire  hazard_unit_io_ex_jump_flag; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire  hazard_unit_io_srFD_flush; // @[src/main/scala/riscv/core/CPU.scala 30:27]
  wire  srFD_clock; // @[src/main/scala/riscv/core/CPU.scala 33:63]
  wire  srFD_reset; // @[src/main/scala/riscv/core/CPU.scala 33:63]
  wire [31:0] srFD_io_f_instruction; // @[src/main/scala/riscv/core/CPU.scala 33:63]
  wire [31:0] srFD_io_f_current_pc; // @[src/main/scala/riscv/core/CPU.scala 33:63]
  wire [31:0] srFD_io_f_next_pc; // @[src/main/scala/riscv/core/CPU.scala 33:63]
  wire  srFD_io_stall; // @[src/main/scala/riscv/core/CPU.scala 33:63]
  wire [31:0] srFD_io_d_instruction; // @[src/main/scala/riscv/core/CPU.scala 33:63]
  wire [31:0] srFD_io_d_current_pc; // @[src/main/scala/riscv/core/CPU.scala 33:63]
  wire [31:0] srFD_io_d_next_pc; // @[src/main/scala/riscv/core/CPU.scala 33:63]
  wire  srDE_clock; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire  srDE_reset; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [3:0] srDE_io_d_ex_alu_func; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire  srDE_io_d_ex_aluop1_source; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire  srDE_io_d_ex_aluop2_source; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire  srDE_io_d_memory_read_enable; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire  srDE_io_d_memory_write_enable; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [1:0] srDE_io_d_wb_src; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire  srDE_io_d_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [4:0] srDE_io_d_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [4:0] srDE_io_d_rs1; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [4:0] srDE_io_d_rs2; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [3:0] srDE_io_e_ex_alu_func; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire  srDE_io_e_ex_aluop1_source; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire  srDE_io_e_ex_aluop2_source; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire  srDE_io_e_memory_read_enable; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire  srDE_io_e_memory_write_enable; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [1:0] srDE_io_e_wb_src; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire  srDE_io_e_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [4:0] srDE_io_e_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [4:0] srDE_io_e_rs1; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [4:0] srDE_io_e_rs2; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [31:0] srDE_io_d_ex_immediate; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [31:0] srDE_io_d_current_pc; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [31:0] srDE_io_d_next_pc; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [6:0] srDE_io_d_opcode; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [6:0] srDE_io_d_func3; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [31:0] srDE_io_d_regs_read_data_1; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [31:0] srDE_io_d_regs_read_data_2; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [31:0] srDE_io_e_ex_immediate; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [31:0] srDE_io_e_current_pc; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [31:0] srDE_io_e_next_pc; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [6:0] srDE_io_e_opcode; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [6:0] srDE_io_e_func3; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [31:0] srDE_io_e_regs_read_data_1; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire [31:0] srDE_io_e_regs_read_data_2; // @[src/main/scala/riscv/core/CPU.scala 34:63]
  wire  srEM_clock; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire  srEM_reset; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire [31:0] srEM_io_e_alu_result; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire [31:0] srEM_io_e_regs_read_data_2; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire  srEM_io_e_memory_read_enable; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire  srEM_io_e_memory_write_enable; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire [2:0] srEM_io_e_funct3; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire [31:0] srEM_io_e_next_pc; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire [1:0] srEM_io_e_wb_src; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire  srEM_io_e_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire [4:0] srEM_io_e_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire [31:0] srEM_io_m_alu_result; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire [31:0] srEM_io_m_regs_read_data_2; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire  srEM_io_m_memory_read_enable; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire  srEM_io_m_memory_write_enable; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire [2:0] srEM_io_m_funct3; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire [31:0] srEM_io_m_next_pc; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire [1:0] srEM_io_m_wb_src; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire  srEM_io_m_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire [4:0] srEM_io_m_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 35:26]
  wire  srMW_clock; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  wire  srMW_reset; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  wire [31:0] srMW_io_m_alu_result; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  wire [31:0] srMW_io_m_mem_read_data; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  wire [31:0] srMW_io_m_next_pc; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  wire [1:0] srMW_io_m_wb_src; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  wire  srMW_io_m_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  wire [4:0] srMW_io_m_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  wire [31:0] srMW_io_w_alu_result; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  wire [31:0] srMW_io_w_mem_read_data; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  wire [31:0] srMW_io_w_next_pc; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  wire [1:0] srMW_io_w_wb_src; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  wire  srMW_io_w_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  wire [4:0] srMW_io_w_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 36:26]
  RegisterFile regs ( // @[src/main/scala/riscv/core/CPU.scala 22:66]
    .clock(regs_clock),
    .reset(regs_reset),
    .io_write_enable(regs_io_write_enable),
    .io_write_address(regs_io_write_address),
    .io_write_data(regs_io_write_data),
    .io_read_address1(regs_io_read_address1),
    .io_read_address2(regs_io_read_address2),
    .io_read_data1(regs_io_read_data1),
    .io_read_data2(regs_io_read_data2),
    .io_debug_read_address(regs_io_debug_read_address),
    .io_debug_read_data(regs_io_debug_read_data)
  );
  InstructionFetch inst_fetch ( // @[src/main/scala/riscv/core/CPU.scala 23:26]
    .clock(inst_fetch_clock),
    .reset(inst_fetch_reset),
    .io_jump_flag_id(inst_fetch_io_jump_flag_id),
    .io_jump_address_id(inst_fetch_io_jump_address_id),
    .io_instruction_read_data(inst_fetch_io_instruction_read_data),
    .io_instruction_valid(inst_fetch_io_instruction_valid),
    .io_pc_stall(inst_fetch_io_pc_stall),
    .io_current_pc(inst_fetch_io_current_pc),
    .io_next_pc(inst_fetch_io_next_pc),
    .io_instruction(inst_fetch_io_instruction)
  );
  InstructionDecode id ( // @[src/main/scala/riscv/core/CPU.scala 24:26]
    .io_instruction(id_io_instruction),
    .io_regs_reg1_read_address(id_io_regs_reg1_read_address),
    .io_regs_reg2_read_address(id_io_regs_reg2_read_address),
    .io_ex_alu_func(id_io_ex_alu_func),
    .io_ex_immediate(id_io_ex_immediate),
    .io_ex_aluop1_source(id_io_ex_aluop1_source),
    .io_ex_aluop2_source(id_io_ex_aluop2_source),
    .io_memory_read_enable(id_io_memory_read_enable),
    .io_memory_write_enable(id_io_memory_write_enable),
    .io_wb_src(id_io_wb_src),
    .io_reg_write_enable(id_io_reg_write_enable),
    .io_reg_write_address(id_io_reg_write_address)
  );
  Execute ex ( // @[src/main/scala/riscv/core/CPU.scala 25:26]
    .io_opcode(ex_io_opcode),
    .io_funct3(ex_io_funct3),
    .io_instruction_address(ex_io_instruction_address),
    .io_reg1_data(ex_io_reg1_data),
    .io_reg2_data(ex_io_reg2_data),
    .io_immediate(ex_io_immediate),
    .io_aluop1_source(ex_io_aluop1_source),
    .io_aluop2_source(ex_io_aluop2_source),
    .io_alu_func(ex_io_alu_func),
    .io_rs1_src(ex_io_rs1_src),
    .io_rs2_src(ex_io_rs2_src),
    .io_alu_result_mem_fw(ex_io_alu_result_mem_fw),
    .io_wb_regs_write_data_fw(ex_io_wb_regs_write_data_fw),
    .io_mem_reg2_data(ex_io_mem_reg2_data),
    .io_mem_alu_result(ex_io_mem_alu_result),
    .io_if_jump_flag(ex_io_if_jump_flag),
    .io_if_jump_address(ex_io_if_jump_address)
  );
  MemoryAccess mem ( // @[src/main/scala/riscv/core/CPU.scala 26:26]
    .io_alu_result(mem_io_alu_result),
    .io_reg2_data(mem_io_reg2_data),
    .io_memory_read_enable(mem_io_memory_read_enable),
    .io_memory_write_enable(mem_io_memory_write_enable),
    .io_funct3(mem_io_funct3),
    .io_wb_memory_read_data(mem_io_wb_memory_read_data),
    .io_memory_bundle_address(mem_io_memory_bundle_address),
    .io_memory_bundle_write_data(mem_io_memory_bundle_write_data),
    .io_memory_bundle_write_enable(mem_io_memory_bundle_write_enable),
    .io_memory_bundle_write_strobe_0(mem_io_memory_bundle_write_strobe_0),
    .io_memory_bundle_write_strobe_1(mem_io_memory_bundle_write_strobe_1),
    .io_memory_bundle_write_strobe_2(mem_io_memory_bundle_write_strobe_2),
    .io_memory_bundle_write_strobe_3(mem_io_memory_bundle_write_strobe_3),
    .io_memory_bundle_read_data(mem_io_memory_bundle_read_data)
  );
  WriteBack wb ( // @[src/main/scala/riscv/core/CPU.scala 27:26]
    .io_next_pc(wb_io_next_pc),
    .io_alu_result(wb_io_alu_result),
    .io_memory_read_data(wb_io_memory_read_data),
    .io_regs_write_source(wb_io_regs_write_source),
    .io_regs_write_data(wb_io_regs_write_data)
  );
  HazardUnit hazard_unit ( // @[src/main/scala/riscv/core/CPU.scala 30:27]
    .io_rs1_ex(hazard_unit_io_rs1_ex),
    .io_rs2_ex(hazard_unit_io_rs2_ex),
    .io_rd_mem(hazard_unit_io_rd_mem),
    .io_rd_wb(hazard_unit_io_rd_wb),
    .io_reg_wr_enable_mem(hazard_unit_io_reg_wr_enable_mem),
    .io_reg_wr_enable_wb(hazard_unit_io_reg_wr_enable_wb),
    .io_alu_rs1_src(hazard_unit_io_alu_rs1_src),
    .io_alu_rs2_src(hazard_unit_io_alu_rs2_src),
    .io_rs1_d(hazard_unit_io_rs1_d),
    .io_rs2_d(hazard_unit_io_rs2_d),
    .io_rd_ex(hazard_unit_io_rd_ex),
    .io_ex_regs_write_src(hazard_unit_io_ex_regs_write_src),
    .io_pc_stall(hazard_unit_io_pc_stall),
    .io_srFD_stall(hazard_unit_io_srFD_stall),
    .io_srDE_flush(hazard_unit_io_srDE_flush),
    .io_ex_jump_flag(hazard_unit_io_ex_jump_flag),
    .io_srFD_flush(hazard_unit_io_srFD_flush)
  );
  FD srFD ( // @[src/main/scala/riscv/core/CPU.scala 33:63]
    .clock(srFD_clock),
    .reset(srFD_reset),
    .io_f_instruction(srFD_io_f_instruction),
    .io_f_current_pc(srFD_io_f_current_pc),
    .io_f_next_pc(srFD_io_f_next_pc),
    .io_stall(srFD_io_stall),
    .io_d_instruction(srFD_io_d_instruction),
    .io_d_current_pc(srFD_io_d_current_pc),
    .io_d_next_pc(srFD_io_d_next_pc)
  );
  DE srDE ( // @[src/main/scala/riscv/core/CPU.scala 34:63]
    .clock(srDE_clock),
    .reset(srDE_reset),
    .io_d_ex_alu_func(srDE_io_d_ex_alu_func),
    .io_d_ex_aluop1_source(srDE_io_d_ex_aluop1_source),
    .io_d_ex_aluop2_source(srDE_io_d_ex_aluop2_source),
    .io_d_memory_read_enable(srDE_io_d_memory_read_enable),
    .io_d_memory_write_enable(srDE_io_d_memory_write_enable),
    .io_d_wb_src(srDE_io_d_wb_src),
    .io_d_reg_write_enable(srDE_io_d_reg_write_enable),
    .io_d_reg_write_address(srDE_io_d_reg_write_address),
    .io_d_rs1(srDE_io_d_rs1),
    .io_d_rs2(srDE_io_d_rs2),
    .io_e_ex_alu_func(srDE_io_e_ex_alu_func),
    .io_e_ex_aluop1_source(srDE_io_e_ex_aluop1_source),
    .io_e_ex_aluop2_source(srDE_io_e_ex_aluop2_source),
    .io_e_memory_read_enable(srDE_io_e_memory_read_enable),
    .io_e_memory_write_enable(srDE_io_e_memory_write_enable),
    .io_e_wb_src(srDE_io_e_wb_src),
    .io_e_reg_write_enable(srDE_io_e_reg_write_enable),
    .io_e_reg_write_address(srDE_io_e_reg_write_address),
    .io_e_rs1(srDE_io_e_rs1),
    .io_e_rs2(srDE_io_e_rs2),
    .io_d_ex_immediate(srDE_io_d_ex_immediate),
    .io_d_current_pc(srDE_io_d_current_pc),
    .io_d_next_pc(srDE_io_d_next_pc),
    .io_d_opcode(srDE_io_d_opcode),
    .io_d_func3(srDE_io_d_func3),
    .io_d_regs_read_data_1(srDE_io_d_regs_read_data_1),
    .io_d_regs_read_data_2(srDE_io_d_regs_read_data_2),
    .io_e_ex_immediate(srDE_io_e_ex_immediate),
    .io_e_current_pc(srDE_io_e_current_pc),
    .io_e_next_pc(srDE_io_e_next_pc),
    .io_e_opcode(srDE_io_e_opcode),
    .io_e_func3(srDE_io_e_func3),
    .io_e_regs_read_data_1(srDE_io_e_regs_read_data_1),
    .io_e_regs_read_data_2(srDE_io_e_regs_read_data_2)
  );
  EM srEM ( // @[src/main/scala/riscv/core/CPU.scala 35:26]
    .clock(srEM_clock),
    .reset(srEM_reset),
    .io_e_alu_result(srEM_io_e_alu_result),
    .io_e_regs_read_data_2(srEM_io_e_regs_read_data_2),
    .io_e_memory_read_enable(srEM_io_e_memory_read_enable),
    .io_e_memory_write_enable(srEM_io_e_memory_write_enable),
    .io_e_funct3(srEM_io_e_funct3),
    .io_e_next_pc(srEM_io_e_next_pc),
    .io_e_wb_src(srEM_io_e_wb_src),
    .io_e_reg_write_enable(srEM_io_e_reg_write_enable),
    .io_e_reg_write_address(srEM_io_e_reg_write_address),
    .io_m_alu_result(srEM_io_m_alu_result),
    .io_m_regs_read_data_2(srEM_io_m_regs_read_data_2),
    .io_m_memory_read_enable(srEM_io_m_memory_read_enable),
    .io_m_memory_write_enable(srEM_io_m_memory_write_enable),
    .io_m_funct3(srEM_io_m_funct3),
    .io_m_next_pc(srEM_io_m_next_pc),
    .io_m_wb_src(srEM_io_m_wb_src),
    .io_m_reg_write_enable(srEM_io_m_reg_write_enable),
    .io_m_reg_write_address(srEM_io_m_reg_write_address)
  );
  MW srMW ( // @[src/main/scala/riscv/core/CPU.scala 36:26]
    .clock(srMW_clock),
    .reset(srMW_reset),
    .io_m_alu_result(srMW_io_m_alu_result),
    .io_m_mem_read_data(srMW_io_m_mem_read_data),
    .io_m_next_pc(srMW_io_m_next_pc),
    .io_m_wb_src(srMW_io_m_wb_src),
    .io_m_reg_write_enable(srMW_io_m_reg_write_enable),
    .io_m_reg_write_address(srMW_io_m_reg_write_address),
    .io_w_alu_result(srMW_io_w_alu_result),
    .io_w_mem_read_data(srMW_io_w_mem_read_data),
    .io_w_next_pc(srMW_io_w_next_pc),
    .io_w_wb_src(srMW_io_w_wb_src),
    .io_w_reg_write_enable(srMW_io_w_reg_write_enable),
    .io_w_reg_write_address(srMW_io_w_reg_write_address)
  );
  assign io_instruction_address = inst_fetch_io_current_pc; // @[src/main/scala/riscv/core/CPU.scala 64:26]
  assign io_memory_bundle_address = {3'h0,mem_io_memory_bundle_address[28:0]}; // @[src/main/scala/riscv/core/CPU.scala 156:34]
  assign io_memory_bundle_write_data = mem_io_memory_bundle_write_data; // @[src/main/scala/riscv/core/CPU.scala 161:34]
  assign io_memory_bundle_write_enable = mem_io_memory_bundle_write_enable; // @[src/main/scala/riscv/core/CPU.scala 160:34]
  assign io_memory_bundle_write_strobe_0 = mem_io_memory_bundle_write_strobe_0; // @[src/main/scala/riscv/core/CPU.scala 162:34]
  assign io_memory_bundle_write_strobe_1 = mem_io_memory_bundle_write_strobe_1; // @[src/main/scala/riscv/core/CPU.scala 162:34]
  assign io_memory_bundle_write_strobe_2 = mem_io_memory_bundle_write_strobe_2; // @[src/main/scala/riscv/core/CPU.scala 162:34]
  assign io_memory_bundle_write_strobe_3 = mem_io_memory_bundle_write_strobe_3; // @[src/main/scala/riscv/core/CPU.scala 162:34]
  assign io_debug_read_data = regs_io_debug_read_data; // @[src/main/scala/riscv/core/CPU.scala 82:30]
  assign regs_clock = ~clock; // @[src/main/scala/riscv/core/CPU.scala 22:51]
  assign regs_reset = reset;
  assign regs_io_write_enable = srMW_io_w_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 74:25]
  assign regs_io_write_address = srMW_io_w_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 75:25]
  assign regs_io_write_data = wb_io_regs_write_data; // @[src/main/scala/riscv/core/CPU.scala 76:25]
  assign regs_io_read_address1 = id_io_regs_reg1_read_address; // @[src/main/scala/riscv/core/CPU.scala 77:25]
  assign regs_io_read_address2 = id_io_regs_reg2_read_address; // @[src/main/scala/riscv/core/CPU.scala 78:25]
  assign regs_io_debug_read_address = io_debug_read_address; // @[src/main/scala/riscv/core/CPU.scala 81:30]
  assign inst_fetch_clock = clock;
  assign inst_fetch_reset = reset;
  assign inst_fetch_io_jump_flag_id = ex_io_if_jump_flag; // @[src/main/scala/riscv/core/CPU.scala 56:39]
  assign inst_fetch_io_jump_address_id = ex_io_if_jump_address; // @[src/main/scala/riscv/core/CPU.scala 55:39]
  assign inst_fetch_io_instruction_read_data = io_instruction; // @[src/main/scala/riscv/core/CPU.scala 58:39]
  assign inst_fetch_io_instruction_valid = io_instruction_valid; // @[src/main/scala/riscv/core/CPU.scala 57:39]
  assign inst_fetch_io_pc_stall = hazard_unit_io_pc_stall; // @[src/main/scala/riscv/core/CPU.scala 59:39]
  assign id_io_instruction = srFD_io_d_instruction; // @[src/main/scala/riscv/core/CPU.scala 71:25]
  assign ex_io_opcode = srDE_io_e_opcode; // @[src/main/scala/riscv/core/CPU.scala 107:31]
  assign ex_io_funct3 = srDE_io_e_func3; // @[src/main/scala/riscv/core/CPU.scala 108:31]
  assign ex_io_instruction_address = srDE_io_e_current_pc; // @[src/main/scala/riscv/core/CPU.scala 106:31]
  assign ex_io_reg1_data = srDE_io_e_regs_read_data_1; // @[src/main/scala/riscv/core/CPU.scala 110:31]
  assign ex_io_reg2_data = srDE_io_e_regs_read_data_2; // @[src/main/scala/riscv/core/CPU.scala 111:31]
  assign ex_io_immediate = srDE_io_e_ex_immediate; // @[src/main/scala/riscv/core/CPU.scala 112:31]
  assign ex_io_aluop1_source = srDE_io_e_ex_aluop1_source; // @[src/main/scala/riscv/core/CPU.scala 114:31]
  assign ex_io_aluop2_source = srDE_io_e_ex_aluop2_source; // @[src/main/scala/riscv/core/CPU.scala 115:31]
  assign ex_io_alu_func = srDE_io_e_ex_alu_func; // @[src/main/scala/riscv/core/CPU.scala 113:31]
  assign ex_io_rs1_src = hazard_unit_io_alu_rs1_src; // @[src/main/scala/riscv/core/CPU.scala 116:31]
  assign ex_io_rs2_src = hazard_unit_io_alu_rs2_src; // @[src/main/scala/riscv/core/CPU.scala 117:31]
  assign ex_io_alu_result_mem_fw = srEM_io_m_alu_result; // @[src/main/scala/riscv/core/CPU.scala 118:31]
  assign ex_io_wb_regs_write_data_fw = wb_io_regs_write_data; // @[src/main/scala/riscv/core/CPU.scala 119:31]
  assign mem_io_alu_result = srEM_io_m_alu_result; // @[src/main/scala/riscv/core/CPU.scala 150:30]
  assign mem_io_reg2_data = srEM_io_m_regs_read_data_2; // @[src/main/scala/riscv/core/CPU.scala 151:30]
  assign mem_io_memory_read_enable = srEM_io_m_memory_read_enable; // @[src/main/scala/riscv/core/CPU.scala 152:30]
  assign mem_io_memory_write_enable = srEM_io_m_memory_write_enable; // @[src/main/scala/riscv/core/CPU.scala 153:30]
  assign mem_io_funct3 = srEM_io_m_funct3; // @[src/main/scala/riscv/core/CPU.scala 154:30]
  assign mem_io_memory_bundle_read_data = io_memory_bundle_read_data; // @[src/main/scala/riscv/core/CPU.scala 163:34]
  assign wb_io_next_pc = srMW_io_w_next_pc; // @[src/main/scala/riscv/core/CPU.scala 173:27]
  assign wb_io_alu_result = srMW_io_w_alu_result; // @[src/main/scala/riscv/core/CPU.scala 174:27]
  assign wb_io_memory_read_data = srMW_io_w_mem_read_data; // @[src/main/scala/riscv/core/CPU.scala 175:27]
  assign wb_io_regs_write_source = srMW_io_w_wb_src; // @[src/main/scala/riscv/core/CPU.scala 176:27]
  assign hazard_unit_io_rs1_ex = srDE_io_e_rs1; // @[src/main/scala/riscv/core/CPU.scala 40:36]
  assign hazard_unit_io_rs2_ex = srDE_io_e_rs2; // @[src/main/scala/riscv/core/CPU.scala 41:36]
  assign hazard_unit_io_rd_mem = srEM_io_m_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 42:36]
  assign hazard_unit_io_rd_wb = srMW_io_w_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 43:36]
  assign hazard_unit_io_reg_wr_enable_mem = srEM_io_m_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 44:36]
  assign hazard_unit_io_reg_wr_enable_wb = srMW_io_w_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 45:36]
  assign hazard_unit_io_rs1_d = id_io_regs_reg1_read_address; // @[src/main/scala/riscv/core/CPU.scala 46:36]
  assign hazard_unit_io_rs2_d = id_io_regs_reg2_read_address; // @[src/main/scala/riscv/core/CPU.scala 47:36]
  assign hazard_unit_io_rd_ex = srDE_io_e_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 48:36]
  assign hazard_unit_io_ex_regs_write_src = srDE_io_e_wb_src; // @[src/main/scala/riscv/core/CPU.scala 49:36]
  assign hazard_unit_io_ex_jump_flag = ex_io_if_jump_flag; // @[src/main/scala/riscv/core/CPU.scala 50:36]
  assign srFD_clock = clock;
  assign srFD_reset = hazard_unit_io_srFD_flush;
  assign srFD_io_f_instruction = inst_fetch_io_instruction; // @[src/main/scala/riscv/core/CPU.scala 67:25]
  assign srFD_io_f_current_pc = inst_fetch_io_current_pc; // @[src/main/scala/riscv/core/CPU.scala 68:25]
  assign srFD_io_f_next_pc = inst_fetch_io_next_pc; // @[src/main/scala/riscv/core/CPU.scala 69:25]
  assign srFD_io_stall = hazard_unit_io_srFD_stall; // @[src/main/scala/riscv/core/CPU.scala 70:25]
  assign srDE_clock = clock;
  assign srDE_reset = hazard_unit_io_srDE_flush;
  assign srDE_io_d_ex_alu_func = id_io_ex_alu_func; // @[src/main/scala/riscv/core/CPU.scala 93:33]
  assign srDE_io_d_ex_aluop1_source = id_io_ex_aluop1_source; // @[src/main/scala/riscv/core/CPU.scala 94:33]
  assign srDE_io_d_ex_aluop2_source = id_io_ex_aluop2_source; // @[src/main/scala/riscv/core/CPU.scala 95:33]
  assign srDE_io_d_memory_read_enable = id_io_memory_read_enable; // @[src/main/scala/riscv/core/CPU.scala 96:33]
  assign srDE_io_d_memory_write_enable = id_io_memory_write_enable; // @[src/main/scala/riscv/core/CPU.scala 97:33]
  assign srDE_io_d_wb_src = id_io_wb_src; // @[src/main/scala/riscv/core/CPU.scala 98:33]
  assign srDE_io_d_reg_write_enable = id_io_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 99:33]
  assign srDE_io_d_reg_write_address = id_io_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 100:33]
  assign srDE_io_d_rs1 = id_io_regs_reg1_read_address; // @[src/main/scala/riscv/core/CPU.scala 101:33]
  assign srDE_io_d_rs2 = id_io_regs_reg2_read_address; // @[src/main/scala/riscv/core/CPU.scala 102:33]
  assign srDE_io_d_ex_immediate = id_io_ex_immediate; // @[src/main/scala/riscv/core/CPU.scala 92:33]
  assign srDE_io_d_current_pc = srFD_io_d_current_pc; // @[src/main/scala/riscv/core/CPU.scala 85:33]
  assign srDE_io_d_next_pc = srFD_io_d_next_pc; // @[src/main/scala/riscv/core/CPU.scala 86:33]
  assign srDE_io_d_opcode = srFD_io_d_instruction[6:0]; // @[src/main/scala/riscv/core/CPU.scala 87:57]
  assign srDE_io_d_func3 = {{4'd0}, srFD_io_d_instruction[14:12]}; // @[src/main/scala/riscv/core/CPU.scala 88:33]
  assign srDE_io_d_regs_read_data_1 = regs_io_read_data1; // @[src/main/scala/riscv/core/CPU.scala 90:33]
  assign srDE_io_d_regs_read_data_2 = regs_io_read_data2; // @[src/main/scala/riscv/core/CPU.scala 91:33]
  assign srEM_clock = clock;
  assign srEM_reset = reset;
  assign srEM_io_e_alu_result = ex_io_mem_alu_result; // @[src/main/scala/riscv/core/CPU.scala 124:33]
  assign srEM_io_e_regs_read_data_2 = ex_io_mem_reg2_data; // @[src/main/scala/riscv/core/CPU.scala 144:33]
  assign srEM_io_e_memory_read_enable = srDE_io_e_memory_read_enable; // @[src/main/scala/riscv/core/CPU.scala 126:33]
  assign srEM_io_e_memory_write_enable = srDE_io_e_memory_write_enable; // @[src/main/scala/riscv/core/CPU.scala 127:33]
  assign srEM_io_e_funct3 = srDE_io_e_func3[2:0]; // @[src/main/scala/riscv/core/CPU.scala 125:33]
  assign srEM_io_e_next_pc = srDE_io_e_next_pc; // @[src/main/scala/riscv/core/CPU.scala 145:33]
  assign srEM_io_e_wb_src = srDE_io_e_wb_src; // @[src/main/scala/riscv/core/CPU.scala 146:33]
  assign srEM_io_e_reg_write_enable = srDE_io_e_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 147:33]
  assign srEM_io_e_reg_write_address = srDE_io_e_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 148:33]
  assign srMW_clock = clock;
  assign srMW_reset = reset;
  assign srMW_io_m_alu_result = srEM_io_m_alu_result; // @[src/main/scala/riscv/core/CPU.scala 166:31]
  assign srMW_io_m_mem_read_data = mem_io_wb_memory_read_data; // @[src/main/scala/riscv/core/CPU.scala 167:31]
  assign srMW_io_m_next_pc = srEM_io_m_next_pc; // @[src/main/scala/riscv/core/CPU.scala 168:31]
  assign srMW_io_m_wb_src = srEM_io_m_wb_src; // @[src/main/scala/riscv/core/CPU.scala 169:31]
  assign srMW_io_m_reg_write_enable = srEM_io_m_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 170:31]
  assign srMW_io_m_reg_write_address = srEM_io_m_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 171:31]
endmodule
module TestTopModule(
  input         clock,
  input         reset,
  input  [31:0] io_mem_debug_read_address, // @[src/test/scala/riscv/TestTopModule.scala 22:14]
  input  [4:0]  io_regs_debug_read_address, // @[src/test/scala/riscv/TestTopModule.scala 22:14]
  output [31:0] io_regs_debug_read_data, // @[src/test/scala/riscv/TestTopModule.scala 22:14]
  output [31:0] io_mem_debug_read_data, // @[src/test/scala/riscv/TestTopModule.scala 22:14]
  output        io_instruction_valid // @[src/test/scala/riscv/TestTopModule.scala 22:14]
);
  wire  mem_clock; // @[src/test/scala/riscv/TestTopModule.scala 58:31]
  wire [31:0] mem_io_bundle_address; // @[src/test/scala/riscv/TestTopModule.scala 58:31]
  wire [31:0] mem_io_bundle_write_data; // @[src/test/scala/riscv/TestTopModule.scala 58:31]
  wire  mem_io_bundle_write_enable; // @[src/test/scala/riscv/TestTopModule.scala 58:31]
  wire  mem_io_bundle_write_strobe_0; // @[src/test/scala/riscv/TestTopModule.scala 58:31]
  wire  mem_io_bundle_write_strobe_1; // @[src/test/scala/riscv/TestTopModule.scala 58:31]
  wire  mem_io_bundle_write_strobe_2; // @[src/test/scala/riscv/TestTopModule.scala 58:31]
  wire  mem_io_bundle_write_strobe_3; // @[src/test/scala/riscv/TestTopModule.scala 58:31]
  wire [31:0] mem_io_bundle_read_data; // @[src/test/scala/riscv/TestTopModule.scala 58:31]
  wire [31:0] mem_io_instruction; // @[src/test/scala/riscv/TestTopModule.scala 58:31]
  wire [31:0] mem_io_instruction_address; // @[src/test/scala/riscv/TestTopModule.scala 58:31]
  wire [31:0] mem_io_debug_read_address; // @[src/test/scala/riscv/TestTopModule.scala 58:31]
  wire [31:0] mem_io_debug_read_data; // @[src/test/scala/riscv/TestTopModule.scala 58:31]
  wire  instruction_rom_clock; // @[src/test/scala/riscv/TestTopModule.scala 59:31]
  wire [31:0] instruction_rom_io_address; // @[src/test/scala/riscv/TestTopModule.scala 59:31]
  wire [31:0] instruction_rom_io_data; // @[src/test/scala/riscv/TestTopModule.scala 59:31]
  wire  rom_loader_clock; // @[src/test/scala/riscv/TestTopModule.scala 60:31]
  wire  rom_loader_reset; // @[src/test/scala/riscv/TestTopModule.scala 60:31]
  wire [31:0] rom_loader_io_bundle_address; // @[src/test/scala/riscv/TestTopModule.scala 60:31]
  wire [31:0] rom_loader_io_bundle_write_data; // @[src/test/scala/riscv/TestTopModule.scala 60:31]
  wire  rom_loader_io_bundle_write_enable; // @[src/test/scala/riscv/TestTopModule.scala 60:31]
  wire  rom_loader_io_bundle_write_strobe_0; // @[src/test/scala/riscv/TestTopModule.scala 60:31]
  wire  rom_loader_io_bundle_write_strobe_1; // @[src/test/scala/riscv/TestTopModule.scala 60:31]
  wire  rom_loader_io_bundle_write_strobe_2; // @[src/test/scala/riscv/TestTopModule.scala 60:31]
  wire  rom_loader_io_bundle_write_strobe_3; // @[src/test/scala/riscv/TestTopModule.scala 60:31]
  wire [31:0] rom_loader_io_rom_address; // @[src/test/scala/riscv/TestTopModule.scala 60:31]
  wire [31:0] rom_loader_io_rom_data; // @[src/test/scala/riscv/TestTopModule.scala 60:31]
  wire  rom_loader_io_load_finished; // @[src/test/scala/riscv/TestTopModule.scala 60:31]
  wire  cpu_clock; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire  cpu_reset; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire [31:0] cpu_io_instruction_address; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire [31:0] cpu_io_instruction; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire [31:0] cpu_io_memory_bundle_address; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire [31:0] cpu_io_memory_bundle_write_data; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire  cpu_io_memory_bundle_write_enable; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire  cpu_io_memory_bundle_write_strobe_0; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire  cpu_io_memory_bundle_write_strobe_1; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire  cpu_io_memory_bundle_write_strobe_2; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire  cpu_io_memory_bundle_write_strobe_3; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire [31:0] cpu_io_memory_bundle_read_data; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire  cpu_io_instruction_valid; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire [4:0] cpu_io_debug_read_address; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  wire [31:0] cpu_io_debug_read_data; // @[src/test/scala/riscv/TestTopModule.scala 75:21]
  Memory mem ( // @[src/test/scala/riscv/TestTopModule.scala 58:31]
    .clock(mem_clock),
    .io_bundle_address(mem_io_bundle_address),
    .io_bundle_write_data(mem_io_bundle_write_data),
    .io_bundle_write_enable(mem_io_bundle_write_enable),
    .io_bundle_write_strobe_0(mem_io_bundle_write_strobe_0),
    .io_bundle_write_strobe_1(mem_io_bundle_write_strobe_1),
    .io_bundle_write_strobe_2(mem_io_bundle_write_strobe_2),
    .io_bundle_write_strobe_3(mem_io_bundle_write_strobe_3),
    .io_bundle_read_data(mem_io_bundle_read_data),
    .io_instruction(mem_io_instruction),
    .io_instruction_address(mem_io_instruction_address),
    .io_debug_read_address(mem_io_debug_read_address),
    .io_debug_read_data(mem_io_debug_read_data)
  );
  InstructionROM instruction_rom ( // @[src/test/scala/riscv/TestTopModule.scala 59:31]
    .clock(instruction_rom_clock),
    .io_address(instruction_rom_io_address),
    .io_data(instruction_rom_io_data)
  );
  ROMLoader rom_loader ( // @[src/test/scala/riscv/TestTopModule.scala 60:31]
    .clock(rom_loader_clock),
    .reset(rom_loader_reset),
    .io_bundle_address(rom_loader_io_bundle_address),
    .io_bundle_write_data(rom_loader_io_bundle_write_data),
    .io_bundle_write_enable(rom_loader_io_bundle_write_enable),
    .io_bundle_write_strobe_0(rom_loader_io_bundle_write_strobe_0),
    .io_bundle_write_strobe_1(rom_loader_io_bundle_write_strobe_1),
    .io_bundle_write_strobe_2(rom_loader_io_bundle_write_strobe_2),
    .io_bundle_write_strobe_3(rom_loader_io_bundle_write_strobe_3),
    .io_rom_address(rom_loader_io_rom_address),
    .io_rom_data(rom_loader_io_rom_data),
    .io_load_finished(rom_loader_io_load_finished)
  );
  CPU cpu ( // @[src/test/scala/riscv/TestTopModule.scala 75:21]
    .clock(cpu_clock),
    .reset(cpu_reset),
    .io_instruction_address(cpu_io_instruction_address),
    .io_instruction(cpu_io_instruction),
    .io_memory_bundle_address(cpu_io_memory_bundle_address),
    .io_memory_bundle_write_data(cpu_io_memory_bundle_write_data),
    .io_memory_bundle_write_enable(cpu_io_memory_bundle_write_enable),
    .io_memory_bundle_write_strobe_0(cpu_io_memory_bundle_write_strobe_0),
    .io_memory_bundle_write_strobe_1(cpu_io_memory_bundle_write_strobe_1),
    .io_memory_bundle_write_strobe_2(cpu_io_memory_bundle_write_strobe_2),
    .io_memory_bundle_write_strobe_3(cpu_io_memory_bundle_write_strobe_3),
    .io_memory_bundle_read_data(cpu_io_memory_bundle_read_data),
    .io_instruction_valid(cpu_io_instruction_valid),
    .io_debug_read_address(cpu_io_debug_read_address),
    .io_debug_read_data(cpu_io_debug_read_data)
  );
  assign io_regs_debug_read_data = cpu_io_debug_read_data; // @[src/test/scala/riscv/TestTopModule.scala 91:31]
  assign io_mem_debug_read_data = mem_io_debug_read_data; // @[src/test/scala/riscv/TestTopModule.scala 98:29]
  assign io_instruction_valid = rom_loader_io_load_finished; // @[src/test/scala/riscv/TestTopModule.scala 78:32]
  assign mem_clock = clock;
  assign mem_io_bundle_address = ~rom_loader_io_load_finished ? rom_loader_io_bundle_address :
    cpu_io_memory_bundle_address; // @[src/test/scala/riscv/TestTopModule.scala 82:40 83:28 87:28]
  assign mem_io_bundle_write_data = ~rom_loader_io_load_finished ? rom_loader_io_bundle_write_data :
    cpu_io_memory_bundle_write_data; // @[src/test/scala/riscv/TestTopModule.scala 82:40 83:28 87:28]
  assign mem_io_bundle_write_enable = ~rom_loader_io_load_finished ? rom_loader_io_bundle_write_enable :
    cpu_io_memory_bundle_write_enable; // @[src/test/scala/riscv/TestTopModule.scala 82:40 83:28 87:28]
  assign mem_io_bundle_write_strobe_0 = ~rom_loader_io_load_finished ? rom_loader_io_bundle_write_strobe_0 :
    cpu_io_memory_bundle_write_strobe_0; // @[src/test/scala/riscv/TestTopModule.scala 82:40 83:28 87:28]
  assign mem_io_bundle_write_strobe_1 = ~rom_loader_io_load_finished ? rom_loader_io_bundle_write_strobe_1 :
    cpu_io_memory_bundle_write_strobe_1; // @[src/test/scala/riscv/TestTopModule.scala 82:40 83:28 87:28]
  assign mem_io_bundle_write_strobe_2 = ~rom_loader_io_load_finished ? rom_loader_io_bundle_write_strobe_2 :
    cpu_io_memory_bundle_write_strobe_2; // @[src/test/scala/riscv/TestTopModule.scala 82:40 83:28 87:28]
  assign mem_io_bundle_write_strobe_3 = ~rom_loader_io_load_finished ? rom_loader_io_bundle_write_strobe_3 :
    cpu_io_memory_bundle_write_strobe_3; // @[src/test/scala/riscv/TestTopModule.scala 82:40 83:28 87:28]
  assign mem_io_instruction_address = cpu_io_instruction_address; // @[src/test/scala/riscv/TestTopModule.scala 79:32]
  assign mem_io_debug_read_address = io_mem_debug_read_address; // @[src/test/scala/riscv/TestTopModule.scala 97:29]
  assign instruction_rom_clock = clock;
  assign instruction_rom_io_address = rom_loader_io_rom_address; // @[src/test/scala/riscv/TestTopModule.scala 64:30]
  assign rom_loader_clock = clock;
  assign rom_loader_reset = reset;
  assign rom_loader_io_rom_data = instruction_rom_io_data; // @[src/test/scala/riscv/TestTopModule.scala 62:30]
  assign cpu_clock = clock;
  assign cpu_reset = reset;
  assign cpu_io_instruction = mem_io_instruction; // @[src/test/scala/riscv/TestTopModule.scala 80:32]
  assign cpu_io_memory_bundle_read_data = ~rom_loader_io_load_finished ? 32'h0 : mem_io_bundle_read_data; // @[src/test/scala/riscv/TestTopModule.scala 82:40 84:38 87:28]
  assign cpu_io_instruction_valid = rom_loader_io_load_finished; // @[src/test/scala/riscv/TestTopModule.scala 77:32]
  assign cpu_io_debug_read_address = io_regs_debug_read_address; // @[src/test/scala/riscv/TestTopModule.scala 90:31]
endmodule
