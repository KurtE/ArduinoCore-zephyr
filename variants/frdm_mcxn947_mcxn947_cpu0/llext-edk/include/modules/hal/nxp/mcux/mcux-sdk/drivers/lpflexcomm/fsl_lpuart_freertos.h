/*
 * Copyright 2022 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FSL_LPUART_FREERTOS_H__
#define FSL_LPUART_FREERTOS_H__

#include "fsl_lpuart.h"
#include "FreeRTOS.h"
#include "event_groups.h"
#include "semphr.h"

/*!
 * @addtogroup lpuart_freertos_driver
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @name Driver version */
/*@{*/
/*! @brief LPUART FreeRTOS driver version 2.0.0. */
#define FSL_LPUART_FREERTOS_DRIVER_VERSION (MAKE_VERSION(2, 0, 0))
/*@}*/

/*! @brief LPUART RTOS configuration structure. */
typedef struct _lpuart_rtos_config
{
    LPUART_Type *base;
    uint32_t srcclk;
    uint32_t baudrate;
    lpuart_parity_mode_t parity;
    lpuart_stop_bit_count_t stopbits;
    uint8_t *buffer;
    uint32_t buffer_size;
    /* Zero in constant and multiplier is interpreted as infinit timeout. */
    uint32_t rx_timeout_constant_ms;
    uint32_t rx_timeout_multiplier_ms;
    uint32_t tx_timeout_constant_ms;
    uint32_t tx_timeout_multiplier_ms;
#if defined(FSL_FEATURE_LPUART_HAS_MODEM_SUPPORT) && FSL_FEATURE_LPUART_HAS_MODEM_SUPPORT
    bool enableRxRTS;
    bool enableTxCTS;
    lpuart_transmit_cts_source_t txCtsSource;
    lpuart_transmit_cts_config_t txCtsConfig;
#endif
} lpuart_rtos_config_t;

/*!
 * @cond RTOS_PRIVATE
 * @name LPUART event flags
 *
 * This are only valid states for txEvent and rxEvent (lpuart_rtos_handle_t).
 */
/*@{*/
/*! @brief Event flag - uart transmit complete. */
#define RTOS_LPUART_TX_COMPLETE 0x1U
/*! @brief Event flag - uart receive complete. */
#define RTOS_LPUART_RX_COMPLETE 0x2U
/*! @brief Event flag - ring buffer overrun. */
#define RTOS_LPUART_RING_BUFFER_OVERRUN 0x4U
/*! @brief Event flag - hardware buffer overrun. */
#define RTOS_LPUART_HARDWARE_BUFFER_OVERRUN 0x8U
/*@}*/

/*! @brief LPUART FreeRTOS transfer structure. */
typedef struct _lpuart_rtos_handle
{
    LPUART_Type *base;
    lpuart_transfer_t txTransfer;
    lpuart_transfer_t rxTransfer;
    SemaphoreHandle_t rxSemaphore;
    SemaphoreHandle_t txSemaphore;
    EventGroupHandle_t rxEvent;
    EventGroupHandle_t txEvent;
    uint32_t rx_timeout_constant_ms;
    uint32_t rx_timeout_multiplier_ms;
    uint32_t tx_timeout_constant_ms;
    uint32_t tx_timeout_multiplier_ms;
    void *t_state;
#if (configSUPPORT_STATIC_ALLOCATION == 1)
    StaticSemaphore_t txSemaphoreBuffer;
    StaticSemaphore_t rxSemaphoreBuffer;
    StaticEventGroup_t txEventBuffer;
    StaticEventGroup_t rxEventBuffer;
#endif
} lpuart_rtos_handle_t;
/*! \endcond */

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @name LPUART RTOS Operation
 * @{
 */

/*!
 * @brief Initializes an LPUART instance for operation in RTOS.
 *
 * @param handle The RTOS LPUART handle, the pointer to an allocated space for RTOS context.
 * @param t_handle The pointer to an allocated space to store the transactional layer internal state.
 * @param cfg The pointer to the parameters required to configure the LPUART after initialization.
 * @return 0 succeed, others failed
 */
int LPUART_RTOS_Init(lpuart_rtos_handle_t *handle, lpuart_handle_t *t_handle, const lpuart_rtos_config_t *cfg);

/*!
 * @brief Deinitializes an LPUART instance for operation.
 *
 * This function deinitializes the LPUART module, sets all register value to the reset value,
 * and releases the resources.
 *
 * @param handle The RTOS LPUART handle.
 */
int LPUART_RTOS_Deinit(lpuart_rtos_handle_t *handle);

/*!
 * @name LPUART transactional Operation
 * @{
 */

/*!
 * @brief Sends data in the background.
 *
 * This function sends data. It is an synchronous API.
 * If the hardware buffer is full, the task is in the blocked state.
 *
 * @param handle The RTOS LPUART handle.
 * @param buffer The pointer to buffer to send.
 * @param length The number of bytes to send.
 */
int LPUART_RTOS_Send(lpuart_rtos_handle_t *handle, uint8_t *buffer, uint32_t length);

/*!
 * @brief Receives data.
 *
 * This function receives data from LPUART. It is an synchronous API. If any data is immediately available
 * it is returned immediately and the number of bytes received.
 *
 * @param handle The RTOS LPUART handle.
 * @param buffer The pointer to buffer where to write received data.
 * @param length The number of bytes to receive.
 * @param received The pointer to a variable of size_t where the number of received data is filled.
 */
int LPUART_RTOS_Receive(lpuart_rtos_handle_t *handle, uint8_t *buffer, uint32_t length, size_t *received);

/*!
 * @brief Set RX timeout in runtime
 *
 * This function can modify RX timeout between initialization and receive.
 *
 * param handle The RTOS LPUART handle.
 * param rx_timeout_constant_ms RX timeout applied per receive.
 * param rx_timeout_multiplier_ms RX timeout added for each byte of the receive.
 */
int LPUART_RTOS_SetRxTimeout(lpuart_rtos_handle_t *handle,
                             uint32_t rx_timeout_constant_ms,
                             uint32_t rx_timeout_multiplier_ms);

/*!
 * @brief Set TX timeout in runtime
 *
 * This function can modify TX timeout between initialization and send.
 *
 * param handle The RTOS LPUART handle.
 * param tx_timeout_constant_ms TX timeout applied per transmition.
 * param tx_timeout_multiplier_ms TX timeout added for each byte of the transmition.
 */
int LPUART_RTOS_SetTxTimeout(lpuart_rtos_handle_t *handle,
                             uint32_t tx_timeout_constant_ms,
                             uint32_t tx_timeout_multiplier_ms);

/* @} */

#if defined(__cplusplus)
}
#endif

/*! @}*/

#endif /* FSL_LPUART_FREERTOS_H__ */
