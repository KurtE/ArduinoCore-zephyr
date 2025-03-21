/**
  ******************************************************************************
  * @file    stm32h7xx_ll_dmamux.h
  * @author  MCD Application Team
  * @brief   Header file of DMAMUX LL module.
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
#ifndef STM32H7xx_LL_DMAMUX_H
#define STM32H7xx_LL_DMAMUX_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx.h"

/** @addtogroup STM32H7xx_LL_Driver
  * @{
  */

#if defined (DMAMUX1) || defined (DMAMUX2)

/** @defgroup DMAMUX_LL DMAMUX
  * @{
  */

/* Private types -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
/** @defgroup DMAMUX_LL_Private_Constants DMAMUX Private Constants
  * @{
  */
/* Define used to get DMAMUX CCR register size */
#define DMAMUX_CCR_SIZE                   0x00000004U

/* Define used to get DMAMUX RGCR register size */
#define DMAMUX_RGCR_SIZE                  0x00000004U

/* Define used to get DMAMUX RequestGenerator offset */
#define DMAMUX_REQ_GEN_OFFSET             (DMAMUX1_RequestGenerator0_BASE - DMAMUX1_BASE)
/* Define used to get DMAMUX Channel Status offset */
#define DMAMUX_CH_STATUS_OFFSET           (DMAMUX1_ChannelStatus_BASE - DMAMUX1_BASE)
/* Define used to get DMAMUX RequestGenerator status offset */
#define DMAMUX_REQ_GEN_STATUS_OFFSET      (DMAMUX1_RequestGenStatus_BASE - DMAMUX1_BASE)

/**
  * @}
  */

/* Private macros ------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/** @defgroup DMAMUX_LL_Exported_Constants DMAMUX Exported Constants
  * @{
  */
/** @defgroup DMAMUX_LL_EC_CLEAR_FLAG Clear Flags Defines
  * @brief    Flags defines which can be used with LL_DMAMUX_WriteReg function
  * @{
  */
#define LL_DMAMUX_CFR_CSOF0               DMAMUX_CFR_CSOF0
#define LL_DMAMUX_CFR_CSOF1               DMAMUX_CFR_CSOF1
#define LL_DMAMUX_CFR_CSOF2               DMAMUX_CFR_CSOF2
#define LL_DMAMUX_CFR_CSOF3               DMAMUX_CFR_CSOF3
#define LL_DMAMUX_CFR_CSOF4               DMAMUX_CFR_CSOF4
#define LL_DMAMUX_CFR_CSOF5               DMAMUX_CFR_CSOF5
#define LL_DMAMUX_CFR_CSOF6               DMAMUX_CFR_CSOF6
#define LL_DMAMUX_CFR_CSOF7               DMAMUX_CFR_CSOF7
#define LL_DMAMUX_CFR_CSOF8               DMAMUX_CFR_CSOF8
#define LL_DMAMUX_CFR_CSOF9               DMAMUX_CFR_CSOF9
#define LL_DMAMUX_CFR_CSOF10              DMAMUX_CFR_CSOF10
#define LL_DMAMUX_CFR_CSOF11              DMAMUX_CFR_CSOF11
#define LL_DMAMUX_CFR_CSOF12              DMAMUX_CFR_CSOF12
#define LL_DMAMUX_CFR_CSOF13              DMAMUX_CFR_CSOF13
#define LL_DMAMUX_CFR_CSOF14              DMAMUX_CFR_CSOF14
#define LL_DMAMUX_CFR_CSOF15              DMAMUX_CFR_CSOF15
#define LL_DMAMUX_RGCFR_RGCOF0            DMAMUX_RGCFR_COF0
#define LL_DMAMUX_RGCFR_RGCOF1            DMAMUX_RGCFR_COF1
#define LL_DMAMUX_RGCFR_RGCOF2            DMAMUX_RGCFR_COF2
#define LL_DMAMUX_RGCFR_RGCOF3            DMAMUX_RGCFR_COF3
#define LL_DMAMUX_RGCFR_RGCOF4            DMAMUX_RGCFR_COF4
#define LL_DMAMUX_RGCFR_RGCOF5            DMAMUX_RGCFR_COF5
#define LL_DMAMUX_RGCFR_RGCOF6            DMAMUX_RGCFR_COF6
#define LL_DMAMUX_RGCFR_RGCOF7            DMAMUX_RGCFR_COF7
/**
  * @}
  */

/** @defgroup DMAMUX_LL_EC_GET_FLAG Get Flags Defines
  * @brief    Flags defines which can be used with LL_DMAMUX_ReadReg function
  * @{
  */
#define LL_DMAMUX_CSR_SOF0                DMAMUX_CSR_SOF0
#define LL_DMAMUX_CSR_SOF1                DMAMUX_CSR_SOF1
#define LL_DMAMUX_CSR_SOF2                DMAMUX_CSR_SOF2
#define LL_DMAMUX_CSR_SOF3                DMAMUX_CSR_SOF3
#define LL_DMAMUX_CSR_SOF4                DMAMUX_CSR_SOF4
#define LL_DMAMUX_CSR_SOF5                DMAMUX_CSR_SOF5
#define LL_DMAMUX_CSR_SOF6                DMAMUX_CSR_SOF6
#define LL_DMAMUX_CSR_SOF7                DMAMUX_CSR_SOF7
#define LL_DMAMUX_CSR_SOF8                DMAMUX_CSR_SOF8
#define LL_DMAMUX_CSR_SOF9                DMAMUX_CSR_SOF9
#define LL_DMAMUX_CSR_SOF10               DMAMUX_CSR_SOF10
#define LL_DMAMUX_CSR_SOF11               DMAMUX_CSR_SOF11
#define LL_DMAMUX_CSR_SOF12               DMAMUX_CSR_SOF12
#define LL_DMAMUX_CSR_SOF13               DMAMUX_CSR_SOF13
#define LL_DMAMUX_CSR_SOF14               DMAMUX_CSR_SOF14
#define LL_DMAMUX_CSR_SOF15               DMAMUX_CSR_SOF15
#define LL_DMAMUX_RGSR_RGOF0              DMAMUX_RGSR_OF0
#define LL_DMAMUX_RGSR_RGOF1              DMAMUX_RGSR_OF1
#define LL_DMAMUX_RGSR_RGOF2              DMAMUX_RGSR_OF2
#define LL_DMAMUX_RGSR_RGOF3              DMAMUX_RGSR_OF3
#define LL_DMAMUX_RGSR_RGOF4              DMAMUX_RGSR_OF4
#define LL_DMAMUX_RGSR_RGOF5              DMAMUX_RGSR_OF5
#define LL_DMAMUX_RGSR_RGOF6              DMAMUX_RGSR_OF6
#define LL_DMAMUX_RGSR_RGOF7              DMAMUX_RGSR_OF7
/**
  * @}
  */

/** @defgroup DMAMUX_LL_EC_IT IT Defines
  * @brief    IT defines which can be used with LL_DMA_ReadReg and  LL_DMAMUX_WriteReg functions
  * @{
  */
#define LL_DMAMUX_CCR_SOIE                DMAMUX_CxCR_SOIE
#define LL_DMAMUX_RGCR_RGOIE              DMAMUX_RGxCR_OIE
/**
  * @}
  */

/** @defgroup DMAMUX1_Request_selection DMAMUX1 Request selection
  * @brief    DMAMUX1 Request selection
  * @{
  */
/* DMAMUX1 requests */
#define LL_DMAMUX1_REQ_MEM2MEM          0U
#define LL_DMAMUX1_REQ_GENERATOR0       1U
#define LL_DMAMUX1_REQ_GENERATOR1       2U
#define LL_DMAMUX1_REQ_GENERATOR2       3U
#define LL_DMAMUX1_REQ_GENERATOR3       4U
#define LL_DMAMUX1_REQ_GENERATOR4       5U
#define LL_DMAMUX1_REQ_GENERATOR5       6U
#define LL_DMAMUX1_REQ_GENERATOR6       7U
#define LL_DMAMUX1_REQ_GENERATOR7       8U
#define LL_DMAMUX1_REQ_ADC1             9U
#define LL_DMAMUX1_REQ_ADC2             10U
#define LL_DMAMUX1_REQ_TIM1_CH1         11U
#define LL_DMAMUX1_REQ_TIM1_CH2         12U
#define LL_DMAMUX1_REQ_TIM1_CH3         13U
#define LL_DMAMUX1_REQ_TIM1_CH4         14U
#define LL_DMAMUX1_REQ_TIM1_UP          15U
#define LL_DMAMUX1_REQ_TIM1_TRIG        16U
#define LL_DMAMUX1_REQ_TIM1_COM         17U
#define LL_DMAMUX1_REQ_TIM2_CH1         18U
#define LL_DMAMUX1_REQ_TIM2_CH2         19U
#define LL_DMAMUX1_REQ_TIM2_CH3         20U
#define LL_DMAMUX1_REQ_TIM2_CH4         21U
#define LL_DMAMUX1_REQ_TIM2_UP          22U
#define LL_DMAMUX1_REQ_TIM3_CH1         23U
#define LL_DMAMUX1_REQ_TIM3_CH2         24U
#define LL_DMAMUX1_REQ_TIM3_CH3         25U
#define LL_DMAMUX1_REQ_TIM3_CH4         26U
#define LL_DMAMUX1_REQ_TIM3_UP          27U
#define LL_DMAMUX1_REQ_TIM3_TRIG        28U
#define LL_DMAMUX1_REQ_TIM4_CH1         29U
#define LL_DMAMUX1_REQ_TIM4_CH2         30U
#define LL_DMAMUX1_REQ_TIM4_CH3         31U
#define LL_DMAMUX1_REQ_TIM4_UP          32U
#define LL_DMAMUX1_REQ_I2C1_RX          33U
#define LL_DMAMUX1_REQ_I2C1_TX          34U
#define LL_DMAMUX1_REQ_I2C2_RX          35U
#define LL_DMAMUX1_REQ_I2C2_TX          36U
#define LL_DMAMUX1_REQ_SPI1_RX          37U
#define LL_DMAMUX1_REQ_SPI1_TX          38U
#define LL_DMAMUX1_REQ_SPI2_RX          39U
#define LL_DMAMUX1_REQ_SPI2_TX          40U
#define LL_DMAMUX1_REQ_USART1_RX        41U
#define LL_DMAMUX1_REQ_USART1_TX        42U
#define LL_DMAMUX1_REQ_USART2_RX        43U
#define LL_DMAMUX1_REQ_USART2_TX        44U
#define LL_DMAMUX1_REQ_USART3_RX        45U
#define LL_DMAMUX1_REQ_USART3_TX        46U
#define LL_DMAMUX1_REQ_TIM8_CH1         47U
#define LL_DMAMUX1_REQ_TIM8_CH2         48U
#define LL_DMAMUX1_REQ_TIM8_CH3         49U
#define LL_DMAMUX1_REQ_TIM8_CH4         50U
#define LL_DMAMUX1_REQ_TIM8_UP          51U
#define LL_DMAMUX1_REQ_TIM8_TRIG        52U
#define LL_DMAMUX1_REQ_TIM8_COM         53U
#define LL_DMAMUX1_REQ_TIM5_CH1         55U
#define LL_DMAMUX1_REQ_TIM5_CH2         56U
#define LL_DMAMUX1_REQ_TIM5_CH3         57U
#define LL_DMAMUX1_REQ_TIM5_CH4         58U
#define LL_DMAMUX1_REQ_TIM5_UP          59U
#define LL_DMAMUX1_REQ_TIM5_TRIG        60U
#define LL_DMAMUX1_REQ_SPI3_RX          61U
#define LL_DMAMUX1_REQ_SPI3_TX          62U
#define LL_DMAMUX1_REQ_UART4_RX         63U
#define LL_DMAMUX1_REQ_UART4_TX         64U
#define LL_DMAMUX1_REQ_UART5_RX         65U
#define LL_DMAMUX1_REQ_UART5_TX         66U
#define LL_DMAMUX1_REQ_DAC1_CH1         67U
#define LL_DMAMUX1_REQ_DAC1_CH2         68U
#define LL_DMAMUX1_REQ_TIM6_UP          69U
#define LL_DMAMUX1_REQ_TIM7_UP          70U
#define LL_DMAMUX1_REQ_USART6_RX        71U
#define LL_DMAMUX1_REQ_USART6_TX        72U
#define LL_DMAMUX1_REQ_I2C3_RX          73U
#define LL_DMAMUX1_REQ_I2C3_TX          74U
#if defined (PSSI)
#define LL_DMAMUX1_REQ_DCMI_PSSI        75U
#define LL_DMAMUX1_REQ_DCMI             LL_DMAMUX1_REQ_DCMI_PSSI
#else
#define LL_DMAMUX1_REQ_DCMI             75U
#endif /* PSSI */
#define LL_DMAMUX1_REQ_CRYP_IN          76U
#define LL_DMAMUX1_REQ_CRYP_OUT         77U
#define LL_DMAMUX1_REQ_HASH_IN          78U
#define LL_DMAMUX1_REQ_UART7_RX         79U
#define LL_DMAMUX1_REQ_UART7_TX         80U
#define LL_DMAMUX1_REQ_UART8_RX         81U
#define LL_DMAMUX1_REQ_UART8_TX         82U
#define LL_DMAMUX1_REQ_SPI4_RX          83U
#define LL_DMAMUX1_REQ_SPI4_TX          84U
#define LL_DMAMUX1_REQ_SPI5_RX          85U
#define LL_DMAMUX1_REQ_SPI5_TX          86U
#define LL_DMAMUX1_REQ_SAI1_A           87U
#define LL_DMAMUX1_REQ_SAI1_B           88U
#if defined(SAI2)
#define LL_DMAMUX1_REQ_SAI2_A           89U
#define LL_DMAMUX1_REQ_SAI2_B           90U
#endif /* SAI2 */
#define LL_DMAMUX1_REQ_SWPMI_RX         91U
#define LL_DMAMUX1_REQ_SWPMI_TX         92U
#define LL_DMAMUX1_REQ_SPDIF_RX_DT      93U
#define LL_DMAMUX1_REQ_SPDIF_RX_CS      94U
#if defined (HRTIM1)
#define LL_DMAMUX1_REQ_HRTIM_MASTER     95U
#define LL_DMAMUX1_REQ_HRTIM_TIMER_A    96U
#define LL_DMAMUX1_REQ_HRTIM_TIMER_B    97U
#define LL_DMAMUX1_REQ_HRTIM_TIMER_C    98U
#define LL_DMAMUX1_REQ_HRTIM_TIMER_D    99U
#define LL_DMAMUX1_REQ_HRTIM_TIMER_E   100U
#endif /* HRTIM1 */
#define LL_DMAMUX1_REQ_DFSDM1_FLT0     101U
#define LL_DMAMUX1_REQ_DFSDM1_FLT1     102U
#define LL_DMAMUX1_REQ_DFSDM1_FLT2     103U
#define LL_DMAMUX1_REQ_DFSDM1_FLT3     104U
#define LL_DMAMUX1_REQ_TIM15_CH1       105U
#define LL_DMAMUX1_REQ_TIM15_UP        106U
#define LL_DMAMUX1_REQ_TIM15_TRIG      107U
#define LL_DMAMUX1_REQ_TIM15_COM       108U
#define LL_DMAMUX1_REQ_TIM16_CH1       109U
#define LL_DMAMUX1_REQ_TIM16_UP        110U
#define LL_DMAMUX1_REQ_TIM17_CH1       111U
#define LL_DMAMUX1_REQ_TIM17_UP        112U
#if defined (SAI3)
#define LL_DMAMUX1_REQ_SAI3_A          113U
#define LL_DMAMUX1_REQ_SAI3_B          114U
#endif /* SAI3 */
#if defined (ADC3)
#define LL_DMAMUX1_REQ_ADC3            115U
#endif /* ADC3 */
#if defined (UART9)
#define LL_DMAMUX1_REQ_UART9_RX        116U
#define LL_DMAMUX1_REQ_UART9_TX        117U
#endif /* UART9 */
#if defined (USART10)
#define LL_DMAMUX1_REQ_USART10_RX      118U
#define LL_DMAMUX1_REQ_USART10_TX      119U
#endif /* USART10 */
#if defined(FMAC)
#define LL_DMAMUX1_REQ_FMAC_READ       120U
#define LL_DMAMUX1_REQ_FMAC_WRITE      121U
#endif /* FMAC */
#if defined(CORDIC)
#define LL_DMAMUX1_REQ_CORDIC_READ     122U
#define LL_DMAMUX1_REQ_CORDIC_WRITE    123U
#endif /* CORDIC */
#if defined(I2C5)
#define LL_DMAMUX1_REQ_I2C5_RX         124U
#define LL_DMAMUX1_REQ_I2C5_TX         125U
#endif /* I2C5 */
#if defined(TIM23)
#define LL_DMAMUX1_REQ_TIM23_CH1       126U
#define LL_DMAMUX1_REQ_TIM23_CH2       127U
#define LL_DMAMUX1_REQ_TIM23_CH3       128U
#define LL_DMAMUX1_REQ_TIM23_CH4       129U
#define LL_DMAMUX1_REQ_TIM23_UP        130U
#define LL_DMAMUX1_REQ_TIM23_TRIG      131U
#endif /* TIM23 */
#if defined(TIM24)
#define LL_DMAMUX1_REQ_TIM24_CH1       132U
#define LL_DMAMUX1_REQ_TIM24_CH2       133U
#define LL_DMAMUX1_REQ_TIM24_CH3       134U
#define LL_DMAMUX1_REQ_TIM24_CH4       135U
#define LL_DMAMUX1_REQ_TIM24_UP        136U
#define LL_DMAMUX1_REQ_TIM24_TRIG      137U
#endif /* TIM24 */
/**
  * @}
  */

/** @defgroup DMAMUX2_Request_selection DMAMUX2 Request selection
  * @brief    DMAMUX2 Request selection
  * @{
  */
/* DMAMUX2 requests */
#define LL_DMAMUX2_REQ_MEM2MEM          0U
#define LL_DMAMUX2_REQ_GENERATOR0       1U
#define LL_DMAMUX2_REQ_GENERATOR1       2U
#define LL_DMAMUX2_REQ_GENERATOR2       3U
#define LL_DMAMUX2_REQ_GENERATOR3       4U
#define LL_DMAMUX2_REQ_GENERATOR4       5U
#define LL_DMAMUX2_REQ_GENERATOR5       6U
#define LL_DMAMUX2_REQ_GENERATOR6       7U
#define LL_DMAMUX2_REQ_GENERATOR7       8U
#define LL_DMAMUX2_REQ_LPUART1_RX       9U
#define LL_DMAMUX2_REQ_LPUART1_TX      10U
#define LL_DMAMUX2_REQ_SPI6_RX         11U
#define LL_DMAMUX2_REQ_SPI6_TX         12U
#define LL_DMAMUX2_REQ_I2C4_RX         13U
#define LL_DMAMUX2_REQ_I2C4_TX         14U
#if defined (SAI4)
#define LL_DMAMUX2_REQ_SAI4_A          15U
#define LL_DMAMUX2_REQ_SAI4_B          16U
#endif /* SAI4 */
#if defined (ADC3)
#define LL_DMAMUX2_REQ_ADC3            17U
#endif /* ADC3 */
#if defined (DAC2)
#define LL_DMAMUX2_REQ_DAC2_CH1        17U
#endif /* DAC2 */
#if defined (DFSDM2_Channel0)
#define LL_DMAMUX2_REQ_DFSDM2_FLT0     18U
#endif /* DFSDM2_Channel0 */
/**
  * @}
  */


/** @defgroup DMAMUX_LL_EC_CHANNEL DMAMUX Channel
  * @{
  */
#define LL_DMAMUX_CHANNEL_0     0x00000000U
#define LL_DMAMUX_CHANNEL_1     0x00000001U
#define LL_DMAMUX_CHANNEL_2     0x00000002U
#define LL_DMAMUX_CHANNEL_3     0x00000003U
#define LL_DMAMUX_CHANNEL_4     0x00000004U
#define LL_DMAMUX_CHANNEL_5     0x00000005U
#define LL_DMAMUX_CHANNEL_6     0x00000006U
#define LL_DMAMUX_CHANNEL_7     0x00000007U
#define LL_DMAMUX_CHANNEL_8     0x00000008U
#define LL_DMAMUX_CHANNEL_9     0x00000009U
#define LL_DMAMUX_CHANNEL_10    0x0000000AU
#define LL_DMAMUX_CHANNEL_11    0x0000000BU
#define LL_DMAMUX_CHANNEL_12    0x0000000CU
#define LL_DMAMUX_CHANNEL_13    0x0000000DU
#define LL_DMAMUX_CHANNEL_14    0x0000000EU
#define LL_DMAMUX_CHANNEL_15    0x0000000FU
/**
  * @}
  */

/** @defgroup DMAMUX_LL_EC_SYNC_NO Synchronization Signal Polarity
  * @{
  */
#define LL_DMAMUX_SYNC_NO_EVENT            0x00000000U
#define LL_DMAMUX_SYNC_POL_RISING          DMAMUX_CxCR_SPOL_0
#define LL_DMAMUX_SYNC_POL_FALLING         DMAMUX_CxCR_SPOL_1
#define LL_DMAMUX_SYNC_POL_RISING_FALLING  (DMAMUX_CxCR_SPOL_0 | DMAMUX_CxCR_SPOL_1)
/**
  * @}
  */

/** @defgroup DMAMUX_LL_EC_SYNC_EVT Synchronization Signal Event
  * @{
  */
#define LL_DMAMUX1_SYNC_DMAMUX1_CH0_EVT   0x00000000U
#define LL_DMAMUX1_SYNC_DMAMUX1_CH1_EVT   0x01000000U
#define LL_DMAMUX1_SYNC_DMAMUX1_CH2_EVT   0x02000000U
#define LL_DMAMUX1_SYNC_LPTIM1_OUT        0x03000000U
#define LL_DMAMUX1_SYNC_LPTIM2_OUT        0x04000000U
#define LL_DMAMUX1_SYNC_LPTIM3_OUT        0x05000000U
#define LL_DMAMUX1_SYNC_EXTI0             0x06000000U
#define LL_DMAMUX1_SYNC_TIM12_TRGO        0x07000000U

#define LL_DMAMUX2_SYNC_DMAMUX2_CH0_EVT   0x00000000U
#define LL_DMAMUX2_SYNC_DMAMUX2_CH1_EVT   0x01000000U
#define LL_DMAMUX2_SYNC_DMAMUX2_CH2_EVT   0x02000000U
#define LL_DMAMUX2_SYNC_DMAMUX2_CH3_EVT   0x03000000U
#define LL_DMAMUX2_SYNC_DMAMUX2_CH4_EVT   0x04000000U
#define LL_DMAMUX2_SYNC_DMAMUX2_CH5_EVT   0x05000000U
#define LL_DMAMUX2_SYNC_LPUART1_RX_WKUP   0x06000000U
#define LL_DMAMUX2_SYNC_LPUART1_TX_WKUP   0x07000000U
#define LL_DMAMUX2_SYNC_LPTIM2_OUT        0x08000000U
#define LL_DMAMUX2_SYNC_LPTIM3_OUT        0x09000000U
#define LL_DMAMUX2_SYNC_I2C4_WKUP         0x0A000000U
#define LL_DMAMUX2_SYNC_SPI6_WKUP         0x0B000000U
#define LL_DMAMUX2_SYNC_COMP1_OUT         0x0C000000U
#define LL_DMAMUX2_SYNC_RTC_WKUP          0x0D000000U
#define LL_DMAMUX2_SYNC_EXTI0             0x0E000000U
#define LL_DMAMUX2_SYNC_EXTI2             0x0F000000U

/**
  * @}
  */

/** @defgroup DMAMUX_LL_EC_REQUEST_GENERATOR Request Generator Channel
  * @{
  */
#define LL_DMAMUX_REQ_GEN_0           0x00000000U
#define LL_DMAMUX_REQ_GEN_1           0x00000001U
#define LL_DMAMUX_REQ_GEN_2           0x00000002U
#define LL_DMAMUX_REQ_GEN_3           0x00000003U
#define LL_DMAMUX_REQ_GEN_4           0x00000004U
#define LL_DMAMUX_REQ_GEN_5           0x00000005U
#define LL_DMAMUX_REQ_GEN_6           0x00000006U
#define LL_DMAMUX_REQ_GEN_7           0x00000007U
/**
  * @}
  */

/** @defgroup DMAMUX_LL_EC_REQUEST_GEN_POLARITY External Request Signal Generation Polarity
  * @{
  */
#define LL_DMAMUX_REQ_GEN_NO_EVENT             0x00000000U
#define LL_DMAMUX_REQ_GEN_POL_RISING           DMAMUX_RGxCR_GPOL_0
#define LL_DMAMUX_REQ_GEN_POL_FALLING          DMAMUX_RGxCR_GPOL_1
#define LL_DMAMUX_REQ_GEN_POL_RISING_FALLING   (DMAMUX_RGxCR_GPOL_0 | DMAMUX_RGxCR_GPOL_1)
/**
  * @}
  */

/** @defgroup DMAMUX_LL_EC_REQUEST_GEN External Request Signal Generation
  * @{
  */
#define LL_DMAMUX1_REQ_GEN_DMAMUX1_CH0_EVT   0U
#define LL_DMAMUX1_REQ_GEN_DMAMUX1_CH1_EVT   1U
#define LL_DMAMUX1_REQ_GEN_DMAMUX1_CH2_EVT   2U
#define LL_DMAMUX1_REQ_GEN_LPTIM1_OUT        3U
#define LL_DMAMUX1_REQ_GEN_LPTIM2_OUT        4U
#define LL_DMAMUX1_REQ_GEN_LPTIM3_OUT        5U
#define LL_DMAMUX1_REQ_GEN_EXTI0             6U
#define LL_DMAMUX1_REQ_GEN_TIM12_TRGO        7U

#define LL_DMAMUX2_REQ_GEN_DMAMUX2_CH0_EVT   0U
#define LL_DMAMUX2_REQ_GEN_DMAMUX2_CH1_EVT   1U
#define LL_DMAMUX2_REQ_GEN_DMAMUX2_CH2_EVT   2U
#define LL_DMAMUX2_REQ_GEN_DMAMUX2_CH3_EVT   3U
#define LL_DMAMUX2_REQ_GEN_DMAMUX2_CH4_EVT   4U
#define LL_DMAMUX2_REQ_GEN_DMAMUX2_CH5_EVT   5U
#define LL_DMAMUX2_REQ_GEN_DMAMUX2_CH6_EVT   6U
#define LL_DMAMUX2_REQ_GEN_LPUART1_RX_WKUP   7U
#define LL_DMAMUX2_REQ_GEN_LPUART1_TX_WKUP   8U
#define LL_DMAMUX2_REQ_GEN_LPTIM2_WKUP       9U
#define LL_DMAMUX2_REQ_GEN_LPTIM2_OUT       10U
#define LL_DMAMUX2_REQ_GEN_LPTIM3_WKUP      11U
#define LL_DMAMUX2_REQ_GEN_LPTIM3_OUT       12U
#if defined (LPTIM4)
#define LL_DMAMUX2_REQ_GEN_LPTIM4_WKUP      13U
#endif /* LPTIM4 */
#if defined (LPTIM5)
#define LL_DMAMUX2_REQ_GEN_LPTIM5_WKUP      14U
#endif /* LPTIM5 */
#define LL_DMAMUX2_REQ_GEN_I2C4_WKUP        15U
#define LL_DMAMUX2_REQ_GEN_SPI6_WKUP        16U
#define LL_DMAMUX2_REQ_GEN_COMP1_OUT        17U
#define LL_DMAMUX2_REQ_GEN_COMP2_OUT        18U
#define LL_DMAMUX2_REQ_GEN_RTC_WKUP         19U
#define LL_DMAMUX2_REQ_GEN_EXTI0            20U
#define LL_DMAMUX2_REQ_GEN_EXTI2            21U
#define LL_DMAMUX2_REQ_GEN_I2C4_IT_EVT      22U
#define LL_DMAMUX2_REQ_GEN_SPI6_IT          23U
#define LL_DMAMUX2_REQ_GEN_LPUART1_TX_IT    24U
#define LL_DMAMUX2_REQ_GEN_LPUART1_RX_IT    25U
#if defined (ADC3)
#define LL_DMAMUX2_REQ_GEN_ADC3_IT          26U
#define LL_DMAMUX2_REQ_GEN_ADC3_AWD1_OUT    27U
#endif /* ADC3 */
#define LL_DMAMUX2_REQ_GEN_BDMA_CH0_IT      28U
#define LL_DMAMUX2_REQ_GEN_BDMA_CH1_IT      29U
/**
  * @}
  */

/**
  * @}
  */

/* Exported macro ------------------------------------------------------------*/
/** @defgroup DMAMUX_LL_Exported_Macros DMAMUX Exported Macros
  * @{
  */

/** @defgroup DMAMUX_LL_EM_WRITE_READ Common Write and read registers macros
  * @{
  */
/**
  * @brief  Write a value in DMAMUX register
  * @param  __INSTANCE__ DMAMUX Instance
  * @param  __REG__ Register to be written
  * @param  __VALUE__ Value to be written in the register
  * @retval None
  */
#define LL_DMAMUX_WriteReg(__INSTANCE__, __REG__, __VALUE__) WRITE_REG(__INSTANCE__->__REG__, (__VALUE__))

/**
  * @brief  Read a value in DMAMUX register
  * @param  __INSTANCE__ DMAMUX Instance
  * @param  __REG__ Register to be read
  * @retval Register value
  */
#define LL_DMAMUX_ReadReg(__INSTANCE__, __REG__) READ_REG(__INSTANCE__->__REG__)
/**
  * @}
  */

/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/
/** @defgroup DMAMUX_LL_Exported_Functions DMAMUX Exported Functions
 * @{
 */

/** @defgroup DMAMUX_LL_EF_Configuration Configuration
  * @{
  */
/**
  * @brief  Set DMAMUX request ID for DMAMUX Channel x.
  * @note   DMAMUX1 channel 0 to 7 are mapped to DMA1 channel 0 to 7.
  *         DMAMUX1 channel 8 to 15 are mapped to DMA2 channel 0 to 7.
  *         DMAMUX2 channel 0 to 7 are mapped to  BDMA channel 0 to 7.
  * @rmtoll CxCR         DMAREQ_ID     LL_DMAMUX_SetRequestID
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @param  Request This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX1_REQ_MEM2MEM
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR0
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR1
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR2
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR3
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR4
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR5
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR6
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR7
  *         @arg @ref LL_DMAMUX1_REQ_ADC1
  *         @arg @ref LL_DMAMUX1_REQ_ADC2
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_CH3
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_CH4
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_TRIG
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_COM
  *         @arg @ref LL_DMAMUX1_REQ_TIM2_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM2_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM2_CH3
  *         @arg @ref LL_DMAMUX1_REQ_TIM2_CH4
  *         @arg @ref LL_DMAMUX1_REQ_TIM2_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM3_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM3_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM3_CH3
  *         @arg @ref LL_DMAMUX1_REQ_TIM3_CH4
  *         @arg @ref LL_DMAMUX1_REQ_TIM3_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM3_TRIG
  *         @arg @ref LL_DMAMUX1_REQ_TIM4_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM4_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM4_CH3
  *         @arg @ref LL_DMAMUX1_REQ_TIM4_UP
  *         @arg @ref LL_DMAMUX1_REQ_I2C1_RX
  *         @arg @ref LL_DMAMUX1_REQ_I2C1_TX
  *         @arg @ref LL_DMAMUX1_REQ_I2C2_RX
  *         @arg @ref LL_DMAMUX1_REQ_I2C2_TX
  *         @arg @ref LL_DMAMUX1_REQ_SPI1_RX
  *         @arg @ref LL_DMAMUX1_REQ_SPI1_TX
  *         @arg @ref LL_DMAMUX1_REQ_SPI2_RX
  *         @arg @ref LL_DMAMUX1_REQ_SPI2_TX
  *         @arg @ref LL_DMAMUX1_REQ_USART1_RX
  *         @arg @ref LL_DMAMUX1_REQ_USART1_TX
  *         @arg @ref LL_DMAMUX1_REQ_USART2_RX
  *         @arg @ref LL_DMAMUX1_REQ_USART2_TX
  *         @arg @ref LL_DMAMUX1_REQ_USART3_RX
  *         @arg @ref LL_DMAMUX1_REQ_USART3_TX
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_CH3
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_CH4
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_TRIG
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_COM
  *         @arg @ref LL_DMAMUX1_REQ_TIM5_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM5_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM5_CH3
  *         @arg @ref LL_DMAMUX1_REQ_TIM5_CH4
  *         @arg @ref LL_DMAMUX1_REQ_TIM5_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM5_TRIG
  *         @arg @ref LL_DMAMUX1_REQ_SPI3_RX
  *         @arg @ref LL_DMAMUX1_REQ_SPI3_TX
  *         @arg @ref LL_DMAMUX1_REQ_UART4_RX
  *         @arg @ref LL_DMAMUX1_REQ_UART4_TX
  *         @arg @ref LL_DMAMUX1_REQ_UART5_RX
  *         @arg @ref LL_DMAMUX1_REQ_UART5_TX
  *         @arg @ref LL_DMAMUX1_REQ_DAC1_CH1
  *         @arg @ref LL_DMAMUX1_REQ_DAC1_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM6_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM7_UP
  *         @arg @ref LL_DMAMUX1_REQ_USART6_RX
  *         @arg @ref LL_DMAMUX1_REQ_USART6_TX
  *         @arg @ref LL_DMAMUX1_REQ_I2C3_RX
  *         @arg @ref LL_DMAMUX1_REQ_I2C3_TX
  *         @arg @ref LL_DMAMUX1_REQ_DCMI_PSSI (*)
  *         @arg @ref LL_DMAMUX1_REQ_CRYP_IN
  *         @arg @ref LL_DMAMUX1_REQ_CRYP_OUT
  *         @arg @ref LL_DMAMUX1_REQ_HASH_IN
  *         @arg @ref LL_DMAMUX1_REQ_UART7_RX
  *         @arg @ref LL_DMAMUX1_REQ_UART7_TX
  *         @arg @ref LL_DMAMUX1_REQ_UART8_RX
  *         @arg @ref LL_DMAMUX1_REQ_UART8_TX
  *         @arg @ref LL_DMAMUX1_REQ_SPI4_RX
  *         @arg @ref LL_DMAMUX1_REQ_SPI4_TX
  *         @arg @ref LL_DMAMUX1_REQ_SPI5_RX
  *         @arg @ref LL_DMAMUX1_REQ_SPI5_TX
  *         @arg @ref LL_DMAMUX1_REQ_SAI1_A
  *         @arg @ref LL_DMAMUX1_REQ_SAI1_B
  *         @arg @ref LL_DMAMUX1_REQ_SAI2_A (*)
  *         @arg @ref LL_DMAMUX1_REQ_SAI2_B (*)
  *         @arg @ref LL_DMAMUX1_REQ_SWPMI_RX
  *         @arg @ref LL_DMAMUX1_REQ_SWPMI_TX
  *         @arg @ref LL_DMAMUX1_REQ_SPDIF_RX_DT
  *         @arg @ref LL_DMAMUX1_REQ_SPDIF_RX_CS
  *         @arg @ref LL_DMAMUX1_REQ_HRTIM_MASTER (*)
  *         @arg @ref LL_DMAMUX1_REQ_HRTIM_TIMER_A (*)
  *         @arg @ref LL_DMAMUX1_REQ_HRTIM_TIMER_B (*)
  *         @arg @ref LL_DMAMUX1_REQ_HRTIM_TIMER_C (*)
  *         @arg @ref LL_DMAMUX1_REQ_HRTIM_TIMER_D (*)
  *         @arg @ref LL_DMAMUX1_REQ_HRTIM_TIMER_E (*)
  *         @arg @ref LL_DMAMUX1_REQ_DFSDM1_FLT0
  *         @arg @ref LL_DMAMUX1_REQ_DFSDM1_FLT1
  *         @arg @ref LL_DMAMUX1_REQ_DFSDM1_FLT2
  *         @arg @ref LL_DMAMUX1_REQ_DFSDM1_FLT3
  *         @arg @ref LL_DMAMUX1_REQ_TIM15_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM15_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM15_TRIG
  *         @arg @ref LL_DMAMUX1_REQ_TIM15_COM
  *         @arg @ref LL_DMAMUX1_REQ_TIM16_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM16_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM17_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM17_UP
  *         @arg @ref LL_DMAMUX1_REQ_SAI3_A (*)
  *         @arg @ref LL_DMAMUX1_REQ_SAI3_B (*)
  *         @arg @ref LL_DMAMUX1_REQ_ADC3 (*)
  *         @arg @ref LL_DMAMUX1_REQ_UART9_RX (*)
  *         @arg @ref LL_DMAMUX1_REQ_UART9_TX (*)
  *         @arg @ref LL_DMAMUX1_REQ_USART10_RX (*)
  *         @arg @ref LL_DMAMUX1_REQ_USART10_TX (*)
  *         @arg @ref LL_DMAMUX1_REQ_FMAC_READ  (*)
  *         @arg @ref LL_DMAMUX1_REQ_FMAC_WRITE (*)
  *         @arg @ref LL_DMAMUX1_REQ_CORDIC_READ (*)
  *         @arg @ref LL_DMAMUX1_REQ_CORDIC_WRITE(*)
  *         @arg @ref LL_DMAMUX1_REQ_I2C5_RX     (*)
  *         @arg @ref LL_DMAMUX1_REQ_I2C5_TX     (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM23_CH1   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM23_CH2   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM23_CH3   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM23_CH4   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM23_UP    (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM23_TRIG  (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM24_CH1   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM24_CH2   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM24_CH3   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM24_CH4   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM24_UP    (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM24_TRIG  (*)
  *         @arg @ref LL_DMAMUX2_REQ_MEM2MEM
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR0
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR1
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR2
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR3
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR4
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR5
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR6
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR7
  *         @arg @ref LL_DMAMUX2_REQ_LPUART1_RX
  *         @arg @ref LL_DMAMUX2_REQ_LPUART1_TX
  *         @arg @ref LL_DMAMUX2_REQ_SPI6_RX
  *         @arg @ref LL_DMAMUX2_REQ_SPI6_TX
  *         @arg @ref LL_DMAMUX2_REQ_I2C4_RX
  *         @arg @ref LL_DMAMUX2_REQ_I2C4_TX
  *         @arg @ref LL_DMAMUX2_REQ_SAI4_A (*)
  *         @arg @ref LL_DMAMUX2_REQ_SAI4_B (*)
  *         @arg @ref LL_DMAMUX2_REQ_ADC3 (*)
  *         @arg @ref LL_DMAMUX2_REQ_DAC2_CH1 (*)
  *         @arg @ref LL_DMAMUX2_REQ_DFSDM2_FLT0 (*)
  *
  * @note   (*) Availability depends on devices.
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_SetRequestID(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel, uint32_t Request)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  MODIFY_REG(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_DMAREQ_ID, Request);
}

/**
  * @brief  Get DMAMUX request ID for DMAMUX Channel x.
  * @note   DMAMUX1 channel 0 to 7  are mapped to DMA1 channel 0 to 7.
  *         DMAMUX1 channel 8 to 15 are mapped to DMA2 channel 0 to 7.
  *         DMAMUX2 channel 0 to 7  are mapped to BDMA channel 0 to 7.
  * @rmtoll CxCR         DMAREQ_ID     LL_DMAMUX_GetRequestID
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_DMAMUX1_REQ_MEM2MEM
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR0
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR1
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR2
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR3
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR4
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR5
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR6
  *         @arg @ref LL_DMAMUX1_REQ_GENERATOR7
  *         @arg @ref LL_DMAMUX1_REQ_ADC1
  *         @arg @ref LL_DMAMUX1_REQ_ADC2
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_CH3
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_CH4
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_TRIG
  *         @arg @ref LL_DMAMUX1_REQ_TIM1_COM
  *         @arg @ref LL_DMAMUX1_REQ_TIM2_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM2_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM2_CH3
  *         @arg @ref LL_DMAMUX1_REQ_TIM2_CH4
  *         @arg @ref LL_DMAMUX1_REQ_TIM2_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM3_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM3_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM3_CH3
  *         @arg @ref LL_DMAMUX1_REQ_TIM3_CH4
  *         @arg @ref LL_DMAMUX1_REQ_TIM3_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM3_TRIG
  *         @arg @ref LL_DMAMUX1_REQ_TIM4_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM4_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM4_CH3
  *         @arg @ref LL_DMAMUX1_REQ_TIM4_UP
  *         @arg @ref LL_DMAMUX1_REQ_I2C1_RX
  *         @arg @ref LL_DMAMUX1_REQ_I2C1_TX
  *         @arg @ref LL_DMAMUX1_REQ_I2C2_RX
  *         @arg @ref LL_DMAMUX1_REQ_I2C2_TX
  *         @arg @ref LL_DMAMUX1_REQ_SPI1_RX
  *         @arg @ref LL_DMAMUX1_REQ_SPI1_TX
  *         @arg @ref LL_DMAMUX1_REQ_SPI2_RX
  *         @arg @ref LL_DMAMUX1_REQ_SPI2_TX
  *         @arg @ref LL_DMAMUX1_REQ_USART1_RX
  *         @arg @ref LL_DMAMUX1_REQ_USART1_TX
  *         @arg @ref LL_DMAMUX1_REQ_USART2_RX
  *         @arg @ref LL_DMAMUX1_REQ_USART2_TX
  *         @arg @ref LL_DMAMUX1_REQ_USART3_RX
  *         @arg @ref LL_DMAMUX1_REQ_USART3_TX
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_CH3
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_CH4
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_TRIG
  *         @arg @ref LL_DMAMUX1_REQ_TIM8_COM
  *         @arg @ref LL_DMAMUX1_REQ_TIM5_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM5_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM5_CH3
  *         @arg @ref LL_DMAMUX1_REQ_TIM5_CH4
  *         @arg @ref LL_DMAMUX1_REQ_TIM5_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM5_TRIG
  *         @arg @ref LL_DMAMUX1_REQ_SPI3_RX
  *         @arg @ref LL_DMAMUX1_REQ_SPI3_TX
  *         @arg @ref LL_DMAMUX1_REQ_UART4_RX
  *         @arg @ref LL_DMAMUX1_REQ_UART4_TX
  *         @arg @ref LL_DMAMUX1_REQ_UART5_RX
  *         @arg @ref LL_DMAMUX1_REQ_UART5_TX
  *         @arg @ref LL_DMAMUX1_REQ_DAC1_CH1
  *         @arg @ref LL_DMAMUX1_REQ_DAC1_CH2
  *         @arg @ref LL_DMAMUX1_REQ_TIM6_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM7_UP
  *         @arg @ref LL_DMAMUX1_REQ_USART6_RX
  *         @arg @ref LL_DMAMUX1_REQ_USART6_TX
  *         @arg @ref LL_DMAMUX1_REQ_I2C3_RX
  *         @arg @ref LL_DMAMUX1_REQ_I2C3_TX
  *         @arg @ref LL_DMAMUX1_REQ_DCMI_PSSI (*)
  *         @arg @ref LL_DMAMUX1_REQ_CRYP_IN
  *         @arg @ref LL_DMAMUX1_REQ_CRYP_OUT
  *         @arg @ref LL_DMAMUX1_REQ_HASH_IN
  *         @arg @ref LL_DMAMUX1_REQ_UART7_RX
  *         @arg @ref LL_DMAMUX1_REQ_UART7_TX
  *         @arg @ref LL_DMAMUX1_REQ_UART8_RX
  *         @arg @ref LL_DMAMUX1_REQ_UART8_TX
  *         @arg @ref LL_DMAMUX1_REQ_SPI4_RX
  *         @arg @ref LL_DMAMUX1_REQ_SPI4_TX
  *         @arg @ref LL_DMAMUX1_REQ_SPI5_RX
  *         @arg @ref LL_DMAMUX1_REQ_SPI5_TX
  *         @arg @ref LL_DMAMUX1_REQ_SAI1_A
  *         @arg @ref LL_DMAMUX1_REQ_SAI1_B
  *         @arg @ref LL_DMAMUX1_REQ_SAI2_A (*)
  *         @arg @ref LL_DMAMUX1_REQ_SAI2_B (*)
  *         @arg @ref LL_DMAMUX1_REQ_SWPMI_RX
  *         @arg @ref LL_DMAMUX1_REQ_SWPMI_TX
  *         @arg @ref LL_DMAMUX1_REQ_SPDIF_RX_DT
  *         @arg @ref LL_DMAMUX1_REQ_SPDIF_RX_CS
  *         @arg @ref LL_DMAMUX1_REQ_HRTIM_MASTER (*)
  *         @arg @ref LL_DMAMUX1_REQ_HRTIM_TIMER_A (*)
  *         @arg @ref LL_DMAMUX1_REQ_HRTIM_TIMER_B (*)
  *         @arg @ref LL_DMAMUX1_REQ_HRTIM_TIMER_C (*)
  *         @arg @ref LL_DMAMUX1_REQ_HRTIM_TIMER_D (*)
  *         @arg @ref LL_DMAMUX1_REQ_HRTIM_TIMER_E (*)
  *         @arg @ref LL_DMAMUX1_REQ_DFSDM1_FLT0
  *         @arg @ref LL_DMAMUX1_REQ_DFSDM1_FLT1
  *         @arg @ref LL_DMAMUX1_REQ_DFSDM1_FLT2
  *         @arg @ref LL_DMAMUX1_REQ_DFSDM1_FLT3
  *         @arg @ref LL_DMAMUX1_REQ_TIM15_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM15_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM15_TRIG
  *         @arg @ref LL_DMAMUX1_REQ_TIM15_COM
  *         @arg @ref LL_DMAMUX1_REQ_TIM16_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM16_UP
  *         @arg @ref LL_DMAMUX1_REQ_TIM17_CH1
  *         @arg @ref LL_DMAMUX1_REQ_TIM17_UP
  *         @arg @ref LL_DMAMUX1_REQ_SAI3_A (*)
  *         @arg @ref LL_DMAMUX1_REQ_SAI3_B (*)
  *         @arg @ref LL_DMAMUX1_REQ_ADC3 (*)
  *         @arg @ref LL_DMAMUX1_REQ_UART9_RX (*)
  *         @arg @ref LL_DMAMUX1_REQ_UART9_TX (*)
  *         @arg @ref LL_DMAMUX1_REQ_USART10_RX (*)
  *         @arg @ref LL_DMAMUX1_REQ_USART10_TX (*)
  *         @arg @ref LL_DMAMUX1_REQ_FMAC_READ  (*)
  *         @arg @ref LL_DMAMUX1_REQ_FMAC_WRITE (*)
  *         @arg @ref LL_DMAMUX1_REQ_CORDIC_READ (*)
  *         @arg @ref LL_DMAMUX1_REQ_CORDIC_WRITE(*)
  *         @arg @ref LL_DMAMUX1_REQ_I2C5_RX     (*)
  *         @arg @ref LL_DMAMUX1_REQ_I2C5_TX     (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM23_CH1   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM23_CH2   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM23_CH3   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM23_CH4   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM23_UP    (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM23_TRIG  (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM24_CH1   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM24_CH2   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM24_CH3   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM24_CH4   (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM24_UP    (*)
  *         @arg @ref LL_DMAMUX1_REQ_TIM24_TRIG  (*)
  *         @arg @ref LL_DMAMUX2_REQ_MEM2MEM
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR0
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR1
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR2
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR3
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR4
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR5
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR6
  *         @arg @ref LL_DMAMUX2_REQ_GENERATOR7
  *         @arg @ref LL_DMAMUX2_REQ_LPUART1_RX
  *         @arg @ref LL_DMAMUX2_REQ_LPUART1_TX
  *         @arg @ref LL_DMAMUX2_REQ_SPI6_RX
  *         @arg @ref LL_DMAMUX2_REQ_SPI6_TX
  *         @arg @ref LL_DMAMUX2_REQ_I2C4_RX
  *         @arg @ref LL_DMAMUX2_REQ_I2C4_TX
  *         @arg @ref LL_DMAMUX2_REQ_SAI4_A (*)
  *         @arg @ref LL_DMAMUX2_REQ_SAI4_B (*)
  *         @arg @ref LL_DMAMUX2_REQ_ADC3 (*)
  *         @arg @ref LL_DMAMUX2_REQ_DAC2_CH1 (*)
  *         @arg @ref LL_DMAMUX2_REQ_DFSDM2_FLT0 (*)
  *
  * @note   (*) Availability depends on devices.
  * @retval None
  */
__STATIC_INLINE uint32_t LL_DMAMUX_GetRequestID(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return (uint32_t)(READ_BIT(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_DMAREQ_ID));
}

/**
  * @brief  Set the number of DMA request that will be autorized after a synchronization event and/or the number of DMA request needed to generate an event.
  * @rmtoll CxCR         NBREQ         LL_DMAMUX_SetSyncRequestNb
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @param  RequestNb This parameter must be a value between Min_Data = 1 and Max_Data = 32.
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_SetSyncRequestNb(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel, uint32_t RequestNb)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  MODIFY_REG(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_NBREQ, (RequestNb - 1U) << DMAMUX_CxCR_NBREQ_Pos);
}

/**
  * @brief  Get the number of DMA request that will be autorized after a synchronization event and/or the number of DMA request needed to generate an event.
  * @rmtoll CxCR         NBREQ         LL_DMAMUX_GetSyncRequestNb
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @retval Between Min_Data = 1 and Max_Data = 32
  */
__STATIC_INLINE uint32_t LL_DMAMUX_GetSyncRequestNb(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return (uint32_t)((READ_BIT(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_NBREQ) >> DMAMUX_CxCR_NBREQ_Pos) + 1U);
}

/**
  * @brief  Set the polarity of the signal on which the DMA request is synchronized.
  * @rmtoll CxCR         SPOL          LL_DMAMUX_SetSyncPolarity
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @param  Polarity This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_SYNC_NO_EVENT
  *         @arg @ref LL_DMAMUX_SYNC_POL_RISING
  *         @arg @ref LL_DMAMUX_SYNC_POL_FALLING
  *         @arg @ref LL_DMAMUX_SYNC_POL_RISING_FALLING
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_SetSyncPolarity(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel, uint32_t Polarity)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  MODIFY_REG(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_SPOL, Polarity);
}

/**
  * @brief  Get the polarity of the signal on which the DMA request is synchronized.
  * @rmtoll CxCR         SPOL          LL_DMAMUX_GetSyncPolarity
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_DMAMUX_SYNC_NO_EVENT
  *         @arg @ref LL_DMAMUX_SYNC_POL_RISING
  *         @arg @ref LL_DMAMUX_SYNC_POL_FALLING
  *         @arg @ref LL_DMAMUX_SYNC_POL_RISING_FALLING
  */
__STATIC_INLINE uint32_t LL_DMAMUX_GetSyncPolarity(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return (uint32_t)(READ_BIT(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_SPOL));
}

/**
  * @brief  Enable the Event Generation on DMAMUX channel x.
  * @rmtoll CxCR         EGE           LL_DMAMUX_EnableEventGeneration
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_EnableEventGeneration(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_EGE);
}

/**
  * @brief  Disable the Event Generation on DMAMUX channel x.
  * @rmtoll CxCR         EGE           LL_DMAMUX_DisableEventGeneration
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_DisableEventGeneration(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  CLEAR_BIT(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_EGE);
}

/**
  * @brief  Check if the Event Generation on DMAMUX channel x is enabled or disabled.
  * @rmtoll CxCR         EGE           LL_DMAMUX_IsEnabledEventGeneration
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsEnabledEventGeneration(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_EGE) == (DMAMUX_CxCR_EGE)) ? 1UL : 0UL);
}

/**
  * @brief  Enable the synchronization mode.
  * @rmtoll CxCR         SE            LL_DMAMUX_EnableSync
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_EnableSync(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_SE);
}

/**
  * @brief  Disable the synchronization mode.
  * @rmtoll CxCR         SE            LL_DMAMUX_DisableSync
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_DisableSync(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  CLEAR_BIT(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_SE);
}

/**
  * @brief  Check if the synchronization mode is enabled or disabled.
  * @rmtoll CxCR         SE            LL_DMAMUX_IsEnabledSync
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsEnabledSync(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_SE) == (DMAMUX_CxCR_SE)) ? 1UL : 0UL);
}

/**
  * @brief  Set DMAMUX synchronization ID  on DMAMUX Channel x.
  * @rmtoll CxCR         SYNC_ID       LL_DMAMUX_SetSyncID
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @param  SyncID This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX1_SYNC_DMAMUX1_CH0_EVT
  *         @arg @ref LL_DMAMUX1_SYNC_DMAMUX1_CH1_EVT
  *         @arg @ref LL_DMAMUX1_SYNC_DMAMUX1_CH2_EVT
  *         @arg @ref LL_DMAMUX1_SYNC_LPTIM1_OUT
  *         @arg @ref LL_DMAMUX1_SYNC_LPTIM2_OUT
  *         @arg @ref LL_DMAMUX1_SYNC_LPTIM3_OUT
  *         @arg @ref LL_DMAMUX1_SYNC_EXTI0
  *         @arg @ref LL_DMAMUX1_SYNC_TIM12_TRGO
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH0_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH1_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH2_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH3_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH4_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH5_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_LPUART1_RX_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_LPUART1_TX_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_LPTIM2_OUT
  *         @arg @ref LL_DMAMUX2_SYNC_LPTIM3_OUT
  *         @arg @ref LL_DMAMUX2_SYNC_I2C4_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_SPI6_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_COMP1_OUT
  *         @arg @ref LL_DMAMUX2_SYNC_RTC_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_EXTI0
  *         @arg @ref LL_DMAMUX2_SYNC_EXTI2
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_SetSyncID(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel, uint32_t SyncID)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  MODIFY_REG(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_SYNC_ID, SyncID);
}

/**
  * @brief  Get DMAMUX synchronization ID  on DMAMUX Channel x.
  * @rmtoll CxCR         SYNC_ID       LL_DMAMUX_GetSyncID
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_DMAMUX1_SYNC_DMAMUX1_CH0_EVT
  *         @arg @ref LL_DMAMUX1_SYNC_DMAMUX1_CH1_EVT
  *         @arg @ref LL_DMAMUX1_SYNC_DMAMUX1_CH2_EVT
  *         @arg @ref LL_DMAMUX1_SYNC_LPTIM1_OUT
  *         @arg @ref LL_DMAMUX1_SYNC_LPTIM2_OUT
  *         @arg @ref LL_DMAMUX1_SYNC_LPTIM3_OUT
  *         @arg @ref LL_DMAMUX1_SYNC_EXTI0
  *         @arg @ref LL_DMAMUX1_SYNC_TIM12_TRGO
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH0_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH1_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH2_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH3_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH4_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH5_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_LPUART1_RX_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_LPUART1_TX_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_LPTIM2_OUT
  *         @arg @ref LL_DMAMUX2_SYNC_LPTIM3_OUT
  *         @arg @ref LL_DMAMUX2_SYNC_I2C4_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_SPI6_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_COMP1_OUT
  *         @arg @ref LL_DMAMUX2_SYNC_RTC_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_EXTI0
  *         @arg @ref LL_DMAMUX2_SYNC_EXTI2
  */
__STATIC_INLINE uint32_t LL_DMAMUX_GetSyncID(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return (uint32_t)(READ_BIT(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_SYNC_ID));
}

/**
  * @brief  Enable the Request Generator.
  * @rmtoll RGxCR        GE            LL_DMAMUX_EnableRequestGen
  * @param  DMAMUXx DMAMUXx Instance
  * @param  RequestGenChannel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_0
  *         @arg @ref LL_DMAMUX_REQ_GEN_1
  *         @arg @ref LL_DMAMUX_REQ_GEN_2
  *         @arg @ref LL_DMAMUX_REQ_GEN_3
  *         @arg @ref LL_DMAMUX_REQ_GEN_4
  *         @arg @ref LL_DMAMUX_REQ_GEN_5
  *         @arg @ref LL_DMAMUX_REQ_GEN_6
  *         @arg @ref LL_DMAMUX_REQ_GEN_7
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_EnableRequestGen(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t RequestGenChannel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_RequestGen_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_OFFSET + (DMAMUX_RGCR_SIZE * (RequestGenChannel))))->RGCR, DMAMUX_RGxCR_GE);
}

/**
  * @brief  Disable the Request Generator.
  * @rmtoll RGxCR        GE            LL_DMAMUX_DisableRequestGen
  * @param  DMAMUXx DMAMUXx Instance
  * @param  RequestGenChannel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_0
  *         @arg @ref LL_DMAMUX_REQ_GEN_1
  *         @arg @ref LL_DMAMUX_REQ_GEN_2
  *         @arg @ref LL_DMAMUX_REQ_GEN_3
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_DisableRequestGen(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t RequestGenChannel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  CLEAR_BIT(((DMAMUX_RequestGen_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_OFFSET + (DMAMUX_RGCR_SIZE * (RequestGenChannel))))->RGCR, DMAMUX_RGxCR_GE);
}

/**
  * @brief  Check if the Request Generator is enabled or disabled.
  * @rmtoll RGxCR        GE            LL_DMAMUX_IsEnabledRequestGen
  * @param  DMAMUXx DMAMUXx Instance
  * @param  RequestGenChannel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_0
  *         @arg @ref LL_DMAMUX_REQ_GEN_1
  *         @arg @ref LL_DMAMUX_REQ_GEN_2
  *         @arg @ref LL_DMAMUX_REQ_GEN_3
  *         @arg @ref LL_DMAMUX_REQ_GEN_4
  *         @arg @ref LL_DMAMUX_REQ_GEN_5
  *         @arg @ref LL_DMAMUX_REQ_GEN_6
  *         @arg @ref LL_DMAMUX_REQ_GEN_7
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsEnabledRequestGen(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t RequestGenChannel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_RequestGen_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_OFFSET + (DMAMUX_RGCR_SIZE * RequestGenChannel)))->RGCR, DMAMUX_RGxCR_GE) == (DMAMUX_RGxCR_GE)) ? 1UL : 0UL);
}

/**
  * @brief  Set the polarity of the signal on which the DMA request is generated.
  * @rmtoll RGxCR        GPOL          LL_DMAMUX_SetRequestGenPolarity
  * @param  DMAMUXx DMAMUXx Instance
  * @param  RequestGenChannel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_0
  *         @arg @ref LL_DMAMUX_REQ_GEN_1
  *         @arg @ref LL_DMAMUX_REQ_GEN_2
  *         @arg @ref LL_DMAMUX_REQ_GEN_3
  *         @arg @ref LL_DMAMUX_REQ_GEN_4
  *         @arg @ref LL_DMAMUX_REQ_GEN_5
  *         @arg @ref LL_DMAMUX_REQ_GEN_6
  *         @arg @ref LL_DMAMUX_REQ_GEN_7
  * @param  Polarity This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_NO_EVENT
  *         @arg @ref LL_DMAMUX_REQ_GEN_POL_RISING
  *         @arg @ref LL_DMAMUX_REQ_GEN_POL_FALLING
  *         @arg @ref LL_DMAMUX_REQ_GEN_POL_RISING_FALLING
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_SetRequestGenPolarity(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t RequestGenChannel, uint32_t Polarity)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  MODIFY_REG(((DMAMUX_RequestGen_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_OFFSET + (DMAMUX_RGCR_SIZE * RequestGenChannel)))->RGCR, DMAMUX_RGxCR_GPOL, Polarity);
}

/**
  * @brief  Get the polarity of the signal on which the DMA request is generated.
  * @rmtoll RGxCR        GPOL          LL_DMAMUX_GetRequestGenPolarity
  * @param  DMAMUXx DMAMUXx Instance
  * @param  RequestGenChannel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_0
  *         @arg @ref LL_DMAMUX_REQ_GEN_1
  *         @arg @ref LL_DMAMUX_REQ_GEN_2
  *         @arg @ref LL_DMAMUX_REQ_GEN_3
  *         @arg @ref LL_DMAMUX_REQ_GEN_4
  *         @arg @ref LL_DMAMUX_REQ_GEN_5
  *         @arg @ref LL_DMAMUX_REQ_GEN_6
  *         @arg @ref LL_DMAMUX_REQ_GEN_7
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_NO_EVENT
  *         @arg @ref LL_DMAMUX_REQ_GEN_POL_RISING
  *         @arg @ref LL_DMAMUX_REQ_GEN_POL_FALLING
  *         @arg @ref LL_DMAMUX_REQ_GEN_POL_RISING_FALLING
  */
__STATIC_INLINE uint32_t LL_DMAMUX_GetRequestGenPolarity(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t RequestGenChannel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return (uint32_t)(READ_BIT(((DMAMUX_RequestGen_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_OFFSET + (DMAMUX_RGCR_SIZE * RequestGenChannel)))->RGCR, DMAMUX_RGxCR_GPOL));
}

/**
  * @brief  Set the number of DMA request that will be autorized after a generation event.
  * @note   This field can only be written when Generator is disabled.
  * @rmtoll RGxCR        GNBREQ        LL_DMAMUX_SetGenRequestNb
  * @param  DMAMUXx DMAMUXx Instance
  * @param  RequestGenChannel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_0
  *         @arg @ref LL_DMAMUX_REQ_GEN_1
  *         @arg @ref LL_DMAMUX_REQ_GEN_2
  *         @arg @ref LL_DMAMUX_REQ_GEN_3
  *         @arg @ref LL_DMAMUX_REQ_GEN_4
  *         @arg @ref LL_DMAMUX_REQ_GEN_5
  *         @arg @ref LL_DMAMUX_REQ_GEN_6
  *         @arg @ref LL_DMAMUX_REQ_GEN_7
  * @param  RequestNb This parameter must be a value between Min_Data = 1 and Max_Data = 32.
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_SetGenRequestNb(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t RequestGenChannel, uint32_t RequestNb)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  MODIFY_REG(((DMAMUX_RequestGen_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_OFFSET + (DMAMUX_RGCR_SIZE * RequestGenChannel)))->RGCR, DMAMUX_RGxCR_GNBREQ, (RequestNb - 1U) << DMAMUX_RGxCR_GNBREQ_Pos);
}

/**
  * @brief  Get the number of DMA request that will be autorized after a generation event.
  * @rmtoll RGxCR        GNBREQ        LL_DMAMUX_GetGenRequestNb
  * @param  DMAMUXx DMAMUXx Instance
  * @param  RequestGenChannel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_0
  *         @arg @ref LL_DMAMUX_REQ_GEN_1
  *         @arg @ref LL_DMAMUX_REQ_GEN_2
  *         @arg @ref LL_DMAMUX_REQ_GEN_3
  *         @arg @ref LL_DMAMUX_REQ_GEN_4
  *         @arg @ref LL_DMAMUX_REQ_GEN_5
  *         @arg @ref LL_DMAMUX_REQ_GEN_6
  *         @arg @ref LL_DMAMUX_REQ_GEN_7
  * @retval Between Min_Data = 1 and Max_Data = 32
  */
__STATIC_INLINE uint32_t LL_DMAMUX_GetGenRequestNb(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t RequestGenChannel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return (uint32_t)((READ_BIT(((DMAMUX_RequestGen_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_OFFSET + (DMAMUX_RGCR_SIZE * RequestGenChannel)))->RGCR, DMAMUX_RGxCR_GNBREQ) >> DMAMUX_RGxCR_GNBREQ_Pos) + 1U);
}

/**
  * @brief  Set DMAMUX external Request Signal ID on DMAMUX Request Generation Trigger Event Channel x.
  * @rmtoll RGxCR        SIG_ID        LL_DMAMUX_SetRequestSignalID
  * @param  DMAMUXx DMAMUXx Instance
  * @param  RequestGenChannel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_0
  *         @arg @ref LL_DMAMUX_REQ_GEN_1
  *         @arg @ref LL_DMAMUX_REQ_GEN_2
  *         @arg @ref LL_DMAMUX_REQ_GEN_3
  *         @arg @ref LL_DMAMUX_REQ_GEN_4
  *         @arg @ref LL_DMAMUX_REQ_GEN_5
  *         @arg @ref LL_DMAMUX_REQ_GEN_6
  *         @arg @ref LL_DMAMUX_REQ_GEN_7
  * @param  RequestSignalID This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX1_REQ_GEN_DMAMUX1_CH0_EVT
  *         @arg @ref LL_DMAMUX1_REQ_GEN_DMAMUX1_CH1_EVT
  *         @arg @ref LL_DMAMUX1_REQ_GEN_DMAMUX1_CH2_EVT
  *         @arg @ref LL_DMAMUX1_REQ_GEN_LPTIM1_OUT
  *         @arg @ref LL_DMAMUX1_REQ_GEN_LPTIM2_OUT
  *         @arg @ref LL_DMAMUX1_REQ_GEN_LPTIM3_OUT
  *         @arg @ref LL_DMAMUX1_REQ_GEN_EXTI0
  *         @arg @ref LL_DMAMUX1_REQ_GEN_TIM12_TRGO
  *         @arg @ref LL_DMAMUX2_REQ_GEN_DMAMUX2_CH0_EVT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_DMAMUX2_CH1_EVT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_DMAMUX2_CH2_EVT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_DMAMUX2_CH3_EVT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_DMAMUX2_CH4_EVT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_DMAMUX2_CH5_EVT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_DMAMUX2_CH6_EVT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_LPUART1_RX_WKUP
  *         @arg @ref LL_DMAMUX2_REQ_GEN_LPUART1_TX_WKUP
  *         @arg @ref LL_DMAMUX2_REQ_GEN_LPTIM2_WKUP
  *         @arg @ref LL_DMAMUX2_REQ_GEN_LPTIM2_OUT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_LPTIM3_WKUP
  *         @arg @ref LL_DMAMUX2_REQ_GEN_LPTIM3_OUT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_LPTIM4_WKUP (*)
  *         @arg @ref LL_DMAMUX2_REQ_GEN_LPTIM5_WKUP (*)
  *         @arg @ref LL_DMAMUX2_REQ_GEN_I2C4_WKUP
  *         @arg @ref LL_DMAMUX2_REQ_GEN_SPI6_WKUP
  *         @arg @ref LL_DMAMUX2_REQ_GEN_COMP1_OUT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_COMP2_OUT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_RTC_WKUP
  *         @arg @ref LL_DMAMUX2_REQ_GEN_EXTI0
  *         @arg @ref LL_DMAMUX2_REQ_GEN_EXTI2
  *         @arg @ref LL_DMAMUX2_REQ_GEN_I2C4_IT_EVT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_SPI6_IT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_LPUART1_TX_IT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_LPUART1_RX_IT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_ADC3_IT (*)
  *         @arg @ref LL_DMAMUX2_REQ_GEN_ADC3_AWD1_OUT (*)
  *         @arg @ref LL_DMAMUX2_REQ_GEN_BDMA_CH0_IT
  *         @arg @ref LL_DMAMUX2_REQ_GEN_BDMA_CH1_IT
  * @note   (*) Availability depends on devices.
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_SetRequestSignalID(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t RequestGenChannel, uint32_t RequestSignalID)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  MODIFY_REG(((DMAMUX_RequestGen_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_OFFSET + (DMAMUX_RGCR_SIZE * RequestGenChannel)))->RGCR, DMAMUX_RGxCR_SIG_ID, RequestSignalID);
}

/**
  * @brief  Get DMAMUX external Request Signal ID set on DMAMUX Channel x.
  * @rmtoll RGxCR        SIG_ID        LL_DMAMUX_GetRequestSignalID
  * @param  DMAMUXx DMAMUXx Instance
  * @param  RequestGenChannel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_0
  *         @arg @ref LL_DMAMUX_REQ_GEN_1
  *         @arg @ref LL_DMAMUX_REQ_GEN_2
  *         @arg @ref LL_DMAMUX_REQ_GEN_3
  *         @arg @ref LL_DMAMUX_REQ_GEN_4
  *         @arg @ref LL_DMAMUX_REQ_GEN_5
  *         @arg @ref LL_DMAMUX_REQ_GEN_6
  *         @arg @ref LL_DMAMUX_REQ_GEN_7
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_DMAMUX1_SYNC_DMAMUX1_CH0_EVT
  *         @arg @ref LL_DMAMUX1_SYNC_DMAMUX1_CH1_EVT
  *         @arg @ref LL_DMAMUX1_SYNC_DMAMUX1_CH2_EVT
  *         @arg @ref LL_DMAMUX1_SYNC_LPTIM1_OUT
  *         @arg @ref LL_DMAMUX1_SYNC_LPTIM2_OUT
  *         @arg @ref LL_DMAMUX1_SYNC_LPTIM3_OUT
  *         @arg @ref LL_DMAMUX1_SYNC_EXTI0
  *         @arg @ref LL_DMAMUX1_SYNC_TIM12_TRGO
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH0_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH1_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH2_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH3_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH4_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_DMAMUX2_CH5_EVT
  *         @arg @ref LL_DMAMUX2_SYNC_LPUART1_RX_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_LPUART1_TX_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_LPTIM2_OUT
  *         @arg @ref LL_DMAMUX2_SYNC_LPTIM3_OUT
  *         @arg @ref LL_DMAMUX2_SYNC_I2C4_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_SPI6_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_COMP1_OUT
  *         @arg @ref LL_DMAMUX2_SYNC_RTC_WKUP
  *         @arg @ref LL_DMAMUX2_SYNC_EXTI0
  *         @arg @ref LL_DMAMUX2_SYNC_EXTI2
  */
__STATIC_INLINE uint32_t LL_DMAMUX_GetRequestSignalID(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t RequestGenChannel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return (uint32_t)(READ_BIT(((DMAMUX_RequestGen_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_OFFSET + (DMAMUX_RGCR_SIZE * RequestGenChannel)))->RGCR, DMAMUX_RGxCR_SIG_ID));
}

/**
  * @}
  */

/** @defgroup DMAMUX_LL_EF_FLAG_Management FLAG_Management
  * @{
  */

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 0.
  * @rmtoll CSR          SOF0          LL_DMAMUX_IsActiveFlag_SO0
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO0(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF0) == (DMAMUX_CSR_SOF0)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 1.
  * @rmtoll CSR          SOF1          LL_DMAMUX_IsActiveFlag_SO1
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO1(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF1) == (DMAMUX_CSR_SOF1)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 2.
  * @rmtoll CSR          SOF2          LL_DMAMUX_IsActiveFlag_SO2
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO2(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF2) == (DMAMUX_CSR_SOF2)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 3.
  * @rmtoll CSR          SOF3          LL_DMAMUX_IsActiveFlag_SO3
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO3(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF3) == (DMAMUX_CSR_SOF3)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 4.
  * @rmtoll CSR          SOF4          LL_DMAMUX_IsActiveFlag_SO4
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO4(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF4) == (DMAMUX_CSR_SOF4)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 5.
  * @rmtoll CSR          SOF5          LL_DMAMUX_IsActiveFlag_SO5
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO5(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF5) == (DMAMUX_CSR_SOF5)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 6.
  * @rmtoll CSR          SOF6          LL_DMAMUX_IsActiveFlag_SO6
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO6(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF6) == (DMAMUX_CSR_SOF6)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 7.
  * @rmtoll CSR          SOF7          LL_DMAMUX_IsActiveFlag_SO7
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO7(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF7) == (DMAMUX_CSR_SOF7)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 8.
  * @rmtoll CSR          SOF8          LL_DMAMUX_IsActiveFlag_SO8
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO8(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF8) == (DMAMUX_CSR_SOF8)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 9.
  * @rmtoll CSR          SOF9          LL_DMAMUX_IsActiveFlag_SO9
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO9(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF9) == (DMAMUX_CSR_SOF9)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 10.
  * @rmtoll CSR          SOF10         LL_DMAMUX_IsActiveFlag_SO10
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO10(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF10) == (DMAMUX_CSR_SOF10)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 11.
  * @rmtoll CSR          SOF11         LL_DMAMUX_IsActiveFlag_SO11
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO11(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF11) == (DMAMUX_CSR_SOF11)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 12.
  * @rmtoll CSR          SOF12         LL_DMAMUX_IsActiveFlag_SO12
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO12(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF12) == (DMAMUX_CSR_SOF12)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 13.
  * @rmtoll CSR          SOF13         LL_DMAMUX_IsActiveFlag_SO13
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO13(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF13) == (DMAMUX_CSR_SOF13)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 14.
  * @rmtoll CSR          SOF14         LL_DMAMUX_IsActiveFlag_SO14
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO14(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF14) == (DMAMUX_CSR_SOF14)) ? 1UL : 0UL);
}

/**
  * @brief  Get Synchronization Event Overrun Flag Channel 15.
  * @rmtoll CSR          SOF15         LL_DMAMUX_IsActiveFlag_SO15
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_SO15(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CSR, DMAMUX_CSR_SOF15) == (DMAMUX_CSR_SOF15)) ? 1UL : 0UL);
}

/**
  * @brief  Get Request Generator 0 Trigger Event Overrun Flag.
  * @rmtoll RGSR         OF0           LL_DMAMUX_IsActiveFlag_RGO0
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_RGO0(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGSR, DMAMUX_RGSR_OF0) == (DMAMUX_RGSR_OF0)) ? 1UL : 0UL);
}

/**
  * @brief  Get Request Generator 1 Trigger Event Overrun Flag.
  * @rmtoll RGSR         OF1           LL_DMAMUX_IsActiveFlag_RGO1
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_RGO1(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGSR, DMAMUX_RGSR_OF1) == (DMAMUX_RGSR_OF1)) ? 1UL : 0UL);
}

/**
  * @brief  Get Request Generator 2 Trigger Event Overrun Flag.
  * @rmtoll RGSR         OF2           LL_DMAMUX_IsActiveFlag_RGO2
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_RGO2(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGSR, DMAMUX_RGSR_OF2) == (DMAMUX_RGSR_OF2)) ? 1UL : 0UL);
}

/**
  * @brief  Get Request Generator 3 Trigger Event Overrun Flag.
  * @rmtoll RGSR         OF3           LL_DMAMUX_IsActiveFlag_RGO3
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_RGO3(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGSR, DMAMUX_RGSR_OF3) == (DMAMUX_RGSR_OF3)) ? 1UL : 0UL);
}

/**
  * @brief  Get Request Generator 4 Trigger Event Overrun Flag.
  * @rmtoll RGSR         OF4           LL_DMAMUX_IsActiveFlag_RGO4
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_RGO4(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGSR, DMAMUX_RGSR_OF4) == (DMAMUX_RGSR_OF4)) ? 1UL : 0UL);
}

/**
  * @brief  Get Request Generator 5 Trigger Event Overrun Flag.
  * @rmtoll RGSR         OF5           LL_DMAMUX_IsActiveFlag_RGO5
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_RGO5(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGSR, DMAMUX_RGSR_OF5) == (DMAMUX_RGSR_OF5)) ? 1UL : 0UL);
}

/**
  * @brief  Get Request Generator 6 Trigger Event Overrun Flag.
  * @rmtoll RGSR         OF6           LL_DMAMUX_IsActiveFlag_RGO6
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_RGO6(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGSR, DMAMUX_RGSR_OF6) == (DMAMUX_RGSR_OF6)) ? 1UL : 0UL);
}

/**
  * @brief  Get Request Generator 7 Trigger Event Overrun Flag.
  * @rmtoll RGSR         OF7           LL_DMAMUX_IsActiveFlag_RGO7
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsActiveFlag_RGO7(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGSR, DMAMUX_RGSR_OF7) == (DMAMUX_RGSR_OF7)) ? 1UL : 0UL);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 0.
  * @rmtoll CFR          CSOF0         LL_DMAMUX_ClearFlag_SO0
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO0(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF0);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 1.
  * @rmtoll CFR          CSOF1         LL_DMAMUX_ClearFlag_SO1
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO1(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF1);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 2.
  * @rmtoll CFR          CSOF2         LL_DMAMUX_ClearFlag_SO2
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO2(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF2);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 3.
  * @rmtoll CFR          CSOF3         LL_DMAMUX_ClearFlag_SO3
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO3(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF3);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 4.
  * @rmtoll CFR          CSOF4         LL_DMAMUX_ClearFlag_SO4
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO4(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF4);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 5.
  * @rmtoll CFR          CSOF5         LL_DMAMUX_ClearFlag_SO5
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO5(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF5);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 6.
  * @rmtoll CFR          CSOF6         LL_DMAMUX_ClearFlag_SO6
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO6(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF6);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 7.
  * @rmtoll CFR          CSOF7         LL_DMAMUX_ClearFlag_SO7
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO7(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF7);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 8.
  * @rmtoll CFR          CSOF8         LL_DMAMUX_ClearFlag_SO8
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO8(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF8);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 9.
  * @rmtoll CFR          CSOF9         LL_DMAMUX_ClearFlag_SO9
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO9(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF9);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 10.
  * @rmtoll CFR          CSOF10        LL_DMAMUX_ClearFlag_SO10
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO10(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF10);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 11.
  * @rmtoll CFR          CSOF11        LL_DMAMUX_ClearFlag_SO11
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO11(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF11);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 12.
  * @rmtoll CFR          CSOF12        LL_DMAMUX_ClearFlag_SO12
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO12(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF12);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 13.
  * @rmtoll CFR          CSOF13        LL_DMAMUX_ClearFlag_SO13
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO13(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF13);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 14.
  * @rmtoll CFR          CSOF14        LL_DMAMUX_ClearFlag_SO14
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO14(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF14);
}

/**
  * @brief  Clear Synchronization Event Overrun Flag Channel 15.
  * @rmtoll CFR          CSOF15        LL_DMAMUX_ClearFlag_SO15
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_SO15(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_ChannelStatus_TypeDef *)(dmamux_base_addr + DMAMUX_CH_STATUS_OFFSET))->CFR, DMAMUX_CFR_CSOF15);
}

/**
  * @brief  Clear Request Generator 0 Trigger Event Overrun Flag.
  * @rmtoll RGCFR        COF0          LL_DMAMUX_ClearFlag_RGO0
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_RGO0(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGCFR, DMAMUX_RGCFR_COF0);
}

/**
  * @brief  Clear Request Generator 1 Trigger Event Overrun Flag.
  * @rmtoll RGCFR        COF1          LL_DMAMUX_ClearFlag_RGO1
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_RGO1(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGCFR, DMAMUX_RGCFR_COF1);
}

/**
  * @brief  Clear Request Generator 2 Trigger Event Overrun Flag.
  * @rmtoll RGCFR        COF2          LL_DMAMUX_ClearFlag_RGO2
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_RGO2(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGCFR, DMAMUX_RGCFR_COF2);
}

/**
  * @brief  Clear Request Generator 3 Trigger Event Overrun Flag.
  * @rmtoll RGCFR        COF3          LL_DMAMUX_ClearFlag_RGO3
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_RGO3(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGCFR, DMAMUX_RGCFR_COF3);
}

/**
  * @brief  Clear Request Generator 4 Trigger Event Overrun Flag.
  * @rmtoll RGCFR        COF4          LL_DMAMUX_ClearFlag_RGO4
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_RGO4(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGCFR, DMAMUX_RGCFR_COF4);
}

/**
  * @brief  Clear Request Generator 5 Trigger Event Overrun Flag.
  * @rmtoll RGCFR        COF5          LL_DMAMUX_ClearFlag_RGO5
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_RGO5(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGCFR, DMAMUX_RGCFR_COF5);
}

/**
  * @brief  Clear Request Generator 6 Trigger Event Overrun Flag.
  * @rmtoll RGCFR        COF6          LL_DMAMUX_ClearFlag_RGO6
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_RGO6(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGCFR, DMAMUX_RGCFR_COF6);
}

/**
  * @brief  Clear Request Generator 7 Trigger Event Overrun Flag.
  * @rmtoll RGCFR        COF7          LL_DMAMUX_ClearFlag_RGO7
  * @param  DMAMUXx DMAMUXx DMAMUXx Instance
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_ClearFlag_RGO7(const DMAMUX_Channel_TypeDef *DMAMUXx)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_RequestGenStatus_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_STATUS_OFFSET))->RGCFR, DMAMUX_RGCFR_COF7);
}

/**
  * @}
  */

/** @defgroup DMAMUX_LL_EF_IT_Management IT_Management
  * @{
  */

/**
  * @brief  Enable the Synchronization Event Overrun Interrupt on DMAMUX channel x.
  * @rmtoll CxCR         SOIE          LL_DMAMUX_EnableIT_SO
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_EnableIT_SO(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_Channel_TypeDef *)((uint32_t)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel)))))->CCR, DMAMUX_CxCR_SOIE);
}

/**
  * @brief  Disable the Synchronization Event Overrun Interrupt on DMAMUX channel x.
  * @rmtoll CxCR         SOIE          LL_DMAMUX_DisableIT_SO
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_DisableIT_SO(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  CLEAR_BIT(((DMAMUX_Channel_TypeDef *)((uint32_t)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel)))))->CCR, DMAMUX_CxCR_SOIE);
}

/**
  * @brief  Check if the Synchronization Event Overrun Interrupt on DMAMUX channel x is enabled or disabled.
  * @rmtoll CxCR         SOIE          LL_DMAMUX_IsEnabledIT_SO
  * @param  DMAMUXx DMAMUXx Instance
  * @param  Channel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_CHANNEL_0
  *         @arg @ref LL_DMAMUX_CHANNEL_1
  *         @arg @ref LL_DMAMUX_CHANNEL_2
  *         @arg @ref LL_DMAMUX_CHANNEL_3
  *         @arg @ref LL_DMAMUX_CHANNEL_4
  *         @arg @ref LL_DMAMUX_CHANNEL_5
  *         @arg @ref LL_DMAMUX_CHANNEL_6
  *         @arg @ref LL_DMAMUX_CHANNEL_7
  *         @arg @ref LL_DMAMUX_CHANNEL_8
  *         @arg @ref LL_DMAMUX_CHANNEL_9
  *         @arg @ref LL_DMAMUX_CHANNEL_10
  *         @arg @ref LL_DMAMUX_CHANNEL_11
  *         @arg @ref LL_DMAMUX_CHANNEL_12
  *         @arg @ref LL_DMAMUX_CHANNEL_13
  *         @arg @ref LL_DMAMUX_CHANNEL_14
  *         @arg @ref LL_DMAMUX_CHANNEL_15
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsEnabledIT_SO(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t Channel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return (READ_BIT(((DMAMUX_Channel_TypeDef *)(dmamux_base_addr + (DMAMUX_CCR_SIZE * (Channel))))->CCR, DMAMUX_CxCR_SOIE));
}

/**
  * @brief  Enable the Request Generation Trigger Event Overrun Interrupt on DMAMUX channel x.
  * @rmtoll RGxCR        OIE           LL_DMAMUX_EnableIT_RGO
  * @param  DMAMUXx DMAMUXx Instance
  * @param  RequestGenChannel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_0
  *         @arg @ref LL_DMAMUX_REQ_GEN_1
  *         @arg @ref LL_DMAMUX_REQ_GEN_2
  *         @arg @ref LL_DMAMUX_REQ_GEN_3
  *         @arg @ref LL_DMAMUX_REQ_GEN_4
  *         @arg @ref LL_DMAMUX_REQ_GEN_5
  *         @arg @ref LL_DMAMUX_REQ_GEN_6
  *         @arg @ref LL_DMAMUX_REQ_GEN_7
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_EnableIT_RGO(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t RequestGenChannel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  SET_BIT(((DMAMUX_RequestGen_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_OFFSET + (DMAMUX_RGCR_SIZE * RequestGenChannel)))->RGCR, DMAMUX_RGxCR_OIE);
}

/**
  * @brief  Disable the Request Generation Trigger Event Overrun Interrupt on DMAMUX channel x.
  * @rmtoll RGxCR        OIE           LL_DMAMUX_DisableIT_RGO
  * @param  DMAMUXx DMAMUXx Instance
  * @param  RequestGenChannel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_0
  *         @arg @ref LL_DMAMUX_REQ_GEN_1
  *         @arg @ref LL_DMAMUX_REQ_GEN_2
  *         @arg @ref LL_DMAMUX_REQ_GEN_3
  *         @arg @ref LL_DMAMUX_REQ_GEN_4
  *         @arg @ref LL_DMAMUX_REQ_GEN_5
  *         @arg @ref LL_DMAMUX_REQ_GEN_6
  *         @arg @ref LL_DMAMUX_REQ_GEN_7
  * @retval None
  */
__STATIC_INLINE void LL_DMAMUX_DisableIT_RGO(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t RequestGenChannel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  CLEAR_BIT(((DMAMUX_RequestGen_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_OFFSET + (DMAMUX_RGCR_SIZE * RequestGenChannel)))->RGCR, DMAMUX_RGxCR_OIE);
}

/**
  * @brief  Check if the Request Generation Trigger Event Overrun Interrupt on DMAMUX channel x is enabled or disabled.
  * @rmtoll RGxCR        OIE           LL_DMAMUX_IsEnabledIT_RGO
  * @param  DMAMUXx DMAMUXx Instance
  * @param  RequestGenChannel This parameter can be one of the following values:
  *         @arg @ref LL_DMAMUX_REQ_GEN_0
  *         @arg @ref LL_DMAMUX_REQ_GEN_1
  *         @arg @ref LL_DMAMUX_REQ_GEN_2
  *         @arg @ref LL_DMAMUX_REQ_GEN_3
  *         @arg @ref LL_DMAMUX_REQ_GEN_4
  *         @arg @ref LL_DMAMUX_REQ_GEN_5
  *         @arg @ref LL_DMAMUX_REQ_GEN_6
  *         @arg @ref LL_DMAMUX_REQ_GEN_7
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_DMAMUX_IsEnabledIT_RGO(const DMAMUX_Channel_TypeDef *DMAMUXx, uint32_t RequestGenChannel)
{
  uint32_t dmamux_base_addr = (uint32_t)DMAMUXx;

  return ((READ_BIT(((DMAMUX_RequestGen_TypeDef *)(dmamux_base_addr + DMAMUX_REQ_GEN_OFFSET + (DMAMUX_RGCR_SIZE * RequestGenChannel)))->RGCR, DMAMUX_RGxCR_OIE) == (DMAMUX_RGxCR_OIE)) ? 1UL : 0UL);
}

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#endif /* DMAMUX1 || DMAMUX2 */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __STM32H7xx_LL_DMAMUX_H */

