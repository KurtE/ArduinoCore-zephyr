/*
 * Copyright (c) 2022 Antmicro <www.antmicro.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_SERIAL_UART_QL_USBSERIALPORT_S3B_H_
#define ZEPHYR_DRIVERS_SERIAL_UART_QL_USBSERIALPORT_S3B_H_

#include <stdint.h>

#define USBSERIAL_TX_FIFOSIZE (512)
#define USBSERIAL_RX_FIFOSIZE (512)

/* USB-Serial FIFO status values */
#define USBSERIAL_RX_FIFO_EMPTY         (0x00)
#define USBSERIAL_RX_FIFO_E1            (0x01)
#define USBSERIAL_RX_FIFO_GE_2          (0x02)
#define USBSERIAL_RX_FIFO_GE_4          (0x03)
#define USBSERIAL_RX_FIFO_GE_8          (0x04)
#define USBSERIAL_RX_FIFO_GE_16         (0x0A)
#define USBSERIAL_RX_FIFO_GE_32         (0x0B)
#define USBSERIAL_RX_FIFO_LT_QUARTER    (0x0C)
#define USBSERIAL_RX_FIFO_GT_QUARTE     (0x0D)
#define USBSERIAL_RX_FIFO_GT_HALF       (0x0E)
#define USBSERIAL_RX_FIFO_FULL          (0x0F)

#define USBSERIAL_TX_FIFO_FULL          (0x00)
#define USBSERIAL_TX_FIFO_EMPTY         (0x01)
#define USBSERIAL_TX_FIFO_GT_HALF       (0x02)
#define USBSERIAL_TX_FIFO_GT_QUARTER    (0x03)
#define USBSERIAL_TX_FIFO_LT_QUARTER    (0x04)
#define USBSERIAL_TX_FIFO_32_TO_63      (0x0A)
#define USBSERIAL_TX_FIFO_16_TO_31      (0x0B)
#define USBSERIAL_TX_FIFO_8_TO_15       (0x0C)
#define USBSERIAL_TX_FIFO_4_TO_7        (0x0D)
#define USBSERIAL_TX_FIFO_GE_2          (0x0E)
#define USBSERIAL_TX_FIFO_GE_1          (0x0F)

struct fpga_usbserial_regs {
	uint32_t device_id;
	uint32_t rev_num;
	uint16_t scratch_reg;
	uint16_t reserved1;
	uint32_t clock_select;
	uint32_t usbpid;
	uint32_t reserved2[11];
	unsigned u2m_fifo_flags : 4;
	unsigned reserved3 : 28;
	unsigned rdata : 8;
	unsigned reserved4 : 24;
	uint32_t reserved5[14];
	unsigned m2u_fifo_flags : 4;
	unsigned reserved6 : 28;
	unsigned wdata : 8;
	unsigned reserved7 : 24;
	uint32_t reserved8[14];
	unsigned u2m_fifo_int_en : 1;
	unsigned reserved9 : 31;
};

#endif /*  ZEPHYR_DRIVERS_SERIAL_UART_QL_USBSERIALPORT_S3B_H_ */
