/*
 * Copyright 2023 Google LLC
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Input event codes, for codes available in Linux, use the same values as in
 * https://elixir.bootlin.com/linux/latest/source/include/uapi/linux/input-event-codes.h
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_INPUT_INPUT_EVENT_CODES_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_INPUT_INPUT_EVENT_CODES_H_

/**
 * @defgroup input_events Input Event Definitions
 * @ingroup input_interface
 * @{
 */


/**
 * @name Input event types.
 * @anchor INPUT_EV_CODES
 * @{
 */
#define INPUT_EV_KEY 0x01
#define INPUT_EV_REL 0x02
#define INPUT_EV_ABS 0x03
#define INPUT_EV_MSC 0x04
#define INPUT_EV_DEVICE 0xef
#define INPUT_EV_VENDOR_START 0xf0
#define INPUT_EV_VENDOR_STOP 0xff
/** @} */

/**
 * @name Input event KEY codes.
 * @anchor INPUT_KEY_CODES
 * @{
 */
#define INPUT_KEY_RESERVED 0

#define INPUT_KEY_0 11
#define INPUT_KEY_1 2
#define INPUT_KEY_2 3
#define INPUT_KEY_3 4
#define INPUT_KEY_4 5
#define INPUT_KEY_5 6
#define INPUT_KEY_6 7
#define INPUT_KEY_7 8
#define INPUT_KEY_8 9
#define INPUT_KEY_9 10
#define INPUT_KEY_A 30
#define INPUT_KEY_APOSTROPHE 40
#define INPUT_KEY_B 48
#define INPUT_KEY_BACK 158
#define INPUT_KEY_BACKSLASH 43
#define INPUT_KEY_BACKSPACE 14
#define INPUT_KEY_BLUETOOTH 237
#define INPUT_KEY_BRIGHTNESSDOWN 224
#define INPUT_KEY_BRIGHTNESSUP 225
#define INPUT_KEY_C 46
#define INPUT_KEY_CAPSLOCK 58
#define INPUT_KEY_COFFEE 152
#define INPUT_KEY_COMMA 51
#define INPUT_KEY_COMPOSE 127
#define INPUT_KEY_CONNECT 218
#define INPUT_KEY_D 32
#define INPUT_KEY_DELETE 111
#define INPUT_KEY_DOT 52
#define INPUT_KEY_DOWN 108
#define INPUT_KEY_E 18
#define INPUT_KEY_END 107
#define INPUT_KEY_ENTER 28
#define INPUT_KEY_EQUAL 13
#define INPUT_KEY_ESC 1
#define INPUT_KEY_F 33
#define INPUT_KEY_F1 59
#define INPUT_KEY_F10 68
#define INPUT_KEY_F11 87
#define INPUT_KEY_F12 88
#define INPUT_KEY_F13 183
#define INPUT_KEY_F14 184
#define INPUT_KEY_F15 185
#define INPUT_KEY_F16 186
#define INPUT_KEY_F17 187
#define INPUT_KEY_F18 188
#define INPUT_KEY_F19 189
#define INPUT_KEY_F2 60
#define INPUT_KEY_F20 190
#define INPUT_KEY_F21 191
#define INPUT_KEY_F22 192
#define INPUT_KEY_F23 193
#define INPUT_KEY_F24 194
#define INPUT_KEY_F3 61
#define INPUT_KEY_F4 62
#define INPUT_KEY_F5 63
#define INPUT_KEY_F6 64
#define INPUT_KEY_F7 65
#define INPUT_KEY_F8 66
#define INPUT_KEY_F9 67
#define INPUT_KEY_FASTFORWARD 208
#define INPUT_KEY_FORWARD 159
#define INPUT_KEY_G 34
#define INPUT_KEY_GRAVE 41
#define INPUT_KEY_H 35
#define INPUT_KEY_HOME 102
#define INPUT_KEY_I 23
#define INPUT_KEY_INSERT 110
#define INPUT_KEY_J 36
#define INPUT_KEY_K 37
#define INPUT_KEY_KP0 82
#define INPUT_KEY_KP1 79
#define INPUT_KEY_KP2 80
#define INPUT_KEY_KP3 81
#define INPUT_KEY_KP4 75
#define INPUT_KEY_KP5 76
#define INPUT_KEY_KP6 77
#define INPUT_KEY_KP7 71
#define INPUT_KEY_KP8 72
#define INPUT_KEY_KP9 73
#define INPUT_KEY_KPASTERISK 55
#define INPUT_KEY_KPCOMMA 121
#define INPUT_KEY_KPDOT 83
#define INPUT_KEY_KPENTER 96
#define INPUT_KEY_KPEQUAL 117
#define INPUT_KEY_KPMINUS 74
#define INPUT_KEY_KPPLUS 78
#define INPUT_KEY_KPPLUSMINUS 118
#define INPUT_KEY_KPSLASH 98
#define INPUT_KEY_L 38
#define INPUT_KEY_LEFT 105
#define INPUT_KEY_LEFTALT 56
#define INPUT_KEY_LEFTBRACE 26
#define INPUT_KEY_LEFTCTRL 29
#define INPUT_KEY_LEFTMETA 125
#define INPUT_KEY_LEFTSHIFT 42
#define INPUT_KEY_M 50
#define INPUT_KEY_MENU 139
#define INPUT_KEY_MINUS 12
#define INPUT_KEY_MUTE 113
#define INPUT_KEY_N 49
#define INPUT_KEY_NUMLOCK 69
#define INPUT_KEY_O 24
#define INPUT_KEY_P 25
#define INPUT_KEY_PAGEDOWN 109
#define INPUT_KEY_PAGEUP 104
#define INPUT_KEY_PAUSE 119
#define INPUT_KEY_PLAY 207
#define INPUT_KEY_POWER 116
#define INPUT_KEY_PRINT 210
#define INPUT_KEY_Q 16
#define INPUT_KEY_R 19
#define INPUT_KEY_RIGHT 106
#define INPUT_KEY_RIGHTALT 100
#define INPUT_KEY_RIGHTBRACE 27
#define INPUT_KEY_RIGHTCTRL 97
#define INPUT_KEY_RIGHTMETA 126
#define INPUT_KEY_RIGHTSHIFT 54
#define INPUT_KEY_S 31
#define INPUT_KEY_SCALE 120
#define INPUT_KEY_SCROLLLOCK 70
#define INPUT_KEY_SEMICOLON 39
#define INPUT_KEY_SLASH 53
#define INPUT_KEY_SLEEP 142
#define INPUT_KEY_SPACE 57
#define INPUT_KEY_SYSRQ 99
#define INPUT_KEY_T 20
#define INPUT_KEY_TAB 15
#define INPUT_KEY_U 22
#define INPUT_KEY_UP 103
#define INPUT_KEY_UWB 239
#define INPUT_KEY_V 47
#define INPUT_KEY_VOLUMEDOWN 114
#define INPUT_KEY_VOLUMEUP 115
#define INPUT_KEY_W 17
#define INPUT_KEY_WAKEUP 143
#define INPUT_KEY_WLAN 238
#define INPUT_KEY_X 45
#define INPUT_KEY_Y 21
#define INPUT_KEY_Z 44
/** @} */


/**
 * @name Input event BTN codes.
 * @anchor INPUT_BTN_CODES
 * @{
 */
#define INPUT_BTN_0 0x100
#define INPUT_BTN_1 0x101
#define INPUT_BTN_2 0x102
#define INPUT_BTN_3 0x103
#define INPUT_BTN_4 0x104
#define INPUT_BTN_5 0x105
#define INPUT_BTN_6 0x106
#define INPUT_BTN_7 0x107
#define INPUT_BTN_8 0x108
#define INPUT_BTN_9 0x109
#define INPUT_BTN_A INPUT_BTN_SOUTH
#define INPUT_BTN_B INPUT_BTN_EAST
#define INPUT_BTN_BACK 0x116
#define INPUT_BTN_C 0x132
#define INPUT_BTN_DPAD_DOWN 0x221
#define INPUT_BTN_DPAD_LEFT 0x222
#define INPUT_BTN_DPAD_RIGHT 0x223
#define INPUT_BTN_DPAD_UP 0x220
#define INPUT_BTN_EAST 0x131
#define INPUT_BTN_EXTRA 0x114
#define INPUT_BTN_FORWARD 0x115
#define INPUT_BTN_GEAR_DOWN 0x150
#define INPUT_BTN_GEAR_UP 0x151
#define INPUT_BTN_LEFT 0x110
#define INPUT_BTN_MIDDLE 0x112
#define INPUT_BTN_MODE 0x13c
#define INPUT_BTN_NORTH 0x133
#define INPUT_BTN_RIGHT 0x111
#define INPUT_BTN_SELECT 0x13a
#define INPUT_BTN_SIDE 0x113
#define INPUT_BTN_SOUTH 0x130
#define INPUT_BTN_START 0x13b
#define INPUT_BTN_TASK 0x117
#define INPUT_BTN_THUMBL 0x13d
#define INPUT_BTN_THUMBR 0x13e
#define INPUT_BTN_TL 0x136
#define INPUT_BTN_TL2 0x138
#define INPUT_BTN_TOUCH 0x14a
#define INPUT_BTN_TR 0x137
#define INPUT_BTN_TR2 0x139
#define INPUT_BTN_WEST 0x134
#define INPUT_BTN_X INPUT_BTN_NORTH
#define INPUT_BTN_Y INPUT_BTN_WEST
#define INPUT_BTN_Z 0x135
/** @} */

/**
 * @name Input event ABS codes.
 * @anchor INPUT_ABS_CODES
 * @{
 */
#define INPUT_ABS_BRAKE 0x0a
#define INPUT_ABS_GAS 0x09
#define INPUT_ABS_MT_SLOT 0x2f
#define INPUT_ABS_RUDDER 0x07
#define INPUT_ABS_RX 0x03
#define INPUT_ABS_RY 0x04
#define INPUT_ABS_RZ 0x05
#define INPUT_ABS_THROTTLE 0x06
#define INPUT_ABS_WHEEL 0x08
#define INPUT_ABS_X 0x00
#define INPUT_ABS_Y 0x01
#define INPUT_ABS_Z 0x02
/** @} */

/**
 * @name Input event REL codes.
 * @anchor INPUT_REL_CODES
 * @{
 */
#define INPUT_REL_DIAL 0x07
#define INPUT_REL_HWHEEL 0x06
#define INPUT_REL_MISC 0x09
#define INPUT_REL_RX 0x03
#define INPUT_REL_RY 0x04
#define INPUT_REL_RZ 0x05
#define INPUT_REL_WHEEL 0x08
#define INPUT_REL_X 0x00
#define INPUT_REL_Y 0x01
#define INPUT_REL_Z 0x02
/** @} */

/**
 * @name Input event MSC codes.
 * @anchor INPUT_MSC_CODES
 * @{
 */
#define INPUT_MSC_SCAN 0x04
/** @} */

/** @} */

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_INPUT_INPUT_EVENT_CODES_H_ */
