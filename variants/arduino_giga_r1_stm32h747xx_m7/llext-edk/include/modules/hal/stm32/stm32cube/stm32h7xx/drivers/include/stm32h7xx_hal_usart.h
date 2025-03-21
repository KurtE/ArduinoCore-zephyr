/**
  ******************************************************************************
  * @file    stm32h7xx_hal_usart.h
  * @author  MCD Application Team
  * @brief   Header file of USART HAL module.
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
#ifndef STM32H7xx_HAL_USART_H
#define STM32H7xx_HAL_USART_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal_def.h"

/** @addtogroup STM32H7xx_HAL_Driver
  * @{
  */

/** @addtogroup USART
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/** @defgroup USART_Exported_Types USART Exported Types
  * @{
  */

/**
  * @brief USART Init Structure definition
  */
typedef struct
{
  uint32_t BaudRate;                  /*!< This member configures the Usart communication baud rate.
                                           The baud rate is computed using the following formula:
                                              Baud Rate Register[15:4] = ((2 * fclk_pres) /
                                              ((huart->Init.BaudRate)))[15:4]
                                              Baud Rate Register[3]    = 0
                                              Baud Rate Register[2:0]  =  (((2 * fclk_pres) /
                                              ((huart->Init.BaudRate)))[3:0]) >> 1
                                              where fclk_pres is the USART input clock frequency (fclk)
                                              divided by a prescaler.
                                           @note  Oversampling by 8 is systematically applied to
                                                  achieve high baud rates. */

  uint32_t WordLength;                /*!< Specifies the number of data bits transmitted or received in a frame.
                                           This parameter can be a value of @ref USARTEx_Word_Length. */

  uint32_t StopBits;                  /*!< Specifies the number of stop bits transmitted.
                                           This parameter can be a value of @ref USART_Stop_Bits. */

  uint32_t Parity;                   /*!< Specifies the parity mode.
                                           This parameter can be a value of @ref USART_Parity
                                           @note When parity is enabled, the computed parity is inserted
                                                 at the MSB position of the transmitted data (9th bit when
                                                 the word length is set to 9 data bits; 8th bit when the
                                                 word length is set to 8 data bits). */

  uint32_t Mode;                      /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
                                           This parameter can be a value of @ref USART_Mode. */

  uint32_t CLKPolarity;               /*!< Specifies the steady state of the serial clock.
                                           This parameter can be a value of @ref USART_Clock_Polarity. */

  uint32_t CLKPhase;                  /*!< Specifies the clock transition on which the bit capture is made.
                                           This parameter can be a value of @ref USART_Clock_Phase. */

  uint32_t CLKLastBit;                /*!< Specifies whether the clock pulse corresponding to the last transmitted
                                           data bit (MSB) has to be output on the SCLK pin in synchronous mode.
                                           This parameter can be a value of @ref USART_Last_Bit. */

  uint32_t ClockPrescaler;            /*!< Specifies the prescaler value used to divide the USART clock source.
                                           This parameter can be a value of @ref USART_ClockPrescaler. */
} USART_InitTypeDef;

/**
  * @brief HAL USART State structures definition
  */
typedef enum
{
  HAL_USART_STATE_RESET             = 0x00U,
  HAL_USART_STATE_READY             = 0x01U,
  HAL_USART_STATE_BUSY              = 0x02U,
  HAL_USART_STATE_BUSY_TX           = 0x12U,
  HAL_USART_STATE_BUSY_RX           = 0x22U,
  HAL_USART_STATE_BUSY_TX_RX        = 0x32U,
  HAL_USART_STATE_TIMEOUT           = 0x03U,
  HAL_USART_STATE_ERROR             = 0x04U
} HAL_USART_StateTypeDef;

/**
  * @brief  USART clock sources definitions
  */
typedef enum
{
  USART_CLOCKSOURCE_D2PCLK1    = 0x00U,
  USART_CLOCKSOURCE_D2PCLK2    = 0x01U,
  USART_CLOCKSOURCE_PLL2       = 0x02U,
  USART_CLOCKSOURCE_PLL3       = 0x04U,
  USART_CLOCKSOURCE_HSI        = 0x08U,
  USART_CLOCKSOURCE_CSI        = 0x10U,
  USART_CLOCKSOURCE_LSE        = 0x20U,
  USART_CLOCKSOURCE_UNDEFINED  = 0x40U
} USART_ClockSourceTypeDef;

/**
  * @brief  USART handle Structure definition
  */
typedef struct __USART_HandleTypeDef
{
  USART_TypeDef                 *Instance;

  USART_InitTypeDef             Init;

  const uint8_t                 *pTxBuffPtr;

  uint16_t                      TxXferSize;

  __IO uint16_t                 TxXferCount;

  uint8_t                       *pRxBuffPtr;

  uint16_t                      RxXferSize;

  __IO uint16_t                 RxXferCount;

  uint16_t                      Mask;

  uint16_t                      NbRxDataToProcess;

  uint16_t                      NbTxDataToProcess;

  uint32_t                      SlaveMode;               /*!< Enable/Disable USART SPI Slave Mode. This parameter can be a value
                                                              of @ref USARTEx_Slave_Mode */

  uint32_t                      FifoMode;                /*!< Specifies if the FIFO mode will be used. This parameter can be a value
                                                              of @ref USARTEx_FIFO_mode. */

  void (*RxISR)(struct __USART_HandleTypeDef *husart);

  void (*TxISR)(struct __USART_HandleTypeDef *husart);

  DMA_HandleTypeDef             *hdmatx;

  DMA_HandleTypeDef             *hdmarx;

  HAL_LockTypeDef               Lock;

  __IO HAL_USART_StateTypeDef   State;

  __IO uint32_t                 ErrorCode;

#if (USE_HAL_USART_REGISTER_CALLBACKS == 1)
  void (* TxHalfCpltCallback)(struct __USART_HandleTypeDef *husart);
  void (* TxCpltCallback)(struct __USART_HandleTypeDef *husart);
  void (* RxHalfCpltCallback)(struct __USART_HandleTypeDef *husart);
  void (* RxCpltCallback)(struct __USART_HandleTypeDef *husart);
  void (* TxRxCpltCallback)(struct __USART_HandleTypeDef *husart);
  void (* ErrorCallback)(struct __USART_HandleTypeDef *husart);
  void (* AbortCpltCallback)(struct __USART_HandleTypeDef *husart);
  void (* RxFifoFullCallback)(struct __USART_HandleTypeDef *husart);
  void (* TxFifoEmptyCallback)(struct __USART_HandleTypeDef *husart);

  void (* MspInitCallback)(struct __USART_HandleTypeDef *husart);
  void (* MspDeInitCallback)(struct __USART_HandleTypeDef *husart);
#endif  /* USE_HAL_USART_REGISTER_CALLBACKS */

} USART_HandleTypeDef;

#if (USE_HAL_USART_REGISTER_CALLBACKS == 1)
/**
  * @brief  HAL USART Callback ID enumeration definition
  */
typedef enum
{
  HAL_USART_TX_HALFCOMPLETE_CB_ID         = 0x00U,
  HAL_USART_TX_COMPLETE_CB_ID             = 0x01U,
  HAL_USART_RX_HALFCOMPLETE_CB_ID         = 0x02U,
  HAL_USART_RX_COMPLETE_CB_ID             = 0x03U,
  HAL_USART_TX_RX_COMPLETE_CB_ID          = 0x04U,
  HAL_USART_ERROR_CB_ID                   = 0x05U,
  HAL_USART_ABORT_COMPLETE_CB_ID          = 0x06U,
  HAL_USART_RX_FIFO_FULL_CB_ID            = 0x07U,
  HAL_USART_TX_FIFO_EMPTY_CB_ID           = 0x08U,

  HAL_USART_MSPINIT_CB_ID                 = 0x09U,
  HAL_USART_MSPDEINIT_CB_ID               = 0x0AU

} HAL_USART_CallbackIDTypeDef;

/**
  * @brief  HAL USART Callback pointer definition
  */
typedef  void (*pUSART_CallbackTypeDef)(USART_HandleTypeDef *husart);

#endif /* USE_HAL_USART_REGISTER_CALLBACKS */

/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup USART_Exported_Constants USART Exported Constants
  * @{
  */

/** @defgroup USART_Error_Definition   USART Error Definition
  * @{
  */
#define HAL_USART_ERROR_NONE             (0x00000000U)
#define HAL_USART_ERROR_PE               (0x00000001U)
#define HAL_USART_ERROR_NE               (0x00000002U)
#define HAL_USART_ERROR_FE               (0x00000004U)
#define HAL_USART_ERROR_ORE              (0x00000008U)
#define HAL_USART_ERROR_DMA              (0x00000010U)
#define HAL_USART_ERROR_UDR              (0x00000020U)
#if (USE_HAL_USART_REGISTER_CALLBACKS == 1)
#define HAL_USART_ERROR_INVALID_CALLBACK (0x00000040U)
#endif /* USE_HAL_USART_REGISTER_CALLBACKS */
#define  HAL_USART_ERROR_RTO              (0x00000080U)
/**
  * @}
  */

/** @defgroup USART_Stop_Bits  USART Number of Stop Bits
  * @{
  */
#define USART_STOPBITS_0_5                   USART_CR2_STOP_0
#define USART_STOPBITS_1                     0x00000000U
#define USART_STOPBITS_1_5                  (USART_CR2_STOP_0 | USART_CR2_STOP_1)
#define USART_STOPBITS_2                     USART_CR2_STOP_1
/**
  * @}
  */

/** @defgroup USART_Parity    USART Parity
  * @{
  */
#define USART_PARITY_NONE                   0x00000000U
#define USART_PARITY_EVEN                   USART_CR1_PCE
#define USART_PARITY_ODD                    (USART_CR1_PCE | USART_CR1_PS)
/**
  * @}
  */

/** @defgroup USART_Mode   USART Mode
  * @{
  */
#define USART_MODE_RX                       USART_CR1_RE
#define USART_MODE_TX                       USART_CR1_TE
#define USART_MODE_TX_RX                    (USART_CR1_TE |USART_CR1_RE)
/**
  * @}
  */

/** @defgroup USART_Clock  USART Clock
  * @{
  */
#define USART_CLOCK_DISABLE                 0x00000000U
#define USART_CLOCK_ENABLE                  USART_CR2_CLKEN
/**
  * @}
  */

/** @defgroup USART_Clock_Polarity  USART Clock Polarity
  * @{
  */
#define USART_POLARITY_LOW                  0x00000000U
#define USART_POLARITY_HIGH                 USART_CR2_CPOL
/**
  * @}
  */

/** @defgroup USART_Clock_Phase   USART Clock Phase
  * @{
  */
#define USART_PHASE_1EDGE                   0x00000000U
#define USART_PHASE_2EDGE                   USART_CR2_CPHA
/**
  * @}
  */

/** @defgroup USART_Last_Bit  USART Last Bit
  * @{
  */
#define USART_LASTBIT_DISABLE               0x00000000U
#define USART_LASTBIT_ENABLE                USART_CR2_LBCL
/**
  * @}
  */

/** @defgroup USART_ClockPrescaler  USART Clock Prescaler
  * @{
  */
#define USART_PRESCALER_DIV1    0x00000000U
#define USART_PRESCALER_DIV2    0x00000001U
#define USART_PRESCALER_DIV4    0x00000002U
#define USART_PRESCALER_DIV6    0x00000003U
#define USART_PRESCALER_DIV8    0x00000004U
#define USART_PRESCALER_DIV10   0x00000005U
#define USART_PRESCALER_DIV12   0x00000006U
#define USART_PRESCALER_DIV16   0x00000007U
#define USART_PRESCALER_DIV32   0x00000008U
#define USART_PRESCALER_DIV64   0x00000009U
#define USART_PRESCALER_DIV128  0x0000000AU
#define USART_PRESCALER_DIV256  0x0000000BU

/**
  * @}
  */

/** @defgroup USART_Request_Parameters  USART Request Parameters
  * @{
  */
#define USART_RXDATA_FLUSH_REQUEST        USART_RQR_RXFRQ
#define USART_TXDATA_FLUSH_REQUEST        USART_RQR_TXFRQ
/**
  * @}
  */

/** @defgroup USART_Flags      USART Flags
  *        Elements values convention: 0xXXXX
  *           - 0xXXXX  : Flag mask in the ISR register
  * @{
  */
#define USART_FLAG_TXFT                     USART_ISR_TXFT
#define USART_FLAG_RXFT                     USART_ISR_RXFT
#define USART_FLAG_RXFF                     USART_ISR_RXFF
#define USART_FLAG_TXFE                     USART_ISR_TXFE
#define USART_FLAG_REACK                    USART_ISR_REACK
#define USART_FLAG_TEACK                    USART_ISR_TEACK
#define USART_FLAG_BUSY                     USART_ISR_BUSY
#define USART_FLAG_UDR                      USART_ISR_UDR
#define USART_FLAG_TXE                      USART_ISR_TXE_TXFNF
#define USART_FLAG_TXFNF                    USART_ISR_TXE_TXFNF
#define USART_FLAG_RTOF                     USART_ISR_RTOF
#define USART_FLAG_TC                       USART_ISR_TC
#define USART_FLAG_RXNE                     USART_ISR_RXNE_RXFNE
#define USART_FLAG_RXFNE                    USART_ISR_RXNE_RXFNE
#define USART_FLAG_IDLE                     USART_ISR_IDLE
#define USART_FLAG_ORE                      USART_ISR_ORE
#define USART_FLAG_NE                       USART_ISR_NE
#define USART_FLAG_FE                       USART_ISR_FE
#define USART_FLAG_PE                       USART_ISR_PE
/**
  * @}
  */

/** @defgroup USART_Interrupt_definition USART Interrupts Definition
  *        Elements values convention: 0000ZZZZ0XXYYYYYb
  *           - YYYYY  : Interrupt source position in the XX register (5bits)
  *           - XX  : Interrupt source register (2bits)
  *                 - 01: CR1 register
  *                 - 10: CR2 register
  *                 - 11: CR3 register
  *           - ZZZZ  : Flag position in the ISR register(4bits)
  * @{
  */

#define USART_IT_PE                          0x0028U
#define USART_IT_TXE                         0x0727U
#define USART_IT_TXFNF                       0x0727U
#define USART_IT_TC                          0x0626U
#define USART_IT_RXNE                        0x0525U
#define USART_IT_RXFNE                       0x0525U
#define USART_IT_IDLE                        0x0424U
#define USART_IT_ERR                         0x0060U
#define USART_IT_ORE                         0x0300U
#define USART_IT_NE                          0x0200U
#define USART_IT_FE                          0x0100U
#define USART_IT_RXFF                        0x183FU
#define USART_IT_TXFE                        0x173EU
#define USART_IT_RXFT                        0x1A7CU
#define USART_IT_TXFT                        0x1B77U

/**
  * @}
  */

/** @defgroup USART_IT_CLEAR_Flags    USART Interruption Clear Flags
  * @{
  */
#define USART_CLEAR_PEF                       USART_ICR_PECF
#define USART_CLEAR_FEF                       USART_ICR_FECF
#define USART_CLEAR_NEF                       USART_ICR_NECF
#define USART_CLEAR_OREF                      USART_ICR_ORECF
#define USART_CLEAR_IDLEF                     USART_ICR_IDLECF
#define USART_CLEAR_TCF                       USART_ICR_TCCF
#define USART_CLEAR_UDRF                      USART_ICR_UDRCF
#define USART_CLEAR_TXFECF                    USART_ICR_TXFECF
#define USART_CLEAR_RTOF                      USART_ICR_RTOCF
/**
  * @}
  */

/** @defgroup USART_Interruption_Mask    USART Interruption Flags Mask
  * @{
  */
#define USART_IT_MASK                             0x001FU
#define USART_CR_MASK                             0x00E0U
#define USART_CR_POS                              5U
#define USART_ISR_MASK                            0x1F00U
#define USART_ISR_POS                             8U
/**
  * @}
  */

/**
  * @}
  */

/* Exported macros -----------------------------------------------------------*/
/** @defgroup USART_Exported_Macros USART Exported Macros
  * @{
  */

/** @brief Reset USART handle state.
  * @param  __HANDLE__ USART handle.
  * @retval None
  */
#if (USE_HAL_USART_REGISTER_CALLBACKS == 1)
#define __HAL_USART_RESET_HANDLE_STATE(__HANDLE__)  do{                                            \
                                                        (__HANDLE__)->State = HAL_USART_STATE_RESET; \
                                                        (__HANDLE__)->MspInitCallback = NULL;        \
                                                        (__HANDLE__)->MspDeInitCallback = NULL;      \
                                                      } while(0U)
#else
#define __HAL_USART_RESET_HANDLE_STATE(__HANDLE__)  ((__HANDLE__)->State = HAL_USART_STATE_RESET)
#endif /* USE_HAL_USART_REGISTER_CALLBACKS */

/** @brief  Check whether the specified USART flag is set or not.
  * @param  __HANDLE__ specifies the USART Handle
  * @param  __FLAG__ specifies the flag to check.
  *        This parameter can be one of the following values:
  *            @arg @ref USART_FLAG_TXFT  TXFIFO threshold flag
  *            @arg @ref USART_FLAG_RXFT  RXFIFO threshold flag
  *            @arg @ref USART_FLAG_RXFF  RXFIFO Full flag
  *            @arg @ref USART_FLAG_TXFE  TXFIFO Empty flag
  *            @arg @ref USART_FLAG_REACK Receive enable acknowledge flag
  *            @arg @ref USART_FLAG_TEACK Transmit enable acknowledge flag
  *            @arg @ref USART_FLAG_BUSY  Busy flag
  *            @arg @ref USART_FLAG_UDR   SPI slave underrun error flag
  *            @arg @ref USART_FLAG_TXE   Transmit data register empty flag
  *            @arg @ref USART_FLAG_TXFNF TXFIFO not full flag
  *            @arg @ref USART_FLAG_TC    Transmission Complete flag
  *            @arg @ref USART_FLAG_RXNE  Receive data register not empty flag
  *            @arg @ref USART_FLAG_RXFNE RXFIFO not empty flag
  *            @arg @ref USART_FLAG_RTOF  Receiver Timeout flag
  *            @arg @ref USART_FLAG_IDLE  Idle Line detection flag
  *            @arg @ref USART_FLAG_ORE   OverRun Error flag
  *            @arg @ref USART_FLAG_NE    Noise Error flag
  *            @arg @ref USART_FLAG_FE    Framing Error flag
  *            @arg @ref USART_FLAG_PE    Parity Error flag
  * @retval The new state of __FLAG__ (TRUE or FALSE).
  */
#define __HAL_USART_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->ISR & (__FLAG__)) == (__FLAG__))

/** @brief  Clear the specified USART pending flag.
  * @param  __HANDLE__ specifies the USART Handle.
  * @param  __FLAG__ specifies the flag to check.
  *          This parameter can be any combination of the following values:
  *            @arg @ref USART_CLEAR_PEF      Parity Error Clear Flag
  *            @arg @ref USART_CLEAR_FEF      Framing Error Clear Flag
  *            @arg @ref USART_CLEAR_NEF      Noise detected Clear Flag
  *            @arg @ref USART_CLEAR_OREF     Overrun Error Clear Flag
  *            @arg @ref USART_CLEAR_IDLEF    IDLE line detected Clear Flag
  *            @arg @ref USART_CLEAR_TXFECF   TXFIFO empty clear Flag
  *            @arg @ref USART_CLEAR_TCF      Transmission Complete Clear Flag
  *            @arg @ref USART_CLEAR_RTOF     Receiver Timeout clear flag
  *            @arg @ref USART_CLEAR_UDRF     SPI slave underrun error Clear Flag
  * @retval None
  */
#define __HAL_USART_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->ICR = (__FLAG__))

/** @brief  Clear the USART PE pending flag.
  * @param  __HANDLE__ specifies the USART Handle.
  * @retval None
  */
#define __HAL_USART_CLEAR_PEFLAG(__HANDLE__)   __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_PEF)

/** @brief  Clear the USART FE pending flag.
  * @param  __HANDLE__ specifies the USART Handle.
  * @retval None
  */
#define __HAL_USART_CLEAR_FEFLAG(__HANDLE__)   __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_FEF)

/** @brief  Clear the USART NE pending flag.
  * @param  __HANDLE__ specifies the USART Handle.
  * @retval None
  */
#define __HAL_USART_CLEAR_NEFLAG(__HANDLE__)  __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_NEF)

/** @brief  Clear the USART ORE pending flag.
  * @param  __HANDLE__ specifies the USART Handle.
  * @retval None
  */
#define __HAL_USART_CLEAR_OREFLAG(__HANDLE__)   __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_OREF)

/** @brief  Clear the USART IDLE pending flag.
  * @param  __HANDLE__ specifies the USART Handle.
  * @retval None
  */
#define __HAL_USART_CLEAR_IDLEFLAG(__HANDLE__)   __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_IDLEF)

/** @brief  Clear the USART TX FIFO empty clear flag.
  * @param  __HANDLE__ specifies the USART Handle.
  * @retval None
  */
#define __HAL_USART_CLEAR_TXFECF(__HANDLE__)   __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_TXFECF)

/** @brief  Clear SPI slave underrun error flag.
  * @param  __HANDLE__ specifies the USART Handle.
  * @retval None
  */
#define __HAL_USART_CLEAR_UDRFLAG(__HANDLE__)   __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_UDRF)

/** @brief  Enable the specified USART interrupt.
  * @param  __HANDLE__ specifies the USART Handle.
  * @param  __INTERRUPT__ specifies the USART interrupt source to enable.
  *          This parameter can be one of the following values:
  *            @arg @ref USART_IT_RXFF  RXFIFO Full interrupt
  *            @arg @ref USART_IT_TXFE  TXFIFO Empty interrupt
  *            @arg @ref USART_IT_RXFT  RXFIFO threshold interrupt
  *            @arg @ref USART_IT_TXFT  TXFIFO threshold interrupt
  *            @arg @ref USART_IT_TXE   Transmit Data Register empty interrupt
  *            @arg @ref USART_IT_TXFNF TX FIFO not full interrupt
  *            @arg @ref USART_IT_TC    Transmission complete interrupt
  *            @arg @ref USART_IT_RXNE  Receive Data register not empty interrupt
  *            @arg @ref USART_IT_RXFNE RXFIFO not empty interrupt
  *            @arg @ref USART_IT_IDLE  Idle line detection interrupt
  *            @arg @ref USART_IT_PE    Parity Error interrupt
  *            @arg @ref USART_IT_ERR   Error interrupt(Frame error, noise error, overrun error)
  * @retval None
  */
#define __HAL_USART_ENABLE_IT(__HANDLE__, __INTERRUPT__)\
  (((((__INTERRUPT__) & USART_CR_MASK) >> USART_CR_POS) == 1U)?\
   ((__HANDLE__)->Instance->CR1 |= (1U << ((__INTERRUPT__) & USART_IT_MASK))): \
   ((((__INTERRUPT__) & USART_CR_MASK) >> USART_CR_POS) == 2U)?\
   ((__HANDLE__)->Instance->CR2 |= (1U << ((__INTERRUPT__) & USART_IT_MASK))): \
   ((__HANDLE__)->Instance->CR3 |= (1U << ((__INTERRUPT__) & USART_IT_MASK))))

/** @brief  Disable the specified USART interrupt.
  * @param  __HANDLE__ specifies the USART Handle.
  * @param  __INTERRUPT__ specifies the USART interrupt source to disable.
  *          This parameter can be one of the following values:
  *            @arg @ref USART_IT_RXFF  RXFIFO Full interrupt
  *            @arg @ref USART_IT_TXFE  TXFIFO Empty interrupt
  *            @arg @ref USART_IT_RXFT  RXFIFO threshold interrupt
  *            @arg @ref USART_IT_TXFT  TXFIFO threshold interrupt
  *            @arg @ref USART_IT_TXE   Transmit Data Register empty interrupt
  *            @arg @ref USART_IT_TXFNF TX FIFO not full interrupt
  *            @arg @ref USART_IT_TC    Transmission complete interrupt
  *            @arg @ref USART_IT_RXNE  Receive Data register not empty interrupt
  *            @arg @ref USART_IT_RXFNE RXFIFO not empty interrupt
  *            @arg @ref USART_IT_IDLE  Idle line detection interrupt
  *            @arg @ref USART_IT_PE    Parity Error interrupt
  *            @arg @ref USART_IT_ERR   Error interrupt(Frame error, noise error, overrun error)
  * @retval None
  */
#define __HAL_USART_DISABLE_IT(__HANDLE__, __INTERRUPT__)\
  (((((__INTERRUPT__) & USART_CR_MASK) >> USART_CR_POS) == 1U)?\
   ((__HANDLE__)->Instance->CR1 &= ~ (1U << ((__INTERRUPT__) & USART_IT_MASK))): \
   ((((__INTERRUPT__) & USART_CR_MASK) >> USART_CR_POS) == 2U)?\
   ((__HANDLE__)->Instance->CR2 &= ~ (1U << ((__INTERRUPT__) & USART_IT_MASK))): \
   ((__HANDLE__)->Instance->CR3 &= ~ (1U << ((__INTERRUPT__) & USART_IT_MASK))))

/** @brief  Check whether the specified USART interrupt has occurred or not.
  * @param  __HANDLE__ specifies the USART Handle.
  * @param  __INTERRUPT__ specifies the USART interrupt source to check.
  *          This parameter can be one of the following values:
  *            @arg @ref USART_IT_RXFF  RXFIFO Full interrupt
  *            @arg @ref USART_IT_TXFE  TXFIFO Empty interrupt
  *            @arg @ref USART_IT_RXFT  RXFIFO threshold interrupt
  *            @arg @ref USART_IT_TXFT  TXFIFO threshold interrupt
  *            @arg @ref USART_IT_TXE   Transmit Data Register empty interrupt
  *            @arg @ref USART_IT_TXFNF TX FIFO not full interrupt
  *            @arg @ref USART_IT_TC    Transmission complete interrupt
  *            @arg @ref USART_IT_RXNE  Receive Data register not empty interrupt
  *            @arg @ref USART_IT_RXFNE RXFIFO not empty interrupt
  *            @arg @ref USART_IT_IDLE  Idle line detection interrupt
  *            @arg @ref USART_IT_ORE   OverRun Error interrupt
  *            @arg @ref USART_IT_NE    Noise Error interrupt
  *            @arg @ref USART_IT_FE    Framing Error interrupt
  *            @arg @ref USART_IT_PE    Parity Error interrupt
  * @retval The new state of __INTERRUPT__ (SET or RESET).
  */
#define __HAL_USART_GET_IT(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->ISR\
                                                         & (0x01U << (((__INTERRUPT__) & USART_ISR_MASK)>>\
                                                                      USART_ISR_POS))) != 0U) ? SET : RESET)

/** @brief  Check whether the specified USART interrupt source is enabled or not.
  * @param  __HANDLE__ specifies the USART Handle.
  * @param  __INTERRUPT__ specifies the USART interrupt source to check.
  *          This parameter can be one of the following values:
  *            @arg @ref USART_IT_RXFF  RXFIFO Full interrupt
  *            @arg @ref USART_IT_TXFE  TXFIFO Empty interrupt
  *            @arg @ref USART_IT_RXFT  RXFIFO threshold interrupt
  *            @arg @ref USART_IT_TXFT  TXFIFO threshold interrupt
  *            @arg @ref USART_IT_TXE   Transmit Data Register empty interrupt
  *            @arg @ref USART_IT_TXFNF TX FIFO not full interrupt
  *            @arg @ref USART_IT_TC    Transmission complete interrupt
  *            @arg @ref USART_IT_RXNE  Receive Data register not empty interrupt
  *            @arg @ref USART_IT_RXFNE RXFIFO not empty interrupt
  *            @arg @ref USART_IT_IDLE  Idle line detection interrupt
  *            @arg @ref USART_IT_ORE   OverRun Error interrupt
  *            @arg @ref USART_IT_NE    Noise Error interrupt
  *            @arg @ref USART_IT_FE    Framing Error interrupt
  *            @arg @ref USART_IT_PE    Parity Error interrupt
  * @retval The new state of __INTERRUPT__ (SET or RESET).
  */
#define __HAL_USART_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((((((uint8_t)(__INTERRUPT__)) >> 0x05U) == 0x01U) ?\
                                                                 (__HANDLE__)->Instance->CR1 : \
                                                                 (((((uint8_t)(__INTERRUPT__)) >> 0x05U) == 0x02U) ?\
                                                                  (__HANDLE__)->Instance->CR2 : \
                                                                  (__HANDLE__)->Instance->CR3)) & (0x01U <<\
                                                                      (((uint16_t)(__INTERRUPT__)) &\
                                                                       USART_IT_MASK)))  != 0U) ? SET : RESET)

/** @brief  Clear the specified USART ISR flag, in setting the proper ICR register flag.
  * @param  __HANDLE__ specifies the USART Handle.
  * @param  __IT_CLEAR__ specifies the interrupt clear register flag that needs to be set
  *                       to clear the corresponding interrupt.
  *          This parameter can be one of the following values:
  *            @arg @ref USART_CLEAR_PEF      Parity Error Clear Flag
  *            @arg @ref USART_CLEAR_FEF      Framing Error Clear Flag
  *            @arg @ref USART_CLEAR_NEF      Noise detected Clear Flag
  *            @arg @ref USART_CLEAR_OREF     Overrun Error Clear Flag
  *            @arg @ref USART_CLEAR_IDLEF    IDLE line detected Clear Flag
  *            @arg @ref USART_CLEAR_RTOF     Receiver timeout clear flag
  *            @arg @ref USART_CLEAR_TXFECF   TXFIFO empty clear Flag
  *            @arg @ref USART_CLEAR_TCF      Transmission Complete Clear Flag
  * @retval None
  */
#define __HAL_USART_CLEAR_IT(__HANDLE__, __IT_CLEAR__) ((__HANDLE__)->Instance->ICR = (uint32_t)(__IT_CLEAR__))

/** @brief  Set a specific USART request flag.
  * @param  __HANDLE__ specifies the USART Handle.
  * @param  __REQ__ specifies the request flag to set.
  *          This parameter can be one of the following values:
  *            @arg @ref USART_RXDATA_FLUSH_REQUEST Receive Data flush Request
  *            @arg @ref USART_TXDATA_FLUSH_REQUEST Transmit data flush Request
  *
  * @retval None
  */
#define __HAL_USART_SEND_REQ(__HANDLE__, __REQ__)      ((__HANDLE__)->Instance->RQR |= (uint16_t)(__REQ__))

/** @brief  Enable the USART one bit sample method.
  * @param  __HANDLE__ specifies the USART Handle.
  * @retval None
  */
#define __HAL_USART_ONE_BIT_SAMPLE_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3|= USART_CR3_ONEBIT)

/** @brief  Disable the USART one bit sample method.
  * @param  __HANDLE__ specifies the USART Handle.
  * @retval None
  */
#define __HAL_USART_ONE_BIT_SAMPLE_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3 &= ~USART_CR3_ONEBIT)

/** @brief  Enable USART.
  * @param  __HANDLE__ specifies the USART Handle.
  * @retval None
  */
#define __HAL_USART_ENABLE(__HANDLE__)                 ((__HANDLE__)->Instance->CR1 |= USART_CR1_UE)

/** @brief  Disable USART.
  * @param  __HANDLE__ specifies the USART Handle.
  * @retval None
  */
#define __HAL_USART_DISABLE(__HANDLE__)                ((__HANDLE__)->Instance->CR1 &= ~USART_CR1_UE)

/**
  * @}
  */

/* Private macros --------------------------------------------------------*/
/** @defgroup USART_Private_Macros   USART Private Macros
  * @{
  */

/** @brief  Get USART clock division factor from clock prescaler value.
  * @param  __CLOCKPRESCALER__ USART prescaler value.
  * @retval USART clock division factor
  */
#define USART_GET_DIV_FACTOR(__CLOCKPRESCALER__) \
  (((__CLOCKPRESCALER__) == USART_PRESCALER_DIV1)   ? 1U :       \
   ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV2)   ? 2U :       \
   ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV4)   ? 4U :       \
   ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV6)   ? 6U :       \
   ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV8)   ? 8U :       \
   ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV10)  ? 10U :      \
   ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV12)  ? 12U :      \
   ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV16)  ? 16U :      \
   ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV32)  ? 32U :      \
   ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV64)  ? 64U :      \
   ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV128) ? 128U : 256U)

/** @brief  BRR division operation to set BRR register in 8-bit oversampling mode.
  * @param  __PCLK__ USART clock.
  * @param  __BAUD__ Baud rate set by the user.
  * @param  __CLOCKPRESCALER__ USART prescaler value.
  * @retval Division result
  */
#define USART_DIV_SAMPLING8(__PCLK__, __BAUD__, __CLOCKPRESCALER__)\
  (((((__PCLK__)/USART_GET_DIV_FACTOR(__CLOCKPRESCALER__))*2U)\
    + ((__BAUD__)/2U)) / (__BAUD__))

/** @brief  Report the USART clock source.
  * @param  __HANDLE__ specifies the USART Handle.
  * @param  __CLOCKSOURCE__ output variable.
  * @retval the USART clocking source, written in __CLOCKSOURCE__.
  */
#if defined(UART9) && defined(USART10)
#define USART_GETCLOCKSOURCE(__HANDLE__,__CLOCKSOURCE__)       \
  do {                                                         \
    if((__HANDLE__)->Instance == USART1)                       \
    {                                                          \
      switch(__HAL_RCC_GET_USART1_SOURCE())                    \
      {                                                        \
        case RCC_USART1CLKSOURCE_D2PCLK2:                      \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_D2PCLK2;       \
          break;                                               \
        case RCC_USART1CLKSOURCE_PLL2:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL2;          \
          break;                                               \
        case RCC_USART1CLKSOURCE_PLL3:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL3;          \
          break;                                               \
        case RCC_USART1CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_HSI;           \
          break;                                               \
        case RCC_USART1CLKSOURCE_CSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_CSI;           \
          break;                                               \
        case RCC_USART1CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_LSE;           \
          break;                                               \
        default:                                               \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_UNDEFINED;     \
          break;                                               \
      }                                                        \
    }                                                          \
    else if((__HANDLE__)->Instance == USART2)                  \
    {                                                          \
      switch(__HAL_RCC_GET_USART2_SOURCE())                    \
      {                                                        \
        case RCC_USART2CLKSOURCE_D2PCLK1:                      \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_D2PCLK1;       \
          break;                                               \
        case RCC_USART2CLKSOURCE_PLL2:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL2;          \
          break;                                               \
        case RCC_USART2CLKSOURCE_PLL3:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL3;          \
          break;                                               \
        case RCC_USART2CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_HSI;           \
          break;                                               \
        case RCC_USART2CLKSOURCE_CSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_CSI;           \
          break;                                               \
        case RCC_USART2CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_LSE;           \
          break;                                               \
        default:                                               \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_UNDEFINED;     \
          break;                                               \
      }                                                        \
    }                                                          \
    else if((__HANDLE__)->Instance == USART3)                  \
    {                                                          \
      switch(__HAL_RCC_GET_USART3_SOURCE())                    \
      {                                                        \
        case RCC_USART3CLKSOURCE_D2PCLK1:                      \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_D2PCLK1;       \
          break;                                               \
        case RCC_USART3CLKSOURCE_PLL2:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL2;          \
          break;                                               \
        case RCC_USART3CLKSOURCE_PLL3:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL3;          \
          break;                                               \
        case RCC_USART3CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_HSI;           \
          break;                                               \
        case RCC_USART3CLKSOURCE_CSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_CSI;           \
          break;                                               \
        case RCC_USART3CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_LSE;           \
          break;                                               \
        default:                                               \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_UNDEFINED;     \
          break;                                               \
      }                                                        \
    }                                                          \
    else if((__HANDLE__)->Instance == USART6)                  \
    {                                                          \
      switch(__HAL_RCC_GET_USART6_SOURCE())                    \
      {                                                        \
        case RCC_USART6CLKSOURCE_D2PCLK2:                      \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_D2PCLK2;       \
          break;                                               \
        case RCC_USART6CLKSOURCE_PLL2:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL2;          \
          break;                                               \
        case RCC_USART6CLKSOURCE_PLL3:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL3;          \
          break;                                               \
        case RCC_USART6CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_HSI;           \
          break;                                               \
        case RCC_USART6CLKSOURCE_CSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_CSI;           \
          break;                                               \
        case RCC_USART6CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_LSE;           \
          break;                                               \
        default:                                               \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_UNDEFINED;     \
          break;                                               \
      }                                                        \
    }                                                          \
    else if((__HANDLE__)->Instance == USART10)                 \
    {                                                          \
      switch(__HAL_RCC_GET_USART10_SOURCE())                   \
      {                                                        \
        case RCC_USART10CLKSOURCE_D2PCLK2:                     \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_D2PCLK2;       \
          break;                                               \
        case RCC_USART10CLKSOURCE_PLL2:                        \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL2;          \
          break;                                               \
        case RCC_USART10CLKSOURCE_PLL3:                        \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL3;          \
          break;                                               \
        case RCC_USART10CLKSOURCE_HSI:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_HSI;           \
          break;                                               \
        case RCC_USART10CLKSOURCE_CSI:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_CSI;           \
          break;                                               \
        case RCC_USART10CLKSOURCE_LSE:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_LSE;           \
          break;                                               \
        default:                                               \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_UNDEFINED;     \
          break;                                               \
      }                                                        \
    }                                                          \
    else                                                       \
    {                                                          \
      (__CLOCKSOURCE__) = USART_CLOCKSOURCE_UNDEFINED;         \
    }                                                          \
  } while(0U)
#else
#define USART_GETCLOCKSOURCE(__HANDLE__,__CLOCKSOURCE__)       \
  do {                                                         \
    if((__HANDLE__)->Instance == USART1)                       \
    {                                                          \
      switch(__HAL_RCC_GET_USART1_SOURCE())                    \
      {                                                        \
        case RCC_USART1CLKSOURCE_D2PCLK2:                      \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_D2PCLK2;       \
          break;                                               \
        case RCC_USART1CLKSOURCE_PLL2:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL2;          \
          break;                                               \
        case RCC_USART1CLKSOURCE_PLL3:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL3;          \
          break;                                               \
        case RCC_USART1CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_HSI;           \
          break;                                               \
        case RCC_USART1CLKSOURCE_CSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_CSI;           \
          break;                                               \
        case RCC_USART1CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_LSE;           \
          break;                                               \
        default:                                               \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_UNDEFINED;     \
          break;                                               \
      }                                                        \
    }                                                          \
    else if((__HANDLE__)->Instance == USART2)                  \
    {                                                          \
      switch(__HAL_RCC_GET_USART2_SOURCE())                    \
      {                                                        \
        case RCC_USART2CLKSOURCE_D2PCLK1:                      \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_D2PCLK1;       \
          break;                                               \
        case RCC_USART2CLKSOURCE_PLL2:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL2;          \
          break;                                               \
        case RCC_USART2CLKSOURCE_PLL3:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL3;          \
          break;                                               \
        case RCC_USART2CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_HSI;           \
          break;                                               \
        case RCC_USART2CLKSOURCE_CSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_CSI;           \
          break;                                               \
        case RCC_USART2CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_LSE;           \
          break;                                               \
        default:                                               \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_UNDEFINED;     \
          break;                                               \
      }                                                        \
    }                                                          \
    else if((__HANDLE__)->Instance == USART3)                  \
    {                                                          \
      switch(__HAL_RCC_GET_USART3_SOURCE())                    \
      {                                                        \
        case RCC_USART3CLKSOURCE_D2PCLK1:                      \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_D2PCLK1;       \
          break;                                               \
        case RCC_USART3CLKSOURCE_PLL2:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL2;          \
          break;                                               \
        case RCC_USART3CLKSOURCE_PLL3:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL3;          \
          break;                                               \
        case RCC_USART3CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_HSI;           \
          break;                                               \
        case RCC_USART3CLKSOURCE_CSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_CSI;           \
          break;                                               \
        case RCC_USART3CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_LSE;           \
          break;                                               \
        default:                                               \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_UNDEFINED;     \
          break;                                               \
      }                                                        \
    }                                                          \
    else if((__HANDLE__)->Instance == USART6)                  \
    {                                                          \
      switch(__HAL_RCC_GET_USART6_SOURCE())                    \
      {                                                        \
        case RCC_USART6CLKSOURCE_D2PCLK2:                      \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_D2PCLK2;       \
          break;                                               \
        case RCC_USART6CLKSOURCE_PLL2:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL2;          \
          break;                                               \
        case RCC_USART6CLKSOURCE_PLL3:                         \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_PLL3;          \
          break;                                               \
        case RCC_USART6CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_HSI;           \
          break;                                               \
        case RCC_USART6CLKSOURCE_CSI:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_CSI;           \
          break;                                               \
        case RCC_USART6CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_LSE;           \
          break;                                               \
        default:                                               \
          (__CLOCKSOURCE__) = USART_CLOCKSOURCE_UNDEFINED;     \
          break;                                               \
      }                                                        \
    }                                                          \
    else                                                       \
    {                                                          \
      (__CLOCKSOURCE__) = USART_CLOCKSOURCE_UNDEFINED;         \
    }                                                          \
  } while(0U)
#endif  /* UART9 && USART10 */

/** @brief  Check USART Baud rate.
  * @param  __BAUDRATE__ Baudrate specified by the user.
  *         The maximum Baud Rate is derived from the maximum clock on H7 (i.e. 100 MHz)
  *         divided by the smallest oversampling used on the USART (i.e. 8)
  * @retval SET (__BAUDRATE__ is valid) or RESET (__BAUDRATE__ is invalid)  */
#define IS_USART_BAUDRATE(__BAUDRATE__) ((__BAUDRATE__) <= 12500000U)

/**
  * @brief Ensure that USART frame number of stop bits is valid.
  * @param __STOPBITS__ USART frame number of stop bits.
  * @retval SET (__STOPBITS__ is valid) or RESET (__STOPBITS__ is invalid)
  */
#define IS_USART_STOPBITS(__STOPBITS__) (((__STOPBITS__) == USART_STOPBITS_0_5) || \
                                         ((__STOPBITS__) == USART_STOPBITS_1)   || \
                                         ((__STOPBITS__) == USART_STOPBITS_1_5) || \
                                         ((__STOPBITS__) == USART_STOPBITS_2))

/**
  * @brief Ensure that USART frame parity is valid.
  * @param __PARITY__ USART frame parity.
  * @retval SET (__PARITY__ is valid) or RESET (__PARITY__ is invalid)
  */
#define IS_USART_PARITY(__PARITY__) (((__PARITY__) == USART_PARITY_NONE) || \
                                     ((__PARITY__) == USART_PARITY_EVEN) || \
                                     ((__PARITY__) == USART_PARITY_ODD))

/**
  * @brief Ensure that USART communication mode is valid.
  * @param __MODE__ USART communication mode.
  * @retval SET (__MODE__ is valid) or RESET (__MODE__ is invalid)
  */
#define IS_USART_MODE(__MODE__) ((((__MODE__) & 0xFFFFFFF3U) == 0x00U) && ((__MODE__) != 0x00U))

/**
  * @brief Ensure that USART clock state is valid.
  * @param __CLOCK__ USART clock state.
  * @retval SET (__CLOCK__ is valid) or RESET (__CLOCK__ is invalid)
  */
#define IS_USART_CLOCK(__CLOCK__) (((__CLOCK__) == USART_CLOCK_DISABLE) || \
                                   ((__CLOCK__) == USART_CLOCK_ENABLE))

/**
  * @brief Ensure that USART frame polarity is valid.
  * @param __CPOL__ USART frame polarity.
  * @retval SET (__CPOL__ is valid) or RESET (__CPOL__ is invalid)
  */
#define IS_USART_POLARITY(__CPOL__) (((__CPOL__) == USART_POLARITY_LOW) || ((__CPOL__) == USART_POLARITY_HIGH))

/**
  * @brief Ensure that USART frame phase is valid.
  * @param __CPHA__ USART frame phase.
  * @retval SET (__CPHA__ is valid) or RESET (__CPHA__ is invalid)
  */
#define IS_USART_PHASE(__CPHA__) (((__CPHA__) == USART_PHASE_1EDGE) || ((__CPHA__) == USART_PHASE_2EDGE))

/**
  * @brief Ensure that USART frame last bit clock pulse setting is valid.
  * @param __LASTBIT__ USART frame last bit clock pulse setting.
  * @retval SET (__LASTBIT__ is valid) or RESET (__LASTBIT__ is invalid)
  */
#define IS_USART_LASTBIT(__LASTBIT__) (((__LASTBIT__) == USART_LASTBIT_DISABLE) || \
                                       ((__LASTBIT__) == USART_LASTBIT_ENABLE))

/**
  * @brief Ensure that USART request parameter is valid.
  * @param __PARAM__ USART request parameter.
  * @retval SET (__PARAM__ is valid) or RESET (__PARAM__ is invalid)
  */
#define IS_USART_REQUEST_PARAMETER(__PARAM__) (((__PARAM__) == USART_RXDATA_FLUSH_REQUEST) || \
                                               ((__PARAM__) == USART_TXDATA_FLUSH_REQUEST))

/**
  * @brief Ensure that USART Prescaler is valid.
  * @param __CLOCKPRESCALER__ USART Prescaler value.
  * @retval SET (__CLOCKPRESCALER__ is valid) or RESET (__CLOCKPRESCALER__ is invalid)
  */
#define IS_USART_PRESCALER(__CLOCKPRESCALER__) (((__CLOCKPRESCALER__) == USART_PRESCALER_DIV1) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV2) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV4) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV6) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV8) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV10) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV12) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV16) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV32) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV64) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV128) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV256))

/**
  * @}
  */

/* Include USART HAL Extended module */
#include "stm32h7xx_hal_usart_ex.h"

/* Exported functions --------------------------------------------------------*/
/** @addtogroup USART_Exported_Functions USART Exported Functions
  * @{
  */

/** @addtogroup USART_Exported_Functions_Group1 Initialization and de-initialization functions
  * @{
  */

/* Initialization and de-initialization functions  ****************************/
HAL_StatusTypeDef HAL_USART_Init(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USART_DeInit(USART_HandleTypeDef *husart);
void HAL_USART_MspInit(USART_HandleTypeDef *husart);
void HAL_USART_MspDeInit(USART_HandleTypeDef *husart);

/* Callbacks Register/UnRegister functions  ***********************************/
#if (USE_HAL_USART_REGISTER_CALLBACKS == 1)
HAL_StatusTypeDef HAL_USART_RegisterCallback(USART_HandleTypeDef *husart, HAL_USART_CallbackIDTypeDef CallbackID,
                                             pUSART_CallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_USART_UnRegisterCallback(USART_HandleTypeDef *husart, HAL_USART_CallbackIDTypeDef CallbackID);
#endif /* USE_HAL_USART_REGISTER_CALLBACKS */

/**
  * @}
  */

/** @addtogroup USART_Exported_Functions_Group2 IO operation functions
  * @{
  */

/* IO operation functions *****************************************************/
HAL_StatusTypeDef HAL_USART_Transmit(USART_HandleTypeDef *husart, const uint8_t *pTxData, uint16_t Size,
                                     uint32_t Timeout);
HAL_StatusTypeDef HAL_USART_Receive(USART_HandleTypeDef *husart, uint8_t *pRxData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_USART_TransmitReceive(USART_HandleTypeDef *husart, const uint8_t *pTxData, uint8_t *pRxData,
                                            uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_USART_Transmit_IT(USART_HandleTypeDef *husart, const uint8_t *pTxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_Receive_IT(USART_HandleTypeDef *husart, uint8_t *pRxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_TransmitReceive_IT(USART_HandleTypeDef *husart, const uint8_t *pTxData, uint8_t *pRxData,
                                               uint16_t Size);
HAL_StatusTypeDef HAL_USART_Transmit_DMA(USART_HandleTypeDef *husart, const uint8_t *pTxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_Receive_DMA(USART_HandleTypeDef *husart, uint8_t *pRxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_TransmitReceive_DMA(USART_HandleTypeDef *husart, const uint8_t *pTxData, uint8_t *pRxData,
                                                uint16_t Size);
HAL_StatusTypeDef HAL_USART_DMAPause(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USART_DMAResume(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USART_DMAStop(USART_HandleTypeDef *husart);
/* Transfer Abort functions */
HAL_StatusTypeDef HAL_USART_Abort(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USART_Abort_IT(USART_HandleTypeDef *husart);

void HAL_USART_IRQHandler(USART_HandleTypeDef *husart);
void HAL_USART_TxHalfCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_TxCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_RxCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_RxHalfCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_TxRxCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_ErrorCallback(USART_HandleTypeDef *husart);
void HAL_USART_AbortCpltCallback(USART_HandleTypeDef *husart);

/**
  * @}
  */

/** @addtogroup USART_Exported_Functions_Group4 Peripheral State and Error functions
  * @{
  */

/* Peripheral State and Error functions ***************************************/
HAL_USART_StateTypeDef HAL_USART_GetState(const USART_HandleTypeDef *husart);
uint32_t               HAL_USART_GetError(const USART_HandleTypeDef *husart);

/**
  * @}
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

#ifdef __cplusplus
}
#endif

#endif /* STM32H7xx_HAL_USART_H */

