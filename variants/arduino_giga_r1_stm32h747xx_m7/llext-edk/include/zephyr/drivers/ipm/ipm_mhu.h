/*
 * Copyright (c) 2019 Linaro Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_IPM_IPM_MHU_H_
#define ZEPHYR_DRIVERS_IPM_IPM_MHU_H_

#include <zephyr/kernel.h>
#include <zephyr/drivers/ipm.h>
#include <zephyr/device.h>

#ifdef __cplusplus
extern "C" {
#endif

#define IPM_MHU_MAX_DATA_SIZE		1
#define IPM_MHU_MAX_ID_VAL		0
#define SSE_200_CPU_ID_UNIT_OFFSET	((0x1F000UL))
#define SSE_200_DEVICE_BASE_REG_MSK	(0xF0000000UL)

/* SSE 200 MHU register map structure */
struct ipm_mhu_reg_map_t {
	/* (R/ ) CPU 0 Interrupt Status Register */
	volatile uint32_t cpu0intr_stat;
	volatile uint32_t cpu0intr_set;
	volatile uint32_t cpu0intr_clr;
	volatile uint32_t reserved0;
	/* (R/ ) CPU 1 Interrupt Status Register */
	volatile uint32_t cpu1intr_stat;
	volatile uint32_t cpu1intr_set;
	volatile uint32_t cpu1intr_clr;
	volatile uint32_t reserved1[1004];
	volatile uint32_t pidr4;
	volatile uint32_t reserved2[3];
	volatile uint32_t pidr0;
	volatile uint32_t pidr1;
	volatile uint32_t pidr2;
	volatile uint32_t pidr3;
	volatile uint32_t cidr0;
	volatile uint32_t cidr1;
	volatile uint32_t cidr2;
	volatile uint32_t cidr3;
};

/* MHU enumeration types */
enum ipm_mhu_error_t {
	IPM_MHU_ERR_NONE = 0,
	IPM_MHU_ERR_INVALID_ARG,
};

/* MHU enumeration types */
enum ipm_mhu_cpu_id_t {
	IPM_MHU_CPU0 = 0,
	IPM_MHU_CPU1,
	IPM_MHU_CPU_MAX,
};

struct ipm_mhu_device_config {
	uint8_t *base;
	void (*irq_config_func)(const struct device *d);
};

/* Device data structure */
struct ipm_mhu_data {
	ipm_callback_t callback;
	void *user_data;
};

#ifdef __cplusplus
}
#endif

#endif /* ZEPHYR_DRIVERS_IPM_IPM_MHU_H_ */
