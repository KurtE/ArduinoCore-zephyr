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

#ifndef NRF_RESETINFO_H_
#define NRF_RESETINFO_H_

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_resetinfo_hal RESETINFO HAL
 * @{
 * @ingroup nrf_resetinfo
 * @brief   Hardware access layer for managing the Reset information peripheral (RESETINFO).
 */

#if defined(RESETINFO_RESETREAS_ERROR_STATUS_ERRORSTATUS_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether intermediate RESETREAS structure is present. */
#define NRF_RESETINFO_HAS_RESETREAS_STRUCT 1
#else
#define NRF_RESETINFO_HAS_RESETREAS_STRUCT 0
#endif

#if defined(RESETINFO_RESETREAS_GLOBAL_SECWDT0_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether multiple secure domain watchdog resets are present. */
#define NRF_RESETINFO_HAS_MULTIPLE_SECWDT 1
#else
#define NRF_RESETINFO_HAS_MULTIPLE_SECWDT 0
#endif

#if defined(RESETINFO_MASKLOCKUP_MASK_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether CPU lockup signal masking is present. */
#define NRF_RESETINFO_HAS_MASKLOCKUP 1
#else
#define NRF_RESETINFO_HAS_MASKLOCKUP 0
#endif

#if defined(RESETINFO_RESETREAS_LOCAL_CROSSDOMAIN_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether CROSSDOMAIN local reset reason is present. */
#define NRF_RESETINFO_HAS_LOCAL_CROSSDOMAIN 1
#else
#define NRF_RESETINFO_HAS_LOCAL_CROSSDOMAIN 0
#endif

#if defined(RESETINFO_RESETREAS_LOCAL_DOG_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether DOG local reset reason is present. */
#define NRF_RESETINFO_HAS_LOCAL_DOG 1
#else
#define NRF_RESETINFO_HAS_LOCAL_DOG 0
#endif

#if defined(RESETINFO_RESETREAS_LOCAL_WDT0_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether WDT local reset reason is present. */
#define NRF_RESETINFO_HAS_LOCAL_WDT 1
#else
#define NRF_RESETINFO_HAS_LOCAL_WDT 0
#endif

#if defined(RESETINFO_ERROR_STATUS_ERRORSTATUS_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Maximum value of error status. */
#define NRF_RESETINFO_ERROR_STATUS_MAX RESETINFO_ERROR_STATUS_ERRORSTATUS_Msk
#else
#define NRF_RESETINFO_ERROR_STATUS_MAX RESETINFO_RESETREAS_ERROR_STATUS_ERRORSTATUS_Msk
#endif

/** @brief Global reset reason mask. */
typedef enum
{
    NRF_RESETINFO_RESETREAS_GLOBAL_POR_MASK       = RESETINFO_RESETREAS_GLOBAL_RESETPORONLY_Msk,
    NRF_RESETINFO_RESETREAS_GLOBAL_PIN_MASK       = RESETINFO_RESETREAS_GLOBAL_RESETPIN_Msk,
    NRF_RESETINFO_RESETREAS_GLOBAL_DOG_MASK       = RESETINFO_RESETREAS_GLOBAL_DOG_Msk,
    NRF_RESETINFO_RESETREAS_GLOBAL_CTRLAP_MASK    = RESETINFO_RESETREAS_GLOBAL_CTRLAP_Msk,
    NRF_RESETINFO_RESETREAS_GLOBAL_SECSREQ_MASK   = RESETINFO_RESETREAS_GLOBAL_SECSREQ_Msk,
#if NRF_RESETINFO_HAS_MULTIPLE_SECWDT
    NRF_RESETINFO_RESETREAS_GLOBAL_SECWDT0_MASK   = RESETINFO_RESETREAS_GLOBAL_SECWDT0_Msk,
    NRF_RESETINFO_RESETREAS_GLOBAL_SECWDT1_MASK   = RESETINFO_RESETREAS_GLOBAL_SECWDT1_Msk,
#else
    NRF_RESETINFO_RESETREAS_GLOBAL_SECWDT0_MASK   = RESETINFO_RESETREAS_GLOBAL_SECWDT_Msk,
#endif
    NRF_RESETINFO_RESETREAS_GLOBAL_SECLOCKUP_MASK = RESETINFO_RESETREAS_GLOBAL_SECLOCKUP_Msk,
    NRF_RESETINFO_RESETREAS_GLOBAL_SECTAMPER_MASK = RESETINFO_RESETREAS_GLOBAL_SECTAMPER_Msk,
    NRF_RESETINFO_RESETREAS_GLOBAL_GPIO_MASK      = RESETINFO_RESETREAS_GLOBAL_OFF_Msk,
    NRF_RESETINFO_RESETREAS_GLOBAL_LPCOMP_MASK    = RESETINFO_RESETREAS_GLOBAL_LPCOMP_Msk,
    NRF_RESETINFO_RESETREAS_GLOBAL_DIF_MASK       = RESETINFO_RESETREAS_GLOBAL_DIF_Msk,
    NRF_RESETINFO_RESETREAS_GLOBAL_GRTC_MASK      = RESETINFO_RESETREAS_GLOBAL_GRTC_Msk,
    NRF_RESETINFO_RESETREAS_GLOBAL_NFC_MASK       = RESETINFO_RESETREAS_GLOBAL_NFC_Msk,
    NRF_RESETINFO_RESETREAS_GLOBAL_VUSB_MASK      = RESETINFO_RESETREAS_GLOBAL_VUSB_Msk,
} nrf_resetinfo_resetreas_global_mask_t;

/** @brief Local reset reason mask. */
typedef enum
{
#if NRF_RESETINFO_HAS_LOCAL_WDT
    NRF_RESETINFO_RESETREAS_LOCAL_WDT0_MASK        = RESETINFO_RESETREAS_LOCAL_WDT0_Msk,
    NRF_RESETINFO_RESETREAS_LOCAL_WDT1_MASK        = RESETINFO_RESETREAS_LOCAL_WDT1_Msk,
#endif
#if NRF_RESETINFO_HAS_LOCAL_DOG
    NRF_RESETINFO_RESETREAS_LOCAL_DOG_MASK         = RESETINFO_RESETREAS_LOCAL_DOG_Msk,
    NRF_RESETINFO_RESETREAS_LOCAL_DOGNS_MASK       = RESETINFO_RESETREAS_LOCAL_DOGNS_Msk,
#endif
    NRF_RESETINFO_RESETREAS_LOCAL_SREQ_MASK        = RESETINFO_RESETREAS_LOCAL_SREQ_Msk,
    NRF_RESETINFO_RESETREAS_LOCAL_LOCKUP_MASK      = RESETINFO_RESETREAS_LOCAL_LOCKUP_Msk,
#if NRF_RESETINFO_HAS_LOCAL_CROSSDOMAIN
    NRF_RESETINFO_RESETREAS_LOCAL_CROSSDOMAIN_MASK = RESETINFO_RESETREAS_LOCAL_CROSSDOMAIN_Msk,
#endif
    NRF_RESETINFO_RESETREAS_LOCAL_UNRETAINED_MASK  = RESETINFO_RESETREAS_LOCAL_UNRETAINEDWAKE_Msk,
} nrf_resetinfo_resetreas_local_mask_t;

/**
 * @brief Function for setting the global reset reason.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of reasons to be set,
 *                  constructed from @ref nrf_resetinfo_resetreas_global_mask_t enumerator values.
 */
NRF_STATIC_INLINE void nrf_resetinfo_resetreas_global_set(NRF_RESETINFO_Type * p_reg,
                                                          uint32_t             mask);

/**
 * @brief Function for getting the global reset reason.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Mask of detected global reset reasons constructed with @ref nrf_resetinfo_resetreas_global_mask_t.
 */
NRF_STATIC_INLINE uint32_t nrf_resetinfo_resetreas_global_get(NRF_RESETINFO_Type const * p_reg);

/**
 * @brief Function for setting the local reset reason.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of reasons to be set,
 *                  constructed from @ref nrf_resetinfo_resetreas_local_mask_t enumerator values.
 */
NRF_STATIC_INLINE void nrf_resetinfo_resetreas_local_set(NRF_RESETINFO_Type * p_reg,
                                                         uint32_t             mask);

/**
 * @brief Function for getting the local reset reason.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Mask of detected local reset reasons constructed with @ref nrf_resetinfo_resetreas_local_mask_t.
 */
NRF_STATIC_INLINE uint32_t nrf_resetinfo_resetreas_local_get(NRF_RESETINFO_Type const * p_reg);

/**
 * @brief Function for setting the reset error status.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] status Reset error status to be set.
 */
NRF_STATIC_INLINE void nrf_resetinfo_error_status_set(NRF_RESETINFO_Type * p_reg, uint8_t status);

/**
 * @brief Function for getting the reset error status.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Reset error status.
 */
NRF_STATIC_INLINE uint8_t nrf_resetinfo_error_status_get(NRF_RESETINFO_Type const * p_reg);

/**
 * @brief Function for setting the reset error address.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] address Reset error address to be set.
 */
NRF_STATIC_INLINE void nrf_resetinfo_error_address_set(NRF_RESETINFO_Type * p_reg,
                                                       uint32_t             address);

/**
 * @brief Function for getting the reset error address.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Reset error address.
 */
NRF_STATIC_INLINE uint32_t nrf_resetinfo_error_address_get(NRF_RESETINFO_Type const * p_reg);

/**
 * @brief Function for setting the flag indicating presence of valid restore image in RAM.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if valid restore image is present in RAM, false otherwise.
 */
NRF_STATIC_INLINE void nrf_resetinfo_restore_valid_set(NRF_RESETINFO_Type * p_reg, bool enable);

/**
 * @brief Function for getting the flag indicating presence of valid restore image in RAM.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  Valid restore image is present in RAM.
 * @retval false Valid restore image is not present in RAM.
 */
NRF_STATIC_INLINE bool nrf_resetinfo_restore_valid_check(NRF_RESETINFO_Type const * p_reg);

#if NRF_RESETINFO_HAS_MASKLOCKUP
/**
 * @brief Function for setting the flag indicating if CPU lockup signal is to be masked.
 *
 * @note Prevents the CPU lockup signal from triggering a local reset.
 *       Needed to be able to start debug session.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if lockup signal is to be masked, false otherwise.
 */
NRF_STATIC_INLINE void nrf_resetinfo_mask_lockup_set(NRF_RESETINFO_Type * p_reg, bool enable);

/**
 * @brief Function for getting the flag indicating if CPU lockup signal is to be masked.
 *
 * @note Prevents the CPU lockup signal from triggering a local reset.
 *       Needed to be able to start debug session.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  CPU lockup signal is to be masked.
 * @retval false CPU lockup signal is not to be masked.
 */
NRF_STATIC_INLINE bool nrf_resetinfo_mask_lockup_check(NRF_RESETINFO_Type const * p_reg);
#endif

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_resetinfo_resetreas_global_set(NRF_RESETINFO_Type * p_reg,
                                                          uint32_t             mask)
{
    p_reg->RESETREAS.GLOBAL = mask;
}

NRF_STATIC_INLINE uint32_t nrf_resetinfo_resetreas_global_get(NRF_RESETINFO_Type const * p_reg)
{
    return p_reg->RESETREAS.GLOBAL;
}

NRF_STATIC_INLINE void nrf_resetinfo_resetreas_local_set(NRF_RESETINFO_Type * p_reg,
                                                         uint32_t             mask)
{
    p_reg->RESETREAS.LOCAL = mask;
}

NRF_STATIC_INLINE uint32_t nrf_resetinfo_resetreas_local_get(NRF_RESETINFO_Type const * p_reg)
{
    return p_reg->RESETREAS.LOCAL;
}

NRF_STATIC_INLINE void nrf_resetinfo_error_status_set(NRF_RESETINFO_Type * p_reg, uint8_t status)
{
    NRFX_ASSERT(status <= NRF_RESETINFO_ERROR_STATUS_MAX);
#if NRF_RESETINFO_HAS_RESETREAS_STRUCT
    p_reg->RESETREAS.ERROR.STATUS = status;
#else
    p_reg->ERROR.STATUS = status;
#endif
}

NRF_STATIC_INLINE uint8_t nrf_resetinfo_error_status_get(NRF_RESETINFO_Type const * p_reg)
{
#if NRF_RESETINFO_HAS_RESETREAS_STRUCT
    return (uint8_t)p_reg->RESETREAS.ERROR.STATUS;
#else
    return (uint8_t)p_reg->ERROR.STATUS;
#endif
}

NRF_STATIC_INLINE void nrf_resetinfo_error_address_set(NRF_RESETINFO_Type * p_reg,
                                                       uint32_t             address)
{
#if NRF_RESETINFO_HAS_RESETREAS_STRUCT
    p_reg->RESETREAS.ERROR.ADDRESS = address;
#else
    p_reg->ERROR.ADDRESS = address;
#endif
}

NRF_STATIC_INLINE uint32_t nrf_resetinfo_error_address_get(NRF_RESETINFO_Type const * p_reg)
{
#if NRF_RESETINFO_HAS_RESETREAS_STRUCT
    return p_reg->RESETREAS.ERROR.ADDRESS;
#else
    return p_reg->ERROR.ADDRESS;
#endif
}

NRF_STATIC_INLINE void nrf_resetinfo_restore_valid_set(NRF_RESETINFO_Type * p_reg, bool enable)
{
    p_reg->RESTOREVALID = (enable ? RESETINFO_RESTOREVALID_RESTOREVALID_Present :
                           RESETINFO_RESTOREVALID_RESTOREVALID_NotPreset)
                          << RESETINFO_RESTOREVALID_RESTOREVALID_Pos;
}

NRF_STATIC_INLINE bool nrf_resetinfo_restore_valid_check(NRF_RESETINFO_Type const * p_reg)
{
    return ((p_reg->RESTOREVALID & RESETINFO_RESTOREVALID_RESTOREVALID_Msk)
            >> RESETINFO_RESTOREVALID_RESTOREVALID_Pos)
           == RESETINFO_RESTOREVALID_RESTOREVALID_Present;
}

#if NRF_RESETINFO_HAS_MASKLOCKUP
NRF_STATIC_INLINE void nrf_resetinfo_mask_lockup_set(NRF_RESETINFO_Type * p_reg, bool enable)
{
    p_reg->MASKLOCKUP = (enable ? RESETINFO_MASKLOCKUP_MASK_Mask :
                         RESETINFO_MASKLOCKUP_MASK_NotMask)
                        << RESETINFO_MASKLOCKUP_MASK_Pos;
}

NRF_STATIC_INLINE bool nrf_resetinfo_mask_lockup_check(NRF_RESETINFO_Type const * p_reg)
{
    return ((p_reg->MASKLOCKUP & RESETINFO_MASKLOCKUP_MASK_Msk)
            >> RESETINFO_MASKLOCKUP_MASK_Pos)
           == RESETINFO_MASKLOCKUP_MASK_Mask;
}
#endif

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* NRF_RESETINFO_H_ */
