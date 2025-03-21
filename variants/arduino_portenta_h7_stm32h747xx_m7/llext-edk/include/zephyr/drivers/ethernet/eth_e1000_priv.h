/*
 * Copyright (c) 2018 Intel Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ETH_E1000_PRIV_H
#define ETH_E1000_PRIV_H

#ifdef __cplusplus
extern "C" {
#endif

#define CTRL_SLU	(1 << 6)

#define TCTL_EN		(1 << 1)
#define RCTL_EN		(1 << 1)

#define ICR_TXDW	     (1)
#define ICR_TXQE	(1 << 1)
#define ICR_RXO		(1 << 6)

#define IMS_RXO		(1 << 6)

#define RCTL_MPE	(1 << 4)

#define TDESC_EOP	     (1)
#define TDESC_RS	(1 << 3)

#define RDESC_STA_DD	     (1)
#define TDESC_STA_DD	     (1)

#define ETH_ALEN 6

enum e1000_reg_t {
	CTRL	= 0x0000,
	ICR	= 0x00C0,
	ICS	= 0x00C8,
	IMS	= 0x00D0,
	RCTL	= 0x0100,
	TCTL	= 0x0400,
	RDBAL	= 0x2800,
	RDBAH	= 0x2804,
	RDLEN	= 0x2808,
	RDH	= 0x2810,
	RDT	= 0x2818,
	TDBAL	= 0x3800,
	TDBAH	= 0x3804,
	TDLEN	= 0x3808,
	TDH	= 0x3810,
	TDT	= 0x3818,
	RAL	= 0x5400,
	RAH	= 0x5404,
};

/* Legacy TX Descriptor */
struct e1000_tx {
	uint64_t addr;
	uint16_t len;
	uint8_t  cso;
	uint8_t  cmd;
	uint8_t  sta;
	uint8_t  css;
	uint16_t special;
};

/* Legacy RX Descriptor */
struct e1000_rx {
	uint64_t addr;
	uint16_t len;
	uint16_t csum;
	uint8_t  sta;
	uint8_t  err;
	uint16_t special;
};

struct e1000_dev {
	volatile struct e1000_tx tx __aligned(16);
	volatile struct e1000_rx rx __aligned(16);
	mm_reg_t address;

	/* BDF & DID/VID */
	struct pcie_dev *pcie;

	/* If VLAN is enabled, there can be multiple VLAN interfaces related to
	 * this physical device. In that case, this iface pointer value is not
	 * really used for anything.
	 */
	struct net_if *iface;
	uint8_t mac[ETH_ALEN];
	uint8_t txb[NET_ETH_MTU];
	uint8_t rxb[NET_ETH_MTU];
#if defined(CONFIG_ETH_E1000_PTP_CLOCK)
	const struct device *ptp_clock;
	double clk_ratio;
#endif
};

struct e1000_config {
	void (*config_func)(const struct e1000_dev *dev);
};

static const char *e1000_reg_to_string(enum e1000_reg_t r)
	__attribute__((unused));

#define iow32(_dev, _reg, _val) do {					\
	LOG_DBG("iow32 %s 0x%08x", e1000_reg_to_string(_reg), (_val)); 	\
	sys_write32(_val, (_dev)->address + (_reg));			\
} while (false)

#define ior32(_dev, _reg)						\
({									\
	uint32_t val = sys_read32((_dev)->address + (_reg));		\
	LOG_DBG("ior32 %s 0x%08x", e1000_reg_to_string(_reg), val); 	\
	val;								\
})

#ifdef __cplusplus
}
#endif

#endif /* ETH_E1000_PRIV_H_ */
