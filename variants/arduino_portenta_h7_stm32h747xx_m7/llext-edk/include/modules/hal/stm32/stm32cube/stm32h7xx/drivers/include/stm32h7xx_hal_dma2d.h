/**
  ******************************************************************************
  * @file    stm32h7xx_hal_dma2d.h
  * @author  MCD Application Team
  * @brief   Header file of DMA2D HAL module.
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
#ifndef STM32H7xx_HAL_DMA2D_H
#define STM32H7xx_HAL_DMA2D_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal_def.h"

/** @addtogroup STM32H7xx_HAL_Driver
  * @{
  */

#if defined (DMA2D)

/** @addtogroup DMA2D DMA2D
  * @brief DMA2D HAL module driver
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/** @defgroup DMA2D_Exported_Types DMA2D Exported Types
  * @{
  */
#define MAX_DMA2D_LAYER  2U

/**
  * @brief DMA2D CLUT Structure definition
  */
typedef struct
{
  uint32_t *pCLUT;

  uint32_t CLUTColorMode;           /*!< Configures the DMA2D CLUT color mode.
                                         This parameter can be one value of @ref DMA2D_CLUT_CM. */

  uint32_t Size;                    /*!< Configures the DMA2D CLUT size.
                                         This parameter must be a number between Min_Data = 0x00 and Max_Data = 0xFF.*/
} DMA2D_CLUTCfgTypeDef;

/**
  * @brief DMA2D Init structure definition
  */
typedef struct
{
  uint32_t             Mode;               /*!< Configures the DMA2D transfer mode.
                                                This parameter can be one value of @ref DMA2D_Mode. */

  uint32_t             ColorMode;          /*!< Configures the color format of the output image.
                                                This parameter can be one value of @ref DMA2D_Output_Color_Mode. */

  uint32_t             OutputOffset;       /*!< Specifies the Offset value.
                                                This parameter must be a number between
                                                Min_Data = 0x0000 and Max_Data = 0x3FFF. */
  uint32_t             AlphaInverted;     /*!< Select regular or inverted alpha value for the output pixel format converter.
                                               This parameter can be one value of @ref DMA2D_Alpha_Inverted. */

  uint32_t             RedBlueSwap;       /*!< Select regular mode (RGB or ARGB) or swap mode (BGR or ABGR)
                                               for the output pixel format converter.
                                               This parameter can be one value of @ref DMA2D_RB_Swap. */


  uint32_t             BytesSwap;         /*!< Select byte regular mode or bytes swap mode (two by two).
                                               This parameter can be one value of @ref DMA2D_Bytes_Swap. */

  uint32_t             LineOffsetMode;    /*!< Configures how is expressed the line offset for the foreground, background and output.
                                               This parameter can be one value of @ref DMA2D_Line_Offset_Mode. */

} DMA2D_InitTypeDef;


/**
  * @brief DMA2D Layer structure definition
  */
typedef struct
{
  uint32_t             InputOffset;       /*!< Configures the DMA2D foreground or background offset.
                                               This parameter must be a number between
                                               Min_Data = 0x0000 and Max_Data = 0x3FFF. */

  uint32_t             InputColorMode;    /*!< Configures the DMA2D foreground or background color mode.
                                               This parameter can be one value of @ref DMA2D_Input_Color_Mode. */

  uint32_t             AlphaMode;         /*!< Configures the DMA2D foreground or background alpha mode.
                                               This parameter can be one value of @ref DMA2D_Alpha_Mode. */

  uint32_t             InputAlpha;        /*!< Specifies the DMA2D foreground or background alpha value and color value
                                               in case of A8 or A4 color mode.
                                               This parameter must be a number between Min_Data = 0x00
                                               and Max_Data = 0xFF except for the color modes detailed below.
                                               @note In case of A8 or A4 color mode (ARGB),
                                               this parameter must be a number between
                                               Min_Data = 0x00000000 and Max_Data = 0xFFFFFFFF where
                                               - InputAlpha[24:31] is the alpha value ALPHA[0:7]
                                               - InputAlpha[16:23] is the red value RED[0:7]
                                               - InputAlpha[8:15] is the green value GREEN[0:7]
                                               - InputAlpha[0:7] is the blue value BLUE[0:7]. */
  uint32_t             AlphaInverted;     /*!< Select regular or inverted alpha value.
                                               This parameter can be one value of @ref DMA2D_Alpha_Inverted. */

  uint32_t             RedBlueSwap;       /*!< Select regular mode (RGB or ARGB) or swap mode (BGR or ABGR).
                                               This parameter can be one value of @ref DMA2D_RB_Swap. */

  uint32_t             ChromaSubSampling; /*!< Configure the chroma sub-sampling mode for the YCbCr color mode
                                               This parameter can be one value of @ref DMA2D_Chroma_Sub_Sampling */

} DMA2D_LayerCfgTypeDef;

/**
  * @brief  HAL DMA2D State structures definition
  */
typedef enum
{
  HAL_DMA2D_STATE_RESET             = 0x00U,
  HAL_DMA2D_STATE_READY             = 0x01U,
  HAL_DMA2D_STATE_BUSY              = 0x02U,
  HAL_DMA2D_STATE_TIMEOUT           = 0x03U,
  HAL_DMA2D_STATE_ERROR             = 0x04U,
  HAL_DMA2D_STATE_SUSPEND           = 0x05U
} HAL_DMA2D_StateTypeDef;

/**
  * @brief  DMA2D handle Structure definition
  */
typedef struct __DMA2D_HandleTypeDef
{
  DMA2D_TypeDef               *Instance;

  DMA2D_InitTypeDef           Init;

  void (* XferCpltCallback)(struct __DMA2D_HandleTypeDef *hdma2d);

  void (* XferErrorCallback)(struct __DMA2D_HandleTypeDef *hdma2d);

#if (USE_HAL_DMA2D_REGISTER_CALLBACKS == 1)
  void (* LineEventCallback)(struct __DMA2D_HandleTypeDef *hdma2d);

  void (* CLUTLoadingCpltCallback)(struct __DMA2D_HandleTypeDef *hdma2d);

  void (* MspInitCallback)(struct __DMA2D_HandleTypeDef *hdma2d);

  void (* MspDeInitCallback)(struct __DMA2D_HandleTypeDef *hdma2d);

#endif /* (USE_HAL_DMA2D_REGISTER_CALLBACKS) */

  DMA2D_LayerCfgTypeDef       LayerCfg[MAX_DMA2D_LAYER];

  HAL_LockTypeDef             Lock;

  __IO HAL_DMA2D_StateTypeDef State;

  __IO uint32_t               ErrorCode;
} DMA2D_HandleTypeDef;

#if (USE_HAL_DMA2D_REGISTER_CALLBACKS == 1)
/**
  * @brief  HAL DMA2D Callback pointer definition
  */
typedef void (*pDMA2D_CallbackTypeDef)(DMA2D_HandleTypeDef *hdma2d);
#endif /* USE_HAL_DMA2D_REGISTER_CALLBACKS */
/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup DMA2D_Exported_Constants DMA2D Exported Constants
  * @{
  */

/** @defgroup DMA2D_Error_Code DMA2D Error Code
  * @{
  */
#define HAL_DMA2D_ERROR_NONE        0x00000000U
#define HAL_DMA2D_ERROR_TE          0x00000001U
#define HAL_DMA2D_ERROR_CE          0x00000002U
#define HAL_DMA2D_ERROR_CAE         0x00000004U
#define HAL_DMA2D_ERROR_TIMEOUT     0x00000020U
#if (USE_HAL_DMA2D_REGISTER_CALLBACKS == 1)
#define HAL_DMA2D_ERROR_INVALID_CALLBACK 0x00000040U
#endif /* USE_HAL_UART_REGISTER_CALLBACKS */

/**
  * @}
  */

/** @defgroup DMA2D_Mode DMA2D Mode
  * @{
  */
#define DMA2D_M2M                   0x00000000U
#define DMA2D_M2M_PFC               DMA2D_CR_MODE_0
#define DMA2D_M2M_BLEND             DMA2D_CR_MODE_1
#define DMA2D_R2M                   (DMA2D_CR_MODE_1 | DMA2D_CR_MODE_0)
#define DMA2D_M2M_BLEND_FG          DMA2D_CR_MODE_2
#define DMA2D_M2M_BLEND_BG          (DMA2D_CR_MODE_2 | DMA2D_CR_MODE_0)
/**
  * @}
  */

/** @defgroup DMA2D_Output_Color_Mode DMA2D Output Color Mode
  * @{
  */
#define DMA2D_OUTPUT_ARGB8888       0x00000000U
#define DMA2D_OUTPUT_RGB888         DMA2D_OPFCCR_CM_0
#define DMA2D_OUTPUT_RGB565         DMA2D_OPFCCR_CM_1
#define DMA2D_OUTPUT_ARGB1555       (DMA2D_OPFCCR_CM_0|DMA2D_OPFCCR_CM_1)
#define DMA2D_OUTPUT_ARGB4444       DMA2D_OPFCCR_CM_2
/**
  * @}
  */

/** @defgroup DMA2D_Input_Color_Mode DMA2D Input Color Mode
  * @{
  */
#define DMA2D_INPUT_ARGB8888        0x00000000U
#define DMA2D_INPUT_RGB888          0x00000001U
#define DMA2D_INPUT_RGB565          0x00000002U
#define DMA2D_INPUT_ARGB1555        0x00000003U
#define DMA2D_INPUT_ARGB4444        0x00000004U
#define DMA2D_INPUT_L8              0x00000005U
#define DMA2D_INPUT_AL44            0x00000006U
#define DMA2D_INPUT_AL88            0x00000007U
#define DMA2D_INPUT_L4              0x00000008U
#define DMA2D_INPUT_A8              0x00000009U
#define DMA2D_INPUT_A4              0x0000000AU
#define DMA2D_INPUT_YCBCR           0x0000000BU
/**
  * @}
  */

/** @defgroup DMA2D_Alpha_Mode DMA2D Alpha Mode
  * @{
  */
#define DMA2D_NO_MODIF_ALPHA        0x00000000U
#define DMA2D_REPLACE_ALPHA         0x00000001U
#define DMA2D_COMBINE_ALPHA         0x00000002U  /*!< Replace original alpha channel value by programmed alpha value
                                                      with original alpha channel value                              */
/**
  * @}
  */

/** @defgroup DMA2D_Alpha_Inverted DMA2D Alpha Inversion
  * @{
  */
#define DMA2D_REGULAR_ALPHA         0x00000000U
#define DMA2D_INVERTED_ALPHA        0x00000001U
/**
  * @}
  */

/** @defgroup DMA2D_RB_Swap DMA2D Red and Blue Swap
  * @{
  */
#define DMA2D_RB_REGULAR            0x00000000U
#define DMA2D_RB_SWAP               0x00000001U
/**
  * @}
  */



/** @defgroup DMA2D_Line_Offset_Mode DMA2D Line Offset Mode
  * @{
  */
#define DMA2D_LOM_PIXELS            0x00000000U
#define DMA2D_LOM_BYTES             DMA2D_CR_LOM
/**
  * @}
  */

/** @defgroup DMA2D_Bytes_Swap DMA2D Bytes Swap
  * @{
  */
#define DMA2D_BYTES_REGULAR         0x00000000U
#define DMA2D_BYTES_SWAP            DMA2D_OPFCCR_SB
/**
  * @}
  */

/** @defgroup DMA2D_Chroma_Sub_Sampling DMA2D Chroma Sub Sampling
  * @{
  */
#define DMA2D_NO_CSS               0x00000000U
#define DMA2D_CSS_422              0x00000001U
#define DMA2D_CSS_420              0x00000002U
/**
  * @}
  */

/** @defgroup DMA2D_CLUT_CM DMA2D CLUT Color Mode
  * @{
  */
#define DMA2D_CCM_ARGB8888          0x00000000U
#define DMA2D_CCM_RGB888            0x00000001U
/**
  * @}
  */

/** @defgroup DMA2D_Interrupts DMA2D Interrupts
  * @{
  */
#define DMA2D_IT_CE                 DMA2D_CR_CEIE
#define DMA2D_IT_CTC                DMA2D_CR_CTCIE
#define DMA2D_IT_CAE                DMA2D_CR_CAEIE
#define DMA2D_IT_TW                 DMA2D_CR_TWIE
#define DMA2D_IT_TC                 DMA2D_CR_TCIE
#define DMA2D_IT_TE                 DMA2D_CR_TEIE
/**
  * @}
  */

/** @defgroup DMA2D_Flags DMA2D Flags
  * @{
  */
#define DMA2D_FLAG_CE               DMA2D_ISR_CEIF
#define DMA2D_FLAG_CTC              DMA2D_ISR_CTCIF
#define DMA2D_FLAG_CAE              DMA2D_ISR_CAEIF
#define DMA2D_FLAG_TW               DMA2D_ISR_TWIF
#define DMA2D_FLAG_TC               DMA2D_ISR_TCIF
#define DMA2D_FLAG_TE               DMA2D_ISR_TEIF
/**
  * @}
  */

#if (USE_HAL_DMA2D_REGISTER_CALLBACKS == 1)
/**
  * @brief  HAL DMA2D common Callback ID enumeration definition
  */
typedef enum
{
  HAL_DMA2D_MSPINIT_CB_ID           = 0x00U,
  HAL_DMA2D_MSPDEINIT_CB_ID         = 0x01U,
  HAL_DMA2D_TRANSFERCOMPLETE_CB_ID  = 0x02U,
  HAL_DMA2D_TRANSFERERROR_CB_ID     = 0x03U,
  HAL_DMA2D_LINEEVENT_CB_ID         = 0x04U,
  HAL_DMA2D_CLUTLOADINGCPLT_CB_ID   = 0x05U,
} HAL_DMA2D_CallbackIDTypeDef;
#endif /* USE_HAL_DMA2D_REGISTER_CALLBACKS */


/**
  * @}
  */
/* Exported macros ------------------------------------------------------------*/
/** @defgroup DMA2D_Exported_Macros DMA2D Exported Macros
  * @{
  */

/** @brief Reset DMA2D handle state
  * @param  __HANDLE__ specifies the DMA2D handle.
  * @retval None
  */
#if (USE_HAL_DMA2D_REGISTER_CALLBACKS == 1)
#define __HAL_DMA2D_RESET_HANDLE_STATE(__HANDLE__) do{                                             \
                                                       (__HANDLE__)->State = HAL_DMA2D_STATE_RESET;\
                                                       (__HANDLE__)->MspInitCallback = NULL;       \
                                                       (__HANDLE__)->MspDeInitCallback = NULL;     \
                                                     }while(0)
#else
#define __HAL_DMA2D_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_DMA2D_STATE_RESET)
#endif /* USE_HAL_DMA2D_REGISTER_CALLBACKS */


/**
  * @brief  Enable the DMA2D.
  * @param  __HANDLE__ DMA2D handle
  * @retval None.
  */
#define __HAL_DMA2D_ENABLE(__HANDLE__)        ((__HANDLE__)->Instance->CR |= DMA2D_CR_START)


/* Interrupt & Flag management */
/**
  * @brief  Get the DMA2D pending flags.
  * @param  __HANDLE__ DMA2D handle
  * @param  __FLAG__ flag to check.
  *          This parameter can be any combination of the following values:
  *            @arg DMA2D_FLAG_CE:  Configuration error flag
  *            @arg DMA2D_FLAG_CTC: CLUT transfer complete flag
  *            @arg DMA2D_FLAG_CAE: CLUT access error flag
  *            @arg DMA2D_FLAG_TW:  Transfer Watermark flag
  *            @arg DMA2D_FLAG_TC:  Transfer complete flag
  *            @arg DMA2D_FLAG_TE:  Transfer error flag
  * @retval The state of FLAG.
  */
#define __HAL_DMA2D_GET_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->ISR & (__FLAG__))

/**
  * @brief  Clear the DMA2D pending flags.
  * @param  __HANDLE__ DMA2D handle
  * @param  __FLAG__ specifies the flag to clear.
  *          This parameter can be any combination of the following values:
  *            @arg DMA2D_FLAG_CE:  Configuration error flag
  *            @arg DMA2D_FLAG_CTC: CLUT transfer complete flag
  *            @arg DMA2D_FLAG_CAE: CLUT access error flag
  *            @arg DMA2D_FLAG_TW:  Transfer Watermark flag
  *            @arg DMA2D_FLAG_TC:  Transfer complete flag
  *            @arg DMA2D_FLAG_TE:  Transfer error flag
  * @retval None
  */
#define __HAL_DMA2D_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->IFCR = (__FLAG__))

/**
  * @brief  Enable the specified DMA2D interrupts.
  * @param  __HANDLE__ DMA2D handle
  * @param __INTERRUPT__ specifies the DMA2D interrupt sources to be enabled.
  *          This parameter can be any combination of the following values:
  *            @arg DMA2D_IT_CE:  Configuration error interrupt mask
  *            @arg DMA2D_IT_CTC: CLUT transfer complete interrupt mask
  *            @arg DMA2D_IT_CAE: CLUT access error interrupt mask
  *            @arg DMA2D_IT_TW:  Transfer Watermark interrupt mask
  *            @arg DMA2D_IT_TC:  Transfer complete interrupt mask
  *            @arg DMA2D_IT_TE:  Transfer error interrupt mask
  * @retval None
  */
#define __HAL_DMA2D_ENABLE_IT(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->CR |= (__INTERRUPT__))

/**
  * @brief  Disable the specified DMA2D interrupts.
  * @param  __HANDLE__ DMA2D handle
  * @param __INTERRUPT__ specifies the DMA2D interrupt sources to be disabled.
  *          This parameter can be any combination of the following values:
  *            @arg DMA2D_IT_CE:  Configuration error interrupt mask
  *            @arg DMA2D_IT_CTC: CLUT transfer complete interrupt mask
  *            @arg DMA2D_IT_CAE: CLUT access error interrupt mask
  *            @arg DMA2D_IT_TW:  Transfer Watermark interrupt mask
  *            @arg DMA2D_IT_TC:  Transfer complete interrupt mask
  *            @arg DMA2D_IT_TE:  Transfer error interrupt mask
  * @retval None
  */
#define __HAL_DMA2D_DISABLE_IT(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->CR &= ~(__INTERRUPT__))

/**
  * @brief  Check whether the specified DMA2D interrupt source is enabled or not.
  * @param  __HANDLE__ DMA2D handle
  * @param  __INTERRUPT__ specifies the DMA2D interrupt source to check.
  *          This parameter can be one of the following values:
  *            @arg DMA2D_IT_CE:  Configuration error interrupt mask
  *            @arg DMA2D_IT_CTC: CLUT transfer complete interrupt mask
  *            @arg DMA2D_IT_CAE: CLUT access error interrupt mask
  *            @arg DMA2D_IT_TW:  Transfer Watermark interrupt mask
  *            @arg DMA2D_IT_TC:  Transfer complete interrupt mask
  *            @arg DMA2D_IT_TE:  Transfer error interrupt mask
  * @retval The state of INTERRUPT source.
  */
#define __HAL_DMA2D_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->CR & (__INTERRUPT__))

/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/
/** @addtogroup DMA2D_Exported_Functions DMA2D Exported Functions
  * @{
  */

/** @addtogroup DMA2D_Exported_Functions_Group1 Initialization and de-initialization functions
  * @{
  */

/* Initialization and de-initialization functions *******************************/
HAL_StatusTypeDef HAL_DMA2D_Init(DMA2D_HandleTypeDef *hdma2d);
HAL_StatusTypeDef HAL_DMA2D_DeInit(DMA2D_HandleTypeDef *hdma2d);
void              HAL_DMA2D_MspInit(DMA2D_HandleTypeDef *hdma2d);
void              HAL_DMA2D_MspDeInit(DMA2D_HandleTypeDef *hdma2d);
/* Callbacks Register/UnRegister functions  ***********************************/
#if (USE_HAL_DMA2D_REGISTER_CALLBACKS == 1)
HAL_StatusTypeDef HAL_DMA2D_RegisterCallback(DMA2D_HandleTypeDef *hdma2d, HAL_DMA2D_CallbackIDTypeDef CallbackID,
                                             pDMA2D_CallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_DMA2D_UnRegisterCallback(DMA2D_HandleTypeDef *hdma2d, HAL_DMA2D_CallbackIDTypeDef CallbackID);
#endif /* USE_HAL_DMA2D_REGISTER_CALLBACKS */

/**
  * @}
  */


/** @addtogroup DMA2D_Exported_Functions_Group2 IO operation functions
  * @{
  */

/* IO operation functions *******************************************************/
HAL_StatusTypeDef HAL_DMA2D_Start(DMA2D_HandleTypeDef *hdma2d, uint32_t pdata, uint32_t DstAddress, uint32_t Width,
                                  uint32_t Height);
HAL_StatusTypeDef HAL_DMA2D_BlendingStart(DMA2D_HandleTypeDef *hdma2d, uint32_t SrcAddress1, uint32_t SrcAddress2,
                                          uint32_t DstAddress, uint32_t Width,  uint32_t Height);
HAL_StatusTypeDef HAL_DMA2D_Start_IT(DMA2D_HandleTypeDef *hdma2d, uint32_t pdata, uint32_t DstAddress, uint32_t Width,
                                     uint32_t Height);
HAL_StatusTypeDef HAL_DMA2D_BlendingStart_IT(DMA2D_HandleTypeDef *hdma2d, uint32_t SrcAddress1, uint32_t SrcAddress2,
                                             uint32_t DstAddress, uint32_t Width, uint32_t Height);
HAL_StatusTypeDef HAL_DMA2D_Suspend(DMA2D_HandleTypeDef *hdma2d);
HAL_StatusTypeDef HAL_DMA2D_Resume(DMA2D_HandleTypeDef *hdma2d);
HAL_StatusTypeDef HAL_DMA2D_Abort(DMA2D_HandleTypeDef *hdma2d);
HAL_StatusTypeDef HAL_DMA2D_EnableCLUT(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_CLUTStartLoad(DMA2D_HandleTypeDef *hdma2d, const DMA2D_CLUTCfgTypeDef *CLUTCfg,
                                          uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_CLUTStartLoad_IT(DMA2D_HandleTypeDef *hdma2d, const DMA2D_CLUTCfgTypeDef *CLUTCfg,
                                             uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_CLUTLoad(DMA2D_HandleTypeDef *hdma2d, DMA2D_CLUTCfgTypeDef CLUTCfg, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_CLUTLoad_IT(DMA2D_HandleTypeDef *hdma2d, DMA2D_CLUTCfgTypeDef CLUTCfg, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_CLUTLoading_Abort(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_CLUTLoading_Suspend(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_CLUTLoading_Resume(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_PollForTransfer(DMA2D_HandleTypeDef *hdma2d, uint32_t Timeout);
void              HAL_DMA2D_IRQHandler(DMA2D_HandleTypeDef *hdma2d);
void              HAL_DMA2D_LineEventCallback(DMA2D_HandleTypeDef *hdma2d);
void              HAL_DMA2D_CLUTLoadingCpltCallback(DMA2D_HandleTypeDef *hdma2d);

/**
  * @}
  */

/** @addtogroup DMA2D_Exported_Functions_Group3 Peripheral Control functions
  * @{
  */

/* Peripheral Control functions *************************************************/
HAL_StatusTypeDef HAL_DMA2D_ConfigLayer(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_ConfigCLUT(DMA2D_HandleTypeDef *hdma2d, DMA2D_CLUTCfgTypeDef CLUTCfg, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_ProgramLineEvent(DMA2D_HandleTypeDef *hdma2d, uint32_t Line);
HAL_StatusTypeDef HAL_DMA2D_EnableDeadTime(DMA2D_HandleTypeDef *hdma2d);
HAL_StatusTypeDef HAL_DMA2D_DisableDeadTime(DMA2D_HandleTypeDef *hdma2d);
HAL_StatusTypeDef HAL_DMA2D_ConfigDeadTime(DMA2D_HandleTypeDef *hdma2d, uint8_t DeadTime);

/**
  * @}
  */

/** @addtogroup DMA2D_Exported_Functions_Group4 Peripheral State and Error functions
  * @{
  */

/* Peripheral State functions ***************************************************/
HAL_DMA2D_StateTypeDef HAL_DMA2D_GetState(const DMA2D_HandleTypeDef *hdma2d);
uint32_t               HAL_DMA2D_GetError(const DMA2D_HandleTypeDef *hdma2d);

/**
  * @}
  */

/**
  * @}
  */

/* Private constants ---------------------------------------------------------*/

/** @addtogroup DMA2D_Private_Constants DMA2D Private Constants
  * @{
  */

/** @defgroup DMA2D_Maximum_Line_WaterMark DMA2D Maximum Line Watermark
  * @{
  */
#define DMA2D_LINE_WATERMARK_MAX            DMA2D_LWR_LW
/**
  * @}
  */

/** @defgroup DMA2D_Color_Value DMA2D Color Value
  * @{
  */
#define DMA2D_COLOR_VALUE                 0x000000FFU
/**
  * @}
  */

/** @defgroup DMA2D_Max_Layer DMA2D Maximum Number of Layers
  * @{
  */
#define DMA2D_MAX_LAYER         2U
/**
  * @}
  */

/** @defgroup DMA2D_Layers DMA2D Layers
  * @{
  */
#define DMA2D_BACKGROUND_LAYER             0x00000000U
#define DMA2D_FOREGROUND_LAYER             0x00000001U
/**
  * @}
  */

/** @defgroup DMA2D_Offset DMA2D Offset
  * @{
  */
#define DMA2D_OFFSET                DMA2D_FGOR_LO
/**
  * @}
  */

/** @defgroup DMA2D_Size DMA2D Size
  * @{
  */
#define DMA2D_PIXEL                 (DMA2D_NLR_PL >> 16U)
#define DMA2D_LINE                  DMA2D_NLR_NL
/**
  * @}
  */

/** @defgroup DMA2D_CLUT_Size DMA2D CLUT Size
  * @{
  */
#define DMA2D_CLUT_SIZE             (DMA2D_FGPFCCR_CS >> 8U)
/**
  * @}
  */

/**
  * @}
  */


/* Private macros ------------------------------------------------------------*/
/** @defgroup DMA2D_Private_Macros DMA2D Private Macros
  * @{
  */
#define IS_DMA2D_LAYER(LAYER)                 (((LAYER) == DMA2D_BACKGROUND_LAYER)\
                                               || ((LAYER) == DMA2D_FOREGROUND_LAYER))

#define IS_DMA2D_MODE(MODE)                   (((MODE) == DMA2D_M2M)          || ((MODE) == DMA2D_M2M_PFC) || \
                                               ((MODE) == DMA2D_M2M_BLEND)    || ((MODE) == DMA2D_R2M)     || \
                                               ((MODE) == DMA2D_M2M_BLEND_FG) || ((MODE) == DMA2D_M2M_BLEND_BG))

#define IS_DMA2D_CMODE(MODE_ARGB)             (((MODE_ARGB) == DMA2D_OUTPUT_ARGB8888) || \
                                               ((MODE_ARGB) == DMA2D_OUTPUT_RGB888)   || \
                                               ((MODE_ARGB) == DMA2D_OUTPUT_RGB565)   || \
                                               ((MODE_ARGB) == DMA2D_OUTPUT_ARGB1555) || \
                                               ((MODE_ARGB) == DMA2D_OUTPUT_ARGB4444))

#define IS_DMA2D_COLOR(COLOR)                 ((COLOR) <= DMA2D_COLOR_VALUE)
#define IS_DMA2D_LINE(LINE)                   ((LINE) <= DMA2D_LINE)
#define IS_DMA2D_PIXEL(PIXEL)                 ((PIXEL) <= DMA2D_PIXEL)
#define IS_DMA2D_OFFSET(OOFFSET)              ((OOFFSET) <= DMA2D_OFFSET)

#define IS_DMA2D_INPUT_COLOR_MODE(INPUT_CM)   (((INPUT_CM) == DMA2D_INPUT_ARGB8888) || \
                                               ((INPUT_CM) == DMA2D_INPUT_RGB888)   || \
                                               ((INPUT_CM) == DMA2D_INPUT_RGB565)   || \
                                               ((INPUT_CM) == DMA2D_INPUT_ARGB1555) || \
                                               ((INPUT_CM) == DMA2D_INPUT_ARGB4444) || \
                                               ((INPUT_CM) == DMA2D_INPUT_L8)       || \
                                               ((INPUT_CM) == DMA2D_INPUT_AL44)     || \
                                               ((INPUT_CM) == DMA2D_INPUT_AL88)     || \
                                               ((INPUT_CM) == DMA2D_INPUT_L4)       || \
                                               ((INPUT_CM) == DMA2D_INPUT_A8)       || \
                                               ((INPUT_CM) == DMA2D_INPUT_A4)       || \
                                               ((INPUT_CM) == DMA2D_INPUT_YCBCR))

#define IS_DMA2D_ALPHA_MODE(AlphaMode)        (((AlphaMode) == DMA2D_NO_MODIF_ALPHA) || \
                                               ((AlphaMode) == DMA2D_REPLACE_ALPHA)  || \
                                               ((AlphaMode) == DMA2D_COMBINE_ALPHA))

#define IS_DMA2D_ALPHA_INVERTED(Alpha_Inverted) (((Alpha_Inverted) == DMA2D_REGULAR_ALPHA) || \
                                                 ((Alpha_Inverted) == DMA2D_INVERTED_ALPHA))

#define IS_DMA2D_RB_SWAP(RB_Swap) (((RB_Swap) == DMA2D_RB_REGULAR) || \
                                   ((RB_Swap) == DMA2D_RB_SWAP))

#define IS_DMA2D_LOM_MODE(LOM)          (((LOM) == DMA2D_LOM_PIXELS) || \
                                         ((LOM) == DMA2D_LOM_BYTES))

#define IS_DMA2D_BYTES_SWAP(BYTES_SWAP) (((BYTES_SWAP) == DMA2D_BYTES_REGULAR) || \
                                         ((BYTES_SWAP) == DMA2D_BYTES_SWAP))

#define IS_DMA2D_CHROMA_SUB_SAMPLING(CSS) (((CSS) == DMA2D_NO_CSS)  || \
                                           ((CSS) == DMA2D_CSS_422) || \
                                           ((CSS) == DMA2D_CSS_420))

#define IS_DMA2D_CLUT_CM(CLUT_CM)             (((CLUT_CM) == DMA2D_CCM_ARGB8888) || ((CLUT_CM) == DMA2D_CCM_RGB888))
#define IS_DMA2D_CLUT_SIZE(CLUT_SIZE)         ((CLUT_SIZE) <= DMA2D_CLUT_SIZE)
#define IS_DMA2D_LINEWATERMARK(LineWatermark) ((LineWatermark) <= DMA2D_LINE_WATERMARK_MAX)
#define IS_DMA2D_IT(IT)                       (((IT) == DMA2D_IT_CTC) || ((IT) == DMA2D_IT_CAE) || \
                                               ((IT) == DMA2D_IT_TW)  || ((IT) == DMA2D_IT_TC)  || \
                                               ((IT) == DMA2D_IT_TE)  || ((IT) == DMA2D_IT_CE))
#define IS_DMA2D_GET_FLAG(FLAG)               (((FLAG) == DMA2D_FLAG_CTC) || ((FLAG) == DMA2D_FLAG_CAE) || \
                                               ((FLAG) == DMA2D_FLAG_TW)  || ((FLAG) == DMA2D_FLAG_TC)  || \
                                               ((FLAG) == DMA2D_FLAG_TE)  || ((FLAG) == DMA2D_FLAG_CE))
/**
  * @}
  */

/**
  * @}
  */

#endif /* defined (DMA2D) */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* STM32H7xx_HAL_DMA2D_H */
