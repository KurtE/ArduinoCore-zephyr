/*
 * Copyright (c) 2017 Intel Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_INTERRUPT_CONTROLLER_INTC_DW_H_
#define ZEPHYR_DRIVERS_INTERRUPT_CONTROLLER_INTC_DW_H_

#include <zephyr/types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*dw_ictl_config_irq_t)(const struct device *dev);

struct dw_ictl_config {
	uint32_t base_addr;
	uint32_t numirqs;
	uint32_t isr_table_offset;
	dw_ictl_config_irq_t config_func;
};

struct dw_ictl_registers {
	uint32_t irq_inten_l;
	uint32_t irq_inten_h;
	uint32_t irq_intmask_l;
	uint32_t irq_intmask_h;
	uint32_t irq_intforce_l;
	uint32_t irq_intforce_h;
	uint32_t irq_rawstatus_l;
	uint32_t irq_rawstatus_h;
	uint32_t irq_status_l;
	uint32_t irq_status_h;
	uint32_t irq_maskstatus_l;
	uint32_t irq_maskstatus_h;
	uint32_t irq_finalstatus_l;
	uint32_t irq_finalstatus_h;
	uint32_t irq_vector;
	uint32_t Reserved1;
	uint32_t irq_vector_0;
	uint32_t Reserved2;
	uint32_t irq_vector_1;
	uint32_t Reserved3;
	uint32_t irq_vector_2;
	uint32_t Reserved4;
	uint32_t irq_vector_3;
	uint32_t Reserved5;
	uint32_t irq_vector_4;
	uint32_t Reserved6;
	uint32_t irq_vector_5;
	uint32_t Reserved7;
	uint32_t irq_vector_6;
	uint32_t Reserved8;
	uint32_t irq_vector_7;
	uint32_t Reserved9;
	uint32_t irq_vector_8;
	uint32_t Reserved10;
	uint32_t irq_vector_9;
	uint32_t Reserved11;
	uint32_t irq_vector_10;
	uint32_t Reserved12;
	uint32_t irq_vector_11;
	uint32_t Reserved13;
	uint32_t irq_vector_12;
	uint32_t Reserved14;
	uint32_t irq_vector_13;
	uint32_t Reserved15;
	uint32_t irq_vector_14;
	uint32_t Reserved16;
	uint32_t irq_vector_15;
	uint32_t Reserved17;
	uint32_t fiq_inten;
	uint32_t fiq_intmask;
	uint32_t fiq_intforce;
	uint32_t fiq_rawstatus;
	uint32_t fiq_status;
	uint32_t fiq_finalstatus;
	uint32_t irq_plevel;
	uint32_t Reserved18;
	uint32_t APB_ICTL_COMP_VERSION;
	uint32_t Reserved19[199];
};

#ifdef __cplusplus
}
#endif

#endif /* ZEPHYR_DRIVERS_INTERRUPT_CONTROLLER_INTC_DW_H_ */
