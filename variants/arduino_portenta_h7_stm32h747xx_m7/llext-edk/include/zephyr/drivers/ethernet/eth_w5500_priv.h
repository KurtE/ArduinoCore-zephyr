/* W5500 Stand-alone Ethernet Controller with SPI
 *
 * Copyright (c) 2020 Linumiz
 * Author: Parthiban Nallathambi <parthiban@linumiz.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/spi.h>

#ifndef _W5500_
#define _W5500_

/*
 * W5500 common registers
 */
#define W5500_COMMON_REGS	0x0000
#define W5500_MR		0x0000
#define W5500_GW		0x0001
#define MR_RST			0x80
#define MR_PB			0x10
#define MR_AI			0x02
#define MR_IND			0x01
#define W5500_SHAR		0x0009
#define W5500_IR		0x0015
#define W5500_COMMON_REGS_LEN	0x0040
#define W5500_PHYCFGR		0x002E

#define W5500_Sn_MR		0x0000
#define W5500_Sn_CR		0x0001
#define W5500_Sn_IR		0x0002
#define W5500_Sn_SR		0x0003
#define W5500_Sn_TX_FSR		0x0020
#define W5500_Sn_TX_RD		0x0022
#define W5500_Sn_TX_WR		0x0024
#define W5500_Sn_RX_RSR		0x0026
#define W5500_Sn_RX_RD		0x0028

#define W5500_S0_REGS		0x10000

#define W5500_S0_MR		(W5500_S0_REGS + W5500_Sn_MR)
#define S0_MR_MACRAW		0x04
#define S0_MR_MF		0x40
#define W5500_S0_CR		(W5500_S0_REGS + W5500_Sn_CR)
#define S0_CR_OPEN		0x01
#define S0_CR_CLOSE		0x10
#define S0_CR_SEND		0x20
#define S0_CR_RECV		0x40
#define W5500_S0_IR		(W5500_S0_REGS + W5500_Sn_IR)
#define S0_IR_SENDOK		0x10
#define S0_IR_RECV		0x04
#define W5500_S0_SR		(W5500_S0_REGS + W5500_Sn_SR)
#define S0_SR_MACRAW		0x42
#define W5500_S0_TX_FSR		(W5500_S0_REGS + W5500_Sn_TX_FSR)
#define W5500_S0_TX_RD		(W5500_S0_REGS + W5500_Sn_TX_RD)
#define W5500_S0_TX_WR		(W5500_S0_REGS + W5500_Sn_TX_WR)
#define W5500_S0_RX_RSR		(W5500_S0_REGS + W5500_Sn_RX_RSR)
#define W5500_S0_RX_RD		(W5500_S0_REGS + W5500_Sn_RX_RD)
#define W5500_S0_IMR		(W5500_S0_REGS + W5500_Sn_IMR)

#define W5500_S0_MR_MF		7
#define W5500_Sn_REGS_LEN	0x0040
#define W5500_SIMR		0x0018
#define IR_S0			0x01
#define RTR_DEFAULT		2000
#define W5500_RTR		0x0019


#define W5500_Sn_RXMEM_SIZE(n)	\
		(0x1001e + (n) * 0x40000)
#define W5500_Sn_TXMEM_SIZE(n)	\
		(0x1001f + (n) * 0x40000)

#define W5500_Sn_TX_MEM_START	0x20000
#define W5500_TX_MEM_SIZE	0x04000
#define W5500_Sn_RX_MEM_START	0x30000
#define W5500_RX_MEM_SIZE	0x04000

/* Delay for PHY write/read operations (25.6 us) */
#define W5500_PHY_ACCESS_DELAY		26U
struct w5500_config {
	struct spi_dt_spec spi;
	struct gpio_dt_spec interrupt;
	struct gpio_dt_spec reset;
	int32_t timeout;
};

struct w5500_runtime {
	struct net_if *iface;

	K_KERNEL_STACK_MEMBER(thread_stack,
			      CONFIG_ETH_W5500_RX_THREAD_STACK_SIZE);
	struct k_thread thread;
	uint8_t mac_addr[6];
	struct gpio_callback gpio_cb;
	struct k_sem tx_sem;
	struct k_sem int_sem;
	bool link_up;
	uint8_t buf[NET_ETH_MAX_FRAME_SIZE];
};

#endif /*_W5500_*/
