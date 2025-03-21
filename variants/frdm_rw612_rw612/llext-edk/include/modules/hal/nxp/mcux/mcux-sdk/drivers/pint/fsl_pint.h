/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FSL_PINT_H_
#define FSL_PINT_H_

#include "fsl_common.h"

/*!
 * @addtogroup pint_driver
 * @{
 */

/*! @file */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @name Driver version */
/*! @{ */
#define FSL_PINT_DRIVER_VERSION (MAKE_VERSION(2, 1, 13))
/*! @} */

/* PININT Bit slice source register bits */
#define PININT_BITSLICE_SRC_START 8U
#define PININT_BITSLICE_SRC_MASK  7U

/* PININT Bit slice configuration register bits */
#define PININT_BITSLICE_CFG_START 8U
#define PININT_BITSLICE_CFG_MASK  7U
#define PININT_BITSLICE_ENDP_MASK 7U

#define PINT_PIN_INT_LEVEL              0x10U
#define PINT_PIN_INT_EDGE               0x00U
#define PINT_PIN_INT_FALL_OR_HIGH_LEVEL 0x02U
#define PINT_PIN_INT_RISE               0x01U
#define PINT_PIN_RISE_EDGE              (PINT_PIN_INT_EDGE | PINT_PIN_INT_RISE)
#define PINT_PIN_FALL_EDGE              (PINT_PIN_INT_EDGE | PINT_PIN_INT_FALL_OR_HIGH_LEVEL)
#define PINT_PIN_BOTH_EDGE              (PINT_PIN_INT_EDGE | PINT_PIN_INT_RISE | PINT_PIN_INT_FALL_OR_HIGH_LEVEL)
#define PINT_PIN_LOW_LEVEL              (PINT_PIN_INT_LEVEL)
#define PINT_PIN_HIGH_LEVEL             (PINT_PIN_INT_LEVEL | PINT_PIN_INT_FALL_OR_HIGH_LEVEL)

/*! @brief PINT Pin Interrupt enable type */
typedef enum _pint_pin_enable
{
    kPINT_PinIntEnableNone      = 0U,
    kPINT_PinIntEnableRiseEdge  = PINT_PIN_RISE_EDGE,
    kPINT_PinIntEnableFallEdge  = PINT_PIN_FALL_EDGE,
    kPINT_PinIntEnableBothEdges = PINT_PIN_BOTH_EDGE,
    kPINT_PinIntEnableLowLevel  = PINT_PIN_LOW_LEVEL,
    kPINT_PinIntEnableHighLevel = PINT_PIN_HIGH_LEVEL
} pint_pin_enable_t;

/*! @brief PINT Pin Interrupt type */
typedef enum _pint_int
{
    kPINT_PinInt0 = 0U,
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 1U)
    kPINT_PinInt1 = 1U,
#endif
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 2U)
    kPINT_PinInt2 = 2U,
#endif
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 3U)
    kPINT_PinInt3 = 3U,
#endif
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 4U)
    kPINT_PinInt4 = 4U,
#endif
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 5U)
    kPINT_PinInt5 = 5U,
#endif
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 6U)
    kPINT_PinInt6 = 6U,
#endif
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 7U)
    kPINT_PinInt7 = 7U,
#endif
#if defined(FSL_FEATURE_SECPINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_SECPINT_NUMBER_OF_CONNECTED_OUTPUTS > 0U)
    kPINT_SecPinInt0 = 0U,
#endif
#if defined(FSL_FEATURE_SECPINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_SECPINT_NUMBER_OF_CONNECTED_OUTPUTS > 1U)
    kPINT_SecPinInt1 = 1U,
#endif
} pint_pin_int_t;

/*! @brief PINT Pattern Match bit slice input source type */
typedef enum _pint_pmatch_input_src
{
    kPINT_PatternMatchInp0Src    = 0U,
    kPINT_PatternMatchInp1Src    = 1U,
    kPINT_PatternMatchInp2Src    = 2U,
    kPINT_PatternMatchInp3Src    = 3U,
    kPINT_PatternMatchInp4Src    = 4U,
    kPINT_PatternMatchInp5Src    = 5U,
    kPINT_PatternMatchInp6Src    = 6U,
    kPINT_PatternMatchInp7Src    = 7U,
    kPINT_SecPatternMatchInp0Src = 0U,
    kPINT_SecPatternMatchInp1Src = 1U,
} pint_pmatch_input_src_t;

/*! @brief PINT Pattern Match bit slice type */
typedef enum _pint_pmatch_bslice
{
    kPINT_PatternMatchBSlice0 = 0U,
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 1U)
    kPINT_PatternMatchBSlice1 = 1U,
#endif
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 2U)
    kPINT_PatternMatchBSlice2 = 2U,
#endif
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 3U)
    kPINT_PatternMatchBSlice3 = 3U,
#endif
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 4U)
    kPINT_PatternMatchBSlice4 = 4U,
#endif
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 5U)
    kPINT_PatternMatchBSlice5 = 5U,
#endif
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 6U)
    kPINT_PatternMatchBSlice6 = 6U,
#endif
#if defined(FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS > 7U)
    kPINT_PatternMatchBSlice7 = 7U,
#endif
#if defined(FSL_FEATURE_SECPINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_SECPINT_NUMBER_OF_CONNECTED_OUTPUTS > 0U)
    kPINT_SecPatternMatchBSlice0 = 0U,
#endif
#if defined(FSL_FEATURE_SECPINT_NUMBER_OF_CONNECTED_OUTPUTS) && (FSL_FEATURE_SECPINT_NUMBER_OF_CONNECTED_OUTPUTS > 1U)
    kPINT_SecPatternMatchBSlice1 = 1U,
#endif
} pint_pmatch_bslice_t;

/*! @brief PINT Pattern Match configuration type */
typedef enum _pint_pmatch_bslice_cfg
{
    kPINT_PatternMatchAlways          = 0U,
    kPINT_PatternMatchStickyRise      = 1U,
    kPINT_PatternMatchStickyFall      = 2U,
    kPINT_PatternMatchStickyBothEdges = 3U,
    kPINT_PatternMatchHigh            = 4U,
    kPINT_PatternMatchLow             = 5U,
    kPINT_PatternMatchNever           = 6U,
    kPINT_PatternMatchBothEdges       = 7U,
} pint_pmatch_bslice_cfg_t;

/*! @brief PINT Callback function. */
typedef void (*pint_cb_t)(pint_pin_int_t pintr, uint32_t pmatch_status);

typedef struct _pint_pmatch_cfg
{
    pint_pmatch_input_src_t bs_src;
    pint_pmatch_bslice_cfg_t bs_cfg;
    bool end_point;
    pint_cb_t callback;
} pint_pmatch_cfg_t;

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief	Initialize PINT peripheral.

 * This function initializes the PINT peripheral and enables the clock.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval None.
 */
void PINT_Init(PINT_Type *base);

/*!
 * @brief	Configure PINT peripheral pin interrupt.

 * This function configures a given pin interrupt.
 *
 * @param base Base address of the PINT peripheral.
 * @param intr Pin interrupt.
 * @param enable Selects detection logic.
 * @param callback Callback.
 *
 * @retval None.
 */
void PINT_PinInterruptConfig(PINT_Type *base, pint_pin_int_t intr, pint_pin_enable_t enable, pint_cb_t callback);

/*!
 * @brief	Get PINT peripheral pin interrupt configuration.

 * This function returns the configuration of a given pin interrupt.
 *
 * @param base Base address of the PINT peripheral.
 * @param pintr Pin interrupt.
 * @param enable Pointer to store the detection logic.
 * @param callback Callback.
 *
 * @retval None.
 */
void PINT_PinInterruptGetConfig(PINT_Type *base, pint_pin_int_t pintr, pint_pin_enable_t *enable, pint_cb_t *callback);

/*!
 * @brief	Clear Selected pin interrupt status only when the pin was triggered by edge-sensitive.

 * This function clears the selected pin interrupt status.
 *
 * @param base Base address of the PINT peripheral.
 * @param pintr Pin interrupt.
 *
 * @retval None.
 */
void PINT_PinInterruptClrStatus(PINT_Type *base, pint_pin_int_t pintr);

/*!
 * @brief	Get Selected pin interrupt status.

 * This function returns the selected pin interrupt status.
 *
 * @param base Base address of the PINT peripheral.
 * @param pintr Pin interrupt.
 *
 * @retval status = 0 No pin interrupt request.  = 1 Selected Pin interrupt request active.
 */
static inline uint32_t PINT_PinInterruptGetStatus(PINT_Type *base, pint_pin_int_t pintr)
{
    return ((base->IST & (1UL << (uint32_t)pintr)) != 0U ? 1U : 0U);
}

/*!
 * @brief	Clear all pin interrupts status only when pins were triggered by edge-sensitive.

 * This function clears the status of all pin interrupts.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval None.
 */
void PINT_PinInterruptClrStatusAll(PINT_Type *base);

/*!
 * @brief	Get all pin interrupts status.

 * This function returns the status of all pin interrupts.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval status Each bit position indicates the status of corresponding pin interrupt.
 * = 0 No pin interrupt request. = 1 Pin interrupt request active.
 */
static inline uint32_t PINT_PinInterruptGetStatusAll(PINT_Type *base)
{
    return (base->IST);
}

/*!
 * @brief	Clear Selected pin interrupt fall flag.

 * This function clears the selected pin interrupt fall flag.
 *
 * @param base Base address of the PINT peripheral.
 * @param pintr Pin interrupt.
 *
 * @retval None.
 */
static inline void PINT_PinInterruptClrFallFlag(PINT_Type *base, pint_pin_int_t pintr)
{
    base->FALL = (1UL << (uint32_t)pintr);
}

/*!
 * @brief	Get selected pin interrupt fall flag.

 * This function returns the selected pin interrupt fall flag.
 *
 * @param base Base address of the PINT peripheral.
 * @param pintr Pin interrupt.
 *
 * @retval flag = 0 Falling edge has not been detected.  = 1 Falling edge has been detected.
 */
static inline uint32_t PINT_PinInterruptGetFallFlag(PINT_Type *base, pint_pin_int_t pintr)
{
    return ((base->FALL & (1UL << (uint32_t)pintr)) != 0U ? 1U : 0U);
}

/*!
 * @brief	Clear all pin interrupt fall flags.

 * This function clears the fall flag for all pin interrupts.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval None.
 */
static inline void PINT_PinInterruptClrFallFlagAll(PINT_Type *base)
{
    base->FALL = PINT_FALL_FDET_MASK;
}

/*!
 * @brief	Get all pin interrupt fall flags.

 * This function returns the fall flag of all pin interrupts.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval flags Each bit position indicates the falling edge detection of the corresponding pin interrupt.
 * 0 Falling edge has not been detected.  = 1 Falling edge has been detected.
 */
static inline uint32_t PINT_PinInterruptGetFallFlagAll(PINT_Type *base)
{
    return (base->FALL);
}

/*!
 * @brief	Clear Selected pin interrupt rise flag.

 * This function clears the selected pin interrupt rise flag.
 *
 * @param base Base address of the PINT peripheral.
 * @param pintr Pin interrupt.
 *
 * @retval None.
 */
static inline void PINT_PinInterruptClrRiseFlag(PINT_Type *base, pint_pin_int_t pintr)
{
    base->RISE = (1UL << (uint32_t)pintr);
}

/*!
 * @brief	Get selected pin interrupt rise flag.

 * This function returns the selected pin interrupt rise flag.
 *
 * @param base Base address of the PINT peripheral.
 * @param pintr Pin interrupt.
 *
 * @retval flag = 0 Rising edge has not been detected.  = 1 Rising edge has been detected.
 */
static inline uint32_t PINT_PinInterruptGetRiseFlag(PINT_Type *base, pint_pin_int_t pintr)
{
    return ((base->RISE & (1UL << (uint32_t)pintr)) != 0U ? 1U : 0U);
}

/*!
 * @brief	Clear all pin interrupt rise flags.

 * This function clears the rise flag for all pin interrupts.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval None.
 */
static inline void PINT_PinInterruptClrRiseFlagAll(PINT_Type *base)
{
    base->RISE = PINT_RISE_RDET_MASK;
}

/*!
 * @brief	Get all pin interrupt rise flags.

 * This function returns the rise flag of all pin interrupts.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval flags Each bit position indicates the rising edge detection of the corresponding pin interrupt.
 * 0 Rising edge has not been detected.  = 1 Rising edge has been detected.
 */
static inline uint32_t PINT_PinInterruptGetRiseFlagAll(PINT_Type *base)
{
    return (base->RISE);
}

/*!
 * @brief	Configure PINT pattern match.

 * This function configures a given pattern match bit slice.
 *
 * @param base Base address of the PINT peripheral.
 * @param bslice Pattern match bit slice number.
 * @param cfg Pointer to bit slice configuration.
 *
 * @retval None.
 */
void PINT_PatternMatchConfig(PINT_Type *base, pint_pmatch_bslice_t bslice, pint_pmatch_cfg_t *cfg);

/*!
 * @brief	Get PINT pattern match configuration.

 * This function returns the configuration of a given pattern match bit slice.
 *
 * @param base Base address of the PINT peripheral.
 * @param bslice Pattern match bit slice number.
 * @param cfg Pointer to bit slice configuration.
 *
 * @retval None.
 */
void PINT_PatternMatchGetConfig(PINT_Type *base, pint_pmatch_bslice_t bslice, pint_pmatch_cfg_t *cfg);

/*!
 * @brief	Get pattern match bit slice status.

 * This function returns the status of selected bit slice.
 *
 * @param base Base address of the PINT peripheral.
 * @param bslice Pattern match bit slice number.
 *
 * @retval status = 0 Match has not been detected.  = 1 Match has been detected.
 */
static inline uint32_t PINT_PatternMatchGetStatus(PINT_Type *base, pint_pmatch_bslice_t bslice)
{
    return ((base->PMCTRL >> PINT_PMCTRL_PMAT_SHIFT) & (1UL << (uint32_t)bslice)) >> (uint32_t)bslice;
}

/*!
 * @brief	Get status of all pattern match bit slices.

 * This function returns the status of all bit slices.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval status Each bit position indicates the match status of corresponding bit slice.
 * = 0 Match has not been detected.  = 1 Match has been detected.
 */
static inline uint32_t PINT_PatternMatchGetStatusAll(PINT_Type *base)
{
    return base->PMCTRL >> PINT_PMCTRL_PMAT_SHIFT;
}

/*!
 * @brief	Reset pattern match detection logic.

 * This function resets the pattern match detection logic if any of the product term is matching.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval pmstatus Each bit position indicates the match status of corresponding bit slice.
 * = 0 Match was detected.  = 1 Match was not detected.
 */
uint32_t PINT_PatternMatchResetDetectLogic(PINT_Type *base);

/*!
 * @brief	Enable pattern match function.

 * This function enables the pattern match function.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval	None.
 */
static inline void PINT_PatternMatchEnable(PINT_Type *base)
{
    base->PMCTRL = (base->PMCTRL & PINT_PMCTRL_ENA_RXEV_MASK) | PINT_PMCTRL_SEL_PMATCH_MASK;
}

/*!
 * @brief	Disable pattern match function.

 * This function disables the pattern match function.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval	None.
 */
static inline void PINT_PatternMatchDisable(PINT_Type *base)
{
    base->PMCTRL = (base->PMCTRL & PINT_PMCTRL_ENA_RXEV_MASK) & ~PINT_PMCTRL_SEL_PMATCH_MASK;
}

/*!
 * @brief	Enable RXEV output.

 * This function enables the pattern match RXEV output.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval	None.
 */
static inline void PINT_PatternMatchEnableRXEV(PINT_Type *base)
{
    base->PMCTRL = (base->PMCTRL & PINT_PMCTRL_SEL_PMATCH_MASK) | PINT_PMCTRL_ENA_RXEV_MASK;
}

/*!
 * @brief	Disable RXEV output.

 * This function disables the pattern match RXEV output.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval	None.
 */
static inline void PINT_PatternMatchDisableRXEV(PINT_Type *base)
{
    base->PMCTRL = (base->PMCTRL & PINT_PMCTRL_SEL_PMATCH_MASK) & ~PINT_PMCTRL_ENA_RXEV_MASK;
}

/*!
 * @brief	Enable callback.

 * This function enables the interrupt for the selected PINT peripheral. Although the pin(s) are monitored
 * as soon as they are enabled, the callback function is not enabled until this function is called.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval None.
 */
void PINT_EnableCallback(PINT_Type *base);

/*!
 * @brief	Disable callback.

 * This function disables the interrupt for the selected PINT peripheral. Although the pins are still
 * being monitored but the callback function is not called.
 *
 * @param base Base address of the peripheral.
 *
 * @retval None.
 */
void PINT_DisableCallback(PINT_Type *base);

/*!
 * @brief	Deinitialize PINT peripheral.

 * This function disables the PINT clock.
 *
 * @param base Base address of the PINT peripheral.
 *
 * @retval None.
 */
void PINT_Deinit(PINT_Type *base);

/*!
 * @brief	enable callback by pin index.

 * This function  enables callback by pin index instead of enabling all pins.
 *
 * @param base Base address of the peripheral.
 * @param pintIdx pin index.
 *
 * @retval None.
 */
void PINT_EnableCallbackByIndex(PINT_Type *base, pint_pin_int_t pintIdx);

/*!
 * @brief disable callback by pin index.

 * This function disables callback by pin index instead of disabling all pins.
 *
 * @param base Base address of the peripheral.
 * @param pintIdx pin index.
 *
 * @retval None.
 */
void PINT_DisableCallbackByIndex(PINT_Type *base, pint_pin_int_t pintIdx);

#ifdef __cplusplus
}
#endif

/*! @} */

#endif /* FSL_PINT_H_ */
