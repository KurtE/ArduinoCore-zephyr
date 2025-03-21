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

#ifndef NRF_BELLBOARD_H__
#define NRF_BELLBOARD_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_bellboard_hal BELLBOARD HAL
 * @{
 * @ingroup nrf_bellboard
 * @brief   Hardware access layer for managing the BELLBOARD peripheral.
 */

/** @brief Symbol specifying maximum number of available events triggered. */
#define NRF_BELLBOARD_EVENTS_TRIGGERED_COUNT BELLBOARD_EVENTS_TRIGGERED_MaxCount

/** @brief BELLBOARD events. */
typedef enum
{
    NRF_BELLBOARD_EVENT_TRIGGERED_0  = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[0]),
    NRF_BELLBOARD_EVENT_TRIGGERED_1  = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[1]),
    NRF_BELLBOARD_EVENT_TRIGGERED_2  = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[2]),
    NRF_BELLBOARD_EVENT_TRIGGERED_3  = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[3]),
#if NRF_BELLBOARD_EVENTS_TRIGGERED_COUNT > 4
    NRF_BELLBOARD_EVENT_TRIGGERED_4  = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[4]),
    NRF_BELLBOARD_EVENT_TRIGGERED_5  = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[5]),
    NRF_BELLBOARD_EVENT_TRIGGERED_6  = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[6]),
    NRF_BELLBOARD_EVENT_TRIGGERED_7  = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[7]),
    NRF_BELLBOARD_EVENT_TRIGGERED_8  = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[8]),
    NRF_BELLBOARD_EVENT_TRIGGERED_9  = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[9]),
    NRF_BELLBOARD_EVENT_TRIGGERED_10 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[10]),
    NRF_BELLBOARD_EVENT_TRIGGERED_11 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[11]),
    NRF_BELLBOARD_EVENT_TRIGGERED_12 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[12]),
    NRF_BELLBOARD_EVENT_TRIGGERED_13 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[13]),
    NRF_BELLBOARD_EVENT_TRIGGERED_14 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[14]),
    NRF_BELLBOARD_EVENT_TRIGGERED_15 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[15]),
    NRF_BELLBOARD_EVENT_TRIGGERED_16 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[16]),
    NRF_BELLBOARD_EVENT_TRIGGERED_17 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[17]),
    NRF_BELLBOARD_EVENT_TRIGGERED_18 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[18]),
    NRF_BELLBOARD_EVENT_TRIGGERED_19 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[19]),
    NRF_BELLBOARD_EVENT_TRIGGERED_20 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[20]),
    NRF_BELLBOARD_EVENT_TRIGGERED_21 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[21]),
    NRF_BELLBOARD_EVENT_TRIGGERED_22 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[22]),
    NRF_BELLBOARD_EVENT_TRIGGERED_23 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[23]),
    NRF_BELLBOARD_EVENT_TRIGGERED_24 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[24]),
    NRF_BELLBOARD_EVENT_TRIGGERED_25 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[25]),
    NRF_BELLBOARD_EVENT_TRIGGERED_26 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[26]),
    NRF_BELLBOARD_EVENT_TRIGGERED_27 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[27]),
    NRF_BELLBOARD_EVENT_TRIGGERED_28 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[28]),
    NRF_BELLBOARD_EVENT_TRIGGERED_29 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[29]),
    NRF_BELLBOARD_EVENT_TRIGGERED_30 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[30]),
    NRF_BELLBOARD_EVENT_TRIGGERED_31 = offsetof(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[31]),
#endif // BELLBOARD_TASKS_TRIGGER_MaxCount > 4
} nrf_bellboard_event_t;

/** @brief BELLBOARD interrupts. */
typedef enum
{
    NRF_BELLBOARD_INT_TRIGGERED_0_MASK  = BELLBOARD_INTENSET0_TRIGGERED0_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_1_MASK  = BELLBOARD_INTENSET0_TRIGGERED1_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_2_MASK  = BELLBOARD_INTENSET0_TRIGGERED2_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_3_MASK  = BELLBOARD_INTENSET0_TRIGGERED3_Msk,
#if NRF_BELLBOARD_EVENTS_TRIGGERED_COUNT > 4
    NRF_BELLBOARD_INT_TRIGGERED_4_MASK  = BELLBOARD_INTENSET0_TRIGGERED4_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_5_MASK  = BELLBOARD_INTENSET0_TRIGGERED5_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_6_MASK  = BELLBOARD_INTENSET0_TRIGGERED6_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_7_MASK  = BELLBOARD_INTENSET0_TRIGGERED7_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_8_MASK  = BELLBOARD_INTENSET0_TRIGGERED8_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_9_MASK  = BELLBOARD_INTENSET0_TRIGGERED9_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_10_MASK = BELLBOARD_INTENSET0_TRIGGERED10_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_11_MASK = BELLBOARD_INTENSET0_TRIGGERED11_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_12_MASK = BELLBOARD_INTENSET0_TRIGGERED12_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_13_MASK = BELLBOARD_INTENSET0_TRIGGERED13_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_14_MASK = BELLBOARD_INTENSET0_TRIGGERED14_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_15_MASK = BELLBOARD_INTENSET0_TRIGGERED15_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_16_MASK = BELLBOARD_INTENSET0_TRIGGERED16_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_17_MASK = BELLBOARD_INTENSET0_TRIGGERED17_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_18_MASK = BELLBOARD_INTENSET0_TRIGGERED18_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_19_MASK = BELLBOARD_INTENSET0_TRIGGERED19_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_20_MASK = BELLBOARD_INTENSET0_TRIGGERED20_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_21_MASK = BELLBOARD_INTENSET0_TRIGGERED21_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_22_MASK = BELLBOARD_INTENSET0_TRIGGERED22_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_23_MASK = BELLBOARD_INTENSET0_TRIGGERED23_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_24_MASK = BELLBOARD_INTENSET0_TRIGGERED24_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_25_MASK = BELLBOARD_INTENSET0_TRIGGERED25_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_26_MASK = BELLBOARD_INTENSET0_TRIGGERED26_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_27_MASK = BELLBOARD_INTENSET0_TRIGGERED27_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_28_MASK = BELLBOARD_INTENSET0_TRIGGERED28_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_29_MASK = BELLBOARD_INTENSET0_TRIGGERED29_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_30_MASK = BELLBOARD_INTENSET0_TRIGGERED30_Msk,
    NRF_BELLBOARD_INT_TRIGGERED_31_MASK = BELLBOARD_INTENSET0_TRIGGERED31_Msk,
#endif // BELLBOARD_TASKS_TRIGGER_MaxCount > 4
} nrf_bellboard_int_mask_t;

/** @brief BELLBOARD tasks. */
typedef enum
{
    NRF_BELLBOARD_TASK_TRIGGER_0  = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[0]),
    NRF_BELLBOARD_TASK_TRIGGER_1  = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[1]),
    NRF_BELLBOARD_TASK_TRIGGER_2  = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[2]),
    NRF_BELLBOARD_TASK_TRIGGER_3  = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[3]),
    NRF_BELLBOARD_TASK_TRIGGER_4  = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[4]),
#if NRF_BELLBOARD_EVENTS_TRIGGERED_COUNT > 4
    NRF_BELLBOARD_TASK_TRIGGER_5  = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[5]),
    NRF_BELLBOARD_TASK_TRIGGER_6  = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[6]),
    NRF_BELLBOARD_TASK_TRIGGER_7  = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[7]),
    NRF_BELLBOARD_TASK_TRIGGER_8  = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[8]),
    NRF_BELLBOARD_TASK_TRIGGER_9  = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[9]),
    NRF_BELLBOARD_TASK_TRIGGER_10 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[10]),
    NRF_BELLBOARD_TASK_TRIGGER_11 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[11]),
    NRF_BELLBOARD_TASK_TRIGGER_12 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[12]),
    NRF_BELLBOARD_TASK_TRIGGER_13 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[13]),
    NRF_BELLBOARD_TASK_TRIGGER_14 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[14]),
    NRF_BELLBOARD_TASK_TRIGGER_15 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[15]),
    NRF_BELLBOARD_TASK_TRIGGER_16 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[16]),
    NRF_BELLBOARD_TASK_TRIGGER_17 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[17]),
    NRF_BELLBOARD_TASK_TRIGGER_18 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[18]),
    NRF_BELLBOARD_TASK_TRIGGER_19 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[19]),
    NRF_BELLBOARD_TASK_TRIGGER_20 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[20]),
    NRF_BELLBOARD_TASK_TRIGGER_21 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[21]),
    NRF_BELLBOARD_TASK_TRIGGER_22 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[22]),
    NRF_BELLBOARD_TASK_TRIGGER_23 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[23]),
    NRF_BELLBOARD_TASK_TRIGGER_24 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[24]),
    NRF_BELLBOARD_TASK_TRIGGER_25 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[25]),
    NRF_BELLBOARD_TASK_TRIGGER_26 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[26]),
    NRF_BELLBOARD_TASK_TRIGGER_27 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[27]),
    NRF_BELLBOARD_TASK_TRIGGER_28 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[28]),
    NRF_BELLBOARD_TASK_TRIGGER_29 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[29]),
    NRF_BELLBOARD_TASK_TRIGGER_30 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[30]),
    NRF_BELLBOARD_TASK_TRIGGER_31 = offsetof(NRF_BELLBOARD_Type, TASKS_TRIGGER[31]),
#endif // BELLBOARD_TASKS_TRIGGER_MaxCount > 4
} nrf_bellboard_task_t;

/**
 * @brief Function for triggering the specified BELLBOARD task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be triggered.
 */
NRF_STATIC_INLINE void nrf_bellboard_task_trigger(NRF_BELLBOARD_Type * p_reg,
                                                  nrf_bellboard_task_t task);

/**
 * @brief Function for getting the address of the specified BELLBOARD task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Specified task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_bellboard_task_address_get(NRF_BELLBOARD_Type const * p_reg,
                                                          nrf_bellboard_task_t       task);

/**
 * @brief Function for getting the specified BELLBOARD TRIGGERED event.
 *
 * @param[in] index Event index.
 *
 * @return The specified BELLBOARD TRIGGERED event.
 */
NRF_STATIC_INLINE nrf_bellboard_event_t nrf_bellboard_triggered_event_get(uint8_t index);

/**
 * @brief Function for getting the specified BELLBOARD TRIGGER task.
 *
 * @param[in] index Task index.
 *
 * @return The specified BELLBOARD TRIGGER task.
 */
NRF_STATIC_INLINE nrf_bellboard_task_t nrf_bellboard_trigger_task_get(uint8_t index);

/**
 * @brief Function for clearing the specified BELLBOARD event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_bellboard_event_clear(NRF_BELLBOARD_Type *  p_reg,
                                                 nrf_bellboard_event_t event);

/**
 * @brief Function for retrieving the state of the BELLBOARD event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_bellboard_event_check(NRF_BELLBOARD_Type const * p_reg,
                                                 nrf_bellboard_event_t      event);

/**
 * @brief Function for getting the address of the specified BELLBOARD event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_bellboard_event_address_get(NRF_BELLBOARD_Type const * p_reg,
                                                           nrf_bellboard_event_t      event);

/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be enabled.
 * @param[in] mask      Mask of interrupts to be enabled.
 *                      Use @ref nrf_bellboard_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_bellboard_int_enable(NRF_BELLBOARD_Type * p_reg,
                                                uint8_t              group_idx,
                                                uint32_t             mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be disabled.
 * @param[in] mask      Mask of interrupts to be disabled.
 *                      Use @ref nrf_bellboard_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_bellboard_int_disable(NRF_BELLBOARD_Type * p_reg,
                                                 uint8_t              group_idx,
                                                 uint32_t             mask);


/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be checked.
 * @param[in] mask      Mask of interrupts to be checked.
 *                      Use @ref nrf_bellboard_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_bellboard_int_enable_check(NRF_BELLBOARD_Type const * p_reg,
                                                          uint8_t                    group_idx,
                                                          uint32_t                   mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * States of pending interrupt are saved as a bitmask.
 * One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be retrieved.
 *
 * @return Bitmask with information about pending interrupts.
 *         Use @ref nrf_bellboard_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_bellboard_int_pending_get(NRF_BELLBOARD_Type const * p_reg,
                                                         uint8_t                    group_idx);

#ifndef NRF_DECLARE_ONLY
NRF_STATIC_INLINE void nrf_bellboard_task_trigger(NRF_BELLBOARD_Type * p_reg,
                                                  nrf_bellboard_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_bellboard_task_address_get(NRF_BELLBOARD_Type const * p_reg,
                                                          nrf_bellboard_task_t       task)
{
    return nrf_task_event_address_get(p_reg, task);
}

NRF_STATIC_INLINE nrf_bellboard_event_t nrf_bellboard_triggered_event_get(uint8_t index)
{
    return (nrf_bellboard_event_t)NRFX_OFFSETOF(NRF_BELLBOARD_Type, EVENTS_TRIGGERED[index]);
}

NRF_STATIC_INLINE nrf_bellboard_task_t nrf_bellboard_trigger_task_get(uint8_t index)
{
    return (nrf_bellboard_task_t)NRFX_OFFSETOF(NRF_BELLBOARD_Type, TASKS_TRIGGER[index]);
}

NRF_STATIC_INLINE void nrf_bellboard_event_clear(NRF_BELLBOARD_Type *  p_reg,
                                                 nrf_bellboard_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
}

NRF_STATIC_INLINE bool nrf_bellboard_event_check(NRF_BELLBOARD_Type const * p_reg,
                                                 nrf_bellboard_event_t      event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE uint32_t nrf_bellboard_event_address_get(NRF_BELLBOARD_Type const * p_reg,
                                                           nrf_bellboard_event_t      event)
{
    return nrf_task_event_address_get(p_reg, event);
}

NRF_STATIC_INLINE void nrf_bellboard_int_enable(NRF_BELLBOARD_Type * p_reg,
                                                uint8_t              group_idx,
                                                uint32_t             mask)
{
    switch (group_idx)
    {
        case 0:
            p_reg->INTENSET0 = mask;
            break;
        case 1:
            p_reg->INTENSET1 = mask;
            break;
        case 2:
            p_reg->INTENSET2 = mask;
            break;
        case 3:
            p_reg->INTENSET3 = mask;
            break;
       default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE void nrf_bellboard_int_disable(NRF_BELLBOARD_Type * p_reg,
                                                 uint8_t              group_idx,
                                                 uint32_t             mask)
{
    switch (group_idx)
    {
        case 0:
            p_reg->INTENCLR0 = mask;
            break;
        case 1:
            p_reg->INTENCLR1 = mask;
            break;
        case 2:
            p_reg->INTENCLR2 = mask;
            break;
        case 3:
            p_reg->INTENCLR3 = mask;
            break;
       default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE uint32_t nrf_bellboard_int_enable_check(NRF_BELLBOARD_Type const * p_reg,
                                                          uint8_t                    group_idx,
                                                          uint32_t                   mask)
{
    switch (group_idx)
    {
        case 0:
            return p_reg->INTENSET0 & mask;
        case 1:
            return p_reg->INTENSET1 & mask;
        case 2:
            return p_reg->INTENSET2 & mask;
        case 3:
            return p_reg->INTENSET3 & mask;
       default:
            NRFX_ASSERT(false);
            return 0;
    }
}

NRF_STATIC_INLINE uint32_t nrf_bellboard_int_pending_get(NRF_BELLBOARD_Type const * p_reg,
                                                         uint8_t                    group_idx)
{
    switch (group_idx)
    {
        case 0:
            return p_reg->INTPEND0;
        case 1:
            return p_reg->INTPEND1;
        case 2:
            return p_reg->INTPEND2;
        case 3:
            return p_reg->INTPEND3;
       default:
            NRFX_ASSERT(false);
            return 0;
    }
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_BELLBOARD_H__
