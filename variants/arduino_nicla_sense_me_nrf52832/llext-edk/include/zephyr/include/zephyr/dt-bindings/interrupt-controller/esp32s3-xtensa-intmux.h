/*
 * Copyright (c) 2022 Espressif Systems (Shanghai) Co., Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_INTERRUPT_CONTROLLER_ESP32S3_XTENSA_INTMUX_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_INTERRUPT_CONTROLLER_ESP32S3_XTENSA_INTMUX_H_

#define WIFI_MAC_INTR_SOURCE                  0
#define WIFI_MAC_NMI_SOURCE                   1
#define WIFI_PWR_INTR_SOURCE                  2
#define WIFI_BB_INTR_SOURCE                   3
#define BT_MAC_INTR_SOURCE                    4
#define BT_BB_INTR_SOURCE                     5
#define BT_BB_NMI_SOURCE                      6
#define RWBT_INTR_SOURCE                      7
#define RWBLE_INTR_SOURCE                     8
#define RWBT_NMI_SOURCE                       9
#define RWBLE_NMI_SOURCE                      10
#define I2C_MASTER_SOURCE                     11
#define SLC0_INTR_SOURCE                      12
#define SLC1_INTR_SOURCE                      13
#define UHCI0_INTR_SOURCE                     14
#define UHCI1_INTR_SOURCE                     15
#define GPIO_INTR_SOURCE                      16
#define GPIO_NMI_SOURCE                       17
#define GPIO_INTR_SOURCE2                     18
#define GPIO_NMI_SOURCE2                      19
#define SPI1_INTR_SOURCE                      20
#define SPI2_INTR_SOURCE                      21
#define SPI3_INTR_SOURCE                      22
#define LCD_CAM_INTR_SOURCE                   24
#define I2S0_INTR_SOURCE                      25
#define I2S1_INTR_SOURCE                      26
#define UART0_INTR_SOURCE                     27
#define UART1_INTR_SOURCE                     28
#define UART2_INTR_SOURCE                     29
#define SDIO_HOST_INTR_SOURCE                 30
#define PWM0_INTR_SOURCE                      31
#define PWM1_INTR_SOURCE                      32
#define LEDC_INTR_SOURCE                      35
#define EFUSE_INTR_SOURCE                     36
#define TWAI_INTR_SOURCE                      37
#define USB_INTR_SOURCE                       38
#define RTC_CORE_INTR_SOURCE                  39
#define RMT_INTR_SOURCE                       40
#define PCNT_INTR_SOURCE                      41
#define I2C_EXT0_INTR_SOURCE                  42
#define I2C_EXT1_INTR_SOURCE                  43
#define SPI2_DMA_INTR_SOURCE                  44
#define SPI3_DMA_INTR_SOURCE                  45
#define WDT_INTR_SOURCE                       47
#define TIMER1_INTR_SOURCE                    48
#define TIMER2_INTR_SOURCE                    49
#define TG0_T0_LEVEL_INTR_SOURCE              50
#define TG0_T1_LEVEL_INTR_SOURCE              51
#define TG0_WDT_LEVEL_INTR_SOURCE             52
#define TG1_T0_LEVEL_INTR_SOURCE              53
#define TG1_T1_LEVEL_INTR_SOURCE              54
#define TG1_WDT_LEVEL_INTR_SOURCE             55
#define CACHE_IA_INTR_SOURCE                  56
#define SYSTIMER_TARGET0_EDGE_INTR_SOURCE     57
#define SYSTIMER_TARGET1_EDGE_INTR_SOURCE     58
#define SYSTIMER_TARGET2_EDGE_INTR_SOURCE     59
#define SPI_MEM_REJECT_CACHE_INTR_SOURCE      60
#define DCACHE_PRELOAD0_INTR_SOURCE           61
#define ICACHE_PRELOAD0_INTR_SOURCE           62
#define DCACHE_SYNC0_INTR_SOURCE              63
#define ICACHE_SYNC0_INTR_SOURCE              64
#define APB_ADC_INTR_SOURCE                   65
#define DMA_IN_CH0_INTR_SOURCE                66
#define DMA_IN_CH1_INTR_SOURCE                67
#define DMA_IN_CH2_INTR_SOURCE                68
#define DMA_IN_CH3_INTR_SOURCE                69
#define DMA_IN_CH4_INTR_SOURCE                70
#define DMA_OUT_CH0_INTR_SOURCE               71
#define DMA_OUT_CH1_INTR_SOURCE               72
#define DMA_OUT_CH2_INTR_SOURCE               73
#define DMA_OUT_CH3_INTR_SOURCE               74
#define DMA_OUT_CH4_INTR_SOURCE               75
#define RSA_INTR_SOURCE                       76
#define AES_INTR_SOURCE                       77
#define SHA_INTR_SOURCE                       78
#define FROM_CPU_INTR0_SOURCE                 79
#define FROM_CPU_INTR1_SOURCE                 80
#define FROM_CPU_INTR2_SOURCE                 81
#define FROM_CPU_INTR3_SOURCE                 82
#define ASSIST_DEBUG_INTR_SOURCE              83
#define DMA_APBPERI_PMS_INTR_SOURCE           84
#define CORE0_IRAM0_PMS_INTR_SOURCE           85
#define CORE0_DRAM0_PMS_INTR_SOURCE           86
#define CORE0_PIF_PMS_INTR_SOURCE             87
#define CORE0_PIF_PMS_SIZE_INTR_SOURCE        88
#define CORE1_IRAM0_PMS_INTR_SOURCE           89
#define CORE1_DRAM0_PMS_INTR_SOURCE           90
#define CORE1_PIF_PMS_INTR_SOURCE             91
#define CORE1_PIF_PMS_SIZE_INTR_SOURCE        92
#define BACKUP_PMS_VIOLATE_INTR_SOURCE        93
#define CACHE_CORE0_ACS_INTR_SOURCE           94
#define CACHE_CORE1_ACS_INTR_SOURCE           95
#define USB_SERIAL_JTAG_INTR_SOURCE           96
#define PREI_BACKUP_INTR_SOURCE               97
#define DMA_EXTMEM_REJECT_SOURCE              98
#define MAX_INTR_SOURCE                       99

/* For Xtensa architecture, zero will allocate low/medium
 * levels of priority (ESP_INTR_FLAG_LOWMED)
 */
#define IRQ_DEFAULT_PRIORITY	0

#define ESP_INTR_FLAG_SHARED	(1<<8)

#endif
