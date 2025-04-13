/*
 * Copyright (c) 2024 Arduino SA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_PINNAMES_H
#define ZEPHYR_PINNAMES_H


typedef enum {
    PH_15=0,
    PK_1 = 1,
    PJ_11 = 2,
    PG_7 = 3,
    PC_7 = 4,
    PC_6 = 5,
    PA_8 = 6,
    PI_0 = 7,
    PC_3 = 8,
    PI_1 = 9,
    PC_2 = 10,
    PH_8 = 11,
    PH_7 = 12,
    PA_10 = 13,
    PA1_9 = 14,
    PZ_0 = 15,
    PZ_1 = 16,
    PZ_2 = 17,
    PZ_3 = 18,
    PZ_4 = 19,
    PZ_5 = 20,
//  PC_2 = 21,
//  PC_3 = 22,
    PA_4 = 23,
    PA_6 = 24,
    PK_5 = 25,
    PK_6 = 26,
    PK_7 = 27,
    PA_0 = 28,
    PA_11 = 29,
    PA_12 = 30,
    PA_13 = 31,
    PA_14 = 32,
    PB_2 = 33,
    PB_3 = 34,
    PB_4 = 35,
    PB_6 = 36,
    PB_7 = 37,
    PB_8 = 38,
    PB_9 = 39,
    PB_14 = 40,
    PB_15 = 41,
    PC_13 = 42,
    PC_15 = 43,
    PD_3 = 44,
    PD_4 = 45,
    PD_5 = 46,
    PD_6 = 47,
    PD_7 = 48,
    PE_2 = 49,
    PE_3 = 50,
    PG_3 = 51,
    PG_9 = 52,
    PG_10 = 53,
    PG_14 = 54,
    PH_6 = 55,
    PH_9 = 56,
    PH_10 = 57,
    PH_11 = 58,
    PH_12 = 59,
    PH_13 = 60,
    PH_14 = 61,
    PI_2 = 62,
    PI_3 = 63,
    PI_4 = 64,
    PI_5 = 65,
    PI_6 = 66,
    PI_7 = 67,
    PI_8 = 68,
    PI_9 = 69,
    PI_10 = 70,
    PI_13 = 71,
    PI_14 = 72,
    PI_15 = 73,
    PJ_6 = 74,
    PJ_7 = 75,
    PJ_8 = 76,
    PJ_9 = 77,
    PJ_10 = 78,

    /**** ADC internal channels ****/

    ADC_TEMP = 0xF0, // Internal pin virtual value
    ADC_VREF = 0xF1, // Internal pin virtual value
    ADC_VBAT = 0xF2, // Internal pin virtual value

    //Led mappings
    LED_RED = PK_5,  //Red
    LED_GREEN = PK_6,  //Green
    LED_BLUE = PK_7,  //Blue
    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

inline pin_size_t PinNameToIndex(PinName pn) {return (pin_size_t)pn;}
inline PinName digitalPinToPinName(pin_size_t pin) {return (PinName)pin;}

#endif
