module RegisterFile(
  input         clock,
  input         reset,
  input         io_write_enable, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [4:0]  io_write_address, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [31:0] io_write_data, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [4:0]  io_read_address1, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [4:0]  io_read_address2, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  output [31:0] io_read_data1, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  output [31:0] io_read_data2 // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
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
  assign io_read_data1 = _io_read_data1_T ? 32'h0 : _GEN_127; // @[src/main/scala/riscv/core/RegisterFile.scala 37:23]
  assign io_read_data2 = _io_read_data2_T ? 32'h0 : _GEN_159; // @[src/main/scala/riscv/core/RegisterFile.scala 43:23]
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
  output [31:0] io_instruction_address, // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  output [31:0] io_instruction // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[src/main/scala/riscv/core/InstructionFetch.scala 23:19]
  wire [31:0] _pc_T_1 = pc + 32'h4; // @[src/main/scala/riscv/core/InstructionFetch.scala 29:56]
  assign io_instruction_address = pc; // @[src/main/scala/riscv/core/InstructionFetch.scala 37:26]
  assign io_instruction = io_instruction_valid ? io_instruction_read_data : 32'h13; // @[src/main/scala/riscv/core/InstructionFetch.scala 25:30 26:20 35:20]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/riscv/core/InstructionFetch.scala 23:19]
      pc <= 32'h1000; // @[src/main/scala/riscv/core/InstructionFetch.scala 23:19]
    end else if (io_instruction_valid) begin // @[src/main/scala/riscv/core/InstructionFetch.scala 25:30]
      if (io_jump_flag_id) begin // @[src/main/scala/riscv/core/InstructionFetch.scala 29:15]
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
module InstructionDecode(
  input  [31:0] io_instruction, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [4:0]  io_regs_reg1_read_address, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [4:0]  io_regs_reg2_read_address, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [31:0] io_ex_immediate, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_ex_aluop1_source, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_ex_aluop2_source, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_memory_read_enable, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_memory_write_enable, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [1:0]  io_wb_reg_write_source, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_reg_write_enable, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [4:0]  io_reg_write_address // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
);
  wire [6:0] opcode = io_instruction[6:0]; // @[src/main/scala/riscv/core/InstructionDecode.scala 141:30]
  wire [4:0] rd = io_instruction[11:7]; // @[src/main/scala/riscv/core/InstructionDecode.scala 144:30]
  wire [4:0] rs1 = io_instruction[19:15]; // @[src/main/scala/riscv/core/InstructionDecode.scala 145:30]
  wire  _io_regs_reg1_read_address_T = opcode == 7'h37; // @[src/main/scala/riscv/core/InstructionDecode.scala 148:43]
  wire [19:0] _immediate_T_2 = io_instruction[31] ? 20'hfffff : 20'h0; // @[src/main/scala/riscv/core/InstructionDecode.scala 152:13]
  wire [31:0] _immediate_T_4 = {_immediate_T_2,io_instruction[31:20]}; // @[src/main/scala/riscv/core/InstructionDecode.scala 152:8]
  wire [20:0] _immediate_T_7 = io_instruction[31] ? 21'h1fffff : 21'h0; // @[src/main/scala/riscv/core/InstructionDecode.scala 154:37]
  wire [31:0] _immediate_T_9 = {_immediate_T_7,io_instruction[30:20]}; // @[src/main/scala/riscv/core/InstructionDecode.scala 154:32]
  wire [31:0] _immediate_T_25 = {_immediate_T_7,io_instruction[30:25],rd}; // @[src/main/scala/riscv/core/InstructionDecode.scala 157:32]
  wire [31:0] _immediate_T_32 = {_immediate_T_2,io_instruction[7],io_instruction[30:25],io_instruction[11:8],1'h0}; // @[src/main/scala/riscv/core/InstructionDecode.scala 158:32]
  wire [31:0] _immediate_T_34 = {io_instruction[31:12],12'h0}; // @[src/main/scala/riscv/core/InstructionDecode.scala 165:32]
  wire [11:0] _immediate_T_39 = io_instruction[31] ? 12'hfff : 12'h0; // @[src/main/scala/riscv/core/InstructionDecode.scala 170:13]
  wire [31:0] _immediate_T_43 = {_immediate_T_39,io_instruction[19:12],io_instruction[20],io_instruction[30:21],1'h0}; // @[src/main/scala/riscv/core/InstructionDecode.scala 169:30]
  wire [31:0] _immediate_T_45 = 7'h13 == opcode ? _immediate_T_9 : _immediate_T_4; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_47 = 7'h3 == opcode ? _immediate_T_9 : _immediate_T_45; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_49 = 7'h67 == opcode ? _immediate_T_9 : _immediate_T_47; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_51 = 7'h23 == opcode ? _immediate_T_25 : _immediate_T_49; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_53 = 7'h63 == opcode ? _immediate_T_32 : _immediate_T_51; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_55 = 7'h37 == opcode ? _immediate_T_34 : _immediate_T_53; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_57 = 7'h17 == opcode ? _immediate_T_34 : _immediate_T_55; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_ex_aluop1_source_T = opcode == 7'h17; // @[src/main/scala/riscv/core/InstructionDecode.scala 180:12]
  wire  _io_ex_aluop1_source_T_3 = opcode == 7'h6f; // @[src/main/scala/riscv/core/InstructionDecode.scala 180:78]
  wire  _io_ex_aluop2_source_T = opcode == 7'h33; // @[src/main/scala/riscv/core/InstructionDecode.scala 193:12]
  wire  _io_memory_read_enable_T = opcode == 7'h3; // @[src/main/scala/riscv/core/InstructionDecode.scala 202:12]
  wire  _io_wb_reg_write_source_T_4 = _io_ex_aluop2_source_T | opcode == 7'h13; // @[src/main/scala/riscv/core/InstructionDecode.scala 225:39]
  wire  _io_wb_reg_write_source_T_6 = _io_ex_aluop2_source_T | opcode == 7'h13 | _io_regs_reg1_read_address_T; // @[src/main/scala/riscv/core/InstructionDecode.scala 225:72]
  wire  _io_wb_reg_write_source_T_8 = _io_wb_reg_write_source_T_6 | _io_ex_aluop1_source_T; // @[src/main/scala/riscv/core/InstructionDecode.scala 226:37]
  wire  _io_wb_reg_write_source_T_11 = opcode == 7'h67; // @[src/main/scala/riscv/core/InstructionDecode.scala 228:46]
  wire  _io_wb_reg_write_source_T_12 = _io_ex_aluop1_source_T_3 | opcode == 7'h67; // @[src/main/scala/riscv/core/InstructionDecode.scala 228:36]
  wire [1:0] _io_wb_reg_write_source_T_13 = _io_wb_reg_write_source_T_12 ? 2'h3 : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [1:0] _io_wb_reg_write_source_T_14 = _io_memory_read_enable_T ? 2'h1 : _io_wb_reg_write_source_T_13; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire  _io_reg_write_enable_T_4 = _io_wb_reg_write_source_T_4 | _io_memory_read_enable_T; // @[src/main/scala/riscv/core/InstructionDecode.scala 232:94]
  wire  _io_reg_write_enable_T_10 = _io_reg_write_enable_T_4 | _io_ex_aluop1_source_T | _io_regs_reg1_read_address_T |
    _io_ex_aluop1_source_T_3; // @[src/main/scala/riscv/core/InstructionDecode.scala 233:105]
  assign io_regs_reg1_read_address = opcode == 7'h37 ? 5'h0 : rs1; // @[src/main/scala/riscv/core/InstructionDecode.scala 148:35]
  assign io_regs_reg2_read_address = io_instruction[24:20]; // @[src/main/scala/riscv/core/InstructionDecode.scala 146:30]
  assign io_ex_immediate = 7'h6f == opcode ? _immediate_T_43 : _immediate_T_57; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  assign io_ex_aluop1_source = opcode == 7'h17 | opcode == 7'h63 | opcode == 7'h6f; // @[src/main/scala/riscv/core/InstructionDecode.scala 180:68]
  assign io_ex_aluop2_source = _io_ex_aluop2_source_T ? 1'h0 : 1'h1; // @[src/main/scala/riscv/core/InstructionDecode.scala 192:29]
  assign io_memory_read_enable = opcode == 7'h3; // @[src/main/scala/riscv/core/InstructionDecode.scala 202:12]
  assign io_memory_write_enable = opcode == 7'h23; // @[src/main/scala/riscv/core/InstructionDecode.scala 208:12]
  assign io_wb_reg_write_source = _io_wb_reg_write_source_T_8 ? 2'h0 : _io_wb_reg_write_source_T_14; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  assign io_reg_write_enable = _io_reg_write_enable_T_10 | _io_wb_reg_write_source_T_11; // @[src/main/scala/riscv/core/InstructionDecode.scala 234:35]
  assign io_reg_write_address = io_instruction[11:7]; // @[src/main/scala/riscv/core/InstructionDecode.scala 144:30]
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
module Execute(
  input  [31:0] io_instruction, // @[src/main/scala/riscv/core/Execute.scala 13:14]
  input  [31:0] io_instruction_address, // @[src/main/scala/riscv/core/Execute.scala 13:14]
  input  [31:0] io_reg1_data, // @[src/main/scala/riscv/core/Execute.scala 13:14]
  input  [31:0] io_reg2_data, // @[src/main/scala/riscv/core/Execute.scala 13:14]
  input  [31:0] io_immediate, // @[src/main/scala/riscv/core/Execute.scala 13:14]
  input         io_aluop1_source, // @[src/main/scala/riscv/core/Execute.scala 13:14]
  input         io_aluop2_source, // @[src/main/scala/riscv/core/Execute.scala 13:14]
  output [31:0] io_mem_alu_result, // @[src/main/scala/riscv/core/Execute.scala 13:14]
  output        io_if_jump_flag, // @[src/main/scala/riscv/core/Execute.scala 13:14]
  output [31:0] io_if_jump_address // @[src/main/scala/riscv/core/Execute.scala 13:14]
);
  wire [3:0] alu_io_func; // @[src/main/scala/riscv/core/Execute.scala 33:24]
  wire [31:0] alu_io_op1; // @[src/main/scala/riscv/core/Execute.scala 33:24]
  wire [31:0] alu_io_op2; // @[src/main/scala/riscv/core/Execute.scala 33:24]
  wire [31:0] alu_io_result; // @[src/main/scala/riscv/core/Execute.scala 33:24]
  wire [6:0] alu_ctrl_io_opcode; // @[src/main/scala/riscv/core/Execute.scala 34:24]
  wire [2:0] alu_ctrl_io_funct3; // @[src/main/scala/riscv/core/Execute.scala 34:24]
  wire [6:0] alu_ctrl_io_funct7; // @[src/main/scala/riscv/core/Execute.scala 34:24]
  wire [3:0] alu_ctrl_io_alu_funct; // @[src/main/scala/riscv/core/Execute.scala 34:24]
  wire [6:0] opcode = io_instruction[6:0]; // @[src/main/scala/riscv/core/Execute.scala 27:30]
  wire [2:0] funct3 = io_instruction[14:12]; // @[src/main/scala/riscv/core/Execute.scala 28:30]
  wire  _io_if_jump_flag_T_1 = opcode == 7'h67; // @[src/main/scala/riscv/core/Execute.scala 63:13]
  wire  _io_if_jump_flag_T_2 = opcode == 7'h6f | _io_if_jump_flag_T_1; // @[src/main/scala/riscv/core/Execute.scala 62:50]
  wire  _io_if_jump_flag_T_4 = io_reg1_data == io_reg2_data; // @[src/main/scala/riscv/core/Execute.scala 68:49]
  wire  _io_if_jump_flag_T_5 = io_reg1_data != io_reg2_data; // @[src/main/scala/riscv/core/Execute.scala 69:49]
  wire  _io_if_jump_flag_T_8 = $signed(io_reg1_data) < $signed(io_reg2_data); // @[src/main/scala/riscv/core/Execute.scala 70:56]
  wire  _io_if_jump_flag_T_11 = $signed(io_reg1_data) >= $signed(io_reg2_data); // @[src/main/scala/riscv/core/Execute.scala 71:56]
  wire  _io_if_jump_flag_T_12 = io_reg1_data < io_reg2_data; // @[src/main/scala/riscv/core/Execute.scala 72:56]
  wire  _io_if_jump_flag_T_13 = io_reg1_data >= io_reg2_data; // @[src/main/scala/riscv/core/Execute.scala 73:56]
  wire  _io_if_jump_flag_T_17 = 3'h1 == funct3 ? _io_if_jump_flag_T_5 : 3'h0 == funct3 & _io_if_jump_flag_T_4; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_if_jump_flag_T_19 = 3'h4 == funct3 ? _io_if_jump_flag_T_8 : _io_if_jump_flag_T_17; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_if_jump_flag_T_21 = 3'h5 == funct3 ? _io_if_jump_flag_T_11 : _io_if_jump_flag_T_19; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_if_jump_flag_T_23 = 3'h6 == funct3 ? _io_if_jump_flag_T_12 : _io_if_jump_flag_T_21; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_if_jump_flag_T_25 = 3'h7 == funct3 ? _io_if_jump_flag_T_13 : _io_if_jump_flag_T_23; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_if_jump_flag_T_26 = opcode == 7'h63 & _io_if_jump_flag_T_25; // @[src/main/scala/riscv/core/Execute.scala 64:37]
  wire [31:0] _io_if_jump_address_T_1 = _io_if_jump_flag_T_1 ? io_reg1_data : io_instruction_address; // @[src/main/scala/riscv/core/Execute.scala 76:43]
  ALU alu ( // @[src/main/scala/riscv/core/Execute.scala 33:24]
    .io_func(alu_io_func),
    .io_op1(alu_io_op1),
    .io_op2(alu_io_op2),
    .io_result(alu_io_result)
  );
  ALUControl alu_ctrl ( // @[src/main/scala/riscv/core/Execute.scala 34:24]
    .io_opcode(alu_ctrl_io_opcode),
    .io_funct3(alu_ctrl_io_funct3),
    .io_funct7(alu_ctrl_io_funct7),
    .io_alu_funct(alu_ctrl_io_alu_funct)
  );
  assign io_mem_alu_result = alu_io_result; // @[src/main/scala/riscv/core/Execute.scala 61:21]
  assign io_if_jump_flag = _io_if_jump_flag_T_2 | _io_if_jump_flag_T_26; // @[src/main/scala/riscv/core/Execute.scala 63:36]
  assign io_if_jump_address = io_immediate + _io_if_jump_address_T_1; // @[src/main/scala/riscv/core/Execute.scala 76:38]
  assign alu_io_func = alu_ctrl_io_alu_funct; // @[src/main/scala/riscv/core/Execute.scala 43:15]
  assign alu_io_op1 = io_aluop1_source ? io_instruction_address : io_reg1_data; // @[src/main/scala/riscv/core/Execute.scala 46:20]
  assign alu_io_op2 = io_aluop2_source ? io_immediate : io_reg2_data; // @[src/main/scala/riscv/core/Execute.scala 53:20]
  assign alu_ctrl_io_opcode = io_instruction[6:0]; // @[src/main/scala/riscv/core/Execute.scala 27:30]
  assign alu_ctrl_io_funct3 = io_instruction[14:12]; // @[src/main/scala/riscv/core/Execute.scala 28:30]
  assign alu_ctrl_io_funct7 = io_instruction[31:25]; // @[src/main/scala/riscv/core/Execute.scala 29:30]
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
  wire [1:0] mem_address_index = io_alu_result[1:0]; // @[src/main/scala/riscv/core/MemoryAccess.scala 25:40]
  wire [23:0] _io_wb_memory_read_data_T_2 = io_memory_bundle_read_data[31] ? 24'hffffff : 24'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 45:19]
  wire [31:0] _io_wb_memory_read_data_T_4 = {_io_wb_memory_read_data_T_2,io_memory_bundle_read_data[31:24]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 45:14]
  wire [23:0] _io_wb_memory_read_data_T_7 = io_memory_bundle_read_data[7] ? 24'hffffff : 24'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 47:28]
  wire [31:0] _io_wb_memory_read_data_T_9 = {_io_wb_memory_read_data_T_7,io_memory_bundle_read_data[7:0]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 47:23]
  wire [23:0] _io_wb_memory_read_data_T_12 = io_memory_bundle_read_data[15] ? 24'hffffff : 24'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 48:28]
  wire [31:0] _io_wb_memory_read_data_T_14 = {_io_wb_memory_read_data_T_12,io_memory_bundle_read_data[15:8]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 48:23]
  wire [23:0] _io_wb_memory_read_data_T_17 = io_memory_bundle_read_data[23] ? 24'hffffff : 24'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 49:28]
  wire [31:0] _io_wb_memory_read_data_T_19 = {_io_wb_memory_read_data_T_17,io_memory_bundle_read_data[23:16]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 49:23]
  wire  _io_wb_memory_read_data_T_20 = 2'h0 == mem_address_index; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_21 = 2'h0 == mem_address_index ? _io_wb_memory_read_data_T_9 :
    _io_wb_memory_read_data_T_4; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_wb_memory_read_data_T_22 = 2'h1 == mem_address_index; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_23 = 2'h1 == mem_address_index ? _io_wb_memory_read_data_T_14 :
    _io_wb_memory_read_data_T_21; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_wb_memory_read_data_T_24 = 2'h2 == mem_address_index; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_25 = 2'h2 == mem_address_index ? _io_wb_memory_read_data_T_19 :
    _io_wb_memory_read_data_T_23; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_28 = {24'h0,io_memory_bundle_read_data[31:24]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 54:14]
  wire [31:0] _io_wb_memory_read_data_T_31 = {24'h0,io_memory_bundle_read_data[7:0]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 56:23]
  wire [31:0] _io_wb_memory_read_data_T_34 = {24'h0,io_memory_bundle_read_data[15:8]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 57:23]
  wire [31:0] _io_wb_memory_read_data_T_37 = {24'h0,io_memory_bundle_read_data[23:16]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 58:23]
  wire [31:0] _io_wb_memory_read_data_T_39 = 2'h0 == mem_address_index ? _io_wb_memory_read_data_T_31 :
    _io_wb_memory_read_data_T_28; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_41 = 2'h1 == mem_address_index ? _io_wb_memory_read_data_T_34 :
    _io_wb_memory_read_data_T_39; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_43 = 2'h2 == mem_address_index ? _io_wb_memory_read_data_T_37 :
    _io_wb_memory_read_data_T_41; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_wb_memory_read_data_T_44 = mem_address_index == 2'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 62:29]
  wire [15:0] _io_wb_memory_read_data_T_47 = io_memory_bundle_read_data[15] ? 16'hffff : 16'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 63:19]
  wire [31:0] _io_wb_memory_read_data_T_49 = {_io_wb_memory_read_data_T_47,io_memory_bundle_read_data[15:0]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 63:14]
  wire [15:0] _io_wb_memory_read_data_T_52 = io_memory_bundle_read_data[31] ? 16'hffff : 16'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 64:19]
  wire [31:0] _io_wb_memory_read_data_T_54 = {_io_wb_memory_read_data_T_52,io_memory_bundle_read_data[31:16]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 64:14]
  wire [31:0] _io_wb_memory_read_data_T_55 = _io_wb_memory_read_data_T_44 ? _io_wb_memory_read_data_T_49 :
    _io_wb_memory_read_data_T_54; // @[src/main/scala/riscv/core/MemoryAccess.scala 61:36]
  wire [31:0] _io_wb_memory_read_data_T_59 = {16'h0,io_memory_bundle_read_data[15:0]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 68:14]
  wire [31:0] _io_wb_memory_read_data_T_62 = {16'h0,io_memory_bundle_read_data[31:16]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 69:14]
  wire [31:0] _io_wb_memory_read_data_T_63 = _io_wb_memory_read_data_T_44 ? _io_wb_memory_read_data_T_59 :
    _io_wb_memory_read_data_T_62; // @[src/main/scala/riscv/core/MemoryAccess.scala 66:37]
  wire [31:0] _io_wb_memory_read_data_T_65 = 3'h0 == io_funct3 ? _io_wb_memory_read_data_T_25 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_67 = 3'h4 == io_funct3 ? _io_wb_memory_read_data_T_43 :
    _io_wb_memory_read_data_T_65; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_69 = 3'h1 == io_funct3 ? _io_wb_memory_read_data_T_55 :
    _io_wb_memory_read_data_T_67; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_71 = 3'h5 == io_funct3 ? _io_wb_memory_read_data_T_63 :
    _io_wb_memory_read_data_T_69; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _io_wb_memory_read_data_T_73 = 3'h2 == io_funct3 ? io_memory_bundle_read_data :
    _io_wb_memory_read_data_T_71; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _GEN_3 = 2'h3 == mem_address_index; // @[src/main/scala/riscv/core/MemoryAccess.scala 77:35 79:{56,56}]
  wire [4:0] _io_memory_bundle_write_data_T_1 = {mem_address_index, 3'h0}; // @[src/main/scala/riscv/core/MemoryAccess.scala 83:97]
  wire [39:0] _GEN_0 = {{31'd0}, io_reg2_data[8:0]}; // @[src/main/scala/riscv/core/MemoryAccess.scala 83:75]
  wire [39:0] _io_memory_bundle_write_data_T_2 = _GEN_0 << _io_memory_bundle_write_data_T_1; // @[src/main/scala/riscv/core/MemoryAccess.scala 83:75]
  wire [32:0] _io_memory_bundle_write_data_T_5 = {io_reg2_data[16:0], 16'h0}; // @[src/main/scala/riscv/core/MemoryAccess.scala 99:11]
  wire [32:0] _GEN_6 = _io_wb_memory_read_data_T_44 ? {{16'd0}, io_reg2_data[16:0]} : _io_memory_bundle_write_data_T_5; // @[src/main/scala/riscv/core/MemoryAccess.scala 87:39 91:37 96:37]
  wire  _GEN_7 = _io_wb_memory_read_data_T_44 ? 1'h0 : 1'h1; // @[src/main/scala/riscv/core/MemoryAccess.scala 77:35 87:39 94:44]
  wire  _T_3 = io_funct3 == 3'h2; // @[src/main/scala/riscv/core/MemoryAccess.scala 101:26]
  wire  _GEN_13 = io_funct3 == 3'h1 ? _io_wb_memory_read_data_T_44 : _T_3; // @[src/main/scala/riscv/core/MemoryAccess.scala 86:52]
  wire [32:0] _GEN_15 = io_funct3 == 3'h1 ? _GEN_6 : {{1'd0}, io_reg2_data}; // @[src/main/scala/riscv/core/MemoryAccess.scala 75:35 86:52]
  wire  _GEN_16 = io_funct3 == 3'h1 ? _GEN_7 : _T_3; // @[src/main/scala/riscv/core/MemoryAccess.scala 86:52]
  wire  _GEN_18 = io_funct3 == 3'h0 ? _io_wb_memory_read_data_T_20 : _GEN_13; // @[src/main/scala/riscv/core/MemoryAccess.scala 78:46]
  wire  _GEN_19 = io_funct3 == 3'h0 ? _io_wb_memory_read_data_T_22 : _GEN_13; // @[src/main/scala/riscv/core/MemoryAccess.scala 78:46]
  wire  _GEN_20 = io_funct3 == 3'h0 ? _io_wb_memory_read_data_T_24 : _GEN_16; // @[src/main/scala/riscv/core/MemoryAccess.scala 78:46]
  wire  _GEN_21 = io_funct3 == 3'h0 ? _GEN_3 : _GEN_16; // @[src/main/scala/riscv/core/MemoryAccess.scala 78:46]
  wire [39:0] _GEN_22 = io_funct3 == 3'h0 ? _io_memory_bundle_write_data_T_2 : {{7'd0}, _GEN_15}; // @[src/main/scala/riscv/core/MemoryAccess.scala 78:46 83:35]
  wire [39:0] _GEN_23 = io_memory_write_enable ? _GEN_22 : 40'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 28:33 74:38]
  wire  _GEN_25 = io_memory_write_enable & _GEN_18; // @[src/main/scala/riscv/core/MemoryAccess.scala 34:33 74:38]
  wire  _GEN_26 = io_memory_write_enable & _GEN_19; // @[src/main/scala/riscv/core/MemoryAccess.scala 34:33 74:38]
  wire  _GEN_27 = io_memory_write_enable & _GEN_20; // @[src/main/scala/riscv/core/MemoryAccess.scala 34:33 74:38]
  wire  _GEN_28 = io_memory_write_enable & _GEN_21; // @[src/main/scala/riscv/core/MemoryAccess.scala 34:33 74:38]
  wire [39:0] _GEN_30 = io_memory_read_enable ? 40'h0 : _GEN_23; // @[src/main/scala/riscv/core/MemoryAccess.scala 37:31 28:33]
  assign io_wb_memory_read_data = io_memory_read_enable ? _io_wb_memory_read_data_T_73 : 32'h0; // @[src/main/scala/riscv/core/MemoryAccess.scala 37:31 39:28 35:33]
  assign io_memory_bundle_address = io_alu_result; // @[src/main/scala/riscv/core/MemoryAccess.scala 29:33]
  assign io_memory_bundle_write_data = _GEN_30[31:0];
  assign io_memory_bundle_write_enable = io_memory_read_enable ? 1'h0 : io_memory_write_enable; // @[src/main/scala/riscv/core/MemoryAccess.scala 37:31 27:33]
  assign io_memory_bundle_write_strobe_0 = io_memory_read_enable ? 1'h0 : _GEN_25; // @[src/main/scala/riscv/core/MemoryAccess.scala 37:31 34:33]
  assign io_memory_bundle_write_strobe_1 = io_memory_read_enable ? 1'h0 : _GEN_26; // @[src/main/scala/riscv/core/MemoryAccess.scala 37:31 34:33]
  assign io_memory_bundle_write_strobe_2 = io_memory_read_enable ? 1'h0 : _GEN_27; // @[src/main/scala/riscv/core/MemoryAccess.scala 37:31 34:33]
  assign io_memory_bundle_write_strobe_3 = io_memory_read_enable ? 1'h0 : _GEN_28; // @[src/main/scala/riscv/core/MemoryAccess.scala 37:31 34:33]
endmodule
module WriteBack(
  input  [31:0] io_instruction_address, // @[src/main/scala/riscv/core/WriteBack.scala 11:14]
  input  [31:0] io_alu_result, // @[src/main/scala/riscv/core/WriteBack.scala 11:14]
  input  [31:0] io_memory_read_data, // @[src/main/scala/riscv/core/WriteBack.scala 11:14]
  input  [1:0]  io_regs_write_source, // @[src/main/scala/riscv/core/WriteBack.scala 11:14]
  output [31:0] io_regs_write_data // @[src/main/scala/riscv/core/WriteBack.scala 11:14]
);
  wire [31:0] _io_regs_write_data_T_1 = io_instruction_address + 32'h4; // @[src/main/scala/riscv/core/WriteBack.scala 23:72]
  wire [31:0] _io_regs_write_data_T_3 = 2'h1 == io_regs_write_source ? io_memory_read_data : io_alu_result; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  assign io_regs_write_data = 2'h3 == io_regs_write_source ? _io_regs_write_data_T_1 : _io_regs_write_data_T_3; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
endmodule
module CPU(
  input         clock,
  input         reset,
  output [31:0] io_instruction_address, // @[src/main/scala/riscv/core/CPU.scala 12:14]
  input  [31:0] io_instruction, // @[src/main/scala/riscv/core/CPU.scala 12:14]
  output [31:0] io_memory_bundle_address, // @[src/main/scala/riscv/core/CPU.scala 12:14]
  output [31:0] io_memory_bundle_write_data, // @[src/main/scala/riscv/core/CPU.scala 12:14]
  output        io_memory_bundle_write_enable, // @[src/main/scala/riscv/core/CPU.scala 12:14]
  output        io_memory_bundle_write_strobe_0, // @[src/main/scala/riscv/core/CPU.scala 12:14]
  output        io_memory_bundle_write_strobe_1, // @[src/main/scala/riscv/core/CPU.scala 12:14]
  output        io_memory_bundle_write_strobe_2, // @[src/main/scala/riscv/core/CPU.scala 12:14]
  output        io_memory_bundle_write_strobe_3, // @[src/main/scala/riscv/core/CPU.scala 12:14]
  input  [31:0] io_memory_bundle_read_data, // @[src/main/scala/riscv/core/CPU.scala 12:14]
  input         io_instruction_valid // @[src/main/scala/riscv/core/CPU.scala 12:14]
);
  wire  regs_clock; // @[src/main/scala/riscv/core/CPU.scala 14:26]
  wire  regs_reset; // @[src/main/scala/riscv/core/CPU.scala 14:26]
  wire  regs_io_write_enable; // @[src/main/scala/riscv/core/CPU.scala 14:26]
  wire [4:0] regs_io_write_address; // @[src/main/scala/riscv/core/CPU.scala 14:26]
  wire [31:0] regs_io_write_data; // @[src/main/scala/riscv/core/CPU.scala 14:26]
  wire [4:0] regs_io_read_address1; // @[src/main/scala/riscv/core/CPU.scala 14:26]
  wire [4:0] regs_io_read_address2; // @[src/main/scala/riscv/core/CPU.scala 14:26]
  wire [31:0] regs_io_read_data1; // @[src/main/scala/riscv/core/CPU.scala 14:26]
  wire [31:0] regs_io_read_data2; // @[src/main/scala/riscv/core/CPU.scala 14:26]
  wire  inst_fetch_clock; // @[src/main/scala/riscv/core/CPU.scala 15:26]
  wire  inst_fetch_reset; // @[src/main/scala/riscv/core/CPU.scala 15:26]
  wire  inst_fetch_io_jump_flag_id; // @[src/main/scala/riscv/core/CPU.scala 15:26]
  wire [31:0] inst_fetch_io_jump_address_id; // @[src/main/scala/riscv/core/CPU.scala 15:26]
  wire [31:0] inst_fetch_io_instruction_read_data; // @[src/main/scala/riscv/core/CPU.scala 15:26]
  wire  inst_fetch_io_instruction_valid; // @[src/main/scala/riscv/core/CPU.scala 15:26]
  wire [31:0] inst_fetch_io_instruction_address; // @[src/main/scala/riscv/core/CPU.scala 15:26]
  wire [31:0] inst_fetch_io_instruction; // @[src/main/scala/riscv/core/CPU.scala 15:26]
  wire [31:0] id_io_instruction; // @[src/main/scala/riscv/core/CPU.scala 16:26]
  wire [4:0] id_io_regs_reg1_read_address; // @[src/main/scala/riscv/core/CPU.scala 16:26]
  wire [4:0] id_io_regs_reg2_read_address; // @[src/main/scala/riscv/core/CPU.scala 16:26]
  wire [31:0] id_io_ex_immediate; // @[src/main/scala/riscv/core/CPU.scala 16:26]
  wire  id_io_ex_aluop1_source; // @[src/main/scala/riscv/core/CPU.scala 16:26]
  wire  id_io_ex_aluop2_source; // @[src/main/scala/riscv/core/CPU.scala 16:26]
  wire  id_io_memory_read_enable; // @[src/main/scala/riscv/core/CPU.scala 16:26]
  wire  id_io_memory_write_enable; // @[src/main/scala/riscv/core/CPU.scala 16:26]
  wire [1:0] id_io_wb_reg_write_source; // @[src/main/scala/riscv/core/CPU.scala 16:26]
  wire  id_io_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 16:26]
  wire [4:0] id_io_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 16:26]
  wire [31:0] ex_io_instruction; // @[src/main/scala/riscv/core/CPU.scala 17:26]
  wire [31:0] ex_io_instruction_address; // @[src/main/scala/riscv/core/CPU.scala 17:26]
  wire [31:0] ex_io_reg1_data; // @[src/main/scala/riscv/core/CPU.scala 17:26]
  wire [31:0] ex_io_reg2_data; // @[src/main/scala/riscv/core/CPU.scala 17:26]
  wire [31:0] ex_io_immediate; // @[src/main/scala/riscv/core/CPU.scala 17:26]
  wire  ex_io_aluop1_source; // @[src/main/scala/riscv/core/CPU.scala 17:26]
  wire  ex_io_aluop2_source; // @[src/main/scala/riscv/core/CPU.scala 17:26]
  wire [31:0] ex_io_mem_alu_result; // @[src/main/scala/riscv/core/CPU.scala 17:26]
  wire  ex_io_if_jump_flag; // @[src/main/scala/riscv/core/CPU.scala 17:26]
  wire [31:0] ex_io_if_jump_address; // @[src/main/scala/riscv/core/CPU.scala 17:26]
  wire [31:0] mem_io_alu_result; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire [31:0] mem_io_reg2_data; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire  mem_io_memory_read_enable; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire  mem_io_memory_write_enable; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire [2:0] mem_io_funct3; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire [31:0] mem_io_wb_memory_read_data; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire [31:0] mem_io_memory_bundle_address; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire [31:0] mem_io_memory_bundle_write_data; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire  mem_io_memory_bundle_write_enable; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire  mem_io_memory_bundle_write_strobe_0; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire  mem_io_memory_bundle_write_strobe_1; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire  mem_io_memory_bundle_write_strobe_2; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire  mem_io_memory_bundle_write_strobe_3; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire [31:0] mem_io_memory_bundle_read_data; // @[src/main/scala/riscv/core/CPU.scala 18:26]
  wire [31:0] wb_io_instruction_address; // @[src/main/scala/riscv/core/CPU.scala 19:26]
  wire [31:0] wb_io_alu_result; // @[src/main/scala/riscv/core/CPU.scala 19:26]
  wire [31:0] wb_io_memory_read_data; // @[src/main/scala/riscv/core/CPU.scala 19:26]
  wire [1:0] wb_io_regs_write_source; // @[src/main/scala/riscv/core/CPU.scala 19:26]
  wire [31:0] wb_io_regs_write_data; // @[src/main/scala/riscv/core/CPU.scala 19:26]
  RegisterFile regs ( // @[src/main/scala/riscv/core/CPU.scala 14:26]
    .clock(regs_clock),
    .reset(regs_reset),
    .io_write_enable(regs_io_write_enable),
    .io_write_address(regs_io_write_address),
    .io_write_data(regs_io_write_data),
    .io_read_address1(regs_io_read_address1),
    .io_read_address2(regs_io_read_address2),
    .io_read_data1(regs_io_read_data1),
    .io_read_data2(regs_io_read_data2)
  );
  InstructionFetch inst_fetch ( // @[src/main/scala/riscv/core/CPU.scala 15:26]
    .clock(inst_fetch_clock),
    .reset(inst_fetch_reset),
    .io_jump_flag_id(inst_fetch_io_jump_flag_id),
    .io_jump_address_id(inst_fetch_io_jump_address_id),
    .io_instruction_read_data(inst_fetch_io_instruction_read_data),
    .io_instruction_valid(inst_fetch_io_instruction_valid),
    .io_instruction_address(inst_fetch_io_instruction_address),
    .io_instruction(inst_fetch_io_instruction)
  );
  InstructionDecode id ( // @[src/main/scala/riscv/core/CPU.scala 16:26]
    .io_instruction(id_io_instruction),
    .io_regs_reg1_read_address(id_io_regs_reg1_read_address),
    .io_regs_reg2_read_address(id_io_regs_reg2_read_address),
    .io_ex_immediate(id_io_ex_immediate),
    .io_ex_aluop1_source(id_io_ex_aluop1_source),
    .io_ex_aluop2_source(id_io_ex_aluop2_source),
    .io_memory_read_enable(id_io_memory_read_enable),
    .io_memory_write_enable(id_io_memory_write_enable),
    .io_wb_reg_write_source(id_io_wb_reg_write_source),
    .io_reg_write_enable(id_io_reg_write_enable),
    .io_reg_write_address(id_io_reg_write_address)
  );
  Execute ex ( // @[src/main/scala/riscv/core/CPU.scala 17:26]
    .io_instruction(ex_io_instruction),
    .io_instruction_address(ex_io_instruction_address),
    .io_reg1_data(ex_io_reg1_data),
    .io_reg2_data(ex_io_reg2_data),
    .io_immediate(ex_io_immediate),
    .io_aluop1_source(ex_io_aluop1_source),
    .io_aluop2_source(ex_io_aluop2_source),
    .io_mem_alu_result(ex_io_mem_alu_result),
    .io_if_jump_flag(ex_io_if_jump_flag),
    .io_if_jump_address(ex_io_if_jump_address)
  );
  MemoryAccess mem ( // @[src/main/scala/riscv/core/CPU.scala 18:26]
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
  WriteBack wb ( // @[src/main/scala/riscv/core/CPU.scala 19:26]
    .io_instruction_address(wb_io_instruction_address),
    .io_alu_result(wb_io_alu_result),
    .io_memory_read_data(wb_io_memory_read_data),
    .io_regs_write_source(wb_io_regs_write_source),
    .io_regs_write_data(wb_io_regs_write_data)
  );
  assign io_instruction_address = inst_fetch_io_instruction_address; // @[src/main/scala/riscv/core/CPU.scala 28:39]
  assign io_memory_bundle_address = {3'h0,mem_io_memory_bundle_address[28:0]}; // @[src/main/scala/riscv/core/CPU.scala 59:34]
  assign io_memory_bundle_write_data = mem_io_memory_bundle_write_data; // @[src/main/scala/riscv/core/CPU.scala 64:34]
  assign io_memory_bundle_write_enable = mem_io_memory_bundle_write_enable; // @[src/main/scala/riscv/core/CPU.scala 63:34]
  assign io_memory_bundle_write_strobe_0 = mem_io_memory_bundle_write_strobe_0; // @[src/main/scala/riscv/core/CPU.scala 65:34]
  assign io_memory_bundle_write_strobe_1 = mem_io_memory_bundle_write_strobe_1; // @[src/main/scala/riscv/core/CPU.scala 65:34]
  assign io_memory_bundle_write_strobe_2 = mem_io_memory_bundle_write_strobe_2; // @[src/main/scala/riscv/core/CPU.scala 65:34]
  assign io_memory_bundle_write_strobe_3 = mem_io_memory_bundle_write_strobe_3; // @[src/main/scala/riscv/core/CPU.scala 65:34]
  assign regs_clock = clock;
  assign regs_reset = reset;
  assign regs_io_write_enable = id_io_reg_write_enable; // @[src/main/scala/riscv/core/CPU.scala 30:25]
  assign regs_io_write_address = id_io_reg_write_address; // @[src/main/scala/riscv/core/CPU.scala 31:25]
  assign regs_io_write_data = wb_io_regs_write_data; // @[src/main/scala/riscv/core/CPU.scala 32:25]
  assign regs_io_read_address1 = id_io_regs_reg1_read_address; // @[src/main/scala/riscv/core/CPU.scala 33:25]
  assign regs_io_read_address2 = id_io_regs_reg2_read_address; // @[src/main/scala/riscv/core/CPU.scala 34:25]
  assign inst_fetch_clock = clock;
  assign inst_fetch_reset = reset;
  assign inst_fetch_io_jump_flag_id = ex_io_if_jump_flag; // @[src/main/scala/riscv/core/CPU.scala 25:39]
  assign inst_fetch_io_jump_address_id = ex_io_if_jump_address; // @[src/main/scala/riscv/core/CPU.scala 24:39]
  assign inst_fetch_io_instruction_read_data = io_instruction; // @[src/main/scala/riscv/core/CPU.scala 27:39]
  assign inst_fetch_io_instruction_valid = io_instruction_valid; // @[src/main/scala/riscv/core/CPU.scala 26:39]
  assign id_io_instruction = inst_fetch_io_instruction; // @[src/main/scala/riscv/core/CPU.scala 39:21]
  assign ex_io_instruction = inst_fetch_io_instruction; // @[src/main/scala/riscv/core/CPU.scala 43:21]
  assign ex_io_instruction_address = inst_fetch_io_instruction_address; // @[src/main/scala/riscv/core/CPU.scala 44:29]
  assign ex_io_reg1_data = regs_io_read_data1; // @[src/main/scala/riscv/core/CPU.scala 45:19]
  assign ex_io_reg2_data = regs_io_read_data2; // @[src/main/scala/riscv/core/CPU.scala 46:19]
  assign ex_io_immediate = id_io_ex_immediate; // @[src/main/scala/riscv/core/CPU.scala 47:19]
  assign ex_io_aluop1_source = id_io_ex_aluop1_source; // @[src/main/scala/riscv/core/CPU.scala 48:23]
  assign ex_io_aluop2_source = id_io_ex_aluop2_source; // @[src/main/scala/riscv/core/CPU.scala 49:23]
  assign mem_io_alu_result = ex_io_mem_alu_result; // @[src/main/scala/riscv/core/CPU.scala 53:30]
  assign mem_io_reg2_data = regs_io_read_data2; // @[src/main/scala/riscv/core/CPU.scala 54:30]
  assign mem_io_memory_read_enable = id_io_memory_read_enable; // @[src/main/scala/riscv/core/CPU.scala 55:30]
  assign mem_io_memory_write_enable = id_io_memory_write_enable; // @[src/main/scala/riscv/core/CPU.scala 56:30]
  assign mem_io_funct3 = inst_fetch_io_instruction[14:12]; // @[src/main/scala/riscv/core/CPU.scala 57:58]
  assign mem_io_memory_bundle_read_data = io_memory_bundle_read_data; // @[src/main/scala/riscv/core/CPU.scala 66:34]
  assign wb_io_instruction_address = inst_fetch_io_instruction_address; // @[src/main/scala/riscv/core/CPU.scala 68:29]
  assign wb_io_alu_result = ex_io_mem_alu_result; // @[src/main/scala/riscv/core/CPU.scala 69:29]
  assign wb_io_memory_read_data = mem_io_wb_memory_read_data; // @[src/main/scala/riscv/core/CPU.scala 70:29]
  assign wb_io_regs_write_source = id_io_wb_reg_write_source; // @[src/main/scala/riscv/core/CPU.scala 71:29]
endmodule
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
  input  [31:0] io_instruction_address // @[src/main/scala/peripheral/Memory.scala 46:14]
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_21;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] mem_0 [0:8191]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_0_io_bundle_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_0_io_bundle_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_0_io_bundle_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_0_io_debug_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_0_io_debug_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_0_io_debug_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_0_io_instruction_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_0_io_instruction_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_0_io_instruction_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_0_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_0_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_0_MPORT_mask; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_0_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  reg  mem_0_io_bundle_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_0_io_bundle_read_data_MPORT_addr_pipe_0;
  reg  mem_0_io_debug_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_0_io_debug_read_data_MPORT_addr_pipe_0;
  reg  mem_0_io_instruction_MPORT_en_pipe_0;
  reg [12:0] mem_0_io_instruction_MPORT_addr_pipe_0;
  reg [7:0] mem_1 [0:8191]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_1_io_bundle_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_1_io_bundle_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_1_io_bundle_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_1_io_debug_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_1_io_debug_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_1_io_debug_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_1_io_instruction_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_1_io_instruction_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_1_io_instruction_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_1_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_1_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_1_MPORT_mask; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_1_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  reg  mem_1_io_bundle_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_1_io_bundle_read_data_MPORT_addr_pipe_0;
  reg  mem_1_io_debug_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_1_io_debug_read_data_MPORT_addr_pipe_0;
  reg  mem_1_io_instruction_MPORT_en_pipe_0;
  reg [12:0] mem_1_io_instruction_MPORT_addr_pipe_0;
  reg [7:0] mem_2 [0:8191]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_2_io_bundle_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_2_io_bundle_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_2_io_bundle_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_2_io_debug_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_2_io_debug_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_2_io_debug_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_2_io_instruction_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_2_io_instruction_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_2_io_instruction_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_2_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_2_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_2_MPORT_mask; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_2_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  reg  mem_2_io_bundle_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_2_io_bundle_read_data_MPORT_addr_pipe_0;
  reg  mem_2_io_debug_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_2_io_debug_read_data_MPORT_addr_pipe_0;
  reg  mem_2_io_instruction_MPORT_en_pipe_0;
  reg [12:0] mem_2_io_instruction_MPORT_addr_pipe_0;
  reg [7:0] mem_3 [0:8191]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_3_io_bundle_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_3_io_bundle_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_3_io_bundle_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_3_io_debug_read_data_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_3_io_debug_read_data_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_3_io_debug_read_data_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_3_io_instruction_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_3_io_instruction_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_3_io_instruction_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [7:0] mem_3_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire [12:0] mem_3_MPORT_addr; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_3_MPORT_mask; // @[src/main/scala/peripheral/Memory.scala 66:24]
  wire  mem_3_MPORT_en; // @[src/main/scala/peripheral/Memory.scala 66:24]
  reg  mem_3_io_bundle_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_3_io_bundle_read_data_MPORT_addr_pipe_0;
  reg  mem_3_io_debug_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_3_io_debug_read_data_MPORT_addr_pipe_0;
  reg  mem_3_io_instruction_MPORT_en_pipe_0;
  reg [12:0] mem_3_io_instruction_MPORT_addr_pipe_0;
  wire [31:0] _T = {{2'd0}, io_bundle_address[31:2]}; // @[src/main/scala/peripheral/Memory.scala 72:34]
  wire [15:0] io_bundle_read_data_lo = {mem_1_io_bundle_read_data_MPORT_data,mem_0_io_bundle_read_data_MPORT_data}; // @[src/main/scala/peripheral/Memory.scala 74:78]
  wire [15:0] io_bundle_read_data_hi = {mem_3_io_bundle_read_data_MPORT_data,mem_2_io_bundle_read_data_MPORT_data}; // @[src/main/scala/peripheral/Memory.scala 74:78]
  wire [31:0] _io_instruction_T = {{2'd0}, io_instruction_address[31:2]}; // @[src/main/scala/peripheral/Memory.scala 76:59]
  wire [15:0] io_instruction_lo = {mem_1_io_instruction_MPORT_data,mem_0_io_instruction_MPORT_data}; // @[src/main/scala/peripheral/Memory.scala 76:83]
  wire [15:0] io_instruction_hi = {mem_3_io_instruction_MPORT_data,mem_2_io_instruction_MPORT_data}; // @[src/main/scala/peripheral/Memory.scala 76:83]
  assign mem_0_io_bundle_read_data_MPORT_en = mem_0_io_bundle_read_data_MPORT_en_pipe_0;
  assign mem_0_io_bundle_read_data_MPORT_addr = mem_0_io_bundle_read_data_MPORT_addr_pipe_0;
  assign mem_0_io_bundle_read_data_MPORT_data = mem_0[mem_0_io_bundle_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  assign mem_0_io_debug_read_data_MPORT_en = mem_0_io_debug_read_data_MPORT_en_pipe_0;
  assign mem_0_io_debug_read_data_MPORT_addr = mem_0_io_debug_read_data_MPORT_addr_pipe_0;
  assign mem_0_io_debug_read_data_MPORT_data = mem_0[mem_0_io_debug_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  assign mem_0_io_instruction_MPORT_en = mem_0_io_instruction_MPORT_en_pipe_0;
  assign mem_0_io_instruction_MPORT_addr = mem_0_io_instruction_MPORT_addr_pipe_0;
  assign mem_0_io_instruction_MPORT_data = mem_0[mem_0_io_instruction_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  assign mem_0_MPORT_data = io_bundle_write_data[7:0];
  assign mem_0_MPORT_addr = _T[12:0];
  assign mem_0_MPORT_mask = io_bundle_write_strobe_0;
  assign mem_0_MPORT_en = io_bundle_write_enable;
  assign mem_1_io_bundle_read_data_MPORT_en = mem_1_io_bundle_read_data_MPORT_en_pipe_0;
  assign mem_1_io_bundle_read_data_MPORT_addr = mem_1_io_bundle_read_data_MPORT_addr_pipe_0;
  assign mem_1_io_bundle_read_data_MPORT_data = mem_1[mem_1_io_bundle_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  assign mem_1_io_debug_read_data_MPORT_en = mem_1_io_debug_read_data_MPORT_en_pipe_0;
  assign mem_1_io_debug_read_data_MPORT_addr = mem_1_io_debug_read_data_MPORT_addr_pipe_0;
  assign mem_1_io_debug_read_data_MPORT_data = mem_1[mem_1_io_debug_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  assign mem_1_io_instruction_MPORT_en = mem_1_io_instruction_MPORT_en_pipe_0;
  assign mem_1_io_instruction_MPORT_addr = mem_1_io_instruction_MPORT_addr_pipe_0;
  assign mem_1_io_instruction_MPORT_data = mem_1[mem_1_io_instruction_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  assign mem_1_MPORT_data = io_bundle_write_data[15:8];
  assign mem_1_MPORT_addr = _T[12:0];
  assign mem_1_MPORT_mask = io_bundle_write_strobe_1;
  assign mem_1_MPORT_en = io_bundle_write_enable;
  assign mem_2_io_bundle_read_data_MPORT_en = mem_2_io_bundle_read_data_MPORT_en_pipe_0;
  assign mem_2_io_bundle_read_data_MPORT_addr = mem_2_io_bundle_read_data_MPORT_addr_pipe_0;
  assign mem_2_io_bundle_read_data_MPORT_data = mem_2[mem_2_io_bundle_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  assign mem_2_io_debug_read_data_MPORT_en = mem_2_io_debug_read_data_MPORT_en_pipe_0;
  assign mem_2_io_debug_read_data_MPORT_addr = mem_2_io_debug_read_data_MPORT_addr_pipe_0;
  assign mem_2_io_debug_read_data_MPORT_data = mem_2[mem_2_io_debug_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  assign mem_2_io_instruction_MPORT_en = mem_2_io_instruction_MPORT_en_pipe_0;
  assign mem_2_io_instruction_MPORT_addr = mem_2_io_instruction_MPORT_addr_pipe_0;
  assign mem_2_io_instruction_MPORT_data = mem_2[mem_2_io_instruction_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  assign mem_2_MPORT_data = io_bundle_write_data[23:16];
  assign mem_2_MPORT_addr = _T[12:0];
  assign mem_2_MPORT_mask = io_bundle_write_strobe_2;
  assign mem_2_MPORT_en = io_bundle_write_enable;
  assign mem_3_io_bundle_read_data_MPORT_en = mem_3_io_bundle_read_data_MPORT_en_pipe_0;
  assign mem_3_io_bundle_read_data_MPORT_addr = mem_3_io_bundle_read_data_MPORT_addr_pipe_0;
  assign mem_3_io_bundle_read_data_MPORT_data = mem_3[mem_3_io_bundle_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  assign mem_3_io_debug_read_data_MPORT_en = mem_3_io_debug_read_data_MPORT_en_pipe_0;
  assign mem_3_io_debug_read_data_MPORT_addr = mem_3_io_debug_read_data_MPORT_addr_pipe_0;
  assign mem_3_io_debug_read_data_MPORT_data = mem_3[mem_3_io_debug_read_data_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  assign mem_3_io_instruction_MPORT_en = mem_3_io_instruction_MPORT_en_pipe_0;
  assign mem_3_io_instruction_MPORT_addr = mem_3_io_instruction_MPORT_addr_pipe_0;
  assign mem_3_io_instruction_MPORT_data = mem_3[mem_3_io_instruction_MPORT_addr]; // @[src/main/scala/peripheral/Memory.scala 66:24]
  assign mem_3_MPORT_data = io_bundle_write_data[31:24];
  assign mem_3_MPORT_addr = _T[12:0];
  assign mem_3_MPORT_mask = io_bundle_write_strobe_3;
  assign mem_3_MPORT_en = io_bundle_write_enable;
  assign io_bundle_read_data = {io_bundle_read_data_hi,io_bundle_read_data_lo}; // @[src/main/scala/peripheral/Memory.scala 74:78]
  assign io_instruction = {io_instruction_hi,io_instruction_lo}; // @[src/main/scala/peripheral/Memory.scala 76:83]
  always @(posedge clock) begin
    if (mem_0_MPORT_en & mem_0_MPORT_mask) begin
      mem_0[mem_0_MPORT_addr] <= mem_0_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
    end
    mem_0_io_bundle_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_0_io_bundle_read_data_MPORT_addr_pipe_0 <= _T[12:0];
    end
    mem_0_io_debug_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_0_io_debug_read_data_MPORT_addr_pipe_0 <= 13'h0;
    end
    mem_0_io_instruction_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_0_io_instruction_MPORT_addr_pipe_0 <= _io_instruction_T[12:0];
    end
    if (mem_1_MPORT_en & mem_1_MPORT_mask) begin
      mem_1[mem_1_MPORT_addr] <= mem_1_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
    end
    mem_1_io_bundle_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_1_io_bundle_read_data_MPORT_addr_pipe_0 <= _T[12:0];
    end
    mem_1_io_debug_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_1_io_debug_read_data_MPORT_addr_pipe_0 <= 13'h0;
    end
    mem_1_io_instruction_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_1_io_instruction_MPORT_addr_pipe_0 <= _io_instruction_T[12:0];
    end
    if (mem_2_MPORT_en & mem_2_MPORT_mask) begin
      mem_2[mem_2_MPORT_addr] <= mem_2_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
    end
    mem_2_io_bundle_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_2_io_bundle_read_data_MPORT_addr_pipe_0 <= _T[12:0];
    end
    mem_2_io_debug_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_2_io_debug_read_data_MPORT_addr_pipe_0 <= 13'h0;
    end
    mem_2_io_instruction_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_2_io_instruction_MPORT_addr_pipe_0 <= _io_instruction_T[12:0];
    end
    if (mem_3_MPORT_en & mem_3_MPORT_mask) begin
      mem_3[mem_3_MPORT_addr] <= mem_3_MPORT_data; // @[src/main/scala/peripheral/Memory.scala 66:24]
    end
    mem_3_io_bundle_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_3_io_bundle_read_data_MPORT_addr_pipe_0 <= _T[12:0];
    end
    mem_3_io_debug_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_3_io_debug_read_data_MPORT_addr_pipe_0 <= 13'h0;
    end
    mem_3_io_instruction_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_3_io_instruction_MPORT_addr_pipe_0 <= _io_instruction_T[12:0];
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
  _RAND_7 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    mem_1[initvar] = _RAND_7[7:0];
  _RAND_14 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    mem_2[initvar] = _RAND_14[7:0];
  _RAND_21 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    mem_3[initvar] = _RAND_21[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  mem_0_io_bundle_read_data_MPORT_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  mem_0_io_bundle_read_data_MPORT_addr_pipe_0 = _RAND_2[12:0];
  _RAND_3 = {1{`RANDOM}};
  mem_0_io_debug_read_data_MPORT_en_pipe_0 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  mem_0_io_debug_read_data_MPORT_addr_pipe_0 = _RAND_4[12:0];
  _RAND_5 = {1{`RANDOM}};
  mem_0_io_instruction_MPORT_en_pipe_0 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  mem_0_io_instruction_MPORT_addr_pipe_0 = _RAND_6[12:0];
  _RAND_8 = {1{`RANDOM}};
  mem_1_io_bundle_read_data_MPORT_en_pipe_0 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  mem_1_io_bundle_read_data_MPORT_addr_pipe_0 = _RAND_9[12:0];
  _RAND_10 = {1{`RANDOM}};
  mem_1_io_debug_read_data_MPORT_en_pipe_0 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  mem_1_io_debug_read_data_MPORT_addr_pipe_0 = _RAND_11[12:0];
  _RAND_12 = {1{`RANDOM}};
  mem_1_io_instruction_MPORT_en_pipe_0 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  mem_1_io_instruction_MPORT_addr_pipe_0 = _RAND_13[12:0];
  _RAND_15 = {1{`RANDOM}};
  mem_2_io_bundle_read_data_MPORT_en_pipe_0 = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  mem_2_io_bundle_read_data_MPORT_addr_pipe_0 = _RAND_16[12:0];
  _RAND_17 = {1{`RANDOM}};
  mem_2_io_debug_read_data_MPORT_en_pipe_0 = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  mem_2_io_debug_read_data_MPORT_addr_pipe_0 = _RAND_18[12:0];
  _RAND_19 = {1{`RANDOM}};
  mem_2_io_instruction_MPORT_en_pipe_0 = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  mem_2_io_instruction_MPORT_addr_pipe_0 = _RAND_20[12:0];
  _RAND_22 = {1{`RANDOM}};
  mem_3_io_bundle_read_data_MPORT_en_pipe_0 = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  mem_3_io_bundle_read_data_MPORT_addr_pipe_0 = _RAND_23[12:0];
  _RAND_24 = {1{`RANDOM}};
  mem_3_io_debug_read_data_MPORT_en_pipe_0 = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  mem_3_io_debug_read_data_MPORT_addr_pipe_0 = _RAND_25[12:0];
  _RAND_26 = {1{`RANDOM}};
  mem_3_io_instruction_MPORT_en_pipe_0 = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  mem_3_io_instruction_MPORT_addr_pipe_0 = _RAND_27[12:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module UartRx_mem(
  input        clock,
  input        reset,
  input        io_uart_rx, // @[src/main/scala/peripheral/UART.scala 17:14]
  output       io_rx_dv, // @[src/main/scala/peripheral/UART.scala 17:14]
  output [7:0] io_rx_data, // @[src/main/scala/peripheral/UART.scala 17:14]
  input        io_enable // @[src/main/scala/peripheral/UART.scala 17:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] state; // @[src/main/scala/peripheral/UART.scala 27:27]
  reg [15:0] clks_cnt; // @[src/main/scala/peripheral/UART.scala 28:27]
  reg [7:0] rx_data_reg; // @[src/main/scala/peripheral/UART.scala 29:28]
  reg [2:0] rx_data_idx; // @[src/main/scala/peripheral/UART.scala 30:28]
  reg  rx_dv_reg; // @[src/main/scala/peripheral/UART.scala 31:28]
  wire  _T_2 = ~io_uart_rx; // @[src/main/scala/peripheral/UART.scala 50:14]
  wire [15:0] _GEN_1 = _T_2 ? 16'h0 : clks_cnt; // @[src/main/scala/peripheral/UART.scala 60:29 61:22 28:27]
  wire [2:0] _GEN_2 = _T_2 ? 3'h2 : 3'h0; // @[src/main/scala/peripheral/UART.scala 60:29 62:22 64:19]
  wire [15:0] _clks_cnt_T_1 = clks_cnt + 16'h1; // @[src/main/scala/peripheral/UART.scala 67:32]
  wire [15:0] _GEN_3 = clks_cnt == 16'h1458 ? _GEN_1 : _clks_cnt_T_1; // @[src/main/scala/peripheral/UART.scala 58:36 67:20]
  wire [2:0] _GEN_4 = clks_cnt == 16'h1458 ? _GEN_2 : 3'h1; // @[src/main/scala/peripheral/UART.scala 58:36 68:20]
  wire  _T_7 = clks_cnt < 16'h28b0; // @[src/main/scala/peripheral/UART.scala 73:23]
  wire [7:0] mask = 8'h1 << rx_data_idx; // @[src/main/scala/peripheral/UART.scala 80:27]
  wire [7:0] _rx_data_reg_T = ~mask; // @[src/main/scala/peripheral/UART.scala 81:41]
  wire [7:0] _rx_data_reg_T_1 = rx_data_reg & _rx_data_reg_T; // @[src/main/scala/peripheral/UART.scala 81:39]
  wire [7:0] _GEN_7 = {{7'd0}, io_uart_rx}; // @[src/main/scala/peripheral/UART.scala 81:69]
  wire [7:0] _rx_data_reg_T_2 = _GEN_7 << rx_data_idx; // @[src/main/scala/peripheral/UART.scala 81:69]
  wire [7:0] _rx_data_reg_T_3 = _rx_data_reg_T_1 | _rx_data_reg_T_2; // @[src/main/scala/peripheral/UART.scala 81:48]
  wire [2:0] _rx_data_idx_T_1 = rx_data_idx + 3'h1; // @[src/main/scala/peripheral/UART.scala 83:40]
  wire [2:0] _GEN_5 = rx_data_idx < 3'h7 ? _rx_data_idx_T_1 : 3'h0; // @[src/main/scala/peripheral/UART.scala 82:35 83:25 86:25]
  wire [2:0] _GEN_6 = rx_data_idx < 3'h7 ? 3'h2 : 3'h3; // @[src/main/scala/peripheral/UART.scala 82:35 84:25 88:25]
  wire [15:0] _GEN_8 = clks_cnt < 16'h28b0 ? _clks_cnt_T_1 : 16'h0; // @[src/main/scala/peripheral/UART.scala 73:45 74:20 77:20]
  wire [2:0] _GEN_9 = clks_cnt < 16'h28b0 ? 3'h2 : _GEN_6; // @[src/main/scala/peripheral/UART.scala 73:45 75:20]
  wire [7:0] _GEN_10 = clks_cnt < 16'h28b0 ? rx_data_reg : _rx_data_reg_T_3; // @[src/main/scala/peripheral/UART.scala 29:28 73:45 81:23]
  wire [2:0] _GEN_11 = clks_cnt < 16'h28b0 ? rx_data_idx : _GEN_5; // @[src/main/scala/peripheral/UART.scala 30:28 73:45]
  wire [2:0] _GEN_14 = _T_7 ? 3'h3 : 3'h4; // @[src/main/scala/peripheral/UART.scala 94:45 96:20 100:21]
  wire  _GEN_15 = _T_7 ? rx_dv_reg : 1'h1; // @[src/main/scala/peripheral/UART.scala 31:28 94:45 98:21]
  wire  _GEN_16 = 3'h4 == state ? 1'h0 : rx_dv_reg; // @[src/main/scala/peripheral/UART.scala 105:19 44:19 31:28]
  wire [2:0] _GEN_17 = 3'h4 == state ? 3'h0 : state; // @[src/main/scala/peripheral/UART.scala 106:19 44:19 27:27]
  wire [15:0] _GEN_18 = 3'h3 == state ? _GEN_8 : clks_cnt; // @[src/main/scala/peripheral/UART.scala 44:19 28:27]
  wire [2:0] _GEN_19 = 3'h3 == state ? _GEN_14 : _GEN_17; // @[src/main/scala/peripheral/UART.scala 44:19]
  wire  _GEN_20 = 3'h3 == state ? _GEN_15 : _GEN_16; // @[src/main/scala/peripheral/UART.scala 44:19]
  wire [15:0] _GEN_21 = 3'h2 == state ? _GEN_8 : _GEN_18; // @[src/main/scala/peripheral/UART.scala 44:19]
  wire [2:0] _GEN_22 = 3'h2 == state ? _GEN_9 : _GEN_19; // @[src/main/scala/peripheral/UART.scala 44:19]
  wire [7:0] _GEN_23 = 3'h2 == state ? _GEN_10 : rx_data_reg; // @[src/main/scala/peripheral/UART.scala 44:19 29:28]
  wire [2:0] _GEN_24 = 3'h2 == state ? _GEN_11 : rx_data_idx; // @[src/main/scala/peripheral/UART.scala 44:19 30:28]
  wire  _GEN_26 = 3'h2 == state ? rx_dv_reg : _GEN_20; // @[src/main/scala/peripheral/UART.scala 44:19 31:28]
  assign io_rx_dv = rx_dv_reg; // @[src/main/scala/peripheral/UART.scala 111:14]
  assign io_rx_data = rx_data_reg; // @[src/main/scala/peripheral/UART.scala 112:14]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/peripheral/UART.scala 27:27]
      state <= 3'h0; // @[src/main/scala/peripheral/UART.scala 27:27]
    end else if (~io_enable) begin // @[src/main/scala/peripheral/UART.scala 37:20]
      state <= 3'h0; // @[src/main/scala/peripheral/UART.scala 38:15]
    end else if (3'h0 == state) begin // @[src/main/scala/peripheral/UART.scala 44:19]
      if (~io_uart_rx) begin // @[src/main/scala/peripheral/UART.scala 50:27]
        state <= 3'h1; // @[src/main/scala/peripheral/UART.scala 51:17]
      end else begin
        state <= 3'h0; // @[src/main/scala/peripheral/UART.scala 53:17]
      end
    end else if (3'h1 == state) begin // @[src/main/scala/peripheral/UART.scala 44:19]
      state <= _GEN_4;
    end else begin
      state <= _GEN_22;
    end
    if (reset) begin // @[src/main/scala/peripheral/UART.scala 28:27]
      clks_cnt <= 16'h0; // @[src/main/scala/peripheral/UART.scala 28:27]
    end else if (~io_enable) begin // @[src/main/scala/peripheral/UART.scala 37:20]
      clks_cnt <= 16'h0; // @[src/main/scala/peripheral/UART.scala 39:15]
    end else if (3'h0 == state) begin // @[src/main/scala/peripheral/UART.scala 44:19]
      clks_cnt <= 16'h0; // @[src/main/scala/peripheral/UART.scala 48:21]
    end else if (3'h1 == state) begin // @[src/main/scala/peripheral/UART.scala 44:19]
      clks_cnt <= _GEN_3;
    end else begin
      clks_cnt <= _GEN_21;
    end
    if (reset) begin // @[src/main/scala/peripheral/UART.scala 29:28]
      rx_data_reg <= 8'h0; // @[src/main/scala/peripheral/UART.scala 29:28]
    end else if (!(~io_enable)) begin // @[src/main/scala/peripheral/UART.scala 37:20]
      if (!(3'h0 == state)) begin // @[src/main/scala/peripheral/UART.scala 44:19]
        if (!(3'h1 == state)) begin // @[src/main/scala/peripheral/UART.scala 44:19]
          rx_data_reg <= _GEN_23;
        end
      end
    end
    if (reset) begin // @[src/main/scala/peripheral/UART.scala 30:28]
      rx_data_idx <= 3'h0; // @[src/main/scala/peripheral/UART.scala 30:28]
    end else if (~io_enable) begin // @[src/main/scala/peripheral/UART.scala 37:20]
      rx_data_idx <= 3'h0; // @[src/main/scala/peripheral/UART.scala 40:17]
    end else if (3'h0 == state) begin // @[src/main/scala/peripheral/UART.scala 44:19]
      rx_data_idx <= 3'h0; // @[src/main/scala/peripheral/UART.scala 49:21]
    end else if (!(3'h1 == state)) begin // @[src/main/scala/peripheral/UART.scala 44:19]
      rx_data_idx <= _GEN_24;
    end
    if (reset) begin // @[src/main/scala/peripheral/UART.scala 31:28]
      rx_dv_reg <= 1'h0; // @[src/main/scala/peripheral/UART.scala 31:28]
    end else if (~io_enable) begin // @[src/main/scala/peripheral/UART.scala 37:20]
      rx_dv_reg <= 1'h0; // @[src/main/scala/peripheral/UART.scala 41:15]
    end else if (3'h0 == state) begin // @[src/main/scala/peripheral/UART.scala 44:19]
      rx_dv_reg <= 1'h0; // @[src/main/scala/peripheral/UART.scala 47:21]
    end else if (!(3'h1 == state)) begin // @[src/main/scala/peripheral/UART.scala 44:19]
      rx_dv_reg <= _GEN_26;
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
  state = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  clks_cnt = _RAND_1[15:0];
  _RAND_2 = {1{`RANDOM}};
  rx_data_reg = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  rx_data_idx = _RAND_3[2:0];
  _RAND_4 = {1{`RANDOM}};
  rx_dv_reg = _RAND_4[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module UART(
  input         clock,
  input         reset,
  input         io_i_uart_rx, // @[src/main/scala/peripheral/UART.scala 217:14]
  input         io_sw_tx, // @[src/main/scala/peripheral/UART.scala 217:14]
  output [31:0] io_mem_bundle_address, // @[src/main/scala/peripheral/UART.scala 217:14]
  output [31:0] io_mem_bundle_write_data, // @[src/main/scala/peripheral/UART.scala 217:14]
  output        io_mem_bundle_write_enable, // @[src/main/scala/peripheral/UART.scala 217:14]
  output        io_mem_bundle_write_strobe_0, // @[src/main/scala/peripheral/UART.scala 217:14]
  output        io_mem_bundle_write_strobe_1, // @[src/main/scala/peripheral/UART.scala 217:14]
  output        io_mem_bundle_write_strobe_2, // @[src/main/scala/peripheral/UART.scala 217:14]
  output        io_mem_bundle_write_strobe_3 // @[src/main/scala/peripheral/UART.scala 217:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  uartRx_clock; // @[src/main/scala/peripheral/UART.scala 230:24]
  wire  uartRx_reset; // @[src/main/scala/peripheral/UART.scala 230:24]
  wire  uartRx_io_uart_rx; // @[src/main/scala/peripheral/UART.scala 230:24]
  wire  uartRx_io_rx_dv; // @[src/main/scala/peripheral/UART.scala 230:24]
  wire [7:0] uartRx_io_rx_data; // @[src/main/scala/peripheral/UART.scala 230:24]
  wire  uartRx_io_enable; // @[src/main/scala/peripheral/UART.scala 230:24]
  wire  _T_1 = ~reset; // @[src/main/scala/peripheral/UART.scala 227:13]
  wire  storeMode = ~io_sw_tx; // @[src/main/scala/peripheral/UART.scala 236:21]
  reg [31:0] write_ptr; // @[src/main/scala/peripheral/UART.scala 250:28]
  wire [31:0] _io_mem_bundle_write_data_T_1 = {24'h0,uartRx_io_rx_data}; // @[src/main/scala/peripheral/UART.scala 255:38]
  wire [31:0] _GEN_11 = write_ptr % 32'h4; // @[src/main/scala/peripheral/UART.scala 271:46]
  wire  _GEN_0 = 2'h0 == _GEN_11[1:0]; // @[src/main/scala/peripheral/UART.scala 270:36 271:{76,76}]
  wire  _GEN_1 = 2'h1 == _GEN_11[1:0]; // @[src/main/scala/peripheral/UART.scala 270:36 271:{76,76}]
  wire  _GEN_2 = 2'h2 == _GEN_11[1:0]; // @[src/main/scala/peripheral/UART.scala 270:36 271:{76,76}]
  wire  _GEN_3 = 2'h3 == _GEN_11[1:0]; // @[src/main/scala/peripheral/UART.scala 270:36 271:{76,76}]
  wire [5:0] _io_mem_bundle_write_data_T_6 = {_GEN_11[2:0], 3'h0}; // @[src/main/scala/peripheral/UART.scala 277:181]
  wire [71:0] _GEN_12 = {{63'd0}, _io_mem_bundle_write_data_T_1[8:0]}; // @[src/main/scala/peripheral/UART.scala 277:138]
  wire [71:0] _io_mem_bundle_write_data_T_7 = _GEN_12 << _io_mem_bundle_write_data_T_6; // @[src/main/scala/peripheral/UART.scala 277:138]
  wire [31:0] _write_ptr_T_1 = write_ptr + 32'h1; // @[src/main/scala/peripheral/UART.scala 279:32]
  wire  _GEN_4 = uartRx_io_rx_dv; // @[src/main/scala/peripheral/UART.scala 260:29 256:32 261:36]
  wire  _GEN_5 = uartRx_io_rx_dv & _GEN_0; // @[src/main/scala/peripheral/UART.scala 260:29 253:32]
  wire  _GEN_6 = uartRx_io_rx_dv & _GEN_1; // @[src/main/scala/peripheral/UART.scala 260:29 253:32]
  wire  _GEN_7 = uartRx_io_rx_dv & _GEN_2; // @[src/main/scala/peripheral/UART.scala 260:29 253:32]
  wire  _GEN_8 = uartRx_io_rx_dv & _GEN_3; // @[src/main/scala/peripheral/UART.scala 260:29 253:32]
  wire [71:0] _GEN_9 = uartRx_io_rx_dv ? _io_mem_bundle_write_data_T_7 : {{40'd0}, _io_mem_bundle_write_data_T_1}; // @[src/main/scala/peripheral/UART.scala 260:29 255:32 277:34]
  wire [71:0] _GEN_16 = storeMode ? _GEN_9 : {{40'd0}, _io_mem_bundle_write_data_T_1}; // @[src/main/scala/peripheral/UART.scala 259:21 255:32]
  UartRx_mem uartRx ( // @[src/main/scala/peripheral/UART.scala 230:24]
    .clock(uartRx_clock),
    .reset(uartRx_reset),
    .io_uart_rx(uartRx_io_uart_rx),
    .io_rx_dv(uartRx_io_rx_dv),
    .io_rx_data(uartRx_io_rx_data),
    .io_enable(uartRx_io_enable)
  );
  assign io_mem_bundle_address = write_ptr; // @[src/main/scala/peripheral/UART.scala 254:32]
  assign io_mem_bundle_write_data = _GEN_16[31:0];
  assign io_mem_bundle_write_enable = storeMode & _GEN_4; // @[src/main/scala/peripheral/UART.scala 259:21 256:32]
  assign io_mem_bundle_write_strobe_0 = storeMode & _GEN_5; // @[src/main/scala/peripheral/UART.scala 259:21 253:32]
  assign io_mem_bundle_write_strobe_1 = storeMode & _GEN_6; // @[src/main/scala/peripheral/UART.scala 259:21 253:32]
  assign io_mem_bundle_write_strobe_2 = storeMode & _GEN_7; // @[src/main/scala/peripheral/UART.scala 259:21 253:32]
  assign io_mem_bundle_write_strobe_3 = storeMode & _GEN_8; // @[src/main/scala/peripheral/UART.scala 259:21 253:32]
  assign uartRx_clock = clock;
  assign uartRx_reset = ~reset; // @[src/main/scala/peripheral/UART.scala 227:13]
  assign uartRx_io_uart_rx = io_i_uart_rx; // @[src/main/scala/peripheral/UART.scala 243:23]
  assign uartRx_io_enable = ~io_sw_tx; // @[src/main/scala/peripheral/UART.scala 236:21]
  always @(posedge clock) begin
    if (_T_1) begin // @[src/main/scala/peripheral/UART.scala 250:28]
      write_ptr <= 32'h1000; // @[src/main/scala/peripheral/UART.scala 250:28]
    end else if (storeMode) begin // @[src/main/scala/peripheral/UART.scala 259:21]
      if (uartRx_io_rx_dv) begin // @[src/main/scala/peripheral/UART.scala 260:29]
        write_ptr <= _write_ptr_T_1; // @[src/main/scala/peripheral/UART.scala 279:19]
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
  write_ptr = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Top(
  input   clock,
  input   reset,
  input   io_instruction_valid, // @[src/main/scala/board/verilator/Top.scala 16:16]
  input   io_i_uart_rx, // @[src/main/scala/board/verilator/Top.scala 16:16]
  output  io_o_program_finished // @[src/main/scala/board/verilator/Top.scala 16:16]
);
  wire  cpu_clock; // @[src/main/scala/board/verilator/Top.scala 28:20]
  wire  cpu_reset; // @[src/main/scala/board/verilator/Top.scala 28:20]
  wire [31:0] cpu_io_instruction_address; // @[src/main/scala/board/verilator/Top.scala 28:20]
  wire [31:0] cpu_io_instruction; // @[src/main/scala/board/verilator/Top.scala 28:20]
  wire [31:0] cpu_io_memory_bundle_address; // @[src/main/scala/board/verilator/Top.scala 28:20]
  wire [31:0] cpu_io_memory_bundle_write_data; // @[src/main/scala/board/verilator/Top.scala 28:20]
  wire  cpu_io_memory_bundle_write_enable; // @[src/main/scala/board/verilator/Top.scala 28:20]
  wire  cpu_io_memory_bundle_write_strobe_0; // @[src/main/scala/board/verilator/Top.scala 28:20]
  wire  cpu_io_memory_bundle_write_strobe_1; // @[src/main/scala/board/verilator/Top.scala 28:20]
  wire  cpu_io_memory_bundle_write_strobe_2; // @[src/main/scala/board/verilator/Top.scala 28:20]
  wire  cpu_io_memory_bundle_write_strobe_3; // @[src/main/scala/board/verilator/Top.scala 28:20]
  wire [31:0] cpu_io_memory_bundle_read_data; // @[src/main/scala/board/verilator/Top.scala 28:20]
  wire  cpu_io_instruction_valid; // @[src/main/scala/board/verilator/Top.scala 28:20]
  wire  mem_clock; // @[src/main/scala/board/verilator/Top.scala 29:20]
  wire [31:0] mem_io_bundle_address; // @[src/main/scala/board/verilator/Top.scala 29:20]
  wire [31:0] mem_io_bundle_write_data; // @[src/main/scala/board/verilator/Top.scala 29:20]
  wire  mem_io_bundle_write_enable; // @[src/main/scala/board/verilator/Top.scala 29:20]
  wire  mem_io_bundle_write_strobe_0; // @[src/main/scala/board/verilator/Top.scala 29:20]
  wire  mem_io_bundle_write_strobe_1; // @[src/main/scala/board/verilator/Top.scala 29:20]
  wire  mem_io_bundle_write_strobe_2; // @[src/main/scala/board/verilator/Top.scala 29:20]
  wire  mem_io_bundle_write_strobe_3; // @[src/main/scala/board/verilator/Top.scala 29:20]
  wire [31:0] mem_io_bundle_read_data; // @[src/main/scala/board/verilator/Top.scala 29:20]
  wire [31:0] mem_io_instruction; // @[src/main/scala/board/verilator/Top.scala 29:20]
  wire [31:0] mem_io_instruction_address; // @[src/main/scala/board/verilator/Top.scala 29:20]
  wire  uart_clock; // @[src/main/scala/board/verilator/Top.scala 30:20]
  wire  uart_reset; // @[src/main/scala/board/verilator/Top.scala 30:20]
  wire  uart_io_i_uart_rx; // @[src/main/scala/board/verilator/Top.scala 30:20]
  wire  uart_io_sw_tx; // @[src/main/scala/board/verilator/Top.scala 30:20]
  wire [31:0] uart_io_mem_bundle_address; // @[src/main/scala/board/verilator/Top.scala 30:20]
  wire [31:0] uart_io_mem_bundle_write_data; // @[src/main/scala/board/verilator/Top.scala 30:20]
  wire  uart_io_mem_bundle_write_enable; // @[src/main/scala/board/verilator/Top.scala 30:20]
  wire  uart_io_mem_bundle_write_strobe_0; // @[src/main/scala/board/verilator/Top.scala 30:20]
  wire  uart_io_mem_bundle_write_strobe_1; // @[src/main/scala/board/verilator/Top.scala 30:20]
  wire  uart_io_mem_bundle_write_strobe_2; // @[src/main/scala/board/verilator/Top.scala 30:20]
  wire  uart_io_mem_bundle_write_strobe_3; // @[src/main/scala/board/verilator/Top.scala 30:20]
  CPU cpu ( // @[src/main/scala/board/verilator/Top.scala 28:20]
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
    .io_instruction_valid(cpu_io_instruction_valid)
  );
  Memory mem ( // @[src/main/scala/board/verilator/Top.scala 29:20]
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
    .io_instruction_address(mem_io_instruction_address)
  );
  UART uart ( // @[src/main/scala/board/verilator/Top.scala 30:20]
    .clock(uart_clock),
    .reset(uart_reset),
    .io_i_uart_rx(uart_io_i_uart_rx),
    .io_sw_tx(uart_io_sw_tx),
    .io_mem_bundle_address(uart_io_mem_bundle_address),
    .io_mem_bundle_write_data(uart_io_mem_bundle_write_data),
    .io_mem_bundle_write_enable(uart_io_mem_bundle_write_enable),
    .io_mem_bundle_write_strobe_0(uart_io_mem_bundle_write_strobe_0),
    .io_mem_bundle_write_strobe_1(uart_io_mem_bundle_write_strobe_1),
    .io_mem_bundle_write_strobe_2(uart_io_mem_bundle_write_strobe_2),
    .io_mem_bundle_write_strobe_3(uart_io_mem_bundle_write_strobe_3)
  );
  assign io_o_program_finished = cpu_io_instruction_address[0]; // @[src/main/scala/board/verilator/Top.scala 58:54]
  assign cpu_clock = clock;
  assign cpu_reset = reset;
  assign cpu_io_instruction = mem_io_instruction; // @[src/main/scala/board/verilator/Top.scala 44:32]
  assign cpu_io_memory_bundle_read_data = ~io_instruction_valid ? 32'h0 : mem_io_bundle_read_data; // @[src/main/scala/board/verilator/Top.scala 47:33 49:38 52:28]
  assign cpu_io_instruction_valid = io_instruction_valid; // @[src/main/scala/board/verilator/Top.scala 42:32]
  assign mem_clock = clock;
  assign mem_io_bundle_address = ~io_instruction_valid ? uart_io_mem_bundle_address : cpu_io_memory_bundle_address; // @[src/main/scala/board/verilator/Top.scala 47:33 48:26 52:28]
  assign mem_io_bundle_write_data = ~io_instruction_valid ? uart_io_mem_bundle_write_data :
    cpu_io_memory_bundle_write_data; // @[src/main/scala/board/verilator/Top.scala 47:33 48:26 52:28]
  assign mem_io_bundle_write_enable = ~io_instruction_valid ? uart_io_mem_bundle_write_enable :
    cpu_io_memory_bundle_write_enable; // @[src/main/scala/board/verilator/Top.scala 47:33 48:26 52:28]
  assign mem_io_bundle_write_strobe_0 = ~io_instruction_valid ? uart_io_mem_bundle_write_strobe_0 :
    cpu_io_memory_bundle_write_strobe_0; // @[src/main/scala/board/verilator/Top.scala 47:33 48:26 52:28]
  assign mem_io_bundle_write_strobe_1 = ~io_instruction_valid ? uart_io_mem_bundle_write_strobe_1 :
    cpu_io_memory_bundle_write_strobe_1; // @[src/main/scala/board/verilator/Top.scala 47:33 48:26 52:28]
  assign mem_io_bundle_write_strobe_2 = ~io_instruction_valid ? uart_io_mem_bundle_write_strobe_2 :
    cpu_io_memory_bundle_write_strobe_2; // @[src/main/scala/board/verilator/Top.scala 47:33 48:26 52:28]
  assign mem_io_bundle_write_strobe_3 = ~io_instruction_valid ? uart_io_mem_bundle_write_strobe_3 :
    cpu_io_memory_bundle_write_strobe_3; // @[src/main/scala/board/verilator/Top.scala 47:33 48:26 52:28]
  assign mem_io_instruction_address = cpu_io_instruction_address; // @[src/main/scala/board/verilator/Top.scala 43:32]
  assign uart_clock = clock;
  assign uart_reset = reset;
  assign uart_io_i_uart_rx = io_i_uart_rx; // @[src/main/scala/board/verilator/Top.scala 34:23]
  assign uart_io_sw_tx = io_instruction_valid; // @[src/main/scala/board/verilator/Top.scala 33:23]
endmodule
