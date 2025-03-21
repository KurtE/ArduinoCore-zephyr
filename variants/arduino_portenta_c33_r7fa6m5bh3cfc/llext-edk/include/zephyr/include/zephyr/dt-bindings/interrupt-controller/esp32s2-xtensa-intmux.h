/*
 * Copyright (c) 2021 Espressif Systems (Shanghai) Co., Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_INTERRUPT_CONTROLLER_ESP32S2_XTENSA_INTMUX_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_INTERRUPT_CONTROLLER_ESP32S2_XTENSA_INTMUX_H_

#define WIFI_MAC_INTR_SOURCE                0
#define WIFI_MAC_NMI_SOURCE                 1
#define WIFI_PWR_INTR_SOURCE                2
#define WIFI_BB_INTR_SOURCE                 3
#define BT_MAC_INTR_SOURCE                  4
#define BT_BB_INTR_SOURCE                   5
#define BT_BB_NMI_SOURCE                    6
#define RWBT_INTR_SOURCE                    7
#define RWBLE_INTR_SOURCE                   8
#define RWBT_NMI_SOURCE                     9
#define RWBLE_NMI_SOURCE                    10
#define SLC0_INTR_SOURCE                    11
#define SLC1_INTR_SOURCE                    12
#define UHCI0_INTR_SOURCE                   13
#define UHCI1_INTR_SOURCE                   14
#define TG0_T0_LEVEL_INTR_SOURCE            15
#define TG0_T1_LEVEL_INTR_SOURCE            16
#define TG0_WDT_LEVEL_INTR_SOURCE           17
#define TG0_LACT_LEVEL_INTR_SOURCE          18
#define TG1_T0_LEVEL_INTR_SOURCE            19
#define TG1_T1_LEVEL_INTR_SOURCE            20
#define TG1_WDT_LEVEL_INTR_SOURCE           21
#define TG1_LACT_LEVEL_INTR_SOURCE          22
#define GPIO_INTR_SOURCE                    23
#define GPIO_NMI_SOURCE                     24
#define GPIO_INTR_SOURCE2                   25
#define GPIO_NMI_SOURCE2                    26
#define DEDICATED_GPIO_INTR_SOURCE          27
#define FROM_CPU_INTR0_SOURCE               28
#define FROM_CPU_INTR1_SOURCE               29
#define FROM_CPU_INTR2_SOURCE               30
#define FROM_CPU_INTR3_SOURCE               31
#define SPI1_INTR_SOURCE                    32
#define SPI2_INTR_SOURCE                    33
#define SPI3_INTR_SOURCE                    34
#define I2S0_INTR_SOURCE                    35
#define I2S1_INTR_SOURCE                    36
#define UART0_INTR_SOURCE                   37
#define UART1_INTR_SOURCE                   38
#define UART2_INTR_SOURCE                   39
#define SDIO_HOST_INTR_SOURCE               40
#define PWM0_INTR_SOURCE                    41
#define PWM1_INTR_SOURCE                    42
#define PWM2_INTR_SOURCE                    43
#define PWM3_INTR_SOURCE                    44
#define LEDC_INTR_SOURCE                    45
#define EFUSE_INTR_SOURCE                   46
#define TWAI_INTR_SOURCE                    47
#define USB_INTR_SOURCE                     48
#define RTC_CORE_INTR_SOURCE                49
#define RMT_INTR_SOURCE                     50
#define PCNT_INTR_SOURCE                    51
#define I2C_EXT0_INTR_SOURCE                52
#define I2C_EXT1_INTR_SOURCE                53
#define RSA_INTR_SOURCE                     54
#define SHA_INTR_SOURCE                     55
#define AES_INTR_SOURCE                     56
#define SPI2_DMA_INTR_SOURCE                57
#define SPI3_DMA_INTR_SOURCE                58
#define WDT_INTR_SOURCE                     59
#define TIMER1_INTR_SOURCE                  60
#define TIMER2_INTR_SOURCE                  61
#define TG0_T0_EDGE_INTR_SOURCE             62
#define TG0_T1_EDGE_INTR_SOURCE             63
#define TG0_WDT_EDGE_INTR_SOURCE            64
#define TG0_LACT_EDGE_INTR_SOURCE           65
#define TG1_T0_EDGE_INTR_SOURCE             66
#define TG1_T1_EDGE_INTR_SOURCE             67
#define TG1_WDT_EDGE_INTR_SOURCE            68
#define TG1_LACT_EDGE_INTR_SOURCE           69
#define CACHE_IA_INTR_SOURCE                70
#define SYSTIMER_TARGET0_EDGE_INTR_SOURCE   71
#define SYSTIMER_TARGET1_EDGE_INTR_SOURCE   72
#define SYSTIMER_TARGET2_EDGE_INTR_SOURCE   73
#define ASSIST_DEBUG_INTR_SOURCE            74
#define PMS_PRO_IRAM0_ILG_INTR_SOURCE       75
#define PMS_PRO_DRAM0_ILG_INTR_SOURCE       76
#define PMS_PRO_DPORT_ILG_INTR_SOURCE       77
#define PMS_PRO_AHB_ILG_INTR_SOURCE         78
#define PMS_PRO_CACHE_ILG_INTR_SOURCE       79
#define PMS_DMA_APB_I_ILG_INTR_SOURCE       80
#define PMS_DMA_RX_I_ILG_INTR_SOURCE        81
#define PMS_DMA_TX_I_ILG_INTR_SOURCE        82
#define SPI_MEM_REJECT_CACHE_INTR_SOURCE    83  /* SPI0 Cache access and
						 * SPI1 access rejected, level
						 */
#define DMA_COPY_INTR_SOURCE                84
#define SPI4_DMA_INTR_SOURCE                85
#define SPI4_INTR_SOURCE                    86
#define ICACHE_PRELOAD_INTR_SOURCE          87
#define DCACHE_PRELOAD_INTR_SOURCE          88
#define APB_ADC_INTR_SOURCE                 89
#define CRYPTO_DMA_INTR_SOURCE              90
#define CPU_PERI_ERROR_INTR_SOURCE          91
#define APB_PERI_ERROR_INTR_SOURCE          92
#define DCACHE_SYNC_INTR_SOURCE             93
#define ICACHE_SYNC_INTR_SOURCE             94
#define MAX_INTR_SOURCE                     95

/* For Xtensa architecture, zero will allocate low/medium
 * levels of priority (ESP_INTR_FLAG_LOWMED)
 */
#define IRQ_DEFAULT_PRIORITY	0

#define ESP_INTR_FLAG_SHARED	(1<<8)

#endif
