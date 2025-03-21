/*

Copyright (c) 2010 - 2025, Nordic Semiconductor ASA All rights reserved.

SPDX-License-Identifier: BSD-3-Clause

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. Neither the name of Nordic Semiconductor ASA nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef __NRF51_BITS_H
#define __NRF51_BITS_H

/*lint ++flb "Enter library region" */

/* Peripheral: AAR */
/* Description: Accelerated Address Resolver. */

/* Register: AAR_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 2 : Enable interrupt on NOTRESOLVED event. */
#define AAR_INTENSET_NOTRESOLVED_Pos (2UL)
#define AAR_INTENSET_NOTRESOLVED_Msk (0x1UL << AAR_INTENSET_NOTRESOLVED_Pos)
#define AAR_INTENSET_NOTRESOLVED_Disabled (0UL)
#define AAR_INTENSET_NOTRESOLVED_Enabled (1UL)
#define AAR_INTENSET_NOTRESOLVED_Set (1UL)

/* Bit 1 : Enable interrupt on RESOLVED event. */
#define AAR_INTENSET_RESOLVED_Pos (1UL)
#define AAR_INTENSET_RESOLVED_Msk (0x1UL << AAR_INTENSET_RESOLVED_Pos)
#define AAR_INTENSET_RESOLVED_Disabled (0UL)
#define AAR_INTENSET_RESOLVED_Enabled (1UL)
#define AAR_INTENSET_RESOLVED_Set (1UL)

/* Bit 0 : Enable interrupt on END event. */
#define AAR_INTENSET_END_Pos (0UL)
#define AAR_INTENSET_END_Msk (0x1UL << AAR_INTENSET_END_Pos)
#define AAR_INTENSET_END_Disabled (0UL)
#define AAR_INTENSET_END_Enabled (1UL)
#define AAR_INTENSET_END_Set (1UL)

/* Register: AAR_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 2 : Disable interrupt on NOTRESOLVED event. */
#define AAR_INTENCLR_NOTRESOLVED_Pos (2UL)
#define AAR_INTENCLR_NOTRESOLVED_Msk (0x1UL << AAR_INTENCLR_NOTRESOLVED_Pos)
#define AAR_INTENCLR_NOTRESOLVED_Disabled (0UL)
#define AAR_INTENCLR_NOTRESOLVED_Enabled (1UL)
#define AAR_INTENCLR_NOTRESOLVED_Clear (1UL)

/* Bit 1 : Disable interrupt on RESOLVED event. */
#define AAR_INTENCLR_RESOLVED_Pos (1UL)
#define AAR_INTENCLR_RESOLVED_Msk (0x1UL << AAR_INTENCLR_RESOLVED_Pos)
#define AAR_INTENCLR_RESOLVED_Disabled (0UL)
#define AAR_INTENCLR_RESOLVED_Enabled (1UL)
#define AAR_INTENCLR_RESOLVED_Clear (1UL)

/* Bit 0 : Disable interrupt on ENDKSGEN event. */
#define AAR_INTENCLR_END_Pos (0UL)
#define AAR_INTENCLR_END_Msk (0x1UL << AAR_INTENCLR_END_Pos)
#define AAR_INTENCLR_END_Disabled (0UL)
#define AAR_INTENCLR_END_Enabled (1UL)
#define AAR_INTENCLR_END_Clear (1UL)

/* Register: AAR_STATUS */
/* Description: Resolution status. */

/* Bits 3..0 : The IRK used last time an address was resolved. */
#define AAR_STATUS_STATUS_Pos (0UL)
#define AAR_STATUS_STATUS_Msk (0xFUL << AAR_STATUS_STATUS_Pos)

/* Register: AAR_ENABLE */
/* Description: Enable AAR. */

/* Bits 1..0 : Enable AAR. */
#define AAR_ENABLE_ENABLE_Pos (0UL)
#define AAR_ENABLE_ENABLE_Msk (0x3UL << AAR_ENABLE_ENABLE_Pos)
#define AAR_ENABLE_ENABLE_Disabled (0x00UL)
#define AAR_ENABLE_ENABLE_Enabled (0x03UL)

/* Register: AAR_NIRK */
/* Description: Number of Identity root Keys in the IRK data structure. */

/* Bits 4..0 : Number of Identity root Keys in the IRK data structure. */
#define AAR_NIRK_NIRK_Pos (0UL)
#define AAR_NIRK_NIRK_Msk (0x1FUL << AAR_NIRK_NIRK_Pos)

/* Register: AAR_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define AAR_POWER_POWER_Pos (0UL)
#define AAR_POWER_POWER_Msk (0x1UL << AAR_POWER_POWER_Pos)
#define AAR_POWER_POWER_Disabled (0UL)
#define AAR_POWER_POWER_Enabled (1UL)


/* Peripheral: ADC */
/* Description: Analog to digital converter. */

/* Register: ADC_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 0 : Enable interrupt on END event. */
#define ADC_INTENSET_END_Pos (0UL)
#define ADC_INTENSET_END_Msk (0x1UL << ADC_INTENSET_END_Pos)
#define ADC_INTENSET_END_Disabled (0UL)
#define ADC_INTENSET_END_Enabled (1UL)
#define ADC_INTENSET_END_Set (1UL)

/* Register: ADC_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 0 : Disable interrupt on END event. */
#define ADC_INTENCLR_END_Pos (0UL)
#define ADC_INTENCLR_END_Msk (0x1UL << ADC_INTENCLR_END_Pos)
#define ADC_INTENCLR_END_Disabled (0UL)
#define ADC_INTENCLR_END_Enabled (1UL)
#define ADC_INTENCLR_END_Clear (1UL)

/* Register: ADC_BUSY */
/* Description: ADC busy register. */

/* Bit 0 : ADC busy register. */
#define ADC_BUSY_BUSY_Pos (0UL)
#define ADC_BUSY_BUSY_Msk (0x1UL << ADC_BUSY_BUSY_Pos)
#define ADC_BUSY_BUSY_Ready (0UL)
#define ADC_BUSY_BUSY_Busy (1UL)

/* Register: ADC_ENABLE */
/* Description: ADC enable. */

/* Bits 1..0 : ADC enable. */
#define ADC_ENABLE_ENABLE_Pos (0UL)
#define ADC_ENABLE_ENABLE_Msk (0x3UL << ADC_ENABLE_ENABLE_Pos)
#define ADC_ENABLE_ENABLE_Disabled (0x00UL)
#define ADC_ENABLE_ENABLE_Enabled (0x01UL)

/* Register: ADC_CONFIG */
/* Description: ADC configuration register. */

/* Bits 17..16 : ADC external reference pin selection. */
#define ADC_CONFIG_EXTREFSEL_Pos (16UL)
#define ADC_CONFIG_EXTREFSEL_Msk (0x3UL << ADC_CONFIG_EXTREFSEL_Pos)
#define ADC_CONFIG_EXTREFSEL_None (0UL)
#define ADC_CONFIG_EXTREFSEL_AnalogReference0 (1UL)
#define ADC_CONFIG_EXTREFSEL_AnalogReference1 (2UL)

/* Bits 15..8 : ADC analog pin selection. */
#define ADC_CONFIG_PSEL_Pos (8UL)
#define ADC_CONFIG_PSEL_Msk (0xFFUL << ADC_CONFIG_PSEL_Pos)
#define ADC_CONFIG_PSEL_Disabled (0UL)
#define ADC_CONFIG_PSEL_AnalogInput0 (1UL)
#define ADC_CONFIG_PSEL_AnalogInput1 (2UL)
#define ADC_CONFIG_PSEL_AnalogInput2 (4UL)
#define ADC_CONFIG_PSEL_AnalogInput3 (8UL)
#define ADC_CONFIG_PSEL_AnalogInput4 (16UL)
#define ADC_CONFIG_PSEL_AnalogInput5 (32UL)
#define ADC_CONFIG_PSEL_AnalogInput6 (64UL)
#define ADC_CONFIG_PSEL_AnalogInput7 (128UL)

/* Bits 6..5 : ADC reference selection. */
#define ADC_CONFIG_REFSEL_Pos (5UL)
#define ADC_CONFIG_REFSEL_Msk (0x3UL << ADC_CONFIG_REFSEL_Pos)
#define ADC_CONFIG_REFSEL_VBG (0x00UL)
#define ADC_CONFIG_REFSEL_External (0x01UL)
#define ADC_CONFIG_REFSEL_SupplyOneHalfPrescaling (0x02UL)
#define ADC_CONFIG_REFSEL_SupplyOneThirdPrescaling (0x03UL)

/* Bits 4..2 : ADC input selection. */
#define ADC_CONFIG_INPSEL_Pos (2UL)
#define ADC_CONFIG_INPSEL_Msk (0x7UL << ADC_CONFIG_INPSEL_Pos)
#define ADC_CONFIG_INPSEL_AnalogInputNoPrescaling (0x00UL)
#define ADC_CONFIG_INPSEL_AnalogInputTwoThirdsPrescaling (0x01UL)
#define ADC_CONFIG_INPSEL_AnalogInputOneThirdPrescaling (0x02UL)
#define ADC_CONFIG_INPSEL_SupplyTwoThirdsPrescaling (0x05UL)
#define ADC_CONFIG_INPSEL_SupplyOneThirdPrescaling (0x06UL)

/* Bits 1..0 : ADC resolution. */
#define ADC_CONFIG_RES_Pos (0UL)
#define ADC_CONFIG_RES_Msk (0x3UL << ADC_CONFIG_RES_Pos)
#define ADC_CONFIG_RES_8bit (0x00UL)
#define ADC_CONFIG_RES_9bit (0x01UL)
#define ADC_CONFIG_RES_10bit (0x02UL)

/* Register: ADC_RESULT */
/* Description: Result of ADC conversion. */

/* Bits 9..0 : Result of ADC conversion. */
#define ADC_RESULT_RESULT_Pos (0UL)
#define ADC_RESULT_RESULT_Msk (0x3FFUL << ADC_RESULT_RESULT_Pos)

/* Register: ADC_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define ADC_POWER_POWER_Pos (0UL)
#define ADC_POWER_POWER_Msk (0x1UL << ADC_POWER_POWER_Pos)
#define ADC_POWER_POWER_Disabled (0UL)
#define ADC_POWER_POWER_Enabled (1UL)


/* Peripheral: CCM */
/* Description: AES CCM Mode Encryption. */

/* Register: CCM_SHORTS */
/* Description: Shortcuts for the CCM. */

/* Bit 0 : Shortcut between ENDKSGEN event and CRYPT task. */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Pos (0UL)
#define CCM_SHORTS_ENDKSGEN_CRYPT_Msk (0x1UL << CCM_SHORTS_ENDKSGEN_CRYPT_Pos)
#define CCM_SHORTS_ENDKSGEN_CRYPT_Disabled (0UL)
#define CCM_SHORTS_ENDKSGEN_CRYPT_Enabled (1UL)

/* Register: CCM_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 2 : Enable interrupt on ERROR event. */
#define CCM_INTENSET_ERROR_Pos (2UL)
#define CCM_INTENSET_ERROR_Msk (0x1UL << CCM_INTENSET_ERROR_Pos)
#define CCM_INTENSET_ERROR_Disabled (0UL)
#define CCM_INTENSET_ERROR_Enabled (1UL)
#define CCM_INTENSET_ERROR_Set (1UL)

/* Bit 1 : Enable interrupt on ENDCRYPT event. */
#define CCM_INTENSET_ENDCRYPT_Pos (1UL)
#define CCM_INTENSET_ENDCRYPT_Msk (0x1UL << CCM_INTENSET_ENDCRYPT_Pos)
#define CCM_INTENSET_ENDCRYPT_Disabled (0UL)
#define CCM_INTENSET_ENDCRYPT_Enabled (1UL)
#define CCM_INTENSET_ENDCRYPT_Set (1UL)

/* Bit 0 : Enable interrupt on ENDKSGEN event. */
#define CCM_INTENSET_ENDKSGEN_Pos (0UL)
#define CCM_INTENSET_ENDKSGEN_Msk (0x1UL << CCM_INTENSET_ENDKSGEN_Pos)
#define CCM_INTENSET_ENDKSGEN_Disabled (0UL)
#define CCM_INTENSET_ENDKSGEN_Enabled (1UL)
#define CCM_INTENSET_ENDKSGEN_Set (1UL)

/* Register: CCM_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 2 : Disable interrupt on ERROR event. */
#define CCM_INTENCLR_ERROR_Pos (2UL)
#define CCM_INTENCLR_ERROR_Msk (0x1UL << CCM_INTENCLR_ERROR_Pos)
#define CCM_INTENCLR_ERROR_Disabled (0UL)
#define CCM_INTENCLR_ERROR_Enabled (1UL)
#define CCM_INTENCLR_ERROR_Clear (1UL)

/* Bit 1 : Disable interrupt on ENDCRYPT event. */
#define CCM_INTENCLR_ENDCRYPT_Pos (1UL)
#define CCM_INTENCLR_ENDCRYPT_Msk (0x1UL << CCM_INTENCLR_ENDCRYPT_Pos)
#define CCM_INTENCLR_ENDCRYPT_Disabled (0UL)
#define CCM_INTENCLR_ENDCRYPT_Enabled (1UL)
#define CCM_INTENCLR_ENDCRYPT_Clear (1UL)

/* Bit 0 : Disable interrupt on ENDKSGEN event. */
#define CCM_INTENCLR_ENDKSGEN_Pos (0UL)
#define CCM_INTENCLR_ENDKSGEN_Msk (0x1UL << CCM_INTENCLR_ENDKSGEN_Pos)
#define CCM_INTENCLR_ENDKSGEN_Disabled (0UL)
#define CCM_INTENCLR_ENDKSGEN_Enabled (1UL)
#define CCM_INTENCLR_ENDKSGEN_Clear (1UL)

/* Register: CCM_MICSTATUS */
/* Description: CCM RX MIC check result. */

/* Bit 0 : Result of the MIC check performed during the previous CCM RX STARTCRYPT */
#define CCM_MICSTATUS_MICSTATUS_Pos (0UL)
#define CCM_MICSTATUS_MICSTATUS_Msk (0x1UL << CCM_MICSTATUS_MICSTATUS_Pos)
#define CCM_MICSTATUS_MICSTATUS_CheckFailed (0UL)
#define CCM_MICSTATUS_MICSTATUS_CheckPassed (1UL)

/* Register: CCM_ENABLE */
/* Description: CCM enable. */

/* Bits 1..0 : CCM enable. */
#define CCM_ENABLE_ENABLE_Pos (0UL)
#define CCM_ENABLE_ENABLE_Msk (0x3UL << CCM_ENABLE_ENABLE_Pos)
#define CCM_ENABLE_ENABLE_Disabled (0x00UL)
#define CCM_ENABLE_ENABLE_Enabled (0x02UL)

/* Register: CCM_MODE */
/* Description: Operation mode. */

/* Bit 0 : CCM mode operation. */
#define CCM_MODE_MODE_Pos (0UL)
#define CCM_MODE_MODE_Msk (0x1UL << CCM_MODE_MODE_Pos)
#define CCM_MODE_MODE_Encryption (0UL)
#define CCM_MODE_MODE_Decryption (1UL)

/* Register: CCM_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define CCM_POWER_POWER_Pos (0UL)
#define CCM_POWER_POWER_Msk (0x1UL << CCM_POWER_POWER_Pos)
#define CCM_POWER_POWER_Disabled (0UL)
#define CCM_POWER_POWER_Enabled (1UL)


/* Peripheral: CLOCK */
/* Description: Clock control. */

/* Register: CLOCK_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 4 : Enable interrupt on CTTO event. */
#define CLOCK_INTENSET_CTTO_Pos (4UL)
#define CLOCK_INTENSET_CTTO_Msk (0x1UL << CLOCK_INTENSET_CTTO_Pos)
#define CLOCK_INTENSET_CTTO_Disabled (0UL)
#define CLOCK_INTENSET_CTTO_Enabled (1UL)
#define CLOCK_INTENSET_CTTO_Set (1UL)

/* Bit 3 : Enable interrupt on DONE event. */
#define CLOCK_INTENSET_DONE_Pos (3UL)
#define CLOCK_INTENSET_DONE_Msk (0x1UL << CLOCK_INTENSET_DONE_Pos)
#define CLOCK_INTENSET_DONE_Disabled (0UL)
#define CLOCK_INTENSET_DONE_Enabled (1UL)
#define CLOCK_INTENSET_DONE_Set (1UL)

/* Bit 1 : Enable interrupt on LFCLKSTARTED event. */
#define CLOCK_INTENSET_LFCLKSTARTED_Pos (1UL)
#define CLOCK_INTENSET_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_LFCLKSTARTED_Pos)
#define CLOCK_INTENSET_LFCLKSTARTED_Disabled (0UL)
#define CLOCK_INTENSET_LFCLKSTARTED_Enabled (1UL)
#define CLOCK_INTENSET_LFCLKSTARTED_Set (1UL)

/* Bit 0 : Enable interrupt on HFCLKSTARTED event. */
#define CLOCK_INTENSET_HFCLKSTARTED_Pos (0UL)
#define CLOCK_INTENSET_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_HFCLKSTARTED_Pos)
#define CLOCK_INTENSET_HFCLKSTARTED_Disabled (0UL)
#define CLOCK_INTENSET_HFCLKSTARTED_Enabled (1UL)
#define CLOCK_INTENSET_HFCLKSTARTED_Set (1UL)

/* Register: CLOCK_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 4 : Disable interrupt on CTTO event. */
#define CLOCK_INTENCLR_CTTO_Pos (4UL)
#define CLOCK_INTENCLR_CTTO_Msk (0x1UL << CLOCK_INTENCLR_CTTO_Pos)
#define CLOCK_INTENCLR_CTTO_Disabled (0UL)
#define CLOCK_INTENCLR_CTTO_Enabled (1UL)
#define CLOCK_INTENCLR_CTTO_Clear (1UL)

/* Bit 3 : Disable interrupt on DONE event. */
#define CLOCK_INTENCLR_DONE_Pos (3UL)
#define CLOCK_INTENCLR_DONE_Msk (0x1UL << CLOCK_INTENCLR_DONE_Pos)
#define CLOCK_INTENCLR_DONE_Disabled (0UL)
#define CLOCK_INTENCLR_DONE_Enabled (1UL)
#define CLOCK_INTENCLR_DONE_Clear (1UL)

/* Bit 1 : Disable interrupt on LFCLKSTARTED event. */
#define CLOCK_INTENCLR_LFCLKSTARTED_Pos (1UL)
#define CLOCK_INTENCLR_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_LFCLKSTARTED_Pos)
#define CLOCK_INTENCLR_LFCLKSTARTED_Disabled (0UL)
#define CLOCK_INTENCLR_LFCLKSTARTED_Enabled (1UL)
#define CLOCK_INTENCLR_LFCLKSTARTED_Clear (1UL)

/* Bit 0 : Disable interrupt on HFCLKSTARTED event. */
#define CLOCK_INTENCLR_HFCLKSTARTED_Pos (0UL)
#define CLOCK_INTENCLR_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_HFCLKSTARTED_Pos)
#define CLOCK_INTENCLR_HFCLKSTARTED_Disabled (0UL)
#define CLOCK_INTENCLR_HFCLKSTARTED_Enabled (1UL)
#define CLOCK_INTENCLR_HFCLKSTARTED_Clear (1UL)

/* Register: CLOCK_HFCLKRUN */
/* Description: Task HFCLKSTART trigger status. */

/* Bit 0 : Task HFCLKSTART trigger status. */
#define CLOCK_HFCLKRUN_STATUS_Pos (0UL)
#define CLOCK_HFCLKRUN_STATUS_Msk (0x1UL << CLOCK_HFCLKRUN_STATUS_Pos)
#define CLOCK_HFCLKRUN_STATUS_NotTriggered (0UL)
#define CLOCK_HFCLKRUN_STATUS_Triggered (1UL)

/* Register: CLOCK_HFCLKSTAT */
/* Description: High frequency clock status. */

/* Bit 16 : State for the HFCLK. */
#define CLOCK_HFCLKSTAT_STATE_Pos (16UL)
#define CLOCK_HFCLKSTAT_STATE_Msk (0x1UL << CLOCK_HFCLKSTAT_STATE_Pos)
#define CLOCK_HFCLKSTAT_STATE_NotRunning (0UL)
#define CLOCK_HFCLKSTAT_STATE_Running (1UL)

/* Bit 0 : Active clock source for the HF clock. */
#define CLOCK_HFCLKSTAT_SRC_Pos (0UL)
#define CLOCK_HFCLKSTAT_SRC_Msk (0x1UL << CLOCK_HFCLKSTAT_SRC_Pos)
#define CLOCK_HFCLKSTAT_SRC_RC (0UL)
#define CLOCK_HFCLKSTAT_SRC_Xtal (1UL)

/* Register: CLOCK_LFCLKRUN */
/* Description: Task LFCLKSTART triggered status. */

/* Bit 0 : Task LFCLKSTART triggered status. */
#define CLOCK_LFCLKRUN_STATUS_Pos (0UL)
#define CLOCK_LFCLKRUN_STATUS_Msk (0x1UL << CLOCK_LFCLKRUN_STATUS_Pos)
#define CLOCK_LFCLKRUN_STATUS_NotTriggered (0UL)
#define CLOCK_LFCLKRUN_STATUS_Triggered (1UL)

/* Register: CLOCK_LFCLKSTAT */
/* Description: Low frequency clock status. */

/* Bit 16 : State for the LF clock. */
#define CLOCK_LFCLKSTAT_STATE_Pos (16UL)
#define CLOCK_LFCLKSTAT_STATE_Msk (0x1UL << CLOCK_LFCLKSTAT_STATE_Pos)
#define CLOCK_LFCLKSTAT_STATE_NotRunning (0UL)
#define CLOCK_LFCLKSTAT_STATE_Running (1UL)

/* Bits 1..0 : Active clock source for the LF clock. */
#define CLOCK_LFCLKSTAT_SRC_Pos (0UL)
#define CLOCK_LFCLKSTAT_SRC_Msk (0x3UL << CLOCK_LFCLKSTAT_SRC_Pos)
#define CLOCK_LFCLKSTAT_SRC_RC (0UL)
#define CLOCK_LFCLKSTAT_SRC_Xtal (1UL)
#define CLOCK_LFCLKSTAT_SRC_Synth (2UL)

/* Register: CLOCK_LFCLKSRCCOPY */
/* Description: Clock source for the LFCLK clock, set when task LKCLKSTART is triggered. */

/* Bits 1..0 : Clock source for the LFCLK clock, set when task LKCLKSTART is triggered. */
#define CLOCK_LFCLKSRCCOPY_SRC_Pos (0UL)
#define CLOCK_LFCLKSRCCOPY_SRC_Msk (0x3UL << CLOCK_LFCLKSRCCOPY_SRC_Pos)
#define CLOCK_LFCLKSRCCOPY_SRC_RC (0UL)
#define CLOCK_LFCLKSRCCOPY_SRC_Xtal (1UL)
#define CLOCK_LFCLKSRCCOPY_SRC_Synth (2UL)

/* Register: CLOCK_LFCLKSRC */
/* Description: Clock source for the LFCLK clock. */

/* Bits 1..0 : Clock source. */
#define CLOCK_LFCLKSRC_SRC_Pos (0UL)
#define CLOCK_LFCLKSRC_SRC_Msk (0x3UL << CLOCK_LFCLKSRC_SRC_Pos)
#define CLOCK_LFCLKSRC_SRC_RC (0UL)
#define CLOCK_LFCLKSRC_SRC_Xtal (1UL)
#define CLOCK_LFCLKSRC_SRC_Synth (2UL)

/* Register: CLOCK_CTIV */
/* Description: Calibration timer interval. */

/* Bits 6..0 : Calibration timer interval in 0.25s resolution. */
#define CLOCK_CTIV_CTIV_Pos (0UL)
#define CLOCK_CTIV_CTIV_Msk (0x7FUL << CLOCK_CTIV_CTIV_Pos)

/* Register: CLOCK_XTALFREQ */
/* Description: Crystal frequency. */

/* Bits 7..0 : External Xtal frequency selection. */
#define CLOCK_XTALFREQ_XTALFREQ_Pos (0UL)
#define CLOCK_XTALFREQ_XTALFREQ_Msk (0xFFUL << CLOCK_XTALFREQ_XTALFREQ_Pos)
#define CLOCK_XTALFREQ_XTALFREQ_32MHz (0x00UL)
#define CLOCK_XTALFREQ_XTALFREQ_16MHz (0xFFUL)


/* Peripheral: ECB */
/* Description: AES ECB Mode Encryption. */

/* Register: ECB_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 1 : Enable interrupt on ERRORECB event. */
#define ECB_INTENSET_ERRORECB_Pos (1UL)
#define ECB_INTENSET_ERRORECB_Msk (0x1UL << ECB_INTENSET_ERRORECB_Pos)
#define ECB_INTENSET_ERRORECB_Disabled (0UL)
#define ECB_INTENSET_ERRORECB_Enabled (1UL)
#define ECB_INTENSET_ERRORECB_Set (1UL)

/* Bit 0 : Enable interrupt on ENDECB event. */
#define ECB_INTENSET_ENDECB_Pos (0UL)
#define ECB_INTENSET_ENDECB_Msk (0x1UL << ECB_INTENSET_ENDECB_Pos)
#define ECB_INTENSET_ENDECB_Disabled (0UL)
#define ECB_INTENSET_ENDECB_Enabled (1UL)
#define ECB_INTENSET_ENDECB_Set (1UL)

/* Register: ECB_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 1 : Disable interrupt on ERRORECB event. */
#define ECB_INTENCLR_ERRORECB_Pos (1UL)
#define ECB_INTENCLR_ERRORECB_Msk (0x1UL << ECB_INTENCLR_ERRORECB_Pos)
#define ECB_INTENCLR_ERRORECB_Disabled (0UL)
#define ECB_INTENCLR_ERRORECB_Enabled (1UL)
#define ECB_INTENCLR_ERRORECB_Clear (1UL)

/* Bit 0 : Disable interrupt on ENDECB event. */
#define ECB_INTENCLR_ENDECB_Pos (0UL)
#define ECB_INTENCLR_ENDECB_Msk (0x1UL << ECB_INTENCLR_ENDECB_Pos)
#define ECB_INTENCLR_ENDECB_Disabled (0UL)
#define ECB_INTENCLR_ENDECB_Enabled (1UL)
#define ECB_INTENCLR_ENDECB_Clear (1UL)

/* Register: ECB_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define ECB_POWER_POWER_Pos (0UL)
#define ECB_POWER_POWER_Msk (0x1UL << ECB_POWER_POWER_Pos)
#define ECB_POWER_POWER_Disabled (0UL)
#define ECB_POWER_POWER_Enabled (1UL)


/* Peripheral: FICR */
/* Description: Factory Information Configuration. */

/* Register: FICR_PPFC */
/* Description: Pre-programmed factory code present. */

/* Bits 7..0 : Pre-programmed factory code present. */
#define FICR_PPFC_PPFC_Pos (0UL)
#define FICR_PPFC_PPFC_Msk (0xFFUL << FICR_PPFC_PPFC_Pos)
#define FICR_PPFC_PPFC_Present (0x00UL)
#define FICR_PPFC_PPFC_NotPresent (0xFFUL)

/* Register: FICR_CONFIGID */
/* Description: Configuration identifier. */

/* Bits 31..16 : Firmware Identification Number pre-loaded into the flash. */
#define FICR_CONFIGID_FWID_Pos (16UL)
#define FICR_CONFIGID_FWID_Msk (0xFFFFUL << FICR_CONFIGID_FWID_Pos)

/* Bits 15..0 : Hardware Identification Number. */
#define FICR_CONFIGID_HWID_Pos (0UL)
#define FICR_CONFIGID_HWID_Msk (0xFFFFUL << FICR_CONFIGID_HWID_Pos)

/* Register: FICR_DEVICEADDRTYPE */
/* Description: Device address type. */

/* Bit 0 : Device address type. */
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Pos (0UL)
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Msk (0x1UL << FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Pos)
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Public (0UL)
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Random (1UL)

/* Register: FICR_OVERRIDEEN */
/* Description: Radio calibration override enable. */

/* Bit 3 : Override default values for BLE_1Mbit mode. */
#define FICR_OVERRIDEEN_BLE_1MBIT_Pos (3UL)
#define FICR_OVERRIDEEN_BLE_1MBIT_Msk (0x1UL << FICR_OVERRIDEEN_BLE_1MBIT_Pos)
#define FICR_OVERRIDEEN_BLE_1MBIT_Override (0UL)
#define FICR_OVERRIDEEN_BLE_1MBIT_NotOverride (1UL)

/* Bit 0 : Override default values for NRF_1Mbit mode. */
#define FICR_OVERRIDEEN_NRF_1MBIT_Pos (0UL)
#define FICR_OVERRIDEEN_NRF_1MBIT_Msk (0x1UL << FICR_OVERRIDEEN_NRF_1MBIT_Pos)
#define FICR_OVERRIDEEN_NRF_1MBIT_Override (0UL)
#define FICR_OVERRIDEEN_NRF_1MBIT_NotOverride (1UL)


/* Peripheral: GPIO */
/* Description: General purpose input and output. */

/* Register: GPIO_OUT */
/* Description: Write GPIO port. */

/* Bit 31 : Pin 31. */
#define GPIO_OUT_PIN31_Pos (31UL)
#define GPIO_OUT_PIN31_Msk (0x1UL << GPIO_OUT_PIN31_Pos)
#define GPIO_OUT_PIN31_Low (0UL)
#define GPIO_OUT_PIN31_High (1UL)

/* Bit 30 : Pin 30. */
#define GPIO_OUT_PIN30_Pos (30UL)
#define GPIO_OUT_PIN30_Msk (0x1UL << GPIO_OUT_PIN30_Pos)
#define GPIO_OUT_PIN30_Low (0UL)
#define GPIO_OUT_PIN30_High (1UL)

/* Bit 29 : Pin 29. */
#define GPIO_OUT_PIN29_Pos (29UL)
#define GPIO_OUT_PIN29_Msk (0x1UL << GPIO_OUT_PIN29_Pos)
#define GPIO_OUT_PIN29_Low (0UL)
#define GPIO_OUT_PIN29_High (1UL)

/* Bit 28 : Pin 28. */
#define GPIO_OUT_PIN28_Pos (28UL)
#define GPIO_OUT_PIN28_Msk (0x1UL << GPIO_OUT_PIN28_Pos)
#define GPIO_OUT_PIN28_Low (0UL)
#define GPIO_OUT_PIN28_High (1UL)

/* Bit 27 : Pin 27. */
#define GPIO_OUT_PIN27_Pos (27UL)
#define GPIO_OUT_PIN27_Msk (0x1UL << GPIO_OUT_PIN27_Pos)
#define GPIO_OUT_PIN27_Low (0UL)
#define GPIO_OUT_PIN27_High (1UL)

/* Bit 26 : Pin 26. */
#define GPIO_OUT_PIN26_Pos (26UL)
#define GPIO_OUT_PIN26_Msk (0x1UL << GPIO_OUT_PIN26_Pos)
#define GPIO_OUT_PIN26_Low (0UL)
#define GPIO_OUT_PIN26_High (1UL)

/* Bit 25 : Pin 25. */
#define GPIO_OUT_PIN25_Pos (25UL)
#define GPIO_OUT_PIN25_Msk (0x1UL << GPIO_OUT_PIN25_Pos)
#define GPIO_OUT_PIN25_Low (0UL)
#define GPIO_OUT_PIN25_High (1UL)

/* Bit 24 : Pin 24. */
#define GPIO_OUT_PIN24_Pos (24UL)
#define GPIO_OUT_PIN24_Msk (0x1UL << GPIO_OUT_PIN24_Pos)
#define GPIO_OUT_PIN24_Low (0UL)
#define GPIO_OUT_PIN24_High (1UL)

/* Bit 23 : Pin 23. */
#define GPIO_OUT_PIN23_Pos (23UL)
#define GPIO_OUT_PIN23_Msk (0x1UL << GPIO_OUT_PIN23_Pos)
#define GPIO_OUT_PIN23_Low (0UL)
#define GPIO_OUT_PIN23_High (1UL)

/* Bit 22 : Pin 22. */
#define GPIO_OUT_PIN22_Pos (22UL)
#define GPIO_OUT_PIN22_Msk (0x1UL << GPIO_OUT_PIN22_Pos)
#define GPIO_OUT_PIN22_Low (0UL)
#define GPIO_OUT_PIN22_High (1UL)

/* Bit 21 : Pin 21. */
#define GPIO_OUT_PIN21_Pos (21UL)
#define GPIO_OUT_PIN21_Msk (0x1UL << GPIO_OUT_PIN21_Pos)
#define GPIO_OUT_PIN21_Low (0UL)
#define GPIO_OUT_PIN21_High (1UL)

/* Bit 20 : Pin 20. */
#define GPIO_OUT_PIN20_Pos (20UL)
#define GPIO_OUT_PIN20_Msk (0x1UL << GPIO_OUT_PIN20_Pos)
#define GPIO_OUT_PIN20_Low (0UL)
#define GPIO_OUT_PIN20_High (1UL)

/* Bit 19 : Pin 19. */
#define GPIO_OUT_PIN19_Pos (19UL)
#define GPIO_OUT_PIN19_Msk (0x1UL << GPIO_OUT_PIN19_Pos)
#define GPIO_OUT_PIN19_Low (0UL)
#define GPIO_OUT_PIN19_High (1UL)

/* Bit 18 : Pin 18. */
#define GPIO_OUT_PIN18_Pos (18UL)
#define GPIO_OUT_PIN18_Msk (0x1UL << GPIO_OUT_PIN18_Pos)
#define GPIO_OUT_PIN18_Low (0UL)
#define GPIO_OUT_PIN18_High (1UL)

/* Bit 17 : Pin 17. */
#define GPIO_OUT_PIN17_Pos (17UL)
#define GPIO_OUT_PIN17_Msk (0x1UL << GPIO_OUT_PIN17_Pos)
#define GPIO_OUT_PIN17_Low (0UL)
#define GPIO_OUT_PIN17_High (1UL)

/* Bit 16 : Pin 16. */
#define GPIO_OUT_PIN16_Pos (16UL)
#define GPIO_OUT_PIN16_Msk (0x1UL << GPIO_OUT_PIN16_Pos)
#define GPIO_OUT_PIN16_Low (0UL)
#define GPIO_OUT_PIN16_High (1UL)

/* Bit 15 : Pin 15. */
#define GPIO_OUT_PIN15_Pos (15UL)
#define GPIO_OUT_PIN15_Msk (0x1UL << GPIO_OUT_PIN15_Pos)
#define GPIO_OUT_PIN15_Low (0UL)
#define GPIO_OUT_PIN15_High (1UL)

/* Bit 14 : Pin 14. */
#define GPIO_OUT_PIN14_Pos (14UL)
#define GPIO_OUT_PIN14_Msk (0x1UL << GPIO_OUT_PIN14_Pos)
#define GPIO_OUT_PIN14_Low (0UL)
#define GPIO_OUT_PIN14_High (1UL)

/* Bit 13 : Pin 13. */
#define GPIO_OUT_PIN13_Pos (13UL)
#define GPIO_OUT_PIN13_Msk (0x1UL << GPIO_OUT_PIN13_Pos)
#define GPIO_OUT_PIN13_Low (0UL)
#define GPIO_OUT_PIN13_High (1UL)

/* Bit 12 : Pin 12. */
#define GPIO_OUT_PIN12_Pos (12UL)
#define GPIO_OUT_PIN12_Msk (0x1UL << GPIO_OUT_PIN12_Pos)
#define GPIO_OUT_PIN12_Low (0UL)
#define GPIO_OUT_PIN12_High (1UL)

/* Bit 11 : Pin 11. */
#define GPIO_OUT_PIN11_Pos (11UL)
#define GPIO_OUT_PIN11_Msk (0x1UL << GPIO_OUT_PIN11_Pos)
#define GPIO_OUT_PIN11_Low (0UL)
#define GPIO_OUT_PIN11_High (1UL)

/* Bit 10 : Pin 10. */
#define GPIO_OUT_PIN10_Pos (10UL)
#define GPIO_OUT_PIN10_Msk (0x1UL << GPIO_OUT_PIN10_Pos)
#define GPIO_OUT_PIN10_Low (0UL)
#define GPIO_OUT_PIN10_High (1UL)

/* Bit 9 : Pin 9. */
#define GPIO_OUT_PIN9_Pos (9UL)
#define GPIO_OUT_PIN9_Msk (0x1UL << GPIO_OUT_PIN9_Pos)
#define GPIO_OUT_PIN9_Low (0UL)
#define GPIO_OUT_PIN9_High (1UL)

/* Bit 8 : Pin 8. */
#define GPIO_OUT_PIN8_Pos (8UL)
#define GPIO_OUT_PIN8_Msk (0x1UL << GPIO_OUT_PIN8_Pos)
#define GPIO_OUT_PIN8_Low (0UL)
#define GPIO_OUT_PIN8_High (1UL)

/* Bit 7 : Pin 7. */
#define GPIO_OUT_PIN7_Pos (7UL)
#define GPIO_OUT_PIN7_Msk (0x1UL << GPIO_OUT_PIN7_Pos)
#define GPIO_OUT_PIN7_Low (0UL)
#define GPIO_OUT_PIN7_High (1UL)

/* Bit 6 : Pin 6. */
#define GPIO_OUT_PIN6_Pos (6UL)
#define GPIO_OUT_PIN6_Msk (0x1UL << GPIO_OUT_PIN6_Pos)
#define GPIO_OUT_PIN6_Low (0UL)
#define GPIO_OUT_PIN6_High (1UL)

/* Bit 5 : Pin 5. */
#define GPIO_OUT_PIN5_Pos (5UL)
#define GPIO_OUT_PIN5_Msk (0x1UL << GPIO_OUT_PIN5_Pos)
#define GPIO_OUT_PIN5_Low (0UL)
#define GPIO_OUT_PIN5_High (1UL)

/* Bit 4 : Pin 4. */
#define GPIO_OUT_PIN4_Pos (4UL)
#define GPIO_OUT_PIN4_Msk (0x1UL << GPIO_OUT_PIN4_Pos)
#define GPIO_OUT_PIN4_Low (0UL)
#define GPIO_OUT_PIN4_High (1UL)

/* Bit 3 : Pin 3. */
#define GPIO_OUT_PIN3_Pos (3UL)
#define GPIO_OUT_PIN3_Msk (0x1UL << GPIO_OUT_PIN3_Pos)
#define GPIO_OUT_PIN3_Low (0UL)
#define GPIO_OUT_PIN3_High (1UL)

/* Bit 2 : Pin 2. */
#define GPIO_OUT_PIN2_Pos (2UL)
#define GPIO_OUT_PIN2_Msk (0x1UL << GPIO_OUT_PIN2_Pos)
#define GPIO_OUT_PIN2_Low (0UL)
#define GPIO_OUT_PIN2_High (1UL)

/* Bit 1 : Pin 1. */
#define GPIO_OUT_PIN1_Pos (1UL)
#define GPIO_OUT_PIN1_Msk (0x1UL << GPIO_OUT_PIN1_Pos)
#define GPIO_OUT_PIN1_Low (0UL)
#define GPIO_OUT_PIN1_High (1UL)

/* Bit 0 : Pin 0. */
#define GPIO_OUT_PIN0_Pos (0UL)
#define GPIO_OUT_PIN0_Msk (0x1UL << GPIO_OUT_PIN0_Pos)
#define GPIO_OUT_PIN0_Low (0UL)
#define GPIO_OUT_PIN0_High (1UL)

/* Register: GPIO_OUTSET */
/* Description: Set individual bits in GPIO port. */

/* Bit 31 : Pin 31. */
#define GPIO_OUTSET_PIN31_Pos (31UL)
#define GPIO_OUTSET_PIN31_Msk (0x1UL << GPIO_OUTSET_PIN31_Pos)
#define GPIO_OUTSET_PIN31_Low (0UL)
#define GPIO_OUTSET_PIN31_High (1UL)
#define GPIO_OUTSET_PIN31_Set (1UL)

/* Bit 30 : Pin 30. */
#define GPIO_OUTSET_PIN30_Pos (30UL)
#define GPIO_OUTSET_PIN30_Msk (0x1UL << GPIO_OUTSET_PIN30_Pos)
#define GPIO_OUTSET_PIN30_Low (0UL)
#define GPIO_OUTSET_PIN30_High (1UL)
#define GPIO_OUTSET_PIN30_Set (1UL)

/* Bit 29 : Pin 29. */
#define GPIO_OUTSET_PIN29_Pos (29UL)
#define GPIO_OUTSET_PIN29_Msk (0x1UL << GPIO_OUTSET_PIN29_Pos)
#define GPIO_OUTSET_PIN29_Low (0UL)
#define GPIO_OUTSET_PIN29_High (1UL)
#define GPIO_OUTSET_PIN29_Set (1UL)

/* Bit 28 : Pin 28. */
#define GPIO_OUTSET_PIN28_Pos (28UL)
#define GPIO_OUTSET_PIN28_Msk (0x1UL << GPIO_OUTSET_PIN28_Pos)
#define GPIO_OUTSET_PIN28_Low (0UL)
#define GPIO_OUTSET_PIN28_High (1UL)
#define GPIO_OUTSET_PIN28_Set (1UL)

/* Bit 27 : Pin 27. */
#define GPIO_OUTSET_PIN27_Pos (27UL)
#define GPIO_OUTSET_PIN27_Msk (0x1UL << GPIO_OUTSET_PIN27_Pos)
#define GPIO_OUTSET_PIN27_Low (0UL)
#define GPIO_OUTSET_PIN27_High (1UL)
#define GPIO_OUTSET_PIN27_Set (1UL)

/* Bit 26 : Pin 26. */
#define GPIO_OUTSET_PIN26_Pos (26UL)
#define GPIO_OUTSET_PIN26_Msk (0x1UL << GPIO_OUTSET_PIN26_Pos)
#define GPIO_OUTSET_PIN26_Low (0UL)
#define GPIO_OUTSET_PIN26_High (1UL)
#define GPIO_OUTSET_PIN26_Set (1UL)

/* Bit 25 : Pin 25. */
#define GPIO_OUTSET_PIN25_Pos (25UL)
#define GPIO_OUTSET_PIN25_Msk (0x1UL << GPIO_OUTSET_PIN25_Pos)
#define GPIO_OUTSET_PIN25_Low (0UL)
#define GPIO_OUTSET_PIN25_High (1UL)
#define GPIO_OUTSET_PIN25_Set (1UL)

/* Bit 24 : Pin 24. */
#define GPIO_OUTSET_PIN24_Pos (24UL)
#define GPIO_OUTSET_PIN24_Msk (0x1UL << GPIO_OUTSET_PIN24_Pos)
#define GPIO_OUTSET_PIN24_Low (0UL)
#define GPIO_OUTSET_PIN24_High (1UL)
#define GPIO_OUTSET_PIN24_Set (1UL)

/* Bit 23 : Pin 23. */
#define GPIO_OUTSET_PIN23_Pos (23UL)
#define GPIO_OUTSET_PIN23_Msk (0x1UL << GPIO_OUTSET_PIN23_Pos)
#define GPIO_OUTSET_PIN23_Low (0UL)
#define GPIO_OUTSET_PIN23_High (1UL)
#define GPIO_OUTSET_PIN23_Set (1UL)

/* Bit 22 : Pin 22. */
#define GPIO_OUTSET_PIN22_Pos (22UL)
#define GPIO_OUTSET_PIN22_Msk (0x1UL << GPIO_OUTSET_PIN22_Pos)
#define GPIO_OUTSET_PIN22_Low (0UL)
#define GPIO_OUTSET_PIN22_High (1UL)
#define GPIO_OUTSET_PIN22_Set (1UL)

/* Bit 21 : Pin 21. */
#define GPIO_OUTSET_PIN21_Pos (21UL)
#define GPIO_OUTSET_PIN21_Msk (0x1UL << GPIO_OUTSET_PIN21_Pos)
#define GPIO_OUTSET_PIN21_Low (0UL)
#define GPIO_OUTSET_PIN21_High (1UL)
#define GPIO_OUTSET_PIN21_Set (1UL)

/* Bit 20 : Pin 20. */
#define GPIO_OUTSET_PIN20_Pos (20UL)
#define GPIO_OUTSET_PIN20_Msk (0x1UL << GPIO_OUTSET_PIN20_Pos)
#define GPIO_OUTSET_PIN20_Low (0UL)
#define GPIO_OUTSET_PIN20_High (1UL)
#define GPIO_OUTSET_PIN20_Set (1UL)

/* Bit 19 : Pin 19. */
#define GPIO_OUTSET_PIN19_Pos (19UL)
#define GPIO_OUTSET_PIN19_Msk (0x1UL << GPIO_OUTSET_PIN19_Pos)
#define GPIO_OUTSET_PIN19_Low (0UL)
#define GPIO_OUTSET_PIN19_High (1UL)
#define GPIO_OUTSET_PIN19_Set (1UL)

/* Bit 18 : Pin 18. */
#define GPIO_OUTSET_PIN18_Pos (18UL)
#define GPIO_OUTSET_PIN18_Msk (0x1UL << GPIO_OUTSET_PIN18_Pos)
#define GPIO_OUTSET_PIN18_Low (0UL)
#define GPIO_OUTSET_PIN18_High (1UL)
#define GPIO_OUTSET_PIN18_Set (1UL)

/* Bit 17 : Pin 17. */
#define GPIO_OUTSET_PIN17_Pos (17UL)
#define GPIO_OUTSET_PIN17_Msk (0x1UL << GPIO_OUTSET_PIN17_Pos)
#define GPIO_OUTSET_PIN17_Low (0UL)
#define GPIO_OUTSET_PIN17_High (1UL)
#define GPIO_OUTSET_PIN17_Set (1UL)

/* Bit 16 : Pin 16. */
#define GPIO_OUTSET_PIN16_Pos (16UL)
#define GPIO_OUTSET_PIN16_Msk (0x1UL << GPIO_OUTSET_PIN16_Pos)
#define GPIO_OUTSET_PIN16_Low (0UL)
#define GPIO_OUTSET_PIN16_High (1UL)
#define GPIO_OUTSET_PIN16_Set (1UL)

/* Bit 15 : Pin 15. */
#define GPIO_OUTSET_PIN15_Pos (15UL)
#define GPIO_OUTSET_PIN15_Msk (0x1UL << GPIO_OUTSET_PIN15_Pos)
#define GPIO_OUTSET_PIN15_Low (0UL)
#define GPIO_OUTSET_PIN15_High (1UL)
#define GPIO_OUTSET_PIN15_Set (1UL)

/* Bit 14 : Pin 14. */
#define GPIO_OUTSET_PIN14_Pos (14UL)
#define GPIO_OUTSET_PIN14_Msk (0x1UL << GPIO_OUTSET_PIN14_Pos)
#define GPIO_OUTSET_PIN14_Low (0UL)
#define GPIO_OUTSET_PIN14_High (1UL)
#define GPIO_OUTSET_PIN14_Set (1UL)

/* Bit 13 : Pin 13. */
#define GPIO_OUTSET_PIN13_Pos (13UL)
#define GPIO_OUTSET_PIN13_Msk (0x1UL << GPIO_OUTSET_PIN13_Pos)
#define GPIO_OUTSET_PIN13_Low (0UL)
#define GPIO_OUTSET_PIN13_High (1UL)
#define GPIO_OUTSET_PIN13_Set (1UL)

/* Bit 12 : Pin 12. */
#define GPIO_OUTSET_PIN12_Pos (12UL)
#define GPIO_OUTSET_PIN12_Msk (0x1UL << GPIO_OUTSET_PIN12_Pos)
#define GPIO_OUTSET_PIN12_Low (0UL)
#define GPIO_OUTSET_PIN12_High (1UL)
#define GPIO_OUTSET_PIN12_Set (1UL)

/* Bit 11 : Pin 11. */
#define GPIO_OUTSET_PIN11_Pos (11UL)
#define GPIO_OUTSET_PIN11_Msk (0x1UL << GPIO_OUTSET_PIN11_Pos)
#define GPIO_OUTSET_PIN11_Low (0UL)
#define GPIO_OUTSET_PIN11_High (1UL)
#define GPIO_OUTSET_PIN11_Set (1UL)

/* Bit 10 : Pin 10. */
#define GPIO_OUTSET_PIN10_Pos (10UL)
#define GPIO_OUTSET_PIN10_Msk (0x1UL << GPIO_OUTSET_PIN10_Pos)
#define GPIO_OUTSET_PIN10_Low (0UL)
#define GPIO_OUTSET_PIN10_High (1UL)
#define GPIO_OUTSET_PIN10_Set (1UL)

/* Bit 9 : Pin 9. */
#define GPIO_OUTSET_PIN9_Pos (9UL)
#define GPIO_OUTSET_PIN9_Msk (0x1UL << GPIO_OUTSET_PIN9_Pos)
#define GPIO_OUTSET_PIN9_Low (0UL)
#define GPIO_OUTSET_PIN9_High (1UL)
#define GPIO_OUTSET_PIN9_Set (1UL)

/* Bit 8 : Pin 8. */
#define GPIO_OUTSET_PIN8_Pos (8UL)
#define GPIO_OUTSET_PIN8_Msk (0x1UL << GPIO_OUTSET_PIN8_Pos)
#define GPIO_OUTSET_PIN8_Low (0UL)
#define GPIO_OUTSET_PIN8_High (1UL)
#define GPIO_OUTSET_PIN8_Set (1UL)

/* Bit 7 : Pin 7. */
#define GPIO_OUTSET_PIN7_Pos (7UL)
#define GPIO_OUTSET_PIN7_Msk (0x1UL << GPIO_OUTSET_PIN7_Pos)
#define GPIO_OUTSET_PIN7_Low (0UL)
#define GPIO_OUTSET_PIN7_High (1UL)
#define GPIO_OUTSET_PIN7_Set (1UL)

/* Bit 6 : Pin 6. */
#define GPIO_OUTSET_PIN6_Pos (6UL)
#define GPIO_OUTSET_PIN6_Msk (0x1UL << GPIO_OUTSET_PIN6_Pos)
#define GPIO_OUTSET_PIN6_Low (0UL)
#define GPIO_OUTSET_PIN6_High (1UL)
#define GPIO_OUTSET_PIN6_Set (1UL)

/* Bit 5 : Pin 5. */
#define GPIO_OUTSET_PIN5_Pos (5UL)
#define GPIO_OUTSET_PIN5_Msk (0x1UL << GPIO_OUTSET_PIN5_Pos)
#define GPIO_OUTSET_PIN5_Low (0UL)
#define GPIO_OUTSET_PIN5_High (1UL)
#define GPIO_OUTSET_PIN5_Set (1UL)

/* Bit 4 : Pin 4. */
#define GPIO_OUTSET_PIN4_Pos (4UL)
#define GPIO_OUTSET_PIN4_Msk (0x1UL << GPIO_OUTSET_PIN4_Pos)
#define GPIO_OUTSET_PIN4_Low (0UL)
#define GPIO_OUTSET_PIN4_High (1UL)
#define GPIO_OUTSET_PIN4_Set (1UL)

/* Bit 3 : Pin 3. */
#define GPIO_OUTSET_PIN3_Pos (3UL)
#define GPIO_OUTSET_PIN3_Msk (0x1UL << GPIO_OUTSET_PIN3_Pos)
#define GPIO_OUTSET_PIN3_Low (0UL)
#define GPIO_OUTSET_PIN3_High (1UL)
#define GPIO_OUTSET_PIN3_Set (1UL)

/* Bit 2 : Pin 2. */
#define GPIO_OUTSET_PIN2_Pos (2UL)
#define GPIO_OUTSET_PIN2_Msk (0x1UL << GPIO_OUTSET_PIN2_Pos)
#define GPIO_OUTSET_PIN2_Low (0UL)
#define GPIO_OUTSET_PIN2_High (1UL)
#define GPIO_OUTSET_PIN2_Set (1UL)

/* Bit 1 : Pin 1. */
#define GPIO_OUTSET_PIN1_Pos (1UL)
#define GPIO_OUTSET_PIN1_Msk (0x1UL << GPIO_OUTSET_PIN1_Pos)
#define GPIO_OUTSET_PIN1_Low (0UL)
#define GPIO_OUTSET_PIN1_High (1UL)
#define GPIO_OUTSET_PIN1_Set (1UL)

/* Bit 0 : Pin 0. */
#define GPIO_OUTSET_PIN0_Pos (0UL)
#define GPIO_OUTSET_PIN0_Msk (0x1UL << GPIO_OUTSET_PIN0_Pos)
#define GPIO_OUTSET_PIN0_Low (0UL)
#define GPIO_OUTSET_PIN0_High (1UL)
#define GPIO_OUTSET_PIN0_Set (1UL)

/* Register: GPIO_OUTCLR */
/* Description: Clear individual bits in GPIO port. */

/* Bit 31 : Pin 31. */
#define GPIO_OUTCLR_PIN31_Pos (31UL)
#define GPIO_OUTCLR_PIN31_Msk (0x1UL << GPIO_OUTCLR_PIN31_Pos)
#define GPIO_OUTCLR_PIN31_Low (0UL)
#define GPIO_OUTCLR_PIN31_High (1UL)
#define GPIO_OUTCLR_PIN31_Clear (1UL)

/* Bit 30 : Pin 30. */
#define GPIO_OUTCLR_PIN30_Pos (30UL)
#define GPIO_OUTCLR_PIN30_Msk (0x1UL << GPIO_OUTCLR_PIN30_Pos)
#define GPIO_OUTCLR_PIN30_Low (0UL)
#define GPIO_OUTCLR_PIN30_High (1UL)
#define GPIO_OUTCLR_PIN30_Clear (1UL)

/* Bit 29 : Pin 29. */
#define GPIO_OUTCLR_PIN29_Pos (29UL)
#define GPIO_OUTCLR_PIN29_Msk (0x1UL << GPIO_OUTCLR_PIN29_Pos)
#define GPIO_OUTCLR_PIN29_Low (0UL)
#define GPIO_OUTCLR_PIN29_High (1UL)
#define GPIO_OUTCLR_PIN29_Clear (1UL)

/* Bit 28 : Pin 28. */
#define GPIO_OUTCLR_PIN28_Pos (28UL)
#define GPIO_OUTCLR_PIN28_Msk (0x1UL << GPIO_OUTCLR_PIN28_Pos)
#define GPIO_OUTCLR_PIN28_Low (0UL)
#define GPIO_OUTCLR_PIN28_High (1UL)
#define GPIO_OUTCLR_PIN28_Clear (1UL)

/* Bit 27 : Pin 27. */
#define GPIO_OUTCLR_PIN27_Pos (27UL)
#define GPIO_OUTCLR_PIN27_Msk (0x1UL << GPIO_OUTCLR_PIN27_Pos)
#define GPIO_OUTCLR_PIN27_Low (0UL)
#define GPIO_OUTCLR_PIN27_High (1UL)
#define GPIO_OUTCLR_PIN27_Clear (1UL)

/* Bit 26 : Pin 26. */
#define GPIO_OUTCLR_PIN26_Pos (26UL)
#define GPIO_OUTCLR_PIN26_Msk (0x1UL << GPIO_OUTCLR_PIN26_Pos)
#define GPIO_OUTCLR_PIN26_Low (0UL)
#define GPIO_OUTCLR_PIN26_High (1UL)
#define GPIO_OUTCLR_PIN26_Clear (1UL)

/* Bit 25 : Pin 25. */
#define GPIO_OUTCLR_PIN25_Pos (25UL)
#define GPIO_OUTCLR_PIN25_Msk (0x1UL << GPIO_OUTCLR_PIN25_Pos)
#define GPIO_OUTCLR_PIN25_Low (0UL)
#define GPIO_OUTCLR_PIN25_High (1UL)
#define GPIO_OUTCLR_PIN25_Clear (1UL)

/* Bit 24 : Pin 24. */
#define GPIO_OUTCLR_PIN24_Pos (24UL)
#define GPIO_OUTCLR_PIN24_Msk (0x1UL << GPIO_OUTCLR_PIN24_Pos)
#define GPIO_OUTCLR_PIN24_Low (0UL)
#define GPIO_OUTCLR_PIN24_High (1UL)
#define GPIO_OUTCLR_PIN24_Clear (1UL)

/* Bit 23 : Pin 23. */
#define GPIO_OUTCLR_PIN23_Pos (23UL)
#define GPIO_OUTCLR_PIN23_Msk (0x1UL << GPIO_OUTCLR_PIN23_Pos)
#define GPIO_OUTCLR_PIN23_Low (0UL)
#define GPIO_OUTCLR_PIN23_High (1UL)
#define GPIO_OUTCLR_PIN23_Clear (1UL)

/* Bit 22 : Pin 22. */
#define GPIO_OUTCLR_PIN22_Pos (22UL)
#define GPIO_OUTCLR_PIN22_Msk (0x1UL << GPIO_OUTCLR_PIN22_Pos)
#define GPIO_OUTCLR_PIN22_Low (0UL)
#define GPIO_OUTCLR_PIN22_High (1UL)
#define GPIO_OUTCLR_PIN22_Clear (1UL)

/* Bit 21 : Pin 21. */
#define GPIO_OUTCLR_PIN21_Pos (21UL)
#define GPIO_OUTCLR_PIN21_Msk (0x1UL << GPIO_OUTCLR_PIN21_Pos)
#define GPIO_OUTCLR_PIN21_Low (0UL)
#define GPIO_OUTCLR_PIN21_High (1UL)
#define GPIO_OUTCLR_PIN21_Clear (1UL)

/* Bit 20 : Pin 20. */
#define GPIO_OUTCLR_PIN20_Pos (20UL)
#define GPIO_OUTCLR_PIN20_Msk (0x1UL << GPIO_OUTCLR_PIN20_Pos)
#define GPIO_OUTCLR_PIN20_Low (0UL)
#define GPIO_OUTCLR_PIN20_High (1UL)
#define GPIO_OUTCLR_PIN20_Clear (1UL)

/* Bit 19 : Pin 19. */
#define GPIO_OUTCLR_PIN19_Pos (19UL)
#define GPIO_OUTCLR_PIN19_Msk (0x1UL << GPIO_OUTCLR_PIN19_Pos)
#define GPIO_OUTCLR_PIN19_Low (0UL)
#define GPIO_OUTCLR_PIN19_High (1UL)
#define GPIO_OUTCLR_PIN19_Clear (1UL)

/* Bit 18 : Pin 18. */
#define GPIO_OUTCLR_PIN18_Pos (18UL)
#define GPIO_OUTCLR_PIN18_Msk (0x1UL << GPIO_OUTCLR_PIN18_Pos)
#define GPIO_OUTCLR_PIN18_Low (0UL)
#define GPIO_OUTCLR_PIN18_High (1UL)
#define GPIO_OUTCLR_PIN18_Clear (1UL)

/* Bit 17 : Pin 17. */
#define GPIO_OUTCLR_PIN17_Pos (17UL)
#define GPIO_OUTCLR_PIN17_Msk (0x1UL << GPIO_OUTCLR_PIN17_Pos)
#define GPIO_OUTCLR_PIN17_Low (0UL)
#define GPIO_OUTCLR_PIN17_High (1UL)
#define GPIO_OUTCLR_PIN17_Clear (1UL)

/* Bit 16 : Pin 16. */
#define GPIO_OUTCLR_PIN16_Pos (16UL)
#define GPIO_OUTCLR_PIN16_Msk (0x1UL << GPIO_OUTCLR_PIN16_Pos)
#define GPIO_OUTCLR_PIN16_Low (0UL)
#define GPIO_OUTCLR_PIN16_High (1UL)
#define GPIO_OUTCLR_PIN16_Clear (1UL)

/* Bit 15 : Pin 15. */
#define GPIO_OUTCLR_PIN15_Pos (15UL)
#define GPIO_OUTCLR_PIN15_Msk (0x1UL << GPIO_OUTCLR_PIN15_Pos)
#define GPIO_OUTCLR_PIN15_Low (0UL)
#define GPIO_OUTCLR_PIN15_High (1UL)
#define GPIO_OUTCLR_PIN15_Clear (1UL)

/* Bit 14 : Pin 14. */
#define GPIO_OUTCLR_PIN14_Pos (14UL)
#define GPIO_OUTCLR_PIN14_Msk (0x1UL << GPIO_OUTCLR_PIN14_Pos)
#define GPIO_OUTCLR_PIN14_Low (0UL)
#define GPIO_OUTCLR_PIN14_High (1UL)
#define GPIO_OUTCLR_PIN14_Clear (1UL)

/* Bit 13 : Pin 13. */
#define GPIO_OUTCLR_PIN13_Pos (13UL)
#define GPIO_OUTCLR_PIN13_Msk (0x1UL << GPIO_OUTCLR_PIN13_Pos)
#define GPIO_OUTCLR_PIN13_Low (0UL)
#define GPIO_OUTCLR_PIN13_High (1UL)
#define GPIO_OUTCLR_PIN13_Clear (1UL)

/* Bit 12 : Pin 12. */
#define GPIO_OUTCLR_PIN12_Pos (12UL)
#define GPIO_OUTCLR_PIN12_Msk (0x1UL << GPIO_OUTCLR_PIN12_Pos)
#define GPIO_OUTCLR_PIN12_Low (0UL)
#define GPIO_OUTCLR_PIN12_High (1UL)
#define GPIO_OUTCLR_PIN12_Clear (1UL)

/* Bit 11 : Pin 11. */
#define GPIO_OUTCLR_PIN11_Pos (11UL)
#define GPIO_OUTCLR_PIN11_Msk (0x1UL << GPIO_OUTCLR_PIN11_Pos)
#define GPIO_OUTCLR_PIN11_Low (0UL)
#define GPIO_OUTCLR_PIN11_High (1UL)
#define GPIO_OUTCLR_PIN11_Clear (1UL)

/* Bit 10 : Pin 10. */
#define GPIO_OUTCLR_PIN10_Pos (10UL)
#define GPIO_OUTCLR_PIN10_Msk (0x1UL << GPIO_OUTCLR_PIN10_Pos)
#define GPIO_OUTCLR_PIN10_Low (0UL)
#define GPIO_OUTCLR_PIN10_High (1UL)
#define GPIO_OUTCLR_PIN10_Clear (1UL)

/* Bit 9 : Pin 9. */
#define GPIO_OUTCLR_PIN9_Pos (9UL)
#define GPIO_OUTCLR_PIN9_Msk (0x1UL << GPIO_OUTCLR_PIN9_Pos)
#define GPIO_OUTCLR_PIN9_Low (0UL)
#define GPIO_OUTCLR_PIN9_High (1UL)
#define GPIO_OUTCLR_PIN9_Clear (1UL)

/* Bit 8 : Pin 8. */
#define GPIO_OUTCLR_PIN8_Pos (8UL)
#define GPIO_OUTCLR_PIN8_Msk (0x1UL << GPIO_OUTCLR_PIN8_Pos)
#define GPIO_OUTCLR_PIN8_Low (0UL)
#define GPIO_OUTCLR_PIN8_High (1UL)
#define GPIO_OUTCLR_PIN8_Clear (1UL)

/* Bit 7 : Pin 7. */
#define GPIO_OUTCLR_PIN7_Pos (7UL)
#define GPIO_OUTCLR_PIN7_Msk (0x1UL << GPIO_OUTCLR_PIN7_Pos)
#define GPIO_OUTCLR_PIN7_Low (0UL)
#define GPIO_OUTCLR_PIN7_High (1UL)
#define GPIO_OUTCLR_PIN7_Clear (1UL)

/* Bit 6 : Pin 6. */
#define GPIO_OUTCLR_PIN6_Pos (6UL)
#define GPIO_OUTCLR_PIN6_Msk (0x1UL << GPIO_OUTCLR_PIN6_Pos)
#define GPIO_OUTCLR_PIN6_Low (0UL)
#define GPIO_OUTCLR_PIN6_High (1UL)
#define GPIO_OUTCLR_PIN6_Clear (1UL)

/* Bit 5 : Pin 5. */
#define GPIO_OUTCLR_PIN5_Pos (5UL)
#define GPIO_OUTCLR_PIN5_Msk (0x1UL << GPIO_OUTCLR_PIN5_Pos)
#define GPIO_OUTCLR_PIN5_Low (0UL)
#define GPIO_OUTCLR_PIN5_High (1UL)
#define GPIO_OUTCLR_PIN5_Clear (1UL)

/* Bit 4 : Pin 4. */
#define GPIO_OUTCLR_PIN4_Pos (4UL)
#define GPIO_OUTCLR_PIN4_Msk (0x1UL << GPIO_OUTCLR_PIN4_Pos)
#define GPIO_OUTCLR_PIN4_Low (0UL)
#define GPIO_OUTCLR_PIN4_High (1UL)
#define GPIO_OUTCLR_PIN4_Clear (1UL)

/* Bit 3 : Pin 3. */
#define GPIO_OUTCLR_PIN3_Pos (3UL)
#define GPIO_OUTCLR_PIN3_Msk (0x1UL << GPIO_OUTCLR_PIN3_Pos)
#define GPIO_OUTCLR_PIN3_Low (0UL)
#define GPIO_OUTCLR_PIN3_High (1UL)
#define GPIO_OUTCLR_PIN3_Clear (1UL)

/* Bit 2 : Pin 2. */
#define GPIO_OUTCLR_PIN2_Pos (2UL)
#define GPIO_OUTCLR_PIN2_Msk (0x1UL << GPIO_OUTCLR_PIN2_Pos)
#define GPIO_OUTCLR_PIN2_Low (0UL)
#define GPIO_OUTCLR_PIN2_High (1UL)
#define GPIO_OUTCLR_PIN2_Clear (1UL)

/* Bit 1 : Pin 1. */
#define GPIO_OUTCLR_PIN1_Pos (1UL)
#define GPIO_OUTCLR_PIN1_Msk (0x1UL << GPIO_OUTCLR_PIN1_Pos)
#define GPIO_OUTCLR_PIN1_Low (0UL)
#define GPIO_OUTCLR_PIN1_High (1UL)
#define GPIO_OUTCLR_PIN1_Clear (1UL)

/* Bit 0 : Pin 0. */
#define GPIO_OUTCLR_PIN0_Pos (0UL)
#define GPIO_OUTCLR_PIN0_Msk (0x1UL << GPIO_OUTCLR_PIN0_Pos)
#define GPIO_OUTCLR_PIN0_Low (0UL)
#define GPIO_OUTCLR_PIN0_High (1UL)
#define GPIO_OUTCLR_PIN0_Clear (1UL)

/* Register: GPIO_IN */
/* Description: Read GPIO port. */

/* Bit 31 : Pin 31. */
#define GPIO_IN_PIN31_Pos (31UL)
#define GPIO_IN_PIN31_Msk (0x1UL << GPIO_IN_PIN31_Pos)
#define GPIO_IN_PIN31_Low (0UL)
#define GPIO_IN_PIN31_High (1UL)

/* Bit 30 : Pin 30. */
#define GPIO_IN_PIN30_Pos (30UL)
#define GPIO_IN_PIN30_Msk (0x1UL << GPIO_IN_PIN30_Pos)
#define GPIO_IN_PIN30_Low (0UL)
#define GPIO_IN_PIN30_High (1UL)

/* Bit 29 : Pin 29. */
#define GPIO_IN_PIN29_Pos (29UL)
#define GPIO_IN_PIN29_Msk (0x1UL << GPIO_IN_PIN29_Pos)
#define GPIO_IN_PIN29_Low (0UL)
#define GPIO_IN_PIN29_High (1UL)

/* Bit 28 : Pin 28. */
#define GPIO_IN_PIN28_Pos (28UL)
#define GPIO_IN_PIN28_Msk (0x1UL << GPIO_IN_PIN28_Pos)
#define GPIO_IN_PIN28_Low (0UL)
#define GPIO_IN_PIN28_High (1UL)

/* Bit 27 : Pin 27. */
#define GPIO_IN_PIN27_Pos (27UL)
#define GPIO_IN_PIN27_Msk (0x1UL << GPIO_IN_PIN27_Pos)
#define GPIO_IN_PIN27_Low (0UL)
#define GPIO_IN_PIN27_High (1UL)

/* Bit 26 : Pin 26. */
#define GPIO_IN_PIN26_Pos (26UL)
#define GPIO_IN_PIN26_Msk (0x1UL << GPIO_IN_PIN26_Pos)
#define GPIO_IN_PIN26_Low (0UL)
#define GPIO_IN_PIN26_High (1UL)

/* Bit 25 : Pin 25. */
#define GPIO_IN_PIN25_Pos (25UL)
#define GPIO_IN_PIN25_Msk (0x1UL << GPIO_IN_PIN25_Pos)
#define GPIO_IN_PIN25_Low (0UL)
#define GPIO_IN_PIN25_High (1UL)

/* Bit 24 : Pin 24. */
#define GPIO_IN_PIN24_Pos (24UL)
#define GPIO_IN_PIN24_Msk (0x1UL << GPIO_IN_PIN24_Pos)
#define GPIO_IN_PIN24_Low (0UL)
#define GPIO_IN_PIN24_High (1UL)

/* Bit 23 : Pin 23. */
#define GPIO_IN_PIN23_Pos (23UL)
#define GPIO_IN_PIN23_Msk (0x1UL << GPIO_IN_PIN23_Pos)
#define GPIO_IN_PIN23_Low (0UL)
#define GPIO_IN_PIN23_High (1UL)

/* Bit 22 : Pin 22. */
#define GPIO_IN_PIN22_Pos (22UL)
#define GPIO_IN_PIN22_Msk (0x1UL << GPIO_IN_PIN22_Pos)
#define GPIO_IN_PIN22_Low (0UL)
#define GPIO_IN_PIN22_High (1UL)

/* Bit 21 : Pin 21. */
#define GPIO_IN_PIN21_Pos (21UL)
#define GPIO_IN_PIN21_Msk (0x1UL << GPIO_IN_PIN21_Pos)
#define GPIO_IN_PIN21_Low (0UL)
#define GPIO_IN_PIN21_High (1UL)

/* Bit 20 : Pin 20. */
#define GPIO_IN_PIN20_Pos (20UL)
#define GPIO_IN_PIN20_Msk (0x1UL << GPIO_IN_PIN20_Pos)
#define GPIO_IN_PIN20_Low (0UL)
#define GPIO_IN_PIN20_High (1UL)

/* Bit 19 : Pin 19. */
#define GPIO_IN_PIN19_Pos (19UL)
#define GPIO_IN_PIN19_Msk (0x1UL << GPIO_IN_PIN19_Pos)
#define GPIO_IN_PIN19_Low (0UL)
#define GPIO_IN_PIN19_High (1UL)

/* Bit 18 : Pin 18. */
#define GPIO_IN_PIN18_Pos (18UL)
#define GPIO_IN_PIN18_Msk (0x1UL << GPIO_IN_PIN18_Pos)
#define GPIO_IN_PIN18_Low (0UL)
#define GPIO_IN_PIN18_High (1UL)

/* Bit 17 : Pin 17. */
#define GPIO_IN_PIN17_Pos (17UL)
#define GPIO_IN_PIN17_Msk (0x1UL << GPIO_IN_PIN17_Pos)
#define GPIO_IN_PIN17_Low (0UL)
#define GPIO_IN_PIN17_High (1UL)

/* Bit 16 : Pin 16. */
#define GPIO_IN_PIN16_Pos (16UL)
#define GPIO_IN_PIN16_Msk (0x1UL << GPIO_IN_PIN16_Pos)
#define GPIO_IN_PIN16_Low (0UL)
#define GPIO_IN_PIN16_High (1UL)

/* Bit 15 : Pin 15. */
#define GPIO_IN_PIN15_Pos (15UL)
#define GPIO_IN_PIN15_Msk (0x1UL << GPIO_IN_PIN15_Pos)
#define GPIO_IN_PIN15_Low (0UL)
#define GPIO_IN_PIN15_High (1UL)

/* Bit 14 : Pin 14. */
#define GPIO_IN_PIN14_Pos (14UL)
#define GPIO_IN_PIN14_Msk (0x1UL << GPIO_IN_PIN14_Pos)
#define GPIO_IN_PIN14_Low (0UL)
#define GPIO_IN_PIN14_High (1UL)

/* Bit 13 : Pin 13. */
#define GPIO_IN_PIN13_Pos (13UL)
#define GPIO_IN_PIN13_Msk (0x1UL << GPIO_IN_PIN13_Pos)
#define GPIO_IN_PIN13_Low (0UL)
#define GPIO_IN_PIN13_High (1UL)

/* Bit 12 : Pin 12. */
#define GPIO_IN_PIN12_Pos (12UL)
#define GPIO_IN_PIN12_Msk (0x1UL << GPIO_IN_PIN12_Pos)
#define GPIO_IN_PIN12_Low (0UL)
#define GPIO_IN_PIN12_High (1UL)

/* Bit 11 : Pin 11. */
#define GPIO_IN_PIN11_Pos (11UL)
#define GPIO_IN_PIN11_Msk (0x1UL << GPIO_IN_PIN11_Pos)
#define GPIO_IN_PIN11_Low (0UL)
#define GPIO_IN_PIN11_High (1UL)

/* Bit 10 : Pin 10. */
#define GPIO_IN_PIN10_Pos (10UL)
#define GPIO_IN_PIN10_Msk (0x1UL << GPIO_IN_PIN10_Pos)
#define GPIO_IN_PIN10_Low (0UL)
#define GPIO_IN_PIN10_High (1UL)

/* Bit 9 : Pin 9. */
#define GPIO_IN_PIN9_Pos (9UL)
#define GPIO_IN_PIN9_Msk (0x1UL << GPIO_IN_PIN9_Pos)
#define GPIO_IN_PIN9_Low (0UL)
#define GPIO_IN_PIN9_High (1UL)

/* Bit 8 : Pin 8. */
#define GPIO_IN_PIN8_Pos (8UL)
#define GPIO_IN_PIN8_Msk (0x1UL << GPIO_IN_PIN8_Pos)
#define GPIO_IN_PIN8_Low (0UL)
#define GPIO_IN_PIN8_High (1UL)

/* Bit 7 : Pin 7. */
#define GPIO_IN_PIN7_Pos (7UL)
#define GPIO_IN_PIN7_Msk (0x1UL << GPIO_IN_PIN7_Pos)
#define GPIO_IN_PIN7_Low (0UL)
#define GPIO_IN_PIN7_High (1UL)

/* Bit 6 : Pin 6. */
#define GPIO_IN_PIN6_Pos (6UL)
#define GPIO_IN_PIN6_Msk (0x1UL << GPIO_IN_PIN6_Pos)
#define GPIO_IN_PIN6_Low (0UL)
#define GPIO_IN_PIN6_High (1UL)

/* Bit 5 : Pin 5. */
#define GPIO_IN_PIN5_Pos (5UL)
#define GPIO_IN_PIN5_Msk (0x1UL << GPIO_IN_PIN5_Pos)
#define GPIO_IN_PIN5_Low (0UL)
#define GPIO_IN_PIN5_High (1UL)

/* Bit 4 : Pin 4. */
#define GPIO_IN_PIN4_Pos (4UL)
#define GPIO_IN_PIN4_Msk (0x1UL << GPIO_IN_PIN4_Pos)
#define GPIO_IN_PIN4_Low (0UL)
#define GPIO_IN_PIN4_High (1UL)

/* Bit 3 : Pin 3. */
#define GPIO_IN_PIN3_Pos (3UL)
#define GPIO_IN_PIN3_Msk (0x1UL << GPIO_IN_PIN3_Pos)
#define GPIO_IN_PIN3_Low (0UL)
#define GPIO_IN_PIN3_High (1UL)

/* Bit 2 : Pin 2. */
#define GPIO_IN_PIN2_Pos (2UL)
#define GPIO_IN_PIN2_Msk (0x1UL << GPIO_IN_PIN2_Pos)
#define GPIO_IN_PIN2_Low (0UL)
#define GPIO_IN_PIN2_High (1UL)

/* Bit 1 : Pin 1. */
#define GPIO_IN_PIN1_Pos (1UL)
#define GPIO_IN_PIN1_Msk (0x1UL << GPIO_IN_PIN1_Pos)
#define GPIO_IN_PIN1_Low (0UL)
#define GPIO_IN_PIN1_High (1UL)

/* Bit 0 : Pin 0. */
#define GPIO_IN_PIN0_Pos (0UL)
#define GPIO_IN_PIN0_Msk (0x1UL << GPIO_IN_PIN0_Pos)
#define GPIO_IN_PIN0_Low (0UL)
#define GPIO_IN_PIN0_High (1UL)

/* Register: GPIO_DIR */
/* Description: Direction of GPIO pins. */

/* Bit 31 : Pin 31. */
#define GPIO_DIR_PIN31_Pos (31UL)
#define GPIO_DIR_PIN31_Msk (0x1UL << GPIO_DIR_PIN31_Pos)
#define GPIO_DIR_PIN31_Input (0UL)
#define GPIO_DIR_PIN31_Output (1UL)

/* Bit 30 : Pin 30. */
#define GPIO_DIR_PIN30_Pos (30UL)
#define GPIO_DIR_PIN30_Msk (0x1UL << GPIO_DIR_PIN30_Pos)
#define GPIO_DIR_PIN30_Input (0UL)
#define GPIO_DIR_PIN30_Output (1UL)

/* Bit 29 : Pin 29. */
#define GPIO_DIR_PIN29_Pos (29UL)
#define GPIO_DIR_PIN29_Msk (0x1UL << GPIO_DIR_PIN29_Pos)
#define GPIO_DIR_PIN29_Input (0UL)
#define GPIO_DIR_PIN29_Output (1UL)

/* Bit 28 : Pin 28. */
#define GPIO_DIR_PIN28_Pos (28UL)
#define GPIO_DIR_PIN28_Msk (0x1UL << GPIO_DIR_PIN28_Pos)
#define GPIO_DIR_PIN28_Input (0UL)
#define GPIO_DIR_PIN28_Output (1UL)

/* Bit 27 : Pin 27. */
#define GPIO_DIR_PIN27_Pos (27UL)
#define GPIO_DIR_PIN27_Msk (0x1UL << GPIO_DIR_PIN27_Pos)
#define GPIO_DIR_PIN27_Input (0UL)
#define GPIO_DIR_PIN27_Output (1UL)

/* Bit 26 : Pin 26. */
#define GPIO_DIR_PIN26_Pos (26UL)
#define GPIO_DIR_PIN26_Msk (0x1UL << GPIO_DIR_PIN26_Pos)
#define GPIO_DIR_PIN26_Input (0UL)
#define GPIO_DIR_PIN26_Output (1UL)

/* Bit 25 : Pin 25. */
#define GPIO_DIR_PIN25_Pos (25UL)
#define GPIO_DIR_PIN25_Msk (0x1UL << GPIO_DIR_PIN25_Pos)
#define GPIO_DIR_PIN25_Input (0UL)
#define GPIO_DIR_PIN25_Output (1UL)

/* Bit 24 : Pin 24. */
#define GPIO_DIR_PIN24_Pos (24UL)
#define GPIO_DIR_PIN24_Msk (0x1UL << GPIO_DIR_PIN24_Pos)
#define GPIO_DIR_PIN24_Input (0UL)
#define GPIO_DIR_PIN24_Output (1UL)

/* Bit 23 : Pin 23. */
#define GPIO_DIR_PIN23_Pos (23UL)
#define GPIO_DIR_PIN23_Msk (0x1UL << GPIO_DIR_PIN23_Pos)
#define GPIO_DIR_PIN23_Input (0UL)
#define GPIO_DIR_PIN23_Output (1UL)

/* Bit 22 : Pin 22. */
#define GPIO_DIR_PIN22_Pos (22UL)
#define GPIO_DIR_PIN22_Msk (0x1UL << GPIO_DIR_PIN22_Pos)
#define GPIO_DIR_PIN22_Input (0UL)
#define GPIO_DIR_PIN22_Output (1UL)

/* Bit 21 : Pin 21. */
#define GPIO_DIR_PIN21_Pos (21UL)
#define GPIO_DIR_PIN21_Msk (0x1UL << GPIO_DIR_PIN21_Pos)
#define GPIO_DIR_PIN21_Input (0UL)
#define GPIO_DIR_PIN21_Output (1UL)

/* Bit 20 : Pin 20. */
#define GPIO_DIR_PIN20_Pos (20UL)
#define GPIO_DIR_PIN20_Msk (0x1UL << GPIO_DIR_PIN20_Pos)
#define GPIO_DIR_PIN20_Input (0UL)
#define GPIO_DIR_PIN20_Output (1UL)

/* Bit 19 : Pin 19. */
#define GPIO_DIR_PIN19_Pos (19UL)
#define GPIO_DIR_PIN19_Msk (0x1UL << GPIO_DIR_PIN19_Pos)
#define GPIO_DIR_PIN19_Input (0UL)
#define GPIO_DIR_PIN19_Output (1UL)

/* Bit 18 : Pin 18. */
#define GPIO_DIR_PIN18_Pos (18UL)
#define GPIO_DIR_PIN18_Msk (0x1UL << GPIO_DIR_PIN18_Pos)
#define GPIO_DIR_PIN18_Input (0UL)
#define GPIO_DIR_PIN18_Output (1UL)

/* Bit 17 : Pin 17. */
#define GPIO_DIR_PIN17_Pos (17UL)
#define GPIO_DIR_PIN17_Msk (0x1UL << GPIO_DIR_PIN17_Pos)
#define GPIO_DIR_PIN17_Input (0UL)
#define GPIO_DIR_PIN17_Output (1UL)

/* Bit 16 : Pin 16. */
#define GPIO_DIR_PIN16_Pos (16UL)
#define GPIO_DIR_PIN16_Msk (0x1UL << GPIO_DIR_PIN16_Pos)
#define GPIO_DIR_PIN16_Input (0UL)
#define GPIO_DIR_PIN16_Output (1UL)

/* Bit 15 : Pin 15. */
#define GPIO_DIR_PIN15_Pos (15UL)
#define GPIO_DIR_PIN15_Msk (0x1UL << GPIO_DIR_PIN15_Pos)
#define GPIO_DIR_PIN15_Input (0UL)
#define GPIO_DIR_PIN15_Output (1UL)

/* Bit 14 : Pin 14. */
#define GPIO_DIR_PIN14_Pos (14UL)
#define GPIO_DIR_PIN14_Msk (0x1UL << GPIO_DIR_PIN14_Pos)
#define GPIO_DIR_PIN14_Input (0UL)
#define GPIO_DIR_PIN14_Output (1UL)

/* Bit 13 : Pin 13. */
#define GPIO_DIR_PIN13_Pos (13UL)
#define GPIO_DIR_PIN13_Msk (0x1UL << GPIO_DIR_PIN13_Pos)
#define GPIO_DIR_PIN13_Input (0UL)
#define GPIO_DIR_PIN13_Output (1UL)

/* Bit 12 : Pin 12. */
#define GPIO_DIR_PIN12_Pos (12UL)
#define GPIO_DIR_PIN12_Msk (0x1UL << GPIO_DIR_PIN12_Pos)
#define GPIO_DIR_PIN12_Input (0UL)
#define GPIO_DIR_PIN12_Output (1UL)

/* Bit 11 : Pin 11. */
#define GPIO_DIR_PIN11_Pos (11UL)
#define GPIO_DIR_PIN11_Msk (0x1UL << GPIO_DIR_PIN11_Pos)
#define GPIO_DIR_PIN11_Input (0UL)
#define GPIO_DIR_PIN11_Output (1UL)

/* Bit 10 : Pin 10. */
#define GPIO_DIR_PIN10_Pos (10UL)
#define GPIO_DIR_PIN10_Msk (0x1UL << GPIO_DIR_PIN10_Pos)
#define GPIO_DIR_PIN10_Input (0UL)
#define GPIO_DIR_PIN10_Output (1UL)

/* Bit 9 : Pin 9. */
#define GPIO_DIR_PIN9_Pos (9UL)
#define GPIO_DIR_PIN9_Msk (0x1UL << GPIO_DIR_PIN9_Pos)
#define GPIO_DIR_PIN9_Input (0UL)
#define GPIO_DIR_PIN9_Output (1UL)

/* Bit 8 : Pin 8. */
#define GPIO_DIR_PIN8_Pos (8UL)
#define GPIO_DIR_PIN8_Msk (0x1UL << GPIO_DIR_PIN8_Pos)
#define GPIO_DIR_PIN8_Input (0UL)
#define GPIO_DIR_PIN8_Output (1UL)

/* Bit 7 : Pin 7. */
#define GPIO_DIR_PIN7_Pos (7UL)
#define GPIO_DIR_PIN7_Msk (0x1UL << GPIO_DIR_PIN7_Pos)
#define GPIO_DIR_PIN7_Input (0UL)
#define GPIO_DIR_PIN7_Output (1UL)

/* Bit 6 : Pin 6. */
#define GPIO_DIR_PIN6_Pos (6UL)
#define GPIO_DIR_PIN6_Msk (0x1UL << GPIO_DIR_PIN6_Pos)
#define GPIO_DIR_PIN6_Input (0UL)
#define GPIO_DIR_PIN6_Output (1UL)

/* Bit 5 : Pin 5. */
#define GPIO_DIR_PIN5_Pos (5UL)
#define GPIO_DIR_PIN5_Msk (0x1UL << GPIO_DIR_PIN5_Pos)
#define GPIO_DIR_PIN5_Input (0UL)
#define GPIO_DIR_PIN5_Output (1UL)

/* Bit 4 : Pin 4. */
#define GPIO_DIR_PIN4_Pos (4UL)
#define GPIO_DIR_PIN4_Msk (0x1UL << GPIO_DIR_PIN4_Pos)
#define GPIO_DIR_PIN4_Input (0UL)
#define GPIO_DIR_PIN4_Output (1UL)

/* Bit 3 : Pin 3. */
#define GPIO_DIR_PIN3_Pos (3UL)
#define GPIO_DIR_PIN3_Msk (0x1UL << GPIO_DIR_PIN3_Pos)
#define GPIO_DIR_PIN3_Input (0UL)
#define GPIO_DIR_PIN3_Output (1UL)

/* Bit 2 : Pin 2. */
#define GPIO_DIR_PIN2_Pos (2UL)
#define GPIO_DIR_PIN2_Msk (0x1UL << GPIO_DIR_PIN2_Pos)
#define GPIO_DIR_PIN2_Input (0UL)
#define GPIO_DIR_PIN2_Output (1UL)

/* Bit 1 : Pin 1. */
#define GPIO_DIR_PIN1_Pos (1UL)
#define GPIO_DIR_PIN1_Msk (0x1UL << GPIO_DIR_PIN1_Pos)
#define GPIO_DIR_PIN1_Input (0UL)
#define GPIO_DIR_PIN1_Output (1UL)

/* Bit 0 : Pin 0. */
#define GPIO_DIR_PIN0_Pos (0UL)
#define GPIO_DIR_PIN0_Msk (0x1UL << GPIO_DIR_PIN0_Pos)
#define GPIO_DIR_PIN0_Input (0UL)
#define GPIO_DIR_PIN0_Output (1UL)

/* Register: GPIO_DIRSET */
/* Description: DIR set register. */

/* Bit 31 : Set as output pin 31. */
#define GPIO_DIRSET_PIN31_Pos (31UL)
#define GPIO_DIRSET_PIN31_Msk (0x1UL << GPIO_DIRSET_PIN31_Pos)
#define GPIO_DIRSET_PIN31_Input (0UL)
#define GPIO_DIRSET_PIN31_Output (1UL)
#define GPIO_DIRSET_PIN31_Set (1UL)

/* Bit 30 : Set as output pin 30. */
#define GPIO_DIRSET_PIN30_Pos (30UL)
#define GPIO_DIRSET_PIN30_Msk (0x1UL << GPIO_DIRSET_PIN30_Pos)
#define GPIO_DIRSET_PIN30_Input (0UL)
#define GPIO_DIRSET_PIN30_Output (1UL)
#define GPIO_DIRSET_PIN30_Set (1UL)

/* Bit 29 : Set as output pin 29. */
#define GPIO_DIRSET_PIN29_Pos (29UL)
#define GPIO_DIRSET_PIN29_Msk (0x1UL << GPIO_DIRSET_PIN29_Pos)
#define GPIO_DIRSET_PIN29_Input (0UL)
#define GPIO_DIRSET_PIN29_Output (1UL)
#define GPIO_DIRSET_PIN29_Set (1UL)

/* Bit 28 : Set as output pin 28. */
#define GPIO_DIRSET_PIN28_Pos (28UL)
#define GPIO_DIRSET_PIN28_Msk (0x1UL << GPIO_DIRSET_PIN28_Pos)
#define GPIO_DIRSET_PIN28_Input (0UL)
#define GPIO_DIRSET_PIN28_Output (1UL)
#define GPIO_DIRSET_PIN28_Set (1UL)

/* Bit 27 : Set as output pin 27. */
#define GPIO_DIRSET_PIN27_Pos (27UL)
#define GPIO_DIRSET_PIN27_Msk (0x1UL << GPIO_DIRSET_PIN27_Pos)
#define GPIO_DIRSET_PIN27_Input (0UL)
#define GPIO_DIRSET_PIN27_Output (1UL)
#define GPIO_DIRSET_PIN27_Set (1UL)

/* Bit 26 : Set as output pin 26. */
#define GPIO_DIRSET_PIN26_Pos (26UL)
#define GPIO_DIRSET_PIN26_Msk (0x1UL << GPIO_DIRSET_PIN26_Pos)
#define GPIO_DIRSET_PIN26_Input (0UL)
#define GPIO_DIRSET_PIN26_Output (1UL)
#define GPIO_DIRSET_PIN26_Set (1UL)

/* Bit 25 : Set as output pin 25. */
#define GPIO_DIRSET_PIN25_Pos (25UL)
#define GPIO_DIRSET_PIN25_Msk (0x1UL << GPIO_DIRSET_PIN25_Pos)
#define GPIO_DIRSET_PIN25_Input (0UL)
#define GPIO_DIRSET_PIN25_Output (1UL)
#define GPIO_DIRSET_PIN25_Set (1UL)

/* Bit 24 : Set as output pin 24. */
#define GPIO_DIRSET_PIN24_Pos (24UL)
#define GPIO_DIRSET_PIN24_Msk (0x1UL << GPIO_DIRSET_PIN24_Pos)
#define GPIO_DIRSET_PIN24_Input (0UL)
#define GPIO_DIRSET_PIN24_Output (1UL)
#define GPIO_DIRSET_PIN24_Set (1UL)

/* Bit 23 : Set as output pin 23. */
#define GPIO_DIRSET_PIN23_Pos (23UL)
#define GPIO_DIRSET_PIN23_Msk (0x1UL << GPIO_DIRSET_PIN23_Pos)
#define GPIO_DIRSET_PIN23_Input (0UL)
#define GPIO_DIRSET_PIN23_Output (1UL)
#define GPIO_DIRSET_PIN23_Set (1UL)

/* Bit 22 : Set as output pin 22. */
#define GPIO_DIRSET_PIN22_Pos (22UL)
#define GPIO_DIRSET_PIN22_Msk (0x1UL << GPIO_DIRSET_PIN22_Pos)
#define GPIO_DIRSET_PIN22_Input (0UL)
#define GPIO_DIRSET_PIN22_Output (1UL)
#define GPIO_DIRSET_PIN22_Set (1UL)

/* Bit 21 : Set as output pin 21. */
#define GPIO_DIRSET_PIN21_Pos (21UL)
#define GPIO_DIRSET_PIN21_Msk (0x1UL << GPIO_DIRSET_PIN21_Pos)
#define GPIO_DIRSET_PIN21_Input (0UL)
#define GPIO_DIRSET_PIN21_Output (1UL)
#define GPIO_DIRSET_PIN21_Set (1UL)

/* Bit 20 : Set as output pin 20. */
#define GPIO_DIRSET_PIN20_Pos (20UL)
#define GPIO_DIRSET_PIN20_Msk (0x1UL << GPIO_DIRSET_PIN20_Pos)
#define GPIO_DIRSET_PIN20_Input (0UL)
#define GPIO_DIRSET_PIN20_Output (1UL)
#define GPIO_DIRSET_PIN20_Set (1UL)

/* Bit 19 : Set as output pin 19. */
#define GPIO_DIRSET_PIN19_Pos (19UL)
#define GPIO_DIRSET_PIN19_Msk (0x1UL << GPIO_DIRSET_PIN19_Pos)
#define GPIO_DIRSET_PIN19_Input (0UL)
#define GPIO_DIRSET_PIN19_Output (1UL)
#define GPIO_DIRSET_PIN19_Set (1UL)

/* Bit 18 : Set as output pin 18. */
#define GPIO_DIRSET_PIN18_Pos (18UL)
#define GPIO_DIRSET_PIN18_Msk (0x1UL << GPIO_DIRSET_PIN18_Pos)
#define GPIO_DIRSET_PIN18_Input (0UL)
#define GPIO_DIRSET_PIN18_Output (1UL)
#define GPIO_DIRSET_PIN18_Set (1UL)

/* Bit 17 : Set as output pin 17. */
#define GPIO_DIRSET_PIN17_Pos (17UL)
#define GPIO_DIRSET_PIN17_Msk (0x1UL << GPIO_DIRSET_PIN17_Pos)
#define GPIO_DIRSET_PIN17_Input (0UL)
#define GPIO_DIRSET_PIN17_Output (1UL)
#define GPIO_DIRSET_PIN17_Set (1UL)

/* Bit 16 : Set as output pin 16. */
#define GPIO_DIRSET_PIN16_Pos (16UL)
#define GPIO_DIRSET_PIN16_Msk (0x1UL << GPIO_DIRSET_PIN16_Pos)
#define GPIO_DIRSET_PIN16_Input (0UL)
#define GPIO_DIRSET_PIN16_Output (1UL)
#define GPIO_DIRSET_PIN16_Set (1UL)

/* Bit 15 : Set as output pin 15. */
#define GPIO_DIRSET_PIN15_Pos (15UL)
#define GPIO_DIRSET_PIN15_Msk (0x1UL << GPIO_DIRSET_PIN15_Pos)
#define GPIO_DIRSET_PIN15_Input (0UL)
#define GPIO_DIRSET_PIN15_Output (1UL)
#define GPIO_DIRSET_PIN15_Set (1UL)

/* Bit 14 : Set as output pin 14. */
#define GPIO_DIRSET_PIN14_Pos (14UL)
#define GPIO_DIRSET_PIN14_Msk (0x1UL << GPIO_DIRSET_PIN14_Pos)
#define GPIO_DIRSET_PIN14_Input (0UL)
#define GPIO_DIRSET_PIN14_Output (1UL)
#define GPIO_DIRSET_PIN14_Set (1UL)

/* Bit 13 : Set as output pin 13. */
#define GPIO_DIRSET_PIN13_Pos (13UL)
#define GPIO_DIRSET_PIN13_Msk (0x1UL << GPIO_DIRSET_PIN13_Pos)
#define GPIO_DIRSET_PIN13_Input (0UL)
#define GPIO_DIRSET_PIN13_Output (1UL)
#define GPIO_DIRSET_PIN13_Set (1UL)

/* Bit 12 : Set as output pin 12. */
#define GPIO_DIRSET_PIN12_Pos (12UL)
#define GPIO_DIRSET_PIN12_Msk (0x1UL << GPIO_DIRSET_PIN12_Pos)
#define GPIO_DIRSET_PIN12_Input (0UL)
#define GPIO_DIRSET_PIN12_Output (1UL)
#define GPIO_DIRSET_PIN12_Set (1UL)

/* Bit 11 : Set as output pin 11. */
#define GPIO_DIRSET_PIN11_Pos (11UL)
#define GPIO_DIRSET_PIN11_Msk (0x1UL << GPIO_DIRSET_PIN11_Pos)
#define GPIO_DIRSET_PIN11_Input (0UL)
#define GPIO_DIRSET_PIN11_Output (1UL)
#define GPIO_DIRSET_PIN11_Set (1UL)

/* Bit 10 : Set as output pin 10. */
#define GPIO_DIRSET_PIN10_Pos (10UL)
#define GPIO_DIRSET_PIN10_Msk (0x1UL << GPIO_DIRSET_PIN10_Pos)
#define GPIO_DIRSET_PIN10_Input (0UL)
#define GPIO_DIRSET_PIN10_Output (1UL)
#define GPIO_DIRSET_PIN10_Set (1UL)

/* Bit 9 : Set as output pin 9. */
#define GPIO_DIRSET_PIN9_Pos (9UL)
#define GPIO_DIRSET_PIN9_Msk (0x1UL << GPIO_DIRSET_PIN9_Pos)
#define GPIO_DIRSET_PIN9_Input (0UL)
#define GPIO_DIRSET_PIN9_Output (1UL)
#define GPIO_DIRSET_PIN9_Set (1UL)

/* Bit 8 : Set as output pin 8. */
#define GPIO_DIRSET_PIN8_Pos (8UL)
#define GPIO_DIRSET_PIN8_Msk (0x1UL << GPIO_DIRSET_PIN8_Pos)
#define GPIO_DIRSET_PIN8_Input (0UL)
#define GPIO_DIRSET_PIN8_Output (1UL)
#define GPIO_DIRSET_PIN8_Set (1UL)

/* Bit 7 : Set as output pin 7. */
#define GPIO_DIRSET_PIN7_Pos (7UL)
#define GPIO_DIRSET_PIN7_Msk (0x1UL << GPIO_DIRSET_PIN7_Pos)
#define GPIO_DIRSET_PIN7_Input (0UL)
#define GPIO_DIRSET_PIN7_Output (1UL)
#define GPIO_DIRSET_PIN7_Set (1UL)

/* Bit 6 : Set as output pin 6. */
#define GPIO_DIRSET_PIN6_Pos (6UL)
#define GPIO_DIRSET_PIN6_Msk (0x1UL << GPIO_DIRSET_PIN6_Pos)
#define GPIO_DIRSET_PIN6_Input (0UL)
#define GPIO_DIRSET_PIN6_Output (1UL)
#define GPIO_DIRSET_PIN6_Set (1UL)

/* Bit 5 : Set as output pin 5. */
#define GPIO_DIRSET_PIN5_Pos (5UL)
#define GPIO_DIRSET_PIN5_Msk (0x1UL << GPIO_DIRSET_PIN5_Pos)
#define GPIO_DIRSET_PIN5_Input (0UL)
#define GPIO_DIRSET_PIN5_Output (1UL)
#define GPIO_DIRSET_PIN5_Set (1UL)

/* Bit 4 : Set as output pin 4. */
#define GPIO_DIRSET_PIN4_Pos (4UL)
#define GPIO_DIRSET_PIN4_Msk (0x1UL << GPIO_DIRSET_PIN4_Pos)
#define GPIO_DIRSET_PIN4_Input (0UL)
#define GPIO_DIRSET_PIN4_Output (1UL)
#define GPIO_DIRSET_PIN4_Set (1UL)

/* Bit 3 : Set as output pin 3. */
#define GPIO_DIRSET_PIN3_Pos (3UL)
#define GPIO_DIRSET_PIN3_Msk (0x1UL << GPIO_DIRSET_PIN3_Pos)
#define GPIO_DIRSET_PIN3_Input (0UL)
#define GPIO_DIRSET_PIN3_Output (1UL)
#define GPIO_DIRSET_PIN3_Set (1UL)

/* Bit 2 : Set as output pin 2. */
#define GPIO_DIRSET_PIN2_Pos (2UL)
#define GPIO_DIRSET_PIN2_Msk (0x1UL << GPIO_DIRSET_PIN2_Pos)
#define GPIO_DIRSET_PIN2_Input (0UL)
#define GPIO_DIRSET_PIN2_Output (1UL)
#define GPIO_DIRSET_PIN2_Set (1UL)

/* Bit 1 : Set as output pin 1. */
#define GPIO_DIRSET_PIN1_Pos (1UL)
#define GPIO_DIRSET_PIN1_Msk (0x1UL << GPIO_DIRSET_PIN1_Pos)
#define GPIO_DIRSET_PIN1_Input (0UL)
#define GPIO_DIRSET_PIN1_Output (1UL)
#define GPIO_DIRSET_PIN1_Set (1UL)

/* Bit 0 : Set as output pin 0. */
#define GPIO_DIRSET_PIN0_Pos (0UL)
#define GPIO_DIRSET_PIN0_Msk (0x1UL << GPIO_DIRSET_PIN0_Pos)
#define GPIO_DIRSET_PIN0_Input (0UL)
#define GPIO_DIRSET_PIN0_Output (1UL)
#define GPIO_DIRSET_PIN0_Set (1UL)

/* Register: GPIO_DIRCLR */
/* Description: DIR clear register. */

/* Bit 31 : Set as input pin 31. */
#define GPIO_DIRCLR_PIN31_Pos (31UL)
#define GPIO_DIRCLR_PIN31_Msk (0x1UL << GPIO_DIRCLR_PIN31_Pos)
#define GPIO_DIRCLR_PIN31_Input (0UL)
#define GPIO_DIRCLR_PIN31_Output (1UL)
#define GPIO_DIRCLR_PIN31_Clear (1UL)

/* Bit 30 : Set as input pin 30. */
#define GPIO_DIRCLR_PIN30_Pos (30UL)
#define GPIO_DIRCLR_PIN30_Msk (0x1UL << GPIO_DIRCLR_PIN30_Pos)
#define GPIO_DIRCLR_PIN30_Input (0UL)
#define GPIO_DIRCLR_PIN30_Output (1UL)
#define GPIO_DIRCLR_PIN30_Clear (1UL)

/* Bit 29 : Set as input pin 29. */
#define GPIO_DIRCLR_PIN29_Pos (29UL)
#define GPIO_DIRCLR_PIN29_Msk (0x1UL << GPIO_DIRCLR_PIN29_Pos)
#define GPIO_DIRCLR_PIN29_Input (0UL)
#define GPIO_DIRCLR_PIN29_Output (1UL)
#define GPIO_DIRCLR_PIN29_Clear (1UL)

/* Bit 28 : Set as input pin 28. */
#define GPIO_DIRCLR_PIN28_Pos (28UL)
#define GPIO_DIRCLR_PIN28_Msk (0x1UL << GPIO_DIRCLR_PIN28_Pos)
#define GPIO_DIRCLR_PIN28_Input (0UL)
#define GPIO_DIRCLR_PIN28_Output (1UL)
#define GPIO_DIRCLR_PIN28_Clear (1UL)

/* Bit 27 : Set as input pin 27. */
#define GPIO_DIRCLR_PIN27_Pos (27UL)
#define GPIO_DIRCLR_PIN27_Msk (0x1UL << GPIO_DIRCLR_PIN27_Pos)
#define GPIO_DIRCLR_PIN27_Input (0UL)
#define GPIO_DIRCLR_PIN27_Output (1UL)
#define GPIO_DIRCLR_PIN27_Clear (1UL)

/* Bit 26 : Set as input pin 26. */
#define GPIO_DIRCLR_PIN26_Pos (26UL)
#define GPIO_DIRCLR_PIN26_Msk (0x1UL << GPIO_DIRCLR_PIN26_Pos)
#define GPIO_DIRCLR_PIN26_Input (0UL)
#define GPIO_DIRCLR_PIN26_Output (1UL)
#define GPIO_DIRCLR_PIN26_Clear (1UL)

/* Bit 25 : Set as input pin 25. */
#define GPIO_DIRCLR_PIN25_Pos (25UL)
#define GPIO_DIRCLR_PIN25_Msk (0x1UL << GPIO_DIRCLR_PIN25_Pos)
#define GPIO_DIRCLR_PIN25_Input (0UL)
#define GPIO_DIRCLR_PIN25_Output (1UL)
#define GPIO_DIRCLR_PIN25_Clear (1UL)

/* Bit 24 : Set as input pin 24. */
#define GPIO_DIRCLR_PIN24_Pos (24UL)
#define GPIO_DIRCLR_PIN24_Msk (0x1UL << GPIO_DIRCLR_PIN24_Pos)
#define GPIO_DIRCLR_PIN24_Input (0UL)
#define GPIO_DIRCLR_PIN24_Output (1UL)
#define GPIO_DIRCLR_PIN24_Clear (1UL)

/* Bit 23 : Set as input pin 23. */
#define GPIO_DIRCLR_PIN23_Pos (23UL)
#define GPIO_DIRCLR_PIN23_Msk (0x1UL << GPIO_DIRCLR_PIN23_Pos)
#define GPIO_DIRCLR_PIN23_Input (0UL)
#define GPIO_DIRCLR_PIN23_Output (1UL)
#define GPIO_DIRCLR_PIN23_Clear (1UL)

/* Bit 22 : Set as input pin 22. */
#define GPIO_DIRCLR_PIN22_Pos (22UL)
#define GPIO_DIRCLR_PIN22_Msk (0x1UL << GPIO_DIRCLR_PIN22_Pos)
#define GPIO_DIRCLR_PIN22_Input (0UL)
#define GPIO_DIRCLR_PIN22_Output (1UL)
#define GPIO_DIRCLR_PIN22_Clear (1UL)

/* Bit 21 : Set as input pin 21. */
#define GPIO_DIRCLR_PIN21_Pos (21UL)
#define GPIO_DIRCLR_PIN21_Msk (0x1UL << GPIO_DIRCLR_PIN21_Pos)
#define GPIO_DIRCLR_PIN21_Input (0UL)
#define GPIO_DIRCLR_PIN21_Output (1UL)
#define GPIO_DIRCLR_PIN21_Clear (1UL)

/* Bit 20 : Set as input pin 20. */
#define GPIO_DIRCLR_PIN20_Pos (20UL)
#define GPIO_DIRCLR_PIN20_Msk (0x1UL << GPIO_DIRCLR_PIN20_Pos)
#define GPIO_DIRCLR_PIN20_Input (0UL)
#define GPIO_DIRCLR_PIN20_Output (1UL)
#define GPIO_DIRCLR_PIN20_Clear (1UL)

/* Bit 19 : Set as input pin 19. */
#define GPIO_DIRCLR_PIN19_Pos (19UL)
#define GPIO_DIRCLR_PIN19_Msk (0x1UL << GPIO_DIRCLR_PIN19_Pos)
#define GPIO_DIRCLR_PIN19_Input (0UL)
#define GPIO_DIRCLR_PIN19_Output (1UL)
#define GPIO_DIRCLR_PIN19_Clear (1UL)

/* Bit 18 : Set as input pin 18. */
#define GPIO_DIRCLR_PIN18_Pos (18UL)
#define GPIO_DIRCLR_PIN18_Msk (0x1UL << GPIO_DIRCLR_PIN18_Pos)
#define GPIO_DIRCLR_PIN18_Input (0UL)
#define GPIO_DIRCLR_PIN18_Output (1UL)
#define GPIO_DIRCLR_PIN18_Clear (1UL)

/* Bit 17 : Set as input pin 17. */
#define GPIO_DIRCLR_PIN17_Pos (17UL)
#define GPIO_DIRCLR_PIN17_Msk (0x1UL << GPIO_DIRCLR_PIN17_Pos)
#define GPIO_DIRCLR_PIN17_Input (0UL)
#define GPIO_DIRCLR_PIN17_Output (1UL)
#define GPIO_DIRCLR_PIN17_Clear (1UL)

/* Bit 16 : Set as input pin 16. */
#define GPIO_DIRCLR_PIN16_Pos (16UL)
#define GPIO_DIRCLR_PIN16_Msk (0x1UL << GPIO_DIRCLR_PIN16_Pos)
#define GPIO_DIRCLR_PIN16_Input (0UL)
#define GPIO_DIRCLR_PIN16_Output (1UL)
#define GPIO_DIRCLR_PIN16_Clear (1UL)

/* Bit 15 : Set as input pin 15. */
#define GPIO_DIRCLR_PIN15_Pos (15UL)
#define GPIO_DIRCLR_PIN15_Msk (0x1UL << GPIO_DIRCLR_PIN15_Pos)
#define GPIO_DIRCLR_PIN15_Input (0UL)
#define GPIO_DIRCLR_PIN15_Output (1UL)
#define GPIO_DIRCLR_PIN15_Clear (1UL)

/* Bit 14 : Set as input pin 14. */
#define GPIO_DIRCLR_PIN14_Pos (14UL)
#define GPIO_DIRCLR_PIN14_Msk (0x1UL << GPIO_DIRCLR_PIN14_Pos)
#define GPIO_DIRCLR_PIN14_Input (0UL)
#define GPIO_DIRCLR_PIN14_Output (1UL)
#define GPIO_DIRCLR_PIN14_Clear (1UL)

/* Bit 13 : Set as input pin 13. */
#define GPIO_DIRCLR_PIN13_Pos (13UL)
#define GPIO_DIRCLR_PIN13_Msk (0x1UL << GPIO_DIRCLR_PIN13_Pos)
#define GPIO_DIRCLR_PIN13_Input (0UL)
#define GPIO_DIRCLR_PIN13_Output (1UL)
#define GPIO_DIRCLR_PIN13_Clear (1UL)

/* Bit 12 : Set as input pin 12. */
#define GPIO_DIRCLR_PIN12_Pos (12UL)
#define GPIO_DIRCLR_PIN12_Msk (0x1UL << GPIO_DIRCLR_PIN12_Pos)
#define GPIO_DIRCLR_PIN12_Input (0UL)
#define GPIO_DIRCLR_PIN12_Output (1UL)
#define GPIO_DIRCLR_PIN12_Clear (1UL)

/* Bit 11 : Set as input pin 11. */
#define GPIO_DIRCLR_PIN11_Pos (11UL)
#define GPIO_DIRCLR_PIN11_Msk (0x1UL << GPIO_DIRCLR_PIN11_Pos)
#define GPIO_DIRCLR_PIN11_Input (0UL)
#define GPIO_DIRCLR_PIN11_Output (1UL)
#define GPIO_DIRCLR_PIN11_Clear (1UL)

/* Bit 10 : Set as input pin 10. */
#define GPIO_DIRCLR_PIN10_Pos (10UL)
#define GPIO_DIRCLR_PIN10_Msk (0x1UL << GPIO_DIRCLR_PIN10_Pos)
#define GPIO_DIRCLR_PIN10_Input (0UL)
#define GPIO_DIRCLR_PIN10_Output (1UL)
#define GPIO_DIRCLR_PIN10_Clear (1UL)

/* Bit 9 : Set as input pin 9. */
#define GPIO_DIRCLR_PIN9_Pos (9UL)
#define GPIO_DIRCLR_PIN9_Msk (0x1UL << GPIO_DIRCLR_PIN9_Pos)
#define GPIO_DIRCLR_PIN9_Input (0UL)
#define GPIO_DIRCLR_PIN9_Output (1UL)
#define GPIO_DIRCLR_PIN9_Clear (1UL)

/* Bit 8 : Set as input pin 8. */
#define GPIO_DIRCLR_PIN8_Pos (8UL)
#define GPIO_DIRCLR_PIN8_Msk (0x1UL << GPIO_DIRCLR_PIN8_Pos)
#define GPIO_DIRCLR_PIN8_Input (0UL)
#define GPIO_DIRCLR_PIN8_Output (1UL)
#define GPIO_DIRCLR_PIN8_Clear (1UL)

/* Bit 7 : Set as input pin 7. */
#define GPIO_DIRCLR_PIN7_Pos (7UL)
#define GPIO_DIRCLR_PIN7_Msk (0x1UL << GPIO_DIRCLR_PIN7_Pos)
#define GPIO_DIRCLR_PIN7_Input (0UL)
#define GPIO_DIRCLR_PIN7_Output (1UL)
#define GPIO_DIRCLR_PIN7_Clear (1UL)

/* Bit 6 : Set as input pin 6. */
#define GPIO_DIRCLR_PIN6_Pos (6UL)
#define GPIO_DIRCLR_PIN6_Msk (0x1UL << GPIO_DIRCLR_PIN6_Pos)
#define GPIO_DIRCLR_PIN6_Input (0UL)
#define GPIO_DIRCLR_PIN6_Output (1UL)
#define GPIO_DIRCLR_PIN6_Clear (1UL)

/* Bit 5 : Set as input pin 5. */
#define GPIO_DIRCLR_PIN5_Pos (5UL)
#define GPIO_DIRCLR_PIN5_Msk (0x1UL << GPIO_DIRCLR_PIN5_Pos)
#define GPIO_DIRCLR_PIN5_Input (0UL)
#define GPIO_DIRCLR_PIN5_Output (1UL)
#define GPIO_DIRCLR_PIN5_Clear (1UL)

/* Bit 4 : Set as input pin 4. */
#define GPIO_DIRCLR_PIN4_Pos (4UL)
#define GPIO_DIRCLR_PIN4_Msk (0x1UL << GPIO_DIRCLR_PIN4_Pos)
#define GPIO_DIRCLR_PIN4_Input (0UL)
#define GPIO_DIRCLR_PIN4_Output (1UL)
#define GPIO_DIRCLR_PIN4_Clear (1UL)

/* Bit 3 : Set as input pin 3. */
#define GPIO_DIRCLR_PIN3_Pos (3UL)
#define GPIO_DIRCLR_PIN3_Msk (0x1UL << GPIO_DIRCLR_PIN3_Pos)
#define GPIO_DIRCLR_PIN3_Input (0UL)
#define GPIO_DIRCLR_PIN3_Output (1UL)
#define GPIO_DIRCLR_PIN3_Clear (1UL)

/* Bit 2 : Set as input pin 2. */
#define GPIO_DIRCLR_PIN2_Pos (2UL)
#define GPIO_DIRCLR_PIN2_Msk (0x1UL << GPIO_DIRCLR_PIN2_Pos)
#define GPIO_DIRCLR_PIN2_Input (0UL)
#define GPIO_DIRCLR_PIN2_Output (1UL)
#define GPIO_DIRCLR_PIN2_Clear (1UL)

/* Bit 1 : Set as input pin 1. */
#define GPIO_DIRCLR_PIN1_Pos (1UL)
#define GPIO_DIRCLR_PIN1_Msk (0x1UL << GPIO_DIRCLR_PIN1_Pos)
#define GPIO_DIRCLR_PIN1_Input (0UL)
#define GPIO_DIRCLR_PIN1_Output (1UL)
#define GPIO_DIRCLR_PIN1_Clear (1UL)

/* Bit 0 : Set as input pin 0. */
#define GPIO_DIRCLR_PIN0_Pos (0UL)
#define GPIO_DIRCLR_PIN0_Msk (0x1UL << GPIO_DIRCLR_PIN0_Pos)
#define GPIO_DIRCLR_PIN0_Input (0UL)
#define GPIO_DIRCLR_PIN0_Output (1UL)
#define GPIO_DIRCLR_PIN0_Clear (1UL)

/* Register: GPIO_PIN_CNF */
/* Description: Configuration of GPIO pins. */

/* Bits 17..16 : Pin sensing mechanism. */
#define GPIO_PIN_CNF_SENSE_Pos (16UL)
#define GPIO_PIN_CNF_SENSE_Msk (0x3UL << GPIO_PIN_CNF_SENSE_Pos)
#define GPIO_PIN_CNF_SENSE_Disabled (0x00UL)
#define GPIO_PIN_CNF_SENSE_High (0x02UL)
#define GPIO_PIN_CNF_SENSE_Low (0x03UL)

/* Bits 10..8 : Drive configuration. */
#define GPIO_PIN_CNF_DRIVE_Pos (8UL)
#define GPIO_PIN_CNF_DRIVE_Msk (0x7UL << GPIO_PIN_CNF_DRIVE_Pos)
#define GPIO_PIN_CNF_DRIVE_S0S1 (0x00UL)
#define GPIO_PIN_CNF_DRIVE_H0S1 (0x01UL)
#define GPIO_PIN_CNF_DRIVE_S0H1 (0x02UL)
#define GPIO_PIN_CNF_DRIVE_H0H1 (0x03UL)
#define GPIO_PIN_CNF_DRIVE_D0S1 (0x04UL)
#define GPIO_PIN_CNF_DRIVE_D0H1 (0x05UL)
#define GPIO_PIN_CNF_DRIVE_S0D1 (0x06UL)
#define GPIO_PIN_CNF_DRIVE_H0D1 (0x07UL)

/* Bits 3..2 : Pull-up or -down configuration. */
#define GPIO_PIN_CNF_PULL_Pos (2UL)
#define GPIO_PIN_CNF_PULL_Msk (0x3UL << GPIO_PIN_CNF_PULL_Pos)
#define GPIO_PIN_CNF_PULL_Disabled (0x00UL)
#define GPIO_PIN_CNF_PULL_Pulldown (0x01UL)
#define GPIO_PIN_CNF_PULL_Pullup (0x03UL)

/* Bit 1 : Connect or disconnect input path. */
#define GPIO_PIN_CNF_INPUT_Pos (1UL)
#define GPIO_PIN_CNF_INPUT_Msk (0x1UL << GPIO_PIN_CNF_INPUT_Pos)
#define GPIO_PIN_CNF_INPUT_Connect (0UL)
#define GPIO_PIN_CNF_INPUT_Disconnect (1UL)

/* Bit 0 : Pin direction. */
#define GPIO_PIN_CNF_DIR_Pos (0UL)
#define GPIO_PIN_CNF_DIR_Msk (0x1UL << GPIO_PIN_CNF_DIR_Pos)
#define GPIO_PIN_CNF_DIR_Input (0UL)
#define GPIO_PIN_CNF_DIR_Output (1UL)


/* Peripheral: GPIOTE */
/* Description: GPIO tasks and events. */

/* Register: GPIOTE_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 31 : Enable interrupt on PORT event. */
#define GPIOTE_INTENSET_PORT_Pos (31UL)
#define GPIOTE_INTENSET_PORT_Msk (0x1UL << GPIOTE_INTENSET_PORT_Pos)
#define GPIOTE_INTENSET_PORT_Disabled (0UL)
#define GPIOTE_INTENSET_PORT_Enabled (1UL)
#define GPIOTE_INTENSET_PORT_Set (1UL)

/* Bit 3 : Enable interrupt on IN[3] event. */
#define GPIOTE_INTENSET_IN3_Pos (3UL)
#define GPIOTE_INTENSET_IN3_Msk (0x1UL << GPIOTE_INTENSET_IN3_Pos)
#define GPIOTE_INTENSET_IN3_Disabled (0UL)
#define GPIOTE_INTENSET_IN3_Enabled (1UL)
#define GPIOTE_INTENSET_IN3_Set (1UL)

/* Bit 2 : Enable interrupt on IN[2] event. */
#define GPIOTE_INTENSET_IN2_Pos (2UL)
#define GPIOTE_INTENSET_IN2_Msk (0x1UL << GPIOTE_INTENSET_IN2_Pos)
#define GPIOTE_INTENSET_IN2_Disabled (0UL)
#define GPIOTE_INTENSET_IN2_Enabled (1UL)
#define GPIOTE_INTENSET_IN2_Set (1UL)

/* Bit 1 : Enable interrupt on IN[1] event. */
#define GPIOTE_INTENSET_IN1_Pos (1UL)
#define GPIOTE_INTENSET_IN1_Msk (0x1UL << GPIOTE_INTENSET_IN1_Pos)
#define GPIOTE_INTENSET_IN1_Disabled (0UL)
#define GPIOTE_INTENSET_IN1_Enabled (1UL)
#define GPIOTE_INTENSET_IN1_Set (1UL)

/* Bit 0 : Enable interrupt on IN[0] event. */
#define GPIOTE_INTENSET_IN0_Pos (0UL)
#define GPIOTE_INTENSET_IN0_Msk (0x1UL << GPIOTE_INTENSET_IN0_Pos)
#define GPIOTE_INTENSET_IN0_Disabled (0UL)
#define GPIOTE_INTENSET_IN0_Enabled (1UL)
#define GPIOTE_INTENSET_IN0_Set (1UL)

/* Register: GPIOTE_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 31 : Disable interrupt on PORT event. */
#define GPIOTE_INTENCLR_PORT_Pos (31UL)
#define GPIOTE_INTENCLR_PORT_Msk (0x1UL << GPIOTE_INTENCLR_PORT_Pos)
#define GPIOTE_INTENCLR_PORT_Disabled (0UL)
#define GPIOTE_INTENCLR_PORT_Enabled (1UL)
#define GPIOTE_INTENCLR_PORT_Clear (1UL)

/* Bit 3 : Disable interrupt on IN[3] event. */
#define GPIOTE_INTENCLR_IN3_Pos (3UL)
#define GPIOTE_INTENCLR_IN3_Msk (0x1UL << GPIOTE_INTENCLR_IN3_Pos)
#define GPIOTE_INTENCLR_IN3_Disabled (0UL)
#define GPIOTE_INTENCLR_IN3_Enabled (1UL)
#define GPIOTE_INTENCLR_IN3_Clear (1UL)

/* Bit 2 : Disable interrupt on IN[2] event. */
#define GPIOTE_INTENCLR_IN2_Pos (2UL)
#define GPIOTE_INTENCLR_IN2_Msk (0x1UL << GPIOTE_INTENCLR_IN2_Pos)
#define GPIOTE_INTENCLR_IN2_Disabled (0UL)
#define GPIOTE_INTENCLR_IN2_Enabled (1UL)
#define GPIOTE_INTENCLR_IN2_Clear (1UL)

/* Bit 1 : Disable interrupt on IN[1] event. */
#define GPIOTE_INTENCLR_IN1_Pos (1UL)
#define GPIOTE_INTENCLR_IN1_Msk (0x1UL << GPIOTE_INTENCLR_IN1_Pos)
#define GPIOTE_INTENCLR_IN1_Disabled (0UL)
#define GPIOTE_INTENCLR_IN1_Enabled (1UL)
#define GPIOTE_INTENCLR_IN1_Clear (1UL)

/* Bit 0 : Disable interrupt on IN[0] event. */
#define GPIOTE_INTENCLR_IN0_Pos (0UL)
#define GPIOTE_INTENCLR_IN0_Msk (0x1UL << GPIOTE_INTENCLR_IN0_Pos)
#define GPIOTE_INTENCLR_IN0_Disabled (0UL)
#define GPIOTE_INTENCLR_IN0_Enabled (1UL)
#define GPIOTE_INTENCLR_IN0_Clear (1UL)

/* Register: GPIOTE_CONFIG */
/* Description: Channel configuration registers. */

/* Bit 20 : Initial value of the output when the GPIOTE channel is configured as a Task. */
#define GPIOTE_CONFIG_OUTINIT_Pos (20UL)
#define GPIOTE_CONFIG_OUTINIT_Msk (0x1UL << GPIOTE_CONFIG_OUTINIT_Pos)
#define GPIOTE_CONFIG_OUTINIT_Low (0UL)
#define GPIOTE_CONFIG_OUTINIT_High (1UL)

/* Bits 17..16 : Effects on output when in Task mode, or events on input that generates an event. */
#define GPIOTE_CONFIG_POLARITY_Pos (16UL)
#define GPIOTE_CONFIG_POLARITY_Msk (0x3UL << GPIOTE_CONFIG_POLARITY_Pos)
#define GPIOTE_CONFIG_POLARITY_None (0x00UL)
#define GPIOTE_CONFIG_POLARITY_LoToHi (0x01UL)
#define GPIOTE_CONFIG_POLARITY_HiToLo (0x02UL)
#define GPIOTE_CONFIG_POLARITY_Toggle (0x03UL)

/* Bits 12..8 : Pin select. */
#define GPIOTE_CONFIG_PSEL_Pos (8UL)
#define GPIOTE_CONFIG_PSEL_Msk (0x1FUL << GPIOTE_CONFIG_PSEL_Pos)

/* Bits 1..0 : Mode */
#define GPIOTE_CONFIG_MODE_Pos (0UL)
#define GPIOTE_CONFIG_MODE_Msk (0x3UL << GPIOTE_CONFIG_MODE_Pos)
#define GPIOTE_CONFIG_MODE_Disabled (0x00UL)
#define GPIOTE_CONFIG_MODE_Event (0x01UL)
#define GPIOTE_CONFIG_MODE_Task (0x03UL)

/* Register: GPIOTE_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define GPIOTE_POWER_POWER_Pos (0UL)
#define GPIOTE_POWER_POWER_Msk (0x1UL << GPIOTE_POWER_POWER_Pos)
#define GPIOTE_POWER_POWER_Disabled (0UL)
#define GPIOTE_POWER_POWER_Enabled (1UL)


/* Peripheral: LPCOMP */
/* Description: Low power comparator. */

/* Register: LPCOMP_SHORTS */
/* Description: Shortcuts for the LPCOMP. */

/* Bit 4 : Shortcut between CROSS event and STOP task. */
#define LPCOMP_SHORTS_CROSS_STOP_Pos (4UL)
#define LPCOMP_SHORTS_CROSS_STOP_Msk (0x1UL << LPCOMP_SHORTS_CROSS_STOP_Pos)
#define LPCOMP_SHORTS_CROSS_STOP_Disabled (0UL)
#define LPCOMP_SHORTS_CROSS_STOP_Enabled (1UL)

/* Bit 3 : Shortcut between UP event and STOP task. */
#define LPCOMP_SHORTS_UP_STOP_Pos (3UL)
#define LPCOMP_SHORTS_UP_STOP_Msk (0x1UL << LPCOMP_SHORTS_UP_STOP_Pos)
#define LPCOMP_SHORTS_UP_STOP_Disabled (0UL)
#define LPCOMP_SHORTS_UP_STOP_Enabled (1UL)

/* Bit 2 : Shortcut between DOWN event and STOP task. */
#define LPCOMP_SHORTS_DOWN_STOP_Pos (2UL)
#define LPCOMP_SHORTS_DOWN_STOP_Msk (0x1UL << LPCOMP_SHORTS_DOWN_STOP_Pos)
#define LPCOMP_SHORTS_DOWN_STOP_Disabled (0UL)
#define LPCOMP_SHORTS_DOWN_STOP_Enabled (1UL)

/* Bit 1 : Shortcut between RADY event and STOP task. */
#define LPCOMP_SHORTS_READY_STOP_Pos (1UL)
#define LPCOMP_SHORTS_READY_STOP_Msk (0x1UL << LPCOMP_SHORTS_READY_STOP_Pos)
#define LPCOMP_SHORTS_READY_STOP_Disabled (0UL)
#define LPCOMP_SHORTS_READY_STOP_Enabled (1UL)

/* Bit 0 : Shortcut between READY event and SAMPLE task. */
#define LPCOMP_SHORTS_READY_SAMPLE_Pos (0UL)
#define LPCOMP_SHORTS_READY_SAMPLE_Msk (0x1UL << LPCOMP_SHORTS_READY_SAMPLE_Pos)
#define LPCOMP_SHORTS_READY_SAMPLE_Disabled (0UL)
#define LPCOMP_SHORTS_READY_SAMPLE_Enabled (1UL)

/* Register: LPCOMP_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 3 : Enable interrupt on CROSS event. */
#define LPCOMP_INTENSET_CROSS_Pos (3UL)
#define LPCOMP_INTENSET_CROSS_Msk (0x1UL << LPCOMP_INTENSET_CROSS_Pos)
#define LPCOMP_INTENSET_CROSS_Disabled (0UL)
#define LPCOMP_INTENSET_CROSS_Enabled (1UL)
#define LPCOMP_INTENSET_CROSS_Set (1UL)

/* Bit 2 : Enable interrupt on UP event. */
#define LPCOMP_INTENSET_UP_Pos (2UL)
#define LPCOMP_INTENSET_UP_Msk (0x1UL << LPCOMP_INTENSET_UP_Pos)
#define LPCOMP_INTENSET_UP_Disabled (0UL)
#define LPCOMP_INTENSET_UP_Enabled (1UL)
#define LPCOMP_INTENSET_UP_Set (1UL)

/* Bit 1 : Enable interrupt on DOWN event. */
#define LPCOMP_INTENSET_DOWN_Pos (1UL)
#define LPCOMP_INTENSET_DOWN_Msk (0x1UL << LPCOMP_INTENSET_DOWN_Pos)
#define LPCOMP_INTENSET_DOWN_Disabled (0UL)
#define LPCOMP_INTENSET_DOWN_Enabled (1UL)
#define LPCOMP_INTENSET_DOWN_Set (1UL)

/* Bit 0 : Enable interrupt on READY event. */
#define LPCOMP_INTENSET_READY_Pos (0UL)
#define LPCOMP_INTENSET_READY_Msk (0x1UL << LPCOMP_INTENSET_READY_Pos)
#define LPCOMP_INTENSET_READY_Disabled (0UL)
#define LPCOMP_INTENSET_READY_Enabled (1UL)
#define LPCOMP_INTENSET_READY_Set (1UL)

/* Register: LPCOMP_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 3 : Disable interrupt on CROSS event. */
#define LPCOMP_INTENCLR_CROSS_Pos (3UL)
#define LPCOMP_INTENCLR_CROSS_Msk (0x1UL << LPCOMP_INTENCLR_CROSS_Pos)
#define LPCOMP_INTENCLR_CROSS_Disabled (0UL)
#define LPCOMP_INTENCLR_CROSS_Enabled (1UL)
#define LPCOMP_INTENCLR_CROSS_Clear (1UL)

/* Bit 2 : Disable interrupt on UP event. */
#define LPCOMP_INTENCLR_UP_Pos (2UL)
#define LPCOMP_INTENCLR_UP_Msk (0x1UL << LPCOMP_INTENCLR_UP_Pos)
#define LPCOMP_INTENCLR_UP_Disabled (0UL)
#define LPCOMP_INTENCLR_UP_Enabled (1UL)
#define LPCOMP_INTENCLR_UP_Clear (1UL)

/* Bit 1 : Disable interrupt on DOWN event. */
#define LPCOMP_INTENCLR_DOWN_Pos (1UL)
#define LPCOMP_INTENCLR_DOWN_Msk (0x1UL << LPCOMP_INTENCLR_DOWN_Pos)
#define LPCOMP_INTENCLR_DOWN_Disabled (0UL)
#define LPCOMP_INTENCLR_DOWN_Enabled (1UL)
#define LPCOMP_INTENCLR_DOWN_Clear (1UL)

/* Bit 0 : Disable interrupt on READY event. */
#define LPCOMP_INTENCLR_READY_Pos (0UL)
#define LPCOMP_INTENCLR_READY_Msk (0x1UL << LPCOMP_INTENCLR_READY_Pos)
#define LPCOMP_INTENCLR_READY_Disabled (0UL)
#define LPCOMP_INTENCLR_READY_Enabled (1UL)
#define LPCOMP_INTENCLR_READY_Clear (1UL)

/* Register: LPCOMP_RESULT */
/* Description: Result of last compare. */

/* Bit 0 : Result of last compare. Decision point SAMPLE task. */
#define LPCOMP_RESULT_RESULT_Pos (0UL)
#define LPCOMP_RESULT_RESULT_Msk (0x1UL << LPCOMP_RESULT_RESULT_Pos)
#define LPCOMP_RESULT_RESULT_Below (0UL)
#define LPCOMP_RESULT_RESULT_Above (1UL)

/* Register: LPCOMP_ENABLE */
/* Description: Enable the LPCOMP. */

/* Bits 1..0 : Enable or disable LPCOMP. */
#define LPCOMP_ENABLE_ENABLE_Pos (0UL)
#define LPCOMP_ENABLE_ENABLE_Msk (0x3UL << LPCOMP_ENABLE_ENABLE_Pos)
#define LPCOMP_ENABLE_ENABLE_Disabled (0x00UL)
#define LPCOMP_ENABLE_ENABLE_Enabled (0x01UL)

/* Register: LPCOMP_PSEL */
/* Description: Input pin select. */

/* Bits 2..0 : Analog input pin select. */
#define LPCOMP_PSEL_PSEL_Pos (0UL)
#define LPCOMP_PSEL_PSEL_Msk (0x7UL << LPCOMP_PSEL_PSEL_Pos)
#define LPCOMP_PSEL_PSEL_AnalogInput0 (0UL)
#define LPCOMP_PSEL_PSEL_AnalogInput1 (1UL)
#define LPCOMP_PSEL_PSEL_AnalogInput2 (2UL)
#define LPCOMP_PSEL_PSEL_AnalogInput3 (3UL)
#define LPCOMP_PSEL_PSEL_AnalogInput4 (4UL)
#define LPCOMP_PSEL_PSEL_AnalogInput5 (5UL)
#define LPCOMP_PSEL_PSEL_AnalogInput6 (6UL)
#define LPCOMP_PSEL_PSEL_AnalogInput7 (7UL)

/* Register: LPCOMP_REFSEL */
/* Description: Reference select. */

/* Bits 2..0 : Reference select. */
#define LPCOMP_REFSEL_REFSEL_Pos (0UL)
#define LPCOMP_REFSEL_REFSEL_Msk (0x7UL << LPCOMP_REFSEL_REFSEL_Pos)
#define LPCOMP_REFSEL_REFSEL_SupplyOneEighthPrescaling (0UL)
#define LPCOMP_REFSEL_REFSEL_SupplyTwoEighthsPrescaling (1UL)
#define LPCOMP_REFSEL_REFSEL_SupplyThreeEighthsPrescaling (2UL)
#define LPCOMP_REFSEL_REFSEL_SupplyFourEighthsPrescaling (3UL)
#define LPCOMP_REFSEL_REFSEL_SupplyFiveEighthsPrescaling (4UL)
#define LPCOMP_REFSEL_REFSEL_SupplySixEighthsPrescaling (5UL)
#define LPCOMP_REFSEL_REFSEL_SupplySevenEighthsPrescaling (6UL)
#define LPCOMP_REFSEL_REFSEL_ARef (7UL)

/* Register: LPCOMP_EXTREFSEL */
/* Description: External reference select. */

/* Bit 0 : External analog reference pin selection. */
#define LPCOMP_EXTREFSEL_EXTREFSEL_Pos (0UL)
#define LPCOMP_EXTREFSEL_EXTREFSEL_Msk (0x1UL << LPCOMP_EXTREFSEL_EXTREFSEL_Pos)
#define LPCOMP_EXTREFSEL_EXTREFSEL_AnalogReference0 (0UL)
#define LPCOMP_EXTREFSEL_EXTREFSEL_AnalogReference1 (1UL)

/* Register: LPCOMP_ANADETECT */
/* Description: Analog detect configuration. */

/* Bits 1..0 : Analog detect configuration. */
#define LPCOMP_ANADETECT_ANADETECT_Pos (0UL)
#define LPCOMP_ANADETECT_ANADETECT_Msk (0x3UL << LPCOMP_ANADETECT_ANADETECT_Pos)
#define LPCOMP_ANADETECT_ANADETECT_Cross (0UL)
#define LPCOMP_ANADETECT_ANADETECT_Up (1UL)
#define LPCOMP_ANADETECT_ANADETECT_Down (2UL)

/* Register: LPCOMP_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define LPCOMP_POWER_POWER_Pos (0UL)
#define LPCOMP_POWER_POWER_Msk (0x1UL << LPCOMP_POWER_POWER_Pos)
#define LPCOMP_POWER_POWER_Disabled (0UL)
#define LPCOMP_POWER_POWER_Enabled (1UL)


/* Peripheral: MPU */
/* Description: Memory Protection Unit. */

/* Register: MPU_PERR0 */
/* Description: Configuration of peripherals in mpu regions. */

/* Bit 31 : PPI region configuration. */
#define MPU_PERR0_PPI_Pos (31UL)
#define MPU_PERR0_PPI_Msk (0x1UL << MPU_PERR0_PPI_Pos)
#define MPU_PERR0_PPI_InRegion1 (0UL)
#define MPU_PERR0_PPI_InRegion0 (1UL)

/* Bit 30 : NVMC region configuration. */
#define MPU_PERR0_NVMC_Pos (30UL)
#define MPU_PERR0_NVMC_Msk (0x1UL << MPU_PERR0_NVMC_Pos)
#define MPU_PERR0_NVMC_InRegion1 (0UL)
#define MPU_PERR0_NVMC_InRegion0 (1UL)

/* Bit 19 : LPCOMP region configuration. */
#define MPU_PERR0_LPCOMP_Pos (19UL)
#define MPU_PERR0_LPCOMP_Msk (0x1UL << MPU_PERR0_LPCOMP_Pos)
#define MPU_PERR0_LPCOMP_InRegion1 (0UL)
#define MPU_PERR0_LPCOMP_InRegion0 (1UL)

/* Bit 18 : QDEC region configuration. */
#define MPU_PERR0_QDEC_Pos (18UL)
#define MPU_PERR0_QDEC_Msk (0x1UL << MPU_PERR0_QDEC_Pos)
#define MPU_PERR0_QDEC_InRegion1 (0UL)
#define MPU_PERR0_QDEC_InRegion0 (1UL)

/* Bit 17 : RTC1 region configuration. */
#define MPU_PERR0_RTC1_Pos (17UL)
#define MPU_PERR0_RTC1_Msk (0x1UL << MPU_PERR0_RTC1_Pos)
#define MPU_PERR0_RTC1_InRegion1 (0UL)
#define MPU_PERR0_RTC1_InRegion0 (1UL)

/* Bit 16 : WDT region configuration. */
#define MPU_PERR0_WDT_Pos (16UL)
#define MPU_PERR0_WDT_Msk (0x1UL << MPU_PERR0_WDT_Pos)
#define MPU_PERR0_WDT_InRegion1 (0UL)
#define MPU_PERR0_WDT_InRegion0 (1UL)

/* Bit 15 : CCM and AAR region configuration. */
#define MPU_PERR0_CCM_AAR_Pos (15UL)
#define MPU_PERR0_CCM_AAR_Msk (0x1UL << MPU_PERR0_CCM_AAR_Pos)
#define MPU_PERR0_CCM_AAR_InRegion1 (0UL)
#define MPU_PERR0_CCM_AAR_InRegion0 (1UL)

/* Bit 14 : ECB region configuration. */
#define MPU_PERR0_ECB_Pos (14UL)
#define MPU_PERR0_ECB_Msk (0x1UL << MPU_PERR0_ECB_Pos)
#define MPU_PERR0_ECB_InRegion1 (0UL)
#define MPU_PERR0_ECB_InRegion0 (1UL)

/* Bit 13 : RNG region configuration. */
#define MPU_PERR0_RNG_Pos (13UL)
#define MPU_PERR0_RNG_Msk (0x1UL << MPU_PERR0_RNG_Pos)
#define MPU_PERR0_RNG_InRegion1 (0UL)
#define MPU_PERR0_RNG_InRegion0 (1UL)

/* Bit 12 : TEMP region configuration. */
#define MPU_PERR0_TEMP_Pos (12UL)
#define MPU_PERR0_TEMP_Msk (0x1UL << MPU_PERR0_TEMP_Pos)
#define MPU_PERR0_TEMP_InRegion1 (0UL)
#define MPU_PERR0_TEMP_InRegion0 (1UL)

/* Bit 11 : RTC0 region configuration. */
#define MPU_PERR0_RTC0_Pos (11UL)
#define MPU_PERR0_RTC0_Msk (0x1UL << MPU_PERR0_RTC0_Pos)
#define MPU_PERR0_RTC0_InRegion1 (0UL)
#define MPU_PERR0_RTC0_InRegion0 (1UL)

/* Bit 10 : TIMER2 region configuration. */
#define MPU_PERR0_TIMER2_Pos (10UL)
#define MPU_PERR0_TIMER2_Msk (0x1UL << MPU_PERR0_TIMER2_Pos)
#define MPU_PERR0_TIMER2_InRegion1 (0UL)
#define MPU_PERR0_TIMER2_InRegion0 (1UL)

/* Bit 9 : TIMER1 region configuration. */
#define MPU_PERR0_TIMER1_Pos (9UL)
#define MPU_PERR0_TIMER1_Msk (0x1UL << MPU_PERR0_TIMER1_Pos)
#define MPU_PERR0_TIMER1_InRegion1 (0UL)
#define MPU_PERR0_TIMER1_InRegion0 (1UL)

/* Bit 8 : TIMER0 region configuration. */
#define MPU_PERR0_TIMER0_Pos (8UL)
#define MPU_PERR0_TIMER0_Msk (0x1UL << MPU_PERR0_TIMER0_Pos)
#define MPU_PERR0_TIMER0_InRegion1 (0UL)
#define MPU_PERR0_TIMER0_InRegion0 (1UL)

/* Bit 7 : ADC region configuration. */
#define MPU_PERR0_ADC_Pos (7UL)
#define MPU_PERR0_ADC_Msk (0x1UL << MPU_PERR0_ADC_Pos)
#define MPU_PERR0_ADC_InRegion1 (0UL)
#define MPU_PERR0_ADC_InRegion0 (1UL)

/* Bit 6 : GPIOTE region configuration. */
#define MPU_PERR0_GPIOTE_Pos (6UL)
#define MPU_PERR0_GPIOTE_Msk (0x1UL << MPU_PERR0_GPIOTE_Pos)
#define MPU_PERR0_GPIOTE_InRegion1 (0UL)
#define MPU_PERR0_GPIOTE_InRegion0 (1UL)

/* Bit 4 : SPI1 and TWI1 region configuration. */
#define MPU_PERR0_SPI1_TWI1_Pos (4UL)
#define MPU_PERR0_SPI1_TWI1_Msk (0x1UL << MPU_PERR0_SPI1_TWI1_Pos)
#define MPU_PERR0_SPI1_TWI1_InRegion1 (0UL)
#define MPU_PERR0_SPI1_TWI1_InRegion0 (1UL)

/* Bit 3 : SPI0 and TWI0 region configuration. */
#define MPU_PERR0_SPI0_TWI0_Pos (3UL)
#define MPU_PERR0_SPI0_TWI0_Msk (0x1UL << MPU_PERR0_SPI0_TWI0_Pos)
#define MPU_PERR0_SPI0_TWI0_InRegion1 (0UL)
#define MPU_PERR0_SPI0_TWI0_InRegion0 (1UL)

/* Bit 2 : UART0 region configuration. */
#define MPU_PERR0_UART0_Pos (2UL)
#define MPU_PERR0_UART0_Msk (0x1UL << MPU_PERR0_UART0_Pos)
#define MPU_PERR0_UART0_InRegion1 (0UL)
#define MPU_PERR0_UART0_InRegion0 (1UL)

/* Bit 1 : RADIO region configuration. */
#define MPU_PERR0_RADIO_Pos (1UL)
#define MPU_PERR0_RADIO_Msk (0x1UL << MPU_PERR0_RADIO_Pos)
#define MPU_PERR0_RADIO_InRegion1 (0UL)
#define MPU_PERR0_RADIO_InRegion0 (1UL)

/* Bit 0 : POWER_CLOCK region configuration. */
#define MPU_PERR0_POWER_CLOCK_Pos (0UL)
#define MPU_PERR0_POWER_CLOCK_Msk (0x1UL << MPU_PERR0_POWER_CLOCK_Pos)
#define MPU_PERR0_POWER_CLOCK_InRegion1 (0UL)
#define MPU_PERR0_POWER_CLOCK_InRegion0 (1UL)

/* Register: MPU_PROTENSET0 */
/* Description: Erase and write protection bit enable set register. */

/* Bit 31 : Protection enable for region 31. */
#define MPU_PROTENSET0_PROTREG31_Pos (31UL)
#define MPU_PROTENSET0_PROTREG31_Msk (0x1UL << MPU_PROTENSET0_PROTREG31_Pos)
#define MPU_PROTENSET0_PROTREG31_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG31_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG31_Set (1UL)

/* Bit 30 : Protection enable for region 30. */
#define MPU_PROTENSET0_PROTREG30_Pos (30UL)
#define MPU_PROTENSET0_PROTREG30_Msk (0x1UL << MPU_PROTENSET0_PROTREG30_Pos)
#define MPU_PROTENSET0_PROTREG30_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG30_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG30_Set (1UL)

/* Bit 29 : Protection enable for region 29. */
#define MPU_PROTENSET0_PROTREG29_Pos (29UL)
#define MPU_PROTENSET0_PROTREG29_Msk (0x1UL << MPU_PROTENSET0_PROTREG29_Pos)
#define MPU_PROTENSET0_PROTREG29_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG29_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG29_Set (1UL)

/* Bit 28 : Protection enable for region 28. */
#define MPU_PROTENSET0_PROTREG28_Pos (28UL)
#define MPU_PROTENSET0_PROTREG28_Msk (0x1UL << MPU_PROTENSET0_PROTREG28_Pos)
#define MPU_PROTENSET0_PROTREG28_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG28_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG28_Set (1UL)

/* Bit 27 : Protection enable for region 27. */
#define MPU_PROTENSET0_PROTREG27_Pos (27UL)
#define MPU_PROTENSET0_PROTREG27_Msk (0x1UL << MPU_PROTENSET0_PROTREG27_Pos)
#define MPU_PROTENSET0_PROTREG27_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG27_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG27_Set (1UL)

/* Bit 26 : Protection enable for region 26. */
#define MPU_PROTENSET0_PROTREG26_Pos (26UL)
#define MPU_PROTENSET0_PROTREG26_Msk (0x1UL << MPU_PROTENSET0_PROTREG26_Pos)
#define MPU_PROTENSET0_PROTREG26_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG26_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG26_Set (1UL)

/* Bit 25 : Protection enable for region 25. */
#define MPU_PROTENSET0_PROTREG25_Pos (25UL)
#define MPU_PROTENSET0_PROTREG25_Msk (0x1UL << MPU_PROTENSET0_PROTREG25_Pos)
#define MPU_PROTENSET0_PROTREG25_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG25_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG25_Set (1UL)

/* Bit 24 : Protection enable for region 24. */
#define MPU_PROTENSET0_PROTREG24_Pos (24UL)
#define MPU_PROTENSET0_PROTREG24_Msk (0x1UL << MPU_PROTENSET0_PROTREG24_Pos)
#define MPU_PROTENSET0_PROTREG24_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG24_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG24_Set (1UL)

/* Bit 23 : Protection enable for region 23. */
#define MPU_PROTENSET0_PROTREG23_Pos (23UL)
#define MPU_PROTENSET0_PROTREG23_Msk (0x1UL << MPU_PROTENSET0_PROTREG23_Pos)
#define MPU_PROTENSET0_PROTREG23_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG23_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG23_Set (1UL)

/* Bit 22 : Protection enable for region 22. */
#define MPU_PROTENSET0_PROTREG22_Pos (22UL)
#define MPU_PROTENSET0_PROTREG22_Msk (0x1UL << MPU_PROTENSET0_PROTREG22_Pos)
#define MPU_PROTENSET0_PROTREG22_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG22_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG22_Set (1UL)

/* Bit 21 : Protection enable for region 21. */
#define MPU_PROTENSET0_PROTREG21_Pos (21UL)
#define MPU_PROTENSET0_PROTREG21_Msk (0x1UL << MPU_PROTENSET0_PROTREG21_Pos)
#define MPU_PROTENSET0_PROTREG21_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG21_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG21_Set (1UL)

/* Bit 20 : Protection enable for region 20. */
#define MPU_PROTENSET0_PROTREG20_Pos (20UL)
#define MPU_PROTENSET0_PROTREG20_Msk (0x1UL << MPU_PROTENSET0_PROTREG20_Pos)
#define MPU_PROTENSET0_PROTREG20_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG20_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG20_Set (1UL)

/* Bit 19 : Protection enable for region 19. */
#define MPU_PROTENSET0_PROTREG19_Pos (19UL)
#define MPU_PROTENSET0_PROTREG19_Msk (0x1UL << MPU_PROTENSET0_PROTREG19_Pos)
#define MPU_PROTENSET0_PROTREG19_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG19_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG19_Set (1UL)

/* Bit 18 : Protection enable for region 18. */
#define MPU_PROTENSET0_PROTREG18_Pos (18UL)
#define MPU_PROTENSET0_PROTREG18_Msk (0x1UL << MPU_PROTENSET0_PROTREG18_Pos)
#define MPU_PROTENSET0_PROTREG18_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG18_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG18_Set (1UL)

/* Bit 17 : Protection enable for region 17. */
#define MPU_PROTENSET0_PROTREG17_Pos (17UL)
#define MPU_PROTENSET0_PROTREG17_Msk (0x1UL << MPU_PROTENSET0_PROTREG17_Pos)
#define MPU_PROTENSET0_PROTREG17_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG17_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG17_Set (1UL)

/* Bit 16 : Protection enable for region 16. */
#define MPU_PROTENSET0_PROTREG16_Pos (16UL)
#define MPU_PROTENSET0_PROTREG16_Msk (0x1UL << MPU_PROTENSET0_PROTREG16_Pos)
#define MPU_PROTENSET0_PROTREG16_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG16_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG16_Set (1UL)

/* Bit 15 : Protection enable for region 15. */
#define MPU_PROTENSET0_PROTREG15_Pos (15UL)
#define MPU_PROTENSET0_PROTREG15_Msk (0x1UL << MPU_PROTENSET0_PROTREG15_Pos)
#define MPU_PROTENSET0_PROTREG15_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG15_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG15_Set (1UL)

/* Bit 14 : Protection enable for region 14. */
#define MPU_PROTENSET0_PROTREG14_Pos (14UL)
#define MPU_PROTENSET0_PROTREG14_Msk (0x1UL << MPU_PROTENSET0_PROTREG14_Pos)
#define MPU_PROTENSET0_PROTREG14_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG14_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG14_Set (1UL)

/* Bit 13 : Protection enable for region 13. */
#define MPU_PROTENSET0_PROTREG13_Pos (13UL)
#define MPU_PROTENSET0_PROTREG13_Msk (0x1UL << MPU_PROTENSET0_PROTREG13_Pos)
#define MPU_PROTENSET0_PROTREG13_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG13_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG13_Set (1UL)

/* Bit 12 : Protection enable for region 12. */
#define MPU_PROTENSET0_PROTREG12_Pos (12UL)
#define MPU_PROTENSET0_PROTREG12_Msk (0x1UL << MPU_PROTENSET0_PROTREG12_Pos)
#define MPU_PROTENSET0_PROTREG12_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG12_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG12_Set (1UL)

/* Bit 11 : Protection enable for region 11. */
#define MPU_PROTENSET0_PROTREG11_Pos (11UL)
#define MPU_PROTENSET0_PROTREG11_Msk (0x1UL << MPU_PROTENSET0_PROTREG11_Pos)
#define MPU_PROTENSET0_PROTREG11_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG11_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG11_Set (1UL)

/* Bit 10 : Protection enable for region 10. */
#define MPU_PROTENSET0_PROTREG10_Pos (10UL)
#define MPU_PROTENSET0_PROTREG10_Msk (0x1UL << MPU_PROTENSET0_PROTREG10_Pos)
#define MPU_PROTENSET0_PROTREG10_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG10_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG10_Set (1UL)

/* Bit 9 : Protection enable for region 9. */
#define MPU_PROTENSET0_PROTREG9_Pos (9UL)
#define MPU_PROTENSET0_PROTREG9_Msk (0x1UL << MPU_PROTENSET0_PROTREG9_Pos)
#define MPU_PROTENSET0_PROTREG9_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG9_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG9_Set (1UL)

/* Bit 8 : Protection enable for region 8. */
#define MPU_PROTENSET0_PROTREG8_Pos (8UL)
#define MPU_PROTENSET0_PROTREG8_Msk (0x1UL << MPU_PROTENSET0_PROTREG8_Pos)
#define MPU_PROTENSET0_PROTREG8_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG8_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG8_Set (1UL)

/* Bit 7 : Protection enable for region 7. */
#define MPU_PROTENSET0_PROTREG7_Pos (7UL)
#define MPU_PROTENSET0_PROTREG7_Msk (0x1UL << MPU_PROTENSET0_PROTREG7_Pos)
#define MPU_PROTENSET0_PROTREG7_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG7_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG7_Set (1UL)

/* Bit 6 : Protection enable for region 6. */
#define MPU_PROTENSET0_PROTREG6_Pos (6UL)
#define MPU_PROTENSET0_PROTREG6_Msk (0x1UL << MPU_PROTENSET0_PROTREG6_Pos)
#define MPU_PROTENSET0_PROTREG6_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG6_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG6_Set (1UL)

/* Bit 5 : Protection enable for region 5. */
#define MPU_PROTENSET0_PROTREG5_Pos (5UL)
#define MPU_PROTENSET0_PROTREG5_Msk (0x1UL << MPU_PROTENSET0_PROTREG5_Pos)
#define MPU_PROTENSET0_PROTREG5_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG5_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG5_Set (1UL)

/* Bit 4 : Protection enable for region 4. */
#define MPU_PROTENSET0_PROTREG4_Pos (4UL)
#define MPU_PROTENSET0_PROTREG4_Msk (0x1UL << MPU_PROTENSET0_PROTREG4_Pos)
#define MPU_PROTENSET0_PROTREG4_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG4_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG4_Set (1UL)

/* Bit 3 : Protection enable for region 3. */
#define MPU_PROTENSET0_PROTREG3_Pos (3UL)
#define MPU_PROTENSET0_PROTREG3_Msk (0x1UL << MPU_PROTENSET0_PROTREG3_Pos)
#define MPU_PROTENSET0_PROTREG3_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG3_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG3_Set (1UL)

/* Bit 2 : Protection enable for region 2. */
#define MPU_PROTENSET0_PROTREG2_Pos (2UL)
#define MPU_PROTENSET0_PROTREG2_Msk (0x1UL << MPU_PROTENSET0_PROTREG2_Pos)
#define MPU_PROTENSET0_PROTREG2_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG2_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG2_Set (1UL)

/* Bit 1 : Protection enable for region 1. */
#define MPU_PROTENSET0_PROTREG1_Pos (1UL)
#define MPU_PROTENSET0_PROTREG1_Msk (0x1UL << MPU_PROTENSET0_PROTREG1_Pos)
#define MPU_PROTENSET0_PROTREG1_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG1_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG1_Set (1UL)

/* Bit 0 : Protection enable for region 0. */
#define MPU_PROTENSET0_PROTREG0_Pos (0UL)
#define MPU_PROTENSET0_PROTREG0_Msk (0x1UL << MPU_PROTENSET0_PROTREG0_Pos)
#define MPU_PROTENSET0_PROTREG0_Disabled (0UL)
#define MPU_PROTENSET0_PROTREG0_Enabled (1UL)
#define MPU_PROTENSET0_PROTREG0_Set (1UL)

/* Register: MPU_PROTENSET1 */
/* Description: Erase and write protection bit enable set register. */

/* Bit 31 : Protection enable for region 63. */
#define MPU_PROTENSET1_PROTREG63_Pos (31UL)
#define MPU_PROTENSET1_PROTREG63_Msk (0x1UL << MPU_PROTENSET1_PROTREG63_Pos)
#define MPU_PROTENSET1_PROTREG63_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG63_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG63_Set (1UL)

/* Bit 30 : Protection enable for region 62. */
#define MPU_PROTENSET1_PROTREG62_Pos (30UL)
#define MPU_PROTENSET1_PROTREG62_Msk (0x1UL << MPU_PROTENSET1_PROTREG62_Pos)
#define MPU_PROTENSET1_PROTREG62_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG62_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG62_Set (1UL)

/* Bit 29 : Protection enable for region 61. */
#define MPU_PROTENSET1_PROTREG61_Pos (29UL)
#define MPU_PROTENSET1_PROTREG61_Msk (0x1UL << MPU_PROTENSET1_PROTREG61_Pos)
#define MPU_PROTENSET1_PROTREG61_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG61_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG61_Set (1UL)

/* Bit 28 : Protection enable for region 60. */
#define MPU_PROTENSET1_PROTREG60_Pos (28UL)
#define MPU_PROTENSET1_PROTREG60_Msk (0x1UL << MPU_PROTENSET1_PROTREG60_Pos)
#define MPU_PROTENSET1_PROTREG60_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG60_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG60_Set (1UL)

/* Bit 27 : Protection enable for region 59. */
#define MPU_PROTENSET1_PROTREG59_Pos (27UL)
#define MPU_PROTENSET1_PROTREG59_Msk (0x1UL << MPU_PROTENSET1_PROTREG59_Pos)
#define MPU_PROTENSET1_PROTREG59_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG59_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG59_Set (1UL)

/* Bit 26 : Protection enable for region 58. */
#define MPU_PROTENSET1_PROTREG58_Pos (26UL)
#define MPU_PROTENSET1_PROTREG58_Msk (0x1UL << MPU_PROTENSET1_PROTREG58_Pos)
#define MPU_PROTENSET1_PROTREG58_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG58_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG58_Set (1UL)

/* Bit 25 : Protection enable for region 57. */
#define MPU_PROTENSET1_PROTREG57_Pos (25UL)
#define MPU_PROTENSET1_PROTREG57_Msk (0x1UL << MPU_PROTENSET1_PROTREG57_Pos)
#define MPU_PROTENSET1_PROTREG57_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG57_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG57_Set (1UL)

/* Bit 24 : Protection enable for region 56. */
#define MPU_PROTENSET1_PROTREG56_Pos (24UL)
#define MPU_PROTENSET1_PROTREG56_Msk (0x1UL << MPU_PROTENSET1_PROTREG56_Pos)
#define MPU_PROTENSET1_PROTREG56_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG56_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG56_Set (1UL)

/* Bit 23 : Protection enable for region 55. */
#define MPU_PROTENSET1_PROTREG55_Pos (23UL)
#define MPU_PROTENSET1_PROTREG55_Msk (0x1UL << MPU_PROTENSET1_PROTREG55_Pos)
#define MPU_PROTENSET1_PROTREG55_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG55_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG55_Set (1UL)

/* Bit 22 : Protection enable for region 54. */
#define MPU_PROTENSET1_PROTREG54_Pos (22UL)
#define MPU_PROTENSET1_PROTREG54_Msk (0x1UL << MPU_PROTENSET1_PROTREG54_Pos)
#define MPU_PROTENSET1_PROTREG54_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG54_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG54_Set (1UL)

/* Bit 21 : Protection enable for region 53. */
#define MPU_PROTENSET1_PROTREG53_Pos (21UL)
#define MPU_PROTENSET1_PROTREG53_Msk (0x1UL << MPU_PROTENSET1_PROTREG53_Pos)
#define MPU_PROTENSET1_PROTREG53_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG53_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG53_Set (1UL)

/* Bit 20 : Protection enable for region 52. */
#define MPU_PROTENSET1_PROTREG52_Pos (20UL)
#define MPU_PROTENSET1_PROTREG52_Msk (0x1UL << MPU_PROTENSET1_PROTREG52_Pos)
#define MPU_PROTENSET1_PROTREG52_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG52_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG52_Set (1UL)

/* Bit 19 : Protection enable for region 51. */
#define MPU_PROTENSET1_PROTREG51_Pos (19UL)
#define MPU_PROTENSET1_PROTREG51_Msk (0x1UL << MPU_PROTENSET1_PROTREG51_Pos)
#define MPU_PROTENSET1_PROTREG51_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG51_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG51_Set (1UL)

/* Bit 18 : Protection enable for region 50. */
#define MPU_PROTENSET1_PROTREG50_Pos (18UL)
#define MPU_PROTENSET1_PROTREG50_Msk (0x1UL << MPU_PROTENSET1_PROTREG50_Pos)
#define MPU_PROTENSET1_PROTREG50_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG50_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG50_Set (1UL)

/* Bit 17 : Protection enable for region 49. */
#define MPU_PROTENSET1_PROTREG49_Pos (17UL)
#define MPU_PROTENSET1_PROTREG49_Msk (0x1UL << MPU_PROTENSET1_PROTREG49_Pos)
#define MPU_PROTENSET1_PROTREG49_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG49_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG49_Set (1UL)

/* Bit 16 : Protection enable for region 48. */
#define MPU_PROTENSET1_PROTREG48_Pos (16UL)
#define MPU_PROTENSET1_PROTREG48_Msk (0x1UL << MPU_PROTENSET1_PROTREG48_Pos)
#define MPU_PROTENSET1_PROTREG48_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG48_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG48_Set (1UL)

/* Bit 15 : Protection enable for region 47. */
#define MPU_PROTENSET1_PROTREG47_Pos (15UL)
#define MPU_PROTENSET1_PROTREG47_Msk (0x1UL << MPU_PROTENSET1_PROTREG47_Pos)
#define MPU_PROTENSET1_PROTREG47_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG47_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG47_Set (1UL)

/* Bit 14 : Protection enable for region 46. */
#define MPU_PROTENSET1_PROTREG46_Pos (14UL)
#define MPU_PROTENSET1_PROTREG46_Msk (0x1UL << MPU_PROTENSET1_PROTREG46_Pos)
#define MPU_PROTENSET1_PROTREG46_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG46_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG46_Set (1UL)

/* Bit 13 : Protection enable for region 45. */
#define MPU_PROTENSET1_PROTREG45_Pos (13UL)
#define MPU_PROTENSET1_PROTREG45_Msk (0x1UL << MPU_PROTENSET1_PROTREG45_Pos)
#define MPU_PROTENSET1_PROTREG45_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG45_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG45_Set (1UL)

/* Bit 12 : Protection enable for region 44. */
#define MPU_PROTENSET1_PROTREG44_Pos (12UL)
#define MPU_PROTENSET1_PROTREG44_Msk (0x1UL << MPU_PROTENSET1_PROTREG44_Pos)
#define MPU_PROTENSET1_PROTREG44_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG44_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG44_Set (1UL)

/* Bit 11 : Protection enable for region 43. */
#define MPU_PROTENSET1_PROTREG43_Pos (11UL)
#define MPU_PROTENSET1_PROTREG43_Msk (0x1UL << MPU_PROTENSET1_PROTREG43_Pos)
#define MPU_PROTENSET1_PROTREG43_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG43_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG43_Set (1UL)

/* Bit 10 : Protection enable for region 42. */
#define MPU_PROTENSET1_PROTREG42_Pos (10UL)
#define MPU_PROTENSET1_PROTREG42_Msk (0x1UL << MPU_PROTENSET1_PROTREG42_Pos)
#define MPU_PROTENSET1_PROTREG42_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG42_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG42_Set (1UL)

/* Bit 9 : Protection enable for region 41. */
#define MPU_PROTENSET1_PROTREG41_Pos (9UL)
#define MPU_PROTENSET1_PROTREG41_Msk (0x1UL << MPU_PROTENSET1_PROTREG41_Pos)
#define MPU_PROTENSET1_PROTREG41_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG41_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG41_Set (1UL)

/* Bit 8 : Protection enable for region 40. */
#define MPU_PROTENSET1_PROTREG40_Pos (8UL)
#define MPU_PROTENSET1_PROTREG40_Msk (0x1UL << MPU_PROTENSET1_PROTREG40_Pos)
#define MPU_PROTENSET1_PROTREG40_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG40_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG40_Set (1UL)

/* Bit 7 : Protection enable for region 39. */
#define MPU_PROTENSET1_PROTREG39_Pos (7UL)
#define MPU_PROTENSET1_PROTREG39_Msk (0x1UL << MPU_PROTENSET1_PROTREG39_Pos)
#define MPU_PROTENSET1_PROTREG39_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG39_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG39_Set (1UL)

/* Bit 6 : Protection enable for region 38. */
#define MPU_PROTENSET1_PROTREG38_Pos (6UL)
#define MPU_PROTENSET1_PROTREG38_Msk (0x1UL << MPU_PROTENSET1_PROTREG38_Pos)
#define MPU_PROTENSET1_PROTREG38_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG38_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG38_Set (1UL)

/* Bit 5 : Protection enable for region 37. */
#define MPU_PROTENSET1_PROTREG37_Pos (5UL)
#define MPU_PROTENSET1_PROTREG37_Msk (0x1UL << MPU_PROTENSET1_PROTREG37_Pos)
#define MPU_PROTENSET1_PROTREG37_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG37_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG37_Set (1UL)

/* Bit 4 : Protection enable for region 36. */
#define MPU_PROTENSET1_PROTREG36_Pos (4UL)
#define MPU_PROTENSET1_PROTREG36_Msk (0x1UL << MPU_PROTENSET1_PROTREG36_Pos)
#define MPU_PROTENSET1_PROTREG36_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG36_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG36_Set (1UL)

/* Bit 3 : Protection enable for region 35. */
#define MPU_PROTENSET1_PROTREG35_Pos (3UL)
#define MPU_PROTENSET1_PROTREG35_Msk (0x1UL << MPU_PROTENSET1_PROTREG35_Pos)
#define MPU_PROTENSET1_PROTREG35_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG35_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG35_Set (1UL)

/* Bit 2 : Protection enable for region 34. */
#define MPU_PROTENSET1_PROTREG34_Pos (2UL)
#define MPU_PROTENSET1_PROTREG34_Msk (0x1UL << MPU_PROTENSET1_PROTREG34_Pos)
#define MPU_PROTENSET1_PROTREG34_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG34_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG34_Set (1UL)

/* Bit 1 : Protection enable for region 33. */
#define MPU_PROTENSET1_PROTREG33_Pos (1UL)
#define MPU_PROTENSET1_PROTREG33_Msk (0x1UL << MPU_PROTENSET1_PROTREG33_Pos)
#define MPU_PROTENSET1_PROTREG33_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG33_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG33_Set (1UL)

/* Bit 0 : Protection enable for region 32. */
#define MPU_PROTENSET1_PROTREG32_Pos (0UL)
#define MPU_PROTENSET1_PROTREG32_Msk (0x1UL << MPU_PROTENSET1_PROTREG32_Pos)
#define MPU_PROTENSET1_PROTREG32_Disabled (0UL)
#define MPU_PROTENSET1_PROTREG32_Enabled (1UL)
#define MPU_PROTENSET1_PROTREG32_Set (1UL)

/* Register: MPU_DISABLEINDEBUG */
/* Description: Disable erase and write protection mechanism in debug mode. */

/* Bit 0 : Disable protection mechanism in debug mode. */
#define MPU_DISABLEINDEBUG_DISABLEINDEBUG_Pos (0UL)
#define MPU_DISABLEINDEBUG_DISABLEINDEBUG_Msk (0x1UL << MPU_DISABLEINDEBUG_DISABLEINDEBUG_Pos)
#define MPU_DISABLEINDEBUG_DISABLEINDEBUG_Enabled (0UL)
#define MPU_DISABLEINDEBUG_DISABLEINDEBUG_Disabled (1UL)

/* Register: MPU_PROTBLOCKSIZE */
/* Description: Erase and write protection block size. */

/* Bits 1..0 : Erase and write protection block size. */
#define MPU_PROTBLOCKSIZE_PROTBLOCKSIZE_Pos (0UL)
#define MPU_PROTBLOCKSIZE_PROTBLOCKSIZE_Msk (0x3UL << MPU_PROTBLOCKSIZE_PROTBLOCKSIZE_Pos)
#define MPU_PROTBLOCKSIZE_PROTBLOCKSIZE_4k (0UL)


/* Peripheral: NVMC */
/* Description: Non Volatile Memory Controller. */

/* Register: NVMC_READY */
/* Description: Ready flag. */

/* Bit 0 : NVMC ready. */
#define NVMC_READY_READY_Pos (0UL)
#define NVMC_READY_READY_Msk (0x1UL << NVMC_READY_READY_Pos)
#define NVMC_READY_READY_Busy (0UL)
#define NVMC_READY_READY_Ready (1UL)

/* Register: NVMC_CONFIG */
/* Description: Configuration register. */

/* Bits 1..0 : Program write enable. */
#define NVMC_CONFIG_WEN_Pos (0UL)
#define NVMC_CONFIG_WEN_Msk (0x3UL << NVMC_CONFIG_WEN_Pos)
#define NVMC_CONFIG_WEN_Ren (0x00UL)
#define NVMC_CONFIG_WEN_Wen (0x01UL)
#define NVMC_CONFIG_WEN_Een (0x02UL)

/* Register: NVMC_ERASEALL */
/* Description: Register for erasing all non-volatile user memory. */

/* Bit 0 : Starts the erasing of all user NVM (code region 0/1 and UICR registers). */
#define NVMC_ERASEALL_ERASEALL_Pos (0UL)
#define NVMC_ERASEALL_ERASEALL_Msk (0x1UL << NVMC_ERASEALL_ERASEALL_Pos)
#define NVMC_ERASEALL_ERASEALL_NoOperation (0UL)
#define NVMC_ERASEALL_ERASEALL_Erase (1UL)

/* Register: NVMC_ERASEUICR */
/* Description: Register for start erasing User Information Congfiguration Registers. */

/* Bit 0 : It can only be used when all contents of code region 1 are erased. */
#define NVMC_ERASEUICR_ERASEUICR_Pos (0UL)
#define NVMC_ERASEUICR_ERASEUICR_Msk (0x1UL << NVMC_ERASEUICR_ERASEUICR_Pos)
#define NVMC_ERASEUICR_ERASEUICR_NoOperation (0UL)
#define NVMC_ERASEUICR_ERASEUICR_Erase (1UL)


/* Peripheral: POWER */
/* Description: Power Control. */

/* Register: POWER_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 2 : Enable interrupt on POFWARN event. */
#define POWER_INTENSET_POFWARN_Pos (2UL)
#define POWER_INTENSET_POFWARN_Msk (0x1UL << POWER_INTENSET_POFWARN_Pos)
#define POWER_INTENSET_POFWARN_Disabled (0UL)
#define POWER_INTENSET_POFWARN_Enabled (1UL)
#define POWER_INTENSET_POFWARN_Set (1UL)

/* Register: POWER_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 2 : Disable interrupt on POFWARN event. */
#define POWER_INTENCLR_POFWARN_Pos (2UL)
#define POWER_INTENCLR_POFWARN_Msk (0x1UL << POWER_INTENCLR_POFWARN_Pos)
#define POWER_INTENCLR_POFWARN_Disabled (0UL)
#define POWER_INTENCLR_POFWARN_Enabled (1UL)
#define POWER_INTENCLR_POFWARN_Clear (1UL)

/* Register: POWER_RESETREAS */
/* Description: Reset reason. */

/* Bit 18 : Reset from wake-up from OFF mode detected by entering into debug interface mode. */
#define POWER_RESETREAS_DIF_Pos (18UL)
#define POWER_RESETREAS_DIF_Msk (0x1UL << POWER_RESETREAS_DIF_Pos)
#define POWER_RESETREAS_DIF_NotDetected (0UL)
#define POWER_RESETREAS_DIF_Detected (1UL)

/* Bit 17 : Reset from wake-up from OFF mode detected by the use of ANADETECT signal from LPCOMP. */
#define POWER_RESETREAS_LPCOMP_Pos (17UL)
#define POWER_RESETREAS_LPCOMP_Msk (0x1UL << POWER_RESETREAS_LPCOMP_Pos)
#define POWER_RESETREAS_LPCOMP_NotDetected (0UL)
#define POWER_RESETREAS_LPCOMP_Detected (1UL)

/* Bit 16 : Reset from wake-up from OFF mode detected by the use of DETECT signal from GPIO. */
#define POWER_RESETREAS_OFF_Pos (16UL)
#define POWER_RESETREAS_OFF_Msk (0x1UL << POWER_RESETREAS_OFF_Pos)
#define POWER_RESETREAS_OFF_NotDetected (0UL)
#define POWER_RESETREAS_OFF_Detected (1UL)

/* Bit 3 : Reset from CPU lock-up detected. */
#define POWER_RESETREAS_LOCKUP_Pos (3UL)
#define POWER_RESETREAS_LOCKUP_Msk (0x1UL << POWER_RESETREAS_LOCKUP_Pos)
#define POWER_RESETREAS_LOCKUP_NotDetected (0UL)
#define POWER_RESETREAS_LOCKUP_Detected (1UL)

/* Bit 2 : Reset from AIRCR.SYSRESETREQ detected. */
#define POWER_RESETREAS_SREQ_Pos (2UL)
#define POWER_RESETREAS_SREQ_Msk (0x1UL << POWER_RESETREAS_SREQ_Pos)
#define POWER_RESETREAS_SREQ_NotDetected (0UL)
#define POWER_RESETREAS_SREQ_Detected (1UL)

/* Bit 1 : Reset from watchdog detected. */
#define POWER_RESETREAS_DOG_Pos (1UL)
#define POWER_RESETREAS_DOG_Msk (0x1UL << POWER_RESETREAS_DOG_Pos)
#define POWER_RESETREAS_DOG_NotDetected (0UL)
#define POWER_RESETREAS_DOG_Detected (1UL)

/* Bit 0 : Reset from pin-reset detected. */
#define POWER_RESETREAS_RESETPIN_Pos (0UL)
#define POWER_RESETREAS_RESETPIN_Msk (0x1UL << POWER_RESETREAS_RESETPIN_Pos)
#define POWER_RESETREAS_RESETPIN_NotDetected (0UL)
#define POWER_RESETREAS_RESETPIN_Detected (1UL)

/* Register: POWER_RAMSTATUS */
/* Description: Ram status register. */

/* Bit 3 : RAM block 3 status. */
#define POWER_RAMSTATUS_RAMBLOCK3_Pos (3UL)
#define POWER_RAMSTATUS_RAMBLOCK3_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK3_Pos)
#define POWER_RAMSTATUS_RAMBLOCK3_Off (0UL)
#define POWER_RAMSTATUS_RAMBLOCK3_On (1UL)

/* Bit 2 : RAM block 2 status. */
#define POWER_RAMSTATUS_RAMBLOCK2_Pos (2UL)
#define POWER_RAMSTATUS_RAMBLOCK2_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK2_Pos)
#define POWER_RAMSTATUS_RAMBLOCK2_Off (0UL)
#define POWER_RAMSTATUS_RAMBLOCK2_On (1UL)

/* Bit 1 : RAM block 1 status. */
#define POWER_RAMSTATUS_RAMBLOCK1_Pos (1UL)
#define POWER_RAMSTATUS_RAMBLOCK1_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK1_Pos)
#define POWER_RAMSTATUS_RAMBLOCK1_Off (0UL)
#define POWER_RAMSTATUS_RAMBLOCK1_On (1UL)

/* Bit 0 : RAM block 0 status. */
#define POWER_RAMSTATUS_RAMBLOCK0_Pos (0UL)
#define POWER_RAMSTATUS_RAMBLOCK0_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK0_Pos)
#define POWER_RAMSTATUS_RAMBLOCK0_Off (0UL)
#define POWER_RAMSTATUS_RAMBLOCK0_On (1UL)

/* Register: POWER_SYSTEMOFF */
/* Description: System off register. */

/* Bit 0 : Enter system off mode. */
#define POWER_SYSTEMOFF_SYSTEMOFF_Pos (0UL)
#define POWER_SYSTEMOFF_SYSTEMOFF_Msk (0x1UL << POWER_SYSTEMOFF_SYSTEMOFF_Pos)
#define POWER_SYSTEMOFF_SYSTEMOFF_Enter (1UL)

/* Register: POWER_POFCON */
/* Description: Power failure configuration. */

/* Bits 2..1 : Set threshold level. */
#define POWER_POFCON_THRESHOLD_Pos (1UL)
#define POWER_POFCON_THRESHOLD_Msk (0x3UL << POWER_POFCON_THRESHOLD_Pos)
#define POWER_POFCON_THRESHOLD_V21 (0x00UL)
#define POWER_POFCON_THRESHOLD_V23 (0x01UL)
#define POWER_POFCON_THRESHOLD_V25 (0x02UL)
#define POWER_POFCON_THRESHOLD_V27 (0x03UL)

/* Bit 0 : Power failure comparator enable. */
#define POWER_POFCON_POF_Pos (0UL)
#define POWER_POFCON_POF_Msk (0x1UL << POWER_POFCON_POF_Pos)
#define POWER_POFCON_POF_Disabled (0UL)
#define POWER_POFCON_POF_Enabled (1UL)

/* Register: POWER_GPREGRET */
/* Description: General purpose retention register. This register is a retained register. */

/* Bits 7..0 : General purpose retention register. */
#define POWER_GPREGRET_GPREGRET_Pos (0UL)
#define POWER_GPREGRET_GPREGRET_Msk (0xFFUL << POWER_GPREGRET_GPREGRET_Pos)

/* Register: POWER_RAMON */
/* Description: Ram on/off. */

/* Bit 17 : RAM block 1 behaviour in OFF mode. */
#define POWER_RAMON_OFFRAM1_Pos (17UL)
#define POWER_RAMON_OFFRAM1_Msk (0x1UL << POWER_RAMON_OFFRAM1_Pos)
#define POWER_RAMON_OFFRAM1_RAM1Off (0UL)
#define POWER_RAMON_OFFRAM1_RAM1On (1UL)

/* Bit 16 : RAM block 0 behaviour in OFF mode. */
#define POWER_RAMON_OFFRAM0_Pos (16UL)
#define POWER_RAMON_OFFRAM0_Msk (0x1UL << POWER_RAMON_OFFRAM0_Pos)
#define POWER_RAMON_OFFRAM0_RAM0Off (0UL)
#define POWER_RAMON_OFFRAM0_RAM0On (1UL)

/* Bit 1 : RAM block 1 behaviour in ON mode. */
#define POWER_RAMON_ONRAM1_Pos (1UL)
#define POWER_RAMON_ONRAM1_Msk (0x1UL << POWER_RAMON_ONRAM1_Pos)
#define POWER_RAMON_ONRAM1_RAM1Off (0UL)
#define POWER_RAMON_ONRAM1_RAM1On (1UL)

/* Bit 0 : RAM block 0 behaviour in ON mode. */
#define POWER_RAMON_ONRAM0_Pos (0UL)
#define POWER_RAMON_ONRAM0_Msk (0x1UL << POWER_RAMON_ONRAM0_Pos)
#define POWER_RAMON_ONRAM0_RAM0Off (0UL)
#define POWER_RAMON_ONRAM0_RAM0On (1UL)

/* Register: POWER_RESET */
/* Description: Pin reset functionality configuration register. This register is a retained register. */

/* Bit 0 : Enable or disable pin reset in debug interface mode. */
#define POWER_RESET_RESET_Pos (0UL)
#define POWER_RESET_RESET_Msk (0x1UL << POWER_RESET_RESET_Pos)
#define POWER_RESET_RESET_Disabled (0UL)
#define POWER_RESET_RESET_Enabled (1UL)

/* Register: POWER_RAMONB */
/* Description: Ram on/off. */

/* Bit 17 : RAM block 3 behaviour in OFF mode. */
#define POWER_RAMONB_OFFRAM3_Pos (17UL)
#define POWER_RAMONB_OFFRAM3_Msk (0x1UL << POWER_RAMONB_OFFRAM3_Pos)
#define POWER_RAMONB_OFFRAM3_RAM3Off (0UL)
#define POWER_RAMONB_OFFRAM3_RAM3On (1UL)

/* Bit 16 : RAM block 2 behaviour in OFF mode. */
#define POWER_RAMONB_OFFRAM2_Pos (16UL)
#define POWER_RAMONB_OFFRAM2_Msk (0x1UL << POWER_RAMONB_OFFRAM2_Pos)
#define POWER_RAMONB_OFFRAM2_RAM2Off (0UL)
#define POWER_RAMONB_OFFRAM2_RAM2On (1UL)

/* Bit 1 : RAM block 3 behaviour in ON mode. */
#define POWER_RAMONB_ONRAM3_Pos (1UL)
#define POWER_RAMONB_ONRAM3_Msk (0x1UL << POWER_RAMONB_ONRAM3_Pos)
#define POWER_RAMONB_ONRAM3_RAM3Off (0UL)
#define POWER_RAMONB_ONRAM3_RAM3On (1UL)

/* Bit 0 : RAM block 2 behaviour in ON mode. */
#define POWER_RAMONB_ONRAM2_Pos (0UL)
#define POWER_RAMONB_ONRAM2_Msk (0x1UL << POWER_RAMONB_ONRAM2_Pos)
#define POWER_RAMONB_ONRAM2_RAM2Off (0UL)
#define POWER_RAMONB_ONRAM2_RAM2On (1UL)

/* Register: POWER_DCDCEN */
/* Description: DCDC converter enable configuration register. */

/* Bit 0 : Enable DCDC converter. */
#define POWER_DCDCEN_DCDCEN_Pos (0UL)
#define POWER_DCDCEN_DCDCEN_Msk (0x1UL << POWER_DCDCEN_DCDCEN_Pos)
#define POWER_DCDCEN_DCDCEN_Disabled (0UL)
#define POWER_DCDCEN_DCDCEN_Enabled (1UL)

/* Register: POWER_DCDCFORCE */
/* Description: DCDC power-up force register. */

/* Bit 1 : DCDC power-up force on. */
#define POWER_DCDCFORCE_FORCEON_Pos (1UL)
#define POWER_DCDCFORCE_FORCEON_Msk (0x1UL << POWER_DCDCFORCE_FORCEON_Pos)
#define POWER_DCDCFORCE_FORCEON_NoForce (0UL)
#define POWER_DCDCFORCE_FORCEON_Force (1UL)

/* Bit 0 : DCDC power-up force off. */
#define POWER_DCDCFORCE_FORCEOFF_Pos (0UL)
#define POWER_DCDCFORCE_FORCEOFF_Msk (0x1UL << POWER_DCDCFORCE_FORCEOFF_Pos)
#define POWER_DCDCFORCE_FORCEOFF_NoForce (0UL)
#define POWER_DCDCFORCE_FORCEOFF_Force (1UL)


/* Peripheral: PPI */
/* Description: PPI controller. */

/* Register: PPI_CHEN */
/* Description: Channel enable. */

/* Bit 31 : Enable PPI channel 31. */
#define PPI_CHEN_CH31_Pos (31UL)
#define PPI_CHEN_CH31_Msk (0x1UL << PPI_CHEN_CH31_Pos)
#define PPI_CHEN_CH31_Disabled (0UL)
#define PPI_CHEN_CH31_Enabled (1UL)

/* Bit 30 : Enable PPI channel 30. */
#define PPI_CHEN_CH30_Pos (30UL)
#define PPI_CHEN_CH30_Msk (0x1UL << PPI_CHEN_CH30_Pos)
#define PPI_CHEN_CH30_Disabled (0UL)
#define PPI_CHEN_CH30_Enabled (1UL)

/* Bit 29 : Enable PPI channel 29. */
#define PPI_CHEN_CH29_Pos (29UL)
#define PPI_CHEN_CH29_Msk (0x1UL << PPI_CHEN_CH29_Pos)
#define PPI_CHEN_CH29_Disabled (0UL)
#define PPI_CHEN_CH29_Enabled (1UL)

/* Bit 28 : Enable PPI channel 28. */
#define PPI_CHEN_CH28_Pos (28UL)
#define PPI_CHEN_CH28_Msk (0x1UL << PPI_CHEN_CH28_Pos)
#define PPI_CHEN_CH28_Disabled (0UL)
#define PPI_CHEN_CH28_Enabled (1UL)

/* Bit 27 : Enable PPI channel 27. */
#define PPI_CHEN_CH27_Pos (27UL)
#define PPI_CHEN_CH27_Msk (0x1UL << PPI_CHEN_CH27_Pos)
#define PPI_CHEN_CH27_Disabled (0UL)
#define PPI_CHEN_CH27_Enabled (1UL)

/* Bit 26 : Enable PPI channel 26. */
#define PPI_CHEN_CH26_Pos (26UL)
#define PPI_CHEN_CH26_Msk (0x1UL << PPI_CHEN_CH26_Pos)
#define PPI_CHEN_CH26_Disabled (0UL)
#define PPI_CHEN_CH26_Enabled (1UL)

/* Bit 25 : Enable PPI channel 25. */
#define PPI_CHEN_CH25_Pos (25UL)
#define PPI_CHEN_CH25_Msk (0x1UL << PPI_CHEN_CH25_Pos)
#define PPI_CHEN_CH25_Disabled (0UL)
#define PPI_CHEN_CH25_Enabled (1UL)

/* Bit 24 : Enable PPI channel 24. */
#define PPI_CHEN_CH24_Pos (24UL)
#define PPI_CHEN_CH24_Msk (0x1UL << PPI_CHEN_CH24_Pos)
#define PPI_CHEN_CH24_Disabled (0UL)
#define PPI_CHEN_CH24_Enabled (1UL)

/* Bit 23 : Enable PPI channel 23. */
#define PPI_CHEN_CH23_Pos (23UL)
#define PPI_CHEN_CH23_Msk (0x1UL << PPI_CHEN_CH23_Pos)
#define PPI_CHEN_CH23_Disabled (0UL)
#define PPI_CHEN_CH23_Enabled (1UL)

/* Bit 22 : Enable PPI channel 22. */
#define PPI_CHEN_CH22_Pos (22UL)
#define PPI_CHEN_CH22_Msk (0x1UL << PPI_CHEN_CH22_Pos)
#define PPI_CHEN_CH22_Disabled (0UL)
#define PPI_CHEN_CH22_Enabled (1UL)

/* Bit 21 : Enable PPI channel 21. */
#define PPI_CHEN_CH21_Pos (21UL)
#define PPI_CHEN_CH21_Msk (0x1UL << PPI_CHEN_CH21_Pos)
#define PPI_CHEN_CH21_Disabled (0UL)
#define PPI_CHEN_CH21_Enabled (1UL)

/* Bit 20 : Enable PPI channel 20. */
#define PPI_CHEN_CH20_Pos (20UL)
#define PPI_CHEN_CH20_Msk (0x1UL << PPI_CHEN_CH20_Pos)
#define PPI_CHEN_CH20_Disabled (0UL)
#define PPI_CHEN_CH20_Enabled (1UL)

/* Bit 15 : Enable PPI channel 15. */
#define PPI_CHEN_CH15_Pos (15UL)
#define PPI_CHEN_CH15_Msk (0x1UL << PPI_CHEN_CH15_Pos)
#define PPI_CHEN_CH15_Disabled (0UL)
#define PPI_CHEN_CH15_Enabled (1UL)

/* Bit 14 : Enable PPI channel 14. */
#define PPI_CHEN_CH14_Pos (14UL)
#define PPI_CHEN_CH14_Msk (0x1UL << PPI_CHEN_CH14_Pos)
#define PPI_CHEN_CH14_Disabled (0UL)
#define PPI_CHEN_CH14_Enabled (1UL)

/* Bit 13 : Enable PPI channel 13. */
#define PPI_CHEN_CH13_Pos (13UL)
#define PPI_CHEN_CH13_Msk (0x1UL << PPI_CHEN_CH13_Pos)
#define PPI_CHEN_CH13_Disabled (0UL)
#define PPI_CHEN_CH13_Enabled (1UL)

/* Bit 12 : Enable PPI channel 12. */
#define PPI_CHEN_CH12_Pos (12UL)
#define PPI_CHEN_CH12_Msk (0x1UL << PPI_CHEN_CH12_Pos)
#define PPI_CHEN_CH12_Disabled (0UL)
#define PPI_CHEN_CH12_Enabled (1UL)

/* Bit 11 : Enable PPI channel 11. */
#define PPI_CHEN_CH11_Pos (11UL)
#define PPI_CHEN_CH11_Msk (0x1UL << PPI_CHEN_CH11_Pos)
#define PPI_CHEN_CH11_Disabled (0UL)
#define PPI_CHEN_CH11_Enabled (1UL)

/* Bit 10 : Enable PPI channel 10. */
#define PPI_CHEN_CH10_Pos (10UL)
#define PPI_CHEN_CH10_Msk (0x1UL << PPI_CHEN_CH10_Pos)
#define PPI_CHEN_CH10_Disabled (0UL)
#define PPI_CHEN_CH10_Enabled (1UL)

/* Bit 9 : Enable PPI channel 9. */
#define PPI_CHEN_CH9_Pos (9UL)
#define PPI_CHEN_CH9_Msk (0x1UL << PPI_CHEN_CH9_Pos)
#define PPI_CHEN_CH9_Disabled (0UL)
#define PPI_CHEN_CH9_Enabled (1UL)

/* Bit 8 : Enable PPI channel 8. */
#define PPI_CHEN_CH8_Pos (8UL)
#define PPI_CHEN_CH8_Msk (0x1UL << PPI_CHEN_CH8_Pos)
#define PPI_CHEN_CH8_Disabled (0UL)
#define PPI_CHEN_CH8_Enabled (1UL)

/* Bit 7 : Enable PPI channel 7. */
#define PPI_CHEN_CH7_Pos (7UL)
#define PPI_CHEN_CH7_Msk (0x1UL << PPI_CHEN_CH7_Pos)
#define PPI_CHEN_CH7_Disabled (0UL)
#define PPI_CHEN_CH7_Enabled (1UL)

/* Bit 6 : Enable PPI channel 6. */
#define PPI_CHEN_CH6_Pos (6UL)
#define PPI_CHEN_CH6_Msk (0x1UL << PPI_CHEN_CH6_Pos)
#define PPI_CHEN_CH6_Disabled (0UL)
#define PPI_CHEN_CH6_Enabled (1UL)

/* Bit 5 : Enable PPI channel 5. */
#define PPI_CHEN_CH5_Pos (5UL)
#define PPI_CHEN_CH5_Msk (0x1UL << PPI_CHEN_CH5_Pos)
#define PPI_CHEN_CH5_Disabled (0UL)
#define PPI_CHEN_CH5_Enabled (1UL)

/* Bit 4 : Enable PPI channel 4. */
#define PPI_CHEN_CH4_Pos (4UL)
#define PPI_CHEN_CH4_Msk (0x1UL << PPI_CHEN_CH4_Pos)
#define PPI_CHEN_CH4_Disabled (0UL)
#define PPI_CHEN_CH4_Enabled (1UL)

/* Bit 3 : Enable PPI channel 3. */
#define PPI_CHEN_CH3_Pos (3UL)
#define PPI_CHEN_CH3_Msk (0x1UL << PPI_CHEN_CH3_Pos)
#define PPI_CHEN_CH3_Disabled (0UL)
#define PPI_CHEN_CH3_Enabled (1UL)

/* Bit 2 : Enable PPI channel 2. */
#define PPI_CHEN_CH2_Pos (2UL)
#define PPI_CHEN_CH2_Msk (0x1UL << PPI_CHEN_CH2_Pos)
#define PPI_CHEN_CH2_Disabled (0UL)
#define PPI_CHEN_CH2_Enabled (1UL)

/* Bit 1 : Enable PPI channel 1. */
#define PPI_CHEN_CH1_Pos (1UL)
#define PPI_CHEN_CH1_Msk (0x1UL << PPI_CHEN_CH1_Pos)
#define PPI_CHEN_CH1_Disabled (0UL)
#define PPI_CHEN_CH1_Enabled (1UL)

/* Bit 0 : Enable PPI channel 0. */
#define PPI_CHEN_CH0_Pos (0UL)
#define PPI_CHEN_CH0_Msk (0x1UL << PPI_CHEN_CH0_Pos)
#define PPI_CHEN_CH0_Disabled (0UL)
#define PPI_CHEN_CH0_Enabled (1UL)

/* Register: PPI_CHENSET */
/* Description: Channel enable set. */

/* Bit 31 : Enable PPI channel 31. */
#define PPI_CHENSET_CH31_Pos (31UL)
#define PPI_CHENSET_CH31_Msk (0x1UL << PPI_CHENSET_CH31_Pos)
#define PPI_CHENSET_CH31_Disabled (0UL)
#define PPI_CHENSET_CH31_Enabled (1UL)
#define PPI_CHENSET_CH31_Set (1UL)

/* Bit 30 : Enable PPI channel 30. */
#define PPI_CHENSET_CH30_Pos (30UL)
#define PPI_CHENSET_CH30_Msk (0x1UL << PPI_CHENSET_CH30_Pos)
#define PPI_CHENSET_CH30_Disabled (0UL)
#define PPI_CHENSET_CH30_Enabled (1UL)
#define PPI_CHENSET_CH30_Set (1UL)

/* Bit 29 : Enable PPI channel 29. */
#define PPI_CHENSET_CH29_Pos (29UL)
#define PPI_CHENSET_CH29_Msk (0x1UL << PPI_CHENSET_CH29_Pos)
#define PPI_CHENSET_CH29_Disabled (0UL)
#define PPI_CHENSET_CH29_Enabled (1UL)
#define PPI_CHENSET_CH29_Set (1UL)

/* Bit 28 : Enable PPI channel 28. */
#define PPI_CHENSET_CH28_Pos (28UL)
#define PPI_CHENSET_CH28_Msk (0x1UL << PPI_CHENSET_CH28_Pos)
#define PPI_CHENSET_CH28_Disabled (0UL)
#define PPI_CHENSET_CH28_Enabled (1UL)
#define PPI_CHENSET_CH28_Set (1UL)

/* Bit 27 : Enable PPI channel 27. */
#define PPI_CHENSET_CH27_Pos (27UL)
#define PPI_CHENSET_CH27_Msk (0x1UL << PPI_CHENSET_CH27_Pos)
#define PPI_CHENSET_CH27_Disabled (0UL)
#define PPI_CHENSET_CH27_Enabled (1UL)
#define PPI_CHENSET_CH27_Set (1UL)

/* Bit 26 : Enable PPI channel 26. */
#define PPI_CHENSET_CH26_Pos (26UL)
#define PPI_CHENSET_CH26_Msk (0x1UL << PPI_CHENSET_CH26_Pos)
#define PPI_CHENSET_CH26_Disabled (0UL)
#define PPI_CHENSET_CH26_Enabled (1UL)
#define PPI_CHENSET_CH26_Set (1UL)

/* Bit 25 : Enable PPI channel 25. */
#define PPI_CHENSET_CH25_Pos (25UL)
#define PPI_CHENSET_CH25_Msk (0x1UL << PPI_CHENSET_CH25_Pos)
#define PPI_CHENSET_CH25_Disabled (0UL)
#define PPI_CHENSET_CH25_Enabled (1UL)
#define PPI_CHENSET_CH25_Set (1UL)

/* Bit 24 : Enable PPI channel 24. */
#define PPI_CHENSET_CH24_Pos (24UL)
#define PPI_CHENSET_CH24_Msk (0x1UL << PPI_CHENSET_CH24_Pos)
#define PPI_CHENSET_CH24_Disabled (0UL)
#define PPI_CHENSET_CH24_Enabled (1UL)
#define PPI_CHENSET_CH24_Set (1UL)

/* Bit 23 : Enable PPI channel 23. */
#define PPI_CHENSET_CH23_Pos (23UL)
#define PPI_CHENSET_CH23_Msk (0x1UL << PPI_CHENSET_CH23_Pos)
#define PPI_CHENSET_CH23_Disabled (0UL)
#define PPI_CHENSET_CH23_Enabled (1UL)
#define PPI_CHENSET_CH23_Set (1UL)

/* Bit 22 : Enable PPI channel 22. */
#define PPI_CHENSET_CH22_Pos (22UL)
#define PPI_CHENSET_CH22_Msk (0x1UL << PPI_CHENSET_CH22_Pos)
#define PPI_CHENSET_CH22_Disabled (0UL)
#define PPI_CHENSET_CH22_Enabled (1UL)
#define PPI_CHENSET_CH22_Set (1UL)

/* Bit 21 : Enable PPI channel 21. */
#define PPI_CHENSET_CH21_Pos (21UL)
#define PPI_CHENSET_CH21_Msk (0x1UL << PPI_CHENSET_CH21_Pos)
#define PPI_CHENSET_CH21_Disabled (0UL)
#define PPI_CHENSET_CH21_Enabled (1UL)
#define PPI_CHENSET_CH21_Set (1UL)

/* Bit 20 : Enable PPI channel 20. */
#define PPI_CHENSET_CH20_Pos (20UL)
#define PPI_CHENSET_CH20_Msk (0x1UL << PPI_CHENSET_CH20_Pos)
#define PPI_CHENSET_CH20_Disabled (0UL)
#define PPI_CHENSET_CH20_Enabled (1UL)
#define PPI_CHENSET_CH20_Set (1UL)

/* Bit 15 : Enable PPI channel 15. */
#define PPI_CHENSET_CH15_Pos (15UL)
#define PPI_CHENSET_CH15_Msk (0x1UL << PPI_CHENSET_CH15_Pos)
#define PPI_CHENSET_CH15_Disabled (0UL)
#define PPI_CHENSET_CH15_Enabled (1UL)
#define PPI_CHENSET_CH15_Set (1UL)

/* Bit 14 : Enable PPI channel 14. */
#define PPI_CHENSET_CH14_Pos (14UL)
#define PPI_CHENSET_CH14_Msk (0x1UL << PPI_CHENSET_CH14_Pos)
#define PPI_CHENSET_CH14_Disabled (0UL)
#define PPI_CHENSET_CH14_Enabled (1UL)
#define PPI_CHENSET_CH14_Set (1UL)

/* Bit 13 : Enable PPI channel 13. */
#define PPI_CHENSET_CH13_Pos (13UL)
#define PPI_CHENSET_CH13_Msk (0x1UL << PPI_CHENSET_CH13_Pos)
#define PPI_CHENSET_CH13_Disabled (0UL)
#define PPI_CHENSET_CH13_Enabled (1UL)
#define PPI_CHENSET_CH13_Set (1UL)

/* Bit 12 : Enable PPI channel 12. */
#define PPI_CHENSET_CH12_Pos (12UL)
#define PPI_CHENSET_CH12_Msk (0x1UL << PPI_CHENSET_CH12_Pos)
#define PPI_CHENSET_CH12_Disabled (0UL)
#define PPI_CHENSET_CH12_Enabled (1UL)
#define PPI_CHENSET_CH12_Set (1UL)

/* Bit 11 : Enable PPI channel 11. */
#define PPI_CHENSET_CH11_Pos (11UL)
#define PPI_CHENSET_CH11_Msk (0x1UL << PPI_CHENSET_CH11_Pos)
#define PPI_CHENSET_CH11_Disabled (0UL)
#define PPI_CHENSET_CH11_Enabled (1UL)
#define PPI_CHENSET_CH11_Set (1UL)

/* Bit 10 : Enable PPI channel 10. */
#define PPI_CHENSET_CH10_Pos (10UL)
#define PPI_CHENSET_CH10_Msk (0x1UL << PPI_CHENSET_CH10_Pos)
#define PPI_CHENSET_CH10_Disabled (0UL)
#define PPI_CHENSET_CH10_Enabled (1UL)
#define PPI_CHENSET_CH10_Set (1UL)

/* Bit 9 : Enable PPI channel 9. */
#define PPI_CHENSET_CH9_Pos (9UL)
#define PPI_CHENSET_CH9_Msk (0x1UL << PPI_CHENSET_CH9_Pos)
#define PPI_CHENSET_CH9_Disabled (0UL)
#define PPI_CHENSET_CH9_Enabled (1UL)
#define PPI_CHENSET_CH9_Set (1UL)

/* Bit 8 : Enable PPI channel 8. */
#define PPI_CHENSET_CH8_Pos (8UL)
#define PPI_CHENSET_CH8_Msk (0x1UL << PPI_CHENSET_CH8_Pos)
#define PPI_CHENSET_CH8_Disabled (0UL)
#define PPI_CHENSET_CH8_Enabled (1UL)
#define PPI_CHENSET_CH8_Set (1UL)

/* Bit 7 : Enable PPI channel 7. */
#define PPI_CHENSET_CH7_Pos (7UL)
#define PPI_CHENSET_CH7_Msk (0x1UL << PPI_CHENSET_CH7_Pos)
#define PPI_CHENSET_CH7_Disabled (0UL)
#define PPI_CHENSET_CH7_Enabled (1UL)
#define PPI_CHENSET_CH7_Set (1UL)

/* Bit 6 : Enable PPI channel 6. */
#define PPI_CHENSET_CH6_Pos (6UL)
#define PPI_CHENSET_CH6_Msk (0x1UL << PPI_CHENSET_CH6_Pos)
#define PPI_CHENSET_CH6_Disabled (0UL)
#define PPI_CHENSET_CH6_Enabled (1UL)
#define PPI_CHENSET_CH6_Set (1UL)

/* Bit 5 : Enable PPI channel 5. */
#define PPI_CHENSET_CH5_Pos (5UL)
#define PPI_CHENSET_CH5_Msk (0x1UL << PPI_CHENSET_CH5_Pos)
#define PPI_CHENSET_CH5_Disabled (0UL)
#define PPI_CHENSET_CH5_Enabled (1UL)
#define PPI_CHENSET_CH5_Set (1UL)

/* Bit 4 : Enable PPI channel 4. */
#define PPI_CHENSET_CH4_Pos (4UL)
#define PPI_CHENSET_CH4_Msk (0x1UL << PPI_CHENSET_CH4_Pos)
#define PPI_CHENSET_CH4_Disabled (0UL)
#define PPI_CHENSET_CH4_Enabled (1UL)
#define PPI_CHENSET_CH4_Set (1UL)

/* Bit 3 : Enable PPI channel 3. */
#define PPI_CHENSET_CH3_Pos (3UL)
#define PPI_CHENSET_CH3_Msk (0x1UL << PPI_CHENSET_CH3_Pos)
#define PPI_CHENSET_CH3_Disabled (0UL)
#define PPI_CHENSET_CH3_Enabled (1UL)
#define PPI_CHENSET_CH3_Set (1UL)

/* Bit 2 : Enable PPI channel 2. */
#define PPI_CHENSET_CH2_Pos (2UL)
#define PPI_CHENSET_CH2_Msk (0x1UL << PPI_CHENSET_CH2_Pos)
#define PPI_CHENSET_CH2_Disabled (0UL)
#define PPI_CHENSET_CH2_Enabled (1UL)
#define PPI_CHENSET_CH2_Set (1UL)

/* Bit 1 : Enable PPI channel 1. */
#define PPI_CHENSET_CH1_Pos (1UL)
#define PPI_CHENSET_CH1_Msk (0x1UL << PPI_CHENSET_CH1_Pos)
#define PPI_CHENSET_CH1_Disabled (0UL)
#define PPI_CHENSET_CH1_Enabled (1UL)
#define PPI_CHENSET_CH1_Set (1UL)

/* Bit 0 : Enable PPI channel 0. */
#define PPI_CHENSET_CH0_Pos (0UL)
#define PPI_CHENSET_CH0_Msk (0x1UL << PPI_CHENSET_CH0_Pos)
#define PPI_CHENSET_CH0_Disabled (0UL)
#define PPI_CHENSET_CH0_Enabled (1UL)
#define PPI_CHENSET_CH0_Set (1UL)

/* Register: PPI_CHENCLR */
/* Description: Channel enable clear. */

/* Bit 31 : Disable PPI channel 31. */
#define PPI_CHENCLR_CH31_Pos (31UL)
#define PPI_CHENCLR_CH31_Msk (0x1UL << PPI_CHENCLR_CH31_Pos)
#define PPI_CHENCLR_CH31_Disabled (0UL)
#define PPI_CHENCLR_CH31_Enabled (1UL)
#define PPI_CHENCLR_CH31_Clear (1UL)

/* Bit 30 : Disable PPI channel 30. */
#define PPI_CHENCLR_CH30_Pos (30UL)
#define PPI_CHENCLR_CH30_Msk (0x1UL << PPI_CHENCLR_CH30_Pos)
#define PPI_CHENCLR_CH30_Disabled (0UL)
#define PPI_CHENCLR_CH30_Enabled (1UL)
#define PPI_CHENCLR_CH30_Clear (1UL)

/* Bit 29 : Disable PPI channel 29. */
#define PPI_CHENCLR_CH29_Pos (29UL)
#define PPI_CHENCLR_CH29_Msk (0x1UL << PPI_CHENCLR_CH29_Pos)
#define PPI_CHENCLR_CH29_Disabled (0UL)
#define PPI_CHENCLR_CH29_Enabled (1UL)
#define PPI_CHENCLR_CH29_Clear (1UL)

/* Bit 28 : Disable PPI channel 28. */
#define PPI_CHENCLR_CH28_Pos (28UL)
#define PPI_CHENCLR_CH28_Msk (0x1UL << PPI_CHENCLR_CH28_Pos)
#define PPI_CHENCLR_CH28_Disabled (0UL)
#define PPI_CHENCLR_CH28_Enabled (1UL)
#define PPI_CHENCLR_CH28_Clear (1UL)

/* Bit 27 : Disable PPI channel 27. */
#define PPI_CHENCLR_CH27_Pos (27UL)
#define PPI_CHENCLR_CH27_Msk (0x1UL << PPI_CHENCLR_CH27_Pos)
#define PPI_CHENCLR_CH27_Disabled (0UL)
#define PPI_CHENCLR_CH27_Enabled (1UL)
#define PPI_CHENCLR_CH27_Clear (1UL)

/* Bit 26 : Disable PPI channel 26. */
#define PPI_CHENCLR_CH26_Pos (26UL)
#define PPI_CHENCLR_CH26_Msk (0x1UL << PPI_CHENCLR_CH26_Pos)
#define PPI_CHENCLR_CH26_Disabled (0UL)
#define PPI_CHENCLR_CH26_Enabled (1UL)
#define PPI_CHENCLR_CH26_Clear (1UL)

/* Bit 25 : Disable PPI channel 25. */
#define PPI_CHENCLR_CH25_Pos (25UL)
#define PPI_CHENCLR_CH25_Msk (0x1UL << PPI_CHENCLR_CH25_Pos)
#define PPI_CHENCLR_CH25_Disabled (0UL)
#define PPI_CHENCLR_CH25_Enabled (1UL)
#define PPI_CHENCLR_CH25_Clear (1UL)

/* Bit 24 : Disable PPI channel 24. */
#define PPI_CHENCLR_CH24_Pos (24UL)
#define PPI_CHENCLR_CH24_Msk (0x1UL << PPI_CHENCLR_CH24_Pos)
#define PPI_CHENCLR_CH24_Disabled (0UL)
#define PPI_CHENCLR_CH24_Enabled (1UL)
#define PPI_CHENCLR_CH24_Clear (1UL)

/* Bit 23 : Disable PPI channel 23. */
#define PPI_CHENCLR_CH23_Pos (23UL)
#define PPI_CHENCLR_CH23_Msk (0x1UL << PPI_CHENCLR_CH23_Pos)
#define PPI_CHENCLR_CH23_Disabled (0UL)
#define PPI_CHENCLR_CH23_Enabled (1UL)
#define PPI_CHENCLR_CH23_Clear (1UL)

/* Bit 22 : Disable PPI channel 22. */
#define PPI_CHENCLR_CH22_Pos (22UL)
#define PPI_CHENCLR_CH22_Msk (0x1UL << PPI_CHENCLR_CH22_Pos)
#define PPI_CHENCLR_CH22_Disabled (0UL)
#define PPI_CHENCLR_CH22_Enabled (1UL)
#define PPI_CHENCLR_CH22_Clear (1UL)

/* Bit 21 : Disable PPI channel 21. */
#define PPI_CHENCLR_CH21_Pos (21UL)
#define PPI_CHENCLR_CH21_Msk (0x1UL << PPI_CHENCLR_CH21_Pos)
#define PPI_CHENCLR_CH21_Disabled (0UL)
#define PPI_CHENCLR_CH21_Enabled (1UL)
#define PPI_CHENCLR_CH21_Clear (1UL)

/* Bit 20 : Disable PPI channel 20. */
#define PPI_CHENCLR_CH20_Pos (20UL)
#define PPI_CHENCLR_CH20_Msk (0x1UL << PPI_CHENCLR_CH20_Pos)
#define PPI_CHENCLR_CH20_Disabled (0UL)
#define PPI_CHENCLR_CH20_Enabled (1UL)
#define PPI_CHENCLR_CH20_Clear (1UL)

/* Bit 15 : Disable PPI channel 15. */
#define PPI_CHENCLR_CH15_Pos (15UL)
#define PPI_CHENCLR_CH15_Msk (0x1UL << PPI_CHENCLR_CH15_Pos)
#define PPI_CHENCLR_CH15_Disabled (0UL)
#define PPI_CHENCLR_CH15_Enabled (1UL)
#define PPI_CHENCLR_CH15_Clear (1UL)

/* Bit 14 : Disable PPI channel 14. */
#define PPI_CHENCLR_CH14_Pos (14UL)
#define PPI_CHENCLR_CH14_Msk (0x1UL << PPI_CHENCLR_CH14_Pos)
#define PPI_CHENCLR_CH14_Disabled (0UL)
#define PPI_CHENCLR_CH14_Enabled (1UL)
#define PPI_CHENCLR_CH14_Clear (1UL)

/* Bit 13 : Disable PPI channel 13. */
#define PPI_CHENCLR_CH13_Pos (13UL)
#define PPI_CHENCLR_CH13_Msk (0x1UL << PPI_CHENCLR_CH13_Pos)
#define PPI_CHENCLR_CH13_Disabled (0UL)
#define PPI_CHENCLR_CH13_Enabled (1UL)
#define PPI_CHENCLR_CH13_Clear (1UL)

/* Bit 12 : Disable PPI channel 12. */
#define PPI_CHENCLR_CH12_Pos (12UL)
#define PPI_CHENCLR_CH12_Msk (0x1UL << PPI_CHENCLR_CH12_Pos)
#define PPI_CHENCLR_CH12_Disabled (0UL)
#define PPI_CHENCLR_CH12_Enabled (1UL)
#define PPI_CHENCLR_CH12_Clear (1UL)

/* Bit 11 : Disable PPI channel 11. */
#define PPI_CHENCLR_CH11_Pos (11UL)
#define PPI_CHENCLR_CH11_Msk (0x1UL << PPI_CHENCLR_CH11_Pos)
#define PPI_CHENCLR_CH11_Disabled (0UL)
#define PPI_CHENCLR_CH11_Enabled (1UL)
#define PPI_CHENCLR_CH11_Clear (1UL)

/* Bit 10 : Disable PPI channel 10. */
#define PPI_CHENCLR_CH10_Pos (10UL)
#define PPI_CHENCLR_CH10_Msk (0x1UL << PPI_CHENCLR_CH10_Pos)
#define PPI_CHENCLR_CH10_Disabled (0UL)
#define PPI_CHENCLR_CH10_Enabled (1UL)
#define PPI_CHENCLR_CH10_Clear (1UL)

/* Bit 9 : Disable PPI channel 9. */
#define PPI_CHENCLR_CH9_Pos (9UL)
#define PPI_CHENCLR_CH9_Msk (0x1UL << PPI_CHENCLR_CH9_Pos)
#define PPI_CHENCLR_CH9_Disabled (0UL)
#define PPI_CHENCLR_CH9_Enabled (1UL)
#define PPI_CHENCLR_CH9_Clear (1UL)

/* Bit 8 : Disable PPI channel 8. */
#define PPI_CHENCLR_CH8_Pos (8UL)
#define PPI_CHENCLR_CH8_Msk (0x1UL << PPI_CHENCLR_CH8_Pos)
#define PPI_CHENCLR_CH8_Disabled (0UL)
#define PPI_CHENCLR_CH8_Enabled (1UL)
#define PPI_CHENCLR_CH8_Clear (1UL)

/* Bit 7 : Disable PPI channel 7. */
#define PPI_CHENCLR_CH7_Pos (7UL)
#define PPI_CHENCLR_CH7_Msk (0x1UL << PPI_CHENCLR_CH7_Pos)
#define PPI_CHENCLR_CH7_Disabled (0UL)
#define PPI_CHENCLR_CH7_Enabled (1UL)
#define PPI_CHENCLR_CH7_Clear (1UL)

/* Bit 6 : Disable PPI channel 6. */
#define PPI_CHENCLR_CH6_Pos (6UL)
#define PPI_CHENCLR_CH6_Msk (0x1UL << PPI_CHENCLR_CH6_Pos)
#define PPI_CHENCLR_CH6_Disabled (0UL)
#define PPI_CHENCLR_CH6_Enabled (1UL)
#define PPI_CHENCLR_CH6_Clear (1UL)

/* Bit 5 : Disable PPI channel 5. */
#define PPI_CHENCLR_CH5_Pos (5UL)
#define PPI_CHENCLR_CH5_Msk (0x1UL << PPI_CHENCLR_CH5_Pos)
#define PPI_CHENCLR_CH5_Disabled (0UL)
#define PPI_CHENCLR_CH5_Enabled (1UL)
#define PPI_CHENCLR_CH5_Clear (1UL)

/* Bit 4 : Disable PPI channel 4. */
#define PPI_CHENCLR_CH4_Pos (4UL)
#define PPI_CHENCLR_CH4_Msk (0x1UL << PPI_CHENCLR_CH4_Pos)
#define PPI_CHENCLR_CH4_Disabled (0UL)
#define PPI_CHENCLR_CH4_Enabled (1UL)
#define PPI_CHENCLR_CH4_Clear (1UL)

/* Bit 3 : Disable PPI channel 3. */
#define PPI_CHENCLR_CH3_Pos (3UL)
#define PPI_CHENCLR_CH3_Msk (0x1UL << PPI_CHENCLR_CH3_Pos)
#define PPI_CHENCLR_CH3_Disabled (0UL)
#define PPI_CHENCLR_CH3_Enabled (1UL)
#define PPI_CHENCLR_CH3_Clear (1UL)

/* Bit 2 : Disable PPI channel 2. */
#define PPI_CHENCLR_CH2_Pos (2UL)
#define PPI_CHENCLR_CH2_Msk (0x1UL << PPI_CHENCLR_CH2_Pos)
#define PPI_CHENCLR_CH2_Disabled (0UL)
#define PPI_CHENCLR_CH2_Enabled (1UL)
#define PPI_CHENCLR_CH2_Clear (1UL)

/* Bit 1 : Disable PPI channel 1. */
#define PPI_CHENCLR_CH1_Pos (1UL)
#define PPI_CHENCLR_CH1_Msk (0x1UL << PPI_CHENCLR_CH1_Pos)
#define PPI_CHENCLR_CH1_Disabled (0UL)
#define PPI_CHENCLR_CH1_Enabled (1UL)
#define PPI_CHENCLR_CH1_Clear (1UL)

/* Bit 0 : Disable PPI channel 0. */
#define PPI_CHENCLR_CH0_Pos (0UL)
#define PPI_CHENCLR_CH0_Msk (0x1UL << PPI_CHENCLR_CH0_Pos)
#define PPI_CHENCLR_CH0_Disabled (0UL)
#define PPI_CHENCLR_CH0_Enabled (1UL)
#define PPI_CHENCLR_CH0_Clear (1UL)

/* Register: PPI_CHG */
/* Description: Channel group configuration. */

/* Bit 31 : Include CH31 in channel group. */
#define PPI_CHG_CH31_Pos (31UL)
#define PPI_CHG_CH31_Msk (0x1UL << PPI_CHG_CH31_Pos)
#define PPI_CHG_CH31_Excluded (0UL)
#define PPI_CHG_CH31_Included (1UL)

/* Bit 30 : Include CH30 in channel group. */
#define PPI_CHG_CH30_Pos (30UL)
#define PPI_CHG_CH30_Msk (0x1UL << PPI_CHG_CH30_Pos)
#define PPI_CHG_CH30_Excluded (0UL)
#define PPI_CHG_CH30_Included (1UL)

/* Bit 29 : Include CH29 in channel group. */
#define PPI_CHG_CH29_Pos (29UL)
#define PPI_CHG_CH29_Msk (0x1UL << PPI_CHG_CH29_Pos)
#define PPI_CHG_CH29_Excluded (0UL)
#define PPI_CHG_CH29_Included (1UL)

/* Bit 28 : Include CH28 in channel group. */
#define PPI_CHG_CH28_Pos (28UL)
#define PPI_CHG_CH28_Msk (0x1UL << PPI_CHG_CH28_Pos)
#define PPI_CHG_CH28_Excluded (0UL)
#define PPI_CHG_CH28_Included (1UL)

/* Bit 27 : Include CH27 in channel group. */
#define PPI_CHG_CH27_Pos (27UL)
#define PPI_CHG_CH27_Msk (0x1UL << PPI_CHG_CH27_Pos)
#define PPI_CHG_CH27_Excluded (0UL)
#define PPI_CHG_CH27_Included (1UL)

/* Bit 26 : Include CH26 in channel group. */
#define PPI_CHG_CH26_Pos (26UL)
#define PPI_CHG_CH26_Msk (0x1UL << PPI_CHG_CH26_Pos)
#define PPI_CHG_CH26_Excluded (0UL)
#define PPI_CHG_CH26_Included (1UL)

/* Bit 25 : Include CH25 in channel group. */
#define PPI_CHG_CH25_Pos (25UL)
#define PPI_CHG_CH25_Msk (0x1UL << PPI_CHG_CH25_Pos)
#define PPI_CHG_CH25_Excluded (0UL)
#define PPI_CHG_CH25_Included (1UL)

/* Bit 24 : Include CH24 in channel group. */
#define PPI_CHG_CH24_Pos (24UL)
#define PPI_CHG_CH24_Msk (0x1UL << PPI_CHG_CH24_Pos)
#define PPI_CHG_CH24_Excluded (0UL)
#define PPI_CHG_CH24_Included (1UL)

/* Bit 23 : Include CH23 in channel group. */
#define PPI_CHG_CH23_Pos (23UL)
#define PPI_CHG_CH23_Msk (0x1UL << PPI_CHG_CH23_Pos)
#define PPI_CHG_CH23_Excluded (0UL)
#define PPI_CHG_CH23_Included (1UL)

/* Bit 22 : Include CH22 in channel group. */
#define PPI_CHG_CH22_Pos (22UL)
#define PPI_CHG_CH22_Msk (0x1UL << PPI_CHG_CH22_Pos)
#define PPI_CHG_CH22_Excluded (0UL)
#define PPI_CHG_CH22_Included (1UL)

/* Bit 21 : Include CH21 in channel group. */
#define PPI_CHG_CH21_Pos (21UL)
#define PPI_CHG_CH21_Msk (0x1UL << PPI_CHG_CH21_Pos)
#define PPI_CHG_CH21_Excluded (0UL)
#define PPI_CHG_CH21_Included (1UL)

/* Bit 20 : Include CH20 in channel group. */
#define PPI_CHG_CH20_Pos (20UL)
#define PPI_CHG_CH20_Msk (0x1UL << PPI_CHG_CH20_Pos)
#define PPI_CHG_CH20_Excluded (0UL)
#define PPI_CHG_CH20_Included (1UL)

/* Bit 15 : Include CH15 in channel group. */
#define PPI_CHG_CH15_Pos (15UL)
#define PPI_CHG_CH15_Msk (0x1UL << PPI_CHG_CH15_Pos)
#define PPI_CHG_CH15_Excluded (0UL)
#define PPI_CHG_CH15_Included (1UL)

/* Bit 14 : Include CH14 in channel group. */
#define PPI_CHG_CH14_Pos (14UL)
#define PPI_CHG_CH14_Msk (0x1UL << PPI_CHG_CH14_Pos)
#define PPI_CHG_CH14_Excluded (0UL)
#define PPI_CHG_CH14_Included (1UL)

/* Bit 13 : Include CH13 in channel group. */
#define PPI_CHG_CH13_Pos (13UL)
#define PPI_CHG_CH13_Msk (0x1UL << PPI_CHG_CH13_Pos)
#define PPI_CHG_CH13_Excluded (0UL)
#define PPI_CHG_CH13_Included (1UL)

/* Bit 12 : Include CH12 in channel group. */
#define PPI_CHG_CH12_Pos (12UL)
#define PPI_CHG_CH12_Msk (0x1UL << PPI_CHG_CH12_Pos)
#define PPI_CHG_CH12_Excluded (0UL)
#define PPI_CHG_CH12_Included (1UL)

/* Bit 11 : Include CH11 in channel group. */
#define PPI_CHG_CH11_Pos (11UL)
#define PPI_CHG_CH11_Msk (0x1UL << PPI_CHG_CH11_Pos)
#define PPI_CHG_CH11_Excluded (0UL)
#define PPI_CHG_CH11_Included (1UL)

/* Bit 10 : Include CH10 in channel group. */
#define PPI_CHG_CH10_Pos (10UL)
#define PPI_CHG_CH10_Msk (0x1UL << PPI_CHG_CH10_Pos)
#define PPI_CHG_CH10_Excluded (0UL)
#define PPI_CHG_CH10_Included (1UL)

/* Bit 9 : Include CH9 in channel group. */
#define PPI_CHG_CH9_Pos (9UL)
#define PPI_CHG_CH9_Msk (0x1UL << PPI_CHG_CH9_Pos)
#define PPI_CHG_CH9_Excluded (0UL)
#define PPI_CHG_CH9_Included (1UL)

/* Bit 8 : Include CH8 in channel group. */
#define PPI_CHG_CH8_Pos (8UL)
#define PPI_CHG_CH8_Msk (0x1UL << PPI_CHG_CH8_Pos)
#define PPI_CHG_CH8_Excluded (0UL)
#define PPI_CHG_CH8_Included (1UL)

/* Bit 7 : Include CH7 in channel group. */
#define PPI_CHG_CH7_Pos (7UL)
#define PPI_CHG_CH7_Msk (0x1UL << PPI_CHG_CH7_Pos)
#define PPI_CHG_CH7_Excluded (0UL)
#define PPI_CHG_CH7_Included (1UL)

/* Bit 6 : Include CH6 in channel group. */
#define PPI_CHG_CH6_Pos (6UL)
#define PPI_CHG_CH6_Msk (0x1UL << PPI_CHG_CH6_Pos)
#define PPI_CHG_CH6_Excluded (0UL)
#define PPI_CHG_CH6_Included (1UL)

/* Bit 5 : Include CH5 in channel group. */
#define PPI_CHG_CH5_Pos (5UL)
#define PPI_CHG_CH5_Msk (0x1UL << PPI_CHG_CH5_Pos)
#define PPI_CHG_CH5_Excluded (0UL)
#define PPI_CHG_CH5_Included (1UL)

/* Bit 4 : Include CH4 in channel group. */
#define PPI_CHG_CH4_Pos (4UL)
#define PPI_CHG_CH4_Msk (0x1UL << PPI_CHG_CH4_Pos)
#define PPI_CHG_CH4_Excluded (0UL)
#define PPI_CHG_CH4_Included (1UL)

/* Bit 3 : Include CH3 in channel group. */
#define PPI_CHG_CH3_Pos (3UL)
#define PPI_CHG_CH3_Msk (0x1UL << PPI_CHG_CH3_Pos)
#define PPI_CHG_CH3_Excluded (0UL)
#define PPI_CHG_CH3_Included (1UL)

/* Bit 2 : Include CH2 in channel group. */
#define PPI_CHG_CH2_Pos (2UL)
#define PPI_CHG_CH2_Msk (0x1UL << PPI_CHG_CH2_Pos)
#define PPI_CHG_CH2_Excluded (0UL)
#define PPI_CHG_CH2_Included (1UL)

/* Bit 1 : Include CH1 in channel group. */
#define PPI_CHG_CH1_Pos (1UL)
#define PPI_CHG_CH1_Msk (0x1UL << PPI_CHG_CH1_Pos)
#define PPI_CHG_CH1_Excluded (0UL)
#define PPI_CHG_CH1_Included (1UL)

/* Bit 0 : Include CH0 in channel group. */
#define PPI_CHG_CH0_Pos (0UL)
#define PPI_CHG_CH0_Msk (0x1UL << PPI_CHG_CH0_Pos)
#define PPI_CHG_CH0_Excluded (0UL)
#define PPI_CHG_CH0_Included (1UL)


/* Peripheral: QDEC */
/* Description: Rotary decoder. */

/* Register: QDEC_SHORTS */
/* Description: Shortcuts for the QDEC. */

/* Bit 1 : Shortcut between SAMPLERDY event and STOP task. */
#define QDEC_SHORTS_SAMPLERDY_STOP_Pos (1UL)
#define QDEC_SHORTS_SAMPLERDY_STOP_Msk (0x1UL << QDEC_SHORTS_SAMPLERDY_STOP_Pos)
#define QDEC_SHORTS_SAMPLERDY_STOP_Disabled (0UL)
#define QDEC_SHORTS_SAMPLERDY_STOP_Enabled (1UL)

/* Bit 0 : Shortcut between REPORTRDY event and READCLRACC task. */
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Pos (0UL)
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_READCLRACC_Pos)
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Disabled (0UL)
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Enabled (1UL)

/* Register: QDEC_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 2 : Enable interrupt on ACCOF event. */
#define QDEC_INTENSET_ACCOF_Pos (2UL)
#define QDEC_INTENSET_ACCOF_Msk (0x1UL << QDEC_INTENSET_ACCOF_Pos)
#define QDEC_INTENSET_ACCOF_Disabled (0UL)
#define QDEC_INTENSET_ACCOF_Enabled (1UL)
#define QDEC_INTENSET_ACCOF_Set (1UL)

/* Bit 1 : Enable interrupt on REPORTRDY event. */
#define QDEC_INTENSET_REPORTRDY_Pos (1UL)
#define QDEC_INTENSET_REPORTRDY_Msk (0x1UL << QDEC_INTENSET_REPORTRDY_Pos)
#define QDEC_INTENSET_REPORTRDY_Disabled (0UL)
#define QDEC_INTENSET_REPORTRDY_Enabled (1UL)
#define QDEC_INTENSET_REPORTRDY_Set (1UL)

/* Bit 0 : Enable interrupt on SAMPLERDY event. */
#define QDEC_INTENSET_SAMPLERDY_Pos (0UL)
#define QDEC_INTENSET_SAMPLERDY_Msk (0x1UL << QDEC_INTENSET_SAMPLERDY_Pos)
#define QDEC_INTENSET_SAMPLERDY_Disabled (0UL)
#define QDEC_INTENSET_SAMPLERDY_Enabled (1UL)
#define QDEC_INTENSET_SAMPLERDY_Set (1UL)

/* Register: QDEC_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 2 : Disable interrupt on ACCOF event. */
#define QDEC_INTENCLR_ACCOF_Pos (2UL)
#define QDEC_INTENCLR_ACCOF_Msk (0x1UL << QDEC_INTENCLR_ACCOF_Pos)
#define QDEC_INTENCLR_ACCOF_Disabled (0UL)
#define QDEC_INTENCLR_ACCOF_Enabled (1UL)
#define QDEC_INTENCLR_ACCOF_Clear (1UL)

/* Bit 1 : Disable interrupt on REPORTRDY event. */
#define QDEC_INTENCLR_REPORTRDY_Pos (1UL)
#define QDEC_INTENCLR_REPORTRDY_Msk (0x1UL << QDEC_INTENCLR_REPORTRDY_Pos)
#define QDEC_INTENCLR_REPORTRDY_Disabled (0UL)
#define QDEC_INTENCLR_REPORTRDY_Enabled (1UL)
#define QDEC_INTENCLR_REPORTRDY_Clear (1UL)

/* Bit 0 : Disable interrupt on SAMPLERDY event. */
#define QDEC_INTENCLR_SAMPLERDY_Pos (0UL)
#define QDEC_INTENCLR_SAMPLERDY_Msk (0x1UL << QDEC_INTENCLR_SAMPLERDY_Pos)
#define QDEC_INTENCLR_SAMPLERDY_Disabled (0UL)
#define QDEC_INTENCLR_SAMPLERDY_Enabled (1UL)
#define QDEC_INTENCLR_SAMPLERDY_Clear (1UL)

/* Register: QDEC_ENABLE */
/* Description: Enable the QDEC. */

/* Bit 0 : Enable or disable QDEC. */
#define QDEC_ENABLE_ENABLE_Pos (0UL)
#define QDEC_ENABLE_ENABLE_Msk (0x1UL << QDEC_ENABLE_ENABLE_Pos)
#define QDEC_ENABLE_ENABLE_Disabled (0UL)
#define QDEC_ENABLE_ENABLE_Enabled (1UL)

/* Register: QDEC_LEDPOL */
/* Description: LED output pin polarity. */

/* Bit 0 : LED output pin polarity. */
#define QDEC_LEDPOL_LEDPOL_Pos (0UL)
#define QDEC_LEDPOL_LEDPOL_Msk (0x1UL << QDEC_LEDPOL_LEDPOL_Pos)
#define QDEC_LEDPOL_LEDPOL_ActiveLow (0UL)
#define QDEC_LEDPOL_LEDPOL_ActiveHigh (1UL)

/* Register: QDEC_SAMPLEPER */
/* Description: Sample period. */

/* Bits 2..0 : Sample period. */
#define QDEC_SAMPLEPER_SAMPLEPER_Pos (0UL)
#define QDEC_SAMPLEPER_SAMPLEPER_Msk (0x7UL << QDEC_SAMPLEPER_SAMPLEPER_Pos)
#define QDEC_SAMPLEPER_SAMPLEPER_128us (0x00UL)
#define QDEC_SAMPLEPER_SAMPLEPER_256us (0x01UL)
#define QDEC_SAMPLEPER_SAMPLEPER_512us (0x02UL)
#define QDEC_SAMPLEPER_SAMPLEPER_1024us (0x03UL)
#define QDEC_SAMPLEPER_SAMPLEPER_2048us (0x04UL)
#define QDEC_SAMPLEPER_SAMPLEPER_4096us (0x05UL)
#define QDEC_SAMPLEPER_SAMPLEPER_8192us (0x06UL)
#define QDEC_SAMPLEPER_SAMPLEPER_16384us (0x07UL)

/* Register: QDEC_SAMPLE */
/* Description: Motion sample value. */

/* Bits 31..0 : Last sample taken in compliment to 2. */
#define QDEC_SAMPLE_SAMPLE_Pos (0UL)
#define QDEC_SAMPLE_SAMPLE_Msk (0xFFFFFFFFUL << QDEC_SAMPLE_SAMPLE_Pos)

/* Register: QDEC_REPORTPER */
/* Description: Number of samples to generate an EVENT_REPORTRDY. */

/* Bits 2..0 : Number of samples to generate an EVENT_REPORTRDY. */
#define QDEC_REPORTPER_REPORTPER_Pos (0UL)
#define QDEC_REPORTPER_REPORTPER_Msk (0x7UL << QDEC_REPORTPER_REPORTPER_Pos)
#define QDEC_REPORTPER_REPORTPER_10Smpl (0x00UL)
#define QDEC_REPORTPER_REPORTPER_40Smpl (0x01UL)
#define QDEC_REPORTPER_REPORTPER_80Smpl (0x02UL)
#define QDEC_REPORTPER_REPORTPER_120Smpl (0x03UL)
#define QDEC_REPORTPER_REPORTPER_160Smpl (0x04UL)
#define QDEC_REPORTPER_REPORTPER_200Smpl (0x05UL)
#define QDEC_REPORTPER_REPORTPER_240Smpl (0x06UL)
#define QDEC_REPORTPER_REPORTPER_280Smpl (0x07UL)

/* Register: QDEC_DBFEN */
/* Description: Enable debouncer input filters. */

/* Bit 0 : Enable debounce input filters. */
#define QDEC_DBFEN_DBFEN_Pos (0UL)
#define QDEC_DBFEN_DBFEN_Msk (0x1UL << QDEC_DBFEN_DBFEN_Pos)
#define QDEC_DBFEN_DBFEN_Disabled (0UL)
#define QDEC_DBFEN_DBFEN_Enabled (1UL)

/* Register: QDEC_LEDPRE */
/* Description: Time LED is switched ON before the sample. */

/* Bits 8..0 : Period in us the LED in switched on prior to sampling. */
#define QDEC_LEDPRE_LEDPRE_Pos (0UL)
#define QDEC_LEDPRE_LEDPRE_Msk (0x1FFUL << QDEC_LEDPRE_LEDPRE_Pos)

/* Register: QDEC_ACCDBL */
/* Description: Accumulated double (error) transitions register. */

/* Bits 3..0 : Accumulated double (error) transitions. */
#define QDEC_ACCDBL_ACCDBL_Pos (0UL)
#define QDEC_ACCDBL_ACCDBL_Msk (0xFUL << QDEC_ACCDBL_ACCDBL_Pos)

/* Register: QDEC_ACCDBLREAD */
/* Description: Snapshot of ACCDBL register. Value generated by the TASKS_READCLEACC task. */

/* Bits 3..0 : Snapshot of accumulated double (error) transitions. */
#define QDEC_ACCDBLREAD_ACCDBLREAD_Pos (0UL)
#define QDEC_ACCDBLREAD_ACCDBLREAD_Msk (0xFUL << QDEC_ACCDBLREAD_ACCDBLREAD_Pos)

/* Register: QDEC_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define QDEC_POWER_POWER_Pos (0UL)
#define QDEC_POWER_POWER_Msk (0x1UL << QDEC_POWER_POWER_Pos)
#define QDEC_POWER_POWER_Disabled (0UL)
#define QDEC_POWER_POWER_Enabled (1UL)


/* Peripheral: RADIO */
/* Description: The radio. */

/* Register: RADIO_SHORTS */
/* Description: Shortcuts for the radio. */

/* Bit 8 : Shortcut between DISABLED event and RSSISTOP task. */
#define RADIO_SHORTS_DISABLED_RSSISTOP_Pos (8UL)
#define RADIO_SHORTS_DISABLED_RSSISTOP_Msk (0x1UL << RADIO_SHORTS_DISABLED_RSSISTOP_Pos)
#define RADIO_SHORTS_DISABLED_RSSISTOP_Disabled (0UL)
#define RADIO_SHORTS_DISABLED_RSSISTOP_Enabled (1UL)

/* Bit 6 : Shortcut between ADDRESS event and BCSTART task. */
#define RADIO_SHORTS_ADDRESS_BCSTART_Pos (6UL)
#define RADIO_SHORTS_ADDRESS_BCSTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_BCSTART_Pos)
#define RADIO_SHORTS_ADDRESS_BCSTART_Disabled (0UL)
#define RADIO_SHORTS_ADDRESS_BCSTART_Enabled (1UL)

/* Bit 5 : Shortcut between END event and START task. */
#define RADIO_SHORTS_END_START_Pos (5UL)
#define RADIO_SHORTS_END_START_Msk (0x1UL << RADIO_SHORTS_END_START_Pos)
#define RADIO_SHORTS_END_START_Disabled (0UL)
#define RADIO_SHORTS_END_START_Enabled (1UL)

/* Bit 4 : Shortcut between ADDRESS event and RSSISTART task. */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Pos (4UL)
#define RADIO_SHORTS_ADDRESS_RSSISTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_RSSISTART_Pos)
#define RADIO_SHORTS_ADDRESS_RSSISTART_Disabled (0UL)
#define RADIO_SHORTS_ADDRESS_RSSISTART_Enabled (1UL)

/* Bit 3 : Shortcut between DISABLED event and RXEN task. */
#define RADIO_SHORTS_DISABLED_RXEN_Pos (3UL)
#define RADIO_SHORTS_DISABLED_RXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_RXEN_Pos)
#define RADIO_SHORTS_DISABLED_RXEN_Disabled (0UL)
#define RADIO_SHORTS_DISABLED_RXEN_Enabled (1UL)

/* Bit 2 : Shortcut between DISABLED event and TXEN task.  */
#define RADIO_SHORTS_DISABLED_TXEN_Pos (2UL)
#define RADIO_SHORTS_DISABLED_TXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_TXEN_Pos)
#define RADIO_SHORTS_DISABLED_TXEN_Disabled (0UL)
#define RADIO_SHORTS_DISABLED_TXEN_Enabled (1UL)

/* Bit 1 : Shortcut between END event and DISABLE task. */
#define RADIO_SHORTS_END_DISABLE_Pos (1UL)
#define RADIO_SHORTS_END_DISABLE_Msk (0x1UL << RADIO_SHORTS_END_DISABLE_Pos)
#define RADIO_SHORTS_END_DISABLE_Disabled (0UL)
#define RADIO_SHORTS_END_DISABLE_Enabled (1UL)

/* Bit 0 : Shortcut between READY event and START task. */
#define RADIO_SHORTS_READY_START_Pos (0UL)
#define RADIO_SHORTS_READY_START_Msk (0x1UL << RADIO_SHORTS_READY_START_Pos)
#define RADIO_SHORTS_READY_START_Disabled (0UL)
#define RADIO_SHORTS_READY_START_Enabled (1UL)

/* Register: RADIO_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 10 : Enable interrupt on BCMATCH event. */
#define RADIO_INTENSET_BCMATCH_Pos (10UL)
#define RADIO_INTENSET_BCMATCH_Msk (0x1UL << RADIO_INTENSET_BCMATCH_Pos)
#define RADIO_INTENSET_BCMATCH_Disabled (0UL)
#define RADIO_INTENSET_BCMATCH_Enabled (1UL)
#define RADIO_INTENSET_BCMATCH_Set (1UL)

/* Bit 7 : Enable interrupt on RSSIEND event. */
#define RADIO_INTENSET_RSSIEND_Pos (7UL)
#define RADIO_INTENSET_RSSIEND_Msk (0x1UL << RADIO_INTENSET_RSSIEND_Pos)
#define RADIO_INTENSET_RSSIEND_Disabled (0UL)
#define RADIO_INTENSET_RSSIEND_Enabled (1UL)
#define RADIO_INTENSET_RSSIEND_Set (1UL)

/* Bit 6 : Enable interrupt on DEVMISS event. */
#define RADIO_INTENSET_DEVMISS_Pos (6UL)
#define RADIO_INTENSET_DEVMISS_Msk (0x1UL << RADIO_INTENSET_DEVMISS_Pos)
#define RADIO_INTENSET_DEVMISS_Disabled (0UL)
#define RADIO_INTENSET_DEVMISS_Enabled (1UL)
#define RADIO_INTENSET_DEVMISS_Set (1UL)

/* Bit 5 : Enable interrupt on DEVMATCH event. */
#define RADIO_INTENSET_DEVMATCH_Pos (5UL)
#define RADIO_INTENSET_DEVMATCH_Msk (0x1UL << RADIO_INTENSET_DEVMATCH_Pos)
#define RADIO_INTENSET_DEVMATCH_Disabled (0UL)
#define RADIO_INTENSET_DEVMATCH_Enabled (1UL)
#define RADIO_INTENSET_DEVMATCH_Set (1UL)

/* Bit 4 : Enable interrupt on DISABLED event. */
#define RADIO_INTENSET_DISABLED_Pos (4UL)
#define RADIO_INTENSET_DISABLED_Msk (0x1UL << RADIO_INTENSET_DISABLED_Pos)
#define RADIO_INTENSET_DISABLED_Disabled (0UL)
#define RADIO_INTENSET_DISABLED_Enabled (1UL)
#define RADIO_INTENSET_DISABLED_Set (1UL)

/* Bit 3 : Enable interrupt on END event. */
#define RADIO_INTENSET_END_Pos (3UL)
#define RADIO_INTENSET_END_Msk (0x1UL << RADIO_INTENSET_END_Pos)
#define RADIO_INTENSET_END_Disabled (0UL)
#define RADIO_INTENSET_END_Enabled (1UL)
#define RADIO_INTENSET_END_Set (1UL)

/* Bit 2 : Enable interrupt on PAYLOAD event. */
#define RADIO_INTENSET_PAYLOAD_Pos (2UL)
#define RADIO_INTENSET_PAYLOAD_Msk (0x1UL << RADIO_INTENSET_PAYLOAD_Pos)
#define RADIO_INTENSET_PAYLOAD_Disabled (0UL)
#define RADIO_INTENSET_PAYLOAD_Enabled (1UL)
#define RADIO_INTENSET_PAYLOAD_Set (1UL)

/* Bit 1 : Enable interrupt on ADDRESS event. */
#define RADIO_INTENSET_ADDRESS_Pos (1UL)
#define RADIO_INTENSET_ADDRESS_Msk (0x1UL << RADIO_INTENSET_ADDRESS_Pos)
#define RADIO_INTENSET_ADDRESS_Disabled (0UL)
#define RADIO_INTENSET_ADDRESS_Enabled (1UL)
#define RADIO_INTENSET_ADDRESS_Set (1UL)

/* Bit 0 : Enable interrupt on READY event. */
#define RADIO_INTENSET_READY_Pos (0UL)
#define RADIO_INTENSET_READY_Msk (0x1UL << RADIO_INTENSET_READY_Pos)
#define RADIO_INTENSET_READY_Disabled (0UL)
#define RADIO_INTENSET_READY_Enabled (1UL)
#define RADIO_INTENSET_READY_Set (1UL)

/* Register: RADIO_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 10 : Disable interrupt on BCMATCH event. */
#define RADIO_INTENCLR_BCMATCH_Pos (10UL)
#define RADIO_INTENCLR_BCMATCH_Msk (0x1UL << RADIO_INTENCLR_BCMATCH_Pos)
#define RADIO_INTENCLR_BCMATCH_Disabled (0UL)
#define RADIO_INTENCLR_BCMATCH_Enabled (1UL)
#define RADIO_INTENCLR_BCMATCH_Clear (1UL)

/* Bit 7 : Disable interrupt on RSSIEND event. */
#define RADIO_INTENCLR_RSSIEND_Pos (7UL)
#define RADIO_INTENCLR_RSSIEND_Msk (0x1UL << RADIO_INTENCLR_RSSIEND_Pos)
#define RADIO_INTENCLR_RSSIEND_Disabled (0UL)
#define RADIO_INTENCLR_RSSIEND_Enabled (1UL)
#define RADIO_INTENCLR_RSSIEND_Clear (1UL)

/* Bit 6 : Disable interrupt on DEVMISS event. */
#define RADIO_INTENCLR_DEVMISS_Pos (6UL)
#define RADIO_INTENCLR_DEVMISS_Msk (0x1UL << RADIO_INTENCLR_DEVMISS_Pos)
#define RADIO_INTENCLR_DEVMISS_Disabled (0UL)
#define RADIO_INTENCLR_DEVMISS_Enabled (1UL)
#define RADIO_INTENCLR_DEVMISS_Clear (1UL)

/* Bit 5 : Disable interrupt on DEVMATCH event. */
#define RADIO_INTENCLR_DEVMATCH_Pos (5UL)
#define RADIO_INTENCLR_DEVMATCH_Msk (0x1UL << RADIO_INTENCLR_DEVMATCH_Pos)
#define RADIO_INTENCLR_DEVMATCH_Disabled (0UL)
#define RADIO_INTENCLR_DEVMATCH_Enabled (1UL)
#define RADIO_INTENCLR_DEVMATCH_Clear (1UL)

/* Bit 4 : Disable interrupt on DISABLED event. */
#define RADIO_INTENCLR_DISABLED_Pos (4UL)
#define RADIO_INTENCLR_DISABLED_Msk (0x1UL << RADIO_INTENCLR_DISABLED_Pos)
#define RADIO_INTENCLR_DISABLED_Disabled (0UL)
#define RADIO_INTENCLR_DISABLED_Enabled (1UL)
#define RADIO_INTENCLR_DISABLED_Clear (1UL)

/* Bit 3 : Disable interrupt on END event. */
#define RADIO_INTENCLR_END_Pos (3UL)
#define RADIO_INTENCLR_END_Msk (0x1UL << RADIO_INTENCLR_END_Pos)
#define RADIO_INTENCLR_END_Disabled (0UL)
#define RADIO_INTENCLR_END_Enabled (1UL)
#define RADIO_INTENCLR_END_Clear (1UL)

/* Bit 2 : Disable interrupt on PAYLOAD event. */
#define RADIO_INTENCLR_PAYLOAD_Pos (2UL)
#define RADIO_INTENCLR_PAYLOAD_Msk (0x1UL << RADIO_INTENCLR_PAYLOAD_Pos)
#define RADIO_INTENCLR_PAYLOAD_Disabled (0UL)
#define RADIO_INTENCLR_PAYLOAD_Enabled (1UL)
#define RADIO_INTENCLR_PAYLOAD_Clear (1UL)

/* Bit 1 : Disable interrupt on ADDRESS event. */
#define RADIO_INTENCLR_ADDRESS_Pos (1UL)
#define RADIO_INTENCLR_ADDRESS_Msk (0x1UL << RADIO_INTENCLR_ADDRESS_Pos)
#define RADIO_INTENCLR_ADDRESS_Disabled (0UL)
#define RADIO_INTENCLR_ADDRESS_Enabled (1UL)
#define RADIO_INTENCLR_ADDRESS_Clear (1UL)

/* Bit 0 : Disable interrupt on READY event. */
#define RADIO_INTENCLR_READY_Pos (0UL)
#define RADIO_INTENCLR_READY_Msk (0x1UL << RADIO_INTENCLR_READY_Pos)
#define RADIO_INTENCLR_READY_Disabled (0UL)
#define RADIO_INTENCLR_READY_Enabled (1UL)
#define RADIO_INTENCLR_READY_Clear (1UL)

/* Register: RADIO_CRCSTATUS */
/* Description: CRC status of received packet. */

/* Bit 0 : CRC status of received packet. */
#define RADIO_CRCSTATUS_CRCSTATUS_Pos (0UL)
#define RADIO_CRCSTATUS_CRCSTATUS_Msk (0x1UL << RADIO_CRCSTATUS_CRCSTATUS_Pos)
#define RADIO_CRCSTATUS_CRCSTATUS_CRCError (0UL)
#define RADIO_CRCSTATUS_CRCSTATUS_CRCOk (1UL)

/* Register: RADIO_RXMATCH */
/* Description: Received address. */

/* Bits 2..0 : Logical address in which previous packet was received. */
#define RADIO_RXMATCH_RXMATCH_Pos (0UL)
#define RADIO_RXMATCH_RXMATCH_Msk (0x7UL << RADIO_RXMATCH_RXMATCH_Pos)

/* Register: RADIO_RXCRC */
/* Description: Received CRC. */

/* Bits 23..0 : CRC field of previously received packet. */
#define RADIO_RXCRC_RXCRC_Pos (0UL)
#define RADIO_RXCRC_RXCRC_Msk (0xFFFFFFUL << RADIO_RXCRC_RXCRC_Pos)

/* Register: RADIO_DAI */
/* Description: Device address match index. */

/* Bits 2..0 : Index (n) of device address (see DAB[n] and DAP[n]) that obtained an address match. */
#define RADIO_DAI_DAI_Pos (0UL)
#define RADIO_DAI_DAI_Msk (0x7UL << RADIO_DAI_DAI_Pos)

/* Register: RADIO_FREQUENCY */
/* Description: Frequency. */

/* Bits 6..0 : Radio channel frequency offset in MHz: RF Frequency = 2400 + FREQUENCY (MHz). Decision point: TXEN or RXEN task.  */
#define RADIO_FREQUENCY_FREQUENCY_Pos (0UL)
#define RADIO_FREQUENCY_FREQUENCY_Msk (0x7FUL << RADIO_FREQUENCY_FREQUENCY_Pos)

/* Register: RADIO_TXPOWER */
/* Description: Output power. */

/* Bits 7..0 : Radio output power. Decision point: TXEN task. */
#define RADIO_TXPOWER_TXPOWER_Pos (0UL)
#define RADIO_TXPOWER_TXPOWER_Msk (0xFFUL << RADIO_TXPOWER_TXPOWER_Pos)
#define RADIO_TXPOWER_TXPOWER_0dBm (0x00UL)
#define RADIO_TXPOWER_TXPOWER_Pos4dBm (0x04UL)
#define RADIO_TXPOWER_TXPOWER_Neg30dBm (0xD8UL)
#define RADIO_TXPOWER_TXPOWER_Neg20dBm (0xECUL)
#define RADIO_TXPOWER_TXPOWER_Neg16dBm (0xF0UL)
#define RADIO_TXPOWER_TXPOWER_Neg12dBm (0xF4UL)
#define RADIO_TXPOWER_TXPOWER_Neg8dBm (0xF8UL)
#define RADIO_TXPOWER_TXPOWER_Neg4dBm (0xFCUL)

/* Register: RADIO_MODE */
/* Description: Data rate and modulation. */

/* Bits 1..0 : Radio data rate and modulation setting. Decision point: TXEN or RXEN task. */
#define RADIO_MODE_MODE_Pos (0UL)
#define RADIO_MODE_MODE_Msk (0x3UL << RADIO_MODE_MODE_Pos)
#define RADIO_MODE_MODE_Nrf_1Mbit (0x00UL)
#define RADIO_MODE_MODE_Nrf_2Mbit (0x01UL)
#define RADIO_MODE_MODE_Nrf_250Kbit (0x02UL)
#define RADIO_MODE_MODE_Ble_1Mbit (0x03UL)

/* Register: RADIO_PCNF0 */
/* Description: Packet configuration 0. */

/* Bits 19..16 : Length of S1 field in number of bits. Decision point: START task. */
#define RADIO_PCNF0_S1LEN_Pos (16UL)
#define RADIO_PCNF0_S1LEN_Msk (0xFUL << RADIO_PCNF0_S1LEN_Pos)

/* Bit 8 : Length of S0 field in number of bytes. Decision point: START task. */
#define RADIO_PCNF0_S0LEN_Pos (8UL)
#define RADIO_PCNF0_S0LEN_Msk (0x1UL << RADIO_PCNF0_S0LEN_Pos)

/* Bits 3..0 : Length of length field in number of bits. Decision point: START task. */
#define RADIO_PCNF0_LFLEN_Pos (0UL)
#define RADIO_PCNF0_LFLEN_Msk (0xFUL << RADIO_PCNF0_LFLEN_Pos)

/* Register: RADIO_PCNF1 */
/* Description: Packet configuration 1. */

/* Bit 25 : Packet whitening enable. */
#define RADIO_PCNF1_WHITEEN_Pos (25UL)
#define RADIO_PCNF1_WHITEEN_Msk (0x1UL << RADIO_PCNF1_WHITEEN_Pos)
#define RADIO_PCNF1_WHITEEN_Disabled (0UL)
#define RADIO_PCNF1_WHITEEN_Enabled (1UL)

/* Bit 24 : On air endianness of packet length field. Decision point: START task. */
#define RADIO_PCNF1_ENDIAN_Pos (24UL)
#define RADIO_PCNF1_ENDIAN_Msk (0x1UL << RADIO_PCNF1_ENDIAN_Pos)
#define RADIO_PCNF1_ENDIAN_Little (0UL)
#define RADIO_PCNF1_ENDIAN_Big (1UL)

/* Bits 18..16 : Base address length in number of bytes. Decision point: START task. */
#define RADIO_PCNF1_BALEN_Pos (16UL)
#define RADIO_PCNF1_BALEN_Msk (0x7UL << RADIO_PCNF1_BALEN_Pos)

/* Bits 15..8 : Static length in number of bytes. Decision point: START task. */
#define RADIO_PCNF1_STATLEN_Pos (8UL)
#define RADIO_PCNF1_STATLEN_Msk (0xFFUL << RADIO_PCNF1_STATLEN_Pos)

/* Bits 7..0 : Maximum length of packet payload in number of bytes. */
#define RADIO_PCNF1_MAXLEN_Pos (0UL)
#define RADIO_PCNF1_MAXLEN_Msk (0xFFUL << RADIO_PCNF1_MAXLEN_Pos)

/* Register: RADIO_PREFIX0 */
/* Description: Prefixes bytes for logical addresses 0 to 3. */

/* Bits 31..24 : Address prefix 3. Decision point: START task. */
#define RADIO_PREFIX0_AP3_Pos (24UL)
#define RADIO_PREFIX0_AP3_Msk (0xFFUL << RADIO_PREFIX0_AP3_Pos)

/* Bits 23..16 : Address prefix 2. Decision point: START task. */
#define RADIO_PREFIX0_AP2_Pos (16UL)
#define RADIO_PREFIX0_AP2_Msk (0xFFUL << RADIO_PREFIX0_AP2_Pos)

/* Bits 15..8 : Address prefix 1. Decision point: START task. */
#define RADIO_PREFIX0_AP1_Pos (8UL)
#define RADIO_PREFIX0_AP1_Msk (0xFFUL << RADIO_PREFIX0_AP1_Pos)

/* Bits 7..0 : Address prefix 0. Decision point: START task. */
#define RADIO_PREFIX0_AP0_Pos (0UL)
#define RADIO_PREFIX0_AP0_Msk (0xFFUL << RADIO_PREFIX0_AP0_Pos)

/* Register: RADIO_PREFIX1 */
/* Description: Prefixes bytes for logical addresses 4 to 7. */

/* Bits 31..24 : Address prefix 7. Decision point: START task. */
#define RADIO_PREFIX1_AP7_Pos (24UL)
#define RADIO_PREFIX1_AP7_Msk (0xFFUL << RADIO_PREFIX1_AP7_Pos)

/* Bits 23..16 : Address prefix 6. Decision point: START task. */
#define RADIO_PREFIX1_AP6_Pos (16UL)
#define RADIO_PREFIX1_AP6_Msk (0xFFUL << RADIO_PREFIX1_AP6_Pos)

/* Bits 15..8 : Address prefix 5. Decision point: START task. */
#define RADIO_PREFIX1_AP5_Pos (8UL)
#define RADIO_PREFIX1_AP5_Msk (0xFFUL << RADIO_PREFIX1_AP5_Pos)

/* Bits 7..0 : Address prefix 4. Decision point: START task. */
#define RADIO_PREFIX1_AP4_Pos (0UL)
#define RADIO_PREFIX1_AP4_Msk (0xFFUL << RADIO_PREFIX1_AP4_Pos)

/* Register: RADIO_TXADDRESS */
/* Description: Transmit address select. */

/* Bits 2..0 : Logical address to be used when transmitting a packet. Decision point: START task. */
#define RADIO_TXADDRESS_TXADDRESS_Pos (0UL)
#define RADIO_TXADDRESS_TXADDRESS_Msk (0x7UL << RADIO_TXADDRESS_TXADDRESS_Pos)

/* Register: RADIO_RXADDRESSES */
/* Description: Receive address select. */

/* Bit 7 : Enable reception on logical address 7. Decision point: START task. */
#define RADIO_RXADDRESSES_ADDR7_Pos (7UL)
#define RADIO_RXADDRESSES_ADDR7_Msk (0x1UL << RADIO_RXADDRESSES_ADDR7_Pos)
#define RADIO_RXADDRESSES_ADDR7_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR7_Enabled (1UL)

/* Bit 6 : Enable reception on logical address 6. Decision point: START task. */
#define RADIO_RXADDRESSES_ADDR6_Pos (6UL)
#define RADIO_RXADDRESSES_ADDR6_Msk (0x1UL << RADIO_RXADDRESSES_ADDR6_Pos)
#define RADIO_RXADDRESSES_ADDR6_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR6_Enabled (1UL)

/* Bit 5 : Enable reception on logical address 5. Decision point: START task. */
#define RADIO_RXADDRESSES_ADDR5_Pos (5UL)
#define RADIO_RXADDRESSES_ADDR5_Msk (0x1UL << RADIO_RXADDRESSES_ADDR5_Pos)
#define RADIO_RXADDRESSES_ADDR5_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR5_Enabled (1UL)

/* Bit 4 : Enable reception on logical address 4. Decision point: START task. */
#define RADIO_RXADDRESSES_ADDR4_Pos (4UL)
#define RADIO_RXADDRESSES_ADDR4_Msk (0x1UL << RADIO_RXADDRESSES_ADDR4_Pos)
#define RADIO_RXADDRESSES_ADDR4_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR4_Enabled (1UL)

/* Bit 3 : Enable reception on logical address 3. Decision point: START task. */
#define RADIO_RXADDRESSES_ADDR3_Pos (3UL)
#define RADIO_RXADDRESSES_ADDR3_Msk (0x1UL << RADIO_RXADDRESSES_ADDR3_Pos)
#define RADIO_RXADDRESSES_ADDR3_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR3_Enabled (1UL)

/* Bit 2 : Enable reception on logical address 2. Decision point: START task. */
#define RADIO_RXADDRESSES_ADDR2_Pos (2UL)
#define RADIO_RXADDRESSES_ADDR2_Msk (0x1UL << RADIO_RXADDRESSES_ADDR2_Pos)
#define RADIO_RXADDRESSES_ADDR2_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR2_Enabled (1UL)

/* Bit 1 : Enable reception on logical address 1. Decision point: START task. */
#define RADIO_RXADDRESSES_ADDR1_Pos (1UL)
#define RADIO_RXADDRESSES_ADDR1_Msk (0x1UL << RADIO_RXADDRESSES_ADDR1_Pos)
#define RADIO_RXADDRESSES_ADDR1_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR1_Enabled (1UL)

/* Bit 0 : Enable reception on logical address 0. Decision point: START task. */
#define RADIO_RXADDRESSES_ADDR0_Pos (0UL)
#define RADIO_RXADDRESSES_ADDR0_Msk (0x1UL << RADIO_RXADDRESSES_ADDR0_Pos)
#define RADIO_RXADDRESSES_ADDR0_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR0_Enabled (1UL)

/* Register: RADIO_CRCCNF */
/* Description: CRC configuration. */

/* Bit 8 : Leave packet address field out of the CRC calculation. Decision point: START task. */
#define RADIO_CRCCNF_SKIPADDR_Pos (8UL)
#define RADIO_CRCCNF_SKIPADDR_Msk (0x1UL << RADIO_CRCCNF_SKIPADDR_Pos)
#define RADIO_CRCCNF_SKIPADDR_Include (0UL)
#define RADIO_CRCCNF_SKIPADDR_Skip (1UL)

/* Bits 1..0 : CRC length. Decision point: START task. */
#define RADIO_CRCCNF_LEN_Pos (0UL)
#define RADIO_CRCCNF_LEN_Msk (0x3UL << RADIO_CRCCNF_LEN_Pos)
#define RADIO_CRCCNF_LEN_Disabled (0UL)
#define RADIO_CRCCNF_LEN_One (1UL)
#define RADIO_CRCCNF_LEN_Two (2UL)
#define RADIO_CRCCNF_LEN_Three (3UL)

/* Register: RADIO_CRCPOLY */
/* Description: CRC polynomial. */

/* Bits 23..0 : CRC polynomial. Decision point: START task. */
#define RADIO_CRCPOLY_CRCPOLY_Pos (0UL)
#define RADIO_CRCPOLY_CRCPOLY_Msk (0xFFFFFFUL << RADIO_CRCPOLY_CRCPOLY_Pos)

/* Register: RADIO_CRCINIT */
/* Description: CRC initial value. */

/* Bits 23..0 : Initial value for CRC calculation. Decision point: START task. */
#define RADIO_CRCINIT_CRCINIT_Pos (0UL)
#define RADIO_CRCINIT_CRCINIT_Msk (0xFFFFFFUL << RADIO_CRCINIT_CRCINIT_Pos)

/* Register: RADIO_TEST */
/* Description: Test features enable register. */

/* Bit 1 : PLL lock. Decision point: TXEN or RXEN task. */
#define RADIO_TEST_PLLLOCK_Pos (1UL)
#define RADIO_TEST_PLLLOCK_Msk (0x1UL << RADIO_TEST_PLLLOCK_Pos)
#define RADIO_TEST_PLLLOCK_Disabled (0UL)
#define RADIO_TEST_PLLLOCK_Enabled (1UL)

/* Bit 0 : Constant carrier. Decision point: TXEN task. */
#define RADIO_TEST_CONSTCARRIER_Pos (0UL)
#define RADIO_TEST_CONSTCARRIER_Msk (0x1UL << RADIO_TEST_CONSTCARRIER_Pos)
#define RADIO_TEST_CONSTCARRIER_Disabled (0UL)
#define RADIO_TEST_CONSTCARRIER_Enabled (1UL)

/* Register: RADIO_TIFS */
/* Description: Inter Frame Spacing in microseconds. */

/* Bits 7..0 : Inter frame spacing in microseconds. Decision point: START rask */
#define RADIO_TIFS_TIFS_Pos (0UL)
#define RADIO_TIFS_TIFS_Msk (0xFFUL << RADIO_TIFS_TIFS_Pos)

/* Register: RADIO_RSSISAMPLE */
/* Description: RSSI sample. */

/* Bits 6..0 : RSSI sample result. The result is read as a positive value so that ReceivedSignalStrength = -RSSISAMPLE dBm */
#define RADIO_RSSISAMPLE_RSSISAMPLE_Pos (0UL)
#define RADIO_RSSISAMPLE_RSSISAMPLE_Msk (0x7FUL << RADIO_RSSISAMPLE_RSSISAMPLE_Pos)

/* Register: RADIO_STATE */
/* Description: Current radio state. */

/* Bits 3..0 : Current radio state. */
#define RADIO_STATE_STATE_Pos (0UL)
#define RADIO_STATE_STATE_Msk (0xFUL << RADIO_STATE_STATE_Pos)
#define RADIO_STATE_STATE_Disabled (0x00UL)
#define RADIO_STATE_STATE_RxRu (0x01UL)
#define RADIO_STATE_STATE_RxIdle (0x02UL)
#define RADIO_STATE_STATE_Rx (0x03UL)
#define RADIO_STATE_STATE_RxDisable (0x04UL)
#define RADIO_STATE_STATE_TxRu (0x09UL)
#define RADIO_STATE_STATE_TxIdle (0x0AUL)
#define RADIO_STATE_STATE_Tx (0x0BUL)
#define RADIO_STATE_STATE_TxDisable (0x0CUL)

/* Register: RADIO_DATAWHITEIV */
/* Description: Data whitening initial value. */

/* Bits 6..0 : Data whitening initial value. Bit 0 corresponds to Position 0 of the LSFR, Bit 1 to position 5... Decision point: TXEN or RXEN task. */
#define RADIO_DATAWHITEIV_DATAWHITEIV_Pos (0UL)
#define RADIO_DATAWHITEIV_DATAWHITEIV_Msk (0x7FUL << RADIO_DATAWHITEIV_DATAWHITEIV_Pos)

/* Register: RADIO_DAP */
/* Description: Device address prefix. */

/* Bits 15..0 : Device address prefix. */
#define RADIO_DAP_DAP_Pos (0UL)
#define RADIO_DAP_DAP_Msk (0xFFFFUL << RADIO_DAP_DAP_Pos)

/* Register: RADIO_DACNF */
/* Description: Device address match configuration. */

/* Bit 15 : TxAdd for device address 7. */
#define RADIO_DACNF_TXADD7_Pos (15UL)
#define RADIO_DACNF_TXADD7_Msk (0x1UL << RADIO_DACNF_TXADD7_Pos)

/* Bit 14 : TxAdd for device address 6. */
#define RADIO_DACNF_TXADD6_Pos (14UL)
#define RADIO_DACNF_TXADD6_Msk (0x1UL << RADIO_DACNF_TXADD6_Pos)

/* Bit 13 : TxAdd for device address 5. */
#define RADIO_DACNF_TXADD5_Pos (13UL)
#define RADIO_DACNF_TXADD5_Msk (0x1UL << RADIO_DACNF_TXADD5_Pos)

/* Bit 12 : TxAdd for device address 4. */
#define RADIO_DACNF_TXADD4_Pos (12UL)
#define RADIO_DACNF_TXADD4_Msk (0x1UL << RADIO_DACNF_TXADD4_Pos)

/* Bit 11 : TxAdd for device address 3. */
#define RADIO_DACNF_TXADD3_Pos (11UL)
#define RADIO_DACNF_TXADD3_Msk (0x1UL << RADIO_DACNF_TXADD3_Pos)

/* Bit 10 : TxAdd for device address 2. */
#define RADIO_DACNF_TXADD2_Pos (10UL)
#define RADIO_DACNF_TXADD2_Msk (0x1UL << RADIO_DACNF_TXADD2_Pos)

/* Bit 9 : TxAdd for device address 1. */
#define RADIO_DACNF_TXADD1_Pos (9UL)
#define RADIO_DACNF_TXADD1_Msk (0x1UL << RADIO_DACNF_TXADD1_Pos)

/* Bit 8 : TxAdd for device address 0. */
#define RADIO_DACNF_TXADD0_Pos (8UL)
#define RADIO_DACNF_TXADD0_Msk (0x1UL << RADIO_DACNF_TXADD0_Pos)

/* Bit 7 : Enable or disable device address matching using device address 7. */
#define RADIO_DACNF_ENA7_Pos (7UL)
#define RADIO_DACNF_ENA7_Msk (0x1UL << RADIO_DACNF_ENA7_Pos)
#define RADIO_DACNF_ENA7_Disabled (0UL)
#define RADIO_DACNF_ENA7_Enabled (1UL)

/* Bit 6 : Enable or disable device address matching using device address 6. */
#define RADIO_DACNF_ENA6_Pos (6UL)
#define RADIO_DACNF_ENA6_Msk (0x1UL << RADIO_DACNF_ENA6_Pos)
#define RADIO_DACNF_ENA6_Disabled (0UL)
#define RADIO_DACNF_ENA6_Enabled (1UL)

/* Bit 5 : Enable or disable device address matching using device address 5. */
#define RADIO_DACNF_ENA5_Pos (5UL)
#define RADIO_DACNF_ENA5_Msk (0x1UL << RADIO_DACNF_ENA5_Pos)
#define RADIO_DACNF_ENA5_Disabled (0UL)
#define RADIO_DACNF_ENA5_Enabled (1UL)

/* Bit 4 : Enable or disable device address matching using device address 4. */
#define RADIO_DACNF_ENA4_Pos (4UL)
#define RADIO_DACNF_ENA4_Msk (0x1UL << RADIO_DACNF_ENA4_Pos)
#define RADIO_DACNF_ENA4_Disabled (0UL)
#define RADIO_DACNF_ENA4_Enabled (1UL)

/* Bit 3 : Enable or disable device address matching using device address 3. */
#define RADIO_DACNF_ENA3_Pos (3UL)
#define RADIO_DACNF_ENA3_Msk (0x1UL << RADIO_DACNF_ENA3_Pos)
#define RADIO_DACNF_ENA3_Disabled (0UL)
#define RADIO_DACNF_ENA3_Enabled (1UL)

/* Bit 2 : Enable or disable device address matching using device address 2. */
#define RADIO_DACNF_ENA2_Pos (2UL)
#define RADIO_DACNF_ENA2_Msk (0x1UL << RADIO_DACNF_ENA2_Pos)
#define RADIO_DACNF_ENA2_Disabled (0UL)
#define RADIO_DACNF_ENA2_Enabled (1UL)

/* Bit 1 : Enable or disable device address matching using device address 1. */
#define RADIO_DACNF_ENA1_Pos (1UL)
#define RADIO_DACNF_ENA1_Msk (0x1UL << RADIO_DACNF_ENA1_Pos)
#define RADIO_DACNF_ENA1_Disabled (0UL)
#define RADIO_DACNF_ENA1_Enabled (1UL)

/* Bit 0 : Enable or disable device address matching using device address 0. */
#define RADIO_DACNF_ENA0_Pos (0UL)
#define RADIO_DACNF_ENA0_Msk (0x1UL << RADIO_DACNF_ENA0_Pos)
#define RADIO_DACNF_ENA0_Disabled (0UL)
#define RADIO_DACNF_ENA0_Enabled (1UL)

/* Register: RADIO_OVERRIDE0 */
/* Description: Trim value override register 0. */

/* Bits 31..0 : Trim value override 0. */
#define RADIO_OVERRIDE0_OVERRIDE0_Pos (0UL)
#define RADIO_OVERRIDE0_OVERRIDE0_Msk (0xFFFFFFFFUL << RADIO_OVERRIDE0_OVERRIDE0_Pos)

/* Register: RADIO_OVERRIDE1 */
/* Description: Trim value override register 1. */

/* Bits 31..0 : Trim value override 1. */
#define RADIO_OVERRIDE1_OVERRIDE1_Pos (0UL)
#define RADIO_OVERRIDE1_OVERRIDE1_Msk (0xFFFFFFFFUL << RADIO_OVERRIDE1_OVERRIDE1_Pos)

/* Register: RADIO_OVERRIDE2 */
/* Description: Trim value override register 2. */

/* Bits 31..0 : Trim value override 2. */
#define RADIO_OVERRIDE2_OVERRIDE2_Pos (0UL)
#define RADIO_OVERRIDE2_OVERRIDE2_Msk (0xFFFFFFFFUL << RADIO_OVERRIDE2_OVERRIDE2_Pos)

/* Register: RADIO_OVERRIDE3 */
/* Description: Trim value override register 3. */

/* Bits 31..0 : Trim value override 3. */
#define RADIO_OVERRIDE3_OVERRIDE3_Pos (0UL)
#define RADIO_OVERRIDE3_OVERRIDE3_Msk (0xFFFFFFFFUL << RADIO_OVERRIDE3_OVERRIDE3_Pos)

/* Register: RADIO_OVERRIDE4 */
/* Description: Trim value override register 4. */

/* Bit 31 : Enable or disable override of default trim values. */
#define RADIO_OVERRIDE4_ENABLE_Pos (31UL)
#define RADIO_OVERRIDE4_ENABLE_Msk (0x1UL << RADIO_OVERRIDE4_ENABLE_Pos)
#define RADIO_OVERRIDE4_ENABLE_Disabled (0UL)
#define RADIO_OVERRIDE4_ENABLE_Enabled (1UL)

/* Bits 27..0 : Trim value override 4. */
#define RADIO_OVERRIDE4_OVERRIDE4_Pos (0UL)
#define RADIO_OVERRIDE4_OVERRIDE4_Msk (0xFFFFFFFUL << RADIO_OVERRIDE4_OVERRIDE4_Pos)

/* Register: RADIO_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define RADIO_POWER_POWER_Pos (0UL)
#define RADIO_POWER_POWER_Msk (0x1UL << RADIO_POWER_POWER_Pos)
#define RADIO_POWER_POWER_Disabled (0UL)
#define RADIO_POWER_POWER_Enabled (1UL)


/* Peripheral: RNG */
/* Description: Random Number Generator. */

/* Register: RNG_SHORTS */
/* Description: Shortcuts for the RNG. */

/* Bit 0 : Shortcut between VALRDY event and STOP task. */
#define RNG_SHORTS_VALRDY_STOP_Pos (0UL)
#define RNG_SHORTS_VALRDY_STOP_Msk (0x1UL << RNG_SHORTS_VALRDY_STOP_Pos)
#define RNG_SHORTS_VALRDY_STOP_Disabled (0UL)
#define RNG_SHORTS_VALRDY_STOP_Enabled (1UL)

/* Register: RNG_INTENSET */
/* Description: Interrupt enable set register */

/* Bit 0 : Enable interrupt on VALRDY event. */
#define RNG_INTENSET_VALRDY_Pos (0UL)
#define RNG_INTENSET_VALRDY_Msk (0x1UL << RNG_INTENSET_VALRDY_Pos)
#define RNG_INTENSET_VALRDY_Disabled (0UL)
#define RNG_INTENSET_VALRDY_Enabled (1UL)
#define RNG_INTENSET_VALRDY_Set (1UL)

/* Register: RNG_INTENCLR */
/* Description: Interrupt enable clear register */

/* Bit 0 : Disable interrupt on VALRDY event. */
#define RNG_INTENCLR_VALRDY_Pos (0UL)
#define RNG_INTENCLR_VALRDY_Msk (0x1UL << RNG_INTENCLR_VALRDY_Pos)
#define RNG_INTENCLR_VALRDY_Disabled (0UL)
#define RNG_INTENCLR_VALRDY_Enabled (1UL)
#define RNG_INTENCLR_VALRDY_Clear (1UL)

/* Register: RNG_CONFIG */
/* Description: Configuration register. */

/* Bit 0 : Digital error correction enable. */
#define RNG_CONFIG_DERCEN_Pos (0UL)
#define RNG_CONFIG_DERCEN_Msk (0x1UL << RNG_CONFIG_DERCEN_Pos)
#define RNG_CONFIG_DERCEN_Disabled (0UL)
#define RNG_CONFIG_DERCEN_Enabled (1UL)

/* Register: RNG_VALUE */
/* Description: RNG random number. */

/* Bits 7..0 : Generated random number. */
#define RNG_VALUE_VALUE_Pos (0UL)
#define RNG_VALUE_VALUE_Msk (0xFFUL << RNG_VALUE_VALUE_Pos)

/* Register: RNG_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define RNG_POWER_POWER_Pos (0UL)
#define RNG_POWER_POWER_Msk (0x1UL << RNG_POWER_POWER_Pos)
#define RNG_POWER_POWER_Disabled (0UL)
#define RNG_POWER_POWER_Enabled (1UL)


/* Peripheral: RTC */
/* Description: Real time counter 0. */

/* Register: RTC_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 19 : Enable interrupt on COMPARE[3] event. */
#define RTC_INTENSET_COMPARE3_Pos (19UL)
#define RTC_INTENSET_COMPARE3_Msk (0x1UL << RTC_INTENSET_COMPARE3_Pos)
#define RTC_INTENSET_COMPARE3_Disabled (0UL)
#define RTC_INTENSET_COMPARE3_Enabled (1UL)
#define RTC_INTENSET_COMPARE3_Set (1UL)

/* Bit 18 : Enable interrupt on COMPARE[2] event. */
#define RTC_INTENSET_COMPARE2_Pos (18UL)
#define RTC_INTENSET_COMPARE2_Msk (0x1UL << RTC_INTENSET_COMPARE2_Pos)
#define RTC_INTENSET_COMPARE2_Disabled (0UL)
#define RTC_INTENSET_COMPARE2_Enabled (1UL)
#define RTC_INTENSET_COMPARE2_Set (1UL)

/* Bit 17 : Enable interrupt on COMPARE[1] event. */
#define RTC_INTENSET_COMPARE1_Pos (17UL)
#define RTC_INTENSET_COMPARE1_Msk (0x1UL << RTC_INTENSET_COMPARE1_Pos)
#define RTC_INTENSET_COMPARE1_Disabled (0UL)
#define RTC_INTENSET_COMPARE1_Enabled (1UL)
#define RTC_INTENSET_COMPARE1_Set (1UL)

/* Bit 16 : Enable interrupt on COMPARE[0] event. */
#define RTC_INTENSET_COMPARE0_Pos (16UL)
#define RTC_INTENSET_COMPARE0_Msk (0x1UL << RTC_INTENSET_COMPARE0_Pos)
#define RTC_INTENSET_COMPARE0_Disabled (0UL)
#define RTC_INTENSET_COMPARE0_Enabled (1UL)
#define RTC_INTENSET_COMPARE0_Set (1UL)

/* Bit 1 : Enable interrupt on OVRFLW event. */
#define RTC_INTENSET_OVRFLW_Pos (1UL)
#define RTC_INTENSET_OVRFLW_Msk (0x1UL << RTC_INTENSET_OVRFLW_Pos)
#define RTC_INTENSET_OVRFLW_Disabled (0UL)
#define RTC_INTENSET_OVRFLW_Enabled (1UL)
#define RTC_INTENSET_OVRFLW_Set (1UL)

/* Bit 0 : Enable interrupt on TICK event. */
#define RTC_INTENSET_TICK_Pos (0UL)
#define RTC_INTENSET_TICK_Msk (0x1UL << RTC_INTENSET_TICK_Pos)
#define RTC_INTENSET_TICK_Disabled (0UL)
#define RTC_INTENSET_TICK_Enabled (1UL)
#define RTC_INTENSET_TICK_Set (1UL)

/* Register: RTC_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 19 : Disable interrupt on COMPARE[3] event. */
#define RTC_INTENCLR_COMPARE3_Pos (19UL)
#define RTC_INTENCLR_COMPARE3_Msk (0x1UL << RTC_INTENCLR_COMPARE3_Pos)
#define RTC_INTENCLR_COMPARE3_Disabled (0UL)
#define RTC_INTENCLR_COMPARE3_Enabled (1UL)
#define RTC_INTENCLR_COMPARE3_Clear (1UL)

/* Bit 18 : Disable interrupt on COMPARE[2] event. */
#define RTC_INTENCLR_COMPARE2_Pos (18UL)
#define RTC_INTENCLR_COMPARE2_Msk (0x1UL << RTC_INTENCLR_COMPARE2_Pos)
#define RTC_INTENCLR_COMPARE2_Disabled (0UL)
#define RTC_INTENCLR_COMPARE2_Enabled (1UL)
#define RTC_INTENCLR_COMPARE2_Clear (1UL)

/* Bit 17 : Disable interrupt on COMPARE[1] event. */
#define RTC_INTENCLR_COMPARE1_Pos (17UL)
#define RTC_INTENCLR_COMPARE1_Msk (0x1UL << RTC_INTENCLR_COMPARE1_Pos)
#define RTC_INTENCLR_COMPARE1_Disabled (0UL)
#define RTC_INTENCLR_COMPARE1_Enabled (1UL)
#define RTC_INTENCLR_COMPARE1_Clear (1UL)

/* Bit 16 : Disable interrupt on COMPARE[0] event. */
#define RTC_INTENCLR_COMPARE0_Pos (16UL)
#define RTC_INTENCLR_COMPARE0_Msk (0x1UL << RTC_INTENCLR_COMPARE0_Pos)
#define RTC_INTENCLR_COMPARE0_Disabled (0UL)
#define RTC_INTENCLR_COMPARE0_Enabled (1UL)
#define RTC_INTENCLR_COMPARE0_Clear (1UL)

/* Bit 1 : Disable interrupt on OVRFLW event. */
#define RTC_INTENCLR_OVRFLW_Pos (1UL)
#define RTC_INTENCLR_OVRFLW_Msk (0x1UL << RTC_INTENCLR_OVRFLW_Pos)
#define RTC_INTENCLR_OVRFLW_Disabled (0UL)
#define RTC_INTENCLR_OVRFLW_Enabled (1UL)
#define RTC_INTENCLR_OVRFLW_Clear (1UL)

/* Bit 0 : Disable interrupt on TICK event. */
#define RTC_INTENCLR_TICK_Pos (0UL)
#define RTC_INTENCLR_TICK_Msk (0x1UL << RTC_INTENCLR_TICK_Pos)
#define RTC_INTENCLR_TICK_Disabled (0UL)
#define RTC_INTENCLR_TICK_Enabled (1UL)
#define RTC_INTENCLR_TICK_Clear (1UL)

/* Register: RTC_EVTEN */
/* Description: Configures event enable routing to PPI for each RTC event. */

/* Bit 19 : COMPARE[3] event enable. */
#define RTC_EVTEN_COMPARE3_Pos (19UL)
#define RTC_EVTEN_COMPARE3_Msk (0x1UL << RTC_EVTEN_COMPARE3_Pos)
#define RTC_EVTEN_COMPARE3_Disabled (0UL)
#define RTC_EVTEN_COMPARE3_Enabled (1UL)

/* Bit 18 : COMPARE[2] event enable. */
#define RTC_EVTEN_COMPARE2_Pos (18UL)
#define RTC_EVTEN_COMPARE2_Msk (0x1UL << RTC_EVTEN_COMPARE2_Pos)
#define RTC_EVTEN_COMPARE2_Disabled (0UL)
#define RTC_EVTEN_COMPARE2_Enabled (1UL)

/* Bit 17 : COMPARE[1] event enable. */
#define RTC_EVTEN_COMPARE1_Pos (17UL)
#define RTC_EVTEN_COMPARE1_Msk (0x1UL << RTC_EVTEN_COMPARE1_Pos)
#define RTC_EVTEN_COMPARE1_Disabled (0UL)
#define RTC_EVTEN_COMPARE1_Enabled (1UL)

/* Bit 16 : COMPARE[0] event enable. */
#define RTC_EVTEN_COMPARE0_Pos (16UL)
#define RTC_EVTEN_COMPARE0_Msk (0x1UL << RTC_EVTEN_COMPARE0_Pos)
#define RTC_EVTEN_COMPARE0_Disabled (0UL)
#define RTC_EVTEN_COMPARE0_Enabled (1UL)

/* Bit 1 : OVRFLW event enable. */
#define RTC_EVTEN_OVRFLW_Pos (1UL)
#define RTC_EVTEN_OVRFLW_Msk (0x1UL << RTC_EVTEN_OVRFLW_Pos)
#define RTC_EVTEN_OVRFLW_Disabled (0UL)
#define RTC_EVTEN_OVRFLW_Enabled (1UL)

/* Bit 0 : TICK event enable. */
#define RTC_EVTEN_TICK_Pos (0UL)
#define RTC_EVTEN_TICK_Msk (0x1UL << RTC_EVTEN_TICK_Pos)
#define RTC_EVTEN_TICK_Disabled (0UL)
#define RTC_EVTEN_TICK_Enabled (1UL)

/* Register: RTC_EVTENSET */
/* Description: Enable events routing to PPI. The reading of this register gives the value of EVTEN. */

/* Bit 19 : Enable routing to PPI of COMPARE[3] event. */
#define RTC_EVTENSET_COMPARE3_Pos (19UL)
#define RTC_EVTENSET_COMPARE3_Msk (0x1UL << RTC_EVTENSET_COMPARE3_Pos)
#define RTC_EVTENSET_COMPARE3_Disabled (0UL)
#define RTC_EVTENSET_COMPARE3_Enabled (1UL)
#define RTC_EVTENSET_COMPARE3_Set (1UL)

/* Bit 18 : Enable routing to PPI of COMPARE[2] event. */
#define RTC_EVTENSET_COMPARE2_Pos (18UL)
#define RTC_EVTENSET_COMPARE2_Msk (0x1UL << RTC_EVTENSET_COMPARE2_Pos)
#define RTC_EVTENSET_COMPARE2_Disabled (0UL)
#define RTC_EVTENSET_COMPARE2_Enabled (1UL)
#define RTC_EVTENSET_COMPARE2_Set (1UL)

/* Bit 17 : Enable routing to PPI of COMPARE[1] event. */
#define RTC_EVTENSET_COMPARE1_Pos (17UL)
#define RTC_EVTENSET_COMPARE1_Msk (0x1UL << RTC_EVTENSET_COMPARE1_Pos)
#define RTC_EVTENSET_COMPARE1_Disabled (0UL)
#define RTC_EVTENSET_COMPARE1_Enabled (1UL)
#define RTC_EVTENSET_COMPARE1_Set (1UL)

/* Bit 16 : Enable routing to PPI of COMPARE[0] event. */
#define RTC_EVTENSET_COMPARE0_Pos (16UL)
#define RTC_EVTENSET_COMPARE0_Msk (0x1UL << RTC_EVTENSET_COMPARE0_Pos)
#define RTC_EVTENSET_COMPARE0_Disabled (0UL)
#define RTC_EVTENSET_COMPARE0_Enabled (1UL)
#define RTC_EVTENSET_COMPARE0_Set (1UL)

/* Bit 1 : Enable routing to PPI of OVRFLW event. */
#define RTC_EVTENSET_OVRFLW_Pos (1UL)
#define RTC_EVTENSET_OVRFLW_Msk (0x1UL << RTC_EVTENSET_OVRFLW_Pos)
#define RTC_EVTENSET_OVRFLW_Disabled (0UL)
#define RTC_EVTENSET_OVRFLW_Enabled (1UL)
#define RTC_EVTENSET_OVRFLW_Set (1UL)

/* Bit 0 : Enable routing to PPI of TICK event. */
#define RTC_EVTENSET_TICK_Pos (0UL)
#define RTC_EVTENSET_TICK_Msk (0x1UL << RTC_EVTENSET_TICK_Pos)
#define RTC_EVTENSET_TICK_Disabled (0UL)
#define RTC_EVTENSET_TICK_Enabled (1UL)
#define RTC_EVTENSET_TICK_Set (1UL)

/* Register: RTC_EVTENCLR */
/* Description: Disable events routing to PPI. The reading of this register gives the value of EVTEN. */

/* Bit 19 : Disable routing to PPI of COMPARE[3] event. */
#define RTC_EVTENCLR_COMPARE3_Pos (19UL)
#define RTC_EVTENCLR_COMPARE3_Msk (0x1UL << RTC_EVTENCLR_COMPARE3_Pos)
#define RTC_EVTENCLR_COMPARE3_Disabled (0UL)
#define RTC_EVTENCLR_COMPARE3_Enabled (1UL)
#define RTC_EVTENCLR_COMPARE3_Clear (1UL)

/* Bit 18 : Disable routing to PPI of COMPARE[2] event. */
#define RTC_EVTENCLR_COMPARE2_Pos (18UL)
#define RTC_EVTENCLR_COMPARE2_Msk (0x1UL << RTC_EVTENCLR_COMPARE2_Pos)
#define RTC_EVTENCLR_COMPARE2_Disabled (0UL)
#define RTC_EVTENCLR_COMPARE2_Enabled (1UL)
#define RTC_EVTENCLR_COMPARE2_Clear (1UL)

/* Bit 17 : Disable routing to PPI of COMPARE[1] event. */
#define RTC_EVTENCLR_COMPARE1_Pos (17UL)
#define RTC_EVTENCLR_COMPARE1_Msk (0x1UL << RTC_EVTENCLR_COMPARE1_Pos)
#define RTC_EVTENCLR_COMPARE1_Disabled (0UL)
#define RTC_EVTENCLR_COMPARE1_Enabled (1UL)
#define RTC_EVTENCLR_COMPARE1_Clear (1UL)

/* Bit 16 : Disable routing to PPI of COMPARE[0] event. */
#define RTC_EVTENCLR_COMPARE0_Pos (16UL)
#define RTC_EVTENCLR_COMPARE0_Msk (0x1UL << RTC_EVTENCLR_COMPARE0_Pos)
#define RTC_EVTENCLR_COMPARE0_Disabled (0UL)
#define RTC_EVTENCLR_COMPARE0_Enabled (1UL)
#define RTC_EVTENCLR_COMPARE0_Clear (1UL)

/* Bit 1 : Disable routing to PPI of OVRFLW event. */
#define RTC_EVTENCLR_OVRFLW_Pos (1UL)
#define RTC_EVTENCLR_OVRFLW_Msk (0x1UL << RTC_EVTENCLR_OVRFLW_Pos)
#define RTC_EVTENCLR_OVRFLW_Disabled (0UL)
#define RTC_EVTENCLR_OVRFLW_Enabled (1UL)
#define RTC_EVTENCLR_OVRFLW_Clear (1UL)

/* Bit 0 : Disable routing to PPI of TICK event. */
#define RTC_EVTENCLR_TICK_Pos (0UL)
#define RTC_EVTENCLR_TICK_Msk (0x1UL << RTC_EVTENCLR_TICK_Pos)
#define RTC_EVTENCLR_TICK_Disabled (0UL)
#define RTC_EVTENCLR_TICK_Enabled (1UL)
#define RTC_EVTENCLR_TICK_Clear (1UL)

/* Register: RTC_COUNTER */
/* Description: Current COUNTER value. */

/* Bits 23..0 : Counter value. */
#define RTC_COUNTER_COUNTER_Pos (0UL)
#define RTC_COUNTER_COUNTER_Msk (0xFFFFFFUL << RTC_COUNTER_COUNTER_Pos)

/* Register: RTC_PRESCALER */
/* Description: 12-bit prescaler for COUNTER frequency (32768/(PRESCALER+1)). Must be written when RTC is STOPed. */

/* Bits 11..0 : RTC PRESCALER value. */
#define RTC_PRESCALER_PRESCALER_Pos (0UL)
#define RTC_PRESCALER_PRESCALER_Msk (0xFFFUL << RTC_PRESCALER_PRESCALER_Pos)

/* Register: RTC_CC */
/* Description: Capture/compare registers. */

/* Bits 23..0 : Compare value. */
#define RTC_CC_COMPARE_Pos (0UL)
#define RTC_CC_COMPARE_Msk (0xFFFFFFUL << RTC_CC_COMPARE_Pos)

/* Register: RTC_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define RTC_POWER_POWER_Pos (0UL)
#define RTC_POWER_POWER_Msk (0x1UL << RTC_POWER_POWER_Pos)
#define RTC_POWER_POWER_Disabled (0UL)
#define RTC_POWER_POWER_Enabled (1UL)


/* Peripheral: SPI */
/* Description: SPI master 0. */

/* Register: SPI_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 2 : Enable interrupt on READY event. */
#define SPI_INTENSET_READY_Pos (2UL)
#define SPI_INTENSET_READY_Msk (0x1UL << SPI_INTENSET_READY_Pos)
#define SPI_INTENSET_READY_Disabled (0UL)
#define SPI_INTENSET_READY_Enabled (1UL)
#define SPI_INTENSET_READY_Set (1UL)

/* Register: SPI_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 2 : Disable interrupt on READY event. */
#define SPI_INTENCLR_READY_Pos (2UL)
#define SPI_INTENCLR_READY_Msk (0x1UL << SPI_INTENCLR_READY_Pos)
#define SPI_INTENCLR_READY_Disabled (0UL)
#define SPI_INTENCLR_READY_Enabled (1UL)
#define SPI_INTENCLR_READY_Clear (1UL)

/* Register: SPI_ENABLE */
/* Description: Enable SPI. */

/* Bits 2..0 : Enable or disable SPI. */
#define SPI_ENABLE_ENABLE_Pos (0UL)
#define SPI_ENABLE_ENABLE_Msk (0x7UL << SPI_ENABLE_ENABLE_Pos)
#define SPI_ENABLE_ENABLE_Disabled (0x00UL)
#define SPI_ENABLE_ENABLE_Enabled (0x01UL)

/* Register: SPI_RXD */
/* Description: RX data. */

/* Bits 7..0 : RX data from last transfer. */
#define SPI_RXD_RXD_Pos (0UL)
#define SPI_RXD_RXD_Msk (0xFFUL << SPI_RXD_RXD_Pos)

/* Register: SPI_TXD */
/* Description: TX data. */

/* Bits 7..0 : TX data for next transfer. */
#define SPI_TXD_TXD_Pos (0UL)
#define SPI_TXD_TXD_Msk (0xFFUL << SPI_TXD_TXD_Pos)

/* Register: SPI_FREQUENCY */
/* Description: SPI frequency */

/* Bits 31..0 : SPI data rate. */
#define SPI_FREQUENCY_FREQUENCY_Pos (0UL)
#define SPI_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << SPI_FREQUENCY_FREQUENCY_Pos)
#define SPI_FREQUENCY_FREQUENCY_K125 (0x02000000UL)
#define SPI_FREQUENCY_FREQUENCY_K250 (0x04000000UL)
#define SPI_FREQUENCY_FREQUENCY_K500 (0x08000000UL)
#define SPI_FREQUENCY_FREQUENCY_M1 (0x10000000UL)
#define SPI_FREQUENCY_FREQUENCY_M2 (0x20000000UL)
#define SPI_FREQUENCY_FREQUENCY_M4 (0x40000000UL)
#define SPI_FREQUENCY_FREQUENCY_M8 (0x80000000UL)

/* Register: SPI_CONFIG */
/* Description: Configuration register. */

/* Bit 2 : Serial clock (SCK) polarity. */
#define SPI_CONFIG_CPOL_Pos (2UL)
#define SPI_CONFIG_CPOL_Msk (0x1UL << SPI_CONFIG_CPOL_Pos)
#define SPI_CONFIG_CPOL_ActiveHigh (0UL)
#define SPI_CONFIG_CPOL_ActiveLow (1UL)

/* Bit 1 : Serial clock (SCK) phase. */
#define SPI_CONFIG_CPHA_Pos (1UL)
#define SPI_CONFIG_CPHA_Msk (0x1UL << SPI_CONFIG_CPHA_Pos)
#define SPI_CONFIG_CPHA_Leading (0UL)
#define SPI_CONFIG_CPHA_Trailing (1UL)

/* Bit 0 : Bit order. */
#define SPI_CONFIG_ORDER_Pos (0UL)
#define SPI_CONFIG_ORDER_Msk (0x1UL << SPI_CONFIG_ORDER_Pos)
#define SPI_CONFIG_ORDER_MsbFirst (0UL)
#define SPI_CONFIG_ORDER_LsbFirst (1UL)

/* Register: SPI_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define SPI_POWER_POWER_Pos (0UL)
#define SPI_POWER_POWER_Msk (0x1UL << SPI_POWER_POWER_Pos)
#define SPI_POWER_POWER_Disabled (0UL)
#define SPI_POWER_POWER_Enabled (1UL)


/* Peripheral: SPIS */
/* Description: SPI slave 1. */

/* Register: SPIS_SHORTS */
/* Description: Shortcuts for SPIS. */

/* Bit 2 : Shortcut between END event and the ACQUIRE task. */
#define SPIS_SHORTS_END_ACQUIRE_Pos (2UL)
#define SPIS_SHORTS_END_ACQUIRE_Msk (0x1UL << SPIS_SHORTS_END_ACQUIRE_Pos)
#define SPIS_SHORTS_END_ACQUIRE_Disabled (0UL)
#define SPIS_SHORTS_END_ACQUIRE_Enabled (1UL)

/* Register: SPIS_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 10 : Enable interrupt on ACQUIRED event. */
#define SPIS_INTENSET_ACQUIRED_Pos (10UL)
#define SPIS_INTENSET_ACQUIRED_Msk (0x1UL << SPIS_INTENSET_ACQUIRED_Pos)
#define SPIS_INTENSET_ACQUIRED_Disabled (0UL)
#define SPIS_INTENSET_ACQUIRED_Enabled (1UL)
#define SPIS_INTENSET_ACQUIRED_Set (1UL)

/* Bit 4 : enable interrupt on ENDRX event. */
#define SPIS_INTENSET_ENDRX_Pos (4UL)
#define SPIS_INTENSET_ENDRX_Msk (0x1UL << SPIS_INTENSET_ENDRX_Pos)
#define SPIS_INTENSET_ENDRX_Disabled (0UL)
#define SPIS_INTENSET_ENDRX_Enabled (1UL)
#define SPIS_INTENSET_ENDRX_Set (1UL)

/* Bit 1 : Enable interrupt on END event. */
#define SPIS_INTENSET_END_Pos (1UL)
#define SPIS_INTENSET_END_Msk (0x1UL << SPIS_INTENSET_END_Pos)
#define SPIS_INTENSET_END_Disabled (0UL)
#define SPIS_INTENSET_END_Enabled (1UL)
#define SPIS_INTENSET_END_Set (1UL)

/* Register: SPIS_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 10 : Disable interrupt on ACQUIRED event. */
#define SPIS_INTENCLR_ACQUIRED_Pos (10UL)
#define SPIS_INTENCLR_ACQUIRED_Msk (0x1UL << SPIS_INTENCLR_ACQUIRED_Pos)
#define SPIS_INTENCLR_ACQUIRED_Disabled (0UL)
#define SPIS_INTENCLR_ACQUIRED_Enabled (1UL)
#define SPIS_INTENCLR_ACQUIRED_Clear (1UL)

/* Bit 4 : Disable interrupt on ENDRX event. */
#define SPIS_INTENCLR_ENDRX_Pos (4UL)
#define SPIS_INTENCLR_ENDRX_Msk (0x1UL << SPIS_INTENCLR_ENDRX_Pos)
#define SPIS_INTENCLR_ENDRX_Disabled (0UL)
#define SPIS_INTENCLR_ENDRX_Enabled (1UL)
#define SPIS_INTENCLR_ENDRX_Clear (1UL)

/* Bit 1 : Disable interrupt on END event. */
#define SPIS_INTENCLR_END_Pos (1UL)
#define SPIS_INTENCLR_END_Msk (0x1UL << SPIS_INTENCLR_END_Pos)
#define SPIS_INTENCLR_END_Disabled (0UL)
#define SPIS_INTENCLR_END_Enabled (1UL)
#define SPIS_INTENCLR_END_Clear (1UL)

/* Register: SPIS_SEMSTAT */
/* Description: Semaphore status. */

/* Bits 1..0 : Semaphore status. */
#define SPIS_SEMSTAT_SEMSTAT_Pos (0UL)
#define SPIS_SEMSTAT_SEMSTAT_Msk (0x3UL << SPIS_SEMSTAT_SEMSTAT_Pos)
#define SPIS_SEMSTAT_SEMSTAT_Free (0x00UL)
#define SPIS_SEMSTAT_SEMSTAT_CPU (0x01UL)
#define SPIS_SEMSTAT_SEMSTAT_SPIS (0x02UL)
#define SPIS_SEMSTAT_SEMSTAT_CPUPending (0x03UL)

/* Register: SPIS_STATUS */
/* Description: Status from last transaction. */

/* Bit 1 : RX buffer overflow detected, and prevented. */
#define SPIS_STATUS_OVERFLOW_Pos (1UL)
#define SPIS_STATUS_OVERFLOW_Msk (0x1UL << SPIS_STATUS_OVERFLOW_Pos)
#define SPIS_STATUS_OVERFLOW_NotPresent (0UL)
#define SPIS_STATUS_OVERFLOW_Present (1UL)
#define SPIS_STATUS_OVERFLOW_Clear (1UL)

/* Bit 0 : TX buffer overread detected, and prevented. */
#define SPIS_STATUS_OVERREAD_Pos (0UL)
#define SPIS_STATUS_OVERREAD_Msk (0x1UL << SPIS_STATUS_OVERREAD_Pos)
#define SPIS_STATUS_OVERREAD_NotPresent (0UL)
#define SPIS_STATUS_OVERREAD_Present (1UL)
#define SPIS_STATUS_OVERREAD_Clear (1UL)

/* Register: SPIS_ENABLE */
/* Description: Enable SPIS. */

/* Bits 2..0 : Enable or disable SPIS. */
#define SPIS_ENABLE_ENABLE_Pos (0UL)
#define SPIS_ENABLE_ENABLE_Msk (0x7UL << SPIS_ENABLE_ENABLE_Pos)
#define SPIS_ENABLE_ENABLE_Disabled (0x00UL)
#define SPIS_ENABLE_ENABLE_Enabled (0x02UL)

/* Register: SPIS_MAXRX */
/* Description: Maximum number of bytes in the receive buffer. */

/* Bits 7..0 : Maximum number of bytes in the receive buffer. */
#define SPIS_MAXRX_MAXRX_Pos (0UL)
#define SPIS_MAXRX_MAXRX_Msk (0xFFUL << SPIS_MAXRX_MAXRX_Pos)

/* Register: SPIS_AMOUNTRX */
/* Description: Number of bytes received in last granted transaction. */

/* Bits 7..0 : Number of bytes received in last granted transaction. */
#define SPIS_AMOUNTRX_AMOUNTRX_Pos (0UL)
#define SPIS_AMOUNTRX_AMOUNTRX_Msk (0xFFUL << SPIS_AMOUNTRX_AMOUNTRX_Pos)

/* Register: SPIS_MAXTX */
/* Description: Maximum number of bytes in the transmit buffer. */

/* Bits 7..0 : Maximum number of bytes in the transmit buffer. */
#define SPIS_MAXTX_MAXTX_Pos (0UL)
#define SPIS_MAXTX_MAXTX_Msk (0xFFUL << SPIS_MAXTX_MAXTX_Pos)

/* Register: SPIS_AMOUNTTX */
/* Description: Number of bytes transmitted in last granted transaction. */

/* Bits 7..0 : Number of bytes transmitted in last granted transaction. */
#define SPIS_AMOUNTTX_AMOUNTTX_Pos (0UL)
#define SPIS_AMOUNTTX_AMOUNTTX_Msk (0xFFUL << SPIS_AMOUNTTX_AMOUNTTX_Pos)

/* Register: SPIS_CONFIG */
/* Description: Configuration register. */

/* Bit 2 : Serial clock (SCK) polarity. */
#define SPIS_CONFIG_CPOL_Pos (2UL)
#define SPIS_CONFIG_CPOL_Msk (0x1UL << SPIS_CONFIG_CPOL_Pos)
#define SPIS_CONFIG_CPOL_ActiveHigh (0UL)
#define SPIS_CONFIG_CPOL_ActiveLow (1UL)

/* Bit 1 : Serial clock (SCK) phase. */
#define SPIS_CONFIG_CPHA_Pos (1UL)
#define SPIS_CONFIG_CPHA_Msk (0x1UL << SPIS_CONFIG_CPHA_Pos)
#define SPIS_CONFIG_CPHA_Leading (0UL)
#define SPIS_CONFIG_CPHA_Trailing (1UL)

/* Bit 0 : Bit order. */
#define SPIS_CONFIG_ORDER_Pos (0UL)
#define SPIS_CONFIG_ORDER_Msk (0x1UL << SPIS_CONFIG_ORDER_Pos)
#define SPIS_CONFIG_ORDER_MsbFirst (0UL)
#define SPIS_CONFIG_ORDER_LsbFirst (1UL)

/* Register: SPIS_DEF */
/* Description: Default character. */

/* Bits 7..0 : Default character. */
#define SPIS_DEF_DEF_Pos (0UL)
#define SPIS_DEF_DEF_Msk (0xFFUL << SPIS_DEF_DEF_Pos)

/* Register: SPIS_ORC */
/* Description: Over-read character. */

/* Bits 7..0 : Over-read character. */
#define SPIS_ORC_ORC_Pos (0UL)
#define SPIS_ORC_ORC_Msk (0xFFUL << SPIS_ORC_ORC_Pos)

/* Register: SPIS_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define SPIS_POWER_POWER_Pos (0UL)
#define SPIS_POWER_POWER_Msk (0x1UL << SPIS_POWER_POWER_Pos)
#define SPIS_POWER_POWER_Disabled (0UL)
#define SPIS_POWER_POWER_Enabled (1UL)


/* Peripheral: TEMP */
/* Description: Temperature Sensor. */

/* Register: TEMP_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 0 : Enable interrupt on DATARDY event. */
#define TEMP_INTENSET_DATARDY_Pos (0UL)
#define TEMP_INTENSET_DATARDY_Msk (0x1UL << TEMP_INTENSET_DATARDY_Pos)
#define TEMP_INTENSET_DATARDY_Disabled (0UL)
#define TEMP_INTENSET_DATARDY_Enabled (1UL)
#define TEMP_INTENSET_DATARDY_Set (1UL)

/* Register: TEMP_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 0 : Disable interrupt on DATARDY event. */
#define TEMP_INTENCLR_DATARDY_Pos (0UL)
#define TEMP_INTENCLR_DATARDY_Msk (0x1UL << TEMP_INTENCLR_DATARDY_Pos)
#define TEMP_INTENCLR_DATARDY_Disabled (0UL)
#define TEMP_INTENCLR_DATARDY_Enabled (1UL)
#define TEMP_INTENCLR_DATARDY_Clear (1UL)

/* Register: TEMP_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define TEMP_POWER_POWER_Pos (0UL)
#define TEMP_POWER_POWER_Msk (0x1UL << TEMP_POWER_POWER_Pos)
#define TEMP_POWER_POWER_Disabled (0UL)
#define TEMP_POWER_POWER_Enabled (1UL)


/* Peripheral: TIMER */
/* Description: Timer 0. */

/* Register: TIMER_SHORTS */
/* Description: Shortcuts for Timer. */

/* Bit 11 : Shortcut between CC[3] event and the STOP task. */
#define TIMER_SHORTS_COMPARE3_STOP_Pos (11UL)
#define TIMER_SHORTS_COMPARE3_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE3_STOP_Pos)
#define TIMER_SHORTS_COMPARE3_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE3_STOP_Enabled (1UL)

/* Bit 10 : Shortcut between CC[2] event and the STOP task. */
#define TIMER_SHORTS_COMPARE2_STOP_Pos (10UL)
#define TIMER_SHORTS_COMPARE2_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE2_STOP_Pos)
#define TIMER_SHORTS_COMPARE2_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE2_STOP_Enabled (1UL)

/* Bit 9 : Shortcut between CC[1] event and the STOP task. */
#define TIMER_SHORTS_COMPARE1_STOP_Pos (9UL)
#define TIMER_SHORTS_COMPARE1_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE1_STOP_Pos)
#define TIMER_SHORTS_COMPARE1_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE1_STOP_Enabled (1UL)

/* Bit 8 : Shortcut between CC[0] event and the STOP task. */
#define TIMER_SHORTS_COMPARE0_STOP_Pos (8UL)
#define TIMER_SHORTS_COMPARE0_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE0_STOP_Pos)
#define TIMER_SHORTS_COMPARE0_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE0_STOP_Enabled (1UL)

/* Bit 3 : Shortcut between CC[3] event and the CLEAR task. */
#define TIMER_SHORTS_COMPARE3_CLEAR_Pos (3UL)
#define TIMER_SHORTS_COMPARE3_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE3_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE3_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE3_CLEAR_Enabled (1UL)

/* Bit 2 : Shortcut between CC[2] event and the CLEAR task. */
#define TIMER_SHORTS_COMPARE2_CLEAR_Pos (2UL)
#define TIMER_SHORTS_COMPARE2_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE2_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE2_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE2_CLEAR_Enabled (1UL)

/* Bit 1 : Shortcut between CC[1] event and the CLEAR task. */
#define TIMER_SHORTS_COMPARE1_CLEAR_Pos (1UL)
#define TIMER_SHORTS_COMPARE1_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE1_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE1_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE1_CLEAR_Enabled (1UL)

/* Bit 0 : Shortcut between CC[0] event and the CLEAR task. */
#define TIMER_SHORTS_COMPARE0_CLEAR_Pos (0UL)
#define TIMER_SHORTS_COMPARE0_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE0_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE0_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE0_CLEAR_Enabled (1UL)

/* Register: TIMER_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 19 : Enable interrupt on COMPARE[3] */
#define TIMER_INTENSET_COMPARE3_Pos (19UL)
#define TIMER_INTENSET_COMPARE3_Msk (0x1UL << TIMER_INTENSET_COMPARE3_Pos)
#define TIMER_INTENSET_COMPARE3_Disabled (0UL)
#define TIMER_INTENSET_COMPARE3_Enabled (1UL)
#define TIMER_INTENSET_COMPARE3_Set (1UL)

/* Bit 18 : Enable interrupt on COMPARE[2] */
#define TIMER_INTENSET_COMPARE2_Pos (18UL)
#define TIMER_INTENSET_COMPARE2_Msk (0x1UL << TIMER_INTENSET_COMPARE2_Pos)
#define TIMER_INTENSET_COMPARE2_Disabled (0UL)
#define TIMER_INTENSET_COMPARE2_Enabled (1UL)
#define TIMER_INTENSET_COMPARE2_Set (1UL)

/* Bit 17 : Enable interrupt on COMPARE[1] */
#define TIMER_INTENSET_COMPARE1_Pos (17UL)
#define TIMER_INTENSET_COMPARE1_Msk (0x1UL << TIMER_INTENSET_COMPARE1_Pos)
#define TIMER_INTENSET_COMPARE1_Disabled (0UL)
#define TIMER_INTENSET_COMPARE1_Enabled (1UL)
#define TIMER_INTENSET_COMPARE1_Set (1UL)

/* Bit 16 : Enable interrupt on COMPARE[0] */
#define TIMER_INTENSET_COMPARE0_Pos (16UL)
#define TIMER_INTENSET_COMPARE0_Msk (0x1UL << TIMER_INTENSET_COMPARE0_Pos)
#define TIMER_INTENSET_COMPARE0_Disabled (0UL)
#define TIMER_INTENSET_COMPARE0_Enabled (1UL)
#define TIMER_INTENSET_COMPARE0_Set (1UL)

/* Register: TIMER_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 19 : Disable interrupt on COMPARE[3] */
#define TIMER_INTENCLR_COMPARE3_Pos (19UL)
#define TIMER_INTENCLR_COMPARE3_Msk (0x1UL << TIMER_INTENCLR_COMPARE3_Pos)
#define TIMER_INTENCLR_COMPARE3_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE3_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE3_Clear (1UL)

/* Bit 18 : Disable interrupt on COMPARE[2] */
#define TIMER_INTENCLR_COMPARE2_Pos (18UL)
#define TIMER_INTENCLR_COMPARE2_Msk (0x1UL << TIMER_INTENCLR_COMPARE2_Pos)
#define TIMER_INTENCLR_COMPARE2_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE2_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE2_Clear (1UL)

/* Bit 17 : Disable interrupt on COMPARE[1] */
#define TIMER_INTENCLR_COMPARE1_Pos (17UL)
#define TIMER_INTENCLR_COMPARE1_Msk (0x1UL << TIMER_INTENCLR_COMPARE1_Pos)
#define TIMER_INTENCLR_COMPARE1_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE1_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE1_Clear (1UL)

/* Bit 16 : Disable interrupt on COMPARE[0] */
#define TIMER_INTENCLR_COMPARE0_Pos (16UL)
#define TIMER_INTENCLR_COMPARE0_Msk (0x1UL << TIMER_INTENCLR_COMPARE0_Pos)
#define TIMER_INTENCLR_COMPARE0_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE0_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE0_Clear (1UL)

/* Register: TIMER_MODE */
/* Description: Timer Mode selection. */

/* Bit 0 : Select Normal or Counter mode. */
#define TIMER_MODE_MODE_Pos (0UL)
#define TIMER_MODE_MODE_Msk (0x1UL << TIMER_MODE_MODE_Pos)
#define TIMER_MODE_MODE_Timer (0UL)
#define TIMER_MODE_MODE_Counter (1UL)

/* Register: TIMER_BITMODE */
/* Description: Sets timer behaviour. */

/* Bits 1..0 : Sets timer behaviour ro be like the implementation of a timer with width as indicated. */
#define TIMER_BITMODE_BITMODE_Pos (0UL)
#define TIMER_BITMODE_BITMODE_Msk (0x3UL << TIMER_BITMODE_BITMODE_Pos)
#define TIMER_BITMODE_BITMODE_16Bit (0x00UL)
#define TIMER_BITMODE_BITMODE_08Bit (0x01UL)
#define TIMER_BITMODE_BITMODE_24Bit (0x02UL)
#define TIMER_BITMODE_BITMODE_32Bit (0x03UL)

/* Register: TIMER_PRESCALER */
/* Description: 4-bit prescaler to source clock frequency (max value 9). Source clock frequency is divided by 2^SCALE. */

/* Bits 3..0 : Timer PRESCALER value. Max value is 9. */
#define TIMER_PRESCALER_PRESCALER_Pos (0UL)
#define TIMER_PRESCALER_PRESCALER_Msk (0xFUL << TIMER_PRESCALER_PRESCALER_Pos)

/* Register: TIMER_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define TIMER_POWER_POWER_Pos (0UL)
#define TIMER_POWER_POWER_Msk (0x1UL << TIMER_POWER_POWER_Pos)
#define TIMER_POWER_POWER_Disabled (0UL)
#define TIMER_POWER_POWER_Enabled (1UL)


/* Peripheral: TWI */
/* Description: Two-wire interface master 0. */

/* Register: TWI_SHORTS */
/* Description: Shortcuts for TWI. */

/* Bit 1 : Shortcut between BB event and the STOP task. */
#define TWI_SHORTS_BB_STOP_Pos (1UL)
#define TWI_SHORTS_BB_STOP_Msk (0x1UL << TWI_SHORTS_BB_STOP_Pos)
#define TWI_SHORTS_BB_STOP_Disabled (0UL)
#define TWI_SHORTS_BB_STOP_Enabled (1UL)

/* Bit 0 : Shortcut between BB event and the SUSPEND task. */
#define TWI_SHORTS_BB_SUSPEND_Pos (0UL)
#define TWI_SHORTS_BB_SUSPEND_Msk (0x1UL << TWI_SHORTS_BB_SUSPEND_Pos)
#define TWI_SHORTS_BB_SUSPEND_Disabled (0UL)
#define TWI_SHORTS_BB_SUSPEND_Enabled (1UL)

/* Register: TWI_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 18 : Enable interrupt on SUSPENDED event. */
#define TWI_INTENSET_SUSPENDED_Pos (18UL)
#define TWI_INTENSET_SUSPENDED_Msk (0x1UL << TWI_INTENSET_SUSPENDED_Pos)
#define TWI_INTENSET_SUSPENDED_Disabled (0UL)
#define TWI_INTENSET_SUSPENDED_Enabled (1UL)
#define TWI_INTENSET_SUSPENDED_Set (1UL)

/* Bit 14 : Enable interrupt on BB event. */
#define TWI_INTENSET_BB_Pos (14UL)
#define TWI_INTENSET_BB_Msk (0x1UL << TWI_INTENSET_BB_Pos)
#define TWI_INTENSET_BB_Disabled (0UL)
#define TWI_INTENSET_BB_Enabled (1UL)
#define TWI_INTENSET_BB_Set (1UL)

/* Bit 9 : Enable interrupt on ERROR event. */
#define TWI_INTENSET_ERROR_Pos (9UL)
#define TWI_INTENSET_ERROR_Msk (0x1UL << TWI_INTENSET_ERROR_Pos)
#define TWI_INTENSET_ERROR_Disabled (0UL)
#define TWI_INTENSET_ERROR_Enabled (1UL)
#define TWI_INTENSET_ERROR_Set (1UL)

/* Bit 7 : Enable interrupt on TXDSENT event. */
#define TWI_INTENSET_TXDSENT_Pos (7UL)
#define TWI_INTENSET_TXDSENT_Msk (0x1UL << TWI_INTENSET_TXDSENT_Pos)
#define TWI_INTENSET_TXDSENT_Disabled (0UL)
#define TWI_INTENSET_TXDSENT_Enabled (1UL)
#define TWI_INTENSET_TXDSENT_Set (1UL)

/* Bit 2 : Enable interrupt on READY event. */
#define TWI_INTENSET_RXDREADY_Pos (2UL)
#define TWI_INTENSET_RXDREADY_Msk (0x1UL << TWI_INTENSET_RXDREADY_Pos)
#define TWI_INTENSET_RXDREADY_Disabled (0UL)
#define TWI_INTENSET_RXDREADY_Enabled (1UL)
#define TWI_INTENSET_RXDREADY_Set (1UL)

/* Bit 1 : Enable interrupt on STOPPED event. */
#define TWI_INTENSET_STOPPED_Pos (1UL)
#define TWI_INTENSET_STOPPED_Msk (0x1UL << TWI_INTENSET_STOPPED_Pos)
#define TWI_INTENSET_STOPPED_Disabled (0UL)
#define TWI_INTENSET_STOPPED_Enabled (1UL)
#define TWI_INTENSET_STOPPED_Set (1UL)

/* Register: TWI_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 18 : Disable interrupt on SUSPENDED event. */
#define TWI_INTENCLR_SUSPENDED_Pos (18UL)
#define TWI_INTENCLR_SUSPENDED_Msk (0x1UL << TWI_INTENCLR_SUSPENDED_Pos)
#define TWI_INTENCLR_SUSPENDED_Disabled (0UL)
#define TWI_INTENCLR_SUSPENDED_Enabled (1UL)
#define TWI_INTENCLR_SUSPENDED_Clear (1UL)

/* Bit 14 : Disable interrupt on BB event. */
#define TWI_INTENCLR_BB_Pos (14UL)
#define TWI_INTENCLR_BB_Msk (0x1UL << TWI_INTENCLR_BB_Pos)
#define TWI_INTENCLR_BB_Disabled (0UL)
#define TWI_INTENCLR_BB_Enabled (1UL)
#define TWI_INTENCLR_BB_Clear (1UL)

/* Bit 9 : Disable interrupt on ERROR event. */
#define TWI_INTENCLR_ERROR_Pos (9UL)
#define TWI_INTENCLR_ERROR_Msk (0x1UL << TWI_INTENCLR_ERROR_Pos)
#define TWI_INTENCLR_ERROR_Disabled (0UL)
#define TWI_INTENCLR_ERROR_Enabled (1UL)
#define TWI_INTENCLR_ERROR_Clear (1UL)

/* Bit 7 : Disable interrupt on TXDSENT event. */
#define TWI_INTENCLR_TXDSENT_Pos (7UL)
#define TWI_INTENCLR_TXDSENT_Msk (0x1UL << TWI_INTENCLR_TXDSENT_Pos)
#define TWI_INTENCLR_TXDSENT_Disabled (0UL)
#define TWI_INTENCLR_TXDSENT_Enabled (1UL)
#define TWI_INTENCLR_TXDSENT_Clear (1UL)

/* Bit 2 : Disable interrupt on RXDREADY event. */
#define TWI_INTENCLR_RXDREADY_Pos (2UL)
#define TWI_INTENCLR_RXDREADY_Msk (0x1UL << TWI_INTENCLR_RXDREADY_Pos)
#define TWI_INTENCLR_RXDREADY_Disabled (0UL)
#define TWI_INTENCLR_RXDREADY_Enabled (1UL)
#define TWI_INTENCLR_RXDREADY_Clear (1UL)

/* Bit 1 : Disable interrupt on STOPPED event. */
#define TWI_INTENCLR_STOPPED_Pos (1UL)
#define TWI_INTENCLR_STOPPED_Msk (0x1UL << TWI_INTENCLR_STOPPED_Pos)
#define TWI_INTENCLR_STOPPED_Disabled (0UL)
#define TWI_INTENCLR_STOPPED_Enabled (1UL)
#define TWI_INTENCLR_STOPPED_Clear (1UL)

/* Register: TWI_ERRORSRC */
/* Description: Two-wire error source. Write error field to 1 to clear error. */

/* Bit 2 : NACK received after sending a data byte. */
#define TWI_ERRORSRC_DNACK_Pos (2UL)
#define TWI_ERRORSRC_DNACK_Msk (0x1UL << TWI_ERRORSRC_DNACK_Pos)
#define TWI_ERRORSRC_DNACK_NotPresent (0UL)
#define TWI_ERRORSRC_DNACK_Present (1UL)
#define TWI_ERRORSRC_DNACK_Clear (1UL)

/* Bit 1 : NACK received after sending the address. */
#define TWI_ERRORSRC_ANACK_Pos (1UL)
#define TWI_ERRORSRC_ANACK_Msk (0x1UL << TWI_ERRORSRC_ANACK_Pos)
#define TWI_ERRORSRC_ANACK_NotPresent (0UL)
#define TWI_ERRORSRC_ANACK_Present (1UL)
#define TWI_ERRORSRC_ANACK_Clear (1UL)

/* Bit 0 : Byte received in RXD register before read of the last received byte (data loss). */
#define TWI_ERRORSRC_OVERRUN_Pos (0UL)
#define TWI_ERRORSRC_OVERRUN_Msk (0x1UL << TWI_ERRORSRC_OVERRUN_Pos)
#define TWI_ERRORSRC_OVERRUN_NotPresent (0UL)
#define TWI_ERRORSRC_OVERRUN_Present (1UL)
#define TWI_ERRORSRC_OVERRUN_Clear (1UL)

/* Register: TWI_ENABLE */
/* Description: Enable two-wire master. */

/* Bits 2..0 : Enable or disable W2M */
#define TWI_ENABLE_ENABLE_Pos (0UL)
#define TWI_ENABLE_ENABLE_Msk (0x7UL << TWI_ENABLE_ENABLE_Pos)
#define TWI_ENABLE_ENABLE_Disabled (0x00UL)
#define TWI_ENABLE_ENABLE_Enabled (0x05UL)

/* Register: TWI_RXD */
/* Description: RX data register. */

/* Bits 7..0 : RX data from last transfer. */
#define TWI_RXD_RXD_Pos (0UL)
#define TWI_RXD_RXD_Msk (0xFFUL << TWI_RXD_RXD_Pos)

/* Register: TWI_TXD */
/* Description: TX data register. */

/* Bits 7..0 : TX data for next transfer. */
#define TWI_TXD_TXD_Pos (0UL)
#define TWI_TXD_TXD_Msk (0xFFUL << TWI_TXD_TXD_Pos)

/* Register: TWI_FREQUENCY */
/* Description: Two-wire frequency. */

/* Bits 31..0 : Two-wire master clock frequency. */
#define TWI_FREQUENCY_FREQUENCY_Pos (0UL)
#define TWI_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << TWI_FREQUENCY_FREQUENCY_Pos)
#define TWI_FREQUENCY_FREQUENCY_K100 (0x01980000UL)
#define TWI_FREQUENCY_FREQUENCY_K250 (0x04000000UL)
#define TWI_FREQUENCY_FREQUENCY_K400 (0x06680000UL)

/* Register: TWI_ADDRESS */
/* Description: Address used in the two-wire transfer. */

/* Bits 6..0 : Two-wire address. */
#define TWI_ADDRESS_ADDRESS_Pos (0UL)
#define TWI_ADDRESS_ADDRESS_Msk (0x7FUL << TWI_ADDRESS_ADDRESS_Pos)

/* Register: TWI_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define TWI_POWER_POWER_Pos (0UL)
#define TWI_POWER_POWER_Msk (0x1UL << TWI_POWER_POWER_Pos)
#define TWI_POWER_POWER_Disabled (0UL)
#define TWI_POWER_POWER_Enabled (1UL)


/* Peripheral: UART */
/* Description: Universal Asynchronous Receiver/Transmitter. */

/* Register: UART_SHORTS */
/* Description: Shortcuts for UART. */

/* Bit 4 : Shortcut between NCTS event and STOPRX task. */
#define UART_SHORTS_NCTS_STOPRX_Pos (4UL)
#define UART_SHORTS_NCTS_STOPRX_Msk (0x1UL << UART_SHORTS_NCTS_STOPRX_Pos)
#define UART_SHORTS_NCTS_STOPRX_Disabled (0UL)
#define UART_SHORTS_NCTS_STOPRX_Enabled (1UL)

/* Bit 3 : Shortcut between CTS event and STARTRX task. */
#define UART_SHORTS_CTS_STARTRX_Pos (3UL)
#define UART_SHORTS_CTS_STARTRX_Msk (0x1UL << UART_SHORTS_CTS_STARTRX_Pos)
#define UART_SHORTS_CTS_STARTRX_Disabled (0UL)
#define UART_SHORTS_CTS_STARTRX_Enabled (1UL)

/* Register: UART_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 17 : Enable interrupt on RXTO event. */
#define UART_INTENSET_RXTO_Pos (17UL)
#define UART_INTENSET_RXTO_Msk (0x1UL << UART_INTENSET_RXTO_Pos)
#define UART_INTENSET_RXTO_Disabled (0UL)
#define UART_INTENSET_RXTO_Enabled (1UL)
#define UART_INTENSET_RXTO_Set (1UL)

/* Bit 9 : Enable interrupt on ERROR event. */
#define UART_INTENSET_ERROR_Pos (9UL)
#define UART_INTENSET_ERROR_Msk (0x1UL << UART_INTENSET_ERROR_Pos)
#define UART_INTENSET_ERROR_Disabled (0UL)
#define UART_INTENSET_ERROR_Enabled (1UL)
#define UART_INTENSET_ERROR_Set (1UL)

/* Bit 7 : Enable interrupt on TXRDY event. */
#define UART_INTENSET_TXDRDY_Pos (7UL)
#define UART_INTENSET_TXDRDY_Msk (0x1UL << UART_INTENSET_TXDRDY_Pos)
#define UART_INTENSET_TXDRDY_Disabled (0UL)
#define UART_INTENSET_TXDRDY_Enabled (1UL)
#define UART_INTENSET_TXDRDY_Set (1UL)

/* Bit 2 : Enable interrupt on RXRDY event. */
#define UART_INTENSET_RXDRDY_Pos (2UL)
#define UART_INTENSET_RXDRDY_Msk (0x1UL << UART_INTENSET_RXDRDY_Pos)
#define UART_INTENSET_RXDRDY_Disabled (0UL)
#define UART_INTENSET_RXDRDY_Enabled (1UL)
#define UART_INTENSET_RXDRDY_Set (1UL)

/* Bit 1 : Enable interrupt on NCTS event. */
#define UART_INTENSET_NCTS_Pos (1UL)
#define UART_INTENSET_NCTS_Msk (0x1UL << UART_INTENSET_NCTS_Pos)
#define UART_INTENSET_NCTS_Disabled (0UL)
#define UART_INTENSET_NCTS_Enabled (1UL)
#define UART_INTENSET_NCTS_Set (1UL)

/* Bit 0 : Enable interrupt on CTS event. */
#define UART_INTENSET_CTS_Pos (0UL)
#define UART_INTENSET_CTS_Msk (0x1UL << UART_INTENSET_CTS_Pos)
#define UART_INTENSET_CTS_Disabled (0UL)
#define UART_INTENSET_CTS_Enabled (1UL)
#define UART_INTENSET_CTS_Set (1UL)

/* Register: UART_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 17 : Disable interrupt on RXTO event. */
#define UART_INTENCLR_RXTO_Pos (17UL)
#define UART_INTENCLR_RXTO_Msk (0x1UL << UART_INTENCLR_RXTO_Pos)
#define UART_INTENCLR_RXTO_Disabled (0UL)
#define UART_INTENCLR_RXTO_Enabled (1UL)
#define UART_INTENCLR_RXTO_Clear (1UL)

/* Bit 9 : Disable interrupt on ERROR event. */
#define UART_INTENCLR_ERROR_Pos (9UL)
#define UART_INTENCLR_ERROR_Msk (0x1UL << UART_INTENCLR_ERROR_Pos)
#define UART_INTENCLR_ERROR_Disabled (0UL)
#define UART_INTENCLR_ERROR_Enabled (1UL)
#define UART_INTENCLR_ERROR_Clear (1UL)

/* Bit 7 : Disable interrupt on TXRDY event. */
#define UART_INTENCLR_TXDRDY_Pos (7UL)
#define UART_INTENCLR_TXDRDY_Msk (0x1UL << UART_INTENCLR_TXDRDY_Pos)
#define UART_INTENCLR_TXDRDY_Disabled (0UL)
#define UART_INTENCLR_TXDRDY_Enabled (1UL)
#define UART_INTENCLR_TXDRDY_Clear (1UL)

/* Bit 2 : Disable interrupt on RXRDY event. */
#define UART_INTENCLR_RXDRDY_Pos (2UL)
#define UART_INTENCLR_RXDRDY_Msk (0x1UL << UART_INTENCLR_RXDRDY_Pos)
#define UART_INTENCLR_RXDRDY_Disabled (0UL)
#define UART_INTENCLR_RXDRDY_Enabled (1UL)
#define UART_INTENCLR_RXDRDY_Clear (1UL)

/* Bit 1 : Disable interrupt on NCTS event. */
#define UART_INTENCLR_NCTS_Pos (1UL)
#define UART_INTENCLR_NCTS_Msk (0x1UL << UART_INTENCLR_NCTS_Pos)
#define UART_INTENCLR_NCTS_Disabled (0UL)
#define UART_INTENCLR_NCTS_Enabled (1UL)
#define UART_INTENCLR_NCTS_Clear (1UL)

/* Bit 0 : Disable interrupt on CTS event. */
#define UART_INTENCLR_CTS_Pos (0UL)
#define UART_INTENCLR_CTS_Msk (0x1UL << UART_INTENCLR_CTS_Pos)
#define UART_INTENCLR_CTS_Disabled (0UL)
#define UART_INTENCLR_CTS_Enabled (1UL)
#define UART_INTENCLR_CTS_Clear (1UL)

/* Register: UART_ERRORSRC */
/* Description: Error source. Write error field to 1 to clear error. */

/* Bit 3 : The serial data input is '0' for longer than the length of a data frame. */
#define UART_ERRORSRC_BREAK_Pos (3UL)
#define UART_ERRORSRC_BREAK_Msk (0x1UL << UART_ERRORSRC_BREAK_Pos)
#define UART_ERRORSRC_BREAK_NotPresent (0UL)
#define UART_ERRORSRC_BREAK_Present (1UL)
#define UART_ERRORSRC_BREAK_Clear (1UL)

/* Bit 2 : A valid stop bit is not detected on the serial data input after all bits in a character have been received. */
#define UART_ERRORSRC_FRAMING_Pos (2UL)
#define UART_ERRORSRC_FRAMING_Msk (0x1UL << UART_ERRORSRC_FRAMING_Pos)
#define UART_ERRORSRC_FRAMING_NotPresent (0UL)
#define UART_ERRORSRC_FRAMING_Present (1UL)
#define UART_ERRORSRC_FRAMING_Clear (1UL)

/* Bit 1 : A character with bad parity is received. Only checked if HW parity control is enabled. */
#define UART_ERRORSRC_PARITY_Pos (1UL)
#define UART_ERRORSRC_PARITY_Msk (0x1UL << UART_ERRORSRC_PARITY_Pos)
#define UART_ERRORSRC_PARITY_NotPresent (0UL)
#define UART_ERRORSRC_PARITY_Present (1UL)
#define UART_ERRORSRC_PARITY_Clear (1UL)

/* Bit 0 : A start bit is received while the previous data still lies in RXD. (Data loss). */
#define UART_ERRORSRC_OVERRUN_Pos (0UL)
#define UART_ERRORSRC_OVERRUN_Msk (0x1UL << UART_ERRORSRC_OVERRUN_Pos)
#define UART_ERRORSRC_OVERRUN_NotPresent (0UL)
#define UART_ERRORSRC_OVERRUN_Present (1UL)
#define UART_ERRORSRC_OVERRUN_Clear (1UL)

/* Register: UART_ENABLE */
/* Description: Enable UART and acquire IOs. */

/* Bits 2..0 : Enable or disable UART and acquire IOs. */
#define UART_ENABLE_ENABLE_Pos (0UL)
#define UART_ENABLE_ENABLE_Msk (0x7UL << UART_ENABLE_ENABLE_Pos)
#define UART_ENABLE_ENABLE_Disabled (0x00UL)
#define UART_ENABLE_ENABLE_Enabled (0x04UL)

/* Register: UART_RXD */
/* Description: RXD register. On read action the buffer pointer is displaced. Once read the character is consumed. If read when no character available, the UART will stop working. */

/* Bits 7..0 : RX data from previous transfer. Double buffered. */
#define UART_RXD_RXD_Pos (0UL)
#define UART_RXD_RXD_Msk (0xFFUL << UART_RXD_RXD_Pos)

/* Register: UART_TXD */
/* Description: TXD register. */

/* Bits 7..0 : TX data for transfer. */
#define UART_TXD_TXD_Pos (0UL)
#define UART_TXD_TXD_Msk (0xFFUL << UART_TXD_TXD_Pos)

/* Register: UART_BAUDRATE */
/* Description: UART Baudrate. */

/* Bits 31..0 : UART baudrate. */
#define UART_BAUDRATE_BAUDRATE_Pos (0UL)
#define UART_BAUDRATE_BAUDRATE_Msk (0xFFFFFFFFUL << UART_BAUDRATE_BAUDRATE_Pos)
#define UART_BAUDRATE_BAUDRATE_Baud1200 (0x0004F000UL)
#define UART_BAUDRATE_BAUDRATE_Baud2400 (0x0009D000UL)
#define UART_BAUDRATE_BAUDRATE_Baud4800 (0x0013B000UL)
#define UART_BAUDRATE_BAUDRATE_Baud9600 (0x00275000UL)
#define UART_BAUDRATE_BAUDRATE_Baud14400 (0x003B0000UL)
#define UART_BAUDRATE_BAUDRATE_Baud19200 (0x004EA000UL)
#define UART_BAUDRATE_BAUDRATE_Baud28800 (0x0075F000UL)
#define UART_BAUDRATE_BAUDRATE_Baud31250 (0x00800000UL)
#define UART_BAUDRATE_BAUDRATE_Baud38400 (0x009D5000UL)
#define UART_BAUDRATE_BAUDRATE_Baud56000 (0x00E50000UL)
#define UART_BAUDRATE_BAUDRATE_Baud57600 (0x00EBF000UL)
#define UART_BAUDRATE_BAUDRATE_Baud76800 (0x013A9000UL)
#define UART_BAUDRATE_BAUDRATE_Baud115200 (0x01D7E000UL)
#define UART_BAUDRATE_BAUDRATE_Baud230400 (0x03AFB000UL)
#define UART_BAUDRATE_BAUDRATE_Baud250000 (0x04000000UL)
#define UART_BAUDRATE_BAUDRATE_Baud460800 (0x075F7000UL)
#define UART_BAUDRATE_BAUDRATE_Baud921600 (0x0EBED000UL)
#define UART_BAUDRATE_BAUDRATE_Baud1M (0x10000000UL)

/* Register: UART_CONFIG */
/* Description: Configuration of parity and hardware flow control register. */

/* Bits 3..1 : Include parity bit. */
#define UART_CONFIG_PARITY_Pos (1UL)
#define UART_CONFIG_PARITY_Msk (0x7UL << UART_CONFIG_PARITY_Pos)
#define UART_CONFIG_PARITY_Excluded (0UL)
#define UART_CONFIG_PARITY_Included (7UL)

/* Bit 0 : Hardware flow control. */
#define UART_CONFIG_HWFC_Pos (0UL)
#define UART_CONFIG_HWFC_Msk (0x1UL << UART_CONFIG_HWFC_Pos)
#define UART_CONFIG_HWFC_Disabled (0UL)
#define UART_CONFIG_HWFC_Enabled (1UL)

/* Register: UART_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define UART_POWER_POWER_Pos (0UL)
#define UART_POWER_POWER_Msk (0x1UL << UART_POWER_POWER_Pos)
#define UART_POWER_POWER_Disabled (0UL)
#define UART_POWER_POWER_Enabled (1UL)


/* Peripheral: UICR */
/* Description: User Information Configuration. */

/* Register: UICR_RBPCONF */
/* Description: Readback protection configuration. */

/* Bits 15..8 : Readback protect all code in the device. */
#define UICR_RBPCONF_PALL_Pos (8UL)
#define UICR_RBPCONF_PALL_Msk (0xFFUL << UICR_RBPCONF_PALL_Pos)
#define UICR_RBPCONF_PALL_Enabled (0x00UL)
#define UICR_RBPCONF_PALL_Disabled (0xFFUL)

/* Bits 7..0 : Readback protect region 0. Will be ignored if pre-programmed factory code is present on the chip. */
#define UICR_RBPCONF_PR0_Pos (0UL)
#define UICR_RBPCONF_PR0_Msk (0xFFUL << UICR_RBPCONF_PR0_Pos)
#define UICR_RBPCONF_PR0_Enabled (0x00UL)
#define UICR_RBPCONF_PR0_Disabled (0xFFUL)

/* Register: UICR_XTALFREQ */
/* Description: Reset value for CLOCK XTALFREQ register. */

/* Bits 7..0 : Reset value for CLOCK XTALFREQ register. */
#define UICR_XTALFREQ_XTALFREQ_Pos (0UL)
#define UICR_XTALFREQ_XTALFREQ_Msk (0xFFUL << UICR_XTALFREQ_XTALFREQ_Pos)
#define UICR_XTALFREQ_XTALFREQ_32MHz (0x00UL)
#define UICR_XTALFREQ_XTALFREQ_16MHz (0xFFUL)

/* Register: UICR_FWID */
/* Description: Firmware ID. */

/* Bits 15..0 : Identification number for the firmware loaded into the chip. */
#define UICR_FWID_FWID_Pos (0UL)
#define UICR_FWID_FWID_Msk (0xFFFFUL << UICR_FWID_FWID_Pos)


/* Peripheral: WDT */
/* Description: Watchdog Timer. */

/* Register: WDT_INTENSET */
/* Description: Interrupt enable set register. */

/* Bit 0 : Enable interrupt on TIMEOUT event. */
#define WDT_INTENSET_TIMEOUT_Pos (0UL)
#define WDT_INTENSET_TIMEOUT_Msk (0x1UL << WDT_INTENSET_TIMEOUT_Pos)
#define WDT_INTENSET_TIMEOUT_Disabled (0UL)
#define WDT_INTENSET_TIMEOUT_Enabled (1UL)
#define WDT_INTENSET_TIMEOUT_Set (1UL)

/* Register: WDT_INTENCLR */
/* Description: Interrupt enable clear register. */

/* Bit 0 : Disable interrupt on TIMEOUT event. */
#define WDT_INTENCLR_TIMEOUT_Pos (0UL)
#define WDT_INTENCLR_TIMEOUT_Msk (0x1UL << WDT_INTENCLR_TIMEOUT_Pos)
#define WDT_INTENCLR_TIMEOUT_Disabled (0UL)
#define WDT_INTENCLR_TIMEOUT_Enabled (1UL)
#define WDT_INTENCLR_TIMEOUT_Clear (1UL)

/* Register: WDT_RUNSTATUS */
/* Description: Watchdog running status. */

/* Bit 0 : Watchdog running status. */
#define WDT_RUNSTATUS_RUNSTATUS_Pos (0UL)
#define WDT_RUNSTATUS_RUNSTATUS_Msk (0x1UL << WDT_RUNSTATUS_RUNSTATUS_Pos)
#define WDT_RUNSTATUS_RUNSTATUS_NotRunning (0UL)
#define WDT_RUNSTATUS_RUNSTATUS_Running (1UL)

/* Register: WDT_REQSTATUS */
/* Description: Request status. */

/* Bit 7 : Request status for RR[7]. */
#define WDT_REQSTATUS_RR7_Pos (7UL)
#define WDT_REQSTATUS_RR7_Msk (0x1UL << WDT_REQSTATUS_RR7_Pos)
#define WDT_REQSTATUS_RR7_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR7_EnabledAndUnrequested (1UL)

/* Bit 6 : Request status for RR[6]. */
#define WDT_REQSTATUS_RR6_Pos (6UL)
#define WDT_REQSTATUS_RR6_Msk (0x1UL << WDT_REQSTATUS_RR6_Pos)
#define WDT_REQSTATUS_RR6_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR6_EnabledAndUnrequested (1UL)

/* Bit 5 : Request status for RR[5]. */
#define WDT_REQSTATUS_RR5_Pos (5UL)
#define WDT_REQSTATUS_RR5_Msk (0x1UL << WDT_REQSTATUS_RR5_Pos)
#define WDT_REQSTATUS_RR5_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR5_EnabledAndUnrequested (1UL)

/* Bit 4 : Request status for RR[4]. */
#define WDT_REQSTATUS_RR4_Pos (4UL)
#define WDT_REQSTATUS_RR4_Msk (0x1UL << WDT_REQSTATUS_RR4_Pos)
#define WDT_REQSTATUS_RR4_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR4_EnabledAndUnrequested (1UL)

/* Bit 3 : Request status for RR[3]. */
#define WDT_REQSTATUS_RR3_Pos (3UL)
#define WDT_REQSTATUS_RR3_Msk (0x1UL << WDT_REQSTATUS_RR3_Pos)
#define WDT_REQSTATUS_RR3_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR3_EnabledAndUnrequested (1UL)

/* Bit 2 : Request status for RR[2]. */
#define WDT_REQSTATUS_RR2_Pos (2UL)
#define WDT_REQSTATUS_RR2_Msk (0x1UL << WDT_REQSTATUS_RR2_Pos)
#define WDT_REQSTATUS_RR2_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR2_EnabledAndUnrequested (1UL)

/* Bit 1 : Request status for RR[1]. */
#define WDT_REQSTATUS_RR1_Pos (1UL)
#define WDT_REQSTATUS_RR1_Msk (0x1UL << WDT_REQSTATUS_RR1_Pos)
#define WDT_REQSTATUS_RR1_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR1_EnabledAndUnrequested (1UL)

/* Bit 0 : Request status for RR[0]. */
#define WDT_REQSTATUS_RR0_Pos (0UL)
#define WDT_REQSTATUS_RR0_Msk (0x1UL << WDT_REQSTATUS_RR0_Pos)
#define WDT_REQSTATUS_RR0_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR0_EnabledAndUnrequested (1UL)

/* Register: WDT_RREN */
/* Description: Reload request enable. */

/* Bit 7 : Enable or disable RR[7] register. */
#define WDT_RREN_RR7_Pos (7UL)
#define WDT_RREN_RR7_Msk (0x1UL << WDT_RREN_RR7_Pos)
#define WDT_RREN_RR7_Disabled (0UL)
#define WDT_RREN_RR7_Enabled (1UL)

/* Bit 6 : Enable or disable RR[6] register. */
#define WDT_RREN_RR6_Pos (6UL)
#define WDT_RREN_RR6_Msk (0x1UL << WDT_RREN_RR6_Pos)
#define WDT_RREN_RR6_Disabled (0UL)
#define WDT_RREN_RR6_Enabled (1UL)

/* Bit 5 : Enable or disable RR[5] register. */
#define WDT_RREN_RR5_Pos (5UL)
#define WDT_RREN_RR5_Msk (0x1UL << WDT_RREN_RR5_Pos)
#define WDT_RREN_RR5_Disabled (0UL)
#define WDT_RREN_RR5_Enabled (1UL)

/* Bit 4 : Enable or disable RR[4] register. */
#define WDT_RREN_RR4_Pos (4UL)
#define WDT_RREN_RR4_Msk (0x1UL << WDT_RREN_RR4_Pos)
#define WDT_RREN_RR4_Disabled (0UL)
#define WDT_RREN_RR4_Enabled (1UL)

/* Bit 3 : Enable or disable RR[3] register. */
#define WDT_RREN_RR3_Pos (3UL)
#define WDT_RREN_RR3_Msk (0x1UL << WDT_RREN_RR3_Pos)
#define WDT_RREN_RR3_Disabled (0UL)
#define WDT_RREN_RR3_Enabled (1UL)

/* Bit 2 : Enable or disable RR[2] register. */
#define WDT_RREN_RR2_Pos (2UL)
#define WDT_RREN_RR2_Msk (0x1UL << WDT_RREN_RR2_Pos)
#define WDT_RREN_RR2_Disabled (0UL)
#define WDT_RREN_RR2_Enabled (1UL)

/* Bit 1 : Enable or disable RR[1] register. */
#define WDT_RREN_RR1_Pos (1UL)
#define WDT_RREN_RR1_Msk (0x1UL << WDT_RREN_RR1_Pos)
#define WDT_RREN_RR1_Disabled (0UL)
#define WDT_RREN_RR1_Enabled (1UL)

/* Bit 0 : Enable or disable RR[0] register. */
#define WDT_RREN_RR0_Pos (0UL)
#define WDT_RREN_RR0_Msk (0x1UL << WDT_RREN_RR0_Pos)
#define WDT_RREN_RR0_Disabled (0UL)
#define WDT_RREN_RR0_Enabled (1UL)

/* Register: WDT_CONFIG */
/* Description: Configuration register. */

/* Bit 3 : Configure the watchdog to pause or not while the CPU is halted by the debugger. */
#define WDT_CONFIG_HALT_Pos (3UL)
#define WDT_CONFIG_HALT_Msk (0x1UL << WDT_CONFIG_HALT_Pos)
#define WDT_CONFIG_HALT_Pause (0UL)
#define WDT_CONFIG_HALT_Run (1UL)

/* Bit 0 : Configure the watchdog to pause or not while the CPU is sleeping. */
#define WDT_CONFIG_SLEEP_Pos (0UL)
#define WDT_CONFIG_SLEEP_Msk (0x1UL << WDT_CONFIG_SLEEP_Pos)
#define WDT_CONFIG_SLEEP_Pause (0UL)
#define WDT_CONFIG_SLEEP_Run (1UL)

/* Register: WDT_RR */
/* Description: Reload requests registers. */

/* Bits 31..0 : Reload register. */
#define WDT_RR_RR_Pos (0UL)
#define WDT_RR_RR_Msk (0xFFFFFFFFUL << WDT_RR_RR_Pos)
#define WDT_RR_RR_Reload (0x6E524635UL)

/* Register: WDT_POWER */
/* Description: Peripheral power control. */

/* Bit 0 : Peripheral power control. */
#define WDT_POWER_POWER_Pos (0UL)
#define WDT_POWER_POWER_Msk (0x1UL << WDT_POWER_POWER_Pos)
#define WDT_POWER_POWER_Disabled (0UL)
#define WDT_POWER_POWER_Enabled (1UL)


/*lint --flb "Leave library region" */
#endif
