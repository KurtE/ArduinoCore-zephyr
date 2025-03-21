/*
 * Copyright 2020 Broadcom
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef DMA_IPROC_PAX_V1
#define DMA_IPROC_PAX_V1

#include "dma_iproc_pax.h"

/* Register RM_CONTROL fields */
#define RM_COMM_MSI_INTERRUPT_STATUS_MASK	0x30d0
#define RM_COMM_MSI_INTERRUPT_STATUS_CLEAR	0x30d4

#define RM_COMM_CONTROL_MODE_MASK			0x3
#define RM_COMM_CONTROL_MODE_SHIFT			0
#define RM_COMM_CONTROL_MODE_TOGGLE			0x2
#define RM_COMM_CONTROL_CONFIG_DONE			BIT(2)
#define RM_COMM_CONTROL_LINE_INTR_EN_SHIFT		4
#define RM_COMM_CONTROL_LINE_INTR_EN			BIT(4)
#define RM_COMM_CONTROL_AE_TIMEOUT_EN_SHIFT		5
#define RM_COMM_CONTROL_AE_TIMEOUT_EN		BIT(5)
#define RM_COMM_MSI_DISABLE_VAL			3

#define PAX_DMA_TYPE_DMA_DESC			0x3
#define PAX_DMA_NUM_BD_BUFFS			8
/* DMA desc count: 3 entries per packet */
#define PAX_DMA_RM_DESC_BDCOUNT			3
/* 1 DMA packet desc takes 3 BDs */
#define PAX_DMA_DMA_DESC_SIZE			(PAX_DMA_RM_DESC_BDWIDTH * \
						 PAX_DMA_RM_DESC_BDCOUNT)
/* Max size of transfer in single packet */
#define PAX_DMA_MAX_DMA_SIZE_PER_BD		(16 * 1024 * 1024)

/* ascii signature  'V' 'K' */
#define PAX_DMA_WRITE_SYNC_SIGNATURE		0x564B

/* DMA transfers supported from 4 bytes thru 16M, size aligned to 4 bytes */
#define PAX_DMA_MIN_SIZE			4
#define PAX_DMA_MAX_SIZE			(16 * 1024 * 1024)

/* Bits 0:1 ignored by PAX DMA, i.e. 4-byte address alignment */
#define PAX_DMA_PCI_ADDR_LS_IGNORE_BITS		2
#define PAX_DMA_PCI_ADDR_ALIGNMT_SHIFT		PAX_DMA_PCI_ADDR_LS_IGNORE_BITS

/* s/w payload struct, enough space for 1020 sglist elements */
#define PAX_DMA_PAYLOAD_BUFF_SIZE (32 * 1024)

/*
 * Per-ring memory, with 8K & 4K alignment
 * Alignment may not be ensured by allocator
 * s/w need to allocate extra upto 8K to
 * ensure aligned memory space.
 */
#define PAX_DMA_PER_RING_ALLOC_SIZE	(PAX_DMA_RM_CMPL_RING_SIZE * 2  + \
					 PAX_DMA_NUM_BD_BUFFS * \
					 PAX_DMA_RM_DESC_RING_SIZE + \
					 PAX_DMA_PAYLOAD_BUFF_SIZE)

/* RM header desc field */
struct rm_header {
	uint64_t opq : 16;
	uint64_t res1 : 20;
	uint64_t bdcount : 5;
	uint64_t prot : 2;
	uint64_t res2 : 13;
	uint64_t start : 1;
	uint64_t end : 1;
	uint64_t toggle : 1;
	uint64_t res3 : 1;
	uint64_t type : 4;
} __attribute__ ((__packed__));

/* dma desc header field */
struct dma_header_desc {
	uint64_t length : 25;
	uint64_t res1: 31;
	uint64_t opcode : 4;
	uint64_t res2: 2;
	uint64_t type : 2;
} __attribute__ ((__packed__));

/* dma desc AXI addr field */
struct axi_addr_desc {
	uint64_t axi_addr : 48;
	uint64_t res : 14;
	uint64_t type : 2;
} __attribute__ ((__packed__));

/* dma desc PCI addr field */
struct pci_addr_desc {
	uint64_t pcie_addr : 62;
	uint64_t type : 2;
} __attribute__ ((__packed__));

/* DMA descriptor */
struct dma_desc {
	struct dma_header_desc hdr;
	struct axi_addr_desc axi;
	struct pci_addr_desc pci;
} __attribute__ ((__packed__));

struct next_ptr_desc {
	uint64_t addr : 44;
	uint64_t res1 : 14;
	uint64_t toggle : 1;
	uint64_t res2 : 1;
	uint64_t type : 4;
} __attribute__ ((__packed__));

#endif
