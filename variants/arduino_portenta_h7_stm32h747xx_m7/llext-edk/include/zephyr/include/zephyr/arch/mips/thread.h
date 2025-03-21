/*
 * Copyright (c) 2020 Antony Pavlov <antonynpavlov@gmail.com>
 *
 * based on include/arch/riscv/thread.h
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Per-arch thread definition
 *
 * This file contains definitions for
 *
 *  struct _thread_arch
 *  struct _callee_saved
 *
 * necessary to instantiate instances of struct k_thread.
 */

#ifndef ZEPHYR_INCLUDE_ARCH_MIPS_THREAD_H_
#define ZEPHYR_INCLUDE_ARCH_MIPS_THREAD_H_

#ifndef _ASMLANGUAGE
#include <zephyr/types.h>

/*
 * The following structure defines the list of registers that need to be
 * saved/restored when a cooperative context switch occurs.
 */
struct _callee_saved {
	unsigned long sp;

	unsigned long s0;
	unsigned long s1;
	unsigned long s2;
	unsigned long s3;
	unsigned long s4;
	unsigned long s5;
	unsigned long s6;
	unsigned long s7;
	unsigned long s8;
};
typedef struct _callee_saved _callee_saved_t;

struct _thread_arch {
	uint32_t swap_return_value;
};

typedef struct _thread_arch _thread_arch_t;

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_INCLUDE_ARCH_MIPS_THREAD_H_ */
