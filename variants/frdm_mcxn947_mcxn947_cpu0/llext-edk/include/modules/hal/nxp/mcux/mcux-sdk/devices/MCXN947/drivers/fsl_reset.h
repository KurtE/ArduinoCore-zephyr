/*
 * Copyright 2022, NXP
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
/*! @brief reset driver version 2.4.0 */
#define FSL_RESET_DRIVER_VERSION (MAKE_VERSION(2, 4, 0))
/*@}*/

/*!
 * @brief Enumeration for peripheral reset control bits
 *
 * Defines the enumeration for peripheral reset control bits in PRESETCTRL/ASYNCPRESETCTRL registers
 */
typedef enum _SYSCON_RSTn
{
    kFMU_RST_SHIFT_RSTn     = 0 | 9U,
    kFLEXSPI_RST_SHIFT_RSTn = 0 | 11U,
    kMUX_RST_SHIFT_RSTn     = 0 | 12U,
    kPORT0_RST_SHIFT_RSTn   = 0 | 13U,
    kPORT1_RST_SHIFT_RSTn   = 0 | 14U,
    kPORT2_RST_SHIFT_RSTn   = 0 | 15U,
    kPORT3_RST_SHIFT_RSTn   = 0 | 16U,
    kPORT4_RST_SHIFT_RSTn   = 0 | 17U,
    kGPIO0_RST_SHIFT_RSTn   = 0 | 19U,
    kGPIO1_RST_SHIFT_RSTn   = 0 | 20U,
    kGPIO2_RST_SHIFT_RSTn   = 0 | 21U,
    kGPIO3_RST_SHIFT_RSTn   = 0 | 22U,
    kGPIO4_RST_SHIFT_RSTn   = 0 | 23U,
    kPINT_RST_SHIFT_RSTn    = 0 | 25U,
    kDMA0_RST_SHIFT_RSTn    = 0 | 26U,
    kCRC_RST_SHIFT_RSTn     = 0 | 27U,
    kMAILBOX_RST_SHIFT_RSTn = 0 | 31U,

    kMRT_RST_SHIFT_RSTn         = 65536 | 0U,
    kOSTIMER_RST_SHIFT_RSTn     = 65536 | 1U,
    kSCT_RST_SHIFT_RSTn         = 65536 | 2U,
    kADC0_RST_SHIFT_RSTn        = 65536 | 3U,
    kADC1_RST_SHIFT_RSTn        = 65536 | 4U,
    kDAC0_RST_SHIFT_RSTn        = 65536 | 5U,
    kEVSIM0_RST_SHIFT_RSTn      = 65536 | 8U,
    kEVSIM1_RST_SHIFT_RSTn      = 65536 | 9U,
    kUTICK_RST_SHIFT_RSTn       = 65536 | 10U,
    kFC0_RST_SHIFT_RSTn         = 65536 | 11U,
    kFC1_RST_SHIFT_RSTn         = 65536 | 12U,
    kFC2_RST_SHIFT_RSTn         = 65536 | 13U,
    kFC3_RST_SHIFT_RSTn         = 65536 | 14U,
    kFC4_RST_SHIFT_RSTn         = 65536 | 15U,
    kFC5_RST_SHIFT_RSTn         = 65536 | 16U,
    kFC6_RST_SHIFT_RSTn         = 65536 | 17U,
    kFC7_RST_SHIFT_RSTn         = 65536 | 18U,
    kFC8_RST_SHIFT_RSTn         = 65536 | 19U,
    kFC9_RST_SHIFT_RSTn         = 65536 | 20U,
    kMICFIL_RST_SHIFT_RSTn      = 65536 | 21U,
    kCTIMER2_RST_SHIFT_RSTn     = 65536 | 22U,
    kUSB0_RAM_RST_SHIFT_RSTn    = 65536 | 23U,
    kUSB0_FS_DCD_RST_SHIFT_RSTn = 65536 | 24U,
    kUSB0_FS_RST_SHIFT_RSTn     = 65536 | 25U,
    kCTIMER0_RST_SHIFT_RSTn     = 65536 | 26U,
    kCTIMER1_RST_SHIFT_RSTn     = 65536 | 27U,
    kSMART_DMA_RST_SHIFT_RSTn   = 65536 | 31U,

    kDMA1_RST_SHIFT_RSTn       = 131072 | 1U,
    kENET_RST_SHIFT_RSTn       = 131072 | 2U,
    kUSDHC_RST_SHIFT_RSTn      = 131072 | 3U,
    kFLEXIO_RST_SHIFT_RSTn     = 131072 | 4U,
    kSAI0_RST_SHIFT_RSTn       = 131072 | 5U,
    kSAI1_RST_SHIFT_RSTn       = 131072 | 6U,
    kTRO_RST_SHIFT_RSTn        = 131072 | 7U,
    kFREQME_RST_SHIFT_RSTn     = 131072 | 8U,
    kTRNG_RST_SHIFT_RSTn       = 131072 | 13U,
    kFLEXCAN0_RST_SHIFT_RSTn   = 131072 | 14U,
    kFLEXCAN1_RST_SHIFT_RSTn   = 131072 | 15U,
    kUSB_HS_RST_SHIFT_RSTn     = 131072 | 16U,
    kUSB_HS_PHY_RST_SHIFT_RSTn = 131072 | 17U,
    kPOWERQUAD_RST_SHIFT_RSTn  = 131072 | 19U,
    kPLU_RST_SHIFT_RSTn        = 131072 | 20U,
    kCTIMER3_RST_SHIFT_RSTn    = 131072 | 21U,
    kCTIMER4_RST_SHIFT_RSTn    = 131072 | 22U,
    kPUF_RST_SHIFT_RSTn        = 131072 | 23U,
    kPKC_RST_SHIFT_RSTn        = 131072 | 24U,
    kSM3_RST_SHIFT_RSTn        = 131072 | 30U,

    kI3C0_RST_SHIFT_RSTn         = 196608 | 0U,
    kI3C1_RST_SHIFT_RSTn         = 196608 | 1U,
    kSINC_RST_SHIFT_RSTn         = 196608 | 2U,
    kCOOLFLUX_RST_SHIFT_RSTn     = 196608 | 3U,
    kQDC0_RST_SHIFT_RSTn         = 196608 | 4U,
    kQDC1_RST_SHIFT_RSTn         = 196608 | 5U,
    kPWM0_RST_SHIFT_RSTn         = 196608 | 6U,
    kPWM1_RST_SHIFT_RSTn         = 196608 | 7U,
    kAOI0_RST_SHIFT_RSTn         = 196608 | 8U,
    kDAC1_RST_SHIFT_RSTn         = 196608 | 11U,
    kDAC2_RST_SHIFT_RSTn         = 196608 | 12U,
    kOPAMP0_RST_SHIFT_RSTn       = 196608 | 13U,
    kOPAMP1_RST_SHIFT_RSTn       = 196608 | 14U,
    kOPAMP2_RST_SHIFT_RSTn       = 196608 | 15U,
    kCMP2_RST_SHIFT_RSTn         = 196608 | 18U,
    kVREF_RST_SHIFT_RSTn         = 196608 | 19U,
    kCOOLFLUX_APB_RST_SHIFT_RSTn = 196608 | 20U,
    kNEUTRON_RST_SHIFT_RSTn      = 196608 | 21U,
    kTSI_RST_SHIFT_RSTn          = 196608 | 22U,
    kEWM_RST_SHIFT_RSTn          = 196608 | 23U,
    kEIM_RST_SHIFT_RSTn          = 196608 | 24U,
    kSEMA42_RST_SHIFT_RSTn       = 196608 | 27U,
} SYSCON_RSTn_t;

/** Array initializers with peripheral reset bits **/
#define ADC_RSTS                                   \
    {                                              \
        kADC0_RST_SHIFT_RSTn, kADC1_RST_SHIFT_RSTn \
    }
#define CRC_RSTS            \
    {                       \
        kCRC_RST_SHIFT_RSTn \
    }
#define CTIMER_RSTS                                                                                         \
    {                                                                                                       \
        kCTIMER0_RST_SHIFT_RSTn, kCTIMER1_RST_SHIFT_RSTn, kCTIMER2_RST_SHIFT_RSTn, kCTIMER3_RST_SHIFT_RSTn, \
            kCTIMER4_RST_SHIFT_RSTn                                                                         \
    }
#define DMA_RSTS_N                                 \
    {                                              \
        kDMA0_RST_SHIFT_RSTn, kDMA1_RST_SHIFT_RSTn \
    }

#define LP_FLEXCOMM_RSTS                                                                                            \
    {                                                                                                               \
        kFC0_RST_SHIFT_RSTn, kFC1_RST_SHIFT_RSTn, kFC2_RST_SHIFT_RSTn, kFC3_RST_SHIFT_RSTn, kFC4_RST_SHIFT_RSTn,    \
            kFC5_RST_SHIFT_RSTn, kFC6_RST_SHIFT_RSTn, kFC7_RST_SHIFT_RSTn, kFC8_RST_SHIFT_RSTn, kFC9_RST_SHIFT_RSTn \
    }
#define GPIO_RSTS_N                                                                                 \
    {                                                                                               \
        kGPIO0_RST_SHIFT_RSTn, kGPIO1_RST_SHIFT_RSTn, kGPIO2_RST_SHIFT_RSTn, kGPIO3_RST_SHIFT_RSTn, \
            kGPIO4_RST_SHIFT_RSTn                                                                   \
    }
#define INPUTMUX_RSTS       \
    {                       \
        kMUX_RST_SHIFT_RSTn \
    }
#define FLASH_RSTS          \
    {                       \
        kFMC_RST_SHIFT_RSTn \
    }
#define MRT_RSTS            \
    {                       \
        kMRT_RST_SHIFT_RSTn \
    }
#define PINT_RSTS            \
    {                        \
        kPINT_RST_SHIFT_RSTn \
    }
#define TRNG_RSTS            \
    {                        \
        kTRNG_RST_SHIFT_RSTn \
    }
#define SCT_RSTS            \
    {                       \
        kSCT_RST_SHIFT_RSTn \
    }
#define UTICK_RSTS            \
    {                         \
        kUTICK_RST_SHIFT_RSTn \
    }
#define PLU_RSTS_N          \
    {                       \
        kPLU_RST_SHIFT_RSTn \
    }
#define OSTIMER_RSTS            \
    {                           \
        kOSTIMER_RST_SHIFT_RSTn \
    }
#define POWERQUAD_RSTS            \
    {                             \
        kPOWERQUAD_RST_SHIFT_RSTn \
    }
#define I3C_RSTS                                   \
    {                                              \
        kI3C0_RST_SHIFT_RSTn, kI3C1_RST_SHIFT_RSTn \
    }
typedef SYSCON_RSTn_t reset_ip_name_t;

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
