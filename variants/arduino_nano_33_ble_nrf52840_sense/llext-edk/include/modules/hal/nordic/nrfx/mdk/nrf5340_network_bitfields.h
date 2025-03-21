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

#ifndef __NRF5340_NETWORK_BITS_H
#define __NRF5340_NETWORK_BITS_H

/*lint ++flb "Enter library region" */

/* Peripheral: AAR */
/* Description: Accelerated Address Resolver */

/* Register: AAR_TASKS_START */
/* Description: Start resolving addresses based on IRKs specified in the IRK data structure */

/* Bit 0 : Start resolving addresses based on IRKs specified in the IRK data structure */
#define AAR_TASKS_START_TASKS_START_Pos (0UL)
#define AAR_TASKS_START_TASKS_START_Msk (0x1UL << AAR_TASKS_START_TASKS_START_Pos)
#define AAR_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: AAR_TASKS_STOP */
/* Description: Stop resolving addresses */

/* Bit 0 : Stop resolving addresses */
#define AAR_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define AAR_TASKS_STOP_TASKS_STOP_Msk (0x1UL << AAR_TASKS_STOP_TASKS_STOP_Pos)
#define AAR_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: AAR_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define AAR_SUBSCRIBE_START_EN_Pos (31UL)
#define AAR_SUBSCRIBE_START_EN_Msk (0x1UL << AAR_SUBSCRIBE_START_EN_Pos)
#define AAR_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define AAR_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define AAR_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define AAR_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << AAR_SUBSCRIBE_START_CHIDX_Pos)

/* Register: AAR_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define AAR_SUBSCRIBE_STOP_EN_Pos (31UL)
#define AAR_SUBSCRIBE_STOP_EN_Msk (0x1UL << AAR_SUBSCRIBE_STOP_EN_Pos)
#define AAR_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define AAR_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define AAR_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define AAR_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << AAR_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: AAR_EVENTS_END */
/* Description: Address resolution procedure complete */

/* Bit 0 : Address resolution procedure complete */
#define AAR_EVENTS_END_EVENTS_END_Pos (0UL)
#define AAR_EVENTS_END_EVENTS_END_Msk (0x1UL << AAR_EVENTS_END_EVENTS_END_Pos)
#define AAR_EVENTS_END_EVENTS_END_NotGenerated (0x0UL)
#define AAR_EVENTS_END_EVENTS_END_Generated (0x1UL)

/* Register: AAR_EVENTS_RESOLVED */
/* Description: Address resolved */

/* Bit 0 : Address resolved */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos (0UL)
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Msk (0x1UL << AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos)
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_NotGenerated (0x0UL)
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Generated (0x1UL)

/* Register: AAR_EVENTS_NOTRESOLVED */
/* Description: Address not resolved */

/* Bit 0 : Address not resolved */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos (0UL)
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Msk (0x1UL << AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos)
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_NotGenerated (0x0UL)
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Generated (0x1UL)

/* Register: AAR_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define AAR_PUBLISH_END_EN_Pos (31UL)
#define AAR_PUBLISH_END_EN_Msk (0x1UL << AAR_PUBLISH_END_EN_Pos)
#define AAR_PUBLISH_END_EN_Disabled (0x0UL)
#define AAR_PUBLISH_END_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event END will publish to */
#define AAR_PUBLISH_END_CHIDX_Pos (0UL)
#define AAR_PUBLISH_END_CHIDX_Msk (0xFFUL << AAR_PUBLISH_END_CHIDX_Pos)

/* Register: AAR_PUBLISH_RESOLVED */
/* Description: Publish configuration for event RESOLVED */

/* Bit 31 :   */
#define AAR_PUBLISH_RESOLVED_EN_Pos (31UL)
#define AAR_PUBLISH_RESOLVED_EN_Msk (0x1UL << AAR_PUBLISH_RESOLVED_EN_Pos)
#define AAR_PUBLISH_RESOLVED_EN_Disabled (0x0UL)
#define AAR_PUBLISH_RESOLVED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RESOLVED will publish to */
#define AAR_PUBLISH_RESOLVED_CHIDX_Pos (0UL)
#define AAR_PUBLISH_RESOLVED_CHIDX_Msk (0xFFUL << AAR_PUBLISH_RESOLVED_CHIDX_Pos)

/* Register: AAR_PUBLISH_NOTRESOLVED */
/* Description: Publish configuration for event NOTRESOLVED */

/* Bit 31 :   */
#define AAR_PUBLISH_NOTRESOLVED_EN_Pos (31UL)
#define AAR_PUBLISH_NOTRESOLVED_EN_Msk (0x1UL << AAR_PUBLISH_NOTRESOLVED_EN_Pos)
#define AAR_PUBLISH_NOTRESOLVED_EN_Disabled (0x0UL)
#define AAR_PUBLISH_NOTRESOLVED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event NOTRESOLVED will publish to */
#define AAR_PUBLISH_NOTRESOLVED_CHIDX_Pos (0UL)
#define AAR_PUBLISH_NOTRESOLVED_CHIDX_Msk (0xFFUL << AAR_PUBLISH_NOTRESOLVED_CHIDX_Pos)

/* Register: AAR_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event NOTRESOLVED */
#define AAR_INTENSET_NOTRESOLVED_Pos (2UL)
#define AAR_INTENSET_NOTRESOLVED_Msk (0x1UL << AAR_INTENSET_NOTRESOLVED_Pos)
#define AAR_INTENSET_NOTRESOLVED_Disabled (0x0UL)
#define AAR_INTENSET_NOTRESOLVED_Enabled (0x1UL)
#define AAR_INTENSET_NOTRESOLVED_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event RESOLVED */
#define AAR_INTENSET_RESOLVED_Pos (1UL)
#define AAR_INTENSET_RESOLVED_Msk (0x1UL << AAR_INTENSET_RESOLVED_Pos)
#define AAR_INTENSET_RESOLVED_Disabled (0x0UL)
#define AAR_INTENSET_RESOLVED_Enabled (0x1UL)
#define AAR_INTENSET_RESOLVED_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event END */
#define AAR_INTENSET_END_Pos (0UL)
#define AAR_INTENSET_END_Msk (0x1UL << AAR_INTENSET_END_Pos)
#define AAR_INTENSET_END_Disabled (0x0UL)
#define AAR_INTENSET_END_Enabled (0x1UL)
#define AAR_INTENSET_END_Set (0x1UL)

/* Register: AAR_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event NOTRESOLVED */
#define AAR_INTENCLR_NOTRESOLVED_Pos (2UL)
#define AAR_INTENCLR_NOTRESOLVED_Msk (0x1UL << AAR_INTENCLR_NOTRESOLVED_Pos)
#define AAR_INTENCLR_NOTRESOLVED_Disabled (0x0UL)
#define AAR_INTENCLR_NOTRESOLVED_Enabled (0x1UL)
#define AAR_INTENCLR_NOTRESOLVED_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event RESOLVED */
#define AAR_INTENCLR_RESOLVED_Pos (1UL)
#define AAR_INTENCLR_RESOLVED_Msk (0x1UL << AAR_INTENCLR_RESOLVED_Pos)
#define AAR_INTENCLR_RESOLVED_Disabled (0x0UL)
#define AAR_INTENCLR_RESOLVED_Enabled (0x1UL)
#define AAR_INTENCLR_RESOLVED_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event END */
#define AAR_INTENCLR_END_Pos (0UL)
#define AAR_INTENCLR_END_Msk (0x1UL << AAR_INTENCLR_END_Pos)
#define AAR_INTENCLR_END_Disabled (0x0UL)
#define AAR_INTENCLR_END_Enabled (0x1UL)
#define AAR_INTENCLR_END_Clear (0x1UL)

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
#define AAR_ENABLE_ENABLE_Disabled (0x0UL)
#define AAR_ENABLE_ENABLE_Enabled (0x3UL)

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
#define ACL_ACL_PERM_READ_Enable (0x0UL)
#define ACL_ACL_PERM_READ_Disable (0x1UL)

/* Bit 1 : Configure write and erase permissions for region n. Writing a '0' has no effect. */
#define ACL_ACL_PERM_WRITE_Pos (1UL)
#define ACL_ACL_PERM_WRITE_Msk (0x1UL << ACL_ACL_PERM_WRITE_Pos)
#define ACL_ACL_PERM_WRITE_Enable (0x0UL)
#define ACL_ACL_PERM_WRITE_Disable (0x1UL)


/* Peripheral: MUTEX */
/* Description: MUTEX 0 */

/* Register: MUTEX_MUTEX */
/* Description: Description collection: Mutex register */

/* Bit 0 : Mutex register n */
#define MUTEX_MUTEX_MUTEX_Pos (0UL)
#define MUTEX_MUTEX_MUTEX_Msk (0x1UL << MUTEX_MUTEX_MUTEX_Pos)
#define MUTEX_MUTEX_MUTEX_Unlocked (0x0UL)
#define MUTEX_MUTEX_MUTEX_Locked (0x1UL)


/* Peripheral: CCM */
/* Description: AES CCM mode encryption */

/* Register: CCM_TASKS_KSGEN */
/* Description: Start generation of keystream. This operation will stop by itself when completed. */

/* Bit 0 : Start generation of keystream. This operation will stop by itself when completed. */
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Pos (0UL)
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Msk (0x1UL << CCM_TASKS_KSGEN_TASKS_KSGEN_Pos)
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Trigger (0x1UL)

/* Register: CCM_TASKS_CRYPT */
/* Description: Start encryption/decryption. This operation will stop by itself when completed. */

/* Bit 0 : Start encryption/decryption. This operation will stop by itself when completed. */
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Pos (0UL)
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Msk (0x1UL << CCM_TASKS_CRYPT_TASKS_CRYPT_Pos)
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Trigger (0x1UL)

/* Register: CCM_TASKS_STOP */
/* Description: Stop encryption/decryption */

/* Bit 0 : Stop encryption/decryption */
#define CCM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define CCM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << CCM_TASKS_STOP_TASKS_STOP_Pos)
#define CCM_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: CCM_TASKS_RATEOVERRIDE */
/* Description: Override DATARATE setting in MODE register with the contents of the RATEOVERRIDE register for any ongoing encryption/decryption */

/* Bit 0 : Override DATARATE setting in MODE register with the contents of the RATEOVERRIDE register for any ongoing encryption/decryption */
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos (0UL)
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Msk (0x1UL << CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos)
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Trigger (0x1UL)

/* Register: CCM_SUBSCRIBE_KSGEN */
/* Description: Subscribe configuration for task KSGEN */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_KSGEN_EN_Pos (31UL)
#define CCM_SUBSCRIBE_KSGEN_EN_Msk (0x1UL << CCM_SUBSCRIBE_KSGEN_EN_Pos)
#define CCM_SUBSCRIBE_KSGEN_EN_Disabled (0x0UL)
#define CCM_SUBSCRIBE_KSGEN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task KSGEN will subscribe to */
#define CCM_SUBSCRIBE_KSGEN_CHIDX_Pos (0UL)
#define CCM_SUBSCRIBE_KSGEN_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_KSGEN_CHIDX_Pos)

/* Register: CCM_SUBSCRIBE_CRYPT */
/* Description: Subscribe configuration for task CRYPT */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_CRYPT_EN_Pos (31UL)
#define CCM_SUBSCRIBE_CRYPT_EN_Msk (0x1UL << CCM_SUBSCRIBE_CRYPT_EN_Pos)
#define CCM_SUBSCRIBE_CRYPT_EN_Disabled (0x0UL)
#define CCM_SUBSCRIBE_CRYPT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task CRYPT will subscribe to */
#define CCM_SUBSCRIBE_CRYPT_CHIDX_Pos (0UL)
#define CCM_SUBSCRIBE_CRYPT_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_CRYPT_CHIDX_Pos)

/* Register: CCM_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_STOP_EN_Pos (31UL)
#define CCM_SUBSCRIBE_STOP_EN_Msk (0x1UL << CCM_SUBSCRIBE_STOP_EN_Pos)
#define CCM_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define CCM_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define CCM_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define CCM_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: CCM_SUBSCRIBE_RATEOVERRIDE */
/* Description: Subscribe configuration for task RATEOVERRIDE */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Pos (31UL)
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Msk (0x1UL << CCM_SUBSCRIBE_RATEOVERRIDE_EN_Pos)
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Disabled (0x0UL)
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task RATEOVERRIDE will subscribe to */
#define CCM_SUBSCRIBE_RATEOVERRIDE_CHIDX_Pos (0UL)
#define CCM_SUBSCRIBE_RATEOVERRIDE_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_RATEOVERRIDE_CHIDX_Pos)

/* Register: CCM_EVENTS_ENDKSGEN */
/* Description: Keystream generation complete */

/* Bit 0 : Keystream generation complete */
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Pos (0UL)
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Msk (0x1UL << CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Pos)
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_NotGenerated (0x0UL)
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Generated (0x1UL)

/* Register: CCM_EVENTS_ENDCRYPT */
/* Description: Encrypt/decrypt complete */

/* Bit 0 : Encrypt/decrypt complete */
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Pos (0UL)
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Msk (0x1UL << CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Pos)
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_NotGenerated (0x0UL)
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Generated (0x1UL)

/* Register: CCM_EVENTS_ERROR */
/* Description: Deprecated register - CCM error event */

/* Bit 0 : Deprecated field -  CCM error event */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << CCM_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define CCM_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0x0UL)
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Generated (0x1UL)

/* Register: CCM_PUBLISH_ENDKSGEN */
/* Description: Publish configuration for event ENDKSGEN */

/* Bit 31 :   */
#define CCM_PUBLISH_ENDKSGEN_EN_Pos (31UL)
#define CCM_PUBLISH_ENDKSGEN_EN_Msk (0x1UL << CCM_PUBLISH_ENDKSGEN_EN_Pos)
#define CCM_PUBLISH_ENDKSGEN_EN_Disabled (0x0UL)
#define CCM_PUBLISH_ENDKSGEN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDKSGEN will publish to */
#define CCM_PUBLISH_ENDKSGEN_CHIDX_Pos (0UL)
#define CCM_PUBLISH_ENDKSGEN_CHIDX_Msk (0xFFUL << CCM_PUBLISH_ENDKSGEN_CHIDX_Pos)

/* Register: CCM_PUBLISH_ENDCRYPT */
/* Description: Publish configuration for event ENDCRYPT */

/* Bit 31 :   */
#define CCM_PUBLISH_ENDCRYPT_EN_Pos (31UL)
#define CCM_PUBLISH_ENDCRYPT_EN_Msk (0x1UL << CCM_PUBLISH_ENDCRYPT_EN_Pos)
#define CCM_PUBLISH_ENDCRYPT_EN_Disabled (0x0UL)
#define CCM_PUBLISH_ENDCRYPT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDCRYPT will publish to */
#define CCM_PUBLISH_ENDCRYPT_CHIDX_Pos (0UL)
#define CCM_PUBLISH_ENDCRYPT_CHIDX_Msk (0xFFUL << CCM_PUBLISH_ENDCRYPT_CHIDX_Pos)

/* Register: CCM_PUBLISH_ERROR */
/* Description: Deprecated register - Publish configuration for event ERROR */

/* Bit 31 :   */
#define CCM_PUBLISH_ERROR_EN_Pos (31UL)
#define CCM_PUBLISH_ERROR_EN_Msk (0x1UL << CCM_PUBLISH_ERROR_EN_Pos)
#define CCM_PUBLISH_ERROR_EN_Disabled (0x0UL)
#define CCM_PUBLISH_ERROR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ERROR will publish to */
#define CCM_PUBLISH_ERROR_CHIDX_Pos (0UL)
#define CCM_PUBLISH_ERROR_CHIDX_Msk (0xFFUL << CCM_PUBLISH_ERROR_CHIDX_Pos)

/* Register: CCM_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 0 : Shortcut between event ENDKSGEN and task CRYPT */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Pos (0UL)
#define CCM_SHORTS_ENDKSGEN_CRYPT_Msk (0x1UL << CCM_SHORTS_ENDKSGEN_CRYPT_Pos)
#define CCM_SHORTS_ENDKSGEN_CRYPT_Disabled (0x0UL)
#define CCM_SHORTS_ENDKSGEN_CRYPT_Enabled (0x1UL)

/* Register: CCM_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Deprecated intsetfield -  Write '1' to enable interrupt for event ERROR */
#define CCM_INTENSET_ERROR_Pos (2UL)
#define CCM_INTENSET_ERROR_Msk (0x1UL << CCM_INTENSET_ERROR_Pos)
#define CCM_INTENSET_ERROR_Disabled (0x0UL)
#define CCM_INTENSET_ERROR_Enabled (0x1UL)
#define CCM_INTENSET_ERROR_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event ENDCRYPT */
#define CCM_INTENSET_ENDCRYPT_Pos (1UL)
#define CCM_INTENSET_ENDCRYPT_Msk (0x1UL << CCM_INTENSET_ENDCRYPT_Pos)
#define CCM_INTENSET_ENDCRYPT_Disabled (0x0UL)
#define CCM_INTENSET_ENDCRYPT_Enabled (0x1UL)
#define CCM_INTENSET_ENDCRYPT_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event ENDKSGEN */
#define CCM_INTENSET_ENDKSGEN_Pos (0UL)
#define CCM_INTENSET_ENDKSGEN_Msk (0x1UL << CCM_INTENSET_ENDKSGEN_Pos)
#define CCM_INTENSET_ENDKSGEN_Disabled (0x0UL)
#define CCM_INTENSET_ENDKSGEN_Enabled (0x1UL)
#define CCM_INTENSET_ENDKSGEN_Set (0x1UL)

/* Register: CCM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Deprecated intclrfield -  Write '1' to disable interrupt for event ERROR */
#define CCM_INTENCLR_ERROR_Pos (2UL)
#define CCM_INTENCLR_ERROR_Msk (0x1UL << CCM_INTENCLR_ERROR_Pos)
#define CCM_INTENCLR_ERROR_Disabled (0x0UL)
#define CCM_INTENCLR_ERROR_Enabled (0x1UL)
#define CCM_INTENCLR_ERROR_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event ENDCRYPT */
#define CCM_INTENCLR_ENDCRYPT_Pos (1UL)
#define CCM_INTENCLR_ENDCRYPT_Msk (0x1UL << CCM_INTENCLR_ENDCRYPT_Pos)
#define CCM_INTENCLR_ENDCRYPT_Disabled (0x0UL)
#define CCM_INTENCLR_ENDCRYPT_Enabled (0x1UL)
#define CCM_INTENCLR_ENDCRYPT_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event ENDKSGEN */
#define CCM_INTENCLR_ENDKSGEN_Pos (0UL)
#define CCM_INTENCLR_ENDKSGEN_Msk (0x1UL << CCM_INTENCLR_ENDKSGEN_Pos)
#define CCM_INTENCLR_ENDKSGEN_Disabled (0x0UL)
#define CCM_INTENCLR_ENDKSGEN_Enabled (0x1UL)
#define CCM_INTENCLR_ENDKSGEN_Clear (0x1UL)

/* Register: CCM_MICSTATUS */
/* Description: MIC check result */

/* Bit 0 : The result of the MIC check performed during the previous decryption operation */
#define CCM_MICSTATUS_MICSTATUS_Pos (0UL)
#define CCM_MICSTATUS_MICSTATUS_Msk (0x1UL << CCM_MICSTATUS_MICSTATUS_Pos)
#define CCM_MICSTATUS_MICSTATUS_CheckFailed (0x0UL)
#define CCM_MICSTATUS_MICSTATUS_CheckPassed (0x1UL)

/* Register: CCM_ENABLE */
/* Description: Enable */

/* Bits 1..0 : Enable or disable CCM */
#define CCM_ENABLE_ENABLE_Pos (0UL)
#define CCM_ENABLE_ENABLE_Msk (0x3UL << CCM_ENABLE_ENABLE_Pos)
#define CCM_ENABLE_ENABLE_Disabled (0x0UL)
#define CCM_ENABLE_ENABLE_Enabled (0x2UL)

/* Register: CCM_MODE */
/* Description: Operation mode */

/* Bit 24 : Packet length configuration */
#define CCM_MODE_LENGTH_Pos (24UL)
#define CCM_MODE_LENGTH_Msk (0x1UL << CCM_MODE_LENGTH_Pos)
#define CCM_MODE_LENGTH_Default (0x0UL)
#define CCM_MODE_LENGTH_Extended (0x1UL)

/* Bits 17..16 : Radio data rate that the CCM shall run synchronous with */
#define CCM_MODE_DATARATE_Pos (16UL)
#define CCM_MODE_DATARATE_Msk (0x3UL << CCM_MODE_DATARATE_Pos)
#define CCM_MODE_DATARATE_1Mbit (0x0UL)
#define CCM_MODE_DATARATE_2Mbit (0x1UL)
#define CCM_MODE_DATARATE_125Kbps (0x2UL)
#define CCM_MODE_DATARATE_500Kbps (0x3UL)

/* Bit 0 : The mode of operation to be used. Settings in this register apply whenever either the KSGEN task or the CRYPT task is triggered. */
#define CCM_MODE_MODE_Pos (0UL)
#define CCM_MODE_MODE_Msk (0x1UL << CCM_MODE_MODE_Pos)
#define CCM_MODE_MODE_Encryption (0x0UL)
#define CCM_MODE_MODE_Decryption (0x1UL)

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
#define CCM_RATEOVERRIDE_RATEOVERRIDE_1Mbit (0x0UL)
#define CCM_RATEOVERRIDE_RATEOVERRIDE_2Mbit (0x1UL)
#define CCM_RATEOVERRIDE_RATEOVERRIDE_125Kbps (0x2UL)
#define CCM_RATEOVERRIDE_RATEOVERRIDE_500Kbps (0x3UL)

/* Register: CCM_HEADERMASK */
/* Description: Header (S0) mask. */

/* Bits 7..0 : Header (S0) mask */
#define CCM_HEADERMASK_HEADERMASK_Pos (0UL)
#define CCM_HEADERMASK_HEADERMASK_Msk (0xFFUL << CCM_HEADERMASK_HEADERMASK_Pos)


/* Peripheral: CLOCK */
/* Description: Clock management */

/* Register: CLOCK_TASKS_HFCLKSTART */
/* Description: Start HFCLK128M/HFCLK64M source as selected in HFCLKSRC */

/* Bit 0 : Start HFCLK128M/HFCLK64M source as selected in HFCLKSRC */
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos (0UL)
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Msk (0x1UL << CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos)
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Trigger (0x1UL)

/* Register: CLOCK_TASKS_HFCLKSTOP */
/* Description: Stop HFCLK128M/HFCLK64M source */

/* Bit 0 : Stop HFCLK128M/HFCLK64M source */
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos (0UL)
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Msk (0x1UL << CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos)
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Trigger (0x1UL)

/* Register: CLOCK_TASKS_LFCLKSTART */
/* Description: Start LFCLK source as selected in LFCLKSRC */

/* Bit 0 : Start LFCLK source as selected in LFCLKSRC */
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos (0UL)
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Msk (0x1UL << CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos)
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Trigger (0x1UL)

/* Register: CLOCK_TASKS_LFCLKSTOP */
/* Description: Stop LFCLK source */

/* Bit 0 : Stop LFCLK source */
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos (0UL)
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Msk (0x1UL << CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos)
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Trigger (0x1UL)

/* Register: CLOCK_TASKS_CAL */
/* Description: Start calibration of LFRC oscillator */

/* Bit 0 : Start calibration of LFRC oscillator */
#define CLOCK_TASKS_CAL_TASKS_CAL_Pos (0UL)
#define CLOCK_TASKS_CAL_TASKS_CAL_Msk (0x1UL << CLOCK_TASKS_CAL_TASKS_CAL_Pos)
#define CLOCK_TASKS_CAL_TASKS_CAL_Trigger (0x1UL)

/* Register: CLOCK_SUBSCRIBE_HFCLKSTART */
/* Description: Subscribe configuration for task HFCLKSTART */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_HFCLKSTART_EN_Pos (31UL)
#define CLOCK_SUBSCRIBE_HFCLKSTART_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_HFCLKSTART_EN_Pos)
#define CLOCK_SUBSCRIBE_HFCLKSTART_EN_Disabled (0x0UL)
#define CLOCK_SUBSCRIBE_HFCLKSTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task HFCLKSTART will subscribe to */
#define CLOCK_SUBSCRIBE_HFCLKSTART_CHIDX_Pos (0UL)
#define CLOCK_SUBSCRIBE_HFCLKSTART_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_HFCLKSTART_CHIDX_Pos)

/* Register: CLOCK_SUBSCRIBE_HFCLKSTOP */
/* Description: Subscribe configuration for task HFCLKSTOP */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_HFCLKSTOP_EN_Pos (31UL)
#define CLOCK_SUBSCRIBE_HFCLKSTOP_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_HFCLKSTOP_EN_Pos)
#define CLOCK_SUBSCRIBE_HFCLKSTOP_EN_Disabled (0x0UL)
#define CLOCK_SUBSCRIBE_HFCLKSTOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task HFCLKSTOP will subscribe to */
#define CLOCK_SUBSCRIBE_HFCLKSTOP_CHIDX_Pos (0UL)
#define CLOCK_SUBSCRIBE_HFCLKSTOP_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_HFCLKSTOP_CHIDX_Pos)

/* Register: CLOCK_SUBSCRIBE_LFCLKSTART */
/* Description: Subscribe configuration for task LFCLKSTART */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_LFCLKSTART_EN_Pos (31UL)
#define CLOCK_SUBSCRIBE_LFCLKSTART_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_LFCLKSTART_EN_Pos)
#define CLOCK_SUBSCRIBE_LFCLKSTART_EN_Disabled (0x0UL)
#define CLOCK_SUBSCRIBE_LFCLKSTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task LFCLKSTART will subscribe to */
#define CLOCK_SUBSCRIBE_LFCLKSTART_CHIDX_Pos (0UL)
#define CLOCK_SUBSCRIBE_LFCLKSTART_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_LFCLKSTART_CHIDX_Pos)

/* Register: CLOCK_SUBSCRIBE_LFCLKSTOP */
/* Description: Subscribe configuration for task LFCLKSTOP */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_LFCLKSTOP_EN_Pos (31UL)
#define CLOCK_SUBSCRIBE_LFCLKSTOP_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_LFCLKSTOP_EN_Pos)
#define CLOCK_SUBSCRIBE_LFCLKSTOP_EN_Disabled (0x0UL)
#define CLOCK_SUBSCRIBE_LFCLKSTOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task LFCLKSTOP will subscribe to */
#define CLOCK_SUBSCRIBE_LFCLKSTOP_CHIDX_Pos (0UL)
#define CLOCK_SUBSCRIBE_LFCLKSTOP_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_LFCLKSTOP_CHIDX_Pos)

/* Register: CLOCK_SUBSCRIBE_CAL */
/* Description: Subscribe configuration for task CAL */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_CAL_EN_Pos (31UL)
#define CLOCK_SUBSCRIBE_CAL_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_CAL_EN_Pos)
#define CLOCK_SUBSCRIBE_CAL_EN_Disabled (0x0UL)
#define CLOCK_SUBSCRIBE_CAL_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task CAL will subscribe to */
#define CLOCK_SUBSCRIBE_CAL_CHIDX_Pos (0UL)
#define CLOCK_SUBSCRIBE_CAL_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_CAL_CHIDX_Pos)

/* Register: CLOCK_EVENTS_HFCLKSTARTED */
/* Description: HFCLK128M/HFCLK64M source started */

/* Bit 0 : HFCLK128M/HFCLK64M source started */
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos (0UL)
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Msk (0x1UL << CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos)
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_NotGenerated (0x0UL)
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Generated (0x1UL)

/* Register: CLOCK_EVENTS_LFCLKSTARTED */
/* Description: LFCLK source started */

/* Bit 0 : LFCLK source started */
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos (0UL)
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Msk (0x1UL << CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos)
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_NotGenerated (0x0UL)
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Generated (0x1UL)

/* Register: CLOCK_EVENTS_DONE */
/* Description: Calibration of LFRC oscillator complete event */

/* Bit 0 : Calibration of LFRC oscillator complete event */
#define CLOCK_EVENTS_DONE_EVENTS_DONE_Pos (0UL)
#define CLOCK_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << CLOCK_EVENTS_DONE_EVENTS_DONE_Pos)
#define CLOCK_EVENTS_DONE_EVENTS_DONE_NotGenerated (0x0UL)
#define CLOCK_EVENTS_DONE_EVENTS_DONE_Generated (0x1UL)

/* Register: CLOCK_PUBLISH_HFCLKSTARTED */
/* Description: Publish configuration for event HFCLKSTARTED */

/* Bit 31 :   */
#define CLOCK_PUBLISH_HFCLKSTARTED_EN_Pos (31UL)
#define CLOCK_PUBLISH_HFCLKSTARTED_EN_Msk (0x1UL << CLOCK_PUBLISH_HFCLKSTARTED_EN_Pos)
#define CLOCK_PUBLISH_HFCLKSTARTED_EN_Disabled (0x0UL)
#define CLOCK_PUBLISH_HFCLKSTARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event HFCLKSTARTED will publish to */
#define CLOCK_PUBLISH_HFCLKSTARTED_CHIDX_Pos (0UL)
#define CLOCK_PUBLISH_HFCLKSTARTED_CHIDX_Msk (0xFFUL << CLOCK_PUBLISH_HFCLKSTARTED_CHIDX_Pos)

/* Register: CLOCK_PUBLISH_LFCLKSTARTED */
/* Description: Publish configuration for event LFCLKSTARTED */

/* Bit 31 :   */
#define CLOCK_PUBLISH_LFCLKSTARTED_EN_Pos (31UL)
#define CLOCK_PUBLISH_LFCLKSTARTED_EN_Msk (0x1UL << CLOCK_PUBLISH_LFCLKSTARTED_EN_Pos)
#define CLOCK_PUBLISH_LFCLKSTARTED_EN_Disabled (0x0UL)
#define CLOCK_PUBLISH_LFCLKSTARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event LFCLKSTARTED will publish to */
#define CLOCK_PUBLISH_LFCLKSTARTED_CHIDX_Pos (0UL)
#define CLOCK_PUBLISH_LFCLKSTARTED_CHIDX_Msk (0xFFUL << CLOCK_PUBLISH_LFCLKSTARTED_CHIDX_Pos)

/* Register: CLOCK_PUBLISH_DONE */
/* Description: Publish configuration for event DONE */

/* Bit 31 :   */
#define CLOCK_PUBLISH_DONE_EN_Pos (31UL)
#define CLOCK_PUBLISH_DONE_EN_Msk (0x1UL << CLOCK_PUBLISH_DONE_EN_Pos)
#define CLOCK_PUBLISH_DONE_EN_Disabled (0x0UL)
#define CLOCK_PUBLISH_DONE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event DONE will publish to */
#define CLOCK_PUBLISH_DONE_CHIDX_Pos (0UL)
#define CLOCK_PUBLISH_DONE_CHIDX_Msk (0xFFUL << CLOCK_PUBLISH_DONE_CHIDX_Pos)

/* Register: CLOCK_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 7 : Enable or disable interrupt for event DONE */
#define CLOCK_INTEN_DONE_Pos (7UL)
#define CLOCK_INTEN_DONE_Msk (0x1UL << CLOCK_INTEN_DONE_Pos)
#define CLOCK_INTEN_DONE_Disabled (0x0UL)
#define CLOCK_INTEN_DONE_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event LFCLKSTARTED */
#define CLOCK_INTEN_LFCLKSTARTED_Pos (1UL)
#define CLOCK_INTEN_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTEN_LFCLKSTARTED_Pos)
#define CLOCK_INTEN_LFCLKSTARTED_Disabled (0x0UL)
#define CLOCK_INTEN_LFCLKSTARTED_Enabled (0x1UL)

/* Bit 0 : Enable or disable interrupt for event HFCLKSTARTED */
#define CLOCK_INTEN_HFCLKSTARTED_Pos (0UL)
#define CLOCK_INTEN_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTEN_HFCLKSTARTED_Pos)
#define CLOCK_INTEN_HFCLKSTARTED_Disabled (0x0UL)
#define CLOCK_INTEN_HFCLKSTARTED_Enabled (0x1UL)

/* Register: CLOCK_INTENSET */
/* Description: Enable interrupt */

/* Bit 7 : Write '1' to enable interrupt for event DONE */
#define CLOCK_INTENSET_DONE_Pos (7UL)
#define CLOCK_INTENSET_DONE_Msk (0x1UL << CLOCK_INTENSET_DONE_Pos)
#define CLOCK_INTENSET_DONE_Disabled (0x0UL)
#define CLOCK_INTENSET_DONE_Enabled (0x1UL)
#define CLOCK_INTENSET_DONE_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event LFCLKSTARTED */
#define CLOCK_INTENSET_LFCLKSTARTED_Pos (1UL)
#define CLOCK_INTENSET_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_LFCLKSTARTED_Pos)
#define CLOCK_INTENSET_LFCLKSTARTED_Disabled (0x0UL)
#define CLOCK_INTENSET_LFCLKSTARTED_Enabled (0x1UL)
#define CLOCK_INTENSET_LFCLKSTARTED_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event HFCLKSTARTED */
#define CLOCK_INTENSET_HFCLKSTARTED_Pos (0UL)
#define CLOCK_INTENSET_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_HFCLKSTARTED_Pos)
#define CLOCK_INTENSET_HFCLKSTARTED_Disabled (0x0UL)
#define CLOCK_INTENSET_HFCLKSTARTED_Enabled (0x1UL)
#define CLOCK_INTENSET_HFCLKSTARTED_Set (0x1UL)

/* Register: CLOCK_INTENCLR */
/* Description: Disable interrupt */

/* Bit 7 : Write '1' to disable interrupt for event DONE */
#define CLOCK_INTENCLR_DONE_Pos (7UL)
#define CLOCK_INTENCLR_DONE_Msk (0x1UL << CLOCK_INTENCLR_DONE_Pos)
#define CLOCK_INTENCLR_DONE_Disabled (0x0UL)
#define CLOCK_INTENCLR_DONE_Enabled (0x1UL)
#define CLOCK_INTENCLR_DONE_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event LFCLKSTARTED */
#define CLOCK_INTENCLR_LFCLKSTARTED_Pos (1UL)
#define CLOCK_INTENCLR_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_LFCLKSTARTED_Pos)
#define CLOCK_INTENCLR_LFCLKSTARTED_Disabled (0x0UL)
#define CLOCK_INTENCLR_LFCLKSTARTED_Enabled (0x1UL)
#define CLOCK_INTENCLR_LFCLKSTARTED_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event HFCLKSTARTED */
#define CLOCK_INTENCLR_HFCLKSTARTED_Pos (0UL)
#define CLOCK_INTENCLR_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_HFCLKSTARTED_Pos)
#define CLOCK_INTENCLR_HFCLKSTARTED_Disabled (0x0UL)
#define CLOCK_INTENCLR_HFCLKSTARTED_Enabled (0x1UL)
#define CLOCK_INTENCLR_HFCLKSTARTED_Clear (0x1UL)

/* Register: CLOCK_INTPEND */
/* Description: Pending interrupts */

/* Bit 7 : Read pending status of interrupt for event DONE */
#define CLOCK_INTPEND_DONE_Pos (7UL)
#define CLOCK_INTPEND_DONE_Msk (0x1UL << CLOCK_INTPEND_DONE_Pos)
#define CLOCK_INTPEND_DONE_NotPending (0x0UL)
#define CLOCK_INTPEND_DONE_Pending (0x1UL)

/* Bit 1 : Read pending status of interrupt for event LFCLKSTARTED */
#define CLOCK_INTPEND_LFCLKSTARTED_Pos (1UL)
#define CLOCK_INTPEND_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTPEND_LFCLKSTARTED_Pos)
#define CLOCK_INTPEND_LFCLKSTARTED_NotPending (0x0UL)
#define CLOCK_INTPEND_LFCLKSTARTED_Pending (0x1UL)

/* Bit 0 : Read pending status of interrupt for event HFCLKSTARTED */
#define CLOCK_INTPEND_HFCLKSTARTED_Pos (0UL)
#define CLOCK_INTPEND_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTPEND_HFCLKSTARTED_Pos)
#define CLOCK_INTPEND_HFCLKSTARTED_NotPending (0x0UL)
#define CLOCK_INTPEND_HFCLKSTARTED_Pending (0x1UL)

/* Register: CLOCK_HFCLKRUN */
/* Description: Status indicating that HFCLKSTART task has been triggered */

/* Bit 0 : HFCLKSTART task triggered or not */
#define CLOCK_HFCLKRUN_STATUS_Pos (0UL)
#define CLOCK_HFCLKRUN_STATUS_Msk (0x1UL << CLOCK_HFCLKRUN_STATUS_Pos)
#define CLOCK_HFCLKRUN_STATUS_NotTriggered (0x0UL)
#define CLOCK_HFCLKRUN_STATUS_Triggered (0x1UL)

/* Register: CLOCK_HFCLKSTAT */
/* Description: Status indicating which HFCLK128M/HFCLK64M source is running This register value in any CLOCK instance reflects status only due to configurations/actions in that CLOCK instance. */

/* Bit 16 : HFCLK state */
#define CLOCK_HFCLKSTAT_STATE_Pos (16UL)
#define CLOCK_HFCLKSTAT_STATE_Msk (0x1UL << CLOCK_HFCLKSTAT_STATE_Pos)
#define CLOCK_HFCLKSTAT_STATE_NotRunning (0x0UL)
#define CLOCK_HFCLKSTAT_STATE_Running (0x1UL)

/* Bit 4 : ALWAYSRUN activated */
#define CLOCK_HFCLKSTAT_ALWAYSRUNNING_Pos (4UL)
#define CLOCK_HFCLKSTAT_ALWAYSRUNNING_Msk (0x1UL << CLOCK_HFCLKSTAT_ALWAYSRUNNING_Pos)
#define CLOCK_HFCLKSTAT_ALWAYSRUNNING_NotRunning (0x0UL)
#define CLOCK_HFCLKSTAT_ALWAYSRUNNING_Running (0x1UL)

/* Bit 0 : Active clock source */
#define CLOCK_HFCLKSTAT_SRC_Pos (0UL)
#define CLOCK_HFCLKSTAT_SRC_Msk (0x1UL << CLOCK_HFCLKSTAT_SRC_Pos)
#define CLOCK_HFCLKSTAT_SRC_HFINT (0x0UL)
#define CLOCK_HFCLKSTAT_SRC_HFXO (0x1UL)

/* Register: CLOCK_LFCLKRUN */
/* Description: Status indicating that LFCLKSTART task has been triggered */

/* Bit 0 : LFCLKSTART task triggered or not */
#define CLOCK_LFCLKRUN_STATUS_Pos (0UL)
#define CLOCK_LFCLKRUN_STATUS_Msk (0x1UL << CLOCK_LFCLKRUN_STATUS_Pos)
#define CLOCK_LFCLKRUN_STATUS_NotTriggered (0x0UL)
#define CLOCK_LFCLKRUN_STATUS_Triggered (0x1UL)

/* Register: CLOCK_LFCLKSTAT */
/* Description: Status indicating which LFCLK source is running This register value in any CLOCK instance reflects status only due to configurations/actions in that CLOCK instance. */

/* Bit 16 : LFCLK state */
#define CLOCK_LFCLKSTAT_STATE_Pos (16UL)
#define CLOCK_LFCLKSTAT_STATE_Msk (0x1UL << CLOCK_LFCLKSTAT_STATE_Pos)
#define CLOCK_LFCLKSTAT_STATE_NotRunning (0x0UL)
#define CLOCK_LFCLKSTAT_STATE_Running (0x1UL)

/* Bit 4 : ALWAYSRUN activated */
#define CLOCK_LFCLKSTAT_ALWAYSRUNNING_Pos (4UL)
#define CLOCK_LFCLKSTAT_ALWAYSRUNNING_Msk (0x1UL << CLOCK_LFCLKSTAT_ALWAYSRUNNING_Pos)
#define CLOCK_LFCLKSTAT_ALWAYSRUNNING_NotRunning (0x0UL)
#define CLOCK_LFCLKSTAT_ALWAYSRUNNING_Running (0x1UL)

/* Bits 1..0 : Active clock source */
#define CLOCK_LFCLKSTAT_SRC_Pos (0UL)
#define CLOCK_LFCLKSTAT_SRC_Msk (0x3UL << CLOCK_LFCLKSTAT_SRC_Pos)
#define CLOCK_LFCLKSTAT_SRC_LFRC (0x1UL)
#define CLOCK_LFCLKSTAT_SRC_LFXO (0x2UL)
#define CLOCK_LFCLKSTAT_SRC_LFSYNT (0x3UL)

/* Register: CLOCK_LFCLKSRCCOPY */
/* Description: Copy of LFCLKSRC register, set when LFCLKSTART task was triggered */

/* Bits 1..0 : Clock source */
#define CLOCK_LFCLKSRCCOPY_SRC_Pos (0UL)
#define CLOCK_LFCLKSRCCOPY_SRC_Msk (0x3UL << CLOCK_LFCLKSRCCOPY_SRC_Pos)
#define CLOCK_LFCLKSRCCOPY_SRC_LFRC (0x1UL)
#define CLOCK_LFCLKSRCCOPY_SRC_LFXO (0x2UL)
#define CLOCK_LFCLKSRCCOPY_SRC_LFSYNT (0x3UL)

/* Register: CLOCK_HFCLKSRC */
/* Description: Clock source for HFCLK128M/HFCLK64M */

/* Bit 0 : Select which HFCLK source is started by the HFCLKSTART task */
#define CLOCK_HFCLKSRC_SRC_Pos (0UL)
#define CLOCK_HFCLKSRC_SRC_Msk (0x1UL << CLOCK_HFCLKSRC_SRC_Pos)
#define CLOCK_HFCLKSRC_SRC_HFINT (0x0UL)
#define CLOCK_HFCLKSRC_SRC_HFXO (0x1UL)

/* Register: CLOCK_LFCLKSRC */
/* Description: Clock source for LFCLK */

/* Bits 1..0 : Select which LFCLK source is started by the LFCLKSTART task */
#define CLOCK_LFCLKSRC_SRC_Pos (0UL)
#define CLOCK_LFCLKSRC_SRC_Msk (0x3UL << CLOCK_LFCLKSRC_SRC_Pos)
#define CLOCK_LFCLKSRC_SRC_LFRC (0x1UL)
#define CLOCK_LFCLKSRC_SRC_LFXO (0x2UL)
#define CLOCK_LFCLKSRC_SRC_LFSYNT (0x3UL)

/* Register: CLOCK_HFCLKCTRL */
/* Description: HFCLK128M frequency configuration */

/* Bits 1..0 : High frequency clock HCLK */
#define CLOCK_HFCLKCTRL_HCLK_Pos (0UL)
#define CLOCK_HFCLKCTRL_HCLK_Msk (0x3UL << CLOCK_HFCLKCTRL_HCLK_Pos)
#define CLOCK_HFCLKCTRL_HCLK_Div1 (0x0UL)
#define CLOCK_HFCLKCTRL_HCLK_Div2 (0x1UL)

/* Register: CLOCK_HFCLKALWAYSRUN */
/* Description: Automatic or manual control of HFCLK128M/HFCLK64M */

/* Bit 0 : Ensure clock is always running */
#define CLOCK_HFCLKALWAYSRUN_ALWAYSRUN_Pos (0UL)
#define CLOCK_HFCLKALWAYSRUN_ALWAYSRUN_Msk (0x1UL << CLOCK_HFCLKALWAYSRUN_ALWAYSRUN_Pos)
#define CLOCK_HFCLKALWAYSRUN_ALWAYSRUN_Automatic (0x0UL)
#define CLOCK_HFCLKALWAYSRUN_ALWAYSRUN_AlwaysRun (0x1UL)

/* Register: CLOCK_LFCLKALWAYSRUN */
/* Description: Automatic or manual control of LFCLK */

/* Bit 0 : Ensure clock is always running */
#define CLOCK_LFCLKALWAYSRUN_ALWAYSRUN_Pos (0UL)
#define CLOCK_LFCLKALWAYSRUN_ALWAYSRUN_Msk (0x1UL << CLOCK_LFCLKALWAYSRUN_ALWAYSRUN_Pos)
#define CLOCK_LFCLKALWAYSRUN_ALWAYSRUN_Automatic (0x0UL)
#define CLOCK_LFCLKALWAYSRUN_ALWAYSRUN_AlwaysRun (0x1UL)


/* Peripheral: CTI */
/* Description: Cross-Trigger Interface control. NOTE: this is not a separate peripheral, but describes CM33 functionality. */

/* Register: CTI_CTICONTROL */
/* Description: CTI Control register */

/* Bit 0 : Enables or disables the CTI. */
#define CTI_CTICONTROL_GLBEN_Pos (0UL)
#define CTI_CTICONTROL_GLBEN_Msk (0x1UL << CTI_CTICONTROL_GLBEN_Pos)
#define CTI_CTICONTROL_GLBEN_Disabled (0x0UL)
#define CTI_CTICONTROL_GLBEN_Enabled (0x1UL)

/* Register: CTI_CTIINTACK */
/* Description: CTI Interrupt Acknowledge register */

/* Bit 7 : Acknowledges the ctitrigout 7 output. */
#define CTI_CTIINTACK_INTACK_7_Pos (7UL)
#define CTI_CTIINTACK_INTACK_7_Msk (0x1UL << CTI_CTIINTACK_INTACK_7_Pos)
#define CTI_CTIINTACK_INTACK_7_Acknowledge (0x1UL)

/* Bit 6 : Acknowledges the ctitrigout 6 output. */
#define CTI_CTIINTACK_INTACK_6_Pos (6UL)
#define CTI_CTIINTACK_INTACK_6_Msk (0x1UL << CTI_CTIINTACK_INTACK_6_Pos)
#define CTI_CTIINTACK_INTACK_6_Acknowledge (0x1UL)

/* Bit 5 : Acknowledges the ctitrigout 5 output. */
#define CTI_CTIINTACK_INTACK_5_Pos (5UL)
#define CTI_CTIINTACK_INTACK_5_Msk (0x1UL << CTI_CTIINTACK_INTACK_5_Pos)
#define CTI_CTIINTACK_INTACK_5_Acknowledge (0x1UL)

/* Bit 4 : Acknowledges the ctitrigout 4 output. */
#define CTI_CTIINTACK_INTACK_4_Pos (4UL)
#define CTI_CTIINTACK_INTACK_4_Msk (0x1UL << CTI_CTIINTACK_INTACK_4_Pos)
#define CTI_CTIINTACK_INTACK_4_Acknowledge (0x1UL)

/* Bit 3 : Acknowledges the ctitrigout 3 output. */
#define CTI_CTIINTACK_INTACK_3_Pos (3UL)
#define CTI_CTIINTACK_INTACK_3_Msk (0x1UL << CTI_CTIINTACK_INTACK_3_Pos)
#define CTI_CTIINTACK_INTACK_3_Acknowledge (0x1UL)

/* Bit 2 : Acknowledges the ctitrigout 2 output. */
#define CTI_CTIINTACK_INTACK_2_Pos (2UL)
#define CTI_CTIINTACK_INTACK_2_Msk (0x1UL << CTI_CTIINTACK_INTACK_2_Pos)
#define CTI_CTIINTACK_INTACK_2_Acknowledge (0x1UL)

/* Bit 1 : Acknowledges the ctitrigout 1 output. */
#define CTI_CTIINTACK_INTACK_1_Pos (1UL)
#define CTI_CTIINTACK_INTACK_1_Msk (0x1UL << CTI_CTIINTACK_INTACK_1_Pos)
#define CTI_CTIINTACK_INTACK_1_Acknowledge (0x1UL)

/* Bit 0 : Acknowledges the ctitrigout 0 output. */
#define CTI_CTIINTACK_INTACK_0_Pos (0UL)
#define CTI_CTIINTACK_INTACK_0_Msk (0x1UL << CTI_CTIINTACK_INTACK_0_Pos)
#define CTI_CTIINTACK_INTACK_0_Acknowledge (0x1UL)

/* Register: CTI_CTIAPPSET */
/* Description: CTI Application Trigger Set register */

/* Bit 3 : Application trigger event for channel 3. */
#define CTI_CTIAPPSET_APPSET_3_Pos (3UL)
#define CTI_CTIAPPSET_APPSET_3_Msk (0x1UL << CTI_CTIAPPSET_APPSET_3_Pos)
#define CTI_CTIAPPSET_APPSET_3_Inactive (0x0UL)
#define CTI_CTIAPPSET_APPSET_3_Active (0x1UL)
#define CTI_CTIAPPSET_APPSET_3_Activate (0x1UL)

/* Bit 2 : Application trigger event for channel 2. */
#define CTI_CTIAPPSET_APPSET_2_Pos (2UL)
#define CTI_CTIAPPSET_APPSET_2_Msk (0x1UL << CTI_CTIAPPSET_APPSET_2_Pos)
#define CTI_CTIAPPSET_APPSET_2_Inactive (0x0UL)
#define CTI_CTIAPPSET_APPSET_2_Active (0x1UL)
#define CTI_CTIAPPSET_APPSET_2_Activate (0x1UL)

/* Bit 1 : Application trigger event for channel 1. */
#define CTI_CTIAPPSET_APPSET_1_Pos (1UL)
#define CTI_CTIAPPSET_APPSET_1_Msk (0x1UL << CTI_CTIAPPSET_APPSET_1_Pos)
#define CTI_CTIAPPSET_APPSET_1_Inactive (0x0UL)
#define CTI_CTIAPPSET_APPSET_1_Active (0x1UL)
#define CTI_CTIAPPSET_APPSET_1_Activate (0x1UL)

/* Bit 0 : Application trigger event for channel 0. */
#define CTI_CTIAPPSET_APPSET_0_Pos (0UL)
#define CTI_CTIAPPSET_APPSET_0_Msk (0x1UL << CTI_CTIAPPSET_APPSET_0_Pos)
#define CTI_CTIAPPSET_APPSET_0_Inactive (0x0UL)
#define CTI_CTIAPPSET_APPSET_0_Active (0x1UL)
#define CTI_CTIAPPSET_APPSET_0_Activate (0x1UL)

/* Register: CTI_CTIAPPCLEAR */
/* Description: CTI Application Trigger Clear register */

/* Bit 3 : Sets the corresponding bits in the CTIAPPSET to 0. There is one bit of the register for each channel. */
#define CTI_CTIAPPCLEAR_APPCLEAR_3_Pos (3UL)
#define CTI_CTIAPPCLEAR_APPCLEAR_3_Msk (0x1UL << CTI_CTIAPPCLEAR_APPCLEAR_3_Pos)
#define CTI_CTIAPPCLEAR_APPCLEAR_3_Clear (0x1UL)

/* Bit 2 : Sets the corresponding bits in the CTIAPPSET to 0. There is one bit of the register for each channel. */
#define CTI_CTIAPPCLEAR_APPCLEAR_2_Pos (2UL)
#define CTI_CTIAPPCLEAR_APPCLEAR_2_Msk (0x1UL << CTI_CTIAPPCLEAR_APPCLEAR_2_Pos)
#define CTI_CTIAPPCLEAR_APPCLEAR_2_Clear (0x1UL)

/* Bit 1 : Sets the corresponding bits in the CTIAPPSET to 0. There is one bit of the register for each channel. */
#define CTI_CTIAPPCLEAR_APPCLEAR_1_Pos (1UL)
#define CTI_CTIAPPCLEAR_APPCLEAR_1_Msk (0x1UL << CTI_CTIAPPCLEAR_APPCLEAR_1_Pos)
#define CTI_CTIAPPCLEAR_APPCLEAR_1_Clear (0x1UL)

/* Bit 0 : Sets the corresponding bits in the CTIAPPSET to 0. There is one bit of the register for each channel. */
#define CTI_CTIAPPCLEAR_APPCLEAR_0_Pos (0UL)
#define CTI_CTIAPPCLEAR_APPCLEAR_0_Msk (0x1UL << CTI_CTIAPPCLEAR_APPCLEAR_0_Pos)
#define CTI_CTIAPPCLEAR_APPCLEAR_0_Clear (0x1UL)

/* Register: CTI_CTIAPPPULSE */
/* Description: CTI Application Pulse register */

/* Bit 3 : Setting a bit HIGH generates a channel event pulse for the selected channel. There is one bit of the register for each channel. */
#define CTI_CTIAPPPULSE_APPULSE_3_Pos (3UL)
#define CTI_CTIAPPPULSE_APPULSE_3_Msk (0x1UL << CTI_CTIAPPPULSE_APPULSE_3_Pos)
#define CTI_CTIAPPPULSE_APPULSE_3_Generate (0x1UL)

/* Bit 2 : Setting a bit HIGH generates a channel event pulse for the selected channel. There is one bit of the register for each channel. */
#define CTI_CTIAPPPULSE_APPULSE_2_Pos (2UL)
#define CTI_CTIAPPPULSE_APPULSE_2_Msk (0x1UL << CTI_CTIAPPPULSE_APPULSE_2_Pos)
#define CTI_CTIAPPPULSE_APPULSE_2_Generate (0x1UL)

/* Bit 1 : Setting a bit HIGH generates a channel event pulse for the selected channel. There is one bit of the register for each channel. */
#define CTI_CTIAPPPULSE_APPULSE_1_Pos (1UL)
#define CTI_CTIAPPPULSE_APPULSE_1_Msk (0x1UL << CTI_CTIAPPPULSE_APPULSE_1_Pos)
#define CTI_CTIAPPPULSE_APPULSE_1_Generate (0x1UL)

/* Bit 0 : Setting a bit HIGH generates a channel event pulse for the selected channel. There is one bit of the register for each channel. */
#define CTI_CTIAPPPULSE_APPULSE_0_Pos (0UL)
#define CTI_CTIAPPPULSE_APPULSE_0_Msk (0x1UL << CTI_CTIAPPPULSE_APPULSE_0_Pos)
#define CTI_CTIAPPPULSE_APPULSE_0_Generate (0x1UL)

/* Register: CTI_CTIINEN */
/* Description: Description collection: CTI Trigger to Channel Enable register */

/* Bit 3 : Enables a cross trigger event to channel 3 when a ctitrigin input is activated. */
#define CTI_CTIINEN_TRIGINEN_3_Pos (3UL)
#define CTI_CTIINEN_TRIGINEN_3_Msk (0x1UL << CTI_CTIINEN_TRIGINEN_3_Pos)
#define CTI_CTIINEN_TRIGINEN_3_Disabled (0x0UL)
#define CTI_CTIINEN_TRIGINEN_3_Enabled (0x1UL)

/* Bit 2 : Enables a cross trigger event to channel 2 when a ctitrigin input is activated. */
#define CTI_CTIINEN_TRIGINEN_2_Pos (2UL)
#define CTI_CTIINEN_TRIGINEN_2_Msk (0x1UL << CTI_CTIINEN_TRIGINEN_2_Pos)
#define CTI_CTIINEN_TRIGINEN_2_Disabled (0x0UL)
#define CTI_CTIINEN_TRIGINEN_2_Enabled (0x1UL)

/* Bit 1 : Enables a cross trigger event to channel 1 when a ctitrigin input is activated. */
#define CTI_CTIINEN_TRIGINEN_1_Pos (1UL)
#define CTI_CTIINEN_TRIGINEN_1_Msk (0x1UL << CTI_CTIINEN_TRIGINEN_1_Pos)
#define CTI_CTIINEN_TRIGINEN_1_Disabled (0x0UL)
#define CTI_CTIINEN_TRIGINEN_1_Enabled (0x1UL)

/* Bit 0 : Enables a cross trigger event to channel 0 when a ctitrigin input is activated. */
#define CTI_CTIINEN_TRIGINEN_0_Pos (0UL)
#define CTI_CTIINEN_TRIGINEN_0_Msk (0x1UL << CTI_CTIINEN_TRIGINEN_0_Pos)
#define CTI_CTIINEN_TRIGINEN_0_Disabled (0x0UL)
#define CTI_CTIINEN_TRIGINEN_0_Enabled (0x1UL)

/* Register: CTI_CTIOUTEN */
/* Description: Description collection: CTI Channel to Trigger Enable register */

/* Bit 3 : Enables a cross trigger event to ctitrigout when channel 3 is activated. */
#define CTI_CTIOUTEN_TRIGOUTEN_3_Pos (3UL)
#define CTI_CTIOUTEN_TRIGOUTEN_3_Msk (0x1UL << CTI_CTIOUTEN_TRIGOUTEN_3_Pos)
#define CTI_CTIOUTEN_TRIGOUTEN_3_Disabled (0x0UL)
#define CTI_CTIOUTEN_TRIGOUTEN_3_Enabled (0x1UL)

/* Bit 2 : Enables a cross trigger event to ctitrigout when channel 2 is activated. */
#define CTI_CTIOUTEN_TRIGOUTEN_2_Pos (2UL)
#define CTI_CTIOUTEN_TRIGOUTEN_2_Msk (0x1UL << CTI_CTIOUTEN_TRIGOUTEN_2_Pos)
#define CTI_CTIOUTEN_TRIGOUTEN_2_Disabled (0x0UL)
#define CTI_CTIOUTEN_TRIGOUTEN_2_Enabled (0x1UL)

/* Bit 1 : Enables a cross trigger event to ctitrigout when channel 1 is activated. */
#define CTI_CTIOUTEN_TRIGOUTEN_1_Pos (1UL)
#define CTI_CTIOUTEN_TRIGOUTEN_1_Msk (0x1UL << CTI_CTIOUTEN_TRIGOUTEN_1_Pos)
#define CTI_CTIOUTEN_TRIGOUTEN_1_Disabled (0x0UL)
#define CTI_CTIOUTEN_TRIGOUTEN_1_Enabled (0x1UL)

/* Bit 0 : Enables a cross trigger event to ctitrigout when channel 0 is activated. */
#define CTI_CTIOUTEN_TRIGOUTEN_0_Pos (0UL)
#define CTI_CTIOUTEN_TRIGOUTEN_0_Msk (0x1UL << CTI_CTIOUTEN_TRIGOUTEN_0_Pos)
#define CTI_CTIOUTEN_TRIGOUTEN_0_Disabled (0x0UL)
#define CTI_CTIOUTEN_TRIGOUTEN_0_Enabled (0x1UL)

/* Register: CTI_CTITRIGINSTATUS */
/* Description: CTI Trigger In Status register */

/* Bit 7 : Shows the status of ctitrigin7 input. */
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_7_Pos (7UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_7_Msk (0x1UL << CTI_CTITRIGINSTATUS_TRIGINSTATUS_7_Pos)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_7_Inactive (0x0UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_7_Active (0x1UL)

/* Bit 6 : Shows the status of ctitrigin6 input. */
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_6_Pos (6UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_6_Msk (0x1UL << CTI_CTITRIGINSTATUS_TRIGINSTATUS_6_Pos)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_6_Inactive (0x0UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_6_Active (0x1UL)

/* Bit 5 : Shows the status of ctitrigin5 input. */
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_5_Pos (5UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_5_Msk (0x1UL << CTI_CTITRIGINSTATUS_TRIGINSTATUS_5_Pos)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_5_Inactive (0x0UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_5_Active (0x1UL)

/* Bit 4 : Shows the status of ctitrigin4 input. */
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_4_Pos (4UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_4_Msk (0x1UL << CTI_CTITRIGINSTATUS_TRIGINSTATUS_4_Pos)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_4_Inactive (0x0UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_4_Active (0x1UL)

/* Bit 3 : Shows the status of ctitrigin3 input. */
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_3_Pos (3UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_3_Msk (0x1UL << CTI_CTITRIGINSTATUS_TRIGINSTATUS_3_Pos)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_3_Inactive (0x0UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_3_Active (0x1UL)

/* Bit 2 : Shows the status of ctitrigin2 input. */
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_2_Pos (2UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_2_Msk (0x1UL << CTI_CTITRIGINSTATUS_TRIGINSTATUS_2_Pos)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_2_Inactive (0x0UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_2_Active (0x1UL)

/* Bit 1 : Shows the status of ctitrigin1 input. */
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_1_Pos (1UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_1_Msk (0x1UL << CTI_CTITRIGINSTATUS_TRIGINSTATUS_1_Pos)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_1_Inactive (0x0UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_1_Active (0x1UL)

/* Bit 0 : Shows the status of ctitrigin0 input. */
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_0_Pos (0UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_0_Msk (0x1UL << CTI_CTITRIGINSTATUS_TRIGINSTATUS_0_Pos)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_0_Inactive (0x0UL)
#define CTI_CTITRIGINSTATUS_TRIGINSTATUS_0_Active (0x1UL)

/* Register: CTI_CTITRIGOUTSTATUS */
/* Description: CTI Trigger Out Status register */

/* Bit 7 : Shows the status of ctitrigout7 output. */
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_7_Pos (7UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_7_Msk (0x1UL << CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_7_Pos)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_7_Inactive (0x0UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_7_Active (0x1UL)

/* Bit 6 : Shows the status of ctitrigout6 output. */
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_6_Pos (6UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_6_Msk (0x1UL << CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_6_Pos)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_6_Inactive (0x0UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_6_Active (0x1UL)

/* Bit 5 : Shows the status of ctitrigout5 output. */
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_5_Pos (5UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_5_Msk (0x1UL << CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_5_Pos)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_5_Inactive (0x0UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_5_Active (0x1UL)

/* Bit 4 : Shows the status of ctitrigout4 output. */
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_4_Pos (4UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_4_Msk (0x1UL << CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_4_Pos)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_4_Inactive (0x0UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_4_Active (0x1UL)

/* Bit 3 : Shows the status of ctitrigout3 output. */
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_3_Pos (3UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_3_Msk (0x1UL << CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_3_Pos)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_3_Inactive (0x0UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_3_Active (0x1UL)

/* Bit 2 : Shows the status of ctitrigout2 output. */
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_2_Pos (2UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_2_Msk (0x1UL << CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_2_Pos)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_2_Inactive (0x0UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_2_Active (0x1UL)

/* Bit 1 : Shows the status of ctitrigout1 output. */
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_1_Pos (1UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_1_Msk (0x1UL << CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_1_Pos)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_1_Inactive (0x0UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_1_Active (0x1UL)

/* Bit 0 : Shows the status of ctitrigout0 output. */
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_0_Pos (0UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_0_Msk (0x1UL << CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_0_Pos)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_0_Inactive (0x0UL)
#define CTI_CTITRIGOUTSTATUS_TRIGOUTSTATUS_0_Active (0x1UL)

/* Register: CTI_CTICHINSTATUS */
/* Description: CTI Channel In Status register */

/* Bit 3 : Shows the status of the ctitrigin 3 input. */
#define CTI_CTICHINSTATUS_CTICHINSTATUS_3_Pos (3UL)
#define CTI_CTICHINSTATUS_CTICHINSTATUS_3_Msk (0x1UL << CTI_CTICHINSTATUS_CTICHINSTATUS_3_Pos)
#define CTI_CTICHINSTATUS_CTICHINSTATUS_3_Inactive (0x0UL)
#define CTI_CTICHINSTATUS_CTICHINSTATUS_3_Active (0x1UL)

/* Bit 2 : Shows the status of the ctitrigin 2 input. */
#define CTI_CTICHINSTATUS_CTICHINSTATUS_2_Pos (2UL)
#define CTI_CTICHINSTATUS_CTICHINSTATUS_2_Msk (0x1UL << CTI_CTICHINSTATUS_CTICHINSTATUS_2_Pos)
#define CTI_CTICHINSTATUS_CTICHINSTATUS_2_Inactive (0x0UL)
#define CTI_CTICHINSTATUS_CTICHINSTATUS_2_Active (0x1UL)

/* Bit 1 : Shows the status of the ctitrigin 1 input. */
#define CTI_CTICHINSTATUS_CTICHINSTATUS_1_Pos (1UL)
#define CTI_CTICHINSTATUS_CTICHINSTATUS_1_Msk (0x1UL << CTI_CTICHINSTATUS_CTICHINSTATUS_1_Pos)
#define CTI_CTICHINSTATUS_CTICHINSTATUS_1_Inactive (0x0UL)
#define CTI_CTICHINSTATUS_CTICHINSTATUS_1_Active (0x1UL)

/* Bit 0 : Shows the status of the ctitrigin 0 input. */
#define CTI_CTICHINSTATUS_CTICHINSTATUS_0_Pos (0UL)
#define CTI_CTICHINSTATUS_CTICHINSTATUS_0_Msk (0x1UL << CTI_CTICHINSTATUS_CTICHINSTATUS_0_Pos)
#define CTI_CTICHINSTATUS_CTICHINSTATUS_0_Inactive (0x0UL)
#define CTI_CTICHINSTATUS_CTICHINSTATUS_0_Active (0x1UL)

/* Register: CTI_CTIGATE */
/* Description: Enable CTI Channel Gate register */

/* Bit 3 : Enable ctichout3. */
#define CTI_CTIGATE_CTIGATEEN_3_Pos (3UL)
#define CTI_CTIGATE_CTIGATEEN_3_Msk (0x1UL << CTI_CTIGATE_CTIGATEEN_3_Pos)
#define CTI_CTIGATE_CTIGATEEN_3_Disabled (0x0UL)
#define CTI_CTIGATE_CTIGATEEN_3_Enabled (0x1UL)

/* Bit 2 : Enable ctichout2. */
#define CTI_CTIGATE_CTIGATEEN_2_Pos (2UL)
#define CTI_CTIGATE_CTIGATEEN_2_Msk (0x1UL << CTI_CTIGATE_CTIGATEEN_2_Pos)
#define CTI_CTIGATE_CTIGATEEN_2_Disabled (0x0UL)
#define CTI_CTIGATE_CTIGATEEN_2_Enabled (0x1UL)

/* Bit 1 : Enable ctichout1. */
#define CTI_CTIGATE_CTIGATEEN_1_Pos (1UL)
#define CTI_CTIGATE_CTIGATEEN_1_Msk (0x1UL << CTI_CTIGATE_CTIGATEEN_1_Pos)
#define CTI_CTIGATE_CTIGATEEN_1_Disabled (0x0UL)
#define CTI_CTIGATE_CTIGATEEN_1_Enabled (0x1UL)

/* Bit 0 : Enable ctichout0. */
#define CTI_CTIGATE_CTIGATEEN_0_Pos (0UL)
#define CTI_CTIGATE_CTIGATEEN_0_Msk (0x1UL << CTI_CTIGATE_CTIGATEEN_0_Pos)
#define CTI_CTIGATE_CTIGATEEN_0_Disabled (0x0UL)
#define CTI_CTIGATE_CTIGATEEN_0_Enabled (0x1UL)

/* Register: CTI_DEVARCH */
/* Description: Device Architecture register */

/* Bit 0 : Contains the CTI device architecture. */
#define CTI_DEVARCH_Architecture_Pos (0UL)
#define CTI_DEVARCH_Architecture_Msk (0x1UL << CTI_DEVARCH_Architecture_Pos)

/* Register: CTI_DEVID */
/* Description: Device Configuration register */

/* Bits 19..16 : Number of ECT channels available. */
#define CTI_DEVID_NUMCH_Pos (16UL)
#define CTI_DEVID_NUMCH_Msk (0xFUL << CTI_DEVID_NUMCH_Pos)

/* Bits 15..8 : Number of ECT triggers available. */
#define CTI_DEVID_NUMTRIG_Pos (8UL)
#define CTI_DEVID_NUMTRIG_Msk (0xFFUL << CTI_DEVID_NUMTRIG_Pos)

/* Bits 4..0 : Indicates the number of multiplexers available on Trigger Inputs and Trigger Outputs that are using asicctl.
                    The default value of 0b00000 indicates that no multiplexing is present. */
#define CTI_DEVID_EXTMUXNUM_Pos (0UL)
#define CTI_DEVID_EXTMUXNUM_Msk (0x1FUL << CTI_DEVID_EXTMUXNUM_Pos)

/* Register: CTI_DEVTYPE */
/* Description: Device Type Identifier register */

/* Bits 7..4 : Sub-classification of the type of the debug component as specified in the Arm Architecture Specification within
                    the major classification as specified in the MAJOR field. */
#define CTI_DEVTYPE_SUB_Pos (4UL)
#define CTI_DEVTYPE_SUB_Msk (0xFUL << CTI_DEVTYPE_SUB_Pos)
#define CTI_DEVTYPE_SUB_Crosstrigger (0x1UL)

/* Bits 3..0 : Major classification of the type of the debug component as specified in the Arm Architecture Specification for this
                    debug and trace component. */
#define CTI_DEVTYPE_MAJOR_Pos (0UL)
#define CTI_DEVTYPE_MAJOR_Msk (0xFUL << CTI_DEVTYPE_MAJOR_Pos)
#define CTI_DEVTYPE_MAJOR_Controller (0x4UL)

/* Register: CTI_PIDR4 */
/* Description: Peripheral ID4 Register */

/* Bits 7..4 : Always 0b0000. Indicates that the device only occupies 4KB of memory. */
#define CTI_PIDR4_SIZE_Pos (4UL)
#define CTI_PIDR4_SIZE_Msk (0xFUL << CTI_PIDR4_SIZE_Pos)

/* Bits 3..0 : Together, PIDR1.DES_0, PIDR2.DES_1, and PIDR4.DES_2 identify the designer of the component. */
#define CTI_PIDR4_DES_2_Pos (0UL)
#define CTI_PIDR4_DES_2_Msk (0xFUL << CTI_PIDR4_DES_2_Pos)
#define CTI_PIDR4_DES_2_Code (0x4UL)

/* Register: CTI_PIDR0 */
/* Description: Peripheral ID0 Register */

/* Bits 7..0 : Bits[7:0] of the 12-bit part number of the component. The designer of the component assigns this part number. */
#define CTI_PIDR0_PART_0_Pos (0UL)
#define CTI_PIDR0_PART_0_Msk (0xFFUL << CTI_PIDR0_PART_0_Pos)
#define CTI_PIDR0_PART_0_PartnumberL (0x21UL)

/* Register: CTI_PIDR1 */
/* Description: Peripheral ID1 Register */

/* Bits 7..4 : Together, PIDR1.DES_0, PIDR2.DES_1, and PIDR4.DES_2 identify the designer of the component. */
#define CTI_PIDR1_DES_0_Pos (4UL)
#define CTI_PIDR1_DES_0_Msk (0xFUL << CTI_PIDR1_DES_0_Pos)
#define CTI_PIDR1_DES_0_Arm (0xBUL)

/* Bits 3..0 : Bits[11:8] of the 12-bit part number of the component. The designer of the component assigns this part number. */
#define CTI_PIDR1_PART_1_Pos (0UL)
#define CTI_PIDR1_PART_1_Msk (0xFUL << CTI_PIDR1_PART_1_Pos)
#define CTI_PIDR1_PART_1_PartnumberH (0xDUL)

/* Register: CTI_PIDR2 */
/* Description: Peripheral ID2 Register */

/* Bits 7..4 : Peripheral revision */
#define CTI_PIDR2_REVISION_Pos (4UL)
#define CTI_PIDR2_REVISION_Msk (0xFUL << CTI_PIDR2_REVISION_Pos)
#define CTI_PIDR2_REVISION_Rev0p0 (0x0UL)

/* Bit 3 : Always 1. Indicates that the JEDEC-assigned designer ID is used. */
#define CTI_PIDR2_JEDEC_Pos (3UL)
#define CTI_PIDR2_JEDEC_Msk (0x1UL << CTI_PIDR2_JEDEC_Pos)

/* Bits 2..0 : Together, PIDR1.DES_0, PIDR2.DES_1, and PIDR4.DES_2 identify the designer of the component. */
#define CTI_PIDR2_DES_1_Pos (0UL)
#define CTI_PIDR2_DES_1_Msk (0x7UL << CTI_PIDR2_DES_1_Pos)
#define CTI_PIDR2_DES_1_Arm (0x3UL)

/* Register: CTI_PIDR3 */
/* Description: Peripheral ID3 Register */

/* Bits 7..4 : Indicates minor errata fixes specific to the revision of the component being used, for example metal fixes after
                    implementation. In most cases, this field is 0b0000. Arm recommends that the component designers ensure that a
                    metal fix can change this field if required, for example, by driving it from registers that reset to 0b0000. */
#define CTI_PIDR3_REVAND_Pos (4UL)
#define CTI_PIDR3_REVAND_Msk (0xFUL << CTI_PIDR3_REVAND_Pos)
#define CTI_PIDR3_REVAND_NoErrata (0x0UL)

/* Bits 3..0 : Customer Modified. Indicates whether the customer has modified the behavior of the component. In most cases,
                    this field is 0b0000. Customers change this value when they make authorized modifications to this component. */
#define CTI_PIDR3_CMOD_Pos (0UL)
#define CTI_PIDR3_CMOD_Msk (0xFUL << CTI_PIDR3_CMOD_Pos)
#define CTI_PIDR3_CMOD_Unmodified (0x0UL)

/* Register: CTI_CIDR0 */
/* Description: Component ID0 Register */

/* Bits 7..0 : Preamble[0]. Contains bits[7:0] of the component identification code. */
#define CTI_CIDR0_PRMBL_0_Pos (0UL)
#define CTI_CIDR0_PRMBL_0_Msk (0xFFUL << CTI_CIDR0_PRMBL_0_Pos)
#define CTI_CIDR0_PRMBL_0_Value (0x0DUL)

/* Register: CTI_CIDR1 */
/* Description: Component ID1 Register */

/* Bits 7..4 : Class of the component, for example, whether the component is a ROM table or a generic CoreSight component.
                    Contains bits[15:12] of the component identification code */
#define CTI_CIDR1_CLASS_Pos (4UL)
#define CTI_CIDR1_CLASS_Msk (0xFUL << CTI_CIDR1_CLASS_Pos)
#define CTI_CIDR1_CLASS_Coresight (0x9UL)

/* Bits 3..0 : Preamble[1]. Contains bits[11:8] of the component identification code. */
#define CTI_CIDR1_PRMBL_1_Pos (0UL)
#define CTI_CIDR1_PRMBL_1_Msk (0xFUL << CTI_CIDR1_PRMBL_1_Pos)
#define CTI_CIDR1_PRMBL_1_Value (0x0UL)

/* Register: CTI_CIDR2 */
/* Description: Component ID2 Register */

/* Bits 7..0 : Preamble[2]. Contains bits[23:16] of the component identification code. */
#define CTI_CIDR2_PRMBL_2_Pos (0UL)
#define CTI_CIDR2_PRMBL_2_Msk (0xFFUL << CTI_CIDR2_PRMBL_2_Pos)
#define CTI_CIDR2_PRMBL_2_Value (0x05UL)

/* Register: CTI_CIDR3 */
/* Description: Component ID3 Register */

/* Bits 7..0 : Preamble[3]. Contains bits[31:24] of the component identification code. */
#define CTI_CIDR3_PRMBL_3_Pos (0UL)
#define CTI_CIDR3_PRMBL_3_Msk (0xFFUL << CTI_CIDR3_PRMBL_3_Pos)
#define CTI_CIDR3_PRMBL_3_Value (0xB1UL)


/* Peripheral: CTRLAPPERI */
/* Description: Control access port */

/* Register: CTRLAPPERI_MAILBOX_RXDATA */
/* Description: Data sent from the debugger to the CPU. */

/* Bits 31..0 : Data received from debugger */
#define CTRLAPPERI_MAILBOX_RXDATA_RXDATA_Pos (0UL)
#define CTRLAPPERI_MAILBOX_RXDATA_RXDATA_Msk (0xFFFFFFFFUL << CTRLAPPERI_MAILBOX_RXDATA_RXDATA_Pos)

/* Register: CTRLAPPERI_MAILBOX_RXSTATUS */
/* Description: This register shows a status that indicates if data sent from the debugger to the CPU has been read. */

/* Bit 0 : Status of data in register RXDATA */
#define CTRLAPPERI_MAILBOX_RXSTATUS_RXSTATUS_Pos (0UL)
#define CTRLAPPERI_MAILBOX_RXSTATUS_RXSTATUS_Msk (0x1UL << CTRLAPPERI_MAILBOX_RXSTATUS_RXSTATUS_Pos)
#define CTRLAPPERI_MAILBOX_RXSTATUS_RXSTATUS_NoDataPending (0x0UL)
#define CTRLAPPERI_MAILBOX_RXSTATUS_RXSTATUS_DataPending (0x1UL)

/* Register: CTRLAPPERI_MAILBOX_TXDATA */
/* Description: Data sent from the CPU to the debugger. */

/* Bits 31..0 : Data sent to debugger */
#define CTRLAPPERI_MAILBOX_TXDATA_TXDATA_Pos (0UL)
#define CTRLAPPERI_MAILBOX_TXDATA_TXDATA_Msk (0xFFFFFFFFUL << CTRLAPPERI_MAILBOX_TXDATA_TXDATA_Pos)

/* Register: CTRLAPPERI_MAILBOX_TXSTATUS */
/* Description: This register shows a status that indicates if the data sent from the CPU to the debugger has been read. */

/* Bit 0 : Status of data in register TXDATA */
#define CTRLAPPERI_MAILBOX_TXSTATUS_TXSTATUS_Pos (0UL)
#define CTRLAPPERI_MAILBOX_TXSTATUS_TXSTATUS_Msk (0x1UL << CTRLAPPERI_MAILBOX_TXSTATUS_TXSTATUS_Pos)
#define CTRLAPPERI_MAILBOX_TXSTATUS_TXSTATUS_NoDataPending (0x0UL)
#define CTRLAPPERI_MAILBOX_TXSTATUS_TXSTATUS_DataPending (0x1UL)

/* Register: CTRLAPPERI_ERASEPROTECT_LOCK */
/* Description: This register locks the ERASEPROTECT.DISABLE register from being written until next reset. */

/* Bit 0 : Lock ERASEPROTECT.DISABLE register from being written until next reset */
#define CTRLAPPERI_ERASEPROTECT_LOCK_LOCK_Pos (0UL)
#define CTRLAPPERI_ERASEPROTECT_LOCK_LOCK_Msk (0x1UL << CTRLAPPERI_ERASEPROTECT_LOCK_LOCK_Pos)
#define CTRLAPPERI_ERASEPROTECT_LOCK_LOCK_Unlocked (0x0UL)
#define CTRLAPPERI_ERASEPROTECT_LOCK_LOCK_Locked (0x1UL)

/* Register: CTRLAPPERI_ERASEPROTECT_DISABLE */
/* Description: This register disables the ERASEPROTECT register and performs an  ERASEALL operation. */

/* Bits 31..0 : The ERASEALL sequence is initiated if the value of the KEY fields are non-zero and the KEY fields match on both the CPU and debugger sides. */
#define CTRLAPPERI_ERASEPROTECT_DISABLE_KEY_Pos (0UL)
#define CTRLAPPERI_ERASEPROTECT_DISABLE_KEY_Msk (0xFFFFFFFFUL << CTRLAPPERI_ERASEPROTECT_DISABLE_KEY_Pos)

/* Register: CTRLAPPERI_APPROTECT_LOCK */
/* Description: This register locks the APPROTECT.DISABLE register from being written to until next reset. */

/* Bit 0 : Lock the APPROTECT.DISABLE register from being written to until next reset */
#define CTRLAPPERI_APPROTECT_LOCK_LOCK_Pos (0UL)
#define CTRLAPPERI_APPROTECT_LOCK_LOCK_Msk (0x1UL << CTRLAPPERI_APPROTECT_LOCK_LOCK_Pos)
#define CTRLAPPERI_APPROTECT_LOCK_LOCK_Unlocked (0x0UL)
#define CTRLAPPERI_APPROTECT_LOCK_LOCK_Locked (0x1UL)

/* Register: CTRLAPPERI_APPROTECT_DISABLE */
/* Description: This register disables the APPROTECT register and enables debug access to non-secure mode. */

/* Bits 31..0 : If the value of the KEY field is non-zero, and the KEY fields match on both the
        CPU and debugger sides, disable APPROTECT and enable debug access to non-secure mode until
        the next pin reset, brown-out reset, power-on reset, or watchog timer reset. After reset the debugger side register has a fixed KEY value. To enable debug access, both CTRL-AP and UICR.APPROTECT protection needs to be disabled. */
#define CTRLAPPERI_APPROTECT_DISABLE_KEY_Pos (0UL)
#define CTRLAPPERI_APPROTECT_DISABLE_KEY_Msk (0xFFFFFFFFUL << CTRLAPPERI_APPROTECT_DISABLE_KEY_Pos)

/* Register: CTRLAPPERI_STATUS */
/* Description: Status bits for CTRL-AP peripheral. */

/* Bit 2 : Status bit for device debug interface mode */
#define CTRLAPPERI_STATUS_DBGIFACEMODE_Pos (2UL)
#define CTRLAPPERI_STATUS_DBGIFACEMODE_Msk (0x1UL << CTRLAPPERI_STATUS_DBGIFACEMODE_Pos)
#define CTRLAPPERI_STATUS_DBGIFACEMODE_Disabled (0x0UL)
#define CTRLAPPERI_STATUS_DBGIFACEMODE_Enabled (0x1UL)

/* Bit 0 : Status bit for UICR part of access port protection at last reset. */
#define CTRLAPPERI_STATUS_UICRAPPROTECT_Pos (0UL)
#define CTRLAPPERI_STATUS_UICRAPPROTECT_Msk (0x1UL << CTRLAPPERI_STATUS_UICRAPPROTECT_Pos)
#define CTRLAPPERI_STATUS_UICRAPPROTECT_Enabled (0x0UL)
#define CTRLAPPERI_STATUS_UICRAPPROTECT_Disabled (0x1UL)


/* Peripheral: DCNF */
/* Description: Domain configuration management */

/* Register: DCNF_CPUID */
/* Description: CPU ID of this subsystem */

/* Bits 7..0 : CPU ID */
#define DCNF_CPUID_CPUID_Pos (0UL)
#define DCNF_CPUID_CPUID_Msk (0xFFUL << DCNF_CPUID_CPUID_Pos)


/* Peripheral: DPPIC */
/* Description: Distributed programmable peripheral interconnect controller */

/* Register: DPPIC_TASKS_CHG_EN */
/* Description: Description cluster: Enable channel group n */

/* Bit 0 : Enable channel group n */
#define DPPIC_TASKS_CHG_EN_EN_Pos (0UL)
#define DPPIC_TASKS_CHG_EN_EN_Msk (0x1UL << DPPIC_TASKS_CHG_EN_EN_Pos)
#define DPPIC_TASKS_CHG_EN_EN_Trigger (0x1UL)

/* Register: DPPIC_TASKS_CHG_DIS */
/* Description: Description cluster: Disable channel group n */

/* Bit 0 : Disable channel group n */
#define DPPIC_TASKS_CHG_DIS_DIS_Pos (0UL)
#define DPPIC_TASKS_CHG_DIS_DIS_Msk (0x1UL << DPPIC_TASKS_CHG_DIS_DIS_Pos)
#define DPPIC_TASKS_CHG_DIS_DIS_Trigger (0x1UL)

/* Register: DPPIC_SUBSCRIBE_CHG_EN */
/* Description: Description cluster: Subscribe configuration for task CHG[n].EN */

/* Bit 31 :   */
#define DPPIC_SUBSCRIBE_CHG_EN_EN_Pos (31UL)
#define DPPIC_SUBSCRIBE_CHG_EN_EN_Msk (0x1UL << DPPIC_SUBSCRIBE_CHG_EN_EN_Pos)
#define DPPIC_SUBSCRIBE_CHG_EN_EN_Disabled (0x0UL)
#define DPPIC_SUBSCRIBE_CHG_EN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task CHG[n].EN will subscribe to */
#define DPPIC_SUBSCRIBE_CHG_EN_CHIDX_Pos (0UL)
#define DPPIC_SUBSCRIBE_CHG_EN_CHIDX_Msk (0xFFUL << DPPIC_SUBSCRIBE_CHG_EN_CHIDX_Pos)

/* Register: DPPIC_SUBSCRIBE_CHG_DIS */
/* Description: Description cluster: Subscribe configuration for task CHG[n].DIS */

/* Bit 31 :   */
#define DPPIC_SUBSCRIBE_CHG_DIS_EN_Pos (31UL)
#define DPPIC_SUBSCRIBE_CHG_DIS_EN_Msk (0x1UL << DPPIC_SUBSCRIBE_CHG_DIS_EN_Pos)
#define DPPIC_SUBSCRIBE_CHG_DIS_EN_Disabled (0x0UL)
#define DPPIC_SUBSCRIBE_CHG_DIS_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task CHG[n].DIS will subscribe to */
#define DPPIC_SUBSCRIBE_CHG_DIS_CHIDX_Pos (0UL)
#define DPPIC_SUBSCRIBE_CHG_DIS_CHIDX_Msk (0xFFUL << DPPIC_SUBSCRIBE_CHG_DIS_CHIDX_Pos)

/* Register: DPPIC_CHEN */
/* Description: Channel enable register */

/* Bit 31 : Enable or disable channel 31 */
#define DPPIC_CHEN_CH31_Pos (31UL)
#define DPPIC_CHEN_CH31_Msk (0x1UL << DPPIC_CHEN_CH31_Pos)
#define DPPIC_CHEN_CH31_Disabled (0x0UL)
#define DPPIC_CHEN_CH31_Enabled (0x1UL)

/* Bit 30 : Enable or disable channel 30 */
#define DPPIC_CHEN_CH30_Pos (30UL)
#define DPPIC_CHEN_CH30_Msk (0x1UL << DPPIC_CHEN_CH30_Pos)
#define DPPIC_CHEN_CH30_Disabled (0x0UL)
#define DPPIC_CHEN_CH30_Enabled (0x1UL)

/* Bit 29 : Enable or disable channel 29 */
#define DPPIC_CHEN_CH29_Pos (29UL)
#define DPPIC_CHEN_CH29_Msk (0x1UL << DPPIC_CHEN_CH29_Pos)
#define DPPIC_CHEN_CH29_Disabled (0x0UL)
#define DPPIC_CHEN_CH29_Enabled (0x1UL)

/* Bit 28 : Enable or disable channel 28 */
#define DPPIC_CHEN_CH28_Pos (28UL)
#define DPPIC_CHEN_CH28_Msk (0x1UL << DPPIC_CHEN_CH28_Pos)
#define DPPIC_CHEN_CH28_Disabled (0x0UL)
#define DPPIC_CHEN_CH28_Enabled (0x1UL)

/* Bit 27 : Enable or disable channel 27 */
#define DPPIC_CHEN_CH27_Pos (27UL)
#define DPPIC_CHEN_CH27_Msk (0x1UL << DPPIC_CHEN_CH27_Pos)
#define DPPIC_CHEN_CH27_Disabled (0x0UL)
#define DPPIC_CHEN_CH27_Enabled (0x1UL)

/* Bit 26 : Enable or disable channel 26 */
#define DPPIC_CHEN_CH26_Pos (26UL)
#define DPPIC_CHEN_CH26_Msk (0x1UL << DPPIC_CHEN_CH26_Pos)
#define DPPIC_CHEN_CH26_Disabled (0x0UL)
#define DPPIC_CHEN_CH26_Enabled (0x1UL)

/* Bit 25 : Enable or disable channel 25 */
#define DPPIC_CHEN_CH25_Pos (25UL)
#define DPPIC_CHEN_CH25_Msk (0x1UL << DPPIC_CHEN_CH25_Pos)
#define DPPIC_CHEN_CH25_Disabled (0x0UL)
#define DPPIC_CHEN_CH25_Enabled (0x1UL)

/* Bit 24 : Enable or disable channel 24 */
#define DPPIC_CHEN_CH24_Pos (24UL)
#define DPPIC_CHEN_CH24_Msk (0x1UL << DPPIC_CHEN_CH24_Pos)
#define DPPIC_CHEN_CH24_Disabled (0x0UL)
#define DPPIC_CHEN_CH24_Enabled (0x1UL)

/* Bit 23 : Enable or disable channel 23 */
#define DPPIC_CHEN_CH23_Pos (23UL)
#define DPPIC_CHEN_CH23_Msk (0x1UL << DPPIC_CHEN_CH23_Pos)
#define DPPIC_CHEN_CH23_Disabled (0x0UL)
#define DPPIC_CHEN_CH23_Enabled (0x1UL)

/* Bit 22 : Enable or disable channel 22 */
#define DPPIC_CHEN_CH22_Pos (22UL)
#define DPPIC_CHEN_CH22_Msk (0x1UL << DPPIC_CHEN_CH22_Pos)
#define DPPIC_CHEN_CH22_Disabled (0x0UL)
#define DPPIC_CHEN_CH22_Enabled (0x1UL)

/* Bit 21 : Enable or disable channel 21 */
#define DPPIC_CHEN_CH21_Pos (21UL)
#define DPPIC_CHEN_CH21_Msk (0x1UL << DPPIC_CHEN_CH21_Pos)
#define DPPIC_CHEN_CH21_Disabled (0x0UL)
#define DPPIC_CHEN_CH21_Enabled (0x1UL)

/* Bit 20 : Enable or disable channel 20 */
#define DPPIC_CHEN_CH20_Pos (20UL)
#define DPPIC_CHEN_CH20_Msk (0x1UL << DPPIC_CHEN_CH20_Pos)
#define DPPIC_CHEN_CH20_Disabled (0x0UL)
#define DPPIC_CHEN_CH20_Enabled (0x1UL)

/* Bit 19 : Enable or disable channel 19 */
#define DPPIC_CHEN_CH19_Pos (19UL)
#define DPPIC_CHEN_CH19_Msk (0x1UL << DPPIC_CHEN_CH19_Pos)
#define DPPIC_CHEN_CH19_Disabled (0x0UL)
#define DPPIC_CHEN_CH19_Enabled (0x1UL)

/* Bit 18 : Enable or disable channel 18 */
#define DPPIC_CHEN_CH18_Pos (18UL)
#define DPPIC_CHEN_CH18_Msk (0x1UL << DPPIC_CHEN_CH18_Pos)
#define DPPIC_CHEN_CH18_Disabled (0x0UL)
#define DPPIC_CHEN_CH18_Enabled (0x1UL)

/* Bit 17 : Enable or disable channel 17 */
#define DPPIC_CHEN_CH17_Pos (17UL)
#define DPPIC_CHEN_CH17_Msk (0x1UL << DPPIC_CHEN_CH17_Pos)
#define DPPIC_CHEN_CH17_Disabled (0x0UL)
#define DPPIC_CHEN_CH17_Enabled (0x1UL)

/* Bit 16 : Enable or disable channel 16 */
#define DPPIC_CHEN_CH16_Pos (16UL)
#define DPPIC_CHEN_CH16_Msk (0x1UL << DPPIC_CHEN_CH16_Pos)
#define DPPIC_CHEN_CH16_Disabled (0x0UL)
#define DPPIC_CHEN_CH16_Enabled (0x1UL)

/* Bit 15 : Enable or disable channel 15 */
#define DPPIC_CHEN_CH15_Pos (15UL)
#define DPPIC_CHEN_CH15_Msk (0x1UL << DPPIC_CHEN_CH15_Pos)
#define DPPIC_CHEN_CH15_Disabled (0x0UL)
#define DPPIC_CHEN_CH15_Enabled (0x1UL)

/* Bit 14 : Enable or disable channel 14 */
#define DPPIC_CHEN_CH14_Pos (14UL)
#define DPPIC_CHEN_CH14_Msk (0x1UL << DPPIC_CHEN_CH14_Pos)
#define DPPIC_CHEN_CH14_Disabled (0x0UL)
#define DPPIC_CHEN_CH14_Enabled (0x1UL)

/* Bit 13 : Enable or disable channel 13 */
#define DPPIC_CHEN_CH13_Pos (13UL)
#define DPPIC_CHEN_CH13_Msk (0x1UL << DPPIC_CHEN_CH13_Pos)
#define DPPIC_CHEN_CH13_Disabled (0x0UL)
#define DPPIC_CHEN_CH13_Enabled (0x1UL)

/* Bit 12 : Enable or disable channel 12 */
#define DPPIC_CHEN_CH12_Pos (12UL)
#define DPPIC_CHEN_CH12_Msk (0x1UL << DPPIC_CHEN_CH12_Pos)
#define DPPIC_CHEN_CH12_Disabled (0x0UL)
#define DPPIC_CHEN_CH12_Enabled (0x1UL)

/* Bit 11 : Enable or disable channel 11 */
#define DPPIC_CHEN_CH11_Pos (11UL)
#define DPPIC_CHEN_CH11_Msk (0x1UL << DPPIC_CHEN_CH11_Pos)
#define DPPIC_CHEN_CH11_Disabled (0x0UL)
#define DPPIC_CHEN_CH11_Enabled (0x1UL)

/* Bit 10 : Enable or disable channel 10 */
#define DPPIC_CHEN_CH10_Pos (10UL)
#define DPPIC_CHEN_CH10_Msk (0x1UL << DPPIC_CHEN_CH10_Pos)
#define DPPIC_CHEN_CH10_Disabled (0x0UL)
#define DPPIC_CHEN_CH10_Enabled (0x1UL)

/* Bit 9 : Enable or disable channel 9 */
#define DPPIC_CHEN_CH9_Pos (9UL)
#define DPPIC_CHEN_CH9_Msk (0x1UL << DPPIC_CHEN_CH9_Pos)
#define DPPIC_CHEN_CH9_Disabled (0x0UL)
#define DPPIC_CHEN_CH9_Enabled (0x1UL)

/* Bit 8 : Enable or disable channel 8 */
#define DPPIC_CHEN_CH8_Pos (8UL)
#define DPPIC_CHEN_CH8_Msk (0x1UL << DPPIC_CHEN_CH8_Pos)
#define DPPIC_CHEN_CH8_Disabled (0x0UL)
#define DPPIC_CHEN_CH8_Enabled (0x1UL)

/* Bit 7 : Enable or disable channel 7 */
#define DPPIC_CHEN_CH7_Pos (7UL)
#define DPPIC_CHEN_CH7_Msk (0x1UL << DPPIC_CHEN_CH7_Pos)
#define DPPIC_CHEN_CH7_Disabled (0x0UL)
#define DPPIC_CHEN_CH7_Enabled (0x1UL)

/* Bit 6 : Enable or disable channel 6 */
#define DPPIC_CHEN_CH6_Pos (6UL)
#define DPPIC_CHEN_CH6_Msk (0x1UL << DPPIC_CHEN_CH6_Pos)
#define DPPIC_CHEN_CH6_Disabled (0x0UL)
#define DPPIC_CHEN_CH6_Enabled (0x1UL)

/* Bit 5 : Enable or disable channel 5 */
#define DPPIC_CHEN_CH5_Pos (5UL)
#define DPPIC_CHEN_CH5_Msk (0x1UL << DPPIC_CHEN_CH5_Pos)
#define DPPIC_CHEN_CH5_Disabled (0x0UL)
#define DPPIC_CHEN_CH5_Enabled (0x1UL)

/* Bit 4 : Enable or disable channel 4 */
#define DPPIC_CHEN_CH4_Pos (4UL)
#define DPPIC_CHEN_CH4_Msk (0x1UL << DPPIC_CHEN_CH4_Pos)
#define DPPIC_CHEN_CH4_Disabled (0x0UL)
#define DPPIC_CHEN_CH4_Enabled (0x1UL)

/* Bit 3 : Enable or disable channel 3 */
#define DPPIC_CHEN_CH3_Pos (3UL)
#define DPPIC_CHEN_CH3_Msk (0x1UL << DPPIC_CHEN_CH3_Pos)
#define DPPIC_CHEN_CH3_Disabled (0x0UL)
#define DPPIC_CHEN_CH3_Enabled (0x1UL)

/* Bit 2 : Enable or disable channel 2 */
#define DPPIC_CHEN_CH2_Pos (2UL)
#define DPPIC_CHEN_CH2_Msk (0x1UL << DPPIC_CHEN_CH2_Pos)
#define DPPIC_CHEN_CH2_Disabled (0x0UL)
#define DPPIC_CHEN_CH2_Enabled (0x1UL)

/* Bit 1 : Enable or disable channel 1 */
#define DPPIC_CHEN_CH1_Pos (1UL)
#define DPPIC_CHEN_CH1_Msk (0x1UL << DPPIC_CHEN_CH1_Pos)
#define DPPIC_CHEN_CH1_Disabled (0x0UL)
#define DPPIC_CHEN_CH1_Enabled (0x1UL)

/* Bit 0 : Enable or disable channel 0 */
#define DPPIC_CHEN_CH0_Pos (0UL)
#define DPPIC_CHEN_CH0_Msk (0x1UL << DPPIC_CHEN_CH0_Pos)
#define DPPIC_CHEN_CH0_Disabled (0x0UL)
#define DPPIC_CHEN_CH0_Enabled (0x1UL)

/* Register: DPPIC_CHENSET */
/* Description: Channel enable set register */

/* Bit 31 : Channel 31 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH31_Pos (31UL)
#define DPPIC_CHENSET_CH31_Msk (0x1UL << DPPIC_CHENSET_CH31_Pos)
#define DPPIC_CHENSET_CH31_Disabled (0x0UL)
#define DPPIC_CHENSET_CH31_Enabled (0x1UL)
#define DPPIC_CHENSET_CH31_Set (0x1UL)

/* Bit 30 : Channel 30 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH30_Pos (30UL)
#define DPPIC_CHENSET_CH30_Msk (0x1UL << DPPIC_CHENSET_CH30_Pos)
#define DPPIC_CHENSET_CH30_Disabled (0x0UL)
#define DPPIC_CHENSET_CH30_Enabled (0x1UL)
#define DPPIC_CHENSET_CH30_Set (0x1UL)

/* Bit 29 : Channel 29 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH29_Pos (29UL)
#define DPPIC_CHENSET_CH29_Msk (0x1UL << DPPIC_CHENSET_CH29_Pos)
#define DPPIC_CHENSET_CH29_Disabled (0x0UL)
#define DPPIC_CHENSET_CH29_Enabled (0x1UL)
#define DPPIC_CHENSET_CH29_Set (0x1UL)

/* Bit 28 : Channel 28 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH28_Pos (28UL)
#define DPPIC_CHENSET_CH28_Msk (0x1UL << DPPIC_CHENSET_CH28_Pos)
#define DPPIC_CHENSET_CH28_Disabled (0x0UL)
#define DPPIC_CHENSET_CH28_Enabled (0x1UL)
#define DPPIC_CHENSET_CH28_Set (0x1UL)

/* Bit 27 : Channel 27 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH27_Pos (27UL)
#define DPPIC_CHENSET_CH27_Msk (0x1UL << DPPIC_CHENSET_CH27_Pos)
#define DPPIC_CHENSET_CH27_Disabled (0x0UL)
#define DPPIC_CHENSET_CH27_Enabled (0x1UL)
#define DPPIC_CHENSET_CH27_Set (0x1UL)

/* Bit 26 : Channel 26 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH26_Pos (26UL)
#define DPPIC_CHENSET_CH26_Msk (0x1UL << DPPIC_CHENSET_CH26_Pos)
#define DPPIC_CHENSET_CH26_Disabled (0x0UL)
#define DPPIC_CHENSET_CH26_Enabled (0x1UL)
#define DPPIC_CHENSET_CH26_Set (0x1UL)

/* Bit 25 : Channel 25 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH25_Pos (25UL)
#define DPPIC_CHENSET_CH25_Msk (0x1UL << DPPIC_CHENSET_CH25_Pos)
#define DPPIC_CHENSET_CH25_Disabled (0x0UL)
#define DPPIC_CHENSET_CH25_Enabled (0x1UL)
#define DPPIC_CHENSET_CH25_Set (0x1UL)

/* Bit 24 : Channel 24 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH24_Pos (24UL)
#define DPPIC_CHENSET_CH24_Msk (0x1UL << DPPIC_CHENSET_CH24_Pos)
#define DPPIC_CHENSET_CH24_Disabled (0x0UL)
#define DPPIC_CHENSET_CH24_Enabled (0x1UL)
#define DPPIC_CHENSET_CH24_Set (0x1UL)

/* Bit 23 : Channel 23 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH23_Pos (23UL)
#define DPPIC_CHENSET_CH23_Msk (0x1UL << DPPIC_CHENSET_CH23_Pos)
#define DPPIC_CHENSET_CH23_Disabled (0x0UL)
#define DPPIC_CHENSET_CH23_Enabled (0x1UL)
#define DPPIC_CHENSET_CH23_Set (0x1UL)

/* Bit 22 : Channel 22 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH22_Pos (22UL)
#define DPPIC_CHENSET_CH22_Msk (0x1UL << DPPIC_CHENSET_CH22_Pos)
#define DPPIC_CHENSET_CH22_Disabled (0x0UL)
#define DPPIC_CHENSET_CH22_Enabled (0x1UL)
#define DPPIC_CHENSET_CH22_Set (0x1UL)

/* Bit 21 : Channel 21 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH21_Pos (21UL)
#define DPPIC_CHENSET_CH21_Msk (0x1UL << DPPIC_CHENSET_CH21_Pos)
#define DPPIC_CHENSET_CH21_Disabled (0x0UL)
#define DPPIC_CHENSET_CH21_Enabled (0x1UL)
#define DPPIC_CHENSET_CH21_Set (0x1UL)

/* Bit 20 : Channel 20 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH20_Pos (20UL)
#define DPPIC_CHENSET_CH20_Msk (0x1UL << DPPIC_CHENSET_CH20_Pos)
#define DPPIC_CHENSET_CH20_Disabled (0x0UL)
#define DPPIC_CHENSET_CH20_Enabled (0x1UL)
#define DPPIC_CHENSET_CH20_Set (0x1UL)

/* Bit 19 : Channel 19 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH19_Pos (19UL)
#define DPPIC_CHENSET_CH19_Msk (0x1UL << DPPIC_CHENSET_CH19_Pos)
#define DPPIC_CHENSET_CH19_Disabled (0x0UL)
#define DPPIC_CHENSET_CH19_Enabled (0x1UL)
#define DPPIC_CHENSET_CH19_Set (0x1UL)

/* Bit 18 : Channel 18 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH18_Pos (18UL)
#define DPPIC_CHENSET_CH18_Msk (0x1UL << DPPIC_CHENSET_CH18_Pos)
#define DPPIC_CHENSET_CH18_Disabled (0x0UL)
#define DPPIC_CHENSET_CH18_Enabled (0x1UL)
#define DPPIC_CHENSET_CH18_Set (0x1UL)

/* Bit 17 : Channel 17 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH17_Pos (17UL)
#define DPPIC_CHENSET_CH17_Msk (0x1UL << DPPIC_CHENSET_CH17_Pos)
#define DPPIC_CHENSET_CH17_Disabled (0x0UL)
#define DPPIC_CHENSET_CH17_Enabled (0x1UL)
#define DPPIC_CHENSET_CH17_Set (0x1UL)

/* Bit 16 : Channel 16 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH16_Pos (16UL)
#define DPPIC_CHENSET_CH16_Msk (0x1UL << DPPIC_CHENSET_CH16_Pos)
#define DPPIC_CHENSET_CH16_Disabled (0x0UL)
#define DPPIC_CHENSET_CH16_Enabled (0x1UL)
#define DPPIC_CHENSET_CH16_Set (0x1UL)

/* Bit 15 : Channel 15 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH15_Pos (15UL)
#define DPPIC_CHENSET_CH15_Msk (0x1UL << DPPIC_CHENSET_CH15_Pos)
#define DPPIC_CHENSET_CH15_Disabled (0x0UL)
#define DPPIC_CHENSET_CH15_Enabled (0x1UL)
#define DPPIC_CHENSET_CH15_Set (0x1UL)

/* Bit 14 : Channel 14 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH14_Pos (14UL)
#define DPPIC_CHENSET_CH14_Msk (0x1UL << DPPIC_CHENSET_CH14_Pos)
#define DPPIC_CHENSET_CH14_Disabled (0x0UL)
#define DPPIC_CHENSET_CH14_Enabled (0x1UL)
#define DPPIC_CHENSET_CH14_Set (0x1UL)

/* Bit 13 : Channel 13 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH13_Pos (13UL)
#define DPPIC_CHENSET_CH13_Msk (0x1UL << DPPIC_CHENSET_CH13_Pos)
#define DPPIC_CHENSET_CH13_Disabled (0x0UL)
#define DPPIC_CHENSET_CH13_Enabled (0x1UL)
#define DPPIC_CHENSET_CH13_Set (0x1UL)

/* Bit 12 : Channel 12 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH12_Pos (12UL)
#define DPPIC_CHENSET_CH12_Msk (0x1UL << DPPIC_CHENSET_CH12_Pos)
#define DPPIC_CHENSET_CH12_Disabled (0x0UL)
#define DPPIC_CHENSET_CH12_Enabled (0x1UL)
#define DPPIC_CHENSET_CH12_Set (0x1UL)

/* Bit 11 : Channel 11 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH11_Pos (11UL)
#define DPPIC_CHENSET_CH11_Msk (0x1UL << DPPIC_CHENSET_CH11_Pos)
#define DPPIC_CHENSET_CH11_Disabled (0x0UL)
#define DPPIC_CHENSET_CH11_Enabled (0x1UL)
#define DPPIC_CHENSET_CH11_Set (0x1UL)

/* Bit 10 : Channel 10 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH10_Pos (10UL)
#define DPPIC_CHENSET_CH10_Msk (0x1UL << DPPIC_CHENSET_CH10_Pos)
#define DPPIC_CHENSET_CH10_Disabled (0x0UL)
#define DPPIC_CHENSET_CH10_Enabled (0x1UL)
#define DPPIC_CHENSET_CH10_Set (0x1UL)

/* Bit 9 : Channel 9 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH9_Pos (9UL)
#define DPPIC_CHENSET_CH9_Msk (0x1UL << DPPIC_CHENSET_CH9_Pos)
#define DPPIC_CHENSET_CH9_Disabled (0x0UL)
#define DPPIC_CHENSET_CH9_Enabled (0x1UL)
#define DPPIC_CHENSET_CH9_Set (0x1UL)

/* Bit 8 : Channel 8 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH8_Pos (8UL)
#define DPPIC_CHENSET_CH8_Msk (0x1UL << DPPIC_CHENSET_CH8_Pos)
#define DPPIC_CHENSET_CH8_Disabled (0x0UL)
#define DPPIC_CHENSET_CH8_Enabled (0x1UL)
#define DPPIC_CHENSET_CH8_Set (0x1UL)

/* Bit 7 : Channel 7 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH7_Pos (7UL)
#define DPPIC_CHENSET_CH7_Msk (0x1UL << DPPIC_CHENSET_CH7_Pos)
#define DPPIC_CHENSET_CH7_Disabled (0x0UL)
#define DPPIC_CHENSET_CH7_Enabled (0x1UL)
#define DPPIC_CHENSET_CH7_Set (0x1UL)

/* Bit 6 : Channel 6 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH6_Pos (6UL)
#define DPPIC_CHENSET_CH6_Msk (0x1UL << DPPIC_CHENSET_CH6_Pos)
#define DPPIC_CHENSET_CH6_Disabled (0x0UL)
#define DPPIC_CHENSET_CH6_Enabled (0x1UL)
#define DPPIC_CHENSET_CH6_Set (0x1UL)

/* Bit 5 : Channel 5 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH5_Pos (5UL)
#define DPPIC_CHENSET_CH5_Msk (0x1UL << DPPIC_CHENSET_CH5_Pos)
#define DPPIC_CHENSET_CH5_Disabled (0x0UL)
#define DPPIC_CHENSET_CH5_Enabled (0x1UL)
#define DPPIC_CHENSET_CH5_Set (0x1UL)

/* Bit 4 : Channel 4 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH4_Pos (4UL)
#define DPPIC_CHENSET_CH4_Msk (0x1UL << DPPIC_CHENSET_CH4_Pos)
#define DPPIC_CHENSET_CH4_Disabled (0x0UL)
#define DPPIC_CHENSET_CH4_Enabled (0x1UL)
#define DPPIC_CHENSET_CH4_Set (0x1UL)

/* Bit 3 : Channel 3 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH3_Pos (3UL)
#define DPPIC_CHENSET_CH3_Msk (0x1UL << DPPIC_CHENSET_CH3_Pos)
#define DPPIC_CHENSET_CH3_Disabled (0x0UL)
#define DPPIC_CHENSET_CH3_Enabled (0x1UL)
#define DPPIC_CHENSET_CH3_Set (0x1UL)

/* Bit 2 : Channel 2 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH2_Pos (2UL)
#define DPPIC_CHENSET_CH2_Msk (0x1UL << DPPIC_CHENSET_CH2_Pos)
#define DPPIC_CHENSET_CH2_Disabled (0x0UL)
#define DPPIC_CHENSET_CH2_Enabled (0x1UL)
#define DPPIC_CHENSET_CH2_Set (0x1UL)

/* Bit 1 : Channel 1 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH1_Pos (1UL)
#define DPPIC_CHENSET_CH1_Msk (0x1UL << DPPIC_CHENSET_CH1_Pos)
#define DPPIC_CHENSET_CH1_Disabled (0x0UL)
#define DPPIC_CHENSET_CH1_Enabled (0x1UL)
#define DPPIC_CHENSET_CH1_Set (0x1UL)

/* Bit 0 : Channel 0 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH0_Pos (0UL)
#define DPPIC_CHENSET_CH0_Msk (0x1UL << DPPIC_CHENSET_CH0_Pos)
#define DPPIC_CHENSET_CH0_Disabled (0x0UL)
#define DPPIC_CHENSET_CH0_Enabled (0x1UL)
#define DPPIC_CHENSET_CH0_Set (0x1UL)

/* Register: DPPIC_CHENCLR */
/* Description: Channel enable clear register */

/* Bit 31 : Channel 31 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH31_Pos (31UL)
#define DPPIC_CHENCLR_CH31_Msk (0x1UL << DPPIC_CHENCLR_CH31_Pos)
#define DPPIC_CHENCLR_CH31_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH31_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH31_Clear (0x1UL)

/* Bit 30 : Channel 30 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH30_Pos (30UL)
#define DPPIC_CHENCLR_CH30_Msk (0x1UL << DPPIC_CHENCLR_CH30_Pos)
#define DPPIC_CHENCLR_CH30_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH30_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH30_Clear (0x1UL)

/* Bit 29 : Channel 29 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH29_Pos (29UL)
#define DPPIC_CHENCLR_CH29_Msk (0x1UL << DPPIC_CHENCLR_CH29_Pos)
#define DPPIC_CHENCLR_CH29_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH29_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH29_Clear (0x1UL)

/* Bit 28 : Channel 28 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH28_Pos (28UL)
#define DPPIC_CHENCLR_CH28_Msk (0x1UL << DPPIC_CHENCLR_CH28_Pos)
#define DPPIC_CHENCLR_CH28_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH28_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH28_Clear (0x1UL)

/* Bit 27 : Channel 27 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH27_Pos (27UL)
#define DPPIC_CHENCLR_CH27_Msk (0x1UL << DPPIC_CHENCLR_CH27_Pos)
#define DPPIC_CHENCLR_CH27_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH27_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH27_Clear (0x1UL)

/* Bit 26 : Channel 26 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH26_Pos (26UL)
#define DPPIC_CHENCLR_CH26_Msk (0x1UL << DPPIC_CHENCLR_CH26_Pos)
#define DPPIC_CHENCLR_CH26_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH26_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH26_Clear (0x1UL)

/* Bit 25 : Channel 25 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH25_Pos (25UL)
#define DPPIC_CHENCLR_CH25_Msk (0x1UL << DPPIC_CHENCLR_CH25_Pos)
#define DPPIC_CHENCLR_CH25_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH25_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH25_Clear (0x1UL)

/* Bit 24 : Channel 24 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH24_Pos (24UL)
#define DPPIC_CHENCLR_CH24_Msk (0x1UL << DPPIC_CHENCLR_CH24_Pos)
#define DPPIC_CHENCLR_CH24_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH24_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH24_Clear (0x1UL)

/* Bit 23 : Channel 23 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH23_Pos (23UL)
#define DPPIC_CHENCLR_CH23_Msk (0x1UL << DPPIC_CHENCLR_CH23_Pos)
#define DPPIC_CHENCLR_CH23_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH23_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH23_Clear (0x1UL)

/* Bit 22 : Channel 22 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH22_Pos (22UL)
#define DPPIC_CHENCLR_CH22_Msk (0x1UL << DPPIC_CHENCLR_CH22_Pos)
#define DPPIC_CHENCLR_CH22_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH22_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH22_Clear (0x1UL)

/* Bit 21 : Channel 21 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH21_Pos (21UL)
#define DPPIC_CHENCLR_CH21_Msk (0x1UL << DPPIC_CHENCLR_CH21_Pos)
#define DPPIC_CHENCLR_CH21_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH21_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH21_Clear (0x1UL)

/* Bit 20 : Channel 20 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH20_Pos (20UL)
#define DPPIC_CHENCLR_CH20_Msk (0x1UL << DPPIC_CHENCLR_CH20_Pos)
#define DPPIC_CHENCLR_CH20_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH20_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH20_Clear (0x1UL)

/* Bit 19 : Channel 19 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH19_Pos (19UL)
#define DPPIC_CHENCLR_CH19_Msk (0x1UL << DPPIC_CHENCLR_CH19_Pos)
#define DPPIC_CHENCLR_CH19_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH19_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH19_Clear (0x1UL)

/* Bit 18 : Channel 18 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH18_Pos (18UL)
#define DPPIC_CHENCLR_CH18_Msk (0x1UL << DPPIC_CHENCLR_CH18_Pos)
#define DPPIC_CHENCLR_CH18_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH18_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH18_Clear (0x1UL)

/* Bit 17 : Channel 17 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH17_Pos (17UL)
#define DPPIC_CHENCLR_CH17_Msk (0x1UL << DPPIC_CHENCLR_CH17_Pos)
#define DPPIC_CHENCLR_CH17_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH17_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH17_Clear (0x1UL)

/* Bit 16 : Channel 16 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH16_Pos (16UL)
#define DPPIC_CHENCLR_CH16_Msk (0x1UL << DPPIC_CHENCLR_CH16_Pos)
#define DPPIC_CHENCLR_CH16_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH16_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH16_Clear (0x1UL)

/* Bit 15 : Channel 15 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH15_Pos (15UL)
#define DPPIC_CHENCLR_CH15_Msk (0x1UL << DPPIC_CHENCLR_CH15_Pos)
#define DPPIC_CHENCLR_CH15_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH15_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH15_Clear (0x1UL)

/* Bit 14 : Channel 14 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH14_Pos (14UL)
#define DPPIC_CHENCLR_CH14_Msk (0x1UL << DPPIC_CHENCLR_CH14_Pos)
#define DPPIC_CHENCLR_CH14_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH14_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH14_Clear (0x1UL)

/* Bit 13 : Channel 13 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH13_Pos (13UL)
#define DPPIC_CHENCLR_CH13_Msk (0x1UL << DPPIC_CHENCLR_CH13_Pos)
#define DPPIC_CHENCLR_CH13_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH13_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH13_Clear (0x1UL)

/* Bit 12 : Channel 12 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH12_Pos (12UL)
#define DPPIC_CHENCLR_CH12_Msk (0x1UL << DPPIC_CHENCLR_CH12_Pos)
#define DPPIC_CHENCLR_CH12_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH12_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH12_Clear (0x1UL)

/* Bit 11 : Channel 11 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH11_Pos (11UL)
#define DPPIC_CHENCLR_CH11_Msk (0x1UL << DPPIC_CHENCLR_CH11_Pos)
#define DPPIC_CHENCLR_CH11_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH11_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH11_Clear (0x1UL)

/* Bit 10 : Channel 10 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH10_Pos (10UL)
#define DPPIC_CHENCLR_CH10_Msk (0x1UL << DPPIC_CHENCLR_CH10_Pos)
#define DPPIC_CHENCLR_CH10_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH10_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH10_Clear (0x1UL)

/* Bit 9 : Channel 9 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH9_Pos (9UL)
#define DPPIC_CHENCLR_CH9_Msk (0x1UL << DPPIC_CHENCLR_CH9_Pos)
#define DPPIC_CHENCLR_CH9_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH9_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH9_Clear (0x1UL)

/* Bit 8 : Channel 8 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH8_Pos (8UL)
#define DPPIC_CHENCLR_CH8_Msk (0x1UL << DPPIC_CHENCLR_CH8_Pos)
#define DPPIC_CHENCLR_CH8_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH8_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH8_Clear (0x1UL)

/* Bit 7 : Channel 7 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH7_Pos (7UL)
#define DPPIC_CHENCLR_CH7_Msk (0x1UL << DPPIC_CHENCLR_CH7_Pos)
#define DPPIC_CHENCLR_CH7_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH7_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH7_Clear (0x1UL)

/* Bit 6 : Channel 6 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH6_Pos (6UL)
#define DPPIC_CHENCLR_CH6_Msk (0x1UL << DPPIC_CHENCLR_CH6_Pos)
#define DPPIC_CHENCLR_CH6_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH6_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH6_Clear (0x1UL)

/* Bit 5 : Channel 5 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH5_Pos (5UL)
#define DPPIC_CHENCLR_CH5_Msk (0x1UL << DPPIC_CHENCLR_CH5_Pos)
#define DPPIC_CHENCLR_CH5_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH5_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH5_Clear (0x1UL)

/* Bit 4 : Channel 4 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH4_Pos (4UL)
#define DPPIC_CHENCLR_CH4_Msk (0x1UL << DPPIC_CHENCLR_CH4_Pos)
#define DPPIC_CHENCLR_CH4_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH4_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH4_Clear (0x1UL)

/* Bit 3 : Channel 3 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH3_Pos (3UL)
#define DPPIC_CHENCLR_CH3_Msk (0x1UL << DPPIC_CHENCLR_CH3_Pos)
#define DPPIC_CHENCLR_CH3_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH3_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH3_Clear (0x1UL)

/* Bit 2 : Channel 2 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH2_Pos (2UL)
#define DPPIC_CHENCLR_CH2_Msk (0x1UL << DPPIC_CHENCLR_CH2_Pos)
#define DPPIC_CHENCLR_CH2_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH2_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH2_Clear (0x1UL)

/* Bit 1 : Channel 1 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH1_Pos (1UL)
#define DPPIC_CHENCLR_CH1_Msk (0x1UL << DPPIC_CHENCLR_CH1_Pos)
#define DPPIC_CHENCLR_CH1_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH1_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH1_Clear (0x1UL)

/* Bit 0 : Channel 0 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH0_Pos (0UL)
#define DPPIC_CHENCLR_CH0_Msk (0x1UL << DPPIC_CHENCLR_CH0_Pos)
#define DPPIC_CHENCLR_CH0_Disabled (0x0UL)
#define DPPIC_CHENCLR_CH0_Enabled (0x1UL)
#define DPPIC_CHENCLR_CH0_Clear (0x1UL)

/* Register: DPPIC_CHG */
/* Description: Description collection: Channel group n Note: Writes to this register are ignored if either SUBSCRIBE_CHG[n].EN or SUBSCRIBE_CHG[n].DIS is enabled */

/* Bit 31 : Include or exclude channel 31 */
#define DPPIC_CHG_CH31_Pos (31UL)
#define DPPIC_CHG_CH31_Msk (0x1UL << DPPIC_CHG_CH31_Pos)
#define DPPIC_CHG_CH31_Excluded (0x0UL)
#define DPPIC_CHG_CH31_Included (0x1UL)

/* Bit 30 : Include or exclude channel 30 */
#define DPPIC_CHG_CH30_Pos (30UL)
#define DPPIC_CHG_CH30_Msk (0x1UL << DPPIC_CHG_CH30_Pos)
#define DPPIC_CHG_CH30_Excluded (0x0UL)
#define DPPIC_CHG_CH30_Included (0x1UL)

/* Bit 29 : Include or exclude channel 29 */
#define DPPIC_CHG_CH29_Pos (29UL)
#define DPPIC_CHG_CH29_Msk (0x1UL << DPPIC_CHG_CH29_Pos)
#define DPPIC_CHG_CH29_Excluded (0x0UL)
#define DPPIC_CHG_CH29_Included (0x1UL)

/* Bit 28 : Include or exclude channel 28 */
#define DPPIC_CHG_CH28_Pos (28UL)
#define DPPIC_CHG_CH28_Msk (0x1UL << DPPIC_CHG_CH28_Pos)
#define DPPIC_CHG_CH28_Excluded (0x0UL)
#define DPPIC_CHG_CH28_Included (0x1UL)

/* Bit 27 : Include or exclude channel 27 */
#define DPPIC_CHG_CH27_Pos (27UL)
#define DPPIC_CHG_CH27_Msk (0x1UL << DPPIC_CHG_CH27_Pos)
#define DPPIC_CHG_CH27_Excluded (0x0UL)
#define DPPIC_CHG_CH27_Included (0x1UL)

/* Bit 26 : Include or exclude channel 26 */
#define DPPIC_CHG_CH26_Pos (26UL)
#define DPPIC_CHG_CH26_Msk (0x1UL << DPPIC_CHG_CH26_Pos)
#define DPPIC_CHG_CH26_Excluded (0x0UL)
#define DPPIC_CHG_CH26_Included (0x1UL)

/* Bit 25 : Include or exclude channel 25 */
#define DPPIC_CHG_CH25_Pos (25UL)
#define DPPIC_CHG_CH25_Msk (0x1UL << DPPIC_CHG_CH25_Pos)
#define DPPIC_CHG_CH25_Excluded (0x0UL)
#define DPPIC_CHG_CH25_Included (0x1UL)

/* Bit 24 : Include or exclude channel 24 */
#define DPPIC_CHG_CH24_Pos (24UL)
#define DPPIC_CHG_CH24_Msk (0x1UL << DPPIC_CHG_CH24_Pos)
#define DPPIC_CHG_CH24_Excluded (0x0UL)
#define DPPIC_CHG_CH24_Included (0x1UL)

/* Bit 23 : Include or exclude channel 23 */
#define DPPIC_CHG_CH23_Pos (23UL)
#define DPPIC_CHG_CH23_Msk (0x1UL << DPPIC_CHG_CH23_Pos)
#define DPPIC_CHG_CH23_Excluded (0x0UL)
#define DPPIC_CHG_CH23_Included (0x1UL)

/* Bit 22 : Include or exclude channel 22 */
#define DPPIC_CHG_CH22_Pos (22UL)
#define DPPIC_CHG_CH22_Msk (0x1UL << DPPIC_CHG_CH22_Pos)
#define DPPIC_CHG_CH22_Excluded (0x0UL)
#define DPPIC_CHG_CH22_Included (0x1UL)

/* Bit 21 : Include or exclude channel 21 */
#define DPPIC_CHG_CH21_Pos (21UL)
#define DPPIC_CHG_CH21_Msk (0x1UL << DPPIC_CHG_CH21_Pos)
#define DPPIC_CHG_CH21_Excluded (0x0UL)
#define DPPIC_CHG_CH21_Included (0x1UL)

/* Bit 20 : Include or exclude channel 20 */
#define DPPIC_CHG_CH20_Pos (20UL)
#define DPPIC_CHG_CH20_Msk (0x1UL << DPPIC_CHG_CH20_Pos)
#define DPPIC_CHG_CH20_Excluded (0x0UL)
#define DPPIC_CHG_CH20_Included (0x1UL)

/* Bit 19 : Include or exclude channel 19 */
#define DPPIC_CHG_CH19_Pos (19UL)
#define DPPIC_CHG_CH19_Msk (0x1UL << DPPIC_CHG_CH19_Pos)
#define DPPIC_CHG_CH19_Excluded (0x0UL)
#define DPPIC_CHG_CH19_Included (0x1UL)

/* Bit 18 : Include or exclude channel 18 */
#define DPPIC_CHG_CH18_Pos (18UL)
#define DPPIC_CHG_CH18_Msk (0x1UL << DPPIC_CHG_CH18_Pos)
#define DPPIC_CHG_CH18_Excluded (0x0UL)
#define DPPIC_CHG_CH18_Included (0x1UL)

/* Bit 17 : Include or exclude channel 17 */
#define DPPIC_CHG_CH17_Pos (17UL)
#define DPPIC_CHG_CH17_Msk (0x1UL << DPPIC_CHG_CH17_Pos)
#define DPPIC_CHG_CH17_Excluded (0x0UL)
#define DPPIC_CHG_CH17_Included (0x1UL)

/* Bit 16 : Include or exclude channel 16 */
#define DPPIC_CHG_CH16_Pos (16UL)
#define DPPIC_CHG_CH16_Msk (0x1UL << DPPIC_CHG_CH16_Pos)
#define DPPIC_CHG_CH16_Excluded (0x0UL)
#define DPPIC_CHG_CH16_Included (0x1UL)

/* Bit 15 : Include or exclude channel 15 */
#define DPPIC_CHG_CH15_Pos (15UL)
#define DPPIC_CHG_CH15_Msk (0x1UL << DPPIC_CHG_CH15_Pos)
#define DPPIC_CHG_CH15_Excluded (0x0UL)
#define DPPIC_CHG_CH15_Included (0x1UL)

/* Bit 14 : Include or exclude channel 14 */
#define DPPIC_CHG_CH14_Pos (14UL)
#define DPPIC_CHG_CH14_Msk (0x1UL << DPPIC_CHG_CH14_Pos)
#define DPPIC_CHG_CH14_Excluded (0x0UL)
#define DPPIC_CHG_CH14_Included (0x1UL)

/* Bit 13 : Include or exclude channel 13 */
#define DPPIC_CHG_CH13_Pos (13UL)
#define DPPIC_CHG_CH13_Msk (0x1UL << DPPIC_CHG_CH13_Pos)
#define DPPIC_CHG_CH13_Excluded (0x0UL)
#define DPPIC_CHG_CH13_Included (0x1UL)

/* Bit 12 : Include or exclude channel 12 */
#define DPPIC_CHG_CH12_Pos (12UL)
#define DPPIC_CHG_CH12_Msk (0x1UL << DPPIC_CHG_CH12_Pos)
#define DPPIC_CHG_CH12_Excluded (0x0UL)
#define DPPIC_CHG_CH12_Included (0x1UL)

/* Bit 11 : Include or exclude channel 11 */
#define DPPIC_CHG_CH11_Pos (11UL)
#define DPPIC_CHG_CH11_Msk (0x1UL << DPPIC_CHG_CH11_Pos)
#define DPPIC_CHG_CH11_Excluded (0x0UL)
#define DPPIC_CHG_CH11_Included (0x1UL)

/* Bit 10 : Include or exclude channel 10 */
#define DPPIC_CHG_CH10_Pos (10UL)
#define DPPIC_CHG_CH10_Msk (0x1UL << DPPIC_CHG_CH10_Pos)
#define DPPIC_CHG_CH10_Excluded (0x0UL)
#define DPPIC_CHG_CH10_Included (0x1UL)

/* Bit 9 : Include or exclude channel 9 */
#define DPPIC_CHG_CH9_Pos (9UL)
#define DPPIC_CHG_CH9_Msk (0x1UL << DPPIC_CHG_CH9_Pos)
#define DPPIC_CHG_CH9_Excluded (0x0UL)
#define DPPIC_CHG_CH9_Included (0x1UL)

/* Bit 8 : Include or exclude channel 8 */
#define DPPIC_CHG_CH8_Pos (8UL)
#define DPPIC_CHG_CH8_Msk (0x1UL << DPPIC_CHG_CH8_Pos)
#define DPPIC_CHG_CH8_Excluded (0x0UL)
#define DPPIC_CHG_CH8_Included (0x1UL)

/* Bit 7 : Include or exclude channel 7 */
#define DPPIC_CHG_CH7_Pos (7UL)
#define DPPIC_CHG_CH7_Msk (0x1UL << DPPIC_CHG_CH7_Pos)
#define DPPIC_CHG_CH7_Excluded (0x0UL)
#define DPPIC_CHG_CH7_Included (0x1UL)

/* Bit 6 : Include or exclude channel 6 */
#define DPPIC_CHG_CH6_Pos (6UL)
#define DPPIC_CHG_CH6_Msk (0x1UL << DPPIC_CHG_CH6_Pos)
#define DPPIC_CHG_CH6_Excluded (0x0UL)
#define DPPIC_CHG_CH6_Included (0x1UL)

/* Bit 5 : Include or exclude channel 5 */
#define DPPIC_CHG_CH5_Pos (5UL)
#define DPPIC_CHG_CH5_Msk (0x1UL << DPPIC_CHG_CH5_Pos)
#define DPPIC_CHG_CH5_Excluded (0x0UL)
#define DPPIC_CHG_CH5_Included (0x1UL)

/* Bit 4 : Include or exclude channel 4 */
#define DPPIC_CHG_CH4_Pos (4UL)
#define DPPIC_CHG_CH4_Msk (0x1UL << DPPIC_CHG_CH4_Pos)
#define DPPIC_CHG_CH4_Excluded (0x0UL)
#define DPPIC_CHG_CH4_Included (0x1UL)

/* Bit 3 : Include or exclude channel 3 */
#define DPPIC_CHG_CH3_Pos (3UL)
#define DPPIC_CHG_CH3_Msk (0x1UL << DPPIC_CHG_CH3_Pos)
#define DPPIC_CHG_CH3_Excluded (0x0UL)
#define DPPIC_CHG_CH3_Included (0x1UL)

/* Bit 2 : Include or exclude channel 2 */
#define DPPIC_CHG_CH2_Pos (2UL)
#define DPPIC_CHG_CH2_Msk (0x1UL << DPPIC_CHG_CH2_Pos)
#define DPPIC_CHG_CH2_Excluded (0x0UL)
#define DPPIC_CHG_CH2_Included (0x1UL)

/* Bit 1 : Include or exclude channel 1 */
#define DPPIC_CHG_CH1_Pos (1UL)
#define DPPIC_CHG_CH1_Msk (0x1UL << DPPIC_CHG_CH1_Pos)
#define DPPIC_CHG_CH1_Excluded (0x0UL)
#define DPPIC_CHG_CH1_Included (0x1UL)

/* Bit 0 : Include or exclude channel 0 */
#define DPPIC_CHG_CH0_Pos (0UL)
#define DPPIC_CHG_CH0_Msk (0x1UL << DPPIC_CHG_CH0_Pos)
#define DPPIC_CHG_CH0_Excluded (0x0UL)
#define DPPIC_CHG_CH0_Included (0x1UL)


/* Peripheral: ECB */
/* Description: AES ECB Mode Encryption */

/* Register: ECB_TASKS_STARTECB */
/* Description: Start ECB block encrypt */

/* Bit 0 : Start ECB block encrypt */
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Pos (0UL)
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Msk (0x1UL << ECB_TASKS_STARTECB_TASKS_STARTECB_Pos)
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Trigger (0x1UL)

/* Register: ECB_TASKS_STOPECB */
/* Description: Abort a possible executing ECB operation */

/* Bit 0 : Abort a possible executing ECB operation */
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Pos (0UL)
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Msk (0x1UL << ECB_TASKS_STOPECB_TASKS_STOPECB_Pos)
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Trigger (0x1UL)

/* Register: ECB_SUBSCRIBE_STARTECB */
/* Description: Subscribe configuration for task STARTECB */

/* Bit 31 :   */
#define ECB_SUBSCRIBE_STARTECB_EN_Pos (31UL)
#define ECB_SUBSCRIBE_STARTECB_EN_Msk (0x1UL << ECB_SUBSCRIBE_STARTECB_EN_Pos)
#define ECB_SUBSCRIBE_STARTECB_EN_Disabled (0x0UL)
#define ECB_SUBSCRIBE_STARTECB_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STARTECB will subscribe to */
#define ECB_SUBSCRIBE_STARTECB_CHIDX_Pos (0UL)
#define ECB_SUBSCRIBE_STARTECB_CHIDX_Msk (0xFFUL << ECB_SUBSCRIBE_STARTECB_CHIDX_Pos)

/* Register: ECB_SUBSCRIBE_STOPECB */
/* Description: Subscribe configuration for task STOPECB */

/* Bit 31 :   */
#define ECB_SUBSCRIBE_STOPECB_EN_Pos (31UL)
#define ECB_SUBSCRIBE_STOPECB_EN_Msk (0x1UL << ECB_SUBSCRIBE_STOPECB_EN_Pos)
#define ECB_SUBSCRIBE_STOPECB_EN_Disabled (0x0UL)
#define ECB_SUBSCRIBE_STOPECB_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOPECB will subscribe to */
#define ECB_SUBSCRIBE_STOPECB_CHIDX_Pos (0UL)
#define ECB_SUBSCRIBE_STOPECB_CHIDX_Msk (0xFFUL << ECB_SUBSCRIBE_STOPECB_CHIDX_Pos)

/* Register: ECB_EVENTS_ENDECB */
/* Description: ECB block encrypt complete */

/* Bit 0 : ECB block encrypt complete */
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Pos (0UL)
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Msk (0x1UL << ECB_EVENTS_ENDECB_EVENTS_ENDECB_Pos)
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_NotGenerated (0x0UL)
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Generated (0x1UL)

/* Register: ECB_EVENTS_ERRORECB */
/* Description: ECB block encrypt aborted because of a STOPECB task or due to an error */

/* Bit 0 : ECB block encrypt aborted because of a STOPECB task or due to an error */
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Pos (0UL)
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Msk (0x1UL << ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Pos)
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_NotGenerated (0x0UL)
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Generated (0x1UL)

/* Register: ECB_PUBLISH_ENDECB */
/* Description: Publish configuration for event ENDECB */

/* Bit 31 :   */
#define ECB_PUBLISH_ENDECB_EN_Pos (31UL)
#define ECB_PUBLISH_ENDECB_EN_Msk (0x1UL << ECB_PUBLISH_ENDECB_EN_Pos)
#define ECB_PUBLISH_ENDECB_EN_Disabled (0x0UL)
#define ECB_PUBLISH_ENDECB_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDECB will publish to */
#define ECB_PUBLISH_ENDECB_CHIDX_Pos (0UL)
#define ECB_PUBLISH_ENDECB_CHIDX_Msk (0xFFUL << ECB_PUBLISH_ENDECB_CHIDX_Pos)

/* Register: ECB_PUBLISH_ERRORECB */
/* Description: Publish configuration for event ERRORECB */

/* Bit 31 :   */
#define ECB_PUBLISH_ERRORECB_EN_Pos (31UL)
#define ECB_PUBLISH_ERRORECB_EN_Msk (0x1UL << ECB_PUBLISH_ERRORECB_EN_Pos)
#define ECB_PUBLISH_ERRORECB_EN_Disabled (0x0UL)
#define ECB_PUBLISH_ERRORECB_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ERRORECB will publish to */
#define ECB_PUBLISH_ERRORECB_CHIDX_Pos (0UL)
#define ECB_PUBLISH_ERRORECB_CHIDX_Msk (0xFFUL << ECB_PUBLISH_ERRORECB_CHIDX_Pos)

/* Register: ECB_INTENSET */
/* Description: Enable interrupt */

/* Bit 1 : Write '1' to enable interrupt for event ERRORECB */
#define ECB_INTENSET_ERRORECB_Pos (1UL)
#define ECB_INTENSET_ERRORECB_Msk (0x1UL << ECB_INTENSET_ERRORECB_Pos)
#define ECB_INTENSET_ERRORECB_Disabled (0x0UL)
#define ECB_INTENSET_ERRORECB_Enabled (0x1UL)
#define ECB_INTENSET_ERRORECB_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event ENDECB */
#define ECB_INTENSET_ENDECB_Pos (0UL)
#define ECB_INTENSET_ENDECB_Msk (0x1UL << ECB_INTENSET_ENDECB_Pos)
#define ECB_INTENSET_ENDECB_Disabled (0x0UL)
#define ECB_INTENSET_ENDECB_Enabled (0x1UL)
#define ECB_INTENSET_ENDECB_Set (0x1UL)

/* Register: ECB_INTENCLR */
/* Description: Disable interrupt */

/* Bit 1 : Write '1' to disable interrupt for event ERRORECB */
#define ECB_INTENCLR_ERRORECB_Pos (1UL)
#define ECB_INTENCLR_ERRORECB_Msk (0x1UL << ECB_INTENCLR_ERRORECB_Pos)
#define ECB_INTENCLR_ERRORECB_Disabled (0x0UL)
#define ECB_INTENCLR_ERRORECB_Enabled (0x1UL)
#define ECB_INTENCLR_ERRORECB_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event ENDECB */
#define ECB_INTENCLR_ENDECB_Pos (0UL)
#define ECB_INTENCLR_ENDECB_Msk (0x1UL << ECB_INTENCLR_ENDECB_Pos)
#define ECB_INTENCLR_ENDECB_Disabled (0x0UL)
#define ECB_INTENCLR_ENDECB_Enabled (0x1UL)
#define ECB_INTENCLR_ENDECB_Clear (0x1UL)

/* Register: ECB_ECBDATAPTR */
/* Description: ECB block encrypt memory pointers */

/* Bits 31..0 : Pointer to the ECB data structure (see Table 1 ECB data structure overview) */
#define ECB_ECBDATAPTR_ECBDATAPTR_Pos (0UL)
#define ECB_ECBDATAPTR_ECBDATAPTR_Msk (0xFFFFFFFFUL << ECB_ECBDATAPTR_ECBDATAPTR_Pos)


/* Peripheral: EGU */
/* Description: Event generator unit */

/* Register: EGU_TASKS_TRIGGER */
/* Description: Description collection: Trigger n for triggering the corresponding TRIGGERED[n] event */

/* Bit 0 : Trigger n for triggering the corresponding TRIGGERED[n] event */
#define EGU_TASKS_TRIGGER_TASKS_TRIGGER_Pos (0UL)
#define EGU_TASKS_TRIGGER_TASKS_TRIGGER_Msk (0x1UL << EGU_TASKS_TRIGGER_TASKS_TRIGGER_Pos)
#define EGU_TASKS_TRIGGER_TASKS_TRIGGER_Trigger (0x1UL)

/* Register: EGU_SUBSCRIBE_TRIGGER */
/* Description: Description collection: Subscribe configuration for task TRIGGER[n] */

/* Bit 31 :   */
#define EGU_SUBSCRIBE_TRIGGER_EN_Pos (31UL)
#define EGU_SUBSCRIBE_TRIGGER_EN_Msk (0x1UL << EGU_SUBSCRIBE_TRIGGER_EN_Pos)
#define EGU_SUBSCRIBE_TRIGGER_EN_Disabled (0x0UL)
#define EGU_SUBSCRIBE_TRIGGER_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task TRIGGER[n] will subscribe to */
#define EGU_SUBSCRIBE_TRIGGER_CHIDX_Pos (0UL)
#define EGU_SUBSCRIBE_TRIGGER_CHIDX_Msk (0xFFUL << EGU_SUBSCRIBE_TRIGGER_CHIDX_Pos)

/* Register: EGU_EVENTS_TRIGGERED */
/* Description: Description collection: Event number n generated by triggering the corresponding TRIGGER[n] task */

/* Bit 0 : Event number n generated by triggering the corresponding TRIGGER[n] task */
#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Pos (0UL)
#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Msk (0x1UL << EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Pos)
#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_NotGenerated (0x0UL)
#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Generated (0x1UL)

/* Register: EGU_PUBLISH_TRIGGERED */
/* Description: Description collection: Publish configuration for event TRIGGERED[n] */

/* Bit 31 :   */
#define EGU_PUBLISH_TRIGGERED_EN_Pos (31UL)
#define EGU_PUBLISH_TRIGGERED_EN_Msk (0x1UL << EGU_PUBLISH_TRIGGERED_EN_Pos)
#define EGU_PUBLISH_TRIGGERED_EN_Disabled (0x0UL)
#define EGU_PUBLISH_TRIGGERED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event TRIGGERED[n] will publish to */
#define EGU_PUBLISH_TRIGGERED_CHIDX_Pos (0UL)
#define EGU_PUBLISH_TRIGGERED_CHIDX_Msk (0xFFUL << EGU_PUBLISH_TRIGGERED_CHIDX_Pos)

/* Register: EGU_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 15 : Enable or disable interrupt for event TRIGGERED[15] */
#define EGU_INTEN_TRIGGERED15_Pos (15UL)
#define EGU_INTEN_TRIGGERED15_Msk (0x1UL << EGU_INTEN_TRIGGERED15_Pos)
#define EGU_INTEN_TRIGGERED15_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED15_Enabled (0x1UL)

/* Bit 14 : Enable or disable interrupt for event TRIGGERED[14] */
#define EGU_INTEN_TRIGGERED14_Pos (14UL)
#define EGU_INTEN_TRIGGERED14_Msk (0x1UL << EGU_INTEN_TRIGGERED14_Pos)
#define EGU_INTEN_TRIGGERED14_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED14_Enabled (0x1UL)

/* Bit 13 : Enable or disable interrupt for event TRIGGERED[13] */
#define EGU_INTEN_TRIGGERED13_Pos (13UL)
#define EGU_INTEN_TRIGGERED13_Msk (0x1UL << EGU_INTEN_TRIGGERED13_Pos)
#define EGU_INTEN_TRIGGERED13_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED13_Enabled (0x1UL)

/* Bit 12 : Enable or disable interrupt for event TRIGGERED[12] */
#define EGU_INTEN_TRIGGERED12_Pos (12UL)
#define EGU_INTEN_TRIGGERED12_Msk (0x1UL << EGU_INTEN_TRIGGERED12_Pos)
#define EGU_INTEN_TRIGGERED12_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED12_Enabled (0x1UL)

/* Bit 11 : Enable or disable interrupt for event TRIGGERED[11] */
#define EGU_INTEN_TRIGGERED11_Pos (11UL)
#define EGU_INTEN_TRIGGERED11_Msk (0x1UL << EGU_INTEN_TRIGGERED11_Pos)
#define EGU_INTEN_TRIGGERED11_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED11_Enabled (0x1UL)

/* Bit 10 : Enable or disable interrupt for event TRIGGERED[10] */
#define EGU_INTEN_TRIGGERED10_Pos (10UL)
#define EGU_INTEN_TRIGGERED10_Msk (0x1UL << EGU_INTEN_TRIGGERED10_Pos)
#define EGU_INTEN_TRIGGERED10_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED10_Enabled (0x1UL)

/* Bit 9 : Enable or disable interrupt for event TRIGGERED[9] */
#define EGU_INTEN_TRIGGERED9_Pos (9UL)
#define EGU_INTEN_TRIGGERED9_Msk (0x1UL << EGU_INTEN_TRIGGERED9_Pos)
#define EGU_INTEN_TRIGGERED9_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED9_Enabled (0x1UL)

/* Bit 8 : Enable or disable interrupt for event TRIGGERED[8] */
#define EGU_INTEN_TRIGGERED8_Pos (8UL)
#define EGU_INTEN_TRIGGERED8_Msk (0x1UL << EGU_INTEN_TRIGGERED8_Pos)
#define EGU_INTEN_TRIGGERED8_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED8_Enabled (0x1UL)

/* Bit 7 : Enable or disable interrupt for event TRIGGERED[7] */
#define EGU_INTEN_TRIGGERED7_Pos (7UL)
#define EGU_INTEN_TRIGGERED7_Msk (0x1UL << EGU_INTEN_TRIGGERED7_Pos)
#define EGU_INTEN_TRIGGERED7_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED7_Enabled (0x1UL)

/* Bit 6 : Enable or disable interrupt for event TRIGGERED[6] */
#define EGU_INTEN_TRIGGERED6_Pos (6UL)
#define EGU_INTEN_TRIGGERED6_Msk (0x1UL << EGU_INTEN_TRIGGERED6_Pos)
#define EGU_INTEN_TRIGGERED6_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED6_Enabled (0x1UL)

/* Bit 5 : Enable or disable interrupt for event TRIGGERED[5] */
#define EGU_INTEN_TRIGGERED5_Pos (5UL)
#define EGU_INTEN_TRIGGERED5_Msk (0x1UL << EGU_INTEN_TRIGGERED5_Pos)
#define EGU_INTEN_TRIGGERED5_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED5_Enabled (0x1UL)

/* Bit 4 : Enable or disable interrupt for event TRIGGERED[4] */
#define EGU_INTEN_TRIGGERED4_Pos (4UL)
#define EGU_INTEN_TRIGGERED4_Msk (0x1UL << EGU_INTEN_TRIGGERED4_Pos)
#define EGU_INTEN_TRIGGERED4_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED4_Enabled (0x1UL)

/* Bit 3 : Enable or disable interrupt for event TRIGGERED[3] */
#define EGU_INTEN_TRIGGERED3_Pos (3UL)
#define EGU_INTEN_TRIGGERED3_Msk (0x1UL << EGU_INTEN_TRIGGERED3_Pos)
#define EGU_INTEN_TRIGGERED3_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED3_Enabled (0x1UL)

/* Bit 2 : Enable or disable interrupt for event TRIGGERED[2] */
#define EGU_INTEN_TRIGGERED2_Pos (2UL)
#define EGU_INTEN_TRIGGERED2_Msk (0x1UL << EGU_INTEN_TRIGGERED2_Pos)
#define EGU_INTEN_TRIGGERED2_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED2_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event TRIGGERED[1] */
#define EGU_INTEN_TRIGGERED1_Pos (1UL)
#define EGU_INTEN_TRIGGERED1_Msk (0x1UL << EGU_INTEN_TRIGGERED1_Pos)
#define EGU_INTEN_TRIGGERED1_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED1_Enabled (0x1UL)

/* Bit 0 : Enable or disable interrupt for event TRIGGERED[0] */
#define EGU_INTEN_TRIGGERED0_Pos (0UL)
#define EGU_INTEN_TRIGGERED0_Msk (0x1UL << EGU_INTEN_TRIGGERED0_Pos)
#define EGU_INTEN_TRIGGERED0_Disabled (0x0UL)
#define EGU_INTEN_TRIGGERED0_Enabled (0x1UL)

/* Register: EGU_INTENSET */
/* Description: Enable interrupt */

/* Bit 15 : Write '1' to enable interrupt for event TRIGGERED[15] */
#define EGU_INTENSET_TRIGGERED15_Pos (15UL)
#define EGU_INTENSET_TRIGGERED15_Msk (0x1UL << EGU_INTENSET_TRIGGERED15_Pos)
#define EGU_INTENSET_TRIGGERED15_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED15_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED15_Set (0x1UL)

/* Bit 14 : Write '1' to enable interrupt for event TRIGGERED[14] */
#define EGU_INTENSET_TRIGGERED14_Pos (14UL)
#define EGU_INTENSET_TRIGGERED14_Msk (0x1UL << EGU_INTENSET_TRIGGERED14_Pos)
#define EGU_INTENSET_TRIGGERED14_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED14_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED14_Set (0x1UL)

/* Bit 13 : Write '1' to enable interrupt for event TRIGGERED[13] */
#define EGU_INTENSET_TRIGGERED13_Pos (13UL)
#define EGU_INTENSET_TRIGGERED13_Msk (0x1UL << EGU_INTENSET_TRIGGERED13_Pos)
#define EGU_INTENSET_TRIGGERED13_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED13_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED13_Set (0x1UL)

/* Bit 12 : Write '1' to enable interrupt for event TRIGGERED[12] */
#define EGU_INTENSET_TRIGGERED12_Pos (12UL)
#define EGU_INTENSET_TRIGGERED12_Msk (0x1UL << EGU_INTENSET_TRIGGERED12_Pos)
#define EGU_INTENSET_TRIGGERED12_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED12_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED12_Set (0x1UL)

/* Bit 11 : Write '1' to enable interrupt for event TRIGGERED[11] */
#define EGU_INTENSET_TRIGGERED11_Pos (11UL)
#define EGU_INTENSET_TRIGGERED11_Msk (0x1UL << EGU_INTENSET_TRIGGERED11_Pos)
#define EGU_INTENSET_TRIGGERED11_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED11_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED11_Set (0x1UL)

/* Bit 10 : Write '1' to enable interrupt for event TRIGGERED[10] */
#define EGU_INTENSET_TRIGGERED10_Pos (10UL)
#define EGU_INTENSET_TRIGGERED10_Msk (0x1UL << EGU_INTENSET_TRIGGERED10_Pos)
#define EGU_INTENSET_TRIGGERED10_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED10_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED10_Set (0x1UL)

/* Bit 9 : Write '1' to enable interrupt for event TRIGGERED[9] */
#define EGU_INTENSET_TRIGGERED9_Pos (9UL)
#define EGU_INTENSET_TRIGGERED9_Msk (0x1UL << EGU_INTENSET_TRIGGERED9_Pos)
#define EGU_INTENSET_TRIGGERED9_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED9_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED9_Set (0x1UL)

/* Bit 8 : Write '1' to enable interrupt for event TRIGGERED[8] */
#define EGU_INTENSET_TRIGGERED8_Pos (8UL)
#define EGU_INTENSET_TRIGGERED8_Msk (0x1UL << EGU_INTENSET_TRIGGERED8_Pos)
#define EGU_INTENSET_TRIGGERED8_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED8_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED8_Set (0x1UL)

/* Bit 7 : Write '1' to enable interrupt for event TRIGGERED[7] */
#define EGU_INTENSET_TRIGGERED7_Pos (7UL)
#define EGU_INTENSET_TRIGGERED7_Msk (0x1UL << EGU_INTENSET_TRIGGERED7_Pos)
#define EGU_INTENSET_TRIGGERED7_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED7_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED7_Set (0x1UL)

/* Bit 6 : Write '1' to enable interrupt for event TRIGGERED[6] */
#define EGU_INTENSET_TRIGGERED6_Pos (6UL)
#define EGU_INTENSET_TRIGGERED6_Msk (0x1UL << EGU_INTENSET_TRIGGERED6_Pos)
#define EGU_INTENSET_TRIGGERED6_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED6_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED6_Set (0x1UL)

/* Bit 5 : Write '1' to enable interrupt for event TRIGGERED[5] */
#define EGU_INTENSET_TRIGGERED5_Pos (5UL)
#define EGU_INTENSET_TRIGGERED5_Msk (0x1UL << EGU_INTENSET_TRIGGERED5_Pos)
#define EGU_INTENSET_TRIGGERED5_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED5_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED5_Set (0x1UL)

/* Bit 4 : Write '1' to enable interrupt for event TRIGGERED[4] */
#define EGU_INTENSET_TRIGGERED4_Pos (4UL)
#define EGU_INTENSET_TRIGGERED4_Msk (0x1UL << EGU_INTENSET_TRIGGERED4_Pos)
#define EGU_INTENSET_TRIGGERED4_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED4_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED4_Set (0x1UL)

/* Bit 3 : Write '1' to enable interrupt for event TRIGGERED[3] */
#define EGU_INTENSET_TRIGGERED3_Pos (3UL)
#define EGU_INTENSET_TRIGGERED3_Msk (0x1UL << EGU_INTENSET_TRIGGERED3_Pos)
#define EGU_INTENSET_TRIGGERED3_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED3_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED3_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event TRIGGERED[2] */
#define EGU_INTENSET_TRIGGERED2_Pos (2UL)
#define EGU_INTENSET_TRIGGERED2_Msk (0x1UL << EGU_INTENSET_TRIGGERED2_Pos)
#define EGU_INTENSET_TRIGGERED2_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED2_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED2_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event TRIGGERED[1] */
#define EGU_INTENSET_TRIGGERED1_Pos (1UL)
#define EGU_INTENSET_TRIGGERED1_Msk (0x1UL << EGU_INTENSET_TRIGGERED1_Pos)
#define EGU_INTENSET_TRIGGERED1_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED1_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED1_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event TRIGGERED[0] */
#define EGU_INTENSET_TRIGGERED0_Pos (0UL)
#define EGU_INTENSET_TRIGGERED0_Msk (0x1UL << EGU_INTENSET_TRIGGERED0_Pos)
#define EGU_INTENSET_TRIGGERED0_Disabled (0x0UL)
#define EGU_INTENSET_TRIGGERED0_Enabled (0x1UL)
#define EGU_INTENSET_TRIGGERED0_Set (0x1UL)

/* Register: EGU_INTENCLR */
/* Description: Disable interrupt */

/* Bit 15 : Write '1' to disable interrupt for event TRIGGERED[15] */
#define EGU_INTENCLR_TRIGGERED15_Pos (15UL)
#define EGU_INTENCLR_TRIGGERED15_Msk (0x1UL << EGU_INTENCLR_TRIGGERED15_Pos)
#define EGU_INTENCLR_TRIGGERED15_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED15_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED15_Clear (0x1UL)

/* Bit 14 : Write '1' to disable interrupt for event TRIGGERED[14] */
#define EGU_INTENCLR_TRIGGERED14_Pos (14UL)
#define EGU_INTENCLR_TRIGGERED14_Msk (0x1UL << EGU_INTENCLR_TRIGGERED14_Pos)
#define EGU_INTENCLR_TRIGGERED14_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED14_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED14_Clear (0x1UL)

/* Bit 13 : Write '1' to disable interrupt for event TRIGGERED[13] */
#define EGU_INTENCLR_TRIGGERED13_Pos (13UL)
#define EGU_INTENCLR_TRIGGERED13_Msk (0x1UL << EGU_INTENCLR_TRIGGERED13_Pos)
#define EGU_INTENCLR_TRIGGERED13_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED13_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED13_Clear (0x1UL)

/* Bit 12 : Write '1' to disable interrupt for event TRIGGERED[12] */
#define EGU_INTENCLR_TRIGGERED12_Pos (12UL)
#define EGU_INTENCLR_TRIGGERED12_Msk (0x1UL << EGU_INTENCLR_TRIGGERED12_Pos)
#define EGU_INTENCLR_TRIGGERED12_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED12_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED12_Clear (0x1UL)

/* Bit 11 : Write '1' to disable interrupt for event TRIGGERED[11] */
#define EGU_INTENCLR_TRIGGERED11_Pos (11UL)
#define EGU_INTENCLR_TRIGGERED11_Msk (0x1UL << EGU_INTENCLR_TRIGGERED11_Pos)
#define EGU_INTENCLR_TRIGGERED11_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED11_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED11_Clear (0x1UL)

/* Bit 10 : Write '1' to disable interrupt for event TRIGGERED[10] */
#define EGU_INTENCLR_TRIGGERED10_Pos (10UL)
#define EGU_INTENCLR_TRIGGERED10_Msk (0x1UL << EGU_INTENCLR_TRIGGERED10_Pos)
#define EGU_INTENCLR_TRIGGERED10_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED10_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED10_Clear (0x1UL)

/* Bit 9 : Write '1' to disable interrupt for event TRIGGERED[9] */
#define EGU_INTENCLR_TRIGGERED9_Pos (9UL)
#define EGU_INTENCLR_TRIGGERED9_Msk (0x1UL << EGU_INTENCLR_TRIGGERED9_Pos)
#define EGU_INTENCLR_TRIGGERED9_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED9_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED9_Clear (0x1UL)

/* Bit 8 : Write '1' to disable interrupt for event TRIGGERED[8] */
#define EGU_INTENCLR_TRIGGERED8_Pos (8UL)
#define EGU_INTENCLR_TRIGGERED8_Msk (0x1UL << EGU_INTENCLR_TRIGGERED8_Pos)
#define EGU_INTENCLR_TRIGGERED8_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED8_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED8_Clear (0x1UL)

/* Bit 7 : Write '1' to disable interrupt for event TRIGGERED[7] */
#define EGU_INTENCLR_TRIGGERED7_Pos (7UL)
#define EGU_INTENCLR_TRIGGERED7_Msk (0x1UL << EGU_INTENCLR_TRIGGERED7_Pos)
#define EGU_INTENCLR_TRIGGERED7_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED7_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED7_Clear (0x1UL)

/* Bit 6 : Write '1' to disable interrupt for event TRIGGERED[6] */
#define EGU_INTENCLR_TRIGGERED6_Pos (6UL)
#define EGU_INTENCLR_TRIGGERED6_Msk (0x1UL << EGU_INTENCLR_TRIGGERED6_Pos)
#define EGU_INTENCLR_TRIGGERED6_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED6_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED6_Clear (0x1UL)

/* Bit 5 : Write '1' to disable interrupt for event TRIGGERED[5] */
#define EGU_INTENCLR_TRIGGERED5_Pos (5UL)
#define EGU_INTENCLR_TRIGGERED5_Msk (0x1UL << EGU_INTENCLR_TRIGGERED5_Pos)
#define EGU_INTENCLR_TRIGGERED5_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED5_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED5_Clear (0x1UL)

/* Bit 4 : Write '1' to disable interrupt for event TRIGGERED[4] */
#define EGU_INTENCLR_TRIGGERED4_Pos (4UL)
#define EGU_INTENCLR_TRIGGERED4_Msk (0x1UL << EGU_INTENCLR_TRIGGERED4_Pos)
#define EGU_INTENCLR_TRIGGERED4_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED4_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED4_Clear (0x1UL)

/* Bit 3 : Write '1' to disable interrupt for event TRIGGERED[3] */
#define EGU_INTENCLR_TRIGGERED3_Pos (3UL)
#define EGU_INTENCLR_TRIGGERED3_Msk (0x1UL << EGU_INTENCLR_TRIGGERED3_Pos)
#define EGU_INTENCLR_TRIGGERED3_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED3_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED3_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event TRIGGERED[2] */
#define EGU_INTENCLR_TRIGGERED2_Pos (2UL)
#define EGU_INTENCLR_TRIGGERED2_Msk (0x1UL << EGU_INTENCLR_TRIGGERED2_Pos)
#define EGU_INTENCLR_TRIGGERED2_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED2_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED2_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event TRIGGERED[1] */
#define EGU_INTENCLR_TRIGGERED1_Pos (1UL)
#define EGU_INTENCLR_TRIGGERED1_Msk (0x1UL << EGU_INTENCLR_TRIGGERED1_Pos)
#define EGU_INTENCLR_TRIGGERED1_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED1_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED1_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event TRIGGERED[0] */
#define EGU_INTENCLR_TRIGGERED0_Pos (0UL)
#define EGU_INTENCLR_TRIGGERED0_Msk (0x1UL << EGU_INTENCLR_TRIGGERED0_Pos)
#define EGU_INTENCLR_TRIGGERED0_Disabled (0x0UL)
#define EGU_INTENCLR_TRIGGERED0_Enabled (0x1UL)
#define EGU_INTENCLR_TRIGGERED0_Clear (0x1UL)


/* Peripheral: FICR */
/* Description: Factory Information Configuration Registers */

/* Register: FICR_INFO_CONFIGID */
/* Description: Configuration identifier */

/* Bits 15..0 : Identification number for the HW */
#define FICR_INFO_CONFIGID_HWID_Pos (0UL)
#define FICR_INFO_CONFIGID_HWID_Msk (0xFFFFUL << FICR_INFO_CONFIGID_HWID_Pos)

/* Register: FICR_INFO_DEVICEID */
/* Description: Description collection: Device identifier */

/* Bits 31..0 : 64 bit unique device identifier */
#define FICR_INFO_DEVICEID_DEVICEID_Pos (0UL)
#define FICR_INFO_DEVICEID_DEVICEID_Msk (0xFFFFFFFFUL << FICR_INFO_DEVICEID_DEVICEID_Pos)

/* Register: FICR_INFO_PART */
/* Description: Part code */

/* Bits 31..0 : Part code */
#define FICR_INFO_PART_PART_Pos (0UL)
#define FICR_INFO_PART_PART_Msk (0xFFFFFFFFUL << FICR_INFO_PART_PART_Pos)
#define FICR_INFO_PART_PART_N5340 (0x00005340UL)
#define FICR_INFO_PART_PART_Unspecified (0xFFFFFFFFUL)

/* Register: FICR_INFO_VARIANT */
/* Description: Part Variant, Hardware version and Production configuration */

/* Bits 31..0 : Part Variant, Hardware version and Production configuration, encoded as ASCII */
#define FICR_INFO_VARIANT_VARIANT_Pos (0UL)
#define FICR_INFO_VARIANT_VARIANT_Msk (0xFFFFFFFFUL << FICR_INFO_VARIANT_VARIANT_Pos)
#define FICR_INFO_VARIANT_VARIANT_CLAA (0x434C4141UL)
#define FICR_INFO_VARIANT_VARIANT_QKAA (0x514B4141UL)
#define FICR_INFO_VARIANT_VARIANT_Unspecified (0xFFFFFFFFUL)

/* Register: FICR_INFO_PACKAGE */
/* Description: Package option */

/* Bits 31..0 : Package option */
#define FICR_INFO_PACKAGE_PACKAGE_Pos (0UL)
#define FICR_INFO_PACKAGE_PACKAGE_Msk (0xFFFFFFFFUL << FICR_INFO_PACKAGE_PACKAGE_Pos)
#define FICR_INFO_PACKAGE_PACKAGE_QK (0x00002000UL)
#define FICR_INFO_PACKAGE_PACKAGE_CL (0x00002005UL)
#define FICR_INFO_PACKAGE_PACKAGE_Unspecified (0xFFFFFFFFUL)

/* Register: FICR_INFO_RAM */
/* Description: RAM variant */

/* Bits 31..0 : RAM variant */
#define FICR_INFO_RAM_RAM_Pos (0UL)
#define FICR_INFO_RAM_RAM_Msk (0xFFFFFFFFUL << FICR_INFO_RAM_RAM_Pos)
#define FICR_INFO_RAM_RAM_K16 (0x00000010UL)
#define FICR_INFO_RAM_RAM_K32 (0x00000020UL)
#define FICR_INFO_RAM_RAM_K64 (0x00000040UL)
#define FICR_INFO_RAM_RAM_K128 (0x00000080UL)
#define FICR_INFO_RAM_RAM_K256 (0x00000100UL)
#define FICR_INFO_RAM_RAM_K512 (0x00000200UL)
#define FICR_INFO_RAM_RAM_Unspecified (0xFFFFFFFFUL)

/* Register: FICR_INFO_FLASH */
/* Description: Flash variant */

/* Bits 31..0 : Flash variant */
#define FICR_INFO_FLASH_FLASH_Pos (0UL)
#define FICR_INFO_FLASH_FLASH_Msk (0xFFFFFFFFUL << FICR_INFO_FLASH_FLASH_Pos)
#define FICR_INFO_FLASH_FLASH_K128 (0x00000080UL)
#define FICR_INFO_FLASH_FLASH_K256 (0x00000100UL)
#define FICR_INFO_FLASH_FLASH_K512 (0x00000200UL)
#define FICR_INFO_FLASH_FLASH_K1024 (0x00000400UL)
#define FICR_INFO_FLASH_FLASH_K2048 (0x00000800UL)
#define FICR_INFO_FLASH_FLASH_Unspecified (0xFFFFFFFFUL)

/* Register: FICR_INFO_CODEPAGESIZE */
/* Description: Code memory page size in bytes */

/* Bits 31..0 : Code memory page size in bytes */
#define FICR_INFO_CODEPAGESIZE_CODEPAGESIZE_Pos (0UL)
#define FICR_INFO_CODEPAGESIZE_CODEPAGESIZE_Msk (0xFFFFFFFFUL << FICR_INFO_CODEPAGESIZE_CODEPAGESIZE_Pos)
#define FICR_INFO_CODEPAGESIZE_CODEPAGESIZE_K2048 (0x00000800UL)

/* Register: FICR_INFO_CODESIZE */
/* Description: Code memory size */

/* Bits 31..0 : Code memory size in number of pages */
#define FICR_INFO_CODESIZE_CODESIZE_Pos (0UL)
#define FICR_INFO_CODESIZE_CODESIZE_Msk (0xFFFFFFFFUL << FICR_INFO_CODESIZE_CODESIZE_Pos)
#define FICR_INFO_CODESIZE_CODESIZE_P128 (0x00000080UL)

/* Register: FICR_INFO_DEVICETYPE */
/* Description: Device type */

/* Bits 31..0 : Device type */
#define FICR_INFO_DEVICETYPE_DEVICETYPE_Pos (0UL)
#define FICR_INFO_DEVICETYPE_DEVICETYPE_Msk (0xFFFFFFFFUL << FICR_INFO_DEVICETYPE_DEVICETYPE_Pos)
#define FICR_INFO_DEVICETYPE_DEVICETYPE_Die (0x00000000UL)
#define FICR_INFO_DEVICETYPE_DEVICETYPE_FPGA (0xFFFFFFFFUL)

/* Register: FICR_ER */
/* Description: Description collection: Encryption Root, word n */

/* Bits 31..0 : Encryption Root, word n */
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
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Public (0x0UL)
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Random (0x1UL)

/* Register: FICR_DEVICEADDR */
/* Description: Description collection: Device address n */

/* Bits 31..0 : 48 bit device address */
#define FICR_DEVICEADDR_DEVICEADDR_Pos (0UL)
#define FICR_DEVICEADDR_DEVICEADDR_Msk (0xFFFFFFFFUL << FICR_DEVICEADDR_DEVICEADDR_Pos)

/* Register: FICR_TRIMCNF_ADDR */
/* Description: Description cluster: Address */

/* Bits 31..0 : Address */
#define FICR_TRIMCNF_ADDR_Address_Pos (0UL)
#define FICR_TRIMCNF_ADDR_Address_Msk (0xFFFFFFFFUL << FICR_TRIMCNF_ADDR_Address_Pos)

/* Register: FICR_TRIMCNF_DATA */
/* Description: Description cluster: Data */

/* Bits 31..0 : Data */
#define FICR_TRIMCNF_DATA_Data_Pos (0UL)
#define FICR_TRIMCNF_DATA_Data_Msk (0xFFFFFFFFUL << FICR_TRIMCNF_DATA_Data_Pos)


/* Peripheral: GPIOTE */
/* Description: GPIO Tasks and Events */

/* Register: GPIOTE_TASKS_OUT */
/* Description: Description collection: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is configured in CONFIG[n].POLARITY. */

/* Bit 0 : Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is configured in CONFIG[n].POLARITY. */
#define GPIOTE_TASKS_OUT_TASKS_OUT_Pos (0UL)
#define GPIOTE_TASKS_OUT_TASKS_OUT_Msk (0x1UL << GPIOTE_TASKS_OUT_TASKS_OUT_Pos)
#define GPIOTE_TASKS_OUT_TASKS_OUT_Trigger (0x1UL)

/* Register: GPIOTE_TASKS_SET */
/* Description: Description collection: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it high. */

/* Bit 0 : Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it high. */
#define GPIOTE_TASKS_SET_TASKS_SET_Pos (0UL)
#define GPIOTE_TASKS_SET_TASKS_SET_Msk (0x1UL << GPIOTE_TASKS_SET_TASKS_SET_Pos)
#define GPIOTE_TASKS_SET_TASKS_SET_Trigger (0x1UL)

/* Register: GPIOTE_TASKS_CLR */
/* Description: Description collection: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it low. */

/* Bit 0 : Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it low. */
#define GPIOTE_TASKS_CLR_TASKS_CLR_Pos (0UL)
#define GPIOTE_TASKS_CLR_TASKS_CLR_Msk (0x1UL << GPIOTE_TASKS_CLR_TASKS_CLR_Pos)
#define GPIOTE_TASKS_CLR_TASKS_CLR_Trigger (0x1UL)

/* Register: GPIOTE_SUBSCRIBE_OUT */
/* Description: Description collection: Subscribe configuration for task OUT[n] */

/* Bit 31 :   */
#define GPIOTE_SUBSCRIBE_OUT_EN_Pos (31UL)
#define GPIOTE_SUBSCRIBE_OUT_EN_Msk (0x1UL << GPIOTE_SUBSCRIBE_OUT_EN_Pos)
#define GPIOTE_SUBSCRIBE_OUT_EN_Disabled (0x0UL)
#define GPIOTE_SUBSCRIBE_OUT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task OUT[n] will subscribe to */
#define GPIOTE_SUBSCRIBE_OUT_CHIDX_Pos (0UL)
#define GPIOTE_SUBSCRIBE_OUT_CHIDX_Msk (0xFFUL << GPIOTE_SUBSCRIBE_OUT_CHIDX_Pos)

/* Register: GPIOTE_SUBSCRIBE_SET */
/* Description: Description collection: Subscribe configuration for task SET[n] */

/* Bit 31 :   */
#define GPIOTE_SUBSCRIBE_SET_EN_Pos (31UL)
#define GPIOTE_SUBSCRIBE_SET_EN_Msk (0x1UL << GPIOTE_SUBSCRIBE_SET_EN_Pos)
#define GPIOTE_SUBSCRIBE_SET_EN_Disabled (0x0UL)
#define GPIOTE_SUBSCRIBE_SET_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task SET[n] will subscribe to */
#define GPIOTE_SUBSCRIBE_SET_CHIDX_Pos (0UL)
#define GPIOTE_SUBSCRIBE_SET_CHIDX_Msk (0xFFUL << GPIOTE_SUBSCRIBE_SET_CHIDX_Pos)

/* Register: GPIOTE_SUBSCRIBE_CLR */
/* Description: Description collection: Subscribe configuration for task CLR[n] */

/* Bit 31 :   */
#define GPIOTE_SUBSCRIBE_CLR_EN_Pos (31UL)
#define GPIOTE_SUBSCRIBE_CLR_EN_Msk (0x1UL << GPIOTE_SUBSCRIBE_CLR_EN_Pos)
#define GPIOTE_SUBSCRIBE_CLR_EN_Disabled (0x0UL)
#define GPIOTE_SUBSCRIBE_CLR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task CLR[n] will subscribe to */
#define GPIOTE_SUBSCRIBE_CLR_CHIDX_Pos (0UL)
#define GPIOTE_SUBSCRIBE_CLR_CHIDX_Msk (0xFFUL << GPIOTE_SUBSCRIBE_CLR_CHIDX_Pos)

/* Register: GPIOTE_EVENTS_IN */
/* Description: Description collection: Event generated from pin specified in CONFIG[n].PSEL */

/* Bit 0 : Event generated from pin specified in CONFIG[n].PSEL */
#define GPIOTE_EVENTS_IN_EVENTS_IN_Pos (0UL)
#define GPIOTE_EVENTS_IN_EVENTS_IN_Msk (0x1UL << GPIOTE_EVENTS_IN_EVENTS_IN_Pos)
#define GPIOTE_EVENTS_IN_EVENTS_IN_NotGenerated (0x0UL)
#define GPIOTE_EVENTS_IN_EVENTS_IN_Generated (0x1UL)

/* Register: GPIOTE_EVENTS_PORT */
/* Description: Event generated from multiple input GPIO pins with SENSE mechanism enabled */

/* Bit 0 : Event generated from multiple input GPIO pins with SENSE mechanism enabled */
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Pos (0UL)
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Msk (0x1UL << GPIOTE_EVENTS_PORT_EVENTS_PORT_Pos)
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_NotGenerated (0x0UL)
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Generated (0x1UL)

/* Register: GPIOTE_PUBLISH_IN */
/* Description: Description collection: Publish configuration for event IN[n] */

/* Bit 31 :   */
#define GPIOTE_PUBLISH_IN_EN_Pos (31UL)
#define GPIOTE_PUBLISH_IN_EN_Msk (0x1UL << GPIOTE_PUBLISH_IN_EN_Pos)
#define GPIOTE_PUBLISH_IN_EN_Disabled (0x0UL)
#define GPIOTE_PUBLISH_IN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event IN[n] will publish to */
#define GPIOTE_PUBLISH_IN_CHIDX_Pos (0UL)
#define GPIOTE_PUBLISH_IN_CHIDX_Msk (0xFFUL << GPIOTE_PUBLISH_IN_CHIDX_Pos)

/* Register: GPIOTE_PUBLISH_PORT */
/* Description: Publish configuration for event PORT */

/* Bit 31 :   */
#define GPIOTE_PUBLISH_PORT_EN_Pos (31UL)
#define GPIOTE_PUBLISH_PORT_EN_Msk (0x1UL << GPIOTE_PUBLISH_PORT_EN_Pos)
#define GPIOTE_PUBLISH_PORT_EN_Disabled (0x0UL)
#define GPIOTE_PUBLISH_PORT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event PORT will publish to */
#define GPIOTE_PUBLISH_PORT_CHIDX_Pos (0UL)
#define GPIOTE_PUBLISH_PORT_CHIDX_Msk (0xFFUL << GPIOTE_PUBLISH_PORT_CHIDX_Pos)

/* Register: GPIOTE_INTENSET */
/* Description: Enable interrupt */

/* Bit 31 : Write '1' to enable interrupt for event PORT */
#define GPIOTE_INTENSET_PORT_Pos (31UL)
#define GPIOTE_INTENSET_PORT_Msk (0x1UL << GPIOTE_INTENSET_PORT_Pos)
#define GPIOTE_INTENSET_PORT_Disabled (0x0UL)
#define GPIOTE_INTENSET_PORT_Enabled (0x1UL)
#define GPIOTE_INTENSET_PORT_Set (0x1UL)

/* Bit 7 : Write '1' to enable interrupt for event IN[7] */
#define GPIOTE_INTENSET_IN7_Pos (7UL)
#define GPIOTE_INTENSET_IN7_Msk (0x1UL << GPIOTE_INTENSET_IN7_Pos)
#define GPIOTE_INTENSET_IN7_Disabled (0x0UL)
#define GPIOTE_INTENSET_IN7_Enabled (0x1UL)
#define GPIOTE_INTENSET_IN7_Set (0x1UL)

/* Bit 6 : Write '1' to enable interrupt for event IN[6] */
#define GPIOTE_INTENSET_IN6_Pos (6UL)
#define GPIOTE_INTENSET_IN6_Msk (0x1UL << GPIOTE_INTENSET_IN6_Pos)
#define GPIOTE_INTENSET_IN6_Disabled (0x0UL)
#define GPIOTE_INTENSET_IN6_Enabled (0x1UL)
#define GPIOTE_INTENSET_IN6_Set (0x1UL)

/* Bit 5 : Write '1' to enable interrupt for event IN[5] */
#define GPIOTE_INTENSET_IN5_Pos (5UL)
#define GPIOTE_INTENSET_IN5_Msk (0x1UL << GPIOTE_INTENSET_IN5_Pos)
#define GPIOTE_INTENSET_IN5_Disabled (0x0UL)
#define GPIOTE_INTENSET_IN5_Enabled (0x1UL)
#define GPIOTE_INTENSET_IN5_Set (0x1UL)

/* Bit 4 : Write '1' to enable interrupt for event IN[4] */
#define GPIOTE_INTENSET_IN4_Pos (4UL)
#define GPIOTE_INTENSET_IN4_Msk (0x1UL << GPIOTE_INTENSET_IN4_Pos)
#define GPIOTE_INTENSET_IN4_Disabled (0x0UL)
#define GPIOTE_INTENSET_IN4_Enabled (0x1UL)
#define GPIOTE_INTENSET_IN4_Set (0x1UL)

/* Bit 3 : Write '1' to enable interrupt for event IN[3] */
#define GPIOTE_INTENSET_IN3_Pos (3UL)
#define GPIOTE_INTENSET_IN3_Msk (0x1UL << GPIOTE_INTENSET_IN3_Pos)
#define GPIOTE_INTENSET_IN3_Disabled (0x0UL)
#define GPIOTE_INTENSET_IN3_Enabled (0x1UL)
#define GPIOTE_INTENSET_IN3_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event IN[2] */
#define GPIOTE_INTENSET_IN2_Pos (2UL)
#define GPIOTE_INTENSET_IN2_Msk (0x1UL << GPIOTE_INTENSET_IN2_Pos)
#define GPIOTE_INTENSET_IN2_Disabled (0x0UL)
#define GPIOTE_INTENSET_IN2_Enabled (0x1UL)
#define GPIOTE_INTENSET_IN2_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event IN[1] */
#define GPIOTE_INTENSET_IN1_Pos (1UL)
#define GPIOTE_INTENSET_IN1_Msk (0x1UL << GPIOTE_INTENSET_IN1_Pos)
#define GPIOTE_INTENSET_IN1_Disabled (0x0UL)
#define GPIOTE_INTENSET_IN1_Enabled (0x1UL)
#define GPIOTE_INTENSET_IN1_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event IN[0] */
#define GPIOTE_INTENSET_IN0_Pos (0UL)
#define GPIOTE_INTENSET_IN0_Msk (0x1UL << GPIOTE_INTENSET_IN0_Pos)
#define GPIOTE_INTENSET_IN0_Disabled (0x0UL)
#define GPIOTE_INTENSET_IN0_Enabled (0x1UL)
#define GPIOTE_INTENSET_IN0_Set (0x1UL)

/* Register: GPIOTE_INTENCLR */
/* Description: Disable interrupt */

/* Bit 31 : Write '1' to disable interrupt for event PORT */
#define GPIOTE_INTENCLR_PORT_Pos (31UL)
#define GPIOTE_INTENCLR_PORT_Msk (0x1UL << GPIOTE_INTENCLR_PORT_Pos)
#define GPIOTE_INTENCLR_PORT_Disabled (0x0UL)
#define GPIOTE_INTENCLR_PORT_Enabled (0x1UL)
#define GPIOTE_INTENCLR_PORT_Clear (0x1UL)

/* Bit 7 : Write '1' to disable interrupt for event IN[7] */
#define GPIOTE_INTENCLR_IN7_Pos (7UL)
#define GPIOTE_INTENCLR_IN7_Msk (0x1UL << GPIOTE_INTENCLR_IN7_Pos)
#define GPIOTE_INTENCLR_IN7_Disabled (0x0UL)
#define GPIOTE_INTENCLR_IN7_Enabled (0x1UL)
#define GPIOTE_INTENCLR_IN7_Clear (0x1UL)

/* Bit 6 : Write '1' to disable interrupt for event IN[6] */
#define GPIOTE_INTENCLR_IN6_Pos (6UL)
#define GPIOTE_INTENCLR_IN6_Msk (0x1UL << GPIOTE_INTENCLR_IN6_Pos)
#define GPIOTE_INTENCLR_IN6_Disabled (0x0UL)
#define GPIOTE_INTENCLR_IN6_Enabled (0x1UL)
#define GPIOTE_INTENCLR_IN6_Clear (0x1UL)

/* Bit 5 : Write '1' to disable interrupt for event IN[5] */
#define GPIOTE_INTENCLR_IN5_Pos (5UL)
#define GPIOTE_INTENCLR_IN5_Msk (0x1UL << GPIOTE_INTENCLR_IN5_Pos)
#define GPIOTE_INTENCLR_IN5_Disabled (0x0UL)
#define GPIOTE_INTENCLR_IN5_Enabled (0x1UL)
#define GPIOTE_INTENCLR_IN5_Clear (0x1UL)

/* Bit 4 : Write '1' to disable interrupt for event IN[4] */
#define GPIOTE_INTENCLR_IN4_Pos (4UL)
#define GPIOTE_INTENCLR_IN4_Msk (0x1UL << GPIOTE_INTENCLR_IN4_Pos)
#define GPIOTE_INTENCLR_IN4_Disabled (0x0UL)
#define GPIOTE_INTENCLR_IN4_Enabled (0x1UL)
#define GPIOTE_INTENCLR_IN4_Clear (0x1UL)

/* Bit 3 : Write '1' to disable interrupt for event IN[3] */
#define GPIOTE_INTENCLR_IN3_Pos (3UL)
#define GPIOTE_INTENCLR_IN3_Msk (0x1UL << GPIOTE_INTENCLR_IN3_Pos)
#define GPIOTE_INTENCLR_IN3_Disabled (0x0UL)
#define GPIOTE_INTENCLR_IN3_Enabled (0x1UL)
#define GPIOTE_INTENCLR_IN3_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event IN[2] */
#define GPIOTE_INTENCLR_IN2_Pos (2UL)
#define GPIOTE_INTENCLR_IN2_Msk (0x1UL << GPIOTE_INTENCLR_IN2_Pos)
#define GPIOTE_INTENCLR_IN2_Disabled (0x0UL)
#define GPIOTE_INTENCLR_IN2_Enabled (0x1UL)
#define GPIOTE_INTENCLR_IN2_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event IN[1] */
#define GPIOTE_INTENCLR_IN1_Pos (1UL)
#define GPIOTE_INTENCLR_IN1_Msk (0x1UL << GPIOTE_INTENCLR_IN1_Pos)
#define GPIOTE_INTENCLR_IN1_Disabled (0x0UL)
#define GPIOTE_INTENCLR_IN1_Enabled (0x1UL)
#define GPIOTE_INTENCLR_IN1_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event IN[0] */
#define GPIOTE_INTENCLR_IN0_Pos (0UL)
#define GPIOTE_INTENCLR_IN0_Msk (0x1UL << GPIOTE_INTENCLR_IN0_Pos)
#define GPIOTE_INTENCLR_IN0_Disabled (0x0UL)
#define GPIOTE_INTENCLR_IN0_Enabled (0x1UL)
#define GPIOTE_INTENCLR_IN0_Clear (0x1UL)

/* Register: GPIOTE_LATENCY */
/* Description: Latency selection for Event mode (MODE=Event) with rising or falling edge detection on the pin. */

/* Bit 0 : Latency setting */
#define GPIOTE_LATENCY_LATENCY_Pos (0UL)
#define GPIOTE_LATENCY_LATENCY_Msk (0x1UL << GPIOTE_LATENCY_LATENCY_Pos)
#define GPIOTE_LATENCY_LATENCY_LowPower (0x0UL)
#define GPIOTE_LATENCY_LATENCY_LowLatency (0x1UL)

/* Register: GPIOTE_CONFIG */
/* Description: Description collection: Configuration for OUT[n], SET[n], and CLR[n] tasks and IN[n] event */

/* Bit 20 : When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect. */
#define GPIOTE_CONFIG_OUTINIT_Pos (20UL)
#define GPIOTE_CONFIG_OUTINIT_Msk (0x1UL << GPIOTE_CONFIG_OUTINIT_Pos)
#define GPIOTE_CONFIG_OUTINIT_Low (0x0UL)
#define GPIOTE_CONFIG_OUTINIT_High (0x1UL)

/* Bits 17..16 : When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event. */
#define GPIOTE_CONFIG_POLARITY_Pos (16UL)
#define GPIOTE_CONFIG_POLARITY_Msk (0x3UL << GPIOTE_CONFIG_POLARITY_Pos)
#define GPIOTE_CONFIG_POLARITY_None (0x0UL)
#define GPIOTE_CONFIG_POLARITY_LoToHi (0x1UL)
#define GPIOTE_CONFIG_POLARITY_HiToLo (0x2UL)
#define GPIOTE_CONFIG_POLARITY_Toggle (0x3UL)

/* Bit 13 : Port number */
#define GPIOTE_CONFIG_PORT_Pos (13UL)
#define GPIOTE_CONFIG_PORT_Msk (0x1UL << GPIOTE_CONFIG_PORT_Pos)

/* Bits 12..8 : GPIO number associated with SET[n], CLR[n], and OUT[n] tasks and IN[n] event */
#define GPIOTE_CONFIG_PSEL_Pos (8UL)
#define GPIOTE_CONFIG_PSEL_Msk (0x1FUL << GPIOTE_CONFIG_PSEL_Pos)

/* Bits 1..0 : Mode */
#define GPIOTE_CONFIG_MODE_Pos (0UL)
#define GPIOTE_CONFIG_MODE_Msk (0x3UL << GPIOTE_CONFIG_MODE_Pos)
#define GPIOTE_CONFIG_MODE_Disabled (0x0UL)
#define GPIOTE_CONFIG_MODE_Event (0x1UL)
#define GPIOTE_CONFIG_MODE_Task (0x3UL)


/* Peripheral: IPC */
/* Description: Interprocessor communication */

/* Register: IPC_TASKS_SEND */
/* Description: Description collection: Trigger events on IPC channel enabled in SEND_CNF[n] */

/* Bit 0 : Trigger events on IPC channel enabled in SEND_CNF[n] */
#define IPC_TASKS_SEND_TASKS_SEND_Pos (0UL)
#define IPC_TASKS_SEND_TASKS_SEND_Msk (0x1UL << IPC_TASKS_SEND_TASKS_SEND_Pos)
#define IPC_TASKS_SEND_TASKS_SEND_Trigger (0x1UL)

/* Register: IPC_SUBSCRIBE_SEND */
/* Description: Description collection: Subscribe configuration for task SEND[n] */

/* Bit 31 :   */
#define IPC_SUBSCRIBE_SEND_EN_Pos (31UL)
#define IPC_SUBSCRIBE_SEND_EN_Msk (0x1UL << IPC_SUBSCRIBE_SEND_EN_Pos)
#define IPC_SUBSCRIBE_SEND_EN_Disabled (0x0UL)
#define IPC_SUBSCRIBE_SEND_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task SEND[n] will subscribe to */
#define IPC_SUBSCRIBE_SEND_CHIDX_Pos (0UL)
#define IPC_SUBSCRIBE_SEND_CHIDX_Msk (0xFFUL << IPC_SUBSCRIBE_SEND_CHIDX_Pos)

/* Register: IPC_EVENTS_RECEIVE */
/* Description: Description collection: Event received on one or more of the enabled IPC channels in RECEIVE_CNF[n] */

/* Bit 0 : Event received on one or more of the enabled IPC channels in RECEIVE_CNF[n] */
#define IPC_EVENTS_RECEIVE_EVENTS_RECEIVE_Pos (0UL)
#define IPC_EVENTS_RECEIVE_EVENTS_RECEIVE_Msk (0x1UL << IPC_EVENTS_RECEIVE_EVENTS_RECEIVE_Pos)
#define IPC_EVENTS_RECEIVE_EVENTS_RECEIVE_NotGenerated (0x0UL)
#define IPC_EVENTS_RECEIVE_EVENTS_RECEIVE_Generated (0x1UL)

/* Register: IPC_PUBLISH_RECEIVE */
/* Description: Description collection: Publish configuration for event RECEIVE[n] */

/* Bit 31 :   */
#define IPC_PUBLISH_RECEIVE_EN_Pos (31UL)
#define IPC_PUBLISH_RECEIVE_EN_Msk (0x1UL << IPC_PUBLISH_RECEIVE_EN_Pos)
#define IPC_PUBLISH_RECEIVE_EN_Disabled (0x0UL)
#define IPC_PUBLISH_RECEIVE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RECEIVE[n] will publish to */
#define IPC_PUBLISH_RECEIVE_CHIDX_Pos (0UL)
#define IPC_PUBLISH_RECEIVE_CHIDX_Msk (0xFFUL << IPC_PUBLISH_RECEIVE_CHIDX_Pos)

/* Register: IPC_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 15 : Enable or disable interrupt for event RECEIVE[15] */
#define IPC_INTEN_RECEIVE15_Pos (15UL)
#define IPC_INTEN_RECEIVE15_Msk (0x1UL << IPC_INTEN_RECEIVE15_Pos)
#define IPC_INTEN_RECEIVE15_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE15_Enabled (0x1UL)

/* Bit 14 : Enable or disable interrupt for event RECEIVE[14] */
#define IPC_INTEN_RECEIVE14_Pos (14UL)
#define IPC_INTEN_RECEIVE14_Msk (0x1UL << IPC_INTEN_RECEIVE14_Pos)
#define IPC_INTEN_RECEIVE14_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE14_Enabled (0x1UL)

/* Bit 13 : Enable or disable interrupt for event RECEIVE[13] */
#define IPC_INTEN_RECEIVE13_Pos (13UL)
#define IPC_INTEN_RECEIVE13_Msk (0x1UL << IPC_INTEN_RECEIVE13_Pos)
#define IPC_INTEN_RECEIVE13_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE13_Enabled (0x1UL)

/* Bit 12 : Enable or disable interrupt for event RECEIVE[12] */
#define IPC_INTEN_RECEIVE12_Pos (12UL)
#define IPC_INTEN_RECEIVE12_Msk (0x1UL << IPC_INTEN_RECEIVE12_Pos)
#define IPC_INTEN_RECEIVE12_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE12_Enabled (0x1UL)

/* Bit 11 : Enable or disable interrupt for event RECEIVE[11] */
#define IPC_INTEN_RECEIVE11_Pos (11UL)
#define IPC_INTEN_RECEIVE11_Msk (0x1UL << IPC_INTEN_RECEIVE11_Pos)
#define IPC_INTEN_RECEIVE11_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE11_Enabled (0x1UL)

/* Bit 10 : Enable or disable interrupt for event RECEIVE[10] */
#define IPC_INTEN_RECEIVE10_Pos (10UL)
#define IPC_INTEN_RECEIVE10_Msk (0x1UL << IPC_INTEN_RECEIVE10_Pos)
#define IPC_INTEN_RECEIVE10_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE10_Enabled (0x1UL)

/* Bit 9 : Enable or disable interrupt for event RECEIVE[9] */
#define IPC_INTEN_RECEIVE9_Pos (9UL)
#define IPC_INTEN_RECEIVE9_Msk (0x1UL << IPC_INTEN_RECEIVE9_Pos)
#define IPC_INTEN_RECEIVE9_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE9_Enabled (0x1UL)

/* Bit 8 : Enable or disable interrupt for event RECEIVE[8] */
#define IPC_INTEN_RECEIVE8_Pos (8UL)
#define IPC_INTEN_RECEIVE8_Msk (0x1UL << IPC_INTEN_RECEIVE8_Pos)
#define IPC_INTEN_RECEIVE8_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE8_Enabled (0x1UL)

/* Bit 7 : Enable or disable interrupt for event RECEIVE[7] */
#define IPC_INTEN_RECEIVE7_Pos (7UL)
#define IPC_INTEN_RECEIVE7_Msk (0x1UL << IPC_INTEN_RECEIVE7_Pos)
#define IPC_INTEN_RECEIVE7_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE7_Enabled (0x1UL)

/* Bit 6 : Enable or disable interrupt for event RECEIVE[6] */
#define IPC_INTEN_RECEIVE6_Pos (6UL)
#define IPC_INTEN_RECEIVE6_Msk (0x1UL << IPC_INTEN_RECEIVE6_Pos)
#define IPC_INTEN_RECEIVE6_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE6_Enabled (0x1UL)

/* Bit 5 : Enable or disable interrupt for event RECEIVE[5] */
#define IPC_INTEN_RECEIVE5_Pos (5UL)
#define IPC_INTEN_RECEIVE5_Msk (0x1UL << IPC_INTEN_RECEIVE5_Pos)
#define IPC_INTEN_RECEIVE5_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE5_Enabled (0x1UL)

/* Bit 4 : Enable or disable interrupt for event RECEIVE[4] */
#define IPC_INTEN_RECEIVE4_Pos (4UL)
#define IPC_INTEN_RECEIVE4_Msk (0x1UL << IPC_INTEN_RECEIVE4_Pos)
#define IPC_INTEN_RECEIVE4_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE4_Enabled (0x1UL)

/* Bit 3 : Enable or disable interrupt for event RECEIVE[3] */
#define IPC_INTEN_RECEIVE3_Pos (3UL)
#define IPC_INTEN_RECEIVE3_Msk (0x1UL << IPC_INTEN_RECEIVE3_Pos)
#define IPC_INTEN_RECEIVE3_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE3_Enabled (0x1UL)

/* Bit 2 : Enable or disable interrupt for event RECEIVE[2] */
#define IPC_INTEN_RECEIVE2_Pos (2UL)
#define IPC_INTEN_RECEIVE2_Msk (0x1UL << IPC_INTEN_RECEIVE2_Pos)
#define IPC_INTEN_RECEIVE2_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE2_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event RECEIVE[1] */
#define IPC_INTEN_RECEIVE1_Pos (1UL)
#define IPC_INTEN_RECEIVE1_Msk (0x1UL << IPC_INTEN_RECEIVE1_Pos)
#define IPC_INTEN_RECEIVE1_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE1_Enabled (0x1UL)

/* Bit 0 : Enable or disable interrupt for event RECEIVE[0] */
#define IPC_INTEN_RECEIVE0_Pos (0UL)
#define IPC_INTEN_RECEIVE0_Msk (0x1UL << IPC_INTEN_RECEIVE0_Pos)
#define IPC_INTEN_RECEIVE0_Disabled (0x0UL)
#define IPC_INTEN_RECEIVE0_Enabled (0x1UL)

/* Register: IPC_INTENSET */
/* Description: Enable interrupt */

/* Bit 15 : Write '1' to enable interrupt for event RECEIVE[15] */
#define IPC_INTENSET_RECEIVE15_Pos (15UL)
#define IPC_INTENSET_RECEIVE15_Msk (0x1UL << IPC_INTENSET_RECEIVE15_Pos)
#define IPC_INTENSET_RECEIVE15_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE15_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE15_Set (0x1UL)

/* Bit 14 : Write '1' to enable interrupt for event RECEIVE[14] */
#define IPC_INTENSET_RECEIVE14_Pos (14UL)
#define IPC_INTENSET_RECEIVE14_Msk (0x1UL << IPC_INTENSET_RECEIVE14_Pos)
#define IPC_INTENSET_RECEIVE14_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE14_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE14_Set (0x1UL)

/* Bit 13 : Write '1' to enable interrupt for event RECEIVE[13] */
#define IPC_INTENSET_RECEIVE13_Pos (13UL)
#define IPC_INTENSET_RECEIVE13_Msk (0x1UL << IPC_INTENSET_RECEIVE13_Pos)
#define IPC_INTENSET_RECEIVE13_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE13_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE13_Set (0x1UL)

/* Bit 12 : Write '1' to enable interrupt for event RECEIVE[12] */
#define IPC_INTENSET_RECEIVE12_Pos (12UL)
#define IPC_INTENSET_RECEIVE12_Msk (0x1UL << IPC_INTENSET_RECEIVE12_Pos)
#define IPC_INTENSET_RECEIVE12_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE12_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE12_Set (0x1UL)

/* Bit 11 : Write '1' to enable interrupt for event RECEIVE[11] */
#define IPC_INTENSET_RECEIVE11_Pos (11UL)
#define IPC_INTENSET_RECEIVE11_Msk (0x1UL << IPC_INTENSET_RECEIVE11_Pos)
#define IPC_INTENSET_RECEIVE11_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE11_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE11_Set (0x1UL)

/* Bit 10 : Write '1' to enable interrupt for event RECEIVE[10] */
#define IPC_INTENSET_RECEIVE10_Pos (10UL)
#define IPC_INTENSET_RECEIVE10_Msk (0x1UL << IPC_INTENSET_RECEIVE10_Pos)
#define IPC_INTENSET_RECEIVE10_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE10_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE10_Set (0x1UL)

/* Bit 9 : Write '1' to enable interrupt for event RECEIVE[9] */
#define IPC_INTENSET_RECEIVE9_Pos (9UL)
#define IPC_INTENSET_RECEIVE9_Msk (0x1UL << IPC_INTENSET_RECEIVE9_Pos)
#define IPC_INTENSET_RECEIVE9_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE9_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE9_Set (0x1UL)

/* Bit 8 : Write '1' to enable interrupt for event RECEIVE[8] */
#define IPC_INTENSET_RECEIVE8_Pos (8UL)
#define IPC_INTENSET_RECEIVE8_Msk (0x1UL << IPC_INTENSET_RECEIVE8_Pos)
#define IPC_INTENSET_RECEIVE8_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE8_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE8_Set (0x1UL)

/* Bit 7 : Write '1' to enable interrupt for event RECEIVE[7] */
#define IPC_INTENSET_RECEIVE7_Pos (7UL)
#define IPC_INTENSET_RECEIVE7_Msk (0x1UL << IPC_INTENSET_RECEIVE7_Pos)
#define IPC_INTENSET_RECEIVE7_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE7_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE7_Set (0x1UL)

/* Bit 6 : Write '1' to enable interrupt for event RECEIVE[6] */
#define IPC_INTENSET_RECEIVE6_Pos (6UL)
#define IPC_INTENSET_RECEIVE6_Msk (0x1UL << IPC_INTENSET_RECEIVE6_Pos)
#define IPC_INTENSET_RECEIVE6_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE6_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE6_Set (0x1UL)

/* Bit 5 : Write '1' to enable interrupt for event RECEIVE[5] */
#define IPC_INTENSET_RECEIVE5_Pos (5UL)
#define IPC_INTENSET_RECEIVE5_Msk (0x1UL << IPC_INTENSET_RECEIVE5_Pos)
#define IPC_INTENSET_RECEIVE5_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE5_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE5_Set (0x1UL)

/* Bit 4 : Write '1' to enable interrupt for event RECEIVE[4] */
#define IPC_INTENSET_RECEIVE4_Pos (4UL)
#define IPC_INTENSET_RECEIVE4_Msk (0x1UL << IPC_INTENSET_RECEIVE4_Pos)
#define IPC_INTENSET_RECEIVE4_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE4_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE4_Set (0x1UL)

/* Bit 3 : Write '1' to enable interrupt for event RECEIVE[3] */
#define IPC_INTENSET_RECEIVE3_Pos (3UL)
#define IPC_INTENSET_RECEIVE3_Msk (0x1UL << IPC_INTENSET_RECEIVE3_Pos)
#define IPC_INTENSET_RECEIVE3_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE3_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE3_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event RECEIVE[2] */
#define IPC_INTENSET_RECEIVE2_Pos (2UL)
#define IPC_INTENSET_RECEIVE2_Msk (0x1UL << IPC_INTENSET_RECEIVE2_Pos)
#define IPC_INTENSET_RECEIVE2_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE2_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE2_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event RECEIVE[1] */
#define IPC_INTENSET_RECEIVE1_Pos (1UL)
#define IPC_INTENSET_RECEIVE1_Msk (0x1UL << IPC_INTENSET_RECEIVE1_Pos)
#define IPC_INTENSET_RECEIVE1_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE1_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE1_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event RECEIVE[0] */
#define IPC_INTENSET_RECEIVE0_Pos (0UL)
#define IPC_INTENSET_RECEIVE0_Msk (0x1UL << IPC_INTENSET_RECEIVE0_Pos)
#define IPC_INTENSET_RECEIVE0_Disabled (0x0UL)
#define IPC_INTENSET_RECEIVE0_Enabled (0x1UL)
#define IPC_INTENSET_RECEIVE0_Set (0x1UL)

/* Register: IPC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 15 : Write '1' to disable interrupt for event RECEIVE[15] */
#define IPC_INTENCLR_RECEIVE15_Pos (15UL)
#define IPC_INTENCLR_RECEIVE15_Msk (0x1UL << IPC_INTENCLR_RECEIVE15_Pos)
#define IPC_INTENCLR_RECEIVE15_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE15_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE15_Clear (0x1UL)

/* Bit 14 : Write '1' to disable interrupt for event RECEIVE[14] */
#define IPC_INTENCLR_RECEIVE14_Pos (14UL)
#define IPC_INTENCLR_RECEIVE14_Msk (0x1UL << IPC_INTENCLR_RECEIVE14_Pos)
#define IPC_INTENCLR_RECEIVE14_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE14_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE14_Clear (0x1UL)

/* Bit 13 : Write '1' to disable interrupt for event RECEIVE[13] */
#define IPC_INTENCLR_RECEIVE13_Pos (13UL)
#define IPC_INTENCLR_RECEIVE13_Msk (0x1UL << IPC_INTENCLR_RECEIVE13_Pos)
#define IPC_INTENCLR_RECEIVE13_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE13_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE13_Clear (0x1UL)

/* Bit 12 : Write '1' to disable interrupt for event RECEIVE[12] */
#define IPC_INTENCLR_RECEIVE12_Pos (12UL)
#define IPC_INTENCLR_RECEIVE12_Msk (0x1UL << IPC_INTENCLR_RECEIVE12_Pos)
#define IPC_INTENCLR_RECEIVE12_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE12_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE12_Clear (0x1UL)

/* Bit 11 : Write '1' to disable interrupt for event RECEIVE[11] */
#define IPC_INTENCLR_RECEIVE11_Pos (11UL)
#define IPC_INTENCLR_RECEIVE11_Msk (0x1UL << IPC_INTENCLR_RECEIVE11_Pos)
#define IPC_INTENCLR_RECEIVE11_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE11_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE11_Clear (0x1UL)

/* Bit 10 : Write '1' to disable interrupt for event RECEIVE[10] */
#define IPC_INTENCLR_RECEIVE10_Pos (10UL)
#define IPC_INTENCLR_RECEIVE10_Msk (0x1UL << IPC_INTENCLR_RECEIVE10_Pos)
#define IPC_INTENCLR_RECEIVE10_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE10_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE10_Clear (0x1UL)

/* Bit 9 : Write '1' to disable interrupt for event RECEIVE[9] */
#define IPC_INTENCLR_RECEIVE9_Pos (9UL)
#define IPC_INTENCLR_RECEIVE9_Msk (0x1UL << IPC_INTENCLR_RECEIVE9_Pos)
#define IPC_INTENCLR_RECEIVE9_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE9_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE9_Clear (0x1UL)

/* Bit 8 : Write '1' to disable interrupt for event RECEIVE[8] */
#define IPC_INTENCLR_RECEIVE8_Pos (8UL)
#define IPC_INTENCLR_RECEIVE8_Msk (0x1UL << IPC_INTENCLR_RECEIVE8_Pos)
#define IPC_INTENCLR_RECEIVE8_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE8_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE8_Clear (0x1UL)

/* Bit 7 : Write '1' to disable interrupt for event RECEIVE[7] */
#define IPC_INTENCLR_RECEIVE7_Pos (7UL)
#define IPC_INTENCLR_RECEIVE7_Msk (0x1UL << IPC_INTENCLR_RECEIVE7_Pos)
#define IPC_INTENCLR_RECEIVE7_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE7_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE7_Clear (0x1UL)

/* Bit 6 : Write '1' to disable interrupt for event RECEIVE[6] */
#define IPC_INTENCLR_RECEIVE6_Pos (6UL)
#define IPC_INTENCLR_RECEIVE6_Msk (0x1UL << IPC_INTENCLR_RECEIVE6_Pos)
#define IPC_INTENCLR_RECEIVE6_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE6_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE6_Clear (0x1UL)

/* Bit 5 : Write '1' to disable interrupt for event RECEIVE[5] */
#define IPC_INTENCLR_RECEIVE5_Pos (5UL)
#define IPC_INTENCLR_RECEIVE5_Msk (0x1UL << IPC_INTENCLR_RECEIVE5_Pos)
#define IPC_INTENCLR_RECEIVE5_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE5_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE5_Clear (0x1UL)

/* Bit 4 : Write '1' to disable interrupt for event RECEIVE[4] */
#define IPC_INTENCLR_RECEIVE4_Pos (4UL)
#define IPC_INTENCLR_RECEIVE4_Msk (0x1UL << IPC_INTENCLR_RECEIVE4_Pos)
#define IPC_INTENCLR_RECEIVE4_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE4_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE4_Clear (0x1UL)

/* Bit 3 : Write '1' to disable interrupt for event RECEIVE[3] */
#define IPC_INTENCLR_RECEIVE3_Pos (3UL)
#define IPC_INTENCLR_RECEIVE3_Msk (0x1UL << IPC_INTENCLR_RECEIVE3_Pos)
#define IPC_INTENCLR_RECEIVE3_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE3_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE3_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event RECEIVE[2] */
#define IPC_INTENCLR_RECEIVE2_Pos (2UL)
#define IPC_INTENCLR_RECEIVE2_Msk (0x1UL << IPC_INTENCLR_RECEIVE2_Pos)
#define IPC_INTENCLR_RECEIVE2_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE2_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE2_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event RECEIVE[1] */
#define IPC_INTENCLR_RECEIVE1_Pos (1UL)
#define IPC_INTENCLR_RECEIVE1_Msk (0x1UL << IPC_INTENCLR_RECEIVE1_Pos)
#define IPC_INTENCLR_RECEIVE1_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE1_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE1_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event RECEIVE[0] */
#define IPC_INTENCLR_RECEIVE0_Pos (0UL)
#define IPC_INTENCLR_RECEIVE0_Msk (0x1UL << IPC_INTENCLR_RECEIVE0_Pos)
#define IPC_INTENCLR_RECEIVE0_Disabled (0x0UL)
#define IPC_INTENCLR_RECEIVE0_Enabled (0x1UL)
#define IPC_INTENCLR_RECEIVE0_Clear (0x1UL)

/* Register: IPC_INTPEND */
/* Description: Pending interrupts */

/* Bit 15 : Read pending status of interrupt for event RECEIVE[15] */
#define IPC_INTPEND_RECEIVE15_Pos (15UL)
#define IPC_INTPEND_RECEIVE15_Msk (0x1UL << IPC_INTPEND_RECEIVE15_Pos)
#define IPC_INTPEND_RECEIVE15_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE15_Pending (0x1UL)

/* Bit 14 : Read pending status of interrupt for event RECEIVE[14] */
#define IPC_INTPEND_RECEIVE14_Pos (14UL)
#define IPC_INTPEND_RECEIVE14_Msk (0x1UL << IPC_INTPEND_RECEIVE14_Pos)
#define IPC_INTPEND_RECEIVE14_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE14_Pending (0x1UL)

/* Bit 13 : Read pending status of interrupt for event RECEIVE[13] */
#define IPC_INTPEND_RECEIVE13_Pos (13UL)
#define IPC_INTPEND_RECEIVE13_Msk (0x1UL << IPC_INTPEND_RECEIVE13_Pos)
#define IPC_INTPEND_RECEIVE13_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE13_Pending (0x1UL)

/* Bit 12 : Read pending status of interrupt for event RECEIVE[12] */
#define IPC_INTPEND_RECEIVE12_Pos (12UL)
#define IPC_INTPEND_RECEIVE12_Msk (0x1UL << IPC_INTPEND_RECEIVE12_Pos)
#define IPC_INTPEND_RECEIVE12_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE12_Pending (0x1UL)

/* Bit 11 : Read pending status of interrupt for event RECEIVE[11] */
#define IPC_INTPEND_RECEIVE11_Pos (11UL)
#define IPC_INTPEND_RECEIVE11_Msk (0x1UL << IPC_INTPEND_RECEIVE11_Pos)
#define IPC_INTPEND_RECEIVE11_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE11_Pending (0x1UL)

/* Bit 10 : Read pending status of interrupt for event RECEIVE[10] */
#define IPC_INTPEND_RECEIVE10_Pos (10UL)
#define IPC_INTPEND_RECEIVE10_Msk (0x1UL << IPC_INTPEND_RECEIVE10_Pos)
#define IPC_INTPEND_RECEIVE10_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE10_Pending (0x1UL)

/* Bit 9 : Read pending status of interrupt for event RECEIVE[9] */
#define IPC_INTPEND_RECEIVE9_Pos (9UL)
#define IPC_INTPEND_RECEIVE9_Msk (0x1UL << IPC_INTPEND_RECEIVE9_Pos)
#define IPC_INTPEND_RECEIVE9_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE9_Pending (0x1UL)

/* Bit 8 : Read pending status of interrupt for event RECEIVE[8] */
#define IPC_INTPEND_RECEIVE8_Pos (8UL)
#define IPC_INTPEND_RECEIVE8_Msk (0x1UL << IPC_INTPEND_RECEIVE8_Pos)
#define IPC_INTPEND_RECEIVE8_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE8_Pending (0x1UL)

/* Bit 7 : Read pending status of interrupt for event RECEIVE[7] */
#define IPC_INTPEND_RECEIVE7_Pos (7UL)
#define IPC_INTPEND_RECEIVE7_Msk (0x1UL << IPC_INTPEND_RECEIVE7_Pos)
#define IPC_INTPEND_RECEIVE7_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE7_Pending (0x1UL)

/* Bit 6 : Read pending status of interrupt for event RECEIVE[6] */
#define IPC_INTPEND_RECEIVE6_Pos (6UL)
#define IPC_INTPEND_RECEIVE6_Msk (0x1UL << IPC_INTPEND_RECEIVE6_Pos)
#define IPC_INTPEND_RECEIVE6_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE6_Pending (0x1UL)

/* Bit 5 : Read pending status of interrupt for event RECEIVE[5] */
#define IPC_INTPEND_RECEIVE5_Pos (5UL)
#define IPC_INTPEND_RECEIVE5_Msk (0x1UL << IPC_INTPEND_RECEIVE5_Pos)
#define IPC_INTPEND_RECEIVE5_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE5_Pending (0x1UL)

/* Bit 4 : Read pending status of interrupt for event RECEIVE[4] */
#define IPC_INTPEND_RECEIVE4_Pos (4UL)
#define IPC_INTPEND_RECEIVE4_Msk (0x1UL << IPC_INTPEND_RECEIVE4_Pos)
#define IPC_INTPEND_RECEIVE4_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE4_Pending (0x1UL)

/* Bit 3 : Read pending status of interrupt for event RECEIVE[3] */
#define IPC_INTPEND_RECEIVE3_Pos (3UL)
#define IPC_INTPEND_RECEIVE3_Msk (0x1UL << IPC_INTPEND_RECEIVE3_Pos)
#define IPC_INTPEND_RECEIVE3_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE3_Pending (0x1UL)

/* Bit 2 : Read pending status of interrupt for event RECEIVE[2] */
#define IPC_INTPEND_RECEIVE2_Pos (2UL)
#define IPC_INTPEND_RECEIVE2_Msk (0x1UL << IPC_INTPEND_RECEIVE2_Pos)
#define IPC_INTPEND_RECEIVE2_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE2_Pending (0x1UL)

/* Bit 1 : Read pending status of interrupt for event RECEIVE[1] */
#define IPC_INTPEND_RECEIVE1_Pos (1UL)
#define IPC_INTPEND_RECEIVE1_Msk (0x1UL << IPC_INTPEND_RECEIVE1_Pos)
#define IPC_INTPEND_RECEIVE1_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE1_Pending (0x1UL)

/* Bit 0 : Read pending status of interrupt for event RECEIVE[0] */
#define IPC_INTPEND_RECEIVE0_Pos (0UL)
#define IPC_INTPEND_RECEIVE0_Msk (0x1UL << IPC_INTPEND_RECEIVE0_Pos)
#define IPC_INTPEND_RECEIVE0_NotPending (0x0UL)
#define IPC_INTPEND_RECEIVE0_Pending (0x1UL)

/* Register: IPC_SEND_CNF */
/* Description: Description collection: Send event configuration for TASKS_SEND[n] */

/* Bit 15 : Enable broadcasting on IPC channel 15 */
#define IPC_SEND_CNF_CHEN15_Pos (15UL)
#define IPC_SEND_CNF_CHEN15_Msk (0x1UL << IPC_SEND_CNF_CHEN15_Pos)
#define IPC_SEND_CNF_CHEN15_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN15_Enable (0x1UL)

/* Bit 14 : Enable broadcasting on IPC channel 14 */
#define IPC_SEND_CNF_CHEN14_Pos (14UL)
#define IPC_SEND_CNF_CHEN14_Msk (0x1UL << IPC_SEND_CNF_CHEN14_Pos)
#define IPC_SEND_CNF_CHEN14_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN14_Enable (0x1UL)

/* Bit 13 : Enable broadcasting on IPC channel 13 */
#define IPC_SEND_CNF_CHEN13_Pos (13UL)
#define IPC_SEND_CNF_CHEN13_Msk (0x1UL << IPC_SEND_CNF_CHEN13_Pos)
#define IPC_SEND_CNF_CHEN13_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN13_Enable (0x1UL)

/* Bit 12 : Enable broadcasting on IPC channel 12 */
#define IPC_SEND_CNF_CHEN12_Pos (12UL)
#define IPC_SEND_CNF_CHEN12_Msk (0x1UL << IPC_SEND_CNF_CHEN12_Pos)
#define IPC_SEND_CNF_CHEN12_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN12_Enable (0x1UL)

/* Bit 11 : Enable broadcasting on IPC channel 11 */
#define IPC_SEND_CNF_CHEN11_Pos (11UL)
#define IPC_SEND_CNF_CHEN11_Msk (0x1UL << IPC_SEND_CNF_CHEN11_Pos)
#define IPC_SEND_CNF_CHEN11_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN11_Enable (0x1UL)

/* Bit 10 : Enable broadcasting on IPC channel 10 */
#define IPC_SEND_CNF_CHEN10_Pos (10UL)
#define IPC_SEND_CNF_CHEN10_Msk (0x1UL << IPC_SEND_CNF_CHEN10_Pos)
#define IPC_SEND_CNF_CHEN10_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN10_Enable (0x1UL)

/* Bit 9 : Enable broadcasting on IPC channel 9 */
#define IPC_SEND_CNF_CHEN9_Pos (9UL)
#define IPC_SEND_CNF_CHEN9_Msk (0x1UL << IPC_SEND_CNF_CHEN9_Pos)
#define IPC_SEND_CNF_CHEN9_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN9_Enable (0x1UL)

/* Bit 8 : Enable broadcasting on IPC channel 8 */
#define IPC_SEND_CNF_CHEN8_Pos (8UL)
#define IPC_SEND_CNF_CHEN8_Msk (0x1UL << IPC_SEND_CNF_CHEN8_Pos)
#define IPC_SEND_CNF_CHEN8_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN8_Enable (0x1UL)

/* Bit 7 : Enable broadcasting on IPC channel 7 */
#define IPC_SEND_CNF_CHEN7_Pos (7UL)
#define IPC_SEND_CNF_CHEN7_Msk (0x1UL << IPC_SEND_CNF_CHEN7_Pos)
#define IPC_SEND_CNF_CHEN7_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN7_Enable (0x1UL)

/* Bit 6 : Enable broadcasting on IPC channel 6 */
#define IPC_SEND_CNF_CHEN6_Pos (6UL)
#define IPC_SEND_CNF_CHEN6_Msk (0x1UL << IPC_SEND_CNF_CHEN6_Pos)
#define IPC_SEND_CNF_CHEN6_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN6_Enable (0x1UL)

/* Bit 5 : Enable broadcasting on IPC channel 5 */
#define IPC_SEND_CNF_CHEN5_Pos (5UL)
#define IPC_SEND_CNF_CHEN5_Msk (0x1UL << IPC_SEND_CNF_CHEN5_Pos)
#define IPC_SEND_CNF_CHEN5_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN5_Enable (0x1UL)

/* Bit 4 : Enable broadcasting on IPC channel 4 */
#define IPC_SEND_CNF_CHEN4_Pos (4UL)
#define IPC_SEND_CNF_CHEN4_Msk (0x1UL << IPC_SEND_CNF_CHEN4_Pos)
#define IPC_SEND_CNF_CHEN4_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN4_Enable (0x1UL)

/* Bit 3 : Enable broadcasting on IPC channel 3 */
#define IPC_SEND_CNF_CHEN3_Pos (3UL)
#define IPC_SEND_CNF_CHEN3_Msk (0x1UL << IPC_SEND_CNF_CHEN3_Pos)
#define IPC_SEND_CNF_CHEN3_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN3_Enable (0x1UL)

/* Bit 2 : Enable broadcasting on IPC channel 2 */
#define IPC_SEND_CNF_CHEN2_Pos (2UL)
#define IPC_SEND_CNF_CHEN2_Msk (0x1UL << IPC_SEND_CNF_CHEN2_Pos)
#define IPC_SEND_CNF_CHEN2_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN2_Enable (0x1UL)

/* Bit 1 : Enable broadcasting on IPC channel 1 */
#define IPC_SEND_CNF_CHEN1_Pos (1UL)
#define IPC_SEND_CNF_CHEN1_Msk (0x1UL << IPC_SEND_CNF_CHEN1_Pos)
#define IPC_SEND_CNF_CHEN1_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN1_Enable (0x1UL)

/* Bit 0 : Enable broadcasting on IPC channel 0 */
#define IPC_SEND_CNF_CHEN0_Pos (0UL)
#define IPC_SEND_CNF_CHEN0_Msk (0x1UL << IPC_SEND_CNF_CHEN0_Pos)
#define IPC_SEND_CNF_CHEN0_Disable (0x0UL)
#define IPC_SEND_CNF_CHEN0_Enable (0x1UL)

/* Register: IPC_RECEIVE_CNF */
/* Description: Description collection: Receive event configuration for EVENTS_RECEIVE[n] */

/* Bit 15 : Enable subscription to IPC channel 15 */
#define IPC_RECEIVE_CNF_CHEN15_Pos (15UL)
#define IPC_RECEIVE_CNF_CHEN15_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN15_Pos)
#define IPC_RECEIVE_CNF_CHEN15_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN15_Enable (0x1UL)

/* Bit 14 : Enable subscription to IPC channel 14 */
#define IPC_RECEIVE_CNF_CHEN14_Pos (14UL)
#define IPC_RECEIVE_CNF_CHEN14_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN14_Pos)
#define IPC_RECEIVE_CNF_CHEN14_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN14_Enable (0x1UL)

/* Bit 13 : Enable subscription to IPC channel 13 */
#define IPC_RECEIVE_CNF_CHEN13_Pos (13UL)
#define IPC_RECEIVE_CNF_CHEN13_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN13_Pos)
#define IPC_RECEIVE_CNF_CHEN13_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN13_Enable (0x1UL)

/* Bit 12 : Enable subscription to IPC channel 12 */
#define IPC_RECEIVE_CNF_CHEN12_Pos (12UL)
#define IPC_RECEIVE_CNF_CHEN12_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN12_Pos)
#define IPC_RECEIVE_CNF_CHEN12_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN12_Enable (0x1UL)

/* Bit 11 : Enable subscription to IPC channel 11 */
#define IPC_RECEIVE_CNF_CHEN11_Pos (11UL)
#define IPC_RECEIVE_CNF_CHEN11_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN11_Pos)
#define IPC_RECEIVE_CNF_CHEN11_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN11_Enable (0x1UL)

/* Bit 10 : Enable subscription to IPC channel 10 */
#define IPC_RECEIVE_CNF_CHEN10_Pos (10UL)
#define IPC_RECEIVE_CNF_CHEN10_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN10_Pos)
#define IPC_RECEIVE_CNF_CHEN10_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN10_Enable (0x1UL)

/* Bit 9 : Enable subscription to IPC channel 9 */
#define IPC_RECEIVE_CNF_CHEN9_Pos (9UL)
#define IPC_RECEIVE_CNF_CHEN9_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN9_Pos)
#define IPC_RECEIVE_CNF_CHEN9_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN9_Enable (0x1UL)

/* Bit 8 : Enable subscription to IPC channel 8 */
#define IPC_RECEIVE_CNF_CHEN8_Pos (8UL)
#define IPC_RECEIVE_CNF_CHEN8_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN8_Pos)
#define IPC_RECEIVE_CNF_CHEN8_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN8_Enable (0x1UL)

/* Bit 7 : Enable subscription to IPC channel 7 */
#define IPC_RECEIVE_CNF_CHEN7_Pos (7UL)
#define IPC_RECEIVE_CNF_CHEN7_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN7_Pos)
#define IPC_RECEIVE_CNF_CHEN7_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN7_Enable (0x1UL)

/* Bit 6 : Enable subscription to IPC channel 6 */
#define IPC_RECEIVE_CNF_CHEN6_Pos (6UL)
#define IPC_RECEIVE_CNF_CHEN6_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN6_Pos)
#define IPC_RECEIVE_CNF_CHEN6_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN6_Enable (0x1UL)

/* Bit 5 : Enable subscription to IPC channel 5 */
#define IPC_RECEIVE_CNF_CHEN5_Pos (5UL)
#define IPC_RECEIVE_CNF_CHEN5_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN5_Pos)
#define IPC_RECEIVE_CNF_CHEN5_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN5_Enable (0x1UL)

/* Bit 4 : Enable subscription to IPC channel 4 */
#define IPC_RECEIVE_CNF_CHEN4_Pos (4UL)
#define IPC_RECEIVE_CNF_CHEN4_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN4_Pos)
#define IPC_RECEIVE_CNF_CHEN4_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN4_Enable (0x1UL)

/* Bit 3 : Enable subscription to IPC channel 3 */
#define IPC_RECEIVE_CNF_CHEN3_Pos (3UL)
#define IPC_RECEIVE_CNF_CHEN3_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN3_Pos)
#define IPC_RECEIVE_CNF_CHEN3_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN3_Enable (0x1UL)

/* Bit 2 : Enable subscription to IPC channel 2 */
#define IPC_RECEIVE_CNF_CHEN2_Pos (2UL)
#define IPC_RECEIVE_CNF_CHEN2_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN2_Pos)
#define IPC_RECEIVE_CNF_CHEN2_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN2_Enable (0x1UL)

/* Bit 1 : Enable subscription to IPC channel 1 */
#define IPC_RECEIVE_CNF_CHEN1_Pos (1UL)
#define IPC_RECEIVE_CNF_CHEN1_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN1_Pos)
#define IPC_RECEIVE_CNF_CHEN1_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN1_Enable (0x1UL)

/* Bit 0 : Enable subscription to IPC channel 0 */
#define IPC_RECEIVE_CNF_CHEN0_Pos (0UL)
#define IPC_RECEIVE_CNF_CHEN0_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN0_Pos)
#define IPC_RECEIVE_CNF_CHEN0_Disable (0x0UL)
#define IPC_RECEIVE_CNF_CHEN0_Enable (0x1UL)

/* Register: IPC_GPMEM */
/* Description: Description collection: General purpose memory */

/* Bits 31..0 : General purpose memory */
#define IPC_GPMEM_GPMEM_Pos (0UL)
#define IPC_GPMEM_GPMEM_Msk (0xFFFFFFFFUL << IPC_GPMEM_GPMEM_Pos)


/* Peripheral: NVMC */
/* Description: Non-volatile memory controller */

/* Register: NVMC_READY */
/* Description: Ready flag */

/* Bit 0 : NVMC is ready or busy */
#define NVMC_READY_READY_Pos (0UL)
#define NVMC_READY_READY_Msk (0x1UL << NVMC_READY_READY_Pos)
#define NVMC_READY_READY_Busy (0x0UL)
#define NVMC_READY_READY_Ready (0x1UL)

/* Register: NVMC_READYNEXT */
/* Description: Ready flag */

/* Bit 0 : NVMC can accept a new write operation */
#define NVMC_READYNEXT_READYNEXT_Pos (0UL)
#define NVMC_READYNEXT_READYNEXT_Msk (0x1UL << NVMC_READYNEXT_READYNEXT_Pos)
#define NVMC_READYNEXT_READYNEXT_Busy (0x0UL)
#define NVMC_READYNEXT_READYNEXT_Ready (0x1UL)

/* Register: NVMC_CONFIG */
/* Description: Configuration register */

/* Bits 2..0 : Program memory access mode. It is strongly recommended to only activate erase and write modes when they are actively used. Enabling write or erase will invalidate the cache and keep it invalidated. */
#define NVMC_CONFIG_WEN_Pos (0UL)
#define NVMC_CONFIG_WEN_Msk (0x7UL << NVMC_CONFIG_WEN_Pos)
#define NVMC_CONFIG_WEN_Ren (0x0UL)
#define NVMC_CONFIG_WEN_Wen (0x1UL)
#define NVMC_CONFIG_WEN_Een (0x2UL)
#define NVMC_CONFIG_WEN_PEen (0x4UL)

/* Register: NVMC_ERASEALL */
/* Description: Register for erasing all non-volatile user memory */

/* Bit 0 : Erase all non-volatile memory including UICR registers. Before the non-volatile memory can be erased, erasing must be enabled by setting CONFIG.WEN=Een. */
#define NVMC_ERASEALL_ERASEALL_Pos (0UL)
#define NVMC_ERASEALL_ERASEALL_Msk (0x1UL << NVMC_ERASEALL_ERASEALL_Pos)
#define NVMC_ERASEALL_ERASEALL_NoOperation (0x0UL)
#define NVMC_ERASEALL_ERASEALL_Erase (0x1UL)

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
#define NVMC_ICACHECNF_CACHEPROFEN_Disabled (0x0UL)
#define NVMC_ICACHECNF_CACHEPROFEN_Enabled (0x1UL)

/* Bit 0 : Cache enable */
#define NVMC_ICACHECNF_CACHEEN_Pos (0UL)
#define NVMC_ICACHECNF_CACHEEN_Msk (0x1UL << NVMC_ICACHECNF_CACHEEN_Pos)
#define NVMC_ICACHECNF_CACHEEN_Disabled (0x0UL)
#define NVMC_ICACHECNF_CACHEEN_Enabled (0x1UL)

/* Register: NVMC_IHIT */
/* Description: I-code cache hit counter */

/* Bits 31..0 : Number of cache hits Write zero to clear */
#define NVMC_IHIT_HITS_Pos (0UL)
#define NVMC_IHIT_HITS_Msk (0xFFFFFFFFUL << NVMC_IHIT_HITS_Pos)

/* Register: NVMC_IMISS */
/* Description: I-code cache miss counter */

/* Bits 31..0 : Number of cache misses Write zero to clear */
#define NVMC_IMISS_MISSES_Pos (0UL)
#define NVMC_IMISS_MISSES_Msk (0xFFFFFFFFUL << NVMC_IMISS_MISSES_Pos)


/* Peripheral: GPIO */
/* Description: GPIO Port 0 */

/* Register: GPIO_OUT */
/* Description: Write GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUT_PIN31_Pos (31UL)
#define GPIO_OUT_PIN31_Msk (0x1UL << GPIO_OUT_PIN31_Pos)
#define GPIO_OUT_PIN31_Low (0x0UL)
#define GPIO_OUT_PIN31_High (0x1UL)

/* Bit 30 : Pin 30 */
#define GPIO_OUT_PIN30_Pos (30UL)
#define GPIO_OUT_PIN30_Msk (0x1UL << GPIO_OUT_PIN30_Pos)
#define GPIO_OUT_PIN30_Low (0x0UL)
#define GPIO_OUT_PIN30_High (0x1UL)

/* Bit 29 : Pin 29 */
#define GPIO_OUT_PIN29_Pos (29UL)
#define GPIO_OUT_PIN29_Msk (0x1UL << GPIO_OUT_PIN29_Pos)
#define GPIO_OUT_PIN29_Low (0x0UL)
#define GPIO_OUT_PIN29_High (0x1UL)

/* Bit 28 : Pin 28 */
#define GPIO_OUT_PIN28_Pos (28UL)
#define GPIO_OUT_PIN28_Msk (0x1UL << GPIO_OUT_PIN28_Pos)
#define GPIO_OUT_PIN28_Low (0x0UL)
#define GPIO_OUT_PIN28_High (0x1UL)

/* Bit 27 : Pin 27 */
#define GPIO_OUT_PIN27_Pos (27UL)
#define GPIO_OUT_PIN27_Msk (0x1UL << GPIO_OUT_PIN27_Pos)
#define GPIO_OUT_PIN27_Low (0x0UL)
#define GPIO_OUT_PIN27_High (0x1UL)

/* Bit 26 : Pin 26 */
#define GPIO_OUT_PIN26_Pos (26UL)
#define GPIO_OUT_PIN26_Msk (0x1UL << GPIO_OUT_PIN26_Pos)
#define GPIO_OUT_PIN26_Low (0x0UL)
#define GPIO_OUT_PIN26_High (0x1UL)

/* Bit 25 : Pin 25 */
#define GPIO_OUT_PIN25_Pos (25UL)
#define GPIO_OUT_PIN25_Msk (0x1UL << GPIO_OUT_PIN25_Pos)
#define GPIO_OUT_PIN25_Low (0x0UL)
#define GPIO_OUT_PIN25_High (0x1UL)

/* Bit 24 : Pin 24 */
#define GPIO_OUT_PIN24_Pos (24UL)
#define GPIO_OUT_PIN24_Msk (0x1UL << GPIO_OUT_PIN24_Pos)
#define GPIO_OUT_PIN24_Low (0x0UL)
#define GPIO_OUT_PIN24_High (0x1UL)

/* Bit 23 : Pin 23 */
#define GPIO_OUT_PIN23_Pos (23UL)
#define GPIO_OUT_PIN23_Msk (0x1UL << GPIO_OUT_PIN23_Pos)
#define GPIO_OUT_PIN23_Low (0x0UL)
#define GPIO_OUT_PIN23_High (0x1UL)

/* Bit 22 : Pin 22 */
#define GPIO_OUT_PIN22_Pos (22UL)
#define GPIO_OUT_PIN22_Msk (0x1UL << GPIO_OUT_PIN22_Pos)
#define GPIO_OUT_PIN22_Low (0x0UL)
#define GPIO_OUT_PIN22_High (0x1UL)

/* Bit 21 : Pin 21 */
#define GPIO_OUT_PIN21_Pos (21UL)
#define GPIO_OUT_PIN21_Msk (0x1UL << GPIO_OUT_PIN21_Pos)
#define GPIO_OUT_PIN21_Low (0x0UL)
#define GPIO_OUT_PIN21_High (0x1UL)

/* Bit 20 : Pin 20 */
#define GPIO_OUT_PIN20_Pos (20UL)
#define GPIO_OUT_PIN20_Msk (0x1UL << GPIO_OUT_PIN20_Pos)
#define GPIO_OUT_PIN20_Low (0x0UL)
#define GPIO_OUT_PIN20_High (0x1UL)

/* Bit 19 : Pin 19 */
#define GPIO_OUT_PIN19_Pos (19UL)
#define GPIO_OUT_PIN19_Msk (0x1UL << GPIO_OUT_PIN19_Pos)
#define GPIO_OUT_PIN19_Low (0x0UL)
#define GPIO_OUT_PIN19_High (0x1UL)

/* Bit 18 : Pin 18 */
#define GPIO_OUT_PIN18_Pos (18UL)
#define GPIO_OUT_PIN18_Msk (0x1UL << GPIO_OUT_PIN18_Pos)
#define GPIO_OUT_PIN18_Low (0x0UL)
#define GPIO_OUT_PIN18_High (0x1UL)

/* Bit 17 : Pin 17 */
#define GPIO_OUT_PIN17_Pos (17UL)
#define GPIO_OUT_PIN17_Msk (0x1UL << GPIO_OUT_PIN17_Pos)
#define GPIO_OUT_PIN17_Low (0x0UL)
#define GPIO_OUT_PIN17_High (0x1UL)

/* Bit 16 : Pin 16 */
#define GPIO_OUT_PIN16_Pos (16UL)
#define GPIO_OUT_PIN16_Msk (0x1UL << GPIO_OUT_PIN16_Pos)
#define GPIO_OUT_PIN16_Low (0x0UL)
#define GPIO_OUT_PIN16_High (0x1UL)

/* Bit 15 : Pin 15 */
#define GPIO_OUT_PIN15_Pos (15UL)
#define GPIO_OUT_PIN15_Msk (0x1UL << GPIO_OUT_PIN15_Pos)
#define GPIO_OUT_PIN15_Low (0x0UL)
#define GPIO_OUT_PIN15_High (0x1UL)

/* Bit 14 : Pin 14 */
#define GPIO_OUT_PIN14_Pos (14UL)
#define GPIO_OUT_PIN14_Msk (0x1UL << GPIO_OUT_PIN14_Pos)
#define GPIO_OUT_PIN14_Low (0x0UL)
#define GPIO_OUT_PIN14_High (0x1UL)

/* Bit 13 : Pin 13 */
#define GPIO_OUT_PIN13_Pos (13UL)
#define GPIO_OUT_PIN13_Msk (0x1UL << GPIO_OUT_PIN13_Pos)
#define GPIO_OUT_PIN13_Low (0x0UL)
#define GPIO_OUT_PIN13_High (0x1UL)

/* Bit 12 : Pin 12 */
#define GPIO_OUT_PIN12_Pos (12UL)
#define GPIO_OUT_PIN12_Msk (0x1UL << GPIO_OUT_PIN12_Pos)
#define GPIO_OUT_PIN12_Low (0x0UL)
#define GPIO_OUT_PIN12_High (0x1UL)

/* Bit 11 : Pin 11 */
#define GPIO_OUT_PIN11_Pos (11UL)
#define GPIO_OUT_PIN11_Msk (0x1UL << GPIO_OUT_PIN11_Pos)
#define GPIO_OUT_PIN11_Low (0x0UL)
#define GPIO_OUT_PIN11_High (0x1UL)

/* Bit 10 : Pin 10 */
#define GPIO_OUT_PIN10_Pos (10UL)
#define GPIO_OUT_PIN10_Msk (0x1UL << GPIO_OUT_PIN10_Pos)
#define GPIO_OUT_PIN10_Low (0x0UL)
#define GPIO_OUT_PIN10_High (0x1UL)

/* Bit 9 : Pin 9 */
#define GPIO_OUT_PIN9_Pos (9UL)
#define GPIO_OUT_PIN9_Msk (0x1UL << GPIO_OUT_PIN9_Pos)
#define GPIO_OUT_PIN9_Low (0x0UL)
#define GPIO_OUT_PIN9_High (0x1UL)

/* Bit 8 : Pin 8 */
#define GPIO_OUT_PIN8_Pos (8UL)
#define GPIO_OUT_PIN8_Msk (0x1UL << GPIO_OUT_PIN8_Pos)
#define GPIO_OUT_PIN8_Low (0x0UL)
#define GPIO_OUT_PIN8_High (0x1UL)

/* Bit 7 : Pin 7 */
#define GPIO_OUT_PIN7_Pos (7UL)
#define GPIO_OUT_PIN7_Msk (0x1UL << GPIO_OUT_PIN7_Pos)
#define GPIO_OUT_PIN7_Low (0x0UL)
#define GPIO_OUT_PIN7_High (0x1UL)

/* Bit 6 : Pin 6 */
#define GPIO_OUT_PIN6_Pos (6UL)
#define GPIO_OUT_PIN6_Msk (0x1UL << GPIO_OUT_PIN6_Pos)
#define GPIO_OUT_PIN6_Low (0x0UL)
#define GPIO_OUT_PIN6_High (0x1UL)

/* Bit 5 : Pin 5 */
#define GPIO_OUT_PIN5_Pos (5UL)
#define GPIO_OUT_PIN5_Msk (0x1UL << GPIO_OUT_PIN5_Pos)
#define GPIO_OUT_PIN5_Low (0x0UL)
#define GPIO_OUT_PIN5_High (0x1UL)

/* Bit 4 : Pin 4 */
#define GPIO_OUT_PIN4_Pos (4UL)
#define GPIO_OUT_PIN4_Msk (0x1UL << GPIO_OUT_PIN4_Pos)
#define GPIO_OUT_PIN4_Low (0x0UL)
#define GPIO_OUT_PIN4_High (0x1UL)

/* Bit 3 : Pin 3 */
#define GPIO_OUT_PIN3_Pos (3UL)
#define GPIO_OUT_PIN3_Msk (0x1UL << GPIO_OUT_PIN3_Pos)
#define GPIO_OUT_PIN3_Low (0x0UL)
#define GPIO_OUT_PIN3_High (0x1UL)

/* Bit 2 : Pin 2 */
#define GPIO_OUT_PIN2_Pos (2UL)
#define GPIO_OUT_PIN2_Msk (0x1UL << GPIO_OUT_PIN2_Pos)
#define GPIO_OUT_PIN2_Low (0x0UL)
#define GPIO_OUT_PIN2_High (0x1UL)

/* Bit 1 : Pin 1 */
#define GPIO_OUT_PIN1_Pos (1UL)
#define GPIO_OUT_PIN1_Msk (0x1UL << GPIO_OUT_PIN1_Pos)
#define GPIO_OUT_PIN1_Low (0x0UL)
#define GPIO_OUT_PIN1_High (0x1UL)

/* Bit 0 : Pin 0 */
#define GPIO_OUT_PIN0_Pos (0UL)
#define GPIO_OUT_PIN0_Msk (0x1UL << GPIO_OUT_PIN0_Pos)
#define GPIO_OUT_PIN0_Low (0x0UL)
#define GPIO_OUT_PIN0_High (0x1UL)

/* Register: GPIO_OUTSET */
/* Description: Set individual bits in GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUTSET_PIN31_Pos (31UL)
#define GPIO_OUTSET_PIN31_Msk (0x1UL << GPIO_OUTSET_PIN31_Pos)
#define GPIO_OUTSET_PIN31_Low (0x0UL)
#define GPIO_OUTSET_PIN31_High (0x1UL)
#define GPIO_OUTSET_PIN31_Set (0x1UL)

/* Bit 30 : Pin 30 */
#define GPIO_OUTSET_PIN30_Pos (30UL)
#define GPIO_OUTSET_PIN30_Msk (0x1UL << GPIO_OUTSET_PIN30_Pos)
#define GPIO_OUTSET_PIN30_Low (0x0UL)
#define GPIO_OUTSET_PIN30_High (0x1UL)
#define GPIO_OUTSET_PIN30_Set (0x1UL)

/* Bit 29 : Pin 29 */
#define GPIO_OUTSET_PIN29_Pos (29UL)
#define GPIO_OUTSET_PIN29_Msk (0x1UL << GPIO_OUTSET_PIN29_Pos)
#define GPIO_OUTSET_PIN29_Low (0x0UL)
#define GPIO_OUTSET_PIN29_High (0x1UL)
#define GPIO_OUTSET_PIN29_Set (0x1UL)

/* Bit 28 : Pin 28 */
#define GPIO_OUTSET_PIN28_Pos (28UL)
#define GPIO_OUTSET_PIN28_Msk (0x1UL << GPIO_OUTSET_PIN28_Pos)
#define GPIO_OUTSET_PIN28_Low (0x0UL)
#define GPIO_OUTSET_PIN28_High (0x1UL)
#define GPIO_OUTSET_PIN28_Set (0x1UL)

/* Bit 27 : Pin 27 */
#define GPIO_OUTSET_PIN27_Pos (27UL)
#define GPIO_OUTSET_PIN27_Msk (0x1UL << GPIO_OUTSET_PIN27_Pos)
#define GPIO_OUTSET_PIN27_Low (0x0UL)
#define GPIO_OUTSET_PIN27_High (0x1UL)
#define GPIO_OUTSET_PIN27_Set (0x1UL)

/* Bit 26 : Pin 26 */
#define GPIO_OUTSET_PIN26_Pos (26UL)
#define GPIO_OUTSET_PIN26_Msk (0x1UL << GPIO_OUTSET_PIN26_Pos)
#define GPIO_OUTSET_PIN26_Low (0x0UL)
#define GPIO_OUTSET_PIN26_High (0x1UL)
#define GPIO_OUTSET_PIN26_Set (0x1UL)

/* Bit 25 : Pin 25 */
#define GPIO_OUTSET_PIN25_Pos (25UL)
#define GPIO_OUTSET_PIN25_Msk (0x1UL << GPIO_OUTSET_PIN25_Pos)
#define GPIO_OUTSET_PIN25_Low (0x0UL)
#define GPIO_OUTSET_PIN25_High (0x1UL)
#define GPIO_OUTSET_PIN25_Set (0x1UL)

/* Bit 24 : Pin 24 */
#define GPIO_OUTSET_PIN24_Pos (24UL)
#define GPIO_OUTSET_PIN24_Msk (0x1UL << GPIO_OUTSET_PIN24_Pos)
#define GPIO_OUTSET_PIN24_Low (0x0UL)
#define GPIO_OUTSET_PIN24_High (0x1UL)
#define GPIO_OUTSET_PIN24_Set (0x1UL)

/* Bit 23 : Pin 23 */
#define GPIO_OUTSET_PIN23_Pos (23UL)
#define GPIO_OUTSET_PIN23_Msk (0x1UL << GPIO_OUTSET_PIN23_Pos)
#define GPIO_OUTSET_PIN23_Low (0x0UL)
#define GPIO_OUTSET_PIN23_High (0x1UL)
#define GPIO_OUTSET_PIN23_Set (0x1UL)

/* Bit 22 : Pin 22 */
#define GPIO_OUTSET_PIN22_Pos (22UL)
#define GPIO_OUTSET_PIN22_Msk (0x1UL << GPIO_OUTSET_PIN22_Pos)
#define GPIO_OUTSET_PIN22_Low (0x0UL)
#define GPIO_OUTSET_PIN22_High (0x1UL)
#define GPIO_OUTSET_PIN22_Set (0x1UL)

/* Bit 21 : Pin 21 */
#define GPIO_OUTSET_PIN21_Pos (21UL)
#define GPIO_OUTSET_PIN21_Msk (0x1UL << GPIO_OUTSET_PIN21_Pos)
#define GPIO_OUTSET_PIN21_Low (0x0UL)
#define GPIO_OUTSET_PIN21_High (0x1UL)
#define GPIO_OUTSET_PIN21_Set (0x1UL)

/* Bit 20 : Pin 20 */
#define GPIO_OUTSET_PIN20_Pos (20UL)
#define GPIO_OUTSET_PIN20_Msk (0x1UL << GPIO_OUTSET_PIN20_Pos)
#define GPIO_OUTSET_PIN20_Low (0x0UL)
#define GPIO_OUTSET_PIN20_High (0x1UL)
#define GPIO_OUTSET_PIN20_Set (0x1UL)

/* Bit 19 : Pin 19 */
#define GPIO_OUTSET_PIN19_Pos (19UL)
#define GPIO_OUTSET_PIN19_Msk (0x1UL << GPIO_OUTSET_PIN19_Pos)
#define GPIO_OUTSET_PIN19_Low (0x0UL)
#define GPIO_OUTSET_PIN19_High (0x1UL)
#define GPIO_OUTSET_PIN19_Set (0x1UL)

/* Bit 18 : Pin 18 */
#define GPIO_OUTSET_PIN18_Pos (18UL)
#define GPIO_OUTSET_PIN18_Msk (0x1UL << GPIO_OUTSET_PIN18_Pos)
#define GPIO_OUTSET_PIN18_Low (0x0UL)
#define GPIO_OUTSET_PIN18_High (0x1UL)
#define GPIO_OUTSET_PIN18_Set (0x1UL)

/* Bit 17 : Pin 17 */
#define GPIO_OUTSET_PIN17_Pos (17UL)
#define GPIO_OUTSET_PIN17_Msk (0x1UL << GPIO_OUTSET_PIN17_Pos)
#define GPIO_OUTSET_PIN17_Low (0x0UL)
#define GPIO_OUTSET_PIN17_High (0x1UL)
#define GPIO_OUTSET_PIN17_Set (0x1UL)

/* Bit 16 : Pin 16 */
#define GPIO_OUTSET_PIN16_Pos (16UL)
#define GPIO_OUTSET_PIN16_Msk (0x1UL << GPIO_OUTSET_PIN16_Pos)
#define GPIO_OUTSET_PIN16_Low (0x0UL)
#define GPIO_OUTSET_PIN16_High (0x1UL)
#define GPIO_OUTSET_PIN16_Set (0x1UL)

/* Bit 15 : Pin 15 */
#define GPIO_OUTSET_PIN15_Pos (15UL)
#define GPIO_OUTSET_PIN15_Msk (0x1UL << GPIO_OUTSET_PIN15_Pos)
#define GPIO_OUTSET_PIN15_Low (0x0UL)
#define GPIO_OUTSET_PIN15_High (0x1UL)
#define GPIO_OUTSET_PIN15_Set (0x1UL)

/* Bit 14 : Pin 14 */
#define GPIO_OUTSET_PIN14_Pos (14UL)
#define GPIO_OUTSET_PIN14_Msk (0x1UL << GPIO_OUTSET_PIN14_Pos)
#define GPIO_OUTSET_PIN14_Low (0x0UL)
#define GPIO_OUTSET_PIN14_High (0x1UL)
#define GPIO_OUTSET_PIN14_Set (0x1UL)

/* Bit 13 : Pin 13 */
#define GPIO_OUTSET_PIN13_Pos (13UL)
#define GPIO_OUTSET_PIN13_Msk (0x1UL << GPIO_OUTSET_PIN13_Pos)
#define GPIO_OUTSET_PIN13_Low (0x0UL)
#define GPIO_OUTSET_PIN13_High (0x1UL)
#define GPIO_OUTSET_PIN13_Set (0x1UL)

/* Bit 12 : Pin 12 */
#define GPIO_OUTSET_PIN12_Pos (12UL)
#define GPIO_OUTSET_PIN12_Msk (0x1UL << GPIO_OUTSET_PIN12_Pos)
#define GPIO_OUTSET_PIN12_Low (0x0UL)
#define GPIO_OUTSET_PIN12_High (0x1UL)
#define GPIO_OUTSET_PIN12_Set (0x1UL)

/* Bit 11 : Pin 11 */
#define GPIO_OUTSET_PIN11_Pos (11UL)
#define GPIO_OUTSET_PIN11_Msk (0x1UL << GPIO_OUTSET_PIN11_Pos)
#define GPIO_OUTSET_PIN11_Low (0x0UL)
#define GPIO_OUTSET_PIN11_High (0x1UL)
#define GPIO_OUTSET_PIN11_Set (0x1UL)

/* Bit 10 : Pin 10 */
#define GPIO_OUTSET_PIN10_Pos (10UL)
#define GPIO_OUTSET_PIN10_Msk (0x1UL << GPIO_OUTSET_PIN10_Pos)
#define GPIO_OUTSET_PIN10_Low (0x0UL)
#define GPIO_OUTSET_PIN10_High (0x1UL)
#define GPIO_OUTSET_PIN10_Set (0x1UL)

/* Bit 9 : Pin 9 */
#define GPIO_OUTSET_PIN9_Pos (9UL)
#define GPIO_OUTSET_PIN9_Msk (0x1UL << GPIO_OUTSET_PIN9_Pos)
#define GPIO_OUTSET_PIN9_Low (0x0UL)
#define GPIO_OUTSET_PIN9_High (0x1UL)
#define GPIO_OUTSET_PIN9_Set (0x1UL)

/* Bit 8 : Pin 8 */
#define GPIO_OUTSET_PIN8_Pos (8UL)
#define GPIO_OUTSET_PIN8_Msk (0x1UL << GPIO_OUTSET_PIN8_Pos)
#define GPIO_OUTSET_PIN8_Low (0x0UL)
#define GPIO_OUTSET_PIN8_High (0x1UL)
#define GPIO_OUTSET_PIN8_Set (0x1UL)

/* Bit 7 : Pin 7 */
#define GPIO_OUTSET_PIN7_Pos (7UL)
#define GPIO_OUTSET_PIN7_Msk (0x1UL << GPIO_OUTSET_PIN7_Pos)
#define GPIO_OUTSET_PIN7_Low (0x0UL)
#define GPIO_OUTSET_PIN7_High (0x1UL)
#define GPIO_OUTSET_PIN7_Set (0x1UL)

/* Bit 6 : Pin 6 */
#define GPIO_OUTSET_PIN6_Pos (6UL)
#define GPIO_OUTSET_PIN6_Msk (0x1UL << GPIO_OUTSET_PIN6_Pos)
#define GPIO_OUTSET_PIN6_Low (0x0UL)
#define GPIO_OUTSET_PIN6_High (0x1UL)
#define GPIO_OUTSET_PIN6_Set (0x1UL)

/* Bit 5 : Pin 5 */
#define GPIO_OUTSET_PIN5_Pos (5UL)
#define GPIO_OUTSET_PIN5_Msk (0x1UL << GPIO_OUTSET_PIN5_Pos)
#define GPIO_OUTSET_PIN5_Low (0x0UL)
#define GPIO_OUTSET_PIN5_High (0x1UL)
#define GPIO_OUTSET_PIN5_Set (0x1UL)

/* Bit 4 : Pin 4 */
#define GPIO_OUTSET_PIN4_Pos (4UL)
#define GPIO_OUTSET_PIN4_Msk (0x1UL << GPIO_OUTSET_PIN4_Pos)
#define GPIO_OUTSET_PIN4_Low (0x0UL)
#define GPIO_OUTSET_PIN4_High (0x1UL)
#define GPIO_OUTSET_PIN4_Set (0x1UL)

/* Bit 3 : Pin 3 */
#define GPIO_OUTSET_PIN3_Pos (3UL)
#define GPIO_OUTSET_PIN3_Msk (0x1UL << GPIO_OUTSET_PIN3_Pos)
#define GPIO_OUTSET_PIN3_Low (0x0UL)
#define GPIO_OUTSET_PIN3_High (0x1UL)
#define GPIO_OUTSET_PIN3_Set (0x1UL)

/* Bit 2 : Pin 2 */
#define GPIO_OUTSET_PIN2_Pos (2UL)
#define GPIO_OUTSET_PIN2_Msk (0x1UL << GPIO_OUTSET_PIN2_Pos)
#define GPIO_OUTSET_PIN2_Low (0x0UL)
#define GPIO_OUTSET_PIN2_High (0x1UL)
#define GPIO_OUTSET_PIN2_Set (0x1UL)

/* Bit 1 : Pin 1 */
#define GPIO_OUTSET_PIN1_Pos (1UL)
#define GPIO_OUTSET_PIN1_Msk (0x1UL << GPIO_OUTSET_PIN1_Pos)
#define GPIO_OUTSET_PIN1_Low (0x0UL)
#define GPIO_OUTSET_PIN1_High (0x1UL)
#define GPIO_OUTSET_PIN1_Set (0x1UL)

/* Bit 0 : Pin 0 */
#define GPIO_OUTSET_PIN0_Pos (0UL)
#define GPIO_OUTSET_PIN0_Msk (0x1UL << GPIO_OUTSET_PIN0_Pos)
#define GPIO_OUTSET_PIN0_Low (0x0UL)
#define GPIO_OUTSET_PIN0_High (0x1UL)
#define GPIO_OUTSET_PIN0_Set (0x1UL)

/* Register: GPIO_OUTCLR */
/* Description: Clear individual bits in GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUTCLR_PIN31_Pos (31UL)
#define GPIO_OUTCLR_PIN31_Msk (0x1UL << GPIO_OUTCLR_PIN31_Pos)
#define GPIO_OUTCLR_PIN31_Low (0x0UL)
#define GPIO_OUTCLR_PIN31_High (0x1UL)
#define GPIO_OUTCLR_PIN31_Clear (0x1UL)

/* Bit 30 : Pin 30 */
#define GPIO_OUTCLR_PIN30_Pos (30UL)
#define GPIO_OUTCLR_PIN30_Msk (0x1UL << GPIO_OUTCLR_PIN30_Pos)
#define GPIO_OUTCLR_PIN30_Low (0x0UL)
#define GPIO_OUTCLR_PIN30_High (0x1UL)
#define GPIO_OUTCLR_PIN30_Clear (0x1UL)

/* Bit 29 : Pin 29 */
#define GPIO_OUTCLR_PIN29_Pos (29UL)
#define GPIO_OUTCLR_PIN29_Msk (0x1UL << GPIO_OUTCLR_PIN29_Pos)
#define GPIO_OUTCLR_PIN29_Low (0x0UL)
#define GPIO_OUTCLR_PIN29_High (0x1UL)
#define GPIO_OUTCLR_PIN29_Clear (0x1UL)

/* Bit 28 : Pin 28 */
#define GPIO_OUTCLR_PIN28_Pos (28UL)
#define GPIO_OUTCLR_PIN28_Msk (0x1UL << GPIO_OUTCLR_PIN28_Pos)
#define GPIO_OUTCLR_PIN28_Low (0x0UL)
#define GPIO_OUTCLR_PIN28_High (0x1UL)
#define GPIO_OUTCLR_PIN28_Clear (0x1UL)

/* Bit 27 : Pin 27 */
#define GPIO_OUTCLR_PIN27_Pos (27UL)
#define GPIO_OUTCLR_PIN27_Msk (0x1UL << GPIO_OUTCLR_PIN27_Pos)
#define GPIO_OUTCLR_PIN27_Low (0x0UL)
#define GPIO_OUTCLR_PIN27_High (0x1UL)
#define GPIO_OUTCLR_PIN27_Clear (0x1UL)

/* Bit 26 : Pin 26 */
#define GPIO_OUTCLR_PIN26_Pos (26UL)
#define GPIO_OUTCLR_PIN26_Msk (0x1UL << GPIO_OUTCLR_PIN26_Pos)
#define GPIO_OUTCLR_PIN26_Low (0x0UL)
#define GPIO_OUTCLR_PIN26_High (0x1UL)
#define GPIO_OUTCLR_PIN26_Clear (0x1UL)

/* Bit 25 : Pin 25 */
#define GPIO_OUTCLR_PIN25_Pos (25UL)
#define GPIO_OUTCLR_PIN25_Msk (0x1UL << GPIO_OUTCLR_PIN25_Pos)
#define GPIO_OUTCLR_PIN25_Low (0x0UL)
#define GPIO_OUTCLR_PIN25_High (0x1UL)
#define GPIO_OUTCLR_PIN25_Clear (0x1UL)

/* Bit 24 : Pin 24 */
#define GPIO_OUTCLR_PIN24_Pos (24UL)
#define GPIO_OUTCLR_PIN24_Msk (0x1UL << GPIO_OUTCLR_PIN24_Pos)
#define GPIO_OUTCLR_PIN24_Low (0x0UL)
#define GPIO_OUTCLR_PIN24_High (0x1UL)
#define GPIO_OUTCLR_PIN24_Clear (0x1UL)

/* Bit 23 : Pin 23 */
#define GPIO_OUTCLR_PIN23_Pos (23UL)
#define GPIO_OUTCLR_PIN23_Msk (0x1UL << GPIO_OUTCLR_PIN23_Pos)
#define GPIO_OUTCLR_PIN23_Low (0x0UL)
#define GPIO_OUTCLR_PIN23_High (0x1UL)
#define GPIO_OUTCLR_PIN23_Clear (0x1UL)

/* Bit 22 : Pin 22 */
#define GPIO_OUTCLR_PIN22_Pos (22UL)
#define GPIO_OUTCLR_PIN22_Msk (0x1UL << GPIO_OUTCLR_PIN22_Pos)
#define GPIO_OUTCLR_PIN22_Low (0x0UL)
#define GPIO_OUTCLR_PIN22_High (0x1UL)
#define GPIO_OUTCLR_PIN22_Clear (0x1UL)

/* Bit 21 : Pin 21 */
#define GPIO_OUTCLR_PIN21_Pos (21UL)
#define GPIO_OUTCLR_PIN21_Msk (0x1UL << GPIO_OUTCLR_PIN21_Pos)
#define GPIO_OUTCLR_PIN21_Low (0x0UL)
#define GPIO_OUTCLR_PIN21_High (0x1UL)
#define GPIO_OUTCLR_PIN21_Clear (0x1UL)

/* Bit 20 : Pin 20 */
#define GPIO_OUTCLR_PIN20_Pos (20UL)
#define GPIO_OUTCLR_PIN20_Msk (0x1UL << GPIO_OUTCLR_PIN20_Pos)
#define GPIO_OUTCLR_PIN20_Low (0x0UL)
#define GPIO_OUTCLR_PIN20_High (0x1UL)
#define GPIO_OUTCLR_PIN20_Clear (0x1UL)

/* Bit 19 : Pin 19 */
#define GPIO_OUTCLR_PIN19_Pos (19UL)
#define GPIO_OUTCLR_PIN19_Msk (0x1UL << GPIO_OUTCLR_PIN19_Pos)
#define GPIO_OUTCLR_PIN19_Low (0x0UL)
#define GPIO_OUTCLR_PIN19_High (0x1UL)
#define GPIO_OUTCLR_PIN19_Clear (0x1UL)

/* Bit 18 : Pin 18 */
#define GPIO_OUTCLR_PIN18_Pos (18UL)
#define GPIO_OUTCLR_PIN18_Msk (0x1UL << GPIO_OUTCLR_PIN18_Pos)
#define GPIO_OUTCLR_PIN18_Low (0x0UL)
#define GPIO_OUTCLR_PIN18_High (0x1UL)
#define GPIO_OUTCLR_PIN18_Clear (0x1UL)

/* Bit 17 : Pin 17 */
#define GPIO_OUTCLR_PIN17_Pos (17UL)
#define GPIO_OUTCLR_PIN17_Msk (0x1UL << GPIO_OUTCLR_PIN17_Pos)
#define GPIO_OUTCLR_PIN17_Low (0x0UL)
#define GPIO_OUTCLR_PIN17_High (0x1UL)
#define GPIO_OUTCLR_PIN17_Clear (0x1UL)

/* Bit 16 : Pin 16 */
#define GPIO_OUTCLR_PIN16_Pos (16UL)
#define GPIO_OUTCLR_PIN16_Msk (0x1UL << GPIO_OUTCLR_PIN16_Pos)
#define GPIO_OUTCLR_PIN16_Low (0x0UL)
#define GPIO_OUTCLR_PIN16_High (0x1UL)
#define GPIO_OUTCLR_PIN16_Clear (0x1UL)

/* Bit 15 : Pin 15 */
#define GPIO_OUTCLR_PIN15_Pos (15UL)
#define GPIO_OUTCLR_PIN15_Msk (0x1UL << GPIO_OUTCLR_PIN15_Pos)
#define GPIO_OUTCLR_PIN15_Low (0x0UL)
#define GPIO_OUTCLR_PIN15_High (0x1UL)
#define GPIO_OUTCLR_PIN15_Clear (0x1UL)

/* Bit 14 : Pin 14 */
#define GPIO_OUTCLR_PIN14_Pos (14UL)
#define GPIO_OUTCLR_PIN14_Msk (0x1UL << GPIO_OUTCLR_PIN14_Pos)
#define GPIO_OUTCLR_PIN14_Low (0x0UL)
#define GPIO_OUTCLR_PIN14_High (0x1UL)
#define GPIO_OUTCLR_PIN14_Clear (0x1UL)

/* Bit 13 : Pin 13 */
#define GPIO_OUTCLR_PIN13_Pos (13UL)
#define GPIO_OUTCLR_PIN13_Msk (0x1UL << GPIO_OUTCLR_PIN13_Pos)
#define GPIO_OUTCLR_PIN13_Low (0x0UL)
#define GPIO_OUTCLR_PIN13_High (0x1UL)
#define GPIO_OUTCLR_PIN13_Clear (0x1UL)

/* Bit 12 : Pin 12 */
#define GPIO_OUTCLR_PIN12_Pos (12UL)
#define GPIO_OUTCLR_PIN12_Msk (0x1UL << GPIO_OUTCLR_PIN12_Pos)
#define GPIO_OUTCLR_PIN12_Low (0x0UL)
#define GPIO_OUTCLR_PIN12_High (0x1UL)
#define GPIO_OUTCLR_PIN12_Clear (0x1UL)

/* Bit 11 : Pin 11 */
#define GPIO_OUTCLR_PIN11_Pos (11UL)
#define GPIO_OUTCLR_PIN11_Msk (0x1UL << GPIO_OUTCLR_PIN11_Pos)
#define GPIO_OUTCLR_PIN11_Low (0x0UL)
#define GPIO_OUTCLR_PIN11_High (0x1UL)
#define GPIO_OUTCLR_PIN11_Clear (0x1UL)

/* Bit 10 : Pin 10 */
#define GPIO_OUTCLR_PIN10_Pos (10UL)
#define GPIO_OUTCLR_PIN10_Msk (0x1UL << GPIO_OUTCLR_PIN10_Pos)
#define GPIO_OUTCLR_PIN10_Low (0x0UL)
#define GPIO_OUTCLR_PIN10_High (0x1UL)
#define GPIO_OUTCLR_PIN10_Clear (0x1UL)

/* Bit 9 : Pin 9 */
#define GPIO_OUTCLR_PIN9_Pos (9UL)
#define GPIO_OUTCLR_PIN9_Msk (0x1UL << GPIO_OUTCLR_PIN9_Pos)
#define GPIO_OUTCLR_PIN9_Low (0x0UL)
#define GPIO_OUTCLR_PIN9_High (0x1UL)
#define GPIO_OUTCLR_PIN9_Clear (0x1UL)

/* Bit 8 : Pin 8 */
#define GPIO_OUTCLR_PIN8_Pos (8UL)
#define GPIO_OUTCLR_PIN8_Msk (0x1UL << GPIO_OUTCLR_PIN8_Pos)
#define GPIO_OUTCLR_PIN8_Low (0x0UL)
#define GPIO_OUTCLR_PIN8_High (0x1UL)
#define GPIO_OUTCLR_PIN8_Clear (0x1UL)

/* Bit 7 : Pin 7 */
#define GPIO_OUTCLR_PIN7_Pos (7UL)
#define GPIO_OUTCLR_PIN7_Msk (0x1UL << GPIO_OUTCLR_PIN7_Pos)
#define GPIO_OUTCLR_PIN7_Low (0x0UL)
#define GPIO_OUTCLR_PIN7_High (0x1UL)
#define GPIO_OUTCLR_PIN7_Clear (0x1UL)

/* Bit 6 : Pin 6 */
#define GPIO_OUTCLR_PIN6_Pos (6UL)
#define GPIO_OUTCLR_PIN6_Msk (0x1UL << GPIO_OUTCLR_PIN6_Pos)
#define GPIO_OUTCLR_PIN6_Low (0x0UL)
#define GPIO_OUTCLR_PIN6_High (0x1UL)
#define GPIO_OUTCLR_PIN6_Clear (0x1UL)

/* Bit 5 : Pin 5 */
#define GPIO_OUTCLR_PIN5_Pos (5UL)
#define GPIO_OUTCLR_PIN5_Msk (0x1UL << GPIO_OUTCLR_PIN5_Pos)
#define GPIO_OUTCLR_PIN5_Low (0x0UL)
#define GPIO_OUTCLR_PIN5_High (0x1UL)
#define GPIO_OUTCLR_PIN5_Clear (0x1UL)

/* Bit 4 : Pin 4 */
#define GPIO_OUTCLR_PIN4_Pos (4UL)
#define GPIO_OUTCLR_PIN4_Msk (0x1UL << GPIO_OUTCLR_PIN4_Pos)
#define GPIO_OUTCLR_PIN4_Low (0x0UL)
#define GPIO_OUTCLR_PIN4_High (0x1UL)
#define GPIO_OUTCLR_PIN4_Clear (0x1UL)

/* Bit 3 : Pin 3 */
#define GPIO_OUTCLR_PIN3_Pos (3UL)
#define GPIO_OUTCLR_PIN3_Msk (0x1UL << GPIO_OUTCLR_PIN3_Pos)
#define GPIO_OUTCLR_PIN3_Low (0x0UL)
#define GPIO_OUTCLR_PIN3_High (0x1UL)
#define GPIO_OUTCLR_PIN3_Clear (0x1UL)

/* Bit 2 : Pin 2 */
#define GPIO_OUTCLR_PIN2_Pos (2UL)
#define GPIO_OUTCLR_PIN2_Msk (0x1UL << GPIO_OUTCLR_PIN2_Pos)
#define GPIO_OUTCLR_PIN2_Low (0x0UL)
#define GPIO_OUTCLR_PIN2_High (0x1UL)
#define GPIO_OUTCLR_PIN2_Clear (0x1UL)

/* Bit 1 : Pin 1 */
#define GPIO_OUTCLR_PIN1_Pos (1UL)
#define GPIO_OUTCLR_PIN1_Msk (0x1UL << GPIO_OUTCLR_PIN1_Pos)
#define GPIO_OUTCLR_PIN1_Low (0x0UL)
#define GPIO_OUTCLR_PIN1_High (0x1UL)
#define GPIO_OUTCLR_PIN1_Clear (0x1UL)

/* Bit 0 : Pin 0 */
#define GPIO_OUTCLR_PIN0_Pos (0UL)
#define GPIO_OUTCLR_PIN0_Msk (0x1UL << GPIO_OUTCLR_PIN0_Pos)
#define GPIO_OUTCLR_PIN0_Low (0x0UL)
#define GPIO_OUTCLR_PIN0_High (0x1UL)
#define GPIO_OUTCLR_PIN0_Clear (0x1UL)

/* Register: GPIO_IN */
/* Description: Read GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_IN_PIN31_Pos (31UL)
#define GPIO_IN_PIN31_Msk (0x1UL << GPIO_IN_PIN31_Pos)
#define GPIO_IN_PIN31_Low (0x0UL)
#define GPIO_IN_PIN31_High (0x1UL)

/* Bit 30 : Pin 30 */
#define GPIO_IN_PIN30_Pos (30UL)
#define GPIO_IN_PIN30_Msk (0x1UL << GPIO_IN_PIN30_Pos)
#define GPIO_IN_PIN30_Low (0x0UL)
#define GPIO_IN_PIN30_High (0x1UL)

/* Bit 29 : Pin 29 */
#define GPIO_IN_PIN29_Pos (29UL)
#define GPIO_IN_PIN29_Msk (0x1UL << GPIO_IN_PIN29_Pos)
#define GPIO_IN_PIN29_Low (0x0UL)
#define GPIO_IN_PIN29_High (0x1UL)

/* Bit 28 : Pin 28 */
#define GPIO_IN_PIN28_Pos (28UL)
#define GPIO_IN_PIN28_Msk (0x1UL << GPIO_IN_PIN28_Pos)
#define GPIO_IN_PIN28_Low (0x0UL)
#define GPIO_IN_PIN28_High (0x1UL)

/* Bit 27 : Pin 27 */
#define GPIO_IN_PIN27_Pos (27UL)
#define GPIO_IN_PIN27_Msk (0x1UL << GPIO_IN_PIN27_Pos)
#define GPIO_IN_PIN27_Low (0x0UL)
#define GPIO_IN_PIN27_High (0x1UL)

/* Bit 26 : Pin 26 */
#define GPIO_IN_PIN26_Pos (26UL)
#define GPIO_IN_PIN26_Msk (0x1UL << GPIO_IN_PIN26_Pos)
#define GPIO_IN_PIN26_Low (0x0UL)
#define GPIO_IN_PIN26_High (0x1UL)

/* Bit 25 : Pin 25 */
#define GPIO_IN_PIN25_Pos (25UL)
#define GPIO_IN_PIN25_Msk (0x1UL << GPIO_IN_PIN25_Pos)
#define GPIO_IN_PIN25_Low (0x0UL)
#define GPIO_IN_PIN25_High (0x1UL)

/* Bit 24 : Pin 24 */
#define GPIO_IN_PIN24_Pos (24UL)
#define GPIO_IN_PIN24_Msk (0x1UL << GPIO_IN_PIN24_Pos)
#define GPIO_IN_PIN24_Low (0x0UL)
#define GPIO_IN_PIN24_High (0x1UL)

/* Bit 23 : Pin 23 */
#define GPIO_IN_PIN23_Pos (23UL)
#define GPIO_IN_PIN23_Msk (0x1UL << GPIO_IN_PIN23_Pos)
#define GPIO_IN_PIN23_Low (0x0UL)
#define GPIO_IN_PIN23_High (0x1UL)

/* Bit 22 : Pin 22 */
#define GPIO_IN_PIN22_Pos (22UL)
#define GPIO_IN_PIN22_Msk (0x1UL << GPIO_IN_PIN22_Pos)
#define GPIO_IN_PIN22_Low (0x0UL)
#define GPIO_IN_PIN22_High (0x1UL)

/* Bit 21 : Pin 21 */
#define GPIO_IN_PIN21_Pos (21UL)
#define GPIO_IN_PIN21_Msk (0x1UL << GPIO_IN_PIN21_Pos)
#define GPIO_IN_PIN21_Low (0x0UL)
#define GPIO_IN_PIN21_High (0x1UL)

/* Bit 20 : Pin 20 */
#define GPIO_IN_PIN20_Pos (20UL)
#define GPIO_IN_PIN20_Msk (0x1UL << GPIO_IN_PIN20_Pos)
#define GPIO_IN_PIN20_Low (0x0UL)
#define GPIO_IN_PIN20_High (0x1UL)

/* Bit 19 : Pin 19 */
#define GPIO_IN_PIN19_Pos (19UL)
#define GPIO_IN_PIN19_Msk (0x1UL << GPIO_IN_PIN19_Pos)
#define GPIO_IN_PIN19_Low (0x0UL)
#define GPIO_IN_PIN19_High (0x1UL)

/* Bit 18 : Pin 18 */
#define GPIO_IN_PIN18_Pos (18UL)
#define GPIO_IN_PIN18_Msk (0x1UL << GPIO_IN_PIN18_Pos)
#define GPIO_IN_PIN18_Low (0x0UL)
#define GPIO_IN_PIN18_High (0x1UL)

/* Bit 17 : Pin 17 */
#define GPIO_IN_PIN17_Pos (17UL)
#define GPIO_IN_PIN17_Msk (0x1UL << GPIO_IN_PIN17_Pos)
#define GPIO_IN_PIN17_Low (0x0UL)
#define GPIO_IN_PIN17_High (0x1UL)

/* Bit 16 : Pin 16 */
#define GPIO_IN_PIN16_Pos (16UL)
#define GPIO_IN_PIN16_Msk (0x1UL << GPIO_IN_PIN16_Pos)
#define GPIO_IN_PIN16_Low (0x0UL)
#define GPIO_IN_PIN16_High (0x1UL)

/* Bit 15 : Pin 15 */
#define GPIO_IN_PIN15_Pos (15UL)
#define GPIO_IN_PIN15_Msk (0x1UL << GPIO_IN_PIN15_Pos)
#define GPIO_IN_PIN15_Low (0x0UL)
#define GPIO_IN_PIN15_High (0x1UL)

/* Bit 14 : Pin 14 */
#define GPIO_IN_PIN14_Pos (14UL)
#define GPIO_IN_PIN14_Msk (0x1UL << GPIO_IN_PIN14_Pos)
#define GPIO_IN_PIN14_Low (0x0UL)
#define GPIO_IN_PIN14_High (0x1UL)

/* Bit 13 : Pin 13 */
#define GPIO_IN_PIN13_Pos (13UL)
#define GPIO_IN_PIN13_Msk (0x1UL << GPIO_IN_PIN13_Pos)
#define GPIO_IN_PIN13_Low (0x0UL)
#define GPIO_IN_PIN13_High (0x1UL)

/* Bit 12 : Pin 12 */
#define GPIO_IN_PIN12_Pos (12UL)
#define GPIO_IN_PIN12_Msk (0x1UL << GPIO_IN_PIN12_Pos)
#define GPIO_IN_PIN12_Low (0x0UL)
#define GPIO_IN_PIN12_High (0x1UL)

/* Bit 11 : Pin 11 */
#define GPIO_IN_PIN11_Pos (11UL)
#define GPIO_IN_PIN11_Msk (0x1UL << GPIO_IN_PIN11_Pos)
#define GPIO_IN_PIN11_Low (0x0UL)
#define GPIO_IN_PIN11_High (0x1UL)

/* Bit 10 : Pin 10 */
#define GPIO_IN_PIN10_Pos (10UL)
#define GPIO_IN_PIN10_Msk (0x1UL << GPIO_IN_PIN10_Pos)
#define GPIO_IN_PIN10_Low (0x0UL)
#define GPIO_IN_PIN10_High (0x1UL)

/* Bit 9 : Pin 9 */
#define GPIO_IN_PIN9_Pos (9UL)
#define GPIO_IN_PIN9_Msk (0x1UL << GPIO_IN_PIN9_Pos)
#define GPIO_IN_PIN9_Low (0x0UL)
#define GPIO_IN_PIN9_High (0x1UL)

/* Bit 8 : Pin 8 */
#define GPIO_IN_PIN8_Pos (8UL)
#define GPIO_IN_PIN8_Msk (0x1UL << GPIO_IN_PIN8_Pos)
#define GPIO_IN_PIN8_Low (0x0UL)
#define GPIO_IN_PIN8_High (0x1UL)

/* Bit 7 : Pin 7 */
#define GPIO_IN_PIN7_Pos (7UL)
#define GPIO_IN_PIN7_Msk (0x1UL << GPIO_IN_PIN7_Pos)
#define GPIO_IN_PIN7_Low (0x0UL)
#define GPIO_IN_PIN7_High (0x1UL)

/* Bit 6 : Pin 6 */
#define GPIO_IN_PIN6_Pos (6UL)
#define GPIO_IN_PIN6_Msk (0x1UL << GPIO_IN_PIN6_Pos)
#define GPIO_IN_PIN6_Low (0x0UL)
#define GPIO_IN_PIN6_High (0x1UL)

/* Bit 5 : Pin 5 */
#define GPIO_IN_PIN5_Pos (5UL)
#define GPIO_IN_PIN5_Msk (0x1UL << GPIO_IN_PIN5_Pos)
#define GPIO_IN_PIN5_Low (0x0UL)
#define GPIO_IN_PIN5_High (0x1UL)

/* Bit 4 : Pin 4 */
#define GPIO_IN_PIN4_Pos (4UL)
#define GPIO_IN_PIN4_Msk (0x1UL << GPIO_IN_PIN4_Pos)
#define GPIO_IN_PIN4_Low (0x0UL)
#define GPIO_IN_PIN4_High (0x1UL)

/* Bit 3 : Pin 3 */
#define GPIO_IN_PIN3_Pos (3UL)
#define GPIO_IN_PIN3_Msk (0x1UL << GPIO_IN_PIN3_Pos)
#define GPIO_IN_PIN3_Low (0x0UL)
#define GPIO_IN_PIN3_High (0x1UL)

/* Bit 2 : Pin 2 */
#define GPIO_IN_PIN2_Pos (2UL)
#define GPIO_IN_PIN2_Msk (0x1UL << GPIO_IN_PIN2_Pos)
#define GPIO_IN_PIN2_Low (0x0UL)
#define GPIO_IN_PIN2_High (0x1UL)

/* Bit 1 : Pin 1 */
#define GPIO_IN_PIN1_Pos (1UL)
#define GPIO_IN_PIN1_Msk (0x1UL << GPIO_IN_PIN1_Pos)
#define GPIO_IN_PIN1_Low (0x0UL)
#define GPIO_IN_PIN1_High (0x1UL)

/* Bit 0 : Pin 0 */
#define GPIO_IN_PIN0_Pos (0UL)
#define GPIO_IN_PIN0_Msk (0x1UL << GPIO_IN_PIN0_Pos)
#define GPIO_IN_PIN0_Low (0x0UL)
#define GPIO_IN_PIN0_High (0x1UL)

/* Register: GPIO_DIR */
/* Description: Direction of GPIO pins */

/* Bit 31 : Pin 31 */
#define GPIO_DIR_PIN31_Pos (31UL)
#define GPIO_DIR_PIN31_Msk (0x1UL << GPIO_DIR_PIN31_Pos)
#define GPIO_DIR_PIN31_Input (0x0UL)
#define GPIO_DIR_PIN31_Output (0x1UL)

/* Bit 30 : Pin 30 */
#define GPIO_DIR_PIN30_Pos (30UL)
#define GPIO_DIR_PIN30_Msk (0x1UL << GPIO_DIR_PIN30_Pos)
#define GPIO_DIR_PIN30_Input (0x0UL)
#define GPIO_DIR_PIN30_Output (0x1UL)

/* Bit 29 : Pin 29 */
#define GPIO_DIR_PIN29_Pos (29UL)
#define GPIO_DIR_PIN29_Msk (0x1UL << GPIO_DIR_PIN29_Pos)
#define GPIO_DIR_PIN29_Input (0x0UL)
#define GPIO_DIR_PIN29_Output (0x1UL)

/* Bit 28 : Pin 28 */
#define GPIO_DIR_PIN28_Pos (28UL)
#define GPIO_DIR_PIN28_Msk (0x1UL << GPIO_DIR_PIN28_Pos)
#define GPIO_DIR_PIN28_Input (0x0UL)
#define GPIO_DIR_PIN28_Output (0x1UL)

/* Bit 27 : Pin 27 */
#define GPIO_DIR_PIN27_Pos (27UL)
#define GPIO_DIR_PIN27_Msk (0x1UL << GPIO_DIR_PIN27_Pos)
#define GPIO_DIR_PIN27_Input (0x0UL)
#define GPIO_DIR_PIN27_Output (0x1UL)

/* Bit 26 : Pin 26 */
#define GPIO_DIR_PIN26_Pos (26UL)
#define GPIO_DIR_PIN26_Msk (0x1UL << GPIO_DIR_PIN26_Pos)
#define GPIO_DIR_PIN26_Input (0x0UL)
#define GPIO_DIR_PIN26_Output (0x1UL)

/* Bit 25 : Pin 25 */
#define GPIO_DIR_PIN25_Pos (25UL)
#define GPIO_DIR_PIN25_Msk (0x1UL << GPIO_DIR_PIN25_Pos)
#define GPIO_DIR_PIN25_Input (0x0UL)
#define GPIO_DIR_PIN25_Output (0x1UL)

/* Bit 24 : Pin 24 */
#define GPIO_DIR_PIN24_Pos (24UL)
#define GPIO_DIR_PIN24_Msk (0x1UL << GPIO_DIR_PIN24_Pos)
#define GPIO_DIR_PIN24_Input (0x0UL)
#define GPIO_DIR_PIN24_Output (0x1UL)

/* Bit 23 : Pin 23 */
#define GPIO_DIR_PIN23_Pos (23UL)
#define GPIO_DIR_PIN23_Msk (0x1UL << GPIO_DIR_PIN23_Pos)
#define GPIO_DIR_PIN23_Input (0x0UL)
#define GPIO_DIR_PIN23_Output (0x1UL)

/* Bit 22 : Pin 22 */
#define GPIO_DIR_PIN22_Pos (22UL)
#define GPIO_DIR_PIN22_Msk (0x1UL << GPIO_DIR_PIN22_Pos)
#define GPIO_DIR_PIN22_Input (0x0UL)
#define GPIO_DIR_PIN22_Output (0x1UL)

/* Bit 21 : Pin 21 */
#define GPIO_DIR_PIN21_Pos (21UL)
#define GPIO_DIR_PIN21_Msk (0x1UL << GPIO_DIR_PIN21_Pos)
#define GPIO_DIR_PIN21_Input (0x0UL)
#define GPIO_DIR_PIN21_Output (0x1UL)

/* Bit 20 : Pin 20 */
#define GPIO_DIR_PIN20_Pos (20UL)
#define GPIO_DIR_PIN20_Msk (0x1UL << GPIO_DIR_PIN20_Pos)
#define GPIO_DIR_PIN20_Input (0x0UL)
#define GPIO_DIR_PIN20_Output (0x1UL)

/* Bit 19 : Pin 19 */
#define GPIO_DIR_PIN19_Pos (19UL)
#define GPIO_DIR_PIN19_Msk (0x1UL << GPIO_DIR_PIN19_Pos)
#define GPIO_DIR_PIN19_Input (0x0UL)
#define GPIO_DIR_PIN19_Output (0x1UL)

/* Bit 18 : Pin 18 */
#define GPIO_DIR_PIN18_Pos (18UL)
#define GPIO_DIR_PIN18_Msk (0x1UL << GPIO_DIR_PIN18_Pos)
#define GPIO_DIR_PIN18_Input (0x0UL)
#define GPIO_DIR_PIN18_Output (0x1UL)

/* Bit 17 : Pin 17 */
#define GPIO_DIR_PIN17_Pos (17UL)
#define GPIO_DIR_PIN17_Msk (0x1UL << GPIO_DIR_PIN17_Pos)
#define GPIO_DIR_PIN17_Input (0x0UL)
#define GPIO_DIR_PIN17_Output (0x1UL)

/* Bit 16 : Pin 16 */
#define GPIO_DIR_PIN16_Pos (16UL)
#define GPIO_DIR_PIN16_Msk (0x1UL << GPIO_DIR_PIN16_Pos)
#define GPIO_DIR_PIN16_Input (0x0UL)
#define GPIO_DIR_PIN16_Output (0x1UL)

/* Bit 15 : Pin 15 */
#define GPIO_DIR_PIN15_Pos (15UL)
#define GPIO_DIR_PIN15_Msk (0x1UL << GPIO_DIR_PIN15_Pos)
#define GPIO_DIR_PIN15_Input (0x0UL)
#define GPIO_DIR_PIN15_Output (0x1UL)

/* Bit 14 : Pin 14 */
#define GPIO_DIR_PIN14_Pos (14UL)
#define GPIO_DIR_PIN14_Msk (0x1UL << GPIO_DIR_PIN14_Pos)
#define GPIO_DIR_PIN14_Input (0x0UL)
#define GPIO_DIR_PIN14_Output (0x1UL)

/* Bit 13 : Pin 13 */
#define GPIO_DIR_PIN13_Pos (13UL)
#define GPIO_DIR_PIN13_Msk (0x1UL << GPIO_DIR_PIN13_Pos)
#define GPIO_DIR_PIN13_Input (0x0UL)
#define GPIO_DIR_PIN13_Output (0x1UL)

/* Bit 12 : Pin 12 */
#define GPIO_DIR_PIN12_Pos (12UL)
#define GPIO_DIR_PIN12_Msk (0x1UL << GPIO_DIR_PIN12_Pos)
#define GPIO_DIR_PIN12_Input (0x0UL)
#define GPIO_DIR_PIN12_Output (0x1UL)

/* Bit 11 : Pin 11 */
#define GPIO_DIR_PIN11_Pos (11UL)
#define GPIO_DIR_PIN11_Msk (0x1UL << GPIO_DIR_PIN11_Pos)
#define GPIO_DIR_PIN11_Input (0x0UL)
#define GPIO_DIR_PIN11_Output (0x1UL)

/* Bit 10 : Pin 10 */
#define GPIO_DIR_PIN10_Pos (10UL)
#define GPIO_DIR_PIN10_Msk (0x1UL << GPIO_DIR_PIN10_Pos)
#define GPIO_DIR_PIN10_Input (0x0UL)
#define GPIO_DIR_PIN10_Output (0x1UL)

/* Bit 9 : Pin 9 */
#define GPIO_DIR_PIN9_Pos (9UL)
#define GPIO_DIR_PIN9_Msk (0x1UL << GPIO_DIR_PIN9_Pos)
#define GPIO_DIR_PIN9_Input (0x0UL)
#define GPIO_DIR_PIN9_Output (0x1UL)

/* Bit 8 : Pin 8 */
#define GPIO_DIR_PIN8_Pos (8UL)
#define GPIO_DIR_PIN8_Msk (0x1UL << GPIO_DIR_PIN8_Pos)
#define GPIO_DIR_PIN8_Input (0x0UL)
#define GPIO_DIR_PIN8_Output (0x1UL)

/* Bit 7 : Pin 7 */
#define GPIO_DIR_PIN7_Pos (7UL)
#define GPIO_DIR_PIN7_Msk (0x1UL << GPIO_DIR_PIN7_Pos)
#define GPIO_DIR_PIN7_Input (0x0UL)
#define GPIO_DIR_PIN7_Output (0x1UL)

/* Bit 6 : Pin 6 */
#define GPIO_DIR_PIN6_Pos (6UL)
#define GPIO_DIR_PIN6_Msk (0x1UL << GPIO_DIR_PIN6_Pos)
#define GPIO_DIR_PIN6_Input (0x0UL)
#define GPIO_DIR_PIN6_Output (0x1UL)

/* Bit 5 : Pin 5 */
#define GPIO_DIR_PIN5_Pos (5UL)
#define GPIO_DIR_PIN5_Msk (0x1UL << GPIO_DIR_PIN5_Pos)
#define GPIO_DIR_PIN5_Input (0x0UL)
#define GPIO_DIR_PIN5_Output (0x1UL)

/* Bit 4 : Pin 4 */
#define GPIO_DIR_PIN4_Pos (4UL)
#define GPIO_DIR_PIN4_Msk (0x1UL << GPIO_DIR_PIN4_Pos)
#define GPIO_DIR_PIN4_Input (0x0UL)
#define GPIO_DIR_PIN4_Output (0x1UL)

/* Bit 3 : Pin 3 */
#define GPIO_DIR_PIN3_Pos (3UL)
#define GPIO_DIR_PIN3_Msk (0x1UL << GPIO_DIR_PIN3_Pos)
#define GPIO_DIR_PIN3_Input (0x0UL)
#define GPIO_DIR_PIN3_Output (0x1UL)

/* Bit 2 : Pin 2 */
#define GPIO_DIR_PIN2_Pos (2UL)
#define GPIO_DIR_PIN2_Msk (0x1UL << GPIO_DIR_PIN2_Pos)
#define GPIO_DIR_PIN2_Input (0x0UL)
#define GPIO_DIR_PIN2_Output (0x1UL)

/* Bit 1 : Pin 1 */
#define GPIO_DIR_PIN1_Pos (1UL)
#define GPIO_DIR_PIN1_Msk (0x1UL << GPIO_DIR_PIN1_Pos)
#define GPIO_DIR_PIN1_Input (0x0UL)
#define GPIO_DIR_PIN1_Output (0x1UL)

/* Bit 0 : Pin 0 */
#define GPIO_DIR_PIN0_Pos (0UL)
#define GPIO_DIR_PIN0_Msk (0x1UL << GPIO_DIR_PIN0_Pos)
#define GPIO_DIR_PIN0_Input (0x0UL)
#define GPIO_DIR_PIN0_Output (0x1UL)

/* Register: GPIO_DIRSET */
/* Description: DIR set register */

/* Bit 31 : Set as output pin 31 */
#define GPIO_DIRSET_PIN31_Pos (31UL)
#define GPIO_DIRSET_PIN31_Msk (0x1UL << GPIO_DIRSET_PIN31_Pos)
#define GPIO_DIRSET_PIN31_Input (0x0UL)
#define GPIO_DIRSET_PIN31_Output (0x1UL)
#define GPIO_DIRSET_PIN31_Set (0x1UL)

/* Bit 30 : Set as output pin 30 */
#define GPIO_DIRSET_PIN30_Pos (30UL)
#define GPIO_DIRSET_PIN30_Msk (0x1UL << GPIO_DIRSET_PIN30_Pos)
#define GPIO_DIRSET_PIN30_Input (0x0UL)
#define GPIO_DIRSET_PIN30_Output (0x1UL)
#define GPIO_DIRSET_PIN30_Set (0x1UL)

/* Bit 29 : Set as output pin 29 */
#define GPIO_DIRSET_PIN29_Pos (29UL)
#define GPIO_DIRSET_PIN29_Msk (0x1UL << GPIO_DIRSET_PIN29_Pos)
#define GPIO_DIRSET_PIN29_Input (0x0UL)
#define GPIO_DIRSET_PIN29_Output (0x1UL)
#define GPIO_DIRSET_PIN29_Set (0x1UL)

/* Bit 28 : Set as output pin 28 */
#define GPIO_DIRSET_PIN28_Pos (28UL)
#define GPIO_DIRSET_PIN28_Msk (0x1UL << GPIO_DIRSET_PIN28_Pos)
#define GPIO_DIRSET_PIN28_Input (0x0UL)
#define GPIO_DIRSET_PIN28_Output (0x1UL)
#define GPIO_DIRSET_PIN28_Set (0x1UL)

/* Bit 27 : Set as output pin 27 */
#define GPIO_DIRSET_PIN27_Pos (27UL)
#define GPIO_DIRSET_PIN27_Msk (0x1UL << GPIO_DIRSET_PIN27_Pos)
#define GPIO_DIRSET_PIN27_Input (0x0UL)
#define GPIO_DIRSET_PIN27_Output (0x1UL)
#define GPIO_DIRSET_PIN27_Set (0x1UL)

/* Bit 26 : Set as output pin 26 */
#define GPIO_DIRSET_PIN26_Pos (26UL)
#define GPIO_DIRSET_PIN26_Msk (0x1UL << GPIO_DIRSET_PIN26_Pos)
#define GPIO_DIRSET_PIN26_Input (0x0UL)
#define GPIO_DIRSET_PIN26_Output (0x1UL)
#define GPIO_DIRSET_PIN26_Set (0x1UL)

/* Bit 25 : Set as output pin 25 */
#define GPIO_DIRSET_PIN25_Pos (25UL)
#define GPIO_DIRSET_PIN25_Msk (0x1UL << GPIO_DIRSET_PIN25_Pos)
#define GPIO_DIRSET_PIN25_Input (0x0UL)
#define GPIO_DIRSET_PIN25_Output (0x1UL)
#define GPIO_DIRSET_PIN25_Set (0x1UL)

/* Bit 24 : Set as output pin 24 */
#define GPIO_DIRSET_PIN24_Pos (24UL)
#define GPIO_DIRSET_PIN24_Msk (0x1UL << GPIO_DIRSET_PIN24_Pos)
#define GPIO_DIRSET_PIN24_Input (0x0UL)
#define GPIO_DIRSET_PIN24_Output (0x1UL)
#define GPIO_DIRSET_PIN24_Set (0x1UL)

/* Bit 23 : Set as output pin 23 */
#define GPIO_DIRSET_PIN23_Pos (23UL)
#define GPIO_DIRSET_PIN23_Msk (0x1UL << GPIO_DIRSET_PIN23_Pos)
#define GPIO_DIRSET_PIN23_Input (0x0UL)
#define GPIO_DIRSET_PIN23_Output (0x1UL)
#define GPIO_DIRSET_PIN23_Set (0x1UL)

/* Bit 22 : Set as output pin 22 */
#define GPIO_DIRSET_PIN22_Pos (22UL)
#define GPIO_DIRSET_PIN22_Msk (0x1UL << GPIO_DIRSET_PIN22_Pos)
#define GPIO_DIRSET_PIN22_Input (0x0UL)
#define GPIO_DIRSET_PIN22_Output (0x1UL)
#define GPIO_DIRSET_PIN22_Set (0x1UL)

/* Bit 21 : Set as output pin 21 */
#define GPIO_DIRSET_PIN21_Pos (21UL)
#define GPIO_DIRSET_PIN21_Msk (0x1UL << GPIO_DIRSET_PIN21_Pos)
#define GPIO_DIRSET_PIN21_Input (0x0UL)
#define GPIO_DIRSET_PIN21_Output (0x1UL)
#define GPIO_DIRSET_PIN21_Set (0x1UL)

/* Bit 20 : Set as output pin 20 */
#define GPIO_DIRSET_PIN20_Pos (20UL)
#define GPIO_DIRSET_PIN20_Msk (0x1UL << GPIO_DIRSET_PIN20_Pos)
#define GPIO_DIRSET_PIN20_Input (0x0UL)
#define GPIO_DIRSET_PIN20_Output (0x1UL)
#define GPIO_DIRSET_PIN20_Set (0x1UL)

/* Bit 19 : Set as output pin 19 */
#define GPIO_DIRSET_PIN19_Pos (19UL)
#define GPIO_DIRSET_PIN19_Msk (0x1UL << GPIO_DIRSET_PIN19_Pos)
#define GPIO_DIRSET_PIN19_Input (0x0UL)
#define GPIO_DIRSET_PIN19_Output (0x1UL)
#define GPIO_DIRSET_PIN19_Set (0x1UL)

/* Bit 18 : Set as output pin 18 */
#define GPIO_DIRSET_PIN18_Pos (18UL)
#define GPIO_DIRSET_PIN18_Msk (0x1UL << GPIO_DIRSET_PIN18_Pos)
#define GPIO_DIRSET_PIN18_Input (0x0UL)
#define GPIO_DIRSET_PIN18_Output (0x1UL)
#define GPIO_DIRSET_PIN18_Set (0x1UL)

/* Bit 17 : Set as output pin 17 */
#define GPIO_DIRSET_PIN17_Pos (17UL)
#define GPIO_DIRSET_PIN17_Msk (0x1UL << GPIO_DIRSET_PIN17_Pos)
#define GPIO_DIRSET_PIN17_Input (0x0UL)
#define GPIO_DIRSET_PIN17_Output (0x1UL)
#define GPIO_DIRSET_PIN17_Set (0x1UL)

/* Bit 16 : Set as output pin 16 */
#define GPIO_DIRSET_PIN16_Pos (16UL)
#define GPIO_DIRSET_PIN16_Msk (0x1UL << GPIO_DIRSET_PIN16_Pos)
#define GPIO_DIRSET_PIN16_Input (0x0UL)
#define GPIO_DIRSET_PIN16_Output (0x1UL)
#define GPIO_DIRSET_PIN16_Set (0x1UL)

/* Bit 15 : Set as output pin 15 */
#define GPIO_DIRSET_PIN15_Pos (15UL)
#define GPIO_DIRSET_PIN15_Msk (0x1UL << GPIO_DIRSET_PIN15_Pos)
#define GPIO_DIRSET_PIN15_Input (0x0UL)
#define GPIO_DIRSET_PIN15_Output (0x1UL)
#define GPIO_DIRSET_PIN15_Set (0x1UL)

/* Bit 14 : Set as output pin 14 */
#define GPIO_DIRSET_PIN14_Pos (14UL)
#define GPIO_DIRSET_PIN14_Msk (0x1UL << GPIO_DIRSET_PIN14_Pos)
#define GPIO_DIRSET_PIN14_Input (0x0UL)
#define GPIO_DIRSET_PIN14_Output (0x1UL)
#define GPIO_DIRSET_PIN14_Set (0x1UL)

/* Bit 13 : Set as output pin 13 */
#define GPIO_DIRSET_PIN13_Pos (13UL)
#define GPIO_DIRSET_PIN13_Msk (0x1UL << GPIO_DIRSET_PIN13_Pos)
#define GPIO_DIRSET_PIN13_Input (0x0UL)
#define GPIO_DIRSET_PIN13_Output (0x1UL)
#define GPIO_DIRSET_PIN13_Set (0x1UL)

/* Bit 12 : Set as output pin 12 */
#define GPIO_DIRSET_PIN12_Pos (12UL)
#define GPIO_DIRSET_PIN12_Msk (0x1UL << GPIO_DIRSET_PIN12_Pos)
#define GPIO_DIRSET_PIN12_Input (0x0UL)
#define GPIO_DIRSET_PIN12_Output (0x1UL)
#define GPIO_DIRSET_PIN12_Set (0x1UL)

/* Bit 11 : Set as output pin 11 */
#define GPIO_DIRSET_PIN11_Pos (11UL)
#define GPIO_DIRSET_PIN11_Msk (0x1UL << GPIO_DIRSET_PIN11_Pos)
#define GPIO_DIRSET_PIN11_Input (0x0UL)
#define GPIO_DIRSET_PIN11_Output (0x1UL)
#define GPIO_DIRSET_PIN11_Set (0x1UL)

/* Bit 10 : Set as output pin 10 */
#define GPIO_DIRSET_PIN10_Pos (10UL)
#define GPIO_DIRSET_PIN10_Msk (0x1UL << GPIO_DIRSET_PIN10_Pos)
#define GPIO_DIRSET_PIN10_Input (0x0UL)
#define GPIO_DIRSET_PIN10_Output (0x1UL)
#define GPIO_DIRSET_PIN10_Set (0x1UL)

/* Bit 9 : Set as output pin 9 */
#define GPIO_DIRSET_PIN9_Pos (9UL)
#define GPIO_DIRSET_PIN9_Msk (0x1UL << GPIO_DIRSET_PIN9_Pos)
#define GPIO_DIRSET_PIN9_Input (0x0UL)
#define GPIO_DIRSET_PIN9_Output (0x1UL)
#define GPIO_DIRSET_PIN9_Set (0x1UL)

/* Bit 8 : Set as output pin 8 */
#define GPIO_DIRSET_PIN8_Pos (8UL)
#define GPIO_DIRSET_PIN8_Msk (0x1UL << GPIO_DIRSET_PIN8_Pos)
#define GPIO_DIRSET_PIN8_Input (0x0UL)
#define GPIO_DIRSET_PIN8_Output (0x1UL)
#define GPIO_DIRSET_PIN8_Set (0x1UL)

/* Bit 7 : Set as output pin 7 */
#define GPIO_DIRSET_PIN7_Pos (7UL)
#define GPIO_DIRSET_PIN7_Msk (0x1UL << GPIO_DIRSET_PIN7_Pos)
#define GPIO_DIRSET_PIN7_Input (0x0UL)
#define GPIO_DIRSET_PIN7_Output (0x1UL)
#define GPIO_DIRSET_PIN7_Set (0x1UL)

/* Bit 6 : Set as output pin 6 */
#define GPIO_DIRSET_PIN6_Pos (6UL)
#define GPIO_DIRSET_PIN6_Msk (0x1UL << GPIO_DIRSET_PIN6_Pos)
#define GPIO_DIRSET_PIN6_Input (0x0UL)
#define GPIO_DIRSET_PIN6_Output (0x1UL)
#define GPIO_DIRSET_PIN6_Set (0x1UL)

/* Bit 5 : Set as output pin 5 */
#define GPIO_DIRSET_PIN5_Pos (5UL)
#define GPIO_DIRSET_PIN5_Msk (0x1UL << GPIO_DIRSET_PIN5_Pos)
#define GPIO_DIRSET_PIN5_Input (0x0UL)
#define GPIO_DIRSET_PIN5_Output (0x1UL)
#define GPIO_DIRSET_PIN5_Set (0x1UL)

/* Bit 4 : Set as output pin 4 */
#define GPIO_DIRSET_PIN4_Pos (4UL)
#define GPIO_DIRSET_PIN4_Msk (0x1UL << GPIO_DIRSET_PIN4_Pos)
#define GPIO_DIRSET_PIN4_Input (0x0UL)
#define GPIO_DIRSET_PIN4_Output (0x1UL)
#define GPIO_DIRSET_PIN4_Set (0x1UL)

/* Bit 3 : Set as output pin 3 */
#define GPIO_DIRSET_PIN3_Pos (3UL)
#define GPIO_DIRSET_PIN3_Msk (0x1UL << GPIO_DIRSET_PIN3_Pos)
#define GPIO_DIRSET_PIN3_Input (0x0UL)
#define GPIO_DIRSET_PIN3_Output (0x1UL)
#define GPIO_DIRSET_PIN3_Set (0x1UL)

/* Bit 2 : Set as output pin 2 */
#define GPIO_DIRSET_PIN2_Pos (2UL)
#define GPIO_DIRSET_PIN2_Msk (0x1UL << GPIO_DIRSET_PIN2_Pos)
#define GPIO_DIRSET_PIN2_Input (0x0UL)
#define GPIO_DIRSET_PIN2_Output (0x1UL)
#define GPIO_DIRSET_PIN2_Set (0x1UL)

/* Bit 1 : Set as output pin 1 */
#define GPIO_DIRSET_PIN1_Pos (1UL)
#define GPIO_DIRSET_PIN1_Msk (0x1UL << GPIO_DIRSET_PIN1_Pos)
#define GPIO_DIRSET_PIN1_Input (0x0UL)
#define GPIO_DIRSET_PIN1_Output (0x1UL)
#define GPIO_DIRSET_PIN1_Set (0x1UL)

/* Bit 0 : Set as output pin 0 */
#define GPIO_DIRSET_PIN0_Pos (0UL)
#define GPIO_DIRSET_PIN0_Msk (0x1UL << GPIO_DIRSET_PIN0_Pos)
#define GPIO_DIRSET_PIN0_Input (0x0UL)
#define GPIO_DIRSET_PIN0_Output (0x1UL)
#define GPIO_DIRSET_PIN0_Set (0x1UL)

/* Register: GPIO_DIRCLR */
/* Description: DIR clear register */

/* Bit 31 : Set as input pin 31 */
#define GPIO_DIRCLR_PIN31_Pos (31UL)
#define GPIO_DIRCLR_PIN31_Msk (0x1UL << GPIO_DIRCLR_PIN31_Pos)
#define GPIO_DIRCLR_PIN31_Input (0x0UL)
#define GPIO_DIRCLR_PIN31_Output (0x1UL)
#define GPIO_DIRCLR_PIN31_Clear (0x1UL)

/* Bit 30 : Set as input pin 30 */
#define GPIO_DIRCLR_PIN30_Pos (30UL)
#define GPIO_DIRCLR_PIN30_Msk (0x1UL << GPIO_DIRCLR_PIN30_Pos)
#define GPIO_DIRCLR_PIN30_Input (0x0UL)
#define GPIO_DIRCLR_PIN30_Output (0x1UL)
#define GPIO_DIRCLR_PIN30_Clear (0x1UL)

/* Bit 29 : Set as input pin 29 */
#define GPIO_DIRCLR_PIN29_Pos (29UL)
#define GPIO_DIRCLR_PIN29_Msk (0x1UL << GPIO_DIRCLR_PIN29_Pos)
#define GPIO_DIRCLR_PIN29_Input (0x0UL)
#define GPIO_DIRCLR_PIN29_Output (0x1UL)
#define GPIO_DIRCLR_PIN29_Clear (0x1UL)

/* Bit 28 : Set as input pin 28 */
#define GPIO_DIRCLR_PIN28_Pos (28UL)
#define GPIO_DIRCLR_PIN28_Msk (0x1UL << GPIO_DIRCLR_PIN28_Pos)
#define GPIO_DIRCLR_PIN28_Input (0x0UL)
#define GPIO_DIRCLR_PIN28_Output (0x1UL)
#define GPIO_DIRCLR_PIN28_Clear (0x1UL)

/* Bit 27 : Set as input pin 27 */
#define GPIO_DIRCLR_PIN27_Pos (27UL)
#define GPIO_DIRCLR_PIN27_Msk (0x1UL << GPIO_DIRCLR_PIN27_Pos)
#define GPIO_DIRCLR_PIN27_Input (0x0UL)
#define GPIO_DIRCLR_PIN27_Output (0x1UL)
#define GPIO_DIRCLR_PIN27_Clear (0x1UL)

/* Bit 26 : Set as input pin 26 */
#define GPIO_DIRCLR_PIN26_Pos (26UL)
#define GPIO_DIRCLR_PIN26_Msk (0x1UL << GPIO_DIRCLR_PIN26_Pos)
#define GPIO_DIRCLR_PIN26_Input (0x0UL)
#define GPIO_DIRCLR_PIN26_Output (0x1UL)
#define GPIO_DIRCLR_PIN26_Clear (0x1UL)

/* Bit 25 : Set as input pin 25 */
#define GPIO_DIRCLR_PIN25_Pos (25UL)
#define GPIO_DIRCLR_PIN25_Msk (0x1UL << GPIO_DIRCLR_PIN25_Pos)
#define GPIO_DIRCLR_PIN25_Input (0x0UL)
#define GPIO_DIRCLR_PIN25_Output (0x1UL)
#define GPIO_DIRCLR_PIN25_Clear (0x1UL)

/* Bit 24 : Set as input pin 24 */
#define GPIO_DIRCLR_PIN24_Pos (24UL)
#define GPIO_DIRCLR_PIN24_Msk (0x1UL << GPIO_DIRCLR_PIN24_Pos)
#define GPIO_DIRCLR_PIN24_Input (0x0UL)
#define GPIO_DIRCLR_PIN24_Output (0x1UL)
#define GPIO_DIRCLR_PIN24_Clear (0x1UL)

/* Bit 23 : Set as input pin 23 */
#define GPIO_DIRCLR_PIN23_Pos (23UL)
#define GPIO_DIRCLR_PIN23_Msk (0x1UL << GPIO_DIRCLR_PIN23_Pos)
#define GPIO_DIRCLR_PIN23_Input (0x0UL)
#define GPIO_DIRCLR_PIN23_Output (0x1UL)
#define GPIO_DIRCLR_PIN23_Clear (0x1UL)

/* Bit 22 : Set as input pin 22 */
#define GPIO_DIRCLR_PIN22_Pos (22UL)
#define GPIO_DIRCLR_PIN22_Msk (0x1UL << GPIO_DIRCLR_PIN22_Pos)
#define GPIO_DIRCLR_PIN22_Input (0x0UL)
#define GPIO_DIRCLR_PIN22_Output (0x1UL)
#define GPIO_DIRCLR_PIN22_Clear (0x1UL)

/* Bit 21 : Set as input pin 21 */
#define GPIO_DIRCLR_PIN21_Pos (21UL)
#define GPIO_DIRCLR_PIN21_Msk (0x1UL << GPIO_DIRCLR_PIN21_Pos)
#define GPIO_DIRCLR_PIN21_Input (0x0UL)
#define GPIO_DIRCLR_PIN21_Output (0x1UL)
#define GPIO_DIRCLR_PIN21_Clear (0x1UL)

/* Bit 20 : Set as input pin 20 */
#define GPIO_DIRCLR_PIN20_Pos (20UL)
#define GPIO_DIRCLR_PIN20_Msk (0x1UL << GPIO_DIRCLR_PIN20_Pos)
#define GPIO_DIRCLR_PIN20_Input (0x0UL)
#define GPIO_DIRCLR_PIN20_Output (0x1UL)
#define GPIO_DIRCLR_PIN20_Clear (0x1UL)

/* Bit 19 : Set as input pin 19 */
#define GPIO_DIRCLR_PIN19_Pos (19UL)
#define GPIO_DIRCLR_PIN19_Msk (0x1UL << GPIO_DIRCLR_PIN19_Pos)
#define GPIO_DIRCLR_PIN19_Input (0x0UL)
#define GPIO_DIRCLR_PIN19_Output (0x1UL)
#define GPIO_DIRCLR_PIN19_Clear (0x1UL)

/* Bit 18 : Set as input pin 18 */
#define GPIO_DIRCLR_PIN18_Pos (18UL)
#define GPIO_DIRCLR_PIN18_Msk (0x1UL << GPIO_DIRCLR_PIN18_Pos)
#define GPIO_DIRCLR_PIN18_Input (0x0UL)
#define GPIO_DIRCLR_PIN18_Output (0x1UL)
#define GPIO_DIRCLR_PIN18_Clear (0x1UL)

/* Bit 17 : Set as input pin 17 */
#define GPIO_DIRCLR_PIN17_Pos (17UL)
#define GPIO_DIRCLR_PIN17_Msk (0x1UL << GPIO_DIRCLR_PIN17_Pos)
#define GPIO_DIRCLR_PIN17_Input (0x0UL)
#define GPIO_DIRCLR_PIN17_Output (0x1UL)
#define GPIO_DIRCLR_PIN17_Clear (0x1UL)

/* Bit 16 : Set as input pin 16 */
#define GPIO_DIRCLR_PIN16_Pos (16UL)
#define GPIO_DIRCLR_PIN16_Msk (0x1UL << GPIO_DIRCLR_PIN16_Pos)
#define GPIO_DIRCLR_PIN16_Input (0x0UL)
#define GPIO_DIRCLR_PIN16_Output (0x1UL)
#define GPIO_DIRCLR_PIN16_Clear (0x1UL)

/* Bit 15 : Set as input pin 15 */
#define GPIO_DIRCLR_PIN15_Pos (15UL)
#define GPIO_DIRCLR_PIN15_Msk (0x1UL << GPIO_DIRCLR_PIN15_Pos)
#define GPIO_DIRCLR_PIN15_Input (0x0UL)
#define GPIO_DIRCLR_PIN15_Output (0x1UL)
#define GPIO_DIRCLR_PIN15_Clear (0x1UL)

/* Bit 14 : Set as input pin 14 */
#define GPIO_DIRCLR_PIN14_Pos (14UL)
#define GPIO_DIRCLR_PIN14_Msk (0x1UL << GPIO_DIRCLR_PIN14_Pos)
#define GPIO_DIRCLR_PIN14_Input (0x0UL)
#define GPIO_DIRCLR_PIN14_Output (0x1UL)
#define GPIO_DIRCLR_PIN14_Clear (0x1UL)

/* Bit 13 : Set as input pin 13 */
#define GPIO_DIRCLR_PIN13_Pos (13UL)
#define GPIO_DIRCLR_PIN13_Msk (0x1UL << GPIO_DIRCLR_PIN13_Pos)
#define GPIO_DIRCLR_PIN13_Input (0x0UL)
#define GPIO_DIRCLR_PIN13_Output (0x1UL)
#define GPIO_DIRCLR_PIN13_Clear (0x1UL)

/* Bit 12 : Set as input pin 12 */
#define GPIO_DIRCLR_PIN12_Pos (12UL)
#define GPIO_DIRCLR_PIN12_Msk (0x1UL << GPIO_DIRCLR_PIN12_Pos)
#define GPIO_DIRCLR_PIN12_Input (0x0UL)
#define GPIO_DIRCLR_PIN12_Output (0x1UL)
#define GPIO_DIRCLR_PIN12_Clear (0x1UL)

/* Bit 11 : Set as input pin 11 */
#define GPIO_DIRCLR_PIN11_Pos (11UL)
#define GPIO_DIRCLR_PIN11_Msk (0x1UL << GPIO_DIRCLR_PIN11_Pos)
#define GPIO_DIRCLR_PIN11_Input (0x0UL)
#define GPIO_DIRCLR_PIN11_Output (0x1UL)
#define GPIO_DIRCLR_PIN11_Clear (0x1UL)

/* Bit 10 : Set as input pin 10 */
#define GPIO_DIRCLR_PIN10_Pos (10UL)
#define GPIO_DIRCLR_PIN10_Msk (0x1UL << GPIO_DIRCLR_PIN10_Pos)
#define GPIO_DIRCLR_PIN10_Input (0x0UL)
#define GPIO_DIRCLR_PIN10_Output (0x1UL)
#define GPIO_DIRCLR_PIN10_Clear (0x1UL)

/* Bit 9 : Set as input pin 9 */
#define GPIO_DIRCLR_PIN9_Pos (9UL)
#define GPIO_DIRCLR_PIN9_Msk (0x1UL << GPIO_DIRCLR_PIN9_Pos)
#define GPIO_DIRCLR_PIN9_Input (0x0UL)
#define GPIO_DIRCLR_PIN9_Output (0x1UL)
#define GPIO_DIRCLR_PIN9_Clear (0x1UL)

/* Bit 8 : Set as input pin 8 */
#define GPIO_DIRCLR_PIN8_Pos (8UL)
#define GPIO_DIRCLR_PIN8_Msk (0x1UL << GPIO_DIRCLR_PIN8_Pos)
#define GPIO_DIRCLR_PIN8_Input (0x0UL)
#define GPIO_DIRCLR_PIN8_Output (0x1UL)
#define GPIO_DIRCLR_PIN8_Clear (0x1UL)

/* Bit 7 : Set as input pin 7 */
#define GPIO_DIRCLR_PIN7_Pos (7UL)
#define GPIO_DIRCLR_PIN7_Msk (0x1UL << GPIO_DIRCLR_PIN7_Pos)
#define GPIO_DIRCLR_PIN7_Input (0x0UL)
#define GPIO_DIRCLR_PIN7_Output (0x1UL)
#define GPIO_DIRCLR_PIN7_Clear (0x1UL)

/* Bit 6 : Set as input pin 6 */
#define GPIO_DIRCLR_PIN6_Pos (6UL)
#define GPIO_DIRCLR_PIN6_Msk (0x1UL << GPIO_DIRCLR_PIN6_Pos)
#define GPIO_DIRCLR_PIN6_Input (0x0UL)
#define GPIO_DIRCLR_PIN6_Output (0x1UL)
#define GPIO_DIRCLR_PIN6_Clear (0x1UL)

/* Bit 5 : Set as input pin 5 */
#define GPIO_DIRCLR_PIN5_Pos (5UL)
#define GPIO_DIRCLR_PIN5_Msk (0x1UL << GPIO_DIRCLR_PIN5_Pos)
#define GPIO_DIRCLR_PIN5_Input (0x0UL)
#define GPIO_DIRCLR_PIN5_Output (0x1UL)
#define GPIO_DIRCLR_PIN5_Clear (0x1UL)

/* Bit 4 : Set as input pin 4 */
#define GPIO_DIRCLR_PIN4_Pos (4UL)
#define GPIO_DIRCLR_PIN4_Msk (0x1UL << GPIO_DIRCLR_PIN4_Pos)
#define GPIO_DIRCLR_PIN4_Input (0x0UL)
#define GPIO_DIRCLR_PIN4_Output (0x1UL)
#define GPIO_DIRCLR_PIN4_Clear (0x1UL)

/* Bit 3 : Set as input pin 3 */
#define GPIO_DIRCLR_PIN3_Pos (3UL)
#define GPIO_DIRCLR_PIN3_Msk (0x1UL << GPIO_DIRCLR_PIN3_Pos)
#define GPIO_DIRCLR_PIN3_Input (0x0UL)
#define GPIO_DIRCLR_PIN3_Output (0x1UL)
#define GPIO_DIRCLR_PIN3_Clear (0x1UL)

/* Bit 2 : Set as input pin 2 */
#define GPIO_DIRCLR_PIN2_Pos (2UL)
#define GPIO_DIRCLR_PIN2_Msk (0x1UL << GPIO_DIRCLR_PIN2_Pos)
#define GPIO_DIRCLR_PIN2_Input (0x0UL)
#define GPIO_DIRCLR_PIN2_Output (0x1UL)
#define GPIO_DIRCLR_PIN2_Clear (0x1UL)

/* Bit 1 : Set as input pin 1 */
#define GPIO_DIRCLR_PIN1_Pos (1UL)
#define GPIO_DIRCLR_PIN1_Msk (0x1UL << GPIO_DIRCLR_PIN1_Pos)
#define GPIO_DIRCLR_PIN1_Input (0x0UL)
#define GPIO_DIRCLR_PIN1_Output (0x1UL)
#define GPIO_DIRCLR_PIN1_Clear (0x1UL)

/* Bit 0 : Set as input pin 0 */
#define GPIO_DIRCLR_PIN0_Pos (0UL)
#define GPIO_DIRCLR_PIN0_Msk (0x1UL << GPIO_DIRCLR_PIN0_Pos)
#define GPIO_DIRCLR_PIN0_Input (0x0UL)
#define GPIO_DIRCLR_PIN0_Output (0x1UL)
#define GPIO_DIRCLR_PIN0_Clear (0x1UL)

/* Register: GPIO_LATCH */
/* Description: Latch register indicating what GPIO pins that have met the criteria set in the PIN_CNF[n].SENSE registers */

/* Bit 31 : Status on whether PIN[31] has met criteria set in PIN_CNF[31].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN31_Pos (31UL)
#define GPIO_LATCH_PIN31_Msk (0x1UL << GPIO_LATCH_PIN31_Pos)
#define GPIO_LATCH_PIN31_NotLatched (0x0UL)
#define GPIO_LATCH_PIN31_Latched (0x1UL)

/* Bit 30 : Status on whether PIN[30] has met criteria set in PIN_CNF[30].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN30_Pos (30UL)
#define GPIO_LATCH_PIN30_Msk (0x1UL << GPIO_LATCH_PIN30_Pos)
#define GPIO_LATCH_PIN30_NotLatched (0x0UL)
#define GPIO_LATCH_PIN30_Latched (0x1UL)

/* Bit 29 : Status on whether PIN[29] has met criteria set in PIN_CNF[29].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN29_Pos (29UL)
#define GPIO_LATCH_PIN29_Msk (0x1UL << GPIO_LATCH_PIN29_Pos)
#define GPIO_LATCH_PIN29_NotLatched (0x0UL)
#define GPIO_LATCH_PIN29_Latched (0x1UL)

/* Bit 28 : Status on whether PIN[28] has met criteria set in PIN_CNF[28].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN28_Pos (28UL)
#define GPIO_LATCH_PIN28_Msk (0x1UL << GPIO_LATCH_PIN28_Pos)
#define GPIO_LATCH_PIN28_NotLatched (0x0UL)
#define GPIO_LATCH_PIN28_Latched (0x1UL)

/* Bit 27 : Status on whether PIN[27] has met criteria set in PIN_CNF[27].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN27_Pos (27UL)
#define GPIO_LATCH_PIN27_Msk (0x1UL << GPIO_LATCH_PIN27_Pos)
#define GPIO_LATCH_PIN27_NotLatched (0x0UL)
#define GPIO_LATCH_PIN27_Latched (0x1UL)

/* Bit 26 : Status on whether PIN[26] has met criteria set in PIN_CNF[26].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN26_Pos (26UL)
#define GPIO_LATCH_PIN26_Msk (0x1UL << GPIO_LATCH_PIN26_Pos)
#define GPIO_LATCH_PIN26_NotLatched (0x0UL)
#define GPIO_LATCH_PIN26_Latched (0x1UL)

/* Bit 25 : Status on whether PIN[25] has met criteria set in PIN_CNF[25].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN25_Pos (25UL)
#define GPIO_LATCH_PIN25_Msk (0x1UL << GPIO_LATCH_PIN25_Pos)
#define GPIO_LATCH_PIN25_NotLatched (0x0UL)
#define GPIO_LATCH_PIN25_Latched (0x1UL)

/* Bit 24 : Status on whether PIN[24] has met criteria set in PIN_CNF[24].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN24_Pos (24UL)
#define GPIO_LATCH_PIN24_Msk (0x1UL << GPIO_LATCH_PIN24_Pos)
#define GPIO_LATCH_PIN24_NotLatched (0x0UL)
#define GPIO_LATCH_PIN24_Latched (0x1UL)

/* Bit 23 : Status on whether PIN[23] has met criteria set in PIN_CNF[23].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN23_Pos (23UL)
#define GPIO_LATCH_PIN23_Msk (0x1UL << GPIO_LATCH_PIN23_Pos)
#define GPIO_LATCH_PIN23_NotLatched (0x0UL)
#define GPIO_LATCH_PIN23_Latched (0x1UL)

/* Bit 22 : Status on whether PIN[22] has met criteria set in PIN_CNF[22].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN22_Pos (22UL)
#define GPIO_LATCH_PIN22_Msk (0x1UL << GPIO_LATCH_PIN22_Pos)
#define GPIO_LATCH_PIN22_NotLatched (0x0UL)
#define GPIO_LATCH_PIN22_Latched (0x1UL)

/* Bit 21 : Status on whether PIN[21] has met criteria set in PIN_CNF[21].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN21_Pos (21UL)
#define GPIO_LATCH_PIN21_Msk (0x1UL << GPIO_LATCH_PIN21_Pos)
#define GPIO_LATCH_PIN21_NotLatched (0x0UL)
#define GPIO_LATCH_PIN21_Latched (0x1UL)

/* Bit 20 : Status on whether PIN[20] has met criteria set in PIN_CNF[20].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN20_Pos (20UL)
#define GPIO_LATCH_PIN20_Msk (0x1UL << GPIO_LATCH_PIN20_Pos)
#define GPIO_LATCH_PIN20_NotLatched (0x0UL)
#define GPIO_LATCH_PIN20_Latched (0x1UL)

/* Bit 19 : Status on whether PIN[19] has met criteria set in PIN_CNF[19].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN19_Pos (19UL)
#define GPIO_LATCH_PIN19_Msk (0x1UL << GPIO_LATCH_PIN19_Pos)
#define GPIO_LATCH_PIN19_NotLatched (0x0UL)
#define GPIO_LATCH_PIN19_Latched (0x1UL)

/* Bit 18 : Status on whether PIN[18] has met criteria set in PIN_CNF[18].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN18_Pos (18UL)
#define GPIO_LATCH_PIN18_Msk (0x1UL << GPIO_LATCH_PIN18_Pos)
#define GPIO_LATCH_PIN18_NotLatched (0x0UL)
#define GPIO_LATCH_PIN18_Latched (0x1UL)

/* Bit 17 : Status on whether PIN[17] has met criteria set in PIN_CNF[17].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN17_Pos (17UL)
#define GPIO_LATCH_PIN17_Msk (0x1UL << GPIO_LATCH_PIN17_Pos)
#define GPIO_LATCH_PIN17_NotLatched (0x0UL)
#define GPIO_LATCH_PIN17_Latched (0x1UL)

/* Bit 16 : Status on whether PIN[16] has met criteria set in PIN_CNF[16].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN16_Pos (16UL)
#define GPIO_LATCH_PIN16_Msk (0x1UL << GPIO_LATCH_PIN16_Pos)
#define GPIO_LATCH_PIN16_NotLatched (0x0UL)
#define GPIO_LATCH_PIN16_Latched (0x1UL)

/* Bit 15 : Status on whether PIN[15] has met criteria set in PIN_CNF[15].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN15_Pos (15UL)
#define GPIO_LATCH_PIN15_Msk (0x1UL << GPIO_LATCH_PIN15_Pos)
#define GPIO_LATCH_PIN15_NotLatched (0x0UL)
#define GPIO_LATCH_PIN15_Latched (0x1UL)

/* Bit 14 : Status on whether PIN[14] has met criteria set in PIN_CNF[14].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN14_Pos (14UL)
#define GPIO_LATCH_PIN14_Msk (0x1UL << GPIO_LATCH_PIN14_Pos)
#define GPIO_LATCH_PIN14_NotLatched (0x0UL)
#define GPIO_LATCH_PIN14_Latched (0x1UL)

/* Bit 13 : Status on whether PIN[13] has met criteria set in PIN_CNF[13].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN13_Pos (13UL)
#define GPIO_LATCH_PIN13_Msk (0x1UL << GPIO_LATCH_PIN13_Pos)
#define GPIO_LATCH_PIN13_NotLatched (0x0UL)
#define GPIO_LATCH_PIN13_Latched (0x1UL)

/* Bit 12 : Status on whether PIN[12] has met criteria set in PIN_CNF[12].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN12_Pos (12UL)
#define GPIO_LATCH_PIN12_Msk (0x1UL << GPIO_LATCH_PIN12_Pos)
#define GPIO_LATCH_PIN12_NotLatched (0x0UL)
#define GPIO_LATCH_PIN12_Latched (0x1UL)

/* Bit 11 : Status on whether PIN[11] has met criteria set in PIN_CNF[11].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN11_Pos (11UL)
#define GPIO_LATCH_PIN11_Msk (0x1UL << GPIO_LATCH_PIN11_Pos)
#define GPIO_LATCH_PIN11_NotLatched (0x0UL)
#define GPIO_LATCH_PIN11_Latched (0x1UL)

/* Bit 10 : Status on whether PIN[10] has met criteria set in PIN_CNF[10].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN10_Pos (10UL)
#define GPIO_LATCH_PIN10_Msk (0x1UL << GPIO_LATCH_PIN10_Pos)
#define GPIO_LATCH_PIN10_NotLatched (0x0UL)
#define GPIO_LATCH_PIN10_Latched (0x1UL)

/* Bit 9 : Status on whether PIN[9] has met criteria set in PIN_CNF[9].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN9_Pos (9UL)
#define GPIO_LATCH_PIN9_Msk (0x1UL << GPIO_LATCH_PIN9_Pos)
#define GPIO_LATCH_PIN9_NotLatched (0x0UL)
#define GPIO_LATCH_PIN9_Latched (0x1UL)

/* Bit 8 : Status on whether PIN[8] has met criteria set in PIN_CNF[8].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN8_Pos (8UL)
#define GPIO_LATCH_PIN8_Msk (0x1UL << GPIO_LATCH_PIN8_Pos)
#define GPIO_LATCH_PIN8_NotLatched (0x0UL)
#define GPIO_LATCH_PIN8_Latched (0x1UL)

/* Bit 7 : Status on whether PIN[7] has met criteria set in PIN_CNF[7].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN7_Pos (7UL)
#define GPIO_LATCH_PIN7_Msk (0x1UL << GPIO_LATCH_PIN7_Pos)
#define GPIO_LATCH_PIN7_NotLatched (0x0UL)
#define GPIO_LATCH_PIN7_Latched (0x1UL)

/* Bit 6 : Status on whether PIN[6] has met criteria set in PIN_CNF[6].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN6_Pos (6UL)
#define GPIO_LATCH_PIN6_Msk (0x1UL << GPIO_LATCH_PIN6_Pos)
#define GPIO_LATCH_PIN6_NotLatched (0x0UL)
#define GPIO_LATCH_PIN6_Latched (0x1UL)

/* Bit 5 : Status on whether PIN[5] has met criteria set in PIN_CNF[5].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN5_Pos (5UL)
#define GPIO_LATCH_PIN5_Msk (0x1UL << GPIO_LATCH_PIN5_Pos)
#define GPIO_LATCH_PIN5_NotLatched (0x0UL)
#define GPIO_LATCH_PIN5_Latched (0x1UL)

/* Bit 4 : Status on whether PIN[4] has met criteria set in PIN_CNF[4].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN4_Pos (4UL)
#define GPIO_LATCH_PIN4_Msk (0x1UL << GPIO_LATCH_PIN4_Pos)
#define GPIO_LATCH_PIN4_NotLatched (0x0UL)
#define GPIO_LATCH_PIN4_Latched (0x1UL)

/* Bit 3 : Status on whether PIN[3] has met criteria set in PIN_CNF[3].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN3_Pos (3UL)
#define GPIO_LATCH_PIN3_Msk (0x1UL << GPIO_LATCH_PIN3_Pos)
#define GPIO_LATCH_PIN3_NotLatched (0x0UL)
#define GPIO_LATCH_PIN3_Latched (0x1UL)

/* Bit 2 : Status on whether PIN[2] has met criteria set in PIN_CNF[2].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN2_Pos (2UL)
#define GPIO_LATCH_PIN2_Msk (0x1UL << GPIO_LATCH_PIN2_Pos)
#define GPIO_LATCH_PIN2_NotLatched (0x0UL)
#define GPIO_LATCH_PIN2_Latched (0x1UL)

/* Bit 1 : Status on whether PIN[1] has met criteria set in PIN_CNF[1].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN1_Pos (1UL)
#define GPIO_LATCH_PIN1_Msk (0x1UL << GPIO_LATCH_PIN1_Pos)
#define GPIO_LATCH_PIN1_NotLatched (0x0UL)
#define GPIO_LATCH_PIN1_Latched (0x1UL)

/* Bit 0 : Status on whether PIN[0] has met criteria set in PIN_CNF[0].SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN0_Pos (0UL)
#define GPIO_LATCH_PIN0_Msk (0x1UL << GPIO_LATCH_PIN0_Pos)
#define GPIO_LATCH_PIN0_NotLatched (0x0UL)
#define GPIO_LATCH_PIN0_Latched (0x1UL)

/* Register: GPIO_DETECTMODE */
/* Description: Select between default DETECT signal behavior and LDETECT mode */

/* Bit 0 : Select between default DETECT signal behavior and LDETECT mode */
#define GPIO_DETECTMODE_DETECTMODE_Pos (0UL)
#define GPIO_DETECTMODE_DETECTMODE_Msk (0x1UL << GPIO_DETECTMODE_DETECTMODE_Pos)
#define GPIO_DETECTMODE_DETECTMODE_Default (0x0UL)
#define GPIO_DETECTMODE_DETECTMODE_LDETECT (0x1UL)

/* Register: GPIO_DETECTMODE_SEC */
/* Description: Select between default DETECT signal behavior and LDETECT mode */

/* Bit 0 : Select between default DETECT signal behavior and LDETECT mode */
#define GPIO_DETECTMODE_SEC_DETECTMODE_Pos (0UL)
#define GPIO_DETECTMODE_SEC_DETECTMODE_Msk (0x1UL << GPIO_DETECTMODE_SEC_DETECTMODE_Pos)
#define GPIO_DETECTMODE_SEC_DETECTMODE_Default (0x0UL)
#define GPIO_DETECTMODE_SEC_DETECTMODE_LDETECT (0x1UL)

/* Register: GPIO_PIN_CNF */
/* Description: Description collection: Configuration of GPIO pins */

/* Bits 30..28 : Select which MCU/Subsystem controls this pin Note: this field is only accessible from secure code. */
#define GPIO_PIN_CNF_MCUSEL_Pos (28UL)
#define GPIO_PIN_CNF_MCUSEL_Msk (0x7UL << GPIO_PIN_CNF_MCUSEL_Pos)
#define GPIO_PIN_CNF_MCUSEL_AppMCU (0x0UL)
#define GPIO_PIN_CNF_MCUSEL_NetworkMCU (0x1UL)
#define GPIO_PIN_CNF_MCUSEL_Peripheral (0x3UL)
#define GPIO_PIN_CNF_MCUSEL_TND (0x7UL)

/* Bits 17..16 : Pin sensing mechanism */
#define GPIO_PIN_CNF_SENSE_Pos (16UL)
#define GPIO_PIN_CNF_SENSE_Msk (0x3UL << GPIO_PIN_CNF_SENSE_Pos)
#define GPIO_PIN_CNF_SENSE_Disabled (0x0UL)
#define GPIO_PIN_CNF_SENSE_High (0x2UL)
#define GPIO_PIN_CNF_SENSE_Low (0x3UL)

/* Bits 11..8 : Drive configuration */
#define GPIO_PIN_CNF_DRIVE_Pos (8UL)
#define GPIO_PIN_CNF_DRIVE_Msk (0xFUL << GPIO_PIN_CNF_DRIVE_Pos)
#define GPIO_PIN_CNF_DRIVE_S0S1 (0x0UL)
#define GPIO_PIN_CNF_DRIVE_H0S1 (0x1UL)
#define GPIO_PIN_CNF_DRIVE_S0H1 (0x2UL)
#define GPIO_PIN_CNF_DRIVE_H0H1 (0x3UL)
#define GPIO_PIN_CNF_DRIVE_D0S1 (0x4UL)
#define GPIO_PIN_CNF_DRIVE_D0H1 (0x5UL)
#define GPIO_PIN_CNF_DRIVE_S0D1 (0x6UL)
#define GPIO_PIN_CNF_DRIVE_H0D1 (0x7UL)
#define GPIO_PIN_CNF_DRIVE_E0E1 (0xBUL)

/* Bits 3..2 : Pull configuration */
#define GPIO_PIN_CNF_PULL_Pos (2UL)
#define GPIO_PIN_CNF_PULL_Msk (0x3UL << GPIO_PIN_CNF_PULL_Pos)
#define GPIO_PIN_CNF_PULL_Disabled (0x0UL)
#define GPIO_PIN_CNF_PULL_Pulldown (0x1UL)
#define GPIO_PIN_CNF_PULL_Pullup (0x3UL)

/* Bit 1 : Connect or disconnect input buffer */
#define GPIO_PIN_CNF_INPUT_Pos (1UL)
#define GPIO_PIN_CNF_INPUT_Msk (0x1UL << GPIO_PIN_CNF_INPUT_Pos)
#define GPIO_PIN_CNF_INPUT_Connect (0x0UL)
#define GPIO_PIN_CNF_INPUT_Disconnect (0x1UL)

/* Bit 0 : Pin direction. Same physical register as DIR register */
#define GPIO_PIN_CNF_DIR_Pos (0UL)
#define GPIO_PIN_CNF_DIR_Msk (0x1UL << GPIO_PIN_CNF_DIR_Pos)
#define GPIO_PIN_CNF_DIR_Input (0x0UL)
#define GPIO_PIN_CNF_DIR_Output (0x1UL)


/* Peripheral: POWER */
/* Description: Power control */

/* Register: POWER_TASKS_CONSTLAT */
/* Description: Enable Constant Latency mode */

/* Bit 0 : Enable Constant Latency mode */
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos (0UL)
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Msk (0x1UL << POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos)
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Trigger (0x1UL)

/* Register: POWER_TASKS_LOWPWR */
/* Description: Enable Low-Power mode (variable latency) */

/* Bit 0 : Enable Low-Power mode (variable latency) */
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos (0UL)
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Msk (0x1UL << POWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos)
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Trigger (0x1UL)

/* Register: POWER_SUBSCRIBE_CONSTLAT */
/* Description: Subscribe configuration for task CONSTLAT */

/* Bit 31 :   */
#define POWER_SUBSCRIBE_CONSTLAT_EN_Pos (31UL)
#define POWER_SUBSCRIBE_CONSTLAT_EN_Msk (0x1UL << POWER_SUBSCRIBE_CONSTLAT_EN_Pos)
#define POWER_SUBSCRIBE_CONSTLAT_EN_Disabled (0x0UL)
#define POWER_SUBSCRIBE_CONSTLAT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task CONSTLAT will subscribe to */
#define POWER_SUBSCRIBE_CONSTLAT_CHIDX_Pos (0UL)
#define POWER_SUBSCRIBE_CONSTLAT_CHIDX_Msk (0xFFUL << POWER_SUBSCRIBE_CONSTLAT_CHIDX_Pos)

/* Register: POWER_SUBSCRIBE_LOWPWR */
/* Description: Subscribe configuration for task LOWPWR */

/* Bit 31 :   */
#define POWER_SUBSCRIBE_LOWPWR_EN_Pos (31UL)
#define POWER_SUBSCRIBE_LOWPWR_EN_Msk (0x1UL << POWER_SUBSCRIBE_LOWPWR_EN_Pos)
#define POWER_SUBSCRIBE_LOWPWR_EN_Disabled (0x0UL)
#define POWER_SUBSCRIBE_LOWPWR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task LOWPWR will subscribe to */
#define POWER_SUBSCRIBE_LOWPWR_CHIDX_Pos (0UL)
#define POWER_SUBSCRIBE_LOWPWR_CHIDX_Msk (0xFFUL << POWER_SUBSCRIBE_LOWPWR_CHIDX_Pos)

/* Register: POWER_EVENTS_POFWARN */
/* Description: Power failure warning */

/* Bit 0 : Power failure warning */
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos (0UL)
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Msk (0x1UL << POWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos)
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_NotGenerated (0x0UL)
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Generated (0x1UL)

/* Register: POWER_EVENTS_SLEEPENTER */
/* Description: CPU entered WFI/WFE sleep */

/* Bit 0 : CPU entered WFI/WFE sleep */
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos (0UL)
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Msk (0x1UL << POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos)
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_NotGenerated (0x0UL)
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Generated (0x1UL)

/* Register: POWER_EVENTS_SLEEPEXIT */
/* Description: CPU exited WFI/WFE sleep */

/* Bit 0 : CPU exited WFI/WFE sleep */
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos (0UL)
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Msk (0x1UL << POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos)
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_NotGenerated (0x0UL)
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Generated (0x1UL)

/* Register: POWER_PUBLISH_POFWARN */
/* Description: Publish configuration for event POFWARN */

/* Bit 31 :   */
#define POWER_PUBLISH_POFWARN_EN_Pos (31UL)
#define POWER_PUBLISH_POFWARN_EN_Msk (0x1UL << POWER_PUBLISH_POFWARN_EN_Pos)
#define POWER_PUBLISH_POFWARN_EN_Disabled (0x0UL)
#define POWER_PUBLISH_POFWARN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event POFWARN will publish to */
#define POWER_PUBLISH_POFWARN_CHIDX_Pos (0UL)
#define POWER_PUBLISH_POFWARN_CHIDX_Msk (0xFFUL << POWER_PUBLISH_POFWARN_CHIDX_Pos)

/* Register: POWER_PUBLISH_SLEEPENTER */
/* Description: Publish configuration for event SLEEPENTER */

/* Bit 31 :   */
#define POWER_PUBLISH_SLEEPENTER_EN_Pos (31UL)
#define POWER_PUBLISH_SLEEPENTER_EN_Msk (0x1UL << POWER_PUBLISH_SLEEPENTER_EN_Pos)
#define POWER_PUBLISH_SLEEPENTER_EN_Disabled (0x0UL)
#define POWER_PUBLISH_SLEEPENTER_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event SLEEPENTER will publish to */
#define POWER_PUBLISH_SLEEPENTER_CHIDX_Pos (0UL)
#define POWER_PUBLISH_SLEEPENTER_CHIDX_Msk (0xFFUL << POWER_PUBLISH_SLEEPENTER_CHIDX_Pos)

/* Register: POWER_PUBLISH_SLEEPEXIT */
/* Description: Publish configuration for event SLEEPEXIT */

/* Bit 31 :   */
#define POWER_PUBLISH_SLEEPEXIT_EN_Pos (31UL)
#define POWER_PUBLISH_SLEEPEXIT_EN_Msk (0x1UL << POWER_PUBLISH_SLEEPEXIT_EN_Pos)
#define POWER_PUBLISH_SLEEPEXIT_EN_Disabled (0x0UL)
#define POWER_PUBLISH_SLEEPEXIT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event SLEEPEXIT will publish to */
#define POWER_PUBLISH_SLEEPEXIT_CHIDX_Pos (0UL)
#define POWER_PUBLISH_SLEEPEXIT_CHIDX_Msk (0xFFUL << POWER_PUBLISH_SLEEPEXIT_CHIDX_Pos)

/* Register: POWER_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 6 : Enable or disable interrupt for event SLEEPEXIT */
#define POWER_INTEN_SLEEPEXIT_Pos (6UL)
#define POWER_INTEN_SLEEPEXIT_Msk (0x1UL << POWER_INTEN_SLEEPEXIT_Pos)
#define POWER_INTEN_SLEEPEXIT_Disabled (0x0UL)
#define POWER_INTEN_SLEEPEXIT_Enabled (0x1UL)

/* Bit 5 : Enable or disable interrupt for event SLEEPENTER */
#define POWER_INTEN_SLEEPENTER_Pos (5UL)
#define POWER_INTEN_SLEEPENTER_Msk (0x1UL << POWER_INTEN_SLEEPENTER_Pos)
#define POWER_INTEN_SLEEPENTER_Disabled (0x0UL)
#define POWER_INTEN_SLEEPENTER_Enabled (0x1UL)

/* Bit 2 : Enable or disable interrupt for event POFWARN */
#define POWER_INTEN_POFWARN_Pos (2UL)
#define POWER_INTEN_POFWARN_Msk (0x1UL << POWER_INTEN_POFWARN_Pos)
#define POWER_INTEN_POFWARN_Disabled (0x0UL)
#define POWER_INTEN_POFWARN_Enabled (0x1UL)

/* Register: POWER_INTENSET */
/* Description: Enable interrupt */

/* Bit 6 : Write '1' to enable interrupt for event SLEEPEXIT */
#define POWER_INTENSET_SLEEPEXIT_Pos (6UL)
#define POWER_INTENSET_SLEEPEXIT_Msk (0x1UL << POWER_INTENSET_SLEEPEXIT_Pos)
#define POWER_INTENSET_SLEEPEXIT_Disabled (0x0UL)
#define POWER_INTENSET_SLEEPEXIT_Enabled (0x1UL)
#define POWER_INTENSET_SLEEPEXIT_Set (0x1UL)

/* Bit 5 : Write '1' to enable interrupt for event SLEEPENTER */
#define POWER_INTENSET_SLEEPENTER_Pos (5UL)
#define POWER_INTENSET_SLEEPENTER_Msk (0x1UL << POWER_INTENSET_SLEEPENTER_Pos)
#define POWER_INTENSET_SLEEPENTER_Disabled (0x0UL)
#define POWER_INTENSET_SLEEPENTER_Enabled (0x1UL)
#define POWER_INTENSET_SLEEPENTER_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event POFWARN */
#define POWER_INTENSET_POFWARN_Pos (2UL)
#define POWER_INTENSET_POFWARN_Msk (0x1UL << POWER_INTENSET_POFWARN_Pos)
#define POWER_INTENSET_POFWARN_Disabled (0x0UL)
#define POWER_INTENSET_POFWARN_Enabled (0x1UL)
#define POWER_INTENSET_POFWARN_Set (0x1UL)

/* Register: POWER_INTENCLR */
/* Description: Disable interrupt */

/* Bit 6 : Write '1' to disable interrupt for event SLEEPEXIT */
#define POWER_INTENCLR_SLEEPEXIT_Pos (6UL)
#define POWER_INTENCLR_SLEEPEXIT_Msk (0x1UL << POWER_INTENCLR_SLEEPEXIT_Pos)
#define POWER_INTENCLR_SLEEPEXIT_Disabled (0x0UL)
#define POWER_INTENCLR_SLEEPEXIT_Enabled (0x1UL)
#define POWER_INTENCLR_SLEEPEXIT_Clear (0x1UL)

/* Bit 5 : Write '1' to disable interrupt for event SLEEPENTER */
#define POWER_INTENCLR_SLEEPENTER_Pos (5UL)
#define POWER_INTENCLR_SLEEPENTER_Msk (0x1UL << POWER_INTENCLR_SLEEPENTER_Pos)
#define POWER_INTENCLR_SLEEPENTER_Disabled (0x0UL)
#define POWER_INTENCLR_SLEEPENTER_Enabled (0x1UL)
#define POWER_INTENCLR_SLEEPENTER_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event POFWARN */
#define POWER_INTENCLR_POFWARN_Pos (2UL)
#define POWER_INTENCLR_POFWARN_Msk (0x1UL << POWER_INTENCLR_POFWARN_Pos)
#define POWER_INTENCLR_POFWARN_Disabled (0x0UL)
#define POWER_INTENCLR_POFWARN_Enabled (0x1UL)
#define POWER_INTENCLR_POFWARN_Clear (0x1UL)

/* Register: POWER_GPREGRET */
/* Description: Description collection: General purpose retention register */

/* Bits 7..0 : General purpose retention register */
#define POWER_GPREGRET_GPREGRET_Pos (0UL)
#define POWER_GPREGRET_GPREGRET_Msk (0xFFUL << POWER_GPREGRET_GPREGRET_Pos)


/* Peripheral: RADIO */
/* Description: 2.4 GHz radio */

/* Register: RADIO_TASKS_TXEN */
/* Description: Enable RADIO in TX mode */

/* Bit 0 : Enable RADIO in TX mode */
#define RADIO_TASKS_TXEN_TASKS_TXEN_Pos (0UL)
#define RADIO_TASKS_TXEN_TASKS_TXEN_Msk (0x1UL << RADIO_TASKS_TXEN_TASKS_TXEN_Pos)
#define RADIO_TASKS_TXEN_TASKS_TXEN_Trigger (0x1UL)

/* Register: RADIO_TASKS_RXEN */
/* Description: Enable RADIO in RX mode */

/* Bit 0 : Enable RADIO in RX mode */
#define RADIO_TASKS_RXEN_TASKS_RXEN_Pos (0UL)
#define RADIO_TASKS_RXEN_TASKS_RXEN_Msk (0x1UL << RADIO_TASKS_RXEN_TASKS_RXEN_Pos)
#define RADIO_TASKS_RXEN_TASKS_RXEN_Trigger (0x1UL)

/* Register: RADIO_TASKS_START */
/* Description: Start RADIO */

/* Bit 0 : Start RADIO */
#define RADIO_TASKS_START_TASKS_START_Pos (0UL)
#define RADIO_TASKS_START_TASKS_START_Msk (0x1UL << RADIO_TASKS_START_TASKS_START_Pos)
#define RADIO_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: RADIO_TASKS_STOP */
/* Description: Stop RADIO */

/* Bit 0 : Stop RADIO */
#define RADIO_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define RADIO_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RADIO_TASKS_STOP_TASKS_STOP_Pos)
#define RADIO_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: RADIO_TASKS_DISABLE */
/* Description: Disable RADIO */

/* Bit 0 : Disable RADIO */
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos (0UL)
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Msk (0x1UL << RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos)
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Trigger (0x1UL)

/* Register: RADIO_TASKS_RSSISTART */
/* Description: Start the RSSI and take one single sample of the receive signal strength */

/* Bit 0 : Start the RSSI and take one single sample of the receive signal strength */
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos (0UL)
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Msk (0x1UL << RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos)
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Trigger (0x1UL)

/* Register: RADIO_TASKS_RSSISTOP */
/* Description: Stop the RSSI measurement */

/* Bit 0 : Stop the RSSI measurement */
#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Pos (0UL)
#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Msk (0x1UL << RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Pos)
#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Trigger (0x1UL)

/* Register: RADIO_TASKS_BCSTART */
/* Description: Start the bit counter */

/* Bit 0 : Start the bit counter */
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos (0UL)
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Msk (0x1UL << RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos)
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Trigger (0x1UL)

/* Register: RADIO_TASKS_BCSTOP */
/* Description: Stop the bit counter */

/* Bit 0 : Stop the bit counter */
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos (0UL)
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Msk (0x1UL << RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos)
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Trigger (0x1UL)

/* Register: RADIO_TASKS_EDSTART */
/* Description: Start the energy detect measurement used in IEEE 802.15.4 mode */

/* Bit 0 : Start the energy detect measurement used in IEEE 802.15.4 mode */
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Pos (0UL)
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Msk (0x1UL << RADIO_TASKS_EDSTART_TASKS_EDSTART_Pos)
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Trigger (0x1UL)

/* Register: RADIO_TASKS_EDSTOP */
/* Description: Stop the energy detect measurement */

/* Bit 0 : Stop the energy detect measurement */
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Pos (0UL)
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Msk (0x1UL << RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Pos)
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Trigger (0x1UL)

/* Register: RADIO_TASKS_CCASTART */
/* Description: Start the clear channel assessment used in IEEE 802.15.4 mode */

/* Bit 0 : Start the clear channel assessment used in IEEE 802.15.4 mode */
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Pos (0UL)
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Msk (0x1UL << RADIO_TASKS_CCASTART_TASKS_CCASTART_Pos)
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Trigger (0x1UL)

/* Register: RADIO_TASKS_CCASTOP */
/* Description: Stop the clear channel assessment */

/* Bit 0 : Stop the clear channel assessment */
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Pos (0UL)
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Msk (0x1UL << RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Pos)
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Trigger (0x1UL)

/* Register: RADIO_SUBSCRIBE_TXEN */
/* Description: Subscribe configuration for task TXEN */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_TXEN_EN_Pos (31UL)
#define RADIO_SUBSCRIBE_TXEN_EN_Msk (0x1UL << RADIO_SUBSCRIBE_TXEN_EN_Pos)
#define RADIO_SUBSCRIBE_TXEN_EN_Disabled (0x0UL)
#define RADIO_SUBSCRIBE_TXEN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task TXEN will subscribe to */
#define RADIO_SUBSCRIBE_TXEN_CHIDX_Pos (0UL)
#define RADIO_SUBSCRIBE_TXEN_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_TXEN_CHIDX_Pos)

/* Register: RADIO_SUBSCRIBE_RXEN */
/* Description: Subscribe configuration for task RXEN */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RXEN_EN_Pos (31UL)
#define RADIO_SUBSCRIBE_RXEN_EN_Msk (0x1UL << RADIO_SUBSCRIBE_RXEN_EN_Pos)
#define RADIO_SUBSCRIBE_RXEN_EN_Disabled (0x0UL)
#define RADIO_SUBSCRIBE_RXEN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task RXEN will subscribe to */
#define RADIO_SUBSCRIBE_RXEN_CHIDX_Pos (0UL)
#define RADIO_SUBSCRIBE_RXEN_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_RXEN_CHIDX_Pos)

/* Register: RADIO_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_START_EN_Pos (31UL)
#define RADIO_SUBSCRIBE_START_EN_Msk (0x1UL << RADIO_SUBSCRIBE_START_EN_Pos)
#define RADIO_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define RADIO_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define RADIO_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define RADIO_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_START_CHIDX_Pos)

/* Register: RADIO_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_STOP_EN_Pos (31UL)
#define RADIO_SUBSCRIBE_STOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_STOP_EN_Pos)
#define RADIO_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define RADIO_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define RADIO_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define RADIO_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: RADIO_SUBSCRIBE_DISABLE */
/* Description: Subscribe configuration for task DISABLE */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DISABLE_EN_Pos (31UL)
#define RADIO_SUBSCRIBE_DISABLE_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DISABLE_EN_Pos)
#define RADIO_SUBSCRIBE_DISABLE_EN_Disabled (0x0UL)
#define RADIO_SUBSCRIBE_DISABLE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task DISABLE will subscribe to */
#define RADIO_SUBSCRIBE_DISABLE_CHIDX_Pos (0UL)
#define RADIO_SUBSCRIBE_DISABLE_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DISABLE_CHIDX_Pos)

/* Register: RADIO_SUBSCRIBE_RSSISTART */
/* Description: Subscribe configuration for task RSSISTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RSSISTART_EN_Pos (31UL)
#define RADIO_SUBSCRIBE_RSSISTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_RSSISTART_EN_Pos)
#define RADIO_SUBSCRIBE_RSSISTART_EN_Disabled (0x0UL)
#define RADIO_SUBSCRIBE_RSSISTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task RSSISTART will subscribe to */
#define RADIO_SUBSCRIBE_RSSISTART_CHIDX_Pos (0UL)
#define RADIO_SUBSCRIBE_RSSISTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_RSSISTART_CHIDX_Pos)

/* Register: RADIO_SUBSCRIBE_RSSISTOP */
/* Description: Subscribe configuration for task RSSISTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RSSISTOP_EN_Pos (31UL)
#define RADIO_SUBSCRIBE_RSSISTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_RSSISTOP_EN_Pos)
#define RADIO_SUBSCRIBE_RSSISTOP_EN_Disabled (0x0UL)
#define RADIO_SUBSCRIBE_RSSISTOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task RSSISTOP will subscribe to */
#define RADIO_SUBSCRIBE_RSSISTOP_CHIDX_Pos (0UL)
#define RADIO_SUBSCRIBE_RSSISTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_RSSISTOP_CHIDX_Pos)

/* Register: RADIO_SUBSCRIBE_BCSTART */
/* Description: Subscribe configuration for task BCSTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_BCSTART_EN_Pos (31UL)
#define RADIO_SUBSCRIBE_BCSTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_BCSTART_EN_Pos)
#define RADIO_SUBSCRIBE_BCSTART_EN_Disabled (0x0UL)
#define RADIO_SUBSCRIBE_BCSTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task BCSTART will subscribe to */
#define RADIO_SUBSCRIBE_BCSTART_CHIDX_Pos (0UL)
#define RADIO_SUBSCRIBE_BCSTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_BCSTART_CHIDX_Pos)

/* Register: RADIO_SUBSCRIBE_BCSTOP */
/* Description: Subscribe configuration for task BCSTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_BCSTOP_EN_Pos (31UL)
#define RADIO_SUBSCRIBE_BCSTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_BCSTOP_EN_Pos)
#define RADIO_SUBSCRIBE_BCSTOP_EN_Disabled (0x0UL)
#define RADIO_SUBSCRIBE_BCSTOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task BCSTOP will subscribe to */
#define RADIO_SUBSCRIBE_BCSTOP_CHIDX_Pos (0UL)
#define RADIO_SUBSCRIBE_BCSTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_BCSTOP_CHIDX_Pos)

/* Register: RADIO_SUBSCRIBE_EDSTART */
/* Description: Subscribe configuration for task EDSTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_EDSTART_EN_Pos (31UL)
#define RADIO_SUBSCRIBE_EDSTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_EDSTART_EN_Pos)
#define RADIO_SUBSCRIBE_EDSTART_EN_Disabled (0x0UL)
#define RADIO_SUBSCRIBE_EDSTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task EDSTART will subscribe to */
#define RADIO_SUBSCRIBE_EDSTART_CHIDX_Pos (0UL)
#define RADIO_SUBSCRIBE_EDSTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_EDSTART_CHIDX_Pos)

/* Register: RADIO_SUBSCRIBE_EDSTOP */
/* Description: Subscribe configuration for task EDSTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_EDSTOP_EN_Pos (31UL)
#define RADIO_SUBSCRIBE_EDSTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_EDSTOP_EN_Pos)
#define RADIO_SUBSCRIBE_EDSTOP_EN_Disabled (0x0UL)
#define RADIO_SUBSCRIBE_EDSTOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task EDSTOP will subscribe to */
#define RADIO_SUBSCRIBE_EDSTOP_CHIDX_Pos (0UL)
#define RADIO_SUBSCRIBE_EDSTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_EDSTOP_CHIDX_Pos)

/* Register: RADIO_SUBSCRIBE_CCASTART */
/* Description: Subscribe configuration for task CCASTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CCASTART_EN_Pos (31UL)
#define RADIO_SUBSCRIBE_CCASTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CCASTART_EN_Pos)
#define RADIO_SUBSCRIBE_CCASTART_EN_Disabled (0x0UL)
#define RADIO_SUBSCRIBE_CCASTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task CCASTART will subscribe to */
#define RADIO_SUBSCRIBE_CCASTART_CHIDX_Pos (0UL)
#define RADIO_SUBSCRIBE_CCASTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CCASTART_CHIDX_Pos)

/* Register: RADIO_SUBSCRIBE_CCASTOP */
/* Description: Subscribe configuration for task CCASTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CCASTOP_EN_Pos (31UL)
#define RADIO_SUBSCRIBE_CCASTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CCASTOP_EN_Pos)
#define RADIO_SUBSCRIBE_CCASTOP_EN_Disabled (0x0UL)
#define RADIO_SUBSCRIBE_CCASTOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task CCASTOP will subscribe to */
#define RADIO_SUBSCRIBE_CCASTOP_CHIDX_Pos (0UL)
#define RADIO_SUBSCRIBE_CCASTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CCASTOP_CHIDX_Pos)

/* Register: RADIO_EVENTS_READY */
/* Description: RADIO has ramped up and is ready to be started */

/* Bit 0 : RADIO has ramped up and is ready to be started */
#define RADIO_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define RADIO_EVENTS_READY_EVENTS_READY_Msk (0x1UL << RADIO_EVENTS_READY_EVENTS_READY_Pos)
#define RADIO_EVENTS_READY_EVENTS_READY_NotGenerated (0x0UL)
#define RADIO_EVENTS_READY_EVENTS_READY_Generated (0x1UL)

/* Register: RADIO_EVENTS_ADDRESS */
/* Description: Address sent or received */

/* Bit 0 : Address sent or received */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos (0UL)
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Msk (0x1UL << RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos)
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_NotGenerated (0x0UL)
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Generated (0x1UL)

/* Register: RADIO_EVENTS_PAYLOAD */
/* Description: Packet payload sent or received */

/* Bit 0 : Packet payload sent or received */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos (0UL)
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Msk (0x1UL << RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos)
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_NotGenerated (0x0UL)
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Generated (0x1UL)

/* Register: RADIO_EVENTS_END */
/* Description: Packet sent or received */

/* Bit 0 : Packet sent or received */
#define RADIO_EVENTS_END_EVENTS_END_Pos (0UL)
#define RADIO_EVENTS_END_EVENTS_END_Msk (0x1UL << RADIO_EVENTS_END_EVENTS_END_Pos)
#define RADIO_EVENTS_END_EVENTS_END_NotGenerated (0x0UL)
#define RADIO_EVENTS_END_EVENTS_END_Generated (0x1UL)

/* Register: RADIO_EVENTS_DISABLED */
/* Description: RADIO has been disabled */

/* Bit 0 : RADIO has been disabled */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos (0UL)
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Msk (0x1UL << RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos)
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_NotGenerated (0x0UL)
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Generated (0x1UL)

/* Register: RADIO_EVENTS_DEVMATCH */
/* Description: A device address match occurred on the last received packet */

/* Bit 0 : A device address match occurred on the last received packet */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos (0UL)
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Msk (0x1UL << RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos)
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_NotGenerated (0x0UL)
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Generated (0x1UL)

/* Register: RADIO_EVENTS_DEVMISS */
/* Description: No device address match occurred on the last received packet */

/* Bit 0 : No device address match occurred on the last received packet */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos (0UL)
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Msk (0x1UL << RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos)
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_NotGenerated (0x0UL)
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Generated (0x1UL)

/* Register: RADIO_EVENTS_RSSIEND */
/* Description: Sampling of receive signal strength complete */

/* Bit 0 : Sampling of receive signal strength complete */
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Pos (0UL)
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Msk (0x1UL << RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Pos)
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_NotGenerated (0x0UL)
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Generated (0x1UL)

/* Register: RADIO_EVENTS_BCMATCH */
/* Description: Bit counter reached bit count value */

/* Bit 0 : Bit counter reached bit count value */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos (0UL)
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Msk (0x1UL << RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos)
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_NotGenerated (0x0UL)
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Generated (0x1UL)

/* Register: RADIO_EVENTS_CRCOK */
/* Description: Packet received with CRC ok */

/* Bit 0 : Packet received with CRC ok */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos (0UL)
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Msk (0x1UL << RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos)
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_NotGenerated (0x0UL)
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Generated (0x1UL)

/* Register: RADIO_EVENTS_CRCERROR */
/* Description: Packet received with CRC error */

/* Bit 0 : Packet received with CRC error */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos (0UL)
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Msk (0x1UL << RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos)
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_NotGenerated (0x0UL)
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Generated (0x1UL)

/* Register: RADIO_EVENTS_FRAMESTART */
/* Description: IEEE 802.15.4 length field received */

/* Bit 0 : IEEE 802.15.4 length field received */
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Pos (0UL)
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Msk (0x1UL << RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Pos)
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_NotGenerated (0x0UL)
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Generated (0x1UL)

/* Register: RADIO_EVENTS_EDEND */
/* Description: Sampling of energy detection complete. A new ED sample is ready for readout from the RADIO.EDSAMPLE register. */

/* Bit 0 : Sampling of energy detection complete. A new ED sample is ready for readout from the RADIO.EDSAMPLE register. */
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Pos (0UL)
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Msk (0x1UL << RADIO_EVENTS_EDEND_EVENTS_EDEND_Pos)
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_NotGenerated (0x0UL)
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Generated (0x1UL)

/* Register: RADIO_EVENTS_EDSTOPPED */
/* Description: The sampling of energy detection has stopped */

/* Bit 0 : The sampling of energy detection has stopped */
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Pos (0UL)
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Msk (0x1UL << RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Pos)
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_NotGenerated (0x0UL)
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Generated (0x1UL)

/* Register: RADIO_EVENTS_CCAIDLE */
/* Description: Wireless medium in idle - clear to send */

/* Bit 0 : Wireless medium in idle - clear to send */
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Pos (0UL)
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Msk (0x1UL << RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Pos)
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_NotGenerated (0x0UL)
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Generated (0x1UL)

/* Register: RADIO_EVENTS_CCABUSY */
/* Description: Wireless medium busy - do not send */

/* Bit 0 : Wireless medium busy - do not send */
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Pos (0UL)
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Msk (0x1UL << RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Pos)
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_NotGenerated (0x0UL)
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Generated (0x1UL)

/* Register: RADIO_EVENTS_CCASTOPPED */
/* Description: The CCA has stopped */

/* Bit 0 : The CCA has stopped */
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Pos (0UL)
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Msk (0x1UL << RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Pos)
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_NotGenerated (0x0UL)
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Generated (0x1UL)

/* Register: RADIO_EVENTS_RATEBOOST */
/* Description: Ble_LR CI field received, receive mode is changed from Ble_LR125Kbit to Ble_LR500Kbit. */

/* Bit 0 : Ble_LR CI field received, receive mode is changed from Ble_LR125Kbit to Ble_LR500Kbit. */
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Pos (0UL)
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Msk (0x1UL << RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Pos)
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_NotGenerated (0x0UL)
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Generated (0x1UL)

/* Register: RADIO_EVENTS_TXREADY */
/* Description: RADIO has ramped up and is ready to be started TX path */

/* Bit 0 : RADIO has ramped up and is ready to be started TX path */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Pos (0UL)
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Msk (0x1UL << RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Pos)
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_NotGenerated (0x0UL)
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Generated (0x1UL)

/* Register: RADIO_EVENTS_RXREADY */
/* Description: RADIO has ramped up and is ready to be started RX path */

/* Bit 0 : RADIO has ramped up and is ready to be started RX path */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Pos (0UL)
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Msk (0x1UL << RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Pos)
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_NotGenerated (0x0UL)
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Generated (0x1UL)

/* Register: RADIO_EVENTS_MHRMATCH */
/* Description: MAC header match found */

/* Bit 0 : MAC header match found */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Pos (0UL)
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Msk (0x1UL << RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Pos)
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_NotGenerated (0x0UL)
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Generated (0x1UL)

/* Register: RADIO_EVENTS_SYNC */
/* Description: Preamble indicator */

/* Bit 0 : Preamble indicator */
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Pos (0UL)
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Msk (0x1UL << RADIO_EVENTS_SYNC_EVENTS_SYNC_Pos)
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_NotGenerated (0x0UL)
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Generated (0x1UL)

/* Register: RADIO_EVENTS_PHYEND */
/* Description: Generated when last bit is sent on air, or received from air */

/* Bit 0 : Generated when last bit is sent on air, or received from air */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Pos (0UL)
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Msk (0x1UL << RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Pos)
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_NotGenerated (0x0UL)
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Generated (0x1UL)

/* Register: RADIO_EVENTS_CTEPRESENT */
/* Description: CTE is present (early warning right after receiving CTEInfo byte) */

/* Bit 0 : CTE is present (early warning right after receiving CTEInfo byte) */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Pos (0UL)
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Msk (0x1UL << RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Pos)
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_NotGenerated (0x0UL)
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Generated (0x1UL)

/* Register: RADIO_PUBLISH_READY */
/* Description: Publish configuration for event READY */

/* Bit 31 :   */
#define RADIO_PUBLISH_READY_EN_Pos (31UL)
#define RADIO_PUBLISH_READY_EN_Msk (0x1UL << RADIO_PUBLISH_READY_EN_Pos)
#define RADIO_PUBLISH_READY_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_READY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event READY will publish to */
#define RADIO_PUBLISH_READY_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_READY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_READY_CHIDX_Pos)

/* Register: RADIO_PUBLISH_ADDRESS */
/* Description: Publish configuration for event ADDRESS */

/* Bit 31 :   */
#define RADIO_PUBLISH_ADDRESS_EN_Pos (31UL)
#define RADIO_PUBLISH_ADDRESS_EN_Msk (0x1UL << RADIO_PUBLISH_ADDRESS_EN_Pos)
#define RADIO_PUBLISH_ADDRESS_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_ADDRESS_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ADDRESS will publish to */
#define RADIO_PUBLISH_ADDRESS_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_ADDRESS_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_ADDRESS_CHIDX_Pos)

/* Register: RADIO_PUBLISH_PAYLOAD */
/* Description: Publish configuration for event PAYLOAD */

/* Bit 31 :   */
#define RADIO_PUBLISH_PAYLOAD_EN_Pos (31UL)
#define RADIO_PUBLISH_PAYLOAD_EN_Msk (0x1UL << RADIO_PUBLISH_PAYLOAD_EN_Pos)
#define RADIO_PUBLISH_PAYLOAD_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_PAYLOAD_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event PAYLOAD will publish to */
#define RADIO_PUBLISH_PAYLOAD_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_PAYLOAD_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_PAYLOAD_CHIDX_Pos)

/* Register: RADIO_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define RADIO_PUBLISH_END_EN_Pos (31UL)
#define RADIO_PUBLISH_END_EN_Msk (0x1UL << RADIO_PUBLISH_END_EN_Pos)
#define RADIO_PUBLISH_END_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_END_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event END will publish to */
#define RADIO_PUBLISH_END_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_END_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_END_CHIDX_Pos)

/* Register: RADIO_PUBLISH_DISABLED */
/* Description: Publish configuration for event DISABLED */

/* Bit 31 :   */
#define RADIO_PUBLISH_DISABLED_EN_Pos (31UL)
#define RADIO_PUBLISH_DISABLED_EN_Msk (0x1UL << RADIO_PUBLISH_DISABLED_EN_Pos)
#define RADIO_PUBLISH_DISABLED_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_DISABLED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event DISABLED will publish to */
#define RADIO_PUBLISH_DISABLED_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_DISABLED_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DISABLED_CHIDX_Pos)

/* Register: RADIO_PUBLISH_DEVMATCH */
/* Description: Publish configuration for event DEVMATCH */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEVMATCH_EN_Pos (31UL)
#define RADIO_PUBLISH_DEVMATCH_EN_Msk (0x1UL << RADIO_PUBLISH_DEVMATCH_EN_Pos)
#define RADIO_PUBLISH_DEVMATCH_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_DEVMATCH_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event DEVMATCH will publish to */
#define RADIO_PUBLISH_DEVMATCH_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_DEVMATCH_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DEVMATCH_CHIDX_Pos)

/* Register: RADIO_PUBLISH_DEVMISS */
/* Description: Publish configuration for event DEVMISS */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEVMISS_EN_Pos (31UL)
#define RADIO_PUBLISH_DEVMISS_EN_Msk (0x1UL << RADIO_PUBLISH_DEVMISS_EN_Pos)
#define RADIO_PUBLISH_DEVMISS_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_DEVMISS_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event DEVMISS will publish to */
#define RADIO_PUBLISH_DEVMISS_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_DEVMISS_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DEVMISS_CHIDX_Pos)

/* Register: RADIO_PUBLISH_RSSIEND */
/* Description: Publish configuration for event RSSIEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_RSSIEND_EN_Pos (31UL)
#define RADIO_PUBLISH_RSSIEND_EN_Msk (0x1UL << RADIO_PUBLISH_RSSIEND_EN_Pos)
#define RADIO_PUBLISH_RSSIEND_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_RSSIEND_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RSSIEND will publish to */
#define RADIO_PUBLISH_RSSIEND_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_RSSIEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_RSSIEND_CHIDX_Pos)

/* Register: RADIO_PUBLISH_BCMATCH */
/* Description: Publish configuration for event BCMATCH */

/* Bit 31 :   */
#define RADIO_PUBLISH_BCMATCH_EN_Pos (31UL)
#define RADIO_PUBLISH_BCMATCH_EN_Msk (0x1UL << RADIO_PUBLISH_BCMATCH_EN_Pos)
#define RADIO_PUBLISH_BCMATCH_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_BCMATCH_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event BCMATCH will publish to */
#define RADIO_PUBLISH_BCMATCH_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_BCMATCH_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_BCMATCH_CHIDX_Pos)

/* Register: RADIO_PUBLISH_CRCOK */
/* Description: Publish configuration for event CRCOK */

/* Bit 31 :   */
#define RADIO_PUBLISH_CRCOK_EN_Pos (31UL)
#define RADIO_PUBLISH_CRCOK_EN_Msk (0x1UL << RADIO_PUBLISH_CRCOK_EN_Pos)
#define RADIO_PUBLISH_CRCOK_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_CRCOK_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event CRCOK will publish to */
#define RADIO_PUBLISH_CRCOK_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_CRCOK_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CRCOK_CHIDX_Pos)

/* Register: RADIO_PUBLISH_CRCERROR */
/* Description: Publish configuration for event CRCERROR */

/* Bit 31 :   */
#define RADIO_PUBLISH_CRCERROR_EN_Pos (31UL)
#define RADIO_PUBLISH_CRCERROR_EN_Msk (0x1UL << RADIO_PUBLISH_CRCERROR_EN_Pos)
#define RADIO_PUBLISH_CRCERROR_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_CRCERROR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event CRCERROR will publish to */
#define RADIO_PUBLISH_CRCERROR_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_CRCERROR_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CRCERROR_CHIDX_Pos)

/* Register: RADIO_PUBLISH_FRAMESTART */
/* Description: Publish configuration for event FRAMESTART */

/* Bit 31 :   */
#define RADIO_PUBLISH_FRAMESTART_EN_Pos (31UL)
#define RADIO_PUBLISH_FRAMESTART_EN_Msk (0x1UL << RADIO_PUBLISH_FRAMESTART_EN_Pos)
#define RADIO_PUBLISH_FRAMESTART_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_FRAMESTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event FRAMESTART will publish to */
#define RADIO_PUBLISH_FRAMESTART_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_FRAMESTART_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_FRAMESTART_CHIDX_Pos)

/* Register: RADIO_PUBLISH_EDEND */
/* Description: Publish configuration for event EDEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_EDEND_EN_Pos (31UL)
#define RADIO_PUBLISH_EDEND_EN_Msk (0x1UL << RADIO_PUBLISH_EDEND_EN_Pos)
#define RADIO_PUBLISH_EDEND_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_EDEND_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event EDEND will publish to */
#define RADIO_PUBLISH_EDEND_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_EDEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_EDEND_CHIDX_Pos)

/* Register: RADIO_PUBLISH_EDSTOPPED */
/* Description: Publish configuration for event EDSTOPPED */

/* Bit 31 :   */
#define RADIO_PUBLISH_EDSTOPPED_EN_Pos (31UL)
#define RADIO_PUBLISH_EDSTOPPED_EN_Msk (0x1UL << RADIO_PUBLISH_EDSTOPPED_EN_Pos)
#define RADIO_PUBLISH_EDSTOPPED_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_EDSTOPPED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event EDSTOPPED will publish to */
#define RADIO_PUBLISH_EDSTOPPED_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_EDSTOPPED_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_EDSTOPPED_CHIDX_Pos)

/* Register: RADIO_PUBLISH_CCAIDLE */
/* Description: Publish configuration for event CCAIDLE */

/* Bit 31 :   */
#define RADIO_PUBLISH_CCAIDLE_EN_Pos (31UL)
#define RADIO_PUBLISH_CCAIDLE_EN_Msk (0x1UL << RADIO_PUBLISH_CCAIDLE_EN_Pos)
#define RADIO_PUBLISH_CCAIDLE_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_CCAIDLE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event CCAIDLE will publish to */
#define RADIO_PUBLISH_CCAIDLE_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_CCAIDLE_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CCAIDLE_CHIDX_Pos)

/* Register: RADIO_PUBLISH_CCABUSY */
/* Description: Publish configuration for event CCABUSY */

/* Bit 31 :   */
#define RADIO_PUBLISH_CCABUSY_EN_Pos (31UL)
#define RADIO_PUBLISH_CCABUSY_EN_Msk (0x1UL << RADIO_PUBLISH_CCABUSY_EN_Pos)
#define RADIO_PUBLISH_CCABUSY_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_CCABUSY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event CCABUSY will publish to */
#define RADIO_PUBLISH_CCABUSY_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_CCABUSY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CCABUSY_CHIDX_Pos)

/* Register: RADIO_PUBLISH_CCASTOPPED */
/* Description: Publish configuration for event CCASTOPPED */

/* Bit 31 :   */
#define RADIO_PUBLISH_CCASTOPPED_EN_Pos (31UL)
#define RADIO_PUBLISH_CCASTOPPED_EN_Msk (0x1UL << RADIO_PUBLISH_CCASTOPPED_EN_Pos)
#define RADIO_PUBLISH_CCASTOPPED_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_CCASTOPPED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event CCASTOPPED will publish to */
#define RADIO_PUBLISH_CCASTOPPED_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_CCASTOPPED_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CCASTOPPED_CHIDX_Pos)

/* Register: RADIO_PUBLISH_RATEBOOST */
/* Description: Publish configuration for event RATEBOOST */

/* Bit 31 :   */
#define RADIO_PUBLISH_RATEBOOST_EN_Pos (31UL)
#define RADIO_PUBLISH_RATEBOOST_EN_Msk (0x1UL << RADIO_PUBLISH_RATEBOOST_EN_Pos)
#define RADIO_PUBLISH_RATEBOOST_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_RATEBOOST_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RATEBOOST will publish to */
#define RADIO_PUBLISH_RATEBOOST_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_RATEBOOST_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_RATEBOOST_CHIDX_Pos)

/* Register: RADIO_PUBLISH_TXREADY */
/* Description: Publish configuration for event TXREADY */

/* Bit 31 :   */
#define RADIO_PUBLISH_TXREADY_EN_Pos (31UL)
#define RADIO_PUBLISH_TXREADY_EN_Msk (0x1UL << RADIO_PUBLISH_TXREADY_EN_Pos)
#define RADIO_PUBLISH_TXREADY_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_TXREADY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event TXREADY will publish to */
#define RADIO_PUBLISH_TXREADY_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_TXREADY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_TXREADY_CHIDX_Pos)

/* Register: RADIO_PUBLISH_RXREADY */
/* Description: Publish configuration for event RXREADY */

/* Bit 31 :   */
#define RADIO_PUBLISH_RXREADY_EN_Pos (31UL)
#define RADIO_PUBLISH_RXREADY_EN_Msk (0x1UL << RADIO_PUBLISH_RXREADY_EN_Pos)
#define RADIO_PUBLISH_RXREADY_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_RXREADY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RXREADY will publish to */
#define RADIO_PUBLISH_RXREADY_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_RXREADY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_RXREADY_CHIDX_Pos)

/* Register: RADIO_PUBLISH_MHRMATCH */
/* Description: Publish configuration for event MHRMATCH */

/* Bit 31 :   */
#define RADIO_PUBLISH_MHRMATCH_EN_Pos (31UL)
#define RADIO_PUBLISH_MHRMATCH_EN_Msk (0x1UL << RADIO_PUBLISH_MHRMATCH_EN_Pos)
#define RADIO_PUBLISH_MHRMATCH_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_MHRMATCH_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event MHRMATCH will publish to */
#define RADIO_PUBLISH_MHRMATCH_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_MHRMATCH_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_MHRMATCH_CHIDX_Pos)

/* Register: RADIO_PUBLISH_SYNC */
/* Description: Publish configuration for event SYNC */

/* Bit 31 :   */
#define RADIO_PUBLISH_SYNC_EN_Pos (31UL)
#define RADIO_PUBLISH_SYNC_EN_Msk (0x1UL << RADIO_PUBLISH_SYNC_EN_Pos)
#define RADIO_PUBLISH_SYNC_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_SYNC_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event SYNC will publish to */
#define RADIO_PUBLISH_SYNC_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_SYNC_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_SYNC_CHIDX_Pos)

/* Register: RADIO_PUBLISH_PHYEND */
/* Description: Publish configuration for event PHYEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_PHYEND_EN_Pos (31UL)
#define RADIO_PUBLISH_PHYEND_EN_Msk (0x1UL << RADIO_PUBLISH_PHYEND_EN_Pos)
#define RADIO_PUBLISH_PHYEND_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_PHYEND_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event PHYEND will publish to */
#define RADIO_PUBLISH_PHYEND_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_PHYEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_PHYEND_CHIDX_Pos)

/* Register: RADIO_PUBLISH_CTEPRESENT */
/* Description: Publish configuration for event CTEPRESENT */

/* Bit 31 :   */
#define RADIO_PUBLISH_CTEPRESENT_EN_Pos (31UL)
#define RADIO_PUBLISH_CTEPRESENT_EN_Msk (0x1UL << RADIO_PUBLISH_CTEPRESENT_EN_Pos)
#define RADIO_PUBLISH_CTEPRESENT_EN_Disabled (0x0UL)
#define RADIO_PUBLISH_CTEPRESENT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event CTEPRESENT will publish to */
#define RADIO_PUBLISH_CTEPRESENT_CHIDX_Pos (0UL)
#define RADIO_PUBLISH_CTEPRESENT_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CTEPRESENT_CHIDX_Pos)

/* Register: RADIO_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 21 : Shortcut between event PHYEND and task START */
#define RADIO_SHORTS_PHYEND_START_Pos (21UL)
#define RADIO_SHORTS_PHYEND_START_Msk (0x1UL << RADIO_SHORTS_PHYEND_START_Pos)
#define RADIO_SHORTS_PHYEND_START_Disabled (0x0UL)
#define RADIO_SHORTS_PHYEND_START_Enabled (0x1UL)

/* Bit 20 : Shortcut between event PHYEND and task DISABLE */
#define RADIO_SHORTS_PHYEND_DISABLE_Pos (20UL)
#define RADIO_SHORTS_PHYEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_PHYEND_DISABLE_Pos)
#define RADIO_SHORTS_PHYEND_DISABLE_Disabled (0x0UL)
#define RADIO_SHORTS_PHYEND_DISABLE_Enabled (0x1UL)

/* Bit 19 : Shortcut between event RXREADY and task START */
#define RADIO_SHORTS_RXREADY_START_Pos (19UL)
#define RADIO_SHORTS_RXREADY_START_Msk (0x1UL << RADIO_SHORTS_RXREADY_START_Pos)
#define RADIO_SHORTS_RXREADY_START_Disabled (0x0UL)
#define RADIO_SHORTS_RXREADY_START_Enabled (0x1UL)

/* Bit 18 : Shortcut between event TXREADY and task START */
#define RADIO_SHORTS_TXREADY_START_Pos (18UL)
#define RADIO_SHORTS_TXREADY_START_Msk (0x1UL << RADIO_SHORTS_TXREADY_START_Pos)
#define RADIO_SHORTS_TXREADY_START_Disabled (0x0UL)
#define RADIO_SHORTS_TXREADY_START_Enabled (0x1UL)

/* Bit 17 : Shortcut between event CCAIDLE and task STOP */
#define RADIO_SHORTS_CCAIDLE_STOP_Pos (17UL)
#define RADIO_SHORTS_CCAIDLE_STOP_Msk (0x1UL << RADIO_SHORTS_CCAIDLE_STOP_Pos)
#define RADIO_SHORTS_CCAIDLE_STOP_Disabled (0x0UL)
#define RADIO_SHORTS_CCAIDLE_STOP_Enabled (0x1UL)

/* Bit 16 : Shortcut between event EDEND and task DISABLE */
#define RADIO_SHORTS_EDEND_DISABLE_Pos (16UL)
#define RADIO_SHORTS_EDEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_EDEND_DISABLE_Pos)
#define RADIO_SHORTS_EDEND_DISABLE_Disabled (0x0UL)
#define RADIO_SHORTS_EDEND_DISABLE_Enabled (0x1UL)

/* Bit 15 : Shortcut between event READY and task EDSTART */
#define RADIO_SHORTS_READY_EDSTART_Pos (15UL)
#define RADIO_SHORTS_READY_EDSTART_Msk (0x1UL << RADIO_SHORTS_READY_EDSTART_Pos)
#define RADIO_SHORTS_READY_EDSTART_Disabled (0x0UL)
#define RADIO_SHORTS_READY_EDSTART_Enabled (0x1UL)

/* Bit 14 : Shortcut between event FRAMESTART and task BCSTART */
#define RADIO_SHORTS_FRAMESTART_BCSTART_Pos (14UL)
#define RADIO_SHORTS_FRAMESTART_BCSTART_Msk (0x1UL << RADIO_SHORTS_FRAMESTART_BCSTART_Pos)
#define RADIO_SHORTS_FRAMESTART_BCSTART_Disabled (0x0UL)
#define RADIO_SHORTS_FRAMESTART_BCSTART_Enabled (0x1UL)

/* Bit 13 : Shortcut between event CCABUSY and task DISABLE */
#define RADIO_SHORTS_CCABUSY_DISABLE_Pos (13UL)
#define RADIO_SHORTS_CCABUSY_DISABLE_Msk (0x1UL << RADIO_SHORTS_CCABUSY_DISABLE_Pos)
#define RADIO_SHORTS_CCABUSY_DISABLE_Disabled (0x0UL)
#define RADIO_SHORTS_CCABUSY_DISABLE_Enabled (0x1UL)

/* Bit 12 : Shortcut between event CCAIDLE and task TXEN */
#define RADIO_SHORTS_CCAIDLE_TXEN_Pos (12UL)
#define RADIO_SHORTS_CCAIDLE_TXEN_Msk (0x1UL << RADIO_SHORTS_CCAIDLE_TXEN_Pos)
#define RADIO_SHORTS_CCAIDLE_TXEN_Disabled (0x0UL)
#define RADIO_SHORTS_CCAIDLE_TXEN_Enabled (0x1UL)

/* Bit 11 : Shortcut between event RXREADY and task CCASTART */
#define RADIO_SHORTS_RXREADY_CCASTART_Pos (11UL)
#define RADIO_SHORTS_RXREADY_CCASTART_Msk (0x1UL << RADIO_SHORTS_RXREADY_CCASTART_Pos)
#define RADIO_SHORTS_RXREADY_CCASTART_Disabled (0x0UL)
#define RADIO_SHORTS_RXREADY_CCASTART_Enabled (0x1UL)

/* Bit 8 : Shortcut between event DISABLED and task RSSISTOP */
#define RADIO_SHORTS_DISABLED_RSSISTOP_Pos (8UL)
#define RADIO_SHORTS_DISABLED_RSSISTOP_Msk (0x1UL << RADIO_SHORTS_DISABLED_RSSISTOP_Pos)
#define RADIO_SHORTS_DISABLED_RSSISTOP_Disabled (0x0UL)
#define RADIO_SHORTS_DISABLED_RSSISTOP_Enabled (0x1UL)

/* Bit 6 : Shortcut between event ADDRESS and task BCSTART */
#define RADIO_SHORTS_ADDRESS_BCSTART_Pos (6UL)
#define RADIO_SHORTS_ADDRESS_BCSTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_BCSTART_Pos)
#define RADIO_SHORTS_ADDRESS_BCSTART_Disabled (0x0UL)
#define RADIO_SHORTS_ADDRESS_BCSTART_Enabled (0x1UL)

/* Bit 5 : Shortcut between event END and task START */
#define RADIO_SHORTS_END_START_Pos (5UL)
#define RADIO_SHORTS_END_START_Msk (0x1UL << RADIO_SHORTS_END_START_Pos)
#define RADIO_SHORTS_END_START_Disabled (0x0UL)
#define RADIO_SHORTS_END_START_Enabled (0x1UL)

/* Bit 4 : Shortcut between event ADDRESS and task RSSISTART */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Pos (4UL)
#define RADIO_SHORTS_ADDRESS_RSSISTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_RSSISTART_Pos)
#define RADIO_SHORTS_ADDRESS_RSSISTART_Disabled (0x0UL)
#define RADIO_SHORTS_ADDRESS_RSSISTART_Enabled (0x1UL)

/* Bit 3 : Shortcut between event DISABLED and task RXEN */
#define RADIO_SHORTS_DISABLED_RXEN_Pos (3UL)
#define RADIO_SHORTS_DISABLED_RXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_RXEN_Pos)
#define RADIO_SHORTS_DISABLED_RXEN_Disabled (0x0UL)
#define RADIO_SHORTS_DISABLED_RXEN_Enabled (0x1UL)

/* Bit 2 : Shortcut between event DISABLED and task TXEN */
#define RADIO_SHORTS_DISABLED_TXEN_Pos (2UL)
#define RADIO_SHORTS_DISABLED_TXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_TXEN_Pos)
#define RADIO_SHORTS_DISABLED_TXEN_Disabled (0x0UL)
#define RADIO_SHORTS_DISABLED_TXEN_Enabled (0x1UL)

/* Bit 1 : Shortcut between event END and task DISABLE */
#define RADIO_SHORTS_END_DISABLE_Pos (1UL)
#define RADIO_SHORTS_END_DISABLE_Msk (0x1UL << RADIO_SHORTS_END_DISABLE_Pos)
#define RADIO_SHORTS_END_DISABLE_Disabled (0x0UL)
#define RADIO_SHORTS_END_DISABLE_Enabled (0x1UL)

/* Bit 0 : Shortcut between event READY and task START */
#define RADIO_SHORTS_READY_START_Pos (0UL)
#define RADIO_SHORTS_READY_START_Msk (0x1UL << RADIO_SHORTS_READY_START_Pos)
#define RADIO_SHORTS_READY_START_Disabled (0x0UL)
#define RADIO_SHORTS_READY_START_Enabled (0x1UL)

/* Register: RADIO_INTENSET */
/* Description: Enable interrupt */

/* Bit 28 : Write '1' to enable interrupt for event CTEPRESENT */
#define RADIO_INTENSET_CTEPRESENT_Pos (28UL)
#define RADIO_INTENSET_CTEPRESENT_Msk (0x1UL << RADIO_INTENSET_CTEPRESENT_Pos)
#define RADIO_INTENSET_CTEPRESENT_Disabled (0x0UL)
#define RADIO_INTENSET_CTEPRESENT_Enabled (0x1UL)
#define RADIO_INTENSET_CTEPRESENT_Set (0x1UL)

/* Bit 27 : Write '1' to enable interrupt for event PHYEND */
#define RADIO_INTENSET_PHYEND_Pos (27UL)
#define RADIO_INTENSET_PHYEND_Msk (0x1UL << RADIO_INTENSET_PHYEND_Pos)
#define RADIO_INTENSET_PHYEND_Disabled (0x0UL)
#define RADIO_INTENSET_PHYEND_Enabled (0x1UL)
#define RADIO_INTENSET_PHYEND_Set (0x1UL)

/* Bit 26 : Write '1' to enable interrupt for event SYNC */
#define RADIO_INTENSET_SYNC_Pos (26UL)
#define RADIO_INTENSET_SYNC_Msk (0x1UL << RADIO_INTENSET_SYNC_Pos)
#define RADIO_INTENSET_SYNC_Disabled (0x0UL)
#define RADIO_INTENSET_SYNC_Enabled (0x1UL)
#define RADIO_INTENSET_SYNC_Set (0x1UL)

/* Bit 23 : Write '1' to enable interrupt for event MHRMATCH */
#define RADIO_INTENSET_MHRMATCH_Pos (23UL)
#define RADIO_INTENSET_MHRMATCH_Msk (0x1UL << RADIO_INTENSET_MHRMATCH_Pos)
#define RADIO_INTENSET_MHRMATCH_Disabled (0x0UL)
#define RADIO_INTENSET_MHRMATCH_Enabled (0x1UL)
#define RADIO_INTENSET_MHRMATCH_Set (0x1UL)

/* Bit 22 : Write '1' to enable interrupt for event RXREADY */
#define RADIO_INTENSET_RXREADY_Pos (22UL)
#define RADIO_INTENSET_RXREADY_Msk (0x1UL << RADIO_INTENSET_RXREADY_Pos)
#define RADIO_INTENSET_RXREADY_Disabled (0x0UL)
#define RADIO_INTENSET_RXREADY_Enabled (0x1UL)
#define RADIO_INTENSET_RXREADY_Set (0x1UL)

/* Bit 21 : Write '1' to enable interrupt for event TXREADY */
#define RADIO_INTENSET_TXREADY_Pos (21UL)
#define RADIO_INTENSET_TXREADY_Msk (0x1UL << RADIO_INTENSET_TXREADY_Pos)
#define RADIO_INTENSET_TXREADY_Disabled (0x0UL)
#define RADIO_INTENSET_TXREADY_Enabled (0x1UL)
#define RADIO_INTENSET_TXREADY_Set (0x1UL)

/* Bit 20 : Write '1' to enable interrupt for event RATEBOOST */
#define RADIO_INTENSET_RATEBOOST_Pos (20UL)
#define RADIO_INTENSET_RATEBOOST_Msk (0x1UL << RADIO_INTENSET_RATEBOOST_Pos)
#define RADIO_INTENSET_RATEBOOST_Disabled (0x0UL)
#define RADIO_INTENSET_RATEBOOST_Enabled (0x1UL)
#define RADIO_INTENSET_RATEBOOST_Set (0x1UL)

/* Bit 19 : Write '1' to enable interrupt for event CCASTOPPED */
#define RADIO_INTENSET_CCASTOPPED_Pos (19UL)
#define RADIO_INTENSET_CCASTOPPED_Msk (0x1UL << RADIO_INTENSET_CCASTOPPED_Pos)
#define RADIO_INTENSET_CCASTOPPED_Disabled (0x0UL)
#define RADIO_INTENSET_CCASTOPPED_Enabled (0x1UL)
#define RADIO_INTENSET_CCASTOPPED_Set (0x1UL)

/* Bit 18 : Write '1' to enable interrupt for event CCABUSY */
#define RADIO_INTENSET_CCABUSY_Pos (18UL)
#define RADIO_INTENSET_CCABUSY_Msk (0x1UL << RADIO_INTENSET_CCABUSY_Pos)
#define RADIO_INTENSET_CCABUSY_Disabled (0x0UL)
#define RADIO_INTENSET_CCABUSY_Enabled (0x1UL)
#define RADIO_INTENSET_CCABUSY_Set (0x1UL)

/* Bit 17 : Write '1' to enable interrupt for event CCAIDLE */
#define RADIO_INTENSET_CCAIDLE_Pos (17UL)
#define RADIO_INTENSET_CCAIDLE_Msk (0x1UL << RADIO_INTENSET_CCAIDLE_Pos)
#define RADIO_INTENSET_CCAIDLE_Disabled (0x0UL)
#define RADIO_INTENSET_CCAIDLE_Enabled (0x1UL)
#define RADIO_INTENSET_CCAIDLE_Set (0x1UL)

/* Bit 16 : Write '1' to enable interrupt for event EDSTOPPED */
#define RADIO_INTENSET_EDSTOPPED_Pos (16UL)
#define RADIO_INTENSET_EDSTOPPED_Msk (0x1UL << RADIO_INTENSET_EDSTOPPED_Pos)
#define RADIO_INTENSET_EDSTOPPED_Disabled (0x0UL)
#define RADIO_INTENSET_EDSTOPPED_Enabled (0x1UL)
#define RADIO_INTENSET_EDSTOPPED_Set (0x1UL)

/* Bit 15 : Write '1' to enable interrupt for event EDEND */
#define RADIO_INTENSET_EDEND_Pos (15UL)
#define RADIO_INTENSET_EDEND_Msk (0x1UL << RADIO_INTENSET_EDEND_Pos)
#define RADIO_INTENSET_EDEND_Disabled (0x0UL)
#define RADIO_INTENSET_EDEND_Enabled (0x1UL)
#define RADIO_INTENSET_EDEND_Set (0x1UL)

/* Bit 14 : Write '1' to enable interrupt for event FRAMESTART */
#define RADIO_INTENSET_FRAMESTART_Pos (14UL)
#define RADIO_INTENSET_FRAMESTART_Msk (0x1UL << RADIO_INTENSET_FRAMESTART_Pos)
#define RADIO_INTENSET_FRAMESTART_Disabled (0x0UL)
#define RADIO_INTENSET_FRAMESTART_Enabled (0x1UL)
#define RADIO_INTENSET_FRAMESTART_Set (0x1UL)

/* Bit 13 : Write '1' to enable interrupt for event CRCERROR */
#define RADIO_INTENSET_CRCERROR_Pos (13UL)
#define RADIO_INTENSET_CRCERROR_Msk (0x1UL << RADIO_INTENSET_CRCERROR_Pos)
#define RADIO_INTENSET_CRCERROR_Disabled (0x0UL)
#define RADIO_INTENSET_CRCERROR_Enabled (0x1UL)
#define RADIO_INTENSET_CRCERROR_Set (0x1UL)

/* Bit 12 : Write '1' to enable interrupt for event CRCOK */
#define RADIO_INTENSET_CRCOK_Pos (12UL)
#define RADIO_INTENSET_CRCOK_Msk (0x1UL << RADIO_INTENSET_CRCOK_Pos)
#define RADIO_INTENSET_CRCOK_Disabled (0x0UL)
#define RADIO_INTENSET_CRCOK_Enabled (0x1UL)
#define RADIO_INTENSET_CRCOK_Set (0x1UL)

/* Bit 10 : Write '1' to enable interrupt for event BCMATCH */
#define RADIO_INTENSET_BCMATCH_Pos (10UL)
#define RADIO_INTENSET_BCMATCH_Msk (0x1UL << RADIO_INTENSET_BCMATCH_Pos)
#define RADIO_INTENSET_BCMATCH_Disabled (0x0UL)
#define RADIO_INTENSET_BCMATCH_Enabled (0x1UL)
#define RADIO_INTENSET_BCMATCH_Set (0x1UL)

/* Bit 7 : Write '1' to enable interrupt for event RSSIEND */
#define RADIO_INTENSET_RSSIEND_Pos (7UL)
#define RADIO_INTENSET_RSSIEND_Msk (0x1UL << RADIO_INTENSET_RSSIEND_Pos)
#define RADIO_INTENSET_RSSIEND_Disabled (0x0UL)
#define RADIO_INTENSET_RSSIEND_Enabled (0x1UL)
#define RADIO_INTENSET_RSSIEND_Set (0x1UL)

/* Bit 6 : Write '1' to enable interrupt for event DEVMISS */
#define RADIO_INTENSET_DEVMISS_Pos (6UL)
#define RADIO_INTENSET_DEVMISS_Msk (0x1UL << RADIO_INTENSET_DEVMISS_Pos)
#define RADIO_INTENSET_DEVMISS_Disabled (0x0UL)
#define RADIO_INTENSET_DEVMISS_Enabled (0x1UL)
#define RADIO_INTENSET_DEVMISS_Set (0x1UL)

/* Bit 5 : Write '1' to enable interrupt for event DEVMATCH */
#define RADIO_INTENSET_DEVMATCH_Pos (5UL)
#define RADIO_INTENSET_DEVMATCH_Msk (0x1UL << RADIO_INTENSET_DEVMATCH_Pos)
#define RADIO_INTENSET_DEVMATCH_Disabled (0x0UL)
#define RADIO_INTENSET_DEVMATCH_Enabled (0x1UL)
#define RADIO_INTENSET_DEVMATCH_Set (0x1UL)

/* Bit 4 : Write '1' to enable interrupt for event DISABLED */
#define RADIO_INTENSET_DISABLED_Pos (4UL)
#define RADIO_INTENSET_DISABLED_Msk (0x1UL << RADIO_INTENSET_DISABLED_Pos)
#define RADIO_INTENSET_DISABLED_Disabled (0x0UL)
#define RADIO_INTENSET_DISABLED_Enabled (0x1UL)
#define RADIO_INTENSET_DISABLED_Set (0x1UL)

/* Bit 3 : Write '1' to enable interrupt for event END */
#define RADIO_INTENSET_END_Pos (3UL)
#define RADIO_INTENSET_END_Msk (0x1UL << RADIO_INTENSET_END_Pos)
#define RADIO_INTENSET_END_Disabled (0x0UL)
#define RADIO_INTENSET_END_Enabled (0x1UL)
#define RADIO_INTENSET_END_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event PAYLOAD */
#define RADIO_INTENSET_PAYLOAD_Pos (2UL)
#define RADIO_INTENSET_PAYLOAD_Msk (0x1UL << RADIO_INTENSET_PAYLOAD_Pos)
#define RADIO_INTENSET_PAYLOAD_Disabled (0x0UL)
#define RADIO_INTENSET_PAYLOAD_Enabled (0x1UL)
#define RADIO_INTENSET_PAYLOAD_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event ADDRESS */
#define RADIO_INTENSET_ADDRESS_Pos (1UL)
#define RADIO_INTENSET_ADDRESS_Msk (0x1UL << RADIO_INTENSET_ADDRESS_Pos)
#define RADIO_INTENSET_ADDRESS_Disabled (0x0UL)
#define RADIO_INTENSET_ADDRESS_Enabled (0x1UL)
#define RADIO_INTENSET_ADDRESS_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define RADIO_INTENSET_READY_Pos (0UL)
#define RADIO_INTENSET_READY_Msk (0x1UL << RADIO_INTENSET_READY_Pos)
#define RADIO_INTENSET_READY_Disabled (0x0UL)
#define RADIO_INTENSET_READY_Enabled (0x1UL)
#define RADIO_INTENSET_READY_Set (0x1UL)

/* Register: RADIO_INTENCLR */
/* Description: Disable interrupt */

/* Bit 28 : Write '1' to disable interrupt for event CTEPRESENT */
#define RADIO_INTENCLR_CTEPRESENT_Pos (28UL)
#define RADIO_INTENCLR_CTEPRESENT_Msk (0x1UL << RADIO_INTENCLR_CTEPRESENT_Pos)
#define RADIO_INTENCLR_CTEPRESENT_Disabled (0x0UL)
#define RADIO_INTENCLR_CTEPRESENT_Enabled (0x1UL)
#define RADIO_INTENCLR_CTEPRESENT_Clear (0x1UL)

/* Bit 27 : Write '1' to disable interrupt for event PHYEND */
#define RADIO_INTENCLR_PHYEND_Pos (27UL)
#define RADIO_INTENCLR_PHYEND_Msk (0x1UL << RADIO_INTENCLR_PHYEND_Pos)
#define RADIO_INTENCLR_PHYEND_Disabled (0x0UL)
#define RADIO_INTENCLR_PHYEND_Enabled (0x1UL)
#define RADIO_INTENCLR_PHYEND_Clear (0x1UL)

/* Bit 26 : Write '1' to disable interrupt for event SYNC */
#define RADIO_INTENCLR_SYNC_Pos (26UL)
#define RADIO_INTENCLR_SYNC_Msk (0x1UL << RADIO_INTENCLR_SYNC_Pos)
#define RADIO_INTENCLR_SYNC_Disabled (0x0UL)
#define RADIO_INTENCLR_SYNC_Enabled (0x1UL)
#define RADIO_INTENCLR_SYNC_Clear (0x1UL)

/* Bit 23 : Write '1' to disable interrupt for event MHRMATCH */
#define RADIO_INTENCLR_MHRMATCH_Pos (23UL)
#define RADIO_INTENCLR_MHRMATCH_Msk (0x1UL << RADIO_INTENCLR_MHRMATCH_Pos)
#define RADIO_INTENCLR_MHRMATCH_Disabled (0x0UL)
#define RADIO_INTENCLR_MHRMATCH_Enabled (0x1UL)
#define RADIO_INTENCLR_MHRMATCH_Clear (0x1UL)

/* Bit 22 : Write '1' to disable interrupt for event RXREADY */
#define RADIO_INTENCLR_RXREADY_Pos (22UL)
#define RADIO_INTENCLR_RXREADY_Msk (0x1UL << RADIO_INTENCLR_RXREADY_Pos)
#define RADIO_INTENCLR_RXREADY_Disabled (0x0UL)
#define RADIO_INTENCLR_RXREADY_Enabled (0x1UL)
#define RADIO_INTENCLR_RXREADY_Clear (0x1UL)

/* Bit 21 : Write '1' to disable interrupt for event TXREADY */
#define RADIO_INTENCLR_TXREADY_Pos (21UL)
#define RADIO_INTENCLR_TXREADY_Msk (0x1UL << RADIO_INTENCLR_TXREADY_Pos)
#define RADIO_INTENCLR_TXREADY_Disabled (0x0UL)
#define RADIO_INTENCLR_TXREADY_Enabled (0x1UL)
#define RADIO_INTENCLR_TXREADY_Clear (0x1UL)

/* Bit 20 : Write '1' to disable interrupt for event RATEBOOST */
#define RADIO_INTENCLR_RATEBOOST_Pos (20UL)
#define RADIO_INTENCLR_RATEBOOST_Msk (0x1UL << RADIO_INTENCLR_RATEBOOST_Pos)
#define RADIO_INTENCLR_RATEBOOST_Disabled (0x0UL)
#define RADIO_INTENCLR_RATEBOOST_Enabled (0x1UL)
#define RADIO_INTENCLR_RATEBOOST_Clear (0x1UL)

/* Bit 19 : Write '1' to disable interrupt for event CCASTOPPED */
#define RADIO_INTENCLR_CCASTOPPED_Pos (19UL)
#define RADIO_INTENCLR_CCASTOPPED_Msk (0x1UL << RADIO_INTENCLR_CCASTOPPED_Pos)
#define RADIO_INTENCLR_CCASTOPPED_Disabled (0x0UL)
#define RADIO_INTENCLR_CCASTOPPED_Enabled (0x1UL)
#define RADIO_INTENCLR_CCASTOPPED_Clear (0x1UL)

/* Bit 18 : Write '1' to disable interrupt for event CCABUSY */
#define RADIO_INTENCLR_CCABUSY_Pos (18UL)
#define RADIO_INTENCLR_CCABUSY_Msk (0x1UL << RADIO_INTENCLR_CCABUSY_Pos)
#define RADIO_INTENCLR_CCABUSY_Disabled (0x0UL)
#define RADIO_INTENCLR_CCABUSY_Enabled (0x1UL)
#define RADIO_INTENCLR_CCABUSY_Clear (0x1UL)

/* Bit 17 : Write '1' to disable interrupt for event CCAIDLE */
#define RADIO_INTENCLR_CCAIDLE_Pos (17UL)
#define RADIO_INTENCLR_CCAIDLE_Msk (0x1UL << RADIO_INTENCLR_CCAIDLE_Pos)
#define RADIO_INTENCLR_CCAIDLE_Disabled (0x0UL)
#define RADIO_INTENCLR_CCAIDLE_Enabled (0x1UL)
#define RADIO_INTENCLR_CCAIDLE_Clear (0x1UL)

/* Bit 16 : Write '1' to disable interrupt for event EDSTOPPED */
#define RADIO_INTENCLR_EDSTOPPED_Pos (16UL)
#define RADIO_INTENCLR_EDSTOPPED_Msk (0x1UL << RADIO_INTENCLR_EDSTOPPED_Pos)
#define RADIO_INTENCLR_EDSTOPPED_Disabled (0x0UL)
#define RADIO_INTENCLR_EDSTOPPED_Enabled (0x1UL)
#define RADIO_INTENCLR_EDSTOPPED_Clear (0x1UL)

/* Bit 15 : Write '1' to disable interrupt for event EDEND */
#define RADIO_INTENCLR_EDEND_Pos (15UL)
#define RADIO_INTENCLR_EDEND_Msk (0x1UL << RADIO_INTENCLR_EDEND_Pos)
#define RADIO_INTENCLR_EDEND_Disabled (0x0UL)
#define RADIO_INTENCLR_EDEND_Enabled (0x1UL)
#define RADIO_INTENCLR_EDEND_Clear (0x1UL)

/* Bit 14 : Write '1' to disable interrupt for event FRAMESTART */
#define RADIO_INTENCLR_FRAMESTART_Pos (14UL)
#define RADIO_INTENCLR_FRAMESTART_Msk (0x1UL << RADIO_INTENCLR_FRAMESTART_Pos)
#define RADIO_INTENCLR_FRAMESTART_Disabled (0x0UL)
#define RADIO_INTENCLR_FRAMESTART_Enabled (0x1UL)
#define RADIO_INTENCLR_FRAMESTART_Clear (0x1UL)

/* Bit 13 : Write '1' to disable interrupt for event CRCERROR */
#define RADIO_INTENCLR_CRCERROR_Pos (13UL)
#define RADIO_INTENCLR_CRCERROR_Msk (0x1UL << RADIO_INTENCLR_CRCERROR_Pos)
#define RADIO_INTENCLR_CRCERROR_Disabled (0x0UL)
#define RADIO_INTENCLR_CRCERROR_Enabled (0x1UL)
#define RADIO_INTENCLR_CRCERROR_Clear (0x1UL)

/* Bit 12 : Write '1' to disable interrupt for event CRCOK */
#define RADIO_INTENCLR_CRCOK_Pos (12UL)
#define RADIO_INTENCLR_CRCOK_Msk (0x1UL << RADIO_INTENCLR_CRCOK_Pos)
#define RADIO_INTENCLR_CRCOK_Disabled (0x0UL)
#define RADIO_INTENCLR_CRCOK_Enabled (0x1UL)
#define RADIO_INTENCLR_CRCOK_Clear (0x1UL)

/* Bit 10 : Write '1' to disable interrupt for event BCMATCH */
#define RADIO_INTENCLR_BCMATCH_Pos (10UL)
#define RADIO_INTENCLR_BCMATCH_Msk (0x1UL << RADIO_INTENCLR_BCMATCH_Pos)
#define RADIO_INTENCLR_BCMATCH_Disabled (0x0UL)
#define RADIO_INTENCLR_BCMATCH_Enabled (0x1UL)
#define RADIO_INTENCLR_BCMATCH_Clear (0x1UL)

/* Bit 7 : Write '1' to disable interrupt for event RSSIEND */
#define RADIO_INTENCLR_RSSIEND_Pos (7UL)
#define RADIO_INTENCLR_RSSIEND_Msk (0x1UL << RADIO_INTENCLR_RSSIEND_Pos)
#define RADIO_INTENCLR_RSSIEND_Disabled (0x0UL)
#define RADIO_INTENCLR_RSSIEND_Enabled (0x1UL)
#define RADIO_INTENCLR_RSSIEND_Clear (0x1UL)

/* Bit 6 : Write '1' to disable interrupt for event DEVMISS */
#define RADIO_INTENCLR_DEVMISS_Pos (6UL)
#define RADIO_INTENCLR_DEVMISS_Msk (0x1UL << RADIO_INTENCLR_DEVMISS_Pos)
#define RADIO_INTENCLR_DEVMISS_Disabled (0x0UL)
#define RADIO_INTENCLR_DEVMISS_Enabled (0x1UL)
#define RADIO_INTENCLR_DEVMISS_Clear (0x1UL)

/* Bit 5 : Write '1' to disable interrupt for event DEVMATCH */
#define RADIO_INTENCLR_DEVMATCH_Pos (5UL)
#define RADIO_INTENCLR_DEVMATCH_Msk (0x1UL << RADIO_INTENCLR_DEVMATCH_Pos)
#define RADIO_INTENCLR_DEVMATCH_Disabled (0x0UL)
#define RADIO_INTENCLR_DEVMATCH_Enabled (0x1UL)
#define RADIO_INTENCLR_DEVMATCH_Clear (0x1UL)

/* Bit 4 : Write '1' to disable interrupt for event DISABLED */
#define RADIO_INTENCLR_DISABLED_Pos (4UL)
#define RADIO_INTENCLR_DISABLED_Msk (0x1UL << RADIO_INTENCLR_DISABLED_Pos)
#define RADIO_INTENCLR_DISABLED_Disabled (0x0UL)
#define RADIO_INTENCLR_DISABLED_Enabled (0x1UL)
#define RADIO_INTENCLR_DISABLED_Clear (0x1UL)

/* Bit 3 : Write '1' to disable interrupt for event END */
#define RADIO_INTENCLR_END_Pos (3UL)
#define RADIO_INTENCLR_END_Msk (0x1UL << RADIO_INTENCLR_END_Pos)
#define RADIO_INTENCLR_END_Disabled (0x0UL)
#define RADIO_INTENCLR_END_Enabled (0x1UL)
#define RADIO_INTENCLR_END_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event PAYLOAD */
#define RADIO_INTENCLR_PAYLOAD_Pos (2UL)
#define RADIO_INTENCLR_PAYLOAD_Msk (0x1UL << RADIO_INTENCLR_PAYLOAD_Pos)
#define RADIO_INTENCLR_PAYLOAD_Disabled (0x0UL)
#define RADIO_INTENCLR_PAYLOAD_Enabled (0x1UL)
#define RADIO_INTENCLR_PAYLOAD_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event ADDRESS */
#define RADIO_INTENCLR_ADDRESS_Pos (1UL)
#define RADIO_INTENCLR_ADDRESS_Msk (0x1UL << RADIO_INTENCLR_ADDRESS_Pos)
#define RADIO_INTENCLR_ADDRESS_Disabled (0x0UL)
#define RADIO_INTENCLR_ADDRESS_Enabled (0x1UL)
#define RADIO_INTENCLR_ADDRESS_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event READY */
#define RADIO_INTENCLR_READY_Pos (0UL)
#define RADIO_INTENCLR_READY_Msk (0x1UL << RADIO_INTENCLR_READY_Pos)
#define RADIO_INTENCLR_READY_Disabled (0x0UL)
#define RADIO_INTENCLR_READY_Enabled (0x1UL)
#define RADIO_INTENCLR_READY_Clear (0x1UL)

/* Register: RADIO_CRCSTATUS */
/* Description: CRC status */

/* Bit 0 : CRC status of packet received */
#define RADIO_CRCSTATUS_CRCSTATUS_Pos (0UL)
#define RADIO_CRCSTATUS_CRCSTATUS_Msk (0x1UL << RADIO_CRCSTATUS_CRCSTATUS_Pos)
#define RADIO_CRCSTATUS_CRCSTATUS_CRCError (0x0UL)
#define RADIO_CRCSTATUS_CRCSTATUS_CRCOk (0x1UL)

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
#define RADIO_PDUSTAT_CISTAT_LR125kbit (0x0UL)
#define RADIO_PDUSTAT_CISTAT_LR500kbit (0x1UL)

/* Bit 0 : Status on payload length vs. PCNF1.MAXLEN */
#define RADIO_PDUSTAT_PDUSTAT_Pos (0UL)
#define RADIO_PDUSTAT_PDUSTAT_Msk (0x1UL << RADIO_PDUSTAT_PDUSTAT_Pos)
#define RADIO_PDUSTAT_PDUSTAT_LessThan (0x0UL)
#define RADIO_PDUSTAT_PDUSTAT_GreaterThan (0x1UL)

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
#define RADIO_DFESTATUS_SAMPLINGSTATE_Idle (0x0UL)
#define RADIO_DFESTATUS_SAMPLINGSTATE_Sampling (0x1UL)

/* Bits 2..0 : Internal state of switching state machine */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Pos (0UL)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Msk (0x7UL << RADIO_DFESTATUS_SWITCHINGSTATE_Pos)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Idle (0x0UL)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Offset (0x1UL)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Guard (0x2UL)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Ref (0x3UL)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Switching (0x4UL)
#define RADIO_DFESTATUS_SWITCHINGSTATE_Ending (0x5UL)

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
#define RADIO_FREQUENCY_MAP_Default (0x0UL)
#define RADIO_FREQUENCY_MAP_Low (0x1UL)

/* Bits 6..0 : Radio channel frequency */
#define RADIO_FREQUENCY_FREQUENCY_Pos (0UL)
#define RADIO_FREQUENCY_FREQUENCY_Msk (0x7FUL << RADIO_FREQUENCY_FREQUENCY_Pos)

/* Register: RADIO_TXPOWER */
/* Description: Output power */

/* Bits 7..0 : RADIO output power */
#define RADIO_TXPOWER_TXPOWER_Pos (0UL)
#define RADIO_TXPOWER_TXPOWER_Msk (0xFFUL << RADIO_TXPOWER_TXPOWER_Pos)
#define RADIO_TXPOWER_TXPOWER_0dBm (0x00UL)
#define RADIO_TXPOWER_TXPOWER_Neg40dBm (0xD8UL)
#define RADIO_TXPOWER_TXPOWER_Neg30dBm (0xE2UL)
#define RADIO_TXPOWER_TXPOWER_Neg20dBm (0xECUL)
#define RADIO_TXPOWER_TXPOWER_Neg16dBm (0xF0UL)
#define RADIO_TXPOWER_TXPOWER_Neg12dBm (0xF4UL)
#define RADIO_TXPOWER_TXPOWER_Neg8dBm (0xF8UL)
#define RADIO_TXPOWER_TXPOWER_Neg7dBm (0xF9UL)
#define RADIO_TXPOWER_TXPOWER_Neg6dBm (0xFAUL)
#define RADIO_TXPOWER_TXPOWER_Neg5dBm (0xFBUL)
#define RADIO_TXPOWER_TXPOWER_Neg4dBm (0xFCUL)
#define RADIO_TXPOWER_TXPOWER_Neg3dBm (0xFDUL)
#define RADIO_TXPOWER_TXPOWER_Neg2dBm (0xFEUL)
#define RADIO_TXPOWER_TXPOWER_Neg1dBm (0xFFUL)

/* Register: RADIO_MODE */
/* Description: Data rate and modulation */

/* Bits 3..0 : Radio data rate and modulation setting. The radio supports frequency-shift keying (FSK) modulation. */
#define RADIO_MODE_MODE_Pos (0UL)
#define RADIO_MODE_MODE_Msk (0xFUL << RADIO_MODE_MODE_Pos)
#define RADIO_MODE_MODE_Nrf_1Mbit (0x0UL)
#define RADIO_MODE_MODE_Nrf_2Mbit (0x1UL)
#define RADIO_MODE_MODE_Ble_1Mbit (0x3UL)
#define RADIO_MODE_MODE_Ble_2Mbit (0x4UL)
#define RADIO_MODE_MODE_Ble_LR125Kbit (0x5UL)
#define RADIO_MODE_MODE_Ble_LR500Kbit (0x6UL)
#define RADIO_MODE_MODE_Ieee802154_250Kbit (0xFUL)

/* Register: RADIO_PCNF0 */
/* Description: Packet configuration register 0 */

/* Bits 30..29 : Length of TERM field in Long Range operation */
#define RADIO_PCNF0_TERMLEN_Pos (29UL)
#define RADIO_PCNF0_TERMLEN_Msk (0x3UL << RADIO_PCNF0_TERMLEN_Pos)

/* Bit 26 : Indicates if LENGTH field contains CRC or not */
#define RADIO_PCNF0_CRCINC_Pos (26UL)
#define RADIO_PCNF0_CRCINC_Msk (0x1UL << RADIO_PCNF0_CRCINC_Pos)
#define RADIO_PCNF0_CRCINC_Exclude (0x0UL)
#define RADIO_PCNF0_CRCINC_Include (0x1UL)

/* Bits 25..24 : Length of preamble on air. Decision point: TASKS_START task */
#define RADIO_PCNF0_PLEN_Pos (24UL)
#define RADIO_PCNF0_PLEN_Msk (0x3UL << RADIO_PCNF0_PLEN_Pos)
#define RADIO_PCNF0_PLEN_8bit (0x0UL)
#define RADIO_PCNF0_PLEN_16bit (0x1UL)
#define RADIO_PCNF0_PLEN_32bitZero (0x2UL)
#define RADIO_PCNF0_PLEN_LongRange (0x3UL)

/* Bits 23..22 : Length of code indicator - Long Range */
#define RADIO_PCNF0_CILEN_Pos (22UL)
#define RADIO_PCNF0_CILEN_Msk (0x3UL << RADIO_PCNF0_CILEN_Pos)

/* Bit 20 : Include or exclude S1 field in RAM */
#define RADIO_PCNF0_S1INCL_Pos (20UL)
#define RADIO_PCNF0_S1INCL_Msk (0x1UL << RADIO_PCNF0_S1INCL_Pos)
#define RADIO_PCNF0_S1INCL_Automatic (0x0UL)
#define RADIO_PCNF0_S1INCL_Include (0x1UL)

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
#define RADIO_PCNF1_WHITEEN_Disabled (0x0UL)
#define RADIO_PCNF1_WHITEEN_Enabled (0x1UL)

/* Bit 24 : On-air endianness of packet, this applies to the S0, LENGTH, S1, and the PAYLOAD fields. */
#define RADIO_PCNF1_ENDIAN_Pos (24UL)
#define RADIO_PCNF1_ENDIAN_Msk (0x1UL << RADIO_PCNF1_ENDIAN_Pos)
#define RADIO_PCNF1_ENDIAN_Little (0x0UL)
#define RADIO_PCNF1_ENDIAN_Big (0x1UL)

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
#define RADIO_RXADDRESSES_ADDR7_Disabled (0x0UL)
#define RADIO_RXADDRESSES_ADDR7_Enabled (0x1UL)

/* Bit 6 : Enable or disable reception on logical address 6. */
#define RADIO_RXADDRESSES_ADDR6_Pos (6UL)
#define RADIO_RXADDRESSES_ADDR6_Msk (0x1UL << RADIO_RXADDRESSES_ADDR6_Pos)
#define RADIO_RXADDRESSES_ADDR6_Disabled (0x0UL)
#define RADIO_RXADDRESSES_ADDR6_Enabled (0x1UL)

/* Bit 5 : Enable or disable reception on logical address 5. */
#define RADIO_RXADDRESSES_ADDR5_Pos (5UL)
#define RADIO_RXADDRESSES_ADDR5_Msk (0x1UL << RADIO_RXADDRESSES_ADDR5_Pos)
#define RADIO_RXADDRESSES_ADDR5_Disabled (0x0UL)
#define RADIO_RXADDRESSES_ADDR5_Enabled (0x1UL)

/* Bit 4 : Enable or disable reception on logical address 4. */
#define RADIO_RXADDRESSES_ADDR4_Pos (4UL)
#define RADIO_RXADDRESSES_ADDR4_Msk (0x1UL << RADIO_RXADDRESSES_ADDR4_Pos)
#define RADIO_RXADDRESSES_ADDR4_Disabled (0x0UL)
#define RADIO_RXADDRESSES_ADDR4_Enabled (0x1UL)

/* Bit 3 : Enable or disable reception on logical address 3. */
#define RADIO_RXADDRESSES_ADDR3_Pos (3UL)
#define RADIO_RXADDRESSES_ADDR3_Msk (0x1UL << RADIO_RXADDRESSES_ADDR3_Pos)
#define RADIO_RXADDRESSES_ADDR3_Disabled (0x0UL)
#define RADIO_RXADDRESSES_ADDR3_Enabled (0x1UL)

/* Bit 2 : Enable or disable reception on logical address 2. */
#define RADIO_RXADDRESSES_ADDR2_Pos (2UL)
#define RADIO_RXADDRESSES_ADDR2_Msk (0x1UL << RADIO_RXADDRESSES_ADDR2_Pos)
#define RADIO_RXADDRESSES_ADDR2_Disabled (0x0UL)
#define RADIO_RXADDRESSES_ADDR2_Enabled (0x1UL)

/* Bit 1 : Enable or disable reception on logical address 1. */
#define RADIO_RXADDRESSES_ADDR1_Pos (1UL)
#define RADIO_RXADDRESSES_ADDR1_Msk (0x1UL << RADIO_RXADDRESSES_ADDR1_Pos)
#define RADIO_RXADDRESSES_ADDR1_Disabled (0x0UL)
#define RADIO_RXADDRESSES_ADDR1_Enabled (0x1UL)

/* Bit 0 : Enable or disable reception on logical address 0. */
#define RADIO_RXADDRESSES_ADDR0_Pos (0UL)
#define RADIO_RXADDRESSES_ADDR0_Msk (0x1UL << RADIO_RXADDRESSES_ADDR0_Pos)
#define RADIO_RXADDRESSES_ADDR0_Disabled (0x0UL)
#define RADIO_RXADDRESSES_ADDR0_Enabled (0x1UL)

/* Register: RADIO_CRCCNF */
/* Description: CRC configuration */

/* Bits 9..8 : Include or exclude packet address field out of CRC calculation. */
#define RADIO_CRCCNF_SKIPADDR_Pos (8UL)
#define RADIO_CRCCNF_SKIPADDR_Msk (0x3UL << RADIO_CRCCNF_SKIPADDR_Pos)
#define RADIO_CRCCNF_SKIPADDR_Include (0x0UL)
#define RADIO_CRCCNF_SKIPADDR_Skip (0x1UL)
#define RADIO_CRCCNF_SKIPADDR_Ieee802154 (0x2UL)

/* Bits 1..0 : CRC length in number of bytes For MODE Ble_LR125Kbit and Ble_LR500Kbit, only LEN set to 3 is supported */
#define RADIO_CRCCNF_LEN_Pos (0UL)
#define RADIO_CRCCNF_LEN_Msk (0x3UL << RADIO_CRCCNF_LEN_Pos)
#define RADIO_CRCCNF_LEN_Disabled (0x0UL)
#define RADIO_CRCCNF_LEN_One (0x1UL)
#define RADIO_CRCCNF_LEN_Two (0x2UL)
#define RADIO_CRCCNF_LEN_Three (0x3UL)

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
#define RADIO_STATE_STATE_Disabled (0x0UL)
#define RADIO_STATE_STATE_RxRu (0x1UL)
#define RADIO_STATE_STATE_RxIdle (0x2UL)
#define RADIO_STATE_STATE_Rx (0x3UL)
#define RADIO_STATE_STATE_RxDisable (0x4UL)
#define RADIO_STATE_STATE_TxRu (0x9UL)
#define RADIO_STATE_STATE_TxIdle (0xAUL)
#define RADIO_STATE_STATE_Tx (0xBUL)
#define RADIO_STATE_STATE_TxDisable (0xCUL)

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
#define RADIO_DACNF_ENA7_Disabled (0x0UL)
#define RADIO_DACNF_ENA7_Enabled (0x1UL)

/* Bit 6 : Enable or disable device address matching using device address 6 */
#define RADIO_DACNF_ENA6_Pos (6UL)
#define RADIO_DACNF_ENA6_Msk (0x1UL << RADIO_DACNF_ENA6_Pos)
#define RADIO_DACNF_ENA6_Disabled (0x0UL)
#define RADIO_DACNF_ENA6_Enabled (0x1UL)

/* Bit 5 : Enable or disable device address matching using device address 5 */
#define RADIO_DACNF_ENA5_Pos (5UL)
#define RADIO_DACNF_ENA5_Msk (0x1UL << RADIO_DACNF_ENA5_Pos)
#define RADIO_DACNF_ENA5_Disabled (0x0UL)
#define RADIO_DACNF_ENA5_Enabled (0x1UL)

/* Bit 4 : Enable or disable device address matching using device address 4 */
#define RADIO_DACNF_ENA4_Pos (4UL)
#define RADIO_DACNF_ENA4_Msk (0x1UL << RADIO_DACNF_ENA4_Pos)
#define RADIO_DACNF_ENA4_Disabled (0x0UL)
#define RADIO_DACNF_ENA4_Enabled (0x1UL)

/* Bit 3 : Enable or disable device address matching using device address 3 */
#define RADIO_DACNF_ENA3_Pos (3UL)
#define RADIO_DACNF_ENA3_Msk (0x1UL << RADIO_DACNF_ENA3_Pos)
#define RADIO_DACNF_ENA3_Disabled (0x0UL)
#define RADIO_DACNF_ENA3_Enabled (0x1UL)

/* Bit 2 : Enable or disable device address matching using device address 2 */
#define RADIO_DACNF_ENA2_Pos (2UL)
#define RADIO_DACNF_ENA2_Msk (0x1UL << RADIO_DACNF_ENA2_Pos)
#define RADIO_DACNF_ENA2_Disabled (0x0UL)
#define RADIO_DACNF_ENA2_Enabled (0x1UL)

/* Bit 1 : Enable or disable device address matching using device address 1 */
#define RADIO_DACNF_ENA1_Pos (1UL)
#define RADIO_DACNF_ENA1_Msk (0x1UL << RADIO_DACNF_ENA1_Pos)
#define RADIO_DACNF_ENA1_Disabled (0x0UL)
#define RADIO_DACNF_ENA1_Enabled (0x1UL)

/* Bit 0 : Enable or disable device address matching using device address 0 */
#define RADIO_DACNF_ENA0_Pos (0UL)
#define RADIO_DACNF_ENA0_Msk (0x1UL << RADIO_DACNF_ENA0_Pos)
#define RADIO_DACNF_ENA0_Disabled (0x0UL)
#define RADIO_DACNF_ENA0_Enabled (0x1UL)

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
#define RADIO_MODECNF0_DTX_B1 (0x0UL)
#define RADIO_MODECNF0_DTX_B0 (0x1UL)
#define RADIO_MODECNF0_DTX_Center (0x2UL)

/* Bit 0 : Radio ramp-up time */
#define RADIO_MODECNF0_RU_Pos (0UL)
#define RADIO_MODECNF0_RU_Msk (0x1UL << RADIO_MODECNF0_RU_Pos)
#define RADIO_MODECNF0_RU_Default (0x0UL)
#define RADIO_MODECNF0_RU_Fast (0x1UL)

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
#define RADIO_CCACTRL_CCAMODE_EdMode (0x0UL)
#define RADIO_CCACTRL_CCAMODE_CarrierMode (0x1UL)
#define RADIO_CCACTRL_CCAMODE_CarrierAndEdMode (0x2UL)
#define RADIO_CCACTRL_CCAMODE_CarrierOrEdMode (0x3UL)
#define RADIO_CCACTRL_CCAMODE_EdModeTest1 (0x4UL)

/* Register: RADIO_DFEMODE */
/* Description: Whether to use Angle-of-Arrival (AOA) or Angle-of-Departure (AOD) */

/* Bits 1..0 : Direction finding operation mode */
#define RADIO_DFEMODE_DFEOPMODE_Pos (0UL)
#define RADIO_DFEMODE_DFEOPMODE_Msk (0x3UL << RADIO_DFEMODE_DFEOPMODE_Pos)
#define RADIO_DFEMODE_DFEOPMODE_Disabled (0x0UL)
#define RADIO_DFEMODE_DFEOPMODE_AoD (0x2UL)
#define RADIO_DFEMODE_DFEOPMODE_AoA (0x3UL)

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
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_4us (0x1UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_2us (0x2UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_1us (0x3UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_500ns (0x4UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_250ns (0x5UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_125ns (0x6UL)

/* Bits 12..10 : Spacing between samples for the samples in the SWITCHING period when CTEINLINEMODE is set. */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Pos (10UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Msk (0x7UL << RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Pos)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_4us (0x1UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_2us (0x2UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_1us (0x3UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_500ns (0x4UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_250ns (0x5UL)
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_125ns (0x6UL)

/* Bits 7..6 : Max range of CTETime */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Pos (6UL)
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Msk (0x3UL << RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Pos)
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_20 (0x0UL)
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_31 (0x1UL)
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_63 (0x2UL)

/* Bit 4 : Sampling/switching if CRC is not OK */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Pos (4UL)
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Msk (0x1UL << RADIO_CTEINLINECONF_CTEERRORHANDLING_Pos)
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_No (0x0UL)
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Yes (0x1UL)

/* Bit 3 : CTEInfo is S1 byte or not */
#define RADIO_CTEINLINECONF_CTEINFOINS1_Pos (3UL)
#define RADIO_CTEINLINECONF_CTEINFOINS1_Msk (0x1UL << RADIO_CTEINLINECONF_CTEINFOINS1_Pos)
#define RADIO_CTEINLINECONF_CTEINFOINS1_NotInS1 (0x0UL)
#define RADIO_CTEINLINECONF_CTEINFOINS1_InS1 (0x1UL)

/* Bit 0 : Enable parsing of CTEInfo from received packet in BLE modes */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Pos (0UL)
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Msk (0x1UL << RADIO_CTEINLINECONF_CTEINLINECTRLEN_Pos)
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Disabled (0x0UL)
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Enabled (0x1UL)

/* Register: RADIO_DFECTRL1 */
/* Description: Various configuration for Direction finding */

/* Bits 27..24 : Gain will be lowered by the specified number of gain steps at the start of CTE */
#define RADIO_DFECTRL1_AGCBACKOFFGAIN_Pos (24UL)
#define RADIO_DFECTRL1_AGCBACKOFFGAIN_Msk (0xFUL << RADIO_DFECTRL1_AGCBACKOFFGAIN_Pos)

/* Bits 23..20 : Repeat each individual antenna pattern N times sequentially, i.e. P0, P0, P1, P1, P2, P2, P3, P3, etc. */
#define RADIO_DFECTRL1_REPEATPATTERN_Pos (20UL)
#define RADIO_DFECTRL1_REPEATPATTERN_Msk (0xFUL << RADIO_DFECTRL1_REPEATPATTERN_Pos)
#define RADIO_DFECTRL1_REPEATPATTERN_NoRepeat (0x0UL)

/* Bits 18..16 : Interval between samples in the SWITCHING period when CTEINLINECTRLEN is 0 */
#define RADIO_DFECTRL1_TSAMPLESPACING_Pos (16UL)
#define RADIO_DFECTRL1_TSAMPLESPACING_Msk (0x7UL << RADIO_DFECTRL1_TSAMPLESPACING_Pos)
#define RADIO_DFECTRL1_TSAMPLESPACING_4us (0x1UL)
#define RADIO_DFECTRL1_TSAMPLESPACING_2us (0x2UL)
#define RADIO_DFECTRL1_TSAMPLESPACING_1us (0x3UL)
#define RADIO_DFECTRL1_TSAMPLESPACING_500ns (0x4UL)
#define RADIO_DFECTRL1_TSAMPLESPACING_250ns (0x5UL)
#define RADIO_DFECTRL1_TSAMPLESPACING_125ns (0x6UL)

/* Bit 15 : Whether to sample I/Q or magnitude/phase */
#define RADIO_DFECTRL1_SAMPLETYPE_Pos (15UL)
#define RADIO_DFECTRL1_SAMPLETYPE_Msk (0x1UL << RADIO_DFECTRL1_SAMPLETYPE_Pos)
#define RADIO_DFECTRL1_SAMPLETYPE_IQ (0x0UL)
#define RADIO_DFECTRL1_SAMPLETYPE_MagPhase (0x1UL)

/* Bits 14..12 : Interval between samples in the REFERENCE period */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_Pos (12UL)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_Msk (0x7UL << RADIO_DFECTRL1_TSAMPLESPACINGREF_Pos)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_4us (0x1UL)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_2us (0x2UL)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_1us (0x3UL)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_500ns (0x4UL)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_250ns (0x5UL)
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_125ns (0x6UL)

/* Bits 10..8 : Interval between every time the antenna is changed in the SWITCHING state */
#define RADIO_DFECTRL1_TSWITCHSPACING_Pos (8UL)
#define RADIO_DFECTRL1_TSWITCHSPACING_Msk (0x7UL << RADIO_DFECTRL1_TSWITCHSPACING_Pos)
#define RADIO_DFECTRL1_TSWITCHSPACING_4us (0x1UL)
#define RADIO_DFECTRL1_TSWITCHSPACING_2us (0x2UL)
#define RADIO_DFECTRL1_TSWITCHSPACING_1us (0x3UL)

/* Bit 7 : Add CTE extension and do antenna switching/sampling in this extension */
#define RADIO_DFECTRL1_DFEINEXTENSION_Pos (7UL)
#define RADIO_DFECTRL1_DFEINEXTENSION_Msk (0x1UL << RADIO_DFECTRL1_DFEINEXTENSION_Pos)
#define RADIO_DFECTRL1_DFEINEXTENSION_Payload (0x0UL)
#define RADIO_DFECTRL1_DFEINEXTENSION_CRC (0x1UL)

/* Bits 5..0 : Length of the AoA/AoD procedure in number of 8 us units */
#define RADIO_DFECTRL1_NUMBEROF8US_Pos (0UL)
#define RADIO_DFECTRL1_NUMBEROF8US_Msk (0x3FUL << RADIO_DFECTRL1_NUMBEROF8US_Pos)

/* Register: RADIO_DFECTRL2 */
/* Description: Start offset for Direction finding */

/* Bits 27..16 : Signed value offset in number of 16 MHz clock cycles for fine tuning of the sampling instant for all IQ samples. With TSAMPLEOFFSET=0 the first sample is taken immediately at the start of the reference period */
#define RADIO_DFECTRL2_TSAMPLEOFFSET_Pos (16UL)
#define RADIO_DFECTRL2_TSAMPLEOFFSET_Msk (0xFFFUL << RADIO_DFECTRL2_TSAMPLEOFFSET_Pos)

/* Bits 12..0 : Signed value offset after the end of the CRC before starting switching in number of 16 MHz clock cycles */
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
#define RADIO_CLEARPATTERN_CLEARPATTERN_Clear (0x1UL)

/* Register: RADIO_PSEL_DFEGPIO */
/* Description: Description collection: Pin select for DFE pin n */

/* Bit 31 : Connection */
#define RADIO_PSEL_DFEGPIO_CONNECT_Pos (31UL)
#define RADIO_PSEL_DFEGPIO_CONNECT_Msk (0x1UL << RADIO_PSEL_DFEGPIO_CONNECT_Pos)
#define RADIO_PSEL_DFEGPIO_CONNECT_Connected (0x0UL)
#define RADIO_PSEL_DFEGPIO_CONNECT_Disconnected (0x1UL)

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
#define RADIO_POWER_POWER_Disabled (0x0UL)
#define RADIO_POWER_POWER_Enabled (0x1UL)


/* Peripheral: RESET */
/* Description: Reset control */

/* Register: RESET_RESETREAS */
/* Description: Reset reason */

/* Bit 27 : Reset from network CTRL-AP detected */
#define RESET_RESETREAS_LCTRLAP_Pos (27UL)
#define RESET_RESETREAS_LCTRLAP_Msk (0x1UL << RESET_RESETREAS_LCTRLAP_Pos)
#define RESET_RESETREAS_LCTRLAP_NotDetected (0x0UL)
#define RESET_RESETREAS_LCTRLAP_Detected (0x1UL)

/* Bit 26 : Reset after wakeup from System OFF mode due to VBUS rising into valid range */
#define RESET_RESETREAS_VBUS_Pos (26UL)
#define RESET_RESETREAS_VBUS_Msk (0x1UL << RESET_RESETREAS_VBUS_Pos)
#define RESET_RESETREAS_VBUS_NotDetected (0x0UL)
#define RESET_RESETREAS_VBUS_Detected (0x1UL)

/* Bit 25 : Reset from application watchdog timer 1 detected */
#define RESET_RESETREAS_DOG1_Pos (25UL)
#define RESET_RESETREAS_DOG1_Msk (0x1UL << RESET_RESETREAS_DOG1_Pos)
#define RESET_RESETREAS_DOG1_NotDetected (0x0UL)
#define RESET_RESETREAS_DOG1_Detected (0x1UL)

/* Bit 24 : Reset after wakeup from System OFF mode due to NFC field being detected */
#define RESET_RESETREAS_NFC_Pos (24UL)
#define RESET_RESETREAS_NFC_Msk (0x1UL << RESET_RESETREAS_NFC_Pos)
#define RESET_RESETREAS_NFC_NotDetected (0x0UL)
#define RESET_RESETREAS_NFC_Detected (0x1UL)

/* Bit 23 : Force-OFF reset from application core detected */
#define RESET_RESETREAS_MFORCEOFF_Pos (23UL)
#define RESET_RESETREAS_MFORCEOFF_Msk (0x1UL << RESET_RESETREAS_MFORCEOFF_Pos)
#define RESET_RESETREAS_MFORCEOFF_NotDetected (0x0UL)
#define RESET_RESETREAS_MFORCEOFF_Detected (0x1UL)

/* Bit 18 : Reset from network watchdog timer detected */
#define RESET_RESETREAS_LDOG_Pos (18UL)
#define RESET_RESETREAS_LDOG_Msk (0x1UL << RESET_RESETREAS_LDOG_Pos)
#define RESET_RESETREAS_LDOG_NotDetected (0x0UL)
#define RESET_RESETREAS_LDOG_Detected (0x1UL)

/* Bit 17 : Reset from network CPU lockup detected */
#define RESET_RESETREAS_LLOCKUP_Pos (17UL)
#define RESET_RESETREAS_LLOCKUP_Msk (0x1UL << RESET_RESETREAS_LLOCKUP_Pos)
#define RESET_RESETREAS_LLOCKUP_NotDetected (0x0UL)
#define RESET_RESETREAS_LLOCKUP_Detected (0x1UL)

/* Bit 16 : Reset from network soft reset detected */
#define RESET_RESETREAS_LSREQ_Pos (16UL)
#define RESET_RESETREAS_LSREQ_Msk (0x1UL << RESET_RESETREAS_LSREQ_Pos)
#define RESET_RESETREAS_LSREQ_NotDetected (0x0UL)
#define RESET_RESETREAS_LSREQ_Detected (0x1UL)

/* Bit 7 : Reset due to wakeup from System OFF mode when wakeup is triggered by entering the Debug Interface mode */
#define RESET_RESETREAS_DIF_Pos (7UL)
#define RESET_RESETREAS_DIF_Msk (0x1UL << RESET_RESETREAS_DIF_Pos)
#define RESET_RESETREAS_DIF_NotDetected (0x0UL)
#define RESET_RESETREAS_DIF_Detected (0x1UL)

/* Bit 6 : Reset due to wakeup from System OFF mode when wakeup is triggered by ANADETECT signal from LPCOMP */
#define RESET_RESETREAS_LPCOMP_Pos (6UL)
#define RESET_RESETREAS_LPCOMP_Msk (0x1UL << RESET_RESETREAS_LPCOMP_Pos)
#define RESET_RESETREAS_LPCOMP_NotDetected (0x0UL)
#define RESET_RESETREAS_LPCOMP_Detected (0x1UL)

/* Bit 5 : Reset due to wakeup from System OFF mode when wakeup is triggered by DETECT signal from GPIO */
#define RESET_RESETREAS_OFF_Pos (5UL)
#define RESET_RESETREAS_OFF_Msk (0x1UL << RESET_RESETREAS_OFF_Pos)
#define RESET_RESETREAS_OFF_NotDetected (0x0UL)
#define RESET_RESETREAS_OFF_Detected (0x1UL)

/* Bit 4 : Reset from application CPU lockup detected */
#define RESET_RESETREAS_LOCKUP_Pos (4UL)
#define RESET_RESETREAS_LOCKUP_Msk (0x1UL << RESET_RESETREAS_LOCKUP_Pos)
#define RESET_RESETREAS_LOCKUP_NotDetected (0x0UL)
#define RESET_RESETREAS_LOCKUP_Detected (0x1UL)

/* Bit 3 : Reset from application soft reset detected */
#define RESET_RESETREAS_SREQ_Pos (3UL)
#define RESET_RESETREAS_SREQ_Msk (0x1UL << RESET_RESETREAS_SREQ_Pos)
#define RESET_RESETREAS_SREQ_NotDetected (0x0UL)
#define RESET_RESETREAS_SREQ_Detected (0x1UL)

/* Bit 2 : Reset from application CTRL-AP detected */
#define RESET_RESETREAS_CTRLAP_Pos (2UL)
#define RESET_RESETREAS_CTRLAP_Msk (0x1UL << RESET_RESETREAS_CTRLAP_Pos)
#define RESET_RESETREAS_CTRLAP_NotDetected (0x0UL)
#define RESET_RESETREAS_CTRLAP_Detected (0x1UL)

/* Bit 1 : Reset from application watchdog timer 0 detected */
#define RESET_RESETREAS_DOG0_Pos (1UL)
#define RESET_RESETREAS_DOG0_Msk (0x1UL << RESET_RESETREAS_DOG0_Pos)
#define RESET_RESETREAS_DOG0_NotDetected (0x0UL)
#define RESET_RESETREAS_DOG0_Detected (0x1UL)

/* Bit 0 : Reset from pin reset detected */
#define RESET_RESETREAS_RESETPIN_Pos (0UL)
#define RESET_RESETREAS_RESETPIN_Msk (0x1UL << RESET_RESETREAS_RESETPIN_Pos)
#define RESET_RESETREAS_RESETPIN_NotDetected (0x0UL)
#define RESET_RESETREAS_RESETPIN_Detected (0x1UL)


/* Peripheral: RNG */
/* Description: Random Number Generator */

/* Register: RNG_TASKS_START */
/* Description: Task starting the random number generator */

/* Bit 0 : Task starting the random number generator */
#define RNG_TASKS_START_TASKS_START_Pos (0UL)
#define RNG_TASKS_START_TASKS_START_Msk (0x1UL << RNG_TASKS_START_TASKS_START_Pos)
#define RNG_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: RNG_TASKS_STOP */
/* Description: Task stopping the random number generator */

/* Bit 0 : Task stopping the random number generator */
#define RNG_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define RNG_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RNG_TASKS_STOP_TASKS_STOP_Pos)
#define RNG_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: RNG_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define RNG_SUBSCRIBE_START_EN_Pos (31UL)
#define RNG_SUBSCRIBE_START_EN_Msk (0x1UL << RNG_SUBSCRIBE_START_EN_Pos)
#define RNG_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define RNG_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define RNG_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define RNG_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << RNG_SUBSCRIBE_START_CHIDX_Pos)

/* Register: RNG_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define RNG_SUBSCRIBE_STOP_EN_Pos (31UL)
#define RNG_SUBSCRIBE_STOP_EN_Msk (0x1UL << RNG_SUBSCRIBE_STOP_EN_Pos)
#define RNG_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define RNG_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define RNG_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define RNG_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << RNG_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: RNG_EVENTS_VALRDY */
/* Description: Event being generated for every new random number written to the VALUE register */

/* Bit 0 : Event being generated for every new random number written to the VALUE register */
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Pos (0UL)
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Msk (0x1UL << RNG_EVENTS_VALRDY_EVENTS_VALRDY_Pos)
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_NotGenerated (0x0UL)
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Generated (0x1UL)

/* Register: RNG_PUBLISH_VALRDY */
/* Description: Publish configuration for event VALRDY */

/* Bit 31 :   */
#define RNG_PUBLISH_VALRDY_EN_Pos (31UL)
#define RNG_PUBLISH_VALRDY_EN_Msk (0x1UL << RNG_PUBLISH_VALRDY_EN_Pos)
#define RNG_PUBLISH_VALRDY_EN_Disabled (0x0UL)
#define RNG_PUBLISH_VALRDY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event VALRDY will publish to */
#define RNG_PUBLISH_VALRDY_CHIDX_Pos (0UL)
#define RNG_PUBLISH_VALRDY_CHIDX_Msk (0xFFUL << RNG_PUBLISH_VALRDY_CHIDX_Pos)

/* Register: RNG_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 0 : Shortcut between event VALRDY and task STOP */
#define RNG_SHORTS_VALRDY_STOP_Pos (0UL)
#define RNG_SHORTS_VALRDY_STOP_Msk (0x1UL << RNG_SHORTS_VALRDY_STOP_Pos)
#define RNG_SHORTS_VALRDY_STOP_Disabled (0x0UL)
#define RNG_SHORTS_VALRDY_STOP_Enabled (0x1UL)

/* Register: RNG_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event VALRDY */
#define RNG_INTENSET_VALRDY_Pos (0UL)
#define RNG_INTENSET_VALRDY_Msk (0x1UL << RNG_INTENSET_VALRDY_Pos)
#define RNG_INTENSET_VALRDY_Disabled (0x0UL)
#define RNG_INTENSET_VALRDY_Enabled (0x1UL)
#define RNG_INTENSET_VALRDY_Set (0x1UL)

/* Register: RNG_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event VALRDY */
#define RNG_INTENCLR_VALRDY_Pos (0UL)
#define RNG_INTENCLR_VALRDY_Msk (0x1UL << RNG_INTENCLR_VALRDY_Pos)
#define RNG_INTENCLR_VALRDY_Disabled (0x0UL)
#define RNG_INTENCLR_VALRDY_Enabled (0x1UL)
#define RNG_INTENCLR_VALRDY_Clear (0x1UL)

/* Register: RNG_CONFIG */
/* Description: Configuration register */

/* Bit 0 : Bias correction */
#define RNG_CONFIG_DERCEN_Pos (0UL)
#define RNG_CONFIG_DERCEN_Msk (0x1UL << RNG_CONFIG_DERCEN_Pos)
#define RNG_CONFIG_DERCEN_Disabled (0x0UL)
#define RNG_CONFIG_DERCEN_Enabled (0x1UL)

/* Register: RNG_VALUE */
/* Description: Output random number */

/* Bits 7..0 : Generated random number */
#define RNG_VALUE_VALUE_Pos (0UL)
#define RNG_VALUE_VALUE_Msk (0xFFUL << RNG_VALUE_VALUE_Pos)


/* Peripheral: RTC */
/* Description: Real-time counter 0 */

/* Register: RTC_TASKS_START */
/* Description: Start RTC counter */

/* Bit 0 : Start RTC counter */
#define RTC_TASKS_START_TASKS_START_Pos (0UL)
#define RTC_TASKS_START_TASKS_START_Msk (0x1UL << RTC_TASKS_START_TASKS_START_Pos)
#define RTC_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: RTC_TASKS_STOP */
/* Description: Stop RTC counter */

/* Bit 0 : Stop RTC counter */
#define RTC_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define RTC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RTC_TASKS_STOP_TASKS_STOP_Pos)
#define RTC_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: RTC_TASKS_CLEAR */
/* Description: Clear RTC counter */

/* Bit 0 : Clear RTC counter */
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Pos (0UL)
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Msk (0x1UL << RTC_TASKS_CLEAR_TASKS_CLEAR_Pos)
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Trigger (0x1UL)

/* Register: RTC_TASKS_TRIGOVRFLW */
/* Description: Set counter to 0xFFFFF0 */

/* Bit 0 : Set counter to 0xFFFFF0 */
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Pos (0UL)
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Msk (0x1UL << RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Pos)
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Trigger (0x1UL)

/* Register: RTC_TASKS_CAPTURE */
/* Description: Description collection: Capture RTC counter to CC[n] register */

/* Bit 0 : Capture RTC counter to CC[n] register */
#define RTC_TASKS_CAPTURE_TASKS_CAPTURE_Pos (0UL)
#define RTC_TASKS_CAPTURE_TASKS_CAPTURE_Msk (0x1UL << RTC_TASKS_CAPTURE_TASKS_CAPTURE_Pos)
#define RTC_TASKS_CAPTURE_TASKS_CAPTURE_Trigger (0x1UL)

/* Register: RTC_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define RTC_SUBSCRIBE_START_EN_Pos (31UL)
#define RTC_SUBSCRIBE_START_EN_Msk (0x1UL << RTC_SUBSCRIBE_START_EN_Pos)
#define RTC_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define RTC_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define RTC_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define RTC_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << RTC_SUBSCRIBE_START_CHIDX_Pos)

/* Register: RTC_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define RTC_SUBSCRIBE_STOP_EN_Pos (31UL)
#define RTC_SUBSCRIBE_STOP_EN_Msk (0x1UL << RTC_SUBSCRIBE_STOP_EN_Pos)
#define RTC_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define RTC_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define RTC_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define RTC_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << RTC_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: RTC_SUBSCRIBE_CLEAR */
/* Description: Subscribe configuration for task CLEAR */

/* Bit 31 :   */
#define RTC_SUBSCRIBE_CLEAR_EN_Pos (31UL)
#define RTC_SUBSCRIBE_CLEAR_EN_Msk (0x1UL << RTC_SUBSCRIBE_CLEAR_EN_Pos)
#define RTC_SUBSCRIBE_CLEAR_EN_Disabled (0x0UL)
#define RTC_SUBSCRIBE_CLEAR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task CLEAR will subscribe to */
#define RTC_SUBSCRIBE_CLEAR_CHIDX_Pos (0UL)
#define RTC_SUBSCRIBE_CLEAR_CHIDX_Msk (0xFFUL << RTC_SUBSCRIBE_CLEAR_CHIDX_Pos)

/* Register: RTC_SUBSCRIBE_TRIGOVRFLW */
/* Description: Subscribe configuration for task TRIGOVRFLW */

/* Bit 31 :   */
#define RTC_SUBSCRIBE_TRIGOVRFLW_EN_Pos (31UL)
#define RTC_SUBSCRIBE_TRIGOVRFLW_EN_Msk (0x1UL << RTC_SUBSCRIBE_TRIGOVRFLW_EN_Pos)
#define RTC_SUBSCRIBE_TRIGOVRFLW_EN_Disabled (0x0UL)
#define RTC_SUBSCRIBE_TRIGOVRFLW_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task TRIGOVRFLW will subscribe to */
#define RTC_SUBSCRIBE_TRIGOVRFLW_CHIDX_Pos (0UL)
#define RTC_SUBSCRIBE_TRIGOVRFLW_CHIDX_Msk (0xFFUL << RTC_SUBSCRIBE_TRIGOVRFLW_CHIDX_Pos)

/* Register: RTC_SUBSCRIBE_CAPTURE */
/* Description: Description collection: Subscribe configuration for task CAPTURE[n] */

/* Bit 31 :   */
#define RTC_SUBSCRIBE_CAPTURE_EN_Pos (31UL)
#define RTC_SUBSCRIBE_CAPTURE_EN_Msk (0x1UL << RTC_SUBSCRIBE_CAPTURE_EN_Pos)
#define RTC_SUBSCRIBE_CAPTURE_EN_Disabled (0x0UL)
#define RTC_SUBSCRIBE_CAPTURE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task CAPTURE[n] will subscribe to */
#define RTC_SUBSCRIBE_CAPTURE_CHIDX_Pos (0UL)
#define RTC_SUBSCRIBE_CAPTURE_CHIDX_Msk (0xFFUL << RTC_SUBSCRIBE_CAPTURE_CHIDX_Pos)

/* Register: RTC_EVENTS_TICK */
/* Description: Event on counter increment */

/* Bit 0 : Event on counter increment */
#define RTC_EVENTS_TICK_EVENTS_TICK_Pos (0UL)
#define RTC_EVENTS_TICK_EVENTS_TICK_Msk (0x1UL << RTC_EVENTS_TICK_EVENTS_TICK_Pos)
#define RTC_EVENTS_TICK_EVENTS_TICK_NotGenerated (0x0UL)
#define RTC_EVENTS_TICK_EVENTS_TICK_Generated (0x1UL)

/* Register: RTC_EVENTS_OVRFLW */
/* Description: Event on counter overflow */

/* Bit 0 : Event on counter overflow */
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Pos (0UL)
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Msk (0x1UL << RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Pos)
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_NotGenerated (0x0UL)
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Generated (0x1UL)

/* Register: RTC_EVENTS_COMPARE */
/* Description: Description collection: Compare event on CC[n] match */

/* Bit 0 : Compare event on CC[n] match */
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Pos (0UL)
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Msk (0x1UL << RTC_EVENTS_COMPARE_EVENTS_COMPARE_Pos)
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_NotGenerated (0x0UL)
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Generated (0x1UL)

/* Register: RTC_PUBLISH_TICK */
/* Description: Publish configuration for event TICK */

/* Bit 31 :   */
#define RTC_PUBLISH_TICK_EN_Pos (31UL)
#define RTC_PUBLISH_TICK_EN_Msk (0x1UL << RTC_PUBLISH_TICK_EN_Pos)
#define RTC_PUBLISH_TICK_EN_Disabled (0x0UL)
#define RTC_PUBLISH_TICK_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event TICK will publish to */
#define RTC_PUBLISH_TICK_CHIDX_Pos (0UL)
#define RTC_PUBLISH_TICK_CHIDX_Msk (0xFFUL << RTC_PUBLISH_TICK_CHIDX_Pos)

/* Register: RTC_PUBLISH_OVRFLW */
/* Description: Publish configuration for event OVRFLW */

/* Bit 31 :   */
#define RTC_PUBLISH_OVRFLW_EN_Pos (31UL)
#define RTC_PUBLISH_OVRFLW_EN_Msk (0x1UL << RTC_PUBLISH_OVRFLW_EN_Pos)
#define RTC_PUBLISH_OVRFLW_EN_Disabled (0x0UL)
#define RTC_PUBLISH_OVRFLW_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event OVRFLW will publish to */
#define RTC_PUBLISH_OVRFLW_CHIDX_Pos (0UL)
#define RTC_PUBLISH_OVRFLW_CHIDX_Msk (0xFFUL << RTC_PUBLISH_OVRFLW_CHIDX_Pos)

/* Register: RTC_PUBLISH_COMPARE */
/* Description: Description collection: Publish configuration for event COMPARE[n] */

/* Bit 31 :   */
#define RTC_PUBLISH_COMPARE_EN_Pos (31UL)
#define RTC_PUBLISH_COMPARE_EN_Msk (0x1UL << RTC_PUBLISH_COMPARE_EN_Pos)
#define RTC_PUBLISH_COMPARE_EN_Disabled (0x0UL)
#define RTC_PUBLISH_COMPARE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event COMPARE[n] will publish to */
#define RTC_PUBLISH_COMPARE_CHIDX_Pos (0UL)
#define RTC_PUBLISH_COMPARE_CHIDX_Msk (0xFFUL << RTC_PUBLISH_COMPARE_CHIDX_Pos)

/* Register: RTC_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 3 : Shortcut between event COMPARE[3] and task CLEAR */
#define RTC_SHORTS_COMPARE3_CLEAR_Pos (3UL)
#define RTC_SHORTS_COMPARE3_CLEAR_Msk (0x1UL << RTC_SHORTS_COMPARE3_CLEAR_Pos)
#define RTC_SHORTS_COMPARE3_CLEAR_Disabled (0x0UL)
#define RTC_SHORTS_COMPARE3_CLEAR_Enabled (0x1UL)

/* Bit 2 : Shortcut between event COMPARE[2] and task CLEAR */
#define RTC_SHORTS_COMPARE2_CLEAR_Pos (2UL)
#define RTC_SHORTS_COMPARE2_CLEAR_Msk (0x1UL << RTC_SHORTS_COMPARE2_CLEAR_Pos)
#define RTC_SHORTS_COMPARE2_CLEAR_Disabled (0x0UL)
#define RTC_SHORTS_COMPARE2_CLEAR_Enabled (0x1UL)

/* Bit 1 : Shortcut between event COMPARE[1] and task CLEAR */
#define RTC_SHORTS_COMPARE1_CLEAR_Pos (1UL)
#define RTC_SHORTS_COMPARE1_CLEAR_Msk (0x1UL << RTC_SHORTS_COMPARE1_CLEAR_Pos)
#define RTC_SHORTS_COMPARE1_CLEAR_Disabled (0x0UL)
#define RTC_SHORTS_COMPARE1_CLEAR_Enabled (0x1UL)

/* Bit 0 : Shortcut between event COMPARE[0] and task CLEAR */
#define RTC_SHORTS_COMPARE0_CLEAR_Pos (0UL)
#define RTC_SHORTS_COMPARE0_CLEAR_Msk (0x1UL << RTC_SHORTS_COMPARE0_CLEAR_Pos)
#define RTC_SHORTS_COMPARE0_CLEAR_Disabled (0x0UL)
#define RTC_SHORTS_COMPARE0_CLEAR_Enabled (0x1UL)

/* Register: RTC_INTENSET */
/* Description: Enable interrupt */

/* Bit 19 : Write '1' to enable interrupt for event COMPARE[3] */
#define RTC_INTENSET_COMPARE3_Pos (19UL)
#define RTC_INTENSET_COMPARE3_Msk (0x1UL << RTC_INTENSET_COMPARE3_Pos)
#define RTC_INTENSET_COMPARE3_Disabled (0x0UL)
#define RTC_INTENSET_COMPARE3_Enabled (0x1UL)
#define RTC_INTENSET_COMPARE3_Set (0x1UL)

/* Bit 18 : Write '1' to enable interrupt for event COMPARE[2] */
#define RTC_INTENSET_COMPARE2_Pos (18UL)
#define RTC_INTENSET_COMPARE2_Msk (0x1UL << RTC_INTENSET_COMPARE2_Pos)
#define RTC_INTENSET_COMPARE2_Disabled (0x0UL)
#define RTC_INTENSET_COMPARE2_Enabled (0x1UL)
#define RTC_INTENSET_COMPARE2_Set (0x1UL)

/* Bit 17 : Write '1' to enable interrupt for event COMPARE[1] */
#define RTC_INTENSET_COMPARE1_Pos (17UL)
#define RTC_INTENSET_COMPARE1_Msk (0x1UL << RTC_INTENSET_COMPARE1_Pos)
#define RTC_INTENSET_COMPARE1_Disabled (0x0UL)
#define RTC_INTENSET_COMPARE1_Enabled (0x1UL)
#define RTC_INTENSET_COMPARE1_Set (0x1UL)

/* Bit 16 : Write '1' to enable interrupt for event COMPARE[0] */
#define RTC_INTENSET_COMPARE0_Pos (16UL)
#define RTC_INTENSET_COMPARE0_Msk (0x1UL << RTC_INTENSET_COMPARE0_Pos)
#define RTC_INTENSET_COMPARE0_Disabled (0x0UL)
#define RTC_INTENSET_COMPARE0_Enabled (0x1UL)
#define RTC_INTENSET_COMPARE0_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event OVRFLW */
#define RTC_INTENSET_OVRFLW_Pos (1UL)
#define RTC_INTENSET_OVRFLW_Msk (0x1UL << RTC_INTENSET_OVRFLW_Pos)
#define RTC_INTENSET_OVRFLW_Disabled (0x0UL)
#define RTC_INTENSET_OVRFLW_Enabled (0x1UL)
#define RTC_INTENSET_OVRFLW_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event TICK */
#define RTC_INTENSET_TICK_Pos (0UL)
#define RTC_INTENSET_TICK_Msk (0x1UL << RTC_INTENSET_TICK_Pos)
#define RTC_INTENSET_TICK_Disabled (0x0UL)
#define RTC_INTENSET_TICK_Enabled (0x1UL)
#define RTC_INTENSET_TICK_Set (0x1UL)

/* Register: RTC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 19 : Write '1' to disable interrupt for event COMPARE[3] */
#define RTC_INTENCLR_COMPARE3_Pos (19UL)
#define RTC_INTENCLR_COMPARE3_Msk (0x1UL << RTC_INTENCLR_COMPARE3_Pos)
#define RTC_INTENCLR_COMPARE3_Disabled (0x0UL)
#define RTC_INTENCLR_COMPARE3_Enabled (0x1UL)
#define RTC_INTENCLR_COMPARE3_Clear (0x1UL)

/* Bit 18 : Write '1' to disable interrupt for event COMPARE[2] */
#define RTC_INTENCLR_COMPARE2_Pos (18UL)
#define RTC_INTENCLR_COMPARE2_Msk (0x1UL << RTC_INTENCLR_COMPARE2_Pos)
#define RTC_INTENCLR_COMPARE2_Disabled (0x0UL)
#define RTC_INTENCLR_COMPARE2_Enabled (0x1UL)
#define RTC_INTENCLR_COMPARE2_Clear (0x1UL)

/* Bit 17 : Write '1' to disable interrupt for event COMPARE[1] */
#define RTC_INTENCLR_COMPARE1_Pos (17UL)
#define RTC_INTENCLR_COMPARE1_Msk (0x1UL << RTC_INTENCLR_COMPARE1_Pos)
#define RTC_INTENCLR_COMPARE1_Disabled (0x0UL)
#define RTC_INTENCLR_COMPARE1_Enabled (0x1UL)
#define RTC_INTENCLR_COMPARE1_Clear (0x1UL)

/* Bit 16 : Write '1' to disable interrupt for event COMPARE[0] */
#define RTC_INTENCLR_COMPARE0_Pos (16UL)
#define RTC_INTENCLR_COMPARE0_Msk (0x1UL << RTC_INTENCLR_COMPARE0_Pos)
#define RTC_INTENCLR_COMPARE0_Disabled (0x0UL)
#define RTC_INTENCLR_COMPARE0_Enabled (0x1UL)
#define RTC_INTENCLR_COMPARE0_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event OVRFLW */
#define RTC_INTENCLR_OVRFLW_Pos (1UL)
#define RTC_INTENCLR_OVRFLW_Msk (0x1UL << RTC_INTENCLR_OVRFLW_Pos)
#define RTC_INTENCLR_OVRFLW_Disabled (0x0UL)
#define RTC_INTENCLR_OVRFLW_Enabled (0x1UL)
#define RTC_INTENCLR_OVRFLW_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event TICK */
#define RTC_INTENCLR_TICK_Pos (0UL)
#define RTC_INTENCLR_TICK_Msk (0x1UL << RTC_INTENCLR_TICK_Pos)
#define RTC_INTENCLR_TICK_Disabled (0x0UL)
#define RTC_INTENCLR_TICK_Enabled (0x1UL)
#define RTC_INTENCLR_TICK_Clear (0x1UL)

/* Register: RTC_EVTEN */
/* Description: Enable or disable event routing */

/* Bit 19 : Enable or disable event routing for event COMPARE[3] */
#define RTC_EVTEN_COMPARE3_Pos (19UL)
#define RTC_EVTEN_COMPARE3_Msk (0x1UL << RTC_EVTEN_COMPARE3_Pos)
#define RTC_EVTEN_COMPARE3_Disabled (0x0UL)
#define RTC_EVTEN_COMPARE3_Enabled (0x1UL)

/* Bit 18 : Enable or disable event routing for event COMPARE[2] */
#define RTC_EVTEN_COMPARE2_Pos (18UL)
#define RTC_EVTEN_COMPARE2_Msk (0x1UL << RTC_EVTEN_COMPARE2_Pos)
#define RTC_EVTEN_COMPARE2_Disabled (0x0UL)
#define RTC_EVTEN_COMPARE2_Enabled (0x1UL)

/* Bit 17 : Enable or disable event routing for event COMPARE[1] */
#define RTC_EVTEN_COMPARE1_Pos (17UL)
#define RTC_EVTEN_COMPARE1_Msk (0x1UL << RTC_EVTEN_COMPARE1_Pos)
#define RTC_EVTEN_COMPARE1_Disabled (0x0UL)
#define RTC_EVTEN_COMPARE1_Enabled (0x1UL)

/* Bit 16 : Enable or disable event routing for event COMPARE[0] */
#define RTC_EVTEN_COMPARE0_Pos (16UL)
#define RTC_EVTEN_COMPARE0_Msk (0x1UL << RTC_EVTEN_COMPARE0_Pos)
#define RTC_EVTEN_COMPARE0_Disabled (0x0UL)
#define RTC_EVTEN_COMPARE0_Enabled (0x1UL)

/* Bit 1 : Enable or disable event routing for event OVRFLW */
#define RTC_EVTEN_OVRFLW_Pos (1UL)
#define RTC_EVTEN_OVRFLW_Msk (0x1UL << RTC_EVTEN_OVRFLW_Pos)
#define RTC_EVTEN_OVRFLW_Disabled (0x0UL)
#define RTC_EVTEN_OVRFLW_Enabled (0x1UL)

/* Bit 0 : Enable or disable event routing for event TICK */
#define RTC_EVTEN_TICK_Pos (0UL)
#define RTC_EVTEN_TICK_Msk (0x1UL << RTC_EVTEN_TICK_Pos)
#define RTC_EVTEN_TICK_Disabled (0x0UL)
#define RTC_EVTEN_TICK_Enabled (0x1UL)

/* Register: RTC_EVTENSET */
/* Description: Enable event routing */

/* Bit 19 : Write '1' to enable event routing for event COMPARE[3] */
#define RTC_EVTENSET_COMPARE3_Pos (19UL)
#define RTC_EVTENSET_COMPARE3_Msk (0x1UL << RTC_EVTENSET_COMPARE3_Pos)
#define RTC_EVTENSET_COMPARE3_Disabled (0x0UL)
#define RTC_EVTENSET_COMPARE3_Enabled (0x1UL)
#define RTC_EVTENSET_COMPARE3_Set (0x1UL)

/* Bit 18 : Write '1' to enable event routing for event COMPARE[2] */
#define RTC_EVTENSET_COMPARE2_Pos (18UL)
#define RTC_EVTENSET_COMPARE2_Msk (0x1UL << RTC_EVTENSET_COMPARE2_Pos)
#define RTC_EVTENSET_COMPARE2_Disabled (0x0UL)
#define RTC_EVTENSET_COMPARE2_Enabled (0x1UL)
#define RTC_EVTENSET_COMPARE2_Set (0x1UL)

/* Bit 17 : Write '1' to enable event routing for event COMPARE[1] */
#define RTC_EVTENSET_COMPARE1_Pos (17UL)
#define RTC_EVTENSET_COMPARE1_Msk (0x1UL << RTC_EVTENSET_COMPARE1_Pos)
#define RTC_EVTENSET_COMPARE1_Disabled (0x0UL)
#define RTC_EVTENSET_COMPARE1_Enabled (0x1UL)
#define RTC_EVTENSET_COMPARE1_Set (0x1UL)

/* Bit 16 : Write '1' to enable event routing for event COMPARE[0] */
#define RTC_EVTENSET_COMPARE0_Pos (16UL)
#define RTC_EVTENSET_COMPARE0_Msk (0x1UL << RTC_EVTENSET_COMPARE0_Pos)
#define RTC_EVTENSET_COMPARE0_Disabled (0x0UL)
#define RTC_EVTENSET_COMPARE0_Enabled (0x1UL)
#define RTC_EVTENSET_COMPARE0_Set (0x1UL)

/* Bit 1 : Write '1' to enable event routing for event OVRFLW */
#define RTC_EVTENSET_OVRFLW_Pos (1UL)
#define RTC_EVTENSET_OVRFLW_Msk (0x1UL << RTC_EVTENSET_OVRFLW_Pos)
#define RTC_EVTENSET_OVRFLW_Disabled (0x0UL)
#define RTC_EVTENSET_OVRFLW_Enabled (0x1UL)
#define RTC_EVTENSET_OVRFLW_Set (0x1UL)

/* Bit 0 : Write '1' to enable event routing for event TICK */
#define RTC_EVTENSET_TICK_Pos (0UL)
#define RTC_EVTENSET_TICK_Msk (0x1UL << RTC_EVTENSET_TICK_Pos)
#define RTC_EVTENSET_TICK_Disabled (0x0UL)
#define RTC_EVTENSET_TICK_Enabled (0x1UL)
#define RTC_EVTENSET_TICK_Set (0x1UL)

/* Register: RTC_EVTENCLR */
/* Description: Disable event routing */

/* Bit 19 : Write '1' to disable event routing for event COMPARE[3] */
#define RTC_EVTENCLR_COMPARE3_Pos (19UL)
#define RTC_EVTENCLR_COMPARE3_Msk (0x1UL << RTC_EVTENCLR_COMPARE3_Pos)
#define RTC_EVTENCLR_COMPARE3_Disabled (0x0UL)
#define RTC_EVTENCLR_COMPARE3_Enabled (0x1UL)
#define RTC_EVTENCLR_COMPARE3_Clear (0x1UL)

/* Bit 18 : Write '1' to disable event routing for event COMPARE[2] */
#define RTC_EVTENCLR_COMPARE2_Pos (18UL)
#define RTC_EVTENCLR_COMPARE2_Msk (0x1UL << RTC_EVTENCLR_COMPARE2_Pos)
#define RTC_EVTENCLR_COMPARE2_Disabled (0x0UL)
#define RTC_EVTENCLR_COMPARE2_Enabled (0x1UL)
#define RTC_EVTENCLR_COMPARE2_Clear (0x1UL)

/* Bit 17 : Write '1' to disable event routing for event COMPARE[1] */
#define RTC_EVTENCLR_COMPARE1_Pos (17UL)
#define RTC_EVTENCLR_COMPARE1_Msk (0x1UL << RTC_EVTENCLR_COMPARE1_Pos)
#define RTC_EVTENCLR_COMPARE1_Disabled (0x0UL)
#define RTC_EVTENCLR_COMPARE1_Enabled (0x1UL)
#define RTC_EVTENCLR_COMPARE1_Clear (0x1UL)

/* Bit 16 : Write '1' to disable event routing for event COMPARE[0] */
#define RTC_EVTENCLR_COMPARE0_Pos (16UL)
#define RTC_EVTENCLR_COMPARE0_Msk (0x1UL << RTC_EVTENCLR_COMPARE0_Pos)
#define RTC_EVTENCLR_COMPARE0_Disabled (0x0UL)
#define RTC_EVTENCLR_COMPARE0_Enabled (0x1UL)
#define RTC_EVTENCLR_COMPARE0_Clear (0x1UL)

/* Bit 1 : Write '1' to disable event routing for event OVRFLW */
#define RTC_EVTENCLR_OVRFLW_Pos (1UL)
#define RTC_EVTENCLR_OVRFLW_Msk (0x1UL << RTC_EVTENCLR_OVRFLW_Pos)
#define RTC_EVTENCLR_OVRFLW_Disabled (0x0UL)
#define RTC_EVTENCLR_OVRFLW_Enabled (0x1UL)
#define RTC_EVTENCLR_OVRFLW_Clear (0x1UL)

/* Bit 0 : Write '1' to disable event routing for event TICK */
#define RTC_EVTENCLR_TICK_Pos (0UL)
#define RTC_EVTENCLR_TICK_Msk (0x1UL << RTC_EVTENCLR_TICK_Pos)
#define RTC_EVTENCLR_TICK_Disabled (0x0UL)
#define RTC_EVTENCLR_TICK_Enabled (0x1UL)
#define RTC_EVTENCLR_TICK_Clear (0x1UL)

/* Register: RTC_COUNTER */
/* Description: Current counter value */

/* Bits 23..0 : Counter value */
#define RTC_COUNTER_COUNTER_Pos (0UL)
#define RTC_COUNTER_COUNTER_Msk (0xFFFFFFUL << RTC_COUNTER_COUNTER_Pos)

/* Register: RTC_PRESCALER */
/* Description: 12-bit prescaler for counter frequency (32768 / (PRESCALER + 1)). Must be written when RTC is stopped. */

/* Bits 11..0 : Prescaler value */
#define RTC_PRESCALER_PRESCALER_Pos (0UL)
#define RTC_PRESCALER_PRESCALER_Msk (0xFFFUL << RTC_PRESCALER_PRESCALER_Pos)

/* Register: RTC_CC */
/* Description: Description collection: Compare register n */

/* Bits 23..0 : Compare value */
#define RTC_CC_COMPARE_Pos (0UL)
#define RTC_CC_COMPARE_Msk (0xFFFFFFUL << RTC_CC_COMPARE_Pos)


/* Peripheral: SPIM */
/* Description: Serial Peripheral Interface Master with EasyDMA */

/* Register: SPIM_TASKS_START */
/* Description: Start SPI transaction */

/* Bit 0 : Start SPI transaction */
#define SPIM_TASKS_START_TASKS_START_Pos (0UL)
#define SPIM_TASKS_START_TASKS_START_Msk (0x1UL << SPIM_TASKS_START_TASKS_START_Pos)
#define SPIM_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: SPIM_TASKS_STOP */
/* Description: Stop SPI transaction */

/* Bit 0 : Stop SPI transaction */
#define SPIM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define SPIM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << SPIM_TASKS_STOP_TASKS_STOP_Pos)
#define SPIM_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: SPIM_TASKS_SUSPEND */
/* Description: Suspend SPI transaction */

/* Bit 0 : Suspend SPI transaction */
#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL)
#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos)
#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (0x1UL)

/* Register: SPIM_TASKS_RESUME */
/* Description: Resume SPI transaction */

/* Bit 0 : Resume SPI transaction */
#define SPIM_TASKS_RESUME_TASKS_RESUME_Pos (0UL)
#define SPIM_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << SPIM_TASKS_RESUME_TASKS_RESUME_Pos)
#define SPIM_TASKS_RESUME_TASKS_RESUME_Trigger (0x1UL)

/* Register: SPIM_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define SPIM_SUBSCRIBE_START_EN_Pos (31UL)
#define SPIM_SUBSCRIBE_START_EN_Msk (0x1UL << SPIM_SUBSCRIBE_START_EN_Pos)
#define SPIM_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define SPIM_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define SPIM_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define SPIM_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << SPIM_SUBSCRIBE_START_CHIDX_Pos)

/* Register: SPIM_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define SPIM_SUBSCRIBE_STOP_EN_Pos (31UL)
#define SPIM_SUBSCRIBE_STOP_EN_Msk (0x1UL << SPIM_SUBSCRIBE_STOP_EN_Pos)
#define SPIM_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define SPIM_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define SPIM_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define SPIM_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << SPIM_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: SPIM_SUBSCRIBE_SUSPEND */
/* Description: Subscribe configuration for task SUSPEND */

/* Bit 31 :   */
#define SPIM_SUBSCRIBE_SUSPEND_EN_Pos (31UL)
#define SPIM_SUBSCRIBE_SUSPEND_EN_Msk (0x1UL << SPIM_SUBSCRIBE_SUSPEND_EN_Pos)
#define SPIM_SUBSCRIBE_SUSPEND_EN_Disabled (0x0UL)
#define SPIM_SUBSCRIBE_SUSPEND_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task SUSPEND will subscribe to */
#define SPIM_SUBSCRIBE_SUSPEND_CHIDX_Pos (0UL)
#define SPIM_SUBSCRIBE_SUSPEND_CHIDX_Msk (0xFFUL << SPIM_SUBSCRIBE_SUSPEND_CHIDX_Pos)

/* Register: SPIM_SUBSCRIBE_RESUME */
/* Description: Subscribe configuration for task RESUME */

/* Bit 31 :   */
#define SPIM_SUBSCRIBE_RESUME_EN_Pos (31UL)
#define SPIM_SUBSCRIBE_RESUME_EN_Msk (0x1UL << SPIM_SUBSCRIBE_RESUME_EN_Pos)
#define SPIM_SUBSCRIBE_RESUME_EN_Disabled (0x0UL)
#define SPIM_SUBSCRIBE_RESUME_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task RESUME will subscribe to */
#define SPIM_SUBSCRIBE_RESUME_CHIDX_Pos (0UL)
#define SPIM_SUBSCRIBE_RESUME_CHIDX_Msk (0xFFUL << SPIM_SUBSCRIBE_RESUME_CHIDX_Pos)

/* Register: SPIM_EVENTS_STOPPED */
/* Description: SPI transaction has stopped */

/* Bit 0 : SPI transaction has stopped */
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0x0UL)
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (0x1UL)

/* Register: SPIM_EVENTS_ENDRX */
/* Description: End of RXD buffer reached */

/* Bit 0 : End of RXD buffer reached */
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL)
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos)
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0x0UL)
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Generated (0x1UL)

/* Register: SPIM_EVENTS_END */
/* Description: End of RXD buffer and TXD buffer reached */

/* Bit 0 : End of RXD buffer and TXD buffer reached */
#define SPIM_EVENTS_END_EVENTS_END_Pos (0UL)
#define SPIM_EVENTS_END_EVENTS_END_Msk (0x1UL << SPIM_EVENTS_END_EVENTS_END_Pos)
#define SPIM_EVENTS_END_EVENTS_END_NotGenerated (0x0UL)
#define SPIM_EVENTS_END_EVENTS_END_Generated (0x1UL)

/* Register: SPIM_EVENTS_ENDTX */
/* Description: End of TXD buffer reached */

/* Bit 0 : End of TXD buffer reached */
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL)
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos)
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_NotGenerated (0x0UL)
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Generated (0x1UL)

/* Register: SPIM_EVENTS_STARTED */
/* Description: Transaction started */

/* Bit 0 : Transaction started */
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << SPIM_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0x0UL)
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Generated (0x1UL)

/* Register: SPIM_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define SPIM_PUBLISH_STOPPED_EN_Pos (31UL)
#define SPIM_PUBLISH_STOPPED_EN_Msk (0x1UL << SPIM_PUBLISH_STOPPED_EN_Pos)
#define SPIM_PUBLISH_STOPPED_EN_Disabled (0x0UL)
#define SPIM_PUBLISH_STOPPED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STOPPED will publish to */
#define SPIM_PUBLISH_STOPPED_CHIDX_Pos (0UL)
#define SPIM_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << SPIM_PUBLISH_STOPPED_CHIDX_Pos)

/* Register: SPIM_PUBLISH_ENDRX */
/* Description: Publish configuration for event ENDRX */

/* Bit 31 :   */
#define SPIM_PUBLISH_ENDRX_EN_Pos (31UL)
#define SPIM_PUBLISH_ENDRX_EN_Msk (0x1UL << SPIM_PUBLISH_ENDRX_EN_Pos)
#define SPIM_PUBLISH_ENDRX_EN_Disabled (0x0UL)
#define SPIM_PUBLISH_ENDRX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDRX will publish to */
#define SPIM_PUBLISH_ENDRX_CHIDX_Pos (0UL)
#define SPIM_PUBLISH_ENDRX_CHIDX_Msk (0xFFUL << SPIM_PUBLISH_ENDRX_CHIDX_Pos)

/* Register: SPIM_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define SPIM_PUBLISH_END_EN_Pos (31UL)
#define SPIM_PUBLISH_END_EN_Msk (0x1UL << SPIM_PUBLISH_END_EN_Pos)
#define SPIM_PUBLISH_END_EN_Disabled (0x0UL)
#define SPIM_PUBLISH_END_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event END will publish to */
#define SPIM_PUBLISH_END_CHIDX_Pos (0UL)
#define SPIM_PUBLISH_END_CHIDX_Msk (0xFFUL << SPIM_PUBLISH_END_CHIDX_Pos)

/* Register: SPIM_PUBLISH_ENDTX */
/* Description: Publish configuration for event ENDTX */

/* Bit 31 :   */
#define SPIM_PUBLISH_ENDTX_EN_Pos (31UL)
#define SPIM_PUBLISH_ENDTX_EN_Msk (0x1UL << SPIM_PUBLISH_ENDTX_EN_Pos)
#define SPIM_PUBLISH_ENDTX_EN_Disabled (0x0UL)
#define SPIM_PUBLISH_ENDTX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDTX will publish to */
#define SPIM_PUBLISH_ENDTX_CHIDX_Pos (0UL)
#define SPIM_PUBLISH_ENDTX_CHIDX_Msk (0xFFUL << SPIM_PUBLISH_ENDTX_CHIDX_Pos)

/* Register: SPIM_PUBLISH_STARTED */
/* Description: Publish configuration for event STARTED */

/* Bit 31 :   */
#define SPIM_PUBLISH_STARTED_EN_Pos (31UL)
#define SPIM_PUBLISH_STARTED_EN_Msk (0x1UL << SPIM_PUBLISH_STARTED_EN_Pos)
#define SPIM_PUBLISH_STARTED_EN_Disabled (0x0UL)
#define SPIM_PUBLISH_STARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STARTED will publish to */
#define SPIM_PUBLISH_STARTED_CHIDX_Pos (0UL)
#define SPIM_PUBLISH_STARTED_CHIDX_Msk (0xFFUL << SPIM_PUBLISH_STARTED_CHIDX_Pos)

/* Register: SPIM_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 17 : Shortcut between event END and task START */
#define SPIM_SHORTS_END_START_Pos (17UL)
#define SPIM_SHORTS_END_START_Msk (0x1UL << SPIM_SHORTS_END_START_Pos)
#define SPIM_SHORTS_END_START_Disabled (0x0UL)
#define SPIM_SHORTS_END_START_Enabled (0x1UL)

/* Register: SPIM_INTENSET */
/* Description: Enable interrupt */

/* Bit 19 : Write '1' to enable interrupt for event STARTED */
#define SPIM_INTENSET_STARTED_Pos (19UL)
#define SPIM_INTENSET_STARTED_Msk (0x1UL << SPIM_INTENSET_STARTED_Pos)
#define SPIM_INTENSET_STARTED_Disabled (0x0UL)
#define SPIM_INTENSET_STARTED_Enabled (0x1UL)
#define SPIM_INTENSET_STARTED_Set (0x1UL)

/* Bit 8 : Write '1' to enable interrupt for event ENDTX */
#define SPIM_INTENSET_ENDTX_Pos (8UL)
#define SPIM_INTENSET_ENDTX_Msk (0x1UL << SPIM_INTENSET_ENDTX_Pos)
#define SPIM_INTENSET_ENDTX_Disabled (0x0UL)
#define SPIM_INTENSET_ENDTX_Enabled (0x1UL)
#define SPIM_INTENSET_ENDTX_Set (0x1UL)

/* Bit 6 : Write '1' to enable interrupt for event END */
#define SPIM_INTENSET_END_Pos (6UL)
#define SPIM_INTENSET_END_Msk (0x1UL << SPIM_INTENSET_END_Pos)
#define SPIM_INTENSET_END_Disabled (0x0UL)
#define SPIM_INTENSET_END_Enabled (0x1UL)
#define SPIM_INTENSET_END_Set (0x1UL)

/* Bit 4 : Write '1' to enable interrupt for event ENDRX */
#define SPIM_INTENSET_ENDRX_Pos (4UL)
#define SPIM_INTENSET_ENDRX_Msk (0x1UL << SPIM_INTENSET_ENDRX_Pos)
#define SPIM_INTENSET_ENDRX_Disabled (0x0UL)
#define SPIM_INTENSET_ENDRX_Enabled (0x1UL)
#define SPIM_INTENSET_ENDRX_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define SPIM_INTENSET_STOPPED_Pos (1UL)
#define SPIM_INTENSET_STOPPED_Msk (0x1UL << SPIM_INTENSET_STOPPED_Pos)
#define SPIM_INTENSET_STOPPED_Disabled (0x0UL)
#define SPIM_INTENSET_STOPPED_Enabled (0x1UL)
#define SPIM_INTENSET_STOPPED_Set (0x1UL)

/* Register: SPIM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 19 : Write '1' to disable interrupt for event STARTED */
#define SPIM_INTENCLR_STARTED_Pos (19UL)
#define SPIM_INTENCLR_STARTED_Msk (0x1UL << SPIM_INTENCLR_STARTED_Pos)
#define SPIM_INTENCLR_STARTED_Disabled (0x0UL)
#define SPIM_INTENCLR_STARTED_Enabled (0x1UL)
#define SPIM_INTENCLR_STARTED_Clear (0x1UL)

/* Bit 8 : Write '1' to disable interrupt for event ENDTX */
#define SPIM_INTENCLR_ENDTX_Pos (8UL)
#define SPIM_INTENCLR_ENDTX_Msk (0x1UL << SPIM_INTENCLR_ENDTX_Pos)
#define SPIM_INTENCLR_ENDTX_Disabled (0x0UL)
#define SPIM_INTENCLR_ENDTX_Enabled (0x1UL)
#define SPIM_INTENCLR_ENDTX_Clear (0x1UL)

/* Bit 6 : Write '1' to disable interrupt for event END */
#define SPIM_INTENCLR_END_Pos (6UL)
#define SPIM_INTENCLR_END_Msk (0x1UL << SPIM_INTENCLR_END_Pos)
#define SPIM_INTENCLR_END_Disabled (0x0UL)
#define SPIM_INTENCLR_END_Enabled (0x1UL)
#define SPIM_INTENCLR_END_Clear (0x1UL)

/* Bit 4 : Write '1' to disable interrupt for event ENDRX */
#define SPIM_INTENCLR_ENDRX_Pos (4UL)
#define SPIM_INTENCLR_ENDRX_Msk (0x1UL << SPIM_INTENCLR_ENDRX_Pos)
#define SPIM_INTENCLR_ENDRX_Disabled (0x0UL)
#define SPIM_INTENCLR_ENDRX_Enabled (0x1UL)
#define SPIM_INTENCLR_ENDRX_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define SPIM_INTENCLR_STOPPED_Pos (1UL)
#define SPIM_INTENCLR_STOPPED_Msk (0x1UL << SPIM_INTENCLR_STOPPED_Pos)
#define SPIM_INTENCLR_STOPPED_Disabled (0x0UL)
#define SPIM_INTENCLR_STOPPED_Enabled (0x1UL)
#define SPIM_INTENCLR_STOPPED_Clear (0x1UL)

/* Register: SPIM_STALLSTAT */
/* Description: Stall status for EasyDMA RAM accesses. The fields in this register are set to STALL by hardware whenever a stall occurres and can be cleared (set to NOSTALL) by the CPU. */

/* Bit 1 : Stall status for EasyDMA RAM writes */
#define SPIM_STALLSTAT_RX_Pos (1UL)
#define SPIM_STALLSTAT_RX_Msk (0x1UL << SPIM_STALLSTAT_RX_Pos)
#define SPIM_STALLSTAT_RX_NOSTALL (0x0UL)
#define SPIM_STALLSTAT_RX_STALL (0x1UL)

/* Bit 0 : Stall status for EasyDMA RAM reads */
#define SPIM_STALLSTAT_TX_Pos (0UL)
#define SPIM_STALLSTAT_TX_Msk (0x1UL << SPIM_STALLSTAT_TX_Pos)
#define SPIM_STALLSTAT_TX_NOSTALL (0x0UL)
#define SPIM_STALLSTAT_TX_STALL (0x1UL)

/* Register: SPIM_ENABLE */
/* Description: Enable SPIM */

/* Bits 3..0 : Enable or disable SPIM */
#define SPIM_ENABLE_ENABLE_Pos (0UL)
#define SPIM_ENABLE_ENABLE_Msk (0xFUL << SPIM_ENABLE_ENABLE_Pos)
#define SPIM_ENABLE_ENABLE_Disabled (0x0UL)
#define SPIM_ENABLE_ENABLE_Enabled (0x7UL)

/* Register: SPIM_PSEL_SCK */
/* Description: Pin select for SCK */

/* Bit 31 : Connection */
#define SPIM_PSEL_SCK_CONNECT_Pos (31UL)
#define SPIM_PSEL_SCK_CONNECT_Msk (0x1UL << SPIM_PSEL_SCK_CONNECT_Pos)
#define SPIM_PSEL_SCK_CONNECT_Connected (0x0UL)
#define SPIM_PSEL_SCK_CONNECT_Disconnected (0x1UL)

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
#define SPIM_PSEL_MOSI_CONNECT_Connected (0x0UL)
#define SPIM_PSEL_MOSI_CONNECT_Disconnected (0x1UL)

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
#define SPIM_PSEL_MISO_CONNECT_Connected (0x0UL)
#define SPIM_PSEL_MISO_CONNECT_Disconnected (0x1UL)

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
#define SPIM_PSEL_CSN_CONNECT_Connected (0x0UL)
#define SPIM_PSEL_CSN_CONNECT_Disconnected (0x1UL)

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
#define SPIM_RXD_LIST_LIST_Disabled (0x0UL)
#define SPIM_RXD_LIST_LIST_ArrayList (0x1UL)

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
#define SPIM_TXD_LIST_LIST_Disabled (0x0UL)
#define SPIM_TXD_LIST_LIST_ArrayList (0x1UL)

/* Register: SPIM_CONFIG */
/* Description: Configuration register */

/* Bit 2 : Serial clock (SCK) polarity */
#define SPIM_CONFIG_CPOL_Pos (2UL)
#define SPIM_CONFIG_CPOL_Msk (0x1UL << SPIM_CONFIG_CPOL_Pos)
#define SPIM_CONFIG_CPOL_ActiveHigh (0x0UL)
#define SPIM_CONFIG_CPOL_ActiveLow (0x1UL)

/* Bit 1 : Serial clock (SCK) phase */
#define SPIM_CONFIG_CPHA_Pos (1UL)
#define SPIM_CONFIG_CPHA_Msk (0x1UL << SPIM_CONFIG_CPHA_Pos)
#define SPIM_CONFIG_CPHA_Leading (0x0UL)
#define SPIM_CONFIG_CPHA_Trailing (0x1UL)

/* Bit 0 : Bit order */
#define SPIM_CONFIG_ORDER_Pos (0UL)
#define SPIM_CONFIG_ORDER_Msk (0x1UL << SPIM_CONFIG_ORDER_Pos)
#define SPIM_CONFIG_ORDER_MsbFirst (0x0UL)
#define SPIM_CONFIG_ORDER_LsbFirst (0x1UL)

/* Register: SPIM_IFTIMING_RXDELAY */
/* Description: Sample delay for input serial data on MISO */

/* Bits 2..0 : Sample delay for input serial data on MISO. The value specifies the number of 64 MHz clock cycles (15.625 ns) delay from the the sampling edge of SCK (leading edge for CONFIG.CPHA = 0, trailing edge for CONFIG.CPHA = 1) until the input serial data is sampled. As en example, if RXDELAY = 0 and CONFIG.CPHA = 0, the input serial data is sampled on the rising edge of SCK. */
#define SPIM_IFTIMING_RXDELAY_RXDELAY_Pos (0UL)
#define SPIM_IFTIMING_RXDELAY_RXDELAY_Msk (0x7UL << SPIM_IFTIMING_RXDELAY_RXDELAY_Pos)

/* Register: SPIM_IFTIMING_CSNDUR */
/* Description: Minimum duration between edge of CSN and edge of SCK. When SHORTS.END_START is used, this is also the minimum duration CSN must stay high between transactions. */

/* Bits 7..0 : Minimum duration between edge of CSN and edge of SCK. When SHORTS.END_START is used, this is the minimum duration CSN must stay high between transactions. The value is specified in number of 64 MHz clock cycles (15.625 ns). */
#define SPIM_IFTIMING_CSNDUR_CSNDUR_Pos (0UL)
#define SPIM_IFTIMING_CSNDUR_CSNDUR_Msk (0xFFUL << SPIM_IFTIMING_CSNDUR_CSNDUR_Pos)

/* Register: SPIM_CSNPOL */
/* Description: Polarity of CSN output */

/* Bit 0 : Polarity of CSN output */
#define SPIM_CSNPOL_CSNPOL_Pos (0UL)
#define SPIM_CSNPOL_CSNPOL_Msk (0x1UL << SPIM_CSNPOL_CSNPOL_Pos)
#define SPIM_CSNPOL_CSNPOL_LOW (0x0UL)
#define SPIM_CSNPOL_CSNPOL_HIGH (0x1UL)

/* Register: SPIM_PSELDCX */
/* Description: Pin select for DCX signal */

/* Bit 31 : Connection */
#define SPIM_PSELDCX_CONNECT_Pos (31UL)
#define SPIM_PSELDCX_CONNECT_Msk (0x1UL << SPIM_PSELDCX_CONNECT_Pos)
#define SPIM_PSELDCX_CONNECT_Connected (0x0UL)
#define SPIM_PSELDCX_CONNECT_Disconnected (0x1UL)

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
/* Description: SPI Slave */

/* Register: SPIS_TASKS_ACQUIRE */
/* Description: Acquire SPI semaphore */

/* Bit 0 : Acquire SPI semaphore */
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Pos (0UL)
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Msk (0x1UL << SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Pos)
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Trigger (0x1UL)

/* Register: SPIS_TASKS_RELEASE */
/* Description: Release SPI semaphore, enabling the SPI slave to acquire it */

/* Bit 0 : Release SPI semaphore, enabling the SPI slave to acquire it */
#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Pos (0UL)
#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Msk (0x1UL << SPIS_TASKS_RELEASE_TASKS_RELEASE_Pos)
#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Trigger (0x1UL)

/* Register: SPIS_SUBSCRIBE_ACQUIRE */
/* Description: Subscribe configuration for task ACQUIRE */

/* Bit 31 :   */
#define SPIS_SUBSCRIBE_ACQUIRE_EN_Pos (31UL)
#define SPIS_SUBSCRIBE_ACQUIRE_EN_Msk (0x1UL << SPIS_SUBSCRIBE_ACQUIRE_EN_Pos)
#define SPIS_SUBSCRIBE_ACQUIRE_EN_Disabled (0x0UL)
#define SPIS_SUBSCRIBE_ACQUIRE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task ACQUIRE will subscribe to */
#define SPIS_SUBSCRIBE_ACQUIRE_CHIDX_Pos (0UL)
#define SPIS_SUBSCRIBE_ACQUIRE_CHIDX_Msk (0xFFUL << SPIS_SUBSCRIBE_ACQUIRE_CHIDX_Pos)

/* Register: SPIS_SUBSCRIBE_RELEASE */
/* Description: Subscribe configuration for task RELEASE */

/* Bit 31 :   */
#define SPIS_SUBSCRIBE_RELEASE_EN_Pos (31UL)
#define SPIS_SUBSCRIBE_RELEASE_EN_Msk (0x1UL << SPIS_SUBSCRIBE_RELEASE_EN_Pos)
#define SPIS_SUBSCRIBE_RELEASE_EN_Disabled (0x0UL)
#define SPIS_SUBSCRIBE_RELEASE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task RELEASE will subscribe to */
#define SPIS_SUBSCRIBE_RELEASE_CHIDX_Pos (0UL)
#define SPIS_SUBSCRIBE_RELEASE_CHIDX_Msk (0xFFUL << SPIS_SUBSCRIBE_RELEASE_CHIDX_Pos)

/* Register: SPIS_EVENTS_END */
/* Description: Granted transaction completed */

/* Bit 0 : Granted transaction completed */
#define SPIS_EVENTS_END_EVENTS_END_Pos (0UL)
#define SPIS_EVENTS_END_EVENTS_END_Msk (0x1UL << SPIS_EVENTS_END_EVENTS_END_Pos)
#define SPIS_EVENTS_END_EVENTS_END_NotGenerated (0x0UL)
#define SPIS_EVENTS_END_EVENTS_END_Generated (0x1UL)

/* Register: SPIS_EVENTS_ENDRX */
/* Description: End of RXD buffer reached */

/* Bit 0 : End of RXD buffer reached */
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL)
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Pos)
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0x0UL)
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Generated (0x1UL)

/* Register: SPIS_EVENTS_ACQUIRED */
/* Description: Semaphore acquired */

/* Bit 0 : Semaphore acquired */
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Pos (0UL)
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Msk (0x1UL << SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Pos)
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_NotGenerated (0x0UL)
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Generated (0x1UL)

/* Register: SPIS_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define SPIS_PUBLISH_END_EN_Pos (31UL)
#define SPIS_PUBLISH_END_EN_Msk (0x1UL << SPIS_PUBLISH_END_EN_Pos)
#define SPIS_PUBLISH_END_EN_Disabled (0x0UL)
#define SPIS_PUBLISH_END_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event END will publish to */
#define SPIS_PUBLISH_END_CHIDX_Pos (0UL)
#define SPIS_PUBLISH_END_CHIDX_Msk (0xFFUL << SPIS_PUBLISH_END_CHIDX_Pos)

/* Register: SPIS_PUBLISH_ENDRX */
/* Description: Publish configuration for event ENDRX */

/* Bit 31 :   */
#define SPIS_PUBLISH_ENDRX_EN_Pos (31UL)
#define SPIS_PUBLISH_ENDRX_EN_Msk (0x1UL << SPIS_PUBLISH_ENDRX_EN_Pos)
#define SPIS_PUBLISH_ENDRX_EN_Disabled (0x0UL)
#define SPIS_PUBLISH_ENDRX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDRX will publish to */
#define SPIS_PUBLISH_ENDRX_CHIDX_Pos (0UL)
#define SPIS_PUBLISH_ENDRX_CHIDX_Msk (0xFFUL << SPIS_PUBLISH_ENDRX_CHIDX_Pos)

/* Register: SPIS_PUBLISH_ACQUIRED */
/* Description: Publish configuration for event ACQUIRED */

/* Bit 31 :   */
#define SPIS_PUBLISH_ACQUIRED_EN_Pos (31UL)
#define SPIS_PUBLISH_ACQUIRED_EN_Msk (0x1UL << SPIS_PUBLISH_ACQUIRED_EN_Pos)
#define SPIS_PUBLISH_ACQUIRED_EN_Disabled (0x0UL)
#define SPIS_PUBLISH_ACQUIRED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ACQUIRED will publish to */
#define SPIS_PUBLISH_ACQUIRED_CHIDX_Pos (0UL)
#define SPIS_PUBLISH_ACQUIRED_CHIDX_Msk (0xFFUL << SPIS_PUBLISH_ACQUIRED_CHIDX_Pos)

/* Register: SPIS_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 2 : Shortcut between event END and task ACQUIRE */
#define SPIS_SHORTS_END_ACQUIRE_Pos (2UL)
#define SPIS_SHORTS_END_ACQUIRE_Msk (0x1UL << SPIS_SHORTS_END_ACQUIRE_Pos)
#define SPIS_SHORTS_END_ACQUIRE_Disabled (0x0UL)
#define SPIS_SHORTS_END_ACQUIRE_Enabled (0x1UL)

/* Register: SPIS_INTENSET */
/* Description: Enable interrupt */

/* Bit 10 : Write '1' to enable interrupt for event ACQUIRED */
#define SPIS_INTENSET_ACQUIRED_Pos (10UL)
#define SPIS_INTENSET_ACQUIRED_Msk (0x1UL << SPIS_INTENSET_ACQUIRED_Pos)
#define SPIS_INTENSET_ACQUIRED_Disabled (0x0UL)
#define SPIS_INTENSET_ACQUIRED_Enabled (0x1UL)
#define SPIS_INTENSET_ACQUIRED_Set (0x1UL)

/* Bit 4 : Write '1' to enable interrupt for event ENDRX */
#define SPIS_INTENSET_ENDRX_Pos (4UL)
#define SPIS_INTENSET_ENDRX_Msk (0x1UL << SPIS_INTENSET_ENDRX_Pos)
#define SPIS_INTENSET_ENDRX_Disabled (0x0UL)
#define SPIS_INTENSET_ENDRX_Enabled (0x1UL)
#define SPIS_INTENSET_ENDRX_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event END */
#define SPIS_INTENSET_END_Pos (1UL)
#define SPIS_INTENSET_END_Msk (0x1UL << SPIS_INTENSET_END_Pos)
#define SPIS_INTENSET_END_Disabled (0x0UL)
#define SPIS_INTENSET_END_Enabled (0x1UL)
#define SPIS_INTENSET_END_Set (0x1UL)

/* Register: SPIS_INTENCLR */
/* Description: Disable interrupt */

/* Bit 10 : Write '1' to disable interrupt for event ACQUIRED */
#define SPIS_INTENCLR_ACQUIRED_Pos (10UL)
#define SPIS_INTENCLR_ACQUIRED_Msk (0x1UL << SPIS_INTENCLR_ACQUIRED_Pos)
#define SPIS_INTENCLR_ACQUIRED_Disabled (0x0UL)
#define SPIS_INTENCLR_ACQUIRED_Enabled (0x1UL)
#define SPIS_INTENCLR_ACQUIRED_Clear (0x1UL)

/* Bit 4 : Write '1' to disable interrupt for event ENDRX */
#define SPIS_INTENCLR_ENDRX_Pos (4UL)
#define SPIS_INTENCLR_ENDRX_Msk (0x1UL << SPIS_INTENCLR_ENDRX_Pos)
#define SPIS_INTENCLR_ENDRX_Disabled (0x0UL)
#define SPIS_INTENCLR_ENDRX_Enabled (0x1UL)
#define SPIS_INTENCLR_ENDRX_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event END */
#define SPIS_INTENCLR_END_Pos (1UL)
#define SPIS_INTENCLR_END_Msk (0x1UL << SPIS_INTENCLR_END_Pos)
#define SPIS_INTENCLR_END_Disabled (0x0UL)
#define SPIS_INTENCLR_END_Enabled (0x1UL)
#define SPIS_INTENCLR_END_Clear (0x1UL)

/* Register: SPIS_SEMSTAT */
/* Description: Semaphore status register */

/* Bits 1..0 : Semaphore status */
#define SPIS_SEMSTAT_SEMSTAT_Pos (0UL)
#define SPIS_SEMSTAT_SEMSTAT_Msk (0x3UL << SPIS_SEMSTAT_SEMSTAT_Pos)
#define SPIS_SEMSTAT_SEMSTAT_Free (0x0UL)
#define SPIS_SEMSTAT_SEMSTAT_CPU (0x1UL)
#define SPIS_SEMSTAT_SEMSTAT_SPIS (0x2UL)
#define SPIS_SEMSTAT_SEMSTAT_CPUPending (0x3UL)

/* Register: SPIS_STATUS */
/* Description: Status from last transaction */

/* Bit 1 : RX buffer overflow detected, and prevented */
#define SPIS_STATUS_OVERFLOW_Pos (1UL)
#define SPIS_STATUS_OVERFLOW_Msk (0x1UL << SPIS_STATUS_OVERFLOW_Pos)
#define SPIS_STATUS_OVERFLOW_NotPresent (0x0UL)
#define SPIS_STATUS_OVERFLOW_Present (0x1UL)
#define SPIS_STATUS_OVERFLOW_Clear (0x1UL)

/* Bit 0 : TX buffer over-read detected, and prevented */
#define SPIS_STATUS_OVERREAD_Pos (0UL)
#define SPIS_STATUS_OVERREAD_Msk (0x1UL << SPIS_STATUS_OVERREAD_Pos)
#define SPIS_STATUS_OVERREAD_NotPresent (0x0UL)
#define SPIS_STATUS_OVERREAD_Present (0x1UL)
#define SPIS_STATUS_OVERREAD_Clear (0x1UL)

/* Register: SPIS_ENABLE */
/* Description: Enable SPI slave */

/* Bits 3..0 : Enable or disable SPI slave */
#define SPIS_ENABLE_ENABLE_Pos (0UL)
#define SPIS_ENABLE_ENABLE_Msk (0xFUL << SPIS_ENABLE_ENABLE_Pos)
#define SPIS_ENABLE_ENABLE_Disabled (0x0UL)
#define SPIS_ENABLE_ENABLE_Enabled (0x2UL)

/* Register: SPIS_PSEL_SCK */
/* Description: Pin select for SCK */

/* Bit 31 : Connection */
#define SPIS_PSEL_SCK_CONNECT_Pos (31UL)
#define SPIS_PSEL_SCK_CONNECT_Msk (0x1UL << SPIS_PSEL_SCK_CONNECT_Pos)
#define SPIS_PSEL_SCK_CONNECT_Connected (0x0UL)
#define SPIS_PSEL_SCK_CONNECT_Disconnected (0x1UL)

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
#define SPIS_PSEL_MISO_CONNECT_Connected (0x0UL)
#define SPIS_PSEL_MISO_CONNECT_Disconnected (0x1UL)

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
#define SPIS_PSEL_MOSI_CONNECT_Connected (0x0UL)
#define SPIS_PSEL_MOSI_CONNECT_Disconnected (0x1UL)

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
#define SPIS_PSEL_CSN_CONNECT_Connected (0x0UL)
#define SPIS_PSEL_CSN_CONNECT_Disconnected (0x1UL)

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
#define SPIS_RXD_LIST_LIST_Disabled (0x0UL)
#define SPIS_RXD_LIST_LIST_ArrayList (0x1UL)

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
#define SPIS_TXD_LIST_LIST_Disabled (0x0UL)
#define SPIS_TXD_LIST_LIST_ArrayList (0x1UL)

/* Register: SPIS_CONFIG */
/* Description: Configuration register */

/* Bit 2 : Serial clock (SCK) polarity */
#define SPIS_CONFIG_CPOL_Pos (2UL)
#define SPIS_CONFIG_CPOL_Msk (0x1UL << SPIS_CONFIG_CPOL_Pos)
#define SPIS_CONFIG_CPOL_ActiveHigh (0x0UL)
#define SPIS_CONFIG_CPOL_ActiveLow (0x1UL)

/* Bit 1 : Serial clock (SCK) phase */
#define SPIS_CONFIG_CPHA_Pos (1UL)
#define SPIS_CONFIG_CPHA_Msk (0x1UL << SPIS_CONFIG_CPHA_Pos)
#define SPIS_CONFIG_CPHA_Leading (0x0UL)
#define SPIS_CONFIG_CPHA_Trailing (0x1UL)

/* Bit 0 : Bit order */
#define SPIS_CONFIG_ORDER_Pos (0UL)
#define SPIS_CONFIG_ORDER_Msk (0x1UL << SPIS_CONFIG_ORDER_Pos)
#define SPIS_CONFIG_ORDER_MsbFirst (0x0UL)
#define SPIS_CONFIG_ORDER_LsbFirst (0x1UL)

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
#define TEMP_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: TEMP_TASKS_STOP */
/* Description: Stop temperature measurement */

/* Bit 0 : Stop temperature measurement */
#define TEMP_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TEMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TEMP_TASKS_STOP_TASKS_STOP_Pos)
#define TEMP_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: TEMP_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define TEMP_SUBSCRIBE_START_EN_Pos (31UL)
#define TEMP_SUBSCRIBE_START_EN_Msk (0x1UL << TEMP_SUBSCRIBE_START_EN_Pos)
#define TEMP_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define TEMP_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define TEMP_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define TEMP_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << TEMP_SUBSCRIBE_START_CHIDX_Pos)

/* Register: TEMP_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define TEMP_SUBSCRIBE_STOP_EN_Pos (31UL)
#define TEMP_SUBSCRIBE_STOP_EN_Msk (0x1UL << TEMP_SUBSCRIBE_STOP_EN_Pos)
#define TEMP_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define TEMP_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define TEMP_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define TEMP_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << TEMP_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: TEMP_EVENTS_DATARDY */
/* Description: Temperature measurement complete, data ready */

/* Bit 0 : Temperature measurement complete, data ready */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos (0UL)
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Msk (0x1UL << TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos)
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_NotGenerated (0x0UL)
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Generated (0x1UL)

/* Register: TEMP_PUBLISH_DATARDY */
/* Description: Publish configuration for event DATARDY */

/* Bit 31 :   */
#define TEMP_PUBLISH_DATARDY_EN_Pos (31UL)
#define TEMP_PUBLISH_DATARDY_EN_Msk (0x1UL << TEMP_PUBLISH_DATARDY_EN_Pos)
#define TEMP_PUBLISH_DATARDY_EN_Disabled (0x0UL)
#define TEMP_PUBLISH_DATARDY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event DATARDY will publish to */
#define TEMP_PUBLISH_DATARDY_CHIDX_Pos (0UL)
#define TEMP_PUBLISH_DATARDY_CHIDX_Msk (0xFFUL << TEMP_PUBLISH_DATARDY_CHIDX_Pos)

/* Register: TEMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event DATARDY */
#define TEMP_INTENSET_DATARDY_Pos (0UL)
#define TEMP_INTENSET_DATARDY_Msk (0x1UL << TEMP_INTENSET_DATARDY_Pos)
#define TEMP_INTENSET_DATARDY_Disabled (0x0UL)
#define TEMP_INTENSET_DATARDY_Enabled (0x1UL)
#define TEMP_INTENSET_DATARDY_Set (0x1UL)

/* Register: TEMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event DATARDY */
#define TEMP_INTENCLR_DATARDY_Pos (0UL)
#define TEMP_INTENCLR_DATARDY_Msk (0x1UL << TEMP_INTENCLR_DATARDY_Pos)
#define TEMP_INTENCLR_DATARDY_Disabled (0x0UL)
#define TEMP_INTENCLR_DATARDY_Enabled (0x1UL)
#define TEMP_INTENCLR_DATARDY_Clear (0x1UL)

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

/* Bits 11..0 : y-intercept of first piecewise linear function */
#define TEMP_B0_B0_Pos (0UL)
#define TEMP_B0_B0_Msk (0xFFFUL << TEMP_B0_B0_Pos)

/* Register: TEMP_B1 */
/* Description: y-intercept of second piecewise linear function */

/* Bits 11..0 : y-intercept of second piecewise linear function */
#define TEMP_B1_B1_Pos (0UL)
#define TEMP_B1_B1_Msk (0xFFFUL << TEMP_B1_B1_Pos)

/* Register: TEMP_B2 */
/* Description: y-intercept of third piecewise linear function */

/* Bits 11..0 : y-intercept of third piecewise linear function */
#define TEMP_B2_B2_Pos (0UL)
#define TEMP_B2_B2_Msk (0xFFFUL << TEMP_B2_B2_Pos)

/* Register: TEMP_B3 */
/* Description: y-intercept of fourth piecewise linear function */

/* Bits 11..0 : y-intercept of fourth piecewise linear function */
#define TEMP_B3_B3_Pos (0UL)
#define TEMP_B3_B3_Msk (0xFFFUL << TEMP_B3_B3_Pos)

/* Register: TEMP_B4 */
/* Description: y-intercept of fifth piecewise linear function */

/* Bits 11..0 : y-intercept of fifth piecewise linear function */
#define TEMP_B4_B4_Pos (0UL)
#define TEMP_B4_B4_Msk (0xFFFUL << TEMP_B4_B4_Pos)

/* Register: TEMP_B5 */
/* Description: y-intercept of sixth piecewise linear function */

/* Bits 11..0 : y-intercept of sixth piecewise linear function */
#define TEMP_B5_B5_Pos (0UL)
#define TEMP_B5_B5_Msk (0xFFFUL << TEMP_B5_B5_Pos)

/* Register: TEMP_T0 */
/* Description: Endpoint of first piecewise linear function */

/* Bits 7..0 : Endpoint of first piecewise linear function */
#define TEMP_T0_T0_Pos (0UL)
#define TEMP_T0_T0_Msk (0xFFUL << TEMP_T0_T0_Pos)

/* Register: TEMP_T1 */
/* Description: Endpoint of second piecewise linear function */

/* Bits 7..0 : Endpoint of second piecewise linear function */
#define TEMP_T1_T1_Pos (0UL)
#define TEMP_T1_T1_Msk (0xFFUL << TEMP_T1_T1_Pos)

/* Register: TEMP_T2 */
/* Description: Endpoint of third piecewise linear function */

/* Bits 7..0 : Endpoint of third piecewise linear function */
#define TEMP_T2_T2_Pos (0UL)
#define TEMP_T2_T2_Msk (0xFFUL << TEMP_T2_T2_Pos)

/* Register: TEMP_T3 */
/* Description: Endpoint of fourth piecewise linear function */

/* Bits 7..0 : Endpoint of fourth piecewise linear function */
#define TEMP_T3_T3_Pos (0UL)
#define TEMP_T3_T3_Msk (0xFFUL << TEMP_T3_T3_Pos)

/* Register: TEMP_T4 */
/* Description: Endpoint of fifth piecewise linear function */

/* Bits 7..0 : Endpoint of fifth piecewise linear function */
#define TEMP_T4_T4_Pos (0UL)
#define TEMP_T4_T4_Msk (0xFFUL << TEMP_T4_T4_Pos)


/* Peripheral: TIMER */
/* Description: Timer/Counter 0 */

/* Register: TIMER_TASKS_START */
/* Description: Start Timer */

/* Bit 0 : Start Timer */
#define TIMER_TASKS_START_TASKS_START_Pos (0UL)
#define TIMER_TASKS_START_TASKS_START_Msk (0x1UL << TIMER_TASKS_START_TASKS_START_Pos)
#define TIMER_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: TIMER_TASKS_STOP */
/* Description: Stop Timer */

/* Bit 0 : Stop Timer */
#define TIMER_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TIMER_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TIMER_TASKS_STOP_TASKS_STOP_Pos)
#define TIMER_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: TIMER_TASKS_COUNT */
/* Description: Increment Timer (Counter mode only) */

/* Bit 0 : Increment Timer (Counter mode only) */
#define TIMER_TASKS_COUNT_TASKS_COUNT_Pos (0UL)
#define TIMER_TASKS_COUNT_TASKS_COUNT_Msk (0x1UL << TIMER_TASKS_COUNT_TASKS_COUNT_Pos)
#define TIMER_TASKS_COUNT_TASKS_COUNT_Trigger (0x1UL)

/* Register: TIMER_TASKS_CLEAR */
/* Description: Clear time */

/* Bit 0 : Clear time */
#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Pos (0UL)
#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Msk (0x1UL << TIMER_TASKS_CLEAR_TASKS_CLEAR_Pos)
#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Trigger (0x1UL)

/* Register: TIMER_TASKS_SHUTDOWN */
/* Description: Deprecated register - Shut down timer */

/* Bit 0 : Deprecated field -  Shut down timer */
#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos (0UL)
#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Msk (0x1UL << TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos)
#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Trigger (0x1UL)

/* Register: TIMER_TASKS_CAPTURE */
/* Description: Description collection: Capture Timer value to CC[n] register */

/* Bit 0 : Capture Timer value to CC[n] register */
#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Pos (0UL)
#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Msk (0x1UL << TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Pos)
#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Trigger (0x1UL)

/* Register: TIMER_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define TIMER_SUBSCRIBE_START_EN_Pos (31UL)
#define TIMER_SUBSCRIBE_START_EN_Msk (0x1UL << TIMER_SUBSCRIBE_START_EN_Pos)
#define TIMER_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define TIMER_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define TIMER_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define TIMER_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << TIMER_SUBSCRIBE_START_CHIDX_Pos)

/* Register: TIMER_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define TIMER_SUBSCRIBE_STOP_EN_Pos (31UL)
#define TIMER_SUBSCRIBE_STOP_EN_Msk (0x1UL << TIMER_SUBSCRIBE_STOP_EN_Pos)
#define TIMER_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define TIMER_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define TIMER_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define TIMER_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << TIMER_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: TIMER_SUBSCRIBE_COUNT */
/* Description: Subscribe configuration for task COUNT */

/* Bit 31 :   */
#define TIMER_SUBSCRIBE_COUNT_EN_Pos (31UL)
#define TIMER_SUBSCRIBE_COUNT_EN_Msk (0x1UL << TIMER_SUBSCRIBE_COUNT_EN_Pos)
#define TIMER_SUBSCRIBE_COUNT_EN_Disabled (0x0UL)
#define TIMER_SUBSCRIBE_COUNT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task COUNT will subscribe to */
#define TIMER_SUBSCRIBE_COUNT_CHIDX_Pos (0UL)
#define TIMER_SUBSCRIBE_COUNT_CHIDX_Msk (0xFFUL << TIMER_SUBSCRIBE_COUNT_CHIDX_Pos)

/* Register: TIMER_SUBSCRIBE_CLEAR */
/* Description: Subscribe configuration for task CLEAR */

/* Bit 31 :   */
#define TIMER_SUBSCRIBE_CLEAR_EN_Pos (31UL)
#define TIMER_SUBSCRIBE_CLEAR_EN_Msk (0x1UL << TIMER_SUBSCRIBE_CLEAR_EN_Pos)
#define TIMER_SUBSCRIBE_CLEAR_EN_Disabled (0x0UL)
#define TIMER_SUBSCRIBE_CLEAR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task CLEAR will subscribe to */
#define TIMER_SUBSCRIBE_CLEAR_CHIDX_Pos (0UL)
#define TIMER_SUBSCRIBE_CLEAR_CHIDX_Msk (0xFFUL << TIMER_SUBSCRIBE_CLEAR_CHIDX_Pos)

/* Register: TIMER_SUBSCRIBE_SHUTDOWN */
/* Description: Deprecated register - Subscribe configuration for task SHUTDOWN */

/* Bit 31 :   */
#define TIMER_SUBSCRIBE_SHUTDOWN_EN_Pos (31UL)
#define TIMER_SUBSCRIBE_SHUTDOWN_EN_Msk (0x1UL << TIMER_SUBSCRIBE_SHUTDOWN_EN_Pos)
#define TIMER_SUBSCRIBE_SHUTDOWN_EN_Disabled (0x0UL)
#define TIMER_SUBSCRIBE_SHUTDOWN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task SHUTDOWN will subscribe to */
#define TIMER_SUBSCRIBE_SHUTDOWN_CHIDX_Pos (0UL)
#define TIMER_SUBSCRIBE_SHUTDOWN_CHIDX_Msk (0xFFUL << TIMER_SUBSCRIBE_SHUTDOWN_CHIDX_Pos)

/* Register: TIMER_SUBSCRIBE_CAPTURE */
/* Description: Description collection: Subscribe configuration for task CAPTURE[n] */

/* Bit 31 :   */
#define TIMER_SUBSCRIBE_CAPTURE_EN_Pos (31UL)
#define TIMER_SUBSCRIBE_CAPTURE_EN_Msk (0x1UL << TIMER_SUBSCRIBE_CAPTURE_EN_Pos)
#define TIMER_SUBSCRIBE_CAPTURE_EN_Disabled (0x0UL)
#define TIMER_SUBSCRIBE_CAPTURE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task CAPTURE[n] will subscribe to */
#define TIMER_SUBSCRIBE_CAPTURE_CHIDX_Pos (0UL)
#define TIMER_SUBSCRIBE_CAPTURE_CHIDX_Msk (0xFFUL << TIMER_SUBSCRIBE_CAPTURE_CHIDX_Pos)

/* Register: TIMER_EVENTS_COMPARE */
/* Description: Description collection: Compare event on CC[n] match */

/* Bit 0 : Compare event on CC[n] match */
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos (0UL)
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Msk (0x1UL << TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos)
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_NotGenerated (0x0UL)
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Generated (0x1UL)

/* Register: TIMER_PUBLISH_COMPARE */
/* Description: Description collection: Publish configuration for event COMPARE[n] */

/* Bit 31 :   */
#define TIMER_PUBLISH_COMPARE_EN_Pos (31UL)
#define TIMER_PUBLISH_COMPARE_EN_Msk (0x1UL << TIMER_PUBLISH_COMPARE_EN_Pos)
#define TIMER_PUBLISH_COMPARE_EN_Disabled (0x0UL)
#define TIMER_PUBLISH_COMPARE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event COMPARE[n] will publish to */
#define TIMER_PUBLISH_COMPARE_CHIDX_Pos (0UL)
#define TIMER_PUBLISH_COMPARE_CHIDX_Msk (0xFFUL << TIMER_PUBLISH_COMPARE_CHIDX_Pos)

/* Register: TIMER_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 23 : Shortcut between event COMPARE[7] and task STOP */
#define TIMER_SHORTS_COMPARE7_STOP_Pos (23UL)
#define TIMER_SHORTS_COMPARE7_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE7_STOP_Pos)
#define TIMER_SHORTS_COMPARE7_STOP_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE7_STOP_Enabled (0x1UL)

/* Bit 22 : Shortcut between event COMPARE[6] and task STOP */
#define TIMER_SHORTS_COMPARE6_STOP_Pos (22UL)
#define TIMER_SHORTS_COMPARE6_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE6_STOP_Pos)
#define TIMER_SHORTS_COMPARE6_STOP_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE6_STOP_Enabled (0x1UL)

/* Bit 21 : Shortcut between event COMPARE[5] and task STOP */
#define TIMER_SHORTS_COMPARE5_STOP_Pos (21UL)
#define TIMER_SHORTS_COMPARE5_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE5_STOP_Pos)
#define TIMER_SHORTS_COMPARE5_STOP_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE5_STOP_Enabled (0x1UL)

/* Bit 20 : Shortcut between event COMPARE[4] and task STOP */
#define TIMER_SHORTS_COMPARE4_STOP_Pos (20UL)
#define TIMER_SHORTS_COMPARE4_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE4_STOP_Pos)
#define TIMER_SHORTS_COMPARE4_STOP_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE4_STOP_Enabled (0x1UL)

/* Bit 19 : Shortcut between event COMPARE[3] and task STOP */
#define TIMER_SHORTS_COMPARE3_STOP_Pos (19UL)
#define TIMER_SHORTS_COMPARE3_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE3_STOP_Pos)
#define TIMER_SHORTS_COMPARE3_STOP_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE3_STOP_Enabled (0x1UL)

/* Bit 18 : Shortcut between event COMPARE[2] and task STOP */
#define TIMER_SHORTS_COMPARE2_STOP_Pos (18UL)
#define TIMER_SHORTS_COMPARE2_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE2_STOP_Pos)
#define TIMER_SHORTS_COMPARE2_STOP_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE2_STOP_Enabled (0x1UL)

/* Bit 17 : Shortcut between event COMPARE[1] and task STOP */
#define TIMER_SHORTS_COMPARE1_STOP_Pos (17UL)
#define TIMER_SHORTS_COMPARE1_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE1_STOP_Pos)
#define TIMER_SHORTS_COMPARE1_STOP_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE1_STOP_Enabled (0x1UL)

/* Bit 16 : Shortcut between event COMPARE[0] and task STOP */
#define TIMER_SHORTS_COMPARE0_STOP_Pos (16UL)
#define TIMER_SHORTS_COMPARE0_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE0_STOP_Pos)
#define TIMER_SHORTS_COMPARE0_STOP_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE0_STOP_Enabled (0x1UL)

/* Bit 7 : Shortcut between event COMPARE[7] and task CLEAR */
#define TIMER_SHORTS_COMPARE7_CLEAR_Pos (7UL)
#define TIMER_SHORTS_COMPARE7_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE7_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE7_CLEAR_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE7_CLEAR_Enabled (0x1UL)

/* Bit 6 : Shortcut between event COMPARE[6] and task CLEAR */
#define TIMER_SHORTS_COMPARE6_CLEAR_Pos (6UL)
#define TIMER_SHORTS_COMPARE6_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE6_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE6_CLEAR_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE6_CLEAR_Enabled (0x1UL)

/* Bit 5 : Shortcut between event COMPARE[5] and task CLEAR */
#define TIMER_SHORTS_COMPARE5_CLEAR_Pos (5UL)
#define TIMER_SHORTS_COMPARE5_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE5_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE5_CLEAR_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE5_CLEAR_Enabled (0x1UL)

/* Bit 4 : Shortcut between event COMPARE[4] and task CLEAR */
#define TIMER_SHORTS_COMPARE4_CLEAR_Pos (4UL)
#define TIMER_SHORTS_COMPARE4_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE4_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE4_CLEAR_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE4_CLEAR_Enabled (0x1UL)

/* Bit 3 : Shortcut between event COMPARE[3] and task CLEAR */
#define TIMER_SHORTS_COMPARE3_CLEAR_Pos (3UL)
#define TIMER_SHORTS_COMPARE3_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE3_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE3_CLEAR_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE3_CLEAR_Enabled (0x1UL)

/* Bit 2 : Shortcut between event COMPARE[2] and task CLEAR */
#define TIMER_SHORTS_COMPARE2_CLEAR_Pos (2UL)
#define TIMER_SHORTS_COMPARE2_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE2_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE2_CLEAR_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE2_CLEAR_Enabled (0x1UL)

/* Bit 1 : Shortcut between event COMPARE[1] and task CLEAR */
#define TIMER_SHORTS_COMPARE1_CLEAR_Pos (1UL)
#define TIMER_SHORTS_COMPARE1_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE1_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE1_CLEAR_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE1_CLEAR_Enabled (0x1UL)

/* Bit 0 : Shortcut between event COMPARE[0] and task CLEAR */
#define TIMER_SHORTS_COMPARE0_CLEAR_Pos (0UL)
#define TIMER_SHORTS_COMPARE0_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE0_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE0_CLEAR_Disabled (0x0UL)
#define TIMER_SHORTS_COMPARE0_CLEAR_Enabled (0x1UL)

/* Register: TIMER_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 23 : Enable or disable interrupt for event COMPARE[7] */
#define TIMER_INTEN_COMPARE7_Pos (23UL)
#define TIMER_INTEN_COMPARE7_Msk (0x1UL << TIMER_INTEN_COMPARE7_Pos)
#define TIMER_INTEN_COMPARE7_Disabled (0x0UL)
#define TIMER_INTEN_COMPARE7_Enabled (0x1UL)

/* Bit 22 : Enable or disable interrupt for event COMPARE[6] */
#define TIMER_INTEN_COMPARE6_Pos (22UL)
#define TIMER_INTEN_COMPARE6_Msk (0x1UL << TIMER_INTEN_COMPARE6_Pos)
#define TIMER_INTEN_COMPARE6_Disabled (0x0UL)
#define TIMER_INTEN_COMPARE6_Enabled (0x1UL)

/* Bit 21 : Enable or disable interrupt for event COMPARE[5] */
#define TIMER_INTEN_COMPARE5_Pos (21UL)
#define TIMER_INTEN_COMPARE5_Msk (0x1UL << TIMER_INTEN_COMPARE5_Pos)
#define TIMER_INTEN_COMPARE5_Disabled (0x0UL)
#define TIMER_INTEN_COMPARE5_Enabled (0x1UL)

/* Bit 20 : Enable or disable interrupt for event COMPARE[4] */
#define TIMER_INTEN_COMPARE4_Pos (20UL)
#define TIMER_INTEN_COMPARE4_Msk (0x1UL << TIMER_INTEN_COMPARE4_Pos)
#define TIMER_INTEN_COMPARE4_Disabled (0x0UL)
#define TIMER_INTEN_COMPARE4_Enabled (0x1UL)

/* Bit 19 : Enable or disable interrupt for event COMPARE[3] */
#define TIMER_INTEN_COMPARE3_Pos (19UL)
#define TIMER_INTEN_COMPARE3_Msk (0x1UL << TIMER_INTEN_COMPARE3_Pos)
#define TIMER_INTEN_COMPARE3_Disabled (0x0UL)
#define TIMER_INTEN_COMPARE3_Enabled (0x1UL)

/* Bit 18 : Enable or disable interrupt for event COMPARE[2] */
#define TIMER_INTEN_COMPARE2_Pos (18UL)
#define TIMER_INTEN_COMPARE2_Msk (0x1UL << TIMER_INTEN_COMPARE2_Pos)
#define TIMER_INTEN_COMPARE2_Disabled (0x0UL)
#define TIMER_INTEN_COMPARE2_Enabled (0x1UL)

/* Bit 17 : Enable or disable interrupt for event COMPARE[1] */
#define TIMER_INTEN_COMPARE1_Pos (17UL)
#define TIMER_INTEN_COMPARE1_Msk (0x1UL << TIMER_INTEN_COMPARE1_Pos)
#define TIMER_INTEN_COMPARE1_Disabled (0x0UL)
#define TIMER_INTEN_COMPARE1_Enabled (0x1UL)

/* Bit 16 : Enable or disable interrupt for event COMPARE[0] */
#define TIMER_INTEN_COMPARE0_Pos (16UL)
#define TIMER_INTEN_COMPARE0_Msk (0x1UL << TIMER_INTEN_COMPARE0_Pos)
#define TIMER_INTEN_COMPARE0_Disabled (0x0UL)
#define TIMER_INTEN_COMPARE0_Enabled (0x1UL)

/* Register: TIMER_INTENSET */
/* Description: Enable interrupt */

/* Bit 23 : Write '1' to enable interrupt for event COMPARE[7] */
#define TIMER_INTENSET_COMPARE7_Pos (23UL)
#define TIMER_INTENSET_COMPARE7_Msk (0x1UL << TIMER_INTENSET_COMPARE7_Pos)
#define TIMER_INTENSET_COMPARE7_Disabled (0x0UL)
#define TIMER_INTENSET_COMPARE7_Enabled (0x1UL)
#define TIMER_INTENSET_COMPARE7_Set (0x1UL)

/* Bit 22 : Write '1' to enable interrupt for event COMPARE[6] */
#define TIMER_INTENSET_COMPARE6_Pos (22UL)
#define TIMER_INTENSET_COMPARE6_Msk (0x1UL << TIMER_INTENSET_COMPARE6_Pos)
#define TIMER_INTENSET_COMPARE6_Disabled (0x0UL)
#define TIMER_INTENSET_COMPARE6_Enabled (0x1UL)
#define TIMER_INTENSET_COMPARE6_Set (0x1UL)

/* Bit 21 : Write '1' to enable interrupt for event COMPARE[5] */
#define TIMER_INTENSET_COMPARE5_Pos (21UL)
#define TIMER_INTENSET_COMPARE5_Msk (0x1UL << TIMER_INTENSET_COMPARE5_Pos)
#define TIMER_INTENSET_COMPARE5_Disabled (0x0UL)
#define TIMER_INTENSET_COMPARE5_Enabled (0x1UL)
#define TIMER_INTENSET_COMPARE5_Set (0x1UL)

/* Bit 20 : Write '1' to enable interrupt for event COMPARE[4] */
#define TIMER_INTENSET_COMPARE4_Pos (20UL)
#define TIMER_INTENSET_COMPARE4_Msk (0x1UL << TIMER_INTENSET_COMPARE4_Pos)
#define TIMER_INTENSET_COMPARE4_Disabled (0x0UL)
#define TIMER_INTENSET_COMPARE4_Enabled (0x1UL)
#define TIMER_INTENSET_COMPARE4_Set (0x1UL)

/* Bit 19 : Write '1' to enable interrupt for event COMPARE[3] */
#define TIMER_INTENSET_COMPARE3_Pos (19UL)
#define TIMER_INTENSET_COMPARE3_Msk (0x1UL << TIMER_INTENSET_COMPARE3_Pos)
#define TIMER_INTENSET_COMPARE3_Disabled (0x0UL)
#define TIMER_INTENSET_COMPARE3_Enabled (0x1UL)
#define TIMER_INTENSET_COMPARE3_Set (0x1UL)

/* Bit 18 : Write '1' to enable interrupt for event COMPARE[2] */
#define TIMER_INTENSET_COMPARE2_Pos (18UL)
#define TIMER_INTENSET_COMPARE2_Msk (0x1UL << TIMER_INTENSET_COMPARE2_Pos)
#define TIMER_INTENSET_COMPARE2_Disabled (0x0UL)
#define TIMER_INTENSET_COMPARE2_Enabled (0x1UL)
#define TIMER_INTENSET_COMPARE2_Set (0x1UL)

/* Bit 17 : Write '1' to enable interrupt for event COMPARE[1] */
#define TIMER_INTENSET_COMPARE1_Pos (17UL)
#define TIMER_INTENSET_COMPARE1_Msk (0x1UL << TIMER_INTENSET_COMPARE1_Pos)
#define TIMER_INTENSET_COMPARE1_Disabled (0x0UL)
#define TIMER_INTENSET_COMPARE1_Enabled (0x1UL)
#define TIMER_INTENSET_COMPARE1_Set (0x1UL)

/* Bit 16 : Write '1' to enable interrupt for event COMPARE[0] */
#define TIMER_INTENSET_COMPARE0_Pos (16UL)
#define TIMER_INTENSET_COMPARE0_Msk (0x1UL << TIMER_INTENSET_COMPARE0_Pos)
#define TIMER_INTENSET_COMPARE0_Disabled (0x0UL)
#define TIMER_INTENSET_COMPARE0_Enabled (0x1UL)
#define TIMER_INTENSET_COMPARE0_Set (0x1UL)

/* Register: TIMER_INTENCLR */
/* Description: Disable interrupt */

/* Bit 23 : Write '1' to disable interrupt for event COMPARE[7] */
#define TIMER_INTENCLR_COMPARE7_Pos (23UL)
#define TIMER_INTENCLR_COMPARE7_Msk (0x1UL << TIMER_INTENCLR_COMPARE7_Pos)
#define TIMER_INTENCLR_COMPARE7_Disabled (0x0UL)
#define TIMER_INTENCLR_COMPARE7_Enabled (0x1UL)
#define TIMER_INTENCLR_COMPARE7_Clear (0x1UL)

/* Bit 22 : Write '1' to disable interrupt for event COMPARE[6] */
#define TIMER_INTENCLR_COMPARE6_Pos (22UL)
#define TIMER_INTENCLR_COMPARE6_Msk (0x1UL << TIMER_INTENCLR_COMPARE6_Pos)
#define TIMER_INTENCLR_COMPARE6_Disabled (0x0UL)
#define TIMER_INTENCLR_COMPARE6_Enabled (0x1UL)
#define TIMER_INTENCLR_COMPARE6_Clear (0x1UL)

/* Bit 21 : Write '1' to disable interrupt for event COMPARE[5] */
#define TIMER_INTENCLR_COMPARE5_Pos (21UL)
#define TIMER_INTENCLR_COMPARE5_Msk (0x1UL << TIMER_INTENCLR_COMPARE5_Pos)
#define TIMER_INTENCLR_COMPARE5_Disabled (0x0UL)
#define TIMER_INTENCLR_COMPARE5_Enabled (0x1UL)
#define TIMER_INTENCLR_COMPARE5_Clear (0x1UL)

/* Bit 20 : Write '1' to disable interrupt for event COMPARE[4] */
#define TIMER_INTENCLR_COMPARE4_Pos (20UL)
#define TIMER_INTENCLR_COMPARE4_Msk (0x1UL << TIMER_INTENCLR_COMPARE4_Pos)
#define TIMER_INTENCLR_COMPARE4_Disabled (0x0UL)
#define TIMER_INTENCLR_COMPARE4_Enabled (0x1UL)
#define TIMER_INTENCLR_COMPARE4_Clear (0x1UL)

/* Bit 19 : Write '1' to disable interrupt for event COMPARE[3] */
#define TIMER_INTENCLR_COMPARE3_Pos (19UL)
#define TIMER_INTENCLR_COMPARE3_Msk (0x1UL << TIMER_INTENCLR_COMPARE3_Pos)
#define TIMER_INTENCLR_COMPARE3_Disabled (0x0UL)
#define TIMER_INTENCLR_COMPARE3_Enabled (0x1UL)
#define TIMER_INTENCLR_COMPARE3_Clear (0x1UL)

/* Bit 18 : Write '1' to disable interrupt for event COMPARE[2] */
#define TIMER_INTENCLR_COMPARE2_Pos (18UL)
#define TIMER_INTENCLR_COMPARE2_Msk (0x1UL << TIMER_INTENCLR_COMPARE2_Pos)
#define TIMER_INTENCLR_COMPARE2_Disabled (0x0UL)
#define TIMER_INTENCLR_COMPARE2_Enabled (0x1UL)
#define TIMER_INTENCLR_COMPARE2_Clear (0x1UL)

/* Bit 17 : Write '1' to disable interrupt for event COMPARE[1] */
#define TIMER_INTENCLR_COMPARE1_Pos (17UL)
#define TIMER_INTENCLR_COMPARE1_Msk (0x1UL << TIMER_INTENCLR_COMPARE1_Pos)
#define TIMER_INTENCLR_COMPARE1_Disabled (0x0UL)
#define TIMER_INTENCLR_COMPARE1_Enabled (0x1UL)
#define TIMER_INTENCLR_COMPARE1_Clear (0x1UL)

/* Bit 16 : Write '1' to disable interrupt for event COMPARE[0] */
#define TIMER_INTENCLR_COMPARE0_Pos (16UL)
#define TIMER_INTENCLR_COMPARE0_Msk (0x1UL << TIMER_INTENCLR_COMPARE0_Pos)
#define TIMER_INTENCLR_COMPARE0_Disabled (0x0UL)
#define TIMER_INTENCLR_COMPARE0_Enabled (0x1UL)
#define TIMER_INTENCLR_COMPARE0_Clear (0x1UL)

/* Register: TIMER_MODE */
/* Description: Timer mode selection */

/* Bits 1..0 : Timer mode */
#define TIMER_MODE_MODE_Pos (0UL)
#define TIMER_MODE_MODE_Msk (0x3UL << TIMER_MODE_MODE_Pos)
#define TIMER_MODE_MODE_Timer (0x0UL)
#define TIMER_MODE_MODE_Counter (0x1UL)
#define TIMER_MODE_MODE_LowPowerCounter (0x2UL)

/* Register: TIMER_BITMODE */
/* Description: Configure the number of bits used by the TIMER */

/* Bits 1..0 : Timer bit width */
#define TIMER_BITMODE_BITMODE_Pos (0UL)
#define TIMER_BITMODE_BITMODE_Msk (0x3UL << TIMER_BITMODE_BITMODE_Pos)
#define TIMER_BITMODE_BITMODE_16Bit (0x0UL)
#define TIMER_BITMODE_BITMODE_08Bit (0x1UL)
#define TIMER_BITMODE_BITMODE_24Bit (0x2UL)
#define TIMER_BITMODE_BITMODE_32Bit (0x3UL)

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

/* Register: TIMER_ONESHOTEN */
/* Description: Description collection: Enable one-shot operation for Capture/Compare channel n */

/* Bit 0 : Enable one-shot operation */
#define TIMER_ONESHOTEN_ONESHOTEN_Pos (0UL)
#define TIMER_ONESHOTEN_ONESHOTEN_Msk (0x1UL << TIMER_ONESHOTEN_ONESHOTEN_Pos)
#define TIMER_ONESHOTEN_ONESHOTEN_Disable (0x0UL)
#define TIMER_ONESHOTEN_ONESHOTEN_Enable (0x1UL)


/* Peripheral: TWIM */
/* Description: I2C compatible Two-Wire Master Interface with EasyDMA */

/* Register: TWIM_TASKS_STARTRX */
/* Description: Start TWI receive sequence */

/* Bit 0 : Start TWI receive sequence */
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL)
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << TWIM_TASKS_STARTRX_TASKS_STARTRX_Pos)
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Trigger (0x1UL)

/* Register: TWIM_TASKS_STARTTX */
/* Description: Start TWI transmit sequence */

/* Bit 0 : Start TWI transmit sequence */
#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL)
#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << TWIM_TASKS_STARTTX_TASKS_STARTTX_Pos)
#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Trigger (0x1UL)

/* Register: TWIM_TASKS_STOP */
/* Description: Stop TWI transaction. Must be issued while the TWI master is not suspended. */

/* Bit 0 : Stop TWI transaction. Must be issued while the TWI master is not suspended. */
#define TWIM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TWIM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TWIM_TASKS_STOP_TASKS_STOP_Pos)
#define TWIM_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: TWIM_TASKS_SUSPEND */
/* Description: Suspend TWI transaction */

/* Bit 0 : Suspend TWI transaction */
#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL)
#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos)
#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (0x1UL)

/* Register: TWIM_TASKS_RESUME */
/* Description: Resume TWI transaction */

/* Bit 0 : Resume TWI transaction */
#define TWIM_TASKS_RESUME_TASKS_RESUME_Pos (0UL)
#define TWIM_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << TWIM_TASKS_RESUME_TASKS_RESUME_Pos)
#define TWIM_TASKS_RESUME_TASKS_RESUME_Trigger (0x1UL)

/* Register: TWIM_SUBSCRIBE_STARTRX */
/* Description: Subscribe configuration for task STARTRX */

/* Bit 31 :   */
#define TWIM_SUBSCRIBE_STARTRX_EN_Pos (31UL)
#define TWIM_SUBSCRIBE_STARTRX_EN_Msk (0x1UL << TWIM_SUBSCRIBE_STARTRX_EN_Pos)
#define TWIM_SUBSCRIBE_STARTRX_EN_Disabled (0x0UL)
#define TWIM_SUBSCRIBE_STARTRX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STARTRX will subscribe to */
#define TWIM_SUBSCRIBE_STARTRX_CHIDX_Pos (0UL)
#define TWIM_SUBSCRIBE_STARTRX_CHIDX_Msk (0xFFUL << TWIM_SUBSCRIBE_STARTRX_CHIDX_Pos)

/* Register: TWIM_SUBSCRIBE_STARTTX */
/* Description: Subscribe configuration for task STARTTX */

/* Bit 31 :   */
#define TWIM_SUBSCRIBE_STARTTX_EN_Pos (31UL)
#define TWIM_SUBSCRIBE_STARTTX_EN_Msk (0x1UL << TWIM_SUBSCRIBE_STARTTX_EN_Pos)
#define TWIM_SUBSCRIBE_STARTTX_EN_Disabled (0x0UL)
#define TWIM_SUBSCRIBE_STARTTX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STARTTX will subscribe to */
#define TWIM_SUBSCRIBE_STARTTX_CHIDX_Pos (0UL)
#define TWIM_SUBSCRIBE_STARTTX_CHIDX_Msk (0xFFUL << TWIM_SUBSCRIBE_STARTTX_CHIDX_Pos)

/* Register: TWIM_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define TWIM_SUBSCRIBE_STOP_EN_Pos (31UL)
#define TWIM_SUBSCRIBE_STOP_EN_Msk (0x1UL << TWIM_SUBSCRIBE_STOP_EN_Pos)
#define TWIM_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define TWIM_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define TWIM_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define TWIM_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << TWIM_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: TWIM_SUBSCRIBE_SUSPEND */
/* Description: Subscribe configuration for task SUSPEND */

/* Bit 31 :   */
#define TWIM_SUBSCRIBE_SUSPEND_EN_Pos (31UL)
#define TWIM_SUBSCRIBE_SUSPEND_EN_Msk (0x1UL << TWIM_SUBSCRIBE_SUSPEND_EN_Pos)
#define TWIM_SUBSCRIBE_SUSPEND_EN_Disabled (0x0UL)
#define TWIM_SUBSCRIBE_SUSPEND_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task SUSPEND will subscribe to */
#define TWIM_SUBSCRIBE_SUSPEND_CHIDX_Pos (0UL)
#define TWIM_SUBSCRIBE_SUSPEND_CHIDX_Msk (0xFFUL << TWIM_SUBSCRIBE_SUSPEND_CHIDX_Pos)

/* Register: TWIM_SUBSCRIBE_RESUME */
/* Description: Subscribe configuration for task RESUME */

/* Bit 31 :   */
#define TWIM_SUBSCRIBE_RESUME_EN_Pos (31UL)
#define TWIM_SUBSCRIBE_RESUME_EN_Msk (0x1UL << TWIM_SUBSCRIBE_RESUME_EN_Pos)
#define TWIM_SUBSCRIBE_RESUME_EN_Disabled (0x0UL)
#define TWIM_SUBSCRIBE_RESUME_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task RESUME will subscribe to */
#define TWIM_SUBSCRIBE_RESUME_CHIDX_Pos (0UL)
#define TWIM_SUBSCRIBE_RESUME_CHIDX_Msk (0xFFUL << TWIM_SUBSCRIBE_RESUME_CHIDX_Pos)

/* Register: TWIM_EVENTS_STOPPED */
/* Description: TWI stopped */

/* Bit 0 : TWI stopped */
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0x0UL)
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (0x1UL)

/* Register: TWIM_EVENTS_ERROR */
/* Description: TWI error */

/* Bit 0 : TWI error */
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << TWIM_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0x0UL)
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Generated (0x1UL)

/* Register: TWIM_EVENTS_SUSPENDED */
/* Description: SUSPEND task has been issued, TWI traffic is now suspended. */

/* Bit 0 : SUSPEND task has been issued, TWI traffic is now suspended. */
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos (0UL)
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Msk (0x1UL << TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos)
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_NotGenerated (0x0UL)
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Generated (0x1UL)

/* Register: TWIM_EVENTS_RXSTARTED */
/* Description: Receive sequence started */

/* Bit 0 : Receive sequence started */
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL)
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos)
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_NotGenerated (0x0UL)
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Generated (0x1UL)

/* Register: TWIM_EVENTS_TXSTARTED */
/* Description: Transmit sequence started */

/* Bit 0 : Transmit sequence started */
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL)
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos)
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_NotGenerated (0x0UL)
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Generated (0x1UL)

/* Register: TWIM_EVENTS_LASTRX */
/* Description: Byte boundary, starting to receive the last byte */

/* Bit 0 : Byte boundary, starting to receive the last byte */
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Pos (0UL)
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Msk (0x1UL << TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Pos)
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_NotGenerated (0x0UL)
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Generated (0x1UL)

/* Register: TWIM_EVENTS_LASTTX */
/* Description: Byte boundary, starting to transmit the last byte */

/* Bit 0 : Byte boundary, starting to transmit the last byte */
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Pos (0UL)
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Msk (0x1UL << TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Pos)
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_NotGenerated (0x0UL)
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Generated (0x1UL)

/* Register: TWIM_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define TWIM_PUBLISH_STOPPED_EN_Pos (31UL)
#define TWIM_PUBLISH_STOPPED_EN_Msk (0x1UL << TWIM_PUBLISH_STOPPED_EN_Pos)
#define TWIM_PUBLISH_STOPPED_EN_Disabled (0x0UL)
#define TWIM_PUBLISH_STOPPED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STOPPED will publish to */
#define TWIM_PUBLISH_STOPPED_CHIDX_Pos (0UL)
#define TWIM_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << TWIM_PUBLISH_STOPPED_CHIDX_Pos)

/* Register: TWIM_PUBLISH_ERROR */
/* Description: Publish configuration for event ERROR */

/* Bit 31 :   */
#define TWIM_PUBLISH_ERROR_EN_Pos (31UL)
#define TWIM_PUBLISH_ERROR_EN_Msk (0x1UL << TWIM_PUBLISH_ERROR_EN_Pos)
#define TWIM_PUBLISH_ERROR_EN_Disabled (0x0UL)
#define TWIM_PUBLISH_ERROR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ERROR will publish to */
#define TWIM_PUBLISH_ERROR_CHIDX_Pos (0UL)
#define TWIM_PUBLISH_ERROR_CHIDX_Msk (0xFFUL << TWIM_PUBLISH_ERROR_CHIDX_Pos)

/* Register: TWIM_PUBLISH_SUSPENDED */
/* Description: Publish configuration for event SUSPENDED */

/* Bit 31 :   */
#define TWIM_PUBLISH_SUSPENDED_EN_Pos (31UL)
#define TWIM_PUBLISH_SUSPENDED_EN_Msk (0x1UL << TWIM_PUBLISH_SUSPENDED_EN_Pos)
#define TWIM_PUBLISH_SUSPENDED_EN_Disabled (0x0UL)
#define TWIM_PUBLISH_SUSPENDED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event SUSPENDED will publish to */
#define TWIM_PUBLISH_SUSPENDED_CHIDX_Pos (0UL)
#define TWIM_PUBLISH_SUSPENDED_CHIDX_Msk (0xFFUL << TWIM_PUBLISH_SUSPENDED_CHIDX_Pos)

/* Register: TWIM_PUBLISH_RXSTARTED */
/* Description: Publish configuration for event RXSTARTED */

/* Bit 31 :   */
#define TWIM_PUBLISH_RXSTARTED_EN_Pos (31UL)
#define TWIM_PUBLISH_RXSTARTED_EN_Msk (0x1UL << TWIM_PUBLISH_RXSTARTED_EN_Pos)
#define TWIM_PUBLISH_RXSTARTED_EN_Disabled (0x0UL)
#define TWIM_PUBLISH_RXSTARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RXSTARTED will publish to */
#define TWIM_PUBLISH_RXSTARTED_CHIDX_Pos (0UL)
#define TWIM_PUBLISH_RXSTARTED_CHIDX_Msk (0xFFUL << TWIM_PUBLISH_RXSTARTED_CHIDX_Pos)

/* Register: TWIM_PUBLISH_TXSTARTED */
/* Description: Publish configuration for event TXSTARTED */

/* Bit 31 :   */
#define TWIM_PUBLISH_TXSTARTED_EN_Pos (31UL)
#define TWIM_PUBLISH_TXSTARTED_EN_Msk (0x1UL << TWIM_PUBLISH_TXSTARTED_EN_Pos)
#define TWIM_PUBLISH_TXSTARTED_EN_Disabled (0x0UL)
#define TWIM_PUBLISH_TXSTARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event TXSTARTED will publish to */
#define TWIM_PUBLISH_TXSTARTED_CHIDX_Pos (0UL)
#define TWIM_PUBLISH_TXSTARTED_CHIDX_Msk (0xFFUL << TWIM_PUBLISH_TXSTARTED_CHIDX_Pos)

/* Register: TWIM_PUBLISH_LASTRX */
/* Description: Publish configuration for event LASTRX */

/* Bit 31 :   */
#define TWIM_PUBLISH_LASTRX_EN_Pos (31UL)
#define TWIM_PUBLISH_LASTRX_EN_Msk (0x1UL << TWIM_PUBLISH_LASTRX_EN_Pos)
#define TWIM_PUBLISH_LASTRX_EN_Disabled (0x0UL)
#define TWIM_PUBLISH_LASTRX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event LASTRX will publish to */
#define TWIM_PUBLISH_LASTRX_CHIDX_Pos (0UL)
#define TWIM_PUBLISH_LASTRX_CHIDX_Msk (0xFFUL << TWIM_PUBLISH_LASTRX_CHIDX_Pos)

/* Register: TWIM_PUBLISH_LASTTX */
/* Description: Publish configuration for event LASTTX */

/* Bit 31 :   */
#define TWIM_PUBLISH_LASTTX_EN_Pos (31UL)
#define TWIM_PUBLISH_LASTTX_EN_Msk (0x1UL << TWIM_PUBLISH_LASTTX_EN_Pos)
#define TWIM_PUBLISH_LASTTX_EN_Disabled (0x0UL)
#define TWIM_PUBLISH_LASTTX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event LASTTX will publish to */
#define TWIM_PUBLISH_LASTTX_CHIDX_Pos (0UL)
#define TWIM_PUBLISH_LASTTX_CHIDX_Msk (0xFFUL << TWIM_PUBLISH_LASTTX_CHIDX_Pos)

/* Register: TWIM_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 12 : Shortcut between event LASTRX and task STOP */
#define TWIM_SHORTS_LASTRX_STOP_Pos (12UL)
#define TWIM_SHORTS_LASTRX_STOP_Msk (0x1UL << TWIM_SHORTS_LASTRX_STOP_Pos)
#define TWIM_SHORTS_LASTRX_STOP_Disabled (0x0UL)
#define TWIM_SHORTS_LASTRX_STOP_Enabled (0x1UL)

/* Bit 10 : Shortcut between event LASTRX and task STARTTX */
#define TWIM_SHORTS_LASTRX_STARTTX_Pos (10UL)
#define TWIM_SHORTS_LASTRX_STARTTX_Msk (0x1UL << TWIM_SHORTS_LASTRX_STARTTX_Pos)
#define TWIM_SHORTS_LASTRX_STARTTX_Disabled (0x0UL)
#define TWIM_SHORTS_LASTRX_STARTTX_Enabled (0x1UL)

/* Bit 9 : Shortcut between event LASTTX and task STOP */
#define TWIM_SHORTS_LASTTX_STOP_Pos (9UL)
#define TWIM_SHORTS_LASTTX_STOP_Msk (0x1UL << TWIM_SHORTS_LASTTX_STOP_Pos)
#define TWIM_SHORTS_LASTTX_STOP_Disabled (0x0UL)
#define TWIM_SHORTS_LASTTX_STOP_Enabled (0x1UL)

/* Bit 8 : Shortcut between event LASTTX and task SUSPEND */
#define TWIM_SHORTS_LASTTX_SUSPEND_Pos (8UL)
#define TWIM_SHORTS_LASTTX_SUSPEND_Msk (0x1UL << TWIM_SHORTS_LASTTX_SUSPEND_Pos)
#define TWIM_SHORTS_LASTTX_SUSPEND_Disabled (0x0UL)
#define TWIM_SHORTS_LASTTX_SUSPEND_Enabled (0x1UL)

/* Bit 7 : Shortcut between event LASTTX and task STARTRX */
#define TWIM_SHORTS_LASTTX_STARTRX_Pos (7UL)
#define TWIM_SHORTS_LASTTX_STARTRX_Msk (0x1UL << TWIM_SHORTS_LASTTX_STARTRX_Pos)
#define TWIM_SHORTS_LASTTX_STARTRX_Disabled (0x0UL)
#define TWIM_SHORTS_LASTTX_STARTRX_Enabled (0x1UL)

/* Register: TWIM_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 24 : Enable or disable interrupt for event LASTTX */
#define TWIM_INTEN_LASTTX_Pos (24UL)
#define TWIM_INTEN_LASTTX_Msk (0x1UL << TWIM_INTEN_LASTTX_Pos)
#define TWIM_INTEN_LASTTX_Disabled (0x0UL)
#define TWIM_INTEN_LASTTX_Enabled (0x1UL)

/* Bit 23 : Enable or disable interrupt for event LASTRX */
#define TWIM_INTEN_LASTRX_Pos (23UL)
#define TWIM_INTEN_LASTRX_Msk (0x1UL << TWIM_INTEN_LASTRX_Pos)
#define TWIM_INTEN_LASTRX_Disabled (0x0UL)
#define TWIM_INTEN_LASTRX_Enabled (0x1UL)

/* Bit 20 : Enable or disable interrupt for event TXSTARTED */
#define TWIM_INTEN_TXSTARTED_Pos (20UL)
#define TWIM_INTEN_TXSTARTED_Msk (0x1UL << TWIM_INTEN_TXSTARTED_Pos)
#define TWIM_INTEN_TXSTARTED_Disabled (0x0UL)
#define TWIM_INTEN_TXSTARTED_Enabled (0x1UL)

/* Bit 19 : Enable or disable interrupt for event RXSTARTED */
#define TWIM_INTEN_RXSTARTED_Pos (19UL)
#define TWIM_INTEN_RXSTARTED_Msk (0x1UL << TWIM_INTEN_RXSTARTED_Pos)
#define TWIM_INTEN_RXSTARTED_Disabled (0x0UL)
#define TWIM_INTEN_RXSTARTED_Enabled (0x1UL)

/* Bit 18 : Enable or disable interrupt for event SUSPENDED */
#define TWIM_INTEN_SUSPENDED_Pos (18UL)
#define TWIM_INTEN_SUSPENDED_Msk (0x1UL << TWIM_INTEN_SUSPENDED_Pos)
#define TWIM_INTEN_SUSPENDED_Disabled (0x0UL)
#define TWIM_INTEN_SUSPENDED_Enabled (0x1UL)

/* Bit 9 : Enable or disable interrupt for event ERROR */
#define TWIM_INTEN_ERROR_Pos (9UL)
#define TWIM_INTEN_ERROR_Msk (0x1UL << TWIM_INTEN_ERROR_Pos)
#define TWIM_INTEN_ERROR_Disabled (0x0UL)
#define TWIM_INTEN_ERROR_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event STOPPED */
#define TWIM_INTEN_STOPPED_Pos (1UL)
#define TWIM_INTEN_STOPPED_Msk (0x1UL << TWIM_INTEN_STOPPED_Pos)
#define TWIM_INTEN_STOPPED_Disabled (0x0UL)
#define TWIM_INTEN_STOPPED_Enabled (0x1UL)

/* Register: TWIM_INTENSET */
/* Description: Enable interrupt */

/* Bit 24 : Write '1' to enable interrupt for event LASTTX */
#define TWIM_INTENSET_LASTTX_Pos (24UL)
#define TWIM_INTENSET_LASTTX_Msk (0x1UL << TWIM_INTENSET_LASTTX_Pos)
#define TWIM_INTENSET_LASTTX_Disabled (0x0UL)
#define TWIM_INTENSET_LASTTX_Enabled (0x1UL)
#define TWIM_INTENSET_LASTTX_Set (0x1UL)

/* Bit 23 : Write '1' to enable interrupt for event LASTRX */
#define TWIM_INTENSET_LASTRX_Pos (23UL)
#define TWIM_INTENSET_LASTRX_Msk (0x1UL << TWIM_INTENSET_LASTRX_Pos)
#define TWIM_INTENSET_LASTRX_Disabled (0x0UL)
#define TWIM_INTENSET_LASTRX_Enabled (0x1UL)
#define TWIM_INTENSET_LASTRX_Set (0x1UL)

/* Bit 20 : Write '1' to enable interrupt for event TXSTARTED */
#define TWIM_INTENSET_TXSTARTED_Pos (20UL)
#define TWIM_INTENSET_TXSTARTED_Msk (0x1UL << TWIM_INTENSET_TXSTARTED_Pos)
#define TWIM_INTENSET_TXSTARTED_Disabled (0x0UL)
#define TWIM_INTENSET_TXSTARTED_Enabled (0x1UL)
#define TWIM_INTENSET_TXSTARTED_Set (0x1UL)

/* Bit 19 : Write '1' to enable interrupt for event RXSTARTED */
#define TWIM_INTENSET_RXSTARTED_Pos (19UL)
#define TWIM_INTENSET_RXSTARTED_Msk (0x1UL << TWIM_INTENSET_RXSTARTED_Pos)
#define TWIM_INTENSET_RXSTARTED_Disabled (0x0UL)
#define TWIM_INTENSET_RXSTARTED_Enabled (0x1UL)
#define TWIM_INTENSET_RXSTARTED_Set (0x1UL)

/* Bit 18 : Write '1' to enable interrupt for event SUSPENDED */
#define TWIM_INTENSET_SUSPENDED_Pos (18UL)
#define TWIM_INTENSET_SUSPENDED_Msk (0x1UL << TWIM_INTENSET_SUSPENDED_Pos)
#define TWIM_INTENSET_SUSPENDED_Disabled (0x0UL)
#define TWIM_INTENSET_SUSPENDED_Enabled (0x1UL)
#define TWIM_INTENSET_SUSPENDED_Set (0x1UL)

/* Bit 9 : Write '1' to enable interrupt for event ERROR */
#define TWIM_INTENSET_ERROR_Pos (9UL)
#define TWIM_INTENSET_ERROR_Msk (0x1UL << TWIM_INTENSET_ERROR_Pos)
#define TWIM_INTENSET_ERROR_Disabled (0x0UL)
#define TWIM_INTENSET_ERROR_Enabled (0x1UL)
#define TWIM_INTENSET_ERROR_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define TWIM_INTENSET_STOPPED_Pos (1UL)
#define TWIM_INTENSET_STOPPED_Msk (0x1UL << TWIM_INTENSET_STOPPED_Pos)
#define TWIM_INTENSET_STOPPED_Disabled (0x0UL)
#define TWIM_INTENSET_STOPPED_Enabled (0x1UL)
#define TWIM_INTENSET_STOPPED_Set (0x1UL)

/* Register: TWIM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 24 : Write '1' to disable interrupt for event LASTTX */
#define TWIM_INTENCLR_LASTTX_Pos (24UL)
#define TWIM_INTENCLR_LASTTX_Msk (0x1UL << TWIM_INTENCLR_LASTTX_Pos)
#define TWIM_INTENCLR_LASTTX_Disabled (0x0UL)
#define TWIM_INTENCLR_LASTTX_Enabled (0x1UL)
#define TWIM_INTENCLR_LASTTX_Clear (0x1UL)

/* Bit 23 : Write '1' to disable interrupt for event LASTRX */
#define TWIM_INTENCLR_LASTRX_Pos (23UL)
#define TWIM_INTENCLR_LASTRX_Msk (0x1UL << TWIM_INTENCLR_LASTRX_Pos)
#define TWIM_INTENCLR_LASTRX_Disabled (0x0UL)
#define TWIM_INTENCLR_LASTRX_Enabled (0x1UL)
#define TWIM_INTENCLR_LASTRX_Clear (0x1UL)

/* Bit 20 : Write '1' to disable interrupt for event TXSTARTED */
#define TWIM_INTENCLR_TXSTARTED_Pos (20UL)
#define TWIM_INTENCLR_TXSTARTED_Msk (0x1UL << TWIM_INTENCLR_TXSTARTED_Pos)
#define TWIM_INTENCLR_TXSTARTED_Disabled (0x0UL)
#define TWIM_INTENCLR_TXSTARTED_Enabled (0x1UL)
#define TWIM_INTENCLR_TXSTARTED_Clear (0x1UL)

/* Bit 19 : Write '1' to disable interrupt for event RXSTARTED */
#define TWIM_INTENCLR_RXSTARTED_Pos (19UL)
#define TWIM_INTENCLR_RXSTARTED_Msk (0x1UL << TWIM_INTENCLR_RXSTARTED_Pos)
#define TWIM_INTENCLR_RXSTARTED_Disabled (0x0UL)
#define TWIM_INTENCLR_RXSTARTED_Enabled (0x1UL)
#define TWIM_INTENCLR_RXSTARTED_Clear (0x1UL)

/* Bit 18 : Write '1' to disable interrupt for event SUSPENDED */
#define TWIM_INTENCLR_SUSPENDED_Pos (18UL)
#define TWIM_INTENCLR_SUSPENDED_Msk (0x1UL << TWIM_INTENCLR_SUSPENDED_Pos)
#define TWIM_INTENCLR_SUSPENDED_Disabled (0x0UL)
#define TWIM_INTENCLR_SUSPENDED_Enabled (0x1UL)
#define TWIM_INTENCLR_SUSPENDED_Clear (0x1UL)

/* Bit 9 : Write '1' to disable interrupt for event ERROR */
#define TWIM_INTENCLR_ERROR_Pos (9UL)
#define TWIM_INTENCLR_ERROR_Msk (0x1UL << TWIM_INTENCLR_ERROR_Pos)
#define TWIM_INTENCLR_ERROR_Disabled (0x0UL)
#define TWIM_INTENCLR_ERROR_Enabled (0x1UL)
#define TWIM_INTENCLR_ERROR_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define TWIM_INTENCLR_STOPPED_Pos (1UL)
#define TWIM_INTENCLR_STOPPED_Msk (0x1UL << TWIM_INTENCLR_STOPPED_Pos)
#define TWIM_INTENCLR_STOPPED_Disabled (0x0UL)
#define TWIM_INTENCLR_STOPPED_Enabled (0x1UL)
#define TWIM_INTENCLR_STOPPED_Clear (0x1UL)

/* Register: TWIM_ERRORSRC */
/* Description: Error source */

/* Bit 2 : NACK received after sending a data byte (write '1' to clear) */
#define TWIM_ERRORSRC_DNACK_Pos (2UL)
#define TWIM_ERRORSRC_DNACK_Msk (0x1UL << TWIM_ERRORSRC_DNACK_Pos)
#define TWIM_ERRORSRC_DNACK_NotReceived (0x0UL)
#define TWIM_ERRORSRC_DNACK_Received (0x1UL)

/* Bit 1 : NACK received after sending the address (write '1' to clear) */
#define TWIM_ERRORSRC_ANACK_Pos (1UL)
#define TWIM_ERRORSRC_ANACK_Msk (0x1UL << TWIM_ERRORSRC_ANACK_Pos)
#define TWIM_ERRORSRC_ANACK_NotReceived (0x0UL)
#define TWIM_ERRORSRC_ANACK_Received (0x1UL)

/* Bit 0 : Overrun error */
#define TWIM_ERRORSRC_OVERRUN_Pos (0UL)
#define TWIM_ERRORSRC_OVERRUN_Msk (0x1UL << TWIM_ERRORSRC_OVERRUN_Pos)
#define TWIM_ERRORSRC_OVERRUN_NotReceived (0x0UL)
#define TWIM_ERRORSRC_OVERRUN_Received (0x1UL)

/* Register: TWIM_ENABLE */
/* Description: Enable TWIM */

/* Bits 3..0 : Enable or disable TWIM */
#define TWIM_ENABLE_ENABLE_Pos (0UL)
#define TWIM_ENABLE_ENABLE_Msk (0xFUL << TWIM_ENABLE_ENABLE_Pos)
#define TWIM_ENABLE_ENABLE_Disabled (0x0UL)
#define TWIM_ENABLE_ENABLE_Enabled (0x6UL)

/* Register: TWIM_PSEL_SCL */
/* Description: Pin select for SCL signal */

/* Bit 31 : Connection */
#define TWIM_PSEL_SCL_CONNECT_Pos (31UL)
#define TWIM_PSEL_SCL_CONNECT_Msk (0x1UL << TWIM_PSEL_SCL_CONNECT_Pos)
#define TWIM_PSEL_SCL_CONNECT_Connected (0x0UL)
#define TWIM_PSEL_SCL_CONNECT_Disconnected (0x1UL)

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
#define TWIM_PSEL_SDA_CONNECT_Connected (0x0UL)
#define TWIM_PSEL_SDA_CONNECT_Disconnected (0x1UL)

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
#define TWIM_FREQUENCY_FREQUENCY_K1000 (0x0FF00000UL)

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
#define TWIM_RXD_LIST_LIST_Disabled (0x0UL)
#define TWIM_RXD_LIST_LIST_ArrayList (0x1UL)

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
#define TWIM_TXD_LIST_LIST_Disabled (0x0UL)
#define TWIM_TXD_LIST_LIST_ArrayList (0x1UL)

/* Register: TWIM_ADDRESS */
/* Description: Address used in the TWI transfer */

/* Bits 6..0 : Address used in the TWI transfer */
#define TWIM_ADDRESS_ADDRESS_Pos (0UL)
#define TWIM_ADDRESS_ADDRESS_Msk (0x7FUL << TWIM_ADDRESS_ADDRESS_Pos)


/* Peripheral: TWIS */
/* Description: I2C compatible Two-Wire Slave Interface with EasyDMA */

/* Register: TWIS_TASKS_STOP */
/* Description: Stop TWI transaction */

/* Bit 0 : Stop TWI transaction */
#define TWIS_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TWIS_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TWIS_TASKS_STOP_TASKS_STOP_Pos)
#define TWIS_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: TWIS_TASKS_SUSPEND */
/* Description: Suspend TWI transaction */

/* Bit 0 : Suspend TWI transaction */
#define TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL)
#define TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Pos)
#define TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (0x1UL)

/* Register: TWIS_TASKS_RESUME */
/* Description: Resume TWI transaction */

/* Bit 0 : Resume TWI transaction */
#define TWIS_TASKS_RESUME_TASKS_RESUME_Pos (0UL)
#define TWIS_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << TWIS_TASKS_RESUME_TASKS_RESUME_Pos)
#define TWIS_TASKS_RESUME_TASKS_RESUME_Trigger (0x1UL)

/* Register: TWIS_TASKS_PREPARERX */
/* Description: Prepare the TWI slave to respond to a write command */

/* Bit 0 : Prepare the TWI slave to respond to a write command */
#define TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Pos (0UL)
#define TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Msk (0x1UL << TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Pos)
#define TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Trigger (0x1UL)

/* Register: TWIS_TASKS_PREPARETX */
/* Description: Prepare the TWI slave to respond to a read command */

/* Bit 0 : Prepare the TWI slave to respond to a read command */
#define TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Pos (0UL)
#define TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Msk (0x1UL << TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Pos)
#define TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Trigger (0x1UL)

/* Register: TWIS_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define TWIS_SUBSCRIBE_STOP_EN_Pos (31UL)
#define TWIS_SUBSCRIBE_STOP_EN_Msk (0x1UL << TWIS_SUBSCRIBE_STOP_EN_Pos)
#define TWIS_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define TWIS_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define TWIS_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define TWIS_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << TWIS_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: TWIS_SUBSCRIBE_SUSPEND */
/* Description: Subscribe configuration for task SUSPEND */

/* Bit 31 :   */
#define TWIS_SUBSCRIBE_SUSPEND_EN_Pos (31UL)
#define TWIS_SUBSCRIBE_SUSPEND_EN_Msk (0x1UL << TWIS_SUBSCRIBE_SUSPEND_EN_Pos)
#define TWIS_SUBSCRIBE_SUSPEND_EN_Disabled (0x0UL)
#define TWIS_SUBSCRIBE_SUSPEND_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task SUSPEND will subscribe to */
#define TWIS_SUBSCRIBE_SUSPEND_CHIDX_Pos (0UL)
#define TWIS_SUBSCRIBE_SUSPEND_CHIDX_Msk (0xFFUL << TWIS_SUBSCRIBE_SUSPEND_CHIDX_Pos)

/* Register: TWIS_SUBSCRIBE_RESUME */
/* Description: Subscribe configuration for task RESUME */

/* Bit 31 :   */
#define TWIS_SUBSCRIBE_RESUME_EN_Pos (31UL)
#define TWIS_SUBSCRIBE_RESUME_EN_Msk (0x1UL << TWIS_SUBSCRIBE_RESUME_EN_Pos)
#define TWIS_SUBSCRIBE_RESUME_EN_Disabled (0x0UL)
#define TWIS_SUBSCRIBE_RESUME_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task RESUME will subscribe to */
#define TWIS_SUBSCRIBE_RESUME_CHIDX_Pos (0UL)
#define TWIS_SUBSCRIBE_RESUME_CHIDX_Msk (0xFFUL << TWIS_SUBSCRIBE_RESUME_CHIDX_Pos)

/* Register: TWIS_SUBSCRIBE_PREPARERX */
/* Description: Subscribe configuration for task PREPARERX */

/* Bit 31 :   */
#define TWIS_SUBSCRIBE_PREPARERX_EN_Pos (31UL)
#define TWIS_SUBSCRIBE_PREPARERX_EN_Msk (0x1UL << TWIS_SUBSCRIBE_PREPARERX_EN_Pos)
#define TWIS_SUBSCRIBE_PREPARERX_EN_Disabled (0x0UL)
#define TWIS_SUBSCRIBE_PREPARERX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task PREPARERX will subscribe to */
#define TWIS_SUBSCRIBE_PREPARERX_CHIDX_Pos (0UL)
#define TWIS_SUBSCRIBE_PREPARERX_CHIDX_Msk (0xFFUL << TWIS_SUBSCRIBE_PREPARERX_CHIDX_Pos)

/* Register: TWIS_SUBSCRIBE_PREPARETX */
/* Description: Subscribe configuration for task PREPARETX */

/* Bit 31 :   */
#define TWIS_SUBSCRIBE_PREPARETX_EN_Pos (31UL)
#define TWIS_SUBSCRIBE_PREPARETX_EN_Msk (0x1UL << TWIS_SUBSCRIBE_PREPARETX_EN_Pos)
#define TWIS_SUBSCRIBE_PREPARETX_EN_Disabled (0x0UL)
#define TWIS_SUBSCRIBE_PREPARETX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task PREPARETX will subscribe to */
#define TWIS_SUBSCRIBE_PREPARETX_CHIDX_Pos (0UL)
#define TWIS_SUBSCRIBE_PREPARETX_CHIDX_Msk (0xFFUL << TWIS_SUBSCRIBE_PREPARETX_CHIDX_Pos)

/* Register: TWIS_EVENTS_STOPPED */
/* Description: TWI stopped */

/* Bit 0 : TWI stopped */
#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0x0UL)
#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Generated (0x1UL)

/* Register: TWIS_EVENTS_ERROR */
/* Description: TWI error */

/* Bit 0 : TWI error */
#define TWIS_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define TWIS_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << TWIS_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define TWIS_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0x0UL)
#define TWIS_EVENTS_ERROR_EVENTS_ERROR_Generated (0x1UL)

/* Register: TWIS_EVENTS_RXSTARTED */
/* Description: Receive sequence started */

/* Bit 0 : Receive sequence started */
#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL)
#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos)
#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_NotGenerated (0x0UL)
#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Generated (0x1UL)

/* Register: TWIS_EVENTS_TXSTARTED */
/* Description: Transmit sequence started */

/* Bit 0 : Transmit sequence started */
#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL)
#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos)
#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_NotGenerated (0x0UL)
#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Generated (0x1UL)

/* Register: TWIS_EVENTS_WRITE */
/* Description: Write command received */

/* Bit 0 : Write command received */
#define TWIS_EVENTS_WRITE_EVENTS_WRITE_Pos (0UL)
#define TWIS_EVENTS_WRITE_EVENTS_WRITE_Msk (0x1UL << TWIS_EVENTS_WRITE_EVENTS_WRITE_Pos)
#define TWIS_EVENTS_WRITE_EVENTS_WRITE_NotGenerated (0x0UL)
#define TWIS_EVENTS_WRITE_EVENTS_WRITE_Generated (0x1UL)

/* Register: TWIS_EVENTS_READ */
/* Description: Read command received */

/* Bit 0 : Read command received */
#define TWIS_EVENTS_READ_EVENTS_READ_Pos (0UL)
#define TWIS_EVENTS_READ_EVENTS_READ_Msk (0x1UL << TWIS_EVENTS_READ_EVENTS_READ_Pos)
#define TWIS_EVENTS_READ_EVENTS_READ_NotGenerated (0x0UL)
#define TWIS_EVENTS_READ_EVENTS_READ_Generated (0x1UL)

/* Register: TWIS_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define TWIS_PUBLISH_STOPPED_EN_Pos (31UL)
#define TWIS_PUBLISH_STOPPED_EN_Msk (0x1UL << TWIS_PUBLISH_STOPPED_EN_Pos)
#define TWIS_PUBLISH_STOPPED_EN_Disabled (0x0UL)
#define TWIS_PUBLISH_STOPPED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STOPPED will publish to */
#define TWIS_PUBLISH_STOPPED_CHIDX_Pos (0UL)
#define TWIS_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << TWIS_PUBLISH_STOPPED_CHIDX_Pos)

/* Register: TWIS_PUBLISH_ERROR */
/* Description: Publish configuration for event ERROR */

/* Bit 31 :   */
#define TWIS_PUBLISH_ERROR_EN_Pos (31UL)
#define TWIS_PUBLISH_ERROR_EN_Msk (0x1UL << TWIS_PUBLISH_ERROR_EN_Pos)
#define TWIS_PUBLISH_ERROR_EN_Disabled (0x0UL)
#define TWIS_PUBLISH_ERROR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ERROR will publish to */
#define TWIS_PUBLISH_ERROR_CHIDX_Pos (0UL)
#define TWIS_PUBLISH_ERROR_CHIDX_Msk (0xFFUL << TWIS_PUBLISH_ERROR_CHIDX_Pos)

/* Register: TWIS_PUBLISH_RXSTARTED */
/* Description: Publish configuration for event RXSTARTED */

/* Bit 31 :   */
#define TWIS_PUBLISH_RXSTARTED_EN_Pos (31UL)
#define TWIS_PUBLISH_RXSTARTED_EN_Msk (0x1UL << TWIS_PUBLISH_RXSTARTED_EN_Pos)
#define TWIS_PUBLISH_RXSTARTED_EN_Disabled (0x0UL)
#define TWIS_PUBLISH_RXSTARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RXSTARTED will publish to */
#define TWIS_PUBLISH_RXSTARTED_CHIDX_Pos (0UL)
#define TWIS_PUBLISH_RXSTARTED_CHIDX_Msk (0xFFUL << TWIS_PUBLISH_RXSTARTED_CHIDX_Pos)

/* Register: TWIS_PUBLISH_TXSTARTED */
/* Description: Publish configuration for event TXSTARTED */

/* Bit 31 :   */
#define TWIS_PUBLISH_TXSTARTED_EN_Pos (31UL)
#define TWIS_PUBLISH_TXSTARTED_EN_Msk (0x1UL << TWIS_PUBLISH_TXSTARTED_EN_Pos)
#define TWIS_PUBLISH_TXSTARTED_EN_Disabled (0x0UL)
#define TWIS_PUBLISH_TXSTARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event TXSTARTED will publish to */
#define TWIS_PUBLISH_TXSTARTED_CHIDX_Pos (0UL)
#define TWIS_PUBLISH_TXSTARTED_CHIDX_Msk (0xFFUL << TWIS_PUBLISH_TXSTARTED_CHIDX_Pos)

/* Register: TWIS_PUBLISH_WRITE */
/* Description: Publish configuration for event WRITE */

/* Bit 31 :   */
#define TWIS_PUBLISH_WRITE_EN_Pos (31UL)
#define TWIS_PUBLISH_WRITE_EN_Msk (0x1UL << TWIS_PUBLISH_WRITE_EN_Pos)
#define TWIS_PUBLISH_WRITE_EN_Disabled (0x0UL)
#define TWIS_PUBLISH_WRITE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event WRITE will publish to */
#define TWIS_PUBLISH_WRITE_CHIDX_Pos (0UL)
#define TWIS_PUBLISH_WRITE_CHIDX_Msk (0xFFUL << TWIS_PUBLISH_WRITE_CHIDX_Pos)

/* Register: TWIS_PUBLISH_READ */
/* Description: Publish configuration for event READ */

/* Bit 31 :   */
#define TWIS_PUBLISH_READ_EN_Pos (31UL)
#define TWIS_PUBLISH_READ_EN_Msk (0x1UL << TWIS_PUBLISH_READ_EN_Pos)
#define TWIS_PUBLISH_READ_EN_Disabled (0x0UL)
#define TWIS_PUBLISH_READ_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event READ will publish to */
#define TWIS_PUBLISH_READ_CHIDX_Pos (0UL)
#define TWIS_PUBLISH_READ_CHIDX_Msk (0xFFUL << TWIS_PUBLISH_READ_CHIDX_Pos)

/* Register: TWIS_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 14 : Shortcut between event READ and task SUSPEND */
#define TWIS_SHORTS_READ_SUSPEND_Pos (14UL)
#define TWIS_SHORTS_READ_SUSPEND_Msk (0x1UL << TWIS_SHORTS_READ_SUSPEND_Pos)
#define TWIS_SHORTS_READ_SUSPEND_Disabled (0x0UL)
#define TWIS_SHORTS_READ_SUSPEND_Enabled (0x1UL)

/* Bit 13 : Shortcut between event WRITE and task SUSPEND */
#define TWIS_SHORTS_WRITE_SUSPEND_Pos (13UL)
#define TWIS_SHORTS_WRITE_SUSPEND_Msk (0x1UL << TWIS_SHORTS_WRITE_SUSPEND_Pos)
#define TWIS_SHORTS_WRITE_SUSPEND_Disabled (0x0UL)
#define TWIS_SHORTS_WRITE_SUSPEND_Enabled (0x1UL)

/* Register: TWIS_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 26 : Enable or disable interrupt for event READ */
#define TWIS_INTEN_READ_Pos (26UL)
#define TWIS_INTEN_READ_Msk (0x1UL << TWIS_INTEN_READ_Pos)
#define TWIS_INTEN_READ_Disabled (0x0UL)
#define TWIS_INTEN_READ_Enabled (0x1UL)

/* Bit 25 : Enable or disable interrupt for event WRITE */
#define TWIS_INTEN_WRITE_Pos (25UL)
#define TWIS_INTEN_WRITE_Msk (0x1UL << TWIS_INTEN_WRITE_Pos)
#define TWIS_INTEN_WRITE_Disabled (0x0UL)
#define TWIS_INTEN_WRITE_Enabled (0x1UL)

/* Bit 20 : Enable or disable interrupt for event TXSTARTED */
#define TWIS_INTEN_TXSTARTED_Pos (20UL)
#define TWIS_INTEN_TXSTARTED_Msk (0x1UL << TWIS_INTEN_TXSTARTED_Pos)
#define TWIS_INTEN_TXSTARTED_Disabled (0x0UL)
#define TWIS_INTEN_TXSTARTED_Enabled (0x1UL)

/* Bit 19 : Enable or disable interrupt for event RXSTARTED */
#define TWIS_INTEN_RXSTARTED_Pos (19UL)
#define TWIS_INTEN_RXSTARTED_Msk (0x1UL << TWIS_INTEN_RXSTARTED_Pos)
#define TWIS_INTEN_RXSTARTED_Disabled (0x0UL)
#define TWIS_INTEN_RXSTARTED_Enabled (0x1UL)

/* Bit 9 : Enable or disable interrupt for event ERROR */
#define TWIS_INTEN_ERROR_Pos (9UL)
#define TWIS_INTEN_ERROR_Msk (0x1UL << TWIS_INTEN_ERROR_Pos)
#define TWIS_INTEN_ERROR_Disabled (0x0UL)
#define TWIS_INTEN_ERROR_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event STOPPED */
#define TWIS_INTEN_STOPPED_Pos (1UL)
#define TWIS_INTEN_STOPPED_Msk (0x1UL << TWIS_INTEN_STOPPED_Pos)
#define TWIS_INTEN_STOPPED_Disabled (0x0UL)
#define TWIS_INTEN_STOPPED_Enabled (0x1UL)

/* Register: TWIS_INTENSET */
/* Description: Enable interrupt */

/* Bit 26 : Write '1' to enable interrupt for event READ */
#define TWIS_INTENSET_READ_Pos (26UL)
#define TWIS_INTENSET_READ_Msk (0x1UL << TWIS_INTENSET_READ_Pos)
#define TWIS_INTENSET_READ_Disabled (0x0UL)
#define TWIS_INTENSET_READ_Enabled (0x1UL)
#define TWIS_INTENSET_READ_Set (0x1UL)

/* Bit 25 : Write '1' to enable interrupt for event WRITE */
#define TWIS_INTENSET_WRITE_Pos (25UL)
#define TWIS_INTENSET_WRITE_Msk (0x1UL << TWIS_INTENSET_WRITE_Pos)
#define TWIS_INTENSET_WRITE_Disabled (0x0UL)
#define TWIS_INTENSET_WRITE_Enabled (0x1UL)
#define TWIS_INTENSET_WRITE_Set (0x1UL)

/* Bit 20 : Write '1' to enable interrupt for event TXSTARTED */
#define TWIS_INTENSET_TXSTARTED_Pos (20UL)
#define TWIS_INTENSET_TXSTARTED_Msk (0x1UL << TWIS_INTENSET_TXSTARTED_Pos)
#define TWIS_INTENSET_TXSTARTED_Disabled (0x0UL)
#define TWIS_INTENSET_TXSTARTED_Enabled (0x1UL)
#define TWIS_INTENSET_TXSTARTED_Set (0x1UL)

/* Bit 19 : Write '1' to enable interrupt for event RXSTARTED */
#define TWIS_INTENSET_RXSTARTED_Pos (19UL)
#define TWIS_INTENSET_RXSTARTED_Msk (0x1UL << TWIS_INTENSET_RXSTARTED_Pos)
#define TWIS_INTENSET_RXSTARTED_Disabled (0x0UL)
#define TWIS_INTENSET_RXSTARTED_Enabled (0x1UL)
#define TWIS_INTENSET_RXSTARTED_Set (0x1UL)

/* Bit 9 : Write '1' to enable interrupt for event ERROR */
#define TWIS_INTENSET_ERROR_Pos (9UL)
#define TWIS_INTENSET_ERROR_Msk (0x1UL << TWIS_INTENSET_ERROR_Pos)
#define TWIS_INTENSET_ERROR_Disabled (0x0UL)
#define TWIS_INTENSET_ERROR_Enabled (0x1UL)
#define TWIS_INTENSET_ERROR_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define TWIS_INTENSET_STOPPED_Pos (1UL)
#define TWIS_INTENSET_STOPPED_Msk (0x1UL << TWIS_INTENSET_STOPPED_Pos)
#define TWIS_INTENSET_STOPPED_Disabled (0x0UL)
#define TWIS_INTENSET_STOPPED_Enabled (0x1UL)
#define TWIS_INTENSET_STOPPED_Set (0x1UL)

/* Register: TWIS_INTENCLR */
/* Description: Disable interrupt */

/* Bit 26 : Write '1' to disable interrupt for event READ */
#define TWIS_INTENCLR_READ_Pos (26UL)
#define TWIS_INTENCLR_READ_Msk (0x1UL << TWIS_INTENCLR_READ_Pos)
#define TWIS_INTENCLR_READ_Disabled (0x0UL)
#define TWIS_INTENCLR_READ_Enabled (0x1UL)
#define TWIS_INTENCLR_READ_Clear (0x1UL)

/* Bit 25 : Write '1' to disable interrupt for event WRITE */
#define TWIS_INTENCLR_WRITE_Pos (25UL)
#define TWIS_INTENCLR_WRITE_Msk (0x1UL << TWIS_INTENCLR_WRITE_Pos)
#define TWIS_INTENCLR_WRITE_Disabled (0x0UL)
#define TWIS_INTENCLR_WRITE_Enabled (0x1UL)
#define TWIS_INTENCLR_WRITE_Clear (0x1UL)

/* Bit 20 : Write '1' to disable interrupt for event TXSTARTED */
#define TWIS_INTENCLR_TXSTARTED_Pos (20UL)
#define TWIS_INTENCLR_TXSTARTED_Msk (0x1UL << TWIS_INTENCLR_TXSTARTED_Pos)
#define TWIS_INTENCLR_TXSTARTED_Disabled (0x0UL)
#define TWIS_INTENCLR_TXSTARTED_Enabled (0x1UL)
#define TWIS_INTENCLR_TXSTARTED_Clear (0x1UL)

/* Bit 19 : Write '1' to disable interrupt for event RXSTARTED */
#define TWIS_INTENCLR_RXSTARTED_Pos (19UL)
#define TWIS_INTENCLR_RXSTARTED_Msk (0x1UL << TWIS_INTENCLR_RXSTARTED_Pos)
#define TWIS_INTENCLR_RXSTARTED_Disabled (0x0UL)
#define TWIS_INTENCLR_RXSTARTED_Enabled (0x1UL)
#define TWIS_INTENCLR_RXSTARTED_Clear (0x1UL)

/* Bit 9 : Write '1' to disable interrupt for event ERROR */
#define TWIS_INTENCLR_ERROR_Pos (9UL)
#define TWIS_INTENCLR_ERROR_Msk (0x1UL << TWIS_INTENCLR_ERROR_Pos)
#define TWIS_INTENCLR_ERROR_Disabled (0x0UL)
#define TWIS_INTENCLR_ERROR_Enabled (0x1UL)
#define TWIS_INTENCLR_ERROR_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define TWIS_INTENCLR_STOPPED_Pos (1UL)
#define TWIS_INTENCLR_STOPPED_Msk (0x1UL << TWIS_INTENCLR_STOPPED_Pos)
#define TWIS_INTENCLR_STOPPED_Disabled (0x0UL)
#define TWIS_INTENCLR_STOPPED_Enabled (0x1UL)
#define TWIS_INTENCLR_STOPPED_Clear (0x1UL)

/* Register: TWIS_ERRORSRC */
/* Description: Error source */

/* Bit 3 : TX buffer over-read detected, and prevented */
#define TWIS_ERRORSRC_OVERREAD_Pos (3UL)
#define TWIS_ERRORSRC_OVERREAD_Msk (0x1UL << TWIS_ERRORSRC_OVERREAD_Pos)
#define TWIS_ERRORSRC_OVERREAD_NotDetected (0x0UL)
#define TWIS_ERRORSRC_OVERREAD_Detected (0x1UL)

/* Bit 2 : NACK sent after receiving a data byte */
#define TWIS_ERRORSRC_DNACK_Pos (2UL)
#define TWIS_ERRORSRC_DNACK_Msk (0x1UL << TWIS_ERRORSRC_DNACK_Pos)
#define TWIS_ERRORSRC_DNACK_NotReceived (0x0UL)
#define TWIS_ERRORSRC_DNACK_Received (0x1UL)

/* Bit 0 : RX buffer overflow detected, and prevented */
#define TWIS_ERRORSRC_OVERFLOW_Pos (0UL)
#define TWIS_ERRORSRC_OVERFLOW_Msk (0x1UL << TWIS_ERRORSRC_OVERFLOW_Pos)
#define TWIS_ERRORSRC_OVERFLOW_NotDetected (0x0UL)
#define TWIS_ERRORSRC_OVERFLOW_Detected (0x1UL)

/* Register: TWIS_MATCH */
/* Description: Status register indicating which address had a match */

/* Bit 0 : Indication of which address in ADDRESS that matched the incoming address */
#define TWIS_MATCH_MATCH_Pos (0UL)
#define TWIS_MATCH_MATCH_Msk (0x1UL << TWIS_MATCH_MATCH_Pos)

/* Register: TWIS_ENABLE */
/* Description: Enable TWIS */

/* Bits 3..0 : Enable or disable TWIS */
#define TWIS_ENABLE_ENABLE_Pos (0UL)
#define TWIS_ENABLE_ENABLE_Msk (0xFUL << TWIS_ENABLE_ENABLE_Pos)
#define TWIS_ENABLE_ENABLE_Disabled (0x0UL)
#define TWIS_ENABLE_ENABLE_Enabled (0x9UL)

/* Register: TWIS_PSEL_SCL */
/* Description: Pin select for SCL signal */

/* Bit 31 : Connection */
#define TWIS_PSEL_SCL_CONNECT_Pos (31UL)
#define TWIS_PSEL_SCL_CONNECT_Msk (0x1UL << TWIS_PSEL_SCL_CONNECT_Pos)
#define TWIS_PSEL_SCL_CONNECT_Connected (0x0UL)
#define TWIS_PSEL_SCL_CONNECT_Disconnected (0x1UL)

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
#define TWIS_PSEL_SDA_CONNECT_Connected (0x0UL)
#define TWIS_PSEL_SDA_CONNECT_Disconnected (0x1UL)

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
#define TWIS_RXD_LIST_LIST_Disabled (0x0UL)
#define TWIS_RXD_LIST_LIST_ArrayList (0x1UL)

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
#define TWIS_TXD_LIST_LIST_Disabled (0x0UL)
#define TWIS_TXD_LIST_LIST_ArrayList (0x1UL)

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
#define TWIS_CONFIG_ADDRESS1_Disabled (0x0UL)
#define TWIS_CONFIG_ADDRESS1_Enabled (0x1UL)

/* Bit 0 : Enable or disable address matching on ADDRESS[0] */
#define TWIS_CONFIG_ADDRESS0_Pos (0UL)
#define TWIS_CONFIG_ADDRESS0_Msk (0x1UL << TWIS_CONFIG_ADDRESS0_Pos)
#define TWIS_CONFIG_ADDRESS0_Disabled (0x0UL)
#define TWIS_CONFIG_ADDRESS0_Enabled (0x1UL)

/* Register: TWIS_ORC */
/* Description: Over-read character. Character sent out in case of an over-read of the transmit buffer. */

/* Bits 7..0 : Over-read character. Character sent out in case of an over-read of the transmit buffer. */
#define TWIS_ORC_ORC_Pos (0UL)
#define TWIS_ORC_ORC_Msk (0xFFUL << TWIS_ORC_ORC_Pos)


/* Peripheral: UARTE */
/* Description: UART with EasyDMA */

/* Register: UARTE_TASKS_STARTRX */
/* Description: Start UART receiver */

/* Bit 0 : Start UART receiver */
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL)
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << UARTE_TASKS_STARTRX_TASKS_STARTRX_Pos)
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Trigger (0x1UL)

/* Register: UARTE_TASKS_STOPRX */
/* Description: Stop UART receiver */

/* Bit 0 : Stop UART receiver */
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Pos (0UL)
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Msk (0x1UL << UARTE_TASKS_STOPRX_TASKS_STOPRX_Pos)
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Trigger (0x1UL)

/* Register: UARTE_TASKS_STARTTX */
/* Description: Start UART transmitter */

/* Bit 0 : Start UART transmitter */
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL)
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << UARTE_TASKS_STARTTX_TASKS_STARTTX_Pos)
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Trigger (0x1UL)

/* Register: UARTE_TASKS_STOPTX */
/* Description: Stop UART transmitter */

/* Bit 0 : Stop UART transmitter */
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Pos (0UL)
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Msk (0x1UL << UARTE_TASKS_STOPTX_TASKS_STOPTX_Pos)
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Trigger (0x1UL)

/* Register: UARTE_TASKS_FLUSHRX */
/* Description: Flush RX FIFO into RX buffer */

/* Bit 0 : Flush RX FIFO into RX buffer */
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Pos (0UL)
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Msk (0x1UL << UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Pos)
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Trigger (0x1UL)

/* Register: UARTE_SUBSCRIBE_STARTRX */
/* Description: Subscribe configuration for task STARTRX */

/* Bit 31 :   */
#define UARTE_SUBSCRIBE_STARTRX_EN_Pos (31UL)
#define UARTE_SUBSCRIBE_STARTRX_EN_Msk (0x1UL << UARTE_SUBSCRIBE_STARTRX_EN_Pos)
#define UARTE_SUBSCRIBE_STARTRX_EN_Disabled (0x0UL)
#define UARTE_SUBSCRIBE_STARTRX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STARTRX will subscribe to */
#define UARTE_SUBSCRIBE_STARTRX_CHIDX_Pos (0UL)
#define UARTE_SUBSCRIBE_STARTRX_CHIDX_Msk (0xFFUL << UARTE_SUBSCRIBE_STARTRX_CHIDX_Pos)

/* Register: UARTE_SUBSCRIBE_STOPRX */
/* Description: Subscribe configuration for task STOPRX */

/* Bit 31 :   */
#define UARTE_SUBSCRIBE_STOPRX_EN_Pos (31UL)
#define UARTE_SUBSCRIBE_STOPRX_EN_Msk (0x1UL << UARTE_SUBSCRIBE_STOPRX_EN_Pos)
#define UARTE_SUBSCRIBE_STOPRX_EN_Disabled (0x0UL)
#define UARTE_SUBSCRIBE_STOPRX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOPRX will subscribe to */
#define UARTE_SUBSCRIBE_STOPRX_CHIDX_Pos (0UL)
#define UARTE_SUBSCRIBE_STOPRX_CHIDX_Msk (0xFFUL << UARTE_SUBSCRIBE_STOPRX_CHIDX_Pos)

/* Register: UARTE_SUBSCRIBE_STARTTX */
/* Description: Subscribe configuration for task STARTTX */

/* Bit 31 :   */
#define UARTE_SUBSCRIBE_STARTTX_EN_Pos (31UL)
#define UARTE_SUBSCRIBE_STARTTX_EN_Msk (0x1UL << UARTE_SUBSCRIBE_STARTTX_EN_Pos)
#define UARTE_SUBSCRIBE_STARTTX_EN_Disabled (0x0UL)
#define UARTE_SUBSCRIBE_STARTTX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STARTTX will subscribe to */
#define UARTE_SUBSCRIBE_STARTTX_CHIDX_Pos (0UL)
#define UARTE_SUBSCRIBE_STARTTX_CHIDX_Msk (0xFFUL << UARTE_SUBSCRIBE_STARTTX_CHIDX_Pos)

/* Register: UARTE_SUBSCRIBE_STOPTX */
/* Description: Subscribe configuration for task STOPTX */

/* Bit 31 :   */
#define UARTE_SUBSCRIBE_STOPTX_EN_Pos (31UL)
#define UARTE_SUBSCRIBE_STOPTX_EN_Msk (0x1UL << UARTE_SUBSCRIBE_STOPTX_EN_Pos)
#define UARTE_SUBSCRIBE_STOPTX_EN_Disabled (0x0UL)
#define UARTE_SUBSCRIBE_STOPTX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOPTX will subscribe to */
#define UARTE_SUBSCRIBE_STOPTX_CHIDX_Pos (0UL)
#define UARTE_SUBSCRIBE_STOPTX_CHIDX_Msk (0xFFUL << UARTE_SUBSCRIBE_STOPTX_CHIDX_Pos)

/* Register: UARTE_SUBSCRIBE_FLUSHRX */
/* Description: Subscribe configuration for task FLUSHRX */

/* Bit 31 :   */
#define UARTE_SUBSCRIBE_FLUSHRX_EN_Pos (31UL)
#define UARTE_SUBSCRIBE_FLUSHRX_EN_Msk (0x1UL << UARTE_SUBSCRIBE_FLUSHRX_EN_Pos)
#define UARTE_SUBSCRIBE_FLUSHRX_EN_Disabled (0x0UL)
#define UARTE_SUBSCRIBE_FLUSHRX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task FLUSHRX will subscribe to */
#define UARTE_SUBSCRIBE_FLUSHRX_CHIDX_Pos (0UL)
#define UARTE_SUBSCRIBE_FLUSHRX_CHIDX_Msk (0xFFUL << UARTE_SUBSCRIBE_FLUSHRX_CHIDX_Pos)

/* Register: UARTE_EVENTS_CTS */
/* Description: CTS is activated (set low). Clear To Send. */

/* Bit 0 : CTS is activated (set low). Clear To Send. */
#define UARTE_EVENTS_CTS_EVENTS_CTS_Pos (0UL)
#define UARTE_EVENTS_CTS_EVENTS_CTS_Msk (0x1UL << UARTE_EVENTS_CTS_EVENTS_CTS_Pos)
#define UARTE_EVENTS_CTS_EVENTS_CTS_NotGenerated (0x0UL)
#define UARTE_EVENTS_CTS_EVENTS_CTS_Generated (0x1UL)

/* Register: UARTE_EVENTS_NCTS */
/* Description: CTS is deactivated (set high). Not Clear To Send. */

/* Bit 0 : CTS is deactivated (set high). Not Clear To Send. */
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Pos (0UL)
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Msk (0x1UL << UARTE_EVENTS_NCTS_EVENTS_NCTS_Pos)
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_NotGenerated (0x0UL)
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Generated (0x1UL)

/* Register: UARTE_EVENTS_RXDRDY */
/* Description: Data received in RXD (but potentially not yet transferred to Data RAM) */

/* Bit 0 : Data received in RXD (but potentially not yet transferred to Data RAM) */
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos (0UL)
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Msk (0x1UL << UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos)
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_NotGenerated (0x0UL)
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Generated (0x1UL)

/* Register: UARTE_EVENTS_ENDRX */
/* Description: Receive buffer is filled up */

/* Bit 0 : Receive buffer is filled up */
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL)
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Pos)
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0x0UL)
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Generated (0x1UL)

/* Register: UARTE_EVENTS_TXDRDY */
/* Description: Data sent from TXD */

/* Bit 0 : Data sent from TXD */
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos (0UL)
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Msk (0x1UL << UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos)
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_NotGenerated (0x0UL)
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Generated (0x1UL)

/* Register: UARTE_EVENTS_ENDTX */
/* Description: Last TX byte transmitted */

/* Bit 0 : Last TX byte transmitted */
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL)
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Pos)
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_NotGenerated (0x0UL)
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Generated (0x1UL)

/* Register: UARTE_EVENTS_ERROR */
/* Description: Error detected */

/* Bit 0 : Error detected */
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << UARTE_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0x0UL)
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Generated (0x1UL)

/* Register: UARTE_EVENTS_RXTO */
/* Description: Receiver timeout */

/* Bit 0 : Receiver timeout */
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Pos (0UL)
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Msk (0x1UL << UARTE_EVENTS_RXTO_EVENTS_RXTO_Pos)
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_NotGenerated (0x0UL)
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Generated (0x1UL)

/* Register: UARTE_EVENTS_RXSTARTED */
/* Description: UART receiver has started */

/* Bit 0 : UART receiver has started */
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL)
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos)
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_NotGenerated (0x0UL)
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Generated (0x1UL)

/* Register: UARTE_EVENTS_TXSTARTED */
/* Description: UART transmitter has started */

/* Bit 0 : UART transmitter has started */
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL)
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos)
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_NotGenerated (0x0UL)
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Generated (0x1UL)

/* Register: UARTE_EVENTS_TXSTOPPED */
/* Description: Transmitter stopped */

/* Bit 0 : Transmitter stopped */
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Pos (0UL)
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Msk (0x1UL << UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Pos)
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_NotGenerated (0x0UL)
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Generated (0x1UL)

/* Register: UARTE_PUBLISH_CTS */
/* Description: Publish configuration for event CTS */

/* Bit 31 :   */
#define UARTE_PUBLISH_CTS_EN_Pos (31UL)
#define UARTE_PUBLISH_CTS_EN_Msk (0x1UL << UARTE_PUBLISH_CTS_EN_Pos)
#define UARTE_PUBLISH_CTS_EN_Disabled (0x0UL)
#define UARTE_PUBLISH_CTS_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event CTS will publish to */
#define UARTE_PUBLISH_CTS_CHIDX_Pos (0UL)
#define UARTE_PUBLISH_CTS_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_CTS_CHIDX_Pos)

/* Register: UARTE_PUBLISH_NCTS */
/* Description: Publish configuration for event NCTS */

/* Bit 31 :   */
#define UARTE_PUBLISH_NCTS_EN_Pos (31UL)
#define UARTE_PUBLISH_NCTS_EN_Msk (0x1UL << UARTE_PUBLISH_NCTS_EN_Pos)
#define UARTE_PUBLISH_NCTS_EN_Disabled (0x0UL)
#define UARTE_PUBLISH_NCTS_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event NCTS will publish to */
#define UARTE_PUBLISH_NCTS_CHIDX_Pos (0UL)
#define UARTE_PUBLISH_NCTS_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_NCTS_CHIDX_Pos)

/* Register: UARTE_PUBLISH_RXDRDY */
/* Description: Publish configuration for event RXDRDY */

/* Bit 31 :   */
#define UARTE_PUBLISH_RXDRDY_EN_Pos (31UL)
#define UARTE_PUBLISH_RXDRDY_EN_Msk (0x1UL << UARTE_PUBLISH_RXDRDY_EN_Pos)
#define UARTE_PUBLISH_RXDRDY_EN_Disabled (0x0UL)
#define UARTE_PUBLISH_RXDRDY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RXDRDY will publish to */
#define UARTE_PUBLISH_RXDRDY_CHIDX_Pos (0UL)
#define UARTE_PUBLISH_RXDRDY_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_RXDRDY_CHIDX_Pos)

/* Register: UARTE_PUBLISH_ENDRX */
/* Description: Publish configuration for event ENDRX */

/* Bit 31 :   */
#define UARTE_PUBLISH_ENDRX_EN_Pos (31UL)
#define UARTE_PUBLISH_ENDRX_EN_Msk (0x1UL << UARTE_PUBLISH_ENDRX_EN_Pos)
#define UARTE_PUBLISH_ENDRX_EN_Disabled (0x0UL)
#define UARTE_PUBLISH_ENDRX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDRX will publish to */
#define UARTE_PUBLISH_ENDRX_CHIDX_Pos (0UL)
#define UARTE_PUBLISH_ENDRX_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_ENDRX_CHIDX_Pos)

/* Register: UARTE_PUBLISH_TXDRDY */
/* Description: Publish configuration for event TXDRDY */

/* Bit 31 :   */
#define UARTE_PUBLISH_TXDRDY_EN_Pos (31UL)
#define UARTE_PUBLISH_TXDRDY_EN_Msk (0x1UL << UARTE_PUBLISH_TXDRDY_EN_Pos)
#define UARTE_PUBLISH_TXDRDY_EN_Disabled (0x0UL)
#define UARTE_PUBLISH_TXDRDY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event TXDRDY will publish to */
#define UARTE_PUBLISH_TXDRDY_CHIDX_Pos (0UL)
#define UARTE_PUBLISH_TXDRDY_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_TXDRDY_CHIDX_Pos)

/* Register: UARTE_PUBLISH_ENDTX */
/* Description: Publish configuration for event ENDTX */

/* Bit 31 :   */
#define UARTE_PUBLISH_ENDTX_EN_Pos (31UL)
#define UARTE_PUBLISH_ENDTX_EN_Msk (0x1UL << UARTE_PUBLISH_ENDTX_EN_Pos)
#define UARTE_PUBLISH_ENDTX_EN_Disabled (0x0UL)
#define UARTE_PUBLISH_ENDTX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDTX will publish to */
#define UARTE_PUBLISH_ENDTX_CHIDX_Pos (0UL)
#define UARTE_PUBLISH_ENDTX_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_ENDTX_CHIDX_Pos)

/* Register: UARTE_PUBLISH_ERROR */
/* Description: Publish configuration for event ERROR */

/* Bit 31 :   */
#define UARTE_PUBLISH_ERROR_EN_Pos (31UL)
#define UARTE_PUBLISH_ERROR_EN_Msk (0x1UL << UARTE_PUBLISH_ERROR_EN_Pos)
#define UARTE_PUBLISH_ERROR_EN_Disabled (0x0UL)
#define UARTE_PUBLISH_ERROR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ERROR will publish to */
#define UARTE_PUBLISH_ERROR_CHIDX_Pos (0UL)
#define UARTE_PUBLISH_ERROR_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_ERROR_CHIDX_Pos)

/* Register: UARTE_PUBLISH_RXTO */
/* Description: Publish configuration for event RXTO */

/* Bit 31 :   */
#define UARTE_PUBLISH_RXTO_EN_Pos (31UL)
#define UARTE_PUBLISH_RXTO_EN_Msk (0x1UL << UARTE_PUBLISH_RXTO_EN_Pos)
#define UARTE_PUBLISH_RXTO_EN_Disabled (0x0UL)
#define UARTE_PUBLISH_RXTO_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RXTO will publish to */
#define UARTE_PUBLISH_RXTO_CHIDX_Pos (0UL)
#define UARTE_PUBLISH_RXTO_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_RXTO_CHIDX_Pos)

/* Register: UARTE_PUBLISH_RXSTARTED */
/* Description: Publish configuration for event RXSTARTED */

/* Bit 31 :   */
#define UARTE_PUBLISH_RXSTARTED_EN_Pos (31UL)
#define UARTE_PUBLISH_RXSTARTED_EN_Msk (0x1UL << UARTE_PUBLISH_RXSTARTED_EN_Pos)
#define UARTE_PUBLISH_RXSTARTED_EN_Disabled (0x0UL)
#define UARTE_PUBLISH_RXSTARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RXSTARTED will publish to */
#define UARTE_PUBLISH_RXSTARTED_CHIDX_Pos (0UL)
#define UARTE_PUBLISH_RXSTARTED_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_RXSTARTED_CHIDX_Pos)

/* Register: UARTE_PUBLISH_TXSTARTED */
/* Description: Publish configuration for event TXSTARTED */

/* Bit 31 :   */
#define UARTE_PUBLISH_TXSTARTED_EN_Pos (31UL)
#define UARTE_PUBLISH_TXSTARTED_EN_Msk (0x1UL << UARTE_PUBLISH_TXSTARTED_EN_Pos)
#define UARTE_PUBLISH_TXSTARTED_EN_Disabled (0x0UL)
#define UARTE_PUBLISH_TXSTARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event TXSTARTED will publish to */
#define UARTE_PUBLISH_TXSTARTED_CHIDX_Pos (0UL)
#define UARTE_PUBLISH_TXSTARTED_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_TXSTARTED_CHIDX_Pos)

/* Register: UARTE_PUBLISH_TXSTOPPED */
/* Description: Publish configuration for event TXSTOPPED */

/* Bit 31 :   */
#define UARTE_PUBLISH_TXSTOPPED_EN_Pos (31UL)
#define UARTE_PUBLISH_TXSTOPPED_EN_Msk (0x1UL << UARTE_PUBLISH_TXSTOPPED_EN_Pos)
#define UARTE_PUBLISH_TXSTOPPED_EN_Disabled (0x0UL)
#define UARTE_PUBLISH_TXSTOPPED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event TXSTOPPED will publish to */
#define UARTE_PUBLISH_TXSTOPPED_CHIDX_Pos (0UL)
#define UARTE_PUBLISH_TXSTOPPED_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_TXSTOPPED_CHIDX_Pos)

/* Register: UARTE_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 6 : Shortcut between event ENDRX and task STOPRX */
#define UARTE_SHORTS_ENDRX_STOPRX_Pos (6UL)
#define UARTE_SHORTS_ENDRX_STOPRX_Msk (0x1UL << UARTE_SHORTS_ENDRX_STOPRX_Pos)
#define UARTE_SHORTS_ENDRX_STOPRX_Disabled (0x0UL)
#define UARTE_SHORTS_ENDRX_STOPRX_Enabled (0x1UL)

/* Bit 5 : Shortcut between event ENDRX and task STARTRX */
#define UARTE_SHORTS_ENDRX_STARTRX_Pos (5UL)
#define UARTE_SHORTS_ENDRX_STARTRX_Msk (0x1UL << UARTE_SHORTS_ENDRX_STARTRX_Pos)
#define UARTE_SHORTS_ENDRX_STARTRX_Disabled (0x0UL)
#define UARTE_SHORTS_ENDRX_STARTRX_Enabled (0x1UL)

/* Register: UARTE_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 22 : Enable or disable interrupt for event TXSTOPPED */
#define UARTE_INTEN_TXSTOPPED_Pos (22UL)
#define UARTE_INTEN_TXSTOPPED_Msk (0x1UL << UARTE_INTEN_TXSTOPPED_Pos)
#define UARTE_INTEN_TXSTOPPED_Disabled (0x0UL)
#define UARTE_INTEN_TXSTOPPED_Enabled (0x1UL)

/* Bit 20 : Enable or disable interrupt for event TXSTARTED */
#define UARTE_INTEN_TXSTARTED_Pos (20UL)
#define UARTE_INTEN_TXSTARTED_Msk (0x1UL << UARTE_INTEN_TXSTARTED_Pos)
#define UARTE_INTEN_TXSTARTED_Disabled (0x0UL)
#define UARTE_INTEN_TXSTARTED_Enabled (0x1UL)

/* Bit 19 : Enable or disable interrupt for event RXSTARTED */
#define UARTE_INTEN_RXSTARTED_Pos (19UL)
#define UARTE_INTEN_RXSTARTED_Msk (0x1UL << UARTE_INTEN_RXSTARTED_Pos)
#define UARTE_INTEN_RXSTARTED_Disabled (0x0UL)
#define UARTE_INTEN_RXSTARTED_Enabled (0x1UL)

/* Bit 17 : Enable or disable interrupt for event RXTO */
#define UARTE_INTEN_RXTO_Pos (17UL)
#define UARTE_INTEN_RXTO_Msk (0x1UL << UARTE_INTEN_RXTO_Pos)
#define UARTE_INTEN_RXTO_Disabled (0x0UL)
#define UARTE_INTEN_RXTO_Enabled (0x1UL)

/* Bit 9 : Enable or disable interrupt for event ERROR */
#define UARTE_INTEN_ERROR_Pos (9UL)
#define UARTE_INTEN_ERROR_Msk (0x1UL << UARTE_INTEN_ERROR_Pos)
#define UARTE_INTEN_ERROR_Disabled (0x0UL)
#define UARTE_INTEN_ERROR_Enabled (0x1UL)

/* Bit 8 : Enable or disable interrupt for event ENDTX */
#define UARTE_INTEN_ENDTX_Pos (8UL)
#define UARTE_INTEN_ENDTX_Msk (0x1UL << UARTE_INTEN_ENDTX_Pos)
#define UARTE_INTEN_ENDTX_Disabled (0x0UL)
#define UARTE_INTEN_ENDTX_Enabled (0x1UL)

/* Bit 7 : Enable or disable interrupt for event TXDRDY */
#define UARTE_INTEN_TXDRDY_Pos (7UL)
#define UARTE_INTEN_TXDRDY_Msk (0x1UL << UARTE_INTEN_TXDRDY_Pos)
#define UARTE_INTEN_TXDRDY_Disabled (0x0UL)
#define UARTE_INTEN_TXDRDY_Enabled (0x1UL)

/* Bit 4 : Enable or disable interrupt for event ENDRX */
#define UARTE_INTEN_ENDRX_Pos (4UL)
#define UARTE_INTEN_ENDRX_Msk (0x1UL << UARTE_INTEN_ENDRX_Pos)
#define UARTE_INTEN_ENDRX_Disabled (0x0UL)
#define UARTE_INTEN_ENDRX_Enabled (0x1UL)

/* Bit 2 : Enable or disable interrupt for event RXDRDY */
#define UARTE_INTEN_RXDRDY_Pos (2UL)
#define UARTE_INTEN_RXDRDY_Msk (0x1UL << UARTE_INTEN_RXDRDY_Pos)
#define UARTE_INTEN_RXDRDY_Disabled (0x0UL)
#define UARTE_INTEN_RXDRDY_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event NCTS */
#define UARTE_INTEN_NCTS_Pos (1UL)
#define UARTE_INTEN_NCTS_Msk (0x1UL << UARTE_INTEN_NCTS_Pos)
#define UARTE_INTEN_NCTS_Disabled (0x0UL)
#define UARTE_INTEN_NCTS_Enabled (0x1UL)

/* Bit 0 : Enable or disable interrupt for event CTS */
#define UARTE_INTEN_CTS_Pos (0UL)
#define UARTE_INTEN_CTS_Msk (0x1UL << UARTE_INTEN_CTS_Pos)
#define UARTE_INTEN_CTS_Disabled (0x0UL)
#define UARTE_INTEN_CTS_Enabled (0x1UL)

/* Register: UARTE_INTENSET */
/* Description: Enable interrupt */

/* Bit 22 : Write '1' to enable interrupt for event TXSTOPPED */
#define UARTE_INTENSET_TXSTOPPED_Pos (22UL)
#define UARTE_INTENSET_TXSTOPPED_Msk (0x1UL << UARTE_INTENSET_TXSTOPPED_Pos)
#define UARTE_INTENSET_TXSTOPPED_Disabled (0x0UL)
#define UARTE_INTENSET_TXSTOPPED_Enabled (0x1UL)
#define UARTE_INTENSET_TXSTOPPED_Set (0x1UL)

/* Bit 20 : Write '1' to enable interrupt for event TXSTARTED */
#define UARTE_INTENSET_TXSTARTED_Pos (20UL)
#define UARTE_INTENSET_TXSTARTED_Msk (0x1UL << UARTE_INTENSET_TXSTARTED_Pos)
#define UARTE_INTENSET_TXSTARTED_Disabled (0x0UL)
#define UARTE_INTENSET_TXSTARTED_Enabled (0x1UL)
#define UARTE_INTENSET_TXSTARTED_Set (0x1UL)

/* Bit 19 : Write '1' to enable interrupt for event RXSTARTED */
#define UARTE_INTENSET_RXSTARTED_Pos (19UL)
#define UARTE_INTENSET_RXSTARTED_Msk (0x1UL << UARTE_INTENSET_RXSTARTED_Pos)
#define UARTE_INTENSET_RXSTARTED_Disabled (0x0UL)
#define UARTE_INTENSET_RXSTARTED_Enabled (0x1UL)
#define UARTE_INTENSET_RXSTARTED_Set (0x1UL)

/* Bit 17 : Write '1' to enable interrupt for event RXTO */
#define UARTE_INTENSET_RXTO_Pos (17UL)
#define UARTE_INTENSET_RXTO_Msk (0x1UL << UARTE_INTENSET_RXTO_Pos)
#define UARTE_INTENSET_RXTO_Disabled (0x0UL)
#define UARTE_INTENSET_RXTO_Enabled (0x1UL)
#define UARTE_INTENSET_RXTO_Set (0x1UL)

/* Bit 9 : Write '1' to enable interrupt for event ERROR */
#define UARTE_INTENSET_ERROR_Pos (9UL)
#define UARTE_INTENSET_ERROR_Msk (0x1UL << UARTE_INTENSET_ERROR_Pos)
#define UARTE_INTENSET_ERROR_Disabled (0x0UL)
#define UARTE_INTENSET_ERROR_Enabled (0x1UL)
#define UARTE_INTENSET_ERROR_Set (0x1UL)

/* Bit 8 : Write '1' to enable interrupt for event ENDTX */
#define UARTE_INTENSET_ENDTX_Pos (8UL)
#define UARTE_INTENSET_ENDTX_Msk (0x1UL << UARTE_INTENSET_ENDTX_Pos)
#define UARTE_INTENSET_ENDTX_Disabled (0x0UL)
#define UARTE_INTENSET_ENDTX_Enabled (0x1UL)
#define UARTE_INTENSET_ENDTX_Set (0x1UL)

/* Bit 7 : Write '1' to enable interrupt for event TXDRDY */
#define UARTE_INTENSET_TXDRDY_Pos (7UL)
#define UARTE_INTENSET_TXDRDY_Msk (0x1UL << UARTE_INTENSET_TXDRDY_Pos)
#define UARTE_INTENSET_TXDRDY_Disabled (0x0UL)
#define UARTE_INTENSET_TXDRDY_Enabled (0x1UL)
#define UARTE_INTENSET_TXDRDY_Set (0x1UL)

/* Bit 4 : Write '1' to enable interrupt for event ENDRX */
#define UARTE_INTENSET_ENDRX_Pos (4UL)
#define UARTE_INTENSET_ENDRX_Msk (0x1UL << UARTE_INTENSET_ENDRX_Pos)
#define UARTE_INTENSET_ENDRX_Disabled (0x0UL)
#define UARTE_INTENSET_ENDRX_Enabled (0x1UL)
#define UARTE_INTENSET_ENDRX_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event RXDRDY */
#define UARTE_INTENSET_RXDRDY_Pos (2UL)
#define UARTE_INTENSET_RXDRDY_Msk (0x1UL << UARTE_INTENSET_RXDRDY_Pos)
#define UARTE_INTENSET_RXDRDY_Disabled (0x0UL)
#define UARTE_INTENSET_RXDRDY_Enabled (0x1UL)
#define UARTE_INTENSET_RXDRDY_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event NCTS */
#define UARTE_INTENSET_NCTS_Pos (1UL)
#define UARTE_INTENSET_NCTS_Msk (0x1UL << UARTE_INTENSET_NCTS_Pos)
#define UARTE_INTENSET_NCTS_Disabled (0x0UL)
#define UARTE_INTENSET_NCTS_Enabled (0x1UL)
#define UARTE_INTENSET_NCTS_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event CTS */
#define UARTE_INTENSET_CTS_Pos (0UL)
#define UARTE_INTENSET_CTS_Msk (0x1UL << UARTE_INTENSET_CTS_Pos)
#define UARTE_INTENSET_CTS_Disabled (0x0UL)
#define UARTE_INTENSET_CTS_Enabled (0x1UL)
#define UARTE_INTENSET_CTS_Set (0x1UL)

/* Register: UARTE_INTENCLR */
/* Description: Disable interrupt */

/* Bit 22 : Write '1' to disable interrupt for event TXSTOPPED */
#define UARTE_INTENCLR_TXSTOPPED_Pos (22UL)
#define UARTE_INTENCLR_TXSTOPPED_Msk (0x1UL << UARTE_INTENCLR_TXSTOPPED_Pos)
#define UARTE_INTENCLR_TXSTOPPED_Disabled (0x0UL)
#define UARTE_INTENCLR_TXSTOPPED_Enabled (0x1UL)
#define UARTE_INTENCLR_TXSTOPPED_Clear (0x1UL)

/* Bit 20 : Write '1' to disable interrupt for event TXSTARTED */
#define UARTE_INTENCLR_TXSTARTED_Pos (20UL)
#define UARTE_INTENCLR_TXSTARTED_Msk (0x1UL << UARTE_INTENCLR_TXSTARTED_Pos)
#define UARTE_INTENCLR_TXSTARTED_Disabled (0x0UL)
#define UARTE_INTENCLR_TXSTARTED_Enabled (0x1UL)
#define UARTE_INTENCLR_TXSTARTED_Clear (0x1UL)

/* Bit 19 : Write '1' to disable interrupt for event RXSTARTED */
#define UARTE_INTENCLR_RXSTARTED_Pos (19UL)
#define UARTE_INTENCLR_RXSTARTED_Msk (0x1UL << UARTE_INTENCLR_RXSTARTED_Pos)
#define UARTE_INTENCLR_RXSTARTED_Disabled (0x0UL)
#define UARTE_INTENCLR_RXSTARTED_Enabled (0x1UL)
#define UARTE_INTENCLR_RXSTARTED_Clear (0x1UL)

/* Bit 17 : Write '1' to disable interrupt for event RXTO */
#define UARTE_INTENCLR_RXTO_Pos (17UL)
#define UARTE_INTENCLR_RXTO_Msk (0x1UL << UARTE_INTENCLR_RXTO_Pos)
#define UARTE_INTENCLR_RXTO_Disabled (0x0UL)
#define UARTE_INTENCLR_RXTO_Enabled (0x1UL)
#define UARTE_INTENCLR_RXTO_Clear (0x1UL)

/* Bit 9 : Write '1' to disable interrupt for event ERROR */
#define UARTE_INTENCLR_ERROR_Pos (9UL)
#define UARTE_INTENCLR_ERROR_Msk (0x1UL << UARTE_INTENCLR_ERROR_Pos)
#define UARTE_INTENCLR_ERROR_Disabled (0x0UL)
#define UARTE_INTENCLR_ERROR_Enabled (0x1UL)
#define UARTE_INTENCLR_ERROR_Clear (0x1UL)

/* Bit 8 : Write '1' to disable interrupt for event ENDTX */
#define UARTE_INTENCLR_ENDTX_Pos (8UL)
#define UARTE_INTENCLR_ENDTX_Msk (0x1UL << UARTE_INTENCLR_ENDTX_Pos)
#define UARTE_INTENCLR_ENDTX_Disabled (0x0UL)
#define UARTE_INTENCLR_ENDTX_Enabled (0x1UL)
#define UARTE_INTENCLR_ENDTX_Clear (0x1UL)

/* Bit 7 : Write '1' to disable interrupt for event TXDRDY */
#define UARTE_INTENCLR_TXDRDY_Pos (7UL)
#define UARTE_INTENCLR_TXDRDY_Msk (0x1UL << UARTE_INTENCLR_TXDRDY_Pos)
#define UARTE_INTENCLR_TXDRDY_Disabled (0x0UL)
#define UARTE_INTENCLR_TXDRDY_Enabled (0x1UL)
#define UARTE_INTENCLR_TXDRDY_Clear (0x1UL)

/* Bit 4 : Write '1' to disable interrupt for event ENDRX */
#define UARTE_INTENCLR_ENDRX_Pos (4UL)
#define UARTE_INTENCLR_ENDRX_Msk (0x1UL << UARTE_INTENCLR_ENDRX_Pos)
#define UARTE_INTENCLR_ENDRX_Disabled (0x0UL)
#define UARTE_INTENCLR_ENDRX_Enabled (0x1UL)
#define UARTE_INTENCLR_ENDRX_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event RXDRDY */
#define UARTE_INTENCLR_RXDRDY_Pos (2UL)
#define UARTE_INTENCLR_RXDRDY_Msk (0x1UL << UARTE_INTENCLR_RXDRDY_Pos)
#define UARTE_INTENCLR_RXDRDY_Disabled (0x0UL)
#define UARTE_INTENCLR_RXDRDY_Enabled (0x1UL)
#define UARTE_INTENCLR_RXDRDY_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event NCTS */
#define UARTE_INTENCLR_NCTS_Pos (1UL)
#define UARTE_INTENCLR_NCTS_Msk (0x1UL << UARTE_INTENCLR_NCTS_Pos)
#define UARTE_INTENCLR_NCTS_Disabled (0x0UL)
#define UARTE_INTENCLR_NCTS_Enabled (0x1UL)
#define UARTE_INTENCLR_NCTS_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event CTS */
#define UARTE_INTENCLR_CTS_Pos (0UL)
#define UARTE_INTENCLR_CTS_Msk (0x1UL << UARTE_INTENCLR_CTS_Pos)
#define UARTE_INTENCLR_CTS_Disabled (0x0UL)
#define UARTE_INTENCLR_CTS_Enabled (0x1UL)
#define UARTE_INTENCLR_CTS_Clear (0x1UL)

/* Register: UARTE_ERRORSRC */
/* Description: Error source */

/* Bit 3 : Break condition */
#define UARTE_ERRORSRC_BREAK_Pos (3UL)
#define UARTE_ERRORSRC_BREAK_Msk (0x1UL << UARTE_ERRORSRC_BREAK_Pos)
#define UARTE_ERRORSRC_BREAK_NotPresent (0x0UL)
#define UARTE_ERRORSRC_BREAK_Present (0x1UL)

/* Bit 2 : Framing error occurred */
#define UARTE_ERRORSRC_FRAMING_Pos (2UL)
#define UARTE_ERRORSRC_FRAMING_Msk (0x1UL << UARTE_ERRORSRC_FRAMING_Pos)
#define UARTE_ERRORSRC_FRAMING_NotPresent (0x0UL)
#define UARTE_ERRORSRC_FRAMING_Present (0x1UL)

/* Bit 1 : Parity error */
#define UARTE_ERRORSRC_PARITY_Pos (1UL)
#define UARTE_ERRORSRC_PARITY_Msk (0x1UL << UARTE_ERRORSRC_PARITY_Pos)
#define UARTE_ERRORSRC_PARITY_NotPresent (0x0UL)
#define UARTE_ERRORSRC_PARITY_Present (0x1UL)

/* Bit 0 : Overrun error */
#define UARTE_ERRORSRC_OVERRUN_Pos (0UL)
#define UARTE_ERRORSRC_OVERRUN_Msk (0x1UL << UARTE_ERRORSRC_OVERRUN_Pos)
#define UARTE_ERRORSRC_OVERRUN_NotPresent (0x0UL)
#define UARTE_ERRORSRC_OVERRUN_Present (0x1UL)

/* Register: UARTE_ENABLE */
/* Description: Enable UART */

/* Bits 3..0 : Enable or disable UARTE */
#define UARTE_ENABLE_ENABLE_Pos (0UL)
#define UARTE_ENABLE_ENABLE_Msk (0xFUL << UARTE_ENABLE_ENABLE_Pos)
#define UARTE_ENABLE_ENABLE_Disabled (0x0UL)
#define UARTE_ENABLE_ENABLE_Enabled (0x8UL)

/* Register: UARTE_PSEL_RTS */
/* Description: Pin select for RTS signal */

/* Bit 31 : Connection */
#define UARTE_PSEL_RTS_CONNECT_Pos (31UL)
#define UARTE_PSEL_RTS_CONNECT_Msk (0x1UL << UARTE_PSEL_RTS_CONNECT_Pos)
#define UARTE_PSEL_RTS_CONNECT_Connected (0x0UL)
#define UARTE_PSEL_RTS_CONNECT_Disconnected (0x1UL)

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
#define UARTE_PSEL_TXD_CONNECT_Connected (0x0UL)
#define UARTE_PSEL_TXD_CONNECT_Disconnected (0x1UL)

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
#define UARTE_PSEL_CTS_CONNECT_Connected (0x0UL)
#define UARTE_PSEL_CTS_CONNECT_Disconnected (0x1UL)

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
#define UARTE_PSEL_RXD_CONNECT_Connected (0x0UL)
#define UARTE_PSEL_RXD_CONNECT_Disconnected (0x1UL)

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
#define UARTE_CONFIG_PARITYTYPE_Even (0x0UL)
#define UARTE_CONFIG_PARITYTYPE_Odd (0x1UL)

/* Bit 4 : Stop bits */
#define UARTE_CONFIG_STOP_Pos (4UL)
#define UARTE_CONFIG_STOP_Msk (0x1UL << UARTE_CONFIG_STOP_Pos)
#define UARTE_CONFIG_STOP_One (0x0UL)
#define UARTE_CONFIG_STOP_Two (0x1UL)

/* Bits 3..1 : Parity */
#define UARTE_CONFIG_PARITY_Pos (1UL)
#define UARTE_CONFIG_PARITY_Msk (0x7UL << UARTE_CONFIG_PARITY_Pos)
#define UARTE_CONFIG_PARITY_Excluded (0x0UL)
#define UARTE_CONFIG_PARITY_Included (0x7UL)

/* Bit 0 : Hardware flow control */
#define UARTE_CONFIG_HWFC_Pos (0UL)
#define UARTE_CONFIG_HWFC_Msk (0x1UL << UARTE_CONFIG_HWFC_Pos)
#define UARTE_CONFIG_HWFC_Disabled (0x0UL)
#define UARTE_CONFIG_HWFC_Enabled (0x1UL)


/* Peripheral: UICR */
/* Description: User Information Configuration Registers */

/* Register: UICR_APPROTECT */
/* Description: Access port protection */

/* Bits 31..0 : Blocks debugger read/write access to all CPU registers and memory mapped
        addresses. */
#define UICR_APPROTECT_PALL_Pos (0UL)
#define UICR_APPROTECT_PALL_Msk (0xFFFFFFFFUL << UICR_APPROTECT_PALL_Pos)
#define UICR_APPROTECT_PALL_Protected (0x00000000UL)
#define UICR_APPROTECT_PALL_Unprotected (0x50FA50FAUL)

/* Register: UICR_ERASEPROTECT */
/* Description: Erase protection */

/* Bits 31..0 : Blocks NVMC ERASEALL and CTRLAP ERASEALL functionality. Using any value except Unprotected will lead to the protection being enabled. */
#define UICR_ERASEPROTECT_PALL_Pos (0UL)
#define UICR_ERASEPROTECT_PALL_Msk (0xFFFFFFFFUL << UICR_ERASEPROTECT_PALL_Pos)
#define UICR_ERASEPROTECT_PALL_Protected (0x00000000UL)
#define UICR_ERASEPROTECT_PALL_Unprotected (0xFFFFFFFFUL)

/* Register: UICR_NRFFW */
/* Description: Description collection: Reserved for Nordic firmware design */

/* Bits 31..0 : Reserved for Nordic firmware design */
#define UICR_NRFFW_NRFFW_Pos (0UL)
#define UICR_NRFFW_NRFFW_Msk (0xFFFFFFFFUL << UICR_NRFFW_NRFFW_Pos)

/* Register: UICR_CUSTOMER */
/* Description: Description collection: Reserved for customer */

/* Bits 31..0 : Reserved for customer */
#define UICR_CUSTOMER_CUSTOMER_Pos (0UL)
#define UICR_CUSTOMER_CUSTOMER_Msk (0xFFFFFFFFUL << UICR_CUSTOMER_CUSTOMER_Pos)


/* Peripheral: VMC */
/* Description: Volatile Memory controller */

/* Register: VMC_RAM_POWER */
/* Description: Description cluster: RAM[n] power control register */

/* Bit 19 : Keep retention on RAM section S3 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S3RETENTION_Pos (19UL)
#define VMC_RAM_POWER_S3RETENTION_Msk (0x1UL << VMC_RAM_POWER_S3RETENTION_Pos)
#define VMC_RAM_POWER_S3RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S3RETENTION_On (0x1UL)

/* Bit 18 : Keep retention on RAM section S2 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S2RETENTION_Pos (18UL)
#define VMC_RAM_POWER_S2RETENTION_Msk (0x1UL << VMC_RAM_POWER_S2RETENTION_Pos)
#define VMC_RAM_POWER_S2RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S2RETENTION_On (0x1UL)

/* Bit 17 : Keep retention on RAM section S1 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S1RETENTION_Pos (17UL)
#define VMC_RAM_POWER_S1RETENTION_Msk (0x1UL << VMC_RAM_POWER_S1RETENTION_Pos)
#define VMC_RAM_POWER_S1RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S1RETENTION_On (0x1UL)

/* Bit 16 : Keep retention on RAM section S0 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S0RETENTION_Pos (16UL)
#define VMC_RAM_POWER_S0RETENTION_Msk (0x1UL << VMC_RAM_POWER_S0RETENTION_Pos)
#define VMC_RAM_POWER_S0RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S0RETENTION_On (0x1UL)

/* Bit 3 : Keep RAM section S3 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S3POWER_Pos (3UL)
#define VMC_RAM_POWER_S3POWER_Msk (0x1UL << VMC_RAM_POWER_S3POWER_Pos)
#define VMC_RAM_POWER_S3POWER_Off (0x0UL)
#define VMC_RAM_POWER_S3POWER_On (0x1UL)

/* Bit 2 : Keep RAM section S2 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S2POWER_Pos (2UL)
#define VMC_RAM_POWER_S2POWER_Msk (0x1UL << VMC_RAM_POWER_S2POWER_Pos)
#define VMC_RAM_POWER_S2POWER_Off (0x0UL)
#define VMC_RAM_POWER_S2POWER_On (0x1UL)

/* Bit 1 : Keep RAM section S1 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S1POWER_Pos (1UL)
#define VMC_RAM_POWER_S1POWER_Msk (0x1UL << VMC_RAM_POWER_S1POWER_Pos)
#define VMC_RAM_POWER_S1POWER_Off (0x0UL)
#define VMC_RAM_POWER_S1POWER_On (0x1UL)

/* Bit 0 : Keep RAM section S0 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S0POWER_Pos (0UL)
#define VMC_RAM_POWER_S0POWER_Msk (0x1UL << VMC_RAM_POWER_S0POWER_Pos)
#define VMC_RAM_POWER_S0POWER_Off (0x0UL)
#define VMC_RAM_POWER_S0POWER_On (0x1UL)

/* Register: VMC_RAM_POWERSET */
/* Description: Description cluster: RAM[n] power control set register */

/* Bit 19 : Keep retention on RAM section S3 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S3RETENTION_Pos (19UL)
#define VMC_RAM_POWERSET_S3RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S3RETENTION_Pos)
#define VMC_RAM_POWERSET_S3RETENTION_On (0x1UL)

/* Bit 18 : Keep retention on RAM section S2 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S2RETENTION_Pos (18UL)
#define VMC_RAM_POWERSET_S2RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S2RETENTION_Pos)
#define VMC_RAM_POWERSET_S2RETENTION_On (0x1UL)

/* Bit 17 : Keep retention on RAM section S1 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S1RETENTION_Pos (17UL)
#define VMC_RAM_POWERSET_S1RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S1RETENTION_Pos)
#define VMC_RAM_POWERSET_S1RETENTION_On (0x1UL)

/* Bit 16 : Keep retention on RAM section S0 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S0RETENTION_Pos (16UL)
#define VMC_RAM_POWERSET_S0RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S0RETENTION_Pos)
#define VMC_RAM_POWERSET_S0RETENTION_On (0x1UL)

/* Bit 3 : Keep RAM section S3 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S3POWER_Pos (3UL)
#define VMC_RAM_POWERSET_S3POWER_Msk (0x1UL << VMC_RAM_POWERSET_S3POWER_Pos)
#define VMC_RAM_POWERSET_S3POWER_On (0x1UL)

/* Bit 2 : Keep RAM section S2 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S2POWER_Pos (2UL)
#define VMC_RAM_POWERSET_S2POWER_Msk (0x1UL << VMC_RAM_POWERSET_S2POWER_Pos)
#define VMC_RAM_POWERSET_S2POWER_On (0x1UL)

/* Bit 1 : Keep RAM section S1 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S1POWER_Pos (1UL)
#define VMC_RAM_POWERSET_S1POWER_Msk (0x1UL << VMC_RAM_POWERSET_S1POWER_Pos)
#define VMC_RAM_POWERSET_S1POWER_On (0x1UL)

/* Bit 0 : Keep RAM section S0 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S0POWER_Pos (0UL)
#define VMC_RAM_POWERSET_S0POWER_Msk (0x1UL << VMC_RAM_POWERSET_S0POWER_Pos)
#define VMC_RAM_POWERSET_S0POWER_On (0x1UL)

/* Register: VMC_RAM_POWERCLR */
/* Description: Description cluster: RAM[n] power control clear register */

/* Bit 19 : Keep retention on RAM section S3 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S3RETENTION_Pos (19UL)
#define VMC_RAM_POWERCLR_S3RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S3RETENTION_Pos)
#define VMC_RAM_POWERCLR_S3RETENTION_Off (0x1UL)

/* Bit 18 : Keep retention on RAM section S2 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S2RETENTION_Pos (18UL)
#define VMC_RAM_POWERCLR_S2RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S2RETENTION_Pos)
#define VMC_RAM_POWERCLR_S2RETENTION_Off (0x1UL)

/* Bit 17 : Keep retention on RAM section S1 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S1RETENTION_Pos (17UL)
#define VMC_RAM_POWERCLR_S1RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S1RETENTION_Pos)
#define VMC_RAM_POWERCLR_S1RETENTION_Off (0x1UL)

/* Bit 16 : Keep retention on RAM section S0 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S0RETENTION_Pos (16UL)
#define VMC_RAM_POWERCLR_S0RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S0RETENTION_Pos)
#define VMC_RAM_POWERCLR_S0RETENTION_Off (0x1UL)

/* Bit 3 : Keep RAM section S3 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S3POWER_Pos (3UL)
#define VMC_RAM_POWERCLR_S3POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S3POWER_Pos)
#define VMC_RAM_POWERCLR_S3POWER_Off (0x1UL)

/* Bit 2 : Keep RAM section S2 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S2POWER_Pos (2UL)
#define VMC_RAM_POWERCLR_S2POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S2POWER_Pos)
#define VMC_RAM_POWERCLR_S2POWER_Off (0x1UL)

/* Bit 1 : Keep RAM section S1 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S1POWER_Pos (1UL)
#define VMC_RAM_POWERCLR_S1POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S1POWER_Pos)
#define VMC_RAM_POWERCLR_S1POWER_Off (0x1UL)

/* Bit 0 : Keep RAM section S0 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S0POWER_Pos (0UL)
#define VMC_RAM_POWERCLR_S0POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S0POWER_Pos)
#define VMC_RAM_POWERCLR_S0POWER_Off (0x1UL)


/* Peripheral: VREQCTRL */
/* Description: Voltage request control */

/* Register: VREQCTRL_VREGRADIO_VREQH */
/* Description: Request high voltage on RADIO After requesting high voltage, the user must wait until VREQHREADY is set to Ready */

/* Bit 0 : Request high voltage */
#define VREQCTRL_VREGRADIO_VREQH_VREQH_Pos (0UL)
#define VREQCTRL_VREGRADIO_VREQH_VREQH_Msk (0x1UL << VREQCTRL_VREGRADIO_VREQH_VREQH_Pos)
#define VREQCTRL_VREGRADIO_VREQH_VREQH_Disabled (0x0UL)
#define VREQCTRL_VREGRADIO_VREQH_VREQH_Enabled (0x1UL)

/* Register: VREQCTRL_VREGRADIO_VREQHREADY */
/* Description: High voltage on RADIO is ready */

/* Bit 0 : RADIO is ready to operate on high voltage */
#define VREQCTRL_VREGRADIO_VREQHREADY_READY_Pos (0UL)
#define VREQCTRL_VREGRADIO_VREQHREADY_READY_Msk (0x1UL << VREQCTRL_VREGRADIO_VREQHREADY_READY_Pos)
#define VREQCTRL_VREGRADIO_VREQHREADY_READY_NotReady (0x0UL)
#define VREQCTRL_VREGRADIO_VREQHREADY_READY_Ready (0x1UL)


/* Peripheral: WDT */
/* Description: Watchdog Timer */

/* Register: WDT_TASKS_START */
/* Description: Start WDT */

/* Bit 0 : Start WDT */
#define WDT_TASKS_START_TASKS_START_Pos (0UL)
#define WDT_TASKS_START_TASKS_START_Msk (0x1UL << WDT_TASKS_START_TASKS_START_Pos)
#define WDT_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: WDT_TASKS_STOP */
/* Description: Stop WDT */

/* Bit 0 : Stop WDT */
#define WDT_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define WDT_TASKS_STOP_TASKS_STOP_Msk (0x1UL << WDT_TASKS_STOP_TASKS_STOP_Pos)
#define WDT_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: WDT_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define WDT_SUBSCRIBE_START_EN_Pos (31UL)
#define WDT_SUBSCRIBE_START_EN_Msk (0x1UL << WDT_SUBSCRIBE_START_EN_Pos)
#define WDT_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define WDT_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define WDT_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define WDT_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << WDT_SUBSCRIBE_START_CHIDX_Pos)

/* Register: WDT_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define WDT_SUBSCRIBE_STOP_EN_Pos (31UL)
#define WDT_SUBSCRIBE_STOP_EN_Msk (0x1UL << WDT_SUBSCRIBE_STOP_EN_Pos)
#define WDT_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define WDT_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define WDT_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define WDT_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << WDT_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: WDT_EVENTS_TIMEOUT */
/* Description: Watchdog timeout */

/* Bit 0 : Watchdog timeout */
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Pos (0UL)
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Msk (0x1UL << WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Pos)
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_NotGenerated (0x0UL)
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Generated (0x1UL)

/* Register: WDT_EVENTS_STOPPED */
/* Description: Watchdog stopped */

/* Bit 0 : Watchdog stopped */
#define WDT_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define WDT_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << WDT_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define WDT_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0x0UL)
#define WDT_EVENTS_STOPPED_EVENTS_STOPPED_Generated (0x1UL)

/* Register: WDT_PUBLISH_TIMEOUT */
/* Description: Publish configuration for event TIMEOUT */

/* Bit 31 :   */
#define WDT_PUBLISH_TIMEOUT_EN_Pos (31UL)
#define WDT_PUBLISH_TIMEOUT_EN_Msk (0x1UL << WDT_PUBLISH_TIMEOUT_EN_Pos)
#define WDT_PUBLISH_TIMEOUT_EN_Disabled (0x0UL)
#define WDT_PUBLISH_TIMEOUT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event TIMEOUT will publish to */
#define WDT_PUBLISH_TIMEOUT_CHIDX_Pos (0UL)
#define WDT_PUBLISH_TIMEOUT_CHIDX_Msk (0xFFUL << WDT_PUBLISH_TIMEOUT_CHIDX_Pos)

/* Register: WDT_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define WDT_PUBLISH_STOPPED_EN_Pos (31UL)
#define WDT_PUBLISH_STOPPED_EN_Msk (0x1UL << WDT_PUBLISH_STOPPED_EN_Pos)
#define WDT_PUBLISH_STOPPED_EN_Disabled (0x0UL)
#define WDT_PUBLISH_STOPPED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STOPPED will publish to */
#define WDT_PUBLISH_STOPPED_CHIDX_Pos (0UL)
#define WDT_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << WDT_PUBLISH_STOPPED_CHIDX_Pos)

/* Register: WDT_INTENSET */
/* Description: Enable interrupt */

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define WDT_INTENSET_STOPPED_Pos (1UL)
#define WDT_INTENSET_STOPPED_Msk (0x1UL << WDT_INTENSET_STOPPED_Pos)
#define WDT_INTENSET_STOPPED_Disabled (0x0UL)
#define WDT_INTENSET_STOPPED_Enabled (0x1UL)
#define WDT_INTENSET_STOPPED_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event TIMEOUT */
#define WDT_INTENSET_TIMEOUT_Pos (0UL)
#define WDT_INTENSET_TIMEOUT_Msk (0x1UL << WDT_INTENSET_TIMEOUT_Pos)
#define WDT_INTENSET_TIMEOUT_Disabled (0x0UL)
#define WDT_INTENSET_TIMEOUT_Enabled (0x1UL)
#define WDT_INTENSET_TIMEOUT_Set (0x1UL)

/* Register: WDT_INTENCLR */
/* Description: Disable interrupt */

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define WDT_INTENCLR_STOPPED_Pos (1UL)
#define WDT_INTENCLR_STOPPED_Msk (0x1UL << WDT_INTENCLR_STOPPED_Pos)
#define WDT_INTENCLR_STOPPED_Disabled (0x0UL)
#define WDT_INTENCLR_STOPPED_Enabled (0x1UL)
#define WDT_INTENCLR_STOPPED_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event TIMEOUT */
#define WDT_INTENCLR_TIMEOUT_Pos (0UL)
#define WDT_INTENCLR_TIMEOUT_Msk (0x1UL << WDT_INTENCLR_TIMEOUT_Pos)
#define WDT_INTENCLR_TIMEOUT_Disabled (0x0UL)
#define WDT_INTENCLR_TIMEOUT_Enabled (0x1UL)
#define WDT_INTENCLR_TIMEOUT_Clear (0x1UL)

/* Register: WDT_NMIENSET */
/* Description: Enable interrupt */

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define WDT_NMIENSET_STOPPED_Pos (1UL)
#define WDT_NMIENSET_STOPPED_Msk (0x1UL << WDT_NMIENSET_STOPPED_Pos)
#define WDT_NMIENSET_STOPPED_Disabled (0x0UL)
#define WDT_NMIENSET_STOPPED_Enabled (0x1UL)
#define WDT_NMIENSET_STOPPED_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event TIMEOUT */
#define WDT_NMIENSET_TIMEOUT_Pos (0UL)
#define WDT_NMIENSET_TIMEOUT_Msk (0x1UL << WDT_NMIENSET_TIMEOUT_Pos)
#define WDT_NMIENSET_TIMEOUT_Disabled (0x0UL)
#define WDT_NMIENSET_TIMEOUT_Enabled (0x1UL)
#define WDT_NMIENSET_TIMEOUT_Set (0x1UL)

/* Register: WDT_NMIENCLR */
/* Description: Disable interrupt */

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define WDT_NMIENCLR_STOPPED_Pos (1UL)
#define WDT_NMIENCLR_STOPPED_Msk (0x1UL << WDT_NMIENCLR_STOPPED_Pos)
#define WDT_NMIENCLR_STOPPED_Disabled (0x0UL)
#define WDT_NMIENCLR_STOPPED_Enabled (0x1UL)
#define WDT_NMIENCLR_STOPPED_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event TIMEOUT */
#define WDT_NMIENCLR_TIMEOUT_Pos (0UL)
#define WDT_NMIENCLR_TIMEOUT_Msk (0x1UL << WDT_NMIENCLR_TIMEOUT_Pos)
#define WDT_NMIENCLR_TIMEOUT_Disabled (0x0UL)
#define WDT_NMIENCLR_TIMEOUT_Enabled (0x1UL)
#define WDT_NMIENCLR_TIMEOUT_Clear (0x1UL)

/* Register: WDT_RUNSTATUS */
/* Description: Run status */

/* Bit 0 : Indicates whether or not WDT is running */
#define WDT_RUNSTATUS_RUNSTATUSWDT_Pos (0UL)
#define WDT_RUNSTATUS_RUNSTATUSWDT_Msk (0x1UL << WDT_RUNSTATUS_RUNSTATUSWDT_Pos)
#define WDT_RUNSTATUS_RUNSTATUSWDT_NotRunning (0x0UL)
#define WDT_RUNSTATUS_RUNSTATUSWDT_Running (0x1UL)

/* Register: WDT_REQSTATUS */
/* Description: Request status */

/* Bit 7 : Request status for RR[7] register */
#define WDT_REQSTATUS_RR7_Pos (7UL)
#define WDT_REQSTATUS_RR7_Msk (0x1UL << WDT_REQSTATUS_RR7_Pos)
#define WDT_REQSTATUS_RR7_DisabledOrRequested (0x0UL)
#define WDT_REQSTATUS_RR7_EnabledAndUnrequested (0x1UL)

/* Bit 6 : Request status for RR[6] register */
#define WDT_REQSTATUS_RR6_Pos (6UL)
#define WDT_REQSTATUS_RR6_Msk (0x1UL << WDT_REQSTATUS_RR6_Pos)
#define WDT_REQSTATUS_RR6_DisabledOrRequested (0x0UL)
#define WDT_REQSTATUS_RR6_EnabledAndUnrequested (0x1UL)

/* Bit 5 : Request status for RR[5] register */
#define WDT_REQSTATUS_RR5_Pos (5UL)
#define WDT_REQSTATUS_RR5_Msk (0x1UL << WDT_REQSTATUS_RR5_Pos)
#define WDT_REQSTATUS_RR5_DisabledOrRequested (0x0UL)
#define WDT_REQSTATUS_RR5_EnabledAndUnrequested (0x1UL)

/* Bit 4 : Request status for RR[4] register */
#define WDT_REQSTATUS_RR4_Pos (4UL)
#define WDT_REQSTATUS_RR4_Msk (0x1UL << WDT_REQSTATUS_RR4_Pos)
#define WDT_REQSTATUS_RR4_DisabledOrRequested (0x0UL)
#define WDT_REQSTATUS_RR4_EnabledAndUnrequested (0x1UL)

/* Bit 3 : Request status for RR[3] register */
#define WDT_REQSTATUS_RR3_Pos (3UL)
#define WDT_REQSTATUS_RR3_Msk (0x1UL << WDT_REQSTATUS_RR3_Pos)
#define WDT_REQSTATUS_RR3_DisabledOrRequested (0x0UL)
#define WDT_REQSTATUS_RR3_EnabledAndUnrequested (0x1UL)

/* Bit 2 : Request status for RR[2] register */
#define WDT_REQSTATUS_RR2_Pos (2UL)
#define WDT_REQSTATUS_RR2_Msk (0x1UL << WDT_REQSTATUS_RR2_Pos)
#define WDT_REQSTATUS_RR2_DisabledOrRequested (0x0UL)
#define WDT_REQSTATUS_RR2_EnabledAndUnrequested (0x1UL)

/* Bit 1 : Request status for RR[1] register */
#define WDT_REQSTATUS_RR1_Pos (1UL)
#define WDT_REQSTATUS_RR1_Msk (0x1UL << WDT_REQSTATUS_RR1_Pos)
#define WDT_REQSTATUS_RR1_DisabledOrRequested (0x0UL)
#define WDT_REQSTATUS_RR1_EnabledAndUnrequested (0x1UL)

/* Bit 0 : Request status for RR[0] register */
#define WDT_REQSTATUS_RR0_Pos (0UL)
#define WDT_REQSTATUS_RR0_Msk (0x1UL << WDT_REQSTATUS_RR0_Pos)
#define WDT_REQSTATUS_RR0_DisabledOrRequested (0x0UL)
#define WDT_REQSTATUS_RR0_EnabledAndUnrequested (0x1UL)

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
#define WDT_RREN_RR7_Disabled (0x0UL)
#define WDT_RREN_RR7_Enabled (0x1UL)

/* Bit 6 : Enable or disable RR[6] register */
#define WDT_RREN_RR6_Pos (6UL)
#define WDT_RREN_RR6_Msk (0x1UL << WDT_RREN_RR6_Pos)
#define WDT_RREN_RR6_Disabled (0x0UL)
#define WDT_RREN_RR6_Enabled (0x1UL)

/* Bit 5 : Enable or disable RR[5] register */
#define WDT_RREN_RR5_Pos (5UL)
#define WDT_RREN_RR5_Msk (0x1UL << WDT_RREN_RR5_Pos)
#define WDT_RREN_RR5_Disabled (0x0UL)
#define WDT_RREN_RR5_Enabled (0x1UL)

/* Bit 4 : Enable or disable RR[4] register */
#define WDT_RREN_RR4_Pos (4UL)
#define WDT_RREN_RR4_Msk (0x1UL << WDT_RREN_RR4_Pos)
#define WDT_RREN_RR4_Disabled (0x0UL)
#define WDT_RREN_RR4_Enabled (0x1UL)

/* Bit 3 : Enable or disable RR[3] register */
#define WDT_RREN_RR3_Pos (3UL)
#define WDT_RREN_RR3_Msk (0x1UL << WDT_RREN_RR3_Pos)
#define WDT_RREN_RR3_Disabled (0x0UL)
#define WDT_RREN_RR3_Enabled (0x1UL)

/* Bit 2 : Enable or disable RR[2] register */
#define WDT_RREN_RR2_Pos (2UL)
#define WDT_RREN_RR2_Msk (0x1UL << WDT_RREN_RR2_Pos)
#define WDT_RREN_RR2_Disabled (0x0UL)
#define WDT_RREN_RR2_Enabled (0x1UL)

/* Bit 1 : Enable or disable RR[1] register */
#define WDT_RREN_RR1_Pos (1UL)
#define WDT_RREN_RR1_Msk (0x1UL << WDT_RREN_RR1_Pos)
#define WDT_RREN_RR1_Disabled (0x0UL)
#define WDT_RREN_RR1_Enabled (0x1UL)

/* Bit 0 : Enable or disable RR[0] register */
#define WDT_RREN_RR0_Pos (0UL)
#define WDT_RREN_RR0_Msk (0x1UL << WDT_RREN_RR0_Pos)
#define WDT_RREN_RR0_Disabled (0x0UL)
#define WDT_RREN_RR0_Enabled (0x1UL)

/* Register: WDT_CONFIG */
/* Description: Configuration register */

/* Bit 6 : Allow stopping WDT */
#define WDT_CONFIG_STOPEN_Pos (6UL)
#define WDT_CONFIG_STOPEN_Msk (0x1UL << WDT_CONFIG_STOPEN_Pos)
#define WDT_CONFIG_STOPEN_Disable (0x0UL)
#define WDT_CONFIG_STOPEN_Enable (0x1UL)

/* Bit 3 : Configure WDT to either be paused, or kept running, while the CPU is halted by the debugger */
#define WDT_CONFIG_HALT_Pos (3UL)
#define WDT_CONFIG_HALT_Msk (0x1UL << WDT_CONFIG_HALT_Pos)
#define WDT_CONFIG_HALT_Pause (0x0UL)
#define WDT_CONFIG_HALT_Run (0x1UL)

/* Bit 0 : Configure WDT to either be paused, or kept running, while the CPU is sleeping */
#define WDT_CONFIG_SLEEP_Pos (0UL)
#define WDT_CONFIG_SLEEP_Msk (0x1UL << WDT_CONFIG_SLEEP_Pos)
#define WDT_CONFIG_SLEEP_Pause (0x0UL)
#define WDT_CONFIG_SLEEP_Run (0x1UL)

/* Register: WDT_TSEN */
/* Description: Task stop enable */

/* Bits 31..0 : Allow stopping WDT */
#define WDT_TSEN_TSEN_Pos (0UL)
#define WDT_TSEN_TSEN_Msk (0xFFFFFFFFUL << WDT_TSEN_TSEN_Pos)
#define WDT_TSEN_TSEN_Enable (0x6E524635UL)

/* Register: WDT_RR */
/* Description: Description collection: Reload request n */

/* Bits 31..0 : Reload request register */
#define WDT_RR_RR_Pos (0UL)
#define WDT_RR_RR_Msk (0xFFFFFFFFUL << WDT_RR_RR_Pos)
#define WDT_RR_RR_Reload (0x6E524635UL)


/*lint --flb "Leave library region" */
#endif
