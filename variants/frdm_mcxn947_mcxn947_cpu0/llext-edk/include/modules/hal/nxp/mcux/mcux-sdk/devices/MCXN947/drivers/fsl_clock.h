/*
 * Copyright 2022-2023 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _FSL_CLOCK_H_
#define _FSL_CLOCK_H_

#include "fsl_common.h"

/*! @addtogroup clock */
/*! @{ */

/*! @file */

/*******************************************************************************
 * Definitions
 *****************************************************************************/

/*! @name Driver version */
/*@{*/
/*! @brief CLOCK driver version 1.0.1. */
#define FSL_CLOCK_DRIVER_VERSION (MAKE_VERSION(1, 0, 1))
/*@}*/

/*! @brief Configure whether driver controls clock
 *
 * When set to 0, peripheral drivers will enable clock in initialize function
 * and disable clock in de-initialize function. When set to 1, peripheral
 * driver will not control the clock, application could control the clock out of
 * the driver.
 *
 * @note All drivers share this feature switcher. If it is set to 1, application
 * should handle clock enable and disable for all drivers.
 */
#if !(defined(FSL_SDK_DISABLE_DRIVER_CLOCK_CONTROL))
#define FSL_SDK_DISABLE_DRIVER_CLOCK_CONTROL 0
#endif

/*!
 * @brief User-defined the size of cache for CLOCK_PllGetConfig() function.
 *
 * Once define this MACRO to be non-zero value, CLOCK_PllGetConfig() function
 * would cache the recent calulation and accelerate the execution to get the
 * right settings.
 */
#ifndef CLOCK_USR_CFG_PLL_CONFIG_CACHE_COUNT
#define CLOCK_USR_CFG_PLL_CONFIG_CACHE_COUNT 2U
#endif

/* Definition for delay API in clock driver, users can redefine it to the real application. */
#ifndef SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY
#define SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY (150000000UL)
#endif

/*! @brief Clock ip name array for ROM. */
#define ROM_CLOCKS \
    {              \
        kCLOCK_Rom \
    }
/*! @brief Clock ip name array for SRAM. */
#define SRAM_CLOCKS                                                                                      \
    {                                                                                                    \
        kCLOCK_Sram1, kCLOCK_Sram2, kCLOCK_Sram3, kCLOCK_Sram4, kCLOCK_Sram5, kCLOCK_Sram6, kCLOCK_Sram7 \
    }
/*! @brief Clock ip name array for FMC. */
#define FMC_CLOCKS \
    {              \
        kCLOCK_Fmc \
    }
/*! @brief Clock ip name array for INPUTMUX. */
#define INPUTMUX_CLOCKS  \
    {                    \
        kCLOCK_InputMux0 \
    }
/*! @brief Clock ip name array for ENET. */
#define ETH_CLOCKS  \
    {               \
        kCLOCK_Enet \
    }
/*! @brief Clock ip name array for GPIO. */
#define GPIO_CLOCKS                                                          \
    {                                                                        \
        kCLOCK_Gpio0, kCLOCK_Gpio1, kCLOCK_Gpio2, kCLOCK_Gpio3, kCLOCK_Gpio4 \
    }
/*! @brief Clock ip name array for PINT. */
#define PINT_CLOCKS \
    {               \
        kCLOCK_Pint \
    }
/*! @brief Clock ip name array for DMA. */
#define DMA_CLOCKS               \
    {                            \
        kCLOCK_Dma0, kCLOCK_Dma1 \
    }
/*! @brief Clock gate name array for EDMA. */
#define EDMA_CLOCKS              \
    {                            \
        kCLOCK_Dma0, kCLOCK_Dma1 \
    }
/*! @brief Clock ip name array for CRC. */
#define CRC_CLOCKS  \
    {               \
        kCLOCK_Crc0 \
    }
/*! @brief Clock ip name array for WWDT. */
#define WWDT_CLOCKS                \
    {                              \
        kCLOCK_Wwdt0, kCLOCK_Wwdt1 \
    }
/*! @brief Clock ip name array for Mailbox. */
#define MAILBOX_CLOCKS \
    {                  \
        kCLOCK_Mailbox \
    }
/*! @brief Clock ip name array for LPADC. */
#define LPADC_CLOCKS             \
    {                            \
        kCLOCK_Adc0, kCLOCK_Adc1 \
    }
/*! @brief Clock ip name array for MRT. */
#define MRT_CLOCKS \
    {              \
        kCLOCK_Mrt \
    }
/*! @brief Clock ip name array for OSTIMER. */
#define OSTIMER_CLOCKS \
    {                  \
        kCLOCK_OsTimer \
    }
/*! @brief Clock ip name array for SCT0. */
#define SCT_CLOCKS \
    {              \
        kCLOCK_Sct \
    }
/*! @brief Clock ip name array for UTICK. */
#define UTICK_CLOCKS \
    {                \
        kCLOCK_Utick \
    }
/*! @brief Clock ip name array for LP_FLEXCOMM. */
#define LP_FLEXCOMM_CLOCKS                                                                                     \
    {                                                                                                          \
        kCLOCK_LPFlexComm0, kCLOCK_LPFlexComm1, kCLOCK_LPFlexComm2, kCLOCK_LPFlexComm3, kCLOCK_LPFlexComm4,    \
            kCLOCK_LPFlexComm5, kCLOCK_LPFlexComm6, kCLOCK_LPFlexComm7, kCLOCK_LPFlexComm8, kCLOCK_LPFlexComm9 \
    }
/*! @brief Clock ip name array for LPUART. */
#define LPUART_CLOCKS                                                                                   \
    {                                                                                                   \
        kCLOCK_LPUart0, kCLOCK_LPUart1, kCLOCK_LPUart2, kCLOCK_LPUart3, kCLOCK_LPUart4, kCLOCK_LPUart5, \
            kCLOCK_LPUart6, kCLOCK_LPUart7, kCLOCK_LPUart8, kCLOCK_LPUart9                              \
    }
/*! @brief Clock ip name array for LPI2C. */
#define LPI2C_CLOCKS                                                                                             \
    {                                                                                                            \
        kCLOCK_LPI2c0, kCLOCK_LPI2c1, kCLOCK_LPI2c2, kCLOCK_LPI2c3, kCLOCK_LPI2c4, kCLOCK_LPI2c5, kCLOCK_LPI2c6, \
            kCLOCK_LPI2c7, kCLOCK_LPI2c8, kCLOCK_LPI2c9                                                          \
    }
/*! @brief Clock ip name array for LSPI. */
#define LPSPI_CLOCKS                                                                                             \
    {                                                                                                            \
        kCLOCK_LPSpi0, kCLOCK_LPSpi1, kCLOCK_LPSpi2, kCLOCK_LPSpi3, kCLOCK_LPSpi4, kCLOCK_LPSpi5, kCLOCK_LPSpi6, \
            kCLOCK_LPSpi7, kCLOCK_LPSpi8, kCLOCK_LPSpi9                                                          \
    }
/*! @brief Clock ip name array for CTIMER. */
#define CTIMER_CLOCKS                                                             \
    {                                                                             \
        kCLOCK_Timer0, kCLOCK_Timer1, kCLOCK_Timer2, kCLOCK_Timer3, kCLOCK_Timer4 \
    }
/*! @brief Clock ip name array for FREQME. */
#define FREQME_CLOCKS \
    {                 \
        kCLOCK_Freqme \
    }
/*! @brief Clock ip name array for PowerQuad. */
#define POWERQUAD_CLOCKS \
    {                    \
        kCLOCK_PowerQuad \
    }
/*! @brief Clock ip name array for PLU. */
#define PLU_CLOCKS    \
    {                 \
        kCLOCK_PluLut \
    }
/*! @brief Clock ip name array for PUF. */
#define PUF_CLOCKS \
    {              \
        kCLOCK_Puf \
    }
/*! @brief Clock ip name array for VREF. */
#define VREF_CLOCKS \
    {               \
        kCLOCK_Vref \
    }
/*! @brief Clock ip name array for LPDAC. */
#define LPDAC_CLOCKS             \
    {                            \
        kCLOCK_Dac0, kCLOCK_Dac1 \
    }
/*! @brief Clock ip name array for HPDAC. */
#define HPDAC_CLOCKS \
    {                \
        kCLOCK_Dac2  \
    }
/*! @brief Clock ip name array for PWM. */
#define PWM_CLOCKS                                                             \
    {                                                                          \
        {kCLOCK_Pwm0_Sm0, kCLOCK_Pwm0_Sm1, kCLOCK_Pwm0_Sm2, kCLOCK_Pwm0_Sm3},  \
        {                                                                      \
            kCLOCK_Pwm1_Sm0, kCLOCK_Pwm1_Sm1, kCLOCK_Pwm1_Sm2, kCLOCK_Pwm1_Sm3 \
        }                                                                      \
    }
/*! @brief Clock ip name array for QDC. */
#define QDC_CLOCKS               \
    {                            \
        kCLOCK_Qdc0, kCLOCK_Qdc1 \
    }
/*! @brief Clock ip name array for FLEXIO. */
#define FLEXIO_CLOCKS \
    {                 \
        kCLOCK_Flexio \
    }
/*! @brief Clock ip name array for FLEXCAN. */
#define FLEXCAN_CLOCKS                   \
    {                                    \
        kCLOCK_Flexcan0, kCLOCK_Flexcan1 \
    }
/*! @brief Clock ip name array for EMVSIM. */
#define EMVSIM_CLOCKS                \
    {                                \
        kCLOCK_Evsim0, kCLOCK_Evsim1 \
    }
/*! @brief Clock ip name array for I3C */
#define I3C_CLOCKS               \
    {                            \
        kCLOCK_I3c0, kCLOCK_I3c1 \
    }
/*! @brief Clock ip name array for USDHC. */
#define USDHC_CLOCKS \
    {                \
        kCLOCK_uSdhc \
    }
/*! @brief Clock ip name array for FLEXSPI */
#define FLEXSPI_CLOCKS \
    {                  \
        kCLOCK_Flexspi \
    }
/*! @brief Clock ip name array for SAI. */
#define SAI_CLOCKS               \
    {                            \
        kCLOCK_Sai0, kCLOCK_Sai1 \
    }
/*! @brief Clock ip name array for RTC. */
#define RTC_CLOCKS  \
    {               \
        kCLOCK_Rtc0 \
    }
/*! @brief Clock ip name array for PDM. */
#define PDM_CLOCKS    \
    {                 \
        kCLOCK_Micfil \
    }
/*! @brief Clock ip name array for ERM. */
#define ERM_CLOCKS \
    {              \
        kCLOCK_Erm \
    }
/*! @brief Clock ip name array for EIM. */
#define EIM_CLOCKS \
    {              \
        kCLOCK_Eim \
    }
/*! @brief Clock ip name array for OPAMP. */
#define OPAMP_CLOCKS                                \
    {                                               \
        kCLOCK_Opamp0, kCLOCK_Opamp1, kCLOCK_Opamp2 \
    }
/*! @brief Clock ip name array for TSI. */
#define TSI_CLOCKS \
    {              \
        kCLOCK_Tsi \
    }
/*! @brief Clock ip name array for TRNG. */
#define TRNG_CLOCKS \
    {               \
        kCLOCK_Trng \
    }
/*! @brief Clock ip name array for LPCMP. */
#define LPCMP_CLOCKS                          \
    {                                         \
        kCLOCK_None, kCLOCK_None, kCLOCK_Cmp2 \
    }
/*! @brief Clock ip name array for SINC */
#define SINC_CLOCKS \
    {               \
        kCLOCK_Sinc \
    }
/*! @brief Clock ip name array for SEMA42 */
#define SEMA42_CLOCKS \
    {                 \
        kCLOCK_Sema42 \
    }
/*! @brief Clock gate name used for CLOCK_EnableClock/CLOCK_DisableClock. */
/*------------------------------------------------------------------------------
 clock_ip_name_t definition:
------------------------------------------------------------------------------*/

#define CLK_GATE_REG_OFFSET_SHIFT 8U
#define CLK_GATE_REG_OFFSET_MASK  0xFFFFFF00U
#define CLK_GATE_BIT_SHIFT_SHIFT  0U
#define CLK_GATE_BIT_SHIFT_MASK   0x000000FFU

#define CLK_GATE_DEFINE(reg_offset, bit_shift)                                  \
    ((((reg_offset) << CLK_GATE_REG_OFFSET_SHIFT) & CLK_GATE_REG_OFFSET_MASK) | \
     (((bit_shift) << CLK_GATE_BIT_SHIFT_SHIFT) & CLK_GATE_BIT_SHIFT_MASK))

#define CLK_GATE_ABSTRACT_REG_OFFSET(x) (((uint32_t)(x)&CLK_GATE_REG_OFFSET_MASK) >> CLK_GATE_REG_OFFSET_SHIFT)
#define CLK_GATE_ABSTRACT_BITS_SHIFT(x) (((uint32_t)(x)&CLK_GATE_BIT_SHIFT_MASK) >> CLK_GATE_BIT_SHIFT_SHIFT)

#define AHB_CLK_CTRL0  0
#define AHB_CLK_CTRL1  1
#define AHB_CLK_CTRL2  2
#define AHB_CLK_CTRL3  3
#define REG_PWM0SUBCTL 250
#define REG_PWM1SUBCTL 251

/*! @brief Clock gate name used for CLOCK_EnableClock/CLOCK_DisableClock. */
typedef enum _clock_ip_name
{
    kCLOCK_IpInvalid = 0U,
    kCLOCK_None      = 0U,

    kCLOCK_Rom       = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 1),
    kCLOCK_Sram1     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 2),
    kCLOCK_Sram2     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 3),
    kCLOCK_Sram3     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 4),
    kCLOCK_Sram4     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 5),
    kCLOCK_Sram5     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 6),
    kCLOCK_Sram6     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 7),
    kCLOCK_Sram7     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 8),
    kCLOCK_Fmu       = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 9),
    kCLOCK_Fmc       = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 10),
    kCLOCK_Flexspi   = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 11),
    kCLOCK_InputMux0 = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 12),
    kCLOCK_InputMux  = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 12),
    kCLOCK_Port0     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 13),
    kCLOCK_Port1     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 14),
    kCLOCK_Port2     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 15),
    kCLOCK_Port3     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 16),
    kCLOCK_Port4     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 17),
    kCLOCK_Gpio0     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 19),
    kCLOCK_Gpio1     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 20),
    kCLOCK_Gpio2     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 21),
    kCLOCK_Gpio3     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 22),
    kCLOCK_Gpio4     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 23),
    kCLOCK_Pint      = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 25),
    kCLOCK_Dma0      = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 26),
    kCLOCK_Crc0      = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 27),
    kCLOCK_Wwdt0     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 28),
    kCLOCK_Wwdt1     = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 29),
    kCLOCK_Mailbox   = CLK_GATE_DEFINE(AHB_CLK_CTRL0, 31),

    kCLOCK_Mrt         = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 0),
    kCLOCK_OsTimer     = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 1),
    kCLOCK_Sct         = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 2),
    kCLOCK_Adc0        = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 3),
    kCLOCK_Adc1        = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 4),
    kCLOCK_Dac0        = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 5),
    kCLOCK_Rtc0        = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 6),
    kCLOCK_Evsim0      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 8),
    kCLOCK_Evsim1      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 9),
    kCLOCK_Utick       = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 10),
    kCLOCK_LPFlexComm0 = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 11),
    kCLOCK_LPFlexComm1 = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 12),
    kCLOCK_LPFlexComm2 = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 13),
    kCLOCK_LPFlexComm3 = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 14),
    kCLOCK_LPFlexComm4 = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 15),
    kCLOCK_LPFlexComm5 = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 16),
    kCLOCK_LPFlexComm6 = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 17),
    kCLOCK_LPFlexComm7 = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 18),
    kCLOCK_LPFlexComm8 = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 19),
    kCLOCK_LPFlexComm9 = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 20),
    kCLOCK_LPUart0     = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 11),
    kCLOCK_LPUart1     = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 12),
    kCLOCK_LPUart2     = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 13),
    kCLOCK_LPUart3     = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 14),
    kCLOCK_LPUart4     = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 15),
    kCLOCK_LPUart5     = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 16),
    kCLOCK_LPUart6     = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 17),
    kCLOCK_LPUart7     = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 18),
    kCLOCK_LPUart8     = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 19),
    kCLOCK_LPUart9     = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 20),
    kCLOCK_LPSpi0      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 11),
    kCLOCK_LPSpi1      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 12),
    kCLOCK_LPSpi2      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 13),
    kCLOCK_LPSpi3      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 14),
    kCLOCK_LPSpi4      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 15),
    kCLOCK_LPSpi5      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 16),
    kCLOCK_LPSpi6      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 17),
    kCLOCK_LPSpi7      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 18),
    kCLOCK_LPSpi8      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 19),
    kCLOCK_LPSpi9      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 20),
    kCLOCK_LPI2c0      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 11),
    kCLOCK_LPI2c1      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 12),
    kCLOCK_LPI2c2      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 13),
    kCLOCK_LPI2c3      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 14),
    kCLOCK_LPI2c4      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 15),
    kCLOCK_LPI2c5      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 16),
    kCLOCK_LPI2c6      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 17),
    kCLOCK_LPI2c7      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 18),
    kCLOCK_LPI2c8      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 19),
    kCLOCK_LPI2c9      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 20),
    kCLOCK_Micfil      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 21),
    kCLOCK_Timer2      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 22),
    kCLOCK_Usb0Ram     = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 23),
    kCLOCK_Usb0FsDcd   = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 24),
    kCLOCK_Usb0Fs      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 25),
    kCLOCK_Timer0      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 26),
    kCLOCK_Timer1      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 27),
    kCLOCK_PkcRam      = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 29),
    kCLOCK_Smartdma    = CLK_GATE_DEFINE(AHB_CLK_CTRL1, 31),

    kCLOCK_Espi      = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 0),
    kCLOCK_Dma1      = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 1),
    kCLOCK_Enet      = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 2),
    kCLOCK_uSdhc     = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 3),
    kCLOCK_Flexio    = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 4),
    kCLOCK_Sai0      = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 5),
    kCLOCK_Sai1      = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 6),
    kCLOCK_Tro       = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 7),
    kCLOCK_Freqme    = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 8),
    kCLOCK_Trng      = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 13),
    kCLOCK_Flexcan0  = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 14),
    kCLOCK_Flexcan1  = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 15),
    kCLOCK_UsbHs     = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 16),
    kCLOCK_UsbHsPhy  = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 17),
    kCLOCK_Css       = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 18),
    kCLOCK_PowerQuad = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 19),
    kCLOCK_PluLut    = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 20),
    kCLOCK_Timer3    = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 21),
    kCLOCK_Timer4    = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 22),
    kCLOCK_Puf       = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 23),
    kCLOCK_Pkc       = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 24),
    kCLOCK_Scg       = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 26),
    kCLOCK_Gdet      = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 29),
    kCLOCK_Sm3       = CLK_GATE_DEFINE(AHB_CLK_CTRL2, 30),

    kCLOCK_I3c0        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 0),
    kCLOCK_I3c1        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 1),
    kCLOCK_Sinc        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 2),
    kCLOCK_CoolFlux    = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 3),
    kCLOCK_Qdc0        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 4),
    kCLOCK_Qdc1        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 5),
    kCLOCK_Pwm0        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 6),
    kCLOCK_Pwm1        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 7),
    kCLOCK_Evtg        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 8),
    kCLOCK_Dac1        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 11),
    kCLOCK_Dac2        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 12),
    kCLOCK_Opamp0      = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 13),
    kCLOCK_Opamp1      = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 14),
    kCLOCK_Opamp2      = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 15),
    kCLOCK_Cmp2        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 18),
    kCLOCK_Vref        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 19),
    kCLOCK_CoolFluxApb = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 20),
    kCLOCK_Neutron     = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 21),
    kCLOCK_Tsi         = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 22),
    kCLOCK_Ewm         = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 23),
    kCLOCK_Ewm0        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 23),
    kCLOCK_Eim         = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 24),
    kCLOCK_Erm         = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 25),
    kCLOCK_Intm        = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 26),
    kCLOCK_Sema42      = CLK_GATE_DEFINE(AHB_CLK_CTRL3, 27),

    kCLOCK_Pwm0_Sm0 = CLK_GATE_DEFINE(REG_PWM0SUBCTL, 0U),
    kCLOCK_Pwm0_Sm1 = CLK_GATE_DEFINE(REG_PWM0SUBCTL, 1U),
    kCLOCK_Pwm0_Sm2 = CLK_GATE_DEFINE(REG_PWM0SUBCTL, 2U),
    kCLOCK_Pwm0_Sm3 = CLK_GATE_DEFINE(REG_PWM0SUBCTL, 3U),

    kCLOCK_Pwm1_Sm0 = CLK_GATE_DEFINE(REG_PWM1SUBCTL, 0U),
    kCLOCK_Pwm1_Sm1 = CLK_GATE_DEFINE(REG_PWM1SUBCTL, 1U),
    kCLOCK_Pwm1_Sm2 = CLK_GATE_DEFINE(REG_PWM1SUBCTL, 2U),
    kCLOCK_Pwm1_Sm3 = CLK_GATE_DEFINE(REG_PWM1SUBCTL, 3U)

} clock_ip_name_t;

/*! @brief Peripherals clock source definition. */
#define BUS_CLK kCLOCK_BusClk

#define I2C0_CLK_SRC BUS_CLK

/*! @brief Clock name used to get clock frequency. */
typedef enum _clock_name
{
    kCLOCK_MainClk,
    kCLOCK_CoreSysClk,
    kCLOCK_BusClk,
    kCLOCK_SystickClk0,
    kCLOCK_SystickClk1,
    kCLOCK_ClockOut,
    kCLOCK_Fro12M,
    kCLOCK_Clk1M,
    kCLOCK_FroHf,
    kCLOCK_Clk48M,
    kCLOCK_Clk144M,
    kCLOCK_Clk16K0,
    kCLOCK_Clk16K1,
    kCLOCK_Clk16K2,
    kCLOCK_Clk16K3,
    kCLOCK_ExtClk,
    kCLOCK_Osc32K0,
    kCLOCK_Osc32K1,
    kCLOCK_Osc32K2,
    kCLOCK_Osc32K3,
    kCLOCK_Pll0Out,
    kCLOCK_Pll1Out,
    kCLOCK_UsbPllOut,
    kCLOCK_LpOsc,
} clock_name_t;

/*! @brief Clock Mux Switches
 *  The encoding is as follows each connection identified is 32bits wide while 24bits are valuable
 *  starting from LSB upwards
 *
 *  [4 bits for choice, 0 means invalid choice] [8 bits mux ID]*
 *
 */

#define CLK_ATTACH_ID(mux, sel, pos) \
    ((((uint32_t)(mux) << 0U) | (((uint32_t)(sel) + 1U) & 0xFU) << 12U) << ((uint32_t)(pos)*16U))
#define MUX_A(mux, sel)           CLK_ATTACH_ID((mux), (sel), 0U)
#define MUX_B(mux, sel, selector) (CLK_ATTACH_ID((mux), (sel), 1U) | ((selector) << 24U))

#define GET_ID_ITEM(connection)      ((connection)&0xFFFFU)
#define GET_ID_NEXT_ITEM(connection) ((connection) >> 16U)
#define GET_ID_ITEM_MUX(connection)  (((uint16_t)connection) & 0xFFFU)
#define GET_ID_ITEM_SEL(connection)  ((uint8_t)((((uint32_t)(connection)&0xF000U) >> 12U) - 1U))
#define GET_ID_SELECTOR(connection)  ((connection)&0xF000000U)

#define CM_SYSTICKCLKSEL0   0U
#define CM_SYSTICKCLKSEL1   ((0x264 - 0x260) / 4)
#define CM_TRACECLKSEL      ((0x268 - 0x260) / 4)
#define CM_CTIMERCLKSEL0    ((0x26C - 0x260) / 4)
#define CM_CTIMERCLKSEL1    ((0x270 - 0x260) / 4)
#define CM_CTIMERCLKSEL2    ((0x274 - 0x260) / 4)
#define CM_CTIMERCLKSEL3    ((0x278 - 0x260) / 4)
#define CM_CTIMERCLKSEL4    ((0x27C - 0x260) / 4)
#define CM_CLKOUTCLKSEL     ((0x288 - 0x260) / 4)
#define CM_ADC0CLKSEL       ((0x2A4 - 0x260) / 4)
#define CM_USB0CLKSEL       ((0x2A8 - 0x260) / 4)
#define CM_FCCLKSEL0        ((0x2B0 - 0x260) / 4)
#define CM_FCCLKSEL1        ((0x2B4 - 0x260) / 4)
#define CM_FCCLKSEL2        ((0x2B8 - 0x260) / 4)
#define CM_FCCLKSEL3        ((0x2BC - 0x260) / 4)
#define CM_FCCLKSEL4        ((0x2C0 - 0x260) / 4)
#define CM_FCCLKSEL5        ((0x2C4 - 0x260) / 4)
#define CM_FCCLKSEL6        ((0x2C8 - 0x260) / 4)
#define CM_FCCLKSEL7        ((0x2CC - 0x260) / 4)
#define CM_FCCLKSEL8        ((0x2D0 - 0x260) / 4)
#define CM_FCCLKSEL9        ((0x2D4 - 0x260) / 4)
#define CM_SCTCLKSEL        ((0x2F0 - 0x260) / 4)
#define CM_TSICLKSEL        ((0x350 - 0x260) / 4)
#define CM_SINCFILTCLKSEL   ((0x360 - 0x260) / 4)
#define CM_ADC1CLKSEL       ((0x464 - 0x260) / 4)
#define CM_DAC0CLKSEL       ((0x490 - 0x260) / 4)
#define CM_DAC1CLKSEL       ((0x498 - 0x260) / 4)
#define CM_DAC2CLKSEL       ((0x4A0 - 0x260) / 4)
#define CM_FLEXSPICLKSEL    ((0x4A8 - 0x260) / 4)
#define CM_PLLCLKDIVSEL     ((0x52C - 0x260) / 4)
#define CM_I3C0FCLKSEL      ((0x530 - 0x260) / 4)
#define CM_I3C0FCLKSTCSEL   ((0x534 - 0x260) / 4)
#define CM_I3C0FCLKSSEL     ((0x544 - 0x260) / 4)
#define CM_MICFILFCLKSEL    ((0x548 - 0x260) / 4)
#define CM_ESPICLKSEL       ((0x550 - 0x260) / 4)
#define CM_USDHCCLKSEL      ((0x558 - 0x260) / 4)
#define CM_FLEXIOCLKSEL     ((0x560 - 0x260) / 4)
#define CM_FLEXCAN0CLKSEL   ((0x5A0 - 0x260) / 4)
#define CM_FLEXCAN1CLKSEL   ((0x5A8 - 0x260) / 4)
#define CM_ENETRMIICLKSEL   ((0x5B0 - 0x260) / 4)
#define CM_ENETPTPREFCLKSEL ((0x5B8 - 0x260) / 4)
#define CM_EWM0CLKSEL       ((0x5D4 - 0x260) / 4)
#define CM_WDT1CLKSEL       ((0x5D8 - 0x260) / 4)
#define CM_OSTIMERCLKSEL    ((0x5E0 - 0x260) / 4)
#define CM_CMP0FCLKSEL      ((0x5F0 - 0x260) / 4)
#define CM_CMP0RRCLKSEL     ((0x5F8 - 0x260) / 4)
#define CM_CMP1FCLKSEL      ((0x600 - 0x260) / 4)
#define CM_CMP1RRCLKSEL     ((0x608 - 0x260) / 4)
#define CM_CMP2FCLKSEL      ((0x610 - 0x260) / 4)
#define CM_CMP2RRCLKSEL     ((0x618 - 0x260) / 4)
#define CM_SAI0CLKSEL       ((0x880 - 0x260) / 4)
#define CM_SAI1CLKSEL       ((0x884 - 0x260) / 4)
#define CM_EMVSIM0CLKSEL    ((0x890 - 0x260) / 4)
#define CM_EMVSIM1CLKSEL    ((0x894 - 0x260) / 4)
#define CM_I3C1FCLKSEL      ((0xB30 - 0x260) / 4)
#define CM_I3C1FCLKSTCSEL   ((0xB34 - 0x260) / 4)
#define CM_I3C1FCLKSSEL     ((0xB44 - 0x260) / 4)

#define CM_SCGRCCRSCSCLKSEL 0x3FEU

/*!
 * @brief The enumerator of clock attach Id.
 */
typedef enum _clock_attach_id
{
    kCLK_IN_to_MAIN_CLK   = MUX_A(CM_SCGRCCRSCSCLKSEL, 1),
    kFRO12M_to_MAIN_CLK   = MUX_A(CM_SCGRCCRSCSCLKSEL, 2),
    kFRO_HF_to_MAIN_CLK   = MUX_A(CM_SCGRCCRSCSCLKSEL, 3),
    kXTAL32K2_to_MAIN_CLK = MUX_A(CM_SCGRCCRSCSCLKSEL, 4),
    kPLL0_to_MAIN_CLK     = MUX_A(CM_SCGRCCRSCSCLKSEL, 5),
    kPLL1_to_MAIN_CLK     = MUX_A(CM_SCGRCCRSCSCLKSEL, 6),
    kUSB_PLL_to_MAIN_CLK  = MUX_A(CM_SCGRCCRSCSCLKSEL, 7),
    kNONE_to_MAIN_CLK     = MUX_A(CM_SCGRCCRSCSCLKSEL, 15),

    kSYSTICK_DIV0_to_SYSTICK0 = MUX_A(CM_SYSTICKCLKSEL0, 0),
    kCLK_1M_to_SYSTICK0       = MUX_A(CM_SYSTICKCLKSEL0, 1),
    kLPOSC_to_SYSTICK0        = MUX_A(CM_SYSTICKCLKSEL0, 2),
    kNONE_to_SYSTICK0         = MUX_A(CM_SYSTICKCLKSEL0, 7),

    kSYSTICK_DIV1_to_SYSTICK1 = MUX_A(CM_SYSTICKCLKSEL1, 0),
    kCLK_1M_to_SYSTICK1       = MUX_A(CM_SYSTICKCLKSEL1, 1),
    kLPOSC_to_SYSTICK1        = MUX_A(CM_SYSTICKCLKSEL1, 2),
    kNONE_to_SYSTICK1         = MUX_A(CM_SYSTICKCLKSEL1, 7),

    kTRACE_DIV_to_TRACE = MUX_A(CM_TRACECLKSEL, 0),
    kCLK_1M_to_TRACE    = MUX_A(CM_TRACECLKSEL, 1),
    kLPOSC_to_TRACE     = MUX_A(CM_TRACECLKSEL, 2),
    kNONE_to_TRACE      = MUX_A(CM_TRACECLKSEL, 7),

    kCLK_1M_to_CTIMER0       = MUX_A(CM_CTIMERCLKSEL0, 0),
    kPLL0_to_CTIMER0         = MUX_A(CM_CTIMERCLKSEL0, 1),
    kPLL1_CLK0_to_CTIMER0    = MUX_A(CM_CTIMERCLKSEL0, 2),
    kFRO_HF_to_CTIMER0       = MUX_A(CM_CTIMERCLKSEL0, 3),
    kFRO12M_to_CTIMER0       = MUX_A(CM_CTIMERCLKSEL0, 4),
    kSAI0_MCLK_IN_to_CTIMER0 = MUX_A(CM_CTIMERCLKSEL0, 5),
    kLPOSC_to_CTIMER0        = MUX_A(CM_CTIMERCLKSEL0, 6),
    kSAI1_MCLK_IN_to_CTIMER0 = MUX_A(CM_CTIMERCLKSEL0, 8),
    kSAI0_TX_BCLK_to_CTIMER0 = MUX_A(CM_CTIMERCLKSEL0, 9),
    kSAI0_RX_BCLK_to_CTIMER0 = MUX_A(CM_CTIMERCLKSEL0, 10),
    kSAI1_TX_BCLK_to_CTIMER0 = MUX_A(CM_CTIMERCLKSEL0, 11),
    kSAI1_RX_BCLK_to_CTIMER0 = MUX_A(CM_CTIMERCLKSEL0, 12),
    kNONE_to_CTIMER0         = MUX_A(CM_CTIMERCLKSEL0, 15),

    kCLK_1M_to_CTIMER1       = MUX_A(CM_CTIMERCLKSEL1, 0),
    kPLL0_to_CTIMER1         = MUX_A(CM_CTIMERCLKSEL1, 1),
    kPLL1_CLK0_to_CTIMER1    = MUX_A(CM_CTIMERCLKSEL1, 2),
    kFRO_HF_to_CTIMER1       = MUX_A(CM_CTIMERCLKSEL1, 3),
    kFRO12M_to_CTIMER1       = MUX_A(CM_CTIMERCLKSEL1, 4),
    kSAI0_MCLK_IN_to_CTIMER1 = MUX_A(CM_CTIMERCLKSEL1, 5),
    kLPOSC_to_CTIMER1        = MUX_A(CM_CTIMERCLKSEL1, 6),
    kSAI1_MCLK_IN_to_CTIMER1 = MUX_A(CM_CTIMERCLKSEL1, 8),
    kSAI0_TX_BCLK_to_CTIMER1 = MUX_A(CM_CTIMERCLKSEL1, 9),
    kSAI0_RX_BCLK_to_CTIMER1 = MUX_A(CM_CTIMERCLKSEL1, 10),
    kSAI1_TX_BCLK_to_CTIMER1 = MUX_A(CM_CTIMERCLKSEL1, 11),
    kSAI1_RX_BCLK_to_CTIMER1 = MUX_A(CM_CTIMERCLKSEL1, 12),
    kNONE_to_CTIMER1         = MUX_A(CM_CTIMERCLKSEL1, 15),

    kCLK_1M_to_CTIMER2       = MUX_A(CM_CTIMERCLKSEL2, 0),
    kPLL0_to_CTIMER2         = MUX_A(CM_CTIMERCLKSEL2, 1),
    kPLL1_CLK0_to_CTIMER2    = MUX_A(CM_CTIMERCLKSEL2, 2),
    kFRO_HF_to_CTIMER2       = MUX_A(CM_CTIMERCLKSEL2, 3),
    kFRO12M_to_CTIMER2       = MUX_A(CM_CTIMERCLKSEL2, 4),
    kSAI0_MCLK_IN_to_CTIMER2 = MUX_A(CM_CTIMERCLKSEL2, 5),
    kLPOSC_to_CTIMER2        = MUX_A(CM_CTIMERCLKSEL2, 6),
    kSAI1_MCLK_IN_to_CTIMER2 = MUX_A(CM_CTIMERCLKSEL2, 8),
    kSAI0_TX_BCLK_to_CTIMER2 = MUX_A(CM_CTIMERCLKSEL2, 9),
    kSAI0_RX_BCLK_to_CTIMER2 = MUX_A(CM_CTIMERCLKSEL2, 10),
    kSAI1_TX_BCLK_to_CTIMER2 = MUX_A(CM_CTIMERCLKSEL2, 11),
    kSAI1_RX_BCLK_to_CTIMER2 = MUX_A(CM_CTIMERCLKSEL2, 12),
    kNONE_to_CTIMER2         = MUX_A(CM_CTIMERCLKSEL2, 15),

    kCLK_1M_to_CTIMER3       = MUX_A(CM_CTIMERCLKSEL3, 0),
    kPLL0_to_CTIMER3         = MUX_A(CM_CTIMERCLKSEL3, 1),
    kPLL1_CLK0_to_CTIMER3    = MUX_A(CM_CTIMERCLKSEL3, 2),
    kFRO_HF_to_CTIMER3       = MUX_A(CM_CTIMERCLKSEL3, 3),
    kFRO12M_to_CTIMER3       = MUX_A(CM_CTIMERCLKSEL3, 4),
    kSAI0_MCLK_IN_to_CTIMER3 = MUX_A(CM_CTIMERCLKSEL3, 5),
    kLPOSC_to_CTIMER3        = MUX_A(CM_CTIMERCLKSEL3, 6),
    kSAI1_MCLK_IN_to_CTIMER3 = MUX_A(CM_CTIMERCLKSEL3, 8),
    kSAI0_TX_BCLK_to_CTIMER3 = MUX_A(CM_CTIMERCLKSEL3, 9),
    kSAI0_RX_BCLK_to_CTIMER3 = MUX_A(CM_CTIMERCLKSEL3, 10),
    kSAI1_TX_BCLK_to_CTIMER3 = MUX_A(CM_CTIMERCLKSEL3, 11),
    kSAI1_RX_BCLK_to_CTIMER3 = MUX_A(CM_CTIMERCLKSEL3, 12),
    kNONE_to_CTIMER3         = MUX_A(CM_CTIMERCLKSEL3, 15),

    kCLK_1M_to_CTIMER4       = MUX_A(CM_CTIMERCLKSEL4, 0),
    kPLL0_to_CTIMER4         = MUX_A(CM_CTIMERCLKSEL4, 1),
    kPLL1_CLK0_to_CTIMER4    = MUX_A(CM_CTIMERCLKSEL4, 2),
    kFRO_HF_to_CTIMER4       = MUX_A(CM_CTIMERCLKSEL4, 3),
    kFRO12M_to_CTIMER4       = MUX_A(CM_CTIMERCLKSEL4, 4),
    kSAI0_MCLK_IN_to_CTIMER4 = MUX_A(CM_CTIMERCLKSEL4, 5),
    kLPOSC_to_CTIMER4        = MUX_A(CM_CTIMERCLKSEL4, 6),
    kSAI1_MCLK_IN_to_CTIMER4 = MUX_A(CM_CTIMERCLKSEL4, 8),
    kSAI0_TX_BCLK_to_CTIMER4 = MUX_A(CM_CTIMERCLKSEL4, 9),
    kSAI0_RX_BCLK_to_CTIMER4 = MUX_A(CM_CTIMERCLKSEL4, 10),
    kSAI1_TX_BCLK_to_CTIMER4 = MUX_A(CM_CTIMERCLKSEL4, 11),
    kSAI1_RX_BCLK_to_CTIMER4 = MUX_A(CM_CTIMERCLKSEL4, 12),
    kNONE_to_CTIMER4         = MUX_A(CM_CTIMERCLKSEL4, 15),

    kMAIN_CLK_to_CLKOUT  = MUX_A(CM_CLKOUTCLKSEL, 0),
    kPLL0_to_CLKOUT      = MUX_A(CM_CLKOUTCLKSEL, 1),
    kCLK_IN_to_CLKOUT    = MUX_A(CM_CLKOUTCLKSEL, 2),
    kFRO_HF_to_CLKOUT    = MUX_A(CM_CLKOUTCLKSEL, 3),
    kFRO12M_to_CLKOUT    = MUX_A(CM_CLKOUTCLKSEL, 4),
    kPLL1_CLK0_to_CLKOUT = MUX_A(CM_CLKOUTCLKSEL, 5),
    kLPOSC_to_CLKOUT     = MUX_A(CM_CLKOUTCLKSEL, 6),
    kUSB_PLL_to_CLKOUT   = MUX_A(CM_CLKOUTCLKSEL, 7),
    kNONE_to_CLKOUT      = MUX_A(CM_CLKOUTCLKSEL, 15),

    kPLL0_to_ADC0      = MUX_A(CM_ADC0CLKSEL, 1),
    kFRO_HF_to_ADC0    = MUX_A(CM_ADC0CLKSEL, 2),
    kFRO12M_to_ADC0    = MUX_A(CM_ADC0CLKSEL, 3),
    kCLK_IN_to_ADC0    = MUX_A(CM_ADC0CLKSEL, 4),
    kPLL1_CLK0_to_ADC0 = MUX_A(CM_ADC0CLKSEL, 5),
    kUSB_PLL_to_ADC0   = MUX_A(CM_ADC0CLKSEL, 6),
    kNONE_to_ADC0      = MUX_A(CM_ADC0CLKSEL, 7),

    kPLL0_to_USB0      = MUX_A(CM_USB0CLKSEL, 1),
    kCLK_48M_to_USB0   = MUX_A(CM_USB0CLKSEL, 3),
    kCLK_IN_to_USB0    = MUX_A(CM_USB0CLKSEL, 4),
    kPLL1_CLK0_to_USB0 = MUX_A(CM_USB0CLKSEL, 5),
    kUSB_PLL_to_USB0   = MUX_A(CM_USB0CLKSEL, 6),
    kNONE_to_USB0      = MUX_A(CM_USB0CLKSEL, 7),

    kPLL_DIV_to_FLEXCOMM0    = MUX_A(CM_FCCLKSEL0, 1),
    kFRO12M_to_FLEXCOMM0     = MUX_A(CM_FCCLKSEL0, 2),
    kFRO_HF_DIV_to_FLEXCOMM0 = MUX_A(CM_FCCLKSEL0, 3),
    kCLK_1M_to_FLEXCOMM0     = MUX_A(CM_FCCLKSEL0, 4),
    kUSB_PLL_to_FLEXCOMM0    = MUX_A(CM_FCCLKSEL0, 5),
    kLPOSC_to_FLEXCOMM0      = MUX_A(CM_FCCLKSEL0, 6),
    kNONE_to_FLEXCOMM0       = MUX_A(CM_FCCLKSEL0, 7),

    kPLL_DIV_to_FLEXCOMM1    = MUX_A(CM_FCCLKSEL1, 1),
    kFRO12M_to_FLEXCOMM1     = MUX_A(CM_FCCLKSEL1, 2),
    kFRO_HF_DIV_to_FLEXCOMM1 = MUX_A(CM_FCCLKSEL1, 3),
    kCLK_1M_to_FLEXCOMM1     = MUX_A(CM_FCCLKSEL1, 4),
    kUSB_PLL_to_FLEXCOMM1    = MUX_A(CM_FCCLKSEL1, 5),
    kLPOSC_to_FLEXCOMM1      = MUX_A(CM_FCCLKSEL1, 6),
    kNONE_to_FLEXCOMM1       = MUX_A(CM_FCCLKSEL1, 7),

    kPLL_DIV_to_FLEXCOMM2    = MUX_A(CM_FCCLKSEL2, 1),
    kFRO12M_to_FLEXCOMM2     = MUX_A(CM_FCCLKSEL2, 2),
    kFRO_HF_DIV_to_FLEXCOMM2 = MUX_A(CM_FCCLKSEL2, 3),
    kCLK_1M_to_FLEXCOMM2     = MUX_A(CM_FCCLKSEL2, 4),
    kUSB_PLL_to_FLEXCOMM2    = MUX_A(CM_FCCLKSEL2, 5),
    kLPOSC_to_FLEXCOMM2      = MUX_A(CM_FCCLKSEL2, 6),
    kNONE_to_FLEXCOMM2       = MUX_A(CM_FCCLKSEL2, 7),

    kPLL_DIV_to_FLEXCOMM3    = MUX_A(CM_FCCLKSEL3, 1),
    kFRO12M_to_FLEXCOMM3     = MUX_A(CM_FCCLKSEL3, 2),
    kFRO_HF_DIV_to_FLEXCOMM3 = MUX_A(CM_FCCLKSEL3, 3),
    kCLK_1M_to_FLEXCOMM3     = MUX_A(CM_FCCLKSEL3, 4),
    kUSB_PLL_to_FLEXCOMM3    = MUX_A(CM_FCCLKSEL3, 5),
    kLPOSC_to_FLEXCOMM3      = MUX_A(CM_FCCLKSEL3, 6),
    kNONE_to_FLEXCOMM3       = MUX_A(CM_FCCLKSEL3, 7),

    kPLL_DIV_to_FLEXCOMM4    = MUX_A(CM_FCCLKSEL4, 1),
    kFRO12M_to_FLEXCOMM4     = MUX_A(CM_FCCLKSEL4, 2),
    kFRO_HF_DIV_to_FLEXCOMM4 = MUX_A(CM_FCCLKSEL4, 3),
    kCLK_1M_to_FLEXCOMM4     = MUX_A(CM_FCCLKSEL4, 4),
    kUSB_PLL_to_FLEXCOMM4    = MUX_A(CM_FCCLKSEL4, 5),
    kLPOSC_to_FLEXCOMM4      = MUX_A(CM_FCCLKSEL4, 6),
    kNONE_to_FLEXCOMM4       = MUX_A(CM_FCCLKSEL4, 7),

    kPLL_DIV_to_FLEXCOMM5    = MUX_A(CM_FCCLKSEL5, 1),
    kFRO12M_to_FLEXCOMM5     = MUX_A(CM_FCCLKSEL5, 2),
    kFRO_HF_DIV_to_FLEXCOMM5 = MUX_A(CM_FCCLKSEL5, 3),
    kCLK_1M_to_FLEXCOMM5     = MUX_A(CM_FCCLKSEL5, 4),
    kUSB_PLL_to_FLEXCOMM5    = MUX_A(CM_FCCLKSEL5, 5),
    kLPOSC_to_FLEXCOMM5      = MUX_A(CM_FCCLKSEL5, 6),
    kNONE_to_FLEXCOMM5       = MUX_A(CM_FCCLKSEL5, 7),

    kPLL_DIV_to_FLEXCOMM6    = MUX_A(CM_FCCLKSEL6, 1),
    kFRO12M_to_FLEXCOMM6     = MUX_A(CM_FCCLKSEL6, 2),
    kFRO_HF_DIV_to_FLEXCOMM6 = MUX_A(CM_FCCLKSEL6, 3),
    kCLK_1M_to_FLEXCOMM6     = MUX_A(CM_FCCLKSEL6, 4),
    kUSB_PLL_to_FLEXCOMM6    = MUX_A(CM_FCCLKSEL6, 5),
    kLPOSC_to_FLEXCOMM6      = MUX_A(CM_FCCLKSEL6, 6),
    kNONE_to_FLEXCOMM6       = MUX_A(CM_FCCLKSEL6, 7),

    kPLL_DIV_to_FLEXCOMM7    = MUX_A(CM_FCCLKSEL7, 1),
    kFRO12M_to_FLEXCOMM7     = MUX_A(CM_FCCLKSEL7, 2),
    kFRO_HF_DIV_to_FLEXCOMM7 = MUX_A(CM_FCCLKSEL7, 3),
    kCLK_1M_to_FLEXCOMM7     = MUX_A(CM_FCCLKSEL7, 4),
    kUSB_PLL_to_FLEXCOMM7    = MUX_A(CM_FCCLKSEL7, 5),
    kLPOSC_to_FLEXCOMM7      = MUX_A(CM_FCCLKSEL7, 6),
    kNONE_to_FLEXCOMM7       = MUX_A(CM_FCCLKSEL7, 7),

    kPLL_DIV_to_FLEXCOMM8    = MUX_A(CM_FCCLKSEL8, 1),
    kFRO12M_to_FLEXCOMM8     = MUX_A(CM_FCCLKSEL8, 2),
    kFRO_HF_DIV_to_FLEXCOMM8 = MUX_A(CM_FCCLKSEL8, 3),
    kCLK_1M_to_FLEXCOMM8     = MUX_A(CM_FCCLKSEL8, 4),
    kUSB_PLL_to_FLEXCOMM8    = MUX_A(CM_FCCLKSEL8, 5),
    kLPOSC_to_FLEXCOMM8      = MUX_A(CM_FCCLKSEL8, 6),
    kNONE_to_FLEXCOMM8       = MUX_A(CM_FCCLKSEL8, 7),

    kPLL_DIV_to_FLEXCOMM9    = MUX_A(CM_FCCLKSEL9, 1),
    kFRO12M_to_FLEXCOMM9     = MUX_A(CM_FCCLKSEL9, 2),
    kFRO_HF_DIV_to_FLEXCOMM9 = MUX_A(CM_FCCLKSEL9, 3),
    kCLK_1M_to_FLEXCOMM9     = MUX_A(CM_FCCLKSEL9, 4),
    kUSB_PLL_to_FLEXCOMM9    = MUX_A(CM_FCCLKSEL9, 5),
    kLPOSC_to_FLEXCOMM9      = MUX_A(CM_FCCLKSEL9, 6),
    kNONE_to_FLEXCOMM9       = MUX_A(CM_FCCLKSEL9, 7),

    kPLL0_to_SCT         = MUX_A(CM_SCTCLKSEL, 1),
    kCLK_IN_to_SCT       = MUX_A(CM_SCTCLKSEL, 2),
    kFRO_HF_to_SCT       = MUX_A(CM_SCTCLKSEL, 3),
    kPLL1_CLK0_to_SCT    = MUX_A(CM_SCTCLKSEL, 4),
    kSAI0_MCLK_IN_to_SCT = MUX_A(CM_SCTCLKSEL, 5),
    kUSB_PLL_to_SCT      = MUX_A(CM_SCTCLKSEL, 6),
    kSAI1_MCLK_IN_to_SCT = MUX_A(CM_SCTCLKSEL, 8),
    kNONE_to_SCT         = MUX_A(CM_SCTCLKSEL, 15),

    kCLK_IN_to_TSI = MUX_A(CM_TSICLKSEL, 2),
    kFRO12M_to_TSI = MUX_A(CM_TSICLKSEL, 4),
    kNONE_to_TSI   = MUX_A(CM_TSICLKSEL, 7),

    kPLL0_to_SINCFILT      = MUX_A(CM_SINCFILTCLKSEL, 1),
    kCLK_IN_to_SINCFILT    = MUX_A(CM_SINCFILTCLKSEL, 2),
    kFRO_HF_to_SINCFILT    = MUX_A(CM_SINCFILTCLKSEL, 3),
    kFRO12M_to_SINCFILT    = MUX_A(CM_SINCFILTCLKSEL, 4),
    kPLL1_CLK0_to_SINCFILT = MUX_A(CM_SINCFILTCLKSEL, 5),
    kUSB_PLL_to_SINCFILT   = MUX_A(CM_SINCFILTCLKSEL, 6),
    kNONE_to_SINCFILT      = MUX_A(CM_SINCFILTCLKSEL, 7),

    kPLL0_to_ADC1      = MUX_A(CM_ADC1CLKSEL, 1),
    kFRO_HF_to_ADC1    = MUX_A(CM_ADC1CLKSEL, 2),
    kFRO12M_to_ADC1    = MUX_A(CM_ADC1CLKSEL, 3),
    kCLK_IN_to_ADC1    = MUX_A(CM_ADC1CLKSEL, 4),
    kPLL1_CLK0_to_ADC1 = MUX_A(CM_ADC1CLKSEL, 5),
    kUSB_PLL_to_ADC1   = MUX_A(CM_ADC1CLKSEL, 6),
    kNONE_to_ADC1      = MUX_A(CM_ADC1CLKSEL, 7),

    kPLL0_to_DAC0      = MUX_A(CM_DAC0CLKSEL, 1),
    kCLK_IN_to_DAC0    = MUX_A(CM_DAC0CLKSEL, 2),
    kFRO_HF_to_DAC0    = MUX_A(CM_DAC0CLKSEL, 3),
    kFRO12M_to_DAC0    = MUX_A(CM_DAC0CLKSEL, 4),
    kPLL1_CLK0_to_DAC0 = MUX_A(CM_DAC0CLKSEL, 5),
    kNONE_to_DAC0      = MUX_A(CM_DAC0CLKSEL, 7),

    kPLL0_to_DAC1      = MUX_A(CM_DAC1CLKSEL, 1),
    kCLK_IN_to_DAC1    = MUX_A(CM_DAC1CLKSEL, 2),
    kFRO_HF_to_DAC1    = MUX_A(CM_DAC1CLKSEL, 3),
    kFRO12M_to_DAC1    = MUX_A(CM_DAC1CLKSEL, 4),
    kPLL1_CLK0_to_DAC1 = MUX_A(CM_DAC1CLKSEL, 5),
    kNONE_to_DAC1      = MUX_A(CM_DAC1CLKSEL, 7),

    kPLL0_to_DAC2      = MUX_A(CM_DAC2CLKSEL, 1),
    kCLK_IN_to_DAC2    = MUX_A(CM_DAC2CLKSEL, 2),
    kFRO_HF_to_DAC2    = MUX_A(CM_DAC2CLKSEL, 3),
    kFRO12M_to_DAC2    = MUX_A(CM_DAC2CLKSEL, 4),
    kPLL1_CLK0_to_DAC2 = MUX_A(CM_DAC2CLKSEL, 5),
    kNONE_to_DAC2      = MUX_A(CM_DAC2CLKSEL, 7),

    kPLL0_to_FLEXSPI    = MUX_A(CM_FLEXSPICLKSEL, 1),
    kFRO_HF_to_FLEXSPI  = MUX_A(CM_FLEXSPICLKSEL, 3),
    kPLL1_to_FLEXSPI    = MUX_A(CM_FLEXSPICLKSEL, 5),
    kUSB_PLL_to_FLEXSPI = MUX_A(CM_FLEXSPICLKSEL, 6),
    kNONE_to_FLEXSPI    = MUX_A(CM_FLEXSPICLKSEL, 15),

    kPLL0_to_PLLCLKDIV      = MUX_A(CM_PLLCLKDIVSEL, 0),
    kPLL1_CLK0_to_PLLCLKDIV = MUX_A(CM_PLLCLKDIVSEL, 1),
    kNONE_to_PLLCLKDIV      = MUX_A(CM_PLLCLKDIVSEL, 1),

    kPLL0_to_I3C0FCLK      = MUX_A(CM_I3C0FCLKSEL, 1),
    kCLK_IN_to_I3C0FCLK    = MUX_A(CM_I3C0FCLKSEL, 2),
    kFRO_HF_to_I3C0FCLK    = MUX_A(CM_I3C0FCLKSEL, 3),
    kPLL1_CLK0_to_I3C0FCLK = MUX_A(CM_I3C0FCLKSEL, 5),
    kUSB_PLL_to_I3C0FCLK   = MUX_A(CM_I3C0FCLKSEL, 6),
    kNONE_to_I3C0FCLK      = MUX_A(CM_I3C0FCLKSEL, 7),

    kI3C0FCLK_to_I3C0FCLKSTC = MUX_A(CM_I3C0FCLKSTCSEL, 0),
    kCLK_1M_to_I3C0FCLKSTC   = MUX_A(CM_I3C0FCLKSTCSEL, 1),
    kNONE_to_I3C0FCLKSTC     = MUX_A(CM_I3C0FCLKSTCSEL, 7),

    kCLK_1M_to_I3C0FCLKS = MUX_A(CM_I3C0FCLKSSEL, 0),
    kNONE_to_I3C0FCLKS   = MUX_A(CM_I3C0FCLKSSEL, 7),

    kFRO12M_to_MICFILF       = MUX_A(CM_MICFILFCLKSEL, 0),
    kPLL0_to_MICFILF         = MUX_A(CM_MICFILFCLKSEL, 1),
    kCLK_IN_to_MICFILF       = MUX_A(CM_MICFILFCLKSEL, 2),
    kFRO_HF_to_MICFILF       = MUX_A(CM_MICFILFCLKSEL, 3),
    kPLL1_CLK0_to_MICFILF    = MUX_A(CM_MICFILFCLKSEL, 4),
    kSAI0_MCLK_IN_to_MICFILF = MUX_A(CM_MICFILFCLKSEL, 5),
    kUSB_PLL_to_MICFILF      = MUX_A(CM_MICFILFCLKSEL, 6),
    kSAI1_MCLK_IN_to_MICFILF = MUX_A(CM_MICFILFCLKSEL, 8),
    kNONE_to_MICFILF         = MUX_A(CM_MICFILFCLKSEL, 15),

    kPLL0_to_ESPI      = MUX_A(CM_ESPICLKSEL, 1),
    kCLK_48M_to_ESPI   = MUX_A(CM_ESPICLKSEL, 3),
    kPLL1_CLK0_to_ESPI = MUX_A(CM_ESPICLKSEL, 5),
    kUSB_PLL_to_ESPI   = MUX_A(CM_ESPICLKSEL, 6),
    kNONE_to_ESPI      = MUX_A(CM_ESPICLKSEL, 7),

    kPLL0_to_USDHC      = MUX_A(CM_USDHCCLKSEL, 1),
    kCLK_IN_to_USDHC    = MUX_A(CM_USDHCCLKSEL, 2),
    kFRO_HF_to_USDHC    = MUX_A(CM_USDHCCLKSEL, 3),
    kFRO12M_to_USDHC    = MUX_A(CM_USDHCCLKSEL, 4),
    kPLL1_CLK1_to_USDHC = MUX_A(CM_USDHCCLKSEL, 5),
    kUSB_PLL_to_USDHC   = MUX_A(CM_USDHCCLKSEL, 6),
    kNONE_to_USDHC      = MUX_A(CM_USDHCCLKSEL, 7),

    kPLL0_to_FLEXIO      = MUX_A(CM_FLEXIOCLKSEL, 1),
    kCLK_IN_to_FLEXIO    = MUX_A(CM_FLEXIOCLKSEL, 2),
    kFRO_HF_to_FLEXIO    = MUX_A(CM_FLEXIOCLKSEL, 3),
    kFRO12M_to_FLEXIO    = MUX_A(CM_FLEXIOCLKSEL, 4),
    kPLL1_CLK0_to_FLEXIO = MUX_A(CM_FLEXIOCLKSEL, 5),
    kUSB_PLL_to_FLEXIO   = MUX_A(CM_FLEXIOCLKSEL, 6),
    kNONE_to_FLEXIO      = MUX_A(CM_FLEXIOCLKSEL, 7),

    kPLL0_to_FLEXCAN0      = MUX_A(CM_FLEXCAN0CLKSEL, 1),
    kCLK_IN_to_FLEXCAN0    = MUX_A(CM_FLEXCAN0CLKSEL, 2),
    kFRO_HF_to_FLEXCAN0    = MUX_A(CM_FLEXCAN0CLKSEL, 3),
    kPLL1_CLK0_to_FLEXCAN0 = MUX_A(CM_FLEXCAN0CLKSEL, 5),
    kUSB_PLL_to_FLEXCAN0   = MUX_A(CM_FLEXCAN0CLKSEL, 6),
    kNONE_to_FLEXCAN0      = MUX_A(CM_FLEXCAN0CLKSEL, 7),

    kPLL0_to_FLEXCAN1      = MUX_A(CM_FLEXCAN1CLKSEL, 1),
    kCLK_IN_to_FLEXCAN1    = MUX_A(CM_FLEXCAN1CLKSEL, 2),
    kFRO_HF_to_FLEXCAN1    = MUX_A(CM_FLEXCAN1CLKSEL, 3),
    kPLL1_CLK0_to_FLEXCAN1 = MUX_A(CM_FLEXCAN1CLKSEL, 5),
    kUSB_PLL_to_FLEXCAN1   = MUX_A(CM_FLEXCAN1CLKSEL, 6),
    kNONE_to_FLEXCAN1      = MUX_A(CM_FLEXCAN1CLKSEL, 7),

    kNONE_to_ENETRMII      = MUX_A(CM_ENETRMIICLKSEL, 0),
    kPLL0_to_ENETRMII      = MUX_A(CM_ENETRMIICLKSEL, 1),
    kCLK_IN_to_ENETRMII    = MUX_A(CM_ENETRMIICLKSEL, 2),
    kPLL1_CLK0_to_ENETRMII = MUX_A(CM_ENETRMIICLKSEL, 5),

    kPLL0_to_ENETPTPREF         = MUX_A(CM_ENETPTPREFCLKSEL, 1),
    kCLK_IN_to_ENETPTPREF       = MUX_A(CM_ENETPTPREFCLKSEL, 2),
    kENET0_TX_CLK_to_ENETPTPREF = MUX_A(CM_ENETPTPREFCLKSEL, 4),
    kPLL1_CLK1_to_ENETPTPREF    = MUX_A(CM_ENETPTPREFCLKSEL, 5),
    kNONE_to_ENETPTPREF         = MUX_A(CM_ENETPTPREFCLKSEL, 7),

    kCLK_16K2_to_EWM0 = MUX_A(CM_EWM0CLKSEL, 0),
    kXTAL32K2_to_EWM0 = MUX_A(CM_EWM0CLKSEL, 1),

    kCLK_16K2_to_WDT1   = MUX_A(CM_WDT1CLKSEL, 0),
    kFRO_HF_DIV_to_WDT1 = MUX_A(CM_WDT1CLKSEL, 1),
    kCLK_1M_to_WDT1     = MUX_A(CM_WDT1CLKSEL, 2),
    kCLK_1M_2_to_WDT1   = MUX_A(CM_WDT1CLKSEL, 3),

    kCLK_16K2_to_OSTIMER = MUX_A(CM_OSTIMERCLKSEL, 0),
    kXTAL32K2_to_OSTIMER = MUX_A(CM_OSTIMERCLKSEL, 1),
    kCLK_1M_to_OSTIMER   = MUX_A(CM_OSTIMERCLKSEL, 2),
    kNONE_to_OSTIMER     = MUX_A(CM_OSTIMERCLKSEL, 3),

    kPLL0_to_CMP0F      = MUX_A(CM_CMP0FCLKSEL, 1),
    kFRO_HF_to_CMP0F    = MUX_A(CM_CMP0FCLKSEL, 2),
    kFRO12M_to_CMP0F    = MUX_A(CM_CMP0FCLKSEL, 3),
    kCLK_IN_to_CMP0F    = MUX_A(CM_CMP0FCLKSEL, 4),
    kPLL1_CLK0_to_CMP0F = MUX_A(CM_CMP0FCLKSEL, 5),
    kUSB_PLL_to_CMP0F   = MUX_A(CM_CMP0FCLKSEL, 6),
    kNONE_to_CMP0F      = MUX_A(CM_CMP0FCLKSEL, 7),

    kPLL0_to_CMP0RR      = MUX_A(CM_CMP0RRCLKSEL, 1),
    kFRO_HF_to_CMP0RR    = MUX_A(CM_CMP0RRCLKSEL, 2),
    kFRO12M_to_CMP0RR    = MUX_A(CM_CMP0RRCLKSEL, 3),
    kCLK_IN_to_CMP0RR    = MUX_A(CM_CMP0RRCLKSEL, 4),
    kPLL1_CLK0_to_CMP0RR = MUX_A(CM_CMP0RRCLKSEL, 5),
    kUSB_PLL_to_CMP0RR   = MUX_A(CM_CMP0RRCLKSEL, 6),
    kNONE_to_CMP0RR      = MUX_A(CM_CMP0RRCLKSEL, 7),

    kPLL0_to_CMP1F      = MUX_A(CM_CMP1FCLKSEL, 1),
    kFRO_HF_to_CMP1F    = MUX_A(CM_CMP1FCLKSEL, 2),
    kFRO12M_to_CMP1F    = MUX_A(CM_CMP1FCLKSEL, 3),
    kCLK_IN_to_CMP1F    = MUX_A(CM_CMP1FCLKSEL, 4),
    kPLL1_CLK0_to_CMP1F = MUX_A(CM_CMP1FCLKSEL, 5),
    kUSB_PLL_to_CMP1F   = MUX_A(CM_CMP1FCLKSEL, 6),
    kNONE_to_CMP1F      = MUX_A(CM_CMP1FCLKSEL, 7),

    kPLL0_to_CMP1RR      = MUX_A(CM_CMP1RRCLKSEL, 1),
    kFRO_HF_to_CMP1RR    = MUX_A(CM_CMP1RRCLKSEL, 2),
    kFRO12M_to_CMP1RR    = MUX_A(CM_CMP1RRCLKSEL, 3),
    kCLK_IN_to_CMP1RR    = MUX_A(CM_CMP1RRCLKSEL, 4),
    kPLL1_CLK0_to_CMP1RR = MUX_A(CM_CMP1RRCLKSEL, 5),
    kUSB_PLL_to_CMP1RR   = MUX_A(CM_CMP1RRCLKSEL, 6),
    kNONE_to_CMP1RR      = MUX_A(CM_CMP1RRCLKSEL, 7),

    kPLL0_to_CMP2F      = MUX_A(CM_CMP2FCLKSEL, 1),
    kFRO_HF_to_CMP2F    = MUX_A(CM_CMP2FCLKSEL, 2),
    kFRO12M_to_CMP2F    = MUX_A(CM_CMP2FCLKSEL, 3),
    kCLK_IN_to_CMP2F    = MUX_A(CM_CMP2FCLKSEL, 4),
    kPLL1_CLK0_to_CMP2F = MUX_A(CM_CMP2FCLKSEL, 5),
    kUSB_PLL_to_CMP2F   = MUX_A(CM_CMP2FCLKSEL, 6),
    kNONE_to_CMP2F      = MUX_A(CM_CMP2FCLKSEL, 7),

    kPLL0_to_CMP2RR      = MUX_A(CM_CMP2RRCLKSEL, 1),
    kFRO_HF_to_CMP2RR    = MUX_A(CM_CMP2RRCLKSEL, 2),
    kFRO12M_to_CMP2RR    = MUX_A(CM_CMP2RRCLKSEL, 3),
    kCLK_IN_to_CMP2RR    = MUX_A(CM_CMP2RRCLKSEL, 4),
    kPLL1_CLK0_to_CMP2RR = MUX_A(CM_CMP2RRCLKSEL, 5),
    kUSB_PLL_to_CMP2RR   = MUX_A(CM_CMP2RRCLKSEL, 6),
    kNONE_to_CMP2RR      = MUX_A(CM_CMP2RRCLKSEL, 7),

    kPLL0_to_SAI0      = MUX_A(CM_SAI0CLKSEL, 1),
    kCLK_IN_to_SAI0    = MUX_A(CM_SAI0CLKSEL, 2),
    kFRO_HF_to_SAI0    = MUX_A(CM_SAI0CLKSEL, 3),
    kPLL1_CLK0_to_SAI0 = MUX_A(CM_SAI0CLKSEL, 4),
    kUSB_PLL_to_SAI0   = MUX_A(CM_SAI0CLKSEL, 6),
    kNONE_to_SAI0      = MUX_A(CM_SAI0CLKSEL, 7),

    kPLL0_to_SAI1      = MUX_A(CM_SAI1CLKSEL, 1),
    kCLK_IN_to_SAI1    = MUX_A(CM_SAI1CLKSEL, 2),
    kFRO_HF_to_SAI1    = MUX_A(CM_SAI1CLKSEL, 3),
    kPLL1_CLK0_to_SAI1 = MUX_A(CM_SAI1CLKSEL, 4),
    kUSB_PLL_to_SAI1   = MUX_A(CM_SAI1CLKSEL, 6),
    kNONE_to_SAI1      = MUX_A(CM_SAI1CLKSEL, 7),

    kPLL0_to_EMVSIM0      = MUX_A(CM_EMVSIM0CLKSEL, 1),
    kCLK_IN_to_EMVSIM0    = MUX_A(CM_EMVSIM0CLKSEL, 2),
    kFRO_HF_to_EMVSIM0    = MUX_A(CM_EMVSIM0CLKSEL, 3),
    kFRO12M_to_EMVSIM0    = MUX_A(CM_EMVSIM0CLKSEL, 4),
    kPLL1_CLK0_to_EMVSIM0 = MUX_A(CM_EMVSIM0CLKSEL, 5),
    kNONE_to_EMVSIM0      = MUX_A(CM_EMVSIM0CLKSEL, 7),

    kPLL0_to_EMVSIM1      = MUX_A(CM_EMVSIM1CLKSEL, 1),
    kCLK_IN_to_EMVSIM1    = MUX_A(CM_EMVSIM1CLKSEL, 2),
    kFRO_HF_to_EMVSIM1    = MUX_A(CM_EMVSIM1CLKSEL, 3),
    kFRO12M_to_EMVSIM1    = MUX_A(CM_EMVSIM1CLKSEL, 4),
    kPLL1_CLK0_to_EMVSIM1 = MUX_A(CM_EMVSIM1CLKSEL, 5),
    kNONE_to_EMVSIM1      = MUX_A(CM_EMVSIM1CLKSEL, 7),

    kPLL0_to_I3C1FCLK      = MUX_A(CM_I3C1FCLKSEL, 1),
    kCLK_IN_to_I3C1FCLK    = MUX_A(CM_I3C1FCLKSEL, 2),
    kFRO_HF_to_I3C1FCLK    = MUX_A(CM_I3C1FCLKSEL, 3),
    kPLL1_CLK0_to_I3C1FCLK = MUX_A(CM_I3C1FCLKSEL, 5),
    kUSB_PLL_to_I3C1FCLK   = MUX_A(CM_I3C1FCLKSEL, 6),
    kNONE_to_I3C1FCLK      = MUX_A(CM_I3C1FCLKSEL, 7),

    kI3C1FCLK_to_I3C1FCLKSTC = MUX_A(CM_I3C1FCLKSTCSEL, 0),
    kCLK_1M_to_I3C1FCLKSTC   = MUX_A(CM_I3C1FCLKSTCSEL, 1),
    kNONE_to_I3C1FCLKSTC     = MUX_A(CM_I3C1FCLKSTCSEL, 7),

    kCLK_1M_to_I3C1FCLKS = MUX_A(CM_I3C1FCLKSSEL, 0),
    kNONE_to_I3C1FCLKS   = MUX_A(CM_I3C1FCLKSSEL, 7),

    kNONE_to_NONE = (int)0x80000000U,

} clock_attach_id_t;

/*! @brief Clock dividers */
typedef enum _clock_div_name
{
    kCLOCK_DivSystickClk0   = 0,
    kCLOCK_DivSystickClk1   = ((0x304 - 0x300) / 4),
    kCLOCK_DivTraceClk      = ((0x308 - 0x300) / 4),
    kCLOCK_DivSlowClk       = ((0x378 - 0x300) / 4),
    kCLOCK_DivTsiClk        = ((0x37C - 0x300) / 4),
    kCLOCK_DivAhbClk        = ((0x380 - 0x300) / 4),
    kCLOCK_DivClkOut        = ((0x384 - 0x300) / 4),
    kCLOCK_DivFrohfClk      = ((0x388 - 0x300) / 4),
    kCLOCK_DivWdt0Clk       = ((0x38C - 0x300) / 4),
    kCLOCK_DivAdc0Clk       = ((0x394 - 0x300) / 4),
    kCLOCK_DivUsb0Clk       = ((0x398 - 0x300) / 4),
    kCLOCK_DivSctClk        = ((0x3B4 - 0x300) / 4),
    kCLOCK_DivPllClk        = ((0x3C4 - 0x300) / 4),
    kCLOCK_DivCtimer0Clk    = ((0x3D0 - 0x300) / 4),
    kCLOCK_DivCtimer1Clk    = ((0x3D4 - 0x300) / 4),
    kCLOCK_DivCtimer2Clk    = ((0x3D8 - 0x300) / 4),
    kCLOCK_DivCtimer3Clk    = ((0x3DC - 0x300) / 4),
    kCLOCK_DivCtimer4Clk    = ((0x3E0 - 0x300) / 4),
    kCLOCK_DivPLL1Clk0      = ((0x3E4 - 0x300) / 4),
    kCLOCK_DivPLL1Clk1      = ((0x3E8 - 0x300) / 4),
    kCLOCK_DivAdc1Clk       = ((0x468 - 0x300) / 4),
    kCLOCK_DivDac0Clk       = ((0x494 - 0x300) / 4),
    kCLOCK_DivDac1Clk       = ((0x49C - 0x300) / 4),
    kCLOCK_DivDac2Clk       = ((0x4A4 - 0x300) / 4),
    kCLOCK_DivFlexspiClk    = ((0x4AC - 0x300) / 4),
    kCLOCK_DivI3c0FClkStc   = ((0x538 - 0x300) / 4),
    kCLOCK_DivI3c0FClkS     = ((0x53C - 0x300) / 4),
    kCLOCK_DivI3c0FClk      = ((0x540 - 0x300) / 4),
    kCLOCK_DivMicfilFClk    = ((0x54C - 0x300) / 4),
    kCLOCK_DivEspiClk       = ((0x554 - 0x300) / 4),
    kCLOCK_DivUSdhcClk      = ((0x55C - 0x300) / 4),
    kCLOCK_DivFlexioClk     = ((0x564 - 0x300) / 4),
    kCLOCK_DivFlexcan0Clk   = ((0x5A4 - 0x300) / 4),
    kCLOCK_DivFlexcan1Clk   = ((0x5AC - 0x300) / 4),
    kCLOCK_DivEnetrmiiClk   = ((0x5B4 - 0x300) / 4),
    kCLOCK_DivEnetptprefClk = ((0x5BC - 0x300) / 4),
    kCLOCK_DivWdt1Clk       = ((0x5DC - 0x300) / 4),
    kCLOCK_DivCmp0FClk      = ((0x5F4 - 0x300) / 4),
    kCLOCK_DivCmp0rrClk     = ((0x5FC - 0x300) / 4),
    kCLOCK_DivCmp1FClk      = ((0x604 - 0x300) / 4),
    kCLOCK_DivCmp1rrClk     = ((0x60C - 0x300) / 4),
    kCLOCK_DivCmp2FClk      = ((0x614 - 0x300) / 4),
    kCLOCK_DivCmp2rrClk     = ((0x61C - 0x300) / 4),
    kCLOCK_DivFlexcom0Clk   = ((0x850 - 0x300) / 4),
    kCLOCK_DivFlexcom1Clk   = ((0x854 - 0x300) / 4),
    kCLOCK_DivFlexcom2Clk   = ((0x858 - 0x300) / 4),
    kCLOCK_DivFlexcom3Clk   = ((0x85C - 0x300) / 4),
    kCLOCK_DivFlexcom4Clk   = ((0x860 - 0x300) / 4),
    kCLOCK_DivFlexcom5Clk   = ((0x864 - 0x300) / 4),
    kCLOCK_DivFlexcom6Clk   = ((0x868 - 0x300) / 4),
    kCLOCK_DivFlexcom7Clk   = ((0x86C - 0x300) / 4),
    kCLOCK_DivFlexcom8Clk   = ((0x870 - 0x300) / 4),
    kCLOCK_DivFlexcom9Clk   = ((0x874 - 0x300) / 4),
    kCLOCK_DivSai0Clk       = ((0x888 - 0x300) / 4),
    kCLOCK_DivSai1Clk       = ((0x88C - 0x300) / 4),
    kCLOCK_DivEmvsim0Clk    = ((0x898 - 0x300) / 4),
    kCLOCK_DivEmvsim1Clk    = ((0x89C - 0x300) / 4),
    kCLOCK_DivI3c1FClkStc   = ((0xB38 - 0x300) / 4),
    kCLOCK_DivI3c1FClkS     = ((0xB3C - 0x300) / 4),
    kCLOCK_DivI3c1FClk      = ((0xB40 - 0x300) / 4),
} clock_div_name_t;

/*! @brief OSC32K clock gate */
typedef enum _osc32k_clk_gate_id
{
    kCLOCK_Osc32kToVbat = 0x1,
    kCLOCK_Osc32kToVsys = 0x2,
    kCLOCK_Osc32kToWake = 0x4,
    kCLOCK_Osc32kToMain = 0x8,
    kCLOCK_Osc32kToAll  = 0xF,
} osc32k_clk_gate_id_t;

/*! @brief CLK16K clock gate */
typedef enum _clk16k_clk_gate_id
{
    kCLOCK_Clk16KToVbat = 0x1,
    kCLOCK_Clk16KToVsys = 0x2,
    kCLOCK_Clk16KToWake = 0x4,
    kCLOCK_Clk16KToMain = 0x8,
    kCLOCK_Clk16KToAll  = 0xF,
} clk16k_clk_gate_id_t;

/*! @brief system clocks enable controls */
typedef enum _clock_ctrl_enable
{
    kCLOCK_PLU_DEGLITCH_CLK_ENA =
        SYSCON_CLOCK_CTRL_PLU_DEGLITCH_CLK_ENA_MASK,
    kCLOCK_FRO1MHZ_CLK_ENA =
        SYSCON_CLOCK_CTRL_FRO1MHZ_CLK_ENA_MASK,
    kCLOCK_CLKIN_ENA =
        SYSCON_CLOCK_CTRL_CLKIN_ENA_MASK,  /*!< Enables clk_in clock for MICD, EMVSIM0/1, CAN0/1, I3C0/1, SAI0/1, SINC
                                              Filter (SINC), TSI, USBFS, SCT, uSDHC, clkout.. */
    kCLOCK_FRO_HF_ENA =
        SYSCON_CLOCK_CTRL_FRO_HF_ENA_MASK,
    kCLOCK_FRO12MHZ_ENA = SYSCON_CLOCK_CTRL_FRO12MHZ_ENA_MASK, /*!< Enables the FRO_12MHz clock for the Flash,
                                                                  LPTIMER0/1, and Frequency Measurement modules. */
    kCLOCK_FRO1MHZ_ENA =
        SYSCON_CLOCK_CTRL_FRO1MHZ_ENA_MASK,
    kCLOCK_CLKIN_ENA_FM_USBH_LPT =
        SYSCON_CLOCK_CTRL_CLKIN_ENA_FM_USBH_LPT_MASK, /*!< Enables the clk_in clock for the Frequency Measurement, USB
                                                         HS and LPTIMER0/1 modules. */
} clock_ctrl_enable_t;

/*! @brief Source of the USB HS PHY. */
typedef enum _clock_usb_phy_src
{
    kCLOCK_Usbphy480M = 0,
} clock_usb_phy_src_t;

/*!
 * @brief SCG status return codes.
 */
enum _scg_status
{
    kStatus_SCG_Busy       = MAKE_STATUS(kStatusGroup_SCG, 1),
    kStatus_SCG_InvalidSrc = MAKE_STATUS(kStatusGroup_SCG, 2)
};

/*!
 * @brief firc trim mode.
 */
typedef enum _firc_trim_mode
{
    kSCG_FircTrimNonUpdate = SCG_FIRCCSR_FIRCTREN_MASK,
    /*!< Trim enable but not enable trim value update. In this mode, the
     trim value is fixed to the initialized value which is defined by
     trimCoar and trimFine in configure structure \ref trim_config_t.*/

    kSCG_FircTrimUpdate = SCG_FIRCCSR_FIRCTREN_MASK | SCG_FIRCCSR_FIRCTRUP_MASK
    /*!< Trim enable and trim value update enable. In this mode, the trim
     value is auto update. */

} firc_trim_mode_t;

/*!
 * @brief firc trim source.
 */
typedef enum _firc_trim_src
{
    kSCG_FircTrimSrcUsb0   = 0U,
    kSCG_FircTrimSrcSysOsc = 2U,
    kSCG_FircTrimSrcRtcOsc = 3U,
} firc_trim_src_t;

/*!
 * @brief firc trim configuration.
 */
typedef struct _firc_trim_config
{
    firc_trim_mode_t trimMode;
    firc_trim_src_t trimSrc;
    uint16_t trimDiv;

    uint8_t trimCoar;
    uint8_t trimFine;
} firc_trim_config_t;

/*!
 * @brief sirc trim mode.
 */
typedef enum _sirc_trim_mode
{
    kSCG_SircTrimNonUpdate = SCG_SIRCCSR_SIRCTREN_MASK,
    /*!< Trim enable but not enable trim value update. In this mode, the
     trim value is fixed to the initialized value which is defined by
     trimCoar and trimFine in configure structure \ref trim_config_t.*/

    kSCG_SircTrimUpdate = SCG_SIRCCSR_SIRCTREN_MASK | SCG_SIRCCSR_SIRCTRUP_MASK
    /*!< Trim enable and trim value update enable. In this mode, the trim
     value is auto update. */

} sirc_trim_mode_t;

/*!
 * @brief sirc trim source.
 */
typedef enum _sirc_trim_src
{
    kSCG_SircTrimSrcSysOsc = 2U,
    kSCG_SircTrimSrcRtcOsc = 3U,
} sirc_trim_src_t;

/*!
 * @brief sirc trim configuration.
 */
typedef struct _sirc_trim_config
{
    sirc_trim_mode_t trimMode;
    sirc_trim_src_t trimSrc;
    uint16_t trimDiv;

    uint8_t cltrim;
    uint8_t ccotrim;
} sirc_trim_config_t;

/*!
 * @brief SCG system OSC monitor mode.
 */
typedef enum _scg_sosc_monitor_mode
{
    kSCG_SysOscMonitorDisable = 0U,
    kSCG_SysOscMonitorInt     = SCG_SOSCCSR_SOSCCM_MASK,
    kSCG_SysOscMonitorReset =
        SCG_SOSCCSR_SOSCCM_MASK | SCG_SOSCCSR_SOSCCMRE_MASK
} scg_sosc_monitor_mode_t;

/*!
 * @brief SCG ROSC monitor mode.
 */
typedef enum _scg_rosc_monitor_mode
{
    kSCG_RoscMonitorDisable = 0U,
    kSCG_RoscMonitorInt     = SCG_ROSCCSR_ROSCCM_MASK,
    kSCG_RoscMonitorReset =
        SCG_ROSCCSR_ROSCCM_MASK | SCG_ROSCCSR_ROSCCMRE_MASK
} scg_rosc_monitor_mode_t;

/*!
 * @brief SCG UPLL monitor mode.
 */
typedef enum _scg_upll_monitor_mode
{
    kSCG_UpllMonitorDisable = 0U,
    kSCG_UpllMonitorInt     = SCG_UPLLCSR_UPLLCM_MASK,
    kSCG_UpllMonitorReset =
        SCG_UPLLCSR_UPLLCM_MASK | SCG_UPLLCSR_UPLLCMRE_MASK
} scg_upll_monitor_mode_t;

/*!
 * @brief SCG PLL0 monitor mode.
 */
typedef enum _scg_pll0_monitor_mode
{
    kSCG_Pll0MonitorDisable = 0U,
    kSCG_Pll0MonitorInt     = SCG_APLLCSR_APLLCM_MASK,
    kSCG_Pll0MonitorReset =
        SCG_APLLCSR_APLLCM_MASK | SCG_APLLCSR_APLLCMRE_MASK
} scg_pll0_monitor_mode_t;

/*!
 * @brief SCG PLL1 monitor mode.
 */
typedef enum _scg_pll1_monitor_mode
{
    kSCG_Pll1MonitorDisable = 0U,
    kSCG_Pll1MonitorInt     = SCG_SPLLCSR_SPLLCM_MASK,
    kSCG_Pll1MonitorReset =
        SCG_SPLLCSR_SPLLCM_MASK | SCG_SPLLCSR_SPLLCMRE_MASK
} scg_pll1_monitor_mode_t;

/*!
 * @brief The enumerator of internal capacitance of OSC's XTAL pin.
 */
typedef enum _vbat_osc_xtal_cap
{
    kVBAT_OscXtal0pFCap  = 0x0U,
    kVBAT_OscXtal2pFCap  = 0x1U,
    kVBAT_OscXtal4pFCap  = 0x2U,
    kVBAT_OscXtal6pFCap  = 0x3U,
    kVBAT_OscXtal8pFCap  = 0x4U,
    kVBAT_OscXtal10pFCap = 0x5U,
    kVBAT_OscXtal12pFCap = 0x6U,
    kVBAT_OscXtal14pFCap = 0x7U,
    kVBAT_OscXtal16pFCap = 0x8U,
    kVBAT_OscXtal18pFCap = 0x9U,
    kVBAT_OscXtal20pFCap = 0xAU,
    kVBAT_OscXtal22pFCap = 0xBU,
    kVBAT_OscXtal24pFCap = 0xCU,
    kVBAT_OscXtal26pFCap = 0xDU,
    kVBAT_OscXtal28pFCap = 0xEU,
    kVBAT_OscXtal30pFCap = 0xFU,
} vbat_osc_xtal_cap_t;

/*!
 * @brief The enumerator of internal capacitance of OSC's EXTAL pin.
 */
typedef enum _vbat_osc_extal_cap
{
    kVBAT_OscExtal0pFCap  = 0x0U,
    kVBAT_OscExtal2pFCap  = 0x1U,
    kVBAT_OscExtal4pFCap  = 0x2U,
    kVBAT_OscExtal6pFCap  = 0x3U,
    kVBAT_OscExtal8pFCap  = 0x4U,
    kVBAT_OscExtal10pFCap = 0x5U,
    kVBAT_OscExtal12pFCap = 0x6U,
    kVBAT_OscExtal14pFCap = 0x7U,
    kVBAT_OscExtal16pFCap = 0x8U,
    kVBAT_OscExtal18pFCap = 0x9U,
    kVBAT_OscExtal20pFCap = 0xAU,
    kVBAT_OscExtal22pFCap = 0xBU,
    kVBAT_OscExtal24pFCap = 0xCU,
    kVBAT_OscExtal26pFCap = 0xDU,
    kVBAT_OscExtal28pFCap = 0xEU,
    kVBAT_OscExtal30pFCap = 0xFU,
} vbat_osc_extal_cap_t;

/*!
 * @brief The enumerator of osc amplifier gain fine adjustment.
 * Changes the oscillator amplitude by modifying the automatic gain control (AGC).
 */
typedef enum _vbat_osc_fine_adjustment_value
{
    kVBAT_OscCoarseAdjustment05 = 0U,
    kVBAT_OscCoarseAdjustment10 = 1U,
    kVBAT_OscCoarseAdjustment18 = 2U,
    kVBAT_OscCoarseAdjustment33 = 3U,
} vbat_osc_coarse_adjustment_value_t;

/*!
 * @brief The structure of oscillator configuration.
 */
typedef struct _vbat_osc_config
{
    bool enableInternalCapBank;

    bool enableCrystalOscillatorBypass;

    vbat_osc_xtal_cap_t xtalCap;        /*!< The internal capacitance for the OSC XTAL pin from the capacitor bank,
                                                  only useful when the internal capacitance bank is enabled. */
    vbat_osc_extal_cap_t extalCap; /*!< The internal capacitance for the OSC EXTAL pin from the capacitor bank, only
                                      useful when the internal capacitance bank is enabled. */
    vbat_osc_coarse_adjustment_value_t
        coarseAdjustment;
} vbat_osc_config_t;

/*!
 * @brief The active run mode (voltage level).
 */
typedef enum _run_mode
{
    kMD_Mode,
    kSD_Mode,
    kOD_Mode,
} run_mode_t;

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/**
 * @brief Enable the clock for specific IP.
 * @param clk : Clock to be enabled.
 * @return  Nothing
 */
static inline void CLOCK_EnableClock(clock_ip_name_t clk)
{
    uint32_t index = CLK_GATE_ABSTRACT_REG_OFFSET(clk);
    uint32_t bit   = CLK_GATE_ABSTRACT_BITS_SHIFT(clk);

    if (index == (uint32_t)REG_PWM0SUBCTL)
    {
        SYSCON->PWM0SUBCTL |= (1UL << bit);
        SYSCON->AHBCLKCTRLSET[3] = 0x40U;
    }
    else if (index == (uint32_t)REG_PWM1SUBCTL)
    {
        SYSCON->PWM1SUBCTL |= (1UL << bit);
        SYSCON->AHBCLKCTRLSET[3] = 0x80U;
    }
    else
    {
        SYSCON->AHBCLKCTRLSET[index] = (1UL << bit);
    }
}

/**
 * @brief Disable the clock for specific IP.
 * @param clk : Clock to be Disabled.
 * @return  Nothing
 */
static inline void CLOCK_DisableClock(clock_ip_name_t clk)
{
    uint32_t index = CLK_GATE_ABSTRACT_REG_OFFSET(clk);
    uint32_t bit   = CLK_GATE_ABSTRACT_BITS_SHIFT(clk);

    if (index == (uint32_t)REG_PWM0SUBCTL)
    {
        SYSCON->PWM0SUBCTL &= ~(1UL << bit);
        if (0U == (SYSCON->PWM0SUBCTL & 0xFU))
        {
            SYSCON->AHBCLKCTRLCLR[3] = 0x20U;
        }
    }
    else if (index == (uint32_t)REG_PWM1SUBCTL)
    {
        SYSCON->PWM1SUBCTL &= ~(1UL << bit);
        if (0U == (SYSCON->PWM1SUBCTL & 0xFU))
        {
            SYSCON->AHBCLKCTRLCLR[3] = 0x40U;
        }
    }
    else
    {
        SYSCON->AHBCLKCTRLCLR[index] = (1UL << bit);
    }
}

/**
 * @brief   Initialize the Core clock to given frequency (48 or 144 MHz).
 * This function turns on FIRC and select the given frequency as the source of fro_hf
 * @param   iFreq   : Desired frequency (must be one of CLK_FRO_44MHZ or CLK_FRO_144MHZ)
 * @return  returns success or fail status.
 */
status_t CLOCK_SetupFROHFClocking(uint32_t iFreq);

/**
 * @brief   Initialize the external osc clock to given frequency.
 * @param   iFreq   : Desired frequency (must be equal to exact rate in Hz)
 * @return  returns success or fail status.
 */
status_t CLOCK_SetupExtClocking(uint32_t iFreq);

/**
 * @brief   Initialize the external reference clock to given frequency.
 * @param   iFreq   : Desired frequency (must be equal to exact rate in Hz)
 * @return  returns success or fail status.
 */
status_t CLOCK_SetupExtRefClocking(uint32_t iFreq);

/**
 * @brief   Initialize the XTAL32/EXTAL32 input clock to given frequency.
 * @param   id   : OSC 32 kHz output clock to specified modules, it should use osc32k_clk_gate_id_t value
 * @return  returns success or fail status.
 */
status_t CLOCK_SetupOsc32KClocking(uint32_t id);

/**
 * @brief   Initialize the FRO16K input clock to given frequency.
 * @param   id   : FRO 16 kHz output clock to specified modules, it should use clk16k_clk_gate_id_t value
 * @return  returns success or fail status.
 */
status_t CLOCK_SetupClk16KClocking(uint32_t id);

/**
 * @brief   Setup FROHF trim.
 * @param   config   : FROHF trim value
 * @return  returns success or fail status.
 */
status_t CLOCK_FROHFTrimConfig(firc_trim_config_t config);

/**
 * @brief   Setup FRO 12M trim.
 * @param   config   : FRO 12M trim value
 * @return  returns success or fail status.
 */
status_t CLOCK_FRO12MTrimConfig(sirc_trim_config_t config);

/*!
 * @brief Sets the system OSC monitor mode.
 *
 * This function sets the system OSC monitor mode. The mode can be disabled,
 * it can generate an interrupt when the error is disabled, or reset when the error is detected.
 *
 * @param mode Monitor mode to set.
 */
void CLOCK_SetSysOscMonitorMode(scg_sosc_monitor_mode_t mode);

/*!
 * @brief Sets the ROSC monitor mode.
 *
 * This function sets the ROSC monitor mode. The mode can be disabled,
 * it can generate an interrupt when the error is disabled, or reset when the error is detected.
 *
 * @param mode Monitor mode to set.
 */
void CLOCK_SetRoscMonitorMode(scg_rosc_monitor_mode_t mode);

/*!
 * @brief Sets the UPLL monitor mode.
 *
 * This function sets the UPLL monitor mode. The mode can be disabled,
 * it can generate an interrupt when the error is disabled, or reset when the error is detected.
 *
 * @param mode Monitor mode to set.
 */
void CLOCK_SetUpllMonitorMode(scg_upll_monitor_mode_t mode);

/*!
 * @brief Sets the PLL0 monitor mode.
 *
 * This function sets the PLL0 monitor mode. The mode can be disabled,
 * it can generate an interrupt when the error is disabled, or reset when the error is detected.
 *
 * @param mode Monitor mode to set.
 */
void CLOCK_SetPll0MonitorMode(scg_pll0_monitor_mode_t mode);

/*!
 * @brief Sets the PLL1 monitor mode.
 *
 * This function sets the PLL1 monitor mode. The mode can be disabled,
 * it can generate an interrupt when the error is disabled, or reset when the error is detected.
 *
 * @param mode Monitor mode to set.
 */
void CLOCK_SetPll1MonitorMode(scg_pll1_monitor_mode_t mode);

/*!
 * @brief Config 32k Crystal Oscillator.
 *
 * @param base VBAT peripheral base address.
 * @param config The pointer to the structure \ref vbat_osc_config_t.
 */
void VBAT_SetOscConfig(VBAT_Type *base, const vbat_osc_config_t *config);

/*!
 * @brief	Set the additional number of wait-states added to account for the ratio of system clock period to flash access
 * time during full speed power mode.
 * @param	system_freq_hz	: Input frequency
 * @param	mode	        : Active run mode (voltage level).
 * @return	success or fail status
 */
status_t CLOCK_SetFLASHAccessCyclesForFreq(uint32_t system_freq_hz, run_mode_t mode);

/**
 * @brief   Configure the clock selection muxes.
 * @param   connection  : Clock to be configured.
 * @return  Nothing
 */
void CLOCK_AttachClk(clock_attach_id_t connection);

/**
 * @brief   Get the actual clock attach id.
 * This fuction uses the offset in input attach id, then it reads the actual source value in
 * the register and combine the offset to obtain an actual attach id.
 * @param   attachId  : Clock attach id to get.
 * @return  Clock source value.
 */
clock_attach_id_t CLOCK_GetClockAttachId(clock_attach_id_t attachId);

/**
 * @brief   Setup peripheral clock dividers.
 * @param   div_name    : Clock divider name
 * @param   divided_by_value: Value to be divided
 * @return  Nothing
 */
void CLOCK_SetClkDiv(clock_div_name_t div_name, uint32_t divided_by_value);

/**
 * @brief   Get peripheral clock dividers.
 * @param   div_name    : Clock divider name
 * @return  peripheral clock dividers
 */
uint32_t CLOCK_GetClkDiv(clock_div_name_t div_name);

/**
 * @brief   Halt peripheral clock dividers.
 * @param   div_name    : Clock divider name
 * @return  Nothing
 */
void CLOCK_HaltClkDiv(clock_div_name_t div_name);

/**
 * @brief   system clocks enable controls.
 * @param   mask  : system clocks enable value, it should use clock_ctrl_enable_t value
 * @return  Nothing
 */
void CLOCK_SetupClockCtrl(uint32_t mask);

/*! @brief  Return Frequency of selected clock
 *  @return Frequency of selected clock
 */
uint32_t CLOCK_GetFreq(clock_name_t clockName);

/*! @brief  Return Frequency of main
 *  @return Frequency of the main
 */
uint32_t CLOCK_GetMainClkFreq(void);

/*! @brief  Return Frequency of core
 *  @return Frequency of the core
 */
uint32_t CLOCK_GetCoreSysClkFreq(void);

/*! @brief  Return Frequency of CTimer functional Clock
 *  @return Frequency of CTimer functional Clock
 */
uint32_t CLOCK_GetCTimerClkFreq(uint32_t id);

/*! @brief  Return Frequency of Adc Clock
 *  @return Frequency of Adc.
 */
uint32_t CLOCK_GetAdcClkFreq(uint32_t id);

/*! @brief  Return Frequency of Usb Clock
 *  @return Frequency of Adc.
 */
uint32_t CLOCK_GetUsb0ClkFreq(void);

/*! @brief  Return Frequency of LPFlexComm Clock
 *  @return Frequency of LPFlexComm Clock
 */
uint32_t CLOCK_GetLPFlexCommClkFreq(uint32_t id);

/*! @brief  Return Frequency of SCTimer Clock
 *  @return Frequency of SCTimer Clock.
 */
uint32_t CLOCK_GetSctClkFreq(void);

/*! @brief  Return Frequency of TSI Clock
 *  @return Frequency of TSI Clock.
 */
uint32_t CLOCK_GetTsiClkFreq(void);

/*! @brief  Return Frequency of SINC FILTER Clock
 *  @return Frequency of SINC FILTER Clock.
 */
uint32_t CLOCK_GetSincFilterClkFreq(void);

/*! @brief  Return Frequency of DAC Clock
 *  @return Frequency of DAC Clock
 */
uint32_t CLOCK_GetDacClkFreq(uint32_t id);

/*! @brief  Return Frequency of FlexSPI
 *  @return Frequency of FlexSPI Clock
 */
uint32_t CLOCK_GetFlexspiClkFreq(void);

/*! @brief  Return Frequency of PLL
 *  @return Frequency of PLL
 */
uint32_t CLOCK_GetPll0OutFreq(void);
/*! @brief  Return Frequency of USB PLL
 *  @return Frequency of PLL
 */
uint32_t CLOCK_GetPll1OutFreq(void);

/*! @brief  Return Frequency of PLLCLKDIV
 *  @return Frequency of PLLCLKDIV Clock
 */
uint32_t CLOCK_GetPllClkDivFreq(void);

/*! @brief  Return Frequency of I3C function Clock
 *  @return Frequency of I3C function Clock
 */
uint32_t CLOCK_GetI3cClkFreq(uint32_t id);

/*! @brief  Return Frequency of I3C function slow TC Clock
 *  @return Frequency of I3C function slow TC Clock
 */
uint32_t CLOCK_GetI3cSTCClkFreq(uint32_t id);

/*! @brief  Return Frequency of I3C function slow Clock
 *  @return Frequency of I3C function slow Clock
 */
uint32_t CLOCK_GetI3cSClkFreq(uint32_t id);

/*! @brief  Return Frequency of MICFIL Clock
 *  @return Frequency of MICFIL.
 */
uint32_t CLOCK_GetMicfilClkFreq(void);

/*! @brief  Return Frequency of uSDHC
 *  @return Frequency of uSDHC Clock
 */
uint32_t CLOCK_GetUsdhcClkFreq(void);

/*! @brief  Return Frequency of FLEXIO
 *  @return Frequency of FLEXIO Clock
 */
uint32_t CLOCK_GetFlexioClkFreq(void);

/*! @brief  Return Frequency of FLEXCAN
 *  @return Frequency of FLEXCAN Clock
 */
uint32_t CLOCK_GetFlexcanClkFreq(uint32_t id);

/*! @brief  Return Frequency of Ethernet RMII Clock
 *  @return Frequency of Ethernet RMII.
 */
uint32_t CLOCK_GetEnetRmiiClkFreq(void);

/*! @brief  Return Frequency of Ethernet PTP REF Clock
 *  @return Frequency of Ethernet PTP REF.
 */
uint32_t CLOCK_GetEnetPtpRefClkFreq(void);

/**
 * @brief   Initialize the ENET TX CLK to given frequency.
 * @param   iFreq   : Desired frequency
 * @return  Nothing
 */
void CLOCK_SetupEnetTxClk(uint32_t iFreq);

/**
 * @brief   Return Frequency of ENET TX CLK
 * @return  Frequency of ENET TX CLK
 */
uint32_t CLOCK_GetEnetTxClkFreq(void);

/*! @brief  Return Frequency of EWM0 Clock
 *  @return Frequency of EWM0.
 */
uint32_t CLOCK_GetEwm0ClkFreq(void);

/*! @brief  Return Frequency of Watchdog
 *  @return Frequency of Watchdog
 */
uint32_t CLOCK_GetWdtClkFreq(uint32_t id);

/*! @brief  Return Frequency of OSTIMER
 *  @return Frequency of OSTIMER Clock
 */
uint32_t CLOCK_GetOstimerClkFreq(void);

/*! @brief  Return Frequency of CMP Function Clock
 *  @return Frequency of CMP Function.
 */
uint32_t CLOCK_GetCmpFClkFreq(uint32_t id);

/*! @brief  Return Frequency of CMP Round Robin Clock
 *  @return Frequency of CMP Round Robin.
 */
uint32_t CLOCK_GetCmpRRClkFreq(uint32_t id);

/*! @brief  Return Frequency of SAI Clock
 *  @return Frequency of SAI Clock.
 */
uint32_t CLOCK_GetSaiClkFreq(uint32_t id);

/**
 * @brief   Initialize the SAI MCLK to given frequency.
 * @param   iFreq   : Desired frequency
 * @return  Nothing
 */
void CLOCK_SetupSaiMclk(uint32_t id, uint32_t iFreq);

/**
 * @brief   Initialize the SAI TX BCLK to given frequency.
 * @param   iFreq   : Desired frequency
 * @return  Nothing
 */
void CLOCK_SetupSaiTxBclk(uint32_t id, uint32_t iFreq);

/**
 * @brief   Initialize the SAI RX BCLK to given frequency.
 * @param   iFreq   : Desired frequency
 * @return  Nothing
 */
void CLOCK_SetupSaiRxBclk(uint32_t id, uint32_t iFreq);

/**
 * @brief   Return Frequency of SAI MCLK
 * @return  Frequency of SAI MCLK
 */
uint32_t CLOCK_GetSaiMclkFreq(uint32_t id);

/**
 * @brief   Return Frequency of SAI TX BCLK
 * @return  Frequency of SAI TX BCLK
 */
uint32_t CLOCK_GetSaiTxBclkFreq(uint32_t id);

/**
 * @brief   Return Frequency of SAI RX BCLK
 * @return  Frequency of SAI RX BCLK
 */
uint32_t CLOCK_GetSaiRxBclkFreq(uint32_t id);

/*! @brief  Return Frequency of EMVSIM Clock
 *  @return Frequency of EMVSIM Clock.
 */
uint32_t CLOCK_GetEmvsimClkFreq(uint32_t id);

/*! @brief    Return  PLL0 input clock rate
 *  @return    PLL0 input clock rate
 */
uint32_t CLOCK_GetPLL0InClockRate(void);

/*! @brief    Return  PLL1 input clock rate
 *  @return    PLL1 input clock rate
 */
uint32_t CLOCK_GetPLL1InClockRate(void);

/*! @brief Gets the external UPLL frequency.
 *  @return The frequency of the external UPLL.
 */
uint32_t CLOCK_GetExtUpllFreq(void);

/*! @brief Sets the external UPLL frequency.
 *  @param The frequency of external UPLL.
 */
void CLOCK_SetExtUpllFreq(uint32_t freq);

/*! @brief    Check if PLL is locked or not
 *  @return   true if the PLL is locked, false if not locked
 */
__STATIC_INLINE bool CLOCK_IsPLL0Locked(void)
{
    return (bool)((SCG0->APLLCSR & SCG_APLLCSR_APLL_LOCK_MASK) != 0UL);
}

/*! @brief	Check if PLL1 is locked or not
 *  @return	true if the PLL1 is locked, false if not locked
 */
__STATIC_INLINE bool CLOCK_IsPLL1Locked(void)
{
    return (bool)((SCG0->SPLLCSR & SCG_SPLLCSR_SPLL_LOCK_MASK) != 0UL);
}

/*! @brief PLL configuration structure flags for 'flags' field
 * These flags control how the PLL configuration function sets up the PLL setup structure.<br>
 *
 * When the PLL_CONFIGFLAG_FORCENOFRACT flag is selected, the PLL hardware for the
 * automatic bandwidth selection, Spread Spectrum (SS) support, and fractional M-divider
 * are not used.<br>
 */
#define PLL_CONFIGFLAG_FORCENOFRACT (1U << 2U)
/*!< Force non-fractional output mode, PLL output will not use the fractional, automatic bandwidth, or SS hardware */

/*!
 * @brief PLL clock source.
 */
typedef enum _pll_clk_src
{
    kPll_ClkSrcSysOsc = (0 << 25),
    kPll_ClkSrcFirc   = (1 << 25),
    kPll_ClkSrcRosc   = (2 << 25),
} pll_clk_src_t;

/*! @brief PLL Spread Spectrum (SS) Programmable modulation frequency
 * See (MF) field in the PLL0SSCG1 register in the UM.
 */
typedef enum _ss_progmodfm
{
    kSS_MF_512 = (0 << 2),
    kSS_MF_384 = (1 << 2),
    kSS_MF_256 = (2 << 2),
    kSS_MF_128 = (3 << 2),
    kSS_MF_64  = (4 << 2),
    kSS_MF_32  = (5 << 2),
    kSS_MF_24  = (6 << 2),
    kSS_MF_16  = (7 << 2)
} ss_progmodfm_t;

/*! @brief PLL Spread Spectrum (SS) Programmable frequency modulation depth
 * See (MR) field in the PLL0SSCG1 register in the UM.
 */
typedef enum _ss_progmoddp
{
    kSS_MR_K0   = (0 << 5),
    kSS_MR_K1   = (1 << 5),
    kSS_MR_K1_5 = (2 << 5),
    kSS_MR_K2   = (3 << 5),
    kSS_MR_K3   = (4 << 5),
    kSS_MR_K4   = (5 << 5),
    kSS_MR_K6   = (6 << 5),
    kSS_MR_K8   = (7 << 5)
} ss_progmoddp_t;

/*! @brief PLL Spread Spectrum (SS) Modulation waveform control
 * See (MC) field in the PLL0SSCG1 register in the UM.<br>
 * Compensation for low pass filtering of the PLL to get a triangular
 * modulation at the output of the PLL, giving a flat frequency spectrum.
 */
typedef enum _ss_modwvctrl
{
    kSS_MC_NOC  = (0 << 8),
    kSS_MC_RECC = (2 << 8),
    kSS_MC_MAXC = (3 << 8),
} ss_modwvctrl_t;

/*! @brief PLL configuration structure
 *
 * This structure can be used to configure the settings for a PLL
 * setup structure. Fill in the desired configuration for the PLL
 * and call the PLL setup function to fill in a PLL setup structure.
 */
typedef struct _pll_config
{
    uint32_t desiredRate;
    uint32_t inputSource;
    uint32_t flags;
    ss_progmodfm_t ss_mf; /*!< SS Programmable modulation frequency, only applicable when not using
                             PLL_CONFIGFLAG_FORCENOFRACT flag */
    ss_progmoddp_t ss_mr; /*!< SS Programmable frequency modulation depth, only applicable when not using
                             PLL_CONFIGFLAG_FORCENOFRACT flag */
    ss_modwvctrl_t
        ss_mc;     /*!< SS Modulation waveform control, only applicable when not using PLL_CONFIGFLAG_FORCENOFRACT flag
                    */
    bool mfDither; /*!< false for fixed modulation frequency or true for dithering, only applicable when not using
                      PLL_CONFIGFLAG_FORCENOFRACT flag */

} pll_config_t;

/*! @brief PLL0 setup structure
 * This structure can be used to pre-build a PLL setup configuration
 * at run-time and quickly set the PLL to the configuration. It can be
 * populated with the PLL setup function. If powering up or waiting
 * for PLL lock, the PLL input clock source should be configured prior
 * to PLL setup.
 */
typedef struct _pll_setup
{
    uint32_t pllctrl;
    uint32_t pllndiv;
    uint32_t pllpdiv;
    uint32_t pllmdiv;
    uint32_t pllsscg[2];
    uint32_t pllRate;
} pll_setup_t;

/*! @brief PLL status definitions
 */
typedef enum _pll_error
{
    kStatus_PLL_Success         = MAKE_STATUS(kStatusGroup_Generic, 0),
    kStatus_PLL_OutputTooLow    = MAKE_STATUS(kStatusGroup_Generic, 1),
    kStatus_PLL_OutputTooHigh   = MAKE_STATUS(kStatusGroup_Generic, 2),
    kStatus_PLL_OutputError     = MAKE_STATUS(kStatusGroup_Generic, 3),
    kStatus_PLL_InputTooLow     = MAKE_STATUS(kStatusGroup_Generic, 4),
    kStatus_PLL_InputTooHigh    = MAKE_STATUS(kStatusGroup_Generic, 5),
    kStatus_PLL_OutsideIntLimit = MAKE_STATUS(kStatusGroup_Generic, 6),
    kStatus_PLL_CCOTooLow       = MAKE_STATUS(kStatusGroup_Generic, 7),
    kStatus_PLL_CCOTooHigh      = MAKE_STATUS(kStatusGroup_Generic, 8)
} pll_error_t;

/*! @brief    Return PLL0 output clock rate from setup structure
 *  @param    pSetup : Pointer to a PLL setup structure
 *  @return   System PLL output clock rate the setup structure will generate
 */
uint32_t CLOCK_GetPLLOutFromSetup(pll_setup_t *pSetup);

/*! @brief    Set PLL output based on the passed PLL setup data
 *  @param    pControl    : Pointer to populated PLL control structure to generate setup with
 *  @param    pSetup      : Pointer to PLL setup structure to be filled
 *  @return   PLL_ERROR_SUCCESS on success, or PLL setup error code
 *  @note Actual frequency for setup may vary from the desired frequency based on the
 *  accuracy of input clocks, rounding, non-fractional PLL mode, etc.
 */
pll_error_t CLOCK_SetupPLLData(pll_config_t *pControl, pll_setup_t *pSetup);

/**
 * @brief Set PLL output from PLL setup structure (precise frequency)
 * @param pSetup  : Pointer to populated PLL setup structure
 * @return    kStatus_PLL_Success on success, or PLL setup error code
 * @note  This function will power off the PLL, setup the PLL with the
 * new setup data, and then optionally powerup the PLL, wait for PLL lock,
 * and adjust system voltages to the new PLL rate. The function will not
 * alter any source clocks (ie, main systen clock) that may use the PLL,
 * so these should be setup prior to and after exiting the function.
 */
pll_error_t CLOCK_SetPLL0Freq(const pll_setup_t *pSetup);

/**
 * @brief Set PLL output from PLL setup structure (precise frequency)
 * @param pSetup  : Pointer to populated PLL setup structure
 * @return    kStatus_PLL_Success on success, or PLL setup error code
 * @note  This function will power off the PLL, setup the PLL with the
 * new setup data, and then optionally powerup the PLL, wait for PLL lock,
 * and adjust system voltages to the new PLL rate. The function will not
 * alter any source clocks (ie, main systen clock) that may use the PLL,
 * so these should be setup prior to and after exiting the function.
 */
pll_error_t CLOCK_SetPLL1Freq(const pll_setup_t *pSetup);

/*! @brief Enable the OSTIMER 32k clock.
 *  @return  Nothing
 */
void CLOCK_EnableOstimer32kClock(void);

/*! brief Enable USB FS clock.
 * Enable USB Full Speed clock.
 */
bool CLOCK_EnableUsbfsClock(void);

/*! brief Enable USB HS PHY PLL clock.
 *
 * This function enables the internal 480MHz USB PHY PLL clock.
 *
 * param src  USB HS PHY PLL clock source.
 * param freq The frequency specified by src.
 * retval true The clock is set successfully.
 * retval false The clock source is invalid to get proper USB HS clock.
 */
bool CLOCK_EnableUsbhsPhyPllClock(clock_usb_phy_src_t src, uint32_t freq);

/*! brief Disable USB HS PHY PLL clock.
 *
 * This function disables USB HS PHY PLL clock.
 */
void CLOCK_DisableUsbhsPhyPllClock(void);

/*! brief Enable USB HS clock.
 * retval true The clock is set successfully.
 * retval false The clock source is invalid to get proper USB HS clock.
 */
bool CLOCK_EnableUsbhsClock(void);

/**
 * @brief   FIRC Auto Trim With SOF.
 * @return  returns success or fail status.
 */
status_t CLOCK_FIRCAutoTrimWithSOF(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

/*! @} */

#endif /* _FSL_CLOCK_H_ */
