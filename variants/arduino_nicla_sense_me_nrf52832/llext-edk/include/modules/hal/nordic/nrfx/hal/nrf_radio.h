/*
 * Copyright (c) 2018 - 2025, Nordic Semiconductor ASA
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

#ifndef NRF_RADIO_H__
#define NRF_RADIO_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_radio_hal RADIO HAL
 * @{
 * @ingroup nrf_radio
 * @brief   Hardware access layer for managing the RADIO peripheral.
 */

#if defined(DPPI_PRESENT) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol specifying offset between address of TASK/EVENT register and address of associated SUBSCRIBE/PUBLISH register. */
#define NRF_RADIO_DPPI_OFFSET NRF_SUBSCRIBE_PUBLISH_OFFSET_RADIO
#endif // defined(DPPI_PRESENT) || defined(__NRFX_DOXYGEN__)

#if defined(RADIO_DATAWHITE_POLY_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether data whitening configuration register is present. **/
#define NRF_RADIO_HAS_DATAWHITE 1
#else
#define NRF_RADIO_HAS_DATAWHITE 0
#endif

/** @brief RADIO tasks. */
typedef enum
{
    NRF_RADIO_TASK_TXEN      = offsetof(NRF_RADIO_Type, TASKS_TXEN),
    NRF_RADIO_TASK_RXEN      = offsetof(NRF_RADIO_Type, TASKS_RXEN),
    NRF_RADIO_TASK_START     = offsetof(NRF_RADIO_Type, TASKS_START),
    NRF_RADIO_TASK_STOP      = offsetof(NRF_RADIO_Type, TASKS_STOP),
    NRF_RADIO_TASK_DISABLE   = offsetof(NRF_RADIO_Type, TASKS_DISABLE),
    NRF_RADIO_TASK_RSSISTART = offsetof(NRF_RADIO_Type, TASKS_RSSISTART),
#if defined(RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Msk) || \
    defined(RADIO_SHORTS_DISABLED_RSSISTOP_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TASK_RSSISTOP  = offsetof(NRF_RADIO_Type, TASKS_RSSISTOP),
#endif
    NRF_RADIO_TASK_BCSTART   = offsetof(NRF_RADIO_Type, TASKS_BCSTART),
    NRF_RADIO_TASK_BCSTOP    = offsetof(NRF_RADIO_Type, TASKS_BCSTOP),
#if defined(RADIO_TASKS_EDSTART_TASKS_EDSTART_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TASK_EDSTART   = offsetof(NRF_RADIO_Type, TASKS_EDSTART),
#endif
#if defined(RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TASK_EDSTOP    = offsetof(NRF_RADIO_Type, TASKS_EDSTOP),
#endif
#if defined(RADIO_TASKS_CCASTART_TASKS_CCASTART_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TASK_CCASTART  = offsetof(NRF_RADIO_Type, TASKS_CCASTART),
#endif
#if defined(RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TASK_CCASTOP   = offsetof(NRF_RADIO_Type, TASKS_CCASTOP),
#endif
#if defined(RADIO_TASKS_SOFTRESET_TASKS_SOFTRESET_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TASK_SOFTRESET = offsetof(NRF_RADIO_Type, TASKS_SOFTRESET), /**< Reset all public registers, but with these exceptions:
                                                                           *   DMA registers and EVENT/INTEN/SUBSCRIBE/PUBLISH
                                                                           *   registers. Only to be used in DISABLED state. */
#endif
} nrf_radio_task_t;

/** @brief RADIO events. */
typedef enum
{
    NRF_RADIO_EVENT_READY      = offsetof(NRF_RADIO_Type, EVENTS_READY),
    NRF_RADIO_EVENT_ADDRESS    = offsetof(NRF_RADIO_Type, EVENTS_ADDRESS),
    NRF_RADIO_EVENT_PAYLOAD    = offsetof(NRF_RADIO_Type, EVENTS_PAYLOAD),
    NRF_RADIO_EVENT_END        = offsetof(NRF_RADIO_Type, EVENTS_END),
    NRF_RADIO_EVENT_DISABLED   = offsetof(NRF_RADIO_Type, EVENTS_DISABLED),
    NRF_RADIO_EVENT_DEVMATCH   = offsetof(NRF_RADIO_Type, EVENTS_DEVMATCH),
    NRF_RADIO_EVENT_DEVMISS    = offsetof(NRF_RADIO_Type, EVENTS_DEVMISS),
#if defined(RADIO_INTENSET_RSSIEND_Msk) ||   \
    defined(RADIO_INTENSET00_RSSIEND_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_RSSIEND    = offsetof(NRF_RADIO_Type, EVENTS_RSSIEND),
#endif
    NRF_RADIO_EVENT_BCMATCH    = offsetof(NRF_RADIO_Type, EVENTS_BCMATCH),
#if defined(RADIO_INTENSET_CRCOK_Msk) ||   \
    defined(RADIO_INTENSET00_CRCOK_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_CRCOK      = offsetof(NRF_RADIO_Type, EVENTS_CRCOK),
#endif
#if defined(RADIO_INTENSET_CRCERROR_Msk) ||   \
    defined(RADIO_INTENSET00_CRCERROR_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_CRCERROR   = offsetof(NRF_RADIO_Type, EVENTS_CRCERROR),
#endif
#if defined(RADIO_INTENSET_FRAMESTART_Msk) ||   \
    defined(RADIO_INTENSET00_FRAMESTART_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_FRAMESTART = offsetof(NRF_RADIO_Type, EVENTS_FRAMESTART),
#endif
#if defined(RADIO_INTENSET_EDEND_Msk) ||   \
    defined(RADIO_INTENSET00_EDEND_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_EDEND      = offsetof(NRF_RADIO_Type, EVENTS_EDEND),
#endif
#if defined(RADIO_INTENSET_EDSTOPPED_Msk) ||   \
    defined(RADIO_INTENSET00_EDSTOPPED_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_EDSTOPPED  = offsetof(NRF_RADIO_Type, EVENTS_EDSTOPPED),
#endif
#if defined(RADIO_INTENSET_CCAIDLE_Msk) ||   \
    defined(RADIO_INTENSET00_CCAIDLE_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_CCAIDLE    = offsetof(NRF_RADIO_Type, EVENTS_CCAIDLE),
#endif
#if defined(RADIO_INTENSET_CCABUSY_Msk) ||   \
    defined(RADIO_INTENSET00_CCABUSY_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_CCABUSY    = offsetof(NRF_RADIO_Type, EVENTS_CCABUSY),
#endif
#if defined(RADIO_INTENSET_CCASTOPPED_Msk) ||   \
    defined(RADIO_INTENSET00_CCASTOPPED_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_CCASTOPPED = offsetof(NRF_RADIO_Type, EVENTS_CCASTOPPED),
#endif
#if defined(RADIO_INTENSET_RATEBOOST_Msk) ||   \
    defined(RADIO_INTENSET00_RATEBOOST_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_RATEBOOST  = offsetof(NRF_RADIO_Type, EVENTS_RATEBOOST),
#endif
#if defined(RADIO_INTENSET_TXREADY_Msk) ||   \
    defined(RADIO_INTENSET00_TXREADY_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_TXREADY    = offsetof(NRF_RADIO_Type, EVENTS_TXREADY),
#endif
#if defined(RADIO_INTENSET_RXREADY_Msk) ||   \
    defined(RADIO_INTENSET00_RXREADY_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_RXREADY    = offsetof(NRF_RADIO_Type, EVENTS_RXREADY),
#endif
#if defined(RADIO_INTENSET_MHRMATCH_Msk) ||   \
    defined(RADIO_INTENSET00_MHRMATCH_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_MHRMATCH   = offsetof(NRF_RADIO_Type, EVENTS_MHRMATCH),
#endif
#if defined(RADIO_INTENSET_PHYEND_Msk) ||   \
    defined(RADIO_INTENSET00_PHYEND_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_PHYEND     = offsetof(NRF_RADIO_Type, EVENTS_PHYEND),     /**< Generated in Ble_LR125Kbit, Ble_LR500Kbit
                                                                               *   and BleIeee802154_250Kbit modes when last
                                                                               *   bit is sent on the air. */
#endif
#if defined(RADIO_INTENSET_SYNC_Msk) ||   \
    defined(RADIO_INTENSET00_SYNC_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_SYNC       = offsetof(NRF_RADIO_Type, EVENTS_SYNC),       /**< Generated in Ble_LR125Kbit, Ble_LR500Kbit
                                                                               *   and BleIeee802154_250Kbit modes when possible
                                                                               *   preamble has been received. */
#endif
#if defined(RADIO_INTENSET_CTEPRESENT_Msk) ||   \
    defined(RADIO_INTENSET00_CTEPRESENT_Msk) || \
    defined(__NRFX_DOXYGEN__)
    NRF_RADIO_EVENT_CTEPRESENT = offsetof(NRF_RADIO_Type, EVENTS_CTEPRESENT)
#endif
} nrf_radio_event_t;

/** @brief RADIO interrupts. */
typedef enum
{
#if defined(RADIO_INTENSET_READY_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_READY_MASK      = RADIO_INTENSET_READY_Msk,
#elif defined(RADIO_INTENSET00_READY_Msk)
    NRF_RADIO_INT_READY_MASK      = RADIO_INTENSET00_READY_Msk,
#endif
#if defined(RADIO_INTENSET_ADDRESS_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_ADDRESS_MASK    = RADIO_INTENSET_ADDRESS_Msk,
#elif defined(RADIO_INTENSET00_ADDRESS_Msk)
    NRF_RADIO_INT_ADDRESS_MASK    = RADIO_INTENSET00_ADDRESS_Msk,
#endif
#if defined(RADIO_INTENSET_PAYLOAD_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_PAYLOAD_MASK    = RADIO_INTENSET_PAYLOAD_Msk,
#elif defined(RADIO_INTENSET00_PAYLOAD_Msk)
    NRF_RADIO_INT_PAYLOAD_MASK    = RADIO_INTENSET00_PAYLOAD_Msk,
#endif
#if defined(RADIO_INTENSET_END_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_END_MASK        = RADIO_INTENSET_END_Msk,
#elif defined(RADIO_INTENSET00_END_Msk)
    NRF_RADIO_INT_END_MASK        = RADIO_INTENSET00_END_Msk,
#endif
#if defined(RADIO_INTENSET_DISABLED_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_DISABLED_MASK   = RADIO_INTENSET_DISABLED_Msk,
#elif defined(RADIO_INTENSET00_DISABLED_Msk)
    NRF_RADIO_INT_DISABLED_MASK   = RADIO_INTENSET00_DISABLED_Msk,
#endif
#if defined(RADIO_INTENSET_DEVMATCH_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_DEVMATCH_MASK   = RADIO_INTENSET_DEVMATCH_Msk,
#elif defined(RADIO_INTENSET00_DEVMATCH_Msk)
    NRF_RADIO_INT_DEVMATCH_MASK   = RADIO_INTENSET00_DEVMATCH_Msk,
#endif
#if defined(RADIO_INTENSET_DEVMISS_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_DEVMISS_MASK    = RADIO_INTENSET_DEVMISS_Msk,
#elif defined(RADIO_INTENSET00_DEVMISS_Msk)
    NRF_RADIO_INT_DEVMISS_MASK    = RADIO_INTENSET00_DEVMISS_Msk,
#endif
#if defined(RADIO_INTENSET_RSSIEND_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_RSSIEND_MASK    = RADIO_INTENSET_RSSIEND_Msk,
#elif defined(RADIO_INTENSET00_RSSIEND_Msk)
    NRF_RADIO_INT_RSSIEND_MASK    = RADIO_INTENSET00_RSSIEND_Msk,
#endif
#if defined(RADIO_INTENSET_BCMATCH_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_BCMATCH_MASK    = RADIO_INTENSET_BCMATCH_Msk,
#elif defined(RADIO_INTENSET00_BCMATCH_Msk)
    NRF_RADIO_INT_BCMATCH_MASK    = RADIO_INTENSET00_BCMATCH_Msk,
#endif
#if defined(RADIO_INTENSET_CRCOK_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_CRCOK_MASK      = RADIO_INTENSET_CRCOK_Msk,
#elif defined(RADIO_INTENSET00_CRCOK_Msk)
    NRF_RADIO_INT_CRCOK_MASK      = RADIO_INTENSET00_CRCOK_Msk,
#endif
#if defined(RADIO_INTENSET_CRCERROR_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_CRCERROR_MASK   = RADIO_INTENSET_CRCERROR_Msk,
#elif defined(RADIO_INTENSET00_CRCERROR_Msk)
    NRF_RADIO_INT_CRCERROR_MASK   = RADIO_INTENSET00_CRCERROR_Msk,
#endif
#if defined(RADIO_INTENSET_FRAMESTART_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_FRAMESTART_MASK = RADIO_INTENSET_FRAMESTART_Msk,
#elif defined(RADIO_INTENSET00_FRAMESTART_Msk)
    NRF_RADIO_INT_FRAMESTART_MASK = RADIO_INTENSET00_FRAMESTART_Msk,
#endif
#if defined(RADIO_INTENSET_EDEND_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_EDEND_MASK      = RADIO_INTENSET_EDEND_Msk,
#elif defined(RADIO_INTENSET00_EDEND_Msk)
    NRF_RADIO_INT_EDEND_MASK      = RADIO_INTENSET00_EDEND_Msk,
#endif
#if defined(RADIO_INTENSET_EDSTOPPED_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_EDSTOPPED_MASK  = RADIO_INTENSET_EDSTOPPED_Msk,
#elif defined(RADIO_INTENSET00_EDSTOPPED_Msk)
    NRF_RADIO_INT_EDSTOPPED_MASK  = RADIO_INTENSET00_EDSTOPPED_Msk,
#endif
#if defined(RADIO_INTENSET_CCAIDLE_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_CCAIDLE_MASK    = RADIO_INTENSET_CCAIDLE_Msk,
#elif defined(RADIO_INTENSET00_CCAIDLE_Msk)
    NRF_RADIO_INT_CCAIDLE_MASK    = RADIO_INTENSET00_CCAIDLE_Msk,
#endif
#if defined(RADIO_INTENSET_CCABUSY_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_CCABUSY_MASK    = RADIO_INTENSET_CCABUSY_Msk,
#elif defined(RADIO_INTENSET00_CCABUSY_Msk)
    NRF_RADIO_INT_CCABUSY_MASK    = RADIO_INTENSET00_CCABUSY_Msk,
#endif
#if defined(RADIO_INTENSET_CCASTOPPED_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_CCASTOPPED_MASK = RADIO_INTENSET_CCASTOPPED_Msk,
#elif defined(RADIO_INTENSET00_CCASTOPPED_Msk)
    NRF_RADIO_INT_CCASTOPPED_MASK = RADIO_INTENSET00_CCASTOPPED_Msk,
#endif
#if defined(RADIO_INTENSET_RATEBOOST_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_RATEBOOST_MASK  = RADIO_INTENSET_RATEBOOST_Msk,
#elif defined(RADIO_INTENSET00_RATEBOOST_Msk)
    NRF_RADIO_INT_RATEBOOST_MASK  = RADIO_INTENSET00_RATEBOOST_Msk,
#endif
#if defined(RADIO_INTENSET_TXREADY_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_TXREADY_MASK    = RADIO_INTENSET_TXREADY_Msk,
#elif defined(RADIO_INTENSET00_TXREADY_Msk)
    NRF_RADIO_INT_TXREADY_MASK    = RADIO_INTENSET00_TXREADY_Msk,
#endif
#if defined(RADIO_INTENSET_RXREADY_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_RXREADY_MASK    = RADIO_INTENSET_RXREADY_Msk,
#elif defined(RADIO_INTENSET00_RXREADY_Msk)
    NRF_RADIO_INT_RXREADY_MASK    = RADIO_INTENSET00_RXREADY_Msk,
#endif
#if defined(RADIO_INTENSET_MHRMATCH_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_MHRMATCH_MASK   = RADIO_INTENSET_MHRMATCH_Msk,
#elif defined(RADIO_INTENSET00_MHRMATCH_Msk)
    NRF_RADIO_INT_MHRMATCH_MASK   = RADIO_INTENSET00_MHRMATCH_Msk,
#endif
#if defined(RADIO_INTENSET_PHYEND_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_PHYEND_MASK     = RADIO_INTENSET_PHYEND_Msk,
#elif defined(RADIO_INTENSET00_PHYEND_Msk)
    NRF_RADIO_INT_PHYEND_MASK     = RADIO_INTENSET00_PHYEND_Msk,
#endif
#if defined(RADIO_INTENSET_SYNC_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_SYNC_MASK       = RADIO_INTENSET_SYNC_Msk,
#elif defined(RADIO_INTENSET00_SYNC_Msk)
    NRF_RADIO_INT_SYNC_MASK       = RADIO_INTENSET00_SYNC_Msk,
#endif
#if defined(RADIO_INTENSET_CTEPRESENT_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_INT_CTEPRESENT_MASK = RADIO_INTENSET_CTEPRESENT_Msk
#elif defined(RADIO_INTENSET00_CTEPRESENT_Msk)
    NRF_RADIO_INT_CTEPRESENT_MASK = RADIO_INTENSET00_CTEPRESENT_Msk
#endif
} nrf_radio_int_mask_t;

/** @brief RADIO shortcuts. */
typedef enum
{
    NRF_RADIO_SHORT_READY_START_MASK        = RADIO_SHORTS_READY_START_Msk,
#if defined(RADIO_SHORTS_END_DISABLE_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_SHORT_END_DISABLE_MASK        = RADIO_SHORTS_END_DISABLE_Msk,
#endif
    NRF_RADIO_SHORT_DISABLED_TXEN_MASK      = RADIO_SHORTS_DISABLED_TXEN_Msk,
    NRF_RADIO_SHORT_DISABLED_RXEN_MASK      = RADIO_SHORTS_DISABLED_RXEN_Msk,
    NRF_RADIO_SHORT_ADDRESS_RSSISTART_MASK  = RADIO_SHORTS_ADDRESS_RSSISTART_Msk,
    NRF_RADIO_SHORT_END_START_MASK          = RADIO_SHORTS_END_START_Msk,
    NRF_RADIO_SHORT_ADDRESS_BCSTART_MASK    = RADIO_SHORTS_ADDRESS_BCSTART_Msk,
#if defined(RADIO_SHORTS_DISABLED_RSSISTOP_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_SHORT_DISABLED_RSSISTOP_MASK  = RADIO_SHORTS_DISABLED_RSSISTOP_Msk,
#endif
#if defined(RADIO_SHORTS_RXREADY_CCASTART_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_SHORT_RXREADY_CCASTART_MASK   = RADIO_SHORTS_RXREADY_CCASTART_Msk,
#endif
#if defined(RADIO_SHORTS_CCAIDLE_TXEN_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_SHORT_CCAIDLE_TXEN_MASK       = RADIO_SHORTS_CCAIDLE_TXEN_Msk,
#endif
#if defined(RADIO_SHORTS_CCABUSY_DISABLE_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_SHORT_CCABUSY_DISABLE_MASK    = RADIO_SHORTS_CCABUSY_DISABLE_Msk,
#endif
#if defined(RADIO_SHORTS_FRAMESTART_BCSTART_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_SHORT_FRAMESTART_BCSTART_MASK = RADIO_SHORTS_FRAMESTART_BCSTART_Msk,
#endif
#if defined(RADIO_SHORTS_READY_EDSTART_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_SHORT_READY_EDSTART_MASK      = RADIO_SHORTS_READY_EDSTART_Msk,
#endif
#if defined(RADIO_SHORTS_EDEND_DISABLE_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_SHORT_EDEND_DISABLE_MASK      = RADIO_SHORTS_EDEND_DISABLE_Msk,
#endif
#if defined(RADIO_SHORTS_CCAIDLE_STOP_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_SHORT_CCAIDLE_STOP_MASK       = RADIO_SHORTS_CCAIDLE_STOP_Msk,
#endif
#if defined(RADIO_SHORTS_TXREADY_START_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_SHORT_TXREADY_START_MASK      = RADIO_SHORTS_TXREADY_START_Msk,
#endif
#if defined(RADIO_SHORTS_RXREADY_START_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_SHORT_RXREADY_START_MASK      = RADIO_SHORTS_RXREADY_START_Msk,
#endif
#if defined(RADIO_SHORTS_PHYEND_DISABLE_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_SHORT_PHYEND_DISABLE_MASK     = RADIO_SHORTS_PHYEND_DISABLE_Msk,
#endif
#if defined(RADIO_SHORTS_PHYEND_START_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_SHORT_PHYEND_START_MASK       = RADIO_SHORTS_PHYEND_START_Msk,
#endif
} nrf_radio_short_mask_t;

#if defined(RADIO_CCACTRL_CCAMODE_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief RADIO Clear Channel Assessment modes. */
typedef enum
{
    NRF_RADIO_CCA_MODE_ED             = RADIO_CCACTRL_CCAMODE_EdMode,
    NRF_RADIO_CCA_MODE_CARRIER        = RADIO_CCACTRL_CCAMODE_CarrierMode,
    NRF_RADIO_CCA_MODE_CARRIER_AND_ED = RADIO_CCACTRL_CCAMODE_CarrierAndEdMode,
    NRF_RADIO_CCA_MODE_CARRIER_OR_ED  = RADIO_CCACTRL_CCAMODE_CarrierOrEdMode,
    NRF_RADIO_CCA_MODE_ED_TEST1       = RADIO_CCACTRL_CCAMODE_EdModeTest1,
} nrf_radio_cca_mode_t;
#endif // defined(RADIO_CCACTRL_CCAMODE_Msk) || defined(__NRFX_DOXYGEN__)

/** @brief Types of RADIO states. */
typedef enum
{
    NRF_RADIO_STATE_DISABLED  = RADIO_STATE_STATE_Disabled,
    NRF_RADIO_STATE_RXRU      = RADIO_STATE_STATE_RxRu,
    NRF_RADIO_STATE_RXIDLE    = RADIO_STATE_STATE_RxIdle,
    NRF_RADIO_STATE_RX        = RADIO_STATE_STATE_Rx,
    NRF_RADIO_STATE_RXDISABLE = RADIO_STATE_STATE_RxDisable,
    NRF_RADIO_STATE_TXRU      = RADIO_STATE_STATE_TxRu,
    NRF_RADIO_STATE_TXIDLE    = RADIO_STATE_STATE_TxIdle,
    NRF_RADIO_STATE_TX        = RADIO_STATE_STATE_Tx,
    NRF_RADIO_STATE_TXDISABLE = RADIO_STATE_STATE_TxDisable,
} nrf_radio_state_t;

/** @brief Types of RADIO TX power. */
typedef enum
{
#if defined(RADIO_TXPOWER_TXPOWER_Pos10dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_POS10DBM  = RADIO_TXPOWER_TXPOWER_Pos10dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Pos9dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_POS9DBM   = RADIO_TXPOWER_TXPOWER_Pos9dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Pos8dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_POS8DBM   = RADIO_TXPOWER_TXPOWER_Pos8dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Pos7dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_POS7DBM   = RADIO_TXPOWER_TXPOWER_Pos7dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Pos6dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_POS6DBM   = RADIO_TXPOWER_TXPOWER_Pos6dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Pos5dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_POS5DBM   = RADIO_TXPOWER_TXPOWER_Pos5dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Pos4dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_POS4DBM   = RADIO_TXPOWER_TXPOWER_Pos4dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Pos3dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_POS3DBM   = RADIO_TXPOWER_TXPOWER_Pos3dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Pos2dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_POS2DBM    = RADIO_TXPOWER_TXPOWER_Pos2dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Pos1dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_POS1DBM   = RADIO_TXPOWER_TXPOWER_Pos1dBm,
#endif
    NRF_RADIO_TXPOWER_0DBM      = RADIO_TXPOWER_TXPOWER_0dBm,
#if defined(RADIO_TXPOWER_TXPOWER_Neg1dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG1DBM   = RADIO_TXPOWER_TXPOWER_Neg1dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Neg2dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG2DBM   = RADIO_TXPOWER_TXPOWER_Neg2dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Neg3dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG3DBM   = RADIO_TXPOWER_TXPOWER_Neg3dBm,
#endif
    NRF_RADIO_TXPOWER_NEG4DBM   = RADIO_TXPOWER_TXPOWER_Neg4dBm,
#if defined(RADIO_TXPOWER_TXPOWER_Neg5dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG5DBM   = RADIO_TXPOWER_TXPOWER_Neg5dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Neg6dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG6DBM   = RADIO_TXPOWER_TXPOWER_Neg6dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Neg7dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG7DBM   = RADIO_TXPOWER_TXPOWER_Neg7dBm,
#endif
    NRF_RADIO_TXPOWER_NEG8DBM   = RADIO_TXPOWER_TXPOWER_Neg8dBm,
#if defined(RADIO_TXPOWER_TXPOWER_Neg9dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG9DBM   = RADIO_TXPOWER_TXPOWER_Neg9dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Neg10dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG10DBM  = RADIO_TXPOWER_TXPOWER_Neg10dBm,
#endif
    NRF_RADIO_TXPOWER_NEG12DBM  = RADIO_TXPOWER_TXPOWER_Neg12dBm,
#if defined(RADIO_TXPOWER_TXPOWER_Neg14dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG14DBM  = RADIO_TXPOWER_TXPOWER_Neg14dBm,
#endif
    NRF_RADIO_TXPOWER_NEG16DBM  = RADIO_TXPOWER_TXPOWER_Neg16dBm,
#if defined(RADIO_TXPOWER_TXPOWER_Neg18dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG18DBM  = RADIO_TXPOWER_TXPOWER_Neg18dBm,
#endif
    NRF_RADIO_TXPOWER_NEG20DBM  = RADIO_TXPOWER_TXPOWER_Neg20dBm,
#if defined(RADIO_TXPOWER_TXPOWER_Neg22dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG22DBM  = RADIO_TXPOWER_TXPOWER_Neg22dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Neg28dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG28DBM  = RADIO_TXPOWER_TXPOWER_Neg28dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Neg30dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG30DBM  = RADIO_TXPOWER_TXPOWER_Neg30dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Neg40dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG40DBM  = RADIO_TXPOWER_TXPOWER_Neg40dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Neg46dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG46DBM  = RADIO_TXPOWER_TXPOWER_Neg46dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Neg70dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG70DBM  = RADIO_TXPOWER_TXPOWER_Neg70dBm,
#endif
#if defined(RADIO_TXPOWER_TXPOWER_Neg100dBm) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_TXPOWER_NEG100DBM = RADIO_TXPOWER_TXPOWER_Neg100dBm,
#endif
} nrf_radio_txpower_t;

/** @brief Types of RADIO modes (data rate and modulation). */
typedef enum
{
    NRF_RADIO_MODE_NRF_1MBIT          = RADIO_MODE_MODE_Nrf_1Mbit,
    NRF_RADIO_MODE_NRF_2MBIT          = RADIO_MODE_MODE_Nrf_2Mbit,
#if defined(RADIO_MODE_MODE_Nrf_250Kbit) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_MODE_NRF_250KBIT        = RADIO_MODE_MODE_Nrf_250Kbit,
#endif
#if defined(RADIO_MODE_MODE_Nrf_4Mbit0_5) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_MODE_NRF_4MBIT_H_0_5    = RADIO_MODE_MODE_Nrf_4Mbit0_5,
#endif
#if defined(RADIO_MODE_MODE_Nrf_4Mbit0_25) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_MODE_NRF_4MBIT_H_0_25   = RADIO_MODE_MODE_Nrf_4Mbit0_25,
#endif
#if defined(RADIO_MODE_MODE_Nrf_4Mbit_0BT6) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_MODE_NRF_4MBIT_BT_0_6   = RADIO_MODE_MODE_Nrf_4Mbit_0BT6,
#endif
#if defined(RADIO_MODE_MODE_Nrf_4Mbit_0BT4) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_MODE_NRF_4MBIT_BT_0_4   = RADIO_MODE_MODE_Nrf_4Mbit_0BT4,
#endif
    NRF_RADIO_MODE_BLE_1MBIT          = RADIO_MODE_MODE_Ble_1Mbit,
#if defined(RADIO_MODE_MODE_Ble_2Mbit) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_MODE_BLE_2MBIT          = RADIO_MODE_MODE_Ble_2Mbit,
#endif
#if defined(RADIO_MODE_MODE_Ble_LR125Kbit) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_MODE_BLE_LR125KBIT      = RADIO_MODE_MODE_Ble_LR125Kbit,
#endif
#if defined(RADIO_MODE_MODE_Ble_LR500Kbit) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_MODE_BLE_LR500KBIT      = RADIO_MODE_MODE_Ble_LR500Kbit,
#endif
#if defined(RADIO_MODE_MODE_Ieee802154_250Kbit) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_MODE_IEEE802154_250KBIT = RADIO_MODE_MODE_Ieee802154_250Kbit,
#endif
} nrf_radio_mode_t;

#if defined(RADIO_PCNF0_PLEN_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Types of preamble length. */
typedef enum
{
    NRF_RADIO_PREAMBLE_LENGTH_8BIT       = RADIO_PCNF0_PLEN_8bit,
    NRF_RADIO_PREAMBLE_LENGTH_16BIT      = RADIO_PCNF0_PLEN_16bit,
#if defined(RADIO_PCNF0_PLEN_32bitZero) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_PREAMBLE_LENGTH_32BIT_ZERO = RADIO_PCNF0_PLEN_32bitZero,
#endif
#if defined(RADIO_PCNF0_PLEN_LongRange) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_PREAMBLE_LENGTH_LONG_RANGE = RADIO_PCNF0_PLEN_LongRange,
#endif
} nrf_radio_preamble_length_t;
#endif // defined(RADIO_PCNF0_PLEN_Msk) || defined(__NRFX_DOXYGEN__)

/** @brief Types of CRC calculatons regarding address. */
typedef enum
{
#if defined(RADIO_CRCCNF_SKIPADDR_Include) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_CRC_ADDR_INCLUDE    = RADIO_CRCCNF_SKIPADDR_Include,
#else
    NRF_RADIO_CRC_ADDR_INCLUDE    = RADIO_CRCCNF_OFFSET_Include,
#endif
#if defined(RADIO_CRCCNF_SKIPADDR_Skip) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_CRC_ADDR_SKIP       = RADIO_CRCCNF_SKIPADDR_Skip,
#else
    NRF_RADIO_CRC_ADDR_SKIP       = RADIO_CRCCNF_OFFSET_Skip,
#endif
#if defined(RADIO_CRCCNF_SKIPADDR_Ieee802154) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_CRC_ADDR_IEEE802154 = RADIO_CRCCNF_SKIPADDR_Ieee802154,
#elif defined(RADIO_CRCCNF_OFFSET_LENGTH)
    NRF_RADIO_CRC_ADDR_IEEE802154 = RADIO_CRCCNF_OFFSET_LENGTH,
#endif
#if defined(RADIO_CRCCNF_OFFSET_SO) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_CRC_ADDR_S0        = RADIO_CRCCNF_OFFSET_SO,
#endif
#if defined(RADIO_CRCCNF_OFFSET_S1) || defined(__NRFX_DOXYGEN__)
    NRF_RADIO_CRC_ADDR_S1        = RADIO_CRCCNF_OFFSET_S1,
#endif
} nrf_radio_crc_addr_t;

/** @brief Packet configuration. */
typedef struct
{
    uint8_t lflen;
    uint8_t s0len;
    uint8_t s1len;
#if defined(RADIO_PCNF0_S1INCL_Msk) || defined(__NRFX_DOXYGEN__)
    bool s1incl;
#endif
#if defined(RADIO_PCNF0_CILEN_Msk) || defined(__NRFX_DOXYGEN__)
    uint8_t cilen;
#endif
#if defined(RADIO_PCNF0_PLEN_Msk) || defined(__NRFX_DOXYGEN__)
    nrf_radio_preamble_length_t plen;
#endif
#if defined(RADIO_PCNF0_CRCINC_Msk) || defined(__NRFX_DOXYGEN__)
    bool crcinc;
#endif
#if defined(RADIO_PCNF0_TERMLEN_Msk) || defined(__NRFX_DOXYGEN__)
    uint8_t termlen;
#endif
    uint8_t maxlen;
    uint8_t statlen;
    uint8_t balen;
    bool big_endian;
    bool whiteen;
} nrf_radio_packet_conf_t;

#if defined(RADIO_DFEMODE_DFEOPMODE_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Direction Finding operation modes. */
typedef enum
{
    NRF_RADIO_DFE_OP_MODE_AOD = RADIO_DFEMODE_DFEOPMODE_AoD,
    NRF_RADIO_DFE_OP_MODE_AOA = RADIO_DFEMODE_DFEOPMODE_AoA,
} nrf_radio_dfe_op_mode_t;
#endif

#if defined(RADIO_DFESTATUS_SWITCHINGSTATE_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief States of Direction Finding switching state machine. */
typedef enum
{
    NRF_RADIO_DFE_SWITCH_STATE_IDLE      = RADIO_DFESTATUS_SWITCHINGSTATE_Idle,
    NRF_RADIO_DFE_SWITCH_STATE_OFFSET    = RADIO_DFESTATUS_SWITCHINGSTATE_Offset,
    NRF_RADIO_DFE_SWITCH_STATE_GUARD     = RADIO_DFESTATUS_SWITCHINGSTATE_Guard,
    NRF_RADIO_DFE_SWITCH_STATE_REF       = RADIO_DFESTATUS_SWITCHINGSTATE_Ref,
    NRF_RADIO_DFE_SWITCH_STATE_SWITCHING = RADIO_DFESTATUS_SWITCHINGSTATE_Switching,
    NRF_RADIO_DFE_SWITCH_STATE_ENDING    = RADIO_DFESTATUS_SWITCHINGSTATE_Ending,
} nrf_radio_dfe_switch_state_t;

/** @brief States of Direction Finding sampling state machine. */
typedef enum
{
    NRF_RADIO_DFE_SAMPLE_STATE_IDLE     = RADIO_DFESTATUS_SAMPLINGSTATE_Idle,
    NRF_RADIO_DFE_SAMPLE_STATE_SAMPLING = RADIO_DFESTATUS_SAMPLINGSTATE_Sampling,
} nrf_radio_dfe_sample_state_t;
#endif

#if defined(RADIO_CTEINLINECONF_S0CONF_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Valid ranges of CTE time, expressed in 8 us units. */
typedef enum
{
    NRF_RADIO_CTEINLINE_TIME_RANGE_20 = RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_20,
    NRF_RADIO_CTEINLINE_TIME_RANGE_31 = RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_31,
    NRF_RADIO_CTEINLINE_TIME_RANGE_63 = RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_63,
} nrf_radio_cteinline_time_range_t;

/** @brief Spacing between samples for the samples in the switching period. */
typedef enum
{
    NRF_RADIO_CTEINLINE_RX_MODE_125NS = RADIO_CTEINLINECONF_CTEINLINERXMODE1US_125ns,
    NRF_RADIO_CTEINLINE_RX_MODE_250NS = RADIO_CTEINLINECONF_CTEINLINERXMODE1US_250ns,
    NRF_RADIO_CTEINLINE_RX_MODE_500NS = RADIO_CTEINLINECONF_CTEINLINERXMODE1US_500ns,
    NRF_RADIO_CTEINLINE_RX_MODE_1US   = RADIO_CTEINLINECONF_CTEINLINERXMODE1US_1us,
    NRF_RADIO_CTEINLINE_RX_MODE_2US   = RADIO_CTEINLINECONF_CTEINLINERXMODE1US_2us,
    NRF_RADIO_CTEINLINE_RX_MODE_4US   = RADIO_CTEINLINECONF_CTEINLINERXMODE1US_4us,
} nrf_radio_cteinline_rx_mode_t;

/** @brief Configuration for CTE inline mode */
typedef struct
{
    bool                             enable;
    bool                             info_in_s1;
    bool                             err_handling;
    nrf_radio_cteinline_time_range_t time_range;
    nrf_radio_cteinline_rx_mode_t    rx1us;
    nrf_radio_cteinline_rx_mode_t    rx2us;
    uint8_t                          s0_pattern;
    uint8_t                          s0_mask;
} nrf_radio_cteinline_conf_t;
#endif // defined(RADIO_CTEINLINECONF_S0CONF_Msk) || defined(__NRFX_DOXYGEN__)

#if defined(RADIO_DFECTRL1_NUMBEROF8US_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief State when CTE extension is added and antenna switching/sampling is done. */
typedef enum
{
    NRF_RADIO_DFECTRL_EXTENSION_CRC     = RADIO_DFECTRL1_DFEINEXTENSION_CRC,
    NRF_RADIO_DFECTRL_EXTENSION_PAYLOAD = RADIO_DFECTRL1_DFEINEXTENSION_Payload,
} nrf_radio_dfectrl_extension_t;

/** @brief Interval between antenna changes in the switching state. */
typedef enum
{
    NRF_RADIO_DFECTRL_SWITCH_SPACING_1US = RADIO_DFECTRL1_TSWITCHSPACING_1us,
    NRF_RADIO_DFECTRL_SWITCH_SPACING_2US = RADIO_DFECTRL1_TSWITCHSPACING_2us,
    NRF_RADIO_DFECTRL_SWITCH_SPACING_4US = RADIO_DFECTRL1_TSWITCHSPACING_4us,
} nrf_radio_dfectrl_switch_spacing_t;

/** @brief Interval between samples. */
typedef enum
{
    NRF_RADIO_DFECTRL_SAMPLE_SPACING_125NS = RADIO_DFECTRL1_TSAMPLESPACING_125ns,
    NRF_RADIO_DFECTRL_SAMPLE_SPACING_250NS = RADIO_DFECTRL1_TSAMPLESPACING_250ns,
    NRF_RADIO_DFECTRL_SAMPLE_SPACING_500NS = RADIO_DFECTRL1_TSAMPLESPACING_500ns,
    NRF_RADIO_DFECTRL_SAMPLE_SPACING_1US   = RADIO_DFECTRL1_TSAMPLESPACING_1us,
    NRF_RADIO_DFECTRL_SAMPLE_SPACING_2US   = RADIO_DFECTRL1_TSAMPLESPACING_2us,
    NRF_RADIO_DFECTRL_SAMPLE_SPACING_4US   = RADIO_DFECTRL1_TSAMPLESPACING_4us,
} nrf_radio_dfectrl_sample_spacing_t;

/** @brief Direction finding sample type. */
typedef enum
{
    NRF_RADIO_DFECTRL_SAMPLE_TYPE_IQ       = RADIO_DFECTRL1_SAMPLETYPE_IQ,
    NRF_RADIO_DFECTRL_SAMPLE_TYPE_MAGPHASE = RADIO_DFECTRL1_SAMPLETYPE_MagPhase,
} nrf_radio_dfectrl_sample_type_t;

/** @brief Direction finding configuration. */
typedef struct
{
    uint8_t                            dfe_len;
    nrf_radio_dfectrl_extension_t      extension;
    nrf_radio_dfectrl_switch_spacing_t switch_spacing;
    nrf_radio_dfectrl_sample_spacing_t spacing_ref;
    nrf_radio_dfectrl_sample_type_t    sample_type;
    nrf_radio_dfectrl_sample_spacing_t sample_spacing;
#if defined(RADIO_DFECTRL1_REPEATPATTERN_Msk)
    uint8_t                            repeat_pattern;
#endif
    uint8_t                            gain_steps;
    int16_t                            switch_offset;
    int16_t                            sample_offset;  /**< Signed value offset before starting sampling expressed in 16 Mhz cycles
                                                        *   relative to the beginning of the reference state. */
} nrf_radio_dfectrl_conf_t;
#endif // defined(RADIO_DFECTRL1_NUMBEROF8US_Msk) || defined(__NRFX_DOXYGEN__)

/**
 * @brief Function for activating a specific RADIO task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_radio_task_trigger(NRF_RADIO_Type * p_reg, nrf_radio_task_t task);

/**
 * @brief Function for getting the address of a specific RADIO task register.
 *
 * This function can be used by the PPI module.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Requested task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_task_address_get(NRF_RADIO_Type const * p_reg,
                                                      nrf_radio_task_t       task);

/**
 * @brief Function for clearing a specific RADIO event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clean.
 */
NRF_STATIC_INLINE void nrf_radio_event_clear(NRF_RADIO_Type * p_reg, nrf_radio_event_t event);

/**
 * @brief Function for retrieving the state of the RADIO event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_radio_event_check(NRF_RADIO_Type const * p_reg, nrf_radio_event_t event);

/**
 * @brief Function for getting the address of a specific RADIO event register.
 *
 * This function can be used by the PPI module.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Requested Event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_event_address_get(NRF_RADIO_Type const * p_reg,
                                                       nrf_radio_event_t      event);

/**
 * @brief Function for enabling specified RADIO shortcuts.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] shorts_mask Mask of shortcuts.
 */
NRF_STATIC_INLINE void nrf_radio_shorts_enable(NRF_RADIO_Type * p_reg, uint32_t shorts_mask);

/**
 * @brief Function for disabling specified RADIO shortcuts.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] shorts_mask Mask of shortcuts.
 */
NRF_STATIC_INLINE void nrf_radio_shorts_disable(NRF_RADIO_Type * p_reg, uint32_t shorts_mask);

/**
 * @brief Function for setting the configuration of RADIO shortcuts.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] shorts_mask Shortcuts configuration to set.
 */
NRF_STATIC_INLINE void nrf_radio_shorts_set(NRF_RADIO_Type * p_reg, uint32_t shorts_mask);

/**
 * @brief Function for getting the configuration of RADIO shortcuts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Mask of currently enabled shortcuts.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_shorts_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for enabling specified RADIO interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 *                  Use @ref nrf_radio_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_radio_int_enable(NRF_RADIO_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified RADIO interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 *                  Use @ref nrf_radio_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_radio_int_disable(NRF_RADIO_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *                  Use @ref nrf_radio_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_int_enable_check(NRF_RADIO_Type const * p_reg, uint32_t mask);

#if defined(DPPI_PRESENT) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for setting the subscribe configuration for a given
 *        RADIO task.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] task    Task for which to set the configuration.
 * @param[in] channel Channel through which to subscribe events.
 */
NRF_STATIC_INLINE void nrf_radio_subscribe_set(NRF_RADIO_Type * p_reg,
                                               nrf_radio_task_t task,
                                               uint8_t          channel);

/**
 * @brief Function for clearing the subscribe configuration for a given
 *        RADIO task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task for which to clear the configuration.
 */
NRF_STATIC_INLINE void nrf_radio_subscribe_clear(NRF_RADIO_Type * p_reg,
                                                 nrf_radio_task_t task);

/**
 * @brief Function for setting the publish configuration for a given
 *        RADIO event.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] event   Event for which to set the configuration.
 * @param[in] channel Channel through which to publish the event.
 */
NRF_STATIC_INLINE void nrf_radio_publish_set(NRF_RADIO_Type *  p_reg,
                                             nrf_radio_event_t event,
                                             uint8_t           channel);

/**
 * @brief Function for clearing the publish configuration for a given
 *        RADIO event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event for which to clear the configuration.
 */
NRF_STATIC_INLINE void nrf_radio_publish_clear(NRF_RADIO_Type *  p_reg,
                                               nrf_radio_event_t event);
#endif // defined(DPPI_PRESENT) || defined(__NRFX_DOXYGEN__)

/**
 * @brief Function for getting CRC status of last received packet.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  The packet was received without CRC error.
 * @retval false The packet was received with CRC error.
 */
NRF_STATIC_INLINE bool nrf_radio_crc_status_check(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for getting the received address.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Received address.
 */
NRF_STATIC_INLINE uint8_t nrf_radio_rxmatch_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for getting CRC field of the last received packet.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return CRC field of previously received packet.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_rxcrc_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for getting the device address match index.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Device adress match index.
 */
NRF_STATIC_INLINE uint8_t nrf_radio_dai_get(NRF_RADIO_Type const * p_reg);

#if defined(RADIO_PDUSTAT_PDUSTAT_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for getting status on payload length.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval 0 The payload is lesser than PCNF1.MAXLEN.
 * @retval 1 The payload is greater than PCNF1.MAXLEN.
 */
NRF_STATIC_INLINE uint8_t nrf_radio_pdustat_get(NRF_RADIO_Type const * p_reg);
#endif // defined(RADIO_PDUSTAT_PDUSTAT_Msk) || defined(__NRFX_DOXYGEN__)

#if defined(RADIO_PDUSTAT_CISTAT_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for getting status on what rate packet is received with in Long Range.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval 0 The frame is received at 125kbps.
 * @retval 1 The frame is received at 500kbps.
 */
NRF_STATIC_INLINE uint8_t nrf_radio_cistat_get(NRF_RADIO_Type const * p_reg);
#endif // defined(RADIO_PDUSTAT_CISTAT_Msk) || defined(__NRFX_DOXYGEN__)

/**
 * @brief Function for setting packet pointer to given location in memory.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_packet Packet pointer.
 */
NRF_STATIC_INLINE void nrf_radio_packetptr_set(NRF_RADIO_Type * p_reg, void const * p_packet);

/**
 * @brief Function for getting packet pointer.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Pointer to tx or rx packet buffer.
 */
NRF_STATIC_INLINE void * nrf_radio_packetptr_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for setting the radio frequency.
 *
 * @param[in] p_reg           Pointer to the structure of registers of the peripheral.
 * @param[in] radio_frequency Frequency in MHz.
 */
NRF_STATIC_INLINE void nrf_radio_frequency_set(NRF_RADIO_Type * p_reg, uint16_t radio_frequency);

/**
 * @brief Function for getting the radio frequency.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Frequency in MHz.
 */
NRF_STATIC_INLINE uint16_t nrf_radio_frequency_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for setting the radio transmit power.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] tx_power Transmit power of the radio [dBm].
 */
NRF_STATIC_INLINE void nrf_radio_txpower_set(NRF_RADIO_Type * p_reg, nrf_radio_txpower_t tx_power);

/**
 * @brief Function for getting the radio transmit power.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Transmit power of the radio.
 */
NRF_STATIC_INLINE nrf_radio_txpower_t nrf_radio_txpower_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for setting the radio data rate and modulation settings.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] radio_mode Radio data rate and modulation.
 */
NRF_STATIC_INLINE void nrf_radio_mode_set(NRF_RADIO_Type * p_reg, nrf_radio_mode_t radio_mode);

/**
 * @brief Function for getting Radio data rate and modulation settings.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Radio data rate and modulation.
 */
NRF_STATIC_INLINE nrf_radio_mode_t nrf_radio_mode_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for setting the packet configuration.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Pointer to the structure with packet configuration.
 */
NRF_STATIC_INLINE void nrf_radio_packet_configure(NRF_RADIO_Type *                p_reg,
                                                  nrf_radio_packet_conf_t const * p_config);

/**
 * @brief Function for setting the base address 0.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] address Base address 0 value.
 */
NRF_STATIC_INLINE void nrf_radio_base0_set(NRF_RADIO_Type * p_reg, uint32_t address);

/**
 * @brief Function for getting the base address 0.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Base address 0.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_base0_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for setting Base address 1.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] address Base address 1 value.
 */
NRF_STATIC_INLINE void nrf_radio_base1_set(NRF_RADIO_Type * p_reg, uint32_t address);

/**
 * @brief Function for getting base address 1.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Base address 1.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_base1_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for setting prefixes bytes for logical addresses 0-3.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] prefixes Prefixes bytes for logical addresses 0-3.
 */
NRF_STATIC_INLINE void nrf_radio_prefix0_set(NRF_RADIO_Type * p_reg, uint32_t prefixes);

/**
 * @brief Function for getting prefixes bytes for logical addresses 0-3
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Prefixes bytes for logical addresses 0-3
 */
NRF_STATIC_INLINE uint32_t nrf_radio_prefix0_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for setting prefixes bytes for logical addresses 4-7.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] prefixes Prefixes bytes for logical addresses 4-7.
 */
NRF_STATIC_INLINE void nrf_radio_prefix1_set(NRF_RADIO_Type * p_reg, uint32_t prefixes);

/**
 * @brief Function for getting prefixes bytes for logical addresses 4-7
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Prefixes bytes for logical addresses 4-7
 */
NRF_STATIC_INLINE uint32_t nrf_radio_prefix1_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for setting the transmit address.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] txaddress Logical address to be used when transmitting a packet.
 */
NRF_STATIC_INLINE void nrf_radio_txaddress_set(NRF_RADIO_Type * p_reg, uint8_t txaddress);

/**
 * @brief Function for getting the transmit address select.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Logical address to be used when transmitting a packet.
 */
NRF_STATIC_INLINE uint8_t nrf_radio_txaddress_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for for selecting the receive addresses.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] rxaddresses Enable or disable reception on logical address i.
 *                        Read more in the Product Specification.
 */
NRF_STATIC_INLINE void nrf_radio_rxaddresses_set(NRF_RADIO_Type * p_reg, uint8_t rxaddresses);

/**
 * @brief Function for getting receive address select.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Receive address select.
 */
NRF_STATIC_INLINE uint8_t nrf_radio_rxaddresses_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for configure CRC.
 *
 * @param[in] p_reg           Pointer to the structure of registers of the peripheral.
 * @param[in] crc_length      CRC length in number of bytes [0-3].
 * @param[in] crc_address     Include or exclude packet address field out of CRC.
 * @param[in] crc_polynominal CRC polynominal to set.
 */
NRF_STATIC_INLINE void nrf_radio_crc_configure(NRF_RADIO_Type *     p_reg,
                                               uint8_t              crc_length,
                                               nrf_radio_crc_addr_t crc_address,
                                               uint32_t             crc_polynominal);

/**
 * @brief Function for setting CRC initial value.
 *
 * @param[in] p_reg          Pointer to the structure of registers of the peripheral.
 * @param[in] crc_init_value CRC initial value
 */
NRF_STATIC_INLINE void nrf_radio_crcinit_set(NRF_RADIO_Type * p_reg, uint32_t crc_init_value);

/**
 * @brief Function for getting CRC initial value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return CRC initial value.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_crcinit_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for setting Inter Frame Spacing interval.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] radio_ifs Inter frame spacing interval [us].
 */
NRF_STATIC_INLINE void nrf_radio_ifs_set(NRF_RADIO_Type * p_reg, uint32_t radio_ifs);

/**
 * @brief Function for getting Inter Frame Spacing interval.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Inter frame spacing interval [us].
 */
NRF_STATIC_INLINE uint32_t nrf_radio_ifs_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for getting RSSI sample result.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @note The read value is a positive value while the actual received signal
 *       is a negative value. Actual received signal strength is therefore as follows:
 *       received signal strength = - read_value dBm .
 *
 * @return RSSI sample result.
 */
NRF_STATIC_INLINE uint8_t nrf_radio_rssi_sample_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for getting the current state of the radio module.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Current radio state.
 */
NRF_STATIC_INLINE nrf_radio_state_t nrf_radio_state_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for setting the data whitening initial value.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] datawhiteiv Data whitening initial value.
 */
NRF_STATIC_INLINE void nrf_radio_datawhiteiv_set(NRF_RADIO_Type * p_reg, uint16_t datawhiteiv);

/**
 * @brief Function for getting the data whitening initial value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Data whitening initial value.
 */
NRF_STATIC_INLINE uint16_t nrf_radio_datawhiteiv_get(NRF_RADIO_Type const * p_reg);

#if NRF_RADIO_HAS_DATAWHITE
/**
 * @brief Function for setting the data whitening polynomial.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] poly  Data whitening polynomial.
 */
NRF_STATIC_INLINE void nrf_radio_datawhite_poly_set(NRF_RADIO_Type * p_reg, uint16_t poly);

/**
 * @brief Function for getting the data whitening polynomial.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Data whitening polynomial.
 */
NRF_STATIC_INLINE uint16_t nrf_radio_datawhite_poly_get(NRF_RADIO_Type const * p_reg);
#endif

/**
 * @brief Function for setting Bit counter compare.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] radio_bcc Bit counter compare [bits].
 */
NRF_STATIC_INLINE void nrf_radio_bcc_set(NRF_RADIO_Type * p_reg, uint32_t radio_bcc);

/**
 * @brief Function for getting Bit counter compare.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bit counter compare.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_bcc_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for setting Device address base segment.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] dab_value Particular base segment value.
 * @param[in] segment   Index of the particular Device address base segment register.
 */
NRF_STATIC_INLINE void nrf_radio_dab_set(NRF_RADIO_Type * p_reg,
                                         uint32_t         dab_value,
                                         uint8_t          segment);

/**
 * @brief Function for getting Device address base segment.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] segment Number of the Device address base segment.
 *
 * @return Particular segment of the Device address base.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_dab_get(NRF_RADIO_Type const * p_reg, uint8_t segment);

/**
 * @brief Function for setting device address prefix.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] dap_value    Particular device address prefix value.
 * @param[in] prefix_index Index of the particular device address prefix register.
 */
NRF_STATIC_INLINE void nrf_radio_dap_set(NRF_RADIO_Type * p_reg,
                                         uint16_t         dap_value,
                                         uint8_t          prefix_index);

/**
 * @brief Function for getting Device address prefix.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] prefix_index Number of the Device address prefix segment.
 *
 * @return Particular segment of the Device address prefix.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_dap_get(NRF_RADIO_Type const * p_reg, uint8_t prefix_index);

/**
 * @brief Function for setting device address match configuration.
 *
 * @note Read more about configuring device address match in the Product Specification.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] ena   Device address matching bitmask.
 * @param[in] txadd TxAdd bitmask.
 */
NRF_STATIC_INLINE void nrf_radio_dacnf_set(NRF_RADIO_Type * p_reg, uint8_t ena, uint8_t txadd);

/**
 * @brief Function for getting ENA field of the Device address match configuration register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return ENA field of the Device address match configuration register.
 */
NRF_STATIC_INLINE uint8_t nrf_radio_dacnf_ena_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for getting TXADD field of the Device address match configuration register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return TXADD field of the Device address match configuration register.
 */
NRF_STATIC_INLINE uint8_t nrf_radio_dacnf_txadd_get(NRF_RADIO_Type const * p_reg);

#if defined(RADIO_INTENSET_MHRMATCH_Msk) || defined(RADIO_INTENSET00_MHRMATCH_Msk) || \
    defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for setting MAC Header Match Unit search pattern configuration.
 *
 * @param[in] p_reg                     Pointer to the structure of registers of the peripheral.
 * @param[in] radio_mhmu_search_pattern Search Pattern Configuration.
 */
NRF_STATIC_INLINE
void nrf_radio_mhmu_search_pattern_set(NRF_RADIO_Type * p_reg,
                                       uint32_t         radio_mhmu_search_pattern);

/**
 * @brief Function for getting MAC Header Match Unit search pattern configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Search Pattern Configuration.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_mhmu_search_pattern_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for setting MAC Header Match Unit pattern mask configuration.
 *
 * @param[in] p_reg                   Pointer to the structure of registers of the peripheral.
 * @param[in] radio_mhmu_pattern_mask Pattern mask.
 */
NRF_STATIC_INLINE void nrf_radio_mhmu_pattern_mask_set(NRF_RADIO_Type * p_reg,
                                                       uint32_t         radio_mhmu_pattern_mask);

/**
 * @brief Function for getting MAC Header Match Unit pattern mask configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Pattern mask.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_mhmu_pattern_mask_get(NRF_RADIO_Type const * p_reg);
#endif // defined(RADIO_INTENSET_MHRMATCH_Msk) || defined(RADIO_INTENSET00_MHRMATCH_Msk) ||
       // defined(__NRFX_DOXYGEN__)

#if defined(RADIO_MODECNF0_RU_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for setting Radio mode configuration register 0.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] fast_ramp_up Use fast radio ramp-up time
 * @param[in] default_tx   Default TX value during inactivity.
 */
NRF_STATIC_INLINE void nrf_radio_modecnf0_set(NRF_RADIO_Type * p_reg,
                                              bool             fast_ramp_up,
                                              uint8_t          default_tx);

/**
 * @brief Function for getting ramp-up time configuration of the Radio mode configuration register 0.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  If the ramp-up time is set to fast.
 * @retval false If the ramp-up time is set to default.
 */
NRF_STATIC_INLINE bool nrf_radio_modecnf0_ru_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for getting default TX value of the Radio mode configuration register 0.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Default TX value.
 */
NRF_STATIC_INLINE uint8_t nrf_radio_modecnf0_dtx_get(NRF_RADIO_Type const * p_reg);
#endif // defined(RADIO_MODECNF0_RU_Msk) || defined(__NRFX_DOXYGEN__)

#if defined(RADIO_MODECNF0_RU_Msk) || defined(RADIO_TIMING_RU_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for enabling or disabling fast ramp-up setting.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if fast ramp-up is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_radio_fast_ramp_up_enable_set(NRF_RADIO_Type * p_reg, bool enable);

/**
 * @brief Function for checking fast ramp-up time configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return true  If the ramp-up time is set to fast.
 * @return false If the ramp-up time is set to default compatible with 180nm radio.
 */
NRF_STATIC_INLINE bool nrf_radio_fast_ramp_up_check(NRF_RADIO_Type const * p_reg);
#endif

#if defined(RADIO_SFD_SFD_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for setting IEEE 802.15.4 start of frame delimiter.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] sfd   IEEE 802.15.4 start of frame delimiter.
 */
NRF_STATIC_INLINE void nrf_radio_sfd_set(NRF_RADIO_Type * p_reg, uint8_t sfd);

/**
 * @brief Function for getting IEEE 802.15.4 start of frame delimiter.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return IEEE 802.15.4 start of frame delimiter.
 */
NRF_STATIC_INLINE uint8_t nrf_radio_sfd_get(NRF_RADIO_Type const * p_reg);
#endif // defined(RADIO_SFD_SFD_Msk) || defined(__NRFX_DOXYGEN__)

#if defined(RADIO_EDCNT_EDCNT_Msk) || defined(RADIO_EDCTRL_EDCNT_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for setting number of iterations to perform ED scan.
 *
 * @param[in] p_reg         Pointer to the structure of registers of the peripheral.
 * @param[in] ed_loop_count Number of iterations during ED procedure.
 */
NRF_STATIC_INLINE void nrf_radio_ed_loop_count_set(NRF_RADIO_Type * p_reg, uint32_t ed_loop_count);
#endif // defined(RADIO_EDCNT_EDCNT_Msk) || defined(RADIO_EDCTRL_EDCNT_Msk) || defined(__NRFX_DOXYGEN__)

#if defined(RADIO_EDCTRL_EDPERIOD_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for setting the period of a ED/CCA iteration.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] ed_period Duration of a single ED/CCA iteration.
 */
NRF_STATIC_INLINE void nrf_radio_ed_cca_period_set(NRF_RADIO_Type * p_reg, uint8_t ed_period);
#endif // defined(RADIO_EDCTRL_EDPERIOD_Msk) || defined(__NRFX_DOXYGEN__)

#if defined(RADIO_EDSAMPLE_EDLVL_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for getting Energy Detection level.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return IEEE 802.15.4 energy detect level.
 */
NRF_STATIC_INLINE uint8_t nrf_radio_ed_sample_get(NRF_RADIO_Type const * p_reg);
#endif // defined(RADIO_EDSAMPLE_EDLVL_Msk) || defined(__NRFX_DOXYGEN__)

#if defined(RADIO_CCACTRL_CCAMODE_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for configuring the IEEE 802.15.4 clear channel assessment.
 *
 * @param[in] p_reg              Pointer to the structure of registers of the peripheral.
 * @param[in] cca_mode           Mode of CCA.
 * @param[in] cca_ed_threshold   Energy Detection threshold value.
 * @param[in] cca_corr_threshold Correlator Busy Threshold.
 * @param[in] cca_corr_cnt       Limit of occurances above Correlator Threshold.
 *                               When not equal to zero the correlator based
 *                               signal detect is enabled.
 */
NRF_STATIC_INLINE void nrf_radio_cca_configure(NRF_RADIO_Type *     p_reg,
                                               nrf_radio_cca_mode_t cca_mode,
                                               uint8_t              cca_ed_threshold,
                                               uint8_t              cca_corr_threshold,
                                               uint8_t              cca_corr_cnt);
#endif // defined(RADIO_CCACTRL_CCAMODE_Msk) || defined(__NRFX_DOXYGEN__)

#if defined(RADIO_POWER_POWER_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for setting power mode of the radio peripheral.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] radio_power If radio should be powered on.
 */
NRF_STATIC_INLINE void nrf_radio_power_set(NRF_RADIO_Type * p_reg, bool radio_power);
#endif // defined(RADIO_POWER_POWER_Msk) || defined(__NRFX_DOXYGEN__)

#if defined(RADIO_CTESTATUS_CTETIME_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for getting the CTE time parsed from received packet.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return CTE time.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_cte_time_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for getting the CTE type parsed from received packet.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return CTE type.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_cte_type_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for getting the CTE RFU parsed from received packet.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return CTE RFU.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_cte_rfu_get(NRF_RADIO_Type const * p_reg);
#endif // defined(RADIO_CTESTATUS_CTETIME_Msk) || defined(__NRFX_DOXYGEN__)

#if defined(RADIO_DFESTATUS_SWITCHINGSTATE_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for getting the current state of DFE switching state machine.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return State of switching state machine.
 */
NRF_STATIC_INLINE
nrf_radio_dfe_switch_state_t nrf_radio_dfe_switch_state_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for getting the current state of DFE sampling state machine.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return State of sampling state machine.
 */
NRF_STATIC_INLINE
nrf_radio_dfe_sample_state_t nrf_radio_dfe_sample_state_get(NRF_RADIO_Type const * p_reg);
#endif

#if defined(RADIO_CTEINLINECONF_S0CONF_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for setting the configuration of CTE inline mode.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Pointer to the structure with CTE inline mode configuration.
 */
NRF_STATIC_INLINE void nrf_radio_cteinline_configure(NRF_RADIO_Type *                   p_reg,
                                                     nrf_radio_cteinline_conf_t const * p_config);
#endif

#if defined(RADIO_DFECTRL1_NUMBEROF8US_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for setting the direction finding configuration.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Pointer to the structure with direction finding configuration.
 */
NRF_STATIC_INLINE void nrf_radio_dfectrl_configure(NRF_RADIO_Type *                 p_reg,
                                                   nrf_radio_dfectrl_conf_t const * p_config);
#endif

#if defined(RADIO_SWITCHPATTERN_SWITCHPATTERN_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for configuring the specified GPIO pin for antenna control.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] pin   Pin number.
 * @param[in] pos   Position of the pin in the switching pattern
 *                  configured with @ref nrf_radio_dfe_pattern_add()
                    or @ref nrf_radio_dfe_patterns_add().
 */
NRF_STATIC_INLINE void nrf_radio_dfe_pattern_pin_set(NRF_RADIO_Type * p_reg,
                                                     uint32_t         pin,
                                                     uint8_t          pos);

/**
 * @brief Function for adding single pattern to the array of GPIO patterns for antenna control.
 *
 * The GPIO pattern array size is 40 entries. This function configures single pattern consisting of 8 pins.
 * To set subsequent pattern, call this function again.
 * To get total number of currently configured patterns use @ref nrf_radio_dfe_pattern_cnt_get().
 * To clear the array of GPIO patterns use @ref nrf_radio_dfe_pattern_clear().
 *
 * @warning A minimum number of 3 patterns must be written.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] pin_mask Bitmask specifying pins to be used in this switching pattern.
 *                     Each bit corresponds to the index of the pin
                       configured with @ref nrf_radio_dfe_pattern_pin_set().
 */
NRF_STATIC_INLINE void nrf_radio_dfe_pattern_add(NRF_RADIO_Type * p_reg, uint8_t pin_mask);

/**
 * @brief Function for adding multiple patterns to the array of GPIO patterns for antenna control.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] p_pin_masks Pointer to the array of bitmasks specifying pins
 *                        to be used in subsequent switching patterns.
 * @param[in] length      Bitmask array length.
 *
 * @sa nrf_radio_dfe_pattern_add()
 */
NRF_STATIC_INLINE void nrf_radio_dfe_patterns_add(NRF_RADIO_Type * p_reg,
                                                  uint8_t const *  p_pin_masks,
                                                  size_t           length);

/**
 * @brief Function for getting number of currently configured GPIO patterns for antenna control.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Number of patterns.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_dfe_pattern_cnt_get(NRF_RADIO_Type const * p_reg);

/**
 * @brief Function for clearing all of the currently configured GPIO patterns for antenna control.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_radio_dfe_pattern_clear(NRF_RADIO_Type * p_reg);
#endif // defined(RADIO_SWITCHPATTERN_SWITCHPATTERN_Msk) || defined(__NRFX_DOXYGEN__)

#if defined(RADIO_DFEPACKET_PTR_PTR_Msk) || defined(RADIO_DFEPACKET_PTR_OFFSET_Msk) || \
    defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for setting the buffer for storing IQ samples or magnitude and phase pairs
 *        of the samples.
 *
 * @note Each sample or pair is stored on a 32-bit word.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_buffer Pointer to the buffer for storing IQ samples
 *                     or magnitude and phase of the samples.
 * @param[in] length   Maximum number of samples to receive.
 */
NRF_STATIC_INLINE void nrf_radio_dfe_buffer_set(NRF_RADIO_Type * p_reg,
                                                uint32_t *       p_buffer,
                                                size_t           length);

/**
 * @brief Function for getting the number of stored IQ samples or magnitude and phase pairs
 *        of the samples during last transaction.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval Amount of samples.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_dfe_amount_get(NRF_RADIO_Type const * p_reg);

#if defined(RADIO_DFEPACKET_CURRENTAMOUNT_AMOUNT_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for getting the number of bytes transferred in the current transaction.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Number of bytes.
 */
NRF_STATIC_INLINE uint32_t nrf_radio_dfe_current_amount_get(NRF_RADIO_Type const * p_reg);

#endif

#endif

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_radio_task_trigger(NRF_RADIO_Type * p_reg, nrf_radio_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_radio_task_address_get(NRF_RADIO_Type const * p_reg,
                                                      nrf_radio_task_t       task)
{
    return ((uint32_t)p_reg + (uint32_t)task);
}

NRF_STATIC_INLINE void nrf_radio_event_clear(NRF_RADIO_Type * p_reg, nrf_radio_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_radio_event_check(NRF_RADIO_Type const * p_reg, nrf_radio_event_t event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE uint32_t nrf_radio_event_address_get(NRF_RADIO_Type const * p_reg,
                                                       nrf_radio_event_t      event)
{
    return ((uint32_t)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_radio_shorts_enable(NRF_RADIO_Type * p_reg, uint32_t shorts_mask)
{
    p_reg->SHORTS |= shorts_mask;
}

NRF_STATIC_INLINE void nrf_radio_shorts_disable(NRF_RADIO_Type * p_reg, uint32_t shorts_mask)
{
    p_reg->SHORTS &= ~shorts_mask;
}

NRF_STATIC_INLINE void nrf_radio_shorts_set(NRF_RADIO_Type * p_reg, uint32_t shorts_mask)
{
    p_reg->SHORTS = shorts_mask;
}

NRF_STATIC_INLINE uint32_t nrf_radio_shorts_get(NRF_RADIO_Type const * p_reg)
{
    return p_reg->SHORTS;
}

NRF_STATIC_INLINE void nrf_radio_int_enable(NRF_RADIO_Type * p_reg, uint32_t mask)
{
#if defined(RADIO_INTENSET_READY_Msk)
    p_reg->INTENSET = mask;
#elif defined(RADIO_INTENSET00_READY_Msk)
    p_reg->INTENSET00 = mask;
#endif
}

NRF_STATIC_INLINE void nrf_radio_int_disable(NRF_RADIO_Type * p_reg, uint32_t mask)
{
#if defined(RADIO_INTENCLR_READY_Msk)
    p_reg->INTENCLR = mask;
#elif defined(RADIO_INTENCLR00_READY_Msk)
    p_reg->INTENCLR00 = mask;
#endif
}

NRF_STATIC_INLINE uint32_t nrf_radio_int_enable_check(NRF_RADIO_Type const * p_reg, uint32_t mask)
{
#if defined(RADIO_INTENSET_READY_Msk)
    return p_reg->INTENSET & mask;
#elif defined(RADIO_INTENSET00_READY_Msk)
    return p_reg->INTENSET00 & mask;
#endif
}

#if defined(DPPI_PRESENT)
NRF_STATIC_INLINE void nrf_radio_subscribe_set(NRF_RADIO_Type * p_reg,
                                               nrf_radio_task_t task,
                                               uint8_t          channel)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) task + NRF_RADIO_DPPI_OFFSET)) =
            ((uint32_t)channel | NRF_SUBSCRIBE_PUBLISH_ENABLE);
}

NRF_STATIC_INLINE void nrf_radio_subscribe_clear(NRF_RADIO_Type * p_reg,
                                                 nrf_radio_task_t task)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) task + NRF_RADIO_DPPI_OFFSET)) = 0;
}

NRF_STATIC_INLINE void nrf_radio_publish_set(NRF_RADIO_Type *  p_reg,
                                             nrf_radio_event_t event,
                                             uint8_t           channel)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) event + NRF_RADIO_DPPI_OFFSET)) =
            ((uint32_t)channel | NRF_SUBSCRIBE_PUBLISH_ENABLE);
}

NRF_STATIC_INLINE void nrf_radio_publish_clear(NRF_RADIO_Type *  p_reg,
                                               nrf_radio_event_t event)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) event + NRF_RADIO_DPPI_OFFSET)) = 0;
}
#endif // defined(DPPI_PRESENT)

NRF_STATIC_INLINE bool nrf_radio_crc_status_check(NRF_RADIO_Type const * p_reg)
{
    return ((p_reg->CRCSTATUS & RADIO_CRCSTATUS_CRCSTATUS_Msk) >> RADIO_CRCSTATUS_CRCSTATUS_Pos)
             == RADIO_CRCSTATUS_CRCSTATUS_CRCOk ;
}

NRF_STATIC_INLINE uint8_t nrf_radio_rxmatch_get(NRF_RADIO_Type const * p_reg)
{
    return (uint8_t)p_reg->RXMATCH;
}

NRF_STATIC_INLINE uint32_t nrf_radio_rxcrc_get(NRF_RADIO_Type const * p_reg)
{
    return p_reg->RXCRC;
}

NRF_STATIC_INLINE uint8_t nrf_radio_dai_get(NRF_RADIO_Type const * p_reg)
{
    return (uint8_t)p_reg->DAI;
}

#if defined(RADIO_PDUSTAT_PDUSTAT_Msk)
NRF_STATIC_INLINE uint8_t nrf_radio_pdustat_get(NRF_RADIO_Type const * p_reg)
{
    return (uint8_t)(p_reg->PDUSTAT & RADIO_PDUSTAT_PDUSTAT_Msk);
}
#endif

#if defined(RADIO_PDUSTAT_CISTAT_Msk)
NRF_STATIC_INLINE uint8_t nrf_radio_cistat_get(NRF_RADIO_Type const * p_reg)
{
    return (uint8_t)((p_reg->PDUSTAT & RADIO_PDUSTAT_CISTAT_Msk) >> RADIO_PDUSTAT_CISTAT_Pos);
}
#endif

NRF_STATIC_INLINE void nrf_radio_packetptr_set(NRF_RADIO_Type * p_reg, void const * p_packet)
{
    p_reg->PACKETPTR = (uint32_t)p_packet;
}

NRF_STATIC_INLINE void * nrf_radio_packetptr_get(NRF_RADIO_Type const * p_reg)
{
    return (void *)p_reg->PACKETPTR;
}

NRF_STATIC_INLINE void nrf_radio_frequency_set(NRF_RADIO_Type * p_reg, uint16_t radio_frequency)
{
    NRFX_ASSERT(radio_frequency <= 2500);

#if defined(RADIO_FREQUENCY_MAP_Msk)
    NRFX_ASSERT(radio_frequency >= 2360);

    uint32_t delta;
    if (radio_frequency < 2400)
    {
        delta = (uint32_t)(radio_frequency - 2360) | RADIO_FREQUENCY_MAP_Msk;
    }
    else
    {
        delta = (uint32_t)(radio_frequency - 2400);
    }

    p_reg->FREQUENCY = delta;
#else
    NRFX_ASSERT(radio_frequency >= 2400);
    p_reg->FREQUENCY = (uint32_t)(radio_frequency - 2400);
#endif //defined(RADIO_FREQUENCY_MAP_Msk)
}

NRF_STATIC_INLINE uint16_t nrf_radio_frequency_get(NRF_RADIO_Type const * p_reg)
{
    uint32_t freq;

#if defined(RADIO_FREQUENCY_MAP_Msk)
    if ((p_reg->FREQUENCY & RADIO_FREQUENCY_MAP_Msk) == RADIO_FREQUENCY_MAP_Msk)
    {
        freq = 2360;
    }
    else
#endif
    {
        freq = 2400;
    }
    freq += p_reg->FREQUENCY & RADIO_FREQUENCY_FREQUENCY_Msk;

    return (uint16_t)freq;
}

NRF_STATIC_INLINE void nrf_radio_txpower_set(NRF_RADIO_Type * p_reg, nrf_radio_txpower_t tx_power)
{
    p_reg->TXPOWER = (((uint32_t)tx_power) << RADIO_TXPOWER_TXPOWER_Pos);
}

NRF_STATIC_INLINE nrf_radio_txpower_t nrf_radio_txpower_get(NRF_RADIO_Type const * p_reg)
{
    return (nrf_radio_txpower_t)(p_reg->TXPOWER >> RADIO_TXPOWER_TXPOWER_Pos);
}

NRF_STATIC_INLINE void nrf_radio_mode_set(NRF_RADIO_Type * p_reg, nrf_radio_mode_t radio_mode)
{
    p_reg->MODE = ((uint32_t) radio_mode << RADIO_MODE_MODE_Pos);
}

NRF_STATIC_INLINE nrf_radio_mode_t nrf_radio_mode_get(NRF_RADIO_Type const * p_reg)
{
    return (nrf_radio_mode_t)((p_reg->MODE & RADIO_MODE_MODE_Msk) >> RADIO_MODE_MODE_Pos);
}

NRF_STATIC_INLINE void nrf_radio_packet_configure(NRF_RADIO_Type *                p_reg,
                                                  nrf_radio_packet_conf_t const * p_config)
{
    p_reg->PCNF0 = (((uint32_t)p_config->lflen << RADIO_PCNF0_LFLEN_Pos) |
                    ((uint32_t)p_config->s0len << RADIO_PCNF0_S0LEN_Pos) |
                    ((uint32_t)p_config->s1len << RADIO_PCNF0_S1LEN_Pos) |
#if defined(RADIO_PCNF0_S1INCL_Msk)
                    (p_config->s1incl ?
                        (RADIO_PCNF0_S1INCL_Include   << RADIO_PCNF0_S1INCL_Pos) :
                        (RADIO_PCNF0_S1INCL_Automatic << RADIO_PCNF0_S1INCL_Pos) ) |
#endif
#if defined(RADIO_PCNF0_CILEN_Msk)
                    ((uint32_t)p_config->cilen << RADIO_PCNF0_CILEN_Pos) |
#endif
#if defined(RADIO_PCNF0_PLEN_Msk)
                    ((uint32_t)p_config->plen << RADIO_PCNF0_PLEN_Pos) |
#endif
#if defined(RADIO_PCNF0_CRCINC_Msk)
                    (p_config->crcinc ?
                        (RADIO_PCNF0_CRCINC_Include << RADIO_PCNF0_CRCINC_Pos) :
                        (RADIO_PCNF0_CRCINC_Exclude << RADIO_PCNF0_CRCINC_Pos) ) |
#endif
#if defined(RADIO_PCNF0_TERMLEN_Msk)
                    ((uint32_t)p_config->termlen << RADIO_PCNF0_TERMLEN_Pos) |
#endif
                    0);

    p_reg->PCNF1 = (((uint32_t)p_config->maxlen  << RADIO_PCNF1_MAXLEN_Pos) |
                    ((uint32_t)p_config->statlen << RADIO_PCNF1_STATLEN_Pos) |
                    ((uint32_t)p_config->balen   << RADIO_PCNF1_BALEN_Pos) |
                    (p_config->big_endian ?
                         (RADIO_PCNF1_ENDIAN_Big    << RADIO_PCNF1_ENDIAN_Pos) :
                         (RADIO_PCNF1_ENDIAN_Little << RADIO_PCNF1_ENDIAN_Pos) ) |
                    (p_config->whiteen ?
                         (RADIO_PCNF1_WHITEEN_Enabled  << RADIO_PCNF1_WHITEEN_Pos) :
                         (RADIO_PCNF1_WHITEEN_Disabled << RADIO_PCNF1_WHITEEN_Pos) ));
}

NRF_STATIC_INLINE void nrf_radio_base0_set(NRF_RADIO_Type * p_reg, uint32_t address)
{
    p_reg->BASE0 = address;
}

NRF_STATIC_INLINE uint32_t nrf_radio_base0_get(NRF_RADIO_Type const * p_reg)
{
    return p_reg->BASE0;
}

NRF_STATIC_INLINE void nrf_radio_base1_set(NRF_RADIO_Type * p_reg, uint32_t address)
{
    p_reg->BASE1 = address;
}

NRF_STATIC_INLINE uint32_t nrf_radio_base1_get(NRF_RADIO_Type const * p_reg)
{
    return p_reg->BASE1;
}

NRF_STATIC_INLINE void nrf_radio_prefix0_set(NRF_RADIO_Type * p_reg, uint32_t prefixes)
{
    p_reg->PREFIX0 = prefixes;
}

NRF_STATIC_INLINE uint32_t nrf_radio_prefix0_get(NRF_RADIO_Type const * p_reg)
{
    return p_reg->PREFIX0;
}

NRF_STATIC_INLINE void nrf_radio_prefix1_set(NRF_RADIO_Type * p_reg, uint32_t prefixes)
{
    p_reg->PREFIX1 = prefixes;
}

NRF_STATIC_INLINE uint32_t nrf_radio_prefix1_get(NRF_RADIO_Type const * p_reg)
{
    return p_reg->PREFIX1;
}

NRF_STATIC_INLINE void nrf_radio_txaddress_set(NRF_RADIO_Type * p_reg, uint8_t txaddress)
{
    p_reg->TXADDRESS = ((uint32_t)txaddress) << RADIO_TXADDRESS_TXADDRESS_Pos;
}

NRF_STATIC_INLINE uint8_t nrf_radio_txaddress_get(NRF_RADIO_Type const * p_reg)
{
    return (uint8_t)((p_reg->TXADDRESS & RADIO_TXADDRESS_TXADDRESS_Msk) >>
                     RADIO_TXADDRESS_TXADDRESS_Pos);
}

NRF_STATIC_INLINE void nrf_radio_rxaddresses_set(NRF_RADIO_Type * p_reg, uint8_t rxaddresses)
{
    p_reg->RXADDRESSES = (uint32_t)(rxaddresses);
}

NRF_STATIC_INLINE uint8_t nrf_radio_rxaddresses_get(NRF_RADIO_Type const * p_reg)
{
    return (uint8_t)(p_reg->RXADDRESSES);
}

NRF_STATIC_INLINE void nrf_radio_crc_configure(NRF_RADIO_Type *     p_reg,
                                               uint8_t              crc_length,
                                               nrf_radio_crc_addr_t crc_address,
                                               uint32_t             crc_polynominal)
{
    p_reg->CRCCNF = ((uint32_t)crc_length  << RADIO_CRCCNF_LEN_Pos) |
#if defined(RADIO_CRCCNF_SKIPADDR_Msk)
                    ((uint32_t)crc_address << RADIO_CRCCNF_SKIPADDR_Pos);
#else
                    ((uint32_t)crc_address << RADIO_CRCCNF_OFFSET_Pos);
#endif
    p_reg->CRCPOLY = (crc_polynominal << RADIO_CRCPOLY_CRCPOLY_Pos);
}

NRF_STATIC_INLINE void nrf_radio_crcinit_set(NRF_RADIO_Type * p_reg, uint32_t crc_init_value)
{
    p_reg->CRCINIT = crc_init_value;
}

NRF_STATIC_INLINE uint32_t nrf_radio_crcinit_get(NRF_RADIO_Type const * p_reg)
{
    return p_reg->CRCINIT;
}

NRF_STATIC_INLINE void nrf_radio_ifs_set(NRF_RADIO_Type * p_reg, uint32_t radio_ifs)
{
    p_reg->TIFS = radio_ifs;
}

NRF_STATIC_INLINE uint32_t nrf_radio_ifs_get(NRF_RADIO_Type const * p_reg)
{
    return p_reg->TIFS;
}

NRF_STATIC_INLINE uint8_t nrf_radio_rssi_sample_get(NRF_RADIO_Type const * p_reg)
{
    return (uint8_t)((p_reg->RSSISAMPLE & RADIO_RSSISAMPLE_RSSISAMPLE_Msk) >>
                     RADIO_RSSISAMPLE_RSSISAMPLE_Pos);
}

NRF_STATIC_INLINE nrf_radio_state_t nrf_radio_state_get(NRF_RADIO_Type const * p_reg)
{
    return (nrf_radio_state_t) p_reg->STATE;
}

NRF_STATIC_INLINE void nrf_radio_datawhiteiv_set(NRF_RADIO_Type * p_reg, uint16_t datawhiteiv)
{
#if NRF_RADIO_HAS_DATAWHITE
    p_reg->DATAWHITE = (p_reg->DATAWHITE & ~RADIO_DATAWHITE_IV_Msk) |
                       (((uint32_t)datawhiteiv << RADIO_DATAWHITE_IV_Pos)
                                                & RADIO_DATAWHITE_IV_Msk);
#else
    p_reg->DATAWHITEIV = (((uint16_t)datawhiteiv) & RADIO_DATAWHITEIV_DATAWHITEIV_Msk);
#endif
}

NRF_STATIC_INLINE uint16_t nrf_radio_datawhiteiv_get(NRF_RADIO_Type const * p_reg)
{
#if NRF_RADIO_HAS_DATAWHITE
    return (uint16_t)((p_reg->DATAWHITE & RADIO_DATAWHITE_IV_Msk) >> RADIO_DATAWHITE_IV_Pos);
#else
    return (uint16_t)(p_reg->DATAWHITEIV & RADIO_DATAWHITEIV_DATAWHITEIV_Msk);
#endif
}

#if NRF_RADIO_HAS_DATAWHITE
NRF_STATIC_INLINE void nrf_radio_datawhite_poly_set(NRF_RADIO_Type * p_reg, uint16_t poly)
{
    p_reg->DATAWHITE = (p_reg->DATAWHITE & ~RADIO_DATAWHITE_POLY_Msk) | 
                       (((uint32_t)poly << RADIO_DATAWHITE_POLY_Pos)
                                         & RADIO_DATAWHITE_POLY_Msk);
}

NRF_STATIC_INLINE uint16_t nrf_radio_datawhite_poly_get(NRF_RADIO_Type const * p_reg)
{
    return (uint16_t)((p_reg->DATAWHITE & RADIO_DATAWHITE_POLY_Msk) >> RADIO_DATAWHITE_POLY_Pos);
}
#endif

NRF_STATIC_INLINE void nrf_radio_bcc_set(NRF_RADIO_Type * p_reg, uint32_t radio_bcc)
{
    p_reg->BCC = radio_bcc;
}

NRF_STATIC_INLINE uint32_t nrf_radio_bcc_get(NRF_RADIO_Type const * p_reg)
{
    return p_reg->BCC;
}

NRF_STATIC_INLINE void nrf_radio_dab_set(NRF_RADIO_Type * p_reg,
                                         uint32_t         dab_value,
                                         uint8_t          segment)
{
    NRFX_ASSERT(segment < 8);
    p_reg->DAB[segment] = dab_value;
}

NRF_STATIC_INLINE uint32_t nrf_radio_dab_get(NRF_RADIO_Type const * p_reg, uint8_t segment)
{
    NRFX_ASSERT(segment < 8);
    return p_reg->DAB[segment];
}

NRF_STATIC_INLINE void nrf_radio_dap_set(NRF_RADIO_Type * p_reg,
                                         uint16_t         dap_value,
                                         uint8_t          prefix_index)
{
    NRFX_ASSERT(prefix_index < 8);
    p_reg->DAP[prefix_index] = (uint32_t)dap_value;
}

NRF_STATIC_INLINE uint32_t nrf_radio_dap_get(NRF_RADIO_Type const * p_reg, uint8_t prefix_index)
{
    NRFX_ASSERT(prefix_index < 8);
    return p_reg->DAP[prefix_index];
}

NRF_STATIC_INLINE void nrf_radio_dacnf_set(NRF_RADIO_Type * p_reg, uint8_t ena, uint8_t txadd)
{
    p_reg->DACNF = (((uint32_t)ena   << RADIO_DACNF_ENA0_Pos) |
                    ((uint32_t)txadd << RADIO_DACNF_TXADD0_Pos));
}

NRF_STATIC_INLINE uint8_t nrf_radio_dacnf_ena_get(NRF_RADIO_Type const * p_reg)
{
    return (uint8_t)((p_reg->DACNF & (RADIO_DACNF_ENA0_Msk |
                                      RADIO_DACNF_ENA1_Msk |
                                      RADIO_DACNF_ENA2_Msk |
                                      RADIO_DACNF_ENA3_Msk |
                                      RADIO_DACNF_ENA4_Msk |
                                      RADIO_DACNF_ENA5_Msk |
                                      RADIO_DACNF_ENA6_Msk |
                                      RADIO_DACNF_ENA7_Msk)) >> RADIO_DACNF_ENA0_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_radio_dacnf_txadd_get(NRF_RADIO_Type const * p_reg)
{
    return (uint8_t)((p_reg->DACNF & (RADIO_DACNF_TXADD0_Msk |
                                      RADIO_DACNF_TXADD1_Msk |
                                      RADIO_DACNF_TXADD2_Msk |
                                      RADIO_DACNF_TXADD3_Msk |
                                      RADIO_DACNF_TXADD4_Msk |
                                      RADIO_DACNF_TXADD5_Msk |
                                      RADIO_DACNF_TXADD6_Msk |
                                      RADIO_DACNF_TXADD7_Msk)) >> RADIO_DACNF_TXADD0_Pos);
}

#if defined(RADIO_INTENSET_MHRMATCH_Msk) || defined(RADIO_INTENSET00_MHRMATCH_Msk)
void nrf_radio_mhmu_search_pattern_set(NRF_RADIO_Type * p_reg,
                                       uint32_t         radio_mhmu_search_pattern)
{
    p_reg->MHRMATCHCONF = radio_mhmu_search_pattern;
}

NRF_STATIC_INLINE uint32_t nrf_radio_mhmu_search_pattern_get(NRF_RADIO_Type const * p_reg)
{
    return p_reg->MHRMATCHCONF;
}

NRF_STATIC_INLINE void nrf_radio_mhmu_pattern_mask_set(NRF_RADIO_Type * p_reg,
                                                       uint32_t         radio_mhmu_pattern_mask)
{
#if defined(RADIO_MHRMATCHMAS_MHRMATCHMAS_Msk)
    p_reg->MHRMATCHMAS = radio_mhmu_pattern_mask;
#else
    p_reg->MHRMATCHMASK = radio_mhmu_pattern_mask;
#endif
}

NRF_STATIC_INLINE uint32_t nrf_radio_mhmu_pattern_mask_get(NRF_RADIO_Type const * p_reg)
{
#if defined(RADIO_MHRMATCHMAS_MHRMATCHMAS_Msk)
    return p_reg->MHRMATCHMAS;
#else
    return p_reg->MHRMATCHMASK;
#endif
}
#endif // defined(RADIO_INTENSET_MHRMATCH_Msk) || defined(RADIO_INTENSET00_MHRMATCH_Msk)

#if defined(RADIO_MODECNF0_RU_Msk)
NRF_STATIC_INLINE void nrf_radio_modecnf0_set(NRF_RADIO_Type * p_reg,
                                              bool             fast_ramp_up,
                                              uint8_t          default_tx)
{
    p_reg->MODECNF0 = (fast_ramp_up ? (RADIO_MODECNF0_RU_Fast    << RADIO_MODECNF0_RU_Pos) :
                                      (RADIO_MODECNF0_RU_Default << RADIO_MODECNF0_RU_Pos) ) |
                      (((uint32_t)default_tx) << RADIO_MODECNF0_DTX_Pos);
}

NRF_STATIC_INLINE bool nrf_radio_modecnf0_ru_get(NRF_RADIO_Type const * p_reg)
{
    return ((p_reg->MODECNF0 & RADIO_MODECNF0_RU_Msk) >> RADIO_MODECNF0_RU_Pos) ==
            RADIO_MODECNF0_RU_Fast;
}

NRF_STATIC_INLINE uint8_t nrf_radio_modecnf0_dtx_get(NRF_RADIO_Type const * p_reg)
{
    return (uint8_t)((p_reg->MODECNF0 & RADIO_MODECNF0_DTX_Msk) >> RADIO_MODECNF0_DTX_Pos);
}
#endif // defined(RADIO_MODECNF0_RU_Msk)

#if defined(RADIO_MODECNF0_RU_Msk) || defined(RADIO_TIMING_RU_Msk)
NRF_STATIC_INLINE void nrf_radio_fast_ramp_up_enable_set(NRF_RADIO_Type * p_reg, bool enable)
{
#if defined(RADIO_TIMING_RU_Msk)
    p_reg->TIMING = (enable ? RADIO_TIMING_RU_Fast : RADIO_TIMING_RU_Legacy) <<
                    RADIO_TIMING_RU_Pos;
#elif defined(RADIO_MODECNF0_RU_Msk)
    p_reg->MODECNF0 = ((p_reg->MODECNF0 & (~RADIO_MODECNF0_RU_Msk)) |
                       (enable ? RADIO_MODECNF0_RU_Fast : RADIO_MODECNF0_RU_Default) <<
                       RADIO_MODECNF0_RU_Pos);
#endif
}

NRF_STATIC_INLINE bool nrf_radio_fast_ramp_up_check(NRF_RADIO_Type const * p_reg)
{
#if defined(RADIO_TIMING_RU_Msk)
    return ((p_reg->TIMING & RADIO_TIMING_RU_Msk) >> RADIO_TIMING_RU_Pos) == RADIO_TIMING_RU_Fast;
#elif defined(RADIO_MODECNF0_RU_Msk)
    return ((p_reg->MODECNF0 & RADIO_MODECNF0_RU_Msk) >> RADIO_MODECNF0_RU_Pos) ==
           RADIO_MODECNF0_RU_Fast;
#endif
}
#endif

#if defined(RADIO_SFD_SFD_Msk)
NRF_STATIC_INLINE void nrf_radio_sfd_set(NRF_RADIO_Type * p_reg, uint8_t sfd)
{
    p_reg->SFD = ((uint32_t)sfd) << RADIO_SFD_SFD_Pos;
}

NRF_STATIC_INLINE uint8_t nrf_radio_sfd_get(NRF_RADIO_Type const * p_reg)
{
    return (uint8_t)((p_reg->SFD & RADIO_SFD_SFD_Msk) >> RADIO_SFD_SFD_Pos);
}
#endif // defined(RADIO_SFD_SFD_Msk)

#if defined(RADIO_EDCNT_EDCNT_Msk) || defined(RADIO_EDCTRL_EDCNT_Msk)
NRF_STATIC_INLINE void nrf_radio_ed_loop_count_set(NRF_RADIO_Type * p_reg, uint32_t ed_loop_count)
{
#if defined(RADIO_EDCNT_EDCNT_Msk)
    p_reg->EDCNT = (ed_loop_count & RADIO_EDCNT_EDCNT_Msk);
#elif defined(RADIO_EDCTRL_EDCNT_Msk)
    p_reg->EDCTRL = ((p_reg->EDCTRL & ~RADIO_EDCTRL_EDCNT_Msk) |
                     ((ed_loop_count << RADIO_EDCTRL_EDCNT_Pos) & RADIO_EDCTRL_EDCNT_Msk));
#endif
}
#endif

#if defined(RADIO_EDCTRL_EDPERIOD_Msk)
NRF_STATIC_INLINE void nrf_radio_ed_cca_period_set(NRF_RADIO_Type * p_reg, uint8_t ed_period)
{
    p_reg->EDCTRL = ((p_reg->EDCTRL & ~RADIO_EDCTRL_EDPERIOD_Msk) |
                     ((ed_period << RADIO_EDCTRL_EDPERIOD_Pos) & RADIO_EDCTRL_EDPERIOD_Msk));
}
#endif

#if defined(RADIO_EDSAMPLE_EDLVL_Msk)
NRF_STATIC_INLINE uint8_t nrf_radio_ed_sample_get(NRF_RADIO_Type const * p_reg)
{
    return (uint8_t) p_reg->EDSAMPLE;
}
#endif

#if defined(RADIO_CCACTRL_CCAMODE_Msk)
NRF_STATIC_INLINE void nrf_radio_cca_configure(NRF_RADIO_Type *     p_reg,
                                               nrf_radio_cca_mode_t cca_mode,
                                               uint8_t              cca_ed_threshold,
                                               uint8_t              cca_corr_threshold,
                                               uint8_t              cca_corr_cnt)
{
    p_reg->CCACTRL = (((uint32_t)cca_mode           << RADIO_CCACTRL_CCAMODE_Pos) |
                      ((uint32_t)cca_ed_threshold   << RADIO_CCACTRL_CCAEDTHRES_Pos) |
                      ((uint32_t)cca_corr_threshold << RADIO_CCACTRL_CCACORRTHRES_Pos) |
                      ((uint32_t)cca_corr_cnt       << RADIO_CCACTRL_CCACORRCNT_Pos));
}
#endif

#if defined(RADIO_POWER_POWER_Msk)
NRF_STATIC_INLINE void nrf_radio_power_set(NRF_RADIO_Type * p_reg, bool radio_power)
{
    p_reg->POWER = (radio_power ? RADIO_POWER_POWER_Enabled : RADIO_POWER_POWER_Disabled)
                   << RADIO_POWER_POWER_Pos;
}
#endif

#if defined(RADIO_CTESTATUS_CTETIME_Msk)
NRF_STATIC_INLINE uint32_t nrf_radio_cte_time_get(NRF_RADIO_Type const * p_reg)
{
    return ((p_reg->CTESTATUS & RADIO_CTESTATUS_CTETIME_Msk) >> RADIO_CTESTATUS_CTETIME_Pos);
}

NRF_STATIC_INLINE uint32_t nrf_radio_cte_type_get(NRF_RADIO_Type const * p_reg)
{
    return ((p_reg->CTESTATUS & RADIO_CTESTATUS_CTETYPE_Msk) >> RADIO_CTESTATUS_CTETYPE_Pos);
}

NRF_STATIC_INLINE uint32_t nrf_radio_cte_rfu_get(NRF_RADIO_Type const * p_reg)
{
    return ((p_reg->CTESTATUS & RADIO_CTESTATUS_RFU_Msk) >> RADIO_CTESTATUS_RFU_Pos);
}
#endif

#if defined(RADIO_DFESTATUS_SWITCHINGSTATE_Msk)
NRF_STATIC_INLINE
nrf_radio_dfe_switch_state_t nrf_radio_dfe_switch_state_get(NRF_RADIO_Type const * p_reg)
{
    return (nrf_radio_dfe_switch_state_t)((p_reg->DFESTATUS & RADIO_DFESTATUS_SWITCHINGSTATE_Msk) >>
                                          RADIO_DFESTATUS_SWITCHINGSTATE_Pos);
}

NRF_STATIC_INLINE
nrf_radio_dfe_sample_state_t nrf_radio_dfe_sample_state_get(NRF_RADIO_Type const * p_reg)
{
    return (nrf_radio_dfe_sample_state_t)((p_reg->DFESTATUS & RADIO_DFESTATUS_SAMPLINGSTATE_Msk) >>
                                          RADIO_DFESTATUS_SAMPLINGSTATE_Pos);
}
#endif

#if defined(RADIO_CTEINLINECONF_S0CONF_Msk)
NRF_STATIC_INLINE void nrf_radio_cteinline_configure(NRF_RADIO_Type *                   p_reg,
                                                     nrf_radio_cteinline_conf_t const * p_config)
{
    p_reg->CTEINLINECONF = (((p_config->enable ?
                                  RADIO_CTEINLINECONF_CTEINLINECTRLEN_Enabled :
                                  RADIO_CTEINLINECONF_CTEINLINECTRLEN_Disabled) <<
                                  RADIO_CTEINLINECONF_CTEINLINECTRLEN_Pos ) |
                            ((p_config->info_in_s1 ?
                                  RADIO_CTEINLINECONF_CTEINFOINS1_InS1 :
                                  RADIO_CTEINLINECONF_CTEINFOINS1_NotInS1) <<
                                  RADIO_CTEINLINECONF_CTEINFOINS1_Pos ) |
                            ((p_config->err_handling ?
                                  RADIO_CTEINLINECONF_CTEERRORHANDLING_Yes :
                                  RADIO_CTEINLINECONF_CTEERRORHANDLING_No) <<
                                  RADIO_CTEINLINECONF_CTEERRORHANDLING_Pos ) |
                            ((uint32_t)p_config->time_range <<
                                 RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Pos) |
                            ((uint32_t)p_config->rx1us <<
                                 RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Pos) |
                            ((uint32_t)p_config->rx2us <<
                                 RADIO_CTEINLINECONF_CTEINLINERXMODE2US_Pos) |
                            ((uint32_t)p_config->s0_pattern << RADIO_CTEINLINECONF_S0CONF_Pos) |
                            ((uint32_t)p_config->s0_mask << RADIO_CTEINLINECONF_S0MASK_Pos));
}
#endif

#if defined(RADIO_DFECTRL1_NUMBEROF8US_Msk)
NRF_STATIC_INLINE void nrf_radio_dfectrl_configure(NRF_RADIO_Type *                 p_reg,
                                                   nrf_radio_dfectrl_conf_t const * p_config)
{
    p_reg->DFECTRL1 = ((((uint32_t)p_config->dfe_len << RADIO_DFECTRL1_NUMBEROF8US_Pos) &
                            RADIO_DFECTRL1_NUMBEROF8US_Msk) |
                       ((uint32_t)p_config->extension << RADIO_DFECTRL1_DFEINEXTENSION_Pos) |
                       ((uint32_t)p_config->switch_spacing << RADIO_DFECTRL1_TSWITCHSPACING_Pos) |
                       ((uint32_t)p_config->spacing_ref << RADIO_DFECTRL1_TSAMPLESPACINGREF_Pos) |
                       ((uint32_t)p_config->sample_type << RADIO_DFECTRL1_SAMPLETYPE_Pos) |
                       ((uint32_t)p_config->sample_spacing << RADIO_DFECTRL1_TSAMPLESPACING_Pos) |
#if defined(RADIO_DFECTRL1_REPEATPATTERN_Msk)
                       (((uint32_t)p_config->repeat_pattern << RADIO_DFECTRL1_REPEATPATTERN_Pos) &
                            RADIO_DFECTRL1_REPEATPATTERN_Msk) |
#endif
                       (((uint32_t)p_config->gain_steps << RADIO_DFECTRL1_AGCBACKOFFGAIN_Pos) &
                            RADIO_DFECTRL1_AGCBACKOFFGAIN_Msk));

    p_reg->DFECTRL2 = ((((uint32_t)p_config->switch_offset << RADIO_DFECTRL2_TSWITCHOFFSET_Pos) &
                            RADIO_DFECTRL2_TSWITCHOFFSET_Msk) |
                       (((uint32_t)p_config->sample_offset << RADIO_DFECTRL2_TSAMPLEOFFSET_Pos) &
                            RADIO_DFECTRL2_TSAMPLEOFFSET_Msk));
}
#endif

#if defined(RADIO_SWITCHPATTERN_SWITCHPATTERN_Msk)
NRF_STATIC_INLINE void nrf_radio_dfe_pattern_pin_set(NRF_RADIO_Type * p_reg,
                                                     uint32_t         pin,
                                                     uint8_t          pos)
{
    p_reg->PSEL.DFEGPIO[pos] = pin;
}

NRF_STATIC_INLINE void nrf_radio_dfe_pattern_add(NRF_RADIO_Type * p_reg, uint8_t pin_mask)
{
    p_reg->SWITCHPATTERN = (uint32_t)pin_mask;
}

NRF_STATIC_INLINE void nrf_radio_dfe_patterns_add(NRF_RADIO_Type * p_reg,
                                                  uint8_t const *  p_pin_masks,
                                                  size_t           length)
{
    for (size_t i = 0; i < length; i++)
    {
        nrf_radio_dfe_pattern_add(p_reg, p_pin_masks[i]);
    }
}

NRF_STATIC_INLINE uint32_t nrf_radio_dfe_pattern_cnt_get(NRF_RADIO_Type const * p_reg)
{
    return p_reg->SWITCHPATTERN;
}

NRF_STATIC_INLINE void nrf_radio_dfe_pattern_clear(NRF_RADIO_Type * p_reg)
{
    p_reg->CLEARPATTERN = RADIO_CLEARPATTERN_CLEARPATTERN_Msk;
}
#endif

#if defined(RADIO_DFEPACKET_PTR_PTR_Msk) || defined(RADIO_DFEPACKET_PTR_OFFSET_Msk)
NRF_STATIC_INLINE void nrf_radio_dfe_buffer_set(NRF_RADIO_Type * p_reg,
                                                uint32_t *       p_buffer,
                                                size_t           length)
{
    p_reg->DFEPACKET.PTR    = (uint32_t)p_buffer;
#if defined(RADIO_DFEPACKET_MAX_MAX_Msk)
    p_reg->DFEPACKET.MAX    = length;
#else
    p_reg->DFEPACKET.MAXCNT = length;
#endif
}

NRF_STATIC_INLINE uint32_t nrf_radio_dfe_amount_get(NRF_RADIO_Type const * p_reg)
{
    return p_reg->DFEPACKET.AMOUNT;
}

#if defined(RADIO_DFEPACKET_CURRENTAMOUNT_AMOUNT_Msk)
NRF_STATIC_INLINE uint32_t nrf_radio_dfe_current_amount_get(NRF_RADIO_Type const * p_reg)
{
    return p_reg->DFEPACKET.CURRENTAMOUNT;
}
#endif

#endif

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_RADIO_H__
