/*
 * Copyright (c) 2020, Seagate Technology LLC
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_CLOCK_CONTROL_CLOCK_CONTROL_LPC11U6X_H_
#define ZEPHYR_DRIVERS_CLOCK_CONTROL_CLOCK_CONTROL_LPC11U6X_H_

#include <zephyr/drivers/pinctrl.h>

#define LPC11U6X_SYS_AHB_CLK_CTRL_I2C0      (1 << 5)
#define LPC11U6X_SYS_AHB_CLK_CTRL_GPIO      (1 << 6)
#define LPC11U6X_SYS_AHB_CLK_CTRL_USART0    (1 << 12)
#define LPC11U6X_SYS_AHB_CLK_CTRL_USB       (1 << 14)
#define LPC11U6X_SYS_AHB_CLK_CTRL_IOCON     (1 << 16)
#define LPC11U6X_SYS_AHB_CLK_CTRL_PINT      (1 << 19)
#define LPC11U6X_SYS_AHB_CLK_CTRL_USART1    (1 << 20)
#define LPC11U6X_SYS_AHB_CLK_CTRL_USART2    (1 << 21)
#define LPC11U6X_SYS_AHB_CLK_CTRL_USART3_4  (1 << 22)
#define LPC11U6X_SYS_AHB_CLK_CTRL_I2C1      (1 << 25)
#define LPC11U6X_SYS_AHB_CLK_CTRL_SRAM1     (1 << 26)
#define LPC11U6X_SYS_AHB_CLK_CTRL_USB_SRAM  (1 << 27)

#define LPC11U6X_PDRUNCFG_IRC_PD            (1 << 1)
#define LPC11U6X_PDRUNCFG_SYSOSC_PD         (1 << 5)
#define LPC11U6X_PDRUNCFG_PLL_PD            (1 << 7)
#define LPC11U6X_PDRUNCFG_MASK              0xC800

#define LPC11U6X_SYS_PLL_CLK_SEL_IRC        0x0
#define LPC11U6X_SYS_PLL_CLK_SEL_SYSOSC     0x1

#define LPC11U6X_FLASH_TIMING_REG           0x4003C010
#define LPC11U6X_FLASH_TIMING_3CYCLES       0x2
#define LPC11U6X_FLASH_TIMING_MASK          0x3

#define LPC11U6X_SYS_PLL_CTRL_MSEL_MASK     0x1F
#define LPC11U6X_SYS_PLL_CTRL_PSEL_SHIFT    5
#define LPC11U6X_SYS_PLL_CTRL_PSEL_MASK     0x3

#define LPC11U6X_MAIN_CLK_SRC_PLLOUT        0x3

#define LPC11U6X_PRESET_CTRL_I2C0           (1 << 1)
#define LPC11U6X_PRESET_CTRL_I2C1           (1 << 3)
#define LPC11U6X_PRESET_CTRL_FRG            (1 << 4)
#define LPC11U6X_PRESET_CTRL_USART1         (1 << 5)
#define LPC11U6X_PRESET_CTRL_USART2         (1 << 6)
#define LPC11U6X_PRESET_CTRL_USART3         (1 << 7)
#define LPC11U6X_PRESET_CTRL_USART4         (1 << 8)

#define LPC11U6X_USART_CLOCK_RATE           14745600

struct lpc11u6x_syscon_regs {
	volatile uint32_t sys_mem_remap;
	volatile uint32_t p_reset_ctrl;
	volatile uint32_t sys_pll_ctrl;
	volatile const uint32_t sys_pll_stat;
	volatile uint32_t usb_pll_ctrl;
	volatile const uint32_t usb_pll_stat;
	volatile const uint32_t reserved1;
	volatile uint32_t rtc_osc_ctrl;
	volatile uint32_t sys_osc_ctrl;
	volatile uint32_t wdt_osc_ctrl;         /* Watchdog oscillator
						 * control
						 */
	volatile uint32_t irc_ctrl;
	volatile const uint32_t reserved2;
	volatile uint32_t sys_rst_stat;
	volatile const uint32_t reserved3[3];
	volatile uint32_t sys_pll_clk_sel;
	volatile uint32_t sys_pll_clk_uen;
	volatile uint32_t usb_pll_clk_sel;
	volatile uint32_t usb_pll_clk_uen;      /* USB PLL clock source
						 * update
						 */
	volatile const uint32_t reserved4[8];
	volatile uint32_t main_clk_sel;
	volatile uint32_t main_clk_uen;
	volatile uint32_t sys_ahb_clk_div;
	volatile const uint32_t reserved5;
	volatile uint32_t sys_ahb_clk_ctrl;
	volatile const uint32_t reserved6[4];
	volatile uint32_t ssp0_clk_div;
	volatile uint32_t usart0_clk_div;
	volatile uint32_t ssp1_clk_div;
	volatile uint32_t frg_clk_div;          /* USART 1-4 fractional baud
						 * rate generator clock divider
						 */
	volatile const uint32_t reserved7[7];
	volatile uint32_t usb_clk_sel;
	volatile uint32_t usb_clk_uen;
	volatile uint32_t usb_clk_div;
	volatile const uint32_t reserved8[5];
	volatile uint32_t clk_out_sel;
	volatile uint32_t clk_out_uen;
	volatile uint32_t clk_out_div;
	volatile const uint32_t reserved9;
	volatile uint32_t uart_frg_div;         /* USART1-4 fractional
						 * generator divider
						 */
	volatile uint32_t uart_frg_mult;        /* USART1-4 fractional
						 * generator multiplier
						 */
	volatile const uint32_t reserved10;
	volatile uint32_t ext_trace_cmd;        /* External trace buffer
						 * command
						 */
	volatile const uint32_t pio_por_cap[3];
	volatile const uint32_t reserved11[10];
	volatile uint32_t iocon_clk_div[7];
	volatile uint32_t bod_ctrl;
	volatile uint32_t sys_tck_cal;
	volatile const uint32_t reserved12[6];
	volatile uint32_t irq_latency;
	volatile uint32_t nmi_src;
	volatile uint32_t pint_sel[8];
	volatile uint32_t usb_clk_ctrl;
	volatile const uint32_t usb_clk_stat;
	volatile uint32_t reserved13[25];
	volatile uint32_t starterp0;
	volatile const uint32_t reserved14[3];
	volatile uint32_t starterp1;
	volatile const uint32_t reserved15[6];
	volatile uint32_t pd_sleep_cfg;         /* Deep-sleep power-down
						 * states
						 */
	volatile uint32_t pd_awake_cfg;         /* Power-down states for
						 * wake-up from deep-sleep
						 */
	volatile uint32_t pd_run_cfg;
	volatile const uint32_t reserved16[110];
	volatile const uint32_t device_id;
};

struct lpc11u6x_syscon_config {
	struct lpc11u6x_syscon_regs *syscon;
	const struct pinctrl_dev_config *pincfg;
};

struct lpc11u6x_syscon_data {
	struct k_mutex mutex;
	uint8_t frg_in_use;
	uint8_t usart34_in_use;
};
#endif /* ZEPHYR_DRIVERS_CLOCK_CONTROL_CLOCK_CONTROL_LPC11U6X_H_ */
