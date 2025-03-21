/*
 * Copyright (c) 2023 Frontgrade Gaisler AB
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef ZEPHYR_DRIVERS_GPIO_GPIO_GRGPIO_H_
#define ZEPHYR_DRIVERS_GPIO_GPIO_GRGPIO_H_

struct grgpio_regs {
	uint32_t data;
	uint32_t output;
	uint32_t dir;
	uint32_t imask;
	uint32_t ipol;
	uint32_t iedge;
	uint32_t bypass;
	uint32_t cap;
	uint32_t irqmap[4];
	uint32_t res_30;
	uint32_t res_34;
	uint32_t res_38;
	uint32_t res_3C;
	uint32_t iavail;
	uint32_t iflag;
	uint32_t res_48;
	uint32_t pulse;
	uint32_t res_50;
	uint32_t output_or;
	uint32_t dir_or;
	uint32_t imask_or;
	uint32_t res_60;
	uint32_t output_and;
	uint32_t dir_and;
	uint32_t imask_and;
	uint32_t res_70;
	uint32_t output_xor;
	uint32_t dir_xor;
	uint32_t imask_xor;
};

#define GRGPIO_CAP_PU_BIT       18
#define GRGPIO_CAP_IER_BIT      17
#define GRGPIO_CAP_IFL_BIT      16
#define GRGPIO_CAP_IRQGEN_BIT    8
#define GRGPIO_CAP_NLINES_BIT    0

#define GRGPIO_CAP_PU           (0x1 << GRGPIO_CAP_PU_BIT)
#define GRGPIO_CAP_IER          (0x1 << GRGPIO_CAP_IER_BIT)
#define GRGPIO_CAP_IFL          (0x1 << GRGPIO_CAP_IFL_BIT)
#define GRGPIO_CAP_IRQGEN       (0x1f << GRGPIO_CAP_IRQGEN_BIT)
#define GRGPIO_CAP_NLINES       (0x1f << GRGPIO_CAP_NLINES_BIT)

#endif /* ZEPHYR_DRIVERS_GPIO_GPIO_GRGPIO_H_ */
