/*
 * Copyright (c) 2024 Linumiz
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DRIVERS_ADC_ADS131M02_H_
#define ZEPHYR_INCLUDE_DRIVERS_ADC_ADS131M02_H_

#include <zephyr/device.h>

enum ads131m02_adc_mode {
	ADS131M02_CONTINUOUS_MODE,
	ADS131M02_GLOBAL_CHOP_MODE
};

enum ads131m02_adc_power_mode {
	ADS131M02_VLP,
	ADS131M02_LP,
	ADS131M02_HR
};

enum ads131m02_gc_delay {
	ADS131M02_GC_DELAY_2,
	ADS131M02_GC_DELAY_4,
	ADS131M02_GC_DELAY_8,
	ADS131M02_GC_DELAY_16,
	ADS131M02_GC_DELAY_32,
	ADS131M02_GC_DELAY_64,
	ADS131M02_GC_DELAY_128,
	ADS131M02_GC_DELAY_256,
	ADS131M02_GC_DELAY_512,
	ADS131M02_GC_DELAY_1024,
	ADS131M02_GC_DELAY_2048,
	ADS131M02_GC_DELAY_4096,
	ADS131M02_GC_DELAY_8192,
	ADS131M02_GC_DELAY_16384,
	ADS131M02_GC_DELAY_32768,
	ADS131M02_GC_DELAY_65536
};

int ads131m02_set_adc_mode(const struct device *dev, enum ads131m02_adc_mode mode,
			   enum ads131m02_gc_delay gc_delay);

int ads131m02_set_power_mode(const struct device *dev,
			     enum ads131m02_adc_power_mode mode);

#endif
