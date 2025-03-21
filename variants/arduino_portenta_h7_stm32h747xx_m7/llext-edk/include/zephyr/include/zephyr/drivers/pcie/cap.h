/*
 * Copyright (c) 2021 BayLibre, SAS
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef ZEPHYR_INCLUDE_DRIVERS_PCIE_CAP_H_
#define ZEPHYR_INCLUDE_DRIVERS_PCIE_CAP_H_

/**
 * @file
 * @brief PCIe Capabilities
 * @defgroup pcie_capabilities PCIe Capabilities
 * @ingroup pcie_host_interface
 * @{
 */

/**
 * @name PCI & PCI Express Capabilities
 *
 * From PCI Code and ID Assignment Specification Revision 1.11
 * @{
 */
#define PCI_CAP_ID_NULL		0x00U
#define PCI_CAP_ID_PM		0x01U
#define PCI_CAP_ID_AGP		0x02U
#define PCI_CAP_ID_VPD		0x03U
#define PCI_CAP_ID_SLOTID	0x04U
#define PCI_CAP_ID_MSI		0x05U
#define PCI_CAP_ID_CHSWP	0x06U
#define PCI_CAP_ID_PCIX		0x07U
#define PCI_CAP_ID_HT		0x08U
#define PCI_CAP_ID_VNDR		0x09U
#define PCI_CAP_ID_DBG		0x0AU
#define PCI_CAP_ID_CCRC		0x0BU
#define PCI_CAP_ID_SHPC		0x0CU
#define PCI_CAP_ID_SSVID	0x0DU
#define PCI_CAP_ID_AGP3		0x0EU
#define PCI_CAP_ID_SECDEV	0x0FU
#define PCI_CAP_ID_EXP		0x10U
#define PCI_CAP_ID_MSIX		0x11U
#define PCI_CAP_ID_SATA		0x12U
#define PCI_CAP_ID_AF		0x13U
#define PCI_CAP_ID_EA		0x14U
#define PCI_CAP_ID_FPB		0x14U
/**
 * @}
 */

/**
 * @name PCI Express Extended Capabilities
 * @{
 */

#define PCIE_EXT_CAP_ID_NULL	0x0000U
#define PCIE_EXT_CAP_ID_ERR	0x0001U
#define PCIE_EXT_CAP_ID_VC	0x0002U
#define PCIE_EXT_CAP_ID_DSN	0x0003U
#define PCIE_EXT_CAP_ID_PWR	0x0004U
#define PCIE_EXT_CAP_ID_RCLD	0x0005U
#define PCIE_EXT_CAP_ID_RCILC	0x0006U
#define PCIE_EXT_CAP_ID_RCEC	0x0007U
#define PCIE_EXT_CAP_ID_MFVC	0x0008U
#define PCIE_EXT_CAP_ID_MFVC_VC	0x0009U
#define PCIE_EXT_CAP_ID_RCRB	0x000AU
#define PCIE_EXT_CAP_ID_VNDR	0x000BU
#define PCIE_EXT_CAP_ID_CAC	0x000CU
#define PCIE_EXT_CAP_ID_ACS	0x000DU
#define PCIE_EXT_CAP_ID_ARI	0x000EU
#define PCIE_EXT_CAP_ID_ATS	0x000FU
#define PCIE_EXT_CAP_ID_SRIOV	0x0010U
#define PCIE_EXT_CAP_ID_MRIOV	0x0011U
#define PCIE_EXT_CAP_ID_MCAST	0x0012U
#define PCIE_EXT_CAP_ID_PRI	0x0013U
#define PCIE_EXT_CAP_ID_AMD_XXX	0x0014U
#define PCIE_EXT_CAP_ID_REBAR	0x0015U
#define PCIE_EXT_CAP_ID_DPA	0x0016U
#define PCIE_EXT_CAP_ID_TPH	0x0017U
#define PCIE_EXT_CAP_ID_LTR	0x0018U
#define PCIE_EXT_CAP_ID_SECPCI	0x0019U
#define PCIE_EXT_CAP_ID_PMUX	0x001AU
#define PCIE_EXT_CAP_ID_PASID	0x001BU
#define PCIE_EXT_CAP_ID_DPC	0x001DU
#define PCIE_EXT_CAP_ID_L1SS	0x001EU
#define PCIE_EXT_CAP_ID_PTM	0x001FU
#define PCIE_EXT_CAP_ID_DVSEC	0x0023U
#define PCIE_EXT_CAP_ID_DLF	0x0025U
#define PCIE_EXT_CAP_ID_PL_16GT	0x0026U
#define PCIE_EXT_CAP_ID_LMR	0x0027U
#define PCIE_EXT_CAP_ID_HID	0x0028U
#define PCIE_EXT_CAP_ID_NPEM	0x0029U
#define PCIE_EXT_CAP_ID_PL_32GT	0x002AU
#define PCIE_EXT_CAP_ID_AP	0x002BU
#define PCIE_EXT_CAP_ID_SFI	0x002CU
/**
 * @}
 */

/**
 * @}
 */

#endif /* ZEPHYR_INCLUDE_DRIVERS_PCIE_CAP_H_ */
