/**************************************************************************//**
 * @file     core_cm0plus.h
 * @brief    CMSIS Cortex-M0+ Core Peripheral Access Layer Header File
 * @version  V5.0.9
 * @date     21. August 2019
 ******************************************************************************/
/*
 * Copyright (c) 2009-2019 Arm Limited. All rights reserved.
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
#endif

#ifndef __CORE_CM0PLUS_H_GENERIC
#define __CORE_CM0PLUS_H_GENERIC

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
  \ingroup Cortex-M0+
  @{
 */

#include "cmsis_version.h"
 
/*  CMSIS CM0+ definitions */
#define __CM0PLUS_CMSIS_VERSION_MAIN (__CM_CMSIS_VERSION_MAIN)
#define __CM0PLUS_CMSIS_VERSION_SUB  (__CM_CMSIS_VERSION_SUB)
#define __CM0PLUS_CMSIS_VERSION      ((__CM0PLUS_CMSIS_VERSION_MAIN << 16U) | \
                                       __CM0PLUS_CMSIS_VERSION_SUB           )

#define __CORTEX_M                   (0U)

/** __FPU_USED indicates whether an FPU is used or not.
    This core does not support an FPU at all
*/
#define __FPU_USED       0U

#if defined ( __CC_ARM )
  #if defined __TARGET_FPU_VFP
    #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
  #endif

#elif defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #if defined __ARM_FP
    #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
  #endif

#elif defined ( __GNUC__ )
  #if defined (__VFP_FP__) && !defined(__SOFTFP__)
    #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
  #endif

#elif defined ( __ICCARM__ )
  #if defined __ARMVFP__
    #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
  #endif

#elif defined ( __TI_ARM__ )
  #if defined __TI_VFP_SUPPORT__
    #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
  #endif

#elif defined ( __TASKING__ )
  #if defined __FPU_VFP__
    #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
  #endif

#elif defined ( __CSMC__ )
  #if ( __CSMC__ & 0x400U)
    #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
  #endif

#endif

#include "cmsis_compiler.h"


#ifdef __cplusplus
}
#endif

#endif /* __CORE_CM0PLUS_H_GENERIC */

#ifndef __CMSIS_GENERIC

#ifndef __CORE_CM0PLUS_H_DEPENDANT
#define __CORE_CM0PLUS_H_DEPENDANT

#ifdef __cplusplus
 extern "C" {
#endif

/* check device defines and use defaults */
#if defined __CHECK_DEVICE_DEFINES
  #ifndef __CM0PLUS_REV
    #define __CM0PLUS_REV             0x0000U
    #warning "__CM0PLUS_REV not defined in device header file; using default!"
  #endif

  #ifndef __MPU_PRESENT
    #define __MPU_PRESENT             0U
    #warning "__MPU_PRESENT not defined in device header file; using default!"
  #endif

  #ifndef __VTOR_PRESENT
    #define __VTOR_PRESENT            0U
    #warning "__VTOR_PRESENT not defined in device header file; using default!"
  #endif

  #ifndef __NVIC_PRIO_BITS
    #define __NVIC_PRIO_BITS          2U
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

/*@} end of group Cortex-M0+ */



/*******************************************************************************
 *                 Register Abstraction
  Core Register contain:
  - Core Register
  - Core NVIC Register
  - Core SCB Register
  - Core SysTick Register
  - Core MPU Register
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
    uint32_t _reserved0:28;
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
    uint32_t _reserved0:15;
    uint32_t T:1;
    uint32_t _reserved1:3;
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

#define xPSR_T_Pos                         24U
#define xPSR_T_Msk                         (1UL << xPSR_T_Pos)

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
    uint32_t _reserved1:30;
  } b;
  uint32_t w;
} CONTROL_Type;

/* CONTROL Register Definitions */
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
  __IOM uint32_t ISER[1U];
        uint32_t RESERVED0[31U];
  __IOM uint32_t ICER[1U];
        uint32_t RESERVED1[31U];
  __IOM uint32_t ISPR[1U];
        uint32_t RESERVED2[31U];
  __IOM uint32_t ICPR[1U];
        uint32_t RESERVED3[31U];
        uint32_t RESERVED4[64U];
  __IOM uint32_t IP[8U];
}  NVIC_Type;

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
#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
  __IOM uint32_t VTOR;
#else
        uint32_t RESERVED0;
#endif
  __IOM uint32_t AIRCR;
  __IOM uint32_t SCR;
  __IOM uint32_t CCR;
        uint32_t RESERVED1;
  __IOM uint32_t SHP[2U];
  __IOM uint32_t SHCSR;
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
#define SCB_ICSR_NMIPENDSET_Pos            31U
#define SCB_ICSR_NMIPENDSET_Msk            (1UL << SCB_ICSR_NMIPENDSET_Pos)

#define SCB_ICSR_PENDSVSET_Pos             28U
#define SCB_ICSR_PENDSVSET_Msk             (1UL << SCB_ICSR_PENDSVSET_Pos)

#define SCB_ICSR_PENDSVCLR_Pos             27U
#define SCB_ICSR_PENDSVCLR_Msk             (1UL << SCB_ICSR_PENDSVCLR_Pos)

#define SCB_ICSR_PENDSTSET_Pos             26U
#define SCB_ICSR_PENDSTSET_Msk             (1UL << SCB_ICSR_PENDSTSET_Pos)

#define SCB_ICSR_PENDSTCLR_Pos             25U
#define SCB_ICSR_PENDSTCLR_Msk             (1UL << SCB_ICSR_PENDSTCLR_Pos)

#define SCB_ICSR_ISRPREEMPT_Pos            23U
#define SCB_ICSR_ISRPREEMPT_Msk            (1UL << SCB_ICSR_ISRPREEMPT_Pos)

#define SCB_ICSR_ISRPENDING_Pos            22U
#define SCB_ICSR_ISRPENDING_Msk            (1UL << SCB_ICSR_ISRPENDING_Pos)

#define SCB_ICSR_VECTPENDING_Pos           12U
#define SCB_ICSR_VECTPENDING_Msk           (0x1FFUL << SCB_ICSR_VECTPENDING_Pos)

#define SCB_ICSR_VECTACTIVE_Pos             0U
#define SCB_ICSR_VECTACTIVE_Msk            (0x1FFUL)

#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
/* SCB Interrupt Control State Register Definitions */
#define SCB_VTOR_TBLOFF_Pos                 8U
#define SCB_VTOR_TBLOFF_Msk                (0xFFFFFFUL << SCB_VTOR_TBLOFF_Pos)
#endif

/* SCB Application Interrupt and Reset Control Register Definitions */
#define SCB_AIRCR_VECTKEY_Pos              16U
#define SCB_AIRCR_VECTKEY_Msk              (0xFFFFUL << SCB_AIRCR_VECTKEY_Pos)

#define SCB_AIRCR_VECTKEYSTAT_Pos          16U
#define SCB_AIRCR_VECTKEYSTAT_Msk          (0xFFFFUL << SCB_AIRCR_VECTKEYSTAT_Pos)

#define SCB_AIRCR_ENDIANESS_Pos            15U
#define SCB_AIRCR_ENDIANESS_Msk            (1UL << SCB_AIRCR_ENDIANESS_Pos)

#define SCB_AIRCR_SYSRESETREQ_Pos           2U
#define SCB_AIRCR_SYSRESETREQ_Msk          (1UL << SCB_AIRCR_SYSRESETREQ_Pos)

#define SCB_AIRCR_VECTCLRACTIVE_Pos         1U
#define SCB_AIRCR_VECTCLRACTIVE_Msk        (1UL << SCB_AIRCR_VECTCLRACTIVE_Pos)

/* SCB System Control Register Definitions */
#define SCB_SCR_SEVONPEND_Pos               4U
#define SCB_SCR_SEVONPEND_Msk              (1UL << SCB_SCR_SEVONPEND_Pos)

#define SCB_SCR_SLEEPDEEP_Pos               2U
#define SCB_SCR_SLEEPDEEP_Msk              (1UL << SCB_SCR_SLEEPDEEP_Pos)

#define SCB_SCR_SLEEPONEXIT_Pos             1U
#define SCB_SCR_SLEEPONEXIT_Msk            (1UL << SCB_SCR_SLEEPONEXIT_Pos)

/* SCB Configuration Control Register Definitions */
#define SCB_CCR_STKALIGN_Pos                9U
#define SCB_CCR_STKALIGN_Msk               (1UL << SCB_CCR_STKALIGN_Pos)

#define SCB_CCR_UNALIGN_TRP_Pos             3U
#define SCB_CCR_UNALIGN_TRP_Msk            (1UL << SCB_CCR_UNALIGN_TRP_Pos)

/* SCB System Handler Control and State Register Definitions */
#define SCB_SHCSR_SVCALLPENDED_Pos         15U
#define SCB_SHCSR_SVCALLPENDED_Msk         (1UL << SCB_SHCSR_SVCALLPENDED_Pos)

/*@} end of group CMSIS_SCB */


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
  __IOM uint32_t RASR;
} MPU_Type;

#define MPU_TYPE_RALIASES                  1U

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
#define MPU_RBAR_ADDR_Pos                   8U
#define MPU_RBAR_ADDR_Msk                  (0xFFFFFFUL << MPU_RBAR_ADDR_Pos)

#define MPU_RBAR_VALID_Pos                  4U
#define MPU_RBAR_VALID_Msk                 (1UL << MPU_RBAR_VALID_Pos)

#define MPU_RBAR_REGION_Pos                 0U
#define MPU_RBAR_REGION_Msk                (0xFUL)

/* MPU Region Attribute and Size Register Definitions */
#define MPU_RASR_ATTRS_Pos                 16U
#define MPU_RASR_ATTRS_Msk                 (0xFFFFUL << MPU_RASR_ATTRS_Pos)

#define MPU_RASR_XN_Pos                    28U
#define MPU_RASR_XN_Msk                    (1UL << MPU_RASR_XN_Pos)

#define MPU_RASR_AP_Pos                    24U
#define MPU_RASR_AP_Msk                    (0x7UL << MPU_RASR_AP_Pos)

#define MPU_RASR_TEX_Pos                   19U
#define MPU_RASR_TEX_Msk                   (0x7UL << MPU_RASR_TEX_Pos)

#define MPU_RASR_S_Pos                     18U
#define MPU_RASR_S_Msk                     (1UL << MPU_RASR_S_Pos)

#define MPU_RASR_C_Pos                     17U
#define MPU_RASR_C_Msk                     (1UL << MPU_RASR_C_Pos)

#define MPU_RASR_B_Pos                     16U
#define MPU_RASR_B_Msk                     (1UL << MPU_RASR_B_Pos)

#define MPU_RASR_SRD_Pos                    8U
#define MPU_RASR_SRD_Msk                   (0xFFUL << MPU_RASR_SRD_Pos)

#define MPU_RASR_SIZE_Pos                   1U
#define MPU_RASR_SIZE_Msk                  (0x1FUL << MPU_RASR_SIZE_Pos)

#define MPU_RASR_ENABLE_Pos                 0U
#define MPU_RASR_ENABLE_Msk                (1UL)

/*@} end of group CMSIS_MPU */
#endif


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_CoreDebug       Core Debug Registers (CoreDebug)
  \brief    Cortex-M0+ Core Debug Registers (DCB registers, SHCSR, and DFSR) are only accessible over DAP and not via processor.
            Therefore they are not covered by the Cortex-M0+ header file.
  @{
 */
/*@} end of group CMSIS_CoreDebug */


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
#define SysTick_BASE        (SCS_BASE +  0x0010UL)
#define NVIC_BASE           (SCS_BASE +  0x0100UL)
#define SCB_BASE            (SCS_BASE +  0x0D00UL)

#define SCB                 ((SCB_Type       *)     SCB_BASE      )
#define SysTick             ((SysTick_Type   *)     SysTick_BASE  )
#define NVIC                ((NVIC_Type      *)     NVIC_BASE     )

#if defined (__MPU_PRESENT) && (__MPU_PRESENT == 1U)
  #define MPU_BASE          (SCS_BASE +  0x0D90UL)
  #define MPU               ((MPU_Type       *)     MPU_BASE      )
#endif

/*@} */



/*******************************************************************************
 *                Hardware Abstraction Layer
  Core Function Interface contains:
  - Core NVIC Functions
  - Core SysTick Functions
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
/*#define NVIC_GetActive              __NVIC_GetActive             not available for Cortex-M0+ */
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


/* The following EXC_RETURN values are saved the LR on exception entry */
#define EXC_RETURN_HANDLER         (0xFFFFFFF1UL)
#define EXC_RETURN_THREAD_MSP      (0xFFFFFFF9UL)
#define EXC_RETURN_THREAD_PSP      (0xFFFFFFFDUL)


/* Interrupt Priorities are WORD accessible only under Armv6-M                  */
/* The following MACROS handle generation of the register offset and byte masks */
#define _BIT_SHIFT(IRQn)         (  ((((uint32_t)(int32_t)(IRQn))         )      &  0x03UL) * 8UL)
#define _SHP_IDX(IRQn)           ( (((((uint32_t)(int32_t)(IRQn)) & 0x0FUL)-8UL) >>    2UL)      )
#define _IP_IDX(IRQn)            (   (((uint32_t)(int32_t)(IRQn))                >>    2UL)      )

#define __NVIC_SetPriorityGrouping(X) (void)(X)
#define __NVIC_GetPriorityGrouping()  (0U)

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
    NVIC->ISER[0U] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
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
    return((uint32_t)(((NVIC->ISER[0U] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
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
    NVIC->ICER[0U] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
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
    return((uint32_t)(((NVIC->ISPR[0U] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
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
    NVIC->ISPR[0U] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
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
    NVIC->ICPR[0U] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}


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
    NVIC->IP[_IP_IDX(IRQn)]  = ((uint32_t)(NVIC->IP[_IP_IDX(IRQn)]  & ~(0xFFUL << _BIT_SHIFT(IRQn))) |
       (((priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL) << _BIT_SHIFT(IRQn)));
  }
  else
  {
    SCB->SHP[_SHP_IDX(IRQn)] = ((uint32_t)(SCB->SHP[_SHP_IDX(IRQn)] & ~(0xFFUL << _BIT_SHIFT(IRQn))) |
       (((priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL) << _BIT_SHIFT(IRQn)));
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
    return((uint32_t)(((NVIC->IP[ _IP_IDX(IRQn)] >> _BIT_SHIFT(IRQn) ) & (uint32_t)0xFFUL) >> (8U - __NVIC_PRIO_BITS)));
  }
  else
  {
    return((uint32_t)(((SCB->SHP[_SHP_IDX(IRQn)] >> _BIT_SHIFT(IRQn) ) & (uint32_t)0xFFUL) >> (8U - __NVIC_PRIO_BITS)));
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
           If VTOR is not present address 0 must be mapped to SRAM.
  \param [in]   IRQn      Interrupt number
  \param [in]   vector    Address of interrupt handler function
 */
__STATIC_INLINE void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{
#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
  uint32_t *vectors = (uint32_t *)SCB->VTOR;
  vectors[(int32_t)IRQn + NVIC_USER_IRQ_OFFSET] = vector;
#else
  uint32_t *vectors = (uint32_t *)(NVIC_USER_IRQ_OFFSET << 2);
  *(vectors + (int32_t)IRQn) = vector;
#endif
  /* ARM Application Note 321 states that the M0+ does not require the architectural barrier */
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
#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
  uint32_t *vectors = (uint32_t *)SCB->VTOR;
  return vectors[(int32_t)IRQn + NVIC_USER_IRQ_OFFSET];
#else
  uint32_t *vectors = (uint32_t *)(NVIC_USER_IRQ_OFFSET << 2);
  return *(vectors + (int32_t)IRQn);
#endif
}


/**
  \brief   System Reset
  \details Initiates a system reset request to reset the MCU.
 */
__NO_RETURN __STATIC_INLINE void __NVIC_SystemReset(void)
{
  __DSB();                                                          /* Ensure all outstanding memory accesses included
                                                                       buffered write are completed before reset */
  SCB->AIRCR  = ((0x5FAUL << SCB_AIRCR_VECTKEY_Pos) |
                 SCB_AIRCR_SYSRESETREQ_Msk);
  __DSB();

  for(;;)
  {
    __NOP();
  }
}

/*@} end of CMSIS_Core_NVICFunctions */

/* ##########################  MPU functions  #################################### */

#if defined (__MPU_PRESENT) && (__MPU_PRESENT == 1U)

#include "mpu_armv7.h"

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
    return 0U;
}


/*@} end of CMSIS_Core_FpuFunctions */



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

#endif

/*@} end of CMSIS_Core_SysTickFunctions */




#ifdef __cplusplus
}
#endif

#endif /* __CORE_CM0PLUS_H_DEPENDANT */

#endif /* __CMSIS_GENERIC */
