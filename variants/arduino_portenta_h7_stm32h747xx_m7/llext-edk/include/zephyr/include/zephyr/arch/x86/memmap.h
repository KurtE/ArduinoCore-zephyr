/*
 * Copyright (c) 2019 Intel Corporation
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_ARCH_X86_MEMMAP_H_
#define ZEPHYR_INCLUDE_ARCH_X86_MEMMAP_H_

#ifndef _ASMLANGUAGE

/*
 * The "source" of the memory map refers to where we got the data to fill in
 * the map. Order is important: if multiple sources are available, then the
 * numerically HIGHEST source wins, a manually-provided map being the "best".
 */

enum x86_memmap_source {
	X86_MEMMAP_SOURCE_DEFAULT,
	X86_MEMMAP_SOURCE_MULTIBOOT_MEM,
	X86_MEMMAP_SOURCE_MULTIBOOT_MMAP,
	X86_MEMMAP_SOURCE_MANUAL
};

extern enum x86_memmap_source x86_memmap_source;

/*
 * For simplicity, we maintain a fixed-sized array of memory regions.
 *
 * We don't only track available RAM -- we track unavailable regions, too:
 * sometimes we'll be given a map with overlapping regions. We have to be
 * pessimistic about what is considered "available RAM" and it's easier to
 * keep all the regions around than it is to correct incorrect maps. It's
 * also handy to have the entire map intact for diagnostic purposes.
 */

enum x86_memmap_entry_type {
	/*
	 * the UNUSED entry must have a numerical 0 value, so
	 * that partially-initialized arrays behave as expected.
	 */

	X86_MEMMAP_ENTRY_UNUSED,
	X86_MEMMAP_ENTRY_RAM,
	X86_MEMMAP_ENTRY_ACPI,
	X86_MEMMAP_ENTRY_NVS,
	X86_MEMMAP_ENTRY_DEFECTIVE,
	X86_MEMMAP_ENTRY_UNKNOWN
};

struct x86_memmap_entry {
	uint64_t base;
	uint64_t length;
	enum x86_memmap_entry_type type;
};

extern struct x86_memmap_entry x86_memmap[];

/*
 * We keep track of kernel memory areas (text, data, etc.) in a table for
 * ease of reference. There's really no reason to export this table, or to
 * label the members, except for diagnostic purposes.
 */

struct x86_memmap_exclusion {
	char *name;
	void *start;
	void *end;
};

extern struct x86_memmap_exclusion x86_memmap_exclusions[];
extern int x86_nr_memmap_exclusions;

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_INCLUDE_ARCH_X86_MEMMAP_H_ */
