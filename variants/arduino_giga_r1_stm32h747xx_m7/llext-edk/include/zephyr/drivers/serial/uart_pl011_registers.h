/*
 * Copyright (c) 2018 Linaro Limited
 * Copyright (c) 2022 Arm Limited (or its affiliates). All rights reserved.
 * Copyright (c) 2023 Antmicro <www.antmicro.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_SERIAL_UART_PL011_REGISTERS_H_
#define ZEPHYR_DRIVERS_SERIAL_UART_PL011_REGISTERS_H_

#include <zephyr/device.h>

/*
 * UART PL011 register map structure
 */
struct pl011_regs {
	uint32_t dr;
	union {
		uint32_t rsr;
		uint32_t ecr;
	};
	uint32_t reserved_0[4];
	uint32_t fr;
	uint32_t reserved_1;
	uint32_t ilpr;
	uint32_t ibrd;
	uint32_t fbrd;
	uint32_t lcr_h;
	uint32_t cr;
	uint32_t ifls;
	uint32_t imsc;
	uint32_t ris;
	uint32_t mis;
	uint32_t icr;
	uint32_t dmacr;
};

static inline
volatile struct pl011_regs *get_uart(const struct device *dev)
{
	return (volatile struct pl011_regs *)DEVICE_MMIO_GET(dev);
}

#define PL011_BIT_MASK(x, y) (((2 << x) - 1) << y)

/* PL011 Uart Flags Register */
#define PL011_FR_CTS		BIT(0)
#define PL011_FR_DSR		BIT(1)
#define PL011_FR_DCD		BIT(2)
#define PL011_FR_BUSY		BIT(3)
#define PL011_FR_RXFE		BIT(4)
#define PL011_FR_TXFF		BIT(5)
#define PL011_FR_RXFF		BIT(6)
#define PL011_FR_TXFE		BIT(7)
#define PL011_FR_RI		BIT(8)

/* PL011 Integer baud rate register */
#define PL011_IBRD_BAUD_DIVINT_MASK	0xff

/* PL011 Fractional baud rate register */
#define PL011_FBRD_BAUD_DIVFRAC		0x3f
#define PL011_FBRD_WIDTH		6u

/* PL011 Receive status register / error clear register */
#define PL011_RSR_ECR_FE	BIT(0)
#define PL011_RSR_ECR_PE	BIT(1)
#define PL011_RSR_ECR_BE	BIT(2)
#define PL011_RSR_ECR_OE	BIT(3)

#define PL011_RSR_ERROR_MASK	(PL011_RSR_ECR_FE | PL011_RSR_ECR_PE | \
		PL011_RSR_ECR_BE | PL011_RSR_ECR_OE)

/* PL011 Line Control Register  */
#define PL011_LCRH_BRK		BIT(0)
#define PL011_LCRH_PEN		BIT(1)
#define PL011_LCRH_EPS		BIT(2)
#define PL011_LCRH_STP2		BIT(3)
#define PL011_LCRH_FEN		BIT(4)
#define PL011_LCRH_WLEN_SHIFT	5
#define PL011_LCRH_WLEN_WIDTH	2
#define PL011_LCRH_SPS		BIT(7)

#define PL011_LCRH_WLEN_SIZE(x) (x - 5)

#define PL011_LCRH_FORMAT_MASK	(PL011_LCRH_PEN | PL011_LCRH_EPS | \
		PL011_LCRH_SPS | \
		PL011_BIT_MASK(PL011_LCRH_WLEN_WIDTH, PL011_LCRH_WLEN_SHIFT))

#define PL011_LCRH_PARTIY_EVEN	(PL011_LCRH_PEN | PL011_LCRH_EPS)
#define PL011_LCRH_PARITY_ODD	(PL011_LCRH_PEN)
#define PL011_LCRH_PARITY_NONE	(0)

/* PL011 Control Register */
#define PL011_CR_UARTEN		BIT(0)
#define PL011_CR_SIREN		BIT(1)
#define PL011_CR_SIRLP		BIT(2)
#define PL011_CR_LBE		BIT(7)
#define PL011_CR_TXE		BIT(8)
#define PL011_CR_RXE		BIT(9)
#define PL011_CR_DTR		BIT(10)
#define PL011_CR_RTS		BIT(11)
#define PL011_CR_Out1		BIT(12)
#define PL011_CR_Out2		BIT(13)
#define PL011_CR_RTSEn		BIT(14)
#define PL011_CR_CTSEn		BIT(15)

/* PL011 Control Register - vendor-specific fields */
#define PL011_CR_AMBIQ_CLKEN	BIT(3)
#define PL011_CR_AMBIQ_CLKSEL	GENMASK(6, 4)
#define PL011_CR_AMBIQ_CLKSEL_NOCLK	0
#define PL011_CR_AMBIQ_CLKSEL_24MHZ	1
#define PL011_CR_AMBIQ_CLKSEL_12MHZ	2
#define PL011_CR_AMBIQ_CLKSEL_6MHZ	3
#define PL011_CR_AMBIQ_CLKSEL_3MHZ	4
#define PL011_CR_AMBIQ_CLKSEL_48MHZ	5

/* PL011 Interrupt Fifo Level Select Register */
#define PL011_IFLS_RXIFLSEL_M	GENMASK(5, 3)
#define RXIFLSEL_1_2_FULL	2UL
#define PL011_IFLS_TXIFLSEL_M	GENMASK(2, 0)
#define TXIFLSEL_1_8_FULL	0UL

/* PL011 Interrupt Mask Set/Clear Register */
#define PL011_IMSC_RIMIM	BIT(0)
#define PL011_IMSC_CTSMIM	BIT(1)
#define PL011_IMSC_DCDMIM	BIT(2)
#define PL011_IMSC_DSRMIM	BIT(3)
#define PL011_IMSC_RXIM		BIT(4)
#define PL011_IMSC_TXIM		BIT(5)
#define PL011_IMSC_RTIM		BIT(6)
#define PL011_IMSC_FEIM		BIT(7)
#define PL011_IMSC_PEIM		BIT(8)
#define PL011_IMSC_BEIM		BIT(9)
#define PL011_IMSC_OEIM		BIT(10)

#define PL011_IMSC_ERROR_MASK	(PL011_IMSC_FEIM | \
		PL011_IMSC_PEIM | PL011_IMSC_BEIM | \
		PL011_IMSC_OEIM)

#define PL011_IMSC_MASK_ALL (PL011_IMSC_OEIM | PL011_IMSC_BEIM | \
		PL011_IMSC_PEIM | PL011_IMSC_FEIM | \
		PL011_IMSC_RIMIM | PL011_IMSC_CTSMIM | \
		PL011_IMSC_DCDMIM | PL011_IMSC_DSRMIM | \
		PL011_IMSC_RXIM | PL011_IMSC_TXIM | \
		PL011_IMSC_RTIM)

/* PL011 Raw Interrupt Status Register */
#define PL011_RIS_TXRIS		BIT(5)


#endif /* ZEPHYR_DRIVERS_SERIAL_UART_PL011_REGISTERS_H_ */
