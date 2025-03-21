/*
 * Copyright (c) 2020 Intel Corporation
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_ARCH_X86_INTEL_VTD_H
#define ZEPHYR_INCLUDE_ARCH_X86_INTEL_VTD_H

#ifndef _ASMLANGUAGE

/*************\
 * Registers *
\*************/

#define VTD_VER_REG		0x000
#define VTD_CAP_REG		0x008
#define VTD_ECAP_REG		0x010
#define VTD_GCMD_REG		0x018
#define VTD_GSTS_REG		0x01C
#define VTD_RTADDR_REG		0x020
#define VTD_CCMD_REG		0x028
#define VTD_FSTS_REG		0x034
#define VTD_FECTL_REG		0x038
#define VTD_FEDATA_REG		0x03C
#define VTD_FEADDR_REG		0x040
#define VTD_FEUADDR_REG		0x044
#define VTD_AFLOG_REG		0x058
#define VTD_PMEN_REG		0x064
#define VTD_PLMBASE_REG		0x068
#define VTD_PLMLIMIT_REG	0x06C
#define VTD_PHMBASE_REG		0x070
#define VTD_PHMLIMIT_REG	0x078
#define VTD_IQH_REG		0x080
#define VTD_IQT_REG		0x088
#define VTD_IQA_REG		0x090
#define VTD_ICS_REG		0x09C
#define VTD_IECTL_REG		0x0A0
#define VTD_IEDATA_REG		0x0A4
#define VTD_IEADDR_REG		0x0A8
#define VTD_IEUADDR_REG		0x0AC
#define VTD_IQERCD_REG		0x0B0
#define VTD_IRTA_REG		0x0B8
#define VTD_PQH_REG		0x0C0
#define VTD_PQT_REG		0x0C8
#define VTD_PQA_REG		0x0D0
#define VTD_PRS_REG		0x0DC
#define VTD_PECTL_REG		0x0E0
#define VTD_PEDATA_REG		0x0E4
#define VTD_PEADDR_REG		0x0E8
#define VTD_PEUADDR_REG		0x0EC
#define VTD_MTRRCAP_REG		0x100
#define VTD_MTRRDEF_REG		0x108
#define VTD_MTRR_FIX64K_00000_REG 0x120
#define VTD_MTRR_FIX16K_80000_REG 0x128
#define VTD_MTRR_FIX16K_A0000_REG 0x130
#define VTD_MTRR_FIX4K_C0000_REG 0x138
#define VTD_MTRR_FIX4K_C8000_REG 0x140
#define VTD_MTRR_FIX4K_D0000_REG 0x148
#define VTD_MTRR_FIX4K_D8000_REG 0x150
#define VTD_MTRR_FIX4K_E0000_REG 0x158
#define VTD_MTRR_FIX4K_E8000_REG 0x160
#define VTD_MTRR_FIX4K_F0000_REG 0x168
#define VTD_MTRR_FIX4K_F8000_REG 0x170
#define VTD_MTRR_PHYSBASE0_REG	0x180
#define VTD_MTRR_PHYSMASK0_REG	0x188
#define VTD_MTRR_PHYSBASE1_REG	0x190
#define VTD_MTRR_PHYSMASK1_REG	0x198
#define VTD_MTRR_PHYSBASE2_REG	0x1A0
#define VTD_MTRR_PHYSMASK2_REG	0x1A8
#define VTD_MTRR_PHYSBASE3_REG	0x1B0
#define VTD_MTRR_PHYSMASK3_REG	0x1B8
#define VTD_MTRR_PHYSBASE4_REG	0x1C0
#define VTD_MTRR_PHYSMASK4_REG	0x1C8
#define VTD_MTRR_PHYSBASE5_REG	0x1D0
#define VTD_MTRR_PHYSMASK5_REG	0x1D8
#define VTD_MTRR_PHYSBASE6_REG	0x1E0
#define VTD_MTRR_PHYSMASK6_REG	0x1E8
#define VTD_MTRR_PHYSBASE7_REG	0x1F0
#define VTD_MTRR_PHYSMASK7_REG	0x1F8
#define VTD_MTRR_PHYSBASE8_REG	0x200
#define VTD_MTRR_PHYSMASK8_REG	0x208
#define VTD_MTRR_PHYSBASE9_REG	0x210
#define VTD_MTRR_PHYSMASK9_REG	0x218
#define VTD_VCCAP_REG		0xE00
#define VTD_VCMD		0xE10
#define VTD_VCRSP		0xE20

/* Capability Register details */
#define VTD_CAP_NFR_POS		40
#define VTD_CAP_NFR_MASK	((uint64_t)0xFFUL << VTD_CAP_NFR_POS)
#define VTD_CAP_NFR(cap)					\
	(((uint64_t)cap & VTD_CAP_NFR_MASK) >> VTD_CAP_NFR_POS)

#define VTD_CAP_FRO_POS		24
#define VTD_CAP_FRO_MASK	((uint64_t)0x3FFUL << VTD_CAP_FRO_POS)
#define VTD_CAP_FRO(cap)					\
	(((uint64_t)cap & VTD_CAP_FRO_MASK) >> VTD_CAP_FRO_POS)

/* Extended Capability Register details */
#define VTD_ECAP_C		BIT(0)

/* Global Command Register details */
#define VTD_GCMD_CFI		23
#define VTD_GCMD_SIRTP		24
#define VTD_GCMD_IRE		25
#define VTD_GCMD_QIE		26
#define VTD_GCMD_WBF		27
#define VTD_GCMD_EAFL		28
#define VTD_GCMD_SFL		29
#define VTD_GCMD_SRTP		30
#define VTD_GCMD_TE		31

/* Global Status Register details */
#define VTD_GSTS_CFIS		23
#define VTD_GSTS_SIRTPS		24
#define VTD_GSTS_IRES		25
#define VTD_GSTS_QIES		26
#define VTD_GSTS_WBFS		27
#define VTD_GSTS_EAFLS		28
#define VTD_GSTS_SFLS		29
#define VTD_GSTS_SRTPS		30
#define VTD_GSTS_TES		31

/* Interrupt Remapping Table Address Register details */
#define VTD_IRTA_SIZE_MASK	0x000000000000000FUL
#define VTD_IRTA_EIME		BIT(11)

#define VTD_IRTA_REG_GEN_CONTENT(addr, size, mode)		\
	((uint64_t)(addr) | (mode) | (size & VTD_IRTA_SIZE_MASK))

/* Fault event control register details */
#define VTD_FECTL_REG_IP	30
#define VTD_FECTL_REG_IM	31

/* Fault event status register details */
#define VTD_FSTS_PFO		BIT(0)
#define VTD_FSTS_PPF		BIT(1)
#define VTD_FSTS_AFO		BIT(2)
#define VTD_FSTS_APF		BIT(3)
#define VTD_FSTS_IQE		BIT(4)
#define VTD_FSTS_ICE		BIT(5)
#define VTD_FSTS_ITE		BIT(6)

#define VTD_FSTS_FRI_POS	8
#define VTD_FSTS_FRI_MASK	(0xF << VTD_FSTS_FRI_POS)
#define VTD_FSTS_FRI(status)					\
	((status & VTD_FSTS_FRI_MASK) >> VTD_FSTS_FRI_POS)

#define VTD_FSTS_CLEAR_STATUS				\
	(VTD_FSTS_PFO | VTD_FSTS_AFO | VTD_FSTS_APF |	\
	 VTD_FSTS_IQE | VTD_FSTS_ICE | VTD_FSTS_ITE)

#define VTD_FSTS_CLEAR(status)			\
	(status & VTD_FSTS_CLEAR_STATUS)

/* Fault recording register(s) details
 * Note: parts of the register are split into highest and lowest 64bits
 * so bit positions are depending on it and are not based on 128bits reg.
 */
#define VTD_FRCD_REG_SIZE	16

/* Highest 64bits info */
#define VTD_FRCD_F		BIT(63)
#define VTD_FRCD_T		BIT(62)

#define VTD_FRCD_FR_POS		32
#define VTD_FRCD_FR_MASK	((uint64_t)0xFF << VTD_FRCD_FR_POS)
#define VTD_FRCD_FR(fault)					\
	((uint8_t)((fault & VTD_FRCD_FR_MASK) >> VTD_FRCD_FR_POS))

#define VTD_FRCD_SID_MASK	0xFFFF
#define VTD_FRCD_SID(fault)			\
	((uint16_t)(fault & VTD_FRCD_SID_MASK))

/* Lowest 64bits info */
#define VTD_FRCD_FI_POS		12
#define VTD_FRCD_FI_MASK	((uint64_t)0xFFFFFFFFFFFFF << VTD_FRCD_FI_POS)
#define VTD_FRCD_FI(fault)				\
	((fault & VTD_FRCD_FI_MASK) >> VTD_FRCD_FI_POS)

#define VTD_FRCD_FI_IR_POS	48
#define VTD_FRCD_FI_IR_MASK	((uint64_t)0xFFFF << VTD_FRCD_FI_IR_POS)
#define VTD_FRCD_FI_IR(fault)					\
	((fault & VTD_FRCD_FI_IR_MASK) >> VTD_FRCD_FI_IR_POS)

/* Invalidation Queue Address register details */
#define VTD_IQA_SIZE_MASK	0x7
#define VTD_IQA_WIDTH_128_BIT	0
#define VTD_IQA_WIDTH_256_BIT	BIT(11)
#define VTD_IQA_REG_GEN_CONTENT(addr, width, size)			\
	((uint64_t)0 | (addr) | (width) | (size & VTD_IQA_SIZE_MASK))

/* Invalidation Queue Head register details */
#define VTD_IQH_QH_POS_128	4
#define VTD_IQH_QH_MASK		((uint64_t)0xEF << VTD_IQH_QH_POS_128)

/* Invalidation Queue Tail register details */
#define VTD_IQT_QT_POS_128	4
#define VTD_IQT_QT_MASK		((uint64_t)0xEF << VTD_IQT_QT_POS_128)

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_INCLUDE_ARCH_X86_INTEL_VTD_H */
