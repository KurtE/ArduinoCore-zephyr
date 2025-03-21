/*
 * Copyright (c) 2016 Jean-Paul Etienne <fractalclone@gmail.com>
 * Copyright (c) 2018 Foundries.io Ltd
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief RISCV public exception handling
 *
 * RISCV-specific kernel exception handling interface.
 */

#ifndef ZEPHYR_INCLUDE_ARCH_RISCV_EXCEPTION_H_
#define ZEPHYR_INCLUDE_ARCH_RISCV_EXCEPTION_H_

#ifndef _ASMLANGUAGE
#include <zephyr/types.h>
#include <zephyr/toolchain.h>

#ifdef CONFIG_RISCV_SOC_CONTEXT_SAVE
#include <soc_context.h>
#endif

#ifdef CONFIG_RISCV_SOC_HAS_ISR_STACKING
#include <soc_isr_stacking.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * The name of the structure which contains soc-specific state, if
 * any, as well as the soc_esf_t typedef below, are part of the RISC-V
 * arch API.
 *
 * The contents of the struct are provided by a SOC-specific
 * definition in soc_context.h.
 */
#ifdef CONFIG_RISCV_SOC_CONTEXT_SAVE
struct soc_esf {
	SOC_ESF_MEMBERS;
};
#endif

#ifdef CONFIG_EXTRA_EXCEPTION_INFO
/* Forward declaration */
struct _callee_saved;
typedef struct _callee_saved _callee_saved_t;
#endif /* CONFIG_EXTRA_EXCEPTION_INFO */

#if defined(CONFIG_RISCV_SOC_HAS_ISR_STACKING)
	SOC_ISR_STACKING_ESF_DECLARE;
#else
struct arch_esf {
	unsigned long ra;

	unsigned long t0;
	unsigned long t1;
	unsigned long t2;
#if !defined(CONFIG_RISCV_ISA_RV32E)
	unsigned long t3;
	unsigned long t4;
	unsigned long t5;
	unsigned long t6;
#endif /* !CONFIG_RISCV_ISA_RV32E */

	unsigned long a0;
	unsigned long a1;
	unsigned long a2;
	unsigned long a3;
	unsigned long a4;
	unsigned long a5;
#if !defined(CONFIG_RISCV_ISA_RV32E)
	unsigned long a6;
	unsigned long a7;
#endif /* !CONFIG_RISCV_ISA_RV32E */

#ifdef CONFIG_CLIC_SUPPORT_INTERRUPT_LEVEL
	unsigned long mcause;
#endif /* CONFIG_CLIC_SUPPORT_INTERRUPT_LEVEL */

	unsigned long mepc;
	unsigned long mstatus;

	unsigned long s0;

#ifdef CONFIG_USERSPACE
	unsigned long sp;
#endif

#ifdef CONFIG_EXTRA_EXCEPTION_INFO
	_callee_saved_t *csf;
#endif /* CONFIG_EXTRA_EXCEPTION_INFO */

#ifdef CONFIG_RISCV_SOC_CONTEXT_SAVE
	struct soc_esf soc_context;
#endif
} __aligned(16);
#endif /* CONFIG_RISCV_SOC_HAS_ISR_STACKING */

#ifdef CONFIG_RISCV_SOC_CONTEXT_SAVE
typedef struct soc_esf soc_esf_t;
#endif

#ifdef __cplusplus
}
#endif

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_INCLUDE_ARCH_RISCV_EXCEPTION_H_ */
