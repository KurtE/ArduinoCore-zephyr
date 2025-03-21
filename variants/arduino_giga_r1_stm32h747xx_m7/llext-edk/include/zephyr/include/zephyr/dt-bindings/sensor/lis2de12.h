/*
 * Copyright (c) 2024 STMicroelectronics
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_ST_LIS2DE12_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_ST_LIS2DE12_H_

/* Accel range */
#define	LIS2DE12_DT_FS_2G			0
#define	LIS2DE12_DT_FS_4G			1
#define	LIS2DE12_DT_FS_8G			2
#define	LIS2DE12_DT_FS_16G			3

/* Accel rates */
#define LIS2DE12_DT_ODR_OFF			0x00
#define LIS2DE12_DT_ODR_AT_1Hz			0x01
#define LIS2DE12_DT_ODR_AT_10Hz			0x02
#define LIS2DE12_DT_ODR_AT_25Hz			0x03
#define LIS2DE12_DT_ODR_AT_50Hz			0x04
#define LIS2DE12_DT_ODR_AT_100Hz		0x05
#define LIS2DE12_DT_ODR_AT_200Hz		0x06
#define LIS2DE12_DT_ODR_AT_400Hz		0x07
#define LIS2DE12_DT_ODR_AT_1kHz620		0x08
#define LIS2DE12_DT_ODR_AT_5kHz376		0x09

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_ST_LIS2DE12_H_ */
