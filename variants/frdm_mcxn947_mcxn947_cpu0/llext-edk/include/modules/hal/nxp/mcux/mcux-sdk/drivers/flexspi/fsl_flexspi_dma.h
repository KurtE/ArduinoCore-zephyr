/*
 * Copyright 2019-2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FSL_FLEXSPI_DMA_H_
#define FSL_FLEXSPI_DMA_H_

#include "fsl_flexspi.h"
#include "fsl_dma.h"

/*!
 * @addtogroup flexspi_dma
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @name Driver version */
/*! @{ */
/*! @brief FLEXSPI DMA driver version 2.2.1. */
#define FSL_FLEXSPI_DMA_DRIVER_VERSION (MAKE_VERSION(2, 2, 1))
/*! @} */

typedef struct _flexspi_dma_handle flexspi_dma_handle_t;

/*! @brief FLEXSPI dma transfer callback function for finish and error */
typedef void (*flexspi_dma_callback_t)(FLEXSPI_Type *base,
                                       flexspi_dma_handle_t *handle,
                                       status_t status,
                                       void *userData);

/*! @brief dma transfer configuration */
typedef enum _flexspi_dma_ntransfer_size
{
    kFLEXPSI_DMAnSize1Bytes = 0x1U,
    kFLEXPSI_DMAnSize2Bytes = 0x2U,
    kFLEXPSI_DMAnSize4Bytes = 0x4U,
} flexspi_dma_transfer_nsize_t;

/*! @brief FLEXSPI DMA transfer handle, users should not touch the content of the handle.*/
struct _flexspi_dma_handle
{
    dma_handle_t *txDmaHandle;
    dma_handle_t *rxDmaHandle;
    size_t transferSize;
    flexspi_dma_transfer_nsize_t nsize;
    uint8_t nbytes;
    uint8_t count;
    uint32_t state;
    flexspi_dma_callback_t completionCallback;
    void *userData;
};

/*******************************************************************************
 * APIs
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @name FLEXSPI dma Transactional
 * @{
 */

/*!
 * @brief Initializes the FLEXSPI handle for transfer which is used in transactional functions and set the callback.
 *
 * @param base FLEXSPI peripheral base address
 * @param handle Pointer to flexspi_dma_handle_t structure
 * @param callback FLEXSPI callback, NULL means no callback.
 * @param userData User callback function data.
 * @param txDmaHandle User requested DMA handle for TX DMA transfer.
 * @param rxDmaHandle User requested DMA handle for RX DMA transfer.
 */
void FLEXSPI_TransferCreateHandleDMA(FLEXSPI_Type *base,
                                     flexspi_dma_handle_t *handle,
                                     flexspi_dma_callback_t callback,
                                     void *userData,
                                     dma_handle_t *txDmaHandle,
                                     dma_handle_t *rxDmaHandle);

/*!
 * @brief Update FLEXSPI DMA transfer source data transfer size(SSIZE) and destination data transfer size(DSIZE).
 *
 * @param base FLEXSPI peripheral base address
 * @param handle Pointer to flexspi_dma_handle_t structure
 * @param nsize FLEXSPI DMA transfer data transfer size(SSIZE/DSIZE), by default the size is
 * kFLEXPSI_DMAnSize1Bytes(one byte).
 * @see flexspi_dma_transfer_nsize_t               .
 */
void FLEXSPI_TransferUpdateSizeDMA(FLEXSPI_Type *base,
                                   flexspi_dma_handle_t *handle,
                                   flexspi_dma_transfer_nsize_t nsize);

/*!
 * @brief Transfers FLEXSPI data using an dma non-blocking method.
 *
 * This function writes/receives data to/from the FLEXSPI transmit/receive FIFO. This function is non-blocking.
 * @param base FLEXSPI peripheral base address.
 * @param handle Pointer to flexspi_dma_handle_t structure
 * @param xfer FLEXSPI transfer structure.
 * @retval kStatus_FLEXSPI_Busy     FLEXSPI is busy transfer.
 * @retval kStatus_InvalidArgument  The watermark configuration is invalid, the watermark should be power of
                                    2 to do successfully DMA transfer.
 * @retval kStatus_Success          FLEXSPI successfully start dma transfer.
 */
status_t FLEXSPI_TransferDMA(FLEXSPI_Type *base, flexspi_dma_handle_t *handle, flexspi_transfer_t *xfer);

/*!
 * @brief Aborts the transfer data using dma.
 *
 * This function aborts the transfer data using dma.
 *
 * @param base FLEXSPI peripheral base address.
 * @param handle Pointer to flexspi_dma_handle_t structure
 */
void FLEXSPI_TransferAbortDMA(FLEXSPI_Type *base, flexspi_dma_handle_t *handle);

/*!
 * @brief Gets the transferred counts of transfer.
 *
 * @param base FLEXSPI peripheral base address.
 * @param handle Pointer to flexspi_dma_handle_t structure.
 * @param count Bytes transfer.
 * @retval kStatus_Success Succeed get the transfer count.
 * @retval kStatus_NoTransferInProgress There is not a non-blocking transaction currently in progress.
 */
status_t FLEXSPI_TransferGetTransferCountDMA(FLEXSPI_Type *base, flexspi_dma_handle_t *handle, size_t *count);

/*! @} */

#if defined(__cplusplus)
}
#endif

/*! @} */

#endif /* FSL_FLEXSPI_DMA_H_ */
