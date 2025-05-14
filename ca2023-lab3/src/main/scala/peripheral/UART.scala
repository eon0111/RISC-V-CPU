package peripheral

import chisel3._
import chisel3.util._
import riscv.Parameters

/** UART Receiver in Chisel.
  *
  * Implements the following states:
  *   - sIdle: Wait for start bit (low).
  *   - sStart: Wait half a bit period to check the start bit.
  *   - sData: Sample 8 data bits.
  *   - sStop: Wait one bit period for the stop bit.
  *   - sCleanup: Clear rx_dv and return to idle.
  */
class UartRx_mem(val clksPerBit: Int = 10417) extends Module {
  val io = IO(new Bundle {
    val uart_rx = Input(Bool())
    val rx_dv   = Output(Bool())
    val rx_data = Output(UInt(8.W))
    val rx_bytes_read = Output(UInt(8.W))
    val enable  = Input(Bool()) //When false, the state machine resets and no Rx is done
  })

  // Define states using Chisel Enum.
  val sIdle :: sStart :: sData :: sStop :: sCleanup :: Nil = Enum(5)
  val state      = RegInit(sIdle)
  val clks_cnt   = RegInit(0.U(16.W))    // 16-bit counter (sufficient for 10417)
  val rx_data_reg = RegInit(0.U(8.W))
  val rx_data_idx = RegInit(0.U(3.W))
  val rx_dv_reg   = RegInit(false.B)
  val bytes_read_reg = RegInit(0.U(8.W))

  // Pre-calculate half the bit period.
  val halfBit = ((clksPerBit - 1) / 2).U

  when(!io.enable) {
    state     := sIdle
    clks_cnt  := 0.U
    rx_data_idx := 0.U
    rx_dv_reg := false.B
    bytes_read_reg := 0.U
  } .otherwise {
    switch(state) {
      is(sIdle) {
        // In idle, clear rx_dv and counter; if the line goes low, start bit detected.
        rx_dv_reg   := false.B
        clks_cnt    := 0.U
        rx_data_idx := 0.U
        when(!io.uart_rx) {
          state := sStart
        } .otherwise {
          state := sIdle
        }
      }
      is(sStart) {
        // Wait until the counter reaches half the bit period.
        when(clks_cnt === halfBit) {
          // Check if the start bit is still low.
          when(!io.uart_rx) {
            clks_cnt := 0.U
            state    := sData
          } .otherwise {
            state := sIdle
          }
        } .otherwise {
          clks_cnt := clks_cnt + 1.U
          state    := sStart
        }
      }
      is(sData) {
        // For each bit, wait a full bit period then sample the input.
        when(clks_cnt < (clksPerBit - 1).U) {
          clks_cnt := clks_cnt + 1.U
          state    := sData
        } .otherwise {
          clks_cnt := 0.U
          // Store the sampled bit in the proper position.
          // (Clear the bit at rx_data_idx then OR in the new bit shifted to that position.)
          val mask = (1.U << rx_data_idx)
          rx_data_reg := (rx_data_reg & ~mask) | (io.uart_rx.asUInt << rx_data_idx)
          when(rx_data_idx < 7.U) {
            rx_data_idx := rx_data_idx + 1.U
            state       := sData
          } .otherwise {
            rx_data_idx := 0.U
            bytes_read_reg := bytes_read_reg + 1.U
            state       := sStop
          }
        }
      }
      is(sStop) {
        // Wait one bit period for the stop bit.
        when(clks_cnt < (clksPerBit - 1).U) {
          clks_cnt := clks_cnt + 1.U
          state    := sStop
        } .otherwise {
          rx_dv_reg := true.B
          clks_cnt  := 0.U
          state     := sCleanup
        }
      }
      is(sCleanup) {
        // Clear the rx_dv signal and return to idle.
        rx_dv_reg := false.B
        state     := sIdle
      }
    }
  }

  io.rx_dv   := rx_dv_reg
  io.rx_data := rx_data_reg
  io.rx_bytes_read := bytes_read_reg
}

/** UART Transmitter in Chisel.
  *
  * Implements the following states:
  *   - sIdle: Wait for tx_dv signal and latch the data.
  *   - sStart: Transmit start bit (0).
  *   - sData: Transmit each data bit.
  *   - sStop: Transmit the stop bit (1).
  */
class UartTx_mem(val clksPerBit: Int = 10417) extends Module {
  val io = IO(new Bundle {
    val tx_dv     = Input(Bool())
    val tx_data   = Input(UInt(8.W))
    val tx_active = Output(Bool())
    val tx_serial = Output(Bool())
    val tx_done   = Output(Bool())
  })

  // Define states.
  val sIdle :: sStart :: sData :: sStop :: Nil = Enum(4)
  val state       = RegInit(sIdle)
  val clks_cnt    = RegInit(0.U(16.W))
  val tx_data_idx = RegInit(0.U(3.W))
  val reg_tx_data = RegInit(0.U(8.W))
  val tx_active_reg = RegInit(false.B)
  val tx_serial_reg = RegInit(true.B)  // idle is high
  val tx_done_reg   = RegInit(false.B)

  // Clear tx_done every cycle.
  tx_done_reg := false.B

  switch(state) {
    is(sIdle) {
      // When idle, drive the line high and wait for tx_dv to latch new data.
      tx_serial_reg := true.B
      clks_cnt      := 0.U
      tx_data_idx   := 0.U
      when(io.tx_dv) {
        tx_active_reg := true.B
        reg_tx_data   := io.tx_data
        state         := sStart
      } .otherwise {
        state := sIdle
      }
    }
    is(sStart) {
      // Transmit the start bit (low).
      tx_serial_reg := false.B
      when(clks_cnt < (clksPerBit - 1).U) {
        clks_cnt := clks_cnt + 1.U
        state    := sStart
      } .otherwise {
        clks_cnt := 0.U
        state    := sData
      }
    }
    is(sData) {
      // Transmit each data bit.
      tx_serial_reg := reg_tx_data(tx_data_idx)
      when(clks_cnt < (clksPerBit - 1).U) {
        clks_cnt := clks_cnt + 1.U
        state    := sData
      } .otherwise {
        clks_cnt := 0.U
        when(tx_data_idx < 7.U) {
          tx_data_idx := tx_data_idx + 1.U
          state       := sData
        } .otherwise {
          tx_data_idx := 0.U
          state       := sStop
        }
      }
    }
    is(sStop) {
      // Transmit the stop bit (high).
      tx_serial_reg := true.B
      when(clks_cnt < (clksPerBit - 1).U) {
        clks_cnt := clks_cnt + 1.U
        state    := sStop
      } .otherwise {
        tx_done_reg   := true.B
        clks_cnt      := 0.U
        state         := sIdle
        tx_active_reg := false.B
      }
    }
  }

  io.tx_active := tx_active_reg
  io.tx_serial := tx_serial_reg
  io.tx_done   := tx_done_reg
}

/** Top-level module in Chisel.
  *
  * Instantiates the UART receiver and transmitter with the same CLKS_PER_BIT value.
  * The received data is split into two 4–bit nibbles for display on two sets of LEDs.
  * The UART TX output is driven by a multiplexer that passes through the tx_serial signal
  * when tx_active is high, otherwise driving the line high.
  */
class UART(val clksPerBit: Int = 10417) extends Module {

  val io = IO(new Bundle {
    val led        = Output(UInt(4.W))
    val led_g      = Output(UInt(4.W))
    val i_uart_rx  = Input(Bool())
    val o_uart_tx  = Output(Bool())
    val sw_tx      = Input(Bool())

    val mem_bundle = Flipped(new RAMBundle)
  })
  
  withReset(~reset.asBool){
    // Instantiate the UART receiver and transmitter.
    // Note: The receiver has an enable input.
    val uartRx = Module(new UartRx_mem(clksPerBit))
    val uartTx = Module(new UartTx_mem(clksPerBit))

    // Mode selection:
    // When sw_tx is LOW: store mode.
    // When sw_tx is HIGH: transmit mode.
    val storeMode = !io.sw_tx
    val txMode    = io.sw_tx
    
    // Drive the receiver's enable.
    uartRx.io.enable := storeMode

    // Connect the UART RX input.
    uartRx.io.uart_rx := io.i_uart_rx

    //----------------------------------------------------
    // Memory for buffering received bytes.
    //----------------------------------------------------
    val memDepth = 256
    val mem = SyncReadMem(memDepth, UInt(8.W))
    val write_ptr = RegInit(0x1000.U(Parameters.AddrWidth))
    val read_ptr  = RegInit(0x1000.U(Parameters.AddrWidth))

    io.mem_bundle.write_strobe := VecInit(Seq.fill(Parameters.WordSize)(false.B))
    io.mem_bundle.address      := write_ptr
    io.mem_bundle.write_data   := Cat(Fill(Parameters.DataBits - Parameters.ByteBits, 0.U), uartRx.io.rx_data)
    io.mem_bundle.write_enable := false.B

    // In store mode, write new received bytes into memory.
    when(storeMode) {
      when(uartRx.io.rx_dv) {
        io.mem_bundle.write_enable := true.B

        /* NOTE: El parámetro "write_strobe" es una máscara de 4 bits que indica la posición
         * o posiciones de los bytes de una palabra de 32 bits, que se escribirán en una
         * posición de memoria. En nuestro caso actual, interesa ir rotando ese bit
         * por las 4 posiciones posibles en una palabra de 32 bits, de modo que se
         * vaya componiendo el contenido de la memoria byte a byte (por cómo funciona
         * el dispositivo UART), y palabra a palabra (porque así lo requiere la interfaz
         * de la memoria utilizada) */
        io.mem_bundle.write_strobe := VecInit(Seq.fill(Parameters.WordSize)(false.B))
        io.mem_bundle.write_strobe(write_ptr % Parameters.WordSize.asUInt) := true.B

        /* NOTE: El dato a escribir serán los 8 últimos bits del byte recibido que hemos
         * extendido a 32 bits. A ese byte se le aplica un shift lógico hacia la
         * izda. el número de bits que sean precisos hasta situar el byte en la
         * posición indicada en el "write_strobe" */
        io.mem_bundle.write_data := Cat(Fill(Parameters.DataBits - Parameters.ByteBits, 0.U), uartRx.io.rx_data)(Parameters.ByteBits, 0) << (write_ptr % Parameters.WordSize.asUInt << log2Up(Parameters.ByteBits).U)

        write_ptr := write_ptr + 1.U
      }
    }

    //----------------------------------------------------
    // Transmit FSM for sending stored data.
    //----------------------------------------------------
    // We'll use a simple FSM with two states:
    // txIdle: if there is data (read_ptr < write_ptr), start a transmission.
    // txWait: wait for uartTx.tx_done before moving to the next byte.
    val txIdle :: txWait :: Nil = Enum(2)
    val tx_fsm_state = RegInit(txIdle)
    // Register to hold the byte to be transmitted.
    val tx_byte_reg = Reg(UInt(8.W))

    //Default values
    uartTx.io.tx_dv   := false.B
    uartTx.io.tx_data := 0.U

    when(txMode) {
      switch(tx_fsm_state) {
        is(txIdle) {
          // If there is at least one stored byte, initiate transmission.
          when(read_ptr < write_ptr) { // FIXME: cuidado aquí!! Puede que sea <=
            // Read from memory. (Note: SyncReadMem has one-cycle latency.)
            tx_byte_reg := mem.read(read_ptr, true.B)
            uartTx.io.tx_data := tx_byte_reg
            uartTx.io.tx_dv   := true.B
            tx_fsm_state := txWait
          } .otherwise {
            uartTx.io.tx_dv := false.B
          }
        }
        is(txWait) {
          // Wait for transmission to complete.
          uartTx.io.tx_dv := false.B
          when(uartTx.io.tx_done) {
            // Move to next byte.
            read_ptr := read_ptr + 1.U
            tx_fsm_state := txIdle
          }
        }
      }
    }

    // In store mode, ensure that no transmission occurs.
    when(storeMode) {
      uartTx.io.tx_dv   := false.B
      uartTx.io.tx_data := 0.U
    }

    //----------------------------------------------------
    // For visual feedback, display lower nibbles of rx_data.
    //----------------------------------------------------
    // Display the lower and upper nibbles of the received byte on two sets of LEDs.
    val ledReg1 = RegNext(uartRx.io.rx_data(3, 0))
    val ledReg2 = RegNext(uartRx.io.rx_data(7, 4))
    val ledReg3 = RegNext(uartRx.io.rx_bytes_read(3,0))
    val ledReg4 = RegNext(uartRx.io.rx_bytes_read(7,4))
    io.led   := Mux(io.sw_tx, ledReg1, ledReg3)
    io.led_g := Mux(io.sw_tx, ledReg2, ledReg4)

    // Drive the UART TX output. When transmission is active, pass the serial output;
    // otherwise, drive the line high.
    io.o_uart_tx := Mux(uartTx.io.tx_active, uartTx.io.tx_serial, true.B)
  }
}

// Object to generate Verilog for the Top module
// object UART extends App {
//     (new chisel3.stage.ChiselStage).emitVerilog(new UART(10417))
// }
