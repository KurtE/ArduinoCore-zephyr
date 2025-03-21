/*

Copyright (c) 2010 - 2025, Nordic Semiconductor ASA All rights reserved.

SPDX-License-Identifier: BSD-3-Clause

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. Neither the name of Nordic Semiconductor ASA nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef NRF54LM20A_ENGA_FLPR_H
#define NRF54LM20A_ENGA_FLPR_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_FLPR                                      /*!< Processor information is domain local.                               */


/* =========================================================================================================================== */
/* ================                                Interrupt Number Definition                                ================ */
/* =========================================================================================================================== */

typedef enum {
/* ===================================================== Core Interrupts ===================================================== */
/* ============================================== Processor Specific Interrupts ============================================== */
  VPRCLIC_0_IRQn                         = 0,
  VPRCLIC_1_IRQn                         = 1,
  VPRCLIC_2_IRQn                         = 2,
  VPRCLIC_3_IRQn                         = 3,
  VPRCLIC_4_IRQn                         = 4,
  VPRCLIC_5_IRQn                         = 5,
  VPRCLIC_6_IRQn                         = 6,
  VPRCLIC_7_IRQn                         = 7,
  VPRCLIC_8_IRQn                         = 8,
  VPRCLIC_9_IRQn                         = 9,
  VPRCLIC_10_IRQn                        = 10,
  VPRCLIC_11_IRQn                        = 11,
  VPRCLIC_12_IRQn                        = 12,
  VPRCLIC_13_IRQn                        = 13,
  VPRCLIC_14_IRQn                        = 14,
  VPRCLIC_15_IRQn                        = 15,
  VPRCLIC_16_IRQn                        = 16,
  VPRCLIC_17_IRQn                        = 17,
  VPRCLIC_18_IRQn                        = 18,
  VPRCLIC_19_IRQn                        = 19,
  VPRCLIC_20_IRQn                        = 20,
  VPRCLIC_21_IRQn                        = 21,
  VPRCLIC_22_IRQn                        = 22,
  VPRCLIC_23_IRQn                        = 23,
  VPRCLIC_24_IRQn                        = 24,
  VPRCLIC_25_IRQn                        = 25,
  VPRCLIC_26_IRQn                        = 26,
  VPRCLIC_27_IRQn                        = 27,
  VPRCLIC_28_IRQn                        = 28,
  VPRCLIC_29_IRQn                        = 29,
  VPRCLIC_30_IRQn                        = 30,
  VPRCLIC_31_IRQn                        = 31,
  SPU00_IRQn                             = 64,
  MPC00_IRQn                             = 65,
  AAR00_CCM00_IRQn                       = 74,
  ECB00_IRQn                             = 75,
  VPR00_IRQn                             = 76,
  SERIAL00_IRQn                          = 77,
  RRAMC_IRQn                             = 78,
  CTRLAP_IRQn                            = 82,
  CM33SS_IRQn                            = 84,
  TIMER00_IRQn                           = 85,
  EGU00_IRQn                             = 88,
  CRACEN_IRQn                            = 89,
  USBHS_IRQn                             = 90,
  SPU10_IRQn                             = 128,
  TIMER10_IRQn                           = 133,
  EGU10_IRQn                             = 135,
  RADIO_0_IRQn                           = 138,
  RADIO_1_IRQn                           = 139,
  SPU20_IRQn                             = 192,
  SERIAL20_IRQn                          = 198,
  SERIAL21_IRQn                          = 199,
  SERIAL22_IRQn                          = 200,
  EGU20_IRQn                             = 201,
  TIMER20_IRQn                           = 202,
  TIMER21_IRQn                           = 203,
  TIMER22_IRQn                           = 204,
  TIMER23_IRQn                           = 205,
  TIMER24_IRQn                           = 206,
  PDM20_IRQn                             = 208,
  PDM21_IRQn                             = 209,
  PWM20_IRQn                             = 210,
  PWM21_IRQn                             = 211,
  PWM22_IRQn                             = 212,
  SAADC_IRQn                             = 213,
  NFCT_IRQn                              = 214,
  TEMP_IRQn                              = 215,
  GPIOTE20_0_IRQn                        = 218,
  GPIOTE20_1_IRQn                        = 219,
  QDEC20_IRQn                            = 224,
  QDEC21_IRQn                            = 225,
  GRTC_0_IRQn                            = 226,
  GRTC_1_IRQn                            = 227,
  GRTC_2_IRQn                            = 228,
  GRTC_3_IRQn                            = 229,
  TDM_IRQn                               = 232,
  SERIAL23_IRQn                          = 237,
  SERIAL24_IRQn                          = 238,
  TAMPC_IRQn                             = 239,
  SPU30_IRQn                             = 256,
  SERIAL30_IRQn                          = 260,
  COMP_LPCOMP_IRQn                       = 262,
  WDT30_IRQn                             = 264,
  WDT31_IRQn                             = 265,
  GPIOTE30_0_IRQn                        = 268,
  GPIOTE30_1_IRQn                        = 269,
  CLOCK_POWER_IRQn                       = 270,
  VREGUSB_IRQn                           = 289,
} IRQn_Type;

/* ==================================================== Interrupt Aliases ==================================================== */
#define AAR00_IRQn                    AAR00_CCM00_IRQn
#define AAR00_IRQHandler              AAR00_CCM00_IRQHandler
#define CCM00_IRQn                    AAR00_CCM00_IRQn
#define CCM00_IRQHandler              AAR00_CCM00_IRQHandler
#define SPIM00_IRQn                   SERIAL00_IRQn
#define SPIM00_IRQHandler             SERIAL00_IRQHandler
#define SPIS00_IRQn                   SERIAL00_IRQn
#define SPIS00_IRQHandler             SERIAL00_IRQHandler
#define UARTE00_IRQn                  SERIAL00_IRQn
#define UARTE00_IRQHandler            SERIAL00_IRQHandler
#define CPUC_IRQn                     CM33SS_IRQn
#define CPUC_IRQHandler               CM33SS_IRQHandler
#define SPIM20_IRQn                   SERIAL20_IRQn
#define SPIM20_IRQHandler             SERIAL20_IRQHandler
#define SPIS20_IRQn                   SERIAL20_IRQn
#define SPIS20_IRQHandler             SERIAL20_IRQHandler
#define TWIM20_IRQn                   SERIAL20_IRQn
#define TWIM20_IRQHandler             SERIAL20_IRQHandler
#define TWIS20_IRQn                   SERIAL20_IRQn
#define TWIS20_IRQHandler             SERIAL20_IRQHandler
#define UARTE20_IRQn                  SERIAL20_IRQn
#define UARTE20_IRQHandler            SERIAL20_IRQHandler
#define SPIM21_IRQn                   SERIAL21_IRQn
#define SPIM21_IRQHandler             SERIAL21_IRQHandler
#define SPIS21_IRQn                   SERIAL21_IRQn
#define SPIS21_IRQHandler             SERIAL21_IRQHandler
#define TWIM21_IRQn                   SERIAL21_IRQn
#define TWIM21_IRQHandler             SERIAL21_IRQHandler
#define TWIS21_IRQn                   SERIAL21_IRQn
#define TWIS21_IRQHandler             SERIAL21_IRQHandler
#define UARTE21_IRQn                  SERIAL21_IRQn
#define UARTE21_IRQHandler            SERIAL21_IRQHandler
#define SPIM22_IRQn                   SERIAL22_IRQn
#define SPIM22_IRQHandler             SERIAL22_IRQHandler
#define SPIS22_IRQn                   SERIAL22_IRQn
#define SPIS22_IRQHandler             SERIAL22_IRQHandler
#define TWIM22_IRQn                   SERIAL22_IRQn
#define TWIM22_IRQHandler             SERIAL22_IRQHandler
#define TWIS22_IRQn                   SERIAL22_IRQn
#define TWIS22_IRQHandler             SERIAL22_IRQHandler
#define UARTE22_IRQn                  SERIAL22_IRQn
#define UARTE22_IRQHandler            SERIAL22_IRQHandler
#define SPIM23_IRQn                   SERIAL23_IRQn
#define SPIM23_IRQHandler             SERIAL23_IRQHandler
#define SPIS23_IRQn                   SERIAL23_IRQn
#define SPIS23_IRQHandler             SERIAL23_IRQHandler
#define TWIM23_IRQn                   SERIAL23_IRQn
#define TWIM23_IRQHandler             SERIAL23_IRQHandler
#define TWIS23_IRQn                   SERIAL23_IRQn
#define TWIS23_IRQHandler             SERIAL23_IRQHandler
#define UARTE23_IRQn                  SERIAL23_IRQn
#define UARTE23_IRQHandler            SERIAL23_IRQHandler
#define SPIM24_IRQn                   SERIAL24_IRQn
#define SPIM24_IRQHandler             SERIAL24_IRQHandler
#define SPIS24_IRQn                   SERIAL24_IRQn
#define SPIS24_IRQHandler             SERIAL24_IRQHandler
#define TWIM24_IRQn                   SERIAL24_IRQn
#define TWIM24_IRQHandler             SERIAL24_IRQHandler
#define TWIS24_IRQn                   SERIAL24_IRQn
#define TWIS24_IRQHandler             SERIAL24_IRQHandler
#define UARTE24_IRQn                  SERIAL24_IRQn
#define UARTE24_IRQHandler            SERIAL24_IRQHandler
#define SPIM30_IRQn                   SERIAL30_IRQn
#define SPIM30_IRQHandler             SERIAL30_IRQHandler
#define SPIS30_IRQn                   SERIAL30_IRQn
#define SPIS30_IRQHandler             SERIAL30_IRQHandler
#define TWIM30_IRQn                   SERIAL30_IRQn
#define TWIM30_IRQHandler             SERIAL30_IRQHandler
#define TWIS30_IRQn                   SERIAL30_IRQn
#define TWIS30_IRQHandler             SERIAL30_IRQHandler
#define UARTE30_IRQn                  SERIAL30_IRQn
#define UARTE30_IRQHandler            SERIAL30_IRQHandler
#define COMP_IRQn                     COMP_LPCOMP_IRQn
#define COMP_IRQHandler               COMP_LPCOMP_IRQHandler
#define LPCOMP_IRQn                   COMP_LPCOMP_IRQn
#define LPCOMP_IRQHandler             COMP_LPCOMP_IRQHandler
#define CLOCK_IRQn                    CLOCK_POWER_IRQn
#define CLOCK_IRQHandler              CLOCK_POWER_IRQHandler
#define POWER_IRQn                    CLOCK_POWER_IRQn
#define POWER_IRQHandler              CLOCK_POWER_IRQHandler

/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* ====================== Configuration of the Nordic Semiconductor VPR Processor and Core Peripherals ======================= */
#define __VPR_REV                  1.4.1
#define __VPR_REV_MAJOR                1
#define __VPR_REV_MINOR                4
#define __VPR_REV_PATCH                1
#define __DSP_PRESENT                  0
#define __CLIC_PRIO_BITS               2
#define __MTVT_PRESENT                 1
#define __MPU_PRESENT                  1
#define __FPU_PRESENT                  0
#define __FPU_DP                       0
#define __INTERRUPTS_MAX             270

#define NRF_VPR                NRF_VPR00
#include "core_vpr.h"
#include "system_nrf.h"

#endif                                               /*!< NRF_FLPR                                                             */


#ifdef NRF_FLPR

  #define NRF_DOMAIN                    NRF_DOMAIN_NONE
  #define NRF_PROCESSOR                 NRF_PROCESSOR_VPR

#endif                                               /*!< NRF_FLPR                                                             */


/* ========================================= Start of section using anonymous unions ========================================= */

#include "compiler_abstraction.h"

#if defined (__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined (__ICCARM__)
  #pragma language=extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wc11-extensions"
  #pragma clang diagnostic ignored "-Wreserved-id-macro"
  #pragma clang diagnostic ignored "-Wgnu-anonymous-struct"
  #pragma clang diagnostic ignored "-Wnested-anon-types"
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning 586
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#else
  #warning Unsupported compiler type
#endif

/* =========================================================================================================================== */
/* ================                                  Peripheral Address Map                                  ================ */
/* =========================================================================================================================== */

#define NRF_FLPR_VPRCLIC_NS_BASE          0xF0000000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_FLPR_VPRCLIC_NS               ((NRF_CLIC_Type*)                     NRF_FLPR_VPRCLIC_NS_BASE)

/* =========================================================================================================================== */
/* ================                                    TrustZone Remapping                                    ================ */
/* =========================================================================================================================== */

#ifdef NRF_TRUSTZONE_NONSECURE                       /*!< Remap NRF_X_NS instances to NRF_X symbol for ease of use.            */
  #define NRF_FLPR_VPRCLIC                        NRF_FLPR_VPRCLIC_NS
#else                                                /*!< Remap NRF_X_S instances to NRF_X symbol for ease of use.             */
  #define NRF_FLPR_VPRCLIC                        NRF_FLPR_VPRCLIC_NS
#endif                                               /*!< NRF_TRUSTZONE_NONSECURE                                              */

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_FLPR                                      /*!< Remap NRF_DOMAIN_X instances to NRF_X symbol for ease of use.        */
  #ifdef NRF_TRUSTZONE_NONSECURE                     /*!< Remap only nonsecure instances.                                      */
    #define NRF_VPRCLIC                           NRF_FLPR_VPRCLIC
  #else                                              /*!< Remap all instances.                                                 */
    #define NRF_VPRCLIC                           NRF_FLPR_VPRCLIC
  #endif                                             /*!< NRF_TRUSTZONE_NONSECURE                                              */
#endif                                               /*!< NRF_FLPR                                                             */

/* ========================================== End of section using anonymous unions ========================================== */

#if defined (__CC_ARM)
  #pragma pop
#elif defined (__ICCARM__)
  /* leave anonymous unions enabled */
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic pop
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning restore
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#endif


#ifdef __cplusplus
}
#endif
#endif /* NRF54LM20A_ENGA_FLPR_H */

