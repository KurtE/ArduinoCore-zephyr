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

#ifndef NRF_PPIB_H__
#define NRF_PPIB_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Macro for generating if statement code blocks that allow extracting
 * the number of channels associated with the specific PPIB instance.
 */
#define NRF_INTERNAL_PPIB_CHAN_NUM_EXTRACT(chan_num, p_reg)                                                    \
    if (0) {}                                                                                                  \
    NRFX_FOREACH_PRESENT(PPIB, NRF_INTERNAL_ELSE_IF_EXTRACT_1, (), (), chan_num, _NTASKSEVENTS_MAX + 1, p_reg) \
    else                                                                                                       \
    {                                                                                                          \
        chan_num = 0;                                                                                          \
    }

/**
* @defgroup nrf_ppib_hal PPIB HAL
* @{
* @ingroup nrf_ppib
* @brief   Hardware access layer for managing the PPI Bridge (PPIB) peripheral.
*/

/** @brief Number of send tasks. */
#define NRF_PPIB_TASKS_SEND_COUNT PPIB_TASKS_SEND_MaxCount

/** @brief Number of receive events. */
#define NRF_PPIB_EVENTS_RECEIVE_COUNT PPIB_EVENTS_RECEIVE_MaxCount

/** @brief PPIB tasks. */
typedef enum
{
    NRF_PPIB_TASK_SEND_0  = offsetof(NRF_PPIB_Type, TASKS_SEND[0]),
    NRF_PPIB_TASK_SEND_1  = offsetof(NRF_PPIB_Type, TASKS_SEND[1]),
    NRF_PPIB_TASK_SEND_2  = offsetof(NRF_PPIB_Type, TASKS_SEND[2]),
    NRF_PPIB_TASK_SEND_3  = offsetof(NRF_PPIB_Type, TASKS_SEND[3]),
    NRF_PPIB_TASK_SEND_4  = offsetof(NRF_PPIB_Type, TASKS_SEND[4]),
    NRF_PPIB_TASK_SEND_5  = offsetof(NRF_PPIB_Type, TASKS_SEND[5]),
    NRF_PPIB_TASK_SEND_6  = offsetof(NRF_PPIB_Type, TASKS_SEND[6]),
    NRF_PPIB_TASK_SEND_7  = offsetof(NRF_PPIB_Type, TASKS_SEND[7]),
    NRF_PPIB_TASK_SEND_8  = offsetof(NRF_PPIB_Type, TASKS_SEND[8]),
    NRF_PPIB_TASK_SEND_9  = offsetof(NRF_PPIB_Type, TASKS_SEND[9]),
    NRF_PPIB_TASK_SEND_10 = offsetof(NRF_PPIB_Type, TASKS_SEND[10]),
    NRF_PPIB_TASK_SEND_11 = offsetof(NRF_PPIB_Type, TASKS_SEND[11]),
    NRF_PPIB_TASK_SEND_12 = offsetof(NRF_PPIB_Type, TASKS_SEND[12]),
    NRF_PPIB_TASK_SEND_13 = offsetof(NRF_PPIB_Type, TASKS_SEND[13]),
    NRF_PPIB_TASK_SEND_14 = offsetof(NRF_PPIB_Type, TASKS_SEND[14]),
    NRF_PPIB_TASK_SEND_15 = offsetof(NRF_PPIB_Type, TASKS_SEND[15]),
    NRF_PPIB_TASK_SEND_16 = offsetof(NRF_PPIB_Type, TASKS_SEND[16]),
    NRF_PPIB_TASK_SEND_17 = offsetof(NRF_PPIB_Type, TASKS_SEND[17]),
    NRF_PPIB_TASK_SEND_18 = offsetof(NRF_PPIB_Type, TASKS_SEND[18]),
    NRF_PPIB_TASK_SEND_19 = offsetof(NRF_PPIB_Type, TASKS_SEND[19]),
    NRF_PPIB_TASK_SEND_20 = offsetof(NRF_PPIB_Type, TASKS_SEND[20]),
    NRF_PPIB_TASK_SEND_21 = offsetof(NRF_PPIB_Type, TASKS_SEND[21]),
    NRF_PPIB_TASK_SEND_22 = offsetof(NRF_PPIB_Type, TASKS_SEND[22]),
    NRF_PPIB_TASK_SEND_23 = offsetof(NRF_PPIB_Type, TASKS_SEND[23]),
    NRF_PPIB_TASK_SEND_24 = offsetof(NRF_PPIB_Type, TASKS_SEND[24]),
    NRF_PPIB_TASK_SEND_25 = offsetof(NRF_PPIB_Type, TASKS_SEND[25]),
    NRF_PPIB_TASK_SEND_26 = offsetof(NRF_PPIB_Type, TASKS_SEND[26]),
    NRF_PPIB_TASK_SEND_27 = offsetof(NRF_PPIB_Type, TASKS_SEND[27]),
    NRF_PPIB_TASK_SEND_28 = offsetof(NRF_PPIB_Type, TASKS_SEND[28]),
    NRF_PPIB_TASK_SEND_29 = offsetof(NRF_PPIB_Type, TASKS_SEND[29]),
    NRF_PPIB_TASK_SEND_30 = offsetof(NRF_PPIB_Type, TASKS_SEND[30]),
    NRF_PPIB_TASK_SEND_31 = offsetof(NRF_PPIB_Type, TASKS_SEND[31]),
} nrf_ppib_task_t;

/** @brief PPIB events. */
typedef enum
{
    NRF_PPIB_EVENT_RECEIVE_0  = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[0]),
    NRF_PPIB_EVENT_RECEIVE_1  = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[1]),
    NRF_PPIB_EVENT_RECEIVE_2  = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[2]),
    NRF_PPIB_EVENT_RECEIVE_3  = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[3]),
    NRF_PPIB_EVENT_RECEIVE_4  = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[4]),
    NRF_PPIB_EVENT_RECEIVE_5  = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[5]),
    NRF_PPIB_EVENT_RECEIVE_6  = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[6]),
    NRF_PPIB_EVENT_RECEIVE_7  = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[7]),
    NRF_PPIB_EVENT_RECEIVE_8  = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[8]),
    NRF_PPIB_EVENT_RECEIVE_9  = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[9]),
    NRF_PPIB_EVENT_RECEIVE_10 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[10]),
    NRF_PPIB_EVENT_RECEIVE_11 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[11]),
    NRF_PPIB_EVENT_RECEIVE_12 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[12]),
    NRF_PPIB_EVENT_RECEIVE_13 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[13]),
    NRF_PPIB_EVENT_RECEIVE_14 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[14]),
    NRF_PPIB_EVENT_RECEIVE_15 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[15]),
    NRF_PPIB_EVENT_RECEIVE_16 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[16]),
    NRF_PPIB_EVENT_RECEIVE_17 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[17]),
    NRF_PPIB_EVENT_RECEIVE_18 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[18]),
    NRF_PPIB_EVENT_RECEIVE_19 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[19]),
    NRF_PPIB_EVENT_RECEIVE_20 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[20]),
    NRF_PPIB_EVENT_RECEIVE_21 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[21]),
    NRF_PPIB_EVENT_RECEIVE_22 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[22]),
    NRF_PPIB_EVENT_RECEIVE_23 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[23]),
    NRF_PPIB_EVENT_RECEIVE_24 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[24]),
    NRF_PPIB_EVENT_RECEIVE_25 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[25]),
    NRF_PPIB_EVENT_RECEIVE_26 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[26]),
    NRF_PPIB_EVENT_RECEIVE_27 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[27]),
    NRF_PPIB_EVENT_RECEIVE_28 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[28]),
    NRF_PPIB_EVENT_RECEIVE_29 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[29]),
    NRF_PPIB_EVENT_RECEIVE_30 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[30]),
    NRF_PPIB_EVENT_RECEIVE_31 = offsetof(NRF_PPIB_Type, EVENTS_RECEIVE[31]),
} nrf_ppib_event_t;

#if defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#endif

/** @brief Send task mask. */
typedef enum
{
    NRF_PPIB_SEND_0_MASK  = PPIB_OVERFLOW_SEND_SEND0_Msk,
    NRF_PPIB_SEND_1_MASK  = PPIB_OVERFLOW_SEND_SEND1_Msk,
    NRF_PPIB_SEND_2_MASK  = PPIB_OVERFLOW_SEND_SEND2_Msk,
    NRF_PPIB_SEND_3_MASK  = PPIB_OVERFLOW_SEND_SEND3_Msk,
    NRF_PPIB_SEND_4_MASK  = PPIB_OVERFLOW_SEND_SEND4_Msk,
    NRF_PPIB_SEND_5_MASK  = PPIB_OVERFLOW_SEND_SEND5_Msk,
    NRF_PPIB_SEND_6_MASK  = PPIB_OVERFLOW_SEND_SEND6_Msk,
    NRF_PPIB_SEND_7_MASK  = PPIB_OVERFLOW_SEND_SEND7_Msk,
    NRF_PPIB_SEND_8_MASK  = PPIB_OVERFLOW_SEND_SEND8_Msk,
    NRF_PPIB_SEND_9_MASK  = PPIB_OVERFLOW_SEND_SEND9_Msk,
    NRF_PPIB_SEND_10_MASK = PPIB_OVERFLOW_SEND_SEND10_Msk,
    NRF_PPIB_SEND_11_MASK = PPIB_OVERFLOW_SEND_SEND11_Msk,
    NRF_PPIB_SEND_12_MASK = PPIB_OVERFLOW_SEND_SEND12_Msk,
    NRF_PPIB_SEND_13_MASK = PPIB_OVERFLOW_SEND_SEND13_Msk,
    NRF_PPIB_SEND_14_MASK = PPIB_OVERFLOW_SEND_SEND14_Msk,
    NRF_PPIB_SEND_15_MASK = PPIB_OVERFLOW_SEND_SEND15_Msk,
    NRF_PPIB_SEND_16_MASK = PPIB_OVERFLOW_SEND_SEND16_Msk,
    NRF_PPIB_SEND_17_MASK = PPIB_OVERFLOW_SEND_SEND17_Msk,
    NRF_PPIB_SEND_18_MASK = PPIB_OVERFLOW_SEND_SEND18_Msk,
    NRF_PPIB_SEND_19_MASK = PPIB_OVERFLOW_SEND_SEND19_Msk,
    NRF_PPIB_SEND_20_MASK = PPIB_OVERFLOW_SEND_SEND20_Msk,
    NRF_PPIB_SEND_21_MASK = PPIB_OVERFLOW_SEND_SEND21_Msk,
    NRF_PPIB_SEND_22_MASK = PPIB_OVERFLOW_SEND_SEND22_Msk,
    NRF_PPIB_SEND_23_MASK = PPIB_OVERFLOW_SEND_SEND23_Msk,
    NRF_PPIB_SEND_24_MASK = PPIB_OVERFLOW_SEND_SEND24_Msk,
    NRF_PPIB_SEND_25_MASK = PPIB_OVERFLOW_SEND_SEND25_Msk,
    NRF_PPIB_SEND_26_MASK = PPIB_OVERFLOW_SEND_SEND26_Msk,
    NRF_PPIB_SEND_27_MASK = PPIB_OVERFLOW_SEND_SEND27_Msk,
    NRF_PPIB_SEND_28_MASK = PPIB_OVERFLOW_SEND_SEND28_Msk,
    NRF_PPIB_SEND_29_MASK = PPIB_OVERFLOW_SEND_SEND29_Msk,
    NRF_PPIB_SEND_30_MASK = PPIB_OVERFLOW_SEND_SEND30_Msk,
    NRF_PPIB_SEND_31_MASK = PPIB_OVERFLOW_SEND_SEND31_Msk,
} nrf_ppib_send_mask_t;

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

/**
 * @brief Function for getting the total number of available channels for the given PPIB instance.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Number of available channels.
 */
NRF_STATIC_INLINE uint8_t nrf_ppib_channel_number_get(NRF_PPIB_Type const * p_reg);

/**
 * @brief Function for returning the specified PPIB SEND task.
 *
 * @param[in] index Task index.
 *
 * @return The specified PPIB SEND task.
 */
NRF_STATIC_INLINE nrf_ppib_task_t nrf_ppib_send_task_get(uint8_t index);

/**
 * @brief Function for getting the address of the specified PPIB task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task.
 *
 * @return Address of the specified task.
 */
NRF_STATIC_INLINE uint32_t nrf_ppib_task_address_get(NRF_PPIB_Type const * p_reg,
                                                     nrf_ppib_task_t       task);

/**
 * @brief Function for returning the specified PPIB RECEIVE event.
 *
 * @param[in] index Event index.
 *
 * @return The specified PPIB RECEIVE event.
 */
NRF_STATIC_INLINE nrf_ppib_event_t nrf_ppib_receive_event_get(uint8_t index);

/**
 * @brief Function for getting the address of the specified PPIB event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event.
 *
 * @return Address of the specified event.
 */
NRF_STATIC_INLINE uint32_t nrf_ppib_event_address_get(NRF_PPIB_Type const * p_reg,
                                                      nrf_ppib_event_t      event);

/**
 * @brief Function for setting the subscribe configuration for a given task.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] task    Task for which to set the configuration.
 * @param[in] channel PPIB channel through which to subscribe events.
 */
NRF_STATIC_INLINE void nrf_ppib_subscribe_set(NRF_PPIB_Type * p_reg,
                                              nrf_ppib_task_t task,
                                              uint8_t         channel);

/**
 * @brief Function for clearing the subscribe configuration for a given task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task for which to clear the configuration.
 */
NRF_STATIC_INLINE void nrf_ppib_subscribe_clear(NRF_PPIB_Type * p_reg, nrf_ppib_task_t task);

/**
 * @brief Function for setting the publish configuration for a given event.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] event   Event for which to set the configuration.
 * @param[in] channel PPIB channel through which to publish the event.
 */
NRF_STATIC_INLINE void nrf_ppib_publish_set(NRF_PPIB_Type *  p_reg,
                                            nrf_ppib_event_t event,
                                            uint8_t          channel);

/**
 * @brief Function for clearing the publish configuration for a given event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event for which to clear the configuration.
 */
NRF_STATIC_INLINE void nrf_ppib_publish_clear(NRF_PPIB_Type * p_reg, nrf_ppib_event_t event);

/**
 * @brief Function for getting the task oveflow register for SEND tasks.
 *        Task overflow mask is cleared after reading.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Mask of SEND tasks overflow, constructed with @ref nrf_ppib_send_mask_t.
 */
NRF_STATIC_INLINE uint32_t nrf_ppib_overflow_get_and_clear(NRF_PPIB_Type * p_reg);

/**
 * @brief Function for retrieving the state of overflow for a given SEND task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] index SEND task index to be checked for overflow.
 *
 * @retval true  The overflow has happened.
 * @retval false The overflow has not happened.
 */
NRF_STATIC_INLINE bool nrf_ppib_overflow_check(NRF_PPIB_Type const * p_reg, uint8_t index);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE uint8_t nrf_ppib_channel_number_get(NRF_PPIB_Type const * p_reg)
{
    (void)p_reg;

    uint8_t chan_num = 0;
    NRF_INTERNAL_PPIB_CHAN_NUM_EXTRACT(chan_num, p_reg);
    return chan_num;
}

NRF_STATIC_INLINE nrf_ppib_task_t nrf_ppib_send_task_get(uint8_t index)
{
    NRFX_ASSERT(index < NRF_PPIB_TASKS_SEND_COUNT);
    return (nrf_ppib_task_t)NRFX_OFFSETOF(NRF_PPIB_Type, TASKS_SEND[index]);
}

NRF_STATIC_INLINE uint32_t nrf_ppib_task_address_get(NRF_PPIB_Type const * p_reg,
                                                     nrf_ppib_task_t       task)
{
    return ((uint32_t)p_reg + task);
}

NRF_STATIC_INLINE nrf_ppib_event_t nrf_ppib_receive_event_get(uint8_t index)
{
    NRFX_ASSERT(index < NRF_PPIB_EVENTS_RECEIVE_COUNT);
    return (nrf_ppib_event_t)NRFX_OFFSETOF(NRF_PPIB_Type, EVENTS_RECEIVE[index]);
}

NRF_STATIC_INLINE uint32_t nrf_ppib_event_address_get(NRF_PPIB_Type const * p_reg,
                                                      nrf_ppib_event_t      event)
{
    return ((uint32_t)p_reg + event);
}

NRF_STATIC_INLINE void nrf_ppib_subscribe_set(NRF_PPIB_Type * p_reg,
                                              nrf_ppib_task_t task,
                                              uint8_t         channel)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) task + 0x80UL)) =
            ((uint32_t)channel | NRF_SUBSCRIBE_PUBLISH_ENABLE);
}

NRF_STATIC_INLINE void nrf_ppib_subscribe_clear(NRF_PPIB_Type * p_reg,
                                                nrf_ppib_task_t task)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) task + 0x80UL)) = 0;
}

NRF_STATIC_INLINE void nrf_ppib_publish_set(NRF_PPIB_Type *  p_reg,
                                            nrf_ppib_event_t event,
                                            uint8_t          channel)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) event + 0x80UL)) =
            ((uint32_t)channel | NRF_SUBSCRIBE_PUBLISH_ENABLE);
}

NRF_STATIC_INLINE void nrf_ppib_publish_clear(NRF_PPIB_Type *  p_reg,
                                              nrf_ppib_event_t event)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) event + 0x80UL)) = 0;
}

NRF_STATIC_INLINE uint32_t nrf_ppib_overflow_get_and_clear(NRF_PPIB_Type * p_reg)
{
    uint32_t overflow_mask = p_reg->OVERFLOW.SEND;
    p_reg->OVERFLOW.SEND = ~overflow_mask;
    return overflow_mask;
}

NRF_STATIC_INLINE bool nrf_ppib_overflow_check(NRF_PPIB_Type const * p_reg, uint8_t index)
{
    NRFX_ASSERT(index < NRF_PPIB_TASKS_SEND_COUNT);
    return (bool)((p_reg->OVERFLOW.SEND >> index) & 0x1UL);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif
