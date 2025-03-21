/**
  ******************************************************************************
  * @file    stm32h7xx_hal_sd.h
  * @author  MCD Application Team
  * @brief   Header file of SD HAL module.
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
#ifndef STM32H7xx_HAL_SD_H
#define STM32H7xx_HAL_SD_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_ll_sdmmc.h"
#if defined (DLYB_SDMMC1) || defined (DLYB_SDMMC2) || defined (DLYB_SDMMC3)
#include "stm32h7xx_ll_delayblock.h"
#endif /* (DLYB_SDMMC1) || (DLYB_SDMMC2) */

/** @addtogroup STM32H7xx_HAL_Driver
  * @{
  */
#if defined (SDMMC1) || defined (SDMMC2)

/** @defgroup SD SD
  * @brief SD HAL module driver
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/** @defgroup SD_Exported_Types SD Exported Types
  * @{
  */

/** @defgroup SD_Exported_Types_Group1 SD State enumeration structure
  * @{
  */
typedef enum
{
  HAL_SD_STATE_RESET                  = ((uint32_t)0x00000000U),
  HAL_SD_STATE_READY                  = ((uint32_t)0x00000001U),
  HAL_SD_STATE_TIMEOUT                = ((uint32_t)0x00000002U),
  HAL_SD_STATE_BUSY                   = ((uint32_t)0x00000003U),
  HAL_SD_STATE_PROGRAMMING            = ((uint32_t)0x00000004U),
  HAL_SD_STATE_RECEIVING              = ((uint32_t)0x00000005U),
  HAL_SD_STATE_TRANSFER               = ((uint32_t)0x00000006U),
  HAL_SD_STATE_ERROR                  = ((uint32_t)0x0000000FU)
} HAL_SD_StateTypeDef;
/**
  * @}
  */

/** @defgroup SD_Exported_Types_Group2 SD Card State enumeration structure
  * @{
  */
typedef uint32_t HAL_SD_CardStateTypeDef;

#define HAL_SD_CARD_READY          0x00000001U
#define HAL_SD_CARD_IDENTIFICATION 0x00000002U
#define HAL_SD_CARD_STANDBY        0x00000003U
#define HAL_SD_CARD_TRANSFER       0x00000004U
#define HAL_SD_CARD_SENDING        0x00000005U
#define HAL_SD_CARD_RECEIVING      0x00000006U
#define HAL_SD_CARD_PROGRAMMING    0x00000007U
#define HAL_SD_CARD_DISCONNECTED   0x00000008U
#define HAL_SD_CARD_ERROR          0x000000FFU
/**
  * @}
  */

/** @defgroup SD_Exported_Types_Group3 SD Handle Structure definition
  * @{
  */
#define SD_InitTypeDef      SDMMC_InitTypeDef
#define SD_TypeDef          SDMMC_TypeDef

/**
  * @brief  SD Card Information Structure definition
  */
typedef struct
{
  uint32_t CardType;

  uint32_t CardVersion;

  uint32_t Class;

  uint32_t RelCardAdd;

  uint32_t BlockNbr;

  uint32_t BlockSize;

  uint32_t LogBlockNbr;

  uint32_t LogBlockSize;

  uint32_t CardSpeed;

} HAL_SD_CardInfoTypeDef;

/**
  * @brief  SD handle Structure definition
  */
#if defined (USE_HAL_SD_REGISTER_CALLBACKS) && (USE_HAL_SD_REGISTER_CALLBACKS == 1U)
typedef struct __SD_HandleTypeDef
#else
typedef struct
#endif /* USE_HAL_SD_REGISTER_CALLBACKS */
{
  SD_TypeDef                   *Instance;

  SD_InitTypeDef               Init;

  HAL_LockTypeDef              Lock;

  const uint8_t                *pTxBuffPtr;

  uint32_t                     TxXferSize;

  uint8_t                      *pRxBuffPtr;

  uint32_t                     RxXferSize;

  __IO uint32_t                Context;

  __IO HAL_SD_StateTypeDef     State;

  __IO uint32_t                ErrorCode;

  HAL_SD_CardInfoTypeDef       SdCard;

  uint32_t                     CSD[4];

  uint32_t                     CID[4];

#if defined (USE_HAL_SD_REGISTER_CALLBACKS) && (USE_HAL_SD_REGISTER_CALLBACKS == 1U)
  void (* TxCpltCallback)(struct __SD_HandleTypeDef *hsd);
  void (* RxCpltCallback)(struct __SD_HandleTypeDef *hsd);
  void (* ErrorCallback)(struct __SD_HandleTypeDef *hsd);
  void (* AbortCpltCallback)(struct __SD_HandleTypeDef *hsd);
  void (* Read_DMADblBuf0CpltCallback)(struct __SD_HandleTypeDef *hsd);
  void (* Read_DMADblBuf1CpltCallback)(struct __SD_HandleTypeDef *hsd);
  void (* Write_DMADblBuf0CpltCallback)(struct __SD_HandleTypeDef *hsd);
  void (* Write_DMADblBuf1CpltCallback)(struct __SD_HandleTypeDef *hsd);
#if (USE_SD_TRANSCEIVER != 0U)
  void (* DriveTransceiver_1_8V_Callback)(FlagStatus status);
#endif /* USE_SD_TRANSCEIVER */

  void (* MspInitCallback)(struct __SD_HandleTypeDef *hsd);
  void (* MspDeInitCallback)(struct __SD_HandleTypeDef *hsd);
#endif /* USE_HAL_SD_REGISTER_CALLBACKS */
} SD_HandleTypeDef;

/**
  * @}
  */

/** @defgroup SD_Exported_Types_Group4 Card Specific Data: CSD Register
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
} HAL_SD_CardCSDTypeDef;
/**
  * @}
  */

/** @defgroup SD_Exported_Types_Group5 Card Identification Data: CID Register
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

} HAL_SD_CardCIDTypeDef;
/**
  * @}
  */

/** @defgroup SD_Exported_Types_Group6 SD Card Status returned by ACMD13
  * @{
  */
typedef struct
{
  __IO uint8_t  DataBusWidth;
  __IO uint8_t  SecuredMode;
  __IO uint16_t CardType;
  __IO uint32_t ProtectedAreaSize;
  __IO uint8_t  SpeedClass;
  __IO uint8_t  PerformanceMove;
  __IO uint8_t  AllocationUnitSize;
  __IO uint16_t EraseSize;
  __IO uint8_t  EraseTimeout;
  __IO uint8_t  EraseOffset;
  __IO uint8_t  UhsSpeedGrade;
  __IO uint8_t  UhsAllocationUnitSize;
  __IO uint8_t  VideoSpeedClass;
} HAL_SD_CardStatusTypeDef;
/**
  * @}
  */

#if defined (USE_HAL_SD_REGISTER_CALLBACKS) && (USE_HAL_SD_REGISTER_CALLBACKS == 1U)
/** @defgroup SD_Exported_Types_Group7 SD Callback ID enumeration definition
  * @{
  */
typedef enum
{
  HAL_SD_TX_CPLT_CB_ID                 = 0x00U,
  HAL_SD_RX_CPLT_CB_ID                 = 0x01U,
  HAL_SD_ERROR_CB_ID                   = 0x02U,
  HAL_SD_ABORT_CB_ID                   = 0x03U,
  HAL_SD_READ_DMA_DBL_BUF0_CPLT_CB_ID  = 0x04U,
  HAL_SD_READ_DMA_DBL_BUF1_CPLT_CB_ID  = 0x05U,
  HAL_SD_WRITE_DMA_DBL_BUF0_CPLT_CB_ID = 0x06U,
  HAL_SD_WRITE_DMA_DBL_BUF1_CPLT_CB_ID = 0x07U,

  HAL_SD_MSP_INIT_CB_ID                = 0x10U,
  HAL_SD_MSP_DEINIT_CB_ID              = 0x11U
} HAL_SD_CallbackIDTypeDef;
/**
  * @}
  */

/** @defgroup SD_Exported_Types_Group8 SD Callback pointer definition
  * @{
  */
typedef void (*pSD_CallbackTypeDef)(SD_HandleTypeDef *hsd);
#if (USE_SD_TRANSCEIVER != 0U)
typedef void (*pSD_TransceiverCallbackTypeDef)(FlagStatus status);
#endif /* USE_SD_TRANSCEIVER */
/**
  * @}
  */
#endif /* USE_HAL_SD_REGISTER_CALLBACKS */
/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup SD_Exported_Constants SD Exported Constants
  * @{
  */

#define BLOCKSIZE   ((uint32_t)512U)

/** @defgroup SD_Exported_Constansts_Group1 SD Error status enumeration Structure definition
  * @{
  */
#define HAL_SD_ERROR_NONE                     SDMMC_ERROR_NONE
#define HAL_SD_ERROR_CMD_CRC_FAIL             SDMMC_ERROR_CMD_CRC_FAIL
#define HAL_SD_ERROR_DATA_CRC_FAIL            SDMMC_ERROR_DATA_CRC_FAIL
#define HAL_SD_ERROR_CMD_RSP_TIMEOUT          SDMMC_ERROR_CMD_RSP_TIMEOUT
#define HAL_SD_ERROR_DATA_TIMEOUT             SDMMC_ERROR_DATA_TIMEOUT
#define HAL_SD_ERROR_TX_UNDERRUN              SDMMC_ERROR_TX_UNDERRUN
#define HAL_SD_ERROR_RX_OVERRUN               SDMMC_ERROR_RX_OVERRUN
#define HAL_SD_ERROR_ADDR_MISALIGNED          SDMMC_ERROR_ADDR_MISALIGNED
#define HAL_SD_ERROR_BLOCK_LEN_ERR            SDMMC_ERROR_BLOCK_LEN_ERR
/*!< number of transferred bytes does not match the block length  */
#define HAL_SD_ERROR_ERASE_SEQ_ERR            SDMMC_ERROR_ERASE_SEQ_ERR
#define HAL_SD_ERROR_BAD_ERASE_PARAM          SDMMC_ERROR_BAD_ERASE_PARAM
#define HAL_SD_ERROR_WRITE_PROT_VIOLATION     SDMMC_ERROR_WRITE_PROT_VIOLATION
#define HAL_SD_ERROR_LOCK_UNLOCK_FAILED       SDMMC_ERROR_LOCK_UNLOCK_FAILED
/*!< command or if there was an attempt to access a locked card   */
#define HAL_SD_ERROR_COM_CRC_FAILED           SDMMC_ERROR_COM_CRC_FAILED
#define HAL_SD_ERROR_ILLEGAL_CMD              SDMMC_ERROR_ILLEGAL_CMD
#define HAL_SD_ERROR_CARD_ECC_FAILED          SDMMC_ERROR_CARD_ECC_FAILED
#define HAL_SD_ERROR_CC_ERR                   SDMMC_ERROR_CC_ERR
#define HAL_SD_ERROR_GENERAL_UNKNOWN_ERR      SDMMC_ERROR_GENERAL_UNKNOWN_ERR
#define HAL_SD_ERROR_STREAM_READ_UNDERRUN     SDMMC_ERROR_STREAM_READ_UNDERRUN
#define HAL_SD_ERROR_STREAM_WRITE_OVERRUN     SDMMC_ERROR_STREAM_WRITE_OVERRUN
#define HAL_SD_ERROR_CID_CSD_OVERWRITE        SDMMC_ERROR_CID_CSD_OVERWRITE
#define HAL_SD_ERROR_WP_ERASE_SKIP            SDMMC_ERROR_WP_ERASE_SKIP
#define HAL_SD_ERROR_CARD_ECC_DISABLED        SDMMC_ERROR_CARD_ECC_DISABLED
#define HAL_SD_ERROR_ERASE_RESET              SDMMC_ERROR_ERASE_RESET
/*!< of erase sequence command was received                       */
#define HAL_SD_ERROR_AKE_SEQ_ERR              SDMMC_ERROR_AKE_SEQ_ERR
#define HAL_SD_ERROR_INVALID_VOLTRANGE        SDMMC_ERROR_INVALID_VOLTRANGE
#define HAL_SD_ERROR_ADDR_OUT_OF_RANGE        SDMMC_ERROR_ADDR_OUT_OF_RANGE
#define HAL_SD_ERROR_REQUEST_NOT_APPLICABLE   SDMMC_ERROR_REQUEST_NOT_APPLICABLE
#define HAL_SD_ERROR_PARAM                    SDMMC_ERROR_INVALID_PARAMETER
#define HAL_SD_ERROR_UNSUPPORTED_FEATURE      SDMMC_ERROR_UNSUPPORTED_FEATURE
#define HAL_SD_ERROR_BUSY                     SDMMC_ERROR_BUSY
#define HAL_SD_ERROR_DMA                      SDMMC_ERROR_DMA
#define HAL_SD_ERROR_TIMEOUT                  SDMMC_ERROR_TIMEOUT

#if defined (USE_HAL_SD_REGISTER_CALLBACKS) && (USE_HAL_SD_REGISTER_CALLBACKS == 1U)
#define HAL_SD_ERROR_INVALID_CALLBACK         SDMMC_ERROR_INVALID_PARAMETER
#endif /* USE_HAL_SD_REGISTER_CALLBACKS */
/**
  * @}
  */

/** @defgroup SD_Exported_Constansts_Group2 SD context enumeration
  * @{
  */
#define   SD_CONTEXT_NONE                 ((uint32_t)0x00000000U)
#define   SD_CONTEXT_READ_SINGLE_BLOCK    ((uint32_t)0x00000001U)
#define   SD_CONTEXT_READ_MULTIPLE_BLOCK  ((uint32_t)0x00000002U)
#define   SD_CONTEXT_WRITE_SINGLE_BLOCK   ((uint32_t)0x00000010U)
#define   SD_CONTEXT_WRITE_MULTIPLE_BLOCK ((uint32_t)0x00000020U)
#define   SD_CONTEXT_IT                   ((uint32_t)0x00000008U)
#define   SD_CONTEXT_DMA                  ((uint32_t)0x00000080U)

/**
  * @}
  */

/** @defgroup SD_Exported_Constansts_Group3 SD Supported Memory Cards
  * @{
  */
#define CARD_NORMAL_SPEED        ((uint32_t)0x00000000U)
#define CARD_HIGH_SPEED          ((uint32_t)0x00000100U)
#define CARD_ULTRA_HIGH_SPEED    ((uint32_t)0x00000200U)    /*!< UHS-I SD Card <50Mo/s for SDR50, DDR5 Cards
                                                                 and <104Mo/s for SDR104, Spec version 3.01          */

#define CARD_SDSC                  ((uint32_t)0x00000000U)
#define CARD_SDHC_SDXC             ((uint32_t)0x00000001U)
#define CARD_SECURED               ((uint32_t)0x00000003U)

/**
  * @}
  */

/** @defgroup SD_Exported_Constansts_Group4 SD Supported Version
  * @{
  */
#define CARD_V1_X                  ((uint32_t)0x00000000U)
#define CARD_V2_X                  ((uint32_t)0x00000001U)
/**
  * @}
  */

/**
  * @}
  */

/* Exported macro ------------------------------------------------------------*/
/** @defgroup SD_Exported_macros SD Exported Macros
  *  @brief macros to handle interrupts and specific clock configurations
  * @{
  */
/** @brief Reset SD handle state.
  * @param  __HANDLE__ SD Handle.
  * @retval None
  */
#if defined (USE_HAL_SD_REGISTER_CALLBACKS) && (USE_HAL_SD_REGISTER_CALLBACKS == 1U)
#define __HAL_SD_RESET_HANDLE_STATE(__HANDLE__)           do {                                              \
                                                               (__HANDLE__)->State = HAL_SD_STATE_RESET; \
                                                               (__HANDLE__)->MspInitCallback = NULL;       \
                                                               (__HANDLE__)->MspDeInitCallback = NULL;     \
                                                             } while(0)
#else
#define __HAL_SD_RESET_HANDLE_STATE(__HANDLE__)           ((__HANDLE__)->State = HAL_SD_STATE_RESET)
#endif /* USE_HAL_SD_REGISTER_CALLBACKS */

/**
  * @brief  Enable the SD device interrupt.
  * @param  __HANDLE__ SD Handle.
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
  *            @arg SDMMC_IT_SDIOIT:     SDIO interrupt received interrupt
  *            @arg SDMMC_IT_ACKFAIL:    Boot Acknowledgment received interrupt
  *            @arg SDMMC_IT_ACKTIMEOUT: Boot Acknowledgment timeout interrupt
  *            @arg SDMMC_IT_VSWEND:     Voltage switch critical timing section completion interrupt
  *            @arg SDMMC_IT_CKSTOP:     SDMMC_CK stopped in Voltage switch procedure interrupt
  *            @arg SDMMC_IT_IDMABTC:    IDMA buffer transfer complete interrupt
  * @retval None
  */
#define __HAL_SD_ENABLE_IT(__HANDLE__, __INTERRUPT__) __SDMMC_ENABLE_IT((__HANDLE__)->Instance, (__INTERRUPT__))

/**
  * @brief  Disable the SD device interrupt.
  * @param  __HANDLE__ SD Handle.
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
  *            @arg SDMMC_IT_SDIOIT:     SDIO interrupt received interrupt
  *            @arg SDMMC_IT_ACKFAIL:    Boot Acknowledgment received interrupt
  *            @arg SDMMC_IT_ACKTIMEOUT: Boot Acknowledgment timeout interrupt
  *            @arg SDMMC_IT_VSWEND:     Voltage switch critical timing section completion interrupt
  *            @arg SDMMC_IT_CKSTOP:     SDMMC_CK stopped in Voltage switch procedure interrupt
  *            @arg SDMMC_IT_IDMABTC:    IDMA buffer transfer complete interrupt
  * @retval None
  */
#define __HAL_SD_DISABLE_IT(__HANDLE__, __INTERRUPT__) __SDMMC_DISABLE_IT((__HANDLE__)->Instance, (__INTERRUPT__))

/**
  * @brief  Check whether the specified SD flag is set or not.
  * @param  __HANDLE__ SD Handle.
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
  *            @arg SDMMC_FLAG_SDIOIT:     SDIO interrupt received
  *            @arg SDMMC_FLAG_ACKFAIL:    Boot Acknowledgment received
  *            @arg SDMMC_FLAG_ACKTIMEOUT: Boot Acknowledgment timeout
  *            @arg SDMMC_FLAG_VSWEND:     Voltage switch critical timing section completion
  *            @arg SDMMC_FLAG_CKSTOP:     SDMMC_CK stopped in Voltage switch procedure
  *            @arg SDMMC_FLAG_IDMATE:     IDMA transfer error
  *            @arg SDMMC_FLAG_IDMABTC:    IDMA buffer transfer complete
  * @retval The new state of SD FLAG (SET or RESET).
  */
#define __HAL_SD_GET_FLAG(__HANDLE__, __FLAG__) __SDMMC_GET_FLAG((__HANDLE__)->Instance, (__FLAG__))

/**
  * @brief  Clear the SD's pending flags.
  * @param  __HANDLE__ SD Handle.
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
  *            @arg SDMMC_FLAG_SDIOIT:     SDIO interrupt received
  *            @arg SDMMC_FLAG_ACKFAIL:    Boot Acknowledgment received
  *            @arg SDMMC_FLAG_ACKTIMEOUT: Boot Acknowledgment timeout
  *            @arg SDMMC_FLAG_VSWEND:     Voltage switch critical timing section completion
  *            @arg SDMMC_FLAG_CKSTOP:     SDMMC_CK stopped in Voltage switch procedure
  *            @arg SDMMC_FLAG_IDMATE:     IDMA transfer error
  *            @arg SDMMC_FLAG_IDMABTC:    IDMA buffer transfer complete
  * @retval None
  */
#define __HAL_SD_CLEAR_FLAG(__HANDLE__, __FLAG__) __SDMMC_CLEAR_FLAG((__HANDLE__)->Instance, (__FLAG__))

/**
  * @brief  Check whether the specified SD interrupt has occurred or not.
  * @param  __HANDLE__ SD Handle.
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
  *            @arg SDMMC_IT_SDIOIT:     SDIO interrupt received interrupt
  *            @arg SDMMC_IT_ACKFAIL:    Boot Acknowledgment received interrupt
  *            @arg SDMMC_IT_ACKTIMEOUT: Boot Acknowledgment timeout interrupt
  *            @arg SDMMC_IT_VSWEND:     Voltage switch critical timing section completion interrupt
  *            @arg SDMMC_IT_CKSTOP:     SDMMC_CK stopped in Voltage switch procedure interrupt
  *            @arg SDMMC_IT_IDMABTC:    IDMA buffer transfer complete interrupt
  * @retval The new state of SD IT (SET or RESET).
  */
#define __HAL_SD_GET_IT(__HANDLE__, __INTERRUPT__) __SDMMC_GET_IT((__HANDLE__)->Instance, (__INTERRUPT__))

/**
  * @brief  Clear the SD's interrupt pending bits.
  * @param  __HANDLE__ SD Handle.
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
  *            @arg SDMMC_IT_BUSYD0END:  End of SDMMC_D0 Busy following a CMD response detected interrupt
  *            @arg SDMMC_IT_SDIOIT:     SDIO interrupt received interrupt
  *            @arg SDMMC_IT_ACKFAIL:    Boot Acknowledgment received interrupt
  *            @arg SDMMC_IT_ACKTIMEOUT: Boot Acknowledgment timeout interrupt
  *            @arg SDMMC_IT_VSWEND:     Voltage switch critical timing section completion interrupt
  *            @arg SDMMC_IT_CKSTOP:     SDMMC_CK stopped in Voltage switch procedure interrupt
  *            @arg SDMMC_IT_IDMABTC:    IDMA buffer transfer complete interrupt
  * @retval None
  */
#define __HAL_SD_CLEAR_IT(__HANDLE__, __INTERRUPT__) __SDMMC_CLEAR_IT((__HANDLE__)->Instance, (__INTERRUPT__))

/**
  * @}
  */

/* Include SD HAL Extension module */
#include "stm32h7xx_hal_sd_ex.h"

/* Exported functions --------------------------------------------------------*/
/** @defgroup SD_Exported_Functions SD Exported Functions
  * @{
  */

/** @defgroup SD_Exported_Functions_Group1 Initialization and de-initialization functions
  * @{
  */
HAL_StatusTypeDef HAL_SD_Init(SD_HandleTypeDef *hsd);
HAL_StatusTypeDef HAL_SD_InitCard(SD_HandleTypeDef *hsd);
HAL_StatusTypeDef HAL_SD_DeInit(SD_HandleTypeDef *hsd);
void              HAL_SD_MspInit(SD_HandleTypeDef *hsd);
void              HAL_SD_MspDeInit(SD_HandleTypeDef *hsd);
/**
  * @}
  */

/** @defgroup SD_Exported_Functions_Group2 Input and Output operation functions
  * @{
  */
/* Blocking mode: Polling */
HAL_StatusTypeDef HAL_SD_ReadBlocks(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks,
                                    uint32_t Timeout);
HAL_StatusTypeDef HAL_SD_WriteBlocks(SD_HandleTypeDef *hsd, const uint8_t *pData, uint32_t BlockAdd,
                                     uint32_t NumberOfBlocks, uint32_t Timeout);
HAL_StatusTypeDef HAL_SD_Erase(SD_HandleTypeDef *hsd, uint32_t BlockStartAdd, uint32_t BlockEndAdd);
/* Non-Blocking mode: IT */
HAL_StatusTypeDef HAL_SD_ReadBlocks_IT(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd,
                                       uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_SD_WriteBlocks_IT(SD_HandleTypeDef *hsd, const uint8_t *pData, uint32_t BlockAdd,
                                        uint32_t NumberOfBlocks);
/* Non-Blocking mode: DMA */
HAL_StatusTypeDef HAL_SD_ReadBlocks_DMA(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd,
                                        uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_SD_WriteBlocks_DMA(SD_HandleTypeDef *hsd, const uint8_t *pData, uint32_t BlockAdd,
                                         uint32_t NumberOfBlocks);

void              HAL_SD_IRQHandler(SD_HandleTypeDef *hsd);

/* Callback in non blocking modes (DMA) */
void              HAL_SD_TxCpltCallback(SD_HandleTypeDef *hsd);
void              HAL_SD_RxCpltCallback(SD_HandleTypeDef *hsd);
void              HAL_SD_ErrorCallback(SD_HandleTypeDef *hsd);
void              HAL_SD_AbortCallback(SD_HandleTypeDef *hsd);

#if (USE_SD_TRANSCEIVER != 0U)
/* Callback to switch in 1.8V mode */
void              HAL_SD_DriveTransceiver_1_8V_Callback(FlagStatus status);
#endif /* USE_SD_TRANSCEIVER */

#if defined (USE_HAL_SD_REGISTER_CALLBACKS) && (USE_HAL_SD_REGISTER_CALLBACKS == 1U)
/* SD callback registering/unregistering */
HAL_StatusTypeDef HAL_SD_RegisterCallback(SD_HandleTypeDef *hsd, HAL_SD_CallbackIDTypeDef CallbackID,
                                          pSD_CallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_SD_UnRegisterCallback(SD_HandleTypeDef *hsd, HAL_SD_CallbackIDTypeDef CallbackID);

#if (USE_SD_TRANSCEIVER != 0U)
HAL_StatusTypeDef HAL_SD_RegisterTransceiverCallback(SD_HandleTypeDef *hsd, pSD_TransceiverCallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_SD_UnRegisterTransceiverCallback(SD_HandleTypeDef *hsd);
#endif /* USE_SD_TRANSCEIVER */
#endif /* USE_HAL_SD_REGISTER_CALLBACKS */

/**
  * @}
  */

/** @defgroup SD_Exported_Functions_Group3 Peripheral Control functions
  * @{
  */
HAL_StatusTypeDef HAL_SD_ConfigWideBusOperation(SD_HandleTypeDef *hsd, uint32_t WideMode);
HAL_StatusTypeDef HAL_SD_ConfigSpeedBusOperation(SD_HandleTypeDef *hsd, uint32_t SpeedMode);
/**
  * @}
  */

/** @defgroup SD_Exported_Functions_Group4 SD card related functions
  * @{
  */
HAL_SD_CardStateTypeDef HAL_SD_GetCardState(SD_HandleTypeDef *hsd);
HAL_StatusTypeDef       HAL_SD_GetCardCID(const SD_HandleTypeDef *hsd, HAL_SD_CardCIDTypeDef *pCID);
HAL_StatusTypeDef       HAL_SD_GetCardCSD(SD_HandleTypeDef *hsd, HAL_SD_CardCSDTypeDef *pCSD);
HAL_StatusTypeDef       HAL_SD_GetCardStatus(SD_HandleTypeDef *hsd, HAL_SD_CardStatusTypeDef *pStatus);
HAL_StatusTypeDef       HAL_SD_GetCardInfo(const SD_HandleTypeDef *hsd, HAL_SD_CardInfoTypeDef *pCardInfo);
/**
  * @}
  */

/** @defgroup SD_Exported_Functions_Group5 Peripheral State and Errors functions
  * @{
  */
HAL_SD_StateTypeDef HAL_SD_GetState(const SD_HandleTypeDef *hsd);
uint32_t            HAL_SD_GetError(const SD_HandleTypeDef *hsd);
/**
  * @}
  */

/** @defgroup SD_Exported_Functions_Group6 Perioheral Abort management
  * @{
  */
HAL_StatusTypeDef HAL_SD_Abort(SD_HandleTypeDef *hsd);
HAL_StatusTypeDef HAL_SD_Abort_IT(SD_HandleTypeDef *hsd);
/**
  * @}
  */

/* Private types -------------------------------------------------------------*/
/** @defgroup SD_Private_Types SD Private Types
  * @{
  */

/**
  * @}
  */

/* Private defines -----------------------------------------------------------*/
/** @defgroup SD_Private_Defines SD Private Defines
  * @{
  */

/**
  * @}
  */

/* Private variables ---------------------------------------------------------*/
/** @defgroup SD_Private_Variables SD Private Variables
  * @{
  */

/**
  * @}
  */

/* Private constants ---------------------------------------------------------*/
/** @defgroup SD_Private_Constants SD Private Constants
  * @{
  */

/**
  * @}
  */

/* Private macros ------------------------------------------------------------*/
/** @defgroup SD_Private_Macros SD Private Macros
  * @{
  */

/**
  * @}
  */

/* Private functions prototypes ----------------------------------------------*/
/** @defgroup SD_Private_Functions_Prototypes SD Private Functions Prototypes
  * @{
  */

/**
  * @}
  */

/* Private functions ---------------------------------------------------------*/
/** @defgroup SD_Private_Functions SD Private Functions
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


#endif /* STM32H7xx_HAL_SD_H */
