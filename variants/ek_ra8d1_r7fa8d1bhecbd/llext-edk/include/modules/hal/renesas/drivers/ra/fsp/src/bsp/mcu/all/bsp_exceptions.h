/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/** @} (end addtogroup BSP_MCU) */

#ifndef BSP_EXCEPTIONS_H
 #define BSP_EXCEPTIONS_H

 #ifdef __cplusplus
extern "C" {
 #endif

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/* This list includes only Arm standard exceptions. Renesas interrupts are defined in vector_data.h. */
typedef enum IRQn
{
    Reset_IRQn            = -15,
    NonMaskableInt_IRQn   = -14,
    HardFault_IRQn        = -13,
    MemoryManagement_IRQn = -12,
    BusFault_IRQn         = -11,
    UsageFault_IRQn       = -10,
    SecureFault_IRQn      = -9,
    SVCall_IRQn           = -5,
    DebugMonitor_IRQn     = -4,
    PendSV_IRQn           = -2,
    SysTick_IRQn          = -1,
} IRQn_Type;

 #ifdef __cplusplus
}
 #endif

#endif
