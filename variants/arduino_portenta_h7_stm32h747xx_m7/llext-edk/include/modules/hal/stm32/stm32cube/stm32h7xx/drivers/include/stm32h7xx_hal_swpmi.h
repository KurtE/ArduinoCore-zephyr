/**
  ******************************************************************************
  * @file    stm32h7xx_hal_swpmi.h
  * @author  MCD Application Team
  * @brief   Header file of SWPMI HAL module.
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
#ifndef STM32H7xx_HAL_SWPMI_H
#define STM32H7xx_HAL_SWPMI_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal_def.h"

/** @addtogroup STM32H7xx_HAL_Driver
  * @{
  */


/** @addtogroup SWPMI
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/** @defgroup SWPMI_Exported_Types SWPMI Exported Types
  * @{
  */

/**
  * @brief SWPMI Init Structure definition
  */
typedef struct
{
  uint32_t VoltageClass;             /*!< Specifies the SWP Voltage Class.
                                          This parameter can be a value of @ref SWPMI_Voltage_Class */

  uint32_t BitRate;                  /*!< Specifies the SWPMI Bitrate.
                                          This parameter must be a number between 0 and 255U.
                                          The Bitrate is computed using the following formula:
                                          SWPMI_freq = SWPMI_clk / (((BitRate) + 1)  * 4)
                                          */

  uint32_t TxBufferingMode;          /*!< Specifies the transmission buffering mode.
                                          This parameter can be a value of @ref SWPMI_Tx_Buffering_Mode */

  uint32_t RxBufferingMode;          /*!< Specifies the reception buffering mode.
                                          This parameter can be a value of @ref SWPMI_Rx_Buffering_Mode */

} SWPMI_InitTypeDef;


/**
  * @brief HAL SWPMI State structures definition
  */
typedef enum
{
  HAL_SWPMI_STATE_RESET             = 0x00,
  HAL_SWPMI_STATE_READY             = 0x01,
  HAL_SWPMI_STATE_BUSY              = 0x02,
  HAL_SWPMI_STATE_BUSY_TX           = 0x12,
  HAL_SWPMI_STATE_BUSY_RX           = 0x22,
  HAL_SWPMI_STATE_BUSY_TX_RX        = 0x32,
  HAL_SWPMI_STATE_TIMEOUT           = 0x03,
  HAL_SWPMI_STATE_ERROR             = 0x04
} HAL_SWPMI_StateTypeDef;

/**
  * @brief  SWPMI handle Structure definition
  */
#if (USE_HAL_SWPMI_REGISTER_CALLBACKS == 1)
typedef struct __SWPMI_HandleTypeDef
#else
typedef struct
#endif /* USE_HAL_SWPMI_REGISTER_CALLBACKS */
{
  SWPMI_TypeDef                  *Instance;

  SWPMI_InitTypeDef              Init;

  const uint32_t                 *pTxBuffPtr;

  uint32_t                       TxXferSize;

  uint32_t                       TxXferCount;

  uint32_t                       *pRxBuffPtr;

  uint32_t                       RxXferSize;

  uint32_t                       RxXferCount;

  DMA_HandleTypeDef              *hdmatx;

  DMA_HandleTypeDef              *hdmarx;

  HAL_LockTypeDef                Lock;

  __IO HAL_SWPMI_StateTypeDef    State;

  __IO uint32_t                  ErrorCode;

#if (USE_HAL_SWPMI_REGISTER_CALLBACKS == 1)
  void (*RxCpltCallback)(struct __SWPMI_HandleTypeDef *hswpmi);
  void (*RxHalfCpltCallback)(struct __SWPMI_HandleTypeDef *hswpmi);
  void (*TxCpltCallback)(struct __SWPMI_HandleTypeDef *hswpmi);
  void (*TxHalfCpltCallback)(struct __SWPMI_HandleTypeDef *hswpmi);
  void (*ErrorCallback)(struct __SWPMI_HandleTypeDef *hswpmi);
  void (*MspInitCallback)(struct __SWPMI_HandleTypeDef *hswpmi);
  void (*MspDeInitCallback)(struct __SWPMI_HandleTypeDef *hswpmi);
#endif /* USE_HAL_SWPMI_REGISTER_CALLBACKS */

} SWPMI_HandleTypeDef;

#if (USE_HAL_SWPMI_REGISTER_CALLBACKS == 1)
/**
  * @brief  SWPMI callback ID enumeration definition
  */
typedef enum
{
  HAL_SWPMI_RX_COMPLETE_CB_ID     = 0x00U,
  HAL_SWPMI_RX_HALFCOMPLETE_CB_ID = 0x01U,
  HAL_SWPMI_TX_COMPLETE_CB_ID     = 0x02U,
  HAL_SWPMI_TX_HALFCOMPLETE_CB_ID = 0x03U,
  HAL_SWPMI_ERROR_CB_ID           = 0x04U,
  HAL_SWPMI_MSPINIT_CB_ID         = 0x05U,
  HAL_SWPMI_MSPDEINIT_CB_ID       = 0x06U
} HAL_SWPMI_CallbackIDTypeDef;

/**
  * @brief  SWPMI callback pointer definition
  */
typedef void (*pSWPMI_CallbackTypeDef)(SWPMI_HandleTypeDef *hswpmi);
#endif /* USE_HAL_SWPMI_REGISTER_CALLBACKS */

/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup SWPMI_Exported_Constants SWPMI Exported Constants
  * @{
  */

/**
  * @defgroup SWPMI_Error_Code SWPMI Error Code Bitmap
  * @{
  */
#define HAL_SWPMI_ERROR_NONE                  ((uint32_t)0x00000000)
#define HAL_SWPMI_ERROR_CRC                   ((uint32_t)0x00000004)
#define HAL_SWPMI_ERROR_OVR                   ((uint32_t)0x00000008)
#define HAL_SWPMI_ERROR_UDR                   ((uint32_t)0x0000000C)
#define HAL_SWPMI_ERROR_DMA                   ((uint32_t)0x00000010)
#define HAL_SWPMI_ERROR_TIMEOUT               ((uint32_t)0x00000020)
#define HAL_SWPMI_ERROR_TXBEF_TIMEOUT         ((uint32_t)0x00000040)
#define HAL_SWPMI_ERROR_TRANSCEIVER_NOT_READY ((uint32_t)0x00000080)
#if (USE_HAL_SWPMI_REGISTER_CALLBACKS == 1)
#define HAL_SWPMI_ERROR_INVALID_CALLBACK      ((uint32_t)0x00000100)
#endif /* USE_HAL_SWPMI_REGISTER_CALLBACKS */
/**
  * @}
  */

/** @defgroup SWPMI_Voltage_Class SWPMI Voltage Class
  * @{
  */
#define SWPMI_VOLTAGE_CLASS_C                ((uint32_t)0x00000000)
#define SWPMI_VOLTAGE_CLASS_B                SWPMI_OR_CLASS
/**
  * @}
  */

/** @defgroup SWPMI_Tx_Buffering_Mode SWPMI Tx Buffering Mode
  * @{
  */
#define SWPMI_TX_NO_SOFTWAREBUFFER           ((uint32_t)0x00000000)
#define SWPMI_TX_SINGLE_SOFTWAREBUFFER       ((uint32_t)0x00000000)
#define SWPMI_TX_MULTI_SOFTWAREBUFFER        SWPMI_CR_TXMODE
/**
  * @}
  */

/** @defgroup SWPMI_Rx_Buffering_Mode SWPMI Rx Buffering Mode
  * @{
  */
#define SWPMI_RX_NO_SOFTWAREBUFFER           ((uint32_t)0x00000000)
#define SWPMI_RX_SINGLE_SOFTWAREBUFFER       ((uint32_t)0x00000000)
#define SWPMI_RX_MULTI_SOFTWAREBUFFER        SWPMI_CR_RXMODE
/**
  * @}
  */

/** @defgroup SWPMI_Flags SWPMI Status Flags
  *        Elements values convention: 0xXXXXXXXX
  *           - 0xXXXXXXXX  : Flag mask in the ISR register
  * @{
  */
#define SWPMI_FLAG_RXBFF                 SWPMI_ISR_RXBFF
#define SWPMI_FLAG_TXBEF                 SWPMI_ISR_TXBEF
#define SWPMI_FLAG_RXBERF                SWPMI_ISR_RXBERF
#define SWPMI_FLAG_RXOVRF                SWPMI_ISR_RXOVRF
#define SWPMI_FLAG_TXUNRF                SWPMI_ISR_TXUNRF
#define SWPMI_FLAG_RXNE                  SWPMI_ISR_RXNE
#define SWPMI_FLAG_TXE                   SWPMI_ISR_TXE
#define SWPMI_FLAG_TCF                   SWPMI_ISR_TCF
#define SWPMI_FLAG_SRF                   SWPMI_ISR_SRF
#define SWPMI_FLAG_SUSP                  SWPMI_ISR_SUSP
#define SWPMI_FLAG_DEACTF                SWPMI_ISR_DEACTF
#define SWPMI_FLAG_RDYF                  SWPMI_ISR_RDYF
/**
  * @}
  */

/** @defgroup SWPMI_Interrupt_definition SWPMI Interrupts Definition
  *        Elements values convention: 0xXXXX
  *           - 0xXXXX  : Flag mask in the IER register
  * @{
  */
#define SWPMI_IT_RDYIE                   SWPMI_IER_RDYIE
#define SWPMI_IT_SRIE                    SWPMI_IER_SRIE
#define SWPMI_IT_TCIE                    SWPMI_IER_TCIE
#define SWPMI_IT_TIE                     SWPMI_IER_TIE
#define SWPMI_IT_RIE                     SWPMI_IER_RIE
#define SWPMI_IT_TXUNRIE                 SWPMI_IER_TXUNRIE
#define SWPMI_IT_RXOVRIE                 SWPMI_IER_RXOVRIE
#define SWPMI_IT_RXBERIE                 SWPMI_IER_RXBERIE
#define SWPMI_IT_TXBEIE                  SWPMI_IER_TXBEIE
#define SWPMI_IT_RXBFIE                  SWPMI_IER_RXBFIE
/**
  * @}
  */

/**
  * @}
  */

/* Exported macros -----------------------------------------------------------*/
/** @defgroup SWPMI_Exported_Macros SWPMI Exported Macros
  * @{
  */

/** @brief Reset SWPMI handle state.
  * @param  __HANDLE__ specifies the SWPMI Handle.
  * @retval None
  */
#if (USE_HAL_SWPMI_REGISTER_CALLBACKS == 1)
#define __HAL_SWPMI_RESET_HANDLE_STATE(__HANDLE__) do{                                              \
                                                       (__HANDLE__)->State = HAL_SWPMI_STATE_RESET; \
                                                       (__HANDLE__)->MspInitCallback = NULL;        \
                                                       (__HANDLE__)->MspDeInitCallback = NULL;      \
                                                     } while(0)
#else
#define __HAL_SWPMI_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_SWPMI_STATE_RESET)
#endif /* USE_HAL_SWPMI_REGISTER_CALLBACKS */

/**
  * @brief  Enable the SWPMI peripheral.
  * @param  __HANDLE__ SWPMI handle
  * @retval None
  */
#define __HAL_SWPMI_ENABLE(__HANDLE__)   SET_BIT((__HANDLE__)->Instance->CR, SWPMI_CR_SWPACT)

/**
  * @brief  Disable the SWPMI peripheral.
  * @param  __HANDLE__ SWPMI handle
  * @retval None
  */
#define __HAL_SWPMI_DISABLE(__HANDLE__)  CLEAR_BIT((__HANDLE__)->Instance->CR, SWPMI_CR_SWPACT)

/**
  * @brief  Enable the SWPMI transceiver.
  * @param  __HANDLE__ SWPMI handle
  * @retval None
  */
#define __HAL_SWPMI_TRANSCEIVER_ENABLE(__HANDLE__)   SET_BIT((__HANDLE__)->Instance->CR, SWPMI_CR_SWPEN)

/**
  * @brief  Disable the SWPMI transceiver.
  * @param  __HANDLE__ SWPMI handle
  * @retval None
  */
#define __HAL_SWPMI_TRANSCEIVER_DISABLE(__HANDLE__)  CLEAR_BIT((__HANDLE__)->Instance->CR, SWPMI_CR_SWPEN)

/** @brief  Check whether the specified SWPMI flag is set or not.
  * @param  __HANDLE__ specifies the SWPMI Handle.
  * @param  __FLAG__ specifies the flag to check.
  *        This parameter can be one of the following values:
  *            @arg SWPMI_FLAG_RXBFF  Receive buffer full flag.
  *            @arg SWPMI_FLAG_TXBEF  Transmit buffer empty flag.
  *            @arg SWPMI_FLAG_RXBERF  Receive CRC error flag.
  *            @arg SWPMI_FLAG_RXOVRF  Receive overrun error flag.
  *            @arg SWPMI_FLAG_TXUNRF  Transmit underrun error flag.
  *            @arg SWPMI_FLAG_RXNE  Receive data register not empty.
  *            @arg SWPMI_FLAG_TXE  Transmit data register empty.
  *            @arg SWPMI_FLAG_TCF  Transfer complete flag.
  *            @arg SWPMI_FLAG_SRF  Slave resume flag.
  *            @arg SWPMI_FLAG_SUSP  SUSPEND flag.
  *            @arg SWPMI_FLAG_DEACTF  DEACTIVATED flag.
  *            @arg SWPMI_FLAG_RDYF  Transceiver ready flag.
  * @retval The new state of __FLAG__ (TRUE or FALSE).
  */
#define __HAL_SWPMI_GET_FLAG(__HANDLE__, __FLAG__) (READ_BIT((__HANDLE__)->Instance->ISR, (__FLAG__)) == (__FLAG__))

/** @brief  Clear the specified SWPMI ISR flag.
  * @param  __HANDLE__ specifies the SWPMI Handle.
  * @param  __FLAG__ specifies the flag to clear.
  *        This parameter can be one of the following values:
  *            @arg SWPMI_FLAG_RXBFF  Receive buffer full flag.
  *            @arg SWPMI_FLAG_TXBEF  Transmit buffer empty flag.
  *            @arg SWPMI_FLAG_RXBERF  Receive CRC error flag.
  *            @arg SWPMI_FLAG_RXOVRF  Receive overrun error flag.
  *            @arg SWPMI_FLAG_TXUNRF  Transmit underrun error flag.
  *            @arg SWPMI_FLAG_TCF  Transfer complete flag.
  *            @arg SWPMI_FLAG_SRF  Slave resume flag.
  *            @arg SWPMI_FLAG_RDYF  Transceiver ready flag.
  * @retval None
  */
#define __HAL_SWPMI_CLEAR_FLAG(__HANDLE__, __FLAG__) WRITE_REG((__HANDLE__)->Instance->ICR, (__FLAG__))

/** @brief  Enable the specified SWPMI interrupt.
  * @param  __HANDLE__ specifies the SWPMI Handle.
  * @param  __INTERRUPT__ specifies the SWPMI interrupt source to enable.
  *          This parameter can be one of the following values:
  *            @arg SWPMI_IT_RDYIE  Transceiver ready interrupt.
  *            @arg SWPMI_IT_SRIE  Slave resume interrupt.
  *            @arg SWPMI_IT_TCIE  Transmit complete interrupt.
  *            @arg SWPMI_IT_TIE   Transmit interrupt.
  *            @arg SWPMI_IT_RIE   Receive interrupt.
  *            @arg SWPMI_IT_TXUNRIE  Transmit underrun error interrupt.
  *            @arg SWPMI_IT_RXOVRIE  Receive overrun error interrupt.
  *            @arg SWPMI_IT_RXBEIE  Receive CRC error interrupt.
  *            @arg SWPMI_IT_TXBEIE   Transmit buffer empty interrupt.
  *            @arg SWPMI_IT_RXBFIE   Receive buffer full interrupt.
  * @retval None
  */
#define __HAL_SWPMI_ENABLE_IT(__HANDLE__, __INTERRUPT__)   SET_BIT((__HANDLE__)->Instance->IER, (__INTERRUPT__))

/** @brief  Disable the specified SWPMI interrupt.
  * @param  __HANDLE__ specifies the SWPMI Handle.
  * @param  __INTERRUPT__ specifies the SWPMI interrupt source to disable.
  *          This parameter can be one of the following values:
  *            @arg SWPMI_IT_RDYIE  Transceiver ready interrupt.
  *            @arg SWPMI_IT_SRIE  Slave resume interrupt.
  *            @arg SWPMI_IT_TCIE  Transmit complete interrupt.
  *            @arg SWPMI_IT_TIE   Transmit interrupt.
  *            @arg SWPMI_IT_RIE   Receive interrupt.
  *            @arg SWPMI_IT_TXUNRIE  Transmit underrun error interrupt.
  *            @arg SWPMI_IT_RXOVRIE  Receive overrun error interrupt.
  *            @arg SWPMI_IT_RXBEIE  Receive CRC error interrupt.
  *            @arg SWPMI_IT_TXBEIE   Transmit buffer empty interrupt.
  *            @arg SWPMI_IT_RXBFIE   Receive buffer full interrupt.
  * @retval None
  */
#define __HAL_SWPMI_DISABLE_IT(__HANDLE__, __INTERRUPT__)  CLEAR_BIT((__HANDLE__)->Instance->IER, (__INTERRUPT__))

/** @brief  Check whether the specified SWPMI interrupt has occurred or not.
  * @param  __HANDLE__ specifies the SWPMI Handle.
  * @param  __IT__ specifies the SWPMI interrupt to check.
  *          This parameter can be one of the following values:
  *            @arg SWPMI_IT_RDYIE  Transceiver ready interrupt.
  *            @arg SWPMI_IT_SRIE  Slave resume interrupt.
  *            @arg SWPMI_IT_TCIE  Transmit complete interrupt.
  *            @arg SWPMI_IT_TIE   Transmit interrupt.
  *            @arg SWPMI_IT_RIE   Receive interrupt.
  *            @arg SWPMI_IT_TXUNRIE  Transmit underrun error interrupt.
  *            @arg SWPMI_IT_RXOVRIE  Receive overrun error interrupt.
  *            @arg SWPMI_IT_RXBERIE  Receive CRC error interrupt.
  *            @arg SWPMI_IT_TXBEIE   Transmit buffer empty interrupt.
  *            @arg SWPMI_IT_RXBFIE   Receive buffer full interrupt.
  * @retval The new state of __IT__ (TRUE or FALSE).
  */
#define __HAL_SWPMI_GET_IT(__HANDLE__, __IT__)  (READ_BIT((__HANDLE__)->Instance->ISR,(__IT__)) == (__IT__))

/** @brief  Check whether the specified SWPMI interrupt source is enabled or not.
  * @param  __HANDLE__ specifies the SWPMI Handle.
  * @param  __IT__ specifies the SWPMI interrupt source to check.
  *          This parameter can be one of the following values:
  *            @arg SWPMI_IT_RDYIE  Transceiver ready interrupt.
  *            @arg SWPMI_IT_SRIE  Slave resume interrupt.
  *            @arg SWPMI_IT_TCIE  Transmit complete interrupt.
  *            @arg SWPMI_IT_TIE   Transmit interrupt.
  *            @arg SWPMI_IT_RIE   Receive interrupt.
  *            @arg SWPMI_IT_TXUNRIE  Transmit underrun error interrupt.
  *            @arg SWPMI_IT_RXOVRIE  Receive overrun error interrupt.
  *            @arg SWPMI_IT_RXBERIE  Receive CRC error interrupt.
  *            @arg SWPMI_IT_TXBEIE   Transmit buffer empty interrupt.
  *            @arg SWPMI_IT_RXBFIE   Receive buffer full interrupt.
  * @retval The new state of __IT__ (TRUE or FALSE).
  */
#define __HAL_SWPMI_GET_IT_SOURCE(__HANDLE__, __IT__) ((READ_BIT((__HANDLE__)->Instance->IER, (__IT__))\
                                                        == (__IT__)) ? SET : RESET)

/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/
/** @defgroup SWPMI_Exported_Functions SWPMI Exported Functions
  * @{
  */
/* Initialization/de-initialization functions  ********************************/
HAL_StatusTypeDef HAL_SWPMI_Init(SWPMI_HandleTypeDef *hswpmi);
HAL_StatusTypeDef HAL_SWPMI_DeInit(SWPMI_HandleTypeDef *hswpmi);
void              HAL_SWPMI_MspInit(SWPMI_HandleTypeDef *hswpmi);
void              HAL_SWPMI_MspDeInit(SWPMI_HandleTypeDef *hswpmi);

#if (USE_HAL_SWPMI_REGISTER_CALLBACKS == 1)
/* SWPMI callbacks register/unregister functions ********************************/
HAL_StatusTypeDef HAL_SWPMI_RegisterCallback(SWPMI_HandleTypeDef        *hswpmi,
                                             HAL_SWPMI_CallbackIDTypeDef CallbackID,
                                             pSWPMI_CallbackTypeDef      pCallback);
HAL_StatusTypeDef HAL_SWPMI_UnRegisterCallback(SWPMI_HandleTypeDef        *hswpmi,
                                               HAL_SWPMI_CallbackIDTypeDef CallbackID);
#endif /* USE_HAL_SWPMI_REGISTER_CALLBACKS */

/* IO operation functions *****************************************************/
HAL_StatusTypeDef HAL_SWPMI_Transmit(SWPMI_HandleTypeDef *hswpmi, const uint32_t *pData, uint16_t Size,
                                     uint32_t Timeout);
HAL_StatusTypeDef HAL_SWPMI_Receive(SWPMI_HandleTypeDef *hswpmi, uint32_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_SWPMI_Transmit_IT(SWPMI_HandleTypeDef *hswpmi, const uint32_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SWPMI_Receive_IT(SWPMI_HandleTypeDef *hswpmi, uint32_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SWPMI_Transmit_DMA(SWPMI_HandleTypeDef *hswpmi, const uint32_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SWPMI_Receive_DMA(SWPMI_HandleTypeDef *hswpmi, uint32_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SWPMI_DMAStop(SWPMI_HandleTypeDef *hswpmi);
HAL_StatusTypeDef HAL_SWPMI_EnableLoopback(SWPMI_HandleTypeDef *hswpmi);
HAL_StatusTypeDef HAL_SWPMI_DisableLoopback(SWPMI_HandleTypeDef *hswpmi);
void              HAL_SWPMI_IRQHandler(SWPMI_HandleTypeDef *hswpmi);
void              HAL_SWPMI_TxCpltCallback(SWPMI_HandleTypeDef *hswpmi);
void              HAL_SWPMI_TxHalfCpltCallback(SWPMI_HandleTypeDef *hswpmi);
void              HAL_SWPMI_RxCpltCallback(SWPMI_HandleTypeDef *hswpmi);
void              HAL_SWPMI_RxHalfCpltCallback(SWPMI_HandleTypeDef *hswpmi);
void              HAL_SWPMI_ErrorCallback(SWPMI_HandleTypeDef *hswpmi);

/* Peripheral Control and State functions  ************************************/
HAL_SWPMI_StateTypeDef HAL_SWPMI_GetState(const SWPMI_HandleTypeDef *hswpmi);
uint32_t               HAL_SWPMI_GetError(const SWPMI_HandleTypeDef *hswpmi);

/**
  * @}
  */

/* Private types -------------------------------------------------------------*/
/** @defgroup SWPMI_Private_Types SWPMI Private Types
  * @{
  */

/**
  * @}
  */

/* Private variables ---------------------------------------------------------*/
/** @defgroup SWPMI_Private_Variables SWPMI Private Variables
  * @{
  */

/**
  * @}
  */

/* Private constants ---------------------------------------------------------*/
/** @defgroup SWPMI_Private_Constants SWPMI Private Constants
  * @{
  */

/**
  * @}
  */

/* Private macros ------------------------------------------------------------*/
/** @defgroup SWPMI_Private_Macros SWPMI Private Macros
  * @{
  */


#define IS_SWPMI_VOLTAGE_CLASS(__CLASS__)    (((__CLASS__) == SWPMI_VOLTAGE_CLASS_C) || \
                                              ((__CLASS__) == SWPMI_VOLTAGE_CLASS_B))

#define IS_SWPMI_BITRATE_VALUE(__VALUE__)    (((__VALUE__) <= 255U))


#define IS_SWPMI_TX_BUFFERING_MODE(__MODE__) (((__MODE__) == SWPMI_TX_NO_SOFTWAREBUFFER) || \
                                              ((__MODE__) == SWPMI_TX_MULTI_SOFTWAREBUFFER))


#define IS_SWPMI_RX_BUFFERING_MODE(__MODE__) (((__MODE__) == SWPMI_RX_NO_SOFTWAREBUFFER) || \
                                              ((__MODE__) == SWPMI_RX_MULTI_SOFTWAREBUFFER))

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

#endif /* STM32H7xx_HAL_SWPMI_H */
