/*
 * Copyright (c) 2023 - 2025, Nordic Semiconductor ASA
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef NRF_STM_H__
#define NRF_STM_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_stm_hal STM HAL
 * @{
 * @ingroup nrf_stm
 * @brief   Hardware access layer for managing the System Trace Macrocell (STM) peripheral.
 */

/**
 * @brief STM features.
 *
 * @warning Registers marked with (1) signal negative situation (disabled, not supported) using
 *          non-zero value. Therefore the register value is negated when retrieving their setting
 *          with nrf_stm_feature_present_check() or setting it with nrf_stm_feature_set().
 *          This is to ensure that true always means enabled/supported and false disabled/not supported.
 *
 * @note Registers marked RO are read-only and may be only used in @ref nrf_stm_feature_check function.
 *       Registers marked RW are read-write and may be used with both @ref nrf_stm_feature_check
 *       and @ref nrf_stm_feature_set functions.
 */
typedef enum {
    NRF_STM_FEATURE_HETER,
    NRF_STM_FEATURE_HEERR,
    NRF_STM_FEATURE_HEMASTR,
    NRF_STM_FEATURE_STM,
    NRF_STM_FEATURE_TSEN,
    NRF_STM_FEATURE_SYNCEN,
    NRF_STM_FEATURE_COMPEN,
    NRF_STM_FEATURE_BUSY,
    NRF_STM_FEATURE_FIFOAF,
    NRF_STM_FEATURE_ASYNCPE,
    NRF_STM_FEATURE_PRIORINVDIS,
    NRF_STM_FEATURE_CLKON,
    NRF_STM_FEATURE_AFREADYHIGH,
    NRF_STM_FEATURE_TSFREQ,
    NRF_STM_FEATURE_FORCETS,
    NRF_STM_FEATURE_TSPRESCALE,
    NRF_STM_FEATURE_HWTEN,
    NRF_STM_FEATURE_SWOEN,
    NRF_STM_FEATURE_SPTER,
    NRF_STM_FEATURE_SPER,
    NRF_STM_FEATURE_SPOVERRIDE,
    NRF_STM_FEATURE_PRIVMASK,
    NRF_STM_FEATURE_INTEGRATION,
    NRF_STM_FEATURE_LC_PRESENT,
    NRF_STM_FEATURE_LC_LOCKED,
    NRF_STM_FEATURE_NSID,
    NRF_STM_FEATURE_NSNID,
    NRF_STM_FEATURE_SID,
    NRF_STM_FEATURE_SNID,
} nrf_stm_feature_t;

/** @brief STM outputs. */
typedef enum {
    NRF_STM_OUTPUT_TRIGOUTSPTE,
    NRF_STM_OUTPUT_TRIGOUTSW,
    NRF_STM_OUTPUT_TRIGOUTHETE,
    NRF_STM_OUTPUT_ASYNCOUT,
    NRF_STM_OUTPUT_ATDATAM_0,
    NRF_STM_OUTPUT_ATDATAM_7,
    NRF_STM_OUTPUT_ATDATAM_15,
    NRF_STM_OUTPUT_ATDATAM_23,
    NRF_STM_OUTPUT_ATDATAM_31,
    NRF_STM_OUTPUT_ATIDM_0,
    NRF_STM_OUTPUT_ATIDM_1,
    NRF_STM_OUTPUT_ATIDM_2,
    NRF_STM_OUTPUT_ATIDM_3,
    NRF_STM_OUTPUT_ATIDM_4,
    NRF_STM_OUTPUT_ATIDM_5,
    NRF_STM_OUTPUT_ATIDM_6,
    NRF_STM_OUTPUT_ATVALIDM,
    NRF_STM_OUTPUT_AFREADYM,
    NRF_STM_OUTPUT_ATBYTESM_0,
    NRF_STM_OUTPUT_ATBYTESM_1,
} nrf_stm_output_t;

/** @brief STM inputs. */
typedef enum {
    NRF_STM_INPUT_ATREADYM,
    NRF_STM_INPUT_AFVALIDM,
} nrf_stm_input_t;

/** @brief Sensitivity of the DMA request to the current buffer level. */
typedef enum {
    NRF_STM_DMACTLR_LT25  = STM_DMACTLR_SENS_LT25,
    NRF_STM_DMACTLR_LT50  = STM_DMACTLR_SENS_LT50,
    NRF_STM_DMACTLR_LT75  = STM_DMACTLR_SENS_LT75,
    NRF_STM_DMACTLR_LT100 = STM_DMACTLR_SENS_LT100,
} nrf_stm_dma_sens_t;

/** @brief Programmer's models. */
typedef enum {
    NRF_STM_HEIDR_CLASS_HARDWARE_EVENT_CONTROL = STM_HEIDR_CLASS_HardwareEventControl,
} nrf_stm_heidr_class_t;

/** @brief STM protocols. */
typedef enum {
    NRF_STM_SFPEAT1R_PROT_STPV2 = STM_SPFEAT1R_PROT_STPV2,
} nrf_stm_spfeat1r_prot_t;

/** @brief Timestamp support modes. */
typedef enum {
    NRF_STM_SPFEAT1R_TS_ABSOLUTE = STM_SPFEAT1R_TS_Absolute,
} nrf_stm_spfeat1r_ts_t;

/** @brief STMTCSR.SYNCEN support modes. */
typedef enum {
    NRF_STM_SPFEAT1R_SYNCEN_READ_AS_ONE = STM_SPFEAT1R_SYNCEN_ReadAsOne,
} nrf_stm_spfeat1r_syncen_t;

/** @brief Data compression on stimulus port support modes. */
typedef enum {
    NRF_STM_SPFEAT2R_SPCOMP_PROGRAMMABLE = STM_SPFEAT2R_SPCOMP_Programmable,
} nrf_stm_spfeat2r_spcomp_t;

/** @brief Stimulus port transaction type support modes. */
typedef enum {
    NRF_STM_SPFEAT2R_SPTRTYPE_INVARIANT_AND_GUARANTEED = STM_SPFEAT2R_SPTRTYPE_InvariantAndGuaranteed,
} nrf_stm_spfeat2r_sptrtype_t;

/** @brief Fundamental data size modes. */
typedef enum {
    NRF_STM_SPFEAT2R_DSIZE_32 = STM_SPFEAT2R_DSIZE_Bits32,
} nrf_stm_spfeat2r_dsize_t;

/** @brief Lock Access Register implementation modes. */
typedef enum {
    NRF_STM_LSR_TYPE_8  = STM_LSR_TYPE_Bits8,
    NRF_STM_LSR_TYPE_32 = STM_LSR_TYPE_Bits32,
} nrf_stm_lsr_type_t;

/** Major classification grouping for this debug or trace component. */
typedef enum {
    NRF_STM_DEVTYPE_MAJOR_TRACE_SOURCE = STM_DEVTYPE_MAJOR_TraceSource,
} nrf_stm_devtype_major_t;

/** Sub-classification for this debug or trace component. */
typedef enum {
    NRF_STM_DEVTYPE_SUB_STIMULUS_TRACE = STM_DEVTYPE_SUB_StimulusTrace,
} nrf_stm_devtype_sub_t;

/**
 * @brief Function for retrieving the state of a feature.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] feature Feature to be checked.
 *
 * @retval true  The feature is supported/enabled.
 * @retval false The feature is not supported/disabled.
 */
NRF_STATIC_INLINE bool nrf_stm_feature_check(NRF_STM_Type const * p_reg,
                                             nrf_stm_feature_t    feature);

/**
 * @brief Function for setting the state of a feature.
 *
 * @warning Only features that are RW may be used in this function.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] feature Feature to be set.
 * @param[in] enable  State to be set.
 */
NRF_STATIC_INLINE void nrf_stm_feature_set(NRF_STM_Type *    p_reg,
                                           nrf_stm_feature_t feature,
                                           bool              enable);

/**
 * @brief Function for retrieving the state of an input.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] input Input to be checked.
 *
 * @retval true  The input is high.
 * @retval false The input is low.
 */
NRF_STATIC_INLINE bool nrf_stm_input_check(NRF_STM_Type const * p_reg, nrf_stm_input_t input);

/**
 * @brief Function for setting the state of an output.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] output Output to be set.
 * @param[in] enable State to be set.
 */
NRF_STATIC_INLINE void nrf_stm_output_set(NRF_STM_Type * p_reg, nrf_stm_output_t output, bool enable);

/**
 * @brief Function for setting the sensivity of the DMA request.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] sens  Sensivity to be set.
 */
NRF_STATIC_INLINE void nrf_stm_dmactlr_sens_set(NRF_STM_Type * p_reg, nrf_stm_dma_sens_t sens);

/**
 * @brief Function for getting the sensivity of the DMA request.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Sensivity of the DMA request.
 */
NRF_STATIC_INLINE nrf_stm_dma_sens_t nrf_stm_dmactlr_sens_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the number of the hardware event trace of the STPv2 master.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Number of the hardware event trace of the STPv2 master.
 */
NRF_STATIC_INLINE uint16_t nrf_stm_hemastr_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the number of hardware events suppoted by the STM.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Number of hardware events suppoted by the STM.
 */
NRF_STATIC_INLINE uint16_t nrf_stm_hefeat1r_numhe_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the programmer's model of hardware event tracking.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Programmer's model.
 */
NRF_STATIC_INLINE nrf_stm_heidr_class_t nrf_stm_heidr_class_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the revision of the programmer's model of hardware event tracking.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Revision of the programmer's model.
 */
NRF_STATIC_INLINE uint8_t nrf_stm_heidr_classrev_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting vendor specific modifications or mappings of hardware event tracking.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Vendor specific modifications or mappings.
 */
NRF_STATIC_INLINE uint8_t nrf_stm_heidr_vendspec_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for setting the ATB Trace ID.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] trace_id ATB Trace ID to be set.
 */
NRF_STATIC_INLINE void nrf_stm_tcsr_traceid_set(NRF_STM_Type * p_reg, uint8_t trace_id);

/**
 * @brief Function for getting the ATB Trace ID.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return ATB Trace ID.
 */
NRF_STATIC_INLINE uint8_t nrf_stm_tcsr_traceid_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the implemented STM protocol.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Implemented STM protocol.
 */
NRF_STATIC_INLINE nrf_stm_spfeat1r_prot_t nrf_stm_spfeat1r_prot_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the timestamp support mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Timestamp support mode.
 */
NRF_STATIC_INLINE nrf_stm_spfeat1r_ts_t nrf_stm_spfeat1r_ts_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the trace bus support.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trace bus support.
 */
NRF_STATIC_INLINE uint8_t nrf_stm_spfeat1r_tracebus_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the trigger control support.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trigger control support.
 */
NRF_STATIC_INLINE uint8_t nrf_stm_spfeat1r_trigctl_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the STMTCSR.SYNCEN support mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return STMTCSR.SYNCEN support mode.
 */
NRF_STATIC_INLINE nrf_stm_spfeat1r_syncen_t nrf_stm_spfeat1r_syncen_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the data compression on stimulus port support mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Data compression on stimulus port support mode.
 */
NRF_STATIC_INLINE nrf_stm_spfeat2r_spcomp_t nrf_stm_spfeat2r_spcomp_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the stimulus port transaction type support mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Stimulus port transaction type support mode.
 */
NRF_STATIC_INLINE nrf_stm_spfeat2r_sptrtype_t nrf_stm_spfeat2r_sptrtype_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the fundamental data size mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Fundamental data size mode.
 */
NRF_STATIC_INLINE nrf_stm_spfeat2r_dsize_t nrf_stm_spfeat2r_dsize_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the number of stimulus ports masters implemented, minus 1.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Number of stimulus ports masters implemented, minus 1.
 */
NRF_STATIC_INLINE uint8_t nrf_stm_spfeat3r_nummast_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for setting the enable write access register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] value Value to be set for enable write access register.
 */
NRF_STATIC_INLINE void nrf_stm_lar_access_set(NRF_STM_Type * p_reg, uint32_t value);

/**
 * @brief Function for getting the Lock Access Register implementation mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Lock Access Register implementation mode.
 */
NRF_STATIC_INLINE nrf_stm_lsr_type_t nrf_stm_lsr_type_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the number of stimulus ports implemented.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Number of stimulus ports implemented.
 */
NRF_STATIC_INLINE uint32_t nrf_stm_devid_numsp_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the major classification grouping for this debug or trace component.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Major classification grouping for this debug or trace component.
 */
NRF_STATIC_INLINE nrf_stm_devtype_major_t nrf_stm_devtype_major_get(NRF_STM_Type const * p_reg);

/**
 * @brief Function for getting the sub-classification for this debug or trace component.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Sub-classification for this debug or trace component.
 */
NRF_STATIC_INLINE nrf_stm_devtype_sub_t nrf_stm_devtype_sub_get(NRF_STM_Type const * p_reg);

#ifndef NRF_DECLARE_ONLY
NRF_STATIC_INLINE bool nrf_stm_feature_check(NRF_STM_Type const * p_reg,
                                             nrf_stm_feature_t    feature)
{
    switch (feature)
    {
        case NRF_STM_FEATURE_HETER:
            return (p_reg->HEFEAT1R & STM_HEFEAT1R_HETER_Msk);
        case NRF_STM_FEATURE_HEERR:
            return (p_reg->HEFEAT1R & STM_HEFEAT1R_HEERR_Msk);
        case NRF_STM_FEATURE_HEMASTR:
            return (p_reg->HEFEAT1R & STM_HEFEAT1R_HEMASTR_Msk);
        case NRF_STM_FEATURE_STM:
            return (p_reg->TCSR & STM_TCSR_EN_Msk);
        case NRF_STM_FEATURE_TSEN:
            return (p_reg->TCSR & STM_TCSR_TSEN_Msk);
        case NRF_STM_FEATURE_SYNCEN:
            return (p_reg->TCSR & STM_TCSR_SYNCEN_Msk);
        case NRF_STM_FEATURE_COMPEN:
            return (p_reg->TCSR & STM_TCSR_COMPEN_Msk);
        case NRF_STM_FEATURE_BUSY:
            return (p_reg->TCSR & STM_TCSR_BUSY_Msk);
        case NRF_STM_FEATURE_FIFOAF:
            return (p_reg->AUXCR & STM_AUXCR_FIFOAF_Msk);
        case NRF_STM_FEATURE_ASYNCPE:
            return (p_reg->AUXCR & STM_AUXCR_ASYNCPE_Msk);
        case NRF_STM_FEATURE_PRIORINVDIS:
            return !(p_reg->AUXCR & STM_AUXCR_PRIORINVDIS_Msk);
        case NRF_STM_FEATURE_CLKON:
            return (p_reg->AUXCR & STM_AUXCR_CLKON_Msk);
        case NRF_STM_FEATURE_AFREADYHIGH:
            return (p_reg->AUXCR & STM_AUXCR_AFREADYHIGH_Msk);
        case NRF_STM_FEATURE_TSFREQ:
            return (p_reg->SPFEAT1R & STM_SPFEAT1R_TSFREQ_Msk);
        case NRF_STM_FEATURE_FORCETS:
            return (p_reg->SPFEAT1R & STM_SPFEAT1R_FORCETS_Msk);
        case NRF_STM_FEATURE_TSPRESCALE:
            return !(p_reg->SPFEAT1R & STM_SPFEAT1R_TSPRESCALE_Msk);
        case NRF_STM_FEATURE_HWTEN:
            return !(p_reg->SPFEAT1R & STM_SPFEAT1R_HWTEN_Msk);
        case NRF_STM_FEATURE_SWOEN:
            return !(p_reg->SPFEAT1R & STM_SPFEAT1R_SWOEN_Msk);
        case NRF_STM_FEATURE_SPTER:
            return (p_reg->SPFEAT2R & STM_SPFEAT2R_SPTER_Msk);
        case NRF_STM_FEATURE_SPER:
            return !(p_reg->SPFEAT2R & STM_SPFEAT2R_SPER_Msk);
        case NRF_STM_FEATURE_SPOVERRIDE:
            return (p_reg->SPFEAT2R & STM_SPFEAT2R_SPOVERRIDE_Msk);
        case NRF_STM_FEATURE_PRIVMASK:
            return !(p_reg->SPFEAT2R & STM_SPFEAT2R_PRIVMASK_Msk);
        case NRF_STM_FEATURE_INTEGRATION:
            return (p_reg->ITCTRL & STM_ITCTRL_INTEGRATIONMODE_Msk);
        case NRF_STM_FEATURE_LC_PRESENT:
            return (p_reg->LSR & STM_LSR_PRESENT_Msk);
        case NRF_STM_FEATURE_LC_LOCKED:
            return (p_reg->LSR & STM_LSR_LOCKED_Msk);
        case NRF_STM_FEATURE_NSID:
            return (p_reg->AUTHSTATUS & STM_AUTHSTATUS_NSID_Msk);
        case NRF_STM_FEATURE_NSNID:
            return (p_reg->AUTHSTATUS & STM_AUTHSTATUS_NSNID_Msk);
        case NRF_STM_FEATURE_SID:
            return (p_reg->AUTHSTATUS & STM_AUTHSTATUS_SID_Msk);
        case NRF_STM_FEATURE_SNID:
            return (p_reg->AUTHSTATUS & STM_AUTHSTATUS_SNID_Msk);
        default:
            NRFX_ASSERT(0);
            return false;
    }
}

NRF_STATIC_INLINE void nrf_stm_feature_set(NRF_STM_Type *    p_reg,
                                           nrf_stm_feature_t feature,
                                           bool              enable)
{
    switch (feature)
    {
        case NRF_STM_FEATURE_STM:
            p_reg->TCSR = ((p_reg->TCSR & ~STM_TCSR_EN_Msk) |
                           (enable << STM_TCSR_EN_Pos));
            break;
        case NRF_STM_FEATURE_TSEN:
            p_reg->TCSR = ((p_reg->TCSR & ~STM_TCSR_TSEN_Msk) |
                           (enable << STM_TCSR_TSEN_Pos));
            break;
        case NRF_STM_FEATURE_SYNCEN:
            p_reg->TCSR = ((p_reg->TCSR & ~STM_TCSR_SYNCEN_Msk) |
                           (enable << STM_TCSR_SYNCEN_Pos));
            break;
        case NRF_STM_FEATURE_COMPEN:
            p_reg->TCSR = ((p_reg->TCSR & ~STM_TCSR_COMPEN_Msk) |
                           (enable << STM_TCSR_COMPEN_Pos));
            break;
        case NRF_STM_FEATURE_BUSY:
            p_reg->TCSR = ((p_reg->TCSR & ~STM_TCSR_BUSY_Msk) |
                           (enable << STM_TCSR_BUSY_Pos));
            break;
        case NRF_STM_FEATURE_FIFOAF:
            p_reg->AUXCR = ((p_reg->AUXCR & ~STM_AUXCR_FIFOAF_Msk) |
                            (enable << STM_AUXCR_FIFOAF_Pos));
            break;
        case NRF_STM_FEATURE_ASYNCPE:
            p_reg->AUXCR = ((p_reg->AUXCR & ~STM_AUXCR_ASYNCPE_Msk) |
                            (enable << STM_AUXCR_ASYNCPE_Pos));
            break;
        case NRF_STM_FEATURE_PRIORINVDIS:
            p_reg->AUXCR = ((p_reg->AUXCR & ~STM_AUXCR_PRIORINVDIS_Msk) |
                            ((!enable) << STM_AUXCR_PRIORINVDIS_Pos));
            break;
        case NRF_STM_FEATURE_CLKON:
            p_reg->AUXCR = ((p_reg->AUXCR & ~STM_AUXCR_CLKON_Msk) |
                            (enable << STM_AUXCR_CLKON_Pos));
            break;
        case NRF_STM_FEATURE_AFREADYHIGH:
            p_reg->AUXCR = ((p_reg->AUXCR & ~STM_AUXCR_AFREADYHIGH_Msk) |
                            (enable << STM_AUXCR_AFREADYHIGH_Pos));
            break;
        case NRF_STM_FEATURE_INTEGRATION:
            p_reg->ITCTRL = ((p_reg->ITCTRL & ~STM_ITCTRL_INTEGRATIONMODE_Msk) |
                             (enable << STM_ITCTRL_INTEGRATIONMODE_Pos));
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE bool nrf_stm_input_check(NRF_STM_Type const * p_reg, nrf_stm_input_t input)
{
    switch (input)
    {
        case NRF_STM_INPUT_ATREADYM:
            return ((p_reg->ITATBCTR2 & STM_ITATBCTR2_ATREADYM_R_Msk)
                    >> STM_ITATBCTR2_ATREADYM_R_Pos);
        case NRF_STM_INPUT_AFVALIDM:
            return ((p_reg->ITATBCTR2 & STM_ITATBCTR2_AFVALIDM_R_Msk)
                    >> STM_ITATBCTR2_AFVALIDM_R_Pos);
        default:
            NRFX_ASSERT(0);
            return false;
    }
}

NRF_STATIC_INLINE void nrf_stm_output_set(NRF_STM_Type * p_reg, nrf_stm_output_t output, bool enable)
{
    switch (output)
    {
        case NRF_STM_OUTPUT_TRIGOUTSPTE:
            p_reg->ITTRIGGER = ((p_reg->ITTRIGGER & ~STM_ITTRIGGER_TRIGOUTSPTE_W_Msk) |
                                (enable << STM_ITTRIGGER_TRIGOUTSPTE_W_Pos));
            break;
        case NRF_STM_OUTPUT_TRIGOUTSW:
            p_reg->ITTRIGGER = ((p_reg->ITTRIGGER & ~STM_ITTRIGGER_TRIGOUTSW_W_Msk) |
                                (enable << STM_ITTRIGGER_TRIGOUTSW_W_Pos));
            break;
        case NRF_STM_OUTPUT_TRIGOUTHETE:
            p_reg->ITTRIGGER = ((p_reg->ITTRIGGER & ~STM_ITTRIGGER_TRIGOUTHETE_W_Msk) |
                                (enable << STM_ITTRIGGER_TRIGOUTHETE_W_Pos));
            break;
        case NRF_STM_OUTPUT_ASYNCOUT:
            p_reg->ITTRIGGER = ((p_reg->ITTRIGGER & ~STM_ITTRIGGER_ASYNCOUT_W_Msk) |
                                (enable << STM_ITTRIGGER_ASYNCOUT_W_Pos));
            break;
        case NRF_STM_OUTPUT_ATDATAM_0:
            p_reg->ITATBDATA0 = ((p_reg->ITATBDATA0 & ~STM_ITATBDATA0_ATDATAM0_W_Msk) |
                                (enable << STM_ITATBDATA0_ATDATAM0_W_Pos));
            break;
        case NRF_STM_OUTPUT_ATDATAM_7:
            p_reg->ITATBDATA0 = ((p_reg->ITATBDATA0 & ~STM_ITATBDATA0_ATDATAM7_W_Msk) |
                                (enable << STM_ITATBDATA0_ATDATAM7_W_Pos));
            break;
        case NRF_STM_OUTPUT_ATDATAM_15:
            p_reg->ITATBDATA0 = ((p_reg->ITATBDATA0 & ~STM_ITATBDATA0_ATDATAM15_W_Msk) |
                                (enable << STM_ITATBDATA0_ATDATAM15_W_Pos));
            break;
        case NRF_STM_OUTPUT_ATDATAM_23:
            p_reg->ITATBDATA0 = ((p_reg->ITATBDATA0 & ~STM_ITATBDATA0_ATDATAM23_W_Msk) |
                                (enable << STM_ITATBDATA0_ATDATAM23_W_Pos));
            break;
        case NRF_STM_OUTPUT_ATDATAM_31:
            p_reg->ITATBDATA0 = ((p_reg->ITATBDATA0 & ~STM_ITATBDATA0_ATDATAM31_W_Msk) |
                                (enable << STM_ITATBDATA0_ATDATAM31_W_Pos));
            break;
        case NRF_STM_OUTPUT_ATIDM_0:
            p_reg->ITATBID = ((p_reg->ITATBID & ~STM_ITATBID_ATIDM_W0_Msk) |
                                (enable << STM_ITATBID_ATIDM_W0_Pos));
            break;
        case NRF_STM_OUTPUT_ATIDM_1:
            p_reg->ITATBID = ((p_reg->ITATBID & ~STM_ITATBID_ATIDM_W1_Msk) |
                                (enable << STM_ITATBID_ATIDM_W1_Pos));
            break;
        case NRF_STM_OUTPUT_ATIDM_2:
            p_reg->ITATBID = ((p_reg->ITATBID & ~STM_ITATBID_ATIDM_W2_Msk) |
                                (enable << STM_ITATBID_ATIDM_W2_Pos));
            break;
        case NRF_STM_OUTPUT_ATIDM_3:
            p_reg->ITATBID = ((p_reg->ITATBID & ~STM_ITATBID_ATIDM_W3_Msk) |
                                (enable << STM_ITATBID_ATIDM_W3_Pos));
            break;
        case NRF_STM_OUTPUT_ATIDM_4:
            p_reg->ITATBID = ((p_reg->ITATBID & ~STM_ITATBID_ATIDM_W4_Msk) |
                                (enable << STM_ITATBID_ATIDM_W4_Pos));
            break;
        case NRF_STM_OUTPUT_ATIDM_5:
            p_reg->ITATBID = ((p_reg->ITATBID & ~STM_ITATBID_ATIDM_W5_Msk) |
                                (enable << STM_ITATBID_ATIDM_W5_Pos));
            break;
        case NRF_STM_OUTPUT_ATIDM_6:
            p_reg->ITATBID = ((p_reg->ITATBID & ~STM_ITATBID_ATIDM_W6_Msk) |
                                (enable << STM_ITATBID_ATIDM_W6_Pos));
            break;
        case NRF_STM_OUTPUT_ATVALIDM:
            p_reg->ITATBCTR0 = ((p_reg->ITATBCTR0 & ~STM_ITATBCTR0_ATVALIDM_W_Msk) |
                                (enable << STM_ITATBCTR0_ATVALIDM_W_Pos));
            break;
        case NRF_STM_OUTPUT_AFREADYM:
            p_reg->ITATBCTR0 = ((p_reg->ITATBCTR0 & ~STM_ITATBCTR0_AFREADYM_W_Msk) |
                                (enable << STM_ITATBCTR0_AFREADYM_W_Pos));
            break;
        case NRF_STM_OUTPUT_ATBYTESM_0:
            p_reg->ITATBCTR0 = ((p_reg->ITATBCTR0 & ~STM_ITATBCTR0_ATBYTESM_W0_Msk) |
                                (enable << STM_ITATBCTR0_ATBYTESM_W0_Pos));
            break;
        case NRF_STM_OUTPUT_ATBYTESM_1:
            p_reg->ITATBCTR0 = ((p_reg->ITATBCTR0 & ~STM_ITATBCTR0_ATBYTESM_W1_Msk) |
                                (enable << STM_ITATBCTR0_ATBYTESM_W1_Pos));
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE void nrf_stm_dmactlr_sens_set(NRF_STM_Type * p_reg, nrf_stm_dma_sens_t sens)
{
    p_reg->DMACTLR = (sens << STM_DMACTLR_SENS_Pos);
}

NRF_STATIC_INLINE nrf_stm_dma_sens_t nrf_stm_dmactlr_sens_get(NRF_STM_Type const * p_reg)
{
    return (nrf_stm_dma_sens_t)((p_reg->DMACTLR & STM_DMACTLR_SENS_Msk)
                                >> STM_DMACTLR_SENS_Pos);
}

NRF_STATIC_INLINE uint16_t nrf_stm_hemastr_get(NRF_STM_Type const * p_reg)
{
    return (uint16_t)((p_reg->HEMASTR & STM_HEMASTR_MASTER_Msk) >> STM_HEMASTR_MASTER_Pos);
}

NRF_STATIC_INLINE uint16_t nrf_stm_hefeat1r_numhe_get(NRF_STM_Type const * p_reg)
{
    return (uint16_t)((p_reg->HEFEAT1R & STM_HEFEAT1R_NUMHE_Msk) >> STM_HEFEAT1R_NUMHE_Pos);
}

NRF_STATIC_INLINE nrf_stm_heidr_class_t nrf_stm_heidr_class_get(NRF_STM_Type const * p_reg)
{
    return (nrf_stm_heidr_class_t)((p_reg->HEIDR & STM_HEIDR_CLASS_Msk) >> STM_HEIDR_CLASS_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_stm_heidr_classrev_get(NRF_STM_Type const * p_reg)
{
    return (uint8_t)((p_reg->HEIDR & STM_HEIDR_CLASSREV_Msk) >> STM_HEIDR_CLASSREV_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_stm_heidr_vendspec_get(NRF_STM_Type const * p_reg)
{
    return (uint8_t)((p_reg->HEIDR & STM_HEIDR_VENDSPEC_Msk) >> STM_HEIDR_VENDSPEC_Pos);
}

NRF_STATIC_INLINE void nrf_stm_tcsr_traceid_set(NRF_STM_Type * p_reg, uint8_t trace_id)
{
    p_reg->TCSR = ((trace_id << STM_TCSR_TRACEID_Pos) & STM_TCSR_TRACEID_Msk);
}

NRF_STATIC_INLINE uint8_t nrf_stm_tcsr_traceid_get(NRF_STM_Type const * p_reg)
{
    return (uint8_t)((p_reg->TCSR & STM_TCSR_TRACEID_Msk) >> STM_TCSR_TRACEID_Pos);
}

NRF_STATIC_INLINE nrf_stm_spfeat1r_prot_t nrf_stm_spfeat1r_prot_get(NRF_STM_Type const * p_reg)
{
    return (nrf_stm_spfeat1r_prot_t)((p_reg->SPFEAT1R & STM_SPFEAT1R_PROT_Msk)
                                     >> STM_SPFEAT1R_PROT_Pos);
}

NRF_STATIC_INLINE nrf_stm_spfeat1r_ts_t nrf_stm_spfeat1r_ts_get(NRF_STM_Type const * p_reg)
{
    return (nrf_stm_spfeat1r_ts_t)((p_reg->SPFEAT1R & STM_SPFEAT1R_TS_Msk)
                                   >> STM_SPFEAT1R_TS_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_stm_spfeat1r_tracebus_get(NRF_STM_Type const * p_reg)
{
    return (uint8_t)((p_reg->SPFEAT1R & STM_SPFEAT1R_TRACEBUS_Msk) >> STM_SPFEAT1R_TRACEBUS_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_stm_spfeat1r_trigctl_get(NRF_STM_Type const * p_reg)
{
    return (uint8_t)((p_reg->SPFEAT1R & STM_SPFEAT1R_TRIGCTL_Msk) >> STM_SPFEAT1R_TRIGCTL_Pos);
}

NRF_STATIC_INLINE nrf_stm_spfeat1r_syncen_t nrf_stm_spfeat1r_syncen_get(NRF_STM_Type const * p_reg)
{
    return (nrf_stm_spfeat1r_syncen_t)((p_reg->SPFEAT1R & STM_SPFEAT1R_SYNCEN_Msk)
                                       >> STM_SPFEAT1R_SYNCEN_Pos);
}

NRF_STATIC_INLINE nrf_stm_spfeat2r_spcomp_t nrf_stm_spfeat2r_spcomp_get(NRF_STM_Type const * p_reg)
{
    return (nrf_stm_spfeat2r_spcomp_t)((p_reg->SPFEAT2R & STM_SPFEAT2R_SPCOMP_Msk)
                                       >> STM_SPFEAT2R_SPCOMP_Pos);
}

NRF_STATIC_INLINE nrf_stm_spfeat2r_sptrtype_t nrf_stm_spfeat2r_sptrtype_get(NRF_STM_Type const * p_reg)
{
    return (nrf_stm_spfeat2r_sptrtype_t)((p_reg->SPFEAT2R & STM_SPFEAT2R_SPTRTYPE_Msk)
                                         >> STM_SPFEAT2R_SPTRTYPE_Pos);
}

NRF_STATIC_INLINE nrf_stm_spfeat2r_dsize_t nrf_stm_spfeat2r_dsize_get(NRF_STM_Type const * p_reg)
{
    return (nrf_stm_spfeat2r_dsize_t)((p_reg->SPFEAT2R & STM_SPFEAT2R_DSIZE_Msk)
                                      >> STM_SPFEAT2R_DSIZE_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_stm_spfeat3r_nummast_get(NRF_STM_Type const * p_reg)
{
    return (uint8_t)((p_reg->SPFEAT3R & STM_SPFEAT3R_NUMMAST_Msk) >> STM_SPFEAT3R_NUMMAST_Pos);
}

NRF_STATIC_INLINE void nrf_stm_lar_access_set(NRF_STM_Type * p_reg, uint32_t value)
{
    p_reg->LAR = ((value << STM_LAR_ACCESS_Pos) & STM_LAR_ACCESS_Msk);
}

NRF_STATIC_INLINE nrf_stm_lsr_type_t nrf_stm_lsr_type_get(NRF_STM_Type const * p_reg)
{
    return (nrf_stm_lsr_type_t)((p_reg->LSR & STM_LSR_TYPE_Msk) >> STM_LSR_TYPE_Pos);
}

NRF_STATIC_INLINE uint32_t nrf_stm_devid_numsp_get(NRF_STM_Type const * p_reg)
{
    return ((p_reg->DEVID & STM_DEVID_NUMSP_Msk) >> STM_DEVID_NUMSP_Pos);
}

NRF_STATIC_INLINE nrf_stm_devtype_major_t nrf_stm_devtype_major_get(NRF_STM_Type const * p_reg)
{
    return (nrf_stm_devtype_major_t)((p_reg->DEVTYPE & STM_DEVTYPE_MAJOR_Msk)
                                     >> STM_DEVTYPE_MAJOR_Pos);
}

NRF_STATIC_INLINE nrf_stm_devtype_sub_t nrf_stm_devtype_sub_get(NRF_STM_Type const * p_reg)
{
    return (nrf_stm_devtype_sub_t)((p_reg->DEVTYPE & STM_DEVTYPE_SUB_Msk) >> STM_DEVTYPE_SUB_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_STM_H__
