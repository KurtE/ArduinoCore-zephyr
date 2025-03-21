/* ioapic_priv.h - private IOAPIC APIs */

/*
 * Copyright (c) 2012-2015 Wind River Systems, Inc.
 * Copyright (c) 2015 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_INTERRUPT_CONTROLLER_INTC_IOAPIC_PRIV_H_
#define ZEPHYR_DRIVERS_INTERRUPT_CONTROLLER_INTC_IOAPIC_PRIV_H_

/* IO APIC direct register offsets */

#define IOAPIC_IND 0x00
#define IOAPIC_DATA 0x10
#define IOAPIC_IRQPA 0x20
#define IOAPIC_EOI 0x40

/* IO APIC indirect register offset */

#define IOAPIC_ID 0x00
#define IOAPIC_VERS 0x01
#define IOAPIC_ARB 0x02
#define IOAPIC_BOOT 0x03
#define IOAPIC_REDTBL 0x10

/* Interrupt delivery type */

#define IOAPIC_DT_APIC 0x0
#define IOAPIC_DT_FS 0x1

/* Version register bits */

#define IOAPIC_MRE_MASK 0x00ff0000
#define IOAPIC_MRE_POS 16
#define IOAPIC_PRQ 0x00008000
#define IOAPIC_VERSION 0x000000ff

/* Redirection table entry bits: upper 32 bit */

#define IOAPIC_DESTINATION 0xff000000

/* Redirection table entry bits: lower 32 bit */

#define IOAPIC_VEC_MASK 0x000000ff

/* VTD related macros */

#define IOAPIC_VTD_REMAP_FORMAT BIT(16)
/* We care only about the first 14 bits.
 * The 15th bits is in the first 32bits of RTE but since
 * we don't go up to that value, let's ignore it.
 */
#define IOAPIC_VTD_INDEX(index) (index << 17)

#endif /* ZEPHYR_DRIVERS_INTERRUPT_CONTROLLER_INTC_IOAPIC_PRIV_H_ */
