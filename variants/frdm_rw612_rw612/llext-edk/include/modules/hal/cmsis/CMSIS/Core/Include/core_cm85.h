/**************************************************************************//**
 * @file     core_cm85.h
 * @brief    CMSIS Cortex-M85 Core Peripheral Access Layer Header File
 * @version  V1.0.4
 * @date     21. April 2022
 ******************************************************************************/
/*
 * Copyright (c) 2022 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#if   defined ( __ICCARM__ )
  #pragma system_include
#elif defined (__clang__)
  #pragma clang system_header
#elif defined ( __GNUC__ )
  #pragma GCC diagnostic ignored "-Wpedantic"
#endif

#ifndef __CORE_CM85_H_GENERIC
#define __CORE_CM85_H_GENERIC

#include <stdint.h>

#ifdef __cplusplus
 extern "C" {
#endif

/**
  \page CMSIS_MISRA_Exceptions  MISRA-C:2004 Compliance Exceptions
  CMSIS violates the following MISRA-C:2004 rules:

   \li Required Rule 8.5, object/function definition in header file.<br>
     Function definitions in header files are used to allow 'inlining'.

   \li Required Rule 18.4, declaration of union type or object of union type: '{...}'.<br>
     Unions are used for effective representation of core registers.

   \li Advisory Rule 19.7, Function-like macro defined.<br>
     Function-like macros are used to allow more efficient code.
 */


/*******************************************************************************
 *                 CMSIS definitions
 ******************************************************************************/
/**
  \ingroup Cortex_M85
  @{
 */

#include "cmsis_version.h"

/*  CMSIS CM85 definitions */

#define __CORTEX_M                      (85U)

#if defined ( __CC_ARM )
  #error Legacy Arm Compiler does not support Armv8.1-M target architecture.
#elif defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #if defined __ARM_FP
    #if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)
      #define __FPU_USED       1U
    #else
      #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
      #define __FPU_USED       0U
    #endif
  #else
    #define __FPU_USED         0U
  #endif

  #if defined(__ARM_FEATURE_DSP)
    #if defined(__DSP_PRESENT) && (__DSP_PRESENT == 1U)
      #define __DSP_USED       1U
    #else
      #error "Compiler generates DSP (SIMD) instructions for a devices without DSP extensions (check __DSP_PRESENT)"
      #define __DSP_USED       0U
    #endif
  #else
    #define __DSP_USED         0U
  #endif

#elif defined ( __GNUC__ )
  #if defined (__VFP_FP__) && !defined(__SOFTFP__)
    #if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)
      #define __FPU_USED       1U
    #else
      #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
      #define __FPU_USED       0U
    #endif
  #else
    #define __FPU_USED         0U
  #endif

  #if defined(__ARM_FEATURE_DSP)
    #if defined(__DSP_PRESENT) && (__DSP_PRESENT == 1U)
      #define __DSP_USED       1U
    #else
      #error "Compiler generates DSP (SIMD) instructions for a devices without DSP extensions (check __DSP_PRESENT)"
      #define __DSP_USED         0U
    #endif
  #else
    #define __DSP_USED         0U
  #endif

#elif defined ( __ICCARM__ )
  #if defined __ARMVFP__
    #if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)
      #define __FPU_USED       1U
    #else
      #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
      #define __FPU_USED       0U
    #endif
  #else
    #define __FPU_USED         0U
  #endif

  #if defined(__ARM_FEATURE_DSP)
    #if defined(__DSP_PRESENT) && (__DSP_PRESENT == 1U)
      #define __DSP_USED       1U
    #else
      #error "Compiler generates DSP (SIMD) instructions for a devices without DSP extensions (check __DSP_PRESENT)"
      #define __DSP_USED         0U
    #endif
  #else
    #define __DSP_USED         0U
  #endif

#elif defined ( __TI_ARM__ )
  #if defined __TI_VFP_SUPPORT__
    #if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)
      #define __FPU_USED       1U
    #else
      #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
      #define __FPU_USED       0U
    #endif
  #else
    #define __FPU_USED         0U
  #endif

#elif defined ( __TASKING__ )
  #if defined __FPU_VFP__
    #if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)
      #define __FPU_USED       1U
    #else
      #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
      #define __FPU_USED       0U
    #endif
  #else
    #define __FPU_USED         0U
  #endif

#elif defined ( __CSMC__ )
  #if ( __CSMC__ & 0x400U)
    #if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)
      #define __FPU_USED       1U
    #else
      #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
      #define __FPU_USED       0U
    #endif
  #else
    #define __FPU_USED         0U
  #endif

#endif

#include "cmsis_compiler.h"


#ifdef __cplusplus
}
#endif

#endif /* __CORE_CM85_H_GENERIC */

#ifndef __CMSIS_GENERIC

#ifndef __CORE_CM85_H_DEPENDANT
#define __CORE_CM85_H_DEPENDANT

#ifdef __cplusplus
 extern "C" {
#endif

/* check device defines and use defaults */
#if defined __CHECK_DEVICE_DEFINES
  #ifndef __CM85_REV
    #define __CM85_REV               0x0001U
    #warning "__CM85_REV not defined in device header file; using default!"
  #endif

  #ifndef __FPU_PRESENT
    #define __FPU_PRESENT             0U
    #warning "__FPU_PRESENT not defined in device header file; using default!"
  #endif

  #if __FPU_PRESENT != 0U
    #ifndef __FPU_DP
      #define __FPU_DP             0U
      #warning "__FPU_DP not defined in device header file; using default!"
    #endif
  #endif

  #ifndef __MPU_PRESENT
    #define __MPU_PRESENT             0U
    #warning "__MPU_PRESENT not defined in device header file; using default!"
  #endif

  #ifndef __ICACHE_PRESENT
    #define __ICACHE_PRESENT          0U
    #warning "__ICACHE_PRESENT not defined in device header file; using default!"
  #endif

  #ifndef __DCACHE_PRESENT
    #define __DCACHE_PRESENT          0U
    #warning "__DCACHE_PRESENT not defined in device header file; using default!"
  #endif

  #ifndef __VTOR_PRESENT
    #define __VTOR_PRESENT             1U
    #warning "__VTOR_PRESENT not defined in device header file; using default!"
  #endif

  #ifndef __PMU_PRESENT
    #define __PMU_PRESENT             0U
    #warning "__PMU_PRESENT not defined in device header file; using default!"
  #endif

  #if __PMU_PRESENT != 0U
    #ifndef __PMU_NUM_EVENTCNT
      #define __PMU_NUM_EVENTCNT      8U
      #warning "__PMU_NUM_EVENTCNT not defined in device header file; using default!"
    #elif (__PMU_NUM_EVENTCNT > 8 || __PMU_NUM_EVENTCNT < 2)
    #error "__PMU_NUM_EVENTCNT is out of range in device header file!" */
    #endif
  #endif

  #ifndef __SAUREGION_PRESENT
    #define __SAUREGION_PRESENT       0U
    #warning "__SAUREGION_PRESENT not defined in device header file; using default!"
  #endif

  #ifndef __DSP_PRESENT
    #define __DSP_PRESENT             0U
    #warning "__DSP_PRESENT not defined in device header file; using default!"
  #endif

  #ifndef __NVIC_PRIO_BITS
    #define __NVIC_PRIO_BITS          3U
    #warning "__NVIC_PRIO_BITS not defined in device header file; using default!"
  #endif

  #ifndef __Vendor_SysTickConfig
    #define __Vendor_SysTickConfig    0U
    #warning "__Vendor_SysTickConfig not defined in device header file; using default!"
  #endif
#endif

/* IO definitions (access restrictions to peripheral registers) */
/**
    \defgroup CMSIS_glob_defs CMSIS Global Defines

    <strong>IO Type Qualifiers</strong> are used
    \li to specify the access to peripheral variables.
    \li for automatic generation of peripheral register debug information.
*/
#ifdef __cplusplus
  #define   __I     volatile
#else
  #define   __I     volatile const
#endif
#define     __O     volatile
#define     __IO    volatile

/* following defines should be used for structure members */
#define     __IM     volatile const
#define     __OM     volatile
#define     __IOM    volatile

/*@} end of group Cortex_M85 */



/*******************************************************************************
 *                 Register Abstraction
  Core Register contain:
  - Core Register
  - Core NVIC Register
  - Core EWIC Register
  - Core SCB Register
  - Core SysTick Register
  - Core Debug Register
  - Core PMU Register
  - Core MPU Register
  - Core SAU Register
  - Core FPU Register
 ******************************************************************************/
/**
  \defgroup CMSIS_core_register Defines and Type Definitions
  \brief Type definitions and defines for Cortex-M processor based devices.
*/

/**
  \ingroup    CMSIS_core_register
  \defgroup   CMSIS_CORE  Status and Control Registers
  \brief      Core Register type definitions.
  @{
 */

/**
  \brief  Union type to access the Application Program Status Register (APSR).
 */
typedef union
{
  struct
  {
    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;

/* APSR Register Definitions */
#define APSR_N_Pos                         31U
#define APSR_N_Msk                         (1UL << APSR_N_Pos)

#define APSR_Z_Pos                         30U
#define APSR_Z_Msk                         (1UL << APSR_Z_Pos)

#define APSR_C_Pos                         29U
#define APSR_C_Msk                         (1UL << APSR_C_Pos)

#define APSR_V_Pos                         28U
#define APSR_V_Msk                         (1UL << APSR_V_Pos)

#define APSR_Q_Pos                         27U
#define APSR_Q_Msk                         (1UL << APSR_Q_Pos)

#define APSR_GE_Pos                        16U
#define APSR_GE_Msk                        (0xFUL << APSR_GE_Pos)


/**
  \brief  Union type to access the Interrupt Program Status Register (IPSR).
 */
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;

/* IPSR Register Definitions */
#define IPSR_ISR_Pos                        0U
#define IPSR_ISR_Msk                       (0x1FFUL)


/**
  \brief  Union type to access the Special-Purpose Program Status Registers (xPSR).
 */
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:7;
    uint32_t GE:4;
    uint32_t _reserved1:1;
    uint32_t B:1;
    uint32_t _reserved2:2;
    uint32_t T:1;
    uint32_t IT:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;

/* xPSR Register Definitions */
#define xPSR_N_Pos                         31U
#define xPSR_N_Msk                         (1UL << xPSR_N_Pos)

#define xPSR_Z_Pos                         30U
#define xPSR_Z_Msk                         (1UL << xPSR_Z_Pos)

#define xPSR_C_Pos                         29U
#define xPSR_C_Msk                         (1UL << xPSR_C_Pos)

#define xPSR_V_Pos                         28U
#define xPSR_V_Msk                         (1UL << xPSR_V_Pos)

#define xPSR_Q_Pos                         27U
#define xPSR_Q_Msk                         (1UL << xPSR_Q_Pos)

#define xPSR_IT_Pos                        25U
#define xPSR_IT_Msk                        (3UL << xPSR_IT_Pos)

#define xPSR_T_Pos                         24U
#define xPSR_T_Msk                         (1UL << xPSR_T_Pos)

#define xPSR_B_Pos                         21U
#define xPSR_B_Msk                         (1UL << xPSR_B_Pos)

#define xPSR_GE_Pos                        16U
#define xPSR_GE_Msk                        (0xFUL << xPSR_GE_Pos)

#define xPSR_ISR_Pos                        0U
#define xPSR_ISR_Msk                       (0x1FFUL)


/**
  \brief  Union type to access the Control Registers (CONTROL).
 */
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t SFPA:1;
    uint32_t BTI_EN:1;
    uint32_t UBTI_EN:1;
    uint32_t PAC_EN:1;
    uint32_t UPAC_EN:1;
    uint32_t _reserved1:24;
  } b;
  uint32_t w;
} CONTROL_Type;

/* CONTROL Register Definitions */
#define CONTROL_UPAC_EN_Pos                 7U
#define CONTROL_UPAC_EN_Msk                (1UL << CONTROL_UPAC_EN_Pos)

#define CONTROL_PAC_EN_Pos                  6U
#define CONTROL_PAC_EN_Msk                 (1UL << CONTROL_PAC_EN_Pos)

#define CONTROL_UBTI_EN_Pos                 5U
#define CONTROL_UBTI_EN_Msk                (1UL << CONTROL_UBTI_EN_Pos)

#define CONTROL_BTI_EN_Pos                  4U
#define CONTROL_BTI_EN_Msk                 (1UL << CONTROL_BTI_EN_Pos)

#define CONTROL_SFPA_Pos                    3U
#define CONTROL_SFPA_Msk                   (1UL << CONTROL_SFPA_Pos)

#define CONTROL_FPCA_Pos                    2U
#define CONTROL_FPCA_Msk                   (1UL << CONTROL_FPCA_Pos)

#define CONTROL_SPSEL_Pos                   1U
#define CONTROL_SPSEL_Msk                  (1UL << CONTROL_SPSEL_Pos)

#define CONTROL_nPRIV_Pos                   0U
#define CONTROL_nPRIV_Msk                  (1UL)

/*@} end of group CMSIS_CORE */


/**
  \ingroup    CMSIS_core_register
  \defgroup   CMSIS_NVIC  Nested Vectored Interrupt Controller (NVIC)
  \brief      Type definitions for the NVIC Registers
  @{
 */

/**
  \brief  Structure type to access the Nested Vectored Interrupt Controller (NVIC).
 */
typedef struct
{
  __IOM uint32_t ISER[16U];
        uint32_t RESERVED0[16U];
  __IOM uint32_t ICER[16U];
        uint32_t RSERVED1[16U];
  __IOM uint32_t ISPR[16U];
        uint32_t RESERVED2[16U];
  __IOM uint32_t ICPR[16U];
        uint32_t RESERVED3[16U];
  __IOM uint32_t IABR[16U];
        uint32_t RESERVED4[16U];
  __IOM uint32_t ITNS[16U];
        uint32_t RESERVED5[16U];
  __IOM uint8_t  IPR[496U];
        uint32_t RESERVED6[580U];
  __OM  uint32_t STIR;
}  NVIC_Type;

/* Software Triggered Interrupt Register Definitions */
#define NVIC_STIR_INTID_Pos                 0U
#define NVIC_STIR_INTID_Msk                (0x1FFUL)

/*@} end of group CMSIS_NVIC */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_SCB     System Control Block (SCB)
  \brief    Type definitions for the System Control Block Registers
  @{
 */

/**
  \brief  Structure type to access the System Control Block (SCB).
 */
typedef struct
{
  __IM  uint32_t CPUID;
  __IOM uint32_t ICSR;
  __IOM uint32_t VTOR;
  __IOM uint32_t AIRCR;
  __IOM uint32_t SCR;
  __IOM uint32_t CCR;
  __IOM uint8_t  SHPR[12U];
  __IOM uint32_t SHCSR;
  __IOM uint32_t CFSR;
  __IOM uint32_t HFSR;
  __IOM uint32_t DFSR;
  __IOM uint32_t MMFAR;
  __IOM uint32_t BFAR;
  __IOM uint32_t AFSR;
  __IM  uint32_t ID_PFR[2U];
  __IM  uint32_t ID_DFR;
  __IM  uint32_t ID_AFR;
  __IM  uint32_t ID_MMFR[4U];
  __IM  uint32_t ID_ISAR[6U];
  __IM  uint32_t CLIDR;
  __IM  uint32_t CTR;
  __IM  uint32_t CCSIDR;
  __IOM uint32_t CSSELR;
  __IOM uint32_t CPACR;
  __IOM uint32_t NSACR;
        uint32_t RESERVED7[21U];
  __IOM uint32_t SFSR;
  __IOM uint32_t SFAR;
        uint32_t RESERVED3[69U];
  __OM  uint32_t STIR;
  __IOM uint32_t RFSR;
        uint32_t RESERVED4[14U];
  __IM  uint32_t MVFR0;
  __IM  uint32_t MVFR1;
  __IM  uint32_t MVFR2;
        uint32_t RESERVED5[1U];
  __OM  uint32_t ICIALLU;
        uint32_t RESERVED6[1U];
  __OM  uint32_t ICIMVAU;
  __OM  uint32_t DCIMVAC;
  __OM  uint32_t DCISW;
  __OM  uint32_t DCCMVAU;
  __OM  uint32_t DCCMVAC;
  __OM  uint32_t DCCSW;
  __OM  uint32_t DCCIMVAC;
  __OM  uint32_t DCCISW;
  __OM  uint32_t BPIALL;
} SCB_Type;

/* SCB CPUID Register Definitions */
#define SCB_CPUID_IMPLEMENTER_Pos          24U
#define SCB_CPUID_IMPLEMENTER_Msk          (0xFFUL << SCB_CPUID_IMPLEMENTER_Pos)

#define SCB_CPUID_VARIANT_Pos              20U
#define SCB_CPUID_VARIANT_Msk              (0xFUL << SCB_CPUID_VARIANT_Pos)

#define SCB_CPUID_ARCHITECTURE_Pos         16U
#define SCB_CPUID_ARCHITECTURE_Msk         (0xFUL << SCB_CPUID_ARCHITECTURE_Pos)

#define SCB_CPUID_PARTNO_Pos                4U
#define SCB_CPUID_PARTNO_Msk               (0xFFFUL << SCB_CPUID_PARTNO_Pos)

#define SCB_CPUID_REVISION_Pos              0U
#define SCB_CPUID_REVISION_Msk             (0xFUL)

/* SCB Interrupt Control State Register Definitions */
#define SCB_ICSR_PENDNMISET_Pos            31U
#define SCB_ICSR_PENDNMISET_Msk            (1UL << SCB_ICSR_PENDNMISET_Pos)

#define SCB_ICSR_NMIPENDSET_Pos            SCB_ICSR_PENDNMISET_Pos
#define SCB_ICSR_NMIPENDSET_Msk            SCB_ICSR_PENDNMISET_Msk

#define SCB_ICSR_PENDNMICLR_Pos            30U
#define SCB_ICSR_PENDNMICLR_Msk            (1UL << SCB_ICSR_PENDNMICLR_Pos)

#define SCB_ICSR_PENDSVSET_Pos             28U
#define SCB_ICSR_PENDSVSET_Msk             (1UL << SCB_ICSR_PENDSVSET_Pos)

#define SCB_ICSR_PENDSVCLR_Pos             27U
#define SCB_ICSR_PENDSVCLR_Msk             (1UL << SCB_ICSR_PENDSVCLR_Pos)

#define SCB_ICSR_PENDSTSET_Pos             26U
#define SCB_ICSR_PENDSTSET_Msk             (1UL << SCB_ICSR_PENDSTSET_Pos)

#define SCB_ICSR_PENDSTCLR_Pos             25U
#define SCB_ICSR_PENDSTCLR_Msk             (1UL << SCB_ICSR_PENDSTCLR_Pos)

#define SCB_ICSR_STTNS_Pos                 24U
#define SCB_ICSR_STTNS_Msk                 (1UL << SCB_ICSR_STTNS_Pos)

#define SCB_ICSR_ISRPREEMPT_Pos            23U
#define SCB_ICSR_ISRPREEMPT_Msk            (1UL << SCB_ICSR_ISRPREEMPT_Pos)

#define SCB_ICSR_ISRPENDING_Pos            22U
#define SCB_ICSR_ISRPENDING_Msk            (1UL << SCB_ICSR_ISRPENDING_Pos)

#define SCB_ICSR_VECTPENDING_Pos           12U
#define SCB_ICSR_VECTPENDING_Msk           (0x1FFUL << SCB_ICSR_VECTPENDING_Pos)

#define SCB_ICSR_RETTOBASE_Pos             11U
#define SCB_ICSR_RETTOBASE_Msk             (1UL << SCB_ICSR_RETTOBASE_Pos)

#define SCB_ICSR_VECTACTIVE_Pos             0U
#define SCB_ICSR_VECTACTIVE_Msk            (0x1FFUL)

/* SCB Vector Table Offset Register Definitions */
#define SCB_VTOR_TBLOFF_Pos                 7U
#define SCB_VTOR_TBLOFF_Msk                (0x1FFFFFFUL << SCB_VTOR_TBLOFF_Pos)

/* SCB Application Interrupt and Reset Control Register Definitions */
#define SCB_AIRCR_VECTKEY_Pos              16U
#define SCB_AIRCR_VECTKEY_Msk              (0xFFFFUL << SCB_AIRCR_VECTKEY_Pos)

#define SCB_AIRCR_VECTKEYSTAT_Pos          16U
#define SCB_AIRCR_VECTKEYSTAT_Msk          (0xFFFFUL << SCB_AIRCR_VECTKEYSTAT_Pos)

#define SCB_AIRCR_ENDIANESS_Pos            15U
#define SCB_AIRCR_ENDIANESS_Msk            (1UL << SCB_AIRCR_ENDIANESS_Pos)

#define SCB_AIRCR_PRIS_Pos                 14U
#define SCB_AIRCR_PRIS_Msk                 (1UL << SCB_AIRCR_PRIS_Pos)

#define SCB_AIRCR_BFHFNMINS_Pos            13U
#define SCB_AIRCR_BFHFNMINS_Msk            (1UL << SCB_AIRCR_BFHFNMINS_Pos)

#define SCB_AIRCR_PRIGROUP_Pos              8U
#define SCB_AIRCR_PRIGROUP_Msk             (7UL << SCB_AIRCR_PRIGROUP_Pos)

#define SCB_AIRCR_IESB_Pos                  5U
#define SCB_AIRCR_IESB_Msk                 (1UL << SCB_AIRCR_IESB_Pos)

#define SCB_AIRCR_DIT_Pos                   4U
#define SCB_AIRCR_DIT_Msk                  (1UL << SCB_AIRCR_DIT_Pos)

#define SCB_AIRCR_SYSRESETREQS_Pos          3U
#define SCB_AIRCR_SYSRESETREQS_Msk         (1UL << SCB_AIRCR_SYSRESETREQS_Pos)

#define SCB_AIRCR_SYSRESETREQ_Pos           2U
#define SCB_AIRCR_SYSRESETREQ_Msk          (1UL << SCB_AIRCR_SYSRESETREQ_Pos)

#define SCB_AIRCR_VECTCLRACTIVE_Pos         1U
#define SCB_AIRCR_VECTCLRACTIVE_Msk        (1UL << SCB_AIRCR_VECTCLRACTIVE_Pos)

/* SCB System Control Register Definitions */
#define SCB_SCR_SEVONPEND_Pos               4U
#define SCB_SCR_SEVONPEND_Msk              (1UL << SCB_SCR_SEVONPEND_Pos)

#define SCB_SCR_SLEEPDEEPS_Pos              3U
#define SCB_SCR_SLEEPDEEPS_Msk             (1UL << SCB_SCR_SLEEPDEEPS_Pos)

#define SCB_SCR_SLEEPDEEP_Pos               2U
#define SCB_SCR_SLEEPDEEP_Msk              (1UL << SCB_SCR_SLEEPDEEP_Pos)

#define SCB_SCR_SLEEPONEXIT_Pos             1U
#define SCB_SCR_SLEEPONEXIT_Msk            (1UL << SCB_SCR_SLEEPONEXIT_Pos)

/* SCB Configuration Control Register Definitions */
#define SCB_CCR_TRD_Pos                    20U
#define SCB_CCR_TRD_Msk                    (1UL << SCB_CCR_TRD_Pos)

#define SCB_CCR_LOB_Pos                    19U
#define SCB_CCR_LOB_Msk                    (1UL << SCB_CCR_LOB_Pos)

#define SCB_CCR_BP_Pos                     18U
#define SCB_CCR_BP_Msk                     (1UL << SCB_CCR_BP_Pos)

#define SCB_CCR_IC_Pos                     17U
#define SCB_CCR_IC_Msk                     (1UL << SCB_CCR_IC_Pos)

#define SCB_CCR_DC_Pos                     16U
#define SCB_CCR_DC_Msk                     (1UL << SCB_CCR_DC_Pos)

#define SCB_CCR_STKOFHFNMIGN_Pos           10U
#define SCB_CCR_STKOFHFNMIGN_Msk           (1UL << SCB_CCR_STKOFHFNMIGN_Pos)

#define SCB_CCR_BFHFNMIGN_Pos               8U
#define SCB_CCR_BFHFNMIGN_Msk              (1UL << SCB_CCR_BFHFNMIGN_Pos)

#define SCB_CCR_DIV_0_TRP_Pos               4U
#define SCB_CCR_DIV_0_TRP_Msk              (1UL << SCB_CCR_DIV_0_TRP_Pos)

#define SCB_CCR_UNALIGN_TRP_Pos             3U
#define SCB_CCR_UNALIGN_TRP_Msk            (1UL << SCB_CCR_UNALIGN_TRP_Pos)

#define SCB_CCR_USERSETMPEND_Pos            1U
#define SCB_CCR_USERSETMPEND_Msk           (1UL << SCB_CCR_USERSETMPEND_Pos)

/* SCB System Handler Control and State Register Definitions */
#define SCB_SHCSR_HARDFAULTPENDED_Pos      21U
#define SCB_SHCSR_HARDFAULTPENDED_Msk      (1UL << SCB_SHCSR_HARDFAULTPENDED_Pos)

#define SCB_SHCSR_SECUREFAULTPENDED_Pos    20U
#define SCB_SHCSR_SECUREFAULTPENDED_Msk    (1UL << SCB_SHCSR_SECUREFAULTPENDED_Pos)

#define SCB_SHCSR_SECUREFAULTENA_Pos       19U
#define SCB_SHCSR_SECUREFAULTENA_Msk       (1UL << SCB_SHCSR_SECUREFAULTENA_Pos)

#define SCB_SHCSR_USGFAULTENA_Pos          18U
#define SCB_SHCSR_USGFAULTENA_Msk          (1UL << SCB_SHCSR_USGFAULTENA_Pos)

#define SCB_SHCSR_BUSFAULTENA_Pos          17U
#define SCB_SHCSR_BUSFAULTENA_Msk          (1UL << SCB_SHCSR_BUSFAULTENA_Pos)

#define SCB_SHCSR_MEMFAULTENA_Pos          16U
#define SCB_SHCSR_MEMFAULTENA_Msk          (1UL << SCB_SHCSR_MEMFAULTENA_Pos)

#define SCB_SHCSR_SVCALLPENDED_Pos         15U
#define SCB_SHCSR_SVCALLPENDED_Msk         (1UL << SCB_SHCSR_SVCALLPENDED_Pos)

#define SCB_SHCSR_BUSFAULTPENDED_Pos       14U
#define SCB_SHCSR_BUSFAULTPENDED_Msk       (1UL << SCB_SHCSR_BUSFAULTPENDED_Pos)

#define SCB_SHCSR_MEMFAULTPENDED_Pos       13U
#define SCB_SHCSR_MEMFAULTPENDED_Msk       (1UL << SCB_SHCSR_MEMFAULTPENDED_Pos)

#define SCB_SHCSR_USGFAULTPENDED_Pos       12U
#define SCB_SHCSR_USGFAULTPENDED_Msk       (1UL << SCB_SHCSR_USGFAULTPENDED_Pos)

#define SCB_SHCSR_SYSTICKACT_Pos           11U
#define SCB_SHCSR_SYSTICKACT_Msk           (1UL << SCB_SHCSR_SYSTICKACT_Pos)

#define SCB_SHCSR_PENDSVACT_Pos            10U
#define SCB_SHCSR_PENDSVACT_Msk            (1UL << SCB_SHCSR_PENDSVACT_Pos)

#define SCB_SHCSR_MONITORACT_Pos            8U
#define SCB_SHCSR_MONITORACT_Msk           (1UL << SCB_SHCSR_MONITORACT_Pos)

#define SCB_SHCSR_SVCALLACT_Pos             7U
#define SCB_SHCSR_SVCALLACT_Msk            (1UL << SCB_SHCSR_SVCALLACT_Pos)

#define SCB_SHCSR_NMIACT_Pos                5U
#define SCB_SHCSR_NMIACT_Msk               (1UL << SCB_SHCSR_NMIACT_Pos)

#define SCB_SHCSR_SECUREFAULTACT_Pos        4U
#define SCB_SHCSR_SECUREFAULTACT_Msk       (1UL << SCB_SHCSR_SECUREFAULTACT_Pos)

#define SCB_SHCSR_USGFAULTACT_Pos           3U
#define SCB_SHCSR_USGFAULTACT_Msk          (1UL << SCB_SHCSR_USGFAULTACT_Pos)

#define SCB_SHCSR_HARDFAULTACT_Pos          2U
#define SCB_SHCSR_HARDFAULTACT_Msk         (1UL << SCB_SHCSR_HARDFAULTACT_Pos)

#define SCB_SHCSR_BUSFAULTACT_Pos           1U
#define SCB_SHCSR_BUSFAULTACT_Msk          (1UL << SCB_SHCSR_BUSFAULTACT_Pos)

#define SCB_SHCSR_MEMFAULTACT_Pos           0U
#define SCB_SHCSR_MEMFAULTACT_Msk          (1UL)

/* SCB Configurable Fault Status Register Definitions */
#define SCB_CFSR_USGFAULTSR_Pos            16U
#define SCB_CFSR_USGFAULTSR_Msk            (0xFFFFUL << SCB_CFSR_USGFAULTSR_Pos)

#define SCB_CFSR_BUSFAULTSR_Pos             8U
#define SCB_CFSR_BUSFAULTSR_Msk            (0xFFUL << SCB_CFSR_BUSFAULTSR_Pos)

#define SCB_CFSR_MEMFAULTSR_Pos             0U
#define SCB_CFSR_MEMFAULTSR_Msk            (0xFFUL)

/* MemManage Fault Status Register (part of SCB Configurable Fault Status Register) */
#define SCB_CFSR_MMARVALID_Pos             (SCB_CFSR_MEMFAULTSR_Pos + 7U)
#define SCB_CFSR_MMARVALID_Msk             (1UL << SCB_CFSR_MMARVALID_Pos)

#define SCB_CFSR_MLSPERR_Pos               (SCB_CFSR_MEMFAULTSR_Pos + 5U)
#define SCB_CFSR_MLSPERR_Msk               (1UL << SCB_CFSR_MLSPERR_Pos)

#define SCB_CFSR_MSTKERR_Pos               (SCB_CFSR_MEMFAULTSR_Pos + 4U)
#define SCB_CFSR_MSTKERR_Msk               (1UL << SCB_CFSR_MSTKERR_Pos)

#define SCB_CFSR_MUNSTKERR_Pos             (SCB_CFSR_MEMFAULTSR_Pos + 3U)
#define SCB_CFSR_MUNSTKERR_Msk             (1UL << SCB_CFSR_MUNSTKERR_Pos)

#define SCB_CFSR_DACCVIOL_Pos              (SCB_CFSR_MEMFAULTSR_Pos + 1U)
#define SCB_CFSR_DACCVIOL_Msk              (1UL << SCB_CFSR_DACCVIOL_Pos)

#define SCB_CFSR_IACCVIOL_Pos              (SCB_CFSR_MEMFAULTSR_Pos + 0U)
#define SCB_CFSR_IACCVIOL_Msk              (1UL)

/* BusFault Status Register (part of SCB Configurable Fault Status Register) */
#define SCB_CFSR_BFARVALID_Pos            (SCB_CFSR_BUSFAULTSR_Pos + 7U)
#define SCB_CFSR_BFARVALID_Msk            (1UL << SCB_CFSR_BFARVALID_Pos)

#define SCB_CFSR_LSPERR_Pos               (SCB_CFSR_BUSFAULTSR_Pos + 5U)
#define SCB_CFSR_LSPERR_Msk               (1UL << SCB_CFSR_LSPERR_Pos)

#define SCB_CFSR_STKERR_Pos               (SCB_CFSR_BUSFAULTSR_Pos + 4U)
#define SCB_CFSR_STKERR_Msk               (1UL << SCB_CFSR_STKERR_Pos)

#define SCB_CFSR_UNSTKERR_Pos             (SCB_CFSR_BUSFAULTSR_Pos + 3U)
#define SCB_CFSR_UNSTKERR_Msk             (1UL << SCB_CFSR_UNSTKERR_Pos)

#define SCB_CFSR_IMPRECISERR_Pos          (SCB_CFSR_BUSFAULTSR_Pos + 2U)
#define SCB_CFSR_IMPRECISERR_Msk          (1UL << SCB_CFSR_IMPRECISERR_Pos)

#define SCB_CFSR_PRECISERR_Pos            (SCB_CFSR_BUSFAULTSR_Pos + 1U)
#define SCB_CFSR_PRECISERR_Msk            (1UL << SCB_CFSR_PRECISERR_Pos)

#define SCB_CFSR_IBUSERR_Pos              (SCB_CFSR_BUSFAULTSR_Pos + 0U)
#define SCB_CFSR_IBUSERR_Msk              (1UL << SCB_CFSR_IBUSERR_Pos)

/* UsageFault Status Register (part of SCB Configurable Fault Status Register) */
#define SCB_CFSR_DIVBYZERO_Pos            (SCB_CFSR_USGFAULTSR_Pos + 9U)
#define SCB_CFSR_DIVBYZERO_Msk            (1UL << SCB_CFSR_DIVBYZERO_Pos)

#define SCB_CFSR_UNALIGNED_Pos            (SCB_CFSR_USGFAULTSR_Pos + 8U)
#define SCB_CFSR_UNALIGNED_Msk            (1UL << SCB_CFSR_UNALIGNED_Pos)

#define SCB_CFSR_STKOF_Pos                (SCB_CFSR_USGFAULTSR_Pos + 4U)
#define SCB_CFSR_STKOF_Msk                (1UL << SCB_CFSR_STKOF_Pos)

#define SCB_CFSR_NOCP_Pos                 (SCB_CFSR_USGFAULTSR_Pos + 3U)
#define SCB_CFSR_NOCP_Msk                 (1UL << SCB_CFSR_NOCP_Pos)

#define SCB_CFSR_INVPC_Pos                (SCB_CFSR_USGFAULTSR_Pos + 2U)
#define SCB_CFSR_INVPC_Msk                (1UL << SCB_CFSR_INVPC_Pos)

#define SCB_CFSR_INVSTATE_Pos             (SCB_CFSR_USGFAULTSR_Pos + 1U)
#define SCB_CFSR_INVSTATE_Msk             (1UL << SCB_CFSR_INVSTATE_Pos)

#define SCB_CFSR_UNDEFINSTR_Pos           (SCB_CFSR_USGFAULTSR_Pos + 0U)
#define SCB_CFSR_UNDEFINSTR_Msk           (1UL << SCB_CFSR_UNDEFINSTR_Pos)

/* SCB Hard Fault Status Register Definitions */
#define SCB_HFSR_DEBUGEVT_Pos              31U
#define SCB_HFSR_DEBUGEVT_Msk              (1UL << SCB_HFSR_DEBUGEVT_Pos)

#define SCB_HFSR_FORCED_Pos                30U
#define SCB_HFSR_FORCED_Msk                (1UL << SCB_HFSR_FORCED_Pos)

#define SCB_HFSR_VECTTBL_Pos                1U
#define SCB_HFSR_VECTTBL_Msk               (1UL << SCB_HFSR_VECTTBL_Pos)

/* SCB Debug Fault Status Register Definitions */
#define SCB_DFSR_PMU_Pos                    5U
#define SCB_DFSR_PMU_Msk                   (1UL << SCB_DFSR_PMU_Pos)

#define SCB_DFSR_EXTERNAL_Pos               4U
#define SCB_DFSR_EXTERNAL_Msk              (1UL << SCB_DFSR_EXTERNAL_Pos)

#define SCB_DFSR_VCATCH_Pos                 3U
#define SCB_DFSR_VCATCH_Msk                (1UL << SCB_DFSR_VCATCH_Pos)

#define SCB_DFSR_DWTTRAP_Pos                2U
#define SCB_DFSR_DWTTRAP_Msk               (1UL << SCB_DFSR_DWTTRAP_Pos)

#define SCB_DFSR_BKPT_Pos                   1U
#define SCB_DFSR_BKPT_Msk                  (1UL << SCB_DFSR_BKPT_Pos)

#define SCB_DFSR_HALTED_Pos                 0U
#define SCB_DFSR_HALTED_Msk                (1UL)

/* SCB Non-Secure Access Control Register Definitions */
#define SCB_NSACR_CP11_Pos                 11U
#define SCB_NSACR_CP11_Msk                 (1UL << SCB_NSACR_CP11_Pos)

#define SCB_NSACR_CP10_Pos                 10U
#define SCB_NSACR_CP10_Msk                 (1UL << SCB_NSACR_CP10_Pos)

#define SCB_NSACR_CP7_Pos                   7U
#define SCB_NSACR_CP7_Msk                  (1UL << SCB_NSACR_CP7_Pos)

#define SCB_NSACR_CP6_Pos                   6U
#define SCB_NSACR_CP6_Msk                  (1UL << SCB_NSACR_CP6_Pos)

#define SCB_NSACR_CP5_Pos                   5U
#define SCB_NSACR_CP5_Msk                  (1UL << SCB_NSACR_CP5_Pos)

#define SCB_NSACR_CP4_Pos                   4U
#define SCB_NSACR_CP4_Msk                  (1UL << SCB_NSACR_CP4_Pos)

#define SCB_NSACR_CP3_Pos                   3U
#define SCB_NSACR_CP3_Msk                  (1UL << SCB_NSACR_CP3_Pos)

#define SCB_NSACR_CP2_Pos                   2U
#define SCB_NSACR_CP2_Msk                  (1UL << SCB_NSACR_CP2_Pos)

#define SCB_NSACR_CP1_Pos                   1U
#define SCB_NSACR_CP1_Msk                  (1UL << SCB_NSACR_CP1_Pos)

#define SCB_NSACR_CP0_Pos                   0U
#define SCB_NSACR_CP0_Msk                  (1UL)

/* SCB Debug Feature Register 0 Definitions */
#define SCB_ID_DFR_UDE_Pos                 28U
#define SCB_ID_DFR_UDE_Msk                 (0xFUL << SCB_ID_DFR_UDE_Pos)

#define SCB_ID_DFR_MProfDbg_Pos            20U
#define SCB_ID_DFR_MProfDbg_Msk            (0xFUL << SCB_ID_DFR_MProfDbg_Pos)

/* SCB Cache Level ID Register Definitions */
#define SCB_CLIDR_LOUU_Pos                 27U
#define SCB_CLIDR_LOUU_Msk                 (7UL << SCB_CLIDR_LOUU_Pos)

#define SCB_CLIDR_LOC_Pos                  24U
#define SCB_CLIDR_LOC_Msk                  (7UL << SCB_CLIDR_LOC_Pos)

/* SCB Cache Type Register Definitions */
#define SCB_CTR_FORMAT_Pos                 29U
#define SCB_CTR_FORMAT_Msk                 (7UL << SCB_CTR_FORMAT_Pos)

#define SCB_CTR_CWG_Pos                    24U
#define SCB_CTR_CWG_Msk                    (0xFUL << SCB_CTR_CWG_Pos)

#define SCB_CTR_ERG_Pos                    20U
#define SCB_CTR_ERG_Msk                    (0xFUL << SCB_CTR_ERG_Pos)

#define SCB_CTR_DMINLINE_Pos               16U
#define SCB_CTR_DMINLINE_Msk               (0xFUL << SCB_CTR_DMINLINE_Pos)

#define SCB_CTR_IMINLINE_Pos                0U
#define SCB_CTR_IMINLINE_Msk               (0xFUL)

/* SCB Cache Size ID Register Definitions */
#define SCB_CCSIDR_WT_Pos                  31U
#define SCB_CCSIDR_WT_Msk                  (1UL << SCB_CCSIDR_WT_Pos)

#define SCB_CCSIDR_WB_Pos                  30U
#define SCB_CCSIDR_WB_Msk                  (1UL << SCB_CCSIDR_WB_Pos)

#define SCB_CCSIDR_RA_Pos                  29U
#define SCB_CCSIDR_RA_Msk                  (1UL << SCB_CCSIDR_RA_Pos)

#define SCB_CCSIDR_WA_Pos                  28U
#define SCB_CCSIDR_WA_Msk                  (1UL << SCB_CCSIDR_WA_Pos)

#define SCB_CCSIDR_NUMSETS_Pos             13U
#define SCB_CCSIDR_NUMSETS_Msk             (0x7FFFUL << SCB_CCSIDR_NUMSETS_Pos)

#define SCB_CCSIDR_ASSOCIATIVITY_Pos        3U
#define SCB_CCSIDR_ASSOCIATIVITY_Msk       (0x3FFUL << SCB_CCSIDR_ASSOCIATIVITY_Pos)

#define SCB_CCSIDR_LINESIZE_Pos             0U
#define SCB_CCSIDR_LINESIZE_Msk            (7UL)

/* SCB Cache Size Selection Register Definitions */
#define SCB_CSSELR_LEVEL_Pos                1U
#define SCB_CSSELR_LEVEL_Msk               (7UL << SCB_CSSELR_LEVEL_Pos)

#define SCB_CSSELR_IND_Pos                  0U
#define SCB_CSSELR_IND_Msk                 (1UL)

/* SCB Software Triggered Interrupt Register Definitions */
#define SCB_STIR_INTID_Pos                  0U
#define SCB_STIR_INTID_Msk                 (0x1FFUL)

/* SCB RAS Fault Status Register Definitions */
#define SCB_RFSR_V_Pos                     31U
#define SCB_RFSR_V_Msk                     (1UL << SCB_RFSR_V_Pos)

#define SCB_RFSR_IS_Pos                    16U
#define SCB_RFSR_IS_Msk                    (0x7FFFUL << SCB_RFSR_IS_Pos)

#define SCB_RFSR_UET_Pos                    0U
#define SCB_RFSR_UET_Msk                   (3UL)

/* SCB D-Cache Invalidate by Set-way Register Definitions */
#define SCB_DCISW_WAY_Pos                  30U
#define SCB_DCISW_WAY_Msk                  (3UL << SCB_DCISW_WAY_Pos)

#define SCB_DCISW_SET_Pos                   5U
#define SCB_DCISW_SET_Msk                  (0x1FFUL << SCB_DCISW_SET_Pos)

/* SCB D-Cache Clean by Set-way Register Definitions */
#define SCB_DCCSW_WAY_Pos                  30U
#define SCB_DCCSW_WAY_Msk                  (3UL << SCB_DCCSW_WAY_Pos)

#define SCB_DCCSW_SET_Pos                   5U
#define SCB_DCCSW_SET_Msk                  (0x1FFUL << SCB_DCCSW_SET_Pos)

/* SCB D-Cache Clean and Invalidate by Set-way Register Definitions */
#define SCB_DCCISW_WAY_Pos                 30U
#define SCB_DCCISW_WAY_Msk                 (3UL << SCB_DCCISW_WAY_Pos)

#define SCB_DCCISW_SET_Pos                  5U
#define SCB_DCCISW_SET_Msk                 (0x1FFUL << SCB_DCCISW_SET_Pos)

/*@} end of group CMSIS_SCB */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_ICB Implementation Control Block register (ICB)
  \brief    Type definitions for the Implementation Control Block Register
  @{
 */

/**
  \brief  Structure type to access the Implementation Control Block (ICB).
 */
typedef struct
{
        uint32_t RESERVED0[1U];
  __IM  uint32_t ICTR;
  __IOM uint32_t ACTLR;
  __IOM uint32_t CPPWR;
} ICB_Type;

/* Auxiliary Control Register Definitions */
#define ICB_ACTLR_DISCRITAXIRUW_Pos     27U
#define ICB_ACTLR_DISCRITAXIRUW_Msk     (1UL << ICB_ACTLR_DISCRITAXIRUW_Pos)

#define ICB_ACTLR_DISCRITAXIRUR_Pos     15U
#define ICB_ACTLR_DISCRITAXIRUR_Msk     (1UL << ICB_ACTLR_DISCRITAXIRUR_Pos)

#define ICB_ACTLR_EVENTBUSEN_Pos        14U
#define ICB_ACTLR_EVENTBUSEN_Msk        (1UL << ICB_ACTLR_EVENTBUSEN_Pos)

#define ICB_ACTLR_EVENTBUSEN_S_Pos      13U
#define ICB_ACTLR_EVENTBUSEN_S_Msk      (1UL << ICB_ACTLR_EVENTBUSEN_S_Pos)

#define ICB_ACTLR_DISITMATBFLUSH_Pos    12U
#define ICB_ACTLR_DISITMATBFLUSH_Msk    (1UL << ICB_ACTLR_DISITMATBFLUSH_Pos)

#define ICB_ACTLR_DISNWAMODE_Pos        11U
#define ICB_ACTLR_DISNWAMODE_Msk        (1UL << ICB_ACTLR_DISNWAMODE_Pos)

#define ICB_ACTLR_FPEXCODIS_Pos         10U
#define ICB_ACTLR_FPEXCODIS_Msk         (1UL << ICB_ACTLR_FPEXCODIS_Pos)

/* Interrupt Controller Type Register Definitions */
#define ICB_ICTR_INTLINESNUM_Pos         0U
#define ICB_ICTR_INTLINESNUM_Msk        (0xFUL)

/*@} end of group CMSIS_ICB */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_SysTick     System Tick Timer (SysTick)
  \brief    Type definitions for the System Timer Registers.
  @{
 */

/**
  \brief  Structure type to access the System Timer (SysTick).
 */
typedef struct
{
  __IOM uint32_t CTRL;
  __IOM uint32_t LOAD;
  __IOM uint32_t VAL;
  __IM  uint32_t CALIB;
} SysTick_Type;

/* SysTick Control / Status Register Definitions */
#define SysTick_CTRL_COUNTFLAG_Pos         16U
#define SysTick_CTRL_COUNTFLAG_Msk         (1UL << SysTick_CTRL_COUNTFLAG_Pos)

#define SysTick_CTRL_CLKSOURCE_Pos          2U
#define SysTick_CTRL_CLKSOURCE_Msk         (1UL << SysTick_CTRL_CLKSOURCE_Pos)

#define SysTick_CTRL_TICKINT_Pos            1U
#define SysTick_CTRL_TICKINT_Msk           (1UL << SysTick_CTRL_TICKINT_Pos)

#define SysTick_CTRL_ENABLE_Pos             0U
#define SysTick_CTRL_ENABLE_Msk            (1UL)

/* SysTick Reload Register Definitions */
#define SysTick_LOAD_RELOAD_Pos             0U
#define SysTick_LOAD_RELOAD_Msk            (0xFFFFFFUL)

/* SysTick Current Register Definitions */
#define SysTick_VAL_CURRENT_Pos             0U
#define SysTick_VAL_CURRENT_Msk            (0xFFFFFFUL)

/* SysTick Calibration Register Definitions */
#define SysTick_CALIB_NOREF_Pos            31U
#define SysTick_CALIB_NOREF_Msk            (1UL << SysTick_CALIB_NOREF_Pos)

#define SysTick_CALIB_SKEW_Pos             30U
#define SysTick_CALIB_SKEW_Msk             (1UL << SysTick_CALIB_SKEW_Pos)

#define SysTick_CALIB_TENMS_Pos             0U
#define SysTick_CALIB_TENMS_Msk            (0xFFFFFFUL)

/*@} end of group CMSIS_SysTick */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_ITM     Instrumentation Trace Macrocell (ITM)
  \brief    Type definitions for the Instrumentation Trace Macrocell (ITM)
  @{
 */

/**
  \brief  Structure type to access the Instrumentation Trace Macrocell Register (ITM).
 */
typedef struct
{
  __OM  union
  {
    __OM  uint8_t    u8;
    __OM  uint16_t   u16;
    __OM  uint32_t   u32;
  }  PORT [32U];
        uint32_t RESERVED0[864U];
  __IOM uint32_t TER;
        uint32_t RESERVED1[15U];
  __IOM uint32_t TPR;
        uint32_t RESERVED2[15U];
  __IOM uint32_t TCR;
        uint32_t RESERVED3[32U];
        uint32_t RESERVED4[43U];
  __OM  uint32_t LAR;
  __IM  uint32_t LSR;
        uint32_t RESERVED5[1U];
  __IM  uint32_t DEVARCH;
        uint32_t RESERVED6[3U];
  __IM  uint32_t DEVTYPE;
  __IM  uint32_t PID4;
  __IM  uint32_t PID5;
  __IM  uint32_t PID6;
  __IM  uint32_t PID7;
  __IM  uint32_t PID0;
  __IM  uint32_t PID1;
  __IM  uint32_t PID2;
  __IM  uint32_t PID3;
  __IM  uint32_t CID0;
  __IM  uint32_t CID1;
  __IM  uint32_t CID2;
  __IM  uint32_t CID3;
} ITM_Type;

/* ITM Stimulus Port Register Definitions */
#define ITM_STIM_DISABLED_Pos               1U
#define ITM_STIM_DISABLED_Msk              (0x1UL << ITM_STIM_DISABLED_Pos)

#define ITM_STIM_FIFOREADY_Pos              0U
#define ITM_STIM_FIFOREADY_Msk             (0x1UL)

/* ITM Trace Privilege Register Definitions */
#define ITM_TPR_PRIVMASK_Pos                0U
#define ITM_TPR_PRIVMASK_Msk               (0xFUL)

/* ITM Trace Control Register Definitions */
#define ITM_TCR_BUSY_Pos                   23U
#define ITM_TCR_BUSY_Msk                   (1UL << ITM_TCR_BUSY_Pos)

#define ITM_TCR_TRACEBUSID_Pos             16U
#define ITM_TCR_TRACEBUSID_Msk             (0x7FUL << ITM_TCR_TRACEBUSID_Pos)

#define ITM_TCR_GTSFREQ_Pos                10U
#define ITM_TCR_GTSFREQ_Msk                (3UL << ITM_TCR_GTSFREQ_Pos)

#define ITM_TCR_TSPRESCALE_Pos              8U
#define ITM_TCR_TSPRESCALE_Msk             (3UL << ITM_TCR_TSPRESCALE_Pos)

#define ITM_TCR_STALLENA_Pos                5U
#define ITM_TCR_STALLENA_Msk               (1UL << ITM_TCR_STALLENA_Pos)

#define ITM_TCR_SWOENA_Pos                  4U
#define ITM_TCR_SWOENA_Msk                 (1UL << ITM_TCR_SWOENA_Pos)

#define ITM_TCR_DWTENA_Pos                  3U
#define ITM_TCR_DWTENA_Msk                 (1UL << ITM_TCR_DWTENA_Pos)

#define ITM_TCR_SYNCENA_Pos                 2U
#define ITM_TCR_SYNCENA_Msk                (1UL << ITM_TCR_SYNCENA_Pos)

#define ITM_TCR_TSENA_Pos                   1U
#define ITM_TCR_TSENA_Msk                  (1UL << ITM_TCR_TSENA_Pos)

#define ITM_TCR_ITMENA_Pos                  0U
#define ITM_TCR_ITMENA_Msk                 (1UL)

/* ITM Lock Status Register Definitions */
#define ITM_LSR_ByteAcc_Pos                 2U
#define ITM_LSR_ByteAcc_Msk                (1UL << ITM_LSR_ByteAcc_Pos)

#define ITM_LSR_Access_Pos                  1U
#define ITM_LSR_Access_Msk                 (1UL << ITM_LSR_Access_Pos)

#define ITM_LSR_Present_Pos                 0U
#define ITM_LSR_Present_Msk                (1UL)

/*@}*/ /* end of group CMSIS_ITM */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_DWT     Data Watchpoint and Trace (DWT)
  \brief    Type definitions for the Data Watchpoint and Trace (DWT)
  @{
 */

/**
  \brief  Structure type to access the Data Watchpoint and Trace Register (DWT).
 */
typedef struct
{
  __IOM uint32_t CTRL;
  __IOM uint32_t CYCCNT;
  __IOM uint32_t CPICNT;
  __IOM uint32_t EXCCNT;
  __IOM uint32_t SLEEPCNT;
  __IOM uint32_t LSUCNT;
  __IOM uint32_t FOLDCNT;
  __IM  uint32_t PCSR;
  __IOM uint32_t COMP0;
        uint32_t RESERVED1[1U];
  __IOM uint32_t FUNCTION0;
        uint32_t RESERVED2[1U];
  __IOM uint32_t COMP1;
        uint32_t RESERVED3[1U];
  __IOM uint32_t FUNCTION1;
        uint32_t RESERVED4[1U];
  __IOM uint32_t COMP2;
        uint32_t RESERVED5[1U];
  __IOM uint32_t FUNCTION2;
        uint32_t RESERVED6[1U];
  __IOM uint32_t COMP3;
        uint32_t RESERVED7[1U];
  __IOM uint32_t FUNCTION3;
        uint32_t RESERVED8[1U];
  __IOM uint32_t COMP4;
        uint32_t RESERVED9[1U];
  __IOM uint32_t FUNCTION4;
        uint32_t RESERVED10[1U];
  __IOM uint32_t COMP5;
        uint32_t RESERVED11[1U];
  __IOM uint32_t FUNCTION5;
        uint32_t RESERVED12[1U];
  __IOM uint32_t COMP6;
        uint32_t RESERVED13[1U];
  __IOM uint32_t FUNCTION6;
        uint32_t RESERVED14[1U];
  __IOM uint32_t COMP7;
        uint32_t RESERVED15[1U];
  __IOM uint32_t FUNCTION7;
        uint32_t RESERVED16[1U];
  __IOM uint32_t COMP8;
        uint32_t RESERVED17[1U];
  __IOM uint32_t FUNCTION8;
        uint32_t RESERVED18[1U];
  __IOM uint32_t COMP9;
        uint32_t RESERVED19[1U];
  __IOM uint32_t FUNCTION9;
        uint32_t RESERVED20[1U];
  __IOM uint32_t COMP10;
        uint32_t RESERVED21[1U];
  __IOM uint32_t FUNCTION10;
        uint32_t RESERVED22[1U];
  __IOM uint32_t COMP11;
        uint32_t RESERVED23[1U];
  __IOM uint32_t FUNCTION11;
        uint32_t RESERVED24[1U];
  __IOM uint32_t COMP12;
        uint32_t RESERVED25[1U];
  __IOM uint32_t FUNCTION12;
        uint32_t RESERVED26[1U];
  __IOM uint32_t COMP13;
        uint32_t RESERVED27[1U];
  __IOM uint32_t FUNCTION13;
        uint32_t RESERVED28[1U];
  __IOM uint32_t COMP14;
        uint32_t RESERVED29[1U];
  __IOM uint32_t FUNCTION14;
        uint32_t RESERVED30[1U];
  __IOM uint32_t COMP15;
        uint32_t RESERVED31[1U];
  __IOM uint32_t FUNCTION15;
        uint32_t RESERVED32[934U];
  __IM  uint32_t LSR;
        uint32_t RESERVED33[1U];
  __IM  uint32_t DEVARCH;
} DWT_Type;

/* DWT Control Register Definitions */
#define DWT_CTRL_NUMCOMP_Pos               28U
#define DWT_CTRL_NUMCOMP_Msk               (0xFUL << DWT_CTRL_NUMCOMP_Pos)

#define DWT_CTRL_NOTRCPKT_Pos              27U
#define DWT_CTRL_NOTRCPKT_Msk              (0x1UL << DWT_CTRL_NOTRCPKT_Pos)

#define DWT_CTRL_NOEXTTRIG_Pos             26U
#define DWT_CTRL_NOEXTTRIG_Msk             (0x1UL << DWT_CTRL_NOEXTTRIG_Pos)

#define DWT_CTRL_NOCYCCNT_Pos              25U
#define DWT_CTRL_NOCYCCNT_Msk              (0x1UL << DWT_CTRL_NOCYCCNT_Pos)

#define DWT_CTRL_NOPRFCNT_Pos              24U
#define DWT_CTRL_NOPRFCNT_Msk              (0x1UL << DWT_CTRL_NOPRFCNT_Pos)

#define DWT_CTRL_CYCDISS_Pos               23U
#define DWT_CTRL_CYCDISS_Msk               (0x1UL << DWT_CTRL_CYCDISS_Pos)

#define DWT_CTRL_CYCEVTENA_Pos             22U
#define DWT_CTRL_CYCEVTENA_Msk             (0x1UL << DWT_CTRL_CYCEVTENA_Pos)

#define DWT_CTRL_FOLDEVTENA_Pos            21U
#define DWT_CTRL_FOLDEVTENA_Msk            (0x1UL << DWT_CTRL_FOLDEVTENA_Pos)

#define DWT_CTRL_LSUEVTENA_Pos             20U
#define DWT_CTRL_LSUEVTENA_Msk             (0x1UL << DWT_CTRL_LSUEVTENA_Pos)

#define DWT_CTRL_SLEEPEVTENA_Pos           19U
#define DWT_CTRL_SLEEPEVTENA_Msk           (0x1UL << DWT_CTRL_SLEEPEVTENA_Pos)

#define DWT_CTRL_EXCEVTENA_Pos             18U
#define DWT_CTRL_EXCEVTENA_Msk             (0x1UL << DWT_CTRL_EXCEVTENA_Pos)

#define DWT_CTRL_CPIEVTENA_Pos             17U
#define DWT_CTRL_CPIEVTENA_Msk             (0x1UL << DWT_CTRL_CPIEVTENA_Pos)

#define DWT_CTRL_EXCTRCENA_Pos             16U
#define DWT_CTRL_EXCTRCENA_Msk             (0x1UL << DWT_CTRL_EXCTRCENA_Pos)

#define DWT_CTRL_PCSAMPLENA_Pos            12U
#define DWT_CTRL_PCSAMPLENA_Msk            (0x1UL << DWT_CTRL_PCSAMPLENA_Pos)

#define DWT_CTRL_SYNCTAP_Pos               10U
#define DWT_CTRL_SYNCTAP_Msk               (0x3UL << DWT_CTRL_SYNCTAP_Pos)

#define DWT_CTRL_CYCTAP_Pos                 9U
#define DWT_CTRL_CYCTAP_Msk                (0x1UL << DWT_CTRL_CYCTAP_Pos)

#define DWT_CTRL_POSTINIT_Pos               5U
#define DWT_CTRL_POSTINIT_Msk              (0xFUL << DWT_CTRL_POSTINIT_Pos)

#define DWT_CTRL_POSTPRESET_Pos             1U
#define DWT_CTRL_POSTPRESET_Msk            (0xFUL << DWT_CTRL_POSTPRESET_Pos)

#define DWT_CTRL_CYCCNTENA_Pos              0U
#define DWT_CTRL_CYCCNTENA_Msk             (0x1UL)

/* DWT CPI Count Register Definitions */
#define DWT_CPICNT_CPICNT_Pos               0U
#define DWT_CPICNT_CPICNT_Msk              (0xFFUL)

/* DWT Exception Overhead Count Register Definitions */
#define DWT_EXCCNT_EXCCNT_Pos               0U
#define DWT_EXCCNT_EXCCNT_Msk              (0xFFUL)

/* DWT Sleep Count Register Definitions */
#define DWT_SLEEPCNT_SLEEPCNT_Pos           0U
#define DWT_SLEEPCNT_SLEEPCNT_Msk          (0xFFUL)

/* DWT LSU Count Register Definitions */
#define DWT_LSUCNT_LSUCNT_Pos               0U
#define DWT_LSUCNT_LSUCNT_Msk              (0xFFUL)

/* DWT Folded-instruction Count Register Definitions */
#define DWT_FOLDCNT_FOLDCNT_Pos             0U
#define DWT_FOLDCNT_FOLDCNT_Msk            (0xFFUL)

/* DWT Comparator Function Register Definitions */
#define DWT_FUNCTION_ID_Pos                27U
#define DWT_FUNCTION_ID_Msk                (0x1FUL << DWT_FUNCTION_ID_Pos)

#define DWT_FUNCTION_MATCHED_Pos           24U
#define DWT_FUNCTION_MATCHED_Msk           (0x1UL << DWT_FUNCTION_MATCHED_Pos)

#define DWT_FUNCTION_DATAVSIZE_Pos         10U
#define DWT_FUNCTION_DATAVSIZE_Msk         (0x3UL << DWT_FUNCTION_DATAVSIZE_Pos)

#define DWT_FUNCTION_ACTION_Pos             4U
#define DWT_FUNCTION_ACTION_Msk            (0x1UL << DWT_FUNCTION_ACTION_Pos)

#define DWT_FUNCTION_MATCH_Pos              0U
#define DWT_FUNCTION_MATCH_Msk             (0xFUL)

/*@}*/ /* end of group CMSIS_DWT */


/**
  \ingroup  CMSIS_core_register
  \defgroup MemSysCtl_Type     Memory System Control Registers (IMPLEMENTATION DEFINED)
  \brief    Type definitions for the Memory System Control Registers (MEMSYSCTL)
  @{
 */

/**
  \brief  Structure type to access the Memory System Control Registers (MEMSYSCTL).
 */
typedef struct
{
  __IOM uint32_t MSCR;
  __IOM uint32_t PFCR;
        uint32_t RESERVED1[2U];
  __IOM uint32_t ITCMCR;
  __IOM uint32_t DTCMCR;
  __IOM uint32_t PAHBCR;
        uint32_t RESERVED2[313U];
  __IOM uint32_t ITGU_CTRL;
  __IOM uint32_t ITGU_CFG;
        uint32_t RESERVED3[2U];
  __IOM uint32_t ITGU_LUT[16U];
        uint32_t RESERVED4[44U];
  __IOM uint32_t DTGU_CTRL;
  __IOM uint32_t DTGU_CFG;
        uint32_t RESERVED5[2U];
  __IOM uint32_t DTGU_LUT[16U];
} MemSysCtl_Type;

/* MEMSYSCTL Memory System Control Register (MSCR) Register Definitions */
#define MEMSYSCTL_MSCR_CPWRDN_Pos          17U
#define MEMSYSCTL_MSCR_CPWRDN_Msk          (0x1UL << MEMSYSCTL_MSCR_CPWRDN_Pos)

#define MEMSYSCTL_MSCR_DCCLEAN_Pos         16U
#define MEMSYSCTL_MSCR_DCCLEAN_Msk         (0x1UL << MEMSYSCTL_MSCR_DCCLEAN_Pos)

#define MEMSYSCTL_MSCR_ICACTIVE_Pos        13U
#define MEMSYSCTL_MSCR_ICACTIVE_Msk        (0x1UL << MEMSYSCTL_MSCR_ICACTIVE_Pos)

#define MEMSYSCTL_MSCR_DCACTIVE_Pos        12U
#define MEMSYSCTL_MSCR_DCACTIVE_Msk        (0x1UL << MEMSYSCTL_MSCR_DCACTIVE_Pos)

#define MEMSYSCTL_MSCR_EVECCFAULT_Pos       3U
#define MEMSYSCTL_MSCR_EVECCFAULT_Msk      (0x1UL << MEMSYSCTL_MSCR_EVECCFAULT_Pos)

#define MEMSYSCTL_MSCR_FORCEWT_Pos          2U
#define MEMSYSCTL_MSCR_FORCEWT_Msk         (0x1UL << MEMSYSCTL_MSCR_FORCEWT_Pos)

#define MEMSYSCTL_MSCR_ECCEN_Pos            1U
#define MEMSYSCTL_MSCR_ECCEN_Msk           (0x1UL << MEMSYSCTL_MSCR_ECCEN_Pos)

/* MEMSYSCTL Prefetcher Control Register (PFCR) Register Definitions */
#define MEMSYSCTL_PFCR_DIS_NLP_Pos          7U
#define MEMSYSCTL_PFCR_DIS_NLP_Msk         (0x1UL << MEMSYSCTL_PFCR_DIS_NLP_Pos)

#define MEMSYSCTL_PFCR_ENABLE_Pos           0U
#define MEMSYSCTL_PFCR_ENABLE_Msk          (0x1UL)

/* MEMSYSCTL ITCM Control Register (ITCMCR) Register Definitions */
#define MEMSYSCTL_ITCMCR_SZ_Pos             3U
#define MEMSYSCTL_ITCMCR_SZ_Msk            (0xFUL << MEMSYSCTL_ITCMCR_SZ_Pos)

#define MEMSYSCTL_ITCMCR_EN_Pos             0U
#define MEMSYSCTL_ITCMCR_EN_Msk            (0x1UL)

/* MEMSYSCTL DTCM Control Register (DTCMCR) Register Definitions */
#define MEMSYSCTL_DTCMCR_SZ_Pos             3U
#define MEMSYSCTL_DTCMCR_SZ_Msk            (0xFUL << MEMSYSCTL_DTCMCR_SZ_Pos)

#define MEMSYSCTL_DTCMCR_EN_Pos             0U
#define MEMSYSCTL_DTCMCR_EN_Msk            (0x1UL)

/* MEMSYSCTL P-AHB Control Register (PAHBCR) Register Definitions */
#define MEMSYSCTL_PAHBCR_SZ_Pos             1U
#define MEMSYSCTL_PAHBCR_SZ_Msk            (0x7UL << MEMSYSCTL_PAHBCR_SZ_Pos)

#define MEMSYSCTL_PAHBCR_EN_Pos             0U
#define MEMSYSCTL_PAHBCR_EN_Msk            (0x1UL)

/* MEMSYSCTL ITGU Control Register (ITGU_CTRL) Register Definitions */
#define MEMSYSCTL_ITGU_CTRL_DEREN_Pos       1U
#define MEMSYSCTL_ITGU_CTRL_DEREN_Msk      (0x1UL << MEMSYSCTL_ITGU_CTRL_DEREN_Pos)

#define MEMSYSCTL_ITGU_CTRL_DBFEN_Pos       0U
#define MEMSYSCTL_ITGU_CTRL_DBFEN_Msk      (0x1UL)

/* MEMSYSCTL ITGU Configuration Register (ITGU_CFG) Register Definitions */
#define MEMSYSCTL_ITGU_CFG_PRESENT_Pos     31U
#define MEMSYSCTL_ITGU_CFG_PRESENT_Msk     (0x1UL << MEMSYSCTL_ITGU_CFG_PRESENT_Pos)

#define MEMSYSCTL_ITGU_CFG_NUMBLKS_Pos      8U
#define MEMSYSCTL_ITGU_CFG_NUMBLKS_Msk     (0xFUL << MEMSYSCTL_ITGU_CFG_NUMBLKS_Pos)

#define MEMSYSCTL_ITGU_CFG_BLKSZ_Pos        0U
#define MEMSYSCTL_ITGU_CFG_BLKSZ_Msk       (0xFUL)

/* MEMSYSCTL DTGU Control Registers (DTGU_CTRL) Register Definitions */
#define MEMSYSCTL_DTGU_CTRL_DEREN_Pos       1U
#define MEMSYSCTL_DTGU_CTRL_DEREN_Msk      (0x1UL << MEMSYSCTL_DTGU_CTRL_DEREN_Pos)

#define MEMSYSCTL_DTGU_CTRL_DBFEN_Pos       0U
#define MEMSYSCTL_DTGU_CTRL_DBFEN_Msk      (0x1UL)

/* MEMSYSCTL DTGU Configuration Register (DTGU_CFG) Register Definitions */
#define MEMSYSCTL_DTGU_CFG_PRESENT_Pos     31U
#define MEMSYSCTL_DTGU_CFG_PRESENT_Msk     (0x1UL << MEMSYSCTL_DTGU_CFG_PRESENT_Pos)

#define MEMSYSCTL_DTGU_CFG_NUMBLKS_Pos      8U
#define MEMSYSCTL_DTGU_CFG_NUMBLKS_Msk     (0xFUL << MEMSYSCTL_DTGU_CFG_NUMBLKS_Pos)

#define MEMSYSCTL_DTGU_CFG_BLKSZ_Pos        0U
#define MEMSYSCTL_DTGU_CFG_BLKSZ_Msk       (0xFUL)


/*@}*/ /* end of group MemSysCtl_Type */


/**
  \ingroup  CMSIS_core_register
  \defgroup PwrModCtl_Type     Power Mode Control Registers
  \brief    Type definitions for the Power Mode Control Registers (PWRMODCTL)
  @{
 */

/**
  \brief  Structure type to access the Power Mode Control Registers (PWRMODCTL).
 */
typedef struct
{
  __IOM uint32_t CPDLPSTATE;
  __IOM uint32_t DPDLPSTATE;
} PwrModCtl_Type;

/* PWRMODCTL Core Power Domain Low Power State (CPDLPSTATE) Register Definitions */
#define PWRMODCTL_CPDLPSTATE_RLPSTATE_Pos   8U
#define PWRMODCTL_CPDLPSTATE_RLPSTATE_Msk  (0x3UL << PWRMODCTL_CPDLPSTATE_RLPSTATE_Pos)

#define PWRMODCTL_CPDLPSTATE_ELPSTATE_Pos   4U
#define PWRMODCTL_CPDLPSTATE_ELPSTATE_Msk  (0x3UL << PWRMODCTL_CPDLPSTATE_ELPSTATE_Pos)

#define PWRMODCTL_CPDLPSTATE_CLPSTATE_Pos   0U
#define PWRMODCTL_CPDLPSTATE_CLPSTATE_Msk  (0x3UL)

/* PWRMODCTL Debug Power Domain Low Power State (DPDLPSTATE) Register Definitions */
#define PWRMODCTL_DPDLPSTATE_DLPSTATE_Pos   0U
#define PWRMODCTL_DPDLPSTATE_DLPSTATE_Msk  (0x3UL)

/*@}*/ /* end of group PwrModCtl_Type */


/**
  \ingroup  CMSIS_core_register
  \defgroup EWIC_Type     External Wakeup Interrupt Controller Registers
  \brief    Type definitions for the External Wakeup Interrupt Controller Registers (EWIC)
  @{
 */

/**
  \brief  Structure type to access the External Wakeup Interrupt Controller Registers (EWIC).
 */
typedef struct
{
  __OM  uint32_t EVENTSPR;
        uint32_t RESERVED0[31U];
  __IM  uint32_t EVENTMASKA;
  __IM  uint32_t EVENTMASK[15];
} EWIC_Type;

/* EWIC External Wakeup Interrupt Controller (EVENTSPR) Register Definitions */
#define EWIC_EVENTSPR_EDBGREQ_Pos   2U
#define EWIC_EVENTSPR_EDBGREQ_Msk  (0x1UL << EWIC_EVENTSPR_EDBGREQ_Pos)

#define EWIC_EVENTSPR_NMI_Pos   1U
#define EWIC_EVENTSPR_NMI_Msk  (0x1UL << EWIC_EVENTSPR_NMI_Pos)

#define EWIC_EVENTSPR_EVENT_Pos   0U
#define EWIC_EVENTSPR_EVENT_Msk  (0x1UL)

/* EWIC External Wakeup Interrupt Controller (EVENTMASKA) Register Definitions */
#define EWIC_EVENTMASKA_EDBGREQ_Pos   2U
#define EWIC_EVENTMASKA_EDBGREQ_Msk  (0x1UL << EWIC_EVENTMASKA_EDBGREQ_Pos)

#define EWIC_EVENTMASKA_NMI_Pos   1U
#define EWIC_EVENTMASKA_NMI_Msk  (0x1UL << EWIC_EVENTMASKA_NMI_Pos)

#define EWIC_EVENTMASKA_EVENT_Pos   0U
#define EWIC_EVENTMASKA_EVENT_Msk  (0x1UL)

/* EWIC External Wakeup Interrupt Controller (EVENTMASK) Register Definitions */
#define EWIC_EVENTMASK_IRQ_Pos   0U
#define EWIC_EVENTMASK_IRQ_Msk  (0xFFFFFFFFUL)

/*@}*/ /* end of group EWIC_Type */


/**
  \ingroup  CMSIS_core_register
  \defgroup ErrBnk_Type     Error Banking Registers (IMPLEMENTATION DEFINED)
  \brief    Type definitions for the Error Banking Registers (ERRBNK)
  @{
 */

/**
  \brief  Structure type to access the Error Banking Registers (ERRBNK).
 */
typedef struct
{
  __IOM uint32_t IEBR0;
  __IOM uint32_t IEBR1;
        uint32_t RESERVED0[2U];
  __IOM uint32_t DEBR0;
  __IOM uint32_t DEBR1;
        uint32_t RESERVED1[2U];
  __IOM uint32_t TEBR0;
        uint32_t RESERVED2[1U];
  __IOM uint32_t TEBR1;
} ErrBnk_Type;

/* ERRBNK Instruction Cache Error Bank Register 0 (IEBR0) Register Definitions */
#define ERRBNK_IEBR0_SWDEF_Pos             30U
#define ERRBNK_IEBR0_SWDEF_Msk             (0x3UL << ERRBNK_IEBR0_SWDEF_Pos)

#define ERRBNK_IEBR0_BANK_Pos              16U
#define ERRBNK_IEBR0_BANK_Msk              (0x1UL << ERRBNK_IEBR0_BANK_Pos)

#define ERRBNK_IEBR0_LOCATION_Pos           2U
#define ERRBNK_IEBR0_LOCATION_Msk          (0x3FFFUL << ERRBNK_IEBR0_LOCATION_Pos)

#define ERRBNK_IEBR0_LOCKED_Pos             1U
#define ERRBNK_IEBR0_LOCKED_Msk            (0x1UL << ERRBNK_IEBR0_LOCKED_Pos)

#define ERRBNK_IEBR0_VALID_Pos              0U
#define ERRBNK_IEBR0_VALID_Msk             (0x1UL <<)

/* ERRBNK Instruction Cache Error Bank Register 1 (IEBR1) Register Definitions */
#define ERRBNK_IEBR1_SWDEF_Pos             30U
#define ERRBNK_IEBR1_SWDEF_Msk             (0x3UL << ERRBNK_IEBR1_SWDEF_Pos)

#define ERRBNK_IEBR1_BANK_Pos              16U
#define ERRBNK_IEBR1_BANK_Msk              (0x1UL << ERRBNK_IEBR1_BANK_Pos)

#define ERRBNK_IEBR1_LOCATION_Pos           2U
#define ERRBNK_IEBR1_LOCATION_Msk          (0x3FFFUL << ERRBNK_IEBR1_LOCATION_Pos)

#define ERRBNK_IEBR1_LOCKED_Pos             1U
#define ERRBNK_IEBR1_LOCKED_Msk            (0x1UL << ERRBNK_IEBR1_LOCKED_Pos)

#define ERRBNK_IEBR1_VALID_Pos              0U
#define ERRBNK_IEBR1_VALID_Msk             (0x1UL <<)

/* ERRBNK Data Cache Error Bank Register 0 (DEBR0) Register Definitions */
#define ERRBNK_DEBR0_SWDEF_Pos             30U
#define ERRBNK_DEBR0_SWDEF_Msk             (0x3UL << ERRBNK_DEBR0_SWDEF_Pos)

#define ERRBNK_DEBR0_TYPE_Pos              17U
#define ERRBNK_DEBR0_TYPE_Msk              (0x1UL << ERRBNK_DEBR0_TYPE_Pos)

#define ERRBNK_DEBR0_BANK_Pos              16U
#define ERRBNK_DEBR0_BANK_Msk              (0x1UL << ERRBNK_DEBR0_BANK_Pos)

#define ERRBNK_DEBR0_LOCATION_Pos           2U
#define ERRBNK_DEBR0_LOCATION_Msk          (0x3FFFUL << ERRBNK_DEBR0_LOCATION_Pos)

#define ERRBNK_DEBR0_LOCKED_Pos             1U
#define ERRBNK_DEBR0_LOCKED_Msk            (0x1UL << ERRBNK_DEBR0_LOCKED_Pos)

#define ERRBNK_DEBR0_VALID_Pos              0U
#define ERRBNK_DEBR0_VALID_Msk             (0x1UL <<)

/* ERRBNK Data Cache Error Bank Register 1 (DEBR1) Register Definitions */
#define ERRBNK_DEBR1_SWDEF_Pos             30U
#define ERRBNK_DEBR1_SWDEF_Msk             (0x3UL << ERRBNK_DEBR1_SWDEF_Pos)

#define ERRBNK_DEBR1_TYPE_Pos              17U
#define ERRBNK_DEBR1_TYPE_Msk              (0x1UL << ERRBNK_DEBR1_TYPE_Pos)

#define ERRBNK_DEBR1_BANK_Pos              16U
#define ERRBNK_DEBR1_BANK_Msk              (0x1UL << ERRBNK_DEBR1_BANK_Pos)

#define ERRBNK_DEBR1_LOCATION_Pos           2U
#define ERRBNK_DEBR1_LOCATION_Msk          (0x3FFFUL << ERRBNK_DEBR1_LOCATION_Pos)

#define ERRBNK_DEBR1_LOCKED_Pos             1U
#define ERRBNK_DEBR1_LOCKED_Msk            (0x1UL << ERRBNK_DEBR1_LOCKED_Pos)

#define ERRBNK_DEBR1_VALID_Pos              0U
#define ERRBNK_DEBR1_VALID_Msk             (0x1UL <<)

/* ERRBNK TCM Error Bank Register 0 (TEBR0) Register Definitions */
#define ERRBNK_TEBR0_SWDEF_Pos             30U
#define ERRBNK_TEBR0_SWDEF_Msk             (0x3UL << ERRBNK_TEBR0_SWDEF_Pos)

#define ERRBNK_TEBR0_POISON_Pos            28U
#define ERRBNK_TEBR0_POISON_Msk            (0x1UL << ERRBNK_TEBR0_POISON_Pos)

#define ERRBNK_TEBR0_TYPE_Pos              27U
#define ERRBNK_TEBR0_TYPE_Msk              (0x1UL << ERRBNK_TEBR0_TYPE_Pos)

#define ERRBNK_TEBR0_BANK_Pos              24U
#define ERRBNK_TEBR0_BANK_Msk              (0x3UL << ERRBNK_TEBR0_BANK_Pos)

#define ERRBNK_TEBR0_LOCATION_Pos           2U
#define ERRBNK_TEBR0_LOCATION_Msk          (0x3FFFFFUL << ERRBNK_TEBR0_LOCATION_Pos)

#define ERRBNK_TEBR0_LOCKED_Pos             1U
#define ERRBNK_TEBR0_LOCKED_Msk            (0x1UL << ERRBNK_TEBR0_LOCKED_Pos)

#define ERRBNK_TEBR0_VALID_Pos              0U
#define ERRBNK_TEBR0_VALID_Msk             (0x1UL <<)

/* ERRBNK TCM Error Bank Register 1 (TEBR1) Register Definitions */
#define ERRBNK_TEBR1_SWDEF_Pos             30U
#define ERRBNK_TEBR1_SWDEF_Msk             (0x3UL << ERRBNK_TEBR1_SWDEF_Pos)

#define ERRBNK_TEBR1_POISON_Pos            28U
#define ERRBNK_TEBR1_POISON_Msk            (0x1UL << ERRBNK_TEBR1_POISON_Pos)

#define ERRBNK_TEBR1_TYPE_Pos              27U
#define ERRBNK_TEBR1_TYPE_Msk              (0x1UL << ERRBNK_TEBR1_TYPE_Pos)

#define ERRBNK_TEBR1_BANK_Pos              24U
#define ERRBNK_TEBR1_BANK_Msk              (0x3UL << ERRBNK_TEBR1_BANK_Pos)

#define ERRBNK_TEBR1_LOCATION_Pos           2U
#define ERRBNK_TEBR1_LOCATION_Msk          (0x3FFFFFUL << ERRBNK_TEBR1_LOCATION_Pos)

#define ERRBNK_TEBR1_LOCKED_Pos             1U
#define ERRBNK_TEBR1_LOCKED_Msk            (0x1UL << ERRBNK_TEBR1_LOCKED_Pos)

#define ERRBNK_TEBR1_VALID_Pos              0U
#define ERRBNK_TEBR1_VALID_Msk             (0x1UL <<)

/*@}*/ /* end of group ErrBnk_Type */


/**
  \ingroup  CMSIS_core_register
  \defgroup PrcCfgInf_Type     Processor Configuration Information Registers (IMPLEMENTATION DEFINED)
  \brief    Type definitions for the Processor Configuration Information Registerss (PRCCFGINF)
  @{
 */

/**
  \brief  Structure type to access the Processor Configuration Information Registerss (PRCCFGINF).
 */
typedef struct
{
  __OM  uint32_t CFGINFOSEL;
  __IM  uint32_t CFGINFORD;
} PrcCfgInf_Type;

/* PRCCFGINF Processor Configuration Information Selection Register (CFGINFOSEL) Definitions */

/* PRCCFGINF Processor Configuration Information Read Data Register (CFGINFORD) Definitions */

/*@}*/ /* end of group PrcCfgInf_Type */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_TPI     Trace Port Interface (TPI)
  \brief    Type definitions for the Trace Port Interface (TPI)
  @{
 */

/**
  \brief  Structure type to access the Trace Port Interface Register (TPI).
 */
typedef struct
{
  __IM  uint32_t SSPSR;
  __IOM uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  __IOM uint32_t ACPR;
        uint32_t RESERVED1[55U];
  __IOM uint32_t SPPR;
        uint32_t RESERVED2[131U];
  __IM  uint32_t FFSR;
  __IOM uint32_t FFCR;
  __IOM uint32_t PSCR;
        uint32_t RESERVED3[809U];
  __OM  uint32_t LAR;
  __IM  uint32_t LSR;
        uint32_t RESERVED4[4U];
  __IM  uint32_t TYPE;
  __IM  uint32_t DEVTYPE;
} TPI_Type;

/* TPI Asynchronous Clock Prescaler Register Definitions */
#define TPI_ACPR_SWOSCALER_Pos              0U
#define TPI_ACPR_SWOSCALER_Msk             (0xFFFFUL)

/* TPI Selected Pin Protocol Register Definitions */
#define TPI_SPPR_TXMODE_Pos                 0U
#define TPI_SPPR_TXMODE_Msk                (0x3UL)

/* TPI Formatter and Flush Status Register Definitions */
#define TPI_FFSR_FtNonStop_Pos              3U
#define TPI_FFSR_FtNonStop_Msk             (0x1UL << TPI_FFSR_FtNonStop_Pos)

#define TPI_FFSR_TCPresent_Pos              2U
#define TPI_FFSR_TCPresent_Msk             (0x1UL << TPI_FFSR_TCPresent_Pos)

#define TPI_FFSR_FtStopped_Pos              1U
#define TPI_FFSR_FtStopped_Msk             (0x1UL << TPI_FFSR_FtStopped_Pos)

#define TPI_FFSR_FlInProg_Pos               0U
#define TPI_FFSR_FlInProg_Msk              (0x1UL)

/* TPI Formatter and Flush Control Register Definitions */
#define TPI_FFCR_TrigIn_Pos                 8U
#define TPI_FFCR_TrigIn_Msk                (0x1UL << TPI_FFCR_TrigIn_Pos)

#define TPI_FFCR_FOnMan_Pos                 6U
#define TPI_FFCR_FOnMan_Msk                (0x1UL << TPI_FFCR_FOnMan_Pos)

#define TPI_FFCR_EnFmt_Pos                  0U
#define TPI_FFCR_EnFmt_Msk                 (0x3UL <<)

/* TPI Periodic Synchronization Control Register Definitions */
#define TPI_PSCR_PSCount_Pos                0U
#define TPI_PSCR_PSCount_Msk               (0x1FUL)

/* TPI Software Lock Status Register Definitions */
#define TPI_LSR_nTT_Pos                     1U
#define TPI_LSR_nTT_Msk                    (0x1UL << TPI_LSR_nTT_Pos)

#define TPI_LSR_SLK_Pos                     1U
#define TPI_LSR_SLK_Msk                    (0x1UL << TPI_LSR_SLK_Pos)

#define TPI_LSR_SLI_Pos                     0U
#define TPI_LSR_SLI_Msk                    (0x1UL)

/* TPI DEVID Register Definitions */
#define TPI_DEVID_NRZVALID_Pos             11U
#define TPI_DEVID_NRZVALID_Msk             (0x1UL << TPI_DEVID_NRZVALID_Pos)

#define TPI_DEVID_MANCVALID_Pos            10U
#define TPI_DEVID_MANCVALID_Msk            (0x1UL << TPI_DEVID_MANCVALID_Pos)

#define TPI_DEVID_PTINVALID_Pos             9U
#define TPI_DEVID_PTINVALID_Msk            (0x1UL << TPI_DEVID_PTINVALID_Pos)

#define TPI_DEVID_FIFOSZ_Pos                6U
#define TPI_DEVID_FIFOSZ_Msk               (0x7UL << TPI_DEVID_FIFOSZ_Pos)

/* TPI DEVTYPE Register Definitions */
#define TPI_DEVTYPE_SubType_Pos             4U
#define TPI_DEVTYPE_SubType_Msk            (0xFUL)

#define TPI_DEVTYPE_MajorType_Pos           0U
#define TPI_DEVTYPE_MajorType_Msk          (0xFUL << TPI_DEVTYPE_MajorType_Pos)

/*@}*/ /* end of group CMSIS_TPI */

#if defined (__PMU_PRESENT) && (__PMU_PRESENT == 1U)
/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_PMU     Performance Monitoring Unit (PMU)
  \brief    Type definitions for the Performance Monitoring Unit (PMU)
  @{
 */

/**
  \brief  Structure type to access the Performance Monitoring Unit (PMU).
 */
typedef struct
{
  __IOM uint32_t EVCNTR[__PMU_NUM_EVENTCNT];
#if __PMU_NUM_EVENTCNT<31
        uint32_t RESERVED0[31U-__PMU_NUM_EVENTCNT];
#endif
  __IOM uint32_t CCNTR;
        uint32_t RESERVED1[224];
  __IOM uint32_t EVTYPER[__PMU_NUM_EVENTCNT];
#if __PMU_NUM_EVENTCNT<31
        uint32_t RESERVED2[31U-__PMU_NUM_EVENTCNT];
#endif
  __IOM uint32_t CCFILTR;
        uint32_t RESERVED3[480];
  __IOM uint32_t CNTENSET;
        uint32_t RESERVED4[7];
  __IOM uint32_t CNTENCLR;
        uint32_t RESERVED5[7];
  __IOM uint32_t INTENSET;
        uint32_t RESERVED6[7];
  __IOM uint32_t INTENCLR;
        uint32_t RESERVED7[7];
  __IOM uint32_t OVSCLR;
        uint32_t RESERVED8[7];
  __IOM uint32_t SWINC;
        uint32_t RESERVED9[7];
  __IOM uint32_t OVSSET;
        uint32_t RESERVED10[79];
  __IOM uint32_t TYPE;
  __IOM uint32_t CTRL;
        uint32_t RESERVED11[108];
  __IOM uint32_t AUTHSTATUS;
  __IOM uint32_t DEVARCH;
        uint32_t RESERVED12[3];
  __IOM uint32_t DEVTYPE;
  __IOM uint32_t PIDR4;
        uint32_t RESERVED13[3];
  __IOM uint32_t PIDR0;
  __IOM uint32_t PIDR1;
  __IOM uint32_t PIDR2;
  __IOM uint32_t PIDR3;
  __IOM uint32_t CIDR0;
  __IOM uint32_t CIDR1;
  __IOM uint32_t CIDR2;
  __IOM uint32_t CIDR3;
} PMU_Type;

/** \brief PMU Event Counter Registers (0-30) Definitions  */

#define PMU_EVCNTR_CNT_Pos                    0U
#define PMU_EVCNTR_CNT_Msk                   (0xFFFFUL)

/** \brief PMU Event Type and Filter Registers (0-30) Definitions  */

#define PMU_EVTYPER_EVENTTOCNT_Pos            0U
#define PMU_EVTYPER_EVENTTOCNT_Msk           (0xFFFFUL)

/** \brief PMU Count Enable Set Register Definitions */

#define PMU_CNTENSET_CNT0_ENABLE_Pos          0U
#define PMU_CNTENSET_CNT0_ENABLE_Msk         (1UL)

#define PMU_CNTENSET_CNT1_ENABLE_Pos          1U
#define PMU_CNTENSET_CNT1_ENABLE_Msk         (1UL << PMU_CNTENSET_CNT1_ENABLE_Pos)

#define PMU_CNTENSET_CNT2_ENABLE_Pos          2U
#define PMU_CNTENSET_CNT2_ENABLE_Msk         (1UL << PMU_CNTENSET_CNT2_ENABLE_Pos)

#define PMU_CNTENSET_CNT3_ENABLE_Pos          3U
#define PMU_CNTENSET_CNT3_ENABLE_Msk         (1UL << PMU_CNTENSET_CNT3_ENABLE_Pos)

#define PMU_CNTENSET_CNT4_ENABLE_Pos          4U
#define PMU_CNTENSET_CNT4_ENABLE_Msk         (1UL << PMU_CNTENSET_CNT4_ENABLE_Pos)

#define PMU_CNTENSET_CNT5_ENABLE_Pos          5U
#define PMU_CNTENSET_CNT5_ENABLE_Msk         (1UL << PMU_CNTENSET_CNT5_ENABLE_Pos)

#define PMU_CNTENSET_CNT6_ENABLE_Pos          6U
#define PMU_CNTENSET_CNT6_ENABLE_Msk         (1UL << PMU_CNTENSET_CNT6_ENABLE_Pos)

#define PMU_CNTENSET_CNT7_ENABLE_Pos          7U
#define PMU_CNTENSET_CNT7_ENABLE_Msk         (1UL << PMU_CNTENSET_CNT7_ENABLE_Pos)

#define PMU_CNTENSET_CNT8_ENABLE_Pos          8U
#define PMU_CNTENSET_CNT8_ENABLE_Msk         (1UL << PMU_CNTENSET_CNT8_ENABLE_Pos)

#define PMU_CNTENSET_CNT9_ENABLE_Pos          9U
#define PMU_CNTENSET_CNT9_ENABLE_Msk         (1UL << PMU_CNTENSET_CNT9_ENABLE_Pos)

#define PMU_CNTENSET_CNT10_ENABLE_Pos         10U
#define PMU_CNTENSET_CNT10_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT10_ENABLE_Pos)

#define PMU_CNTENSET_CNT11_ENABLE_Pos         11U
#define PMU_CNTENSET_CNT11_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT11_ENABLE_Pos)

#define PMU_CNTENSET_CNT12_ENABLE_Pos         12U
#define PMU_CNTENSET_CNT12_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT12_ENABLE_Pos)

#define PMU_CNTENSET_CNT13_ENABLE_Pos         13U
#define PMU_CNTENSET_CNT13_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT13_ENABLE_Pos)

#define PMU_CNTENSET_CNT14_ENABLE_Pos         14U
#define PMU_CNTENSET_CNT14_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT14_ENABLE_Pos)

#define PMU_CNTENSET_CNT15_ENABLE_Pos         15U
#define PMU_CNTENSET_CNT15_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT15_ENABLE_Pos)

#define PMU_CNTENSET_CNT16_ENABLE_Pos         16U
#define PMU_CNTENSET_CNT16_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT16_ENABLE_Pos)

#define PMU_CNTENSET_CNT17_ENABLE_Pos         17U
#define PMU_CNTENSET_CNT17_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT17_ENABLE_Pos)

#define PMU_CNTENSET_CNT18_ENABLE_Pos         18U
#define PMU_CNTENSET_CNT18_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT18_ENABLE_Pos)

#define PMU_CNTENSET_CNT19_ENABLE_Pos         19U
#define PMU_CNTENSET_CNT19_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT19_ENABLE_Pos)

#define PMU_CNTENSET_CNT20_ENABLE_Pos         20U
#define PMU_CNTENSET_CNT20_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT20_ENABLE_Pos)

#define PMU_CNTENSET_CNT21_ENABLE_Pos         21U
#define PMU_CNTENSET_CNT21_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT21_ENABLE_Pos)

#define PMU_CNTENSET_CNT22_ENABLE_Pos         22U
#define PMU_CNTENSET_CNT22_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT22_ENABLE_Pos)

#define PMU_CNTENSET_CNT23_ENABLE_Pos         23U
#define PMU_CNTENSET_CNT23_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT23_ENABLE_Pos)

#define PMU_CNTENSET_CNT24_ENABLE_Pos         24U
#define PMU_CNTENSET_CNT24_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT24_ENABLE_Pos)

#define PMU_CNTENSET_CNT25_ENABLE_Pos         25U
#define PMU_CNTENSET_CNT25_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT25_ENABLE_Pos)

#define PMU_CNTENSET_CNT26_ENABLE_Pos         26U
#define PMU_CNTENSET_CNT26_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT26_ENABLE_Pos)

#define PMU_CNTENSET_CNT27_ENABLE_Pos         27U
#define PMU_CNTENSET_CNT27_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT27_ENABLE_Pos)

#define PMU_CNTENSET_CNT28_ENABLE_Pos         28U
#define PMU_CNTENSET_CNT28_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT28_ENABLE_Pos)

#define PMU_CNTENSET_CNT29_ENABLE_Pos         29U
#define PMU_CNTENSET_CNT29_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT29_ENABLE_Pos)

#define PMU_CNTENSET_CNT30_ENABLE_Pos         30U
#define PMU_CNTENSET_CNT30_ENABLE_Msk        (1UL << PMU_CNTENSET_CNT30_ENABLE_Pos)

#define PMU_CNTENSET_CCNTR_ENABLE_Pos         31U
#define PMU_CNTENSET_CCNTR_ENABLE_Msk        (1UL << PMU_CNTENSET_CCNTR_ENABLE_Pos)

/** \brief PMU Count Enable Clear Register Definitions */

#define PMU_CNTENSET_CNT0_ENABLE_Pos          0U
#define PMU_CNTENCLR_CNT0_ENABLE_Msk         (1UL)

#define PMU_CNTENCLR_CNT1_ENABLE_Pos          1U
#define PMU_CNTENCLR_CNT1_ENABLE_Msk         (1UL << PMU_CNTENCLR_CNT1_ENABLE_Pos)

#define PMU_CNTENCLR_CNT2_ENABLE_Pos          2U
#define PMU_CNTENCLR_CNT2_ENABLE_Msk         (1UL << PMU_CNTENCLR_CNT2_ENABLE_Pos)

#define PMU_CNTENCLR_CNT3_ENABLE_Pos          3U
#define PMU_CNTENCLR_CNT3_ENABLE_Msk         (1UL << PMU_CNTENCLR_CNT3_ENABLE_Pos)

#define PMU_CNTENCLR_CNT4_ENABLE_Pos          4U
#define PMU_CNTENCLR_CNT4_ENABLE_Msk         (1UL << PMU_CNTENCLR_CNT4_ENABLE_Pos)

#define PMU_CNTENCLR_CNT5_ENABLE_Pos          5U
#define PMU_CNTENCLR_CNT5_ENABLE_Msk         (1UL << PMU_CNTENCLR_CNT5_ENABLE_Pos)

#define PMU_CNTENCLR_CNT6_ENABLE_Pos          6U
#define PMU_CNTENCLR_CNT6_ENABLE_Msk         (1UL << PMU_CNTENCLR_CNT6_ENABLE_Pos)

#define PMU_CNTENCLR_CNT7_ENABLE_Pos          7U
#define PMU_CNTENCLR_CNT7_ENABLE_Msk         (1UL << PMU_CNTENCLR_CNT7_ENABLE_Pos)

#define PMU_CNTENCLR_CNT8_ENABLE_Pos          8U
#define PMU_CNTENCLR_CNT8_ENABLE_Msk         (1UL << PMU_CNTENCLR_CNT8_ENABLE_Pos)

#define PMU_CNTENCLR_CNT9_ENABLE_Pos          9U
#define PMU_CNTENCLR_CNT9_ENABLE_Msk         (1UL << PMU_CNTENCLR_CNT9_ENABLE_Pos)

#define PMU_CNTENCLR_CNT10_ENABLE_Pos         10U
#define PMU_CNTENCLR_CNT10_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT10_ENABLE_Pos)

#define PMU_CNTENCLR_CNT11_ENABLE_Pos         11U
#define PMU_CNTENCLR_CNT11_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT11_ENABLE_Pos)

#define PMU_CNTENCLR_CNT12_ENABLE_Pos         12U
#define PMU_CNTENCLR_CNT12_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT12_ENABLE_Pos)

#define PMU_CNTENCLR_CNT13_ENABLE_Pos         13U
#define PMU_CNTENCLR_CNT13_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT13_ENABLE_Pos)

#define PMU_CNTENCLR_CNT14_ENABLE_Pos         14U
#define PMU_CNTENCLR_CNT14_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT14_ENABLE_Pos)

#define PMU_CNTENCLR_CNT15_ENABLE_Pos         15U
#define PMU_CNTENCLR_CNT15_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT15_ENABLE_Pos)

#define PMU_CNTENCLR_CNT16_ENABLE_Pos         16U
#define PMU_CNTENCLR_CNT16_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT16_ENABLE_Pos)

#define PMU_CNTENCLR_CNT17_ENABLE_Pos         17U
#define PMU_CNTENCLR_CNT17_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT17_ENABLE_Pos)

#define PMU_CNTENCLR_CNT18_ENABLE_Pos         18U
#define PMU_CNTENCLR_CNT18_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT18_ENABLE_Pos)

#define PMU_CNTENCLR_CNT19_ENABLE_Pos         19U
#define PMU_CNTENCLR_CNT19_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT19_ENABLE_Pos)

#define PMU_CNTENCLR_CNT20_ENABLE_Pos         20U
#define PMU_CNTENCLR_CNT20_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT20_ENABLE_Pos)

#define PMU_CNTENCLR_CNT21_ENABLE_Pos         21U
#define PMU_CNTENCLR_CNT21_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT21_ENABLE_Pos)

#define PMU_CNTENCLR_CNT22_ENABLE_Pos         22U
#define PMU_CNTENCLR_CNT22_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT22_ENABLE_Pos)

#define PMU_CNTENCLR_CNT23_ENABLE_Pos         23U
#define PMU_CNTENCLR_CNT23_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT23_ENABLE_Pos)

#define PMU_CNTENCLR_CNT24_ENABLE_Pos         24U
#define PMU_CNTENCLR_CNT24_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT24_ENABLE_Pos)

#define PMU_CNTENCLR_CNT25_ENABLE_Pos         25U
#define PMU_CNTENCLR_CNT25_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT25_ENABLE_Pos)

#define PMU_CNTENCLR_CNT26_ENABLE_Pos         26U
#define PMU_CNTENCLR_CNT26_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT26_ENABLE_Pos)

#define PMU_CNTENCLR_CNT27_ENABLE_Pos         27U
#define PMU_CNTENCLR_CNT27_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT27_ENABLE_Pos)

#define PMU_CNTENCLR_CNT28_ENABLE_Pos         28U
#define PMU_CNTENCLR_CNT28_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT28_ENABLE_Pos)

#define PMU_CNTENCLR_CNT29_ENABLE_Pos         29U
#define PMU_CNTENCLR_CNT29_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT29_ENABLE_Pos)

#define PMU_CNTENCLR_CNT30_ENABLE_Pos         30U
#define PMU_CNTENCLR_CNT30_ENABLE_Msk        (1UL << PMU_CNTENCLR_CNT30_ENABLE_Pos)

#define PMU_CNTENCLR_CCNTR_ENABLE_Pos         31U
#define PMU_CNTENCLR_CCNTR_ENABLE_Msk        (1UL << PMU_CNTENCLR_CCNTR_ENABLE_Pos)

/** \brief PMU Interrupt Enable Set Register Definitions */

#define PMU_INTENSET_CNT0_ENABLE_Pos          0U
#define PMU_INTENSET_CNT0_ENABLE_Msk         (1UL)

#define PMU_INTENSET_CNT1_ENABLE_Pos          1U
#define PMU_INTENSET_CNT1_ENABLE_Msk         (1UL << PMU_INTENSET_CNT1_ENABLE_Pos)

#define PMU_INTENSET_CNT2_ENABLE_Pos          2U
#define PMU_INTENSET_CNT2_ENABLE_Msk         (1UL << PMU_INTENSET_CNT2_ENABLE_Pos)

#define PMU_INTENSET_CNT3_ENABLE_Pos          3U
#define PMU_INTENSET_CNT3_ENABLE_Msk         (1UL << PMU_INTENSET_CNT3_ENABLE_Pos)

#define PMU_INTENSET_CNT4_ENABLE_Pos          4U
#define PMU_INTENSET_CNT4_ENABLE_Msk         (1UL << PMU_INTENSET_CNT4_ENABLE_Pos)

#define PMU_INTENSET_CNT5_ENABLE_Pos          5U
#define PMU_INTENSET_CNT5_ENABLE_Msk         (1UL << PMU_INTENSET_CNT5_ENABLE_Pos)

#define PMU_INTENSET_CNT6_ENABLE_Pos          6U
#define PMU_INTENSET_CNT6_ENABLE_Msk         (1UL << PMU_INTENSET_CNT6_ENABLE_Pos)

#define PMU_INTENSET_CNT7_ENABLE_Pos          7U
#define PMU_INTENSET_CNT7_ENABLE_Msk         (1UL << PMU_INTENSET_CNT7_ENABLE_Pos)

#define PMU_INTENSET_CNT8_ENABLE_Pos          8U
#define PMU_INTENSET_CNT8_ENABLE_Msk         (1UL << PMU_INTENSET_CNT8_ENABLE_Pos)

#define PMU_INTENSET_CNT9_ENABLE_Pos          9U
#define PMU_INTENSET_CNT9_ENABLE_Msk         (1UL << PMU_INTENSET_CNT9_ENABLE_Pos)

#define PMU_INTENSET_CNT10_ENABLE_Pos         10U
#define PMU_INTENSET_CNT10_ENABLE_Msk        (1UL << PMU_INTENSET_CNT10_ENABLE_Pos)

#define PMU_INTENSET_CNT11_ENABLE_Pos         11U
#define PMU_INTENSET_CNT11_ENABLE_Msk        (1UL << PMU_INTENSET_CNT11_ENABLE_Pos)

#define PMU_INTENSET_CNT12_ENABLE_Pos         12U
#define PMU_INTENSET_CNT12_ENABLE_Msk        (1UL << PMU_INTENSET_CNT12_ENABLE_Pos)

#define PMU_INTENSET_CNT13_ENABLE_Pos         13U
#define PMU_INTENSET_CNT13_ENABLE_Msk        (1UL << PMU_INTENSET_CNT13_ENABLE_Pos)

#define PMU_INTENSET_CNT14_ENABLE_Pos         14U
#define PMU_INTENSET_CNT14_ENABLE_Msk        (1UL << PMU_INTENSET_CNT14_ENABLE_Pos)

#define PMU_INTENSET_CNT15_ENABLE_Pos         15U
#define PMU_INTENSET_CNT15_ENABLE_Msk        (1UL << PMU_INTENSET_CNT15_ENABLE_Pos)

#define PMU_INTENSET_CNT16_ENABLE_Pos         16U
#define PMU_INTENSET_CNT16_ENABLE_Msk        (1UL << PMU_INTENSET_CNT16_ENABLE_Pos)

#define PMU_INTENSET_CNT17_ENABLE_Pos         17U
#define PMU_INTENSET_CNT17_ENABLE_Msk        (1UL << PMU_INTENSET_CNT17_ENABLE_Pos)

#define PMU_INTENSET_CNT18_ENABLE_Pos         18U
#define PMU_INTENSET_CNT18_ENABLE_Msk        (1UL << PMU_INTENSET_CNT18_ENABLE_Pos)

#define PMU_INTENSET_CNT19_ENABLE_Pos         19U
#define PMU_INTENSET_CNT19_ENABLE_Msk        (1UL << PMU_INTENSET_CNT19_ENABLE_Pos)

#define PMU_INTENSET_CNT20_ENABLE_Pos         20U
#define PMU_INTENSET_CNT20_ENABLE_Msk        (1UL << PMU_INTENSET_CNT20_ENABLE_Pos)

#define PMU_INTENSET_CNT21_ENABLE_Pos         21U
#define PMU_INTENSET_CNT21_ENABLE_Msk        (1UL << PMU_INTENSET_CNT21_ENABLE_Pos)

#define PMU_INTENSET_CNT22_ENABLE_Pos         22U
#define PMU_INTENSET_CNT22_ENABLE_Msk        (1UL << PMU_INTENSET_CNT22_ENABLE_Pos)

#define PMU_INTENSET_CNT23_ENABLE_Pos         23U
#define PMU_INTENSET_CNT23_ENABLE_Msk        (1UL << PMU_INTENSET_CNT23_ENABLE_Pos)

#define PMU_INTENSET_CNT24_ENABLE_Pos         24U
#define PMU_INTENSET_CNT24_ENABLE_Msk        (1UL << PMU_INTENSET_CNT24_ENABLE_Pos)

#define PMU_INTENSET_CNT25_ENABLE_Pos         25U
#define PMU_INTENSET_CNT25_ENABLE_Msk        (1UL << PMU_INTENSET_CNT25_ENABLE_Pos)

#define PMU_INTENSET_CNT26_ENABLE_Pos         26U
#define PMU_INTENSET_CNT26_ENABLE_Msk        (1UL << PMU_INTENSET_CNT26_ENABLE_Pos)

#define PMU_INTENSET_CNT27_ENABLE_Pos         27U
#define PMU_INTENSET_CNT27_ENABLE_Msk        (1UL << PMU_INTENSET_CNT27_ENABLE_Pos)

#define PMU_INTENSET_CNT28_ENABLE_Pos         28U
#define PMU_INTENSET_CNT28_ENABLE_Msk        (1UL << PMU_INTENSET_CNT28_ENABLE_Pos)

#define PMU_INTENSET_CNT29_ENABLE_Pos         29U
#define PMU_INTENSET_CNT29_ENABLE_Msk        (1UL << PMU_INTENSET_CNT29_ENABLE_Pos)

#define PMU_INTENSET_CNT30_ENABLE_Pos         30U
#define PMU_INTENSET_CNT30_ENABLE_Msk        (1UL << PMU_INTENSET_CNT30_ENABLE_Pos)

#define PMU_INTENSET_CYCCNT_ENABLE_Pos        31U
#define PMU_INTENSET_CCYCNT_ENABLE_Msk       (1UL << PMU_INTENSET_CYCCNT_ENABLE_Pos)

/** \brief PMU Interrupt Enable Clear Register Definitions */

#define PMU_INTENSET_CNT0_ENABLE_Pos          0U
#define PMU_INTENCLR_CNT0_ENABLE_Msk         (1UL)

#define PMU_INTENCLR_CNT1_ENABLE_Pos          1U
#define PMU_INTENCLR_CNT1_ENABLE_Msk         (1UL << PMU_INTENCLR_CNT1_ENABLE_Pos)

#define PMU_INTENCLR_CNT2_ENABLE_Pos          2U
#define PMU_INTENCLR_CNT2_ENABLE_Msk         (1UL << PMU_INTENCLR_CNT2_ENABLE_Pos)

#define PMU_INTENCLR_CNT3_ENABLE_Pos          3U
#define PMU_INTENCLR_CNT3_ENABLE_Msk         (1UL << PMU_INTENCLR_CNT3_ENABLE_Pos)

#define PMU_INTENCLR_CNT4_ENABLE_Pos          4U
#define PMU_INTENCLR_CNT4_ENABLE_Msk         (1UL << PMU_INTENCLR_CNT4_ENABLE_Pos)

#define PMU_INTENCLR_CNT5_ENABLE_Pos          5U
#define PMU_INTENCLR_CNT5_ENABLE_Msk         (1UL << PMU_INTENCLR_CNT5_ENABLE_Pos)

#define PMU_INTENCLR_CNT6_ENABLE_Pos          6U
#define PMU_INTENCLR_CNT6_ENABLE_Msk         (1UL << PMU_INTENCLR_CNT6_ENABLE_Pos)

#define PMU_INTENCLR_CNT7_ENABLE_Pos          7U
#define PMU_INTENCLR_CNT7_ENABLE_Msk         (1UL << PMU_INTENCLR_CNT7_ENABLE_Pos)

#define PMU_INTENCLR_CNT8_ENABLE_Pos          8U
#define PMU_INTENCLR_CNT8_ENABLE_Msk         (1UL << PMU_INTENCLR_CNT8_ENABLE_Pos)

#define PMU_INTENCLR_CNT9_ENABLE_Pos          9U
#define PMU_INTENCLR_CNT9_ENABLE_Msk         (1UL << PMU_INTENCLR_CNT9_ENABLE_Pos)

#define PMU_INTENCLR_CNT10_ENABLE_Pos         10U
#define PMU_INTENCLR_CNT10_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT10_ENABLE_Pos)

#define PMU_INTENCLR_CNT11_ENABLE_Pos         11U
#define PMU_INTENCLR_CNT11_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT11_ENABLE_Pos)

#define PMU_INTENCLR_CNT12_ENABLE_Pos         12U
#define PMU_INTENCLR_CNT12_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT12_ENABLE_Pos)

#define PMU_INTENCLR_CNT13_ENABLE_Pos         13U
#define PMU_INTENCLR_CNT13_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT13_ENABLE_Pos)

#define PMU_INTENCLR_CNT14_ENABLE_Pos         14U
#define PMU_INTENCLR_CNT14_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT14_ENABLE_Pos)

#define PMU_INTENCLR_CNT15_ENABLE_Pos         15U
#define PMU_INTENCLR_CNT15_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT15_ENABLE_Pos)

#define PMU_INTENCLR_CNT16_ENABLE_Pos         16U
#define PMU_INTENCLR_CNT16_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT16_ENABLE_Pos)

#define PMU_INTENCLR_CNT17_ENABLE_Pos         17U
#define PMU_INTENCLR_CNT17_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT17_ENABLE_Pos)

#define PMU_INTENCLR_CNT18_ENABLE_Pos         18U
#define PMU_INTENCLR_CNT18_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT18_ENABLE_Pos)

#define PMU_INTENCLR_CNT19_ENABLE_Pos         19U
#define PMU_INTENCLR_CNT19_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT19_ENABLE_Pos)

#define PMU_INTENCLR_CNT20_ENABLE_Pos         20U
#define PMU_INTENCLR_CNT20_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT20_ENABLE_Pos)

#define PMU_INTENCLR_CNT21_ENABLE_Pos         21U
#define PMU_INTENCLR_CNT21_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT21_ENABLE_Pos)

#define PMU_INTENCLR_CNT22_ENABLE_Pos         22U
#define PMU_INTENCLR_CNT22_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT22_ENABLE_Pos)

#define PMU_INTENCLR_CNT23_ENABLE_Pos         23U
#define PMU_INTENCLR_CNT23_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT23_ENABLE_Pos)

#define PMU_INTENCLR_CNT24_ENABLE_Pos         24U
#define PMU_INTENCLR_CNT24_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT24_ENABLE_Pos)

#define PMU_INTENCLR_CNT25_ENABLE_Pos         25U
#define PMU_INTENCLR_CNT25_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT25_ENABLE_Pos)

#define PMU_INTENCLR_CNT26_ENABLE_Pos         26U
#define PMU_INTENCLR_CNT26_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT26_ENABLE_Pos)

#define PMU_INTENCLR_CNT27_ENABLE_Pos         27U
#define PMU_INTENCLR_CNT27_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT27_ENABLE_Pos)

#define PMU_INTENCLR_CNT28_ENABLE_Pos         28U
#define PMU_INTENCLR_CNT28_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT28_ENABLE_Pos)

#define PMU_INTENCLR_CNT29_ENABLE_Pos         29U
#define PMU_INTENCLR_CNT29_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT29_ENABLE_Pos)

#define PMU_INTENCLR_CNT30_ENABLE_Pos         30U
#define PMU_INTENCLR_CNT30_ENABLE_Msk        (1UL << PMU_INTENCLR_CNT30_ENABLE_Pos)

#define PMU_INTENCLR_CYCCNT_ENABLE_Pos        31U
#define PMU_INTENCLR_CYCCNT_ENABLE_Msk       (1UL << PMU_INTENCLR_CYCCNT_ENABLE_Pos)

/** \brief PMU Overflow Flag Status Set Register Definitions */

#define PMU_OVSSET_CNT0_STATUS_Pos            0U
#define PMU_OVSSET_CNT0_STATUS_Msk           (1UL)

#define PMU_OVSSET_CNT1_STATUS_Pos            1U
#define PMU_OVSSET_CNT1_STATUS_Msk           (1UL << PMU_OVSSET_CNT1_STATUS_Pos)

#define PMU_OVSSET_CNT2_STATUS_Pos            2U
#define PMU_OVSSET_CNT2_STATUS_Msk           (1UL << PMU_OVSSET_CNT2_STATUS_Pos)

#define PMU_OVSSET_CNT3_STATUS_Pos            3U
#define PMU_OVSSET_CNT3_STATUS_Msk           (1UL << PMU_OVSSET_CNT3_STATUS_Pos)

#define PMU_OVSSET_CNT4_STATUS_Pos            4U
#define PMU_OVSSET_CNT4_STATUS_Msk           (1UL << PMU_OVSSET_CNT4_STATUS_Pos)

#define PMU_OVSSET_CNT5_STATUS_Pos            5U
#define PMU_OVSSET_CNT5_STATUS_Msk           (1UL << PMU_OVSSET_CNT5_STATUS_Pos)

#define PMU_OVSSET_CNT6_STATUS_Pos            6U
#define PMU_OVSSET_CNT6_STATUS_Msk           (1UL << PMU_OVSSET_CNT6_STATUS_Pos)

#define PMU_OVSSET_CNT7_STATUS_Pos            7U
#define PMU_OVSSET_CNT7_STATUS_Msk           (1UL << PMU_OVSSET_CNT7_STATUS_Pos)

#define PMU_OVSSET_CNT8_STATUS_Pos            8U
#define PMU_OVSSET_CNT8_STATUS_Msk           (1UL << PMU_OVSSET_CNT8_STATUS_Pos)

#define PMU_OVSSET_CNT9_STATUS_Pos            9U
#define PMU_OVSSET_CNT9_STATUS_Msk           (1UL << PMU_OVSSET_CNT9_STATUS_Pos)

#define PMU_OVSSET_CNT10_STATUS_Pos           10U
#define PMU_OVSSET_CNT10_STATUS_Msk          (1UL << PMU_OVSSET_CNT10_STATUS_Pos)

#define PMU_OVSSET_CNT11_STATUS_Pos           11U
#define PMU_OVSSET_CNT11_STATUS_Msk          (1UL << PMU_OVSSET_CNT11_STATUS_Pos)

#define PMU_OVSSET_CNT12_STATUS_Pos           12U
#define PMU_OVSSET_CNT12_STATUS_Msk          (1UL << PMU_OVSSET_CNT12_STATUS_Pos)

#define PMU_OVSSET_CNT13_STATUS_Pos           13U
#define PMU_OVSSET_CNT13_STATUS_Msk          (1UL << PMU_OVSSET_CNT13_STATUS_Pos)

#define PMU_OVSSET_CNT14_STATUS_Pos           14U
#define PMU_OVSSET_CNT14_STATUS_Msk          (1UL << PMU_OVSSET_CNT14_STATUS_Pos)

#define PMU_OVSSET_CNT15_STATUS_Pos           15U
#define PMU_OVSSET_CNT15_STATUS_Msk          (1UL << PMU_OVSSET_CNT15_STATUS_Pos)

#define PMU_OVSSET_CNT16_STATUS_Pos           16U
#define PMU_OVSSET_CNT16_STATUS_Msk          (1UL << PMU_OVSSET_CNT16_STATUS_Pos)

#define PMU_OVSSET_CNT17_STATUS_Pos           17U
#define PMU_OVSSET_CNT17_STATUS_Msk          (1UL << PMU_OVSSET_CNT17_STATUS_Pos)

#define PMU_OVSSET_CNT18_STATUS_Pos           18U
#define PMU_OVSSET_CNT18_STATUS_Msk          (1UL << PMU_OVSSET_CNT18_STATUS_Pos)

#define PMU_OVSSET_CNT19_STATUS_Pos           19U
#define PMU_OVSSET_CNT19_STATUS_Msk          (1UL << PMU_OVSSET_CNT19_STATUS_Pos)

#define PMU_OVSSET_CNT20_STATUS_Pos           20U
#define PMU_OVSSET_CNT20_STATUS_Msk          (1UL << PMU_OVSSET_CNT20_STATUS_Pos)

#define PMU_OVSSET_CNT21_STATUS_Pos           21U
#define PMU_OVSSET_CNT21_STATUS_Msk          (1UL << PMU_OVSSET_CNT21_STATUS_Pos)

#define PMU_OVSSET_CNT22_STATUS_Pos           22U
#define PMU_OVSSET_CNT22_STATUS_Msk          (1UL << PMU_OVSSET_CNT22_STATUS_Pos)

#define PMU_OVSSET_CNT23_STATUS_Pos           23U
#define PMU_OVSSET_CNT23_STATUS_Msk          (1UL << PMU_OVSSET_CNT23_STATUS_Pos)

#define PMU_OVSSET_CNT24_STATUS_Pos           24U
#define PMU_OVSSET_CNT24_STATUS_Msk          (1UL << PMU_OVSSET_CNT24_STATUS_Pos)

#define PMU_OVSSET_CNT25_STATUS_Pos           25U
#define PMU_OVSSET_CNT25_STATUS_Msk          (1UL << PMU_OVSSET_CNT25_STATUS_Pos)

#define PMU_OVSSET_CNT26_STATUS_Pos           26U
#define PMU_OVSSET_CNT26_STATUS_Msk          (1UL << PMU_OVSSET_CNT26_STATUS_Pos)

#define PMU_OVSSET_CNT27_STATUS_Pos           27U
#define PMU_OVSSET_CNT27_STATUS_Msk          (1UL << PMU_OVSSET_CNT27_STATUS_Pos)

#define PMU_OVSSET_CNT28_STATUS_Pos           28U
#define PMU_OVSSET_CNT28_STATUS_Msk          (1UL << PMU_OVSSET_CNT28_STATUS_Pos)

#define PMU_OVSSET_CNT29_STATUS_Pos           29U
#define PMU_OVSSET_CNT29_STATUS_Msk          (1UL << PMU_OVSSET_CNT29_STATUS_Pos)

#define PMU_OVSSET_CNT30_STATUS_Pos           30U
#define PMU_OVSSET_CNT30_STATUS_Msk          (1UL << PMU_OVSSET_CNT30_STATUS_Pos)

#define PMU_OVSSET_CYCCNT_STATUS_Pos          31U
#define PMU_OVSSET_CYCCNT_STATUS_Msk         (1UL << PMU_OVSSET_CYCCNT_STATUS_Pos)

/** \brief PMU Overflow Flag Status Clear Register Definitions */

#define PMU_OVSCLR_CNT0_STATUS_Pos            0U
#define PMU_OVSCLR_CNT0_STATUS_Msk           (1UL)

#define PMU_OVSCLR_CNT1_STATUS_Pos            1U
#define PMU_OVSCLR_CNT1_STATUS_Msk           (1UL << PMU_OVSCLR_CNT1_STATUS_Pos)

#define PMU_OVSCLR_CNT2_STATUS_Pos            2U
#define PMU_OVSCLR_CNT2_STATUS_Msk           (1UL << PMU_OVSCLR_CNT2_STATUS_Pos)

#define PMU_OVSCLR_CNT3_STATUS_Pos            3U
#define PMU_OVSCLR_CNT3_STATUS_Msk           (1UL << PMU_OVSCLR_CNT3_STATUS_Pos)

#define PMU_OVSCLR_CNT4_STATUS_Pos            4U
#define PMU_OVSCLR_CNT4_STATUS_Msk           (1UL << PMU_OVSCLR_CNT4_STATUS_Pos)

#define PMU_OVSCLR_CNT5_STATUS_Pos            5U
#define PMU_OVSCLR_CNT5_STATUS_Msk           (1UL << PMU_OVSCLR_CNT5_STATUS_Pos)

#define PMU_OVSCLR_CNT6_STATUS_Pos            6U
#define PMU_OVSCLR_CNT6_STATUS_Msk           (1UL << PMU_OVSCLR_CNT6_STATUS_Pos)

#define PMU_OVSCLR_CNT7_STATUS_Pos            7U
#define PMU_OVSCLR_CNT7_STATUS_Msk           (1UL << PMU_OVSCLR_CNT7_STATUS_Pos)

#define PMU_OVSCLR_CNT8_STATUS_Pos            8U
#define PMU_OVSCLR_CNT8_STATUS_Msk           (1UL << PMU_OVSCLR_CNT8_STATUS_Pos)

#define PMU_OVSCLR_CNT9_STATUS_Pos            9U
#define PMU_OVSCLR_CNT9_STATUS_Msk           (1UL << PMU_OVSCLR_CNT9_STATUS_Pos)

#define PMU_OVSCLR_CNT10_STATUS_Pos           10U
#define PMU_OVSCLR_CNT10_STATUS_Msk          (1UL << PMU_OVSCLR_CNT10_STATUS_Pos)

#define PMU_OVSCLR_CNT11_STATUS_Pos           11U
#define PMU_OVSCLR_CNT11_STATUS_Msk          (1UL << PMU_OVSCLR_CNT11_STATUS_Pos)

#define PMU_OVSCLR_CNT12_STATUS_Pos           12U
#define PMU_OVSCLR_CNT12_STATUS_Msk          (1UL << PMU_OVSCLR_CNT12_STATUS_Pos)

#define PMU_OVSCLR_CNT13_STATUS_Pos           13U
#define PMU_OVSCLR_CNT13_STATUS_Msk          (1UL << PMU_OVSCLR_CNT13_STATUS_Pos)

#define PMU_OVSCLR_CNT14_STATUS_Pos           14U
#define PMU_OVSCLR_CNT14_STATUS_Msk          (1UL << PMU_OVSCLR_CNT14_STATUS_Pos)

#define PMU_OVSCLR_CNT15_STATUS_Pos           15U
#define PMU_OVSCLR_CNT15_STATUS_Msk          (1UL << PMU_OVSCLR_CNT15_STATUS_Pos)

#define PMU_OVSCLR_CNT16_STATUS_Pos           16U
#define PMU_OVSCLR_CNT16_STATUS_Msk          (1UL << PMU_OVSCLR_CNT16_STATUS_Pos)

#define PMU_OVSCLR_CNT17_STATUS_Pos           17U
#define PMU_OVSCLR_CNT17_STATUS_Msk          (1UL << PMU_OVSCLR_CNT17_STATUS_Pos)

#define PMU_OVSCLR_CNT18_STATUS_Pos           18U
#define PMU_OVSCLR_CNT18_STATUS_Msk          (1UL << PMU_OVSCLR_CNT18_STATUS_Pos)

#define PMU_OVSCLR_CNT19_STATUS_Pos           19U
#define PMU_OVSCLR_CNT19_STATUS_Msk          (1UL << PMU_OVSCLR_CNT19_STATUS_Pos)

#define PMU_OVSCLR_CNT20_STATUS_Pos           20U
#define PMU_OVSCLR_CNT20_STATUS_Msk          (1UL << PMU_OVSCLR_CNT20_STATUS_Pos)

#define PMU_OVSCLR_CNT21_STATUS_Pos           21U
#define PMU_OVSCLR_CNT21_STATUS_Msk          (1UL << PMU_OVSCLR_CNT21_STATUS_Pos)

#define PMU_OVSCLR_CNT22_STATUS_Pos           22U
#define PMU_OVSCLR_CNT22_STATUS_Msk          (1UL << PMU_OVSCLR_CNT22_STATUS_Pos)

#define PMU_OVSCLR_CNT23_STATUS_Pos           23U
#define PMU_OVSCLR_CNT23_STATUS_Msk          (1UL << PMU_OVSCLR_CNT23_STATUS_Pos)

#define PMU_OVSCLR_CNT24_STATUS_Pos           24U
#define PMU_OVSCLR_CNT24_STATUS_Msk          (1UL << PMU_OVSCLR_CNT24_STATUS_Pos)

#define PMU_OVSCLR_CNT25_STATUS_Pos           25U
#define PMU_OVSCLR_CNT25_STATUS_Msk          (1UL << PMU_OVSCLR_CNT25_STATUS_Pos)

#define PMU_OVSCLR_CNT26_STATUS_Pos           26U
#define PMU_OVSCLR_CNT26_STATUS_Msk          (1UL << PMU_OVSCLR_CNT26_STATUS_Pos)

#define PMU_OVSCLR_CNT27_STATUS_Pos           27U
#define PMU_OVSCLR_CNT27_STATUS_Msk          (1UL << PMU_OVSCLR_CNT27_STATUS_Pos)

#define PMU_OVSCLR_CNT28_STATUS_Pos           28U
#define PMU_OVSCLR_CNT28_STATUS_Msk          (1UL << PMU_OVSCLR_CNT28_STATUS_Pos)

#define PMU_OVSCLR_CNT29_STATUS_Pos           29U
#define PMU_OVSCLR_CNT29_STATUS_Msk          (1UL << PMU_OVSCLR_CNT29_STATUS_Pos)

#define PMU_OVSCLR_CNT30_STATUS_Pos           30U
#define PMU_OVSCLR_CNT30_STATUS_Msk          (1UL << PMU_OVSCLR_CNT30_STATUS_Pos)

#define PMU_OVSCLR_CYCCNT_STATUS_Pos          31U
#define PMU_OVSCLR_CYCCNT_STATUS_Msk         (1UL << PMU_OVSCLR_CYCCNT_STATUS_Pos)

/** \brief PMU Software Increment Counter */

#define PMU_SWINC_CNT0_Pos                    0U
#define PMU_SWINC_CNT0_Msk                   (1UL)

#define PMU_SWINC_CNT1_Pos                    1U
#define PMU_SWINC_CNT1_Msk                   (1UL << PMU_SWINC_CNT1_Pos)

#define PMU_SWINC_CNT2_Pos                    2U
#define PMU_SWINC_CNT2_Msk                   (1UL << PMU_SWINC_CNT2_Pos)

#define PMU_SWINC_CNT3_Pos                    3U
#define PMU_SWINC_CNT3_Msk                   (1UL << PMU_SWINC_CNT3_Pos)

#define PMU_SWINC_CNT4_Pos                    4U
#define PMU_SWINC_CNT4_Msk                   (1UL << PMU_SWINC_CNT4_Pos)

#define PMU_SWINC_CNT5_Pos                    5U
#define PMU_SWINC_CNT5_Msk                   (1UL << PMU_SWINC_CNT5_Pos)

#define PMU_SWINC_CNT6_Pos                    6U
#define PMU_SWINC_CNT6_Msk                   (1UL << PMU_SWINC_CNT6_Pos)

#define PMU_SWINC_CNT7_Pos                    7U
#define PMU_SWINC_CNT7_Msk                   (1UL << PMU_SWINC_CNT7_Pos)

#define PMU_SWINC_CNT8_Pos                    8U
#define PMU_SWINC_CNT8_Msk                   (1UL << PMU_SWINC_CNT8_Pos)

#define PMU_SWINC_CNT9_Pos                    9U
#define PMU_SWINC_CNT9_Msk                   (1UL << PMU_SWINC_CNT9_Pos)

#define PMU_SWINC_CNT10_Pos                   10U
#define PMU_SWINC_CNT10_Msk                  (1UL << PMU_SWINC_CNT10_Pos)

#define PMU_SWINC_CNT11_Pos                   11U
#define PMU_SWINC_CNT11_Msk                  (1UL << PMU_SWINC_CNT11_Pos)

#define PMU_SWINC_CNT12_Pos                   12U
#define PMU_SWINC_CNT12_Msk                  (1UL << PMU_SWINC_CNT12_Pos)

#define PMU_SWINC_CNT13_Pos                   13U
#define PMU_SWINC_CNT13_Msk                  (1UL << PMU_SWINC_CNT13_Pos)

#define PMU_SWINC_CNT14_Pos                   14U
#define PMU_SWINC_CNT14_Msk                  (1UL << PMU_SWINC_CNT14_Pos)

#define PMU_SWINC_CNT15_Pos                   15U
#define PMU_SWINC_CNT15_Msk                  (1UL << PMU_SWINC_CNT15_Pos)

#define PMU_SWINC_CNT16_Pos                   16U
#define PMU_SWINC_CNT16_Msk                  (1UL << PMU_SWINC_CNT16_Pos)

#define PMU_SWINC_CNT17_Pos                   17U
#define PMU_SWINC_CNT17_Msk                  (1UL << PMU_SWINC_CNT17_Pos)

#define PMU_SWINC_CNT18_Pos                   18U
#define PMU_SWINC_CNT18_Msk                  (1UL << PMU_SWINC_CNT18_Pos)

#define PMU_SWINC_CNT19_Pos                   19U
#define PMU_SWINC_CNT19_Msk                  (1UL << PMU_SWINC_CNT19_Pos)

#define PMU_SWINC_CNT20_Pos                   20U
#define PMU_SWINC_CNT20_Msk                  (1UL << PMU_SWINC_CNT20_Pos)

#define PMU_SWINC_CNT21_Pos                   21U
#define PMU_SWINC_CNT21_Msk                  (1UL << PMU_SWINC_CNT21_Pos)

#define PMU_SWINC_CNT22_Pos                   22U
#define PMU_SWINC_CNT22_Msk                  (1UL << PMU_SWINC_CNT22_Pos)

#define PMU_SWINC_CNT23_Pos                   23U
#define PMU_SWINC_CNT23_Msk                  (1UL << PMU_SWINC_CNT23_Pos)

#define PMU_SWINC_CNT24_Pos                   24U
#define PMU_SWINC_CNT24_Msk                  (1UL << PMU_SWINC_CNT24_Pos)

#define PMU_SWINC_CNT25_Pos                   25U
#define PMU_SWINC_CNT25_Msk                  (1UL << PMU_SWINC_CNT25_Pos)

#define PMU_SWINC_CNT26_Pos                   26U
#define PMU_SWINC_CNT26_Msk                  (1UL << PMU_SWINC_CNT26_Pos)

#define PMU_SWINC_CNT27_Pos                   27U
#define PMU_SWINC_CNT27_Msk                  (1UL << PMU_SWINC_CNT27_Pos)

#define PMU_SWINC_CNT28_Pos                   28U
#define PMU_SWINC_CNT28_Msk                  (1UL << PMU_SWINC_CNT28_Pos)

#define PMU_SWINC_CNT29_Pos                   29U
#define PMU_SWINC_CNT29_Msk                  (1UL << PMU_SWINC_CNT29_Pos)

#define PMU_SWINC_CNT30_Pos                   30U
#define PMU_SWINC_CNT30_Msk                  (1UL << PMU_SWINC_CNT30_Pos)

/** \brief PMU Control Register Definitions */

#define PMU_CTRL_ENABLE_Pos                   0U
#define PMU_CTRL_ENABLE_Msk                  (1UL)

#define PMU_CTRL_EVENTCNT_RESET_Pos           1U
#define PMU_CTRL_EVENTCNT_RESET_Msk          (1UL << PMU_CTRL_EVENTCNT_RESET_Pos)

#define PMU_CTRL_CYCCNT_RESET_Pos             2U
#define PMU_CTRL_CYCCNT_RESET_Msk            (1UL << PMU_CTRL_CYCCNT_RESET_Pos)

#define PMU_CTRL_CYCCNT_DISABLE_Pos           5U
#define PMU_CTRL_CYCCNT_DISABLE_Msk          (1UL << PMU_CTRL_CYCCNT_DISABLE_Pos)

#define PMU_CTRL_FRZ_ON_OV_Pos                9U
#define PMU_CTRL_FRZ_ON_OV_Msk               (1UL << PMU_CTRL_FRZ_ON_OVERFLOW_Pos)

#define PMU_CTRL_TRACE_ON_OV_Pos              11U
#define PMU_CTRL_TRACE_ON_OV_Msk             (1UL << PMU_CTRL_TRACE_ON_OVERFLOW_Pos)

/** \brief PMU Type Register Definitions */

#define PMU_TYPE_NUM_CNTS_Pos                 0U
#define PMU_TYPE_NUM_CNTS_Msk                (0xFFUL)

#define PMU_TYPE_SIZE_CNTS_Pos                8U
#define PMU_TYPE_SIZE_CNTS_Msk               (0x3FUL << PMU_TYPE_SIZE_CNTS_Pos)

#define PMU_TYPE_CYCCNT_PRESENT_Pos           14U
#define PMU_TYPE_CYCCNT_PRESENT_Msk          (1UL << PMU_TYPE_CYCCNT_PRESENT_Pos)

#define PMU_TYPE_FRZ_OV_SUPPORT_Pos           21U
#define PMU_TYPE_FRZ_OV_SUPPORT_Msk          (1UL << PMU_TYPE_FRZ_OV_SUPPORT_Pos)

#define PMU_TYPE_TRACE_ON_OV_SUPPORT_Pos      23U
#define PMU_TYPE_TRACE_ON_OV_SUPPORT_Msk     (1UL << PMU_TYPE_FRZ_OV_SUPPORT_Pos)

/** \brief PMU Authentication Status Register Definitions */

#define PMU_AUTHSTATUS_NSID_Pos               0U
#define PMU_AUTHSTATUS_NSID_Msk              (0x3UL)

#define PMU_AUTHSTATUS_NSNID_Pos              2U
#define PMU_AUTHSTATUS_NSNID_Msk             (0x3UL << PMU_AUTHSTATUS_NSNID_Pos)

#define PMU_AUTHSTATUS_SID_Pos                4U
#define PMU_AUTHSTATUS_SID_Msk               (0x3UL << PMU_AUTHSTATUS_SID_Pos)

#define PMU_AUTHSTATUS_SNID_Pos               6U
#define PMU_AUTHSTATUS_SNID_Msk              (0x3UL << PMU_AUTHSTATUS_SNID_Pos)

#define PMU_AUTHSTATUS_NSUID_Pos              16U
#define PMU_AUTHSTATUS_NSUID_Msk             (0x3UL << PMU_AUTHSTATUS_NSUID_Pos)

#define PMU_AUTHSTATUS_NSUNID_Pos             18U
#define PMU_AUTHSTATUS_NSUNID_Msk            (0x3UL << PMU_AUTHSTATUS_NSUNID_Pos)

#define PMU_AUTHSTATUS_SUID_Pos               20U
#define PMU_AUTHSTATUS_SUID_Msk              (0x3UL << PMU_AUTHSTATUS_SUID_Pos)

#define PMU_AUTHSTATUS_SUNID_Pos              22U
#define PMU_AUTHSTATUS_SUNID_Msk             (0x3UL << PMU_AUTHSTATUS_SUNID_Pos)


/*@} end of group CMSIS_PMU */
#endif

#if defined (__MPU_PRESENT) && (__MPU_PRESENT == 1U)
/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_MPU     Memory Protection Unit (MPU)
  \brief    Type definitions for the Memory Protection Unit (MPU)
  @{
 */

/**
  \brief  Structure type to access the Memory Protection Unit (MPU).
 */
typedef struct
{
  __IM  uint32_t TYPE;
  __IOM uint32_t CTRL;
  __IOM uint32_t RNR;
  __IOM uint32_t RBAR;
  __IOM uint32_t RLAR;
  __IOM uint32_t RBAR_A1;
  __IOM uint32_t RLAR_A1;
  __IOM uint32_t RBAR_A2;
  __IOM uint32_t RLAR_A2;
  __IOM uint32_t RBAR_A3;
  __IOM uint32_t RLAR_A3;
        uint32_t RESERVED0[1];
  union {
  __IOM uint32_t MAIR[2];
  struct {
  __IOM uint32_t MAIR0;
  __IOM uint32_t MAIR1;
  };
  };
} MPU_Type;

#define MPU_TYPE_RALIASES                  4U

/* MPU Type Register Definitions */
#define MPU_TYPE_IREGION_Pos               16U
#define MPU_TYPE_IREGION_Msk               (0xFFUL << MPU_TYPE_IREGION_Pos)

#define MPU_TYPE_DREGION_Pos                8U
#define MPU_TYPE_DREGION_Msk               (0xFFUL << MPU_TYPE_DREGION_Pos)

#define MPU_TYPE_SEPARATE_Pos               0U
#define MPU_TYPE_SEPARATE_Msk              (1UL)

/* MPU Control Register Definitions */
#define MPU_CTRL_PRIVDEFENA_Pos             2U
#define MPU_CTRL_PRIVDEFENA_Msk            (1UL << MPU_CTRL_PRIVDEFENA_Pos)

#define MPU_CTRL_HFNMIENA_Pos               1U
#define MPU_CTRL_HFNMIENA_Msk              (1UL << MPU_CTRL_HFNMIENA_Pos)

#define MPU_CTRL_ENABLE_Pos                 0U
#define MPU_CTRL_ENABLE_Msk                (1UL)

/* MPU Region Number Register Definitions */
#define MPU_RNR_REGION_Pos                  0U
#define MPU_RNR_REGION_Msk                 (0xFFUL)

/* MPU Region Base Address Register Definitions */
#define MPU_RBAR_BASE_Pos                   5U
#define MPU_RBAR_BASE_Msk                  (0x7FFFFFFUL << MPU_RBAR_BASE_Pos)

#define MPU_RBAR_SH_Pos                     3U
#define MPU_RBAR_SH_Msk                    (0x3UL << MPU_RBAR_SH_Pos)

#define MPU_RBAR_AP_Pos                     1U
#define MPU_RBAR_AP_Msk                    (0x3UL << MPU_RBAR_AP_Pos)

#define MPU_RBAR_XN_Pos                     0U
#define MPU_RBAR_XN_Msk                    (01UL)

/* MPU Region Limit Address Register Definitions */
#define MPU_RLAR_LIMIT_Pos                  5U
#define MPU_RLAR_LIMIT_Msk                 (0x7FFFFFFUL << MPU_RLAR_LIMIT_Pos)

#define MPU_RLAR_PXN_Pos                    4U
#define MPU_RLAR_PXN_Msk                   (1UL << MPU_RLAR_PXN_Pos)

#define MPU_RLAR_AttrIndx_Pos               1U
#define MPU_RLAR_AttrIndx_Msk              (7UL << MPU_RLAR_AttrIndx_Pos)

#define MPU_RLAR_EN_Pos                     0U
#define MPU_RLAR_EN_Msk                    (1UL)

/* MPU Memory Attribute Indirection Register 0 Definitions */
#define MPU_MAIR0_Attr3_Pos                24U
#define MPU_MAIR0_Attr3_Msk                (0xFFUL << MPU_MAIR0_Attr3_Pos)

#define MPU_MAIR0_Attr2_Pos                16U
#define MPU_MAIR0_Attr2_Msk                (0xFFUL << MPU_MAIR0_Attr2_Pos)

#define MPU_MAIR0_Attr1_Pos                 8U
#define MPU_MAIR0_Attr1_Msk                (0xFFUL << MPU_MAIR0_Attr1_Pos)

#define MPU_MAIR0_Attr0_Pos                 0U
#define MPU_MAIR0_Attr0_Msk                (0xFFUL)

/* MPU Memory Attribute Indirection Register 1 Definitions */
#define MPU_MAIR1_Attr7_Pos                24U
#define MPU_MAIR1_Attr7_Msk                (0xFFUL << MPU_MAIR1_Attr7_Pos)

#define MPU_MAIR1_Attr6_Pos                16U
#define MPU_MAIR1_Attr6_Msk                (0xFFUL << MPU_MAIR1_Attr6_Pos)

#define MPU_MAIR1_Attr5_Pos                 8U
#define MPU_MAIR1_Attr5_Msk                (0xFFUL << MPU_MAIR1_Attr5_Pos)

#define MPU_MAIR1_Attr4_Pos                 0U
#define MPU_MAIR1_Attr4_Msk                (0xFFUL)

/*@} end of group CMSIS_MPU */
#endif


#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_SAU     Security Attribution Unit (SAU)
  \brief    Type definitions for the Security Attribution Unit (SAU)
  @{
 */

/**
  \brief  Structure type to access the Security Attribution Unit (SAU).
 */
typedef struct
{
  __IOM uint32_t CTRL;
  __IM  uint32_t TYPE;
#if defined (__SAUREGION_PRESENT) && (__SAUREGION_PRESENT == 1U)
  __IOM uint32_t RNR;
  __IOM uint32_t RBAR;
  __IOM uint32_t RLAR;
#else
        uint32_t RESERVED0[3];
#endif
  __IOM uint32_t SFSR;
  __IOM uint32_t SFAR;
} SAU_Type;

/* SAU Control Register Definitions */
#define SAU_CTRL_ALLNS_Pos                  1U
#define SAU_CTRL_ALLNS_Msk                 (1UL << SAU_CTRL_ALLNS_Pos)

#define SAU_CTRL_ENABLE_Pos                 0U
#define SAU_CTRL_ENABLE_Msk                (1UL)

/* SAU Type Register Definitions */
#define SAU_TYPE_SREGION_Pos                0U
#define SAU_TYPE_SREGION_Msk               (0xFFUL)

#if defined (__SAUREGION_PRESENT) && (__SAUREGION_PRESENT == 1U)
/* SAU Region Number Register Definitions */
#define SAU_RNR_REGION_Pos                  0U
#define SAU_RNR_REGION_Msk                 (0xFFUL)

/* SAU Region Base Address Register Definitions */
#define SAU_RBAR_BADDR_Pos                  5U
#define SAU_RBAR_BADDR_Msk                 (0x7FFFFFFUL << SAU_RBAR_BADDR_Pos)

/* SAU Region Limit Address Register Definitions */
#define SAU_RLAR_LADDR_Pos                  5U
#define SAU_RLAR_LADDR_Msk                 (0x7FFFFFFUL << SAU_RLAR_LADDR_Pos)

#define SAU_RLAR_NSC_Pos                    1U
#define SAU_RLAR_NSC_Msk                   (1UL << SAU_RLAR_NSC_Pos)

#define SAU_RLAR_ENABLE_Pos                 0U
#define SAU_RLAR_ENABLE_Msk                (1UL)

#endif /* defined (__SAUREGION_PRESENT) && (__SAUREGION_PRESENT == 1U) */

/* Secure Fault Status Register Definitions */
#define SAU_SFSR_LSERR_Pos                  7U
#define SAU_SFSR_LSERR_Msk                 (1UL << SAU_SFSR_LSERR_Pos)

#define SAU_SFSR_SFARVALID_Pos              6U
#define SAU_SFSR_SFARVALID_Msk             (1UL << SAU_SFSR_SFARVALID_Pos)

#define SAU_SFSR_LSPERR_Pos                 5U
#define SAU_SFSR_LSPERR_Msk                (1UL << SAU_SFSR_LSPERR_Pos)

#define SAU_SFSR_INVTRAN_Pos                4U
#define SAU_SFSR_INVTRAN_Msk               (1UL << SAU_SFSR_INVTRAN_Pos)

#define SAU_SFSR_AUVIOL_Pos                 3U
#define SAU_SFSR_AUVIOL_Msk                (1UL << SAU_SFSR_AUVIOL_Pos)

#define SAU_SFSR_INVER_Pos                  2U
#define SAU_SFSR_INVER_Msk                 (1UL << SAU_SFSR_INVER_Pos)

#define SAU_SFSR_INVIS_Pos                  1U
#define SAU_SFSR_INVIS_Msk                 (1UL << SAU_SFSR_INVIS_Pos)

#define SAU_SFSR_INVEP_Pos                  0U
#define SAU_SFSR_INVEP_Msk                 (1UL)

/*@} end of group CMSIS_SAU */
#endif /* defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U) */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_FPU     Floating Point Unit (FPU)
  \brief    Type definitions for the Floating Point Unit (FPU)
  @{
 */

/**
  \brief  Structure type to access the Floating Point Unit (FPU).
 */
typedef struct
{
        uint32_t RESERVED0[1U];
  __IOM uint32_t FPCCR;
  __IOM uint32_t FPCAR;
  __IOM uint32_t FPDSCR;
  __IM  uint32_t MVFR0;
  __IM  uint32_t MVFR1;
  __IM  uint32_t MVFR2;
} FPU_Type;

/* Floating-Point Context Control Register Definitions */
#define FPU_FPCCR_ASPEN_Pos                31U
#define FPU_FPCCR_ASPEN_Msk                (1UL << FPU_FPCCR_ASPEN_Pos)

#define FPU_FPCCR_LSPEN_Pos                30U
#define FPU_FPCCR_LSPEN_Msk                (1UL << FPU_FPCCR_LSPEN_Pos)

#define FPU_FPCCR_LSPENS_Pos               29U
#define FPU_FPCCR_LSPENS_Msk               (1UL << FPU_FPCCR_LSPENS_Pos)

#define FPU_FPCCR_CLRONRET_Pos             28U
#define FPU_FPCCR_CLRONRET_Msk             (1UL << FPU_FPCCR_CLRONRET_Pos)

#define FPU_FPCCR_CLRONRETS_Pos            27U
#define FPU_FPCCR_CLRONRETS_Msk            (1UL << FPU_FPCCR_CLRONRETS_Pos)

#define FPU_FPCCR_TS_Pos                   26U
#define FPU_FPCCR_TS_Msk                   (1UL << FPU_FPCCR_TS_Pos)

#define FPU_FPCCR_UFRDY_Pos                10U
#define FPU_FPCCR_UFRDY_Msk                (1UL << FPU_FPCCR_UFRDY_Pos)

#define FPU_FPCCR_SPLIMVIOL_Pos             9U
#define FPU_FPCCR_SPLIMVIOL_Msk            (1UL << FPU_FPCCR_SPLIMVIOL_Pos)

#define FPU_FPCCR_MONRDY_Pos                8U
#define FPU_FPCCR_MONRDY_Msk               (1UL << FPU_FPCCR_MONRDY_Pos)

#define FPU_FPCCR_SFRDY_Pos                 7U
#define FPU_FPCCR_SFRDY_Msk                (1UL << FPU_FPCCR_SFRDY_Pos)

#define FPU_FPCCR_BFRDY_Pos                 6U
#define FPU_FPCCR_BFRDY_Msk                (1UL << FPU_FPCCR_BFRDY_Pos)

#define FPU_FPCCR_MMRDY_Pos                 5U
#define FPU_FPCCR_MMRDY_Msk                (1UL << FPU_FPCCR_MMRDY_Pos)

#define FPU_FPCCR_HFRDY_Pos                 4U
#define FPU_FPCCR_HFRDY_Msk                (1UL << FPU_FPCCR_HFRDY_Pos)

#define FPU_FPCCR_THREAD_Pos                3U
#define FPU_FPCCR_THREAD_Msk               (1UL << FPU_FPCCR_THREAD_Pos)

#define FPU_FPCCR_S_Pos                     2U
#define FPU_FPCCR_S_Msk                    (1UL << FPU_FPCCR_S_Pos)

#define FPU_FPCCR_USER_Pos                  1U
#define FPU_FPCCR_USER_Msk                 (1UL << FPU_FPCCR_USER_Pos)

#define FPU_FPCCR_LSPACT_Pos                0U
#define FPU_FPCCR_LSPACT_Msk               (1UL)

/* Floating-Point Context Address Register Definitions */
#define FPU_FPCAR_ADDRESS_Pos               3U
#define FPU_FPCAR_ADDRESS_Msk              (0x1FFFFFFFUL << FPU_FPCAR_ADDRESS_Pos)

/* Floating-Point Default Status Control Register Definitions */
#define FPU_FPDSCR_AHP_Pos                 26U
#define FPU_FPDSCR_AHP_Msk                 (1UL << FPU_FPDSCR_AHP_Pos)

#define FPU_FPDSCR_DN_Pos                  25U
#define FPU_FPDSCR_DN_Msk                  (1UL << FPU_FPDSCR_DN_Pos)

#define FPU_FPDSCR_FZ_Pos                  24U
#define FPU_FPDSCR_FZ_Msk                  (1UL << FPU_FPDSCR_FZ_Pos)

#define FPU_FPDSCR_RMode_Pos               22U
#define FPU_FPDSCR_RMode_Msk               (3UL << FPU_FPDSCR_RMode_Pos)

#define FPU_FPDSCR_FZ16_Pos                19U
#define FPU_FPDSCR_FZ16_Msk                (1UL << FPU_FPDSCR_FZ16_Pos)

#define FPU_FPDSCR_LTPSIZE_Pos             16U
#define FPU_FPDSCR_LTPSIZE_Msk             (7UL << FPU_FPDSCR_LTPSIZE_Pos)

/* Media and VFP Feature Register 0 Definitions */
#define FPU_MVFR0_FPRound_Pos              28U
#define FPU_MVFR0_FPRound_Msk              (0xFUL << FPU_MVFR0_FPRound_Pos)

#define FPU_MVFR0_FPSqrt_Pos               20U
#define FPU_MVFR0_FPSqrt_Msk               (0xFUL << FPU_MVFR0_FPSqrt_Pos)

#define FPU_MVFR0_FPDivide_Pos             16U
#define FPU_MVFR0_FPDivide_Msk             (0xFUL << FPU_MVFR0_FPDivide_Pos)

#define FPU_MVFR0_FPDP_Pos                  8U
#define FPU_MVFR0_FPDP_Msk                 (0xFUL << FPU_MVFR0_FPDP_Pos)

#define FPU_MVFR0_FPSP_Pos                  4U
#define FPU_MVFR0_FPSP_Msk                 (0xFUL << FPU_MVFR0_FPSP_Pos)

#define FPU_MVFR0_SIMDReg_Pos               0U
#define FPU_MVFR0_SIMDReg_Msk              (0xFUL)

/* Media and VFP Feature Register 1 Definitions */
#define FPU_MVFR1_FMAC_Pos                 28U
#define FPU_MVFR1_FMAC_Msk                 (0xFUL << FPU_MVFR1_FMAC_Pos)

#define FPU_MVFR1_FPHP_Pos                 24U
#define FPU_MVFR1_FPHP_Msk                 (0xFUL << FPU_MVFR1_FPHP_Pos)

#define FPU_MVFR1_FP16_Pos                 20U
#define FPU_MVFR1_FP16_Msk                 (0xFUL << FPU_MVFR1_FP16_Pos)

#define FPU_MVFR1_MVE_Pos                   8U
#define FPU_MVFR1_MVE_Msk                  (0xFUL << FPU_MVFR1_MVE_Pos)

#define FPU_MVFR1_FPDNaN_Pos                4U
#define FPU_MVFR1_FPDNaN_Msk               (0xFUL << FPU_MVFR1_FPDNaN_Pos)

#define FPU_MVFR1_FPFtZ_Pos                 0U
#define FPU_MVFR1_FPFtZ_Msk                (0xFUL)

/* Media and VFP Feature Register 2 Definitions */
#define FPU_MVFR2_FPMisc_Pos                4U
#define FPU_MVFR2_FPMisc_Msk               (0xFUL << FPU_MVFR2_FPMisc_Pos)

/*@} end of group CMSIS_FPU */

/* CoreDebug is deprecated. replaced by DCB (Debug Control Block) */
/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_CoreDebug       Core Debug Registers (CoreDebug)
  \brief    Type definitions for the Core Debug Registers
  @{
 */

/**
  \brief  \deprecated Structure type to access the Core Debug Register (CoreDebug).
 */
typedef struct
{
  __IOM uint32_t DHCSR;
  __OM  uint32_t DCRSR;
  __IOM uint32_t DCRDR;
  __IOM uint32_t DEMCR;
  __OM  uint32_t DSCEMCR;
  __IOM uint32_t DAUTHCTRL;
  __IOM uint32_t DSCSR;
} CoreDebug_Type;

/* Debug Halting Control and Status Register Definitions */
#define CoreDebug_DHCSR_DBGKEY_Pos         16U
#define CoreDebug_DHCSR_DBGKEY_Msk         (0xFFFFUL << CoreDebug_DHCSR_DBGKEY_Pos)

#define CoreDebug_DHCSR_S_RESTART_ST_Pos   26U
#define CoreDebug_DHCSR_S_RESTART_ST_Msk   (1UL << CoreDebug_DHCSR_S_RESTART_ST_Pos)

#define CoreDebug_DHCSR_S_RESET_ST_Pos     25U
#define CoreDebug_DHCSR_S_RESET_ST_Msk     (1UL << CoreDebug_DHCSR_S_RESET_ST_Pos)

#define CoreDebug_DHCSR_S_RETIRE_ST_Pos    24U
#define CoreDebug_DHCSR_S_RETIRE_ST_Msk    (1UL << CoreDebug_DHCSR_S_RETIRE_ST_Pos)

#define CoreDebug_DHCSR_S_FPD_Pos          23U
#define CoreDebug_DHCSR_S_FPD_Msk          (1UL << CoreDebug_DHCSR_S_FPD_Pos)

#define CoreDebug_DHCSR_S_SUIDE_Pos        22U
#define CoreDebug_DHCSR_S_SUIDE_Msk        (1UL << CoreDebug_DHCSR_S_SUIDE_Pos)

#define CoreDebug_DHCSR_S_NSUIDE_Pos       21U
#define CoreDebug_DHCSR_S_NSUIDE_Msk       (1UL << CoreDebug_DHCSR_S_NSUIDE_Pos)

#define CoreDebug_DHCSR_S_SDE_Pos          20U
#define CoreDebug_DHCSR_S_SDE_Msk          (1UL << CoreDebug_DHCSR_S_SDE_Pos)

#define CoreDebug_DHCSR_S_LOCKUP_Pos       19U
#define CoreDebug_DHCSR_S_LOCKUP_Msk       (1UL << CoreDebug_DHCSR_S_LOCKUP_Pos)

#define CoreDebug_DHCSR_S_SLEEP_Pos        18U
#define CoreDebug_DHCSR_S_SLEEP_Msk        (1UL << CoreDebug_DHCSR_S_SLEEP_Pos)

#define CoreDebug_DHCSR_S_HALT_Pos         17U
#define CoreDebug_DHCSR_S_HALT_Msk         (1UL << CoreDebug_DHCSR_S_HALT_Pos)

#define CoreDebug_DHCSR_S_REGRDY_Pos       16U
#define CoreDebug_DHCSR_S_REGRDY_Msk       (1UL << CoreDebug_DHCSR_S_REGRDY_Pos)

#define CoreDebug_DHCSR_C_PMOV_Pos          6U
#define CoreDebug_DHCSR_C_PMOV_Msk         (1UL << CoreDebug_DHCSR_C_PMOV_Pos)

#define CoreDebug_DHCSR_C_SNAPSTALL_Pos     5U
#define CoreDebug_DHCSR_C_SNAPSTALL_Msk    (1UL << CoreDebug_DHCSR_C_SNAPSTALL_Pos)

#define CoreDebug_DHCSR_C_MASKINTS_Pos      3U
#define CoreDebug_DHCSR_C_MASKINTS_Msk     (1UL << CoreDebug_DHCSR_C_MASKINTS_Pos)

#define CoreDebug_DHCSR_C_STEP_Pos          2U
#define CoreDebug_DHCSR_C_STEP_Msk         (1UL << CoreDebug_DHCSR_C_STEP_Pos)

#define CoreDebug_DHCSR_C_HALT_Pos          1U
#define CoreDebug_DHCSR_C_HALT_Msk         (1UL << CoreDebug_DHCSR_C_HALT_Pos)

#define CoreDebug_DHCSR_C_DEBUGEN_Pos       0U
#define CoreDebug_DHCSR_C_DEBUGEN_Msk      (1UL)

/* Debug Core Register Selector Register Definitions */
#define CoreDebug_DCRSR_REGWnR_Pos         16U
#define CoreDebug_DCRSR_REGWnR_Msk         (1UL << CoreDebug_DCRSR_REGWnR_Pos)

#define CoreDebug_DCRSR_REGSEL_Pos          0U
#define CoreDebug_DCRSR_REGSEL_Msk         (0x1FUL)

/* Debug Exception and Monitor Control Register Definitions */
#define CoreDebug_DEMCR_TRCENA_Pos         24U
#define CoreDebug_DEMCR_TRCENA_Msk         (1UL << CoreDebug_DEMCR_TRCENA_Pos)

#define CoreDebug_DEMCR_MON_REQ_Pos        19U
#define CoreDebug_DEMCR_MON_REQ_Msk        (1UL << CoreDebug_DEMCR_MON_REQ_Pos)

#define CoreDebug_DEMCR_MON_STEP_Pos       18U
#define CoreDebug_DEMCR_MON_STEP_Msk       (1UL << CoreDebug_DEMCR_MON_STEP_Pos)

#define CoreDebug_DEMCR_MON_PEND_Pos       17U
#define CoreDebug_DEMCR_MON_PEND_Msk       (1UL << CoreDebug_DEMCR_MON_PEND_Pos)

#define CoreDebug_DEMCR_MON_EN_Pos         16U
#define CoreDebug_DEMCR_MON_EN_Msk         (1UL << CoreDebug_DEMCR_MON_EN_Pos)

#define CoreDebug_DEMCR_VC_HARDERR_Pos     10U
#define CoreDebug_DEMCR_VC_HARDERR_Msk     (1UL << CoreDebug_DEMCR_VC_HARDERR_Pos)

#define CoreDebug_DEMCR_VC_INTERR_Pos       9U
#define CoreDebug_DEMCR_VC_INTERR_Msk      (1UL << CoreDebug_DEMCR_VC_INTERR_Pos)

#define CoreDebug_DEMCR_VC_BUSERR_Pos       8U
#define CoreDebug_DEMCR_VC_BUSERR_Msk      (1UL << CoreDebug_DEMCR_VC_BUSERR_Pos)

#define CoreDebug_DEMCR_VC_STATERR_Pos      7U
#define CoreDebug_DEMCR_VC_STATERR_Msk     (1UL << CoreDebug_DEMCR_VC_STATERR_Pos)

#define CoreDebug_DEMCR_VC_CHKERR_Pos       6U
#define CoreDebug_DEMCR_VC_CHKERR_Msk      (1UL << CoreDebug_DEMCR_VC_CHKERR_Pos)

#define CoreDebug_DEMCR_VC_NOCPERR_Pos      5U
#define CoreDebug_DEMCR_VC_NOCPERR_Msk     (1UL << CoreDebug_DEMCR_VC_NOCPERR_Pos)

#define CoreDebug_DEMCR_VC_MMERR_Pos        4U
#define CoreDebug_DEMCR_VC_MMERR_Msk       (1UL << CoreDebug_DEMCR_VC_MMERR_Pos)

#define CoreDebug_DEMCR_VC_CORERESET_Pos    0U
#define CoreDebug_DEMCR_VC_CORERESET_Msk   (1UL)

/* Debug Set Clear Exception and Monitor Control Register Definitions */
#define CoreDebug_DSCEMCR_CLR_MON_REQ_Pos  19U
#define CoreDebug_DSCEMCR_CLR_MON_REQ_Msk  (1UL << CoreDebug_DSCEMCR_CLR_MON_REQ_Pos)

#define CoreDebug_DSCEMCR_CLR_MON_PEND_Pos 17U
#define CoreDebug_DSCEMCR_CLR_MON_PEND_Msk (1UL << CoreDebug_DSCEMCR_CLR_MON_PEND_Pos)

#define CoreDebug_DSCEMCR_SET_MON_REQ_Pos   3U
#define CoreDebug_DSCEMCR_SET_MON_REQ_Msk  (1UL << CoreDebug_DSCEMCR_SET_MON_REQ_Pos)

#define CoreDebug_DSCEMCR_SET_MON_PEND_Pos  1U
#define CoreDebug_DSCEMCR_SET_MON_PEND_Msk (1UL << CoreDebug_DSCEMCR_SET_MON_PEND_Pos)

/* Debug Authentication Control Register Definitions */
#define CoreDebug_DAUTHCTRL_UIDEN_Pos      10U
#define CoreDebug_DAUTHCTRL_UIDEN_Msk      (1UL << CoreDebug_DAUTHCTRL_UIDEN_Pos)

#define CoreDebug_DAUTHCTRL_UIDAPEN_Pos     9U
#define CoreDebug_DAUTHCTRL_UIDAPEN_Msk    (1UL << CoreDebug_DAUTHCTRL_UIDAPEN_Pos)

#define CoreDebug_DAUTHCTRL_FSDMA_Pos       8U
#define CoreDebug_DAUTHCTRL_FSDMA_Msk      (1UL << CoreDebug_DAUTHCTRL_FSDMA_Pos)

#define CoreDebug_DAUTHCTRL_INTSPNIDEN_Pos  3U
#define CoreDebug_DAUTHCTRL_INTSPNIDEN_Msk (1UL << CoreDebug_DAUTHCTRL_INTSPNIDEN_Pos)

#define CoreDebug_DAUTHCTRL_SPNIDENSEL_Pos  2U
#define CoreDebug_DAUTHCTRL_SPNIDENSEL_Msk (1UL << CoreDebug_DAUTHCTRL_SPNIDENSEL_Pos)

#define CoreDebug_DAUTHCTRL_INTSPIDEN_Pos   1U
#define CoreDebug_DAUTHCTRL_INTSPIDEN_Msk  (1UL << CoreDebug_DAUTHCTRL_INTSPIDEN_Pos)

#define CoreDebug_DAUTHCTRL_SPIDENSEL_Pos   0U
#define CoreDebug_DAUTHCTRL_SPIDENSEL_Msk  (1UL)

/* Debug Security Control and Status Register Definitions */
#define CoreDebug_DSCSR_CDS_Pos            16U
#define CoreDebug_DSCSR_CDS_Msk            (1UL << CoreDebug_DSCSR_CDS_Pos)

#define CoreDebug_DSCSR_SBRSEL_Pos          1U
#define CoreDebug_DSCSR_SBRSEL_Msk         (1UL << CoreDebug_DSCSR_SBRSEL_Pos)

#define CoreDebug_DSCSR_SBRSELEN_Pos        0U
#define CoreDebug_DSCSR_SBRSELEN_Msk       (1UL)

/*@} end of group CMSIS_CoreDebug */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_DCB       Debug Control Block
  \brief    Type definitions for the Debug Control Block Registers
  @{
 */

/**
  \brief  Structure type to access the Debug Control Block Registers (DCB).
 */
typedef struct
{
  __IOM uint32_t DHCSR;
  __OM  uint32_t DCRSR;
  __IOM uint32_t DCRDR;
  __IOM uint32_t DEMCR;
  __OM  uint32_t DSCEMCR;
  __IOM uint32_t DAUTHCTRL;
  __IOM uint32_t DSCSR;
} DCB_Type;

/* DHCSR, Debug Halting Control and Status Register Definitions */
#define DCB_DHCSR_DBGKEY_Pos               16U
#define DCB_DHCSR_DBGKEY_Msk               (0xFFFFUL << DCB_DHCSR_DBGKEY_Pos)

#define DCB_DHCSR_S_RESTART_ST_Pos         26U
#define DCB_DHCSR_S_RESTART_ST_Msk         (0x1UL << DCB_DHCSR_S_RESTART_ST_Pos)

#define DCB_DHCSR_S_RESET_ST_Pos           25U
#define DCB_DHCSR_S_RESET_ST_Msk           (0x1UL << DCB_DHCSR_S_RESET_ST_Pos)

#define DCB_DHCSR_S_RETIRE_ST_Pos          24U
#define DCB_DHCSR_S_RETIRE_ST_Msk          (0x1UL << DCB_DHCSR_S_RETIRE_ST_Pos)

#define DCB_DHCSR_S_FPD_Pos                23U
#define DCB_DHCSR_S_FPD_Msk                (0x1UL << DCB_DHCSR_S_FPD_Pos)

#define DCB_DHCSR_S_SUIDE_Pos              22U
#define DCB_DHCSR_S_SUIDE_Msk              (0x1UL << DCB_DHCSR_S_SUIDE_Pos)

#define DCB_DHCSR_S_NSUIDE_Pos             21U
#define DCB_DHCSR_S_NSUIDE_Msk             (0x1UL << DCB_DHCSR_S_NSUIDE_Pos)

#define DCB_DHCSR_S_SDE_Pos                20U
#define DCB_DHCSR_S_SDE_Msk                (0x1UL << DCB_DHCSR_S_SDE_Pos)

#define DCB_DHCSR_S_LOCKUP_Pos             19U
#define DCB_DHCSR_S_LOCKUP_Msk             (0x1UL << DCB_DHCSR_S_LOCKUP_Pos)

#define DCB_DHCSR_S_SLEEP_Pos              18U
#define DCB_DHCSR_S_SLEEP_Msk              (0x1UL << DCB_DHCSR_S_SLEEP_Pos)

#define DCB_DHCSR_S_HALT_Pos               17U
#define DCB_DHCSR_S_HALT_Msk               (0x1UL << DCB_DHCSR_S_HALT_Pos)

#define DCB_DHCSR_S_REGRDY_Pos             16U
#define DCB_DHCSR_S_REGRDY_Msk             (0x1UL << DCB_DHCSR_S_REGRDY_Pos)

#define DCB_DHCSR_C_PMOV_Pos                6U
#define DCB_DHCSR_C_PMOV_Msk               (0x1UL << DCB_DHCSR_C_PMOV_Pos)

#define DCB_DHCSR_C_SNAPSTALL_Pos           5U
#define DCB_DHCSR_C_SNAPSTALL_Msk          (0x1UL << DCB_DHCSR_C_SNAPSTALL_Pos)

#define DCB_DHCSR_C_MASKINTS_Pos            3U
#define DCB_DHCSR_C_MASKINTS_Msk           (0x1UL << DCB_DHCSR_C_MASKINTS_Pos)

#define DCB_DHCSR_C_STEP_Pos                2U
#define DCB_DHCSR_C_STEP_Msk               (0x1UL << DCB_DHCSR_C_STEP_Pos)

#define DCB_DHCSR_C_HALT_Pos                1U
#define DCB_DHCSR_C_HALT_Msk               (0x1UL << DCB_DHCSR_C_HALT_Pos)

#define DCB_DHCSR_C_DEBUGEN_Pos             0U
#define DCB_DHCSR_C_DEBUGEN_Msk            (0x1UL)

/* DCRSR, Debug Core Register Select Register Definitions */
#define DCB_DCRSR_REGWnR_Pos               16U
#define DCB_DCRSR_REGWnR_Msk               (0x1UL << DCB_DCRSR_REGWnR_Pos)

#define DCB_DCRSR_REGSEL_Pos                0U
#define DCB_DCRSR_REGSEL_Msk               (0x7FUL)

/* DCRDR, Debug Core Register Data Register Definitions */
#define DCB_DCRDR_DBGTMP_Pos                0U
#define DCB_DCRDR_DBGTMP_Msk               (0xFFFFFFFFUL)

/* DEMCR, Debug Exception and Monitor Control Register Definitions */
#define DCB_DEMCR_TRCENA_Pos               24U
#define DCB_DEMCR_TRCENA_Msk               (0x1UL << DCB_DEMCR_TRCENA_Pos)

#define DCB_DEMCR_MONPRKEY_Pos             23U
#define DCB_DEMCR_MONPRKEY_Msk             (0x1UL << DCB_DEMCR_MONPRKEY_Pos)

#define DCB_DEMCR_UMON_EN_Pos              21U
#define DCB_DEMCR_UMON_EN_Msk              (0x1UL << DCB_DEMCR_UMON_EN_Pos)

#define DCB_DEMCR_SDME_Pos                 20U
#define DCB_DEMCR_SDME_Msk                 (0x1UL << DCB_DEMCR_SDME_Pos)

#define DCB_DEMCR_MON_REQ_Pos              19U
#define DCB_DEMCR_MON_REQ_Msk              (0x1UL << DCB_DEMCR_MON_REQ_Pos)

#define DCB_DEMCR_MON_STEP_Pos             18U
#define DCB_DEMCR_MON_STEP_Msk             (0x1UL << DCB_DEMCR_MON_STEP_Pos)

#define DCB_DEMCR_MON_PEND_Pos             17U
#define DCB_DEMCR_MON_PEND_Msk             (0x1UL << DCB_DEMCR_MON_PEND_Pos)

#define DCB_DEMCR_MON_EN_Pos               16U
#define DCB_DEMCR_MON_EN_Msk               (0x1UL << DCB_DEMCR_MON_EN_Pos)

#define DCB_DEMCR_VC_SFERR_Pos             11U
#define DCB_DEMCR_VC_SFERR_Msk             (0x1UL << DCB_DEMCR_VC_SFERR_Pos)

#define DCB_DEMCR_VC_HARDERR_Pos           10U
#define DCB_DEMCR_VC_HARDERR_Msk           (0x1UL << DCB_DEMCR_VC_HARDERR_Pos)

#define DCB_DEMCR_VC_INTERR_Pos             9U
#define DCB_DEMCR_VC_INTERR_Msk            (0x1UL << DCB_DEMCR_VC_INTERR_Pos)

#define DCB_DEMCR_VC_BUSERR_Pos             8U
#define DCB_DEMCR_VC_BUSERR_Msk            (0x1UL << DCB_DEMCR_VC_BUSERR_Pos)

#define DCB_DEMCR_VC_STATERR_Pos            7U
#define DCB_DEMCR_VC_STATERR_Msk           (0x1UL << DCB_DEMCR_VC_STATERR_Pos)

#define DCB_DEMCR_VC_CHKERR_Pos             6U
#define DCB_DEMCR_VC_CHKERR_Msk            (0x1UL << DCB_DEMCR_VC_CHKERR_Pos)

#define DCB_DEMCR_VC_NOCPERR_Pos            5U
#define DCB_DEMCR_VC_NOCPERR_Msk           (0x1UL << DCB_DEMCR_VC_NOCPERR_Pos)

#define DCB_DEMCR_VC_MMERR_Pos              4U
#define DCB_DEMCR_VC_MMERR_Msk             (0x1UL << DCB_DEMCR_VC_MMERR_Pos)

#define DCB_DEMCR_VC_CORERESET_Pos          0U
#define DCB_DEMCR_VC_CORERESET_Msk         (0x1UL)

/* DSCEMCR, Debug Set Clear Exception and Monitor Control Register Definitions */
#define DCB_DSCEMCR_CLR_MON_REQ_Pos        19U
#define DCB_DSCEMCR_CLR_MON_REQ_Msk        (0x1UL << DCB_DSCEMCR_CLR_MON_REQ_Pos)

#define DCB_DSCEMCR_CLR_MON_PEND_Pos       17U
#define DCB_DSCEMCR_CLR_MON_PEND_Msk       (0x1UL << DCB_DSCEMCR_CLR_MON_PEND_Pos)

#define DCB_DSCEMCR_SET_MON_REQ_Pos         3U
#define DCB_DSCEMCR_SET_MON_REQ_Msk        (0x1UL << DCB_DSCEMCR_SET_MON_REQ_Pos)

#define DCB_DSCEMCR_SET_MON_PEND_Pos        1U
#define DCB_DSCEMCR_SET_MON_PEND_Msk       (0x1UL << DCB_DSCEMCR_SET_MON_PEND_Pos)

/* DAUTHCTRL, Debug Authentication Control Register Definitions */
#define DCB_DAUTHCTRL_UIDEN_Pos            10U
#define DCB_DAUTHCTRL_UIDEN_Msk            (0x1UL << DCB_DAUTHCTRL_UIDEN_Pos)

#define DCB_DAUTHCTRL_UIDAPEN_Pos           9U
#define DCB_DAUTHCTRL_UIDAPEN_Msk          (0x1UL << DCB_DAUTHCTRL_UIDAPEN_Pos)

#define DCB_DAUTHCTRL_FSDMA_Pos             8U
#define DCB_DAUTHCTRL_FSDMA_Msk            (0x1UL << DCB_DAUTHCTRL_FSDMA_Pos)

#define DCB_DAUTHCTRL_INTSPNIDEN_Pos        3U
#define DCB_DAUTHCTRL_INTSPNIDEN_Msk       (0x1UL << DCB_DAUTHCTRL_INTSPNIDEN_Pos)

#define DCB_DAUTHCTRL_SPNIDENSEL_Pos        2U
#define DCB_DAUTHCTRL_SPNIDENSEL_Msk       (0x1UL << DCB_DAUTHCTRL_SPNIDENSEL_Pos)

#define DCB_DAUTHCTRL_INTSPIDEN_Pos         1U
#define DCB_DAUTHCTRL_INTSPIDEN_Msk        (0x1UL << DCB_DAUTHCTRL_INTSPIDEN_Pos)

#define DCB_DAUTHCTRL_SPIDENSEL_Pos         0U
#define DCB_DAUTHCTRL_SPIDENSEL_Msk        (0x1UL)

/* DSCSR, Debug Security Control and Status Register Definitions */
#define DCB_DSCSR_CDSKEY_Pos               17U
#define DCB_DSCSR_CDSKEY_Msk               (0x1UL << DCB_DSCSR_CDSKEY_Pos)

#define DCB_DSCSR_CDS_Pos                  16U
#define DCB_DSCSR_CDS_Msk                  (0x1UL << DCB_DSCSR_CDS_Pos)

#define DCB_DSCSR_SBRSEL_Pos                1U
#define DCB_DSCSR_SBRSEL_Msk               (0x1UL << DCB_DSCSR_SBRSEL_Pos)

#define DCB_DSCSR_SBRSELEN_Pos              0U
#define DCB_DSCSR_SBRSELEN_Msk             (0x1UL)

/*@} end of group CMSIS_DCB */



/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_DIB       Debug Identification Block
  \brief    Type definitions for the Debug Identification Block Registers
  @{
 */

/**
  \brief  Structure type to access the Debug Identification Block Registers (DIB).
 */
typedef struct
{
  __OM  uint32_t DLAR;
  __IM  uint32_t DLSR;
  __IM  uint32_t DAUTHSTATUS;
  __IM  uint32_t DDEVARCH;
  __IM  uint32_t DDEVTYPE;
} DIB_Type;

/* DLAR, SCS Software Lock Access Register Definitions */
#define DIB_DLAR_KEY_Pos                    0U
#define DIB_DLAR_KEY_Msk                   (0xFFFFFFFFUL)

/* DLSR, SCS Software Lock Status Register Definitions */
#define DIB_DLSR_nTT_Pos                    2U
#define DIB_DLSR_nTT_Msk                   (0x1UL << DIB_DLSR_nTT_Pos )

#define DIB_DLSR_SLK_Pos                    1U
#define DIB_DLSR_SLK_Msk                   (0x1UL << DIB_DLSR_SLK_Pos )

#define DIB_DLSR_SLI_Pos                    0U
#define DIB_DLSR_SLI_Msk                   (0x1UL)

/* DAUTHSTATUS, Debug Authentication Status Register Definitions */
#define DIB_DAUTHSTATUS_SUNID_Pos          22U
#define DIB_DAUTHSTATUS_SUNID_Msk          (0x3UL << DIB_DAUTHSTATUS_SUNID_Pos )

#define DIB_DAUTHSTATUS_SUID_Pos           20U
#define DIB_DAUTHSTATUS_SUID_Msk           (0x3UL << DIB_DAUTHSTATUS_SUID_Pos )

#define DIB_DAUTHSTATUS_NSUNID_Pos         18U
#define DIB_DAUTHSTATUS_NSUNID_Msk         (0x3UL << DIB_DAUTHSTATUS_NSUNID_Pos )

#define DIB_DAUTHSTATUS_NSUID_Pos          16U
#define DIB_DAUTHSTATUS_NSUID_Msk          (0x3UL << DIB_DAUTHSTATUS_NSUID_Pos )

#define DIB_DAUTHSTATUS_SNID_Pos            6U
#define DIB_DAUTHSTATUS_SNID_Msk           (0x3UL << DIB_DAUTHSTATUS_SNID_Pos )

#define DIB_DAUTHSTATUS_SID_Pos             4U
#define DIB_DAUTHSTATUS_SID_Msk            (0x3UL << DIB_DAUTHSTATUS_SID_Pos )

#define DIB_DAUTHSTATUS_NSNID_Pos           2U
#define DIB_DAUTHSTATUS_NSNID_Msk          (0x3UL << DIB_DAUTHSTATUS_NSNID_Pos )

#define DIB_DAUTHSTATUS_NSID_Pos            0U
#define DIB_DAUTHSTATUS_NSID_Msk           (0x3UL)

/* DDEVARCH, SCS Device Architecture Register Definitions */
#define DIB_DDEVARCH_ARCHITECT_Pos         21U
#define DIB_DDEVARCH_ARCHITECT_Msk         (0x7FFUL << DIB_DDEVARCH_ARCHITECT_Pos )

#define DIB_DDEVARCH_PRESENT_Pos           20U
#define DIB_DDEVARCH_PRESENT_Msk           (0x1FUL << DIB_DDEVARCH_PRESENT_Pos )

#define DIB_DDEVARCH_REVISION_Pos          16U
#define DIB_DDEVARCH_REVISION_Msk          (0xFUL << DIB_DDEVARCH_REVISION_Pos )

#define DIB_DDEVARCH_ARCHVER_Pos           12U
#define DIB_DDEVARCH_ARCHVER_Msk           (0xFUL << DIB_DDEVARCH_ARCHVER_Pos )

#define DIB_DDEVARCH_ARCHPART_Pos           0U
#define DIB_DDEVARCH_ARCHPART_Msk          (0xFFFUL)

/* DDEVTYPE, SCS Device Type Register Definitions */
#define DIB_DDEVTYPE_SUB_Pos                4U
#define DIB_DDEVTYPE_SUB_Msk               (0xFUL << DIB_DDEVTYPE_SUB_Pos )

#define DIB_DDEVTYPE_MAJOR_Pos              0U
#define DIB_DDEVTYPE_MAJOR_Msk             (0xFUL)


/*@} end of group CMSIS_DIB */


/**
  \ingroup    CMSIS_core_register
  \defgroup   CMSIS_core_bitfield     Core register bit field macros
  \brief      Macros for use with bit field definitions (xxx_Pos, xxx_Msk).
  @{
 */

/**
  \brief   Mask and shift a bit field value for use in a register bit range.
  \param[in] field  Name of the register bit field.
  \param[in] value  Value of the bit field. This parameter is interpreted as an uint32_t type.
  \return           Masked and shifted value.
*/
#define _VAL2FLD(field, value)    (((uint32_t)(value) << field ## _Pos) & field ## _Msk)

/**
  \brief     Mask and shift a register value to extract a bit filed value.
  \param[in] field  Name of the register bit field.
  \param[in] value  Value of register. This parameter is interpreted as an uint32_t type.
  \return           Masked and shifted bit field value.
*/
#define _FLD2VAL(field, value)    (((uint32_t)(value) & field ## _Msk) >> field ## _Pos)

/*@} end of group CMSIS_core_bitfield */


/**
  \ingroup    CMSIS_core_register
  \defgroup   CMSIS_core_base     Core Definitions
  \brief      Definitions for base addresses, unions, and structures.
  @{
 */

/* Memory mapping of Core Hardware */
  #define SCS_BASE            (0xE000E000UL)
  #define ITM_BASE            (0xE0000000UL)
  #define DWT_BASE            (0xE0001000UL)
  #define MEMSYSCTL_BASE      (0xE001E000UL)
  #define ERRBNK_BASE         (0xE001E100UL)
  #define PWRMODCTL_BASE      (0xE001E300UL)
  #define EWIC_BASE           (0xE001E400UL)
  #define PRCCFGINF_BASE      (0xE001E700UL)
  #define TPI_BASE            (0xE0040000UL)
  #define CoreDebug_BASE      (0xE000EDF0UL)
  #define DCB_BASE            (0xE000EDF0UL)
  #define DIB_BASE            (0xE000EFB0UL)
  #define SysTick_BASE        (SCS_BASE +  0x0010UL)
  #define NVIC_BASE           (SCS_BASE +  0x0100UL)
  #define SCB_BASE            (SCS_BASE +  0x0D00UL)

  #define ICB                 ((ICB_Type       *)     SCS_BASE         )
  #define SCB                 ((SCB_Type       *)     SCB_BASE         )
  #define SysTick             ((SysTick_Type   *)     SysTick_BASE     )
  #define NVIC                ((NVIC_Type      *)     NVIC_BASE        )
  #define ITM                 ((ITM_Type       *)     ITM_BASE         )
  #define DWT                 ((DWT_Type       *)     DWT_BASE         )
  #define TPI                 ((TPI_Type       *)     TPI_BASE         )
  #define MEMSYSCTL           ((MemSysCtl_Type *)     MEMSYSCTL_BASE   )
  #define ERRBNK              ((ErrBnk_Type    *)     ERRBNK_BASE      )
  #define PWRMODCTL           ((PwrModCtl_Type *)     PWRMODCTL_BASE   )
  #define EWIC                ((EWIC_Type      *)     EWIC_BASE        )
  #define PRCCFGINF           ((PrcCfgInf_Type *)     PRCCFGINF_BASE   )
  #define CoreDebug           ((CoreDebug_Type *)     CoreDebug_BASE   )
  #define DCB                 ((DCB_Type       *)     DCB_BASE         )
  #define DIB                 ((DIB_Type       *)     DIB_BASE         )

  #if defined (__MPU_PRESENT) && (__MPU_PRESENT == 1U)
    #define MPU_BASE          (SCS_BASE +  0x0D90UL)
    #define MPU               ((MPU_Type       *)     MPU_BASE         )
  #endif

  #if defined (__PMU_PRESENT) && (__PMU_PRESENT == 1U)
    #define PMU_BASE          (0xE0003000UL)
    #define PMU               ((PMU_Type       *)     PMU_BASE         )
  #endif

  #if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
    #define SAU_BASE          (SCS_BASE +  0x0DD0UL)
    #define SAU               ((SAU_Type       *)     SAU_BASE         )
  #endif

  #define FPU_BASE            (SCS_BASE +  0x0F30UL)
  #define FPU                 ((FPU_Type       *)     FPU_BASE         )

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
  #define SCS_BASE_NS         (0xE002E000UL)
  #define CoreDebug_BASE_NS   (0xE002EDF0UL)
  #define DCB_BASE_NS         (0xE002EDF0UL)
  #define DIB_BASE_NS         (0xE002EFB0UL)
  #define SysTick_BASE_NS     (SCS_BASE_NS +  0x0010UL)
  #define NVIC_BASE_NS        (SCS_BASE_NS +  0x0100UL)
  #define SCB_BASE_NS         (SCS_BASE_NS +  0x0D00UL)

  #define ICB_NS              ((ICB_Type       *)     SCS_BASE_NS      )
  #define SCB_NS              ((SCB_Type       *)     SCB_BASE_NS      )
  #define SysTick_NS          ((SysTick_Type   *)     SysTick_BASE_NS  )
  #define NVIC_NS             ((NVIC_Type      *)     NVIC_BASE_NS     )
  #define CoreDebug_NS        ((CoreDebug_Type *)     CoreDebug_BASE_NS)
  #define DCB_NS              ((DCB_Type       *)     DCB_BASE_NS      )
  #define DIB_NS              ((DIB_Type       *)     DIB_BASE_NS      )

  #if defined (__MPU_PRESENT) && (__MPU_PRESENT == 1U)
    #define MPU_BASE_NS       (SCS_BASE_NS +  0x0D90UL)
    #define MPU_NS            ((MPU_Type       *)     MPU_BASE_NS      )
  #endif

  #define FPU_BASE_NS         (SCS_BASE_NS +  0x0F30UL)
  #define FPU_NS              ((FPU_Type       *)     FPU_BASE_NS      )

#endif /* defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U) */
/*@} */


/**
  \ingroup    CMSIS_core_register
  \defgroup   CMSIS_register_aliases     Backwards Compatibility Aliases
  \brief      Register alias definitions for backwards compatibility.
  @{
 */

/*@} */


/*******************************************************************************
 *                Hardware Abstraction Layer
  Core Function Interface contains:
  - Core NVIC Functions
  - Core SysTick Functions
  - Core Debug Functions
  - Core Register Access Functions
 ******************************************************************************/
/**
  \defgroup CMSIS_Core_FunctionInterface Functions and Instructions Reference
*/



/* ##########################   NVIC functions  #################################### */
/**
  \ingroup  CMSIS_Core_FunctionInterface
  \defgroup CMSIS_Core_NVICFunctions NVIC Functions
  \brief    Functions that manage interrupts and exceptions via the NVIC.
  @{
 */

#ifdef CMSIS_NVIC_VIRTUAL
  #ifndef CMSIS_NVIC_VIRTUAL_HEADER_FILE
    #define CMSIS_NVIC_VIRTUAL_HEADER_FILE "cmsis_nvic_virtual.h"
  #endif
  #include CMSIS_NVIC_VIRTUAL_HEADER_FILE
#else
  #define NVIC_SetPriorityGrouping    __NVIC_SetPriorityGrouping
  #define NVIC_GetPriorityGrouping    __NVIC_GetPriorityGrouping
  #define NVIC_EnableIRQ              __NVIC_EnableIRQ
  #define NVIC_GetEnableIRQ           __NVIC_GetEnableIRQ
  #define NVIC_DisableIRQ             __NVIC_DisableIRQ
  #define NVIC_GetPendingIRQ          __NVIC_GetPendingIRQ
  #define NVIC_SetPendingIRQ          __NVIC_SetPendingIRQ
  #define NVIC_ClearPendingIRQ        __NVIC_ClearPendingIRQ
  #define NVIC_GetActive              __NVIC_GetActive
  #define NVIC_SetPriority            __NVIC_SetPriority
  #define NVIC_GetPriority            __NVIC_GetPriority
  #define NVIC_SystemReset            __NVIC_SystemReset
#endif /* CMSIS_NVIC_VIRTUAL */

#ifdef CMSIS_VECTAB_VIRTUAL
  #ifndef CMSIS_VECTAB_VIRTUAL_HEADER_FILE
    #define CMSIS_VECTAB_VIRTUAL_HEADER_FILE "cmsis_vectab_virtual.h"
  #endif
  #include CMSIS_VECTAB_VIRTUAL_HEADER_FILE
#else
  #define NVIC_SetVector              __NVIC_SetVector
  #define NVIC_GetVector              __NVIC_GetVector
#endif  /* (CMSIS_VECTAB_VIRTUAL) */

#define NVIC_USER_IRQ_OFFSET          16


/* Special LR values for Secure/Non-Secure call handling and exception handling                                               */

/* Function Return Payload (from ARMv8-M Architecture Reference Manual) LR value on entry from Secure BLXNS                   */
#define FNC_RETURN                 (0xFEFFFFFFUL)

/* The following EXC_RETURN mask values are used to evaluate the LR on exception entry */
#define EXC_RETURN_PREFIX          (0xFF000000UL)
#define EXC_RETURN_S               (0x00000040UL)
#define EXC_RETURN_DCRS            (0x00000020UL)
#define EXC_RETURN_FTYPE           (0x00000010UL)
#define EXC_RETURN_MODE            (0x00000008UL)
#define EXC_RETURN_SPSEL           (0x00000004UL)
#define EXC_RETURN_ES              (0x00000001UL)

/* Integrity Signature (from ARMv8-M Architecture Reference Manual) for exception context stacking                            */
#if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)  /* Value for processors with floating-point extension:                  */
#define EXC_INTEGRITY_SIGNATURE     (0xFEFA125AUL)
#else
#define EXC_INTEGRITY_SIGNATURE     (0xFEFA125BUL)
#endif


/**
  \brief   Set Priority Grouping
  \details Sets the priority grouping field using the required unlock sequence.
           The parameter PriorityGroup is assigned to the field SCB->AIRCR [10:8] PRIGROUP field.
           Only values from 0..7 are used.
           In case of a conflict between priority grouping and available
           priority bits (__NVIC_PRIO_BITS), the smallest possible priority group is set.
  \param [in]      PriorityGroup  Priority grouping field.
 */
__STATIC_INLINE void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value  =  SCB->AIRCR;
  reg_value &= ~((uint32_t)(SCB_AIRCR_VECTKEY_Msk | SCB_AIRCR_PRIGROUP_Msk));
  reg_value  =  (reg_value                                   |
                ((uint32_t)0x5FAUL << SCB_AIRCR_VECTKEY_Pos) |
                (PriorityGroupTmp << SCB_AIRCR_PRIGROUP_Pos)  );
  SCB->AIRCR =  reg_value;
}


/**
  \brief   Get Priority Grouping
  \details Reads the priority grouping field from the NVIC Interrupt Controller.
  \return                Priority grouping field (SCB->AIRCR [10:8] PRIGROUP field).
 */
__STATIC_INLINE uint32_t __NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((SCB->AIRCR & SCB_AIRCR_PRIGROUP_Msk) >> SCB_AIRCR_PRIGROUP_Pos));
}


/**
  \brief   Enable Interrupt
  \details Enables a device specific interrupt in the NVIC interrupt controller.
  \param [in]      IRQn  Device specific interrupt number.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE void __NVIC_EnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    __COMPILER_BARRIER();
    NVIC->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __COMPILER_BARRIER();
  }
}


/**
  \brief   Get Interrupt Enable status
  \details Returns a device specific interrupt enable status from the NVIC interrupt controller.
  \param [in]      IRQn  Device specific interrupt number.
  \return             0  Interrupt is not enabled.
  \return             1  Interrupt is enabled.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((NVIC->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}


/**
  \brief   Disable Interrupt
  \details Disables a device specific interrupt in the NVIC interrupt controller.
  \param [in]      IRQn  Device specific interrupt number.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE void __NVIC_DisableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}


/**
  \brief   Get Pending Interrupt
  \details Reads the NVIC pending register and returns the pending bit for the specified device specific interrupt.
  \param [in]      IRQn  Device specific interrupt number.
  \return             0  Interrupt status is not pending.
  \return             1  Interrupt status is pending.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((NVIC->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}


/**
  \brief   Set Pending Interrupt
  \details Sets the pending bit of a device specific interrupt in the NVIC pending register.
  \param [in]      IRQn  Device specific interrupt number.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}


/**
  \brief   Clear Pending Interrupt
  \details Clears the pending bit of a device specific interrupt in the NVIC pending register.
  \param [in]      IRQn  Device specific interrupt number.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}


/**
  \brief   Get Active Interrupt
  \details Reads the active register in the NVIC and returns the active bit for the device specific interrupt.
  \param [in]      IRQn  Device specific interrupt number.
  \return             0  Interrupt status is not active.
  \return             1  Interrupt status is active.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE uint32_t __NVIC_GetActive(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((NVIC->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}


#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
/**
  \brief   Get Interrupt Target State
  \details Reads the interrupt target field in the NVIC and returns the interrupt target bit for the device specific interrupt.
  \param [in]      IRQn  Device specific interrupt number.
  \return             0  if interrupt is assigned to Secure
  \return             1  if interrupt is assigned to Non Secure
  \note    IRQn must not be negative.
 */
__STATIC_INLINE uint32_t NVIC_GetTargetState(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((NVIC->ITNS[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}


/**
  \brief   Set Interrupt Target State
  \details Sets the interrupt target field in the NVIC and returns the interrupt target bit for the device specific interrupt.
  \param [in]      IRQn  Device specific interrupt number.
  \return             0  if interrupt is assigned to Secure
                      1  if interrupt is assigned to Non Secure
  \note    IRQn must not be negative.
 */
__STATIC_INLINE uint32_t NVIC_SetTargetState(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC->ITNS[(((uint32_t)IRQn) >> 5UL)] |=  ((uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL)));
    return((uint32_t)(((NVIC->ITNS[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}


/**
  \brief   Clear Interrupt Target State
  \details Clears the interrupt target field in the NVIC and returns the interrupt target bit for the device specific interrupt.
  \param [in]      IRQn  Device specific interrupt number.
  \return             0  if interrupt is assigned to Secure
                      1  if interrupt is assigned to Non Secure
  \note    IRQn must not be negative.
 */
__STATIC_INLINE uint32_t NVIC_ClearTargetState(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC->ITNS[(((uint32_t)IRQn) >> 5UL)] &= ~((uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL)));
    return((uint32_t)(((NVIC->ITNS[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
#endif /* defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U) */


/**
  \brief   Set Interrupt Priority
  \details Sets the priority of a device specific interrupt or a processor exception.
           The interrupt number can be positive to specify a device specific interrupt,
           or negative to specify a processor exception.
  \param [in]      IRQn  Interrupt number.
  \param [in]  priority  Priority to set.
  \note    The priority cannot be set for every processor exception.
 */
__STATIC_INLINE void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC->IPR[((uint32_t)IRQn)]               = (uint8_t)((priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL);
  }
  else
  {
    SCB->SHPR[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL);
  }
}


/**
  \brief   Get Interrupt Priority
  \details Reads the priority of a device specific interrupt or a processor exception.
           The interrupt number can be positive to specify a device specific interrupt,
           or negative to specify a processor exception.
  \param [in]   IRQn  Interrupt number.
  \return             Interrupt Priority.
                      Value is aligned automatically to the implemented priority bits of the microcontroller.
 */
__STATIC_INLINE uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return(((uint32_t)NVIC->IPR[((uint32_t)IRQn)]               >> (8U - __NVIC_PRIO_BITS)));
  }
  else
  {
    return(((uint32_t)SCB->SHPR[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - __NVIC_PRIO_BITS)));
  }
}


/**
  \brief   Encode Priority
  \details Encodes the priority for an interrupt with the given priority group,
           preemptive priority value, and subpriority value.
           In case of a conflict between priority grouping and available
           priority bits (__NVIC_PRIO_BITS), the smallest possible priority group is set.
  \param [in]     PriorityGroup  Used priority group.
  \param [in]   PreemptPriority  Preemptive priority value (starting from 0).
  \param [in]       SubPriority  Subpriority value (starting from 0).
  \return                        Encoded priority. Value can be used in the function \ref NVIC_SetPriority().
 */
__STATIC_INLINE uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(__NVIC_PRIO_BITS)) ? (uint32_t)(__NVIC_PRIO_BITS) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits     = ((PriorityGroupTmp + (uint32_t)(__NVIC_PRIO_BITS)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(__NVIC_PRIO_BITS));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority     & (uint32_t)((1UL << (SubPriorityBits    )) - 1UL)))
         );
}


/**
  \brief   Decode Priority
  \details Decodes an interrupt priority value with a given priority group to
           preemptive priority value and subpriority value.
           In case of a conflict between priority grouping and available
           priority bits (__NVIC_PRIO_BITS) the smallest possible priority group is set.
  \param [in]         Priority   Priority value, which can be retrieved with the function \ref NVIC_GetPriority().
  \param [in]     PriorityGroup  Used priority group.
  \param [out] pPreemptPriority  Preemptive priority value (starting from 0).
  \param [out]     pSubPriority  Subpriority value (starting from 0).
 */
__STATIC_INLINE void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(__NVIC_PRIO_BITS)) ? (uint32_t)(__NVIC_PRIO_BITS) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits     = ((PriorityGroupTmp + (uint32_t)(__NVIC_PRIO_BITS)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(__NVIC_PRIO_BITS));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority     = (Priority                   ) & (uint32_t)((1UL << (SubPriorityBits    )) - 1UL);
}


/**
  \brief   Set Interrupt Vector
  \details Sets an interrupt vector in SRAM based interrupt vector table.
           The interrupt number can be positive to specify a device specific interrupt,
           or negative to specify a processor exception.
           VTOR must been relocated to SRAM before.
  \param [in]   IRQn      Interrupt number
  \param [in]   vector    Address of interrupt handler function
 */
__STATIC_INLINE void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{
  uint32_t *vectors = (uint32_t *)SCB->VTOR;
  vectors[(int32_t)IRQn + NVIC_USER_IRQ_OFFSET] = vector;
  __DSB();
}


/**
  \brief   Get Interrupt Vector
  \details Reads an interrupt vector from interrupt vector table.
           The interrupt number can be positive to specify a device specific interrupt,
           or negative to specify a processor exception.
  \param [in]   IRQn      Interrupt number.
  \return                 Address of interrupt handler function
 */
__STATIC_INLINE uint32_t __NVIC_GetVector(IRQn_Type IRQn)
{
  uint32_t *vectors = (uint32_t *)SCB->VTOR;
  return vectors[(int32_t)IRQn + NVIC_USER_IRQ_OFFSET];
}


/**
  \brief   System Reset
  \details Initiates a system reset request to reset the MCU.
 */
__NO_RETURN __STATIC_INLINE void __NVIC_SystemReset(void)
{
  __DSB();                                                          /* Ensure all outstanding memory accesses included
                                                                       buffered write are completed before reset */
  SCB->AIRCR  = (uint32_t)((0x5FAUL << SCB_AIRCR_VECTKEY_Pos)    |
                           (SCB->AIRCR & SCB_AIRCR_PRIGROUP_Msk) |
                            SCB_AIRCR_SYSRESETREQ_Msk    );
  __DSB();

  for(;;)
  {
    __NOP();
  }
}

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
/**
  \brief   Set Priority Grouping (non-secure)
  \details Sets the non-secure priority grouping field when in secure state using the required unlock sequence.
           The parameter PriorityGroup is assigned to the field SCB->AIRCR [10:8] PRIGROUP field.
           Only values from 0..7 are used.
           In case of a conflict between priority grouping and available
           priority bits (__NVIC_PRIO_BITS), the smallest possible priority group is set.
  \param [in]      PriorityGroup  Priority grouping field.
 */
__STATIC_INLINE void TZ_NVIC_SetPriorityGrouping_NS(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value  =  SCB_NS->AIRCR;
  reg_value &= ~((uint32_t)(SCB_AIRCR_VECTKEY_Msk | SCB_AIRCR_PRIGROUP_Msk));
  reg_value  =  (reg_value                                   |
                ((uint32_t)0x5FAUL << SCB_AIRCR_VECTKEY_Pos) |
                (PriorityGroupTmp << SCB_AIRCR_PRIGROUP_Pos)                      );
  SCB_NS->AIRCR =  reg_value;
}


/**
  \brief   Get Priority Grouping (non-secure)
  \details Reads the priority grouping field from the non-secure NVIC when in secure state.
  \return                Priority grouping field (SCB->AIRCR [10:8] PRIGROUP field).
 */
__STATIC_INLINE uint32_t TZ_NVIC_GetPriorityGrouping_NS(void)
{
  return ((uint32_t)((SCB_NS->AIRCR & SCB_AIRCR_PRIGROUP_Msk) >> SCB_AIRCR_PRIGROUP_Pos));
}


/**
  \brief   Enable Interrupt (non-secure)
  \details Enables a device specific interrupt in the non-secure NVIC interrupt controller when in secure state.
  \param [in]      IRQn  Device specific interrupt number.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE void TZ_NVIC_EnableIRQ_NS(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC_NS->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}


/**
  \brief   Get Interrupt Enable status (non-secure)
  \details Returns a device specific interrupt enable status from the non-secure NVIC interrupt controller when in secure state.
  \param [in]      IRQn  Device specific interrupt number.
  \return             0  Interrupt is not enabled.
  \return             1  Interrupt is enabled.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE uint32_t TZ_NVIC_GetEnableIRQ_NS(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((NVIC_NS->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}


/**
  \brief   Disable Interrupt (non-secure)
  \details Disables a device specific interrupt in the non-secure NVIC interrupt controller when in secure state.
  \param [in]      IRQn  Device specific interrupt number.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE void TZ_NVIC_DisableIRQ_NS(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC_NS->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}


/**
  \brief   Get Pending Interrupt (non-secure)
  \details Reads the NVIC pending register in the non-secure NVIC when in secure state and returns the pending bit for the specified device specific interrupt.
  \param [in]      IRQn  Device specific interrupt number.
  \return             0  Interrupt status is not pending.
  \return             1  Interrupt status is pending.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE uint32_t TZ_NVIC_GetPendingIRQ_NS(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((NVIC_NS->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}


/**
  \brief   Set Pending Interrupt (non-secure)
  \details Sets the pending bit of a device specific interrupt in the non-secure NVIC pending register when in secure state.
  \param [in]      IRQn  Device specific interrupt number.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE void TZ_NVIC_SetPendingIRQ_NS(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC_NS->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}


/**
  \brief   Clear Pending Interrupt (non-secure)
  \details Clears the pending bit of a device specific interrupt in the non-secure NVIC pending register when in secure state.
  \param [in]      IRQn  Device specific interrupt number.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE void TZ_NVIC_ClearPendingIRQ_NS(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC_NS->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}


/**
  \brief   Get Active Interrupt (non-secure)
  \details Reads the active register in non-secure NVIC when in secure state and returns the active bit for the device specific interrupt.
  \param [in]      IRQn  Device specific interrupt number.
  \return             0  Interrupt status is not active.
  \return             1  Interrupt status is active.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE uint32_t TZ_NVIC_GetActive_NS(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((NVIC_NS->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}


/**
  \brief   Set Interrupt Priority (non-secure)
  \details Sets the priority of a non-secure device specific interrupt or a non-secure processor exception when in secure state.
           The interrupt number can be positive to specify a device specific interrupt,
           or negative to specify a processor exception.
  \param [in]      IRQn  Interrupt number.
  \param [in]  priority  Priority to set.
  \note    The priority cannot be set for every non-secure processor exception.
 */
__STATIC_INLINE void TZ_NVIC_SetPriority_NS(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC_NS->IPR[((uint32_t)IRQn)]               = (uint8_t)((priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL);
  }
  else
  {
    SCB_NS->SHPR[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL);
  }
}


/**
  \brief   Get Interrupt Priority (non-secure)
  \details Reads the priority of a non-secure device specific interrupt or a non-secure processor exception when in secure state.
           The interrupt number can be positive to specify a device specific interrupt,
           or negative to specify a processor exception.
  \param [in]   IRQn  Interrupt number.
  \return             Interrupt Priority. Value is aligned automatically to the implemented priority bits of the microcontroller.
 */
__STATIC_INLINE uint32_t TZ_NVIC_GetPriority_NS(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return(((uint32_t)NVIC_NS->IPR[((uint32_t)IRQn)]               >> (8U - __NVIC_PRIO_BITS)));
  }
  else
  {
    return(((uint32_t)SCB_NS->SHPR[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - __NVIC_PRIO_BITS)));
  }
}
#endif /*  defined (__ARM_FEATURE_CMSE) &&(__ARM_FEATURE_CMSE == 3U) */

/*@} end of CMSIS_Core_NVICFunctions */

/* ##########################  MPU functions  #################################### */

#if defined (__MPU_PRESENT) && (__MPU_PRESENT == 1U)

#include "mpu_armv8.h"

#endif

/* ##########################  PMU functions and events  #################################### */

#if defined (__PMU_PRESENT) && (__PMU_PRESENT == 1U)

#include "pmu_armv8.h"

/**
  \brief   Cortex-M85 PMU events
  \note    Architectural PMU events can be found in pmu_armv8.h
*/

#define ARMCM85_PMU_ECC_ERR                          0xC000
#define ARMCM85_PMU_ECC_ERR_MBIT                     0xC001
#define ARMCM85_PMU_ECC_ERR_DCACHE                   0xC010
#define ARMCM85_PMU_ECC_ERR_ICACHE                   0xC011
#define ARMCM85_PMU_ECC_ERR_MBIT_DCACHE              0xC012
#define ARMCM85_PMU_ECC_ERR_MBIT_ICACHE              0xC013
#define ARMCM85_PMU_ECC_ERR_DTCM                     0xC020
#define ARMCM85_PMU_ECC_ERR_ITCM                     0xC021
#define ARMCM85_PMU_ECC_ERR_MBIT_DTCM                0xC022
#define ARMCM85_PMU_ECC_ERR_MBIT_ITCM                0xC023
#define ARMCM85_PMU_PF_LINEFILL                      0xC100
#define ARMCM85_PMU_PF_CANCEL                        0xC101
#define ARMCM85_PMU_PF_DROP_LINEFILL                 0xC102
#define ARMCM85_PMU_NWAMODE_ENTER                    0xC200
#define ARMCM85_PMU_NWAMODE                          0xC201
#define ARMCM85_PMU_SAHB_ACCESS                      0xC300
#define ARMCM85_PMU_PAHB_ACCESS                      0xC301
#define ARMCM85_PMU_AXI_WRITE_ACCESS                 0xC302
#define ARMCM85_PMU_AXI_READ_ACCESS                  0xC303
#define ARMCM85_PMU_DOSTIMEOUT_DOUBLE                0xC400
#define ARMCM85_PMU_DOSTIMEOUT_TRIPLE                0xC401

#endif

/* ##########################  FPU functions  #################################### */
/**
  \ingroup  CMSIS_Core_FunctionInterface
  \defgroup CMSIS_Core_FpuFunctions FPU Functions
  \brief    Function that provides FPU type.
  @{
 */

/**
  \brief   get FPU type
  \details returns the FPU type
  \returns
   - \b  0: No FPU
   - \b  1: Single precision FPU
   - \b  2: Double + Single precision FPU
 */
__STATIC_INLINE uint32_t SCB_GetFPUType(void)
{
  uint32_t mvfr0;

  mvfr0 = FPU->MVFR0;
  if      ((mvfr0 & (FPU_MVFR0_FPSP_Msk | FPU_MVFR0_FPDP_Msk)) == 0x220U)
  {
    return 2U;
  }
  else if ((mvfr0 & (FPU_MVFR0_FPSP_Msk | FPU_MVFR0_FPDP_Msk)) == 0x020U)
  {
    return 1U;
  }
  else
  {
    return 0U;
  }
}


/*@} end of CMSIS_Core_FpuFunctions */

/* ##########################  MVE functions  #################################### */
/**
  \ingroup  CMSIS_Core_FunctionInterface
  \defgroup CMSIS_Core_MveFunctions MVE Functions
  \brief    Function that provides MVE type.
  @{
 */

/**
  \brief   get MVE type
  \details returns the MVE type
  \returns
   - \b  0: No Vector Extension (MVE)
   - \b  1: Integer Vector Extension (MVE-I)
   - \b  2: Floating-point Vector Extension (MVE-F)
 */
__STATIC_INLINE uint32_t SCB_GetMVEType(void)
{
  const uint32_t mvfr1 = FPU->MVFR1;
  if      ((mvfr1 & FPU_MVFR1_MVE_Msk) == (0x2U << FPU_MVFR1_MVE_Pos))
  {
    return 2U;
  }
  else if ((mvfr1 & FPU_MVFR1_MVE_Msk) == (0x1U << FPU_MVFR1_MVE_Pos))
  {
    return 1U;
  }
  else
  {
    return 0U;
  }
}


/*@} end of CMSIS_Core_MveFunctions */


/* ##########################  Cache functions  #################################### */

#if ((defined (__ICACHE_PRESENT) && (__ICACHE_PRESENT == 1U)) || \
     (defined (__DCACHE_PRESENT) && (__DCACHE_PRESENT == 1U)))
#include "cachel1_armv7.h"
#endif


/* ##########################   SAU functions  #################################### */
/**
  \ingroup  CMSIS_Core_FunctionInterface
  \defgroup CMSIS_Core_SAUFunctions SAU Functions
  \brief    Functions that configure the SAU.
  @{
 */

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)

/**
  \brief   Enable SAU
  \details Enables the Security Attribution Unit (SAU).
 */
__STATIC_INLINE void TZ_SAU_Enable(void)
{
    SAU->CTRL |=  (SAU_CTRL_ENABLE_Msk);
}



/**
  \brief   Disable SAU
  \details Disables the Security Attribution Unit (SAU).
 */
__STATIC_INLINE void TZ_SAU_Disable(void)
{
    SAU->CTRL &= ~(SAU_CTRL_ENABLE_Msk);
}

#endif /* defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U) */

/*@} end of CMSIS_Core_SAUFunctions */



/* ###################  PAC Key functions  ########################### */

#if (defined (__ARM_FEATURE_PAUTH) && (__ARM_FEATURE_PAUTH == 1))
#include "pac_armv81.h"
#endif


/* ##################################    Debug Control function  ############################################ */
/**
  \ingroup  CMSIS_Core_FunctionInterface
  \defgroup CMSIS_Core_DCBFunctions Debug Control Functions
  \brief    Functions that access the Debug Control Block.
  @{
 */


/**
  \brief   Set Debug Authentication Control Register
  \details writes to Debug Authentication Control register.
  \param [in]  value  value to be writen.
 */
__STATIC_INLINE void DCB_SetAuthCtrl(uint32_t value)
{
    __DSB();
    __ISB();
    DCB->DAUTHCTRL = value;
    __DSB();
    __ISB();
}


/**
  \brief   Get Debug Authentication Control Register
  \details Reads Debug Authentication Control register.
  \return             Debug Authentication Control Register.
 */
__STATIC_INLINE uint32_t DCB_GetAuthCtrl(void)
{
    return (DCB->DAUTHCTRL);
}


#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
/**
  \brief   Set Debug Authentication Control Register (non-secure)
  \details writes to non-secure Debug Authentication Control register when in secure state.
  \param [in]  value  value to be writen
 */
__STATIC_INLINE void TZ_DCB_SetAuthCtrl_NS(uint32_t value)
{
    __DSB();
    __ISB();
    DCB_NS->DAUTHCTRL = value;
    __DSB();
    __ISB();
}


/**
  \brief   Get Debug Authentication Control Register (non-secure)
  \details Reads non-secure Debug Authentication Control register when in secure state.
  \return             Debug Authentication Control Register.
 */
__STATIC_INLINE uint32_t TZ_DCB_GetAuthCtrl_NS(void)
{
    return (DCB_NS->DAUTHCTRL);
}
#endif /* defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U) */

/*@} end of CMSIS_Core_DCBFunctions */




/* ##################################    Debug Identification function  ############################################ */
/**
  \ingroup  CMSIS_Core_FunctionInterface
  \defgroup CMSIS_Core_DIBFunctions Debug Identification Functions
  \brief    Functions that access the Debug Identification Block.
  @{
 */


/**
  \brief   Get Debug Authentication Status Register
  \details Reads Debug Authentication Status register.
  \return             Debug Authentication Status Register.
 */
__STATIC_INLINE uint32_t DIB_GetAuthStatus(void)
{
    return (DIB->DAUTHSTATUS);
}


#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
/**
  \brief   Get Debug Authentication Status Register (non-secure)
  \details Reads non-secure Debug Authentication Status register when in secure state.
  \return             Debug Authentication Status Register.
 */
__STATIC_INLINE uint32_t TZ_DIB_GetAuthStatus_NS(void)
{
    return (DIB_NS->DAUTHSTATUS);
}
#endif /* defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U) */

/*@} end of CMSIS_Core_DCBFunctions */




/* ##################################    SysTick function  ############################################ */
/**
  \ingroup  CMSIS_Core_FunctionInterface
  \defgroup CMSIS_Core_SysTickFunctions SysTick Functions
  \brief    Functions that configure the System.
  @{
 */

#if defined (__Vendor_SysTickConfig) && (__Vendor_SysTickConfig == 0U)

/**
  \brief   System Tick Configuration
  \details Initializes the System Timer and its interrupt, and starts the System Tick Timer.
           Counter is in free running mode to generate periodic interrupts.
  \param [in]  ticks  Number of ticks between two interrupts.
  \return          0  Function succeeded.
  \return          1  Function failed.
  \note    When the variable <b>__Vendor_SysTickConfig</b> is set to 1, then the
           function <b>SysTick_Config</b> is not included. In this case, the file <b><i>device</i>.h</b>
           must contain a vendor-specific implementation of this function.
 */
__STATIC_INLINE uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > SysTick_LOAD_RELOAD_Msk)
  {
    return (1UL);
  }

  SysTick->LOAD  = (uint32_t)(ticks - 1UL);
  NVIC_SetPriority (SysTick_IRQn, (1UL << __NVIC_PRIO_BITS) - 1UL);
  SysTick->VAL   = 0UL;
  SysTick->CTRL  = SysTick_CTRL_CLKSOURCE_Msk |
                   SysTick_CTRL_TICKINT_Msk   |
                   SysTick_CTRL_ENABLE_Msk;
  return (0UL);
}

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
/**
  \brief   System Tick Configuration (non-secure)
  \details Initializes the non-secure System Timer and its interrupt when in secure state, and starts the System Tick Timer.
           Counter is in free running mode to generate periodic interrupts.
  \param [in]  ticks  Number of ticks between two interrupts.
  \return          0  Function succeeded.
  \return          1  Function failed.
  \note    When the variable <b>__Vendor_SysTickConfig</b> is set to 1, then the
           function <b>TZ_SysTick_Config_NS</b> is not included. In this case, the file <b><i>device</i>.h</b>
           must contain a vendor-specific implementation of this function.

 */
__STATIC_INLINE uint32_t TZ_SysTick_Config_NS(uint32_t ticks)
{
  if ((ticks - 1UL) > SysTick_LOAD_RELOAD_Msk)
  {
    return (1UL);
  }

  SysTick_NS->LOAD  = (uint32_t)(ticks - 1UL);
  TZ_NVIC_SetPriority_NS (SysTick_IRQn, (1UL << __NVIC_PRIO_BITS) - 1UL);
  SysTick_NS->VAL   = 0UL;
  SysTick_NS->CTRL  = SysTick_CTRL_CLKSOURCE_Msk |
                      SysTick_CTRL_TICKINT_Msk   |
                      SysTick_CTRL_ENABLE_Msk;
  return (0UL);
}
#endif /* defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U) */

#endif

/*@} end of CMSIS_Core_SysTickFunctions */



/* ##################################### Debug In/Output function ########################################### */
/**
  \ingroup  CMSIS_Core_FunctionInterface
  \defgroup CMSIS_core_DebugFunctions ITM Functions
  \brief    Functions that access the ITM debug interface.
  @{
 */

extern volatile int32_t ITM_RxBuffer;
#define                 ITM_RXBUFFER_EMPTY  ((int32_t)0x5AA55AA5U)


/**
  \brief   ITM Send Character
  \details Transmits a character via the ITM channel 0, and
           \li Just returns when no debugger is connected that has booked the output.
           \li Is blocking when a debugger is connected, but the previous character sent has not been transmitted.
  \param [in]     ch  Character to transmit.
  \returns            Character to transmit.
 */
__STATIC_INLINE uint32_t ITM_SendChar (uint32_t ch)
{
  if (((ITM->TCR & ITM_TCR_ITMENA_Msk) != 0UL) &&
      ((ITM->TER & 1UL               ) != 0UL)   )
  {
    while (ITM->PORT[0U].u32 == 0UL)
    {
      __NOP();
    }
    ITM->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}


/**
  \brief   ITM Receive Character
  \details Inputs a character via the external variable \ref ITM_RxBuffer.
  \return             Received character.
  \return         -1  No character pending.
 */
__STATIC_INLINE int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != ITM_RXBUFFER_EMPTY)
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = ITM_RXBUFFER_EMPTY;
  }

  return (ch);
}


/**
  \brief   ITM Check Character
  \details Checks whether a character is pending for reading in the variable \ref ITM_RxBuffer.
  \return          0  No character available.
  \return          1  Character available.
 */
__STATIC_INLINE int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == ITM_RXBUFFER_EMPTY)
  {
    return (0);
  }
  else
  {
    return (1);
  }
}

/*@} end of CMSIS_core_DebugFunctions */




#ifdef __cplusplus
}
#endif

#endif /* __CORE_CM85_H_DEPENDANT */

#endif /* __CMSIS_GENERIC */
