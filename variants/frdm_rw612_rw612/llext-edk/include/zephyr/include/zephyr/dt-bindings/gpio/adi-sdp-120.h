/**
 * Copyright (c) 2024 Analog Devices Inc.
 * Copyright (c) 2024 Baylibre, SAS
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * @file
 * @brief SDP-120 GPIO index definitions
 *
 * Defines meant to be used in conjunction with the "adi,sdp-120"
 * ADI SDP-120 mapping.
 *
 * Example usage:
 *
 * @code{.dts}
 * &spi1 {
 *         cs-gpios = <&sdp_120 SDP_120_SPI_SS_N GPIO_ACTIVE_LOW>;
 *
 *         example_device: example-dev@0 {
 *                 compatible = "vnd,spi-device";
 *                 reg = <0>;
 *         };
 * };
 * @endcode
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_GPIO_ADI_SDP_120_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_GPIO_ADI_SDP_120_H_

/* GPIO */

/**
 * @brief IO[n] signal on a SDP-120 GPIO nexus node following
 */

#define SDP_120_IO(n) (n-1)

/* SPI */
#define SDP_120_SPI_D2				SDP_120_IO(33)
#define SDP_120_SPI_D3				SDP_120_IO(34)
#define SDP_120_SERIAL_INT			SDP_120_IO(35)
#define SDP_120_SPI_SEL_B_N			SDP_120_IO(37)
#define SDP_120_SPI_SEL_C_N			SDP_120_IO(38)
#define SDP_120_SPI_SS_N			SDP_120_IO(39)

/* GPIO */
#define SDP_120_GPIO0				SDP_120_IO(43)
#define SDP_120_GPIO2				SDP_120_IO(44)
#define SDP_120_GPIO4				SDP_120_IO(45)
#define SDP_120_GPIO6				SDP_120_IO(47)

/* TMR */
#define SDP_120_TMR_A				SDP_120_IO(48)

/* USART */
#define SDP_120_UART_RX				SDP_120_IO(59)
#define SDP_120_UART_TX				SDP_120_IO(62)

/* TMR */
#define SDP_120_TMR_D				SDP_120_IO(72)
#define SDP_120_TMR_B				SDP_120_IO(73)

/* GPIO */
#define SDP_120_GPIO7				SDP_120_IO(74)
#define SDP_120_GPIO5				SDP_120_IO(76)
#define SDP_120_GPIO3				SDP_120_IO(77)
#define SDP_120_GPIO1				SDP_120_IO(78)

/* I2C */
#define SDP_120_SCL_0				SDP_120_IO(79)
#define SDP_120_SDA_0				SDP_120_IO(80)

/* SPI */
#define SDP_120_SPI_CLK				SDP_120_IO(82)
#define SDP_120_SPI_MISO			SDP_120_IO(83)
#define SDP_120_SPI_MOSI			SDP_120_IO(84)
#define SDP_120_SPI_SEL_A_N			SDP_120_IO(85)

/* SPORT - no driver yet */
#define SDP_120_SPI_SPORT_TSCLK			SDP_120_IO(87)
#define SDP_120_SPI_SPORT_DT0			SDP_120_IO(88)
#define SDP_120_SPI_SPORT_TFS			SDP_120_IO(89)
#define SDP_120_SPI_SPORT_RFS			SDP_120_IO(90)
#define SDP_120_SPI_SPORT_DR0			SDP_120_IO(91)
#define SDP_120_SPI_SPORT_RSCLK			SDP_120_IO(92)

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_GPIO_ADI_SDP_120_H_ */
