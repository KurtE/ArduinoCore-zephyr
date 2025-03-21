/*
 * Copyright (c) 2015 - 2016, Freescale Semiconductor, Inc.
 * Copyright 2016 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __USB_DEVICE_DCI_H__
#define __USB_DEVICE_DCI_H__

/*!
 * @addtogroup usb_device_controller_driver
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief Macro to define controller handle */
#define usb_device_controller_handle usb_device_handle
#define USB_DEVICE_MESSAGES_SIZE \
    (sizeof(uint32_t) * (1U + (sizeof(usb_device_callback_message_struct_t) - 1U) / sizeof(uint32_t)))
/*! @brief Available notify types for device notification */
typedef enum _usb_device_notification
{
    kUSB_DeviceNotifyBusReset = 0x10U,
    kUSB_DeviceNotifySuspend,
    kUSB_DeviceNotifyResume,
    kUSB_DeviceNotifyLPMSleep,
    kUSB_DeviceNotifyLPMResume,
    kUSB_DeviceNotifyError,
    kUSB_DeviceNotifyDetach,
    kUSB_DeviceNotifyAttach,
#if (defined(USB_DEVICE_CONFIG_SOF_NOTIFICATIONS) && (USB_DEVICE_CONFIG_SOF_NOTIFICATIONS > 0U))
    kUSB_DeviceNotifySOF,
#endif
#if (defined(USB_DEVICE_CONFIG_CHARGER_DETECT) && (USB_DEVICE_CONFIG_CHARGER_DETECT > 0U))
    kUSB_DeviceNotifyDcdDetectFinished,
#endif
} usb_device_notification_t;

/*! @brief Device notification message structure */
typedef struct _usb_device_callback_message_struct
{
    uint8_t *buffer;
    uint32_t length;
    uint8_t code;
    uint8_t isSetup;
} usb_device_callback_message_struct_t;

/*! @brief Control type for controller */
typedef enum _usb_device_control_type
{
    kUSB_DeviceControlRun = 0U,
    kUSB_DeviceControlStop,
    kUSB_DeviceControlEndpointInit,
    kUSB_DeviceControlEndpointDeinit,
    kUSB_DeviceControlEndpointStall,
    kUSB_DeviceControlEndpointUnstall,
    kUSB_DeviceControlGetDeviceStatus,
    kUSB_DeviceControlGetEndpointStatus,
    kUSB_DeviceControlSetDeviceAddress,
    kUSB_DeviceControlGetSynchFrame,
    kUSB_DeviceControlResume,
    kUSB_DeviceControlSleepResume,
    kUSB_DeviceControlSuspend,
    kUSB_DeviceControlSleep,
    kUSB_DeviceControlSetDefaultStatus,
    kUSB_DeviceControlGetSpeed,
    kUSB_DeviceControlGetOtgStatus,
    kUSB_DeviceControlSetOtgStatus,
    kUSB_DeviceControlSetTestMode,
    kUSB_DeviceControlGetRemoteWakeUp,
#if (defined(USB_DEVICE_CONFIG_CHARGER_DETECT) && (USB_DEVICE_CONFIG_CHARGER_DETECT > 0U))
    kUSB_DeviceControlDcdDisable,
    kUSB_DeviceControlDcdEnable,
#endif
    kUSB_DeviceControlPreSetDeviceAddress,
    kUSB_DeviceControlUpdateHwTick,
#if defined(USB_DEVICE_CONFIG_GET_SOF_COUNT) && (USB_DEVICE_CONFIG_GET_SOF_COUNT > 0U)
    kUSB_DeviceControlGetCurrentFrameCount,
#endif
} usb_device_control_type_t;

/*! @brief USB device controller initialization function typedef */
typedef usb_status_t (*usb_device_controller_init_t)(uint8_t controllerId,
                                                     usb_device_handle handle,
                                                     usb_device_controller_handle *controllerHandle);

/*! @brief USB device controller de-initialization function typedef */
typedef usb_status_t (*usb_device_controller_deinit_t)(usb_device_controller_handle controllerHandle);

/*! @brief USB device controller send data function typedef */
typedef usb_status_t (*usb_device_controller_send_t)(usb_device_controller_handle controllerHandle,
                                                     uint8_t endpointAddress,
                                                     uint8_t *buffer,
                                                     uint32_t length);

/*! @brief USB device controller receive data function typedef */
typedef usb_status_t (*usb_device_controller_recv_t)(usb_device_controller_handle controllerHandle,
                                                     uint8_t endpointAddress,
                                                     uint8_t *buffer,
                                                     uint32_t length);

/*! @brief USB device controller cancel transfer function in a specified endpoint typedef */
typedef usb_status_t (*usb_device_controller_cancel_t)(usb_device_controller_handle controllerHandle,
                                                       uint8_t endpointAddress);

/*! @brief USB device controller control function typedef */
typedef usb_status_t (*usb_device_controller_control_t)(usb_device_controller_handle controllerHandle,
                                                        usb_device_control_type_t command,
                                                        void *param);

/*! @brief USB device controller interface structure */
typedef struct _usb_device_controller_interface_struct
{
    usb_device_controller_init_t deviceInit;
    usb_device_controller_deinit_t deviceDeinit;
    usb_device_controller_send_t deviceSend;
    usb_device_controller_recv_t deviceRecv;
    usb_device_controller_cancel_t deviceCancel;
    usb_device_controller_control_t deviceControl;
} usb_device_controller_interface_struct_t;

/*! @brief USB device status structure */
typedef struct _usb_device_struct
{
#if ((defined(USB_DEVICE_CONFIG_REMOTE_WAKEUP)) && (USB_DEVICE_CONFIG_REMOTE_WAKEUP > 0U)) || \
    (defined(FSL_FEATURE_SOC_USB_ANALOG_COUNT) && (FSL_FEATURE_SOC_USB_ANALOG_COUNT > 0U))
    volatile uint64_t hwTick;
#endif
    usb_device_controller_handle controllerHandle;
    const usb_device_controller_interface_struct_t *controllerInterface;
#if USB_DEVICE_CONFIG_USE_TASK
    OSA_MSGQ_HANDLE_DEFINE(notificationQueueBuffer,
                           USB_DEVICE_CONFIG_MAX_MESSAGES,
                           USB_DEVICE_MESSAGES_SIZE);
    osa_msgq_handle_t notificationQueue;
#endif
    usb_device_callback_t deviceCallback;
    usb_device_endpoint_callback_struct_t
        epCallback[USB_DEVICE_CONFIG_ENDPOINTS << 1U];
    uint8_t deviceAddress;
    uint8_t controllerId;
    uint8_t state;
#if ((defined(USB_DEVICE_CONFIG_REMOTE_WAKEUP)) && (USB_DEVICE_CONFIG_REMOTE_WAKEUP > 0U))
    uint8_t remotewakeup;
#endif
    uint8_t isResetting;
#if (defined(USB_DEVICE_CONFIG_USE_TASK) && (USB_DEVICE_CONFIG_USE_TASK > 0U))
    uint8_t epCallbackDirectly;
#endif
} usb_device_struct_t;

/*******************************************************************************
 * API
 ******************************************************************************/
/*!
 * @brief Notify the device that the controller status changed.
 *
 * This function is used to notify the device that the controller status changed.
 *
 * @param handle                 The device handle. It equals the value returned from USB_DeviceInit.
 * @param message                The device callback message handle.
 *
 * @return A USB error code or kStatus_USB_Success.
 */
usb_status_t USB_DeviceNotificationTrigger(void *handle, void *msg);
/*! @}*/

#endif /* __USB_DEVICE_DCI_H__ */
