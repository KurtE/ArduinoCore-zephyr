/**
  ******************************************************************************
  * @file    stm32h7xx_hal_gpio_ex.h
  * @author  MCD Application Team
  * @brief   Header file of GPIO HAL Extension module.
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
#ifndef STM32H7xx_HAL_GPIO_EX_H
#define STM32H7xx_HAL_GPIO_EX_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal_def.h"

/** @addtogroup STM32H7xx_HAL_Driver
  * @{
  */

/** @addtogroup GPIOEx GPIOEx
  * @{
  */

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/
/** @defgroup GPIOEx_Exported_Constants GPIO Exported Constants
  * @{
  */

/** @defgroup GPIO_Alternate_function_selection GPIO Alternate Function Selection
  * @{
  */

/**
  * @brief   AF 0 selection
  */
#define GPIO_AF0_RTC_50Hz      ((uint8_t)0x00)
#define GPIO_AF0_MCO           ((uint8_t)0x00)
#define GPIO_AF0_SWJ           ((uint8_t)0x00)
#define GPIO_AF0_LCDBIAS       ((uint8_t)0x00)
#define GPIO_AF0_TRACE         ((uint8_t)0x00)
#if defined(PWR_CPUCR_RETDS_CD) /* CPU domain power down Deepsleep */
#define GPIO_AF0_CSLEEP        ((uint8_t)0x00)
#define GPIO_AF0_CSTOP         ((uint8_t)0x00)
#define GPIO_AF0_NDSTOP2       ((uint8_t)0x00)
#endif /* PWR_CPUCR_RETDS_CD */
#if defined(PWR_CPUCR_PDDS_D2) /* PWR D1 and D2 domains exists */
#define GPIO_AF0_C1DSLEEP      ((uint8_t)0x00)
#define GPIO_AF0_C1SLEEP       ((uint8_t)0x00)
#define GPIO_AF0_D1PWREN       ((uint8_t)0x00)
#define GPIO_AF0_D2PWREN       ((uint8_t)0x00)
#if defined(DUAL_CORE)
#define GPIO_AF0_C2DSLEEP      ((uint8_t)0x00)
#define GPIO_AF0_C2SLEEP       ((uint8_t)0x00)
#endif /* DUAL_CORE */
#endif /* PWR_CPUCR_PDDS_D2 */

/**
  * @brief   AF 1 selection
  */
#define GPIO_AF1_TIM1          ((uint8_t)0x01)
#define GPIO_AF1_TIM2          ((uint8_t)0x01)
#define GPIO_AF1_TIM16         ((uint8_t)0x01)
#define GPIO_AF1_TIM17         ((uint8_t)0x01)
#define GPIO_AF1_LPTIM1        ((uint8_t)0x01)
#if defined(HRTIM1)
#define GPIO_AF1_HRTIM1        ((uint8_t)0x01)
#endif /* HRTIM1 */
#if defined(SAI4)
#define GPIO_AF1_SAI4          ((uint8_t)0x01)
#endif /* SAI4 */
#define GPIO_AF1_FMC           ((uint8_t)0x01)


/**
  * @brief   AF 2 selection
  */
#define GPIO_AF2_TIM3          ((uint8_t)0x02)
#define GPIO_AF2_TIM4          ((uint8_t)0x02)
#define GPIO_AF2_TIM5          ((uint8_t)0x02)
#define GPIO_AF2_TIM12         ((uint8_t)0x02)
#define GPIO_AF2_SAI1          ((uint8_t)0x02)
#if defined(HRTIM1)
#define GPIO_AF2_HRTIM1        ((uint8_t)0x02)
#endif /* HRTIM1 */
#define GPIO_AF2_TIM15         ((uint8_t)0x02)
#if defined(FDCAN3)
#define GPIO_AF2_FDCAN3        ((uint8_t)0x02)
#endif /*FDCAN3*/

/**
  * @brief   AF 3 selection
  */
#define GPIO_AF3_TIM8          ((uint8_t)0x03)
#define GPIO_AF3_LPTIM2        ((uint8_t)0x03)
#define GPIO_AF3_DFSDM1        ((uint8_t)0x03)
#define GPIO_AF3_LPTIM3        ((uint8_t)0x03)
#define GPIO_AF3_LPTIM4        ((uint8_t)0x03)
#define GPIO_AF3_LPTIM5        ((uint8_t)0x03)
#define GPIO_AF3_LPUART        ((uint8_t)0x03)
#if defined(OCTOSPIM)
#define GPIO_AF3_OCTOSPIM_P1   ((uint8_t)0x03)
#define GPIO_AF3_OCTOSPIM_P2   ((uint8_t)0x03)
#endif /* OCTOSPIM */
#if defined(HRTIM1)
#define GPIO_AF3_HRTIM1        ((uint8_t)0x03)
#endif /* HRTIM1 */
#define GPIO_AF3_LTDC          ((uint8_t)0x03)

/**
  * @brief   AF 4 selection
  */
#define GPIO_AF4_I2C1          ((uint8_t)0x04)
#define GPIO_AF4_I2C2          ((uint8_t)0x04)
#define GPIO_AF4_I2C3          ((uint8_t)0x04)
#define GPIO_AF4_I2C4          ((uint8_t)0x04)
#if defined(I2C5)
#define GPIO_AF4_I2C5          ((uint8_t)0x04)
#endif /* I2C5*/
#define GPIO_AF4_TIM15         ((uint8_t)0x04)
#define GPIO_AF4_CEC           ((uint8_t)0x04)
#define GPIO_AF4_LPTIM2        ((uint8_t)0x04)
#define GPIO_AF4_USART1        ((uint8_t)0x04)
#if defined(USART10)
#define GPIO_AF4_USART10       ((uint8_t)0x04)
#endif /*USART10*/
#define GPIO_AF4_DFSDM1        ((uint8_t)0x04)
#if defined(DFSDM2_BASE)
#define GPIO_AF4_DFSDM2        ((uint8_t)0x04)
#endif /* DFSDM2_BASE */
#define GPIO_AF4_DCMI          ((uint8_t)0x04)
#if defined(PSSI)
#define GPIO_AF4_PSSI          ((uint8_t)0x04)
#endif /* PSSI */
#if defined(OCTOSPIM)
#define GPIO_AF4_OCTOSPIM_P1   ((uint8_t)0x04)
#endif /* OCTOSPIM */

/**
  * @brief   AF 5 selection
  */
#define GPIO_AF5_SPI1          ((uint8_t)0x05)
#define GPIO_AF5_SPI2          ((uint8_t)0x05)
#define GPIO_AF5_SPI3          ((uint8_t)0x05)
#define GPIO_AF5_SPI4          ((uint8_t)0x05)
#define GPIO_AF5_SPI5          ((uint8_t)0x05)
#define GPIO_AF5_SPI6          ((uint8_t)0x05)
#define GPIO_AF5_CEC           ((uint8_t)0x05)
#if defined(FDCAN3)
#define GPIO_AF5_FDCAN3        ((uint8_t)0x05)
#endif /*FDCAN3*/

/**
  * @brief   AF 6 selection
  */
#define GPIO_AF6_SPI2          ((uint8_t)0x06)
#define GPIO_AF6_SPI3          ((uint8_t)0x06)
#define GPIO_AF6_SAI1          ((uint8_t)0x06)
#define GPIO_AF6_I2C4          ((uint8_t)0x06)
#if defined(I2C5)
#define GPIO_AF6_I2C5          ((uint8_t)0x06)
#endif /* I2C5*/
#define GPIO_AF6_DFSDM1        ((uint8_t)0x06)
#define GPIO_AF6_UART4         ((uint8_t)0x06)
#if defined(DFSDM2_BASE)
#define GPIO_AF6_DFSDM2        ((uint8_t)0x06)
#endif /* DFSDM2_BASE */
#if defined(SAI3)
#define GPIO_AF6_SAI3          ((uint8_t)0x06)
#endif /* SAI3 */
#if defined(OCTOSPIM)
#define GPIO_AF6_OCTOSPIM_P1   ((uint8_t)0x06)
#endif /* OCTOSPIM */

/**
  * @brief   AF 7 selection
  */
#define GPIO_AF7_SPI2          ((uint8_t)0x07)
#define GPIO_AF7_SPI3          ((uint8_t)0x07)
#define GPIO_AF7_SPI6          ((uint8_t)0x07)
#define GPIO_AF7_USART1        ((uint8_t)0x07)
#define GPIO_AF7_USART2        ((uint8_t)0x07)
#define GPIO_AF7_USART3        ((uint8_t)0x07)
#define GPIO_AF7_USART6        ((uint8_t)0x07)
#define GPIO_AF7_UART7         ((uint8_t)0x07)
#define GPIO_AF7_SDMMC1        ((uint8_t)0x07)

/**
  * @brief   AF 8 selection
  */
#define GPIO_AF8_SPI6          ((uint8_t)0x08)
#if defined(SAI2)
#define GPIO_AF8_SAI2          ((uint8_t)0x08)
#endif /*SAI2*/
#define GPIO_AF8_UART4         ((uint8_t)0x08)
#define GPIO_AF8_UART5         ((uint8_t)0x08)
#define GPIO_AF8_UART8         ((uint8_t)0x08)
#define GPIO_AF8_SPDIF         ((uint8_t)0x08)
#define GPIO_AF8_LPUART        ((uint8_t)0x08)
#define GPIO_AF8_SDMMC1        ((uint8_t)0x08)
#if defined(SAI4)
#define GPIO_AF8_SAI4          ((uint8_t)0x08)
#endif /* SAI4 */

/**
  * @brief   AF 9 selection
  */
#define GPIO_AF9_FDCAN1        ((uint8_t)0x09)
#define GPIO_AF9_FDCAN2        ((uint8_t)0x09)
#define GPIO_AF9_TIM13         ((uint8_t)0x09)
#define GPIO_AF9_TIM14         ((uint8_t)0x09)
#define GPIO_AF9_SDMMC2        ((uint8_t)0x09)
#define GPIO_AF9_LTDC          ((uint8_t)0x09)
#define GPIO_AF9_SPDIF         ((uint8_t)0x09)
#define GPIO_AF9_FMC           ((uint8_t)0x09)
#if defined(QUADSPI)
#define GPIO_AF9_QUADSPI       ((uint8_t)0x09)
#endif /* QUADSPI */
#if defined(SAI4)
#define GPIO_AF9_SAI4          ((uint8_t)0x09)
#endif /* SAI4 */
#if defined(OCTOSPIM)
#define GPIO_AF9_OCTOSPIM_P1   ((uint8_t)0x09)
#define GPIO_AF9_OCTOSPIM_P2   ((uint8_t)0x09)
#endif /* OCTOSPIM */

/**
  * @brief   AF 10 selection
  */
#if defined(SAI2)
#define GPIO_AF10_SAI2          ((uint8_t)0x0A)
#endif /*SAI2*/
#define GPIO_AF10_SDMMC2        ((uint8_t)0x0A)
#if defined(USB2_OTG_FS)
#define GPIO_AF10_OTG2_FS       ((uint8_t)0x0A)
#endif /*USB2_OTG_FS*/
#define GPIO_AF10_COMP1         ((uint8_t)0x0A)
#define GPIO_AF10_COMP2         ((uint8_t)0x0A)
#if defined(LTDC)
#define GPIO_AF10_LTDC          ((uint8_t)0x0A)
#endif /*LTDC*/
#define GPIO_AF10_CRS_SYNC      ((uint8_t)0x0A)
#if defined(QUADSPI)
#define GPIO_AF10_QUADSPI       ((uint8_t)0x0A)
#endif /* QUADSPI */
#if defined(SAI4)
#define GPIO_AF10_SAI4          ((uint8_t)0x0A)
#endif /* SAI4 */
#if !defined(USB2_OTG_FS)
#define GPIO_AF10_OTG1_FS       ((uint8_t)0x0A)
#endif /* !USB2_OTG_FS */
#define GPIO_AF10_OTG1_HS       ((uint8_t)0x0A)
#if defined(OCTOSPIM)
#define GPIO_AF10_OCTOSPIM_P1   ((uint8_t)0x0A)
#endif /* OCTOSPIM */
#define GPIO_AF10_TIM8          ((uint8_t)0x0A)
#define GPIO_AF10_FMC           ((uint8_t)0x0A)

/**
  * @brief   AF 11 selection
  */
#define GPIO_AF11_SWP           ((uint8_t)0x0B)
#define GPIO_AF11_MDIOS         ((uint8_t)0x0B)
#define GPIO_AF11_UART7         ((uint8_t)0x0B)
#define GPIO_AF11_SDMMC2        ((uint8_t)0x0B)
#define GPIO_AF11_DFSDM1        ((uint8_t)0x0B)
#define GPIO_AF11_COMP1         ((uint8_t)0x0B)
#define GPIO_AF11_COMP2         ((uint8_t)0x0B)
#define GPIO_AF11_TIM1          ((uint8_t)0x0B)
#define GPIO_AF11_TIM8          ((uint8_t)0x0B)
#define GPIO_AF11_I2C4          ((uint8_t)0x0B)
#if defined(DFSDM2_BASE)
#define GPIO_AF11_DFSDM2        ((uint8_t)0x0B)
#endif /* DFSDM2_BASE */
#if defined(USART10)
#define GPIO_AF11_USART10       ((uint8_t)0x0B)
#endif /* USART10 */
#if defined(UART9)
#define GPIO_AF11_UART9         ((uint8_t)0x0B)
#endif /* UART9 */
#if defined(ETH)
#define GPIO_AF11_ETH           ((uint8_t)0x0B)
#endif /* ETH */
#if defined(LTDC)
#define GPIO_AF11_LTDC          ((uint8_t)0x0B)
#endif /*LTDC*/
#if defined(OCTOSPIM)
#define GPIO_AF11_OCTOSPIM_P1   ((uint8_t)0x0B)
#endif /* OCTOSPIM */

/**
  * @brief   AF 12 selection
  */
#define GPIO_AF12_FMC           ((uint8_t)0x0C)
#define GPIO_AF12_SDMMC1        ((uint8_t)0x0C)
#define GPIO_AF12_MDIOS         ((uint8_t)0x0C)
#define GPIO_AF12_COMP1         ((uint8_t)0x0C)
#define GPIO_AF12_COMP2         ((uint8_t)0x0C)
#define GPIO_AF12_TIM1          ((uint8_t)0x0C)
#define GPIO_AF12_TIM8          ((uint8_t)0x0C)
#if defined(LTDC)
#define GPIO_AF12_LTDC          ((uint8_t)0x0C)
#endif /*LTDC*/
#if defined(USB2_OTG_FS)
#define GPIO_AF12_OTG1_FS       ((uint8_t)0x0C)
#endif /* USB2_OTG_FS */
#if defined(OCTOSPIM)
#define GPIO_AF12_OCTOSPIM_P1   ((uint8_t)0x0C)
#endif /* OCTOSPIM */

/**
  * @brief   AF 13 selection
  */
#define GPIO_AF13_DCMI          ((uint8_t)0x0D)
#define GPIO_AF13_COMP1         ((uint8_t)0x0D)
#define GPIO_AF13_COMP2         ((uint8_t)0x0D)
#if defined(LTDC)
#define GPIO_AF13_LTDC          ((uint8_t)0x0D)
#endif /*LTDC*/
#if defined(DSI)
#define GPIO_AF13_DSI           ((uint8_t)0x0D)
#endif /* DSI */
#if defined(PSSI)
#define GPIO_AF13_PSSI          ((uint8_t)0x0D)
#endif /* PSSI */
#define GPIO_AF13_TIM1          ((uint8_t)0x0D)
#if defined(TIM23)
#define GPIO_AF13_TIM23         ((uint8_t)0x0D)
#endif  /*TIM23*/

/**
  * @brief   AF 14 selection
  */
#define GPIO_AF14_LTDC         ((uint8_t)0x0E)
#define GPIO_AF14_UART5        ((uint8_t)0x0E)
#if defined(TIM24)
#define GPIO_AF14_TIM24        ((uint8_t)0x0E)
#endif  /*TIM24*/

/**
  * @brief   AF 15 selection
  */
#define GPIO_AF15_EVENTOUT      ((uint8_t)0x0F)

#define IS_GPIO_AF(AF)   ((AF) <= (uint8_t)0x0F)



/**
  * @}
  */

/**
  * @}
  */

/* Exported macro ------------------------------------------------------------*/
/** @defgroup GPIOEx_Exported_Macros GPIO Exported Macros
  * @{
  */
/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/
/** @defgroup GPIOEx_Exported_Functions GPIO Exported Functions
  * @{
  */
/**
  * @}
  */
/* Private types -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
/** @defgroup GPIOEx_Private_Constants GPIO Private Constants
  * @{
  */

/**
  * @brief   GPIO pin available on the platform
  */
/* Defines the available pins per GPIOs */
#define GPIOA_PIN_AVAILABLE  GPIO_PIN_All
#define GPIOB_PIN_AVAILABLE  GPIO_PIN_All
#define GPIOC_PIN_AVAILABLE  GPIO_PIN_All
#define GPIOD_PIN_AVAILABLE  GPIO_PIN_All
#define GPIOE_PIN_AVAILABLE  GPIO_PIN_All
#define GPIOF_PIN_AVAILABLE  GPIO_PIN_All
#define GPIOG_PIN_AVAILABLE  GPIO_PIN_All
#if defined(GPIOI)
#define GPIOI_PIN_AVAILABLE  GPIO_PIN_All
#endif /*GPIOI*/
#if defined(GPIOI)
#define GPIOJ_PIN_AVAILABLE  GPIO_PIN_All
#else
#define GPIOJ_PIN_AVAILABLE  (GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10 | GPIO_PIN_11 )
#endif /* GPIOI */
#define GPIOH_PIN_AVAILABLE  GPIO_PIN_All
#if defined(GPIOI)
#define GPIOK_PIN_AVAILABLE  (GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | \
                              GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7)
#else
#define GPIOK_PIN_AVAILABLE  (GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 )
#endif /* GPIOI */

/**
  * @}
  */

/* Private macros ------------------------------------------------------------*/
/** @defgroup GPIOEx_Private_Macros GPIO Private Macros
  * @{
  */
/** @defgroup GPIOEx_Get_Port_Index GPIO Get Port Index
  * @{
  */
#if defined(GPIOI)
#define GPIO_GET_INDEX(__GPIOx__)  (((__GPIOx__) == (GPIOA))? 0UL :\
                                    ((__GPIOx__) == (GPIOB))? 1UL :\
                                    ((__GPIOx__) == (GPIOC))? 2UL :\
                                    ((__GPIOx__) == (GPIOD))? 3UL :\
                                    ((__GPIOx__) == (GPIOE))? 4UL :\
                                    ((__GPIOx__) == (GPIOF))? 5UL :\
                                    ((__GPIOx__) == (GPIOG))? 6UL :\
                                    ((__GPIOx__) == (GPIOH))? 7UL :\
                                    ((__GPIOx__) == (GPIOI))? 8UL :\
                                    ((__GPIOx__) == (GPIOJ))? 9UL : 10UL)
#else
#define GPIO_GET_INDEX(__GPIOx__)  (((__GPIOx__) == (GPIOA))? 0UL :\
                                    ((__GPIOx__) == (GPIOB))? 1UL :\
                                    ((__GPIOx__) == (GPIOC))? 2UL :\
                                    ((__GPIOx__) == (GPIOD))? 3UL :\
                                    ((__GPIOx__) == (GPIOE))? 4UL :\
                                    ((__GPIOx__) == (GPIOF))? 5UL :\
                                    ((__GPIOx__) == (GPIOG))? 6UL :\
                                    ((__GPIOx__) == (GPIOH))? 7UL :\
                                    ((__GPIOx__) == (GPIOJ))? 9UL : 10UL)
#endif /* GPIOI */

/**
  * @}
  */

/** @defgroup GPIOEx_IS_Alternat_function_selection GPIO Check Alternate Function
  * @{
  */
/**
  * @}
  */

/**
  * @}
  */

/* Private functions ---------------------------------------------------------*/
/** @defgroup GPIOEx_Private_Functions GPIO Private Functions
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

#endif /* STM32H7xx_HAL_GPIO_EX_H */

