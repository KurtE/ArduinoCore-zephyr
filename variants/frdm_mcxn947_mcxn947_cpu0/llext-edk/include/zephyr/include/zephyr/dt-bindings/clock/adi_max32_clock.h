/*
 * Copyright (c) 2023-2024 Analog Devices, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_ADI_MAX32_CLOCK_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_ADI_MAX32_CLOCK_H_

/** Peripheral clock register */
#define ADI_MAX32_CLOCK_BUS0 0
#define ADI_MAX32_CLOCK_BUS1 1
#define ADI_MAX32_CLOCK_BUS2 2

/** Clock source for peripheral interfaces like UART, WDT... */
#define ADI_MAX32_PRPH_CLK_SRC_PCLK      0
#define ADI_MAX32_PRPH_CLK_SRC_EXTCLK    1
#define ADI_MAX32_PRPH_CLK_SRC_IBRO      2
#define ADI_MAX32_PRPH_CLK_SRC_ERFO      3
#define ADI_MAX32_PRPH_CLK_SRC_ERTCO     4
#define ADI_MAX32_PRPH_CLK_SRC_INRO      5
#define ADI_MAX32_PRPH_CLK_SRC_ISO       6
#define ADI_MAX32_PRPH_CLK_SRC_IBRO_DIV8 7
#define ADI_MAX32_PRPH_CLK_SRC_IPLL      8
#define ADI_MAX32_PRPH_CLK_SRC_EBO       9

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_ADI_MAX32_CLOCK_H_ */
