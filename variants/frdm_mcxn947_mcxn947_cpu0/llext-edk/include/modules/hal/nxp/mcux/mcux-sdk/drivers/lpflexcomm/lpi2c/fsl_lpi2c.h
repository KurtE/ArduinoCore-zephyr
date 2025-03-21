/*
 * Copyright 2022 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef FSL_LPI2C_H_
#define FSL_LPI2C_H_

#include <stddef.h>
#include "fsl_device_registers.h"
#include "fsl_common.h"
#include "fsl_lpflexcomm.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*!
 * @addtogroup lpi2c
 * @{
 */

/*! @name Driver version */
/*! @{ */
/*! @brief LPI2C driver version. */
#define FSL_LPI2C_DRIVER_VERSION (MAKE_VERSION(2, 2, 4))
/*! @} */

/*! @brief Retry times for waiting flag. */
#ifndef I2C_RETRY_TIMES
#define I2C_RETRY_TIMES 0U
#endif

/*! @brief LPI2C status return codes. */
enum
{
    kStatus_LPI2C_Busy = MAKE_STATUS(kStatusGroup_LPI2C, 0),
    kStatus_LPI2C_Idle = MAKE_STATUS(kStatusGroup_LPI2C, 1),
    kStatus_LPI2C_Nak  = MAKE_STATUS(kStatusGroup_LPI2C, 2),
    kStatus_LPI2C_FifoError       = MAKE_STATUS(kStatusGroup_LPI2C, 3),
    kStatus_LPI2C_BitError        = MAKE_STATUS(kStatusGroup_LPI2C, 4),
    kStatus_LPI2C_ArbitrationLost = MAKE_STATUS(kStatusGroup_LPI2C, 5),
    kStatus_LPI2C_PinLowTimeout =
        MAKE_STATUS(kStatusGroup_LPI2C, 6),
    kStatus_LPI2C_NoTransferInProgress =
        MAKE_STATUS(kStatusGroup_LPI2C, 7),
    kStatus_LPI2C_DmaRequestFail = MAKE_STATUS(kStatusGroup_LPI2C, 8),
    kStatus_LPI2C_Timeout        = MAKE_STATUS(kStatusGroup_LPI2C, 9),
};

/*! @} */

/*!
 * @addtogroup lpi2c_master_driver
 * @{
 */

/*!
 * @brief LPI2C master peripheral flags.
 *
 * The following status register flags can be cleared:
 * - #kLPI2C_MasterEndOfPacketFlag
 * - #kLPI2C_MasterStopDetectFlag
 * - #kLPI2C_MasterNackDetectFlag
 * - #kLPI2C_MasterArbitrationLostFlag
 * - #kLPI2C_MasterFifoErrFlag
 * - #kLPI2C_MasterPinLowTimeoutFlag
 * - #kLPI2C_MasterDataMatchFlag
 *
 * All flags except #kLPI2C_MasterBusyFlag and #kLPI2C_MasterBusBusyFlag can be enabled as
 * interrupts.
 *
 * @note These enums are meant to be OR'd together to form a bit mask.
 */
enum _lpi2c_master_flags
{
    kLPI2C_MasterTxReadyFlag         = LPI2C_MSR_TDF_MASK,
    kLPI2C_MasterRxReadyFlag         = LPI2C_MSR_RDF_MASK,
    kLPI2C_MasterEndOfPacketFlag     = LPI2C_MSR_EPF_MASK,
    kLPI2C_MasterStopDetectFlag      = LPI2C_MSR_SDF_MASK,
    kLPI2C_MasterNackDetectFlag      = LPI2C_MSR_NDF_MASK,
    kLPI2C_MasterArbitrationLostFlag = LPI2C_MSR_ALF_MASK,
    kLPI2C_MasterFifoErrFlag         = LPI2C_MSR_FEF_MASK,
    kLPI2C_MasterPinLowTimeoutFlag   = LPI2C_MSR_PLTF_MASK,
    kLPI2C_MasterDataMatchFlag       = LPI2C_MSR_DMF_MASK,
    kLPI2C_MasterBusyFlag            = LPI2C_MSR_MBF_MASK,
    kLPI2C_MasterBusBusyFlag         = LPI2C_MSR_BBF_MASK,

    /*! All flags which are cleared by the driver upon starting a transfer. */
    kLPI2C_MasterClearFlags = kLPI2C_MasterEndOfPacketFlag | kLPI2C_MasterStopDetectFlag | kLPI2C_MasterNackDetectFlag |
                              kLPI2C_MasterArbitrationLostFlag | kLPI2C_MasterFifoErrFlag |
                              kLPI2C_MasterPinLowTimeoutFlag | kLPI2C_MasterDataMatchFlag,
    /*! IRQ sources enabled by the non-blocking transactional API. */
    kLPI2C_MasterIrqFlags = kLPI2C_MasterArbitrationLostFlag | kLPI2C_MasterTxReadyFlag | kLPI2C_MasterRxReadyFlag |
                            kLPI2C_MasterStopDetectFlag | kLPI2C_MasterNackDetectFlag | kLPI2C_MasterPinLowTimeoutFlag |
                            kLPI2C_MasterFifoErrFlag,
    /*! Errors to check for. */
    kLPI2C_MasterErrorFlags = kLPI2C_MasterNackDetectFlag | kLPI2C_MasterArbitrationLostFlag |
                              kLPI2C_MasterFifoErrFlag | kLPI2C_MasterPinLowTimeoutFlag
};

/*! @brief Direction of master and slave transfers. */
typedef enum _lpi2c_direction
{
    kLPI2C_Write = 0U,
    kLPI2C_Read  = 1U
} lpi2c_direction_t;

/*! @brief LPI2C pin configuration. */
typedef enum _lpi2c_master_pin_config
{
    kLPI2C_2PinOpenDrain  = 0x0U,
    kLPI2C_2PinOutputOnly = 0x1U,
    kLPI2C_2PinPushPull   = 0x2U,
    kLPI2C_4PinPushPull   = 0x3U,
    kLPI2C_2PinOpenDrainWithSeparateSlave =
        0x4U,
    kLPI2C_2PinOutputOnlyWithSeparateSlave =
        0x5U,
    kLPI2C_2PinPushPullWithSeparateSlave =
        0x6U,
    kLPI2C_4PinPushPullWithInvertedOutput = 0x7U
} lpi2c_master_pin_config_t;

/*! @brief LPI2C master host request selection. */
typedef enum _lpi2c_host_request_source
{
    kLPI2C_HostRequestExternalPin  = 0x0U,
    kLPI2C_HostRequestInputTrigger = 0x1U,
} lpi2c_host_request_source_t;

/*! @brief LPI2C master host request pin polarity configuration. */
typedef enum _lpi2c_host_request_polarity
{
    kLPI2C_HostRequestPinActiveLow  = 0x0U,
    kLPI2C_HostRequestPinActiveHigh = 0x1U
} lpi2c_host_request_polarity_t;

/*!
 * @brief Structure with settings to initialize the LPI2C master module.
 *
 * This structure holds configuration settings for the LPI2C peripheral. To initialize this
 * structure to reasonable defaults, call the LPI2C_MasterGetDefaultConfig() function and
 * pass a pointer to your configuration structure instance.
 *
 * The configuration structure can be made constant so it resides in flash.
 */
typedef struct _lpi2c_master_config
{
    bool enableMaster;
    bool enableDoze;
    bool debugEnable;
    bool ignoreAck;
    lpi2c_master_pin_config_t pinConfig;
    uint32_t baudRate_Hz;
    uint32_t busIdleTimeout_ns;
    uint32_t pinLowTimeout_ns;
    uint8_t sdaGlitchFilterWidth_ns;
    uint8_t sclGlitchFilterWidth_ns;
    struct
    {
        bool enable;
        lpi2c_host_request_source_t source;
        lpi2c_host_request_polarity_t polarity;
    } hostRequest;
} lpi2c_master_config_t;

/*! @brief LPI2C master data match configuration modes. */
typedef enum _lpi2c_data_match_config_mode
{
    kLPI2C_MatchDisabled       = 0x0U,
    kLPI2C_1stWordEqualsM0OrM1 = 0x2U,
    kLPI2C_AnyWordEqualsM0OrM1 = 0x3U,
    kLPI2C_1stWordEqualsM0And2ndWordEqualsM1 =
        0x4U,
    kLPI2C_AnyWordEqualsM0AndNextWordEqualsM1 =
        0x5U,
    kLPI2C_1stWordAndM1EqualsM0AndM1 =
        0x6U,
    kLPI2C_AnyWordAndM1EqualsM0AndM1 =
        0x7U
} lpi2c_data_match_config_mode_t;

/*! @brief LPI2C master data match configuration structure. */
typedef struct _lpi2c_match_config
{
    lpi2c_data_match_config_mode_t matchMode;
    bool rxDataMatchOnly;
    uint32_t match0;
    uint32_t match1;
} lpi2c_data_match_config_t;

/* Forward declaration of the transfer descriptor and handle typedefs. */
typedef struct _lpi2c_master_transfer lpi2c_master_transfer_t;
typedef struct _lpi2c_master_handle lpi2c_master_handle_t;

/*!
 * @brief Master completion callback function pointer type.
 *
 * This callback is used only for the non-blocking master transfer API. Specify the callback you wish to use
 * in the call to LPI2C_MasterTransferCreateHandle().
 *
 * @param base The LPI2C peripheral base address.
 * @param completionStatus Either kStatus_Success or an error code describing how the transfer completed.
 * @param userData Arbitrary pointer-sized value passed from the application.
 */
typedef void (*lpi2c_master_transfer_callback_t)(LPI2C_Type *base,
                                                 lpi2c_master_handle_t *handle,
                                                 status_t completionStatus,
                                                 void *userData);

/*!
 * @brief Transfer option flags.
 *
 * @note These enumerations are intended to be OR'd together to form a bit mask of options for
 * the #_lpi2c_master_transfer::flags field.
 */
enum _lpi2c_master_transfer_flags
{
    kLPI2C_TransferDefaultFlag       = 0x00U,
    kLPI2C_TransferNoStartFlag       = 0x01U,
    kLPI2C_TransferRepeatedStartFlag = 0x02U,
    kLPI2C_TransferNoStopFlag        = 0x04U,
};

/*!
 * @brief Non-blocking transfer descriptor structure.
 *
 * This structure is used to pass transaction parameters to the LPI2C_MasterTransferNonBlocking() API.
 */
struct _lpi2c_master_transfer
{
    uint32_t flags;        /*!< Bit mask of options for the transfer. See enumeration #_lpi2c_master_transfer_flags for
                              available options. Set to 0 or #kLPI2C_TransferDefaultFlag for normal transfers. */
    uint16_t slaveAddress;
    lpi2c_direction_t direction;
    uint32_t subaddress;
    size_t subaddressSize;
    void *data;
    size_t dataSize;
};

/*!
 * @brief Driver handle for master non-blocking APIs.
 * @note The contents of this structure are private and subject to change.
 */
struct _lpi2c_master_handle
{
    uint8_t state;
    uint16_t remainingBytes;
    uint8_t *buf;
    uint16_t commandBuffer[6];                           /*!< LPI2C command sequence. When all 6 command words are used:
         Start&addr&write[1 word] + subaddr[4 words] + restart&addr&read[1 word] */
    lpi2c_master_transfer_t transfer;
    lpi2c_master_transfer_callback_t completionCallback;
    void *userData;
};

/*! @brief Typedef for master interrupt handler, used internally for LPI2C master interrupt and EDMA transactional APIs.
 */
typedef void (*lpi2c_master_isr_t)(uint32_t instance, void *handle);

/*! @} */

/*!
 * @addtogroup lpi2c_slave_driver
 * @{
 */

/*!
 * @brief LPI2C slave peripheral flags.
 *
 * The following status register flags can be cleared:
 * - #kLPI2C_SlaveRepeatedStartDetectFlag
 * - #kLPI2C_SlaveStopDetectFlag
 * - #kLPI2C_SlaveBitErrFlag
 * - #kLPI2C_SlaveFifoErrFlag
 *
 * All flags except #kLPI2C_SlaveBusyFlag and #kLPI2C_SlaveBusBusyFlag can be enabled as
 * interrupts.
 *
 * @note These enumerations are meant to be OR'd together to form a bit mask.
 */
enum _lpi2c_slave_flags
{
    kLPI2C_SlaveTxReadyFlag             = LPI2C_SSR_TDF_MASK,
    kLPI2C_SlaveRxReadyFlag             = LPI2C_SSR_RDF_MASK,
    kLPI2C_SlaveAddressValidFlag        = LPI2C_SSR_AVF_MASK,
    kLPI2C_SlaveTransmitAckFlag         = LPI2C_SSR_TAF_MASK,
    kLPI2C_SlaveRepeatedStartDetectFlag = LPI2C_SSR_RSF_MASK,
    kLPI2C_SlaveStopDetectFlag          = LPI2C_SSR_SDF_MASK,
    kLPI2C_SlaveBitErrFlag              = LPI2C_SSR_BEF_MASK,
    kLPI2C_SlaveFifoErrFlag             = LPI2C_SSR_FEF_MASK,
    kLPI2C_SlaveAddressMatch0Flag       = LPI2C_SSR_AM0F_MASK,
    kLPI2C_SlaveAddressMatch1Flag       = LPI2C_SSR_AM1F_MASK,
    kLPI2C_SlaveGeneralCallFlag         = LPI2C_SSR_GCF_MASK,
    kLPI2C_SlaveBusyFlag                = LPI2C_SSR_SBF_MASK,
    kLPI2C_SlaveBusBusyFlag             = LPI2C_SSR_BBF_MASK,
    /*! All flags which are cleared by the driver upon starting a transfer. */
    kLPI2C_SlaveClearFlags = kLPI2C_SlaveRepeatedStartDetectFlag | kLPI2C_SlaveStopDetectFlag | kLPI2C_SlaveBitErrFlag |
                             kLPI2C_SlaveFifoErrFlag,
    /*! IRQ sources enabled by the non-blocking transactional API. */
    kLPI2C_SlaveIrqFlags = kLPI2C_SlaveTxReadyFlag | kLPI2C_SlaveRxReadyFlag | kLPI2C_SlaveStopDetectFlag |
                           kLPI2C_SlaveRepeatedStartDetectFlag | kLPI2C_SlaveFifoErrFlag | kLPI2C_SlaveBitErrFlag |
                           kLPI2C_SlaveTransmitAckFlag | kLPI2C_SlaveAddressValidFlag,
    /*! Errors to check for. */
    kLPI2C_SlaveErrorFlags = kLPI2C_SlaveFifoErrFlag | kLPI2C_SlaveBitErrFlag
};

/*! @brief LPI2C slave address match options. */
typedef enum _lpi2c_slave_address_match
{
    kLPI2C_MatchAddress0                = 0U,
    kLPI2C_MatchAddress0OrAddress1      = 2U,
    kLPI2C_MatchAddress0ThroughAddress1 = 6U,
} lpi2c_slave_address_match_t;

/*!
 * @brief Structure with settings to initialize the LPI2C slave module.
 *
 * This structure holds configuration settings for the LPI2C slave peripheral. To initialize this
 * structure to reasonable defaults, call the LPI2C_SlaveGetDefaultConfig() function and
 * pass a pointer to your configuration structure instance.
 *
 * The configuration structure can be made constant so it resides in flash.
 */
typedef struct _lpi2c_slave_config
{
    bool enableSlave;
    uint8_t address0;
    uint8_t address1;
    lpi2c_slave_address_match_t addressMatchMode;
    bool filterDozeEnable;
    bool filterEnable;
    bool enableGeneralCall;
    struct
    {
        bool enableAck;     /*!< Enables SCL clock stretching during slave-transmit address byte(s)
                                        and slave-receiver address and data byte(s) to allow software to
                                        write the Transmit ACK Register before the ACK or NACK is transmitted.
                                        Clock stretching occurs when transmitting the 9th bit. When
                                        enableAckSCLStall is enabled, there is no need to set either
                                        enableRxDataSCLStall or enableAddressSCLStall. */
        bool enableTx;      /*!< Enables SCL clock stretching when the transmit data flag is set
                                         during a slave-transmit transfer. */
        bool enableRx;      /*!< Enables SCL clock stretching when receive data flag is set during
                                         a slave-receive transfer. */
        bool enableAddress;
    } sclStall;
    bool ignoreAck;
    bool enableReceivedAddressRead;
    uint32_t sdaGlitchFilterWidth_ns; /*!< Width in nanoseconds of the digital filter on the SDA signal. Set to 0 to
                                         disable. */
    uint32_t sclGlitchFilterWidth_ns; /*!< Width in nanoseconds of the digital filter on the SCL signal. Set to 0 to
                                         disable. */
    uint32_t dataValidDelay_ns;
    uint32_t clockHoldTime_ns;
} lpi2c_slave_config_t;

/*!
 * @brief Set of events sent to the callback for non blocking slave transfers.
 *
 * These event enumerations are used for two related purposes. First, a bit mask created by OR'ing together
 * events is passed to LPI2C_SlaveTransferNonBlocking() in order to specify which events to enable.
 * Then, when the slave callback is invoked, it is passed the current event through its @a transfer
 * parameter.
 *
 * @note These enumerations are meant to be OR'd together to form a bit mask of events.
 */
typedef enum _lpi2c_slave_transfer_event
{
    kLPI2C_SlaveAddressMatchEvent = 0x01U,
    kLPI2C_SlaveTransmitEvent     = 0x02U,  /*!< Callback is requested to provide data to transmit
                                                 (slave-transmitter role). */
    kLPI2C_SlaveReceiveEvent = 0x04U,       /*!< Callback is requested to provide a buffer in which to place received
                                                  data (slave-receiver role). */
    kLPI2C_SlaveTransmitAckEvent   = 0x08U, /*!< Callback needs to either transmit an ACK or NACK.
              When this event is set, the driver will no longer decide to reply to ack/nack. */
    kLPI2C_SlaveRepeatedStartEvent = 0x10U,
    kLPI2C_SlaveCompletionEvent    = 0x20U,

    /*! Bit mask of all available events. */
    kLPI2C_SlaveAllEvents = kLPI2C_SlaveAddressMatchEvent | kLPI2C_SlaveTransmitEvent | kLPI2C_SlaveReceiveEvent |
                            kLPI2C_SlaveTransmitAckEvent | kLPI2C_SlaveRepeatedStartEvent | kLPI2C_SlaveCompletionEvent,
} lpi2c_slave_transfer_event_t;

/*! @brief LPI2C slave transfer structure */
typedef struct _lpi2c_slave_transfer
{
    lpi2c_slave_transfer_event_t event;
    uint8_t receivedAddress;
    uint8_t *data;
    size_t dataSize;
    status_t completionStatus; /*!< Success or error code describing how the transfer completed. Only applies for
                                  #kLPI2C_SlaveCompletionEvent. */
    size_t transferredCount;
} lpi2c_slave_transfer_t;

/* Forward declaration. */
typedef struct _lpi2c_slave_handle lpi2c_slave_handle_t;

/*!
 * @brief Slave event callback function pointer type.
 *
 * This callback is used only for the slave non-blocking transfer API. To install a callback,
 * use the LPI2C_SlaveSetCallback() function after you have created a handle.
 *
 * @param base Base address for the LPI2C instance on which the event occurred.
 * @param transfer Pointer to transfer descriptor containing values passed to and/or from the callback.
 * @param userData Arbitrary pointer-sized value passed from the application.
 */
typedef void (*lpi2c_slave_transfer_callback_t)(LPI2C_Type *base, lpi2c_slave_transfer_t *transfer, void *userData);

/*!
 * @brief LPI2C slave handle structure.
 * @note The contents of this structure are private and subject to change.
 */
struct _lpi2c_slave_handle
{
    lpi2c_slave_transfer_t transfer;
    bool isBusy;
    bool wasTransmit;
    uint32_t eventMask;
    uint32_t transferredCount;
    lpi2c_slave_transfer_callback_t callback;
    void *userData;
};

/*! @} */

/*******************************************************************************
 * Variables
 ******************************************************************************/
/*! Array to map LPI2C instance number to IRQ number, used internally for LPI2C master interrupt and EDMA transactional
APIs. */
extern IRQn_Type const kLpi2cIrqs[];

/*! Pointer to master IRQ handler for each instance, used internally for LPI2C master interrupt and EDMA transactional
APIs. */
extern lpi2c_master_isr_t s_lpi2cMasterIsr;

/*! Pointers to master handles for each instance, used internally for LPI2C master interrupt and EDMA transactional
APIs. */
extern void *s_lpi2cMasterHandle[];

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Returns an instance number given a base address.
 *
 * If an invalid base address is passed, debug builds will assert. Release builds will just return
 * instance number 0.
 *
 * @param base The LPI2C peripheral base address.
 * @return LPI2C instance number starting from 0.
 */
uint32_t LPI2C_GetInstance(LPI2C_Type *base);

/*!
 * @addtogroup lpi2c_master_driver
 * @{
 */

/*! @name Initialization and deinitialization */
/*! @{ */

/*!
 * @brief Provides a default configuration for the LPI2C master peripheral.
 *
 * This function provides the following default configuration for the LPI2C master peripheral:
 * @code
 *  masterConfig->enableMaster            = true;
 *  masterConfig->debugEnable             = false;
 *  masterConfig->ignoreAck               = false;
 *  masterConfig->pinConfig               = kLPI2C_2PinOpenDrain;
 *  masterConfig->baudRate_Hz             = 100000U;
 *  masterConfig->busIdleTimeout_ns       = 0;
 *  masterConfig->pinLowTimeout_ns        = 0;
 *  masterConfig->sdaGlitchFilterWidth_ns = 0;
 *  masterConfig->sclGlitchFilterWidth_ns = 0;
 *  masterConfig->hostRequest.enable      = false;
 *  masterConfig->hostRequest.source      = kLPI2C_HostRequestExternalPin;
 *  masterConfig->hostRequest.polarity    = kLPI2C_HostRequestPinActiveHigh;
 * @endcode
 *
 * After calling this function, you can override any settings in order to customize the configuration,
 * prior to initializing the master driver with LPI2C_MasterInit().
 *
 * @param[out] masterConfig User provided configuration structure for default values. Refer to #lpi2c_master_config_t.
 */
void LPI2C_MasterGetDefaultConfig(lpi2c_master_config_t *masterConfig);

/*!
 * @brief Initializes the LPI2C master peripheral.
 *
 * This function enables the peripheral clock and initializes the LPI2C master peripheral as described by the user
 * provided configuration. A software reset is performed prior to configuration.
 *
 * @param base The LPI2C peripheral base address.
 * @param masterConfig User provided peripheral configuration. Use LPI2C_MasterGetDefaultConfig() to get a set of
 * defaults
 *      that you can override.
 * @param sourceClock_Hz Frequency in Hertz of the LPI2C functional clock. Used to calculate the baud rate divisors,
 *      filter widths, and timeout periods.
 */
void LPI2C_MasterInit(LPI2C_Type *base, const lpi2c_master_config_t *masterConfig, uint32_t sourceClock_Hz);

/*!
 * @brief Deinitializes the LPI2C master peripheral.
 *
 * This function disables the LPI2C master peripheral and gates the clock. It also performs a software
 * reset to restore the peripheral to reset conditions.
 *
 * @param base The LPI2C peripheral base address.
 */
void LPI2C_MasterDeinit(LPI2C_Type *base);

/*!
 * @brief Configures LPI2C master data match feature.
 *
 * @param base The LPI2C peripheral base address.
 * @param matchConfig Settings for the data match feature.
 */
void LPI2C_MasterConfigureDataMatch(LPI2C_Type *base, const lpi2c_data_match_config_t *matchConfig);

/* Not static so it can be used from fsl_lpi2c_edma.c. */
status_t LPI2C_MasterCheckAndClearError(LPI2C_Type *base, uint32_t status);

/* Not static so it can be used from fsl_lpi2c_edma.c. */
status_t LPI2C_CheckForBusyBus(LPI2C_Type *base);

/*!
 * @brief Performs a software reset.
 *
 * Restores the LPI2C master peripheral to reset conditions.
 *
 * @param base The LPI2C peripheral base address.
 */
static inline void LPI2C_MasterReset(LPI2C_Type *base)
{
    base->MCR = LPI2C_MCR_RST_MASK;
    base->MCR = 0;
}

/*!
 * @brief Enables or disables the LPI2C module as master.
 *
 * @param base The LPI2C peripheral base address.
 * @param enable Pass true to enable or false to disable the specified LPI2C as master.
 */
static inline void LPI2C_MasterEnable(LPI2C_Type *base, bool enable)
{
    base->MCR = (base->MCR & ~LPI2C_MCR_MEN_MASK) | LPI2C_MCR_MEN(enable);
}

/*! @} */

/*! @name Status */
/*! @{ */

/*!
 * @brief Gets the LPI2C master status flags.
 *
 * A bit mask with the state of all LPI2C master status flags is returned. For each flag, the corresponding bit
 * in the return value is set if the flag is asserted.
 *
 * @param base The LPI2C peripheral base address.
 * @return State of the status flags:
 *         - 1: related status flag is set.
 *         - 0: related status flag is not set.
 * @see _lpi2c_master_flags
 */
static inline uint32_t LPI2C_MasterGetStatusFlags(LPI2C_Type *base)
{
    return base->MSR;
}

/*!
 * @brief Clears the LPI2C master status flag state.
 *
 * The following status register flags can be cleared:
 * - #kLPI2C_MasterEndOfPacketFlag
 * - #kLPI2C_MasterStopDetectFlag
 * - #kLPI2C_MasterNackDetectFlag
 * - #kLPI2C_MasterArbitrationLostFlag
 * - #kLPI2C_MasterFifoErrFlag
 * - #kLPI2C_MasterPinLowTimeoutFlag
 * - #kLPI2C_MasterDataMatchFlag
 *
 * Attempts to clear other flags has no effect.
 *
 * @param base The LPI2C peripheral base address.
 * @param statusMask A bitmask of status flags that are to be cleared. The mask is composed of
 *  _lpi2c_master_flags enumerators OR'd together. You may pass the result of a previous call to
 *  LPI2C_MasterGetStatusFlags().
 * @see _lpi2c_master_flags.
 */
static inline void LPI2C_MasterClearStatusFlags(LPI2C_Type *base, uint32_t statusMask)
{
    base->MSR = statusMask;
}

/*! @} */

/*! @name Interrupts */
/*! @{ */

/*!
 * @brief Enables the LPI2C master interrupt requests.
 *
 * All flags except #kLPI2C_MasterBusyFlag and #kLPI2C_MasterBusBusyFlag can be enabled as
 * interrupts.
 *
 * @param base The LPI2C peripheral base address.
 * @param interruptMask Bit mask of interrupts to enable. See _lpi2c_master_flags for the set
 *      of constants that should be OR'd together to form the bit mask.
 */
static inline void LPI2C_MasterEnableInterrupts(LPI2C_Type *base, uint32_t interruptMask)
{
    base->MIER |= interruptMask;
}

/*!
 * @brief Disables the LPI2C master interrupt requests.
 *
 * All flags except #kLPI2C_MasterBusyFlag and #kLPI2C_MasterBusBusyFlag can be enabled as
 * interrupts.
 *
 * @param base The LPI2C peripheral base address.
 * @param interruptMask Bit mask of interrupts to disable. See _lpi2c_master_flags for the set
 *      of constants that should be OR'd together to form the bit mask.
 */
static inline void LPI2C_MasterDisableInterrupts(LPI2C_Type *base, uint32_t interruptMask)
{
    base->MIER &= ~interruptMask;
}

/*!
 * @brief Returns the set of currently enabled LPI2C master interrupt requests.
 *
 * @param base The LPI2C peripheral base address.
 * @return A bitmask composed of _lpi2c_master_flags enumerators OR'd together to indicate the
 *      set of enabled interrupts.
 */
static inline uint32_t LPI2C_MasterGetEnabledInterrupts(LPI2C_Type *base)
{
    return base->MIER;
}

/*! @} */

/*! @name DMA control */
/*! @{ */

/*!
 * @brief Enables or disables LPI2C master DMA requests.
 *
 * @param base The LPI2C peripheral base address.
 * @param enableTx Enable flag for transmit DMA request. Pass true for enable, false for disable.
 * @param enableRx Enable flag for receive DMA request. Pass true for enable, false for disable.
 */
static inline void LPI2C_MasterEnableDMA(LPI2C_Type *base, bool enableTx, bool enableRx)
{
    base->MDER = LPI2C_MDER_TDDE(enableTx) | LPI2C_MDER_RDDE(enableRx);
}

/*!
 * @brief Gets LPI2C master transmit data register address for DMA transfer.
 *
 * @param base The LPI2C peripheral base address.
 * @return The LPI2C Master Transmit Data Register address.
 */
static inline uint32_t LPI2C_MasterGetTxFifoAddress(LPI2C_Type *base)
{
    return (uint32_t)&base->MTDR;
}

/*!
 * @brief Gets LPI2C master receive data register address for DMA transfer.
 *
 * @param base The LPI2C peripheral base address.
 * @return The LPI2C Master Receive Data Register address.
 */
static inline uint32_t LPI2C_MasterGetRxFifoAddress(LPI2C_Type *base)
{
    return (uint32_t)&base->MRDR;
}

/*! @} */

/*! @name FIFO control */
/*! @{ */

/*!
 * @brief Sets the watermarks for LPI2C master FIFOs.
 *
 * @param base The LPI2C peripheral base address.
 * @param txWords Transmit FIFO watermark value in words. The #kLPI2C_MasterTxReadyFlag flag is set whenever
 *      the number of words in the transmit FIFO is equal or less than @a txWords. Writing a value equal or
 *      greater than the FIFO size is truncated.
 * @param rxWords Receive FIFO watermark value in words. The #kLPI2C_MasterRxReadyFlag flag is set whenever
 *      the number of words in the receive FIFO is greater than @a rxWords. Writing a value equal or greater
 *      than the FIFO size is truncated.
 */
static inline void LPI2C_MasterSetWatermarks(LPI2C_Type *base, size_t txWords, size_t rxWords)
{
    base->MFCR = LPI2C_MFCR_TXWATER(txWords) | LPI2C_MFCR_RXWATER(rxWords);
}

/*!
 * @brief Gets the current number of words in the LPI2C master FIFOs.
 *
 * @param base The LPI2C peripheral base address.
 * @param[out] txCount Pointer through which the current number of words in the transmit FIFO is returned.
 *      Pass NULL if this value is not required.
 * @param[out] rxCount Pointer through which the current number of words in the receive FIFO is returned.
 *      Pass NULL if this value is not required.
 */
static inline void LPI2C_MasterGetFifoCounts(LPI2C_Type *base, size_t *rxCount, size_t *txCount)
{
    if (NULL != txCount)
    {
        *txCount = (base->MFSR & LPI2C_MFSR_TXCOUNT_MASK) >> LPI2C_MFSR_TXCOUNT_SHIFT;
    }
    if (NULL != rxCount)
    {
        *rxCount = (base->MFSR & LPI2C_MFSR_RXCOUNT_MASK) >> LPI2C_MFSR_RXCOUNT_SHIFT;
    }
}

/*! @} */

/*! @name Bus operations */
/*! @{ */

/*!
 * @brief Sets the I2C bus frequency for master transactions.
 *
 * The LPI2C master is automatically disabled and re-enabled as necessary to configure the baud
 * rate. Do not call this function during a transfer, or the transfer is aborted.
 *
 * @note Please note that the second parameter is the clock frequency of LPI2C module, the third
 * parameter means user configured bus baudrate, this implementation is different from other I2C drivers
 * which use baudrate configuration as second parameter and source clock frequency as third parameter.
 *
 * @param base The LPI2C peripheral base address.
 * @param sourceClock_Hz LPI2C functional clock frequency in Hertz.
 * @param baudRate_Hz Requested bus frequency in Hertz.
 */
void LPI2C_MasterSetBaudRate(LPI2C_Type *base, uint32_t sourceClock_Hz, uint32_t baudRate_Hz);

/*!
 * @brief Returns whether the bus is idle.
 *
 * Requires the master mode to be enabled.
 *
 * @param base The LPI2C peripheral base address.
 * @retval true Bus is busy.
 * @retval false Bus is idle.
 */
static inline bool LPI2C_MasterGetBusIdleState(LPI2C_Type *base)
{
    return ((base->MSR & LPI2C_MSR_BBF_MASK) >> LPI2C_MSR_BBF_SHIFT) == 1U ? true : false;
}

/*!
 * @brief Sends a START signal and slave address on the I2C bus.
 *
 * This function is used to initiate a new master mode transfer. First, the bus state is checked to ensure
 * that another master is not occupying the bus. Then a START signal is transmitted, followed by the
 * 7-bit address specified in the @a address parameter. Note that this function does not actually wait
 * until the START and address are successfully sent on the bus before returning.
 *
 * @param base The LPI2C peripheral base address.
 * @param address 7-bit slave device address, in bits [6:0].
 * @param dir Master transfer direction, either #kLPI2C_Read or #kLPI2C_Write. This parameter is used to set
 *      the R/w bit (bit 0) in the transmitted slave address.
 * @retval kStatus_Success START signal and address were successfully enqueued in the transmit FIFO.
 * @retval #kStatus_LPI2C_Busy Another master is currently utilizing the bus.
 */
status_t LPI2C_MasterStart(LPI2C_Type *base, uint8_t address, lpi2c_direction_t dir);

/*!
 * @brief Sends a repeated START signal and slave address on the I2C bus.
 *
 * This function is used to send a Repeated START signal when a transfer is already in progress. Like
 * LPI2C_MasterStart(), it also sends the specified 7-bit address.
 *
 * @note This function exists primarily to maintain compatible APIs between LPI2C and I2C drivers,
 *      as well as to better document the intent of code that uses these APIs.
 *
 * @param base The LPI2C peripheral base address.
 * @param address 7-bit slave device address, in bits [6:0].
 * @param dir Master transfer direction, either #kLPI2C_Read or #kLPI2C_Write. This parameter is used to set
 *      the R/w bit (bit 0) in the transmitted slave address.
 * @retval kStatus_Success Repeated START signal and address were successfully enqueued in the transmit FIFO.
 * @retval #kStatus_LPI2C_Busy Another master is currently utilizing the bus.
 */
static inline status_t LPI2C_MasterRepeatedStart(LPI2C_Type *base, uint8_t address, lpi2c_direction_t dir)
{
    return LPI2C_MasterStart(base, address, dir);
}

/*!
 * @brief Performs a polling send transfer on the I2C bus.
 *
 * Sends up to @a txSize number of bytes to the previously addressed slave device. The slave may
 * reply with a NAK to any byte in order to terminate the transfer early. If this happens, this
 * function returns #kStatus_LPI2C_Nak.
 *
 * @param base  The LPI2C peripheral base address.
 * @param txBuff The pointer to the data to be transferred.
 * @param txSize The length in bytes of the data to be transferred.
 * @retval kStatus_Success Data was sent successfully.
 * @retval #kStatus_LPI2C_Busy Another master is currently utilizing the bus.
 * @retval #kStatus_LPI2C_Nak The slave device sent a NAK in response to a byte.
 * @retval #kStatus_LPI2C_FifoError FIFO under run or over run.
 * @retval #kStatus_LPI2C_ArbitrationLost Arbitration lost error.
 * @retval #kStatus_LPI2C_PinLowTimeout SCL or SDA were held low longer than the timeout.
 */
status_t LPI2C_MasterSend(LPI2C_Type *base, void *txBuff, size_t txSize);

/*!
 * @brief Performs a polling receive transfer on the I2C bus.
 *
 * @param base  The LPI2C peripheral base address.
 * @param rxBuff The pointer to the data to be transferred.
 * @param rxSize The length in bytes of the data to be transferred.
 * @retval kStatus_Success Data was received successfully.
 * @retval #kStatus_LPI2C_Busy Another master is currently utilizing the bus.
 * @retval #kStatus_LPI2C_Nak The slave device sent a NAK in response to a byte.
 * @retval #kStatus_LPI2C_FifoError FIFO under run or overrun.
 * @retval #kStatus_LPI2C_ArbitrationLost Arbitration lost error.
 * @retval #kStatus_LPI2C_PinLowTimeout SCL or SDA were held low longer than the timeout.
 */
status_t LPI2C_MasterReceive(LPI2C_Type *base, void *rxBuff, size_t rxSize);

/*!
 * @brief Sends a STOP signal on the I2C bus.
 *
 * This function does not return until the STOP signal is seen on the bus, or an error occurs.
 *
 * @param base The LPI2C peripheral base address.
 * @retval kStatus_Success The STOP signal was successfully sent on the bus and the transaction terminated.
 * @retval #kStatus_LPI2C_Busy Another master is currently utilizing the bus.
 * @retval #kStatus_LPI2C_Nak The slave device sent a NAK in response to a byte.
 * @retval #kStatus_LPI2C_FifoError FIFO under run or overrun.
 * @retval #kStatus_LPI2C_ArbitrationLost Arbitration lost error.
 * @retval #kStatus_LPI2C_PinLowTimeout SCL or SDA were held low longer than the timeout.
 */
status_t LPI2C_MasterStop(LPI2C_Type *base);

/*!
 * @brief Performs a master polling transfer on the I2C bus.
 *
 * @note The API does not return until the transfer succeeds or fails due
 * to error happens during transfer.
 *
 * @param base The LPI2C peripheral base address.
 * @param transfer Pointer to the transfer structure.
 * @retval kStatus_Success Data was received successfully.
 * @retval #kStatus_LPI2C_Busy Another master is currently utilizing the bus.
 * @retval #kStatus_LPI2C_Nak The slave device sent a NAK in response to a byte.
 * @retval #kStatus_LPI2C_FifoError FIFO under run or overrun.
 * @retval #kStatus_LPI2C_ArbitrationLost Arbitration lost error.
 * @retval #kStatus_LPI2C_PinLowTimeout SCL or SDA were held low longer than the timeout.
 */
status_t LPI2C_MasterTransferBlocking(LPI2C_Type *base, lpi2c_master_transfer_t *transfer);

/*! @} */

/*! @name Non-blocking */
/*! @{ */

/*!
 * @brief Creates a new handle for the LPI2C master non-blocking APIs.
 *
 * The creation of a handle is for use with the non-blocking APIs. Once a handle
 * is created, there is not a corresponding destroy handle. If the user wants to
 * terminate a transfer, the LPI2C_MasterTransferAbort() API shall be called.
 *
 *
 * @note The function also enables the NVIC IRQ for the input LPI2C. Need to notice
 * that on some SoCs the LPI2C IRQ is connected to INTMUX, in this case user needs to
 * enable the associated INTMUX IRQ in application.
 *
 * @param base The LPI2C peripheral base address.
 * @param[out] handle Pointer to the LPI2C master driver handle.
 * @param callback User provided pointer to the asynchronous callback function.
 * @param userData User provided pointer to the application callback data.
 */
void LPI2C_MasterTransferCreateHandle(LPI2C_Type *base,
                                      lpi2c_master_handle_t *handle,
                                      lpi2c_master_transfer_callback_t callback,
                                      void *userData);

/*!
 * @brief Performs a non-blocking transaction on the I2C bus.
 *
 * @param base The LPI2C peripheral base address.
 * @param handle Pointer to the LPI2C master driver handle.
 * @param transfer The pointer to the transfer descriptor.
 * @retval kStatus_Success The transaction was started successfully.
 * @retval #kStatus_LPI2C_Busy Either another master is currently utilizing the bus, or a non-blocking
 *      transaction is already in progress.
 */
status_t LPI2C_MasterTransferNonBlocking(LPI2C_Type *base,
                                         lpi2c_master_handle_t *handle,
                                         lpi2c_master_transfer_t *transfer);

/*!
 * @brief Returns number of bytes transferred so far.
 * @param base The LPI2C peripheral base address.
 * @param handle Pointer to the LPI2C master driver handle.
 * @param[out] count Number of bytes transferred so far by the non-blocking transaction.
 * @retval kStatus_Success
 * @retval kStatus_NoTransferInProgress There is not a non-blocking transaction currently in progress.
 */
status_t LPI2C_MasterTransferGetCount(LPI2C_Type *base, lpi2c_master_handle_t *handle, size_t *count);

/*!
 * @brief Terminates a non-blocking LPI2C master transmission early.
 *
 * @note It is not safe to call this function from an IRQ handler that has a higher priority than the
 *      LPI2C peripheral's IRQ priority.
 *
 * @param base The LPI2C peripheral base address.
 * @param handle Pointer to the LPI2C master driver handle.
 * @retval kStatus_Success A transaction was successfully aborted.
 * @retval #kStatus_LPI2C_Idle There is not a non-blocking transaction currently in progress.
 */
void LPI2C_MasterTransferAbort(LPI2C_Type *base, lpi2c_master_handle_t *handle);

/*! @} */

/*! @name IRQ handler */
/*! @{ */

/*!
 * @brief Reusable routine to handle master interrupts.
 * @note This function does not need to be called unless you are reimplementing the
 *  nonblocking API's interrupt handler routines to add special functionality.
 * @param instance The LPI2C instance.
 * @param lpi2cMasterHandle Pointer to the LPI2C master driver handle.
 */
void LPI2C_MasterTransferHandleIRQ(uint32_t instance, void *lpi2cMasterHandle);

/*! @} */

/*! @} */

/*!
 * @addtogroup lpi2c_slave_driver
 * @{
 */

/*! @name Slave initialization and deinitialization */
/*! @{ */

/*!
 * @brief Provides a default configuration for the LPI2C slave peripheral.
 *
 * This function provides the following default configuration for the LPI2C slave peripheral:
 * @code
 *  slaveConfig->enableSlave               = true;
 *  slaveConfig->address0                  = 0U;
 *  slaveConfig->address1                  = 0U;
 *  slaveConfig->addressMatchMode          = kLPI2C_MatchAddress0;
 *  slaveConfig->filterDozeEnable          = true;
 *  slaveConfig->filterEnable              = true;
 *  slaveConfig->enableGeneralCall         = false;
 *  slaveConfig->sclStall.enableAck        = false;
 *  slaveConfig->sclStall.enableTx         = true;
 *  slaveConfig->sclStall.enableRx         = true;
 *  slaveConfig->sclStall.enableAddress    = true;
 *  slaveConfig->ignoreAck                 = false;
 *  slaveConfig->enableReceivedAddressRead = false;
 *  slaveConfig->sdaGlitchFilterWidth_ns   = 0;
 *  slaveConfig->sclGlitchFilterWidth_ns   = 0;
 *  slaveConfig->dataValidDelay_ns         = 0;
 *  slaveConfig->clockHoldTime_ns          = 0;
 * @endcode
 *
 * After calling this function, override any settings  to customize the configuration,
 * prior to initializing the master driver with LPI2C_SlaveInit(). Be sure to override at least the @a
 * address0 member of the configuration structure with the desired slave address.
 *
 * @param[out] slaveConfig User provided configuration structure that is set to default values. Refer to
 *      #lpi2c_slave_config_t.
 */
void LPI2C_SlaveGetDefaultConfig(lpi2c_slave_config_t *slaveConfig);

/*!
 * @brief Initializes the LPI2C slave peripheral.
 *
 * This function enables the peripheral clock and initializes the LPI2C slave peripheral as described by the user
 * provided configuration.
 *
 * @param base The LPI2C peripheral base address.
 * @param slaveConfig User provided peripheral configuration. Use LPI2C_SlaveGetDefaultConfig() to get a set of defaults
 *      that you can override.
 * @param sourceClock_Hz Frequency in Hertz of the LPI2C functional clock. Used to calculate the filter widths,
 *      data valid delay, and clock hold time.
 */
void LPI2C_SlaveInit(LPI2C_Type *base, const lpi2c_slave_config_t *slaveConfig, uint32_t sourceClock_Hz);

/*!
 * @brief Deinitializes the LPI2C slave peripheral.
 *
 * This function disables the LPI2C slave peripheral and gates the clock. It also performs a software
 * reset to restore the peripheral to reset conditions.
 *
 * @param base The LPI2C peripheral base address.
 */
void LPI2C_SlaveDeinit(LPI2C_Type *base);

/*!
 * @brief Performs a software reset of the LPI2C slave peripheral.
 *
 * @param base The LPI2C peripheral base address.
 */
static inline void LPI2C_SlaveReset(LPI2C_Type *base)
{
    base->SCR = LPI2C_SCR_RST_MASK;
    base->SCR = 0;
}

/*!
 * @brief Enables or disables the LPI2C module as slave.
 *
 * @param base The LPI2C peripheral base address.
 * @param enable Pass true to enable or false to disable the specified LPI2C as slave.
 */
static inline void LPI2C_SlaveEnable(LPI2C_Type *base, bool enable)
{
    base->SCR = (base->SCR & ~LPI2C_SCR_SEN_MASK) | LPI2C_SCR_SEN(enable);
}

/*! @} */

/*! @name Slave status */
/*! @{ */

/*!
 * @brief Gets the LPI2C slave status flags.
 *
 * A bit mask with the state of all LPI2C slave status flags is returned. For each flag, the corresponding bit
 * in the return value is set if the flag is asserted.
 *
 * @param base The LPI2C peripheral base address.
 * @return State of the status flags:
 *         - 1: related status flag is set.
 *         - 0: related status flag is not set.
 * @see _lpi2c_slave_flags
 */
static inline uint32_t LPI2C_SlaveGetStatusFlags(LPI2C_Type *base)
{
    return base->SSR;
}

/*!
 * @brief Clears the LPI2C status flag state.
 *
 * The following status register flags can be cleared:
 * - #kLPI2C_SlaveRepeatedStartDetectFlag
 * - #kLPI2C_SlaveStopDetectFlag
 * - #kLPI2C_SlaveBitErrFlag
 * - #kLPI2C_SlaveFifoErrFlag
 *
 * Attempts to clear other flags has no effect.
 *
 * @param base The LPI2C peripheral base address.
 * @param statusMask A bitmask of status flags that are to be cleared. The mask is composed of
 *  #_lpi2c_slave_flags enumerators OR'd together. You may pass the result of a previous call to
 *  LPI2C_SlaveGetStatusFlags().
 * @see _lpi2c_slave_flags.
 */
static inline void LPI2C_SlaveClearStatusFlags(LPI2C_Type *base, uint32_t statusMask)
{
    base->SSR = statusMask;
}

/*! @} */

/*! @name Slave interrupts */
/*! @{ */

/*!
 * @brief Enables the LPI2C slave interrupt requests.
 *
 * All flags except #kLPI2C_SlaveBusyFlag and #kLPI2C_SlaveBusBusyFlag can be enabled as
 * interrupts.
 *
 * @param base The LPI2C peripheral base address.
 * @param interruptMask Bit mask of interrupts to enable. See #_lpi2c_slave_flags for the set
 *      of constants that should be OR'd together to form the bit mask.
 */
static inline void LPI2C_SlaveEnableInterrupts(LPI2C_Type *base, uint32_t interruptMask)
{
    base->SIER |= interruptMask;
}

/*!
 * @brief Disables the LPI2C slave interrupt requests.
 *
 * All flags except #kLPI2C_SlaveBusyFlag and #kLPI2C_SlaveBusBusyFlag can be enabled as
 * interrupts.
 *
 * @param base The LPI2C peripheral base address.
 * @param interruptMask Bit mask of interrupts to disable. See #_lpi2c_slave_flags for the set
 *      of constants that should be OR'd together to form the bit mask.
 */
static inline void LPI2C_SlaveDisableInterrupts(LPI2C_Type *base, uint32_t interruptMask)
{
    base->SIER &= ~interruptMask;
}

/*!
 * @brief Returns the set of currently enabled LPI2C slave interrupt requests.
 * @param base The LPI2C peripheral base address.
 * @return A bitmask composed of #_lpi2c_slave_flags enumerators OR'd together to indicate the
 *      set of enabled interrupts.
 */
static inline uint32_t LPI2C_SlaveGetEnabledInterrupts(LPI2C_Type *base)
{
    return base->SIER;
}

/*! @} */

/*! @name Slave DMA control */
/*! @{ */

/*!
 * @brief Enables or disables the LPI2C slave peripheral DMA requests.
 *
 * @param base The LPI2C peripheral base address.
 * @param enableAddressValid Enable flag for the address valid DMA request. Pass true for enable, false for disable.
 *      The address valid DMA request is shared with the receive data DMA request.
 * @param enableRx Enable flag for the receive data DMA request. Pass true for enable, false for disable.
 * @param enableTx Enable flag for the transmit data DMA request. Pass true for enable, false for disable.
 */
static inline void LPI2C_SlaveEnableDMA(LPI2C_Type *base, bool enableAddressValid, bool enableRx, bool enableTx)
{
    base->SDER = (base->SDER & ~(LPI2C_SDER_AVDE_MASK | LPI2C_SDER_RDDE_MASK | LPI2C_SDER_TDDE_MASK)) |
                 LPI2C_SDER_AVDE(enableAddressValid) | LPI2C_SDER_RDDE(enableRx) | LPI2C_SDER_TDDE(enableTx);
}

/*! @} */

/*! @name Slave bus operations */
/*! @{ */

/*!
 * @brief Returns whether the bus is idle.
 *
 * Requires the slave mode to be enabled.
 *
 * @param base The LPI2C peripheral base address.
 * @retval true Bus is busy.
 * @retval false Bus is idle.
 */
static inline bool LPI2C_SlaveGetBusIdleState(LPI2C_Type *base)
{
    return ((base->SSR & LPI2C_SSR_BBF_MASK) >> LPI2C_SSR_BBF_SHIFT) == 1U ? true : false;
}

/*!
 * @brief Transmits either an ACK or NAK on the I2C bus in response to a byte from the master.
 *
 * Use this function to send an ACK or NAK when the #kLPI2C_SlaveTransmitAckFlag is asserted. This
 * only happens if you enable the sclStall.enableAck field of the ::lpi2c_slave_config_t configuration
 * structure used to initialize the slave peripheral.
 *
 * @param base The LPI2C peripheral base address.
 * @param ackOrNack Pass true for an ACK or false for a NAK.
 */
static inline void LPI2C_SlaveTransmitAck(LPI2C_Type *base, bool ackOrNack)
{
    base->STAR = LPI2C_STAR_TXNACK(!ackOrNack);
}

/*!
 * @brief Enables or disables ACKSTALL.
 *
 * When enables ACKSTALL, software can transmit either an ACK or NAK on the I2C bus in response to
 * a byte from the master.
 *
 * @param base The LPI2C peripheral base address.
 * @param enable True will enable ACKSTALL,false will disable ACKSTALL.
 */
static inline void LPI2C_SlaveEnableAckStall(LPI2C_Type *base, bool enable)
{
    if (enable)
    {
        base->SCFGR1 |= LPI2C_SCFGR1_ACKSTALL_MASK;
    }
    else
    {
        base->SCFGR1 &= ~LPI2C_SCFGR1_ACKSTALL_MASK;
    }
}

/*!
 * @brief Returns the slave address sent by the I2C master.
 *
 * This function should only be called if the #kLPI2C_SlaveAddressValidFlag is asserted.
 *
 * @param base The LPI2C peripheral base address.
 * @return The 8-bit address matched by the LPI2C slave. Bit 0 contains the R/w direction bit, and
 *      the 7-bit slave address is in the upper 7 bits.
 */
static inline uint32_t LPI2C_SlaveGetReceivedAddress(LPI2C_Type *base)
{
    return base->SASR & LPI2C_SASR_RADDR_MASK;
}

/*!
 * @brief Performs a polling send transfer on the I2C bus.
 *
 * @param base  The LPI2C peripheral base address.
 * @param txBuff The pointer to the data to be transferred.
 * @param txSize The length in bytes of the data to be transferred.
 * @param[out] actualTxSize
 * @return Error or success status returned by API.
 */
status_t LPI2C_SlaveSend(LPI2C_Type *base, void *txBuff, size_t txSize, size_t *actualTxSize);

/*!
 * @brief Performs a polling receive transfer on the I2C bus.
 *
 * @param base  The LPI2C peripheral base address.
 * @param rxBuff The pointer to the data to be transferred.
 * @param rxSize The length in bytes of the data to be transferred.
 * @param[out] actualRxSize
 * @return Error or success status returned by API.
 */
status_t LPI2C_SlaveReceive(LPI2C_Type *base, void *rxBuff, size_t rxSize, size_t *actualRxSize);

/*! @} */

/*! @name Slave non-blocking */
/*! @{ */

/*!
 * @brief Creates a new handle for the LPI2C slave non-blocking APIs.
 *
 * The creation of a handle is for use with the non-blocking APIs. Once a handle
 * is created, there is not a corresponding destroy handle. If the user wants to
 * terminate a transfer, the LPI2C_SlaveTransferAbort() API shall be called.
 *
 * @note The function also enables the NVIC IRQ for the input LPI2C. Need to notice
 * that on some SoCs the LPI2C IRQ is connected to INTMUX, in this case user needs to
 * enable the associated INTMUX IRQ in application.

 * @param base The LPI2C peripheral base address.
 * @param[out] handle Pointer to the LPI2C slave driver handle.
 * @param callback User provided pointer to the asynchronous callback function.
 * @param userData User provided pointer to the application callback data.
 */
void LPI2C_SlaveTransferCreateHandle(LPI2C_Type *base,
                                     lpi2c_slave_handle_t *handle,
                                     lpi2c_slave_transfer_callback_t callback,
                                     void *userData);

/*!
 * @brief Starts accepting slave transfers.
 *
 * Call this API after calling I2C_SlaveInit() and LPI2C_SlaveTransferCreateHandle() to start processing
 * transactions driven by an I2C master. The slave monitors the I2C bus and pass events to the
 * callback that was passed into the call to LPI2C_SlaveTransferCreateHandle(). The callback is always invoked
 * from the interrupt context.
 *
 * The set of events received by the callback is customizable. To do so, set the @a eventMask parameter to
 * the OR'd combination of #lpi2c_slave_transfer_event_t enumerators for the events you wish to receive.
 * The #kLPI2C_SlaveTransmitEvent and #kLPI2C_SlaveReceiveEvent events are always enabled and do not need
 * to be included in the mask. Alternatively, you can pass 0 to get a default set of only the transmit and
 * receive events that are always enabled. In addition, the #kLPI2C_SlaveAllEvents constant is provided as
 * a convenient way to enable all events.
 *
 * @param base The LPI2C peripheral base address.
 * @param handle Pointer to lpi2c_slave_handle_t structure which stores the transfer state.
 * @param eventMask Bit mask formed by OR'ing together #lpi2c_slave_transfer_event_t enumerators to specify
 *      which events to send to the callback. Other accepted values are 0 to get a default set of
 *      only the transmit and receive events, and #kLPI2C_SlaveAllEvents to enable all events.
 *
 * @retval kStatus_Success Slave transfers were successfully started.
 * @retval #kStatus_LPI2C_Busy Slave transfers have already been started on this handle.
 */
status_t LPI2C_SlaveTransferNonBlocking(LPI2C_Type *base, lpi2c_slave_handle_t *handle, uint32_t eventMask);

/*!
 * @brief Gets the slave transfer status during a non-blocking transfer.
 * @param base The LPI2C peripheral base address.
 * @param handle Pointer to i2c_slave_handle_t structure.
 * @param[out] count Pointer to a value to hold the number of bytes transferred. May be NULL if the count is not
 *      required.
 * @retval kStatus_Success
 * @retval kStatus_NoTransferInProgress
 */
status_t LPI2C_SlaveTransferGetCount(LPI2C_Type *base, lpi2c_slave_handle_t *handle, size_t *count);

/*!
 * @brief Aborts the slave non-blocking transfers.
 * @note This API could be called at any time to stop slave for handling the bus events.
 * @param base The LPI2C peripheral base address.
 * @param handle Pointer to lpi2c_slave_handle_t structure which stores the transfer state.
 * @retval kStatus_Success
 * @retval #kStatus_LPI2C_Idle
 */
void LPI2C_SlaveTransferAbort(LPI2C_Type *base, lpi2c_slave_handle_t *handle);

/*! @} */

/*! @name Slave IRQ handler */
/*! @{ */

/*!
 * @brief Reusable routine to handle slave interrupts.
 * @note This function does not need to be called unless you are reimplementing the
 *  non blocking API's interrupt handler routines to add special functionality.
 * @param instance The LPI2C instance.
 * @param lpi2cSlaveHandle Pointer to lpi2c_slave_handle_t structure which stores the transfer state.
 */
void LPI2C_SlaveTransferHandleIRQ(uint32_t instance, void *lpi2cSlaveHandle);

/*! @} */

/*! @} */

#if defined(__cplusplus)
}
#endif

#endif /* FSL_LPI2C_H_ */
