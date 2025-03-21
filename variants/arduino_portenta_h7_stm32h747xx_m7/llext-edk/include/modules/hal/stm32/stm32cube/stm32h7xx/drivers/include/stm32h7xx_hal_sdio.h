/**
  **********************************************************************************************************************
  * @file    stm32h7xx_hal_sdio.h
  * @author  MCD Application Team
  * @brief   Header file of SDIO HAL module.
  **********************************************************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  **********************************************************************************************************************
  */

/* Define to prevent recursive inclusion -----------------------------------------------------------------------------*/
#ifndef STM32H7xx_HAL_SDIO_H
#define STM32H7xx_HAL_SDIO_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ----------------------------------------------------------------------------------------------------------*/
#include "stm32h7xx_ll_sdmmc.h"

/** @addtogroup STM32U5xx_HAL_Driver
  * @{
  */
#if defined (SDMMC1) || defined (SDMMC2)

/** @defgroup SDIO SDIO
  * @brief SDIO HAL module driver
  * @{
  */

/* Exported types ----------------------------------------------------------------------------------------------------*/
/** @defgroup SDIO_Exported_Types SDIO Exported Types
  * @{
  */

/** @defgroup SDIO_Exported_Types_Group1 SDIO State enumeration structure
  * @{

  */
typedef enum
{
  HAL_SDIO_STATE_RESET = 0x00U,
  HAL_SDIO_STATE_READY = 0x01U,
  HAL_SDIO_STATE_BUSY  = 0x02U,
} HAL_SDIO_StateTypeDef;

/**
  * @}
  */

/** @defgroup SDIO_Exported_Types_Group2 SDIO Handle and Structure definition
  * @{
  */
/**
  * @brief  SDIO Card Common Control Register Structure definition
  */
typedef struct
{
  uint8_t sdio_revision;
  uint8_t cccr_revision;
  uint8_t sd_spec_revision;
  uint8_t bus_width_8Bit;
  uint32_t card_capability;
  uint32_t commonCISPointer;
} HAL_SDIO_CCCR_TypeDef;

/**
  * @brief sdio card FBR register(Function Basic Register)
  */
typedef struct
{
  uint8_t flags;
  uint8_t ioStdFunctionCode;
  uint8_t ioExtFunctionCode;
  uint32_t ioPointerToCIS;
  uint32_t ioPointerToCSA;
} HAL_SDIO_FBR_t;

/**
  * @brief  SDIO CMD52 Structure definition
  */
typedef struct
{
  uint32_t Reg_Addr;
  uint8_t  ReadAfterWrite;
  uint8_t  IOFunctionNbr;
} HAL_SDIO_DirectCmd_TypeDef;

/**
  * @brief  SDIO CMD53 Structure definition
  */
typedef struct
{
  uint32_t Reg_Addr;
  uint32_t OpCode;
  uint32_t Block_Mode;
  uint32_t IOFunctionNbr;
} HAL_SDIO_ExtendedCmd_TypeDef;

#define SDIO_InitTypeDef      SDMMC_InitTypeDef
#define SDIO_TypeDef          SDMMC_TypeDef

/**
  * @brief  SDIO handle Structure definition
  */
typedef struct __SDIO_HandleTypeDef
{
  SDIO_TypeDef                   *Instance;

  SDIO_InitTypeDef               Init;

  HAL_LockTypeDef                Lock;

  uint8_t                        *pTxBuffPtr;

  uint32_t                       TxXferSize;

  uint8_t                        *pRxBuffPtr;

  uint32_t                       RxXferSize;

  uint32_t                       remaining_data;

  uint32_t                       next_data_addr;

  __IO uint32_t                  next_reg_addr;

  uint16_t                       block_size;

  __IO uint32_t                  Context;

  __IO HAL_SDIO_StateTypeDef     State;

  __IO uint32_t                  ErrorCode;

  uint8_t                        IOFunctionMask;

  volatile uint8_t               IOInterruptNbr;

  void (* SDIO_IOFunction_Callback[SDIO_MAX_IO_NUMBER])(struct __SDIO_HandleTypeDef *hsdio, uint32_t func);

#if defined (USE_HAL_SDIO_REGISTER_CALLBACKS) && (USE_HAL_SDIO_REGISTER_CALLBACKS == 1U)
  void (* TxCpltCallback)(struct __SDIO_HandleTypeDef *hsdio);
  void (* RxCpltCallback)(struct __SDIO_HandleTypeDef *hsdio);
  void (* ErrorCallback)(struct __SDIO_HandleTypeDef *hsdio);
  void (* MspInitCallback)(struct __SDIO_HandleTypeDef *hsdio);
  void (* MspDeInitCallback)(struct __SDIO_HandleTypeDef *hsdio);
#endif /* USE_HAL_SDIO_REGISTER_CALLBACKS */

#if (USE_SDIO_TRANSCEIVER != 0U)
  void (* DriveTransceiver_1_8V_Callback)(struct __SDIO_HandleTypeDef *hsdio, FlagStatus status);
#endif /* USE_SDIO_TRANSCEIVER */

  HAL_StatusTypeDef(* SDIO_IdentifyCard)(struct __SDIO_HandleTypeDef *hsdio);

} SDIO_HandleTypeDef;

/**
  * @}
  */
#if defined (USE_HAL_SDIO_REGISTER_CALLBACKS) && (USE_HAL_SDIO_REGISTER_CALLBACKS == 1U)
/** @defgroup SDIO_Exported_Types_Group3 SDIO Callback ID enumeration definition
  * @{
  */
typedef enum
{
  HAL_SDIO_TX_CPLT_CB_ID    = 0x00U,
  HAL_SDIO_RX_CPLT_CB_ID    = 0x01U,
  HAL_SDIO_ERROR_CB_ID      = 0x02U,
  HAL_SDIO_MSP_INIT_CB_ID   = 0x10U,
  HAL_SDIO_MSP_DEINIT_CB_ID = 0x11U
} HAL_SDIO_CallbackIDTypeDef;
/**
  * @}
  */

/** @defgroup SDIO_Exported_Types_Group4 SDIO Callback pointer definition
  * @{
  */
typedef void (*pSDIO_CallbackTypeDef)(SDIO_HandleTypeDef *hsdio);
/**
  * @}
  */
#endif /* USE_HAL_SDIO_REGISTER_CALLBACKS */

#if (USE_SDIO_TRANSCEIVER != 0U)
typedef void (*pSDIO_TransceiverCallbackTypeDef)(SDIO_HandleTypeDef *hsdio, FlagStatus status);
#endif /* USE_SDIO_TRANSCEIVER */

typedef HAL_StatusTypeDef(*pSDIO_IdentifyCardCallbackTypeDef)(SDIO_HandleTypeDef *hsdio);
typedef void (*HAL_SDIO_IOFunction_CallbackTypeDef)(SDIO_HandleTypeDef *hsdio, uint32_t func);
/**
  * @}
  */

/* Exported constants ------------------------------------------------------------------------------------------------*/
/** @defgroup SDIO_Exported_Constants SDIO Exported Constants
  * @{
  */

/** @defgroup SDIO_Exported_Constansts_Group1 SDIO Error status Structure definition
  * @{
  */
#define HAL_SDIO_ERROR_NONE             SDMMC_ERROR_NONE
#define HAL_SDIO_ERROR_DATA_CRC_FAIL    SDMMC_ERROR_DATA_CRC_FAIL
#define HAL_SDIO_ERROR_DATA_TIMEOUT     SDMMC_ERROR_DATA_TIMEOUT
#define HAL_SDIO_ERROR_TX_UNDERRUN      SDMMC_ERROR_TX_UNDERRUN
#define HAL_SDIO_ERROR_RX_OVERRUN       SDMMC_ERROR_RX_OVERRUN
#define HAL_SDIO_ERROR_TIMEOUT          SDMMC_ERROR_TIMEOUT
#define HAL_SDIO_ERROR_INVALID_CALLBACK SDMMC_ERROR_INVALID_PARAMETER
/**
  * @}
  */

/** @defgroup SDIO_Exported_Constansts_Group2 SDIO context enumeration
  * @{
  */
#define SDIO_CONTEXT_NONE                 0x00U
#define SDIO_CONTEXT_READ_SINGLE_BLOCK    0x01U
#define SDIO_CONTEXT_READ_MULTIPLE_BLOCK  0x02U
#define SDIO_CONTEXT_WRITE_SINGLE_BLOCK   0x10U
#define SDIO_CONTEXT_WRITE_MULTIPLE_BLOCK 0x20U
#define SDIO_CONTEXT_IT                   0x08U
#define SDIO_CONTEXT_DMA                  0x80U
/**
  * @}
  */

/** @defgroup SDIO_Exported_Constansts_Group3 SDIO Block mode enumeration
  * @{
  */
#define HAL_SDIO_MODE_BYTE   SDMMC_SDIO_MODE_BYTE
#define HAL_SDIO_MODE_BLOCK  SDMMC_SDIO_MODE_BLOCK
/**
  * @}
  */

/** @defgroup SDIO_Exported_Constansts_Group4 SDIO operation code enumeration
  * @{
  */
#define HAL_SDIO_OP_CODE_NO_INC    SDMMC_SDIO_NO_INC
#define HAL_SDIO_OP_CODE_AUTO_INC  SDMMC_SDIO_AUTO_INC
/**
  * @}
  */

/** @defgroup SDIO_Exported_Constansts_Group5 SDIO Read After Write(RAW) enumeration
  * @{
  */
#define HAL_SDIO_WRITE_ONLY       SDMMC_SDIO_WO
#define HAL_SDIO_READ_AFTER_WRITE SDMMC_SDIO_RAW
/**
  * @}
  */

/** @defgroup SDIO_Exported_Constansts_Group6 SDIO wire mode enumeration
  * @{
  */
#define HAL_SDIO_1_WIRE_MODE   0U
#define HAL_SDIO_4_WIRES_MODE  1U
/**
  * @}
  */

/** @defgroup SDIO_Exported_Constansts_Group7 SDIO Data block size enumeration
  * @{
  */
#define HAL_SDIO_DATA_BLOCK_SIZE_1BYTE     1U
#define HAL_SDIO_DATA_BLOCK_SIZE_2BYTE     2U
#define HAL_SDIO_DATA_BLOCK_SIZE_4BYTE     4U
#define HAL_SDIO_DATA_BLOCK_SIZE_8BYTE     8U
#define HAL_SDIO_DATA_BLOCK_SIZE_16BYTE    16U
#define HAL_SDIO_DATA_BLOCK_SIZE_32BYTE    32U
#define HAL_SDIO_DATA_BLOCK_SIZE_64BYTE    64U
#define HAL_SDIO_DATA_BLOCK_SIZE_128BYTE   128U
#define HAL_SDIO_DATA_BLOCK_SIZE_256BYTE   256U
#define HAL_SDIO_DATA_BLOCK_SIZE_512BYTE   512U
#define HAL_SDIO_DATA_BLOCK_SIZE_1024BYTE  1024U
#define HAL_SDIO_DATA_BLOCK_SIZE_2048BYTE  2048U
/**
  * @}
  */

/** @defgroup SDIO_Exported_Constansts_Group8 SDIO Bus Width enumeration
  * @{
  */
#define HAL_SDIO_BUS_WIDTH_8BIT_NOT_SUPPORTED 0U
#define HAL_SDIO_BUS_WIDTH_8BIT_SUPPORTED     1U
/**
  * @}
  */

/** @defgroup SDIO_Exported_Constansts_Group9 SDIO Data rate definitions
  * @{
  */
#define HAL_SDIOS_DATA_RATE_SDR12  0U
#define HAL_SDIOS_DATA_RATE_SDR25  1U
#define HAL_SDIOS_DATA_RATE_SDR50  2U
#define HAL_SDIOS_DATA_RATE_DDR50  3U
/**
  * @}
  */

/** @defgroup SDIO_Exported_Constansts_Group10 SDIO Functions definitions
  * @{
  */
#define HAL_SDIO_FUNCTION_0  0U
#define HAL_SDIO_FUNCTION_1  1U
#define HAL_SDIO_FUNCTION_2  2U
#define HAL_SDIO_FUNCTION_3  3U
#define HAL_SDIO_FUNCTION_4  4U
#define HAL_SDIO_FUNCTION_5  5U
#define HAL_SDIO_FUNCTION_6  6U
#define HAL_SDIO_FUNCTION_7  7U
/**
  * @}
  */

/** @defgroup SDIO_Exported_Constansts_Group11 SDIO FBR definitions
  * @{
  */
#define HAL_SDIO_FBR_SUPPORT_CSA             1U
#define HAL_SDIO_FBR_SUPPORT_POWER_SELECTION 1U
/**
  * @}
  */

/**
  * @}
  */
/* Exported macro ----------------------------------------------------------------------------------------------------*/
/** @defgroup SDIO_Exported_macros SDIO Exported Macros
  *  @brief macros to handle interrupts and specific clock configurations
  * @{
  */
/**
  * @brief  Enable the SDIO device interrupt.
  * @param  __HANDLE__ SDIO Handle.
  * @param  __INTERRUPT__ specifies the SDMMC interrupt sources to be enabled.
  *         This parameter can be one or a combination of @ref SDMMC_LL_Interrupt_sources.
  * @retval None
  */
#define __HAL_SDIO_ENABLE_IT(__HANDLE__, __INTERRUPT__) __SDMMC_ENABLE_IT((__HANDLE__)->Instance, (__INTERRUPT__))

/**
  * @brief  Disable the SDIO device interrupt.
  * @param  __HANDLE__ SDIO Handle.
  * @param  __INTERRUPT__ specifies the SDMMC interrupt sources to be disabled.
  *          This parameter can be one or a combination of @ref SDMMC_LL_Interrupt_sources.
  * @retval None
  */
#define __HAL_SDIO_DISABLE_IT(__HANDLE__, __INTERRUPT__) __SDMMC_DISABLE_IT((__HANDLE__)->Instance, (__INTERRUPT__))

/**
  * @brief  Check whether the specified SDIO flag is set or not.
  * @param  __HANDLE__ SDIO Handle.
  * @param  __FLAG__ specifies the flag to check.
  *          This parameter can be one of @ref SDMMC_LL_Flags.
  * @retval The new state of SDIO FLAG (SET or RESET).
  */
#define __HAL_SDIO_GET_FLAG(__HANDLE__, __FLAG__) __SDMMC_GET_FLAG((__HANDLE__)->Instance, (__FLAG__))

/**
  * @brief  Clear the SDIO's pending flags.
  * @param  __HANDLE__ SDIO Handle.
  * @param  __FLAG__ specifies the flag to clear.
  *          This parameter can be one or a combination of @ref SDMMC_LL_Flags.
  * @retval None
  */
#define __HAL_SDIO_CLEAR_FLAG(__HANDLE__, __FLAG__) __SDMMC_CLEAR_FLAG((__HANDLE__)->Instance, (__FLAG__))

/**
  * @brief  Check whether the specified SDIO interrupt has occurred or not.
  * @param  __HANDLE__ SDIO Handle.
  * @param  __INTERRUPT__ specifies the SDMMC interrupt source to check.
  *          This parameter can be one of @ref SDMMC_LL_Interrupt_sources.
  * @retval The new state of SDIO IT (SET or RESET).
  */
#define __HAL_SDIO_GET_IT(__HANDLE__, __INTERRUPT__) __SDMMC_GET_IT((__HANDLE__)->Instance, (__INTERRUPT__))

/**
  * @brief  Checks whether the specified SDIO interrupt is enabled or not.
  * @param  __HANDLE__    : SDIO handle.
  * @param  __INTERRUPT__ : specifies the SDMMC interrupt source to check.
  * @retval The state of SDIO IT (SET or RESET).
  */
#define __HAL_SDIO_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) \
  __SDMMC_GET_IT_SOURCE((__HANDLE__)->Instance, (__INTERRUPT__))
/**
  * @}
  */

/* Exported functions ------------------------------------------------------------------------------------------------*/
/** @defgroup SDIO_Exported_Functions SDIO Exported Functions
  * @{
  */
/** @defgroup SDIO_Exported_Functions_Group1 Initialization and de-initialization functions
  * @{
  */
HAL_StatusTypeDef HAL_SDIO_Init(SDIO_HandleTypeDef *hsdio);
HAL_StatusTypeDef HAL_SDIO_DeInit(SDIO_HandleTypeDef *hsdio);

void HAL_SDIO_MspInit(SDIO_HandleTypeDef *hsdio);
void HAL_SDIO_MspDeInit(SDIO_HandleTypeDef *hsdio);
/**
  * @}
  */

/** @defgroup SDIO_Exported_Functions_Group2 Peripheral Control functions
  * @{
  */
HAL_StatusTypeDef HAL_SDIO_SetDataBusWidth(SDIO_HandleTypeDef *hsdio, uint32_t BusWide);
HAL_StatusTypeDef HAL_SDIO_ConfigFrequency(SDIO_HandleTypeDef *hsdio, uint32_t ClockSpeed);

HAL_StatusTypeDef HAL_SDIO_SetBlockSize(SDIO_HandleTypeDef *hsdio, uint8_t function_nbr, uint16_t BlockSize);
HAL_StatusTypeDef HAL_SDIO_SetSpeedMode(SDIO_HandleTypeDef *hsdio, uint32_t DataRate);

HAL_StatusTypeDef HAL_SDIO_CardReset(SDIO_HandleTypeDef *hsdio);
HAL_StatusTypeDef HAL_SDIO_GetCardCommonControlRegister(SDIO_HandleTypeDef *hsdio, HAL_SDIO_CCCR_TypeDef *pCccr);
HAL_StatusTypeDef HAL_SDIO_GetCardFBRRegister(SDIO_HandleTypeDef *hsdio, HAL_SDIO_FBR_t *pFbr);
/**
  * @}
  */

/** @defgroup SDIO_Exported_Functions_Group3 Process functions
  * @{
  */
HAL_StatusTypeDef HAL_SDIO_ReadDirect(SDIO_HandleTypeDef *hsdio, HAL_SDIO_DirectCmd_TypeDef *Argument, uint8_t *pData);
HAL_StatusTypeDef HAL_SDIO_WriteDirect(SDIO_HandleTypeDef *hsdio, HAL_SDIO_DirectCmd_TypeDef *Argument, uint8_t Data);

HAL_StatusTypeDef HAL_SDIO_ReadExtended(SDIO_HandleTypeDef *hsdio, HAL_SDIO_ExtendedCmd_TypeDef *Argument,
                                        uint8_t *pData, uint32_t Size_byte, uint32_t Timeout_Ms);

HAL_StatusTypeDef HAL_SDIO_WriteExtended(SDIO_HandleTypeDef *hsdio, HAL_SDIO_ExtendedCmd_TypeDef *Argument,
                                         uint8_t *pData, uint32_t Size_byte, uint32_t Timeout_Ms);

HAL_StatusTypeDef HAL_SDIO_ReadExtended_DMA(SDIO_HandleTypeDef *hsdio, HAL_SDIO_ExtendedCmd_TypeDef *Argument,
                                            uint8_t *pData, uint32_t Size_byte);

HAL_StatusTypeDef HAL_SDIO_WriteExtended_DMA(SDIO_HandleTypeDef *hsdio, HAL_SDIO_ExtendedCmd_TypeDef *Argument,
                                             uint8_t *pData, uint32_t Size_byte);
/**
  * @}
  */

/** @defgroup SDIO_Exported_Functions_Group4 IRQHandler and callback functions
  * @{
  */
void HAL_SDIO_IRQHandler(SDIO_HandleTypeDef *hsdio);

void HAL_SDIO_TxCpltCallback(SDIO_HandleTypeDef *hsdio);
void HAL_SDIO_RxCpltCallback(SDIO_HandleTypeDef *hsdio);
void HAL_SDIO_ErrorCallback(SDIO_HandleTypeDef *hsdio);
void HAL_SDIO_IOFunctionCallback(SDIO_HandleTypeDef *hsdio, uint32_t func);
#if (USE_SDIO_TRANSCEIVER != 0U)
/* Callback to switch in 1.8V mode */
void HAL_SDIO_DriveTransceiver_1_8V_Callback(SDIO_HandleTypeDef *hsdio, FlagStatus status);
#endif /* USE_SDIO_TRANSCEIVER */

#if defined (USE_HAL_SDIO_REGISTER_CALLBACKS) && (USE_HAL_SDIO_REGISTER_CALLBACKS == 1U)
HAL_StatusTypeDef HAL_SDIO_RegisterCallback(SDIO_HandleTypeDef *hsdio, HAL_SDIO_CallbackIDTypeDef CallbackID,
                                            pSDIO_CallbackTypeDef pCallback);

HAL_StatusTypeDef HAL_SDIO_UnRegisterCallback(SDIO_HandleTypeDef *hsdio, HAL_SDIO_CallbackIDTypeDef CallbackID);
#endif /* USE_HAL_SDIO_REGISTER_CALLBACKS */

#if (USE_SDIO_TRANSCEIVER != 0U)
HAL_StatusTypeDef HAL_SDIO_RegisterTransceiverCallback(SDIO_HandleTypeDef *hsdio,
                                                       pSDIO_TransceiverCallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_SDIO_UnRegisterTransceiverCallback(SDIO_HandleTypeDef *hsdio);
#endif /* USE_SDIO_TRANSCEIVER */

HAL_StatusTypeDef HAL_SDIO_RegisterIOFunctionCallback(SDIO_HandleTypeDef *hsdio, uint32_t IOFunction,
                                                      HAL_SDIO_IOFunction_CallbackTypeDef pCallback);

HAL_StatusTypeDef HAL_SDIO_RegisterIdentifyCardCallback(SDIO_HandleTypeDef *hsdio,
                                                        pSDIO_IdentifyCardCallbackTypeDef pCallback);
/**
  * @}
  */

/** @defgroup SDIO_Exported_Functions_Group5 Peripheral State and Errors functions
  * @{
  */
HAL_SDIO_StateTypeDef HAL_SDIO_GetState(const SDIO_HandleTypeDef *hsdio);
uint32_t              HAL_SDIO_GetError(const SDIO_HandleTypeDef *hsdio);
/**
  * @}
  */

/** @defgroup SDIO_Exported_Functions_Group6 Peripheral IO interrupt
  * @{
  */
HAL_StatusTypeDef HAL_SDIO_EnableIOFunctionInterrupt(SDIO_HandleTypeDef *hsdio, uint32_t IOFunction);
HAL_StatusTypeDef HAL_SDIO_DisableIOFunctionInterrupt(SDIO_HandleTypeDef *hsdio, uint32_t IOFunction);

HAL_StatusTypeDef HAL_SDIO_EnableIOFunction(SDIO_HandleTypeDef *hsdio, uint32_t IOFunction);
HAL_StatusTypeDef HAL_SDIO_DisableIOFunction(SDIO_HandleTypeDef *hsdio, uint32_t IOFunction);

HAL_StatusTypeDef HAL_SDIO_SelectIOFunction(SDIO_HandleTypeDef *hsdio, uint32_t IOFunction);
HAL_StatusTypeDef HAL_SDIO_AbortIOFunction(SDIO_HandleTypeDef *hsdio, uint32_t IOFunction);

HAL_StatusTypeDef HAL_SDIO_EnableIOAsynInterrupt(SDIO_HandleTypeDef *hsdio);
HAL_StatusTypeDef HAL_SDIO_DisableIOAsynInterrupt(SDIO_HandleTypeDef *hsdio);

/**
  * @}
  */

/* Private types -----------------------------------------------------------------------------------------------------*/
/** @defgroup SDIO_Private_Types SDIO Private Types
  * @{
  */

/**
  * @}
  */

/* Private defines ---------------------------------------------------------------------------------------------------*/
/** @defgroup SDIO_Private_Defines SDIO Private Defines
  * @{
  */

/**
  * @}
  */

/* Private variables -------------------------------------------------------------------------------------------------*/
/** @defgroup SDIO_Private_Variables SDIO Private Variables
  * @{
  */

/**
  * @}
  */

/* Private constants -------------------------------------------------------------------------------------------------*/
/** @defgroup SDIO_Private_Constants SDIO Private Constants
  * @{
  */

/**
  * @}
  */

/* Private macros ----------------------------------------------------------------------------------------------------*/
/** @defgroup SDIO_Private_Macros SDIO Private Macros
  * @{
  */

/**
  * @}
  */

/* Private functions prototypes --------------------------------------------------------------------------------------*/
/** @defgroup SDIO_Private_Functions_Prototypes SDIO Private Functions Prototypes
  * @{
  */

/**
  * @}
  */

/* Private functions -------------------------------------------------------------------------------------------------*/
/** @defgroup SDIO_Private_Functions SDIO Private Functions
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


#endif /* STM32H7xx_HAL_SDIO_H */
