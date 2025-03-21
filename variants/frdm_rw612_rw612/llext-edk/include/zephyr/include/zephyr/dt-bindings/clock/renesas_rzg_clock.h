/*
 * Copyright (c) 2024 Renesas Electronics Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_RENESAS_RZG_CLOCK_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_RENESAS_RZG_CLOCK_H_

/** RZ clock configuration values */
#define RZ_IP_MASK         0xFF000000UL
#define RZ_IP_SHIFT        24UL
#define RZ_IP_CH_MASK      0xFF0000UL
#define RZ_IP_CH_SHIFT     16UL
#define RZ_CLOCK_MASK      0xFF00UL
#define RZ_CLOCK_SHIFT     8UL
#define RZ_CLOCK_DIV_MASK  0xFFUL
#define RZ_CLOCK_DIV_SHIFT 0UL

#define RZ_IP_GTM   0UL
#define RZ_IP_GPT   1UL
#define RZ_IP_SCIF  2UL
#define RZ_IP_RIIC  3UL
#define RZ_IP_RSPI  4UL
#define RZ_IP_MHU   5UL
#define RZ_IP_DMAC  6UL
#define RZ_IP_CANFD 7UL
#define RZ_IP_ADC   8UL

#define RZ_CLOCK_ICLK    0UL
#define RZ_CLOCK_I2CLK   1UL
#define RZ_CLOCK_I3CLK   2UL
#define RZ_CLOCK_S0CLK   3UL
#define RZ_CLOCK_OC0CLK  4UL
#define RZ_CLOCK_OC1CLK  5UL
#define RZ_CLOCK_SPI0CLK 6UL
#define RZ_CLOCK_SPI1CLK 7UL
#define RZ_CLOCK_SD0CLK  8UL
#define RZ_CLOCK_SD1CLK  9UL
#define RZ_CLOCK_SD2CLK  10UL
#define RZ_CLOCK_M0CLK   11UL
#define RZ_CLOCK_HPCLK   12UL
#define RZ_CLOCK_TSUCLK  13UL
#define RZ_CLOCK_ZTCLK   14UL
#define RZ_CLOCK_P0CLK   15UL
#define RZ_CLOCK_P1CLK   16UL
#define RZ_CLOCK_P2CLK   17UL
#define RZ_CLOCK_P3CLK   18UL
#define RZ_CLOCK_P4CLK   19UL
#define RZ_CLOCK_P5CLK   20UL
#define RZ_CLOCK_ATCLK   21UL
#define RZ_CLOCK_OSCCLK  22UL
#define RZ_CLOCK_OSCCLK2 23UL

#define RZ_CLOCK(IP, ch, clk, div)                                                                 \
	((RZ_IP_##IP << RZ_IP_SHIFT) | ((ch) << RZ_IP_CH_SHIFT) | ((clk) << RZ_CLOCK_SHIFT) |      \
	 ((div) << RZ_CLOCK_DIV_SHIFT))

/**
 * Pack clock configurations in a 32-bit value
 * as expected for the Device Tree `clocks` property on Renesas RZ/G.
 *
 * @param ch Peripheral channel/unit
 */

/* SCIF */
#define RZ_CLOCK_SCIF(ch) RZ_CLOCK(SCIF, ch, RZ_CLOCK_P0CLK, 1)

/* GPT */
#define RZ_CLOCK_GPT(ch) RZ_CLOCK(GPT, ch, RZ_CLOCK_P0CLK, 1)

/* MHU */
#define RZ_CLOCK_MHU(ch) RZ_CLOCK(MHU, ch, RZ_CLOCK_P1CLK, 2)

/* ADC */
#define RZ_CLOCK_ADC(ch) RZ_CLOCK(ADC, ch, RZ_CLOCK_TSUCLK, 1)

/* RIIC */
#define RZ_CLOCK_RIIC(ch) RZ_CLOCK(RIIC, ch, RZ_CLOCK_P0CLK, 1)

/* GTM */
#define RZ_CLOCK_GTM(ch) RZ_CLOCK(GTM, ch, RZ_CLOCK_P0CLK, 1)

/* CAN */
#define RZ_CLOCK_CANFD(ch) RZ_CLOCK(CANFD, ch, RZ_CLOCK_P4CLK, 2)

/* RSPI */
#define RZ_CLOCK_RSPI(ch) RZ_CLOCK(RSPI, ch, RZ_CLOCK_P0CLK, 1)

/* DMAC */
#define RZ_CLOCK_DMAC(ch) RZ_CLOCK(DMAC, ch, RZ_CLOCK_P3CLK, 1)

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_RENESAS_RZG_CLOCK_H_ */
