/* SPDX-License-Identifier: Apache-2.0 */
/*
 * Copyright © 2023 Calian Ltd.  All rights reserved.
 *
 * Driver for the Xilinx AXI IIC Bus Interface.
 * This is an FPGA logic core as described by Xilinx document PG090.
 */

#ifndef ZEPHYR_DRIVERS_I2C_I2C_XILINX_AXI_H_
#define ZEPHYR_DRIVERS_I2C_I2C_XILINX_AXI_H_

#include <zephyr/sys/util_macro.h>

/* Register offsets */
enum xilinx_axi_i2c_register {
	REG_GIE = 0x01C,
	REG_ISR = 0x020,
	REG_IER = 0x028,
	REG_SOFTR = 0x040,
	REG_CR = 0x100,
	REG_SR = 0x104,
	REG_TX_FIFO = 0x108,
	REG_RX_FIFO = 0x10C,
	REG_ADR = 0x110,
	REG_TX_FIFO_OCY = 0x114,
	REG_RX_FIFO_OCY = 0x118,
	REG_TEN_ADR = 0x11C,
	REG_RX_FIFO_PIRQ = 0x120,
	REG_GPO = 0x124,
	REG_TSUSTA = 0x128,
	REG_TSUSTO = 0x12C,
	REG_THDSTA = 0x130,
	REG_TSUDAT = 0x134,
	REG_TBUF = 0x138,
	REG_THIGH = 0x13C,
	REG_TLOW = 0x140,
	REG_THDDAT = 0x144,
};

/* Register bits */
/* Global Interrupt Enable */
enum xilinx_axi_i2c_gie_bits {
	GIE_ENABLE = BIT(31),
};

/* Interrupt Status/Interrupt Enable */
enum xilinx_axi_i2c_isr_bits {
	ISR_TX_HALF_EMPTY = BIT(7),
	ISR_NOT_ADDR_TARGET = BIT(6),
	ISR_ADDR_TARGET = BIT(5),
	ISR_BUS_NOT_BUSY = BIT(4),
	ISR_RX_FIFO_FULL = BIT(3),
	ISR_TX_FIFO_EMPTY = BIT(2),
	ISR_TX_ERR_TARGET_COMP = BIT(1),
	ISR_ARB_LOST = BIT(0),
};

/* Soft Reset */
enum xilinx_axi_i2c_softr_vals {
	SOFTR_KEY = 0xA,
};

/* Control */
enum xilinx_axi_i2c_cr_bits {
	CR_GC_EN = BIT(6),
	CR_RSTA = BIT(5),
	CR_TXAK = BIT(4),
	CR_TX = BIT(3),
	CR_MSMS = BIT(2),
	CR_TX_FIFO_RST = BIT(1),
	CR_EN = BIT(0),
};

/* Status */
enum xilinx_axi_i2c_sr_bits {
	SR_TX_FIFO_EMPTY = BIT(7),
	SR_RX_FIFO_EMPTY = BIT(6),
	SR_RX_FIFO_FULL = BIT(5),
	SR_TX_FIFO_FULL = BIT(4),
	SR_SRW = BIT(3),
	SR_BB = BIT(2),
	SR_AAS = BIT(1),
	SR_ABGC = BIT(0),
};

/* TX FIFO */
enum xilinx_axi_i2c_tx_fifo_bits {
	TX_FIFO_STOP = BIT(9),
	TX_FIFO_START = BIT(8),
};

/* RX FIFO */
enum xilinx_axi_i2c_rx_fifo_bits {
	RX_FIFO_DATA_MASK = 0xFF,
};

/* TX_FIFO_OCY */
enum xilinx_axi_i2c_tx_fifo_ocy_bits {
	TX_FIFO_OCY_MASK = 0x0F,
};

/* RX_FIFO_OCY */
enum xilinx_axi_i2c_rx_fifo_ocy_bits {
	RX_FIFO_OCY_MASK = 0x0F,
};

/* other constants */
enum {
	/* Size of RX/TX FIFO */
	FIFO_SIZE = 16,

	/* Maximum number of bytes that can be read in dynamic mode */
	MAX_DYNAMIC_READ_LEN = 255,
};

#endif
