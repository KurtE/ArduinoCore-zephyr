/**
  ******************************************************************************
  * @file    stm32h7xx_hal_flash.h
  * @author  MCD Application Team
  * @brief   Header file of FLASH HAL module.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file in
  * the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32H7xx_HAL_FLASH_H
#define STM32H7xx_HAL_FLASH_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal_def.h"

/** @addtogroup STM32H7xx_HAL_Driver
  * @{
  */

/** @addtogroup FLASH
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/** @defgroup FLASH_Exported_Types FLASH Exported Types
  * @{
  */

/**
  * @brief  FLASH Procedure structure definition
  */
typedef enum
{
  FLASH_PROC_NONE = 0U,
  FLASH_PROC_SECTERASE_BANK1,
  FLASH_PROC_MASSERASE_BANK1,
  FLASH_PROC_PROGRAM_BANK1,
  FLASH_PROC_SECTERASE_BANK2,
  FLASH_PROC_MASSERASE_BANK2,
  FLASH_PROC_PROGRAM_BANK2,
  FLASH_PROC_ALLBANK_MASSERASE
} FLASH_ProcedureTypeDef;


/**
  * @brief  FLASH handle Structure definition
  */
typedef struct
{
  __IO FLASH_ProcedureTypeDef ProcedureOnGoing;

  __IO uint32_t               NbSectorsToErase;

  __IO uint32_t               VoltageForErase;

  __IO uint32_t               Sector;

  __IO uint32_t               Address;

  HAL_LockTypeDef             Lock;

  __IO uint32_t               ErrorCode;

}FLASH_ProcessTypeDef;

/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup FLASH_Exported_Constants FLASH Exported Constants
  * @{
  */

/** @defgroup FLASH_Error_Code FLASH Error Code
  * @brief    FLASH Error Code
  * @{
  */
#define HAL_FLASH_ERROR_NONE         0x00000000U

#define HAL_FLASH_ERROR_WRP          FLASH_FLAG_WRPERR
#define HAL_FLASH_ERROR_PGS          FLASH_FLAG_PGSERR
#define HAL_FLASH_ERROR_STRB         FLASH_FLAG_STRBERR
#define HAL_FLASH_ERROR_INC          FLASH_FLAG_INCERR
#if defined (FLASH_SR_OPERR)
#define HAL_FLASH_ERROR_OPE          FLASH_FLAG_OPERR
#endif /* FLASH_SR_OPERR */
#define HAL_FLASH_ERROR_RDP          FLASH_FLAG_RDPERR
#define HAL_FLASH_ERROR_RDS          FLASH_FLAG_RDSERR
#define HAL_FLASH_ERROR_SNECC        FLASH_FLAG_SNECCERR
#define HAL_FLASH_ERROR_DBECC        FLASH_FLAG_DBECCERR
#define HAL_FLASH_ERROR_CRCRD        FLASH_FLAG_CRCRDERR

#define HAL_FLASH_ERROR_WRP_BANK1    FLASH_FLAG_WRPERR_BANK1
#define HAL_FLASH_ERROR_PGS_BANK1    FLASH_FLAG_PGSERR_BANK1
#define HAL_FLASH_ERROR_STRB_BANK1   FLASH_FLAG_STRBERR_BANK1
#define HAL_FLASH_ERROR_INC_BANK1    FLASH_FLAG_INCERR_BANK1
#if defined (FLASH_SR_OPERR)
#define HAL_FLASH_ERROR_OPE_BANK1    FLASH_FLAG_OPERR_BANK1
#endif /* FLASH_SR_OPERR */
#define HAL_FLASH_ERROR_RDP_BANK1    FLASH_FLAG_RDPERR_BANK1
#define HAL_FLASH_ERROR_RDS_BANK1    FLASH_FLAG_RDSERR_BANK1
#define HAL_FLASH_ERROR_SNECC_BANK1  FLASH_FLAG_SNECCERR_BANK1
#define HAL_FLASH_ERROR_DBECC_BANK1  FLASH_FLAG_DBECCERR_BANK1
#define HAL_FLASH_ERROR_CRCRD_BANK1  FLASH_FLAG_CRCRDERR_BANK1

#define HAL_FLASH_ERROR_WRP_BANK2    FLASH_FLAG_WRPERR_BANK2
#define HAL_FLASH_ERROR_PGS_BANK2    FLASH_FLAG_PGSERR_BANK2
#define HAL_FLASH_ERROR_STRB_BANK2   FLASH_FLAG_STRBERR_BANK2
#define HAL_FLASH_ERROR_INC_BANK2    FLASH_FLAG_INCERR_BANK2
#if defined (FLASH_SR_OPERR)
#define HAL_FLASH_ERROR_OPE_BANK2    FLASH_FLAG_OPERR_BANK2
#endif /* FLASH_SR_OPERR */
#define HAL_FLASH_ERROR_RDP_BANK2    FLASH_FLAG_RDPERR_BANK2
#define HAL_FLASH_ERROR_RDS_BANK2    FLASH_FLAG_RDSERR_BANK2
#define HAL_FLASH_ERROR_SNECC_BANK2  FLASH_FLAG_SNECCERR_BANK2
#define HAL_FLASH_ERROR_DBECC_BANK2  FLASH_FLAG_DBECCERR_BANK2
#define HAL_FLASH_ERROR_CRCRD_BANK2  FLASH_FLAG_CRCRDERR_BANK2

#define HAL_FLASH_ERROR_OB_CHANGE    FLASH_OPTSR_OPTCHANGEERR
/**
  * @}
  */

/** @defgroup FLASH_Type_Program FLASH Type Program
  * @{
  */
#define FLASH_TYPEPROGRAM_FLASHWORD  0x01U
#if defined (FLASH_OPTCR_PG_OTP)
#define FLASH_TYPEPROGRAM_OTPWORD    0x02U
#endif /* FLASH_OPTCR_PG_OTP */
/**
  * @}
  */

/** @defgroup FLASH_Flag_definition FLASH Flag definition
  * @brief Flag definition
  * @{
  */
#define FLASH_FLAG_BSY                     FLASH_SR_BSY
#define FLASH_FLAG_WBNE                    FLASH_SR_WBNE
#define FLASH_FLAG_QW                      FLASH_SR_QW
#define FLASH_FLAG_CRC_BUSY                FLASH_SR_CRC_BUSY
#define FLASH_FLAG_EOP                     FLASH_SR_EOP
#define FLASH_FLAG_WRPERR                  FLASH_SR_WRPERR
#define FLASH_FLAG_PGSERR                  FLASH_SR_PGSERR
#define FLASH_FLAG_STRBERR                 FLASH_SR_STRBERR
#define FLASH_FLAG_INCERR                  FLASH_SR_INCERR
#if defined (FLASH_SR_OPERR)
#define FLASH_FLAG_OPERR                   FLASH_SR_OPERR
#endif /* FLASH_SR_OPERR */
#define FLASH_FLAG_RDPERR                  FLASH_SR_RDPERR
#define FLASH_FLAG_RDSERR                  FLASH_SR_RDSERR
#define FLASH_FLAG_SNECCERR                FLASH_SR_SNECCERR
#define FLASH_FLAG_DBECCERR                FLASH_SR_DBECCERR
#define FLASH_FLAG_CRCEND                  FLASH_SR_CRCEND
#define FLASH_FLAG_CRCRDERR                FLASH_SR_CRCRDERR

#define FLASH_FLAG_BSY_BANK1               FLASH_SR_BSY
#define FLASH_FLAG_WBNE_BANK1              FLASH_SR_WBNE
#define FLASH_FLAG_QW_BANK1                FLASH_SR_QW
#define FLASH_FLAG_CRC_BUSY_BANK1          FLASH_SR_CRC_BUSY
#define FLASH_FLAG_EOP_BANK1               FLASH_SR_EOP
#define FLASH_FLAG_WRPERR_BANK1            FLASH_SR_WRPERR
#define FLASH_FLAG_PGSERR_BANK1            FLASH_SR_PGSERR
#define FLASH_FLAG_STRBERR_BANK1           FLASH_SR_STRBERR
#define FLASH_FLAG_INCERR_BANK1            FLASH_SR_INCERR
#if defined (FLASH_SR_OPERR)
#define FLASH_FLAG_OPERR_BANK1             FLASH_SR_OPERR
#endif /* FLASH_SR_OPERR */
#define FLASH_FLAG_RDPERR_BANK1            FLASH_SR_RDPERR
#define FLASH_FLAG_RDSERR_BANK1            FLASH_SR_RDSERR
#define FLASH_FLAG_SNECCERR_BANK1          FLASH_SR_SNECCERR
#define FLASH_FLAG_DBECCERR_BANK1          FLASH_SR_DBECCERR
#define FLASH_FLAG_CRCEND_BANK1            FLASH_SR_CRCEND
#define FLASH_FLAG_CRCRDERR_BANK1          FLASH_SR_CRCRDERR

#if defined (FLASH_SR_OPERR)
#define FLASH_FLAG_ALL_ERRORS_BANK1       (FLASH_FLAG_WRPERR_BANK1   | FLASH_FLAG_PGSERR_BANK1   | \
                                           FLASH_FLAG_STRBERR_BANK1  | FLASH_FLAG_INCERR_BANK1   | \
                                           FLASH_FLAG_OPERR_BANK1    | FLASH_FLAG_RDPERR_BANK1   | \
                                           FLASH_FLAG_RDSERR_BANK1   | FLASH_FLAG_SNECCERR_BANK1 | \
                                           FLASH_FLAG_DBECCERR_BANK1 | FLASH_FLAG_CRCRDERR_BANK1)
#else
#define FLASH_FLAG_ALL_ERRORS_BANK1       (FLASH_FLAG_WRPERR_BANK1   | FLASH_FLAG_PGSERR_BANK1   | \
                                           FLASH_FLAG_STRBERR_BANK1  | FLASH_FLAG_INCERR_BANK1   | \
                                           FLASH_FLAG_RDPERR_BANK1   | FLASH_FLAG_RDSERR_BANK1   | \
                                           FLASH_FLAG_SNECCERR_BANK1 | FLASH_FLAG_DBECCERR_BANK1 | \
                                           FLASH_FLAG_CRCRDERR_BANK1)
#endif /* FLASH_SR_OPERR */

#define FLASH_FLAG_ALL_BANK1              (FLASH_FLAG_BSY_BANK1      | FLASH_FLAG_WBNE_BANK1     | \
                                           FLASH_FLAG_QW_BANK1       | FLASH_FLAG_CRC_BUSY_BANK1 | \
                                           FLASH_FLAG_EOP_BANK1      | FLASH_FLAG_CRCEND_BANK1   | \
                                           FLASH_FLAG_ALL_ERRORS_BANK1)

#define FLASH_FLAG_BSY_BANK2               (FLASH_SR_BSY      | 0x80000000U)
#define FLASH_FLAG_WBNE_BANK2              (FLASH_SR_WBNE     | 0x80000000U)
#define FLASH_FLAG_QW_BANK2                (FLASH_SR_QW       | 0x80000000U)
#define FLASH_FLAG_CRC_BUSY_BANK2          (FLASH_SR_CRC_BUSY | 0x80000000U)
#define FLASH_FLAG_EOP_BANK2               (FLASH_SR_EOP      | 0x80000000U)
#define FLASH_FLAG_WRPERR_BANK2            (FLASH_SR_WRPERR   | 0x80000000U)
#define FLASH_FLAG_PGSERR_BANK2            (FLASH_SR_PGSERR   | 0x80000000U)
#define FLASH_FLAG_STRBERR_BANK2           (FLASH_SR_STRBERR  | 0x80000000U)
#define FLASH_FLAG_INCERR_BANK2            (FLASH_SR_INCERR   | 0x80000000U)
#if defined (FLASH_SR_OPERR)
#define FLASH_FLAG_OPERR_BANK2             (FLASH_SR_OPERR    | 0x80000000U)
#endif /* FLASH_SR_OPERR */
#define FLASH_FLAG_RDPERR_BANK2            (FLASH_SR_RDPERR   | 0x80000000U)
#define FLASH_FLAG_RDSERR_BANK2            (FLASH_SR_RDSERR   | 0x80000000U)
#define FLASH_FLAG_SNECCERR_BANK2          (FLASH_SR_SNECCERR | 0x80000000U)
#define FLASH_FLAG_DBECCERR_BANK2          (FLASH_SR_DBECCERR | 0x80000000U)
#define FLASH_FLAG_CRCEND_BANK2            (FLASH_SR_CRCEND   | 0x80000000U)
#define FLASH_FLAG_CRCRDERR_BANK2          (FLASH_SR_CRCRDERR | 0x80000000U)

#if defined (FLASH_SR_OPERR)
#define FLASH_FLAG_ALL_ERRORS_BANK2       (FLASH_FLAG_WRPERR_BANK2   | FLASH_FLAG_PGSERR_BANK2   | \
                                           FLASH_FLAG_STRBERR_BANK2  | FLASH_FLAG_INCERR_BANK2   | \
                                           FLASH_FLAG_OPERR_BANK2    | FLASH_FLAG_RDPERR_BANK2   | \
                                           FLASH_FLAG_RDSERR_BANK2   | FLASH_FLAG_SNECCERR_BANK2 | \
                                           FLASH_FLAG_DBECCERR_BANK2 | FLASH_FLAG_CRCRDERR_BANK2)
#else
#define FLASH_FLAG_ALL_ERRORS_BANK2       (FLASH_FLAG_WRPERR_BANK2   | FLASH_FLAG_PGSERR_BANK2   | \
                                           FLASH_FLAG_STRBERR_BANK2  | FLASH_FLAG_INCERR_BANK2   | \
                                           FLASH_FLAG_RDPERR_BANK2   | FLASH_FLAG_RDSERR_BANK2   | \
                                           FLASH_FLAG_SNECCERR_BANK2 | FLASH_FLAG_DBECCERR_BANK2 | \
                                           FLASH_FLAG_CRCRDERR_BANK2)
#endif /* FLASH_SR_OPERR */

#define FLASH_FLAG_ALL_BANK2              (FLASH_FLAG_BSY_BANK2      | FLASH_FLAG_WBNE_BANK2     | \
                                           FLASH_FLAG_QW_BANK2       | FLASH_FLAG_CRC_BUSY_BANK2 | \
                                           FLASH_FLAG_EOP_BANK2      | FLASH_FLAG_CRCEND_BANK2   | \
                                           FLASH_FLAG_ALL_ERRORS_BANK2)
/**
  * @}
  */

/** @defgroup FLASH_Interrupt_definition FLASH Interrupt definition
  * @brief FLASH Interrupt definition
  * @{
  */
#define FLASH_IT_EOP_BANK1                  FLASH_CR_EOPIE
#define FLASH_IT_WRPERR_BANK1               FLASH_CR_WRPERRIE
#define FLASH_IT_PGSERR_BANK1               FLASH_CR_PGSERRIE
#define FLASH_IT_STRBERR_BANK1              FLASH_CR_STRBERRIE
#define FLASH_IT_INCERR_BANK1               FLASH_CR_INCERRIE
#if defined (FLASH_CR_OPERRIE)
#define FLASH_IT_OPERR_BANK1                FLASH_CR_OPERRIE
#endif /* FLASH_CR_OPERRIE */
#define FLASH_IT_RDPERR_BANK1               FLASH_CR_RDPERRIE
#define FLASH_IT_RDSERR_BANK1               FLASH_CR_RDSERRIE
#define FLASH_IT_SNECCERR_BANK1             FLASH_CR_SNECCERRIE
#define FLASH_IT_DBECCERR_BANK1             FLASH_CR_DBECCERRIE
#define FLASH_IT_CRCEND_BANK1               FLASH_CR_CRCENDIE
#define FLASH_IT_CRCRDERR_BANK1             FLASH_CR_CRCRDERRIE

#if defined (FLASH_CR_OPERRIE)
#define FLASH_IT_ALL_BANK1                 (FLASH_IT_EOP_BANK1       | FLASH_IT_WRPERR_BANK1    | \
                                            FLASH_IT_PGSERR_BANK1    | FLASH_IT_STRBERR_BANK1   | \
                                            FLASH_IT_INCERR_BANK1    | FLASH_IT_OPERR_BANK1     | \
                                            FLASH_IT_RDPERR_BANK1    | FLASH_IT_RDSERR_BANK1    | \
                                            FLASH_IT_SNECCERR_BANK1  | FLASH_IT_DBECCERR_BANK1  | \
                                            FLASH_IT_CRCEND_BANK1    | FLASH_IT_CRCRDERR_BANK1)
#else
#define FLASH_IT_ALL_BANK1                 (FLASH_IT_EOP_BANK1       | FLASH_IT_WRPERR_BANK1    | \
                                            FLASH_IT_PGSERR_BANK1    | FLASH_IT_STRBERR_BANK1   | \
                                            FLASH_IT_INCERR_BANK1    | FLASH_IT_RDPERR_BANK1    | \
                                            FLASH_IT_RDSERR_BANK1    | FLASH_IT_SNECCERR_BANK1  | \
                                            FLASH_IT_DBECCERR_BANK1  | FLASH_IT_CRCEND_BANK1    | \
                                            FLASH_IT_CRCRDERR_BANK1)
#endif /* FLASH_CR_OPERRIE */

#define FLASH_IT_EOP_BANK2                 (FLASH_CR_EOPIE      | 0x80000000U)
#define FLASH_IT_WRPERR_BANK2              (FLASH_CR_WRPERRIE   | 0x80000000U)
#define FLASH_IT_PGSERR_BANK2              (FLASH_CR_PGSERRIE   | 0x80000000U)
#define FLASH_IT_STRBERR_BANK2             (FLASH_CR_STRBERRIE  | 0x80000000U)
#define FLASH_IT_INCERR_BANK2              (FLASH_CR_INCERRIE   | 0x80000000U)
#if defined (FLASH_CR_OPERRIE)
#define FLASH_IT_OPERR_BANK2               (FLASH_CR_OPERRIE    | 0x80000000U)
#endif /* FLASH_CR_OPERRIE */
#define FLASH_IT_RDPERR_BANK2              (FLASH_CR_RDPERRIE   | 0x80000000U)
#define FLASH_IT_RDSERR_BANK2              (FLASH_CR_RDSERRIE   | 0x80000000U)
#define FLASH_IT_SNECCERR_BANK2            (FLASH_CR_SNECCERRIE | 0x80000000U)
#define FLASH_IT_DBECCERR_BANK2            (FLASH_CR_DBECCERRIE | 0x80000000U)
#define FLASH_IT_CRCEND_BANK2              (FLASH_CR_CRCENDIE   | 0x80000000U)
#define FLASH_IT_CRCRDERR_BANK2            (FLASH_CR_CRCRDERRIE | 0x80000000U)

#if defined (FLASH_CR_OPERRIE)
#define FLASH_IT_ALL_BANK2                 (FLASH_IT_EOP_BANK2       | FLASH_IT_WRPERR_BANK2    | \
                                            FLASH_IT_PGSERR_BANK2    | FLASH_IT_STRBERR_BANK2   | \
                                            FLASH_IT_INCERR_BANK2    | FLASH_IT_OPERR_BANK2     | \
                                            FLASH_IT_RDPERR_BANK2    | FLASH_IT_RDSERR_BANK2    | \
                                            FLASH_IT_SNECCERR_BANK2  | FLASH_IT_DBECCERR_BANK2  | \
                                            FLASH_IT_CRCEND_BANK2    | FLASH_IT_CRCRDERR_BANK2)
#else
#define FLASH_IT_ALL_BANK2                 (FLASH_IT_EOP_BANK2       | FLASH_IT_WRPERR_BANK2    | \
                                            FLASH_IT_PGSERR_BANK2    | FLASH_IT_STRBERR_BANK2   | \
                                            FLASH_IT_INCERR_BANK2    | FLASH_IT_RDPERR_BANK2    | \
                                            FLASH_IT_RDSERR_BANK2    | FLASH_IT_SNECCERR_BANK2  | \
                                            FLASH_IT_DBECCERR_BANK2  | FLASH_IT_CRCEND_BANK2    | \
                                            FLASH_IT_CRCRDERR_BANK2)
#endif /* FLASH_CR_OPERRIE */
/**
  * @}
  */

#if defined (FLASH_CR_PSIZE)
/** @defgroup FLASH_Program_Parallelism FLASH Program Parallelism
  * @{
  */
#define FLASH_PSIZE_BYTE           0x00000000U
#define FLASH_PSIZE_HALF_WORD      FLASH_CR_PSIZE_0
#define FLASH_PSIZE_WORD           FLASH_CR_PSIZE_1
#define FLASH_PSIZE_DOUBLE_WORD    FLASH_CR_PSIZE
/**
  * @}
  */
#endif /* FLASH_CR_PSIZE */


/** @defgroup FLASH_Keys FLASH Keys
  * @{
  */
#define FLASH_KEY1                 0x45670123U
#define FLASH_KEY2                 0xCDEF89ABU
#define FLASH_OPT_KEY1             0x08192A3BU
#define FLASH_OPT_KEY2             0x4C5D6E7FU
/**
  * @}
  */

/** @defgroup FLASH_Sectors FLASH Sectors
  * @{
  */
#define FLASH_SECTOR_0             0U
#define FLASH_SECTOR_1             1U
#define FLASH_SECTOR_2             2U
#define FLASH_SECTOR_3             3U
#define FLASH_SECTOR_4             4U
#define FLASH_SECTOR_5             5U
#define FLASH_SECTOR_6             6U
#define FLASH_SECTOR_7             7U
#if (FLASH_SECTOR_TOTAL == 128)
#define FLASH_SECTOR_8             8U
#define FLASH_SECTOR_9             9U
#define FLASH_SECTOR_10            10U
#define FLASH_SECTOR_11            11U
#define FLASH_SECTOR_12            12U
#define FLASH_SECTOR_13            13U
#define FLASH_SECTOR_14            14U
#define FLASH_SECTOR_15            15U
#define FLASH_SECTOR_16            16U
#define FLASH_SECTOR_17            17U
#define FLASH_SECTOR_18            18U
#define FLASH_SECTOR_19            19U
#define FLASH_SECTOR_20            20U
#define FLASH_SECTOR_21            21U
#define FLASH_SECTOR_22            22U
#define FLASH_SECTOR_23            23U
#define FLASH_SECTOR_24            24U
#define FLASH_SECTOR_25            25U
#define FLASH_SECTOR_26            26U
#define FLASH_SECTOR_27            27U
#define FLASH_SECTOR_28            28U
#define FLASH_SECTOR_29            29U
#define FLASH_SECTOR_30            30U
#define FLASH_SECTOR_31            31U
#define FLASH_SECTOR_32            32U
#define FLASH_SECTOR_33            33U
#define FLASH_SECTOR_34            34U
#define FLASH_SECTOR_35            35U
#define FLASH_SECTOR_36            36U
#define FLASH_SECTOR_37            37U
#define FLASH_SECTOR_38            38U
#define FLASH_SECTOR_39            39U
#define FLASH_SECTOR_40            40U
#define FLASH_SECTOR_41            41U
#define FLASH_SECTOR_42            42U
#define FLASH_SECTOR_43            43U
#define FLASH_SECTOR_44            44U
#define FLASH_SECTOR_45            45U
#define FLASH_SECTOR_46            46U
#define FLASH_SECTOR_47            47U
#define FLASH_SECTOR_48            48U
#define FLASH_SECTOR_49            49U
#define FLASH_SECTOR_50            50U
#define FLASH_SECTOR_51            51U
#define FLASH_SECTOR_52            52U
#define FLASH_SECTOR_53            53U
#define FLASH_SECTOR_54            54U
#define FLASH_SECTOR_55            55U
#define FLASH_SECTOR_56            56U
#define FLASH_SECTOR_57            57U
#define FLASH_SECTOR_58            58U
#define FLASH_SECTOR_59            59U
#define FLASH_SECTOR_60            60U
#define FLASH_SECTOR_61            61U
#define FLASH_SECTOR_62            62U
#define FLASH_SECTOR_63            63U
#define FLASH_SECTOR_64            64U
#define FLASH_SECTOR_65            65U
#define FLASH_SECTOR_66            66U
#define FLASH_SECTOR_67            67U
#define FLASH_SECTOR_68            68U
#define FLASH_SECTOR_69            69U
#define FLASH_SECTOR_70            70U
#define FLASH_SECTOR_71            71U
#define FLASH_SECTOR_72            72U
#define FLASH_SECTOR_73            73U
#define FLASH_SECTOR_74            74U
#define FLASH_SECTOR_75            75U
#define FLASH_SECTOR_76            76U
#define FLASH_SECTOR_77            77U
#define FLASH_SECTOR_78            78U
#define FLASH_SECTOR_79            79U
#define FLASH_SECTOR_80            80U
#define FLASH_SECTOR_81            81U
#define FLASH_SECTOR_82            82U
#define FLASH_SECTOR_83            83U
#define FLASH_SECTOR_84            84U
#define FLASH_SECTOR_85            85U
#define FLASH_SECTOR_86            86U
#define FLASH_SECTOR_87            87U
#define FLASH_SECTOR_88            88U
#define FLASH_SECTOR_89            89U
#define FLASH_SECTOR_90            90U
#define FLASH_SECTOR_91            91U
#define FLASH_SECTOR_92            92U
#define FLASH_SECTOR_93            93U
#define FLASH_SECTOR_94            94U
#define FLASH_SECTOR_95            95U
#define FLASH_SECTOR_96            96U
#define FLASH_SECTOR_97            97U
#define FLASH_SECTOR_98            98U
#define FLASH_SECTOR_99            99U
#define FLASH_SECTOR_100           100U
#define FLASH_SECTOR_101           101U
#define FLASH_SECTOR_102           102U
#define FLASH_SECTOR_103           103U
#define FLASH_SECTOR_104           104U
#define FLASH_SECTOR_105           105U
#define FLASH_SECTOR_106           106U
#define FLASH_SECTOR_107           107U
#define FLASH_SECTOR_108           108U
#define FLASH_SECTOR_109           109U
#define FLASH_SECTOR_110           110U
#define FLASH_SECTOR_111           111U
#define FLASH_SECTOR_112           112U
#define FLASH_SECTOR_113           113U
#define FLASH_SECTOR_114           114U
#define FLASH_SECTOR_115           115U
#define FLASH_SECTOR_116           116U
#define FLASH_SECTOR_117           117U
#define FLASH_SECTOR_118           118U
#define FLASH_SECTOR_119           119U
#define FLASH_SECTOR_120           120U
#define FLASH_SECTOR_121           121U
#define FLASH_SECTOR_122           122U
#define FLASH_SECTOR_123           123U
#define FLASH_SECTOR_124           124U
#define FLASH_SECTOR_125           125U
#define FLASH_SECTOR_126           126U
#define FLASH_SECTOR_127           127U
#endif /* FLASH_SECTOR_TOTAL == 128 */
/**
  * @}
  */

/**
  * @}
  */

/* Exported macro ------------------------------------------------------------*/
/** @defgroup FLASH_Exported_Macros FLASH Exported Macros
  * @{
  */
/**
  * @brief  Set the FLASH Latency.
  * @param  __LATENCY__: FLASH Latency
  *         The value of this parameter depend on device used within the same series
  * @retval none
  */
#define __HAL_FLASH_SET_LATENCY(__LATENCY__) \
                  MODIFY_REG(FLASH->ACR, FLASH_ACR_LATENCY, (uint32_t)(__LATENCY__))

/**
  * @brief  Get the FLASH Latency.
  * @retval FLASH Latency
  *          The value of this parameter depend on device used within the same series
  */
#define __HAL_FLASH_GET_LATENCY()     (READ_BIT((FLASH->ACR), FLASH_ACR_LATENCY))

/**
  * @brief  Enable the specified FLASH interrupt.
  * @param  __INTERRUPT__ : FLASH interrupt
  *   In case of Bank 1 This parameter can be any combination of the following values:
  *     @arg FLASH_IT_EOP_BANK1       : End of FLASH Bank 1 Operation Interrupt source
  *     @arg FLASH_IT_WRPERR_BANK1    : Write Protection Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_PGSERR_BANK1    : Program Sequence Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_STRBERR_BANK1   : Strobe Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_INCERR_BANK1    : Inconsistency Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_OPERR_BANK1     : Operation Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_RDPERR_BANK1    : Read protection Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_RDSERR_BANK1    : Read secure Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_SNECCERR_BANK1  : Single ECC Error Correction on Bank 1 Interrupt source
  *     @arg FLASH_IT_DBECCERR_BANK1  : Double Detection ECC Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_CRCEND_BANK1    : CRC End on Bank 1 Interrupt source
  *     @arg FLASH_IT_CRCRDERR_BANK1  : CRC Read error on Bank 1 Interrupt source
  *     @arg FLASH_IT_ALL_BANK1       : All Bank 1 Interrupt sources
  *
  *   In case of Bank 2, this parameter can be any combination of the following values:
  *     @arg FLASH_IT_EOP_BANK2       : End of FLASH Bank 2 Operation Interrupt source
  *     @arg FLASH_IT_WRPERR_BANK2    : Write Protection Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_PGSERR_BANK2    : Program Sequence Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_STRBERR_BANK2   : Strobe Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_INCERR_BANK2    : Inconsistency Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_OPERR_BANK2     : Operation Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_RDPERR_BANK2    : Read protection Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_RDSERR_BANK2    : Read secure Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_SNECCERR_BANK2  : Single ECC Error Correction on Bank 2 Interrupt source
  *     @arg FLASH_IT_DBECCERR_BANK2  : Double Detection ECC Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_CRCEND_BANK2    : CRC End on Bank 2 Interrupt source
  *     @arg FLASH_IT_CRCRDERR_BANK2  : CRC Read error on Bank 2 Interrupt source
  *     @arg FLASH_IT_ALL_BANK2       : All Bank 2 Interrupt sources
  * @retval none
  */

#define __HAL_FLASH_ENABLE_IT_BANK1(__INTERRUPT__)      (FLASH->CR1 |= (__INTERRUPT__))

#define __HAL_FLASH_ENABLE_IT_BANK2(__INTERRUPT__)      (FLASH->CR2 |= ((__INTERRUPT__) & 0x7FFFFFFFU))

#if defined (DUAL_BANK)
#define __HAL_FLASH_ENABLE_IT(__INTERRUPT__)    (IS_FLASH_IT_BANK1(__INTERRUPT__) ? \
                                                 __HAL_FLASH_ENABLE_IT_BANK1(__INTERRUPT__) : \
                                                 __HAL_FLASH_ENABLE_IT_BANK2(__INTERRUPT__))
#else
#define __HAL_FLASH_ENABLE_IT(__INTERRUPT__)    __HAL_FLASH_ENABLE_IT_BANK1(__INTERRUPT__)
#endif /* DUAL_BANK */


/**
  * @brief  Disable the specified FLASH interrupt.
  * @param  __INTERRUPT__ : FLASH interrupt
  *   In case of Bank 1 This parameter can be any combination of the following values:
  *     @arg FLASH_IT_EOP_BANK1       : End of FLASH Bank 1 Operation Interrupt source
  *     @arg FLASH_IT_WRPERR_BANK1    : Write Protection Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_PGSERR_BANK1    : Program Sequence Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_STRBERR_BANK1   : Strobe Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_INCERR_BANK1    : Inconsistency Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_OPERR_BANK1     : Operation Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_RDPERR_BANK1    : Read protection Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_RDSERR_BANK1    : Read secure Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_SNECCERR_BANK1  : Single ECC Error Correction on Bank 1 Interrupt source
  *     @arg FLASH_IT_DBECCERR_BANK1  : Double Detection ECC Error on Bank 1 Interrupt source
  *     @arg FLASH_IT_CRCEND_BANK1    : CRC End on Bank 1 Interrupt source
  *     @arg FLASH_IT_CRCRDERR_BANK1  : CRC Read error on Bank 1 Interrupt source
  *     @arg FLASH_IT_ALL_BANK1       : All Bank 1 Interrupt sources
  *
  *   In case of Bank 2, this parameter can be any combination of the following values:
  *     @arg FLASH_IT_EOP_BANK2       : End of FLASH Bank 2 Operation Interrupt source
  *     @arg FLASH_IT_WRPERR_BANK2    : Write Protection Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_PGSERR_BANK2    : Program Sequence Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_STRBERR_BANK2   : Strobe Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_INCERR_BANK2    : Inconsistency Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_OPERR_BANK2     : Operation Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_RDPERR_BANK2    : Read protection Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_RDSERR_BANK2    : Read secure Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_SNECCERR_BANK2  : Single ECC Error Correction on Bank 2 Interrupt source
  *     @arg FLASH_IT_DBECCERR_BANK2  : Double Detection ECC Error on Bank 2 Interrupt source
  *     @arg FLASH_IT_CRCEND_BANK2    : CRC End on Bank 2 Interrupt source
  *     @arg FLASH_IT_CRCRDERR_BANK2  : CRC Read error on Bank 2 Interrupt source
  *     @arg FLASH_IT_ALL_BANK2       : All Bank 2 Interrupt sources
  * @retval none
  */

#define __HAL_FLASH_DISABLE_IT_BANK1(__INTERRUPT__)  (FLASH->CR1 &= ~(uint32_t)(__INTERRUPT__))

#define __HAL_FLASH_DISABLE_IT_BANK2(__INTERRUPT__)  (FLASH->CR2 &= ~(uint32_t)((__INTERRUPT__) & 0x7FFFFFFFU))

#if defined (DUAL_BANK)
#define __HAL_FLASH_DISABLE_IT(__INTERRUPT__)  (IS_FLASH_IT_BANK1(__INTERRUPT__) ? \
                                                __HAL_FLASH_DISABLE_IT_BANK1(__INTERRUPT__) : \
                                                __HAL_FLASH_DISABLE_IT_BANK2(__INTERRUPT__))
#else
#define __HAL_FLASH_DISABLE_IT(__INTERRUPT__)  __HAL_FLASH_DISABLE_IT_BANK1(__INTERRUPT__)
#endif /* DUAL_BANK */


/**
  * @brief  Checks whether the specified FLASH flag is set or not.
  * @param  __FLAG__: specifies the FLASH flag to check.
  *   In case of Bank 1 This parameter can be one of the following values :
  *     @arg FLASH_FLAG_BSY_BANK1      : FLASH Bank 1 Busy flag
  *     @arg FLASH_FLAG_WBNE_BANK1     : Write Buffer Not Empty on Bank 1 flag
  *     @arg FLASH_FLAG_QW_BANK1       : Wait Queue on Bank 1 flag
  *     @arg FLASH_FLAG_CRC_BUSY_BANK1 : CRC module is working on Bank 1 flag
  *     @arg FLASH_FLAG_EOP_BANK1      : End Of Program on Bank 1 flag
  *     @arg FLASH_FLAG_WRPERR_BANK1   : Write Protection Error on Bank 1 flag
  *     @arg FLASH_FLAG_PGSERR_BANK1   : Program Sequence Error on Bank 1 flag
  *     @arg FLASH_FLAG_STRBER_BANK1   : Program Alignment Error on Bank 1 flag
  *     @arg FLASH_FLAG_INCERR_BANK1   : Inconsistency Error on Bank 1 flag
  *     @arg FLASH_FLAG_OPERR_BANK1    : Operation Error on Bank 1 flag
  *     @arg FLASH_FLAG_RDPERR_BANK1   : Read Protection Error on Bank 1 flag
  *     @arg FLASH_FLAG_RDSERR_BANK1   : Read secure  Error on Bank 1 flag
  *     @arg FLASH_FLAG_SNECCE_BANK1   : Single ECC Error Correction on Bank 1 flag
  *     @arg FLASH_FLAG_DBECCE_BANK1   : Double Detection ECC Error on Bank 1 flag
  *     @arg FLASH_FLAG_CRCEND_BANK1   : CRC End on Bank 1 flag
  *     @arg FLASH_FLAG_CRCRDERR_BANK1 : CRC Read error on Bank 1 flag
  *
  *   In case of Bank 2 This parameter can be one of the following values :
  *     @arg FLASH_FLAG_BSY_BANK2      : FLASH Bank 2 Busy flag
  *     @arg FLASH_FLAG_WBNE_BANK2     : Write Buffer Not Empty on Bank 2 flag
  *     @arg FLASH_FLAG_QW_BANK2       : Wait Queue on Bank 2 flag
  *     @arg FLASH_FLAG_CRC_BUSY_BANK2 : CRC module is working on Bank 2 flag
  *     @arg FLASH_FLAG_EOP_BANK2      : End Of Program on Bank 2 flag
  *     @arg FLASH_FLAG_WRPERR_BANK2   : Write Protection Error on Bank 2 flag
  *     @arg FLASH_FLAG_PGSERR_BANK2   : Program Sequence Error on Bank 2 flag
  *     @arg FLASH_FLAG_STRBER_BANK2   : Program Alignment Error on Bank 2 flag
  *     @arg FLASH_FLAG_INCERR_BANK2   : Inconsistency Error on Bank 2 flag
  *     @arg FLASH_FLAG_OPERR_BANK2    : Operation Error on Bank 2 flag
  *     @arg FLASH_FLAG_RDPERR_BANK2   : Read Protection Error on Bank 2 flag
  *     @arg FLASH_FLAG_RDSERR_BANK2   : Read secure  Error on Bank 2 flag
  *     @arg FLASH_FLAG_SNECCE_BANK2   : Single ECC Error Correction on Bank 2 flag
  *     @arg FLASH_FLAG_DBECCE_BANK2   : Double Detection ECC Error on Bank 2 flag
  *     @arg FLASH_FLAG_CRCEND_BANK2   : CRC End on Bank 2 flag
  *     @arg FLASH_FLAG_CRCRDERR_BANK2 : CRC Read error on Bank 2 flag
  * @retval The new state of FLASH_FLAG (SET or RESET).
  */
#define __HAL_FLASH_GET_FLAG_BANK1(__FLAG__)     (READ_BIT(FLASH->SR1, (__FLAG__)) == (__FLAG__))

#define __HAL_FLASH_GET_FLAG_BANK2(__FLAG__)     (READ_BIT(FLASH->SR2, ((__FLAG__) & 0x7FFFFFFFU)) == (((__FLAG__) & 0x7FFFFFFFU)))

#if defined (DUAL_BANK)
#define __HAL_FLASH_GET_FLAG(__FLAG__)           (IS_FLASH_FLAG_BANK1(__FLAG__) ?  __HAL_FLASH_GET_FLAG_BANK1(__FLAG__) : \
                                                  __HAL_FLASH_GET_FLAG_BANK2(__FLAG__))
#else
#define __HAL_FLASH_GET_FLAG(__FLAG__)           __HAL_FLASH_GET_FLAG_BANK1(__FLAG__)
#endif /* DUAL_BANK */


/**
  * @brief  Clear the specified FLASH flag.
  * @param  __FLAG__: specifies the FLASH flags to clear.
  *    In case of Bank 1, this parameter can be any combination of the following values:
  *     @arg FLASH_FLAG_EOP_BANK1        : End Of Program on Bank 1 flag
  *     @arg FLASH_FLAG_WRPERR_BANK1     : Write Protection Error on Bank 1 flag
  *     @arg FLASH_FLAG_PGSERR_BANK1     : Program Sequence Error on Bank 1 flag
  *     @arg FLASH_FLAG_STRBER_BANK1     : Program Alignment Error on Bank 1 flag
  *     @arg FLASH_FLAG_INCERR_BANK1     : Inconsistency Error on Bank 1 flag
  *     @arg FLASH_FLAG_OPERR_BANK1      : Operation Error on Bank 1 flag
  *     @arg FLASH_FLAG_RDPERR_BANK1     : Read Protection Error on Bank 1 flag
  *     @arg FLASH_FLAG_RDSERR_BANK1     : Read secure  Error on Bank 1 flag
  *     @arg FLASH_FLAG_SNECCE_BANK1     : Single ECC Error Correction on Bank 1 flag
  *     @arg FLASH_FLAG_DBECCE_BANK1     : Double Detection ECC Error on Bank 1 flag
  *     @arg FLASH_FLAG_CRCEND_BANK1     : CRC End on Bank 1 flag
  *     @arg FLASH_FLAG_CRCRDERR_BANK1   : CRC Read error on Bank 1 flag
  *     @arg FLASH_FLAG_ALL_ERRORS_BANK1 : All Bank 1 error flags
  *     @arg FLASH_FLAG_ALL_BANK1        : All Bank 1 flags
  *
  *   In case of Bank 2, this parameter can be any combination of the following values :
  *     @arg FLASH_FLAG_EOP_BANK2        : End Of Program on Bank 2 flag
  *     @arg FLASH_FLAG_WRPERR_BANK2     : Write Protection Error on Bank 2 flag
  *     @arg FLASH_FLAG_PGSERR_BANK2     : Program Sequence Error on Bank 2 flag
  *     @arg FLASH_FLAG_STRBER_BANK2     : Program Alignment Error on Bank 2 flag
  *     @arg FLASH_FLAG_INCERR_BANK2     : Inconsistency Error on Bank 2 flag
  *     @arg FLASH_FLAG_OPERR_BANK2      : Operation Error on Bank 2 flag
  *     @arg FLASH_FLAG_RDPERR_BANK2     : Read Protection Error on Bank 2 flag
  *     @arg FLASH_FLAG_RDSERR_BANK2     : Read secure  Error on Bank 2 flag
  *     @arg FLASH_FLAG_SNECCE_BANK2     : Single ECC Error Correction on Bank 2 flag
  *     @arg FLASH_FLAG_DBECCE_BANK2     : Double Detection ECC Error on Bank 2 flag
  *     @arg FLASH_FLAG_CRCEND_BANK2     : CRC End on Bank 2 flag
  *     @arg FLASH_FLAG_CRCRDERR_BANK2   : CRC Read error on Bank 2 flag
  *     @arg FLASH_FLAG_ALL_ERRORS_BANK2 : All Bank 2 error flags
  *     @arg FLASH_FLAG_ALL_BANK2        : All Bank 2 flags
  * @retval none
  */

#define __HAL_FLASH_CLEAR_FLAG_BANK1(__FLAG__)    WRITE_REG(FLASH->CCR1, (__FLAG__))

#define __HAL_FLASH_CLEAR_FLAG_BANK2(__FLAG__)    WRITE_REG(FLASH->CCR2, ((__FLAG__) & 0x7FFFFFFFU))

#if defined (DUAL_BANK)
#define __HAL_FLASH_CLEAR_FLAG(__FLAG__)         (IS_FLASH_FLAG_BANK1(__FLAG__) ?  __HAL_FLASH_CLEAR_FLAG_BANK1(__FLAG__) : \
                                                  __HAL_FLASH_CLEAR_FLAG_BANK2(__FLAG__))
#else
#define __HAL_FLASH_CLEAR_FLAG(__FLAG__)         __HAL_FLASH_CLEAR_FLAG_BANK1(__FLAG__)
#endif /* DUAL_BANK */

/**
  * @}
  */

/* Include FLASH HAL Extension module */
#include "stm32h7xx_hal_flash_ex.h"

/* Exported functions --------------------------------------------------------*/
/** @addtogroup FLASH_Exported_Functions
  * @{
  */
/** @addtogroup FLASH_Exported_Functions_Group1
  * @{
  */
/* Program operation functions  ***********************************************/
HAL_StatusTypeDef HAL_FLASH_Program(uint32_t TypeProgram, uint32_t FlashAddress, uint32_t DataAddress);
HAL_StatusTypeDef HAL_FLASH_Program_IT(uint32_t TypeProgram, uint32_t FlashAddress, uint32_t DataAddress);
/* FLASH IRQ handler method */
void HAL_FLASH_IRQHandler(void);
/* Callbacks in non blocking modes */
void HAL_FLASH_EndOfOperationCallback(uint32_t ReturnValue);
void HAL_FLASH_OperationErrorCallback(uint32_t ReturnValue);
/**
  * @}
  */

/** @addtogroup FLASH_Exported_Functions_Group2
  * @{
  */
/* Peripheral Control functions  **********************************************/
HAL_StatusTypeDef HAL_FLASH_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_Lock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Lock(void);
/* Option bytes control */
HAL_StatusTypeDef HAL_FLASH_OB_Launch(void);
/**
  * @}
  */

/** @addtogroup FLASH_Exported_Functions_Group3
  * @{
  */
/* Peripheral State functions  ************************************************/
uint32_t HAL_FLASH_GetError(void);
/**
  * @}
  */

/**
  * @}
  */
/* Private types -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/** @defgroup FLASH_Private_Variables FLASH Private Variables
  * @{
  */
extern FLASH_ProcessTypeDef pFlash;
/**
  * @}
  */
/* Private constants ---------------------------------------------------------*/
/** @defgroup FLASH_Private_Constants FLASH Private Constants
  * @{
  */

/**
  * @}
  */

/* Private macros ------------------------------------------------------------*/
/** @defgroup FLASH_Private_Macros FLASH Private Macros
  * @{
  */

#if defined (FLASH_OPTCR_PG_OTP)
#define IS_FLASH_TYPEPROGRAM(VALUE)      (((VALUE) == FLASH_TYPEPROGRAM_FLASHWORD) || \
                                          ((VALUE) == FLASH_TYPEPROGRAM_OTPWORD))
#else
#define IS_FLASH_TYPEPROGRAM(VALUE)      ((VALUE) == FLASH_TYPEPROGRAM_FLASHWORD)
#endif /* FLASH_OPTCR_PG_OTP */

#define IS_FLASH_IT_BANK1(IT)            (((IT) & FLASH_IT_ALL_BANK1) == (IT))
#if defined (DUAL_BANK)
#define IS_FLASH_IT_BANK2(IT)            (((IT) & FLASH_IT_ALL_BANK2) == (IT))
#endif /* DUAL_BANK */

#define IS_FLASH_FLAG_BANK1(FLAG)        (((FLAG) & FLASH_FLAG_ALL_BANK1) == (FLAG))
#if defined (DUAL_BANK)
#define IS_FLASH_FLAG_BANK2(FLAG)        (((FLAG) & FLASH_FLAG_ALL_BANK2) == (FLAG))
#endif /* DUAL_BANK */

#if defined (DUAL_BANK)
#define IS_FLASH_PROGRAM_ADDRESS_BANK1(ADDRESS) (((ADDRESS) >= FLASH_BANK1_BASE) && ((ADDRESS) < FLASH_BANK2_BASE))
#define IS_FLASH_PROGRAM_ADDRESS_BANK2(ADDRESS) (((ADDRESS) >= FLASH_BANK2_BASE ) && ((ADDRESS) <= FLASH_END))
#else
#define IS_FLASH_PROGRAM_ADDRESS_BANK1(ADDRESS) (((ADDRESS) >= FLASH_BANK1_BASE) && ((ADDRESS) <= FLASH_END))
#endif /* DUAL_BANK */

#if defined (DUAL_BANK)
#if defined (FLASH_OPTCR_PG_OTP)
#define IS_FLASH_PROGRAM_ADDRESS_OTP(ADDRESS)   (((ADDRESS) >= 0x08FFF000U) && ((ADDRESS) <= 0x08FFF3FFU))
#define IS_FLASH_PROGRAM_ADDRESS(ADDRESS)       (IS_FLASH_PROGRAM_ADDRESS_BANK1(ADDRESS) || \
                                                 IS_FLASH_PROGRAM_ADDRESS_BANK2(ADDRESS) || \
                                                 IS_FLASH_PROGRAM_ADDRESS_OTP(ADDRESS))
#else
#define IS_FLASH_PROGRAM_ADDRESS(ADDRESS)       (IS_FLASH_PROGRAM_ADDRESS_BANK1(ADDRESS) || \
                                                 IS_FLASH_PROGRAM_ADDRESS_BANK2(ADDRESS))
#endif /* FLASH_OPTCR_PG_OTP */
#else
#if defined (FLASH_OPTCR_PG_OTP)
#define IS_FLASH_PROGRAM_ADDRESS_OTP(ADDRESS)   (((ADDRESS) >= 0x08FFF000U) && ((ADDRESS) <= 0x08FFF3FFU))
#define IS_FLASH_PROGRAM_ADDRESS(ADDRESS)       (IS_FLASH_PROGRAM_ADDRESS_BANK1(ADDRESS) || \
                                                 IS_FLASH_PROGRAM_ADDRESS_OTP(ADDRESS))
#else
#define IS_FLASH_PROGRAM_ADDRESS(ADDRESS)       (IS_FLASH_PROGRAM_ADDRESS_BANK1(ADDRESS))
#endif /* FLASH_OPTCR_PG_OTP */
#endif /* DUAL_BANK */

#define IS_BOOT_ADDRESS(ADDRESS)         ((ADDRESS) <= (0x3FFF0000U))

#if defined (DUAL_BANK)
#define IS_FLASH_BANK(BANK)              (((BANK) == FLASH_BANK_1)  || \
                                          ((BANK) == FLASH_BANK_2)  || \
                                          ((BANK) == FLASH_BANK_BOTH))
#define IS_FLASH_BANK_EXCLUSIVE(BANK)    (((BANK) == FLASH_BANK_1)  || \
                                          ((BANK) == FLASH_BANK_2))
#else
#define IS_FLASH_BANK(BANK)              ((BANK) == FLASH_BANK_1)
#define IS_FLASH_BANK_EXCLUSIVE(BANK)    ((BANK) == FLASH_BANK_1)
#endif /* DUAL_BANK */

/**
  * @}
  */
/* Private functions ---------------------------------------------------------*/
/** @defgroup FLASH_Private_Functions FLASH Private functions
  * @{
  */
HAL_StatusTypeDef FLASH_WaitForLastOperation(uint32_t Timeout, uint32_t Bank);
HAL_StatusTypeDef FLASH_OB_WaitForLastOperation(uint32_t Timeout);
HAL_StatusTypeDef FLASH_CRC_WaitForLastOperation(uint32_t Timeout, uint32_t Bank);
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* STM32H7xx_HAL_FLASH_H */

