/*
 * Copyright (c) 2021 Antony Pavlov <antonynpavlov@gmail.com>
 *
 * based on include/arch/riscv/exception.h
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_ARCH_MIPS_EXCEPTION_H_
#define ZEPHYR_INCLUDE_ARCH_MIPS_EXCEPTION_H_

#ifndef _ASMLANGUAGE
#include <zephyr/types.h>
#include <zephyr/toolchain.h>

#ifdef __cplusplus
extern "C" {
#endif

struct arch_esf {
	unsigned long ra;
	unsigned long gp;

	unsigned long t0;
	unsigned long t1;
	unsigned long t2;
	unsigned long t3;
	unsigned long t4;
	unsigned long t5;
	unsigned long t6;
	unsigned long t7;
	unsigned long t8;
	unsigned long t9;

	unsigned long a0;
	unsigned long a1;
	unsigned long a2;
	unsigned long a3;

	unsigned long v0;
	unsigned long v1;

	unsigned long at;

	unsigned long epc;
	unsigned long badvaddr;
	unsigned long hi;
	unsigned long lo;
	unsigned long status;
	unsigned long cause;
};

#ifdef __cplusplus
}
#endif

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_INCLUDE_ARCH_MIPS_EXCEPTION_H_ */
