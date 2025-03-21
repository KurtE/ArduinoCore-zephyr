/*
 * Copyright 2021, 2023-2024 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _FSL_RESET_H_
#define _FSL_RESET_H_

#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include "fsl_device_registers.h"

/*!
 * @addtogroup reset
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @name Driver version */
/*@{*/
/*! @brief reset driver version 2.1.1. */
#define FSL_RESET_DRIVER_VERSION (MAKE_VERSION(2, 1, 1))
/*@}*/

/*!
 * @brief Reset control registers index
 */
#define RST_CTL0_PSCCTL0 0
#define RST_CTL0_PSCCTL1 1
#define RST_CTL0_PSCCTL2 2
#define RST_CTL1_PSCCTL0 3
#define RST_CTL1_PSCCTL1 4
#define RST_CTL1_PSCCTL2 5
/*!
 * @brief Enumeration for peripheral reset control bits
 *
 * Defines the enumeration for peripheral reset control bits in RSTCLTx registers
 */
typedef enum _RSTCTL_RSTn
{
    kPOWERQUAD_RST_SHIFT_RSTn = (RST_CTL0_PSCCTL0 << 8) | 8U,
    kPKC_RST_SHIFT_RSTn       = (RST_CTL0_PSCCTL0 << 8) | 9U,
    kELS_RST_SHIFT_RSTn       = (RST_CTL0_PSCCTL0 << 8) | 10U,
    kPUF_RST_SHIFT_RSTn       = (RST_CTL0_PSCCTL0 << 8) | 11U,
    kFLEXSPI_RST_SHIFT_RSTn   = (RST_CTL0_PSCCTL0 << 8) | 16U,
    kHPU_RST_SHIFT_RSTn       = (RST_CTL0_PSCCTL0 << 8) | 20U,
    kUSB_RST_SHIFT_RSTn       = (RST_CTL0_PSCCTL0 << 8) | 22U,
    kSCT_RST_SHIFT_RSTn       = (RST_CTL0_PSCCTL0 << 8) | 24U,
    kAON_MEM_RST_SHIFT_RSTn   = (RST_CTL0_PSCCTL0 << 8) | 25U,
    kGDMA_RST_SHIFT_RSTn      = (RST_CTL0_PSCCTL0 << 8) | 28U,
    kDMA0_RST_SHIFT_RSTn      = (RST_CTL0_PSCCTL0 << 8) | 29U,
    kDMA1_RST_SHIFT_RSTn      = (RST_CTL0_PSCCTL0 << 8) | 30U,
    kSDIO_RST_SHIFT_RSTn      = (RST_CTL0_PSCCTL0 << 8) | 31U,

    kELS_APB_RST_SHIFT_RSTn      = (RST_CTL0_PSCCTL1 << 8) | 0U,
    kELS_GDET_REF_RST_SHIFT_RSTn = (RST_CTL0_PSCCTL1 << 8) | 1U,
    kSDIO_SLV_SHIFT_RSTn         = (RST_CTL0_PSCCTL1 << 8) | 2U,
    kGAU_RST_SHIFT_RSTn          = (RST_CTL0_PSCCTL1 << 8) | 16U,
    kOTP_RST_SHIFT_RSTn          = (RST_CTL0_PSCCTL1 << 8) | 17U,
    kSECURE_GPIO_RST_SHIFT_RSTn  = (RST_CTL0_PSCCTL1 << 8) | 24U,
    kENET_IPG_RST_SHIFT_RSTn     = (RST_CTL0_PSCCTL1 << 8) | 25U,
    kENET_IPG_S_RST_SHIFT_RSTn   = (RST_CTL0_PSCCTL1 << 8) | 26U,
    kTRNG_RST_SHIFT_RSTn         = (RST_CTL0_PSCCTL1 << 8) | 27U,

    kUTICK_RST_SHIFT_RSTn   = (RST_CTL0_PSCCTL2 << 8) | 0U,
    kWWDT_RST_SHIFT_RSTn    = (RST_CTL0_PSCCTL2 << 8) | 1U,
    kUSIM_RST_SHIFT_RSTn    = (RST_CTL0_PSCCTL2 << 8) | 2U,
    kFREEMRT_RST_SHIFT_RSTn = (RST_CTL0_PSCCTL2 << 8) | 26U,
    kLCDIC_RST_SHIFT_RSTn   = (RST_CTL0_PSCCTL2 << 8) | 27U,

    kFC0_RST_SHIFT_RSTn           = (RST_CTL1_PSCCTL0 << 8) | 8U,
    kFC1_RST_SHIFT_RSTn           = (RST_CTL1_PSCCTL0 << 8) | 9U,
    kFC2_RST_SHIFT_RSTn           = (RST_CTL1_PSCCTL0 << 8) | 10U,
    kFC3_RST_SHIFT_RSTn           = (RST_CTL1_PSCCTL0 << 8) | 11U,
    kFC14_RST_SHIFT_RSTn          = (RST_CTL1_PSCCTL0 << 8) | 22U,
    kDMIC_RST_SHIFT_RSTn          = (RST_CTL1_PSCCTL0 << 8) | 24U,
    kOSEVENT_TIMER_RST_SHIFT_RSTn = (RST_CTL1_PSCCTL0 << 8) | 27U,

    kHSGPIO0_RST_SHIFT_RSTn = (RST_CTL1_PSCCTL1 << 8) | 0U,
    kHSGPIO1_RST_SHIFT_RSTn = (RST_CTL1_PSCCTL1 << 8) | 1U,
    kCRC_RST_SHIFT_RSTn     = (RST_CTL1_PSCCTL1 << 8) | 16U,
    kFREQME_RST_SHIFT_RSTn  = (RST_CTL1_PSCCTL1 << 8) | 31U,

    kCT32B0_RST_SHIFT_RSTn   = (RST_CTL1_PSCCTL2 << 8) | 0U,
    kCT32B1_RST_SHIFT_RSTn   = (RST_CTL1_PSCCTL2 << 8) | 1U,
    kCT32B2_RST_SHIFT_RSTn   = (RST_CTL1_PSCCTL2 << 8) | 2U,
    kCT32B3_RST_SHIFT_RSTn   = (RST_CTL1_PSCCTL2 << 8) | 3U,
    kCT32B4_RST_SHIFT_RSTn   = (RST_CTL1_PSCCTL2 << 8) | 4U,
    kMRT_RST_SHIFT_RSTn      = (RST_CTL1_PSCCTL2 << 8) | 8U,
    kPINT_RST_SHIFT_RSTn     = (RST_CTL1_PSCCTL2 << 8) | 30U,
    kINPUTMUX_RST_SHIFT_RSTn = (RST_CTL1_PSCCTL2 << 8) | 31U,
} RSTCTL_RSTn_t;

/** Array initializers with peripheral reset bits **/
#define CRC_RSTS            \
    {                       \
        kCRC_RST_SHIFT_RSTn \
    }
#define DMA_RSTS_N                                 \
    {                                              \
        kDMA0_RST_SHIFT_RSTn, kDMA1_RST_SHIFT_RSTn \
    }
#define DMIC_RSTS            \
    {                        \
        kDMIC_RST_SHIFT_RSTn \
    }
#define FLEXCOMM_RSTS                                                                                            \
    {                                                                                                            \
        kFC0_RST_SHIFT_RSTn, kFC1_RST_SHIFT_RSTn, kFC2_RST_SHIFT_RSTn, kFC3_RST_SHIFT_RSTn, kFC14_RST_SHIFT_RSTn \
    }
#define GPIO_RSTS_N                                      \
    {                                                    \
        kHSGPIO0_RST_SHIFT_RSTn, kHSGPIO1_RST_SHIFT_RSTn \
    }
#define MRT_RSTS                                     \
    {                                                \
        kMRT_RST_SHIFT_RSTn, kFREEMRT_RST_SHIFT_RSTn \
    }
#define PINT_RSTS            \
    {                        \
        kPINT_RST_SHIFT_RSTn \
    }
#define SCT_RSTS            \
    {                       \
        kSCT_RST_SHIFT_RSTn \
    }
#define CTIMER_RSTS                                                                                     \
    {                                                                                                   \
        kCT32B0_RST_SHIFT_RSTn, kCT32B1_RST_SHIFT_RSTn, kCT32B2_RST_SHIFT_RSTn, kCT32B3_RST_SHIFT_RSTn, \
            kCT32B4_RST_SHIFT_RSTn                                                                      \
    }
#define USB_RSTS            \
    {                       \
        kUSB_RST_SHIFT_RSTn \
    }
#define UTICK_RSTS            \
    {                         \
        kUTICK_RST_SHIFT_RSTn \
    }
#define WWDT_RSTS            \
    {                        \
        kWWDT_RST_SHIFT_RSTn \
    }
#define OSTIMER_RSTS                  \
    {                                 \
        kOSEVENT_TIMER_RST_SHIFT_RSTn \
    }
#define POWERQUAD_RSTS            \
    {                             \
        kPOWERQUAD_RST_SHIFT_RSTn \
    }
#define PUF_RSTS            \
    {                       \
        kPUF_RST_SHIFT_RSTn \
    }
#define TRNG_RSTS            \
    {                        \
        kTRNG_RST_SHIFT_RSTn \
    }
#define USIM_RSTS            \
    {                        \
        kUSIM_RST_SHIFT_RSTn \
    }
#define ENET_RSTS                                            \
    {                                                        \
        kENET_IPG_RST_SHIFT_RSTn, kENET_IPG_S_RST_SHIFT_RSTn \
    }

/*!
 * @brief IP reset handle
 */
typedef RSTCTL_RSTn_t reset_ip_name_t;

/*******************************************************************************
 * API
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Assert reset to peripheral.
 *
 * Asserts reset signal to specified peripheral module.
 *
 * @param peripheral Assert reset to this peripheral. The enum argument contains encoding of reset register
 *                   and reset bit position in the reset register.
 */
void RESET_SetPeripheralReset(reset_ip_name_t peripheral);

/*!
 * @brief Clear reset to peripheral.
 *
 * Clears reset signal to specified peripheral module, allows it to operate.
 *
 * @param peripheral Clear reset to this peripheral. The enum argument contains encoding of reset register
 *                   and reset bit position in the reset register.
 */
void RESET_ClearPeripheralReset(reset_ip_name_t peripheral);

/*!
 * @brief Reset peripheral module.
 *
 * Reset peripheral module.
 *
 * @param peripheral Peripheral to reset. The enum argument contains encoding of reset register
 *                   and reset bit position in the reset register.
 */
void RESET_PeripheralReset(reset_ip_name_t peripheral);

/*!
 * @brief Release peripheral module.
 *
 * Release peripheral module.
 *
 * @param peripheral Peripheral to release. The enum argument contains encoding of reset register
 *                   and reset bit position in the reset register.
 */
static inline void RESET_ReleasePeripheralReset(reset_ip_name_t peripheral)
{
    RESET_ClearPeripheralReset(peripheral);
}

#if defined(__cplusplus)
}
#endif

/*! @} */

#endif /* _FSL_RESET_H_ */
