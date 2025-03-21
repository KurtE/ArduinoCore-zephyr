/*
 * Copyright 2024 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _USB_DEVICE_MCUX_DRV_PORT_H_
#define _USB_DEVICE_MCUX_DRV_PORT_H_

/*! @brief The setup packet size of USB control transfer. */
#define USB_SETUP_PACKET_SIZE (8U)
/*! @brief Control endpoint index */
#define USB_CONTROL_ENDPOINT (0U)
/*! @brief  USB endpoint mask */
#define USB_ENDPOINT_NUMBER_MASK (0x0FU)
/*! @brief Control endpoint maxPacketSize */
#define USB_CONTROL_MAX_PACKET_SIZE (64U)
/*! @brief the endpoint callback length of cancelled transfer */
#define USB_CANCELLED_TRANSFER_LENGTH (0xFFFFFFFFU)
/*! @brief Macro to define controller handle */
#define usb_device_controller_handle usb_device_handle

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
    kUSB_DeviceNotifySOF,
#if (defined(USB_DEVICE_CONFIG_CHARGER_DETECT) && (USB_DEVICE_CONFIG_CHARGER_DETECT > 0U))
    kUSB_DeviceNotifyDcdDetectFinished,
#endif
} usb_device_notification_t;

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
    kUSB_DeviceControlPreSetDeviceAddress,
#if defined(USB_DEVICE_CONFIG_GET_SOF_COUNT) && (USB_DEVICE_CONFIG_GET_SOF_COUNT > 0U)
    kUSB_DeviceControlGetCurrentFrameCount,
#endif
} usb_device_control_type_t;

/*! @brief Endpoint initialization structure */
typedef struct _usb_device_endpoint_init_struct
{
    uint16_t maxPacketSize;
    uint8_t endpointAddress;
    uint8_t transferType;
    uint8_t zlt;
    uint8_t interval;
} usb_device_endpoint_init_struct_t;

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
    usb_device_controller_handle controllerHandle;
} usb_device_struct_t;

/*! @brief Device notification message structure */
typedef struct _usb_device_callback_message_struct
{
    uint8_t *buffer;
    uint32_t length;
    uint8_t code;
    uint8_t isSetup;
} usb_device_callback_message_struct_t;

/*! @brief Endpoint status structure */
typedef struct _usb_device_endpoint_status_struct
{
    uint8_t endpointAddress;
    uint16_t endpointStatus;
} usb_device_endpoint_status_struct_t;

/*! @brief Defines endpoint state */
typedef enum _usb_endpoint_status
{
    kUSB_DeviceEndpointStateIdle = 0U,
    kUSB_DeviceEndpointStateStalled,
} usb_device_endpoint_status_t;

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

#if ((defined USB_DEVICE_CONFIG_EHCI) && (USB_DEVICE_CONFIG_EHCI))
/*!
 * @brief Device EHCI ISR function.
 *
 * The function is the EHCI interrupt service routine.
 *
 * @param[in] deviceHandle The device handle got from #USB_DeviceInit.
 */
extern void USB_DeviceEhciIsrFunction(void *deviceHandle);
#endif

#if ((defined USB_DEVICE_CONFIG_LPCIP3511HS) && (USB_DEVICE_CONFIG_LPCIP3511HS)) ||\
    ((defined USB_DEVICE_CONFIG_LPCIP3511FS) && (USB_DEVICE_CONFIG_LPCIP3511FS))
/*!
 * @brief Device LPC USB ISR function.
 *
 * The function is the LPC USB interrupt service routine.
 *
 * @param[in] deviceHandle The device handle got from #USB_DeviceInit.
 */
extern void USB_DeviceLpcIp3511IsrFunction(void *deviceHandle);
#endif

#endif /* _USB_DEVICE_MCUX_DRV_PORT_H_ */
