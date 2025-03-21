/*
 * Copyright (c) 2022 Intel Corporation
 *
 * Intel I/O Controller Hub (ICH) later renamed to Intel Platform Controller
 * Hub (PCH) SMBus driver.
 *
 * PCH provides SMBus 2.0 - compliant Host Controller.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_SMBUS_PCH_H_
#define ZEPHYR_DRIVERS_SMBUS_PCH_H_

/* PCI Configuration Space registers */

/* Host Configuration (HCFG) - Offset 40h, 8 bits */
#define PCH_SMBUS_HCFG			0x10
#define PCH_SMBUS_HCFG_HST_EN		BIT(0)

/* PCH SMBus I/O and Memory Mapped registers */

/* Host Status Register Address (HSTS) */
#define PCH_SMBUS_HSTS			0x00
#define PCH_SMBUS_HSTS_HOST_BUSY	BIT(0)
#define PCH_SMBUS_HSTS_INTERRUPT	BIT(1)
#define PCH_SMBUS_HSTS_DEV_ERROR	BIT(2)
#define PCH_SMBUS_HSTS_BUS_ERROR	BIT(3)
#define PCH_SMBUS_HSTS_FAILED		BIT(4)
#define PCH_SMBUS_HSTS_SMB_ALERT	BIT(5)
#define PCH_SMBUS_HSTS_INUSE		BIT(6)
#define PCH_SMBUS_HSTS_BYTE_DONE	BIT(7)

#define PCH_SMBUS_HSTS_ERROR		(PCH_SMBUS_HSTS_DEV_ERROR | \
					 PCH_SMBUS_HSTS_BUS_ERROR | \
					 PCH_SMBUS_HSTS_FAILED)

/* Host Control Register (HCTL) */
#define PCH_SMBUS_HCTL			0x02
#define PCH_SMBUS_HCTL_INTR_EN		BIT(0)
#define PCH_SMBUS_HCTL_KILL		BIT(1)
#define PCH_SMBUS_HCTL_CMD		GENMASK(4, 2)
/* SMBUS Commands */
#define PCH_SMBUS_HCTL_CMD_QUICK	(0 << 2)
#define PCH_SMBUS_HCTL_CMD_BYTE		(1 << 2)
#define PCH_SMBUS_HCTL_CMD_BYTE_DATA	(2 << 2)
#define PCH_SMBUS_HCTL_CMD_WORD_DATA	(3 << 2)
#define PCH_SMBUS_HCTL_CMD_PROC_CALL	(4 << 2)
#define PCH_SMBUS_HCTL_CMD_BLOCK	(5 << 2)
#define PCH_SMBUS_HCTL_CMD_I2C_READ	(6 << 2)
#define PCH_SMBUS_HCTL_CMD_BLOCK_PROC	(7 << 2)

#define PCH_SMBUS_HCTL_CMD_SET(cmd)	(cmd << 2)

#define PCH_SMBUS_HCTL_CMD_GET(val)	(val & PCH_SMBUS_HCTL_CMD)

#define PCH_SMBUS_HCTL_LAST_BYTE	BIT(5)
#define PCH_SMBUS_HCTL_START		BIT(6)
#define PCH_SMBUS_HCTL_PEC_EN		BIT(7)

/* Host Command Register (HCMD) */
#define PCH_SMBUS_HCMD			0x03

/* Transmit Slave Address Register (TSA) */
#define PCH_SMBUS_TSA			0x04
#define PCH_SMBUS_TSA_RW		BIT(0)
#define PCH_SMBUS_TSA_ADDR_MASK		GENMASK(7, 1)

/* Set 7-bit address */
#define PCH_SMBUS_TSA_ADDR_SET(addr)	(((addr) & BIT_MASK(7)) << 1)

/* Get Peripheral address from register value */
#define PCH_SMBUS_TSA_ADDR_GET(reg)	((reg >> 1) & BIT_MASK(7))

/* Data 0 Register (HD0) */
#define PCH_SMBUS_HD0			0x05

/* Data 1 Register (HD1) */
#define PCH_SMBUS_HD1			0x06

/* Host Block Data (HBD) */
#define PCH_SMBUS_HBD			0x07

/* Packet Error Check Data Register (PEC) */
#define PCH_SMBUS_PEC			0x08

/* Receive Slave Address Register (RSA) */
#define PCH_SMBUS_RSA			0x09

/* Slave Data Register (SD) (16 bits) */
#define PCH_SMBUS_SD			0x0a

/* Auxiliary Status (AUXS) */
#define PCH_SMBUS_AUXS			0x0c
#define PCH_SMBUS_AUXS_CRC_ERROR	BIT(0)

/* Auxiliary Control (AUXC) */
#define PCH_SMBUS_AUXC			0x0d
#define PCH_SMBUS_AUXC_AAC		BIT(0)
#define PCH_SMBUS_AUXC_EN_32BUF		BIT(1)

/* SMLink Pin Control Register (SMLC) */
#define PCH_SMBUS_SMLC			0x0e

/* SMBus Pin control Register (SMBC) */
#define PCH_SMBUS_SMBC			0x0f
#define PCH_SMBUS_SMBC_CLK_CUR_STS	BIT(0)
#define PCH_SMBUS_SMBC_DATA_CUR_STS	BIT(1)
#define PCH_SMBUS_SMBC_CLK_CTL		BIT(2)

/* Slave Status Register (SSTS) */
#define PCH_SMBUS_SSTS			0x10
#define PCH_SMBUS_SSTS_HNS		BIT(0)

/* Slave Command Register (SCMD) */
#define PCH_SMBUS_SCMD			0x11
#define PCH_SMBUS_SCMD_HNI_EN		BIT(0)
#define PCH_SMBUS_SCMD_HNW_EN		BIT(1)
#define PCH_SMBUS_SCMD_SMBALERT_DIS	BIT(2)

/* Notify Device Address Register (NDA) */
#define PCH_SMBUS_NDA			0x14

/* Notify Data Low Byte Register (NDLB) */
#define PCH_SMBUS_NDLB			0x16

/* Notify Data High Byte Register (NDHB) */
#define PCH_SMBUS_NDHB			0x17

/* Debug helpers */

#if CONFIG_SMBUS_LOG_LEVEL >= LOG_LEVEL_DBG
/* Dump HSTS register using define to show calling function */
#define pch_dump_register_hsts(reg)					\
	LOG_DBG("HSTS: 0x%02x: %s%s%s%s%s%s%s%s", reg,			\
		reg & PCH_SMBUS_HSTS_HOST_BUSY ? "[Host Busy] " : "",	\
		reg & PCH_SMBUS_HSTS_INTERRUPT ? "[Interrupt] " : "",	\
		reg & PCH_SMBUS_HSTS_DEV_ERROR ? "[Device Error] " : "",\
		reg & PCH_SMBUS_HSTS_BUS_ERROR ? "[Bus Error] " : "",	\
		reg & PCH_SMBUS_HSTS_FAILED ? "[Failed] " : "",		\
		reg & PCH_SMBUS_HSTS_SMB_ALERT ? "[SMBALERT] " : "",	\
		reg & PCH_SMBUS_HSTS_BYTE_DONE ? "[Byte Done] " : "",	\
		reg & PCH_SMBUS_HSTS_INUSE ? "[In USE] " : "");
#else
#define pch_dump_register_hsts(reg)
#endif

#endif /* ZEPHYR_DRIVERS_SMBUS_PCH_H_ */
