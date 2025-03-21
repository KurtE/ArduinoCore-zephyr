/*
 * Copyright (c) 2021,2023, Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_KERNEL_STATS_H_
#define ZEPHYR_INCLUDE_KERNEL_STATS_H_

#include <stdint.h>
#include <stdbool.h>

/**
 * Structure used to track internal statistics about both thread
 * and CPU usage.
 */

struct k_cycle_stats {
	uint64_t  total;
#if defined(CONFIG_SCHED_THREAD_USAGE_ANALYSIS) || defined(__DOXYGEN__)
	/**
	 * @name Fields available when CONFIG_SCHED_THREAD_USAGE_ANALYSIS is selected.
	 * @{
	 */
	uint64_t  current;
	uint64_t  longest;
	uint32_t  num_windows;
	/** @} */
#endif /* CONFIG_SCHED_THREAD_USAGE_ANALYSIS */
	bool      track_usage;
};

#endif /* ZEPHYR_INCLUDE_KERNEL_STATS_H_ */
