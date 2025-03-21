/*
 * Copyright (c) 2023 STMicroelectronics
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_LIS2DUX12_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_LIS2DUX12_H_

#include <zephyr/dt-bindings/dt-util.h>

/* Operating Mode */
#define LIS2DUX12_OPER_MODE_POWER_DOWN      0
#define LIS2DUX12_OPER_MODE_LOW_POWER       1
#define LIS2DUX12_OPER_MODE_HIGH_RESOLUTION 2
#define LIS2DUX12_OPER_MODE_HIGH_FREQUENCY  3

/* Data rate */
#define LIS2DUX12_DT_ODR_OFF      0
#define LIS2DUX12_DT_ODR_1Hz_ULP  1
#define LIS2DUX12_DT_ODR_3Hz_ULP  2
#define LIS2DUX12_DT_ODR_25Hz_ULP 3
#define LIS2DUX12_DT_ODR_6Hz      4
#define LIS2DUX12_DT_ODR_12Hz5    5
#define LIS2DUX12_DT_ODR_25Hz     6
#define LIS2DUX12_DT_ODR_50Hz     7
#define LIS2DUX12_DT_ODR_100Hz    8
#define LIS2DUX12_DT_ODR_200Hz    9
#define LIS2DUX12_DT_ODR_400Hz    10
#define LIS2DUX12_DT_ODR_800Hz    11
#define LIS2DUX12_DT_ODR_END      12

/* Accelerometer Full-scale */
#define LIS2DUX12_DT_FS_2G  0
#define LIS2DUX12_DT_FS_4G  1
#define LIS2DUX12_DT_FS_8G  2
#define LIS2DUX12_DT_FS_16G 3

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_LIS2DUX12_H_ */
