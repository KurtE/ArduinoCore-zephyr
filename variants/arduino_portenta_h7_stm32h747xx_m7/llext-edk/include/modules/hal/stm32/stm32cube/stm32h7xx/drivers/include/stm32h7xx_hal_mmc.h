/**
  ******************************************************************************
  * @file    stm32h7xx_hal_mmc.h
  * @author  MCD Application Team
  * @brief   Header file of MMC HAL module.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32H7xx_HAL_MMC_H
#define STM32H7xx_HAL_MMC_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_ll_sdmmc.h"

/** @addtogroup STM32H7xx_HAL_Driver
  * @{
  */
#if defined (SDMMC1) || defined (SDMMC2)

/** @addtogroup MMC
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/** @defgroup MMC_Exported_Types MMC Exported Types
  * @{
  */

/** @defgroup MMC_Exported_Types_Group1 MMC State enumeration structure
  * @{
  */
typedef enum
{
  HAL_MMC_STATE_RESET                  = ((uint32_t)0x00000000U),
  HAL_MMC_STATE_READY                  = ((uint32_t)0x00000001U),
  HAL_MMC_STATE_TIMEOUT                = ((uint32_t)0x00000002U),
  HAL_MMC_STATE_BUSY                   = ((uint32_t)0x00000003U),
  HAL_MMC_STATE_PROGRAMMING            = ((uint32_t)0x00000004U),
  HAL_MMC_STATE_RECEIVING              = ((uint32_t)0x00000005U),
  HAL_MMC_STATE_TRANSFER               = ((uint32_t)0x00000006U),
  HAL_MMC_STATE_ERROR                  = ((uint32_t)0x0000000FU)
} HAL_MMC_StateTypeDef;
/**
  * @}
  */

/** @defgroup MMC_Exported_Types_Group2 MMC Card State enumeration structure
  * @{
  */
typedef uint32_t HAL_MMC_CardStateTypeDef;

#define HAL_MMC_CARD_IDLE           0x00000000U
#define HAL_MMC_CARD_READY          0x00000001U
#define HAL_MMC_CARD_IDENTIFICATION 0x00000002U
#define HAL_MMC_CARD_STANDBY        0x00000003U
#define HAL_MMC_CARD_TRANSFER       0x00000004U
#define HAL_MMC_CARD_SENDING        0x00000005U
#define HAL_MMC_CARD_RECEIVING      0x00000006U
#define HAL_MMC_CARD_PROGRAMMING    0x00000007U
#define HAL_MMC_CARD_DISCONNECTED   0x00000008U
#define HAL_MMC_CARD_BUSTEST        0x00000009U
#define HAL_MMC_CARD_SLEEP          0x0000000AU
#define HAL_MMC_CARD_ERROR          0x000000FFU
/**
  * @}
  */

/** @defgroup MMC_Exported_Types_Group3 MMC Handle Structure definition
  * @{
  */
#define MMC_InitTypeDef      SDMMC_InitTypeDef
#define MMC_TypeDef          SDMMC_TypeDef

/**
  * @brief  MMC Card Information Structure definition
  */
typedef struct
{
  uint32_t CardType;

  uint32_t Class;

  uint32_t RelCardAdd;

  uint32_t BlockNbr;

  uint32_t BlockSize;

  uint32_t LogBlockNbr;

  uint32_t LogBlockSize;

} HAL_MMC_CardInfoTypeDef;

/**
  * @brief  MMC handle Structure definition
  */
#if defined (USE_HAL_MMC_REGISTER_CALLBACKS) && (USE_HAL_MMC_REGISTER_CALLBACKS == 1U)
typedef struct __MMC_HandleTypeDef
#else
typedef struct
#endif /* USE_HAL_MMC_REGISTER_CALLBACKS */
{
  MMC_TypeDef                  *Instance;

  MMC_InitTypeDef              Init;

  HAL_LockTypeDef              Lock;

  const uint8_t                *pTxBuffPtr;

  uint32_t                     TxXferSize;

  uint8_t                      *pRxBuffPtr;

  uint32_t                     RxXferSize;

  __IO uint32_t                Context;

  __IO HAL_MMC_StateTypeDef    State;

  __IO uint32_t                ErrorCode;

  __IO uint16_t                RPMBErrorCode;

  HAL_MMC_CardInfoTypeDef      MmcCard;

  uint32_t                     CSD[4U];

  uint32_t                     CID[4U];

  uint32_t                     Ext_CSD[128];

#if defined (USE_HAL_MMC_REGISTER_CALLBACKS) && (USE_HAL_MMC_REGISTER_CALLBACKS == 1U)
  void (* TxCpltCallback)(struct __MMC_HandleTypeDef *hmmc);
  void (* RxCpltCallback)(struct __MMC_HandleTypeDef *hmmc);
  void (* ErrorCallback)(struct __MMC_HandleTypeDef *hmmc);
  void (* AbortCpltCallback)(struct __MMC_HandleTypeDef *hmmc);
  void (* Read_DMADblBuf0CpltCallback)(struct __MMC_HandleTypeDef *hmmc);
  void (* Read_DMADblBuf1CpltCallback)(struct __MMC_HandleTypeDef *hmmc);
  void (* Write_DMADblBuf0CpltCallback)(struct __MMC_HandleTypeDef *hmmc);
  void (* Write_DMADblBuf1CpltCallback)(struct __MMC_HandleTypeDef *hmmc);

  void (* MspInitCallback)(struct __MMC_HandleTypeDef *hmmc);
  void (* MspDeInitCallback)(struct __MMC_HandleTypeDef *hmmc);
#endif /* USE_HAL_MMC_REGISTER_CALLBACKS */
} MMC_HandleTypeDef;


/**
  * @}
  */

/** @defgroup MMC_Exported_Types_Group4 Card Specific Data: CSD Register
  * @{
  */
typedef struct
{
  __IO uint8_t  CSDStruct;
  __IO uint8_t  SysSpecVersion;
  __IO uint8_t  Reserved1;
  __IO uint8_t  TAAC;
  __IO uint8_t  NSAC;
  __IO uint8_t  MaxBusClkFrec;
  __IO uint16_t CardComdClasses;
  __IO uint8_t  RdBlockLen;
  __IO uint8_t  PartBlockRead;
  __IO uint8_t  WrBlockMisalign;
  __IO uint8_t  RdBlockMisalign;
  __IO uint8_t  DSRImpl;
  __IO uint8_t  Reserved2;
  __IO uint32_t DeviceSize;
  __IO uint8_t  MaxRdCurrentVDDMin;
  __IO uint8_t  MaxRdCurrentVDDMax;
  __IO uint8_t  MaxWrCurrentVDDMin;
  __IO uint8_t  MaxWrCurrentVDDMax;
  __IO uint8_t  DeviceSizeMul;
  __IO uint8_t  EraseGrSize;
  __IO uint8_t  EraseGrMul;
  __IO uint8_t  WrProtectGrSize;
  __IO uint8_t  WrProtectGrEnable;
  __IO uint8_t  ManDeflECC;
  __IO uint8_t  WrSpeedFact;
  __IO uint8_t  MaxWrBlockLen;
  __IO uint8_t  WriteBlockPaPartial;
  __IO uint8_t  Reserved3;
  __IO uint8_t  ContentProtectAppli;
  __IO uint8_t  FileFormatGroup;
  __IO uint8_t  CopyFlag;
  __IO uint8_t  PermWrProtect;
  __IO uint8_t  TempWrProtect;
  __IO uint8_t  FileFormat;
  __IO uint8_t  ECC;
  __IO uint8_t  CSD_CRC;
  __IO uint8_t  Reserved4;

} HAL_MMC_CardCSDTypeDef;
/**
  * @}
  */

/** @defgroup MMC_Exported_Types_Group5 Card Identification Data: CID Register
  * @{
  */
typedef struct
{
  __IO uint8_t  ManufacturerID;
  __IO uint16_t OEM_AppliID;
  __IO uint32_t ProdName1;
  __IO uint8_t  ProdName2;
  __IO uint8_t  ProdRev;
  __IO uint32_t ProdSN;
  __IO uint8_t  Reserved1;
  __IO uint16_t ManufactDate;
  __IO uint8_t  CID_CRC;
  __IO uint8_t  Reserved2;

} HAL_MMC_CardCIDTypeDef;
/**
  * @}
  */

#if defined (USE_HAL_MMC_REGISTER_CALLBACKS) && (USE_HAL_MMC_REGISTER_CALLBACKS == 1U)
/** @defgroup MMC_Exported_Types_Group6 MMC Callback ID enumeration definition
  * @{
  */
typedef enum
{
  HAL_MMC_TX_CPLT_CB_ID                 = 0x00U,
  HAL_MMC_RX_CPLT_CB_ID                 = 0x01U,
  HAL_MMC_ERROR_CB_ID                   = 0x02U,
  HAL_MMC_ABORT_CB_ID                   = 0x03U,
  HAL_MMC_READ_DMA_DBL_BUF0_CPLT_CB_ID  = 0x04U,
  HAL_MMC_READ_DMA_DBL_BUF1_CPLT_CB_ID  = 0x05U,
  HAL_MMC_WRITE_DMA_DBL_BUF0_CPLT_CB_ID = 0x06U,
  HAL_MMC_WRITE_DMA_DBL_BUF1_CPLT_CB_ID = 0x07U,

  HAL_MMC_MSP_INIT_CB_ID                = 0x10U,
  HAL_MMC_MSP_DEINIT_CB_ID              = 0x11U
} HAL_MMC_CallbackIDTypeDef;
/**
  * @}
  */

/** @defgroup MMC_Exported_Types_Group7 MMC Callback pointer definition
  * @{
  */
typedef void (*pMMC_CallbackTypeDef)(MMC_HandleTypeDef *hmmc);
/**
  * @}
  */
#endif /* USE_HAL_MMC_REGISTER_CALLBACKS */
/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup MMC_Exported_Constants Exported Constants
  * @{
  */

#define MMC_BLOCKSIZE   ((uint32_t)512U)

/** @defgroup MMC_Exported_Constansts_Group1 MMC Error status enumeration Structure definition
  * @{
  */
#define HAL_MMC_ERROR_NONE                           SDMMC_ERROR_NONE
#define HAL_MMC_ERROR_CMD_CRC_FAIL                   SDMMC_ERROR_CMD_CRC_FAIL
#define HAL_MMC_ERROR_DATA_CRC_FAIL                  SDMMC_ERROR_DATA_CRC_FAIL
#define HAL_MMC_ERROR_CMD_RSP_TIMEOUT                SDMMC_ERROR_CMD_RSP_TIMEOUT
#define HAL_MMC_ERROR_DATA_TIMEOUT                   SDMMC_ERROR_DATA_TIMEOUT
#define HAL_MMC_ERROR_TX_UNDERRUN                    SDMMC_ERROR_TX_UNDERRUN
#define HAL_MMC_ERROR_RX_OVERRUN                     SDMMC_ERROR_RX_OVERRUN
#define HAL_MMC_ERROR_ADDR_MISALIGNED                SDMMC_ERROR_ADDR_MISALIGNED
#define HAL_MMC_ERROR_BLOCK_LEN_ERR                  SDMMC_ERROR_BLOCK_LEN_ERR
/*!< number of transferred bytes does not match the block length   */
#define HAL_MMC_ERROR_ERASE_SEQ_ERR                  SDMMC_ERROR_ERASE_SEQ_ERR
#define HAL_MMC_ERROR_BAD_ERASE_PARAM                SDMMC_ERROR_BAD_ERASE_PARAM
#define HAL_MMC_ERROR_WRITE_PROT_VIOLATION           SDMMC_ERROR_WRITE_PROT_VIOLATION
#define HAL_MMC_ERROR_LOCK_UNLOCK_FAILED             SDMMC_ERROR_LOCK_UNLOCK_FAILED
/*!< command or if there was an attempt to access a locked card    */
#define HAL_MMC_ERROR_COM_CRC_FAILED                 SDMMC_ERROR_COM_CRC_FAILED
#define HAL_MMC_ERROR_ILLEGAL_CMD                    SDMMC_ERROR_ILLEGAL_CMD
#define HAL_MMC_ERROR_CARD_ECC_FAILED                SDMMC_ERROR_CARD_ECC_FAILED
#define HAL_MMC_ERROR_CC_ERR                         SDMMC_ERROR_CC_ERR
#define HAL_MMC_ERROR_GENERAL_UNKNOWN_ERR            SDMMC_ERROR_GENERAL_UNKNOWN_ERR
#define HAL_MMC_ERROR_STREAM_READ_UNDERRUN           SDMMC_ERROR_STREAM_READ_UNDERRUN
#define HAL_MMC_ERROR_STREAM_WRITE_OVERRUN           SDMMC_ERROR_STREAM_WRITE_OVERRUN
#define HAL_MMC_ERROR_CID_CSD_OVERWRITE              SDMMC_ERROR_CID_CSD_OVERWRITE
#define HAL_MMC_ERROR_WP_ERASE_SKIP                  SDMMC_ERROR_WP_ERASE_SKIP
#define HAL_MMC_ERROR_CARD_ECC_DISABLED              SDMMC_ERROR_CARD_ECC_DISABLED
#define HAL_MMC_ERROR_ERASE_RESET                    SDMMC_ERROR_ERASE_RESET
/*!< of erase sequence command was received                        */
#define HAL_MMC_ERROR_AKE_SEQ_ERR                    SDMMC_ERROR_AKE_SEQ_ERR
#define HAL_MMC_ERROR_INVALID_VOLTRANGE              SDMMC_ERROR_INVALID_VOLTRANGE
#define HAL_MMC_ERROR_ADDR_OUT_OF_RANGE              SDMMC_ERROR_ADDR_OUT_OF_RANGE
#define HAL_MMC_ERROR_REQUEST_NOT_APPLICABLE         SDMMC_ERROR_REQUEST_NOT_APPLICABLE
#define HAL_MMC_ERROR_PARAM                          SDMMC_ERROR_INVALID_PARAMETER
#define HAL_MMC_ERROR_UNSUPPORTED_FEATURE            SDMMC_ERROR_UNSUPPORTED_FEATURE
#define HAL_MMC_ERROR_BUSY                           SDMMC_ERROR_BUSY
#define HAL_MMC_ERROR_DMA                            SDMMC_ERROR_DMA
#define HAL_MMC_ERROR_TIMEOUT                        SDMMC_ERROR_TIMEOUT
/*!< response results after operating with RPMB partition          */
#define HAL_MMC_ERROR_RPMB_OPERATION_OK              0x0000U
#define HAL_MMC_ERROR_RPMB_GENERAL_FAILURE           0x0001U
#define HAL_MMC_ERROR_RPMB_AUTHENTICATION_FAILURE    0x0002U
#define HAL_MMC_ERROR_RPMB_COUNTER_FAILURE           0x0003U
#define HAL_MMC_ERROR_RPMB_ADDRESS_FAILURE           0x0004U
#define HAL_MMC_ERROR_RPMB_WRITE_FAILURE             0x0005U
#define HAL_MMC_ERROR_RPMB_READ_FAILURE              0x0006U
#define HAL_MMC_ERROR_RPMB_KEY_NOT_YET_PROG          0x0007U
#define HAL_MMC_ERROR_RPMB_COUNTER_EXPIRED           0x0080U

#if defined (USE_HAL_MMC_REGISTER_CALLBACKS) && (USE_HAL_MMC_REGISTER_CALLBACKS == 1U)
#define HAL_MMC_ERROR_INVALID_CALLBACK              SDMMC_ERROR_INVALID_PARAMETER
#endif /* USE_HAL_MMC_REGISTER_CALLBACKS */
/**
  * @}
  */

/** @defgroup MMC_Exported_Constansts_Group2 MMC context enumeration
  * @{
  */
#define   MMC_CONTEXT_NONE                 ((uint32_t)0x00000000U)
#define   MMC_CONTEXT_READ_SINGLE_BLOCK    ((uint32_t)0x00000001U)
#define   MMC_CONTEXT_READ_MULTIPLE_BLOCK  ((uint32_t)0x00000002U)
#define   MMC_CONTEXT_WRITE_SINGLE_BLOCK   ((uint32_t)0x00000010U)
#define   MMC_CONTEXT_WRITE_MULTIPLE_BLOCK ((uint32_t)0x00000020U)
#define   MMC_CONTEXT_IT                   ((uint32_t)0x00000008U)
#define   MMC_CONTEXT_DMA                  ((uint32_t)0x00000080U)

/**
  * @}
  */

/** @defgroup MMC_Exported_Constansts_Group3 MMC Voltage mode
  * @{
  */
/**
  * @brief
  */
#define MMC_HIGH_VOLTAGE_RANGE         0x80FF8000U
#define MMC_DUAL_VOLTAGE_RANGE         0x80FF8080U
#define MMC_LOW_VOLTAGE_RANGE          0x80000080U
#define EMMC_HIGH_VOLTAGE_RANGE        0xC0FF8000U
#define EMMC_DUAL_VOLTAGE_RANGE        0xC0FF8080U
#define EMMC_LOW_VOLTAGE_RANGE         0xC0000080U
#define MMC_INVALID_VOLTAGE_RANGE      0x0001FF01U
/**
  * @}
  */

/** @defgroup MMC_Exported_Constansts_Group4 MMC Memory Cards
  * @{
  */
#define  MMC_LOW_CAPACITY_CARD     ((uint32_t)0x00000000U)
#define  MMC_HIGH_CAPACITY_CARD    ((uint32_t)0x00000001U)

/**
  * @}
  */

/** @defgroup MMC_Exported_Constansts_Group5 MMC Erase Type
  * @{
  */
#define HAL_MMC_ERASE             0x00000000U
#define HAL_MMC_TRIM              0x00000001U
#define HAL_MMC_DISCARD           0x00000003U
#define HAL_MMC_SECURE_ERASE      0x80000000U
#define HAL_MMC_SECURE_TRIM_STEP1 0x80000001U
#define HAL_MMC_SECURE_TRIM_STEP2 0x80008000U

#define IS_MMC_ERASE_TYPE(TYPE) (((TYPE) == HAL_MMC_ERASE)             || \
                                 ((TYPE) == HAL_MMC_TRIM)              || \
                                 ((TYPE) == HAL_MMC_DISCARD)           || \
                                 ((TYPE) == HAL_MMC_SECURE_ERASE)      || \
                                 ((TYPE) == HAL_MMC_SECURE_TRIM_STEP1) || \
                                 ((TYPE) == HAL_MMC_SECURE_TRIM_STEP2))
/**
  * @}
  */

/** @defgroup MMC_Exported_Constansts_Group6 MMC Secure Removal Type
  * @{
  */
#define HAL_MMC_SRT_ERASE                   0x00000001U
#define HAL_MMC_SRT_WRITE_CHAR_ERASE        0x00000002U
#define HAL_MMC_SRT_WRITE_CHAR_COMPL_RANDOM 0x00000004U
#define HAL_MMC_SRT_VENDOR_DEFINED          0x00000008U


#define IS_MMC_SRT_TYPE(TYPE) (((TYPE) == HAL_MMC_SRT_ERASE)                   || \
                               ((TYPE) == HAL_MMC_SRT_WRITE_CHAR_ERASE)        || \
                               ((TYPE) == HAL_MMC_SRT_WRITE_CHAR_COMPL_RANDOM) || \
                               ((TYPE) == HAL_MMC_SRT_VENDOR_DEFINED))
/**
  * @}
  */

/** @defgroup MMC_Exported_Constansts_Group7 MMC Partitions types
  * @{
  */
typedef uint32_t HAL_MMC_PartitionTypeDef;

#define HAL_MMC_USER_AREA_PARTITION              0x00000000U
#define HAL_MMC_BOOT_PARTITION1                  0x00000100U
#define HAL_MMC_BOOT_PARTITION2                  0x00000200U
#define HAL_MMC_RPMB_PARTITION                   0x00000300U
/**
  * @}
  */

/**
  * @}
  */

/* Exported macro ------------------------------------------------------------*/
/** @defgroup MMC_Exported_macros MMC Exported Macros
  *  @brief macros to handle interrupts and specific clock configurations
  * @{
  */
/** @brief Reset MMC handle state.
  * @param  __HANDLE__ MMC Handle.
  * @retval None
  */
#if defined (USE_HAL_MMC_REGISTER_CALLBACKS) && (USE_HAL_MMC_REGISTER_CALLBACKS == 1U)
#define __HAL_MMC_RESET_HANDLE_STATE(__HANDLE__)           do {                                              \
                                                                (__HANDLE__)->State = HAL_MMC_STATE_RESET; \
                                                                (__HANDLE__)->MspInitCallback = NULL;       \
                                                                (__HANDLE__)->MspDeInitCallback = NULL;     \
                                                              } while(0)
#else
#define __HAL_MMC_RESET_HANDLE_STATE(__HANDLE__)           ((__HANDLE__)->State = HAL_MMC_STATE_RESET)
#endif /* USE_HAL_MMC_REGISTER_CALLBACKS */

/**
  * @brief  Enable the MMC device interrupt.
  * @param  __HANDLE__ MMC Handle.
  * @param  __INTERRUPT__ specifies the SDMMC interrupt sources to be enabled.
  *         This parameter can be one or a combination of the following values:
  *            @arg SDMMC_IT_CCRCFAIL:   Command response received (CRC check failed) interrupt
  *            @arg SDMMC_IT_DCRCFAIL:   Data block sent/received (CRC check failed) interrupt
  *            @arg SDMMC_IT_CTIMEOUT:   Command response timeout interrupt
  *            @arg SDMMC_IT_DTIMEOUT:   Data timeout interrupt
  *            @arg SDMMC_IT_TXUNDERR:   Transmit FIFO underrun error interrupt
  *            @arg SDMMC_IT_RXOVERR:    Received FIFO overrun error interrupt
  *            @arg SDMMC_IT_CMDREND:    Command response received (CRC check passed) interrupt
  *            @arg SDMMC_IT_CMDSENT:    Command sent (no response required) interrupt
  *            @arg SDMMC_IT_DATAEND:    Data end (data counter, DATACOUNT, is zero) interrupt
  *            @arg SDMMC_IT_DHOLD:      Data transfer Hold interrupt
  *            @arg SDMMC_IT_DBCKEND:    Data block sent/received (CRC check passed) interrupt
  *            @arg SDMMC_IT_DABORT:     Data transfer aborted by CMD12 interrupt
  *            @arg SDMMC_IT_TXFIFOHE:   Transmit FIFO Half Empty interrupt
  *            @arg SDMMC_IT_RXFIFOHF:   Receive FIFO Half Full interrupt
  *            @arg SDMMC_IT_RXFIFOF:    Receive FIFO full interrupt
  *            @arg SDMMC_IT_TXFIFOE:    Transmit FIFO empty interrupt
  *            @arg SDMMC_IT_BUSYD0END:  End of SDMMC_D0 Busy following a CMD response detected interrupt
  *            @arg SDMMC_IT_SDIOIT:     SD I/O interrupt received interrupt
  *            @arg SDMMC_IT_ACKFAIL:    Boot Acknowledgment received interrupt
  *            @arg SDMMC_IT_ACKTIMEOUT: Boot Acknowledgment timeout interrupt
  *            @arg SDMMC_IT_VSWEND:     Voltage switch critical timing section completion interrupt
  *            @arg SDMMC_IT_CKSTOP:     SDMMC_CK stopped in Voltage switch procedure interrupt
  *            @arg SDMMC_IT_IDMABTC:    IDMA buffer transfer complete interrupt
  * @retval None
  */
#define __HAL_MMC_ENABLE_IT(__HANDLE__, __INTERRUPT__) __SDMMC_ENABLE_IT((__HANDLE__)->Instance, (__INTERRUPT__))

/**
  * @brief  Disable the MMC device interrupt.
  * @param  __HANDLE__ MMC Handle.
  * @param  __INTERRUPT__ specifies the SDMMC interrupt sources to be disabled.
  *          This parameter can be one or a combination of the following values:
  *            @arg SDMMC_IT_CCRCFAIL:   Command response received (CRC check failed) interrupt
  *            @arg SDMMC_IT_DCRCFAIL:   Data block sent/received (CRC check failed) interrupt
  *            @arg SDMMC_IT_CTIMEOUT:   Command response timeout interrupt
  *            @arg SDMMC_IT_DTIMEOUT:   Data timeout interrupt
  *            @arg SDMMC_IT_TXUNDERR:   Transmit FIFO underrun error interrupt
  *            @arg SDMMC_IT_RXOVERR:    Received FIFO overrun error interrupt
  *            @arg SDMMC_IT_CMDREND:    Command response received (CRC check passed) interrupt
  *            @arg SDMMC_IT_CMDSENT:    Command sent (no response required) interrupt
  *            @arg SDMMC_IT_DATAEND:    Data end (data counter, DATACOUNT, is zero) interrupt
  *            @arg SDMMC_IT_DHOLD:      Data transfer Hold interrupt
  *            @arg SDMMC_IT_DBCKEND:    Data block sent/received (CRC check passed) interrupt
  *            @arg SDMMC_IT_DABORT:     Data transfer aborted by CMD12 interrupt
  *            @arg SDMMC_IT_TXFIFOHE:   Transmit FIFO Half Empty interrupt
  *            @arg SDMMC_IT_RXFIFOHF:   Receive FIFO Half Full interrupt
  *            @arg SDMMC_IT_RXFIFOF:    Receive FIFO full interrupt
  *            @arg SDMMC_IT_TXFIFOE:    Transmit FIFO empty interrupt
  *            @arg SDMMC_IT_BUSYD0END:  End of SDMMC_D0 Busy following a CMD response detected interrupt
  *            @arg SDMMC_IT_SDIOIT:     SD I/O interrupt received interrupt
  *            @arg SDMMC_IT_ACKFAIL:    Boot Acknowledgment received interrupt
  *            @arg SDMMC_IT_ACKTIMEOUT: Boot Acknowledgment timeout interrupt
  *            @arg SDMMC_IT_VSWEND:     Voltage switch critical timing section completion interrupt
  *            @arg SDMMC_IT_CKSTOP:     SDMMC_CK stopped in Voltage switch procedure interrupt
  *            @arg SDMMC_IT_IDMABTC:    IDMA buffer transfer complete interrupt
  * @retval None
  */
#define __HAL_MMC_DISABLE_IT(__HANDLE__, __INTERRUPT__) __SDMMC_DISABLE_IT((__HANDLE__)->Instance, (__INTERRUPT__))

/**
  * @brief  Check whether the specified MMC flag is set or not.
  * @param  __HANDLE__ MMC Handle.
  * @param  __FLAG__ specifies the flag to check.
  *          This parameter can be one of the following values:
  *            @arg SDMMC_FLAG_CCRCFAIL:   Command response received (CRC check failed)
  *            @arg SDMMC_FLAG_DCRCFAIL:   Data block sent/received (CRC check failed)
  *            @arg SDMMC_FLAG_CTIMEOUT:   Command response timeout
  *            @arg SDMMC_FLAG_DTIMEOUT:   Data timeout
  *            @arg SDMMC_FLAG_TXUNDERR:   Transmit FIFO underrun error
  *            @arg SDMMC_FLAG_RXOVERR:    Received FIFO overrun error
  *            @arg SDMMC_FLAG_CMDREND:    Command response received (CRC check passed)
  *            @arg SDMMC_FLAG_CMDSENT:    Command sent (no response required)
  *            @arg SDMMC_FLAG_DATAEND:    Data end (data counter, DATACOUNT, is zero)
  *            @arg SDMMC_FLAG_DHOLD:      Data transfer Hold
  *            @arg SDMMC_FLAG_DBCKEND:    Data block sent/received (CRC check passed)
  *            @arg SDMMC_FLAG_DABORT:     Data transfer aborted by CMD12
  *            @arg SDMMC_FLAG_DPSMACT:    Data path state machine active
  *            @arg SDMMC_FLAG_CPSMACT:    Command path state machine active
  *            @arg SDMMC_FLAG_TXFIFOHE:   Transmit FIFO Half Empty
  *            @arg SDMMC_FLAG_RXFIFOHF:   Receive FIFO Half Full
  *            @arg SDMMC_FLAG_TXFIFOF:    Transmit FIFO full
  *            @arg SDMMC_FLAG_RXFIFOF:    Receive FIFO full
  *            @arg SDMMC_FLAG_TXFIFOE:    Transmit FIFO empty
  *            @arg SDMMC_FLAG_RXFIFOE:    Receive FIFO empty
  *            @arg SDMMC_FLAG_BUSYD0:     Inverted value of SDMMC_D0 line (Busy)
  *            @arg SDMMC_FLAG_BUSYD0END:  End of SDMMC_D0 Busy following a CMD response detected
  *            @arg SDMMC_FLAG_SDIOIT:     SD I/O interrupt received
  *            @arg SDMMC_FLAG_ACKFAIL:    Boot Acknowledgment received
  *            @arg SDMMC_FLAG_ACKTIMEOUT: Boot Acknowledgment timeout
  *            @arg SDMMC_FLAG_VSWEND:     Voltage switch critical timing section completion
  *            @arg SDMMC_FLAG_CKSTOP:     SDMMC_CK stopped in Voltage switch procedure
  *            @arg SDMMC_FLAG_IDMATE:     IDMA transfer error
  *            @arg SDMMC_FLAG_IDMABTC:    IDMA buffer transfer complete
  * @retval The new state of MMC FLAG (SET or RESET).
  */
#define __HAL_MMC_GET_FLAG(__HANDLE__, __FLAG__) __SDMMC_GET_FLAG((__HANDLE__)->Instance, (__FLAG__))

/**
  * @brief  Clear the MMC's pending flags.
  * @param  __HANDLE__ MMC Handle.
  * @param  __FLAG__ specifies the flag to clear.
  *          This parameter can be one or a combination of the following values:
  *            @arg SDMMC_FLAG_CCRCFAIL:   Command response received (CRC check failed)
  *            @arg SDMMC_FLAG_DCRCFAIL:   Data block sent/received (CRC check failed)
  *            @arg SDMMC_FLAG_CTIMEOUT:   Command response timeout
  *            @arg SDMMC_FLAG_DTIMEOUT:   Data timeout
  *            @arg SDMMC_FLAG_TXUNDERR:   Transmit FIFO underrun error
  *            @arg SDMMC_FLAG_RXOVERR:    Received FIFO overrun error
  *            @arg SDMMC_FLAG_CMDREND:    Command response received (CRC check passed)
  *            @arg SDMMC_FLAG_CMDSENT:    Command sent (no response required)
  *            @arg SDMMC_FLAG_DATAEND:    Data end (data counter, DATACOUNT, is zero)
  *            @arg SDMMC_FLAG_DHOLD:      Data transfer Hold
  *            @arg SDMMC_FLAG_DBCKEND:    Data block sent/received (CRC check passed)
  *            @arg SDMMC_FLAG_DABORT:     Data transfer aborted by CMD12
  *            @arg SDMMC_FLAG_BUSYD0END:  End of SDMMC_D0 Busy following a CMD response detected
  *            @arg SDMMC_FLAG_SDIOIT:     SD I/O interrupt received
  *            @arg SDMMC_FLAG_ACKFAIL:    Boot Acknowledgment received
  *            @arg SDMMC_FLAG_ACKTIMEOUT: Boot Acknowledgment timeout
  *            @arg SDMMC_FLAG_VSWEND:     Voltage switch critical timing section completion
  *            @arg SDMMC_FLAG_CKSTOP:     SDMMC_CK stopped in Voltage switch procedure
  *            @arg SDMMC_FLAG_IDMATE:     IDMA transfer error
  *            @arg SDMMC_FLAG_IDMABTC:    IDMA buffer transfer complete
  * @retval None
  */
#define __HAL_MMC_CLEAR_FLAG(__HANDLE__, __FLAG__) __SDMMC_CLEAR_FLAG((__HANDLE__)->Instance, (__FLAG__))

/**
  * @brief  Check whether the specified MMC interrupt has occurred or not.
  * @param  __HANDLE__ MMC Handle.
  * @param  __INTERRUPT__ specifies the SDMMC interrupt source to check.
  *          This parameter can be one of the following values:
  *            @arg SDMMC_IT_CCRCFAIL:   Command response received (CRC check failed) interrupt
  *            @arg SDMMC_IT_DCRCFAIL:   Data block sent/received (CRC check failed) interrupt
  *            @arg SDMMC_IT_CTIMEOUT:   Command response timeout interrupt
  *            @arg SDMMC_IT_DTIMEOUT:   Data timeout interrupt
  *            @arg SDMMC_IT_TXUNDERR:   Transmit FIFO underrun error interrupt
  *            @arg SDMMC_IT_RXOVERR:    Received FIFO overrun error interrupt
  *            @arg SDMMC_IT_CMDREND:    Command response received (CRC check passed) interrupt
  *            @arg SDMMC_IT_CMDSENT:    Command sent (no response required) interrupt
  *            @arg SDMMC_IT_DATAEND:    Data end (data counter, DATACOUNT, is zero) interrupt
  *            @arg SDMMC_IT_DHOLD:      Data transfer Hold interrupt
  *            @arg SDMMC_IT_DBCKEND:    Data block sent/received (CRC check passed) interrupt
  *            @arg SDMMC_IT_DABORT:     Data transfer aborted by CMD12 interrupt
  *            @arg SDMMC_IT_TXFIFOHE:   Transmit FIFO Half Empty interrupt
  *            @arg SDMMC_IT_RXFIFOHF:   Receive FIFO Half Full interrupt
  *            @arg SDMMC_IT_RXFIFOF:    Receive FIFO full interrupt
  *            @arg SDMMC_IT_TXFIFOE:    Transmit FIFO empty interrupt
  *            @arg SDMMC_IT_BUSYD0END:  End of SDMMC_D0 Busy following a CMD response detected interrupt
  *            @arg SDMMC_IT_SDIOIT:     SD I/O interrupt received interrupt
  *            @arg SDMMC_IT_ACKFAIL:    Boot Acknowledgment received interrupt
  *            @arg SDMMC_IT_ACKTIMEOUT: Boot Acknowledgment timeout interrupt
  *            @arg SDMMC_IT_VSWEND:     Voltage switch critical timing section completion interrupt
  *            @arg SDMMC_IT_CKSTOP:     SDMMC_CK stopped in Voltage switch procedure interrupt
  *            @arg SDMMC_IT_IDMABTC:    IDMA buffer transfer complete interrupt
  * @retval The new state of MMC IT (SET or RESET).
  */
#define __HAL_MMC_GET_IT(__HANDLE__, __INTERRUPT__) __SDMMC_GET_IT((__HANDLE__)->Instance, (__INTERRUPT__))

/**
  * @brief  Clear the MMC's interrupt pending bits.
  * @param  __HANDLE__ MMC Handle.
  * @param  __INTERRUPT__ specifies the interrupt pending bit to clear.
  *          This parameter can be one or a combination of the following values:
  *            @arg SDMMC_IT_CCRCFAIL:   Command response received (CRC check failed) interrupt
  *            @arg SDMMC_IT_DCRCFAIL:   Data block sent/received (CRC check failed) interrupt
  *            @arg SDMMC_IT_CTIMEOUT:   Command response timeout interrupt
  *            @arg SDMMC_IT_DTIMEOUT:   Data timeout interrupt
  *            @arg SDMMC_IT_TXUNDERR:   Transmit FIFO underrun error interrupt
  *            @arg SDMMC_IT_RXOVERR:    Received FIFO overrun error interrupt
  *            @arg SDMMC_IT_CMDREND:    Command response received (CRC check passed) interrupt
  *            @arg SDMMC_IT_CMDSENT:    Command sent (no response required) interrupt
  *            @arg SDMMC_IT_DATAEND:    Data end (data counter, DATACOUNT, is zero) interrupt
  *            @arg SDMMC_IT_DHOLD:      Data transfer Hold interrupt
  *            @arg SDMMC_IT_DBCKEND:    Data block sent/received (CRC check passed) interrupt
  *            @arg SDMMC_IT_DABORT:     Data transfer aborted by CMD12 interrupt
  *            @arg SDMMC_IT_TXFIFOHE:   Transmit FIFO Half Empty interrupt
  *            @arg SDMMC_IT_RXFIFOHF:   Receive FIFO Half Full interrupt
  *            @arg SDMMC_IT_RXFIFOF:    Receive FIFO full interrupt
  *            @arg SDMMC_IT_TXFIFOE:    Transmit FIFO empty interrupt
  *            @arg SDMMC_IT_BUSYD0END:  End of SDMMC_D0 Busy following a CMD response detected interrupt
  *            @arg SDMMC_IT_SDIOIT:     SD I/O interrupt received interrupt
  *            @arg SDMMC_IT_ACKFAIL:    Boot Acknowledgment received interrupt
  *            @arg SDMMC_IT_ACKTIMEOUT: Boot Acknowledgment timeout interrupt
  *            @arg SDMMC_IT_VSWEND:     Voltage switch critical timing section completion interrupt
  *            @arg SDMMC_IT_CKSTOP:     SDMMC_CK stopped in Voltage switch procedure interrupt
  *            @arg SDMMC_IT_IDMABTC:    IDMA buffer transfer complete interrupt
  * @retval None
  */
#define __HAL_MMC_CLEAR_IT(__HANDLE__, __INTERRUPT__) __SDMMC_CLEAR_IT((__HANDLE__)->Instance, (__INTERRUPT__))

/**
  * @}
  */

/* Include MMC HAL Extension module */
#include "stm32h7xx_hal_mmc_ex.h"

/* Exported functions --------------------------------------------------------*/
/** @defgroup MMC_Exported_Functions MMC Exported Functions
  * @{
  */

/** @defgroup MMC_Exported_Functions_Group1 Initialization and de-initialization functions
  * @{
  */
HAL_StatusTypeDef HAL_MMC_Init(MMC_HandleTypeDef *hmmc);
HAL_StatusTypeDef HAL_MMC_InitCard(MMC_HandleTypeDef *hmmc);
HAL_StatusTypeDef HAL_MMC_DeInit(MMC_HandleTypeDef *hmmc);
void HAL_MMC_MspInit(MMC_HandleTypeDef *hmmc);
void HAL_MMC_MspDeInit(MMC_HandleTypeDef *hmmc);

/**
  * @}
  */

/** @defgroup MMC_Exported_Functions_Group2 Input and Output operation functions
  * @{
  */
/* Blocking mode: Polling */
HAL_StatusTypeDef HAL_MMC_ReadBlocks(MMC_HandleTypeDef *hmmc, uint8_t *pData, uint32_t BlockAdd,
                                     uint32_t NumberOfBlocks,
                                     uint32_t Timeout);
HAL_StatusTypeDef HAL_MMC_WriteBlocks(MMC_HandleTypeDef *hmmc, const uint8_t *pData, uint32_t BlockAdd,
                                      uint32_t NumberOfBlocks, uint32_t Timeout);
HAL_StatusTypeDef HAL_MMC_Erase(MMC_HandleTypeDef *hmmc, uint32_t BlockStartAdd, uint32_t BlockEndAdd);
/* Non-Blocking mode: IT */
HAL_StatusTypeDef HAL_MMC_ReadBlocks_IT(MMC_HandleTypeDef *hmmc, uint8_t *pData, uint32_t BlockAdd,
                                        uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_MMC_WriteBlocks_IT(MMC_HandleTypeDef *hmmc, const uint8_t *pData, uint32_t BlockAdd,
                                         uint32_t NumberOfBlocks);
/* Non-Blocking mode: DMA */
HAL_StatusTypeDef HAL_MMC_ReadBlocks_DMA(MMC_HandleTypeDef *hmmc, uint8_t *pData, uint32_t BlockAdd,
                                         uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_MMC_WriteBlocks_DMA(MMC_HandleTypeDef *hmmc, const uint8_t *pData, uint32_t BlockAdd,
                                          uint32_t NumberOfBlocks);

void HAL_MMC_IRQHandler(MMC_HandleTypeDef *hmmc);

/* Callback in non blocking modes (DMA) */
void HAL_MMC_TxCpltCallback(MMC_HandleTypeDef *hmmc);
void HAL_MMC_RxCpltCallback(MMC_HandleTypeDef *hmmc);
void HAL_MMC_ErrorCallback(MMC_HandleTypeDef *hmmc);
void HAL_MMC_AbortCallback(MMC_HandleTypeDef *hmmc);

#if defined (USE_HAL_MMC_REGISTER_CALLBACKS) && (USE_HAL_MMC_REGISTER_CALLBACKS == 1U)
/* MMC callback registering/unregistering */
HAL_StatusTypeDef HAL_MMC_RegisterCallback(MMC_HandleTypeDef *hmmc, HAL_MMC_CallbackIDTypeDef CallbackId,
                                           pMMC_CallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_MMC_UnRegisterCallback(MMC_HandleTypeDef *hmmc, HAL_MMC_CallbackIDTypeDef CallbackId);
#endif /* USE_HAL_MMC_REGISTER_CALLBACKS */
/**
  * @}
  */

/** @defgroup MMC_Exported_Functions_Group3 Peripheral Control functions
  * @{
  */
HAL_StatusTypeDef HAL_MMC_ConfigWideBusOperation(MMC_HandleTypeDef *hmmc, uint32_t WideMode);
HAL_StatusTypeDef HAL_MMC_ConfigSpeedBusOperation(MMC_HandleTypeDef *hmmc, uint32_t SpeedMode);
HAL_StatusTypeDef HAL_MMC_SwitchPartition(MMC_HandleTypeDef *hmmc, HAL_MMC_PartitionTypeDef Partition);
/**
  * @}
  */

/** @defgroup MMC_Exported_Functions_Group4 MMC card related functions
  * @{
  */
HAL_MMC_CardStateTypeDef HAL_MMC_GetCardState(MMC_HandleTypeDef *hmmc);
HAL_StatusTypeDef HAL_MMC_GetCardCID(const MMC_HandleTypeDef *hmmc, HAL_MMC_CardCIDTypeDef *pCID);
HAL_StatusTypeDef HAL_MMC_GetCardCSD(MMC_HandleTypeDef *hmmc, HAL_MMC_CardCSDTypeDef *pCSD);
HAL_StatusTypeDef HAL_MMC_GetCardInfo(const MMC_HandleTypeDef *hmmc, HAL_MMC_CardInfoTypeDef *pCardInfo);
HAL_StatusTypeDef HAL_MMC_GetCardExtCSD(MMC_HandleTypeDef *hmmc, uint32_t *pExtCSD, uint32_t Timeout);
/**
  * @}
  */

/** @defgroup MMC_Exported_Functions_Group5 Peripheral State and Errors functions
  * @{
  */
HAL_MMC_StateTypeDef HAL_MMC_GetState(const MMC_HandleTypeDef *hmmc);
uint32_t HAL_MMC_GetError(const MMC_HandleTypeDef *hmmc);
uint32_t HAL_MMC_GetRPMBError(const MMC_HandleTypeDef *hmmc);
/**
  * @}
  */

/** @defgroup MMC_Exported_Functions_Group6 Peripheral Abort management
  * @{
  */
HAL_StatusTypeDef HAL_MMC_Abort(MMC_HandleTypeDef *hmmc);
HAL_StatusTypeDef HAL_MMC_Abort_IT(MMC_HandleTypeDef *hmmc);
/**
  * @}
  */

/** @defgroup MMC_Exported_Functions_Group7 Peripheral Erase management
  * @{
  */
HAL_StatusTypeDef HAL_MMC_EraseSequence(MMC_HandleTypeDef *hmmc, uint32_t EraseType, uint32_t BlockStartAdd,
                                        uint32_t BlockEndAdd);
HAL_StatusTypeDef HAL_MMC_Sanitize(MMC_HandleTypeDef *hmmc);
HAL_StatusTypeDef HAL_MMC_ConfigSecRemovalType(MMC_HandleTypeDef *hmmc, uint32_t SRTMode);
HAL_StatusTypeDef HAL_MMC_GetSupportedSecRemovalType(MMC_HandleTypeDef *hmmc, uint32_t *SupportedSRT);
/**
  * @}
  */

/** @defgroup MMC_Exported_Functions_Group8 Peripheral Sleep management
  * @{
  */
HAL_StatusTypeDef HAL_MMC_SleepDevice(MMC_HandleTypeDef *hmmc);
HAL_StatusTypeDef HAL_MMC_AwakeDevice(MMC_HandleTypeDef *hmmc);
/**
  * @}
  */

/** @defgroup MMC_Exported_Functions_Group9 Replay Protected Memory Block management
  * @{
  */
HAL_StatusTypeDef HAL_MMC_RPMB_ProgramAuthenticationKey(MMC_HandleTypeDef *hmmc, const uint8_t *pKey, uint32_t Timeout);
HAL_StatusTypeDef HAL_MMC_RPMB_ProgramAuthenticationKey_IT(MMC_HandleTypeDef *hmmc, const uint8_t *pKey,
                                                           uint32_t Timeout);
uint32_t HAL_MMC_RPMB_GetWriteCounter(MMC_HandleTypeDef *hmmc, uint8_t *pNonce, uint32_t Timeout);
uint32_t HAL_MMC_RPMB_GetWriteCounter_IT(MMC_HandleTypeDef *hmmc, uint8_t *pNonce);
HAL_StatusTypeDef HAL_MMC_RPMB_WriteBlocks(MMC_HandleTypeDef *hmmc, const uint8_t *pData, uint16_t BlockAdd,
                                           uint16_t NumberOfBlocks, const uint8_t *pMAC, uint32_t Timeout);
HAL_StatusTypeDef HAL_MMC_RPMB_WriteBlocks_IT(MMC_HandleTypeDef *hmmc, const uint8_t *pData, uint16_t BlockAdd,
                                              uint16_t NumberOfBlocks, const uint8_t *pMAC);
HAL_StatusTypeDef HAL_MMC_RPMB_ReadBlocks(MMC_HandleTypeDef *hmmc, uint8_t *pData, uint16_t BlockAdd,
                                          uint16_t NumberOfBlocks, const uint8_t *pNonce, uint8_t *pMAC,
                                          uint32_t Timeout);
HAL_StatusTypeDef HAL_MMC_RPMB_ReadBlocks_IT(MMC_HandleTypeDef *hmmc, uint8_t *pData, uint16_t BlockAdd,
                                             uint16_t NumberOfBlocks, const uint8_t *pNonce, uint8_t *pMAC);

/**
  * @}
  */

/* Private types -------------------------------------------------------------*/
/** @defgroup MMC_Private_Types MMC Private Types
  * @{
  */

/**
  * @}
  */

/* Private defines -----------------------------------------------------------*/
/** @defgroup MMC_Private_Defines MMC Private Defines
  * @{
  */
#define MMC_EXT_CSD_DATA_SEC_SIZE_INDEX 61
#define MMC_EXT_CSD_DATA_SEC_SIZE_POS   8
/**
  * @}
  */

/* Private variables ---------------------------------------------------------*/
/** @defgroup MMC_Private_Variables MMC Private Variables
  * @{
  */

/**
  * @}
  */

/* Private constants ---------------------------------------------------------*/
/** @defgroup MMC_Private_Constants MMC Private Constants
  * @{
  */

/**
  * @}
  */

/* Private macros ------------------------------------------------------------*/
/** @defgroup MMC_Private_Macros MMC Private Macros
  * @{
  */

/**
  * @}
  */

/* Private functions prototypes ----------------------------------------------*/
/** @defgroup MMC_Private_Functions_Prototypes MMC Private Functions Prototypes
  * @{
  */

/**
  * @}
  */

/* Private functions ---------------------------------------------------------*/
/** @defgroup MMC_Private_Functions MMC Private Functions
  * @{
  */

/**
  * @}
  */


/**
  * @}
  */

/**
  * @}
  */
#endif /* SDMMC1 || SDMMC2 */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif


#endif /* STM32H7xx_HAL_MMC_H */
