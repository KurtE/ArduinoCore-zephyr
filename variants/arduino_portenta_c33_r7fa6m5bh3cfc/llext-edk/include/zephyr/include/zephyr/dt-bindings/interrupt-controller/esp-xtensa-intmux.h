/*
 * Copyright (c) 2021 Espressif Systems (Shanghai) Co., Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_INTERRUPT_CONTROLLER_XTENSA_INTMUX_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_INTERRUPT_CONTROLLER_XTENSA_INTMUX_H_

#define WIFI_MAC_INTR_SOURCE                0
#define WIFI_MAC_NMI_SOURCE                 1
#define WIFI_BB_INTR_SOURCE                 2
#define BT_MAC_INTR_SOURCE                  3
#define BT_BB_INTR_SOURCE                   4
#define BT_BB_NMI_SOURCE                    5
#define RWBT_INTR_SOURCE                    6
#define RWBLE_INTR_SOURCE                   7
#define RWBT_NMI_SOURCE                     8
#define RWBLE_NMI_SOURCE                    9
#define SLC0_INTR_SOURCE                    10
#define SLC1_INTR_SOURCE                    11
#define UHCI0_INTR_SOURCE                   12
#define UHCI1_INTR_SOURCE                   13
#define TG0_T0_LEVEL_INTR_SOURCE            14
#define TG0_T1_LEVEL_INTR_SOURCE            15
#define TG0_WDT_LEVEL_INTR_SOURCE           16
#define TG0_LACT_LEVEL_INTR_SOURCE          17
#define TG1_T0_LEVEL_INTR_SOURCE            18
#define TG1_T1_LEVEL_INTR_SOURCE            19
#define TG1_WDT_LEVEL_INTR_SOURCE           20
#define TG1_LACT_LEVEL_INTR_SOURCE          21
#define GPIO_INTR_SOURCE                    22
#define GPIO_NMI_SOURCE                     23
#define FROM_CPU_INTR0_SOURCE               24
#define FROM_CPU_INTR1_SOURCE               25
#define FROM_CPU_INTR2_SOURCE               26
#define FROM_CPU_INTR3_SOURCE               27
#define SPI0_INTR_SOURCE                    28
#define SPI1_INTR_SOURCE                    29
#define SPI2_INTR_SOURCE                    30
#define SPI3_INTR_SOURCE                    31
#define I2S0_INTR_SOURCE                    32
#define I2S1_INTR_SOURCE                    33
#define UART0_INTR_SOURCE                   34
#define UART1_INTR_SOURCE                   35
#define UART2_INTR_SOURCE                   36
#define SDIO_HOST_INTR_SOURCE               37
#define ETH_MAC_INTR_SOURCE                 38
#define PWM0_INTR_SOURCE                    39
#define PWM1_INTR_SOURCE                    40
#define PWM2_INTR_SOURCE                    41
#define PWM3_INTR_SOURCE                    42
#define LEDC_INTR_SOURCE                    43
#define EFUSE_INTR_SOURCE                   44
#define TWAI_INTR_SOURCE                    45
#define CAN_INTR_SOURCE                     TWAI_INTR_SOURCE
#define RTC_CORE_INTR_SOURCE                46
#define RMT_INTR_SOURCE                     47
#define PCNT_INTR_SOURCE                    48
#define I2C_EXT0_INTR_SOURCE                49
#define I2C_EXT1_INTR_SOURCE                50
#define RSA_INTR_SOURCE                     51
#define SPI1_DMA_INTR_SOURCE                52
#define SPI2_DMA_INTR_SOURCE                53
#define SPI3_DMA_INTR_SOURCE                54
#define WDT_INTR_SOURCE                     55
#define TIMER1_INTR_SOURCE                  56
#define TIMER2_INTR_SOURCE                  57
#define TG0_T0_EDGE_INTR_SOURCE             58
#define TG0_T1_EDGE_INTR_SOURCE             59
#define TG0_WDT_EDGE_INTR_SOURCE            60
#define TG0_LACT_EDGE_INTR_SOURCE           61
#define TG1_T0_EDGE_INTR_SOURCE             62
#define TG1_T1_EDGE_INTR_SOURCE             63
#define TG1_WDT_EDGE_INTR_SOURCE            64
#define TG1_LACT_EDGE_INTR_SOURCE           65
#define MMU_IA_INTR_SOURCE                  66
#define MPU_IA_INTR_SOURCE                  67
#define CACHE_IA_INTR_SOURCE                68
#define MAX_INTR_SOURCE                     69

/* For Xtensa architecture, zero will allocate low/medium
 * levels of priority (ESP_INTR_FLAG_LOWMED)
 */
#define IRQ_DEFAULT_PRIORITY	0

#define ESP_INTR_FLAG_SHARED	(1<<8)

#endif
