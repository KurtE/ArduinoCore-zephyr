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

#ifndef __NRF52833_BITS_H
#define __NRF52833_BITS_H

/*lint ++flb "Enter library region" */

/* Peripheral: AAR */
/* Description: Accelerated Address Resolver */

/* Register: AAR_TASKS_START */
/* Description: Start resolving addresses based on IRKs specified in the IRK data structure */

/* Bit 0 : Start resolving addresses based on IRKs specified in the IRK data structure */
#define AAR_TASKS_START_TASKS_START_Pos (0UL)
#define AAR_TASKS_START_TASKS_START_Msk (0x1UL << AAR_TASKS_START_TASKS_START_Pos)
#define AAR_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: AAR_TASKS_STOP */
/* Description: Stop resolving addresses */

/* Bit 0 : Stop resolving addresses */
#define AAR_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define AAR_TASKS_STOP_TASKS_STOP_Msk (0x1UL << AAR_TASKS_STOP_TASKS_STOP_Pos)
#define AAR_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: AAR_EVENTS_END */
/* Description: Address resolution procedure complete */

/* Bit 0 : Address resolution procedure complete */
#define AAR_EVENTS_END_EVENTS_END_Pos (0UL)
#define AAR_EVENTS_END_EVENTS_END_Msk (0x1UL << AAR_EVENTS_END_EVENTS_END_Pos)
#define AAR_EVENTS_END_EVENTS_END_NotGenerated (0UL)
#define AAR_EVENTS_END_EVENTS_END_Generated (1UL)

/* Register: AAR_EVENTS_RESOLVED */
/* Description: Address resolved */

/* Bit 0 : Address resolved */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos (0UL)
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Msk (0x1UL << AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos)
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_NotGenerated (0UL)
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Generated (1UL)

/* Register: AAR_EVENTS_NOTRESOLVED */
/* Description: Address not resolved */

/* Bit 0 : Address not resolved */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos (0UL)
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Msk (0x1UL << AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos)
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_NotGenerated (0UL)
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Generated (1UL)

/* Register: AAR_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event NOTRESOLVED */
#define AAR_INTENSET_NOTRESOLVED_Pos (2UL)
#define AAR_INTENSET_NOTRESOLVED_Msk (0x1UL << AAR_INTENSET_NOTRESOLVED_Pos)
#define AAR_INTENSET_NOTRESOLVED_Disabled (0UL)
#define AAR_INTENSET_NOTRESOLVED_Enabled (1UL)
#define AAR_INTENSET_NOTRESOLVED_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event RESOLVED */
#define AAR_INTENSET_RESOLVED_Pos (1UL)
#define AAR_INTENSET_RESOLVED_Msk (0x1UL << AAR_INTENSET_RESOLVED_Pos)
#define AAR_INTENSET_RESOLVED_Disabled (0UL)
#define AAR_INTENSET_RESOLVED_Enabled (1UL)
#define AAR_INTENSET_RESOLVED_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event END */
#define AAR_INTENSET_END_Pos (0UL)
#define AAR_INTENSET_END_Msk (0x1UL << AAR_INTENSET_END_Pos)
#define AAR_INTENSET_END_Disabled (0UL)
#define AAR_INTENSET_END_Enabled (1UL)
#define AAR_INTENSET_END_Set (1UL)

/* Register: AAR_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event NOTRESOLVED */
#define AAR_INTENCLR_NOTRESOLVED_Pos (2UL)
#define AAR_INTENCLR_NOTRESOLVED_Msk (0x1UL << AAR_INTENCLR_NOTRESOLVED_Pos)
#define AAR_INTENCLR_NOTRESOLVED_Disabled (0UL)
#define AAR_INTENCLR_NOTRESOLVED_Enabled (1UL)
#define AAR_INTENCLR_NOTRESOLVED_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event RESOLVED */
#define AAR_INTENCLR_RESOLVED_Pos (1UL)
#define AAR_INTENCLR_RESOLVED_Msk (0x1UL << AAR_INTENCLR_RESOLVED_Pos)
#define AAR_INTENCLR_RESOLVED_Disabled (0UL)
#define AAR_INTENCLR_RESOLVED_Enabled (1UL)
#define AAR_INTENCLR_RESOLVED_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event END */
#define AAR_INTENCLR_END_Pos (0UL)
#define AAR_INTENCLR_END_Msk (0x1UL << AAR_INTENCLR_END_Pos)
#define AAR_INTENCLR_END_Disabled (0UL)
#define AAR_INTENCLR_END_Enabled (1UL)
#define AAR_INTENCLR_END_Clear (1UL)

/* Register: AAR_STATUS */
/* Description: Resolution status */

/* Bits 3..0 : The IRK that was used last time an address was resolved */
#define AAR_STATUS_STATUS_Pos (0UL)
#define AAR_STATUS_STATUS_Msk (0xFUL << AAR_STATUS_STATUS_Pos)

/* Register: AAR_ENABLE */
/* Description: Enable AAR */

/* Bits 1..0 : Enable or disable AAR */
#define AAR_ENABLE_ENABLE_Pos (0UL)
#define AAR_ENABLE_ENABLE_Msk (0x3UL << AAR_ENABLE_ENABLE_Pos)
#define AAR_ENABLE_ENABLE_Disabled (0UL)
#define AAR_ENABLE_ENABLE_Enabled (3UL)

/* Register: AAR_NIRK */
/* Description: Number of IRKs */

/* Bits 4..0 : Number of Identity Root Keys available in the IRK data structure */
#define AAR_NIRK_NIRK_Pos (0UL)
#define AAR_NIRK_NIRK_Msk (0x1FUL << AAR_NIRK_NIRK_Pos)

/* Register: AAR_IRKPTR */
/* Description: Pointer to IRK data structure */

/* Bits 31..0 : Pointer to the IRK data structure */
#define AAR_IRKPTR_IRKPTR_Pos (0UL)
#define AAR_IRKPTR_IRKPTR_Msk (0xFFFFFFFFUL << AAR_IRKPTR_IRKPTR_Pos)

/* Register: AAR_ADDRPTR */
/* Description: Pointer to the resolvable address */

/* Bits 31..0 : Pointer to the resolvable address (6-bytes) */
#define AAR_ADDRPTR_ADDRPTR_Pos (0UL)
#define AAR_ADDRPTR_ADDRPTR_Msk (0xFFFFFFFFUL << AAR_ADDRPTR_ADDRPTR_Pos)

/* Register: AAR_SCRATCHPTR */
/* Description: Pointer to data area used for temporary storage */

/* Bits 31..0 : Pointer to a scratch data area used for temporary storage during resolution. A space of minimum 3 bytes must be reserved. */
#define AAR_SCRATCHPTR_SCRATCHPTR_Pos (0UL)
#define AAR_SCRATCHPTR_SCRATCHPTR_Msk (0xFFFFFFFFUL << AAR_SCRATCHPTR_SCRATCHPTR_Pos)


/* Peripheral: ACL */
/* Description: Access control lists */

/* Register: ACL_ACL_ADDR */
/* Description: Description cluster: Start address of region to protect. The start address must be word-aligned. */

/* Bits 31..0 : Start address of flash region n. The start address must point to a flash page boundary. */
#define ACL_ACL_ADDR_ADDR_Pos (0UL)
#define ACL_ACL_ADDR_ADDR_Msk (0xFFFFFFFFUL << ACL_ACL_ADDR_ADDR_Pos)

/* Register: ACL_ACL_SIZE */
/* Description: Description cluster: Size of region to protect counting from address ACL[n].ADDR. Writing a '0' has no effect. */

/* Bits 31..0 : Size of flash region n in bytes. Must be a multiple of the flash page size. */
#define ACL_ACL_SIZE_SIZE_Pos (0UL)
#define ACL_ACL_SIZE_SIZE_Msk (0xFFFFFFFFUL << ACL_ACL_SIZE_SIZE_Pos)

/* Register: ACL_ACL_PERM */
/* Description: Description cluster: Access permissions for region n as defined by start address ACL[n].ADDR and size ACL[n].SIZE */

/* Bit 2 : Configure read permissions for region n. Writing a '0' has no effect. */
#define ACL_ACL_PERM_READ_Pos (2UL)
#define ACL_ACL_PERM_READ_Msk (0x1UL << ACL_ACL_PERM_READ_Pos)
#define ACL_ACL_PERM_READ_Enable (0UL)
#define ACL_ACL_PERM_READ_Disable (1UL)

/* Bit 1 : Configure write and erase permissions for region n. Writing a '0' has no effect. */
#define ACL_ACL_PERM_WRITE_Pos (1UL)
#define ACL_ACL_PERM_WRITE_Msk (0x1UL << ACL_ACL_PERM_WRITE_Pos)
#define ACL_ACL_PERM_WRITE_Enable (0UL)
#define ACL_ACL_PERM_WRITE_Disable (1UL)


/* Peripheral: APPROTECT */
/* Description: Access Port Protection */

/* Register: APPROTECT_FORCEPROTECT */
/* Description: Software force enable APPROTECT mechanism until next reset. */

/* Bits 7..0 : Write 0x0 to force enable APPROTECT mechanism */
#define APPROTECT_FORCEPROTECT_FORCEPROTECT_Pos (0UL)
#define APPROTECT_FORCEPROTECT_FORCEPROTECT_Msk (0xFFUL << APPROTECT_FORCEPROTECT_FORCEPROTECT_Pos)
#define APPROTECT_FORCEPROTECT_FORCEPROTECT_Force (0x0UL)

/* Register: APPROTECT_DISABLE */
/* Description: Software disable APPROTECT mechanism */

/* Bits 7..0 : Software disable APPROTECT mechanism */
#define APPROTECT_DISABLE_DISABLE_Pos (0UL)
#define APPROTECT_DISABLE_DISABLE_Msk (0xFFUL << APPROTECT_DISABLE_DISABLE_Pos)
#define APPROTECT_DISABLE_DISABLE_SwDisable (0x5AUL)


/* Peripheral: CCM */
/* Description: AES CCM mode encryption */

/* Register: CCM_TASKS_KSGEN */
/* Description: Start generation of keystream. This operation will stop by itself when completed. */

/* Bit 0 : Start generation of keystream. This operation will stop by itself when completed. */
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Pos (0UL)
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Msk (0x1UL << CCM_TASKS_KSGEN_TASKS_KSGEN_Pos)
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Trigger (1UL)

/* Register: CCM_TASKS_CRYPT */
/* Description: Start encryption/decryption. This operation will stop by itself when completed. */

/* Bit 0 : Start encryption/decryption. This operation will stop by itself when completed. */
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Pos (0UL)
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Msk (0x1UL << CCM_TASKS_CRYPT_TASKS_CRYPT_Pos)
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Trigger (1UL)

/* Register: CCM_TASKS_STOP */
/* Description: Stop encryption/decryption */

/* Bit 0 : Stop encryption/decryption */
#define CCM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define CCM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << CCM_TASKS_STOP_TASKS_STOP_Pos)
#define CCM_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: CCM_TASKS_RATEOVERRIDE */
/* Description: Override DATARATE setting in MODE register with the contents of the RATEOVERRIDE register for any ongoing encryption/decryption */

/* Bit 0 : Override DATARATE setting in MODE register with the contents of the RATEOVERRIDE register for any ongoing encryption/decryption */
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos (0UL)
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Msk (0x1UL << CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos)
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Trigger (1UL)

/* Register: CCM_EVENTS_ENDKSGEN */
/* Description: Keystream generation complete */

/* Bit 0 : Keystream generation complete */
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Pos (0UL)
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Msk (0x1UL << CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Pos)
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_NotGenerated (0UL)
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Generated (1UL)

/* Register: CCM_EVENTS_ENDCRYPT */
/* Description: Encrypt/decrypt complete */

/* Bit 0 : Encrypt/decrypt complete */
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Pos (0UL)
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Msk (0x1UL << CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Pos)
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_NotGenerated (0UL)
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Generated (1UL)

/* Register: CCM_EVENTS_ERROR */
/* Description: Deprecated register - CCM error event */

/* Bit 0 : Deprecated field -  CCM error event */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << CCM_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define CCM_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)

/* Register: CCM_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 0 : Shortcut between event ENDKSGEN and task CRYPT */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Pos (0UL)
#define CCM_SHORTS_ENDKSGEN_CRYPT_Msk (0x1UL << CCM_SHORTS_ENDKSGEN_CRYPT_Pos)
#define CCM_SHORTS_ENDKSGEN_CRYPT_Disabled (0UL)
#define CCM_SHORTS_ENDKSGEN_CRYPT_Enabled (1UL)

/* Register: CCM_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Deprecated intsetfield -  Write '1' to enable interrupt for event ERROR */
#define CCM_INTENSET_ERROR_Pos (2UL)
#define CCM_INTENSET_ERROR_Msk (0x1UL << CCM_INTENSET_ERROR_Pos)
#define CCM_INTENSET_ERROR_Disabled (0UL)
#define CCM_INTENSET_ERROR_Enabled (1UL)
#define CCM_INTENSET_ERROR_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event ENDCRYPT */
#define CCM_INTENSET_ENDCRYPT_Pos (1UL)
#define CCM_INTENSET_ENDCRYPT_Msk (0x1UL << CCM_INTENSET_ENDCRYPT_Pos)
#define CCM_INTENSET_ENDCRYPT_Disabled (0UL)
#define CCM_INTENSET_ENDCRYPT_Enabled (1UL)
#define CCM_INTENSET_ENDCRYPT_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event ENDKSGEN */
#define CCM_INTENSET_ENDKSGEN_Pos (0UL)
#define CCM_INTENSET_ENDKSGEN_Msk (0x1UL << CCM_INTENSET_ENDKSGEN_Pos)
#define CCM_INTENSET_ENDKSGEN_Disabled (0UL)
#define CCM_INTENSET_ENDKSGEN_Enabled (1UL)
#define CCM_INTENSET_ENDKSGEN_Set (1UL)

/* Register: CCM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Deprecated intclrfield -  Write '1' to disable interrupt for event ERROR */
#define CCM_INTENCLR_ERROR_Pos (2UL)
#define CCM_INTENCLR_ERROR_Msk (0x1UL << CCM_INTENCLR_ERROR_Pos)
#define CCM_INTENCLR_ERROR_Disabled (0UL)
#define CCM_INTENCLR_ERROR_Enabled (1UL)
#define CCM_INTENCLR_ERROR_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event ENDCRYPT */
#define CCM_INTENCLR_ENDCRYPT_Pos (1UL)
#define CCM_INTENCLR_ENDCRYPT_Msk (0x1UL << CCM_INTENCLR_ENDCRYPT_Pos)
#define CCM_INTENCLR_ENDCRYPT_Disabled (0UL)
#define CCM_INTENCLR_ENDCRYPT_Enabled (1UL)
#define CCM_INTENCLR_ENDCRYPT_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event ENDKSGEN */
#define CCM_INTENCLR_ENDKSGEN_Pos (0UL)
#define CCM_INTENCLR_ENDKSGEN_Msk (0x1UL << CCM_INTENCLR_ENDKSGEN_Pos)
#define CCM_INTENCLR_ENDKSGEN_Disabled (0UL)
#define CCM_INTENCLR_ENDKSGEN_Enabled (1UL)
#define CCM_INTENCLR_ENDKSGEN_Clear (1UL)

/* Register: CCM_MICSTATUS */
/* Description: MIC check result */

/* Bit 0 : The result of the MIC check performed during the previous decryption operation */
#define CCM_MICSTATUS_MICSTATUS_Pos (0UL)
#define CCM_MICSTATUS_MICSTATUS_Msk (0x1UL << CCM_MICSTATUS_MICSTATUS_Pos)
#define CCM_MICSTATUS_MICSTATUS_CheckFailed (0UL)
#define CCM_MICSTATUS_MICSTATUS_CheckPassed (1UL)

/* Register: CCM_ENABLE */
/* Description: Enable */

/* Bits 1..0 : Enable or disable CCM */
#define CCM_ENABLE_ENABLE_Pos (0UL)
#define CCM_ENABLE_ENABLE_Msk (0x3UL << CCM_ENABLE_ENABLE_Pos)
#define CCM_ENABLE_ENABLE_Disabled (0UL)
#define CCM_ENABLE_ENABLE_Enabled (2UL)

/* Register: CCM_MODE */
/* Description: Operation mode */

/* Bit 24 : Packet length configuration */
#define CCM_MODE_LENGTH_Pos (24UL)
#define CCM_MODE_LENGTH_Msk (0x1UL << CCM_MODE_LENGTH_Pos)
#define CCM_MODE_LENGTH_Default (0UL)
#define CCM_MODE_LENGTH_Extended (1UL)

/* Bits 17..16 : Radio data rate that the CCM shall run synchronous with */
#define CCM_MODE_DATARATE_Pos (16UL)
#define CCM_MODE_DATARATE_Msk (0x3UL << CCM_MODE_DATARATE_Pos)
#define CCM_MODE_DATARATE_1Mbit (0UL)
#define CCM_MODE_DATARATE_2Mbit (1UL)
#define CCM_MODE_DATARATE_125Kbps (2UL)
#define CCM_MODE_DATARATE_500Kbps (3UL)

/* Bit 0 : The mode of operation to be used. Settings in this register apply whenever either the KSGEN task or the CRYPT task is triggered. */
#define CCM_MODE_MODE_Pos (0UL)
#define CCM_MODE_MODE_Msk (0x1UL << CCM_MODE_MODE_Pos)
#define CCM_MODE_MODE_Encryption (0UL)
#define CCM_MODE_MODE_Decryption (1UL)

/* Register: CCM_CNFPTR */
/* Description: Pointer to data structure holding the AES key and the NONCE vector */

/* Bits 31..0 : Pointer to the data structure holding the AES key and the CCM NONCE vector (see table CCM data structure overview) */
#define CCM_CNFPTR_CNFPTR_Pos (0UL)
#define CCM_CNFPTR_CNFPTR_Msk (0xFFFFFFFFUL << CCM_CNFPTR_CNFPTR_Pos)

/* Register: CCM_INPTR */
/* Description: Input pointer */

/* Bits 31..0 : Input pointer */
#define CCM_INPTR_INPTR_Pos (0UL)
#define CCM_INPTR_INPTR_Msk (0xFFFFFFFFUL << CCM_INPTR_INPTR_Pos)

/* Register: CCM_OUTPTR */
/* Description: Output pointer */

/* Bits 31..0 : Output pointer */
#define CCM_OUTPTR_OUTPTR_Pos (0UL)
#define CCM_OUTPTR_OUTPTR_Msk (0xFFFFFFFFUL << CCM_OUTPTR_OUTPTR_Pos)

/* Register: CCM_SCRATCHPTR */
/* Description: Pointer to data area used for temporary storage */

/* Bits 31..0 : Pointer to a scratch data area used for temporary storage during keystream generation,
        MIC generation and encryption/decryption. */
#define CCM_SCRATCHPTR_SCRATCHPTR_Pos (0UL)
#define CCM_SCRATCHPTR_SCRATCHPTR_Msk (0xFFFFFFFFUL << CCM_SCRATCHPTR_SCRATCHPTR_Pos)

/* Register: CCM_MAXPACKETSIZE */
/* Description: Length of keystream generated when MODE.LENGTH = Extended */

/* Bits 7..0 : Length of keystream generated when MODE.LENGTH = Extended. This value must be greater than or equal to the subsequent packet payload to be encrypted/decrypted. */
#define CCM_MAXPACKETSIZE_MAXPACKETSIZE_Pos (0UL)
#define CCM_MAXPACKETSIZE_MAXPACKETSIZE_Msk (0xFFUL << CCM_MAXPACKETSIZE_MAXPACKETSIZE_Pos)

/* Register: CCM_RATEOVERRIDE */
/* Description: Data rate override setting. */

/* Bits 1..0 : Data rate override setting */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_Pos (0UL)
#define CCM_RATEOVERRIDE_RATEOVERRIDE_Msk (0x3UL << CCM_RATEOVERRIDE_RATEOVERRIDE_Pos)
#define CCM_RATEOVERRIDE_RATEOVERRIDE_1Mbit (0UL)
#define CCM_RATEOVERRIDE_RATEOVERRIDE_2Mbit (1UL)
#define CCM_RATEOVERRIDE_RATEOVERRIDE_125Kbps (2UL)
#define CCM_RATEOVERRIDE_RATEOVERRIDE_500Kbps (3UL)

/* Register: CCM_HEADERMASK */
/* Description: Header (S0) mask. */

/* Bits 7..0 : Header (S0) mask */
#define CCM_HEADERMASK_HEADERMASK_Pos (0UL)
#define CCM_HEADERMASK_HEADERMASK_Msk (0xFFUL << CCM_HEADERMASK_HEADERMASK_Pos)


/* Peripheral: CLOCK */
/* Description: Clock control */

/* Register: CLOCK_TASKS_HFCLKSTART */
/* Description: Start HFXO crystal oscillator */

/* Bit 0 : Start HFXO crystal oscillator */
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos (0UL)
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Msk (0x1UL << CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos)
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Trigger (1UL)

/* Register: CLOCK_TASKS_HFCLKSTOP */
/* Description: Stop HFXO crystal oscillator */

/* Bit 0 : Stop HFXO crystal oscillator */
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos (0UL)
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Msk (0x1UL << CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos)
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Trigger (1UL)

/* Register: CLOCK_TASKS_LFCLKSTART */
/* Description: Start LFCLK */

/* Bit 0 : Start LFCLK */
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos (0UL)
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Msk (0x1UL << CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos)
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Trigger (1UL)

/* Register: CLOCK_TASKS_LFCLKSTOP */
/* Description: Stop LFCLK */

/* Bit 0 : Stop LFCLK */
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos (0UL)
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Msk (0x1UL << CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos)
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Trigger (1UL)

/* Register: CLOCK_TASKS_CAL */
/* Description: Start calibration of LFRC */

/* Bit 0 : Start calibration of LFRC */
#define CLOCK_TASKS_CAL_TASKS_CAL_Pos (0UL)
#define CLOCK_TASKS_CAL_TASKS_CAL_Msk (0x1UL << CLOCK_TASKS_CAL_TASKS_CAL_Pos)
#define CLOCK_TASKS_CAL_TASKS_CAL_Trigger (1UL)

/* Register: CLOCK_TASKS_CTSTART */
/* Description: Start calibration timer */

/* Bit 0 : Start calibration timer */
#define CLOCK_TASKS_CTSTART_TASKS_CTSTART_Pos (0UL)
#define CLOCK_TASKS_CTSTART_TASKS_CTSTART_Msk (0x1UL << CLOCK_TASKS_CTSTART_TASKS_CTSTART_Pos)
#define CLOCK_TASKS_CTSTART_TASKS_CTSTART_Trigger (1UL)

/* Register: CLOCK_TASKS_CTSTOP */
/* Description: Stop calibration timer */

/* Bit 0 : Stop calibration timer */
#define CLOCK_TASKS_CTSTOP_TASKS_CTSTOP_Pos (0UL)
#define CLOCK_TASKS_CTSTOP_TASKS_CTSTOP_Msk (0x1UL << CLOCK_TASKS_CTSTOP_TASKS_CTSTOP_Pos)
#define CLOCK_TASKS_CTSTOP_TASKS_CTSTOP_Trigger (1UL)

/* Register: CLOCK_EVENTS_HFCLKSTARTED */
/* Description: HFXO crystal oscillator started */

/* Bit 0 : HFXO crystal oscillator started */
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos (0UL)
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Msk (0x1UL << CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos)
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_NotGenerated (0UL)
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Generated (1UL)

/* Register: CLOCK_EVENTS_LFCLKSTARTED */
/* Description: LFCLK started */

/* Bit 0 : LFCLK started */
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos (0UL)
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Msk (0x1UL << CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos)
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_NotGenerated (0UL)
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Generated (1UL)

/* Register: CLOCK_EVENTS_DONE */
/* Description: Calibration of LFRC completed */

/* Bit 0 : Calibration of LFRC completed */
#define CLOCK_EVENTS_DONE_EVENTS_DONE_Pos (0UL)
#define CLOCK_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << CLOCK_EVENTS_DONE_EVENTS_DONE_Pos)
#define CLOCK_EVENTS_DONE_EVENTS_DONE_NotGenerated (0UL)
#define CLOCK_EVENTS_DONE_EVENTS_DONE_Generated (1UL)

/* Register: CLOCK_EVENTS_CTTO */
/* Description: Calibration timer timeout */

/* Bit 0 : Calibration timer timeout */
#define CLOCK_EVENTS_CTTO_EVENTS_CTTO_Pos (0UL)
#define CLOCK_EVENTS_CTTO_EVENTS_CTTO_Msk (0x1UL << CLOCK_EVENTS_CTTO_EVENTS_CTTO_Pos)
#define CLOCK_EVENTS_CTTO_EVENTS_CTTO_NotGenerated (0UL)
#define CLOCK_EVENTS_CTTO_EVENTS_CTTO_Generated (1UL)

/* Register: CLOCK_EVENTS_CTSTARTED */
/* Description: Calibration timer has been started and is ready to process new tasks */

/* Bit 0 : Calibration timer has been started and is ready to process new tasks */
#define CLOCK_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Pos (0UL)
#define CLOCK_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Msk (0x1UL << CLOCK_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Pos)
#define CLOCK_EVENTS_CTSTARTED_EVENTS_CTSTARTED_NotGenerated (0UL)
#define CLOCK_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Generated (1UL)

/* Register: CLOCK_EVENTS_CTSTOPPED */
/* Description: Calibration timer has been stopped and is ready to process new tasks */

/* Bit 0 : Calibration timer has been stopped and is ready to process new tasks */
#define CLOCK_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Pos (0UL)
#define CLOCK_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Msk (0x1UL << CLOCK_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Pos)
#define CLOCK_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_NotGenerated (0UL)
#define CLOCK_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Generated (1UL)

/* Register: CLOCK_INTENSET */
/* Description: Enable interrupt */

/* Bit 11 : Write '1' to enable interrupt for event CTSTOPPED */
#define CLOCK_INTENSET_CTSTOPPED_Pos (11UL)
#define CLOCK_INTENSET_CTSTOPPED_Msk (0x1UL << CLOCK_INTENSET_CTSTOPPED_Pos)
#define CLOCK_INTENSET_CTSTOPPED_Disabled (0UL)
#define CLOCK_INTENSET_CTSTOPPED_Enabled (1UL)
#define CLOCK_INTENSET_CTSTOPPED_Set (1UL)

/* Bit 10 : Write '1' to enable interrupt for event CTSTARTED */
#define CLOCK_INTENSET_CTSTARTED_Pos (10UL)
#define CLOCK_INTENSET_CTSTARTED_Msk (0x1UL << CLOCK_INTENSET_CTSTARTED_Pos)
#define CLOCK_INTENSET_CTSTARTED_Disabled (0UL)
#define CLOCK_INTENSET_CTSTARTED_Enabled (1UL)
#define CLOCK_INTENSET_CTSTARTED_Set (1UL)

/* Bit 4 : Write '1' to enable interrupt for event CTTO */
#define CLOCK_INTENSET_CTTO_Pos (4UL)
#define CLOCK_INTENSET_CTTO_Msk (0x1UL << CLOCK_INTENSET_CTTO_Pos)
#define CLOCK_INTENSET_CTTO_Disabled (0UL)
#define CLOCK_INTENSET_CTTO_Enabled (1UL)
#define CLOCK_INTENSET_CTTO_Set (1UL)

/* Bit 3 : Write '1' to enable interrupt for event DONE */
#define CLOCK_INTENSET_DONE_Pos (3UL)
#define CLOCK_INTENSET_DONE_Msk (0x1UL << CLOCK_INTENSET_DONE_Pos)
#define CLOCK_INTENSET_DONE_Disabled (0UL)
#define CLOCK_INTENSET_DONE_Enabled (1UL)
#define CLOCK_INTENSET_DONE_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event LFCLKSTARTED */
#define CLOCK_INTENSET_LFCLKSTARTED_Pos (1UL)
#define CLOCK_INTENSET_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_LFCLKSTARTED_Pos)
#define CLOCK_INTENSET_LFCLKSTARTED_Disabled (0UL)
#define CLOCK_INTENSET_LFCLKSTARTED_Enabled (1UL)
#define CLOCK_INTENSET_LFCLKSTARTED_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event HFCLKSTARTED */
#define CLOCK_INTENSET_HFCLKSTARTED_Pos (0UL)
#define CLOCK_INTENSET_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_HFCLKSTARTED_Pos)
#define CLOCK_INTENSET_HFCLKSTARTED_Disabled (0UL)
#define CLOCK_INTENSET_HFCLKSTARTED_Enabled (1UL)
#define CLOCK_INTENSET_HFCLKSTARTED_Set (1UL)

/* Register: CLOCK_INTENCLR */
/* Description: Disable interrupt */

/* Bit 11 : Write '1' to disable interrupt for event CTSTOPPED */
#define CLOCK_INTENCLR_CTSTOPPED_Pos (11UL)
#define CLOCK_INTENCLR_CTSTOPPED_Msk (0x1UL << CLOCK_INTENCLR_CTSTOPPED_Pos)
#define CLOCK_INTENCLR_CTSTOPPED_Disabled (0UL)
#define CLOCK_INTENCLR_CTSTOPPED_Enabled (1UL)
#define CLOCK_INTENCLR_CTSTOPPED_Clear (1UL)

/* Bit 10 : Write '1' to disable interrupt for event CTSTARTED */
#define CLOCK_INTENCLR_CTSTARTED_Pos (10UL)
#define CLOCK_INTENCLR_CTSTARTED_Msk (0x1UL << CLOCK_INTENCLR_CTSTARTED_Pos)
#define CLOCK_INTENCLR_CTSTARTED_Disabled (0UL)
#define CLOCK_INTENCLR_CTSTARTED_Enabled (1UL)
#define CLOCK_INTENCLR_CTSTARTED_Clear (1UL)

/* Bit 4 : Write '1' to disable interrupt for event CTTO */
#define CLOCK_INTENCLR_CTTO_Pos (4UL)
#define CLOCK_INTENCLR_CTTO_Msk (0x1UL << CLOCK_INTENCLR_CTTO_Pos)
#define CLOCK_INTENCLR_CTTO_Disabled (0UL)
#define CLOCK_INTENCLR_CTTO_Enabled (1UL)
#define CLOCK_INTENCLR_CTTO_Clear (1UL)

/* Bit 3 : Write '1' to disable interrupt for event DONE */
#define CLOCK_INTENCLR_DONE_Pos (3UL)
#define CLOCK_INTENCLR_DONE_Msk (0x1UL << CLOCK_INTENCLR_DONE_Pos)
#define CLOCK_INTENCLR_DONE_Disabled (0UL)
#define CLOCK_INTENCLR_DONE_Enabled (1UL)
#define CLOCK_INTENCLR_DONE_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event LFCLKSTARTED */
#define CLOCK_INTENCLR_LFCLKSTARTED_Pos (1UL)
#define CLOCK_INTENCLR_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_LFCLKSTARTED_Pos)
#define CLOCK_INTENCLR_LFCLKSTARTED_Disabled (0UL)
#define CLOCK_INTENCLR_LFCLKSTARTED_Enabled (1UL)
#define CLOCK_INTENCLR_LFCLKSTARTED_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event HFCLKSTARTED */
#define CLOCK_INTENCLR_HFCLKSTARTED_Pos (0UL)
#define CLOCK_INTENCLR_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_HFCLKSTARTED_Pos)
#define CLOCK_INTENCLR_HFCLKSTARTED_Disabled (0UL)
#define CLOCK_INTENCLR_HFCLKSTARTED_Enabled (1UL)
#define CLOCK_INTENCLR_HFCLKSTARTED_Clear (1UL)

/* Register: CLOCK_HFCLKRUN */
/* Description: Status indicating that HFCLKSTART task has been triggered */

/* Bit 0 : HFCLKSTART task triggered or not */
#define CLOCK_HFCLKRUN_STATUS_Pos (0UL)
#define CLOCK_HFCLKRUN_STATUS_Msk (0x1UL << CLOCK_HFCLKRUN_STATUS_Pos)
#define CLOCK_HFCLKRUN_STATUS_NotTriggered (0UL)
#define CLOCK_HFCLKRUN_STATUS_Triggered (1UL)

/* Register: CLOCK_HFCLKSTAT */
/* Description: HFCLK status */

/* Bit 16 : HFCLK state */
#define CLOCK_HFCLKSTAT_STATE_Pos (16UL)
#define CLOCK_HFCLKSTAT_STATE_Msk (0x1UL << CLOCK_HFCLKSTAT_STATE_Pos)
#define CLOCK_HFCLKSTAT_STATE_NotRunning (0UL)
#define CLOCK_HFCLKSTAT_STATE_Running (1UL)

/* Bit 0 : Source of HFCLK */
#define CLOCK_HFCLKSTAT_SRC_Pos (0UL)
#define CLOCK_HFCLKSTAT_SRC_Msk (0x1UL << CLOCK_HFCLKSTAT_SRC_Pos)
#define CLOCK_HFCLKSTAT_SRC_RC (0UL)
#define CLOCK_HFCLKSTAT_SRC_Xtal (1UL)

/* Register: CLOCK_LFCLKRUN */
/* Description: Status indicating that LFCLKSTART task has been triggered */

/* Bit 0 : LFCLKSTART task triggered or not */
#define CLOCK_LFCLKRUN_STATUS_Pos (0UL)
#define CLOCK_LFCLKRUN_STATUS_Msk (0x1UL << CLOCK_LFCLKRUN_STATUS_Pos)
#define CLOCK_LFCLKRUN_STATUS_NotTriggered (0UL)
#define CLOCK_LFCLKRUN_STATUS_Triggered (1UL)

/* Register: CLOCK_LFCLKSTAT */
/* Description: LFCLK status */

/* Bit 16 : LFCLK state */
#define CLOCK_LFCLKSTAT_STATE_Pos (16UL)
#define CLOCK_LFCLKSTAT_STATE_Msk (0x1UL << CLOCK_LFCLKSTAT_STATE_Pos)
#define CLOCK_LFCLKSTAT_STATE_NotRunning (0UL)
#define CLOCK_LFCLKSTAT_STATE_Running (1UL)

/* Bits 1..0 : Source of LFCLK */
#define CLOCK_LFCLKSTAT_SRC_Pos (0UL)
#define CLOCK_LFCLKSTAT_SRC_Msk (0x3UL << CLOCK_LFCLKSTAT_SRC_Pos)
#define CLOCK_LFCLKSTAT_SRC_RC (0UL)
#define CLOCK_LFCLKSTAT_SRC_Xtal (1UL)
#define CLOCK_LFCLKSTAT_SRC_Synth (2UL)

/* Register: CLOCK_LFCLKSRCCOPY */
/* Description: Copy of LFCLKSRC register, set when LFCLKSTART task was triggered */

/* Bits 1..0 : Clock source */
#define CLOCK_LFCLKSRCCOPY_SRC_Pos (0UL)
#define CLOCK_LFCLKSRCCOPY_SRC_Msk (0x3UL << CLOCK_LFCLKSRCCOPY_SRC_Pos)
#define CLOCK_LFCLKSRCCOPY_SRC_RC (0UL)
#define CLOCK_LFCLKSRCCOPY_SRC_Xtal (1UL)
#define CLOCK_LFCLKSRCCOPY_SRC_Synth (2UL)

/* Register: CLOCK_LFCLKSRC */
/* Description: Clock source for the LFCLK */

/* Bit 17 : Enable or disable external source for LFCLK */
#define CLOCK_LFCLKSRC_EXTERNAL_Pos (17UL)
#define CLOCK_LFCLKSRC_EXTERNAL_Msk (0x1UL << CLOCK_LFCLKSRC_EXTERNAL_Pos)
#define CLOCK_LFCLKSRC_EXTERNAL_Disabled (0UL)
#define CLOCK_LFCLKSRC_EXTERNAL_Enabled (1UL)

/* Bit 16 : Enable or disable bypass of LFCLK crystal oscillator with external clock source */
#define CLOCK_LFCLKSRC_BYPASS_Pos (16UL)
#define CLOCK_LFCLKSRC_BYPASS_Msk (0x1UL << CLOCK_LFCLKSRC_BYPASS_Pos)
#define CLOCK_LFCLKSRC_BYPASS_Disabled (0UL)
#define CLOCK_LFCLKSRC_BYPASS_Enabled (1UL)

/* Bits 1..0 : Clock source */
#define CLOCK_LFCLKSRC_SRC_Pos (0UL)
#define CLOCK_LFCLKSRC_SRC_Msk (0x3UL << CLOCK_LFCLKSRC_SRC_Pos)
#define CLOCK_LFCLKSRC_SRC_RC (0UL)
#define CLOCK_LFCLKSRC_SRC_Xtal (1UL)
#define CLOCK_LFCLKSRC_SRC_Synth (2UL)

/* Register: CLOCK_HFXODEBOUNCE */
/* Description: HFXO debounce time. The HFXO is started by triggering the TASKS_HFCLKSTART task. */

/* Bits 7..0 : HFXO debounce time. Debounce time = HFXODEBOUNCE * 16 us. */
#define CLOCK_HFXODEBOUNCE_HFXODEBOUNCE_Pos (0UL)
#define CLOCK_HFXODEBOUNCE_HFXODEBOUNCE_Msk (0xFFUL << CLOCK_HFXODEBOUNCE_HFXODEBOUNCE_Pos)
#define CLOCK_HFXODEBOUNCE_HFXODEBOUNCE_Db256us (0x10UL)
#define CLOCK_HFXODEBOUNCE_HFXODEBOUNCE_Db1024us (0x40UL)

/* Register: CLOCK_LFXODEBOUNCE */
/* Description: LFXO debounce time. The LFXO is started by triggering the TASKS_LFCLKSTART task when the LFCLKSRC register is configured for Xtal. */

/* Bit 0 : LFXO debounce time. */
#define CLOCK_LFXODEBOUNCE_LFXODEBOUNCE_Pos (0UL)
#define CLOCK_LFXODEBOUNCE_LFXODEBOUNCE_Msk (0x1UL << CLOCK_LFXODEBOUNCE_LFXODEBOUNCE_Pos)
#define CLOCK_LFXODEBOUNCE_LFXODEBOUNCE_Normal (0UL)
#define CLOCK_LFXODEBOUNCE_LFXODEBOUNCE_Extended (1UL)

/* Register: CLOCK_CTIV */
/* Description: Calibration timer interval */

/* Bits 6..0 : Calibration timer interval in multiple of 0.25 seconds. Range: 0.25 seconds to 31.75 seconds. */
#define CLOCK_CTIV_CTIV_Pos (0UL)
#define CLOCK_CTIV_CTIV_Msk (0x7FUL << CLOCK_CTIV_CTIV_Pos)

/* Register: CLOCK_TRACECONFIG */
/* Description: Clocking options for the trace port debug interface */

/* Bits 17..16 : Pin multiplexing of trace signals. See pin assignment chapter for more details. */
#define CLOCK_TRACECONFIG_TRACEMUX_Pos (16UL)
#define CLOCK_TRACECONFIG_TRACEMUX_Msk (0x3UL << CLOCK_TRACECONFIG_TRACEMUX_Pos)
#define CLOCK_TRACECONFIG_TRACEMUX_GPIO (0UL)
#define CLOCK_TRACECONFIG_TRACEMUX_Serial (1UL)
#define CLOCK_TRACECONFIG_TRACEMUX_Parallel (2UL)

/* Bits 1..0 : Speed of trace port clock. Note that the TRACECLK pin will output this clock divided by two. */
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_Pos (0UL)
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_Msk (0x3UL << CLOCK_TRACECONFIG_TRACEPORTSPEED_Pos)
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_32MHz (0UL)
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_16MHz (1UL)
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_8MHz (2UL)
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_4MHz (3UL)


/* Peripheral: COMP */
/* Description: Comparator */

/* Register: COMP_TASKS_START */
/* Description: Start comparator */

/* Bit 0 : Start comparator */
#define COMP_TASKS_START_TASKS_START_Pos (0UL)
#define COMP_TASKS_START_TASKS_START_Msk (0x1UL << COMP_TASKS_START_TASKS_START_Pos)
#define COMP_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: COMP_TASKS_STOP */
/* Description: Stop comparator */

/* Bit 0 : Stop comparator */
#define COMP_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define COMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << COMP_TASKS_STOP_TASKS_STOP_Pos)
#define COMP_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: COMP_TASKS_SAMPLE */
/* Description: Sample comparator value */

/* Bit 0 : Sample comparator value */
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL)
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << COMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos)
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Trigger (1UL)

/* Register: COMP_EVENTS_READY */
/* Description: COMP is ready and output is valid */

/* Bit 0 : COMP is ready and output is valid */
#define COMP_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define COMP_EVENTS_READY_EVENTS_READY_Msk (0x1UL << COMP_EVENTS_READY_EVENTS_READY_Pos)
#define COMP_EVENTS_READY_EVENTS_READY_NotGenerated (0UL)
#define COMP_EVENTS_READY_EVENTS_READY_Generated (1UL)

/* Register: COMP_EVENTS_DOWN */
/* Description: Downward crossing */

/* Bit 0 : Downward crossing */
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Pos (0UL)
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Msk (0x1UL << COMP_EVENTS_DOWN_EVENTS_DOWN_Pos)
#define COMP_EVENTS_DOWN_EVENTS_DOWN_NotGenerated (0UL)
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Generated (1UL)

/* Register: COMP_EVENTS_UP */
/* Description: Upward crossing */

/* Bit 0 : Upward crossing */
#define COMP_EVENTS_UP_EVENTS_UP_Pos (0UL)
#define COMP_EVENTS_UP_EVENTS_UP_Msk (0x1UL << COMP_EVENTS_UP_EVENTS_UP_Pos)
#define COMP_EVENTS_UP_EVENTS_UP_NotGenerated (0UL)
#define COMP_EVENTS_UP_EVENTS_UP_Generated (1UL)

/* Register: COMP_EVENTS_CROSS */
/* Description: Downward or upward crossing */

/* Bit 0 : Downward or upward crossing */
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Pos (0UL)
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Msk (0x1UL << COMP_EVENTS_CROSS_EVENTS_CROSS_Pos)
#define COMP_EVENTS_CROSS_EVENTS_CROSS_NotGenerated (0UL)
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Generated (1UL)

/* Register: COMP_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 4 : Shortcut between event CROSS and task STOP */
#define COMP_SHORTS_CROSS_STOP_Pos (4UL)
#define COMP_SHORTS_CROSS_STOP_Msk (0x1UL << COMP_SHORTS_CROSS_STOP_Pos)
#define COMP_SHORTS_CROSS_STOP_Disabled (0UL)
#define COMP_SHORTS_CROSS_STOP_Enabled (1UL)

/* Bit 3 : Shortcut between event UP and task STOP */
#define COMP_SHORTS_UP_STOP_Pos (3UL)
#define COMP_SHORTS_UP_STOP_Msk (0x1UL << COMP_SHORTS_UP_STOP_Pos)
#define COMP_SHORTS_UP_STOP_Disabled (0UL)
#define COMP_SHORTS_UP_STOP_Enabled (1UL)

/* Bit 2 : Shortcut between event DOWN and task STOP */
#define COMP_SHORTS_DOWN_STOP_Pos (2UL)
#define COMP_SHORTS_DOWN_STOP_Msk (0x1UL << COMP_SHORTS_DOWN_STOP_Pos)
#define COMP_SHORTS_DOWN_STOP_Disabled (0UL)
#define COMP_SHORTS_DOWN_STOP_Enabled (1UL)

/* Bit 1 : Shortcut between event READY and task STOP */
#define COMP_SHORTS_READY_STOP_Pos (1UL)
#define COMP_SHORTS_READY_STOP_Msk (0x1UL << COMP_SHORTS_READY_STOP_Pos)
#define COMP_SHORTS_READY_STOP_Disabled (0UL)
#define COMP_SHORTS_READY_STOP_Enabled (1UL)

/* Bit 0 : Shortcut between event READY and task SAMPLE */
#define COMP_SHORTS_READY_SAMPLE_Pos (0UL)
#define COMP_SHORTS_READY_SAMPLE_Msk (0x1UL << COMP_SHORTS_READY_SAMPLE_Pos)
#define COMP_SHORTS_READY_SAMPLE_Disabled (0UL)
#define COMP_SHORTS_READY_SAMPLE_Enabled (1UL)

/* Register: COMP_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 3 : Enable or disable interrupt for event CROSS */
#define COMP_INTEN_CROSS_Pos (3UL)
#define COMP_INTEN_CROSS_Msk (0x1UL << COMP_INTEN_CROSS_Pos)
#define COMP_INTEN_CROSS_Disabled (0UL)
#define COMP_INTEN_CROSS_Enabled (1UL)

/* Bit 2 : Enable or disable interrupt for event UP */
#define COMP_INTEN_UP_Pos (2UL)
#define COMP_INTEN_UP_Msk (0x1UL << COMP_INTEN_UP_Pos)
#define COMP_INTEN_UP_Disabled (0UL)
#define COMP_INTEN_UP_Enabled (1UL)

/* Bit 1 : Enable or disable interrupt for event DOWN */
#define COMP_INTEN_DOWN_Pos (1UL)
#define COMP_INTEN_DOWN_Msk (0x1UL << COMP_INTEN_DOWN_Pos)
#define COMP_INTEN_DOWN_Disabled (0UL)
#define COMP_INTEN_DOWN_Enabled (1UL)

/* Bit 0 : Enable or disable interrupt for event READY */
#define COMP_INTEN_READY_Pos (0UL)
#define COMP_INTEN_READY_Msk (0x1UL << COMP_INTEN_READY_Pos)
#define COMP_INTEN_READY_Disabled (0UL)
#define COMP_INTEN_READY_Enabled (1UL)

/* Register: COMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 3 : Write '1' to enable interrupt for event CROSS */
#define COMP_INTENSET_CROSS_Pos (3UL)
#define COMP_INTENSET_CROSS_Msk (0x1UL << COMP_INTENSET_CROSS_Pos)
#define COMP_INTENSET_CROSS_Disabled (0UL)
#define COMP_INTENSET_CROSS_Enabled (1UL)
#define COMP_INTENSET_CROSS_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event UP */
#define COMP_INTENSET_UP_Pos (2UL)
#define COMP_INTENSET_UP_Msk (0x1UL << COMP_INTENSET_UP_Pos)
#define COMP_INTENSET_UP_Disabled (0UL)
#define COMP_INTENSET_UP_Enabled (1UL)
#define COMP_INTENSET_UP_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event DOWN */
#define COMP_INTENSET_DOWN_Pos (1UL)
#define COMP_INTENSET_DOWN_Msk (0x1UL << COMP_INTENSET_DOWN_Pos)
#define COMP_INTENSET_DOWN_Disabled (0UL)
#define COMP_INTENSET_DOWN_Enabled (1UL)
#define COMP_INTENSET_DOWN_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define COMP_INTENSET_READY_Pos (0UL)
#define COMP_INTENSET_READY_Msk (0x1UL << COMP_INTENSET_READY_Pos)
#define COMP_INTENSET_READY_Disabled (0UL)
#define COMP_INTENSET_READY_Enabled (1UL)
#define COMP_INTENSET_READY_Set (1UL)

/* Register: COMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 3 : Write '1' to disable interrupt for event CROSS */
#define COMP_INTENCLR_CROSS_Pos (3UL)
#define COMP_INTENCLR_CROSS_Msk (0x1UL << COMP_INTENCLR_CROSS_Pos)
#define COMP_INTENCLR_CROSS_Disabled (0UL)
#define COMP_INTENCLR_CROSS_Enabled (1UL)
#define COMP_INTENCLR_CROSS_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event UP */
#define COMP_INTENCLR_UP_Pos (2UL)
#define COMP_INTENCLR_UP_Msk (0x1UL << COMP_INTENCLR_UP_Pos)
#define COMP_INTENCLR_UP_Disabled (0UL)
#define COMP_INTENCLR_UP_Enabled (1UL)
#define COMP_INTENCLR_UP_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event DOWN */
#define COMP_INTENCLR_DOWN_Pos (1UL)
#define COMP_INTENCLR_DOWN_Msk (0x1UL << COMP_INTENCLR_DOWN_Pos)
#define COMP_INTENCLR_DOWN_Disabled (0UL)
#define COMP_INTENCLR_DOWN_Enabled (1UL)
#define COMP_INTENCLR_DOWN_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event READY */
#define COMP_INTENCLR_READY_Pos (0UL)
#define COMP_INTENCLR_READY_Msk (0x1UL << COMP_INTENCLR_READY_Pos)
#define COMP_INTENCLR_READY_Disabled (0UL)
#define COMP_INTENCLR_READY_Enabled (1UL)
#define COMP_INTENCLR_READY_Clear (1UL)

/* Register: COMP_RESULT */
/* Description: Compare result */

/* Bit 0 : Result of last compare. Decision point SAMPLE task. */
#define COMP_RESULT_RESULT_Pos (0UL)
#define COMP_RESULT_RESULT_Msk (0x1UL << COMP_RESULT_RESULT_Pos)
#define COMP_RESULT_RESULT_Below (0UL)
#define COMP_RESULT_RESULT_Above (1UL)

/* Register: COMP_ENABLE */
/* Description: COMP enable */

/* Bits 1..0 : Enable or disable COMP */
#define COMP_ENABLE_ENABLE_Pos (0UL)
#define COMP_ENABLE_ENABLE_Msk (0x3UL << COMP_ENABLE_ENABLE_Pos)
#define COMP_ENABLE_ENABLE_Disabled (0UL)
#define COMP_ENABLE_ENABLE_Enabled (2UL)

/* Register: COMP_PSEL */
/* Description: Pin select */

/* Bits 2..0 : Analog pin select */
#define COMP_PSEL_PSEL_Pos (0UL)
#define COMP_PSEL_PSEL_Msk (0x7UL << COMP_PSEL_PSEL_Pos)
#define COMP_PSEL_PSEL_AnalogInput0 (0UL)
#define COMP_PSEL_PSEL_AnalogInput1 (1UL)
#define COMP_PSEL_PSEL_AnalogInput2 (2UL)
#define COMP_PSEL_PSEL_AnalogInput3 (3UL)
#define COMP_PSEL_PSEL_AnalogInput4 (4UL)
#define COMP_PSEL_PSEL_AnalogInput5 (5UL)
#define COMP_PSEL_PSEL_AnalogInput6 (6UL)
#define COMP_PSEL_PSEL_AnalogInput7 (7UL)

/* Register: COMP_REFSEL */
/* Description: Reference source select for single-ended mode */

/* Bits 2..0 : Reference select */
#define COMP_REFSEL_REFSEL_Pos (0UL)
#define COMP_REFSEL_REFSEL_Msk (0x7UL << COMP_REFSEL_REFSEL_Pos)
#define COMP_REFSEL_REFSEL_Int1V2 (0UL)
#define COMP_REFSEL_REFSEL_Int1V8 (1UL)
#define COMP_REFSEL_REFSEL_Int2V4 (2UL)
#define COMP_REFSEL_REFSEL_VDD (4UL)
#define COMP_REFSEL_REFSEL_ARef (5UL)

/* Register: COMP_EXTREFSEL */
/* Description: External reference select */

/* Bits 2..0 : External analog reference select */
#define COMP_EXTREFSEL_EXTREFSEL_Pos (0UL)
#define COMP_EXTREFSEL_EXTREFSEL_Msk (0x7UL << COMP_EXTREFSEL_EXTREFSEL_Pos)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference0 (0UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference1 (1UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference2 (2UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference3 (3UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference4 (4UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference5 (5UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference6 (6UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference7 (7UL)

/* Register: COMP_TH */
/* Description: Threshold configuration for hysteresis unit */

/* Bits 13..8 : VUP = (THUP+1)/64*VREF */
#define COMP_TH_THUP_Pos (8UL)
#define COMP_TH_THUP_Msk (0x3FUL << COMP_TH_THUP_Pos)

/* Bits 5..0 : VDOWN = (THDOWN+1)/64*VREF */
#define COMP_TH_THDOWN_Pos (0UL)
#define COMP_TH_THDOWN_Msk (0x3FUL << COMP_TH_THDOWN_Pos)

/* Register: COMP_MODE */
/* Description: Mode configuration */

/* Bit 8 : Main operation modes */
#define COMP_MODE_MAIN_Pos (8UL)
#define COMP_MODE_MAIN_Msk (0x1UL << COMP_MODE_MAIN_Pos)
#define COMP_MODE_MAIN_SE (0UL)
#define COMP_MODE_MAIN_Diff (1UL)

/* Bits 1..0 : Speed and power modes */
#define COMP_MODE_SP_Pos (0UL)
#define COMP_MODE_SP_Msk (0x3UL << COMP_MODE_SP_Pos)
#define COMP_MODE_SP_Low (0UL)
#define COMP_MODE_SP_Normal (1UL)
#define COMP_MODE_SP_High (2UL)

/* Register: COMP_HYST */
/* Description: Comparator hysteresis enable */

/* Bit 0 : Comparator hysteresis */
#define COMP_HYST_HYST_Pos (0UL)
#define COMP_HYST_HYST_Msk (0x1UL << COMP_HYST_HYST_Pos)
#define COMP_HYST_HYST_NoHyst (0UL)
#define COMP_HYST_HYST_Hyst50mV (1UL)


/* Peripheral: ECB */
/* Description: AES ECB Mode Encryption */

/* Register: ECB_TASKS_STARTECB */
/* Description: Start ECB block encrypt */

/* Bit 0 : Start ECB block encrypt */
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Pos (0UL)
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Msk (0x1UL << ECB_TASKS_STARTECB_TASKS_STARTECB_Pos)
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Trigger (1UL)

/* Register: ECB_TASKS_STOPECB */
/* Description: Abort a possible executing ECB operation */

/* Bit 0 : Abort a possible executing ECB operation */
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Pos (0UL)
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Msk (0x1UL << ECB_TASKS_STOPECB_TASKS_STOPECB_Pos)
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Trigger (1UL)

/* Register: ECB_EVENTS_ENDECB */
/* Description: ECB block encrypt complete */

/* Bit 0 : ECB block encrypt complete */
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Pos (0UL)
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Msk (0x1UL << ECB_EVENTS_ENDECB_EVENTS_ENDECB_Pos)
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_NotGenerated (0UL)
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Generated (1UL)

/* Register: ECB_EVENTS_ERRORECB */
/* Description: ECB block encrypt aborted because of a STOPECB task or due to an error */

/* Bit 0 : ECB block encrypt aborted because of a STOPECB task or due to an error */
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Pos (0UL)
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Msk (0x1UL << ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Pos)
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_NotGenerated (0UL)
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Generated (1UL)

/* Register: ECB_INTENSET */
/* Description: Enable interrupt */

/* Bit 1 : Write '1' to enable interrupt for event ERRORECB */
#define ECB_INTENSET_ERRORECB_Pos (1UL)
#define ECB_INTENSET_ERRORECB_Msk (0x1UL << ECB_INTENSET_ERRORECB_Pos)
#define ECB_INTENSET_ERRORECB_Disabled (0UL)
#define ECB_INTENSET_ERRORECB_Enabled (1UL)
#define ECB_INTENSET_ERRORECB_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event ENDECB */
#define ECB_INTENSET_ENDECB_Pos (0UL)
#define ECB_INTENSET_ENDECB_Msk (0x1UL << ECB_INTENSET_ENDECB_Pos)
#define ECB_INTENSET_ENDECB_Disabled (0UL)
#define ECB_INTENSET_ENDECB_Enabled (1UL)
#define ECB_INTENSET_ENDECB_Set (1UL)

/* Register: ECB_INTENCLR */
/* Description: Disable interrupt */

/* Bit 1 : Write '1' to disable interrupt for event ERRORECB */
#define ECB_INTENCLR_ERRORECB_Pos (1UL)
#define ECB_INTENCLR_ERRORECB_Msk (0x1UL << ECB_INTENCLR_ERRORECB_Pos)
#define ECB_INTENCLR_ERRORECB_Disabled (0UL)
#define ECB_INTENCLR_ERRORECB_Enabled (1UL)
#define ECB_INTENCLR_ERRORECB_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event ENDECB */
#define ECB_INTENCLR_ENDECB_Pos (0UL)
#define ECB_INTENCLR_ENDECB_Msk (0x1UL << ECB_INTENCLR_ENDECB_Pos)
#define ECB_INTENCLR_ENDECB_Disabled (0UL)
#define ECB_INTENCLR_ENDECB_Enabled (1UL)
#define ECB_INTENCLR_ENDECB_Clear (1UL)

/* Register: ECB_ECBDATAPTR */
/* Description: ECB block encrypt memory pointers */

/* Bits 31..0 : Pointer to the ECB data structure (see Table 1 ECB data structure overview) */
#define ECB_ECBDATAPTR_ECBDATAPTR_Pos (0UL)
#define ECB_ECBDATAPTR_ECBDATAPTR_Msk (0xFFFFFFFFUL << ECB_ECBDATAPTR_ECBDATAPTR_Pos)


/* Peripheral: EGU */
/* Description: Event generator unit 0 */

/* Register: EGU_TASKS_TRIGGER */
/* Description: Description collection: Trigger n for triggering the corresponding TRIGGERED[n] event */

/* Bit 0 : Trigger n for triggering the corresponding TRIGGERED[n] event */
#define EGU_TASKS_TRIGGER_TASKS_TRIGGER_Pos (0UL)
#define EGU_TASKS_TRIGGER_TASKS_TRIGGER_Msk (0x1UL << EGU_TASKS_TRIGGER_TASKS_TRIGGER_Pos)
#define EGU_TASKS_TRIGGER_TASKS_TRIGGER_Trigger (1UL)

/* Register: EGU_EVENTS_TRIGGERED */
/* Description: Description collection: Event number n generated by triggering the corresponding TRIGGER[n] task */

/* Bit 0 : Event number n generated by triggering the corresponding TRIGGER[n] task */
#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Pos (0UL)
#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Msk (0x1UL << EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Pos)
#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_NotGenerated (0UL)
#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Generated (1UL)

/* Register: EGU_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 15 : Enable or disable interrupt for event TRIGGERED[15] */
#define EGU_INTEN_TRIGGERED15_Pos (15UL)
#define EGU_INTEN_TRIGGERED15_Msk (0x1UL << EGU_INTEN_TRIGGERED15_Pos)
#define EGU_INTEN_TRIGGERED15_Disabled (0UL)
#define EGU_INTEN_TRIGGERED15_Enabled (1UL)

/* Bit 14 : Enable or disable interrupt for event TRIGGERED[14] */
#define EGU_INTEN_TRIGGERED14_Pos (14UL)
#define EGU_INTEN_TRIGGERED14_Msk (0x1UL << EGU_INTEN_TRIGGERED14_Pos)
#define EGU_INTEN_TRIGGERED14_Disabled (0UL)
#define EGU_INTEN_TRIGGERED14_Enabled (1UL)

/* Bit 13 : Enable or disable interrupt for event TRIGGERED[13] */
#define EGU_INTEN_TRIGGERED13_Pos (13UL)
#define EGU_INTEN_TRIGGERED13_Msk (0x1UL << EGU_INTEN_TRIGGERED13_Pos)
#define EGU_INTEN_TRIGGERED13_Disabled (0UL)
#define EGU_INTEN_TRIGGERED13_Enabled (1UL)

/* Bit 12 : Enable or disable interrupt for event TRIGGERED[12] */
#define EGU_INTEN_TRIGGERED12_Pos (12UL)
#define EGU_INTEN_TRIGGERED12_Msk (0x1UL << EGU_INTEN_TRIGGERED12_Pos)
#define EGU_INTEN_TRIGGERED12_Disabled (0UL)
#define EGU_INTEN_TRIGGERED12_Enabled (1UL)

/* Bit 11 : Enable or disable interrupt for event TRIGGERED[11] */
#define EGU_INTEN_TRIGGERED11_Pos (11UL)
#define EGU_INTEN_TRIGGERED11_Msk (0x1UL << EGU_INTEN_TRIGGERED11_Pos)
#define EGU_INTEN_TRIGGERED11_Disabled (0UL)
#define EGU_INTEN_TRIGGERED11_Enabled (1UL)

/* Bit 10 : Enable or disable interrupt for event TRIGGERED[10] */
#define EGU_INTEN_TRIGGERED10_Pos (10UL)
#define EGU_INTEN_TRIGGERED10_Msk (0x1UL << EGU_INTEN_TRIGGERED10_Pos)
#define EGU_INTEN_TRIGGERED10_Disabled (0UL)
#define EGU_INTEN_TRIGGERED10_Enabled (1UL)

/* Bit 9 : Enable or disable interrupt for event TRIGGERED[9] */
#define EGU_INTEN_TRIGGERED9_Pos (9UL)
#define EGU_INTEN_TRIGGERED9_Msk (0x1UL << EGU_INTEN_TRIGGERED9_Pos)
#define EGU_INTEN_TRIGGERED9_Disabled (0UL)
#define EGU_INTEN_TRIGGERED9_Enabled (1UL)

/* Bit 8 : Enable or disable interrupt for event TRIGGERED[8] */
#define EGU_INTEN_TRIGGERED8_Pos (8UL)
#define EGU_INTEN_TRIGGERED8_Msk (0x1UL << EGU_INTEN_TRIGGERED8_Pos)
#define EGU_INTEN_TRIGGERED8_Disabled (0UL)
#define EGU_INTEN_TRIGGERED8_Enabled (1UL)

/* Bit 7 : Enable or disable interrupt for event TRIGGERED[7] */
#define EGU_INTEN_TRIGGERED7_Pos (7UL)
#define EGU_INTEN_TRIGGERED7_Msk (0x1UL << EGU_INTEN_TRIGGERED7_Pos)
#define EGU_INTEN_TRIGGERED7_Disabled (0UL)
#define EGU_INTEN_TRIGGERED7_Enabled (1UL)

/* Bit 6 : Enable or disable interrupt for event TRIGGERED[6] */
#define EGU_INTEN_TRIGGERED6_Pos (6UL)
#define EGU_INTEN_TRIGGERED6_Msk (0x1UL << EGU_INTEN_TRIGGERED6_Pos)
#define EGU_INTEN_TRIGGERED6_Disabled (0UL)
#define EGU_INTEN_TRIGGERED6_Enabled (1UL)

/* Bit 5 : Enable or disable interrupt for event TRIGGERED[5] */
#define EGU_INTEN_TRIGGERED5_Pos (5UL)
#define EGU_INTEN_TRIGGERED5_Msk (0x1UL << EGU_INTEN_TRIGGERED5_Pos)
#define EGU_INTEN_TRIGGERED5_Disabled (0UL)
#define EGU_INTEN_TRIGGERED5_Enabled (1UL)

/* Bit 4 : Enable or disable interrupt for event TRIGGERED[4] */
#define EGU_INTEN_TRIGGERED4_Pos (4UL)
#define EGU_INTEN_TRIGGERED4_Msk (0x1UL << EGU_INTEN_TRIGGERED4_Pos)
#define EGU_INTEN_TRIGGERED4_Disabled (0UL)
#define EGU_INTEN_TRIGGERED4_Enabled (1UL)

/* Bit 3 : Enable or disable interrupt for event TRIGGERED[3] */
#define EGU_INTEN_TRIGGERED3_Pos (3UL)
#define EGU_INTEN_TRIGGERED3_Msk (0x1UL << EGU_INTEN_TRIGGERED3_Pos)
#define EGU_INTEN_TRIGGERED3_Disabled (0UL)
#define EGU_INTEN_TRIGGERED3_Enabled (1UL)

/* Bit 2 : Enable or disable interrupt for event TRIGGERED[2] */
#define EGU_INTEN_TRIGGERED2_Pos (2UL)
#define EGU_INTEN_TRIGGERED2_Msk (0x1UL << EGU_INTEN_TRIGGERED2_Pos)
#define EGU_INTEN_TRIGGERED2_Disabled (0UL)
#define EGU_INTEN_TRIGGERED2_Enabled (1UL)

/* Bit 1 : Enable or disable interrupt for event TRIGGERED[1] */
#define EGU_INTEN_TRIGGERED1_Pos (1UL)
#define EGU_INTEN_TRIGGERED1_Msk (0x1UL << EGU_INTEN_TRIGGERED1_Pos)
#define EGU_INTEN_TRIGGERED1_Disabled (0UL)
#define EGU_INTEN_TRIGGERED1_Enabled (1UL)

/* Bit 0 : Enable or disable interrupt for event TRIGGERED[0] */
#define EGU_INTEN_TRIGGERED0_Pos (0UL)
#define EGU_INTEN_TRIGGERED0_Msk (0x1UL << EGU_INTEN_TRIGGERED0_Pos)
#define EGU_INTEN_TRIGGERED0_Disabled (0UL)
#define EGU_INTEN_TRIGGERED0_Enabled (1UL)

/* Register: EGU_INTENSET */
/* Description: Enable interrupt */

/* Bit 15 : Write '1' to enable interrupt for event TRIGGERED[15] */
#define EGU_INTENSET_TRIGGERED15_Pos (15UL)
#define EGU_INTENSET_TRIGGERED15_Msk (0x1UL << EGU_INTENSET_TRIGGERED15_Pos)
#define EGU_INTENSET_TRIGGERED15_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED15_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED15_Set (1UL)

/* Bit 14 : Write '1' to enable interrupt for event TRIGGERED[14] */
#define EGU_INTENSET_TRIGGERED14_Pos (14UL)
#define EGU_INTENSET_TRIGGERED14_Msk (0x1UL << EGU_INTENSET_TRIGGERED14_Pos)
#define EGU_INTENSET_TRIGGERED14_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED14_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED14_Set (1UL)

/* Bit 13 : Write '1' to enable interrupt for event TRIGGERED[13] */
#define EGU_INTENSET_TRIGGERED13_Pos (13UL)
#define EGU_INTENSET_TRIGGERED13_Msk (0x1UL << EGU_INTENSET_TRIGGERED13_Pos)
#define EGU_INTENSET_TRIGGERED13_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED13_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED13_Set (1UL)

/* Bit 12 : Write '1' to enable interrupt for event TRIGGERED[12] */
#define EGU_INTENSET_TRIGGERED12_Pos (12UL)
#define EGU_INTENSET_TRIGGERED12_Msk (0x1UL << EGU_INTENSET_TRIGGERED12_Pos)
#define EGU_INTENSET_TRIGGERED12_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED12_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED12_Set (1UL)

/* Bit 11 : Write '1' to enable interrupt for event TRIGGERED[11] */
#define EGU_INTENSET_TRIGGERED11_Pos (11UL)
#define EGU_INTENSET_TRIGGERED11_Msk (0x1UL << EGU_INTENSET_TRIGGERED11_Pos)
#define EGU_INTENSET_TRIGGERED11_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED11_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED11_Set (1UL)

/* Bit 10 : Write '1' to enable interrupt for event TRIGGERED[10] */
#define EGU_INTENSET_TRIGGERED10_Pos (10UL)
#define EGU_INTENSET_TRIGGERED10_Msk (0x1UL << EGU_INTENSET_TRIGGERED10_Pos)
#define EGU_INTENSET_TRIGGERED10_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED10_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED10_Set (1UL)

/* Bit 9 : Write '1' to enable interrupt for event TRIGGERED[9] */
#define EGU_INTENSET_TRIGGERED9_Pos (9UL)
#define EGU_INTENSET_TRIGGERED9_Msk (0x1UL << EGU_INTENSET_TRIGGERED9_Pos)
#define EGU_INTENSET_TRIGGERED9_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED9_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED9_Set (1UL)

/* Bit 8 : Write '1' to enable interrupt for event TRIGGERED[8] */
#define EGU_INTENSET_TRIGGERED8_Pos (8UL)
#define EGU_INTENSET_TRIGGERED8_Msk (0x1UL << EGU_INTENSET_TRIGGERED8_Pos)
#define EGU_INTENSET_TRIGGERED8_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED8_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED8_Set (1UL)

/* Bit 7 : Write '1' to enable interrupt for event TRIGGERED[7] */
#define EGU_INTENSET_TRIGGERED7_Pos (7UL)
#define EGU_INTENSET_TRIGGERED7_Msk (0x1UL << EGU_INTENSET_TRIGGERED7_Pos)
#define EGU_INTENSET_TRIGGERED7_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED7_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED7_Set (1UL)

/* Bit 6 : Write '1' to enable interrupt for event TRIGGERED[6] */
#define EGU_INTENSET_TRIGGERED6_Pos (6UL)
#define EGU_INTENSET_TRIGGERED6_Msk (0x1UL << EGU_INTENSET_TRIGGERED6_Pos)
#define EGU_INTENSET_TRIGGERED6_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED6_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED6_Set (1UL)

/* Bit 5 : Write '1' to enable interrupt for event TRIGGERED[5] */
#define EGU_INTENSET_TRIGGERED5_Pos (5UL)
#define EGU_INTENSET_TRIGGERED5_Msk (0x1UL << EGU_INTENSET_TRIGGERED5_Pos)
#define EGU_INTENSET_TRIGGERED5_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED5_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED5_Set (1UL)

/* Bit 4 : Write '1' to enable interrupt for event TRIGGERED[4] */
#define EGU_INTENSET_TRIGGERED4_Pos (4UL)
#define EGU_INTENSET_TRIGGERED4_Msk (0x1UL << EGU_INTENSET_TRIGGERED4_Pos)
#define EGU_INTENSET_TRIGGERED4_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED4_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED4_Set (1UL)

/* Bit 3 : Write '1' to enable interrupt for event TRIGGERED[3] */
#define EGU_INTENSET_TRIGGERED3_Pos (3UL)
#define EGU_INTENSET_TRIGGERED3_Msk (0x1UL << EGU_INTENSET_TRIGGERED3_Pos)
#define EGU_INTENSET_TRIGGERED3_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED3_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED3_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event TRIGGERED[2] */
#define EGU_INTENSET_TRIGGERED2_Pos (2UL)
#define EGU_INTENSET_TRIGGERED2_Msk (0x1UL << EGU_INTENSET_TRIGGERED2_Pos)
#define EGU_INTENSET_TRIGGERED2_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED2_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED2_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event TRIGGERED[1] */
#define EGU_INTENSET_TRIGGERED1_Pos (1UL)
#define EGU_INTENSET_TRIGGERED1_Msk (0x1UL << EGU_INTENSET_TRIGGERED1_Pos)
#define EGU_INTENSET_TRIGGERED1_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED1_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED1_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event TRIGGERED[0] */
#define EGU_INTENSET_TRIGGERED0_Pos (0UL)
#define EGU_INTENSET_TRIGGERED0_Msk (0x1UL << EGU_INTENSET_TRIGGERED0_Pos)
#define EGU_INTENSET_TRIGGERED0_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED0_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED0_Set (1UL)

/* Register: EGU_INTENCLR */
/* Description: Disable interrupt */

/* Bit 15 : Write '1' to disable interrupt for event TRIGGERED[15] */
#define EGU_INTENCLR_TRIGGERED15_Pos (15UL)
#define EGU_INTENCLR_TRIGGERED15_Msk (0x1UL << EGU_INTENCLR_TRIGGERED15_Pos)
#define EGU_INTENCLR_TRIGGERED15_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED15_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED15_Clear (1UL)

/* Bit 14 : Write '1' to disable interrupt for event TRIGGERED[14] */
#define EGU_INTENCLR_TRIGGERED14_Pos (14UL)
#define EGU_INTENCLR_TRIGGERED14_Msk (0x1UL << EGU_INTENCLR_TRIGGERED14_Pos)
#define EGU_INTENCLR_TRIGGERED14_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED14_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED14_Clear (1UL)

/* Bit 13 : Write '1' to disable interrupt for event TRIGGERED[13] */
#define EGU_INTENCLR_TRIGGERED13_Pos (13UL)
#define EGU_INTENCLR_TRIGGERED13_Msk (0x1UL << EGU_INTENCLR_TRIGGERED13_Pos)
#define EGU_INTENCLR_TRIGGERED13_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED13_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED13_Clear (1UL)

/* Bit 12 : Write '1' to disable interrupt for event TRIGGERED[12] */
#define EGU_INTENCLR_TRIGGERED12_Pos (12UL)
#define EGU_INTENCLR_TRIGGERED12_Msk (0x1UL << EGU_INTENCLR_TRIGGERED12_Pos)
#define EGU_INTENCLR_TRIGGERED12_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED12_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED12_Clear (1UL)

/* Bit 11 : Write '1' to disable interrupt for event TRIGGERED[11] */
#define EGU_INTENCLR_TRIGGERED11_Pos (11UL)
#define EGU_INTENCLR_TRIGGERED11_Msk (0x1UL << EGU_INTENCLR_TRIGGERED11_Pos)
#define EGU_INTENCLR_TRIGGERED11_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED11_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED11_Clear (1UL)

/* Bit 10 : Write '1' to disable interrupt for event TRIGGERED[10] */
#define EGU_INTENCLR_TRIGGERED10_Pos (10UL)
#define EGU_INTENCLR_TRIGGERED10_Msk (0x1UL << EGU_INTENCLR_TRIGGERED10_Pos)
#define EGU_INTENCLR_TRIGGERED10_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED10_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED10_Clear (1UL)

/* Bit 9 : Write '1' to disable interrupt for event TRIGGERED[9] */
#define EGU_INTENCLR_TRIGGERED9_Pos (9UL)
#define EGU_INTENCLR_TRIGGERED9_Msk (0x1UL << EGU_INTENCLR_TRIGGERED9_Pos)
#define EGU_INTENCLR_TRIGGERED9_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED9_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED9_Clear (1UL)

/* Bit 8 : Write '1' to disable interrupt for event TRIGGERED[8] */
#define EGU_INTENCLR_TRIGGERED8_Pos (8UL)
#define EGU_INTENCLR_TRIGGERED8_Msk (0x1UL << EGU_INTENCLR_TRIGGERED8_Pos)
#define EGU_INTENCLR_TRIGGERED8_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED8_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED8_Clear (1UL)

/* Bit 7 : Write '1' to disable interrupt for event TRIGGERED[7] */
#define EGU_INTENCLR_TRIGGERED7_Pos (7UL)
#define EGU_INTENCLR_TRIGGERED7_Msk (0x1UL << EGU_INTENCLR_TRIGGERED7_Pos)
#define EGU_INTENCLR_TRIGGERED7_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED7_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED7_Clear (1UL)

/* Bit 6 : Write '1' to disable interrupt for event TRIGGERED[6] */
#define EGU_INTENCLR_TRIGGERED6_Pos (6UL)
#define EGU_INTENCLR_TRIGGERED6_Msk (0x1UL << EGU_INTENCLR_TRIGGERED6_Pos)
#define EGU_INTENCLR_TRIGGERED6_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED6_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED6_Clear (1UL)

/* Bit 5 : Write '1' to disable interrupt for event TRIGGERED[5] */
#define EGU_INTENCLR_TRIGGERED5_Pos (5UL)
#define EGU_INTENCLR_TRIGGERED5_Msk (0x1UL << EGU_INTENCLR_TRIGGERED5_Pos)
#define EGU_INTENCLR_TRIGGERED5_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED5_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED5_Clear (1UL)

/* Bit 4 : Write '1' to disable interrupt for event TRIGGERED[4] */
#define EGU_INTENCLR_TRIGGERED4_Pos (4UL)
#define EGU_INTENCLR_TRIGGERED4_Msk (0x1UL << EGU_INTENCLR_TRIGGERED4_Pos)
#define EGU_INTENCLR_TRIGGERED4_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED4_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED4_Clear (1UL)

/* Bit 3 : Write '1' to disable interrupt for event TRIGGERED[3] */
#define EGU_INTENCLR_TRIGGERED3_Pos (3UL)
#define EGU_INTENCLR_TRIGGERED3_Msk (0x1UL << EGU_INTENCLR_TRIGGERED3_Pos)
#define EGU_INTENCLR_TRIGGERED3_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED3_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED3_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event TRIGGERED[2] */
#define EGU_INTENCLR_TRIGGERED2_Pos (2UL)
#define EGU_INTENCLR_TRIGGERED2_Msk (0x1UL << EGU_INTENCLR_TRIGGERED2_Pos)
#define EGU_INTENCLR_TRIGGERED2_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED2_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED2_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event TRIGGERED[1] */
#define EGU_INTENCLR_TRIGGERED1_Pos (1UL)
#define EGU_INTENCLR_TRIGGERED1_Msk (0x1UL << EGU_INTENCLR_TRIGGERED1_Pos)
#define EGU_INTENCLR_TRIGGERED1_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED1_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED1_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event TRIGGERED[0] */
#define EGU_INTENCLR_TRIGGERED0_Pos (0UL)
#define EGU_INTENCLR_TRIGGERED0_Msk (0x1UL << EGU_INTENCLR_TRIGGERED0_Pos)
#define EGU_INTENCLR_TRIGGERED0_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED0_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED0_Clear (1UL)


/* Peripheral: FICR */
/* Description: Factory information configuration registers */

/* Register: FICR_CODEPAGESIZE */
/* Description: Code memory page size */

/* Bits 31..0 : Code memory page size */
#define FICR_CODEPAGESIZE_CODEPAGESIZE_Pos (0UL)
#define FICR_CODEPAGESIZE_CODEPAGESIZE_Msk (0xFFFFFFFFUL << FICR_CODEPAGESIZE_CODEPAGESIZE_Pos)

/* Register: FICR_CODESIZE */
/* Description: Code memory size */

/* Bits 31..0 : Code memory size in number of pages */
#define FICR_CODESIZE_CODESIZE_Pos (0UL)
#define FICR_CODESIZE_CODESIZE_Msk (0xFFFFFFFFUL << FICR_CODESIZE_CODESIZE_Pos)

/* Register: FICR_DEVICEID */
/* Description: Description collection: Device identifier */

/* Bits 31..0 : 64 bit unique device identifier */
#define FICR_DEVICEID_DEVICEID_Pos (0UL)
#define FICR_DEVICEID_DEVICEID_Msk (0xFFFFFFFFUL << FICR_DEVICEID_DEVICEID_Pos)

/* Register: FICR_ER */
/* Description: Description collection: Encryption root, word n */

/* Bits 31..0 : Encryption root, word n */
#define FICR_ER_ER_Pos (0UL)
#define FICR_ER_ER_Msk (0xFFFFFFFFUL << FICR_ER_ER_Pos)

/* Register: FICR_IR */
/* Description: Description collection: Identity Root, word n */

/* Bits 31..0 : Identity Root, word n */
#define FICR_IR_IR_Pos (0UL)
#define FICR_IR_IR_Msk (0xFFFFFFFFUL << FICR_IR_IR_Pos)

/* Register: FICR_DEVICEADDRTYPE */
/* Description: Device address type */

/* Bit 0 : Device address type */
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Pos (0UL)
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Msk (0x1UL << FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Pos)
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Public (0UL)
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Random (1UL)

/* Register: FICR_DEVICEADDR */
/* Description: Description collection: Device address n */

/* Bits 31..0 : 48 bit device address */
#define FICR_DEVICEADDR_DEVICEADDR_Pos (0UL)
#define FICR_DEVICEADDR_DEVICEADDR_Msk (0xFFFFFFFFUL << FICR_DEVICEADDR_DEVICEADDR_Pos)

/* Register: FICR_INFO_PART */
/* Description: Part code */

/* Bits 31..0 : Part code */
#define FICR_INFO_PART_PART_Pos (0UL)
#define FICR_INFO_PART_PART_Msk (0xFFFFFFFFUL << FICR_INFO_PART_PART_Pos)
#define FICR_INFO_PART_PART_N52820 (0x52820UL)
#define FICR_INFO_PART_PART_N52833 (0x52833UL)
#define FICR_INFO_PART_PART_N52840 (0x52840UL)
#define FICR_INFO_PART_PART_Unspecified (0xFFFFFFFFUL)

/* Register: FICR_INFO_VARIANT */
/* Description: Build code (hardware version and production configuration) */

/* Bits 31..0 : Build code (hardware version and production configuration). Encoded as ASCII. */
#define FICR_INFO_VARIANT_VARIANT_Pos (0UL)
#define FICR_INFO_VARIANT_VARIANT_Msk (0xFFFFFFFFUL << FICR_INFO_VARIANT_VARIANT_Pos)
#define FICR_INFO_VARIANT_VARIANT_AAA0 (0x41414130UL)
#define FICR_INFO_VARIANT_VARIANT_AAA1 (0x41414131UL)
#define FICR_INFO_VARIANT_VARIANT_AAAA (0x41414141UL)
#define FICR_INFO_VARIANT_VARIANT_AAAB (0x41414142UL)
#define FICR_INFO_VARIANT_VARIANT_AAB0 (0x41414230UL)
#define FICR_INFO_VARIANT_VARIANT_Unspecified (0xFFFFFFFFUL)

/* Register: FICR_INFO_PACKAGE */
/* Description: Package option */

/* Bits 31..0 : Package option */
#define FICR_INFO_PACKAGE_PACKAGE_Pos (0UL)
#define FICR_INFO_PACKAGE_PACKAGE_Msk (0xFFFFFFFFUL << FICR_INFO_PACKAGE_PACKAGE_Pos)
#define FICR_INFO_PACKAGE_PACKAGE_QI (0x2004UL)
#define FICR_INFO_PACKAGE_PACKAGE_QD (0x2007UL)
#define FICR_INFO_PACKAGE_PACKAGE_CJ (0x2008UL)
#define FICR_INFO_PACKAGE_PACKAGE_Unspecified (0xFFFFFFFFUL)

/* Register: FICR_INFO_RAM */
/* Description: RAM variant */

/* Bits 31..0 : RAM variant */
#define FICR_INFO_RAM_RAM_Pos (0UL)
#define FICR_INFO_RAM_RAM_Msk (0xFFFFFFFFUL << FICR_INFO_RAM_RAM_Pos)
#define FICR_INFO_RAM_RAM_K16 (0x10UL)
#define FICR_INFO_RAM_RAM_K32 (0x20UL)
#define FICR_INFO_RAM_RAM_K64 (0x40UL)
#define FICR_INFO_RAM_RAM_K128 (0x80UL)
#define FICR_INFO_RAM_RAM_K256 (0x100UL)
#define FICR_INFO_RAM_RAM_Unspecified (0xFFFFFFFFUL)

/* Register: FICR_INFO_FLASH */
/* Description: Flash variant */

/* Bits 31..0 : Flash variant */
#define FICR_INFO_FLASH_FLASH_Pos (0UL)
#define FICR_INFO_FLASH_FLASH_Msk (0xFFFFFFFFUL << FICR_INFO_FLASH_FLASH_Pos)
#define FICR_INFO_FLASH_FLASH_K128 (0x80UL)
#define FICR_INFO_FLASH_FLASH_K256 (0x100UL)
#define FICR_INFO_FLASH_FLASH_K512 (0x200UL)
#define FICR_INFO_FLASH_FLASH_K1024 (0x400UL)
#define FICR_INFO_FLASH_FLASH_K2048 (0x800UL)
#define FICR_INFO_FLASH_FLASH_Unspecified (0xFFFFFFFFUL)

/* Register: FICR_PRODTEST */
/* Description: Description collection: Production test signature n */

/* Bits 31..0 : Production test signature n */
#define FICR_PRODTEST_PRODTEST_Pos (0UL)
#define FICR_PRODTEST_PRODTEST_Msk (0xFFFFFFFFUL << FICR_PRODTEST_PRODTEST_Pos)
#define FICR_PRODTEST_PRODTEST_Done (0xBB42319FUL)
#define FICR_PRODTEST_PRODTEST_NotDone (0xFFFFFFFFUL)

/* Register: FICR_TEMP_A0 */
/* Description: Slope definition A0 */

/* Bits 11..0 : A (slope definition) register. */
#define FICR_TEMP_A0_A_Pos (0UL)
#define FICR_TEMP_A0_A_Msk (0xFFFUL << FICR_TEMP_A0_A_Pos)

/* Register: FICR_TEMP_A1 */
/* Description: Slope definition A1 */

/* Bits 11..0 : A (slope definition) register. */
#define FICR_TEMP_A1_A_Pos (0UL)
#define FICR_TEMP_A1_A_Msk (0xFFFUL << FICR_TEMP_A1_A_Pos)

/* Register: FICR_TEMP_A2 */
/* Description: Slope definition A2 */

/* Bits 11..0 : A (slope definition) register. */
#define FICR_TEMP_A2_A_Pos (0UL)
#define FICR_TEMP_A2_A_Msk (0xFFFUL << FICR_TEMP_A2_A_Pos)

/* Register: FICR_TEMP_A3 */
/* Description: Slope definition A3 */

/* Bits 11..0 : A (slope definition) register. */
#define FICR_TEMP_A3_A_Pos (0UL)
#define FICR_TEMP_A3_A_Msk (0xFFFUL << FICR_TEMP_A3_A_Pos)

/* Register: FICR_TEMP_A4 */
/* Description: Slope definition A4 */

/* Bits 11..0 : A (slope definition) register. */
#define FICR_TEMP_A4_A_Pos (0UL)
#define FICR_TEMP_A4_A_Msk (0xFFFUL << FICR_TEMP_A4_A_Pos)

/* Register: FICR_TEMP_A5 */
/* Description: Slope definition A5 */

/* Bits 11..0 : A (slope definition) register. */
#define FICR_TEMP_A5_A_Pos (0UL)
#define FICR_TEMP_A5_A_Msk (0xFFFUL << FICR_TEMP_A5_A_Pos)

/* Register: FICR_TEMP_B0 */
/* Description: Y-intercept B0 */

/* Bits 13..0 : B (y-intercept) */
#define FICR_TEMP_B0_B_Pos (0UL)
#define FICR_TEMP_B0_B_Msk (0x3FFFUL << FICR_TEMP_B0_B_Pos)

/* Register: FICR_TEMP_B1 */
/* Description: Y-intercept B1 */

/* Bits 13..0 : B (y-intercept) */
#define FICR_TEMP_B1_B_Pos (0UL)
#define FICR_TEMP_B1_B_Msk (0x3FFFUL << FICR_TEMP_B1_B_Pos)

/* Register: FICR_TEMP_B2 */
/* Description: Y-intercept B2 */

/* Bits 13..0 : B (y-intercept) */
#define FICR_TEMP_B2_B_Pos (0UL)
#define FICR_TEMP_B2_B_Msk (0x3FFFUL << FICR_TEMP_B2_B_Pos)

/* Register: FICR_TEMP_B3 */
/* Description: Y-intercept B3 */

/* Bits 13..0 : B (y-intercept) */
#define FICR_TEMP_B3_B_Pos (0UL)
#define FICR_TEMP_B3_B_Msk (0x3FFFUL << FICR_TEMP_B3_B_Pos)

/* Register: FICR_TEMP_B4 */
/* Description: Y-intercept B4 */

/* Bits 13..0 : B (y-intercept) */
#define FICR_TEMP_B4_B_Pos (0UL)
#define FICR_TEMP_B4_B_Msk (0x3FFFUL << FICR_TEMP_B4_B_Pos)

/* Register: FICR_TEMP_B5 */
/* Description: Y-intercept B5 */

/* Bits 13..0 : B (y-intercept) */
#define FICR_TEMP_B5_B_Pos (0UL)
#define FICR_TEMP_B5_B_Msk (0x3FFFUL << FICR_TEMP_B5_B_Pos)

/* Register: FICR_TEMP_T0 */
/* Description: Segment end T0 */

/* Bits 7..0 : T (segment end) register */
#define FICR_TEMP_T0_T_Pos (0UL)
#define FICR_TEMP_T0_T_Msk (0xFFUL << FICR_TEMP_T0_T_Pos)

/* Register: FICR_TEMP_T1 */
/* Description: Segment end T1 */

/* Bits 7..0 : T (segment end) register */
#define FICR_TEMP_T1_T_Pos (0UL)
#define FICR_TEMP_T1_T_Msk (0xFFUL << FICR_TEMP_T1_T_Pos)

/* Register: FICR_TEMP_T2 */
/* Description: Segment end T2 */

/* Bits 7..0 : T (segment end) register */
#define FICR_TEMP_T2_T_Pos (0UL)
#define FICR_TEMP_T2_T_Msk (0xFFUL << FICR_TEMP_T2_T_Pos)

/* Register: FICR_TEMP_T3 */
/* Description: Segment end T3 */

/* Bits 7..0 : T (segment end) register */
#define FICR_TEMP_T3_T_Pos (0UL)
#define FICR_TEMP_T3_T_Msk (0xFFUL << FICR_TEMP_T3_T_Pos)

/* Register: FICR_TEMP_T4 */
/* Description: Segment end T4 */

/* Bits 7..0 : T (segment end) register */
#define FICR_TEMP_T4_T_Pos (0UL)
#define FICR_TEMP_T4_T_Msk (0xFFUL << FICR_TEMP_T4_T_Pos)

/* Register: FICR_NFC_TAGHEADER0 */
/* Description: Default header for NFC tag. Software can read these values to populate NFCID1_3RD_LAST, NFCID1_2ND_LAST, and NFCID1_LAST. */

/* Bits 31..24 : Unique identifier byte 3 */
#define FICR_NFC_TAGHEADER0_UD3_Pos (24UL)
#define FICR_NFC_TAGHEADER0_UD3_Msk (0xFFUL << FICR_NFC_TAGHEADER0_UD3_Pos)

/* Bits 23..16 : Unique identifier byte 2 */
#define FICR_NFC_TAGHEADER0_UD2_Pos (16UL)
#define FICR_NFC_TAGHEADER0_UD2_Msk (0xFFUL << FICR_NFC_TAGHEADER0_UD2_Pos)

/* Bits 15..8 : Unique identifier byte 1 */
#define FICR_NFC_TAGHEADER0_UD1_Pos (8UL)
#define FICR_NFC_TAGHEADER0_UD1_Msk (0xFFUL << FICR_NFC_TAGHEADER0_UD1_Pos)

/* Bits 7..0 : Default Manufacturer ID: Nordic Semiconductor ASA has ICM 0x5F */
#define FICR_NFC_TAGHEADER0_MFGID_Pos (0UL)
#define FICR_NFC_TAGHEADER0_MFGID_Msk (0xFFUL << FICR_NFC_TAGHEADER0_MFGID_Pos)

/* Register: FICR_NFC_TAGHEADER1 */
/* Description: Default header for NFC tag. Software can read these values to populate NFCID1_3RD_LAST, NFCID1_2ND_LAST, and NFCID1_LAST. */

/* Bits 31..24 : Unique identifier byte 7 */
#define FICR_NFC_TAGHEADER1_UD7_Pos (24UL)
#define FICR_NFC_TAGHEADER1_UD7_Msk (0xFFUL << FICR_NFC_TAGHEADER1_UD7_Pos)

/* Bits 23..16 : Unique identifier byte 6 */
#define FICR_NFC_TAGHEADER1_UD6_Pos (16UL)
#define FICR_NFC_TAGHEADER1_UD6_Msk (0xFFUL << FICR_NFC_TAGHEADER1_UD6_Pos)

/* Bits 15..8 : Unique identifier byte 5 */
#define FICR_NFC_TAGHEADER1_UD5_Pos (8UL)
#define FICR_NFC_TAGHEADER1_UD5_Msk (0xFFUL << FICR_NFC_TAGHEADER1_UD5_Pos)

/* Bits 7..0 : Unique identifier byte 4 */
#define FICR_NFC_TAGHEADER1_UD4_Pos (0UL)
#define FICR_NFC_TAGHEADER1_UD4_Msk (0xFFUL << FICR_NFC_TAGHEADER1_UD4_Pos)

/* Register: FICR_NFC_TAGHEADER2 */
/* Description: Default header for NFC tag. Software can read these values to populate NFCID1_3RD_LAST, NFCID1_2ND_LAST, and NFCID1_LAST. */

/* Bits 31..24 : Unique identifier byte 11 */
#define FICR_NFC_TAGHEADER2_UD11_Pos (24UL)
#define FICR_NFC_TAGHEADER2_UD11_Msk (0xFFUL << FICR_NFC_TAGHEADER2_UD11_Pos)

/* Bits 23..16 : Unique identifier byte 10 */
#define FICR_NFC_TAGHEADER2_UD10_Pos (16UL)
#define FICR_NFC_TAGHEADER2_UD10_Msk (0xFFUL << FICR_NFC_TAGHEADER2_UD10_Pos)

/* Bits 15..8 : Unique identifier byte 9 */
#define FICR_NFC_TAGHEADER2_UD9_Pos (8UL)
#define FICR_NFC_TAGHEADER2_UD9_Msk (0xFFUL << FICR_NFC_TAGHEADER2_UD9_Pos)

/* Bits 7..0 : Unique identifier byte 8 */
#define FICR_NFC_TAGHEADER2_UD8_Pos (0UL)
#define FICR_NFC_TAGHEADER2_UD8_Msk (0xFFUL << FICR_NFC_TAGHEADER2_UD8_Pos)

/* Register: FICR_NFC_TAGHEADER3 */
/* Description: Default header for NFC tag. Software can read these values to populate NFCID1_3RD_LAST, NFCID1_2ND_LAST, and NFCID1_LAST. */

/* Bits 31..24 : Unique identifier byte 15 */
#define FICR_NFC_TAGHEADER3_UD15_Pos (24UL)
#define FICR_NFC_TAGHEADER3_UD15_Msk (0xFFUL << FICR_NFC_TAGHEADER3_UD15_Pos)

/* Bits 23..16 : Unique identifier byte 14 */
#define FICR_NFC_TAGHEADER3_UD14_Pos (16UL)
#define FICR_NFC_TAGHEADER3_UD14_Msk (0xFFUL << FICR_NFC_TAGHEADER3_UD14_Pos)

/* Bits 15..8 : Unique identifier byte 13 */
#define FICR_NFC_TAGHEADER3_UD13_Pos (8UL)
#define FICR_NFC_TAGHEADER3_UD13_Msk (0xFFUL << FICR_NFC_TAGHEADER3_UD13_Pos)

/* Bits 7..0 : Unique identifier byte 12 */
#define FICR_NFC_TAGHEADER3_UD12_Pos (0UL)
#define FICR_NFC_TAGHEADER3_UD12_Msk (0xFFUL << FICR_NFC_TAGHEADER3_UD12_Pos)


/* Peripheral: GPIOTE */
/* Description: GPIO Tasks and Events */

/* Register: GPIOTE_TASKS_OUT */
/* Description: Description collection: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is configured in CONFIG[n].POLARITY. */

/* Bit 0 : Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is configured in CONFIG[n].POLARITY. */
#define GPIOTE_TASKS_OUT_TASKS_OUT_Pos (0UL)
#define GPIOTE_TASKS_OUT_TASKS_OUT_Msk (0x1UL << GPIOTE_TASKS_OUT_TASKS_OUT_Pos)
#define GPIOTE_TASKS_OUT_TASKS_OUT_Trigger (1UL)

/* Register: GPIOTE_TASKS_SET */
/* Description: Description collection: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it high. */

/* Bit 0 : Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it high. */
#define GPIOTE_TASKS_SET_TASKS_SET_Pos (0UL)
#define GPIOTE_TASKS_SET_TASKS_SET_Msk (0x1UL << GPIOTE_TASKS_SET_TASKS_SET_Pos)
#define GPIOTE_TASKS_SET_TASKS_SET_Trigger (1UL)

/* Register: GPIOTE_TASKS_CLR */
/* Description: Description collection: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it low. */

/* Bit 0 : Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it low. */
#define GPIOTE_TASKS_CLR_TASKS_CLR_Pos (0UL)
#define GPIOTE_TASKS_CLR_TASKS_CLR_Msk (0x1UL << GPIOTE_TASKS_CLR_TASKS_CLR_Pos)
#define GPIOTE_TASKS_CLR_TASKS_CLR_Trigger (1UL)

/* Register: GPIOTE_EVENTS_IN */
/* Description: Description collection: Event generated from pin specified in CONFIG[n].PSEL */

/* Bit 0 : Event generated from pin specified in CONFIG[n].PSEL */
#define GPIOTE_EVENTS_IN_EVENTS_IN_Pos (0UL)
#define GPIOTE_EVENTS_IN_EVENTS_IN_Msk (0x1UL << GPIOTE_EVENTS_IN_EVENTS_IN_Pos)
#define GPIOTE_EVENTS_IN_EVENTS_IN_NotGenerated (0UL)
#define GPIOTE_EVENTS_IN_EVENTS_IN_Generated (1UL)

/* Register: GPIOTE_EVENTS_PORT */
/* Description: Event generated from multiple input GPIO pins with SENSE mechanism enabled */

/* Bit 0 : Event generated from multiple input GPIO pins with SENSE mechanism enabled */
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Pos (0UL)
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Msk (0x1UL << GPIOTE_EVENTS_PORT_EVENTS_PORT_Pos)
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_NotGenerated (0UL)
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Generated (1UL)

/* Register: GPIOTE_INTENSET */
/* Description: Enable interrupt */

/* Bit 31 : Write '1' to enable interrupt for event PORT */
#define GPIOTE_INTENSET_PORT_Pos (31UL)
#define GPIOTE_INTENSET_PORT_Msk (0x1UL << GPIOTE_INTENSET_PORT_Pos)
#define GPIOTE_INTENSET_PORT_Disabled (0UL)
#define GPIOTE_INTENSET_PORT_Enabled (1UL)
#define GPIOTE_INTENSET_PORT_Set (1UL)

/* Bit 7 : Write '1' to enable interrupt for event IN[7] */
#define GPIOTE_INTENSET_IN7_Pos (7UL)
#define GPIOTE_INTENSET_IN7_Msk (0x1UL << GPIOTE_INTENSET_IN7_Pos)
#define GPIOTE_INTENSET_IN7_Disabled (0UL)
#define GPIOTE_INTENSET_IN7_Enabled (1UL)
#define GPIOTE_INTENSET_IN7_Set (1UL)

/* Bit 6 : Write '1' to enable interrupt for event IN[6] */
#define GPIOTE_INTENSET_IN6_Pos (6UL)
#define GPIOTE_INTENSET_IN6_Msk (0x1UL << GPIOTE_INTENSET_IN6_Pos)
#define GPIOTE_INTENSET_IN6_Disabled (0UL)
#define GPIOTE_INTENSET_IN6_Enabled (1UL)
#define GPIOTE_INTENSET_IN6_Set (1UL)

/* Bit 5 : Write '1' to enable interrupt for event IN[5] */
#define GPIOTE_INTENSET_IN5_Pos (5UL)
#define GPIOTE_INTENSET_IN5_Msk (0x1UL << GPIOTE_INTENSET_IN5_Pos)
#define GPIOTE_INTENSET_IN5_Disabled (0UL)
#define GPIOTE_INTENSET_IN5_Enabled (1UL)
#define GPIOTE_INTENSET_IN5_Set (1UL)

/* Bit 4 : Write '1' to enable interrupt for event IN[4] */
#define GPIOTE_INTENSET_IN4_Pos (4UL)
#define GPIOTE_INTENSET_IN4_Msk (0x1UL << GPIOTE_INTENSET_IN4_Pos)
#define GPIOTE_INTENSET_IN4_Disabled (0UL)
#define GPIOTE_INTENSET_IN4_Enabled (1UL)
#define GPIOTE_INTENSET_IN4_Set (1UL)

/* Bit 3 : Write '1' to enable interrupt for event IN[3] */
#define GPIOTE_INTENSET_IN3_Pos (3UL)
#define GPIOTE_INTENSET_IN3_Msk (0x1UL << GPIOTE_INTENSET_IN3_Pos)
#define GPIOTE_INTENSET_IN3_Disabled (0UL)
#define GPIOTE_INTENSET_IN3_Enabled (1UL)
#define GPIOTE_INTENSET_IN3_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event IN[2] */
#define GPIOTE_INTENSET_IN2_Pos (2UL)
#define GPIOTE_INTENSET_IN2_Msk (0x1UL << GPIOTE_INTENSET_IN2_Pos)
#define GPIOTE_INTENSET_IN2_Disabled (0UL)
#define GPIOTE_INTENSET_IN2_Enabled (1UL)
#define GPIOTE_INTENSET_IN2_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event IN[1] */
#define GPIOTE_INTENSET_IN1_Pos (1UL)
#define GPIOTE_INTENSET_IN1_Msk (0x1UL << GPIOTE_INTENSET_IN1_Pos)
#define GPIOTE_INTENSET_IN1_Disabled (0UL)
#define GPIOTE_INTENSET_IN1_Enabled (1UL)
#define GPIOTE_INTENSET_IN1_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event IN[0] */
#define GPIOTE_INTENSET_IN0_Pos (0UL)
#define GPIOTE_INTENSET_IN0_Msk (0x1UL << GPIOTE_INTENSET_IN0_Pos)
#define GPIOTE_INTENSET_IN0_Disabled (0UL)
#define GPIOTE_INTENSET_IN0_Enabled (1UL)
#define GPIOTE_INTENSET_IN0_Set (1UL)

/* Register: GPIOTE_INTENCLR */
/* Description: Disable interrupt */

/* Bit 31 : Write '1' to disable interrupt for event PORT */
#define GPIOTE_INTENCLR_PORT_Pos (31UL)
#define GPIOTE_INTENCLR_PORT_Msk (0x1UL << GPIOTE_INTENCLR_PORT_Pos)
#define GPIOTE_INTENCLR_PORT_Disabled (0UL)
#define GPIOTE_INTENCLR_PORT_Enabled (1UL)
#define GPIOTE_INTENCLR_PORT_Clear (1UL)

/* Bit 7 : Write '1' to disable interrupt for event IN[7] */
#define GPIOTE_INTENCLR_IN7_Pos (7UL)
#define GPIOTE_INTENCLR_IN7_Msk (0x1UL << GPIOTE_INTENCLR_IN7_Pos)
#define GPIOTE_INTENCLR_IN7_Disabled (0UL)
#define GPIOTE_INTENCLR_IN7_Enabled (1UL)
#define GPIOTE_INTENCLR_IN7_Clear (1UL)

/* Bit 6 : Write '1' to disable interrupt for event IN[6] */
#define GPIOTE_INTENCLR_IN6_Pos (6UL)
#define GPIOTE_INTENCLR_IN6_Msk (0x1UL << GPIOTE_INTENCLR_IN6_Pos)
#define GPIOTE_INTENCLR_IN6_Disabled (0UL)
#define GPIOTE_INTENCLR_IN6_Enabled (1UL)
#define GPIOTE_INTENCLR_IN6_Clear (1UL)

/* Bit 5 : Write '1' to disable interrupt for event IN[5] */
#define GPIOTE_INTENCLR_IN5_Pos (5UL)
#define GPIOTE_INTENCLR_IN5_Msk (0x1UL << GPIOTE_INTENCLR_IN5_Pos)
#define GPIOTE_INTENCLR_IN5_Disabled (0UL)
#define GPIOTE_INTENCLR_IN5_Enabled (1UL)
#define GPIOTE_INTENCLR_IN5_Clear (1UL)

/* Bit 4 : Write '1' to disable interrupt for event IN[4] */
#define GPIOTE_INTENCLR_IN4_Pos (4UL)
#define GPIOTE_INTENCLR_IN4_Msk (0x1UL << GPIOTE_INTENCLR_IN4_Pos)
#define GPIOTE_INTENCLR_IN4_Disabled (0UL)
#define GPIOTE_INTENCLR_IN4_Enabled (1UL)
#define GPIOTE_INTENCLR_IN4_Clear (1UL)

/* Bit 3 : Write '1' to disable interrupt for event IN[3] */
#define GPIOTE_INTENCLR_IN3_Pos (3UL)
#define GPIOTE_INTENCLR_IN3_Msk (0x1UL << GPIOTE_INTENCLR_IN3_Pos)
#define GPIOTE_INTENCLR_IN3_Disabled (0UL)
#define GPIOTE_INTENCLR_IN3_Enabled (1UL)
#define GPIOTE_INTENCLR_IN3_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event IN[2] */
#define GPIOTE_INTENCLR_IN2_Pos (2UL)
#define GPIOTE_INTENCLR_IN2_Msk (0x1UL << GPIOTE_INTENCLR_IN2_Pos)
#define GPIOTE_INTENCLR_IN2_Disabled (0UL)
#define GPIOTE_INTENCLR_IN2_Enabled (1UL)
#define GPIOTE_INTENCLR_IN2_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event IN[1] */
#define GPIOTE_INTENCLR_IN1_Pos (1UL)
#define GPIOTE_INTENCLR_IN1_Msk (0x1UL << GPIOTE_INTENCLR_IN1_Pos)
#define GPIOTE_INTENCLR_IN1_Disabled (0UL)
#define GPIOTE_INTENCLR_IN1_Enabled (1UL)
#define GPIOTE_INTENCLR_IN1_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event IN[0] */
#define GPIOTE_INTENCLR_IN0_Pos (0UL)
#define GPIOTE_INTENCLR_IN0_Msk (0x1UL << GPIOTE_INTENCLR_IN0_Pos)
#define GPIOTE_INTENCLR_IN0_Disabled (0UL)
#define GPIOTE_INTENCLR_IN0_Enabled (1UL)
#define GPIOTE_INTENCLR_IN0_Clear (1UL)

/* Register: GPIOTE_CONFIG */
/* Description: Description collection: Configuration for OUT[n], SET[n], and CLR[n] tasks and IN[n] event */

/* Bit 20 : When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect. */
#define GPIOTE_CONFIG_OUTINIT_Pos (20UL)
#define GPIOTE_CONFIG_OUTINIT_Msk (0x1UL << GPIOTE_CONFIG_OUTINIT_Pos)
#define GPIOTE_CONFIG_OUTINIT_Low (0UL)
#define GPIOTE_CONFIG_OUTINIT_High (1UL)

/* Bits 17..16 : When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event. */
#define GPIOTE_CONFIG_POLARITY_Pos (16UL)
#define GPIOTE_CONFIG_POLARITY_Msk (0x3UL << GPIOTE_CONFIG_POLARITY_Pos)
#define GPIOTE_CONFIG_POLARITY_None (0UL)
#define GPIOTE_CONFIG_POLARITY_LoToHi (1UL)
#define GPIOTE_CONFIG_POLARITY_HiToLo (2UL)
#define GPIOTE_CONFIG_POLARITY_Toggle (3UL)

/* Bit 13 : Port number */
#define GPIOTE_CONFIG_PORT_Pos (13UL)
#define GPIOTE_CONFIG_PORT_Msk (0x1UL << GPIOTE_CONFIG_PORT_Pos)

/* Bits 12..8 : GPIO number associated with SET[n], CLR[n], and OUT[n] tasks and IN[n] event */
#define GPIOTE_CONFIG_PSEL_Pos (8UL)
#define GPIOTE_CONFIG_PSEL_Msk (0x1FUL << GPIOTE_CONFIG_PSEL_Pos)

/* Bits 1..0 : Mode */
#define GPIOTE_CONFIG_MODE_Pos (0UL)
#define GPIOTE_CONFIG_MODE_Msk (0x3UL << GPIOTE_CONFIG_MODE_Pos)
#define GPIOTE_CONFIG_MODE_Disabled (0UL)
#define GPIOTE_CONFIG_MODE_Event (1UL)
#define GPIOTE_CONFIG_MODE_Task (3UL)


/* Peripheral: I2S */
/* Description: Inter-IC Sound */

/* Register: I2S_TASKS_START */
/* Description: Starts continuous I2S transfer. Also starts MCK generator when this is enabled. */

/* Bit 0 : Starts continuous I2S transfer. Also starts MCK generator when this is enabled. */
#define I2S_TASKS_START_TASKS_START_Pos (0UL)
#define I2S_TASKS_START_TASKS_START_Msk (0x1UL << I2S_TASKS_START_TASKS_START_Pos)
#define I2S_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: I2S_TASKS_STOP */
/* Description: Stops I2S transfer. Also stops MCK generator. Triggering this task will cause the STOPPED event to be generated. */

/* Bit 0 : Stops I2S transfer. Also stops MCK generator. Triggering this task will cause the STOPPED event to be generated. */
#define I2S_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define I2S_TASKS_STOP_TASKS_STOP_Msk (0x1UL << I2S_TASKS_STOP_TASKS_STOP_Pos)
#define I2S_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: I2S_EVENTS_RXPTRUPD */
/* Description: The RXD.PTR register has been copied to internal double-buffers.
      When the I2S module is started and RX is enabled, this event will be generated for every RXTXD.MAXCNT words that are received on the SDIN pin. */

/* Bit 0 : The RXD.PTR register has been copied to internal double-buffers.
      When the I2S module is started and RX is enabled, this event will be generated for every RXTXD.MAXCNT words that are received on the SDIN pin. */
#define I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_Pos (0UL)
#define I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_Msk (0x1UL << I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_Pos)
#define I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_NotGenerated (0UL)
#define I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_Generated (1UL)

/* Register: I2S_EVENTS_STOPPED */
/* Description: I2S transfer stopped. */

/* Bit 0 : I2S transfer stopped. */
#define I2S_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define I2S_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << I2S_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define I2S_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define I2S_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)

/* Register: I2S_EVENTS_TXPTRUPD */
/* Description: The TDX.PTR register has been copied to internal double-buffers.
      When the I2S module is started and TX is enabled, this event will be generated for every RXTXD.MAXCNT words that are sent on the SDOUT pin. */

/* Bit 0 : The TDX.PTR register has been copied to internal double-buffers.
      When the I2S module is started and TX is enabled, this event will be generated for every RXTXD.MAXCNT words that are sent on the SDOUT pin. */
#define I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_Pos (0UL)
#define I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_Msk (0x1UL << I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_Pos)
#define I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_NotGenerated (0UL)
#define I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_Generated (1UL)

/* Register: I2S_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 5 : Enable or disable interrupt for event TXPTRUPD */
#define I2S_INTEN_TXPTRUPD_Pos (5UL)
#define I2S_INTEN_TXPTRUPD_Msk (0x1UL << I2S_INTEN_TXPTRUPD_Pos)
#define I2S_INTEN_TXPTRUPD_Disabled (0UL)
#define I2S_INTEN_TXPTRUPD_Enabled (1UL)

/* Bit 2 : Enable or disable interrupt for event STOPPED */
#define I2S_INTEN_STOPPED_Pos (2UL)
#define I2S_INTEN_STOPPED_Msk (0x1UL << I2S_INTEN_STOPPED_Pos)
#define I2S_INTEN_STOPPED_Disabled (0UL)
#define I2S_INTEN_STOPPED_Enabled (1UL)

/* Bit 1 : Enable or disable interrupt for event RXPTRUPD */
#define I2S_INTEN_RXPTRUPD_Pos (1UL)
#define I2S_INTEN_RXPTRUPD_Msk (0x1UL << I2S_INTEN_RXPTRUPD_Pos)
#define I2S_INTEN_RXPTRUPD_Disabled (0UL)
#define I2S_INTEN_RXPTRUPD_Enabled (1UL)

/* Register: I2S_INTENSET */
/* Description: Enable interrupt */

/* Bit 5 : Write '1' to enable interrupt for event TXPTRUPD */
#define I2S_INTENSET_TXPTRUPD_Pos (5UL)
#define I2S_INTENSET_TXPTRUPD_Msk (0x1UL << I2S_INTENSET_TXPTRUPD_Pos)
#define I2S_INTENSET_TXPTRUPD_Disabled (0UL)
#define I2S_INTENSET_TXPTRUPD_Enabled (1UL)
#define I2S_INTENSET_TXPTRUPD_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event STOPPED */
#define I2S_INTENSET_STOPPED_Pos (2UL)
#define I2S_INTENSET_STOPPED_Msk (0x1UL << I2S_INTENSET_STOPPED_Pos)
#define I2S_INTENSET_STOPPED_Disabled (0UL)
#define I2S_INTENSET_STOPPED_Enabled (1UL)
#define I2S_INTENSET_STOPPED_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event RXPTRUPD */
#define I2S_INTENSET_RXPTRUPD_Pos (1UL)
#define I2S_INTENSET_RXPTRUPD_Msk (0x1UL << I2S_INTENSET_RXPTRUPD_Pos)
#define I2S_INTENSET_RXPTRUPD_Disabled (0UL)
#define I2S_INTENSET_RXPTRUPD_Enabled (1UL)
#define I2S_INTENSET_RXPTRUPD_Set (1UL)

/* Register: I2S_INTENCLR */
/* Description: Disable interrupt */

/* Bit 5 : Write '1' to disable interrupt for event TXPTRUPD */
#define I2S_INTENCLR_TXPTRUPD_Pos (5UL)
#define I2S_INTENCLR_TXPTRUPD_Msk (0x1UL << I2S_INTENCLR_TXPTRUPD_Pos)
#define I2S_INTENCLR_TXPTRUPD_Disabled (0UL)
#define I2S_INTENCLR_TXPTRUPD_Enabled (1UL)
#define I2S_INTENCLR_TXPTRUPD_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event STOPPED */
#define I2S_INTENCLR_STOPPED_Pos (2UL)
#define I2S_INTENCLR_STOPPED_Msk (0x1UL << I2S_INTENCLR_STOPPED_Pos)
#define I2S_INTENCLR_STOPPED_Disabled (0UL)
#define I2S_INTENCLR_STOPPED_Enabled (1UL)
#define I2S_INTENCLR_STOPPED_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event RXPTRUPD */
#define I2S_INTENCLR_RXPTRUPD_Pos (1UL)
#define I2S_INTENCLR_RXPTRUPD_Msk (0x1UL << I2S_INTENCLR_RXPTRUPD_Pos)
#define I2S_INTENCLR_RXPTRUPD_Disabled (0UL)
#define I2S_INTENCLR_RXPTRUPD_Enabled (1UL)
#define I2S_INTENCLR_RXPTRUPD_Clear (1UL)

/* Register: I2S_ENABLE */
/* Description: Enable I2S module. */

/* Bit 0 : Enable I2S module. */
#define I2S_ENABLE_ENABLE_Pos (0UL)
#define I2S_ENABLE_ENABLE_Msk (0x1UL << I2S_ENABLE_ENABLE_Pos)
#define I2S_ENABLE_ENABLE_Disabled (0UL)
#define I2S_ENABLE_ENABLE_Enabled (1UL)

/* Register: I2S_CONFIG_MODE */
/* Description: I2S mode. */

/* Bit 0 : I2S mode. */
#define I2S_CONFIG_MODE_MODE_Pos (0UL)
#define I2S_CONFIG_MODE_MODE_Msk (0x1UL << I2S_CONFIG_MODE_MODE_Pos)
#define I2S_CONFIG_MODE_MODE_Master (0UL)
#define I2S_CONFIG_MODE_MODE_Slave (1UL)

/* Register: I2S_CONFIG_RXEN */
/* Description: Reception (RX) enable. */

/* Bit 0 : Reception (RX) enable. */
#define I2S_CONFIG_RXEN_RXEN_Pos (0UL)
#define I2S_CONFIG_RXEN_RXEN_Msk (0x1UL << I2S_CONFIG_RXEN_RXEN_Pos)
#define I2S_CONFIG_RXEN_RXEN_Disabled (0UL)
#define I2S_CONFIG_RXEN_RXEN_Enabled (1UL)

/* Register: I2S_CONFIG_TXEN */
/* Description: Transmission (TX) enable. */

/* Bit 0 : Transmission (TX) enable. */
#define I2S_CONFIG_TXEN_TXEN_Pos (0UL)
#define I2S_CONFIG_TXEN_TXEN_Msk (0x1UL << I2S_CONFIG_TXEN_TXEN_Pos)
#define I2S_CONFIG_TXEN_TXEN_Disabled (0UL)
#define I2S_CONFIG_TXEN_TXEN_Enabled (1UL)

/* Register: I2S_CONFIG_MCKEN */
/* Description: Master clock generator enable. */

/* Bit 0 : Master clock generator enable. */
#define I2S_CONFIG_MCKEN_MCKEN_Pos (0UL)
#define I2S_CONFIG_MCKEN_MCKEN_Msk (0x1UL << I2S_CONFIG_MCKEN_MCKEN_Pos)
#define I2S_CONFIG_MCKEN_MCKEN_Disabled (0UL)
#define I2S_CONFIG_MCKEN_MCKEN_Enabled (1UL)

/* Register: I2S_CONFIG_MCKFREQ */
/* Description: Master clock generator frequency. */

/* Bits 31..0 : Master clock generator frequency. */
#define I2S_CONFIG_MCKFREQ_MCKFREQ_Pos (0UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_Msk (0xFFFFFFFFUL << I2S_CONFIG_MCKFREQ_MCKFREQ_Pos)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV125 (0x020C0000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV63 (0x04100000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV42 (0x06000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV32 (0x08000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV31 (0x08400000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV30 (0x08800000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV23 (0x0B000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV21 (0x0C000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV16 (0x10000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV15 (0x11000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV11 (0x16000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV10 (0x18000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV8 (0x20000000UL)

/* Register: I2S_CONFIG_RATIO */
/* Description: MCK / LRCK ratio. */

/* Bits 3..0 : MCK / LRCK ratio. */
#define I2S_CONFIG_RATIO_RATIO_Pos (0UL)
#define I2S_CONFIG_RATIO_RATIO_Msk (0xFUL << I2S_CONFIG_RATIO_RATIO_Pos)
#define I2S_CONFIG_RATIO_RATIO_32X (0UL)
#define I2S_CONFIG_RATIO_RATIO_48X (1UL)
#define I2S_CONFIG_RATIO_RATIO_64X (2UL)
#define I2S_CONFIG_RATIO_RATIO_96X (3UL)
#define I2S_CONFIG_RATIO_RATIO_128X (4UL)
#define I2S_CONFIG_RATIO_RATIO_192X (5UL)
#define I2S_CONFIG_RATIO_RATIO_256X (6UL)
#define I2S_CONFIG_RATIO_RATIO_384X (7UL)
#define I2S_CONFIG_RATIO_RATIO_512X (8UL)

/* Register: I2S_CONFIG_SWIDTH */
/* Description: Sample width. */

/* Bits 1..0 : Sample width. */
#define I2S_CONFIG_SWIDTH_SWIDTH_Pos (0UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_Msk (0x3UL << I2S_CONFIG_SWIDTH_SWIDTH_Pos)
#define I2S_CONFIG_SWIDTH_SWIDTH_8Bit (0UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_16Bit (1UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_24Bit (2UL)

/* Register: I2S_CONFIG_ALIGN */
/* Description: Alignment of sample within a frame. */

/* Bit 0 : Alignment of sample within a frame. */
#define I2S_CONFIG_ALIGN_ALIGN_Pos (0UL)
#define I2S_CONFIG_ALIGN_ALIGN_Msk (0x1UL << I2S_CONFIG_ALIGN_ALIGN_Pos)
#define I2S_CONFIG_ALIGN_ALIGN_Left (0UL)
#define I2S_CONFIG_ALIGN_ALIGN_Right (1UL)

/* Register: I2S_CONFIG_FORMAT */
/* Description: Frame format. */

/* Bit 0 : Frame format. */
#define I2S_CONFIG_FORMAT_FORMAT_Pos (0UL)
#define I2S_CONFIG_FORMAT_FORMAT_Msk (0x1UL << I2S_CONFIG_FORMAT_FORMAT_Pos)
#define I2S_CONFIG_FORMAT_FORMAT_I2S (0UL)
#define I2S_CONFIG_FORMAT_FORMAT_Aligned (1UL)

/* Register: I2S_CONFIG_CHANNELS */
/* Description: Enable channels. */

/* Bits 1..0 : Enable channels. */
#define I2S_CONFIG_CHANNELS_CHANNELS_Pos (0UL)
#define I2S_CONFIG_CHANNELS_CHANNELS_Msk (0x3UL << I2S_CONFIG_CHANNELS_CHANNELS_Pos)
#define I2S_CONFIG_CHANNELS_CHANNELS_Stereo (0UL)
#define I2S_CONFIG_CHANNELS_CHANNELS_Left (1UL)
#define I2S_CONFIG_CHANNELS_CHANNELS_Right (2UL)

/* Register: I2S_RXD_PTR */
/* Description: Receive buffer RAM start address. */

/* Bits 31..0 : Receive buffer Data RAM start address. When receiving, words containing samples will be written to this address. This address is a word aligned Data RAM address. */
#define I2S_RXD_PTR_PTR_Pos (0UL)
#define I2S_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << I2S_RXD_PTR_PTR_Pos)

/* Register: I2S_TXD_PTR */
/* Description: Transmit buffer RAM start address. */

/* Bits 31..0 : Transmit buffer Data RAM start address. When transmitting, words containing samples will be fetched from this address. This address is a word aligned Data RAM address. */
#define I2S_TXD_PTR_PTR_Pos (0UL)
#define I2S_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << I2S_TXD_PTR_PTR_Pos)

/* Register: I2S_RXTXD_MAXCNT */
/* Description: Size of RXD and TXD buffers. */

/* Bits 13..0 : Size of RXD and TXD buffers in number of 32 bit words. */
#define I2S_RXTXD_MAXCNT_MAXCNT_Pos (0UL)
#define I2S_RXTXD_MAXCNT_MAXCNT_Msk (0x3FFFUL << I2S_RXTXD_MAXCNT_MAXCNT_Pos)

/* Register: I2S_PSEL_MCK */
/* Description: Pin select for MCK signal. */

/* Bit 31 : Connection */
#define I2S_PSEL_MCK_CONNECT_Pos (31UL)
#define I2S_PSEL_MCK_CONNECT_Msk (0x1UL << I2S_PSEL_MCK_CONNECT_Pos)
#define I2S_PSEL_MCK_CONNECT_Connected (0UL)
#define I2S_PSEL_MCK_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define I2S_PSEL_MCK_PORT_Pos (5UL)
#define I2S_PSEL_MCK_PORT_Msk (0x1UL << I2S_PSEL_MCK_PORT_Pos)

/* Bits 4..0 : Pin number */
#define I2S_PSEL_MCK_PIN_Pos (0UL)
#define I2S_PSEL_MCK_PIN_Msk (0x1FUL << I2S_PSEL_MCK_PIN_Pos)

/* Register: I2S_PSEL_SCK */
/* Description: Pin select for SCK signal. */

/* Bit 31 : Connection */
#define I2S_PSEL_SCK_CONNECT_Pos (31UL)
#define I2S_PSEL_SCK_CONNECT_Msk (0x1UL << I2S_PSEL_SCK_CONNECT_Pos)
#define I2S_PSEL_SCK_CONNECT_Connected (0UL)
#define I2S_PSEL_SCK_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define I2S_PSEL_SCK_PORT_Pos (5UL)
#define I2S_PSEL_SCK_PORT_Msk (0x1UL << I2S_PSEL_SCK_PORT_Pos)

/* Bits 4..0 : Pin number */
#define I2S_PSEL_SCK_PIN_Pos (0UL)
#define I2S_PSEL_SCK_PIN_Msk (0x1FUL << I2S_PSEL_SCK_PIN_Pos)

/* Register: I2S_PSEL_LRCK */
/* Description: Pin select for LRCK signal. */

/* Bit 31 : Connection */
#define I2S_PSEL_LRCK_CONNECT_Pos (31UL)
#define I2S_PSEL_LRCK_CONNECT_Msk (0x1UL << I2S_PSEL_LRCK_CONNECT_Pos)
#define I2S_PSEL_LRCK_CONNECT_Connected (0UL)
#define I2S_PSEL_LRCK_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define I2S_PSEL_LRCK_PORT_Pos (5UL)
#define I2S_PSEL_LRCK_PORT_Msk (0x1UL << I2S_PSEL_LRCK_PORT_Pos)

/* Bits 4..0 : Pin number */
#define I2S_PSEL_LRCK_PIN_Pos (0UL)
#define I2S_PSEL_LRCK_PIN_Msk (0x1FUL << I2S_PSEL_LRCK_PIN_Pos)

/* Register: I2S_PSEL_SDIN */
/* Description: Pin select for SDIN signal. */

/* Bit 31 : Connection */
#define I2S_PSEL_SDIN_CONNECT_Pos (31UL)
#define I2S_PSEL_SDIN_CONNECT_Msk (0x1UL << I2S_PSEL_SDIN_CONNECT_Pos)
#define I2S_PSEL_SDIN_CONNECT_Connected (0UL)
#define I2S_PSEL_SDIN_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define I2S_PSEL_SDIN_PORT_Pos (5UL)
#define I2S_PSEL_SDIN_PORT_Msk (0x1UL << I2S_PSEL_SDIN_PORT_Pos)

/* Bits 4..0 : Pin number */
#define I2S_PSEL_SDIN_PIN_Pos (0UL)
#define I2S_PSEL_SDIN_PIN_Msk (0x1FUL << I2S_PSEL_SDIN_PIN_Pos)

/* Register: I2S_PSEL_SDOUT */
/* Description: Pin select for SDOUT signal. */

/* Bit 31 : Connection */
#define I2S_PSEL_SDOUT_CONNECT_Pos (31UL)
#define I2S_PSEL_SDOUT_CONNECT_Msk (0x1UL << I2S_PSEL_SDOUT_CONNECT_Pos)
#define I2S_PSEL_SDOUT_CONNECT_Connected (0UL)
#define I2S_PSEL_SDOUT_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define I2S_PSEL_SDOUT_PORT_Pos (5UL)
#define I2S_PSEL_SDOUT_PORT_Msk (0x1UL << I2S_PSEL_SDOUT_PORT_Pos)

/* Bits 4..0 : Pin number */
#define I2S_PSEL_SDOUT_PIN_Pos (0UL)
#define I2S_PSEL_SDOUT_PIN_Msk (0x1FUL << I2S_PSEL_SDOUT_PIN_Pos)


/* Peripheral: LPCOMP */
/* Description: Low-power comparator */

/* Register: LPCOMP_TASKS_START */
/* Description: Start comparator */

/* Bit 0 : Start comparator */
#define LPCOMP_TASKS_START_TASKS_START_Pos (0UL)
#define LPCOMP_TASKS_START_TASKS_START_Msk (0x1UL << LPCOMP_TASKS_START_TASKS_START_Pos)
#define LPCOMP_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: LPCOMP_TASKS_STOP */
/* Description: Stop comparator */

/* Bit 0 : Stop comparator */
#define LPCOMP_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define LPCOMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << LPCOMP_TASKS_STOP_TASKS_STOP_Pos)
#define LPCOMP_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: LPCOMP_TASKS_SAMPLE */
/* Description: Sample comparator value */

/* Bit 0 : Sample comparator value */
#define LPCOMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL)
#define LPCOMP_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << LPCOMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos)
#define LPCOMP_TASKS_SAMPLE_TASKS_SAMPLE_Trigger (1UL)

/* Register: LPCOMP_EVENTS_READY */
/* Description: LPCOMP is ready and output is valid */

/* Bit 0 : LPCOMP is ready and output is valid */
#define LPCOMP_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define LPCOMP_EVENTS_READY_EVENTS_READY_Msk (0x1UL << LPCOMP_EVENTS_READY_EVENTS_READY_Pos)
#define LPCOMP_EVENTS_READY_EVENTS_READY_NotGenerated (0UL)
#define LPCOMP_EVENTS_READY_EVENTS_READY_Generated (1UL)

/* Register: LPCOMP_EVENTS_DOWN */
/* Description: Downward crossing */

/* Bit 0 : Downward crossing */
#define LPCOMP_EVENTS_DOWN_EVENTS_DOWN_Pos (0UL)
#define LPCOMP_EVENTS_DOWN_EVENTS_DOWN_Msk (0x1UL << LPCOMP_EVENTS_DOWN_EVENTS_DOWN_Pos)
#define LPCOMP_EVENTS_DOWN_EVENTS_DOWN_NotGenerated (0UL)
#define LPCOMP_EVENTS_DOWN_EVENTS_DOWN_Generated (1UL)

/* Register: LPCOMP_EVENTS_UP */
/* Description: Upward crossing */

/* Bit 0 : Upward crossing */
#define LPCOMP_EVENTS_UP_EVENTS_UP_Pos (0UL)
#define LPCOMP_EVENTS_UP_EVENTS_UP_Msk (0x1UL << LPCOMP_EVENTS_UP_EVENTS_UP_Pos)
#define LPCOMP_EVENTS_UP_EVENTS_UP_NotGenerated (0UL)
#define LPCOMP_EVENTS_UP_EVENTS_UP_Generated (1UL)

/* Register: LPCOMP_EVENTS_CROSS */
/* Description: Downward or upward crossing */

/* Bit 0 : Downward or upward crossing */
#define LPCOMP_EVENTS_CROSS_EVENTS_CROSS_Pos (0UL)
#define LPCOMP_EVENTS_CROSS_EVENTS_CROSS_Msk (0x1UL << LPCOMP_EVENTS_CROSS_EVENTS_CROSS_Pos)
#define LPCOMP_EVENTS_CROSS_EVENTS_CROSS_NotGenerated (0UL)
#define LPCOMP_EVENTS_CROSS_EVENTS_CROSS_Generated (1UL)

/* Register: LPCOMP_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 4 : Shortcut between event CROSS and task STOP */
#define LPCOMP_SHORTS_CROSS_STOP_Pos (4UL)
#define LPCOMP_SHORTS_CROSS_STOP_Msk (0x1UL << LPCOMP_SHORTS_CROSS_STOP_Pos)
#define LPCOMP_SHORTS_CROSS_STOP_Disabled (0UL)
#define LPCOMP_SHORTS_CROSS_STOP_Enabled (1UL)

/* Bit 3 : Shortcut between event UP and task STOP */
#define LPCOMP_SHORTS_UP_STOP_Pos (3UL)
#define LPCOMP_SHORTS_UP_STOP_Msk (0x1UL << LPCOMP_SHORTS_UP_STOP_Pos)
#define LPCOMP_SHORTS_UP_STOP_Disabled (0UL)
#define LPCOMP_SHORTS_UP_STOP_Enabled (1UL)

/* Bit 2 : Shortcut between event DOWN and task STOP */
#define LPCOMP_SHORTS_DOWN_STOP_Pos (2UL)
#define LPCOMP_SHORTS_DOWN_STOP_Msk (0x1UL << LPCOMP_SHORTS_DOWN_STOP_Pos)
#define LPCOMP_SHORTS_DOWN_STOP_Disabled (0UL)
#define LPCOMP_SHORTS_DOWN_STOP_Enabled (1UL)

/* Bit 1 : Shortcut between event READY and task STOP */
#define LPCOMP_SHORTS_READY_STOP_Pos (1UL)
#define LPCOMP_SHORTS_READY_STOP_Msk (0x1UL << LPCOMP_SHORTS_READY_STOP_Pos)
#define LPCOMP_SHORTS_READY_STOP_Disabled (0UL)
#define LPCOMP_SHORTS_READY_STOP_Enabled (1UL)

/* Bit 0 : Shortcut between event READY and task SAMPLE */
#define LPCOMP_SHORTS_READY_SAMPLE_Pos (0UL)
#define LPCOMP_SHORTS_READY_SAMPLE_Msk (0x1UL << LPCOMP_SHORTS_READY_SAMPLE_Pos)
#define LPCOMP_SHORTS_READY_SAMPLE_Disabled (0UL)
#define LPCOMP_SHORTS_READY_SAMPLE_Enabled (1UL)

/* Register: LPCOMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 3 : Write '1' to enable interrupt for event CROSS */
#define LPCOMP_INTENSET_CROSS_Pos (3UL)
#define LPCOMP_INTENSET_CROSS_Msk (0x1UL << LPCOMP_INTENSET_CROSS_Pos)
#define LPCOMP_INTENSET_CROSS_Disabled (0UL)
#define LPCOMP_INTENSET_CROSS_Enabled (1UL)
#define LPCOMP_INTENSET_CROSS_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event UP */
#define LPCOMP_INTENSET_UP_Pos (2UL)
#define LPCOMP_INTENSET_UP_Msk (0x1UL << LPCOMP_INTENSET_UP_Pos)
#define LPCOMP_INTENSET_UP_Disabled (0UL)
#define LPCOMP_INTENSET_UP_Enabled (1UL)
#define LPCOMP_INTENSET_UP_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event DOWN */
#define LPCOMP_INTENSET_DOWN_Pos (1UL)
#define LPCOMP_INTENSET_DOWN_Msk (0x1UL << LPCOMP_INTENSET_DOWN_Pos)
#define LPCOMP_INTENSET_DOWN_Disabled (0UL)
#define LPCOMP_INTENSET_DOWN_Enabled (1UL)
#define LPCOMP_INTENSET_DOWN_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define LPCOMP_INTENSET_READY_Pos (0UL)
#define LPCOMP_INTENSET_READY_Msk (0x1UL << LPCOMP_INTENSET_READY_Pos)
#define LPCOMP_INTENSET_READY_Disabled (0UL)
#define LPCOMP_INTENSET_READY_Enabled (1UL)
#define LPCOMP_INTENSET_READY_Set (1UL)

/* Register: LPCOMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 3 : Write '1' to disable interrupt for event CROSS */
#define LPCOMP_INTENCLR_CROSS_Pos (3UL)
#define LPCOMP_INTENCLR_CROSS_Msk (0x1UL << LPCOMP_INTENCLR_CROSS_Pos)
#define LPCOMP_INTENCLR_CROSS_Disabled (0UL)
#define LPCOMP_INTENCLR_CROSS_Enabled (1UL)
#define LPCOMP_INTENCLR_CROSS_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event UP */
#define LPCOMP_INTENCLR_UP_Pos (2UL)
#define LPCOMP_INTENCLR_UP_Msk (0x1UL << LPCOMP_INTENCLR_UP_Pos)
#define LPCOMP_INTENCLR_UP_Disabled (0UL)
#define LPCOMP_INTENCLR_UP_Enabled (1UL)
#define LPCOMP_INTENCLR_UP_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event DOWN */
#define LPCOMP_INTENCLR_DOWN_Pos (1UL)
#define LPCOMP_INTENCLR_DOWN_Msk (0x1UL << LPCOMP_INTENCLR_DOWN_Pos)
#define LPCOMP_INTENCLR_DOWN_Disabled (0UL)
#define LPCOMP_INTENCLR_DOWN_Enabled (1UL)
#define LPCOMP_INTENCLR_DOWN_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event READY */
#define LPCOMP_INTENCLR_READY_Pos (0UL)
#define LPCOMP_INTENCLR_READY_Msk (0x1UL << LPCOMP_INTENCLR_READY_Pos)
#define LPCOMP_INTENCLR_READY_Disabled (0UL)
#define LPCOMP_INTENCLR_READY_Enabled (1UL)
#define LPCOMP_INTENCLR_READY_Clear (1UL)

/* Register: LPCOMP_RESULT */
/* Description: Compare result */

/* Bit 0 : Result of last compare. Decision point SAMPLE task. */
#define LPCOMP_RESULT_RESULT_Pos (0UL)
#define LPCOMP_RESULT_RESULT_Msk (0x1UL << LPCOMP_RESULT_RESULT_Pos)
#define LPCOMP_RESULT_RESULT_Below (0UL)
#define LPCOMP_RESULT_RESULT_Above (1UL)

/* Register: LPCOMP_ENABLE */
/* Description: Enable LPCOMP */

/* Bits 1..0 : Enable or disable LPCOMP */
#define LPCOMP_ENABLE_ENABLE_Pos (0UL)
#define LPCOMP_ENABLE_ENABLE_Msk (0x3UL << LPCOMP_ENABLE_ENABLE_Pos)
#define LPCOMP_ENABLE_ENABLE_Disabled (0UL)
#define LPCOMP_ENABLE_ENABLE_Enabled (1UL)

/* Register: LPCOMP_PSEL */
/* Description: Input pin select */

/* Bits 2..0 : Analog pin select */
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
/* Description: Reference select */

/* Bits 3..0 : Reference select */
#define LPCOMP_REFSEL_REFSEL_Pos (0UL)
#define LPCOMP_REFSEL_REFSEL_Msk (0xFUL << LPCOMP_REFSEL_REFSEL_Pos)
#define LPCOMP_REFSEL_REFSEL_Ref1_8Vdd (0UL)
#define LPCOMP_REFSEL_REFSEL_Ref2_8Vdd (1UL)
#define LPCOMP_REFSEL_REFSEL_Ref3_8Vdd (2UL)
#define LPCOMP_REFSEL_REFSEL_Ref4_8Vdd (3UL)
#define LPCOMP_REFSEL_REFSEL_Ref5_8Vdd (4UL)
#define LPCOMP_REFSEL_REFSEL_Ref6_8Vdd (5UL)
#define LPCOMP_REFSEL_REFSEL_Ref7_8Vdd (6UL)
#define LPCOMP_REFSEL_REFSEL_ARef (7UL)
#define LPCOMP_REFSEL_REFSEL_Ref1_16Vdd (8UL)
#define LPCOMP_REFSEL_REFSEL_Ref3_16Vdd (9UL)
#define LPCOMP_REFSEL_REFSEL_Ref5_16Vdd (10UL)
#define LPCOMP_REFSEL_REFSEL_Ref7_16Vdd (11UL)
#define LPCOMP_REFSEL_REFSEL_Ref9_16Vdd (12UL)
#define LPCOMP_REFSEL_REFSEL_Ref11_16Vdd (13UL)
#define LPCOMP_REFSEL_REFSEL_Ref13_16Vdd (14UL)
#define LPCOMP_REFSEL_REFSEL_Ref15_16Vdd (15UL)

/* Register: LPCOMP_EXTREFSEL */
/* Description: External reference select */

/* Bit 0 : External analog reference select */
#define LPCOMP_EXTREFSEL_EXTREFSEL_Pos (0UL)
#define LPCOMP_EXTREFSEL_EXTREFSEL_Msk (0x1UL << LPCOMP_EXTREFSEL_EXTREFSEL_Pos)
#define LPCOMP_EXTREFSEL_EXTREFSEL_AnalogReference0 (0UL)
#define LPCOMP_EXTREFSEL_EXTREFSEL_AnalogReference1 (1UL)

/* Register: LPCOMP_ANADETECT */
/* Description: Analog detect configuration */

/* Bits 1..0 : Analog detect configuration */
#define LPCOMP_ANADETECT_ANADETECT_Pos (0UL)
#define LPCOMP_ANADETECT_ANADETECT_Msk (0x3UL << LPCOMP_ANADETECT_ANADETECT_Pos)
#define LPCOMP_ANADETECT_ANADETECT_Cross (0UL)
#define LPCOMP_ANADETECT_ANADETECT_Up (1UL)
#define LPCOMP_ANADETECT_ANADETECT_Down (2UL)

/* Register: LPCOMP_HYST */
/* Description: Comparator hysteresis enable */

/* Bit 0 : Comparator hysteresis enable */
#define LPCOMP_HYST_HYST_Pos (0UL)
#define LPCOMP_HYST_HYST_Msk (0x1UL << LPCOMP_HYST_HYST_Pos)
#define LPCOMP_HYST_HYST_Disabled (0UL)
#define LPCOMP_HYST_HYST_Enabled (1UL)


/* Peripheral: MWU */
/* Description: Memory Watch Unit */

/* Register: MWU_EVENTS_REGION_WA */
/* Description: Description cluster: Write access to region n detected */

/* Bit 0 : Write access to region n detected */
#define MWU_EVENTS_REGION_WA_WA_Pos (0UL)
#define MWU_EVENTS_REGION_WA_WA_Msk (0x1UL << MWU_EVENTS_REGION_WA_WA_Pos)
#define MWU_EVENTS_REGION_WA_WA_NotGenerated (0UL)
#define MWU_EVENTS_REGION_WA_WA_Generated (1UL)

/* Register: MWU_EVENTS_REGION_RA */
/* Description: Description cluster: Read access to region n detected */

/* Bit 0 : Read access to region n detected */
#define MWU_EVENTS_REGION_RA_RA_Pos (0UL)
#define MWU_EVENTS_REGION_RA_RA_Msk (0x1UL << MWU_EVENTS_REGION_RA_RA_Pos)
#define MWU_EVENTS_REGION_RA_RA_NotGenerated (0UL)
#define MWU_EVENTS_REGION_RA_RA_Generated (1UL)

/* Register: MWU_EVENTS_PREGION_WA */
/* Description: Description cluster: Write access to peripheral region n detected */

/* Bit 0 : Write access to peripheral region n detected */
#define MWU_EVENTS_PREGION_WA_WA_Pos (0UL)
#define MWU_EVENTS_PREGION_WA_WA_Msk (0x1UL << MWU_EVENTS_PREGION_WA_WA_Pos)
#define MWU_EVENTS_PREGION_WA_WA_NotGenerated (0UL)
#define MWU_EVENTS_PREGION_WA_WA_Generated (1UL)

/* Register: MWU_EVENTS_PREGION_RA */
/* Description: Description cluster: Read access to peripheral region n detected */

/* Bit 0 : Read access to peripheral region n detected */
#define MWU_EVENTS_PREGION_RA_RA_Pos (0UL)
#define MWU_EVENTS_PREGION_RA_RA_Msk (0x1UL << MWU_EVENTS_PREGION_RA_RA_Pos)
#define MWU_EVENTS_PREGION_RA_RA_NotGenerated (0UL)
#define MWU_EVENTS_PREGION_RA_RA_Generated (1UL)

/* Register: MWU_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 27 : Enable or disable interrupt for event PREGION1RA */
#define MWU_INTEN_PREGION1RA_Pos (27UL)
#define MWU_INTEN_PREGION1RA_Msk (0x1UL << MWU_INTEN_PREGION1RA_Pos)
#define MWU_INTEN_PREGION1RA_Disabled (0UL)
#define MWU_INTEN_PREGION1RA_Enabled (1UL)

/* Bit 26 : Enable or disable interrupt for event PREGION1WA */
#define MWU_INTEN_PREGION1WA_Pos (26UL)
#define MWU_INTEN_PREGION1WA_Msk (0x1UL << MWU_INTEN_PREGION1WA_Pos)
#define MWU_INTEN_PREGION1WA_Disabled (0UL)
#define MWU_INTEN_PREGION1WA_Enabled (1UL)

/* Bit 25 : Enable or disable interrupt for event PREGION0RA */
#define MWU_INTEN_PREGION0RA_Pos (25UL)
#define MWU_INTEN_PREGION0RA_Msk (0x1UL << MWU_INTEN_PREGION0RA_Pos)
#define MWU_INTEN_PREGION0RA_Disabled (0UL)
#define MWU_INTEN_PREGION0RA_Enabled (1UL)

/* Bit 24 : Enable or disable interrupt for event PREGION0WA */
#define MWU_INTEN_PREGION0WA_Pos (24UL)
#define MWU_INTEN_PREGION0WA_Msk (0x1UL << MWU_INTEN_PREGION0WA_Pos)
#define MWU_INTEN_PREGION0WA_Disabled (0UL)
#define MWU_INTEN_PREGION0WA_Enabled (1UL)

/* Bit 7 : Enable or disable interrupt for event REGION3RA */
#define MWU_INTEN_REGION3RA_Pos (7UL)
#define MWU_INTEN_REGION3RA_Msk (0x1UL << MWU_INTEN_REGION3RA_Pos)
#define MWU_INTEN_REGION3RA_Disabled (0UL)
#define MWU_INTEN_REGION3RA_Enabled (1UL)

/* Bit 6 : Enable or disable interrupt for event REGION3WA */
#define MWU_INTEN_REGION3WA_Pos (6UL)
#define MWU_INTEN_REGION3WA_Msk (0x1UL << MWU_INTEN_REGION3WA_Pos)
#define MWU_INTEN_REGION3WA_Disabled (0UL)
#define MWU_INTEN_REGION3WA_Enabled (1UL)

/* Bit 5 : Enable or disable interrupt for event REGION2RA */
#define MWU_INTEN_REGION2RA_Pos (5UL)
#define MWU_INTEN_REGION2RA_Msk (0x1UL << MWU_INTEN_REGION2RA_Pos)
#define MWU_INTEN_REGION2RA_Disabled (0UL)
#define MWU_INTEN_REGION2RA_Enabled (1UL)

/* Bit 4 : Enable or disable interrupt for event REGION2WA */
#define MWU_INTEN_REGION2WA_Pos (4UL)
#define MWU_INTEN_REGION2WA_Msk (0x1UL << MWU_INTEN_REGION2WA_Pos)
#define MWU_INTEN_REGION2WA_Disabled (0UL)
#define MWU_INTEN_REGION2WA_Enabled (1UL)

/* Bit 3 : Enable or disable interrupt for event REGION1RA */
#define MWU_INTEN_REGION1RA_Pos (3UL)
#define MWU_INTEN_REGION1RA_Msk (0x1UL << MWU_INTEN_REGION1RA_Pos)
#define MWU_INTEN_REGION1RA_Disabled (0UL)
#define MWU_INTEN_REGION1RA_Enabled (1UL)

/* Bit 2 : Enable or disable interrupt for event REGION1WA */
#define MWU_INTEN_REGION1WA_Pos (2UL)
#define MWU_INTEN_REGION1WA_Msk (0x1UL << MWU_INTEN_REGION1WA_Pos)
#define MWU_INTEN_REGION1WA_Disabled (0UL)
#define MWU_INTEN_REGION1WA_Enabled (1UL)

/* Bit 1 : Enable or disable interrupt for event REGION0RA */
#define MWU_INTEN_REGION0RA_Pos (1UL)
#define MWU_INTEN_REGION0RA_Msk (0x1UL << MWU_INTEN_REGION0RA_Pos)
#define MWU_INTEN_REGION0RA_Disabled (0UL)
#define MWU_INTEN_REGION0RA_Enabled (1UL)

/* Bit 0 : Enable or disable interrupt for event REGION0WA */
#define MWU_INTEN_REGION0WA_Pos (0UL)
#define MWU_INTEN_REGION0WA_Msk (0x1UL << MWU_INTEN_REGION0WA_Pos)
#define MWU_INTEN_REGION0WA_Disabled (0UL)
#define MWU_INTEN_REGION0WA_Enabled (1UL)

/* Register: MWU_INTENSET */
/* Description: Enable interrupt */

/* Bit 27 : Write '1' to enable interrupt for event PREGION1RA */
#define MWU_INTENSET_PREGION1RA_Pos (27UL)
#define MWU_INTENSET_PREGION1RA_Msk (0x1UL << MWU_INTENSET_PREGION1RA_Pos)
#define MWU_INTENSET_PREGION1RA_Disabled (0UL)
#define MWU_INTENSET_PREGION1RA_Enabled (1UL)
#define MWU_INTENSET_PREGION1RA_Set (1UL)

/* Bit 26 : Write '1' to enable interrupt for event PREGION1WA */
#define MWU_INTENSET_PREGION1WA_Pos (26UL)
#define MWU_INTENSET_PREGION1WA_Msk (0x1UL << MWU_INTENSET_PREGION1WA_Pos)
#define MWU_INTENSET_PREGION1WA_Disabled (0UL)
#define MWU_INTENSET_PREGION1WA_Enabled (1UL)
#define MWU_INTENSET_PREGION1WA_Set (1UL)

/* Bit 25 : Write '1' to enable interrupt for event PREGION0RA */
#define MWU_INTENSET_PREGION0RA_Pos (25UL)
#define MWU_INTENSET_PREGION0RA_Msk (0x1UL << MWU_INTENSET_PREGION0RA_Pos)
#define MWU_INTENSET_PREGION0RA_Disabled (0UL)
#define MWU_INTENSET_PREGION0RA_Enabled (1UL)
#define MWU_INTENSET_PREGION0RA_Set (1UL)

/* Bit 24 : Write '1' to enable interrupt for event PREGION0WA */
#define MWU_INTENSET_PREGION0WA_Pos (24UL)
#define MWU_INTENSET_PREGION0WA_Msk (0x1UL << MWU_INTENSET_PREGION0WA_Pos)
#define MWU_INTENSET_PREGION0WA_Disabled (0UL)
#define MWU_INTENSET_PREGION0WA_Enabled (1UL)
#define MWU_INTENSET_PREGION0WA_Set (1UL)

/* Bit 7 : Write '1' to enable interrupt for event REGION3RA */
#define MWU_INTENSET_REGION3RA_Pos (7UL)
#define MWU_INTENSET_REGION3RA_Msk (0x1UL << MWU_INTENSET_REGION3RA_Pos)
#define MWU_INTENSET_REGION3RA_Disabled (0UL)
#define MWU_INTENSET_REGION3RA_Enabled (1UL)
#define MWU_INTENSET_REGION3RA_Set (1UL)

/* Bit 6 : Write '1' to enable interrupt for event REGION3WA */
#define MWU_INTENSET_REGION3WA_Pos (6UL)
#define MWU_INTENSET_REGION3WA_Msk (0x1UL << MWU_INTENSET_REGION3WA_Pos)
#define MWU_INTENSET_REGION3WA_Disabled (0UL)
#define MWU_INTENSET_REGION3WA_Enabled (1UL)
#define MWU_INTENSET_REGION3WA_Set (1UL)

/* Bit 5 : Write '1' to enable interrupt for event REGION2RA */
#define MWU_INTENSET_REGION2RA_Pos (5UL)
#define MWU_INTENSET_REGION2RA_Msk (0x1UL << MWU_INTENSET_REGION2RA_Pos)
#define MWU_INTENSET_REGION2RA_Disabled (0UL)
#define MWU_INTENSET_REGION2RA_Enabled (1UL)
#define MWU_INTENSET_REGION2RA_Set (1UL)

/* Bit 4 : Write '1' to enable interrupt for event REGION2WA */
#define MWU_INTENSET_REGION2WA_Pos (4UL)
#define MWU_INTENSET_REGION2WA_Msk (0x1UL << MWU_INTENSET_REGION2WA_Pos)
#define MWU_INTENSET_REGION2WA_Disabled (0UL)
#define MWU_INTENSET_REGION2WA_Enabled (1UL)
#define MWU_INTENSET_REGION2WA_Set (1UL)

/* Bit 3 : Write '1' to enable interrupt for event REGION1RA */
#define MWU_INTENSET_REGION1RA_Pos (3UL)
#define MWU_INTENSET_REGION1RA_Msk (0x1UL << MWU_INTENSET_REGION1RA_Pos)
#define MWU_INTENSET_REGION1RA_Disabled (0UL)
#define MWU_INTENSET_REGION1RA_Enabled (1UL)
#define MWU_INTENSET_REGION1RA_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event REGION1WA */
#define MWU_INTENSET_REGION1WA_Pos (2UL)
#define MWU_INTENSET_REGION1WA_Msk (0x1UL << MWU_INTENSET_REGION1WA_Pos)
#define MWU_INTENSET_REGION1WA_Disabled (0UL)
#define MWU_INTENSET_REGION1WA_Enabled (1UL)
#define MWU_INTENSET_REGION1WA_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event REGION0RA */
#define MWU_INTENSET_REGION0RA_Pos (1UL)
#define MWU_INTENSET_REGION0RA_Msk (0x1UL << MWU_INTENSET_REGION0RA_Pos)
#define MWU_INTENSET_REGION0RA_Disabled (0UL)
#define MWU_INTENSET_REGION0RA_Enabled (1UL)
#define MWU_INTENSET_REGION0RA_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event REGION0WA */
#define MWU_INTENSET_REGION0WA_Pos (0UL)
#define MWU_INTENSET_REGION0WA_Msk (0x1UL << MWU_INTENSET_REGION0WA_Pos)
#define MWU_INTENSET_REGION0WA_Disabled (0UL)
#define MWU_INTENSET_REGION0WA_Enabled (1UL)
#define MWU_INTENSET_REGION0WA_Set (1UL)

/* Register: MWU_INTENCLR */
/* Description: Disable interrupt */

/* Bit 27 : Write '1' to disable interrupt for event PREGION1RA */
#define MWU_INTENCLR_PREGION1RA_Pos (27UL)
#define MWU_INTENCLR_PREGION1RA_Msk (0x1UL << MWU_INTENCLR_PREGION1RA_Pos)
#define MWU_INTENCLR_PREGION1RA_Disabled (0UL)
#define MWU_INTENCLR_PREGION1RA_Enabled (1UL)
#define MWU_INTENCLR_PREGION1RA_Clear (1UL)

/* Bit 26 : Write '1' to disable interrupt for event PREGION1WA */
#define MWU_INTENCLR_PREGION1WA_Pos (26UL)
#define MWU_INTENCLR_PREGION1WA_Msk (0x1UL << MWU_INTENCLR_PREGION1WA_Pos)
#define MWU_INTENCLR_PREGION1WA_Disabled (0UL)
#define MWU_INTENCLR_PREGION1WA_Enabled (1UL)
#define MWU_INTENCLR_PREGION1WA_Clear (1UL)

/* Bit 25 : Write '1' to disable interrupt for event PREGION0RA */
#define MWU_INTENCLR_PREGION0RA_Pos (25UL)
#define MWU_INTENCLR_PREGION0RA_Msk (0x1UL << MWU_INTENCLR_PREGION0RA_Pos)
#define MWU_INTENCLR_PREGION0RA_Disabled (0UL)
#define MWU_INTENCLR_PREGION0RA_Enabled (1UL)
#define MWU_INTENCLR_PREGION0RA_Clear (1UL)

/* Bit 24 : Write '1' to disable interrupt for event PREGION0WA */
#define MWU_INTENCLR_PREGION0WA_Pos (24UL)
#define MWU_INTENCLR_PREGION0WA_Msk (0x1UL << MWU_INTENCLR_PREGION0WA_Pos)
#define MWU_INTENCLR_PREGION0WA_Disabled (0UL)
#define MWU_INTENCLR_PREGION0WA_Enabled (1UL)
#define MWU_INTENCLR_PREGION0WA_Clear (1UL)

/* Bit 7 : Write '1' to disable interrupt for event REGION3RA */
#define MWU_INTENCLR_REGION3RA_Pos (7UL)
#define MWU_INTENCLR_REGION3RA_Msk (0x1UL << MWU_INTENCLR_REGION3RA_Pos)
#define MWU_INTENCLR_REGION3RA_Disabled (0UL)
#define MWU_INTENCLR_REGION3RA_Enabled (1UL)
#define MWU_INTENCLR_REGION3RA_Clear (1UL)

/* Bit 6 : Write '1' to disable interrupt for event REGION3WA */
#define MWU_INTENCLR_REGION3WA_Pos (6UL)
#define MWU_INTENCLR_REGION3WA_Msk (0x1UL << MWU_INTENCLR_REGION3WA_Pos)
#define MWU_INTENCLR_REGION3WA_Disabled (0UL)
#define MWU_INTENCLR_REGION3WA_Enabled (1UL)
#define MWU_INTENCLR_REGION3WA_Clear (1UL)

/* Bit 5 : Write '1' to disable interrupt for event REGION2RA */
#define MWU_INTENCLR_REGION2RA_Pos (5UL)
#define MWU_INTENCLR_REGION2RA_Msk (0x1UL << MWU_INTENCLR_REGION2RA_Pos)
#define MWU_INTENCLR_REGION2RA_Disabled (0UL)
#define MWU_INTENCLR_REGION2RA_Enabled (1UL)
#define MWU_INTENCLR_REGION2RA_Clear (1UL)

/* Bit 4 : Write '1' to disable interrupt for event REGION2WA */
#define MWU_INTENCLR_REGION2WA_Pos (4UL)
#define MWU_INTENCLR_REGION2WA_Msk (0x1UL << MWU_INTENCLR_REGION2WA_Pos)
#define MWU_INTENCLR_REGION2WA_Disabled (0UL)
#define MWU_INTENCLR_REGION2WA_Enabled (1UL)
#define MWU_INTENCLR_REGION2WA_Clear (1UL)

/* Bit 3 : Write '1' to disable interrupt for event REGION1RA */
#define MWU_INTENCLR_REGION1RA_Pos (3UL)
#define MWU_INTENCLR_REGION1RA_Msk (0x1UL << MWU_INTENCLR_REGION1RA_Pos)
#define MWU_INTENCLR_REGION1RA_Disabled (0UL)
#define MWU_INTENCLR_REGION1RA_Enabled (1UL)
#define MWU_INTENCLR_REGION1RA_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event REGION1WA */
#define MWU_INTENCLR_REGION1WA_Pos (2UL)
#define MWU_INTENCLR_REGION1WA_Msk (0x1UL << MWU_INTENCLR_REGION1WA_Pos)
#define MWU_INTENCLR_REGION1WA_Disabled (0UL)
#define MWU_INTENCLR_REGION1WA_Enabled (1UL)
#define MWU_INTENCLR_REGION1WA_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event REGION0RA */
#define MWU_INTENCLR_REGION0RA_Pos (1UL)
#define MWU_INTENCLR_REGION0RA_Msk (0x1UL << MWU_INTENCLR_REGION0RA_Pos)
#define MWU_INTENCLR_REGION0RA_Disabled (0UL)
#define MWU_INTENCLR_REGION0RA_Enabled (1UL)
#define MWU_INTENCLR_REGION0RA_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event REGION0WA */
#define MWU_INTENCLR_REGION0WA_Pos (0UL)
#define MWU_INTENCLR_REGION0WA_Msk (0x1UL << MWU_INTENCLR_REGION0WA_Pos)
#define MWU_INTENCLR_REGION0WA_Disabled (0UL)
#define MWU_INTENCLR_REGION0WA_Enabled (1UL)
#define MWU_INTENCLR_REGION0WA_Clear (1UL)

/* Register: MWU_NMIEN */
/* Description: Enable or disable interrupt */

/* Bit 27 : Enable or disable interrupt for event PREGION1RA */
#define MWU_NMIEN_PREGION1RA_Pos (27UL)
#define MWU_NMIEN_PREGION1RA_Msk (0x1UL << MWU_NMIEN_PREGION1RA_Pos)
#define MWU_NMIEN_PREGION1RA_Disabled (0UL)
#define MWU_NMIEN_PREGION1RA_Enabled (1UL)

/* Bit 26 : Enable or disable interrupt for event PREGION1WA */
#define MWU_NMIEN_PREGION1WA_Pos (26UL)
#define MWU_NMIEN_PREGION1WA_Msk (0x1UL << MWU_NMIEN_PREGION1WA_Pos)
#define MWU_NMIEN_PREGION1WA_Disabled (0UL)
#define MWU_NMIEN_PREGION1WA_Enabled (1UL)

/* Bit 25 : Enable or disable interrupt for event PREGION0RA */
#define MWU_NMIEN_PREGION0RA_Pos (25UL)
#define MWU_NMIEN_PREGION0RA_Msk (0x1UL << MWU_NMIEN_PREGION0RA_Pos)
#define MWU_NMIEN_PREGION0RA_Disabled (0UL)
#define MWU_NMIEN_PREGION0RA_Enabled (1UL)

/* Bit 24 : Enable or disable interrupt for event PREGION0WA */
#define MWU_NMIEN_PREGION0WA_Pos (24UL)
#define MWU_NMIEN_PREGION0WA_Msk (0x1UL << MWU_NMIEN_PREGION0WA_Pos)
#define MWU_NMIEN_PREGION0WA_Disabled (0UL)
#define MWU_NMIEN_PREGION0WA_Enabled (1UL)

/* Bit 7 : Enable or disable interrupt for event REGION3RA */
#define MWU_NMIEN_REGION3RA_Pos (7UL)
#define MWU_NMIEN_REGION3RA_Msk (0x1UL << MWU_NMIEN_REGION3RA_Pos)
#define MWU_NMIEN_REGION3RA_Disabled (0UL)
#define MWU_NMIEN_REGION3RA_Enabled (1UL)

/* Bit 6 : Enable or disable interrupt for event REGION3WA */
#define MWU_NMIEN_REGION3WA_Pos (6UL)
#define MWU_NMIEN_REGION3WA_Msk (0x1UL << MWU_NMIEN_REGION3WA_Pos)
#define MWU_NMIEN_REGION3WA_Disabled (0UL)
#define MWU_NMIEN_REGION3WA_Enabled (1UL)

/* Bit 5 : Enable or disable interrupt for event REGION2RA */
#define MWU_NMIEN_REGION2RA_Pos (5UL)
#define MWU_NMIEN_REGION2RA_Msk (0x1UL << MWU_NMIEN_REGION2RA_Pos)
#define MWU_NMIEN_REGION2RA_Disabled (0UL)
#define MWU_NMIEN_REGION2RA_Enabled (1UL)

/* Bit 4 : Enable or disable interrupt for event REGION2WA */
#define MWU_NMIEN_REGION2WA_Pos (4UL)
#define MWU_NMIEN_REGION2WA_Msk (0x1UL << MWU_NMIEN_REGION2WA_Pos)
#define MWU_NMIEN_REGION2WA_Disabled (0UL)
#define MWU_NMIEN_REGION2WA_Enabled (1UL)

/* Bit 3 : Enable or disable interrupt for event REGION1RA */
#define MWU_NMIEN_REGION1RA_Pos (3UL)
#define MWU_NMIEN_REGION1RA_Msk (0x1UL << MWU_NMIEN_REGION1RA_Pos)
#define MWU_NMIEN_REGION1RA_Disabled (0UL)
#define MWU_NMIEN_REGION1RA_Enabled (1UL)

/* Bit 2 : Enable or disable interrupt for event REGION1WA */
#define MWU_NMIEN_REGION1WA_Pos (2UL)
#define MWU_NMIEN_REGION1WA_Msk (0x1UL << MWU_NMIEN_REGION1WA_Pos)
#define MWU_NMIEN_REGION1WA_Disabled (0UL)
#define MWU_NMIEN_REGION1WA_Enabled (1UL)

/* Bit 1 : Enable or disable interrupt for event REGION0RA */
#define MWU_NMIEN_REGION0RA_Pos (1UL)
#define MWU_NMIEN_REGION0RA_Msk (0x1UL << MWU_NMIEN_REGION0RA_Pos)
#define MWU_NMIEN_REGION0RA_Disabled (0UL)
#define MWU_NMIEN_REGION0RA_Enabled (1UL)

/* Bit 0 : Enable or disable interrupt for event REGION0WA */
#define MWU_NMIEN_REGION0WA_Pos (0UL)
#define MWU_NMIEN_REGION0WA_Msk (0x1UL << MWU_NMIEN_REGION0WA_Pos)
#define MWU_NMIEN_REGION0WA_Disabled (0UL)
#define MWU_NMIEN_REGION0WA_Enabled (1UL)

/* Register: MWU_NMIENSET */
/* Description: Enable interrupt */

/* Bit 27 : Write '1' to enable interrupt for event PREGION1RA */
#define MWU_NMIENSET_PREGION1RA_Pos (27UL)
#define MWU_NMIENSET_PREGION1RA_Msk (0x1UL << MWU_NMIENSET_PREGION1RA_Pos)
#define MWU_NMIENSET_PREGION1RA_Disabled (0UL)
#define MWU_NMIENSET_PREGION1RA_Enabled (1UL)
#define MWU_NMIENSET_PREGION1RA_Set (1UL)

/* Bit 26 : Write '1' to enable interrupt for event PREGION1WA */
#define MWU_NMIENSET_PREGION1WA_Pos (26UL)
#define MWU_NMIENSET_PREGION1WA_Msk (0x1UL << MWU_NMIENSET_PREGION1WA_Pos)
#define MWU_NMIENSET_PREGION1WA_Disabled (0UL)
#define MWU_NMIENSET_PREGION1WA_Enabled (1UL)
#define MWU_NMIENSET_PREGION1WA_Set (1UL)

/* Bit 25 : Write '1' to enable interrupt for event PREGION0RA */
#define MWU_NMIENSET_PREGION0RA_Pos (25UL)
#define MWU_NMIENSET_PREGION0RA_Msk (0x1UL << MWU_NMIENSET_PREGION0RA_Pos)
#define MWU_NMIENSET_PREGION0RA_Disabled (0UL)
#define MWU_NMIENSET_PREGION0RA_Enabled (1UL)
#define MWU_NMIENSET_PREGION0RA_Set (1UL)

/* Bit 24 : Write '1' to enable interrupt for event PREGION0WA */
#define MWU_NMIENSET_PREGION0WA_Pos (24UL)
#define MWU_NMIENSET_PREGION0WA_Msk (0x1UL << MWU_NMIENSET_PREGION0WA_Pos)
#define MWU_NMIENSET_PREGION0WA_Disabled (0UL)
#define MWU_NMIENSET_PREGION0WA_Enabled (1UL)
#define MWU_NMIENSET_PREGION0WA_Set (1UL)

/* Bit 7 : Write '1' to enable interrupt for event REGION3RA */
#define MWU_NMIENSET_REGION3RA_Pos (7UL)
#define MWU_NMIENSET_REGION3RA_Msk (0x1UL << MWU_NMIENSET_REGION3RA_Pos)
#define MWU_NMIENSET_REGION3RA_Disabled (0UL)
#define MWU_NMIENSET_REGION3RA_Enabled (1UL)
#define MWU_NMIENSET_REGION3RA_Set (1UL)

/* Bit 6 : Write '1' to enable interrupt for event REGION3WA */
#define MWU_NMIENSET_REGION3WA_Pos (6UL)
#define MWU_NMIENSET_REGION3WA_Msk (0x1UL << MWU_NMIENSET_REGION3WA_Pos)
#define MWU_NMIENSET_REGION3WA_Disabled (0UL)
#define MWU_NMIENSET_REGION3WA_Enabled (1UL)
#define MWU_NMIENSET_REGION3WA_Set (1UL)

/* Bit 5 : Write '1' to enable interrupt for event REGION2RA */
#define MWU_NMIENSET_REGION2RA_Pos (5UL)
#define MWU_NMIENSET_REGION2RA_Msk (0x1UL << MWU_NMIENSET_REGION2RA_Pos)
#define MWU_NMIENSET_REGION2RA_Disabled (0UL)
#define MWU_NMIENSET_REGION2RA_Enabled (1UL)
#define MWU_NMIENSET_REGION2RA_Set (1UL)

/* Bit 4 : Write '1' to enable interrupt for event REGION2WA */
#define MWU_NMIENSET_REGION2WA_Pos (4UL)
#define MWU_NMIENSET_REGION2WA_Msk (0x1UL << MWU_NMIENSET_REGION2WA_Pos)
#define MWU_NMIENSET_REGION2WA_Disabled (0UL)
#define MWU_NMIENSET_REGION2WA_Enabled (1UL)
#define MWU_NMIENSET_REGION2WA_Set (1UL)

/* Bit 3 : Write '1' to enable interrupt for event REGION1RA */
#define MWU_NMIENSET_REGION1RA_Pos (3UL)
#define MWU_NMIENSET_REGION1RA_Msk (0x1UL << MWU_NMIENSET_REGION1RA_Pos)
#define MWU_NMIENSET_REGION1RA_Disabled (0UL)
#define MWU_NMIENSET_REGION1RA_Enabled (1UL)
#define MWU_NMIENSET_REGION1RA_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event REGION1WA */
#define MWU_NMIENSET_REGION1WA_Pos (2UL)
#define MWU_NMIENSET_REGION1WA_Msk (0x1UL << MWU_NMIENSET_REGION1WA_Pos)
#define MWU_NMIENSET_REGION1WA_Disabled (0UL)
#define MWU_NMIENSET_REGION1WA_Enabled (1UL)
#define MWU_NMIENSET_REGION1WA_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event REGION0RA */
#define MWU_NMIENSET_REGION0RA_Pos (1UL)
#define MWU_NMIENSET_REGION0RA_Msk (0x1UL << MWU_NMIENSET_REGION0RA_Pos)
#define MWU_NMIENSET_REGION0RA_Disabled (0UL)
#define MWU_NMIENSET_REGION0RA_Enabled (1UL)
#define MWU_NMIENSET_REGION0RA_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event REGION0WA */
#define MWU_NMIENSET_REGION0WA_Pos (0UL)
#define MWU_NMIENSET_REGION0WA_Msk (0x1UL << MWU_NMIENSET_REGION0WA_Pos)
#define MWU_NMIENSET_REGION0WA_Disabled (0UL)
#define MWU_NMIENSET_REGION0WA_Enabled (1UL)
#define MWU_NMIENSET_REGION0WA_Set (1UL)

/* Register: MWU_NMIENCLR */
/* Description: Disable interrupt */

/* Bit 27 : Write '1' to disable interrupt for event PREGION1RA */
#define MWU_NMIENCLR_PREGION1RA_Pos (27UL)
#define MWU_NMIENCLR_PREGION1RA_Msk (0x1UL << MWU_NMIENCLR_PREGION1RA_Pos)
#define MWU_NMIENCLR_PREGION1RA_Disabled (0UL)
#define MWU_NMIENCLR_PREGION1RA_Enabled (1UL)
#define MWU_NMIENCLR_PREGION1RA_Clear (1UL)

/* Bit 26 : Write '1' to disable interrupt for event PREGION1WA */
#define MWU_NMIENCLR_PREGION1WA_Pos (26UL)
#define MWU_NMIENCLR_PREGION1WA_Msk (0x1UL << MWU_NMIENCLR_PREGION1WA_Pos)
#define MWU_NMIENCLR_PREGION1WA_Disabled (0UL)
#define MWU_NMIENCLR_PREGION1WA_Enabled (1UL)
#define MWU_NMIENCLR_PREGION1WA_Clear (1UL)

/* Bit 25 : Write '1' to disable interrupt for event PREGION0RA */
#define MWU_NMIENCLR_PREGION0RA_Pos (25UL)
#define MWU_NMIENCLR_PREGION0RA_Msk (0x1UL << MWU_NMIENCLR_PREGION0RA_Pos)
#define MWU_NMIENCLR_PREGION0RA_Disabled (0UL)
#define MWU_NMIENCLR_PREGION0RA_Enabled (1UL)
#define MWU_NMIENCLR_PREGION0RA_Clear (1UL)

/* Bit 24 : Write '1' to disable interrupt for event PREGION0WA */
#define MWU_NMIENCLR_PREGION0WA_Pos (24UL)
#define MWU_NMIENCLR_PREGION0WA_Msk (0x1UL << MWU_NMIENCLR_PREGION0WA_Pos)
#define MWU_NMIENCLR_PREGION0WA_Disabled (0UL)
#define MWU_NMIENCLR_PREGION0WA_Enabled (1UL)
#define MWU_NMIENCLR_PREGION0WA_Clear (1UL)

/* Bit 7 : Write '1' to disable interrupt for event REGION3RA */
#define MWU_NMIENCLR_REGION3RA_Pos (7UL)
#define MWU_NMIENCLR_REGION3RA_Msk (0x1UL << MWU_NMIENCLR_REGION3RA_Pos)
#define MWU_NMIENCLR_REGION3RA_Disabled (0UL)
#define MWU_NMIENCLR_REGION3RA_Enabled (1UL)
#define MWU_NMIENCLR_REGION3RA_Clear (1UL)

/* Bit 6 : Write '1' to disable interrupt for event REGION3WA */
#define MWU_NMIENCLR_REGION3WA_Pos (6UL)
#define MWU_NMIENCLR_REGION3WA_Msk (0x1UL << MWU_NMIENCLR_REGION3WA_Pos)
#define MWU_NMIENCLR_REGION3WA_Disabled (0UL)
#define MWU_NMIENCLR_REGION3WA_Enabled (1UL)
#define MWU_NMIENCLR_REGION3WA_Clear (1UL)

/* Bit 5 : Write '1' to disable interrupt for event REGION2RA */
#define MWU_NMIENCLR_REGION2RA_Pos (5UL)
#define MWU_NMIENCLR_REGION2RA_Msk (0x1UL << MWU_NMIENCLR_REGION2RA_Pos)
#define MWU_NMIENCLR_REGION2RA_Disabled (0UL)
#define MWU_NMIENCLR_REGION2RA_Enabled (1UL)
#define MWU_NMIENCLR_REGION2RA_Clear (1UL)

/* Bit 4 : Write '1' to disable interrupt for event REGION2WA */
#define MWU_NMIENCLR_REGION2WA_Pos (4UL)
#define MWU_NMIENCLR_REGION2WA_Msk (0x1UL << MWU_NMIENCLR_REGION2WA_Pos)
#define MWU_NMIENCLR_REGION2WA_Disabled (0UL)
#define MWU_NMIENCLR_REGION2WA_Enabled (1UL)
#define MWU_NMIENCLR_REGION2WA_Clear (1UL)

/* Bit 3 : Write '1' to disable interrupt for event REGION1RA */
#define MWU_NMIENCLR_REGION1RA_Pos (3UL)
#define MWU_NMIENCLR_REGION1RA_Msk (0x1UL << MWU_NMIENCLR_REGION1RA_Pos)
#define MWU_NMIENCLR_REGION1RA_Disabled (0UL)
#define MWU_NMIENCLR_REGION1RA_Enabled (1UL)
#define MWU_NMIENCLR_REGION1RA_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event REGION1WA */
#define MWU_NMIENCLR_REGION1WA_Pos (2UL)
#define MWU_NMIENCLR_REGION1WA_Msk (0x1UL << MWU_NMIENCLR_REGION1WA_Pos)
#define MWU_NMIENCLR_REGION1WA_Disabled (0UL)
#define MWU_NMIENCLR_REGION1WA_Enabled (1UL)
#define MWU_NMIENCLR_REGION1WA_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event REGION0RA */
#define MWU_NMIENCLR_REGION0RA_Pos (1UL)
#define MWU_NMIENCLR_REGION0RA_Msk (0x1UL << MWU_NMIENCLR_REGION0RA_Pos)
#define MWU_NMIENCLR_REGION0RA_Disabled (0UL)
#define MWU_NMIENCLR_REGION0RA_Enabled (1UL)
#define MWU_NMIENCLR_REGION0RA_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event REGION0WA */
#define MWU_NMIENCLR_REGION0WA_Pos (0UL)
#define MWU_NMIENCLR_REGION0WA_Msk (0x1UL << MWU_NMIENCLR_REGION0WA_Pos)
#define MWU_NMIENCLR_REGION0WA_Disabled (0UL)
#define MWU_NMIENCLR_REGION0WA_Enabled (1UL)
#define MWU_NMIENCLR_REGION0WA_Clear (1UL)

/* Register: MWU_PERREGION_SUBSTATWA */
/* Description: Description cluster: Source of event/interrupt in region n, write access detected while corresponding subregion was enabled for watching */

/* Bit 31 : Subregion 31 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR31_Pos (31UL)
#define MWU_PERREGION_SUBSTATWA_SR31_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR31_Pos)
#define MWU_PERREGION_SUBSTATWA_SR31_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR31_Access (1UL)

/* Bit 30 : Subregion 30 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR30_Pos (30UL)
#define MWU_PERREGION_SUBSTATWA_SR30_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR30_Pos)
#define MWU_PERREGION_SUBSTATWA_SR30_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR30_Access (1UL)

/* Bit 29 : Subregion 29 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR29_Pos (29UL)
#define MWU_PERREGION_SUBSTATWA_SR29_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR29_Pos)
#define MWU_PERREGION_SUBSTATWA_SR29_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR29_Access (1UL)

/* Bit 28 : Subregion 28 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR28_Pos (28UL)
#define MWU_PERREGION_SUBSTATWA_SR28_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR28_Pos)
#define MWU_PERREGION_SUBSTATWA_SR28_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR28_Access (1UL)

/* Bit 27 : Subregion 27 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR27_Pos (27UL)
#define MWU_PERREGION_SUBSTATWA_SR27_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR27_Pos)
#define MWU_PERREGION_SUBSTATWA_SR27_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR27_Access (1UL)

/* Bit 26 : Subregion 26 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR26_Pos (26UL)
#define MWU_PERREGION_SUBSTATWA_SR26_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR26_Pos)
#define MWU_PERREGION_SUBSTATWA_SR26_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR26_Access (1UL)

/* Bit 25 : Subregion 25 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR25_Pos (25UL)
#define MWU_PERREGION_SUBSTATWA_SR25_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR25_Pos)
#define MWU_PERREGION_SUBSTATWA_SR25_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR25_Access (1UL)

/* Bit 24 : Subregion 24 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR24_Pos (24UL)
#define MWU_PERREGION_SUBSTATWA_SR24_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR24_Pos)
#define MWU_PERREGION_SUBSTATWA_SR24_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR24_Access (1UL)

/* Bit 23 : Subregion 23 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR23_Pos (23UL)
#define MWU_PERREGION_SUBSTATWA_SR23_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR23_Pos)
#define MWU_PERREGION_SUBSTATWA_SR23_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR23_Access (1UL)

/* Bit 22 : Subregion 22 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR22_Pos (22UL)
#define MWU_PERREGION_SUBSTATWA_SR22_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR22_Pos)
#define MWU_PERREGION_SUBSTATWA_SR22_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR22_Access (1UL)

/* Bit 21 : Subregion 21 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR21_Pos (21UL)
#define MWU_PERREGION_SUBSTATWA_SR21_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR21_Pos)
#define MWU_PERREGION_SUBSTATWA_SR21_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR21_Access (1UL)

/* Bit 20 : Subregion 20 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR20_Pos (20UL)
#define MWU_PERREGION_SUBSTATWA_SR20_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR20_Pos)
#define MWU_PERREGION_SUBSTATWA_SR20_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR20_Access (1UL)

/* Bit 19 : Subregion 19 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR19_Pos (19UL)
#define MWU_PERREGION_SUBSTATWA_SR19_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR19_Pos)
#define MWU_PERREGION_SUBSTATWA_SR19_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR19_Access (1UL)

/* Bit 18 : Subregion 18 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR18_Pos (18UL)
#define MWU_PERREGION_SUBSTATWA_SR18_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR18_Pos)
#define MWU_PERREGION_SUBSTATWA_SR18_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR18_Access (1UL)

/* Bit 17 : Subregion 17 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR17_Pos (17UL)
#define MWU_PERREGION_SUBSTATWA_SR17_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR17_Pos)
#define MWU_PERREGION_SUBSTATWA_SR17_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR17_Access (1UL)

/* Bit 16 : Subregion 16 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR16_Pos (16UL)
#define MWU_PERREGION_SUBSTATWA_SR16_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR16_Pos)
#define MWU_PERREGION_SUBSTATWA_SR16_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR16_Access (1UL)

/* Bit 15 : Subregion 15 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR15_Pos (15UL)
#define MWU_PERREGION_SUBSTATWA_SR15_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR15_Pos)
#define MWU_PERREGION_SUBSTATWA_SR15_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR15_Access (1UL)

/* Bit 14 : Subregion 14 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR14_Pos (14UL)
#define MWU_PERREGION_SUBSTATWA_SR14_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR14_Pos)
#define MWU_PERREGION_SUBSTATWA_SR14_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR14_Access (1UL)

/* Bit 13 : Subregion 13 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR13_Pos (13UL)
#define MWU_PERREGION_SUBSTATWA_SR13_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR13_Pos)
#define MWU_PERREGION_SUBSTATWA_SR13_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR13_Access (1UL)

/* Bit 12 : Subregion 12 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR12_Pos (12UL)
#define MWU_PERREGION_SUBSTATWA_SR12_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR12_Pos)
#define MWU_PERREGION_SUBSTATWA_SR12_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR12_Access (1UL)

/* Bit 11 : Subregion 11 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR11_Pos (11UL)
#define MWU_PERREGION_SUBSTATWA_SR11_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR11_Pos)
#define MWU_PERREGION_SUBSTATWA_SR11_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR11_Access (1UL)

/* Bit 10 : Subregion 10 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR10_Pos (10UL)
#define MWU_PERREGION_SUBSTATWA_SR10_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR10_Pos)
#define MWU_PERREGION_SUBSTATWA_SR10_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR10_Access (1UL)

/* Bit 9 : Subregion 9 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR9_Pos (9UL)
#define MWU_PERREGION_SUBSTATWA_SR9_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR9_Pos)
#define MWU_PERREGION_SUBSTATWA_SR9_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR9_Access (1UL)

/* Bit 8 : Subregion 8 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR8_Pos (8UL)
#define MWU_PERREGION_SUBSTATWA_SR8_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR8_Pos)
#define MWU_PERREGION_SUBSTATWA_SR8_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR8_Access (1UL)

/* Bit 7 : Subregion 7 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR7_Pos (7UL)
#define MWU_PERREGION_SUBSTATWA_SR7_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR7_Pos)
#define MWU_PERREGION_SUBSTATWA_SR7_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR7_Access (1UL)

/* Bit 6 : Subregion 6 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR6_Pos (6UL)
#define MWU_PERREGION_SUBSTATWA_SR6_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR6_Pos)
#define MWU_PERREGION_SUBSTATWA_SR6_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR6_Access (1UL)

/* Bit 5 : Subregion 5 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR5_Pos (5UL)
#define MWU_PERREGION_SUBSTATWA_SR5_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR5_Pos)
#define MWU_PERREGION_SUBSTATWA_SR5_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR5_Access (1UL)

/* Bit 4 : Subregion 4 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR4_Pos (4UL)
#define MWU_PERREGION_SUBSTATWA_SR4_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR4_Pos)
#define MWU_PERREGION_SUBSTATWA_SR4_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR4_Access (1UL)

/* Bit 3 : Subregion 3 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR3_Pos (3UL)
#define MWU_PERREGION_SUBSTATWA_SR3_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR3_Pos)
#define MWU_PERREGION_SUBSTATWA_SR3_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR3_Access (1UL)

/* Bit 2 : Subregion 2 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR2_Pos (2UL)
#define MWU_PERREGION_SUBSTATWA_SR2_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR2_Pos)
#define MWU_PERREGION_SUBSTATWA_SR2_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR2_Access (1UL)

/* Bit 1 : Subregion 1 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR1_Pos (1UL)
#define MWU_PERREGION_SUBSTATWA_SR1_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR1_Pos)
#define MWU_PERREGION_SUBSTATWA_SR1_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR1_Access (1UL)

/* Bit 0 : Subregion 0 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR0_Pos (0UL)
#define MWU_PERREGION_SUBSTATWA_SR0_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR0_Pos)
#define MWU_PERREGION_SUBSTATWA_SR0_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR0_Access (1UL)

/* Register: MWU_PERREGION_SUBSTATRA */
/* Description: Description cluster: Source of event/interrupt in region n, read access detected while corresponding subregion was enabled for watching */

/* Bit 31 : Subregion 31 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR31_Pos (31UL)
#define MWU_PERREGION_SUBSTATRA_SR31_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR31_Pos)
#define MWU_PERREGION_SUBSTATRA_SR31_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR31_Access (1UL)

/* Bit 30 : Subregion 30 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR30_Pos (30UL)
#define MWU_PERREGION_SUBSTATRA_SR30_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR30_Pos)
#define MWU_PERREGION_SUBSTATRA_SR30_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR30_Access (1UL)

/* Bit 29 : Subregion 29 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR29_Pos (29UL)
#define MWU_PERREGION_SUBSTATRA_SR29_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR29_Pos)
#define MWU_PERREGION_SUBSTATRA_SR29_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR29_Access (1UL)

/* Bit 28 : Subregion 28 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR28_Pos (28UL)
#define MWU_PERREGION_SUBSTATRA_SR28_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR28_Pos)
#define MWU_PERREGION_SUBSTATRA_SR28_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR28_Access (1UL)

/* Bit 27 : Subregion 27 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR27_Pos (27UL)
#define MWU_PERREGION_SUBSTATRA_SR27_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR27_Pos)
#define MWU_PERREGION_SUBSTATRA_SR27_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR27_Access (1UL)

/* Bit 26 : Subregion 26 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR26_Pos (26UL)
#define MWU_PERREGION_SUBSTATRA_SR26_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR26_Pos)
#define MWU_PERREGION_SUBSTATRA_SR26_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR26_Access (1UL)

/* Bit 25 : Subregion 25 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR25_Pos (25UL)
#define MWU_PERREGION_SUBSTATRA_SR25_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR25_Pos)
#define MWU_PERREGION_SUBSTATRA_SR25_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR25_Access (1UL)

/* Bit 24 : Subregion 24 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR24_Pos (24UL)
#define MWU_PERREGION_SUBSTATRA_SR24_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR24_Pos)
#define MWU_PERREGION_SUBSTATRA_SR24_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR24_Access (1UL)

/* Bit 23 : Subregion 23 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR23_Pos (23UL)
#define MWU_PERREGION_SUBSTATRA_SR23_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR23_Pos)
#define MWU_PERREGION_SUBSTATRA_SR23_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR23_Access (1UL)

/* Bit 22 : Subregion 22 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR22_Pos (22UL)
#define MWU_PERREGION_SUBSTATRA_SR22_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR22_Pos)
#define MWU_PERREGION_SUBSTATRA_SR22_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR22_Access (1UL)

/* Bit 21 : Subregion 21 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR21_Pos (21UL)
#define MWU_PERREGION_SUBSTATRA_SR21_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR21_Pos)
#define MWU_PERREGION_SUBSTATRA_SR21_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR21_Access (1UL)

/* Bit 20 : Subregion 20 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR20_Pos (20UL)
#define MWU_PERREGION_SUBSTATRA_SR20_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR20_Pos)
#define MWU_PERREGION_SUBSTATRA_SR20_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR20_Access (1UL)

/* Bit 19 : Subregion 19 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR19_Pos (19UL)
#define MWU_PERREGION_SUBSTATRA_SR19_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR19_Pos)
#define MWU_PERREGION_SUBSTATRA_SR19_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR19_Access (1UL)

/* Bit 18 : Subregion 18 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR18_Pos (18UL)
#define MWU_PERREGION_SUBSTATRA_SR18_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR18_Pos)
#define MWU_PERREGION_SUBSTATRA_SR18_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR18_Access (1UL)

/* Bit 17 : Subregion 17 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR17_Pos (17UL)
#define MWU_PERREGION_SUBSTATRA_SR17_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR17_Pos)
#define MWU_PERREGION_SUBSTATRA_SR17_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR17_Access (1UL)

/* Bit 16 : Subregion 16 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR16_Pos (16UL)
#define MWU_PERREGION_SUBSTATRA_SR16_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR16_Pos)
#define MWU_PERREGION_SUBSTATRA_SR16_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR16_Access (1UL)

/* Bit 15 : Subregion 15 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR15_Pos (15UL)
#define MWU_PERREGION_SUBSTATRA_SR15_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR15_Pos)
#define MWU_PERREGION_SUBSTATRA_SR15_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR15_Access (1UL)

/* Bit 14 : Subregion 14 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR14_Pos (14UL)
#define MWU_PERREGION_SUBSTATRA_SR14_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR14_Pos)
#define MWU_PERREGION_SUBSTATRA_SR14_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR14_Access (1UL)

/* Bit 13 : Subregion 13 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR13_Pos (13UL)
#define MWU_PERREGION_SUBSTATRA_SR13_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR13_Pos)
#define MWU_PERREGION_SUBSTATRA_SR13_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR13_Access (1UL)

/* Bit 12 : Subregion 12 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR12_Pos (12UL)
#define MWU_PERREGION_SUBSTATRA_SR12_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR12_Pos)
#define MWU_PERREGION_SUBSTATRA_SR12_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR12_Access (1UL)

/* Bit 11 : Subregion 11 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR11_Pos (11UL)
#define MWU_PERREGION_SUBSTATRA_SR11_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR11_Pos)
#define MWU_PERREGION_SUBSTATRA_SR11_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR11_Access (1UL)

/* Bit 10 : Subregion 10 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR10_Pos (10UL)
#define MWU_PERREGION_SUBSTATRA_SR10_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR10_Pos)
#define MWU_PERREGION_SUBSTATRA_SR10_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR10_Access (1UL)

/* Bit 9 : Subregion 9 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR9_Pos (9UL)
#define MWU_PERREGION_SUBSTATRA_SR9_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR9_Pos)
#define MWU_PERREGION_SUBSTATRA_SR9_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR9_Access (1UL)

/* Bit 8 : Subregion 8 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR8_Pos (8UL)
#define MWU_PERREGION_SUBSTATRA_SR8_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR8_Pos)
#define MWU_PERREGION_SUBSTATRA_SR8_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR8_Access (1UL)

/* Bit 7 : Subregion 7 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR7_Pos (7UL)
#define MWU_PERREGION_SUBSTATRA_SR7_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR7_Pos)
#define MWU_PERREGION_SUBSTATRA_SR7_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR7_Access (1UL)

/* Bit 6 : Subregion 6 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR6_Pos (6UL)
#define MWU_PERREGION_SUBSTATRA_SR6_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR6_Pos)
#define MWU_PERREGION_SUBSTATRA_SR6_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR6_Access (1UL)

/* Bit 5 : Subregion 5 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR5_Pos (5UL)
#define MWU_PERREGION_SUBSTATRA_SR5_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR5_Pos)
#define MWU_PERREGION_SUBSTATRA_SR5_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR5_Access (1UL)

/* Bit 4 : Subregion 4 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR4_Pos (4UL)
#define MWU_PERREGION_SUBSTATRA_SR4_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR4_Pos)
#define MWU_PERREGION_SUBSTATRA_SR4_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR4_Access (1UL)

/* Bit 3 : Subregion 3 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR3_Pos (3UL)
#define MWU_PERREGION_SUBSTATRA_SR3_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR3_Pos)
#define MWU_PERREGION_SUBSTATRA_SR3_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR3_Access (1UL)

/* Bit 2 : Subregion 2 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR2_Pos (2UL)
#define MWU_PERREGION_SUBSTATRA_SR2_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR2_Pos)
#define MWU_PERREGION_SUBSTATRA_SR2_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR2_Access (1UL)

/* Bit 1 : Subregion 1 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR1_Pos (1UL)
#define MWU_PERREGION_SUBSTATRA_SR1_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR1_Pos)
#define MWU_PERREGION_SUBSTATRA_SR1_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR1_Access (1UL)

/* Bit 0 : Subregion 0 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR0_Pos (0UL)
#define MWU_PERREGION_SUBSTATRA_SR0_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR0_Pos)
#define MWU_PERREGION_SUBSTATRA_SR0_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR0_Access (1UL)

/* Register: MWU_REGIONEN */
/* Description: Enable/disable regions watch */

/* Bit 27 : Enable/disable read access watch in PREGION[1] */
#define MWU_REGIONEN_PRGN1RA_Pos (27UL)
#define MWU_REGIONEN_PRGN1RA_Msk (0x1UL << MWU_REGIONEN_PRGN1RA_Pos)
#define MWU_REGIONEN_PRGN1RA_Disable (0UL)
#define MWU_REGIONEN_PRGN1RA_Enable (1UL)

/* Bit 26 : Enable/disable write access watch in PREGION[1] */
#define MWU_REGIONEN_PRGN1WA_Pos (26UL)
#define MWU_REGIONEN_PRGN1WA_Msk (0x1UL << MWU_REGIONEN_PRGN1WA_Pos)
#define MWU_REGIONEN_PRGN1WA_Disable (0UL)
#define MWU_REGIONEN_PRGN1WA_Enable (1UL)

/* Bit 25 : Enable/disable read access watch in PREGION[0] */
#define MWU_REGIONEN_PRGN0RA_Pos (25UL)
#define MWU_REGIONEN_PRGN0RA_Msk (0x1UL << MWU_REGIONEN_PRGN0RA_Pos)
#define MWU_REGIONEN_PRGN0RA_Disable (0UL)
#define MWU_REGIONEN_PRGN0RA_Enable (1UL)

/* Bit 24 : Enable/disable write access watch in PREGION[0] */
#define MWU_REGIONEN_PRGN0WA_Pos (24UL)
#define MWU_REGIONEN_PRGN0WA_Msk (0x1UL << MWU_REGIONEN_PRGN0WA_Pos)
#define MWU_REGIONEN_PRGN0WA_Disable (0UL)
#define MWU_REGIONEN_PRGN0WA_Enable (1UL)

/* Bit 7 : Enable/disable read access watch in region[3] */
#define MWU_REGIONEN_RGN3RA_Pos (7UL)
#define MWU_REGIONEN_RGN3RA_Msk (0x1UL << MWU_REGIONEN_RGN3RA_Pos)
#define MWU_REGIONEN_RGN3RA_Disable (0UL)
#define MWU_REGIONEN_RGN3RA_Enable (1UL)

/* Bit 6 : Enable/disable write access watch in region[3] */
#define MWU_REGIONEN_RGN3WA_Pos (6UL)
#define MWU_REGIONEN_RGN3WA_Msk (0x1UL << MWU_REGIONEN_RGN3WA_Pos)
#define MWU_REGIONEN_RGN3WA_Disable (0UL)
#define MWU_REGIONEN_RGN3WA_Enable (1UL)

/* Bit 5 : Enable/disable read access watch in region[2] */
#define MWU_REGIONEN_RGN2RA_Pos (5UL)
#define MWU_REGIONEN_RGN2RA_Msk (0x1UL << MWU_REGIONEN_RGN2RA_Pos)
#define MWU_REGIONEN_RGN2RA_Disable (0UL)
#define MWU_REGIONEN_RGN2RA_Enable (1UL)

/* Bit 4 : Enable/disable write access watch in region[2] */
#define MWU_REGIONEN_RGN2WA_Pos (4UL)
#define MWU_REGIONEN_RGN2WA_Msk (0x1UL << MWU_REGIONEN_RGN2WA_Pos)
#define MWU_REGIONEN_RGN2WA_Disable (0UL)
#define MWU_REGIONEN_RGN2WA_Enable (1UL)

/* Bit 3 : Enable/disable read access watch in region[1] */
#define MWU_REGIONEN_RGN1RA_Pos (3UL)
#define MWU_REGIONEN_RGN1RA_Msk (0x1UL << MWU_REGIONEN_RGN1RA_Pos)
#define MWU_REGIONEN_RGN1RA_Disable (0UL)
#define MWU_REGIONEN_RGN1RA_Enable (1UL)

/* Bit 2 : Enable/disable write access watch in region[1] */
#define MWU_REGIONEN_RGN1WA_Pos (2UL)
#define MWU_REGIONEN_RGN1WA_Msk (0x1UL << MWU_REGIONEN_RGN1WA_Pos)
#define MWU_REGIONEN_RGN1WA_Disable (0UL)
#define MWU_REGIONEN_RGN1WA_Enable (1UL)

/* Bit 1 : Enable/disable read access watch in region[0] */
#define MWU_REGIONEN_RGN0RA_Pos (1UL)
#define MWU_REGIONEN_RGN0RA_Msk (0x1UL << MWU_REGIONEN_RGN0RA_Pos)
#define MWU_REGIONEN_RGN0RA_Disable (0UL)
#define MWU_REGIONEN_RGN0RA_Enable (1UL)

/* Bit 0 : Enable/disable write access watch in region[0] */
#define MWU_REGIONEN_RGN0WA_Pos (0UL)
#define MWU_REGIONEN_RGN0WA_Msk (0x1UL << MWU_REGIONEN_RGN0WA_Pos)
#define MWU_REGIONEN_RGN0WA_Disable (0UL)
#define MWU_REGIONEN_RGN0WA_Enable (1UL)

/* Register: MWU_REGIONENSET */
/* Description: Enable regions watch */

/* Bit 27 : Enable read access watch in PREGION[1] */
#define MWU_REGIONENSET_PRGN1RA_Pos (27UL)
#define MWU_REGIONENSET_PRGN1RA_Msk (0x1UL << MWU_REGIONENSET_PRGN1RA_Pos)
#define MWU_REGIONENSET_PRGN1RA_Disabled (0UL)
#define MWU_REGIONENSET_PRGN1RA_Enabled (1UL)
#define MWU_REGIONENSET_PRGN1RA_Set (1UL)

/* Bit 26 : Enable write access watch in PREGION[1] */
#define MWU_REGIONENSET_PRGN1WA_Pos (26UL)
#define MWU_REGIONENSET_PRGN1WA_Msk (0x1UL << MWU_REGIONENSET_PRGN1WA_Pos)
#define MWU_REGIONENSET_PRGN1WA_Disabled (0UL)
#define MWU_REGIONENSET_PRGN1WA_Enabled (1UL)
#define MWU_REGIONENSET_PRGN1WA_Set (1UL)

/* Bit 25 : Enable read access watch in PREGION[0] */
#define MWU_REGIONENSET_PRGN0RA_Pos (25UL)
#define MWU_REGIONENSET_PRGN0RA_Msk (0x1UL << MWU_REGIONENSET_PRGN0RA_Pos)
#define MWU_REGIONENSET_PRGN0RA_Disabled (0UL)
#define MWU_REGIONENSET_PRGN0RA_Enabled (1UL)
#define MWU_REGIONENSET_PRGN0RA_Set (1UL)

/* Bit 24 : Enable write access watch in PREGION[0] */
#define MWU_REGIONENSET_PRGN0WA_Pos (24UL)
#define MWU_REGIONENSET_PRGN0WA_Msk (0x1UL << MWU_REGIONENSET_PRGN0WA_Pos)
#define MWU_REGIONENSET_PRGN0WA_Disabled (0UL)
#define MWU_REGIONENSET_PRGN0WA_Enabled (1UL)
#define MWU_REGIONENSET_PRGN0WA_Set (1UL)

/* Bit 7 : Enable read access watch in region[3] */
#define MWU_REGIONENSET_RGN3RA_Pos (7UL)
#define MWU_REGIONENSET_RGN3RA_Msk (0x1UL << MWU_REGIONENSET_RGN3RA_Pos)
#define MWU_REGIONENSET_RGN3RA_Disabled (0UL)
#define MWU_REGIONENSET_RGN3RA_Enabled (1UL)
#define MWU_REGIONENSET_RGN3RA_Set (1UL)

/* Bit 6 : Enable write access watch in region[3] */
#define MWU_REGIONENSET_RGN3WA_Pos (6UL)
#define MWU_REGIONENSET_RGN3WA_Msk (0x1UL << MWU_REGIONENSET_RGN3WA_Pos)
#define MWU_REGIONENSET_RGN3WA_Disabled (0UL)
#define MWU_REGIONENSET_RGN3WA_Enabled (1UL)
#define MWU_REGIONENSET_RGN3WA_Set (1UL)

/* Bit 5 : Enable read access watch in region[2] */
#define MWU_REGIONENSET_RGN2RA_Pos (5UL)
#define MWU_REGIONENSET_RGN2RA_Msk (0x1UL << MWU_REGIONENSET_RGN2RA_Pos)
#define MWU_REGIONENSET_RGN2RA_Disabled (0UL)
#define MWU_REGIONENSET_RGN2RA_Enabled (1UL)
#define MWU_REGIONENSET_RGN2RA_Set (1UL)

/* Bit 4 : Enable write access watch in region[2] */
#define MWU_REGIONENSET_RGN2WA_Pos (4UL)
#define MWU_REGIONENSET_RGN2WA_Msk (0x1UL << MWU_REGIONENSET_RGN2WA_Pos)
#define MWU_REGIONENSET_RGN2WA_Disabled (0UL)
#define MWU_REGIONENSET_RGN2WA_Enabled (1UL)
#define MWU_REGIONENSET_RGN2WA_Set (1UL)

/* Bit 3 : Enable read access watch in region[1] */
#define MWU_REGIONENSET_RGN1RA_Pos (3UL)
#define MWU_REGIONENSET_RGN1RA_Msk (0x1UL << MWU_REGIONENSET_RGN1RA_Pos)
#define MWU_REGIONENSET_RGN1RA_Disabled (0UL)
#define MWU_REGIONENSET_RGN1RA_Enabled (1UL)
#define MWU_REGIONENSET_RGN1RA_Set (1UL)

/* Bit 2 : Enable write access watch in region[1] */
#define MWU_REGIONENSET_RGN1WA_Pos (2UL)
#define MWU_REGIONENSET_RGN1WA_Msk (0x1UL << MWU_REGIONENSET_RGN1WA_Pos)
#define MWU_REGIONENSET_RGN1WA_Disabled (0UL)
#define MWU_REGIONENSET_RGN1WA_Enabled (1UL)
#define MWU_REGIONENSET_RGN1WA_Set (1UL)

/* Bit 1 : Enable read access watch in region[0] */
#define MWU_REGIONENSET_RGN0RA_Pos (1UL)
#define MWU_REGIONENSET_RGN0RA_Msk (0x1UL << MWU_REGIONENSET_RGN0RA_Pos)
#define MWU_REGIONENSET_RGN0RA_Disabled (0UL)
#define MWU_REGIONENSET_RGN0RA_Enabled (1UL)
#define MWU_REGIONENSET_RGN0RA_Set (1UL)

/* Bit 0 : Enable write access watch in region[0] */
#define MWU_REGIONENSET_RGN0WA_Pos (0UL)
#define MWU_REGIONENSET_RGN0WA_Msk (0x1UL << MWU_REGIONENSET_RGN0WA_Pos)
#define MWU_REGIONENSET_RGN0WA_Disabled (0UL)
#define MWU_REGIONENSET_RGN0WA_Enabled (1UL)
#define MWU_REGIONENSET_RGN0WA_Set (1UL)

/* Register: MWU_REGIONENCLR */
/* Description: Disable regions watch */

/* Bit 27 : Disable read access watch in PREGION[1] */
#define MWU_REGIONENCLR_PRGN1RA_Pos (27UL)
#define MWU_REGIONENCLR_PRGN1RA_Msk (0x1UL << MWU_REGIONENCLR_PRGN1RA_Pos)
#define MWU_REGIONENCLR_PRGN1RA_Disabled (0UL)
#define MWU_REGIONENCLR_PRGN1RA_Enabled (1UL)
#define MWU_REGIONENCLR_PRGN1RA_Clear (1UL)

/* Bit 26 : Disable write access watch in PREGION[1] */
#define MWU_REGIONENCLR_PRGN1WA_Pos (26UL)
#define MWU_REGIONENCLR_PRGN1WA_Msk (0x1UL << MWU_REGIONENCLR_PRGN1WA_Pos)
#define MWU_REGIONENCLR_PRGN1WA_Disabled (0UL)
#define MWU_REGIONENCLR_PRGN1WA_Enabled (1UL)
#define MWU_REGIONENCLR_PRGN1WA_Clear (1UL)

/* Bit 25 : Disable read access watch in PREGION[0] */
#define MWU_REGIONENCLR_PRGN0RA_Pos (25UL)
#define MWU_REGIONENCLR_PRGN0RA_Msk (0x1UL << MWU_REGIONENCLR_PRGN0RA_Pos)
#define MWU_REGIONENCLR_PRGN0RA_Disabled (0UL)
#define MWU_REGIONENCLR_PRGN0RA_Enabled (1UL)
#define MWU_REGIONENCLR_PRGN0RA_Clear (1UL)

/* Bit 24 : Disable write access watch in PREGION[0] */
#define MWU_REGIONENCLR_PRGN0WA_Pos (24UL)
#define MWU_REGIONENCLR_PRGN0WA_Msk (0x1UL << MWU_REGIONENCLR_PRGN0WA_Pos)
#define MWU_REGIONENCLR_PRGN0WA_Disabled (0UL)
#define MWU_REGIONENCLR_PRGN0WA_Enabled (1UL)
#define MWU_REGIONENCLR_PRGN0WA_Clear (1UL)

/* Bit 7 : Disable read access watch in region[3] */
#define MWU_REGIONENCLR_RGN3RA_Pos (7UL)
#define MWU_REGIONENCLR_RGN3RA_Msk (0x1UL << MWU_REGIONENCLR_RGN3RA_Pos)
#define MWU_REGIONENCLR_RGN3RA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN3RA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN3RA_Clear (1UL)

/* Bit 6 : Disable write access watch in region[3] */
#define MWU_REGIONENCLR_RGN3WA_Pos (6UL)
#define MWU_REGIONENCLR_RGN3WA_Msk (0x1UL << MWU_REGIONENCLR_RGN3WA_Pos)
#define MWU_REGIONENCLR_RGN3WA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN3WA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN3WA_Clear (1UL)

/* Bit 5 : Disable read access watch in region[2] */
#define MWU_REGIONENCLR_RGN2RA_Pos (5UL)
#define MWU_REGIONENCLR_RGN2RA_Msk (0x1UL << MWU_REGIONENCLR_RGN2RA_Pos)
#define MWU_REGIONENCLR_RGN2RA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN2RA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN2RA_Clear (1UL)

/* Bit 4 : Disable write access watch in region[2] */
#define MWU_REGIONENCLR_RGN2WA_Pos (4UL)
#define MWU_REGIONENCLR_RGN2WA_Msk (0x1UL << MWU_REGIONENCLR_RGN2WA_Pos)
#define MWU_REGIONENCLR_RGN2WA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN2WA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN2WA_Clear (1UL)

/* Bit 3 : Disable read access watch in region[1] */
#define MWU_REGIONENCLR_RGN1RA_Pos (3UL)
#define MWU_REGIONENCLR_RGN1RA_Msk (0x1UL << MWU_REGIONENCLR_RGN1RA_Pos)
#define MWU_REGIONENCLR_RGN1RA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN1RA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN1RA_Clear (1UL)

/* Bit 2 : Disable write access watch in region[1] */
#define MWU_REGIONENCLR_RGN1WA_Pos (2UL)
#define MWU_REGIONENCLR_RGN1WA_Msk (0x1UL << MWU_REGIONENCLR_RGN1WA_Pos)
#define MWU_REGIONENCLR_RGN1WA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN1WA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN1WA_Clear (1UL)

/* Bit 1 : Disable read access watch in region[0] */
#define MWU_REGIONENCLR_RGN0RA_Pos (1UL)
#define MWU_REGIONENCLR_RGN0RA_Msk (0x1UL << MWU_REGIONENCLR_RGN0RA_Pos)
#define MWU_REGIONENCLR_RGN0RA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN0RA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN0RA_Clear (1UL)

/* Bit 0 : Disable write access watch in region[0] */
#define MWU_REGIONENCLR_RGN0WA_Pos (0UL)
#define MWU_REGIONENCLR_RGN0WA_Msk (0x1UL << MWU_REGIONENCLR_RGN0WA_Pos)
#define MWU_REGIONENCLR_RGN0WA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN0WA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN0WA_Clear (1UL)

/* Register: MWU_REGION_START */
/* Description: Description cluster: Start address for region n */

/* Bits 31..0 : Start address for region */
#define MWU_REGION_START_START_Pos (0UL)
#define MWU_REGION_START_START_Msk (0xFFFFFFFFUL << MWU_REGION_START_START_Pos)

/* Register: MWU_REGION_END */
/* Description: Description cluster: End address of region n */

/* Bits 31..0 : End address of region. */
#define MWU_REGION_END_END_Pos (0UL)
#define MWU_REGION_END_END_Msk (0xFFFFFFFFUL << MWU_REGION_END_END_Pos)

/* Register: MWU_PREGION_START */
/* Description: Description cluster: Reserved for future use */

/* Bits 31..0 : Reserved for future use */
#define MWU_PREGION_START_START_Pos (0UL)
#define MWU_PREGION_START_START_Msk (0xFFFFFFFFUL << MWU_PREGION_START_START_Pos)

/* Register: MWU_PREGION_END */
/* Description: Description cluster: Reserved for future use */

/* Bits 31..0 : Reserved for future use */
#define MWU_PREGION_END_END_Pos (0UL)
#define MWU_PREGION_END_END_Msk (0xFFFFFFFFUL << MWU_PREGION_END_END_Pos)

/* Register: MWU_PREGION_SUBS */
/* Description: Description cluster: Subregions of region n */

/* Bit 31 : Include or exclude subregion 31 in region */
#define MWU_PREGION_SUBS_SR31_Pos (31UL)
#define MWU_PREGION_SUBS_SR31_Msk (0x1UL << MWU_PREGION_SUBS_SR31_Pos)
#define MWU_PREGION_SUBS_SR31_Exclude (0UL)
#define MWU_PREGION_SUBS_SR31_Include (1UL)

/* Bit 30 : Include or exclude subregion 30 in region */
#define MWU_PREGION_SUBS_SR30_Pos (30UL)
#define MWU_PREGION_SUBS_SR30_Msk (0x1UL << MWU_PREGION_SUBS_SR30_Pos)
#define MWU_PREGION_SUBS_SR30_Exclude (0UL)
#define MWU_PREGION_SUBS_SR30_Include (1UL)

/* Bit 29 : Include or exclude subregion 29 in region */
#define MWU_PREGION_SUBS_SR29_Pos (29UL)
#define MWU_PREGION_SUBS_SR29_Msk (0x1UL << MWU_PREGION_SUBS_SR29_Pos)
#define MWU_PREGION_SUBS_SR29_Exclude (0UL)
#define MWU_PREGION_SUBS_SR29_Include (1UL)

/* Bit 28 : Include or exclude subregion 28 in region */
#define MWU_PREGION_SUBS_SR28_Pos (28UL)
#define MWU_PREGION_SUBS_SR28_Msk (0x1UL << MWU_PREGION_SUBS_SR28_Pos)
#define MWU_PREGION_SUBS_SR28_Exclude (0UL)
#define MWU_PREGION_SUBS_SR28_Include (1UL)

/* Bit 27 : Include or exclude subregion 27 in region */
#define MWU_PREGION_SUBS_SR27_Pos (27UL)
#define MWU_PREGION_SUBS_SR27_Msk (0x1UL << MWU_PREGION_SUBS_SR27_Pos)
#define MWU_PREGION_SUBS_SR27_Exclude (0UL)
#define MWU_PREGION_SUBS_SR27_Include (1UL)

/* Bit 26 : Include or exclude subregion 26 in region */
#define MWU_PREGION_SUBS_SR26_Pos (26UL)
#define MWU_PREGION_SUBS_SR26_Msk (0x1UL << MWU_PREGION_SUBS_SR26_Pos)
#define MWU_PREGION_SUBS_SR26_Exclude (0UL)
#define MWU_PREGION_SUBS_SR26_Include (1UL)

/* Bit 25 : Include or exclude subregion 25 in region */
#define MWU_PREGION_SUBS_SR25_Pos (25UL)
#define MWU_PREGION_SUBS_SR25_Msk (0x1UL << MWU_PREGION_SUBS_SR25_Pos)
#define MWU_PREGION_SUBS_SR25_Exclude (0UL)
#define MWU_PREGION_SUBS_SR25_Include (1UL)

/* Bit 24 : Include or exclude subregion 24 in region */
#define MWU_PREGION_SUBS_SR24_Pos (24UL)
#define MWU_PREGION_SUBS_SR24_Msk (0x1UL << MWU_PREGION_SUBS_SR24_Pos)
#define MWU_PREGION_SUBS_SR24_Exclude (0UL)
#define MWU_PREGION_SUBS_SR24_Include (1UL)

/* Bit 23 : Include or exclude subregion 23 in region */
#define MWU_PREGION_SUBS_SR23_Pos (23UL)
#define MWU_PREGION_SUBS_SR23_Msk (0x1UL << MWU_PREGION_SUBS_SR23_Pos)
#define MWU_PREGION_SUBS_SR23_Exclude (0UL)
#define MWU_PREGION_SUBS_SR23_Include (1UL)

/* Bit 22 : Include or exclude subregion 22 in region */
#define MWU_PREGION_SUBS_SR22_Pos (22UL)
#define MWU_PREGION_SUBS_SR22_Msk (0x1UL << MWU_PREGION_SUBS_SR22_Pos)
#define MWU_PREGION_SUBS_SR22_Exclude (0UL)
#define MWU_PREGION_SUBS_SR22_Include (1UL)

/* Bit 21 : Include or exclude subregion 21 in region */
#define MWU_PREGION_SUBS_SR21_Pos (21UL)
#define MWU_PREGION_SUBS_SR21_Msk (0x1UL << MWU_PREGION_SUBS_SR21_Pos)
#define MWU_PREGION_SUBS_SR21_Exclude (0UL)
#define MWU_PREGION_SUBS_SR21_Include (1UL)

/* Bit 20 : Include or exclude subregion 20 in region */
#define MWU_PREGION_SUBS_SR20_Pos (20UL)
#define MWU_PREGION_SUBS_SR20_Msk (0x1UL << MWU_PREGION_SUBS_SR20_Pos)
#define MWU_PREGION_SUBS_SR20_Exclude (0UL)
#define MWU_PREGION_SUBS_SR20_Include (1UL)

/* Bit 19 : Include or exclude subregion 19 in region */
#define MWU_PREGION_SUBS_SR19_Pos (19UL)
#define MWU_PREGION_SUBS_SR19_Msk (0x1UL << MWU_PREGION_SUBS_SR19_Pos)
#define MWU_PREGION_SUBS_SR19_Exclude (0UL)
#define MWU_PREGION_SUBS_SR19_Include (1UL)

/* Bit 18 : Include or exclude subregion 18 in region */
#define MWU_PREGION_SUBS_SR18_Pos (18UL)
#define MWU_PREGION_SUBS_SR18_Msk (0x1UL << MWU_PREGION_SUBS_SR18_Pos)
#define MWU_PREGION_SUBS_SR18_Exclude (0UL)
#define MWU_PREGION_SUBS_SR18_Include (1UL)

/* Bit 17 : Include or exclude subregion 17 in region */
#define MWU_PREGION_SUBS_SR17_Pos (17UL)
#define MWU_PREGION_SUBS_SR17_Msk (0x1UL << MWU_PREGION_SUBS_SR17_Pos)
#define MWU_PREGION_SUBS_SR17_Exclude (0UL)
#define MWU_PREGION_SUBS_SR17_Include (1UL)

/* Bit 16 : Include or exclude subregion 16 in region */
#define MWU_PREGION_SUBS_SR16_Pos (16UL)
#define MWU_PREGION_SUBS_SR16_Msk (0x1UL << MWU_PREGION_SUBS_SR16_Pos)
#define MWU_PREGION_SUBS_SR16_Exclude (0UL)
#define MWU_PREGION_SUBS_SR16_Include (1UL)

/* Bit 15 : Include or exclude subregion 15 in region */
#define MWU_PREGION_SUBS_SR15_Pos (15UL)
#define MWU_PREGION_SUBS_SR15_Msk (0x1UL << MWU_PREGION_SUBS_SR15_Pos)
#define MWU_PREGION_SUBS_SR15_Exclude (0UL)
#define MWU_PREGION_SUBS_SR15_Include (1UL)

/* Bit 14 : Include or exclude subregion 14 in region */
#define MWU_PREGION_SUBS_SR14_Pos (14UL)
#define MWU_PREGION_SUBS_SR14_Msk (0x1UL << MWU_PREGION_SUBS_SR14_Pos)
#define MWU_PREGION_SUBS_SR14_Exclude (0UL)
#define MWU_PREGION_SUBS_SR14_Include (1UL)

/* Bit 13 : Include or exclude subregion 13 in region */
#define MWU_PREGION_SUBS_SR13_Pos (13UL)
#define MWU_PREGION_SUBS_SR13_Msk (0x1UL << MWU_PREGION_SUBS_SR13_Pos)
#define MWU_PREGION_SUBS_SR13_Exclude (0UL)
#define MWU_PREGION_SUBS_SR13_Include (1UL)

/* Bit 12 : Include or exclude subregion 12 in region */
#define MWU_PREGION_SUBS_SR12_Pos (12UL)
#define MWU_PREGION_SUBS_SR12_Msk (0x1UL << MWU_PREGION_SUBS_SR12_Pos)
#define MWU_PREGION_SUBS_SR12_Exclude (0UL)
#define MWU_PREGION_SUBS_SR12_Include (1UL)

/* Bit 11 : Include or exclude subregion 11 in region */
#define MWU_PREGION_SUBS_SR11_Pos (11UL)
#define MWU_PREGION_SUBS_SR11_Msk (0x1UL << MWU_PREGION_SUBS_SR11_Pos)
#define MWU_PREGION_SUBS_SR11_Exclude (0UL)
#define MWU_PREGION_SUBS_SR11_Include (1UL)

/* Bit 10 : Include or exclude subregion 10 in region */
#define MWU_PREGION_SUBS_SR10_Pos (10UL)
#define MWU_PREGION_SUBS_SR10_Msk (0x1UL << MWU_PREGION_SUBS_SR10_Pos)
#define MWU_PREGION_SUBS_SR10_Exclude (0UL)
#define MWU_PREGION_SUBS_SR10_Include (1UL)

/* Bit 9 : Include or exclude subregion 9 in region */
#define MWU_PREGION_SUBS_SR9_Pos (9UL)
#define MWU_PREGION_SUBS_SR9_Msk (0x1UL << MWU_PREGION_SUBS_SR9_Pos)
#define MWU_PREGION_SUBS_SR9_Exclude (0UL)
#define MWU_PREGION_SUBS_SR9_Include (1UL)

/* Bit 8 : Include or exclude subregion 8 in region */
#define MWU_PREGION_SUBS_SR8_Pos (8UL)
#define MWU_PREGION_SUBS_SR8_Msk (0x1UL << MWU_PREGION_SUBS_SR8_Pos)
#define MWU_PREGION_SUBS_SR8_Exclude (0UL)
#define MWU_PREGION_SUBS_SR8_Include (1UL)

/* Bit 7 : Include or exclude subregion 7 in region */
#define MWU_PREGION_SUBS_SR7_Pos (7UL)
#define MWU_PREGION_SUBS_SR7_Msk (0x1UL << MWU_PREGION_SUBS_SR7_Pos)
#define MWU_PREGION_SUBS_SR7_Exclude (0UL)
#define MWU_PREGION_SUBS_SR7_Include (1UL)

/* Bit 6 : Include or exclude subregion 6 in region */
#define MWU_PREGION_SUBS_SR6_Pos (6UL)
#define MWU_PREGION_SUBS_SR6_Msk (0x1UL << MWU_PREGION_SUBS_SR6_Pos)
#define MWU_PREGION_SUBS_SR6_Exclude (0UL)
#define MWU_PREGION_SUBS_SR6_Include (1UL)

/* Bit 5 : Include or exclude subregion 5 in region */
#define MWU_PREGION_SUBS_SR5_Pos (5UL)
#define MWU_PREGION_SUBS_SR5_Msk (0x1UL << MWU_PREGION_SUBS_SR5_Pos)
#define MWU_PREGION_SUBS_SR5_Exclude (0UL)
#define MWU_PREGION_SUBS_SR5_Include (1UL)

/* Bit 4 : Include or exclude subregion 4 in region */
#define MWU_PREGION_SUBS_SR4_Pos (4UL)
#define MWU_PREGION_SUBS_SR4_Msk (0x1UL << MWU_PREGION_SUBS_SR4_Pos)
#define MWU_PREGION_SUBS_SR4_Exclude (0UL)
#define MWU_PREGION_SUBS_SR4_Include (1UL)

/* Bit 3 : Include or exclude subregion 3 in region */
#define MWU_PREGION_SUBS_SR3_Pos (3UL)
#define MWU_PREGION_SUBS_SR3_Msk (0x1UL << MWU_PREGION_SUBS_SR3_Pos)
#define MWU_PREGION_SUBS_SR3_Exclude (0UL)
#define MWU_PREGION_SUBS_SR3_Include (1UL)

/* Bit 2 : Include or exclude subregion 2 in region */
#define MWU_PREGION_SUBS_SR2_Pos (2UL)
#define MWU_PREGION_SUBS_SR2_Msk (0x1UL << MWU_PREGION_SUBS_SR2_Pos)
#define MWU_PREGION_SUBS_SR2_Exclude (0UL)
#define MWU_PREGION_SUBS_SR2_Include (1UL)

/* Bit 1 : Include or exclude subregion 1 in region */
#define MWU_PREGION_SUBS_SR1_Pos (1UL)
#define MWU_PREGION_SUBS_SR1_Msk (0x1UL << MWU_PREGION_SUBS_SR1_Pos)
#define MWU_PREGION_SUBS_SR1_Exclude (0UL)
#define MWU_PREGION_SUBS_SR1_Include (1UL)

/* Bit 0 : Include or exclude subregion 0 in region */
#define MWU_PREGION_SUBS_SR0_Pos (0UL)
#define MWU_PREGION_SUBS_SR0_Msk (0x1UL << MWU_PREGION_SUBS_SR0_Pos)
#define MWU_PREGION_SUBS_SR0_Exclude (0UL)
#define MWU_PREGION_SUBS_SR0_Include (1UL)


/* Peripheral: NFCT */
/* Description: NFC-A compatible radio */

/* Register: NFCT_TASKS_ACTIVATE */
/* Description: Activate NFCT peripheral for incoming and outgoing frames, change state to activated */

/* Bit 0 : Activate NFCT peripheral for incoming and outgoing frames, change state to activated */
#define NFCT_TASKS_ACTIVATE_TASKS_ACTIVATE_Pos (0UL)
#define NFCT_TASKS_ACTIVATE_TASKS_ACTIVATE_Msk (0x1UL << NFCT_TASKS_ACTIVATE_TASKS_ACTIVATE_Pos)
#define NFCT_TASKS_ACTIVATE_TASKS_ACTIVATE_Trigger (1UL)

/* Register: NFCT_TASKS_DISABLE */
/* Description: Disable NFCT peripheral */

/* Bit 0 : Disable NFCT peripheral */
#define NFCT_TASKS_DISABLE_TASKS_DISABLE_Pos (0UL)
#define NFCT_TASKS_DISABLE_TASKS_DISABLE_Msk (0x1UL << NFCT_TASKS_DISABLE_TASKS_DISABLE_Pos)
#define NFCT_TASKS_DISABLE_TASKS_DISABLE_Trigger (1UL)

/* Register: NFCT_TASKS_SENSE */
/* Description: Enable NFC sense field mode, change state to sense mode */

/* Bit 0 : Enable NFC sense field mode, change state to sense mode */
#define NFCT_TASKS_SENSE_TASKS_SENSE_Pos (0UL)
#define NFCT_TASKS_SENSE_TASKS_SENSE_Msk (0x1UL << NFCT_TASKS_SENSE_TASKS_SENSE_Pos)
#define NFCT_TASKS_SENSE_TASKS_SENSE_Trigger (1UL)

/* Register: NFCT_TASKS_STARTTX */
/* Description: Start transmission of an outgoing frame, change state to transmit */

/* Bit 0 : Start transmission of an outgoing frame, change state to transmit */
#define NFCT_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL)
#define NFCT_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << NFCT_TASKS_STARTTX_TASKS_STARTTX_Pos)
#define NFCT_TASKS_STARTTX_TASKS_STARTTX_Trigger (1UL)

/* Register: NFCT_TASKS_ENABLERXDATA */
/* Description: Initializes the EasyDMA for receive. */

/* Bit 0 : Initializes the EasyDMA for receive. */
#define NFCT_TASKS_ENABLERXDATA_TASKS_ENABLERXDATA_Pos (0UL)
#define NFCT_TASKS_ENABLERXDATA_TASKS_ENABLERXDATA_Msk (0x1UL << NFCT_TASKS_ENABLERXDATA_TASKS_ENABLERXDATA_Pos)
#define NFCT_TASKS_ENABLERXDATA_TASKS_ENABLERXDATA_Trigger (1UL)

/* Register: NFCT_TASKS_GOIDLE */
/* Description: Force state machine to IDLE state */

/* Bit 0 : Force state machine to IDLE state */
#define NFCT_TASKS_GOIDLE_TASKS_GOIDLE_Pos (0UL)
#define NFCT_TASKS_GOIDLE_TASKS_GOIDLE_Msk (0x1UL << NFCT_TASKS_GOIDLE_TASKS_GOIDLE_Pos)
#define NFCT_TASKS_GOIDLE_TASKS_GOIDLE_Trigger (1UL)

/* Register: NFCT_TASKS_GOSLEEP */
/* Description: Force state machine to SLEEP_A state */

/* Bit 0 : Force state machine to SLEEP_A state */
#define NFCT_TASKS_GOSLEEP_TASKS_GOSLEEP_Pos (0UL)
#define NFCT_TASKS_GOSLEEP_TASKS_GOSLEEP_Msk (0x1UL << NFCT_TASKS_GOSLEEP_TASKS_GOSLEEP_Pos)
#define NFCT_TASKS_GOSLEEP_TASKS_GOSLEEP_Trigger (1UL)

/* Register: NFCT_EVENTS_READY */
/* Description: The NFCT peripheral is ready to receive and send frames */

/* Bit 0 : The NFCT peripheral is ready to receive and send frames */
#define NFCT_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define NFCT_EVENTS_READY_EVENTS_READY_Msk (0x1UL << NFCT_EVENTS_READY_EVENTS_READY_Pos)
#define NFCT_EVENTS_READY_EVENTS_READY_NotGenerated (0UL)
#define NFCT_EVENTS_READY_EVENTS_READY_Generated (1UL)

/* Register: NFCT_EVENTS_FIELDDETECTED */
/* Description: Remote NFC field detected */

/* Bit 0 : Remote NFC field detected */
#define NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_Pos (0UL)
#define NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_Msk (0x1UL << NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_Pos)
#define NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_NotGenerated (0UL)
#define NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_Generated (1UL)

/* Register: NFCT_EVENTS_FIELDLOST */
/* Description: Remote NFC field lost */

/* Bit 0 : Remote NFC field lost */
#define NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_Pos (0UL)
#define NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_Msk (0x1UL << NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_Pos)
#define NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_NotGenerated (0UL)
#define NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_Generated (1UL)

/* Register: NFCT_EVENTS_TXFRAMESTART */
/* Description: Marks the start of the first symbol of a transmitted frame */

/* Bit 0 : Marks the start of the first symbol of a transmitted frame */
#define NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_Pos (0UL)
#define NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_Msk (0x1UL << NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_Pos)
#define NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_NotGenerated (0UL)
#define NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_Generated (1UL)

/* Register: NFCT_EVENTS_TXFRAMEEND */
/* Description: Marks the end of the last transmitted on-air symbol of a frame */

/* Bit 0 : Marks the end of the last transmitted on-air symbol of a frame */
#define NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_Pos (0UL)
#define NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_Msk (0x1UL << NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_Pos)
#define NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_NotGenerated (0UL)
#define NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_Generated (1UL)

/* Register: NFCT_EVENTS_RXFRAMESTART */
/* Description: Marks the end of the first symbol of a received frame */

/* Bit 0 : Marks the end of the first symbol of a received frame */
#define NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_Pos (0UL)
#define NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_Msk (0x1UL << NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_Pos)
#define NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_NotGenerated (0UL)
#define NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_Generated (1UL)

/* Register: NFCT_EVENTS_RXFRAMEEND */
/* Description: Received data has been checked (CRC, parity) and transferred to RAM, and EasyDMA has ended accessing the RX buffer */

/* Bit 0 : Received data has been checked (CRC, parity) and transferred to RAM, and EasyDMA has ended accessing the RX buffer */
#define NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_Pos (0UL)
#define NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_Msk (0x1UL << NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_Pos)
#define NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_NotGenerated (0UL)
#define NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_Generated (1UL)

/* Register: NFCT_EVENTS_ERROR */
/* Description: NFC error reported. The ERRORSTATUS register contains details on the source of the error. */

/* Bit 0 : NFC error reported. The ERRORSTATUS register contains details on the source of the error. */
#define NFCT_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define NFCT_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << NFCT_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define NFCT_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define NFCT_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)

/* Register: NFCT_EVENTS_RXERROR */
/* Description: NFC RX frame error reported. The FRAMESTATUS.RX register contains details on the source of the error. */

/* Bit 0 : NFC RX frame error reported. The FRAMESTATUS.RX register contains details on the source of the error. */
#define NFCT_EVENTS_RXERROR_EVENTS_RXERROR_Pos (0UL)
#define NFCT_EVENTS_RXERROR_EVENTS_RXERROR_Msk (0x1UL << NFCT_EVENTS_RXERROR_EVENTS_RXERROR_Pos)
#define NFCT_EVENTS_RXERROR_EVENTS_RXERROR_NotGenerated (0UL)
#define NFCT_EVENTS_RXERROR_EVENTS_RXERROR_Generated (1UL)

/* Register: NFCT_EVENTS_ENDRX */
/* Description: RX buffer (as defined by PACKETPTR and MAXLEN) in Data RAM full. */

/* Bit 0 : RX buffer (as defined by PACKETPTR and MAXLEN) in Data RAM full. */
#define NFCT_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL)
#define NFCT_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << NFCT_EVENTS_ENDRX_EVENTS_ENDRX_Pos)
#define NFCT_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0UL)
#define NFCT_EVENTS_ENDRX_EVENTS_ENDRX_Generated (1UL)

/* Register: NFCT_EVENTS_ENDTX */
/* Description: Transmission of data in RAM has ended, and EasyDMA has ended accessing the TX buffer */

/* Bit 0 : Transmission of data in RAM has ended, and EasyDMA has ended accessing the TX buffer */
#define NFCT_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL)
#define NFCT_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << NFCT_EVENTS_ENDTX_EVENTS_ENDTX_Pos)
#define NFCT_EVENTS_ENDTX_EVENTS_ENDTX_NotGenerated (0UL)
#define NFCT_EVENTS_ENDTX_EVENTS_ENDTX_Generated (1UL)

/* Register: NFCT_EVENTS_AUTOCOLRESSTARTED */
/* Description: Auto collision resolution process has started */

/* Bit 0 : Auto collision resolution process has started */
#define NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_Pos (0UL)
#define NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_Msk (0x1UL << NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_Pos)
#define NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_NotGenerated (0UL)
#define NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_Generated (1UL)

/* Register: NFCT_EVENTS_COLLISION */
/* Description: NFC auto collision resolution error reported. */

/* Bit 0 : NFC auto collision resolution error reported. */
#define NFCT_EVENTS_COLLISION_EVENTS_COLLISION_Pos (0UL)
#define NFCT_EVENTS_COLLISION_EVENTS_COLLISION_Msk (0x1UL << NFCT_EVENTS_COLLISION_EVENTS_COLLISION_Pos)
#define NFCT_EVENTS_COLLISION_EVENTS_COLLISION_NotGenerated (0UL)
#define NFCT_EVENTS_COLLISION_EVENTS_COLLISION_Generated (1UL)

/* Register: NFCT_EVENTS_SELECTED */
/* Description: NFC auto collision resolution successfully completed */

/* Bit 0 : NFC auto collision resolution successfully completed */
#define NFCT_EVENTS_SELECTED_EVENTS_SELECTED_Pos (0UL)
#define NFCT_EVENTS_SELECTED_EVENTS_SELECTED_Msk (0x1UL << NFCT_EVENTS_SELECTED_EVENTS_SELECTED_Pos)
#define NFCT_EVENTS_SELECTED_EVENTS_SELECTED_NotGenerated (0UL)
#define NFCT_EVENTS_SELECTED_EVENTS_SELECTED_Generated (1UL)

/* Register: NFCT_EVENTS_STARTED */
/* Description: EasyDMA is ready to receive or send frames. */

/* Bit 0 : EasyDMA is ready to receive or send frames. */
#define NFCT_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define NFCT_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << NFCT_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define NFCT_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0UL)
#define NFCT_EVENTS_STARTED_EVENTS_STARTED_Generated (1UL)

/* Register: NFCT_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 5 : Shortcut between event TXFRAMEEND and task ENABLERXDATA */
#define NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Pos (5UL)
#define NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Msk (0x1UL << NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Pos)
#define NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Disabled (0UL)
#define NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Enabled (1UL)

/* Bit 1 : Shortcut between event FIELDLOST and task SENSE */
#define NFCT_SHORTS_FIELDLOST_SENSE_Pos (1UL)
#define NFCT_SHORTS_FIELDLOST_SENSE_Msk (0x1UL << NFCT_SHORTS_FIELDLOST_SENSE_Pos)
#define NFCT_SHORTS_FIELDLOST_SENSE_Disabled (0UL)
#define NFCT_SHORTS_FIELDLOST_SENSE_Enabled (1UL)

/* Bit 0 : Shortcut between event FIELDDETECTED and task ACTIVATE */
#define NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Pos (0UL)
#define NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Msk (0x1UL << NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Pos)
#define NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Disabled (0UL)
#define NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Enabled (1UL)

/* Register: NFCT_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 20 : Enable or disable interrupt for event STARTED */
#define NFCT_INTEN_STARTED_Pos (20UL)
#define NFCT_INTEN_STARTED_Msk (0x1UL << NFCT_INTEN_STARTED_Pos)
#define NFCT_INTEN_STARTED_Disabled (0UL)
#define NFCT_INTEN_STARTED_Enabled (1UL)

/* Bit 19 : Enable or disable interrupt for event SELECTED */
#define NFCT_INTEN_SELECTED_Pos (19UL)
#define NFCT_INTEN_SELECTED_Msk (0x1UL << NFCT_INTEN_SELECTED_Pos)
#define NFCT_INTEN_SELECTED_Disabled (0UL)
#define NFCT_INTEN_SELECTED_Enabled (1UL)

/* Bit 18 : Enable or disable interrupt for event COLLISION */
#define NFCT_INTEN_COLLISION_Pos (18UL)
#define NFCT_INTEN_COLLISION_Msk (0x1UL << NFCT_INTEN_COLLISION_Pos)
#define NFCT_INTEN_COLLISION_Disabled (0UL)
#define NFCT_INTEN_COLLISION_Enabled (1UL)

/* Bit 14 : Enable or disable interrupt for event AUTOCOLRESSTARTED */
#define NFCT_INTEN_AUTOCOLRESSTARTED_Pos (14UL)
#define NFCT_INTEN_AUTOCOLRESSTARTED_Msk (0x1UL << NFCT_INTEN_AUTOCOLRESSTARTED_Pos)
#define NFCT_INTEN_AUTOCOLRESSTARTED_Disabled (0UL)
#define NFCT_INTEN_AUTOCOLRESSTARTED_Enabled (1UL)

/* Bit 12 : Enable or disable interrupt for event ENDTX */
#define NFCT_INTEN_ENDTX_Pos (12UL)
#define NFCT_INTEN_ENDTX_Msk (0x1UL << NFCT_INTEN_ENDTX_Pos)
#define NFCT_INTEN_ENDTX_Disabled (0UL)
#define NFCT_INTEN_ENDTX_Enabled (1UL)

/* Bit 11 : Enable or disable interrupt for event ENDRX */
#define NFCT_INTEN_ENDRX_Pos (11UL)
#define NFCT_INTEN_ENDRX_Msk (0x1UL << NFCT_INTEN_ENDRX_Pos)
#define NFCT_INTEN_ENDRX_Disabled (0UL)
#define NFCT_INTEN_ENDRX_Enabled (1UL)

/* Bit 10 : Enable or disable interrupt for event RXERROR */
#define NFCT_INTEN_RXERROR_Pos (10UL)
#define NFCT_INTEN_RXERROR_Msk (0x1UL << NFCT_INTEN_RXERROR_Pos)
#define NFCT_INTEN_RXERROR_Disabled (0UL)
#define NFCT_INTEN_RXERROR_Enabled (1UL)

/* Bit 7 : Enable or disable interrupt for event ERROR */
#define NFCT_INTEN_ERROR_Pos (7UL)
#define NFCT_INTEN_ERROR_Msk (0x1UL << NFCT_INTEN_ERROR_Pos)
#define NFCT_INTEN_ERROR_Disabled (0UL)
#define NFCT_INTEN_ERROR_Enabled (1UL)

/* Bit 6 : Enable or disable interrupt for event RXFRAMEEND */
#define NFCT_INTEN_RXFRAMEEND_Pos (6UL)
#define NFCT_INTEN_RXFRAMEEND_Msk (0x1UL << NFCT_INTEN_RXFRAMEEND_Pos)
#define NFCT_INTEN_RXFRAMEEND_Disabled (0UL)
#define NFCT_INTEN_RXFRAMEEND_Enabled (1UL)

/* Bit 5 : Enable or disable interrupt for event RXFRAMESTART */
#define NFCT_INTEN_RXFRAMESTART_Pos (5UL)
#define NFCT_INTEN_RXFRAMESTART_Msk (0x1UL << NFCT_INTEN_RXFRAMESTART_Pos)
#define NFCT_INTEN_RXFRAMESTART_Disabled (0UL)
#define NFCT_INTEN_RXFRAMESTART_Enabled (1UL)

/* Bit 4 : Enable or disable interrupt for event TXFRAMEEND */
#define NFCT_INTEN_TXFRAMEEND_Pos (4UL)
#define NFCT_INTEN_TXFRAMEEND_Msk (0x1UL << NFCT_INTEN_TXFRAMEEND_Pos)
#define NFCT_INTEN_TXFRAMEEND_Disabled (0UL)
#define NFCT_INTEN_TXFRAMEEND_Enabled (1UL)

/* Bit 3 : Enable or disable interrupt for event TXFRAMESTART */
#define NFCT_INTEN_TXFRAMESTART_Pos (3UL)
#define NFCT_INTEN_TXFRAMESTART_Msk (0x1UL << NFCT_INTEN_TXFRAMESTART_Pos)
#define NFCT_INTEN_TXFRAMESTART_Disabled (0UL)
#define NFCT_INTEN_TXFRAMESTART_Enabled (1UL)

/* Bit 2 : Enable or disable interrupt for event FIELDLOST */
#define NFCT_INTEN_FIELDLOST_Pos (2UL)
#define NFCT_INTEN_FIELDLOST_Msk (0x1UL << NFCT_INTEN_FIELDLOST_Pos)
#define NFCT_INTEN_FIELDLOST_Disabled (0UL)
#define NFCT_INTEN_FIELDLOST_Enabled (1UL)

/* Bit 1 : Enable or disable interrupt for event FIELDDETECTED */
#define NFCT_INTEN_FIELDDETECTED_Pos (1UL)
#define NFCT_INTEN_FIELDDETECTED_Msk (0x1UL << NFCT_INTEN_FIELDDETECTED_Pos)
#define NFCT_INTEN_FIELDDETECTED_Disabled (0UL)
#define NFCT_INTEN_FIELDDETECTED_Enabled (1UL)

/* Bit 0 : Enable or disable interrupt for event READY */
#define NFCT_INTEN_READY_Pos (0UL)
#define NFCT_INTEN_READY_Msk (0x1UL << NFCT_INTEN_READY_Pos)
#define NFCT_INTEN_READY_Disabled (0UL)
#define NFCT_INTEN_READY_Enabled (1UL)

/* Register: NFCT_INTENSET */
/* Description: Enable interrupt */

/* Bit 20 : Write '1' to enable interrupt for event STARTED */
#define NFCT_INTENSET_STARTED_Pos (20UL)
#define NFCT_INTENSET_STARTED_Msk (0x1UL << NFCT_INTENSET_STARTED_Pos)
#define NFCT_INTENSET_STARTED_Disabled (0UL)
#define NFCT_INTENSET_STARTED_Enabled (1UL)
#define NFCT_INTENSET_STARTED_Set (1UL)

/* Bit 19 : Write '1' to enable interrupt for event SELECTED */
#define NFCT_INTENSET_SELECTED_Pos (19UL)
#define NFCT_INTENSET_SELECTED_Msk (0x1UL << NFCT_INTENSET_SELECTED_Pos)
#define NFCT_INTENSET_SELECTED_Disabled (0UL)
#define NFCT_INTENSET_SELECTED_Enabled (1UL)
#define NFCT_INTENSET_SELECTED_Set (1UL)

/* Bit 18 : Write '1' to enable interrupt for event COLLISION */
#define NFCT_INTENSET_COLLISION_Pos (18UL)
#define NFCT_INTENSET_COLLISION_Msk (0x1UL << NFCT_INTENSET_COLLISION_Pos)
#define NFCT_INTENSET_COLLISION_Disabled (0UL)
#define NFCT_INTENSET_COLLISION_Enabled (1UL)
#define NFCT_INTENSET_COLLISION_Set (1UL)

/* Bit 14 : Write '1' to enable interrupt for event AUTOCOLRESSTARTED */
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Pos (14UL)
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Msk (0x1UL << NFCT_INTENSET_AUTOCOLRESSTARTED_Pos)
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Disabled (0UL)
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Enabled (1UL)
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Set (1UL)

/* Bit 12 : Write '1' to enable interrupt for event ENDTX */
#define NFCT_INTENSET_ENDTX_Pos (12UL)
#define NFCT_INTENSET_ENDTX_Msk (0x1UL << NFCT_INTENSET_ENDTX_Pos)
#define NFCT_INTENSET_ENDTX_Disabled (0UL)
#define NFCT_INTENSET_ENDTX_Enabled (1UL)
#define NFCT_INTENSET_ENDTX_Set (1UL)

/* Bit 11 : Write '1' to enable interrupt for event ENDRX */
#define NFCT_INTENSET_ENDRX_Pos (11UL)
#define NFCT_INTENSET_ENDRX_Msk (0x1UL << NFCT_INTENSET_ENDRX_Pos)
#define NFCT_INTENSET_ENDRX_Disabled (0UL)
#define NFCT_INTENSET_ENDRX_Enabled (1UL)
#define NFCT_INTENSET_ENDRX_Set (1UL)

/* Bit 10 : Write '1' to enable interrupt for event RXERROR */
#define NFCT_INTENSET_RXERROR_Pos (10UL)
#define NFCT_INTENSET_RXERROR_Msk (0x1UL << NFCT_INTENSET_RXERROR_Pos)
#define NFCT_INTENSET_RXERROR_Disabled (0UL)
#define NFCT_INTENSET_RXERROR_Enabled (1UL)
#define NFCT_INTENSET_RXERROR_Set (1UL)

/* Bit 7 : Write '1' to enable interrupt for event ERROR */
#define NFCT_INTENSET_ERROR_Pos (7UL)
#define NFCT_INTENSET_ERROR_Msk (0x1UL << NFCT_INTENSET_ERROR_Pos)
#define NFCT_INTENSET_ERROR_Disabled (0UL)
#define NFCT_INTENSET_ERROR_Enabled (1UL)
#define NFCT_INTENSET_ERROR_Set (1UL)

/* Bit 6 : Write '1' to enable interrupt for event RXFRAMEEND */
#define NFCT_INTENSET_RXFRAMEEND_Pos (6UL)
#define NFCT_INTENSET_RXFRAMEEND_Msk (0x1UL << NFCT_INTENSET_RXFRAMEEND_Pos)
#define NFCT_INTENSET_RXFRAMEEND_Disabled (0UL)
#define NFCT_INTENSET_RXFRAMEEND_Enabled (1UL)
#define NFCT_INTENSET_RXFRAMEEND_Set (1UL)

/* Bit 5 : Write '1' to enable interrupt for event RXFRAMESTART */
#define NFCT_INTENSET_RXFRAMESTART_Pos (5UL)
#define NFCT_INTENSET_RXFRAMESTART_Msk (0x1UL << NFCT_INTENSET_RXFRAMESTART_Pos)
#define NFCT_INTENSET_RXFRAMESTART_Disabled (0UL)
#define NFCT_INTENSET_RXFRAMESTART_Enabled (1UL)
#define NFCT_INTENSET_RXFRAMESTART_Set (1UL)

/* Bit 4 : Write '1' to enable interrupt for event TXFRAMEEND */
#define NFCT_INTENSET_TXFRAMEEND_Pos (4UL)
#define NFCT_INTENSET_TXFRAMEEND_Msk (0x1UL << NFCT_INTENSET_TXFRAMEEND_Pos)
#define NFCT_INTENSET_TXFRAMEEND_Disabled (0UL)
#define NFCT_INTENSET_TXFRAMEEND_Enabled (1UL)
#define NFCT_INTENSET_TXFRAMEEND_Set (1UL)

/* Bit 3 : Write '1' to enable interrupt for event TXFRAMESTART */
#define NFCT_INTENSET_TXFRAMESTART_Pos (3UL)
#define NFCT_INTENSET_TXFRAMESTART_Msk (0x1UL << NFCT_INTENSET_TXFRAMESTART_Pos)
#define NFCT_INTENSET_TXFRAMESTART_Disabled (0UL)
#define NFCT_INTENSET_TXFRAMESTART_Enabled (1UL)
#define NFCT_INTENSET_TXFRAMESTART_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event FIELDLOST */
#define NFCT_INTENSET_FIELDLOST_Pos (2UL)
#define NFCT_INTENSET_FIELDLOST_Msk (0x1UL << NFCT_INTENSET_FIELDLOST_Pos)
#define NFCT_INTENSET_FIELDLOST_Disabled (0UL)
#define NFCT_INTENSET_FIELDLOST_Enabled (1UL)
#define NFCT_INTENSET_FIELDLOST_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event FIELDDETECTED */
#define NFCT_INTENSET_FIELDDETECTED_Pos (1UL)
#define NFCT_INTENSET_FIELDDETECTED_Msk (0x1UL << NFCT_INTENSET_FIELDDETECTED_Pos)
#define NFCT_INTENSET_FIELDDETECTED_Disabled (0UL)
#define NFCT_INTENSET_FIELDDETECTED_Enabled (1UL)
#define NFCT_INTENSET_FIELDDETECTED_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define NFCT_INTENSET_READY_Pos (0UL)
#define NFCT_INTENSET_READY_Msk (0x1UL << NFCT_INTENSET_READY_Pos)
#define NFCT_INTENSET_READY_Disabled (0UL)
#define NFCT_INTENSET_READY_Enabled (1UL)
#define NFCT_INTENSET_READY_Set (1UL)

/* Register: NFCT_INTENCLR */
/* Description: Disable interrupt */

/* Bit 20 : Write '1' to disable interrupt for event STARTED */
#define NFCT_INTENCLR_STARTED_Pos (20UL)
#define NFCT_INTENCLR_STARTED_Msk (0x1UL << NFCT_INTENCLR_STARTED_Pos)
#define NFCT_INTENCLR_STARTED_Disabled (0UL)
#define NFCT_INTENCLR_STARTED_Enabled (1UL)
#define NFCT_INTENCLR_STARTED_Clear (1UL)

/* Bit 19 : Write '1' to disable interrupt for event SELECTED */
#define NFCT_INTENCLR_SELECTED_Pos (19UL)
#define NFCT_INTENCLR_SELECTED_Msk (0x1UL << NFCT_INTENCLR_SELECTED_Pos)
#define NFCT_INTENCLR_SELECTED_Disabled (0UL)
#define NFCT_INTENCLR_SELECTED_Enabled (1UL)
#define NFCT_INTENCLR_SELECTED_Clear (1UL)

/* Bit 18 : Write '1' to disable interrupt for event COLLISION */
#define NFCT_INTENCLR_COLLISION_Pos (18UL)
#define NFCT_INTENCLR_COLLISION_Msk (0x1UL << NFCT_INTENCLR_COLLISION_Pos)
#define NFCT_INTENCLR_COLLISION_Disabled (0UL)
#define NFCT_INTENCLR_COLLISION_Enabled (1UL)
#define NFCT_INTENCLR_COLLISION_Clear (1UL)

/* Bit 14 : Write '1' to disable interrupt for event AUTOCOLRESSTARTED */
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Pos (14UL)
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Msk (0x1UL << NFCT_INTENCLR_AUTOCOLRESSTARTED_Pos)
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Disabled (0UL)
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Enabled (1UL)
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Clear (1UL)

/* Bit 12 : Write '1' to disable interrupt for event ENDTX */
#define NFCT_INTENCLR_ENDTX_Pos (12UL)
#define NFCT_INTENCLR_ENDTX_Msk (0x1UL << NFCT_INTENCLR_ENDTX_Pos)
#define NFCT_INTENCLR_ENDTX_Disabled (0UL)
#define NFCT_INTENCLR_ENDTX_Enabled (1UL)
#define NFCT_INTENCLR_ENDTX_Clear (1UL)

/* Bit 11 : Write '1' to disable interrupt for event ENDRX */
#define NFCT_INTENCLR_ENDRX_Pos (11UL)
#define NFCT_INTENCLR_ENDRX_Msk (0x1UL << NFCT_INTENCLR_ENDRX_Pos)
#define NFCT_INTENCLR_ENDRX_Disabled (0UL)
#define NFCT_INTENCLR_ENDRX_Enabled (1UL)
#define NFCT_INTENCLR_ENDRX_Clear (1UL)

/* Bit 10 : Write '1' to disable interrupt for event RXERROR */
#define NFCT_INTENCLR_RXERROR_Pos (10UL)
#define NFCT_INTENCLR_RXERROR_Msk (0x1UL << NFCT_INTENCLR_RXERROR_Pos)
#define NFCT_INTENCLR_RXERROR_Disabled (0UL)
#define NFCT_INTENCLR_RXERROR_Enabled (1UL)
#define NFCT_INTENCLR_RXERROR_Clear (1UL)

/* Bit 7 : Write '1' to disable interrupt for event ERROR */
#define NFCT_INTENCLR_ERROR_Pos (7UL)
#define NFCT_INTENCLR_ERROR_Msk (0x1UL << NFCT_INTENCLR_ERROR_Pos)
#define NFCT_INTENCLR_ERROR_Disabled (0UL)
#define NFCT_INTENCLR_ERROR_Enabled (1UL)
#define NFCT_INTENCLR_ERROR_Clear (1UL)

/* Bit 6 : Write '1' to disable interrupt for event RXFRAMEEND */
#define NFCT_INTENCLR_RXFRAMEEND_Pos (6UL)
#define NFCT_INTENCLR_RXFRAMEEND_Msk (0x1UL << NFCT_INTENCLR_RXFRAMEEND_Pos)
#define NFCT_INTENCLR_RXFRAMEEND_Disabled (0UL)
#define NFCT_INTENCLR_RXFRAMEEND_Enabled (1UL)
#define NFCT_INTENCLR_RXFRAMEEND_Clear (1UL)

/* Bit 5 : Write '1' to disable interrupt for event RXFRAMESTART */
#define NFCT_INTENCLR_RXFRAMESTART_Pos (5UL)
#define NFCT_INTENCLR_RXFRAMESTART_Msk (0x1UL << NFCT_INTENCLR_RXFRAMESTART_Pos)
#define NFCT_INTENCLR_RXFRAMESTART_Disabled (0UL)
#define NFCT_INTENCLR_RXFRAMESTART_Enabled (1UL)
#define NFCT_INTENCLR_RXFRAMESTART_Clear (1UL)

/* Bit 4 : Write '1' to disable interrupt for event TXFRAMEEND */
#define NFCT_INTENCLR_TXFRAMEEND_Pos (4UL)
#define NFCT_INTENCLR_TXFRAMEEND_Msk (0x1UL << NFCT_INTENCLR_TXFRAMEEND_Pos)
#define NFCT_INTENCLR_TXFRAMEEND_Disabled (0UL)
#define NFCT_INTENCLR_TXFRAMEEND_Enabled (1UL)
#define NFCT_INTENCLR_TXFRAMEEND_Clear (1UL)

/* Bit 3 : Write '1' to disable interrupt for event TXFRAMESTART */
#define NFCT_INTENCLR_TXFRAMESTART_Pos (3UL)
#define NFCT_INTENCLR_TXFRAMESTART_Msk (0x1UL << NFCT_INTENCLR_TXFRAMESTART_Pos)
#define NFCT_INTENCLR_TXFRAMESTART_Disabled (0UL)
#define NFCT_INTENCLR_TXFRAMESTART_Enabled (1UL)
#define NFCT_INTENCLR_TXFRAMESTART_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event FIELDLOST */
#define NFCT_INTENCLR_FIELDLOST_Pos (2UL)
#define NFCT_INTENCLR_FIELDLOST_Msk (0x1UL << NFCT_INTENCLR_FIELDLOST_Pos)
#define NFCT_INTENCLR_FIELDLOST_Disabled (0UL)
#define NFCT_INTENCLR_FIELDLOST_Enabled (1UL)
#define NFCT_INTENCLR_FIELDLOST_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event FIELDDETECTED */
#define NFCT_INTENCLR_FIELDDETECTED_Pos (1UL)
#define NFCT_INTENCLR_FIELDDETECTED_Msk (0x1UL << NFCT_INTENCLR_FIELDDETECTED_Pos)
#define NFCT_INTENCLR_FIELDDETECTED_Disabled (0UL)
#define NFCT_INTENCLR_FIELDDETECTED_Enabled (1UL)
#define NFCT_INTENCLR_FIELDDETECTED_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event READY */
#define NFCT_INTENCLR_READY_Pos (0UL)
#define NFCT_INTENCLR_READY_Msk (0x1UL << NFCT_INTENCLR_READY_Pos)
#define NFCT_INTENCLR_READY_Disabled (0UL)
#define NFCT_INTENCLR_READY_Enabled (1UL)
#define NFCT_INTENCLR_READY_Clear (1UL)

/* Register: NFCT_ERRORSTATUS */
/* Description: NFC Error Status register */

/* Bit 0 : No STARTTX task triggered before expiration of the time set in FRAMEDELAYMAX */
#define NFCT_ERRORSTATUS_FRAMEDELAYTIMEOUT_Pos (0UL)
#define NFCT_ERRORSTATUS_FRAMEDELAYTIMEOUT_Msk (0x1UL << NFCT_ERRORSTATUS_FRAMEDELAYTIMEOUT_Pos)

/* Register: NFCT_FRAMESTATUS_RX */
/* Description: Result of last incoming frame */

/* Bit 3 : Overrun detected */
#define NFCT_FRAMESTATUS_RX_OVERRUN_Pos (3UL)
#define NFCT_FRAMESTATUS_RX_OVERRUN_Msk (0x1UL << NFCT_FRAMESTATUS_RX_OVERRUN_Pos)
#define NFCT_FRAMESTATUS_RX_OVERRUN_NoOverrun (0UL)
#define NFCT_FRAMESTATUS_RX_OVERRUN_Overrun (1UL)

/* Bit 2 : Parity status of received frame */
#define NFCT_FRAMESTATUS_RX_PARITYSTATUS_Pos (2UL)
#define NFCT_FRAMESTATUS_RX_PARITYSTATUS_Msk (0x1UL << NFCT_FRAMESTATUS_RX_PARITYSTATUS_Pos)
#define NFCT_FRAMESTATUS_RX_PARITYSTATUS_ParityOK (0UL)
#define NFCT_FRAMESTATUS_RX_PARITYSTATUS_ParityError (1UL)

/* Bit 0 : No valid end of frame (EoF) detected */
#define NFCT_FRAMESTATUS_RX_CRCERROR_Pos (0UL)
#define NFCT_FRAMESTATUS_RX_CRCERROR_Msk (0x1UL << NFCT_FRAMESTATUS_RX_CRCERROR_Pos)
#define NFCT_FRAMESTATUS_RX_CRCERROR_CRCCorrect (0UL)
#define NFCT_FRAMESTATUS_RX_CRCERROR_CRCError (1UL)

/* Register: NFCT_NFCTAGSTATE */
/* Description: NfcTag state register */

/* Bits 2..0 : NfcTag state */
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Pos (0UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Msk (0x7UL << NFCT_NFCTAGSTATE_NFCTAGSTATE_Pos)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Disabled (0UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_RampUp (2UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Idle (3UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Receive (4UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_FrameDelay (5UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Transmit (6UL)

/* Register: NFCT_SLEEPSTATE */
/* Description: Sleep state during automatic collision resolution */

/* Bit 0 : Reflects the sleep state during automatic collision resolution. Set to IDLE 
        by a GOIDLE task. Set to SLEEP_A when a valid SLEEP_REQ frame is received or by a 
        GOSLEEP task. */
#define NFCT_SLEEPSTATE_SLEEPSTATE_Pos (0UL)
#define NFCT_SLEEPSTATE_SLEEPSTATE_Msk (0x1UL << NFCT_SLEEPSTATE_SLEEPSTATE_Pos)
#define NFCT_SLEEPSTATE_SLEEPSTATE_Idle (0UL)
#define NFCT_SLEEPSTATE_SLEEPSTATE_SleepA (1UL)

/* Register: NFCT_FIELDPRESENT */
/* Description: Indicates the presence or not of a valid field */

/* Bit 1 : Indicates if the low level has locked to the field */
#define NFCT_FIELDPRESENT_LOCKDETECT_Pos (1UL)
#define NFCT_FIELDPRESENT_LOCKDETECT_Msk (0x1UL << NFCT_FIELDPRESENT_LOCKDETECT_Pos)
#define NFCT_FIELDPRESENT_LOCKDETECT_NotLocked (0UL)
#define NFCT_FIELDPRESENT_LOCKDETECT_Locked (1UL)

/* Bit 0 : Indicates if a valid field is present. Available only in the activated state. */
#define NFCT_FIELDPRESENT_FIELDPRESENT_Pos (0UL)
#define NFCT_FIELDPRESENT_FIELDPRESENT_Msk (0x1UL << NFCT_FIELDPRESENT_FIELDPRESENT_Pos)
#define NFCT_FIELDPRESENT_FIELDPRESENT_NoField (0UL)
#define NFCT_FIELDPRESENT_FIELDPRESENT_FieldPresent (1UL)

/* Register: NFCT_FRAMEDELAYMIN */
/* Description: Minimum frame delay */

/* Bits 15..0 : Minimum frame delay in number of 13.56 MHz clocks */
#define NFCT_FRAMEDELAYMIN_FRAMEDELAYMIN_Pos (0UL)
#define NFCT_FRAMEDELAYMIN_FRAMEDELAYMIN_Msk (0xFFFFUL << NFCT_FRAMEDELAYMIN_FRAMEDELAYMIN_Pos)

/* Register: NFCT_FRAMEDELAYMAX */
/* Description: Maximum frame delay */

/* Bits 19..0 : Maximum frame delay in number of 13.56 MHz clocks */
#define NFCT_FRAMEDELAYMAX_FRAMEDELAYMAX_Pos (0UL)
#define NFCT_FRAMEDELAYMAX_FRAMEDELAYMAX_Msk (0xFFFFFUL << NFCT_FRAMEDELAYMAX_FRAMEDELAYMAX_Pos)

/* Register: NFCT_FRAMEDELAYMODE */
/* Description: Configuration register for the Frame Delay Timer */

/* Bits 1..0 : Configuration register for the Frame Delay Timer */
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_Pos (0UL)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_Msk (0x3UL << NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_Pos)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_FreeRun (0UL)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_Window (1UL)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_ExactVal (2UL)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_WindowGrid (3UL)

/* Register: NFCT_PACKETPTR */
/* Description: Packet pointer for TXD and RXD data storage in Data RAM */

/* Bits 31..0 : Packet pointer for TXD and RXD data storage in Data RAM. This address is a byte-aligned RAM address. */
#define NFCT_PACKETPTR_PTR_Pos (0UL)
#define NFCT_PACKETPTR_PTR_Msk (0xFFFFFFFFUL << NFCT_PACKETPTR_PTR_Pos)

/* Register: NFCT_MAXLEN */
/* Description: Size of the RAM buffer allocated to TXD and RXD data storage each */

/* Bits 8..0 : Size of the RAM buffer allocated to TXD and RXD data storage each */
#define NFCT_MAXLEN_MAXLEN_Pos (0UL)
#define NFCT_MAXLEN_MAXLEN_Msk (0x1FFUL << NFCT_MAXLEN_MAXLEN_Pos)

/* Register: NFCT_TXD_FRAMECONFIG */
/* Description: Configuration of outgoing frames */

/* Bit 4 : CRC mode for outgoing frames */
#define NFCT_TXD_FRAMECONFIG_CRCMODETX_Pos (4UL)
#define NFCT_TXD_FRAMECONFIG_CRCMODETX_Msk (0x1UL << NFCT_TXD_FRAMECONFIG_CRCMODETX_Pos)
#define NFCT_TXD_FRAMECONFIG_CRCMODETX_NoCRCTX (0UL)
#define NFCT_TXD_FRAMECONFIG_CRCMODETX_CRC16TX (1UL)

/* Bit 2 : Adding SoF or not in TX frames */
#define NFCT_TXD_FRAMECONFIG_SOF_Pos (2UL)
#define NFCT_TXD_FRAMECONFIG_SOF_Msk (0x1UL << NFCT_TXD_FRAMECONFIG_SOF_Pos)
#define NFCT_TXD_FRAMECONFIG_SOF_NoSoF (0UL)
#define NFCT_TXD_FRAMECONFIG_SOF_SoF (1UL)

/* Bit 1 : Discarding unused bits at start or end of a frame */
#define NFCT_TXD_FRAMECONFIG_DISCARDMODE_Pos (1UL)
#define NFCT_TXD_FRAMECONFIG_DISCARDMODE_Msk (0x1UL << NFCT_TXD_FRAMECONFIG_DISCARDMODE_Pos)
#define NFCT_TXD_FRAMECONFIG_DISCARDMODE_DiscardEnd (0UL)
#define NFCT_TXD_FRAMECONFIG_DISCARDMODE_DiscardStart (1UL)

/* Bit 0 : Indicates if parity is added to the frame */
#define NFCT_TXD_FRAMECONFIG_PARITY_Pos (0UL)
#define NFCT_TXD_FRAMECONFIG_PARITY_Msk (0x1UL << NFCT_TXD_FRAMECONFIG_PARITY_Pos)
#define NFCT_TXD_FRAMECONFIG_PARITY_NoParity (0UL)
#define NFCT_TXD_FRAMECONFIG_PARITY_Parity (1UL)

/* Register: NFCT_TXD_AMOUNT */
/* Description: Size of outgoing frame */

/* Bits 11..3 : Number of complete bytes that shall be included in the frame, excluding CRC, parity and framing */
#define NFCT_TXD_AMOUNT_TXDATABYTES_Pos (3UL)
#define NFCT_TXD_AMOUNT_TXDATABYTES_Msk (0x1FFUL << NFCT_TXD_AMOUNT_TXDATABYTES_Pos)

/* Bits 2..0 : Number of bits in the last or first byte read from RAM that shall be included in the frame (excluding parity bit). */
#define NFCT_TXD_AMOUNT_TXDATABITS_Pos (0UL)
#define NFCT_TXD_AMOUNT_TXDATABITS_Msk (0x7UL << NFCT_TXD_AMOUNT_TXDATABITS_Pos)

/* Register: NFCT_RXD_FRAMECONFIG */
/* Description: Configuration of incoming frames */

/* Bit 4 : CRC mode for incoming frames */
#define NFCT_RXD_FRAMECONFIG_CRCMODERX_Pos (4UL)
#define NFCT_RXD_FRAMECONFIG_CRCMODERX_Msk (0x1UL << NFCT_RXD_FRAMECONFIG_CRCMODERX_Pos)
#define NFCT_RXD_FRAMECONFIG_CRCMODERX_NoCRCRX (0UL)
#define NFCT_RXD_FRAMECONFIG_CRCMODERX_CRC16RX (1UL)

/* Bit 2 : SoF expected or not in RX frames */
#define NFCT_RXD_FRAMECONFIG_SOF_Pos (2UL)
#define NFCT_RXD_FRAMECONFIG_SOF_Msk (0x1UL << NFCT_RXD_FRAMECONFIG_SOF_Pos)
#define NFCT_RXD_FRAMECONFIG_SOF_NoSoF (0UL)
#define NFCT_RXD_FRAMECONFIG_SOF_SoF (1UL)

/* Bit 0 : Indicates if parity expected in RX frame */
#define NFCT_RXD_FRAMECONFIG_PARITY_Pos (0UL)
#define NFCT_RXD_FRAMECONFIG_PARITY_Msk (0x1UL << NFCT_RXD_FRAMECONFIG_PARITY_Pos)
#define NFCT_RXD_FRAMECONFIG_PARITY_NoParity (0UL)
#define NFCT_RXD_FRAMECONFIG_PARITY_Parity (1UL)

/* Register: NFCT_RXD_AMOUNT */
/* Description: Size of last incoming frame */

/* Bits 11..3 : Number of complete bytes received in the frame (including CRC, but excluding parity and SoF/EoF framing) */
#define NFCT_RXD_AMOUNT_RXDATABYTES_Pos (3UL)
#define NFCT_RXD_AMOUNT_RXDATABYTES_Msk (0x1FFUL << NFCT_RXD_AMOUNT_RXDATABYTES_Pos)

/* Bits 2..0 : Number of bits in the last byte in the frame, if less than 8 (including CRC, but excluding parity and SoF/EoF framing). */
#define NFCT_RXD_AMOUNT_RXDATABITS_Pos (0UL)
#define NFCT_RXD_AMOUNT_RXDATABITS_Msk (0x7UL << NFCT_RXD_AMOUNT_RXDATABITS_Pos)

/* Register: NFCT_MODULATIONCTRL */
/* Description: Enables the modulation output to a GPIO pin which can be connected to a second external antenna. */

/* Bits 1..0 : Configuration of modulation control. */
#define NFCT_MODULATIONCTRL_MODULATIONCTRL_Pos (0UL)
#define NFCT_MODULATIONCTRL_MODULATIONCTRL_Msk (0x3UL << NFCT_MODULATIONCTRL_MODULATIONCTRL_Pos)
#define NFCT_MODULATIONCTRL_MODULATIONCTRL_Invalid (0x0UL)
#define NFCT_MODULATIONCTRL_MODULATIONCTRL_Internal (0x1UL)
#define NFCT_MODULATIONCTRL_MODULATIONCTRL_ModToGpio (0x2UL)
#define NFCT_MODULATIONCTRL_MODULATIONCTRL_InternalAndModToGpio (0x3UL)

/* Register: NFCT_MODULATIONPSEL */
/* Description: Pin select for Modulation control. */

/* Bit 31 : Connection */
#define NFCT_MODULATIONPSEL_CONNECT_Pos (31UL)
#define NFCT_MODULATIONPSEL_CONNECT_Msk (0x1UL << NFCT_MODULATIONPSEL_CONNECT_Pos)
#define NFCT_MODULATIONPSEL_CONNECT_Connected (0UL)
#define NFCT_MODULATIONPSEL_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define NFCT_MODULATIONPSEL_PORT_Pos (5UL)
#define NFCT_MODULATIONPSEL_PORT_Msk (0x1UL << NFCT_MODULATIONPSEL_PORT_Pos)

/* Bits 4..0 : Pin number */
#define NFCT_MODULATIONPSEL_PIN_Pos (0UL)
#define NFCT_MODULATIONPSEL_PIN_Msk (0x1FUL << NFCT_MODULATIONPSEL_PIN_Pos)

/* Register: NFCT_NFCID1_LAST */
/* Description: Last NFCID1 part (4, 7 or 10 bytes ID) */

/* Bits 31..24 : NFCID1 byte W */
#define NFCT_NFCID1_LAST_NFCID1_W_Pos (24UL)
#define NFCT_NFCID1_LAST_NFCID1_W_Msk (0xFFUL << NFCT_NFCID1_LAST_NFCID1_W_Pos)

/* Bits 23..16 : NFCID1 byte X */
#define NFCT_NFCID1_LAST_NFCID1_X_Pos (16UL)
#define NFCT_NFCID1_LAST_NFCID1_X_Msk (0xFFUL << NFCT_NFCID1_LAST_NFCID1_X_Pos)

/* Bits 15..8 : NFCID1 byte Y */
#define NFCT_NFCID1_LAST_NFCID1_Y_Pos (8UL)
#define NFCT_NFCID1_LAST_NFCID1_Y_Msk (0xFFUL << NFCT_NFCID1_LAST_NFCID1_Y_Pos)

/* Bits 7..0 : NFCID1 byte Z (very last byte sent) */
#define NFCT_NFCID1_LAST_NFCID1_Z_Pos (0UL)
#define NFCT_NFCID1_LAST_NFCID1_Z_Msk (0xFFUL << NFCT_NFCID1_LAST_NFCID1_Z_Pos)

/* Register: NFCT_NFCID1_2ND_LAST */
/* Description: Second last NFCID1 part (7 or 10 bytes ID) */

/* Bits 23..16 : NFCID1 byte T */
#define NFCT_NFCID1_2ND_LAST_NFCID1_T_Pos (16UL)
#define NFCT_NFCID1_2ND_LAST_NFCID1_T_Msk (0xFFUL << NFCT_NFCID1_2ND_LAST_NFCID1_T_Pos)

/* Bits 15..8 : NFCID1 byte U */
#define NFCT_NFCID1_2ND_LAST_NFCID1_U_Pos (8UL)
#define NFCT_NFCID1_2ND_LAST_NFCID1_U_Msk (0xFFUL << NFCT_NFCID1_2ND_LAST_NFCID1_U_Pos)

/* Bits 7..0 : NFCID1 byte V */
#define NFCT_NFCID1_2ND_LAST_NFCID1_V_Pos (0UL)
#define NFCT_NFCID1_2ND_LAST_NFCID1_V_Msk (0xFFUL << NFCT_NFCID1_2ND_LAST_NFCID1_V_Pos)

/* Register: NFCT_NFCID1_3RD_LAST */
/* Description: Third last NFCID1 part (10 bytes ID) */

/* Bits 23..16 : NFCID1 byte Q */
#define NFCT_NFCID1_3RD_LAST_NFCID1_Q_Pos (16UL)
#define NFCT_NFCID1_3RD_LAST_NFCID1_Q_Msk (0xFFUL << NFCT_NFCID1_3RD_LAST_NFCID1_Q_Pos)

/* Bits 15..8 : NFCID1 byte R */
#define NFCT_NFCID1_3RD_LAST_NFCID1_R_Pos (8UL)
#define NFCT_NFCID1_3RD_LAST_NFCID1_R_Msk (0xFFUL << NFCT_NFCID1_3RD_LAST_NFCID1_R_Pos)

/* Bits 7..0 : NFCID1 byte S */
#define NFCT_NFCID1_3RD_LAST_NFCID1_S_Pos (0UL)
#define NFCT_NFCID1_3RD_LAST_NFCID1_S_Msk (0xFFUL << NFCT_NFCID1_3RD_LAST_NFCID1_S_Pos)

/* Register: NFCT_AUTOCOLRESCONFIG */
/* Description: Controls the auto collision resolution function. This setting must be done before the NFCT peripheral is activated. */

/* Bit 0 : Enables/disables auto collision resolution */
#define NFCT_AUTOCOLRESCONFIG_MODE_Pos (0UL)
#define NFCT_AUTOCOLRESCONFIG_MODE_Msk (0x1UL << NFCT_AUTOCOLRESCONFIG_MODE_Pos)
#define NFCT_AUTOCOLRESCONFIG_MODE_Enabled (0UL)
#define NFCT_AUTOCOLRESCONFIG_MODE_Disabled (1UL)

/* Register: NFCT_SENSRES */
/* Description: NFC-A SENS_RES auto-response settings */

/* Bits 15..12 : Reserved for future use. Shall be 0. */
#define NFCT_SENSRES_RFU74_Pos (12UL)
#define NFCT_SENSRES_RFU74_Msk (0xFUL << NFCT_SENSRES_RFU74_Pos)

/* Bits 11..8 : Tag platform configuration as defined by the b4:b1 of byte 2 in SENS_RES response in the NFC Forum, NFC Digital Protocol Technical Specification */
#define NFCT_SENSRES_PLATFCONFIG_Pos (8UL)
#define NFCT_SENSRES_PLATFCONFIG_Msk (0xFUL << NFCT_SENSRES_PLATFCONFIG_Pos)

/* Bits 7..6 : NFCID1 size. This value is used by the auto collision resolution engine. */
#define NFCT_SENSRES_NFCIDSIZE_Pos (6UL)
#define NFCT_SENSRES_NFCIDSIZE_Msk (0x3UL << NFCT_SENSRES_NFCIDSIZE_Pos)
#define NFCT_SENSRES_NFCIDSIZE_NFCID1Single (0UL)
#define NFCT_SENSRES_NFCIDSIZE_NFCID1Double (1UL)
#define NFCT_SENSRES_NFCIDSIZE_NFCID1Triple (2UL)

/* Bit 5 : Reserved for future use. Shall be 0. */
#define NFCT_SENSRES_RFU5_Pos (5UL)
#define NFCT_SENSRES_RFU5_Msk (0x1UL << NFCT_SENSRES_RFU5_Pos)

/* Bits 4..0 : Bit frame SDD as defined by the b5:b1 of byte 1 in SENS_RES response in the NFC Forum, NFC Digital Protocol Technical Specification */
#define NFCT_SENSRES_BITFRAMESDD_Pos (0UL)
#define NFCT_SENSRES_BITFRAMESDD_Msk (0x1FUL << NFCT_SENSRES_BITFRAMESDD_Pos)
#define NFCT_SENSRES_BITFRAMESDD_SDD00000 (0UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD00001 (1UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD00010 (2UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD00100 (4UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD01000 (8UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD10000 (16UL)

/* Register: NFCT_SELRES */
/* Description: NFC-A SEL_RES auto-response settings */

/* Bit 7 : Reserved for future use. Shall be 0. */
#define NFCT_SELRES_RFU7_Pos (7UL)
#define NFCT_SELRES_RFU7_Msk (0x1UL << NFCT_SELRES_RFU7_Pos)

/* Bits 6..5 : Protocol as defined by the b7:b6 of SEL_RES response in the NFC Forum, NFC Digital Protocol Technical Specification */
#define NFCT_SELRES_PROTOCOL_Pos (5UL)
#define NFCT_SELRES_PROTOCOL_Msk (0x3UL << NFCT_SELRES_PROTOCOL_Pos)

/* Bits 4..3 : Reserved for future use. Shall be 0. */
#define NFCT_SELRES_RFU43_Pos (3UL)
#define NFCT_SELRES_RFU43_Msk (0x3UL << NFCT_SELRES_RFU43_Pos)

/* Bit 2 : Cascade as defined by the b3 of SEL_RES response in the NFC Forum, NFC Digital Protocol Technical Specification (controlled by hardware, shall be 0) */
#define NFCT_SELRES_CASCADE_Pos (2UL)
#define NFCT_SELRES_CASCADE_Msk (0x1UL << NFCT_SELRES_CASCADE_Pos)

/* Bits 1..0 : Reserved for future use. Shall be 0. */
#define NFCT_SELRES_RFU10_Pos (0UL)
#define NFCT_SELRES_RFU10_Msk (0x3UL << NFCT_SELRES_RFU10_Pos)


/* Peripheral: NVMC */
/* Description: Non Volatile Memory Controller */

/* Register: NVMC_READY */
/* Description: Ready flag */

/* Bit 0 : NVMC is ready or busy */
#define NVMC_READY_READY_Pos (0UL)
#define NVMC_READY_READY_Msk (0x1UL << NVMC_READY_READY_Pos)
#define NVMC_READY_READY_Busy (0UL)
#define NVMC_READY_READY_Ready (1UL)

/* Register: NVMC_READYNEXT */
/* Description: Ready flag */

/* Bit 0 : NVMC can accept a new write operation */
#define NVMC_READYNEXT_READYNEXT_Pos (0UL)
#define NVMC_READYNEXT_READYNEXT_Msk (0x1UL << NVMC_READYNEXT_READYNEXT_Pos)
#define NVMC_READYNEXT_READYNEXT_Busy (0UL)
#define NVMC_READYNEXT_READYNEXT_Ready (1UL)

/* Register: NVMC_CONFIG */
/* Description: Configuration register */

/* Bits 1..0 : Program memory access mode. It is strongly recommended to only activate erase and write modes when they are actively used. Enabling write or erase will invalidate the cache and keep it invalidated. */
#define NVMC_CONFIG_WEN_Pos (0UL)
#define NVMC_CONFIG_WEN_Msk (0x3UL << NVMC_CONFIG_WEN_Pos)
#define NVMC_CONFIG_WEN_Ren (0UL)
#define NVMC_CONFIG_WEN_Wen (1UL)
#define NVMC_CONFIG_WEN_Een (2UL)

/* Register: NVMC_ERASEPAGE */
/* Description: Register for erasing a page in code area */

/* Bits 31..0 : Register for starting erase of a page in code area */
#define NVMC_ERASEPAGE_ERASEPAGE_Pos (0UL)
#define NVMC_ERASEPAGE_ERASEPAGE_Msk (0xFFFFFFFFUL << NVMC_ERASEPAGE_ERASEPAGE_Pos)

/* Register: NVMC_ERASEPCR1 */
/* Description: Deprecated register - Register for erasing a page in code area, equivalent to ERASEPAGE */

/* Bits 31..0 : Register for erasing a page in code area, equivalent to ERASEPAGE */
#define NVMC_ERASEPCR1_ERASEPCR1_Pos (0UL)
#define NVMC_ERASEPCR1_ERASEPCR1_Msk (0xFFFFFFFFUL << NVMC_ERASEPCR1_ERASEPCR1_Pos)

/* Register: NVMC_ERASEALL */
/* Description: Register for erasing all non-volatile user memory */

/* Bit 0 : Erase all non-volatile memory including UICR registers. The erase must be enabled using CONFIG.WEN before the non-volatile memory can be erased. */
#define NVMC_ERASEALL_ERASEALL_Pos (0UL)
#define NVMC_ERASEALL_ERASEALL_Msk (0x1UL << NVMC_ERASEALL_ERASEALL_Pos)
#define NVMC_ERASEALL_ERASEALL_NoOperation (0UL)
#define NVMC_ERASEALL_ERASEALL_Erase (1UL)

/* Register: NVMC_ERASEPCR0 */
/* Description: Deprecated register - Register for erasing a page in code area, equivalent to ERASEPAGE */

/* Bits 31..0 : Register for starting erase of a page in code area, equivalent to ERASEPAGE */
#define NVMC_ERASEPCR0_ERASEPCR0_Pos (0UL)
#define NVMC_ERASEPCR0_ERASEPCR0_Msk (0xFFFFFFFFUL << NVMC_ERASEPCR0_ERASEPCR0_Pos)

/* Register: NVMC_ERASEUICR */
/* Description: Register for erasing user information configuration registers */

/* Bit 0 : Register starting erase of all user information configuration registers. The erase must be enabled using CONFIG.WEN before the UICR can be erased. */
#define NVMC_ERASEUICR_ERASEUICR_Pos (0UL)
#define NVMC_ERASEUICR_ERASEUICR_Msk (0x1UL << NVMC_ERASEUICR_ERASEUICR_Pos)
#define NVMC_ERASEUICR_ERASEUICR_NoOperation (0UL)
#define NVMC_ERASEUICR_ERASEUICR_Erase (1UL)

/* Register: NVMC_ERASEPAGEPARTIAL */
/* Description: Register for partial erase of a page in code area */

/* Bits 31..0 : Register for starting partial erase of a page in code area */
#define NVMC_ERASEPAGEPARTIAL_ERASEPAGEPARTIAL_Pos (0UL)
#define NVMC_ERASEPAGEPARTIAL_ERASEPAGEPARTIAL_Msk (0xFFFFFFFFUL << NVMC_ERASEPAGEPARTIAL_ERASEPAGEPARTIAL_Pos)

/* Register: NVMC_ERASEPAGEPARTIALCFG */
/* Description: Register for partial erase configuration */

/* Bits 6..0 : Duration of the partial erase in milliseconds */
#define NVMC_ERASEPAGEPARTIALCFG_DURATION_Pos (0UL)
#define NVMC_ERASEPAGEPARTIALCFG_DURATION_Msk (0x7FUL << NVMC_ERASEPAGEPARTIALCFG_DURATION_Pos)

/* Register: NVMC_ICACHECNF */
/* Description: I-code cache configuration register */

/* Bit 8 : Cache profiling enable */
#define NVMC_ICACHECNF_CACHEPROFEN_Pos (8UL)
#define NVMC_ICACHECNF_CACHEPROFEN_Msk (0x1UL << NVMC_ICACHECNF_CACHEPROFEN_Pos)
#define NVMC_ICACHECNF_CACHEPROFEN_Disabled (0UL)
#define NVMC_ICACHECNF_CACHEPROFEN_Enabled (1UL)

/* Bit 0 : Cache enable */
#define NVMC_ICACHECNF_CACHEEN_Pos (0UL)
#define NVMC_ICACHECNF_CACHEEN_Msk (0x1UL << NVMC_ICACHECNF_CACHEEN_Pos)
#define NVMC_ICACHECNF_CACHEEN_Disabled (0UL)
#define NVMC_ICACHECNF_CACHEEN_Enabled (1UL)

/* Register: NVMC_IHIT */
/* Description: I-code cache hit counter */

/* Bits 31..0 : Number of cache hits. Register is writable, but only to '0'. */
#define NVMC_IHIT_HITS_Pos (0UL)
#define NVMC_IHIT_HITS_Msk (0xFFFFFFFFUL << NVMC_IHIT_HITS_Pos)

/* Register: NVMC_IMISS */
/* Description: I-code cache miss counter */

/* Bits 31..0 : Number of cache misses. Register is writable, but only to '0'. */
#define NVMC_IMISS_MISSES_Pos (0UL)
#define NVMC_IMISS_MISSES_Msk (0xFFFFFFFFUL << NVMC_IMISS_MISSES_Pos)


/* Peripheral: GPIO */
/* Description: GPIO Port 1 */

/* Register: GPIO_OUT */
/* Description: Write GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUT_PIN31_Pos (31UL)
#define GPIO_OUT_PIN31_Msk (0x1UL << GPIO_OUT_PIN31_Pos)
#define GPIO_OUT_PIN31_Low (0UL)
#define GPIO_OUT_PIN31_High (1UL)

/* Bit 30 : Pin 30 */
#define GPIO_OUT_PIN30_Pos (30UL)
#define GPIO_OUT_PIN30_Msk (0x1UL << GPIO_OUT_PIN30_Pos)
#define GPIO_OUT_PIN30_Low (0UL)
#define GPIO_OUT_PIN30_High (1UL)

/* Bit 29 : Pin 29 */
#define GPIO_OUT_PIN29_Pos (29UL)
#define GPIO_OUT_PIN29_Msk (0x1UL << GPIO_OUT_PIN29_Pos)
#define GPIO_OUT_PIN29_Low (0UL)
#define GPIO_OUT_PIN29_High (1UL)

/* Bit 28 : Pin 28 */
#define GPIO_OUT_PIN28_Pos (28UL)
#define GPIO_OUT_PIN28_Msk (0x1UL << GPIO_OUT_PIN28_Pos)
#define GPIO_OUT_PIN28_Low (0UL)
#define GPIO_OUT_PIN28_High (1UL)

/* Bit 27 : Pin 27 */
#define GPIO_OUT_PIN27_Pos (27UL)
#define GPIO_OUT_PIN27_Msk (0x1UL << GPIO_OUT_PIN27_Pos)
#define GPIO_OUT_PIN27_Low (0UL)
#define GPIO_OUT_PIN27_High (1UL)

/* Bit 26 : Pin 26 */
#define GPIO_OUT_PIN26_Pos (26UL)
#define GPIO_OUT_PIN26_Msk (0x1UL << GPIO_OUT_PIN26_Pos)
#define GPIO_OUT_PIN26_Low (0UL)
#define GPIO_OUT_PIN26_High (1UL)

/* Bit 25 : Pin 25 */
#define GPIO_OUT_PIN25_Pos (25UL)
#define GPIO_OUT_PIN25_Msk (0x1UL << GPIO_OUT_PIN25_Pos)
#define GPIO_OUT_PIN25_Low (0UL)
#define GPIO_OUT_PIN25_High (1UL)

/* Bit 24 : Pin 24 */
#define GPIO_OUT_PIN24_Pos (24UL)
#define GPIO_OUT_PIN24_Msk (0x1UL << GPIO_OUT_PIN24_Pos)
#define GPIO_OUT_PIN24_Low (0UL)
#define GPIO_OUT_PIN24_High (1UL)

/* Bit 23 : Pin 23 */
#define GPIO_OUT_PIN23_Pos (23UL)
#define GPIO_OUT_PIN23_Msk (0x1UL << GPIO_OUT_PIN23_Pos)
#define GPIO_OUT_PIN23_Low (0UL)
#define GPIO_OUT_PIN23_High (1UL)

/* Bit 22 : Pin 22 */
#define GPIO_OUT_PIN22_Pos (22UL)
#define GPIO_OUT_PIN22_Msk (0x1UL << GPIO_OUT_PIN22_Pos)
#define GPIO_OUT_PIN22_Low (0UL)
#define GPIO_OUT_PIN22_High (1UL)

/* Bit 21 : Pin 21 */
#define GPIO_OUT_PIN21_Pos (21UL)
#define GPIO_OUT_PIN21_Msk (0x1UL << GPIO_OUT_PIN21_Pos)
#define GPIO_OUT_PIN21_Low (0UL)
#define GPIO_OUT_PIN21_High (1UL)

/* Bit 20 : Pin 20 */
#define GPIO_OUT_PIN20_Pos (20UL)
#define GPIO_OUT_PIN20_Msk (0x1UL << GPIO_OUT_PIN20_Pos)
#define GPIO_OUT_PIN20_Low (0UL)
#define GPIO_OUT_PIN20_High (1UL)

/* Bit 19 : Pin 19 */
#define GPIO_OUT_PIN19_Pos (19UL)
#define GPIO_OUT_PIN19_Msk (0x1UL << GPIO_OUT_PIN19_Pos)
#define GPIO_OUT_PIN19_Low (0UL)
#define GPIO_OUT_PIN19_High (1UL)

/* Bit 18 : Pin 18 */
#define GPIO_OUT_PIN18_Pos (18UL)
#define GPIO_OUT_PIN18_Msk (0x1UL << GPIO_OUT_PIN18_Pos)
#define GPIO_OUT_PIN18_Low (0UL)
#define GPIO_OUT_PIN18_High (1UL)

/* Bit 17 : Pin 17 */
#define GPIO_OUT_PIN17_Pos (17UL)
#define GPIO_OUT_PIN17_Msk (0x1UL << GPIO_OUT_PIN17_Pos)
#define GPIO_OUT_PIN17_Low (0UL)
#define GPIO_OUT_PIN17_High (1UL)

/* Bit 16 : Pin 16 */
#define GPIO_OUT_PIN16_Pos (16UL)
#define GPIO_OUT_PIN16_Msk (0x1UL << GPIO_OUT_PIN16_Pos)
#define GPIO_OUT_PIN16_Low (0UL)
#define GPIO_OUT_PIN16_High (1UL)

/* Bit 15 : Pin 15 */
#define GPIO_OUT_PIN15_Pos (15UL)
#define GPIO_OUT_PIN15_Msk (0x1UL << GPIO_OUT_PIN15_Pos)
#define GPIO_OUT_PIN15_Low (0UL)
#define GPIO_OUT_PIN15_High (1UL)

/* Bit 14 : Pin 14 */
#define GPIO_OUT_PIN14_Pos (14UL)
#define GPIO_OUT_PIN14_Msk (0x1UL << GPIO_OUT_PIN14_Pos)
#define GPIO_OUT_PIN14_Low (0UL)
#define GPIO_OUT_PIN14_High (1UL)

/* Bit 13 : Pin 13 */
#define GPIO_OUT_PIN13_Pos (13UL)
#define GPIO_OUT_PIN13_Msk (0x1UL << GPIO_OUT_PIN13_Pos)
#define GPIO_OUT_PIN13_Low (0UL)
#define GPIO_OUT_PIN13_High (1UL)

/* Bit 12 : Pin 12 */
#define GPIO_OUT_PIN12_Pos (12UL)
#define GPIO_OUT_PIN12_Msk (0x1UL << GPIO_OUT_PIN12_Pos)
#define GPIO_OUT_PIN12_Low (0UL)
#define GPIO_OUT_PIN12_High (1UL)

/* Bit 11 : Pin 11 */
#define GPIO_OUT_PIN11_Pos (11UL)
#define GPIO_OUT_PIN11_Msk (0x1UL << GPIO_OUT_PIN11_Pos)
#define GPIO_OUT_PIN11_Low (0UL)
#define GPIO_OUT_PIN11_High (1UL)

/* Bit 10 : Pin 10 */
#define GPIO_OUT_PIN10_Pos (10UL)
#define GPIO_OUT_PIN10_Msk (0x1UL << GPIO_OUT_PIN10_Pos)
#define GPIO_OUT_PIN10_Low (0UL)
#define GPIO_OUT_PIN10_High (1UL)

/* Bit 9 : Pin 9 */
#define GPIO_OUT_PIN9_Pos (9UL)
#define GPIO_OUT_PIN9_Msk (0x1UL << GPIO_OUT_PIN9_Pos)
#define GPIO_OUT_PIN9_Low (0UL)
#define GPIO_OUT_PIN9_High (1UL)

/* Bit 8 : Pin 8 */
#define GPIO_OUT_PIN8_Pos (8UL)
#define GPIO_OUT_PIN8_Msk (0x1UL << GPIO_OUT_PIN8_Pos)
#define GPIO_OUT_PIN8_Low (0UL)
#define GPIO_OUT_PIN8_High (1UL)

/* Bit 7 : Pin 7 */
#define GPIO_OUT_PIN7_Pos (7UL)
#define GPIO_OUT_PIN7_Msk (0x1UL << GPIO_OUT_PIN7_Pos)
#define GPIO_OUT_PIN7_Low (0UL)
#define GPIO_OUT_PIN7_High (1UL)

/* Bit 6 : Pin 6 */
#define GPIO_OUT_PIN6_Pos (6UL)
#define GPIO_OUT_PIN6_Msk (0x1UL << GPIO_OUT_PIN6_Pos)
#define GPIO_OUT_PIN6_Low (0UL)
#define GPIO_OUT_PIN6_High (1UL)

/* Bit 5 : Pin 5 */
#define GPIO_OUT_PIN5_Pos (5UL)
#define GPIO_OUT_PIN5_Msk (0x1UL << GPIO_OUT_PIN5_Pos)
#define GPIO_OUT_PIN5_Low (0UL)
#define GPIO_OUT_PIN5_High (1UL)

/* Bit 4 : Pin 4 */
#define GPIO_OUT_PIN4_Pos (4UL)
#define GPIO_OUT_PIN4_Msk (0x1UL << GPIO_OUT_PIN4_Pos)
#define GPIO_OUT_PIN4_Low (0UL)
#define GPIO_OUT_PIN4_High (1UL)

/* Bit 3 : Pin 3 */
#define GPIO_OUT_PIN3_Pos (3UL)
#define GPIO_OUT_PIN3_Msk (0x1UL << GPIO_OUT_PIN3_Pos)
#define GPIO_OUT_PIN3_Low (0UL)
#define GPIO_OUT_PIN3_High (1UL)

/* Bit 2 : Pin 2 */
#define GPIO_OUT_PIN2_Pos (2UL)
#define GPIO_OUT_PIN2_Msk (0x1UL << GPIO_OUT_PIN2_Pos)
#define GPIO_OUT_PIN2_Low (0UL)
#define GPIO_OUT_PIN2_High (1UL)

/* Bit 1 : Pin 1 */
#define GPIO_OUT_PIN1_Pos (1UL)
#define GPIO_OUT_PIN1_Msk (0x1UL << GPIO_OUT_PIN1_Pos)
#define GPIO_OUT_PIN1_Low (0UL)
#define GPIO_OUT_PIN1_High (1UL)

/* Bit 0 : Pin 0 */
#define GPIO_OUT_PIN0_Pos (0UL)
#define GPIO_OUT_PIN0_Msk (0x1UL << GPIO_OUT_PIN0_Pos)
#define GPIO_OUT_PIN0_Low (0UL)
#define GPIO_OUT_PIN0_High (1UL)

/* Register: GPIO_OUTSET */
/* Description: Set individual bits in GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUTSET_PIN31_Pos (31UL)
#define GPIO_OUTSET_PIN31_Msk (0x1UL << GPIO_OUTSET_PIN31_Pos)
#define GPIO_OUTSET_PIN31_Low (0UL)
#define GPIO_OUTSET_PIN31_High (1UL)
#define GPIO_OUTSET_PIN31_Set (1UL)

/* Bit 30 : Pin 30 */
#define GPIO_OUTSET_PIN30_Pos (30UL)
#define GPIO_OUTSET_PIN30_Msk (0x1UL << GPIO_OUTSET_PIN30_Pos)
#define GPIO_OUTSET_PIN30_Low (0UL)
#define GPIO_OUTSET_PIN30_High (1UL)
#define GPIO_OUTSET_PIN30_Set (1UL)

/* Bit 29 : Pin 29 */
#define GPIO_OUTSET_PIN29_Pos (29UL)
#define GPIO_OUTSET_PIN29_Msk (0x1UL << GPIO_OUTSET_PIN29_Pos)
#define GPIO_OUTSET_PIN29_Low (0UL)
#define GPIO_OUTSET_PIN29_High (1UL)
#define GPIO_OUTSET_PIN29_Set (1UL)

/* Bit 28 : Pin 28 */
#define GPIO_OUTSET_PIN28_Pos (28UL)
#define GPIO_OUTSET_PIN28_Msk (0x1UL << GPIO_OUTSET_PIN28_Pos)
#define GPIO_OUTSET_PIN28_Low (0UL)
#define GPIO_OUTSET_PIN28_High (1UL)
#define GPIO_OUTSET_PIN28_Set (1UL)

/* Bit 27 : Pin 27 */
#define GPIO_OUTSET_PIN27_Pos (27UL)
#define GPIO_OUTSET_PIN27_Msk (0x1UL << GPIO_OUTSET_PIN27_Pos)
#define GPIO_OUTSET_PIN27_Low (0UL)
#define GPIO_OUTSET_PIN27_High (1UL)
#define GPIO_OUTSET_PIN27_Set (1UL)

/* Bit 26 : Pin 26 */
#define GPIO_OUTSET_PIN26_Pos (26UL)
#define GPIO_OUTSET_PIN26_Msk (0x1UL << GPIO_OUTSET_PIN26_Pos)
#define GPIO_OUTSET_PIN26_Low (0UL)
#define GPIO_OUTSET_PIN26_High (1UL)
#define GPIO_OUTSET_PIN26_Set (1UL)

/* Bit 25 : Pin 25 */
#define GPIO_OUTSET_PIN25_Pos (25UL)
#define GPIO_OUTSET_PIN25_Msk (0x1UL << GPIO_OUTSET_PIN25_Pos)
#define GPIO_OUTSET_PIN25_Low (0UL)
#define GPIO_OUTSET_PIN25_High (1UL)
#define GPIO_OUTSET_PIN25_Set (1UL)

/* Bit 24 : Pin 24 */
#define GPIO_OUTSET_PIN24_Pos (24UL)
#define GPIO_OUTSET_PIN24_Msk (0x1UL << GPIO_OUTSET_PIN24_Pos)
#define GPIO_OUTSET_PIN24_Low (0UL)
#define GPIO_OUTSET_PIN24_High (1UL)
#define GPIO_OUTSET_PIN24_Set (1UL)

/* Bit 23 : Pin 23 */
#define GPIO_OUTSET_PIN23_Pos (23UL)
#define GPIO_OUTSET_PIN23_Msk (0x1UL << GPIO_OUTSET_PIN23_Pos)
#define GPIO_OUTSET_PIN23_Low (0UL)
#define GPIO_OUTSET_PIN23_High (1UL)
#define GPIO_OUTSET_PIN23_Set (1UL)

/* Bit 22 : Pin 22 */
#define GPIO_OUTSET_PIN22_Pos (22UL)
#define GPIO_OUTSET_PIN22_Msk (0x1UL << GPIO_OUTSET_PIN22_Pos)
#define GPIO_OUTSET_PIN22_Low (0UL)
#define GPIO_OUTSET_PIN22_High (1UL)
#define GPIO_OUTSET_PIN22_Set (1UL)

/* Bit 21 : Pin 21 */
#define GPIO_OUTSET_PIN21_Pos (21UL)
#define GPIO_OUTSET_PIN21_Msk (0x1UL << GPIO_OUTSET_PIN21_Pos)
#define GPIO_OUTSET_PIN21_Low (0UL)
#define GPIO_OUTSET_PIN21_High (1UL)
#define GPIO_OUTSET_PIN21_Set (1UL)

/* Bit 20 : Pin 20 */
#define GPIO_OUTSET_PIN20_Pos (20UL)
#define GPIO_OUTSET_PIN20_Msk (0x1UL << GPIO_OUTSET_PIN20_Pos)
#define GPIO_OUTSET_PIN20_Low (0UL)
#define GPIO_OUTSET_PIN20_High (1UL)
#define GPIO_OUTSET_PIN20_Set (1UL)

/* Bit 19 : Pin 19 */
#define GPIO_OUTSET_PIN19_Pos (19UL)
#define GPIO_OUTSET_PIN19_Msk (0x1UL << GPIO_OUTSET_PIN19_Pos)
#define GPIO_OUTSET_PIN19_Low (0UL)
#define GPIO_OUTSET_PIN19_High (1UL)
#define GPIO_OUTSET_PIN19_Set (1UL)

/* Bit 18 : Pin 18 */
#define GPIO_OUTSET_PIN18_Pos (18UL)
#define GPIO_OUTSET_PIN18_Msk (0x1UL << GPIO_OUTSET_PIN18_Pos)
#define GPIO_OUTSET_PIN18_Low (0UL)
#define GPIO_OUTSET_PIN18_High (1UL)
#define GPIO_OUTSET_PIN18_Set (1UL)

/* Bit 17 : Pin 17 */
#define GPIO_OUTSET_PIN17_Pos (17UL)
#define GPIO_OUTSET_PIN17_Msk (0x1UL << GPIO_OUTSET_PIN17_Pos)
#define GPIO_OUTSET_PIN17_Low (0UL)
#define GPIO_OUTSET_PIN17_High (1UL)
#define GPIO_OUTSET_PIN17_Set (1UL)

/* Bit 16 : Pin 16 */
#define GPIO_OUTSET_PIN16_Pos (16UL)
#define GPIO_OUTSET_PIN16_Msk (0x1UL << GPIO_OUTSET_PIN16_Pos)
#define GPIO_OUTSET_PIN16_Low (0UL)
#define GPIO_OUTSET_PIN16_High (1UL)
#define GPIO_OUTSET_PIN16_Set (1UL)

/* Bit 15 : Pin 15 */
#define GPIO_OUTSET_PIN15_Pos (15UL)
#define GPIO_OUTSET_PIN15_Msk (0x1UL << GPIO_OUTSET_PIN15_Pos)
#define GPIO_OUTSET_PIN15_Low (0UL)
#define GPIO_OUTSET_PIN15_High (1UL)
#define GPIO_OUTSET_PIN15_Set (1UL)

/* Bit 14 : Pin 14 */
#define GPIO_OUTSET_PIN14_Pos (14UL)
#define GPIO_OUTSET_PIN14_Msk (0x1UL << GPIO_OUTSET_PIN14_Pos)
#define GPIO_OUTSET_PIN14_Low (0UL)
#define GPIO_OUTSET_PIN14_High (1UL)
#define GPIO_OUTSET_PIN14_Set (1UL)

/* Bit 13 : Pin 13 */
#define GPIO_OUTSET_PIN13_Pos (13UL)
#define GPIO_OUTSET_PIN13_Msk (0x1UL << GPIO_OUTSET_PIN13_Pos)
#define GPIO_OUTSET_PIN13_Low (0UL)
#define GPIO_OUTSET_PIN13_High (1UL)
#define GPIO_OUTSET_PIN13_Set (1UL)

/* Bit 12 : Pin 12 */
#define GPIO_OUTSET_PIN12_Pos (12UL)
#define GPIO_OUTSET_PIN12_Msk (0x1UL << GPIO_OUTSET_PIN12_Pos)
#define GPIO_OUTSET_PIN12_Low (0UL)
#define GPIO_OUTSET_PIN12_High (1UL)
#define GPIO_OUTSET_PIN12_Set (1UL)

/* Bit 11 : Pin 11 */
#define GPIO_OUTSET_PIN11_Pos (11UL)
#define GPIO_OUTSET_PIN11_Msk (0x1UL << GPIO_OUTSET_PIN11_Pos)
#define GPIO_OUTSET_PIN11_Low (0UL)
#define GPIO_OUTSET_PIN11_High (1UL)
#define GPIO_OUTSET_PIN11_Set (1UL)

/* Bit 10 : Pin 10 */
#define GPIO_OUTSET_PIN10_Pos (10UL)
#define GPIO_OUTSET_PIN10_Msk (0x1UL << GPIO_OUTSET_PIN10_Pos)
#define GPIO_OUTSET_PIN10_Low (0UL)
#define GPIO_OUTSET_PIN10_High (1UL)
#define GPIO_OUTSET_PIN10_Set (1UL)

/* Bit 9 : Pin 9 */
#define GPIO_OUTSET_PIN9_Pos (9UL)
#define GPIO_OUTSET_PIN9_Msk (0x1UL << GPIO_OUTSET_PIN9_Pos)
#define GPIO_OUTSET_PIN9_Low (0UL)
#define GPIO_OUTSET_PIN9_High (1UL)
#define GPIO_OUTSET_PIN9_Set (1UL)

/* Bit 8 : Pin 8 */
#define GPIO_OUTSET_PIN8_Pos (8UL)
#define GPIO_OUTSET_PIN8_Msk (0x1UL << GPIO_OUTSET_PIN8_Pos)
#define GPIO_OUTSET_PIN8_Low (0UL)
#define GPIO_OUTSET_PIN8_High (1UL)
#define GPIO_OUTSET_PIN8_Set (1UL)

/* Bit 7 : Pin 7 */
#define GPIO_OUTSET_PIN7_Pos (7UL)
#define GPIO_OUTSET_PIN7_Msk (0x1UL << GPIO_OUTSET_PIN7_Pos)
#define GPIO_OUTSET_PIN7_Low (0UL)
#define GPIO_OUTSET_PIN7_High (1UL)
#define GPIO_OUTSET_PIN7_Set (1UL)

/* Bit 6 : Pin 6 */
#define GPIO_OUTSET_PIN6_Pos (6UL)
#define GPIO_OUTSET_PIN6_Msk (0x1UL << GPIO_OUTSET_PIN6_Pos)
#define GPIO_OUTSET_PIN6_Low (0UL)
#define GPIO_OUTSET_PIN6_High (1UL)
#define GPIO_OUTSET_PIN6_Set (1UL)

/* Bit 5 : Pin 5 */
#define GPIO_OUTSET_PIN5_Pos (5UL)
#define GPIO_OUTSET_PIN5_Msk (0x1UL << GPIO_OUTSET_PIN5_Pos)
#define GPIO_OUTSET_PIN5_Low (0UL)
#define GPIO_OUTSET_PIN5_High (1UL)
#define GPIO_OUTSET_PIN5_Set (1UL)

/* Bit 4 : Pin 4 */
#define GPIO_OUTSET_PIN4_Pos (4UL)
#define GPIO_OUTSET_PIN4_Msk (0x1UL << GPIO_OUTSET_PIN4_Pos)
#define GPIO_OUTSET_PIN4_Low (0UL)
#define GPIO_OUTSET_PIN4_High (1UL)
#define GPIO_OUTSET_PIN4_Set (1UL)

/* Bit 3 : Pin 3 */
#define GPIO_OUTSET_PIN3_Pos (3UL)
#define GPIO_OUTSET_PIN3_Msk (0x1UL << GPIO_OUTSET_PIN3_Pos)
#define GPIO_OUTSET_PIN3_Low (0UL)
#define GPIO_OUTSET_PIN3_High (1UL)
#define GPIO_OUTSET_PIN3_Set (1UL)

/* Bit 2 : Pin 2 */
#define GPIO_OUTSET_PIN2_Pos (2UL)
#define GPIO_OUTSET_PIN2_Msk (0x1UL << GPIO_OUTSET_PIN2_Pos)
#define GPIO_OUTSET_PIN2_Low (0UL)
#define GPIO_OUTSET_PIN2_High (1UL)
#define GPIO_OUTSET_PIN2_Set (1UL)

/* Bit 1 : Pin 1 */
#define GPIO_OUTSET_PIN1_Pos (1UL)
#define GPIO_OUTSET_PIN1_Msk (0x1UL << GPIO_OUTSET_PIN1_Pos)
#define GPIO_OUTSET_PIN1_Low (0UL)
#define GPIO_OUTSET_PIN1_High (1UL)
#define GPIO_OUTSET_PIN1_Set (1UL)

/* Bit 0 : Pin 0 */
#define GPIO_OUTSET_PIN0_Pos (0UL)
#define GPIO_OUTSET_PIN0_Msk (0x1UL << GPIO_OUTSET_PIN0_Pos)
#define GPIO_OUTSET_PIN0_Low (0UL)
#define GPIO_OUTSET_PIN0_High (1UL)
#define GPIO_OUTSET_PIN0_Set (1UL)

/* Register: GPIO_OUTCLR */
/* Description: Clear individual bits in GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUTCLR_PIN31_Pos (31UL)
#define GPIO_OUTCLR_PIN31_Msk (0x1UL << GPIO_OUTCLR_PIN31_Pos)
#define GPIO_OUTCLR_PIN31_Low (0UL)
#define GPIO_OUTCLR_PIN31_High (1UL)
#define GPIO_OUTCLR_PIN31_Clear (1UL)

/* Bit 30 : Pin 30 */
#define GPIO_OUTCLR_PIN30_Pos (30UL)
#define GPIO_OUTCLR_PIN30_Msk (0x1UL << GPIO_OUTCLR_PIN30_Pos)
#define GPIO_OUTCLR_PIN30_Low (0UL)
#define GPIO_OUTCLR_PIN30_High (1UL)
#define GPIO_OUTCLR_PIN30_Clear (1UL)

/* Bit 29 : Pin 29 */
#define GPIO_OUTCLR_PIN29_Pos (29UL)
#define GPIO_OUTCLR_PIN29_Msk (0x1UL << GPIO_OUTCLR_PIN29_Pos)
#define GPIO_OUTCLR_PIN29_Low (0UL)
#define GPIO_OUTCLR_PIN29_High (1UL)
#define GPIO_OUTCLR_PIN29_Clear (1UL)

/* Bit 28 : Pin 28 */
#define GPIO_OUTCLR_PIN28_Pos (28UL)
#define GPIO_OUTCLR_PIN28_Msk (0x1UL << GPIO_OUTCLR_PIN28_Pos)
#define GPIO_OUTCLR_PIN28_Low (0UL)
#define GPIO_OUTCLR_PIN28_High (1UL)
#define GPIO_OUTCLR_PIN28_Clear (1UL)

/* Bit 27 : Pin 27 */
#define GPIO_OUTCLR_PIN27_Pos (27UL)
#define GPIO_OUTCLR_PIN27_Msk (0x1UL << GPIO_OUTCLR_PIN27_Pos)
#define GPIO_OUTCLR_PIN27_Low (0UL)
#define GPIO_OUTCLR_PIN27_High (1UL)
#define GPIO_OUTCLR_PIN27_Clear (1UL)

/* Bit 26 : Pin 26 */
#define GPIO_OUTCLR_PIN26_Pos (26UL)
#define GPIO_OUTCLR_PIN26_Msk (0x1UL << GPIO_OUTCLR_PIN26_Pos)
#define GPIO_OUTCLR_PIN26_Low (0UL)
#define GPIO_OUTCLR_PIN26_High (1UL)
#define GPIO_OUTCLR_PIN26_Clear (1UL)

/* Bit 25 : Pin 25 */
#define GPIO_OUTCLR_PIN25_Pos (25UL)
#define GPIO_OUTCLR_PIN25_Msk (0x1UL << GPIO_OUTCLR_PIN25_Pos)
#define GPIO_OUTCLR_PIN25_Low (0UL)
#define GPIO_OUTCLR_PIN25_High (1UL)
#define GPIO_OUTCLR_PIN25_Clear (1UL)

/* Bit 24 : Pin 24 */
#define GPIO_OUTCLR_PIN24_Pos (24UL)
#define GPIO_OUTCLR_PIN24_Msk (0x1UL << GPIO_OUTCLR_PIN24_Pos)
#define GPIO_OUTCLR_PIN24_Low (0UL)
#define GPIO_OUTCLR_PIN24_High (1UL)
#define GPIO_OUTCLR_PIN24_Clear (1UL)

/* Bit 23 : Pin 23 */
#define GPIO_OUTCLR_PIN23_Pos (23UL)
#define GPIO_OUTCLR_PIN23_Msk (0x1UL << GPIO_OUTCLR_PIN23_Pos)
#define GPIO_OUTCLR_PIN23_Low (0UL)
#define GPIO_OUTCLR_PIN23_High (1UL)
#define GPIO_OUTCLR_PIN23_Clear (1UL)

/* Bit 22 : Pin 22 */
#define GPIO_OUTCLR_PIN22_Pos (22UL)
#define GPIO_OUTCLR_PIN22_Msk (0x1UL << GPIO_OUTCLR_PIN22_Pos)
#define GPIO_OUTCLR_PIN22_Low (0UL)
#define GPIO_OUTCLR_PIN22_High (1UL)
#define GPIO_OUTCLR_PIN22_Clear (1UL)

/* Bit 21 : Pin 21 */
#define GPIO_OUTCLR_PIN21_Pos (21UL)
#define GPIO_OUTCLR_PIN21_Msk (0x1UL << GPIO_OUTCLR_PIN21_Pos)
#define GPIO_OUTCLR_PIN21_Low (0UL)
#define GPIO_OUTCLR_PIN21_High (1UL)
#define GPIO_OUTCLR_PIN21_Clear (1UL)

/* Bit 20 : Pin 20 */
#define GPIO_OUTCLR_PIN20_Pos (20UL)
#define GPIO_OUTCLR_PIN20_Msk (0x1UL << GPIO_OUTCLR_PIN20_Pos)
#define GPIO_OUTCLR_PIN20_Low (0UL)
#define GPIO_OUTCLR_PIN20_High (1UL)
#define GPIO_OUTCLR_PIN20_Clear (1UL)

/* Bit 19 : Pin 19 */
#define GPIO_OUTCLR_PIN19_Pos (19UL)
#define GPIO_OUTCLR_PIN19_Msk (0x1UL << GPIO_OUTCLR_PIN19_Pos)
#define GPIO_OUTCLR_PIN19_Low (0UL)
#define GPIO_OUTCLR_PIN19_High (1UL)
#define GPIO_OUTCLR_PIN19_Clear (1UL)

/* Bit 18 : Pin 18 */
#define GPIO_OUTCLR_PIN18_Pos (18UL)
#define GPIO_OUTCLR_PIN18_Msk (0x1UL << GPIO_OUTCLR_PIN18_Pos)
#define GPIO_OUTCLR_PIN18_Low (0UL)
#define GPIO_OUTCLR_PIN18_High (1UL)
#define GPIO_OUTCLR_PIN18_Clear (1UL)

/* Bit 17 : Pin 17 */
#define GPIO_OUTCLR_PIN17_Pos (17UL)
#define GPIO_OUTCLR_PIN17_Msk (0x1UL << GPIO_OUTCLR_PIN17_Pos)
#define GPIO_OUTCLR_PIN17_Low (0UL)
#define GPIO_OUTCLR_PIN17_High (1UL)
#define GPIO_OUTCLR_PIN17_Clear (1UL)

/* Bit 16 : Pin 16 */
#define GPIO_OUTCLR_PIN16_Pos (16UL)
#define GPIO_OUTCLR_PIN16_Msk (0x1UL << GPIO_OUTCLR_PIN16_Pos)
#define GPIO_OUTCLR_PIN16_Low (0UL)
#define GPIO_OUTCLR_PIN16_High (1UL)
#define GPIO_OUTCLR_PIN16_Clear (1UL)

/* Bit 15 : Pin 15 */
#define GPIO_OUTCLR_PIN15_Pos (15UL)
#define GPIO_OUTCLR_PIN15_Msk (0x1UL << GPIO_OUTCLR_PIN15_Pos)
#define GPIO_OUTCLR_PIN15_Low (0UL)
#define GPIO_OUTCLR_PIN15_High (1UL)
#define GPIO_OUTCLR_PIN15_Clear (1UL)

/* Bit 14 : Pin 14 */
#define GPIO_OUTCLR_PIN14_Pos (14UL)
#define GPIO_OUTCLR_PIN14_Msk (0x1UL << GPIO_OUTCLR_PIN14_Pos)
#define GPIO_OUTCLR_PIN14_Low (0UL)
#define GPIO_OUTCLR_PIN14_High (1UL)
#define GPIO_OUTCLR_PIN14_Clear (1UL)

/* Bit 13 : Pin 13 */
#define GPIO_OUTCLR_PIN13_Pos (13UL)
#define GPIO_OUTCLR_PIN13_Msk (0x1UL << GPIO_OUTCLR_PIN13_Pos)
#define GPIO_OUTCLR_PIN13_Low (0UL)
#define GPIO_OUTCLR_PIN13_High (1UL)
#define GPIO_OUTCLR_PIN13_Clear (1UL)

/* Bit 12 : Pin 12 */
#define GPIO_OUTCLR_PIN12_Pos (12UL)
#define GPIO_OUTCLR_PIN12_Msk (0x1UL << GPIO_OUTCLR_PIN12_Pos)
#define GPIO_OUTCLR_PIN12_Low (0UL)
#define GPIO_OUTCLR_PIN12_High (1UL)
#define GPIO_OUTCLR_PIN12_Clear (1UL)

/* Bit 11 : Pin 11 */
#define GPIO_OUTCLR_PIN11_Pos (11UL)
#define GPIO_OUTCLR_PIN11_Msk (0x1UL << GPIO_OUTCLR_PIN11_Pos)
#define GPIO_OUTCLR_PIN11_Low (0UL)
#define GPIO_OUTCLR_PIN11_High (1UL)
#define GPIO_OUTCLR_PIN11_Clear (1UL)

/* Bit 10 : Pin 10 */
#define GPIO_OUTCLR_PIN10_Pos (10UL)
#define GPIO_OUTCLR_PIN10_Msk (0x1UL << GPIO_OUTCLR_PIN10_Pos)
#define GPIO_OUTCLR_PIN10_Low (0UL)
#define GPIO_OUTCLR_PIN10_High (1UL)
#define GPIO_OUTCLR_PIN10_Clear (1UL)

/* Bit 9 : Pin 9 */
#define GPIO_OUTCLR_PIN9_Pos (9UL)
#define GPIO_OUTCLR_PIN9_Msk (0x1UL << GPIO_OUTCLR_PIN9_Pos)
#define GPIO_OUTCLR_PIN9_Low (0UL)
#define GPIO_OUTCLR_PIN9_High (1UL)
#define GPIO_OUTCLR_PIN9_Clear (1UL)

/* Bit 8 : Pin 8 */
#define GPIO_OUTCLR_PIN8_Pos (8UL)
#define GPIO_OUTCLR_PIN8_Msk (0x1UL << GPIO_OUTCLR_PIN8_Pos)
#define GPIO_OUTCLR_PIN8_Low (0UL)
#define GPIO_OUTCLR_PIN8_High (1UL)
#define GPIO_OUTCLR_PIN8_Clear (1UL)

/* Bit 7 : Pin 7 */
#define GPIO_OUTCLR_PIN7_Pos (7UL)
#define GPIO_OUTCLR_PIN7_Msk (0x1UL << GPIO_OUTCLR_PIN7_Pos)
#define GPIO_OUTCLR_PIN7_Low (0UL)
#define GPIO_OUTCLR_PIN7_High (1UL)
#define GPIO_OUTCLR_PIN7_Clear (1UL)

/* Bit 6 : Pin 6 */
#define GPIO_OUTCLR_PIN6_Pos (6UL)
#define GPIO_OUTCLR_PIN6_Msk (0x1UL << GPIO_OUTCLR_PIN6_Pos)
#define GPIO_OUTCLR_PIN6_Low (0UL)
#define GPIO_OUTCLR_PIN6_High (1UL)
#define GPIO_OUTCLR_PIN6_Clear (1UL)

/* Bit 5 : Pin 5 */
#define GPIO_OUTCLR_PIN5_Pos (5UL)
#define GPIO_OUTCLR_PIN5_Msk (0x1UL << GPIO_OUTCLR_PIN5_Pos)
#define GPIO_OUTCLR_PIN5_Low (0UL)
#define GPIO_OUTCLR_PIN5_High (1UL)
#define GPIO_OUTCLR_PIN5_Clear (1UL)

/* Bit 4 : Pin 4 */
#define GPIO_OUTCLR_PIN4_Pos (4UL)
#define GPIO_OUTCLR_PIN4_Msk (0x1UL << GPIO_OUTCLR_PIN4_Pos)
#define GPIO_OUTCLR_PIN4_Low (0UL)
#define GPIO_OUTCLR_PIN4_High (1UL)
#define GPIO_OUTCLR_PIN4_Clear (1UL)

/* Bit 3 : Pin 3 */
#define GPIO_OUTCLR_PIN3_Pos (3UL)
#define GPIO_OUTCLR_PIN3_Msk (0x1UL << GPIO_OUTCLR_PIN3_Pos)
#define GPIO_OUTCLR_PIN3_Low (0UL)
#define GPIO_OUTCLR_PIN3_High (1UL)
#define GPIO_OUTCLR_PIN3_Clear (1UL)

/* Bit 2 : Pin 2 */
#define GPIO_OUTCLR_PIN2_Pos (2UL)
#define GPIO_OUTCLR_PIN2_Msk (0x1UL << GPIO_OUTCLR_PIN2_Pos)
#define GPIO_OUTCLR_PIN2_Low (0UL)
#define GPIO_OUTCLR_PIN2_High (1UL)
#define GPIO_OUTCLR_PIN2_Clear (1UL)

/* Bit 1 : Pin 1 */
#define GPIO_OUTCLR_PIN1_Pos (1UL)
#define GPIO_OUTCLR_PIN1_Msk (0x1UL << GPIO_OUTCLR_PIN1_Pos)
#define GPIO_OUTCLR_PIN1_Low (0UL)
#define GPIO_OUTCLR_PIN1_High (1UL)
#define GPIO_OUTCLR_PIN1_Clear (1UL)

/* Bit 0 : Pin 0 */
#define GPIO_OUTCLR_PIN0_Pos (0UL)
#define GPIO_OUTCLR_PIN0_Msk (0x1UL << GPIO_OUTCLR_PIN0_Pos)
#define GPIO_OUTCLR_PIN0_Low (0UL)
#define GPIO_OUTCLR_PIN0_High (1UL)
#define GPIO_OUTCLR_PIN0_Clear (1UL)

/* Register: GPIO_IN */
/* Description: Read GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_IN_PIN31_Pos (31UL)
#define GPIO_IN_PIN31_Msk (0x1UL << GPIO_IN_PIN31_Pos)
#define GPIO_IN_PIN31_Low (0UL)
#define GPIO_IN_PIN31_High (1UL)

/* Bit 30 : Pin 30 */
#define GPIO_IN_PIN30_Pos (30UL)
#define GPIO_IN_PIN30_Msk (0x1UL << GPIO_IN_PIN30_Pos)
#define GPIO_IN_PIN30_Low (0UL)
#define GPIO_IN_PIN30_High (1UL)

/* Bit 29 : Pin 29 */
#define GPIO_IN_PIN29_Pos (29UL)
#define GPIO_IN_PIN29_Msk (0x1UL << GPIO_IN_PIN29_Pos)
#define GPIO_IN_PIN29_Low (0UL)
#define GPIO_IN_PIN29_High (1UL)

/* Bit 28 : Pin 28 */
#define GPIO_IN_PIN28_Pos (28UL)
#define GPIO_IN_PIN28_Msk (0x1UL << GPIO_IN_PIN28_Pos)
#define GPIO_IN_PIN28_Low (0UL)
#define GPIO_IN_PIN28_High (1UL)

/* Bit 27 : Pin 27 */
#define GPIO_IN_PIN27_Pos (27UL)
#define GPIO_IN_PIN27_Msk (0x1UL << GPIO_IN_PIN27_Pos)
#define GPIO_IN_PIN27_Low (0UL)
#define GPIO_IN_PIN27_High (1UL)

/* Bit 26 : Pin 26 */
#define GPIO_IN_PIN26_Pos (26UL)
#define GPIO_IN_PIN26_Msk (0x1UL << GPIO_IN_PIN26_Pos)
#define GPIO_IN_PIN26_Low (0UL)
#define GPIO_IN_PIN26_High (1UL)

/* Bit 25 : Pin 25 */
#define GPIO_IN_PIN25_Pos (25UL)
#define GPIO_IN_PIN25_Msk (0x1UL << GPIO_IN_PIN25_Pos)
#define GPIO_IN_PIN25_Low (0UL)
#define GPIO_IN_PIN25_High (1UL)

/* Bit 24 : Pin 24 */
#define GPIO_IN_PIN24_Pos (24UL)
#define GPIO_IN_PIN24_Msk (0x1UL << GPIO_IN_PIN24_Pos)
#define GPIO_IN_PIN24_Low (0UL)
#define GPIO_IN_PIN24_High (1UL)

/* Bit 23 : Pin 23 */
#define GPIO_IN_PIN23_Pos (23UL)
#define GPIO_IN_PIN23_Msk (0x1UL << GPIO_IN_PIN23_Pos)
#define GPIO_IN_PIN23_Low (0UL)
#define GPIO_IN_PIN23_High (1UL)

/* Bit 22 : Pin 22 */
#define GPIO_IN_PIN22_Pos (22UL)
#define GPIO_IN_PIN22_Msk (0x1UL << GPIO_IN_PIN22_Pos)
#define GPIO_IN_PIN22_Low (0UL)
#define GPIO_IN_PIN22_High (1UL)

/* Bit 21 : Pin 21 */
#define GPIO_IN_PIN21_Pos (21UL)
#define GPIO_IN_PIN21_Msk (0x1UL << GPIO_IN_PIN21_Pos)
#define GPIO_IN_PIN21_Low (0UL)
#define GPIO_IN_PIN21_High (1UL)

/* Bit 20 : Pin 20 */
#define GPIO_IN_PIN20_Pos (20UL)
#define GPIO_IN_PIN20_Msk (0x1UL << GPIO_IN_PIN20_Pos)
#define GPIO_IN_PIN20_Low (0UL)
#define GPIO_IN_PIN20_High (1UL)

/* Bit 19 : Pin 19 */
#define GPIO_IN_PIN19_Pos (19UL)
#define GPIO_IN_PIN19_Msk (0x1UL << GPIO_IN_PIN19_Pos)
#define GPIO_IN_PIN19_Low (0UL)
#define GPIO_IN_PIN19_High (1UL)

/* Bit 18 : Pin 18 */
#define GPIO_IN_PIN18_Pos (18UL)
#define GPIO_IN_PIN18_Msk (0x1UL << GPIO_IN_PIN18_Pos)
#define GPIO_IN_PIN18_Low (0UL)
#define GPIO_IN_PIN18_High (1UL)

/* Bit 17 : Pin 17 */
#define GPIO_IN_PIN17_Pos (17UL)
#define GPIO_IN_PIN17_Msk (0x1UL << GPIO_IN_PIN17_Pos)
#define GPIO_IN_PIN17_Low (0UL)
#define GPIO_IN_PIN17_High (1UL)

/* Bit 16 : Pin 16 */
#define GPIO_IN_PIN16_Pos (16UL)
#define GPIO_IN_PIN16_Msk (0x1UL << GPIO_IN_PIN16_Pos)
#define GPIO_IN_PIN16_Low (0UL)
#define GPIO_IN_PIN16_High (1UL)

/* Bit 15 : Pin 15 */
#define GPIO_IN_PIN15_Pos (15UL)
#define GPIO_IN_PIN15_Msk (0x1UL << GPIO_IN_PIN15_Pos)
#define GPIO_IN_PIN15_Low (0UL)
#define GPIO_IN_PIN15_High (1UL)

/* Bit 14 : Pin 14 */
#define GPIO_IN_PIN14_Pos (14UL)
#define GPIO_IN_PIN14_Msk (0x1UL << GPIO_IN_PIN14_Pos)
#define GPIO_IN_PIN14_Low (0UL)
#define GPIO_IN_PIN14_High (1UL)

/* Bit 13 : Pin 13 */
#define GPIO_IN_PIN13_Pos (13UL)
#define GPIO_IN_PIN13_Msk (0x1UL << GPIO_IN_PIN13_Pos)
#define GPIO_IN_PIN13_Low (0UL)
#define GPIO_IN_PIN13_High (1UL)

/* Bit 12 : Pin 12 */
#define GPIO_IN_PIN12_Pos (12UL)
#define GPIO_IN_PIN12_Msk (0x1UL << GPIO_IN_PIN12_Pos)
#define GPIO_IN_PIN12_Low (0UL)
#define GPIO_IN_PIN12_High (1UL)

/* Bit 11 : Pin 11 */
#define GPIO_IN_PIN11_Pos (11UL)
#define GPIO_IN_PIN11_Msk (0x1UL << GPIO_IN_PIN11_Pos)
#define GPIO_IN_PIN11_Low (0UL)
#define GPIO_IN_PIN11_High (1UL)

/* Bit 10 : Pin 10 */
#define GPIO_IN_PIN10_Pos (10UL)
#define GPIO_IN_PIN10_Msk (0x1UL << GPIO_IN_PIN10_Pos)
#define GPIO_IN_PIN10_Low (0UL)
#define GPIO_IN_PIN10_High (1UL)

/* Bit 9 : Pin 9 */
#define GPIO_IN_PIN9_Pos (9UL)
#define GPIO_IN_PIN9_Msk (0x1UL << GPIO_IN_PIN9_Pos)
#define GPIO_IN_PIN9_Low (0UL)
#define GPIO_IN_PIN9_High (1UL)

/* Bit 8 : Pin 8 */
#define GPIO_IN_PIN8_Pos (8UL)
#define GPIO_IN_PIN8_Msk (0x1UL << GPIO_IN_PIN8_Pos)
#define GPIO_IN_PIN8_Low (0UL)
#define GPIO_IN_PIN8_High (1UL)

/* Bit 7 : Pin 7 */
#define GPIO_IN_PIN7_Pos (7UL)
#define GPIO_IN_PIN7_Msk (0x1UL << GPIO_IN_PIN7_Pos)
#define GPIO_IN_PIN7_Low (0UL)
#define GPIO_IN_PIN7_High (1UL)

/* Bit 6 : Pin 6 */
#define GPIO_IN_PIN6_Pos (6UL)
#define GPIO_IN_PIN6_Msk (0x1UL << GPIO_IN_PIN6_Pos)
#define GPIO_IN_PIN6_Low (0UL)
#define GPIO_IN_PIN6_High (1UL)

/* Bit 5 : Pin 5 */
#define GPIO_IN_PIN5_Pos (5UL)
#define GPIO_IN_PIN5_Msk (0x1UL << GPIO_IN_PIN5_Pos)
#define GPIO_IN_PIN5_Low (0UL)
#define GPIO_IN_PIN5_High (1UL)

/* Bit 4 : Pin 4 */
#define GPIO_IN_PIN4_Pos (4UL)
#define GPIO_IN_PIN4_Msk (0x1UL << GPIO_IN_PIN4_Pos)
#define GPIO_IN_PIN4_Low (0UL)
#define GPIO_IN_PIN4_High (1UL)

/* Bit 3 : Pin 3 */
#define GPIO_IN_PIN3_Pos (3UL)
#define GPIO_IN_PIN3_Msk (0x1UL << GPIO_IN_PIN3_Pos)
#define GPIO_IN_PIN3_Low (0UL)
#define GPIO_IN_PIN3_High (1UL)

/* Bit 2 : Pin 2 */
#define GPIO_IN_PIN2_Pos (2UL)
#define GPIO_IN_PIN2_Msk (0x1UL << GPIO_IN_PIN2_Pos)
#define GPIO_IN_PIN2_Low (0UL)
#define GPIO_IN_PIN2_High (1UL)

/* Bit 1 : Pin 1 */
#define GPIO_IN_PIN1_Pos (1UL)
#define GPIO_IN_PIN1_Msk (0x1UL << GPIO_IN_PIN1_Pos)
#define GPIO_IN_PIN1_Low (0UL)
#define GPIO_IN_PIN1_High (1UL)

/* Bit 0 : Pin 0 */
#define GPIO_IN_PIN0_Pos (0UL)
#define GPIO_IN_PIN0_Msk (0x1UL << GPIO_IN_PIN0_Pos)
#define GPIO_IN_PIN0_Low (0UL)
#define GPIO_IN_PIN0_High (1UL)

/* Register: GPIO_DIR */
/* Description: Direction of GPIO pins */

/* Bit 31 : Pin 31 */
#define GPIO_DIR_PIN31_Pos (31UL)
#define GPIO_DIR_PIN31_Msk (0x1UL << GPIO_DIR_PIN31_Pos)
#define GPIO_DIR_PIN31_Input (0UL)
#define GPIO_DIR_PIN31_Output (1UL)

/* Bit 30 : Pin 30 */
#define GPIO_DIR_PIN30_Pos (30UL)
#define GPIO_DIR_PIN30_Msk (0x1UL << GPIO_DIR_PIN30_Pos)
#define GPIO_DIR_PIN30_Input (0UL)
#define GPIO_DIR_PIN30_Output (1UL)

/* Bit 29 : Pin 29 */
#define GPIO_DIR_PIN29_Pos (29UL)
#define GPIO_DIR_PIN29_Msk (0x1UL << GPIO_DIR_PIN29_Pos)
#define GPIO_DIR_PIN29_Input (0UL)
#define GPIO_DIR_PIN29_Output (1UL)

/* Bit 28 : Pin 28 */
#define GPIO_DIR_PIN28_Pos (28UL)
#define GPIO_DIR_PIN28_Msk (0x1UL << GPIO_DIR_PIN28_Pos)
#define GPIO_DIR_PIN28_Input (0UL)
#define GPIO_DIR_PIN28_Output (1UL)

/* Bit 27 : Pin 27 */
#define GPIO_DIR_PIN27_Pos (27UL)
#define GPIO_DIR_PIN27_Msk (0x1UL << GPIO_DIR_PIN27_Pos)
#define GPIO_DIR_PIN27_Input (0UL)
#define GPIO_DIR_PIN27_Output (1UL)

/* Bit 26 : Pin 26 */
#define GPIO_DIR_PIN26_Pos (26UL)
#define GPIO_DIR_PIN26_Msk (0x1UL << GPIO_DIR_PIN26_Pos)
#define GPIO_DIR_PIN26_Input (0UL)
#define GPIO_DIR_PIN26_Output (1UL)

/* Bit 25 : Pin 25 */
#define GPIO_DIR_PIN25_Pos (25UL)
#define GPIO_DIR_PIN25_Msk (0x1UL << GPIO_DIR_PIN25_Pos)
#define GPIO_DIR_PIN25_Input (0UL)
#define GPIO_DIR_PIN25_Output (1UL)

/* Bit 24 : Pin 24 */
#define GPIO_DIR_PIN24_Pos (24UL)
#define GPIO_DIR_PIN24_Msk (0x1UL << GPIO_DIR_PIN24_Pos)
#define GPIO_DIR_PIN24_Input (0UL)
#define GPIO_DIR_PIN24_Output (1UL)

/* Bit 23 : Pin 23 */
#define GPIO_DIR_PIN23_Pos (23UL)
#define GPIO_DIR_PIN23_Msk (0x1UL << GPIO_DIR_PIN23_Pos)
#define GPIO_DIR_PIN23_Input (0UL)
#define GPIO_DIR_PIN23_Output (1UL)

/* Bit 22 : Pin 22 */
#define GPIO_DIR_PIN22_Pos (22UL)
#define GPIO_DIR_PIN22_Msk (0x1UL << GPIO_DIR_PIN22_Pos)
#define GPIO_DIR_PIN22_Input (0UL)
#define GPIO_DIR_PIN22_Output (1UL)

/* Bit 21 : Pin 21 */
#define GPIO_DIR_PIN21_Pos (21UL)
#define GPIO_DIR_PIN21_Msk (0x1UL << GPIO_DIR_PIN21_Pos)
#define GPIO_DIR_PIN21_Input (0UL)
#define GPIO_DIR_PIN21_Output (1UL)

/* Bit 20 : Pin 20 */
#define GPIO_DIR_PIN20_Pos (20UL)
#define GPIO_DIR_PIN20_Msk (0x1UL << GPIO_DIR_PIN20_Pos)
#define GPIO_DIR_PIN20_Input (0UL)
#define GPIO_DIR_PIN20_Output (1UL)

/* Bit 19 : Pin 19 */
#define GPIO_DIR_PIN19_Pos (19UL)
#define GPIO_DIR_PIN19_Msk (0x1UL << GPIO_DIR_PIN19_Pos)
#define GPIO_DIR_PIN19_Input (0UL)
#define GPIO_DIR_PIN19_Output (1UL)

/* Bit 18 : Pin 18 */
#define GPIO_DIR_PIN18_Pos (18UL)
#define GPIO_DIR_PIN18_Msk (0x1UL << GPIO_DIR_PIN18_Pos)
#define GPIO_DIR_PIN18_Input (0UL)
#define GPIO_DIR_PIN18_Output (1UL)

/* Bit 17 : Pin 17 */
#define GPIO_DIR_PIN17_Pos (17UL)
#define GPIO_DIR_PIN17_Msk (0x1UL << GPIO_DIR_PIN17_Pos)
#define GPIO_DIR_PIN17_Input (0UL)
#define GPIO_DIR_PIN17_Output (1UL)

/* Bit 16 : Pin 16 */
#define GPIO_DIR_PIN16_Pos (16UL)
#define GPIO_DIR_PIN16_Msk (0x1UL << GPIO_DIR_PIN16_Pos)
#define GPIO_DIR_PIN16_Input (0UL)
#define GPIO_DIR_PIN16_Output (1UL)

/* Bit 15 : Pin 15 */
#define GPIO_DIR_PIN15_Pos (15UL)
#define GPIO_DIR_PIN15_Msk (0x1UL << GPIO_DIR_PIN15_Pos)
#define GPIO_DIR_PIN15_Input (0UL)
#define GPIO_DIR_PIN15_Output (1UL)

/* Bit 14 : Pin 14 */
#define GPIO_DIR_PIN14_Pos (14UL)
#define GPIO_DIR_PIN14_Msk (0x1UL << GPIO_DIR_PIN14_Pos)
#define GPIO_DIR_PIN14_Input (0UL)
#define GPIO_DIR_PIN14_Output (1UL)

/* Bit 13 : Pin 13 */
#define GPIO_DIR_PIN13_Pos (13UL)
#define GPIO_DIR_PIN13_Msk (0x1UL << GPIO_DIR_PIN13_Pos)
#define GPIO_DIR_PIN13_Input (0UL)
#define GPIO_DIR_PIN13_Output (1UL)

/* Bit 12 : Pin 12 */
#define GPIO_DIR_PIN12_Pos (12UL)
#define GPIO_DIR_PIN12_Msk (0x1UL << GPIO_DIR_PIN12_Pos)
#define GPIO_DIR_PIN12_Input (0UL)
#define GPIO_DIR_PIN12_Output (1UL)

/* Bit 11 : Pin 11 */
#define GPIO_DIR_PIN11_Pos (11UL)
#define GPIO_DIR_PIN11_Msk (0x1UL << GPIO_DIR_PIN11_Pos)
#define GPIO_DIR_PIN11_Input (0UL)
#define GPIO_DIR_PIN11_Output (1UL)

/* Bit 10 : Pin 10 */
#define GPIO_DIR_PIN10_Pos (10UL)
#define GPIO_DIR_PIN10_Msk (0x1UL << GPIO_DIR_PIN10_Pos)
#define GPIO_DIR_PIN10_Input (0UL)
#define GPIO_DIR_PIN10_Output (1UL)

/* Bit 9 : Pin 9 */
#define GPIO_DIR_PIN9_Pos (9UL)
#define GPIO_DIR_PIN9_Msk (0x1UL << GPIO_DIR_PIN9_Pos)
#define GPIO_DIR_PIN9_Input (0UL)
#define GPIO_DIR_PIN9_Output (1UL)

/* Bit 8 : Pin 8 */
#define GPIO_DIR_PIN8_Pos (8UL)
#define GPIO_DIR_PIN8_Msk (0x1UL << GPIO_DIR_PIN8_Pos)
#define GPIO_DIR_PIN8_Input (0UL)
#define GPIO_DIR_PIN8_Output (1UL)

/* Bit 7 : Pin 7 */
#define GPIO_DIR_PIN7_Pos (7UL)
#define GPIO_DIR_PIN7_Msk (0x1UL << GPIO_DIR_PIN7_Pos)
#define GPIO_DIR_PIN7_Input (0UL)
#define GPIO_DIR_PIN7_Output (1UL)

/* Bit 6 : Pin 6 */
#define GPIO_DIR_PIN6_Pos (6UL)
#define GPIO_DIR_PIN6_Msk (0x1UL << GPIO_DIR_PIN6_Pos)
#define GPIO_DIR_PIN6_Input (0UL)
#define GPIO_DIR_PIN6_Output (1UL)

/* Bit 5 : Pin 5 */
#define GPIO_DIR_PIN5_Pos (5UL)
#define GPIO_DIR_PIN5_Msk (0x1UL << GPIO_DIR_PIN5_Pos)
#define GPIO_DIR_PIN5_Input (0UL)
#define GPIO_DIR_PIN5_Output (1UL)

/* Bit 4 : Pin 4 */
#define GPIO_DIR_PIN4_Pos (4UL)
#define GPIO_DIR_PIN4_Msk (0x1UL << GPIO_DIR_PIN4_Pos)
#define GPIO_DIR_PIN4_Input (0UL)
#define GPIO_DIR_PIN4_Output (1UL)

/* Bit 3 : Pin 3 */
#define GPIO_DIR_PIN3_Pos (3UL)
#define GPIO_DIR_PIN3_Msk (0x1UL << GPIO_DIR_PIN3_Pos)
#define GPIO_DIR_PIN3_Input (0UL)
#define GPIO_DIR_PIN3_Output (1UL)

/* Bit 2 : Pin 2 */
#define GPIO_DIR_PIN2_Pos (2UL)
#define GPIO_DIR_PIN2_Msk (0x1UL << GPIO_DIR_PIN2_Pos)
#define GPIO_DIR_PIN2_Input (0UL)
#define GPIO_DIR_PIN2_Output (1UL)

/* Bit 1 : Pin 1 */
#define GPIO_DIR_PIN1_Pos (1UL)
#define GPIO_DIR_PIN1_Msk (0x1UL << GPIO_DIR_PIN1_Pos)
#define GPIO_DIR_PIN1_Input (0UL)
#define GPIO_DIR_PIN1_Output (1UL)

/* Bit 0 : Pin 0 */
#define GPIO_DIR_PIN0_Pos (0UL)
#define GPIO_DIR_PIN0_Msk (0x1UL << GPIO_DIR_PIN0_Pos)
#define GPIO_DIR_PIN0_Input (0UL)
#define GPIO_DIR_PIN0_Output (1UL)

/* Register: GPIO_DIRSET */
/* Description: DIR set register */

/* Bit 31 : Set as output pin 31 */
#define GPIO_DIRSET_PIN31_Pos (31UL)
#define GPIO_DIRSET_PIN31_Msk (0x1UL << GPIO_DIRSET_PIN31_Pos)
#define GPIO_DIRSET_PIN31_Input (0UL)
#define GPIO_DIRSET_PIN31_Output (1UL)
#define GPIO_DIRSET_PIN31_Set (1UL)

/* Bit 30 : Set as output pin 30 */
#define GPIO_DIRSET_PIN30_Pos (30UL)
#define GPIO_DIRSET_PIN30_Msk (0x1UL << GPIO_DIRSET_PIN30_Pos)
#define GPIO_DIRSET_PIN30_Input (0UL)
#define GPIO_DIRSET_PIN30_Output (1UL)
#define GPIO_DIRSET_PIN30_Set (1UL)

/* Bit 29 : Set as output pin 29 */
#define GPIO_DIRSET_PIN29_Pos (29UL)
#define GPIO_DIRSET_PIN29_Msk (0x1UL << GPIO_DIRSET_PIN29_Pos)
#define GPIO_DIRSET_PIN29_Input (0UL)
#define GPIO_DIRSET_PIN29_Output (1UL)
#define GPIO_DIRSET_PIN29_Set (1UL)

/* Bit 28 : Set as output pin 28 */
#define GPIO_DIRSET_PIN28_Pos (28UL)
#define GPIO_DIRSET_PIN28_Msk (0x1UL << GPIO_DIRSET_PIN28_Pos)
#define GPIO_DIRSET_PIN28_Input (0UL)
#define GPIO_DIRSET_PIN28_Output (1UL)
#define GPIO_DIRSET_PIN28_Set (1UL)

/* Bit 27 : Set as output pin 27 */
#define GPIO_DIRSET_PIN27_Pos (27UL)
#define GPIO_DIRSET_PIN27_Msk (0x1UL << GPIO_DIRSET_PIN27_Pos)
#define GPIO_DIRSET_PIN27_Input (0UL)
#define GPIO_DIRSET_PIN27_Output (1UL)
#define GPIO_DIRSET_PIN27_Set (1UL)

/* Bit 26 : Set as output pin 26 */
#define GPIO_DIRSET_PIN26_Pos (26UL)
#define GPIO_DIRSET_PIN26_Msk (0x1UL << GPIO_DIRSET_PIN26_Pos)
#define GPIO_DIRSET_PIN26_Input (0UL)
#define GPIO_DIRSET_PIN26_Output (1UL)
#define GPIO_DIRSET_PIN26_Set (1UL)

/* Bit 25 : Set as output pin 25 */
#define GPIO_DIRSET_PIN25_Pos (25UL)
#define GPIO_DIRSET_PIN25_Msk (0x1UL << GPIO_DIRSET_PIN25_Pos)
#define GPIO_DIRSET_PIN25_Input (0UL)
#define GPIO_DIRSET_PIN25_Output (1UL)
#define GPIO_DIRSET_PIN25_Set (1UL)

/* Bit 24 : Set as output pin 24 */
#define GPIO_DIRSET_PIN24_Pos (24UL)
#define GPIO_DIRSET_PIN24_Msk (0x1UL << GPIO_DIRSET_PIN24_Pos)
#define GPIO_DIRSET_PIN24_Input (0UL)
#define GPIO_DIRSET_PIN24_Output (1UL)
#define GPIO_DIRSET_PIN24_Set (1UL)

/* Bit 23 : Set as output pin 23 */
#define GPIO_DIRSET_PIN23_Pos (23UL)
#define GPIO_DIRSET_PIN23_Msk (0x1UL << GPIO_DIRSET_PIN23_Pos)
#define GPIO_DIRSET_PIN23_Input (0UL)
#define GPIO_DIRSET_PIN23_Output (1UL)
#define GPIO_DIRSET_PIN23_Set (1UL)

/* Bit 22 : Set as output pin 22 */
#define GPIO_DIRSET_PIN22_Pos (22UL)
#define GPIO_DIRSET_PIN22_Msk (0x1UL << GPIO_DIRSET_PIN22_Pos)
#define GPIO_DIRSET_PIN22_Input (0UL)
#define GPIO_DIRSET_PIN22_Output (1UL)
#define GPIO_DIRSET_PIN22_Set (1UL)

/* Bit 21 : Set as output pin 21 */
#define GPIO_DIRSET_PIN21_Pos (21UL)
#define GPIO_DIRSET_PIN21_Msk (0x1UL << GPIO_DIRSET_PIN21_Pos)
#define GPIO_DIRSET_PIN21_Input (0UL)
#define GPIO_DIRSET_PIN21_Output (1UL)
#define GPIO_DIRSET_PIN21_Set (1UL)

/* Bit 20 : Set as output pin 20 */
#define GPIO_DIRSET_PIN20_Pos (20UL)
#define GPIO_DIRSET_PIN20_Msk (0x1UL << GPIO_DIRSET_PIN20_Pos)
#define GPIO_DIRSET_PIN20_Input (0UL)
#define GPIO_DIRSET_PIN20_Output (1UL)
#define GPIO_DIRSET_PIN20_Set (1UL)

/* Bit 19 : Set as output pin 19 */
#define GPIO_DIRSET_PIN19_Pos (19UL)
#define GPIO_DIRSET_PIN19_Msk (0x1UL << GPIO_DIRSET_PIN19_Pos)
#define GPIO_DIRSET_PIN19_Input (0UL)
#define GPIO_DIRSET_PIN19_Output (1UL)
#define GPIO_DIRSET_PIN19_Set (1UL)

/* Bit 18 : Set as output pin 18 */
#define GPIO_DIRSET_PIN18_Pos (18UL)
#define GPIO_DIRSET_PIN18_Msk (0x1UL << GPIO_DIRSET_PIN18_Pos)
#define GPIO_DIRSET_PIN18_Input (0UL)
#define GPIO_DIRSET_PIN18_Output (1UL)
#define GPIO_DIRSET_PIN18_Set (1UL)

/* Bit 17 : Set as output pin 17 */
#define GPIO_DIRSET_PIN17_Pos (17UL)
#define GPIO_DIRSET_PIN17_Msk (0x1UL << GPIO_DIRSET_PIN17_Pos)
#define GPIO_DIRSET_PIN17_Input (0UL)
#define GPIO_DIRSET_PIN17_Output (1UL)
#define GPIO_DIRSET_PIN17_Set (1UL)

/* Bit 16 : Set as output pin 16 */
#define GPIO_DIRSET_PIN16_Pos (16UL)
#define GPIO_DIRSET_PIN16_Msk (0x1UL << GPIO_DIRSET_PIN16_Pos)
#define GPIO_DIRSET_PIN16_Input (0UL)
#define GPIO_DIRSET_PIN16_Output (1UL)
#define GPIO_DIRSET_PIN16_Set (1UL)

/* Bit 15 : Set as output pin 15 */
#define GPIO_DIRSET_PIN15_Pos (15UL)
#define GPIO_DIRSET_PIN15_Msk (0x1UL << GPIO_DIRSET_PIN15_Pos)
#define GPIO_DIRSET_PIN15_Input (0UL)
#define GPIO_DIRSET_PIN15_Output (1UL)
#define GPIO_DIRSET_PIN15_Set (1UL)

/* Bit 14 : Set as output pin 14 */
#define GPIO_DIRSET_PIN14_Pos (14UL)
#define GPIO_DIRSET_PIN14_Msk (0x1UL << GPIO_DIRSET_PIN14_Pos)
#define GPIO_DIRSET_PIN14_Input (0UL)
#define GPIO_DIRSET_PIN14_Output (1UL)
#define GPIO_DIRSET_PIN14_Set (1UL)

/* Bit 13 : Set as output pin 13 */
#define GPIO_DIRSET_PIN13_Pos (13UL)
#define GPIO_DIRSET_PIN13_Msk (0x1UL << GPIO_DIRSET_PIN13_Pos)
#define GPIO_DIRSET_PIN13_Input (0UL)
#define GPIO_DIRSET_PIN13_Output (1UL)
#define GPIO_DIRSET_PIN13_Set (1UL)

/* Bit 12 : Set as output pin 12 */
#define GPIO_DIRSET_PIN12_Pos (12UL)
#define GPIO_DIRSET_PIN12_Msk (0x1UL << GPIO_DIRSET_PIN12_Pos)
#define GPIO_DIRSET_PIN12_Input (0UL)
#define GPIO_DIRSET_PIN12_Output (1UL)
#define GPIO_DIRSET_PIN12_Set (1UL)

/* Bit 11 : Set as output pin 11 */
#define GPIO_DIRSET_PIN11_Pos (11UL)
#define GPIO_DIRSET_PIN11_Msk (0x1UL << GPIO_DIRSET_PIN11_Pos)
#define GPIO_DIRSET_PIN11_Input (0UL)
#define GPIO_DIRSET_PIN11_Output (1UL)
#define GPIO_DIRSET_PIN11_Set (1UL)

/* Bit 10 : Set as output pin 10 */
#define GPIO_DIRSET_PIN10_Pos (10UL)
#define GPIO_DIRSET_PIN10_Msk (0x1UL << GPIO_DIRSET_PIN10_Pos)
#define GPIO_DIRSET_PIN10_Input (0UL)
#define GPIO_DIRSET_PIN10_Output (1UL)
#define GPIO_DIRSET_PIN10_Set (1UL)

/* Bit 9 : Set as output pin 9 */
#define GPIO_DIRSET_PIN9_Pos (9UL)
#define GPIO_DIRSET_PIN9_Msk (0x1UL << GPIO_DIRSET_PIN9_Pos)
#define GPIO_DIRSET_PIN9_Input (0UL)
#define GPIO_DIRSET_PIN9_Output (1UL)
#define GPIO_DIRSET_PIN9_Set (1UL)

/* Bit 8 : Set as output pin 8 */
#define GPIO_DIRSET_PIN8_Pos (8UL)
#define GPIO_DIRSET_PIN8_Msk (0x1UL << GPIO_DIRSET_PIN8_Pos)
#define GPIO_DIRSET_PIN8_Input (0UL)
#define GPIO_DIRSET_PIN8_Output (1UL)
#define GPIO_DIRSET_PIN8_Set (1UL)

/* Bit 7 : Set as output pin 7 */
#define GPIO_DIRSET_PIN7_Pos (7UL)
#define GPIO_DIRSET_PIN7_Msk (0x1UL << GPIO_DIRSET_PIN7_Pos)
#define GPIO_DIRSET_PIN7_Input (0UL)
#define GPIO_DIRSET_PIN7_Output (1UL)
#define GPIO_DIRSET_PIN7_Set (1UL)

/* Bit 6 : Set as output pin 6 */
#define GPIO_DIRSET_PIN6_Pos (6UL)
#define GPIO_DIRSET_PIN6_Msk (0x1UL << GPIO_DIRSET_PIN6_Pos)
#define GPIO_DIRSET_PIN6_Input (0UL)
#define GPIO_DIRSET_PIN6_Output (1UL)
#define GPIO_DIRSET_PIN6_Set (1UL)

/* Bit 5 : Set as output pin 5 */
#define GPIO_DIRSET_PIN5_Pos (5UL)
#define GPIO_DIRSET_PIN5_Msk (0x1UL << GPIO_DIRSET_PIN5_Pos)
#define GPIO_DIRSET_PIN5_Input (0UL)
#define GPIO_DIRSET_PIN5_Output (1UL)
#define GPIO_DIRSET_PIN5_Set (1UL)

/* Bit 4 : Set as output pin 4 */
#define GPIO_DIRSET_PIN4_Pos (4UL)
#define GPIO_DIRSET_PIN4_Msk (0x1UL << GPIO_DIRSET_PIN4_Pos)
#define GPIO_DIRSET_PIN4_Input (0UL)
#define GPIO_DIRSET_PIN4_Output (1UL)
#define GPIO_DIRSET_PIN4_Set (1UL)

/* Bit 3 : Set as output pin 3 */
#define GPIO_DIRSET_PIN3_Pos (3UL)
#define GPIO_DIRSET_PIN3_Msk (0x1UL << GPIO_DIRSET_PIN3_Pos)
#define GPIO_DIRSET_PIN3_Input (0UL)
#define GPIO_DIRSET_PIN3_Output (1UL)
#define GPIO_DIRSET_PIN3_Set (1UL)

/* Bit 2 : Set as output pin 2 */
#define GPIO_DIRSET_PIN2_Pos (2UL)
#define GPIO_DIRSET_PIN2_Msk (0x1UL << GPIO_DIRSET_PIN2_Pos)
#define GPIO_DIRSET_PIN2_Input (0UL)
#define GPIO_DIRSET_PIN2_Output (1UL)
#define GPIO_DIRSET_PIN2_Set (1UL)

/* Bit 1 : Set as output pin 1 */
#define GPIO_DIRSET_PIN1_Pos (1UL)
#define GPIO_DIRSET_PIN1_Msk (0x1UL << GPIO_DIRSET_PIN1_Pos)
#define GPIO_DIRSET_PIN1_Input (0UL)
#define GPIO_DIRSET_PIN1_Output (1UL)
#define GPIO_DIRSET_PIN1_Set (1UL)

/* Bit 0 : Set as output pin 0 */
#define GPIO_DIRSET_PIN0_Pos (0UL)
#define GPIO_DIRSET_PIN0_Msk (0x1UL << GPIO_DIRSET_PIN0_Pos)
#define GPIO_DIRSET_PIN0_Input (0UL)
#define GPIO_DIRSET_PIN0_Output (1UL)
#define GPIO_DIRSET_PIN0_Set (1UL)

/* Register: GPIO_DIRCLR */
/* Description: DIR clear register */

/* Bit 31 : Set as input pin 31 */
#define GPIO_DIRCLR_PIN31_Pos (31UL)
#define GPIO_DIRCLR_PIN31_Msk (0x1UL << GPIO_DIRCLR_PIN31_Pos)
#define GPIO_DIRCLR_PIN31_Input (0UL)
#define GPIO_DIRCLR_PIN31_Output (1UL)
#define GPIO_DIRCLR_PIN31_Clear (1UL)

/* Bit 30 : Set as input pin 30 */
#define GPIO_DIRCLR_PIN30_Pos (30UL)
#define GPIO_DIRCLR_PIN30_Msk (0x1UL << GPIO_DIRCLR_PIN30_Pos)
#define GPIO_DIRCLR_PIN30_Input (0UL)
#define GPIO_DIRCLR_PIN30_Output (1UL)
#define GPIO_DIRCLR_PIN30_Clear (1UL)

/* Bit 29 : Set as input pin 29 */
#define GPIO_DIRCLR_PIN29_Pos (29UL)
#define GPIO_DIRCLR_PIN29_Msk (0x1UL << GPIO_DIRCLR_PIN29_Pos)
#define GPIO_DIRCLR_PIN29_Input (0UL)
#define GPIO_DIRCLR_PIN29_Output (1UL)
#define GPIO_DIRCLR_PIN29_Clear (1UL)

/* Bit 28 : Set as input pin 28 */
#define GPIO_DIRCLR_PIN28_Pos (28UL)
#define GPIO_DIRCLR_PIN28_Msk (0x1UL << GPIO_DIRCLR_PIN28_Pos)
#define GPIO_DIRCLR_PIN28_Input (0UL)
#define GPIO_DIRCLR_PIN28_Output (1UL)
#define GPIO_DIRCLR_PIN28_Clear (1UL)

/* Bit 27 : Set as input pin 27 */
#define GPIO_DIRCLR_PIN27_Pos (27UL)
#define GPIO_DIRCLR_PIN27_Msk (0x1UL << GPIO_DIRCLR_PIN27_Pos)
#define GPIO_DIRCLR_PIN27_Input (0UL)
#define GPIO_DIRCLR_PIN27_Output (1UL)
#define GPIO_DIRCLR_PIN27_Clear (1UL)

/* Bit 26 : Set as input pin 26 */
#define GPIO_DIRCLR_PIN26_Pos (26UL)
#define GPIO_DIRCLR_PIN26_Msk (0x1UL << GPIO_DIRCLR_PIN26_Pos)
#define GPIO_DIRCLR_PIN26_Input (0UL)
#define GPIO_DIRCLR_PIN26_Output (1UL)
#define GPIO_DIRCLR_PIN26_Clear (1UL)

/* Bit 25 : Set as input pin 25 */
#define GPIO_DIRCLR_PIN25_Pos (25UL)
#define GPIO_DIRCLR_PIN25_Msk (0x1UL << GPIO_DIRCLR_PIN25_Pos)
#define GPIO_DIRCLR_PIN25_Input (0UL)
#define GPIO_DIRCLR_PIN25_Output (1UL)
#define GPIO_DIRCLR_PIN25_Clear (1UL)

/* Bit 24 : Set as input pin 24 */
#define GPIO_DIRCLR_PIN24_Pos (24UL)
#define GPIO_DIRCLR_PIN24_Msk (0x1UL << GPIO_DIRCLR_PIN24_Pos)
#define GPIO_DIRCLR_PIN24_Input (0UL)
#define GPIO_DIRCLR_PIN24_Output (1UL)
#define GPIO_DIRCLR_PIN24_Clear (1UL)

/* Bit 23 : Set as input pin 23 */
#define GPIO_DIRCLR_PIN23_Pos (23UL)
#define GPIO_DIRCLR_PIN23_Msk (0x1UL << GPIO_DIRCLR_PIN23_Pos)
#define GPIO_DIRCLR_PIN23_Input (0UL)
#define GPIO_DIRCLR_PIN23_Output (1UL)
#define GPIO_DIRCLR_PIN23_Clear (1UL)

/* Bit 22 : Set as input pin 22 */
#define GPIO_DIRCLR_PIN22_Pos (22UL)
#define GPIO_DIRCLR_PIN22_Msk (0x1UL << GPIO_DIRCLR_PIN22_Pos)
#define GPIO_DIRCLR_PIN22_Input (0UL)
#define GPIO_DIRCLR_PIN22_Output (1UL)
#define GPIO_DIRCLR_PIN22_Clear (1UL)

/* Bit 21 : Set as input pin 21 */
#define GPIO_DIRCLR_PIN21_Pos (21UL)
#define GPIO_DIRCLR_PIN21_Msk (0x1UL << GPIO_DIRCLR_PIN21_Pos)
#define GPIO_DIRCLR_PIN21_Input (0UL)
#define GPIO_DIRCLR_PIN21_Output (1UL)
#define GPIO_DIRCLR_PIN21_Clear (1UL)

/* Bit 20 : Set as input pin 20 */
#define GPIO_DIRCLR_PIN20_Pos (20UL)
#define GPIO_DIRCLR_PIN20_Msk (0x1UL << GPIO_DIRCLR_PIN20_Pos)
#define GPIO_DIRCLR_PIN20_Input (0UL)
#define GPIO_DIRCLR_PIN20_Output (1UL)
#define GPIO_DIRCLR_PIN20_Clear (1UL)

/* Bit 19 : Set as input pin 19 */
#define GPIO_DIRCLR_PIN19_Pos (19UL)
#define GPIO_DIRCLR_PIN19_Msk (0x1UL << GPIO_DIRCLR_PIN19_Pos)
#define GPIO_DIRCLR_PIN19_Input (0UL)
#define GPIO_DIRCLR_PIN19_Output (1UL)
#define GPIO_DIRCLR_PIN19_Clear (1UL)

/* Bit 18 : Set as input pin 18 */
#define GPIO_DIRCLR_PIN18_Pos (18UL)
#define GPIO_DIRCLR_PIN18_Msk (0x1UL << GPIO_DIRCLR_PIN18_Pos)
#define GPIO_DIRCLR_PIN18_Input (0UL)
#define GPIO_DIRCLR_PIN18_Output (1UL)
#define GPIO_DIRCLR_PIN18_Clear (1UL)

/* Bit 17 : Set as input pin 17 */
#define GPIO_DIRCLR_PIN17_Pos (17UL)
#define GPIO_DIRCLR_PIN17_Msk (0x1UL << GPIO_DIRCLR_PIN17_Pos)
#define GPIO_DIRCLR_PIN17_Input (0UL)
#define GPIO_DIRCLR_PIN17_Output (1UL)
#define GPIO_DIRCLR_PIN17_Clear (1UL)

/* Bit 16 : Set as input pin 16 */
#define GPIO_DIRCLR_PIN16_Pos (16UL)
#define GPIO_DIRCLR_PIN16_Msk (0x1UL << GPIO_DIRCLR_PIN16_Pos)
#define GPIO_DIRCLR_PIN16_Input (0UL)
#define GPIO_DIRCLR_PIN16_Output (1UL)
#define GPIO_DIRCLR_PIN16_Clear (1UL)

/* Bit 15 : Set as input pin 15 */
#define GPIO_DIRCLR_PIN15_Pos (15UL)
#define GPIO_DIRCLR_PIN15_Msk (0x1UL << GPIO_DIRCLR_PIN15_Pos)
#define GPIO_DIRCLR_PIN15_Input (0UL)
#define GPIO_DIRCLR_PIN15_Output (1UL)
#define GPIO_DIRCLR_PIN15_Clear (1UL)

/* Bit 14 : Set as input pin 14 */
#define GPIO_DIRCLR_PIN14_Pos (14UL)
#define GPIO_DIRCLR_PIN14_Msk (0x1UL << GPIO_DIRCLR_PIN14_Pos)
#define GPIO_DIRCLR_PIN14_Input (0UL)
#define GPIO_DIRCLR_PIN14_Output (1UL)
#define GPIO_DIRCLR_PIN14_Clear (1UL)

/* Bit 13 : Set as input pin 13 */
#define GPIO_DIRCLR_PIN13_Pos (13UL)
#define GPIO_DIRCLR_PIN13_Msk (0x1UL << GPIO_DIRCLR_PIN13_Pos)
#define GPIO_DIRCLR_PIN13_Input (0UL)
#define GPIO_DIRCLR_PIN13_Output (1UL)
#define GPIO_DIRCLR_PIN13_Clear (1UL)

/* Bit 12 : Set as input pin 12 */
#define GPIO_DIRCLR_PIN12_Pos (12UL)
#define GPIO_DIRCLR_PIN12_Msk (0x1UL << GPIO_DIRCLR_PIN12_Pos)
#define GPIO_DIRCLR_PIN12_Input (0UL)
#define GPIO_DIRCLR_PIN12_Output (1UL)
#define GPIO_DIRCLR_PIN12_Clear (1UL)

/* Bit 11 : Set as input pin 11 */
#define GPIO_DIRCLR_PIN11_Pos (11UL)
#define GPIO_DIRCLR_PIN11_Msk (0x1UL << GPIO_DIRCLR_PIN11_Pos)
#define GPIO_DIRCLR_PIN11_Input (0UL)
#define GPIO_DIRCLR_PIN11_Output (1UL)
#define GPIO_DIRCLR_PIN11_Clear (1UL)

/* Bit 10 : Set as input pin 10 */
#define GPIO_DIRCLR_PIN10_Pos (10UL)
#define GPIO_DIRCLR_PIN10_Msk (0x1UL << GPIO_DIRCLR_PIN10_Pos)
#define GPIO_DIRCLR_PIN10_Input (0UL)
#define GPIO_DIRCLR_PIN10_Output (1UL)
#define GPIO_DIRCLR_PIN10_Clear (1UL)

/* Bit 9 : Set as input pin 9 */
#define GPIO_DIRCLR_PIN9_Pos (9UL)
#define GPIO_DIRCLR_PIN9_Msk (0x1UL << GPIO_DIRCLR_PIN9_Pos)
#define GPIO_DIRCLR_PIN9_Input (0UL)
#define GPIO_DIRCLR_PIN9_Output (1UL)
#define GPIO_DIRCLR_PIN9_Clear (1UL)

/* Bit 8 : Set as input pin 8 */
#define GPIO_DIRCLR_PIN8_Pos (8UL)
#define GPIO_DIRCLR_PIN8_Msk (0x1UL << GPIO_DIRCLR_PIN8_Pos)
#define GPIO_DIRCLR_PIN8_Input (0UL)
#define GPIO_DIRCLR_PIN8_Output (1UL)
#define GPIO_DIRCLR_PIN8_Clear (1UL)

/* Bit 7 : Set as input pin 7 */
#define GPIO_DIRCLR_PIN7_Pos (7UL)
#define GPIO_DIRCLR_PIN7_Msk (0x1UL << GPIO_DIRCLR_PIN7_Pos)
#define GPIO_DIRCLR_PIN7_Input (0UL)
#define GPIO_DIRCLR_PIN7_Output (1UL)
#define GPIO_DIRCLR_PIN7_Clear (1UL)

/* Bit 6 : Set as input pin 6 */
#define GPIO_DIRCLR_PIN6_Pos (6UL)
#define GPIO_DIRCLR_PIN6_Msk (0x1UL << GPIO_DIRCLR_PIN6_Pos)
#define GPIO_DIRCLR_PIN6_Input (0UL)
#define GPIO_DIRCLR_PIN6_Output (1UL)
#define GPIO_DIRCLR_PIN6_Clear (1UL)

/* Bit 5 : Set as input pin 5 */
#define GPIO_DIRCLR_PIN5_Pos (5UL)
#define GPIO_DIRCLR_PIN5_Msk (0x1UL << GPIO_DIRCLR_PIN5_Pos)
#define GPIO_DIRCLR_PIN5_Input (0UL)
#define GPIO_DIRCLR_PIN5_Output (1UL)
#define GPIO_DIRCLR_PIN5_Clear (1UL)

/* Bit 4 : Set as input pin 4 */
#define GPIO_DIRCLR_PIN4_Pos (4UL)
#define GPIO_DIRCLR_PIN4_Msk (0x1UL << GPIO_DIRCLR_PIN4_Pos)
#define GPIO_DIRCLR_PIN4_Input (0UL)
#define GPIO_DIRCLR_PIN4_Output (1UL)
#define GPIO_DIRCLR_PIN4_Clear (1UL)

/* Bit 3 : Set as input pin 3 */
#define GPIO_DIRCLR_PIN3_Pos (3UL)
#define GPIO_DIRCLR_PIN3_Msk (0x1UL << GPIO_DIRCLR_PIN3_Pos)
#define GPIO_DIRCLR_PIN3_Input (0UL)
#define GPIO_DIRCLR_PIN3_Output (1UL)
#define GPIO_DIRCLR_PIN3_Clear (1UL)

/* Bit 2 : Set as input pin 2 */
#define GPIO_DIRCLR_PIN2_Pos (2UL)
#define GPIO_DIRCLR_PIN2_Msk (0x1UL << GPIO_DIRCLR_PIN2_Pos)
#define GPIO_DIRCLR_PIN2_Input (0UL)
#define GPIO_DIRCLR_PIN2_Output (1UL)
#define GPIO_DIRCLR_PIN2_Clear (1UL)

/* Bit 1 : Set as input pin 1 */
#define GPIO_DIRCLR_PIN1_Pos (1UL)
#define GPIO_DIRCLR_PIN1_Msk (0x1UL << GPIO_DIRCLR_PIN1_Pos)
#define GPIO_DIRCLR_PIN1_Input (0UL)
#define GPIO_DIRCLR_PIN1_Output (1UL)
#define GPIO_DIRCLR_PIN1_Clear (1UL)

/* Bit 0 : Set as input pin 0 */
#define GPIO_DIRCLR_PIN0_Pos (0UL)
#define GPIO_DIRCLR_PIN0_Msk (0x1UL << GPIO_DIRCLR_PIN0_Pos)
#define GPIO_DIRCLR_PIN0_Input (0UL)
#define GPIO_DIRCLR_PIN0_Output (1UL)
#define GPIO_DIRCLR_PIN0_Clear (1UL)

/* Register: GPIO_LATCH */
/* Description: Latch register indicating what GPIO pins that have met the criteria set in the PIN_CNF[n].SENSE registers */

/* Bit 31 : Status on whether PIN31 has met criteria set in PIN_CNF31.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN31_Pos (31UL)
#define GPIO_LATCH_PIN31_Msk (0x1UL << GPIO_LATCH_PIN31_Pos)
#define GPIO_LATCH_PIN31_NotLatched (0UL)
#define GPIO_LATCH_PIN31_Latched (1UL)

/* Bit 30 : Status on whether PIN30 has met criteria set in PIN_CNF30.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN30_Pos (30UL)
#define GPIO_LATCH_PIN30_Msk (0x1UL << GPIO_LATCH_PIN30_Pos)
#define GPIO_LATCH_PIN30_NotLatched (0UL)
#define GPIO_LATCH_PIN30_Latched (1UL)

/* Bit 29 : Status on whether PIN29 has met criteria set in PIN_CNF29.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN29_Pos (29UL)
#define GPIO_LATCH_PIN29_Msk (0x1UL << GPIO_LATCH_PIN29_Pos)
#define GPIO_LATCH_PIN29_NotLatched (0UL)
#define GPIO_LATCH_PIN29_Latched (1UL)

/* Bit 28 : Status on whether PIN28 has met criteria set in PIN_CNF28.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN28_Pos (28UL)
#define GPIO_LATCH_PIN28_Msk (0x1UL << GPIO_LATCH_PIN28_Pos)
#define GPIO_LATCH_PIN28_NotLatched (0UL)
#define GPIO_LATCH_PIN28_Latched (1UL)

/* Bit 27 : Status on whether PIN27 has met criteria set in PIN_CNF27.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN27_Pos (27UL)
#define GPIO_LATCH_PIN27_Msk (0x1UL << GPIO_LATCH_PIN27_Pos)
#define GPIO_LATCH_PIN27_NotLatched (0UL)
#define GPIO_LATCH_PIN27_Latched (1UL)

/* Bit 26 : Status on whether PIN26 has met criteria set in PIN_CNF26.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN26_Pos (26UL)
#define GPIO_LATCH_PIN26_Msk (0x1UL << GPIO_LATCH_PIN26_Pos)
#define GPIO_LATCH_PIN26_NotLatched (0UL)
#define GPIO_LATCH_PIN26_Latched (1UL)

/* Bit 25 : Status on whether PIN25 has met criteria set in PIN_CNF25.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN25_Pos (25UL)
#define GPIO_LATCH_PIN25_Msk (0x1UL << GPIO_LATCH_PIN25_Pos)
#define GPIO_LATCH_PIN25_NotLatched (0UL)
#define GPIO_LATCH_PIN25_Latched (1UL)

/* Bit 24 : Status on whether PIN24 has met criteria set in PIN_CNF24.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN24_Pos (24UL)
#define GPIO_LATCH_PIN24_Msk (0x1UL << GPIO_LATCH_PIN24_Pos)
#define GPIO_LATCH_PIN24_NotLatched (0UL)
#define GPIO_LATCH_PIN24_Latched (1UL)

/* Bit 23 : Status on whether PIN23 has met criteria set in PIN_CNF23.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN23_Pos (23UL)
#define GPIO_LATCH_PIN23_Msk (0x1UL << GPIO_LATCH_PIN23_Pos)
#define GPIO_LATCH_PIN23_NotLatched (0UL)
#define GPIO_LATCH_PIN23_Latched (1UL)

/* Bit 22 : Status on whether PIN22 has met criteria set in PIN_CNF22.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN22_Pos (22UL)
#define GPIO_LATCH_PIN22_Msk (0x1UL << GPIO_LATCH_PIN22_Pos)
#define GPIO_LATCH_PIN22_NotLatched (0UL)
#define GPIO_LATCH_PIN22_Latched (1UL)

/* Bit 21 : Status on whether PIN21 has met criteria set in PIN_CNF21.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN21_Pos (21UL)
#define GPIO_LATCH_PIN21_Msk (0x1UL << GPIO_LATCH_PIN21_Pos)
#define GPIO_LATCH_PIN21_NotLatched (0UL)
#define GPIO_LATCH_PIN21_Latched (1UL)

/* Bit 20 : Status on whether PIN20 has met criteria set in PIN_CNF20.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN20_Pos (20UL)
#define GPIO_LATCH_PIN20_Msk (0x1UL << GPIO_LATCH_PIN20_Pos)
#define GPIO_LATCH_PIN20_NotLatched (0UL)
#define GPIO_LATCH_PIN20_Latched (1UL)

/* Bit 19 : Status on whether PIN19 has met criteria set in PIN_CNF19.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN19_Pos (19UL)
#define GPIO_LATCH_PIN19_Msk (0x1UL << GPIO_LATCH_PIN19_Pos)
#define GPIO_LATCH_PIN19_NotLatched (0UL)
#define GPIO_LATCH_PIN19_Latched (1UL)

/* Bit 18 : Status on whether PIN18 has met criteria set in PIN_CNF18.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN18_Pos (18UL)
#define GPIO_LATCH_PIN18_Msk (0x1UL << GPIO_LATCH_PIN18_Pos)
#define GPIO_LATCH_PIN18_NotLatched (0UL)
#define GPIO_LATCH_PIN18_Latched (1UL)

/* Bit 17 : Status on whether PIN17 has met criteria set in PIN_CNF17.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN17_Pos (17UL)
#define GPIO_LATCH_PIN17_Msk (0x1UL << GPIO_LATCH_PIN17_Pos)
#define GPIO_LATCH_PIN17_NotLatched (0UL)
#define GPIO_LATCH_PIN17_Latched (1UL)

/* Bit 16 : Status on whether PIN16 has met criteria set in PIN_CNF16.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN16_Pos (16UL)
#define GPIO_LATCH_PIN16_Msk (0x1UL << GPIO_LATCH_PIN16_Pos)
#define GPIO_LATCH_PIN16_NotLatched (0UL)
#define GPIO_LATCH_PIN16_Latched (1UL)

/* Bit 15 : Status on whether PIN15 has met criteria set in PIN_CNF15.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN15_Pos (15UL)
#define GPIO_LATCH_PIN15_Msk (0x1UL << GPIO_LATCH_PIN15_Pos)
#define GPIO_LATCH_PIN15_NotLatched (0UL)
#define GPIO_LATCH_PIN15_Latched (1UL)

/* Bit 14 : Status on whether PIN14 has met criteria set in PIN_CNF14.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN14_Pos (14UL)
#define GPIO_LATCH_PIN14_Msk (0x1UL << GPIO_LATCH_PIN14_Pos)
#define GPIO_LATCH_PIN14_NotLatched (0UL)
#define GPIO_LATCH_PIN14_Latched (1UL)

/* Bit 13 : Status on whether PIN13 has met criteria set in PIN_CNF13.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN13_Pos (13UL)
#define GPIO_LATCH_PIN13_Msk (0x1UL << GPIO_LATCH_PIN13_Pos)
#define GPIO_LATCH_PIN13_NotLatched (0UL)
#define GPIO_LATCH_PIN13_Latched (1UL)

/* Bit 12 : Status on whether PIN12 has met criteria set in PIN_CNF12.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN12_Pos (12UL)
#define GPIO_LATCH_PIN12_Msk (0x1UL << GPIO_LATCH_PIN12_Pos)
#define GPIO_LATCH_PIN12_NotLatched (0UL)
#define GPIO_LATCH_PIN12_Latched (1UL)

/* Bit 11 : Status on whether PIN11 has met criteria set in PIN_CNF11.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN11_Pos (11UL)
#define GPIO_LATCH_PIN11_Msk (0x1UL << GPIO_LATCH_PIN11_Pos)
#define GPIO_LATCH_PIN11_NotLatched (0UL)
#define GPIO_LATCH_PIN11_Latched (1UL)

/* Bit 10 : Status on whether PIN10 has met criteria set in PIN_CNF10.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN10_Pos (10UL)
#define GPIO_LATCH_PIN10_Msk (0x1UL << GPIO_LATCH_PIN10_Pos)
#define GPIO_LATCH_PIN10_NotLatched (0UL)
#define GPIO_LATCH_PIN10_Latched (1UL)

/* Bit 9 : Status on whether PIN9 has met criteria set in PIN_CNF9.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN9_Pos (9UL)
#define GPIO_LATCH_PIN9_Msk (0x1UL << GPIO_LATCH_PIN9_Pos)
#define GPIO_LATCH_PIN9_NotLatched (0UL)
#define GPIO_LATCH_PIN9_Latched (1UL)

/* Bit 8 : Status on whether PIN8 has met criteria set in PIN_CNF8.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN8_Pos (8UL)
#define GPIO_LATCH_PIN8_Msk (0x1UL << GPIO_LATCH_PIN8_Pos)
#define GPIO_LATCH_PIN8_NotLatched (0UL)
#define GPIO_LATCH_PIN8_Latched (1UL)

/* Bit 7 : Status on whether PIN7 has met criteria set in PIN_CNF7.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN7_Pos (7UL)
#define GPIO_LATCH_PIN7_Msk (0x1UL << GPIO_LATCH_PIN7_Pos)
#define GPIO_LATCH_PIN7_NotLatched (0UL)
#define GPIO_LATCH_PIN7_Latched (1UL)

/* Bit 6 : Status on whether PIN6 has met criteria set in PIN_CNF6.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN6_Pos (6UL)
#define GPIO_LATCH_PIN6_Msk (0x1UL << GPIO_LATCH_PIN6_Pos)
#define GPIO_LATCH_PIN6_NotLatched (0UL)
#define GPIO_LATCH_PIN6_Latched (1UL)

/* Bit 5 : Status on whether PIN5 has met criteria set in PIN_CNF5.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN5_Pos (5UL)
#define GPIO_LATCH_PIN5_Msk (0x1UL << GPIO_LATCH_PIN5_Pos)
#define GPIO_LATCH_PIN5_NotLatched (0UL)
#define GPIO_LATCH_PIN5_Latched (1UL)

/* Bit 4 : Status on whether PIN4 has met criteria set in PIN_CNF4.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN4_Pos (4UL)
#define GPIO_LATCH_PIN4_Msk (0x1UL << GPIO_LATCH_PIN4_Pos)
#define GPIO_LATCH_PIN4_NotLatched (0UL)
#define GPIO_LATCH_PIN4_Latched (1UL)

/* Bit 3 : Status on whether PIN3 has met criteria set in PIN_CNF3.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN3_Pos (3UL)
#define GPIO_LATCH_PIN3_Msk (0x1UL << GPIO_LATCH_PIN3_Pos)
#define GPIO_LATCH_PIN3_NotLatched (0UL)
#define GPIO_LATCH_PIN3_Latched (1UL)

/* Bit 2 : Status on whether PIN2 has met criteria set in PIN_CNF2.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN2_Pos (2UL)
#define GPIO_LATCH_PIN2_Msk (0x1UL << GPIO_LATCH_PIN2_Pos)
#define GPIO_LATCH_PIN2_NotLatched (0UL)
#define GPIO_LATCH_PIN2_Latched (1UL)

/* Bit 1 : Status on whether PIN1 has met criteria set in PIN_CNF1.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN1_Pos (1UL)
#define GPIO_LATCH_PIN1_Msk (0x1UL << GPIO_LATCH_PIN1_Pos)
#define GPIO_LATCH_PIN1_NotLatched (0UL)
#define GPIO_LATCH_PIN1_Latched (1UL)

/* Bit 0 : Status on whether PIN0 has met criteria set in PIN_CNF0.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN0_Pos (0UL)
#define GPIO_LATCH_PIN0_Msk (0x1UL << GPIO_LATCH_PIN0_Pos)
#define GPIO_LATCH_PIN0_NotLatched (0UL)
#define GPIO_LATCH_PIN0_Latched (1UL)

/* Register: GPIO_DETECTMODE */
/* Description: Select between default DETECT signal behavior and LDETECT mode */

/* Bit 0 : Select between default DETECT signal behavior and LDETECT mode */
#define GPIO_DETECTMODE_DETECTMODE_Pos (0UL)
#define GPIO_DETECTMODE_DETECTMODE_Msk (0x1UL << GPIO_DETECTMODE_DETECTMODE_Pos)
#define GPIO_DETECTMODE_DETECTMODE_Default (0UL)
#define GPIO_DETECTMODE_DETECTMODE_LDETECT (1UL)

/* Register: GPIO_PIN_CNF */
/* Description: Description collection: Configuration of GPIO pins */

/* Bits 17..16 : Pin sensing mechanism */
#define GPIO_PIN_CNF_SENSE_Pos (16UL)
#define GPIO_PIN_CNF_SENSE_Msk (0x3UL << GPIO_PIN_CNF_SENSE_Pos)
#define GPIO_PIN_CNF_SENSE_Disabled (0UL)
#define GPIO_PIN_CNF_SENSE_High (2UL)
#define GPIO_PIN_CNF_SENSE_Low (3UL)

/* Bits 10..8 : Drive configuration */
#define GPIO_PIN_CNF_DRIVE_Pos (8UL)
#define GPIO_PIN_CNF_DRIVE_Msk (0x7UL << GPIO_PIN_CNF_DRIVE_Pos)
#define GPIO_PIN_CNF_DRIVE_S0S1 (0UL)
#define GPIO_PIN_CNF_DRIVE_H0S1 (1UL)
#define GPIO_PIN_CNF_DRIVE_S0H1 (2UL)
#define GPIO_PIN_CNF_DRIVE_H0H1 (3UL)
#define GPIO_PIN_CNF_DRIVE_D0S1 (4UL)
#define GPIO_PIN_CNF_DRIVE_D0H1 (5UL)
#define GPIO_PIN_CNF_DRIVE_S0D1 (6UL)
#define GPIO_PIN_CNF_DRIVE_H0D1 (7UL)

/* Bits 3..2 : Pull configuration */
#define GPIO_PIN_CNF_PULL_Pos (2UL)
#define GPIO_PIN_CNF_PULL_Msk (0x3UL << GPIO_PIN_CNF_PULL_Pos)
#define GPIO_PIN_CNF_PULL_Disabled (0UL)
#define GPIO_PIN_CNF_PULL_Pulldown (1UL)
#define GPIO_PIN_CNF_PULL_Pullup (3UL)

/* Bit 1 : Connect or disconnect input buffer */
#define GPIO_PIN_CNF_INPUT_Pos (1UL)
#define GPIO_PIN_CNF_INPUT_Msk (0x1UL << GPIO_PIN_CNF_INPUT_Pos)
#define GPIO_PIN_CNF_INPUT_Connect (0UL)
#define GPIO_PIN_CNF_INPUT_Disconnect (1UL)

/* Bit 0 : Pin direction. Same physical register as DIR register */
#define GPIO_PIN_CNF_DIR_Pos (0UL)
#define GPIO_PIN_CNF_DIR_Msk (0x1UL << GPIO_PIN_CNF_DIR_Pos)
#define GPIO_PIN_CNF_DIR_Input (0UL)
#define GPIO_PIN_CNF_DIR_Output (1UL)


/* Peripheral: PDM */
/* Description: Pulse Density Modulation (Digital Microphone) Interface */

/* Register: PDM_TASKS_START */
/* Description: Starts continuous PDM transfer */

/* Bit 0 : Starts continuous PDM transfer */
#define PDM_TASKS_START_TASKS_START_Pos (0UL)
#define PDM_TASKS_START_TASKS_START_Msk (0x1UL << PDM_TASKS_START_TASKS_START_Pos)
#define PDM_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: PDM_TASKS_STOP */
/* Description: Stops PDM transfer */

/* Bit 0 : Stops PDM transfer */
#define PDM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define PDM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << PDM_TASKS_STOP_TASKS_STOP_Pos)
#define PDM_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: PDM_EVENTS_STARTED */
/* Description: PDM transfer has started */

/* Bit 0 : PDM transfer has started */
#define PDM_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define PDM_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << PDM_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define PDM_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0UL)
#define PDM_EVENTS_STARTED_EVENTS_STARTED_Generated (1UL)

/* Register: PDM_EVENTS_STOPPED */
/* Description: PDM transfer has finished */

/* Bit 0 : PDM transfer has finished */
#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << PDM_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)

/* Register: PDM_EVENTS_END */
/* Description: The PDM has written the last sample specified by SAMPLE.MAXCNT (or the last sample after a STOP task has been received) to Data RAM */

/* Bit 0 : The PDM has written the last sample specified by SAMPLE.MAXCNT (or the last sample after a STOP task has been received) to Data RAM */
#define PDM_EVENTS_END_EVENTS_END_Pos (0UL)
#define PDM_EVENTS_END_EVENTS_END_Msk (0x1UL << PDM_EVENTS_END_EVENTS_END_Pos)
#define PDM_EVENTS_END_EVENTS_END_NotGenerated (0UL)
#define PDM_EVENTS_END_EVENTS_END_Generated (1UL)

/* Register: PDM_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 2 : Enable or disable interrupt for event END */
#define PDM_INTEN_END_Pos (2UL)
#define PDM_INTEN_END_Msk (0x1UL << PDM_INTEN_END_Pos)
#define PDM_INTEN_END_Disabled (0UL)
#define PDM_INTEN_END_Enabled (1UL)

/* Bit 1 : Enable or disable interrupt for event STOPPED */
#define PDM_INTEN_STOPPED_Pos (1UL)
#define PDM_INTEN_STOPPED_Msk (0x1UL << PDM_INTEN_STOPPED_Pos)
#define PDM_INTEN_STOPPED_Disabled (0UL)
#define PDM_INTEN_STOPPED_Enabled (1UL)

/* Bit 0 : Enable or disable interrupt for event STARTED */
#define PDM_INTEN_STARTED_Pos (0UL)
#define PDM_INTEN_STARTED_Msk (0x1UL << PDM_INTEN_STARTED_Pos)
#define PDM_INTEN_STARTED_Disabled (0UL)
#define PDM_INTEN_STARTED_Enabled (1UL)

/* Register: PDM_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event END */
#define PDM_INTENSET_END_Pos (2UL)
#define PDM_INTENSET_END_Msk (0x1UL << PDM_INTENSET_END_Pos)
#define PDM_INTENSET_END_Disabled (0UL)
#define PDM_INTENSET_END_Enabled (1UL)
#define PDM_INTENSET_END_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define PDM_INTENSET_STOPPED_Pos (1UL)
#define PDM_INTENSET_STOPPED_Msk (0x1UL << PDM_INTENSET_STOPPED_Pos)
#define PDM_INTENSET_STOPPED_Disabled (0UL)
#define PDM_INTENSET_STOPPED_Enabled (1UL)
#define PDM_INTENSET_STOPPED_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event STARTED */
#define PDM_INTENSET_STARTED_Pos (0UL)
#define PDM_INTENSET_STARTED_Msk (0x1UL << PDM_INTENSET_STARTED_Pos)
#define PDM_INTENSET_STARTED_Disabled (0UL)
#define PDM_INTENSET_STARTED_Enabled (1UL)
#define PDM_INTENSET_STARTED_Set (1UL)

/* Register: PDM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event END */
#define PDM_INTENCLR_END_Pos (2UL)
#define PDM_INTENCLR_END_Msk (0x1UL << PDM_INTENCLR_END_Pos)
#define PDM_INTENCLR_END_Disabled (0UL)
#define PDM_INTENCLR_END_Enabled (1UL)
#define PDM_INTENCLR_END_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define PDM_INTENCLR_STOPPED_Pos (1UL)
#define PDM_INTENCLR_STOPPED_Msk (0x1UL << PDM_INTENCLR_STOPPED_Pos)
#define PDM_INTENCLR_STOPPED_Disabled (0UL)
#define PDM_INTENCLR_STOPPED_Enabled (1UL)
#define PDM_INTENCLR_STOPPED_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event STARTED */
#define PDM_INTENCLR_STARTED_Pos (0UL)
#define PDM_INTENCLR_STARTED_Msk (0x1UL << PDM_INTENCLR_STARTED_Pos)
#define PDM_INTENCLR_STARTED_Disabled (0UL)
#define PDM_INTENCLR_STARTED_Enabled (1UL)
#define PDM_INTENCLR_STARTED_Clear (1UL)

/* Register: PDM_ENABLE */
/* Description: PDM module enable register */

/* Bit 0 : Enable or disable PDM module */
#define PDM_ENABLE_ENABLE_Pos (0UL)
#define PDM_ENABLE_ENABLE_Msk (0x1UL << PDM_ENABLE_ENABLE_Pos)
#define PDM_ENABLE_ENABLE_Disabled (0UL)
#define PDM_ENABLE_ENABLE_Enabled (1UL)

/* Register: PDM_PDMCLKCTRL */
/* Description: PDM clock generator control */

/* Bits 31..0 : PDM_CLK frequency configuration */
#define PDM_PDMCLKCTRL_FREQ_Pos (0UL)
#define PDM_PDMCLKCTRL_FREQ_Msk (0xFFFFFFFFUL << PDM_PDMCLKCTRL_FREQ_Pos)
#define PDM_PDMCLKCTRL_FREQ_1000K (0x08000000UL)
#define PDM_PDMCLKCTRL_FREQ_Default (0x08400000UL)
#define PDM_PDMCLKCTRL_FREQ_1067K (0x08800000UL)
#define PDM_PDMCLKCTRL_FREQ_1231K (0x09800000UL)
#define PDM_PDMCLKCTRL_FREQ_1280K (0x0A000000UL)
#define PDM_PDMCLKCTRL_FREQ_1333K (0x0A800000UL)

/* Register: PDM_MODE */
/* Description: Defines the routing of the connected PDM microphones' signals */

/* Bit 1 : Defines on which PDM_CLK edge left (or mono) is sampled */
#define PDM_MODE_EDGE_Pos (1UL)
#define PDM_MODE_EDGE_Msk (0x1UL << PDM_MODE_EDGE_Pos)
#define PDM_MODE_EDGE_LeftFalling (0UL)
#define PDM_MODE_EDGE_LeftRising (1UL)

/* Bit 0 : Mono or stereo operation */
#define PDM_MODE_OPERATION_Pos (0UL)
#define PDM_MODE_OPERATION_Msk (0x1UL << PDM_MODE_OPERATION_Pos)
#define PDM_MODE_OPERATION_Stereo (0UL)
#define PDM_MODE_OPERATION_Mono (1UL)

/* Register: PDM_GAINL */
/* Description: Left output gain adjustment */

/* Bits 6..0 : Left output gain adjustment, in 0.5 dB steps, around the default module gain (see electrical parameters) 0x00    -20 dB gain adjust 0x01  -19.5 dB gain adjust (...) 0x27   -0.5 dB gain adjust 0x28      0 dB gain adjust 0x29   +0.5 dB gain adjust (...) 0x4F  +19.5 dB gain adjust 0x50    +20 dB gain adjust */
#define PDM_GAINL_GAINL_Pos (0UL)
#define PDM_GAINL_GAINL_Msk (0x7FUL << PDM_GAINL_GAINL_Pos)
#define PDM_GAINL_GAINL_MinGain (0x00UL)
#define PDM_GAINL_GAINL_DefaultGain (0x28UL)
#define PDM_GAINL_GAINL_MaxGain (0x50UL)

/* Register: PDM_GAINR */
/* Description: Right output gain adjustment */

/* Bits 6..0 : Right output gain adjustment, in 0.5 dB steps, around the default module gain (see electrical parameters) */
#define PDM_GAINR_GAINR_Pos (0UL)
#define PDM_GAINR_GAINR_Msk (0x7FUL << PDM_GAINR_GAINR_Pos)
#define PDM_GAINR_GAINR_MinGain (0x00UL)
#define PDM_GAINR_GAINR_DefaultGain (0x28UL)
#define PDM_GAINR_GAINR_MaxGain (0x50UL)

/* Register: PDM_RATIO */
/* Description: Selects the ratio between PDM_CLK and output sample rate. Change PDMCLKCTRL accordingly. */

/* Bit 0 : Selects the ratio between PDM_CLK and output sample rate */
#define PDM_RATIO_RATIO_Pos (0UL)
#define PDM_RATIO_RATIO_Msk (0x1UL << PDM_RATIO_RATIO_Pos)
#define PDM_RATIO_RATIO_Ratio64 (0UL)
#define PDM_RATIO_RATIO_Ratio80 (1UL)

/* Register: PDM_PSEL_CLK */
/* Description: Pin number configuration for PDM CLK signal */

/* Bit 31 : Connection */
#define PDM_PSEL_CLK_CONNECT_Pos (31UL)
#define PDM_PSEL_CLK_CONNECT_Msk (0x1UL << PDM_PSEL_CLK_CONNECT_Pos)
#define PDM_PSEL_CLK_CONNECT_Connected (0UL)
#define PDM_PSEL_CLK_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define PDM_PSEL_CLK_PORT_Pos (5UL)
#define PDM_PSEL_CLK_PORT_Msk (0x1UL << PDM_PSEL_CLK_PORT_Pos)

/* Bits 4..0 : Pin number */
#define PDM_PSEL_CLK_PIN_Pos (0UL)
#define PDM_PSEL_CLK_PIN_Msk (0x1FUL << PDM_PSEL_CLK_PIN_Pos)

/* Register: PDM_PSEL_DIN */
/* Description: Pin number configuration for PDM DIN signal */

/* Bit 31 : Connection */
#define PDM_PSEL_DIN_CONNECT_Pos (31UL)
#define PDM_PSEL_DIN_CONNECT_Msk (0x1UL << PDM_PSEL_DIN_CONNECT_Pos)
#define PDM_PSEL_DIN_CONNECT_Connected (0UL)
#define PDM_PSEL_DIN_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define PDM_PSEL_DIN_PORT_Pos (5UL)
#define PDM_PSEL_DIN_PORT_Msk (0x1UL << PDM_PSEL_DIN_PORT_Pos)

/* Bits 4..0 : Pin number */
#define PDM_PSEL_DIN_PIN_Pos (0UL)
#define PDM_PSEL_DIN_PIN_Msk (0x1FUL << PDM_PSEL_DIN_PIN_Pos)

/* Register: PDM_SAMPLE_PTR */
/* Description: RAM address pointer to write samples to with EasyDMA */

/* Bits 31..0 : Address to write PDM samples to over DMA */
#define PDM_SAMPLE_PTR_SAMPLEPTR_Pos (0UL)
#define PDM_SAMPLE_PTR_SAMPLEPTR_Msk (0xFFFFFFFFUL << PDM_SAMPLE_PTR_SAMPLEPTR_Pos)

/* Register: PDM_SAMPLE_MAXCNT */
/* Description: Number of samples to allocate memory for in EasyDMA mode */

/* Bits 14..0 : Length of DMA RAM allocation in number of samples */
#define PDM_SAMPLE_MAXCNT_BUFFSIZE_Pos (0UL)
#define PDM_SAMPLE_MAXCNT_BUFFSIZE_Msk (0x7FFFUL << PDM_SAMPLE_MAXCNT_BUFFSIZE_Pos)


/* Peripheral: POWER */
/* Description: Power control */

/* Register: POWER_TASKS_CONSTLAT */
/* Description: Enable Constant Latency mode */

/* Bit 0 : Enable Constant Latency mode */
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos (0UL)
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Msk (0x1UL << POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos)
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Trigger (1UL)

/* Register: POWER_TASKS_LOWPWR */
/* Description: Enable Low-power mode (variable latency) */

/* Bit 0 : Enable Low-power mode (variable latency) */
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos (0UL)
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Msk (0x1UL << POWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos)
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Trigger (1UL)

/* Register: POWER_EVENTS_POFWARN */
/* Description: Power failure warning */

/* Bit 0 : Power failure warning */
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos (0UL)
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Msk (0x1UL << POWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos)
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_NotGenerated (0UL)
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Generated (1UL)

/* Register: POWER_EVENTS_SLEEPENTER */
/* Description: CPU entered WFI/WFE sleep */

/* Bit 0 : CPU entered WFI/WFE sleep */
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos (0UL)
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Msk (0x1UL << POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos)
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_NotGenerated (0UL)
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Generated (1UL)

/* Register: POWER_EVENTS_SLEEPEXIT */
/* Description: CPU exited WFI/WFE sleep */

/* Bit 0 : CPU exited WFI/WFE sleep */
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos (0UL)
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Msk (0x1UL << POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos)
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_NotGenerated (0UL)
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Generated (1UL)

/* Register: POWER_EVENTS_USBDETECTED */
/* Description: Voltage supply detected on VBUS */

/* Bit 0 : Voltage supply detected on VBUS */
#define POWER_EVENTS_USBDETECTED_EVENTS_USBDETECTED_Pos (0UL)
#define POWER_EVENTS_USBDETECTED_EVENTS_USBDETECTED_Msk (0x1UL << POWER_EVENTS_USBDETECTED_EVENTS_USBDETECTED_Pos)
#define POWER_EVENTS_USBDETECTED_EVENTS_USBDETECTED_NotGenerated (0UL)
#define POWER_EVENTS_USBDETECTED_EVENTS_USBDETECTED_Generated (1UL)

/* Register: POWER_EVENTS_USBREMOVED */
/* Description: Voltage supply removed from VBUS */

/* Bit 0 : Voltage supply removed from VBUS */
#define POWER_EVENTS_USBREMOVED_EVENTS_USBREMOVED_Pos (0UL)
#define POWER_EVENTS_USBREMOVED_EVENTS_USBREMOVED_Msk (0x1UL << POWER_EVENTS_USBREMOVED_EVENTS_USBREMOVED_Pos)
#define POWER_EVENTS_USBREMOVED_EVENTS_USBREMOVED_NotGenerated (0UL)
#define POWER_EVENTS_USBREMOVED_EVENTS_USBREMOVED_Generated (1UL)

/* Register: POWER_EVENTS_USBPWRRDY */
/* Description: USB 3.3 V supply ready */

/* Bit 0 : USB 3.3 V supply ready */
#define POWER_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_Pos (0UL)
#define POWER_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_Msk (0x1UL << POWER_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_Pos)
#define POWER_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_NotGenerated (0UL)
#define POWER_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_Generated (1UL)

/* Register: POWER_INTENSET */
/* Description: Enable interrupt */

/* Bit 9 : Write '1' to enable interrupt for event USBPWRRDY */
#define POWER_INTENSET_USBPWRRDY_Pos (9UL)
#define POWER_INTENSET_USBPWRRDY_Msk (0x1UL << POWER_INTENSET_USBPWRRDY_Pos)
#define POWER_INTENSET_USBPWRRDY_Disabled (0UL)
#define POWER_INTENSET_USBPWRRDY_Enabled (1UL)
#define POWER_INTENSET_USBPWRRDY_Set (1UL)

/* Bit 8 : Write '1' to enable interrupt for event USBREMOVED */
#define POWER_INTENSET_USBREMOVED_Pos (8UL)
#define POWER_INTENSET_USBREMOVED_Msk (0x1UL << POWER_INTENSET_USBREMOVED_Pos)
#define POWER_INTENSET_USBREMOVED_Disabled (0UL)
#define POWER_INTENSET_USBREMOVED_Enabled (1UL)
#define POWER_INTENSET_USBREMOVED_Set (1UL)

/* Bit 7 : Write '1' to enable interrupt for event USBDETECTED */
#define POWER_INTENSET_USBDETECTED_Pos (7UL)
#define POWER_INTENSET_USBDETECTED_Msk (0x1UL << POWER_INTENSET_USBDETECTED_Pos)
#define POWER_INTENSET_USBDETECTED_Disabled (0UL)
#define POWER_INTENSET_USBDETECTED_Enabled (1UL)
#define POWER_INTENSET_USBDETECTED_Set (1UL)

/* Bit 6 : Write '1' to enable interrupt for event SLEEPEXIT */
#define POWER_INTENSET_SLEEPEXIT_Pos (6UL)
#define POWER_INTENSET_SLEEPEXIT_Msk (0x1UL << POWER_INTENSET_SLEEPEXIT_Pos)
#define POWER_INTENSET_SLEEPEXIT_Disabled (0UL)
#define POWER_INTENSET_SLEEPEXIT_Enabled (1UL)
#define POWER_INTENSET_SLEEPEXIT_Set (1UL)

/* Bit 5 : Write '1' to enable interrupt for event SLEEPENTER */
#define POWER_INTENSET_SLEEPENTER_Pos (5UL)
#define POWER_INTENSET_SLEEPENTER_Msk (0x1UL << POWER_INTENSET_SLEEPENTER_Pos)
#define POWER_INTENSET_SLEEPENTER_Disabled (0UL)
#define POWER_INTENSET_SLEEPENTER_Enabled (1UL)
#define POWER_INTENSET_SLEEPENTER_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event POFWARN */
#define POWER_INTENSET_POFWARN_Pos (2UL)
#define POWER_INTENSET_POFWARN_Msk (0x1UL << POWER_INTENSET_POFWARN_Pos)
#define POWER_INTENSET_POFWARN_Disabled (0UL)
#define POWER_INTENSET_POFWARN_Enabled (1UL)
#define POWER_INTENSET_POFWARN_Set (1UL)

/* Register: POWER_INTENCLR */
/* Description: Disable interrupt */

/* Bit 9 : Write '1' to disable interrupt for event USBPWRRDY */
#define POWER_INTENCLR_USBPWRRDY_Pos (9UL)
#define POWER_INTENCLR_USBPWRRDY_Msk (0x1UL << POWER_INTENCLR_USBPWRRDY_Pos)
#define POWER_INTENCLR_USBPWRRDY_Disabled (0UL)
#define POWER_INTENCLR_USBPWRRDY_Enabled (1UL)
#define POWER_INTENCLR_USBPWRRDY_Clear (1UL)

/* Bit 8 : Write '1' to disable interrupt for event USBREMOVED */
#define POWER_INTENCLR_USBREMOVED_Pos (8UL)
#define POWER_INTENCLR_USBREMOVED_Msk (0x1UL << POWER_INTENCLR_USBREMOVED_Pos)
#define POWER_INTENCLR_USBREMOVED_Disabled (0UL)
#define POWER_INTENCLR_USBREMOVED_Enabled (1UL)
#define POWER_INTENCLR_USBREMOVED_Clear (1UL)

/* Bit 7 : Write '1' to disable interrupt for event USBDETECTED */
#define POWER_INTENCLR_USBDETECTED_Pos (7UL)
#define POWER_INTENCLR_USBDETECTED_Msk (0x1UL << POWER_INTENCLR_USBDETECTED_Pos)
#define POWER_INTENCLR_USBDETECTED_Disabled (0UL)
#define POWER_INTENCLR_USBDETECTED_Enabled (1UL)
#define POWER_INTENCLR_USBDETECTED_Clear (1UL)

/* Bit 6 : Write '1' to disable interrupt for event SLEEPEXIT */
#define POWER_INTENCLR_SLEEPEXIT_Pos (6UL)
#define POWER_INTENCLR_SLEEPEXIT_Msk (0x1UL << POWER_INTENCLR_SLEEPEXIT_Pos)
#define POWER_INTENCLR_SLEEPEXIT_Disabled (0UL)
#define POWER_INTENCLR_SLEEPEXIT_Enabled (1UL)
#define POWER_INTENCLR_SLEEPEXIT_Clear (1UL)

/* Bit 5 : Write '1' to disable interrupt for event SLEEPENTER */
#define POWER_INTENCLR_SLEEPENTER_Pos (5UL)
#define POWER_INTENCLR_SLEEPENTER_Msk (0x1UL << POWER_INTENCLR_SLEEPENTER_Pos)
#define POWER_INTENCLR_SLEEPENTER_Disabled (0UL)
#define POWER_INTENCLR_SLEEPENTER_Enabled (1UL)
#define POWER_INTENCLR_SLEEPENTER_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event POFWARN */
#define POWER_INTENCLR_POFWARN_Pos (2UL)
#define POWER_INTENCLR_POFWARN_Msk (0x1UL << POWER_INTENCLR_POFWARN_Pos)
#define POWER_INTENCLR_POFWARN_Disabled (0UL)
#define POWER_INTENCLR_POFWARN_Enabled (1UL)
#define POWER_INTENCLR_POFWARN_Clear (1UL)

/* Register: POWER_RESETREAS */
/* Description: Reset reason */

/* Bit 20 : Reset due to wake up from System OFF mode by VBUS rising into valid range */
#define POWER_RESETREAS_VBUS_Pos (20UL)
#define POWER_RESETREAS_VBUS_Msk (0x1UL << POWER_RESETREAS_VBUS_Pos)
#define POWER_RESETREAS_VBUS_NotDetected (0UL)
#define POWER_RESETREAS_VBUS_Detected (1UL)

/* Bit 19 : Reset due to wake up from System OFF mode by NFC field detect */
#define POWER_RESETREAS_NFC_Pos (19UL)
#define POWER_RESETREAS_NFC_Msk (0x1UL << POWER_RESETREAS_NFC_Pos)
#define POWER_RESETREAS_NFC_NotDetected (0UL)
#define POWER_RESETREAS_NFC_Detected (1UL)

/* Bit 18 : Reset due to wake up from System OFF mode when wakeup is triggered from entering into debug interface mode */
#define POWER_RESETREAS_DIF_Pos (18UL)
#define POWER_RESETREAS_DIF_Msk (0x1UL << POWER_RESETREAS_DIF_Pos)
#define POWER_RESETREAS_DIF_NotDetected (0UL)
#define POWER_RESETREAS_DIF_Detected (1UL)

/* Bit 17 : Reset due to wake up from System OFF mode when wakeup is triggered from ANADETECT signal from LPCOMP */
#define POWER_RESETREAS_LPCOMP_Pos (17UL)
#define POWER_RESETREAS_LPCOMP_Msk (0x1UL << POWER_RESETREAS_LPCOMP_Pos)
#define POWER_RESETREAS_LPCOMP_NotDetected (0UL)
#define POWER_RESETREAS_LPCOMP_Detected (1UL)

/* Bit 16 : Reset due to wake up from System OFF mode when wakeup is triggered from DETECT signal from GPIO */
#define POWER_RESETREAS_OFF_Pos (16UL)
#define POWER_RESETREAS_OFF_Msk (0x1UL << POWER_RESETREAS_OFF_Pos)
#define POWER_RESETREAS_OFF_NotDetected (0UL)
#define POWER_RESETREAS_OFF_Detected (1UL)

/* Bit 3 : Reset from CPU lock-up detected */
#define POWER_RESETREAS_LOCKUP_Pos (3UL)
#define POWER_RESETREAS_LOCKUP_Msk (0x1UL << POWER_RESETREAS_LOCKUP_Pos)
#define POWER_RESETREAS_LOCKUP_NotDetected (0UL)
#define POWER_RESETREAS_LOCKUP_Detected (1UL)

/* Bit 2 : Reset from soft reset detected */
#define POWER_RESETREAS_SREQ_Pos (2UL)
#define POWER_RESETREAS_SREQ_Msk (0x1UL << POWER_RESETREAS_SREQ_Pos)
#define POWER_RESETREAS_SREQ_NotDetected (0UL)
#define POWER_RESETREAS_SREQ_Detected (1UL)

/* Bit 1 : Reset from watchdog detected */
#define POWER_RESETREAS_DOG_Pos (1UL)
#define POWER_RESETREAS_DOG_Msk (0x1UL << POWER_RESETREAS_DOG_Pos)
#define POWER_RESETREAS_DOG_NotDetected (0UL)
#define POWER_RESETREAS_DOG_Detected (1UL)

/* Bit 0 : Reset from pin-reset detected */
#define POWER_RESETREAS_RESETPIN_Pos (0UL)
#define POWER_RESETREAS_RESETPIN_Msk (0x1UL << POWER_RESETREAS_RESETPIN_Pos)
#define POWER_RESETREAS_RESETPIN_NotDetected (0UL)
#define POWER_RESETREAS_RESETPIN_Detected (1UL)

/* Register: POWER_RAMSTATUS */
/* Description: Deprecated register - RAM status register */

/* Bit 3 : RAM block 3 is on or off/powering up */
#define POWER_RAMSTATUS_RAMBLOCK3_Pos (3UL)
#define POWER_RAMSTATUS_RAMBLOCK3_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK3_Pos)
#define POWER_RAMSTATUS_RAMBLOCK3_Off (0UL)
#define POWER_RAMSTATUS_RAMBLOCK3_On (1UL)

/* Bit 2 : RAM block 2 is on or off/powering up */
#define POWER_RAMSTATUS_RAMBLOCK2_Pos (2UL)
#define POWER_RAMSTATUS_RAMBLOCK2_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK2_Pos)
#define POWER_RAMSTATUS_RAMBLOCK2_Off (0UL)
#define POWER_RAMSTATUS_RAMBLOCK2_On (1UL)

/* Bit 1 : RAM block 1 is on or off/powering up */
#define POWER_RAMSTATUS_RAMBLOCK1_Pos (1UL)
#define POWER_RAMSTATUS_RAMBLOCK1_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK1_Pos)
#define POWER_RAMSTATUS_RAMBLOCK1_Off (0UL)
#define POWER_RAMSTATUS_RAMBLOCK1_On (1UL)

/* Bit 0 : RAM block 0 is on or off/powering up */
#define POWER_RAMSTATUS_RAMBLOCK0_Pos (0UL)
#define POWER_RAMSTATUS_RAMBLOCK0_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK0_Pos)
#define POWER_RAMSTATUS_RAMBLOCK0_Off (0UL)
#define POWER_RAMSTATUS_RAMBLOCK0_On (1UL)

/* Register: POWER_USBREGSTATUS */
/* Description: USB supply status */

/* Bit 1 : USB supply output settling time elapsed */
#define POWER_USBREGSTATUS_OUTPUTRDY_Pos (1UL)
#define POWER_USBREGSTATUS_OUTPUTRDY_Msk (0x1UL << POWER_USBREGSTATUS_OUTPUTRDY_Pos)
#define POWER_USBREGSTATUS_OUTPUTRDY_NotReady (0UL)
#define POWER_USBREGSTATUS_OUTPUTRDY_Ready (1UL)

/* Bit 0 : VBUS input detection status (USBDETECTED and USBREMOVED events are derived from this information) */
#define POWER_USBREGSTATUS_VBUSDETECT_Pos (0UL)
#define POWER_USBREGSTATUS_VBUSDETECT_Msk (0x1UL << POWER_USBREGSTATUS_VBUSDETECT_Pos)
#define POWER_USBREGSTATUS_VBUSDETECT_NoVbus (0UL)
#define POWER_USBREGSTATUS_VBUSDETECT_VbusPresent (1UL)

/* Register: POWER_SYSTEMOFF */
/* Description: System OFF register */

/* Bit 0 : Enable System OFF mode */
#define POWER_SYSTEMOFF_SYSTEMOFF_Pos (0UL)
#define POWER_SYSTEMOFF_SYSTEMOFF_Msk (0x1UL << POWER_SYSTEMOFF_SYSTEMOFF_Pos)
#define POWER_SYSTEMOFF_SYSTEMOFF_Enter (1UL)

/* Register: POWER_POFCON */
/* Description: Power-fail comparator configuration */

/* Bits 11..8 : Power-fail comparator threshold setting for high voltage mode (supply connected to VDDH only). This setting does not apply for normal voltage mode (supply connected to both VDD and VDDH). */
#define POWER_POFCON_THRESHOLDVDDH_Pos (8UL)
#define POWER_POFCON_THRESHOLDVDDH_Msk (0xFUL << POWER_POFCON_THRESHOLDVDDH_Pos)
#define POWER_POFCON_THRESHOLDVDDH_V27 (0UL)
#define POWER_POFCON_THRESHOLDVDDH_V28 (1UL)
#define POWER_POFCON_THRESHOLDVDDH_V29 (2UL)
#define POWER_POFCON_THRESHOLDVDDH_V30 (3UL)
#define POWER_POFCON_THRESHOLDVDDH_V31 (4UL)
#define POWER_POFCON_THRESHOLDVDDH_V32 (5UL)
#define POWER_POFCON_THRESHOLDVDDH_V33 (6UL)
#define POWER_POFCON_THRESHOLDVDDH_V34 (7UL)
#define POWER_POFCON_THRESHOLDVDDH_V35 (8UL)
#define POWER_POFCON_THRESHOLDVDDH_V36 (9UL)
#define POWER_POFCON_THRESHOLDVDDH_V37 (10UL)
#define POWER_POFCON_THRESHOLDVDDH_V38 (11UL)
#define POWER_POFCON_THRESHOLDVDDH_V39 (12UL)
#define POWER_POFCON_THRESHOLDVDDH_V40 (13UL)
#define POWER_POFCON_THRESHOLDVDDH_V41 (14UL)
#define POWER_POFCON_THRESHOLDVDDH_V42 (15UL)

/* Bits 4..1 : Power-fail comparator threshold setting. This setting applies both for normal voltage mode (supply connected to both VDD and VDDH) and high voltage mode (supply connected to VDDH only). Values 0-3 set threshold below 1.7 V and should not be used as brown out detection will be activated before power failure warning on such low voltages. */
#define POWER_POFCON_THRESHOLD_Pos (1UL)
#define POWER_POFCON_THRESHOLD_Msk (0xFUL << POWER_POFCON_THRESHOLD_Pos)
#define POWER_POFCON_THRESHOLD_V17 (4UL)
#define POWER_POFCON_THRESHOLD_V18 (5UL)
#define POWER_POFCON_THRESHOLD_V19 (6UL)
#define POWER_POFCON_THRESHOLD_V20 (7UL)
#define POWER_POFCON_THRESHOLD_V21 (8UL)
#define POWER_POFCON_THRESHOLD_V22 (9UL)
#define POWER_POFCON_THRESHOLD_V23 (10UL)
#define POWER_POFCON_THRESHOLD_V24 (11UL)
#define POWER_POFCON_THRESHOLD_V25 (12UL)
#define POWER_POFCON_THRESHOLD_V26 (13UL)
#define POWER_POFCON_THRESHOLD_V27 (14UL)
#define POWER_POFCON_THRESHOLD_V28 (15UL)

/* Bit 0 : Enable or disable power failure warning */
#define POWER_POFCON_POF_Pos (0UL)
#define POWER_POFCON_POF_Msk (0x1UL << POWER_POFCON_POF_Pos)
#define POWER_POFCON_POF_Disabled (0UL)
#define POWER_POFCON_POF_Enabled (1UL)

/* Register: POWER_GPREGRET */
/* Description: General purpose retention register */

/* Bits 7..0 : General purpose retention register */
#define POWER_GPREGRET_GPREGRET_Pos (0UL)
#define POWER_GPREGRET_GPREGRET_Msk (0xFFUL << POWER_GPREGRET_GPREGRET_Pos)

/* Register: POWER_GPREGRET2 */
/* Description: General purpose retention register */

/* Bits 7..0 : General purpose retention register */
#define POWER_GPREGRET2_GPREGRET_Pos (0UL)
#define POWER_GPREGRET2_GPREGRET_Msk (0xFFUL << POWER_GPREGRET2_GPREGRET_Pos)

/* Register: POWER_DCDCEN */
/* Description: Enable DC/DC converter for REG1 stage */

/* Bit 0 : Enable DC/DC converter for REG1 stage. */
#define POWER_DCDCEN_DCDCEN_Pos (0UL)
#define POWER_DCDCEN_DCDCEN_Msk (0x1UL << POWER_DCDCEN_DCDCEN_Pos)
#define POWER_DCDCEN_DCDCEN_Disabled (0UL)
#define POWER_DCDCEN_DCDCEN_Enabled (1UL)

/* Register: POWER_MAINREGSTATUS */
/* Description: Main supply status */

/* Bit 0 : Main supply status */
#define POWER_MAINREGSTATUS_MAINREGSTATUS_Pos (0UL)
#define POWER_MAINREGSTATUS_MAINREGSTATUS_Msk (0x1UL << POWER_MAINREGSTATUS_MAINREGSTATUS_Pos)
#define POWER_MAINREGSTATUS_MAINREGSTATUS_Normal (0UL)
#define POWER_MAINREGSTATUS_MAINREGSTATUS_High (1UL)

/* Register: POWER_RAM_POWER */
/* Description: Description cluster: RAMn power control register */

/* Bit 31 : Keep retention on RAM section S15 when RAM section is off */
#define POWER_RAM_POWER_S15RETENTION_Pos (31UL)
#define POWER_RAM_POWER_S15RETENTION_Msk (0x1UL << POWER_RAM_POWER_S15RETENTION_Pos)
#define POWER_RAM_POWER_S15RETENTION_Off (0UL)
#define POWER_RAM_POWER_S15RETENTION_On (1UL)

/* Bit 30 : Keep retention on RAM section S14 when RAM section is off */
#define POWER_RAM_POWER_S14RETENTION_Pos (30UL)
#define POWER_RAM_POWER_S14RETENTION_Msk (0x1UL << POWER_RAM_POWER_S14RETENTION_Pos)
#define POWER_RAM_POWER_S14RETENTION_Off (0UL)
#define POWER_RAM_POWER_S14RETENTION_On (1UL)

/* Bit 29 : Keep retention on RAM section S13 when RAM section is off */
#define POWER_RAM_POWER_S13RETENTION_Pos (29UL)
#define POWER_RAM_POWER_S13RETENTION_Msk (0x1UL << POWER_RAM_POWER_S13RETENTION_Pos)
#define POWER_RAM_POWER_S13RETENTION_Off (0UL)
#define POWER_RAM_POWER_S13RETENTION_On (1UL)

/* Bit 28 : Keep retention on RAM section S12 when RAM section is off */
#define POWER_RAM_POWER_S12RETENTION_Pos (28UL)
#define POWER_RAM_POWER_S12RETENTION_Msk (0x1UL << POWER_RAM_POWER_S12RETENTION_Pos)
#define POWER_RAM_POWER_S12RETENTION_Off (0UL)
#define POWER_RAM_POWER_S12RETENTION_On (1UL)

/* Bit 27 : Keep retention on RAM section S11 when RAM section is off */
#define POWER_RAM_POWER_S11RETENTION_Pos (27UL)
#define POWER_RAM_POWER_S11RETENTION_Msk (0x1UL << POWER_RAM_POWER_S11RETENTION_Pos)
#define POWER_RAM_POWER_S11RETENTION_Off (0UL)
#define POWER_RAM_POWER_S11RETENTION_On (1UL)

/* Bit 26 : Keep retention on RAM section S10 when RAM section is off */
#define POWER_RAM_POWER_S10RETENTION_Pos (26UL)
#define POWER_RAM_POWER_S10RETENTION_Msk (0x1UL << POWER_RAM_POWER_S10RETENTION_Pos)
#define POWER_RAM_POWER_S10RETENTION_Off (0UL)
#define POWER_RAM_POWER_S10RETENTION_On (1UL)

/* Bit 25 : Keep retention on RAM section S9 when RAM section is off */
#define POWER_RAM_POWER_S9RETENTION_Pos (25UL)
#define POWER_RAM_POWER_S9RETENTION_Msk (0x1UL << POWER_RAM_POWER_S9RETENTION_Pos)
#define POWER_RAM_POWER_S9RETENTION_Off (0UL)
#define POWER_RAM_POWER_S9RETENTION_On (1UL)

/* Bit 24 : Keep retention on RAM section S8 when RAM section is off */
#define POWER_RAM_POWER_S8RETENTION_Pos (24UL)
#define POWER_RAM_POWER_S8RETENTION_Msk (0x1UL << POWER_RAM_POWER_S8RETENTION_Pos)
#define POWER_RAM_POWER_S8RETENTION_Off (0UL)
#define POWER_RAM_POWER_S8RETENTION_On (1UL)

/* Bit 23 : Keep retention on RAM section S7 when RAM section is off */
#define POWER_RAM_POWER_S7RETENTION_Pos (23UL)
#define POWER_RAM_POWER_S7RETENTION_Msk (0x1UL << POWER_RAM_POWER_S7RETENTION_Pos)
#define POWER_RAM_POWER_S7RETENTION_Off (0UL)
#define POWER_RAM_POWER_S7RETENTION_On (1UL)

/* Bit 22 : Keep retention on RAM section S6 when RAM section is off */
#define POWER_RAM_POWER_S6RETENTION_Pos (22UL)
#define POWER_RAM_POWER_S6RETENTION_Msk (0x1UL << POWER_RAM_POWER_S6RETENTION_Pos)
#define POWER_RAM_POWER_S6RETENTION_Off (0UL)
#define POWER_RAM_POWER_S6RETENTION_On (1UL)

/* Bit 21 : Keep retention on RAM section S5 when RAM section is off */
#define POWER_RAM_POWER_S5RETENTION_Pos (21UL)
#define POWER_RAM_POWER_S5RETENTION_Msk (0x1UL << POWER_RAM_POWER_S5RETENTION_Pos)
#define POWER_RAM_POWER_S5RETENTION_Off (0UL)
#define POWER_RAM_POWER_S5RETENTION_On (1UL)

/* Bit 20 : Keep retention on RAM section S4 when RAM section is off */
#define POWER_RAM_POWER_S4RETENTION_Pos (20UL)
#define POWER_RAM_POWER_S4RETENTION_Msk (0x1UL << POWER_RAM_POWER_S4RETENTION_Pos)
#define POWER_RAM_POWER_S4RETENTION_Off (0UL)
#define POWER_RAM_POWER_S4RETENTION_On (1UL)

/* Bit 19 : Keep retention on RAM section S3 when RAM section is off */
#define POWER_RAM_POWER_S3RETENTION_Pos (19UL)
#define POWER_RAM_POWER_S3RETENTION_Msk (0x1UL << POWER_RAM_POWER_S3RETENTION_Pos)
#define POWER_RAM_POWER_S3RETENTION_Off (0UL)
#define POWER_RAM_POWER_S3RETENTION_On (1UL)

/* Bit 18 : Keep retention on RAM section S2 when RAM section is off */
#define POWER_RAM_POWER_S2RETENTION_Pos (18UL)
#define POWER_RAM_POWER_S2RETENTION_Msk (0x1UL << POWER_RAM_POWER_S2RETENTION_Pos)
#define POWER_RAM_POWER_S2RETENTION_Off (0UL)
#define POWER_RAM_POWER_S2RETENTION_On (1UL)

/* Bit 17 : Keep retention on RAM section S1 when RAM section is off */
#define POWER_RAM_POWER_S1RETENTION_Pos (17UL)
#define POWER_RAM_POWER_S1RETENTION_Msk (0x1UL << POWER_RAM_POWER_S1RETENTION_Pos)
#define POWER_RAM_POWER_S1RETENTION_Off (0UL)
#define POWER_RAM_POWER_S1RETENTION_On (1UL)

/* Bit 16 : Keep retention on RAM section S0 when RAM section is off */
#define POWER_RAM_POWER_S0RETENTION_Pos (16UL)
#define POWER_RAM_POWER_S0RETENTION_Msk (0x1UL << POWER_RAM_POWER_S0RETENTION_Pos)
#define POWER_RAM_POWER_S0RETENTION_Off (0UL)
#define POWER_RAM_POWER_S0RETENTION_On (1UL)

/* Bit 15 : Keep RAM section S15 on or off in System ON mode. */
#define POWER_RAM_POWER_S15POWER_Pos (15UL)
#define POWER_RAM_POWER_S15POWER_Msk (0x1UL << POWER_RAM_POWER_S15POWER_Pos)
#define POWER_RAM_POWER_S15POWER_Off (0UL)
#define POWER_RAM_POWER_S15POWER_On (1UL)

/* Bit 14 : Keep RAM section S14 on or off in System ON mode. */
#define POWER_RAM_POWER_S14POWER_Pos (14UL)
#define POWER_RAM_POWER_S14POWER_Msk (0x1UL << POWER_RAM_POWER_S14POWER_Pos)
#define POWER_RAM_POWER_S14POWER_Off (0UL)
#define POWER_RAM_POWER_S14POWER_On (1UL)

/* Bit 13 : Keep RAM section S13 on or off in System ON mode. */
#define POWER_RAM_POWER_S13POWER_Pos (13UL)
#define POWER_RAM_POWER_S13POWER_Msk (0x1UL << POWER_RAM_POWER_S13POWER_Pos)
#define POWER_RAM_POWER_S13POWER_Off (0UL)
#define POWER_RAM_POWER_S13POWER_On (1UL)

/* Bit 12 : Keep RAM section S12 on or off in System ON mode. */
#define POWER_RAM_POWER_S12POWER_Pos (12UL)
#define POWER_RAM_POWER_S12POWER_Msk (0x1UL << POWER_RAM_POWER_S12POWER_Pos)
#define POWER_RAM_POWER_S12POWER_Off (0UL)
#define POWER_RAM_POWER_S12POWER_On (1UL)

/* Bit 11 : Keep RAM section S11 on or off in System ON mode. */
#define POWER_RAM_POWER_S11POWER_Pos (11UL)
#define POWER_RAM_POWER_S11POWER_Msk (0x1UL << POWER_RAM_POWER_S11POWER_Pos)
#define POWER_RAM_POWER_S11POWER_Off (0UL)
#define POWER_RAM_POWER_S11POWER_On (1UL)

/* Bit 10 : Keep RAM section S10 on or off in System ON mode. */
#define POWER_RAM_POWER_S10POWER_Pos (10UL)
#define POWER_RAM_POWER_S10POWER_Msk (0x1UL << POWER_RAM_POWER_S10POWER_Pos)
#define POWER_RAM_POWER_S10POWER_Off (0UL)
#define POWER_RAM_POWER_S10POWER_On (1UL)

/* Bit 9 : Keep RAM section S9 on or off in System ON mode. */
#define POWER_RAM_POWER_S9POWER_Pos (9UL)
#define POWER_RAM_POWER_S9POWER_Msk (0x1UL << POWER_RAM_POWER_S9POWER_Pos)
#define POWER_RAM_POWER_S9POWER_Off (0UL)
#define POWER_RAM_POWER_S9POWER_On (1UL)

/* Bit 8 : Keep RAM section S8 on or off in System ON mode. */
#define POWER_RAM_POWER_S8POWER_Pos (8UL)
#define POWER_RAM_POWER_S8POWER_Msk (0x1UL << POWER_RAM_POWER_S8POWER_Pos)
#define POWER_RAM_POWER_S8POWER_Off (0UL)
#define POWER_RAM_POWER_S8POWER_On (1UL)

/* Bit 7 : Keep RAM section S7 on or off in System ON mode. */
#define POWER_RAM_POWER_S7POWER_Pos (7UL)
#define POWER_RAM_POWER_S7POWER_Msk (0x1UL << POWER_RAM_POWER_S7POWER_Pos)
#define POWER_RAM_POWER_S7POWER_Off (0UL)
#define POWER_RAM_POWER_S7POWER_On (1UL)

/* Bit 6 : Keep RAM section S6 on or off in System ON mode. */
#define POWER_RAM_POWER_S6POWER_Pos (6UL)
#define POWER_RAM_POWER_S6POWER_Msk (0x1UL << POWER_RAM_POWER_S6POWER_Pos)
#define POWER_RAM_POWER_S6POWER_Off (0UL)
#define POWER_RAM_POWER_S6POWER_On (1UL)

/* Bit 5 : Keep RAM section S5 on or off in System ON mode. */
#define POWER_RAM_POWER_S5POWER_Pos (5UL)
#define POWER_RAM_POWER_S5POWER_Msk (0x1UL << POWER_RAM_POWER_S5POWER_Pos)
#define POWER_RAM_POWER_S5POWER_Off (0UL)
#define POWER_RAM_POWER_S5POWER_On (1UL)

/* Bit 4 : Keep RAM section S4 on or off in System ON mode. */
#define POWER_RAM_POWER_S4POWER_Pos (4UL)
#define POWER_RAM_POWER_S4POWER_Msk (0x1UL << POWER_RAM_POWER_S4POWER_Pos)
#define POWER_RAM_POWER_S4POWER_Off (0UL)
#define POWER_RAM_POWER_S4POWER_On (1UL)

/* Bit 3 : Keep RAM section S3 on or off in System ON mode. */
#define POWER_RAM_POWER_S3POWER_Pos (3UL)
#define POWER_RAM_POWER_S3POWER_Msk (0x1UL << POWER_RAM_POWER_S3POWER_Pos)
#define POWER_RAM_POWER_S3POWER_Off (0UL)
#define POWER_RAM_POWER_S3POWER_On (1UL)

/* Bit 2 : Keep RAM section S2 on or off in System ON mode. */
#define POWER_RAM_POWER_S2POWER_Pos (2UL)
#define POWER_RAM_POWER_S2POWER_Msk (0x1UL << POWER_RAM_POWER_S2POWER_Pos)
#define POWER_RAM_POWER_S2POWER_Off (0UL)
#define POWER_RAM_POWER_S2POWER_On (1UL)

/* Bit 1 : Keep RAM section S1 on or off in System ON mode. */
#define POWER_RAM_POWER_S1POWER_Pos (1UL)
#define POWER_RAM_POWER_S1POWER_Msk (0x1UL << POWER_RAM_POWER_S1POWER_Pos)
#define POWER_RAM_POWER_S1POWER_Off (0UL)
#define POWER_RAM_POWER_S1POWER_On (1UL)

/* Bit 0 : Keep RAM section S0 on or off in System ON mode. */
#define POWER_RAM_POWER_S0POWER_Pos (0UL)
#define POWER_RAM_POWER_S0POWER_Msk (0x1UL << POWER_RAM_POWER_S0POWER_Pos)
#define POWER_RAM_POWER_S0POWER_Off (0UL)
#define POWER_RAM_POWER_S0POWER_On (1UL)

/* Register: POWER_RAM_POWERSET */
/* Description: Description cluster: RAMn power control set register */

/* Bit 31 : Keep retention on RAM section S15 when RAM section is switched off */
#define POWER_RAM_POWERSET_S15RETENTION_Pos (31UL)
#define POWER_RAM_POWERSET_S15RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S15RETENTION_Pos)
#define POWER_RAM_POWERSET_S15RETENTION_On (1UL)

/* Bit 30 : Keep retention on RAM section S14 when RAM section is switched off */
#define POWER_RAM_POWERSET_S14RETENTION_Pos (30UL)
#define POWER_RAM_POWERSET_S14RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S14RETENTION_Pos)
#define POWER_RAM_POWERSET_S14RETENTION_On (1UL)

/* Bit 29 : Keep retention on RAM section S13 when RAM section is switched off */
#define POWER_RAM_POWERSET_S13RETENTION_Pos (29UL)
#define POWER_RAM_POWERSET_S13RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S13RETENTION_Pos)
#define POWER_RAM_POWERSET_S13RETENTION_On (1UL)

/* Bit 28 : Keep retention on RAM section S12 when RAM section is switched off */
#define POWER_RAM_POWERSET_S12RETENTION_Pos (28UL)
#define POWER_RAM_POWERSET_S12RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S12RETENTION_Pos)
#define POWER_RAM_POWERSET_S12RETENTION_On (1UL)

/* Bit 27 : Keep retention on RAM section S11 when RAM section is switched off */
#define POWER_RAM_POWERSET_S11RETENTION_Pos (27UL)
#define POWER_RAM_POWERSET_S11RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S11RETENTION_Pos)
#define POWER_RAM_POWERSET_S11RETENTION_On (1UL)

/* Bit 26 : Keep retention on RAM section S10 when RAM section is switched off */
#define POWER_RAM_POWERSET_S10RETENTION_Pos (26UL)
#define POWER_RAM_POWERSET_S10RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S10RETENTION_Pos)
#define POWER_RAM_POWERSET_S10RETENTION_On (1UL)

/* Bit 25 : Keep retention on RAM section S9 when RAM section is switched off */
#define POWER_RAM_POWERSET_S9RETENTION_Pos (25UL)
#define POWER_RAM_POWERSET_S9RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S9RETENTION_Pos)
#define POWER_RAM_POWERSET_S9RETENTION_On (1UL)

/* Bit 24 : Keep retention on RAM section S8 when RAM section is switched off */
#define POWER_RAM_POWERSET_S8RETENTION_Pos (24UL)
#define POWER_RAM_POWERSET_S8RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S8RETENTION_Pos)
#define POWER_RAM_POWERSET_S8RETENTION_On (1UL)

/* Bit 23 : Keep retention on RAM section S7 when RAM section is switched off */
#define POWER_RAM_POWERSET_S7RETENTION_Pos (23UL)
#define POWER_RAM_POWERSET_S7RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S7RETENTION_Pos)
#define POWER_RAM_POWERSET_S7RETENTION_On (1UL)

/* Bit 22 : Keep retention on RAM section S6 when RAM section is switched off */
#define POWER_RAM_POWERSET_S6RETENTION_Pos (22UL)
#define POWER_RAM_POWERSET_S6RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S6RETENTION_Pos)
#define POWER_RAM_POWERSET_S6RETENTION_On (1UL)

/* Bit 21 : Keep retention on RAM section S5 when RAM section is switched off */
#define POWER_RAM_POWERSET_S5RETENTION_Pos (21UL)
#define POWER_RAM_POWERSET_S5RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S5RETENTION_Pos)
#define POWER_RAM_POWERSET_S5RETENTION_On (1UL)

/* Bit 20 : Keep retention on RAM section S4 when RAM section is switched off */
#define POWER_RAM_POWERSET_S4RETENTION_Pos (20UL)
#define POWER_RAM_POWERSET_S4RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S4RETENTION_Pos)
#define POWER_RAM_POWERSET_S4RETENTION_On (1UL)

/* Bit 19 : Keep retention on RAM section S3 when RAM section is switched off */
#define POWER_RAM_POWERSET_S3RETENTION_Pos (19UL)
#define POWER_RAM_POWERSET_S3RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S3RETENTION_Pos)
#define POWER_RAM_POWERSET_S3RETENTION_On (1UL)

/* Bit 18 : Keep retention on RAM section S2 when RAM section is switched off */
#define POWER_RAM_POWERSET_S2RETENTION_Pos (18UL)
#define POWER_RAM_POWERSET_S2RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S2RETENTION_Pos)
#define POWER_RAM_POWERSET_S2RETENTION_On (1UL)

/* Bit 17 : Keep retention on RAM section S1 when RAM section is switched off */
#define POWER_RAM_POWERSET_S1RETENTION_Pos (17UL)
#define POWER_RAM_POWERSET_S1RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S1RETENTION_Pos)
#define POWER_RAM_POWERSET_S1RETENTION_On (1UL)

/* Bit 16 : Keep retention on RAM section S0 when RAM section is switched off */
#define POWER_RAM_POWERSET_S0RETENTION_Pos (16UL)
#define POWER_RAM_POWERSET_S0RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S0RETENTION_Pos)
#define POWER_RAM_POWERSET_S0RETENTION_On (1UL)

/* Bit 15 : Keep RAM section S15 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S15POWER_Pos (15UL)
#define POWER_RAM_POWERSET_S15POWER_Msk (0x1UL << POWER_RAM_POWERSET_S15POWER_Pos)
#define POWER_RAM_POWERSET_S15POWER_On (1UL)

/* Bit 14 : Keep RAM section S14 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S14POWER_Pos (14UL)
#define POWER_RAM_POWERSET_S14POWER_Msk (0x1UL << POWER_RAM_POWERSET_S14POWER_Pos)
#define POWER_RAM_POWERSET_S14POWER_On (1UL)

/* Bit 13 : Keep RAM section S13 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S13POWER_Pos (13UL)
#define POWER_RAM_POWERSET_S13POWER_Msk (0x1UL << POWER_RAM_POWERSET_S13POWER_Pos)
#define POWER_RAM_POWERSET_S13POWER_On (1UL)

/* Bit 12 : Keep RAM section S12 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S12POWER_Pos (12UL)
#define POWER_RAM_POWERSET_S12POWER_Msk (0x1UL << POWER_RAM_POWERSET_S12POWER_Pos)
#define POWER_RAM_POWERSET_S12POWER_On (1UL)

/* Bit 11 : Keep RAM section S11 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S11POWER_Pos (11UL)
#define POWER_RAM_POWERSET_S11POWER_Msk (0x1UL << POWER_RAM_POWERSET_S11POWER_Pos)
#define POWER_RAM_POWERSET_S11POWER_On (1UL)

/* Bit 10 : Keep RAM section S10 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S10POWER_Pos (10UL)
#define POWER_RAM_POWERSET_S10POWER_Msk (0x1UL << POWER_RAM_POWERSET_S10POWER_Pos)
#define POWER_RAM_POWERSET_S10POWER_On (1UL)

/* Bit 9 : Keep RAM section S9 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S9POWER_Pos (9UL)
#define POWER_RAM_POWERSET_S9POWER_Msk (0x1UL << POWER_RAM_POWERSET_S9POWER_Pos)
#define POWER_RAM_POWERSET_S9POWER_On (1UL)

/* Bit 8 : Keep RAM section S8 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S8POWER_Pos (8UL)
#define POWER_RAM_POWERSET_S8POWER_Msk (0x1UL << POWER_RAM_POWERSET_S8POWER_Pos)
#define POWER_RAM_POWERSET_S8POWER_On (1UL)

/* Bit 7 : Keep RAM section S7 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S7POWER_Pos (7UL)
#define POWER_RAM_POWERSET_S7POWER_Msk (0x1UL << POWER_RAM_POWERSET_S7POWER_Pos)
#define POWER_RAM_POWERSET_S7POWER_On (1UL)

/* Bit 6 : Keep RAM section S6 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S6POWER_Pos (6UL)
#define POWER_RAM_POWERSET_S6POWER_Msk (0x1UL << POWER_RAM_POWERSET_S6POWER_Pos)
#define POWER_RAM_POWERSET_S6POWER_On (1UL)

/* Bit 5 : Keep RAM section S5 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S5POWER_Pos (5UL)
#define POWER_RAM_POWERSET_S5POWER_Msk (0x1UL << POWER_RAM_POWERSET_S5POWER_Pos)
#define POWER_RAM_POWERSET_S5POWER_On (1UL)

/* Bit 4 : Keep RAM section S4 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S4POWER_Pos (4UL)
#define POWER_RAM_POWERSET_S4POWER_Msk (0x1UL << POWER_RAM_POWERSET_S4POWER_Pos)
#define POWER_RAM_POWERSET_S4POWER_On (1UL)

/* Bit 3 : Keep RAM section S3 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S3POWER_Pos (3UL)
#define POWER_RAM_POWERSET_S3POWER_Msk (0x1UL << POWER_RAM_POWERSET_S3POWER_Pos)
#define POWER_RAM_POWERSET_S3POWER_On (1UL)

/* Bit 2 : Keep RAM section S2 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S2POWER_Pos (2UL)
#define POWER_RAM_POWERSET_S2POWER_Msk (0x1UL << POWER_RAM_POWERSET_S2POWER_Pos)
#define POWER_RAM_POWERSET_S2POWER_On (1UL)

/* Bit 1 : Keep RAM section S1 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S1POWER_Pos (1UL)
#define POWER_RAM_POWERSET_S1POWER_Msk (0x1UL << POWER_RAM_POWERSET_S1POWER_Pos)
#define POWER_RAM_POWERSET_S1POWER_On (1UL)

/* Bit 0 : Keep RAM section S0 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S0POWER_Pos (0UL)
#define POWER_RAM_POWERSET_S0POWER_Msk (0x1UL << POWER_RAM_POWERSET_S0POWER_Pos)
#define POWER_RAM_POWERSET_S0POWER_On (1UL)

/* Register: POWER_RAM_POWERCLR */
/* Description: Description cluster: RAMn power control clear register */

/* Bit 31 : Keep retention on RAM section S15 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S15RETENTION_Pos (31UL)
#define POWER_RAM_POWERCLR_S15RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S15RETENTION_Pos)
#define POWER_RAM_POWERCLR_S15RETENTION_Off (1UL)

/* Bit 30 : Keep retention on RAM section S14 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S14RETENTION_Pos (30UL)
#define POWER_RAM_POWERCLR_S14RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S14RETENTION_Pos)
#define POWER_RAM_POWERCLR_S14RETENTION_Off (1UL)

/* Bit 29 : Keep retention on RAM section S13 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S13RETENTION_Pos (29UL)
#define POWER_RAM_POWERCLR_S13RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S13RETENTION_Pos)
#define POWER_RAM_POWERCLR_S13RETENTION_Off (1UL)

/* Bit 28 : Keep retention on RAM section S12 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S12RETENTION_Pos (28UL)
#define POWER_RAM_POWERCLR_S12RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S12RETENTION_Pos)
#define POWER_RAM_POWERCLR_S12RETENTION_Off (1UL)

/* Bit 27 : Keep retention on RAM section S11 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S11RETENTION_Pos (27UL)
#define POWER_RAM_POWERCLR_S11RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S11RETENTION_Pos)
#define POWER_RAM_POWERCLR_S11RETENTION_Off (1UL)

/* Bit 26 : Keep retention on RAM section S10 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S10RETENTION_Pos (26UL)
#define POWER_RAM_POWERCLR_S10RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S10RETENTION_Pos)
#define POWER_RAM_POWERCLR_S10RETENTION_Off (1UL)

/* Bit 25 : Keep retention on RAM section S9 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S9RETENTION_Pos (25UL)
#define POWER_RAM_POWERCLR_S9RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S9RETENTION_Pos)
#define POWER_RAM_POWERCLR_S9RETENTION_Off (1UL)

/* Bit 24 : Keep retention on RAM section S8 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S8RETENTION_Pos (24UL)
#define POWER_RAM_POWERCLR_S8RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S8RETENTION_Pos)
#define POWER_RAM_POWERCLR_S8RETENTION_Off (1UL)

/* Bit 23 : Keep retention on RAM section S7 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S7RETENTION_Pos (23UL)
#define POWER_RAM_POWERCLR_S7RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S7RETENTION_Pos)
#define POWER_RAM_POWERCLR_S7RETENTION_Off (1UL)

/* Bit 22 : Keep retention on RAM section S6 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S6RETENTION_Pos (22UL)
#define POWER_RAM_POWERCLR_S6RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S6RETENTION_Pos)
#define POWER_RAM_POWERCLR_S6RETENTION_Off (1UL)

/* Bit 21 : Keep retention on RAM section S5 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S5RETENTION_Pos (21UL)
#define POWER_RAM_POWERCLR_S5RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S5RETENTION_Pos)
#define POWER_RAM_POWERCLR_S5RETENTION_Off (1UL)

/* Bit 20 : Keep retention on RAM section S4 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S4RETENTION_Pos (20UL)
#define POWER_RAM_POWERCLR_S4RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S4RETENTION_Pos)
#define POWER_RAM_POWERCLR_S4RETENTION_Off (1UL)

/* Bit 19 : Keep retention on RAM section S3 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S3RETENTION_Pos (19UL)
#define POWER_RAM_POWERCLR_S3RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S3RETENTION_Pos)
#define POWER_RAM_POWERCLR_S3RETENTION_Off (1UL)

/* Bit 18 : Keep retention on RAM section S2 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S2RETENTION_Pos (18UL)
#define POWER_RAM_POWERCLR_S2RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S2RETENTION_Pos)
#define POWER_RAM_POWERCLR_S2RETENTION_Off (1UL)

/* Bit 17 : Keep retention on RAM section S1 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S1RETENTION_Pos (17UL)
#define POWER_RAM_POWERCLR_S1RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S1RETENTION_Pos)
#define POWER_RAM_POWERCLR_S1RETENTION_Off (1UL)

/* Bit 16 : Keep retention on RAM section S0 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S0RETENTION_Pos (16UL)
#define POWER_RAM_POWERCLR_S0RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S0RETENTION_Pos)
#define POWER_RAM_POWERCLR_S0RETENTION_Off (1UL)

/* Bit 15 : Keep RAM section S15 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S15POWER_Pos (15UL)
#define POWER_RAM_POWERCLR_S15POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S15POWER_Pos)
#define POWER_RAM_POWERCLR_S15POWER_Off (1UL)

/* Bit 14 : Keep RAM section S14 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S14POWER_Pos (14UL)
#define POWER_RAM_POWERCLR_S14POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S14POWER_Pos)
#define POWER_RAM_POWERCLR_S14POWER_Off (1UL)

/* Bit 13 : Keep RAM section S13 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S13POWER_Pos (13UL)
#define POWER_RAM_POWERCLR_S13POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S13POWER_Pos)
#define POWER_RAM_POWERCLR_S13POWER_Off (1UL)

/* Bit 12 : Keep RAM section S12 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S12POWER_Pos (12UL)
#define POWER_RAM_POWERCLR_S12POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S12POWER_Pos)
#define POWER_RAM_POWERCLR_S12POWER_Off (1UL)

/* Bit 11 : Keep RAM section S11 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S11POWER_Pos (11UL)
#define POWER_RAM_POWERCLR_S11POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S11POWER_Pos)
#define POWER_RAM_POWERCLR_S11POWER_Off (1UL)

/* Bit 10 : Keep RAM section S10 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S10POWER_Pos (10UL)
#define POWER_RAM_POWERCLR_S10POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S10POWER_Pos)
#define POWER_RAM_POWERCLR_S10POWER_Off (1UL)

/* Bit 9 : Keep RAM section S9 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S9POWER_Pos (9UL)
#define POWER_RAM_POWERCLR_S9POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S9POWER_Pos)
#define POWER_RAM_POWERCLR_S9POWER_Off (1UL)

/* Bit 8 : Keep RAM section S8 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S8POWER_Pos (8UL)
#define POWER_RAM_POWERCLR_S8POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S8POWER_Pos)
#define POWER_RAM_POWERCLR_S8POWER_Off (1UL)

/* Bit 7 : Keep RAM section S7 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S7POWER_Pos (7UL)
#define POWER_RAM_POWERCLR_S7POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S7POWER_Pos)
#define POWER_RAM_POWERCLR_S7POWER_Off (1UL)

/* Bit 6 : Keep RAM section S6 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S6POWER_Pos (6UL)
#define POWER_RAM_POWERCLR_S6POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S6POWER_Pos)
#define POWER_RAM_POWERCLR_S6POWER_Off (1UL)

/* Bit 5 : Keep RAM section S5 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S5POWER_Pos (5UL)
#define POWER_RAM_POWERCLR_S5POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S5POWER_Pos)
#define POWER_RAM_POWERCLR_S5POWER_Off (1UL)

/* Bit 4 : Keep RAM section S4 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S4POWER_Pos (4UL)
#define POWER_RAM_POWERCLR_S4POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S4POWER_Pos)
#define POWER_RAM_POWERCLR_S4POWER_Off (1UL)

/* Bit 3 : Keep RAM section S3 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S3POWER_Pos (3UL)
#define POWER_RAM_POWERCLR_S3POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S3POWER_Pos)
#define POWER_RAM_POWERCLR_S3POWER_Off (1UL)

/* Bit 2 : Keep RAM section S2 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S2POWER_Pos (2UL)
#define POWER_RAM_POWERCLR_S2POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S2POWER_Pos)
#define POWER_RAM_POWERCLR_S2POWER_Off (1UL)

/* Bit 1 : Keep RAM section S1 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S1POWER_Pos (1UL)
#define POWER_RAM_POWERCLR_S1POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S1POWER_Pos)
#define POWER_RAM_POWERCLR_S1POWER_Off (1UL)

/* Bit 0 : Keep RAM section S0 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S0POWER_Pos (0UL)
#define POWER_RAM_POWERCLR_S0POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S0POWER_Pos)
#define POWER_RAM_POWERCLR_S0POWER_Off (1UL)


/* Peripheral: PPI */
/* Description: Programmable Peripheral Interconnect */

/* Register: PPI_TASKS_CHG_EN */
/* Description: Description cluster: Enable channel group n */

/* Bit 0 : Enable channel group n */
#define PPI_TASKS_CHG_EN_EN_Pos (0UL)
#define PPI_TASKS_CHG_EN_EN_Msk (0x1UL << PPI_TASKS_CHG_EN_EN_Pos)
#define PPI_TASKS_CHG_EN_EN_Trigger (1UL)

/* Register: PPI_TASKS_CHG_DIS */
/* Description: Description cluster: Disable channel group n */

/* Bit 0 : Disable channel group n */
#define PPI_TASKS_CHG_DIS_DIS_Pos (0UL)
#define PPI_TASKS_CHG_DIS_DIS_Msk (0x1UL << PPI_TASKS_CHG_DIS_DIS_Pos)
#define PPI_TASKS_CHG_DIS_DIS_Trigger (1UL)

/* Register: PPI_CHEN */
/* Description: Channel enable register */

/* Bit 31 : Enable or disable channel 31 */
#define PPI_CHEN_CH31_Pos (31UL)
#define PPI_CHEN_CH31_Msk (0x1UL << PPI_CHEN_CH31_Pos)
#define PPI_CHEN_CH31_Disabled (0UL)
#define PPI_CHEN_CH31_Enabled (1UL)

/* Bit 30 : Enable or disable channel 30 */
#define PPI_CHEN_CH30_Pos (30UL)
#define PPI_CHEN_CH30_Msk (0x1UL << PPI_CHEN_CH30_Pos)
#define PPI_CHEN_CH30_Disabled (0UL)
#define PPI_CHEN_CH30_Enabled (1UL)

/* Bit 29 : Enable or disable channel 29 */
#define PPI_CHEN_CH29_Pos (29UL)
#define PPI_CHEN_CH29_Msk (0x1UL << PPI_CHEN_CH29_Pos)
#define PPI_CHEN_CH29_Disabled (0UL)
#define PPI_CHEN_CH29_Enabled (1UL)

/* Bit 28 : Enable or disable channel 28 */
#define PPI_CHEN_CH28_Pos (28UL)
#define PPI_CHEN_CH28_Msk (0x1UL << PPI_CHEN_CH28_Pos)
#define PPI_CHEN_CH28_Disabled (0UL)
#define PPI_CHEN_CH28_Enabled (1UL)

/* Bit 27 : Enable or disable channel 27 */
#define PPI_CHEN_CH27_Pos (27UL)
#define PPI_CHEN_CH27_Msk (0x1UL << PPI_CHEN_CH27_Pos)
#define PPI_CHEN_CH27_Disabled (0UL)
#define PPI_CHEN_CH27_Enabled (1UL)

/* Bit 26 : Enable or disable channel 26 */
#define PPI_CHEN_CH26_Pos (26UL)
#define PPI_CHEN_CH26_Msk (0x1UL << PPI_CHEN_CH26_Pos)
#define PPI_CHEN_CH26_Disabled (0UL)
#define PPI_CHEN_CH26_Enabled (1UL)

/* Bit 25 : Enable or disable channel 25 */
#define PPI_CHEN_CH25_Pos (25UL)
#define PPI_CHEN_CH25_Msk (0x1UL << PPI_CHEN_CH25_Pos)
#define PPI_CHEN_CH25_Disabled (0UL)
#define PPI_CHEN_CH25_Enabled (1UL)

/* Bit 24 : Enable or disable channel 24 */
#define PPI_CHEN_CH24_Pos (24UL)
#define PPI_CHEN_CH24_Msk (0x1UL << PPI_CHEN_CH24_Pos)
#define PPI_CHEN_CH24_Disabled (0UL)
#define PPI_CHEN_CH24_Enabled (1UL)

/* Bit 23 : Enable or disable channel 23 */
#define PPI_CHEN_CH23_Pos (23UL)
#define PPI_CHEN_CH23_Msk (0x1UL << PPI_CHEN_CH23_Pos)
#define PPI_CHEN_CH23_Disabled (0UL)
#define PPI_CHEN_CH23_Enabled (1UL)

/* Bit 22 : Enable or disable channel 22 */
#define PPI_CHEN_CH22_Pos (22UL)
#define PPI_CHEN_CH22_Msk (0x1UL << PPI_CHEN_CH22_Pos)
#define PPI_CHEN_CH22_Disabled (0UL)
#define PPI_CHEN_CH22_Enabled (1UL)

/* Bit 21 : Enable or disable channel 21 */
#define PPI_CHEN_CH21_Pos (21UL)
#define PPI_CHEN_CH21_Msk (0x1UL << PPI_CHEN_CH21_Pos)
#define PPI_CHEN_CH21_Disabled (0UL)
#define PPI_CHEN_CH21_Enabled (1UL)

/* Bit 20 : Enable or disable channel 20 */
#define PPI_CHEN_CH20_Pos (20UL)
#define PPI_CHEN_CH20_Msk (0x1UL << PPI_CHEN_CH20_Pos)
#define PPI_CHEN_CH20_Disabled (0UL)
#define PPI_CHEN_CH20_Enabled (1UL)

/* Bit 19 : Enable or disable channel 19 */
#define PPI_CHEN_CH19_Pos (19UL)
#define PPI_CHEN_CH19_Msk (0x1UL << PPI_CHEN_CH19_Pos)
#define PPI_CHEN_CH19_Disabled (0UL)
#define PPI_CHEN_CH19_Enabled (1UL)

/* Bit 18 : Enable or disable channel 18 */
#define PPI_CHEN_CH18_Pos (18UL)
#define PPI_CHEN_CH18_Msk (0x1UL << PPI_CHEN_CH18_Pos)
#define PPI_CHEN_CH18_Disabled (0UL)
#define PPI_CHEN_CH18_Enabled (1UL)

/* Bit 17 : Enable or disable channel 17 */
#define PPI_CHEN_CH17_Pos (17UL)
#define PPI_CHEN_CH17_Msk (0x1UL << PPI_CHEN_CH17_Pos)
#define PPI_CHEN_CH17_Disabled (0UL)
#define PPI_CHEN_CH17_Enabled (1UL)

/* Bit 16 : Enable or disable channel 16 */
#define PPI_CHEN_CH16_Pos (16UL)
#define PPI_CHEN_CH16_Msk (0x1UL << PPI_CHEN_CH16_Pos)
#define PPI_CHEN_CH16_Disabled (0UL)
#define PPI_CHEN_CH16_Enabled (1UL)

/* Bit 15 : Enable or disable channel 15 */
#define PPI_CHEN_CH15_Pos (15UL)
#define PPI_CHEN_CH15_Msk (0x1UL << PPI_CHEN_CH15_Pos)
#define PPI_CHEN_CH15_Disabled (0UL)
#define PPI_CHEN_CH15_Enabled (1UL)

/* Bit 14 : Enable or disable channel 14 */
#define PPI_CHEN_CH14_Pos (14UL)
#define PPI_CHEN_CH14_Msk (0x1UL << PPI_CHEN_CH14_Pos)
#define PPI_CHEN_CH14_Disabled (0UL)
#define PPI_CHEN_CH14_Enabled (1UL)

/* Bit 13 : Enable or disable channel 13 */
#define PPI_CHEN_CH13_Pos (13UL)
#define PPI_CHEN_CH13_Msk (0x1UL << PPI_CHEN_CH13_Pos)
#define PPI_CHEN_CH13_Disabled (0UL)
#define PPI_CHEN_CH13_Enabled (1UL)

/* Bit 12 : Enable or disable channel 12 */
#define PPI_CHEN_CH12_Pos (12UL)
#define PPI_CHEN_CH12_Msk (0x1UL << PPI_CHEN_CH12_Pos)
#define PPI_CHEN_CH12_Disabled (0UL)
#define PPI_CHEN_CH12_Enabled (1UL)

/* Bit 11 : Enable or disable channel 11 */
#define PPI_CHEN_CH11_Pos (11UL)
#define PPI_CHEN_CH11_Msk (0x1UL << PPI_CHEN_CH11_Pos)
#define PPI_CHEN_CH11_Disabled (0UL)
#define PPI_CHEN_CH11_Enabled (1UL)

/* Bit 10 : Enable or disable channel 10 */
#define PPI_CHEN_CH10_Pos (10UL)
#define PPI_CHEN_CH10_Msk (0x1UL << PPI_CHEN_CH10_Pos)
#define PPI_CHEN_CH10_Disabled (0UL)
#define PPI_CHEN_CH10_Enabled (1UL)

/* Bit 9 : Enable or disable channel 9 */
#define PPI_CHEN_CH9_Pos (9UL)
#define PPI_CHEN_CH9_Msk (0x1UL << PPI_CHEN_CH9_Pos)
#define PPI_CHEN_CH9_Disabled (0UL)
#define PPI_CHEN_CH9_Enabled (1UL)

/* Bit 8 : Enable or disable channel 8 */
#define PPI_CHEN_CH8_Pos (8UL)
#define PPI_CHEN_CH8_Msk (0x1UL << PPI_CHEN_CH8_Pos)
#define PPI_CHEN_CH8_Disabled (0UL)
#define PPI_CHEN_CH8_Enabled (1UL)

/* Bit 7 : Enable or disable channel 7 */
#define PPI_CHEN_CH7_Pos (7UL)
#define PPI_CHEN_CH7_Msk (0x1UL << PPI_CHEN_CH7_Pos)
#define PPI_CHEN_CH7_Disabled (0UL)
#define PPI_CHEN_CH7_Enabled (1UL)

/* Bit 6 : Enable or disable channel 6 */
#define PPI_CHEN_CH6_Pos (6UL)
#define PPI_CHEN_CH6_Msk (0x1UL << PPI_CHEN_CH6_Pos)
#define PPI_CHEN_CH6_Disabled (0UL)
#define PPI_CHEN_CH6_Enabled (1UL)

/* Bit 5 : Enable or disable channel 5 */
#define PPI_CHEN_CH5_Pos (5UL)
#define PPI_CHEN_CH5_Msk (0x1UL << PPI_CHEN_CH5_Pos)
#define PPI_CHEN_CH5_Disabled (0UL)
#define PPI_CHEN_CH5_Enabled (1UL)

/* Bit 4 : Enable or disable channel 4 */
#define PPI_CHEN_CH4_Pos (4UL)
#define PPI_CHEN_CH4_Msk (0x1UL << PPI_CHEN_CH4_Pos)
#define PPI_CHEN_CH4_Disabled (0UL)
#define PPI_CHEN_CH4_Enabled (1UL)

/* Bit 3 : Enable or disable channel 3 */
#define PPI_CHEN_CH3_Pos (3UL)
#define PPI_CHEN_CH3_Msk (0x1UL << PPI_CHEN_CH3_Pos)
#define PPI_CHEN_CH3_Disabled (0UL)
#define PPI_CHEN_CH3_Enabled (1UL)

/* Bit 2 : Enable or disable channel 2 */
#define PPI_CHEN_CH2_Pos (2UL)
#define PPI_CHEN_CH2_Msk (0x1UL << PPI_CHEN_CH2_Pos)
#define PPI_CHEN_CH2_Disabled (0UL)
#define PPI_CHEN_CH2_Enabled (1UL)

/* Bit 1 : Enable or disable channel 1 */
#define PPI_CHEN_CH1_Pos (1UL)
#define PPI_CHEN_CH1_Msk (0x1UL << PPI_CHEN_CH1_Pos)
#define PPI_CHEN_CH1_Disabled (0UL)
#define PPI_CHEN_CH1_Enabled (1UL)

/* Bit 0 : Enable or disable channel 0 */
#define PPI_CHEN_CH0_Pos (0UL)
#define PPI_CHEN_CH0_Msk (0x1UL << PPI_CHEN_CH0_Pos)
#define PPI_CHEN_CH0_Disabled (0UL)
#define PPI_CHEN_CH0_Enabled (1UL)

/* Register: PPI_CHENSET */
/* Description: Channel enable set register */

/* Bit 31 : Channel 31 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH31_Pos (31UL)
#define PPI_CHENSET_CH31_Msk (0x1UL << PPI_CHENSET_CH31_Pos)
#define PPI_CHENSET_CH31_Disabled (0UL)
#define PPI_CHENSET_CH31_Enabled (1UL)
#define PPI_CHENSET_CH31_Set (1UL)

/* Bit 30 : Channel 30 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH30_Pos (30UL)
#define PPI_CHENSET_CH30_Msk (0x1UL << PPI_CHENSET_CH30_Pos)
#define PPI_CHENSET_CH30_Disabled (0UL)
#define PPI_CHENSET_CH30_Enabled (1UL)
#define PPI_CHENSET_CH30_Set (1UL)

/* Bit 29 : Channel 29 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH29_Pos (29UL)
#define PPI_CHENSET_CH29_Msk (0x1UL << PPI_CHENSET_CH29_Pos)
#define PPI_CHENSET_CH29_Disabled (0UL)
#define PPI_CHENSET_CH29_Enabled (1UL)
#define PPI_CHENSET_CH29_Set (1UL)

/* Bit 28 : Channel 28 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH28_Pos (28UL)
#define PPI_CHENSET_CH28_Msk (0x1UL << PPI_CHENSET_CH28_Pos)
#define PPI_CHENSET_CH28_Disabled (0UL)
#define PPI_CHENSET_CH28_Enabled (1UL)
#define PPI_CHENSET_CH28_Set (1UL)

/* Bit 27 : Channel 27 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH27_Pos (27UL)
#define PPI_CHENSET_CH27_Msk (0x1UL << PPI_CHENSET_CH27_Pos)
#define PPI_CHENSET_CH27_Disabled (0UL)
#define PPI_CHENSET_CH27_Enabled (1UL)
#define PPI_CHENSET_CH27_Set (1UL)

/* Bit 26 : Channel 26 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH26_Pos (26UL)
#define PPI_CHENSET_CH26_Msk (0x1UL << PPI_CHENSET_CH26_Pos)
#define PPI_CHENSET_CH26_Disabled (0UL)
#define PPI_CHENSET_CH26_Enabled (1UL)
#define PPI_CHENSET_CH26_Set (1UL)

/* Bit 25 : Channel 25 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH25_Pos (25UL)
#define PPI_CHENSET_CH25_Msk (0x1UL << PPI_CHENSET_CH25_Pos)
#define PPI_CHENSET_CH25_Disabled (0UL)
#define PPI_CHENSET_CH25_Enabled (1UL)
#define PPI_CHENSET_CH25_Set (1UL)

/* Bit 24 : Channel 24 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH24_Pos (24UL)
#define PPI_CHENSET_CH24_Msk (0x1UL << PPI_CHENSET_CH24_Pos)
#define PPI_CHENSET_CH24_Disabled (0UL)
#define PPI_CHENSET_CH24_Enabled (1UL)
#define PPI_CHENSET_CH24_Set (1UL)

/* Bit 23 : Channel 23 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH23_Pos (23UL)
#define PPI_CHENSET_CH23_Msk (0x1UL << PPI_CHENSET_CH23_Pos)
#define PPI_CHENSET_CH23_Disabled (0UL)
#define PPI_CHENSET_CH23_Enabled (1UL)
#define PPI_CHENSET_CH23_Set (1UL)

/* Bit 22 : Channel 22 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH22_Pos (22UL)
#define PPI_CHENSET_CH22_Msk (0x1UL << PPI_CHENSET_CH22_Pos)
#define PPI_CHENSET_CH22_Disabled (0UL)
#define PPI_CHENSET_CH22_Enabled (1UL)
#define PPI_CHENSET_CH22_Set (1UL)

/* Bit 21 : Channel 21 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH21_Pos (21UL)
#define PPI_CHENSET_CH21_Msk (0x1UL << PPI_CHENSET_CH21_Pos)
#define PPI_CHENSET_CH21_Disabled (0UL)
#define PPI_CHENSET_CH21_Enabled (1UL)
#define PPI_CHENSET_CH21_Set (1UL)

/* Bit 20 : Channel 20 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH20_Pos (20UL)
#define PPI_CHENSET_CH20_Msk (0x1UL << PPI_CHENSET_CH20_Pos)
#define PPI_CHENSET_CH20_Disabled (0UL)
#define PPI_CHENSET_CH20_Enabled (1UL)
#define PPI_CHENSET_CH20_Set (1UL)

/* Bit 19 : Channel 19 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH19_Pos (19UL)
#define PPI_CHENSET_CH19_Msk (0x1UL << PPI_CHENSET_CH19_Pos)
#define PPI_CHENSET_CH19_Disabled (0UL)
#define PPI_CHENSET_CH19_Enabled (1UL)
#define PPI_CHENSET_CH19_Set (1UL)

/* Bit 18 : Channel 18 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH18_Pos (18UL)
#define PPI_CHENSET_CH18_Msk (0x1UL << PPI_CHENSET_CH18_Pos)
#define PPI_CHENSET_CH18_Disabled (0UL)
#define PPI_CHENSET_CH18_Enabled (1UL)
#define PPI_CHENSET_CH18_Set (1UL)

/* Bit 17 : Channel 17 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH17_Pos (17UL)
#define PPI_CHENSET_CH17_Msk (0x1UL << PPI_CHENSET_CH17_Pos)
#define PPI_CHENSET_CH17_Disabled (0UL)
#define PPI_CHENSET_CH17_Enabled (1UL)
#define PPI_CHENSET_CH17_Set (1UL)

/* Bit 16 : Channel 16 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH16_Pos (16UL)
#define PPI_CHENSET_CH16_Msk (0x1UL << PPI_CHENSET_CH16_Pos)
#define PPI_CHENSET_CH16_Disabled (0UL)
#define PPI_CHENSET_CH16_Enabled (1UL)
#define PPI_CHENSET_CH16_Set (1UL)

/* Bit 15 : Channel 15 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH15_Pos (15UL)
#define PPI_CHENSET_CH15_Msk (0x1UL << PPI_CHENSET_CH15_Pos)
#define PPI_CHENSET_CH15_Disabled (0UL)
#define PPI_CHENSET_CH15_Enabled (1UL)
#define PPI_CHENSET_CH15_Set (1UL)

/* Bit 14 : Channel 14 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH14_Pos (14UL)
#define PPI_CHENSET_CH14_Msk (0x1UL << PPI_CHENSET_CH14_Pos)
#define PPI_CHENSET_CH14_Disabled (0UL)
#define PPI_CHENSET_CH14_Enabled (1UL)
#define PPI_CHENSET_CH14_Set (1UL)

/* Bit 13 : Channel 13 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH13_Pos (13UL)
#define PPI_CHENSET_CH13_Msk (0x1UL << PPI_CHENSET_CH13_Pos)
#define PPI_CHENSET_CH13_Disabled (0UL)
#define PPI_CHENSET_CH13_Enabled (1UL)
#define PPI_CHENSET_CH13_Set (1UL)

/* Bit 12 : Channel 12 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH12_Pos (12UL)
#define PPI_CHENSET_CH12_Msk (0x1UL << PPI_CHENSET_CH12_Pos)
#define PPI_CHENSET_CH12_Disabled (0UL)
#define PPI_CHENSET_CH12_Enabled (1UL)
#define PPI_CHENSET_CH12_Set (1UL)

/* Bit 11 : Channel 11 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH11_Pos (11UL)
#define PPI_CHENSET_CH11_Msk (0x1UL << PPI_CHENSET_CH11_Pos)
#define PPI_CHENSET_CH11_Disabled (0UL)
#define PPI_CHENSET_CH11_Enabled (1UL)
#define PPI_CHENSET_CH11_Set (1UL)

/* Bit 10 : Channel 10 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH10_Pos (10UL)
#define PPI_CHENSET_CH10_Msk (0x1UL << PPI_CHENSET_CH10_Pos)
#define PPI_CHENSET_CH10_Disabled (0UL)
#define PPI_CHENSET_CH10_Enabled (1UL)
#define PPI_CHENSET_CH10_Set (1UL)

/* Bit 9 : Channel 9 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH9_Pos (9UL)
#define PPI_CHENSET_CH9_Msk (0x1UL << PPI_CHENSET_CH9_Pos)
#define PPI_CHENSET_CH9_Disabled (0UL)
#define PPI_CHENSET_CH9_Enabled (1UL)
#define PPI_CHENSET_CH9_Set (1UL)

/* Bit 8 : Channel 8 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH8_Pos (8UL)
#define PPI_CHENSET_CH8_Msk (0x1UL << PPI_CHENSET_CH8_Pos)
#define PPI_CHENSET_CH8_Disabled (0UL)
#define PPI_CHENSET_CH8_Enabled (1UL)
#define PPI_CHENSET_CH8_Set (1UL)

/* Bit 7 : Channel 7 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH7_Pos (7UL)
#define PPI_CHENSET_CH7_Msk (0x1UL << PPI_CHENSET_CH7_Pos)
#define PPI_CHENSET_CH7_Disabled (0UL)
#define PPI_CHENSET_CH7_Enabled (1UL)
#define PPI_CHENSET_CH7_Set (1UL)

/* Bit 6 : Channel 6 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH6_Pos (6UL)
#define PPI_CHENSET_CH6_Msk (0x1UL << PPI_CHENSET_CH6_Pos)
#define PPI_CHENSET_CH6_Disabled (0UL)
#define PPI_CHENSET_CH6_Enabled (1UL)
#define PPI_CHENSET_CH6_Set (1UL)

/* Bit 5 : Channel 5 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH5_Pos (5UL)
#define PPI_CHENSET_CH5_Msk (0x1UL << PPI_CHENSET_CH5_Pos)
#define PPI_CHENSET_CH5_Disabled (0UL)
#define PPI_CHENSET_CH5_Enabled (1UL)
#define PPI_CHENSET_CH5_Set (1UL)

/* Bit 4 : Channel 4 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH4_Pos (4UL)
#define PPI_CHENSET_CH4_Msk (0x1UL << PPI_CHENSET_CH4_Pos)
#define PPI_CHENSET_CH4_Disabled (0UL)
#define PPI_CHENSET_CH4_Enabled (1UL)
#define PPI_CHENSET_CH4_Set (1UL)

/* Bit 3 : Channel 3 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH3_Pos (3UL)
#define PPI_CHENSET_CH3_Msk (0x1UL << PPI_CHENSET_CH3_Pos)
#define PPI_CHENSET_CH3_Disabled (0UL)
#define PPI_CHENSET_CH3_Enabled (1UL)
#define PPI_CHENSET_CH3_Set (1UL)

/* Bit 2 : Channel 2 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH2_Pos (2UL)
#define PPI_CHENSET_CH2_Msk (0x1UL << PPI_CHENSET_CH2_Pos)
#define PPI_CHENSET_CH2_Disabled (0UL)
#define PPI_CHENSET_CH2_Enabled (1UL)
#define PPI_CHENSET_CH2_Set (1UL)

/* Bit 1 : Channel 1 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH1_Pos (1UL)
#define PPI_CHENSET_CH1_Msk (0x1UL << PPI_CHENSET_CH1_Pos)
#define PPI_CHENSET_CH1_Disabled (0UL)
#define PPI_CHENSET_CH1_Enabled (1UL)
#define PPI_CHENSET_CH1_Set (1UL)

/* Bit 0 : Channel 0 enable set register.  Writing '0' has no effect. */
#define PPI_CHENSET_CH0_Pos (0UL)
#define PPI_CHENSET_CH0_Msk (0x1UL << PPI_CHENSET_CH0_Pos)
#define PPI_CHENSET_CH0_Disabled (0UL)
#define PPI_CHENSET_CH0_Enabled (1UL)
#define PPI_CHENSET_CH0_Set (1UL)

/* Register: PPI_CHENCLR */
/* Description: Channel enable clear register */

/* Bit 31 : Channel 31 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH31_Pos (31UL)
#define PPI_CHENCLR_CH31_Msk (0x1UL << PPI_CHENCLR_CH31_Pos)
#define PPI_CHENCLR_CH31_Disabled (0UL)
#define PPI_CHENCLR_CH31_Enabled (1UL)
#define PPI_CHENCLR_CH31_Clear (1UL)

/* Bit 30 : Channel 30 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH30_Pos (30UL)
#define PPI_CHENCLR_CH30_Msk (0x1UL << PPI_CHENCLR_CH30_Pos)
#define PPI_CHENCLR_CH30_Disabled (0UL)
#define PPI_CHENCLR_CH30_Enabled (1UL)
#define PPI_CHENCLR_CH30_Clear (1UL)

/* Bit 29 : Channel 29 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH29_Pos (29UL)
#define PPI_CHENCLR_CH29_Msk (0x1UL << PPI_CHENCLR_CH29_Pos)
#define PPI_CHENCLR_CH29_Disabled (0UL)
#define PPI_CHENCLR_CH29_Enabled (1UL)
#define PPI_CHENCLR_CH29_Clear (1UL)

/* Bit 28 : Channel 28 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH28_Pos (28UL)
#define PPI_CHENCLR_CH28_Msk (0x1UL << PPI_CHENCLR_CH28_Pos)
#define PPI_CHENCLR_CH28_Disabled (0UL)
#define PPI_CHENCLR_CH28_Enabled (1UL)
#define PPI_CHENCLR_CH28_Clear (1UL)

/* Bit 27 : Channel 27 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH27_Pos (27UL)
#define PPI_CHENCLR_CH27_Msk (0x1UL << PPI_CHENCLR_CH27_Pos)
#define PPI_CHENCLR_CH27_Disabled (0UL)
#define PPI_CHENCLR_CH27_Enabled (1UL)
#define PPI_CHENCLR_CH27_Clear (1UL)

/* Bit 26 : Channel 26 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH26_Pos (26UL)
#define PPI_CHENCLR_CH26_Msk (0x1UL << PPI_CHENCLR_CH26_Pos)
#define PPI_CHENCLR_CH26_Disabled (0UL)
#define PPI_CHENCLR_CH26_Enabled (1UL)
#define PPI_CHENCLR_CH26_Clear (1UL)

/* Bit 25 : Channel 25 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH25_Pos (25UL)
#define PPI_CHENCLR_CH25_Msk (0x1UL << PPI_CHENCLR_CH25_Pos)
#define PPI_CHENCLR_CH25_Disabled (0UL)
#define PPI_CHENCLR_CH25_Enabled (1UL)
#define PPI_CHENCLR_CH25_Clear (1UL)

/* Bit 24 : Channel 24 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH24_Pos (24UL)
#define PPI_CHENCLR_CH24_Msk (0x1UL << PPI_CHENCLR_CH24_Pos)
#define PPI_CHENCLR_CH24_Disabled (0UL)
#define PPI_CHENCLR_CH24_Enabled (1UL)
#define PPI_CHENCLR_CH24_Clear (1UL)

/* Bit 23 : Channel 23 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH23_Pos (23UL)
#define PPI_CHENCLR_CH23_Msk (0x1UL << PPI_CHENCLR_CH23_Pos)
#define PPI_CHENCLR_CH23_Disabled (0UL)
#define PPI_CHENCLR_CH23_Enabled (1UL)
#define PPI_CHENCLR_CH23_Clear (1UL)

/* Bit 22 : Channel 22 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH22_Pos (22UL)
#define PPI_CHENCLR_CH22_Msk (0x1UL << PPI_CHENCLR_CH22_Pos)
#define PPI_CHENCLR_CH22_Disabled (0UL)
#define PPI_CHENCLR_CH22_Enabled (1UL)
#define PPI_CHENCLR_CH22_Clear (1UL)

/* Bit 21 : Channel 21 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH21_Pos (21UL)
#define PPI_CHENCLR_CH21_Msk (0x1UL << PPI_CHENCLR_CH21_Pos)
#define PPI_CHENCLR_CH21_Disabled (0UL)
#define PPI_CHENCLR_CH21_Enabled (1UL)
#define PPI_CHENCLR_CH21_Clear (1UL)

/* Bit 20 : Channel 20 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH20_Pos (20UL)
#define PPI_CHENCLR_CH20_Msk (0x1UL << PPI_CHENCLR_CH20_Pos)
#define PPI_CHENCLR_CH20_Disabled (0UL)
#define PPI_CHENCLR_CH20_Enabled (1UL)
#define PPI_CHENCLR_CH20_Clear (1UL)

/* Bit 19 : Channel 19 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH19_Pos (19UL)
#define PPI_CHENCLR_CH19_Msk (0x1UL << PPI_CHENCLR_CH19_Pos)
#define PPI_CHENCLR_CH19_Disabled (0UL)
#define PPI_CHENCLR_CH19_Enabled (1UL)
#define PPI_CHENCLR_CH19_Clear (1UL)

/* Bit 18 : Channel 18 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH18_Pos (18UL)
#define PPI_CHENCLR_CH18_Msk (0x1UL << PPI_CHENCLR_CH18_Pos)
#define PPI_CHENCLR_CH18_Disabled (0UL)
#define PPI_CHENCLR_CH18_Enabled (1UL)
#define PPI_CHENCLR_CH18_Clear (1UL)

/* Bit 17 : Channel 17 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH17_Pos (17UL)
#define PPI_CHENCLR_CH17_Msk (0x1UL << PPI_CHENCLR_CH17_Pos)
#define PPI_CHENCLR_CH17_Disabled (0UL)
#define PPI_CHENCLR_CH17_Enabled (1UL)
#define PPI_CHENCLR_CH17_Clear (1UL)

/* Bit 16 : Channel 16 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH16_Pos (16UL)
#define PPI_CHENCLR_CH16_Msk (0x1UL << PPI_CHENCLR_CH16_Pos)
#define PPI_CHENCLR_CH16_Disabled (0UL)
#define PPI_CHENCLR_CH16_Enabled (1UL)
#define PPI_CHENCLR_CH16_Clear (1UL)

/* Bit 15 : Channel 15 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH15_Pos (15UL)
#define PPI_CHENCLR_CH15_Msk (0x1UL << PPI_CHENCLR_CH15_Pos)
#define PPI_CHENCLR_CH15_Disabled (0UL)
#define PPI_CHENCLR_CH15_Enabled (1UL)
#define PPI_CHENCLR_CH15_Clear (1UL)

/* Bit 14 : Channel 14 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH14_Pos (14UL)
#define PPI_CHENCLR_CH14_Msk (0x1UL << PPI_CHENCLR_CH14_Pos)
#define PPI_CHENCLR_CH14_Disabled (0UL)
#define PPI_CHENCLR_CH14_Enabled (1UL)
#define PPI_CHENCLR_CH14_Clear (1UL)

/* Bit 13 : Channel 13 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH13_Pos (13UL)
#define PPI_CHENCLR_CH13_Msk (0x1UL << PPI_CHENCLR_CH13_Pos)
#define PPI_CHENCLR_CH13_Disabled (0UL)
#define PPI_CHENCLR_CH13_Enabled (1UL)
#define PPI_CHENCLR_CH13_Clear (1UL)

/* Bit 12 : Channel 12 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH12_Pos (12UL)
#define PPI_CHENCLR_CH12_Msk (0x1UL << PPI_CHENCLR_CH12_Pos)
#define PPI_CHENCLR_CH12_Disabled (0UL)
#define PPI_CHENCLR_CH12_Enabled (1UL)
#define PPI_CHENCLR_CH12_Clear (1UL)

/* Bit 11 : Channel 11 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH11_Pos (11UL)
#define PPI_CHENCLR_CH11_Msk (0x1UL << PPI_CHENCLR_CH11_Pos)
#define PPI_CHENCLR_CH11_Disabled (0UL)
#define PPI_CHENCLR_CH11_Enabled (1UL)
#define PPI_CHENCLR_CH11_Clear (1UL)

/* Bit 10 : Channel 10 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH10_Pos (10UL)
#define PPI_CHENCLR_CH10_Msk (0x1UL << PPI_CHENCLR_CH10_Pos)
#define PPI_CHENCLR_CH10_Disabled (0UL)
#define PPI_CHENCLR_CH10_Enabled (1UL)
#define PPI_CHENCLR_CH10_Clear (1UL)

/* Bit 9 : Channel 9 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH9_Pos (9UL)
#define PPI_CHENCLR_CH9_Msk (0x1UL << PPI_CHENCLR_CH9_Pos)
#define PPI_CHENCLR_CH9_Disabled (0UL)
#define PPI_CHENCLR_CH9_Enabled (1UL)
#define PPI_CHENCLR_CH9_Clear (1UL)

/* Bit 8 : Channel 8 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH8_Pos (8UL)
#define PPI_CHENCLR_CH8_Msk (0x1UL << PPI_CHENCLR_CH8_Pos)
#define PPI_CHENCLR_CH8_Disabled (0UL)
#define PPI_CHENCLR_CH8_Enabled (1UL)
#define PPI_CHENCLR_CH8_Clear (1UL)

/* Bit 7 : Channel 7 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH7_Pos (7UL)
#define PPI_CHENCLR_CH7_Msk (0x1UL << PPI_CHENCLR_CH7_Pos)
#define PPI_CHENCLR_CH7_Disabled (0UL)
#define PPI_CHENCLR_CH7_Enabled (1UL)
#define PPI_CHENCLR_CH7_Clear (1UL)

/* Bit 6 : Channel 6 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH6_Pos (6UL)
#define PPI_CHENCLR_CH6_Msk (0x1UL << PPI_CHENCLR_CH6_Pos)
#define PPI_CHENCLR_CH6_Disabled (0UL)
#define PPI_CHENCLR_CH6_Enabled (1UL)
#define PPI_CHENCLR_CH6_Clear (1UL)

/* Bit 5 : Channel 5 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH5_Pos (5UL)
#define PPI_CHENCLR_CH5_Msk (0x1UL << PPI_CHENCLR_CH5_Pos)
#define PPI_CHENCLR_CH5_Disabled (0UL)
#define PPI_CHENCLR_CH5_Enabled (1UL)
#define PPI_CHENCLR_CH5_Clear (1UL)

/* Bit 4 : Channel 4 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH4_Pos (4UL)
#define PPI_CHENCLR_CH4_Msk (0x1UL << PPI_CHENCLR_CH4_Pos)
#define PPI_CHENCLR_CH4_Disabled (0UL)
#define PPI_CHENCLR_CH4_Enabled (1UL)
#define PPI_CHENCLR_CH4_Clear (1UL)

/* Bit 3 : Channel 3 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH3_Pos (3UL)
#define PPI_CHENCLR_CH3_Msk (0x1UL << PPI_CHENCLR_CH3_Pos)
#define PPI_CHENCLR_CH3_Disabled (0UL)
#define PPI_CHENCLR_CH3_Enabled (1UL)
#define PPI_CHENCLR_CH3_Clear (1UL)

/* Bit 2 : Channel 2 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH2_Pos (2UL)
#define PPI_CHENCLR_CH2_Msk (0x1UL << PPI_CHENCLR_CH2_Pos)
#define PPI_CHENCLR_CH2_Disabled (0UL)
#define PPI_CHENCLR_CH2_Enabled (1UL)
#define PPI_CHENCLR_CH2_Clear (1UL)

/* Bit 1 : Channel 1 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH1_Pos (1UL)
#define PPI_CHENCLR_CH1_Msk (0x1UL << PPI_CHENCLR_CH1_Pos)
#define PPI_CHENCLR_CH1_Disabled (0UL)
#define PPI_CHENCLR_CH1_Enabled (1UL)
#define PPI_CHENCLR_CH1_Clear (1UL)

/* Bit 0 : Channel 0 enable clear register.  Writing '0' has no effect. */
#define PPI_CHENCLR_CH0_Pos (0UL)
#define PPI_CHENCLR_CH0_Msk (0x1UL << PPI_CHENCLR_CH0_Pos)
#define PPI_CHENCLR_CH0_Disabled (0UL)
#define PPI_CHENCLR_CH0_Enabled (1UL)
#define PPI_CHENCLR_CH0_Clear (1UL)

/* Register: PPI_CH_EEP */
/* Description: Description cluster: Channel n event endpoint */

/* Bits 31..0 : Pointer to event register. Accepts only addresses to registers from the Event group. */
#define PPI_CH_EEP_EEP_Pos (0UL)
#define PPI_CH_EEP_EEP_Msk (0xFFFFFFFFUL << PPI_CH_EEP_EEP_Pos)

/* Register: PPI_CH_TEP */
/* Description: Description cluster: Channel n task endpoint */

/* Bits 31..0 : Pointer to task register. Accepts only addresses to registers from the Task group. */
#define PPI_CH_TEP_TEP_Pos (0UL)
#define PPI_CH_TEP_TEP_Msk (0xFFFFFFFFUL << PPI_CH_TEP_TEP_Pos)

/* Register: PPI_CHG */
/* Description: Description collection: Channel group n */

/* Bit 31 : Include or exclude channel 31 */
#define PPI_CHG_CH31_Pos (31UL)
#define PPI_CHG_CH31_Msk (0x1UL << PPI_CHG_CH31_Pos)
#define PPI_CHG_CH31_Excluded (0UL)
#define PPI_CHG_CH31_Included (1UL)

/* Bit 30 : Include or exclude channel 30 */
#define PPI_CHG_CH30_Pos (30UL)
#define PPI_CHG_CH30_Msk (0x1UL << PPI_CHG_CH30_Pos)
#define PPI_CHG_CH30_Excluded (0UL)
#define PPI_CHG_CH30_Included (1UL)

/* Bit 29 : Include or exclude channel 29 */
#define PPI_CHG_CH29_Pos (29UL)
#define PPI_CHG_CH29_Msk (0x1UL << PPI_CHG_CH29_Pos)
#define PPI_CHG_CH29_Excluded (0UL)
#define PPI_CHG_CH29_Included (1UL)

/* Bit 28 : Include or exclude channel 28 */
#define PPI_CHG_CH28_Pos (28UL)
#define PPI_CHG_CH28_Msk (0x1UL << PPI_CHG_CH28_Pos)
#define PPI_CHG_CH28_Excluded (0UL)
#define PPI_CHG_CH28_Included (1UL)

/* Bit 27 : Include or exclude channel 27 */
#define PPI_CHG_CH27_Pos (27UL)
#define PPI_CHG_CH27_Msk (0x1UL << PPI_CHG_CH27_Pos)
#define PPI_CHG_CH27_Excluded (0UL)
#define PPI_CHG_CH27_Included (1UL)

/* Bit 26 : Include or exclude channel 26 */
#define PPI_CHG_CH26_Pos (26UL)
#define PPI_CHG_CH26_Msk (0x1UL << PPI_CHG_CH26_Pos)
#define PPI_CHG_CH26_Excluded (0UL)
#define PPI_CHG_CH26_Included (1UL)

/* Bit 25 : Include or exclude channel 25 */
#define PPI_CHG_CH25_Pos (25UL)
#define PPI_CHG_CH25_Msk (0x1UL << PPI_CHG_CH25_Pos)
#define PPI_CHG_CH25_Excluded (0UL)
#define PPI_CHG_CH25_Included (1UL)

/* Bit 24 : Include or exclude channel 24 */
#define PPI_CHG_CH24_Pos (24UL)
#define PPI_CHG_CH24_Msk (0x1UL << PPI_CHG_CH24_Pos)
#define PPI_CHG_CH24_Excluded (0UL)
#define PPI_CHG_CH24_Included (1UL)

/* Bit 23 : Include or exclude channel 23 */
#define PPI_CHG_CH23_Pos (23UL)
#define PPI_CHG_CH23_Msk (0x1UL << PPI_CHG_CH23_Pos)
#define PPI_CHG_CH23_Excluded (0UL)
#define PPI_CHG_CH23_Included (1UL)

/* Bit 22 : Include or exclude channel 22 */
#define PPI_CHG_CH22_Pos (22UL)
#define PPI_CHG_CH22_Msk (0x1UL << PPI_CHG_CH22_Pos)
#define PPI_CHG_CH22_Excluded (0UL)
#define PPI_CHG_CH22_Included (1UL)

/* Bit 21 : Include or exclude channel 21 */
#define PPI_CHG_CH21_Pos (21UL)
#define PPI_CHG_CH21_Msk (0x1UL << PPI_CHG_CH21_Pos)
#define PPI_CHG_CH21_Excluded (0UL)
#define PPI_CHG_CH21_Included (1UL)

/* Bit 20 : Include or exclude channel 20 */
#define PPI_CHG_CH20_Pos (20UL)
#define PPI_CHG_CH20_Msk (0x1UL << PPI_CHG_CH20_Pos)
#define PPI_CHG_CH20_Excluded (0UL)
#define PPI_CHG_CH20_Included (1UL)

/* Bit 19 : Include or exclude channel 19 */
#define PPI_CHG_CH19_Pos (19UL)
#define PPI_CHG_CH19_Msk (0x1UL << PPI_CHG_CH19_Pos)
#define PPI_CHG_CH19_Excluded (0UL)
#define PPI_CHG_CH19_Included (1UL)

/* Bit 18 : Include or exclude channel 18 */
#define PPI_CHG_CH18_Pos (18UL)
#define PPI_CHG_CH18_Msk (0x1UL << PPI_CHG_CH18_Pos)
#define PPI_CHG_CH18_Excluded (0UL)
#define PPI_CHG_CH18_Included (1UL)

/* Bit 17 : Include or exclude channel 17 */
#define PPI_CHG_CH17_Pos (17UL)
#define PPI_CHG_CH17_Msk (0x1UL << PPI_CHG_CH17_Pos)
#define PPI_CHG_CH17_Excluded (0UL)
#define PPI_CHG_CH17_Included (1UL)

/* Bit 16 : Include or exclude channel 16 */
#define PPI_CHG_CH16_Pos (16UL)
#define PPI_CHG_CH16_Msk (0x1UL << PPI_CHG_CH16_Pos)
#define PPI_CHG_CH16_Excluded (0UL)
#define PPI_CHG_CH16_Included (1UL)

/* Bit 15 : Include or exclude channel 15 */
#define PPI_CHG_CH15_Pos (15UL)
#define PPI_CHG_CH15_Msk (0x1UL << PPI_CHG_CH15_Pos)
#define PPI_CHG_CH15_Excluded (0UL)
#define PPI_CHG_CH15_Included (1UL)

/* Bit 14 : Include or exclude channel 14 */
#define PPI_CHG_CH14_Pos (14UL)
#define PPI_CHG_CH14_Msk (0x1UL << PPI_CHG_CH14_Pos)
#define PPI_CHG_CH14_Excluded (0UL)
#define PPI_CHG_CH14_Included (1UL)

/* Bit 13 : Include or exclude channel 13 */
#define PPI_CHG_CH13_Pos (13UL)
#define PPI_CHG_CH13_Msk (0x1UL << PPI_CHG_CH13_Pos)
#define PPI_CHG_CH13_Excluded (0UL)
#define PPI_CHG_CH13_Included (1UL)

/* Bit 12 : Include or exclude channel 12 */
#define PPI_CHG_CH12_Pos (12UL)
#define PPI_CHG_CH12_Msk (0x1UL << PPI_CHG_CH12_Pos)
#define PPI_CHG_CH12_Excluded (0UL)
#define PPI_CHG_CH12_Included (1UL)

/* Bit 11 : Include or exclude channel 11 */
#define PPI_CHG_CH11_Pos (11UL)
#define PPI_CHG_CH11_Msk (0x1UL << PPI_CHG_CH11_Pos)
#define PPI_CHG_CH11_Excluded (0UL)
#define PPI_CHG_CH11_Included (1UL)

/* Bit 10 : Include or exclude channel 10 */
#define PPI_CHG_CH10_Pos (10UL)
#define PPI_CHG_CH10_Msk (0x1UL << PPI_CHG_CH10_Pos)
#define PPI_CHG_CH10_Excluded (0UL)
#define PPI_CHG_CH10_Included (1UL)

/* Bit 9 : Include or exclude channel 9 */
#define PPI_CHG_CH9_Pos (9UL)
#define PPI_CHG_CH9_Msk (0x1UL << PPI_CHG_CH9_Pos)
#define PPI_CHG_CH9_Excluded (0UL)
#define PPI_CHG_CH9_Included (1UL)

/* Bit 8 : Include or exclude channel 8 */
#define PPI_CHG_CH8_Pos (8UL)
#define PPI_CHG_CH8_Msk (0x1UL << PPI_CHG_CH8_Pos)
#define PPI_CHG_CH8_Excluded (0UL)
#define PPI_CHG_CH8_Included (1UL)

/* Bit 7 : Include or exclude channel 7 */
#define PPI_CHG_CH7_Pos (7UL)
#define PPI_CHG_CH7_Msk (0x1UL << PPI_CHG_CH7_Pos)
#define PPI_CHG_CH7_Excluded (0UL)
#define PPI_CHG_CH7_Included (1UL)

/* Bit 6 : Include or exclude channel 6 */
#define PPI_CHG_CH6_Pos (6UL)
#define PPI_CHG_CH6_Msk (0x1UL << PPI_CHG_CH6_Pos)
#define PPI_CHG_CH6_Excluded (0UL)
#define PPI_CHG_CH6_Included (1UL)

/* Bit 5 : Include or exclude channel 5 */
#define PPI_CHG_CH5_Pos (5UL)
#define PPI_CHG_CH5_Msk (0x1UL << PPI_CHG_CH5_Pos)
#define PPI_CHG_CH5_Excluded (0UL)
#define PPI_CHG_CH5_Included (1UL)

/* Bit 4 : Include or exclude channel 4 */
#define PPI_CHG_CH4_Pos (4UL)
#define PPI_CHG_CH4_Msk (0x1UL << PPI_CHG_CH4_Pos)
#define PPI_CHG_CH4_Excluded (0UL)
#define PPI_CHG_CH4_Included (1UL)

/* Bit 3 : Include or exclude channel 3 */
#define PPI_CHG_CH3_Pos (3UL)
#define PPI_CHG_CH3_Msk (0x1UL << PPI_CHG_CH3_Pos)
#define PPI_CHG_CH3_Excluded (0UL)
#define PPI_CHG_CH3_Included (1UL)

/* Bit 2 : Include or exclude channel 2 */
#define PPI_CHG_CH2_Pos (2UL)
#define PPI_CHG_CH2_Msk (0x1UL << PPI_CHG_CH2_Pos)
#define PPI_CHG_CH2_Excluded (0UL)
#define PPI_CHG_CH2_Included (1UL)

/* Bit 1 : Include or exclude channel 1 */
#define PPI_CHG_CH1_Pos (1UL)
#define PPI_CHG_CH1_Msk (0x1UL << PPI_CHG_CH1_Pos)
#define PPI_CHG_CH1_Excluded (0UL)
#define PPI_CHG_CH1_Included (1UL)

/* Bit 0 : Include or exclude channel 0 */
#define PPI_CHG_CH0_Pos (0UL)
#define PPI_CHG_CH0_Msk (0x1UL << PPI_CHG_CH0_Pos)
#define PPI_CHG_CH0_Excluded (0UL)
#define PPI_CHG_CH0_Included (1UL)

/* Register: PPI_FORK_TEP */
/* Description: Description cluster: Channel n task endpoint */

/* Bits 31..0 : Pointer to task register */
#define PPI_FORK_TEP_TEP_Pos (0UL)
#define PPI_FORK_TEP_TEP_Msk (0xFFFFFFFFUL << PPI_FORK_TEP_TEP_Pos)


/* Peripheral: PWM */
/* Description: Pulse width modulation unit 0 */

/* Register: PWM_TASKS_STOP */
/* Description: Stops PWM pulse generation on all channels at the end of current PWM period, and stops sequence playback */

/* Bit 0 : Stops PWM pulse generation on all channels at the end of current PWM period, and stops sequence playback */
#define PWM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define PWM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << PWM_TASKS_STOP_TASKS_STOP_Pos)
#define PWM_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: PWM_TASKS_SEQSTART */
/* Description: Description collection: Loads the first PWM value on all enabled channels from sequence n, and starts playing that sequence at the rate defined in SEQ[n]REFRESH and/or DECODER.MODE. Causes PWM generation to start if not running. */

/* Bit 0 : Loads the first PWM value on all enabled channels from sequence n, and starts playing that sequence at the rate defined in SEQ[n]REFRESH and/or DECODER.MODE. Causes PWM generation to start if not running. */
#define PWM_TASKS_SEQSTART_TASKS_SEQSTART_Pos (0UL)
#define PWM_TASKS_SEQSTART_TASKS_SEQSTART_Msk (0x1UL << PWM_TASKS_SEQSTART_TASKS_SEQSTART_Pos)
#define PWM_TASKS_SEQSTART_TASKS_SEQSTART_Trigger (1UL)

/* Register: PWM_TASKS_NEXTSTEP */
/* Description: Steps by one value in the current sequence on all enabled channels if DECODER.MODE=NextStep. Does not cause PWM generation to start if not running. */

/* Bit 0 : Steps by one value in the current sequence on all enabled channels if DECODER.MODE=NextStep. Does not cause PWM generation to start if not running. */
#define PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Pos (0UL)
#define PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Msk (0x1UL << PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Pos)
#define PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Trigger (1UL)

/* Register: PWM_EVENTS_STOPPED */
/* Description: Response to STOP task, emitted when PWM pulses are no longer generated */

/* Bit 0 : Response to STOP task, emitted when PWM pulses are no longer generated */
#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << PWM_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)

/* Register: PWM_EVENTS_SEQSTARTED */
/* Description: Description collection: First PWM period started on sequence n */

/* Bit 0 : First PWM period started on sequence n */
#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Pos (0UL)
#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Msk (0x1UL << PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Pos)
#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_NotGenerated (0UL)
#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Generated (1UL)

/* Register: PWM_EVENTS_SEQEND */
/* Description: Description collection: Emitted at end of every sequence n, when last value from RAM has been applied to wave counter */

/* Bit 0 : Emitted at end of every sequence n, when last value from RAM has been applied to wave counter */
#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_Pos (0UL)
#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_Msk (0x1UL << PWM_EVENTS_SEQEND_EVENTS_SEQEND_Pos)
#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_NotGenerated (0UL)
#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_Generated (1UL)

/* Register: PWM_EVENTS_PWMPERIODEND */
/* Description: Emitted at the end of each PWM period */

/* Bit 0 : Emitted at the end of each PWM period */
#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Pos (0UL)
#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Msk (0x1UL << PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Pos)
#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_NotGenerated (0UL)
#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Generated (1UL)

/* Register: PWM_EVENTS_LOOPSDONE */
/* Description: Concatenated sequences have been played the amount of times defined in LOOP.CNT */

/* Bit 0 : Concatenated sequences have been played the amount of times defined in LOOP.CNT */
#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Pos (0UL)
#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Msk (0x1UL << PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Pos)
#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_NotGenerated (0UL)
#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Generated (1UL)

/* Register: PWM_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 4 : Shortcut between event LOOPSDONE and task STOP */
#define PWM_SHORTS_LOOPSDONE_STOP_Pos (4UL)
#define PWM_SHORTS_LOOPSDONE_STOP_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_STOP_Pos)
#define PWM_SHORTS_LOOPSDONE_STOP_Disabled (0UL)
#define PWM_SHORTS_LOOPSDONE_STOP_Enabled (1UL)

/* Bit 3 : Shortcut between event LOOPSDONE and task SEQSTART[1] */
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Pos (3UL)
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_SEQSTART1_Pos)
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Disabled (0UL)
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Enabled (1UL)

/* Bit 2 : Shortcut between event LOOPSDONE and task SEQSTART[0] */
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Pos (2UL)
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_SEQSTART0_Pos)
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Disabled (0UL)
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Enabled (1UL)

/* Bit 1 : Shortcut between event SEQEND[1] and task STOP */
#define PWM_SHORTS_SEQEND1_STOP_Pos (1UL)
#define PWM_SHORTS_SEQEND1_STOP_Msk (0x1UL << PWM_SHORTS_SEQEND1_STOP_Pos)
#define PWM_SHORTS_SEQEND1_STOP_Disabled (0UL)
#define PWM_SHORTS_SEQEND1_STOP_Enabled (1UL)

/* Bit 0 : Shortcut between event SEQEND[0] and task STOP */
#define PWM_SHORTS_SEQEND0_STOP_Pos (0UL)
#define PWM_SHORTS_SEQEND0_STOP_Msk (0x1UL << PWM_SHORTS_SEQEND0_STOP_Pos)
#define PWM_SHORTS_SEQEND0_STOP_Disabled (0UL)
#define PWM_SHORTS_SEQEND0_STOP_Enabled (1UL)

/* Register: PWM_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 7 : Enable or disable interrupt for event LOOPSDONE */
#define PWM_INTEN_LOOPSDONE_Pos (7UL)
#define PWM_INTEN_LOOPSDONE_Msk (0x1UL << PWM_INTEN_LOOPSDONE_Pos)
#define PWM_INTEN_LOOPSDONE_Disabled (0UL)
#define PWM_INTEN_LOOPSDONE_Enabled (1UL)

/* Bit 6 : Enable or disable interrupt for event PWMPERIODEND */
#define PWM_INTEN_PWMPERIODEND_Pos (6UL)
#define PWM_INTEN_PWMPERIODEND_Msk (0x1UL << PWM_INTEN_PWMPERIODEND_Pos)
#define PWM_INTEN_PWMPERIODEND_Disabled (0UL)
#define PWM_INTEN_PWMPERIODEND_Enabled (1UL)

/* Bit 5 : Enable or disable interrupt for event SEQEND[1] */
#define PWM_INTEN_SEQEND1_Pos (5UL)
#define PWM_INTEN_SEQEND1_Msk (0x1UL << PWM_INTEN_SEQEND1_Pos)
#define PWM_INTEN_SEQEND1_Disabled (0UL)
#define PWM_INTEN_SEQEND1_Enabled (1UL)

/* Bit 4 : Enable or disable interrupt for event SEQEND[0] */
#define PWM_INTEN_SEQEND0_Pos (4UL)
#define PWM_INTEN_SEQEND0_Msk (0x1UL << PWM_INTEN_SEQEND0_Pos)
#define PWM_INTEN_SEQEND0_Disabled (0UL)
#define PWM_INTEN_SEQEND0_Enabled (1UL)

/* Bit 3 : Enable or disable interrupt for event SEQSTARTED[1] */
#define PWM_INTEN_SEQSTARTED1_Pos (3UL)
#define PWM_INTEN_SEQSTARTED1_Msk (0x1UL << PWM_INTEN_SEQSTARTED1_Pos)
#define PWM_INTEN_SEQSTARTED1_Disabled (0UL)
#define PWM_INTEN_SEQSTARTED1_Enabled (1UL)

/* Bit 2 : Enable or disable interrupt for event SEQSTARTED[0] */
#define PWM_INTEN_SEQSTARTED0_Pos (2UL)
#define PWM_INTEN_SEQSTARTED0_Msk (0x1UL << PWM_INTEN_SEQSTARTED0_Pos)
#define PWM_INTEN_SEQSTARTED0_Disabled (0UL)
#define PWM_INTEN_SEQSTARTED0_Enabled (1UL)

/* Bit 1 : Enable or disable interrupt for event STOPPED */
#define PWM_INTEN_STOPPED_Pos (1UL)
#define PWM_INTEN_STOPPED_Msk (0x1UL << PWM_INTEN_STOPPED_Pos)
#define PWM_INTEN_STOPPED_Disabled (0UL)
#define PWM_INTEN_STOPPED_Enabled (1UL)

/* Register: PWM_INTENSET */
/* Description: Enable interrupt */

/* Bit 7 : Write '1' to enable interrupt for event LOOPSDONE */
#define PWM_INTENSET_LOOPSDONE_Pos (7UL)
#define PWM_INTENSET_LOOPSDONE_Msk (0x1UL << PWM_INTENSET_LOOPSDONE_Pos)
#define PWM_INTENSET_LOOPSDONE_Disabled (0UL)
#define PWM_INTENSET_LOOPSDONE_Enabled (1UL)
#define PWM_INTENSET_LOOPSDONE_Set (1UL)

/* Bit 6 : Write '1' to enable interrupt for event PWMPERIODEND */
#define PWM_INTENSET_PWMPERIODEND_Pos (6UL)
#define PWM_INTENSET_PWMPERIODEND_Msk (0x1UL << PWM_INTENSET_PWMPERIODEND_Pos)
#define PWM_INTENSET_PWMPERIODEND_Disabled (0UL)
#define PWM_INTENSET_PWMPERIODEND_Enabled (1UL)
#define PWM_INTENSET_PWMPERIODEND_Set (1UL)

/* Bit 5 : Write '1' to enable interrupt for event SEQEND[1] */
#define PWM_INTENSET_SEQEND1_Pos (5UL)
#define PWM_INTENSET_SEQEND1_Msk (0x1UL << PWM_INTENSET_SEQEND1_Pos)
#define PWM_INTENSET_SEQEND1_Disabled (0UL)
#define PWM_INTENSET_SEQEND1_Enabled (1UL)
#define PWM_INTENSET_SEQEND1_Set (1UL)

/* Bit 4 : Write '1' to enable interrupt for event SEQEND[0] */
#define PWM_INTENSET_SEQEND0_Pos (4UL)
#define PWM_INTENSET_SEQEND0_Msk (0x1UL << PWM_INTENSET_SEQEND0_Pos)
#define PWM_INTENSET_SEQEND0_Disabled (0UL)
#define PWM_INTENSET_SEQEND0_Enabled (1UL)
#define PWM_INTENSET_SEQEND0_Set (1UL)

/* Bit 3 : Write '1' to enable interrupt for event SEQSTARTED[1] */
#define PWM_INTENSET_SEQSTARTED1_Pos (3UL)
#define PWM_INTENSET_SEQSTARTED1_Msk (0x1UL << PWM_INTENSET_SEQSTARTED1_Pos)
#define PWM_INTENSET_SEQSTARTED1_Disabled (0UL)
#define PWM_INTENSET_SEQSTARTED1_Enabled (1UL)
#define PWM_INTENSET_SEQSTARTED1_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event SEQSTARTED[0] */
#define PWM_INTENSET_SEQSTARTED0_Pos (2UL)
#define PWM_INTENSET_SEQSTARTED0_Msk (0x1UL << PWM_INTENSET_SEQSTARTED0_Pos)
#define PWM_INTENSET_SEQSTARTED0_Disabled (0UL)
#define PWM_INTENSET_SEQSTARTED0_Enabled (1UL)
#define PWM_INTENSET_SEQSTARTED0_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define PWM_INTENSET_STOPPED_Pos (1UL)
#define PWM_INTENSET_STOPPED_Msk (0x1UL << PWM_INTENSET_STOPPED_Pos)
#define PWM_INTENSET_STOPPED_Disabled (0UL)
#define PWM_INTENSET_STOPPED_Enabled (1UL)
#define PWM_INTENSET_STOPPED_Set (1UL)

/* Register: PWM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 7 : Write '1' to disable interrupt for event LOOPSDONE */
#define PWM_INTENCLR_LOOPSDONE_Pos (7UL)
#define PWM_INTENCLR_LOOPSDONE_Msk (0x1UL << PWM_INTENCLR_LOOPSDONE_Pos)
#define PWM_INTENCLR_LOOPSDONE_Disabled (0UL)
#define PWM_INTENCLR_LOOPSDONE_Enabled (1UL)
#define PWM_INTENCLR_LOOPSDONE_Clear (1UL)

/* Bit 6 : Write '1' to disable interrupt for event PWMPERIODEND */
#define PWM_INTENCLR_PWMPERIODEND_Pos (6UL)
#define PWM_INTENCLR_PWMPERIODEND_Msk (0x1UL << PWM_INTENCLR_PWMPERIODEND_Pos)
#define PWM_INTENCLR_PWMPERIODEND_Disabled (0UL)
#define PWM_INTENCLR_PWMPERIODEND_Enabled (1UL)
#define PWM_INTENCLR_PWMPERIODEND_Clear (1UL)

/* Bit 5 : Write '1' to disable interrupt for event SEQEND[1] */
#define PWM_INTENCLR_SEQEND1_Pos (5UL)
#define PWM_INTENCLR_SEQEND1_Msk (0x1UL << PWM_INTENCLR_SEQEND1_Pos)
#define PWM_INTENCLR_SEQEND1_Disabled (0UL)
#define PWM_INTENCLR_SEQEND1_Enabled (1UL)
#define PWM_INTENCLR_SEQEND1_Clear (1UL)

/* Bit 4 : Write '1' to disable interrupt for event SEQEND[0] */
#define PWM_INTENCLR_SEQEND0_Pos (4UL)
#define PWM_INTENCLR_SEQEND0_Msk (0x1UL << PWM_INTENCLR_SEQEND0_Pos)
#define PWM_INTENCLR_SEQEND0_Disabled (0UL)
#define PWM_INTENCLR_SEQEND0_Enabled (1UL)
#define PWM_INTENCLR_SEQEND0_Clear (1UL)

/* Bit 3 : Write '1' to disable interrupt for event SEQSTARTED[1] */
#define PWM_INTENCLR_SEQSTARTED1_Pos (3UL)
#define PWM_INTENCLR_SEQSTARTED1_Msk (0x1UL << PWM_INTENCLR_SEQSTARTED1_Pos)
#define PWM_INTENCLR_SEQSTARTED1_Disabled (0UL)
#define PWM_INTENCLR_SEQSTARTED1_Enabled (1UL)
#define PWM_INTENCLR_SEQSTARTED1_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event SEQSTARTED[0] */
#define PWM_INTENCLR_SEQSTARTED0_Pos (2UL)
#define PWM_INTENCLR_SEQSTARTED0_Msk (0x1UL << PWM_INTENCLR_SEQSTARTED0_Pos)
#define PWM_INTENCLR_SEQSTARTED0_Disabled (0UL)
#define PWM_INTENCLR_SEQSTARTED0_Enabled (1UL)
#define PWM_INTENCLR_SEQSTARTED0_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define PWM_INTENCLR_STOPPED_Pos (1UL)
#define PWM_INTENCLR_STOPPED_Msk (0x1UL << PWM_INTENCLR_STOPPED_Pos)
#define PWM_INTENCLR_STOPPED_Disabled (0UL)
#define PWM_INTENCLR_STOPPED_Enabled (1UL)
#define PWM_INTENCLR_STOPPED_Clear (1UL)

/* Register: PWM_ENABLE */
/* Description: PWM module enable register */

/* Bit 0 : Enable or disable PWM module */
#define PWM_ENABLE_ENABLE_Pos (0UL)
#define PWM_ENABLE_ENABLE_Msk (0x1UL << PWM_ENABLE_ENABLE_Pos)
#define PWM_ENABLE_ENABLE_Disabled (0UL)
#define PWM_ENABLE_ENABLE_Enabled (1UL)

/* Register: PWM_MODE */
/* Description: Selects operating mode of the wave counter */

/* Bit 0 : Selects up mode or up-and-down mode for the counter */
#define PWM_MODE_UPDOWN_Pos (0UL)
#define PWM_MODE_UPDOWN_Msk (0x1UL << PWM_MODE_UPDOWN_Pos)
#define PWM_MODE_UPDOWN_Up (0UL)
#define PWM_MODE_UPDOWN_UpAndDown (1UL)

/* Register: PWM_COUNTERTOP */
/* Description: Value up to which the pulse generator counter counts */

/* Bits 14..0 : Value up to which the pulse generator counter counts. This register is ignored when DECODER.MODE=WaveForm and only values from RAM are used. */
#define PWM_COUNTERTOP_COUNTERTOP_Pos (0UL)
#define PWM_COUNTERTOP_COUNTERTOP_Msk (0x7FFFUL << PWM_COUNTERTOP_COUNTERTOP_Pos)

/* Register: PWM_PRESCALER */
/* Description: Configuration for PWM_CLK */

/* Bits 2..0 : Prescaler of PWM_CLK */
#define PWM_PRESCALER_PRESCALER_Pos (0UL)
#define PWM_PRESCALER_PRESCALER_Msk (0x7UL << PWM_PRESCALER_PRESCALER_Pos)
#define PWM_PRESCALER_PRESCALER_DIV_1 (0UL)
#define PWM_PRESCALER_PRESCALER_DIV_2 (1UL)
#define PWM_PRESCALER_PRESCALER_DIV_4 (2UL)
#define PWM_PRESCALER_PRESCALER_DIV_8 (3UL)
#define PWM_PRESCALER_PRESCALER_DIV_16 (4UL)
#define PWM_PRESCALER_PRESCALER_DIV_32 (5UL)
#define PWM_PRESCALER_PRESCALER_DIV_64 (6UL)
#define PWM_PRESCALER_PRESCALER_DIV_128 (7UL)

/* Register: PWM_DECODER */
/* Description: Configuration of the decoder */

/* Bit 8 : Selects source for advancing the active sequence */
#define PWM_DECODER_MODE_Pos (8UL)
#define PWM_DECODER_MODE_Msk (0x1UL << PWM_DECODER_MODE_Pos)
#define PWM_DECODER_MODE_RefreshCount (0UL)
#define PWM_DECODER_MODE_NextStep (1UL)

/* Bits 1..0 : How a sequence is read from RAM and spread to the compare register */
#define PWM_DECODER_LOAD_Pos (0UL)
#define PWM_DECODER_LOAD_Msk (0x3UL << PWM_DECODER_LOAD_Pos)
#define PWM_DECODER_LOAD_Common (0UL)
#define PWM_DECODER_LOAD_Grouped (1UL)
#define PWM_DECODER_LOAD_Individual (2UL)
#define PWM_DECODER_LOAD_WaveForm (3UL)

/* Register: PWM_LOOP */
/* Description: Number of playbacks of a loop */

/* Bits 15..0 : Number of playbacks of pattern cycles */
#define PWM_LOOP_CNT_Pos (0UL)
#define PWM_LOOP_CNT_Msk (0xFFFFUL << PWM_LOOP_CNT_Pos)
#define PWM_LOOP_CNT_Disabled (0UL)

/* Register: PWM_SEQ_PTR */
/* Description: Description cluster: Beginning address in RAM of this sequence */

/* Bits 31..0 : Beginning address in RAM of this sequence */
#define PWM_SEQ_PTR_PTR_Pos (0UL)
#define PWM_SEQ_PTR_PTR_Msk (0xFFFFFFFFUL << PWM_SEQ_PTR_PTR_Pos)

/* Register: PWM_SEQ_CNT */
/* Description: Description cluster: Number of values (duty cycles) in this sequence */

/* Bits 14..0 : Number of values (duty cycles) in this sequence */
#define PWM_SEQ_CNT_CNT_Pos (0UL)
#define PWM_SEQ_CNT_CNT_Msk (0x7FFFUL << PWM_SEQ_CNT_CNT_Pos)
#define PWM_SEQ_CNT_CNT_Disabled (0UL)

/* Register: PWM_SEQ_REFRESH */
/* Description: Description cluster: Number of additional PWM periods between samples loaded into compare register */

/* Bits 23..0 : Number of additional PWM periods between samples loaded into compare register (load every REFRESH.CNT+1 PWM periods) */
#define PWM_SEQ_REFRESH_CNT_Pos (0UL)
#define PWM_SEQ_REFRESH_CNT_Msk (0xFFFFFFUL << PWM_SEQ_REFRESH_CNT_Pos)
#define PWM_SEQ_REFRESH_CNT_Continuous (0UL)

/* Register: PWM_SEQ_ENDDELAY */
/* Description: Description cluster: Time added after the sequence */

/* Bits 23..0 : Time added after the sequence in PWM periods */
#define PWM_SEQ_ENDDELAY_CNT_Pos (0UL)
#define PWM_SEQ_ENDDELAY_CNT_Msk (0xFFFFFFUL << PWM_SEQ_ENDDELAY_CNT_Pos)

/* Register: PWM_PSEL_OUT */
/* Description: Description collection: Output pin select for PWM channel n */

/* Bit 31 : Connection */
#define PWM_PSEL_OUT_CONNECT_Pos (31UL)
#define PWM_PSEL_OUT_CONNECT_Msk (0x1UL << PWM_PSEL_OUT_CONNECT_Pos)
#define PWM_PSEL_OUT_CONNECT_Connected (0UL)
#define PWM_PSEL_OUT_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define PWM_PSEL_OUT_PORT_Pos (5UL)
#define PWM_PSEL_OUT_PORT_Msk (0x1UL << PWM_PSEL_OUT_PORT_Pos)

/* Bits 4..0 : Pin number */
#define PWM_PSEL_OUT_PIN_Pos (0UL)
#define PWM_PSEL_OUT_PIN_Msk (0x1FUL << PWM_PSEL_OUT_PIN_Pos)


/* Peripheral: QDEC */
/* Description: Quadrature Decoder */

/* Register: QDEC_TASKS_START */
/* Description: Task starting the quadrature decoder */

/* Bit 0 : Task starting the quadrature decoder */
#define QDEC_TASKS_START_TASKS_START_Pos (0UL)
#define QDEC_TASKS_START_TASKS_START_Msk (0x1UL << QDEC_TASKS_START_TASKS_START_Pos)
#define QDEC_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: QDEC_TASKS_STOP */
/* Description: Task stopping the quadrature decoder */

/* Bit 0 : Task stopping the quadrature decoder */
#define QDEC_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define QDEC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << QDEC_TASKS_STOP_TASKS_STOP_Pos)
#define QDEC_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: QDEC_TASKS_READCLRACC */
/* Description: Read and clear ACC and ACCDBL */

/* Bit 0 : Read and clear ACC and ACCDBL */
#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Pos (0UL)
#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Msk (0x1UL << QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Pos)
#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Trigger (1UL)

/* Register: QDEC_TASKS_RDCLRACC */
/* Description: Read and clear ACC */

/* Bit 0 : Read and clear ACC */
#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Pos (0UL)
#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Msk (0x1UL << QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Pos)
#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Trigger (1UL)

/* Register: QDEC_TASKS_RDCLRDBL */
/* Description: Read and clear ACCDBL */

/* Bit 0 : Read and clear ACCDBL */
#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Pos (0UL)
#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Msk (0x1UL << QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Pos)
#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Trigger (1UL)

/* Register: QDEC_EVENTS_SAMPLERDY */
/* Description: Event being generated for every new sample value written to the SAMPLE register */

/* Bit 0 : Event being generated for every new sample value written to the SAMPLE register */
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Pos (0UL)
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Msk (0x1UL << QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Pos)
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_NotGenerated (0UL)
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Generated (1UL)

/* Register: QDEC_EVENTS_REPORTRDY */
/* Description: Non-null report ready */

/* Bit 0 : Non-null report ready */
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Pos (0UL)
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Msk (0x1UL << QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Pos)
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_NotGenerated (0UL)
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Generated (1UL)

/* Register: QDEC_EVENTS_ACCOF */
/* Description: ACC or ACCDBL register overflow */

/* Bit 0 : ACC or ACCDBL register overflow */
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Pos (0UL)
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Msk (0x1UL << QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Pos)
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_NotGenerated (0UL)
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Generated (1UL)

/* Register: QDEC_EVENTS_DBLRDY */
/* Description: Double displacement(s) detected */

/* Bit 0 : Double displacement(s) detected */
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Pos (0UL)
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Msk (0x1UL << QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Pos)
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_NotGenerated (0UL)
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Generated (1UL)

/* Register: QDEC_EVENTS_STOPPED */
/* Description: QDEC has been stopped */

/* Bit 0 : QDEC has been stopped */
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)

/* Register: QDEC_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 6 : Shortcut between event SAMPLERDY and task READCLRACC */
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Pos (6UL)
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Msk (0x1UL << QDEC_SHORTS_SAMPLERDY_READCLRACC_Pos)
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Disabled (0UL)
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Enabled (1UL)

/* Bit 5 : Shortcut between event DBLRDY and task STOP */
#define QDEC_SHORTS_DBLRDY_STOP_Pos (5UL)
#define QDEC_SHORTS_DBLRDY_STOP_Msk (0x1UL << QDEC_SHORTS_DBLRDY_STOP_Pos)
#define QDEC_SHORTS_DBLRDY_STOP_Disabled (0UL)
#define QDEC_SHORTS_DBLRDY_STOP_Enabled (1UL)

/* Bit 4 : Shortcut between event DBLRDY and task RDCLRDBL */
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Pos (4UL)
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Msk (0x1UL << QDEC_SHORTS_DBLRDY_RDCLRDBL_Pos)
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Disabled (0UL)
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Enabled (1UL)

/* Bit 3 : Shortcut between event REPORTRDY and task STOP */
#define QDEC_SHORTS_REPORTRDY_STOP_Pos (3UL)
#define QDEC_SHORTS_REPORTRDY_STOP_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_STOP_Pos)
#define QDEC_SHORTS_REPORTRDY_STOP_Disabled (0UL)
#define QDEC_SHORTS_REPORTRDY_STOP_Enabled (1UL)

/* Bit 2 : Shortcut between event REPORTRDY and task RDCLRACC */
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Pos (2UL)
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_RDCLRACC_Pos)
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Disabled (0UL)
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Enabled (1UL)

/* Bit 1 : Shortcut between event SAMPLERDY and task STOP */
#define QDEC_SHORTS_SAMPLERDY_STOP_Pos (1UL)
#define QDEC_SHORTS_SAMPLERDY_STOP_Msk (0x1UL << QDEC_SHORTS_SAMPLERDY_STOP_Pos)
#define QDEC_SHORTS_SAMPLERDY_STOP_Disabled (0UL)
#define QDEC_SHORTS_SAMPLERDY_STOP_Enabled (1UL)

/* Bit 0 : Shortcut between event REPORTRDY and task READCLRACC */
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Pos (0UL)
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_READCLRACC_Pos)
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Disabled (0UL)
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Enabled (1UL)

/* Register: QDEC_INTENSET */
/* Description: Enable interrupt */

/* Bit 4 : Write '1' to enable interrupt for event STOPPED */
#define QDEC_INTENSET_STOPPED_Pos (4UL)
#define QDEC_INTENSET_STOPPED_Msk (0x1UL << QDEC_INTENSET_STOPPED_Pos)
#define QDEC_INTENSET_STOPPED_Disabled (0UL)
#define QDEC_INTENSET_STOPPED_Enabled (1UL)
#define QDEC_INTENSET_STOPPED_Set (1UL)

/* Bit 3 : Write '1' to enable interrupt for event DBLRDY */
#define QDEC_INTENSET_DBLRDY_Pos (3UL)
#define QDEC_INTENSET_DBLRDY_Msk (0x1UL << QDEC_INTENSET_DBLRDY_Pos)
#define QDEC_INTENSET_DBLRDY_Disabled (0UL)
#define QDEC_INTENSET_DBLRDY_Enabled (1UL)
#define QDEC_INTENSET_DBLRDY_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event ACCOF */
#define QDEC_INTENSET_ACCOF_Pos (2UL)
#define QDEC_INTENSET_ACCOF_Msk (0x1UL << QDEC_INTENSET_ACCOF_Pos)
#define QDEC_INTENSET_ACCOF_Disabled (0UL)
#define QDEC_INTENSET_ACCOF_Enabled (1UL)
#define QDEC_INTENSET_ACCOF_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event REPORTRDY */
#define QDEC_INTENSET_REPORTRDY_Pos (1UL)
#define QDEC_INTENSET_REPORTRDY_Msk (0x1UL << QDEC_INTENSET_REPORTRDY_Pos)
#define QDEC_INTENSET_REPORTRDY_Disabled (0UL)
#define QDEC_INTENSET_REPORTRDY_Enabled (1UL)
#define QDEC_INTENSET_REPORTRDY_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event SAMPLERDY */
#define QDEC_INTENSET_SAMPLERDY_Pos (0UL)
#define QDEC_INTENSET_SAMPLERDY_Msk (0x1UL << QDEC_INTENSET_SAMPLERDY_Pos)
#define QDEC_INTENSET_SAMPLERDY_Disabled (0UL)
#define QDEC_INTENSET_SAMPLERDY_Enabled (1UL)
#define QDEC_INTENSET_SAMPLERDY_Set (1UL)

/* Register: QDEC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 4 : Write '1' to disable interrupt for event STOPPED */
#define QDEC_INTENCLR_STOPPED_Pos (4UL)
#define QDEC_INTENCLR_STOPPED_Msk (0x1UL << QDEC_INTENCLR_STOPPED_Pos)
#define QDEC_INTENCLR_STOPPED_Disabled (0UL)
#define QDEC_INTENCLR_STOPPED_Enabled (1UL)
#define QDEC_INTENCLR_STOPPED_Clear (1UL)

/* Bit 3 : Write '1' to disable interrupt for event DBLRDY */
#define QDEC_INTENCLR_DBLRDY_Pos (3UL)
#define QDEC_INTENCLR_DBLRDY_Msk (0x1UL << QDEC_INTENCLR_DBLRDY_Pos)
#define QDEC_INTENCLR_DBLRDY_Disabled (0UL)
#define QDEC_INTENCLR_DBLRDY_Enabled (1UL)
#define QDEC_INTENCLR_DBLRDY_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event ACCOF */
#define QDEC_INTENCLR_ACCOF_Pos (2UL)
#define QDEC_INTENCLR_ACCOF_Msk (0x1UL << QDEC_INTENCLR_ACCOF_Pos)
#define QDEC_INTENCLR_ACCOF_Disabled (0UL)
#define QDEC_INTENCLR_ACCOF_Enabled (1UL)
#define QDEC_INTENCLR_ACCOF_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event REPORTRDY */
#define QDEC_INTENCLR_REPORTRDY_Pos (1UL)
#define QDEC_INTENCLR_REPORTRDY_Msk (0x1UL << QDEC_INTENCLR_REPORTRDY_Pos)
#define QDEC_INTENCLR_REPORTRDY_Disabled (0UL)
#define QDEC_INTENCLR_REPORTRDY_Enabled (1UL)
#define QDEC_INTENCLR_REPORTRDY_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event SAMPLERDY */
#define QDEC_INTENCLR_SAMPLERDY_Pos (0UL)
#define QDEC_INTENCLR_SAMPLERDY_Msk (0x1UL << QDEC_INTENCLR_SAMPLERDY_Pos)
#define QDEC_INTENCLR_SAMPLERDY_Disabled (0UL)
#define QDEC_INTENCLR_SAMPLERDY_Enabled (1UL)
#define QDEC_INTENCLR_SAMPLERDY_Clear (1UL)

/* Register: QDEC_ENABLE */
/* Description: Enable the quadrature decoder */

/* Bit 0 : Enable or disable the quadrature decoder */
#define QDEC_ENABLE_ENABLE_Pos (0UL)
#define QDEC_ENABLE_ENABLE_Msk (0x1UL << QDEC_ENABLE_ENABLE_Pos)
#define QDEC_ENABLE_ENABLE_Disabled (0UL)
#define QDEC_ENABLE_ENABLE_Enabled (1UL)

/* Register: QDEC_LEDPOL */
/* Description: LED output pin polarity */

/* Bit 0 : LED output pin polarity */
#define QDEC_LEDPOL_LEDPOL_Pos (0UL)
#define QDEC_LEDPOL_LEDPOL_Msk (0x1UL << QDEC_LEDPOL_LEDPOL_Pos)
#define QDEC_LEDPOL_LEDPOL_ActiveLow (0UL)
#define QDEC_LEDPOL_LEDPOL_ActiveHigh (1UL)

/* Register: QDEC_SAMPLEPER */
/* Description: Sample period */

/* Bits 3..0 : Sample period. The SAMPLE register will be updated for every new sample */
#define QDEC_SAMPLEPER_SAMPLEPER_Pos (0UL)
#define QDEC_SAMPLEPER_SAMPLEPER_Msk (0xFUL << QDEC_SAMPLEPER_SAMPLEPER_Pos)
#define QDEC_SAMPLEPER_SAMPLEPER_128us (0UL)
#define QDEC_SAMPLEPER_SAMPLEPER_256us (1UL)
#define QDEC_SAMPLEPER_SAMPLEPER_512us (2UL)
#define QDEC_SAMPLEPER_SAMPLEPER_1024us (3UL)
#define QDEC_SAMPLEPER_SAMPLEPER_2048us (4UL)
#define QDEC_SAMPLEPER_SAMPLEPER_4096us (5UL)
#define QDEC_SAMPLEPER_SAMPLEPER_8192us (6UL)
#define QDEC_SAMPLEPER_SAMPLEPER_16384us (7UL)
#define QDEC_SAMPLEPER_SAMPLEPER_32ms (8UL)
#define QDEC_SAMPLEPER_SAMPLEPER_65ms (9UL)
#define QDEC_SAMPLEPER_SAMPLEPER_131ms (10UL)

/* Register: QDEC_SAMPLE */
/* Description: Motion sample value */

/* Bits 31..0 : Last motion sample */
#define QDEC_SAMPLE_SAMPLE_Pos (0UL)
#define QDEC_SAMPLE_SAMPLE_Msk (0xFFFFFFFFUL << QDEC_SAMPLE_SAMPLE_Pos)

/* Register: QDEC_REPORTPER */
/* Description: Number of samples to be taken before REPORTRDY and DBLRDY events can be generated */

/* Bits 3..0 : Specifies the number of samples to be accumulated in the ACC register before the REPORTRDY and DBLRDY events can be generated. */
#define QDEC_REPORTPER_REPORTPER_Pos (0UL)
#define QDEC_REPORTPER_REPORTPER_Msk (0xFUL << QDEC_REPORTPER_REPORTPER_Pos)
#define QDEC_REPORTPER_REPORTPER_10Smpl (0UL)
#define QDEC_REPORTPER_REPORTPER_40Smpl (1UL)
#define QDEC_REPORTPER_REPORTPER_80Smpl (2UL)
#define QDEC_REPORTPER_REPORTPER_120Smpl (3UL)
#define QDEC_REPORTPER_REPORTPER_160Smpl (4UL)
#define QDEC_REPORTPER_REPORTPER_200Smpl (5UL)
#define QDEC_REPORTPER_REPORTPER_240Smpl (6UL)
#define QDEC_REPORTPER_REPORTPER_280Smpl (7UL)
#define QDEC_REPORTPER_REPORTPER_1Smpl (8UL)

/* Register: QDEC_ACC */
/* Description: Register accumulating the valid transitions */

/* Bits 31..0 : Register accumulating all valid samples (not double transition) read from the SAMPLE register. */
#define QDEC_ACC_ACC_Pos (0UL)
#define QDEC_ACC_ACC_Msk (0xFFFFFFFFUL << QDEC_ACC_ACC_Pos)

/* Register: QDEC_ACCREAD */
/* Description: Snapshot of the ACC register, updated by the READCLRACC or RDCLRACC task */

/* Bits 31..0 : Snapshot of the ACC register. */
#define QDEC_ACCREAD_ACCREAD_Pos (0UL)
#define QDEC_ACCREAD_ACCREAD_Msk (0xFFFFFFFFUL << QDEC_ACCREAD_ACCREAD_Pos)

/* Register: QDEC_PSEL_LED */
/* Description: Pin select for LED signal */

/* Bit 31 : Connection */
#define QDEC_PSEL_LED_CONNECT_Pos (31UL)
#define QDEC_PSEL_LED_CONNECT_Msk (0x1UL << QDEC_PSEL_LED_CONNECT_Pos)
#define QDEC_PSEL_LED_CONNECT_Connected (0UL)
#define QDEC_PSEL_LED_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define QDEC_PSEL_LED_PORT_Pos (5UL)
#define QDEC_PSEL_LED_PORT_Msk (0x1UL << QDEC_PSEL_LED_PORT_Pos)

/* Bits 4..0 : Pin number */
#define QDEC_PSEL_LED_PIN_Pos (0UL)
#define QDEC_PSEL_LED_PIN_Msk (0x1FUL << QDEC_PSEL_LED_PIN_Pos)

/* Register: QDEC_PSEL_A */
/* Description: Pin select for A signal */

/* Bit 31 : Connection */
#define QDEC_PSEL_A_CONNECT_Pos (31UL)
#define QDEC_PSEL_A_CONNECT_Msk (0x1UL << QDEC_PSEL_A_CONNECT_Pos)
#define QDEC_PSEL_A_CONNECT_Connected (0UL)
#define QDEC_PSEL_A_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define QDEC_PSEL_A_PORT_Pos (5UL)
#define QDEC_PSEL_A_PORT_Msk (0x1UL << QDEC_PSEL_A_PORT_Pos)

/* Bits 4..0 : Pin number */
#define QDEC_PSEL_A_PIN_Pos (0UL)
#define QDEC_PSEL_A_PIN_Msk (0x1FUL << QDEC_PSEL_A_PIN_Pos)

/* Register: QDEC_PSEL_B */
/* Description: Pin select for B signal */

/* Bit 31 : Connection */
#define QDEC_PSEL_B_CONNECT_Pos (31UL)
#define QDEC_PSEL_B_CONNECT_Msk (0x1UL << QDEC_PSEL_B_CONNECT_Pos)
#define QDEC_PSEL_B_CONNECT_Connected (0UL)
#define QDEC_PSEL_B_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define QDEC_PSEL_B_PORT_Pos (5UL)
#define QDEC_PSEL_B_PORT_Msk (0x1UL << QDEC_PSEL_B_PORT_Pos)

/* Bits 4..0 : Pin number */
#define QDEC_PSEL_B_PIN_Pos (0UL)
#define QDEC_PSEL_B_PIN_Msk (0x1FUL << QDEC_PSEL_B_PIN_Pos)

/* Register: QDEC_DBFEN */
/* Description: Enable input debounce filters */

/* Bit 0 : Enable input debounce filters */
#define QDEC_DBFEN_DBFEN_Pos (0UL)
#define QDEC_DBFEN_DBFEN_Msk (0x1UL << QDEC_DBFEN_DBFEN_Pos)
#define QDEC_DBFEN_DBFEN_Disabled (0UL)
#define QDEC_DBFEN_DBFEN_Enabled (1UL)

/* Register: QDEC_LEDPRE */
/* Description: Time period the LED is switched ON prior to sampling */

/* Bits 8..0 : Period in us the LED is switched on prior to sampling */
#define QDEC_LEDPRE_LEDPRE_Pos (0UL)
#define QDEC_LEDPRE_LEDPRE_Msk (0x1FFUL << QDEC_LEDPRE_LEDPRE_Pos)

/* Register: QDEC_ACCDBL */
/* Description: Register accumulating the number of detected double transitions */

/* Bits 3..0 : Register accumulating the number of detected double or illegal transitions. ( SAMPLE = 2 ). */
#define QDEC_ACCDBL_ACCDBL_Pos (0UL)
#define QDEC_ACCDBL_ACCDBL_Msk (0xFUL << QDEC_ACCDBL_ACCDBL_Pos)

/* Register: QDEC_ACCDBLREAD */
/* Description: Snapshot of the ACCDBL, updated by the READCLRACC or RDCLRDBL task */

/* Bits 3..0 : Snapshot of the ACCDBL register. This field is updated when the READCLRACC or RDCLRDBL task is triggered. */
#define QDEC_ACCDBLREAD_ACCDBLREAD_Pos (0UL)
#define QDEC_ACCDBLREAD_ACCDBLREAD_Msk (0xFUL << QDEC_ACCDBLREAD_ACCDBLREAD_Pos)


/* Peripheral: RADIO */
/* Description: 2.4 GHz radio */

/* Register: RADIO_TASKS_TXEN */
/* Description: Enable RADIO in TX mode */

/* Bit 0 : Enable RADIO in TX mode */
#define RADIO_TASKS_TXEN_TASKS_TXEN_Pos (0UL)
#define RADIO_TASKS_TXEN_TASKS_TXEN_Msk (0x1UL << RADIO_TASKS_TXEN_TASKS_TXEN_Pos)
#define RADIO_TASKS_TXEN_TASKS_TXEN_Trigger (1UL)

/* Register: RADIO_TASKS_RXEN */
/* Description: Enable RADIO in RX mode */

/* Bit 0 : Enable RADIO in RX mode */
#define RADIO_TASKS_RXEN_TASKS_RXEN_Pos (0UL)
#define RADIO_TASKS_RXEN_TASKS_RXEN_Msk (0x1UL << RADIO_TASKS_RXEN_TASKS_RXEN_Pos)
#define RADIO_TASKS_RXEN_TASKS_RXEN_Trigger (1UL)

/* Register: RADIO_TASKS_START */
/* Description: Start RADIO */

/* Bit 0 : Start RADIO */
#define RADIO_TASKS_START_TASKS_START_Pos (0UL)
#define RADIO_TASKS_START_TASKS_START_Msk (0x1UL << RADIO_TASKS_START_TASKS_START_Pos)
#define RADIO_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: RADIO_TASKS_STOP */
/* Description: Stop RADIO */

/* Bit 0 : Stop RADIO */
#define RADIO_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define RADIO_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RADIO_TASKS_STOP_TASKS_STOP_Pos)
#define RADIO_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: RADIO_TASKS_DISABLE */
/* Description: Disable RADIO */

/* Bit 0 : Disable RADIO */
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos (0UL)
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Msk (0x1UL << RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos)
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Trigger (1UL)

/* Register: RADIO_TASKS_RSSISTART */
/* Description: Start the RSSI and take one single sample of the receive signal strength */

/* Bit 0 : Start the RSSI and take one single sample of the receive signal strength */
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos (0UL)
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Msk (0x1UL << RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos)
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Trigger (1UL)

/* Register: RADIO_TASKS_RSSISTOP */
/* Description: Stop the RSSI measurement */

/* Bit 0 : Stop the RSSI measurement */
#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Pos (0UL)
#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Msk (0x1UL << RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Pos)
#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Trigger (1UL)

/* Register: RADIO_TASKS_BCSTART */
/* Description: Start the bit counter */

/* Bit 0 : Start the bit counter */
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos (0UL)
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Msk (0x1UL << RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos)
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Trigger (1UL)

/* Register: RADIO_TASKS_BCSTOP */
/* Description: Stop the bit counter */

/* Bit 0 : Stop the bit counter */
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos (0UL)
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Msk (0x1UL << RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos)
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Trigger (1UL)

/* Register: RADIO_TASKS_EDSTART */
/* Description: Start the energy detect measurement used in IEEE 802.15.4 mode */

/* Bit 0 : Start the energy detect measurement used in IEEE 802.15.4 mode */
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Pos (0UL)
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Msk (0x1UL << RADIO_TASKS_EDSTART_TASKS_EDSTART_Pos)
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Trigger (1UL)

/* Register: RADIO_TASKS_EDSTOP */
/* Description: Stop the energy detect measurement */

/* Bit 0 : Stop the energy detect measurement */
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Pos (0UL)
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Msk (0x1UL << RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Pos)
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Trigger (1UL)

/* Register: RADIO_TASKS_CCASTART */
/* Description: Start the clear channel assessment used in IEEE 802.15.4 mode */

/* Bit 0 : Start the clear channel assessment used in IEEE 802.15.4 mode */
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Pos (0UL)
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Msk (0x1UL << RADIO_TASKS_CCASTART_TASKS_CCASTART_Pos)
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Trigger (1UL)

/* Register: RADIO_TASKS_CCASTOP */
/* Description: Stop the clear channel assessment */

/* Bit 0 : Stop the clear channel assessment */
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Pos (0UL)
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Msk (0x1UL << RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Pos)
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Trigger (1UL)

/* Register: RADIO_EVENTS_READY */
/* Description: RADIO has ramped up and is ready to be started */

/* Bit 0 : RADIO has ramped up and is ready to be started */
#define RADIO_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define RADIO_EVENTS_READY_EVENTS_READY_Msk (0x1UL << RADIO_EVENTS_READY_EVENTS_READY_Pos)
#define RADIO_EVENTS_READY_EVENTS_READY_NotGenerated (0UL)
#define RADIO_EVENTS_READY_EVENTS_READY_Generated (1UL)

/* Register: RADIO_EVENTS_ADDRESS */
/* Description: Address sent or received */

/* Bit 0 : Address sent or received */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos (0UL)
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Msk (0x1UL << RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos)
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_NotGenerated (0UL)
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Generated (1UL)

/* Register: RADIO_EVENTS_PAYLOAD */
/* Description: Packet payload sent or received */

/* Bit 0 : Packet payload sent or received */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos (0UL)
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Msk (0x1UL << RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos)
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_NotGenerated (0UL)
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Generated (1UL)

/* Register: RADIO_EVENTS_END */
/* Description: Packet sent or received */

/* Bit 0 : Packet sent or received */
#define RADIO_EVENTS_END_EVENTS_END_Pos (0UL)
#define RADIO_EVENTS_END_EVENTS_END_Msk (0x1UL << RADIO_EVENTS_END_EVENTS_END_Pos)
#define RADIO_EVENTS_END_EVENTS_END_NotGenerated (0UL)
#define RADIO_EVENTS_END_EVENTS_END_Generated (1UL)

/* Register: RADIO_EVENTS_DISABLED */
/* Description: RADIO has been disabled */

/* Bit 0 : RADIO has been disabled */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos (0UL)
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Msk (0x1UL << RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos)
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_NotGenerated (0UL)
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Generated (1UL)

/* Register: RADIO_EVENTS_DEVMATCH */
/* Description: A device address match occurred on the last received packet */

/* Bit 0 : A device address match occurred on the last received packet */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos (0UL)
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Msk (0x1UL << RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos)
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_NotGenerated (0UL)
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Generated (1UL)

/* Register: RADIO_EVENTS_DEVMISS */
/* Description: No device address match occurred on the last received packet */

/* Bit 0 : No device address match occurred on the last received packet */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos (0UL)
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Msk (0x1UL << RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos)
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_NotGenerated (0UL)
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Generated (1UL)

/* Register: RADIO_EVENTS_RSSIEND */
/* Description: Sampling of receive signal strength complete */

/* Bit 0 : Sampling of receive signal strength complete */
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Pos (0UL)
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Msk (0x1UL << RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Pos)
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_NotGenerated (0UL)
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Generated (1UL)

/* Register: RADIO_EVENTS_BCMATCH */
/* Description: Bit counter reached bit count value */

/* Bit 0 : Bit counter reached bit count value */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos (0UL)
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Msk (0x1UL << RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos)
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_NotGenerated (0UL)
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Generated (1UL)

/* Register: RADIO_EVENTS_CRCOK */
/* Description: Packet received with CRC ok */

/* Bit 0 : Packet received with CRC ok */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos (0UL)
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Msk (0x1UL << RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos)
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_NotGenerated (0UL)
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Generated (1UL)

/* Register: RADIO_EVENTS_CRCERROR */
/* Description: Packet received with CRC error */

/* Bit 0 : Packet received with CRC error */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos (0UL)
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Msk (0x1UL << RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos)
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_NotGenerated (0UL)
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Generated (1UL)

/* Register: RADIO_EVENTS_FRAMESTART */
/* Description: IEEE 802.15.4 length field received */

/* Bit 0 : IEEE 802.15.4 length field received */
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Pos (0UL)
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Msk (0x1UL << RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Pos)
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_NotGenerated (0UL)
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Generated (1UL)

/* Register: RADIO_EVENTS_EDEND */
/* Description: Sampling of energy detection complete. A new ED sample is ready for readout from the RADIO.EDSAMPLE register. */

/* Bit 0 : Sampling of energy detection complete. A new ED sample is ready for readout from the RADIO.EDSAMPLE register. */
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Pos (0UL)
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Msk (0x1UL << RADIO_EVENTS_EDEND_EVENTS_EDEND_Pos)
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_NotGenerated (0UL)
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Generated (1UL)

/* Register: RADIO_EVENTS_EDSTOPPED */
/* Description: The sampling of energy detection has stopped */

/* Bit 0 : The sampling of energy detection has stopped */
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Pos (0UL)
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Msk (0x1UL << RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Pos)
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_NotGenerated (0UL)
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Generated (1UL)

/* Register: RADIO_EVENTS_CCAIDLE */
/* Description: Wireless medium in idle - clear to send */

/* Bit 0 : Wireless medium in idle - clear to send */
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Pos (0UL)
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Msk (0x1UL << RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Pos)
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_NotGenerated (0UL)
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Generated (1UL)

/* Register: RADIO_EVENTS_CCABUSY */
/* Description: Wireless medium busy - do not send */

/* Bit 0 : Wireless medium busy - do not send */
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Pos (0UL)
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Msk (0x1UL << RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Pos)
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_NotGenerated (0UL)
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Generated (1UL)

/* Register: RADIO_EVENTS_CCASTOPPED */
/* Description: The CCA has stopped */

/* Bit 0 : The CCA has stopped */
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Pos (0UL)
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Msk (0x1UL << RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Pos)
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_NotGenerated (0UL)
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Generated (1UL)

/* Register: RADIO_EVENTS_RATEBOOST */
/* Description: Ble_LR CI field received, receive mode is changed from Ble_LR125Kbit to Ble_LR500Kbit. */

/* Bit 0 : Ble_LR CI field received, receive mode is changed from Ble_LR125Kbit to Ble_LR500Kbit. */
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Pos (0UL)
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Msk (0x1UL << RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Pos)
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_NotGenerated (0UL)
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Generated (1UL)

/* Register: RADIO_EVENTS_TXREADY */
/* Description: RADIO has ramped up and is ready to be started TX path */

/* Bit 0 : RADIO has ramped up and is ready to be started TX path */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Pos (0UL)
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Msk (0x1UL << RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Pos)
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_NotGenerated (0UL)
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Generated (1UL)

/* Register: RADIO_EVENTS_RXREADY */
/* Description: RADIO has ramped up and is ready to be started RX path */

/* Bit 0 : RADIO has ramped up and is ready to be started RX path */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Pos (0UL)
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Msk (0x1UL << RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Pos)
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_NotGenerated (0UL)
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Generated (1UL)

/* Register: RADIO_EVENTS_MHRMATCH */
/* Description: MAC header match found */

/* Bit 0 : MAC header match found */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Pos (0UL)
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Msk (0x1UL << RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Pos)
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_NotGenerated (0UL)
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Generated (1UL)

/* Register: RADIO_EVENTS_SYNC */
/* Description: Preamble indicator */

/* Bit 0 : Preamble indicator */
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Pos (0UL)
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Msk (0x1UL << RADIO_EVENTS_SYNC_EVENTS_SYNC_Pos)
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_NotGenerated (0UL)
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Generated (1UL)

/* Register: RADIO_EVENTS_PHYEND */
/* Description: Generated when last bit is sent on air, or received from air */

/* Bit 0 : Generated when last bit is sent on air, or received from air */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Pos (0UL)
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Msk (0x1UL << RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Pos)
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_NotGenerated (0UL)
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Generated (1UL)

/* Register: RADIO_EVENTS_CTEPRESENT */
/* Description: CTE is present (early warning right after receiving CTEInfo byte) */

/* Bit 0 : CTE is present (early warning right after receiving CTEInfo byte) */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Pos (0UL)
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Msk (0x1UL << RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Pos)
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_NotGenerated (0UL)
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Generated (1UL)

/* Register: RADIO_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 21 : Shortcut between event PHYEND and task START */
#define RADIO_SHORTS_PHYEND_START_Pos (21UL)
#define RADIO_SHORTS_PHYEND_START_Msk (0x1UL << RADIO_SHORTS_PHYEND_START_Pos)
#define RADIO_SHORTS_PHYEND_START_Disabled (0UL)
#define RADIO_SHORTS_PHYEND_START_Enabled (1UL)

/* Bit 20 : Shortcut between event PHYEND and task DISABLE */
#define RADIO_SHORTS_PHYEND_DISABLE_Pos (20UL)
#define RADIO_SHORTS_PHYEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_PHYEND_DISABLE_Pos)
#define RADIO_SHORTS_PHYEND_DISABLE_Disabled (0UL)
#define RADIO_SHORTS_PHYEND_DISABLE_Enabled (1UL)

/* Bit 19 : Shortcut between event RXREADY and task START */
#define RADIO_SHORTS_RXREADY_START_Pos (19UL)
#define RADIO_SHORTS_RXREADY_START_Msk (0x1UL << RADIO_SHORTS_RXREADY_START_Pos)
#define RADIO_SHORTS_RXREADY_START_Disabled (0UL)
#define RADIO_SHORTS_RXREADY_START_Enabled (1UL)

/* Bit 18 : Shortcut between event TXREADY and task START */
#define RADIO_SHORTS_TXREADY_START_Pos (18UL)
#define RADIO_SHORTS_TXREADY_START_Msk (0x1UL << RADIO_SHORTS_TXREADY_START_Pos)
#define RADIO_SHORTS_TXREADY_START_Disabled (0UL)
#define RADIO_SHORTS_TXREADY_START_Enabled (1UL)

/* Bit 17 : Shortcut between event CCAIDLE and task STOP */
#define RADIO_SHORTS_CCAIDLE_STOP_Pos (17UL)
#define RADIO_SHORTS_CCAIDLE_STOP_Msk (0x1UL << RADIO_SHORTS_CCAIDLE_STOP_Pos)
#define RADIO_SHORTS_CCAIDLE_STOP_Disabled (0UL)
#define RADIO_SHORTS_CCAIDLE_STOP_Enabled (1UL)

/* Bit 16 : Shortcut between event EDEND and task DISABLE */
#define RADIO_SHORTS_EDEND_DISABLE_Pos (16UL)
#define RADIO_SHORTS_EDEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_EDEND_DISABLE_Pos)
#define RADIO_SHORTS_EDEND_DISABLE_Disabled (0UL)
#define RADIO_SHORTS_EDEND_DISABLE_Enabled (1UL)

/* Bit 15 : Shortcut between event READY and task EDSTART */
#define RADIO_SHORTS_READY_EDSTART_Pos (15UL)
#define RADIO_SHORTS_READY_EDSTART_Msk (0x1UL << RADIO_SHORTS_READY_EDSTART_Pos)
#define RADIO_SHORTS_READY_EDSTART_Disabled (0UL)
#define RADIO_SHORTS_READY_EDSTART_Enabled (1UL)

/* Bit 14 : Shortcut between event FRAMESTART and task BCSTART */
#define RADIO_SHORTS_FRAMESTART_BCSTART_Pos (14UL)
#define RADIO_SHORTS_FRAMESTART_BCSTART_Msk (0x1UL << RADIO_SHORTS_FRAMESTART_BCSTART_Pos)
#define RADIO_SHORTS_FRAMESTART_BCSTART_Disabled (0UL)
#define RADIO_SHORTS_FRAMESTART_BCSTART_Enabled (1UL)

/* Bit 13 : Shortcut between event CCABUSY and task DISABLE */
#define RADIO_SHORTS_CCABUSY_DISABLE_Pos (13UL)
#define RADIO_SHORTS_CCABUSY_DISABLE_Msk (0x1UL << RADIO_SHORTS_CCABUSY_DISABLE_Pos)
#define RADIO_SHORTS_CCABUSY_DISABLE_Disabled (0UL)
#define RADIO_SHORTS_CCABUSY_DISABLE_Enabled (1UL)

/* Bit 12 : Shortcut between event CCAIDLE and task TXEN */
#define RADIO_SHORTS_CCAIDLE_TXEN_Pos (12UL)
#define RADIO_SHORTS_CCAIDLE_TXEN_Msk (0x1UL << RADIO_SHORTS_CCAIDLE_TXEN_Pos)
#define RADIO_SHORTS_CCAIDLE_TXEN_Disabled (0UL)
#define RADIO_SHORTS_CCAIDLE_TXEN_Enabled (1UL)

/* Bit 11 : Shortcut between event RXREADY and task CCASTART */
#define RADIO_SHORTS_RXREADY_CCASTART_Pos (11UL)
#define RADIO_SHORTS_RXREADY_CCASTART_Msk (0x1UL << RADIO_SHORTS_RXREADY_CCASTART_Pos)
#define RADIO_SHORTS_RXREADY_CCASTART_Disabled (0UL)
#define RADIO_SHORTS_RXREADY_CCASTART_Enabled (1UL)

/* Bit 8 : Shortcut between event DISABLED and task RSSISTOP */
#define RADIO_SHORTS_DISABLED_RSSISTOP_Pos (8UL)
#define RADIO_SHORTS_DISABLED_RSSISTOP_Msk (0x1UL << RADIO_SHORTS_DISABLED_RSSISTOP_Pos)
#define RADIO_SHORTS_DISABLED_RSSISTOP_Disabled (0UL)
#define RADIO_SHORTS_DISABLED_RSSISTOP_Enabled (1UL)

/* Bit 6 : Shortcut between event ADDRESS and task BCSTART */
#define RADIO_SHORTS_ADDRESS_BCSTART_Pos (6UL)
#define RADIO_SHORTS_ADDRESS_BCSTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_BCSTART_Pos)
#define RADIO_SHORTS_ADDRESS_BCSTART_Disabled (0UL)
#define RADIO_SHORTS_ADDRESS_BCSTART_Enabled (1UL)

/* Bit 5 : Shortcut between event END and task START */
#define RADIO_SHORTS_END_START_Pos (5UL)
#define RADIO_SHORTS_END_START_Msk (0x1UL << RADIO_SHORTS_END_START_Pos)
#define RADIO_SHORTS_END_START_Disabled (0UL)
#define RADIO_SHORTS_END_START_Enabled (1UL)

/* Bit 4 : Shortcut between event ADDRESS and task RSSISTART */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Pos (4UL)
#define RADIO_SHORTS_ADDRESS_RSSISTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_RSSISTART_Pos)
#define RADIO_SHORTS_ADDRESS_RSSISTART_Disabled (0UL)
#define RADIO_SHORTS_ADDRESS_RSSISTART_Enabled (1UL)

/* Bit 3 : Shortcut between event DISABLED and task RXEN */
#define RADIO_SHORTS_DISABLED_RXEN_Pos (3UL)
#define RADIO_SHORTS_DISABLED_RXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_RXEN_Pos)
#define RADIO_SHORTS_DISABLED_RXEN_Disabled (0UL)
#define RADIO_SHORTS_DISABLED_RXEN_Enabled (1UL)

/* Bit 2 : Shortcut between event DISABLED and task TXEN */
#define RADIO_SHORTS_DISABLED_TXEN_Pos (2UL)
#define RADIO_SHORTS_DISABLED_TXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_TXEN_Pos)
#define RADIO_SHORTS_DISABLED_TXEN_Disabled (0UL)
#define RADIO_SHORTS_DISABLED_TXEN_Enabled (1UL)

/* Bit 1 : Shortcut between event END and task DISABLE */
#define RADIO_SHORTS_END_DISABLE_Pos (1UL)
#define RADIO_SHORTS_END_DISABLE_Msk (0x1UL << RADIO_SHORTS_END_DISABLE_Pos)
#define RADIO_SHORTS_END_DISABLE_Disabled (0UL)
#define RADIO_SHORTS_END_DISABLE_Enabled (1UL)

/* Bit 0 : Shortcut between event READY and task START */
#define RADIO_SHORTS_READY_START_Pos (0UL)
#define RADIO_SHORTS_READY_START_Msk (0x1UL << RADIO_SHORTS_READY_START_Pos)
#define RADIO_SHORTS_READY_START_Disabled (0UL)
#define RADIO_SHORTS_READY_START_Enabled (1UL)

/* Register: RADIO_INTENSET */
/* Description: Enable interrupt */

/* Bit 28 : Write '1' to enable interrupt for event CTEPRESENT */
#define RADIO_INTENSET_CTEPRESENT_Pos (28UL)
#define RADIO_INTENSET_CTEPRESENT_Msk (0x1UL << RADIO_INTENSET_CTEPRESENT_Pos)
#define RADIO_INTENSET_CTEPRESENT_Disabled (0UL)
#define RADIO_INTENSET_CTEPRESENT_Enabled (1UL)
#define RADIO_INTENSET_CTEPRESENT_Set (1UL)

/* Bit 27 : Write '1' to enable interrupt for event PHYEND */
#define RADIO_INTENSET_PHYEND_Pos (27UL)
#define RADIO_INTENSET_PHYEND_Msk (0x1UL << RADIO_INTENSET_PHYEND_Pos)
#define RADIO_INTENSET_PHYEND_Disabled (0UL)
#define RADIO_INTENSET_PHYEND_Enabled (1UL)
#define RADIO_INTENSET_PHYEND_Set (1UL)

/* Bit 26 : Write '1' to enable interrupt for event SYNC */
#define RADIO_INTENSET_SYNC_Pos (26UL)
#define RADIO_INTENSET_SYNC_Msk (0x1UL << RADIO_INTENSET_SYNC_Pos)
#define RADIO_INTENSET_SYNC_Disabled (0UL)
#define RADIO_INTENSET_SYNC_Enabled (1UL)
#define RADIO_INTENSET_SYNC_Set (1UL)

/* Bit 23 : Write '1' to enable interrupt for event MHRMATCH */
#define RADIO_INTENSET_MHRMATCH_Pos (23UL)
#define RADIO_INTENSET_MHRMATCH_Msk (0x1UL << RADIO_INTENSET_MHRMATCH_Pos)
#define RADIO_INTENSET_MHRMATCH_Disabled (0UL)
#define RADIO_INTENSET_MHRMATCH_Enabled (1UL)
#define RADIO_INTENSET_MHRMATCH_Set (1UL)

/* Bit 22 : Write '1' to enable interrupt for event RXREADY */
#define RADIO_INTENSET_RXREADY_Pos (22UL)
#define RADIO_INTENSET_RXREADY_Msk (0x1UL << RADIO_INTENSET_RXREADY_Pos)
#define RADIO_INTENSET_RXREADY_Disabled (0UL)
#define RADIO_INTENSET_RXREADY_Enabled (1UL)
#define RADIO_INTENSET_RXREADY_Set (1UL)

/* Bit 21 : Write '1' to enable interrupt for event TXREADY */
#define RADIO_INTENSET_TXREADY_Pos (21UL)
#define RADIO_INTENSET_TXREADY_Msk (0x1UL << RADIO_INTENSET_TXREADY_Pos)
#define RADIO_INTENSET_TXREADY_Disabled (0UL)
#define RADIO_INTENSET_TXREADY_Enabled (1UL)
#define RADIO_INTENSET_TXREADY_Set (1UL)

/* Bit 20 : Write '1' to enable interrupt for event RATEBOOST */
#define RADIO_INTENSET_RATEBOOST_Pos (20UL)
#define RADIO_INTENSET_RATEBOOST_Msk (0x1UL << RADIO_INTENSET_RATEBOOST_Pos)
#define RADIO_INTENSET_RATEBOOST_Disabled (0UL)
#define RADIO_INTENSET_RATEBOOST_Enabled (1UL)
#define RADIO_INTENSET_RATEBOOST_Set (1UL)

/* Bit 19 : Write '1' to enable interrupt for event CCASTOPPED */
#define RADIO_INTENSET_CCASTOPPED_Pos (19UL)
#define RADIO_INTENSET_CCASTOPPED_Msk (0x1UL << RADIO_INTENSET_CCASTOPPED_Pos)
#define RADIO_INTENSET_CCASTOPPED_Disabled (0UL)
#define RADIO_INTENSET_CCASTOPPED_Enabled (1UL)
#define RADIO_INTENSET_CCASTOPPED_Set (1UL)

/* Bit 18 : Write '1' to enable interrupt for event CCABUSY */
#define RADIO_INTENSET_CCABUSY_Pos (18UL)
#define RADIO_INTENSET_CCABUSY_Msk (0x1UL << RADIO_INTENSET_CCABUSY_Pos)
#define RADIO_INTENSET_CCABUSY_Disabled (0UL)
#define RADIO_INTENSET_CCABUSY_Enabled (1UL)
#define RADIO_INTENSET_CCABUSY_Set (1UL)

/* Bit 17 : Write '1' to enable interrupt for event CCAIDLE */
#define RADIO_INTENSET_CCAIDLE_Pos (17UL)
#define RADIO_INTENSET_CCAIDLE_Msk (0x1UL << RADIO_INTENSET_CCAIDLE_Pos)
#define RADIO_INTENSET_CCAIDLE_Disabled (0UL)
#define RADIO_INTENSET_CCAIDLE_Enabled (1UL)
#define RADIO_INTENSET_CCAIDLE_Set (1UL)

/* Bit 16 : Write '1' to enable interrupt for event EDSTOPPED */
#define RADIO_INTENSET_EDSTOPPED_Pos (16UL)
#define RADIO_INTENSET_EDSTOPPED_Msk (0x1UL << RADIO_INTENSET_EDSTOPPED_Pos)
#define RADIO_INTENSET_EDSTOPPED_Disabled (0UL)
#define RADIO_INTENSET_EDSTOPPED_Enabled (1UL)
#define RADIO_INTENSET_EDSTOPPED_Set (1UL)

/* Bit 15 : Write '1' to enable interrupt for event EDEND */
#define RADIO_INTENSET_EDEND_Pos (15UL)
#define RADIO_INTENSET_EDEND_Msk (0x1UL << RADIO_INTENSET_EDEND_Pos)
#define RADIO_INTENSET_EDEND_Disabled (0UL)
#define RADIO_INTENSET_EDEND_Enabled (1UL)
#define RADIO_INTENSET_EDEND_Set (1UL)

/* Bit 14 : Write '1' to enable interrupt for event FRAMESTART */
#define RADIO_INTENSET_FRAMESTART_Pos (14UL)
#define RADIO_INTENSET_FRAMESTART_Msk (0x1UL << RADIO_INTENSET_FRAMESTART_Pos)
#define RADIO_INTENSET_FRAMESTART_Disabled (0UL)
#define RADIO_INTENSET_FRAMESTART_Enabled (1UL)
#define RADIO_INTENSET_FRAMESTART_Set (1UL)

/* Bit 13 : Write '1' to enable interrupt for event CRCERROR */
#define RADIO_INTENSET_CRCERROR_Pos (13UL)
#define RADIO_INTENSET_CRCERROR_Msk (0x1UL << RADIO_INTENSET_CRCERROR_Pos)
#define RADIO_INTENSET_CRCERROR_Disabled (0UL)
#define RADIO_INTENSET_CRCERROR_Enabled (1UL)
#define RADIO_INTENSET_CRCERROR_Set (1UL)

/* Bit 12 : Write '1' to enable interrupt for event CRCOK */
#define RADIO_INTENSET_CRCOK_Pos (12UL)
#define RADIO_INTENSET_CRCOK_Msk (0x1UL << RADIO_INTENSET_CRCOK_Pos)
#define RADIO_INTENSET_CRCOK_Disabled (0UL)
#define RADIO_INTENSET_CRCOK_Enabled (1UL)
#define RADIO_INTENSET_CRCOK_Set (1UL)

/* Bit 10 : Write '1' to enable interrupt for event BCMATCH */
#define RADIO_INTENSET_BCMATCH_Pos (10UL)
#define RADIO_INTENSET_BCMATCH_Msk (0x1UL << RADIO_INTENSET_BCMATCH_Pos)
#define RADIO_INTENSET_BCMATCH_Disabled (0UL)
#define RADIO_INTENSET_BCMATCH_Enabled (1UL)
#define RADIO_INTENSET_BCMATCH_Set (1UL)

/* Bit 7 : Write '1' to enable interrupt for event RSSIEND */
#define RADIO_INTENSET_RSSIEND_Pos (7UL)
#define RADIO_INTENSET_RSSIEND_Msk (0x1UL << RADIO_INTENSET_RSSIEND_Pos)
#define RADIO_INTENSET_RSSIEND_Disabled (0UL)
#define RADIO_INTENSET_RSSIEND_Enabled (1UL)
#define RADIO_INTENSET_RSSIEND_Set (1UL)

/* Bit 6 : Write '1' to enable interrupt for event DEVMISS */
#define RADIO_INTENSET_DEVMISS_Pos (6UL)
#define RADIO_INTENSET_DEVMISS_Msk (0x1UL << RADIO_INTENSET_DEVMISS_Pos)
#define RADIO_INTENSET_DEVMISS_Disabled (0UL)
#define RADIO_INTENSET_DEVMISS_Enabled (1UL)
#define RADIO_INTENSET_DEVMISS_Set (1UL)

/* Bit 5 : Write '1' to enable interrupt for event DEVMATCH */
#define RADIO_INTENSET_DEVMATCH_Pos (5UL)
#define RADIO_INTENSET_DEVMATCH_Msk (0x1UL << RADIO_INTENSET_DEVMATCH_Pos)
#define RADIO_INTENSET_DEVMATCH_Disabled (0UL)
#define RADIO_INTENSET_DEVMATCH_Enabled (1UL)
#define RADIO_INTENSET_DEVMATCH_Set (1UL)

/* Bit 4 : Write '1' to enable interrupt for event DISABLED */
#define RADIO_INTENSET_DISABLED_Pos (4UL)
#define RADIO_INTENSET_DISABLED_Msk (0x1UL << RADIO_INTENSET_DISABLED_Pos)
#define RADIO_INTENSET_DISABLED_Disabled (0UL)
#define RADIO_INTENSET_DISABLED_Enabled (1UL)
#define RADIO_INTENSET_DISABLED_Set (1UL)

/* Bit 3 : Write '1' to enable interrupt for event END */
#define RADIO_INTENSET_END_Pos (3UL)
#define RADIO_INTENSET_END_Msk (0x1UL << RADIO_INTENSET_END_Pos)
#define RADIO_INTENSET_END_Disabled (0UL)
#define RADIO_INTENSET_END_Enabled (1UL)
#define RADIO_INTENSET_END_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event PAYLOAD */
#define RADIO_INTENSET_PAYLOAD_Pos (2UL)
#define RADIO_INTENSET_PAYLOAD_Msk (0x1UL << RADIO_INTENSET_PAYLOAD_Pos)
#define RADIO_INTENSET_PAYLOAD_Disabled (0UL)
#define RADIO_INTENSET_PAYLOAD_Enabled (1UL)
#define RADIO_INTENSET_PAYLOAD_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event ADDRESS */
#define RADIO_INTENSET_ADDRESS_Pos (1UL)
#define RADIO_INTENSET_ADDRESS_Msk (0x1UL << RADIO_INTENSET_ADDRESS_Pos)
#define RADIO_INTENSET_ADDRESS_Disabled (0UL)
#define RADIO_INTENSET_ADDRESS_Enabled (1UL)
#define RADIO_INTENSET_ADDRESS_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define RADIO_INTENSET_READY_Pos (0UL)
#define RADIO_INTENSET_READY_Msk (0x1UL << RADIO_INTENSET_READY_Pos)
#define RADIO_INTENSET_READY_Disabled (0UL)
#define RADIO_INTENSET_READY_Enabled (1UL)
#define RADIO_INTENSET_READY_Set (1UL)

/* Register: RADIO_INTENCLR */
/* Description: Disable interrupt */

/* Bit 28 : Write '1' to disable interrupt for event CTEPRESENT */
#define RADIO_INTENCLR_CTEPRESENT_Pos (28UL)
#define RADIO_INTENCLR_CTEPRESENT_Msk (0x1UL << RADIO_INTENCLR_CTEPRESENT_Pos)
#define RADIO_INTENCLR_CTEPRESENT_Disabled (0UL)
#define RADIO_INTENCLR_CTEPRESENT_Enabled (1UL)
#define RADIO_INTENCLR_CTEPRESENT_Clear (1UL)

/* Bit 27 : Write '1' to disable interrupt for event PHYEND */
#define RADIO_INTENCLR_PHYEND_Pos (27UL)
#define RADIO_INTENCLR_PHYEND_Msk (0x1UL << RADIO_INTENCLR_PHYEND_Pos)
#define RADIO_INTENCLR_PHYEND_Disabled (0UL)
#define RADIO_INTENCLR_PHYEND_Enabled (1UL)
#define RADIO_INTENCLR_PHYEND_Clear (1UL)

/* Bit 26 : Write '1' to disable interrupt for event SYNC */
#define RADIO_INTENCLR_SYNC_Pos (26UL)
#define RADIO_INTENCLR_SYNC_Msk (0x1UL << RADIO_INTENCLR_SYNC_Pos)
#define RADIO_INTENCLR_SYNC_Disabled (0UL)
#define RADIO_INTENCLR_SYNC_Enabled (1UL)
#define RADIO_INTENCLR_SYNC_Clear (1UL)

/* Bit 23 : Write '1' to disable interrupt for event MHRMATCH */
#define RADIO_INTENCLR_MHRMATCH_Pos (23UL)
#define RADIO_INTENCLR_MHRMATCH_Msk (0x1UL << RADIO_INTENCLR_MHRMATCH_Pos)
#define RADIO_INTENCLR_MHRMATCH_Disabled (0UL)
#define RADIO_INTENCLR_MHRMATCH_Enabled (1UL)
#define RADIO_INTENCLR_MHRMATCH_Clear (1UL)

/* Bit 22 : Write '1' to disable interrupt for event RXREADY */
#define RADIO_INTENCLR_RXREADY_Pos (22UL)
#define RADIO_INTENCLR_RXREADY_Msk (0x1UL << RADIO_INTENCLR_RXREADY_Pos)
#define RADIO_INTENCLR_RXREADY_Disabled (0UL)
#define RADIO_INTENCLR_RXREADY_Enabled (1UL)
#define RADIO_INTENCLR_RXREADY_Clear (1UL)

/* Bit 21 : Write '1' to disable interrupt for event TXREADY */
#define RADIO_INTENCLR_TXREADY_Pos (21UL)
#define RADIO_INTENCLR_TXREADY_Msk (0x1UL << RADIO_INTENCLR_TXREADY_Pos)
#define RADIO_INTENCLR_TXREADY_Disabled (0UL)
#define RADIO_INTENCLR_TXREADY_Enabled (1UL)
#define RADIO_INTENCLR_TXREADY_Clear (1UL)

/* Bit 20 : Write '1' to disable interrupt for event RATEBOOST */
#define RADIO_INTENCLR_RATEBOOST_Pos (20UL)
#define RADIO_INTENCLR_RATEBOOST_Msk (0x1UL << RADIO_INTENCLR_RATEBOOST_Pos)
#define RADIO_INTENCLR_RATEBOOST_Disabled (0UL)
#define RADIO_INTENCLR_RATEBOOST_Enabled (1UL)
#define RADIO_INTENCLR_RATEBOOST_Clear (1UL)

/* Bit 19 : Write '1' to disable interrupt for event CCASTOPPED */
#define RADIO_INTENCLR_CCASTOPPED_Pos (19UL)
#define RADIO_INTENCLR_CCASTOPPED_Msk (0x1UL << RADIO_INTENCLR_CCASTOPPED_Pos)
#define RADIO_INTENCLR_CCASTOPPED_Disabled (0UL)
#define RADIO_INTENCLR_CCASTOPPED_Enabled (1UL)
#define RADIO_INTENCLR_CCASTOPPED_Clear (1UL)

/* Bit 18 : Write '1' to disable interrupt for event CCABUSY */
#define RADIO_INTENCLR_CCABUSY_Pos (18UL)
#define RADIO_INTENCLR_CCABUSY_Msk (0x1UL << RADIO_INTENCLR_CCABUSY_Pos)
#define RADIO_INTENCLR_CCABUSY_Disabled (0UL)
#define RADIO_INTENCLR_CCABUSY_Enabled (1UL)
#define RADIO_INTENCLR_CCABUSY_Clear (1UL)

/* Bit 17 : Write '1' to disable interrupt for event CCAIDLE */
#define RADIO_INTENCLR_CCAIDLE_Pos (17UL)
#define RADIO_INTENCLR_CCAIDLE_Msk (0x1UL << RADIO_INTENCLR_CCAIDLE_Pos)
#define RADIO_INTENCLR_CCAIDLE_Disabled (0UL)
#define RADIO_INTENCLR_CCAIDLE_Enabled (1UL)
#define RADIO_INTENCLR_CCAIDLE_Clear (1UL)

/* Bit 16 : Write '1' to disable interrupt for event EDSTOPPED */
#define RADIO_INTENCLR_EDSTOPPED_Pos (16UL)
#define RADIO_INTENCLR_EDSTOPPED_Msk (0x1UL << RADIO_INTENCLR_EDSTOPPED_Pos)
#define RADIO_INTENCLR_EDSTOPPED_Disabled (0UL)
#define RADIO_INTENCLR_EDSTOPPED_Enabled (1UL)
#define RADIO_INTENCLR_EDSTOPPED_Clear (1UL)

/* Bit 15 : Write '1' to disable interrupt for event EDEND */
#define RADIO_INTENCLR_EDEND_Pos (15UL)
#define RADIO_INTENCLR_EDEND_Msk (0x1UL << RADIO_INTENCLR_EDEND_Pos)
#define RADIO_INTENCLR_EDEND_Disabled (0UL)
#define RADIO_INTENCLR_EDEND_Enabled (1UL)
#define RADIO_INTENCLR_EDEND_Clear (1UL)

/* Bit 14 : Write '1' to disable interrupt for event FRAMESTART */
#define RADIO_INTENCLR_FRAMESTART_Pos (14UL)
#define RADIO_INTENCLR_FRAMESTART_Msk (0x1UL << RADIO_INTENCLR_FRAMESTART_Pos)
#define RADIO_INTENCLR_FRAMESTART_Disabled (0UL)
#define RADIO_INTENCLR_FRAMESTART_Enabled (1UL)
#define RADIO_INTENCLR_FRAMESTART_Clear (1UL)

/* Bit 13 : Write '1' to disable interrupt for event CRCERROR */
#define RADIO_INTENCLR_CRCERROR_Pos (13UL)
#define RADIO_INTENCLR_CRCERROR_Msk (0x1UL << RADIO_INTENCLR_CRCERROR_Pos)
#define RADIO_INTENCLR_CRCERROR_Disabled (0UL)
#define RADIO_INTENCLR_CRCERROR_Enabled (1UL)
#define RADIO_INTENCLR_CRCERROR_Clear (1UL)

/* Bit 12 : Write '1' to disable interrupt for event CRCOK */
#define RADIO_INTENCLR_CRCOK_Pos (12UL)
#define RADIO_INTENCLR_CRCOK_Msk (0x1UL << RADIO_INTENCLR_CRCOK_Pos)
#define RADIO_INTENCLR_CRCOK_Disabled (0UL)
#define RADIO_INTENCLR_CRCOK_Enabled (1UL)
#define RADIO_INTENCLR_CRCOK_Clear (1UL)

/* Bit 10 : Write '1' to disable interrupt for event BCMATCH */
#define RADIO_INTENCLR_BCMATCH_Pos (10UL)
#define RADIO_INTENCLR_BCMATCH_Msk (0x1UL << RADIO_INTENCLR_BCMATCH_Pos)
#define RADIO_INTENCLR_BCMATCH_Disabled (0UL)
#define RADIO_INTENCLR_BCMATCH_Enabled (1UL)
#define RADIO_INTENCLR_BCMATCH_Clear (1UL)

/* Bit 7 : Write '1' to disable interrupt for event RSSIEND */
#define RADIO_INTENCLR_RSSIEND_Pos (7UL)
#define RADIO_INTENCLR_RSSIEND_Msk (0x1UL << RADIO_INTENCLR_RSSIEND_Pos)
#define RADIO_INTENCLR_RSSIEND_Disabled (0UL)
#define RADIO_INTENCLR_RSSIEND_Enabled (1UL)
#define RADIO_INTENCLR_RSSIEND_Clear (1UL)

/* Bit 6 : Write '1' to disable interrupt for event DEVMISS */
#define RADIO_INTENCLR_DEVMISS_Pos (6UL)
#define RADIO_INTENCLR_DEVMISS_Msk (0x1UL << RADIO_INTENCLR_DEVMISS_Pos)
#define RADIO_INTENCLR_DEVMISS_Disabled (0UL)
#define RADIO_INTENCLR_DEVMISS_Enabled (1UL)
#define RADIO_INTENCLR_DEVMISS_Clear (1UL)

/* Bit 5 : Write '1' to disable interrupt for event DEVMATCH */
#define RADIO_INTENCLR_DEVMATCH_Pos (5UL)
#define RADIO_INTENCLR_DEVMATCH_Msk (0x1UL << RADIO_INTENCLR_DEVMATCH_Pos)
#define RADIO_INTENCLR_DEVMATCH_Disabled (0UL)
#define RADIO_INTENCLR_DEVMATCH_Enabled (1UL)
#define RADIO_INTENCLR_DEVMATCH_Clear (1UL)

/* Bit 4 : Write '1' to disable interrupt for event DISABLED */
#define RADIO_INTENCLR_DISABLED_Pos (4UL)
#define RADIO_INTENCLR_DISABLED_Msk (0x1UL << RADIO_INTENCLR_DISABLED_Pos)
#define RADIO_INTENCLR_DISABLED_Disabled (0UL)
#define RADIO_INTENCLR_DISABLED_Enabled (1UL)
#define RADIO_INTENCLR_DISABLED_Clear (1UL)

/* Bit 3 : Write '1' to disable interrupt for event END */
#define RADIO_INTENCLR_END_Pos (3UL)
#define RADIO_INTENCLR_END_Msk (0x1UL << RADIO_INTENCLR_END_Pos)
#define RADIO_INTENCLR_END_Disabled (0UL)
#define RADIO_INTENCLR_END_Enabled (1UL)
#define RADIO_INTENCLR_END_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event PAYLOAD */
#define RADIO_INTENCLR_PAYLOAD_Pos (2UL)
#define RADIO_INTENCLR_PAYLOAD_Msk (0x1UL << RADIO_INTENCLR_PAYLOAD_Pos)
#define RADIO_INTENCLR_PAYLOAD_Disabled (0UL)
#define RADIO_INTENCLR_PAYLOAD_Enabled (1UL)
#define RADIO_INTENCLR_PAYLOAD_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event ADDRESS */
#define RADIO_INTENCLR_ADDRESS_Pos (1UL)
#define RADIO_INTENCLR_ADDRESS_Msk (0x1UL << RADIO_INTENCLR_ADDRESS_Pos)
#define RADIO_INTENCLR_ADDRESS_Disabled (0UL)
#define RADIO_INTENCLR_ADDRESS_Enabled (1UL)
#define RADIO_INTENCLR_ADDRESS_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event READY */
#define RADIO_INTENCLR_READY_Pos (0UL)
#define RADIO_INTENCLR_READY_Msk (0x1UL << RADIO_INTENCLR_READY_Pos)
#define RADIO_INTENCLR_READY_Disabled (0UL)
#define RADIO_INTENCLR_READY_Enabled (1UL)
#define RADIO_INTENCLR_READY_Clear (1UL)

/* Register: RADIO_CRCSTATUS */
/* Description: CRC status */

/* Bit 0 : CRC status of packet received */
#define RADIO_CRCSTATUS_CRCSTATUS_Pos (0UL)
#define RADIO_CRCSTATUS_CRCSTATUS_Msk (0x1UL << RADIO_CRCSTATUS_CRCSTATUS_Pos)
#define RADIO_CRCSTATUS_CRCSTATUS_CRCError (0UL)
#define RADIO_CRCSTATUS_CRCSTATUS_CRCOk (1UL)

/* Register: RADIO_RXMATCH */
/* Description: Received address */

/* Bits 2..0 : Received address */
#define RADIO_RXMATCH_RXMATCH_Pos (0UL)
#define RADIO_RXMATCH_RXMATCH_Msk (0x7UL << RADIO_RXMATCH_RXMATCH_Pos)

/* Register: RADIO_RXCRC */
/* Description: CRC field of previously received packet */

/* Bits 23..0 : CRC field of previously received packet */
#define RADIO_RXCRC_RXCRC_Pos (0UL)
#define RADIO_RXCRC_RXCRC_Msk (0xFFFFFFUL << RADIO_RXCRC_RXCRC_Pos)

/* Register: RADIO_DAI */
/* Description: Device address match index */

/* Bits 2..0 : Device address match index */
#define RADIO_DAI_DAI_Pos (0UL)
#define RADIO_DAI_DAI_Msk (0x7UL << RADIO_DAI_DAI_Pos)

/* Register: RADIO_PDUSTAT */
/* Description: Payload status */

/* Bits 2..1 : Status on what rate packet is received with in Long Range */
#define RADIO_PDUSTAT_CISTAT_Pos (1UL)
#define RADIO_PDUSTAT_CISTAT_Msk (0x3UL << RADIO_PDUSTAT_CISTAT_Pos)
#define RADIO_PDUSTAT_CISTAT_LR125kbit (0UL)
#define RADIO_PDUSTAT_CISTAT_LR500kbit (1UL)

/* Bit 0 : Status on payload length vs. PCNF1.MAXLEN */
#define RADIO_PDUSTAT_PDUSTAT_Pos (0UL)
#define RADIO_PDUSTAT_PDUSTAT_Msk (0x1UL << RADIO_PDUSTAT_PDUSTAT_Pos)
#define RADIO_PDUSTAT_PDUSTAT_LessThan (0UL)
#define RADIO_PDUSTAT_PDUSTAT_GreaterThan (1UL)

/* Register: RADIO_CTESTATUS */
/* Description: CTEInfo parsed from received packet */

/* Bits 7..6 : CTEType parsed from packet */
#define RADIO_CTESTATUS_CTETYPE_Pos (6UL)
#define RADIO_CTESTATUS_CTETYPE_Msk (0x3UL << RADIO_CTESTATUS_CTETYPE_Pos)

/* Bit 5 : RFU parsed from packet */
#define RADIO_CTESTATUS_RFU_Pos (5UL)
#define RADIO_CTESTATUS_RFU_Msk (0x1UL << RADIO_CTESTATUS_RFU_Pos)

/* Bits 4..0 : CTETime parsed from packet */
#define RADIO_CTESTATUS_CTETIME_Pos (0UL)
#define RADIO_CTESTATUS_CTETIME_Msk (0x1FUL << RADIO_CTESTATUS_CTETIME_Pos)

/* Register: RADIO_DFESTATUS */
/* Description: DFE status information */

/* Bit 4 : Internal state of sampling state machine */
#define RADIO_DFESTATUS_SAMPLINGSTATE_Pos (4UL)
#define RADIO_DFESTATUS_SAMPLINGSTATE_Msk (0x1UL << RADIO_DFESTATUS_SAMPLINGSTATE_Pos)
#define RADIO_DFESTATUS_SAMPLINGSTATE_Idle (0UL)
#define RADIO_DFESTATUS_SAMPLINGSTATE_Sampling (1UL)

/* Bits 2..0 : Internal state of switching state machine */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Pos (0UL)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Msk (0x7UL << RADIO_DFESTATUS_SWITCHINGSTATE_Pos)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Idle (0UL)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Offset (1UL)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Guard (2UL)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Ref (3UL)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Switching (4UL)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Ending (5UL)

/* Register: RADIO_PACKETPTR */
/* Description: Packet pointer */

/* Bits 31..0 : Packet pointer */
#define RADIO_PACKETPTR_PACKETPTR_Pos (0UL)
#define RADIO_PACKETPTR_PACKETPTR_Msk (0xFFFFFFFFUL << RADIO_PACKETPTR_PACKETPTR_Pos)

/* Register: RADIO_FREQUENCY */
/* Description: Frequency */

/* Bit 8 : Channel map selection */
#define RADIO_FREQUENCY_MAP_Pos (8UL)
#define RADIO_FREQUENCY_MAP_Msk (0x1UL << RADIO_FREQUENCY_MAP_Pos)
#define RADIO_FREQUENCY_MAP_Default (0UL)
#define RADIO_FREQUENCY_MAP_Low (1UL)

/* Bits 6..0 : Radio channel frequency */
#define RADIO_FREQUENCY_FREQUENCY_Pos (0UL)
#define RADIO_FREQUENCY_FREQUENCY_Msk (0x7FUL << RADIO_FREQUENCY_FREQUENCY_Pos)

/* Register: RADIO_TXPOWER */
/* Description: Output power */

/* Bits 7..0 : RADIO output power */
#define RADIO_TXPOWER_TXPOWER_Pos (0UL)
#define RADIO_TXPOWER_TXPOWER_Msk (0xFFUL << RADIO_TXPOWER_TXPOWER_Pos)
#define RADIO_TXPOWER_TXPOWER_0dBm (0x0UL)
#define RADIO_TXPOWER_TXPOWER_Pos2dBm (0x2UL)
#define RADIO_TXPOWER_TXPOWER_Pos3dBm (0x3UL)
#define RADIO_TXPOWER_TXPOWER_Pos4dBm (0x4UL)
#define RADIO_TXPOWER_TXPOWER_Pos5dBm (0x5UL)
#define RADIO_TXPOWER_TXPOWER_Pos6dBm (0x6UL)
#define RADIO_TXPOWER_TXPOWER_Pos7dBm (0x7UL)
#define RADIO_TXPOWER_TXPOWER_Pos8dBm (0x8UL)
#define RADIO_TXPOWER_TXPOWER_Neg40dBm (0xD8UL)
#define RADIO_TXPOWER_TXPOWER_Neg30dBm (0xE2UL)
#define RADIO_TXPOWER_TXPOWER_Neg20dBm (0xECUL)
#define RADIO_TXPOWER_TXPOWER_Neg16dBm (0xF0UL)
#define RADIO_TXPOWER_TXPOWER_Neg12dBm (0xF4UL)
#define RADIO_TXPOWER_TXPOWER_Neg8dBm (0xF8UL)
#define RADIO_TXPOWER_TXPOWER_Neg4dBm (0xFCUL)

/* Register: RADIO_MODE */
/* Description: Data rate and modulation */

/* Bits 3..0 : Radio data rate and modulation setting. The radio supports frequency-shift keying (FSK) modulation. */
#define RADIO_MODE_MODE_Pos (0UL)
#define RADIO_MODE_MODE_Msk (0xFUL << RADIO_MODE_MODE_Pos)
#define RADIO_MODE_MODE_Nrf_1Mbit (0UL)
#define RADIO_MODE_MODE_Nrf_2Mbit (1UL)
#define RADIO_MODE_MODE_Ble_1Mbit (3UL)
#define RADIO_MODE_MODE_Ble_2Mbit (4UL)
#define RADIO_MODE_MODE_Ble_LR125Kbit (5UL)
#define RADIO_MODE_MODE_Ble_LR500Kbit (6UL)
#define RADIO_MODE_MODE_Ieee802154_250Kbit (15UL)

/* Register: RADIO_PCNF0 */
/* Description: Packet configuration register 0 */

/* Bits 30..29 : Length of TERM field in Long Range operation */
#define RADIO_PCNF0_TERMLEN_Pos (29UL)
#define RADIO_PCNF0_TERMLEN_Msk (0x3UL << RADIO_PCNF0_TERMLEN_Pos)

/* Bit 26 : Indicates if LENGTH field contains CRC or not */
#define RADIO_PCNF0_CRCINC_Pos (26UL)
#define RADIO_PCNF0_CRCINC_Msk (0x1UL << RADIO_PCNF0_CRCINC_Pos)
#define RADIO_PCNF0_CRCINC_Exclude (0UL)
#define RADIO_PCNF0_CRCINC_Include (1UL)

/* Bits 25..24 : Length of preamble on air. Decision point: TASKS_START task */
#define RADIO_PCNF0_PLEN_Pos (24UL)
#define RADIO_PCNF0_PLEN_Msk (0x3UL << RADIO_PCNF0_PLEN_Pos)
#define RADIO_PCNF0_PLEN_8bit (0UL)
#define RADIO_PCNF0_PLEN_16bit (1UL)
#define RADIO_PCNF0_PLEN_32bitZero (2UL)
#define RADIO_PCNF0_PLEN_LongRange (3UL)

/* Bits 23..22 : Length of code indicator - long range */
#define RADIO_PCNF0_CILEN_Pos (22UL)
#define RADIO_PCNF0_CILEN_Msk (0x3UL << RADIO_PCNF0_CILEN_Pos)

/* Bit 20 : Include or exclude S1 field in RAM */
#define RADIO_PCNF0_S1INCL_Pos (20UL)
#define RADIO_PCNF0_S1INCL_Msk (0x1UL << RADIO_PCNF0_S1INCL_Pos)
#define RADIO_PCNF0_S1INCL_Automatic (0UL)
#define RADIO_PCNF0_S1INCL_Include (1UL)

/* Bits 19..16 : Length on air of S1 field in number of bits */
#define RADIO_PCNF0_S1LEN_Pos (16UL)
#define RADIO_PCNF0_S1LEN_Msk (0xFUL << RADIO_PCNF0_S1LEN_Pos)

/* Bit 8 : Length on air of S0 field in number of bytes */
#define RADIO_PCNF0_S0LEN_Pos (8UL)
#define RADIO_PCNF0_S0LEN_Msk (0x1UL << RADIO_PCNF0_S0LEN_Pos)

/* Bits 3..0 : Length on air of LENGTH field in number of bits */
#define RADIO_PCNF0_LFLEN_Pos (0UL)
#define RADIO_PCNF0_LFLEN_Msk (0xFUL << RADIO_PCNF0_LFLEN_Pos)

/* Register: RADIO_PCNF1 */
/* Description: Packet configuration register 1 */

/* Bit 25 : Enable or disable packet whitening */
#define RADIO_PCNF1_WHITEEN_Pos (25UL)
#define RADIO_PCNF1_WHITEEN_Msk (0x1UL << RADIO_PCNF1_WHITEEN_Pos)
#define RADIO_PCNF1_WHITEEN_Disabled (0UL)
#define RADIO_PCNF1_WHITEEN_Enabled (1UL)

/* Bit 24 : On-air endianness of packet, this applies to the S0, LENGTH, S1, and the PAYLOAD fields. */
#define RADIO_PCNF1_ENDIAN_Pos (24UL)
#define RADIO_PCNF1_ENDIAN_Msk (0x1UL << RADIO_PCNF1_ENDIAN_Pos)
#define RADIO_PCNF1_ENDIAN_Little (0UL)
#define RADIO_PCNF1_ENDIAN_Big (1UL)

/* Bits 18..16 : Base address length in number of bytes */
#define RADIO_PCNF1_BALEN_Pos (16UL)
#define RADIO_PCNF1_BALEN_Msk (0x7UL << RADIO_PCNF1_BALEN_Pos)

/* Bits 15..8 : Static length in number of bytes */
#define RADIO_PCNF1_STATLEN_Pos (8UL)
#define RADIO_PCNF1_STATLEN_Msk (0xFFUL << RADIO_PCNF1_STATLEN_Pos)

/* Bits 7..0 : Maximum length of packet payload. If the packet payload is larger than MAXLEN, the radio will truncate the payload to MAXLEN. */
#define RADIO_PCNF1_MAXLEN_Pos (0UL)
#define RADIO_PCNF1_MAXLEN_Msk (0xFFUL << RADIO_PCNF1_MAXLEN_Pos)

/* Register: RADIO_BASE0 */
/* Description: Base address 0 */

/* Bits 31..0 : Base address 0 */
#define RADIO_BASE0_BASE0_Pos (0UL)
#define RADIO_BASE0_BASE0_Msk (0xFFFFFFFFUL << RADIO_BASE0_BASE0_Pos)

/* Register: RADIO_BASE1 */
/* Description: Base address 1 */

/* Bits 31..0 : Base address 1 */
#define RADIO_BASE1_BASE1_Pos (0UL)
#define RADIO_BASE1_BASE1_Msk (0xFFFFFFFFUL << RADIO_BASE1_BASE1_Pos)

/* Register: RADIO_PREFIX0 */
/* Description: Prefixes bytes for logical addresses 0-3 */

/* Bits 31..24 : Address prefix 3. */
#define RADIO_PREFIX0_AP3_Pos (24UL)
#define RADIO_PREFIX0_AP3_Msk (0xFFUL << RADIO_PREFIX0_AP3_Pos)

/* Bits 23..16 : Address prefix 2. */
#define RADIO_PREFIX0_AP2_Pos (16UL)
#define RADIO_PREFIX0_AP2_Msk (0xFFUL << RADIO_PREFIX0_AP2_Pos)

/* Bits 15..8 : Address prefix 1. */
#define RADIO_PREFIX0_AP1_Pos (8UL)
#define RADIO_PREFIX0_AP1_Msk (0xFFUL << RADIO_PREFIX0_AP1_Pos)

/* Bits 7..0 : Address prefix 0. */
#define RADIO_PREFIX0_AP0_Pos (0UL)
#define RADIO_PREFIX0_AP0_Msk (0xFFUL << RADIO_PREFIX0_AP0_Pos)

/* Register: RADIO_PREFIX1 */
/* Description: Prefixes bytes for logical addresses 4-7 */

/* Bits 31..24 : Address prefix 7. */
#define RADIO_PREFIX1_AP7_Pos (24UL)
#define RADIO_PREFIX1_AP7_Msk (0xFFUL << RADIO_PREFIX1_AP7_Pos)

/* Bits 23..16 : Address prefix 6. */
#define RADIO_PREFIX1_AP6_Pos (16UL)
#define RADIO_PREFIX1_AP6_Msk (0xFFUL << RADIO_PREFIX1_AP6_Pos)

/* Bits 15..8 : Address prefix 5. */
#define RADIO_PREFIX1_AP5_Pos (8UL)
#define RADIO_PREFIX1_AP5_Msk (0xFFUL << RADIO_PREFIX1_AP5_Pos)

/* Bits 7..0 : Address prefix 4. */
#define RADIO_PREFIX1_AP4_Pos (0UL)
#define RADIO_PREFIX1_AP4_Msk (0xFFUL << RADIO_PREFIX1_AP4_Pos)

/* Register: RADIO_TXADDRESS */
/* Description: Transmit address select */

/* Bits 2..0 : Transmit address select */
#define RADIO_TXADDRESS_TXADDRESS_Pos (0UL)
#define RADIO_TXADDRESS_TXADDRESS_Msk (0x7UL << RADIO_TXADDRESS_TXADDRESS_Pos)

/* Register: RADIO_RXADDRESSES */
/* Description: Receive address select */

/* Bit 7 : Enable or disable reception on logical address 7. */
#define RADIO_RXADDRESSES_ADDR7_Pos (7UL)
#define RADIO_RXADDRESSES_ADDR7_Msk (0x1UL << RADIO_RXADDRESSES_ADDR7_Pos)
#define RADIO_RXADDRESSES_ADDR7_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR7_Enabled (1UL)

/* Bit 6 : Enable or disable reception on logical address 6. */
#define RADIO_RXADDRESSES_ADDR6_Pos (6UL)
#define RADIO_RXADDRESSES_ADDR6_Msk (0x1UL << RADIO_RXADDRESSES_ADDR6_Pos)
#define RADIO_RXADDRESSES_ADDR6_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR6_Enabled (1UL)

/* Bit 5 : Enable or disable reception on logical address 5. */
#define RADIO_RXADDRESSES_ADDR5_Pos (5UL)
#define RADIO_RXADDRESSES_ADDR5_Msk (0x1UL << RADIO_RXADDRESSES_ADDR5_Pos)
#define RADIO_RXADDRESSES_ADDR5_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR5_Enabled (1UL)

/* Bit 4 : Enable or disable reception on logical address 4. */
#define RADIO_RXADDRESSES_ADDR4_Pos (4UL)
#define RADIO_RXADDRESSES_ADDR4_Msk (0x1UL << RADIO_RXADDRESSES_ADDR4_Pos)
#define RADIO_RXADDRESSES_ADDR4_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR4_Enabled (1UL)

/* Bit 3 : Enable or disable reception on logical address 3. */
#define RADIO_RXADDRESSES_ADDR3_Pos (3UL)
#define RADIO_RXADDRESSES_ADDR3_Msk (0x1UL << RADIO_RXADDRESSES_ADDR3_Pos)
#define RADIO_RXADDRESSES_ADDR3_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR3_Enabled (1UL)

/* Bit 2 : Enable or disable reception on logical address 2. */
#define RADIO_RXADDRESSES_ADDR2_Pos (2UL)
#define RADIO_RXADDRESSES_ADDR2_Msk (0x1UL << RADIO_RXADDRESSES_ADDR2_Pos)
#define RADIO_RXADDRESSES_ADDR2_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR2_Enabled (1UL)

/* Bit 1 : Enable or disable reception on logical address 1. */
#define RADIO_RXADDRESSES_ADDR1_Pos (1UL)
#define RADIO_RXADDRESSES_ADDR1_Msk (0x1UL << RADIO_RXADDRESSES_ADDR1_Pos)
#define RADIO_RXADDRESSES_ADDR1_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR1_Enabled (1UL)

/* Bit 0 : Enable or disable reception on logical address 0. */
#define RADIO_RXADDRESSES_ADDR0_Pos (0UL)
#define RADIO_RXADDRESSES_ADDR0_Msk (0x1UL << RADIO_RXADDRESSES_ADDR0_Pos)
#define RADIO_RXADDRESSES_ADDR0_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR0_Enabled (1UL)

/* Register: RADIO_CRCCNF */
/* Description: CRC configuration */

/* Bits 9..8 : Include or exclude packet address field out of CRC calculation. */
#define RADIO_CRCCNF_SKIPADDR_Pos (8UL)
#define RADIO_CRCCNF_SKIPADDR_Msk (0x3UL << RADIO_CRCCNF_SKIPADDR_Pos)
#define RADIO_CRCCNF_SKIPADDR_Include (0UL)
#define RADIO_CRCCNF_SKIPADDR_Skip (1UL)
#define RADIO_CRCCNF_SKIPADDR_Ieee802154 (2UL)

/* Bits 1..0 : CRC length in number of bytes For MODE Ble_LR125Kbit and Ble_LR500Kbit, only LEN set to 3 is supported */
#define RADIO_CRCCNF_LEN_Pos (0UL)
#define RADIO_CRCCNF_LEN_Msk (0x3UL << RADIO_CRCCNF_LEN_Pos)
#define RADIO_CRCCNF_LEN_Disabled (0UL)
#define RADIO_CRCCNF_LEN_One (1UL)
#define RADIO_CRCCNF_LEN_Two (2UL)
#define RADIO_CRCCNF_LEN_Three (3UL)

/* Register: RADIO_CRCPOLY */
/* Description: CRC polynomial */

/* Bits 23..0 : CRC polynomial */
#define RADIO_CRCPOLY_CRCPOLY_Pos (0UL)
#define RADIO_CRCPOLY_CRCPOLY_Msk (0xFFFFFFUL << RADIO_CRCPOLY_CRCPOLY_Pos)

/* Register: RADIO_CRCINIT */
/* Description: CRC initial value */

/* Bits 23..0 : CRC initial value */
#define RADIO_CRCINIT_CRCINIT_Pos (0UL)
#define RADIO_CRCINIT_CRCINIT_Msk (0xFFFFFFUL << RADIO_CRCINIT_CRCINIT_Pos)

/* Register: RADIO_TIFS */
/* Description: Interframe spacing in us */

/* Bits 9..0 : Interframe spacing in us. */
#define RADIO_TIFS_TIFS_Pos (0UL)
#define RADIO_TIFS_TIFS_Msk (0x3FFUL << RADIO_TIFS_TIFS_Pos)

/* Register: RADIO_RSSISAMPLE */
/* Description: RSSI sample */

/* Bits 6..0 : RSSI sample. */
#define RADIO_RSSISAMPLE_RSSISAMPLE_Pos (0UL)
#define RADIO_RSSISAMPLE_RSSISAMPLE_Msk (0x7FUL << RADIO_RSSISAMPLE_RSSISAMPLE_Pos)

/* Register: RADIO_STATE */
/* Description: Current radio state */

/* Bits 3..0 : Current radio state */
#define RADIO_STATE_STATE_Pos (0UL)
#define RADIO_STATE_STATE_Msk (0xFUL << RADIO_STATE_STATE_Pos)
#define RADIO_STATE_STATE_Disabled (0UL)
#define RADIO_STATE_STATE_RxRu (1UL)
#define RADIO_STATE_STATE_RxIdle (2UL)
#define RADIO_STATE_STATE_Rx (3UL)
#define RADIO_STATE_STATE_RxDisable (4UL)
#define RADIO_STATE_STATE_TxRu (9UL)
#define RADIO_STATE_STATE_TxIdle (10UL)
#define RADIO_STATE_STATE_Tx (11UL)
#define RADIO_STATE_STATE_TxDisable (12UL)

/* Register: RADIO_DATAWHITEIV */
/* Description: Data whitening initial value */

/* Bits 6..0 : Data whitening initial value. Bit 6 is hardwired to '1', writing '0' to it has no effect, and it will always be read back and used by the device as '1'. */
#define RADIO_DATAWHITEIV_DATAWHITEIV_Pos (0UL)
#define RADIO_DATAWHITEIV_DATAWHITEIV_Msk (0x7FUL << RADIO_DATAWHITEIV_DATAWHITEIV_Pos)

/* Register: RADIO_BCC */
/* Description: Bit counter compare */

/* Bits 31..0 : Bit counter compare */
#define RADIO_BCC_BCC_Pos (0UL)
#define RADIO_BCC_BCC_Msk (0xFFFFFFFFUL << RADIO_BCC_BCC_Pos)

/* Register: RADIO_DAB */
/* Description: Description collection: Device address base segment n */

/* Bits 31..0 : Device address base segment n */
#define RADIO_DAB_DAB_Pos (0UL)
#define RADIO_DAB_DAB_Msk (0xFFFFFFFFUL << RADIO_DAB_DAB_Pos)

/* Register: RADIO_DAP */
/* Description: Description collection: Device address prefix n */

/* Bits 15..0 : Device address prefix n */
#define RADIO_DAP_DAP_Pos (0UL)
#define RADIO_DAP_DAP_Msk (0xFFFFUL << RADIO_DAP_DAP_Pos)

/* Register: RADIO_DACNF */
/* Description: Device address match configuration */

/* Bit 15 : TxAdd for device address 7 */
#define RADIO_DACNF_TXADD7_Pos (15UL)
#define RADIO_DACNF_TXADD7_Msk (0x1UL << RADIO_DACNF_TXADD7_Pos)

/* Bit 14 : TxAdd for device address 6 */
#define RADIO_DACNF_TXADD6_Pos (14UL)
#define RADIO_DACNF_TXADD6_Msk (0x1UL << RADIO_DACNF_TXADD6_Pos)

/* Bit 13 : TxAdd for device address 5 */
#define RADIO_DACNF_TXADD5_Pos (13UL)
#define RADIO_DACNF_TXADD5_Msk (0x1UL << RADIO_DACNF_TXADD5_Pos)

/* Bit 12 : TxAdd for device address 4 */
#define RADIO_DACNF_TXADD4_Pos (12UL)
#define RADIO_DACNF_TXADD4_Msk (0x1UL << RADIO_DACNF_TXADD4_Pos)

/* Bit 11 : TxAdd for device address 3 */
#define RADIO_DACNF_TXADD3_Pos (11UL)
#define RADIO_DACNF_TXADD3_Msk (0x1UL << RADIO_DACNF_TXADD3_Pos)

/* Bit 10 : TxAdd for device address 2 */
#define RADIO_DACNF_TXADD2_Pos (10UL)
#define RADIO_DACNF_TXADD2_Msk (0x1UL << RADIO_DACNF_TXADD2_Pos)

/* Bit 9 : TxAdd for device address 1 */
#define RADIO_DACNF_TXADD1_Pos (9UL)
#define RADIO_DACNF_TXADD1_Msk (0x1UL << RADIO_DACNF_TXADD1_Pos)

/* Bit 8 : TxAdd for device address 0 */
#define RADIO_DACNF_TXADD0_Pos (8UL)
#define RADIO_DACNF_TXADD0_Msk (0x1UL << RADIO_DACNF_TXADD0_Pos)

/* Bit 7 : Enable or disable device address matching using device address 7 */
#define RADIO_DACNF_ENA7_Pos (7UL)
#define RADIO_DACNF_ENA7_Msk (0x1UL << RADIO_DACNF_ENA7_Pos)
#define RADIO_DACNF_ENA7_Disabled (0UL)
#define RADIO_DACNF_ENA7_Enabled (1UL)

/* Bit 6 : Enable or disable device address matching using device address 6 */
#define RADIO_DACNF_ENA6_Pos (6UL)
#define RADIO_DACNF_ENA6_Msk (0x1UL << RADIO_DACNF_ENA6_Pos)
#define RADIO_DACNF_ENA6_Disabled (0UL)
#define RADIO_DACNF_ENA6_Enabled (1UL)

/* Bit 5 : Enable or disable device address matching using device address 5 */
#define RADIO_DACNF_ENA5_Pos (5UL)
#define RADIO_DACNF_ENA5_Msk (0x1UL << RADIO_DACNF_ENA5_Pos)
#define RADIO_DACNF_ENA5_Disabled (0UL)
#define RADIO_DACNF_ENA5_Enabled (1UL)

/* Bit 4 : Enable or disable device address matching using device address 4 */
#define RADIO_DACNF_ENA4_Pos (4UL)
#define RADIO_DACNF_ENA4_Msk (0x1UL << RADIO_DACNF_ENA4_Pos)
#define RADIO_DACNF_ENA4_Disabled (0UL)
#define RADIO_DACNF_ENA4_Enabled (1UL)

/* Bit 3 : Enable or disable device address matching using device address 3 */
#define RADIO_DACNF_ENA3_Pos (3UL)
#define RADIO_DACNF_ENA3_Msk (0x1UL << RADIO_DACNF_ENA3_Pos)
#define RADIO_DACNF_ENA3_Disabled (0UL)
#define RADIO_DACNF_ENA3_Enabled (1UL)

/* Bit 2 : Enable or disable device address matching using device address 2 */
#define RADIO_DACNF_ENA2_Pos (2UL)
#define RADIO_DACNF_ENA2_Msk (0x1UL << RADIO_DACNF_ENA2_Pos)
#define RADIO_DACNF_ENA2_Disabled (0UL)
#define RADIO_DACNF_ENA2_Enabled (1UL)

/* Bit 1 : Enable or disable device address matching using device address 1 */
#define RADIO_DACNF_ENA1_Pos (1UL)
#define RADIO_DACNF_ENA1_Msk (0x1UL << RADIO_DACNF_ENA1_Pos)
#define RADIO_DACNF_ENA1_Disabled (0UL)
#define RADIO_DACNF_ENA1_Enabled (1UL)

/* Bit 0 : Enable or disable device address matching using device address 0 */
#define RADIO_DACNF_ENA0_Pos (0UL)
#define RADIO_DACNF_ENA0_Msk (0x1UL << RADIO_DACNF_ENA0_Pos)
#define RADIO_DACNF_ENA0_Disabled (0UL)
#define RADIO_DACNF_ENA0_Enabled (1UL)

/* Register: RADIO_MHRMATCHCONF */
/* Description: Search pattern configuration */

/* Bits 31..0 : Search pattern configuration */
#define RADIO_MHRMATCHCONF_MHRMATCHCONF_Pos (0UL)
#define RADIO_MHRMATCHCONF_MHRMATCHCONF_Msk (0xFFFFFFFFUL << RADIO_MHRMATCHCONF_MHRMATCHCONF_Pos)

/* Register: RADIO_MHRMATCHMAS */
/* Description: Pattern mask */

/* Bits 31..0 : Pattern mask */
#define RADIO_MHRMATCHMAS_MHRMATCHMAS_Pos (0UL)
#define RADIO_MHRMATCHMAS_MHRMATCHMAS_Msk (0xFFFFFFFFUL << RADIO_MHRMATCHMAS_MHRMATCHMAS_Pos)

/* Register: RADIO_MODECNF0 */
/* Description: Radio mode configuration register 0 */

/* Bits 9..8 : Default TX value */
#define RADIO_MODECNF0_DTX_Pos (8UL)
#define RADIO_MODECNF0_DTX_Msk (0x3UL << RADIO_MODECNF0_DTX_Pos)
#define RADIO_MODECNF0_DTX_B1 (0UL)
#define RADIO_MODECNF0_DTX_B0 (1UL)
#define RADIO_MODECNF0_DTX_Center (2UL)

/* Bit 0 : Radio ramp-up time */
#define RADIO_MODECNF0_RU_Pos (0UL)
#define RADIO_MODECNF0_RU_Msk (0x1UL << RADIO_MODECNF0_RU_Pos)
#define RADIO_MODECNF0_RU_Default (0UL)
#define RADIO_MODECNF0_RU_Fast (1UL)

/* Register: RADIO_SFD */
/* Description: IEEE 802.15.4 start of frame delimiter */

/* Bits 7..0 : IEEE 802.15.4 start of frame delimiter */
#define RADIO_SFD_SFD_Pos (0UL)
#define RADIO_SFD_SFD_Msk (0xFFUL << RADIO_SFD_SFD_Pos)

/* Register: RADIO_EDCNT */
/* Description: IEEE 802.15.4 energy detect loop count */

/* Bits 20..0 : IEEE 802.15.4 energy detect loop count */
#define RADIO_EDCNT_EDCNT_Pos (0UL)
#define RADIO_EDCNT_EDCNT_Msk (0x1FFFFFUL << RADIO_EDCNT_EDCNT_Pos)

/* Register: RADIO_EDSAMPLE */
/* Description: IEEE 802.15.4 energy detect level */

/* Bits 7..0 : IEEE 802.15.4 energy detect level */
#define RADIO_EDSAMPLE_EDLVL_Pos (0UL)
#define RADIO_EDSAMPLE_EDLVL_Msk (0xFFUL << RADIO_EDSAMPLE_EDLVL_Pos)

/* Register: RADIO_CCACTRL */
/* Description: IEEE 802.15.4 clear channel assessment control */

/* Bits 31..24 : Limit for occurances above CCACORRTHRES. When not equal to zero the corrolator based signal detect is enabled. */
#define RADIO_CCACTRL_CCACORRCNT_Pos (24UL)
#define RADIO_CCACTRL_CCACORRCNT_Msk (0xFFUL << RADIO_CCACTRL_CCACORRCNT_Pos)

/* Bits 23..16 : CCA correlator busy threshold. Only relevant to CarrierMode, CarrierAndEdMode, and CarrierOrEdMode. */
#define RADIO_CCACTRL_CCACORRTHRES_Pos (16UL)
#define RADIO_CCACTRL_CCACORRTHRES_Msk (0xFFUL << RADIO_CCACTRL_CCACORRTHRES_Pos)

/* Bits 15..8 : CCA energy busy threshold. Used in all the CCA modes except CarrierMode. */
#define RADIO_CCACTRL_CCAEDTHRES_Pos (8UL)
#define RADIO_CCACTRL_CCAEDTHRES_Msk (0xFFUL << RADIO_CCACTRL_CCAEDTHRES_Pos)

/* Bits 2..0 : CCA mode of operation */
#define RADIO_CCACTRL_CCAMODE_Pos (0UL)
#define RADIO_CCACTRL_CCAMODE_Msk (0x7UL << RADIO_CCACTRL_CCAMODE_Pos)
#define RADIO_CCACTRL_CCAMODE_EdMode (0UL)
#define RADIO_CCACTRL_CCAMODE_CarrierMode (1UL)
#define RADIO_CCACTRL_CCAMODE_CarrierAndEdMode (2UL)
#define RADIO_CCACTRL_CCAMODE_CarrierOrEdMode (3UL)
#define RADIO_CCACTRL_CCAMODE_EdModeTest1 (4UL)

/* Register: RADIO_DFEMODE */
/* Description: Whether to use Angle-of-Arrival (AOA) or Angle-of-Departure (AOD) */

/* Bits 1..0 : Direction finding operation mode */
#define RADIO_DFEMODE_DFEOPMODE_Pos (0UL)
#define RADIO_DFEMODE_DFEOPMODE_Msk (0x3UL << RADIO_DFEMODE_DFEOPMODE_Pos)
#define RADIO_DFEMODE_DFEOPMODE_Disabled (0UL)
#define RADIO_DFEMODE_DFEOPMODE_AoD (2UL)
#define RADIO_DFEMODE_DFEOPMODE_AoA (3UL)

/* Register: RADIO_CTEINLINECONF */
/* Description: Configuration for CTE inline mode */

/* Bits 31..24 : S0 bit mask to set which bit to match */
#define RADIO_CTEINLINECONF_S0MASK_Pos (24UL)
#define RADIO_CTEINLINECONF_S0MASK_Msk (0xFFUL << RADIO_CTEINLINECONF_S0MASK_Pos)

/* Bits 23..16 : S0 bit pattern to match */
#define RADIO_CTEINLINECONF_S0CONF_Pos (16UL)
#define RADIO_CTEINLINECONF_S0CONF_Msk (0xFFUL << RADIO_CTEINLINECONF_S0CONF_Pos)

/* Bits 15..13 : Spacing between samples for the samples in the SWITCHING period when CTEINLINEMODE is set. */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_Pos (13UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_Msk (0x7UL << RADIO_CTEINLINECONF_CTEINLINERXMODE2US_Pos)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_4us (1UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_2us (2UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_1us (3UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_500ns (4UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_250ns (5UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_125ns (6UL)

/* Bits 12..10 : Spacing between samples for the samples in the SWITCHING period when CTEINLINEMODE is set. */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Pos (10UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Msk (0x7UL << RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Pos)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_4us (1UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_2us (2UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_1us (3UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_500ns (4UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_250ns (5UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_125ns (6UL)

/* Bits 7..6 : Max range of CTETime */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Pos (6UL)
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Msk (0x3UL << RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Pos)
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_20 (0UL)
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_31 (1UL)
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_63 (2UL)

/* Bit 4 : Sampling/switching if CRC is not OK */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Pos (4UL)
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Msk (0x1UL << RADIO_CTEINLINECONF_CTEERRORHANDLING_Pos)
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_No (0UL)
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Yes (1UL)

/* Bit 3 : CTEInfo is S1 byte or not */
#define RADIO_CTEINLINECONF_CTEINFOINS1_Pos (3UL)
#define RADIO_CTEINLINECONF_CTEINFOINS1_Msk (0x1UL << RADIO_CTEINLINECONF_CTEINFOINS1_Pos)
#define RADIO_CTEINLINECONF_CTEINFOINS1_NotInS1 (0UL)
#define RADIO_CTEINLINECONF_CTEINFOINS1_InS1 (1UL)

/* Bit 0 : Enable parsing of CTEInfo from received packet in BLE modes */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Pos (0UL)
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Msk (0x1UL << RADIO_CTEINLINECONF_CTEINLINECTRLEN_Pos)
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Disabled (0UL)
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Enabled (1UL)

/* Register: RADIO_DFECTRL1 */
/* Description: Various configuration for Direction finding */

/* Bits 27..24 : Gain will be lowered by the specified number of gain steps at the start of CTE */
#define RADIO_DFECTRL1_AGCBACKOFFGAIN_Pos (24UL)
#define RADIO_DFECTRL1_AGCBACKOFFGAIN_Msk (0xFUL << RADIO_DFECTRL1_AGCBACKOFFGAIN_Pos)

/* Bits 23..20 : Repeat each individual antenna pattern N times sequentially, i.e. P0, P0, P1, P1, P2, P2, P3, P3, etc. */
#define RADIO_DFECTRL1_REPEATPATTERN_Pos (20UL)
#define RADIO_DFECTRL1_REPEATPATTERN_Msk (0xFUL << RADIO_DFECTRL1_REPEATPATTERN_Pos)
#define RADIO_DFECTRL1_REPEATPATTERN_NoRepeat (0UL)

/* Bits 18..16 : Interval between samples in the SWITCHING period when CTEINLINECTRLEN is 0 */
#define RADIO_DFECTRL1_TSAMPLESPACING_Pos (16UL)
#define RADIO_DFECTRL1_TSAMPLESPACING_Msk (0x7UL << RADIO_DFECTRL1_TSAMPLESPACING_Pos)
#define RADIO_DFECTRL1_TSAMPLESPACING_4us (1UL)
#define RADIO_DFECTRL1_TSAMPLESPACING_2us (2UL)
#define RADIO_DFECTRL1_TSAMPLESPACING_1us (3UL)
#define RADIO_DFECTRL1_TSAMPLESPACING_500ns (4UL)
#define RADIO_DFECTRL1_TSAMPLESPACING_250ns (5UL)
#define RADIO_DFECTRL1_TSAMPLESPACING_125ns (6UL)

/* Bit 15 : Whether to sample I/Q or magnitude/phase */
#define RADIO_DFECTRL1_SAMPLETYPE_Pos (15UL)
#define RADIO_DFECTRL1_SAMPLETYPE_Msk (0x1UL << RADIO_DFECTRL1_SAMPLETYPE_Pos)
#define RADIO_DFECTRL1_SAMPLETYPE_IQ (0UL)
#define RADIO_DFECTRL1_SAMPLETYPE_MagPhase (1UL)

/* Bits 14..12 : Interval between samples in the REFERENCE period */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_Pos (12UL)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_Msk (0x7UL << RADIO_DFECTRL1_TSAMPLESPACINGREF_Pos)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_4us (1UL)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_2us (2UL)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_1us (3UL)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_500ns (4UL)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_250ns (5UL)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_125ns (6UL)

/* Bits 10..8 : Interval between every time the antenna is changed in the SWITCHING state */
#define RADIO_DFECTRL1_TSWITCHSPACING_Pos (8UL)
#define RADIO_DFECTRL1_TSWITCHSPACING_Msk (0x7UL << RADIO_DFECTRL1_TSWITCHSPACING_Pos)
#define RADIO_DFECTRL1_TSWITCHSPACING_4us (1UL)
#define RADIO_DFECTRL1_TSWITCHSPACING_2us (2UL)
#define RADIO_DFECTRL1_TSWITCHSPACING_1us (3UL)

/* Bit 7 : Add CTE extension and do antenna switching/sampling in this extension */
#define RADIO_DFECTRL1_DFEINEXTENSION_Pos (7UL)
#define RADIO_DFECTRL1_DFEINEXTENSION_Msk (0x1UL << RADIO_DFECTRL1_DFEINEXTENSION_Pos)
#define RADIO_DFECTRL1_DFEINEXTENSION_Payload (0UL)
#define RADIO_DFECTRL1_DFEINEXTENSION_CRC (1UL)

/* Bits 5..0 : Length of the AoA/AoD procedure in number of 8 us units */
#define RADIO_DFECTRL1_NUMBEROF8US_Pos (0UL)
#define RADIO_DFECTRL1_NUMBEROF8US_Msk (0x3FUL << RADIO_DFECTRL1_NUMBEROF8US_Pos)

/* Register: RADIO_DFECTRL2 */
/* Description: Start offset for Direction finding */

/* Bits 27..16 : Signed value offset before starting sampling in number of 16M cycles relative to the beginning of the REFERENCE state - 12 us after switching start */
#define RADIO_DFECTRL2_TSAMPLEOFFSET_Pos (16UL)
#define RADIO_DFECTRL2_TSAMPLEOFFSET_Msk (0xFFFUL << RADIO_DFECTRL2_TSAMPLEOFFSET_Pos)

/* Bits 12..0 : Signed value offset after the end of the CRC before starting switching in number of 16M cycles */
#define RADIO_DFECTRL2_TSWITCHOFFSET_Pos (0UL)
#define RADIO_DFECTRL2_TSWITCHOFFSET_Msk (0x1FFFUL << RADIO_DFECTRL2_TSWITCHOFFSET_Pos)

/* Register: RADIO_SWITCHPATTERN */
/* Description: GPIO patterns to be used for each antenna */

/* Bits 7..0 : Fill array of GPIO patterns for antenna control. */
#define RADIO_SWITCHPATTERN_SWITCHPATTERN_Pos (0UL)
#define RADIO_SWITCHPATTERN_SWITCHPATTERN_Msk (0xFFUL << RADIO_SWITCHPATTERN_SWITCHPATTERN_Pos)

/* Register: RADIO_CLEARPATTERN */
/* Description: Clear the GPIO pattern array for antenna control */

/* Bit 0 : Clears GPIO pattern array for antenna control */
#define RADIO_CLEARPATTERN_CLEARPATTERN_Pos (0UL)
#define RADIO_CLEARPATTERN_CLEARPATTERN_Msk (0x1UL << RADIO_CLEARPATTERN_CLEARPATTERN_Pos)
#define RADIO_CLEARPATTERN_CLEARPATTERN_Clear (1UL)

/* Register: RADIO_PSEL_DFEGPIO */
/* Description: Description collection: Pin select for DFE pin n */

/* Bit 31 : Connection */
#define RADIO_PSEL_DFEGPIO_CONNECT_Pos (31UL)
#define RADIO_PSEL_DFEGPIO_CONNECT_Msk (0x1UL << RADIO_PSEL_DFEGPIO_CONNECT_Pos)
#define RADIO_PSEL_DFEGPIO_CONNECT_Connected (0UL)
#define RADIO_PSEL_DFEGPIO_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define RADIO_PSEL_DFEGPIO_PORT_Pos (5UL)
#define RADIO_PSEL_DFEGPIO_PORT_Msk (0x1UL << RADIO_PSEL_DFEGPIO_PORT_Pos)

/* Bits 4..0 : Pin number */
#define RADIO_PSEL_DFEGPIO_PIN_Pos (0UL)
#define RADIO_PSEL_DFEGPIO_PIN_Msk (0x1FUL << RADIO_PSEL_DFEGPIO_PIN_Pos)

/* Register: RADIO_DFEPACKET_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define RADIO_DFEPACKET_PTR_PTR_Pos (0UL)
#define RADIO_DFEPACKET_PTR_PTR_Msk (0xFFFFFFFFUL << RADIO_DFEPACKET_PTR_PTR_Pos)

/* Register: RADIO_DFEPACKET_MAXCNT */
/* Description: Maximum number of buffer words to transfer */

/* Bits 13..0 : Maximum number of buffer words to transfer */
#define RADIO_DFEPACKET_MAXCNT_MAXCNT_Pos (0UL)
#define RADIO_DFEPACKET_MAXCNT_MAXCNT_Msk (0x3FFFUL << RADIO_DFEPACKET_MAXCNT_MAXCNT_Pos)

/* Register: RADIO_DFEPACKET_AMOUNT */
/* Description: Number of samples transferred in the last transaction */

/* Bits 15..0 : Number of samples transferred in the last transaction */
#define RADIO_DFEPACKET_AMOUNT_AMOUNT_Pos (0UL)
#define RADIO_DFEPACKET_AMOUNT_AMOUNT_Msk (0xFFFFUL << RADIO_DFEPACKET_AMOUNT_AMOUNT_Pos)

/* Register: RADIO_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define RADIO_POWER_POWER_Pos (0UL)
#define RADIO_POWER_POWER_Msk (0x1UL << RADIO_POWER_POWER_Pos)
#define RADIO_POWER_POWER_Disabled (0UL)
#define RADIO_POWER_POWER_Enabled (1UL)


/* Peripheral: RNG */
/* Description: Random Number Generator */

/* Register: RNG_TASKS_START */
/* Description: Task starting the random number generator */

/* Bit 0 : Task starting the random number generator */
#define RNG_TASKS_START_TASKS_START_Pos (0UL)
#define RNG_TASKS_START_TASKS_START_Msk (0x1UL << RNG_TASKS_START_TASKS_START_Pos)
#define RNG_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: RNG_TASKS_STOP */
/* Description: Task stopping the random number generator */

/* Bit 0 : Task stopping the random number generator */
#define RNG_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define RNG_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RNG_TASKS_STOP_TASKS_STOP_Pos)
#define RNG_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: RNG_EVENTS_VALRDY */
/* Description: Event being generated for every new random number written to the VALUE register */

/* Bit 0 : Event being generated for every new random number written to the VALUE register */
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Pos (0UL)
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Msk (0x1UL << RNG_EVENTS_VALRDY_EVENTS_VALRDY_Pos)
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_NotGenerated (0UL)
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Generated (1UL)

/* Register: RNG_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 0 : Shortcut between event VALRDY and task STOP */
#define RNG_SHORTS_VALRDY_STOP_Pos (0UL)
#define RNG_SHORTS_VALRDY_STOP_Msk (0x1UL << RNG_SHORTS_VALRDY_STOP_Pos)
#define RNG_SHORTS_VALRDY_STOP_Disabled (0UL)
#define RNG_SHORTS_VALRDY_STOP_Enabled (1UL)

/* Register: RNG_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event VALRDY */
#define RNG_INTENSET_VALRDY_Pos (0UL)
#define RNG_INTENSET_VALRDY_Msk (0x1UL << RNG_INTENSET_VALRDY_Pos)
#define RNG_INTENSET_VALRDY_Disabled (0UL)
#define RNG_INTENSET_VALRDY_Enabled (1UL)
#define RNG_INTENSET_VALRDY_Set (1UL)

/* Register: RNG_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event VALRDY */
#define RNG_INTENCLR_VALRDY_Pos (0UL)
#define RNG_INTENCLR_VALRDY_Msk (0x1UL << RNG_INTENCLR_VALRDY_Pos)
#define RNG_INTENCLR_VALRDY_Disabled (0UL)
#define RNG_INTENCLR_VALRDY_Enabled (1UL)
#define RNG_INTENCLR_VALRDY_Clear (1UL)

/* Register: RNG_CONFIG */
/* Description: Configuration register */

/* Bit 0 : Bias correction */
#define RNG_CONFIG_DERCEN_Pos (0UL)
#define RNG_CONFIG_DERCEN_Msk (0x1UL << RNG_CONFIG_DERCEN_Pos)
#define RNG_CONFIG_DERCEN_Disabled (0UL)
#define RNG_CONFIG_DERCEN_Enabled (1UL)

/* Register: RNG_VALUE */
/* Description: Output random number */

/* Bits 7..0 : Generated random number */
#define RNG_VALUE_VALUE_Pos (0UL)
#define RNG_VALUE_VALUE_Msk (0xFFUL << RNG_VALUE_VALUE_Pos)


/* Peripheral: RTC */
/* Description: Real time counter 0 */

/* Register: RTC_TASKS_START */
/* Description: Start RTC COUNTER */

/* Bit 0 : Start RTC COUNTER */
#define RTC_TASKS_START_TASKS_START_Pos (0UL)
#define RTC_TASKS_START_TASKS_START_Msk (0x1UL << RTC_TASKS_START_TASKS_START_Pos)
#define RTC_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: RTC_TASKS_STOP */
/* Description: Stop RTC COUNTER */

/* Bit 0 : Stop RTC COUNTER */
#define RTC_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define RTC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RTC_TASKS_STOP_TASKS_STOP_Pos)
#define RTC_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: RTC_TASKS_CLEAR */
/* Description: Clear RTC COUNTER */

/* Bit 0 : Clear RTC COUNTER */
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Pos (0UL)
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Msk (0x1UL << RTC_TASKS_CLEAR_TASKS_CLEAR_Pos)
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Trigger (1UL)

/* Register: RTC_TASKS_TRIGOVRFLW */
/* Description: Set COUNTER to 0xFFFFF0 */

/* Bit 0 : Set COUNTER to 0xFFFFF0 */
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Pos (0UL)
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Msk (0x1UL << RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Pos)
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Trigger (1UL)

/* Register: RTC_EVENTS_TICK */
/* Description: Event on COUNTER increment */

/* Bit 0 : Event on COUNTER increment */
#define RTC_EVENTS_TICK_EVENTS_TICK_Pos (0UL)
#define RTC_EVENTS_TICK_EVENTS_TICK_Msk (0x1UL << RTC_EVENTS_TICK_EVENTS_TICK_Pos)
#define RTC_EVENTS_TICK_EVENTS_TICK_NotGenerated (0UL)
#define RTC_EVENTS_TICK_EVENTS_TICK_Generated (1UL)

/* Register: RTC_EVENTS_OVRFLW */
/* Description: Event on COUNTER overflow */

/* Bit 0 : Event on COUNTER overflow */
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Pos (0UL)
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Msk (0x1UL << RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Pos)
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_NotGenerated (0UL)
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Generated (1UL)

/* Register: RTC_EVENTS_COMPARE */
/* Description: Description collection: Compare event on CC[n] match */

/* Bit 0 : Compare event on CC[n] match */
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Pos (0UL)
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Msk (0x1UL << RTC_EVENTS_COMPARE_EVENTS_COMPARE_Pos)
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_NotGenerated (0UL)
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Generated (1UL)

/* Register: RTC_INTENSET */
/* Description: Enable interrupt */

/* Bit 19 : Write '1' to enable interrupt for event COMPARE[3] */
#define RTC_INTENSET_COMPARE3_Pos (19UL)
#define RTC_INTENSET_COMPARE3_Msk (0x1UL << RTC_INTENSET_COMPARE3_Pos)
#define RTC_INTENSET_COMPARE3_Disabled (0UL)
#define RTC_INTENSET_COMPARE3_Enabled (1UL)
#define RTC_INTENSET_COMPARE3_Set (1UL)

/* Bit 18 : Write '1' to enable interrupt for event COMPARE[2] */
#define RTC_INTENSET_COMPARE2_Pos (18UL)
#define RTC_INTENSET_COMPARE2_Msk (0x1UL << RTC_INTENSET_COMPARE2_Pos)
#define RTC_INTENSET_COMPARE2_Disabled (0UL)
#define RTC_INTENSET_COMPARE2_Enabled (1UL)
#define RTC_INTENSET_COMPARE2_Set (1UL)

/* Bit 17 : Write '1' to enable interrupt for event COMPARE[1] */
#define RTC_INTENSET_COMPARE1_Pos (17UL)
#define RTC_INTENSET_COMPARE1_Msk (0x1UL << RTC_INTENSET_COMPARE1_Pos)
#define RTC_INTENSET_COMPARE1_Disabled (0UL)
#define RTC_INTENSET_COMPARE1_Enabled (1UL)
#define RTC_INTENSET_COMPARE1_Set (1UL)

/* Bit 16 : Write '1' to enable interrupt for event COMPARE[0] */
#define RTC_INTENSET_COMPARE0_Pos (16UL)
#define RTC_INTENSET_COMPARE0_Msk (0x1UL << RTC_INTENSET_COMPARE0_Pos)
#define RTC_INTENSET_COMPARE0_Disabled (0UL)
#define RTC_INTENSET_COMPARE0_Enabled (1UL)
#define RTC_INTENSET_COMPARE0_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event OVRFLW */
#define RTC_INTENSET_OVRFLW_Pos (1UL)
#define RTC_INTENSET_OVRFLW_Msk (0x1UL << RTC_INTENSET_OVRFLW_Pos)
#define RTC_INTENSET_OVRFLW_Disabled (0UL)
#define RTC_INTENSET_OVRFLW_Enabled (1UL)
#define RTC_INTENSET_OVRFLW_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event TICK */
#define RTC_INTENSET_TICK_Pos (0UL)
#define RTC_INTENSET_TICK_Msk (0x1UL << RTC_INTENSET_TICK_Pos)
#define RTC_INTENSET_TICK_Disabled (0UL)
#define RTC_INTENSET_TICK_Enabled (1UL)
#define RTC_INTENSET_TICK_Set (1UL)

/* Register: RTC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 19 : Write '1' to disable interrupt for event COMPARE[3] */
#define RTC_INTENCLR_COMPARE3_Pos (19UL)
#define RTC_INTENCLR_COMPARE3_Msk (0x1UL << RTC_INTENCLR_COMPARE3_Pos)
#define RTC_INTENCLR_COMPARE3_Disabled (0UL)
#define RTC_INTENCLR_COMPARE3_Enabled (1UL)
#define RTC_INTENCLR_COMPARE3_Clear (1UL)

/* Bit 18 : Write '1' to disable interrupt for event COMPARE[2] */
#define RTC_INTENCLR_COMPARE2_Pos (18UL)
#define RTC_INTENCLR_COMPARE2_Msk (0x1UL << RTC_INTENCLR_COMPARE2_Pos)
#define RTC_INTENCLR_COMPARE2_Disabled (0UL)
#define RTC_INTENCLR_COMPARE2_Enabled (1UL)
#define RTC_INTENCLR_COMPARE2_Clear (1UL)

/* Bit 17 : Write '1' to disable interrupt for event COMPARE[1] */
#define RTC_INTENCLR_COMPARE1_Pos (17UL)
#define RTC_INTENCLR_COMPARE1_Msk (0x1UL << RTC_INTENCLR_COMPARE1_Pos)
#define RTC_INTENCLR_COMPARE1_Disabled (0UL)
#define RTC_INTENCLR_COMPARE1_Enabled (1UL)
#define RTC_INTENCLR_COMPARE1_Clear (1UL)

/* Bit 16 : Write '1' to disable interrupt for event COMPARE[0] */
#define RTC_INTENCLR_COMPARE0_Pos (16UL)
#define RTC_INTENCLR_COMPARE0_Msk (0x1UL << RTC_INTENCLR_COMPARE0_Pos)
#define RTC_INTENCLR_COMPARE0_Disabled (0UL)
#define RTC_INTENCLR_COMPARE0_Enabled (1UL)
#define RTC_INTENCLR_COMPARE0_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event OVRFLW */
#define RTC_INTENCLR_OVRFLW_Pos (1UL)
#define RTC_INTENCLR_OVRFLW_Msk (0x1UL << RTC_INTENCLR_OVRFLW_Pos)
#define RTC_INTENCLR_OVRFLW_Disabled (0UL)
#define RTC_INTENCLR_OVRFLW_Enabled (1UL)
#define RTC_INTENCLR_OVRFLW_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event TICK */
#define RTC_INTENCLR_TICK_Pos (0UL)
#define RTC_INTENCLR_TICK_Msk (0x1UL << RTC_INTENCLR_TICK_Pos)
#define RTC_INTENCLR_TICK_Disabled (0UL)
#define RTC_INTENCLR_TICK_Enabled (1UL)
#define RTC_INTENCLR_TICK_Clear (1UL)

/* Register: RTC_EVTEN */
/* Description: Enable or disable event routing */

/* Bit 19 : Enable or disable event routing for event COMPARE[3] */
#define RTC_EVTEN_COMPARE3_Pos (19UL)
#define RTC_EVTEN_COMPARE3_Msk (0x1UL << RTC_EVTEN_COMPARE3_Pos)
#define RTC_EVTEN_COMPARE3_Disabled (0UL)
#define RTC_EVTEN_COMPARE3_Enabled (1UL)

/* Bit 18 : Enable or disable event routing for event COMPARE[2] */
#define RTC_EVTEN_COMPARE2_Pos (18UL)
#define RTC_EVTEN_COMPARE2_Msk (0x1UL << RTC_EVTEN_COMPARE2_Pos)
#define RTC_EVTEN_COMPARE2_Disabled (0UL)
#define RTC_EVTEN_COMPARE2_Enabled (1UL)

/* Bit 17 : Enable or disable event routing for event COMPARE[1] */
#define RTC_EVTEN_COMPARE1_Pos (17UL)
#define RTC_EVTEN_COMPARE1_Msk (0x1UL << RTC_EVTEN_COMPARE1_Pos)
#define RTC_EVTEN_COMPARE1_Disabled (0UL)
#define RTC_EVTEN_COMPARE1_Enabled (1UL)

/* Bit 16 : Enable or disable event routing for event COMPARE[0] */
#define RTC_EVTEN_COMPARE0_Pos (16UL)
#define RTC_EVTEN_COMPARE0_Msk (0x1UL << RTC_EVTEN_COMPARE0_Pos)
#define RTC_EVTEN_COMPARE0_Disabled (0UL)
#define RTC_EVTEN_COMPARE0_Enabled (1UL)

/* Bit 1 : Enable or disable event routing for event OVRFLW */
#define RTC_EVTEN_OVRFLW_Pos (1UL)
#define RTC_EVTEN_OVRFLW_Msk (0x1UL << RTC_EVTEN_OVRFLW_Pos)
#define RTC_EVTEN_OVRFLW_Disabled (0UL)
#define RTC_EVTEN_OVRFLW_Enabled (1UL)

/* Bit 0 : Enable or disable event routing for event TICK */
#define RTC_EVTEN_TICK_Pos (0UL)
#define RTC_EVTEN_TICK_Msk (0x1UL << RTC_EVTEN_TICK_Pos)
#define RTC_EVTEN_TICK_Disabled (0UL)
#define RTC_EVTEN_TICK_Enabled (1UL)

/* Register: RTC_EVTENSET */
/* Description: Enable event routing */

/* Bit 19 : Write '1' to enable event routing for event COMPARE[3] */
#define RTC_EVTENSET_COMPARE3_Pos (19UL)
#define RTC_EVTENSET_COMPARE3_Msk (0x1UL << RTC_EVTENSET_COMPARE3_Pos)
#define RTC_EVTENSET_COMPARE3_Disabled (0UL)
#define RTC_EVTENSET_COMPARE3_Enabled (1UL)
#define RTC_EVTENSET_COMPARE3_Set (1UL)

/* Bit 18 : Write '1' to enable event routing for event COMPARE[2] */
#define RTC_EVTENSET_COMPARE2_Pos (18UL)
#define RTC_EVTENSET_COMPARE2_Msk (0x1UL << RTC_EVTENSET_COMPARE2_Pos)
#define RTC_EVTENSET_COMPARE2_Disabled (0UL)
#define RTC_EVTENSET_COMPARE2_Enabled (1UL)
#define RTC_EVTENSET_COMPARE2_Set (1UL)

/* Bit 17 : Write '1' to enable event routing for event COMPARE[1] */
#define RTC_EVTENSET_COMPARE1_Pos (17UL)
#define RTC_EVTENSET_COMPARE1_Msk (0x1UL << RTC_EVTENSET_COMPARE1_Pos)
#define RTC_EVTENSET_COMPARE1_Disabled (0UL)
#define RTC_EVTENSET_COMPARE1_Enabled (1UL)
#define RTC_EVTENSET_COMPARE1_Set (1UL)

/* Bit 16 : Write '1' to enable event routing for event COMPARE[0] */
#define RTC_EVTENSET_COMPARE0_Pos (16UL)
#define RTC_EVTENSET_COMPARE0_Msk (0x1UL << RTC_EVTENSET_COMPARE0_Pos)
#define RTC_EVTENSET_COMPARE0_Disabled (0UL)
#define RTC_EVTENSET_COMPARE0_Enabled (1UL)
#define RTC_EVTENSET_COMPARE0_Set (1UL)

/* Bit 1 : Write '1' to enable event routing for event OVRFLW */
#define RTC_EVTENSET_OVRFLW_Pos (1UL)
#define RTC_EVTENSET_OVRFLW_Msk (0x1UL << RTC_EVTENSET_OVRFLW_Pos)
#define RTC_EVTENSET_OVRFLW_Disabled (0UL)
#define RTC_EVTENSET_OVRFLW_Enabled (1UL)
#define RTC_EVTENSET_OVRFLW_Set (1UL)

/* Bit 0 : Write '1' to enable event routing for event TICK */
#define RTC_EVTENSET_TICK_Pos (0UL)
#define RTC_EVTENSET_TICK_Msk (0x1UL << RTC_EVTENSET_TICK_Pos)
#define RTC_EVTENSET_TICK_Disabled (0UL)
#define RTC_EVTENSET_TICK_Enabled (1UL)
#define RTC_EVTENSET_TICK_Set (1UL)

/* Register: RTC_EVTENCLR */
/* Description: Disable event routing */

/* Bit 19 : Write '1' to disable event routing for event COMPARE[3] */
#define RTC_EVTENCLR_COMPARE3_Pos (19UL)
#define RTC_EVTENCLR_COMPARE3_Msk (0x1UL << RTC_EVTENCLR_COMPARE3_Pos)
#define RTC_EVTENCLR_COMPARE3_Disabled (0UL)
#define RTC_EVTENCLR_COMPARE3_Enabled (1UL)
#define RTC_EVTENCLR_COMPARE3_Clear (1UL)

/* Bit 18 : Write '1' to disable event routing for event COMPARE[2] */
#define RTC_EVTENCLR_COMPARE2_Pos (18UL)
#define RTC_EVTENCLR_COMPARE2_Msk (0x1UL << RTC_EVTENCLR_COMPARE2_Pos)
#define RTC_EVTENCLR_COMPARE2_Disabled (0UL)
#define RTC_EVTENCLR_COMPARE2_Enabled (1UL)
#define RTC_EVTENCLR_COMPARE2_Clear (1UL)

/* Bit 17 : Write '1' to disable event routing for event COMPARE[1] */
#define RTC_EVTENCLR_COMPARE1_Pos (17UL)
#define RTC_EVTENCLR_COMPARE1_Msk (0x1UL << RTC_EVTENCLR_COMPARE1_Pos)
#define RTC_EVTENCLR_COMPARE1_Disabled (0UL)
#define RTC_EVTENCLR_COMPARE1_Enabled (1UL)
#define RTC_EVTENCLR_COMPARE1_Clear (1UL)

/* Bit 16 : Write '1' to disable event routing for event COMPARE[0] */
#define RTC_EVTENCLR_COMPARE0_Pos (16UL)
#define RTC_EVTENCLR_COMPARE0_Msk (0x1UL << RTC_EVTENCLR_COMPARE0_Pos)
#define RTC_EVTENCLR_COMPARE0_Disabled (0UL)
#define RTC_EVTENCLR_COMPARE0_Enabled (1UL)
#define RTC_EVTENCLR_COMPARE0_Clear (1UL)

/* Bit 1 : Write '1' to disable event routing for event OVRFLW */
#define RTC_EVTENCLR_OVRFLW_Pos (1UL)
#define RTC_EVTENCLR_OVRFLW_Msk (0x1UL << RTC_EVTENCLR_OVRFLW_Pos)
#define RTC_EVTENCLR_OVRFLW_Disabled (0UL)
#define RTC_EVTENCLR_OVRFLW_Enabled (1UL)
#define RTC_EVTENCLR_OVRFLW_Clear (1UL)

/* Bit 0 : Write '1' to disable event routing for event TICK */
#define RTC_EVTENCLR_TICK_Pos (0UL)
#define RTC_EVTENCLR_TICK_Msk (0x1UL << RTC_EVTENCLR_TICK_Pos)
#define RTC_EVTENCLR_TICK_Disabled (0UL)
#define RTC_EVTENCLR_TICK_Enabled (1UL)
#define RTC_EVTENCLR_TICK_Clear (1UL)

/* Register: RTC_COUNTER */
/* Description: Current COUNTER value */

/* Bits 23..0 : Counter value */
#define RTC_COUNTER_COUNTER_Pos (0UL)
#define RTC_COUNTER_COUNTER_Msk (0xFFFFFFUL << RTC_COUNTER_COUNTER_Pos)

/* Register: RTC_PRESCALER */
/* Description: 12 bit prescaler for COUNTER frequency (32768/(PRESCALER+1)). Must be written when RTC is stopped. */

/* Bits 11..0 : Prescaler value */
#define RTC_PRESCALER_PRESCALER_Pos (0UL)
#define RTC_PRESCALER_PRESCALER_Msk (0xFFFUL << RTC_PRESCALER_PRESCALER_Pos)

/* Register: RTC_CC */
/* Description: Description collection: Compare register n */

/* Bits 23..0 : Compare value */
#define RTC_CC_COMPARE_Pos (0UL)
#define RTC_CC_COMPARE_Msk (0xFFFFFFUL << RTC_CC_COMPARE_Pos)


/* Peripheral: SAADC */
/* Description: Successive approximation register (SAR) analog-to-digital converter */

/* Register: SAADC_TASKS_START */
/* Description: Starts the SAADC and prepares the result buffer in RAM */

/* Bit 0 : Starts the SAADC and prepares the result buffer in RAM */
#define SAADC_TASKS_START_TASKS_START_Pos (0UL)
#define SAADC_TASKS_START_TASKS_START_Msk (0x1UL << SAADC_TASKS_START_TASKS_START_Pos)
#define SAADC_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: SAADC_TASKS_SAMPLE */
/* Description: Takes one SAADC sample */

/* Bit 0 : Takes one SAADC sample */
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL)
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Pos)
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Trigger (1UL)

/* Register: SAADC_TASKS_STOP */
/* Description: Stops the SAADC and terminates all on-going conversions */

/* Bit 0 : Stops the SAADC and terminates all on-going conversions */
#define SAADC_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define SAADC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << SAADC_TASKS_STOP_TASKS_STOP_Pos)
#define SAADC_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: SAADC_TASKS_CALIBRATEOFFSET */
/* Description: Starts offset auto-calibration */

/* Bit 0 : Starts offset auto-calibration */
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Pos (0UL)
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Msk (0x1UL << SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Pos)
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Trigger (1UL)

/* Register: SAADC_EVENTS_STARTED */
/* Description: The SAADC has started */

/* Bit 0 : The SAADC has started */
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << SAADC_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0UL)
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Generated (1UL)

/* Register: SAADC_EVENTS_END */
/* Description: The SAADC has filled up the result buffer */

/* Bit 0 : The SAADC has filled up the result buffer */
#define SAADC_EVENTS_END_EVENTS_END_Pos (0UL)
#define SAADC_EVENTS_END_EVENTS_END_Msk (0x1UL << SAADC_EVENTS_END_EVENTS_END_Pos)
#define SAADC_EVENTS_END_EVENTS_END_NotGenerated (0UL)
#define SAADC_EVENTS_END_EVENTS_END_Generated (1UL)

/* Register: SAADC_EVENTS_DONE */
/* Description: A conversion task has been completed. Depending on the configuration, multiple conversions might be needed for a result to be transferred to RAM. */

/* Bit 0 : A conversion task has been completed. Depending on the configuration, multiple conversions might be needed for a result to be transferred to RAM. */
#define SAADC_EVENTS_DONE_EVENTS_DONE_Pos (0UL)
#define SAADC_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << SAADC_EVENTS_DONE_EVENTS_DONE_Pos)
#define SAADC_EVENTS_DONE_EVENTS_DONE_NotGenerated (0UL)
#define SAADC_EVENTS_DONE_EVENTS_DONE_Generated (1UL)

/* Register: SAADC_EVENTS_RESULTDONE */
/* Description: Result ready for transfer to RAM */

/* Bit 0 : Result ready for transfer to RAM */
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Pos (0UL)
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Msk (0x1UL << SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Pos)
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_NotGenerated (0UL)
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Generated (1UL)

/* Register: SAADC_EVENTS_CALIBRATEDONE */
/* Description: Calibration is complete */

/* Bit 0 : Calibration is complete */
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Pos (0UL)
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Msk (0x1UL << SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Pos)
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_NotGenerated (0UL)
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Generated (1UL)

/* Register: SAADC_EVENTS_STOPPED */
/* Description: The SAADC has stopped */

/* Bit 0 : The SAADC has stopped */
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)

/* Register: SAADC_EVENTS_CH_LIMITH */
/* Description: Description cluster: Last result is equal or above CH[n].LIMIT.HIGH */

/* Bit 0 : Last result is equal or above CH[n].LIMIT.HIGH */
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Pos (0UL)
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Msk (0x1UL << SAADC_EVENTS_CH_LIMITH_LIMITH_Pos)
#define SAADC_EVENTS_CH_LIMITH_LIMITH_NotGenerated (0UL)
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Generated (1UL)

/* Register: SAADC_EVENTS_CH_LIMITL */
/* Description: Description cluster: Last result is equal or below CH[n].LIMIT.LOW */

/* Bit 0 : Last result is equal or below CH[n].LIMIT.LOW */
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Pos (0UL)
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Msk (0x1UL << SAADC_EVENTS_CH_LIMITL_LIMITL_Pos)
#define SAADC_EVENTS_CH_LIMITL_LIMITL_NotGenerated (0UL)
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Generated (1UL)

/* Register: SAADC_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 21 : Enable or disable interrupt for event CH7LIMITL */
#define SAADC_INTEN_CH7LIMITL_Pos (21UL)
#define SAADC_INTEN_CH7LIMITL_Msk (0x1UL << SAADC_INTEN_CH7LIMITL_Pos)
#define SAADC_INTEN_CH7LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH7LIMITL_Enabled (1UL)

/* Bit 20 : Enable or disable interrupt for event CH7LIMITH */
#define SAADC_INTEN_CH7LIMITH_Pos (20UL)
#define SAADC_INTEN_CH7LIMITH_Msk (0x1UL << SAADC_INTEN_CH7LIMITH_Pos)
#define SAADC_INTEN_CH7LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH7LIMITH_Enabled (1UL)

/* Bit 19 : Enable or disable interrupt for event CH6LIMITL */
#define SAADC_INTEN_CH6LIMITL_Pos (19UL)
#define SAADC_INTEN_CH6LIMITL_Msk (0x1UL << SAADC_INTEN_CH6LIMITL_Pos)
#define SAADC_INTEN_CH6LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH6LIMITL_Enabled (1UL)

/* Bit 18 : Enable or disable interrupt for event CH6LIMITH */
#define SAADC_INTEN_CH6LIMITH_Pos (18UL)
#define SAADC_INTEN_CH6LIMITH_Msk (0x1UL << SAADC_INTEN_CH6LIMITH_Pos)
#define SAADC_INTEN_CH6LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH6LIMITH_Enabled (1UL)

/* Bit 17 : Enable or disable interrupt for event CH5LIMITL */
#define SAADC_INTEN_CH5LIMITL_Pos (17UL)
#define SAADC_INTEN_CH5LIMITL_Msk (0x1UL << SAADC_INTEN_CH5LIMITL_Pos)
#define SAADC_INTEN_CH5LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH5LIMITL_Enabled (1UL)

/* Bit 16 : Enable or disable interrupt for event CH5LIMITH */
#define SAADC_INTEN_CH5LIMITH_Pos (16UL)
#define SAADC_INTEN_CH5LIMITH_Msk (0x1UL << SAADC_INTEN_CH5LIMITH_Pos)
#define SAADC_INTEN_CH5LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH5LIMITH_Enabled (1UL)

/* Bit 15 : Enable or disable interrupt for event CH4LIMITL */
#define SAADC_INTEN_CH4LIMITL_Pos (15UL)
#define SAADC_INTEN_CH4LIMITL_Msk (0x1UL << SAADC_INTEN_CH4LIMITL_Pos)
#define SAADC_INTEN_CH4LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH4LIMITL_Enabled (1UL)

/* Bit 14 : Enable or disable interrupt for event CH4LIMITH */
#define SAADC_INTEN_CH4LIMITH_Pos (14UL)
#define SAADC_INTEN_CH4LIMITH_Msk (0x1UL << SAADC_INTEN_CH4LIMITH_Pos)
#define SAADC_INTEN_CH4LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH4LIMITH_Enabled (1UL)

/* Bit 13 : Enable or disable interrupt for event CH3LIMITL */
#define SAADC_INTEN_CH3LIMITL_Pos (13UL)
#define SAADC_INTEN_CH3LIMITL_Msk (0x1UL << SAADC_INTEN_CH3LIMITL_Pos)
#define SAADC_INTEN_CH3LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH3LIMITL_Enabled (1UL)

/* Bit 12 : Enable or disable interrupt for event CH3LIMITH */
#define SAADC_INTEN_CH3LIMITH_Pos (12UL)
#define SAADC_INTEN_CH3LIMITH_Msk (0x1UL << SAADC_INTEN_CH3LIMITH_Pos)
#define SAADC_INTEN_CH3LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH3LIMITH_Enabled (1UL)

/* Bit 11 : Enable or disable interrupt for event CH2LIMITL */
#define SAADC_INTEN_CH2LIMITL_Pos (11UL)
#define SAADC_INTEN_CH2LIMITL_Msk (0x1UL << SAADC_INTEN_CH2LIMITL_Pos)
#define SAADC_INTEN_CH2LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH2LIMITL_Enabled (1UL)

/* Bit 10 : Enable or disable interrupt for event CH2LIMITH */
#define SAADC_INTEN_CH2LIMITH_Pos (10UL)
#define SAADC_INTEN_CH2LIMITH_Msk (0x1UL << SAADC_INTEN_CH2LIMITH_Pos)
#define SAADC_INTEN_CH2LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH2LIMITH_Enabled (1UL)

/* Bit 9 : Enable or disable interrupt for event CH1LIMITL */
#define SAADC_INTEN_CH1LIMITL_Pos (9UL)
#define SAADC_INTEN_CH1LIMITL_Msk (0x1UL << SAADC_INTEN_CH1LIMITL_Pos)
#define SAADC_INTEN_CH1LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH1LIMITL_Enabled (1UL)

/* Bit 8 : Enable or disable interrupt for event CH1LIMITH */
#define SAADC_INTEN_CH1LIMITH_Pos (8UL)
#define SAADC_INTEN_CH1LIMITH_Msk (0x1UL << SAADC_INTEN_CH1LIMITH_Pos)
#define SAADC_INTEN_CH1LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH1LIMITH_Enabled (1UL)

/* Bit 7 : Enable or disable interrupt for event CH0LIMITL */
#define SAADC_INTEN_CH0LIMITL_Pos (7UL)
#define SAADC_INTEN_CH0LIMITL_Msk (0x1UL << SAADC_INTEN_CH0LIMITL_Pos)
#define SAADC_INTEN_CH0LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH0LIMITL_Enabled (1UL)

/* Bit 6 : Enable or disable interrupt for event CH0LIMITH */
#define SAADC_INTEN_CH0LIMITH_Pos (6UL)
#define SAADC_INTEN_CH0LIMITH_Msk (0x1UL << SAADC_INTEN_CH0LIMITH_Pos)
#define SAADC_INTEN_CH0LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH0LIMITH_Enabled (1UL)

/* Bit 5 : Enable or disable interrupt for event STOPPED */
#define SAADC_INTEN_STOPPED_Pos (5UL)
#define SAADC_INTEN_STOPPED_Msk (0x1UL << SAADC_INTEN_STOPPED_Pos)
#define SAADC_INTEN_STOPPED_Disabled (0UL)
#define SAADC_INTEN_STOPPED_Enabled (1UL)

/* Bit 4 : Enable or disable interrupt for event CALIBRATEDONE */
#define SAADC_INTEN_CALIBRATEDONE_Pos (4UL)
#define SAADC_INTEN_CALIBRATEDONE_Msk (0x1UL << SAADC_INTEN_CALIBRATEDONE_Pos)
#define SAADC_INTEN_CALIBRATEDONE_Disabled (0UL)
#define SAADC_INTEN_CALIBRATEDONE_Enabled (1UL)

/* Bit 3 : Enable or disable interrupt for event RESULTDONE */
#define SAADC_INTEN_RESULTDONE_Pos (3UL)
#define SAADC_INTEN_RESULTDONE_Msk (0x1UL << SAADC_INTEN_RESULTDONE_Pos)
#define SAADC_INTEN_RESULTDONE_Disabled (0UL)
#define SAADC_INTEN_RESULTDONE_Enabled (1UL)

/* Bit 2 : Enable or disable interrupt for event DONE */
#define SAADC_INTEN_DONE_Pos (2UL)
#define SAADC_INTEN_DONE_Msk (0x1UL << SAADC_INTEN_DONE_Pos)
#define SAADC_INTEN_DONE_Disabled (0UL)
#define SAADC_INTEN_DONE_Enabled (1UL)

/* Bit 1 : Enable or disable interrupt for event END */
#define SAADC_INTEN_END_Pos (1UL)
#define SAADC_INTEN_END_Msk (0x1UL << SAADC_INTEN_END_Pos)
#define SAADC_INTEN_END_Disabled (0UL)
#define SAADC_INTEN_END_Enabled (1UL)

/* Bit 0 : Enable or disable interrupt for event STARTED */
#define SAADC_INTEN_STARTED_Pos (0UL)
#define SAADC_INTEN_STARTED_Msk (0x1UL << SAADC_INTEN_STARTED_Pos)
#define SAADC_INTEN_STARTED_Disabled (0UL)
#define SAADC_INTEN_STARTED_Enabled (1UL)

/* Register: SAADC_INTENSET */
/* Description: Enable interrupt */

/* Bit 21 : Write '1' to enable interrupt for event CH7LIMITL */
#define SAADC_INTENSET_CH7LIMITL_Pos (21UL)
#define SAADC_INTENSET_CH7LIMITL_Msk (0x1UL << SAADC_INTENSET_CH7LIMITL_Pos)
#define SAADC_INTENSET_CH7LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH7LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH7LIMITL_Set (1UL)

/* Bit 20 : Write '1' to enable interrupt for event CH7LIMITH */
#define SAADC_INTENSET_CH7LIMITH_Pos (20UL)
#define SAADC_INTENSET_CH7LIMITH_Msk (0x1UL << SAADC_INTENSET_CH7LIMITH_Pos)
#define SAADC_INTENSET_CH7LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH7LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH7LIMITH_Set (1UL)

/* Bit 19 : Write '1' to enable interrupt for event CH6LIMITL */
#define SAADC_INTENSET_CH6LIMITL_Pos (19UL)
#define SAADC_INTENSET_CH6LIMITL_Msk (0x1UL << SAADC_INTENSET_CH6LIMITL_Pos)
#define SAADC_INTENSET_CH6LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH6LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH6LIMITL_Set (1UL)

/* Bit 18 : Write '1' to enable interrupt for event CH6LIMITH */
#define SAADC_INTENSET_CH6LIMITH_Pos (18UL)
#define SAADC_INTENSET_CH6LIMITH_Msk (0x1UL << SAADC_INTENSET_CH6LIMITH_Pos)
#define SAADC_INTENSET_CH6LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH6LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH6LIMITH_Set (1UL)

/* Bit 17 : Write '1' to enable interrupt for event CH5LIMITL */
#define SAADC_INTENSET_CH5LIMITL_Pos (17UL)
#define SAADC_INTENSET_CH5LIMITL_Msk (0x1UL << SAADC_INTENSET_CH5LIMITL_Pos)
#define SAADC_INTENSET_CH5LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH5LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH5LIMITL_Set (1UL)

/* Bit 16 : Write '1' to enable interrupt for event CH5LIMITH */
#define SAADC_INTENSET_CH5LIMITH_Pos (16UL)
#define SAADC_INTENSET_CH5LIMITH_Msk (0x1UL << SAADC_INTENSET_CH5LIMITH_Pos)
#define SAADC_INTENSET_CH5LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH5LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH5LIMITH_Set (1UL)

/* Bit 15 : Write '1' to enable interrupt for event CH4LIMITL */
#define SAADC_INTENSET_CH4LIMITL_Pos (15UL)
#define SAADC_INTENSET_CH4LIMITL_Msk (0x1UL << SAADC_INTENSET_CH4LIMITL_Pos)
#define SAADC_INTENSET_CH4LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH4LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH4LIMITL_Set (1UL)

/* Bit 14 : Write '1' to enable interrupt for event CH4LIMITH */
#define SAADC_INTENSET_CH4LIMITH_Pos (14UL)
#define SAADC_INTENSET_CH4LIMITH_Msk (0x1UL << SAADC_INTENSET_CH4LIMITH_Pos)
#define SAADC_INTENSET_CH4LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH4LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH4LIMITH_Set (1UL)

/* Bit 13 : Write '1' to enable interrupt for event CH3LIMITL */
#define SAADC_INTENSET_CH3LIMITL_Pos (13UL)
#define SAADC_INTENSET_CH3LIMITL_Msk (0x1UL << SAADC_INTENSET_CH3LIMITL_Pos)
#define SAADC_INTENSET_CH3LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH3LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH3LIMITL_Set (1UL)

/* Bit 12 : Write '1' to enable interrupt for event CH3LIMITH */
#define SAADC_INTENSET_CH3LIMITH_Pos (12UL)
#define SAADC_INTENSET_CH3LIMITH_Msk (0x1UL << SAADC_INTENSET_CH3LIMITH_Pos)
#define SAADC_INTENSET_CH3LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH3LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH3LIMITH_Set (1UL)

/* Bit 11 : Write '1' to enable interrupt for event CH2LIMITL */
#define SAADC_INTENSET_CH2LIMITL_Pos (11UL)
#define SAADC_INTENSET_CH2LIMITL_Msk (0x1UL << SAADC_INTENSET_CH2LIMITL_Pos)
#define SAADC_INTENSET_CH2LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH2LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH2LIMITL_Set (1UL)

/* Bit 10 : Write '1' to enable interrupt for event CH2LIMITH */
#define SAADC_INTENSET_CH2LIMITH_Pos (10UL)
#define SAADC_INTENSET_CH2LIMITH_Msk (0x1UL << SAADC_INTENSET_CH2LIMITH_Pos)
#define SAADC_INTENSET_CH2LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH2LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH2LIMITH_Set (1UL)

/* Bit 9 : Write '1' to enable interrupt for event CH1LIMITL */
#define SAADC_INTENSET_CH1LIMITL_Pos (9UL)
#define SAADC_INTENSET_CH1LIMITL_Msk (0x1UL << SAADC_INTENSET_CH1LIMITL_Pos)
#define SAADC_INTENSET_CH1LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH1LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH1LIMITL_Set (1UL)

/* Bit 8 : Write '1' to enable interrupt for event CH1LIMITH */
#define SAADC_INTENSET_CH1LIMITH_Pos (8UL)
#define SAADC_INTENSET_CH1LIMITH_Msk (0x1UL << SAADC_INTENSET_CH1LIMITH_Pos)
#define SAADC_INTENSET_CH1LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH1LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH1LIMITH_Set (1UL)

/* Bit 7 : Write '1' to enable interrupt for event CH0LIMITL */
#define SAADC_INTENSET_CH0LIMITL_Pos (7UL)
#define SAADC_INTENSET_CH0LIMITL_Msk (0x1UL << SAADC_INTENSET_CH0LIMITL_Pos)
#define SAADC_INTENSET_CH0LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH0LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH0LIMITL_Set (1UL)

/* Bit 6 : Write '1' to enable interrupt for event CH0LIMITH */
#define SAADC_INTENSET_CH0LIMITH_Pos (6UL)
#define SAADC_INTENSET_CH0LIMITH_Msk (0x1UL << SAADC_INTENSET_CH0LIMITH_Pos)
#define SAADC_INTENSET_CH0LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH0LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH0LIMITH_Set (1UL)

/* Bit 5 : Write '1' to enable interrupt for event STOPPED */
#define SAADC_INTENSET_STOPPED_Pos (5UL)
#define SAADC_INTENSET_STOPPED_Msk (0x1UL << SAADC_INTENSET_STOPPED_Pos)
#define SAADC_INTENSET_STOPPED_Disabled (0UL)
#define SAADC_INTENSET_STOPPED_Enabled (1UL)
#define SAADC_INTENSET_STOPPED_Set (1UL)

/* Bit 4 : Write '1' to enable interrupt for event CALIBRATEDONE */
#define SAADC_INTENSET_CALIBRATEDONE_Pos (4UL)
#define SAADC_INTENSET_CALIBRATEDONE_Msk (0x1UL << SAADC_INTENSET_CALIBRATEDONE_Pos)
#define SAADC_INTENSET_CALIBRATEDONE_Disabled (0UL)
#define SAADC_INTENSET_CALIBRATEDONE_Enabled (1UL)
#define SAADC_INTENSET_CALIBRATEDONE_Set (1UL)

/* Bit 3 : Write '1' to enable interrupt for event RESULTDONE */
#define SAADC_INTENSET_RESULTDONE_Pos (3UL)
#define SAADC_INTENSET_RESULTDONE_Msk (0x1UL << SAADC_INTENSET_RESULTDONE_Pos)
#define SAADC_INTENSET_RESULTDONE_Disabled (0UL)
#define SAADC_INTENSET_RESULTDONE_Enabled (1UL)
#define SAADC_INTENSET_RESULTDONE_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event DONE */
#define SAADC_INTENSET_DONE_Pos (2UL)
#define SAADC_INTENSET_DONE_Msk (0x1UL << SAADC_INTENSET_DONE_Pos)
#define SAADC_INTENSET_DONE_Disabled (0UL)
#define SAADC_INTENSET_DONE_Enabled (1UL)
#define SAADC_INTENSET_DONE_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event END */
#define SAADC_INTENSET_END_Pos (1UL)
#define SAADC_INTENSET_END_Msk (0x1UL << SAADC_INTENSET_END_Pos)
#define SAADC_INTENSET_END_Disabled (0UL)
#define SAADC_INTENSET_END_Enabled (1UL)
#define SAADC_INTENSET_END_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event STARTED */
#define SAADC_INTENSET_STARTED_Pos (0UL)
#define SAADC_INTENSET_STARTED_Msk (0x1UL << SAADC_INTENSET_STARTED_Pos)
#define SAADC_INTENSET_STARTED_Disabled (0UL)
#define SAADC_INTENSET_STARTED_Enabled (1UL)
#define SAADC_INTENSET_STARTED_Set (1UL)

/* Register: SAADC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 21 : Write '1' to disable interrupt for event CH7LIMITL */
#define SAADC_INTENCLR_CH7LIMITL_Pos (21UL)
#define SAADC_INTENCLR_CH7LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH7LIMITL_Pos)
#define SAADC_INTENCLR_CH7LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH7LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH7LIMITL_Clear (1UL)

/* Bit 20 : Write '1' to disable interrupt for event CH7LIMITH */
#define SAADC_INTENCLR_CH7LIMITH_Pos (20UL)
#define SAADC_INTENCLR_CH7LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH7LIMITH_Pos)
#define SAADC_INTENCLR_CH7LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH7LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH7LIMITH_Clear (1UL)

/* Bit 19 : Write '1' to disable interrupt for event CH6LIMITL */
#define SAADC_INTENCLR_CH6LIMITL_Pos (19UL)
#define SAADC_INTENCLR_CH6LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH6LIMITL_Pos)
#define SAADC_INTENCLR_CH6LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH6LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH6LIMITL_Clear (1UL)

/* Bit 18 : Write '1' to disable interrupt for event CH6LIMITH */
#define SAADC_INTENCLR_CH6LIMITH_Pos (18UL)
#define SAADC_INTENCLR_CH6LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH6LIMITH_Pos)
#define SAADC_INTENCLR_CH6LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH6LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH6LIMITH_Clear (1UL)

/* Bit 17 : Write '1' to disable interrupt for event CH5LIMITL */
#define SAADC_INTENCLR_CH5LIMITL_Pos (17UL)
#define SAADC_INTENCLR_CH5LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH5LIMITL_Pos)
#define SAADC_INTENCLR_CH5LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH5LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH5LIMITL_Clear (1UL)

/* Bit 16 : Write '1' to disable interrupt for event CH5LIMITH */
#define SAADC_INTENCLR_CH5LIMITH_Pos (16UL)
#define SAADC_INTENCLR_CH5LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH5LIMITH_Pos)
#define SAADC_INTENCLR_CH5LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH5LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH5LIMITH_Clear (1UL)

/* Bit 15 : Write '1' to disable interrupt for event CH4LIMITL */
#define SAADC_INTENCLR_CH4LIMITL_Pos (15UL)
#define SAADC_INTENCLR_CH4LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH4LIMITL_Pos)
#define SAADC_INTENCLR_CH4LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH4LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH4LIMITL_Clear (1UL)

/* Bit 14 : Write '1' to disable interrupt for event CH4LIMITH */
#define SAADC_INTENCLR_CH4LIMITH_Pos (14UL)
#define SAADC_INTENCLR_CH4LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH4LIMITH_Pos)
#define SAADC_INTENCLR_CH4LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH4LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH4LIMITH_Clear (1UL)

/* Bit 13 : Write '1' to disable interrupt for event CH3LIMITL */
#define SAADC_INTENCLR_CH3LIMITL_Pos (13UL)
#define SAADC_INTENCLR_CH3LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH3LIMITL_Pos)
#define SAADC_INTENCLR_CH3LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH3LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH3LIMITL_Clear (1UL)

/* Bit 12 : Write '1' to disable interrupt for event CH3LIMITH */
#define SAADC_INTENCLR_CH3LIMITH_Pos (12UL)
#define SAADC_INTENCLR_CH3LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH3LIMITH_Pos)
#define SAADC_INTENCLR_CH3LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH3LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH3LIMITH_Clear (1UL)

/* Bit 11 : Write '1' to disable interrupt for event CH2LIMITL */
#define SAADC_INTENCLR_CH2LIMITL_Pos (11UL)
#define SAADC_INTENCLR_CH2LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH2LIMITL_Pos)
#define SAADC_INTENCLR_CH2LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH2LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH2LIMITL_Clear (1UL)

/* Bit 10 : Write '1' to disable interrupt for event CH2LIMITH */
#define SAADC_INTENCLR_CH2LIMITH_Pos (10UL)
#define SAADC_INTENCLR_CH2LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH2LIMITH_Pos)
#define SAADC_INTENCLR_CH2LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH2LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH2LIMITH_Clear (1UL)

/* Bit 9 : Write '1' to disable interrupt for event CH1LIMITL */
#define SAADC_INTENCLR_CH1LIMITL_Pos (9UL)
#define SAADC_INTENCLR_CH1LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH1LIMITL_Pos)
#define SAADC_INTENCLR_CH1LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH1LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH1LIMITL_Clear (1UL)

/* Bit 8 : Write '1' to disable interrupt for event CH1LIMITH */
#define SAADC_INTENCLR_CH1LIMITH_Pos (8UL)
#define SAADC_INTENCLR_CH1LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH1LIMITH_Pos)
#define SAADC_INTENCLR_CH1LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH1LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH1LIMITH_Clear (1UL)

/* Bit 7 : Write '1' to disable interrupt for event CH0LIMITL */
#define SAADC_INTENCLR_CH0LIMITL_Pos (7UL)
#define SAADC_INTENCLR_CH0LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH0LIMITL_Pos)
#define SAADC_INTENCLR_CH0LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH0LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH0LIMITL_Clear (1UL)

/* Bit 6 : Write '1' to disable interrupt for event CH0LIMITH */
#define SAADC_INTENCLR_CH0LIMITH_Pos (6UL)
#define SAADC_INTENCLR_CH0LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH0LIMITH_Pos)
#define SAADC_INTENCLR_CH0LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH0LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH0LIMITH_Clear (1UL)

/* Bit 5 : Write '1' to disable interrupt for event STOPPED */
#define SAADC_INTENCLR_STOPPED_Pos (5UL)
#define SAADC_INTENCLR_STOPPED_Msk (0x1UL << SAADC_INTENCLR_STOPPED_Pos)
#define SAADC_INTENCLR_STOPPED_Disabled (0UL)
#define SAADC_INTENCLR_STOPPED_Enabled (1UL)
#define SAADC_INTENCLR_STOPPED_Clear (1UL)

/* Bit 4 : Write '1' to disable interrupt for event CALIBRATEDONE */
#define SAADC_INTENCLR_CALIBRATEDONE_Pos (4UL)
#define SAADC_INTENCLR_CALIBRATEDONE_Msk (0x1UL << SAADC_INTENCLR_CALIBRATEDONE_Pos)
#define SAADC_INTENCLR_CALIBRATEDONE_Disabled (0UL)
#define SAADC_INTENCLR_CALIBRATEDONE_Enabled (1UL)
#define SAADC_INTENCLR_CALIBRATEDONE_Clear (1UL)

/* Bit 3 : Write '1' to disable interrupt for event RESULTDONE */
#define SAADC_INTENCLR_RESULTDONE_Pos (3UL)
#define SAADC_INTENCLR_RESULTDONE_Msk (0x1UL << SAADC_INTENCLR_RESULTDONE_Pos)
#define SAADC_INTENCLR_RESULTDONE_Disabled (0UL)
#define SAADC_INTENCLR_RESULTDONE_Enabled (1UL)
#define SAADC_INTENCLR_RESULTDONE_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event DONE */
#define SAADC_INTENCLR_DONE_Pos (2UL)
#define SAADC_INTENCLR_DONE_Msk (0x1UL << SAADC_INTENCLR_DONE_Pos)
#define SAADC_INTENCLR_DONE_Disabled (0UL)
#define SAADC_INTENCLR_DONE_Enabled (1UL)
#define SAADC_INTENCLR_DONE_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event END */
#define SAADC_INTENCLR_END_Pos (1UL)
#define SAADC_INTENCLR_END_Msk (0x1UL << SAADC_INTENCLR_END_Pos)
#define SAADC_INTENCLR_END_Disabled (0UL)
#define SAADC_INTENCLR_END_Enabled (1UL)
#define SAADC_INTENCLR_END_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event STARTED */
#define SAADC_INTENCLR_STARTED_Pos (0UL)
#define SAADC_INTENCLR_STARTED_Msk (0x1UL << SAADC_INTENCLR_STARTED_Pos)
#define SAADC_INTENCLR_STARTED_Disabled (0UL)
#define SAADC_INTENCLR_STARTED_Enabled (1UL)
#define SAADC_INTENCLR_STARTED_Clear (1UL)

/* Register: SAADC_STATUS */
/* Description: Status */

/* Bit 0 : Status */
#define SAADC_STATUS_STATUS_Pos (0UL)
#define SAADC_STATUS_STATUS_Msk (0x1UL << SAADC_STATUS_STATUS_Pos)
#define SAADC_STATUS_STATUS_Ready (0UL)
#define SAADC_STATUS_STATUS_Busy (1UL)

/* Register: SAADC_ENABLE */
/* Description: Enable or disable SAADC */

/* Bit 0 : Enable or disable SAADC */
#define SAADC_ENABLE_ENABLE_Pos (0UL)
#define SAADC_ENABLE_ENABLE_Msk (0x1UL << SAADC_ENABLE_ENABLE_Pos)
#define SAADC_ENABLE_ENABLE_Disabled (0UL)
#define SAADC_ENABLE_ENABLE_Enabled (1UL)

/* Register: SAADC_CH_PSELP */
/* Description: Description cluster: Input positive pin selection for CH[n] */

/* Bits 4..0 : Analog positive input channel */
#define SAADC_CH_PSELP_PSELP_Pos (0UL)
#define SAADC_CH_PSELP_PSELP_Msk (0x1FUL << SAADC_CH_PSELP_PSELP_Pos)
#define SAADC_CH_PSELP_PSELP_NC (0UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput0 (1UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput1 (2UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput2 (3UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput3 (4UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput4 (5UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput5 (6UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput6 (7UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput7 (8UL)
#define SAADC_CH_PSELP_PSELP_VDD (9UL)
#define SAADC_CH_PSELP_PSELP_VDDHDIV5 (0x0DUL)

/* Register: SAADC_CH_PSELN */
/* Description: Description cluster: Input negative pin selection for CH[n] */

/* Bits 4..0 : Analog negative input, enables differential channel */
#define SAADC_CH_PSELN_PSELN_Pos (0UL)
#define SAADC_CH_PSELN_PSELN_Msk (0x1FUL << SAADC_CH_PSELN_PSELN_Pos)
#define SAADC_CH_PSELN_PSELN_NC (0UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput0 (1UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput1 (2UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput2 (3UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput3 (4UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput4 (5UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput5 (6UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput6 (7UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput7 (8UL)
#define SAADC_CH_PSELN_PSELN_VDD (9UL)
#define SAADC_CH_PSELN_PSELN_VDDHDIV5 (0x0DUL)

/* Register: SAADC_CH_CONFIG */
/* Description: Description cluster: Input configuration for CH[n] */

/* Bit 24 : Enable burst mode */
#define SAADC_CH_CONFIG_BURST_Pos (24UL)
#define SAADC_CH_CONFIG_BURST_Msk (0x1UL << SAADC_CH_CONFIG_BURST_Pos)
#define SAADC_CH_CONFIG_BURST_Disabled (0UL)
#define SAADC_CH_CONFIG_BURST_Enabled (1UL)

/* Bit 20 : Enable differential mode */
#define SAADC_CH_CONFIG_MODE_Pos (20UL)
#define SAADC_CH_CONFIG_MODE_Msk (0x1UL << SAADC_CH_CONFIG_MODE_Pos)
#define SAADC_CH_CONFIG_MODE_SE (0UL)
#define SAADC_CH_CONFIG_MODE_Diff (1UL)

/* Bits 18..16 : Acquisition time, the time the SAADC uses to sample the input voltage */
#define SAADC_CH_CONFIG_TACQ_Pos (16UL)
#define SAADC_CH_CONFIG_TACQ_Msk (0x7UL << SAADC_CH_CONFIG_TACQ_Pos)
#define SAADC_CH_CONFIG_TACQ_3us (0UL)
#define SAADC_CH_CONFIG_TACQ_5us (1UL)
#define SAADC_CH_CONFIG_TACQ_10us (2UL)
#define SAADC_CH_CONFIG_TACQ_15us (3UL)
#define SAADC_CH_CONFIG_TACQ_20us (4UL)
#define SAADC_CH_CONFIG_TACQ_40us (5UL)

/* Bit 12 : Reference control */
#define SAADC_CH_CONFIG_REFSEL_Pos (12UL)
#define SAADC_CH_CONFIG_REFSEL_Msk (0x1UL << SAADC_CH_CONFIG_REFSEL_Pos)
#define SAADC_CH_CONFIG_REFSEL_Internal (0UL)
#define SAADC_CH_CONFIG_REFSEL_VDD1_4 (1UL)

/* Bits 10..8 : Gain control */
#define SAADC_CH_CONFIG_GAIN_Pos (8UL)
#define SAADC_CH_CONFIG_GAIN_Msk (0x7UL << SAADC_CH_CONFIG_GAIN_Pos)
#define SAADC_CH_CONFIG_GAIN_Gain1_6 (0UL)
#define SAADC_CH_CONFIG_GAIN_Gain1_5 (1UL)
#define SAADC_CH_CONFIG_GAIN_Gain1_4 (2UL)
#define SAADC_CH_CONFIG_GAIN_Gain1_3 (3UL)
#define SAADC_CH_CONFIG_GAIN_Gain1_2 (4UL)
#define SAADC_CH_CONFIG_GAIN_Gain1 (5UL)
#define SAADC_CH_CONFIG_GAIN_Gain2 (6UL)
#define SAADC_CH_CONFIG_GAIN_Gain4 (7UL)

/* Bits 5..4 : Negative channel resistor control */
#define SAADC_CH_CONFIG_RESN_Pos (4UL)
#define SAADC_CH_CONFIG_RESN_Msk (0x3UL << SAADC_CH_CONFIG_RESN_Pos)
#define SAADC_CH_CONFIG_RESN_Bypass (0UL)
#define SAADC_CH_CONFIG_RESN_Pulldown (1UL)
#define SAADC_CH_CONFIG_RESN_Pullup (2UL)
#define SAADC_CH_CONFIG_RESN_VDD1_2 (3UL)

/* Bits 1..0 : Positive channel resistor control */
#define SAADC_CH_CONFIG_RESP_Pos (0UL)
#define SAADC_CH_CONFIG_RESP_Msk (0x3UL << SAADC_CH_CONFIG_RESP_Pos)
#define SAADC_CH_CONFIG_RESP_Bypass (0UL)
#define SAADC_CH_CONFIG_RESP_Pulldown (1UL)
#define SAADC_CH_CONFIG_RESP_Pullup (2UL)
#define SAADC_CH_CONFIG_RESP_VDD1_2 (3UL)

/* Register: SAADC_CH_LIMIT */
/* Description: Description cluster: High/low limits for event monitoring of a channel */

/* Bits 31..16 : High level limit */
#define SAADC_CH_LIMIT_HIGH_Pos (16UL)
#define SAADC_CH_LIMIT_HIGH_Msk (0xFFFFUL << SAADC_CH_LIMIT_HIGH_Pos)

/* Bits 15..0 : Low level limit */
#define SAADC_CH_LIMIT_LOW_Pos (0UL)
#define SAADC_CH_LIMIT_LOW_Msk (0xFFFFUL << SAADC_CH_LIMIT_LOW_Pos)

/* Register: SAADC_RESOLUTION */
/* Description: Resolution configuration */

/* Bits 2..0 : Set the resolution */
#define SAADC_RESOLUTION_VAL_Pos (0UL)
#define SAADC_RESOLUTION_VAL_Msk (0x7UL << SAADC_RESOLUTION_VAL_Pos)
#define SAADC_RESOLUTION_VAL_8bit (0UL)
#define SAADC_RESOLUTION_VAL_10bit (1UL)
#define SAADC_RESOLUTION_VAL_12bit (2UL)
#define SAADC_RESOLUTION_VAL_14bit (3UL)

/* Register: SAADC_OVERSAMPLE */
/* Description: Oversampling configuration. The RESOLUTION is applied before averaging, thus for high OVERSAMPLE a higher RESOLUTION should be used. */

/* Bits 3..0 : Oversample control */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Pos (0UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Msk (0xFUL << SAADC_OVERSAMPLE_OVERSAMPLE_Pos)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Bypass (0UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over2x (1UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over4x (2UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over8x (3UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over16x (4UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over32x (5UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over64x (6UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over128x (7UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over256x (8UL)

/* Register: SAADC_SAMPLERATE */
/* Description: Controls normal or continuous sample rate */

/* Bit 12 : Select mode for sample rate control */
#define SAADC_SAMPLERATE_MODE_Pos (12UL)
#define SAADC_SAMPLERATE_MODE_Msk (0x1UL << SAADC_SAMPLERATE_MODE_Pos)
#define SAADC_SAMPLERATE_MODE_Task (0UL)
#define SAADC_SAMPLERATE_MODE_Timers (1UL)

/* Bits 10..0 : Capture and compare value. Sample rate is 16 MHz/CC */
#define SAADC_SAMPLERATE_CC_Pos (0UL)
#define SAADC_SAMPLERATE_CC_Msk (0x7FFUL << SAADC_SAMPLERATE_CC_Pos)

/* Register: SAADC_RESULT_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define SAADC_RESULT_PTR_PTR_Pos (0UL)
#define SAADC_RESULT_PTR_PTR_Msk (0xFFFFFFFFUL << SAADC_RESULT_PTR_PTR_Pos)

/* Register: SAADC_RESULT_MAXCNT */
/* Description: Maximum number of 16-bit samples to be written to output RAM buffer */

/* Bits 14..0 : Maximum number of 16-bit samples to be written to output RAM buffer */
#define SAADC_RESULT_MAXCNT_MAXCNT_Pos (0UL)
#define SAADC_RESULT_MAXCNT_MAXCNT_Msk (0x7FFFUL << SAADC_RESULT_MAXCNT_MAXCNT_Pos)

/* Register: SAADC_RESULT_AMOUNT */
/* Description: Number of 16-bit samples written to output RAM buffer since the previous START task */

/* Bits 14..0 : Number of 16-bit samples written to output RAM buffer since the previous START task. This register can be read after an END or STOPPED event. */
#define SAADC_RESULT_AMOUNT_AMOUNT_Pos (0UL)
#define SAADC_RESULT_AMOUNT_AMOUNT_Msk (0x7FFFUL << SAADC_RESULT_AMOUNT_AMOUNT_Pos)


/* Peripheral: SPI */
/* Description: Serial Peripheral Interface 0 */

/* Register: SPI_EVENTS_READY */
/* Description: TXD byte sent and RXD byte received */

/* Bit 0 : TXD byte sent and RXD byte received */
#define SPI_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define SPI_EVENTS_READY_EVENTS_READY_Msk (0x1UL << SPI_EVENTS_READY_EVENTS_READY_Pos)
#define SPI_EVENTS_READY_EVENTS_READY_NotGenerated (0UL)
#define SPI_EVENTS_READY_EVENTS_READY_Generated (1UL)

/* Register: SPI_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event READY */
#define SPI_INTENSET_READY_Pos (2UL)
#define SPI_INTENSET_READY_Msk (0x1UL << SPI_INTENSET_READY_Pos)
#define SPI_INTENSET_READY_Disabled (0UL)
#define SPI_INTENSET_READY_Enabled (1UL)
#define SPI_INTENSET_READY_Set (1UL)

/* Register: SPI_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event READY */
#define SPI_INTENCLR_READY_Pos (2UL)
#define SPI_INTENCLR_READY_Msk (0x1UL << SPI_INTENCLR_READY_Pos)
#define SPI_INTENCLR_READY_Disabled (0UL)
#define SPI_INTENCLR_READY_Enabled (1UL)
#define SPI_INTENCLR_READY_Clear (1UL)

/* Register: SPI_ENABLE */
/* Description: Enable SPI */

/* Bits 3..0 : Enable or disable SPI */
#define SPI_ENABLE_ENABLE_Pos (0UL)
#define SPI_ENABLE_ENABLE_Msk (0xFUL << SPI_ENABLE_ENABLE_Pos)
#define SPI_ENABLE_ENABLE_Disabled (0UL)
#define SPI_ENABLE_ENABLE_Enabled (1UL)

/* Register: SPI_PSEL_SCK */
/* Description: Pin select for SCK */

/* Bit 31 : Connection */
#define SPI_PSEL_SCK_CONNECT_Pos (31UL)
#define SPI_PSEL_SCK_CONNECT_Msk (0x1UL << SPI_PSEL_SCK_CONNECT_Pos)
#define SPI_PSEL_SCK_CONNECT_Connected (0UL)
#define SPI_PSEL_SCK_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define SPI_PSEL_SCK_PORT_Pos (5UL)
#define SPI_PSEL_SCK_PORT_Msk (0x1UL << SPI_PSEL_SCK_PORT_Pos)

/* Bits 4..0 : Pin number */
#define SPI_PSEL_SCK_PIN_Pos (0UL)
#define SPI_PSEL_SCK_PIN_Msk (0x1FUL << SPI_PSEL_SCK_PIN_Pos)

/* Register: SPI_PSEL_MOSI */
/* Description: Pin select for MOSI signal */

/* Bit 31 : Connection */
#define SPI_PSEL_MOSI_CONNECT_Pos (31UL)
#define SPI_PSEL_MOSI_CONNECT_Msk (0x1UL << SPI_PSEL_MOSI_CONNECT_Pos)
#define SPI_PSEL_MOSI_CONNECT_Connected (0UL)
#define SPI_PSEL_MOSI_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define SPI_PSEL_MOSI_PORT_Pos (5UL)
#define SPI_PSEL_MOSI_PORT_Msk (0x1UL << SPI_PSEL_MOSI_PORT_Pos)

/* Bits 4..0 : Pin number */
#define SPI_PSEL_MOSI_PIN_Pos (0UL)
#define SPI_PSEL_MOSI_PIN_Msk (0x1FUL << SPI_PSEL_MOSI_PIN_Pos)

/* Register: SPI_PSEL_MISO */
/* Description: Pin select for MISO signal */

/* Bit 31 : Connection */
#define SPI_PSEL_MISO_CONNECT_Pos (31UL)
#define SPI_PSEL_MISO_CONNECT_Msk (0x1UL << SPI_PSEL_MISO_CONNECT_Pos)
#define SPI_PSEL_MISO_CONNECT_Connected (0UL)
#define SPI_PSEL_MISO_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define SPI_PSEL_MISO_PORT_Pos (5UL)
#define SPI_PSEL_MISO_PORT_Msk (0x1UL << SPI_PSEL_MISO_PORT_Pos)

/* Bits 4..0 : Pin number */
#define SPI_PSEL_MISO_PIN_Pos (0UL)
#define SPI_PSEL_MISO_PIN_Msk (0x1FUL << SPI_PSEL_MISO_PIN_Pos)

/* Register: SPI_RXD */
/* Description: RXD register */

/* Bits 7..0 : RX data received. Double buffered */
#define SPI_RXD_RXD_Pos (0UL)
#define SPI_RXD_RXD_Msk (0xFFUL << SPI_RXD_RXD_Pos)

/* Register: SPI_TXD */
/* Description: TXD register */

/* Bits 7..0 : TX data to send. Double buffered. */
#define SPI_TXD_TXD_Pos (0UL)
#define SPI_TXD_TXD_Msk (0xFFUL << SPI_TXD_TXD_Pos)

/* Register: SPI_FREQUENCY */
/* Description: SPI frequency. Accuracy depends on the HFCLK source selected. */

/* Bits 31..0 : SPI master data rate */
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
/* Description: Configuration register */

/* Bit 2 : Serial clock (SCK) polarity */
#define SPI_CONFIG_CPOL_Pos (2UL)
#define SPI_CONFIG_CPOL_Msk (0x1UL << SPI_CONFIG_CPOL_Pos)
#define SPI_CONFIG_CPOL_ActiveHigh (0UL)
#define SPI_CONFIG_CPOL_ActiveLow (1UL)

/* Bit 1 : Serial clock (SCK) phase */
#define SPI_CONFIG_CPHA_Pos (1UL)
#define SPI_CONFIG_CPHA_Msk (0x1UL << SPI_CONFIG_CPHA_Pos)
#define SPI_CONFIG_CPHA_Leading (0UL)
#define SPI_CONFIG_CPHA_Trailing (1UL)

/* Bit 0 : Bit order */
#define SPI_CONFIG_ORDER_Pos (0UL)
#define SPI_CONFIG_ORDER_Msk (0x1UL << SPI_CONFIG_ORDER_Pos)
#define SPI_CONFIG_ORDER_MsbFirst (0UL)
#define SPI_CONFIG_ORDER_LsbFirst (1UL)


/* Peripheral: SPIM */
/* Description: Serial Peripheral Interface Master with EasyDMA 0 */

/* Register: SPIM_TASKS_START */
/* Description: Start SPI transaction */

/* Bit 0 : Start SPI transaction */
#define SPIM_TASKS_START_TASKS_START_Pos (0UL)
#define SPIM_TASKS_START_TASKS_START_Msk (0x1UL << SPIM_TASKS_START_TASKS_START_Pos)
#define SPIM_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: SPIM_TASKS_STOP */
/* Description: Stop SPI transaction */

/* Bit 0 : Stop SPI transaction */
#define SPIM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define SPIM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << SPIM_TASKS_STOP_TASKS_STOP_Pos)
#define SPIM_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: SPIM_TASKS_SUSPEND */
/* Description: Suspend SPI transaction */

/* Bit 0 : Suspend SPI transaction */
#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL)
#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos)
#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (1UL)

/* Register: SPIM_TASKS_RESUME */
/* Description: Resume SPI transaction */

/* Bit 0 : Resume SPI transaction */
#define SPIM_TASKS_RESUME_TASKS_RESUME_Pos (0UL)
#define SPIM_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << SPIM_TASKS_RESUME_TASKS_RESUME_Pos)
#define SPIM_TASKS_RESUME_TASKS_RESUME_Trigger (1UL)

/* Register: SPIM_EVENTS_STOPPED */
/* Description: SPI transaction has stopped */

/* Bit 0 : SPI transaction has stopped */
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)

/* Register: SPIM_EVENTS_ENDRX */
/* Description: End of RXD buffer reached */

/* Bit 0 : End of RXD buffer reached */
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL)
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos)
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0UL)
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Generated (1UL)

/* Register: SPIM_EVENTS_END */
/* Description: End of RXD buffer and TXD buffer reached */

/* Bit 0 : End of RXD buffer and TXD buffer reached */
#define SPIM_EVENTS_END_EVENTS_END_Pos (0UL)
#define SPIM_EVENTS_END_EVENTS_END_Msk (0x1UL << SPIM_EVENTS_END_EVENTS_END_Pos)
#define SPIM_EVENTS_END_EVENTS_END_NotGenerated (0UL)
#define SPIM_EVENTS_END_EVENTS_END_Generated (1UL)

/* Register: SPIM_EVENTS_ENDTX */
/* Description: End of TXD buffer reached */

/* Bit 0 : End of TXD buffer reached */
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL)
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos)
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_NotGenerated (0UL)
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Generated (1UL)

/* Register: SPIM_EVENTS_STARTED */
/* Description: Transaction started */

/* Bit 0 : Transaction started */
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << SPIM_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0UL)
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Generated (1UL)

/* Register: SPIM_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 17 : Shortcut between event END and task START */
#define SPIM_SHORTS_END_START_Pos (17UL)
#define SPIM_SHORTS_END_START_Msk (0x1UL << SPIM_SHORTS_END_START_Pos)
#define SPIM_SHORTS_END_START_Disabled (0UL)
#define SPIM_SHORTS_END_START_Enabled (1UL)

/* Register: SPIM_INTENSET */
/* Description: Enable interrupt */

/* Bit 19 : Write '1' to enable interrupt for event STARTED */
#define SPIM_INTENSET_STARTED_Pos (19UL)
#define SPIM_INTENSET_STARTED_Msk (0x1UL << SPIM_INTENSET_STARTED_Pos)
#define SPIM_INTENSET_STARTED_Disabled (0UL)
#define SPIM_INTENSET_STARTED_Enabled (1UL)
#define SPIM_INTENSET_STARTED_Set (1UL)

/* Bit 8 : Write '1' to enable interrupt for event ENDTX */
#define SPIM_INTENSET_ENDTX_Pos (8UL)
#define SPIM_INTENSET_ENDTX_Msk (0x1UL << SPIM_INTENSET_ENDTX_Pos)
#define SPIM_INTENSET_ENDTX_Disabled (0UL)
#define SPIM_INTENSET_ENDTX_Enabled (1UL)
#define SPIM_INTENSET_ENDTX_Set (1UL)

/* Bit 6 : Write '1' to enable interrupt for event END */
#define SPIM_INTENSET_END_Pos (6UL)
#define SPIM_INTENSET_END_Msk (0x1UL << SPIM_INTENSET_END_Pos)
#define SPIM_INTENSET_END_Disabled (0UL)
#define SPIM_INTENSET_END_Enabled (1UL)
#define SPIM_INTENSET_END_Set (1UL)

/* Bit 4 : Write '1' to enable interrupt for event ENDRX */
#define SPIM_INTENSET_ENDRX_Pos (4UL)
#define SPIM_INTENSET_ENDRX_Msk (0x1UL << SPIM_INTENSET_ENDRX_Pos)
#define SPIM_INTENSET_ENDRX_Disabled (0UL)
#define SPIM_INTENSET_ENDRX_Enabled (1UL)
#define SPIM_INTENSET_ENDRX_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define SPIM_INTENSET_STOPPED_Pos (1UL)
#define SPIM_INTENSET_STOPPED_Msk (0x1UL << SPIM_INTENSET_STOPPED_Pos)
#define SPIM_INTENSET_STOPPED_Disabled (0UL)
#define SPIM_INTENSET_STOPPED_Enabled (1UL)
#define SPIM_INTENSET_STOPPED_Set (1UL)

/* Register: SPIM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 19 : Write '1' to disable interrupt for event STARTED */
#define SPIM_INTENCLR_STARTED_Pos (19UL)
#define SPIM_INTENCLR_STARTED_Msk (0x1UL << SPIM_INTENCLR_STARTED_Pos)
#define SPIM_INTENCLR_STARTED_Disabled (0UL)
#define SPIM_INTENCLR_STARTED_Enabled (1UL)
#define SPIM_INTENCLR_STARTED_Clear (1UL)

/* Bit 8 : Write '1' to disable interrupt for event ENDTX */
#define SPIM_INTENCLR_ENDTX_Pos (8UL)
#define SPIM_INTENCLR_ENDTX_Msk (0x1UL << SPIM_INTENCLR_ENDTX_Pos)
#define SPIM_INTENCLR_ENDTX_Disabled (0UL)
#define SPIM_INTENCLR_ENDTX_Enabled (1UL)
#define SPIM_INTENCLR_ENDTX_Clear (1UL)

/* Bit 6 : Write '1' to disable interrupt for event END */
#define SPIM_INTENCLR_END_Pos (6UL)
#define SPIM_INTENCLR_END_Msk (0x1UL << SPIM_INTENCLR_END_Pos)
#define SPIM_INTENCLR_END_Disabled (0UL)
#define SPIM_INTENCLR_END_Enabled (1UL)
#define SPIM_INTENCLR_END_Clear (1UL)

/* Bit 4 : Write '1' to disable interrupt for event ENDRX */
#define SPIM_INTENCLR_ENDRX_Pos (4UL)
#define SPIM_INTENCLR_ENDRX_Msk (0x1UL << SPIM_INTENCLR_ENDRX_Pos)
#define SPIM_INTENCLR_ENDRX_Disabled (0UL)
#define SPIM_INTENCLR_ENDRX_Enabled (1UL)
#define SPIM_INTENCLR_ENDRX_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define SPIM_INTENCLR_STOPPED_Pos (1UL)
#define SPIM_INTENCLR_STOPPED_Msk (0x1UL << SPIM_INTENCLR_STOPPED_Pos)
#define SPIM_INTENCLR_STOPPED_Disabled (0UL)
#define SPIM_INTENCLR_STOPPED_Enabled (1UL)
#define SPIM_INTENCLR_STOPPED_Clear (1UL)

/* Register: SPIM_STALLSTAT */
/* Description: Stall status for EasyDMA RAM accesses. The fields in this register are set to STALL by hardware whenever a stall occurs and can be cleared (set to NOSTALL) by the CPU. */

/* Bit 1 : Stall status for EasyDMA RAM writes */
#define SPIM_STALLSTAT_RX_Pos (1UL)
#define SPIM_STALLSTAT_RX_Msk (0x1UL << SPIM_STALLSTAT_RX_Pos)
#define SPIM_STALLSTAT_RX_NOSTALL (0UL)
#define SPIM_STALLSTAT_RX_STALL (1UL)

/* Bit 0 : Stall status for EasyDMA RAM reads */
#define SPIM_STALLSTAT_TX_Pos (0UL)
#define SPIM_STALLSTAT_TX_Msk (0x1UL << SPIM_STALLSTAT_TX_Pos)
#define SPIM_STALLSTAT_TX_NOSTALL (0UL)
#define SPIM_STALLSTAT_TX_STALL (1UL)

/* Register: SPIM_ENABLE */
/* Description: Enable SPIM */

/* Bits 3..0 : Enable or disable SPIM */
#define SPIM_ENABLE_ENABLE_Pos (0UL)
#define SPIM_ENABLE_ENABLE_Msk (0xFUL << SPIM_ENABLE_ENABLE_Pos)
#define SPIM_ENABLE_ENABLE_Disabled (0UL)
#define SPIM_ENABLE_ENABLE_Enabled (7UL)

/* Register: SPIM_PSEL_SCK */
/* Description: Pin select for SCK */

/* Bit 31 : Connection */
#define SPIM_PSEL_SCK_CONNECT_Pos (31UL)
#define SPIM_PSEL_SCK_CONNECT_Msk (0x1UL << SPIM_PSEL_SCK_CONNECT_Pos)
#define SPIM_PSEL_SCK_CONNECT_Connected (0UL)
#define SPIM_PSEL_SCK_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define SPIM_PSEL_SCK_PORT_Pos (5UL)
#define SPIM_PSEL_SCK_PORT_Msk (0x1UL << SPIM_PSEL_SCK_PORT_Pos)

/* Bits 4..0 : Pin number */
#define SPIM_PSEL_SCK_PIN_Pos (0UL)
#define SPIM_PSEL_SCK_PIN_Msk (0x1FUL << SPIM_PSEL_SCK_PIN_Pos)

/* Register: SPIM_PSEL_MOSI */
/* Description: Pin select for MOSI signal */

/* Bit 31 : Connection */
#define SPIM_PSEL_MOSI_CONNECT_Pos (31UL)
#define SPIM_PSEL_MOSI_CONNECT_Msk (0x1UL << SPIM_PSEL_MOSI_CONNECT_Pos)
#define SPIM_PSEL_MOSI_CONNECT_Connected (0UL)
#define SPIM_PSEL_MOSI_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define SPIM_PSEL_MOSI_PORT_Pos (5UL)
#define SPIM_PSEL_MOSI_PORT_Msk (0x1UL << SPIM_PSEL_MOSI_PORT_Pos)

/* Bits 4..0 : Pin number */
#define SPIM_PSEL_MOSI_PIN_Pos (0UL)
#define SPIM_PSEL_MOSI_PIN_Msk (0x1FUL << SPIM_PSEL_MOSI_PIN_Pos)

/* Register: SPIM_PSEL_MISO */
/* Description: Pin select for MISO signal */

/* Bit 31 : Connection */
#define SPIM_PSEL_MISO_CONNECT_Pos (31UL)
#define SPIM_PSEL_MISO_CONNECT_Msk (0x1UL << SPIM_PSEL_MISO_CONNECT_Pos)
#define SPIM_PSEL_MISO_CONNECT_Connected (0UL)
#define SPIM_PSEL_MISO_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define SPIM_PSEL_MISO_PORT_Pos (5UL)
#define SPIM_PSEL_MISO_PORT_Msk (0x1UL << SPIM_PSEL_MISO_PORT_Pos)

/* Bits 4..0 : Pin number */
#define SPIM_PSEL_MISO_PIN_Pos (0UL)
#define SPIM_PSEL_MISO_PIN_Msk (0x1FUL << SPIM_PSEL_MISO_PIN_Pos)

/* Register: SPIM_PSEL_CSN */
/* Description: Pin select for CSN */

/* Bit 31 : Connection */
#define SPIM_PSEL_CSN_CONNECT_Pos (31UL)
#define SPIM_PSEL_CSN_CONNECT_Msk (0x1UL << SPIM_PSEL_CSN_CONNECT_Pos)
#define SPIM_PSEL_CSN_CONNECT_Connected (0UL)
#define SPIM_PSEL_CSN_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define SPIM_PSEL_CSN_PORT_Pos (5UL)
#define SPIM_PSEL_CSN_PORT_Msk (0x1UL << SPIM_PSEL_CSN_PORT_Pos)

/* Bits 4..0 : Pin number */
#define SPIM_PSEL_CSN_PIN_Pos (0UL)
#define SPIM_PSEL_CSN_PIN_Msk (0x1FUL << SPIM_PSEL_CSN_PIN_Pos)

/* Register: SPIM_FREQUENCY */
/* Description: SPI frequency. Accuracy depends on the HFCLK source selected. */

/* Bits 31..0 : SPI master data rate */
#define SPIM_FREQUENCY_FREQUENCY_Pos (0UL)
#define SPIM_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << SPIM_FREQUENCY_FREQUENCY_Pos)
#define SPIM_FREQUENCY_FREQUENCY_K125 (0x02000000UL)
#define SPIM_FREQUENCY_FREQUENCY_K250 (0x04000000UL)
#define SPIM_FREQUENCY_FREQUENCY_K500 (0x08000000UL)
#define SPIM_FREQUENCY_FREQUENCY_M16 (0x0A000000UL)
#define SPIM_FREQUENCY_FREQUENCY_M1 (0x10000000UL)
#define SPIM_FREQUENCY_FREQUENCY_M32 (0x14000000UL)
#define SPIM_FREQUENCY_FREQUENCY_M2 (0x20000000UL)
#define SPIM_FREQUENCY_FREQUENCY_M4 (0x40000000UL)
#define SPIM_FREQUENCY_FREQUENCY_M8 (0x80000000UL)

/* Register: SPIM_RXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define SPIM_RXD_PTR_PTR_Pos (0UL)
#define SPIM_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIM_RXD_PTR_PTR_Pos)

/* Register: SPIM_RXD_MAXCNT */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 15..0 : Maximum number of bytes in receive buffer */
#define SPIM_RXD_MAXCNT_MAXCNT_Pos (0UL)
#define SPIM_RXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << SPIM_RXD_MAXCNT_MAXCNT_Pos)

/* Register: SPIM_RXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 15..0 : Number of bytes transferred in the last transaction */
#define SPIM_RXD_AMOUNT_AMOUNT_Pos (0UL)
#define SPIM_RXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << SPIM_RXD_AMOUNT_AMOUNT_Pos)

/* Register: SPIM_RXD_LIST */
/* Description: EasyDMA list type */

/* Bits 1..0 : List type */
#define SPIM_RXD_LIST_LIST_Pos (0UL)
#define SPIM_RXD_LIST_LIST_Msk (0x3UL << SPIM_RXD_LIST_LIST_Pos)
#define SPIM_RXD_LIST_LIST_Disabled (0UL)
#define SPIM_RXD_LIST_LIST_ArrayList (1UL)

/* Register: SPIM_TXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define SPIM_TXD_PTR_PTR_Pos (0UL)
#define SPIM_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIM_TXD_PTR_PTR_Pos)

/* Register: SPIM_TXD_MAXCNT */
/* Description: Number of bytes in transmit buffer */

/* Bits 15..0 : Maximum number of bytes in transmit buffer */
#define SPIM_TXD_MAXCNT_MAXCNT_Pos (0UL)
#define SPIM_TXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << SPIM_TXD_MAXCNT_MAXCNT_Pos)

/* Register: SPIM_TXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 15..0 : Number of bytes transferred in the last transaction */
#define SPIM_TXD_AMOUNT_AMOUNT_Pos (0UL)
#define SPIM_TXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << SPIM_TXD_AMOUNT_AMOUNT_Pos)

/* Register: SPIM_TXD_LIST */
/* Description: EasyDMA list type */

/* Bits 1..0 : List type */
#define SPIM_TXD_LIST_LIST_Pos (0UL)
#define SPIM_TXD_LIST_LIST_Msk (0x3UL << SPIM_TXD_LIST_LIST_Pos)
#define SPIM_TXD_LIST_LIST_Disabled (0UL)
#define SPIM_TXD_LIST_LIST_ArrayList (1UL)

/* Register: SPIM_CONFIG */
/* Description: Configuration register */

/* Bit 2 : Serial clock (SCK) polarity */
#define SPIM_CONFIG_CPOL_Pos (2UL)
#define SPIM_CONFIG_CPOL_Msk (0x1UL << SPIM_CONFIG_CPOL_Pos)
#define SPIM_CONFIG_CPOL_ActiveHigh (0UL)
#define SPIM_CONFIG_CPOL_ActiveLow (1UL)

/* Bit 1 : Serial clock (SCK) phase */
#define SPIM_CONFIG_CPHA_Pos (1UL)
#define SPIM_CONFIG_CPHA_Msk (0x1UL << SPIM_CONFIG_CPHA_Pos)
#define SPIM_CONFIG_CPHA_Leading (0UL)
#define SPIM_CONFIG_CPHA_Trailing (1UL)

/* Bit 0 : Bit order */
#define SPIM_CONFIG_ORDER_Pos (0UL)
#define SPIM_CONFIG_ORDER_Msk (0x1UL << SPIM_CONFIG_ORDER_Pos)
#define SPIM_CONFIG_ORDER_MsbFirst (0UL)
#define SPIM_CONFIG_ORDER_LsbFirst (1UL)

/* Register: SPIM_IFTIMING_RXDELAY */
/* Description: Sample delay for input serial data on MISO */

/* Bits 2..0 : Sample delay for input serial data on MISO. The value specifies the number of 64 MHz clock cycles (15.625 ns) delay from the the sampling edge of SCK (leading edge for CONFIG.CPHA = 0, trailing edge for CONFIG.CPHA = 1) until the input serial data is sampled. As en example, if RXDELAY = 0 and CONFIG.CPHA = 0, the input serial data is sampled on the rising edge of SCK. */
#define SPIM_IFTIMING_RXDELAY_RXDELAY_Pos (0UL)
#define SPIM_IFTIMING_RXDELAY_RXDELAY_Msk (0x7UL << SPIM_IFTIMING_RXDELAY_RXDELAY_Pos)

/* Register: SPIM_IFTIMING_CSNDUR */
/* Description: Minimum duration between edge of CSN and edge of SCK and minimum duration CSN must stay high between transactions */

/* Bits 7..0 : Minimum duration between edge of CSN and edge of SCK and minimum duration CSN must stay high between transactions. The value is specified in number of 64 MHz clock cycles (15.625 ns). */
#define SPIM_IFTIMING_CSNDUR_CSNDUR_Pos (0UL)
#define SPIM_IFTIMING_CSNDUR_CSNDUR_Msk (0xFFUL << SPIM_IFTIMING_CSNDUR_CSNDUR_Pos)

/* Register: SPIM_CSNPOL */
/* Description: Polarity of CSN output */

/* Bit 0 : Polarity of CSN output */
#define SPIM_CSNPOL_CSNPOL_Pos (0UL)
#define SPIM_CSNPOL_CSNPOL_Msk (0x1UL << SPIM_CSNPOL_CSNPOL_Pos)
#define SPIM_CSNPOL_CSNPOL_LOW (0UL)
#define SPIM_CSNPOL_CSNPOL_HIGH (1UL)

/* Register: SPIM_PSELDCX */
/* Description: Pin select for DCX signal */

/* Bit 31 : Connection */
#define SPIM_PSELDCX_CONNECT_Pos (31UL)
#define SPIM_PSELDCX_CONNECT_Msk (0x1UL << SPIM_PSELDCX_CONNECT_Pos)
#define SPIM_PSELDCX_CONNECT_Connected (0UL)
#define SPIM_PSELDCX_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define SPIM_PSELDCX_PORT_Pos (5UL)
#define SPIM_PSELDCX_PORT_Msk (0x1UL << SPIM_PSELDCX_PORT_Pos)

/* Bits 4..0 : Pin number */
#define SPIM_PSELDCX_PIN_Pos (0UL)
#define SPIM_PSELDCX_PIN_Msk (0x1FUL << SPIM_PSELDCX_PIN_Pos)

/* Register: SPIM_DCXCNT */
/* Description: DCX configuration */

/* Bits 3..0 : This register specifies the number of command bytes preceding the data bytes. The PSEL.DCX line will be low during transmission of command bytes and high during transmission of data bytes. Value 0xF indicates that all bytes are command bytes. */
#define SPIM_DCXCNT_DCXCNT_Pos (0UL)
#define SPIM_DCXCNT_DCXCNT_Msk (0xFUL << SPIM_DCXCNT_DCXCNT_Pos)

/* Register: SPIM_ORC */
/* Description: Byte transmitted after TXD.MAXCNT bytes have been transmitted in the case when RXD.MAXCNT is greater than TXD.MAXCNT */

/* Bits 7..0 : Byte transmitted after TXD.MAXCNT bytes have been transmitted in the case when RXD.MAXCNT is greater than TXD.MAXCNT. */
#define SPIM_ORC_ORC_Pos (0UL)
#define SPIM_ORC_ORC_Msk (0xFFUL << SPIM_ORC_ORC_Pos)


/* Peripheral: SPIS */
/* Description: SPI Slave 0 */

/* Register: SPIS_TASKS_ACQUIRE */
/* Description: Acquire SPI semaphore */

/* Bit 0 : Acquire SPI semaphore */
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Pos (0UL)
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Msk (0x1UL << SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Pos)
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Trigger (1UL)

/* Register: SPIS_TASKS_RELEASE */
/* Description: Release SPI semaphore, enabling the SPI slave to acquire it */

/* Bit 0 : Release SPI semaphore, enabling the SPI slave to acquire it */
#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Pos (0UL)
#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Msk (0x1UL << SPIS_TASKS_RELEASE_TASKS_RELEASE_Pos)
#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Trigger (1UL)

/* Register: SPIS_EVENTS_END */
/* Description: Granted transaction completed */

/* Bit 0 : Granted transaction completed */
#define SPIS_EVENTS_END_EVENTS_END_Pos (0UL)
#define SPIS_EVENTS_END_EVENTS_END_Msk (0x1UL << SPIS_EVENTS_END_EVENTS_END_Pos)
#define SPIS_EVENTS_END_EVENTS_END_NotGenerated (0UL)
#define SPIS_EVENTS_END_EVENTS_END_Generated (1UL)

/* Register: SPIS_EVENTS_ENDRX */
/* Description: End of RXD buffer reached */

/* Bit 0 : End of RXD buffer reached */
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL)
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Pos)
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0UL)
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Generated (1UL)

/* Register: SPIS_EVENTS_ACQUIRED */
/* Description: Semaphore acquired */

/* Bit 0 : Semaphore acquired */
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Pos (0UL)
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Msk (0x1UL << SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Pos)
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_NotGenerated (0UL)
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Generated (1UL)

/* Register: SPIS_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 2 : Shortcut between event END and task ACQUIRE */
#define SPIS_SHORTS_END_ACQUIRE_Pos (2UL)
#define SPIS_SHORTS_END_ACQUIRE_Msk (0x1UL << SPIS_SHORTS_END_ACQUIRE_Pos)
#define SPIS_SHORTS_END_ACQUIRE_Disabled (0UL)
#define SPIS_SHORTS_END_ACQUIRE_Enabled (1UL)

/* Register: SPIS_INTENSET */
/* Description: Enable interrupt */

/* Bit 10 : Write '1' to enable interrupt for event ACQUIRED */
#define SPIS_INTENSET_ACQUIRED_Pos (10UL)
#define SPIS_INTENSET_ACQUIRED_Msk (0x1UL << SPIS_INTENSET_ACQUIRED_Pos)
#define SPIS_INTENSET_ACQUIRED_Disabled (0UL)
#define SPIS_INTENSET_ACQUIRED_Enabled (1UL)
#define SPIS_INTENSET_ACQUIRED_Set (1UL)

/* Bit 4 : Write '1' to enable interrupt for event ENDRX */
#define SPIS_INTENSET_ENDRX_Pos (4UL)
#define SPIS_INTENSET_ENDRX_Msk (0x1UL << SPIS_INTENSET_ENDRX_Pos)
#define SPIS_INTENSET_ENDRX_Disabled (0UL)
#define SPIS_INTENSET_ENDRX_Enabled (1UL)
#define SPIS_INTENSET_ENDRX_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event END */
#define SPIS_INTENSET_END_Pos (1UL)
#define SPIS_INTENSET_END_Msk (0x1UL << SPIS_INTENSET_END_Pos)
#define SPIS_INTENSET_END_Disabled (0UL)
#define SPIS_INTENSET_END_Enabled (1UL)
#define SPIS_INTENSET_END_Set (1UL)

/* Register: SPIS_INTENCLR */
/* Description: Disable interrupt */

/* Bit 10 : Write '1' to disable interrupt for event ACQUIRED */
#define SPIS_INTENCLR_ACQUIRED_Pos (10UL)
#define SPIS_INTENCLR_ACQUIRED_Msk (0x1UL << SPIS_INTENCLR_ACQUIRED_Pos)
#define SPIS_INTENCLR_ACQUIRED_Disabled (0UL)
#define SPIS_INTENCLR_ACQUIRED_Enabled (1UL)
#define SPIS_INTENCLR_ACQUIRED_Clear (1UL)

/* Bit 4 : Write '1' to disable interrupt for event ENDRX */
#define SPIS_INTENCLR_ENDRX_Pos (4UL)
#define SPIS_INTENCLR_ENDRX_Msk (0x1UL << SPIS_INTENCLR_ENDRX_Pos)
#define SPIS_INTENCLR_ENDRX_Disabled (0UL)
#define SPIS_INTENCLR_ENDRX_Enabled (1UL)
#define SPIS_INTENCLR_ENDRX_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event END */
#define SPIS_INTENCLR_END_Pos (1UL)
#define SPIS_INTENCLR_END_Msk (0x1UL << SPIS_INTENCLR_END_Pos)
#define SPIS_INTENCLR_END_Disabled (0UL)
#define SPIS_INTENCLR_END_Enabled (1UL)
#define SPIS_INTENCLR_END_Clear (1UL)

/* Register: SPIS_SEMSTAT */
/* Description: Semaphore status register */

/* Bits 1..0 : Semaphore status */
#define SPIS_SEMSTAT_SEMSTAT_Pos (0UL)
#define SPIS_SEMSTAT_SEMSTAT_Msk (0x3UL << SPIS_SEMSTAT_SEMSTAT_Pos)
#define SPIS_SEMSTAT_SEMSTAT_Free (0UL)
#define SPIS_SEMSTAT_SEMSTAT_CPU (1UL)
#define SPIS_SEMSTAT_SEMSTAT_SPIS (2UL)
#define SPIS_SEMSTAT_SEMSTAT_CPUPending (3UL)

/* Register: SPIS_STATUS */
/* Description: Status from last transaction */

/* Bit 1 : RX buffer overflow detected, and prevented */
#define SPIS_STATUS_OVERFLOW_Pos (1UL)
#define SPIS_STATUS_OVERFLOW_Msk (0x1UL << SPIS_STATUS_OVERFLOW_Pos)
#define SPIS_STATUS_OVERFLOW_NotPresent (0UL)
#define SPIS_STATUS_OVERFLOW_Present (1UL)
#define SPIS_STATUS_OVERFLOW_Clear (1UL)

/* Bit 0 : TX buffer over-read detected, and prevented */
#define SPIS_STATUS_OVERREAD_Pos (0UL)
#define SPIS_STATUS_OVERREAD_Msk (0x1UL << SPIS_STATUS_OVERREAD_Pos)
#define SPIS_STATUS_OVERREAD_NotPresent (0UL)
#define SPIS_STATUS_OVERREAD_Present (1UL)
#define SPIS_STATUS_OVERREAD_Clear (1UL)

/* Register: SPIS_ENABLE */
/* Description: Enable SPI slave */

/* Bits 3..0 : Enable or disable SPI slave */
#define SPIS_ENABLE_ENABLE_Pos (0UL)
#define SPIS_ENABLE_ENABLE_Msk (0xFUL << SPIS_ENABLE_ENABLE_Pos)
#define SPIS_ENABLE_ENABLE_Disabled (0UL)
#define SPIS_ENABLE_ENABLE_Enabled (2UL)

/* Register: SPIS_PSEL_SCK */
/* Description: Pin select for SCK */

/* Bit 31 : Connection */
#define SPIS_PSEL_SCK_CONNECT_Pos (31UL)
#define SPIS_PSEL_SCK_CONNECT_Msk (0x1UL << SPIS_PSEL_SCK_CONNECT_Pos)
#define SPIS_PSEL_SCK_CONNECT_Connected (0UL)
#define SPIS_PSEL_SCK_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define SPIS_PSEL_SCK_PORT_Pos (5UL)
#define SPIS_PSEL_SCK_PORT_Msk (0x1UL << SPIS_PSEL_SCK_PORT_Pos)

/* Bits 4..0 : Pin number */
#define SPIS_PSEL_SCK_PIN_Pos (0UL)
#define SPIS_PSEL_SCK_PIN_Msk (0x1FUL << SPIS_PSEL_SCK_PIN_Pos)

/* Register: SPIS_PSEL_MISO */
/* Description: Pin select for MISO signal */

/* Bit 31 : Connection */
#define SPIS_PSEL_MISO_CONNECT_Pos (31UL)
#define SPIS_PSEL_MISO_CONNECT_Msk (0x1UL << SPIS_PSEL_MISO_CONNECT_Pos)
#define SPIS_PSEL_MISO_CONNECT_Connected (0UL)
#define SPIS_PSEL_MISO_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define SPIS_PSEL_MISO_PORT_Pos (5UL)
#define SPIS_PSEL_MISO_PORT_Msk (0x1UL << SPIS_PSEL_MISO_PORT_Pos)

/* Bits 4..0 : Pin number */
#define SPIS_PSEL_MISO_PIN_Pos (0UL)
#define SPIS_PSEL_MISO_PIN_Msk (0x1FUL << SPIS_PSEL_MISO_PIN_Pos)

/* Register: SPIS_PSEL_MOSI */
/* Description: Pin select for MOSI signal */

/* Bit 31 : Connection */
#define SPIS_PSEL_MOSI_CONNECT_Pos (31UL)
#define SPIS_PSEL_MOSI_CONNECT_Msk (0x1UL << SPIS_PSEL_MOSI_CONNECT_Pos)
#define SPIS_PSEL_MOSI_CONNECT_Connected (0UL)
#define SPIS_PSEL_MOSI_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define SPIS_PSEL_MOSI_PORT_Pos (5UL)
#define SPIS_PSEL_MOSI_PORT_Msk (0x1UL << SPIS_PSEL_MOSI_PORT_Pos)

/* Bits 4..0 : Pin number */
#define SPIS_PSEL_MOSI_PIN_Pos (0UL)
#define SPIS_PSEL_MOSI_PIN_Msk (0x1FUL << SPIS_PSEL_MOSI_PIN_Pos)

/* Register: SPIS_PSEL_CSN */
/* Description: Pin select for CSN signal */

/* Bit 31 : Connection */
#define SPIS_PSEL_CSN_CONNECT_Pos (31UL)
#define SPIS_PSEL_CSN_CONNECT_Msk (0x1UL << SPIS_PSEL_CSN_CONNECT_Pos)
#define SPIS_PSEL_CSN_CONNECT_Connected (0UL)
#define SPIS_PSEL_CSN_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define SPIS_PSEL_CSN_PORT_Pos (5UL)
#define SPIS_PSEL_CSN_PORT_Msk (0x1UL << SPIS_PSEL_CSN_PORT_Pos)

/* Bits 4..0 : Pin number */
#define SPIS_PSEL_CSN_PIN_Pos (0UL)
#define SPIS_PSEL_CSN_PIN_Msk (0x1FUL << SPIS_PSEL_CSN_PIN_Pos)

/* Register: SPIS_RXD_PTR */
/* Description: RXD data pointer */

/* Bits 31..0 : RXD data pointer */
#define SPIS_RXD_PTR_PTR_Pos (0UL)
#define SPIS_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIS_RXD_PTR_PTR_Pos)

/* Register: SPIS_RXD_MAXCNT */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 15..0 : Maximum number of bytes in receive buffer */
#define SPIS_RXD_MAXCNT_MAXCNT_Pos (0UL)
#define SPIS_RXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << SPIS_RXD_MAXCNT_MAXCNT_Pos)

/* Register: SPIS_RXD_AMOUNT */
/* Description: Number of bytes received in last granted transaction */

/* Bits 15..0 : Number of bytes received in the last granted transaction */
#define SPIS_RXD_AMOUNT_AMOUNT_Pos (0UL)
#define SPIS_RXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << SPIS_RXD_AMOUNT_AMOUNT_Pos)

/* Register: SPIS_RXD_LIST */
/* Description: EasyDMA list type */

/* Bits 1..0 : List type */
#define SPIS_RXD_LIST_LIST_Pos (0UL)
#define SPIS_RXD_LIST_LIST_Msk (0x3UL << SPIS_RXD_LIST_LIST_Pos)
#define SPIS_RXD_LIST_LIST_Disabled (0UL)
#define SPIS_RXD_LIST_LIST_ArrayList (1UL)

/* Register: SPIS_TXD_PTR */
/* Description: TXD data pointer */

/* Bits 31..0 : TXD data pointer */
#define SPIS_TXD_PTR_PTR_Pos (0UL)
#define SPIS_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIS_TXD_PTR_PTR_Pos)

/* Register: SPIS_TXD_MAXCNT */
/* Description: Maximum number of bytes in transmit buffer */

/* Bits 15..0 : Maximum number of bytes in transmit buffer */
#define SPIS_TXD_MAXCNT_MAXCNT_Pos (0UL)
#define SPIS_TXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << SPIS_TXD_MAXCNT_MAXCNT_Pos)

/* Register: SPIS_TXD_AMOUNT */
/* Description: Number of bytes transmitted in last granted transaction */

/* Bits 15..0 : Number of bytes transmitted in last granted transaction */
#define SPIS_TXD_AMOUNT_AMOUNT_Pos (0UL)
#define SPIS_TXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << SPIS_TXD_AMOUNT_AMOUNT_Pos)

/* Register: SPIS_TXD_LIST */
/* Description: EasyDMA list type */

/* Bits 1..0 : List type */
#define SPIS_TXD_LIST_LIST_Pos (0UL)
#define SPIS_TXD_LIST_LIST_Msk (0x3UL << SPIS_TXD_LIST_LIST_Pos)
#define SPIS_TXD_LIST_LIST_Disabled (0UL)
#define SPIS_TXD_LIST_LIST_ArrayList (1UL)

/* Register: SPIS_CONFIG */
/* Description: Configuration register */

/* Bit 2 : Serial clock (SCK) polarity */
#define SPIS_CONFIG_CPOL_Pos (2UL)
#define SPIS_CONFIG_CPOL_Msk (0x1UL << SPIS_CONFIG_CPOL_Pos)
#define SPIS_CONFIG_CPOL_ActiveHigh (0UL)
#define SPIS_CONFIG_CPOL_ActiveLow (1UL)

/* Bit 1 : Serial clock (SCK) phase */
#define SPIS_CONFIG_CPHA_Pos (1UL)
#define SPIS_CONFIG_CPHA_Msk (0x1UL << SPIS_CONFIG_CPHA_Pos)
#define SPIS_CONFIG_CPHA_Leading (0UL)
#define SPIS_CONFIG_CPHA_Trailing (1UL)

/* Bit 0 : Bit order */
#define SPIS_CONFIG_ORDER_Pos (0UL)
#define SPIS_CONFIG_ORDER_Msk (0x1UL << SPIS_CONFIG_ORDER_Pos)
#define SPIS_CONFIG_ORDER_MsbFirst (0UL)
#define SPIS_CONFIG_ORDER_LsbFirst (1UL)

/* Register: SPIS_DEF */
/* Description: Default character. Character clocked out in case of an ignored transaction. */

/* Bits 7..0 : Default character. Character clocked out in case of an ignored transaction. */
#define SPIS_DEF_DEF_Pos (0UL)
#define SPIS_DEF_DEF_Msk (0xFFUL << SPIS_DEF_DEF_Pos)

/* Register: SPIS_ORC */
/* Description: Over-read character */

/* Bits 7..0 : Over-read character. Character clocked out after an over-read of the transmit buffer. */
#define SPIS_ORC_ORC_Pos (0UL)
#define SPIS_ORC_ORC_Msk (0xFFUL << SPIS_ORC_ORC_Pos)


/* Peripheral: TEMP */
/* Description: Temperature Sensor */

/* Register: TEMP_TASKS_START */
/* Description: Start temperature measurement */

/* Bit 0 : Start temperature measurement */
#define TEMP_TASKS_START_TASKS_START_Pos (0UL)
#define TEMP_TASKS_START_TASKS_START_Msk (0x1UL << TEMP_TASKS_START_TASKS_START_Pos)
#define TEMP_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: TEMP_TASKS_STOP */
/* Description: Stop temperature measurement */

/* Bit 0 : Stop temperature measurement */
#define TEMP_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TEMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TEMP_TASKS_STOP_TASKS_STOP_Pos)
#define TEMP_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: TEMP_EVENTS_DATARDY */
/* Description: Temperature measurement complete, data ready */

/* Bit 0 : Temperature measurement complete, data ready */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos (0UL)
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Msk (0x1UL << TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos)
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_NotGenerated (0UL)
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Generated (1UL)

/* Register: TEMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event DATARDY */
#define TEMP_INTENSET_DATARDY_Pos (0UL)
#define TEMP_INTENSET_DATARDY_Msk (0x1UL << TEMP_INTENSET_DATARDY_Pos)
#define TEMP_INTENSET_DATARDY_Disabled (0UL)
#define TEMP_INTENSET_DATARDY_Enabled (1UL)
#define TEMP_INTENSET_DATARDY_Set (1UL)

/* Register: TEMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event DATARDY */
#define TEMP_INTENCLR_DATARDY_Pos (0UL)
#define TEMP_INTENCLR_DATARDY_Msk (0x1UL << TEMP_INTENCLR_DATARDY_Pos)
#define TEMP_INTENCLR_DATARDY_Disabled (0UL)
#define TEMP_INTENCLR_DATARDY_Enabled (1UL)
#define TEMP_INTENCLR_DATARDY_Clear (1UL)

/* Register: TEMP_TEMP */
/* Description: Temperature in degC (0.25deg steps) */

/* Bits 31..0 : Temperature in degC (0.25deg steps) */
#define TEMP_TEMP_TEMP_Pos (0UL)
#define TEMP_TEMP_TEMP_Msk (0xFFFFFFFFUL << TEMP_TEMP_TEMP_Pos)

/* Register: TEMP_A0 */
/* Description: Slope of first piecewise linear function */

/* Bits 11..0 : Slope of first piecewise linear function */
#define TEMP_A0_A0_Pos (0UL)
#define TEMP_A0_A0_Msk (0xFFFUL << TEMP_A0_A0_Pos)

/* Register: TEMP_A1 */
/* Description: Slope of second piecewise linear function */

/* Bits 11..0 : Slope of second piecewise linear function */
#define TEMP_A1_A1_Pos (0UL)
#define TEMP_A1_A1_Msk (0xFFFUL << TEMP_A1_A1_Pos)

/* Register: TEMP_A2 */
/* Description: Slope of third piecewise linear function */

/* Bits 11..0 : Slope of third piecewise linear function */
#define TEMP_A2_A2_Pos (0UL)
#define TEMP_A2_A2_Msk (0xFFFUL << TEMP_A2_A2_Pos)

/* Register: TEMP_A3 */
/* Description: Slope of fourth piecewise linear function */

/* Bits 11..0 : Slope of fourth piecewise linear function */
#define TEMP_A3_A3_Pos (0UL)
#define TEMP_A3_A3_Msk (0xFFFUL << TEMP_A3_A3_Pos)

/* Register: TEMP_A4 */
/* Description: Slope of fifth piecewise linear function */

/* Bits 11..0 : Slope of fifth piecewise linear function */
#define TEMP_A4_A4_Pos (0UL)
#define TEMP_A4_A4_Msk (0xFFFUL << TEMP_A4_A4_Pos)

/* Register: TEMP_A5 */
/* Description: Slope of sixth piecewise linear function */

/* Bits 11..0 : Slope of sixth piecewise linear function */
#define TEMP_A5_A5_Pos (0UL)
#define TEMP_A5_A5_Msk (0xFFFUL << TEMP_A5_A5_Pos)

/* Register: TEMP_B0 */
/* Description: y-intercept of first piecewise linear function */

/* Bits 13..0 : y-intercept of first piecewise linear function */
#define TEMP_B0_B0_Pos (0UL)
#define TEMP_B0_B0_Msk (0x3FFFUL << TEMP_B0_B0_Pos)

/* Register: TEMP_B1 */
/* Description: y-intercept of second piecewise linear function */

/* Bits 13..0 : y-intercept of second piecewise linear function */
#define TEMP_B1_B1_Pos (0UL)
#define TEMP_B1_B1_Msk (0x3FFFUL << TEMP_B1_B1_Pos)

/* Register: TEMP_B2 */
/* Description: y-intercept of third piecewise linear function */

/* Bits 13..0 : y-intercept of third piecewise linear function */
#define TEMP_B2_B2_Pos (0UL)
#define TEMP_B2_B2_Msk (0x3FFFUL << TEMP_B2_B2_Pos)

/* Register: TEMP_B3 */
/* Description: y-intercept of fourth piecewise linear function */

/* Bits 13..0 : y-intercept of fourth piecewise linear function */
#define TEMP_B3_B3_Pos (0UL)
#define TEMP_B3_B3_Msk (0x3FFFUL << TEMP_B3_B3_Pos)

/* Register: TEMP_B4 */
/* Description: y-intercept of fifth piecewise linear function */

/* Bits 13..0 : y-intercept of fifth piecewise linear function */
#define TEMP_B4_B4_Pos (0UL)
#define TEMP_B4_B4_Msk (0x3FFFUL << TEMP_B4_B4_Pos)

/* Register: TEMP_B5 */
/* Description: y-intercept of sixth piecewise linear function */

/* Bits 13..0 : y-intercept of sixth piecewise linear function */
#define TEMP_B5_B5_Pos (0UL)
#define TEMP_B5_B5_Msk (0x3FFFUL << TEMP_B5_B5_Pos)

/* Register: TEMP_T0 */
/* Description: End point of first piecewise linear function */

/* Bits 7..0 : End point of first piecewise linear function */
#define TEMP_T0_T0_Pos (0UL)
#define TEMP_T0_T0_Msk (0xFFUL << TEMP_T0_T0_Pos)

/* Register: TEMP_T1 */
/* Description: End point of second piecewise linear function */

/* Bits 7..0 : End point of second piecewise linear function */
#define TEMP_T1_T1_Pos (0UL)
#define TEMP_T1_T1_Msk (0xFFUL << TEMP_T1_T1_Pos)

/* Register: TEMP_T2 */
/* Description: End point of third piecewise linear function */

/* Bits 7..0 : End point of third piecewise linear function */
#define TEMP_T2_T2_Pos (0UL)
#define TEMP_T2_T2_Msk (0xFFUL << TEMP_T2_T2_Pos)

/* Register: TEMP_T3 */
/* Description: End point of fourth piecewise linear function */

/* Bits 7..0 : End point of fourth piecewise linear function */
#define TEMP_T3_T3_Pos (0UL)
#define TEMP_T3_T3_Msk (0xFFUL << TEMP_T3_T3_Pos)

/* Register: TEMP_T4 */
/* Description: End point of fifth piecewise linear function */

/* Bits 7..0 : End point of fifth piecewise linear function */
#define TEMP_T4_T4_Pos (0UL)
#define TEMP_T4_T4_Msk (0xFFUL << TEMP_T4_T4_Pos)


/* Peripheral: TIMER */
/* Description: Timer/Counter 0 */

/* Register: TIMER_TASKS_START */
/* Description: Start Timer */

/* Bit 0 : Start Timer */
#define TIMER_TASKS_START_TASKS_START_Pos (0UL)
#define TIMER_TASKS_START_TASKS_START_Msk (0x1UL << TIMER_TASKS_START_TASKS_START_Pos)
#define TIMER_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: TIMER_TASKS_STOP */
/* Description: Stop Timer */

/* Bit 0 : Stop Timer */
#define TIMER_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TIMER_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TIMER_TASKS_STOP_TASKS_STOP_Pos)
#define TIMER_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: TIMER_TASKS_COUNT */
/* Description: Increment Timer (Counter mode only) */

/* Bit 0 : Increment Timer (Counter mode only) */
#define TIMER_TASKS_COUNT_TASKS_COUNT_Pos (0UL)
#define TIMER_TASKS_COUNT_TASKS_COUNT_Msk (0x1UL << TIMER_TASKS_COUNT_TASKS_COUNT_Pos)
#define TIMER_TASKS_COUNT_TASKS_COUNT_Trigger (1UL)

/* Register: TIMER_TASKS_CLEAR */
/* Description: Clear time */

/* Bit 0 : Clear time */
#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Pos (0UL)
#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Msk (0x1UL << TIMER_TASKS_CLEAR_TASKS_CLEAR_Pos)
#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Trigger (1UL)

/* Register: TIMER_TASKS_SHUTDOWN */
/* Description: Deprecated register - Shut down timer */

/* Bit 0 : Deprecated field -  Shut down timer */
#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos (0UL)
#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Msk (0x1UL << TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos)
#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Trigger (1UL)

/* Register: TIMER_TASKS_CAPTURE */
/* Description: Description collection: Capture Timer value to CC[n] register */

/* Bit 0 : Capture Timer value to CC[n] register */
#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Pos (0UL)
#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Msk (0x1UL << TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Pos)
#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Trigger (1UL)

/* Register: TIMER_EVENTS_COMPARE */
/* Description: Description collection: Compare event on CC[n] match */

/* Bit 0 : Compare event on CC[n] match */
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos (0UL)
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Msk (0x1UL << TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos)
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_NotGenerated (0UL)
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Generated (1UL)

/* Register: TIMER_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 13 : Shortcut between event COMPARE[5] and task STOP */
#define TIMER_SHORTS_COMPARE5_STOP_Pos (13UL)
#define TIMER_SHORTS_COMPARE5_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE5_STOP_Pos)
#define TIMER_SHORTS_COMPARE5_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE5_STOP_Enabled (1UL)

/* Bit 12 : Shortcut between event COMPARE[4] and task STOP */
#define TIMER_SHORTS_COMPARE4_STOP_Pos (12UL)
#define TIMER_SHORTS_COMPARE4_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE4_STOP_Pos)
#define TIMER_SHORTS_COMPARE4_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE4_STOP_Enabled (1UL)

/* Bit 11 : Shortcut between event COMPARE[3] and task STOP */
#define TIMER_SHORTS_COMPARE3_STOP_Pos (11UL)
#define TIMER_SHORTS_COMPARE3_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE3_STOP_Pos)
#define TIMER_SHORTS_COMPARE3_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE3_STOP_Enabled (1UL)

/* Bit 10 : Shortcut between event COMPARE[2] and task STOP */
#define TIMER_SHORTS_COMPARE2_STOP_Pos (10UL)
#define TIMER_SHORTS_COMPARE2_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE2_STOP_Pos)
#define TIMER_SHORTS_COMPARE2_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE2_STOP_Enabled (1UL)

/* Bit 9 : Shortcut between event COMPARE[1] and task STOP */
#define TIMER_SHORTS_COMPARE1_STOP_Pos (9UL)
#define TIMER_SHORTS_COMPARE1_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE1_STOP_Pos)
#define TIMER_SHORTS_COMPARE1_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE1_STOP_Enabled (1UL)

/* Bit 8 : Shortcut between event COMPARE[0] and task STOP */
#define TIMER_SHORTS_COMPARE0_STOP_Pos (8UL)
#define TIMER_SHORTS_COMPARE0_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE0_STOP_Pos)
#define TIMER_SHORTS_COMPARE0_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE0_STOP_Enabled (1UL)

/* Bit 5 : Shortcut between event COMPARE[5] and task CLEAR */
#define TIMER_SHORTS_COMPARE5_CLEAR_Pos (5UL)
#define TIMER_SHORTS_COMPARE5_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE5_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE5_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE5_CLEAR_Enabled (1UL)

/* Bit 4 : Shortcut between event COMPARE[4] and task CLEAR */
#define TIMER_SHORTS_COMPARE4_CLEAR_Pos (4UL)
#define TIMER_SHORTS_COMPARE4_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE4_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE4_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE4_CLEAR_Enabled (1UL)

/* Bit 3 : Shortcut between event COMPARE[3] and task CLEAR */
#define TIMER_SHORTS_COMPARE3_CLEAR_Pos (3UL)
#define TIMER_SHORTS_COMPARE3_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE3_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE3_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE3_CLEAR_Enabled (1UL)

/* Bit 2 : Shortcut between event COMPARE[2] and task CLEAR */
#define TIMER_SHORTS_COMPARE2_CLEAR_Pos (2UL)
#define TIMER_SHORTS_COMPARE2_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE2_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE2_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE2_CLEAR_Enabled (1UL)

/* Bit 1 : Shortcut between event COMPARE[1] and task CLEAR */
#define TIMER_SHORTS_COMPARE1_CLEAR_Pos (1UL)
#define TIMER_SHORTS_COMPARE1_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE1_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE1_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE1_CLEAR_Enabled (1UL)

/* Bit 0 : Shortcut between event COMPARE[0] and task CLEAR */
#define TIMER_SHORTS_COMPARE0_CLEAR_Pos (0UL)
#define TIMER_SHORTS_COMPARE0_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE0_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE0_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE0_CLEAR_Enabled (1UL)

/* Register: TIMER_INTENSET */
/* Description: Enable interrupt */

/* Bit 21 : Write '1' to enable interrupt for event COMPARE[5] */
#define TIMER_INTENSET_COMPARE5_Pos (21UL)
#define TIMER_INTENSET_COMPARE5_Msk (0x1UL << TIMER_INTENSET_COMPARE5_Pos)
#define TIMER_INTENSET_COMPARE5_Disabled (0UL)
#define TIMER_INTENSET_COMPARE5_Enabled (1UL)
#define TIMER_INTENSET_COMPARE5_Set (1UL)

/* Bit 20 : Write '1' to enable interrupt for event COMPARE[4] */
#define TIMER_INTENSET_COMPARE4_Pos (20UL)
#define TIMER_INTENSET_COMPARE4_Msk (0x1UL << TIMER_INTENSET_COMPARE4_Pos)
#define TIMER_INTENSET_COMPARE4_Disabled (0UL)
#define TIMER_INTENSET_COMPARE4_Enabled (1UL)
#define TIMER_INTENSET_COMPARE4_Set (1UL)

/* Bit 19 : Write '1' to enable interrupt for event COMPARE[3] */
#define TIMER_INTENSET_COMPARE3_Pos (19UL)
#define TIMER_INTENSET_COMPARE3_Msk (0x1UL << TIMER_INTENSET_COMPARE3_Pos)
#define TIMER_INTENSET_COMPARE3_Disabled (0UL)
#define TIMER_INTENSET_COMPARE3_Enabled (1UL)
#define TIMER_INTENSET_COMPARE3_Set (1UL)

/* Bit 18 : Write '1' to enable interrupt for event COMPARE[2] */
#define TIMER_INTENSET_COMPARE2_Pos (18UL)
#define TIMER_INTENSET_COMPARE2_Msk (0x1UL << TIMER_INTENSET_COMPARE2_Pos)
#define TIMER_INTENSET_COMPARE2_Disabled (0UL)
#define TIMER_INTENSET_COMPARE2_Enabled (1UL)
#define TIMER_INTENSET_COMPARE2_Set (1UL)

/* Bit 17 : Write '1' to enable interrupt for event COMPARE[1] */
#define TIMER_INTENSET_COMPARE1_Pos (17UL)
#define TIMER_INTENSET_COMPARE1_Msk (0x1UL << TIMER_INTENSET_COMPARE1_Pos)
#define TIMER_INTENSET_COMPARE1_Disabled (0UL)
#define TIMER_INTENSET_COMPARE1_Enabled (1UL)
#define TIMER_INTENSET_COMPARE1_Set (1UL)

/* Bit 16 : Write '1' to enable interrupt for event COMPARE[0] */
#define TIMER_INTENSET_COMPARE0_Pos (16UL)
#define TIMER_INTENSET_COMPARE0_Msk (0x1UL << TIMER_INTENSET_COMPARE0_Pos)
#define TIMER_INTENSET_COMPARE0_Disabled (0UL)
#define TIMER_INTENSET_COMPARE0_Enabled (1UL)
#define TIMER_INTENSET_COMPARE0_Set (1UL)

/* Register: TIMER_INTENCLR */
/* Description: Disable interrupt */

/* Bit 21 : Write '1' to disable interrupt for event COMPARE[5] */
#define TIMER_INTENCLR_COMPARE5_Pos (21UL)
#define TIMER_INTENCLR_COMPARE5_Msk (0x1UL << TIMER_INTENCLR_COMPARE5_Pos)
#define TIMER_INTENCLR_COMPARE5_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE5_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE5_Clear (1UL)

/* Bit 20 : Write '1' to disable interrupt for event COMPARE[4] */
#define TIMER_INTENCLR_COMPARE4_Pos (20UL)
#define TIMER_INTENCLR_COMPARE4_Msk (0x1UL << TIMER_INTENCLR_COMPARE4_Pos)
#define TIMER_INTENCLR_COMPARE4_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE4_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE4_Clear (1UL)

/* Bit 19 : Write '1' to disable interrupt for event COMPARE[3] */
#define TIMER_INTENCLR_COMPARE3_Pos (19UL)
#define TIMER_INTENCLR_COMPARE3_Msk (0x1UL << TIMER_INTENCLR_COMPARE3_Pos)
#define TIMER_INTENCLR_COMPARE3_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE3_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE3_Clear (1UL)

/* Bit 18 : Write '1' to disable interrupt for event COMPARE[2] */
#define TIMER_INTENCLR_COMPARE2_Pos (18UL)
#define TIMER_INTENCLR_COMPARE2_Msk (0x1UL << TIMER_INTENCLR_COMPARE2_Pos)
#define TIMER_INTENCLR_COMPARE2_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE2_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE2_Clear (1UL)

/* Bit 17 : Write '1' to disable interrupt for event COMPARE[1] */
#define TIMER_INTENCLR_COMPARE1_Pos (17UL)
#define TIMER_INTENCLR_COMPARE1_Msk (0x1UL << TIMER_INTENCLR_COMPARE1_Pos)
#define TIMER_INTENCLR_COMPARE1_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE1_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE1_Clear (1UL)

/* Bit 16 : Write '1' to disable interrupt for event COMPARE[0] */
#define TIMER_INTENCLR_COMPARE0_Pos (16UL)
#define TIMER_INTENCLR_COMPARE0_Msk (0x1UL << TIMER_INTENCLR_COMPARE0_Pos)
#define TIMER_INTENCLR_COMPARE0_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE0_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE0_Clear (1UL)

/* Register: TIMER_MODE */
/* Description: Timer mode selection */

/* Bits 1..0 : Timer mode */
#define TIMER_MODE_MODE_Pos (0UL)
#define TIMER_MODE_MODE_Msk (0x3UL << TIMER_MODE_MODE_Pos)
#define TIMER_MODE_MODE_Timer (0UL)
#define TIMER_MODE_MODE_Counter (1UL)
#define TIMER_MODE_MODE_LowPowerCounter (2UL)

/* Register: TIMER_BITMODE */
/* Description: Configure the number of bits used by the TIMER */

/* Bits 1..0 : Timer bit width */
#define TIMER_BITMODE_BITMODE_Pos (0UL)
#define TIMER_BITMODE_BITMODE_Msk (0x3UL << TIMER_BITMODE_BITMODE_Pos)
#define TIMER_BITMODE_BITMODE_16Bit (0UL)
#define TIMER_BITMODE_BITMODE_08Bit (1UL)
#define TIMER_BITMODE_BITMODE_24Bit (2UL)
#define TIMER_BITMODE_BITMODE_32Bit (3UL)

/* Register: TIMER_PRESCALER */
/* Description: Timer prescaler register */

/* Bits 3..0 : Prescaler value */
#define TIMER_PRESCALER_PRESCALER_Pos (0UL)
#define TIMER_PRESCALER_PRESCALER_Msk (0xFUL << TIMER_PRESCALER_PRESCALER_Pos)

/* Register: TIMER_CC */
/* Description: Description collection: Capture/Compare register n */

/* Bits 31..0 : Capture/Compare value */
#define TIMER_CC_CC_Pos (0UL)
#define TIMER_CC_CC_Msk (0xFFFFFFFFUL << TIMER_CC_CC_Pos)


/* Peripheral: TWI */
/* Description: I2C compatible Two-Wire Interface 0 */

/* Register: TWI_TASKS_STARTRX */
/* Description: Start TWI receive sequence */

/* Bit 0 : Start TWI receive sequence */
#define TWI_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL)
#define TWI_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << TWI_TASKS_STARTRX_TASKS_STARTRX_Pos)
#define TWI_TASKS_STARTRX_TASKS_STARTRX_Trigger (1UL)

/* Register: TWI_TASKS_STARTTX */
/* Description: Start TWI transmit sequence */

/* Bit 0 : Start TWI transmit sequence */
#define TWI_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL)
#define TWI_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << TWI_TASKS_STARTTX_TASKS_STARTTX_Pos)
#define TWI_TASKS_STARTTX_TASKS_STARTTX_Trigger (1UL)

/* Register: TWI_TASKS_STOP */
/* Description: Stop TWI transaction */

/* Bit 0 : Stop TWI transaction */
#define TWI_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TWI_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TWI_TASKS_STOP_TASKS_STOP_Pos)
#define TWI_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: TWI_TASKS_SUSPEND */
/* Description: Suspend TWI transaction */

/* Bit 0 : Suspend TWI transaction */
#define TWI_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL)
#define TWI_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << TWI_TASKS_SUSPEND_TASKS_SUSPEND_Pos)
#define TWI_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (1UL)

/* Register: TWI_TASKS_RESUME */
/* Description: Resume TWI transaction */

/* Bit 0 : Resume TWI transaction */
#define TWI_TASKS_RESUME_TASKS_RESUME_Pos (0UL)
#define TWI_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << TWI_TASKS_RESUME_TASKS_RESUME_Pos)
#define TWI_TASKS_RESUME_TASKS_RESUME_Trigger (1UL)

/* Register: TWI_EVENTS_STOPPED */
/* Description: TWI stopped */

/* Bit 0 : TWI stopped */
#define TWI_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define TWI_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << TWI_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define TWI_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define TWI_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)

/* Register: TWI_EVENTS_RXDREADY */
/* Description: TWI RXD byte received */

/* Bit 0 : TWI RXD byte received */
#define TWI_EVENTS_RXDREADY_EVENTS_RXDREADY_Pos (0UL)
#define TWI_EVENTS_RXDREADY_EVENTS_RXDREADY_Msk (0x1UL << TWI_EVENTS_RXDREADY_EVENTS_RXDREADY_Pos)
#define TWI_EVENTS_RXDREADY_EVENTS_RXDREADY_NotGenerated (0UL)
#define TWI_EVENTS_RXDREADY_EVENTS_RXDREADY_Generated (1UL)

/* Register: TWI_EVENTS_TXDSENT */
/* Description: TWI TXD byte sent */

/* Bit 0 : TWI TXD byte sent */
#define TWI_EVENTS_TXDSENT_EVENTS_TXDSENT_Pos (0UL)
#define TWI_EVENTS_TXDSENT_EVENTS_TXDSENT_Msk (0x1UL << TWI_EVENTS_TXDSENT_EVENTS_TXDSENT_Pos)
#define TWI_EVENTS_TXDSENT_EVENTS_TXDSENT_NotGenerated (0UL)
#define TWI_EVENTS_TXDSENT_EVENTS_TXDSENT_Generated (1UL)

/* Register: TWI_EVENTS_ERROR */
/* Description: TWI error */

/* Bit 0 : TWI error */
#define TWI_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define TWI_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << TWI_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define TWI_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define TWI_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)

/* Register: TWI_EVENTS_BB */
/* Description: TWI byte boundary, generated before each byte that is sent or received */

/* Bit 0 : TWI byte boundary, generated before each byte that is sent or received */
#define TWI_EVENTS_BB_EVENTS_BB_Pos (0UL)
#define TWI_EVENTS_BB_EVENTS_BB_Msk (0x1UL << TWI_EVENTS_BB_EVENTS_BB_Pos)
#define TWI_EVENTS_BB_EVENTS_BB_NotGenerated (0UL)
#define TWI_EVENTS_BB_EVENTS_BB_Generated (1UL)

/* Register: TWI_EVENTS_SUSPENDED */
/* Description: TWI entered the suspended state */

/* Bit 0 : TWI entered the suspended state */
#define TWI_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos (0UL)
#define TWI_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Msk (0x1UL << TWI_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos)
#define TWI_EVENTS_SUSPENDED_EVENTS_SUSPENDED_NotGenerated (0UL)
#define TWI_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Generated (1UL)

/* Register: TWI_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 1 : Shortcut between event BB and task STOP */
#define TWI_SHORTS_BB_STOP_Pos (1UL)
#define TWI_SHORTS_BB_STOP_Msk (0x1UL << TWI_SHORTS_BB_STOP_Pos)
#define TWI_SHORTS_BB_STOP_Disabled (0UL)
#define TWI_SHORTS_BB_STOP_Enabled (1UL)

/* Bit 0 : Shortcut between event BB and task SUSPEND */
#define TWI_SHORTS_BB_SUSPEND_Pos (0UL)
#define TWI_SHORTS_BB_SUSPEND_Msk (0x1UL << TWI_SHORTS_BB_SUSPEND_Pos)
#define TWI_SHORTS_BB_SUSPEND_Disabled (0UL)
#define TWI_SHORTS_BB_SUSPEND_Enabled (1UL)

/* Register: TWI_INTENSET */
/* Description: Enable interrupt */

/* Bit 18 : Write '1' to enable interrupt for event SUSPENDED */
#define TWI_INTENSET_SUSPENDED_Pos (18UL)
#define TWI_INTENSET_SUSPENDED_Msk (0x1UL << TWI_INTENSET_SUSPENDED_Pos)
#define TWI_INTENSET_SUSPENDED_Disabled (0UL)
#define TWI_INTENSET_SUSPENDED_Enabled (1UL)
#define TWI_INTENSET_SUSPENDED_Set (1UL)

/* Bit 14 : Write '1' to enable interrupt for event BB */
#define TWI_INTENSET_BB_Pos (14UL)
#define TWI_INTENSET_BB_Msk (0x1UL << TWI_INTENSET_BB_Pos)
#define TWI_INTENSET_BB_Disabled (0UL)
#define TWI_INTENSET_BB_Enabled (1UL)
#define TWI_INTENSET_BB_Set (1UL)

/* Bit 9 : Write '1' to enable interrupt for event ERROR */
#define TWI_INTENSET_ERROR_Pos (9UL)
#define TWI_INTENSET_ERROR_Msk (0x1UL << TWI_INTENSET_ERROR_Pos)
#define TWI_INTENSET_ERROR_Disabled (0UL)
#define TWI_INTENSET_ERROR_Enabled (1UL)
#define TWI_INTENSET_ERROR_Set (1UL)

/* Bit 7 : Write '1' to enable interrupt for event TXDSENT */
#define TWI_INTENSET_TXDSENT_Pos (7UL)
#define TWI_INTENSET_TXDSENT_Msk (0x1UL << TWI_INTENSET_TXDSENT_Pos)
#define TWI_INTENSET_TXDSENT_Disabled (0UL)
#define TWI_INTENSET_TXDSENT_Enabled (1UL)
#define TWI_INTENSET_TXDSENT_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event RXDREADY */
#define TWI_INTENSET_RXDREADY_Pos (2UL)
#define TWI_INTENSET_RXDREADY_Msk (0x1UL << TWI_INTENSET_RXDREADY_Pos)
#define TWI_INTENSET_RXDREADY_Disabled (0UL)
#define TWI_INTENSET_RXDREADY_Enabled (1UL)
#define TWI_INTENSET_RXDREADY_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define TWI_INTENSET_STOPPED_Pos (1UL)
#define TWI_INTENSET_STOPPED_Msk (0x1UL << TWI_INTENSET_STOPPED_Pos)
#define TWI_INTENSET_STOPPED_Disabled (0UL)
#define TWI_INTENSET_STOPPED_Enabled (1UL)
#define TWI_INTENSET_STOPPED_Set (1UL)

/* Register: TWI_INTENCLR */
/* Description: Disable interrupt */

/* Bit 18 : Write '1' to disable interrupt for event SUSPENDED */
#define TWI_INTENCLR_SUSPENDED_Pos (18UL)
#define TWI_INTENCLR_SUSPENDED_Msk (0x1UL << TWI_INTENCLR_SUSPENDED_Pos)
#define TWI_INTENCLR_SUSPENDED_Disabled (0UL)
#define TWI_INTENCLR_SUSPENDED_Enabled (1UL)
#define TWI_INTENCLR_SUSPENDED_Clear (1UL)

/* Bit 14 : Write '1' to disable interrupt for event BB */
#define TWI_INTENCLR_BB_Pos (14UL)
#define TWI_INTENCLR_BB_Msk (0x1UL << TWI_INTENCLR_BB_Pos)
#define TWI_INTENCLR_BB_Disabled (0UL)
#define TWI_INTENCLR_BB_Enabled (1UL)
#define TWI_INTENCLR_BB_Clear (1UL)

/* Bit 9 : Write '1' to disable interrupt for event ERROR */
#define TWI_INTENCLR_ERROR_Pos (9UL)
#define TWI_INTENCLR_ERROR_Msk (0x1UL << TWI_INTENCLR_ERROR_Pos)
#define TWI_INTENCLR_ERROR_Disabled (0UL)
#define TWI_INTENCLR_ERROR_Enabled (1UL)
#define TWI_INTENCLR_ERROR_Clear (1UL)

/* Bit 7 : Write '1' to disable interrupt for event TXDSENT */
#define TWI_INTENCLR_TXDSENT_Pos (7UL)
#define TWI_INTENCLR_TXDSENT_Msk (0x1UL << TWI_INTENCLR_TXDSENT_Pos)
#define TWI_INTENCLR_TXDSENT_Disabled (0UL)
#define TWI_INTENCLR_TXDSENT_Enabled (1UL)
#define TWI_INTENCLR_TXDSENT_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event RXDREADY */
#define TWI_INTENCLR_RXDREADY_Pos (2UL)
#define TWI_INTENCLR_RXDREADY_Msk (0x1UL << TWI_INTENCLR_RXDREADY_Pos)
#define TWI_INTENCLR_RXDREADY_Disabled (0UL)
#define TWI_INTENCLR_RXDREADY_Enabled (1UL)
#define TWI_INTENCLR_RXDREADY_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define TWI_INTENCLR_STOPPED_Pos (1UL)
#define TWI_INTENCLR_STOPPED_Msk (0x1UL << TWI_INTENCLR_STOPPED_Pos)
#define TWI_INTENCLR_STOPPED_Disabled (0UL)
#define TWI_INTENCLR_STOPPED_Enabled (1UL)
#define TWI_INTENCLR_STOPPED_Clear (1UL)

/* Register: TWI_ERRORSRC */
/* Description: Error source */

/* Bit 2 : NACK received after sending a data byte (write '1' to clear) */
#define TWI_ERRORSRC_DNACK_Pos (2UL)
#define TWI_ERRORSRC_DNACK_Msk (0x1UL << TWI_ERRORSRC_DNACK_Pos)
#define TWI_ERRORSRC_DNACK_NotPresent (0UL)
#define TWI_ERRORSRC_DNACK_Present (1UL)

/* Bit 1 : NACK received after sending the address (write '1' to clear) */
#define TWI_ERRORSRC_ANACK_Pos (1UL)
#define TWI_ERRORSRC_ANACK_Msk (0x1UL << TWI_ERRORSRC_ANACK_Pos)
#define TWI_ERRORSRC_ANACK_NotPresent (0UL)
#define TWI_ERRORSRC_ANACK_Present (1UL)

/* Bit 0 : Overrun error */
#define TWI_ERRORSRC_OVERRUN_Pos (0UL)
#define TWI_ERRORSRC_OVERRUN_Msk (0x1UL << TWI_ERRORSRC_OVERRUN_Pos)
#define TWI_ERRORSRC_OVERRUN_NotPresent (0UL)
#define TWI_ERRORSRC_OVERRUN_Present (1UL)

/* Register: TWI_ENABLE */
/* Description: Enable TWI */

/* Bits 3..0 : Enable or disable TWI */
#define TWI_ENABLE_ENABLE_Pos (0UL)
#define TWI_ENABLE_ENABLE_Msk (0xFUL << TWI_ENABLE_ENABLE_Pos)
#define TWI_ENABLE_ENABLE_Disabled (0UL)
#define TWI_ENABLE_ENABLE_Enabled (5UL)

/* Register: TWI_PSEL_SCL */
/* Description: Pin select for SCL */

/* Bit 31 : Connection */
#define TWI_PSEL_SCL_CONNECT_Pos (31UL)
#define TWI_PSEL_SCL_CONNECT_Msk (0x1UL << TWI_PSEL_SCL_CONNECT_Pos)
#define TWI_PSEL_SCL_CONNECT_Connected (0UL)
#define TWI_PSEL_SCL_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define TWI_PSEL_SCL_PORT_Pos (5UL)
#define TWI_PSEL_SCL_PORT_Msk (0x1UL << TWI_PSEL_SCL_PORT_Pos)

/* Bits 4..0 : Pin number */
#define TWI_PSEL_SCL_PIN_Pos (0UL)
#define TWI_PSEL_SCL_PIN_Msk (0x1FUL << TWI_PSEL_SCL_PIN_Pos)

/* Register: TWI_PSEL_SDA */
/* Description: Pin select for SDA */

/* Bit 31 : Connection */
#define TWI_PSEL_SDA_CONNECT_Pos (31UL)
#define TWI_PSEL_SDA_CONNECT_Msk (0x1UL << TWI_PSEL_SDA_CONNECT_Pos)
#define TWI_PSEL_SDA_CONNECT_Connected (0UL)
#define TWI_PSEL_SDA_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define TWI_PSEL_SDA_PORT_Pos (5UL)
#define TWI_PSEL_SDA_PORT_Msk (0x1UL << TWI_PSEL_SDA_PORT_Pos)

/* Bits 4..0 : Pin number */
#define TWI_PSEL_SDA_PIN_Pos (0UL)
#define TWI_PSEL_SDA_PIN_Msk (0x1FUL << TWI_PSEL_SDA_PIN_Pos)

/* Register: TWI_RXD */
/* Description: RXD register */

/* Bits 7..0 : RXD register */
#define TWI_RXD_RXD_Pos (0UL)
#define TWI_RXD_RXD_Msk (0xFFUL << TWI_RXD_RXD_Pos)

/* Register: TWI_TXD */
/* Description: TXD register */

/* Bits 7..0 : TXD register */
#define TWI_TXD_TXD_Pos (0UL)
#define TWI_TXD_TXD_Msk (0xFFUL << TWI_TXD_TXD_Pos)

/* Register: TWI_FREQUENCY */
/* Description: TWI frequency. Accuracy depends on the HFCLK source selected. */

/* Bits 31..0 : TWI master clock frequency */
#define TWI_FREQUENCY_FREQUENCY_Pos (0UL)
#define TWI_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << TWI_FREQUENCY_FREQUENCY_Pos)
#define TWI_FREQUENCY_FREQUENCY_K100 (0x01980000UL)
#define TWI_FREQUENCY_FREQUENCY_K250 (0x04000000UL)
#define TWI_FREQUENCY_FREQUENCY_K400 (0x06680000UL)

/* Register: TWI_ADDRESS */
/* Description: Address used in the TWI transfer */

/* Bits 6..0 : Address used in the TWI transfer */
#define TWI_ADDRESS_ADDRESS_Pos (0UL)
#define TWI_ADDRESS_ADDRESS_Msk (0x7FUL << TWI_ADDRESS_ADDRESS_Pos)


/* Peripheral: TWIM */
/* Description: I2C compatible Two-Wire Master Interface with EasyDMA 0 */

/* Register: TWIM_TASKS_STARTRX */
/* Description: Start TWI receive sequence */

/* Bit 0 : Start TWI receive sequence */
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL)
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << TWIM_TASKS_STARTRX_TASKS_STARTRX_Pos)
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Trigger (1UL)

/* Register: TWIM_TASKS_STARTTX */
/* Description: Start TWI transmit sequence */

/* Bit 0 : Start TWI transmit sequence */
#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL)
#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << TWIM_TASKS_STARTTX_TASKS_STARTTX_Pos)
#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Trigger (1UL)

/* Register: TWIM_TASKS_STOP */
/* Description: Stop TWI transaction. Must be issued while the TWI master is not suspended. */

/* Bit 0 : Stop TWI transaction. Must be issued while the TWI master is not suspended. */
#define TWIM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TWIM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TWIM_TASKS_STOP_TASKS_STOP_Pos)
#define TWIM_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: TWIM_TASKS_SUSPEND */
/* Description: Suspend TWI transaction */

/* Bit 0 : Suspend TWI transaction */
#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL)
#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos)
#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (1UL)

/* Register: TWIM_TASKS_RESUME */
/* Description: Resume TWI transaction */

/* Bit 0 : Resume TWI transaction */
#define TWIM_TASKS_RESUME_TASKS_RESUME_Pos (0UL)
#define TWIM_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << TWIM_TASKS_RESUME_TASKS_RESUME_Pos)
#define TWIM_TASKS_RESUME_TASKS_RESUME_Trigger (1UL)

/* Register: TWIM_EVENTS_STOPPED */
/* Description: TWI stopped */

/* Bit 0 : TWI stopped */
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)

/* Register: TWIM_EVENTS_ERROR */
/* Description: TWI error */

/* Bit 0 : TWI error */
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << TWIM_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)

/* Register: TWIM_EVENTS_SUSPENDED */
/* Description: SUSPEND task has been issued, TWI traffic is now suspended. */

/* Bit 0 : SUSPEND task has been issued, TWI traffic is now suspended. */
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos (0UL)
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Msk (0x1UL << TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos)
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_NotGenerated (0UL)
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Generated (1UL)

/* Register: TWIM_EVENTS_RXSTARTED */
/* Description: Receive sequence started */

/* Bit 0 : Receive sequence started */
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL)
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos)
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_NotGenerated (0UL)
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Generated (1UL)

/* Register: TWIM_EVENTS_TXSTARTED */
/* Description: Transmit sequence started */

/* Bit 0 : Transmit sequence started */
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL)
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos)
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_NotGenerated (0UL)
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Generated (1UL)

/* Register: TWIM_EVENTS_LASTRX */
/* Description: Byte boundary, starting to receive the last byte */

/* Bit 0 : Byte boundary, starting to receive the last byte */
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Pos (0UL)
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Msk (0x1UL << TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Pos)
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_NotGenerated (0UL)
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Generated (1UL)

/* Register: TWIM_EVENTS_LASTTX */
/* Description: Byte boundary, starting to transmit the last byte */

/* Bit 0 : Byte boundary, starting to transmit the last byte */
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Pos (0UL)
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Msk (0x1UL << TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Pos)
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_NotGenerated (0UL)
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Generated (1UL)

/* Register: TWIM_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 12 : Shortcut between event LASTRX and task STOP */
#define TWIM_SHORTS_LASTRX_STOP_Pos (12UL)
#define TWIM_SHORTS_LASTRX_STOP_Msk (0x1UL << TWIM_SHORTS_LASTRX_STOP_Pos)
#define TWIM_SHORTS_LASTRX_STOP_Disabled (0UL)
#define TWIM_SHORTS_LASTRX_STOP_Enabled (1UL)

/* Bit 11 : Shortcut between event LASTRX and task SUSPEND */
#define TWIM_SHORTS_LASTRX_SUSPEND_Pos (11UL)
#define TWIM_SHORTS_LASTRX_SUSPEND_Msk (0x1UL << TWIM_SHORTS_LASTRX_SUSPEND_Pos)
#define TWIM_SHORTS_LASTRX_SUSPEND_Disabled (0UL)
#define TWIM_SHORTS_LASTRX_SUSPEND_Enabled (1UL)

/* Bit 10 : Shortcut between event LASTRX and task STARTTX */
#define TWIM_SHORTS_LASTRX_STARTTX_Pos (10UL)
#define TWIM_SHORTS_LASTRX_STARTTX_Msk (0x1UL << TWIM_SHORTS_LASTRX_STARTTX_Pos)
#define TWIM_SHORTS_LASTRX_STARTTX_Disabled (0UL)
#define TWIM_SHORTS_LASTRX_STARTTX_Enabled (1UL)

/* Bit 9 : Shortcut between event LASTTX and task STOP */
#define TWIM_SHORTS_LASTTX_STOP_Pos (9UL)
#define TWIM_SHORTS_LASTTX_STOP_Msk (0x1UL << TWIM_SHORTS_LASTTX_STOP_Pos)
#define TWIM_SHORTS_LASTTX_STOP_Disabled (0UL)
#define TWIM_SHORTS_LASTTX_STOP_Enabled (1UL)

/* Bit 8 : Shortcut between event LASTTX and task SUSPEND */
#define TWIM_SHORTS_LASTTX_SUSPEND_Pos (8UL)
#define TWIM_SHORTS_LASTTX_SUSPEND_Msk (0x1UL << TWIM_SHORTS_LASTTX_SUSPEND_Pos)
#define TWIM_SHORTS_LASTTX_SUSPEND_Disabled (0UL)
#define TWIM_SHORTS_LASTTX_SUSPEND_Enabled (1UL)

/* Bit 7 : Shortcut between event LASTTX and task STARTRX */
#define TWIM_SHORTS_LASTTX_STARTRX_Pos (7UL)
#define TWIM_SHORTS_LASTTX_STARTRX_Msk (0x1UL << TWIM_SHORTS_LASTTX_STARTRX_Pos)
#define TWIM_SHORTS_LASTTX_STARTRX_Disabled (0UL)
#define TWIM_SHORTS_LASTTX_STARTRX_Enabled (1UL)

/* Register: TWIM_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 24 : Enable or disable interrupt for event LASTTX */
#define TWIM_INTEN_LASTTX_Pos (24UL)
#define TWIM_INTEN_LASTTX_Msk (0x1UL << TWIM_INTEN_LASTTX_Pos)
#define TWIM_INTEN_LASTTX_Disabled (0UL)
#define TWIM_INTEN_LASTTX_Enabled (1UL)

/* Bit 23 : Enable or disable interrupt for event LASTRX */
#define TWIM_INTEN_LASTRX_Pos (23UL)
#define TWIM_INTEN_LASTRX_Msk (0x1UL << TWIM_INTEN_LASTRX_Pos)
#define TWIM_INTEN_LASTRX_Disabled (0UL)
#define TWIM_INTEN_LASTRX_Enabled (1UL)

/* Bit 20 : Enable or disable interrupt for event TXSTARTED */
#define TWIM_INTEN_TXSTARTED_Pos (20UL)
#define TWIM_INTEN_TXSTARTED_Msk (0x1UL << TWIM_INTEN_TXSTARTED_Pos)
#define TWIM_INTEN_TXSTARTED_Disabled (0UL)
#define TWIM_INTEN_TXSTARTED_Enabled (1UL)

/* Bit 19 : Enable or disable interrupt for event RXSTARTED */
#define TWIM_INTEN_RXSTARTED_Pos (19UL)
#define TWIM_INTEN_RXSTARTED_Msk (0x1UL << TWIM_INTEN_RXSTARTED_Pos)
#define TWIM_INTEN_RXSTARTED_Disabled (0UL)
#define TWIM_INTEN_RXSTARTED_Enabled (1UL)

/* Bit 18 : Enable or disable interrupt for event SUSPENDED */
#define TWIM_INTEN_SUSPENDED_Pos (18UL)
#define TWIM_INTEN_SUSPENDED_Msk (0x1UL << TWIM_INTEN_SUSPENDED_Pos)
#define TWIM_INTEN_SUSPENDED_Disabled (0UL)
#define TWIM_INTEN_SUSPENDED_Enabled (1UL)

/* Bit 9 : Enable or disable interrupt for event ERROR */
#define TWIM_INTEN_ERROR_Pos (9UL)
#define TWIM_INTEN_ERROR_Msk (0x1UL << TWIM_INTEN_ERROR_Pos)
#define TWIM_INTEN_ERROR_Disabled (0UL)
#define TWIM_INTEN_ERROR_Enabled (1UL)

/* Bit 1 : Enable or disable interrupt for event STOPPED */
#define TWIM_INTEN_STOPPED_Pos (1UL)
#define TWIM_INTEN_STOPPED_Msk (0x1UL << TWIM_INTEN_STOPPED_Pos)
#define TWIM_INTEN_STOPPED_Disabled (0UL)
#define TWIM_INTEN_STOPPED_Enabled (1UL)

/* Register: TWIM_INTENSET */
/* Description: Enable interrupt */

/* Bit 24 : Write '1' to enable interrupt for event LASTTX */
#define TWIM_INTENSET_LASTTX_Pos (24UL)
#define TWIM_INTENSET_LASTTX_Msk (0x1UL << TWIM_INTENSET_LASTTX_Pos)
#define TWIM_INTENSET_LASTTX_Disabled (0UL)
#define TWIM_INTENSET_LASTTX_Enabled (1UL)
#define TWIM_INTENSET_LASTTX_Set (1UL)

/* Bit 23 : Write '1' to enable interrupt for event LASTRX */
#define TWIM_INTENSET_LASTRX_Pos (23UL)
#define TWIM_INTENSET_LASTRX_Msk (0x1UL << TWIM_INTENSET_LASTRX_Pos)
#define TWIM_INTENSET_LASTRX_Disabled (0UL)
#define TWIM_INTENSET_LASTRX_Enabled (1UL)
#define TWIM_INTENSET_LASTRX_Set (1UL)

/* Bit 20 : Write '1' to enable interrupt for event TXSTARTED */
#define TWIM_INTENSET_TXSTARTED_Pos (20UL)
#define TWIM_INTENSET_TXSTARTED_Msk (0x1UL << TWIM_INTENSET_TXSTARTED_Pos)
#define TWIM_INTENSET_TXSTARTED_Disabled (0UL)
#define TWIM_INTENSET_TXSTARTED_Enabled (1UL)
#define TWIM_INTENSET_TXSTARTED_Set (1UL)

/* Bit 19 : Write '1' to enable interrupt for event RXSTARTED */
#define TWIM_INTENSET_RXSTARTED_Pos (19UL)
#define TWIM_INTENSET_RXSTARTED_Msk (0x1UL << TWIM_INTENSET_RXSTARTED_Pos)
#define TWIM_INTENSET_RXSTARTED_Disabled (0UL)
#define TWIM_INTENSET_RXSTARTED_Enabled (1UL)
#define TWIM_INTENSET_RXSTARTED_Set (1UL)

/* Bit 18 : Write '1' to enable interrupt for event SUSPENDED */
#define TWIM_INTENSET_SUSPENDED_Pos (18UL)
#define TWIM_INTENSET_SUSPENDED_Msk (0x1UL << TWIM_INTENSET_SUSPENDED_Pos)
#define TWIM_INTENSET_SUSPENDED_Disabled (0UL)
#define TWIM_INTENSET_SUSPENDED_Enabled (1UL)
#define TWIM_INTENSET_SUSPENDED_Set (1UL)

/* Bit 9 : Write '1' to enable interrupt for event ERROR */
#define TWIM_INTENSET_ERROR_Pos (9UL)
#define TWIM_INTENSET_ERROR_Msk (0x1UL << TWIM_INTENSET_ERROR_Pos)
#define TWIM_INTENSET_ERROR_Disabled (0UL)
#define TWIM_INTENSET_ERROR_Enabled (1UL)
#define TWIM_INTENSET_ERROR_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define TWIM_INTENSET_STOPPED_Pos (1UL)
#define TWIM_INTENSET_STOPPED_Msk (0x1UL << TWIM_INTENSET_STOPPED_Pos)
#define TWIM_INTENSET_STOPPED_Disabled (0UL)
#define TWIM_INTENSET_STOPPED_Enabled (1UL)
#define TWIM_INTENSET_STOPPED_Set (1UL)

/* Register: TWIM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 24 : Write '1' to disable interrupt for event LASTTX */
#define TWIM_INTENCLR_LASTTX_Pos (24UL)
#define TWIM_INTENCLR_LASTTX_Msk (0x1UL << TWIM_INTENCLR_LASTTX_Pos)
#define TWIM_INTENCLR_LASTTX_Disabled (0UL)
#define TWIM_INTENCLR_LASTTX_Enabled (1UL)
#define TWIM_INTENCLR_LASTTX_Clear (1UL)

/* Bit 23 : Write '1' to disable interrupt for event LASTRX */
#define TWIM_INTENCLR_LASTRX_Pos (23UL)
#define TWIM_INTENCLR_LASTRX_Msk (0x1UL << TWIM_INTENCLR_LASTRX_Pos)
#define TWIM_INTENCLR_LASTRX_Disabled (0UL)
#define TWIM_INTENCLR_LASTRX_Enabled (1UL)
#define TWIM_INTENCLR_LASTRX_Clear (1UL)

/* Bit 20 : Write '1' to disable interrupt for event TXSTARTED */
#define TWIM_INTENCLR_TXSTARTED_Pos (20UL)
#define TWIM_INTENCLR_TXSTARTED_Msk (0x1UL << TWIM_INTENCLR_TXSTARTED_Pos)
#define TWIM_INTENCLR_TXSTARTED_Disabled (0UL)
#define TWIM_INTENCLR_TXSTARTED_Enabled (1UL)
#define TWIM_INTENCLR_TXSTARTED_Clear (1UL)

/* Bit 19 : Write '1' to disable interrupt for event RXSTARTED */
#define TWIM_INTENCLR_RXSTARTED_Pos (19UL)
#define TWIM_INTENCLR_RXSTARTED_Msk (0x1UL << TWIM_INTENCLR_RXSTARTED_Pos)
#define TWIM_INTENCLR_RXSTARTED_Disabled (0UL)
#define TWIM_INTENCLR_RXSTARTED_Enabled (1UL)
#define TWIM_INTENCLR_RXSTARTED_Clear (1UL)

/* Bit 18 : Write '1' to disable interrupt for event SUSPENDED */
#define TWIM_INTENCLR_SUSPENDED_Pos (18UL)
#define TWIM_INTENCLR_SUSPENDED_Msk (0x1UL << TWIM_INTENCLR_SUSPENDED_Pos)
#define TWIM_INTENCLR_SUSPENDED_Disabled (0UL)
#define TWIM_INTENCLR_SUSPENDED_Enabled (1UL)
#define TWIM_INTENCLR_SUSPENDED_Clear (1UL)

/* Bit 9 : Write '1' to disable interrupt for event ERROR */
#define TWIM_INTENCLR_ERROR_Pos (9UL)
#define TWIM_INTENCLR_ERROR_Msk (0x1UL << TWIM_INTENCLR_ERROR_Pos)
#define TWIM_INTENCLR_ERROR_Disabled (0UL)
#define TWIM_INTENCLR_ERROR_Enabled (1UL)
#define TWIM_INTENCLR_ERROR_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define TWIM_INTENCLR_STOPPED_Pos (1UL)
#define TWIM_INTENCLR_STOPPED_Msk (0x1UL << TWIM_INTENCLR_STOPPED_Pos)
#define TWIM_INTENCLR_STOPPED_Disabled (0UL)
#define TWIM_INTENCLR_STOPPED_Enabled (1UL)
#define TWIM_INTENCLR_STOPPED_Clear (1UL)

/* Register: TWIM_ERRORSRC */
/* Description: Error source */

/* Bit 2 : NACK received after sending a data byte (write '1' to clear) */
#define TWIM_ERRORSRC_DNACK_Pos (2UL)
#define TWIM_ERRORSRC_DNACK_Msk (0x1UL << TWIM_ERRORSRC_DNACK_Pos)
#define TWIM_ERRORSRC_DNACK_NotReceived (0UL)
#define TWIM_ERRORSRC_DNACK_Received (1UL)

/* Bit 1 : NACK received after sending the address (write '1' to clear) */
#define TWIM_ERRORSRC_ANACK_Pos (1UL)
#define TWIM_ERRORSRC_ANACK_Msk (0x1UL << TWIM_ERRORSRC_ANACK_Pos)
#define TWIM_ERRORSRC_ANACK_NotReceived (0UL)
#define TWIM_ERRORSRC_ANACK_Received (1UL)

/* Bit 0 : Overrun error */
#define TWIM_ERRORSRC_OVERRUN_Pos (0UL)
#define TWIM_ERRORSRC_OVERRUN_Msk (0x1UL << TWIM_ERRORSRC_OVERRUN_Pos)
#define TWIM_ERRORSRC_OVERRUN_NotReceived (0UL)
#define TWIM_ERRORSRC_OVERRUN_Received (1UL)

/* Register: TWIM_ENABLE */
/* Description: Enable TWIM */

/* Bits 3..0 : Enable or disable TWIM */
#define TWIM_ENABLE_ENABLE_Pos (0UL)
#define TWIM_ENABLE_ENABLE_Msk (0xFUL << TWIM_ENABLE_ENABLE_Pos)
#define TWIM_ENABLE_ENABLE_Disabled (0UL)
#define TWIM_ENABLE_ENABLE_Enabled (6UL)

/* Register: TWIM_PSEL_SCL */
/* Description: Pin select for SCL signal */

/* Bit 31 : Connection */
#define TWIM_PSEL_SCL_CONNECT_Pos (31UL)
#define TWIM_PSEL_SCL_CONNECT_Msk (0x1UL << TWIM_PSEL_SCL_CONNECT_Pos)
#define TWIM_PSEL_SCL_CONNECT_Connected (0UL)
#define TWIM_PSEL_SCL_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define TWIM_PSEL_SCL_PORT_Pos (5UL)
#define TWIM_PSEL_SCL_PORT_Msk (0x1UL << TWIM_PSEL_SCL_PORT_Pos)

/* Bits 4..0 : Pin number */
#define TWIM_PSEL_SCL_PIN_Pos (0UL)
#define TWIM_PSEL_SCL_PIN_Msk (0x1FUL << TWIM_PSEL_SCL_PIN_Pos)

/* Register: TWIM_PSEL_SDA */
/* Description: Pin select for SDA signal */

/* Bit 31 : Connection */
#define TWIM_PSEL_SDA_CONNECT_Pos (31UL)
#define TWIM_PSEL_SDA_CONNECT_Msk (0x1UL << TWIM_PSEL_SDA_CONNECT_Pos)
#define TWIM_PSEL_SDA_CONNECT_Connected (0UL)
#define TWIM_PSEL_SDA_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define TWIM_PSEL_SDA_PORT_Pos (5UL)
#define TWIM_PSEL_SDA_PORT_Msk (0x1UL << TWIM_PSEL_SDA_PORT_Pos)

/* Bits 4..0 : Pin number */
#define TWIM_PSEL_SDA_PIN_Pos (0UL)
#define TWIM_PSEL_SDA_PIN_Msk (0x1FUL << TWIM_PSEL_SDA_PIN_Pos)

/* Register: TWIM_FREQUENCY */
/* Description: TWI frequency. Accuracy depends on the HFCLK source selected. */

/* Bits 31..0 : TWI master clock frequency */
#define TWIM_FREQUENCY_FREQUENCY_Pos (0UL)
#define TWIM_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << TWIM_FREQUENCY_FREQUENCY_Pos)
#define TWIM_FREQUENCY_FREQUENCY_K100 (0x01980000UL)
#define TWIM_FREQUENCY_FREQUENCY_K250 (0x04000000UL)
#define TWIM_FREQUENCY_FREQUENCY_K400 (0x06400000UL)

/* Register: TWIM_RXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define TWIM_RXD_PTR_PTR_Pos (0UL)
#define TWIM_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << TWIM_RXD_PTR_PTR_Pos)

/* Register: TWIM_RXD_MAXCNT */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 15..0 : Maximum number of bytes in receive buffer */
#define TWIM_RXD_MAXCNT_MAXCNT_Pos (0UL)
#define TWIM_RXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << TWIM_RXD_MAXCNT_MAXCNT_Pos)

/* Register: TWIM_RXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 15..0 : Number of bytes transferred in the last transaction. In case of NACK error, includes the NACK'ed byte. */
#define TWIM_RXD_AMOUNT_AMOUNT_Pos (0UL)
#define TWIM_RXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << TWIM_RXD_AMOUNT_AMOUNT_Pos)

/* Register: TWIM_RXD_LIST */
/* Description: EasyDMA list type */

/* Bits 2..0 : List type */
#define TWIM_RXD_LIST_LIST_Pos (0UL)
#define TWIM_RXD_LIST_LIST_Msk (0x7UL << TWIM_RXD_LIST_LIST_Pos)
#define TWIM_RXD_LIST_LIST_Disabled (0UL)
#define TWIM_RXD_LIST_LIST_ArrayList (1UL)

/* Register: TWIM_TXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define TWIM_TXD_PTR_PTR_Pos (0UL)
#define TWIM_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << TWIM_TXD_PTR_PTR_Pos)

/* Register: TWIM_TXD_MAXCNT */
/* Description: Maximum number of bytes in transmit buffer */

/* Bits 15..0 : Maximum number of bytes in transmit buffer */
#define TWIM_TXD_MAXCNT_MAXCNT_Pos (0UL)
#define TWIM_TXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << TWIM_TXD_MAXCNT_MAXCNT_Pos)

/* Register: TWIM_TXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 15..0 : Number of bytes transferred in the last transaction. In case of NACK error, includes the NACK'ed byte. */
#define TWIM_TXD_AMOUNT_AMOUNT_Pos (0UL)
#define TWIM_TXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << TWIM_TXD_AMOUNT_AMOUNT_Pos)

/* Register: TWIM_TXD_LIST */
/* Description: EasyDMA list type */

/* Bits 2..0 : List type */
#define TWIM_TXD_LIST_LIST_Pos (0UL)
#define TWIM_TXD_LIST_LIST_Msk (0x7UL << TWIM_TXD_LIST_LIST_Pos)
#define TWIM_TXD_LIST_LIST_Disabled (0UL)
#define TWIM_TXD_LIST_LIST_ArrayList (1UL)

/* Register: TWIM_ADDRESS */
/* Description: Address used in the TWI transfer */

/* Bits 6..0 : Address used in the TWI transfer */
#define TWIM_ADDRESS_ADDRESS_Pos (0UL)
#define TWIM_ADDRESS_ADDRESS_Msk (0x7FUL << TWIM_ADDRESS_ADDRESS_Pos)


/* Peripheral: TWIS */
/* Description: I2C compatible Two-Wire Slave Interface with EasyDMA 0 */

/* Register: TWIS_TASKS_STOP */
/* Description: Stop TWI transaction */

/* Bit 0 : Stop TWI transaction */
#define TWIS_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TWIS_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TWIS_TASKS_STOP_TASKS_STOP_Pos)
#define TWIS_TASKS_STOP_TASKS_STOP_Trigger (1UL)

/* Register: TWIS_TASKS_SUSPEND */
/* Description: Suspend TWI transaction */

/* Bit 0 : Suspend TWI transaction */
#define TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL)
#define TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Pos)
#define TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (1UL)

/* Register: TWIS_TASKS_RESUME */
/* Description: Resume TWI transaction */

/* Bit 0 : Resume TWI transaction */
#define TWIS_TASKS_RESUME_TASKS_RESUME_Pos (0UL)
#define TWIS_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << TWIS_TASKS_RESUME_TASKS_RESUME_Pos)
#define TWIS_TASKS_RESUME_TASKS_RESUME_Trigger (1UL)

/* Register: TWIS_TASKS_PREPARERX */
/* Description: Prepare the TWI slave to respond to a write command */

/* Bit 0 : Prepare the TWI slave to respond to a write command */
#define TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Pos (0UL)
#define TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Msk (0x1UL << TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Pos)
#define TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Trigger (1UL)

/* Register: TWIS_TASKS_PREPARETX */
/* Description: Prepare the TWI slave to respond to a read command */

/* Bit 0 : Prepare the TWI slave to respond to a read command */
#define TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Pos (0UL)
#define TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Msk (0x1UL << TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Pos)
#define TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Trigger (1UL)

/* Register: TWIS_EVENTS_STOPPED */
/* Description: TWI stopped */

/* Bit 0 : TWI stopped */
#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)

/* Register: TWIS_EVENTS_ERROR */
/* Description: TWI error */

/* Bit 0 : TWI error */
#define TWIS_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define TWIS_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << TWIS_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define TWIS_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define TWIS_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)

/* Register: TWIS_EVENTS_RXSTARTED */
/* Description: Receive sequence started */

/* Bit 0 : Receive sequence started */
#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL)
#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos)
#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_NotGenerated (0UL)
#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Generated (1UL)

/* Register: TWIS_EVENTS_TXSTARTED */
/* Description: Transmit sequence started */

/* Bit 0 : Transmit sequence started */
#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL)
#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos)
#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_NotGenerated (0UL)
#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Generated (1UL)

/* Register: TWIS_EVENTS_WRITE */
/* Description: Write command received */

/* Bit 0 : Write command received */
#define TWIS_EVENTS_WRITE_EVENTS_WRITE_Pos (0UL)
#define TWIS_EVENTS_WRITE_EVENTS_WRITE_Msk (0x1UL << TWIS_EVENTS_WRITE_EVENTS_WRITE_Pos)
#define TWIS_EVENTS_WRITE_EVENTS_WRITE_NotGenerated (0UL)
#define TWIS_EVENTS_WRITE_EVENTS_WRITE_Generated (1UL)

/* Register: TWIS_EVENTS_READ */
/* Description: Read command received */

/* Bit 0 : Read command received */
#define TWIS_EVENTS_READ_EVENTS_READ_Pos (0UL)
#define TWIS_EVENTS_READ_EVENTS_READ_Msk (0x1UL << TWIS_EVENTS_READ_EVENTS_READ_Pos)
#define TWIS_EVENTS_READ_EVENTS_READ_NotGenerated (0UL)
#define TWIS_EVENTS_READ_EVENTS_READ_Generated (1UL)

/* Register: TWIS_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 14 : Shortcut between event READ and task SUSPEND */
#define TWIS_SHORTS_READ_SUSPEND_Pos (14UL)
#define TWIS_SHORTS_READ_SUSPEND_Msk (0x1UL << TWIS_SHORTS_READ_SUSPEND_Pos)
#define TWIS_SHORTS_READ_SUSPEND_Disabled (0UL)
#define TWIS_SHORTS_READ_SUSPEND_Enabled (1UL)

/* Bit 13 : Shortcut between event WRITE and task SUSPEND */
#define TWIS_SHORTS_WRITE_SUSPEND_Pos (13UL)
#define TWIS_SHORTS_WRITE_SUSPEND_Msk (0x1UL << TWIS_SHORTS_WRITE_SUSPEND_Pos)
#define TWIS_SHORTS_WRITE_SUSPEND_Disabled (0UL)
#define TWIS_SHORTS_WRITE_SUSPEND_Enabled (1UL)

/* Register: TWIS_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 26 : Enable or disable interrupt for event READ */
#define TWIS_INTEN_READ_Pos (26UL)
#define TWIS_INTEN_READ_Msk (0x1UL << TWIS_INTEN_READ_Pos)
#define TWIS_INTEN_READ_Disabled (0UL)
#define TWIS_INTEN_READ_Enabled (1UL)

/* Bit 25 : Enable or disable interrupt for event WRITE */
#define TWIS_INTEN_WRITE_Pos (25UL)
#define TWIS_INTEN_WRITE_Msk (0x1UL << TWIS_INTEN_WRITE_Pos)
#define TWIS_INTEN_WRITE_Disabled (0UL)
#define TWIS_INTEN_WRITE_Enabled (1UL)

/* Bit 20 : Enable or disable interrupt for event TXSTARTED */
#define TWIS_INTEN_TXSTARTED_Pos (20UL)
#define TWIS_INTEN_TXSTARTED_Msk (0x1UL << TWIS_INTEN_TXSTARTED_Pos)
#define TWIS_INTEN_TXSTARTED_Disabled (0UL)
#define TWIS_INTEN_TXSTARTED_Enabled (1UL)

/* Bit 19 : Enable or disable interrupt for event RXSTARTED */
#define TWIS_INTEN_RXSTARTED_Pos (19UL)
#define TWIS_INTEN_RXSTARTED_Msk (0x1UL << TWIS_INTEN_RXSTARTED_Pos)
#define TWIS_INTEN_RXSTARTED_Disabled (0UL)
#define TWIS_INTEN_RXSTARTED_Enabled (1UL)

/* Bit 9 : Enable or disable interrupt for event ERROR */
#define TWIS_INTEN_ERROR_Pos (9UL)
#define TWIS_INTEN_ERROR_Msk (0x1UL << TWIS_INTEN_ERROR_Pos)
#define TWIS_INTEN_ERROR_Disabled (0UL)
#define TWIS_INTEN_ERROR_Enabled (1UL)

/* Bit 1 : Enable or disable interrupt for event STOPPED */
#define TWIS_INTEN_STOPPED_Pos (1UL)
#define TWIS_INTEN_STOPPED_Msk (0x1UL << TWIS_INTEN_STOPPED_Pos)
#define TWIS_INTEN_STOPPED_Disabled (0UL)
#define TWIS_INTEN_STOPPED_Enabled (1UL)

/* Register: TWIS_INTENSET */
/* Description: Enable interrupt */

/* Bit 26 : Write '1' to enable interrupt for event READ */
#define TWIS_INTENSET_READ_Pos (26UL)
#define TWIS_INTENSET_READ_Msk (0x1UL << TWIS_INTENSET_READ_Pos)
#define TWIS_INTENSET_READ_Disabled (0UL)
#define TWIS_INTENSET_READ_Enabled (1UL)
#define TWIS_INTENSET_READ_Set (1UL)

/* Bit 25 : Write '1' to enable interrupt for event WRITE */
#define TWIS_INTENSET_WRITE_Pos (25UL)
#define TWIS_INTENSET_WRITE_Msk (0x1UL << TWIS_INTENSET_WRITE_Pos)
#define TWIS_INTENSET_WRITE_Disabled (0UL)
#define TWIS_INTENSET_WRITE_Enabled (1UL)
#define TWIS_INTENSET_WRITE_Set (1UL)

/* Bit 20 : Write '1' to enable interrupt for event TXSTARTED */
#define TWIS_INTENSET_TXSTARTED_Pos (20UL)
#define TWIS_INTENSET_TXSTARTED_Msk (0x1UL << TWIS_INTENSET_TXSTARTED_Pos)
#define TWIS_INTENSET_TXSTARTED_Disabled (0UL)
#define TWIS_INTENSET_TXSTARTED_Enabled (1UL)
#define TWIS_INTENSET_TXSTARTED_Set (1UL)

/* Bit 19 : Write '1' to enable interrupt for event RXSTARTED */
#define TWIS_INTENSET_RXSTARTED_Pos (19UL)
#define TWIS_INTENSET_RXSTARTED_Msk (0x1UL << TWIS_INTENSET_RXSTARTED_Pos)
#define TWIS_INTENSET_RXSTARTED_Disabled (0UL)
#define TWIS_INTENSET_RXSTARTED_Enabled (1UL)
#define TWIS_INTENSET_RXSTARTED_Set (1UL)

/* Bit 9 : Write '1' to enable interrupt for event ERROR */
#define TWIS_INTENSET_ERROR_Pos (9UL)
#define TWIS_INTENSET_ERROR_Msk (0x1UL << TWIS_INTENSET_ERROR_Pos)
#define TWIS_INTENSET_ERROR_Disabled (0UL)
#define TWIS_INTENSET_ERROR_Enabled (1UL)
#define TWIS_INTENSET_ERROR_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define TWIS_INTENSET_STOPPED_Pos (1UL)
#define TWIS_INTENSET_STOPPED_Msk (0x1UL << TWIS_INTENSET_STOPPED_Pos)
#define TWIS_INTENSET_STOPPED_Disabled (0UL)
#define TWIS_INTENSET_STOPPED_Enabled (1UL)
#define TWIS_INTENSET_STOPPED_Set (1UL)

/* Register: TWIS_INTENCLR */
/* Description: Disable interrupt */

/* Bit 26 : Write '1' to disable interrupt for event READ */
#define TWIS_INTENCLR_READ_Pos (26UL)
#define TWIS_INTENCLR_READ_Msk (0x1UL << TWIS_INTENCLR_READ_Pos)
#define TWIS_INTENCLR_READ_Disabled (0UL)
#define TWIS_INTENCLR_READ_Enabled (1UL)
#define TWIS_INTENCLR_READ_Clear (1UL)

/* Bit 25 : Write '1' to disable interrupt for event WRITE */
#define TWIS_INTENCLR_WRITE_Pos (25UL)
#define TWIS_INTENCLR_WRITE_Msk (0x1UL << TWIS_INTENCLR_WRITE_Pos)
#define TWIS_INTENCLR_WRITE_Disabled (0UL)
#define TWIS_INTENCLR_WRITE_Enabled (1UL)
#define TWIS_INTENCLR_WRITE_Clear (1UL)

/* Bit 20 : Write '1' to disable interrupt for event TXSTARTED */
#define TWIS_INTENCLR_TXSTARTED_Pos (20UL)
#define TWIS_INTENCLR_TXSTARTED_Msk (0x1UL << TWIS_INTENCLR_TXSTARTED_Pos)
#define TWIS_INTENCLR_TXSTARTED_Disabled (0UL)
#define TWIS_INTENCLR_TXSTARTED_Enabled (1UL)
#define TWIS_INTENCLR_TXSTARTED_Clear (1UL)

/* Bit 19 : Write '1' to disable interrupt for event RXSTARTED */
#define TWIS_INTENCLR_RXSTARTED_Pos (19UL)
#define TWIS_INTENCLR_RXSTARTED_Msk (0x1UL << TWIS_INTENCLR_RXSTARTED_Pos)
#define TWIS_INTENCLR_RXSTARTED_Disabled (0UL)
#define TWIS_INTENCLR_RXSTARTED_Enabled (1UL)
#define TWIS_INTENCLR_RXSTARTED_Clear (1UL)

/* Bit 9 : Write '1' to disable interrupt for event ERROR */
#define TWIS_INTENCLR_ERROR_Pos (9UL)
#define TWIS_INTENCLR_ERROR_Msk (0x1UL << TWIS_INTENCLR_ERROR_Pos)
#define TWIS_INTENCLR_ERROR_Disabled (0UL)
#define TWIS_INTENCLR_ERROR_Enabled (1UL)
#define TWIS_INTENCLR_ERROR_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define TWIS_INTENCLR_STOPPED_Pos (1UL)
#define TWIS_INTENCLR_STOPPED_Msk (0x1UL << TWIS_INTENCLR_STOPPED_Pos)
#define TWIS_INTENCLR_STOPPED_Disabled (0UL)
#define TWIS_INTENCLR_STOPPED_Enabled (1UL)
#define TWIS_INTENCLR_STOPPED_Clear (1UL)

/* Register: TWIS_ERRORSRC */
/* Description: Error source */

/* Bit 3 : TX buffer over-read detected, and prevented */
#define TWIS_ERRORSRC_OVERREAD_Pos (3UL)
#define TWIS_ERRORSRC_OVERREAD_Msk (0x1UL << TWIS_ERRORSRC_OVERREAD_Pos)
#define TWIS_ERRORSRC_OVERREAD_NotDetected (0UL)
#define TWIS_ERRORSRC_OVERREAD_Detected (1UL)

/* Bit 2 : NACK sent after receiving a data byte */
#define TWIS_ERRORSRC_DNACK_Pos (2UL)
#define TWIS_ERRORSRC_DNACK_Msk (0x1UL << TWIS_ERRORSRC_DNACK_Pos)
#define TWIS_ERRORSRC_DNACK_NotReceived (0UL)
#define TWIS_ERRORSRC_DNACK_Received (1UL)

/* Bit 0 : RX buffer overflow detected, and prevented */
#define TWIS_ERRORSRC_OVERFLOW_Pos (0UL)
#define TWIS_ERRORSRC_OVERFLOW_Msk (0x1UL << TWIS_ERRORSRC_OVERFLOW_Pos)
#define TWIS_ERRORSRC_OVERFLOW_NotDetected (0UL)
#define TWIS_ERRORSRC_OVERFLOW_Detected (1UL)

/* Register: TWIS_MATCH */
/* Description: Status register indicating which address had a match */

/* Bit 0 : Indication of which address in {ADDRESS} that matched the incoming address */
#define TWIS_MATCH_MATCH_Pos (0UL)
#define TWIS_MATCH_MATCH_Msk (0x1UL << TWIS_MATCH_MATCH_Pos)

/* Register: TWIS_ENABLE */
/* Description: Enable TWIS */

/* Bits 3..0 : Enable or disable TWIS */
#define TWIS_ENABLE_ENABLE_Pos (0UL)
#define TWIS_ENABLE_ENABLE_Msk (0xFUL << TWIS_ENABLE_ENABLE_Pos)
#define TWIS_ENABLE_ENABLE_Disabled (0UL)
#define TWIS_ENABLE_ENABLE_Enabled (9UL)

/* Register: TWIS_PSEL_SCL */
/* Description: Pin select for SCL signal */

/* Bit 31 : Connection */
#define TWIS_PSEL_SCL_CONNECT_Pos (31UL)
#define TWIS_PSEL_SCL_CONNECT_Msk (0x1UL << TWIS_PSEL_SCL_CONNECT_Pos)
#define TWIS_PSEL_SCL_CONNECT_Connected (0UL)
#define TWIS_PSEL_SCL_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define TWIS_PSEL_SCL_PORT_Pos (5UL)
#define TWIS_PSEL_SCL_PORT_Msk (0x1UL << TWIS_PSEL_SCL_PORT_Pos)

/* Bits 4..0 : Pin number */
#define TWIS_PSEL_SCL_PIN_Pos (0UL)
#define TWIS_PSEL_SCL_PIN_Msk (0x1FUL << TWIS_PSEL_SCL_PIN_Pos)

/* Register: TWIS_PSEL_SDA */
/* Description: Pin select for SDA signal */

/* Bit 31 : Connection */
#define TWIS_PSEL_SDA_CONNECT_Pos (31UL)
#define TWIS_PSEL_SDA_CONNECT_Msk (0x1UL << TWIS_PSEL_SDA_CONNECT_Pos)
#define TWIS_PSEL_SDA_CONNECT_Connected (0UL)
#define TWIS_PSEL_SDA_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define TWIS_PSEL_SDA_PORT_Pos (5UL)
#define TWIS_PSEL_SDA_PORT_Msk (0x1UL << TWIS_PSEL_SDA_PORT_Pos)

/* Bits 4..0 : Pin number */
#define TWIS_PSEL_SDA_PIN_Pos (0UL)
#define TWIS_PSEL_SDA_PIN_Msk (0x1FUL << TWIS_PSEL_SDA_PIN_Pos)

/* Register: TWIS_RXD_PTR */
/* Description: RXD Data pointer */

/* Bits 31..0 : RXD Data pointer */
#define TWIS_RXD_PTR_PTR_Pos (0UL)
#define TWIS_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << TWIS_RXD_PTR_PTR_Pos)

/* Register: TWIS_RXD_MAXCNT */
/* Description: Maximum number of bytes in RXD buffer */

/* Bits 15..0 : Maximum number of bytes in RXD buffer */
#define TWIS_RXD_MAXCNT_MAXCNT_Pos (0UL)
#define TWIS_RXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << TWIS_RXD_MAXCNT_MAXCNT_Pos)

/* Register: TWIS_RXD_AMOUNT */
/* Description: Number of bytes transferred in the last RXD transaction */

/* Bits 15..0 : Number of bytes transferred in the last RXD transaction */
#define TWIS_RXD_AMOUNT_AMOUNT_Pos (0UL)
#define TWIS_RXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << TWIS_RXD_AMOUNT_AMOUNT_Pos)

/* Register: TWIS_RXD_LIST */
/* Description: EasyDMA list type */

/* Bits 1..0 : List type */
#define TWIS_RXD_LIST_LIST_Pos (0UL)
#define TWIS_RXD_LIST_LIST_Msk (0x3UL << TWIS_RXD_LIST_LIST_Pos)
#define TWIS_RXD_LIST_LIST_Disabled (0UL)
#define TWIS_RXD_LIST_LIST_ArrayList (1UL)

/* Register: TWIS_TXD_PTR */
/* Description: TXD Data pointer */

/* Bits 31..0 : TXD Data pointer */
#define TWIS_TXD_PTR_PTR_Pos (0UL)
#define TWIS_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << TWIS_TXD_PTR_PTR_Pos)

/* Register: TWIS_TXD_MAXCNT */
/* Description: Maximum number of bytes in TXD buffer */

/* Bits 15..0 : Maximum number of bytes in TXD buffer */
#define TWIS_TXD_MAXCNT_MAXCNT_Pos (0UL)
#define TWIS_TXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << TWIS_TXD_MAXCNT_MAXCNT_Pos)

/* Register: TWIS_TXD_AMOUNT */
/* Description: Number of bytes transferred in the last TXD transaction */

/* Bits 15..0 : Number of bytes transferred in the last TXD transaction */
#define TWIS_TXD_AMOUNT_AMOUNT_Pos (0UL)
#define TWIS_TXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << TWIS_TXD_AMOUNT_AMOUNT_Pos)

/* Register: TWIS_TXD_LIST */
/* Description: EasyDMA list type */

/* Bits 1..0 : List type */
#define TWIS_TXD_LIST_LIST_Pos (0UL)
#define TWIS_TXD_LIST_LIST_Msk (0x3UL << TWIS_TXD_LIST_LIST_Pos)
#define TWIS_TXD_LIST_LIST_Disabled (0UL)
#define TWIS_TXD_LIST_LIST_ArrayList (1UL)

/* Register: TWIS_ADDRESS */
/* Description: Description collection: TWI slave address n */

/* Bits 6..0 : TWI slave address */
#define TWIS_ADDRESS_ADDRESS_Pos (0UL)
#define TWIS_ADDRESS_ADDRESS_Msk (0x7FUL << TWIS_ADDRESS_ADDRESS_Pos)

/* Register: TWIS_CONFIG */
/* Description: Configuration register for the address match mechanism */

/* Bit 1 : Enable or disable address matching on ADDRESS[1] */
#define TWIS_CONFIG_ADDRESS1_Pos (1UL)
#define TWIS_CONFIG_ADDRESS1_Msk (0x1UL << TWIS_CONFIG_ADDRESS1_Pos)
#define TWIS_CONFIG_ADDRESS1_Disabled (0UL)
#define TWIS_CONFIG_ADDRESS1_Enabled (1UL)

/* Bit 0 : Enable or disable address matching on ADDRESS[0] */
#define TWIS_CONFIG_ADDRESS0_Pos (0UL)
#define TWIS_CONFIG_ADDRESS0_Msk (0x1UL << TWIS_CONFIG_ADDRESS0_Pos)
#define TWIS_CONFIG_ADDRESS0_Disabled (0UL)
#define TWIS_CONFIG_ADDRESS0_Enabled (1UL)

/* Register: TWIS_ORC */
/* Description: Over-read character. Character sent out in case of an over-read of the transmit buffer. */

/* Bits 7..0 : Over-read character. Character sent out in case of an over-read of the transmit buffer. */
#define TWIS_ORC_ORC_Pos (0UL)
#define TWIS_ORC_ORC_Msk (0xFFUL << TWIS_ORC_ORC_Pos)


/* Peripheral: UART */
/* Description: Universal Asynchronous Receiver/Transmitter */

/* Register: UART_TASKS_STARTRX */
/* Description: Start UART receiver */

/* Bit 0 : Start UART receiver */
#define UART_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL)
#define UART_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << UART_TASKS_STARTRX_TASKS_STARTRX_Pos)
#define UART_TASKS_STARTRX_TASKS_STARTRX_Trigger (1UL)

/* Register: UART_TASKS_STOPRX */
/* Description: Stop UART receiver */

/* Bit 0 : Stop UART receiver */
#define UART_TASKS_STOPRX_TASKS_STOPRX_Pos (0UL)
#define UART_TASKS_STOPRX_TASKS_STOPRX_Msk (0x1UL << UART_TASKS_STOPRX_TASKS_STOPRX_Pos)
#define UART_TASKS_STOPRX_TASKS_STOPRX_Trigger (1UL)

/* Register: UART_TASKS_STARTTX */
/* Description: Start UART transmitter */

/* Bit 0 : Start UART transmitter */
#define UART_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL)
#define UART_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << UART_TASKS_STARTTX_TASKS_STARTTX_Pos)
#define UART_TASKS_STARTTX_TASKS_STARTTX_Trigger (1UL)

/* Register: UART_TASKS_STOPTX */
/* Description: Stop UART transmitter */

/* Bit 0 : Stop UART transmitter */
#define UART_TASKS_STOPTX_TASKS_STOPTX_Pos (0UL)
#define UART_TASKS_STOPTX_TASKS_STOPTX_Msk (0x1UL << UART_TASKS_STOPTX_TASKS_STOPTX_Pos)
#define UART_TASKS_STOPTX_TASKS_STOPTX_Trigger (1UL)

/* Register: UART_TASKS_SUSPEND */
/* Description: Suspend UART */

/* Bit 0 : Suspend UART */
#define UART_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL)
#define UART_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << UART_TASKS_SUSPEND_TASKS_SUSPEND_Pos)
#define UART_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (1UL)

/* Register: UART_EVENTS_CTS */
/* Description: CTS is activated (set low). Clear To Send. */

/* Bit 0 : CTS is activated (set low). Clear To Send. */
#define UART_EVENTS_CTS_EVENTS_CTS_Pos (0UL)
#define UART_EVENTS_CTS_EVENTS_CTS_Msk (0x1UL << UART_EVENTS_CTS_EVENTS_CTS_Pos)
#define UART_EVENTS_CTS_EVENTS_CTS_NotGenerated (0UL)
#define UART_EVENTS_CTS_EVENTS_CTS_Generated (1UL)

/* Register: UART_EVENTS_NCTS */
/* Description: CTS is deactivated (set high). Not Clear To Send. */

/* Bit 0 : CTS is deactivated (set high). Not Clear To Send. */
#define UART_EVENTS_NCTS_EVENTS_NCTS_Pos (0UL)
#define UART_EVENTS_NCTS_EVENTS_NCTS_Msk (0x1UL << UART_EVENTS_NCTS_EVENTS_NCTS_Pos)
#define UART_EVENTS_NCTS_EVENTS_NCTS_NotGenerated (0UL)
#define UART_EVENTS_NCTS_EVENTS_NCTS_Generated (1UL)

/* Register: UART_EVENTS_RXDRDY */
/* Description: Data received in RXD */

/* Bit 0 : Data received in RXD */
#define UART_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos (0UL)
#define UART_EVENTS_RXDRDY_EVENTS_RXDRDY_Msk (0x1UL << UART_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos)
#define UART_EVENTS_RXDRDY_EVENTS_RXDRDY_NotGenerated (0UL)
#define UART_EVENTS_RXDRDY_EVENTS_RXDRDY_Generated (1UL)

/* Register: UART_EVENTS_TXDRDY */
/* Description: Data sent from TXD */

/* Bit 0 : Data sent from TXD */
#define UART_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos (0UL)
#define UART_EVENTS_TXDRDY_EVENTS_TXDRDY_Msk (0x1UL << UART_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos)
#define UART_EVENTS_TXDRDY_EVENTS_TXDRDY_NotGenerated (0UL)
#define UART_EVENTS_TXDRDY_EVENTS_TXDRDY_Generated (1UL)

/* Register: UART_EVENTS_ERROR */
/* Description: Error detected */

/* Bit 0 : Error detected */
#define UART_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define UART_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << UART_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define UART_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define UART_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)

/* Register: UART_EVENTS_RXTO */
/* Description: Receiver timeout */

/* Bit 0 : Receiver timeout */
#define UART_EVENTS_RXTO_EVENTS_RXTO_Pos (0UL)
#define UART_EVENTS_RXTO_EVENTS_RXTO_Msk (0x1UL << UART_EVENTS_RXTO_EVENTS_RXTO_Pos)
#define UART_EVENTS_RXTO_EVENTS_RXTO_NotGenerated (0UL)
#define UART_EVENTS_RXTO_EVENTS_RXTO_Generated (1UL)

/* Register: UART_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 4 : Shortcut between event NCTS and task STOPRX */
#define UART_SHORTS_NCTS_STOPRX_Pos (4UL)
#define UART_SHORTS_NCTS_STOPRX_Msk (0x1UL << UART_SHORTS_NCTS_STOPRX_Pos)
#define UART_SHORTS_NCTS_STOPRX_Disabled (0UL)
#define UART_SHORTS_NCTS_STOPRX_Enabled (1UL)

/* Bit 3 : Shortcut between event CTS and task STARTRX */
#define UART_SHORTS_CTS_STARTRX_Pos (3UL)
#define UART_SHORTS_CTS_STARTRX_Msk (0x1UL << UART_SHORTS_CTS_STARTRX_Pos)
#define UART_SHORTS_CTS_STARTRX_Disabled (0UL)
#define UART_SHORTS_CTS_STARTRX_Enabled (1UL)

/* Register: UART_INTENSET */
/* Description: Enable interrupt */

/* Bit 17 : Write '1' to enable interrupt for event RXTO */
#define UART_INTENSET_RXTO_Pos (17UL)
#define UART_INTENSET_RXTO_Msk (0x1UL << UART_INTENSET_RXTO_Pos)
#define UART_INTENSET_RXTO_Disabled (0UL)
#define UART_INTENSET_RXTO_Enabled (1UL)
#define UART_INTENSET_RXTO_Set (1UL)

/* Bit 9 : Write '1' to enable interrupt for event ERROR */
#define UART_INTENSET_ERROR_Pos (9UL)
#define UART_INTENSET_ERROR_Msk (0x1UL << UART_INTENSET_ERROR_Pos)
#define UART_INTENSET_ERROR_Disabled (0UL)
#define UART_INTENSET_ERROR_Enabled (1UL)
#define UART_INTENSET_ERROR_Set (1UL)

/* Bit 7 : Write '1' to enable interrupt for event TXDRDY */
#define UART_INTENSET_TXDRDY_Pos (7UL)
#define UART_INTENSET_TXDRDY_Msk (0x1UL << UART_INTENSET_TXDRDY_Pos)
#define UART_INTENSET_TXDRDY_Disabled (0UL)
#define UART_INTENSET_TXDRDY_Enabled (1UL)
#define UART_INTENSET_TXDRDY_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event RXDRDY */
#define UART_INTENSET_RXDRDY_Pos (2UL)
#define UART_INTENSET_RXDRDY_Msk (0x1UL << UART_INTENSET_RXDRDY_Pos)
#define UART_INTENSET_RXDRDY_Disabled (0UL)
#define UART_INTENSET_RXDRDY_Enabled (1UL)
#define UART_INTENSET_RXDRDY_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event NCTS */
#define UART_INTENSET_NCTS_Pos (1UL)
#define UART_INTENSET_NCTS_Msk (0x1UL << UART_INTENSET_NCTS_Pos)
#define UART_INTENSET_NCTS_Disabled (0UL)
#define UART_INTENSET_NCTS_Enabled (1UL)
#define UART_INTENSET_NCTS_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event CTS */
#define UART_INTENSET_CTS_Pos (0UL)
#define UART_INTENSET_CTS_Msk (0x1UL << UART_INTENSET_CTS_Pos)
#define UART_INTENSET_CTS_Disabled (0UL)
#define UART_INTENSET_CTS_Enabled (1UL)
#define UART_INTENSET_CTS_Set (1UL)

/* Register: UART_INTENCLR */
/* Description: Disable interrupt */

/* Bit 17 : Write '1' to disable interrupt for event RXTO */
#define UART_INTENCLR_RXTO_Pos (17UL)
#define UART_INTENCLR_RXTO_Msk (0x1UL << UART_INTENCLR_RXTO_Pos)
#define UART_INTENCLR_RXTO_Disabled (0UL)
#define UART_INTENCLR_RXTO_Enabled (1UL)
#define UART_INTENCLR_RXTO_Clear (1UL)

/* Bit 9 : Write '1' to disable interrupt for event ERROR */
#define UART_INTENCLR_ERROR_Pos (9UL)
#define UART_INTENCLR_ERROR_Msk (0x1UL << UART_INTENCLR_ERROR_Pos)
#define UART_INTENCLR_ERROR_Disabled (0UL)
#define UART_INTENCLR_ERROR_Enabled (1UL)
#define UART_INTENCLR_ERROR_Clear (1UL)

/* Bit 7 : Write '1' to disable interrupt for event TXDRDY */
#define UART_INTENCLR_TXDRDY_Pos (7UL)
#define UART_INTENCLR_TXDRDY_Msk (0x1UL << UART_INTENCLR_TXDRDY_Pos)
#define UART_INTENCLR_TXDRDY_Disabled (0UL)
#define UART_INTENCLR_TXDRDY_Enabled (1UL)
#define UART_INTENCLR_TXDRDY_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event RXDRDY */
#define UART_INTENCLR_RXDRDY_Pos (2UL)
#define UART_INTENCLR_RXDRDY_Msk (0x1UL << UART_INTENCLR_RXDRDY_Pos)
#define UART_INTENCLR_RXDRDY_Disabled (0UL)
#define UART_INTENCLR_RXDRDY_Enabled (1UL)
#define UART_INTENCLR_RXDRDY_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event NCTS */
#define UART_INTENCLR_NCTS_Pos (1UL)
#define UART_INTENCLR_NCTS_Msk (0x1UL << UART_INTENCLR_NCTS_Pos)
#define UART_INTENCLR_NCTS_Disabled (0UL)
#define UART_INTENCLR_NCTS_Enabled (1UL)
#define UART_INTENCLR_NCTS_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event CTS */
#define UART_INTENCLR_CTS_Pos (0UL)
#define UART_INTENCLR_CTS_Msk (0x1UL << UART_INTENCLR_CTS_Pos)
#define UART_INTENCLR_CTS_Disabled (0UL)
#define UART_INTENCLR_CTS_Enabled (1UL)
#define UART_INTENCLR_CTS_Clear (1UL)

/* Register: UART_ERRORSRC */
/* Description: Error source */

/* Bit 3 : Break condition */
#define UART_ERRORSRC_BREAK_Pos (3UL)
#define UART_ERRORSRC_BREAK_Msk (0x1UL << UART_ERRORSRC_BREAK_Pos)
#define UART_ERRORSRC_BREAK_NotPresent (0UL)
#define UART_ERRORSRC_BREAK_Present (1UL)

/* Bit 2 : Framing error occurred */
#define UART_ERRORSRC_FRAMING_Pos (2UL)
#define UART_ERRORSRC_FRAMING_Msk (0x1UL << UART_ERRORSRC_FRAMING_Pos)
#define UART_ERRORSRC_FRAMING_NotPresent (0UL)
#define UART_ERRORSRC_FRAMING_Present (1UL)

/* Bit 1 : Parity error */
#define UART_ERRORSRC_PARITY_Pos (1UL)
#define UART_ERRORSRC_PARITY_Msk (0x1UL << UART_ERRORSRC_PARITY_Pos)
#define UART_ERRORSRC_PARITY_NotPresent (0UL)
#define UART_ERRORSRC_PARITY_Present (1UL)

/* Bit 0 : Overrun error */
#define UART_ERRORSRC_OVERRUN_Pos (0UL)
#define UART_ERRORSRC_OVERRUN_Msk (0x1UL << UART_ERRORSRC_OVERRUN_Pos)
#define UART_ERRORSRC_OVERRUN_NotPresent (0UL)
#define UART_ERRORSRC_OVERRUN_Present (1UL)

/* Register: UART_ENABLE */
/* Description: Enable UART */

/* Bits 3..0 : Enable or disable UART */
#define UART_ENABLE_ENABLE_Pos (0UL)
#define UART_ENABLE_ENABLE_Msk (0xFUL << UART_ENABLE_ENABLE_Pos)
#define UART_ENABLE_ENABLE_Disabled (0UL)
#define UART_ENABLE_ENABLE_Enabled (4UL)

/* Register: UART_PSEL_RTS */
/* Description: Pin select for RTS */

/* Bit 31 : Connection */
#define UART_PSEL_RTS_CONNECT_Pos (31UL)
#define UART_PSEL_RTS_CONNECT_Msk (0x1UL << UART_PSEL_RTS_CONNECT_Pos)
#define UART_PSEL_RTS_CONNECT_Connected (0UL)
#define UART_PSEL_RTS_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define UART_PSEL_RTS_PORT_Pos (5UL)
#define UART_PSEL_RTS_PORT_Msk (0x1UL << UART_PSEL_RTS_PORT_Pos)

/* Bits 4..0 : Pin number */
#define UART_PSEL_RTS_PIN_Pos (0UL)
#define UART_PSEL_RTS_PIN_Msk (0x1FUL << UART_PSEL_RTS_PIN_Pos)

/* Register: UART_PSEL_TXD */
/* Description: Pin select for TXD */

/* Bit 31 : Connection */
#define UART_PSEL_TXD_CONNECT_Pos (31UL)
#define UART_PSEL_TXD_CONNECT_Msk (0x1UL << UART_PSEL_TXD_CONNECT_Pos)
#define UART_PSEL_TXD_CONNECT_Connected (0UL)
#define UART_PSEL_TXD_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define UART_PSEL_TXD_PORT_Pos (5UL)
#define UART_PSEL_TXD_PORT_Msk (0x1UL << UART_PSEL_TXD_PORT_Pos)

/* Bits 4..0 : Pin number */
#define UART_PSEL_TXD_PIN_Pos (0UL)
#define UART_PSEL_TXD_PIN_Msk (0x1FUL << UART_PSEL_TXD_PIN_Pos)

/* Register: UART_PSEL_CTS */
/* Description: Pin select for CTS */

/* Bit 31 : Connection */
#define UART_PSEL_CTS_CONNECT_Pos (31UL)
#define UART_PSEL_CTS_CONNECT_Msk (0x1UL << UART_PSEL_CTS_CONNECT_Pos)
#define UART_PSEL_CTS_CONNECT_Connected (0UL)
#define UART_PSEL_CTS_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define UART_PSEL_CTS_PORT_Pos (5UL)
#define UART_PSEL_CTS_PORT_Msk (0x1UL << UART_PSEL_CTS_PORT_Pos)

/* Bits 4..0 : Pin number */
#define UART_PSEL_CTS_PIN_Pos (0UL)
#define UART_PSEL_CTS_PIN_Msk (0x1FUL << UART_PSEL_CTS_PIN_Pos)

/* Register: UART_PSEL_RXD */
/* Description: Pin select for RXD */

/* Bit 31 : Connection */
#define UART_PSEL_RXD_CONNECT_Pos (31UL)
#define UART_PSEL_RXD_CONNECT_Msk (0x1UL << UART_PSEL_RXD_CONNECT_Pos)
#define UART_PSEL_RXD_CONNECT_Connected (0UL)
#define UART_PSEL_RXD_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define UART_PSEL_RXD_PORT_Pos (5UL)
#define UART_PSEL_RXD_PORT_Msk (0x1UL << UART_PSEL_RXD_PORT_Pos)

/* Bits 4..0 : Pin number */
#define UART_PSEL_RXD_PIN_Pos (0UL)
#define UART_PSEL_RXD_PIN_Msk (0x1FUL << UART_PSEL_RXD_PIN_Pos)

/* Register: UART_RXD */
/* Description: RXD register */

/* Bits 7..0 : RX data received in previous transfers, double buffered */
#define UART_RXD_RXD_Pos (0UL)
#define UART_RXD_RXD_Msk (0xFFUL << UART_RXD_RXD_Pos)

/* Register: UART_TXD */
/* Description: TXD register */

/* Bits 7..0 : TX data to be transferred */
#define UART_TXD_TXD_Pos (0UL)
#define UART_TXD_TXD_Msk (0xFFUL << UART_TXD_TXD_Pos)

/* Register: UART_BAUDRATE */
/* Description: Baud rate. Accuracy depends on the HFCLK source selected. */

/* Bits 31..0 : Baud rate */
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
/* Description: Configuration of parity and hardware flow control */

/* Bit 8 : Even or odd parity type */
#define UART_CONFIG_PARITYTYPE_Pos (8UL)
#define UART_CONFIG_PARITYTYPE_Msk (0x1UL << UART_CONFIG_PARITYTYPE_Pos)
#define UART_CONFIG_PARITYTYPE_Even (0UL)
#define UART_CONFIG_PARITYTYPE_Odd (1UL)

/* Bit 4 : Stop bits */
#define UART_CONFIG_STOP_Pos (4UL)
#define UART_CONFIG_STOP_Msk (0x1UL << UART_CONFIG_STOP_Pos)
#define UART_CONFIG_STOP_One (0UL)
#define UART_CONFIG_STOP_Two (1UL)

/* Bits 3..1 : Parity */
#define UART_CONFIG_PARITY_Pos (1UL)
#define UART_CONFIG_PARITY_Msk (0x7UL << UART_CONFIG_PARITY_Pos)
#define UART_CONFIG_PARITY_Excluded (0x0UL)
#define UART_CONFIG_PARITY_Included (0x7UL)

/* Bit 0 : Hardware flow control */
#define UART_CONFIG_HWFC_Pos (0UL)
#define UART_CONFIG_HWFC_Msk (0x1UL << UART_CONFIG_HWFC_Pos)
#define UART_CONFIG_HWFC_Disabled (0UL)
#define UART_CONFIG_HWFC_Enabled (1UL)


/* Peripheral: UARTE */
/* Description: UART with EasyDMA 0 */

/* Register: UARTE_TASKS_STARTRX */
/* Description: Start UART receiver */

/* Bit 0 : Start UART receiver */
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL)
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << UARTE_TASKS_STARTRX_TASKS_STARTRX_Pos)
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Trigger (1UL)

/* Register: UARTE_TASKS_STOPRX */
/* Description: Stop UART receiver */

/* Bit 0 : Stop UART receiver */
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Pos (0UL)
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Msk (0x1UL << UARTE_TASKS_STOPRX_TASKS_STOPRX_Pos)
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Trigger (1UL)

/* Register: UARTE_TASKS_STARTTX */
/* Description: Start UART transmitter */

/* Bit 0 : Start UART transmitter */
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL)
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << UARTE_TASKS_STARTTX_TASKS_STARTTX_Pos)
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Trigger (1UL)

/* Register: UARTE_TASKS_STOPTX */
/* Description: Stop UART transmitter */

/* Bit 0 : Stop UART transmitter */
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Pos (0UL)
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Msk (0x1UL << UARTE_TASKS_STOPTX_TASKS_STOPTX_Pos)
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Trigger (1UL)

/* Register: UARTE_TASKS_FLUSHRX */
/* Description: Flush RX FIFO into RX buffer */

/* Bit 0 : Flush RX FIFO into RX buffer */
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Pos (0UL)
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Msk (0x1UL << UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Pos)
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Trigger (1UL)

/* Register: UARTE_EVENTS_CTS */
/* Description: CTS is activated (set low). Clear To Send. */

/* Bit 0 : CTS is activated (set low). Clear To Send. */
#define UARTE_EVENTS_CTS_EVENTS_CTS_Pos (0UL)
#define UARTE_EVENTS_CTS_EVENTS_CTS_Msk (0x1UL << UARTE_EVENTS_CTS_EVENTS_CTS_Pos)
#define UARTE_EVENTS_CTS_EVENTS_CTS_NotGenerated (0UL)
#define UARTE_EVENTS_CTS_EVENTS_CTS_Generated (1UL)

/* Register: UARTE_EVENTS_NCTS */
/* Description: CTS is deactivated (set high). Not Clear To Send. */

/* Bit 0 : CTS is deactivated (set high). Not Clear To Send. */
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Pos (0UL)
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Msk (0x1UL << UARTE_EVENTS_NCTS_EVENTS_NCTS_Pos)
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_NotGenerated (0UL)
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Generated (1UL)

/* Register: UARTE_EVENTS_RXDRDY */
/* Description: Data received in RXD (but potentially not yet transferred to Data RAM) */

/* Bit 0 : Data received in RXD (but potentially not yet transferred to Data RAM) */
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos (0UL)
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Msk (0x1UL << UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos)
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_NotGenerated (0UL)
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Generated (1UL)

/* Register: UARTE_EVENTS_ENDRX */
/* Description: Receive buffer is filled up */

/* Bit 0 : Receive buffer is filled up */
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL)
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Pos)
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0UL)
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Generated (1UL)

/* Register: UARTE_EVENTS_TXDRDY */
/* Description: Data sent from TXD */

/* Bit 0 : Data sent from TXD */
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos (0UL)
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Msk (0x1UL << UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos)
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_NotGenerated (0UL)
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Generated (1UL)

/* Register: UARTE_EVENTS_ENDTX */
/* Description: Last TX byte transmitted */

/* Bit 0 : Last TX byte transmitted */
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL)
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Pos)
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_NotGenerated (0UL)
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Generated (1UL)

/* Register: UARTE_EVENTS_ERROR */
/* Description: Error detected */

/* Bit 0 : Error detected */
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << UARTE_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)

/* Register: UARTE_EVENTS_RXTO */
/* Description: Receiver timeout */

/* Bit 0 : Receiver timeout */
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Pos (0UL)
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Msk (0x1UL << UARTE_EVENTS_RXTO_EVENTS_RXTO_Pos)
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_NotGenerated (0UL)
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Generated (1UL)

/* Register: UARTE_EVENTS_RXSTARTED */
/* Description: UART receiver has started */

/* Bit 0 : UART receiver has started */
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL)
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos)
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_NotGenerated (0UL)
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Generated (1UL)

/* Register: UARTE_EVENTS_TXSTARTED */
/* Description: UART transmitter has started */

/* Bit 0 : UART transmitter has started */
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL)
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos)
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_NotGenerated (0UL)
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Generated (1UL)

/* Register: UARTE_EVENTS_TXSTOPPED */
/* Description: Transmitter stopped */

/* Bit 0 : Transmitter stopped */
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Pos (0UL)
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Msk (0x1UL << UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Pos)
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_NotGenerated (0UL)
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Generated (1UL)

/* Register: UARTE_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 6 : Shortcut between event ENDRX and task STOPRX */
#define UARTE_SHORTS_ENDRX_STOPRX_Pos (6UL)
#define UARTE_SHORTS_ENDRX_STOPRX_Msk (0x1UL << UARTE_SHORTS_ENDRX_STOPRX_Pos)
#define UARTE_SHORTS_ENDRX_STOPRX_Disabled (0UL)
#define UARTE_SHORTS_ENDRX_STOPRX_Enabled (1UL)

/* Bit 5 : Shortcut between event ENDRX and task STARTRX */
#define UARTE_SHORTS_ENDRX_STARTRX_Pos (5UL)
#define UARTE_SHORTS_ENDRX_STARTRX_Msk (0x1UL << UARTE_SHORTS_ENDRX_STARTRX_Pos)
#define UARTE_SHORTS_ENDRX_STARTRX_Disabled (0UL)
#define UARTE_SHORTS_ENDRX_STARTRX_Enabled (1UL)

/* Register: UARTE_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 22 : Enable or disable interrupt for event TXSTOPPED */
#define UARTE_INTEN_TXSTOPPED_Pos (22UL)
#define UARTE_INTEN_TXSTOPPED_Msk (0x1UL << UARTE_INTEN_TXSTOPPED_Pos)
#define UARTE_INTEN_TXSTOPPED_Disabled (0UL)
#define UARTE_INTEN_TXSTOPPED_Enabled (1UL)

/* Bit 20 : Enable or disable interrupt for event TXSTARTED */
#define UARTE_INTEN_TXSTARTED_Pos (20UL)
#define UARTE_INTEN_TXSTARTED_Msk (0x1UL << UARTE_INTEN_TXSTARTED_Pos)
#define UARTE_INTEN_TXSTARTED_Disabled (0UL)
#define UARTE_INTEN_TXSTARTED_Enabled (1UL)

/* Bit 19 : Enable or disable interrupt for event RXSTARTED */
#define UARTE_INTEN_RXSTARTED_Pos (19UL)
#define UARTE_INTEN_RXSTARTED_Msk (0x1UL << UARTE_INTEN_RXSTARTED_Pos)
#define UARTE_INTEN_RXSTARTED_Disabled (0UL)
#define UARTE_INTEN_RXSTARTED_Enabled (1UL)

/* Bit 17 : Enable or disable interrupt for event RXTO */
#define UARTE_INTEN_RXTO_Pos (17UL)
#define UARTE_INTEN_RXTO_Msk (0x1UL << UARTE_INTEN_RXTO_Pos)
#define UARTE_INTEN_RXTO_Disabled (0UL)
#define UARTE_INTEN_RXTO_Enabled (1UL)

/* Bit 9 : Enable or disable interrupt for event ERROR */
#define UARTE_INTEN_ERROR_Pos (9UL)
#define UARTE_INTEN_ERROR_Msk (0x1UL << UARTE_INTEN_ERROR_Pos)
#define UARTE_INTEN_ERROR_Disabled (0UL)
#define UARTE_INTEN_ERROR_Enabled (1UL)

/* Bit 8 : Enable or disable interrupt for event ENDTX */
#define UARTE_INTEN_ENDTX_Pos (8UL)
#define UARTE_INTEN_ENDTX_Msk (0x1UL << UARTE_INTEN_ENDTX_Pos)
#define UARTE_INTEN_ENDTX_Disabled (0UL)
#define UARTE_INTEN_ENDTX_Enabled (1UL)

/* Bit 7 : Enable or disable interrupt for event TXDRDY */
#define UARTE_INTEN_TXDRDY_Pos (7UL)
#define UARTE_INTEN_TXDRDY_Msk (0x1UL << UARTE_INTEN_TXDRDY_Pos)
#define UARTE_INTEN_TXDRDY_Disabled (0UL)
#define UARTE_INTEN_TXDRDY_Enabled (1UL)

/* Bit 4 : Enable or disable interrupt for event ENDRX */
#define UARTE_INTEN_ENDRX_Pos (4UL)
#define UARTE_INTEN_ENDRX_Msk (0x1UL << UARTE_INTEN_ENDRX_Pos)
#define UARTE_INTEN_ENDRX_Disabled (0UL)
#define UARTE_INTEN_ENDRX_Enabled (1UL)

/* Bit 2 : Enable or disable interrupt for event RXDRDY */
#define UARTE_INTEN_RXDRDY_Pos (2UL)
#define UARTE_INTEN_RXDRDY_Msk (0x1UL << UARTE_INTEN_RXDRDY_Pos)
#define UARTE_INTEN_RXDRDY_Disabled (0UL)
#define UARTE_INTEN_RXDRDY_Enabled (1UL)

/* Bit 1 : Enable or disable interrupt for event NCTS */
#define UARTE_INTEN_NCTS_Pos (1UL)
#define UARTE_INTEN_NCTS_Msk (0x1UL << UARTE_INTEN_NCTS_Pos)
#define UARTE_INTEN_NCTS_Disabled (0UL)
#define UARTE_INTEN_NCTS_Enabled (1UL)

/* Bit 0 : Enable or disable interrupt for event CTS */
#define UARTE_INTEN_CTS_Pos (0UL)
#define UARTE_INTEN_CTS_Msk (0x1UL << UARTE_INTEN_CTS_Pos)
#define UARTE_INTEN_CTS_Disabled (0UL)
#define UARTE_INTEN_CTS_Enabled (1UL)

/* Register: UARTE_INTENSET */
/* Description: Enable interrupt */

/* Bit 22 : Write '1' to enable interrupt for event TXSTOPPED */
#define UARTE_INTENSET_TXSTOPPED_Pos (22UL)
#define UARTE_INTENSET_TXSTOPPED_Msk (0x1UL << UARTE_INTENSET_TXSTOPPED_Pos)
#define UARTE_INTENSET_TXSTOPPED_Disabled (0UL)
#define UARTE_INTENSET_TXSTOPPED_Enabled (1UL)
#define UARTE_INTENSET_TXSTOPPED_Set (1UL)

/* Bit 20 : Write '1' to enable interrupt for event TXSTARTED */
#define UARTE_INTENSET_TXSTARTED_Pos (20UL)
#define UARTE_INTENSET_TXSTARTED_Msk (0x1UL << UARTE_INTENSET_TXSTARTED_Pos)
#define UARTE_INTENSET_TXSTARTED_Disabled (0UL)
#define UARTE_INTENSET_TXSTARTED_Enabled (1UL)
#define UARTE_INTENSET_TXSTARTED_Set (1UL)

/* Bit 19 : Write '1' to enable interrupt for event RXSTARTED */
#define UARTE_INTENSET_RXSTARTED_Pos (19UL)
#define UARTE_INTENSET_RXSTARTED_Msk (0x1UL << UARTE_INTENSET_RXSTARTED_Pos)
#define UARTE_INTENSET_RXSTARTED_Disabled (0UL)
#define UARTE_INTENSET_RXSTARTED_Enabled (1UL)
#define UARTE_INTENSET_RXSTARTED_Set (1UL)

/* Bit 17 : Write '1' to enable interrupt for event RXTO */
#define UARTE_INTENSET_RXTO_Pos (17UL)
#define UARTE_INTENSET_RXTO_Msk (0x1UL << UARTE_INTENSET_RXTO_Pos)
#define UARTE_INTENSET_RXTO_Disabled (0UL)
#define UARTE_INTENSET_RXTO_Enabled (1UL)
#define UARTE_INTENSET_RXTO_Set (1UL)

/* Bit 9 : Write '1' to enable interrupt for event ERROR */
#define UARTE_INTENSET_ERROR_Pos (9UL)
#define UARTE_INTENSET_ERROR_Msk (0x1UL << UARTE_INTENSET_ERROR_Pos)
#define UARTE_INTENSET_ERROR_Disabled (0UL)
#define UARTE_INTENSET_ERROR_Enabled (1UL)
#define UARTE_INTENSET_ERROR_Set (1UL)

/* Bit 8 : Write '1' to enable interrupt for event ENDTX */
#define UARTE_INTENSET_ENDTX_Pos (8UL)
#define UARTE_INTENSET_ENDTX_Msk (0x1UL << UARTE_INTENSET_ENDTX_Pos)
#define UARTE_INTENSET_ENDTX_Disabled (0UL)
#define UARTE_INTENSET_ENDTX_Enabled (1UL)
#define UARTE_INTENSET_ENDTX_Set (1UL)

/* Bit 7 : Write '1' to enable interrupt for event TXDRDY */
#define UARTE_INTENSET_TXDRDY_Pos (7UL)
#define UARTE_INTENSET_TXDRDY_Msk (0x1UL << UARTE_INTENSET_TXDRDY_Pos)
#define UARTE_INTENSET_TXDRDY_Disabled (0UL)
#define UARTE_INTENSET_TXDRDY_Enabled (1UL)
#define UARTE_INTENSET_TXDRDY_Set (1UL)

/* Bit 4 : Write '1' to enable interrupt for event ENDRX */
#define UARTE_INTENSET_ENDRX_Pos (4UL)
#define UARTE_INTENSET_ENDRX_Msk (0x1UL << UARTE_INTENSET_ENDRX_Pos)
#define UARTE_INTENSET_ENDRX_Disabled (0UL)
#define UARTE_INTENSET_ENDRX_Enabled (1UL)
#define UARTE_INTENSET_ENDRX_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event RXDRDY */
#define UARTE_INTENSET_RXDRDY_Pos (2UL)
#define UARTE_INTENSET_RXDRDY_Msk (0x1UL << UARTE_INTENSET_RXDRDY_Pos)
#define UARTE_INTENSET_RXDRDY_Disabled (0UL)
#define UARTE_INTENSET_RXDRDY_Enabled (1UL)
#define UARTE_INTENSET_RXDRDY_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event NCTS */
#define UARTE_INTENSET_NCTS_Pos (1UL)
#define UARTE_INTENSET_NCTS_Msk (0x1UL << UARTE_INTENSET_NCTS_Pos)
#define UARTE_INTENSET_NCTS_Disabled (0UL)
#define UARTE_INTENSET_NCTS_Enabled (1UL)
#define UARTE_INTENSET_NCTS_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event CTS */
#define UARTE_INTENSET_CTS_Pos (0UL)
#define UARTE_INTENSET_CTS_Msk (0x1UL << UARTE_INTENSET_CTS_Pos)
#define UARTE_INTENSET_CTS_Disabled (0UL)
#define UARTE_INTENSET_CTS_Enabled (1UL)
#define UARTE_INTENSET_CTS_Set (1UL)

/* Register: UARTE_INTENCLR */
/* Description: Disable interrupt */

/* Bit 22 : Write '1' to disable interrupt for event TXSTOPPED */
#define UARTE_INTENCLR_TXSTOPPED_Pos (22UL)
#define UARTE_INTENCLR_TXSTOPPED_Msk (0x1UL << UARTE_INTENCLR_TXSTOPPED_Pos)
#define UARTE_INTENCLR_TXSTOPPED_Disabled (0UL)
#define UARTE_INTENCLR_TXSTOPPED_Enabled (1UL)
#define UARTE_INTENCLR_TXSTOPPED_Clear (1UL)

/* Bit 20 : Write '1' to disable interrupt for event TXSTARTED */
#define UARTE_INTENCLR_TXSTARTED_Pos (20UL)
#define UARTE_INTENCLR_TXSTARTED_Msk (0x1UL << UARTE_INTENCLR_TXSTARTED_Pos)
#define UARTE_INTENCLR_TXSTARTED_Disabled (0UL)
#define UARTE_INTENCLR_TXSTARTED_Enabled (1UL)
#define UARTE_INTENCLR_TXSTARTED_Clear (1UL)

/* Bit 19 : Write '1' to disable interrupt for event RXSTARTED */
#define UARTE_INTENCLR_RXSTARTED_Pos (19UL)
#define UARTE_INTENCLR_RXSTARTED_Msk (0x1UL << UARTE_INTENCLR_RXSTARTED_Pos)
#define UARTE_INTENCLR_RXSTARTED_Disabled (0UL)
#define UARTE_INTENCLR_RXSTARTED_Enabled (1UL)
#define UARTE_INTENCLR_RXSTARTED_Clear (1UL)

/* Bit 17 : Write '1' to disable interrupt for event RXTO */
#define UARTE_INTENCLR_RXTO_Pos (17UL)
#define UARTE_INTENCLR_RXTO_Msk (0x1UL << UARTE_INTENCLR_RXTO_Pos)
#define UARTE_INTENCLR_RXTO_Disabled (0UL)
#define UARTE_INTENCLR_RXTO_Enabled (1UL)
#define UARTE_INTENCLR_RXTO_Clear (1UL)

/* Bit 9 : Write '1' to disable interrupt for event ERROR */
#define UARTE_INTENCLR_ERROR_Pos (9UL)
#define UARTE_INTENCLR_ERROR_Msk (0x1UL << UARTE_INTENCLR_ERROR_Pos)
#define UARTE_INTENCLR_ERROR_Disabled (0UL)
#define UARTE_INTENCLR_ERROR_Enabled (1UL)
#define UARTE_INTENCLR_ERROR_Clear (1UL)

/* Bit 8 : Write '1' to disable interrupt for event ENDTX */
#define UARTE_INTENCLR_ENDTX_Pos (8UL)
#define UARTE_INTENCLR_ENDTX_Msk (0x1UL << UARTE_INTENCLR_ENDTX_Pos)
#define UARTE_INTENCLR_ENDTX_Disabled (0UL)
#define UARTE_INTENCLR_ENDTX_Enabled (1UL)
#define UARTE_INTENCLR_ENDTX_Clear (1UL)

/* Bit 7 : Write '1' to disable interrupt for event TXDRDY */
#define UARTE_INTENCLR_TXDRDY_Pos (7UL)
#define UARTE_INTENCLR_TXDRDY_Msk (0x1UL << UARTE_INTENCLR_TXDRDY_Pos)
#define UARTE_INTENCLR_TXDRDY_Disabled (0UL)
#define UARTE_INTENCLR_TXDRDY_Enabled (1UL)
#define UARTE_INTENCLR_TXDRDY_Clear (1UL)

/* Bit 4 : Write '1' to disable interrupt for event ENDRX */
#define UARTE_INTENCLR_ENDRX_Pos (4UL)
#define UARTE_INTENCLR_ENDRX_Msk (0x1UL << UARTE_INTENCLR_ENDRX_Pos)
#define UARTE_INTENCLR_ENDRX_Disabled (0UL)
#define UARTE_INTENCLR_ENDRX_Enabled (1UL)
#define UARTE_INTENCLR_ENDRX_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event RXDRDY */
#define UARTE_INTENCLR_RXDRDY_Pos (2UL)
#define UARTE_INTENCLR_RXDRDY_Msk (0x1UL << UARTE_INTENCLR_RXDRDY_Pos)
#define UARTE_INTENCLR_RXDRDY_Disabled (0UL)
#define UARTE_INTENCLR_RXDRDY_Enabled (1UL)
#define UARTE_INTENCLR_RXDRDY_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event NCTS */
#define UARTE_INTENCLR_NCTS_Pos (1UL)
#define UARTE_INTENCLR_NCTS_Msk (0x1UL << UARTE_INTENCLR_NCTS_Pos)
#define UARTE_INTENCLR_NCTS_Disabled (0UL)
#define UARTE_INTENCLR_NCTS_Enabled (1UL)
#define UARTE_INTENCLR_NCTS_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event CTS */
#define UARTE_INTENCLR_CTS_Pos (0UL)
#define UARTE_INTENCLR_CTS_Msk (0x1UL << UARTE_INTENCLR_CTS_Pos)
#define UARTE_INTENCLR_CTS_Disabled (0UL)
#define UARTE_INTENCLR_CTS_Enabled (1UL)
#define UARTE_INTENCLR_CTS_Clear (1UL)

/* Register: UARTE_ERRORSRC */
/* Description: Error source This register is read/write one to clear. */

/* Bit 3 : Break condition */
#define UARTE_ERRORSRC_BREAK_Pos (3UL)
#define UARTE_ERRORSRC_BREAK_Msk (0x1UL << UARTE_ERRORSRC_BREAK_Pos)
#define UARTE_ERRORSRC_BREAK_NotPresent (0UL)
#define UARTE_ERRORSRC_BREAK_Present (1UL)

/* Bit 2 : Framing error occurred */
#define UARTE_ERRORSRC_FRAMING_Pos (2UL)
#define UARTE_ERRORSRC_FRAMING_Msk (0x1UL << UARTE_ERRORSRC_FRAMING_Pos)
#define UARTE_ERRORSRC_FRAMING_NotPresent (0UL)
#define UARTE_ERRORSRC_FRAMING_Present (1UL)

/* Bit 1 : Parity error */
#define UARTE_ERRORSRC_PARITY_Pos (1UL)
#define UARTE_ERRORSRC_PARITY_Msk (0x1UL << UARTE_ERRORSRC_PARITY_Pos)
#define UARTE_ERRORSRC_PARITY_NotPresent (0UL)
#define UARTE_ERRORSRC_PARITY_Present (1UL)

/* Bit 0 : Overrun error */
#define UARTE_ERRORSRC_OVERRUN_Pos (0UL)
#define UARTE_ERRORSRC_OVERRUN_Msk (0x1UL << UARTE_ERRORSRC_OVERRUN_Pos)
#define UARTE_ERRORSRC_OVERRUN_NotPresent (0UL)
#define UARTE_ERRORSRC_OVERRUN_Present (1UL)

/* Register: UARTE_ENABLE */
/* Description: Enable UART */

/* Bits 3..0 : Enable or disable UARTE */
#define UARTE_ENABLE_ENABLE_Pos (0UL)
#define UARTE_ENABLE_ENABLE_Msk (0xFUL << UARTE_ENABLE_ENABLE_Pos)
#define UARTE_ENABLE_ENABLE_Disabled (0UL)
#define UARTE_ENABLE_ENABLE_Enabled (8UL)

/* Register: UARTE_PSEL_RTS */
/* Description: Pin select for RTS signal */

/* Bit 31 : Connection */
#define UARTE_PSEL_RTS_CONNECT_Pos (31UL)
#define UARTE_PSEL_RTS_CONNECT_Msk (0x1UL << UARTE_PSEL_RTS_CONNECT_Pos)
#define UARTE_PSEL_RTS_CONNECT_Connected (0UL)
#define UARTE_PSEL_RTS_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define UARTE_PSEL_RTS_PORT_Pos (5UL)
#define UARTE_PSEL_RTS_PORT_Msk (0x1UL << UARTE_PSEL_RTS_PORT_Pos)

/* Bits 4..0 : Pin number */
#define UARTE_PSEL_RTS_PIN_Pos (0UL)
#define UARTE_PSEL_RTS_PIN_Msk (0x1FUL << UARTE_PSEL_RTS_PIN_Pos)

/* Register: UARTE_PSEL_TXD */
/* Description: Pin select for TXD signal */

/* Bit 31 : Connection */
#define UARTE_PSEL_TXD_CONNECT_Pos (31UL)
#define UARTE_PSEL_TXD_CONNECT_Msk (0x1UL << UARTE_PSEL_TXD_CONNECT_Pos)
#define UARTE_PSEL_TXD_CONNECT_Connected (0UL)
#define UARTE_PSEL_TXD_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define UARTE_PSEL_TXD_PORT_Pos (5UL)
#define UARTE_PSEL_TXD_PORT_Msk (0x1UL << UARTE_PSEL_TXD_PORT_Pos)

/* Bits 4..0 : Pin number */
#define UARTE_PSEL_TXD_PIN_Pos (0UL)
#define UARTE_PSEL_TXD_PIN_Msk (0x1FUL << UARTE_PSEL_TXD_PIN_Pos)

/* Register: UARTE_PSEL_CTS */
/* Description: Pin select for CTS signal */

/* Bit 31 : Connection */
#define UARTE_PSEL_CTS_CONNECT_Pos (31UL)
#define UARTE_PSEL_CTS_CONNECT_Msk (0x1UL << UARTE_PSEL_CTS_CONNECT_Pos)
#define UARTE_PSEL_CTS_CONNECT_Connected (0UL)
#define UARTE_PSEL_CTS_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define UARTE_PSEL_CTS_PORT_Pos (5UL)
#define UARTE_PSEL_CTS_PORT_Msk (0x1UL << UARTE_PSEL_CTS_PORT_Pos)

/* Bits 4..0 : Pin number */
#define UARTE_PSEL_CTS_PIN_Pos (0UL)
#define UARTE_PSEL_CTS_PIN_Msk (0x1FUL << UARTE_PSEL_CTS_PIN_Pos)

/* Register: UARTE_PSEL_RXD */
/* Description: Pin select for RXD signal */

/* Bit 31 : Connection */
#define UARTE_PSEL_RXD_CONNECT_Pos (31UL)
#define UARTE_PSEL_RXD_CONNECT_Msk (0x1UL << UARTE_PSEL_RXD_CONNECT_Pos)
#define UARTE_PSEL_RXD_CONNECT_Connected (0UL)
#define UARTE_PSEL_RXD_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number */
#define UARTE_PSEL_RXD_PORT_Pos (5UL)
#define UARTE_PSEL_RXD_PORT_Msk (0x1UL << UARTE_PSEL_RXD_PORT_Pos)

/* Bits 4..0 : Pin number */
#define UARTE_PSEL_RXD_PIN_Pos (0UL)
#define UARTE_PSEL_RXD_PIN_Msk (0x1FUL << UARTE_PSEL_RXD_PIN_Pos)

/* Register: UARTE_BAUDRATE */
/* Description: Baud rate. Accuracy depends on the HFCLK source selected. */

/* Bits 31..0 : Baud rate */
#define UARTE_BAUDRATE_BAUDRATE_Pos (0UL)
#define UARTE_BAUDRATE_BAUDRATE_Msk (0xFFFFFFFFUL << UARTE_BAUDRATE_BAUDRATE_Pos)
#define UARTE_BAUDRATE_BAUDRATE_Baud1200 (0x0004F000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud2400 (0x0009D000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud4800 (0x0013B000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud9600 (0x00275000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud14400 (0x003AF000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud19200 (0x004EA000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud28800 (0x0075C000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud31250 (0x00800000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud38400 (0x009D0000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud56000 (0x00E50000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud57600 (0x00EB0000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud76800 (0x013A9000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud115200 (0x01D60000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud230400 (0x03B00000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud250000 (0x04000000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud460800 (0x07400000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud921600 (0x0F000000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud1M (0x10000000UL)

/* Register: UARTE_RXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define UARTE_RXD_PTR_PTR_Pos (0UL)
#define UARTE_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << UARTE_RXD_PTR_PTR_Pos)

/* Register: UARTE_RXD_MAXCNT */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 15..0 : Maximum number of bytes in receive buffer */
#define UARTE_RXD_MAXCNT_MAXCNT_Pos (0UL)
#define UARTE_RXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << UARTE_RXD_MAXCNT_MAXCNT_Pos)

/* Register: UARTE_RXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 15..0 : Number of bytes transferred in the last transaction */
#define UARTE_RXD_AMOUNT_AMOUNT_Pos (0UL)
#define UARTE_RXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << UARTE_RXD_AMOUNT_AMOUNT_Pos)

/* Register: UARTE_TXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define UARTE_TXD_PTR_PTR_Pos (0UL)
#define UARTE_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << UARTE_TXD_PTR_PTR_Pos)

/* Register: UARTE_TXD_MAXCNT */
/* Description: Maximum number of bytes in transmit buffer */

/* Bits 15..0 : Maximum number of bytes in transmit buffer */
#define UARTE_TXD_MAXCNT_MAXCNT_Pos (0UL)
#define UARTE_TXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << UARTE_TXD_MAXCNT_MAXCNT_Pos)

/* Register: UARTE_TXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 15..0 : Number of bytes transferred in the last transaction */
#define UARTE_TXD_AMOUNT_AMOUNT_Pos (0UL)
#define UARTE_TXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << UARTE_TXD_AMOUNT_AMOUNT_Pos)

/* Register: UARTE_CONFIG */
/* Description: Configuration of parity and hardware flow control */

/* Bit 8 : Even or odd parity type */
#define UARTE_CONFIG_PARITYTYPE_Pos (8UL)
#define UARTE_CONFIG_PARITYTYPE_Msk (0x1UL << UARTE_CONFIG_PARITYTYPE_Pos)
#define UARTE_CONFIG_PARITYTYPE_Even (0UL)
#define UARTE_CONFIG_PARITYTYPE_Odd (1UL)

/* Bit 4 : Stop bits */
#define UARTE_CONFIG_STOP_Pos (4UL)
#define UARTE_CONFIG_STOP_Msk (0x1UL << UARTE_CONFIG_STOP_Pos)
#define UARTE_CONFIG_STOP_One (0UL)
#define UARTE_CONFIG_STOP_Two (1UL)

/* Bits 3..1 : Parity */
#define UARTE_CONFIG_PARITY_Pos (1UL)
#define UARTE_CONFIG_PARITY_Msk (0x7UL << UARTE_CONFIG_PARITY_Pos)
#define UARTE_CONFIG_PARITY_Excluded (0x0UL)
#define UARTE_CONFIG_PARITY_Included (0x7UL)

/* Bit 0 : Hardware flow control */
#define UARTE_CONFIG_HWFC_Pos (0UL)
#define UARTE_CONFIG_HWFC_Msk (0x1UL << UARTE_CONFIG_HWFC_Pos)
#define UARTE_CONFIG_HWFC_Disabled (0UL)
#define UARTE_CONFIG_HWFC_Enabled (1UL)


/* Peripheral: UICR */
/* Description: User information configuration registers */

/* Register: UICR_NRFFW */
/* Description: Description collection: Reserved for Nordic firmware design */

/* Bits 31..0 : Reserved for Nordic firmware design */
#define UICR_NRFFW_NRFFW_Pos (0UL)
#define UICR_NRFFW_NRFFW_Msk (0xFFFFFFFFUL << UICR_NRFFW_NRFFW_Pos)

/* Register: UICR_NRFHW */
/* Description: Description collection: Reserved for Nordic hardware design */

/* Bits 31..0 : Reserved for Nordic hardware design */
#define UICR_NRFHW_NRFHW_Pos (0UL)
#define UICR_NRFHW_NRFHW_Msk (0xFFFFFFFFUL << UICR_NRFHW_NRFHW_Pos)

/* Register: UICR_CUSTOMER */
/* Description: Description collection: Reserved for customer */

/* Bits 31..0 : Reserved for customer */
#define UICR_CUSTOMER_CUSTOMER_Pos (0UL)
#define UICR_CUSTOMER_CUSTOMER_Msk (0xFFFFFFFFUL << UICR_CUSTOMER_CUSTOMER_Pos)

/* Register: UICR_PSELRESET */
/* Description: Description collection: Mapping of the nRESET function (see POWER chapter for details) */

/* Bit 31 : Connection */
#define UICR_PSELRESET_CONNECT_Pos (31UL)
#define UICR_PSELRESET_CONNECT_Msk (0x1UL << UICR_PSELRESET_CONNECT_Pos)
#define UICR_PSELRESET_CONNECT_Connected (0UL)
#define UICR_PSELRESET_CONNECT_Disconnected (1UL)

/* Bit 5 : Port number onto which nRESET is exposed */
#define UICR_PSELRESET_PORT_Pos (5UL)
#define UICR_PSELRESET_PORT_Msk (0x1UL << UICR_PSELRESET_PORT_Pos)

/* Bits 4..0 : GPIO pin number onto which nRESET is exposed */
#define UICR_PSELRESET_PIN_Pos (0UL)
#define UICR_PSELRESET_PIN_Msk (0x1FUL << UICR_PSELRESET_PIN_Pos)

/* Register: UICR_APPROTECT */
/* Description: Access port protection */

/* Bits 7..0 : Enable or disable access port protection. */
#define UICR_APPROTECT_PALL_Pos (0UL)
#define UICR_APPROTECT_PALL_Msk (0xFFUL << UICR_APPROTECT_PALL_Pos)
#define UICR_APPROTECT_PALL_Enabled (0x00UL)
#define UICR_APPROTECT_PALL_HwDisabled (0x5AUL)
#define UICR_APPROTECT_PALL_Disabled (0xFFUL)

/* Register: UICR_NFCPINS */
/* Description: Setting of pins dedicated to NFC functionality: NFC antenna or GPIO */

/* Bit 0 : Setting of pins dedicated to NFC functionality */
#define UICR_NFCPINS_PROTECT_Pos (0UL)
#define UICR_NFCPINS_PROTECT_Msk (0x1UL << UICR_NFCPINS_PROTECT_Pos)
#define UICR_NFCPINS_PROTECT_Disabled (0UL)
#define UICR_NFCPINS_PROTECT_NFC (1UL)

/* Register: UICR_DEBUGCTRL */
/* Description: Processor debug control */

/* Bits 15..8 : Configure CPU flash patch and breakpoint (FPB) unit behavior */
#define UICR_DEBUGCTRL_CPUFPBEN_Pos (8UL)
#define UICR_DEBUGCTRL_CPUFPBEN_Msk (0xFFUL << UICR_DEBUGCTRL_CPUFPBEN_Pos)
#define UICR_DEBUGCTRL_CPUFPBEN_Disabled (0x00UL)
#define UICR_DEBUGCTRL_CPUFPBEN_Enabled (0xFFUL)

/* Bits 7..0 : Configure CPU non-intrusive debug features */
#define UICR_DEBUGCTRL_CPUNIDEN_Pos (0UL)
#define UICR_DEBUGCTRL_CPUNIDEN_Msk (0xFFUL << UICR_DEBUGCTRL_CPUNIDEN_Pos)
#define UICR_DEBUGCTRL_CPUNIDEN_Disabled (0x00UL)
#define UICR_DEBUGCTRL_CPUNIDEN_Enabled (0xFFUL)

/* Register: UICR_REGOUT0 */
/* Description: Output voltage from REG0 regulator stage. The maximum output voltage from this stage is given as VDDH - V_VDDH-VDD. */

/* Bits 2..0 : Output voltage from REG0 regulator stage. */
#define UICR_REGOUT0_VOUT_Pos (0UL)
#define UICR_REGOUT0_VOUT_Msk (0x7UL << UICR_REGOUT0_VOUT_Pos)
#define UICR_REGOUT0_VOUT_1V8 (0UL)
#define UICR_REGOUT0_VOUT_2V1 (1UL)
#define UICR_REGOUT0_VOUT_2V4 (2UL)
#define UICR_REGOUT0_VOUT_2V7 (3UL)
#define UICR_REGOUT0_VOUT_3V0 (4UL)
#define UICR_REGOUT0_VOUT_3V3 (5UL)
#define UICR_REGOUT0_VOUT_DEFAULT (7UL)


/* Peripheral: USBD */
/* Description: Universal serial bus device */

/* Register: USBD_TASKS_STARTEPIN */
/* Description: Description collection: Captures the EPIN[n].PTR and EPIN[n].MAXCNT registers values, and enables endpoint IN n to respond to traffic from host */

/* Bit 0 : Captures the EPIN[n].PTR and EPIN[n].MAXCNT registers values, and enables endpoint IN n to respond to traffic from host */
#define USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Pos (0UL)
#define USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Msk (0x1UL << USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Pos)
#define USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Trigger (1UL)

/* Register: USBD_TASKS_STARTISOIN */
/* Description: Captures the ISOIN.PTR and ISOIN.MAXCNT registers values, and enables sending data on ISO endpoint */

/* Bit 0 : Captures the ISOIN.PTR and ISOIN.MAXCNT registers values, and enables sending data on ISO endpoint */
#define USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Pos (0UL)
#define USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Msk (0x1UL << USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Pos)
#define USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Trigger (1UL)

/* Register: USBD_TASKS_STARTEPOUT */
/* Description: Description collection: Captures the EPOUT[n].PTR and EPOUT[n].MAXCNT registers values, and enables endpoint n to respond to traffic from host */

/* Bit 0 : Captures the EPOUT[n].PTR and EPOUT[n].MAXCNT registers values, and enables endpoint n to respond to traffic from host */
#define USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Pos (0UL)
#define USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Msk (0x1UL << USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Pos)
#define USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Trigger (1UL)

/* Register: USBD_TASKS_STARTISOOUT */
/* Description: Captures the ISOOUT.PTR and ISOOUT.MAXCNT registers values, and enables receiving of data on ISO endpoint */

/* Bit 0 : Captures the ISOOUT.PTR and ISOOUT.MAXCNT registers values, and enables receiving of data on ISO endpoint */
#define USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Pos (0UL)
#define USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Msk (0x1UL << USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Pos)
#define USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Trigger (1UL)

/* Register: USBD_TASKS_EP0RCVOUT */
/* Description: Allows OUT data stage on control endpoint 0 */

/* Bit 0 : Allows OUT data stage on control endpoint 0 */
#define USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Pos (0UL)
#define USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Msk (0x1UL << USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Pos)
#define USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Trigger (1UL)

/* Register: USBD_TASKS_EP0STATUS */
/* Description: Allows status stage on control endpoint 0 */

/* Bit 0 : Allows status stage on control endpoint 0 */
#define USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Pos (0UL)
#define USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Msk (0x1UL << USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Pos)
#define USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Trigger (1UL)

/* Register: USBD_TASKS_EP0STALL */
/* Description: Stalls data and status stage on control endpoint 0 */

/* Bit 0 : Stalls data and status stage on control endpoint 0 */
#define USBD_TASKS_EP0STALL_TASKS_EP0STALL_Pos (0UL)
#define USBD_TASKS_EP0STALL_TASKS_EP0STALL_Msk (0x1UL << USBD_TASKS_EP0STALL_TASKS_EP0STALL_Pos)
#define USBD_TASKS_EP0STALL_TASKS_EP0STALL_Trigger (1UL)

/* Register: USBD_TASKS_DPDMDRIVE */
/* Description: Forces D+ and D- lines into the state defined in the DPDMVALUE register */

/* Bit 0 : Forces D+ and D- lines into the state defined in the DPDMVALUE register */
#define USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Pos (0UL)
#define USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Msk (0x1UL << USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Pos)
#define USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Trigger (1UL)

/* Register: USBD_TASKS_DPDMNODRIVE */
/* Description: Stops forcing D+ and D- lines into any state (USB engine takes control) */

/* Bit 0 : Stops forcing D+ and D- lines into any state (USB engine takes control) */
#define USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Pos (0UL)
#define USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Msk (0x1UL << USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Pos)
#define USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Trigger (1UL)

/* Register: USBD_EVENTS_USBRESET */
/* Description: Signals that a USB reset condition has been detected on USB lines */

/* Bit 0 : Signals that a USB reset condition has been detected on USB lines */
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_Pos (0UL)
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_Msk (0x1UL << USBD_EVENTS_USBRESET_EVENTS_USBRESET_Pos)
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_NotGenerated (0UL)
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_Generated (1UL)

/* Register: USBD_EVENTS_STARTED */
/* Description: Confirms that the EPIN[n].PTR and EPIN[n].MAXCNT, or EPOUT[n].PTR and EPOUT[n].MAXCNT registers have been captured on all endpoints reported in the EPSTATUS register */

/* Bit 0 : Confirms that the EPIN[n].PTR and EPIN[n].MAXCNT, or EPOUT[n].PTR and EPOUT[n].MAXCNT registers have been captured on all endpoints reported in the EPSTATUS register */
#define USBD_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define USBD_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << USBD_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define USBD_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0UL)
#define USBD_EVENTS_STARTED_EVENTS_STARTED_Generated (1UL)

/* Register: USBD_EVENTS_ENDEPIN */
/* Description: Description collection: The whole EPIN[n] buffer has been consumed. The buffer can be accessed safely by software. */

/* Bit 0 : The whole EPIN[n] buffer has been consumed. The buffer can be accessed safely by software. */
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Pos (0UL)
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Msk (0x1UL << USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Pos)
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_NotGenerated (0UL)
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Generated (1UL)

/* Register: USBD_EVENTS_EP0DATADONE */
/* Description: An acknowledged data transfer has taken place on the control endpoint */

/* Bit 0 : An acknowledged data transfer has taken place on the control endpoint */
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Pos (0UL)
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Msk (0x1UL << USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Pos)
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_NotGenerated (0UL)
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Generated (1UL)

/* Register: USBD_EVENTS_ENDISOIN */
/* Description: The whole ISOIN buffer has been consumed. The buffer can be accessed safely by software. */

/* Bit 0 : The whole ISOIN buffer has been consumed. The buffer can be accessed safely by software. */
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Pos (0UL)
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Msk (0x1UL << USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Pos)
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_NotGenerated (0UL)
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Generated (1UL)

/* Register: USBD_EVENTS_ENDEPOUT */
/* Description: Description collection: The whole EPOUT[n] buffer has been consumed. The buffer can be accessed safely by software. */

/* Bit 0 : The whole EPOUT[n] buffer has been consumed. The buffer can be accessed safely by software. */
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Pos (0UL)
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Msk (0x1UL << USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Pos)
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_NotGenerated (0UL)
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Generated (1UL)

/* Register: USBD_EVENTS_ENDISOOUT */
/* Description: The whole ISOOUT buffer has been consumed. The buffer can be accessed safely by software. */

/* Bit 0 : The whole ISOOUT buffer has been consumed. The buffer can be accessed safely by software. */
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Pos (0UL)
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Msk (0x1UL << USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Pos)
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_NotGenerated (0UL)
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Generated (1UL)

/* Register: USBD_EVENTS_SOF */
/* Description: Signals that a SOF (start of frame) condition has been detected on USB lines */

/* Bit 0 : Signals that a SOF (start of frame) condition has been detected on USB lines */
#define USBD_EVENTS_SOF_EVENTS_SOF_Pos (0UL)
#define USBD_EVENTS_SOF_EVENTS_SOF_Msk (0x1UL << USBD_EVENTS_SOF_EVENTS_SOF_Pos)
#define USBD_EVENTS_SOF_EVENTS_SOF_NotGenerated (0UL)
#define USBD_EVENTS_SOF_EVENTS_SOF_Generated (1UL)

/* Register: USBD_EVENTS_USBEVENT */
/* Description: An event or an error not covered by specific events has occurred. Check EVENTCAUSE register to find the cause. */

/* Bit 0 : An event or an error not covered by specific events has occurred. Check EVENTCAUSE register to find the cause. */
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Pos (0UL)
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Msk (0x1UL << USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Pos)
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_NotGenerated (0UL)
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Generated (1UL)

/* Register: USBD_EVENTS_EP0SETUP */
/* Description: A valid SETUP token has been received (and acknowledged) on the control endpoint */

/* Bit 0 : A valid SETUP token has been received (and acknowledged) on the control endpoint */
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Pos (0UL)
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Msk (0x1UL << USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Pos)
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_NotGenerated (0UL)
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Generated (1UL)

/* Register: USBD_EVENTS_EPDATA */
/* Description: A data transfer has occurred on a data endpoint, indicated by the EPDATASTATUS register */

/* Bit 0 : A data transfer has occurred on a data endpoint, indicated by the EPDATASTATUS register */
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_Pos (0UL)
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_Msk (0x1UL << USBD_EVENTS_EPDATA_EVENTS_EPDATA_Pos)
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_NotGenerated (0UL)
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_Generated (1UL)

/* Register: USBD_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 4 : Shortcut between event ENDEPOUT[0] and task EP0RCVOUT */
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Pos (4UL)
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Msk (0x1UL << USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Pos)
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Disabled (0UL)
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Enabled (1UL)

/* Bit 3 : Shortcut between event ENDEPOUT[0] and task EP0STATUS */
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Pos (3UL)
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Msk (0x1UL << USBD_SHORTS_ENDEPOUT0_EP0STATUS_Pos)
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Disabled (0UL)
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Enabled (1UL)

/* Bit 2 : Shortcut between event EP0DATADONE and task EP0STATUS */
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Pos (2UL)
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Msk (0x1UL << USBD_SHORTS_EP0DATADONE_EP0STATUS_Pos)
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Disabled (0UL)
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Enabled (1UL)

/* Bit 1 : Shortcut between event EP0DATADONE and task STARTEPOUT[0] */
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Pos (1UL)
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Msk (0x1UL << USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Pos)
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Disabled (0UL)
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Enabled (1UL)

/* Bit 0 : Shortcut between event EP0DATADONE and task STARTEPIN[0] */
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Pos (0UL)
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Msk (0x1UL << USBD_SHORTS_EP0DATADONE_STARTEPIN0_Pos)
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Disabled (0UL)
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Enabled (1UL)

/* Register: USBD_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 24 : Enable or disable interrupt for event EPDATA */
#define USBD_INTEN_EPDATA_Pos (24UL)
#define USBD_INTEN_EPDATA_Msk (0x1UL << USBD_INTEN_EPDATA_Pos)
#define USBD_INTEN_EPDATA_Disabled (0UL)
#define USBD_INTEN_EPDATA_Enabled (1UL)

/* Bit 23 : Enable or disable interrupt for event EP0SETUP */
#define USBD_INTEN_EP0SETUP_Pos (23UL)
#define USBD_INTEN_EP0SETUP_Msk (0x1UL << USBD_INTEN_EP0SETUP_Pos)
#define USBD_INTEN_EP0SETUP_Disabled (0UL)
#define USBD_INTEN_EP0SETUP_Enabled (1UL)

/* Bit 22 : Enable or disable interrupt for event USBEVENT */
#define USBD_INTEN_USBEVENT_Pos (22UL)
#define USBD_INTEN_USBEVENT_Msk (0x1UL << USBD_INTEN_USBEVENT_Pos)
#define USBD_INTEN_USBEVENT_Disabled (0UL)
#define USBD_INTEN_USBEVENT_Enabled (1UL)

/* Bit 21 : Enable or disable interrupt for event SOF */
#define USBD_INTEN_SOF_Pos (21UL)
#define USBD_INTEN_SOF_Msk (0x1UL << USBD_INTEN_SOF_Pos)
#define USBD_INTEN_SOF_Disabled (0UL)
#define USBD_INTEN_SOF_Enabled (1UL)

/* Bit 20 : Enable or disable interrupt for event ENDISOOUT */
#define USBD_INTEN_ENDISOOUT_Pos (20UL)
#define USBD_INTEN_ENDISOOUT_Msk (0x1UL << USBD_INTEN_ENDISOOUT_Pos)
#define USBD_INTEN_ENDISOOUT_Disabled (0UL)
#define USBD_INTEN_ENDISOOUT_Enabled (1UL)

/* Bit 19 : Enable or disable interrupt for event ENDEPOUT[7] */
#define USBD_INTEN_ENDEPOUT7_Pos (19UL)
#define USBD_INTEN_ENDEPOUT7_Msk (0x1UL << USBD_INTEN_ENDEPOUT7_Pos)
#define USBD_INTEN_ENDEPOUT7_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT7_Enabled (1UL)

/* Bit 18 : Enable or disable interrupt for event ENDEPOUT[6] */
#define USBD_INTEN_ENDEPOUT6_Pos (18UL)
#define USBD_INTEN_ENDEPOUT6_Msk (0x1UL << USBD_INTEN_ENDEPOUT6_Pos)
#define USBD_INTEN_ENDEPOUT6_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT6_Enabled (1UL)

/* Bit 17 : Enable or disable interrupt for event ENDEPOUT[5] */
#define USBD_INTEN_ENDEPOUT5_Pos (17UL)
#define USBD_INTEN_ENDEPOUT5_Msk (0x1UL << USBD_INTEN_ENDEPOUT5_Pos)
#define USBD_INTEN_ENDEPOUT5_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT5_Enabled (1UL)

/* Bit 16 : Enable or disable interrupt for event ENDEPOUT[4] */
#define USBD_INTEN_ENDEPOUT4_Pos (16UL)
#define USBD_INTEN_ENDEPOUT4_Msk (0x1UL << USBD_INTEN_ENDEPOUT4_Pos)
#define USBD_INTEN_ENDEPOUT4_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT4_Enabled (1UL)

/* Bit 15 : Enable or disable interrupt for event ENDEPOUT[3] */
#define USBD_INTEN_ENDEPOUT3_Pos (15UL)
#define USBD_INTEN_ENDEPOUT3_Msk (0x1UL << USBD_INTEN_ENDEPOUT3_Pos)
#define USBD_INTEN_ENDEPOUT3_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT3_Enabled (1UL)

/* Bit 14 : Enable or disable interrupt for event ENDEPOUT[2] */
#define USBD_INTEN_ENDEPOUT2_Pos (14UL)
#define USBD_INTEN_ENDEPOUT2_Msk (0x1UL << USBD_INTEN_ENDEPOUT2_Pos)
#define USBD_INTEN_ENDEPOUT2_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT2_Enabled (1UL)

/* Bit 13 : Enable or disable interrupt for event ENDEPOUT[1] */
#define USBD_INTEN_ENDEPOUT1_Pos (13UL)
#define USBD_INTEN_ENDEPOUT1_Msk (0x1UL << USBD_INTEN_ENDEPOUT1_Pos)
#define USBD_INTEN_ENDEPOUT1_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT1_Enabled (1UL)

/* Bit 12 : Enable or disable interrupt for event ENDEPOUT[0] */
#define USBD_INTEN_ENDEPOUT0_Pos (12UL)
#define USBD_INTEN_ENDEPOUT0_Msk (0x1UL << USBD_INTEN_ENDEPOUT0_Pos)
#define USBD_INTEN_ENDEPOUT0_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT0_Enabled (1UL)

/* Bit 11 : Enable or disable interrupt for event ENDISOIN */
#define USBD_INTEN_ENDISOIN_Pos (11UL)
#define USBD_INTEN_ENDISOIN_Msk (0x1UL << USBD_INTEN_ENDISOIN_Pos)
#define USBD_INTEN_ENDISOIN_Disabled (0UL)
#define USBD_INTEN_ENDISOIN_Enabled (1UL)

/* Bit 10 : Enable or disable interrupt for event EP0DATADONE */
#define USBD_INTEN_EP0DATADONE_Pos (10UL)
#define USBD_INTEN_EP0DATADONE_Msk (0x1UL << USBD_INTEN_EP0DATADONE_Pos)
#define USBD_INTEN_EP0DATADONE_Disabled (0UL)
#define USBD_INTEN_EP0DATADONE_Enabled (1UL)

/* Bit 9 : Enable or disable interrupt for event ENDEPIN[7] */
#define USBD_INTEN_ENDEPIN7_Pos (9UL)
#define USBD_INTEN_ENDEPIN7_Msk (0x1UL << USBD_INTEN_ENDEPIN7_Pos)
#define USBD_INTEN_ENDEPIN7_Disabled (0UL)
#define USBD_INTEN_ENDEPIN7_Enabled (1UL)

/* Bit 8 : Enable or disable interrupt for event ENDEPIN[6] */
#define USBD_INTEN_ENDEPIN6_Pos (8UL)
#define USBD_INTEN_ENDEPIN6_Msk (0x1UL << USBD_INTEN_ENDEPIN6_Pos)
#define USBD_INTEN_ENDEPIN6_Disabled (0UL)
#define USBD_INTEN_ENDEPIN6_Enabled (1UL)

/* Bit 7 : Enable or disable interrupt for event ENDEPIN[5] */
#define USBD_INTEN_ENDEPIN5_Pos (7UL)
#define USBD_INTEN_ENDEPIN5_Msk (0x1UL << USBD_INTEN_ENDEPIN5_Pos)
#define USBD_INTEN_ENDEPIN5_Disabled (0UL)
#define USBD_INTEN_ENDEPIN5_Enabled (1UL)

/* Bit 6 : Enable or disable interrupt for event ENDEPIN[4] */
#define USBD_INTEN_ENDEPIN4_Pos (6UL)
#define USBD_INTEN_ENDEPIN4_Msk (0x1UL << USBD_INTEN_ENDEPIN4_Pos)
#define USBD_INTEN_ENDEPIN4_Disabled (0UL)
#define USBD_INTEN_ENDEPIN4_Enabled (1UL)

/* Bit 5 : Enable or disable interrupt for event ENDEPIN[3] */
#define USBD_INTEN_ENDEPIN3_Pos (5UL)
#define USBD_INTEN_ENDEPIN3_Msk (0x1UL << USBD_INTEN_ENDEPIN3_Pos)
#define USBD_INTEN_ENDEPIN3_Disabled (0UL)
#define USBD_INTEN_ENDEPIN3_Enabled (1UL)

/* Bit 4 : Enable or disable interrupt for event ENDEPIN[2] */
#define USBD_INTEN_ENDEPIN2_Pos (4UL)
#define USBD_INTEN_ENDEPIN2_Msk (0x1UL << USBD_INTEN_ENDEPIN2_Pos)
#define USBD_INTEN_ENDEPIN2_Disabled (0UL)
#define USBD_INTEN_ENDEPIN2_Enabled (1UL)

/* Bit 3 : Enable or disable interrupt for event ENDEPIN[1] */
#define USBD_INTEN_ENDEPIN1_Pos (3UL)
#define USBD_INTEN_ENDEPIN1_Msk (0x1UL << USBD_INTEN_ENDEPIN1_Pos)
#define USBD_INTEN_ENDEPIN1_Disabled (0UL)
#define USBD_INTEN_ENDEPIN1_Enabled (1UL)

/* Bit 2 : Enable or disable interrupt for event ENDEPIN[0] */
#define USBD_INTEN_ENDEPIN0_Pos (2UL)
#define USBD_INTEN_ENDEPIN0_Msk (0x1UL << USBD_INTEN_ENDEPIN0_Pos)
#define USBD_INTEN_ENDEPIN0_Disabled (0UL)
#define USBD_INTEN_ENDEPIN0_Enabled (1UL)

/* Bit 1 : Enable or disable interrupt for event STARTED */
#define USBD_INTEN_STARTED_Pos (1UL)
#define USBD_INTEN_STARTED_Msk (0x1UL << USBD_INTEN_STARTED_Pos)
#define USBD_INTEN_STARTED_Disabled (0UL)
#define USBD_INTEN_STARTED_Enabled (1UL)

/* Bit 0 : Enable or disable interrupt for event USBRESET */
#define USBD_INTEN_USBRESET_Pos (0UL)
#define USBD_INTEN_USBRESET_Msk (0x1UL << USBD_INTEN_USBRESET_Pos)
#define USBD_INTEN_USBRESET_Disabled (0UL)
#define USBD_INTEN_USBRESET_Enabled (1UL)

/* Register: USBD_INTENSET */
/* Description: Enable interrupt */

/* Bit 24 : Write '1' to enable interrupt for event EPDATA */
#define USBD_INTENSET_EPDATA_Pos (24UL)
#define USBD_INTENSET_EPDATA_Msk (0x1UL << USBD_INTENSET_EPDATA_Pos)
#define USBD_INTENSET_EPDATA_Disabled (0UL)
#define USBD_INTENSET_EPDATA_Enabled (1UL)
#define USBD_INTENSET_EPDATA_Set (1UL)

/* Bit 23 : Write '1' to enable interrupt for event EP0SETUP */
#define USBD_INTENSET_EP0SETUP_Pos (23UL)
#define USBD_INTENSET_EP0SETUP_Msk (0x1UL << USBD_INTENSET_EP0SETUP_Pos)
#define USBD_INTENSET_EP0SETUP_Disabled (0UL)
#define USBD_INTENSET_EP0SETUP_Enabled (1UL)
#define USBD_INTENSET_EP0SETUP_Set (1UL)

/* Bit 22 : Write '1' to enable interrupt for event USBEVENT */
#define USBD_INTENSET_USBEVENT_Pos (22UL)
#define USBD_INTENSET_USBEVENT_Msk (0x1UL << USBD_INTENSET_USBEVENT_Pos)
#define USBD_INTENSET_USBEVENT_Disabled (0UL)
#define USBD_INTENSET_USBEVENT_Enabled (1UL)
#define USBD_INTENSET_USBEVENT_Set (1UL)

/* Bit 21 : Write '1' to enable interrupt for event SOF */
#define USBD_INTENSET_SOF_Pos (21UL)
#define USBD_INTENSET_SOF_Msk (0x1UL << USBD_INTENSET_SOF_Pos)
#define USBD_INTENSET_SOF_Disabled (0UL)
#define USBD_INTENSET_SOF_Enabled (1UL)
#define USBD_INTENSET_SOF_Set (1UL)

/* Bit 20 : Write '1' to enable interrupt for event ENDISOOUT */
#define USBD_INTENSET_ENDISOOUT_Pos (20UL)
#define USBD_INTENSET_ENDISOOUT_Msk (0x1UL << USBD_INTENSET_ENDISOOUT_Pos)
#define USBD_INTENSET_ENDISOOUT_Disabled (0UL)
#define USBD_INTENSET_ENDISOOUT_Enabled (1UL)
#define USBD_INTENSET_ENDISOOUT_Set (1UL)

/* Bit 19 : Write '1' to enable interrupt for event ENDEPOUT[7] */
#define USBD_INTENSET_ENDEPOUT7_Pos (19UL)
#define USBD_INTENSET_ENDEPOUT7_Msk (0x1UL << USBD_INTENSET_ENDEPOUT7_Pos)
#define USBD_INTENSET_ENDEPOUT7_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT7_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT7_Set (1UL)

/* Bit 18 : Write '1' to enable interrupt for event ENDEPOUT[6] */
#define USBD_INTENSET_ENDEPOUT6_Pos (18UL)
#define USBD_INTENSET_ENDEPOUT6_Msk (0x1UL << USBD_INTENSET_ENDEPOUT6_Pos)
#define USBD_INTENSET_ENDEPOUT6_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT6_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT6_Set (1UL)

/* Bit 17 : Write '1' to enable interrupt for event ENDEPOUT[5] */
#define USBD_INTENSET_ENDEPOUT5_Pos (17UL)
#define USBD_INTENSET_ENDEPOUT5_Msk (0x1UL << USBD_INTENSET_ENDEPOUT5_Pos)
#define USBD_INTENSET_ENDEPOUT5_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT5_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT5_Set (1UL)

/* Bit 16 : Write '1' to enable interrupt for event ENDEPOUT[4] */
#define USBD_INTENSET_ENDEPOUT4_Pos (16UL)
#define USBD_INTENSET_ENDEPOUT4_Msk (0x1UL << USBD_INTENSET_ENDEPOUT4_Pos)
#define USBD_INTENSET_ENDEPOUT4_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT4_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT4_Set (1UL)

/* Bit 15 : Write '1' to enable interrupt for event ENDEPOUT[3] */
#define USBD_INTENSET_ENDEPOUT3_Pos (15UL)
#define USBD_INTENSET_ENDEPOUT3_Msk (0x1UL << USBD_INTENSET_ENDEPOUT3_Pos)
#define USBD_INTENSET_ENDEPOUT3_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT3_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT3_Set (1UL)

/* Bit 14 : Write '1' to enable interrupt for event ENDEPOUT[2] */
#define USBD_INTENSET_ENDEPOUT2_Pos (14UL)
#define USBD_INTENSET_ENDEPOUT2_Msk (0x1UL << USBD_INTENSET_ENDEPOUT2_Pos)
#define USBD_INTENSET_ENDEPOUT2_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT2_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT2_Set (1UL)

/* Bit 13 : Write '1' to enable interrupt for event ENDEPOUT[1] */
#define USBD_INTENSET_ENDEPOUT1_Pos (13UL)
#define USBD_INTENSET_ENDEPOUT1_Msk (0x1UL << USBD_INTENSET_ENDEPOUT1_Pos)
#define USBD_INTENSET_ENDEPOUT1_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT1_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT1_Set (1UL)

/* Bit 12 : Write '1' to enable interrupt for event ENDEPOUT[0] */
#define USBD_INTENSET_ENDEPOUT0_Pos (12UL)
#define USBD_INTENSET_ENDEPOUT0_Msk (0x1UL << USBD_INTENSET_ENDEPOUT0_Pos)
#define USBD_INTENSET_ENDEPOUT0_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT0_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT0_Set (1UL)

/* Bit 11 : Write '1' to enable interrupt for event ENDISOIN */
#define USBD_INTENSET_ENDISOIN_Pos (11UL)
#define USBD_INTENSET_ENDISOIN_Msk (0x1UL << USBD_INTENSET_ENDISOIN_Pos)
#define USBD_INTENSET_ENDISOIN_Disabled (0UL)
#define USBD_INTENSET_ENDISOIN_Enabled (1UL)
#define USBD_INTENSET_ENDISOIN_Set (1UL)

/* Bit 10 : Write '1' to enable interrupt for event EP0DATADONE */
#define USBD_INTENSET_EP0DATADONE_Pos (10UL)
#define USBD_INTENSET_EP0DATADONE_Msk (0x1UL << USBD_INTENSET_EP0DATADONE_Pos)
#define USBD_INTENSET_EP0DATADONE_Disabled (0UL)
#define USBD_INTENSET_EP0DATADONE_Enabled (1UL)
#define USBD_INTENSET_EP0DATADONE_Set (1UL)

/* Bit 9 : Write '1' to enable interrupt for event ENDEPIN[7] */
#define USBD_INTENSET_ENDEPIN7_Pos (9UL)
#define USBD_INTENSET_ENDEPIN7_Msk (0x1UL << USBD_INTENSET_ENDEPIN7_Pos)
#define USBD_INTENSET_ENDEPIN7_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN7_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN7_Set (1UL)

/* Bit 8 : Write '1' to enable interrupt for event ENDEPIN[6] */
#define USBD_INTENSET_ENDEPIN6_Pos (8UL)
#define USBD_INTENSET_ENDEPIN6_Msk (0x1UL << USBD_INTENSET_ENDEPIN6_Pos)
#define USBD_INTENSET_ENDEPIN6_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN6_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN6_Set (1UL)

/* Bit 7 : Write '1' to enable interrupt for event ENDEPIN[5] */
#define USBD_INTENSET_ENDEPIN5_Pos (7UL)
#define USBD_INTENSET_ENDEPIN5_Msk (0x1UL << USBD_INTENSET_ENDEPIN5_Pos)
#define USBD_INTENSET_ENDEPIN5_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN5_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN5_Set (1UL)

/* Bit 6 : Write '1' to enable interrupt for event ENDEPIN[4] */
#define USBD_INTENSET_ENDEPIN4_Pos (6UL)
#define USBD_INTENSET_ENDEPIN4_Msk (0x1UL << USBD_INTENSET_ENDEPIN4_Pos)
#define USBD_INTENSET_ENDEPIN4_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN4_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN4_Set (1UL)

/* Bit 5 : Write '1' to enable interrupt for event ENDEPIN[3] */
#define USBD_INTENSET_ENDEPIN3_Pos (5UL)
#define USBD_INTENSET_ENDEPIN3_Msk (0x1UL << USBD_INTENSET_ENDEPIN3_Pos)
#define USBD_INTENSET_ENDEPIN3_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN3_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN3_Set (1UL)

/* Bit 4 : Write '1' to enable interrupt for event ENDEPIN[2] */
#define USBD_INTENSET_ENDEPIN2_Pos (4UL)
#define USBD_INTENSET_ENDEPIN2_Msk (0x1UL << USBD_INTENSET_ENDEPIN2_Pos)
#define USBD_INTENSET_ENDEPIN2_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN2_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN2_Set (1UL)

/* Bit 3 : Write '1' to enable interrupt for event ENDEPIN[1] */
#define USBD_INTENSET_ENDEPIN1_Pos (3UL)
#define USBD_INTENSET_ENDEPIN1_Msk (0x1UL << USBD_INTENSET_ENDEPIN1_Pos)
#define USBD_INTENSET_ENDEPIN1_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN1_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN1_Set (1UL)

/* Bit 2 : Write '1' to enable interrupt for event ENDEPIN[0] */
#define USBD_INTENSET_ENDEPIN0_Pos (2UL)
#define USBD_INTENSET_ENDEPIN0_Msk (0x1UL << USBD_INTENSET_ENDEPIN0_Pos)
#define USBD_INTENSET_ENDEPIN0_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN0_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN0_Set (1UL)

/* Bit 1 : Write '1' to enable interrupt for event STARTED */
#define USBD_INTENSET_STARTED_Pos (1UL)
#define USBD_INTENSET_STARTED_Msk (0x1UL << USBD_INTENSET_STARTED_Pos)
#define USBD_INTENSET_STARTED_Disabled (0UL)
#define USBD_INTENSET_STARTED_Enabled (1UL)
#define USBD_INTENSET_STARTED_Set (1UL)

/* Bit 0 : Write '1' to enable interrupt for event USBRESET */
#define USBD_INTENSET_USBRESET_Pos (0UL)
#define USBD_INTENSET_USBRESET_Msk (0x1UL << USBD_INTENSET_USBRESET_Pos)
#define USBD_INTENSET_USBRESET_Disabled (0UL)
#define USBD_INTENSET_USBRESET_Enabled (1UL)
#define USBD_INTENSET_USBRESET_Set (1UL)

/* Register: USBD_INTENCLR */
/* Description: Disable interrupt */

/* Bit 24 : Write '1' to disable interrupt for event EPDATA */
#define USBD_INTENCLR_EPDATA_Pos (24UL)
#define USBD_INTENCLR_EPDATA_Msk (0x1UL << USBD_INTENCLR_EPDATA_Pos)
#define USBD_INTENCLR_EPDATA_Disabled (0UL)
#define USBD_INTENCLR_EPDATA_Enabled (1UL)
#define USBD_INTENCLR_EPDATA_Clear (1UL)

/* Bit 23 : Write '1' to disable interrupt for event EP0SETUP */
#define USBD_INTENCLR_EP0SETUP_Pos (23UL)
#define USBD_INTENCLR_EP0SETUP_Msk (0x1UL << USBD_INTENCLR_EP0SETUP_Pos)
#define USBD_INTENCLR_EP0SETUP_Disabled (0UL)
#define USBD_INTENCLR_EP0SETUP_Enabled (1UL)
#define USBD_INTENCLR_EP0SETUP_Clear (1UL)

/* Bit 22 : Write '1' to disable interrupt for event USBEVENT */
#define USBD_INTENCLR_USBEVENT_Pos (22UL)
#define USBD_INTENCLR_USBEVENT_Msk (0x1UL << USBD_INTENCLR_USBEVENT_Pos)
#define USBD_INTENCLR_USBEVENT_Disabled (0UL)
#define USBD_INTENCLR_USBEVENT_Enabled (1UL)
#define USBD_INTENCLR_USBEVENT_Clear (1UL)

/* Bit 21 : Write '1' to disable interrupt for event SOF */
#define USBD_INTENCLR_SOF_Pos (21UL)
#define USBD_INTENCLR_SOF_Msk (0x1UL << USBD_INTENCLR_SOF_Pos)
#define USBD_INTENCLR_SOF_Disabled (0UL)
#define USBD_INTENCLR_SOF_Enabled (1UL)
#define USBD_INTENCLR_SOF_Clear (1UL)

/* Bit 20 : Write '1' to disable interrupt for event ENDISOOUT */
#define USBD_INTENCLR_ENDISOOUT_Pos (20UL)
#define USBD_INTENCLR_ENDISOOUT_Msk (0x1UL << USBD_INTENCLR_ENDISOOUT_Pos)
#define USBD_INTENCLR_ENDISOOUT_Disabled (0UL)
#define USBD_INTENCLR_ENDISOOUT_Enabled (1UL)
#define USBD_INTENCLR_ENDISOOUT_Clear (1UL)

/* Bit 19 : Write '1' to disable interrupt for event ENDEPOUT[7] */
#define USBD_INTENCLR_ENDEPOUT7_Pos (19UL)
#define USBD_INTENCLR_ENDEPOUT7_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT7_Pos)
#define USBD_INTENCLR_ENDEPOUT7_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT7_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT7_Clear (1UL)

/* Bit 18 : Write '1' to disable interrupt for event ENDEPOUT[6] */
#define USBD_INTENCLR_ENDEPOUT6_Pos (18UL)
#define USBD_INTENCLR_ENDEPOUT6_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT6_Pos)
#define USBD_INTENCLR_ENDEPOUT6_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT6_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT6_Clear (1UL)

/* Bit 17 : Write '1' to disable interrupt for event ENDEPOUT[5] */
#define USBD_INTENCLR_ENDEPOUT5_Pos (17UL)
#define USBD_INTENCLR_ENDEPOUT5_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT5_Pos)
#define USBD_INTENCLR_ENDEPOUT5_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT5_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT5_Clear (1UL)

/* Bit 16 : Write '1' to disable interrupt for event ENDEPOUT[4] */
#define USBD_INTENCLR_ENDEPOUT4_Pos (16UL)
#define USBD_INTENCLR_ENDEPOUT4_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT4_Pos)
#define USBD_INTENCLR_ENDEPOUT4_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT4_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT4_Clear (1UL)

/* Bit 15 : Write '1' to disable interrupt for event ENDEPOUT[3] */
#define USBD_INTENCLR_ENDEPOUT3_Pos (15UL)
#define USBD_INTENCLR_ENDEPOUT3_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT3_Pos)
#define USBD_INTENCLR_ENDEPOUT3_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT3_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT3_Clear (1UL)

/* Bit 14 : Write '1' to disable interrupt for event ENDEPOUT[2] */
#define USBD_INTENCLR_ENDEPOUT2_Pos (14UL)
#define USBD_INTENCLR_ENDEPOUT2_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT2_Pos)
#define USBD_INTENCLR_ENDEPOUT2_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT2_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT2_Clear (1UL)

/* Bit 13 : Write '1' to disable interrupt for event ENDEPOUT[1] */
#define USBD_INTENCLR_ENDEPOUT1_Pos (13UL)
#define USBD_INTENCLR_ENDEPOUT1_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT1_Pos)
#define USBD_INTENCLR_ENDEPOUT1_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT1_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT1_Clear (1UL)

/* Bit 12 : Write '1' to disable interrupt for event ENDEPOUT[0] */
#define USBD_INTENCLR_ENDEPOUT0_Pos (12UL)
#define USBD_INTENCLR_ENDEPOUT0_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT0_Pos)
#define USBD_INTENCLR_ENDEPOUT0_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT0_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT0_Clear (1UL)

/* Bit 11 : Write '1' to disable interrupt for event ENDISOIN */
#define USBD_INTENCLR_ENDISOIN_Pos (11UL)
#define USBD_INTENCLR_ENDISOIN_Msk (0x1UL << USBD_INTENCLR_ENDISOIN_Pos)
#define USBD_INTENCLR_ENDISOIN_Disabled (0UL)
#define USBD_INTENCLR_ENDISOIN_Enabled (1UL)
#define USBD_INTENCLR_ENDISOIN_Clear (1UL)

/* Bit 10 : Write '1' to disable interrupt for event EP0DATADONE */
#define USBD_INTENCLR_EP0DATADONE_Pos (10UL)
#define USBD_INTENCLR_EP0DATADONE_Msk (0x1UL << USBD_INTENCLR_EP0DATADONE_Pos)
#define USBD_INTENCLR_EP0DATADONE_Disabled (0UL)
#define USBD_INTENCLR_EP0DATADONE_Enabled (1UL)
#define USBD_INTENCLR_EP0DATADONE_Clear (1UL)

/* Bit 9 : Write '1' to disable interrupt for event ENDEPIN[7] */
#define USBD_INTENCLR_ENDEPIN7_Pos (9UL)
#define USBD_INTENCLR_ENDEPIN7_Msk (0x1UL << USBD_INTENCLR_ENDEPIN7_Pos)
#define USBD_INTENCLR_ENDEPIN7_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN7_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN7_Clear (1UL)

/* Bit 8 : Write '1' to disable interrupt for event ENDEPIN[6] */
#define USBD_INTENCLR_ENDEPIN6_Pos (8UL)
#define USBD_INTENCLR_ENDEPIN6_Msk (0x1UL << USBD_INTENCLR_ENDEPIN6_Pos)
#define USBD_INTENCLR_ENDEPIN6_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN6_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN6_Clear (1UL)

/* Bit 7 : Write '1' to disable interrupt for event ENDEPIN[5] */
#define USBD_INTENCLR_ENDEPIN5_Pos (7UL)
#define USBD_INTENCLR_ENDEPIN5_Msk (0x1UL << USBD_INTENCLR_ENDEPIN5_Pos)
#define USBD_INTENCLR_ENDEPIN5_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN5_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN5_Clear (1UL)

/* Bit 6 : Write '1' to disable interrupt for event ENDEPIN[4] */
#define USBD_INTENCLR_ENDEPIN4_Pos (6UL)
#define USBD_INTENCLR_ENDEPIN4_Msk (0x1UL << USBD_INTENCLR_ENDEPIN4_Pos)
#define USBD_INTENCLR_ENDEPIN4_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN4_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN4_Clear (1UL)

/* Bit 5 : Write '1' to disable interrupt for event ENDEPIN[3] */
#define USBD_INTENCLR_ENDEPIN3_Pos (5UL)
#define USBD_INTENCLR_ENDEPIN3_Msk (0x1UL << USBD_INTENCLR_ENDEPIN3_Pos)
#define USBD_INTENCLR_ENDEPIN3_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN3_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN3_Clear (1UL)

/* Bit 4 : Write '1' to disable interrupt for event ENDEPIN[2] */
#define USBD_INTENCLR_ENDEPIN2_Pos (4UL)
#define USBD_INTENCLR_ENDEPIN2_Msk (0x1UL << USBD_INTENCLR_ENDEPIN2_Pos)
#define USBD_INTENCLR_ENDEPIN2_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN2_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN2_Clear (1UL)

/* Bit 3 : Write '1' to disable interrupt for event ENDEPIN[1] */
#define USBD_INTENCLR_ENDEPIN1_Pos (3UL)
#define USBD_INTENCLR_ENDEPIN1_Msk (0x1UL << USBD_INTENCLR_ENDEPIN1_Pos)
#define USBD_INTENCLR_ENDEPIN1_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN1_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN1_Clear (1UL)

/* Bit 2 : Write '1' to disable interrupt for event ENDEPIN[0] */
#define USBD_INTENCLR_ENDEPIN0_Pos (2UL)
#define USBD_INTENCLR_ENDEPIN0_Msk (0x1UL << USBD_INTENCLR_ENDEPIN0_Pos)
#define USBD_INTENCLR_ENDEPIN0_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN0_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN0_Clear (1UL)

/* Bit 1 : Write '1' to disable interrupt for event STARTED */
#define USBD_INTENCLR_STARTED_Pos (1UL)
#define USBD_INTENCLR_STARTED_Msk (0x1UL << USBD_INTENCLR_STARTED_Pos)
#define USBD_INTENCLR_STARTED_Disabled (0UL)
#define USBD_INTENCLR_STARTED_Enabled (1UL)
#define USBD_INTENCLR_STARTED_Clear (1UL)

/* Bit 0 : Write '1' to disable interrupt for event USBRESET */
#define USBD_INTENCLR_USBRESET_Pos (0UL)
#define USBD_INTENCLR_USBRESET_Msk (0x1UL << USBD_INTENCLR_USBRESET_Pos)
#define USBD_INTENCLR_USBRESET_Disabled (0UL)
#define USBD_INTENCLR_USBRESET_Enabled (1UL)
#define USBD_INTENCLR_USBRESET_Clear (1UL)

/* Register: USBD_EVENTCAUSE */
/* Description: Details on what caused the USBEVENT event */

/* Bit 11 : USB device is ready for normal operation. Write '1' to clear. */
#define USBD_EVENTCAUSE_READY_Pos (11UL)
#define USBD_EVENTCAUSE_READY_Msk (0x1UL << USBD_EVENTCAUSE_READY_Pos)
#define USBD_EVENTCAUSE_READY_NotDetected (0UL)
#define USBD_EVENTCAUSE_READY_Ready (1UL)

/* Bit 10 : USB MAC has been woken up and operational. Write '1' to clear. */
#define USBD_EVENTCAUSE_USBWUALLOWED_Pos (10UL)
#define USBD_EVENTCAUSE_USBWUALLOWED_Msk (0x1UL << USBD_EVENTCAUSE_USBWUALLOWED_Pos)
#define USBD_EVENTCAUSE_USBWUALLOWED_NotAllowed (0UL)
#define USBD_EVENTCAUSE_USBWUALLOWED_Allowed (1UL)

/* Bit 9 : Signals that a RESUME condition (K state or activity restart) has been detected on USB lines. Write '1' to clear. */
#define USBD_EVENTCAUSE_RESUME_Pos (9UL)
#define USBD_EVENTCAUSE_RESUME_Msk (0x1UL << USBD_EVENTCAUSE_RESUME_Pos)
#define USBD_EVENTCAUSE_RESUME_NotDetected (0UL)
#define USBD_EVENTCAUSE_RESUME_Detected (1UL)

/* Bit 8 : Signals that USB lines have been idle long enough for the device to enter suspend. Write '1' to clear. */
#define USBD_EVENTCAUSE_SUSPEND_Pos (8UL)
#define USBD_EVENTCAUSE_SUSPEND_Msk (0x1UL << USBD_EVENTCAUSE_SUSPEND_Pos)
#define USBD_EVENTCAUSE_SUSPEND_NotDetected (0UL)
#define USBD_EVENTCAUSE_SUSPEND_Detected (1UL)

/* Bit 0 : CRC error was detected on isochronous OUT endpoint 8. Write '1' to clear. */
#define USBD_EVENTCAUSE_ISOOUTCRC_Pos (0UL)
#define USBD_EVENTCAUSE_ISOOUTCRC_Msk (0x1UL << USBD_EVENTCAUSE_ISOOUTCRC_Pos)
#define USBD_EVENTCAUSE_ISOOUTCRC_NotDetected (0UL)
#define USBD_EVENTCAUSE_ISOOUTCRC_Detected (1UL)

/* Register: USBD_HALTED_EPIN */
/* Description: Description collection: IN endpoint halted status. Can be used as is as response to a GetStatus() request to endpoint. */

/* Bits 15..0 : IN endpoint halted status. Can be used as is as response to a GetStatus() request to endpoint. */
#define USBD_HALTED_EPIN_GETSTATUS_Pos (0UL)
#define USBD_HALTED_EPIN_GETSTATUS_Msk (0xFFFFUL << USBD_HALTED_EPIN_GETSTATUS_Pos)
#define USBD_HALTED_EPIN_GETSTATUS_NotHalted (0UL)
#define USBD_HALTED_EPIN_GETSTATUS_Halted (1UL)

/* Register: USBD_HALTED_EPOUT */
/* Description: Description collection: OUT endpoint halted status. Can be used as is as response to a GetStatus() request to endpoint. */

/* Bits 15..0 : OUT endpoint halted status. Can be used as is as response to a GetStatus() request to endpoint. */
#define USBD_HALTED_EPOUT_GETSTATUS_Pos (0UL)
#define USBD_HALTED_EPOUT_GETSTATUS_Msk (0xFFFFUL << USBD_HALTED_EPOUT_GETSTATUS_Pos)
#define USBD_HALTED_EPOUT_GETSTATUS_NotHalted (0UL)
#define USBD_HALTED_EPOUT_GETSTATUS_Halted (1UL)

/* Register: USBD_EPSTATUS */
/* Description: Provides information on which endpoint's EasyDMA registers have been captured */

/* Bit 24 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT8_Pos (24UL)
#define USBD_EPSTATUS_EPOUT8_Msk (0x1UL << USBD_EPSTATUS_EPOUT8_Pos)
#define USBD_EPSTATUS_EPOUT8_NoData (0UL)
#define USBD_EPSTATUS_EPOUT8_DataDone (1UL)

/* Bit 23 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT7_Pos (23UL)
#define USBD_EPSTATUS_EPOUT7_Msk (0x1UL << USBD_EPSTATUS_EPOUT7_Pos)
#define USBD_EPSTATUS_EPOUT7_NoData (0UL)
#define USBD_EPSTATUS_EPOUT7_DataDone (1UL)

/* Bit 22 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT6_Pos (22UL)
#define USBD_EPSTATUS_EPOUT6_Msk (0x1UL << USBD_EPSTATUS_EPOUT6_Pos)
#define USBD_EPSTATUS_EPOUT6_NoData (0UL)
#define USBD_EPSTATUS_EPOUT6_DataDone (1UL)

/* Bit 21 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT5_Pos (21UL)
#define USBD_EPSTATUS_EPOUT5_Msk (0x1UL << USBD_EPSTATUS_EPOUT5_Pos)
#define USBD_EPSTATUS_EPOUT5_NoData (0UL)
#define USBD_EPSTATUS_EPOUT5_DataDone (1UL)

/* Bit 20 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT4_Pos (20UL)
#define USBD_EPSTATUS_EPOUT4_Msk (0x1UL << USBD_EPSTATUS_EPOUT4_Pos)
#define USBD_EPSTATUS_EPOUT4_NoData (0UL)
#define USBD_EPSTATUS_EPOUT4_DataDone (1UL)

/* Bit 19 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT3_Pos (19UL)
#define USBD_EPSTATUS_EPOUT3_Msk (0x1UL << USBD_EPSTATUS_EPOUT3_Pos)
#define USBD_EPSTATUS_EPOUT3_NoData (0UL)
#define USBD_EPSTATUS_EPOUT3_DataDone (1UL)

/* Bit 18 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT2_Pos (18UL)
#define USBD_EPSTATUS_EPOUT2_Msk (0x1UL << USBD_EPSTATUS_EPOUT2_Pos)
#define USBD_EPSTATUS_EPOUT2_NoData (0UL)
#define USBD_EPSTATUS_EPOUT2_DataDone (1UL)

/* Bit 17 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT1_Pos (17UL)
#define USBD_EPSTATUS_EPOUT1_Msk (0x1UL << USBD_EPSTATUS_EPOUT1_Pos)
#define USBD_EPSTATUS_EPOUT1_NoData (0UL)
#define USBD_EPSTATUS_EPOUT1_DataDone (1UL)

/* Bit 16 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT0_Pos (16UL)
#define USBD_EPSTATUS_EPOUT0_Msk (0x1UL << USBD_EPSTATUS_EPOUT0_Pos)
#define USBD_EPSTATUS_EPOUT0_NoData (0UL)
#define USBD_EPSTATUS_EPOUT0_DataDone (1UL)

/* Bit 8 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN8_Pos (8UL)
#define USBD_EPSTATUS_EPIN8_Msk (0x1UL << USBD_EPSTATUS_EPIN8_Pos)
#define USBD_EPSTATUS_EPIN8_NoData (0UL)
#define USBD_EPSTATUS_EPIN8_DataDone (1UL)

/* Bit 7 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN7_Pos (7UL)
#define USBD_EPSTATUS_EPIN7_Msk (0x1UL << USBD_EPSTATUS_EPIN7_Pos)
#define USBD_EPSTATUS_EPIN7_NoData (0UL)
#define USBD_EPSTATUS_EPIN7_DataDone (1UL)

/* Bit 6 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN6_Pos (6UL)
#define USBD_EPSTATUS_EPIN6_Msk (0x1UL << USBD_EPSTATUS_EPIN6_Pos)
#define USBD_EPSTATUS_EPIN6_NoData (0UL)
#define USBD_EPSTATUS_EPIN6_DataDone (1UL)

/* Bit 5 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN5_Pos (5UL)
#define USBD_EPSTATUS_EPIN5_Msk (0x1UL << USBD_EPSTATUS_EPIN5_Pos)
#define USBD_EPSTATUS_EPIN5_NoData (0UL)
#define USBD_EPSTATUS_EPIN5_DataDone (1UL)

/* Bit 4 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN4_Pos (4UL)
#define USBD_EPSTATUS_EPIN4_Msk (0x1UL << USBD_EPSTATUS_EPIN4_Pos)
#define USBD_EPSTATUS_EPIN4_NoData (0UL)
#define USBD_EPSTATUS_EPIN4_DataDone (1UL)

/* Bit 3 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN3_Pos (3UL)
#define USBD_EPSTATUS_EPIN3_Msk (0x1UL << USBD_EPSTATUS_EPIN3_Pos)
#define USBD_EPSTATUS_EPIN3_NoData (0UL)
#define USBD_EPSTATUS_EPIN3_DataDone (1UL)

/* Bit 2 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN2_Pos (2UL)
#define USBD_EPSTATUS_EPIN2_Msk (0x1UL << USBD_EPSTATUS_EPIN2_Pos)
#define USBD_EPSTATUS_EPIN2_NoData (0UL)
#define USBD_EPSTATUS_EPIN2_DataDone (1UL)

/* Bit 1 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN1_Pos (1UL)
#define USBD_EPSTATUS_EPIN1_Msk (0x1UL << USBD_EPSTATUS_EPIN1_Pos)
#define USBD_EPSTATUS_EPIN1_NoData (0UL)
#define USBD_EPSTATUS_EPIN1_DataDone (1UL)

/* Bit 0 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN0_Pos (0UL)
#define USBD_EPSTATUS_EPIN0_Msk (0x1UL << USBD_EPSTATUS_EPIN0_Pos)
#define USBD_EPSTATUS_EPIN0_NoData (0UL)
#define USBD_EPSTATUS_EPIN0_DataDone (1UL)

/* Register: USBD_EPDATASTATUS */
/* Description: Provides information on which endpoint(s) an acknowledged data transfer has occurred (EPDATA event) */

/* Bit 23 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT7_Pos (23UL)
#define USBD_EPDATASTATUS_EPOUT7_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT7_Pos)
#define USBD_EPDATASTATUS_EPOUT7_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT7_Started (1UL)

/* Bit 22 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT6_Pos (22UL)
#define USBD_EPDATASTATUS_EPOUT6_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT6_Pos)
#define USBD_EPDATASTATUS_EPOUT6_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT6_Started (1UL)

/* Bit 21 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT5_Pos (21UL)
#define USBD_EPDATASTATUS_EPOUT5_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT5_Pos)
#define USBD_EPDATASTATUS_EPOUT5_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT5_Started (1UL)

/* Bit 20 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT4_Pos (20UL)
#define USBD_EPDATASTATUS_EPOUT4_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT4_Pos)
#define USBD_EPDATASTATUS_EPOUT4_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT4_Started (1UL)

/* Bit 19 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT3_Pos (19UL)
#define USBD_EPDATASTATUS_EPOUT3_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT3_Pos)
#define USBD_EPDATASTATUS_EPOUT3_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT3_Started (1UL)

/* Bit 18 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT2_Pos (18UL)
#define USBD_EPDATASTATUS_EPOUT2_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT2_Pos)
#define USBD_EPDATASTATUS_EPOUT2_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT2_Started (1UL)

/* Bit 17 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT1_Pos (17UL)
#define USBD_EPDATASTATUS_EPOUT1_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT1_Pos)
#define USBD_EPDATASTATUS_EPOUT1_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT1_Started (1UL)

/* Bit 7 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN7_Pos (7UL)
#define USBD_EPDATASTATUS_EPIN7_Msk (0x1UL << USBD_EPDATASTATUS_EPIN7_Pos)
#define USBD_EPDATASTATUS_EPIN7_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN7_DataDone (1UL)

/* Bit 6 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN6_Pos (6UL)
#define USBD_EPDATASTATUS_EPIN6_Msk (0x1UL << USBD_EPDATASTATUS_EPIN6_Pos)
#define USBD_EPDATASTATUS_EPIN6_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN6_DataDone (1UL)

/* Bit 5 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN5_Pos (5UL)
#define USBD_EPDATASTATUS_EPIN5_Msk (0x1UL << USBD_EPDATASTATUS_EPIN5_Pos)
#define USBD_EPDATASTATUS_EPIN5_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN5_DataDone (1UL)

/* Bit 4 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN4_Pos (4UL)
#define USBD_EPDATASTATUS_EPIN4_Msk (0x1UL << USBD_EPDATASTATUS_EPIN4_Pos)
#define USBD_EPDATASTATUS_EPIN4_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN4_DataDone (1UL)

/* Bit 3 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN3_Pos (3UL)
#define USBD_EPDATASTATUS_EPIN3_Msk (0x1UL << USBD_EPDATASTATUS_EPIN3_Pos)
#define USBD_EPDATASTATUS_EPIN3_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN3_DataDone (1UL)

/* Bit 2 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN2_Pos (2UL)
#define USBD_EPDATASTATUS_EPIN2_Msk (0x1UL << USBD_EPDATASTATUS_EPIN2_Pos)
#define USBD_EPDATASTATUS_EPIN2_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN2_DataDone (1UL)

/* Bit 1 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN1_Pos (1UL)
#define USBD_EPDATASTATUS_EPIN1_Msk (0x1UL << USBD_EPDATASTATUS_EPIN1_Pos)
#define USBD_EPDATASTATUS_EPIN1_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN1_DataDone (1UL)

/* Register: USBD_USBADDR */
/* Description: Device USB address */

/* Bits 6..0 : Device USB address */
#define USBD_USBADDR_ADDR_Pos (0UL)
#define USBD_USBADDR_ADDR_Msk (0x7FUL << USBD_USBADDR_ADDR_Pos)

/* Register: USBD_BMREQUESTTYPE */
/* Description: SETUP data, byte 0, bmRequestType */

/* Bit 7 : Data transfer direction */
#define USBD_BMREQUESTTYPE_DIRECTION_Pos (7UL)
#define USBD_BMREQUESTTYPE_DIRECTION_Msk (0x1UL << USBD_BMREQUESTTYPE_DIRECTION_Pos)
#define USBD_BMREQUESTTYPE_DIRECTION_HostToDevice (0UL)
#define USBD_BMREQUESTTYPE_DIRECTION_DeviceToHost (1UL)

/* Bits 6..5 : Data transfer type */
#define USBD_BMREQUESTTYPE_TYPE_Pos (5UL)
#define USBD_BMREQUESTTYPE_TYPE_Msk (0x3UL << USBD_BMREQUESTTYPE_TYPE_Pos)
#define USBD_BMREQUESTTYPE_TYPE_Standard (0UL)
#define USBD_BMREQUESTTYPE_TYPE_Class (1UL)
#define USBD_BMREQUESTTYPE_TYPE_Vendor (2UL)

/* Bits 4..0 : Data transfer type */
#define USBD_BMREQUESTTYPE_RECIPIENT_Pos (0UL)
#define USBD_BMREQUESTTYPE_RECIPIENT_Msk (0x1FUL << USBD_BMREQUESTTYPE_RECIPIENT_Pos)
#define USBD_BMREQUESTTYPE_RECIPIENT_Device (0UL)
#define USBD_BMREQUESTTYPE_RECIPIENT_Interface (1UL)
#define USBD_BMREQUESTTYPE_RECIPIENT_Endpoint (2UL)
#define USBD_BMREQUESTTYPE_RECIPIENT_Other (3UL)

/* Register: USBD_BREQUEST */
/* Description: SETUP data, byte 1, bRequest */

/* Bits 7..0 : SETUP data, byte 1, bRequest. Values provided for standard requests only, user must implement class and vendor values. */
#define USBD_BREQUEST_BREQUEST_Pos (0UL)
#define USBD_BREQUEST_BREQUEST_Msk (0xFFUL << USBD_BREQUEST_BREQUEST_Pos)
#define USBD_BREQUEST_BREQUEST_STD_GET_STATUS (0UL)
#define USBD_BREQUEST_BREQUEST_STD_CLEAR_FEATURE (1UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_FEATURE (3UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_ADDRESS (5UL)
#define USBD_BREQUEST_BREQUEST_STD_GET_DESCRIPTOR (6UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_DESCRIPTOR (7UL)
#define USBD_BREQUEST_BREQUEST_STD_GET_CONFIGURATION (8UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_CONFIGURATION (9UL)
#define USBD_BREQUEST_BREQUEST_STD_GET_INTERFACE (10UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_INTERFACE (11UL)
#define USBD_BREQUEST_BREQUEST_STD_SYNCH_FRAME (12UL)

/* Register: USBD_WVALUEL */
/* Description: SETUP data, byte 2, LSB of wValue */

/* Bits 7..0 : SETUP data, byte 2, LSB of wValue */
#define USBD_WVALUEL_WVALUEL_Pos (0UL)
#define USBD_WVALUEL_WVALUEL_Msk (0xFFUL << USBD_WVALUEL_WVALUEL_Pos)

/* Register: USBD_WVALUEH */
/* Description: SETUP data, byte 3, MSB of wValue */

/* Bits 7..0 : SETUP data, byte 3, MSB of wValue */
#define USBD_WVALUEH_WVALUEH_Pos (0UL)
#define USBD_WVALUEH_WVALUEH_Msk (0xFFUL << USBD_WVALUEH_WVALUEH_Pos)

/* Register: USBD_WINDEXL */
/* Description: SETUP data, byte 4, LSB of wIndex */

/* Bits 7..0 : SETUP data, byte 4, LSB of wIndex */
#define USBD_WINDEXL_WINDEXL_Pos (0UL)
#define USBD_WINDEXL_WINDEXL_Msk (0xFFUL << USBD_WINDEXL_WINDEXL_Pos)

/* Register: USBD_WINDEXH */
/* Description: SETUP data, byte 5, MSB of wIndex */

/* Bits 7..0 : SETUP data, byte 5, MSB of wIndex */
#define USBD_WINDEXH_WINDEXH_Pos (0UL)
#define USBD_WINDEXH_WINDEXH_Msk (0xFFUL << USBD_WINDEXH_WINDEXH_Pos)

/* Register: USBD_WLENGTHL */
/* Description: SETUP data, byte 6, LSB of wLength */

/* Bits 7..0 : SETUP data, byte 6, LSB of wLength */
#define USBD_WLENGTHL_WLENGTHL_Pos (0UL)
#define USBD_WLENGTHL_WLENGTHL_Msk (0xFFUL << USBD_WLENGTHL_WLENGTHL_Pos)

/* Register: USBD_WLENGTHH */
/* Description: SETUP data, byte 7, MSB of wLength */

/* Bits 7..0 : SETUP data, byte 7, MSB of wLength */
#define USBD_WLENGTHH_WLENGTHH_Pos (0UL)
#define USBD_WLENGTHH_WLENGTHH_Msk (0xFFUL << USBD_WLENGTHH_WLENGTHH_Pos)

/* Register: USBD_SIZE_EPOUT */
/* Description: Description collection: Number of bytes received last in the data stage of this OUT endpoint */

/* Bits 6..0 : Number of bytes received last in the data stage of this OUT endpoint */
#define USBD_SIZE_EPOUT_SIZE_Pos (0UL)
#define USBD_SIZE_EPOUT_SIZE_Msk (0x7FUL << USBD_SIZE_EPOUT_SIZE_Pos)

/* Register: USBD_SIZE_ISOOUT */
/* Description: Number of bytes received last on this ISO OUT data endpoint */

/* Bit 16 : Zero-length data packet received */
#define USBD_SIZE_ISOOUT_ZERO_Pos (16UL)
#define USBD_SIZE_ISOOUT_ZERO_Msk (0x1UL << USBD_SIZE_ISOOUT_ZERO_Pos)
#define USBD_SIZE_ISOOUT_ZERO_Normal (0UL)
#define USBD_SIZE_ISOOUT_ZERO_ZeroData (1UL)

/* Bits 9..0 : Number of bytes received last on this ISO OUT data endpoint */
#define USBD_SIZE_ISOOUT_SIZE_Pos (0UL)
#define USBD_SIZE_ISOOUT_SIZE_Msk (0x3FFUL << USBD_SIZE_ISOOUT_SIZE_Pos)

/* Register: USBD_ENABLE */
/* Description: Enable USB */

/* Bit 0 : Enable USB */
#define USBD_ENABLE_ENABLE_Pos (0UL)
#define USBD_ENABLE_ENABLE_Msk (0x1UL << USBD_ENABLE_ENABLE_Pos)
#define USBD_ENABLE_ENABLE_Disabled (0UL)
#define USBD_ENABLE_ENABLE_Enabled (1UL)

/* Register: USBD_USBPULLUP */
/* Description: Control of the USB pull-up */

/* Bit 0 : Control of the USB pull-up on the D+ line */
#define USBD_USBPULLUP_CONNECT_Pos (0UL)
#define USBD_USBPULLUP_CONNECT_Msk (0x1UL << USBD_USBPULLUP_CONNECT_Pos)
#define USBD_USBPULLUP_CONNECT_Disabled (0UL)
#define USBD_USBPULLUP_CONNECT_Enabled (1UL)

/* Register: USBD_DPDMVALUE */
/* Description: State D+ and D- lines will be forced into by the DPDMDRIVE task. The DPDMNODRIVE task reverts the control of the lines to MAC IP (no forcing). */

/* Bits 4..0 : State D+ and D- lines will be forced into by the DPDMDRIVE task */
#define USBD_DPDMVALUE_STATE_Pos (0UL)
#define USBD_DPDMVALUE_STATE_Msk (0x1FUL << USBD_DPDMVALUE_STATE_Pos)
#define USBD_DPDMVALUE_STATE_Resume (1UL)
#define USBD_DPDMVALUE_STATE_J (2UL)
#define USBD_DPDMVALUE_STATE_K (4UL)

/* Register: USBD_DTOGGLE */
/* Description: Data toggle control and status */

/* Bits 9..8 : Data toggle value */
#define USBD_DTOGGLE_VALUE_Pos (8UL)
#define USBD_DTOGGLE_VALUE_Msk (0x3UL << USBD_DTOGGLE_VALUE_Pos)
#define USBD_DTOGGLE_VALUE_Nop (0UL)
#define USBD_DTOGGLE_VALUE_Data0 (1UL)
#define USBD_DTOGGLE_VALUE_Data1 (2UL)

/* Bit 7 : Selects IN or OUT endpoint */
#define USBD_DTOGGLE_IO_Pos (7UL)
#define USBD_DTOGGLE_IO_Msk (0x1UL << USBD_DTOGGLE_IO_Pos)
#define USBD_DTOGGLE_IO_Out (0UL)
#define USBD_DTOGGLE_IO_In (1UL)

/* Bits 2..0 : Select bulk endpoint number */
#define USBD_DTOGGLE_EP_Pos (0UL)
#define USBD_DTOGGLE_EP_Msk (0x7UL << USBD_DTOGGLE_EP_Pos)

/* Register: USBD_EPINEN */
/* Description: Endpoint IN enable */

/* Bit 8 : Enable ISO IN endpoint */
#define USBD_EPINEN_ISOIN_Pos (8UL)
#define USBD_EPINEN_ISOIN_Msk (0x1UL << USBD_EPINEN_ISOIN_Pos)
#define USBD_EPINEN_ISOIN_Disable (0UL)
#define USBD_EPINEN_ISOIN_Enable (1UL)

/* Bit 7 : Enable IN endpoint 7 */
#define USBD_EPINEN_IN7_Pos (7UL)
#define USBD_EPINEN_IN7_Msk (0x1UL << USBD_EPINEN_IN7_Pos)
#define USBD_EPINEN_IN7_Disable (0UL)
#define USBD_EPINEN_IN7_Enable (1UL)

/* Bit 6 : Enable IN endpoint 6 */
#define USBD_EPINEN_IN6_Pos (6UL)
#define USBD_EPINEN_IN6_Msk (0x1UL << USBD_EPINEN_IN6_Pos)
#define USBD_EPINEN_IN6_Disable (0UL)
#define USBD_EPINEN_IN6_Enable (1UL)

/* Bit 5 : Enable IN endpoint 5 */
#define USBD_EPINEN_IN5_Pos (5UL)
#define USBD_EPINEN_IN5_Msk (0x1UL << USBD_EPINEN_IN5_Pos)
#define USBD_EPINEN_IN5_Disable (0UL)
#define USBD_EPINEN_IN5_Enable (1UL)

/* Bit 4 : Enable IN endpoint 4 */
#define USBD_EPINEN_IN4_Pos (4UL)
#define USBD_EPINEN_IN4_Msk (0x1UL << USBD_EPINEN_IN4_Pos)
#define USBD_EPINEN_IN4_Disable (0UL)
#define USBD_EPINEN_IN4_Enable (1UL)

/* Bit 3 : Enable IN endpoint 3 */
#define USBD_EPINEN_IN3_Pos (3UL)
#define USBD_EPINEN_IN3_Msk (0x1UL << USBD_EPINEN_IN3_Pos)
#define USBD_EPINEN_IN3_Disable (0UL)
#define USBD_EPINEN_IN3_Enable (1UL)

/* Bit 2 : Enable IN endpoint 2 */
#define USBD_EPINEN_IN2_Pos (2UL)
#define USBD_EPINEN_IN2_Msk (0x1UL << USBD_EPINEN_IN2_Pos)
#define USBD_EPINEN_IN2_Disable (0UL)
#define USBD_EPINEN_IN2_Enable (1UL)

/* Bit 1 : Enable IN endpoint 1 */
#define USBD_EPINEN_IN1_Pos (1UL)
#define USBD_EPINEN_IN1_Msk (0x1UL << USBD_EPINEN_IN1_Pos)
#define USBD_EPINEN_IN1_Disable (0UL)
#define USBD_EPINEN_IN1_Enable (1UL)

/* Bit 0 : Enable IN endpoint 0 */
#define USBD_EPINEN_IN0_Pos (0UL)
#define USBD_EPINEN_IN0_Msk (0x1UL << USBD_EPINEN_IN0_Pos)
#define USBD_EPINEN_IN0_Disable (0UL)
#define USBD_EPINEN_IN0_Enable (1UL)

/* Register: USBD_EPOUTEN */
/* Description: Endpoint OUT enable */

/* Bit 8 : Enable ISO OUT endpoint 8 */
#define USBD_EPOUTEN_ISOOUT_Pos (8UL)
#define USBD_EPOUTEN_ISOOUT_Msk (0x1UL << USBD_EPOUTEN_ISOOUT_Pos)
#define USBD_EPOUTEN_ISOOUT_Disable (0UL)
#define USBD_EPOUTEN_ISOOUT_Enable (1UL)

/* Bit 7 : Enable OUT endpoint 7 */
#define USBD_EPOUTEN_OUT7_Pos (7UL)
#define USBD_EPOUTEN_OUT7_Msk (0x1UL << USBD_EPOUTEN_OUT7_Pos)
#define USBD_EPOUTEN_OUT7_Disable (0UL)
#define USBD_EPOUTEN_OUT7_Enable (1UL)

/* Bit 6 : Enable OUT endpoint 6 */
#define USBD_EPOUTEN_OUT6_Pos (6UL)
#define USBD_EPOUTEN_OUT6_Msk (0x1UL << USBD_EPOUTEN_OUT6_Pos)
#define USBD_EPOUTEN_OUT6_Disable (0UL)
#define USBD_EPOUTEN_OUT6_Enable (1UL)

/* Bit 5 : Enable OUT endpoint 5 */
#define USBD_EPOUTEN_OUT5_Pos (5UL)
#define USBD_EPOUTEN_OUT5_Msk (0x1UL << USBD_EPOUTEN_OUT5_Pos)
#define USBD_EPOUTEN_OUT5_Disable (0UL)
#define USBD_EPOUTEN_OUT5_Enable (1UL)

/* Bit 4 : Enable OUT endpoint 4 */
#define USBD_EPOUTEN_OUT4_Pos (4UL)
#define USBD_EPOUTEN_OUT4_Msk (0x1UL << USBD_EPOUTEN_OUT4_Pos)
#define USBD_EPOUTEN_OUT4_Disable (0UL)
#define USBD_EPOUTEN_OUT4_Enable (1UL)

/* Bit 3 : Enable OUT endpoint 3 */
#define USBD_EPOUTEN_OUT3_Pos (3UL)
#define USBD_EPOUTEN_OUT3_Msk (0x1UL << USBD_EPOUTEN_OUT3_Pos)
#define USBD_EPOUTEN_OUT3_Disable (0UL)
#define USBD_EPOUTEN_OUT3_Enable (1UL)

/* Bit 2 : Enable OUT endpoint 2 */
#define USBD_EPOUTEN_OUT2_Pos (2UL)
#define USBD_EPOUTEN_OUT2_Msk (0x1UL << USBD_EPOUTEN_OUT2_Pos)
#define USBD_EPOUTEN_OUT2_Disable (0UL)
#define USBD_EPOUTEN_OUT2_Enable (1UL)

/* Bit 1 : Enable OUT endpoint 1 */
#define USBD_EPOUTEN_OUT1_Pos (1UL)
#define USBD_EPOUTEN_OUT1_Msk (0x1UL << USBD_EPOUTEN_OUT1_Pos)
#define USBD_EPOUTEN_OUT1_Disable (0UL)
#define USBD_EPOUTEN_OUT1_Enable (1UL)

/* Bit 0 : Enable OUT endpoint 0 */
#define USBD_EPOUTEN_OUT0_Pos (0UL)
#define USBD_EPOUTEN_OUT0_Msk (0x1UL << USBD_EPOUTEN_OUT0_Pos)
#define USBD_EPOUTEN_OUT0_Disable (0UL)
#define USBD_EPOUTEN_OUT0_Enable (1UL)

/* Register: USBD_EPSTALL */
/* Description: STALL endpoints */

/* Bit 8 : Stall selected endpoint */
#define USBD_EPSTALL_STALL_Pos (8UL)
#define USBD_EPSTALL_STALL_Msk (0x1UL << USBD_EPSTALL_STALL_Pos)
#define USBD_EPSTALL_STALL_UnStall (0UL)
#define USBD_EPSTALL_STALL_Stall (1UL)

/* Bit 7 : Selects IN or OUT endpoint */
#define USBD_EPSTALL_IO_Pos (7UL)
#define USBD_EPSTALL_IO_Msk (0x1UL << USBD_EPSTALL_IO_Pos)
#define USBD_EPSTALL_IO_Out (0UL)
#define USBD_EPSTALL_IO_In (1UL)

/* Bits 2..0 : Select endpoint number */
#define USBD_EPSTALL_EP_Pos (0UL)
#define USBD_EPSTALL_EP_Msk (0x7UL << USBD_EPSTALL_EP_Pos)

/* Register: USBD_ISOSPLIT */
/* Description: Controls the split of ISO buffers */

/* Bits 15..0 : Controls the split of ISO buffers */
#define USBD_ISOSPLIT_SPLIT_Pos (0UL)
#define USBD_ISOSPLIT_SPLIT_Msk (0xFFFFUL << USBD_ISOSPLIT_SPLIT_Pos)
#define USBD_ISOSPLIT_SPLIT_OneDir (0x0000UL)
#define USBD_ISOSPLIT_SPLIT_HalfIN (0x0080UL)

/* Register: USBD_FRAMECNTR */
/* Description: Returns the current value of the start of frame counter */

/* Bits 10..0 : Returns the current value of the start of frame counter */
#define USBD_FRAMECNTR_FRAMECNTR_Pos (0UL)
#define USBD_FRAMECNTR_FRAMECNTR_Msk (0x7FFUL << USBD_FRAMECNTR_FRAMECNTR_Pos)

/* Register: USBD_LOWPOWER */
/* Description: Controls USBD peripheral low power mode during USB suspend */

/* Bit 0 : Controls USBD peripheral low-power mode during USB suspend */
#define USBD_LOWPOWER_LOWPOWER_Pos (0UL)
#define USBD_LOWPOWER_LOWPOWER_Msk (0x1UL << USBD_LOWPOWER_LOWPOWER_Pos)
#define USBD_LOWPOWER_LOWPOWER_ForceNormal (0UL)
#define USBD_LOWPOWER_LOWPOWER_LowPower (1UL)

/* Register: USBD_ISOINCONFIG */
/* Description: Controls the response of the ISO IN endpoint to an IN token when no data is ready to be sent */

/* Bit 0 : Controls the response of the ISO IN endpoint to an IN token when no data is ready to be sent */
#define USBD_ISOINCONFIG_RESPONSE_Pos (0UL)
#define USBD_ISOINCONFIG_RESPONSE_Msk (0x1UL << USBD_ISOINCONFIG_RESPONSE_Pos)
#define USBD_ISOINCONFIG_RESPONSE_NoResp (0UL)
#define USBD_ISOINCONFIG_RESPONSE_ZeroData (1UL)

/* Register: USBD_EPIN_PTR */
/* Description: Description cluster: Data pointer */

/* Bits 31..0 : Data pointer */
#define USBD_EPIN_PTR_PTR_Pos (0UL)
#define USBD_EPIN_PTR_PTR_Msk (0xFFFFFFFFUL << USBD_EPIN_PTR_PTR_Pos)

/* Register: USBD_EPIN_MAXCNT */
/* Description: Description cluster: Maximum number of bytes to transfer */

/* Bits 6..0 : Maximum number of bytes to transfer */
#define USBD_EPIN_MAXCNT_MAXCNT_Pos (0UL)
#define USBD_EPIN_MAXCNT_MAXCNT_Msk (0x7FUL << USBD_EPIN_MAXCNT_MAXCNT_Pos)

/* Register: USBD_EPIN_AMOUNT */
/* Description: Description cluster: Number of bytes transferred in the last transaction */

/* Bits 6..0 : Number of bytes transferred in the last transaction */
#define USBD_EPIN_AMOUNT_AMOUNT_Pos (0UL)
#define USBD_EPIN_AMOUNT_AMOUNT_Msk (0x7FUL << USBD_EPIN_AMOUNT_AMOUNT_Pos)

/* Register: USBD_ISOIN_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define USBD_ISOIN_PTR_PTR_Pos (0UL)
#define USBD_ISOIN_PTR_PTR_Msk (0xFFFFFFFFUL << USBD_ISOIN_PTR_PTR_Pos)

/* Register: USBD_ISOIN_MAXCNT */
/* Description: Maximum number of bytes to transfer */

/* Bits 9..0 : Maximum number of bytes to transfer */
#define USBD_ISOIN_MAXCNT_MAXCNT_Pos (0UL)
#define USBD_ISOIN_MAXCNT_MAXCNT_Msk (0x3FFUL << USBD_ISOIN_MAXCNT_MAXCNT_Pos)

/* Register: USBD_ISOIN_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 9..0 : Number of bytes transferred in the last transaction */
#define USBD_ISOIN_AMOUNT_AMOUNT_Pos (0UL)
#define USBD_ISOIN_AMOUNT_AMOUNT_Msk (0x3FFUL << USBD_ISOIN_AMOUNT_AMOUNT_Pos)

/* Register: USBD_EPOUT_PTR */
/* Description: Description cluster: Data pointer */

/* Bits 31..0 : Data pointer */
#define USBD_EPOUT_PTR_PTR_Pos (0UL)
#define USBD_EPOUT_PTR_PTR_Msk (0xFFFFFFFFUL << USBD_EPOUT_PTR_PTR_Pos)

/* Register: USBD_EPOUT_MAXCNT */
/* Description: Description cluster: Maximum number of bytes to transfer */

/* Bits 6..0 : Maximum number of bytes to transfer */
#define USBD_EPOUT_MAXCNT_MAXCNT_Pos (0UL)
#define USBD_EPOUT_MAXCNT_MAXCNT_Msk (0x7FUL << USBD_EPOUT_MAXCNT_MAXCNT_Pos)

/* Register: USBD_EPOUT_AMOUNT */
/* Description: Description cluster: Number of bytes transferred in the last transaction */

/* Bits 6..0 : Number of bytes transferred in the last transaction */
#define USBD_EPOUT_AMOUNT_AMOUNT_Pos (0UL)
#define USBD_EPOUT_AMOUNT_AMOUNT_Msk (0x7FUL << USBD_EPOUT_AMOUNT_AMOUNT_Pos)

/* Register: USBD_ISOOUT_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define USBD_ISOOUT_PTR_PTR_Pos (0UL)
#define USBD_ISOOUT_PTR_PTR_Msk (0xFFFFFFFFUL << USBD_ISOOUT_PTR_PTR_Pos)

/* Register: USBD_ISOOUT_MAXCNT */
/* Description: Maximum number of bytes to transfer */

/* Bits 9..0 : Maximum number of bytes to transfer */
#define USBD_ISOOUT_MAXCNT_MAXCNT_Pos (0UL)
#define USBD_ISOOUT_MAXCNT_MAXCNT_Msk (0x3FFUL << USBD_ISOOUT_MAXCNT_MAXCNT_Pos)

/* Register: USBD_ISOOUT_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 9..0 : Number of bytes transferred in the last transaction */
#define USBD_ISOOUT_AMOUNT_AMOUNT_Pos (0UL)
#define USBD_ISOOUT_AMOUNT_AMOUNT_Msk (0x3FFUL << USBD_ISOOUT_AMOUNT_AMOUNT_Pos)


/* Peripheral: WDT */
/* Description: Watchdog Timer */

/* Register: WDT_TASKS_START */
/* Description: Start the watchdog */

/* Bit 0 : Start the watchdog */
#define WDT_TASKS_START_TASKS_START_Pos (0UL)
#define WDT_TASKS_START_TASKS_START_Msk (0x1UL << WDT_TASKS_START_TASKS_START_Pos)
#define WDT_TASKS_START_TASKS_START_Trigger (1UL)

/* Register: WDT_EVENTS_TIMEOUT */
/* Description: Watchdog timeout */

/* Bit 0 : Watchdog timeout */
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Pos (0UL)
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Msk (0x1UL << WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Pos)
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_NotGenerated (0UL)
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Generated (1UL)

/* Register: WDT_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event TIMEOUT */
#define WDT_INTENSET_TIMEOUT_Pos (0UL)
#define WDT_INTENSET_TIMEOUT_Msk (0x1UL << WDT_INTENSET_TIMEOUT_Pos)
#define WDT_INTENSET_TIMEOUT_Disabled (0UL)
#define WDT_INTENSET_TIMEOUT_Enabled (1UL)
#define WDT_INTENSET_TIMEOUT_Set (1UL)

/* Register: WDT_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event TIMEOUT */
#define WDT_INTENCLR_TIMEOUT_Pos (0UL)
#define WDT_INTENCLR_TIMEOUT_Msk (0x1UL << WDT_INTENCLR_TIMEOUT_Pos)
#define WDT_INTENCLR_TIMEOUT_Disabled (0UL)
#define WDT_INTENCLR_TIMEOUT_Enabled (1UL)
#define WDT_INTENCLR_TIMEOUT_Clear (1UL)

/* Register: WDT_RUNSTATUS */
/* Description: Run status */

/* Bit 0 : Indicates whether or not the watchdog is running */
#define WDT_RUNSTATUS_RUNSTATUS_Pos (0UL)
#define WDT_RUNSTATUS_RUNSTATUS_Msk (0x1UL << WDT_RUNSTATUS_RUNSTATUS_Pos)
#define WDT_RUNSTATUS_RUNSTATUS_NotRunning (0UL)
#define WDT_RUNSTATUS_RUNSTATUS_Running (1UL)

/* Register: WDT_REQSTATUS */
/* Description: Request status */

/* Bit 7 : Request status for RR[7] register */
#define WDT_REQSTATUS_RR7_Pos (7UL)
#define WDT_REQSTATUS_RR7_Msk (0x1UL << WDT_REQSTATUS_RR7_Pos)
#define WDT_REQSTATUS_RR7_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR7_EnabledAndUnrequested (1UL)

/* Bit 6 : Request status for RR[6] register */
#define WDT_REQSTATUS_RR6_Pos (6UL)
#define WDT_REQSTATUS_RR6_Msk (0x1UL << WDT_REQSTATUS_RR6_Pos)
#define WDT_REQSTATUS_RR6_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR6_EnabledAndUnrequested (1UL)

/* Bit 5 : Request status for RR[5] register */
#define WDT_REQSTATUS_RR5_Pos (5UL)
#define WDT_REQSTATUS_RR5_Msk (0x1UL << WDT_REQSTATUS_RR5_Pos)
#define WDT_REQSTATUS_RR5_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR5_EnabledAndUnrequested (1UL)

/* Bit 4 : Request status for RR[4] register */
#define WDT_REQSTATUS_RR4_Pos (4UL)
#define WDT_REQSTATUS_RR4_Msk (0x1UL << WDT_REQSTATUS_RR4_Pos)
#define WDT_REQSTATUS_RR4_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR4_EnabledAndUnrequested (1UL)

/* Bit 3 : Request status for RR[3] register */
#define WDT_REQSTATUS_RR3_Pos (3UL)
#define WDT_REQSTATUS_RR3_Msk (0x1UL << WDT_REQSTATUS_RR3_Pos)
#define WDT_REQSTATUS_RR3_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR3_EnabledAndUnrequested (1UL)

/* Bit 2 : Request status for RR[2] register */
#define WDT_REQSTATUS_RR2_Pos (2UL)
#define WDT_REQSTATUS_RR2_Msk (0x1UL << WDT_REQSTATUS_RR2_Pos)
#define WDT_REQSTATUS_RR2_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR2_EnabledAndUnrequested (1UL)

/* Bit 1 : Request status for RR[1] register */
#define WDT_REQSTATUS_RR1_Pos (1UL)
#define WDT_REQSTATUS_RR1_Msk (0x1UL << WDT_REQSTATUS_RR1_Pos)
#define WDT_REQSTATUS_RR1_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR1_EnabledAndUnrequested (1UL)

/* Bit 0 : Request status for RR[0] register */
#define WDT_REQSTATUS_RR0_Pos (0UL)
#define WDT_REQSTATUS_RR0_Msk (0x1UL << WDT_REQSTATUS_RR0_Pos)
#define WDT_REQSTATUS_RR0_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR0_EnabledAndUnrequested (1UL)

/* Register: WDT_CRV */
/* Description: Counter reload value */

/* Bits 31..0 : Counter reload value in number of cycles of the 32.768 kHz clock */
#define WDT_CRV_CRV_Pos (0UL)
#define WDT_CRV_CRV_Msk (0xFFFFFFFFUL << WDT_CRV_CRV_Pos)

/* Register: WDT_RREN */
/* Description: Enable register for reload request registers */

/* Bit 7 : Enable or disable RR[7] register */
#define WDT_RREN_RR7_Pos (7UL)
#define WDT_RREN_RR7_Msk (0x1UL << WDT_RREN_RR7_Pos)
#define WDT_RREN_RR7_Disabled (0UL)
#define WDT_RREN_RR7_Enabled (1UL)

/* Bit 6 : Enable or disable RR[6] register */
#define WDT_RREN_RR6_Pos (6UL)
#define WDT_RREN_RR6_Msk (0x1UL << WDT_RREN_RR6_Pos)
#define WDT_RREN_RR6_Disabled (0UL)
#define WDT_RREN_RR6_Enabled (1UL)

/* Bit 5 : Enable or disable RR[5] register */
#define WDT_RREN_RR5_Pos (5UL)
#define WDT_RREN_RR5_Msk (0x1UL << WDT_RREN_RR5_Pos)
#define WDT_RREN_RR5_Disabled (0UL)
#define WDT_RREN_RR5_Enabled (1UL)

/* Bit 4 : Enable or disable RR[4] register */
#define WDT_RREN_RR4_Pos (4UL)
#define WDT_RREN_RR4_Msk (0x1UL << WDT_RREN_RR4_Pos)
#define WDT_RREN_RR4_Disabled (0UL)
#define WDT_RREN_RR4_Enabled (1UL)

/* Bit 3 : Enable or disable RR[3] register */
#define WDT_RREN_RR3_Pos (3UL)
#define WDT_RREN_RR3_Msk (0x1UL << WDT_RREN_RR3_Pos)
#define WDT_RREN_RR3_Disabled (0UL)
#define WDT_RREN_RR3_Enabled (1UL)

/* Bit 2 : Enable or disable RR[2] register */
#define WDT_RREN_RR2_Pos (2UL)
#define WDT_RREN_RR2_Msk (0x1UL << WDT_RREN_RR2_Pos)
#define WDT_RREN_RR2_Disabled (0UL)
#define WDT_RREN_RR2_Enabled (1UL)

/* Bit 1 : Enable or disable RR[1] register */
#define WDT_RREN_RR1_Pos (1UL)
#define WDT_RREN_RR1_Msk (0x1UL << WDT_RREN_RR1_Pos)
#define WDT_RREN_RR1_Disabled (0UL)
#define WDT_RREN_RR1_Enabled (1UL)

/* Bit 0 : Enable or disable RR[0] register */
#define WDT_RREN_RR0_Pos (0UL)
#define WDT_RREN_RR0_Msk (0x1UL << WDT_RREN_RR0_Pos)
#define WDT_RREN_RR0_Disabled (0UL)
#define WDT_RREN_RR0_Enabled (1UL)

/* Register: WDT_CONFIG */
/* Description: Configuration register */

/* Bit 3 : Configure the watchdog to either be paused, or kept running, while the CPU is halted by the debugger */
#define WDT_CONFIG_HALT_Pos (3UL)
#define WDT_CONFIG_HALT_Msk (0x1UL << WDT_CONFIG_HALT_Pos)
#define WDT_CONFIG_HALT_Pause (0UL)
#define WDT_CONFIG_HALT_Run (1UL)

/* Bit 0 : Configure the watchdog to either be paused, or kept running, while the CPU is sleeping */
#define WDT_CONFIG_SLEEP_Pos (0UL)
#define WDT_CONFIG_SLEEP_Msk (0x1UL << WDT_CONFIG_SLEEP_Pos)
#define WDT_CONFIG_SLEEP_Pause (0UL)
#define WDT_CONFIG_SLEEP_Run (1UL)

/* Register: WDT_RR */
/* Description: Description collection: Reload request n */

/* Bits 31..0 : Reload request register */
#define WDT_RR_RR_Pos (0UL)
#define WDT_RR_RR_Msk (0xFFFFFFFFUL << WDT_RR_RR_Pos)
#define WDT_RR_RR_Reload (0x6E524635UL)


/*lint --flb "Leave library region" */
#endif
