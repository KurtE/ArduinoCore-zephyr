/*
 * Copyright (c) 2023 Espressif Systems (Shanghai) Co., Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_INTERRUPT_CONTROLLER_ESP32C6_INTMUX_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_INTERRUPT_CONTROLLER_ESP32C6_INTMUX_H_

#define WIFI_MAC_INTR_SOURCE                0
#define WIFI_MAC_NMI_SOURCE                 1
#define WIFI_PWR_INTR_SOURCE                2
#define WIFI_BB_INTR_SOURCE                 3
#define BT_MAC_INTR_SOURCE                  4
#define BT_BB_INTR_SOURCE                   5
#define BT_BB_NMI_SOURCE                    6
#define LP_TIMER_INTR_SOURCE                7
#define COEX_INTR_SOURCE                    8
#define BLE_TIMER_INTR_SOURCE               9
#define BLE_SEC_INTR_SOURCE                10
#define I2C_MASTER_SOURCE                  11
#define ZB_MAC_SOURCE                      12
#define PMU_INTR_SOURCE                    13
#define EFUSE_INTR_SOURCE                  14
#define LP_RTC_TIMER_INTR_SOURCE           15
#define LP_UART_INTR_SOURCE                16
#define LP_I2C_INTR_SOURCE                 17
#define LP_WDT_INTR_SOURCE                 18
#define LP_PERI_TIMEOUT_INTR_SOURCE        19
#define LP_APM_M0_INTR_SOURCE              20
#define LP_APM_M1_INTR_SOURCE              21
#define FROM_CPU_INTR0_SOURCE              22
#define FROM_CPU_INTR1_SOURCE              23
#define FROM_CPU_INTR2_SOURCE              24
#define FROM_CPU_INTR3_SOURCE              25
#define ASSIST_DEBUG_INTR_SOURCE           26
#define TRACE_INTR_SOURCE                  27
#define CACHE_INTR_SOURCE                  28
#define CPU_PERI_TIMEOUT_INTR_SOURCE       29
#define GPIO_INTR_SOURCE                   30
#define GPIO_NMI_SOURCE                    31
#define PAU_INTR_SOURCE                    32
#define HP_PERI_TIMEOUT_INTR_SOURCE        33
#define MODEM_PERI_TIMEOUT_INTR_SOURCE     34
#define HP_APM_M0_INTR_SOURCE              35
#define HP_APM_M1_INTR_SOURCE              36
#define HP_APM_M2_INTR_SOURCE              37
#define HP_APM_M3_INTR_SOURCE              38
#define LP_APM0_INTR_SOURCE                39
#define MSPI_INTR_SOURCE                   40
#define I2S1_INTR_SOURCE                   41
#define UHCI0_INTR_SOURCE                  42
#define UART0_INTR_SOURCE                  43
#define UART1_INTR_SOURCE                  44
#define LEDC_INTR_SOURCE                   45
#define TWAI0_INTR_SOURCE                  46
#define TWAI1_INTR_SOURCE                  47
#define USB_SERIAL_JTAG_INTR_SOURCE        48
#define RMT_INTR_SOURCE                    49
#define I2C_EXT0_INTR_SOURCE               50
#define TG0_T0_LEVEL_INTR_SOURCE           51
#define TG0_T1_LEVEL_INTR_SOURCE           52
#define TG0_WDT_LEVEL_INTR_SOURCE          53
#define TG1_T0_LEVEL_INTR_SOURCE           54
#define TG1_T1_LEVEL_INTR_SOURCE           55
#define TG1_WDT_LEVEL_INTR_SOURCE          56
#define SYSTIMER_TARGET0_EDGE_INTR_SOURCE  57
#define SYSTIMER_TARGET1_EDGE_INTR_SOURCE  58
#define SYSTIMER_TARGET2_EDGE_INTR_SOURCE  59
#define APB_ADC_INTR_SOURCE                60
#define MCPWM0_INTR_SOURCE                 61
#define PCNT_INTR_SOURCE                   62
#define PARL_IO_INTR_SOURCE                63
#define SLC0_INTR_SOURCE                   64
#define SLC_INTR_SOURCE                    65
#define DMA_IN_CH0_INTR_SOURCE             66
#define DMA_IN_CH1_INTR_SOURCE             67
#define DMA_IN_CH2_INTR_SOURCE             68
#define DMA_OUT_CH0_INTR_SOURCE            69
#define DMA_OUT_CH1_INTR_SOURCE            70
#define DMA_OUT_CH2_INTR_SOURCE            71
#define GSPI2_INTR_SOURCE                  72
#define AES_INTR_SOURCE                    73
#define SHA_INTR_SOURCE                    74
#define RSA_INTR_SOURCE                    75
#define ECC_INTR_SOURCE                    76
#define MAX_INTR_SOURCE                    77

/* RISC-V supports priority values from 1 (lowest) to 15.
 * As interrupt controller for Xtensa and RISC-V is shared, this is
 * set to an intermediate and compatible value.
 */
#define IRQ_DEFAULT_PRIORITY	3

#define ESP_INTR_FLAG_SHARED	(1<<8)

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_INTERRUPT_CONTROLLER_ESP32C6_INTMUX_H_ */
