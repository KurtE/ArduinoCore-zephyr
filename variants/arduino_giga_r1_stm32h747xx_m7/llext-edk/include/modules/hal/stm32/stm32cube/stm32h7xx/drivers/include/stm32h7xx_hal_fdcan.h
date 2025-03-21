/**
  ******************************************************************************
  * @file    stm32h7xx_hal_fdcan.h
  * @author  MCD Application Team
  * @brief   Header file of FDCAN HAL module.
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
#ifndef STM32H7xx_HAL_FDCAN_H
#define STM32H7xx_HAL_FDCAN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal_def.h"

#if defined(FDCAN1)

/** @addtogroup STM32H7xx_HAL_Driver
  * @{
  */

/** @addtogroup FDCAN
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/** @defgroup FDCAN_Exported_Types FDCAN Exported Types
  * @{
  */

/**
  * @brief HAL State structures definition
  */
typedef enum
{
  HAL_FDCAN_STATE_RESET      = 0x00U,
  HAL_FDCAN_STATE_READY      = 0x01U,
  HAL_FDCAN_STATE_BUSY       = 0x02U,
  HAL_FDCAN_STATE_ERROR      = 0x03U
} HAL_FDCAN_StateTypeDef;

/**
  * @brief FDCAN Init structure definition
  */
typedef struct
{
  uint32_t FrameFormat;                  /*!< Specifies the FDCAN frame format.
                                              This parameter can be a value of @ref FDCAN_frame_format     */

  uint32_t Mode;                         /*!< Specifies the FDCAN mode.
                                              This parameter can be a value of @ref FDCAN_operating_mode   */

  FunctionalState AutoRetransmission;    /*!< Enable or disable the automatic retransmission mode.
                                              This parameter can be set to ENABLE or DISABLE               */

  FunctionalState TransmitPause;         /*!< Enable or disable the Transmit Pause feature.
                                              This parameter can be set to ENABLE or DISABLE               */

  FunctionalState ProtocolException;      /*!< Enable or disable the Protocol Exception Handling.
                                              This parameter can be set to ENABLE or DISABLE               */

  uint32_t NominalPrescaler;             /*!< Specifies the value by which the oscillator frequency is
                                              divided for generating the nominal bit time quanta.
                                              This parameter must be a number between 1 and 512            */

  uint32_t NominalSyncJumpWidth;         /*!< Specifies the maximum number of time quanta the FDCAN
                                              hardware is allowed to lengthen or shorten a bit to perform
                                              resynchronization.
                                              This parameter must be a number between 1 and 128            */

  uint32_t NominalTimeSeg1;              /*!< Specifies the number of time quanta in Bit Segment 1.
                                              This parameter must be a number between 2 and 256            */

  uint32_t NominalTimeSeg2;              /*!< Specifies the number of time quanta in Bit Segment 2.
                                              This parameter must be a number between 2 and 128            */

  uint32_t DataPrescaler;                /*!< Specifies the value by which the oscillator frequency is
                                              divided for generating the data bit time quanta.
                                              This parameter must be a number between 1 and 32             */

  uint32_t DataSyncJumpWidth;            /*!< Specifies the maximum number of time quanta the FDCAN
                                              hardware is allowed to lengthen or shorten a data bit to
                                              perform resynchronization.
                                              This parameter must be a number between 1 and 16             */

  uint32_t DataTimeSeg1;                 /*!< Specifies the number of time quanta in Data Bit Segment 1.
                                              This parameter must be a number between 1 and 32             */

  uint32_t DataTimeSeg2;                 /*!< Specifies the number of time quanta in Data Bit Segment 2.
                                              This parameter must be a number between 1 and 16             */

  uint32_t MessageRAMOffset;             /*!< Specifies the message RAM start address.
                                              This parameter must be a number between 0 and 2560           */

  uint32_t StdFiltersNbr;                /*!< Specifies the number of standard Message ID filters.
                                              This parameter must be a number between 0 and 128            */

  uint32_t ExtFiltersNbr;                /*!< Specifies the number of extended Message ID filters.
                                              This parameter must be a number between 0 and 64             */

  uint32_t RxFifo0ElmtsNbr;              /*!< Specifies the number of Rx FIFO0 Elements.
                                              This parameter must be a number between 0 and 64             */

  uint32_t RxFifo0ElmtSize;              /*!< Specifies the Data Field Size in an Rx FIFO 0 element.
                                              This parameter can be a value of @ref FDCAN_data_field_size  */

  uint32_t RxFifo1ElmtsNbr;              /*!< Specifies the number of Rx FIFO 1 Elements.
                                              This parameter must be a number between 0 and 64             */

  uint32_t RxFifo1ElmtSize;              /*!< Specifies the Data Field Size in an Rx FIFO 1 element.
                                              This parameter can be a value of @ref FDCAN_data_field_size  */

  uint32_t RxBuffersNbr;                 /*!< Specifies the number of Dedicated Rx Buffer elements.
                                              This parameter must be a number between 0 and 64             */

  uint32_t RxBufferSize;                 /*!< Specifies the Data Field Size in an Rx Buffer element.
                                              This parameter can be a value of @ref FDCAN_data_field_size  */

  uint32_t TxEventsNbr;                  /*!< Specifies the number of Tx Event FIFO elements.
                                              This parameter must be a number between 0 and 32             */

  uint32_t TxBuffersNbr;                 /*!< Specifies the number of Dedicated Tx Buffers.
                                              This parameter must be a number between 0 and 32             */

  uint32_t TxFifoQueueElmtsNbr;          /*!< Specifies the number of Tx Buffers used for Tx FIFO/Queue.
                                              This parameter must be a number between 0 and 32             */

  uint32_t TxFifoQueueMode;              /*!< Tx FIFO/Queue Mode selection.
                                              This parameter can be a value of @ref FDCAN_txFifoQueue_Mode */

  uint32_t TxElmtSize;                   /*!< Specifies the Data Field Size in a Tx Element.
                                              This parameter can be a value of @ref FDCAN_data_field_size  */

} FDCAN_InitTypeDef;

/**
  * @brief  FDCAN clock calibration unit structure definition
  */
typedef struct
{
  uint32_t ClockCalibration;     /*!< Enable or disable the clock calibration.
                                      This parameter can be a value of @ref FDCAN_clock_calibration.       */

  uint32_t ClockDivider;         /*!< Specifies the FDCAN kernel clock divider when the clock calibration
                                      is bypassed.
                                      This parameter can be a value of @ref FDCAN_clock_divider            */

  uint32_t MinOscClkPeriods;     /*!< Configures the minimum number of periods in two CAN bit times. The
                                      actual configured number of periods is MinOscClkPeriods x 32.
                                      This parameter must be a number between 0x00 and 0xFF                */

  uint32_t CalFieldLength;       /*!< Specifies the calibration field length.
                                      This parameter can be a value of @ref FDCAN_calibration_field_length */

  uint32_t TimeQuantaPerBitTime; /*!< Configures the number of time quanta per bit time.
                                      This parameter must be a number between 4 and 25                     */

  uint32_t WatchdogStartValue;   /*!< Start value of the Calibration Watchdog Counter.
                                      If set to zero the counter is disabled.
                                      This parameter must be a number between 0x0000 and 0xFFFF            */

} FDCAN_ClkCalUnitTypeDef;

/**
  * @brief  FDCAN filter structure definition
  */
typedef struct
{
  uint32_t IdType;           /*!< Specifies the identifier type.
                                  This parameter can be a value of @ref FDCAN_id_type       */

  uint32_t FilterIndex;      /*!< Specifies the filter which will be initialized.
                                  This parameter must be a number between:
                                   - 0 and 127, if IdType is FDCAN_STANDARD_ID
                                   - 0 and 63, if IdType is FDCAN_EXTENDED_ID               */

  uint32_t FilterType;       /*!< Specifies the filter type.
                                  This parameter can be a value of @ref FDCAN_filter_type.
                                  The value FDCAN_EXT_FILTER_RANGE_NO_EIDM is permitted
                                  only when IdType is FDCAN_EXTENDED_ID.
                                  This parameter is ignored if FilterConfig is set to
                                  FDCAN_FILTER_TO_RXBUFFER                                  */

  uint32_t FilterConfig;     /*!< Specifies the filter configuration.
                                  This parameter can be a value of @ref FDCAN_filter_config */

  uint32_t FilterID1;        /*!< Specifies the filter identification 1.
                                  This parameter must be a number between:
                                   - 0 and 0x7FF, if IdType is FDCAN_STANDARD_ID
                                   - 0 and 0x1FFFFFFF, if IdType is FDCAN_EXTENDED_ID       */

  uint32_t FilterID2;        /*!< Specifies the filter identification 2.
                                  This parameter is ignored if FilterConfig is set to
                                  FDCAN_FILTER_TO_RXBUFFER.
                                  This parameter must be a number between:
                                   - 0 and 0x7FF, if IdType is FDCAN_STANDARD_ID
                                   - 0 and 0x1FFFFFFF, if IdType is FDCAN_EXTENDED_ID       */

  uint32_t RxBufferIndex;    /*!< Contains the index of the Rx buffer in which the
                                  matching message will be stored.
                                  This parameter must be a number between 0 and 63.
                                  This parameter is ignored if FilterConfig is different
                                  from FDCAN_FILTER_TO_RXBUFFER                             */

  uint32_t IsCalibrationMsg; /*!< Specifies whether the filter is configured for
                                  calibration messages.
                                  This parameter is ignored if FilterConfig is different
                                  from FDCAN_FILTER_TO_RXBUFFER.
                                  This parameter can be:
                                   - 0 : ordinary message
                                   - 1 : calibration message                                */

} FDCAN_FilterTypeDef;

/**
  * @brief  FDCAN Tx header structure definition
  */
typedef struct
{
  uint32_t Identifier;          /*!< Specifies the identifier.
                                     This parameter must be a number between:
                                      - 0 and 0x7FF, if IdType is FDCAN_STANDARD_ID
                                      - 0 and 0x1FFFFFFF, if IdType is FDCAN_EXTENDED_ID               */

  uint32_t IdType;              /*!< Specifies the identifier type for the message that will be
                                     transmitted.
                                     This parameter can be a value of @ref FDCAN_id_type               */

  uint32_t TxFrameType;         /*!< Specifies the frame type of the message that will be transmitted.
                                     This parameter can be a value of @ref FDCAN_frame_type            */

  uint32_t DataLength;          /*!< Specifies the length of the frame that will be transmitted.
                                      This parameter can be a value of @ref FDCAN_data_length_code     */

  uint32_t ErrorStateIndicator; /*!< Specifies the error state indicator.
                                     This parameter can be a value of @ref FDCAN_error_state_indicator */

  uint32_t BitRateSwitch;       /*!< Specifies whether the Tx frame will be transmitted with or without
                                     bit rate switching.
                                     This parameter can be a value of @ref FDCAN_bit_rate_switching    */

  uint32_t FDFormat;            /*!< Specifies whether the Tx frame will be transmitted in classic or
                                     FD format.
                                     This parameter can be a value of @ref FDCAN_format                */

  uint32_t TxEventFifoControl;  /*!< Specifies the event FIFO control.
                                     This parameter can be a value of @ref FDCAN_EFC                   */

  uint32_t MessageMarker;       /*!< Specifies the message marker to be copied into Tx Event FIFO
                                     element for identification of Tx message status.
                                     This parameter must be a number between 0 and 0xFF                */

} FDCAN_TxHeaderTypeDef;

/**
  * @brief  FDCAN Rx header structure definition
  */
typedef struct
{
  uint32_t Identifier;            /*!< Specifies the identifier.
                                       This parameter must be a number between:
                                        - 0 and 0x7FF, if IdType is FDCAN_STANDARD_ID
                                        - 0 and 0x1FFFFFFF, if IdType is FDCAN_EXTENDED_ID               */

  uint32_t IdType;                /*!< Specifies the identifier type of the received message.
                                       This parameter can be a value of @ref FDCAN_id_type               */

  uint32_t RxFrameType;           /*!< Specifies the the received message frame type.
                                       This parameter can be a value of @ref FDCAN_frame_type            */

  uint32_t DataLength;            /*!< Specifies the received frame length.
                                        This parameter can be a value of @ref FDCAN_data_length_code     */

  uint32_t ErrorStateIndicator;   /*!< Specifies the error state indicator.
                                       This parameter can be a value of @ref FDCAN_error_state_indicator */

  uint32_t BitRateSwitch;         /*!< Specifies whether the Rx frame is received with or without bit
                                       rate switching.
                                       This parameter can be a value of @ref FDCAN_bit_rate_switching    */

  uint32_t FDFormat;              /*!< Specifies whether the Rx frame is received in classic or FD
                                       format.
                                       This parameter can be a value of @ref FDCAN_format                */

  uint32_t RxTimestamp;           /*!< Specifies the timestamp counter value captured on start of frame
                                       reception.
                                       This parameter must be a number between 0 and 0xFFFF              */

  uint32_t FilterIndex;           /*!< Specifies the index of matching Rx acceptance filter element.
                                       This parameter must be a number between:
                                        - 0 and 127, if IdType is FDCAN_STANDARD_ID
                                        - 0 and 63, if IdType is FDCAN_EXTENDED_ID
                                       When the frame is a Non-Filter matching frame, this parameter
                                       is unused.                                                        */

  uint32_t IsFilterMatchingFrame; /*!< Specifies whether the accepted frame did not match any Rx filter.
                                       Acceptance of non-matching frames may be enabled via
                                       HAL_FDCAN_ConfigGlobalFilter().
                                       This parameter takes 0 if the frame matched an Rx filter or
                                       1 if it did not match any Rx filter                               */

} FDCAN_RxHeaderTypeDef;

/**
  * @brief  FDCAN Tx event FIFO structure definition
  */
typedef struct
{
  uint32_t Identifier;          /*!< Specifies the identifier.
                                     This parameter must be a number between:
                                      - 0 and 0x7FF, if IdType is FDCAN_STANDARD_ID
                                      - 0 and 0x1FFFFFFF, if IdType is FDCAN_EXTENDED_ID               */

  uint32_t IdType;              /*!< Specifies the identifier type for the transmitted message.
                                     This parameter can be a value of @ref FDCAN_id_type               */

  uint32_t TxFrameType;         /*!< Specifies the frame type of the transmitted message.
                                     This parameter can be a value of @ref FDCAN_frame_type            */

  uint32_t DataLength;          /*!< Specifies the length of the transmitted frame.
                                     This parameter can be a value of @ref FDCAN_data_length_code      */

  uint32_t ErrorStateIndicator; /*!< Specifies the error state indicator.
                                     This parameter can be a value of @ref FDCAN_error_state_indicator */

  uint32_t BitRateSwitch;       /*!< Specifies whether the Tx frame is transmitted with or without bit
                                     rate switching.
                                     This parameter can be a value of @ref FDCAN_bit_rate_switching    */

  uint32_t FDFormat;            /*!< Specifies whether the Tx frame is transmitted in classic or FD
                                     format.
                                     This parameter can be a value of @ref FDCAN_format                */

  uint32_t TxTimestamp;         /*!< Specifies the timestamp counter value captured on start of frame
                                     transmission.
                                     This parameter must be a number between 0 and 0xFFFF              */

  uint32_t MessageMarker;       /*!< Specifies the message marker copied into Tx Event FIFO element
                                     for identification of Tx message status.
                                     This parameter must be a number between 0 and 0xFF                */

  uint32_t EventType;           /*!< Specifies the event type.
                                     This parameter can be a value of @ref FDCAN_event_type            */

} FDCAN_TxEventFifoTypeDef;

/**
  * @brief  FDCAN High Priority Message Status structure definition
  */
typedef struct
{
  uint32_t FilterList;     /*!< Specifies the filter list of the matching filter element.
                                This parameter can be:
                                 - 0 : Standard Filter List
                                 - 1 : Extended Filter List                                */

  uint32_t FilterIndex;    /*!< Specifies the index of matching filter element.
                                This parameter can be a number between:
                                - 0 and 127, if FilterList is 0 (Standard)
                                - 0 and 63, if FilterList is 1 (Extended)                  */

  uint32_t MessageStorage; /*!< Specifies the HP Message Storage.
                                This parameter can be a value of @ref FDCAN_hp_msg_storage */

  uint32_t MessageIndex;   /*!< Specifies the Index of Rx FIFO element to which the
                                message was stored.
                                This parameter is valid only when MessageStorage is:
                                  FDCAN_HP_STORAGE_RXFIFO0
                                 or
                                  FDCAN_HP_STORAGE_RXFIFO1                                 */

} FDCAN_HpMsgStatusTypeDef;

/**
  * @brief FDCAN Protocol Status structure definition
  */
typedef struct
{
  uint32_t LastErrorCode;     /*!< Specifies the type of the last error that occurred on the FDCAN bus.
                                   This parameter can be a value of @ref FDCAN_protocol_error_code             */

  uint32_t DataLastErrorCode; /*!< Specifies the type of the last error that occurred in the data phase
                                   of a CAN FD format frame with its BRS flag set.
                                   This parameter can be a value of @ref FDCAN_protocol_error_code             */

  uint32_t Activity;          /*!< Specifies the FDCAN module communication state.
                                   This parameter can be a value of @ref FDCAN_communication_state             */

  uint32_t ErrorPassive;      /*!< Specifies the FDCAN module error status.
                                   This parameter can be:
                                    - 0 : The FDCAN is in Error_Active state
                                    - 1 : The FDCAN is in Error_Passive state                                  */

  uint32_t Warning;           /*!< Specifies the FDCAN module warning status.
                                   This parameter can be:
                                    - 0 : error counters (RxErrorCnt and TxErrorCnt) are below the
                                          Error_Warning limit of 96
                                    - 1 : at least one of error counters has reached the Error_Warning
                                          limit of 96                                                          */

  uint32_t BusOff;            /*!< Specifies the FDCAN module Bus_Off status.
                                   This parameter can be:
                                    - 0 : The FDCAN is not in Bus_Off state
                                    - 1 : The FDCAN is in Bus_Off state                                        */

  uint32_t RxESIflag;         /*!< Specifies ESI flag of last received CAN FD message.
                                   This parameter can be:
                                    - 0 : Last received CAN FD message did not have its ESI flag set
                                    - 1 : Last received CAN FD message had its ESI flag set                    */

  uint32_t RxBRSflag;         /*!< Specifies BRS flag of last received CAN FD message.
                                   This parameter can be:
                                    - 0 : Last received CAN FD message did not have its BRS flag set
                                    - 1 : Last received CAN FD message had its BRS flag set                    */

  uint32_t RxFDFflag;         /*!< Specifies if CAN FD message (FDF flag set) has been received
                                   since last protocol status.
                                   This parameter can be:
                                    - 0 : No CAN FD message received
                                    - 1 : CAN FD message received                                              */

  uint32_t ProtocolException; /*!< Specifies the FDCAN module Protocol Exception status.
                                   This parameter can be:
                                    - 0 : No protocol exception event occurred since last read access
                                    - 1 : Protocol exception event occurred                                    */

  uint32_t TDCvalue;          /*!< Specifies the Transmitter Delay Compensation Value.
                                   This parameter can be a number between 0 and 127                            */

} FDCAN_ProtocolStatusTypeDef;

/**
  * @brief FDCAN Error Counters structure definition
  */
typedef struct
{
  uint32_t TxErrorCnt;     /*!< Specifies the Transmit Error Counter Value.
                                This parameter can be a number between 0 and 255                               */

  uint32_t RxErrorCnt;     /*!< Specifies the Receive Error Counter Value.
                                This parameter can be a number between 0 and 127                               */

  uint32_t RxErrorPassive; /*!< Specifies the Receive Error Passive status.
                                This parameter can be:
                                 - 0 : The Receive Error Counter (RxErrorCnt) is below the error
                                       passive level of 128
                                 - 1 : The Receive Error Counter (RxErrorCnt) has reached the error
                                       passive level of 128                                                    */

  uint32_t ErrorLogging;   /*!< Specifies the Transmit/Receive error logging counter value.
                                This parameter can be a number between 0 and 255.
                                This counter is incremented each time when a FDCAN protocol error causes
                                the TxErrorCnt or the RxErrorCnt to be incremented. The counter stops at 255;
                                the next increment of TxErrorCnt or RxErrorCnt sets interrupt flag
                                FDCAN_FLAG_ERROR_LOGGING_OVERFLOW                                              */

} FDCAN_ErrorCountersTypeDef;

/**
  * @brief FDCAN TT Init structure definition
  */
typedef struct
{
  uint32_t OperationMode;     /*!< Specifies the FDCAN Operation Mode.
                                   This parameter can be a value of @ref FDCAN_operation_mode               */

  uint32_t GapEnable;         /*!< Specifies the FDCAN TT Operation.
                                   This parameter can be a value of @ref FDCAN_TT_operation.
                                   This parameter is ignored if OperationMode is set to
                                   FDCAN_TT_COMMUNICATION_LEVEL0                                            */

  uint32_t TimeMaster;        /*!< Specifies whether the instance is a slave or a potential master.
                                   This parameter can be a value of @ref FDCAN_TT_time_master               */

  uint32_t SyncDevLimit;      /*!< Specifies the Synchronization Deviation Limit SDL of the TUR
                                   numerator : TUR = (Numerator +/- SDL) / Denominator.
                                   With : SDL = 2^(SyncDevLimit+5).
                                   This parameter must be a number between 0 and 7                          */

  uint32_t InitRefTrigOffset; /*!< Specifies the Initial Reference Trigger Offset.
                                   This parameter must be a number between 0 and 127                        */

  uint32_t ExternalClkSync;   /*!< Enable or disable External Clock Synchronization.
                                   This parameter can be a value of @ref FDCAN_TT_external_clk_sync.
                                   This parameter is ignored if OperationMode is set to
                                   FDCAN_TT_COMMUNICATION_LEVEL1                                            */

  uint32_t AppWdgLimit;       /*!< Specifies the Application Watchdog Limit : maximum time after
                                   which the application has to serve the application watchdog.
                                   The application watchdog is incremented once each 256 NTUs.
                                   The application watchdog can be disabled by setting AppWdgLimit to 0.
                                   This parameter must be a number between 0 and 255.
                                   This parameter is ignored if OperationMode is set to
                                   FDCAN_TT_COMMUNICATION_LEVEL0                                            */

  uint32_t GlobalTimeFilter;  /*!< Enable or disable Global Time Filtering.
                                   This parameter can be a value of @ref FDCAN_TT_global_time_filtering.
                                   This parameter is ignored if OperationMode is set to
                                   FDCAN_TT_COMMUNICATION_LEVEL1                                            */

  uint32_t ClockCalibration;  /*!< Enable or disable Automatic Clock Calibration.
                                   This parameter can be a value of @ref FDCAN_TT_auto_clk_calibration.
                                   This parameter is ignored if OperationMode is set to
                                   FDCAN_TT_COMMUNICATION_LEVEL1                                            */

  uint32_t EvtTrigPolarity;   /*!< Specifies the Event Trigger Polarity.
                                   This parameter can be a value of @ref FDCAN_TT_event_trig_polarity.
                                   This parameter is ignored if OperationMode is set to
                                   FDCAN_TT_COMMUNICATION_LEVEL0                                            */

  uint32_t BasicCyclesNbr;    /*!< Specifies the number of basic cycles in the system matrix.
                                   This parameter can be a value of @ref FDCAN_TT_basic_cycle_number        */

  uint32_t CycleStartSync;    /*!< Enable or disable synchronization pulse output at pin fdcan1_soc.
                                   This parameter can be a value of @ref FDCAN_TT_cycle_start_sync          */

  uint32_t TxEnableWindow;    /*!< Specifies the length of Tx enable window in NTUs.
                                   This parameter must be a number between 1 and 16                         */

  uint32_t ExpTxTrigNbr;      /*!< Specifies the number of expected Tx_Triggers in the system matrix.
                                   This is the sum of Tx_Triggers for exclusive, single arbitrating and
                                   merged arbitrating windows.
                                   This parameter must be a number between 0 and 4095                       */

  uint32_t TURNumerator;      /*!< Specifies the TUR (Time Unit Ratio) numerator.
                                   It is advised to set this parameter to the largest applicable value.
                                   This parameter must be a number between 0x10000 and 0x1FFFF              */

  uint32_t TURDenominator;    /*!< Specifies the TUR (Time Unit Ratio) denominator.
                                   This parameter must be a number between 0x0001 and 0x3FFF                */

  uint32_t TriggerMemoryNbr;  /*!< Specifies the number of trigger memory elements.
                                   This parameter must be a number between 0 and 64                         */

  uint32_t StopWatchTrigSel;  /*!< Specifies the input to be used as stop watch trigger.
                                   This parameter can be a value of @ref FDCAN_TT_stop_watch_trig_selection */

  uint32_t EventTrigSel;      /*!< Specifies the input to be used as event trigger.
                                   This parameter can be a value of @ref FDCAN_TT_event_trig_selection      */

} FDCAN_TT_ConfigTypeDef;

/**
  * @brief  FDCAN Trigger structure definition
  */
typedef struct
{
  uint32_t TriggerIndex;  /*!< Specifies the trigger which will be configured.
                               This parameter must be a number between 0 and 63                                 */

  uint32_t TimeMark;      /*!< Specifies the cycle time for which the trigger becomes active.
                               This parameter must be a number between 0 and 0xFFFF                             */

  uint32_t RepeatFactor;  /*!< Specifies the trigger repeat factor.
                               This parameter can be a value of @ref FDCAN_TT_Repeat_Factor                     */

  uint32_t StartCycle;    /*!< Specifies the index of the first cycle in which the trigger becomes active.
                               This parameter is ignored if RepeatFactor is set to FDCAN_TT_REPEAT_EVERY_CYCLE.
                               This parameter must be a number between 0 and RepeatFactor                       */

  uint32_t TmEventInt;    /*!< Enable or disable the internal time mark event.
                               If enabled, FDCAN_TT_FLAG_TRIG_TIME_MARK flag is set when trigger memory element
                               becomes active.
                               This parameter can be a value of @ref FDCAN_TT_Time_Mark_Event_Internal          */

  uint32_t TmEventExt;    /*!< Enable or disable the external time mark event.
                               If enabled, and if TTOCN.TTIE is set, a pulse is generated at fdcan1_tmp when
                               trigger memory element becomes active.
                               This parameter can be a value of @ref FDCAN_TT_Time_Mark_Event_External          */

  uint32_t TriggerType;   /*!< Specifies the trigger type.
                               This parameter can be a value of @ref FDCAN_TT_Trigger_Type                      */

  uint32_t FilterType;    /*!< Specifies the filter identifier type.
                               This parameter can be a value of @ref FDCAN_id_type                              */

  uint32_t TxBufferIndex; /*!< Specifies the index of the Tx buffer for which the trigger is valid.
                               This parameter can be a value of @ref FDCAN_Tx_location.
                               This parameter is taken in consideration only if the trigger is configured for
                               transmission.                                                                    */

  uint32_t FilterIndex;   /*!< Specifies the filter for which the trigger is valid.
                               This parameter is taken in consideration only if the trigger is configured for
                               reception.
                               This parameter must be a number between:
                                - 0 and 127, if FilterType is FDCAN_STANDARD_ID
                                - 0 and 63, if FilterType is FDCAN_EXTENDED_ID                                  */

} FDCAN_TriggerTypeDef;

/**
  * @brief  FDCAN TT Operation Status structure definition
  */
typedef struct
{
  uint32_t ErrorLevel;       /*!< Specifies the type of the TT operation error level.
                                  This parameter can be a value of @ref FDCAN_TT_error_level                    */

  uint32_t MasterState;      /*!< Specifies the type of the TT master state.
                                  This parameter can be a value of @ref FDCAN_TT_master_state                   */

  uint32_t SyncState;        /*!< Specifies the type of the TT synchronization state.
                                  This parameter can be a value of @ref FDCAN_TT_sync_state                     */

  uint32_t GTimeQuality;     /*!< Specifies the Quality of Global Time Phase.
                                  This parameter is only relevant in Level 0 and Level 2, otherwise fixed to 0.
                                  This parameter can be:
                                   - 0 : Global time not valid
                                   - 1 : Global time in phase with Time Master                                  */

  uint32_t ClockQuality;     /*!< Specifies the Quality of Clock Speed.
                                  This parameter is only relevant in Level 0 and Level 2, otherwise fixed to 1.
                                  This parameter can be:
                                   - 0 : Local clock speed not synchronized to Time Master clock speed
                                   - 1 : Synchronization Deviation = SDL                                        */

  uint32_t RefTrigOffset;    /*!< Specifies the Actual Reference Trigger Offset Value.
                                  This parameter can be a number between 0 and 0xFF                             */

  uint32_t GTimeDiscPending; /*!< Specifies the Global Time Discontinuity State.
                                  This parameter can be:
                                   - 0 : No global time preset pending
                                   - 1 : Node waits for the global time preset to take effect                   */

  uint32_t GapFinished;      /*!< Specifies whether a Gap is finished.
                                  This parameter can be:
                                   - 0 : Reset at the end of each reference message
                                   - 1 : Gap finished                                                           */

  uint32_t MasterPriority;   /*!< Specifies the Priority of actual Time Master.
                                  This parameter can be a number between 0 and 0x7                              */

  uint32_t GapStarted;       /*!< Specifies whether a Gap is started.
                                  This parameter can be:
                                   - 0 : No Gap in schedule
                                   - 1 : Gap time after Basic Cycle has started                                 */

  uint32_t WaitForEvt;       /*!< Specifies whether a Gap is announced.
                                  This parameter can be:
                                   - 0 : No Gap announced, reset by a reference message with Next_is_Gap = 0
                                   - 1 : Reference message with Next_is_Gap = 1 received                        */

  uint32_t AppWdgEvt;        /*!< Specifies the Application Watchdog State.
                                  This parameter can be:
                                   - 0 : Application Watchdog served in time
                                   - 1 : Failed to serve Application Watchdog in time                           */

  uint32_t ECSPending;       /*!< Specifies the External Clock Synchronization State.
                                  This parameter can be:
                                   - 0 : No external clock synchronization pending
                                   - 1 : Node waits for external clock synchronization to take effect           */

  uint32_t PhaseLock;        /*!< Specifies the Phase Lock State.
                                  This parameter can be:
                                   - 0 : Phase outside range
                                   - 1 : Phase inside range                                                     */

} FDCAN_TTOperationStatusTypeDef;

/**
  * @brief  FDCAN Message RAM blocks
  */
typedef struct
{
  uint32_t StandardFilterSA; /*!< Specifies the Standard Filter List Start Address.
                                  This parameter must be a 32-bit word address      */

  uint32_t ExtendedFilterSA; /*!< Specifies the Extended Filter List Start Address.
                                  This parameter must be a 32-bit word address      */

  uint32_t RxFIFO0SA;        /*!< Specifies the Rx FIFO 0 Start Address.
                                  This parameter must be a 32-bit word address      */

  uint32_t RxFIFO1SA;        /*!< Specifies the Rx FIFO 1 Start Address.
                                  This parameter must be a 32-bit word address      */

  uint32_t RxBufferSA;       /*!< Specifies the Rx Buffer Start Address.
                                  This parameter must be a 32-bit word address      */

  uint32_t TxEventFIFOSA;    /*!< Specifies the Tx Event FIFO Start Address.
                                  This parameter must be a 32-bit word address      */

  uint32_t TxBufferSA;       /*!< Specifies the Tx Buffers Start Address.
                                  This parameter must be a 32-bit word address      */

  uint32_t TxFIFOQSA;        /*!< Specifies the Tx FIFO/Queue Start Address.
                                  This parameter must be a 32-bit word address      */

  uint32_t TTMemorySA;       /*!< Specifies the Trigger Memory Start Address.
                                  This parameter must be a 32-bit word address      */

  uint32_t EndAddress;       /*!< Specifies the End Address of the allocated RAM.
                                  This parameter must be a 32-bit word address      */

} FDCAN_MsgRamAddressTypeDef;

/**
  * @brief  FDCAN handle structure definition
  */
#if USE_HAL_FDCAN_REGISTER_CALLBACKS == 1
typedef struct __FDCAN_HandleTypeDef
#else
typedef struct
#endif /* USE_HAL_FDCAN_REGISTER_CALLBACKS */
{
  FDCAN_GlobalTypeDef         *Instance;

  TTCAN_TypeDef               *ttcan;

  FDCAN_InitTypeDef           Init;

  FDCAN_MsgRamAddressTypeDef  msgRam;

  uint32_t                    LatestTxFifoQRequest; /*!< FDCAN Tx buffer index
                                               of latest Tx FIFO/Queue request */

  __IO HAL_FDCAN_StateTypeDef State;

  HAL_LockTypeDef             Lock;

  __IO uint32_t               ErrorCode;

#if USE_HAL_FDCAN_REGISTER_CALLBACKS == 1
  void (* ClockCalibrationCallback)(struct __FDCAN_HandleTypeDef *hfdcan, uint32_t ClkCalibrationITs);
  void (* TxEventFifoCallback)(struct __FDCAN_HandleTypeDef *hfdcan, uint32_t TxEventFifoITs);
  void (* RxFifo0Callback)(struct __FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo0ITs);
  void (* RxFifo1Callback)(struct __FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo1ITs);
  void (* TxFifoEmptyCallback)(struct __FDCAN_HandleTypeDef *hfdcan);
  void (* TxBufferCompleteCallback)(struct __FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndexes);
  void (* TxBufferAbortCallback)(struct __FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndexes);
  void (* RxBufferNewMessageCallback)(struct __FDCAN_HandleTypeDef *hfdcan);
  void (* HighPriorityMessageCallback)(struct __FDCAN_HandleTypeDef *hfdcan);
  void (* TimestampWraparoundCallback)(struct __FDCAN_HandleTypeDef *hfdcan);
  void (* TimeoutOccurredCallback)(struct __FDCAN_HandleTypeDef *hfdcan);
  void (* ErrorCallback)(struct __FDCAN_HandleTypeDef *hfdcan);
  void (* ErrorStatusCallback)(struct __FDCAN_HandleTypeDef *hfdcan, uint32_t ErrorStatusITs);
  void (* TT_ScheduleSyncCallback)(struct __FDCAN_HandleTypeDef *hfdcan, uint32_t TTSchedSyncITs);
  void (* TT_TimeMarkCallback)(struct __FDCAN_HandleTypeDef *hfdcan, uint32_t TTTimeMarkITs);
  void (* TT_StopWatchCallback)(struct __FDCAN_HandleTypeDef *hfdcan, uint32_t SWTime, uint32_t SWCycleCount);
  void (* TT_GlobalTimeCallback)(struct __FDCAN_HandleTypeDef *hfdcan, uint32_t TTGlobTimeITs);

  void (* MspInitCallback)(struct __FDCAN_HandleTypeDef *hfdcan);
  void (* MspDeInitCallback)(struct __FDCAN_HandleTypeDef *hfdcan);
#endif /* USE_HAL_FDCAN_REGISTER_CALLBACKS */

} FDCAN_HandleTypeDef;

#if USE_HAL_FDCAN_REGISTER_CALLBACKS == 1
/**
  * @brief  HAL FDCAN common Callback ID enumeration definition
  */
typedef enum
{
  HAL_FDCAN_TX_FIFO_EMPTY_CB_ID        = 0x00U,
  HAL_FDCAN_RX_BUFFER_NEW_MSG_CB_ID    = 0x01U,
  HAL_FDCAN_HIGH_PRIO_MESSAGE_CB_ID    = 0x02U,
  HAL_FDCAN_TIMESTAMP_WRAPAROUND_CB_ID = 0x03U,
  HAL_FDCAN_TIMEOUT_OCCURRED_CB_ID     = 0x04U,
  HAL_FDCAN_ERROR_CALLBACK_CB_ID       = 0x05U,

  HAL_FDCAN_MSPINIT_CB_ID              = 0x06U,
  HAL_FDCAN_MSPDEINIT_CB_ID            = 0x07U,

} HAL_FDCAN_CallbackIDTypeDef;

/**
  * @brief  HAL FDCAN Callback pointer definition
  */
typedef  void (*pFDCAN_CallbackTypeDef)(FDCAN_HandleTypeDef *hfdcan);
typedef  void (*pFDCAN_ClockCalibrationCallbackTypeDef)(FDCAN_HandleTypeDef *hfdcan, uint32_t ClkCalibrationITs);
typedef  void (*pFDCAN_TxEventFifoCallbackTypeDef)(FDCAN_HandleTypeDef *hfdcan, uint32_t TxEventFifoITs);
typedef  void (*pFDCAN_RxFifo0CallbackTypeDef)(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo0ITs);
typedef  void (*pFDCAN_RxFifo1CallbackTypeDef)(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo1ITs);
typedef  void (*pFDCAN_TxBufferCompleteCallbackTypeDef)(FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndexes);
typedef  void (*pFDCAN_TxBufferAbortCallbackTypeDef)(FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndexes);
typedef  void (*pFDCAN_ErrorStatusCallbackTypeDef)(FDCAN_HandleTypeDef *hfdcan, uint32_t ErrorStatusITs);
typedef  void (*pFDCAN_TT_ScheduleSyncCallbackTypeDef)(FDCAN_HandleTypeDef *hfdcan, uint32_t TTSchedSyncITs);
typedef  void (*pFDCAN_TT_TimeMarkCallbackTypeDef)(FDCAN_HandleTypeDef *hfdcan, uint32_t TTTimeMarkITs);
typedef  void (*pFDCAN_TT_StopWatchCallbackTypeDef)(FDCAN_HandleTypeDef *hfdcan, uint32_t SWTime, uint32_t SWCycleCount);
typedef  void (*pFDCAN_TT_GlobalTimeCallbackTypeDef)(FDCAN_HandleTypeDef *hfdcan, uint32_t TTGlobTimeITs);
#endif /* USE_HAL_FDCAN_REGISTER_CALLBACKS */

/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup FDCAN_Exported_Constants FDCAN Exported Constants
  * @{
  */

/** @defgroup HAL_FDCAN_Error_Code HAL FDCAN Error Code
  * @{
  */
#define HAL_FDCAN_ERROR_NONE            ((uint32_t)0x00000000U)
#define HAL_FDCAN_ERROR_TIMEOUT         ((uint32_t)0x00000001U)
#define HAL_FDCAN_ERROR_NOT_INITIALIZED ((uint32_t)0x00000002U)
#define HAL_FDCAN_ERROR_NOT_READY       ((uint32_t)0x00000004U)
#define HAL_FDCAN_ERROR_NOT_STARTED     ((uint32_t)0x00000008U)
#define HAL_FDCAN_ERROR_NOT_SUPPORTED   ((uint32_t)0x00000010U)
#define HAL_FDCAN_ERROR_PARAM           ((uint32_t)0x00000020U)
#define HAL_FDCAN_ERROR_PENDING         ((uint32_t)0x00000040U)
#define HAL_FDCAN_ERROR_RAM_ACCESS      ((uint32_t)0x00000080U)
#define HAL_FDCAN_ERROR_FIFO_EMPTY      ((uint32_t)0x00000100U)
#define HAL_FDCAN_ERROR_FIFO_FULL       ((uint32_t)0x00000200U)
#define HAL_FDCAN_ERROR_LOG_OVERFLOW    FDCAN_IR_ELO
#define HAL_FDCAN_ERROR_RAM_WDG         FDCAN_IR_WDI
#define HAL_FDCAN_ERROR_PROTOCOL_ARBT   FDCAN_IR_PEA
#define HAL_FDCAN_ERROR_PROTOCOL_DATA   FDCAN_IR_PED
#define HAL_FDCAN_ERROR_RESERVED_AREA   FDCAN_IR_ARA
#define HAL_FDCAN_ERROR_TT_GLOBAL_TIME  FDCAN_TTIR_GTE
#define HAL_FDCAN_ERROR_TT_TX_UNDERFLOW FDCAN_TTIR_TXU
#define HAL_FDCAN_ERROR_TT_TX_OVERFLOW  FDCAN_TTIR_TXO
#define HAL_FDCAN_ERROR_TT_SCHEDULE1    FDCAN_TTIR_SE1
#define HAL_FDCAN_ERROR_TT_SCHEDULE2    FDCAN_TTIR_SE2
#define HAL_FDCAN_ERROR_TT_NO_INIT_REF  FDCAN_TTIR_IWT
#define HAL_FDCAN_ERROR_TT_NO_REF       FDCAN_TTIR_WT
#define HAL_FDCAN_ERROR_TT_APPL_WDG     FDCAN_TTIR_AW
#define HAL_FDCAN_ERROR_TT_CONFIG       FDCAN_TTIR_CER

#if USE_HAL_FDCAN_REGISTER_CALLBACKS == 1
#define HAL_FDCAN_ERROR_INVALID_CALLBACK ((uint32_t)0x00000100U)
#endif /* USE_HAL_FDCAN_REGISTER_CALLBACKS */
/**
  * @}
  */

/** @defgroup FDCAN_frame_format FDCAN Frame Format
  * @{
  */
#define FDCAN_FRAME_CLASSIC   ((uint32_t)0x00000000U)
#define FDCAN_FRAME_FD_NO_BRS ((uint32_t)FDCAN_CCCR_FDOE)
#define FDCAN_FRAME_FD_BRS    ((uint32_t)(FDCAN_CCCR_FDOE | FDCAN_CCCR_BRSE))
/**
  * @}
  */

/** @defgroup FDCAN_operating_mode FDCAN Operating Mode
  * @{
  */
#define FDCAN_MODE_NORMAL               ((uint32_t)0x00000000U)
#define FDCAN_MODE_RESTRICTED_OPERATION ((uint32_t)0x00000001U)
#define FDCAN_MODE_BUS_MONITORING       ((uint32_t)0x00000002U)
#define FDCAN_MODE_INTERNAL_LOOPBACK    ((uint32_t)0x00000003U)
#define FDCAN_MODE_EXTERNAL_LOOPBACK    ((uint32_t)0x00000004U)
/**
  * @}
  */

/** @defgroup FDCAN_clock_calibration FDCAN Clock Calibration
  * @{
  */
#define FDCAN_CLOCK_CALIBRATION_DISABLE ((uint32_t)0x00000000U)
#define FDCAN_CLOCK_CALIBRATION_ENABLE  ((uint32_t)0x00000001U)
/**
  * @}
  */

/** @defgroup FDCAN_clock_divider FDCAN Clock Divider
  * @{
  */
#define FDCAN_CLOCK_DIV1  ((uint32_t)0x00000000U)
#define FDCAN_CLOCK_DIV2  ((uint32_t)0x00000001U)
#define FDCAN_CLOCK_DIV4  ((uint32_t)0x00000002U)
#define FDCAN_CLOCK_DIV6  ((uint32_t)0x00000003U)
#define FDCAN_CLOCK_DIV8  ((uint32_t)0x00000004U)
#define FDCAN_CLOCK_DIV10 ((uint32_t)0x00000005U)
#define FDCAN_CLOCK_DIV12 ((uint32_t)0x00000006U)
#define FDCAN_CLOCK_DIV14 ((uint32_t)0x00000007U)
#define FDCAN_CLOCK_DIV16 ((uint32_t)0x00000008U)
#define FDCAN_CLOCK_DIV18 ((uint32_t)0x00000009U)
#define FDCAN_CLOCK_DIV20 ((uint32_t)0x0000000AU)
#define FDCAN_CLOCK_DIV22 ((uint32_t)0x0000000BU)
#define FDCAN_CLOCK_DIV24 ((uint32_t)0x0000000CU)
#define FDCAN_CLOCK_DIV26 ((uint32_t)0x0000000DU)
#define FDCAN_CLOCK_DIV28 ((uint32_t)0x0000000EU)
#define FDCAN_CLOCK_DIV30 ((uint32_t)0x0000000FU)
/**
  * @}
  */

/** @defgroup FDCAN_calibration_field_length FDCAN Calibration Field Length
  * @{
  */
#define FDCAN_CALIB_FIELD_LENGTH_32 ((uint32_t)0x00000000U)
#define FDCAN_CALIB_FIELD_LENGTH_64 ((uint32_t)FDCANCCU_CCFG_CFL)
/**
  * @}
  */

/** @defgroup FDCAN_calibration_state FDCAN Calibration State
  * @{
  */
#define FDCAN_CLOCK_NOT_CALIBRATED       ((uint32_t)0x00000000U)
#define FDCAN_CLOCK_BASIC_CALIBRATED     ((uint32_t)0x40000000U)
#define FDCAN_CLOCK_PRECISION_CALIBRATED ((uint32_t)0x80000000U)
/**
  * @}
  */

/** @defgroup FDCAN_calibration_counter FDCAN Calibration Counter
  * @{
  */
#define FDCAN_CALIB_TIME_QUANTA_COUNTER  ((uint32_t)0x00000000U)
#define FDCAN_CALIB_CLOCK_PERIOD_COUNTER ((uint32_t)0x00000001U)
#define FDCAN_CALIB_WATCHDOG_COUNTER     ((uint32_t)0x00000002U)
/**
  * @}
  */

/** @defgroup FDCAN_data_field_size FDCAN Data Field Size
  * @{
  */
#define FDCAN_DATA_BYTES_8  ((uint32_t)0x00000004U)
#define FDCAN_DATA_BYTES_12 ((uint32_t)0x00000005U)
#define FDCAN_DATA_BYTES_16 ((uint32_t)0x00000006U)
#define FDCAN_DATA_BYTES_20 ((uint32_t)0x00000007U)
#define FDCAN_DATA_BYTES_24 ((uint32_t)0x00000008U)
#define FDCAN_DATA_BYTES_32 ((uint32_t)0x0000000AU)
#define FDCAN_DATA_BYTES_48 ((uint32_t)0x0000000EU)
#define FDCAN_DATA_BYTES_64 ((uint32_t)0x00000012U)
/**
  * @}
  */

/** @defgroup FDCAN_txFifoQueue_Mode FDCAN Tx FIFO/Queue Mode
  * @{
  */
#define FDCAN_TX_FIFO_OPERATION  ((uint32_t)0x00000000U)
#define FDCAN_TX_QUEUE_OPERATION ((uint32_t)FDCAN_TXBC_TFQM)
/**
  * @}
  */

/** @defgroup FDCAN_id_type FDCAN ID Type
  * @{
  */
#define FDCAN_STANDARD_ID ((uint32_t)0x00000000U)
#define FDCAN_EXTENDED_ID ((uint32_t)0x40000000U)
/**
  * @}
  */

/** @defgroup FDCAN_frame_type FDCAN Frame Type
  * @{
  */
#define FDCAN_DATA_FRAME   ((uint32_t)0x00000000U)
#define FDCAN_REMOTE_FRAME ((uint32_t)0x20000000U)
/**
  * @}
  */

/** @defgroup FDCAN_data_length_code FDCAN Data Length Code
  * @{
  */
#define FDCAN_DLC_BYTES_0  ((uint32_t)0x00000000U)
#define FDCAN_DLC_BYTES_1  ((uint32_t)0x00000001U)
#define FDCAN_DLC_BYTES_2  ((uint32_t)0x00000002U)
#define FDCAN_DLC_BYTES_3  ((uint32_t)0x00000003U)
#define FDCAN_DLC_BYTES_4  ((uint32_t)0x00000004U)
#define FDCAN_DLC_BYTES_5  ((uint32_t)0x00000005U)
#define FDCAN_DLC_BYTES_6  ((uint32_t)0x00000006U)
#define FDCAN_DLC_BYTES_7  ((uint32_t)0x00000007U)
#define FDCAN_DLC_BYTES_8  ((uint32_t)0x00000008U)
#define FDCAN_DLC_BYTES_12 ((uint32_t)0x00000009U)
#define FDCAN_DLC_BYTES_16 ((uint32_t)0x0000000AU)
#define FDCAN_DLC_BYTES_20 ((uint32_t)0x0000000BU)
#define FDCAN_DLC_BYTES_24 ((uint32_t)0x0000000CU)
#define FDCAN_DLC_BYTES_32 ((uint32_t)0x0000000DU)
#define FDCAN_DLC_BYTES_48 ((uint32_t)0x0000000EU)
#define FDCAN_DLC_BYTES_64 ((uint32_t)0x0000000FU)
/**
  * @}
  */

/** @defgroup FDCAN_error_state_indicator FDCAN Error State Indicator
  * @{
  */
#define FDCAN_ESI_ACTIVE  ((uint32_t)0x00000000U)
#define FDCAN_ESI_PASSIVE ((uint32_t)0x80000000U)
/**
  * @}
  */

/** @defgroup FDCAN_bit_rate_switching FDCAN Bit Rate Switching
  * @{
  */
#define FDCAN_BRS_OFF ((uint32_t)0x00000000U)
#define FDCAN_BRS_ON  ((uint32_t)0x00100000U)
/**
  * @}
  */

/** @defgroup FDCAN_format FDCAN format
  * @{
  */
#define FDCAN_CLASSIC_CAN ((uint32_t)0x00000000U)
#define FDCAN_FD_CAN      ((uint32_t)0x00200000U)
/**
  * @}
  */

/** @defgroup FDCAN_EFC FDCAN Event FIFO control
  * @{
  */
#define FDCAN_NO_TX_EVENTS    ((uint32_t)0x00000000U)
#define FDCAN_STORE_TX_EVENTS ((uint32_t)0x00800000U)
/**
  * @}
  */

/** @defgroup FDCAN_filter_type FDCAN Filter Type
  * @{
  */
#define FDCAN_FILTER_RANGE         ((uint32_t)0x00000000U)
#define FDCAN_FILTER_DUAL          ((uint32_t)0x00000001U)
#define FDCAN_FILTER_MASK          ((uint32_t)0x00000002U)
#define FDCAN_FILTER_RANGE_NO_EIDM ((uint32_t)0x00000003U)
/**
  * @}
  */

/** @defgroup FDCAN_filter_config FDCAN Filter Configuration
  * @{
  */
#define FDCAN_FILTER_DISABLE       ((uint32_t)0x00000000U)
#define FDCAN_FILTER_TO_RXFIFO0    ((uint32_t)0x00000001U)
#define FDCAN_FILTER_TO_RXFIFO1    ((uint32_t)0x00000002U)
#define FDCAN_FILTER_REJECT        ((uint32_t)0x00000003U)
#define FDCAN_FILTER_HP            ((uint32_t)0x00000004U)
#define FDCAN_FILTER_TO_RXFIFO0_HP ((uint32_t)0x00000005U)
#define FDCAN_FILTER_TO_RXFIFO1_HP ((uint32_t)0x00000006U)
#define FDCAN_FILTER_TO_RXBUFFER   ((uint32_t)0x00000007U)
/**
  * @}
  */

/** @defgroup FDCAN_Tx_location FDCAN Tx Location
  * @{
  */
#define FDCAN_TX_BUFFER0  ((uint32_t)0x00000001U)
#define FDCAN_TX_BUFFER1  ((uint32_t)0x00000002U)
#define FDCAN_TX_BUFFER2  ((uint32_t)0x00000004U)
#define FDCAN_TX_BUFFER3  ((uint32_t)0x00000008U)
#define FDCAN_TX_BUFFER4  ((uint32_t)0x00000010U)
#define FDCAN_TX_BUFFER5  ((uint32_t)0x00000020U)
#define FDCAN_TX_BUFFER6  ((uint32_t)0x00000040U)
#define FDCAN_TX_BUFFER7  ((uint32_t)0x00000080U)
#define FDCAN_TX_BUFFER8  ((uint32_t)0x00000100U)
#define FDCAN_TX_BUFFER9  ((uint32_t)0x00000200U)
#define FDCAN_TX_BUFFER10 ((uint32_t)0x00000400U)
#define FDCAN_TX_BUFFER11 ((uint32_t)0x00000800U)
#define FDCAN_TX_BUFFER12 ((uint32_t)0x00001000U)
#define FDCAN_TX_BUFFER13 ((uint32_t)0x00002000U)
#define FDCAN_TX_BUFFER14 ((uint32_t)0x00004000U)
#define FDCAN_TX_BUFFER15 ((uint32_t)0x00008000U)
#define FDCAN_TX_BUFFER16 ((uint32_t)0x00010000U)
#define FDCAN_TX_BUFFER17 ((uint32_t)0x00020000U)
#define FDCAN_TX_BUFFER18 ((uint32_t)0x00040000U)
#define FDCAN_TX_BUFFER19 ((uint32_t)0x00080000U)
#define FDCAN_TX_BUFFER20 ((uint32_t)0x00100000U)
#define FDCAN_TX_BUFFER21 ((uint32_t)0x00200000U)
#define FDCAN_TX_BUFFER22 ((uint32_t)0x00400000U)
#define FDCAN_TX_BUFFER23 ((uint32_t)0x00800000U)
#define FDCAN_TX_BUFFER24 ((uint32_t)0x01000000U)
#define FDCAN_TX_BUFFER25 ((uint32_t)0x02000000U)
#define FDCAN_TX_BUFFER26 ((uint32_t)0x04000000U)
#define FDCAN_TX_BUFFER27 ((uint32_t)0x08000000U)
#define FDCAN_TX_BUFFER28 ((uint32_t)0x10000000U)
#define FDCAN_TX_BUFFER29 ((uint32_t)0x20000000U)
#define FDCAN_TX_BUFFER30 ((uint32_t)0x40000000U)
#define FDCAN_TX_BUFFER31 ((uint32_t)0x80000000U)
/**
  * @}
  */

/** @defgroup FDCAN_Rx_location FDCAN Rx Location
  * @{
  */
#define FDCAN_RX_FIFO0    ((uint32_t)0x00000040U)
#define FDCAN_RX_FIFO1    ((uint32_t)0x00000041U)
#define FDCAN_RX_BUFFER0  ((uint32_t)0x00000000U)
#define FDCAN_RX_BUFFER1  ((uint32_t)0x00000001U)
#define FDCAN_RX_BUFFER2  ((uint32_t)0x00000002U)
#define FDCAN_RX_BUFFER3  ((uint32_t)0x00000003U)
#define FDCAN_RX_BUFFER4  ((uint32_t)0x00000004U)
#define FDCAN_RX_BUFFER5  ((uint32_t)0x00000005U)
#define FDCAN_RX_BUFFER6  ((uint32_t)0x00000006U)
#define FDCAN_RX_BUFFER7  ((uint32_t)0x00000007U)
#define FDCAN_RX_BUFFER8  ((uint32_t)0x00000008U)
#define FDCAN_RX_BUFFER9  ((uint32_t)0x00000009U)
#define FDCAN_RX_BUFFER10 ((uint32_t)0x0000000AU)
#define FDCAN_RX_BUFFER11 ((uint32_t)0x0000000BU)
#define FDCAN_RX_BUFFER12 ((uint32_t)0x0000000CU)
#define FDCAN_RX_BUFFER13 ((uint32_t)0x0000000DU)
#define FDCAN_RX_BUFFER14 ((uint32_t)0x0000000EU)
#define FDCAN_RX_BUFFER15 ((uint32_t)0x0000000FU)
#define FDCAN_RX_BUFFER16 ((uint32_t)0x00000010U)
#define FDCAN_RX_BUFFER17 ((uint32_t)0x00000011U)
#define FDCAN_RX_BUFFER18 ((uint32_t)0x00000012U)
#define FDCAN_RX_BUFFER19 ((uint32_t)0x00000013U)
#define FDCAN_RX_BUFFER20 ((uint32_t)0x00000014U)
#define FDCAN_RX_BUFFER21 ((uint32_t)0x00000015U)
#define FDCAN_RX_BUFFER22 ((uint32_t)0x00000016U)
#define FDCAN_RX_BUFFER23 ((uint32_t)0x00000017U)
#define FDCAN_RX_BUFFER24 ((uint32_t)0x00000018U)
#define FDCAN_RX_BUFFER25 ((uint32_t)0x00000019U)
#define FDCAN_RX_BUFFER26 ((uint32_t)0x0000001AU)
#define FDCAN_RX_BUFFER27 ((uint32_t)0x0000001BU)
#define FDCAN_RX_BUFFER28 ((uint32_t)0x0000001CU)
#define FDCAN_RX_BUFFER29 ((uint32_t)0x0000001DU)
#define FDCAN_RX_BUFFER30 ((uint32_t)0x0000001EU)
#define FDCAN_RX_BUFFER31 ((uint32_t)0x0000001FU)
#define FDCAN_RX_BUFFER32 ((uint32_t)0x00000020U)
#define FDCAN_RX_BUFFER33 ((uint32_t)0x00000021U)
#define FDCAN_RX_BUFFER34 ((uint32_t)0x00000022U)
#define FDCAN_RX_BUFFER35 ((uint32_t)0x00000023U)
#define FDCAN_RX_BUFFER36 ((uint32_t)0x00000024U)
#define FDCAN_RX_BUFFER37 ((uint32_t)0x00000025U)
#define FDCAN_RX_BUFFER38 ((uint32_t)0x00000026U)
#define FDCAN_RX_BUFFER39 ((uint32_t)0x00000027U)
#define FDCAN_RX_BUFFER40 ((uint32_t)0x00000028U)
#define FDCAN_RX_BUFFER41 ((uint32_t)0x00000029U)
#define FDCAN_RX_BUFFER42 ((uint32_t)0x0000002AU)
#define FDCAN_RX_BUFFER43 ((uint32_t)0x0000002BU)
#define FDCAN_RX_BUFFER44 ((uint32_t)0x0000002CU)
#define FDCAN_RX_BUFFER45 ((uint32_t)0x0000002DU)
#define FDCAN_RX_BUFFER46 ((uint32_t)0x0000002EU)
#define FDCAN_RX_BUFFER47 ((uint32_t)0x0000002FU)
#define FDCAN_RX_BUFFER48 ((uint32_t)0x00000030U)
#define FDCAN_RX_BUFFER49 ((uint32_t)0x00000031U)
#define FDCAN_RX_BUFFER50 ((uint32_t)0x00000032U)
#define FDCAN_RX_BUFFER51 ((uint32_t)0x00000033U)
#define FDCAN_RX_BUFFER52 ((uint32_t)0x00000034U)
#define FDCAN_RX_BUFFER53 ((uint32_t)0x00000035U)
#define FDCAN_RX_BUFFER54 ((uint32_t)0x00000036U)
#define FDCAN_RX_BUFFER55 ((uint32_t)0x00000037U)
#define FDCAN_RX_BUFFER56 ((uint32_t)0x00000038U)
#define FDCAN_RX_BUFFER57 ((uint32_t)0x00000039U)
#define FDCAN_RX_BUFFER58 ((uint32_t)0x0000003AU)
#define FDCAN_RX_BUFFER59 ((uint32_t)0x0000003BU)
#define FDCAN_RX_BUFFER60 ((uint32_t)0x0000003CU)
#define FDCAN_RX_BUFFER61 ((uint32_t)0x0000003DU)
#define FDCAN_RX_BUFFER62 ((uint32_t)0x0000003EU)
#define FDCAN_RX_BUFFER63 ((uint32_t)0x0000003FU)
/**
  * @}
  */

/** @defgroup FDCAN_event_type FDCAN Event Type
  * @{
  */
#define FDCAN_TX_EVENT             ((uint32_t)0x00400000U)
#define FDCAN_TX_IN_SPITE_OF_ABORT ((uint32_t)0x00800000U)
/**
  * @}
  */

/** @defgroup FDCAN_hp_msg_storage FDCAN High Priority Message Storage
  * @{
  */
#define FDCAN_HP_STORAGE_NO_FIFO  ((uint32_t)0x00000000U)
#define FDCAN_HP_STORAGE_MSG_LOST ((uint32_t)0x00000040U)
#define FDCAN_HP_STORAGE_RXFIFO0  ((uint32_t)0x00000080U)
#define FDCAN_HP_STORAGE_RXFIFO1  ((uint32_t)0x000000C0U)
/**
  * @}
  */

/** @defgroup FDCAN_protocol_error_code FDCAN protocol error code
  * @{
  */
#define FDCAN_PROTOCOL_ERROR_NONE      ((uint32_t)0x00000000U)
#define FDCAN_PROTOCOL_ERROR_STUFF     ((uint32_t)0x00000001U)
#define FDCAN_PROTOCOL_ERROR_FORM      ((uint32_t)0x00000002U)
#define FDCAN_PROTOCOL_ERROR_ACK       ((uint32_t)0x00000003U)
#define FDCAN_PROTOCOL_ERROR_BIT1      ((uint32_t)0x00000004U)
#define FDCAN_PROTOCOL_ERROR_BIT0      ((uint32_t)0x00000005U)
#define FDCAN_PROTOCOL_ERROR_CRC       ((uint32_t)0x00000006U)
#define FDCAN_PROTOCOL_ERROR_NO_CHANGE ((uint32_t)0x00000007U)
/**
  * @}
  */

/** @defgroup FDCAN_communication_state FDCAN communication state
  * @{
  */
#define FDCAN_COM_STATE_SYNC ((uint32_t)0x00000000U)
#define FDCAN_COM_STATE_IDLE ((uint32_t)0x00000008U)
#define FDCAN_COM_STATE_RX   ((uint32_t)0x00000010U)
#define FDCAN_COM_STATE_TX   ((uint32_t)0x00000018U)
/**
  * @}
  */

/** @defgroup FDCAN_FIFO_watermark FDCAN FIFO watermark
  * @{
  */
#define FDCAN_CFG_TX_EVENT_FIFO ((uint32_t)0x00000000U)
#define FDCAN_CFG_RX_FIFO0      ((uint32_t)0x00000001U)
#define FDCAN_CFG_RX_FIFO1      ((uint32_t)0x00000002U)
/**
  * @}
  */

/** @defgroup FDCAN_Rx_FIFO_operation_mode FDCAN FIFO operation mode
  * @{
  */
#define FDCAN_RX_FIFO_BLOCKING  ((uint32_t)0x00000000U)
#define FDCAN_RX_FIFO_OVERWRITE ((uint32_t)0x00000001U)
/**
  * @}
  */

/** @defgroup FDCAN_Non_Matching_Frames FDCAN non-matching frames
  * @{
  */
#define FDCAN_ACCEPT_IN_RX_FIFO0 ((uint32_t)0x00000000U)
#define FDCAN_ACCEPT_IN_RX_FIFO1 ((uint32_t)0x00000001U)
#define FDCAN_REJECT             ((uint32_t)0x00000002U)
/**
  * @}
  */

/** @defgroup FDCAN_Reject_Remote_Frames FDCAN reject remote frames
  * @{
  */
#define FDCAN_FILTER_REMOTE ((uint32_t)0x00000000U)
#define FDCAN_REJECT_REMOTE ((uint32_t)0x00000001U)
/**
  * @}
  */

/** @defgroup FDCAN_Interrupt_Line FDCAN interrupt line
  * @{
  */
#define FDCAN_INTERRUPT_LINE0 ((uint32_t)0x00000001U)
#define FDCAN_INTERRUPT_LINE1 ((uint32_t)0x00000002U)
/**
  * @}
  */

/** @defgroup FDCAN_Timestamp FDCAN timestamp
  * @{
  */
#define FDCAN_TIMESTAMP_INTERNAL ((uint32_t)0x00000001U)
#define FDCAN_TIMESTAMP_EXTERNAL ((uint32_t)0x00000002U)
/**
  * @}
  */

/** @defgroup FDCAN_Timestamp_Prescaler FDCAN timestamp prescaler
  * @{
  */
#define FDCAN_TIMESTAMP_PRESC_1  ((uint32_t)0x00000000U)
#define FDCAN_TIMESTAMP_PRESC_2  ((uint32_t)0x00010000U)
#define FDCAN_TIMESTAMP_PRESC_3  ((uint32_t)0x00020000U)
#define FDCAN_TIMESTAMP_PRESC_4  ((uint32_t)0x00030000U)
#define FDCAN_TIMESTAMP_PRESC_5  ((uint32_t)0x00040000U)
#define FDCAN_TIMESTAMP_PRESC_6  ((uint32_t)0x00050000U)
#define FDCAN_TIMESTAMP_PRESC_7  ((uint32_t)0x00060000U)
#define FDCAN_TIMESTAMP_PRESC_8  ((uint32_t)0x00070000U)
#define FDCAN_TIMESTAMP_PRESC_9  ((uint32_t)0x00080000U)
#define FDCAN_TIMESTAMP_PRESC_10 ((uint32_t)0x00090000U)
#define FDCAN_TIMESTAMP_PRESC_11 ((uint32_t)0x000A0000U)
#define FDCAN_TIMESTAMP_PRESC_12 ((uint32_t)0x000B0000U)
#define FDCAN_TIMESTAMP_PRESC_13 ((uint32_t)0x000C0000U)
#define FDCAN_TIMESTAMP_PRESC_14 ((uint32_t)0x000D0000U)
#define FDCAN_TIMESTAMP_PRESC_15 ((uint32_t)0x000E0000U)
#define FDCAN_TIMESTAMP_PRESC_16 ((uint32_t)0x000F0000U)
/**
  * @}
  */

/** @defgroup FDCAN_Timeout_Operation FDCAN timeout operation
  * @{
  */
#define FDCAN_TIMEOUT_CONTINUOUS    ((uint32_t)0x00000000U)
#define FDCAN_TIMEOUT_TX_EVENT_FIFO ((uint32_t)0x00000002U)
#define FDCAN_TIMEOUT_RX_FIFO0      ((uint32_t)0x00000004U)
#define FDCAN_TIMEOUT_RX_FIFO1      ((uint32_t)0x00000006U)
/**
  * @}
  */

/** @defgroup FDCAN_TT_Reference_Message_Payload FDCAN TT reference message payload
  * @{
  */
#define FDCAN_TT_REF_MESSAGE_NO_PAYLOAD  ((uint32_t)0x00000000U)
#define FDCAN_TT_REF_MESSAGE_ADD_PAYLOAD ((uint32_t)FDCAN_TTRMC_RMPS)
/**
  * @}
  */

/** @defgroup FDCAN_TT_Repeat_Factor FDCAN TT repeat factor
  * @{
  */
#define FDCAN_TT_REPEAT_EVERY_CYCLE      ((uint32_t)0x00000000U)
#define FDCAN_TT_REPEAT_EVERY_2ND_CYCLE  ((uint32_t)0x00000002U)
#define FDCAN_TT_REPEAT_EVERY_4TH_CYCLE  ((uint32_t)0x00000004U)
#define FDCAN_TT_REPEAT_EVERY_8TH_CYCLE  ((uint32_t)0x00000008U)
#define FDCAN_TT_REPEAT_EVERY_16TH_CYCLE ((uint32_t)0x00000010U)
#define FDCAN_TT_REPEAT_EVERY_32ND_CYCLE ((uint32_t)0x00000020U)
#define FDCAN_TT_REPEAT_EVERY_64TH_CYCLE ((uint32_t)0x00000040U)
/**
  * @}
  */

/** @defgroup FDCAN_TT_Trigger_Type FDCAN TT trigger type
  * @{
  */
#define FDCAN_TT_TX_REF_TRIGGER         ((uint32_t)0x00000000U)
#define FDCAN_TT_TX_REF_TRIGGER_GAP     ((uint32_t)0x00000001U)
#define FDCAN_TT_TX_TRIGGER_SINGLE      ((uint32_t)0x00000002U)
#define FDCAN_TT_TX_TRIGGER_CONTINUOUS  ((uint32_t)0x00000003U)
#define FDCAN_TT_TX_TRIGGER_ARBITRATION ((uint32_t)0x00000004U)
#define FDCAN_TT_TX_TRIGGER_MERGED      ((uint32_t)0x00000005U)
#define FDCAN_TT_WATCH_TRIGGER          ((uint32_t)0x00000006U)
#define FDCAN_TT_WATCH_TRIGGER_GAP      ((uint32_t)0x00000007U)
#define FDCAN_TT_RX_TRIGGER             ((uint32_t)0x00000008U)
#define FDCAN_TT_TIME_BASE_TRIGGER      ((uint32_t)0x00000009U)
#define FDCAN_TT_END_OF_LIST            ((uint32_t)0x0000000AU)
/**
  * @}
  */

/** @defgroup FDCAN_TT_Time_Mark_Event_Internal FDCAN TT time mark event internal
  * @{
  */
#define FDCAN_TT_TM_NO_INTERNAL_EVENT  ((uint32_t)0x00000000U)
#define FDCAN_TT_TM_GEN_INTERNAL_EVENT ((uint32_t)0x00000020U)
/**
  * @}
  */

/** @defgroup FDCAN_TT_Time_Mark_Event_External FDCAN TT time mark event external
  * @{
  */
#define FDCAN_TT_TM_NO_EXTERNAL_EVENT  ((uint32_t)0x00000000U)
#define FDCAN_TT_TM_GEN_EXTERNAL_EVENT ((uint32_t)0x00000010U)
/**
  * @}
  */

/** @defgroup FDCAN_operation_mode FDCAN Operation Mode
  * @{
  */
#define FDCAN_TT_COMMUNICATION_LEVEL1    ((uint32_t)0x00000001U)
#define FDCAN_TT_COMMUNICATION_LEVEL2    ((uint32_t)0x00000002U)
#define FDCAN_TT_COMMUNICATION_LEVEL0    ((uint32_t)0x00000003U)
/**
  * @}
  */

/** @defgroup FDCAN_TT_operation FDCAN TT Operation
  * @{
  */
#define FDCAN_STRICTLY_TT_OPERATION     ((uint32_t)0x00000000U)
#define FDCAN_EXT_EVT_SYNC_TT_OPERATION ((uint32_t)FDCAN_TTOCF_GEN)
/**
  * @}
  */

/** @defgroup FDCAN_TT_time_master FDCAN TT Time Master
  * @{
  */
#define FDCAN_TT_SLAVE            ((uint32_t)0x00000000U)
#define FDCAN_TT_POTENTIAL_MASTER ((uint32_t)FDCAN_TTOCF_TM)
/**
  * @}
  */

/** @defgroup FDCAN_TT_external_clk_sync FDCAN TT External Clock Synchronization
  * @{
  */
#define FDCAN_TT_EXT_CLK_SYNC_DISABLE ((uint32_t)0x00000000U)
#define FDCAN_TT_EXT_CLK_SYNC_ENABLE  ((uint32_t)FDCAN_TTOCF_EECS)
/**
  * @}
  */

/** @defgroup FDCAN_TT_global_time_filtering FDCAN TT Global Time Filtering
  * @{
  */
#define FDCAN_TT_GLOB_TIME_FILT_DISABLE ((uint32_t)0x00000000U)
#define FDCAN_TT_GLOB_TIME_FILT_ENABLE  ((uint32_t)FDCAN_TTOCF_EGTF)
/**
  * @}
  */

/** @defgroup FDCAN_TT_auto_clk_calibration FDCAN TT Automatic Clock Calibration
  * @{
  */
#define FDCAN_TT_AUTO_CLK_CALIB_DISABLE ((uint32_t)0x00000000U)
#define FDCAN_TT_AUTO_CLK_CALIB_ENABLE  ((uint32_t)FDCAN_TTOCF_ECC)
/**
  * @}
  */

/** @defgroup FDCAN_TT_event_trig_polarity FDCAN TT Event Trigger Polarity
  * @{
  */
#define FDCAN_TT_EVT_TRIG_POL_RISING  ((uint32_t)0x00000000U)
#define FDCAN_TT_EVT_TRIG_POL_FALLING ((uint32_t)FDCAN_TTOCF_EVTP)
/**
  * @}
  */

/** @defgroup FDCAN_TT_basic_cycle_number FDCAN TT Basic Cycle Number
  * @{
  */
#define FDCAN_TT_CYCLES_PER_MATRIX_1  ((uint32_t)0x00000000U)
#define FDCAN_TT_CYCLES_PER_MATRIX_2  ((uint32_t)0x00000001U)
#define FDCAN_TT_CYCLES_PER_MATRIX_4  ((uint32_t)0x00000003U)
#define FDCAN_TT_CYCLES_PER_MATRIX_8  ((uint32_t)0x00000007U)
#define FDCAN_TT_CYCLES_PER_MATRIX_16 ((uint32_t)0x0000000FU)
#define FDCAN_TT_CYCLES_PER_MATRIX_32 ((uint32_t)0x0000001FU)
#define FDCAN_TT_CYCLES_PER_MATRIX_64 ((uint32_t)0x0000003FU)
/**
  * @}
  */

/** @defgroup FDCAN_TT_cycle_start_sync FDCAN TT Cycle Start Sync
  * @{
  */
#define FDCAN_TT_NO_SYNC_PULSE          ((uint32_t)0x00000000U)
#define FDCAN_TT_SYNC_BASIC_CYCLE_START ((uint32_t)0x00000040U)
#define FDCAN_TT_SYNC_MATRIX_START      ((uint32_t)0x00000080U)
/**
  * @}
  */

/** @defgroup FDCAN_TT_stop_watch_trig_selection FDCAN TT Stop Watch Trigger Selection
  * @{
  */
#define FDCAN_TT_STOP_WATCH_TRIGGER_0 ((uint32_t)0x00000000U)
#define FDCAN_TT_STOP_WATCH_TRIGGER_1 ((uint32_t)0x00000001U)
#define FDCAN_TT_STOP_WATCH_TRIGGER_2 ((uint32_t)0x00000002U)
#define FDCAN_TT_STOP_WATCH_TRIGGER_3 ((uint32_t)0x00000003U)
/**
  * @}
  */

/** @defgroup FDCAN_TT_event_trig_selection FDCAN TT Event Trigger Selection
  * @{
  */
#define FDCAN_TT_EVENT_TRIGGER_0 ((uint32_t)0x00000000U)
#define FDCAN_TT_EVENT_TRIGGER_1 ((uint32_t)0x00000010U)
#define FDCAN_TT_EVENT_TRIGGER_2 ((uint32_t)0x00000020U)
#define FDCAN_TT_EVENT_TRIGGER_3 ((uint32_t)0x00000030U)
/**
  * @}
  */

/** @defgroup FDCAN_TT_stop_watch_source FDCAN TT Stop Watch Source
  * @{
  */
#define FDCAN_TT_STOP_WATCH_DISABLED    ((uint32_t)0x00000000U)
#define FDCAN_TT_STOP_WATCH_CYCLE_TIME  ((uint32_t)0x00000008U)
#define FDCAN_TT_STOP_WATCH_LOCAL_TIME  ((uint32_t)0x00000010U)
#define FDCAN_TT_STOP_WATCH_GLOBAL_TIME ((uint32_t)0x00000018U)
/**
  * @}
  */

/** @defgroup FDCAN_TT_stop_watch_polarity FDCAN TT Stop Watch Polarity
  * @{
  */
#define FDCAN_TT_STOP_WATCH_RISING  ((uint32_t)0x00000000U)
#define FDCAN_TT_STOP_WATCH_FALLING ((uint32_t)0x00000004U)
/**
  * @}
  */

/** @defgroup FDCAN_TT_time_mark_source FDCAN TT Time Mark Source
  * @{
  */
#define FDCAN_TT_REG_TIMEMARK_DIABLED  ((uint32_t)0x00000000U)
#define FDCAN_TT_REG_TIMEMARK_CYC_TIME ((uint32_t)0x00000040U)
#define FDCAN_TT_REG_TIMEMARK_LOC_TIME ((uint32_t)0x00000080U)
#define FDCAN_TT_REG_TIMEMARK_GLO_TIME ((uint32_t)0x000000C0U)
/**
  * @}
  */

/** @defgroup FDCAN_TT_error_level FDCAN TT Error Level
  * @{
  */
#define FDCAN_TT_NO_ERROR     ((uint32_t)0x00000000U)
#define FDCAN_TT_WARNING      ((uint32_t)0x00000001U)
#define FDCAN_TT_ERROR        ((uint32_t)0x00000002U)
#define FDCAN_TT_SEVERE_ERROR ((uint32_t)0x00000003U)
/**
  * @}
  */

/** @defgroup FDCAN_TT_master_state FDCAN TT Master State
  * @{
  */
#define FDCAN_TT_MASTER_OFF          ((uint32_t)0x00000000U)
#define FDCAN_TT_TIME_SLAVE          ((uint32_t)0x00000004U)
#define FDCAN_TT_BACKUP_TIME_MASTER  ((uint32_t)0x00000008U)
#define FDCAN_TT_CURRENT_TIME_MASTER ((uint32_t)0x0000000CU)
/**
  * @}
  */

/** @defgroup FDCAN_TT_sync_state FDCAN TT Synchronization State
  * @{
  */
#define FDCAN_TT_OUT_OF_SYNC   ((uint32_t)0x00000000U)
#define FDCAN_TT_SYNCHRONIZING ((uint32_t)0x00000010U)
#define FDCAN_TT_IN_GAP        ((uint32_t)0x00000020U)
#define FDCAN_TT_IN_SCHEDULE   ((uint32_t)0x00000030U)
/**
  * @}
  */

/** @defgroup Interrupt_Masks Interrupt masks
  * @{
  */
#define FDCAN_IR_MASK ((uint32_t)0x3FCFFFFFU)
#define CCU_IR_MASK   ((uint32_t)0xC0000000U)
/**
  * @}
  */

/** @defgroup FDCAN_flags FDCAN Flags
  * @{
  */
#define FDCAN_FLAG_TX_COMPLETE             FDCAN_IR_TC
#define FDCAN_FLAG_TX_ABORT_COMPLETE       FDCAN_IR_TCF
#define FDCAN_FLAG_TX_FIFO_EMPTY           FDCAN_IR_TFE
#define FDCAN_FLAG_RX_HIGH_PRIORITY_MSG    FDCAN_IR_HPM
#define FDCAN_FLAG_RX_BUFFER_NEW_MESSAGE   FDCAN_IR_DRX
#define FDCAN_FLAG_TX_EVT_FIFO_ELT_LOST    FDCAN_IR_TEFL
#define FDCAN_FLAG_TX_EVT_FIFO_FULL        FDCAN_IR_TEFF
#define FDCAN_FLAG_TX_EVT_FIFO_WATERMARK   FDCAN_IR_TEFW
#define FDCAN_FLAG_TX_EVT_FIFO_NEW_DATA    FDCAN_IR_TEFN
#define FDCAN_FLAG_RX_FIFO0_MESSAGE_LOST   FDCAN_IR_RF0L
#define FDCAN_FLAG_RX_FIFO0_FULL           FDCAN_IR_RF0F
#define FDCAN_FLAG_RX_FIFO0_WATERMARK      FDCAN_IR_RF0W
#define FDCAN_FLAG_RX_FIFO0_NEW_MESSAGE    FDCAN_IR_RF0N
#define FDCAN_FLAG_RX_FIFO1_MESSAGE_LOST   FDCAN_IR_RF1L
#define FDCAN_FLAG_RX_FIFO1_FULL           FDCAN_IR_RF1F
#define FDCAN_FLAG_RX_FIFO1_WATERMARK      FDCAN_IR_RF1W
#define FDCAN_FLAG_RX_FIFO1_NEW_MESSAGE    FDCAN_IR_RF1N
#define FDCAN_FLAG_RAM_ACCESS_FAILURE      FDCAN_IR_MRAF
#define FDCAN_FLAG_ERROR_LOGGING_OVERFLOW  FDCAN_IR_ELO
#define FDCAN_FLAG_ERROR_PASSIVE           FDCAN_IR_EP
#define FDCAN_FLAG_ERROR_WARNING           FDCAN_IR_EW
#define FDCAN_FLAG_BUS_OFF                 FDCAN_IR_BO
#define FDCAN_FLAG_RAM_WATCHDOG            FDCAN_IR_WDI
#define FDCAN_FLAG_ARB_PROTOCOL_ERROR      FDCAN_IR_PEA
#define FDCAN_FLAG_DATA_PROTOCOL_ERROR     FDCAN_IR_PED
#define FDCAN_FLAG_RESERVED_ADDRESS_ACCESS FDCAN_IR_ARA
#define FDCAN_FLAG_TIMESTAMP_WRAPAROUND    FDCAN_IR_TSW
#define FDCAN_FLAG_TIMEOUT_OCCURRED        FDCAN_IR_TOO
#define FDCAN_FLAG_CALIB_STATE_CHANGED     (FDCANCCU_IR_CSC << 30)
#define FDCAN_FLAG_CALIB_WATCHDOG_EVENT    (FDCANCCU_IR_CWE << 30)
/**
  * @}
  */

/** @defgroup FDCAN_Interrupts FDCAN Interrupts
  * @{
  */

/** @defgroup FDCAN_Tx_Interrupts FDCAN Tx Interrupts
  * @{
  */
#define FDCAN_IT_TX_COMPLETE           FDCAN_IE_TCE
#define FDCAN_IT_TX_ABORT_COMPLETE     FDCAN_IE_TCFE
#define FDCAN_IT_TX_FIFO_EMPTY         FDCAN_IE_TFEE
/**
  * @}
  */

/** @defgroup FDCAN_Rx_Interrupts FDCAN Rx Interrupts
  * @{
  */
#define FDCAN_IT_RX_HIGH_PRIORITY_MSG  FDCAN_IE_HPME
#define FDCAN_IT_RX_BUFFER_NEW_MESSAGE FDCAN_IE_DRXE
/**
  * @}
  */

/** @defgroup FDCAN_Counter_Interrupts FDCAN Counter Interrupts
  * @{
  */
#define FDCAN_IT_TIMESTAMP_WRAPAROUND  FDCAN_IE_TSWE
#define FDCAN_IT_TIMEOUT_OCCURRED      FDCAN_IE_TOOE
/**
  * @}
  */

/** @defgroup FDCAN_Clock_Calibration_Interrupts Clock Calibration Interrupts
  * @{
  */
#define FDCAN_IT_CALIB_STATE_CHANGED  (FDCANCCU_IE_CSCE << 30)
#define FDCAN_IT_CALIB_WATCHDOG_EVENT (FDCANCCU_IE_CWEE << 30)
/**
  * @}
  */

/** @defgroup FDCAN_Tx_Event_Fifo_Interrupts FDCAN Tx Event FIFO Interrupts
  * @{
  */
#define FDCAN_IT_TX_EVT_FIFO_ELT_LOST  FDCAN_IE_TEFLE
#define FDCAN_IT_TX_EVT_FIFO_FULL      FDCAN_IE_TEFFE
#define FDCAN_IT_TX_EVT_FIFO_WATERMARK FDCAN_IE_TEFWE
#define FDCAN_IT_TX_EVT_FIFO_NEW_DATA  FDCAN_IE_TEFNE
/**
  * @}
  */

/** @defgroup FDCAN_Rx_Fifo0_Interrupts FDCAN Rx FIFO 0 Interrupts
  * @{
  */
#define FDCAN_IT_RX_FIFO0_MESSAGE_LOST FDCAN_IE_RF0LE
#define FDCAN_IT_RX_FIFO0_FULL         FDCAN_IE_RF0FE
#define FDCAN_IT_RX_FIFO0_WATERMARK    FDCAN_IE_RF0WE
#define FDCAN_IT_RX_FIFO0_NEW_MESSAGE  FDCAN_IE_RF0NE
/**
  * @}
  */

/** @defgroup FDCAN_Rx_Fifo1_Interrupts FDCAN Rx FIFO 1 Interrupts
  * @{
  */
#define FDCAN_IT_RX_FIFO1_MESSAGE_LOST FDCAN_IE_RF1LE
#define FDCAN_IT_RX_FIFO1_FULL         FDCAN_IE_RF1FE
#define FDCAN_IT_RX_FIFO1_WATERMARK    FDCAN_IE_RF1WE
#define FDCAN_IT_RX_FIFO1_NEW_MESSAGE  FDCAN_IE_RF1NE
/**
  * @}
  */

/** @defgroup FDCAN_Error_Interrupts FDCAN Error Interrupts
  * @{
  */
#define FDCAN_IT_RAM_ACCESS_FAILURE      FDCAN_IE_MRAFE
#define FDCAN_IT_ERROR_LOGGING_OVERFLOW  FDCAN_IE_ELOE
#define FDCAN_IT_RAM_WATCHDOG            FDCAN_IE_WDIE
#define FDCAN_IT_ARB_PROTOCOL_ERROR      FDCAN_IE_PEAE
#define FDCAN_IT_DATA_PROTOCOL_ERROR     FDCAN_IE_PEDE
#define FDCAN_IT_RESERVED_ADDRESS_ACCESS FDCAN_IE_ARAE
/**
  * @}
  */

/** @defgroup FDCAN_Error_Status_Interrupts FDCAN Error Status Interrupts
  * @{
  */
#define FDCAN_IT_ERROR_PASSIVE           FDCAN_IE_EPE
#define FDCAN_IT_ERROR_WARNING           FDCAN_IE_EWE
#define FDCAN_IT_BUS_OFF                 FDCAN_IE_BOE
/**
  * @}
  */

/**
  * @}
  */

/** @defgroup FDCAN_TTflags FDCAN TT Flags
  * @{
  */
#define FDCAN_TT_FLAG_BASIC_CYCLE_START    FDCAN_TTIR_SBC
#define FDCAN_TT_FLAG_MATRIX_CYCLE_START   FDCAN_TTIR_SMC
#define FDCAN_TT_FLAG_SYNC_MODE_CHANGE     FDCAN_TTIR_CSM
#define FDCAN_TT_FLAG_START_OF_GAP         FDCAN_TTIR_SOG
#define FDCAN_TT_FLAG_REG_TIME_MARK        FDCAN_TTIR_RTMI
#define FDCAN_TT_FLAG_TRIG_TIME_MARK       FDCAN_TTIR_TTMI
#define FDCAN_TT_FLAG_STOP_WATCH           FDCAN_TTIR_SWE
#define FDCAN_TT_FLAG_GLOBAL_TIME_WRAP     FDCAN_TTIR_GTW
#define FDCAN_TT_FLAG_GLOBAL_TIME_DISC     FDCAN_TTIR_GTD
#define FDCAN_TT_FLAG_GLOBAL_TIME_ERROR    FDCAN_TTIR_GTE
#define FDCAN_TT_FLAG_TX_COUNT_UNDERFLOW   FDCAN_TTIR_TXU
#define FDCAN_TT_FLAG_TX_COUNT_OVERFLOW    FDCAN_TTIR_TXO
#define FDCAN_TT_FLAG_SCHEDULING_ERROR_1   FDCAN_TTIR_SE1
#define FDCAN_TT_FLAG_SCHEDULING_ERROR_2   FDCAN_TTIR_SE2
#define FDCAN_TT_FLAG_ERROR_LEVEL_CHANGE   FDCAN_TTIR_ELC
#define FDCAN_TT_FLAG_INIT_WATCH_TRIGGER   FDCAN_TTIR_IWT
#define FDCAN_TT_FLAG_WATCH_TRIGGER        FDCAN_TTIR_WT
#define FDCAN_TT_FLAG_APPLICATION_WATCHDOG FDCAN_TTIR_AW
#define FDCAN_TT_FLAG_CONFIG_ERROR         FDCAN_TTIR_CER
/**
  * @}
  */

/** @defgroup FDCAN_TTInterrupts FDCAN TT Interrupts
  * @{
  */

/** @defgroup FDCAN_TTScheduleSynchronization_Interrupts FDCAN TT Schedule Synchronization Interrupts
  * @{
  */
#define FDCAN_TT_IT_BASIC_CYCLE_START  FDCAN_TTIE_SBCE
#define FDCAN_TT_IT_MATRIX_CYCLE_START FDCAN_TTIE_SMCE
#define FDCAN_TT_IT_SYNC_MODE_CHANGE   FDCAN_TTIE_CSME
#define FDCAN_TT_IT_START_OF_GAP       FDCAN_TTIE_SOGE
/**
  * @}
  */

/** @defgroup FDCAN_TTTimeMark_Interrupts FDCAN TT Time Mark Interrupts
  * @{
  */
#define FDCAN_TT_IT_REG_TIME_MARK  FDCAN_TTIE_RTMIE
#define FDCAN_TT_IT_TRIG_TIME_MARK FDCAN_TTIE_TTMIE
/**
  * @}
  */

/** @defgroup FDCAN_TTStopWatch_Interrupt FDCAN TT Stop Watch Interrupt
  * @{
  */
#define FDCAN_TT_IT_STOP_WATCH FDCAN_TTIE_SWEE
/**
  * @}
  */

/** @defgroup FDCAN_TTGlobalTime_Interrupts FDCAN TT Global Time Interrupts
  * @{
  */
#define FDCAN_TT_IT_GLOBAL_TIME_WRAP FDCAN_TTIE_GTWE
#define FDCAN_TT_IT_GLOBAL_TIME_DISC FDCAN_TTIE_GTDE
/**
  * @}
  */

/** @defgroup FDCAN_TTDisturbingError_Interrupts FDCAN TT Disturbing Error Interrupts
  * @{
  */
#define FDCAN_TT_IT_GLOBAL_TIME_ERROR  FDCAN_TTIE_GTEE
#define FDCAN_TT_IT_TX_COUNT_UNDERFLOW FDCAN_TTIE_TXUE
#define FDCAN_TT_IT_TX_COUNT_OVERFLOW  FDCAN_TTIE_TXOE
#define FDCAN_TT_IT_SCHEDULING_ERROR_1 FDCAN_TTIE_SE1E
#define FDCAN_TT_IT_SCHEDULING_ERROR_2 FDCAN_TTIE_SE2E
#define FDCAN_TT_IT_ERROR_LEVEL_CHANGE FDCAN_TTIE_ELCE
/**
  * @}
  */

/** @defgroup FDCAN_TTFatalError_Interrupts FDCAN TT Fatal Error Interrupts
  * @{
  */
#define FDCAN_TT_IT_INIT_WATCH_TRIGGER   FDCAN_TTIE_IWTE
#define FDCAN_TT_IT_WATCH_TRIGGER        FDCAN_TTIE_WTE
#define FDCAN_TT_IT_APPLICATION_WATCHDOG FDCAN_TTIE_AWE
#define FDCAN_TT_IT_CONFIG_ERROR         FDCAN_TTIE_CERE
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/* Exported macro ------------------------------------------------------------*/
/** @defgroup FDCAN_Exported_Macros FDCAN Exported Macros
  * @{
  */

/** @brief  Reset FDCAN handle state.
  * @param  __HANDLE__ FDCAN handle.
  * @retval None
  */
#if USE_HAL_FDCAN_REGISTER_CALLBACKS == 1
#define __HAL_FDCAN_RESET_HANDLE_STATE(__HANDLE__) do{                                                 \
                                                       (__HANDLE__)->State = HAL_FDCAN_STATE_RESET;    \
                                                       (__HANDLE__)->MspInitCallback = NULL;           \
                                                       (__HANDLE__)->MspDeInitCallback = NULL;         \
                                                     } while(0)
#else
#define __HAL_FDCAN_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_FDCAN_STATE_RESET)
#endif /* USE_HAL_FDCAN_REGISTER_CALLBACKS */

/**
  * @brief  Enable the specified FDCAN interrupts.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __INTERRUPT__ FDCAN interrupt.
  *         This parameter can be any combination of @arg FDCAN_Interrupts
  * @retval None
  */
#define __HAL_FDCAN_ENABLE_IT(__HANDLE__, __INTERRUPT__)             \
  do{                                                                \
    (__HANDLE__)->Instance->IE |= ((__INTERRUPT__) & FDCAN_IR_MASK); \
    FDCAN_CCU->IE |= (((__INTERRUPT__) & CCU_IR_MASK) >> 30);        \
  }while(0)


/**
  * @brief  Disable the specified FDCAN interrupts.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __INTERRUPT__ FDCAN interrupt.
  *         This parameter can be any combination of @arg FDCAN_Interrupts
  * @retval None
  */
#define __HAL_FDCAN_DISABLE_IT(__HANDLE__, __INTERRUPT__)               \
  do{                                                                   \
    ((__HANDLE__)->Instance->IE) &= ~((__INTERRUPT__) & FDCAN_IR_MASK); \
    FDCAN_CCU->IE &= ~(((__INTERRUPT__) & CCU_IR_MASK) >> 30);          \
  }while(0)

/**
  * @brief  Check whether the specified FDCAN interrupt is set or not.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __INTERRUPT__ FDCAN interrupt.
  *         This parameter can be one of @arg FDCAN_Interrupts
  * @retval ITStatus
  */
#define __HAL_FDCAN_GET_IT(__HANDLE__, __INTERRUPT__) (((__INTERRUPT__) < FDCAN_IT_CALIB_WATCHDOG_EVENT) ? \
                                                       ((__HANDLE__)->Instance->IR &\
                                                        (__INTERRUPT__)) : ((FDCAN_CCU->IR << 30) & (__INTERRUPT__)))

/**
  * @brief  Clear the specified FDCAN interrupts.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __INTERRUPT__ specifies the interrupts to clear.
  *         This parameter can be any combination of @arg FDCAN_Interrupts
  * @retval None
  */
#define __HAL_FDCAN_CLEAR_IT(__HANDLE__, __INTERRUPT__)                  \
  do {                                                                   \
    ((__HANDLE__)->Instance->IR) = ((__INTERRUPT__) & FDCAN_IR_MASK); \
    FDCAN_CCU->IR = (((__INTERRUPT__) & CCU_IR_MASK) >> 30);          \
  } while(0);

/**
  * @brief  Check whether the specified FDCAN flag is set or not.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __FLAG__ FDCAN flag.
  *         This parameter can be one of @arg FDCAN_flags
  * @retval FlagStatus
  */
#define __HAL_FDCAN_GET_FLAG(__HANDLE__, __FLAG__) (((__FLAG__) < FDCAN_FLAG_CALIB_WATCHDOG_EVENT) ? \
                                                    ((__HANDLE__)->Instance->IR &\
                                                     (__FLAG__)) : ((FDCAN_CCU->IR << 30) & (__FLAG__)))

/**
  * @brief  Clear the specified FDCAN flags.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __FLAG__ specifies the flags to clear.
  *         This parameter can be any combination of @arg FDCAN_flags
  * @retval None
  */
#define __HAL_FDCAN_CLEAR_FLAG(__HANDLE__, __FLAG__)                \
  do {                                                              \
    ((__HANDLE__)->Instance->IR) = ((__FLAG__) & FDCAN_IR_MASK); \
    FDCAN_CCU->IR = (((__FLAG__) & CCU_IR_MASK) >> 30);          \
  } while(0);

/** @brief  Check if the specified FDCAN interrupt source is enabled or disabled.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __INTERRUPT__ specifies the FDCAN interrupt source to check.
  *         This parameter can be a value of @arg FDCAN_Interrupts
  * @retval ITStatus
  */
#define __HAL_FDCAN_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) (((__INTERRUPT__) < FDCAN_IT_CALIB_WATCHDOG_EVENT) ? \
                                                              ((__HANDLE__)->Instance->IE &\
                                                               (__INTERRUPT__)) : ((FDCAN_CCU->IE << 30) & \
                                                                   (__INTERRUPT__)))

/**
  * @brief  Enable the specified FDCAN TT interrupts.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __INTERRUPT__ FDCAN TT interrupt.
  *         This parameter can be any combination of @arg FDCAN_TTInterrupts
  * @retval None
  */
#define __HAL_FDCAN_TT_ENABLE_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->ttcan->TTIE) |= (__INTERRUPT__))

/**
  * @brief  Disable the specified FDCAN TT interrupts.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __INTERRUPT__ FDCAN TT interrupt.
  *         This parameter can be any combination of @arg FDCAN_TTInterrupts
  * @retval None
  */
#define __HAL_FDCAN_TT_DISABLE_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->ttcan->TTIE) &= ~(__INTERRUPT__))

/**
  * @brief  Check whether the specified FDCAN TT interrupt is set or not.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __INTERRUPT__ FDCAN TT interrupt.
  *         This parameter can be one of @arg FDCAN_TTInterrupts
  * @retval ITStatus
  */
#define __HAL_FDCAN_TT_GET_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->ttcan->TTIR) & (__INTERRUPT__))

/**
  * @brief  Clear the specified FDCAN TT interrupts.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __INTERRUPT__ specifies the TT interrupts to clear.
  *         This parameter can be any combination of @arg FDCAN_TTInterrupts
  * @retval None
  */
#define __HAL_FDCAN_TT_CLEAR_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->ttcan->TTIR) = (__INTERRUPT__))

/**
  * @brief  Check whether the specified FDCAN TT flag is set or not.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __FLAG__ FDCAN TT flag.
  *         This parameter can be one of @arg FDCAN_TTflags
  * @retval FlagStatus
  */
#define __HAL_FDCAN_TT_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->ttcan->TTIR) & (__FLAG__))

/**
  * @brief  Clear the specified FDCAN TT flags.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __FLAG__ specifies the TT flags to clear.
  *         This parameter can be any combination of @arg FDCAN_TTflags
  * @retval None
  */
#define __HAL_FDCAN_TT_CLEAR_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->ttcan->TTIR) = (__FLAG__))

/** @brief  Check if the specified FDCAN TT interrupt source is enabled or disabled.
  * @param  __HANDLE__ FDCAN handle.
  * @param  __INTERRUPT__ specifies the FDCAN TT interrupt source to check.
  *         This parameter can be a value of @arg FDCAN_TTInterrupts
  * @retval ITStatus
  */
#define __HAL_FDCAN_TT_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->ttcan->TTIE) & (__INTERRUPT__))

/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/
/** @addtogroup FDCAN_Exported_Functions
  * @{
  */

/** @addtogroup FDCAN_Exported_Functions_Group1
  * @{
  */
/* Initialization and de-initialization functions *****************************/
HAL_StatusTypeDef HAL_FDCAN_Init(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_DeInit(FDCAN_HandleTypeDef *hfdcan);
void              HAL_FDCAN_MspInit(FDCAN_HandleTypeDef *hfdcan);
void              HAL_FDCAN_MspDeInit(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_EnterPowerDownMode(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_ExitPowerDownMode(FDCAN_HandleTypeDef *hfdcan);

#if USE_HAL_FDCAN_REGISTER_CALLBACKS == 1
/* Callbacks Register/UnRegister functions  ***********************************/
HAL_StatusTypeDef HAL_FDCAN_RegisterCallback(FDCAN_HandleTypeDef *hfdcan, HAL_FDCAN_CallbackIDTypeDef CallbackID,
                                             pFDCAN_CallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_FDCAN_UnRegisterCallback(FDCAN_HandleTypeDef *hfdcan, HAL_FDCAN_CallbackIDTypeDef CallbackID);
HAL_StatusTypeDef HAL_FDCAN_RegisterClockCalibrationCallback(FDCAN_HandleTypeDef *hfdcan,
                                                             pFDCAN_ClockCalibrationCallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_FDCAN_UnRegisterClockCalibrationCallback(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_RegisterTxEventFifoCallback(FDCAN_HandleTypeDef *hfdcan,
                                                        pFDCAN_TxEventFifoCallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_FDCAN_UnRegisterTxEventFifoCallback(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_RegisterRxFifo0Callback(FDCAN_HandleTypeDef *hfdcan,
                                                    pFDCAN_RxFifo0CallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_FDCAN_UnRegisterRxFifo0Callback(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_RegisterRxFifo1Callback(FDCAN_HandleTypeDef *hfdcan,
                                                    pFDCAN_RxFifo1CallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_FDCAN_UnRegisterRxFifo1Callback(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_RegisterTxBufferCompleteCallback(FDCAN_HandleTypeDef *hfdcan,
                                                             pFDCAN_TxBufferCompleteCallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_FDCAN_UnRegisterTxBufferCompleteCallback(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_RegisterTxBufferAbortCallback(FDCAN_HandleTypeDef *hfdcan,
                                                          pFDCAN_TxBufferAbortCallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_FDCAN_UnRegisterTxBufferAbortCallback(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_RegisterErrorStatusCallback(FDCAN_HandleTypeDef *hfdcan,
                                                        pFDCAN_ErrorStatusCallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_FDCAN_UnRegisterErrorStatusCallback(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_RegisterTTScheduleSyncCallback(FDCAN_HandleTypeDef *hfdcan,
                                                           pFDCAN_TT_ScheduleSyncCallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_FDCAN_UnRegisterTTScheduleSyncCallback(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_RegisterTTTimeMarkCallback(FDCAN_HandleTypeDef *hfdcan,
                                                       pFDCAN_TT_TimeMarkCallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_FDCAN_UnRegisterTTTimeMarkCallback(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_RegisterTTStopWatchCallback(FDCAN_HandleTypeDef *hfdcan,
                                                        pFDCAN_TT_StopWatchCallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_FDCAN_UnRegisterTTStopWatchCallback(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_RegisterTTGlobalTimeCallback(FDCAN_HandleTypeDef *hfdcan,
                                                         pFDCAN_TT_GlobalTimeCallbackTypeDef pCallback);
HAL_StatusTypeDef HAL_FDCAN_UnRegisterTTGlobalTimeCallback(FDCAN_HandleTypeDef *hfdcan);
#endif /* USE_HAL_FDCAN_REGISTER_CALLBACKS */
/**
  * @}
  */

/** @addtogroup FDCAN_Exported_Functions_Group2
  * @{
  */
/* Configuration functions ****************************************************/
HAL_StatusTypeDef HAL_FDCAN_ConfigClockCalibration(FDCAN_HandleTypeDef *hfdcan,
                                                   const FDCAN_ClkCalUnitTypeDef *sCcuConfig);
uint32_t          HAL_FDCAN_GetClockCalibrationState(const FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_ResetClockCalibrationState(FDCAN_HandleTypeDef *hfdcan);
uint32_t          HAL_FDCAN_GetClockCalibrationCounter(const FDCAN_HandleTypeDef *hfdcan, uint32_t Counter);
HAL_StatusTypeDef HAL_FDCAN_ConfigFilter(FDCAN_HandleTypeDef *hfdcan, const FDCAN_FilterTypeDef *sFilterConfig);
HAL_StatusTypeDef HAL_FDCAN_ConfigGlobalFilter(FDCAN_HandleTypeDef *hfdcan, uint32_t NonMatchingStd,
                                               uint32_t NonMatchingExt, uint32_t RejectRemoteStd,
                                               uint32_t RejectRemoteExt);
HAL_StatusTypeDef HAL_FDCAN_ConfigExtendedIdMask(FDCAN_HandleTypeDef *hfdcan, uint32_t Mask);
HAL_StatusTypeDef HAL_FDCAN_ConfigRxFifoOverwrite(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo, uint32_t OperationMode);
HAL_StatusTypeDef HAL_FDCAN_ConfigFifoWatermark(FDCAN_HandleTypeDef *hfdcan, uint32_t FIFO, uint32_t Watermark);
HAL_StatusTypeDef HAL_FDCAN_ConfigRamWatchdog(FDCAN_HandleTypeDef *hfdcan, uint32_t CounterStartValue);
HAL_StatusTypeDef HAL_FDCAN_ConfigTimestampCounter(FDCAN_HandleTypeDef *hfdcan, uint32_t TimestampPrescaler);
HAL_StatusTypeDef HAL_FDCAN_EnableTimestampCounter(FDCAN_HandleTypeDef *hfdcan, uint32_t TimestampOperation);
HAL_StatusTypeDef HAL_FDCAN_DisableTimestampCounter(FDCAN_HandleTypeDef *hfdcan);
uint16_t          HAL_FDCAN_GetTimestampCounter(const FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_ResetTimestampCounter(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_ConfigTimeoutCounter(FDCAN_HandleTypeDef *hfdcan, uint32_t TimeoutOperation,
                                                 uint32_t TimeoutPeriod);
HAL_StatusTypeDef HAL_FDCAN_EnableTimeoutCounter(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_DisableTimeoutCounter(FDCAN_HandleTypeDef *hfdcan);
uint16_t          HAL_FDCAN_GetTimeoutCounter(const FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_ResetTimeoutCounter(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_ConfigTxDelayCompensation(FDCAN_HandleTypeDef *hfdcan, uint32_t TdcOffset,
                                                      uint32_t TdcFilter);
HAL_StatusTypeDef HAL_FDCAN_EnableTxDelayCompensation(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_DisableTxDelayCompensation(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_EnableISOMode(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_DisableISOMode(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_EnableEdgeFiltering(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_DisableEdgeFiltering(FDCAN_HandleTypeDef *hfdcan);
/**
  * @}
  */

/** @addtogroup FDCAN_Exported_Functions_Group3
  * @{
  */
/* Control functions **********************************************************/
HAL_StatusTypeDef HAL_FDCAN_Start(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_Stop(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_AddMessageToTxFifoQ(FDCAN_HandleTypeDef *hfdcan, const FDCAN_TxHeaderTypeDef *pTxHeader,
                                                const uint8_t *pTxData);
HAL_StatusTypeDef HAL_FDCAN_AddMessageToTxBuffer(FDCAN_HandleTypeDef *hfdcan, const FDCAN_TxHeaderTypeDef *pTxHeader,
                                                 const uint8_t *pTxData, uint32_t BufferIndex);
HAL_StatusTypeDef HAL_FDCAN_EnableTxBufferRequest(FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndex);
uint32_t HAL_FDCAN_GetLatestTxFifoQRequestBuffer(const FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_AbortTxRequest(FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndex);
HAL_StatusTypeDef HAL_FDCAN_GetRxMessage(FDCAN_HandleTypeDef *hfdcan, uint32_t RxLocation,
                                         FDCAN_RxHeaderTypeDef *pRxHeader, uint8_t *pRxData);
HAL_StatusTypeDef HAL_FDCAN_GetTxEvent(FDCAN_HandleTypeDef *hfdcan, FDCAN_TxEventFifoTypeDef *pTxEvent);
HAL_StatusTypeDef HAL_FDCAN_GetHighPriorityMessageStatus(const FDCAN_HandleTypeDef *hfdcan,
                                                         FDCAN_HpMsgStatusTypeDef *HpMsgStatus);
HAL_StatusTypeDef HAL_FDCAN_GetProtocolStatus(const FDCAN_HandleTypeDef *hfdcan,
                                              FDCAN_ProtocolStatusTypeDef *ProtocolStatus);
HAL_StatusTypeDef HAL_FDCAN_GetErrorCounters(const FDCAN_HandleTypeDef *hfdcan,
                                             FDCAN_ErrorCountersTypeDef *ErrorCounters);
uint32_t HAL_FDCAN_IsRxBufferMessageAvailable(FDCAN_HandleTypeDef *hfdcan, uint32_t RxBufferIndex);
uint32_t HAL_FDCAN_IsTxBufferMessagePending(const FDCAN_HandleTypeDef *hfdcan, uint32_t TxBufferIndex);
uint32_t HAL_FDCAN_GetRxFifoFillLevel(const FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo);
uint32_t HAL_FDCAN_GetTxFifoFreeLevel(const FDCAN_HandleTypeDef *hfdcan);
uint32_t HAL_FDCAN_IsRestrictedOperationMode(const FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_ExitRestrictedOperationMode(FDCAN_HandleTypeDef *hfdcan);
/**
  * @}
  */

/** @addtogroup FDCAN_Exported_Functions_Group4
  * @{
  */
/* TT Configuration and control functions**************************************/
HAL_StatusTypeDef HAL_FDCAN_TT_ConfigOperation(FDCAN_HandleTypeDef *hfdcan, const FDCAN_TT_ConfigTypeDef *pTTParams);
HAL_StatusTypeDef HAL_FDCAN_TT_ConfigReferenceMessage(FDCAN_HandleTypeDef *hfdcan, uint32_t IdType, uint32_t Identifier,
                                                      uint32_t Payload);
HAL_StatusTypeDef HAL_FDCAN_TT_ConfigTrigger(FDCAN_HandleTypeDef *hfdcan, const FDCAN_TriggerTypeDef *sTriggerConfig);
HAL_StatusTypeDef HAL_FDCAN_TT_SetGlobalTime(FDCAN_HandleTypeDef *hfdcan, uint32_t TimePreset);
HAL_StatusTypeDef HAL_FDCAN_TT_SetClockSynchronization(FDCAN_HandleTypeDef *hfdcan, uint32_t NewTURNumerator);
HAL_StatusTypeDef HAL_FDCAN_TT_ConfigStopWatch(FDCAN_HandleTypeDef *hfdcan, uint32_t Source, uint32_t Polarity);
HAL_StatusTypeDef HAL_FDCAN_TT_ConfigRegisterTimeMark(FDCAN_HandleTypeDef *hfdcan, uint32_t TimeMarkSource,
                                                      uint32_t TimeMarkValue, uint32_t RepeatFactor,
                                                      uint32_t StartCycle);
HAL_StatusTypeDef HAL_FDCAN_TT_EnableRegisterTimeMarkPulse(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_TT_DisableRegisterTimeMarkPulse(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_TT_EnableTriggerTimeMarkPulse(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_TT_DisableTriggerTimeMarkPulse(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_TT_EnableHardwareGapControl(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_TT_DisableHardwareGapControl(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_TT_EnableTimeMarkGapControl(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_TT_DisableTimeMarkGapControl(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_TT_SetNextIsGap(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_TT_SetEndOfGap(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_TT_ConfigExternalSyncPhase(FDCAN_HandleTypeDef *hfdcan, uint32_t TargetPhase);
HAL_StatusTypeDef HAL_FDCAN_TT_EnableExternalSynchronization(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_TT_DisableExternalSynchronization(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_TT_GetOperationStatus(const FDCAN_HandleTypeDef *hfdcan,
                                                  FDCAN_TTOperationStatusTypeDef *TTOpStatus);
/**
  * @}
  */

/** @addtogroup FDCAN_Exported_Functions_Group5
  * @{
  */
/* Interrupts management ******************************************************/
HAL_StatusTypeDef HAL_FDCAN_ConfigInterruptLines(FDCAN_HandleTypeDef *hfdcan, uint32_t ITList, uint32_t InterruptLine);
HAL_StatusTypeDef HAL_FDCAN_TT_ConfigInterruptLines(FDCAN_HandleTypeDef *hfdcan, uint32_t TTITList,
                                                    uint32_t InterruptLine);
HAL_StatusTypeDef HAL_FDCAN_ActivateNotification(FDCAN_HandleTypeDef *hfdcan, uint32_t ActiveITs,
                                                 uint32_t BufferIndexes);
HAL_StatusTypeDef HAL_FDCAN_DeactivateNotification(FDCAN_HandleTypeDef *hfdcan, uint32_t InactiveITs);
HAL_StatusTypeDef HAL_FDCAN_TT_ActivateNotification(FDCAN_HandleTypeDef *hfdcan, uint32_t ActiveTTITs);
HAL_StatusTypeDef HAL_FDCAN_TT_DeactivateNotification(FDCAN_HandleTypeDef *hfdcan, uint32_t InactiveTTITs);
void              HAL_FDCAN_IRQHandler(FDCAN_HandleTypeDef *hfdcan);
/**
  * @}
  */

/** @addtogroup FDCAN_Exported_Functions_Group6
  * @{
  */
/* Callback functions *********************************************************/
void HAL_FDCAN_ClockCalibrationCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t ClkCalibrationITs);
void HAL_FDCAN_TxEventFifoCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t TxEventFifoITs);
void HAL_FDCAN_RxFifo0Callback(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo0ITs);
void HAL_FDCAN_RxFifo1Callback(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo1ITs);
void HAL_FDCAN_TxFifoEmptyCallback(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_TxBufferCompleteCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndexes);
void HAL_FDCAN_TxBufferAbortCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndexes);
void HAL_FDCAN_RxBufferNewMessageCallback(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_HighPriorityMessageCallback(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_TimestampWraparoundCallback(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_TimeoutOccurredCallback(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_ErrorCallback(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_ErrorStatusCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t ErrorStatusITs);
void HAL_FDCAN_TT_ScheduleSyncCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t TTSchedSyncITs);
void HAL_FDCAN_TT_TimeMarkCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t TTTimeMarkITs);
void HAL_FDCAN_TT_StopWatchCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t SWTime, uint32_t SWCycleCount);
void HAL_FDCAN_TT_GlobalTimeCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t TTGlobTimeITs);
/**
  * @}
  */

/** @addtogroup FDCAN_Exported_Functions_Group7
  * @{
  */
/* Peripheral State functions *************************************************/
uint32_t HAL_FDCAN_GetError(const FDCAN_HandleTypeDef *hfdcan);
HAL_FDCAN_StateTypeDef HAL_FDCAN_GetState(const FDCAN_HandleTypeDef *hfdcan);
/**
  * @}
  */

/**
  * @}
  */

/* Private types -------------------------------------------------------------*/
/** @defgroup FDCAN_Private_Types FDCAN Private Types
  * @{
  */

/**
  * @}
  */

/* Private variables ---------------------------------------------------------*/
/** @defgroup FDCAN_Private_Variables FDCAN Private Variables
  * @{
  */

/**
  * @}
  */

/* Private constants ---------------------------------------------------------*/
/** @defgroup FDCAN_Private_Constants FDCAN Private Constants
  * @{
  */

/**
  * @}
  */

/* Private macros ------------------------------------------------------------*/
/** @defgroup FDCAN_Private_Macros FDCAN Private Macros
  * @{
  */
#define IS_FDCAN_FRAME_FORMAT(FORMAT) (((FORMAT) == FDCAN_FRAME_CLASSIC  ) || \
                                       ((FORMAT) == FDCAN_FRAME_FD_NO_BRS) || \
                                       ((FORMAT) == FDCAN_FRAME_FD_BRS   ))
#define IS_FDCAN_MODE(MODE) (((MODE) == FDCAN_MODE_NORMAL              ) || \
                             ((MODE) == FDCAN_MODE_RESTRICTED_OPERATION) || \
                             ((MODE) == FDCAN_MODE_BUS_MONITORING      ) || \
                             ((MODE) == FDCAN_MODE_INTERNAL_LOOPBACK   ) || \
                             ((MODE) == FDCAN_MODE_EXTERNAL_LOOPBACK   ))

#define IS_FDCAN_CLOCK_CALIBRATION(CALIBRATION) (((CALIBRATION) == FDCAN_CLOCK_CALIBRATION_DISABLE) || \
                                                 ((CALIBRATION) == FDCAN_CLOCK_CALIBRATION_ENABLE ))

#define IS_FDCAN_CKDIV(CKDIV) (((CKDIV) == FDCAN_CLOCK_DIV1 ) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV2 ) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV4 ) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV6 ) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV8 ) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV10) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV12) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV14) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV16) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV18) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV20) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV22) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV24) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV26) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV28) || \
                               ((CKDIV) == FDCAN_CLOCK_DIV30))
#define IS_FDCAN_NOMINAL_PRESCALER(PRESCALER) (((PRESCALER) >= 1U) && ((PRESCALER) <= 512U))
#define IS_FDCAN_NOMINAL_SJW(SJW) (((SJW) >= 1U) && ((SJW) <= 128U))
#define IS_FDCAN_NOMINAL_TSEG1(TSEG1) (((TSEG1) >= 1U) && ((TSEG1) <= 256U))
#define IS_FDCAN_NOMINAL_TSEG2(TSEG2) (((TSEG2) >= 1U) && ((TSEG2) <= 128U))
#define IS_FDCAN_DATA_PRESCALER(PRESCALER) (((PRESCALER) >= 1U) && ((PRESCALER) <= 32U))
#define IS_FDCAN_DATA_SJW(SJW) (((SJW) >= 1U) && ((SJW) <= 16U))
#define IS_FDCAN_DATA_TSEG1(TSEG1) (((TSEG1) >= 1U) && ((TSEG1) <= 32U))
#define IS_FDCAN_DATA_TSEG2(TSEG2) (((TSEG2) >= 1U) && ((TSEG2) <= 16U))
#define IS_FDCAN_MAX_VALUE(VALUE, _MAX_) ((VALUE) <= (_MAX_))
#define IS_FDCAN_MIN_VALUE(VALUE, _MIN_) ((VALUE) >= (_MIN_))
#define IS_FDCAN_DATA_SIZE(SIZE) (((SIZE) == FDCAN_DATA_BYTES_8 ) || \
                                  ((SIZE) == FDCAN_DATA_BYTES_12) || \
                                  ((SIZE) == FDCAN_DATA_BYTES_16) || \
                                  ((SIZE) == FDCAN_DATA_BYTES_20) || \
                                  ((SIZE) == FDCAN_DATA_BYTES_24) || \
                                  ((SIZE) == FDCAN_DATA_BYTES_32) || \
                                  ((SIZE) == FDCAN_DATA_BYTES_48) || \
                                  ((SIZE) == FDCAN_DATA_BYTES_64))
#define IS_FDCAN_TX_FIFO_QUEUE_MODE(MODE) (((MODE) == FDCAN_TX_FIFO_OPERATION ) || \
                                           ((MODE) == FDCAN_TX_QUEUE_OPERATION))
#define IS_FDCAN_ID_TYPE(ID_TYPE) (((ID_TYPE) == FDCAN_STANDARD_ID) || \
                                   ((ID_TYPE) == FDCAN_EXTENDED_ID))
#define IS_FDCAN_FILTER_CFG(CONFIG) (((CONFIG) == FDCAN_FILTER_DISABLE      ) || \
                                     ((CONFIG) == FDCAN_FILTER_TO_RXFIFO0   ) || \
                                     ((CONFIG) == FDCAN_FILTER_TO_RXFIFO1   ) || \
                                     ((CONFIG) == FDCAN_FILTER_REJECT       ) || \
                                     ((CONFIG) == FDCAN_FILTER_HP           ) || \
                                     ((CONFIG) == FDCAN_FILTER_TO_RXFIFO0_HP) || \
                                     ((CONFIG) == FDCAN_FILTER_TO_RXFIFO1_HP) || \
                                     ((CONFIG) == FDCAN_FILTER_TO_RXBUFFER  ))
#define IS_FDCAN_TX_LOCATION(LOCATION) (((LOCATION) == FDCAN_TX_BUFFER0 ) || ((LOCATION) == FDCAN_TX_BUFFER1 ) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER2 ) || ((LOCATION) == FDCAN_TX_BUFFER3 ) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER4 ) || ((LOCATION) == FDCAN_TX_BUFFER5 ) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER6 ) || ((LOCATION) == FDCAN_TX_BUFFER7 ) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER8 ) || ((LOCATION) == FDCAN_TX_BUFFER9 ) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER10) || ((LOCATION) == FDCAN_TX_BUFFER11) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER12) || ((LOCATION) == FDCAN_TX_BUFFER13) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER14) || ((LOCATION) == FDCAN_TX_BUFFER15) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER16) || ((LOCATION) == FDCAN_TX_BUFFER17) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER18) || ((LOCATION) == FDCAN_TX_BUFFER19) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER20) || ((LOCATION) == FDCAN_TX_BUFFER21) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER22) || ((LOCATION) == FDCAN_TX_BUFFER23) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER24) || ((LOCATION) == FDCAN_TX_BUFFER25) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER26) || ((LOCATION) == FDCAN_TX_BUFFER27) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER28) || ((LOCATION) == FDCAN_TX_BUFFER29) || \
                                        ((LOCATION) == FDCAN_TX_BUFFER30) || ((LOCATION) == FDCAN_TX_BUFFER31))
#define IS_FDCAN_RX_FIFO(FIFO) (((FIFO) == FDCAN_RX_FIFO0) || \
                                ((FIFO) == FDCAN_RX_FIFO1))
#define IS_FDCAN_RX_FIFO_MODE(MODE) (((MODE) == FDCAN_RX_FIFO_BLOCKING ) || \
                                     ((MODE) == FDCAN_RX_FIFO_OVERWRITE))
#define IS_FDCAN_STD_FILTER_TYPE(TYPE) (((TYPE) == FDCAN_FILTER_RANGE) || \
                                        ((TYPE) == FDCAN_FILTER_DUAL ) || \
                                        ((TYPE) == FDCAN_FILTER_MASK ))
#define IS_FDCAN_EXT_FILTER_TYPE(TYPE) (((TYPE) == FDCAN_FILTER_RANGE        ) || \
                                        ((TYPE) == FDCAN_FILTER_DUAL         ) || \
                                        ((TYPE) == FDCAN_FILTER_MASK         ) || \
                                        ((TYPE) == FDCAN_FILTER_RANGE_NO_EIDM))
#define IS_FDCAN_FRAME_TYPE(TYPE) (((TYPE) == FDCAN_DATA_FRAME  ) || \
                                   ((TYPE) == FDCAN_REMOTE_FRAME))
#define IS_FDCAN_DLC(DLC) (((DLC) == FDCAN_DLC_BYTES_0 ) || \
                           ((DLC) == FDCAN_DLC_BYTES_1 ) || \
                           ((DLC) == FDCAN_DLC_BYTES_2 ) || \
                           ((DLC) == FDCAN_DLC_BYTES_3 ) || \
                           ((DLC) == FDCAN_DLC_BYTES_4 ) || \
                           ((DLC) == FDCAN_DLC_BYTES_5 ) || \
                           ((DLC) == FDCAN_DLC_BYTES_6 ) || \
                           ((DLC) == FDCAN_DLC_BYTES_7 ) || \
                           ((DLC) == FDCAN_DLC_BYTES_8 ) || \
                           ((DLC) == FDCAN_DLC_BYTES_12) || \
                           ((DLC) == FDCAN_DLC_BYTES_16) || \
                           ((DLC) == FDCAN_DLC_BYTES_20) || \
                           ((DLC) == FDCAN_DLC_BYTES_24) || \
                           ((DLC) == FDCAN_DLC_BYTES_32) || \
                           ((DLC) == FDCAN_DLC_BYTES_48) || \
                           ((DLC) == FDCAN_DLC_BYTES_64))
#define IS_FDCAN_ESI(ESI) (((ESI) == FDCAN_ESI_ACTIVE ) || \
                           ((ESI) == FDCAN_ESI_PASSIVE))
#define IS_FDCAN_BRS(BRS) (((BRS) == FDCAN_BRS_OFF) || \
                           ((BRS) == FDCAN_BRS_ON ))
#define IS_FDCAN_FDF(FDF) (((FDF) == FDCAN_CLASSIC_CAN) || \
                           ((FDF) == FDCAN_FD_CAN     ))
#define IS_FDCAN_EFC(EFC) (((EFC) == FDCAN_NO_TX_EVENTS   ) || \
                           ((EFC) == FDCAN_STORE_TX_EVENTS))
#define IS_FDCAN_IT(IT) (((IT) & ~(FDCAN_IR_MASK | CCU_IR_MASK)) == 0U)
#define IS_FDCAN_TT_IT(IT) (((IT) & 0xFFF80000U) == 0U)
#define IS_FDCAN_FIFO_WATERMARK(FIFO) (((FIFO) == FDCAN_CFG_TX_EVENT_FIFO) || \
                                       ((FIFO) == FDCAN_CFG_RX_FIFO0     ) || \
                                       ((FIFO) == FDCAN_CFG_RX_FIFO1     ))
#define IS_FDCAN_NON_MATCHING(DESTINATION) (((DESTINATION) == FDCAN_ACCEPT_IN_RX_FIFO0) || \
                                            ((DESTINATION) == FDCAN_ACCEPT_IN_RX_FIFO1) || \
                                            ((DESTINATION) == FDCAN_REJECT            ))
#define IS_FDCAN_REJECT_REMOTE(DESTINATION) (((DESTINATION) == FDCAN_FILTER_REMOTE) || \
                                             ((DESTINATION) == FDCAN_REJECT_REMOTE))
#define IS_FDCAN_IT_LINE(IT_LINE) (((IT_LINE) == FDCAN_INTERRUPT_LINE0) || \
                                   ((IT_LINE) == FDCAN_INTERRUPT_LINE1))
#define IS_FDCAN_TIMESTAMP(OPERATION) (((OPERATION) == FDCAN_TIMESTAMP_INTERNAL) || \
                                       ((OPERATION) == FDCAN_TIMESTAMP_EXTERNAL))
#define IS_FDCAN_TIMESTAMP_PRESCALER(PRESCALER) (((PRESCALER) == FDCAN_TIMESTAMP_PRESC_1 ) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_2 ) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_3 ) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_4 ) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_5 ) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_6 ) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_7 ) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_8 ) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_9 ) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_10) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_11) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_12) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_13) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_14) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_15) || \
                                                 ((PRESCALER) == FDCAN_TIMESTAMP_PRESC_16))
#define IS_FDCAN_TIMEOUT(OPERATION) (((OPERATION) == FDCAN_TIMEOUT_CONTINUOUS   ) || \
                                     ((OPERATION) == FDCAN_TIMEOUT_TX_EVENT_FIFO) || \
                                     ((OPERATION) == FDCAN_TIMEOUT_RX_FIFO0     ) || \
                                     ((OPERATION) == FDCAN_TIMEOUT_RX_FIFO1     ))
#define IS_FDCAN_CALIBRATION_FIELD_LENGTH(LENGTH) (((LENGTH) == FDCAN_CALIB_FIELD_LENGTH_32) || \
                                                   ((LENGTH) == FDCAN_CALIB_FIELD_LENGTH_64))
#define IS_FDCAN_CALIBRATION_COUNTER(COUNTER) (((COUNTER) == FDCAN_CALIB_TIME_QUANTA_COUNTER ) || \
                                               ((COUNTER) == FDCAN_CALIB_CLOCK_PERIOD_COUNTER) || \
                                               ((COUNTER) == FDCAN_CALIB_WATCHDOG_COUNTER    ))
#define IS_FDCAN_TT_REFERENCE_MESSAGE_PAYLOAD(PAYLOAD) (((PAYLOAD) == FDCAN_TT_REF_MESSAGE_NO_PAYLOAD ) || \
                                                        ((PAYLOAD) == FDCAN_TT_REF_MESSAGE_ADD_PAYLOAD))
#define IS_FDCAN_TT_REPEAT_FACTOR(FACTOR) (((FACTOR) == FDCAN_TT_REPEAT_EVERY_CYCLE     ) || \
                                           ((FACTOR) == FDCAN_TT_REPEAT_EVERY_2ND_CYCLE ) || \
                                           ((FACTOR) == FDCAN_TT_REPEAT_EVERY_4TH_CYCLE ) || \
                                           ((FACTOR) == FDCAN_TT_REPEAT_EVERY_8TH_CYCLE ) || \
                                           ((FACTOR) == FDCAN_TT_REPEAT_EVERY_16TH_CYCLE) || \
                                           ((FACTOR) == FDCAN_TT_REPEAT_EVERY_32ND_CYCLE) || \
                                           ((FACTOR) == FDCAN_TT_REPEAT_EVERY_64TH_CYCLE))
#define IS_FDCAN_TT_TRIGGER_TYPE(TYPE) (((TYPE) == FDCAN_TT_TX_REF_TRIGGER        ) || \
                                        ((TYPE) == FDCAN_TT_TX_REF_TRIGGER_GAP    ) || \
                                        ((TYPE) == FDCAN_TT_TX_TRIGGER_SINGLE     ) || \
                                        ((TYPE) == FDCAN_TT_TX_TRIGGER_CONTINUOUS ) || \
                                        ((TYPE) == FDCAN_TT_TX_TRIGGER_ARBITRATION) || \
                                        ((TYPE) == FDCAN_TT_TX_TRIGGER_MERGED     ) || \
                                        ((TYPE) == FDCAN_TT_WATCH_TRIGGER         ) || \
                                        ((TYPE) == FDCAN_TT_WATCH_TRIGGER_GAP     ) || \
                                        ((TYPE) == FDCAN_TT_RX_TRIGGER            ) || \
                                        ((TYPE) == FDCAN_TT_TIME_BASE_TRIGGER     ) || \
                                        ((TYPE) == FDCAN_TT_END_OF_LIST           ))
#define IS_FDCAN_TT_TM_EVENT_INTERNAL(EVENT) (((EVENT) == FDCAN_TT_TM_NO_INTERNAL_EVENT ) || \
                                              ((EVENT) == FDCAN_TT_TM_GEN_INTERNAL_EVENT))
#define IS_FDCAN_TT_TM_EVENT_EXTERNAL(EVENT) (((EVENT) == FDCAN_TT_TM_NO_EXTERNAL_EVENT ) || \
                                              ((EVENT) == FDCAN_TT_TM_GEN_EXTERNAL_EVENT))
#define IS_FDCAN_OPERATION_MODE(MODE) (((MODE) == FDCAN_TT_COMMUNICATION_LEVEL1 ) || \
                                       ((MODE) == FDCAN_TT_COMMUNICATION_LEVEL2 ) || \
                                       ((MODE) == FDCAN_TT_COMMUNICATION_LEVEL0 ))
#define IS_FDCAN_TT_OPERATION(OPERATION) (((OPERATION) == FDCAN_STRICTLY_TT_OPERATION      ) || \
                                          ((OPERATION) == FDCAN_EXT_EVT_SYNC_TT_OPERATION))
#define IS_FDCAN_TT_TIME_MASTER(FUNCTION) (((FUNCTION) == FDCAN_TT_SLAVE           ) || \
                                           ((FUNCTION) == FDCAN_TT_POTENTIAL_MASTER))
#define IS_FDCAN_TT_EXTERNAL_CLK_SYNC(SYNC) (((SYNC) == FDCAN_TT_EXT_CLK_SYNC_DISABLE) || \
                                             ((SYNC) == FDCAN_TT_EXT_CLK_SYNC_ENABLE ))
#define IS_FDCAN_TT_GLOBAL_TIME_FILTERING(FILTERING) (((FILTERING) == FDCAN_TT_GLOB_TIME_FILT_DISABLE) || \
                                                      ((FILTERING) == FDCAN_TT_GLOB_TIME_FILT_ENABLE ))
#define IS_FDCAN_TT_AUTO_CLK_CALIBRATION(CALIBRATION) (((CALIBRATION) == FDCAN_TT_AUTO_CLK_CALIB_DISABLE) || \
                                                       ((CALIBRATION) == FDCAN_TT_AUTO_CLK_CALIB_ENABLE ))
#define IS_FDCAN_TT_EVENT_TRIGGER_POLARITY(POLARITY) (((POLARITY) == FDCAN_TT_EVT_TRIG_POL_RISING ) || \
                                                      ((POLARITY) == FDCAN_TT_EVT_TRIG_POL_FALLING))
#define IS_FDCAN_TT_BASIC_CYCLES_NUMBER(NUMBER) (((NUMBER) == FDCAN_TT_CYCLES_PER_MATRIX_1 ) || \
                                                 ((NUMBER) == FDCAN_TT_CYCLES_PER_MATRIX_2 ) || \
                                                 ((NUMBER) == FDCAN_TT_CYCLES_PER_MATRIX_4 ) || \
                                                 ((NUMBER) == FDCAN_TT_CYCLES_PER_MATRIX_8 ) || \
                                                 ((NUMBER) == FDCAN_TT_CYCLES_PER_MATRIX_16) || \
                                                 ((NUMBER) == FDCAN_TT_CYCLES_PER_MATRIX_32) || \
                                                 ((NUMBER) == FDCAN_TT_CYCLES_PER_MATRIX_64))
#define IS_FDCAN_TT_CYCLE_START_SYNC(SYNC) (((SYNC) == FDCAN_TT_NO_SYNC_PULSE         ) || \
                                            ((SYNC) == FDCAN_TT_SYNC_BASIC_CYCLE_START) || \
                                            ((SYNC) == FDCAN_TT_SYNC_MATRIX_START     ))
#define IS_FDCAN_TT_TX_ENABLE_WINDOW(NTU) (((NTU) >= 1U) && ((NTU) <= 16U))
#define IS_FDCAN_TT_TUR_NUMERATOR(NUMERATOR) (((NUMERATOR) >= 0x10000U) && ((NUMERATOR) <= 0x1FFFFU))
#define IS_FDCAN_TT_TUR_DENOMINATOR(DENOMINATOR) (((DENOMINATOR) >= 0x0001U) && ((DENOMINATOR) <= 0x3FFFU))
#define IS_FDCAN_TT_TUR_LEVEL_1(NC,DC) ((NC) >= (4U * (DC)))
#define IS_FDCAN_TT_TUR_LEVEL_0_2(NC,DC) ((NC) >= (8U * (DC)))
#define IS_FDCAN_TT_STOP_WATCH_TRIGGER(TRIGGER) (((TRIGGER) == FDCAN_TT_STOP_WATCH_TRIGGER_0) || \
                                                 ((TRIGGER) == FDCAN_TT_STOP_WATCH_TRIGGER_1) || \
                                                 ((TRIGGER) == FDCAN_TT_STOP_WATCH_TRIGGER_2) || \
                                                 ((TRIGGER) == FDCAN_TT_STOP_WATCH_TRIGGER_3))
#define IS_FDCAN_TT_EVENT_TRIGGER(TRIGGER) (((TRIGGER) == FDCAN_TT_EVENT_TRIGGER_0) || \
                                            ((TRIGGER) == FDCAN_TT_EVENT_TRIGGER_1) || \
                                            ((TRIGGER) == FDCAN_TT_EVENT_TRIGGER_2) || \
                                            ((TRIGGER) == FDCAN_TT_EVENT_TRIGGER_3))
#define IS_FDCAN_TT_TIME_PRESET(TIME) (((TIME) <= 0xFFFFU) && ((TIME) != 0x8000U))
#define IS_FDCAN_TT_STOP_WATCH_SOURCE(SOURCE) (((SOURCE) == FDCAN_TT_STOP_WATCH_DISABLED   ) || \
                                               ((SOURCE) == FDCAN_TT_STOP_WATCH_CYCLE_TIME ) || \
                                               ((SOURCE) == FDCAN_TT_STOP_WATCH_LOCAL_TIME ) || \
                                               ((SOURCE) == FDCAN_TT_STOP_WATCH_GLOBAL_TIME))
#define IS_FDCAN_TT_STOP_WATCH_POLARITY(POLARITY) (((POLARITY) == FDCAN_TT_STOP_WATCH_RISING ) || \
                                                   ((POLARITY) == FDCAN_TT_STOP_WATCH_FALLING))
#define IS_FDCAN_TT_REGISTER_TIME_MARK_SOURCE(SOURCE) (((SOURCE) == FDCAN_TT_REG_TIMEMARK_DIABLED ) || \
                                                       ((SOURCE) == FDCAN_TT_REG_TIMEMARK_CYC_TIME) || \
                                                       ((SOURCE) == FDCAN_TT_REG_TIMEMARK_LOC_TIME) || \
                                                       ((SOURCE) == FDCAN_TT_REG_TIMEMARK_GLO_TIME))

#define FDCAN_CHECK_IT_SOURCE(__IE__, __IT__)  ((((__IE__) & (__IT__)) == (__IT__)) ? SET : RESET)

#define FDCAN_CHECK_FLAG(__IR__, __FLAG__) ((((__IR__) & (__FLAG__)) == (__FLAG__)) ? SET : RESET)
/**
  * @}
  */

/* Private functions prototypes ----------------------------------------------*/
/** @defgroup FDCAN_Private_Functions_Prototypes FDCAN Private Functions Prototypes
  * @{
  */

/**
  * @}
  */

/* Private functions ---------------------------------------------------------*/
/** @defgroup FDCAN_Private_Functions FDCAN Private Functions
  * @{
  */

/**
  * @}
  */
/**
  * @}
  */

/**
  * @}
  */
#endif /* FDCAN1 */

#ifdef __cplusplus
}
#endif

#endif /* STM32H7xx_HAL_FDCAN_H */


