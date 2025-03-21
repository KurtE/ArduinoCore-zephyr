/**
  ******************************************************************************
  * @file    stm32h7xx_hal_dma_ex.h
  * @author  MCD Application Team
  * @brief   Header file of DMA HAL extension module.
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
#ifndef STM32H7xx_HAL_DMA_EX_H
#define STM32H7xx_HAL_DMA_EX_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal_def.h"

/** @addtogroup STM32H7xx_HAL_Driver
  * @{
  */

/** @addtogroup DMAEx
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/** @defgroup DMAEx_Exported_Types DMAEx Exported Types
  * @brief DMAEx Exported types
  * @{
  */

/**
  * @brief  HAL DMA Memory definition
  */
typedef enum
{
  MEMORY0      = 0x00U,
  MEMORY1      = 0x01U,

}HAL_DMA_MemoryTypeDef;

/**
  * @brief  HAL DMAMUX Synchronization configuration structure definition
  */
typedef struct
{
  uint32_t SyncSignalID;  /*!< Specifies the synchronization signal gating the DMA request in periodic mode.
                              This parameter can be a value of @ref DMAEx_MUX_SyncSignalID_selection */

  uint32_t SyncPolarity;  /*!< Specifies the polarity of the signal on which the DMA request is synchronized.
                              This parameter can be a value of @ref DMAEx_MUX_SyncPolarity_selection */

  FunctionalState SyncEnable;  /*!< Specifies if the synchronization shall be enabled or disabled
                                    This parameter can take the value ENABLE or DISABLE*/


  FunctionalState EventEnable;    /*!< Specifies if an event shall be generated once the RequestNumber is reached.
                                       This parameter can take the value ENABLE or DISABLE */

  uint32_t RequestNumber; /*!< Specifies the number of DMA request that will be authorized after a sync event.
                               This parameters can be in the range 1 to 32 */

}HAL_DMA_MuxSyncConfigTypeDef;


/**
  * @brief  HAL DMAMUX request generator parameters structure definition
  */
typedef struct
{
 uint32_t SignalID;      /*!< Specifies the ID of the signal used for DMAMUX request generator
                              This parameter can be a value of @ref DMAEx_MUX_SignalGeneratorID_selection */

  uint32_t Polarity;       /*!< Specifies the polarity of the signal on which the request is generated.
                             This parameter can be a value of @ref DMAEx_MUX_RequestGeneneratorPolarity_selection */

  uint32_t RequestNumber;  /*!< Specifies the number of DMA request that will be generated after a signal event.
                                This parameters can be in the range 1 to 32 */

}HAL_DMA_MuxRequestGeneratorConfigTypeDef;

/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/

/** @defgroup DMAEx_Exported_Constants DMA Exported Constants
  * @brief    DMAEx Exported constants
  * @{
  */

/** @defgroup DMAEx_MUX_SyncSignalID_selection DMAEx MUX SyncSignalID selection
  * @brief    DMAEx MUX SyncSignalID selection
  * @{
  */
#define HAL_DMAMUX1_SYNC_DMAMUX1_CH0_EVT   0U
#define HAL_DMAMUX1_SYNC_DMAMUX1_CH1_EVT   1U
#define HAL_DMAMUX1_SYNC_DMAMUX1_CH2_EVT   2U
#define HAL_DMAMUX1_SYNC_LPTIM1_OUT        3U
#define HAL_DMAMUX1_SYNC_LPTIM2_OUT        4U
#define HAL_DMAMUX1_SYNC_LPTIM3_OUT        5U
#define HAL_DMAMUX1_SYNC_EXTI0             6U
#define HAL_DMAMUX1_SYNC_TIM12_TRGO        7U

#define HAL_DMAMUX2_SYNC_DMAMUX2_CH0_EVT   0U
#define HAL_DMAMUX2_SYNC_DMAMUX2_CH1_EVT   1U
#define HAL_DMAMUX2_SYNC_DMAMUX2_CH2_EVT   2U
#define HAL_DMAMUX2_SYNC_DMAMUX2_CH3_EVT   3U
#define HAL_DMAMUX2_SYNC_DMAMUX2_CH4_EVT   4U
#define HAL_DMAMUX2_SYNC_DMAMUX2_CH5_EVT   5U
#define HAL_DMAMUX2_SYNC_LPUART1_RX_WKUP   6U
#define HAL_DMAMUX2_SYNC_LPUART1_TX_WKUP   7U
#define HAL_DMAMUX2_SYNC_LPTIM2_OUT        8U
#define HAL_DMAMUX2_SYNC_LPTIM3_OUT        9U
#define HAL_DMAMUX2_SYNC_I2C4_WKUP        10U
#define HAL_DMAMUX2_SYNC_SPI6_WKUP        11U
#define HAL_DMAMUX2_SYNC_COMP1_OUT        12U
#define HAL_DMAMUX2_SYNC_RTC_WKUP         13U
#define HAL_DMAMUX2_SYNC_EXTI0            14U
#define HAL_DMAMUX2_SYNC_EXTI2            15U

/**
  * @}
  */

/** @defgroup DMAEx_MUX_SyncPolarity_selection DMAEx MUX SyncPolarity selection
  * @brief    DMAEx MUX SyncPolarity selection
  * @{
  */
#define HAL_DMAMUX_SYNC_NO_EVENT        0x00000000U
#define HAL_DMAMUX_SYNC_RISING          DMAMUX_CxCR_SPOL_0
#define HAL_DMAMUX_SYNC_FALLING         DMAMUX_CxCR_SPOL_1
#define HAL_DMAMUX_SYNC_RISING_FALLING  DMAMUX_CxCR_SPOL

/**
  * @}
  */


/** @defgroup DMAEx_MUX_SignalGeneratorID_selection DMAEx MUX SignalGeneratorID selection
  * @brief    DMAEx MUX SignalGeneratorID selection
  * @{
  */
#define HAL_DMAMUX1_REQ_GEN_DMAMUX1_CH0_EVT   0U
#define HAL_DMAMUX1_REQ_GEN_DMAMUX1_CH1_EVT   1U
#define HAL_DMAMUX1_REQ_GEN_DMAMUX1_CH2_EVT   2U
#define HAL_DMAMUX1_REQ_GEN_LPTIM1_OUT        3U
#define HAL_DMAMUX1_REQ_GEN_LPTIM2_OUT        4U
#define HAL_DMAMUX1_REQ_GEN_LPTIM3_OUT        5U
#define HAL_DMAMUX1_REQ_GEN_EXTI0             6U
#define HAL_DMAMUX1_REQ_GEN_TIM12_TRGO        7U

#define HAL_DMAMUX2_REQ_GEN_DMAMUX2_CH0_EVT   0U
#define HAL_DMAMUX2_REQ_GEN_DMAMUX2_CH1_EVT   1U
#define HAL_DMAMUX2_REQ_GEN_DMAMUX2_CH2_EVT   2U
#define HAL_DMAMUX2_REQ_GEN_DMAMUX2_CH3_EVT   3U
#define HAL_DMAMUX2_REQ_GEN_DMAMUX2_CH4_EVT   4U
#define HAL_DMAMUX2_REQ_GEN_DMAMUX2_CH5_EVT   5U
#define HAL_DMAMUX2_REQ_GEN_DMAMUX2_CH6_EVT   6U
#define HAL_DMAMUX2_REQ_GEN_LPUART1_RX_WKUP   7U
#define HAL_DMAMUX2_REQ_GEN_LPUART1_TX_WKUP   8U
#define HAL_DMAMUX2_REQ_GEN_LPTIM2_WKUP       9U
#define HAL_DMAMUX2_REQ_GEN_LPTIM2_OUT       10U
#define HAL_DMAMUX2_REQ_GEN_LPTIM3_WKUP      11U
#define HAL_DMAMUX2_REQ_GEN_LPTIM3_OUT       12U
#if defined(LPTIM4)
#define HAL_DMAMUX2_REQ_GEN_LPTIM4_WKUP      13U
#endif /* LPTIM4 */
#if defined(LPTIM5)
#define HAL_DMAMUX2_REQ_GEN_LPTIM5_WKUP      14U
#endif /* LPTIM5 */
#define HAL_DMAMUX2_REQ_GEN_I2C4_WKUP        15U
#define HAL_DMAMUX2_REQ_GEN_SPI6_WKUP        16U
#define HAL_DMAMUX2_REQ_GEN_COMP1_OUT        17U
#define HAL_DMAMUX2_REQ_GEN_COMP2_OUT        18U
#define HAL_DMAMUX2_REQ_GEN_RTC_WKUP         19U
#define HAL_DMAMUX2_REQ_GEN_EXTI0            20U
#define HAL_DMAMUX2_REQ_GEN_EXTI2            21U
#define HAL_DMAMUX2_REQ_GEN_I2C4_IT_EVT      22U
#define HAL_DMAMUX2_REQ_GEN_SPI6_IT          23U
#define HAL_DMAMUX2_REQ_GEN_LPUART1_TX_IT    24U
#define HAL_DMAMUX2_REQ_GEN_LPUART1_RX_IT    25U
#if defined(ADC3)
#define HAL_DMAMUX2_REQ_GEN_ADC3_IT          26U
#define HAL_DMAMUX2_REQ_GEN_ADC3_AWD1_OUT    27U
#endif /* ADC3 */
#define HAL_DMAMUX2_REQ_GEN_BDMA_CH0_IT      28U
#define HAL_DMAMUX2_REQ_GEN_BDMA_CH1_IT      29U


/**
  * @}
  */

/** @defgroup DMAEx_MUX_RequestGeneneratorPolarity_selection DMAEx MUX RequestGeneneratorPolarity selection
  * @brief    DMAEx MUX RequestGeneneratorPolarity selection
  * @{
  */
#define HAL_DMAMUX_REQ_GEN_NO_EVENT        0x00000000U
#define HAL_DMAMUX_REQ_GEN_RISING          DMAMUX_RGxCR_GPOL_0
#define HAL_DMAMUX_REQ_GEN_FALLING         DMAMUX_RGxCR_GPOL_1
#define HAL_DMAMUX_REQ_GEN_RISING_FALLING  DMAMUX_RGxCR_GPOL

/**
  * @}
  */

/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/
/** @defgroup DMAEx_Exported_Functions DMAEx Exported Functions
  * @brief   DMAEx Exported functions
  * @{
  */

/** @defgroup DMAEx_Exported_Functions_Group1 Extended features functions
  * @brief   Extended features functions
  * @{
  */

/* IO operation functions *******************************************************/
HAL_StatusTypeDef HAL_DMAEx_MultiBufferStart(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t SecondMemAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMAEx_MultiBufferStart_IT(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t SecondMemAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMAEx_ChangeMemory(DMA_HandleTypeDef *hdma, uint32_t Address, HAL_DMA_MemoryTypeDef memory);
HAL_StatusTypeDef HAL_DMAEx_ConfigMuxSync(DMA_HandleTypeDef *hdma, HAL_DMA_MuxSyncConfigTypeDef *pSyncConfig);
HAL_StatusTypeDef HAL_DMAEx_ConfigMuxRequestGenerator (DMA_HandleTypeDef *hdma, HAL_DMA_MuxRequestGeneratorConfigTypeDef *pRequestGeneratorConfig);
HAL_StatusTypeDef HAL_DMAEx_EnableMuxRequestGenerator (DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMAEx_DisableMuxRequestGenerator (DMA_HandleTypeDef *hdma);

void HAL_DMAEx_MUX_IRQHandler(DMA_HandleTypeDef *hdma);
/**
  * @}
  */
/**
  * @}
  */

/* Private macros ------------------------------------------------------------*/
/** @defgroup DMAEx_Private_Macros DMA Private Macros
  * @brief    DMAEx private macros
  * @{
  */

#define IS_DMA_DMAMUX_SYNC_SIGNAL_ID(SIGNAL_ID) ((SIGNAL_ID) <= HAL_DMAMUX1_SYNC_TIM12_TRGO)
#define IS_BDMA_DMAMUX_SYNC_SIGNAL_ID(SIGNAL_ID) ((SIGNAL_ID) <= HAL_DMAMUX2_SYNC_EXTI2)

#define IS_DMAMUX_SYNC_REQUEST_NUMBER(REQUEST_NUMBER) (((REQUEST_NUMBER) > 0U) && ((REQUEST_NUMBER) <= 32U))

#define IS_DMAMUX_SYNC_POLARITY(POLARITY) (((POLARITY) == HAL_DMAMUX_SYNC_NO_EVENT)    || \
                                           ((POLARITY) == HAL_DMAMUX_SYNC_RISING)   || \
                                           ((POLARITY) == HAL_DMAMUX_SYNC_FALLING)  || \
                                           ((POLARITY) == HAL_DMAMUX_SYNC_RISING_FALLING))

#define IS_DMAMUX_SYNC_STATE(SYNC) (((SYNC) == DISABLE)   || ((SYNC) == ENABLE))

#define IS_DMAMUX_SYNC_EVENT(EVENT) (((EVENT) == DISABLE)   || \
                                     ((EVENT) == ENABLE))

#define IS_DMA_DMAMUX_REQUEST_GEN_SIGNAL_ID(SIGNAL_ID) ((SIGNAL_ID) <= HAL_DMAMUX1_REQ_GEN_TIM12_TRGO)
#define IS_BDMA_DMAMUX_REQUEST_GEN_SIGNAL_ID(SIGNAL_ID) ((SIGNAL_ID) <= HAL_DMAMUX2_REQ_GEN_BDMA_CH1_IT)

#define IS_DMAMUX_REQUEST_GEN_REQUEST_NUMBER(REQUEST_NUMBER) (((REQUEST_NUMBER) > 0U) && ((REQUEST_NUMBER) <= 32U))

#define IS_DMAMUX_REQUEST_GEN_POLARITY(POLARITY) (((POLARITY) == HAL_DMAMUX_REQ_GEN_NO_EVENT) || \
                                                  ((POLARITY) == HAL_DMAMUX_REQ_GEN_RISING)   || \
                                                  ((POLARITY) == HAL_DMAMUX_REQ_GEN_FALLING)   || \
                                                  ((POLARITY) == HAL_DMAMUX_REQ_GEN_RISING_FALLING))

/**
  * @}
  */

/* Private functions ---------------------------------------------------------*/
/** @defgroup DMAEx_Private_Functions DMAEx Private Functions
  * @brief DMAEx Private functions
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

#ifdef __cplusplus
}
#endif

#endif /* STM32H7xx_HAL_DMA_H */

