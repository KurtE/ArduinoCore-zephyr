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

#ifndef __NRF5340_APPLICATION_BITS_H
#define __NRF5340_APPLICATION_BITS_H

/*lint ++flb "Enter library region" */

/* Peripheral: CACHEDATA */
/* Description: CACHEDATA */

/* Register: CACHEDATA_SET_WAY_DATA0 */
/* Description: Description cluster: Cache data bits [31:0] of SET[n], WAY[o]. */

/* Bits 31..0 : Data */
#define CACHEDATA_SET_WAY_DATA0_Data_Pos (0UL)
#define CACHEDATA_SET_WAY_DATA0_Data_Msk (0xFFFFFFFFUL << CACHEDATA_SET_WAY_DATA0_Data_Pos)

/* Register: CACHEDATA_SET_WAY_DATA1 */
/* Description: Description cluster: Cache data bits [63:32] of SET[n], WAY[o]. */

/* Bits 31..0 : Data */
#define CACHEDATA_SET_WAY_DATA1_Data_Pos (0UL)
#define CACHEDATA_SET_WAY_DATA1_Data_Msk (0xFFFFFFFFUL << CACHEDATA_SET_WAY_DATA1_Data_Pos)

/* Register: CACHEDATA_SET_WAY_DATA2 */
/* Description: Description cluster: Cache data bits [95:64] of SET[n], WAY[o]. */

/* Bits 31..0 : Data */
#define CACHEDATA_SET_WAY_DATA2_Data_Pos (0UL)
#define CACHEDATA_SET_WAY_DATA2_Data_Msk (0xFFFFFFFFUL << CACHEDATA_SET_WAY_DATA2_Data_Pos)

/* Register: CACHEDATA_SET_WAY_DATA3 */
/* Description: Description cluster: Cache data bits [127:96] of SET[n], WAY[o]. */

/* Bits 31..0 : Data */
#define CACHEDATA_SET_WAY_DATA3_Data_Pos (0UL)
#define CACHEDATA_SET_WAY_DATA3_Data_Msk (0xFFFFFFFFUL << CACHEDATA_SET_WAY_DATA3_Data_Pos)


/* Peripheral: CACHEINFO */
/* Description: CACHEINFO */

/* Register: CACHEINFO_SET_WAY */
/* Description: Description collection: Cache information for SET[n], WAY[o]. */

/* Bit 31 : Most recently used way. */
#define CACHEINFO_SET_WAY_MRU_Pos (31UL)
#define CACHEINFO_SET_WAY_MRU_Msk (0x1UL << CACHEINFO_SET_WAY_MRU_Pos)
#define CACHEINFO_SET_WAY_MRU_Way0 (0x0UL)
#define CACHEINFO_SET_WAY_MRU_Way1 (0x1UL)

/* Bit 30 : Valid bit */
#define CACHEINFO_SET_WAY_V_Pos (30UL)
#define CACHEINFO_SET_WAY_V_Msk (0x1UL << CACHEINFO_SET_WAY_V_Pos)
#define CACHEINFO_SET_WAY_V_Invalid (0x0UL)
#define CACHEINFO_SET_WAY_V_Valid (0x1UL)

/* Bits 16..0 : Cache tag. */
#define CACHEINFO_SET_WAY_TAG_Pos (0UL)
#define CACHEINFO_SET_WAY_TAG_Msk (0x1FFFFUL << CACHEINFO_SET_WAY_TAG_Pos)


/* Peripheral: CACHE */
/* Description: Cache */

/* Register: CACHE_PROFILING_IHIT */
/* Description: Description cluster: Instruction fetch cache hit counter for cache region n, where n=0 means Flash and n=1 means XIP. */

/* Bits 31..0 : Number of instruction cache hits */
#define CACHE_PROFILING_IHIT_HITS_Pos (0UL)
#define CACHE_PROFILING_IHIT_HITS_Msk (0xFFFFFFFFUL << CACHE_PROFILING_IHIT_HITS_Pos)

/* Register: CACHE_PROFILING_IMISS */
/* Description: Description cluster: Instruction fetch cache miss counter for cache region n, where n=0 means Flash and n=1 means XIP. */

/* Bits 31..0 : Number of instruction cache misses */
#define CACHE_PROFILING_IMISS_MISSES_Pos (0UL)
#define CACHE_PROFILING_IMISS_MISSES_Msk (0xFFFFFFFFUL << CACHE_PROFILING_IMISS_MISSES_Pos)

/* Register: CACHE_PROFILING_DHIT */
/* Description: Description cluster: Data fetch cache hit counter for cache region n, where n=0 means Flash and n=1 means XIP. */

/* Bits 31..0 : Number of data cache hits */
#define CACHE_PROFILING_DHIT_HITS_Pos (0UL)
#define CACHE_PROFILING_DHIT_HITS_Msk (0xFFFFFFFFUL << CACHE_PROFILING_DHIT_HITS_Pos)

/* Register: CACHE_PROFILING_DMISS */
/* Description: Description cluster: Data fetch cache miss counter for cache region n, where n=0 means Flash and n=1 means XIP. */

/* Bits 31..0 : Number of data cache misses */
#define CACHE_PROFILING_DMISS_MISSES_Pos (0UL)
#define CACHE_PROFILING_DMISS_MISSES_Msk (0xFFFFFFFFUL << CACHE_PROFILING_DMISS_MISSES_Pos)

/* Register: CACHE_ENABLE */
/* Description: Enable cache. */

/* Bit 0 : Enable cache */
#define CACHE_ENABLE_ENABLE_Pos (0UL)
#define CACHE_ENABLE_ENABLE_Msk (0x1UL << CACHE_ENABLE_ENABLE_Pos)
#define CACHE_ENABLE_ENABLE_Disabled (0x0UL)
#define CACHE_ENABLE_ENABLE_Enabled (0x1UL)

/* Register: CACHE_INVALIDATE */
/* Description: Invalidate the cache. */

/* Bit 0 : Invalidate the cache */
#define CACHE_INVALIDATE_INVALIDATE_Pos (0UL)
#define CACHE_INVALIDATE_INVALIDATE_Msk (0x1UL << CACHE_INVALIDATE_INVALIDATE_Pos)
#define CACHE_INVALIDATE_INVALIDATE_Invalidate (0x1UL)

/* Register: CACHE_ERASE */
/* Description: Erase the cache. */

/* Bit 0 : Erase the cache */
#define CACHE_ERASE_ERASE_Pos (0UL)
#define CACHE_ERASE_ERASE_Msk (0x1UL << CACHE_ERASE_ERASE_Pos)
#define CACHE_ERASE_ERASE_Erase (0x1UL)

/* Register: CACHE_PROFILINGENABLE */
/* Description: Enable the profiling counters. */

/* Bit 0 : Enable the profiling counters */
#define CACHE_PROFILINGENABLE_ENABLE_Pos (0UL)
#define CACHE_PROFILINGENABLE_ENABLE_Msk (0x1UL << CACHE_PROFILINGENABLE_ENABLE_Pos)
#define CACHE_PROFILINGENABLE_ENABLE_Disable (0x0UL)
#define CACHE_PROFILINGENABLE_ENABLE_Enable (0x1UL)

/* Register: CACHE_PROFILINGCLEAR */
/* Description: Clear the profiling counters. */

/* Bit 0 : Clearing the profiling counters */
#define CACHE_PROFILINGCLEAR_CLEAR_Pos (0UL)
#define CACHE_PROFILINGCLEAR_CLEAR_Msk (0x1UL << CACHE_PROFILINGCLEAR_CLEAR_Pos)
#define CACHE_PROFILINGCLEAR_CLEAR_Clear (0x1UL)

/* Register: CACHE_MODE */
/* Description: Cache mode. Switching from Cache to Ram mode causes the RAM to be cleared. Switching from RAM to Cache mode causes the cache to be invalidated. */

/* Bit 0 : Cache mode */
#define CACHE_MODE_MODE_Pos (0UL)
#define CACHE_MODE_MODE_Msk (0x1UL << CACHE_MODE_MODE_Pos)
#define CACHE_MODE_MODE_Cache (0x0UL)
#define CACHE_MODE_MODE_Ram (0x1UL)

/* Register: CACHE_DEBUGLOCK */
/* Description: Lock debug mode. */

/* Bit 0 : Lock debug mode */
#define CACHE_DEBUGLOCK_DEBUGLOCK_Pos (0UL)
#define CACHE_DEBUGLOCK_DEBUGLOCK_Msk (0x1UL << CACHE_DEBUGLOCK_DEBUGLOCK_Pos)
#define CACHE_DEBUGLOCK_DEBUGLOCK_Unlocked (0x0UL)
#define CACHE_DEBUGLOCK_DEBUGLOCK_Locked (0x1UL)

/* Register: CACHE_ERASESTATUS */
/* Description: Cache erase status. */

/* Bit 0 : Cache erase status */
#define CACHE_ERASESTATUS_ERASESTATUS_Pos (0UL)
#define CACHE_ERASESTATUS_ERASESTATUS_Msk (0x1UL << CACHE_ERASESTATUS_ERASESTATUS_Pos)
#define CACHE_ERASESTATUS_ERASESTATUS_Idle (0x0UL)
#define CACHE_ERASESTATUS_ERASESTATUS_Finished (0x1UL)

/* Register: CACHE_WRITELOCK */
/* Description: Lock cache updates. Prevents updating of cache content on cache misses, but will continue to lookup instruction/data fetches in content already present in the cache. Ignored in RAM mode. */

/* Bit 0 : Lock cache updates */
#define CACHE_WRITELOCK_WRITELOCK_Pos (0UL)
#define CACHE_WRITELOCK_WRITELOCK_Msk (0x1UL << CACHE_WRITELOCK_WRITELOCK_Pos)
#define CACHE_WRITELOCK_WRITELOCK_Unlocked (0x0UL)
#define CACHE_WRITELOCK_WRITELOCK_Locked (0x1UL)


/* Peripheral: CC_AES */
/* Description: CRYPTOCELL AES engine */

/* Register: CC_AES_AES_KEY_0 */
/* Description: Description collection: AES key value to use in non-tunneling operations, or as the first tunnel stage key in tunneling operations.
        The initial AES_KEY_0[0] register holds the least significant bits [31:0] of the key value. */

/* Bits 31..0 : AES non-tunneling or first tunnel stage key value. */
#define CC_AES_AES_KEY_0_VALUE_Pos (0UL)
#define CC_AES_AES_KEY_0_VALUE_Msk (0xFFFFFFFFUL << CC_AES_AES_KEY_0_VALUE_Pos)

/* Register: CC_AES_AES_KEY_1 */
/* Description: Description collection: AES key value to use as the second tunnel stage key in tunneling operations.
        The initial AES_KEY_1[0] register holds the least significant bits [31:0] of the key value. */

/* Bits 31..0 : AES second tunnel stage key value. */
#define CC_AES_AES_KEY_1_VALUE_Pos (0UL)
#define CC_AES_AES_KEY_1_VALUE_Msk (0xFFFFFFFFUL << CC_AES_AES_KEY_1_VALUE_Pos)

/* Register: CC_AES_AES_IV_0 */
/* Description: Description collection: AES Initialization Vector (IV) to use in non-tunneling operations, or as the first tunnel stage IV in tunneling operations.
        The initial AES_IV_0[0] register holds the least significant bits [31:0] of the IV. */

/* Bits 31..0 : AES non-tunneling or first tunnel stage IV value. */
#define CC_AES_AES_IV_0_VALUE_Pos (0UL)
#define CC_AES_AES_IV_0_VALUE_Msk (0xFFFFFFFFUL << CC_AES_AES_IV_0_VALUE_Pos)

/* Register: CC_AES_AES_IV_1 */
/* Description: Description collection: AES Initialization Vector (IV) to use as the second tunnel stage IV in tunneling operations.
        The initial AES_IV_1[0] register holds the least significant bits [31:0] of the IV. */

/* Bits 31..0 : AES second tunnel stage IV value. */
#define CC_AES_AES_IV_1_VALUE_Pos (0UL)
#define CC_AES_AES_IV_1_VALUE_Msk (0xFFFFFFFFUL << CC_AES_AES_IV_1_VALUE_Pos)

/* Register: CC_AES_AES_CTR */
/* Description: Description collection: AES counter (CTR) to use in non-tunneling and tunneling operations.
        The initial AES_CTR[0] register holds the least significant bits [31:0] of the CTR. */

/* Bits 31..0 : AES CTR value. */
#define CC_AES_AES_CTR_VALUE_Pos (0UL)
#define CC_AES_AES_CTR_VALUE_Msk (0xFFFFFFFFUL << CC_AES_AES_CTR_VALUE_Pos)

/* Register: CC_AES_AES_BUSY */
/* Description: Status register for AES engine activity. */

/* Bit 0 : AES engine status. */
#define CC_AES_AES_BUSY_STATUS_Pos (0UL)
#define CC_AES_AES_BUSY_STATUS_Msk (0x1UL << CC_AES_AES_BUSY_STATUS_Pos)
#define CC_AES_AES_BUSY_STATUS_Idle (0x0UL)
#define CC_AES_AES_BUSY_STATUS_Busy (0x1UL)

/* Register: CC_AES_AES_CMAC_INIT */
/* Description: Writing to this address triggers the AES engine to generate K1 and K2 for AES-CMAC operations. */

/* Bit 0 : Generate K1 and K2 for the AES-CMAC operations. */
#define CC_AES_AES_CMAC_INIT_ENABLE_Pos (0UL)
#define CC_AES_AES_CMAC_INIT_ENABLE_Msk (0x1UL << CC_AES_AES_CMAC_INIT_ENABLE_Pos)
#define CC_AES_AES_CMAC_INIT_ENABLE_Enable (0x1UL)

/* Register: CC_AES_AES_REMAINING_BYTES */
/* Description: This register should be set with the amount of remaining bytes until the end of the current AES operation. */

/* Bits 31..0 : Remaining bytes util the end of the current AES operation. */
#define CC_AES_AES_REMAINING_BYTES_VALUE_Pos (0UL)
#define CC_AES_AES_REMAINING_BYTES_VALUE_Msk (0xFFFFFFFFUL << CC_AES_AES_REMAINING_BYTES_VALUE_Pos)

/* Register: CC_AES_AES_CONTROL */
/* Description: Control the AES engine behavior. */

/* Bit 31 : Using direct access and not the DIN-DOUT DMA interface */
#define CC_AES_AES_CONTROL_DIRECT_ACCESS_Pos (31UL)
#define CC_AES_AES_CONTROL_DIRECT_ACCESS_Msk (0x1UL << CC_AES_AES_CONTROL_DIRECT_ACCESS_Pos)
#define CC_AES_AES_CONTROL_DIRECT_ACCESS_Disable (0x0UL)
#define CC_AES_AES_CONTROL_DIRECT_ACCESS_Enable (0x1UL)

/* Bit 28 : This field determines for AES-TO-HASH-AND-DOUT tunneling operations, whether the AES outputs to the HASH the result of the first or the second tunneling stage. */
#define CC_AES_AES_CONTROL_AES_OUT_MID_TUN_TO_HASH_Pos (28UL)
#define CC_AES_AES_CONTROL_AES_OUT_MID_TUN_TO_HASH_Msk (0x1UL << CC_AES_AES_CONTROL_AES_OUT_MID_TUN_TO_HASH_Pos)
#define CC_AES_AES_CONTROL_AES_OUT_MID_TUN_TO_HASH_SecondStage (0x0UL)
#define CC_AES_AES_CONTROL_AES_OUT_MID_TUN_TO_HASH_FirstStage (0x1UL)

/* Bit 26 : This field configure if the input data to the second tunnel stage is to be padded with zeroes according to how many bytes are remaining. */
#define CC_AES_AES_CONTROL_AES_TUNNEL_B1_PAD_EN_Pos (26UL)
#define CC_AES_AES_CONTROL_AES_TUNNEL_B1_PAD_EN_Msk (0x1UL << CC_AES_AES_CONTROL_AES_TUNNEL_B1_PAD_EN_Pos)
#define CC_AES_AES_CONTROL_AES_TUNNEL_B1_PAD_EN_Disable (0x0UL)
#define CC_AES_AES_CONTROL_AES_TUNNEL_B1_PAD_EN_Enable (0x1UL)

/* Bit 25 : This fields configure if the AES engine output is the result of the first or second tunneling stage. */
#define CC_AES_AES_CONTROL_AES_OUTPUT_MID_TUNNEL_DATA_Pos (25UL)
#define CC_AES_AES_CONTROL_AES_OUTPUT_MID_TUNNEL_DATA_Msk (0x1UL << CC_AES_AES_CONTROL_AES_OUTPUT_MID_TUNNEL_DATA_Pos)
#define CC_AES_AES_CONTROL_AES_OUTPUT_MID_TUNNEL_DATA_SecondStage (0x0UL)
#define CC_AES_AES_CONTROL_AES_OUTPUT_MID_TUNNEL_DATA_FirstStage (0x1UL)

/* Bit 24 : Configure if first tunnel stage performs encrypt or decrypt operation. */
#define CC_AES_AES_CONTROL_AES_TUNNEL0_ENCRYPT_Pos (24UL)
#define CC_AES_AES_CONTROL_AES_TUNNEL0_ENCRYPT_Msk (0x1UL << CC_AES_AES_CONTROL_AES_TUNNEL0_ENCRYPT_Pos)
#define CC_AES_AES_CONTROL_AES_TUNNEL0_ENCRYPT_Decrypt (0x0UL)
#define CC_AES_AES_CONTROL_AES_TUNNEL0_ENCRYPT_Encrypt (0x1UL)

/* Bit 23 : For tunneling operations this field determine the data that is fed to the second tunneling stage. */
#define CC_AES_AES_CONTROL_AES_TUN_B1_USES_PADDED_DATA_IN_Pos (23UL)
#define CC_AES_AES_CONTROL_AES_TUN_B1_USES_PADDED_DATA_IN_Msk (0x1UL << CC_AES_AES_CONTROL_AES_TUN_B1_USES_PADDED_DATA_IN_Pos)
#define CC_AES_AES_CONTROL_AES_TUN_B1_USES_PADDED_DATA_IN_Disable (0x0UL)
#define CC_AES_AES_CONTROL_AES_TUN_B1_USES_PADDED_DATA_IN_Enable (0x1UL)

/* Bit 22 : Configure if first tunnel stage performs encrypt or decrypt operation. */
#define CC_AES_AES_CONTROL_AES_TUNNEL1_DECRYPT_Pos (22UL)
#define CC_AES_AES_CONTROL_AES_TUNNEL1_DECRYPT_Msk (0x1UL << CC_AES_AES_CONTROL_AES_TUNNEL1_DECRYPT_Pos)
#define CC_AES_AES_CONTROL_AES_TUNNEL1_DECRYPT_Encrypt (0x0UL)
#define CC_AES_AES_CONTROL_AES_TUNNEL1_DECRYPT_Decrypt (0x1UL)

/* Bits 15..14 : Set the AES key length of the second stage in tunneling operations. */
#define CC_AES_AES_CONTROL_NK_KEY1_Pos (14UL)
#define CC_AES_AES_CONTROL_NK_KEY1_Msk (0x3UL << CC_AES_AES_CONTROL_NK_KEY1_Pos)
#define CC_AES_AES_CONTROL_NK_KEY1_128Bits (0x0UL)
#define CC_AES_AES_CONTROL_NK_KEY1_192Bits (0x1UL)
#define CC_AES_AES_CONTROL_NK_KEY1_256Bits (0x2UL)

/* Bits 13..12 : Set the AES key length in non-tunneling operations, or the AES key length of the first stage in tunneling operations. */
#define CC_AES_AES_CONTROL_NK_KEY0_Pos (12UL)
#define CC_AES_AES_CONTROL_NK_KEY0_Msk (0x3UL << CC_AES_AES_CONTROL_NK_KEY0_Pos)
#define CC_AES_AES_CONTROL_NK_KEY0_128Bits (0x0UL)
#define CC_AES_AES_CONTROL_NK_KEY0_192Bits (0x1UL)
#define CC_AES_AES_CONTROL_NK_KEY0_256Bits (0x2UL)

/* Bit 11 : If MODE_KEY0 is set to CBC, and this field is set, the mode is CBC Bitlocker. */
#define CC_AES_AES_CONTROL_CBC_IS_BITLOCKER_Pos (11UL)
#define CC_AES_AES_CONTROL_CBC_IS_BITLOCKER_Msk (0x1UL << CC_AES_AES_CONTROL_CBC_IS_BITLOCKER_Pos)
#define CC_AES_AES_CONTROL_CBC_IS_BITLOCKER_Disable (0x0UL)
#define CC_AES_AES_CONTROL_CBC_IS_BITLOCKER_Enable (0x1UL)

/* Bit 10 : Configure AES engine for standard non-tunneling or tunneling operations. */
#define CC_AES_AES_CONTROL_AES_TUNNEL_Pos (10UL)
#define CC_AES_AES_CONTROL_AES_TUNNEL_Msk (0x1UL << CC_AES_AES_CONTROL_AES_TUNNEL_Pos)
#define CC_AES_AES_CONTROL_AES_TUNNEL_Disable (0x0UL)
#define CC_AES_AES_CONTROL_AES_TUNNEL_Enable (0x1UL)

/* Bit 8 : If MODE_KEY0 is set to CBC, and this field is set, the mode is CBC with ESSIV. */
#define CC_AES_AES_CONTROL_CBC_IS_ESSIV_Pos (8UL)
#define CC_AES_AES_CONTROL_CBC_IS_ESSIV_Msk (0x1UL << CC_AES_AES_CONTROL_CBC_IS_ESSIV_Pos)
#define CC_AES_AES_CONTROL_CBC_IS_ESSIV_Disable (0x0UL)
#define CC_AES_AES_CONTROL_CBC_IS_ESSIV_Enable (0x1UL)

/* Bits 7..5 : Set the AES mode of the second stage in tunneling operations */
#define CC_AES_AES_CONTROL_MODE_KEY1_Pos (5UL)
#define CC_AES_AES_CONTROL_MODE_KEY1_Msk (0x7UL << CC_AES_AES_CONTROL_MODE_KEY1_Pos)
#define CC_AES_AES_CONTROL_MODE_KEY1_ECB (0x0UL)
#define CC_AES_AES_CONTROL_MODE_KEY1_CBC (0x1UL)
#define CC_AES_AES_CONTROL_MODE_KEY1_CTR (0x2UL)
#define CC_AES_AES_CONTROL_MODE_KEY1_CBC_MAC (0x3UL)
#define CC_AES_AES_CONTROL_MODE_KEY1_XEX_XTS (0x4UL)
#define CC_AES_AES_CONTROL_MODE_KEY1_XCBC_MAC (0x5UL)
#define CC_AES_AES_CONTROL_MODE_KEY1_OFB (0x6UL)
#define CC_AES_AES_CONTROL_MODE_KEY1_CMAC (0x7UL)

/* Bits 4..2 : Set the AES mode in non-tunneling operations, or the AES mode of the first stage in tunneling operations. */
#define CC_AES_AES_CONTROL_MODE_KEY0_Pos (2UL)
#define CC_AES_AES_CONTROL_MODE_KEY0_Msk (0x7UL << CC_AES_AES_CONTROL_MODE_KEY0_Pos)
#define CC_AES_AES_CONTROL_MODE_KEY0_ECB (0x0UL)
#define CC_AES_AES_CONTROL_MODE_KEY0_CBC (0x1UL)
#define CC_AES_AES_CONTROL_MODE_KEY0_CTR (0x2UL)
#define CC_AES_AES_CONTROL_MODE_KEY0_CBC_MAC (0x3UL)
#define CC_AES_AES_CONTROL_MODE_KEY0_XEX_XTS (0x4UL)
#define CC_AES_AES_CONTROL_MODE_KEY0_XCBC_MAC (0x5UL)
#define CC_AES_AES_CONTROL_MODE_KEY0_OFB (0x6UL)
#define CC_AES_AES_CONTROL_MODE_KEY0_CMAC (0x7UL)

/* Bit 1 : This field allows to add distinction to the CBC and CTR modes defined in field MODE_KEY0.
          If MODE_KEY0 is set to CBC in combination with this field, AES mode is CBC-CTS. If MODE_KEY0 
          is set to CTR in combination with this field, AES mode is GCTR. */
#define CC_AES_AES_CONTROL_MODE0_IS_CBC_CTS_Pos (1UL)
#define CC_AES_AES_CONTROL_MODE0_IS_CBC_CTS_Msk (0x1UL << CC_AES_AES_CONTROL_MODE0_IS_CBC_CTS_Pos)
#define CC_AES_AES_CONTROL_MODE0_IS_CBC_CTS_Disable (0x0UL)
#define CC_AES_AES_CONTROL_MODE0_IS_CBC_CTS_Enable (0x1UL)

/* Bit 0 : Set AES encrypt or decrypt mode in non-tunneling operations. */
#define CC_AES_AES_CONTROL_DEC_KEY0_Pos (0UL)
#define CC_AES_AES_CONTROL_DEC_KEY0_Msk (0x1UL << CC_AES_AES_CONTROL_DEC_KEY0_Pos)
#define CC_AES_AES_CONTROL_DEC_KEY0_Encrypt (0x0UL)
#define CC_AES_AES_CONTROL_DEC_KEY0_Decrypt (0x1UL)

/* Register: CC_AES_AES_HW_FLAGS */
/* Description: Hardware configuration of the AES engine. Reset value holds the supported features. */

/* Bit 12 : If this flag is set, the engine support DFA countermeasures. */
#define CC_AES_AES_HW_FLAGS_DFA_CNTRMSR_EXIST_Pos (12UL)
#define CC_AES_AES_HW_FLAGS_DFA_CNTRMSR_EXIST_Msk (0x1UL << CC_AES_AES_HW_FLAGS_DFA_CNTRMSR_EXIST_Pos)

/* Bit 11 : If this flag is set, the engine support a second register set for tunneling operations. */
#define CC_AES_AES_HW_FLAGS_SECOND_REGS_SET_EXIST_Pos (11UL)
#define CC_AES_AES_HW_FLAGS_SECOND_REGS_SET_EXIST_Msk (0x1UL << CC_AES_AES_HW_FLAGS_SECOND_REGS_SET_EXIST_Pos)

/* Bit 10 : If this flag is set, the engine support tunneling operations. */
#define CC_AES_AES_HW_FLAGS_AES_TUNNEL_EXIST_Pos (10UL)
#define CC_AES_AES_HW_FLAGS_AES_TUNNEL_EXIST_Msk (0x1UL << CC_AES_AES_HW_FLAGS_AES_TUNNEL_EXIST_Pos)

/* Bit 9 : If this flag is set, the engine contains the PREV_IV register for faster AES XCBC MAC calculation. */
#define CC_AES_AES_HW_FLAGS_AES_SUPPORT_PREV_IV_Pos (9UL)
#define CC_AES_AES_HW_FLAGS_AES_SUPPORT_PREV_IV_Msk (0x1UL << CC_AES_AES_HW_FLAGS_AES_SUPPORT_PREV_IV_Pos)

/* Bit 8 : If this flag is set, the engine uses 5 SBOX where each AES round takes 4 cycles. */
#define CC_AES_AES_HW_FLAGS_USE_5_SBOXES_Pos (8UL)
#define CC_AES_AES_HW_FLAGS_USE_5_SBOXES_Msk (0x1UL << CC_AES_AES_HW_FLAGS_USE_5_SBOXES_Pos)

/* Bit 5 : If this flag is set, the engine uses SBOX tables. */
#define CC_AES_AES_HW_FLAGS_USE_SBOX_TABLE_Pos (5UL)
#define CC_AES_AES_HW_FLAGS_USE_SBOX_TABLE_Msk (0x1UL << CC_AES_AES_HW_FLAGS_USE_SBOX_TABLE_Pos)

/* Bit 4 : If this flag is set, the engine only support encrypt operations. */
#define CC_AES_AES_HW_FLAGS_ONLY_ENCRYPT_Pos (4UL)
#define CC_AES_AES_HW_FLAGS_ONLY_ENCRYPT_Msk (0x1UL << CC_AES_AES_HW_FLAGS_ONLY_ENCRYPT_Pos)

/* Bit 3 : If this flag is set, the engine support AES CTR mode. */
#define CC_AES_AES_HW_FLAGS_CTR_EXIST_Pos (3UL)
#define CC_AES_AES_HW_FLAGS_CTR_EXIST_Msk (0x1UL << CC_AES_AES_HW_FLAGS_CTR_EXIST_Pos)

/* Bit 2 : If this flag is set, the engine support DPA countermeasures. */
#define CC_AES_AES_HW_FLAGS_DPA_CNTRMSR_EXIST_Pos (2UL)
#define CC_AES_AES_HW_FLAGS_DPA_CNTRMSR_EXIST_Msk (0x1UL << CC_AES_AES_HW_FLAGS_DPA_CNTRMSR_EXIST_Pos)

/* Bit 1 : If this flag is set, the engine support AES_LARGE_RKEK. */
#define CC_AES_AES_HW_FLAGS_AES_LARGE_RKEK_Pos (1UL)
#define CC_AES_AES_HW_FLAGS_AES_LARGE_RKEK_Msk (0x1UL << CC_AES_AES_HW_FLAGS_AES_LARGE_RKEK_Pos)

/* Bit 0 : If this flag is set, the engine support 192 bits and 256 bits key size. */
#define CC_AES_AES_HW_FLAGS_SUPPORT_256_192_KEY_Pos (0UL)
#define CC_AES_AES_HW_FLAGS_SUPPORT_256_192_KEY_Msk (0x1UL << CC_AES_AES_HW_FLAGS_SUPPORT_256_192_KEY_Pos)

/* Register: CC_AES_AES_CTR_NO_INCREMENT */
/* Description: This register enables the AES CTR no increment mode in which the counter mode is not incremented between two blocks */

/* Bit 0 : This field enables the AES CTR no increment mode in which the counter mode is not incremented between two blocks */
#define CC_AES_AES_CTR_NO_INCREMENT_ENABLE_Pos (0UL)
#define CC_AES_AES_CTR_NO_INCREMENT_ENABLE_Msk (0x1UL << CC_AES_AES_CTR_NO_INCREMENT_ENABLE_Pos)
#define CC_AES_AES_CTR_NO_INCREMENT_ENABLE_Disable (0x0UL)
#define CC_AES_AES_CTR_NO_INCREMENT_ENABLE_Enable (0x1UL)

/* Register: CC_AES_AES_SW_RESET */
/* Description: Reset the AES engine. */

/* Bit 0 : Writing any value to this address resets the AES engine. The reset takes 4 CPU clock cycles to complete. */
#define CC_AES_AES_SW_RESET_RESET_Pos (0UL)
#define CC_AES_AES_SW_RESET_RESET_Msk (0x1UL << CC_AES_AES_SW_RESET_RESET_Pos)
#define CC_AES_AES_SW_RESET_RESET_Enable (0x1UL)

/* Register: CC_AES_AES_CMAC_SIZE0_KICK */
/* Description: Writing to this address triggers the AES engine to perform a CMAC operation with size 0. The CMAC result can be read from the AES_IV_0 register. */

/* Bit 0 : Force AES CMAC operation with size 0. */
#define CC_AES_AES_CMAC_SIZE0_KICK_ENABLE_Pos (0UL)
#define CC_AES_AES_CMAC_SIZE0_KICK_ENABLE_Msk (0x1UL << CC_AES_AES_CMAC_SIZE0_KICK_ENABLE_Pos)
#define CC_AES_AES_CMAC_SIZE0_KICK_ENABLE_Disable (0x0UL)
#define CC_AES_AES_CMAC_SIZE0_KICK_ENABLE_Enable (0x1UL)


/* Peripheral: CC_AHB */
/* Description: CRYPTOCELL AHB interface */

/* Register: CC_AHB_AHBM_SINGLES */
/* Description: This register forces the AHB transactions from CRYPTOCELL master to be always singles. */

/* Bit 0 : Force AHB singles */
#define CC_AHB_AHBM_SINGLES_AHB_SINGLES_Pos (0UL)
#define CC_AHB_AHBM_SINGLES_AHB_SINGLES_Msk (0x1UL << CC_AHB_AHBM_SINGLES_AHB_SINGLES_Pos)

/* Register: CC_AHB_AHBM_HPROT */
/* Description: This register holds the AHB HPROT value */

/* Bits 3..0 : The AHB HPROT value */
#define CC_AHB_AHBM_HPROT_AHB_HPROT_Pos (0UL)
#define CC_AHB_AHBM_HPROT_AHB_HPROT_Msk (0xFUL << CC_AHB_AHBM_HPROT_AHB_HPROT_Pos)

/* Register: CC_AHB_AHBM_HMASTLOCK */
/* Description: This register holds AHB HMASTLOCK value */

/* Bit 0 : The AHB HMASTLOCK value. */
#define CC_AHB_AHBM_HMASTLOCK_AHB_HMASTLOCK_Pos (0UL)
#define CC_AHB_AHBM_HMASTLOCK_AHB_HMASTLOCK_Msk (0x1UL << CC_AHB_AHBM_HMASTLOCK_AHB_HMASTLOCK_Pos)

/* Register: CC_AHB_AHBM_HNONSEC */
/* Description: This register holds AHB HNONSEC value */

/* Bit 1 : The AHB HNONSEC value for read transaction. */
#define CC_AHB_AHBM_HNONSEC_AHB_READ_HNONSEC_Pos (1UL)
#define CC_AHB_AHBM_HNONSEC_AHB_READ_HNONSEC_Msk (0x1UL << CC_AHB_AHBM_HNONSEC_AHB_READ_HNONSEC_Pos)

/* Bit 0 : The AHB HNONSEC value for write transaction. */
#define CC_AHB_AHBM_HNONSEC_AHB_WRITE_HNONSEC_Pos (0UL)
#define CC_AHB_AHBM_HNONSEC_AHB_WRITE_HNONSEC_Msk (0x1UL << CC_AHB_AHBM_HNONSEC_AHB_WRITE_HNONSEC_Pos)


/* Peripheral: CC_AO */
/* Description: CryptoCell AO */

/* Register: CC_AO_AO_APB_FILTERING */
/* Description: This register holds the AO_APB_FILTERING configuration. */

/* Bit 3 : When this FW controlled field is set, the APBC_ONLY_PRIV_ACCESS_ALLOWED field cannot be modified until the next PoR */
#define CC_AO_AO_APB_FILTERING_ONLY_PRIV_ACCESS_ALLOWED_LOCK_Pos (3UL)
#define CC_AO_AO_APB_FILTERING_ONLY_PRIV_ACCESS_ALLOWED_LOCK_Msk (0x1UL << CC_AO_AO_APB_FILTERING_ONLY_PRIV_ACCESS_ALLOWED_LOCK_Pos)

/* Bit 2 : When this FW controlled field is set, the APB slave accepts only privileged accesses */
#define CC_AO_AO_APB_FILTERING_ONLY_PRIV_ACCESS_ALLOWED_Pos (2UL)
#define CC_AO_AO_APB_FILTERING_ONLY_PRIV_ACCESS_ALLOWED_Msk (0x1UL << CC_AO_AO_APB_FILTERING_ONLY_PRIV_ACCESS_ALLOWED_Pos)

/* Bit 1 : When this FW controlled field is set, the ONLY_SEC_ACCESS_ALLOWED field cannot be modified until the next PoR */
#define CC_AO_AO_APB_FILTERING_ONLY_SEC_ACCESS_ALLOWED_LOCK_Pos (1UL)
#define CC_AO_AO_APB_FILTERING_ONLY_SEC_ACCESS_ALLOWED_LOCK_Msk (0x1UL << CC_AO_AO_APB_FILTERING_ONLY_SEC_ACCESS_ALLOWED_LOCK_Pos)

/* Bit 0 : When this FW controlled field is set, the APB slave accepts only secure accesses */
#define CC_AO_AO_APB_FILTERING_ONLY_SEC_ACCESS_ALLOWED_Pos (0UL)
#define CC_AO_AO_APB_FILTERING_ONLY_SEC_ACCESS_ALLOWED_Msk (0x1UL << CC_AO_AO_APB_FILTERING_ONLY_SEC_ACCESS_ALLOWED_Pos)

/* Register: CC_AO_CC_SW_RESET */
/* Description: Reset the CRYPTOCELL subsystem. */

/* Bit 0 : Writing any value to this address resets the CRYPTOCELL subsystem. The reset takes 4 CPU clock cycles to complete. */
#define CC_AO_CC_SW_RESET_RESET_Pos (0UL)
#define CC_AO_CC_SW_RESET_RESET_Msk (0x1UL << CC_AO_CC_SW_RESET_RESET_Pos)
#define CC_AO_CC_SW_RESET_RESET_Enable (0x1UL)


/* Peripheral: CC_CHACHA */
/* Description: CRYPTOCELL CHACHA engine */

/* Register: CC_CHACHA_CHACHA_CONTROL */
/* Description: Control the CHACHA engine behavior. */

/* Bit 10 : Use 96 bits Initialization Vector (IV) */
#define CC_CHACHA_CHACHA_CONTROL_USE_IV_96BIT_Pos (10UL)
#define CC_CHACHA_CHACHA_CONTROL_USE_IV_96BIT_Msk (0x1UL << CC_CHACHA_CHACHA_CONTROL_USE_IV_96BIT_Pos)
#define CC_CHACHA_CHACHA_CONTROL_USE_IV_96BIT_Disable (0x0UL)
#define CC_CHACHA_CHACHA_CONTROL_USE_IV_96BIT_Enable (0x1UL)

/* Bit 9 : Reset block counter for new messages */
#define CC_CHACHA_CHACHA_CONTROL_RESET_BLOCK_CNT_Pos (9UL)
#define CC_CHACHA_CHACHA_CONTROL_RESET_BLOCK_CNT_Msk (0x1UL << CC_CHACHA_CHACHA_CONTROL_RESET_BLOCK_CNT_Pos)
#define CC_CHACHA_CHACHA_CONTROL_RESET_BLOCK_CNT_Disable (0x0UL)
#define CC_CHACHA_CHACHA_CONTROL_RESET_BLOCK_CNT_Enable (0x1UL)

/* Bits 5..4 : Set number of permutation rounds, default value is 20. */
#define CC_CHACHA_CHACHA_CONTROL_NUM_OF_ROUNDS_Pos (4UL)
#define CC_CHACHA_CHACHA_CONTROL_NUM_OF_ROUNDS_Msk (0x3UL << CC_CHACHA_CHACHA_CONTROL_NUM_OF_ROUNDS_Pos)
#define CC_CHACHA_CHACHA_CONTROL_NUM_OF_ROUNDS_Default (0x0UL)
#define CC_CHACHA_CHACHA_CONTROL_NUM_OF_ROUNDS_12Rounds (0x1UL)
#define CC_CHACHA_CHACHA_CONTROL_NUM_OF_ROUNDS_8Rounds (0x2UL)

/* Bit 3 : Key length selection. */
#define CC_CHACHA_CHACHA_CONTROL_KEY_LEN_Pos (3UL)
#define CC_CHACHA_CHACHA_CONTROL_KEY_LEN_Msk (0x1UL << CC_CHACHA_CHACHA_CONTROL_KEY_LEN_Pos)
#define CC_CHACHA_CHACHA_CONTROL_KEY_LEN_256Bits (0x0UL)
#define CC_CHACHA_CHACHA_CONTROL_KEY_LEN_128Bits (0x1UL)

/* Bit 2 : Generate the key to use in Poly1305 message authentication code calculation. */
#define CC_CHACHA_CHACHA_CONTROL_GEN_KEY_POLY1305_Pos (2UL)
#define CC_CHACHA_CHACHA_CONTROL_GEN_KEY_POLY1305_Msk (0x1UL << CC_CHACHA_CHACHA_CONTROL_GEN_KEY_POLY1305_Pos)
#define CC_CHACHA_CHACHA_CONTROL_GEN_KEY_POLY1305_Disable (0x0UL)
#define CC_CHACHA_CHACHA_CONTROL_GEN_KEY_POLY1305_Enable (0x1UL)

/* Bit 1 : Perform initialization for a new message */
#define CC_CHACHA_CHACHA_CONTROL_INIT_Pos (1UL)
#define CC_CHACHA_CHACHA_CONTROL_INIT_Msk (0x1UL << CC_CHACHA_CHACHA_CONTROL_INIT_Pos)
#define CC_CHACHA_CHACHA_CONTROL_INIT_Disable (0x0UL)
#define CC_CHACHA_CHACHA_CONTROL_INIT_Enable (0x1UL)

/* Bit 0 : Run engine in ChaCha or Salsa mode */
#define CC_CHACHA_CHACHA_CONTROL_CHACHA_OR_SALSA_Pos (0UL)
#define CC_CHACHA_CHACHA_CONTROL_CHACHA_OR_SALSA_Msk (0x1UL << CC_CHACHA_CHACHA_CONTROL_CHACHA_OR_SALSA_Pos)
#define CC_CHACHA_CHACHA_CONTROL_CHACHA_OR_SALSA_ChaCha (0x0UL)
#define CC_CHACHA_CHACHA_CONTROL_CHACHA_OR_SALSA_Salsa (0x1UL)

/* Register: CC_CHACHA_CHACHA_VERSION */
/* Description: CHACHA engine HW version */

/* Bits 31..0 :   */
#define CC_CHACHA_CHACHA_VERSION_CHACHA_VERSION_Pos (0UL)
#define CC_CHACHA_CHACHA_VERSION_CHACHA_VERSION_Msk (0xFFFFFFFFUL << CC_CHACHA_CHACHA_VERSION_CHACHA_VERSION_Pos)

/* Register: CC_CHACHA_CHACHA_KEY */
/* Description: Description collection: CHACHA key value to use. The initial CHACHA_KEY[0] register holds the least significant bits [31:0] of the key value. */

/* Bits 31..0 : CHACHA key value. */
#define CC_CHACHA_CHACHA_KEY_VALUE_Pos (0UL)
#define CC_CHACHA_CHACHA_KEY_VALUE_Msk (0xFFFFFFFFUL << CC_CHACHA_CHACHA_KEY_VALUE_Pos)

/* Register: CC_CHACHA_CHACHA_IV */
/* Description: Description collection: CHACHA Initialization Vector (IV) to use. The IV is also known as the nonce. */

/* Bits 31..0 : CHACHA IV value. */
#define CC_CHACHA_CHACHA_IV_VALUE_Pos (0UL)
#define CC_CHACHA_CHACHA_IV_VALUE_Msk (0xFFFFFFFFUL << CC_CHACHA_CHACHA_IV_VALUE_Pos)

/* Register: CC_CHACHA_CHACHA_BUSY */
/* Description: Status register for CHACHA engine activity. */

/* Bit 0 : CHACHA engine status. */
#define CC_CHACHA_CHACHA_BUSY_STATUS_Pos (0UL)
#define CC_CHACHA_CHACHA_BUSY_STATUS_Msk (0x1UL << CC_CHACHA_CHACHA_BUSY_STATUS_Pos)
#define CC_CHACHA_CHACHA_BUSY_STATUS_Idle (0x0UL)
#define CC_CHACHA_CHACHA_BUSY_STATUS_Busy (0x1UL)

/* Register: CC_CHACHA_CHACHA_HW_FLAGS */
/* Description: Hardware configuration of the CHACHA engine. Reset value holds the supported features. */

/* Bit 2 : If this flag is set, the next matrix calculated when the current one is written to data output path. */
#define CC_CHACHA_CHACHA_HW_FLAGS_FAST_CHACHA_Pos (2UL)
#define CC_CHACHA_CHACHA_HW_FLAGS_FAST_CHACHA_Msk (0x1UL << CC_CHACHA_CHACHA_HW_FLAGS_FAST_CHACHA_Pos)

/* Bit 1 : If this flag is set, the engine include Salsa support */
#define CC_CHACHA_CHACHA_HW_FLAGS_SALSA_EXISTS_Pos (1UL)
#define CC_CHACHA_CHACHA_HW_FLAGS_SALSA_EXISTS_Msk (0x1UL << CC_CHACHA_CHACHA_HW_FLAGS_SALSA_EXISTS_Pos)

/* Bit 0 : If this flag is set, the engine include ChaCha support */
#define CC_CHACHA_CHACHA_HW_FLAGS_CHACHA_EXISTS_Pos (0UL)
#define CC_CHACHA_CHACHA_HW_FLAGS_CHACHA_EXISTS_Msk (0x1UL << CC_CHACHA_CHACHA_HW_FLAGS_CHACHA_EXISTS_Pos)

/* Register: CC_CHACHA_CHACHA_BLOCK_CNT_LSB */
/* Description: Store the LSB value of the block counter, in order to support suspend/resume of operation */

/* Bits 31..0 : This register holds the ChaCha block counter bits [31:0] and must be read and written during respectively suspend and resume operations. */
#define CC_CHACHA_CHACHA_BLOCK_CNT_LSB_VALUE_Pos (0UL)
#define CC_CHACHA_CHACHA_BLOCK_CNT_LSB_VALUE_Msk (0xFFFFFFFFUL << CC_CHACHA_CHACHA_BLOCK_CNT_LSB_VALUE_Pos)

/* Register: CC_CHACHA_CHACHA_BLOCK_CNT_MSB */
/* Description: Store the MSB value of the block counter, in order to support suspend/resume of operation */

/* Bits 31..0 : This register holds the ChaCha block counter bits [63:32] and must be read and written during respectively suspend and resume operations. */
#define CC_CHACHA_CHACHA_BLOCK_CNT_MSB_VALUE_Pos (0UL)
#define CC_CHACHA_CHACHA_BLOCK_CNT_MSB_VALUE_Msk (0xFFFFFFFFUL << CC_CHACHA_CHACHA_BLOCK_CNT_MSB_VALUE_Pos)

/* Register: CC_CHACHA_CHACHA_SW_RESET */
/* Description: Reset the CHACHA engine. */

/* Bit 0 : Writing any value to this address resets the CHACHA engine. The reset takes 4 CPU clock cycles to complete. */
#define CC_CHACHA_CHACHA_SW_RESET_RESET_Pos (0UL)
#define CC_CHACHA_CHACHA_SW_RESET_RESET_Msk (0x1UL << CC_CHACHA_CHACHA_SW_RESET_RESET_Pos)
#define CC_CHACHA_CHACHA_SW_RESET_RESET_Enable (0x1UL)

/* Register: CC_CHACHA_CHACHA_POLY1305_KEY */
/* Description: Description collection: The auto-generated key to use in Poly1305 MAC calculation. The initial CHACHA_POLY1305_KEY[0] register holds the least significant bits [31:0] of the key value. */

/* Bits 31..0 : Poly1305 key value. */
#define CC_CHACHA_CHACHA_POLY1305_KEY_VALUE_Pos (0UL)
#define CC_CHACHA_CHACHA_POLY1305_KEY_VALUE_Msk (0xFFFFFFFFUL << CC_CHACHA_CHACHA_POLY1305_KEY_VALUE_Pos)

/* Register: CC_CHACHA_CHACHA_ENDIANNESS */
/* Description: CHACHA engine data order configuration. */

/* Bit 4 : Change the byte order of the output data. */
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DOUT_BYTE_ORDER_Pos (4UL)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DOUT_BYTE_ORDER_Msk (0x1UL << CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DOUT_BYTE_ORDER_Pos)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DOUT_BYTE_ORDER_Default (0x0UL)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DOUT_BYTE_ORDER_Reverse (0x1UL)

/* Bit 3 : Change the word order of the output data. */
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DOUT_WORD_ORDER_Pos (3UL)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DOUT_WORD_ORDER_Msk (0x1UL << CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DOUT_WORD_ORDER_Pos)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DOUT_WORD_ORDER_Default (0x0UL)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DOUT_WORD_ORDER_Reverse (0x1UL)

/* Bit 2 : Change the quarter of a matrix order in the engine. */
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_CORE_MATRIX_LBE_ORDER_Pos (2UL)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_CORE_MATRIX_LBE_ORDER_Msk (0x1UL << CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_CORE_MATRIX_LBE_ORDER_Pos)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_CORE_MATRIX_LBE_ORDER_Default (0x0UL)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_CORE_MATRIX_LBE_ORDER_Reverse (0x1UL)

/* Bit 1 : Change the byte order of the input data. */
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DIN_BYTE_ORDER_Pos (1UL)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DIN_BYTE_ORDER_Msk (0x1UL << CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DIN_BYTE_ORDER_Pos)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DIN_BYTE_ORDER_Default (0x0UL)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DIN_BYTE_ORDER_Reverse (0x1UL)

/* Bit 0 : Change the word order of the input data. */
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DIN_WORD_ORDER_Pos (0UL)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DIN_WORD_ORDER_Msk (0x1UL << CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DIN_WORD_ORDER_Pos)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DIN_WORD_ORDER_Default (0x0UL)
#define CC_CHACHA_CHACHA_ENDIANNESS_CHACHA_DIN_WORD_ORDER_Reverse (0x1UL)

/* Register: CC_CHACHA_CHACHA_DEBUG */
/* Description: Debug register for the CHACHA engine */

/* Bits 1..0 : Reflects the debug state of the CHACHA FSM. */
#define CC_CHACHA_CHACHA_DEBUG_FSM_STATE_Pos (0UL)
#define CC_CHACHA_CHACHA_DEBUG_FSM_STATE_Msk (0x3UL << CC_CHACHA_CHACHA_DEBUG_FSM_STATE_Pos)
#define CC_CHACHA_CHACHA_DEBUG_FSM_STATE_IDLE_STATE (0x0UL)
#define CC_CHACHA_CHACHA_DEBUG_FSM_STATE_INIT_STATE (0x1UL)
#define CC_CHACHA_CHACHA_DEBUG_FSM_STATE_ROUNDS_STATE (0x2UL)
#define CC_CHACHA_CHACHA_DEBUG_FSM_STATE_FINAL_STATE (0x3UL)


/* Peripheral: CC_CTL */
/* Description: CRYPTOCELL CTL interface */

/* Register: CC_CTL_CRYPTO_CTL */
/* Description: Defines the cryptographic flow. */

/* Bits 4..0 : Configure the cryptographic engine mode. */
#define CC_CTL_CRYPTO_CTL_MODE_Pos (0UL)
#define CC_CTL_CRYPTO_CTL_MODE_Msk (0x1FUL << CC_CTL_CRYPTO_CTL_MODE_Pos)
#define CC_CTL_CRYPTO_CTL_MODE_Bypass (0x00UL)
#define CC_CTL_CRYPTO_CTL_MODE_AESActive (0x01UL)
#define CC_CTL_CRYPTO_CTL_MODE_AESToHashActive (0x02UL)
#define CC_CTL_CRYPTO_CTL_MODE_AESAndHashActive (0x03UL)
#define CC_CTL_CRYPTO_CTL_MODE_HashActive (0x07UL)
#define CC_CTL_CRYPTO_CTL_MODE_AESMACAndBypassActive (0x09UL)
#define CC_CTL_CRYPTO_CTL_MODE_AESToHashAndDOUTActive (0x0AUL)
#define CC_CTL_CRYPTO_CTL_MODE_ChaChaActive (0x10UL)

/* Register: CC_CTL_CRYPTO_BUSY */
/* Description: Status register for cryptographic cores engine activity. */

/* Bit 0 : Cryptographic core engines status. */
#define CC_CTL_CRYPTO_BUSY_STATUS_Pos (0UL)
#define CC_CTL_CRYPTO_BUSY_STATUS_Msk (0x1UL << CC_CTL_CRYPTO_BUSY_STATUS_Pos)
#define CC_CTL_CRYPTO_BUSY_STATUS_Idle (0x0UL)
#define CC_CTL_CRYPTO_BUSY_STATUS_Busy (0x1UL)

/* Register: CC_CTL_HASH_BUSY */
/* Description: Status register for HASH engine activity. */

/* Bit 0 : Hash engine status. */
#define CC_CTL_HASH_BUSY_STATUS_Pos (0UL)
#define CC_CTL_HASH_BUSY_STATUS_Msk (0x1UL << CC_CTL_HASH_BUSY_STATUS_Pos)
#define CC_CTL_HASH_BUSY_STATUS_Idle (0x0UL)
#define CC_CTL_HASH_BUSY_STATUS_Busy (0x1UL)

/* Register: CC_CTL_CONTEXT_ID */
/* Description: A general-purpose read/write register. */

/* Bits 7..0 : Context ID */
#define CC_CTL_CONTEXT_ID_CONTEXT_ID_Pos (0UL)
#define CC_CTL_CONTEXT_ID_CONTEXT_ID_Msk (0xFFUL << CC_CTL_CONTEXT_ID_CONTEXT_ID_Pos)


/* Peripheral: CC_DIN */
/* Description: CRYPTOCELL Data IN interface */

/* Register: CC_DIN_DIN_BUFFER */
/* Description: Used by CPU to write data directly to the DIN buffer, which is then sent to the cryptographic engines for processing. */

/* Bits 31..0 : This register is mapped into 8 addresses in order to enable a CPU burst. */
#define CC_DIN_DIN_BUFFER_DATA_Pos (0UL)
#define CC_DIN_DIN_BUFFER_DATA_Msk (0xFFFFFFFFUL << CC_DIN_DIN_BUFFER_DATA_Pos)

/* Register: CC_DIN_DIN_DMA_MEM_BUSY */
/* Description: Status register for DIN DMA engine activity when accessing memory. */

/* Bit 0 : DIN memory DMA engine status. */
#define CC_DIN_DIN_DMA_MEM_BUSY_STATUS_Pos (0UL)
#define CC_DIN_DIN_DMA_MEM_BUSY_STATUS_Msk (0x1UL << CC_DIN_DIN_DMA_MEM_BUSY_STATUS_Pos)
#define CC_DIN_DIN_DMA_MEM_BUSY_STATUS_Idle (0x0UL)
#define CC_DIN_DIN_DMA_MEM_BUSY_STATUS_Busy (0x1UL)

/* Register: CC_DIN_SRC_MEM_ADDR */
/* Description: Data source address in memory. */

/* Bits 31..0 : Source address in memory. */
#define CC_DIN_SRC_MEM_ADDR_ADDR_Pos (0UL)
#define CC_DIN_SRC_MEM_ADDR_ADDR_Msk (0xFFFFFFFFUL << CC_DIN_SRC_MEM_ADDR_ADDR_Pos)

/* Register: CC_DIN_SRC_MEM_SIZE */
/* Description: The number of bytes to be read from memory. Writing to this register triggers the DMA operation. */

/* Bit 31 : This field is reserved */
#define CC_DIN_SRC_MEM_SIZE_LAST_Pos (31UL)
#define CC_DIN_SRC_MEM_SIZE_LAST_Msk (0x1UL << CC_DIN_SRC_MEM_SIZE_LAST_Pos)

/* Bit 30 : This field is reserved */
#define CC_DIN_SRC_MEM_SIZE_FIRST_Pos (30UL)
#define CC_DIN_SRC_MEM_SIZE_FIRST_Msk (0x1UL << CC_DIN_SRC_MEM_SIZE_FIRST_Pos)

/* Bits 29..0 : Total number of bytes to read from memory. */
#define CC_DIN_SRC_MEM_SIZE_SIZE_Pos (0UL)
#define CC_DIN_SRC_MEM_SIZE_SIZE_Msk (0x3FFFFFFFUL << CC_DIN_SRC_MEM_SIZE_SIZE_Pos)

/* Register: CC_DIN_SRC_SRAM_ADDR */
/* Description: Data source address in RNG SRAM. */

/* Bits 31..0 : Source address in RNG SRAM. */
#define CC_DIN_SRC_SRAM_ADDR_ADDR_Pos (0UL)
#define CC_DIN_SRC_SRAM_ADDR_ADDR_Msk (0xFFFFFFFFUL << CC_DIN_SRC_SRAM_ADDR_ADDR_Pos)

/* Register: CC_DIN_SRC_SRAM_SIZE */
/* Description: The number of bytes to be read from RNG SRAM. Writing to this register triggers the DMA operation. */

/* Bits 31..0 : Total number of bytes to read from RNG SRAM. */
#define CC_DIN_SRC_SRAM_SIZE_SIZE_Pos (0UL)
#define CC_DIN_SRC_SRAM_SIZE_SIZE_Msk (0xFFFFFFFFUL << CC_DIN_SRC_SRAM_SIZE_SIZE_Pos)

/* Register: CC_DIN_DIN_DMA_SRAM_BUSY */
/* Description: Status register for DIN DMA engine activity when accessing RNG SRAM. */

/* Bit 0 : DIN RNG SRAM DMA engine status. */
#define CC_DIN_DIN_DMA_SRAM_BUSY_STATUS_Pos (0UL)
#define CC_DIN_DIN_DMA_SRAM_BUSY_STATUS_Msk (0x1UL << CC_DIN_DIN_DMA_SRAM_BUSY_STATUS_Pos)
#define CC_DIN_DIN_DMA_SRAM_BUSY_STATUS_Idle (0x0UL)
#define CC_DIN_DIN_DMA_SRAM_BUSY_STATUS_Busy (0x1UL)

/* Register: CC_DIN_DIN_DMA_SRAM_ENDIANNESS */
/* Description: Configure the endianness of DIN DMA transactions towards RNG SRAM. */

/* Bit 0 : Endianness of DIN DMA transactions towards RNG SRAM. The default value is little-endian. */
#define CC_DIN_DIN_DMA_SRAM_ENDIANNESS_ENDIAN_Pos (0UL)
#define CC_DIN_DIN_DMA_SRAM_ENDIANNESS_ENDIAN_Msk (0x1UL << CC_DIN_DIN_DMA_SRAM_ENDIANNESS_ENDIAN_Pos)
#define CC_DIN_DIN_DMA_SRAM_ENDIANNESS_ENDIAN_LittleEndian (0x0UL)
#define CC_DIN_DIN_DMA_SRAM_ENDIANNESS_ENDIAN_BigEndian (0x1UL)

/* Register: CC_DIN_DIN_SW_RESET */
/* Description: Reset the DIN DMA engine. */

/* Bit 0 : Writing any value to this address resets the DIN DMA engine. The reset takes 4 CPU clock cycles to complete. */
#define CC_DIN_DIN_SW_RESET_RESET_Pos (0UL)
#define CC_DIN_DIN_SW_RESET_RESET_Msk (0x1UL << CC_DIN_DIN_SW_RESET_RESET_Pos)
#define CC_DIN_DIN_SW_RESET_RESET_Enable (0x1UL)

/* Register: CC_DIN_DIN_CPU_DATA */
/* Description: Specifies the number of bytes the CPU will write to the DIN_BUFFER, ensuring the cryptographic engine processes the correct amount of data. */

/* Bits 15..0 : When using CPU direct write to the DIN_BUFFER, the size of input data in bytes should be written to this register. */
#define CC_DIN_DIN_CPU_DATA_SIZE_Pos (0UL)
#define CC_DIN_DIN_CPU_DATA_SIZE_Msk (0xFFFFUL << CC_DIN_DIN_CPU_DATA_SIZE_Pos)

/* Register: CC_DIN_DIN_WRITE_ALIGN */
/* Description: Indicates that the next CPU write to the DIN_BUFFER is the last in the sequence. This is needed only when the data size is NOT modulo 4 (e.g. HASH padding). */

/* Bit 0 : Next CPU write to the DIN_BUFFER is the last word. */
#define CC_DIN_DIN_WRITE_ALIGN_LAST_Pos (0UL)
#define CC_DIN_DIN_WRITE_ALIGN_LAST_Msk (0x1UL << CC_DIN_DIN_WRITE_ALIGN_LAST_Pos)
#define CC_DIN_DIN_WRITE_ALIGN_LAST_Confirm (0x1UL)

/* Register: CC_DIN_DIN_FIFO_EMPTY */
/* Description: Register indicating if DIN FIFO is empty and if more data can be accepted. */

/* Bit 0 : DIN FIFO status */
#define CC_DIN_DIN_FIFO_EMPTY_STATUS_Pos (0UL)
#define CC_DIN_DIN_FIFO_EMPTY_STATUS_Msk (0x1UL << CC_DIN_DIN_FIFO_EMPTY_STATUS_Pos)
#define CC_DIN_DIN_FIFO_EMPTY_STATUS_NotEmpty (0x0UL)
#define CC_DIN_DIN_FIFO_EMPTY_STATUS_Empty (0x1UL)

/* Register: CC_DIN_DIN_FIFO_RESET */
/* Description: Reset the DIN FIFO, effectively clearing the FIFO for new data. */

/* Bit 0 : Writing any value to this address resets the DIN FIFO. */
#define CC_DIN_DIN_FIFO_RESET_RESET_Pos (0UL)
#define CC_DIN_DIN_FIFO_RESET_RESET_Msk (0x1UL << CC_DIN_DIN_FIFO_RESET_RESET_Pos)
#define CC_DIN_DIN_FIFO_RESET_RESET_Enable (0x1UL)


/* Peripheral: CC_DOUT */
/* Description: CRYPTOCELL Data OUT interface */

/* Register: CC_DOUT_DOUT_BUFFER */
/* Description: Cryptographic results directly accessible by the CPU. */

/* Bits 31..0 : This address can be used by the CPU to read data directly from the DOUT buffer. */
#define CC_DOUT_DOUT_BUFFER_DATA_Pos (0UL)
#define CC_DOUT_DOUT_BUFFER_DATA_Msk (0xFFFFFFFFUL << CC_DOUT_DOUT_BUFFER_DATA_Pos)

/* Register: CC_DOUT_DOUT_DMA_MEM_BUSY */
/* Description: Status register for DOUT DMA engine activity when accessing memory. */

/* Bit 0 : DOUT memory DMA engine status. */
#define CC_DOUT_DOUT_DMA_MEM_BUSY_STATUS_Pos (0UL)
#define CC_DOUT_DOUT_DMA_MEM_BUSY_STATUS_Msk (0x1UL << CC_DOUT_DOUT_DMA_MEM_BUSY_STATUS_Pos)
#define CC_DOUT_DOUT_DMA_MEM_BUSY_STATUS_Idle (0x0UL)
#define CC_DOUT_DOUT_DMA_MEM_BUSY_STATUS_Busy (0x1UL)

/* Register: CC_DOUT_DST_MEM_ADDR */
/* Description: Data destination address in memory. */

/* Bits 31..0 : Destination address in memory. */
#define CC_DOUT_DST_MEM_ADDR_ADDR_Pos (0UL)
#define CC_DOUT_DST_MEM_ADDR_ADDR_Msk (0xFFFFFFFFUL << CC_DOUT_DST_MEM_ADDR_ADDR_Pos)

/* Register: CC_DOUT_DST_MEM_SIZE */
/* Description: The number of bytes to be written to memory. */

/* Bit 31 : This field is reserved */
#define CC_DOUT_DST_MEM_SIZE_LAST_Pos (31UL)
#define CC_DOUT_DST_MEM_SIZE_LAST_Msk (0x1UL << CC_DOUT_DST_MEM_SIZE_LAST_Pos)

/* Bit 30 : This field is reserved */
#define CC_DOUT_DST_MEM_SIZE_FIRST_Pos (30UL)
#define CC_DOUT_DST_MEM_SIZE_FIRST_Msk (0x1UL << CC_DOUT_DST_MEM_SIZE_FIRST_Pos)

/* Bits 29..0 : Total number of bytes to write to memory. */
#define CC_DOUT_DST_MEM_SIZE_SIZE_Pos (0UL)
#define CC_DOUT_DST_MEM_SIZE_SIZE_Msk (0x3FFFFFFFUL << CC_DOUT_DST_MEM_SIZE_SIZE_Pos)

/* Register: CC_DOUT_DST_SRAM_ADDR */
/* Description: Data destination address in RNG SRAM. */

/* Bits 31..0 : Destination address in RNG SRAM. */
#define CC_DOUT_DST_SRAM_ADDR_ADDR_Pos (0UL)
#define CC_DOUT_DST_SRAM_ADDR_ADDR_Msk (0xFFFFFFFFUL << CC_DOUT_DST_SRAM_ADDR_ADDR_Pos)

/* Register: CC_DOUT_DST_SRAM_SIZE */
/* Description: The number of bytes to be written to RNG SRAM. */

/* Bits 31..0 : Total number of bytes to write to RNG SRAM. */
#define CC_DOUT_DST_SRAM_SIZE_SIZE_Pos (0UL)
#define CC_DOUT_DST_SRAM_SIZE_SIZE_Msk (0xFFFFFFFFUL << CC_DOUT_DST_SRAM_SIZE_SIZE_Pos)

/* Register: CC_DOUT_DOUT_DMA_SRAM_BUSY */
/* Description: Status register for DOUT DMA engine activity when accessing RNG SRAM. */

/* Bit 0 : DOUT RNG SRAM DMA engine status. */
#define CC_DOUT_DOUT_DMA_SRAM_BUSY_STATUS_Pos (0UL)
#define CC_DOUT_DOUT_DMA_SRAM_BUSY_STATUS_Msk (0x1UL << CC_DOUT_DOUT_DMA_SRAM_BUSY_STATUS_Pos)
#define CC_DOUT_DOUT_DMA_SRAM_BUSY_STATUS_Idle (0x0UL)
#define CC_DOUT_DOUT_DMA_SRAM_BUSY_STATUS_Busy (0x1UL)

/* Register: CC_DOUT_DOUT_DMA_SRAM_ENDIANNESS */
/* Description: Configure the endianness of DOUT DMA transactions towards RNG SRAM. */

/* Bit 0 : Endianness of DOUT DMA transactions towards RNG SRAM. The default value is little-endian. */
#define CC_DOUT_DOUT_DMA_SRAM_ENDIANNESS_ENDIAN_Pos (0UL)
#define CC_DOUT_DOUT_DMA_SRAM_ENDIANNESS_ENDIAN_Msk (0x1UL << CC_DOUT_DOUT_DMA_SRAM_ENDIANNESS_ENDIAN_Pos)
#define CC_DOUT_DOUT_DMA_SRAM_ENDIANNESS_ENDIAN_LittleEndian (0x0UL)
#define CC_DOUT_DOUT_DMA_SRAM_ENDIANNESS_ENDIAN_BigEndian (0x1UL)

/* Register: CC_DOUT_DOUT_READ_ALIGN */
/* Description: Indication that the next CPU read from the DOUT_BUFFER is the last in the sequence. This is needed only when the data size is NOT modulo 4 (e.g. HASH padding). */

/* Bit 0 : Next CPU read from the DOUT_BUFFER is the last word, and the remaining read aligned content can be flushed. */
#define CC_DOUT_DOUT_READ_ALIGN_LAST_Pos (0UL)
#define CC_DOUT_DOUT_READ_ALIGN_LAST_Msk (0x1UL << CC_DOUT_DOUT_READ_ALIGN_LAST_Pos)
#define CC_DOUT_DOUT_READ_ALIGN_LAST_Flush (0x1UL)

/* Register: CC_DOUT_DOUT_FIFO_EMPTY */
/* Description: Register indicating if DOUT FIFO is empty or if more data will come. */

/* Bit 0 : DOUT FIFO status */
#define CC_DOUT_DOUT_FIFO_EMPTY_STATUS_Pos (0UL)
#define CC_DOUT_DOUT_FIFO_EMPTY_STATUS_Msk (0x1UL << CC_DOUT_DOUT_FIFO_EMPTY_STATUS_Pos)
#define CC_DOUT_DOUT_FIFO_EMPTY_STATUS_NotEmpty (0x0UL)
#define CC_DOUT_DOUT_FIFO_EMPTY_STATUS_Empty (0x1UL)

/* Register: CC_DOUT_DOUT_SW_RESET */
/* Description: Reset the DOUT DMA engine. */

/* Bit 0 : Writing any value to this address resets the DOUT DMA engine. The reset takes 4 CPU clock cycles to complete. */
#define CC_DOUT_DOUT_SW_RESET_RESET_Pos (0UL)
#define CC_DOUT_DOUT_SW_RESET_RESET_Msk (0x1UL << CC_DOUT_DOUT_SW_RESET_RESET_Pos)
#define CC_DOUT_DOUT_SW_RESET_RESET_Enable (0x1UL)


/* Peripheral: CC_GHASH */
/* Description: CRYPTOCELL GHASH engine */

/* Register: CC_GHASH_GHASH_SUBKEY */
/* Description: Description collection: GHASH subkey value to use. The initial GHASH_SUBKEY[0] register holds the least significant bits [31:0] of the subkey value. */

/* Bits 31..0 : GHASH subkey value. */
#define CC_GHASH_GHASH_SUBKEY_VALUE_Pos (0UL)
#define CC_GHASH_GHASH_SUBKEY_VALUE_Msk (0xFFFFFFFFUL << CC_GHASH_GHASH_SUBKEY_VALUE_Pos)

/* Register: CC_GHASH_GHASH_IV */
/* Description: Description collection: GHASH Initialization Vector (IV) to use. The initial GHASH_IV[0] register holds the least significant bits [31:0] of the IV. */

/* Bits 31..0 : GHASH IV value. */
#define CC_GHASH_GHASH_IV_VALUE_Pos (0UL)
#define CC_GHASH_GHASH_IV_VALUE_Msk (0xFFFFFFFFUL << CC_GHASH_GHASH_IV_VALUE_Pos)

/* Register: CC_GHASH_GHASH_BUSY */
/* Description: Status register for GHASH engine activity. */

/* Bit 0 : GHASH engine status. */
#define CC_GHASH_GHASH_BUSY_STATUS_Pos (0UL)
#define CC_GHASH_GHASH_BUSY_STATUS_Msk (0x1UL << CC_GHASH_GHASH_BUSY_STATUS_Pos)
#define CC_GHASH_GHASH_BUSY_STATUS_Idle (0x0UL)
#define CC_GHASH_GHASH_BUSY_STATUS_Busy (0x1UL)

/* Register: CC_GHASH_GHASH_INIT */
/* Description: Configure the GHASH engine for a new GHASH operation. */

/* Bit 0 : Initialize a new GHASH operation. */
#define CC_GHASH_GHASH_INIT_ENABLE_Pos (0UL)
#define CC_GHASH_GHASH_INIT_ENABLE_Msk (0x1UL << CC_GHASH_GHASH_INIT_ENABLE_Pos)
#define CC_GHASH_GHASH_INIT_ENABLE_Enable (0x1UL)


/* Peripheral: CC_HASH */
/* Description: CRYPTOCELL HASH engine */

/* Register: CC_HASH_HASH_H */
/* Description: Description collection: HASH_H value registers. The initial HASH_H[0] register holds the least significant bits [31:0] of the value. */

/* Bits 31..0 : Write the initial hash value before start of digest operation, and read the final hash value result after 
          the digest operation has been completed. */
#define CC_HASH_HASH_H_VALUE_Pos (0UL)
#define CC_HASH_HASH_H_VALUE_Msk (0xFFFFFFFFUL << CC_HASH_HASH_H_VALUE_Pos)

/* Register: CC_HASH_HASH_PAD_AUTO */
/* Description: Configure the HASH engine to automatically pad data at the end of the DMA transfer to complete the digest operation. */

/* Bit 0 : Enable automatic padding in hardware. */
#define CC_HASH_HASH_PAD_AUTO_HWPAD_Pos (0UL)
#define CC_HASH_HASH_PAD_AUTO_HWPAD_Msk (0x1UL << CC_HASH_HASH_PAD_AUTO_HWPAD_Pos)
#define CC_HASH_HASH_PAD_AUTO_HWPAD_Disable (0x0UL)
#define CC_HASH_HASH_PAD_AUTO_HWPAD_Enable (0x1UL)

/* Register: CC_HASH_HASH_XOR_DIN */
/* Description: Perform an XOR operation of the DIN DMA engine input data being fed into the HASH engine. 
        Set this register to '0' if XOR is not required. */

/* Bits 31..0 : The value to XOR with the HASH engine input data. */
#define CC_HASH_HASH_XOR_DIN_VALUE_Pos (0UL)
#define CC_HASH_HASH_XOR_DIN_VALUE_Msk (0xFFFFFFFFUL << CC_HASH_HASH_XOR_DIN_VALUE_Pos)

/* Register: CC_HASH_HASH_INIT_STATE */
/* Description: Configure HASH engine initial state registers. */

/* Bit 0 : Enable loading of data to initial state registers. Digest/IV for HASH/AES_MAC. */
#define CC_HASH_HASH_INIT_STATE_LOAD_Pos (0UL)
#define CC_HASH_HASH_INIT_STATE_LOAD_Msk (0x1UL << CC_HASH_HASH_INIT_STATE_LOAD_Pos)
#define CC_HASH_HASH_INIT_STATE_LOAD_Disable (0x0UL)
#define CC_HASH_HASH_INIT_STATE_LOAD_Enable (0x1UL)

/* Register: CC_HASH_HASH_SELECT */
/* Description: Select HASH or GHASH engine as the digest engine to use. */

/* Bits 1..0 : Select HASH or GHASH engine as the digest engine. */
#define CC_HASH_HASH_SELECT_ENGINE_Pos (0UL)
#define CC_HASH_HASH_SELECT_ENGINE_Msk (0x3UL << CC_HASH_HASH_SELECT_ENGINE_Pos)
#define CC_HASH_HASH_SELECT_ENGINE_HASH (0x0UL)
#define CC_HASH_HASH_SELECT_ENGINE_GHASH (0x2UL)

/* Register: CC_HASH_HASH_CONTROL */
/* Description: Control the HASH engine behavior. */

/* Bits 3..0 : Select HASH mode to execute */
#define CC_HASH_HASH_CONTROL_MODE_Pos (0UL)
#define CC_HASH_HASH_CONTROL_MODE_Msk (0xFUL << CC_HASH_HASH_CONTROL_MODE_Pos)
#define CC_HASH_HASH_CONTROL_MODE_SHA1 (0x1UL)
#define CC_HASH_HASH_CONTROL_MODE_SHA256 (0x2UL)
#define CC_HASH_HASH_CONTROL_MODE_SHA224 (0xAUL)

/* Register: CC_HASH_HASH_PAD */
/* Description: Enable the hardware padding feature of the HASH engine. */

/* Bit 0 : Configure hardware padding feature. */
#define CC_HASH_HASH_PAD_ENABLE_Pos (0UL)
#define CC_HASH_HASH_PAD_ENABLE_Msk (0x1UL << CC_HASH_HASH_PAD_ENABLE_Pos)
#define CC_HASH_HASH_PAD_ENABLE_Disable (0x0UL)
#define CC_HASH_HASH_PAD_ENABLE_Enable (0x1UL)

/* Register: CC_HASH_HASH_PAD_FORCE */
/* Description: Force the hardware padding operation to trigger if the input data length is zero bytes. */

/* Bit 2 : Trigger hardware padding operation. */
#define CC_HASH_HASH_PAD_FORCE_ENABLE_Pos (2UL)
#define CC_HASH_HASH_PAD_FORCE_ENABLE_Msk (0x1UL << CC_HASH_HASH_PAD_FORCE_ENABLE_Pos)
#define CC_HASH_HASH_PAD_FORCE_ENABLE_Disable (0x0UL)
#define CC_HASH_HASH_PAD_FORCE_ENABLE_Enable (0x1UL)

/* Register: CC_HASH_HASH_CUR_LEN_0 */
/* Description: Bits [31:0] of the number of bytes that have been digested so far. */

/* Bits 31..0 : Bits [31:0] of current length of digested data in bytes. */
#define CC_HASH_HASH_CUR_LEN_0_VALUE_Pos (0UL)
#define CC_HASH_HASH_CUR_LEN_0_VALUE_Msk (0xFFFFFFFFUL << CC_HASH_HASH_CUR_LEN_0_VALUE_Pos)

/* Register: CC_HASH_HASH_CUR_LEN_1 */
/* Description: Bits [63:32] of the number of bytes that have been digested so far. */

/* Bits 31..0 : Bits [63:32] of current length of digested data in bytes. */
#define CC_HASH_HASH_CUR_LEN_1_VALUE_Pos (0UL)
#define CC_HASH_HASH_CUR_LEN_1_VALUE_Msk (0xFFFFFFFFUL << CC_HASH_HASH_CUR_LEN_1_VALUE_Pos)

/* Register: CC_HASH_HASH_HW_FLAGS */
/* Description: Hardware configuration of the HASH engine. Reset value holds the supported features. */

/* Bit 18 : If this flag is set, the engine include HASH to DOUT support. */
#define CC_HASH_HASH_HW_FLAGS_DUMP_HASH_TO_DOUT_EXISTS_Pos (18UL)
#define CC_HASH_HASH_HW_FLAGS_DUMP_HASH_TO_DOUT_EXISTS_Msk (0x1UL << CC_HASH_HASH_HW_FLAGS_DUMP_HASH_TO_DOUT_EXISTS_Pos)

/* Bit 17 : If this flag is set, the engine include compare digest logic. */
#define CC_HASH_HASH_HW_FLAGS_HASH_COMPARE_EXISTS_Pos (17UL)
#define CC_HASH_HASH_HW_FLAGS_HASH_COMPARE_EXISTS_Msk (0x1UL << CC_HASH_HASH_HW_FLAGS_HASH_COMPARE_EXISTS_Pos)

/* Bit 16 : If this flag is set, the engine include SHA-256 support. */
#define CC_HASH_HASH_HW_FLAGS_SHA_256_EXISTS_Pos (16UL)
#define CC_HASH_HASH_HW_FLAGS_SHA_256_EXISTS_Msk (0x1UL << CC_HASH_HASH_HW_FLAGS_SHA_256_EXISTS_Pos)

/* Bit 15 : If this flag is set, the engine include HMAC support. */
#define CC_HASH_HASH_HW_FLAGS_HMAC_EXISTS_Pos (15UL)
#define CC_HASH_HASH_HW_FLAGS_HMAC_EXISTS_Msk (0x1UL << CC_HASH_HASH_HW_FLAGS_HMAC_EXISTS_Pos)

/* Bit 14 : If this flag is set, the engine include MD5 support. */
#define CC_HASH_HASH_HW_FLAGS_MD5_EXISTS_Pos (14UL)
#define CC_HASH_HASH_HW_FLAGS_MD5_EXISTS_Msk (0x1UL << CC_HASH_HASH_HW_FLAGS_MD5_EXISTS_Pos)

/* Bit 13 : If this flag is set, the engine include pad block support. */
#define CC_HASH_HASH_HW_FLAGS_PAD_EXISTS_Pos (13UL)
#define CC_HASH_HASH_HW_FLAGS_PAD_EXISTS_Msk (0x1UL << CC_HASH_HASH_HW_FLAGS_PAD_EXISTS_Pos)

/* Bit 12 : If this flag is set, the engine include SHA-512 support. */
#define CC_HASH_HASH_HW_FLAGS_SHA_512_EXISTS_Pos (12UL)
#define CC_HASH_HASH_HW_FLAGS_SHA_512_EXISTS_Msk (0x1UL << CC_HASH_HASH_HW_FLAGS_SHA_512_EXISTS_Pos)

/* Bits 11..8 : Determine the granularity of word size. */
#define CC_HASH_HASH_HW_FLAGS_DW_Pos (8UL)
#define CC_HASH_HASH_HW_FLAGS_DW_Msk (0xFUL << CC_HASH_HASH_HW_FLAGS_DW_Pos)
#define CC_HASH_HASH_HW_FLAGS_DW_32Bits (0x0UL)
#define CC_HASH_HASH_HW_FLAGS_DW_64Bits (0x1UL)

/* Bits 7..4 : Indicate if Hi adders are present for each Hi value or 1 adder is shared for all Hi. */
#define CC_HASH_HASH_HW_FLAGS_CH_Pos (4UL)
#define CC_HASH_HASH_HW_FLAGS_CH_Msk (0xFUL << CC_HASH_HASH_HW_FLAGS_CH_Pos)
#define CC_HASH_HASH_HW_FLAGS_CH_One (0x0UL)
#define CC_HASH_HASH_HW_FLAGS_CH_All (0x1UL)

/* Bits 3..0 : Indicates the number of concurrent words the hash is using to compute signature. */
#define CC_HASH_HASH_HW_FLAGS_CW_Pos (0UL)
#define CC_HASH_HASH_HW_FLAGS_CW_Msk (0xFUL << CC_HASH_HASH_HW_FLAGS_CW_Pos)
#define CC_HASH_HASH_HW_FLAGS_CW_One (0x1UL)
#define CC_HASH_HASH_HW_FLAGS_CW_Two (0x2UL)

/* Register: CC_HASH_HASH_SW_RESET */
/* Description: Reset the HASH engine. */

/* Bit 0 : Writing any value to this address resets the HASH engine. The reset takes 4 CPU clock cycles to complete. */
#define CC_HASH_HASH_SW_RESET_RESET_Pos (0UL)
#define CC_HASH_HASH_SW_RESET_RESET_Msk (0x1UL << CC_HASH_HASH_SW_RESET_RESET_Pos)
#define CC_HASH_HASH_SW_RESET_RESET_Enable (0x1UL)

/* Register: CC_HASH_HASH_ENDIANNESS */
/* Description: Configure the endianness of HASH data and padding generation. */

/* Bit 0 : Endianness of HASH data and padding generation. The default value is little-endian. */
#define CC_HASH_HASH_ENDIANNESS_ENDIAN_Pos (0UL)
#define CC_HASH_HASH_ENDIANNESS_ENDIAN_Msk (0x1UL << CC_HASH_HASH_ENDIANNESS_ENDIAN_Pos)
#define CC_HASH_HASH_ENDIANNESS_ENDIAN_LittleEndian (0x0UL)
#define CC_HASH_HASH_ENDIANNESS_ENDIAN_BigEndian (0x1UL)


/* Peripheral: CC_HOST_RGF */
/* Description: CRYPTOCELL HOST register interface */

/* Register: CC_HOST_RGF_IRR */
/* Description: Interrupt request register. Each bit of this register holds the interrupt
        status of a single interrupt source. If corresponding IMR bit is
        unmasked, an interrupt is generated. */

/* Bit 11 : The symmetric engine DMA completed interrupt status. */
#define CC_HOST_RGF_IRR_SYM_DMA_INT_Pos (11UL)
#define CC_HOST_RGF_IRR_SYM_DMA_INT_Msk (0x1UL << CC_HOST_RGF_IRR_SYM_DMA_INT_Pos)

/* Bit 10 : The RNG interrupt status. */
#define CC_HOST_RGF_IRR_RNG_INT_Pos (10UL)
#define CC_HOST_RGF_IRR_RNG_INT_Msk (0x1UL << CC_HOST_RGF_IRR_RNG_INT_Pos)

/* Bit 9 : The PKA end of operation interrupt status. */
#define CC_HOST_RGF_IRR_PKA_INT_Pos (9UL)
#define CC_HOST_RGF_IRR_PKA_INT_Msk (0x1UL << CC_HOST_RGF_IRR_PKA_INT_Pos)

/* Bit 8 : The AHB error interrupt status. */
#define CC_HOST_RGF_IRR_AHB_ERR_INT_Pos (8UL)
#define CC_HOST_RGF_IRR_AHB_ERR_INT_Msk (0x1UL << CC_HOST_RGF_IRR_AHB_ERR_INT_Pos)

/* Bit 7 : The DOUT to memory DMA done interrupt status. This interrupt is asserted when all data was delivered from DOUT buffer to memory. */
#define CC_HOST_RGF_IRR_DOUT_TO_MEM_INT_Pos (7UL)
#define CC_HOST_RGF_IRR_DOUT_TO_MEM_INT_Msk (0x1UL << CC_HOST_RGF_IRR_DOUT_TO_MEM_INT_Pos)

/* Bit 6 : The memory to DIN DMA done interrupt status. This interrupt is asserted when all data was delivered from memory to DIN buffer. */
#define CC_HOST_RGF_IRR_MEM_TO_DIN_INT_Pos (6UL)
#define CC_HOST_RGF_IRR_MEM_TO_DIN_INT_Msk (0x1UL << CC_HOST_RGF_IRR_MEM_TO_DIN_INT_Pos)

/* Bit 5 : The DOUT to RNG SRAM DMA done interrupt status. This interrupt is asserted when all data was delivered from DOUT buffer to RNG SRAM. */
#define CC_HOST_RGF_IRR_DOUT_TO_SRAM_INT_Pos (5UL)
#define CC_HOST_RGF_IRR_DOUT_TO_SRAM_INT_Msk (0x1UL << CC_HOST_RGF_IRR_DOUT_TO_SRAM_INT_Pos)

/* Bit 4 : The RNG SRAM to DIN DMA done interrupt status. This interrupt is asserted when all data was delivered from RNG SRAM to DIN buffer. */
#define CC_HOST_RGF_IRR_SRAM_TO_DIN_INT_Pos (4UL)
#define CC_HOST_RGF_IRR_SRAM_TO_DIN_INT_Msk (0x1UL << CC_HOST_RGF_IRR_SRAM_TO_DIN_INT_Pos)

/* Register: CC_HOST_RGF_IMR */
/* Description: Interrupt mask register. Each bit of this register holds the mask of a single interrupt source. */

/* Bit 11 : The symmetric engine DMA completed interrupt mask. */
#define CC_HOST_RGF_IMR_SYM_DMA_MASK_Pos (11UL)
#define CC_HOST_RGF_IMR_SYM_DMA_MASK_Msk (0x1UL << CC_HOST_RGF_IMR_SYM_DMA_MASK_Pos)
#define CC_HOST_RGF_IMR_SYM_DMA_MASK_IRQEnable (0x0UL)
#define CC_HOST_RGF_IMR_SYM_DMA_MASK_IRQDisable (0x1UL)

/* Bit 10 : The RNG interrupt mask. */
#define CC_HOST_RGF_IMR_RNG_MASK_Pos (10UL)
#define CC_HOST_RGF_IMR_RNG_MASK_Msk (0x1UL << CC_HOST_RGF_IMR_RNG_MASK_Pos)
#define CC_HOST_RGF_IMR_RNG_MASK_IRQEnable (0x0UL)
#define CC_HOST_RGF_IMR_RNG_MASK_IRQDisable (0x1UL)

/* Bit 9 : The PKA end of operation interrupt mask. */
#define CC_HOST_RGF_IMR_PKA_MASK_Pos (9UL)
#define CC_HOST_RGF_IMR_PKA_MASK_Msk (0x1UL << CC_HOST_RGF_IMR_PKA_MASK_Pos)
#define CC_HOST_RGF_IMR_PKA_MASK_IRQEnable (0x0UL)
#define CC_HOST_RGF_IMR_PKA_MASK_IRQDisable (0x1UL)

/* Bit 8 : The AHB error interrupt mask. */
#define CC_HOST_RGF_IMR_AHB_ERR_MASK_Pos (8UL)
#define CC_HOST_RGF_IMR_AHB_ERR_MASK_Msk (0x1UL << CC_HOST_RGF_IMR_AHB_ERR_MASK_Pos)
#define CC_HOST_RGF_IMR_AHB_ERR_MASK_IRQEnable (0x0UL)
#define CC_HOST_RGF_IMR_AHB_ERR_MASK_IRQDisable (0x1UL)

/* Bit 7 : The DOUT to memory DMA done interrupt mask. */
#define CC_HOST_RGF_IMR_DOUT_TO_MEM_MASK_Pos (7UL)
#define CC_HOST_RGF_IMR_DOUT_TO_MEM_MASK_Msk (0x1UL << CC_HOST_RGF_IMR_DOUT_TO_MEM_MASK_Pos)
#define CC_HOST_RGF_IMR_DOUT_TO_MEM_MASK_IRQEnable (0x0UL)
#define CC_HOST_RGF_IMR_DOUT_TO_MEM_MASK_IRQDisable (0x1UL)

/* Bit 6 : The memory to DIN DMA done interrupt mask. */
#define CC_HOST_RGF_IMR_MEM_TO_DIN_MASK_Pos (6UL)
#define CC_HOST_RGF_IMR_MEM_TO_DIN_MASK_Msk (0x1UL << CC_HOST_RGF_IMR_MEM_TO_DIN_MASK_Pos)
#define CC_HOST_RGF_IMR_MEM_TO_DIN_MASK_IRQEnable (0x0UL)
#define CC_HOST_RGF_IMR_MEM_TO_DIN_MASK_IRQDisable (0x1UL)

/* Bit 5 : The DOUT to RNG SRAM DMA done interrupt mask. */
#define CC_HOST_RGF_IMR_DOUT_TO_SRAM_MASK_Pos (5UL)
#define CC_HOST_RGF_IMR_DOUT_TO_SRAM_MASK_Msk (0x1UL << CC_HOST_RGF_IMR_DOUT_TO_SRAM_MASK_Pos)
#define CC_HOST_RGF_IMR_DOUT_TO_SRAM_MASK_IRQEnable (0x0UL)
#define CC_HOST_RGF_IMR_DOUT_TO_SRAM_MASK_IRQDisable (0x1UL)

/* Bit 4 : The RNG SRAM to DIN DMA done interrupt mask. */
#define CC_HOST_RGF_IMR_SRAM_TO_DIN_MASK_Pos (4UL)
#define CC_HOST_RGF_IMR_SRAM_TO_DIN_MASK_Msk (0x1UL << CC_HOST_RGF_IMR_SRAM_TO_DIN_MASK_Pos)
#define CC_HOST_RGF_IMR_SRAM_TO_DIN_MASK_IRQEnable (0x0UL)
#define CC_HOST_RGF_IMR_SRAM_TO_DIN_MASK_IRQDisable (0x1UL)

/* Register: CC_HOST_RGF_ICR */
/* Description: Interrupt clear register. Writing a 1 bit into a field in this register will clear the corresponding bit in IRR. */

/* Bit 11 : The symmetric engine DMA completed interrupt clear. */
#define CC_HOST_RGF_ICR_SYM_DMA_CLEAR_Pos (11UL)
#define CC_HOST_RGF_ICR_SYM_DMA_CLEAR_Msk (0x1UL << CC_HOST_RGF_ICR_SYM_DMA_CLEAR_Pos)

/* Bit 10 : The RNG interrupt clear. Register RNG_ISR in the RNG engine must be cleared before this interrupt can be cleared. */
#define CC_HOST_RGF_ICR_RNG_CLEAR_Pos (10UL)
#define CC_HOST_RGF_ICR_RNG_CLEAR_Msk (0x1UL << CC_HOST_RGF_ICR_RNG_CLEAR_Pos)

/* Bit 9 : The PKA end of operation interrupt clear. */
#define CC_HOST_RGF_ICR_PKA_CLEAR_Pos (9UL)
#define CC_HOST_RGF_ICR_PKA_CLEAR_Msk (0x1UL << CC_HOST_RGF_ICR_PKA_CLEAR_Pos)

/* Bit 8 : The AHB error interrupt clear. */
#define CC_HOST_RGF_ICR_AHB_ERR_CLEAR_Pos (8UL)
#define CC_HOST_RGF_ICR_AHB_ERR_CLEAR_Msk (0x1UL << CC_HOST_RGF_ICR_AHB_ERR_CLEAR_Pos)

/* Bit 7 : The DOUT to memory DMA done interrupt clear. */
#define CC_HOST_RGF_ICR_DOUT_TO_MEM_CLEAR_Pos (7UL)
#define CC_HOST_RGF_ICR_DOUT_TO_MEM_CLEAR_Msk (0x1UL << CC_HOST_RGF_ICR_DOUT_TO_MEM_CLEAR_Pos)

/* Bit 6 : The memory to DIN DMA done interrupt clear. */
#define CC_HOST_RGF_ICR_MEM_TO_DIN_CLEAR_Pos (6UL)
#define CC_HOST_RGF_ICR_MEM_TO_DIN_CLEAR_Msk (0x1UL << CC_HOST_RGF_ICR_MEM_TO_DIN_CLEAR_Pos)

/* Bit 5 : The DOUT to RNG SRAM DMA done interrupt clear. */
#define CC_HOST_RGF_ICR_DOUT_TO_SRAM_CLEAR_Pos (5UL)
#define CC_HOST_RGF_ICR_DOUT_TO_SRAM_CLEAR_Msk (0x1UL << CC_HOST_RGF_ICR_DOUT_TO_SRAM_CLEAR_Pos)

/* Bit 4 : The RNG SRAM to DIN DMA done interrupt clear. */
#define CC_HOST_RGF_ICR_SRAM_TO_DIN_CLEAR_Pos (4UL)
#define CC_HOST_RGF_ICR_SRAM_TO_DIN_CLEAR_Msk (0x1UL << CC_HOST_RGF_ICR_SRAM_TO_DIN_CLEAR_Pos)

/* Register: CC_HOST_RGF_ENDIANNESS */
/* Description: This register defines the endianness of the Host-accessible registers, and can only be written once. */

/* Bit 15 : DIN read word endianness. */
#define CC_HOST_RGF_ENDIANNESS_DIN_RD_WBG_Pos (15UL)
#define CC_HOST_RGF_ENDIANNESS_DIN_RD_WBG_Msk (0x1UL << CC_HOST_RGF_ENDIANNESS_DIN_RD_WBG_Pos)
#define CC_HOST_RGF_ENDIANNESS_DIN_RD_WBG_LittleEndian (0x0UL)
#define CC_HOST_RGF_ENDIANNESS_DIN_RD_WBG_BigEndian (0x1UL)

/* Bit 11 : DOUT write word endianness. */
#define CC_HOST_RGF_ENDIANNESS_DOUT_WR_WBG_Pos (11UL)
#define CC_HOST_RGF_ENDIANNESS_DOUT_WR_WBG_Msk (0x1UL << CC_HOST_RGF_ENDIANNESS_DOUT_WR_WBG_Pos)
#define CC_HOST_RGF_ENDIANNESS_DOUT_WR_WBG_LittleEndian (0x0UL)
#define CC_HOST_RGF_ENDIANNESS_DOUT_WR_WBG_BigEndian (0x1UL)

/* Bit 7 : DIN read endianness. */
#define CC_HOST_RGF_ENDIANNESS_DIN_RD_BG_Pos (7UL)
#define CC_HOST_RGF_ENDIANNESS_DIN_RD_BG_Msk (0x1UL << CC_HOST_RGF_ENDIANNESS_DIN_RD_BG_Pos)
#define CC_HOST_RGF_ENDIANNESS_DIN_RD_BG_LittleEndian (0x0UL)
#define CC_HOST_RGF_ENDIANNESS_DIN_RD_BG_BigEndian (0x1UL)

/* Bit 3 : DOUT write endianness. */
#define CC_HOST_RGF_ENDIANNESS_DOUT_WR_BG_Pos (3UL)
#define CC_HOST_RGF_ENDIANNESS_DOUT_WR_BG_Msk (0x1UL << CC_HOST_RGF_ENDIANNESS_DOUT_WR_BG_Pos)
#define CC_HOST_RGF_ENDIANNESS_DOUT_WR_BG_LittleEndian (0x0UL)
#define CC_HOST_RGF_ENDIANNESS_DOUT_WR_BG_BigEndian (0x1UL)

/* Register: CC_HOST_RGF_HOST_SIGNATURE */
/* Description: This register holds the CRYPTOCELL subsystem signature. See reset value. */

/* Bits 31..0 : Fixed-value identification signature used by host driver to verify CRYPTOCELL presence at this address. */
#define CC_HOST_RGF_HOST_SIGNATURE_VALUE_Pos (0UL)
#define CC_HOST_RGF_HOST_SIGNATURE_VALUE_Msk (0xFFFFFFFFUL << CC_HOST_RGF_HOST_SIGNATURE_VALUE_Pos)

/* Register: CC_HOST_RGF_HOST_BOOT */
/* Description: Hardware configuration of the CRYPTOCELL subsystem. Reset value holds the supported features. */

/* Bit 30 : If this flag is set, the AES engine is present */
#define CC_HOST_RGF_HOST_BOOT_AES_EXISTS_LOCAL_Pos (30UL)
#define CC_HOST_RGF_HOST_BOOT_AES_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_AES_EXISTS_LOCAL_Pos)

/* Bit 29 : If this flag is set, the AES engine only support encryption */
#define CC_HOST_RGF_HOST_BOOT_ONLY_ENCRYPT_LOCAL_Pos (29UL)
#define CC_HOST_RGF_HOST_BOOT_ONLY_ENCRYPT_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_ONLY_ENCRYPT_LOCAL_Pos)

/* Bit 28 : If this flag is set, the AES engine supports 192/256 bits key sizes */
#define CC_HOST_RGF_HOST_BOOT_SUPPORT_256_192_KEY_LOCAL_Pos (28UL)
#define CC_HOST_RGF_HOST_BOOT_SUPPORT_256_192_KEY_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_SUPPORT_256_192_KEY_LOCAL_Pos)

/* Bit 27 : If this flag is set, the AES engine supports tunneling operations */
#define CC_HOST_RGF_HOST_BOOT_TUNNELING_ENB_LOCAL_Pos (27UL)
#define CC_HOST_RGF_HOST_BOOT_TUNNELING_ENB_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_TUNNELING_ENB_LOCAL_Pos)

/* Bit 26 : If this flag is set, the AES engine data input support byte size resolution */
#define CC_HOST_RGF_HOST_BOOT_AES_DIN_BYTE_RESOLUTION_LOCAL_Pos (26UL)
#define CC_HOST_RGF_HOST_BOOT_AES_DIN_BYTE_RESOLUTION_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_AES_DIN_BYTE_RESOLUTION_LOCAL_Pos)

/* Bit 25 : If this flag is set, AES CTR mode is supported */
#define CC_HOST_RGF_HOST_BOOT_CTR_EXISTS_LOCAL_Pos (25UL)
#define CC_HOST_RGF_HOST_BOOT_CTR_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_CTR_EXISTS_LOCAL_Pos)

/* Bit 24 : If this flag is set, AES XEX mode is supported */
#define CC_HOST_RGF_HOST_BOOT_AES_XEX_EXISTS_LOCAL_Pos (24UL)
#define CC_HOST_RGF_HOST_BOOT_AES_XEX_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_AES_XEX_EXISTS_LOCAL_Pos)

/* Bit 23 : If this flag is set, AES XEX mode T-value calculation in HW is supported */
#define CC_HOST_RGF_HOST_BOOT_AES_XEX_HW_T_CALC_LOCAL_Pos (23UL)
#define CC_HOST_RGF_HOST_BOOT_AES_XEX_HW_T_CALC_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_AES_XEX_HW_T_CALC_LOCAL_Pos)

/* Bit 22 : If this flag is set, AES CCM mode is supported */
#define CC_HOST_RGF_HOST_BOOT_AES_CCM_EXISTS_LOCAL_Pos (22UL)
#define CC_HOST_RGF_HOST_BOOT_AES_CCM_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_AES_CCM_EXISTS_LOCAL_Pos)

/* Bit 21 : If this flag is set, AES CMAC mode is supported */
#define CC_HOST_RGF_HOST_BOOT_AES_CMAC_EXISTS_LOCAL_Pos (21UL)
#define CC_HOST_RGF_HOST_BOOT_AES_CMAC_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_AES_CMAC_EXISTS_LOCAL_Pos)

/* Bit 20 : If this flag is set, AES XCBC-MAC mode is supported */
#define CC_HOST_RGF_HOST_BOOT_AES_XCBC_MAC_EXISTS_LOCAL_Pos (20UL)
#define CC_HOST_RGF_HOST_BOOT_AES_XCBC_MAC_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_AES_XCBC_MAC_EXISTS_LOCAL_Pos)

/* Bit 19 : If this flag is set, the DES engine is present */
#define CC_HOST_RGF_HOST_BOOT_DES_EXISTS_LOCAL_Pos (19UL)
#define CC_HOST_RGF_HOST_BOOT_DES_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_DES_EXISTS_LOCAL_Pos)

/* Bit 18 : If this flag is set, the C2 engine is present */
#define CC_HOST_RGF_HOST_BOOT_C2_EXISTS_LOCAL_Pos (18UL)
#define CC_HOST_RGF_HOST_BOOT_C2_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_C2_EXISTS_LOCAL_Pos)

/* Bit 17 : If this flag is set, the HASH engine is present */
#define CC_HOST_RGF_HOST_BOOT_HASH_EXISTS_LOCAL_Pos (17UL)
#define CC_HOST_RGF_HOST_BOOT_HASH_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_HASH_EXISTS_LOCAL_Pos)

/* Bit 16 : If this flag is set, the HASH engine supports MD5 */
#define CC_HOST_RGF_HOST_BOOT_MD5_PRSNT_LOCAL_Pos (16UL)
#define CC_HOST_RGF_HOST_BOOT_MD5_PRSNT_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_MD5_PRSNT_LOCAL_Pos)

/* Bit 15 : If this flag is set, the HASH engine supports SHA256 */
#define CC_HOST_RGF_HOST_BOOT_SHA_256_PRSNT_LOCAL_Pos (15UL)
#define CC_HOST_RGF_HOST_BOOT_SHA_256_PRSNT_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_SHA_256_PRSNT_LOCAL_Pos)

/* Bit 14 : If this flag is set, the HASH engine supports SHA512 */
#define CC_HOST_RGF_HOST_BOOT_SHA_512_PRSNT_LOCAL_Pos (14UL)
#define CC_HOST_RGF_HOST_BOOT_SHA_512_PRSNT_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_SHA_512_PRSNT_LOCAL_Pos)

/* Bit 13 : If this flag is set, the RC4 engine is present */
#define CC_HOST_RGF_HOST_BOOT_RC4_EXISTS_LOCAL_Pos (13UL)
#define CC_HOST_RGF_HOST_BOOT_RC4_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_RC4_EXISTS_LOCAL_Pos)

/* Bit 12 : If this flag is set, the PKA engine is present */
#define CC_HOST_RGF_HOST_BOOT_PKA_EXISTS_LOCAL_Pos (12UL)
#define CC_HOST_RGF_HOST_BOOT_PKA_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_PKA_EXISTS_LOCAL_Pos)

/* Bit 11 : If this flag is set, the RNG engine is present */
#define CC_HOST_RGF_HOST_BOOT_RNG_EXISTS_LOCAL_Pos (11UL)
#define CC_HOST_RGF_HOST_BOOT_RNG_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_RNG_EXISTS_LOCAL_Pos)

/* Bit 10 : If this flag is set, PAU is supported */
#define CC_HOST_RGF_HOST_BOOT_PAU_EXISTS_LOCAL_Pos (10UL)
#define CC_HOST_RGF_HOST_BOOT_PAU_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_PAU_EXISTS_LOCAL_Pos)

/* Bit 9 : If this flag is set, Descriptors are supported */
#define CC_HOST_RGF_HOST_BOOT_DSCRPTR_EXISTS_LOCAL_Pos (9UL)
#define CC_HOST_RGF_HOST_BOOT_DSCRPTR_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_DSCRPTR_EXISTS_LOCAL_Pos)

/* Bits 8..6 : SRAM size */
#define CC_HOST_RGF_HOST_BOOT_SRAM_SIZE_LOCAL_Pos (6UL)
#define CC_HOST_RGF_HOST_BOOT_SRAM_SIZE_LOCAL_Msk (0x7UL << CC_HOST_RGF_HOST_BOOT_SRAM_SIZE_LOCAL_Pos)

/* Bit 5 : If this flag is set, RKEK ECC is supported */
#define CC_HOST_RGF_HOST_BOOT_RKEK_ECC_EXISTS_LOCAL_N_Pos (5UL)
#define CC_HOST_RGF_HOST_BOOT_RKEK_ECC_EXISTS_LOCAL_N_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_RKEK_ECC_EXISTS_LOCAL_N_Pos)

/* Bit 3 : If this flag is set, external secure memory is supported */
#define CC_HOST_RGF_HOST_BOOT_EXT_MEM_SECURED_LOCAL_Pos (3UL)
#define CC_HOST_RGF_HOST_BOOT_EXT_MEM_SECURED_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_EXT_MEM_SECURED_LOCAL_Pos)

/* Bit 2 : If this flag is set, HASH in fuses is supported */
#define CC_HOST_RGF_HOST_BOOT_HASH_IN_FUSES_LOCAL_Pos (2UL)
#define CC_HOST_RGF_HOST_BOOT_HASH_IN_FUSES_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_HASH_IN_FUSES_LOCAL_Pos)

/* Bit 1 : If this flag is set, large RKEK is supported */
#define CC_HOST_RGF_HOST_BOOT_LARGE_RKEK_LOCAL_Pos (1UL)
#define CC_HOST_RGF_HOST_BOOT_LARGE_RKEK_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_LARGE_RKEK_LOCAL_Pos)

/* Bit 0 : If this flag is set, full power gating is implemented */
#define CC_HOST_RGF_HOST_BOOT_POWER_GATING_EXISTS_LOCAL_Pos (0UL)
#define CC_HOST_RGF_HOST_BOOT_POWER_GATING_EXISTS_LOCAL_Msk (0x1UL << CC_HOST_RGF_HOST_BOOT_POWER_GATING_EXISTS_LOCAL_Pos)

/* Register: CC_HOST_RGF_HOST_CC_IS_IDLE */
/* Description: Idle state register for the CRYPTOCELL subsystem. */

/* Bit 9 : Cryptographic flow idle state. */
#define CC_HOST_RGF_HOST_CC_IS_IDLE_CRYPTO_IS_IDLE_Pos (9UL)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_CRYPTO_IS_IDLE_Msk (0x1UL << CC_HOST_RGF_HOST_CC_IS_IDLE_CRYPTO_IS_IDLE_Pos)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_CRYPTO_IS_IDLE_Busy (0x0UL)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_CRYPTO_IS_IDLE_Idle (0x1UL)

/* Bit 8 : PKA engine idle state. */
#define CC_HOST_RGF_HOST_CC_IS_IDLE_PKA_IS_IDLE_Pos (8UL)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_PKA_IS_IDLE_Msk (0x1UL << CC_HOST_RGF_HOST_CC_IS_IDLE_PKA_IS_IDLE_Pos)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_PKA_IS_IDLE_Busy (0x0UL)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_PKA_IS_IDLE_Idle (0x1UL)

/* Bit 7 : RNG engine idle state. */
#define CC_HOST_RGF_HOST_CC_IS_IDLE_RNG_IS_IDLE_Pos (7UL)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_RNG_IS_IDLE_Msk (0x1UL << CC_HOST_RGF_HOST_CC_IS_IDLE_RNG_IS_IDLE_Pos)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_RNG_IS_IDLE_Busy (0x0UL)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_RNG_IS_IDLE_Idle (0x1UL)

/* Bit 3 : AHB state machine idle state. */
#define CC_HOST_RGF_HOST_CC_IS_IDLE_AHB_IS_IDLE_Pos (3UL)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_AHB_IS_IDLE_Msk (0x1UL << CC_HOST_RGF_HOST_CC_IS_IDLE_AHB_IS_IDLE_Pos)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_AHB_IS_IDLE_Busy (0x0UL)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_AHB_IS_IDLE_Idle (0x1UL)

/* Bit 2 : Symmetric flow busy state. */
#define CC_HOST_RGF_HOST_CC_IS_IDLE_SYM_IS_BUSY_Pos (2UL)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_SYM_IS_BUSY_Msk (0x1UL << CC_HOST_RGF_HOST_CC_IS_IDLE_SYM_IS_BUSY_Pos)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_SYM_IS_BUSY_Idle (0x0UL)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_SYM_IS_BUSY_Busy (0x1UL)

/* Bit 0 : CRYPTOCELL idle state. */
#define CC_HOST_RGF_HOST_CC_IS_IDLE_HOST_CC_IS_IDLE_Pos (0UL)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_HOST_CC_IS_IDLE_Msk (0x1UL << CC_HOST_RGF_HOST_CC_IS_IDLE_HOST_CC_IS_IDLE_Pos)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_HOST_CC_IS_IDLE_Busy (0x0UL)
#define CC_HOST_RGF_HOST_CC_IS_IDLE_HOST_CC_IS_IDLE_Idle (0x1UL)

/* Register: CC_HOST_RGF_HOST_POWERDOWN */
/* Description: This register start the power-down sequence. */

/* Bit 0 : Power down enable register. */
#define CC_HOST_RGF_HOST_POWERDOWN_HOST_POWERDOWN_Pos (0UL)
#define CC_HOST_RGF_HOST_POWERDOWN_HOST_POWERDOWN_Msk (0x1UL << CC_HOST_RGF_HOST_POWERDOWN_HOST_POWERDOWN_Pos)


/* Peripheral: CC_MISC */
/* Description: CRYPTOCELL MISC interface */

/* Register: CC_MISC_AES_CLK */
/* Description: Clock control for the AES engine. */

/* Bit 0 : Enables clock for the AES engine. */
#define CC_MISC_AES_CLK_ENABLE_Pos (0UL)
#define CC_MISC_AES_CLK_ENABLE_Msk (0x1UL << CC_MISC_AES_CLK_ENABLE_Pos)
#define CC_MISC_AES_CLK_ENABLE_Disable (0x0UL)
#define CC_MISC_AES_CLK_ENABLE_Enable (0x1UL)

/* Register: CC_MISC_HASH_CLK */
/* Description: Clock control for the HASH engine. */

/* Bit 0 : Enables clock for the HASH engine. */
#define CC_MISC_HASH_CLK_ENABLE_Pos (0UL)
#define CC_MISC_HASH_CLK_ENABLE_Msk (0x1UL << CC_MISC_HASH_CLK_ENABLE_Pos)
#define CC_MISC_HASH_CLK_ENABLE_Disable (0x0UL)
#define CC_MISC_HASH_CLK_ENABLE_Enable (0x1UL)

/* Register: CC_MISC_PKA_CLK */
/* Description: Clock control for the PKA engine. */

/* Bit 0 : Enables clock for the PKA engine. */
#define CC_MISC_PKA_CLK_ENABLE_Pos (0UL)
#define CC_MISC_PKA_CLK_ENABLE_Msk (0x1UL << CC_MISC_PKA_CLK_ENABLE_Pos)
#define CC_MISC_PKA_CLK_ENABLE_Disable (0x0UL)
#define CC_MISC_PKA_CLK_ENABLE_Enable (0x1UL)

/* Register: CC_MISC_DMA_CLK */
/* Description: Clock control for the DMA engines. */

/* Bit 0 : Enables clock for the DMA engines. */
#define CC_MISC_DMA_CLK_ENABLE_Pos (0UL)
#define CC_MISC_DMA_CLK_ENABLE_Msk (0x1UL << CC_MISC_DMA_CLK_ENABLE_Pos)
#define CC_MISC_DMA_CLK_ENABLE_Disable (0x0UL)
#define CC_MISC_DMA_CLK_ENABLE_Enable (0x1UL)

/* Register: CC_MISC_CLK_STATUS */
/* Description: CRYPTOCELL clocks status register. */

/* Bit 8 : Status of DMA engines clock. */
#define CC_MISC_CLK_STATUS_DMA_CLK_Pos (8UL)
#define CC_MISC_CLK_STATUS_DMA_CLK_Msk (0x1UL << CC_MISC_CLK_STATUS_DMA_CLK_Pos)
#define CC_MISC_CLK_STATUS_DMA_CLK_Disabled (0x0UL)
#define CC_MISC_CLK_STATUS_DMA_CLK_Enabled (0x1UL)

/* Bit 7 : Status of CHACHA engine clock. */
#define CC_MISC_CLK_STATUS_CHACHA_CLK_Pos (7UL)
#define CC_MISC_CLK_STATUS_CHACHA_CLK_Msk (0x1UL << CC_MISC_CLK_STATUS_CHACHA_CLK_Pos)
#define CC_MISC_CLK_STATUS_CHACHA_CLK_Disabled (0x0UL)
#define CC_MISC_CLK_STATUS_CHACHA_CLK_Enabled (0x1UL)

/* Bit 3 : Status of PKA engine clock. */
#define CC_MISC_CLK_STATUS_PKA_CLK_Pos (3UL)
#define CC_MISC_CLK_STATUS_PKA_CLK_Msk (0x1UL << CC_MISC_CLK_STATUS_PKA_CLK_Pos)
#define CC_MISC_CLK_STATUS_PKA_CLK_Disabled (0x0UL)
#define CC_MISC_CLK_STATUS_PKA_CLK_Enabled (0x1UL)

/* Bit 2 : Status of HASH engine clock. */
#define CC_MISC_CLK_STATUS_HASH_CLK_Pos (2UL)
#define CC_MISC_CLK_STATUS_HASH_CLK_Msk (0x1UL << CC_MISC_CLK_STATUS_HASH_CLK_Pos)
#define CC_MISC_CLK_STATUS_HASH_CLK_Disabled (0x0UL)
#define CC_MISC_CLK_STATUS_HASH_CLK_Enabled (0x1UL)

/* Bit 0 : Status of AES engine clock. */
#define CC_MISC_CLK_STATUS_AES_CLK_Pos (0UL)
#define CC_MISC_CLK_STATUS_AES_CLK_Msk (0x1UL << CC_MISC_CLK_STATUS_AES_CLK_Pos)
#define CC_MISC_CLK_STATUS_AES_CLK_Disabled (0x0UL)
#define CC_MISC_CLK_STATUS_AES_CLK_Enabled (0x1UL)

/* Register: CC_MISC_CHACHA_CLK */
/* Description: Clock control for the CHACHA engine. */

/* Bit 0 : Enables clock for the CHACHA engine. */
#define CC_MISC_CHACHA_CLK_ENABLE_Pos (0UL)
#define CC_MISC_CHACHA_CLK_ENABLE_Msk (0x1UL << CC_MISC_CHACHA_CLK_ENABLE_Pos)
#define CC_MISC_CHACHA_CLK_ENABLE_Disable (0x0UL)
#define CC_MISC_CHACHA_CLK_ENABLE_Enable (0x1UL)


/* Peripheral: CC_PKA */
/* Description: CRYPTOCELL PKA engine */

/* Register: CC_PKA_MEMORY_MAP */
/* Description: Description collection: Register for mapping the virtual register R[n] to a physical address in the PKA SRAM. */

/* Bits 10..1 : The physical word address used for the virtual register. */
#define CC_PKA_MEMORY_MAP_ADDR_Pos (1UL)
#define CC_PKA_MEMORY_MAP_ADDR_Msk (0x3FFUL << CC_PKA_MEMORY_MAP_ADDR_Pos)

/* Register: CC_PKA_OPCODE */
/* Description: Operation code to be executed by the PKA engine. Writing to this register triggers the PKA operation. */

/* Bits 31..27 : Operation code to be executed by the PKA engine */
#define CC_PKA_OPCODE_OPCODE_Pos (27UL)
#define CC_PKA_OPCODE_OPCODE_Msk (0x1FUL << CC_PKA_OPCODE_OPCODE_Pos)
#define CC_PKA_OPCODE_OPCODE_Terminate (0x00UL)
#define CC_PKA_OPCODE_OPCODE_AddInc (0x04UL)
#define CC_PKA_OPCODE_OPCODE_SubDecNeg (0x05UL)
#define CC_PKA_OPCODE_OPCODE_ModAddInc (0x06UL)
#define CC_PKA_OPCODE_OPCODE_ModSubDecNeg (0x07UL)
#define CC_PKA_OPCODE_OPCODE_ANDTST0CLR0 (0x08UL)
#define CC_PKA_OPCODE_OPCODE_ORCOPYSET0 (0x09UL)
#define CC_PKA_OPCODE_OPCODE_XORFLP0INVCMP (0x0AUL)
#define CC_PKA_OPCODE_OPCODE_SHR0 (0x0CUL)
#define CC_PKA_OPCODE_OPCODE_SHR1 (0x0DUL)
#define CC_PKA_OPCODE_OPCODE_SHL0 (0x0EUL)
#define CC_PKA_OPCODE_OPCODE_SHL1 (0x0FUL)
#define CC_PKA_OPCODE_OPCODE_MulLow (0x10UL)
#define CC_PKA_OPCODE_OPCODE_ModMul (0x11UL)
#define CC_PKA_OPCODE_OPCODE_ModMulN (0x12UL)
#define CC_PKA_OPCODE_OPCODE_ModExp (0x13UL)
#define CC_PKA_OPCODE_OPCODE_Division (0x14UL)
#define CC_PKA_OPCODE_OPCODE_ModInv (0x15UL)
#define CC_PKA_OPCODE_OPCODE_ModDiv (0x16UL)
#define CC_PKA_OPCODE_OPCODE_MulHigh (0x17UL)
#define CC_PKA_OPCODE_OPCODE_ModMLAC (0x18UL)
#define CC_PKA_OPCODE_OPCODE_ModMLACNR (0x19UL)
#define CC_PKA_OPCODE_OPCODE_Reduction (0x1BUL)

/* Bits 26..24 : The length of the operands. This value serves as an PKA length register index. E.g.: if LEN field value is set to 0, PKA_L[0] holds the size of the operands. */
#define CC_PKA_OPCODE_LEN_Pos (24UL)
#define CC_PKA_OPCODE_LEN_Msk (0x7UL << CC_PKA_OPCODE_LEN_Pos)

/* Bit 23 : This field controls the interpretation of REG_A. */
#define CC_PKA_OPCODE_CONST_A_Pos (23UL)
#define CC_PKA_OPCODE_CONST_A_Msk (0x1UL << CC_PKA_OPCODE_CONST_A_Pos)
#define CC_PKA_OPCODE_CONST_A_Register (0x0UL)
#define CC_PKA_OPCODE_CONST_A_Constant (0x1UL)

/* Bits 22..18 : Operand A virtual register index. */
#define CC_PKA_OPCODE_REG_A_Pos (18UL)
#define CC_PKA_OPCODE_REG_A_Msk (0x1FUL << CC_PKA_OPCODE_REG_A_Pos)

/* Bit 17 : This field controls the interpretation of REG_B. */
#define CC_PKA_OPCODE_CONST_B_Pos (17UL)
#define CC_PKA_OPCODE_CONST_B_Msk (0x1UL << CC_PKA_OPCODE_CONST_B_Pos)
#define CC_PKA_OPCODE_CONST_B_Register (0x0UL)
#define CC_PKA_OPCODE_CONST_B_Constant (0x1UL)

/* Bits 16..12 : Operand B virtual register index. */
#define CC_PKA_OPCODE_REG_B_Pos (12UL)
#define CC_PKA_OPCODE_REG_B_Msk (0x1FUL << CC_PKA_OPCODE_REG_B_Pos)

/* Bit 11 : This field controls the interpretation of REG_R. */
#define CC_PKA_OPCODE_DISCARD_R_Pos (11UL)
#define CC_PKA_OPCODE_DISCARD_R_Msk (0x1UL << CC_PKA_OPCODE_DISCARD_R_Pos)
#define CC_PKA_OPCODE_DISCARD_R_Register (0x0UL)
#define CC_PKA_OPCODE_DISCARD_R_Discard (0x1UL)

/* Bits 10..6 : Result register virtual register index. */
#define CC_PKA_OPCODE_REG_R_Pos (6UL)
#define CC_PKA_OPCODE_REG_R_Msk (0x1FUL << CC_PKA_OPCODE_REG_R_Pos)

/* Bits 5..0 : Holds the operation tag or the operand C virtual register index. */
#define CC_PKA_OPCODE_TAG_Pos (0UL)
#define CC_PKA_OPCODE_TAG_Msk (0x3FUL << CC_PKA_OPCODE_TAG_Pos)

/* Register: CC_PKA_N_NP_T0_T1_ADDR */
/* Description: This register defines the N, Np, T0, and T1 virtual register index. */

/* Bits 19..15 : Temporary register 1 virtual register index. Default is R31. */
#define CC_PKA_N_NP_T0_T1_ADDR_T1_VIRTUAL_ADDR_Pos (15UL)
#define CC_PKA_N_NP_T0_T1_ADDR_T1_VIRTUAL_ADDR_Msk (0x1FUL << CC_PKA_N_NP_T0_T1_ADDR_T1_VIRTUAL_ADDR_Pos)

/* Bits 14..10 : Temporary register 0 virtual register index. Default is R30. */
#define CC_PKA_N_NP_T0_T1_ADDR_T0_VIRTUAL_ADDR_Pos (10UL)
#define CC_PKA_N_NP_T0_T1_ADDR_T0_VIRTUAL_ADDR_Msk (0x1FUL << CC_PKA_N_NP_T0_T1_ADDR_T0_VIRTUAL_ADDR_Pos)

/* Bits 9..5 : Register Np virtual register index. Default is R1. */
#define CC_PKA_N_NP_T0_T1_ADDR_NP_VIRTUAL_ADDR_Pos (5UL)
#define CC_PKA_N_NP_T0_T1_ADDR_NP_VIRTUAL_ADDR_Msk (0x1FUL << CC_PKA_N_NP_T0_T1_ADDR_NP_VIRTUAL_ADDR_Pos)

/* Bits 4..0 : Register N virtual register index. Default is R0. */
#define CC_PKA_N_NP_T0_T1_ADDR_N_VIRTUAL_ADDR_Pos (0UL)
#define CC_PKA_N_NP_T0_T1_ADDR_N_VIRTUAL_ADDR_Msk (0x1FUL << CC_PKA_N_NP_T0_T1_ADDR_N_VIRTUAL_ADDR_Pos)

/* Register: CC_PKA_PKA_STATUS */
/* Description: This register holds the status for the PKA pipeline. */

/* Bits 20..16 : Opcode of the last operation */
#define CC_PKA_PKA_STATUS_OPCODE_Pos (16UL)
#define CC_PKA_PKA_STATUS_OPCODE_Msk (0x1FUL << CC_PKA_PKA_STATUS_OPCODE_Pos)

/* Bit 15 : Indicates the modular inverse of zero. */
#define CC_PKA_PKA_STATUS_MODINV_OF_ZERO_Pos (15UL)
#define CC_PKA_PKA_STATUS_MODINV_OF_ZERO_Msk (0x1UL << CC_PKA_PKA_STATUS_MODINV_OF_ZERO_Pos)

/* Bit 14 : Indication if the division is done by zero. */
#define CC_PKA_PKA_STATUS_DIV_BY_ZERO_Pos (14UL)
#define CC_PKA_PKA_STATUS_DIV_BY_ZERO_Msk (0x1UL << CC_PKA_PKA_STATUS_DIV_BY_ZERO_Pos)

/* Bit 13 : Modular overflow flag. */
#define CC_PKA_PKA_STATUS_ALU_MODOVRFLW_Pos (13UL)
#define CC_PKA_PKA_STATUS_ALU_MODOVRFLW_Msk (0x1UL << CC_PKA_PKA_STATUS_ALU_MODOVRFLW_Pos)

/* Bit 12 : Indicates if the result of ALU OUT is zero. */
#define CC_PKA_PKA_STATUS_ALU_OUT_ZERO_Pos (12UL)
#define CC_PKA_PKA_STATUS_ALU_OUT_ZERO_Msk (0x1UL << CC_PKA_PKA_STATUS_ALU_OUT_ZERO_Pos)

/* Bit 11 : Indicates the last subtraction operation sign. */
#define CC_PKA_PKA_STATUS_ALU_SUB_IS_ZERO_Pos (11UL)
#define CC_PKA_PKA_STATUS_ALU_SUB_IS_ZERO_Msk (0x1UL << CC_PKA_PKA_STATUS_ALU_SUB_IS_ZERO_Pos)

/* Bit 10 : Holds the carry of the last modular operation. */
#define CC_PKA_PKA_STATUS_ALU_CARRY_MOD_Pos (10UL)
#define CC_PKA_PKA_STATUS_ALU_CARRY_MOD_Msk (0x1UL << CC_PKA_PKA_STATUS_ALU_CARRY_MOD_Pos)

/* Bit 9 : Holds the carry of the last ALU operation. */
#define CC_PKA_PKA_STATUS_ALU_CARRY_Pos (9UL)
#define CC_PKA_PKA_STATUS_ALU_CARRY_Msk (0x1UL << CC_PKA_PKA_STATUS_ALU_CARRY_Pos)

/* Bit 8 : Indicates the MSB sign of the last operation. */
#define CC_PKA_PKA_STATUS_ALU_SIGN_OUT_Pos (8UL)
#define CC_PKA_PKA_STATUS_ALU_SIGN_OUT_Msk (0x1UL << CC_PKA_PKA_STATUS_ALU_SIGN_OUT_Pos)

/* Bits 7..4 : The least significant 4-bits of the operand updated in shift operation. */
#define CC_PKA_PKA_STATUS_ALU_LSB_4BITS_Pos (4UL)
#define CC_PKA_PKA_STATUS_ALU_LSB_4BITS_Msk (0xFUL << CC_PKA_PKA_STATUS_ALU_LSB_4BITS_Pos)

/* Bits 3..0 : The most significant 4-bits of the operand updated in shift operation. */
#define CC_PKA_PKA_STATUS_ALU_MSB_4BITS_Pos (0UL)
#define CC_PKA_PKA_STATUS_ALU_MSB_4BITS_Msk (0xFUL << CC_PKA_PKA_STATUS_ALU_MSB_4BITS_Pos)

/* Register: CC_PKA_PKA_SW_RESET */
/* Description: Reset the PKA engine. */

/* Bit 0 : Writing any value to this address resets the PKA engine. The reset takes 4 CPU clock cycles to complete. */
#define CC_PKA_PKA_SW_RESET_RESET_Pos (0UL)
#define CC_PKA_PKA_SW_RESET_RESET_Msk (0x1UL << CC_PKA_PKA_SW_RESET_RESET_Pos)
#define CC_PKA_PKA_SW_RESET_RESET_Enable (0x1UL)

/* Register: CC_PKA_PKA_L */
/* Description: Description collection: This register holds the operands bit size. */

/* Bits 12..0 : Operand bit size. */
#define CC_PKA_PKA_L_OpSize_Pos (0UL)
#define CC_PKA_PKA_L_OpSize_Msk (0x1FFFUL << CC_PKA_PKA_L_OpSize_Pos)

/* Register: CC_PKA_PKA_PIPE */
/* Description: Status register indicating if the PKA pipeline is ready to receive a new OPCODE. */

/* Bit 0 : PKA pipeline status. */
#define CC_PKA_PKA_PIPE_STATUS_Pos (0UL)
#define CC_PKA_PKA_PIPE_STATUS_Msk (0x1UL << CC_PKA_PKA_PIPE_STATUS_Pos)
#define CC_PKA_PKA_PIPE_STATUS_NotReady (0x0UL)
#define CC_PKA_PKA_PIPE_STATUS_Ready (0x1UL)

/* Register: CC_PKA_PKA_DONE */
/* Description: Status register indicating if the PKA operation has been completed. */

/* Bit 0 : PKA operation status. */
#define CC_PKA_PKA_DONE_STATUS_Pos (0UL)
#define CC_PKA_PKA_DONE_STATUS_Msk (0x1UL << CC_PKA_PKA_DONE_STATUS_Pos)
#define CC_PKA_PKA_DONE_STATUS_Processing (0x0UL)
#define CC_PKA_PKA_DONE_STATUS_Completed (0x1UL)

/* Register: CC_PKA_PKA_VERSION */
/* Description: PKA engine HW version. Reset value holds the version. */

/* Bits 31..0 :   */
#define CC_PKA_PKA_VERSION_PKA_VERSION_Pos (0UL)
#define CC_PKA_PKA_VERSION_PKA_VERSION_Msk (0xFFFFFFFFUL << CC_PKA_PKA_VERSION_PKA_VERSION_Pos)

/* Register: CC_PKA_PKA_SRAM_WADDR */
/* Description: Start address in PKA SRAM for subsequent write transactions. */

/* Bits 31..0 : PKA SRAM start address for write transaction */
#define CC_PKA_PKA_SRAM_WADDR_ADDR_Pos (0UL)
#define CC_PKA_PKA_SRAM_WADDR_ADDR_Msk (0xFFFFFFFFUL << CC_PKA_PKA_SRAM_WADDR_ADDR_Pos)

/* Register: CC_PKA_PKA_SRAM_WDATA */
/* Description: Write data to PKA SRAM. Writing to this register triggers a DMA transaction writing data into PKA SRAM. The DMA address offset is automatically incremented during write. */

/* Bits 31..0 : Data to write to PKA SRAM. */
#define CC_PKA_PKA_SRAM_WDATA_DATA_Pos (0UL)
#define CC_PKA_PKA_SRAM_WDATA_DATA_Msk (0xFFFFFFFFUL << CC_PKA_PKA_SRAM_WDATA_DATA_Pos)

/* Register: CC_PKA_PKA_SRAM_RDATA */
/* Description: Read data from PKA SRAM. Reading from this register triggers a DMA transaction read data from PKA SRAM. The DMA address offset is automatically incremented during read. */

/* Bits 31..0 : Data to read from PKA SRAM */
#define CC_PKA_PKA_SRAM_RDATA_DATA_Pos (0UL)
#define CC_PKA_PKA_SRAM_RDATA_DATA_Msk (0xFFFFFFFFUL << CC_PKA_PKA_SRAM_RDATA_DATA_Pos)

/* Register: CC_PKA_PKA_SRAM_WCLEAR */
/* Description: Register for clearing PKA SRAM write buffer. */

/* Bits 31..0 : Clear the PKA SRAM write buffer. */
#define CC_PKA_PKA_SRAM_WCLEAR_CLEAR_Pos (0UL)
#define CC_PKA_PKA_SRAM_WCLEAR_CLEAR_Msk (0xFFFFFFFFUL << CC_PKA_PKA_SRAM_WCLEAR_CLEAR_Pos)

/* Register: CC_PKA_PKA_SRAM_RADDR */
/* Description: Start address in PKA SRAM for subsequent read transactions. */

/* Bits 31..0 : PKA SRAM start address for read transaction */
#define CC_PKA_PKA_SRAM_RADDR_ADDR_Pos (0UL)
#define CC_PKA_PKA_SRAM_RADDR_ADDR_Msk (0xFFFFFFFFUL << CC_PKA_PKA_SRAM_RADDR_ADDR_Pos)


/* Peripheral: CC_RNG */
/* Description: CRYPTOCELL RNG engine */

/* Register: CC_RNG_RNG_IMR */
/* Description: Interrupt mask register. Each bit of this register holds the mask of a single interrupt source. */

/* Bit 5 : See RNG_ISR for explanation on this interrupt. */
#define CC_RNG_RNG_IMR_DMA_DONE_MASK_Pos (5UL)
#define CC_RNG_RNG_IMR_DMA_DONE_MASK_Msk (0x1UL << CC_RNG_RNG_IMR_DMA_DONE_MASK_Pos)
#define CC_RNG_RNG_IMR_DMA_DONE_MASK_IRQEnable (0x0UL)
#define CC_RNG_RNG_IMR_DMA_DONE_MASK_IRQDisable (0x1UL)

/* Bit 4 : See RNG_ISR for explanation on this interrupt. */
#define CC_RNG_RNG_IMR_WATCHDOG_MASK_Pos (4UL)
#define CC_RNG_RNG_IMR_WATCHDOG_MASK_Msk (0x1UL << CC_RNG_RNG_IMR_WATCHDOG_MASK_Pos)
#define CC_RNG_RNG_IMR_WATCHDOG_MASK_IRQEnable (0x0UL)
#define CC_RNG_RNG_IMR_WATCHDOG_MASK_IRQDisable (0x1UL)

/* Bit 3 : See RNG_ISR for explanation on this interrupt. */
#define CC_RNG_RNG_IMR_VNC_ERR_MASK_Pos (3UL)
#define CC_RNG_RNG_IMR_VNC_ERR_MASK_Msk (0x1UL << CC_RNG_RNG_IMR_VNC_ERR_MASK_Pos)
#define CC_RNG_RNG_IMR_VNC_ERR_MASK_IRQEnable (0x0UL)
#define CC_RNG_RNG_IMR_VNC_ERR_MASK_IRQDisable (0x1UL)

/* Bit 2 : See RNG_ISR for explanation on this interrupt. */
#define CC_RNG_RNG_IMR_CRNGT_ERR_MASK_Pos (2UL)
#define CC_RNG_RNG_IMR_CRNGT_ERR_MASK_Msk (0x1UL << CC_RNG_RNG_IMR_CRNGT_ERR_MASK_Pos)
#define CC_RNG_RNG_IMR_CRNGT_ERR_MASK_IRQEnable (0x0UL)
#define CC_RNG_RNG_IMR_CRNGT_ERR_MASK_IRQDisable (0x1UL)

/* Bit 1 : See RNG_ISR for explanation on this interrupt. */
#define CC_RNG_RNG_IMR_AUTOCORR_ERR_MASK_Pos (1UL)
#define CC_RNG_RNG_IMR_AUTOCORR_ERR_MASK_Msk (0x1UL << CC_RNG_RNG_IMR_AUTOCORR_ERR_MASK_Pos)
#define CC_RNG_RNG_IMR_AUTOCORR_ERR_MASK_IRQEnable (0x0UL)
#define CC_RNG_RNG_IMR_AUTOCORR_ERR_MASK_IRQDisable (0x1UL)

/* Bit 0 : See RNG_ISR for explanation on this interrupt. */
#define CC_RNG_RNG_IMR_EHR_VALID_MASK_Pos (0UL)
#define CC_RNG_RNG_IMR_EHR_VALID_MASK_Msk (0x1UL << CC_RNG_RNG_IMR_EHR_VALID_MASK_Pos)
#define CC_RNG_RNG_IMR_EHR_VALID_MASK_IRQEnable (0x0UL)
#define CC_RNG_RNG_IMR_EHR_VALID_MASK_IRQDisable (0x1UL)

/* Register: CC_RNG_RNG_ISR */
/* Description: Interrupt status register. Each bit of this register holds the interrupt
        status of a single interrupt source. If corresponding RNG_IMR bit is
        unmasked, an interrupt is generated. */

/* Bit 5 : RNG DMA to SRAM is completed. */
#define CC_RNG_RNG_ISR_DMA_DONE_INT_Pos (5UL)
#define CC_RNG_RNG_ISR_DMA_DONE_INT_Msk (0x1UL << CC_RNG_RNG_ISR_DMA_DONE_INT_Pos)

/* Bit 4 : Maximum number of CPU clock cycles per sample have been exceeded. See RNG_WATCHDOG_VAL for more information. */
#define CC_RNG_RNG_ISR_WATCHDOG_INT_Pos (4UL)
#define CC_RNG_RNG_ISR_WATCHDOG_INT_Msk (0x1UL << CC_RNG_RNG_ISR_WATCHDOG_INT_Pos)

/* Bit 3 : von Neumann corrector error. Failure occurs if 32 consecutive collected bits are identical, ZERO, or ONE. */
#define CC_RNG_RNG_ISR_VNC_ERR_INT_Pos (3UL)
#define CC_RNG_RNG_ISR_VNC_ERR_INT_Msk (0x1UL << CC_RNG_RNG_ISR_VNC_ERR_INT_Pos)

/* Bit 2 : Continuous random number generator test error. Failure occurs when two consecutive blocks of 16 collected bits are equal. */
#define CC_RNG_RNG_ISR_CRNGT_ERR_INT_Pos (2UL)
#define CC_RNG_RNG_ISR_CRNGT_ERR_INT_Msk (0x1UL << CC_RNG_RNG_ISR_CRNGT_ERR_INT_Pos)

/* Bit 1 : Autocorrelation error. Failure occurs when autocorrelation test has failed four times in a row. Once set, the TRNG ceases to function until next reset. */
#define CC_RNG_RNG_ISR_AUTOCORR_ERR_INT_Pos (1UL)
#define CC_RNG_RNG_ISR_AUTOCORR_ERR_INT_Msk (0x1UL << CC_RNG_RNG_ISR_AUTOCORR_ERR_INT_Pos)

/* Bit 0 : 192-bits have been collected and are ready to be read. */
#define CC_RNG_RNG_ISR_EHR_VALID_INT_Pos (0UL)
#define CC_RNG_RNG_ISR_EHR_VALID_INT_Msk (0x1UL << CC_RNG_RNG_ISR_EHR_VALID_INT_Pos)

/* Register: CC_RNG_RNG_ICR */
/* Description: Interrupt clear register. Writing a 1 bit into a field in this register
        will clear the corresponding bit in RNG_ISR. */

/* Bit 5 : Writing value '1' clears corresponding bit in RNG_ISR */
#define CC_RNG_RNG_ICR_DMA_DONE_CLEAR_Pos (5UL)
#define CC_RNG_RNG_ICR_DMA_DONE_CLEAR_Msk (0x1UL << CC_RNG_RNG_ICR_DMA_DONE_CLEAR_Pos)

/* Bit 4 : Writing value '1' clears corresponding bit in RNG_ISR */
#define CC_RNG_RNG_ICR_WATCHDOG_CLEAR_Pos (4UL)
#define CC_RNG_RNG_ICR_WATCHDOG_CLEAR_Msk (0x1UL << CC_RNG_RNG_ICR_WATCHDOG_CLEAR_Pos)

/* Bit 3 : Writing value '1' clears corresponding bit in RNG_ISR */
#define CC_RNG_RNG_ICR_VNC_ERR_CLEAR_Pos (3UL)
#define CC_RNG_RNG_ICR_VNC_ERR_CLEAR_Msk (0x1UL << CC_RNG_RNG_ICR_VNC_ERR_CLEAR_Pos)

/* Bit 2 : Writing value '1' clears corresponding bit in RNG_ISR */
#define CC_RNG_RNG_ICR_CRNGT_ERR_CLEAR_Pos (2UL)
#define CC_RNG_RNG_ICR_CRNGT_ERR_CLEAR_Msk (0x1UL << CC_RNG_RNG_ICR_CRNGT_ERR_CLEAR_Pos)

/* Bit 1 : Cannot be cleared by software! Only RNG reset clears this bit. */
#define CC_RNG_RNG_ICR_AUTOCORR_ERR_CLEAR_Pos (1UL)
#define CC_RNG_RNG_ICR_AUTOCORR_ERR_CLEAR_Msk (0x1UL << CC_RNG_RNG_ICR_AUTOCORR_ERR_CLEAR_Pos)

/* Bit 0 : Writing value '1' clears corresponding bit in RNG_ISR */
#define CC_RNG_RNG_ICR_EHR_VALID_CLEAR_Pos (0UL)
#define CC_RNG_RNG_ICR_EHR_VALID_CLEAR_Msk (0x1UL << CC_RNG_RNG_ICR_EHR_VALID_CLEAR_Pos)

/* Register: CC_RNG_TRNG_CONFIG */
/* Description: TRNG ring oscillator length configuration */

/* Bits 1..0 : Set the length of the oscillator ring (= the number of inverters) out of four possible configurations. */
#define CC_RNG_TRNG_CONFIG_ROSC_LEN_Pos (0UL)
#define CC_RNG_TRNG_CONFIG_ROSC_LEN_Msk (0x3UL << CC_RNG_TRNG_CONFIG_ROSC_LEN_Pos)
#define CC_RNG_TRNG_CONFIG_ROSC_LEN_ROSC1 (0x0UL)
#define CC_RNG_TRNG_CONFIG_ROSC_LEN_ROSC2 (0x1UL)
#define CC_RNG_TRNG_CONFIG_ROSC_LEN_ROSC3 (0x2UL)
#define CC_RNG_TRNG_CONFIG_ROSC_LEN_ROSC4 (0x3UL)

/* Register: CC_RNG_TRNG_VALID */
/* Description: This register indicates if TRNG entropy collection is valid. */

/* Bit 0 : A value of 1 indicates that collection of bits in the TRNG is completed, and data can be read from EHR_DATA registers. */
#define CC_RNG_TRNG_VALID_EHR_DATA_Pos (0UL)
#define CC_RNG_TRNG_VALID_EHR_DATA_Msk (0x1UL << CC_RNG_TRNG_VALID_EHR_DATA_Pos)
#define CC_RNG_TRNG_VALID_EHR_DATA_NotValid (0x0UL)
#define CC_RNG_TRNG_VALID_EHR_DATA_Valid (0x1UL)

/* Register: CC_RNG_EHR_DATA */
/* Description: Description collection: The entropy holding registers (EHR) hold 192-bits random data collected by the TRNG. The initial EHR_DATA[0] register holds the least significant bits [31:0] of the random data value. */

/* Bits 31..0 : Random data value. */
#define CC_RNG_EHR_DATA_VALUE_Pos (0UL)
#define CC_RNG_EHR_DATA_VALUE_Msk (0xFFFFFFFFUL << CC_RNG_EHR_DATA_VALUE_Pos)

/* Register: CC_RNG_NOISE_SOURCE */
/* Description: This register controls the ring oscillator circuit used as a noise source. */

/* Bit 0 : Enable or disable the noise source. */
#define CC_RNG_NOISE_SOURCE_ENABLE_Pos (0UL)
#define CC_RNG_NOISE_SOURCE_ENABLE_Msk (0x1UL << CC_RNG_NOISE_SOURCE_ENABLE_Pos)
#define CC_RNG_NOISE_SOURCE_ENABLE_Disabled (0x0UL)
#define CC_RNG_NOISE_SOURCE_ENABLE_Enabled (0x1UL)

/* Register: CC_RNG_SAMPLE_CNT */
/* Description: Sample count defining the number of CPU clock cycles between two consecutive noise source samples. */

/* Bits 31..0 : Number of CPU clock cycles between two consecutive noise source samples. */
#define CC_RNG_SAMPLE_CNT_VALUE_Pos (0UL)
#define CC_RNG_SAMPLE_CNT_VALUE_Msk (0xFFFFFFFFUL << CC_RNG_SAMPLE_CNT_VALUE_Pos)

/* Register: CC_RNG_AUTOCORR_STATISTIC */
/* Description: Statistics counter for autocorrelation test activations. Statistics collection is stopped if one of the counters reach its limit of all ones. */

/* Bits 21..14 : Count each time an autocorrelation test fails. Any write to the field resets the counter. */
#define CC_RNG_AUTOCORR_STATISTIC_AUTOCORR_FAILS_Pos (14UL)
#define CC_RNG_AUTOCORR_STATISTIC_AUTOCORR_FAILS_Msk (0xFFUL << CC_RNG_AUTOCORR_STATISTIC_AUTOCORR_FAILS_Pos)

/* Bits 13..0 : Count each time an autocorrelation test starts. Any write to the field resets the counter. */
#define CC_RNG_AUTOCORR_STATISTIC_AUTOCORR_TRYS_Pos (0UL)
#define CC_RNG_AUTOCORR_STATISTIC_AUTOCORR_TRYS_Msk (0x3FFFUL << CC_RNG_AUTOCORR_STATISTIC_AUTOCORR_TRYS_Pos)

/* Register: CC_RNG_TRNG_DEBUG */
/* Description: Debug register for the TRNG. This register is used to bypass TRNG tests in hardware. */

/* Bit 3 : Bypass the autocorrelation test. */
#define CC_RNG_TRNG_DEBUG_AUTOCORR_BYPASS_Pos (3UL)
#define CC_RNG_TRNG_DEBUG_AUTOCORR_BYPASS_Msk (0x1UL << CC_RNG_TRNG_DEBUG_AUTOCORR_BYPASS_Pos)
#define CC_RNG_TRNG_DEBUG_AUTOCORR_BYPASS_Disabled (0x0UL)
#define CC_RNG_TRNG_DEBUG_AUTOCORR_BYPASS_Enabled (0x1UL)

/* Bit 2 : Bypass the Continuous Random Number Generator Test (CRNGT). */
#define CC_RNG_TRNG_DEBUG_CRNGT_BYPASS_Pos (2UL)
#define CC_RNG_TRNG_DEBUG_CRNGT_BYPASS_Msk (0x1UL << CC_RNG_TRNG_DEBUG_CRNGT_BYPASS_Pos)
#define CC_RNG_TRNG_DEBUG_CRNGT_BYPASS_Disabled (0x0UL)
#define CC_RNG_TRNG_DEBUG_CRNGT_BYPASS_Enabled (0x1UL)

/* Bit 1 : Bypass the von Neumann corrector post-processing test, including the 32 consecutive bits test. */
#define CC_RNG_TRNG_DEBUG_VNC_BYPASS_Pos (1UL)
#define CC_RNG_TRNG_DEBUG_VNC_BYPASS_Msk (0x1UL << CC_RNG_TRNG_DEBUG_VNC_BYPASS_Pos)
#define CC_RNG_TRNG_DEBUG_VNC_BYPASS_Disabled (0x0UL)
#define CC_RNG_TRNG_DEBUG_VNC_BYPASS_Enabled (0x1UL)

/* Register: CC_RNG_RNG_SW_RESET */
/* Description: Reset the RNG engine. */

/* Bit 0 : Writing any value to this address resets the RNG engine. The reset takes 4 CPU clock cycles to complete. */
#define CC_RNG_RNG_SW_RESET_RESET_Pos (0UL)
#define CC_RNG_RNG_SW_RESET_RESET_Msk (0x1UL << CC_RNG_RNG_SW_RESET_RESET_Pos)
#define CC_RNG_RNG_SW_RESET_RESET_Enable (0x1UL)

/* Register: CC_RNG_RNG_BUSY */
/* Description: Status register for RNG engine activity. */

/* Bit 1 : TRNG status. */
#define CC_RNG_RNG_BUSY_TRNG_STATUS_Pos (1UL)
#define CC_RNG_RNG_BUSY_TRNG_STATUS_Msk (0x1UL << CC_RNG_RNG_BUSY_TRNG_STATUS_Pos)
#define CC_RNG_RNG_BUSY_TRNG_STATUS_Idle (0x0UL)
#define CC_RNG_RNG_BUSY_TRNG_STATUS_Busy (0x1UL)

/* Bit 0 : RNG engine status. */
#define CC_RNG_RNG_BUSY_STATUS_Pos (0UL)
#define CC_RNG_RNG_BUSY_STATUS_Msk (0x1UL << CC_RNG_RNG_BUSY_STATUS_Pos)
#define CC_RNG_RNG_BUSY_STATUS_Idle (0x0UL)
#define CC_RNG_RNG_BUSY_STATUS_Busy (0x1UL)

/* Register: CC_RNG_TRNG_RESET */
/* Description: Reset the TRNG, including internal counter of collected bits and registers EHR_DATA and TRNG_VALID. */

/* Bit 0 : Writing any value to this address resets the internal bits counter and registers EHR_DATA and TRNG_VALID. Register NOISE_SOURCE must be disabled in order for the reset to take place. */
#define CC_RNG_TRNG_RESET_RESET_Pos (0UL)
#define CC_RNG_TRNG_RESET_RESET_Msk (0x1UL << CC_RNG_TRNG_RESET_RESET_Pos)
#define CC_RNG_TRNG_RESET_RESET_Enable (0x1UL)

/* Register: CC_RNG_RNG_HW_FLAGS */
/* Description: Hardware configuration of RNG engine. Reset value holds the supported features. */

/* Bit 7 :   */
#define CC_RNG_RNG_HW_FLAGS_RNG_USE_5_SBOXES_Pos (7UL)
#define CC_RNG_RNG_HW_FLAGS_RNG_USE_5_SBOXES_Msk (0x1UL << CC_RNG_RNG_HW_FLAGS_RNG_USE_5_SBOXES_Pos)
#define CC_RNG_RNG_HW_FLAGS_RNG_USE_5_SBOXES_Disable (0x0UL)
#define CC_RNG_RNG_HW_FLAGS_RNG_USE_5_SBOXES_Enable (0x1UL)

/* Bit 6 : If this flag is set, the engine include support for automatic reseeding. */
#define CC_RNG_RNG_HW_FLAGS_RESEEDING_EXISTS_Pos (6UL)
#define CC_RNG_RNG_HW_FLAGS_RESEEDING_EXISTS_Msk (0x1UL << CC_RNG_RNG_HW_FLAGS_RESEEDING_EXISTS_Pos)

/* Bit 5 : If this flag is set, the engine include support for known answer tests. */
#define CC_RNG_RNG_HW_FLAGS_KAT_EXISTS_Pos (5UL)
#define CC_RNG_RNG_HW_FLAGS_KAT_EXISTS_Msk (0x1UL << CC_RNG_RNG_HW_FLAGS_KAT_EXISTS_Pos)

/* Bit 4 : If this flag is set, the engine include a pseudo-random number generator. */
#define CC_RNG_RNG_HW_FLAGS_PRNG_EXISTS_Pos (4UL)
#define CC_RNG_RNG_HW_FLAGS_PRNG_EXISTS_Msk (0x1UL << CC_RNG_RNG_HW_FLAGS_PRNG_EXISTS_Pos)

/* Bit 3 : If this flag is set, the engine include support for bypassing TRNG tests. */
#define CC_RNG_RNG_HW_FLAGS_BYPASS_EXISTS_Pos (3UL)
#define CC_RNG_RNG_HW_FLAGS_BYPASS_EXISTS_Msk (0x1UL << CC_RNG_RNG_HW_FLAGS_BYPASS_EXISTS_Pos)

/* Bit 2 : If this flag is set, the engine include support for autocorrelation test. */
#define CC_RNG_RNG_HW_FLAGS_AUTOCORR_EXISTS_Pos (2UL)
#define CC_RNG_RNG_HW_FLAGS_AUTOCORR_EXISTS_Msk (0x1UL << CC_RNG_RNG_HW_FLAGS_AUTOCORR_EXISTS_Pos)

/* Bit 1 : If this flag is set, the engine include support for continuous random number generator test. */
#define CC_RNG_RNG_HW_FLAGS_CRNGT_EXISTS_Pos (1UL)
#define CC_RNG_RNG_HW_FLAGS_CRNGT_EXISTS_Msk (0x1UL << CC_RNG_RNG_HW_FLAGS_CRNGT_EXISTS_Pos)

/* Bit 0 : Data width supported by the entropy collector */
#define CC_RNG_RNG_HW_FLAGS_EHR_WIDTH_Pos (0UL)
#define CC_RNG_RNG_HW_FLAGS_EHR_WIDTH_Msk (0x1UL << CC_RNG_RNG_HW_FLAGS_EHR_WIDTH_Pos)
#define CC_RNG_RNG_HW_FLAGS_EHR_WIDTH_128Bits (0x0UL)
#define CC_RNG_RNG_HW_FLAGS_EHR_WIDTH_192Bits (0x1UL)

/* Register: CC_RNG_RNG_CLK */
/* Description: Control clock for the RNG engine. */

/* Bit 0 : Enables clock for the RNG engine. */
#define CC_RNG_RNG_CLK_ENABLE_Pos (0UL)
#define CC_RNG_RNG_CLK_ENABLE_Msk (0x1UL << CC_RNG_RNG_CLK_ENABLE_Pos)
#define CC_RNG_RNG_CLK_ENABLE_Disable (0x0UL)
#define CC_RNG_RNG_CLK_ENABLE_Enable (0x1UL)

/* Register: CC_RNG_RNG_DMA */
/* Description: Writing to this register enables the RNG DMA engine. */

/* Bit 0 :   */
#define CC_RNG_RNG_DMA_ENABLE_Pos (0UL)
#define CC_RNG_RNG_DMA_ENABLE_Msk (0x1UL << CC_RNG_RNG_DMA_ENABLE_Pos)
#define CC_RNG_RNG_DMA_ENABLE_Disable (0x0UL)
#define CC_RNG_RNG_DMA_ENABLE_Enable (0x1UL)

/* Register: CC_RNG_RNG_DMA_ROSC_LEN */
/* Description: This register defines which ring oscillator length configuration should be used when using the RNG DMA engine. */

/* Bit 3 : Use longest ROSC4 ring oscillator configuration. */
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC4_Pos (3UL)
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC4_Msk (0x1UL << CC_RNG_RNG_DMA_ROSC_LEN_ROSC4_Pos)
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC4_Disable (0x0UL)
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC4_Enable (0x1UL)

/* Bit 2 : Use ROSC3 ring oscillator configuration. */
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC3_Pos (2UL)
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC3_Msk (0x1UL << CC_RNG_RNG_DMA_ROSC_LEN_ROSC3_Pos)
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC3_Disable (0x0UL)
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC3_Enable (0x1UL)

/* Bit 1 : Use ROSC2 ring oscillator configuration. */
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC2_Pos (1UL)
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC2_Msk (0x1UL << CC_RNG_RNG_DMA_ROSC_LEN_ROSC2_Pos)
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC2_Disable (0x0UL)
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC2_Enable (0x1UL)

/* Bit 0 : Use shortest ROSC1 ring oscillator configuration. */
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC1_Pos (0UL)
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC1_Msk (0x1UL << CC_RNG_RNG_DMA_ROSC_LEN_ROSC1_Pos)
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC1_Disable (0x0UL)
#define CC_RNG_RNG_DMA_ROSC_LEN_ROSC1_Enable (0x1UL)

/* Register: CC_RNG_RNG_DMA_SRAM_ADDR */
/* Description: This register defines the start address in TRNG SRAM for the TRNG data to be collected by the RNG DMA engine. */

/* Bits 10..0 : Start address of the TRNG data in TRNG SRAM. */
#define CC_RNG_RNG_DMA_SRAM_ADDR_RNG_SRAM_DMA_ADDR_Pos (0UL)
#define CC_RNG_RNG_DMA_SRAM_ADDR_RNG_SRAM_DMA_ADDR_Msk (0x7FFUL << CC_RNG_RNG_DMA_SRAM_ADDR_RNG_SRAM_DMA_ADDR_Pos)

/* Register: CC_RNG_RNG_DMA_SAMPLES_NUM */
/* Description: This register defines the number of 192-bits samples that the RNG DMA engine collects per run. */

/* Bits 7..0 : Defines the number of 192-bits samples that the DMA engine collects per run. */
#define CC_RNG_RNG_DMA_SAMPLES_NUM_RNG_SAMPLES_NUM_Pos (0UL)
#define CC_RNG_RNG_DMA_SAMPLES_NUM_RNG_SAMPLES_NUM_Msk (0xFFUL << CC_RNG_RNG_DMA_SAMPLES_NUM_RNG_SAMPLES_NUM_Pos)

/* Register: CC_RNG_RNG_WATCHDOG_VAL */
/* Description: This register defines the maximum number of CPU clock cycles per TRNG collection of 192-bits samples. If the number of cycles for a collection exceeds this threshold the WATCHDOG interrupt is triggered. */

/* Bits 31..0 : Defines the maximum number of CPU clock cycles per TRNG collection of 192-bits samples. If the number of cycles for a collection exceeds this threshold the WATCHDOG interrupt is triggered. */
#define CC_RNG_RNG_WATCHDOG_VAL_RNG_WATCHDOG_VAL_Pos (0UL)
#define CC_RNG_RNG_WATCHDOG_VAL_RNG_WATCHDOG_VAL_Msk (0xFFFFFFFFUL << CC_RNG_RNG_WATCHDOG_VAL_RNG_WATCHDOG_VAL_Pos)

/* Register: CC_RNG_RNG_DMA_BUSY */
/* Description: Status register for RNG DMA engine activity. */

/* Bits 10..3 : Number of samples already collected using the current ring oscillator configuration. */
#define CC_RNG_RNG_DMA_BUSY_NUM_OF_SAMPLES_Pos (3UL)
#define CC_RNG_RNG_DMA_BUSY_NUM_OF_SAMPLES_Msk (0xFFUL << CC_RNG_RNG_DMA_BUSY_NUM_OF_SAMPLES_Pos)

/* Bits 2..1 : The active ring oscillator length configuration used by the RNG DMA engine. */
#define CC_RNG_RNG_DMA_BUSY_ROSC_LEN_Pos (1UL)
#define CC_RNG_RNG_DMA_BUSY_ROSC_LEN_Msk (0x3UL << CC_RNG_RNG_DMA_BUSY_ROSC_LEN_Pos)
#define CC_RNG_RNG_DMA_BUSY_ROSC_LEN_ROSC1 (0x0UL)
#define CC_RNG_RNG_DMA_BUSY_ROSC_LEN_ROSC2 (0x1UL)
#define CC_RNG_RNG_DMA_BUSY_ROSC_LEN_ROSC3 (0x2UL)
#define CC_RNG_RNG_DMA_BUSY_ROSC_LEN_ROSC4 (0x3UL)

/* Bit 0 : RNG DMA engine status. */
#define CC_RNG_RNG_DMA_BUSY_STATUS_Pos (0UL)
#define CC_RNG_RNG_DMA_BUSY_STATUS_Msk (0x1UL << CC_RNG_RNG_DMA_BUSY_STATUS_Pos)
#define CC_RNG_RNG_DMA_BUSY_STATUS_Idle (0x0UL)
#define CC_RNG_RNG_DMA_BUSY_STATUS_Busy (0x1UL)


/* Peripheral: CC_RNG_SRAM */
/* Description: CRYPTOCELL RNG SRAM interface */

/* Register: CC_RNG_SRAM_SRAM_DATA */
/* Description: Read/Write data from RNG SRAM */

/* Bits 31..0 : 32 bits DMA read/write from/to RNG SRAM. A 'read' or 'write' operation to this register will trigger the DMA address to be automatically incremented. */
#define CC_RNG_SRAM_SRAM_DATA_SRAM_DATA_Pos (0UL)
#define CC_RNG_SRAM_SRAM_DATA_SRAM_DATA_Msk (0xFFFFFFFFUL << CC_RNG_SRAM_SRAM_DATA_SRAM_DATA_Pos)

/* Register: CC_RNG_SRAM_SRAM_ADDR */
/* Description: First address given to RNG SRAM DMA for read/write transactions from/to RNG SRAM. */

/* Bits 14..0 : RNG SRAM starting address */
#define CC_RNG_SRAM_SRAM_ADDR_SRAM_ADDR_Pos (0UL)
#define CC_RNG_SRAM_SRAM_ADDR_SRAM_ADDR_Msk (0x7FFFUL << CC_RNG_SRAM_SRAM_ADDR_SRAM_ADDR_Pos)

/* Register: CC_RNG_SRAM_SRAM_DATA_READY */
/* Description: RNG SRAM DMA engine is ready to read/write from/to RNG SRAM. */

/* Bit 0 : RNG SRAM DMA status. */
#define CC_RNG_SRAM_SRAM_DATA_READY_SRAM_READY_Pos (0UL)
#define CC_RNG_SRAM_SRAM_DATA_READY_SRAM_READY_Msk (0x1UL << CC_RNG_SRAM_SRAM_DATA_READY_SRAM_READY_Pos)
#define CC_RNG_SRAM_SRAM_DATA_READY_SRAM_READY_Busy (0x0UL)
#define CC_RNG_SRAM_SRAM_DATA_READY_SRAM_READY_Idle (0x1UL)


/* Peripheral: CLOCK */
/* Description: Clock management 0 */

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

/* Register: CLOCK_TASKS_HFCLKAUDIOSTART */
/* Description: Start HFCLKAUDIO source */

/* Bit 0 : Start HFCLKAUDIO source */
#define CLOCK_TASKS_HFCLKAUDIOSTART_TASKS_HFCLKAUDIOSTART_Pos (0UL)
#define CLOCK_TASKS_HFCLKAUDIOSTART_TASKS_HFCLKAUDIOSTART_Msk (0x1UL << CLOCK_TASKS_HFCLKAUDIOSTART_TASKS_HFCLKAUDIOSTART_Pos)
#define CLOCK_TASKS_HFCLKAUDIOSTART_TASKS_HFCLKAUDIOSTART_Trigger (0x1UL)

/* Register: CLOCK_TASKS_HFCLKAUDIOSTOP */
/* Description: Stop HFCLKAUDIO source */

/* Bit 0 : Stop HFCLKAUDIO source */
#define CLOCK_TASKS_HFCLKAUDIOSTOP_TASKS_HFCLKAUDIOSTOP_Pos (0UL)
#define CLOCK_TASKS_HFCLKAUDIOSTOP_TASKS_HFCLKAUDIOSTOP_Msk (0x1UL << CLOCK_TASKS_HFCLKAUDIOSTOP_TASKS_HFCLKAUDIOSTOP_Pos)
#define CLOCK_TASKS_HFCLKAUDIOSTOP_TASKS_HFCLKAUDIOSTOP_Trigger (0x1UL)

/* Register: CLOCK_TASKS_HFCLK192MSTART */
/* Description: Start HFCLK192M source as selected in HFCLK192MSRC */

/* Bit 0 : Start HFCLK192M source as selected in HFCLK192MSRC */
#define CLOCK_TASKS_HFCLK192MSTART_TASKS_HFCLK192MSTART_Pos (0UL)
#define CLOCK_TASKS_HFCLK192MSTART_TASKS_HFCLK192MSTART_Msk (0x1UL << CLOCK_TASKS_HFCLK192MSTART_TASKS_HFCLK192MSTART_Pos)
#define CLOCK_TASKS_HFCLK192MSTART_TASKS_HFCLK192MSTART_Trigger (0x1UL)

/* Register: CLOCK_TASKS_HFCLK192MSTOP */
/* Description: Stop HFCLK192M source */

/* Bit 0 : Stop HFCLK192M source */
#define CLOCK_TASKS_HFCLK192MSTOP_TASKS_HFCLK192MSTOP_Pos (0UL)
#define CLOCK_TASKS_HFCLK192MSTOP_TASKS_HFCLK192MSTOP_Msk (0x1UL << CLOCK_TASKS_HFCLK192MSTOP_TASKS_HFCLK192MSTOP_Pos)
#define CLOCK_TASKS_HFCLK192MSTOP_TASKS_HFCLK192MSTOP_Trigger (0x1UL)

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

/* Register: CLOCK_SUBSCRIBE_HFCLKAUDIOSTART */
/* Description: Subscribe configuration for task HFCLKAUDIOSTART */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_HFCLKAUDIOSTART_EN_Pos (31UL)
#define CLOCK_SUBSCRIBE_HFCLKAUDIOSTART_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_HFCLKAUDIOSTART_EN_Pos)
#define CLOCK_SUBSCRIBE_HFCLKAUDIOSTART_EN_Disabled (0x0UL)
#define CLOCK_SUBSCRIBE_HFCLKAUDIOSTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task HFCLKAUDIOSTART will subscribe to */
#define CLOCK_SUBSCRIBE_HFCLKAUDIOSTART_CHIDX_Pos (0UL)
#define CLOCK_SUBSCRIBE_HFCLKAUDIOSTART_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_HFCLKAUDIOSTART_CHIDX_Pos)

/* Register: CLOCK_SUBSCRIBE_HFCLKAUDIOSTOP */
/* Description: Subscribe configuration for task HFCLKAUDIOSTOP */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_HFCLKAUDIOSTOP_EN_Pos (31UL)
#define CLOCK_SUBSCRIBE_HFCLKAUDIOSTOP_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_HFCLKAUDIOSTOP_EN_Pos)
#define CLOCK_SUBSCRIBE_HFCLKAUDIOSTOP_EN_Disabled (0x0UL)
#define CLOCK_SUBSCRIBE_HFCLKAUDIOSTOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task HFCLKAUDIOSTOP will subscribe to */
#define CLOCK_SUBSCRIBE_HFCLKAUDIOSTOP_CHIDX_Pos (0UL)
#define CLOCK_SUBSCRIBE_HFCLKAUDIOSTOP_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_HFCLKAUDIOSTOP_CHIDX_Pos)

/* Register: CLOCK_SUBSCRIBE_HFCLK192MSTART */
/* Description: Subscribe configuration for task HFCLK192MSTART */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_HFCLK192MSTART_EN_Pos (31UL)
#define CLOCK_SUBSCRIBE_HFCLK192MSTART_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_HFCLK192MSTART_EN_Pos)
#define CLOCK_SUBSCRIBE_HFCLK192MSTART_EN_Disabled (0x0UL)
#define CLOCK_SUBSCRIBE_HFCLK192MSTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task HFCLK192MSTART will subscribe to */
#define CLOCK_SUBSCRIBE_HFCLK192MSTART_CHIDX_Pos (0UL)
#define CLOCK_SUBSCRIBE_HFCLK192MSTART_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_HFCLK192MSTART_CHIDX_Pos)

/* Register: CLOCK_SUBSCRIBE_HFCLK192MSTOP */
/* Description: Subscribe configuration for task HFCLK192MSTOP */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_HFCLK192MSTOP_EN_Pos (31UL)
#define CLOCK_SUBSCRIBE_HFCLK192MSTOP_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_HFCLK192MSTOP_EN_Pos)
#define CLOCK_SUBSCRIBE_HFCLK192MSTOP_EN_Disabled (0x0UL)
#define CLOCK_SUBSCRIBE_HFCLK192MSTOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task HFCLK192MSTOP will subscribe to */
#define CLOCK_SUBSCRIBE_HFCLK192MSTOP_CHIDX_Pos (0UL)
#define CLOCK_SUBSCRIBE_HFCLK192MSTOP_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_HFCLK192MSTOP_CHIDX_Pos)

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

/* Register: CLOCK_EVENTS_HFCLKAUDIOSTARTED */
/* Description: HFCLKAUDIO source started */

/* Bit 0 : HFCLKAUDIO source started */
#define CLOCK_EVENTS_HFCLKAUDIOSTARTED_EVENTS_HFCLKAUDIOSTARTED_Pos (0UL)
#define CLOCK_EVENTS_HFCLKAUDIOSTARTED_EVENTS_HFCLKAUDIOSTARTED_Msk (0x1UL << CLOCK_EVENTS_HFCLKAUDIOSTARTED_EVENTS_HFCLKAUDIOSTARTED_Pos)
#define CLOCK_EVENTS_HFCLKAUDIOSTARTED_EVENTS_HFCLKAUDIOSTARTED_NotGenerated (0x0UL)
#define CLOCK_EVENTS_HFCLKAUDIOSTARTED_EVENTS_HFCLKAUDIOSTARTED_Generated (0x1UL)

/* Register: CLOCK_EVENTS_HFCLK192MSTARTED */
/* Description: HFCLK192M source started */

/* Bit 0 : HFCLK192M source started */
#define CLOCK_EVENTS_HFCLK192MSTARTED_EVENTS_HFCLK192MSTARTED_Pos (0UL)
#define CLOCK_EVENTS_HFCLK192MSTARTED_EVENTS_HFCLK192MSTARTED_Msk (0x1UL << CLOCK_EVENTS_HFCLK192MSTARTED_EVENTS_HFCLK192MSTARTED_Pos)
#define CLOCK_EVENTS_HFCLK192MSTARTED_EVENTS_HFCLK192MSTARTED_NotGenerated (0x0UL)
#define CLOCK_EVENTS_HFCLK192MSTARTED_EVENTS_HFCLK192MSTARTED_Generated (0x1UL)

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

/* Register: CLOCK_PUBLISH_HFCLKAUDIOSTARTED */
/* Description: Publish configuration for event HFCLKAUDIOSTARTED */

/* Bit 31 :   */
#define CLOCK_PUBLISH_HFCLKAUDIOSTARTED_EN_Pos (31UL)
#define CLOCK_PUBLISH_HFCLKAUDIOSTARTED_EN_Msk (0x1UL << CLOCK_PUBLISH_HFCLKAUDIOSTARTED_EN_Pos)
#define CLOCK_PUBLISH_HFCLKAUDIOSTARTED_EN_Disabled (0x0UL)
#define CLOCK_PUBLISH_HFCLKAUDIOSTARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event HFCLKAUDIOSTARTED will publish to */
#define CLOCK_PUBLISH_HFCLKAUDIOSTARTED_CHIDX_Pos (0UL)
#define CLOCK_PUBLISH_HFCLKAUDIOSTARTED_CHIDX_Msk (0xFFUL << CLOCK_PUBLISH_HFCLKAUDIOSTARTED_CHIDX_Pos)

/* Register: CLOCK_PUBLISH_HFCLK192MSTARTED */
/* Description: Publish configuration for event HFCLK192MSTARTED */

/* Bit 31 :   */
#define CLOCK_PUBLISH_HFCLK192MSTARTED_EN_Pos (31UL)
#define CLOCK_PUBLISH_HFCLK192MSTARTED_EN_Msk (0x1UL << CLOCK_PUBLISH_HFCLK192MSTARTED_EN_Pos)
#define CLOCK_PUBLISH_HFCLK192MSTARTED_EN_Disabled (0x0UL)
#define CLOCK_PUBLISH_HFCLK192MSTARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event HFCLK192MSTARTED will publish to */
#define CLOCK_PUBLISH_HFCLK192MSTARTED_CHIDX_Pos (0UL)
#define CLOCK_PUBLISH_HFCLK192MSTARTED_CHIDX_Msk (0xFFUL << CLOCK_PUBLISH_HFCLK192MSTARTED_CHIDX_Pos)

/* Register: CLOCK_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 9 : Enable or disable interrupt for event HFCLK192MSTARTED */
#define CLOCK_INTEN_HFCLK192MSTARTED_Pos (9UL)
#define CLOCK_INTEN_HFCLK192MSTARTED_Msk (0x1UL << CLOCK_INTEN_HFCLK192MSTARTED_Pos)
#define CLOCK_INTEN_HFCLK192MSTARTED_Disabled (0x0UL)
#define CLOCK_INTEN_HFCLK192MSTARTED_Enabled (0x1UL)

/* Bit 8 : Enable or disable interrupt for event HFCLKAUDIOSTARTED */
#define CLOCK_INTEN_HFCLKAUDIOSTARTED_Pos (8UL)
#define CLOCK_INTEN_HFCLKAUDIOSTARTED_Msk (0x1UL << CLOCK_INTEN_HFCLKAUDIOSTARTED_Pos)
#define CLOCK_INTEN_HFCLKAUDIOSTARTED_Disabled (0x0UL)
#define CLOCK_INTEN_HFCLKAUDIOSTARTED_Enabled (0x1UL)

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

/* Bit 9 : Write '1' to enable interrupt for event HFCLK192MSTARTED */
#define CLOCK_INTENSET_HFCLK192MSTARTED_Pos (9UL)
#define CLOCK_INTENSET_HFCLK192MSTARTED_Msk (0x1UL << CLOCK_INTENSET_HFCLK192MSTARTED_Pos)
#define CLOCK_INTENSET_HFCLK192MSTARTED_Disabled (0x0UL)
#define CLOCK_INTENSET_HFCLK192MSTARTED_Enabled (0x1UL)
#define CLOCK_INTENSET_HFCLK192MSTARTED_Set (0x1UL)

/* Bit 8 : Write '1' to enable interrupt for event HFCLKAUDIOSTARTED */
#define CLOCK_INTENSET_HFCLKAUDIOSTARTED_Pos (8UL)
#define CLOCK_INTENSET_HFCLKAUDIOSTARTED_Msk (0x1UL << CLOCK_INTENSET_HFCLKAUDIOSTARTED_Pos)
#define CLOCK_INTENSET_HFCLKAUDIOSTARTED_Disabled (0x0UL)
#define CLOCK_INTENSET_HFCLKAUDIOSTARTED_Enabled (0x1UL)
#define CLOCK_INTENSET_HFCLKAUDIOSTARTED_Set (0x1UL)

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

/* Bit 9 : Write '1' to disable interrupt for event HFCLK192MSTARTED */
#define CLOCK_INTENCLR_HFCLK192MSTARTED_Pos (9UL)
#define CLOCK_INTENCLR_HFCLK192MSTARTED_Msk (0x1UL << CLOCK_INTENCLR_HFCLK192MSTARTED_Pos)
#define CLOCK_INTENCLR_HFCLK192MSTARTED_Disabled (0x0UL)
#define CLOCK_INTENCLR_HFCLK192MSTARTED_Enabled (0x1UL)
#define CLOCK_INTENCLR_HFCLK192MSTARTED_Clear (0x1UL)

/* Bit 8 : Write '1' to disable interrupt for event HFCLKAUDIOSTARTED */
#define CLOCK_INTENCLR_HFCLKAUDIOSTARTED_Pos (8UL)
#define CLOCK_INTENCLR_HFCLKAUDIOSTARTED_Msk (0x1UL << CLOCK_INTENCLR_HFCLKAUDIOSTARTED_Pos)
#define CLOCK_INTENCLR_HFCLKAUDIOSTARTED_Disabled (0x0UL)
#define CLOCK_INTENCLR_HFCLKAUDIOSTARTED_Enabled (0x1UL)
#define CLOCK_INTENCLR_HFCLKAUDIOSTARTED_Clear (0x1UL)

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

/* Bit 9 : Read pending status of interrupt for event HFCLK192MSTARTED */
#define CLOCK_INTPEND_HFCLK192MSTARTED_Pos (9UL)
#define CLOCK_INTPEND_HFCLK192MSTARTED_Msk (0x1UL << CLOCK_INTPEND_HFCLK192MSTARTED_Pos)
#define CLOCK_INTPEND_HFCLK192MSTARTED_NotPending (0x0UL)
#define CLOCK_INTPEND_HFCLK192MSTARTED_Pending (0x1UL)

/* Bit 8 : Read pending status of interrupt for event HFCLKAUDIOSTARTED */
#define CLOCK_INTPEND_HFCLKAUDIOSTARTED_Pos (8UL)
#define CLOCK_INTPEND_HFCLKAUDIOSTARTED_Msk (0x1UL << CLOCK_INTPEND_HFCLKAUDIOSTARTED_Pos)
#define CLOCK_INTPEND_HFCLKAUDIOSTARTED_NotPending (0x0UL)
#define CLOCK_INTPEND_HFCLKAUDIOSTARTED_Pending (0x1UL)

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

/* Register: CLOCK_HFCLKAUDIORUN */
/* Description: Status indicating that HFCLKAUDIOSTART task has been triggered */

/* Bit 0 : HFCLKAUDIOSTART task triggered or not */
#define CLOCK_HFCLKAUDIORUN_STATUS_Pos (0UL)
#define CLOCK_HFCLKAUDIORUN_STATUS_Msk (0x1UL << CLOCK_HFCLKAUDIORUN_STATUS_Pos)
#define CLOCK_HFCLKAUDIORUN_STATUS_NotTriggered (0x0UL)
#define CLOCK_HFCLKAUDIORUN_STATUS_Triggered (0x1UL)

/* Register: CLOCK_HFCLKAUDIOSTAT */
/* Description: Status indicating which HFCLKAUDIO source is running */

/* Bit 16 : HFCLKAUDIO state */
#define CLOCK_HFCLKAUDIOSTAT_STATE_Pos (16UL)
#define CLOCK_HFCLKAUDIOSTAT_STATE_Msk (0x1UL << CLOCK_HFCLKAUDIOSTAT_STATE_Pos)
#define CLOCK_HFCLKAUDIOSTAT_STATE_NotRunning (0x0UL)
#define CLOCK_HFCLKAUDIOSTAT_STATE_Running (0x1UL)

/* Bit 4 : ALWAYSRUN activated */
#define CLOCK_HFCLKAUDIOSTAT_ALWAYSRUNNING_Pos (4UL)
#define CLOCK_HFCLKAUDIOSTAT_ALWAYSRUNNING_Msk (0x1UL << CLOCK_HFCLKAUDIOSTAT_ALWAYSRUNNING_Pos)
#define CLOCK_HFCLKAUDIOSTAT_ALWAYSRUNNING_NotRunning (0x0UL)
#define CLOCK_HFCLKAUDIOSTAT_ALWAYSRUNNING_Running (0x1UL)

/* Register: CLOCK_HFCLK192MRUN */
/* Description: Status indicating that HFCLK192MSTART task has been triggered */

/* Bit 0 : HFCLK192MSTART task triggered or not */
#define CLOCK_HFCLK192MRUN_STATUS_Pos (0UL)
#define CLOCK_HFCLK192MRUN_STATUS_Msk (0x1UL << CLOCK_HFCLK192MRUN_STATUS_Pos)
#define CLOCK_HFCLK192MRUN_STATUS_NotTriggered (0x0UL)
#define CLOCK_HFCLK192MRUN_STATUS_Triggered (0x1UL)

/* Register: CLOCK_HFCLK192MSTAT */
/* Description: Status indicating which HFCLK192M source is running */

/* Bit 16 : HFCLK192M state */
#define CLOCK_HFCLK192MSTAT_STATE_Pos (16UL)
#define CLOCK_HFCLK192MSTAT_STATE_Msk (0x1UL << CLOCK_HFCLK192MSTAT_STATE_Pos)
#define CLOCK_HFCLK192MSTAT_STATE_NotRunning (0x0UL)
#define CLOCK_HFCLK192MSTAT_STATE_Running (0x1UL)

/* Bit 4 : ALWAYSRUN activated */
#define CLOCK_HFCLK192MSTAT_ALWAYSRUNNING_Pos (4UL)
#define CLOCK_HFCLK192MSTAT_ALWAYSRUNNING_Msk (0x1UL << CLOCK_HFCLK192MSTAT_ALWAYSRUNNING_Pos)
#define CLOCK_HFCLK192MSTAT_ALWAYSRUNNING_NotRunning (0x0UL)
#define CLOCK_HFCLK192MSTAT_ALWAYSRUNNING_Running (0x1UL)

/* Bit 0 : Active clock source */
#define CLOCK_HFCLK192MSTAT_SRC_Pos (0UL)
#define CLOCK_HFCLK192MSTAT_SRC_Msk (0x1UL << CLOCK_HFCLK192MSTAT_SRC_Pos)
#define CLOCK_HFCLK192MSTAT_SRC_HFINT (0x0UL)
#define CLOCK_HFCLK192MSTAT_SRC_HFXO (0x1UL)

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

/* Register: CLOCK_HFCLKAUDIO_FREQUENCY */
/* Description: Audio PLL frequency in 11.176 MHz - 11.402 MHz or 12.165 MHz - 12.411 MHz frequency bands */

/* Bits 15..0 : Frequency 0: 10.666 MHz 65535: 13.333 MHz */
#define CLOCK_HFCLKAUDIO_FREQUENCY_FREQUENCY_Pos (0UL)
#define CLOCK_HFCLKAUDIO_FREQUENCY_FREQUENCY_Msk (0xFFFFUL << CLOCK_HFCLKAUDIO_FREQUENCY_FREQUENCY_Pos)

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

/* Register: CLOCK_HFCLKAUDIOALWAYSRUN */
/* Description: Automatic or manual control of HFCLKAUDIO */

/* Bit 0 : Ensure clock is always running */
#define CLOCK_HFCLKAUDIOALWAYSRUN_ALWAYSRUN_Pos (0UL)
#define CLOCK_HFCLKAUDIOALWAYSRUN_ALWAYSRUN_Msk (0x1UL << CLOCK_HFCLKAUDIOALWAYSRUN_ALWAYSRUN_Pos)
#define CLOCK_HFCLKAUDIOALWAYSRUN_ALWAYSRUN_Automatic (0x0UL)
#define CLOCK_HFCLKAUDIOALWAYSRUN_ALWAYSRUN_AlwaysRun (0x1UL)

/* Register: CLOCK_HFCLK192MSRC */
/* Description: Clock source for HFCLK192M */

/* Bit 0 : Select which HFCLK192M source is started by the HFCLK192MSTART task */
#define CLOCK_HFCLK192MSRC_SRC_Pos (0UL)
#define CLOCK_HFCLK192MSRC_SRC_Msk (0x1UL << CLOCK_HFCLK192MSRC_SRC_Pos)
#define CLOCK_HFCLK192MSRC_SRC_HFINT (0x0UL)
#define CLOCK_HFCLK192MSRC_SRC_HFXO (0x1UL)

/* Register: CLOCK_HFCLK192MALWAYSRUN */
/* Description: Automatic or manual control of HFCLK192M */

/* Bit 0 : Ensure clock is always running */
#define CLOCK_HFCLK192MALWAYSRUN_ALWAYSRUN_Pos (0UL)
#define CLOCK_HFCLK192MALWAYSRUN_ALWAYSRUN_Msk (0x1UL << CLOCK_HFCLK192MALWAYSRUN_ALWAYSRUN_Pos)
#define CLOCK_HFCLK192MALWAYSRUN_ALWAYSRUN_Automatic (0x0UL)
#define CLOCK_HFCLK192MALWAYSRUN_ALWAYSRUN_AlwaysRun (0x1UL)

/* Register: CLOCK_HFCLK192MCTRL */
/* Description: HFCLK192M frequency configuration */

/* Bits 1..0 : High frequency clock HCLK192M */
#define CLOCK_HFCLK192MCTRL_HCLK192M_Pos (0UL)
#define CLOCK_HFCLK192MCTRL_HCLK192M_Msk (0x3UL << CLOCK_HFCLK192MCTRL_HCLK192M_Pos)
#define CLOCK_HFCLK192MCTRL_HCLK192M_Div1 (0x0UL)
#define CLOCK_HFCLK192MCTRL_HCLK192M_Div2 (0x1UL)
#define CLOCK_HFCLK192MCTRL_HCLK192M_Div4 (0x2UL)


/* Peripheral: COMP */
/* Description: Comparator 0 */

/* Register: COMP_TASKS_START */
/* Description: Start comparator */

/* Bit 0 : Start comparator */
#define COMP_TASKS_START_TASKS_START_Pos (0UL)
#define COMP_TASKS_START_TASKS_START_Msk (0x1UL << COMP_TASKS_START_TASKS_START_Pos)
#define COMP_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: COMP_TASKS_STOP */
/* Description: Stop comparator */

/* Bit 0 : Stop comparator */
#define COMP_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define COMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << COMP_TASKS_STOP_TASKS_STOP_Pos)
#define COMP_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: COMP_TASKS_SAMPLE */
/* Description: Sample comparator value */

/* Bit 0 : Sample comparator value */
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL)
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << COMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos)
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Trigger (0x1UL)

/* Register: COMP_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define COMP_SUBSCRIBE_START_EN_Pos (31UL)
#define COMP_SUBSCRIBE_START_EN_Msk (0x1UL << COMP_SUBSCRIBE_START_EN_Pos)
#define COMP_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define COMP_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define COMP_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define COMP_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << COMP_SUBSCRIBE_START_CHIDX_Pos)

/* Register: COMP_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define COMP_SUBSCRIBE_STOP_EN_Pos (31UL)
#define COMP_SUBSCRIBE_STOP_EN_Msk (0x1UL << COMP_SUBSCRIBE_STOP_EN_Pos)
#define COMP_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define COMP_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define COMP_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define COMP_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << COMP_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: COMP_SUBSCRIBE_SAMPLE */
/* Description: Subscribe configuration for task SAMPLE */

/* Bit 31 :   */
#define COMP_SUBSCRIBE_SAMPLE_EN_Pos (31UL)
#define COMP_SUBSCRIBE_SAMPLE_EN_Msk (0x1UL << COMP_SUBSCRIBE_SAMPLE_EN_Pos)
#define COMP_SUBSCRIBE_SAMPLE_EN_Disabled (0x0UL)
#define COMP_SUBSCRIBE_SAMPLE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task SAMPLE will subscribe to */
#define COMP_SUBSCRIBE_SAMPLE_CHIDX_Pos (0UL)
#define COMP_SUBSCRIBE_SAMPLE_CHIDX_Msk (0xFFUL << COMP_SUBSCRIBE_SAMPLE_CHIDX_Pos)

/* Register: COMP_EVENTS_READY */
/* Description: COMP is ready and output is valid */

/* Bit 0 : COMP is ready and output is valid */
#define COMP_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define COMP_EVENTS_READY_EVENTS_READY_Msk (0x1UL << COMP_EVENTS_READY_EVENTS_READY_Pos)
#define COMP_EVENTS_READY_EVENTS_READY_NotGenerated (0x0UL)
#define COMP_EVENTS_READY_EVENTS_READY_Generated (0x1UL)

/* Register: COMP_EVENTS_DOWN */
/* Description: Downward crossing */

/* Bit 0 : Downward crossing */
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Pos (0UL)
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Msk (0x1UL << COMP_EVENTS_DOWN_EVENTS_DOWN_Pos)
#define COMP_EVENTS_DOWN_EVENTS_DOWN_NotGenerated (0x0UL)
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Generated (0x1UL)

/* Register: COMP_EVENTS_UP */
/* Description: Upward crossing */

/* Bit 0 : Upward crossing */
#define COMP_EVENTS_UP_EVENTS_UP_Pos (0UL)
#define COMP_EVENTS_UP_EVENTS_UP_Msk (0x1UL << COMP_EVENTS_UP_EVENTS_UP_Pos)
#define COMP_EVENTS_UP_EVENTS_UP_NotGenerated (0x0UL)
#define COMP_EVENTS_UP_EVENTS_UP_Generated (0x1UL)

/* Register: COMP_EVENTS_CROSS */
/* Description: Downward or upward crossing */

/* Bit 0 : Downward or upward crossing */
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Pos (0UL)
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Msk (0x1UL << COMP_EVENTS_CROSS_EVENTS_CROSS_Pos)
#define COMP_EVENTS_CROSS_EVENTS_CROSS_NotGenerated (0x0UL)
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Generated (0x1UL)

/* Register: COMP_PUBLISH_READY */
/* Description: Publish configuration for event READY */

/* Bit 31 :   */
#define COMP_PUBLISH_READY_EN_Pos (31UL)
#define COMP_PUBLISH_READY_EN_Msk (0x1UL << COMP_PUBLISH_READY_EN_Pos)
#define COMP_PUBLISH_READY_EN_Disabled (0x0UL)
#define COMP_PUBLISH_READY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event READY will publish to */
#define COMP_PUBLISH_READY_CHIDX_Pos (0UL)
#define COMP_PUBLISH_READY_CHIDX_Msk (0xFFUL << COMP_PUBLISH_READY_CHIDX_Pos)

/* Register: COMP_PUBLISH_DOWN */
/* Description: Publish configuration for event DOWN */

/* Bit 31 :   */
#define COMP_PUBLISH_DOWN_EN_Pos (31UL)
#define COMP_PUBLISH_DOWN_EN_Msk (0x1UL << COMP_PUBLISH_DOWN_EN_Pos)
#define COMP_PUBLISH_DOWN_EN_Disabled (0x0UL)
#define COMP_PUBLISH_DOWN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event DOWN will publish to */
#define COMP_PUBLISH_DOWN_CHIDX_Pos (0UL)
#define COMP_PUBLISH_DOWN_CHIDX_Msk (0xFFUL << COMP_PUBLISH_DOWN_CHIDX_Pos)

/* Register: COMP_PUBLISH_UP */
/* Description: Publish configuration for event UP */

/* Bit 31 :   */
#define COMP_PUBLISH_UP_EN_Pos (31UL)
#define COMP_PUBLISH_UP_EN_Msk (0x1UL << COMP_PUBLISH_UP_EN_Pos)
#define COMP_PUBLISH_UP_EN_Disabled (0x0UL)
#define COMP_PUBLISH_UP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event UP will publish to */
#define COMP_PUBLISH_UP_CHIDX_Pos (0UL)
#define COMP_PUBLISH_UP_CHIDX_Msk (0xFFUL << COMP_PUBLISH_UP_CHIDX_Pos)

/* Register: COMP_PUBLISH_CROSS */
/* Description: Publish configuration for event CROSS */

/* Bit 31 :   */
#define COMP_PUBLISH_CROSS_EN_Pos (31UL)
#define COMP_PUBLISH_CROSS_EN_Msk (0x1UL << COMP_PUBLISH_CROSS_EN_Pos)
#define COMP_PUBLISH_CROSS_EN_Disabled (0x0UL)
#define COMP_PUBLISH_CROSS_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event CROSS will publish to */
#define COMP_PUBLISH_CROSS_CHIDX_Pos (0UL)
#define COMP_PUBLISH_CROSS_CHIDX_Msk (0xFFUL << COMP_PUBLISH_CROSS_CHIDX_Pos)

/* Register: COMP_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 4 : Shortcut between event CROSS and task STOP */
#define COMP_SHORTS_CROSS_STOP_Pos (4UL)
#define COMP_SHORTS_CROSS_STOP_Msk (0x1UL << COMP_SHORTS_CROSS_STOP_Pos)
#define COMP_SHORTS_CROSS_STOP_Disabled (0x0UL)
#define COMP_SHORTS_CROSS_STOP_Enabled (0x1UL)

/* Bit 3 : Shortcut between event UP and task STOP */
#define COMP_SHORTS_UP_STOP_Pos (3UL)
#define COMP_SHORTS_UP_STOP_Msk (0x1UL << COMP_SHORTS_UP_STOP_Pos)
#define COMP_SHORTS_UP_STOP_Disabled (0x0UL)
#define COMP_SHORTS_UP_STOP_Enabled (0x1UL)

/* Bit 2 : Shortcut between event DOWN and task STOP */
#define COMP_SHORTS_DOWN_STOP_Pos (2UL)
#define COMP_SHORTS_DOWN_STOP_Msk (0x1UL << COMP_SHORTS_DOWN_STOP_Pos)
#define COMP_SHORTS_DOWN_STOP_Disabled (0x0UL)
#define COMP_SHORTS_DOWN_STOP_Enabled (0x1UL)

/* Bit 1 : Shortcut between event READY and task STOP */
#define COMP_SHORTS_READY_STOP_Pos (1UL)
#define COMP_SHORTS_READY_STOP_Msk (0x1UL << COMP_SHORTS_READY_STOP_Pos)
#define COMP_SHORTS_READY_STOP_Disabled (0x0UL)
#define COMP_SHORTS_READY_STOP_Enabled (0x1UL)

/* Bit 0 : Shortcut between event READY and task SAMPLE */
#define COMP_SHORTS_READY_SAMPLE_Pos (0UL)
#define COMP_SHORTS_READY_SAMPLE_Msk (0x1UL << COMP_SHORTS_READY_SAMPLE_Pos)
#define COMP_SHORTS_READY_SAMPLE_Disabled (0x0UL)
#define COMP_SHORTS_READY_SAMPLE_Enabled (0x1UL)

/* Register: COMP_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 3 : Enable or disable interrupt for event CROSS */
#define COMP_INTEN_CROSS_Pos (3UL)
#define COMP_INTEN_CROSS_Msk (0x1UL << COMP_INTEN_CROSS_Pos)
#define COMP_INTEN_CROSS_Disabled (0x0UL)
#define COMP_INTEN_CROSS_Enabled (0x1UL)

/* Bit 2 : Enable or disable interrupt for event UP */
#define COMP_INTEN_UP_Pos (2UL)
#define COMP_INTEN_UP_Msk (0x1UL << COMP_INTEN_UP_Pos)
#define COMP_INTEN_UP_Disabled (0x0UL)
#define COMP_INTEN_UP_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event DOWN */
#define COMP_INTEN_DOWN_Pos (1UL)
#define COMP_INTEN_DOWN_Msk (0x1UL << COMP_INTEN_DOWN_Pos)
#define COMP_INTEN_DOWN_Disabled (0x0UL)
#define COMP_INTEN_DOWN_Enabled (0x1UL)

/* Bit 0 : Enable or disable interrupt for event READY */
#define COMP_INTEN_READY_Pos (0UL)
#define COMP_INTEN_READY_Msk (0x1UL << COMP_INTEN_READY_Pos)
#define COMP_INTEN_READY_Disabled (0x0UL)
#define COMP_INTEN_READY_Enabled (0x1UL)

/* Register: COMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 3 : Write '1' to enable interrupt for event CROSS */
#define COMP_INTENSET_CROSS_Pos (3UL)
#define COMP_INTENSET_CROSS_Msk (0x1UL << COMP_INTENSET_CROSS_Pos)
#define COMP_INTENSET_CROSS_Disabled (0x0UL)
#define COMP_INTENSET_CROSS_Enabled (0x1UL)
#define COMP_INTENSET_CROSS_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event UP */
#define COMP_INTENSET_UP_Pos (2UL)
#define COMP_INTENSET_UP_Msk (0x1UL << COMP_INTENSET_UP_Pos)
#define COMP_INTENSET_UP_Disabled (0x0UL)
#define COMP_INTENSET_UP_Enabled (0x1UL)
#define COMP_INTENSET_UP_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event DOWN */
#define COMP_INTENSET_DOWN_Pos (1UL)
#define COMP_INTENSET_DOWN_Msk (0x1UL << COMP_INTENSET_DOWN_Pos)
#define COMP_INTENSET_DOWN_Disabled (0x0UL)
#define COMP_INTENSET_DOWN_Enabled (0x1UL)
#define COMP_INTENSET_DOWN_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define COMP_INTENSET_READY_Pos (0UL)
#define COMP_INTENSET_READY_Msk (0x1UL << COMP_INTENSET_READY_Pos)
#define COMP_INTENSET_READY_Disabled (0x0UL)
#define COMP_INTENSET_READY_Enabled (0x1UL)
#define COMP_INTENSET_READY_Set (0x1UL)

/* Register: COMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 3 : Write '1' to disable interrupt for event CROSS */
#define COMP_INTENCLR_CROSS_Pos (3UL)
#define COMP_INTENCLR_CROSS_Msk (0x1UL << COMP_INTENCLR_CROSS_Pos)
#define COMP_INTENCLR_CROSS_Disabled (0x0UL)
#define COMP_INTENCLR_CROSS_Enabled (0x1UL)
#define COMP_INTENCLR_CROSS_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event UP */
#define COMP_INTENCLR_UP_Pos (2UL)
#define COMP_INTENCLR_UP_Msk (0x1UL << COMP_INTENCLR_UP_Pos)
#define COMP_INTENCLR_UP_Disabled (0x0UL)
#define COMP_INTENCLR_UP_Enabled (0x1UL)
#define COMP_INTENCLR_UP_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event DOWN */
#define COMP_INTENCLR_DOWN_Pos (1UL)
#define COMP_INTENCLR_DOWN_Msk (0x1UL << COMP_INTENCLR_DOWN_Pos)
#define COMP_INTENCLR_DOWN_Disabled (0x0UL)
#define COMP_INTENCLR_DOWN_Enabled (0x1UL)
#define COMP_INTENCLR_DOWN_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event READY */
#define COMP_INTENCLR_READY_Pos (0UL)
#define COMP_INTENCLR_READY_Msk (0x1UL << COMP_INTENCLR_READY_Pos)
#define COMP_INTENCLR_READY_Disabled (0x0UL)
#define COMP_INTENCLR_READY_Enabled (0x1UL)
#define COMP_INTENCLR_READY_Clear (0x1UL)

/* Register: COMP_RESULT */
/* Description: Compare result */

/* Bit 0 : Result of last compare. Decision point SAMPLE task. */
#define COMP_RESULT_RESULT_Pos (0UL)
#define COMP_RESULT_RESULT_Msk (0x1UL << COMP_RESULT_RESULT_Pos)
#define COMP_RESULT_RESULT_Below (0x0UL)
#define COMP_RESULT_RESULT_Above (0x1UL)

/* Register: COMP_ENABLE */
/* Description: COMP enable */

/* Bits 1..0 : Enable or disable COMP */
#define COMP_ENABLE_ENABLE_Pos (0UL)
#define COMP_ENABLE_ENABLE_Msk (0x3UL << COMP_ENABLE_ENABLE_Pos)
#define COMP_ENABLE_ENABLE_Disabled (0x0UL)
#define COMP_ENABLE_ENABLE_Enabled (0x2UL)

/* Register: COMP_PSEL */
/* Description: Pin select */

/* Bits 2..0 : Analog pin select */
#define COMP_PSEL_PSEL_Pos (0UL)
#define COMP_PSEL_PSEL_Msk (0x7UL << COMP_PSEL_PSEL_Pos)
#define COMP_PSEL_PSEL_AnalogInput0 (0x0UL)
#define COMP_PSEL_PSEL_AnalogInput1 (0x1UL)
#define COMP_PSEL_PSEL_AnalogInput2 (0x2UL)
#define COMP_PSEL_PSEL_AnalogInput3 (0x3UL)
#define COMP_PSEL_PSEL_AnalogInput4 (0x4UL)
#define COMP_PSEL_PSEL_AnalogInput5 (0x5UL)
#define COMP_PSEL_PSEL_AnalogInput6 (0x6UL)
#define COMP_PSEL_PSEL_AnalogInput7 (0x7UL)

/* Register: COMP_REFSEL */
/* Description: Reference source select for single-ended mode */

/* Bits 2..0 : Reference select */
#define COMP_REFSEL_REFSEL_Pos (0UL)
#define COMP_REFSEL_REFSEL_Msk (0x7UL << COMP_REFSEL_REFSEL_Pos)
#define COMP_REFSEL_REFSEL_Int1V2 (0x0UL)
#define COMP_REFSEL_REFSEL_Int1V8 (0x1UL)
#define COMP_REFSEL_REFSEL_Int2V4 (0x2UL)
#define COMP_REFSEL_REFSEL_VDD (0x4UL)
#define COMP_REFSEL_REFSEL_ARef (0x5UL)

/* Register: COMP_EXTREFSEL */
/* Description: External reference select */

/* Bits 2..0 : External analog reference select */
#define COMP_EXTREFSEL_EXTREFSEL_Pos (0UL)
#define COMP_EXTREFSEL_EXTREFSEL_Msk (0x7UL << COMP_EXTREFSEL_EXTREFSEL_Pos)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference0 (0x0UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference1 (0x1UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference2 (0x2UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference3 (0x3UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference4 (0x4UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference5 (0x5UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference6 (0x6UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference7 (0x7UL)

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
#define COMP_MODE_MAIN_SE (0x0UL)
#define COMP_MODE_MAIN_Diff (0x1UL)

/* Bits 1..0 : Speed and power modes */
#define COMP_MODE_SP_Pos (0UL)
#define COMP_MODE_SP_Msk (0x3UL << COMP_MODE_SP_Pos)
#define COMP_MODE_SP_Low (0x0UL)
#define COMP_MODE_SP_Normal (0x1UL)
#define COMP_MODE_SP_High (0x2UL)

/* Register: COMP_HYST */
/* Description: Comparator hysteresis enable */

/* Bit 0 : Comparator hysteresis */
#define COMP_HYST_HYST_Pos (0UL)
#define COMP_HYST_HYST_Msk (0x1UL << COMP_HYST_HYST_Pos)
#define COMP_HYST_HYST_NoHyst (0x0UL)
#define COMP_HYST_HYST_Hyst50mV (0x1UL)

/* Register: COMP_ISOURCE */
/* Description: Current source select on analog input */

/* Bits 1..0 : Comparator hysteresis */
#define COMP_ISOURCE_ISOURCE_Pos (0UL)
#define COMP_ISOURCE_ISOURCE_Msk (0x3UL << COMP_ISOURCE_ISOURCE_Pos)
#define COMP_ISOURCE_ISOURCE_Off (0x0UL)
#define COMP_ISOURCE_ISOURCE_Ien2mA5 (0x1UL)
#define COMP_ISOURCE_ISOURCE_Ien5mA (0x2UL)
#define COMP_ISOURCE_ISOURCE_Ien10mA (0x3UL)


/* Peripheral: CRYPTOCELL */
/* Description: CRYPTOCELL register interface */

/* Register: CRYPTOCELL_ENABLE */
/* Description: Enable CRYPTOCELL subsystem. */

/* Bit 0 : Enable or disable the CRYPTOCELL subsystem. */
#define CRYPTOCELL_ENABLE_ENABLE_Pos (0UL)
#define CRYPTOCELL_ENABLE_ENABLE_Msk (0x1UL << CRYPTOCELL_ENABLE_ENABLE_Pos)
#define CRYPTOCELL_ENABLE_ENABLE_Disabled (0x0UL)
#define CRYPTOCELL_ENABLE_ENABLE_Enabled (0x1UL)


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
/* Description: Control access port 0 */

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

/* Register: CTRLAPPERI_SECUREAPPROTECT_LOCK */
/* Description: This register locks the SECUREAPPROTECT.DISABLE register from being written until next reset. */

/* Bit 0 : Lock register SECUREAPPROTECT.DISABLE from being written until next reset */
#define CTRLAPPERI_SECUREAPPROTECT_LOCK_LOCK_Pos (0UL)
#define CTRLAPPERI_SECUREAPPROTECT_LOCK_LOCK_Msk (0x1UL << CTRLAPPERI_SECUREAPPROTECT_LOCK_LOCK_Pos)
#define CTRLAPPERI_SECUREAPPROTECT_LOCK_LOCK_Unlocked (0x0UL)
#define CTRLAPPERI_SECUREAPPROTECT_LOCK_LOCK_Locked (0x1UL)

/* Register: CTRLAPPERI_SECUREAPPROTECT_DISABLE */
/* Description: This register disables the SECUREAPPROTECT register and enables debug access to secure mode. */

/* Bits 31..0 : If the value of the KEY field is non-zero, and the KEY fields match on both the
        CPU and debugger sides, disable SECUREAPPROTECT and enable debug access to secure mode until
        the next pin reset, brown-out reset, power-on reset, or watchog timer reset. After reset the debugger side register has a fixed KEY value. To enable debug access, both CTRL-AP and UICR.SECUREAPPROTECT protection needs to be disabled. */
#define CTRLAPPERI_SECUREAPPROTECT_DISABLE_KEY_Pos (0UL)
#define CTRLAPPERI_SECUREAPPROTECT_DISABLE_KEY_Msk (0xFFFFFFFFUL << CTRLAPPERI_SECUREAPPROTECT_DISABLE_KEY_Pos)

/* Register: CTRLAPPERI_STATUS */
/* Description: Status bits for CTRL-AP peripheral. */

/* Bit 2 : Status bit for device debug interface mode */
#define CTRLAPPERI_STATUS_DBGIFACEMODE_Pos (2UL)
#define CTRLAPPERI_STATUS_DBGIFACEMODE_Msk (0x1UL << CTRLAPPERI_STATUS_DBGIFACEMODE_Pos)
#define CTRLAPPERI_STATUS_DBGIFACEMODE_Disabled (0x0UL)
#define CTRLAPPERI_STATUS_DBGIFACEMODE_Enabled (0x1UL)

/* Bit 1 : Status bit for UICR part of secure access port protection at last reset. */
#define CTRLAPPERI_STATUS_UICRSECUREAPPROTECT_Pos (1UL)
#define CTRLAPPERI_STATUS_UICRSECUREAPPROTECT_Msk (0x1UL << CTRLAPPERI_STATUS_UICRSECUREAPPROTECT_Pos)
#define CTRLAPPERI_STATUS_UICRSECUREAPPROTECT_Enabled (0x0UL)
#define CTRLAPPERI_STATUS_UICRSECUREAPPROTECT_Disabled (0x1UL)

/* Bit 0 : Status bit for UICR part of access port protection at last reset. */
#define CTRLAPPERI_STATUS_UICRAPPROTECT_Pos (0UL)
#define CTRLAPPERI_STATUS_UICRAPPROTECT_Msk (0x1UL << CTRLAPPERI_STATUS_UICRAPPROTECT_Pos)
#define CTRLAPPERI_STATUS_UICRAPPROTECT_Enabled (0x0UL)
#define CTRLAPPERI_STATUS_UICRAPPROTECT_Disabled (0x1UL)


/* Peripheral: DCNF */
/* Description: Domain configuration management 0 */

/* Register: DCNF_CPUID */
/* Description: CPU ID of this subsystem */

/* Bits 7..0 : CPU ID */
#define DCNF_CPUID_CPUID_Pos (0UL)
#define DCNF_CPUID_CPUID_Msk (0xFFUL << DCNF_CPUID_CPUID_Pos)

/* Register: DCNF_EXTPERI_PROTECT */
/* Description: Description cluster: Control access for master connected to AMLI master port EXTPERI[n] */

/* Bit 0 : Control access to slave 0 of master EXTPERI[n] */
#define DCNF_EXTPERI_PROTECT_SLAVE0_Pos (0UL)
#define DCNF_EXTPERI_PROTECT_SLAVE0_Msk (0x1UL << DCNF_EXTPERI_PROTECT_SLAVE0_Pos)
#define DCNF_EXTPERI_PROTECT_SLAVE0_Allowed (0x0UL)
#define DCNF_EXTPERI_PROTECT_SLAVE0_Blocked (0x1UL)

/* Register: DCNF_EXTRAM_PROTECT */
/* Description: Description cluster: Control access from master connected to AMLI master port EXTRAM[n] */

/* Bit 7 : Control access to slave 7 of master EXTRAM[n] */
#define DCNF_EXTRAM_PROTECT_SLAVE7_Pos (7UL)
#define DCNF_EXTRAM_PROTECT_SLAVE7_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE7_Pos)
#define DCNF_EXTRAM_PROTECT_SLAVE7_Allowed (0x0UL)
#define DCNF_EXTRAM_PROTECT_SLAVE7_Blocked (0x1UL)

/* Bit 6 : Control access to slave 6 of master EXTRAM[n] */
#define DCNF_EXTRAM_PROTECT_SLAVE6_Pos (6UL)
#define DCNF_EXTRAM_PROTECT_SLAVE6_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE6_Pos)
#define DCNF_EXTRAM_PROTECT_SLAVE6_Allowed (0x0UL)
#define DCNF_EXTRAM_PROTECT_SLAVE6_Blocked (0x1UL)

/* Bit 5 : Control access to slave 5 of master EXTRAM[n] */
#define DCNF_EXTRAM_PROTECT_SLAVE5_Pos (5UL)
#define DCNF_EXTRAM_PROTECT_SLAVE5_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE5_Pos)
#define DCNF_EXTRAM_PROTECT_SLAVE5_Allowed (0x0UL)
#define DCNF_EXTRAM_PROTECT_SLAVE5_Blocked (0x1UL)

/* Bit 4 : Control access to slave 4 of master EXTRAM[n] */
#define DCNF_EXTRAM_PROTECT_SLAVE4_Pos (4UL)
#define DCNF_EXTRAM_PROTECT_SLAVE4_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE4_Pos)
#define DCNF_EXTRAM_PROTECT_SLAVE4_Allowed (0x0UL)
#define DCNF_EXTRAM_PROTECT_SLAVE4_Blocked (0x1UL)

/* Bit 3 : Control access to slave 3 of master EXTRAM[n] */
#define DCNF_EXTRAM_PROTECT_SLAVE3_Pos (3UL)
#define DCNF_EXTRAM_PROTECT_SLAVE3_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE3_Pos)
#define DCNF_EXTRAM_PROTECT_SLAVE3_Allowed (0x0UL)
#define DCNF_EXTRAM_PROTECT_SLAVE3_Blocked (0x1UL)

/* Bit 2 : Control access to slave 2 of master EXTRAM[n] */
#define DCNF_EXTRAM_PROTECT_SLAVE2_Pos (2UL)
#define DCNF_EXTRAM_PROTECT_SLAVE2_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE2_Pos)
#define DCNF_EXTRAM_PROTECT_SLAVE2_Allowed (0x0UL)
#define DCNF_EXTRAM_PROTECT_SLAVE2_Blocked (0x1UL)

/* Bit 1 : Control access to slave 1 of master EXTRAM[n] */
#define DCNF_EXTRAM_PROTECT_SLAVE1_Pos (1UL)
#define DCNF_EXTRAM_PROTECT_SLAVE1_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE1_Pos)
#define DCNF_EXTRAM_PROTECT_SLAVE1_Allowed (0x0UL)
#define DCNF_EXTRAM_PROTECT_SLAVE1_Blocked (0x1UL)

/* Bit 0 : Control access to slave 0 of master EXTRAM[n] */
#define DCNF_EXTRAM_PROTECT_SLAVE0_Pos (0UL)
#define DCNF_EXTRAM_PROTECT_SLAVE0_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE0_Pos)
#define DCNF_EXTRAM_PROTECT_SLAVE0_Allowed (0x0UL)
#define DCNF_EXTRAM_PROTECT_SLAVE0_Blocked (0x1UL)

/* Register: DCNF_EXTCODE_PROTECT */
/* Description: Description cluster: Control access from master connected to AMLI master port EXTCODE[n] */

/* Bit 0 : Control access to slave 0 of master EXTCODE[n] */
#define DCNF_EXTCODE_PROTECT_SLAVE0_Pos (0UL)
#define DCNF_EXTCODE_PROTECT_SLAVE0_Msk (0x1UL << DCNF_EXTCODE_PROTECT_SLAVE0_Pos)
#define DCNF_EXTCODE_PROTECT_SLAVE0_Allowed (0x0UL)
#define DCNF_EXTCODE_PROTECT_SLAVE0_Blocked (0x1UL)


/* Peripheral: DPPIC */
/* Description: Distributed programmable peripheral interconnect controller 0 */

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


/* Peripheral: EGU */
/* Description: Event generator unit 0 */

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
#define FICR_INFO_CODEPAGESIZE_CODEPAGESIZE_K4096 (0x00001000UL)

/* Register: FICR_INFO_CODESIZE */
/* Description: Code memory size */

/* Bits 31..0 : Code memory size in number of pages */
#define FICR_INFO_CODESIZE_CODESIZE_Pos (0UL)
#define FICR_INFO_CODESIZE_CODESIZE_Msk (0xFFFFFFFFUL << FICR_INFO_CODESIZE_CODESIZE_Pos)
#define FICR_INFO_CODESIZE_CODESIZE_P256 (0x00000100UL)

/* Register: FICR_INFO_DEVICETYPE */
/* Description: Device type */

/* Bits 31..0 : Device type */
#define FICR_INFO_DEVICETYPE_DEVICETYPE_Pos (0UL)
#define FICR_INFO_DEVICETYPE_DEVICETYPE_Msk (0xFFFFFFFFUL << FICR_INFO_DEVICETYPE_DEVICETYPE_Pos)
#define FICR_INFO_DEVICETYPE_DEVICETYPE_Die (0x00000000UL)
#define FICR_INFO_DEVICETYPE_DEVICETYPE_FPGA (0xFFFFFFFFUL)

/* Register: FICR_TRIMCNF_ADDR */
/* Description: Description cluster: Address of the PAR register which will be written */

/* Bits 31..0 : Address */
#define FICR_TRIMCNF_ADDR_Address_Pos (0UL)
#define FICR_TRIMCNF_ADDR_Address_Msk (0xFFFFFFFFUL << FICR_TRIMCNF_ADDR_Address_Pos)

/* Register: FICR_TRIMCNF_DATA */
/* Description: Description cluster: Data */

/* Bits 31..0 : Data to be written into the PAR register */
#define FICR_TRIMCNF_DATA_Data_Pos (0UL)
#define FICR_TRIMCNF_DATA_Data_Msk (0xFFFFFFFFUL << FICR_TRIMCNF_DATA_Data_Pos)

/* Register: FICR_NFC_TAGHEADER0 */
/* Description: Default header for NFC Tag. Software can read these values to populate NFCID1_3RD_LAST, NFCID1_2ND_LAST and NFCID1_LAST. */

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
/* Description: Default header for NFC Tag. Software can read these values to populate NFCID1_3RD_LAST, NFCID1_2ND_LAST and NFCID1_LAST. */

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
/* Description: Default header for NFC Tag. Software can read these values to populate NFCID1_3RD_LAST, NFCID1_2ND_LAST and NFCID1_LAST. */

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
/* Description: Default header for NFC Tag. Software can read these values to populate NFCID1_3RD_LAST, NFCID1_2ND_LAST and NFCID1_LAST. */

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

/* Register: FICR_TRNG90B_BYTES */
/* Description: Amount of bytes for the required entropy bits */

/* Bits 31..0 : Amount of bytes for the required entropy bits */
#define FICR_TRNG90B_BYTES_BYTES_Pos (0UL)
#define FICR_TRNG90B_BYTES_BYTES_Msk (0xFFFFFFFFUL << FICR_TRNG90B_BYTES_BYTES_Pos)

/* Register: FICR_TRNG90B_RCCUTOFF */
/* Description: Repetition counter cutoff */

/* Bits 31..0 : Repetition counter cutoff */
#define FICR_TRNG90B_RCCUTOFF_RCCUTOFF_Pos (0UL)
#define FICR_TRNG90B_RCCUTOFF_RCCUTOFF_Msk (0xFFFFFFFFUL << FICR_TRNG90B_RCCUTOFF_RCCUTOFF_Pos)

/* Register: FICR_TRNG90B_APCUTOFF */
/* Description: Adaptive proportion cutoff */

/* Bits 31..0 : Adaptive proportion cutoff */
#define FICR_TRNG90B_APCUTOFF_APCUTOFF_Pos (0UL)
#define FICR_TRNG90B_APCUTOFF_APCUTOFF_Msk (0xFFFFFFFFUL << FICR_TRNG90B_APCUTOFF_APCUTOFF_Pos)

/* Register: FICR_TRNG90B_STARTUP */
/* Description: Amount of bytes for the startup tests */

/* Bits 31..0 : Amount of bytes for the startup tests */
#define FICR_TRNG90B_STARTUP_STARTUP_Pos (0UL)
#define FICR_TRNG90B_STARTUP_STARTUP_Msk (0xFFFFFFFFUL << FICR_TRNG90B_STARTUP_STARTUP_Pos)

/* Register: FICR_TRNG90B_ROSC1 */
/* Description: Sample count for ring oscillator 1 */

/* Bits 31..0 : Sample count for ring oscillator 1 */
#define FICR_TRNG90B_ROSC1_ROSC1_Pos (0UL)
#define FICR_TRNG90B_ROSC1_ROSC1_Msk (0xFFFFFFFFUL << FICR_TRNG90B_ROSC1_ROSC1_Pos)

/* Register: FICR_TRNG90B_ROSC2 */
/* Description: Sample count for ring oscillator 2 */

/* Bits 31..0 : Sample count for ring oscillator 2 */
#define FICR_TRNG90B_ROSC2_ROSC2_Pos (0UL)
#define FICR_TRNG90B_ROSC2_ROSC2_Msk (0xFFFFFFFFUL << FICR_TRNG90B_ROSC2_ROSC2_Pos)

/* Register: FICR_TRNG90B_ROSC3 */
/* Description: Sample count for ring oscillator 3 */

/* Bits 31..0 : Sample count for ring oscillator 3 */
#define FICR_TRNG90B_ROSC3_ROSC3_Pos (0UL)
#define FICR_TRNG90B_ROSC3_ROSC3_Msk (0xFFFFFFFFUL << FICR_TRNG90B_ROSC3_ROSC3_Pos)

/* Register: FICR_TRNG90B_ROSC4 */
/* Description: Sample count for ring oscillator 4 */

/* Bits 31..0 : Sample count for ring oscillator 4 */
#define FICR_TRNG90B_ROSC4_ROSC4_Pos (0UL)
#define FICR_TRNG90B_ROSC4_ROSC4_Msk (0xFFFFFFFFUL << FICR_TRNG90B_ROSC4_ROSC4_Pos)

/* Register: FICR_XOSC32MTRIM */
/* Description: XOSC32M capacitor selection trim values */

/* Bits 9..5 : Offset trim factor on integer form */
#define FICR_XOSC32MTRIM_OFFSET_Pos (5UL)
#define FICR_XOSC32MTRIM_OFFSET_Msk (0x1FUL << FICR_XOSC32MTRIM_OFFSET_Pos)

/* Bits 4..0 : Slope trim factor on twos complement form */
#define FICR_XOSC32MTRIM_SLOPE_Pos (0UL)
#define FICR_XOSC32MTRIM_SLOPE_Msk (0x1FUL << FICR_XOSC32MTRIM_SLOPE_Pos)


/* Peripheral: FPU */
/* Description: FPU control peripheral 0 */

/* Register: FPU_EVENTS_INVALIDOPERATION */
/* Description: An FPUIOC exception triggered by an invalid operation has occurred in the FPU */

/* Bit 0 : An FPUIOC exception triggered by an invalid operation has occurred in the FPU */
#define FPU_EVENTS_INVALIDOPERATION_EVENTS_INVALIDOPERATION_Pos (0UL)
#define FPU_EVENTS_INVALIDOPERATION_EVENTS_INVALIDOPERATION_Msk (0x1UL << FPU_EVENTS_INVALIDOPERATION_EVENTS_INVALIDOPERATION_Pos)
#define FPU_EVENTS_INVALIDOPERATION_EVENTS_INVALIDOPERATION_NotGenerated (0x0UL)
#define FPU_EVENTS_INVALIDOPERATION_EVENTS_INVALIDOPERATION_Generated (0x1UL)

/* Register: FPU_EVENTS_DIVIDEBYZERO */
/* Description: An FPUDZC exception triggered by a floating-point divide-by-zero operation has occurred in the FPU */

/* Bit 0 : An FPUDZC exception triggered by a floating-point divide-by-zero operation has occurred in the FPU */
#define FPU_EVENTS_DIVIDEBYZERO_EVENTS_DIVIDEBYZERO_Pos (0UL)
#define FPU_EVENTS_DIVIDEBYZERO_EVENTS_DIVIDEBYZERO_Msk (0x1UL << FPU_EVENTS_DIVIDEBYZERO_EVENTS_DIVIDEBYZERO_Pos)
#define FPU_EVENTS_DIVIDEBYZERO_EVENTS_DIVIDEBYZERO_NotGenerated (0x0UL)
#define FPU_EVENTS_DIVIDEBYZERO_EVENTS_DIVIDEBYZERO_Generated (0x1UL)

/* Register: FPU_EVENTS_OVERFLOW */
/* Description: An FPUOFC exception triggered by a floating-point overflow has occurred in the FPU */

/* Bit 0 : An FPUOFC exception triggered by a floating-point overflow has occurred in the FPU */
#define FPU_EVENTS_OVERFLOW_EVENTS_OVERFLOW_Pos (0UL)
#define FPU_EVENTS_OVERFLOW_EVENTS_OVERFLOW_Msk (0x1UL << FPU_EVENTS_OVERFLOW_EVENTS_OVERFLOW_Pos)
#define FPU_EVENTS_OVERFLOW_EVENTS_OVERFLOW_NotGenerated (0x0UL)
#define FPU_EVENTS_OVERFLOW_EVENTS_OVERFLOW_Generated (0x1UL)

/* Register: FPU_EVENTS_UNDERFLOW */
/* Description: An FPUUFC exception triggered by a floating-point underflow has occurred in the FPU */

/* Bit 0 : An FPUUFC exception triggered by a floating-point underflow has occurred in the FPU */
#define FPU_EVENTS_UNDERFLOW_EVENTS_UNDERFLOW_Pos (0UL)
#define FPU_EVENTS_UNDERFLOW_EVENTS_UNDERFLOW_Msk (0x1UL << FPU_EVENTS_UNDERFLOW_EVENTS_UNDERFLOW_Pos)
#define FPU_EVENTS_UNDERFLOW_EVENTS_UNDERFLOW_NotGenerated (0x0UL)
#define FPU_EVENTS_UNDERFLOW_EVENTS_UNDERFLOW_Generated (0x1UL)

/* Register: FPU_EVENTS_INEXACT */
/* Description: An FPUIXC exception triggered by an inexact floating-point operation has occurred in the FPU */

/* Bit 0 : An FPUIXC exception triggered by an inexact floating-point operation has occurred in the FPU */
#define FPU_EVENTS_INEXACT_EVENTS_INEXACT_Pos (0UL)
#define FPU_EVENTS_INEXACT_EVENTS_INEXACT_Msk (0x1UL << FPU_EVENTS_INEXACT_EVENTS_INEXACT_Pos)
#define FPU_EVENTS_INEXACT_EVENTS_INEXACT_NotGenerated (0x0UL)
#define FPU_EVENTS_INEXACT_EVENTS_INEXACT_Generated (0x1UL)

/* Register: FPU_EVENTS_DENORMALINPUT */
/* Description: An FPUIDC exception triggered by a denormal floating-point input has occurred in the FPU */

/* Bit 0 : An FPUIDC exception triggered by a denormal floating-point input has occurred in the FPU */
#define FPU_EVENTS_DENORMALINPUT_EVENTS_DENORMALINPUT_Pos (0UL)
#define FPU_EVENTS_DENORMALINPUT_EVENTS_DENORMALINPUT_Msk (0x1UL << FPU_EVENTS_DENORMALINPUT_EVENTS_DENORMALINPUT_Pos)
#define FPU_EVENTS_DENORMALINPUT_EVENTS_DENORMALINPUT_NotGenerated (0x0UL)
#define FPU_EVENTS_DENORMALINPUT_EVENTS_DENORMALINPUT_Generated (0x1UL)

/* Register: FPU_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 5 : Enable or disable interrupt for event DENORMALINPUT */
#define FPU_INTEN_DENORMALINPUT_Pos (5UL)
#define FPU_INTEN_DENORMALINPUT_Msk (0x1UL << FPU_INTEN_DENORMALINPUT_Pos)
#define FPU_INTEN_DENORMALINPUT_Disabled (0x0UL)
#define FPU_INTEN_DENORMALINPUT_Enabled (0x1UL)

/* Bit 4 : Enable or disable interrupt for event INEXACT */
#define FPU_INTEN_INEXACT_Pos (4UL)
#define FPU_INTEN_INEXACT_Msk (0x1UL << FPU_INTEN_INEXACT_Pos)
#define FPU_INTEN_INEXACT_Disabled (0x0UL)
#define FPU_INTEN_INEXACT_Enabled (0x1UL)

/* Bit 3 : Enable or disable interrupt for event UNDERFLOW */
#define FPU_INTEN_UNDERFLOW_Pos (3UL)
#define FPU_INTEN_UNDERFLOW_Msk (0x1UL << FPU_INTEN_UNDERFLOW_Pos)
#define FPU_INTEN_UNDERFLOW_Disabled (0x0UL)
#define FPU_INTEN_UNDERFLOW_Enabled (0x1UL)

/* Bit 2 : Enable or disable interrupt for event OVERFLOW */
#define FPU_INTEN_OVERFLOW_Pos (2UL)
#define FPU_INTEN_OVERFLOW_Msk (0x1UL << FPU_INTEN_OVERFLOW_Pos)
#define FPU_INTEN_OVERFLOW_Disabled (0x0UL)
#define FPU_INTEN_OVERFLOW_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event DIVIDEBYZERO */
#define FPU_INTEN_DIVIDEBYZERO_Pos (1UL)
#define FPU_INTEN_DIVIDEBYZERO_Msk (0x1UL << FPU_INTEN_DIVIDEBYZERO_Pos)
#define FPU_INTEN_DIVIDEBYZERO_Disabled (0x0UL)
#define FPU_INTEN_DIVIDEBYZERO_Enabled (0x1UL)

/* Bit 0 : Enable or disable interrupt for event INVALIDOPERATION */
#define FPU_INTEN_INVALIDOPERATION_Pos (0UL)
#define FPU_INTEN_INVALIDOPERATION_Msk (0x1UL << FPU_INTEN_INVALIDOPERATION_Pos)
#define FPU_INTEN_INVALIDOPERATION_Disabled (0x0UL)
#define FPU_INTEN_INVALIDOPERATION_Enabled (0x1UL)

/* Register: FPU_INTENSET */
/* Description: Enable interrupt */

/* Bit 5 : Write '1' to enable interrupt for event DENORMALINPUT */
#define FPU_INTENSET_DENORMALINPUT_Pos (5UL)
#define FPU_INTENSET_DENORMALINPUT_Msk (0x1UL << FPU_INTENSET_DENORMALINPUT_Pos)
#define FPU_INTENSET_DENORMALINPUT_Disabled (0x0UL)
#define FPU_INTENSET_DENORMALINPUT_Enabled (0x1UL)
#define FPU_INTENSET_DENORMALINPUT_Set (0x1UL)

/* Bit 4 : Write '1' to enable interrupt for event INEXACT */
#define FPU_INTENSET_INEXACT_Pos (4UL)
#define FPU_INTENSET_INEXACT_Msk (0x1UL << FPU_INTENSET_INEXACT_Pos)
#define FPU_INTENSET_INEXACT_Disabled (0x0UL)
#define FPU_INTENSET_INEXACT_Enabled (0x1UL)
#define FPU_INTENSET_INEXACT_Set (0x1UL)

/* Bit 3 : Write '1' to enable interrupt for event UNDERFLOW */
#define FPU_INTENSET_UNDERFLOW_Pos (3UL)
#define FPU_INTENSET_UNDERFLOW_Msk (0x1UL << FPU_INTENSET_UNDERFLOW_Pos)
#define FPU_INTENSET_UNDERFLOW_Disabled (0x0UL)
#define FPU_INTENSET_UNDERFLOW_Enabled (0x1UL)
#define FPU_INTENSET_UNDERFLOW_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event OVERFLOW */
#define FPU_INTENSET_OVERFLOW_Pos (2UL)
#define FPU_INTENSET_OVERFLOW_Msk (0x1UL << FPU_INTENSET_OVERFLOW_Pos)
#define FPU_INTENSET_OVERFLOW_Disabled (0x0UL)
#define FPU_INTENSET_OVERFLOW_Enabled (0x1UL)
#define FPU_INTENSET_OVERFLOW_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event DIVIDEBYZERO */
#define FPU_INTENSET_DIVIDEBYZERO_Pos (1UL)
#define FPU_INTENSET_DIVIDEBYZERO_Msk (0x1UL << FPU_INTENSET_DIVIDEBYZERO_Pos)
#define FPU_INTENSET_DIVIDEBYZERO_Disabled (0x0UL)
#define FPU_INTENSET_DIVIDEBYZERO_Enabled (0x1UL)
#define FPU_INTENSET_DIVIDEBYZERO_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event INVALIDOPERATION */
#define FPU_INTENSET_INVALIDOPERATION_Pos (0UL)
#define FPU_INTENSET_INVALIDOPERATION_Msk (0x1UL << FPU_INTENSET_INVALIDOPERATION_Pos)
#define FPU_INTENSET_INVALIDOPERATION_Disabled (0x0UL)
#define FPU_INTENSET_INVALIDOPERATION_Enabled (0x1UL)
#define FPU_INTENSET_INVALIDOPERATION_Set (0x1UL)

/* Register: FPU_INTENCLR */
/* Description: Disable interrupt */

/* Bit 5 : Write '1' to disable interrupt for event DENORMALINPUT */
#define FPU_INTENCLR_DENORMALINPUT_Pos (5UL)
#define FPU_INTENCLR_DENORMALINPUT_Msk (0x1UL << FPU_INTENCLR_DENORMALINPUT_Pos)
#define FPU_INTENCLR_DENORMALINPUT_Disabled (0x0UL)
#define FPU_INTENCLR_DENORMALINPUT_Enabled (0x1UL)
#define FPU_INTENCLR_DENORMALINPUT_Clear (0x1UL)

/* Bit 4 : Write '1' to disable interrupt for event INEXACT */
#define FPU_INTENCLR_INEXACT_Pos (4UL)
#define FPU_INTENCLR_INEXACT_Msk (0x1UL << FPU_INTENCLR_INEXACT_Pos)
#define FPU_INTENCLR_INEXACT_Disabled (0x0UL)
#define FPU_INTENCLR_INEXACT_Enabled (0x1UL)
#define FPU_INTENCLR_INEXACT_Clear (0x1UL)

/* Bit 3 : Write '1' to disable interrupt for event UNDERFLOW */
#define FPU_INTENCLR_UNDERFLOW_Pos (3UL)
#define FPU_INTENCLR_UNDERFLOW_Msk (0x1UL << FPU_INTENCLR_UNDERFLOW_Pos)
#define FPU_INTENCLR_UNDERFLOW_Disabled (0x0UL)
#define FPU_INTENCLR_UNDERFLOW_Enabled (0x1UL)
#define FPU_INTENCLR_UNDERFLOW_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event OVERFLOW */
#define FPU_INTENCLR_OVERFLOW_Pos (2UL)
#define FPU_INTENCLR_OVERFLOW_Msk (0x1UL << FPU_INTENCLR_OVERFLOW_Pos)
#define FPU_INTENCLR_OVERFLOW_Disabled (0x0UL)
#define FPU_INTENCLR_OVERFLOW_Enabled (0x1UL)
#define FPU_INTENCLR_OVERFLOW_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event DIVIDEBYZERO */
#define FPU_INTENCLR_DIVIDEBYZERO_Pos (1UL)
#define FPU_INTENCLR_DIVIDEBYZERO_Msk (0x1UL << FPU_INTENCLR_DIVIDEBYZERO_Pos)
#define FPU_INTENCLR_DIVIDEBYZERO_Disabled (0x0UL)
#define FPU_INTENCLR_DIVIDEBYZERO_Enabled (0x1UL)
#define FPU_INTENCLR_DIVIDEBYZERO_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event INVALIDOPERATION */
#define FPU_INTENCLR_INVALIDOPERATION_Pos (0UL)
#define FPU_INTENCLR_INVALIDOPERATION_Msk (0x1UL << FPU_INTENCLR_INVALIDOPERATION_Pos)
#define FPU_INTENCLR_INVALIDOPERATION_Disabled (0x0UL)
#define FPU_INTENCLR_INVALIDOPERATION_Enabled (0x1UL)
#define FPU_INTENCLR_INVALIDOPERATION_Clear (0x1UL)


/* Peripheral: GPIOTE */
/* Description: GPIO Tasks and Events 0 */

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


/* Peripheral: I2S */
/* Description: Inter-IC Sound 0 */

/* Register: I2S_TASKS_START */
/* Description: Starts continuous I2S transfer. Also starts MCK generator when this is enabled */

/* Bit 0 : Starts continuous I2S transfer. Also starts MCK generator when this is enabled */
#define I2S_TASKS_START_TASKS_START_Pos (0UL)
#define I2S_TASKS_START_TASKS_START_Msk (0x1UL << I2S_TASKS_START_TASKS_START_Pos)
#define I2S_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: I2S_TASKS_STOP */
/* Description: Stops I2S transfer and MCK generator. Triggering this task will cause the event STOPPED to be generated. */

/* Bit 0 : Stops I2S transfer and MCK generator. Triggering this task will cause the event STOPPED to be generated. */
#define I2S_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define I2S_TASKS_STOP_TASKS_STOP_Msk (0x1UL << I2S_TASKS_STOP_TASKS_STOP_Pos)
#define I2S_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: I2S_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define I2S_SUBSCRIBE_START_EN_Pos (31UL)
#define I2S_SUBSCRIBE_START_EN_Msk (0x1UL << I2S_SUBSCRIBE_START_EN_Pos)
#define I2S_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define I2S_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define I2S_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define I2S_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << I2S_SUBSCRIBE_START_CHIDX_Pos)

/* Register: I2S_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define I2S_SUBSCRIBE_STOP_EN_Pos (31UL)
#define I2S_SUBSCRIBE_STOP_EN_Msk (0x1UL << I2S_SUBSCRIBE_STOP_EN_Pos)
#define I2S_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define I2S_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define I2S_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define I2S_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << I2S_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: I2S_EVENTS_RXPTRUPD */
/* Description: The RXD.PTR register has been copied to internal double-buffers.
      When the I2S module is started and RX is enabled, this event will be generated for every RXTXD.MAXCNT words received on the SDIN pin. */

/* Bit 0 : The RXD.PTR register has been copied to internal double-buffers.
      When the I2S module is started and RX is enabled, this event will be generated for every RXTXD.MAXCNT words received on the SDIN pin. */
#define I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_Pos (0UL)
#define I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_Msk (0x1UL << I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_Pos)
#define I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_NotGenerated (0x0UL)
#define I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_Generated (0x1UL)

/* Register: I2S_EVENTS_STOPPED */
/* Description: I2S transfer stopped. */

/* Bit 0 : I2S transfer stopped. */
#define I2S_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define I2S_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << I2S_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define I2S_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0x0UL)
#define I2S_EVENTS_STOPPED_EVENTS_STOPPED_Generated (0x1UL)

/* Register: I2S_EVENTS_TXPTRUPD */
/* Description: The TDX.PTR register has been copied to internal double-buffers.
      When the I2S module is started and TX is enabled, this event will be generated for every RXTXD.MAXCNT words that are sent on the SDOUT pin. */

/* Bit 0 : The TDX.PTR register has been copied to internal double-buffers.
      When the I2S module is started and TX is enabled, this event will be generated for every RXTXD.MAXCNT words that are sent on the SDOUT pin. */
#define I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_Pos (0UL)
#define I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_Msk (0x1UL << I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_Pos)
#define I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_NotGenerated (0x0UL)
#define I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_Generated (0x1UL)

/* Register: I2S_EVENTS_FRAMESTART */
/* Description: Frame start event, generated on the active edge of LRCK */

/* Bit 0 : Frame start event, generated on the active edge of LRCK */
#define I2S_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Pos (0UL)
#define I2S_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Msk (0x1UL << I2S_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Pos)
#define I2S_EVENTS_FRAMESTART_EVENTS_FRAMESTART_NotGenerated (0x0UL)
#define I2S_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Generated (0x1UL)

/* Register: I2S_PUBLISH_RXPTRUPD */
/* Description: Publish configuration for event RXPTRUPD */

/* Bit 31 :   */
#define I2S_PUBLISH_RXPTRUPD_EN_Pos (31UL)
#define I2S_PUBLISH_RXPTRUPD_EN_Msk (0x1UL << I2S_PUBLISH_RXPTRUPD_EN_Pos)
#define I2S_PUBLISH_RXPTRUPD_EN_Disabled (0x0UL)
#define I2S_PUBLISH_RXPTRUPD_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RXPTRUPD will publish to */
#define I2S_PUBLISH_RXPTRUPD_CHIDX_Pos (0UL)
#define I2S_PUBLISH_RXPTRUPD_CHIDX_Msk (0xFFUL << I2S_PUBLISH_RXPTRUPD_CHIDX_Pos)

/* Register: I2S_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define I2S_PUBLISH_STOPPED_EN_Pos (31UL)
#define I2S_PUBLISH_STOPPED_EN_Msk (0x1UL << I2S_PUBLISH_STOPPED_EN_Pos)
#define I2S_PUBLISH_STOPPED_EN_Disabled (0x0UL)
#define I2S_PUBLISH_STOPPED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STOPPED will publish to */
#define I2S_PUBLISH_STOPPED_CHIDX_Pos (0UL)
#define I2S_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << I2S_PUBLISH_STOPPED_CHIDX_Pos)

/* Register: I2S_PUBLISH_TXPTRUPD */
/* Description: Publish configuration for event TXPTRUPD */

/* Bit 31 :   */
#define I2S_PUBLISH_TXPTRUPD_EN_Pos (31UL)
#define I2S_PUBLISH_TXPTRUPD_EN_Msk (0x1UL << I2S_PUBLISH_TXPTRUPD_EN_Pos)
#define I2S_PUBLISH_TXPTRUPD_EN_Disabled (0x0UL)
#define I2S_PUBLISH_TXPTRUPD_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event TXPTRUPD will publish to */
#define I2S_PUBLISH_TXPTRUPD_CHIDX_Pos (0UL)
#define I2S_PUBLISH_TXPTRUPD_CHIDX_Msk (0xFFUL << I2S_PUBLISH_TXPTRUPD_CHIDX_Pos)

/* Register: I2S_PUBLISH_FRAMESTART */
/* Description: Publish configuration for event FRAMESTART */

/* Bit 31 :   */
#define I2S_PUBLISH_FRAMESTART_EN_Pos (31UL)
#define I2S_PUBLISH_FRAMESTART_EN_Msk (0x1UL << I2S_PUBLISH_FRAMESTART_EN_Pos)
#define I2S_PUBLISH_FRAMESTART_EN_Disabled (0x0UL)
#define I2S_PUBLISH_FRAMESTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event FRAMESTART will publish to */
#define I2S_PUBLISH_FRAMESTART_CHIDX_Pos (0UL)
#define I2S_PUBLISH_FRAMESTART_CHIDX_Msk (0xFFUL << I2S_PUBLISH_FRAMESTART_CHIDX_Pos)

/* Register: I2S_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 7 : Enable or disable interrupt for event FRAMESTART */
#define I2S_INTEN_FRAMESTART_Pos (7UL)
#define I2S_INTEN_FRAMESTART_Msk (0x1UL << I2S_INTEN_FRAMESTART_Pos)
#define I2S_INTEN_FRAMESTART_Disabled (0x0UL)
#define I2S_INTEN_FRAMESTART_Enabled (0x1UL)

/* Bit 5 : Enable or disable interrupt for event TXPTRUPD */
#define I2S_INTEN_TXPTRUPD_Pos (5UL)
#define I2S_INTEN_TXPTRUPD_Msk (0x1UL << I2S_INTEN_TXPTRUPD_Pos)
#define I2S_INTEN_TXPTRUPD_Disabled (0x0UL)
#define I2S_INTEN_TXPTRUPD_Enabled (0x1UL)

/* Bit 2 : Enable or disable interrupt for event STOPPED */
#define I2S_INTEN_STOPPED_Pos (2UL)
#define I2S_INTEN_STOPPED_Msk (0x1UL << I2S_INTEN_STOPPED_Pos)
#define I2S_INTEN_STOPPED_Disabled (0x0UL)
#define I2S_INTEN_STOPPED_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event RXPTRUPD */
#define I2S_INTEN_RXPTRUPD_Pos (1UL)
#define I2S_INTEN_RXPTRUPD_Msk (0x1UL << I2S_INTEN_RXPTRUPD_Pos)
#define I2S_INTEN_RXPTRUPD_Disabled (0x0UL)
#define I2S_INTEN_RXPTRUPD_Enabled (0x1UL)

/* Register: I2S_INTENSET */
/* Description: Enable interrupt */

/* Bit 7 : Write '1' to enable interrupt for event FRAMESTART */
#define I2S_INTENSET_FRAMESTART_Pos (7UL)
#define I2S_INTENSET_FRAMESTART_Msk (0x1UL << I2S_INTENSET_FRAMESTART_Pos)
#define I2S_INTENSET_FRAMESTART_Disabled (0x0UL)
#define I2S_INTENSET_FRAMESTART_Enabled (0x1UL)
#define I2S_INTENSET_FRAMESTART_Set (0x1UL)

/* Bit 5 : Write '1' to enable interrupt for event TXPTRUPD */
#define I2S_INTENSET_TXPTRUPD_Pos (5UL)
#define I2S_INTENSET_TXPTRUPD_Msk (0x1UL << I2S_INTENSET_TXPTRUPD_Pos)
#define I2S_INTENSET_TXPTRUPD_Disabled (0x0UL)
#define I2S_INTENSET_TXPTRUPD_Enabled (0x1UL)
#define I2S_INTENSET_TXPTRUPD_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event STOPPED */
#define I2S_INTENSET_STOPPED_Pos (2UL)
#define I2S_INTENSET_STOPPED_Msk (0x1UL << I2S_INTENSET_STOPPED_Pos)
#define I2S_INTENSET_STOPPED_Disabled (0x0UL)
#define I2S_INTENSET_STOPPED_Enabled (0x1UL)
#define I2S_INTENSET_STOPPED_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event RXPTRUPD */
#define I2S_INTENSET_RXPTRUPD_Pos (1UL)
#define I2S_INTENSET_RXPTRUPD_Msk (0x1UL << I2S_INTENSET_RXPTRUPD_Pos)
#define I2S_INTENSET_RXPTRUPD_Disabled (0x0UL)
#define I2S_INTENSET_RXPTRUPD_Enabled (0x1UL)
#define I2S_INTENSET_RXPTRUPD_Set (0x1UL)

/* Register: I2S_INTENCLR */
/* Description: Disable interrupt */

/* Bit 7 : Write '1' to disable interrupt for event FRAMESTART */
#define I2S_INTENCLR_FRAMESTART_Pos (7UL)
#define I2S_INTENCLR_FRAMESTART_Msk (0x1UL << I2S_INTENCLR_FRAMESTART_Pos)
#define I2S_INTENCLR_FRAMESTART_Disabled (0x0UL)
#define I2S_INTENCLR_FRAMESTART_Enabled (0x1UL)
#define I2S_INTENCLR_FRAMESTART_Clear (0x1UL)

/* Bit 5 : Write '1' to disable interrupt for event TXPTRUPD */
#define I2S_INTENCLR_TXPTRUPD_Pos (5UL)
#define I2S_INTENCLR_TXPTRUPD_Msk (0x1UL << I2S_INTENCLR_TXPTRUPD_Pos)
#define I2S_INTENCLR_TXPTRUPD_Disabled (0x0UL)
#define I2S_INTENCLR_TXPTRUPD_Enabled (0x1UL)
#define I2S_INTENCLR_TXPTRUPD_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event STOPPED */
#define I2S_INTENCLR_STOPPED_Pos (2UL)
#define I2S_INTENCLR_STOPPED_Msk (0x1UL << I2S_INTENCLR_STOPPED_Pos)
#define I2S_INTENCLR_STOPPED_Disabled (0x0UL)
#define I2S_INTENCLR_STOPPED_Enabled (0x1UL)
#define I2S_INTENCLR_STOPPED_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event RXPTRUPD */
#define I2S_INTENCLR_RXPTRUPD_Pos (1UL)
#define I2S_INTENCLR_RXPTRUPD_Msk (0x1UL << I2S_INTENCLR_RXPTRUPD_Pos)
#define I2S_INTENCLR_RXPTRUPD_Disabled (0x0UL)
#define I2S_INTENCLR_RXPTRUPD_Enabled (0x1UL)
#define I2S_INTENCLR_RXPTRUPD_Clear (0x1UL)

/* Register: I2S_ENABLE */
/* Description: Enable I2S module */

/* Bit 0 : Enable I2S module */
#define I2S_ENABLE_ENABLE_Pos (0UL)
#define I2S_ENABLE_ENABLE_Msk (0x1UL << I2S_ENABLE_ENABLE_Pos)
#define I2S_ENABLE_ENABLE_Disabled (0x0UL)
#define I2S_ENABLE_ENABLE_Enabled (0x1UL)

/* Register: I2S_CONFIG_MODE */
/* Description: I2S mode */

/* Bit 0 : I2S mode */
#define I2S_CONFIG_MODE_MODE_Pos (0UL)
#define I2S_CONFIG_MODE_MODE_Msk (0x1UL << I2S_CONFIG_MODE_MODE_Pos)
#define I2S_CONFIG_MODE_MODE_Master (0x0UL)
#define I2S_CONFIG_MODE_MODE_Slave (0x1UL)

/* Register: I2S_CONFIG_RXEN */
/* Description: Reception (RX) enable */

/* Bit 0 : Reception (RX) enable */
#define I2S_CONFIG_RXEN_RXEN_Pos (0UL)
#define I2S_CONFIG_RXEN_RXEN_Msk (0x1UL << I2S_CONFIG_RXEN_RXEN_Pos)
#define I2S_CONFIG_RXEN_RXEN_Disabled (0x0UL)
#define I2S_CONFIG_RXEN_RXEN_Enabled (0x1UL)

/* Register: I2S_CONFIG_TXEN */
/* Description: Transmission (TX) enable */

/* Bit 0 : Transmission (TX) enable */
#define I2S_CONFIG_TXEN_TXEN_Pos (0UL)
#define I2S_CONFIG_TXEN_TXEN_Msk (0x1UL << I2S_CONFIG_TXEN_TXEN_Pos)
#define I2S_CONFIG_TXEN_TXEN_Disabled (0x0UL)
#define I2S_CONFIG_TXEN_TXEN_Enabled (0x1UL)

/* Register: I2S_CONFIG_MCKEN */
/* Description: Master clock generator enable */

/* Bit 0 : Master clock generator enable */
#define I2S_CONFIG_MCKEN_MCKEN_Pos (0UL)
#define I2S_CONFIG_MCKEN_MCKEN_Msk (0x1UL << I2S_CONFIG_MCKEN_MCKEN_Pos)
#define I2S_CONFIG_MCKEN_MCKEN_Disabled (0x0UL)
#define I2S_CONFIG_MCKEN_MCKEN_Enabled (0x1UL)

/* Register: I2S_CONFIG_MCKFREQ */
/* Description: I2S clock generator control */

/* Bits 31..0 : I2S MCK frequency configuration NOTE: Enumerations are deprecated, use MCKFREQ equation. NOTE: The 12 least significant bits of the register are ignored and shall be set to zero. */
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
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV6 (0x28000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV5 (0x30000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV4 (0x40000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV3 (0x50000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV2 (0x80000000UL)

/* Register: I2S_CONFIG_RATIO */
/* Description: MCK / LRCK ratio */

/* Bits 3..0 : MCK / LRCK ratio */
#define I2S_CONFIG_RATIO_RATIO_Pos (0UL)
#define I2S_CONFIG_RATIO_RATIO_Msk (0xFUL << I2S_CONFIG_RATIO_RATIO_Pos)
#define I2S_CONFIG_RATIO_RATIO_32X (0x0UL)
#define I2S_CONFIG_RATIO_RATIO_48X (0x1UL)
#define I2S_CONFIG_RATIO_RATIO_64X (0x2UL)
#define I2S_CONFIG_RATIO_RATIO_96X (0x3UL)
#define I2S_CONFIG_RATIO_RATIO_128X (0x4UL)
#define I2S_CONFIG_RATIO_RATIO_192X (0x5UL)
#define I2S_CONFIG_RATIO_RATIO_256X (0x6UL)
#define I2S_CONFIG_RATIO_RATIO_384X (0x7UL)
#define I2S_CONFIG_RATIO_RATIO_512X (0x8UL)

/* Register: I2S_CONFIG_SWIDTH */
/* Description: Sample width */

/* Bits 2..0 : Sample and half-frame width */
#define I2S_CONFIG_SWIDTH_SWIDTH_Pos (0UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_Msk (0x7UL << I2S_CONFIG_SWIDTH_SWIDTH_Pos)
#define I2S_CONFIG_SWIDTH_SWIDTH_8Bit (0x0UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_16Bit (0x1UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_24Bit (0x2UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_32Bit (0x3UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_8BitIn16 (0x4UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_8BitIn32 (0x5UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_16BitIn32 (0x6UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_24BitIn32 (0x7UL)

/* Register: I2S_CONFIG_ALIGN */
/* Description: Alignment of sample within a frame */

/* Bit 0 : Alignment of sample within a frame */
#define I2S_CONFIG_ALIGN_ALIGN_Pos (0UL)
#define I2S_CONFIG_ALIGN_ALIGN_Msk (0x1UL << I2S_CONFIG_ALIGN_ALIGN_Pos)
#define I2S_CONFIG_ALIGN_ALIGN_Left (0x0UL)
#define I2S_CONFIG_ALIGN_ALIGN_Right (0x1UL)

/* Register: I2S_CONFIG_FORMAT */
/* Description: Frame format */

/* Bit 0 : Frame format */
#define I2S_CONFIG_FORMAT_FORMAT_Pos (0UL)
#define I2S_CONFIG_FORMAT_FORMAT_Msk (0x1UL << I2S_CONFIG_FORMAT_FORMAT_Pos)
#define I2S_CONFIG_FORMAT_FORMAT_I2S (0x0UL)
#define I2S_CONFIG_FORMAT_FORMAT_Aligned (0x1UL)

/* Register: I2S_CONFIG_CHANNELS */
/* Description: Enable channels */

/* Bits 1..0 : Enable channels */
#define I2S_CONFIG_CHANNELS_CHANNELS_Pos (0UL)
#define I2S_CONFIG_CHANNELS_CHANNELS_Msk (0x3UL << I2S_CONFIG_CHANNELS_CHANNELS_Pos)
#define I2S_CONFIG_CHANNELS_CHANNELS_Stereo (0x0UL)
#define I2S_CONFIG_CHANNELS_CHANNELS_Left (0x1UL)
#define I2S_CONFIG_CHANNELS_CHANNELS_Right (0x2UL)

/* Register: I2S_CONFIG_CLKCONFIG */
/* Description: Clock source selection for the I2S module */

/* Bit 8 : Bypass clock generator. MCK will be equal to source input. If bypass is enabled the MCKFREQ setting has no effect. */
#define I2S_CONFIG_CLKCONFIG_BYPASS_Pos (8UL)
#define I2S_CONFIG_CLKCONFIG_BYPASS_Msk (0x1UL << I2S_CONFIG_CLKCONFIG_BYPASS_Pos)
#define I2S_CONFIG_CLKCONFIG_BYPASS_Disable (0x0UL)
#define I2S_CONFIG_CLKCONFIG_BYPASS_Enable (0x1UL)

/* Bit 0 : Clock source selection */
#define I2S_CONFIG_CLKCONFIG_CLKSRC_Pos (0UL)
#define I2S_CONFIG_CLKCONFIG_CLKSRC_Msk (0x1UL << I2S_CONFIG_CLKCONFIG_CLKSRC_Pos)
#define I2S_CONFIG_CLKCONFIG_CLKSRC_PCLK32M (0x0UL)
#define I2S_CONFIG_CLKCONFIG_CLKSRC_ACLK (0x1UL)

/* Register: I2S_RXD_PTR */
/* Description: Receive buffer RAM start address. */

/* Bits 31..0 : Receive buffer Data RAM start address. When receiving, words containing samples will be written to this address. This address is a word aligned Data RAM address. */
#define I2S_RXD_PTR_PTR_Pos (0UL)
#define I2S_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << I2S_RXD_PTR_PTR_Pos)

/* Register: I2S_TXD_PTR */
/* Description: Transmit buffer RAM start address */

/* Bits 31..0 : Transmit buffer Data RAM start address. When transmitting, words containing samples will be fetched from this address. This address is a word aligned Data RAM address. */
#define I2S_TXD_PTR_PTR_Pos (0UL)
#define I2S_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << I2S_TXD_PTR_PTR_Pos)

/* Register: I2S_RXTXD_MAXCNT */
/* Description: Size of RXD and TXD buffers */

/* Bits 13..0 : Size of RXD and TXD buffers in number of 32 bit words */
#define I2S_RXTXD_MAXCNT_MAXCNT_Pos (0UL)
#define I2S_RXTXD_MAXCNT_MAXCNT_Msk (0x3FFFUL << I2S_RXTXD_MAXCNT_MAXCNT_Pos)

/* Register: I2S_PSEL_MCK */
/* Description: Pin select for MCK signal */

/* Bit 31 : Connection */
#define I2S_PSEL_MCK_CONNECT_Pos (31UL)
#define I2S_PSEL_MCK_CONNECT_Msk (0x1UL << I2S_PSEL_MCK_CONNECT_Pos)
#define I2S_PSEL_MCK_CONNECT_Connected (0x0UL)
#define I2S_PSEL_MCK_CONNECT_Disconnected (0x1UL)

/* Bit 5 : Port number */
#define I2S_PSEL_MCK_PORT_Pos (5UL)
#define I2S_PSEL_MCK_PORT_Msk (0x1UL << I2S_PSEL_MCK_PORT_Pos)

/* Bits 4..0 : Pin number */
#define I2S_PSEL_MCK_PIN_Pos (0UL)
#define I2S_PSEL_MCK_PIN_Msk (0x1FUL << I2S_PSEL_MCK_PIN_Pos)

/* Register: I2S_PSEL_SCK */
/* Description: Pin select for SCK signal */

/* Bit 31 : Connection */
#define I2S_PSEL_SCK_CONNECT_Pos (31UL)
#define I2S_PSEL_SCK_CONNECT_Msk (0x1UL << I2S_PSEL_SCK_CONNECT_Pos)
#define I2S_PSEL_SCK_CONNECT_Connected (0x0UL)
#define I2S_PSEL_SCK_CONNECT_Disconnected (0x1UL)

/* Bit 5 : Port number */
#define I2S_PSEL_SCK_PORT_Pos (5UL)
#define I2S_PSEL_SCK_PORT_Msk (0x1UL << I2S_PSEL_SCK_PORT_Pos)

/* Bits 4..0 : Pin number */
#define I2S_PSEL_SCK_PIN_Pos (0UL)
#define I2S_PSEL_SCK_PIN_Msk (0x1FUL << I2S_PSEL_SCK_PIN_Pos)

/* Register: I2S_PSEL_LRCK */
/* Description: Pin select for LRCK signal */

/* Bit 31 : Connection */
#define I2S_PSEL_LRCK_CONNECT_Pos (31UL)
#define I2S_PSEL_LRCK_CONNECT_Msk (0x1UL << I2S_PSEL_LRCK_CONNECT_Pos)
#define I2S_PSEL_LRCK_CONNECT_Connected (0x0UL)
#define I2S_PSEL_LRCK_CONNECT_Disconnected (0x1UL)

/* Bit 5 : Port number */
#define I2S_PSEL_LRCK_PORT_Pos (5UL)
#define I2S_PSEL_LRCK_PORT_Msk (0x1UL << I2S_PSEL_LRCK_PORT_Pos)

/* Bits 4..0 : Pin number */
#define I2S_PSEL_LRCK_PIN_Pos (0UL)
#define I2S_PSEL_LRCK_PIN_Msk (0x1FUL << I2S_PSEL_LRCK_PIN_Pos)

/* Register: I2S_PSEL_SDIN */
/* Description: Pin select for SDIN signal */

/* Bit 31 : Connection */
#define I2S_PSEL_SDIN_CONNECT_Pos (31UL)
#define I2S_PSEL_SDIN_CONNECT_Msk (0x1UL << I2S_PSEL_SDIN_CONNECT_Pos)
#define I2S_PSEL_SDIN_CONNECT_Connected (0x0UL)
#define I2S_PSEL_SDIN_CONNECT_Disconnected (0x1UL)

/* Bit 5 : Port number */
#define I2S_PSEL_SDIN_PORT_Pos (5UL)
#define I2S_PSEL_SDIN_PORT_Msk (0x1UL << I2S_PSEL_SDIN_PORT_Pos)

/* Bits 4..0 : Pin number */
#define I2S_PSEL_SDIN_PIN_Pos (0UL)
#define I2S_PSEL_SDIN_PIN_Msk (0x1FUL << I2S_PSEL_SDIN_PIN_Pos)

/* Register: I2S_PSEL_SDOUT */
/* Description: Pin select for SDOUT signal */

/* Bit 31 : Connection */
#define I2S_PSEL_SDOUT_CONNECT_Pos (31UL)
#define I2S_PSEL_SDOUT_CONNECT_Msk (0x1UL << I2S_PSEL_SDOUT_CONNECT_Pos)
#define I2S_PSEL_SDOUT_CONNECT_Connected (0x0UL)
#define I2S_PSEL_SDOUT_CONNECT_Disconnected (0x1UL)

/* Bit 5 : Port number */
#define I2S_PSEL_SDOUT_PORT_Pos (5UL)
#define I2S_PSEL_SDOUT_PORT_Msk (0x1UL << I2S_PSEL_SDOUT_PORT_Pos)

/* Bits 4..0 : Pin number */
#define I2S_PSEL_SDOUT_PIN_Pos (0UL)
#define I2S_PSEL_SDOUT_PIN_Msk (0x1FUL << I2S_PSEL_SDOUT_PIN_Pos)


/* Peripheral: IPC */
/* Description: Interprocessor communication 0 */

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


/* Peripheral: KMU */
/* Description: Key management unit 0 */

/* Register: KMU_TASKS_PUSH_KEYSLOT */
/* Description: Push a key slot over secure APB */

/* Bit 0 : Push a key slot over secure APB */
#define KMU_TASKS_PUSH_KEYSLOT_TASKS_PUSH_KEYSLOT_Pos (0UL)
#define KMU_TASKS_PUSH_KEYSLOT_TASKS_PUSH_KEYSLOT_Msk (0x1UL << KMU_TASKS_PUSH_KEYSLOT_TASKS_PUSH_KEYSLOT_Pos)
#define KMU_TASKS_PUSH_KEYSLOT_TASKS_PUSH_KEYSLOT_Trigger (0x1UL)

/* Register: KMU_EVENTS_KEYSLOT_PUSHED */
/* Description: Key slot successfully pushed over secure APB */

/* Bit 0 : Key slot successfully pushed over secure APB */
#define KMU_EVENTS_KEYSLOT_PUSHED_EVENTS_KEYSLOT_PUSHED_Pos (0UL)
#define KMU_EVENTS_KEYSLOT_PUSHED_EVENTS_KEYSLOT_PUSHED_Msk (0x1UL << KMU_EVENTS_KEYSLOT_PUSHED_EVENTS_KEYSLOT_PUSHED_Pos)
#define KMU_EVENTS_KEYSLOT_PUSHED_EVENTS_KEYSLOT_PUSHED_NotGenerated (0x0UL)
#define KMU_EVENTS_KEYSLOT_PUSHED_EVENTS_KEYSLOT_PUSHED_Generated (0x1UL)

/* Register: KMU_EVENTS_KEYSLOT_REVOKED */
/* Description: Key slot has been revoked and cannot be tasked for selection */

/* Bit 0 : Key slot has been revoked and cannot be tasked for selection */
#define KMU_EVENTS_KEYSLOT_REVOKED_EVENTS_KEYSLOT_REVOKED_Pos (0UL)
#define KMU_EVENTS_KEYSLOT_REVOKED_EVENTS_KEYSLOT_REVOKED_Msk (0x1UL << KMU_EVENTS_KEYSLOT_REVOKED_EVENTS_KEYSLOT_REVOKED_Pos)
#define KMU_EVENTS_KEYSLOT_REVOKED_EVENTS_KEYSLOT_REVOKED_NotGenerated (0x0UL)
#define KMU_EVENTS_KEYSLOT_REVOKED_EVENTS_KEYSLOT_REVOKED_Generated (0x1UL)

/* Register: KMU_EVENTS_KEYSLOT_ERROR */
/* Description: No key slot selected, no destination address defined, or error during push operation */

/* Bit 0 : No key slot selected, no destination address defined, or error during push operation */
#define KMU_EVENTS_KEYSLOT_ERROR_EVENTS_KEYSLOT_ERROR_Pos (0UL)
#define KMU_EVENTS_KEYSLOT_ERROR_EVENTS_KEYSLOT_ERROR_Msk (0x1UL << KMU_EVENTS_KEYSLOT_ERROR_EVENTS_KEYSLOT_ERROR_Pos)
#define KMU_EVENTS_KEYSLOT_ERROR_EVENTS_KEYSLOT_ERROR_NotGenerated (0x0UL)
#define KMU_EVENTS_KEYSLOT_ERROR_EVENTS_KEYSLOT_ERROR_Generated (0x1UL)

/* Register: KMU_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 2 : Enable or disable interrupt for event KEYSLOT_ERROR */
#define KMU_INTEN_KEYSLOT_ERROR_Pos (2UL)
#define KMU_INTEN_KEYSLOT_ERROR_Msk (0x1UL << KMU_INTEN_KEYSLOT_ERROR_Pos)
#define KMU_INTEN_KEYSLOT_ERROR_Disabled (0x0UL)
#define KMU_INTEN_KEYSLOT_ERROR_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event KEYSLOT_REVOKED */
#define KMU_INTEN_KEYSLOT_REVOKED_Pos (1UL)
#define KMU_INTEN_KEYSLOT_REVOKED_Msk (0x1UL << KMU_INTEN_KEYSLOT_REVOKED_Pos)
#define KMU_INTEN_KEYSLOT_REVOKED_Disabled (0x0UL)
#define KMU_INTEN_KEYSLOT_REVOKED_Enabled (0x1UL)

/* Bit 0 : Enable or disable interrupt for event KEYSLOT_PUSHED */
#define KMU_INTEN_KEYSLOT_PUSHED_Pos (0UL)
#define KMU_INTEN_KEYSLOT_PUSHED_Msk (0x1UL << KMU_INTEN_KEYSLOT_PUSHED_Pos)
#define KMU_INTEN_KEYSLOT_PUSHED_Disabled (0x0UL)
#define KMU_INTEN_KEYSLOT_PUSHED_Enabled (0x1UL)

/* Register: KMU_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event KEYSLOT_ERROR */
#define KMU_INTENSET_KEYSLOT_ERROR_Pos (2UL)
#define KMU_INTENSET_KEYSLOT_ERROR_Msk (0x1UL << KMU_INTENSET_KEYSLOT_ERROR_Pos)
#define KMU_INTENSET_KEYSLOT_ERROR_Disabled (0x0UL)
#define KMU_INTENSET_KEYSLOT_ERROR_Enabled (0x1UL)
#define KMU_INTENSET_KEYSLOT_ERROR_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event KEYSLOT_REVOKED */
#define KMU_INTENSET_KEYSLOT_REVOKED_Pos (1UL)
#define KMU_INTENSET_KEYSLOT_REVOKED_Msk (0x1UL << KMU_INTENSET_KEYSLOT_REVOKED_Pos)
#define KMU_INTENSET_KEYSLOT_REVOKED_Disabled (0x0UL)
#define KMU_INTENSET_KEYSLOT_REVOKED_Enabled (0x1UL)
#define KMU_INTENSET_KEYSLOT_REVOKED_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event KEYSLOT_PUSHED */
#define KMU_INTENSET_KEYSLOT_PUSHED_Pos (0UL)
#define KMU_INTENSET_KEYSLOT_PUSHED_Msk (0x1UL << KMU_INTENSET_KEYSLOT_PUSHED_Pos)
#define KMU_INTENSET_KEYSLOT_PUSHED_Disabled (0x0UL)
#define KMU_INTENSET_KEYSLOT_PUSHED_Enabled (0x1UL)
#define KMU_INTENSET_KEYSLOT_PUSHED_Set (0x1UL)

/* Register: KMU_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event KEYSLOT_ERROR */
#define KMU_INTENCLR_KEYSLOT_ERROR_Pos (2UL)
#define KMU_INTENCLR_KEYSLOT_ERROR_Msk (0x1UL << KMU_INTENCLR_KEYSLOT_ERROR_Pos)
#define KMU_INTENCLR_KEYSLOT_ERROR_Disabled (0x0UL)
#define KMU_INTENCLR_KEYSLOT_ERROR_Enabled (0x1UL)
#define KMU_INTENCLR_KEYSLOT_ERROR_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event KEYSLOT_REVOKED */
#define KMU_INTENCLR_KEYSLOT_REVOKED_Pos (1UL)
#define KMU_INTENCLR_KEYSLOT_REVOKED_Msk (0x1UL << KMU_INTENCLR_KEYSLOT_REVOKED_Pos)
#define KMU_INTENCLR_KEYSLOT_REVOKED_Disabled (0x0UL)
#define KMU_INTENCLR_KEYSLOT_REVOKED_Enabled (0x1UL)
#define KMU_INTENCLR_KEYSLOT_REVOKED_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event KEYSLOT_PUSHED */
#define KMU_INTENCLR_KEYSLOT_PUSHED_Pos (0UL)
#define KMU_INTENCLR_KEYSLOT_PUSHED_Msk (0x1UL << KMU_INTENCLR_KEYSLOT_PUSHED_Pos)
#define KMU_INTENCLR_KEYSLOT_PUSHED_Disabled (0x0UL)
#define KMU_INTENCLR_KEYSLOT_PUSHED_Enabled (0x1UL)
#define KMU_INTENCLR_KEYSLOT_PUSHED_Clear (0x1UL)

/* Register: KMU_INTPEND */
/* Description: Pending interrupts */

/* Bit 2 : Read pending status of interrupt for event KEYSLOT_ERROR */
#define KMU_INTPEND_KEYSLOT_ERROR_Pos (2UL)
#define KMU_INTPEND_KEYSLOT_ERROR_Msk (0x1UL << KMU_INTPEND_KEYSLOT_ERROR_Pos)
#define KMU_INTPEND_KEYSLOT_ERROR_NotPending (0x0UL)
#define KMU_INTPEND_KEYSLOT_ERROR_Pending (0x1UL)

/* Bit 1 : Read pending status of interrupt for event KEYSLOT_REVOKED */
#define KMU_INTPEND_KEYSLOT_REVOKED_Pos (1UL)
#define KMU_INTPEND_KEYSLOT_REVOKED_Msk (0x1UL << KMU_INTPEND_KEYSLOT_REVOKED_Pos)
#define KMU_INTPEND_KEYSLOT_REVOKED_NotPending (0x0UL)
#define KMU_INTPEND_KEYSLOT_REVOKED_Pending (0x1UL)

/* Bit 0 : Read pending status of interrupt for event KEYSLOT_PUSHED */
#define KMU_INTPEND_KEYSLOT_PUSHED_Pos (0UL)
#define KMU_INTPEND_KEYSLOT_PUSHED_Msk (0x1UL << KMU_INTPEND_KEYSLOT_PUSHED_Pos)
#define KMU_INTPEND_KEYSLOT_PUSHED_NotPending (0x0UL)
#define KMU_INTPEND_KEYSLOT_PUSHED_Pending (0x1UL)

/* Register: KMU_STATUS */
/* Description: Status bits for KMU operation */

/* Bit 1 : Violation status */
#define KMU_STATUS_BLOCKED_Pos (1UL)
#define KMU_STATUS_BLOCKED_Msk (0x1UL << KMU_STATUS_BLOCKED_Pos)
#define KMU_STATUS_BLOCKED_Disabled (0x0UL)
#define KMU_STATUS_BLOCKED_Enabled (0x1UL)

/* Bit 0 : Key slot ID successfully selected by the KMU */
#define KMU_STATUS_SELECTED_Pos (0UL)
#define KMU_STATUS_SELECTED_Msk (0x1UL << KMU_STATUS_SELECTED_Pos)
#define KMU_STATUS_SELECTED_Disabled (0x0UL)
#define KMU_STATUS_SELECTED_Enabled (0x1UL)

/* Register: KMU_SELECTKEYSLOT */
/* Description: Select key slot to be read over AHB or pushed over secure APB when TASKS_PUSH_KEYSLOT is started */

/* Bits 7..0 : Select key slot ID to be read over AHB, or pushed over secure APB, when TASKS_PUSH_KEYSLOT is started. NOTE: ID=0 is not a valid key slot ID. The 0 ID should be used when the KMU is idle or not in use. NOTE: Index N in UICR-&gt;KEYSLOT.KEY[N] and UICR-&gt;KEYSLOT.CONFIG[N] corresponds to KMU key slot ID=N+1. */
#define KMU_SELECTKEYSLOT_ID_Pos (0UL)
#define KMU_SELECTKEYSLOT_ID_Msk (0xFFUL << KMU_SELECTKEYSLOT_ID_Pos)


/* Peripheral: LPCOMP */
/* Description: Low-power comparator 0 */

/* Register: LPCOMP_TASKS_START */
/* Description: Start comparator */

/* Bit 0 : Start comparator */
#define LPCOMP_TASKS_START_TASKS_START_Pos (0UL)
#define LPCOMP_TASKS_START_TASKS_START_Msk (0x1UL << LPCOMP_TASKS_START_TASKS_START_Pos)
#define LPCOMP_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: LPCOMP_TASKS_STOP */
/* Description: Stop comparator */

/* Bit 0 : Stop comparator */
#define LPCOMP_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define LPCOMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << LPCOMP_TASKS_STOP_TASKS_STOP_Pos)
#define LPCOMP_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: LPCOMP_TASKS_SAMPLE */
/* Description: Sample comparator value */

/* Bit 0 : Sample comparator value */
#define LPCOMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL)
#define LPCOMP_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << LPCOMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos)
#define LPCOMP_TASKS_SAMPLE_TASKS_SAMPLE_Trigger (0x1UL)

/* Register: LPCOMP_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define LPCOMP_SUBSCRIBE_START_EN_Pos (31UL)
#define LPCOMP_SUBSCRIBE_START_EN_Msk (0x1UL << LPCOMP_SUBSCRIBE_START_EN_Pos)
#define LPCOMP_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define LPCOMP_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define LPCOMP_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define LPCOMP_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << LPCOMP_SUBSCRIBE_START_CHIDX_Pos)

/* Register: LPCOMP_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define LPCOMP_SUBSCRIBE_STOP_EN_Pos (31UL)
#define LPCOMP_SUBSCRIBE_STOP_EN_Msk (0x1UL << LPCOMP_SUBSCRIBE_STOP_EN_Pos)
#define LPCOMP_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define LPCOMP_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define LPCOMP_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define LPCOMP_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << LPCOMP_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: LPCOMP_SUBSCRIBE_SAMPLE */
/* Description: Subscribe configuration for task SAMPLE */

/* Bit 31 :   */
#define LPCOMP_SUBSCRIBE_SAMPLE_EN_Pos (31UL)
#define LPCOMP_SUBSCRIBE_SAMPLE_EN_Msk (0x1UL << LPCOMP_SUBSCRIBE_SAMPLE_EN_Pos)
#define LPCOMP_SUBSCRIBE_SAMPLE_EN_Disabled (0x0UL)
#define LPCOMP_SUBSCRIBE_SAMPLE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task SAMPLE will subscribe to */
#define LPCOMP_SUBSCRIBE_SAMPLE_CHIDX_Pos (0UL)
#define LPCOMP_SUBSCRIBE_SAMPLE_CHIDX_Msk (0xFFUL << LPCOMP_SUBSCRIBE_SAMPLE_CHIDX_Pos)

/* Register: LPCOMP_EVENTS_READY */
/* Description: LPCOMP is ready and output is valid */

/* Bit 0 : LPCOMP is ready and output is valid */
#define LPCOMP_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define LPCOMP_EVENTS_READY_EVENTS_READY_Msk (0x1UL << LPCOMP_EVENTS_READY_EVENTS_READY_Pos)
#define LPCOMP_EVENTS_READY_EVENTS_READY_NotGenerated (0x0UL)
#define LPCOMP_EVENTS_READY_EVENTS_READY_Generated (0x1UL)

/* Register: LPCOMP_EVENTS_DOWN */
/* Description: Downward crossing */

/* Bit 0 : Downward crossing */
#define LPCOMP_EVENTS_DOWN_EVENTS_DOWN_Pos (0UL)
#define LPCOMP_EVENTS_DOWN_EVENTS_DOWN_Msk (0x1UL << LPCOMP_EVENTS_DOWN_EVENTS_DOWN_Pos)
#define LPCOMP_EVENTS_DOWN_EVENTS_DOWN_NotGenerated (0x0UL)
#define LPCOMP_EVENTS_DOWN_EVENTS_DOWN_Generated (0x1UL)

/* Register: LPCOMP_EVENTS_UP */
/* Description: Upward crossing */

/* Bit 0 : Upward crossing */
#define LPCOMP_EVENTS_UP_EVENTS_UP_Pos (0UL)
#define LPCOMP_EVENTS_UP_EVENTS_UP_Msk (0x1UL << LPCOMP_EVENTS_UP_EVENTS_UP_Pos)
#define LPCOMP_EVENTS_UP_EVENTS_UP_NotGenerated (0x0UL)
#define LPCOMP_EVENTS_UP_EVENTS_UP_Generated (0x1UL)

/* Register: LPCOMP_EVENTS_CROSS */
/* Description: Downward or upward crossing */

/* Bit 0 : Downward or upward crossing */
#define LPCOMP_EVENTS_CROSS_EVENTS_CROSS_Pos (0UL)
#define LPCOMP_EVENTS_CROSS_EVENTS_CROSS_Msk (0x1UL << LPCOMP_EVENTS_CROSS_EVENTS_CROSS_Pos)
#define LPCOMP_EVENTS_CROSS_EVENTS_CROSS_NotGenerated (0x0UL)
#define LPCOMP_EVENTS_CROSS_EVENTS_CROSS_Generated (0x1UL)

/* Register: LPCOMP_PUBLISH_READY */
/* Description: Publish configuration for event READY */

/* Bit 31 :   */
#define LPCOMP_PUBLISH_READY_EN_Pos (31UL)
#define LPCOMP_PUBLISH_READY_EN_Msk (0x1UL << LPCOMP_PUBLISH_READY_EN_Pos)
#define LPCOMP_PUBLISH_READY_EN_Disabled (0x0UL)
#define LPCOMP_PUBLISH_READY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event READY will publish to */
#define LPCOMP_PUBLISH_READY_CHIDX_Pos (0UL)
#define LPCOMP_PUBLISH_READY_CHIDX_Msk (0xFFUL << LPCOMP_PUBLISH_READY_CHIDX_Pos)

/* Register: LPCOMP_PUBLISH_DOWN */
/* Description: Publish configuration for event DOWN */

/* Bit 31 :   */
#define LPCOMP_PUBLISH_DOWN_EN_Pos (31UL)
#define LPCOMP_PUBLISH_DOWN_EN_Msk (0x1UL << LPCOMP_PUBLISH_DOWN_EN_Pos)
#define LPCOMP_PUBLISH_DOWN_EN_Disabled (0x0UL)
#define LPCOMP_PUBLISH_DOWN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event DOWN will publish to */
#define LPCOMP_PUBLISH_DOWN_CHIDX_Pos (0UL)
#define LPCOMP_PUBLISH_DOWN_CHIDX_Msk (0xFFUL << LPCOMP_PUBLISH_DOWN_CHIDX_Pos)

/* Register: LPCOMP_PUBLISH_UP */
/* Description: Publish configuration for event UP */

/* Bit 31 :   */
#define LPCOMP_PUBLISH_UP_EN_Pos (31UL)
#define LPCOMP_PUBLISH_UP_EN_Msk (0x1UL << LPCOMP_PUBLISH_UP_EN_Pos)
#define LPCOMP_PUBLISH_UP_EN_Disabled (0x0UL)
#define LPCOMP_PUBLISH_UP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event UP will publish to */
#define LPCOMP_PUBLISH_UP_CHIDX_Pos (0UL)
#define LPCOMP_PUBLISH_UP_CHIDX_Msk (0xFFUL << LPCOMP_PUBLISH_UP_CHIDX_Pos)

/* Register: LPCOMP_PUBLISH_CROSS */
/* Description: Publish configuration for event CROSS */

/* Bit 31 :   */
#define LPCOMP_PUBLISH_CROSS_EN_Pos (31UL)
#define LPCOMP_PUBLISH_CROSS_EN_Msk (0x1UL << LPCOMP_PUBLISH_CROSS_EN_Pos)
#define LPCOMP_PUBLISH_CROSS_EN_Disabled (0x0UL)
#define LPCOMP_PUBLISH_CROSS_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event CROSS will publish to */
#define LPCOMP_PUBLISH_CROSS_CHIDX_Pos (0UL)
#define LPCOMP_PUBLISH_CROSS_CHIDX_Msk (0xFFUL << LPCOMP_PUBLISH_CROSS_CHIDX_Pos)

/* Register: LPCOMP_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 4 : Shortcut between event CROSS and task STOP */
#define LPCOMP_SHORTS_CROSS_STOP_Pos (4UL)
#define LPCOMP_SHORTS_CROSS_STOP_Msk (0x1UL << LPCOMP_SHORTS_CROSS_STOP_Pos)
#define LPCOMP_SHORTS_CROSS_STOP_Disabled (0x0UL)
#define LPCOMP_SHORTS_CROSS_STOP_Enabled (0x1UL)

/* Bit 3 : Shortcut between event UP and task STOP */
#define LPCOMP_SHORTS_UP_STOP_Pos (3UL)
#define LPCOMP_SHORTS_UP_STOP_Msk (0x1UL << LPCOMP_SHORTS_UP_STOP_Pos)
#define LPCOMP_SHORTS_UP_STOP_Disabled (0x0UL)
#define LPCOMP_SHORTS_UP_STOP_Enabled (0x1UL)

/* Bit 2 : Shortcut between event DOWN and task STOP */
#define LPCOMP_SHORTS_DOWN_STOP_Pos (2UL)
#define LPCOMP_SHORTS_DOWN_STOP_Msk (0x1UL << LPCOMP_SHORTS_DOWN_STOP_Pos)
#define LPCOMP_SHORTS_DOWN_STOP_Disabled (0x0UL)
#define LPCOMP_SHORTS_DOWN_STOP_Enabled (0x1UL)

/* Bit 1 : Shortcut between event READY and task STOP */
#define LPCOMP_SHORTS_READY_STOP_Pos (1UL)
#define LPCOMP_SHORTS_READY_STOP_Msk (0x1UL << LPCOMP_SHORTS_READY_STOP_Pos)
#define LPCOMP_SHORTS_READY_STOP_Disabled (0x0UL)
#define LPCOMP_SHORTS_READY_STOP_Enabled (0x1UL)

/* Bit 0 : Shortcut between event READY and task SAMPLE */
#define LPCOMP_SHORTS_READY_SAMPLE_Pos (0UL)
#define LPCOMP_SHORTS_READY_SAMPLE_Msk (0x1UL << LPCOMP_SHORTS_READY_SAMPLE_Pos)
#define LPCOMP_SHORTS_READY_SAMPLE_Disabled (0x0UL)
#define LPCOMP_SHORTS_READY_SAMPLE_Enabled (0x1UL)

/* Register: LPCOMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 3 : Write '1' to enable interrupt for event CROSS */
#define LPCOMP_INTENSET_CROSS_Pos (3UL)
#define LPCOMP_INTENSET_CROSS_Msk (0x1UL << LPCOMP_INTENSET_CROSS_Pos)
#define LPCOMP_INTENSET_CROSS_Disabled (0x0UL)
#define LPCOMP_INTENSET_CROSS_Enabled (0x1UL)
#define LPCOMP_INTENSET_CROSS_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event UP */
#define LPCOMP_INTENSET_UP_Pos (2UL)
#define LPCOMP_INTENSET_UP_Msk (0x1UL << LPCOMP_INTENSET_UP_Pos)
#define LPCOMP_INTENSET_UP_Disabled (0x0UL)
#define LPCOMP_INTENSET_UP_Enabled (0x1UL)
#define LPCOMP_INTENSET_UP_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event DOWN */
#define LPCOMP_INTENSET_DOWN_Pos (1UL)
#define LPCOMP_INTENSET_DOWN_Msk (0x1UL << LPCOMP_INTENSET_DOWN_Pos)
#define LPCOMP_INTENSET_DOWN_Disabled (0x0UL)
#define LPCOMP_INTENSET_DOWN_Enabled (0x1UL)
#define LPCOMP_INTENSET_DOWN_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define LPCOMP_INTENSET_READY_Pos (0UL)
#define LPCOMP_INTENSET_READY_Msk (0x1UL << LPCOMP_INTENSET_READY_Pos)
#define LPCOMP_INTENSET_READY_Disabled (0x0UL)
#define LPCOMP_INTENSET_READY_Enabled (0x1UL)
#define LPCOMP_INTENSET_READY_Set (0x1UL)

/* Register: LPCOMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 3 : Write '1' to disable interrupt for event CROSS */
#define LPCOMP_INTENCLR_CROSS_Pos (3UL)
#define LPCOMP_INTENCLR_CROSS_Msk (0x1UL << LPCOMP_INTENCLR_CROSS_Pos)
#define LPCOMP_INTENCLR_CROSS_Disabled (0x0UL)
#define LPCOMP_INTENCLR_CROSS_Enabled (0x1UL)
#define LPCOMP_INTENCLR_CROSS_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event UP */
#define LPCOMP_INTENCLR_UP_Pos (2UL)
#define LPCOMP_INTENCLR_UP_Msk (0x1UL << LPCOMP_INTENCLR_UP_Pos)
#define LPCOMP_INTENCLR_UP_Disabled (0x0UL)
#define LPCOMP_INTENCLR_UP_Enabled (0x1UL)
#define LPCOMP_INTENCLR_UP_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event DOWN */
#define LPCOMP_INTENCLR_DOWN_Pos (1UL)
#define LPCOMP_INTENCLR_DOWN_Msk (0x1UL << LPCOMP_INTENCLR_DOWN_Pos)
#define LPCOMP_INTENCLR_DOWN_Disabled (0x0UL)
#define LPCOMP_INTENCLR_DOWN_Enabled (0x1UL)
#define LPCOMP_INTENCLR_DOWN_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event READY */
#define LPCOMP_INTENCLR_READY_Pos (0UL)
#define LPCOMP_INTENCLR_READY_Msk (0x1UL << LPCOMP_INTENCLR_READY_Pos)
#define LPCOMP_INTENCLR_READY_Disabled (0x0UL)
#define LPCOMP_INTENCLR_READY_Enabled (0x1UL)
#define LPCOMP_INTENCLR_READY_Clear (0x1UL)

/* Register: LPCOMP_RESULT */
/* Description: Compare result */

/* Bit 0 : Result of last compare. Decision point SAMPLE task. */
#define LPCOMP_RESULT_RESULT_Pos (0UL)
#define LPCOMP_RESULT_RESULT_Msk (0x1UL << LPCOMP_RESULT_RESULT_Pos)
#define LPCOMP_RESULT_RESULT_Below (0x0UL)
#define LPCOMP_RESULT_RESULT_Above (0x1UL)

/* Register: LPCOMP_ENABLE */
/* Description: Enable LPCOMP */

/* Bits 1..0 : Enable or disable LPCOMP */
#define LPCOMP_ENABLE_ENABLE_Pos (0UL)
#define LPCOMP_ENABLE_ENABLE_Msk (0x3UL << LPCOMP_ENABLE_ENABLE_Pos)
#define LPCOMP_ENABLE_ENABLE_Disabled (0x0UL)
#define LPCOMP_ENABLE_ENABLE_Enabled (0x1UL)

/* Register: LPCOMP_PSEL */
/* Description: Input pin select */

/* Bits 2..0 : Analog pin select */
#define LPCOMP_PSEL_PSEL_Pos (0UL)
#define LPCOMP_PSEL_PSEL_Msk (0x7UL << LPCOMP_PSEL_PSEL_Pos)
#define LPCOMP_PSEL_PSEL_AnalogInput0 (0x0UL)
#define LPCOMP_PSEL_PSEL_AnalogInput1 (0x1UL)
#define LPCOMP_PSEL_PSEL_AnalogInput2 (0x2UL)
#define LPCOMP_PSEL_PSEL_AnalogInput3 (0x3UL)
#define LPCOMP_PSEL_PSEL_AnalogInput4 (0x4UL)
#define LPCOMP_PSEL_PSEL_AnalogInput5 (0x5UL)
#define LPCOMP_PSEL_PSEL_AnalogInput6 (0x6UL)
#define LPCOMP_PSEL_PSEL_AnalogInput7 (0x7UL)

/* Register: LPCOMP_REFSEL */
/* Description: Reference select */

/* Bits 3..0 : Reference select */
#define LPCOMP_REFSEL_REFSEL_Pos (0UL)
#define LPCOMP_REFSEL_REFSEL_Msk (0xFUL << LPCOMP_REFSEL_REFSEL_Pos)
#define LPCOMP_REFSEL_REFSEL_Ref1_8Vdd (0x0UL)
#define LPCOMP_REFSEL_REFSEL_Ref2_8Vdd (0x1UL)
#define LPCOMP_REFSEL_REFSEL_Ref3_8Vdd (0x2UL)
#define LPCOMP_REFSEL_REFSEL_Ref4_8Vdd (0x3UL)
#define LPCOMP_REFSEL_REFSEL_Ref5_8Vdd (0x4UL)
#define LPCOMP_REFSEL_REFSEL_Ref6_8Vdd (0x5UL)
#define LPCOMP_REFSEL_REFSEL_Ref7_8Vdd (0x6UL)
#define LPCOMP_REFSEL_REFSEL_ARef (0x7UL)
#define LPCOMP_REFSEL_REFSEL_Ref1_16Vdd (0x8UL)
#define LPCOMP_REFSEL_REFSEL_Ref3_16Vdd (0x9UL)
#define LPCOMP_REFSEL_REFSEL_Ref5_16Vdd (0xAUL)
#define LPCOMP_REFSEL_REFSEL_Ref7_16Vdd (0xBUL)
#define LPCOMP_REFSEL_REFSEL_Ref9_16Vdd (0xCUL)
#define LPCOMP_REFSEL_REFSEL_Ref11_16Vdd (0xDUL)
#define LPCOMP_REFSEL_REFSEL_Ref13_16Vdd (0xEUL)
#define LPCOMP_REFSEL_REFSEL_Ref15_16Vdd (0xFUL)

/* Register: LPCOMP_EXTREFSEL */
/* Description: External reference select */

/* Bit 0 : External analog reference select */
#define LPCOMP_EXTREFSEL_EXTREFSEL_Pos (0UL)
#define LPCOMP_EXTREFSEL_EXTREFSEL_Msk (0x1UL << LPCOMP_EXTREFSEL_EXTREFSEL_Pos)
#define LPCOMP_EXTREFSEL_EXTREFSEL_AnalogReference0 (0x0UL)
#define LPCOMP_EXTREFSEL_EXTREFSEL_AnalogReference1 (0x1UL)

/* Register: LPCOMP_ANADETECT */
/* Description: Analog detect configuration */

/* Bits 1..0 : Analog detect configuration */
#define LPCOMP_ANADETECT_ANADETECT_Pos (0UL)
#define LPCOMP_ANADETECT_ANADETECT_Msk (0x3UL << LPCOMP_ANADETECT_ANADETECT_Pos)
#define LPCOMP_ANADETECT_ANADETECT_Cross (0x0UL)
#define LPCOMP_ANADETECT_ANADETECT_Up (0x1UL)
#define LPCOMP_ANADETECT_ANADETECT_Down (0x2UL)

/* Register: LPCOMP_HYST */
/* Description: Comparator hysteresis enable */

/* Bit 0 : Comparator hysteresis enable */
#define LPCOMP_HYST_HYST_Pos (0UL)
#define LPCOMP_HYST_HYST_Msk (0x1UL << LPCOMP_HYST_HYST_Pos)
#define LPCOMP_HYST_HYST_Disabled (0x0UL)
#define LPCOMP_HYST_HYST_Enabled (0x1UL)


/* Peripheral: MUTEX */
/* Description: MUTEX 0 */

/* Register: MUTEX_MUTEX */
/* Description: Description collection: Mutex register */

/* Bit 0 : Mutex register n */
#define MUTEX_MUTEX_MUTEX_Pos (0UL)
#define MUTEX_MUTEX_MUTEX_Msk (0x1UL << MUTEX_MUTEX_MUTEX_Pos)
#define MUTEX_MUTEX_MUTEX_Unlocked (0x0UL)
#define MUTEX_MUTEX_MUTEX_Locked (0x1UL)


/* Peripheral: NFCT */
/* Description: NFC-A compatible radio 0 */

/* Register: NFCT_TASKS_ACTIVATE */
/* Description: Activate NFCT peripheral for incoming and outgoing frames, change state to activated */

/* Bit 0 : Activate NFCT peripheral for incoming and outgoing frames, change state to activated */
#define NFCT_TASKS_ACTIVATE_TASKS_ACTIVATE_Pos (0UL)
#define NFCT_TASKS_ACTIVATE_TASKS_ACTIVATE_Msk (0x1UL << NFCT_TASKS_ACTIVATE_TASKS_ACTIVATE_Pos)
#define NFCT_TASKS_ACTIVATE_TASKS_ACTIVATE_Trigger (0x1UL)

/* Register: NFCT_TASKS_DISABLE */
/* Description: Disable NFCT peripheral */

/* Bit 0 : Disable NFCT peripheral */
#define NFCT_TASKS_DISABLE_TASKS_DISABLE_Pos (0UL)
#define NFCT_TASKS_DISABLE_TASKS_DISABLE_Msk (0x1UL << NFCT_TASKS_DISABLE_TASKS_DISABLE_Pos)
#define NFCT_TASKS_DISABLE_TASKS_DISABLE_Trigger (0x1UL)

/* Register: NFCT_TASKS_SENSE */
/* Description: Enable NFC sense field mode, change state to sense mode */

/* Bit 0 : Enable NFC sense field mode, change state to sense mode */
#define NFCT_TASKS_SENSE_TASKS_SENSE_Pos (0UL)
#define NFCT_TASKS_SENSE_TASKS_SENSE_Msk (0x1UL << NFCT_TASKS_SENSE_TASKS_SENSE_Pos)
#define NFCT_TASKS_SENSE_TASKS_SENSE_Trigger (0x1UL)

/* Register: NFCT_TASKS_STARTTX */
/* Description: Start transmission of an outgoing frame, change state to transmit */

/* Bit 0 : Start transmission of an outgoing frame, change state to transmit */
#define NFCT_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL)
#define NFCT_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << NFCT_TASKS_STARTTX_TASKS_STARTTX_Pos)
#define NFCT_TASKS_STARTTX_TASKS_STARTTX_Trigger (0x1UL)

/* Register: NFCT_TASKS_ENABLERXDATA */
/* Description: Initializes the EasyDMA for receive. */

/* Bit 0 : Initializes the EasyDMA for receive. */
#define NFCT_TASKS_ENABLERXDATA_TASKS_ENABLERXDATA_Pos (0UL)
#define NFCT_TASKS_ENABLERXDATA_TASKS_ENABLERXDATA_Msk (0x1UL << NFCT_TASKS_ENABLERXDATA_TASKS_ENABLERXDATA_Pos)
#define NFCT_TASKS_ENABLERXDATA_TASKS_ENABLERXDATA_Trigger (0x1UL)

/* Register: NFCT_TASKS_GOIDLE */
/* Description: Force state machine to IDLE state */

/* Bit 0 : Force state machine to IDLE state */
#define NFCT_TASKS_GOIDLE_TASKS_GOIDLE_Pos (0UL)
#define NFCT_TASKS_GOIDLE_TASKS_GOIDLE_Msk (0x1UL << NFCT_TASKS_GOIDLE_TASKS_GOIDLE_Pos)
#define NFCT_TASKS_GOIDLE_TASKS_GOIDLE_Trigger (0x1UL)

/* Register: NFCT_TASKS_GOSLEEP */
/* Description: Force state machine to SLEEP_A state */

/* Bit 0 : Force state machine to SLEEP_A state */
#define NFCT_TASKS_GOSLEEP_TASKS_GOSLEEP_Pos (0UL)
#define NFCT_TASKS_GOSLEEP_TASKS_GOSLEEP_Msk (0x1UL << NFCT_TASKS_GOSLEEP_TASKS_GOSLEEP_Pos)
#define NFCT_TASKS_GOSLEEP_TASKS_GOSLEEP_Trigger (0x1UL)

/* Register: NFCT_SUBSCRIBE_ACTIVATE */
/* Description: Subscribe configuration for task ACTIVATE */

/* Bit 31 :   */
#define NFCT_SUBSCRIBE_ACTIVATE_EN_Pos (31UL)
#define NFCT_SUBSCRIBE_ACTIVATE_EN_Msk (0x1UL << NFCT_SUBSCRIBE_ACTIVATE_EN_Pos)
#define NFCT_SUBSCRIBE_ACTIVATE_EN_Disabled (0x0UL)
#define NFCT_SUBSCRIBE_ACTIVATE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task ACTIVATE will subscribe to */
#define NFCT_SUBSCRIBE_ACTIVATE_CHIDX_Pos (0UL)
#define NFCT_SUBSCRIBE_ACTIVATE_CHIDX_Msk (0xFFUL << NFCT_SUBSCRIBE_ACTIVATE_CHIDX_Pos)

/* Register: NFCT_SUBSCRIBE_DISABLE */
/* Description: Subscribe configuration for task DISABLE */

/* Bit 31 :   */
#define NFCT_SUBSCRIBE_DISABLE_EN_Pos (31UL)
#define NFCT_SUBSCRIBE_DISABLE_EN_Msk (0x1UL << NFCT_SUBSCRIBE_DISABLE_EN_Pos)
#define NFCT_SUBSCRIBE_DISABLE_EN_Disabled (0x0UL)
#define NFCT_SUBSCRIBE_DISABLE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task DISABLE will subscribe to */
#define NFCT_SUBSCRIBE_DISABLE_CHIDX_Pos (0UL)
#define NFCT_SUBSCRIBE_DISABLE_CHIDX_Msk (0xFFUL << NFCT_SUBSCRIBE_DISABLE_CHIDX_Pos)

/* Register: NFCT_SUBSCRIBE_SENSE */
/* Description: Subscribe configuration for task SENSE */

/* Bit 31 :   */
#define NFCT_SUBSCRIBE_SENSE_EN_Pos (31UL)
#define NFCT_SUBSCRIBE_SENSE_EN_Msk (0x1UL << NFCT_SUBSCRIBE_SENSE_EN_Pos)
#define NFCT_SUBSCRIBE_SENSE_EN_Disabled (0x0UL)
#define NFCT_SUBSCRIBE_SENSE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task SENSE will subscribe to */
#define NFCT_SUBSCRIBE_SENSE_CHIDX_Pos (0UL)
#define NFCT_SUBSCRIBE_SENSE_CHIDX_Msk (0xFFUL << NFCT_SUBSCRIBE_SENSE_CHIDX_Pos)

/* Register: NFCT_SUBSCRIBE_STARTTX */
/* Description: Subscribe configuration for task STARTTX */

/* Bit 31 :   */
#define NFCT_SUBSCRIBE_STARTTX_EN_Pos (31UL)
#define NFCT_SUBSCRIBE_STARTTX_EN_Msk (0x1UL << NFCT_SUBSCRIBE_STARTTX_EN_Pos)
#define NFCT_SUBSCRIBE_STARTTX_EN_Disabled (0x0UL)
#define NFCT_SUBSCRIBE_STARTTX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STARTTX will subscribe to */
#define NFCT_SUBSCRIBE_STARTTX_CHIDX_Pos (0UL)
#define NFCT_SUBSCRIBE_STARTTX_CHIDX_Msk (0xFFUL << NFCT_SUBSCRIBE_STARTTX_CHIDX_Pos)

/* Register: NFCT_SUBSCRIBE_ENABLERXDATA */
/* Description: Subscribe configuration for task ENABLERXDATA */

/* Bit 31 :   */
#define NFCT_SUBSCRIBE_ENABLERXDATA_EN_Pos (31UL)
#define NFCT_SUBSCRIBE_ENABLERXDATA_EN_Msk (0x1UL << NFCT_SUBSCRIBE_ENABLERXDATA_EN_Pos)
#define NFCT_SUBSCRIBE_ENABLERXDATA_EN_Disabled (0x0UL)
#define NFCT_SUBSCRIBE_ENABLERXDATA_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task ENABLERXDATA will subscribe to */
#define NFCT_SUBSCRIBE_ENABLERXDATA_CHIDX_Pos (0UL)
#define NFCT_SUBSCRIBE_ENABLERXDATA_CHIDX_Msk (0xFFUL << NFCT_SUBSCRIBE_ENABLERXDATA_CHIDX_Pos)

/* Register: NFCT_SUBSCRIBE_GOIDLE */
/* Description: Subscribe configuration for task GOIDLE */

/* Bit 31 :   */
#define NFCT_SUBSCRIBE_GOIDLE_EN_Pos (31UL)
#define NFCT_SUBSCRIBE_GOIDLE_EN_Msk (0x1UL << NFCT_SUBSCRIBE_GOIDLE_EN_Pos)
#define NFCT_SUBSCRIBE_GOIDLE_EN_Disabled (0x0UL)
#define NFCT_SUBSCRIBE_GOIDLE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task GOIDLE will subscribe to */
#define NFCT_SUBSCRIBE_GOIDLE_CHIDX_Pos (0UL)
#define NFCT_SUBSCRIBE_GOIDLE_CHIDX_Msk (0xFFUL << NFCT_SUBSCRIBE_GOIDLE_CHIDX_Pos)

/* Register: NFCT_SUBSCRIBE_GOSLEEP */
/* Description: Subscribe configuration for task GOSLEEP */

/* Bit 31 :   */
#define NFCT_SUBSCRIBE_GOSLEEP_EN_Pos (31UL)
#define NFCT_SUBSCRIBE_GOSLEEP_EN_Msk (0x1UL << NFCT_SUBSCRIBE_GOSLEEP_EN_Pos)
#define NFCT_SUBSCRIBE_GOSLEEP_EN_Disabled (0x0UL)
#define NFCT_SUBSCRIBE_GOSLEEP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task GOSLEEP will subscribe to */
#define NFCT_SUBSCRIBE_GOSLEEP_CHIDX_Pos (0UL)
#define NFCT_SUBSCRIBE_GOSLEEP_CHIDX_Msk (0xFFUL << NFCT_SUBSCRIBE_GOSLEEP_CHIDX_Pos)

/* Register: NFCT_EVENTS_READY */
/* Description: The NFCT peripheral is ready to receive and send frames */

/* Bit 0 : The NFCT peripheral is ready to receive and send frames */
#define NFCT_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define NFCT_EVENTS_READY_EVENTS_READY_Msk (0x1UL << NFCT_EVENTS_READY_EVENTS_READY_Pos)
#define NFCT_EVENTS_READY_EVENTS_READY_NotGenerated (0x0UL)
#define NFCT_EVENTS_READY_EVENTS_READY_Generated (0x1UL)

/* Register: NFCT_EVENTS_FIELDDETECTED */
/* Description: Remote NFC field detected */

/* Bit 0 : Remote NFC field detected */
#define NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_Pos (0UL)
#define NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_Msk (0x1UL << NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_Pos)
#define NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_NotGenerated (0x0UL)
#define NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_Generated (0x1UL)

/* Register: NFCT_EVENTS_FIELDLOST */
/* Description: Remote NFC field lost */

/* Bit 0 : Remote NFC field lost */
#define NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_Pos (0UL)
#define NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_Msk (0x1UL << NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_Pos)
#define NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_NotGenerated (0x0UL)
#define NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_Generated (0x1UL)

/* Register: NFCT_EVENTS_TXFRAMESTART */
/* Description: Marks the start of the first symbol of a transmitted frame */

/* Bit 0 : Marks the start of the first symbol of a transmitted frame */
#define NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_Pos (0UL)
#define NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_Msk (0x1UL << NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_Pos)
#define NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_NotGenerated (0x0UL)
#define NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_Generated (0x1UL)

/* Register: NFCT_EVENTS_TXFRAMEEND */
/* Description: Marks the end of the last transmitted on-air symbol of a frame */

/* Bit 0 : Marks the end of the last transmitted on-air symbol of a frame */
#define NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_Pos (0UL)
#define NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_Msk (0x1UL << NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_Pos)
#define NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_NotGenerated (0x0UL)
#define NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_Generated (0x1UL)

/* Register: NFCT_EVENTS_RXFRAMESTART */
/* Description: Marks the end of the first symbol of a received frame */

/* Bit 0 : Marks the end of the first symbol of a received frame */
#define NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_Pos (0UL)
#define NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_Msk (0x1UL << NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_Pos)
#define NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_NotGenerated (0x0UL)
#define NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_Generated (0x1UL)

/* Register: NFCT_EVENTS_RXFRAMEEND */
/* Description: Received data has been checked (CRC, parity) and transferred to RAM, and EasyDMA has ended accessing the RX buffer */

/* Bit 0 : Received data has been checked (CRC, parity) and transferred to RAM, and EasyDMA has ended accessing the RX buffer */
#define NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_Pos (0UL)
#define NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_Msk (0x1UL << NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_Pos)
#define NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_NotGenerated (0x0UL)
#define NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_Generated (0x1UL)

/* Register: NFCT_EVENTS_ERROR */
/* Description: NFC error reported. The ERRORSTATUS register contains details on the source of the error. */

/* Bit 0 : NFC error reported. The ERRORSTATUS register contains details on the source of the error. */
#define NFCT_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define NFCT_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << NFCT_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define NFCT_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0x0UL)
#define NFCT_EVENTS_ERROR_EVENTS_ERROR_Generated (0x1UL)

/* Register: NFCT_EVENTS_RXERROR */
/* Description: NFC RX frame error reported. The FRAMESTATUS.RX register contains details on the source of the error. */

/* Bit 0 : NFC RX frame error reported. The FRAMESTATUS.RX register contains details on the source of the error. */
#define NFCT_EVENTS_RXERROR_EVENTS_RXERROR_Pos (0UL)
#define NFCT_EVENTS_RXERROR_EVENTS_RXERROR_Msk (0x1UL << NFCT_EVENTS_RXERROR_EVENTS_RXERROR_Pos)
#define NFCT_EVENTS_RXERROR_EVENTS_RXERROR_NotGenerated (0x0UL)
#define NFCT_EVENTS_RXERROR_EVENTS_RXERROR_Generated (0x1UL)

/* Register: NFCT_EVENTS_ENDRX */
/* Description: RX buffer (as defined by PACKETPTR and MAXLEN) in Data RAM full. */

/* Bit 0 : RX buffer (as defined by PACKETPTR and MAXLEN) in Data RAM full. */
#define NFCT_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL)
#define NFCT_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << NFCT_EVENTS_ENDRX_EVENTS_ENDRX_Pos)
#define NFCT_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0x0UL)
#define NFCT_EVENTS_ENDRX_EVENTS_ENDRX_Generated (0x1UL)

/* Register: NFCT_EVENTS_ENDTX */
/* Description: Transmission of data in RAM has ended, and EasyDMA has ended accessing the TX buffer */

/* Bit 0 : Transmission of data in RAM has ended, and EasyDMA has ended accessing the TX buffer */
#define NFCT_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL)
#define NFCT_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << NFCT_EVENTS_ENDTX_EVENTS_ENDTX_Pos)
#define NFCT_EVENTS_ENDTX_EVENTS_ENDTX_NotGenerated (0x0UL)
#define NFCT_EVENTS_ENDTX_EVENTS_ENDTX_Generated (0x1UL)

/* Register: NFCT_EVENTS_AUTOCOLRESSTARTED */
/* Description: Auto collision resolution process has started */

/* Bit 0 : Auto collision resolution process has started */
#define NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_Pos (0UL)
#define NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_Msk (0x1UL << NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_Pos)
#define NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_NotGenerated (0x0UL)
#define NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_Generated (0x1UL)

/* Register: NFCT_EVENTS_COLLISION */
/* Description: NFC auto collision resolution error reported. */

/* Bit 0 : NFC auto collision resolution error reported. */
#define NFCT_EVENTS_COLLISION_EVENTS_COLLISION_Pos (0UL)
#define NFCT_EVENTS_COLLISION_EVENTS_COLLISION_Msk (0x1UL << NFCT_EVENTS_COLLISION_EVENTS_COLLISION_Pos)
#define NFCT_EVENTS_COLLISION_EVENTS_COLLISION_NotGenerated (0x0UL)
#define NFCT_EVENTS_COLLISION_EVENTS_COLLISION_Generated (0x1UL)

/* Register: NFCT_EVENTS_SELECTED */
/* Description: NFC auto collision resolution successfully completed */

/* Bit 0 : NFC auto collision resolution successfully completed */
#define NFCT_EVENTS_SELECTED_EVENTS_SELECTED_Pos (0UL)
#define NFCT_EVENTS_SELECTED_EVENTS_SELECTED_Msk (0x1UL << NFCT_EVENTS_SELECTED_EVENTS_SELECTED_Pos)
#define NFCT_EVENTS_SELECTED_EVENTS_SELECTED_NotGenerated (0x0UL)
#define NFCT_EVENTS_SELECTED_EVENTS_SELECTED_Generated (0x1UL)

/* Register: NFCT_EVENTS_STARTED */
/* Description: EasyDMA is ready to receive or send frames. */

/* Bit 0 : EasyDMA is ready to receive or send frames. */
#define NFCT_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define NFCT_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << NFCT_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define NFCT_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0x0UL)
#define NFCT_EVENTS_STARTED_EVENTS_STARTED_Generated (0x1UL)

/* Register: NFCT_PUBLISH_READY */
/* Description: Publish configuration for event READY */

/* Bit 31 :   */
#define NFCT_PUBLISH_READY_EN_Pos (31UL)
#define NFCT_PUBLISH_READY_EN_Msk (0x1UL << NFCT_PUBLISH_READY_EN_Pos)
#define NFCT_PUBLISH_READY_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_READY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event READY will publish to */
#define NFCT_PUBLISH_READY_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_READY_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_READY_CHIDX_Pos)

/* Register: NFCT_PUBLISH_FIELDDETECTED */
/* Description: Publish configuration for event FIELDDETECTED */

/* Bit 31 :   */
#define NFCT_PUBLISH_FIELDDETECTED_EN_Pos (31UL)
#define NFCT_PUBLISH_FIELDDETECTED_EN_Msk (0x1UL << NFCT_PUBLISH_FIELDDETECTED_EN_Pos)
#define NFCT_PUBLISH_FIELDDETECTED_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_FIELDDETECTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event FIELDDETECTED will publish to */
#define NFCT_PUBLISH_FIELDDETECTED_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_FIELDDETECTED_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_FIELDDETECTED_CHIDX_Pos)

/* Register: NFCT_PUBLISH_FIELDLOST */
/* Description: Publish configuration for event FIELDLOST */

/* Bit 31 :   */
#define NFCT_PUBLISH_FIELDLOST_EN_Pos (31UL)
#define NFCT_PUBLISH_FIELDLOST_EN_Msk (0x1UL << NFCT_PUBLISH_FIELDLOST_EN_Pos)
#define NFCT_PUBLISH_FIELDLOST_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_FIELDLOST_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event FIELDLOST will publish to */
#define NFCT_PUBLISH_FIELDLOST_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_FIELDLOST_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_FIELDLOST_CHIDX_Pos)

/* Register: NFCT_PUBLISH_TXFRAMESTART */
/* Description: Publish configuration for event TXFRAMESTART */

/* Bit 31 :   */
#define NFCT_PUBLISH_TXFRAMESTART_EN_Pos (31UL)
#define NFCT_PUBLISH_TXFRAMESTART_EN_Msk (0x1UL << NFCT_PUBLISH_TXFRAMESTART_EN_Pos)
#define NFCT_PUBLISH_TXFRAMESTART_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_TXFRAMESTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event TXFRAMESTART will publish to */
#define NFCT_PUBLISH_TXFRAMESTART_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_TXFRAMESTART_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_TXFRAMESTART_CHIDX_Pos)

/* Register: NFCT_PUBLISH_TXFRAMEEND */
/* Description: Publish configuration for event TXFRAMEEND */

/* Bit 31 :   */
#define NFCT_PUBLISH_TXFRAMEEND_EN_Pos (31UL)
#define NFCT_PUBLISH_TXFRAMEEND_EN_Msk (0x1UL << NFCT_PUBLISH_TXFRAMEEND_EN_Pos)
#define NFCT_PUBLISH_TXFRAMEEND_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_TXFRAMEEND_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event TXFRAMEEND will publish to */
#define NFCT_PUBLISH_TXFRAMEEND_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_TXFRAMEEND_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_TXFRAMEEND_CHIDX_Pos)

/* Register: NFCT_PUBLISH_RXFRAMESTART */
/* Description: Publish configuration for event RXFRAMESTART */

/* Bit 31 :   */
#define NFCT_PUBLISH_RXFRAMESTART_EN_Pos (31UL)
#define NFCT_PUBLISH_RXFRAMESTART_EN_Msk (0x1UL << NFCT_PUBLISH_RXFRAMESTART_EN_Pos)
#define NFCT_PUBLISH_RXFRAMESTART_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_RXFRAMESTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RXFRAMESTART will publish to */
#define NFCT_PUBLISH_RXFRAMESTART_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_RXFRAMESTART_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_RXFRAMESTART_CHIDX_Pos)

/* Register: NFCT_PUBLISH_RXFRAMEEND */
/* Description: Publish configuration for event RXFRAMEEND */

/* Bit 31 :   */
#define NFCT_PUBLISH_RXFRAMEEND_EN_Pos (31UL)
#define NFCT_PUBLISH_RXFRAMEEND_EN_Msk (0x1UL << NFCT_PUBLISH_RXFRAMEEND_EN_Pos)
#define NFCT_PUBLISH_RXFRAMEEND_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_RXFRAMEEND_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RXFRAMEEND will publish to */
#define NFCT_PUBLISH_RXFRAMEEND_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_RXFRAMEEND_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_RXFRAMEEND_CHIDX_Pos)

/* Register: NFCT_PUBLISH_ERROR */
/* Description: Publish configuration for event ERROR */

/* Bit 31 :   */
#define NFCT_PUBLISH_ERROR_EN_Pos (31UL)
#define NFCT_PUBLISH_ERROR_EN_Msk (0x1UL << NFCT_PUBLISH_ERROR_EN_Pos)
#define NFCT_PUBLISH_ERROR_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_ERROR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ERROR will publish to */
#define NFCT_PUBLISH_ERROR_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_ERROR_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_ERROR_CHIDX_Pos)

/* Register: NFCT_PUBLISH_RXERROR */
/* Description: Publish configuration for event RXERROR */

/* Bit 31 :   */
#define NFCT_PUBLISH_RXERROR_EN_Pos (31UL)
#define NFCT_PUBLISH_RXERROR_EN_Msk (0x1UL << NFCT_PUBLISH_RXERROR_EN_Pos)
#define NFCT_PUBLISH_RXERROR_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_RXERROR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RXERROR will publish to */
#define NFCT_PUBLISH_RXERROR_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_RXERROR_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_RXERROR_CHIDX_Pos)

/* Register: NFCT_PUBLISH_ENDRX */
/* Description: Publish configuration for event ENDRX */

/* Bit 31 :   */
#define NFCT_PUBLISH_ENDRX_EN_Pos (31UL)
#define NFCT_PUBLISH_ENDRX_EN_Msk (0x1UL << NFCT_PUBLISH_ENDRX_EN_Pos)
#define NFCT_PUBLISH_ENDRX_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_ENDRX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDRX will publish to */
#define NFCT_PUBLISH_ENDRX_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_ENDRX_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_ENDRX_CHIDX_Pos)

/* Register: NFCT_PUBLISH_ENDTX */
/* Description: Publish configuration for event ENDTX */

/* Bit 31 :   */
#define NFCT_PUBLISH_ENDTX_EN_Pos (31UL)
#define NFCT_PUBLISH_ENDTX_EN_Msk (0x1UL << NFCT_PUBLISH_ENDTX_EN_Pos)
#define NFCT_PUBLISH_ENDTX_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_ENDTX_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDTX will publish to */
#define NFCT_PUBLISH_ENDTX_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_ENDTX_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_ENDTX_CHIDX_Pos)

/* Register: NFCT_PUBLISH_AUTOCOLRESSTARTED */
/* Description: Publish configuration for event AUTOCOLRESSTARTED */

/* Bit 31 :   */
#define NFCT_PUBLISH_AUTOCOLRESSTARTED_EN_Pos (31UL)
#define NFCT_PUBLISH_AUTOCOLRESSTARTED_EN_Msk (0x1UL << NFCT_PUBLISH_AUTOCOLRESSTARTED_EN_Pos)
#define NFCT_PUBLISH_AUTOCOLRESSTARTED_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_AUTOCOLRESSTARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event AUTOCOLRESSTARTED will publish to */
#define NFCT_PUBLISH_AUTOCOLRESSTARTED_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_AUTOCOLRESSTARTED_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_AUTOCOLRESSTARTED_CHIDX_Pos)

/* Register: NFCT_PUBLISH_COLLISION */
/* Description: Publish configuration for event COLLISION */

/* Bit 31 :   */
#define NFCT_PUBLISH_COLLISION_EN_Pos (31UL)
#define NFCT_PUBLISH_COLLISION_EN_Msk (0x1UL << NFCT_PUBLISH_COLLISION_EN_Pos)
#define NFCT_PUBLISH_COLLISION_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_COLLISION_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event COLLISION will publish to */
#define NFCT_PUBLISH_COLLISION_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_COLLISION_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_COLLISION_CHIDX_Pos)

/* Register: NFCT_PUBLISH_SELECTED */
/* Description: Publish configuration for event SELECTED */

/* Bit 31 :   */
#define NFCT_PUBLISH_SELECTED_EN_Pos (31UL)
#define NFCT_PUBLISH_SELECTED_EN_Msk (0x1UL << NFCT_PUBLISH_SELECTED_EN_Pos)
#define NFCT_PUBLISH_SELECTED_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_SELECTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event SELECTED will publish to */
#define NFCT_PUBLISH_SELECTED_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_SELECTED_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_SELECTED_CHIDX_Pos)

/* Register: NFCT_PUBLISH_STARTED */
/* Description: Publish configuration for event STARTED */

/* Bit 31 :   */
#define NFCT_PUBLISH_STARTED_EN_Pos (31UL)
#define NFCT_PUBLISH_STARTED_EN_Msk (0x1UL << NFCT_PUBLISH_STARTED_EN_Pos)
#define NFCT_PUBLISH_STARTED_EN_Disabled (0x0UL)
#define NFCT_PUBLISH_STARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STARTED will publish to */
#define NFCT_PUBLISH_STARTED_CHIDX_Pos (0UL)
#define NFCT_PUBLISH_STARTED_CHIDX_Msk (0xFFUL << NFCT_PUBLISH_STARTED_CHIDX_Pos)

/* Register: NFCT_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 5 : Shortcut between event TXFRAMEEND and task ENABLERXDATA */
#define NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Pos (5UL)
#define NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Msk (0x1UL << NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Pos)
#define NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Disabled (0x0UL)
#define NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Enabled (0x1UL)

/* Bit 1 : Shortcut between event FIELDLOST and task SENSE */
#define NFCT_SHORTS_FIELDLOST_SENSE_Pos (1UL)
#define NFCT_SHORTS_FIELDLOST_SENSE_Msk (0x1UL << NFCT_SHORTS_FIELDLOST_SENSE_Pos)
#define NFCT_SHORTS_FIELDLOST_SENSE_Disabled (0x0UL)
#define NFCT_SHORTS_FIELDLOST_SENSE_Enabled (0x1UL)

/* Bit 0 : Shortcut between event FIELDDETECTED and task ACTIVATE */
#define NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Pos (0UL)
#define NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Msk (0x1UL << NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Pos)
#define NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Disabled (0x0UL)
#define NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Enabled (0x1UL)

/* Register: NFCT_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 20 : Enable or disable interrupt for event STARTED */
#define NFCT_INTEN_STARTED_Pos (20UL)
#define NFCT_INTEN_STARTED_Msk (0x1UL << NFCT_INTEN_STARTED_Pos)
#define NFCT_INTEN_STARTED_Disabled (0x0UL)
#define NFCT_INTEN_STARTED_Enabled (0x1UL)

/* Bit 19 : Enable or disable interrupt for event SELECTED */
#define NFCT_INTEN_SELECTED_Pos (19UL)
#define NFCT_INTEN_SELECTED_Msk (0x1UL << NFCT_INTEN_SELECTED_Pos)
#define NFCT_INTEN_SELECTED_Disabled (0x0UL)
#define NFCT_INTEN_SELECTED_Enabled (0x1UL)

/* Bit 18 : Enable or disable interrupt for event COLLISION */
#define NFCT_INTEN_COLLISION_Pos (18UL)
#define NFCT_INTEN_COLLISION_Msk (0x1UL << NFCT_INTEN_COLLISION_Pos)
#define NFCT_INTEN_COLLISION_Disabled (0x0UL)
#define NFCT_INTEN_COLLISION_Enabled (0x1UL)

/* Bit 14 : Enable or disable interrupt for event AUTOCOLRESSTARTED */
#define NFCT_INTEN_AUTOCOLRESSTARTED_Pos (14UL)
#define NFCT_INTEN_AUTOCOLRESSTARTED_Msk (0x1UL << NFCT_INTEN_AUTOCOLRESSTARTED_Pos)
#define NFCT_INTEN_AUTOCOLRESSTARTED_Disabled (0x0UL)
#define NFCT_INTEN_AUTOCOLRESSTARTED_Enabled (0x1UL)

/* Bit 12 : Enable or disable interrupt for event ENDTX */
#define NFCT_INTEN_ENDTX_Pos (12UL)
#define NFCT_INTEN_ENDTX_Msk (0x1UL << NFCT_INTEN_ENDTX_Pos)
#define NFCT_INTEN_ENDTX_Disabled (0x0UL)
#define NFCT_INTEN_ENDTX_Enabled (0x1UL)

/* Bit 11 : Enable or disable interrupt for event ENDRX */
#define NFCT_INTEN_ENDRX_Pos (11UL)
#define NFCT_INTEN_ENDRX_Msk (0x1UL << NFCT_INTEN_ENDRX_Pos)
#define NFCT_INTEN_ENDRX_Disabled (0x0UL)
#define NFCT_INTEN_ENDRX_Enabled (0x1UL)

/* Bit 10 : Enable or disable interrupt for event RXERROR */
#define NFCT_INTEN_RXERROR_Pos (10UL)
#define NFCT_INTEN_RXERROR_Msk (0x1UL << NFCT_INTEN_RXERROR_Pos)
#define NFCT_INTEN_RXERROR_Disabled (0x0UL)
#define NFCT_INTEN_RXERROR_Enabled (0x1UL)

/* Bit 7 : Enable or disable interrupt for event ERROR */
#define NFCT_INTEN_ERROR_Pos (7UL)
#define NFCT_INTEN_ERROR_Msk (0x1UL << NFCT_INTEN_ERROR_Pos)
#define NFCT_INTEN_ERROR_Disabled (0x0UL)
#define NFCT_INTEN_ERROR_Enabled (0x1UL)

/* Bit 6 : Enable or disable interrupt for event RXFRAMEEND */
#define NFCT_INTEN_RXFRAMEEND_Pos (6UL)
#define NFCT_INTEN_RXFRAMEEND_Msk (0x1UL << NFCT_INTEN_RXFRAMEEND_Pos)
#define NFCT_INTEN_RXFRAMEEND_Disabled (0x0UL)
#define NFCT_INTEN_RXFRAMEEND_Enabled (0x1UL)

/* Bit 5 : Enable or disable interrupt for event RXFRAMESTART */
#define NFCT_INTEN_RXFRAMESTART_Pos (5UL)
#define NFCT_INTEN_RXFRAMESTART_Msk (0x1UL << NFCT_INTEN_RXFRAMESTART_Pos)
#define NFCT_INTEN_RXFRAMESTART_Disabled (0x0UL)
#define NFCT_INTEN_RXFRAMESTART_Enabled (0x1UL)

/* Bit 4 : Enable or disable interrupt for event TXFRAMEEND */
#define NFCT_INTEN_TXFRAMEEND_Pos (4UL)
#define NFCT_INTEN_TXFRAMEEND_Msk (0x1UL << NFCT_INTEN_TXFRAMEEND_Pos)
#define NFCT_INTEN_TXFRAMEEND_Disabled (0x0UL)
#define NFCT_INTEN_TXFRAMEEND_Enabled (0x1UL)

/* Bit 3 : Enable or disable interrupt for event TXFRAMESTART */
#define NFCT_INTEN_TXFRAMESTART_Pos (3UL)
#define NFCT_INTEN_TXFRAMESTART_Msk (0x1UL << NFCT_INTEN_TXFRAMESTART_Pos)
#define NFCT_INTEN_TXFRAMESTART_Disabled (0x0UL)
#define NFCT_INTEN_TXFRAMESTART_Enabled (0x1UL)

/* Bit 2 : Enable or disable interrupt for event FIELDLOST */
#define NFCT_INTEN_FIELDLOST_Pos (2UL)
#define NFCT_INTEN_FIELDLOST_Msk (0x1UL << NFCT_INTEN_FIELDLOST_Pos)
#define NFCT_INTEN_FIELDLOST_Disabled (0x0UL)
#define NFCT_INTEN_FIELDLOST_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event FIELDDETECTED */
#define NFCT_INTEN_FIELDDETECTED_Pos (1UL)
#define NFCT_INTEN_FIELDDETECTED_Msk (0x1UL << NFCT_INTEN_FIELDDETECTED_Pos)
#define NFCT_INTEN_FIELDDETECTED_Disabled (0x0UL)
#define NFCT_INTEN_FIELDDETECTED_Enabled (0x1UL)

/* Bit 0 : Enable or disable interrupt for event READY */
#define NFCT_INTEN_READY_Pos (0UL)
#define NFCT_INTEN_READY_Msk (0x1UL << NFCT_INTEN_READY_Pos)
#define NFCT_INTEN_READY_Disabled (0x0UL)
#define NFCT_INTEN_READY_Enabled (0x1UL)

/* Register: NFCT_INTENSET */
/* Description: Enable interrupt */

/* Bit 20 : Write '1' to enable interrupt for event STARTED */
#define NFCT_INTENSET_STARTED_Pos (20UL)
#define NFCT_INTENSET_STARTED_Msk (0x1UL << NFCT_INTENSET_STARTED_Pos)
#define NFCT_INTENSET_STARTED_Disabled (0x0UL)
#define NFCT_INTENSET_STARTED_Enabled (0x1UL)
#define NFCT_INTENSET_STARTED_Set (0x1UL)

/* Bit 19 : Write '1' to enable interrupt for event SELECTED */
#define NFCT_INTENSET_SELECTED_Pos (19UL)
#define NFCT_INTENSET_SELECTED_Msk (0x1UL << NFCT_INTENSET_SELECTED_Pos)
#define NFCT_INTENSET_SELECTED_Disabled (0x0UL)
#define NFCT_INTENSET_SELECTED_Enabled (0x1UL)
#define NFCT_INTENSET_SELECTED_Set (0x1UL)

/* Bit 18 : Write '1' to enable interrupt for event COLLISION */
#define NFCT_INTENSET_COLLISION_Pos (18UL)
#define NFCT_INTENSET_COLLISION_Msk (0x1UL << NFCT_INTENSET_COLLISION_Pos)
#define NFCT_INTENSET_COLLISION_Disabled (0x0UL)
#define NFCT_INTENSET_COLLISION_Enabled (0x1UL)
#define NFCT_INTENSET_COLLISION_Set (0x1UL)

/* Bit 14 : Write '1' to enable interrupt for event AUTOCOLRESSTARTED */
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Pos (14UL)
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Msk (0x1UL << NFCT_INTENSET_AUTOCOLRESSTARTED_Pos)
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Disabled (0x0UL)
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Enabled (0x1UL)
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Set (0x1UL)

/* Bit 12 : Write '1' to enable interrupt for event ENDTX */
#define NFCT_INTENSET_ENDTX_Pos (12UL)
#define NFCT_INTENSET_ENDTX_Msk (0x1UL << NFCT_INTENSET_ENDTX_Pos)
#define NFCT_INTENSET_ENDTX_Disabled (0x0UL)
#define NFCT_INTENSET_ENDTX_Enabled (0x1UL)
#define NFCT_INTENSET_ENDTX_Set (0x1UL)

/* Bit 11 : Write '1' to enable interrupt for event ENDRX */
#define NFCT_INTENSET_ENDRX_Pos (11UL)
#define NFCT_INTENSET_ENDRX_Msk (0x1UL << NFCT_INTENSET_ENDRX_Pos)
#define NFCT_INTENSET_ENDRX_Disabled (0x0UL)
#define NFCT_INTENSET_ENDRX_Enabled (0x1UL)
#define NFCT_INTENSET_ENDRX_Set (0x1UL)

/* Bit 10 : Write '1' to enable interrupt for event RXERROR */
#define NFCT_INTENSET_RXERROR_Pos (10UL)
#define NFCT_INTENSET_RXERROR_Msk (0x1UL << NFCT_INTENSET_RXERROR_Pos)
#define NFCT_INTENSET_RXERROR_Disabled (0x0UL)
#define NFCT_INTENSET_RXERROR_Enabled (0x1UL)
#define NFCT_INTENSET_RXERROR_Set (0x1UL)

/* Bit 7 : Write '1' to enable interrupt for event ERROR */
#define NFCT_INTENSET_ERROR_Pos (7UL)
#define NFCT_INTENSET_ERROR_Msk (0x1UL << NFCT_INTENSET_ERROR_Pos)
#define NFCT_INTENSET_ERROR_Disabled (0x0UL)
#define NFCT_INTENSET_ERROR_Enabled (0x1UL)
#define NFCT_INTENSET_ERROR_Set (0x1UL)

/* Bit 6 : Write '1' to enable interrupt for event RXFRAMEEND */
#define NFCT_INTENSET_RXFRAMEEND_Pos (6UL)
#define NFCT_INTENSET_RXFRAMEEND_Msk (0x1UL << NFCT_INTENSET_RXFRAMEEND_Pos)
#define NFCT_INTENSET_RXFRAMEEND_Disabled (0x0UL)
#define NFCT_INTENSET_RXFRAMEEND_Enabled (0x1UL)
#define NFCT_INTENSET_RXFRAMEEND_Set (0x1UL)

/* Bit 5 : Write '1' to enable interrupt for event RXFRAMESTART */
#define NFCT_INTENSET_RXFRAMESTART_Pos (5UL)
#define NFCT_INTENSET_RXFRAMESTART_Msk (0x1UL << NFCT_INTENSET_RXFRAMESTART_Pos)
#define NFCT_INTENSET_RXFRAMESTART_Disabled (0x0UL)
#define NFCT_INTENSET_RXFRAMESTART_Enabled (0x1UL)
#define NFCT_INTENSET_RXFRAMESTART_Set (0x1UL)

/* Bit 4 : Write '1' to enable interrupt for event TXFRAMEEND */
#define NFCT_INTENSET_TXFRAMEEND_Pos (4UL)
#define NFCT_INTENSET_TXFRAMEEND_Msk (0x1UL << NFCT_INTENSET_TXFRAMEEND_Pos)
#define NFCT_INTENSET_TXFRAMEEND_Disabled (0x0UL)
#define NFCT_INTENSET_TXFRAMEEND_Enabled (0x1UL)
#define NFCT_INTENSET_TXFRAMEEND_Set (0x1UL)

/* Bit 3 : Write '1' to enable interrupt for event TXFRAMESTART */
#define NFCT_INTENSET_TXFRAMESTART_Pos (3UL)
#define NFCT_INTENSET_TXFRAMESTART_Msk (0x1UL << NFCT_INTENSET_TXFRAMESTART_Pos)
#define NFCT_INTENSET_TXFRAMESTART_Disabled (0x0UL)
#define NFCT_INTENSET_TXFRAMESTART_Enabled (0x1UL)
#define NFCT_INTENSET_TXFRAMESTART_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event FIELDLOST */
#define NFCT_INTENSET_FIELDLOST_Pos (2UL)
#define NFCT_INTENSET_FIELDLOST_Msk (0x1UL << NFCT_INTENSET_FIELDLOST_Pos)
#define NFCT_INTENSET_FIELDLOST_Disabled (0x0UL)
#define NFCT_INTENSET_FIELDLOST_Enabled (0x1UL)
#define NFCT_INTENSET_FIELDLOST_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event FIELDDETECTED */
#define NFCT_INTENSET_FIELDDETECTED_Pos (1UL)
#define NFCT_INTENSET_FIELDDETECTED_Msk (0x1UL << NFCT_INTENSET_FIELDDETECTED_Pos)
#define NFCT_INTENSET_FIELDDETECTED_Disabled (0x0UL)
#define NFCT_INTENSET_FIELDDETECTED_Enabled (0x1UL)
#define NFCT_INTENSET_FIELDDETECTED_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define NFCT_INTENSET_READY_Pos (0UL)
#define NFCT_INTENSET_READY_Msk (0x1UL << NFCT_INTENSET_READY_Pos)
#define NFCT_INTENSET_READY_Disabled (0x0UL)
#define NFCT_INTENSET_READY_Enabled (0x1UL)
#define NFCT_INTENSET_READY_Set (0x1UL)

/* Register: NFCT_INTENCLR */
/* Description: Disable interrupt */

/* Bit 20 : Write '1' to disable interrupt for event STARTED */
#define NFCT_INTENCLR_STARTED_Pos (20UL)
#define NFCT_INTENCLR_STARTED_Msk (0x1UL << NFCT_INTENCLR_STARTED_Pos)
#define NFCT_INTENCLR_STARTED_Disabled (0x0UL)
#define NFCT_INTENCLR_STARTED_Enabled (0x1UL)
#define NFCT_INTENCLR_STARTED_Clear (0x1UL)

/* Bit 19 : Write '1' to disable interrupt for event SELECTED */
#define NFCT_INTENCLR_SELECTED_Pos (19UL)
#define NFCT_INTENCLR_SELECTED_Msk (0x1UL << NFCT_INTENCLR_SELECTED_Pos)
#define NFCT_INTENCLR_SELECTED_Disabled (0x0UL)
#define NFCT_INTENCLR_SELECTED_Enabled (0x1UL)
#define NFCT_INTENCLR_SELECTED_Clear (0x1UL)

/* Bit 18 : Write '1' to disable interrupt for event COLLISION */
#define NFCT_INTENCLR_COLLISION_Pos (18UL)
#define NFCT_INTENCLR_COLLISION_Msk (0x1UL << NFCT_INTENCLR_COLLISION_Pos)
#define NFCT_INTENCLR_COLLISION_Disabled (0x0UL)
#define NFCT_INTENCLR_COLLISION_Enabled (0x1UL)
#define NFCT_INTENCLR_COLLISION_Clear (0x1UL)

/* Bit 14 : Write '1' to disable interrupt for event AUTOCOLRESSTARTED */
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Pos (14UL)
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Msk (0x1UL << NFCT_INTENCLR_AUTOCOLRESSTARTED_Pos)
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Disabled (0x0UL)
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Enabled (0x1UL)
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Clear (0x1UL)

/* Bit 12 : Write '1' to disable interrupt for event ENDTX */
#define NFCT_INTENCLR_ENDTX_Pos (12UL)
#define NFCT_INTENCLR_ENDTX_Msk (0x1UL << NFCT_INTENCLR_ENDTX_Pos)
#define NFCT_INTENCLR_ENDTX_Disabled (0x0UL)
#define NFCT_INTENCLR_ENDTX_Enabled (0x1UL)
#define NFCT_INTENCLR_ENDTX_Clear (0x1UL)

/* Bit 11 : Write '1' to disable interrupt for event ENDRX */
#define NFCT_INTENCLR_ENDRX_Pos (11UL)
#define NFCT_INTENCLR_ENDRX_Msk (0x1UL << NFCT_INTENCLR_ENDRX_Pos)
#define NFCT_INTENCLR_ENDRX_Disabled (0x0UL)
#define NFCT_INTENCLR_ENDRX_Enabled (0x1UL)
#define NFCT_INTENCLR_ENDRX_Clear (0x1UL)

/* Bit 10 : Write '1' to disable interrupt for event RXERROR */
#define NFCT_INTENCLR_RXERROR_Pos (10UL)
#define NFCT_INTENCLR_RXERROR_Msk (0x1UL << NFCT_INTENCLR_RXERROR_Pos)
#define NFCT_INTENCLR_RXERROR_Disabled (0x0UL)
#define NFCT_INTENCLR_RXERROR_Enabled (0x1UL)
#define NFCT_INTENCLR_RXERROR_Clear (0x1UL)

/* Bit 7 : Write '1' to disable interrupt for event ERROR */
#define NFCT_INTENCLR_ERROR_Pos (7UL)
#define NFCT_INTENCLR_ERROR_Msk (0x1UL << NFCT_INTENCLR_ERROR_Pos)
#define NFCT_INTENCLR_ERROR_Disabled (0x0UL)
#define NFCT_INTENCLR_ERROR_Enabled (0x1UL)
#define NFCT_INTENCLR_ERROR_Clear (0x1UL)

/* Bit 6 : Write '1' to disable interrupt for event RXFRAMEEND */
#define NFCT_INTENCLR_RXFRAMEEND_Pos (6UL)
#define NFCT_INTENCLR_RXFRAMEEND_Msk (0x1UL << NFCT_INTENCLR_RXFRAMEEND_Pos)
#define NFCT_INTENCLR_RXFRAMEEND_Disabled (0x0UL)
#define NFCT_INTENCLR_RXFRAMEEND_Enabled (0x1UL)
#define NFCT_INTENCLR_RXFRAMEEND_Clear (0x1UL)

/* Bit 5 : Write '1' to disable interrupt for event RXFRAMESTART */
#define NFCT_INTENCLR_RXFRAMESTART_Pos (5UL)
#define NFCT_INTENCLR_RXFRAMESTART_Msk (0x1UL << NFCT_INTENCLR_RXFRAMESTART_Pos)
#define NFCT_INTENCLR_RXFRAMESTART_Disabled (0x0UL)
#define NFCT_INTENCLR_RXFRAMESTART_Enabled (0x1UL)
#define NFCT_INTENCLR_RXFRAMESTART_Clear (0x1UL)

/* Bit 4 : Write '1' to disable interrupt for event TXFRAMEEND */
#define NFCT_INTENCLR_TXFRAMEEND_Pos (4UL)
#define NFCT_INTENCLR_TXFRAMEEND_Msk (0x1UL << NFCT_INTENCLR_TXFRAMEEND_Pos)
#define NFCT_INTENCLR_TXFRAMEEND_Disabled (0x0UL)
#define NFCT_INTENCLR_TXFRAMEEND_Enabled (0x1UL)
#define NFCT_INTENCLR_TXFRAMEEND_Clear (0x1UL)

/* Bit 3 : Write '1' to disable interrupt for event TXFRAMESTART */
#define NFCT_INTENCLR_TXFRAMESTART_Pos (3UL)
#define NFCT_INTENCLR_TXFRAMESTART_Msk (0x1UL << NFCT_INTENCLR_TXFRAMESTART_Pos)
#define NFCT_INTENCLR_TXFRAMESTART_Disabled (0x0UL)
#define NFCT_INTENCLR_TXFRAMESTART_Enabled (0x1UL)
#define NFCT_INTENCLR_TXFRAMESTART_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event FIELDLOST */
#define NFCT_INTENCLR_FIELDLOST_Pos (2UL)
#define NFCT_INTENCLR_FIELDLOST_Msk (0x1UL << NFCT_INTENCLR_FIELDLOST_Pos)
#define NFCT_INTENCLR_FIELDLOST_Disabled (0x0UL)
#define NFCT_INTENCLR_FIELDLOST_Enabled (0x1UL)
#define NFCT_INTENCLR_FIELDLOST_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event FIELDDETECTED */
#define NFCT_INTENCLR_FIELDDETECTED_Pos (1UL)
#define NFCT_INTENCLR_FIELDDETECTED_Msk (0x1UL << NFCT_INTENCLR_FIELDDETECTED_Pos)
#define NFCT_INTENCLR_FIELDDETECTED_Disabled (0x0UL)
#define NFCT_INTENCLR_FIELDDETECTED_Enabled (0x1UL)
#define NFCT_INTENCLR_FIELDDETECTED_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event READY */
#define NFCT_INTENCLR_READY_Pos (0UL)
#define NFCT_INTENCLR_READY_Msk (0x1UL << NFCT_INTENCLR_READY_Pos)
#define NFCT_INTENCLR_READY_Disabled (0x0UL)
#define NFCT_INTENCLR_READY_Enabled (0x1UL)
#define NFCT_INTENCLR_READY_Clear (0x1UL)

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
#define NFCT_FRAMESTATUS_RX_OVERRUN_NoOverrun (0x0UL)
#define NFCT_FRAMESTATUS_RX_OVERRUN_Overrun (0x1UL)

/* Bit 2 : Parity status of received frame */
#define NFCT_FRAMESTATUS_RX_PARITYSTATUS_Pos (2UL)
#define NFCT_FRAMESTATUS_RX_PARITYSTATUS_Msk (0x1UL << NFCT_FRAMESTATUS_RX_PARITYSTATUS_Pos)
#define NFCT_FRAMESTATUS_RX_PARITYSTATUS_ParityOK (0x0UL)
#define NFCT_FRAMESTATUS_RX_PARITYSTATUS_ParityError (0x1UL)

/* Bit 0 : No valid end of frame (EoF) detected */
#define NFCT_FRAMESTATUS_RX_CRCERROR_Pos (0UL)
#define NFCT_FRAMESTATUS_RX_CRCERROR_Msk (0x1UL << NFCT_FRAMESTATUS_RX_CRCERROR_Pos)
#define NFCT_FRAMESTATUS_RX_CRCERROR_CRCCorrect (0x0UL)
#define NFCT_FRAMESTATUS_RX_CRCERROR_CRCError (0x1UL)

/* Register: NFCT_NFCTAGSTATE */
/* Description: Current operating state of NFC tag */

/* Bits 2..0 : NfcTag state */
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Pos (0UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Msk (0x7UL << NFCT_NFCTAGSTATE_NFCTAGSTATE_Pos)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Disabled (0x0UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_RampUp (0x2UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Idle (0x3UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Receive (0x4UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_FrameDelay (0x5UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Transmit (0x6UL)

/* Register: NFCT_SLEEPSTATE */
/* Description: Sleep state during automatic collision resolution */

/* Bit 0 : Reflects the sleep state during automatic collision resolution. Set to IDLE 
        by a GOIDLE task. Set to SLEEP_A when a valid SLEEP_REQ frame is received or by a 
        GOSLEEP task. */
#define NFCT_SLEEPSTATE_SLEEPSTATE_Pos (0UL)
#define NFCT_SLEEPSTATE_SLEEPSTATE_Msk (0x1UL << NFCT_SLEEPSTATE_SLEEPSTATE_Pos)
#define NFCT_SLEEPSTATE_SLEEPSTATE_Idle (0x0UL)
#define NFCT_SLEEPSTATE_SLEEPSTATE_SleepA (0x1UL)

/* Register: NFCT_FIELDPRESENT */
/* Description: Indicates the presence or not of a valid field */

/* Bit 1 : Indicates if the low level has locked to the field */
#define NFCT_FIELDPRESENT_LOCKDETECT_Pos (1UL)
#define NFCT_FIELDPRESENT_LOCKDETECT_Msk (0x1UL << NFCT_FIELDPRESENT_LOCKDETECT_Pos)
#define NFCT_FIELDPRESENT_LOCKDETECT_NotLocked (0x0UL)
#define NFCT_FIELDPRESENT_LOCKDETECT_Locked (0x1UL)

/* Bit 0 : Indicates if a valid field is present. Available only in the activated state. */
#define NFCT_FIELDPRESENT_FIELDPRESENT_Pos (0UL)
#define NFCT_FIELDPRESENT_FIELDPRESENT_Msk (0x1UL << NFCT_FIELDPRESENT_FIELDPRESENT_Pos)
#define NFCT_FIELDPRESENT_FIELDPRESENT_NoField (0x0UL)
#define NFCT_FIELDPRESENT_FIELDPRESENT_FieldPresent (0x1UL)

/* Register: NFCT_FRAMEDELAYMIN */
/* Description: Minimum frame delay */

/* Bits 15..0 : Minimum frame delay in number of 13.56 MHz clock cycles */
#define NFCT_FRAMEDELAYMIN_FRAMEDELAYMIN_Pos (0UL)
#define NFCT_FRAMEDELAYMIN_FRAMEDELAYMIN_Msk (0xFFFFUL << NFCT_FRAMEDELAYMIN_FRAMEDELAYMIN_Pos)

/* Register: NFCT_FRAMEDELAYMAX */
/* Description: Maximum frame delay */

/* Bits 19..0 : Maximum frame delay in number of 13.56 MHz clock cycles */
#define NFCT_FRAMEDELAYMAX_FRAMEDELAYMAX_Pos (0UL)
#define NFCT_FRAMEDELAYMAX_FRAMEDELAYMAX_Msk (0xFFFFFUL << NFCT_FRAMEDELAYMAX_FRAMEDELAYMAX_Pos)

/* Register: NFCT_FRAMEDELAYMODE */
/* Description: Configuration register for the Frame Delay Timer */

/* Bits 1..0 : Configuration register for the Frame Delay Timer */
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_Pos (0UL)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_Msk (0x3UL << NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_Pos)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_FreeRun (0x0UL)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_Window (0x1UL)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_ExactVal (0x2UL)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_WindowGrid (0x3UL)

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
#define NFCT_TXD_FRAMECONFIG_CRCMODETX_NoCRCTX (0x0UL)
#define NFCT_TXD_FRAMECONFIG_CRCMODETX_CRC16TX (0x1UL)

/* Bit 2 : Adding SoF or not in TX frames */
#define NFCT_TXD_FRAMECONFIG_SOF_Pos (2UL)
#define NFCT_TXD_FRAMECONFIG_SOF_Msk (0x1UL << NFCT_TXD_FRAMECONFIG_SOF_Pos)
#define NFCT_TXD_FRAMECONFIG_SOF_NoSoF (0x0UL)
#define NFCT_TXD_FRAMECONFIG_SOF_SoF (0x1UL)

/* Bit 1 : Discarding unused bits at start or end of a frame */
#define NFCT_TXD_FRAMECONFIG_DISCARDMODE_Pos (1UL)
#define NFCT_TXD_FRAMECONFIG_DISCARDMODE_Msk (0x1UL << NFCT_TXD_FRAMECONFIG_DISCARDMODE_Pos)
#define NFCT_TXD_FRAMECONFIG_DISCARDMODE_DiscardEnd (0x0UL)
#define NFCT_TXD_FRAMECONFIG_DISCARDMODE_DiscardStart (0x1UL)

/* Bit 0 : Indicates if parity is added to the frame */
#define NFCT_TXD_FRAMECONFIG_PARITY_Pos (0UL)
#define NFCT_TXD_FRAMECONFIG_PARITY_Msk (0x1UL << NFCT_TXD_FRAMECONFIG_PARITY_Pos)
#define NFCT_TXD_FRAMECONFIG_PARITY_NoParity (0x0UL)
#define NFCT_TXD_FRAMECONFIG_PARITY_Parity (0x1UL)

/* Register: NFCT_TXD_AMOUNT */
/* Description: Size of outgoing frame */

/* Bits 11..3 : Number of complete bytes that shall be included in the frame, excluding CRC, parity, and framing. */
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
#define NFCT_RXD_FRAMECONFIG_CRCMODERX_NoCRCRX (0x0UL)
#define NFCT_RXD_FRAMECONFIG_CRCMODERX_CRC16RX (0x1UL)

/* Bit 2 : SoF expected or not in RX frames */
#define NFCT_RXD_FRAMECONFIG_SOF_Pos (2UL)
#define NFCT_RXD_FRAMECONFIG_SOF_Msk (0x1UL << NFCT_RXD_FRAMECONFIG_SOF_Pos)
#define NFCT_RXD_FRAMECONFIG_SOF_NoSoF (0x0UL)
#define NFCT_RXD_FRAMECONFIG_SOF_SoF (0x1UL)

/* Bit 0 : Indicates if parity expected in RX frame */
#define NFCT_RXD_FRAMECONFIG_PARITY_Pos (0UL)
#define NFCT_RXD_FRAMECONFIG_PARITY_Msk (0x1UL << NFCT_RXD_FRAMECONFIG_PARITY_Pos)
#define NFCT_RXD_FRAMECONFIG_PARITY_NoParity (0x0UL)
#define NFCT_RXD_FRAMECONFIG_PARITY_Parity (0x1UL)

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
/* Description: Pin select for Modulation control */

/* Bit 31 : Connection */
#define NFCT_MODULATIONPSEL_CONNECT_Pos (31UL)
#define NFCT_MODULATIONPSEL_CONNECT_Msk (0x1UL << NFCT_MODULATIONPSEL_CONNECT_Pos)
#define NFCT_MODULATIONPSEL_CONNECT_Connected (0x0UL)
#define NFCT_MODULATIONPSEL_CONNECT_Disconnected (0x1UL)

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
#define NFCT_AUTOCOLRESCONFIG_MODE_Enabled (0x0UL)
#define NFCT_AUTOCOLRESCONFIG_MODE_Disabled (0x1UL)

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
#define NFCT_SENSRES_NFCIDSIZE_NFCID1Single (0x0UL)
#define NFCT_SENSRES_NFCIDSIZE_NFCID1Double (0x1UL)
#define NFCT_SENSRES_NFCIDSIZE_NFCID1Triple (0x2UL)

/* Bit 5 : Reserved for future use. Shall be 0. */
#define NFCT_SENSRES_RFU5_Pos (5UL)
#define NFCT_SENSRES_RFU5_Msk (0x1UL << NFCT_SENSRES_RFU5_Pos)

/* Bits 4..0 : Bit frame SDD as defined by the b5:b1 of byte 1 in SENS_RES response in the NFC Forum, NFC Digital Protocol Technical Specification */
#define NFCT_SENSRES_BITFRAMESDD_Pos (0UL)
#define NFCT_SENSRES_BITFRAMESDD_Msk (0x1FUL << NFCT_SENSRES_BITFRAMESDD_Pos)
#define NFCT_SENSRES_BITFRAMESDD_SDD00000 (0x00UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD00001 (0x01UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD00010 (0x02UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD00100 (0x04UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD01000 (0x08UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD10000 (0x10UL)

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
/* Description: Non-volatile memory controller 0 */

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

/* Bits 2..0 : Program memory access mode. It is strongly recommended to only activate erase and write modes when they are actively used. */
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

/* Register: NVMC_CONFIGNS */
/* Description: Non-secure configuration register */

/* Bits 1..0 : Program memory access mode. It is strongly recommended to only activate erase and write modes when they are actively used. */
#define NVMC_CONFIGNS_WEN_Pos (0UL)
#define NVMC_CONFIGNS_WEN_Msk (0x3UL << NVMC_CONFIGNS_WEN_Pos)
#define NVMC_CONFIGNS_WEN_Ren (0x0UL)
#define NVMC_CONFIGNS_WEN_Wen (0x1UL)
#define NVMC_CONFIGNS_WEN_Een (0x2UL)

/* Register: NVMC_WRITEUICRNS */
/* Description: Non-secure APPROTECT enable register */

/* Bits 31..4 : Key to write in order to validate the write operation */
#define NVMC_WRITEUICRNS_KEY_Pos (4UL)
#define NVMC_WRITEUICRNS_KEY_Msk (0xFFFFFFFUL << NVMC_WRITEUICRNS_KEY_Pos)
#define NVMC_WRITEUICRNS_KEY_Keyvalid (0xAFBE5A7UL)

/* Bit 0 : Allow non-secure code to set APPROTECT */
#define NVMC_WRITEUICRNS_SET_Pos (0UL)
#define NVMC_WRITEUICRNS_SET_Msk (0x1UL << NVMC_WRITEUICRNS_SET_Pos)
#define NVMC_WRITEUICRNS_SET_Set (0x1UL)


/* Peripheral: OSCILLATORS */
/* Description: Oscillator control 0 */

/* Register: OSCILLATORS_XOSC32MCAPS */
/* Description: Programmable capacitance of XC1 and XC2 */

/* Bit 8 : Enable on-chip capacitors on XC1 and XC2 */
#define OSCILLATORS_XOSC32MCAPS_ENABLE_Pos (8UL)
#define OSCILLATORS_XOSC32MCAPS_ENABLE_Msk (0x1UL << OSCILLATORS_XOSC32MCAPS_ENABLE_Pos)
#define OSCILLATORS_XOSC32MCAPS_ENABLE_Disabled (0x0UL)
#define OSCILLATORS_XOSC32MCAPS_ENABLE_Enabled (0x1UL)

/* Bits 4..0 : Value representing capacitance, calculated using provided equation */
#define OSCILLATORS_XOSC32MCAPS_CAPVALUE_Pos (0UL)
#define OSCILLATORS_XOSC32MCAPS_CAPVALUE_Msk (0x1FUL << OSCILLATORS_XOSC32MCAPS_CAPVALUE_Pos)

/* Register: OSCILLATORS_XOSC32KI_BYPASS */
/* Description: Enable or disable bypass of LFCLK crystal oscillator with external clock source */

/* Bit 0 : Enable or disable bypass of LFCLK crystal oscillator with external clock source */
#define OSCILLATORS_XOSC32KI_BYPASS_BYPASS_Pos (0UL)
#define OSCILLATORS_XOSC32KI_BYPASS_BYPASS_Msk (0x1UL << OSCILLATORS_XOSC32KI_BYPASS_BYPASS_Pos)
#define OSCILLATORS_XOSC32KI_BYPASS_BYPASS_Disabled (0x0UL)
#define OSCILLATORS_XOSC32KI_BYPASS_BYPASS_Enabled (0x1UL)

/* Register: OSCILLATORS_XOSC32KI_INTCAP */
/* Description: Control usage of internal load capacitors */

/* Bits 1..0 : Control usage of internal load capacitors */
#define OSCILLATORS_XOSC32KI_INTCAP_INTCAP_Pos (0UL)
#define OSCILLATORS_XOSC32KI_INTCAP_INTCAP_Msk (0x3UL << OSCILLATORS_XOSC32KI_INTCAP_INTCAP_Pos)
#define OSCILLATORS_XOSC32KI_INTCAP_INTCAP_External (0x0UL)
#define OSCILLATORS_XOSC32KI_INTCAP_INTCAP_C6PF (0x1UL)
#define OSCILLATORS_XOSC32KI_INTCAP_INTCAP_C7PF (0x2UL)
#define OSCILLATORS_XOSC32KI_INTCAP_INTCAP_C9PF (0x3UL)


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


/* Peripheral: PDM */
/* Description: Pulse Density Modulation (Digital Microphone) Interface 0 */

/* Register: PDM_TASKS_START */
/* Description: Starts continuous PDM transfer */

/* Bit 0 : Starts continuous PDM transfer */
#define PDM_TASKS_START_TASKS_START_Pos (0UL)
#define PDM_TASKS_START_TASKS_START_Msk (0x1UL << PDM_TASKS_START_TASKS_START_Pos)
#define PDM_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: PDM_TASKS_STOP */
/* Description: Stops PDM transfer */

/* Bit 0 : Stops PDM transfer */
#define PDM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define PDM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << PDM_TASKS_STOP_TASKS_STOP_Pos)
#define PDM_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: PDM_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define PDM_SUBSCRIBE_START_EN_Pos (31UL)
#define PDM_SUBSCRIBE_START_EN_Msk (0x1UL << PDM_SUBSCRIBE_START_EN_Pos)
#define PDM_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define PDM_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define PDM_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define PDM_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << PDM_SUBSCRIBE_START_CHIDX_Pos)

/* Register: PDM_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define PDM_SUBSCRIBE_STOP_EN_Pos (31UL)
#define PDM_SUBSCRIBE_STOP_EN_Msk (0x1UL << PDM_SUBSCRIBE_STOP_EN_Pos)
#define PDM_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define PDM_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define PDM_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define PDM_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << PDM_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: PDM_EVENTS_STARTED */
/* Description: PDM transfer has started */

/* Bit 0 : PDM transfer has started */
#define PDM_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define PDM_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << PDM_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define PDM_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0x0UL)
#define PDM_EVENTS_STARTED_EVENTS_STARTED_Generated (0x1UL)

/* Register: PDM_EVENTS_STOPPED */
/* Description: PDM transfer has finished */

/* Bit 0 : PDM transfer has finished */
#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << PDM_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0x0UL)
#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (0x1UL)

/* Register: PDM_EVENTS_END */
/* Description: The PDM has written the last sample specified by SAMPLE.MAXCNT (or the last sample after a STOP task has been received) to Data RAM */

/* Bit 0 : The PDM has written the last sample specified by SAMPLE.MAXCNT (or the last sample after a STOP task has been received) to Data RAM */
#define PDM_EVENTS_END_EVENTS_END_Pos (0UL)
#define PDM_EVENTS_END_EVENTS_END_Msk (0x1UL << PDM_EVENTS_END_EVENTS_END_Pos)
#define PDM_EVENTS_END_EVENTS_END_NotGenerated (0x0UL)
#define PDM_EVENTS_END_EVENTS_END_Generated (0x1UL)

/* Register: PDM_PUBLISH_STARTED */
/* Description: Publish configuration for event STARTED */

/* Bit 31 :   */
#define PDM_PUBLISH_STARTED_EN_Pos (31UL)
#define PDM_PUBLISH_STARTED_EN_Msk (0x1UL << PDM_PUBLISH_STARTED_EN_Pos)
#define PDM_PUBLISH_STARTED_EN_Disabled (0x0UL)
#define PDM_PUBLISH_STARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STARTED will publish to */
#define PDM_PUBLISH_STARTED_CHIDX_Pos (0UL)
#define PDM_PUBLISH_STARTED_CHIDX_Msk (0xFFUL << PDM_PUBLISH_STARTED_CHIDX_Pos)

/* Register: PDM_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define PDM_PUBLISH_STOPPED_EN_Pos (31UL)
#define PDM_PUBLISH_STOPPED_EN_Msk (0x1UL << PDM_PUBLISH_STOPPED_EN_Pos)
#define PDM_PUBLISH_STOPPED_EN_Disabled (0x0UL)
#define PDM_PUBLISH_STOPPED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STOPPED will publish to */
#define PDM_PUBLISH_STOPPED_CHIDX_Pos (0UL)
#define PDM_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << PDM_PUBLISH_STOPPED_CHIDX_Pos)

/* Register: PDM_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define PDM_PUBLISH_END_EN_Pos (31UL)
#define PDM_PUBLISH_END_EN_Msk (0x1UL << PDM_PUBLISH_END_EN_Pos)
#define PDM_PUBLISH_END_EN_Disabled (0x0UL)
#define PDM_PUBLISH_END_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event END will publish to */
#define PDM_PUBLISH_END_CHIDX_Pos (0UL)
#define PDM_PUBLISH_END_CHIDX_Msk (0xFFUL << PDM_PUBLISH_END_CHIDX_Pos)

/* Register: PDM_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 2 : Enable or disable interrupt for event END */
#define PDM_INTEN_END_Pos (2UL)
#define PDM_INTEN_END_Msk (0x1UL << PDM_INTEN_END_Pos)
#define PDM_INTEN_END_Disabled (0x0UL)
#define PDM_INTEN_END_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event STOPPED */
#define PDM_INTEN_STOPPED_Pos (1UL)
#define PDM_INTEN_STOPPED_Msk (0x1UL << PDM_INTEN_STOPPED_Pos)
#define PDM_INTEN_STOPPED_Disabled (0x0UL)
#define PDM_INTEN_STOPPED_Enabled (0x1UL)

/* Bit 0 : Enable or disable interrupt for event STARTED */
#define PDM_INTEN_STARTED_Pos (0UL)
#define PDM_INTEN_STARTED_Msk (0x1UL << PDM_INTEN_STARTED_Pos)
#define PDM_INTEN_STARTED_Disabled (0x0UL)
#define PDM_INTEN_STARTED_Enabled (0x1UL)

/* Register: PDM_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event END */
#define PDM_INTENSET_END_Pos (2UL)
#define PDM_INTENSET_END_Msk (0x1UL << PDM_INTENSET_END_Pos)
#define PDM_INTENSET_END_Disabled (0x0UL)
#define PDM_INTENSET_END_Enabled (0x1UL)
#define PDM_INTENSET_END_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define PDM_INTENSET_STOPPED_Pos (1UL)
#define PDM_INTENSET_STOPPED_Msk (0x1UL << PDM_INTENSET_STOPPED_Pos)
#define PDM_INTENSET_STOPPED_Disabled (0x0UL)
#define PDM_INTENSET_STOPPED_Enabled (0x1UL)
#define PDM_INTENSET_STOPPED_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event STARTED */
#define PDM_INTENSET_STARTED_Pos (0UL)
#define PDM_INTENSET_STARTED_Msk (0x1UL << PDM_INTENSET_STARTED_Pos)
#define PDM_INTENSET_STARTED_Disabled (0x0UL)
#define PDM_INTENSET_STARTED_Enabled (0x1UL)
#define PDM_INTENSET_STARTED_Set (0x1UL)

/* Register: PDM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event END */
#define PDM_INTENCLR_END_Pos (2UL)
#define PDM_INTENCLR_END_Msk (0x1UL << PDM_INTENCLR_END_Pos)
#define PDM_INTENCLR_END_Disabled (0x0UL)
#define PDM_INTENCLR_END_Enabled (0x1UL)
#define PDM_INTENCLR_END_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define PDM_INTENCLR_STOPPED_Pos (1UL)
#define PDM_INTENCLR_STOPPED_Msk (0x1UL << PDM_INTENCLR_STOPPED_Pos)
#define PDM_INTENCLR_STOPPED_Disabled (0x0UL)
#define PDM_INTENCLR_STOPPED_Enabled (0x1UL)
#define PDM_INTENCLR_STOPPED_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event STARTED */
#define PDM_INTENCLR_STARTED_Pos (0UL)
#define PDM_INTENCLR_STARTED_Msk (0x1UL << PDM_INTENCLR_STARTED_Pos)
#define PDM_INTENCLR_STARTED_Disabled (0x0UL)
#define PDM_INTENCLR_STARTED_Enabled (0x1UL)
#define PDM_INTENCLR_STARTED_Clear (0x1UL)

/* Register: PDM_ENABLE */
/* Description: PDM module enable register */

/* Bit 0 : Enable or disable PDM module */
#define PDM_ENABLE_ENABLE_Pos (0UL)
#define PDM_ENABLE_ENABLE_Msk (0x1UL << PDM_ENABLE_ENABLE_Pos)
#define PDM_ENABLE_ENABLE_Disabled (0x0UL)
#define PDM_ENABLE_ENABLE_Enabled (0x1UL)

/* Register: PDM_PDMCLKCTRL */
/* Description: PDM clock generator control */

/* Bits 31..0 : PDM_CLK frequency configuration. Enumerations are deprecated, use
        PDMCLKCTRL equation to find the register value. The 12 least significant bits of the
        register are ignored and shall be set to zero. */
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
#define PDM_MODE_EDGE_LeftFalling (0x0UL)
#define PDM_MODE_EDGE_LeftRising (0x1UL)

/* Bit 0 : Mono or stereo operation */
#define PDM_MODE_OPERATION_Pos (0UL)
#define PDM_MODE_OPERATION_Msk (0x1UL << PDM_MODE_OPERATION_Pos)
#define PDM_MODE_OPERATION_Stereo (0x0UL)
#define PDM_MODE_OPERATION_Mono (0x1UL)

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
#define PDM_RATIO_RATIO_Ratio64 (0x0UL)
#define PDM_RATIO_RATIO_Ratio80 (0x1UL)

/* Register: PDM_PSEL_CLK */
/* Description: Pin number configuration for PDM CLK signal */

/* Bit 31 : Connection */
#define PDM_PSEL_CLK_CONNECT_Pos (31UL)
#define PDM_PSEL_CLK_CONNECT_Msk (0x1UL << PDM_PSEL_CLK_CONNECT_Pos)
#define PDM_PSEL_CLK_CONNECT_Connected (0x0UL)
#define PDM_PSEL_CLK_CONNECT_Disconnected (0x1UL)

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
#define PDM_PSEL_DIN_CONNECT_Connected (0x0UL)
#define PDM_PSEL_DIN_CONNECT_Disconnected (0x1UL)

/* Bit 5 : Port number */
#define PDM_PSEL_DIN_PORT_Pos (5UL)
#define PDM_PSEL_DIN_PORT_Msk (0x1UL << PDM_PSEL_DIN_PORT_Pos)

/* Bits 4..0 : Pin number */
#define PDM_PSEL_DIN_PIN_Pos (0UL)
#define PDM_PSEL_DIN_PIN_Msk (0x1FUL << PDM_PSEL_DIN_PIN_Pos)

/* Register: PDM_MCLKCONFIG */
/* Description: Master clock generator configuration */

/* Bit 0 : Master clock source selection */
#define PDM_MCLKCONFIG_SRC_Pos (0UL)
#define PDM_MCLKCONFIG_SRC_Msk (0x1UL << PDM_MCLKCONFIG_SRC_Pos)
#define PDM_MCLKCONFIG_SRC_PCLK32M (0x0UL)
#define PDM_MCLKCONFIG_SRC_ACLK (0x1UL)

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
/* Description: Power control 0 */

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


/* Peripheral: PWM */
/* Description: Pulse width modulation unit 0 */

/* Register: PWM_TASKS_STOP */
/* Description: Stops PWM pulse generation on all channels at the end of current PWM period, and stops sequence playback */

/* Bit 0 : Stops PWM pulse generation on all channels at the end of current PWM period, and stops sequence playback */
#define PWM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define PWM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << PWM_TASKS_STOP_TASKS_STOP_Pos)
#define PWM_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: PWM_TASKS_SEQSTART */
/* Description: Description collection: Loads the first PWM value on all enabled channels from sequence n, and starts playing that sequence at the rate defined in SEQ[n]REFRESH and/or DECODER.MODE. Causes PWM generation to start if not running. */

/* Bit 0 : Loads the first PWM value on all enabled channels from sequence n, and starts playing that sequence at the rate defined in SEQ[n]REFRESH and/or DECODER.MODE. Causes PWM generation to start if not running. */
#define PWM_TASKS_SEQSTART_TASKS_SEQSTART_Pos (0UL)
#define PWM_TASKS_SEQSTART_TASKS_SEQSTART_Msk (0x1UL << PWM_TASKS_SEQSTART_TASKS_SEQSTART_Pos)
#define PWM_TASKS_SEQSTART_TASKS_SEQSTART_Trigger (0x1UL)

/* Register: PWM_TASKS_NEXTSTEP */
/* Description: Steps by one value in the current sequence on all enabled channels if DECODER.MODE=NextStep. Does not cause PWM generation to start if not running. */

/* Bit 0 : Steps by one value in the current sequence on all enabled channels if DECODER.MODE=NextStep. Does not cause PWM generation to start if not running. */
#define PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Pos (0UL)
#define PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Msk (0x1UL << PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Pos)
#define PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Trigger (0x1UL)

/* Register: PWM_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define PWM_SUBSCRIBE_STOP_EN_Pos (31UL)
#define PWM_SUBSCRIBE_STOP_EN_Msk (0x1UL << PWM_SUBSCRIBE_STOP_EN_Pos)
#define PWM_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define PWM_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define PWM_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define PWM_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << PWM_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: PWM_SUBSCRIBE_SEQSTART */
/* Description: Description collection: Subscribe configuration for task SEQSTART[n] */

/* Bit 31 :   */
#define PWM_SUBSCRIBE_SEQSTART_EN_Pos (31UL)
#define PWM_SUBSCRIBE_SEQSTART_EN_Msk (0x1UL << PWM_SUBSCRIBE_SEQSTART_EN_Pos)
#define PWM_SUBSCRIBE_SEQSTART_EN_Disabled (0x0UL)
#define PWM_SUBSCRIBE_SEQSTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task SEQSTART[n] will subscribe to */
#define PWM_SUBSCRIBE_SEQSTART_CHIDX_Pos (0UL)
#define PWM_SUBSCRIBE_SEQSTART_CHIDX_Msk (0xFFUL << PWM_SUBSCRIBE_SEQSTART_CHIDX_Pos)

/* Register: PWM_SUBSCRIBE_NEXTSTEP */
/* Description: Subscribe configuration for task NEXTSTEP */

/* Bit 31 :   */
#define PWM_SUBSCRIBE_NEXTSTEP_EN_Pos (31UL)
#define PWM_SUBSCRIBE_NEXTSTEP_EN_Msk (0x1UL << PWM_SUBSCRIBE_NEXTSTEP_EN_Pos)
#define PWM_SUBSCRIBE_NEXTSTEP_EN_Disabled (0x0UL)
#define PWM_SUBSCRIBE_NEXTSTEP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task NEXTSTEP will subscribe to */
#define PWM_SUBSCRIBE_NEXTSTEP_CHIDX_Pos (0UL)
#define PWM_SUBSCRIBE_NEXTSTEP_CHIDX_Msk (0xFFUL << PWM_SUBSCRIBE_NEXTSTEP_CHIDX_Pos)

/* Register: PWM_EVENTS_STOPPED */
/* Description: Response to STOP task, emitted when PWM pulses are no longer generated */

/* Bit 0 : Response to STOP task, emitted when PWM pulses are no longer generated */
#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << PWM_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0x0UL)
#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (0x1UL)

/* Register: PWM_EVENTS_SEQSTARTED */
/* Description: Description collection: First PWM period started on sequence n */

/* Bit 0 : First PWM period started on sequence n */
#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Pos (0UL)
#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Msk (0x1UL << PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Pos)
#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_NotGenerated (0x0UL)
#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Generated (0x1UL)

/* Register: PWM_EVENTS_SEQEND */
/* Description: Description collection: Emitted at end of every sequence n, when last value from RAM has been applied to wave counter */

/* Bit 0 : Emitted at end of every sequence n, when last value from RAM has been applied to wave counter */
#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_Pos (0UL)
#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_Msk (0x1UL << PWM_EVENTS_SEQEND_EVENTS_SEQEND_Pos)
#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_NotGenerated (0x0UL)
#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_Generated (0x1UL)

/* Register: PWM_EVENTS_PWMPERIODEND */
/* Description: Emitted at the end of each PWM period */

/* Bit 0 : Emitted at the end of each PWM period */
#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Pos (0UL)
#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Msk (0x1UL << PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Pos)
#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_NotGenerated (0x0UL)
#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Generated (0x1UL)

/* Register: PWM_EVENTS_LOOPSDONE */
/* Description: Concatenated sequences have been played the amount of times defined in LOOP.CNT */

/* Bit 0 : Concatenated sequences have been played the amount of times defined in LOOP.CNT */
#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Pos (0UL)
#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Msk (0x1UL << PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Pos)
#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_NotGenerated (0x0UL)
#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Generated (0x1UL)

/* Register: PWM_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define PWM_PUBLISH_STOPPED_EN_Pos (31UL)
#define PWM_PUBLISH_STOPPED_EN_Msk (0x1UL << PWM_PUBLISH_STOPPED_EN_Pos)
#define PWM_PUBLISH_STOPPED_EN_Disabled (0x0UL)
#define PWM_PUBLISH_STOPPED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STOPPED will publish to */
#define PWM_PUBLISH_STOPPED_CHIDX_Pos (0UL)
#define PWM_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << PWM_PUBLISH_STOPPED_CHIDX_Pos)

/* Register: PWM_PUBLISH_SEQSTARTED */
/* Description: Description collection: Publish configuration for event SEQSTARTED[n] */

/* Bit 31 :   */
#define PWM_PUBLISH_SEQSTARTED_EN_Pos (31UL)
#define PWM_PUBLISH_SEQSTARTED_EN_Msk (0x1UL << PWM_PUBLISH_SEQSTARTED_EN_Pos)
#define PWM_PUBLISH_SEQSTARTED_EN_Disabled (0x0UL)
#define PWM_PUBLISH_SEQSTARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event SEQSTARTED[n] will publish to */
#define PWM_PUBLISH_SEQSTARTED_CHIDX_Pos (0UL)
#define PWM_PUBLISH_SEQSTARTED_CHIDX_Msk (0xFFUL << PWM_PUBLISH_SEQSTARTED_CHIDX_Pos)

/* Register: PWM_PUBLISH_SEQEND */
/* Description: Description collection: Publish configuration for event SEQEND[n] */

/* Bit 31 :   */
#define PWM_PUBLISH_SEQEND_EN_Pos (31UL)
#define PWM_PUBLISH_SEQEND_EN_Msk (0x1UL << PWM_PUBLISH_SEQEND_EN_Pos)
#define PWM_PUBLISH_SEQEND_EN_Disabled (0x0UL)
#define PWM_PUBLISH_SEQEND_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event SEQEND[n] will publish to */
#define PWM_PUBLISH_SEQEND_CHIDX_Pos (0UL)
#define PWM_PUBLISH_SEQEND_CHIDX_Msk (0xFFUL << PWM_PUBLISH_SEQEND_CHIDX_Pos)

/* Register: PWM_PUBLISH_PWMPERIODEND */
/* Description: Publish configuration for event PWMPERIODEND */

/* Bit 31 :   */
#define PWM_PUBLISH_PWMPERIODEND_EN_Pos (31UL)
#define PWM_PUBLISH_PWMPERIODEND_EN_Msk (0x1UL << PWM_PUBLISH_PWMPERIODEND_EN_Pos)
#define PWM_PUBLISH_PWMPERIODEND_EN_Disabled (0x0UL)
#define PWM_PUBLISH_PWMPERIODEND_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event PWMPERIODEND will publish to */
#define PWM_PUBLISH_PWMPERIODEND_CHIDX_Pos (0UL)
#define PWM_PUBLISH_PWMPERIODEND_CHIDX_Msk (0xFFUL << PWM_PUBLISH_PWMPERIODEND_CHIDX_Pos)

/* Register: PWM_PUBLISH_LOOPSDONE */
/* Description: Publish configuration for event LOOPSDONE */

/* Bit 31 :   */
#define PWM_PUBLISH_LOOPSDONE_EN_Pos (31UL)
#define PWM_PUBLISH_LOOPSDONE_EN_Msk (0x1UL << PWM_PUBLISH_LOOPSDONE_EN_Pos)
#define PWM_PUBLISH_LOOPSDONE_EN_Disabled (0x0UL)
#define PWM_PUBLISH_LOOPSDONE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event LOOPSDONE will publish to */
#define PWM_PUBLISH_LOOPSDONE_CHIDX_Pos (0UL)
#define PWM_PUBLISH_LOOPSDONE_CHIDX_Msk (0xFFUL << PWM_PUBLISH_LOOPSDONE_CHIDX_Pos)

/* Register: PWM_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 4 : Shortcut between event LOOPSDONE and task STOP */
#define PWM_SHORTS_LOOPSDONE_STOP_Pos (4UL)
#define PWM_SHORTS_LOOPSDONE_STOP_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_STOP_Pos)
#define PWM_SHORTS_LOOPSDONE_STOP_Disabled (0x0UL)
#define PWM_SHORTS_LOOPSDONE_STOP_Enabled (0x1UL)

/* Bit 3 : Shortcut between event LOOPSDONE and task SEQSTART[1] */
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Pos (3UL)
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_SEQSTART1_Pos)
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Disabled (0x0UL)
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Enabled (0x1UL)

/* Bit 2 : Shortcut between event LOOPSDONE and task SEQSTART[0] */
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Pos (2UL)
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_SEQSTART0_Pos)
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Disabled (0x0UL)
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Enabled (0x1UL)

/* Bit 1 : Shortcut between event SEQEND[1] and task STOP */
#define PWM_SHORTS_SEQEND1_STOP_Pos (1UL)
#define PWM_SHORTS_SEQEND1_STOP_Msk (0x1UL << PWM_SHORTS_SEQEND1_STOP_Pos)
#define PWM_SHORTS_SEQEND1_STOP_Disabled (0x0UL)
#define PWM_SHORTS_SEQEND1_STOP_Enabled (0x1UL)

/* Bit 0 : Shortcut between event SEQEND[0] and task STOP */
#define PWM_SHORTS_SEQEND0_STOP_Pos (0UL)
#define PWM_SHORTS_SEQEND0_STOP_Msk (0x1UL << PWM_SHORTS_SEQEND0_STOP_Pos)
#define PWM_SHORTS_SEQEND0_STOP_Disabled (0x0UL)
#define PWM_SHORTS_SEQEND0_STOP_Enabled (0x1UL)

/* Register: PWM_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 7 : Enable or disable interrupt for event LOOPSDONE */
#define PWM_INTEN_LOOPSDONE_Pos (7UL)
#define PWM_INTEN_LOOPSDONE_Msk (0x1UL << PWM_INTEN_LOOPSDONE_Pos)
#define PWM_INTEN_LOOPSDONE_Disabled (0x0UL)
#define PWM_INTEN_LOOPSDONE_Enabled (0x1UL)

/* Bit 6 : Enable or disable interrupt for event PWMPERIODEND */
#define PWM_INTEN_PWMPERIODEND_Pos (6UL)
#define PWM_INTEN_PWMPERIODEND_Msk (0x1UL << PWM_INTEN_PWMPERIODEND_Pos)
#define PWM_INTEN_PWMPERIODEND_Disabled (0x0UL)
#define PWM_INTEN_PWMPERIODEND_Enabled (0x1UL)

/* Bit 5 : Enable or disable interrupt for event SEQEND[1] */
#define PWM_INTEN_SEQEND1_Pos (5UL)
#define PWM_INTEN_SEQEND1_Msk (0x1UL << PWM_INTEN_SEQEND1_Pos)
#define PWM_INTEN_SEQEND1_Disabled (0x0UL)
#define PWM_INTEN_SEQEND1_Enabled (0x1UL)

/* Bit 4 : Enable or disable interrupt for event SEQEND[0] */
#define PWM_INTEN_SEQEND0_Pos (4UL)
#define PWM_INTEN_SEQEND0_Msk (0x1UL << PWM_INTEN_SEQEND0_Pos)
#define PWM_INTEN_SEQEND0_Disabled (0x0UL)
#define PWM_INTEN_SEQEND0_Enabled (0x1UL)

/* Bit 3 : Enable or disable interrupt for event SEQSTARTED[1] */
#define PWM_INTEN_SEQSTARTED1_Pos (3UL)
#define PWM_INTEN_SEQSTARTED1_Msk (0x1UL << PWM_INTEN_SEQSTARTED1_Pos)
#define PWM_INTEN_SEQSTARTED1_Disabled (0x0UL)
#define PWM_INTEN_SEQSTARTED1_Enabled (0x1UL)

/* Bit 2 : Enable or disable interrupt for event SEQSTARTED[0] */
#define PWM_INTEN_SEQSTARTED0_Pos (2UL)
#define PWM_INTEN_SEQSTARTED0_Msk (0x1UL << PWM_INTEN_SEQSTARTED0_Pos)
#define PWM_INTEN_SEQSTARTED0_Disabled (0x0UL)
#define PWM_INTEN_SEQSTARTED0_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event STOPPED */
#define PWM_INTEN_STOPPED_Pos (1UL)
#define PWM_INTEN_STOPPED_Msk (0x1UL << PWM_INTEN_STOPPED_Pos)
#define PWM_INTEN_STOPPED_Disabled (0x0UL)
#define PWM_INTEN_STOPPED_Enabled (0x1UL)

/* Register: PWM_INTENSET */
/* Description: Enable interrupt */

/* Bit 7 : Write '1' to enable interrupt for event LOOPSDONE */
#define PWM_INTENSET_LOOPSDONE_Pos (7UL)
#define PWM_INTENSET_LOOPSDONE_Msk (0x1UL << PWM_INTENSET_LOOPSDONE_Pos)
#define PWM_INTENSET_LOOPSDONE_Disabled (0x0UL)
#define PWM_INTENSET_LOOPSDONE_Enabled (0x1UL)
#define PWM_INTENSET_LOOPSDONE_Set (0x1UL)

/* Bit 6 : Write '1' to enable interrupt for event PWMPERIODEND */
#define PWM_INTENSET_PWMPERIODEND_Pos (6UL)
#define PWM_INTENSET_PWMPERIODEND_Msk (0x1UL << PWM_INTENSET_PWMPERIODEND_Pos)
#define PWM_INTENSET_PWMPERIODEND_Disabled (0x0UL)
#define PWM_INTENSET_PWMPERIODEND_Enabled (0x1UL)
#define PWM_INTENSET_PWMPERIODEND_Set (0x1UL)

/* Bit 5 : Write '1' to enable interrupt for event SEQEND[1] */
#define PWM_INTENSET_SEQEND1_Pos (5UL)
#define PWM_INTENSET_SEQEND1_Msk (0x1UL << PWM_INTENSET_SEQEND1_Pos)
#define PWM_INTENSET_SEQEND1_Disabled (0x0UL)
#define PWM_INTENSET_SEQEND1_Enabled (0x1UL)
#define PWM_INTENSET_SEQEND1_Set (0x1UL)

/* Bit 4 : Write '1' to enable interrupt for event SEQEND[0] */
#define PWM_INTENSET_SEQEND0_Pos (4UL)
#define PWM_INTENSET_SEQEND0_Msk (0x1UL << PWM_INTENSET_SEQEND0_Pos)
#define PWM_INTENSET_SEQEND0_Disabled (0x0UL)
#define PWM_INTENSET_SEQEND0_Enabled (0x1UL)
#define PWM_INTENSET_SEQEND0_Set (0x1UL)

/* Bit 3 : Write '1' to enable interrupt for event SEQSTARTED[1] */
#define PWM_INTENSET_SEQSTARTED1_Pos (3UL)
#define PWM_INTENSET_SEQSTARTED1_Msk (0x1UL << PWM_INTENSET_SEQSTARTED1_Pos)
#define PWM_INTENSET_SEQSTARTED1_Disabled (0x0UL)
#define PWM_INTENSET_SEQSTARTED1_Enabled (0x1UL)
#define PWM_INTENSET_SEQSTARTED1_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event SEQSTARTED[0] */
#define PWM_INTENSET_SEQSTARTED0_Pos (2UL)
#define PWM_INTENSET_SEQSTARTED0_Msk (0x1UL << PWM_INTENSET_SEQSTARTED0_Pos)
#define PWM_INTENSET_SEQSTARTED0_Disabled (0x0UL)
#define PWM_INTENSET_SEQSTARTED0_Enabled (0x1UL)
#define PWM_INTENSET_SEQSTARTED0_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define PWM_INTENSET_STOPPED_Pos (1UL)
#define PWM_INTENSET_STOPPED_Msk (0x1UL << PWM_INTENSET_STOPPED_Pos)
#define PWM_INTENSET_STOPPED_Disabled (0x0UL)
#define PWM_INTENSET_STOPPED_Enabled (0x1UL)
#define PWM_INTENSET_STOPPED_Set (0x1UL)

/* Register: PWM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 7 : Write '1' to disable interrupt for event LOOPSDONE */
#define PWM_INTENCLR_LOOPSDONE_Pos (7UL)
#define PWM_INTENCLR_LOOPSDONE_Msk (0x1UL << PWM_INTENCLR_LOOPSDONE_Pos)
#define PWM_INTENCLR_LOOPSDONE_Disabled (0x0UL)
#define PWM_INTENCLR_LOOPSDONE_Enabled (0x1UL)
#define PWM_INTENCLR_LOOPSDONE_Clear (0x1UL)

/* Bit 6 : Write '1' to disable interrupt for event PWMPERIODEND */
#define PWM_INTENCLR_PWMPERIODEND_Pos (6UL)
#define PWM_INTENCLR_PWMPERIODEND_Msk (0x1UL << PWM_INTENCLR_PWMPERIODEND_Pos)
#define PWM_INTENCLR_PWMPERIODEND_Disabled (0x0UL)
#define PWM_INTENCLR_PWMPERIODEND_Enabled (0x1UL)
#define PWM_INTENCLR_PWMPERIODEND_Clear (0x1UL)

/* Bit 5 : Write '1' to disable interrupt for event SEQEND[1] */
#define PWM_INTENCLR_SEQEND1_Pos (5UL)
#define PWM_INTENCLR_SEQEND1_Msk (0x1UL << PWM_INTENCLR_SEQEND1_Pos)
#define PWM_INTENCLR_SEQEND1_Disabled (0x0UL)
#define PWM_INTENCLR_SEQEND1_Enabled (0x1UL)
#define PWM_INTENCLR_SEQEND1_Clear (0x1UL)

/* Bit 4 : Write '1' to disable interrupt for event SEQEND[0] */
#define PWM_INTENCLR_SEQEND0_Pos (4UL)
#define PWM_INTENCLR_SEQEND0_Msk (0x1UL << PWM_INTENCLR_SEQEND0_Pos)
#define PWM_INTENCLR_SEQEND0_Disabled (0x0UL)
#define PWM_INTENCLR_SEQEND0_Enabled (0x1UL)
#define PWM_INTENCLR_SEQEND0_Clear (0x1UL)

/* Bit 3 : Write '1' to disable interrupt for event SEQSTARTED[1] */
#define PWM_INTENCLR_SEQSTARTED1_Pos (3UL)
#define PWM_INTENCLR_SEQSTARTED1_Msk (0x1UL << PWM_INTENCLR_SEQSTARTED1_Pos)
#define PWM_INTENCLR_SEQSTARTED1_Disabled (0x0UL)
#define PWM_INTENCLR_SEQSTARTED1_Enabled (0x1UL)
#define PWM_INTENCLR_SEQSTARTED1_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event SEQSTARTED[0] */
#define PWM_INTENCLR_SEQSTARTED0_Pos (2UL)
#define PWM_INTENCLR_SEQSTARTED0_Msk (0x1UL << PWM_INTENCLR_SEQSTARTED0_Pos)
#define PWM_INTENCLR_SEQSTARTED0_Disabled (0x0UL)
#define PWM_INTENCLR_SEQSTARTED0_Enabled (0x1UL)
#define PWM_INTENCLR_SEQSTARTED0_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define PWM_INTENCLR_STOPPED_Pos (1UL)
#define PWM_INTENCLR_STOPPED_Msk (0x1UL << PWM_INTENCLR_STOPPED_Pos)
#define PWM_INTENCLR_STOPPED_Disabled (0x0UL)
#define PWM_INTENCLR_STOPPED_Enabled (0x1UL)
#define PWM_INTENCLR_STOPPED_Clear (0x1UL)

/* Register: PWM_ENABLE */
/* Description: PWM module enable register */

/* Bit 0 : Enable or disable PWM module */
#define PWM_ENABLE_ENABLE_Pos (0UL)
#define PWM_ENABLE_ENABLE_Msk (0x1UL << PWM_ENABLE_ENABLE_Pos)
#define PWM_ENABLE_ENABLE_Disabled (0x0UL)
#define PWM_ENABLE_ENABLE_Enabled (0x1UL)

/* Register: PWM_MODE */
/* Description: Selects operating mode of the wave counter */

/* Bit 0 : Selects up mode or up-and-down mode for the counter */
#define PWM_MODE_UPDOWN_Pos (0UL)
#define PWM_MODE_UPDOWN_Msk (0x1UL << PWM_MODE_UPDOWN_Pos)
#define PWM_MODE_UPDOWN_Up (0x0UL)
#define PWM_MODE_UPDOWN_UpAndDown (0x1UL)

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
#define PWM_PRESCALER_PRESCALER_DIV_1 (0x0UL)
#define PWM_PRESCALER_PRESCALER_DIV_2 (0x1UL)
#define PWM_PRESCALER_PRESCALER_DIV_4 (0x2UL)
#define PWM_PRESCALER_PRESCALER_DIV_8 (0x3UL)
#define PWM_PRESCALER_PRESCALER_DIV_16 (0x4UL)
#define PWM_PRESCALER_PRESCALER_DIV_32 (0x5UL)
#define PWM_PRESCALER_PRESCALER_DIV_64 (0x6UL)
#define PWM_PRESCALER_PRESCALER_DIV_128 (0x7UL)

/* Register: PWM_DECODER */
/* Description: Configuration of the decoder */

/* Bit 8 : Selects source for advancing the active sequence */
#define PWM_DECODER_MODE_Pos (8UL)
#define PWM_DECODER_MODE_Msk (0x1UL << PWM_DECODER_MODE_Pos)
#define PWM_DECODER_MODE_RefreshCount (0x0UL)
#define PWM_DECODER_MODE_NextStep (0x1UL)

/* Bits 1..0 : How a sequence is read from RAM and spread to the compare register */
#define PWM_DECODER_LOAD_Pos (0UL)
#define PWM_DECODER_LOAD_Msk (0x3UL << PWM_DECODER_LOAD_Pos)
#define PWM_DECODER_LOAD_Common (0x0UL)
#define PWM_DECODER_LOAD_Grouped (0x1UL)
#define PWM_DECODER_LOAD_Individual (0x2UL)
#define PWM_DECODER_LOAD_WaveForm (0x3UL)

/* Register: PWM_LOOP */
/* Description: Number of playbacks of a loop */

/* Bits 15..0 : Number of playbacks of pattern cycles */
#define PWM_LOOP_CNT_Pos (0UL)
#define PWM_LOOP_CNT_Msk (0xFFFFUL << PWM_LOOP_CNT_Pos)
#define PWM_LOOP_CNT_Disabled (0x0000UL)

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
#define PWM_SEQ_CNT_CNT_Disabled (0x0000UL)

/* Register: PWM_SEQ_REFRESH */
/* Description: Description cluster: Number of additional PWM periods between samples loaded into compare register */

/* Bits 23..0 : Number of additional PWM periods between samples loaded into compare register (load every REFRESH.CNT+1 PWM periods) */
#define PWM_SEQ_REFRESH_CNT_Pos (0UL)
#define PWM_SEQ_REFRESH_CNT_Msk (0xFFFFFFUL << PWM_SEQ_REFRESH_CNT_Pos)
#define PWM_SEQ_REFRESH_CNT_Continuous (0x000000UL)

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
#define PWM_PSEL_OUT_CONNECT_Connected (0x0UL)
#define PWM_PSEL_OUT_CONNECT_Disconnected (0x1UL)

/* Bit 5 : Port number */
#define PWM_PSEL_OUT_PORT_Pos (5UL)
#define PWM_PSEL_OUT_PORT_Msk (0x1UL << PWM_PSEL_OUT_PORT_Pos)

/* Bits 4..0 : Pin number */
#define PWM_PSEL_OUT_PIN_Pos (0UL)
#define PWM_PSEL_OUT_PIN_Msk (0x1FUL << PWM_PSEL_OUT_PIN_Pos)


/* Peripheral: QDEC */
/* Description: Quadrature Decoder 0 */

/* Register: QDEC_TASKS_START */
/* Description: Task starting the quadrature decoder */

/* Bit 0 : Task starting the quadrature decoder */
#define QDEC_TASKS_START_TASKS_START_Pos (0UL)
#define QDEC_TASKS_START_TASKS_START_Msk (0x1UL << QDEC_TASKS_START_TASKS_START_Pos)
#define QDEC_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: QDEC_TASKS_STOP */
/* Description: Task stopping the quadrature decoder */

/* Bit 0 : Task stopping the quadrature decoder */
#define QDEC_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define QDEC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << QDEC_TASKS_STOP_TASKS_STOP_Pos)
#define QDEC_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: QDEC_TASKS_READCLRACC */
/* Description: Read and clear ACC and ACCDBL */

/* Bit 0 : Read and clear ACC and ACCDBL */
#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Pos (0UL)
#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Msk (0x1UL << QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Pos)
#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Trigger (0x1UL)

/* Register: QDEC_TASKS_RDCLRACC */
/* Description: Read and clear ACC */

/* Bit 0 : Read and clear ACC */
#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Pos (0UL)
#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Msk (0x1UL << QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Pos)
#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Trigger (0x1UL)

/* Register: QDEC_TASKS_RDCLRDBL */
/* Description: Read and clear ACCDBL */

/* Bit 0 : Read and clear ACCDBL */
#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Pos (0UL)
#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Msk (0x1UL << QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Pos)
#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Trigger (0x1UL)

/* Register: QDEC_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define QDEC_SUBSCRIBE_START_EN_Pos (31UL)
#define QDEC_SUBSCRIBE_START_EN_Msk (0x1UL << QDEC_SUBSCRIBE_START_EN_Pos)
#define QDEC_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define QDEC_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define QDEC_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define QDEC_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << QDEC_SUBSCRIBE_START_CHIDX_Pos)

/* Register: QDEC_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define QDEC_SUBSCRIBE_STOP_EN_Pos (31UL)
#define QDEC_SUBSCRIBE_STOP_EN_Msk (0x1UL << QDEC_SUBSCRIBE_STOP_EN_Pos)
#define QDEC_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define QDEC_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define QDEC_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define QDEC_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << QDEC_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: QDEC_SUBSCRIBE_READCLRACC */
/* Description: Subscribe configuration for task READCLRACC */

/* Bit 31 :   */
#define QDEC_SUBSCRIBE_READCLRACC_EN_Pos (31UL)
#define QDEC_SUBSCRIBE_READCLRACC_EN_Msk (0x1UL << QDEC_SUBSCRIBE_READCLRACC_EN_Pos)
#define QDEC_SUBSCRIBE_READCLRACC_EN_Disabled (0x0UL)
#define QDEC_SUBSCRIBE_READCLRACC_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task READCLRACC will subscribe to */
#define QDEC_SUBSCRIBE_READCLRACC_CHIDX_Pos (0UL)
#define QDEC_SUBSCRIBE_READCLRACC_CHIDX_Msk (0xFFUL << QDEC_SUBSCRIBE_READCLRACC_CHIDX_Pos)

/* Register: QDEC_SUBSCRIBE_RDCLRACC */
/* Description: Subscribe configuration for task RDCLRACC */

/* Bit 31 :   */
#define QDEC_SUBSCRIBE_RDCLRACC_EN_Pos (31UL)
#define QDEC_SUBSCRIBE_RDCLRACC_EN_Msk (0x1UL << QDEC_SUBSCRIBE_RDCLRACC_EN_Pos)
#define QDEC_SUBSCRIBE_RDCLRACC_EN_Disabled (0x0UL)
#define QDEC_SUBSCRIBE_RDCLRACC_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task RDCLRACC will subscribe to */
#define QDEC_SUBSCRIBE_RDCLRACC_CHIDX_Pos (0UL)
#define QDEC_SUBSCRIBE_RDCLRACC_CHIDX_Msk (0xFFUL << QDEC_SUBSCRIBE_RDCLRACC_CHIDX_Pos)

/* Register: QDEC_SUBSCRIBE_RDCLRDBL */
/* Description: Subscribe configuration for task RDCLRDBL */

/* Bit 31 :   */
#define QDEC_SUBSCRIBE_RDCLRDBL_EN_Pos (31UL)
#define QDEC_SUBSCRIBE_RDCLRDBL_EN_Msk (0x1UL << QDEC_SUBSCRIBE_RDCLRDBL_EN_Pos)
#define QDEC_SUBSCRIBE_RDCLRDBL_EN_Disabled (0x0UL)
#define QDEC_SUBSCRIBE_RDCLRDBL_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task RDCLRDBL will subscribe to */
#define QDEC_SUBSCRIBE_RDCLRDBL_CHIDX_Pos (0UL)
#define QDEC_SUBSCRIBE_RDCLRDBL_CHIDX_Msk (0xFFUL << QDEC_SUBSCRIBE_RDCLRDBL_CHIDX_Pos)

/* Register: QDEC_EVENTS_SAMPLERDY */
/* Description: Event being generated for every new sample value written to the SAMPLE register */

/* Bit 0 : Event being generated for every new sample value written to the SAMPLE register */
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Pos (0UL)
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Msk (0x1UL << QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Pos)
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_NotGenerated (0x0UL)
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Generated (0x1UL)

/* Register: QDEC_EVENTS_REPORTRDY */
/* Description: Non-null report ready */

/* Bit 0 : Non-null report ready */
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Pos (0UL)
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Msk (0x1UL << QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Pos)
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_NotGenerated (0x0UL)
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Generated (0x1UL)

/* Register: QDEC_EVENTS_ACCOF */
/* Description: ACC or ACCDBL register overflow */

/* Bit 0 : ACC or ACCDBL register overflow */
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Pos (0UL)
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Msk (0x1UL << QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Pos)
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_NotGenerated (0x0UL)
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Generated (0x1UL)

/* Register: QDEC_EVENTS_DBLRDY */
/* Description: Double displacement(s) detected */

/* Bit 0 : Double displacement(s) detected */
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Pos (0UL)
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Msk (0x1UL << QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Pos)
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_NotGenerated (0x0UL)
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Generated (0x1UL)

/* Register: QDEC_EVENTS_STOPPED */
/* Description: QDEC has been stopped */

/* Bit 0 : QDEC has been stopped */
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0x0UL)
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Generated (0x1UL)

/* Register: QDEC_PUBLISH_SAMPLERDY */
/* Description: Publish configuration for event SAMPLERDY */

/* Bit 31 :   */
#define QDEC_PUBLISH_SAMPLERDY_EN_Pos (31UL)
#define QDEC_PUBLISH_SAMPLERDY_EN_Msk (0x1UL << QDEC_PUBLISH_SAMPLERDY_EN_Pos)
#define QDEC_PUBLISH_SAMPLERDY_EN_Disabled (0x0UL)
#define QDEC_PUBLISH_SAMPLERDY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event SAMPLERDY will publish to */
#define QDEC_PUBLISH_SAMPLERDY_CHIDX_Pos (0UL)
#define QDEC_PUBLISH_SAMPLERDY_CHIDX_Msk (0xFFUL << QDEC_PUBLISH_SAMPLERDY_CHIDX_Pos)

/* Register: QDEC_PUBLISH_REPORTRDY */
/* Description: Publish configuration for event REPORTRDY */

/* Bit 31 :   */
#define QDEC_PUBLISH_REPORTRDY_EN_Pos (31UL)
#define QDEC_PUBLISH_REPORTRDY_EN_Msk (0x1UL << QDEC_PUBLISH_REPORTRDY_EN_Pos)
#define QDEC_PUBLISH_REPORTRDY_EN_Disabled (0x0UL)
#define QDEC_PUBLISH_REPORTRDY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event REPORTRDY will publish to */
#define QDEC_PUBLISH_REPORTRDY_CHIDX_Pos (0UL)
#define QDEC_PUBLISH_REPORTRDY_CHIDX_Msk (0xFFUL << QDEC_PUBLISH_REPORTRDY_CHIDX_Pos)

/* Register: QDEC_PUBLISH_ACCOF */
/* Description: Publish configuration for event ACCOF */

/* Bit 31 :   */
#define QDEC_PUBLISH_ACCOF_EN_Pos (31UL)
#define QDEC_PUBLISH_ACCOF_EN_Msk (0x1UL << QDEC_PUBLISH_ACCOF_EN_Pos)
#define QDEC_PUBLISH_ACCOF_EN_Disabled (0x0UL)
#define QDEC_PUBLISH_ACCOF_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ACCOF will publish to */
#define QDEC_PUBLISH_ACCOF_CHIDX_Pos (0UL)
#define QDEC_PUBLISH_ACCOF_CHIDX_Msk (0xFFUL << QDEC_PUBLISH_ACCOF_CHIDX_Pos)

/* Register: QDEC_PUBLISH_DBLRDY */
/* Description: Publish configuration for event DBLRDY */

/* Bit 31 :   */
#define QDEC_PUBLISH_DBLRDY_EN_Pos (31UL)
#define QDEC_PUBLISH_DBLRDY_EN_Msk (0x1UL << QDEC_PUBLISH_DBLRDY_EN_Pos)
#define QDEC_PUBLISH_DBLRDY_EN_Disabled (0x0UL)
#define QDEC_PUBLISH_DBLRDY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event DBLRDY will publish to */
#define QDEC_PUBLISH_DBLRDY_CHIDX_Pos (0UL)
#define QDEC_PUBLISH_DBLRDY_CHIDX_Msk (0xFFUL << QDEC_PUBLISH_DBLRDY_CHIDX_Pos)

/* Register: QDEC_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define QDEC_PUBLISH_STOPPED_EN_Pos (31UL)
#define QDEC_PUBLISH_STOPPED_EN_Msk (0x1UL << QDEC_PUBLISH_STOPPED_EN_Pos)
#define QDEC_PUBLISH_STOPPED_EN_Disabled (0x0UL)
#define QDEC_PUBLISH_STOPPED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STOPPED will publish to */
#define QDEC_PUBLISH_STOPPED_CHIDX_Pos (0UL)
#define QDEC_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << QDEC_PUBLISH_STOPPED_CHIDX_Pos)

/* Register: QDEC_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 6 : Shortcut between event SAMPLERDY and task READCLRACC */
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Pos (6UL)
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Msk (0x1UL << QDEC_SHORTS_SAMPLERDY_READCLRACC_Pos)
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Disabled (0x0UL)
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Enabled (0x1UL)

/* Bit 5 : Shortcut between event DBLRDY and task STOP */
#define QDEC_SHORTS_DBLRDY_STOP_Pos (5UL)
#define QDEC_SHORTS_DBLRDY_STOP_Msk (0x1UL << QDEC_SHORTS_DBLRDY_STOP_Pos)
#define QDEC_SHORTS_DBLRDY_STOP_Disabled (0x0UL)
#define QDEC_SHORTS_DBLRDY_STOP_Enabled (0x1UL)

/* Bit 4 : Shortcut between event DBLRDY and task RDCLRDBL */
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Pos (4UL)
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Msk (0x1UL << QDEC_SHORTS_DBLRDY_RDCLRDBL_Pos)
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Disabled (0x0UL)
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Enabled (0x1UL)

/* Bit 3 : Shortcut between event REPORTRDY and task STOP */
#define QDEC_SHORTS_REPORTRDY_STOP_Pos (3UL)
#define QDEC_SHORTS_REPORTRDY_STOP_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_STOP_Pos)
#define QDEC_SHORTS_REPORTRDY_STOP_Disabled (0x0UL)
#define QDEC_SHORTS_REPORTRDY_STOP_Enabled (0x1UL)

/* Bit 2 : Shortcut between event REPORTRDY and task RDCLRACC */
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Pos (2UL)
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_RDCLRACC_Pos)
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Disabled (0x0UL)
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Enabled (0x1UL)

/* Bit 1 : Shortcut between event SAMPLERDY and task STOP */
#define QDEC_SHORTS_SAMPLERDY_STOP_Pos (1UL)
#define QDEC_SHORTS_SAMPLERDY_STOP_Msk (0x1UL << QDEC_SHORTS_SAMPLERDY_STOP_Pos)
#define QDEC_SHORTS_SAMPLERDY_STOP_Disabled (0x0UL)
#define QDEC_SHORTS_SAMPLERDY_STOP_Enabled (0x1UL)

/* Bit 0 : Shortcut between event REPORTRDY and task READCLRACC */
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Pos (0UL)
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_READCLRACC_Pos)
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Disabled (0x0UL)
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Enabled (0x1UL)

/* Register: QDEC_INTENSET */
/* Description: Enable interrupt */

/* Bit 4 : Write '1' to enable interrupt for event STOPPED */
#define QDEC_INTENSET_STOPPED_Pos (4UL)
#define QDEC_INTENSET_STOPPED_Msk (0x1UL << QDEC_INTENSET_STOPPED_Pos)
#define QDEC_INTENSET_STOPPED_Disabled (0x0UL)
#define QDEC_INTENSET_STOPPED_Enabled (0x1UL)
#define QDEC_INTENSET_STOPPED_Set (0x1UL)

/* Bit 3 : Write '1' to enable interrupt for event DBLRDY */
#define QDEC_INTENSET_DBLRDY_Pos (3UL)
#define QDEC_INTENSET_DBLRDY_Msk (0x1UL << QDEC_INTENSET_DBLRDY_Pos)
#define QDEC_INTENSET_DBLRDY_Disabled (0x0UL)
#define QDEC_INTENSET_DBLRDY_Enabled (0x1UL)
#define QDEC_INTENSET_DBLRDY_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event ACCOF */
#define QDEC_INTENSET_ACCOF_Pos (2UL)
#define QDEC_INTENSET_ACCOF_Msk (0x1UL << QDEC_INTENSET_ACCOF_Pos)
#define QDEC_INTENSET_ACCOF_Disabled (0x0UL)
#define QDEC_INTENSET_ACCOF_Enabled (0x1UL)
#define QDEC_INTENSET_ACCOF_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event REPORTRDY */
#define QDEC_INTENSET_REPORTRDY_Pos (1UL)
#define QDEC_INTENSET_REPORTRDY_Msk (0x1UL << QDEC_INTENSET_REPORTRDY_Pos)
#define QDEC_INTENSET_REPORTRDY_Disabled (0x0UL)
#define QDEC_INTENSET_REPORTRDY_Enabled (0x1UL)
#define QDEC_INTENSET_REPORTRDY_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event SAMPLERDY */
#define QDEC_INTENSET_SAMPLERDY_Pos (0UL)
#define QDEC_INTENSET_SAMPLERDY_Msk (0x1UL << QDEC_INTENSET_SAMPLERDY_Pos)
#define QDEC_INTENSET_SAMPLERDY_Disabled (0x0UL)
#define QDEC_INTENSET_SAMPLERDY_Enabled (0x1UL)
#define QDEC_INTENSET_SAMPLERDY_Set (0x1UL)

/* Register: QDEC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 4 : Write '1' to disable interrupt for event STOPPED */
#define QDEC_INTENCLR_STOPPED_Pos (4UL)
#define QDEC_INTENCLR_STOPPED_Msk (0x1UL << QDEC_INTENCLR_STOPPED_Pos)
#define QDEC_INTENCLR_STOPPED_Disabled (0x0UL)
#define QDEC_INTENCLR_STOPPED_Enabled (0x1UL)
#define QDEC_INTENCLR_STOPPED_Clear (0x1UL)

/* Bit 3 : Write '1' to disable interrupt for event DBLRDY */
#define QDEC_INTENCLR_DBLRDY_Pos (3UL)
#define QDEC_INTENCLR_DBLRDY_Msk (0x1UL << QDEC_INTENCLR_DBLRDY_Pos)
#define QDEC_INTENCLR_DBLRDY_Disabled (0x0UL)
#define QDEC_INTENCLR_DBLRDY_Enabled (0x1UL)
#define QDEC_INTENCLR_DBLRDY_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event ACCOF */
#define QDEC_INTENCLR_ACCOF_Pos (2UL)
#define QDEC_INTENCLR_ACCOF_Msk (0x1UL << QDEC_INTENCLR_ACCOF_Pos)
#define QDEC_INTENCLR_ACCOF_Disabled (0x0UL)
#define QDEC_INTENCLR_ACCOF_Enabled (0x1UL)
#define QDEC_INTENCLR_ACCOF_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event REPORTRDY */
#define QDEC_INTENCLR_REPORTRDY_Pos (1UL)
#define QDEC_INTENCLR_REPORTRDY_Msk (0x1UL << QDEC_INTENCLR_REPORTRDY_Pos)
#define QDEC_INTENCLR_REPORTRDY_Disabled (0x0UL)
#define QDEC_INTENCLR_REPORTRDY_Enabled (0x1UL)
#define QDEC_INTENCLR_REPORTRDY_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event SAMPLERDY */
#define QDEC_INTENCLR_SAMPLERDY_Pos (0UL)
#define QDEC_INTENCLR_SAMPLERDY_Msk (0x1UL << QDEC_INTENCLR_SAMPLERDY_Pos)
#define QDEC_INTENCLR_SAMPLERDY_Disabled (0x0UL)
#define QDEC_INTENCLR_SAMPLERDY_Enabled (0x1UL)
#define QDEC_INTENCLR_SAMPLERDY_Clear (0x1UL)

/* Register: QDEC_ENABLE */
/* Description: Enable the quadrature decoder */

/* Bit 0 : Enable or disable the quadrature decoder */
#define QDEC_ENABLE_ENABLE_Pos (0UL)
#define QDEC_ENABLE_ENABLE_Msk (0x1UL << QDEC_ENABLE_ENABLE_Pos)
#define QDEC_ENABLE_ENABLE_Disabled (0x0UL)
#define QDEC_ENABLE_ENABLE_Enabled (0x1UL)

/* Register: QDEC_LEDPOL */
/* Description: LED output pin polarity */

/* Bit 0 : LED output pin polarity */
#define QDEC_LEDPOL_LEDPOL_Pos (0UL)
#define QDEC_LEDPOL_LEDPOL_Msk (0x1UL << QDEC_LEDPOL_LEDPOL_Pos)
#define QDEC_LEDPOL_LEDPOL_ActiveLow (0x0UL)
#define QDEC_LEDPOL_LEDPOL_ActiveHigh (0x1UL)

/* Register: QDEC_SAMPLEPER */
/* Description: Sample period */

/* Bits 3..0 : Sample period. The SAMPLE register will be updated for every new sample */
#define QDEC_SAMPLEPER_SAMPLEPER_Pos (0UL)
#define QDEC_SAMPLEPER_SAMPLEPER_Msk (0xFUL << QDEC_SAMPLEPER_SAMPLEPER_Pos)
#define QDEC_SAMPLEPER_SAMPLEPER_128us (0x0UL)
#define QDEC_SAMPLEPER_SAMPLEPER_256us (0x1UL)
#define QDEC_SAMPLEPER_SAMPLEPER_512us (0x2UL)
#define QDEC_SAMPLEPER_SAMPLEPER_1024us (0x3UL)
#define QDEC_SAMPLEPER_SAMPLEPER_2048us (0x4UL)
#define QDEC_SAMPLEPER_SAMPLEPER_4096us (0x5UL)
#define QDEC_SAMPLEPER_SAMPLEPER_8192us (0x6UL)
#define QDEC_SAMPLEPER_SAMPLEPER_16384us (0x7UL)
#define QDEC_SAMPLEPER_SAMPLEPER_32ms (0x8UL)
#define QDEC_SAMPLEPER_SAMPLEPER_65ms (0x9UL)
#define QDEC_SAMPLEPER_SAMPLEPER_131ms (0xAUL)

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
#define QDEC_REPORTPER_REPORTPER_10Smpl (0x0UL)
#define QDEC_REPORTPER_REPORTPER_40Smpl (0x1UL)
#define QDEC_REPORTPER_REPORTPER_80Smpl (0x2UL)
#define QDEC_REPORTPER_REPORTPER_120Smpl (0x3UL)
#define QDEC_REPORTPER_REPORTPER_160Smpl (0x4UL)
#define QDEC_REPORTPER_REPORTPER_200Smpl (0x5UL)
#define QDEC_REPORTPER_REPORTPER_240Smpl (0x6UL)
#define QDEC_REPORTPER_REPORTPER_280Smpl (0x7UL)
#define QDEC_REPORTPER_REPORTPER_1Smpl (0x8UL)

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
#define QDEC_PSEL_LED_CONNECT_Connected (0x0UL)
#define QDEC_PSEL_LED_CONNECT_Disconnected (0x1UL)

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
#define QDEC_PSEL_A_CONNECT_Connected (0x0UL)
#define QDEC_PSEL_A_CONNECT_Disconnected (0x1UL)

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
#define QDEC_PSEL_B_CONNECT_Connected (0x0UL)
#define QDEC_PSEL_B_CONNECT_Disconnected (0x1UL)

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
#define QDEC_DBFEN_DBFEN_Disabled (0x0UL)
#define QDEC_DBFEN_DBFEN_Enabled (0x1UL)

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


/* Peripheral: QSPI */
/* Description: External flash interface 0 */

/* Register: QSPI_TASKS_ACTIVATE */
/* Description: Activate QSPI interface */

/* Bit 0 : Activate QSPI interface */
#define QSPI_TASKS_ACTIVATE_TASKS_ACTIVATE_Pos (0UL)
#define QSPI_TASKS_ACTIVATE_TASKS_ACTIVATE_Msk (0x1UL << QSPI_TASKS_ACTIVATE_TASKS_ACTIVATE_Pos)
#define QSPI_TASKS_ACTIVATE_TASKS_ACTIVATE_Trigger (0x1UL)

/* Register: QSPI_TASKS_READSTART */
/* Description: Start transfer from external flash memory to internal RAM */

/* Bit 0 : Start transfer from external flash memory to internal RAM */
#define QSPI_TASKS_READSTART_TASKS_READSTART_Pos (0UL)
#define QSPI_TASKS_READSTART_TASKS_READSTART_Msk (0x1UL << QSPI_TASKS_READSTART_TASKS_READSTART_Pos)
#define QSPI_TASKS_READSTART_TASKS_READSTART_Trigger (0x1UL)

/* Register: QSPI_TASKS_WRITESTART */
/* Description: Start transfer from internal RAM to external flash memory */

/* Bit 0 : Start transfer from internal RAM to external flash memory */
#define QSPI_TASKS_WRITESTART_TASKS_WRITESTART_Pos (0UL)
#define QSPI_TASKS_WRITESTART_TASKS_WRITESTART_Msk (0x1UL << QSPI_TASKS_WRITESTART_TASKS_WRITESTART_Pos)
#define QSPI_TASKS_WRITESTART_TASKS_WRITESTART_Trigger (0x1UL)

/* Register: QSPI_TASKS_ERASESTART */
/* Description: Start external flash memory erase operation */

/* Bit 0 : Start external flash memory erase operation */
#define QSPI_TASKS_ERASESTART_TASKS_ERASESTART_Pos (0UL)
#define QSPI_TASKS_ERASESTART_TASKS_ERASESTART_Msk (0x1UL << QSPI_TASKS_ERASESTART_TASKS_ERASESTART_Pos)
#define QSPI_TASKS_ERASESTART_TASKS_ERASESTART_Trigger (0x1UL)

/* Register: QSPI_TASKS_DEACTIVATE */
/* Description: Deactivate QSPI interface */

/* Bit 0 : Deactivate QSPI interface */
#define QSPI_TASKS_DEACTIVATE_TASKS_DEACTIVATE_Pos (0UL)
#define QSPI_TASKS_DEACTIVATE_TASKS_DEACTIVATE_Msk (0x1UL << QSPI_TASKS_DEACTIVATE_TASKS_DEACTIVATE_Pos)
#define QSPI_TASKS_DEACTIVATE_TASKS_DEACTIVATE_Trigger (0x1UL)

/* Register: QSPI_SUBSCRIBE_ACTIVATE */
/* Description: Subscribe configuration for task ACTIVATE */

/* Bit 31 :   */
#define QSPI_SUBSCRIBE_ACTIVATE_EN_Pos (31UL)
#define QSPI_SUBSCRIBE_ACTIVATE_EN_Msk (0x1UL << QSPI_SUBSCRIBE_ACTIVATE_EN_Pos)
#define QSPI_SUBSCRIBE_ACTIVATE_EN_Disabled (0x0UL)
#define QSPI_SUBSCRIBE_ACTIVATE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task ACTIVATE will subscribe to */
#define QSPI_SUBSCRIBE_ACTIVATE_CHIDX_Pos (0UL)
#define QSPI_SUBSCRIBE_ACTIVATE_CHIDX_Msk (0xFFUL << QSPI_SUBSCRIBE_ACTIVATE_CHIDX_Pos)

/* Register: QSPI_SUBSCRIBE_READSTART */
/* Description: Subscribe configuration for task READSTART */

/* Bit 31 :   */
#define QSPI_SUBSCRIBE_READSTART_EN_Pos (31UL)
#define QSPI_SUBSCRIBE_READSTART_EN_Msk (0x1UL << QSPI_SUBSCRIBE_READSTART_EN_Pos)
#define QSPI_SUBSCRIBE_READSTART_EN_Disabled (0x0UL)
#define QSPI_SUBSCRIBE_READSTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task READSTART will subscribe to */
#define QSPI_SUBSCRIBE_READSTART_CHIDX_Pos (0UL)
#define QSPI_SUBSCRIBE_READSTART_CHIDX_Msk (0xFFUL << QSPI_SUBSCRIBE_READSTART_CHIDX_Pos)

/* Register: QSPI_SUBSCRIBE_WRITESTART */
/* Description: Subscribe configuration for task WRITESTART */

/* Bit 31 :   */
#define QSPI_SUBSCRIBE_WRITESTART_EN_Pos (31UL)
#define QSPI_SUBSCRIBE_WRITESTART_EN_Msk (0x1UL << QSPI_SUBSCRIBE_WRITESTART_EN_Pos)
#define QSPI_SUBSCRIBE_WRITESTART_EN_Disabled (0x0UL)
#define QSPI_SUBSCRIBE_WRITESTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task WRITESTART will subscribe to */
#define QSPI_SUBSCRIBE_WRITESTART_CHIDX_Pos (0UL)
#define QSPI_SUBSCRIBE_WRITESTART_CHIDX_Msk (0xFFUL << QSPI_SUBSCRIBE_WRITESTART_CHIDX_Pos)

/* Register: QSPI_SUBSCRIBE_ERASESTART */
/* Description: Subscribe configuration for task ERASESTART */

/* Bit 31 :   */
#define QSPI_SUBSCRIBE_ERASESTART_EN_Pos (31UL)
#define QSPI_SUBSCRIBE_ERASESTART_EN_Msk (0x1UL << QSPI_SUBSCRIBE_ERASESTART_EN_Pos)
#define QSPI_SUBSCRIBE_ERASESTART_EN_Disabled (0x0UL)
#define QSPI_SUBSCRIBE_ERASESTART_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task ERASESTART will subscribe to */
#define QSPI_SUBSCRIBE_ERASESTART_CHIDX_Pos (0UL)
#define QSPI_SUBSCRIBE_ERASESTART_CHIDX_Msk (0xFFUL << QSPI_SUBSCRIBE_ERASESTART_CHIDX_Pos)

/* Register: QSPI_SUBSCRIBE_DEACTIVATE */
/* Description: Subscribe configuration for task DEACTIVATE */

/* Bit 31 :   */
#define QSPI_SUBSCRIBE_DEACTIVATE_EN_Pos (31UL)
#define QSPI_SUBSCRIBE_DEACTIVATE_EN_Msk (0x1UL << QSPI_SUBSCRIBE_DEACTIVATE_EN_Pos)
#define QSPI_SUBSCRIBE_DEACTIVATE_EN_Disabled (0x0UL)
#define QSPI_SUBSCRIBE_DEACTIVATE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task DEACTIVATE will subscribe to */
#define QSPI_SUBSCRIBE_DEACTIVATE_CHIDX_Pos (0UL)
#define QSPI_SUBSCRIBE_DEACTIVATE_CHIDX_Msk (0xFFUL << QSPI_SUBSCRIBE_DEACTIVATE_CHIDX_Pos)

/* Register: QSPI_EVENTS_READY */
/* Description: QSPI peripheral is ready. This event will be generated as a response to all QSPI tasks except DEACTIVATE. */

/* Bit 0 : QSPI peripheral is ready. This event will be generated as a response to all QSPI tasks except DEACTIVATE. */
#define QSPI_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define QSPI_EVENTS_READY_EVENTS_READY_Msk (0x1UL << QSPI_EVENTS_READY_EVENTS_READY_Pos)
#define QSPI_EVENTS_READY_EVENTS_READY_NotGenerated (0x0UL)
#define QSPI_EVENTS_READY_EVENTS_READY_Generated (0x1UL)

/* Register: QSPI_PUBLISH_READY */
/* Description: Publish configuration for event READY */

/* Bit 31 :   */
#define QSPI_PUBLISH_READY_EN_Pos (31UL)
#define QSPI_PUBLISH_READY_EN_Msk (0x1UL << QSPI_PUBLISH_READY_EN_Pos)
#define QSPI_PUBLISH_READY_EN_Disabled (0x0UL)
#define QSPI_PUBLISH_READY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event READY will publish to */
#define QSPI_PUBLISH_READY_CHIDX_Pos (0UL)
#define QSPI_PUBLISH_READY_CHIDX_Msk (0xFFUL << QSPI_PUBLISH_READY_CHIDX_Pos)

/* Register: QSPI_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 0 : Enable or disable interrupt for event READY */
#define QSPI_INTEN_READY_Pos (0UL)
#define QSPI_INTEN_READY_Msk (0x1UL << QSPI_INTEN_READY_Pos)
#define QSPI_INTEN_READY_Disabled (0x0UL)
#define QSPI_INTEN_READY_Enabled (0x1UL)

/* Register: QSPI_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define QSPI_INTENSET_READY_Pos (0UL)
#define QSPI_INTENSET_READY_Msk (0x1UL << QSPI_INTENSET_READY_Pos)
#define QSPI_INTENSET_READY_Disabled (0x0UL)
#define QSPI_INTENSET_READY_Enabled (0x1UL)
#define QSPI_INTENSET_READY_Set (0x1UL)

/* Register: QSPI_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event READY */
#define QSPI_INTENCLR_READY_Pos (0UL)
#define QSPI_INTENCLR_READY_Msk (0x1UL << QSPI_INTENCLR_READY_Pos)
#define QSPI_INTENCLR_READY_Disabled (0x0UL)
#define QSPI_INTENCLR_READY_Enabled (0x1UL)
#define QSPI_INTENCLR_READY_Clear (0x1UL)

/* Register: QSPI_ENABLE */
/* Description: Enable QSPI peripheral and acquire the pins selected in PSELn registers */

/* Bit 0 : Enable or disable QSPI */
#define QSPI_ENABLE_ENABLE_Pos (0UL)
#define QSPI_ENABLE_ENABLE_Msk (0x1UL << QSPI_ENABLE_ENABLE_Pos)
#define QSPI_ENABLE_ENABLE_Disabled (0x0UL)
#define QSPI_ENABLE_ENABLE_Enabled (0x1UL)

/* Register: QSPI_READ_SRC */
/* Description: Flash memory source address */

/* Bits 31..0 : Word-aligned flash memory source address. */
#define QSPI_READ_SRC_SRC_Pos (0UL)
#define QSPI_READ_SRC_SRC_Msk (0xFFFFFFFFUL << QSPI_READ_SRC_SRC_Pos)

/* Register: QSPI_READ_DST */
/* Description: RAM destination address */

/* Bits 31..0 : Word-aligned RAM destination address. */
#define QSPI_READ_DST_DST_Pos (0UL)
#define QSPI_READ_DST_DST_Msk (0xFFFFFFFFUL << QSPI_READ_DST_DST_Pos)

/* Register: QSPI_READ_CNT */
/* Description: Read transfer length */

/* Bits 20..0 : Read transfer length in number of bytes. The length must be a multiple of 4 bytes. */
#define QSPI_READ_CNT_CNT_Pos (0UL)
#define QSPI_READ_CNT_CNT_Msk (0x1FFFFFUL << QSPI_READ_CNT_CNT_Pos)

/* Register: QSPI_WRITE_DST */
/* Description: Flash destination address */

/* Bits 31..0 : Word-aligned flash destination address. */
#define QSPI_WRITE_DST_DST_Pos (0UL)
#define QSPI_WRITE_DST_DST_Msk (0xFFFFFFFFUL << QSPI_WRITE_DST_DST_Pos)

/* Register: QSPI_WRITE_SRC */
/* Description: RAM source address */

/* Bits 31..0 : Word-aligned RAM source address. */
#define QSPI_WRITE_SRC_SRC_Pos (0UL)
#define QSPI_WRITE_SRC_SRC_Msk (0xFFFFFFFFUL << QSPI_WRITE_SRC_SRC_Pos)

/* Register: QSPI_WRITE_CNT */
/* Description: Write transfer length */

/* Bits 20..0 : Write transfer length in number of bytes. The length must be a multiple of 4 bytes. */
#define QSPI_WRITE_CNT_CNT_Pos (0UL)
#define QSPI_WRITE_CNT_CNT_Msk (0x1FFFFFUL << QSPI_WRITE_CNT_CNT_Pos)

/* Register: QSPI_ERASE_PTR */
/* Description: Start address of flash block to be erased */

/* Bits 31..0 : Word-aligned start address of block to be erased. */
#define QSPI_ERASE_PTR_PTR_Pos (0UL)
#define QSPI_ERASE_PTR_PTR_Msk (0xFFFFFFFFUL << QSPI_ERASE_PTR_PTR_Pos)

/* Register: QSPI_ERASE_LEN */
/* Description: Size of block to be erased. */

/* Bits 1..0 : LEN */
#define QSPI_ERASE_LEN_LEN_Pos (0UL)
#define QSPI_ERASE_LEN_LEN_Msk (0x3UL << QSPI_ERASE_LEN_LEN_Pos)
#define QSPI_ERASE_LEN_LEN_4KB (0x0UL)
#define QSPI_ERASE_LEN_LEN_64KB (0x1UL)
#define QSPI_ERASE_LEN_LEN_All (0x2UL)

/* Register: QSPI_PSEL_SCK */
/* Description: Pin select for serial clock SCK */

/* Bit 31 : Connection */
#define QSPI_PSEL_SCK_CONNECT_Pos (31UL)
#define QSPI_PSEL_SCK_CONNECT_Msk (0x1UL << QSPI_PSEL_SCK_CONNECT_Pos)
#define QSPI_PSEL_SCK_CONNECT_Connected (0x0UL)
#define QSPI_PSEL_SCK_CONNECT_Disconnected (0x1UL)

/* Bit 5 : Port number */
#define QSPI_PSEL_SCK_PORT_Pos (5UL)
#define QSPI_PSEL_SCK_PORT_Msk (0x1UL << QSPI_PSEL_SCK_PORT_Pos)

/* Bits 4..0 : Pin number */
#define QSPI_PSEL_SCK_PIN_Pos (0UL)
#define QSPI_PSEL_SCK_PIN_Msk (0x1FUL << QSPI_PSEL_SCK_PIN_Pos)

/* Register: QSPI_PSEL_CSN */
/* Description: Pin select for chip select signal CSN. */

/* Bit 31 : Connection */
#define QSPI_PSEL_CSN_CONNECT_Pos (31UL)
#define QSPI_PSEL_CSN_CONNECT_Msk (0x1UL << QSPI_PSEL_CSN_CONNECT_Pos)
#define QSPI_PSEL_CSN_CONNECT_Connected (0x0UL)
#define QSPI_PSEL_CSN_CONNECT_Disconnected (0x1UL)

/* Bit 5 : Port number */
#define QSPI_PSEL_CSN_PORT_Pos (5UL)
#define QSPI_PSEL_CSN_PORT_Msk (0x1UL << QSPI_PSEL_CSN_PORT_Pos)

/* Bits 4..0 : Pin number */
#define QSPI_PSEL_CSN_PIN_Pos (0UL)
#define QSPI_PSEL_CSN_PIN_Msk (0x1FUL << QSPI_PSEL_CSN_PIN_Pos)

/* Register: QSPI_PSEL_IO0 */
/* Description: Pin select for serial data MOSI/IO0. */

/* Bit 31 : Connection */
#define QSPI_PSEL_IO0_CONNECT_Pos (31UL)
#define QSPI_PSEL_IO0_CONNECT_Msk (0x1UL << QSPI_PSEL_IO0_CONNECT_Pos)
#define QSPI_PSEL_IO0_CONNECT_Connected (0x0UL)
#define QSPI_PSEL_IO0_CONNECT_Disconnected (0x1UL)

/* Bit 5 : Port number */
#define QSPI_PSEL_IO0_PORT_Pos (5UL)
#define QSPI_PSEL_IO0_PORT_Msk (0x1UL << QSPI_PSEL_IO0_PORT_Pos)

/* Bits 4..0 : Pin number */
#define QSPI_PSEL_IO0_PIN_Pos (0UL)
#define QSPI_PSEL_IO0_PIN_Msk (0x1FUL << QSPI_PSEL_IO0_PIN_Pos)

/* Register: QSPI_PSEL_IO1 */
/* Description: Pin select for serial data MISO/IO1. */

/* Bit 31 : Connection */
#define QSPI_PSEL_IO1_CONNECT_Pos (31UL)
#define QSPI_PSEL_IO1_CONNECT_Msk (0x1UL << QSPI_PSEL_IO1_CONNECT_Pos)
#define QSPI_PSEL_IO1_CONNECT_Connected (0x0UL)
#define QSPI_PSEL_IO1_CONNECT_Disconnected (0x1UL)

/* Bit 5 : Port number */
#define QSPI_PSEL_IO1_PORT_Pos (5UL)
#define QSPI_PSEL_IO1_PORT_Msk (0x1UL << QSPI_PSEL_IO1_PORT_Pos)

/* Bits 4..0 : Pin number */
#define QSPI_PSEL_IO1_PIN_Pos (0UL)
#define QSPI_PSEL_IO1_PIN_Msk (0x1FUL << QSPI_PSEL_IO1_PIN_Pos)

/* Register: QSPI_PSEL_IO2 */
/* Description: Pin select for serial data WP/IO2. */

/* Bit 31 : Connection */
#define QSPI_PSEL_IO2_CONNECT_Pos (31UL)
#define QSPI_PSEL_IO2_CONNECT_Msk (0x1UL << QSPI_PSEL_IO2_CONNECT_Pos)
#define QSPI_PSEL_IO2_CONNECT_Connected (0x0UL)
#define QSPI_PSEL_IO2_CONNECT_Disconnected (0x1UL)

/* Bit 5 : Port number */
#define QSPI_PSEL_IO2_PORT_Pos (5UL)
#define QSPI_PSEL_IO2_PORT_Msk (0x1UL << QSPI_PSEL_IO2_PORT_Pos)

/* Bits 4..0 : Pin number */
#define QSPI_PSEL_IO2_PIN_Pos (0UL)
#define QSPI_PSEL_IO2_PIN_Msk (0x1FUL << QSPI_PSEL_IO2_PIN_Pos)

/* Register: QSPI_PSEL_IO3 */
/* Description: Pin select for serial data HOLD/IO3. */

/* Bit 31 : Connection */
#define QSPI_PSEL_IO3_CONNECT_Pos (31UL)
#define QSPI_PSEL_IO3_CONNECT_Msk (0x1UL << QSPI_PSEL_IO3_CONNECT_Pos)
#define QSPI_PSEL_IO3_CONNECT_Connected (0x0UL)
#define QSPI_PSEL_IO3_CONNECT_Disconnected (0x1UL)

/* Bit 5 : Port number */
#define QSPI_PSEL_IO3_PORT_Pos (5UL)
#define QSPI_PSEL_IO3_PORT_Msk (0x1UL << QSPI_PSEL_IO3_PORT_Pos)

/* Bits 4..0 : Pin number */
#define QSPI_PSEL_IO3_PIN_Pos (0UL)
#define QSPI_PSEL_IO3_PIN_Msk (0x1FUL << QSPI_PSEL_IO3_PIN_Pos)

/* Register: QSPI_XIPOFFSET */
/* Description: Address offset into the external memory for Execute in Place operation. */

/* Bits 31..0 : Address offset into the external memory for Execute in Place operation. Value must be a multiple of 4. */
#define QSPI_XIPOFFSET_XIPOFFSET_Pos (0UL)
#define QSPI_XIPOFFSET_XIPOFFSET_Msk (0xFFFFFFFFUL << QSPI_XIPOFFSET_XIPOFFSET_Pos)

/* Register: QSPI_IFCONFIG0 */
/* Description: Interface configuration. */

/* Bit 12 : Page size for commands PP, PP2O, PP4O and PP4IO. */
#define QSPI_IFCONFIG0_PPSIZE_Pos (12UL)
#define QSPI_IFCONFIG0_PPSIZE_Msk (0x1UL << QSPI_IFCONFIG0_PPSIZE_Pos)
#define QSPI_IFCONFIG0_PPSIZE_256Bytes (0x0UL)
#define QSPI_IFCONFIG0_PPSIZE_512Bytes (0x1UL)

/* Bit 7 : Enable deep power-down mode (DPM) feature. */
#define QSPI_IFCONFIG0_DPMENABLE_Pos (7UL)
#define QSPI_IFCONFIG0_DPMENABLE_Msk (0x1UL << QSPI_IFCONFIG0_DPMENABLE_Pos)
#define QSPI_IFCONFIG0_DPMENABLE_Disable (0x0UL)
#define QSPI_IFCONFIG0_DPMENABLE_Enable (0x1UL)

/* Bit 6 : Addressing mode. */
#define QSPI_IFCONFIG0_ADDRMODE_Pos (6UL)
#define QSPI_IFCONFIG0_ADDRMODE_Msk (0x1UL << QSPI_IFCONFIG0_ADDRMODE_Pos)
#define QSPI_IFCONFIG0_ADDRMODE_24BIT (0x0UL)
#define QSPI_IFCONFIG0_ADDRMODE_32BIT (0x1UL)

/* Bits 5..3 : Configure number of data lines and opcode used for writing. */
#define QSPI_IFCONFIG0_WRITEOC_Pos (3UL)
#define QSPI_IFCONFIG0_WRITEOC_Msk (0x7UL << QSPI_IFCONFIG0_WRITEOC_Pos)
#define QSPI_IFCONFIG0_WRITEOC_PP (0x0UL)
#define QSPI_IFCONFIG0_WRITEOC_PP2O (0x1UL)
#define QSPI_IFCONFIG0_WRITEOC_PP4O (0x2UL)
#define QSPI_IFCONFIG0_WRITEOC_PP4IO (0x3UL)

/* Bits 2..0 : Configure number of data lines and opcode used for reading. */
#define QSPI_IFCONFIG0_READOC_Pos (0UL)
#define QSPI_IFCONFIG0_READOC_Msk (0x7UL << QSPI_IFCONFIG0_READOC_Pos)
#define QSPI_IFCONFIG0_READOC_FASTREAD (0x0UL)
#define QSPI_IFCONFIG0_READOC_READ2O (0x1UL)
#define QSPI_IFCONFIG0_READOC_READ2IO (0x2UL)
#define QSPI_IFCONFIG0_READOC_READ4O (0x3UL)
#define QSPI_IFCONFIG0_READOC_READ4IO (0x4UL)

/* Register: QSPI_XIPEN */
/* Description: Enable Execute in Place operation. */

/* Bit 0 : Enable XIP AHB Slave interface and access to XIP memory range */
#define QSPI_XIPEN_XIPEN_Pos (0UL)
#define QSPI_XIPEN_XIPEN_Msk (0x1UL << QSPI_XIPEN_XIPEN_Pos)
#define QSPI_XIPEN_XIPEN_Disable (0x0UL)
#define QSPI_XIPEN_XIPEN_Enable (0x1UL)

/* Register: QSPI_XIP_ENC_KEY0 */
/* Description: Bits 31:0 of XIP AES KEY */

/* Bits 31..0 : Bits 31:0 of XIP AES KEY */
#define QSPI_XIP_ENC_KEY0_KEY0_Pos (0UL)
#define QSPI_XIP_ENC_KEY0_KEY0_Msk (0xFFFFFFFFUL << QSPI_XIP_ENC_KEY0_KEY0_Pos)

/* Register: QSPI_XIP_ENC_KEY1 */
/* Description: Bits 63:32 of XIP AES KEY */

/* Bits 31..0 : Bits 63:32 of XIP AES KEY */
#define QSPI_XIP_ENC_KEY1_KEY1_Pos (0UL)
#define QSPI_XIP_ENC_KEY1_KEY1_Msk (0xFFFFFFFFUL << QSPI_XIP_ENC_KEY1_KEY1_Pos)

/* Register: QSPI_XIP_ENC_KEY2 */
/* Description: Bits 95:64 of XIP AES KEY */

/* Bits 31..0 : Bits 95:64 of XIP AES KEY */
#define QSPI_XIP_ENC_KEY2_KEY2_Pos (0UL)
#define QSPI_XIP_ENC_KEY2_KEY2_Msk (0xFFFFFFFFUL << QSPI_XIP_ENC_KEY2_KEY2_Pos)

/* Register: QSPI_XIP_ENC_KEY3 */
/* Description: Bits 127:96 of XIP AES KEY */

/* Bits 31..0 : Bits 127:96 of XIP AES KEY */
#define QSPI_XIP_ENC_KEY3_KEY3_Pos (0UL)
#define QSPI_XIP_ENC_KEY3_KEY3_Msk (0xFFFFFFFFUL << QSPI_XIP_ENC_KEY3_KEY3_Pos)

/* Register: QSPI_XIP_ENC_NONCE0 */
/* Description: Bits 31:0 of XIP NONCE */

/* Bits 31..0 : Bits 31:0 of XIP NONCE */
#define QSPI_XIP_ENC_NONCE0_NONCE0_Pos (0UL)
#define QSPI_XIP_ENC_NONCE0_NONCE0_Msk (0xFFFFFFFFUL << QSPI_XIP_ENC_NONCE0_NONCE0_Pos)

/* Register: QSPI_XIP_ENC_NONCE1 */
/* Description: Bits 63:32 of XIP NONCE */

/* Bits 31..0 : Bits 63:32 of XIP NONCE */
#define QSPI_XIP_ENC_NONCE1_NONCE1_Pos (0UL)
#define QSPI_XIP_ENC_NONCE1_NONCE1_Msk (0xFFFFFFFFUL << QSPI_XIP_ENC_NONCE1_NONCE1_Pos)

/* Register: QSPI_XIP_ENC_NONCE2 */
/* Description: Bits 95:64 of XIP NONCE */

/* Bits 31..0 : Bits 95:64 of XIP NONCE */
#define QSPI_XIP_ENC_NONCE2_NONCE2_Pos (0UL)
#define QSPI_XIP_ENC_NONCE2_NONCE2_Msk (0xFFFFFFFFUL << QSPI_XIP_ENC_NONCE2_NONCE2_Pos)

/* Register: QSPI_XIP_ENC_ENABLE */
/* Description: Enable stream cipher for XIP */

/* Bit 0 : Enable or disable stream cipher for XIP */
#define QSPI_XIP_ENC_ENABLE_ENABLE_Pos (0UL)
#define QSPI_XIP_ENC_ENABLE_ENABLE_Msk (0x1UL << QSPI_XIP_ENC_ENABLE_ENABLE_Pos)
#define QSPI_XIP_ENC_ENABLE_ENABLE_Disabled (0x0UL)
#define QSPI_XIP_ENC_ENABLE_ENABLE_Enabled (0x1UL)

/* Register: QSPI_DMA_ENC_KEY0 */
/* Description: Bits 31:0 of DMA AES KEY */

/* Bits 31..0 : Bits 31:0 of DMA AES KEY */
#define QSPI_DMA_ENC_KEY0_KEY0_Pos (0UL)
#define QSPI_DMA_ENC_KEY0_KEY0_Msk (0xFFFFFFFFUL << QSPI_DMA_ENC_KEY0_KEY0_Pos)

/* Register: QSPI_DMA_ENC_KEY1 */
/* Description: Bits 63:32 of DMA AES KEY */

/* Bits 31..0 : Bits 63:32 of DMA AES KEY */
#define QSPI_DMA_ENC_KEY1_KEY1_Pos (0UL)
#define QSPI_DMA_ENC_KEY1_KEY1_Msk (0xFFFFFFFFUL << QSPI_DMA_ENC_KEY1_KEY1_Pos)

/* Register: QSPI_DMA_ENC_KEY2 */
/* Description: Bits 95:64 of DMA AES KEY */

/* Bits 31..0 : Bits 95:64 of DMA AES KEY */
#define QSPI_DMA_ENC_KEY2_KEY2_Pos (0UL)
#define QSPI_DMA_ENC_KEY2_KEY2_Msk (0xFFFFFFFFUL << QSPI_DMA_ENC_KEY2_KEY2_Pos)

/* Register: QSPI_DMA_ENC_KEY3 */
/* Description: Bits 127:96 of DMA AES KEY */

/* Bits 31..0 : Bits 127:96 of DMA AES KEY */
#define QSPI_DMA_ENC_KEY3_KEY3_Pos (0UL)
#define QSPI_DMA_ENC_KEY3_KEY3_Msk (0xFFFFFFFFUL << QSPI_DMA_ENC_KEY3_KEY3_Pos)

/* Register: QSPI_DMA_ENC_NONCE0 */
/* Description: Bits 31:0 of DMA NONCE */

/* Bits 31..0 : Bits 31:0 of DMA NONCE */
#define QSPI_DMA_ENC_NONCE0_NONCE0_Pos (0UL)
#define QSPI_DMA_ENC_NONCE0_NONCE0_Msk (0xFFFFFFFFUL << QSPI_DMA_ENC_NONCE0_NONCE0_Pos)

/* Register: QSPI_DMA_ENC_NONCE1 */
/* Description: Bits 63:32 of DMA NONCE */

/* Bits 31..0 : Bits 63:32 of DMA NONCE */
#define QSPI_DMA_ENC_NONCE1_NONCE1_Pos (0UL)
#define QSPI_DMA_ENC_NONCE1_NONCE1_Msk (0xFFFFFFFFUL << QSPI_DMA_ENC_NONCE1_NONCE1_Pos)

/* Register: QSPI_DMA_ENC_NONCE2 */
/* Description: Bits 95:64 of DMA NONCE */

/* Bits 31..0 : Bits 95:64 of DMA NONCE */
#define QSPI_DMA_ENC_NONCE2_NONCE2_Pos (0UL)
#define QSPI_DMA_ENC_NONCE2_NONCE2_Msk (0xFFFFFFFFUL << QSPI_DMA_ENC_NONCE2_NONCE2_Pos)

/* Register: QSPI_DMA_ENC_ENABLE */
/* Description: Enable stream cipher for EasyDMA */

/* Bit 0 : Enable or disable stream cipher for EasyDMA */
#define QSPI_DMA_ENC_ENABLE_ENABLE_Pos (0UL)
#define QSPI_DMA_ENC_ENABLE_ENABLE_Msk (0x1UL << QSPI_DMA_ENC_ENABLE_ENABLE_Pos)
#define QSPI_DMA_ENC_ENABLE_ENABLE_Disabled (0x0UL)
#define QSPI_DMA_ENC_ENABLE_ENABLE_Enabled (0x1UL)

/* Register: QSPI_IFCONFIG1 */
/* Description: Interface configuration. */

/* Bits 31..28 : SCK frequency is derived from PCLK192M with SCK frequency = PCLK192M / (2*(SCKFREQ + 1)). */
#define QSPI_IFCONFIG1_SCKFREQ_Pos (28UL)
#define QSPI_IFCONFIG1_SCKFREQ_Msk (0xFUL << QSPI_IFCONFIG1_SCKFREQ_Pos)

/* Bit 25 : Select SPI mode. */
#define QSPI_IFCONFIG1_SPIMODE_Pos (25UL)
#define QSPI_IFCONFIG1_SPIMODE_Msk (0x1UL << QSPI_IFCONFIG1_SPIMODE_Pos)
#define QSPI_IFCONFIG1_SPIMODE_MODE0 (0x0UL)
#define QSPI_IFCONFIG1_SPIMODE_MODE3 (0x1UL)

/* Bit 24 : Enter/exit deep power-down mode (DPM) for external flash memory. */
#define QSPI_IFCONFIG1_DPMEN_Pos (24UL)
#define QSPI_IFCONFIG1_DPMEN_Msk (0x1UL << QSPI_IFCONFIG1_DPMEN_Pos)
#define QSPI_IFCONFIG1_DPMEN_Exit (0x0UL)
#define QSPI_IFCONFIG1_DPMEN_Enter (0x1UL)

/* Bits 7..0 : Minimum amount of time that the CSN pin must stay high before it can go low again. Value is specified in number of 32 MHz periods (31.25 ns). */
#define QSPI_IFCONFIG1_SCKDELAY_Pos (0UL)
#define QSPI_IFCONFIG1_SCKDELAY_Msk (0xFFUL << QSPI_IFCONFIG1_SCKDELAY_Pos)

/* Register: QSPI_STATUS */
/* Description: Status register. */

/* Bits 31..24 : Value of external flash device Status Register. When the external flash has two bytes status register this field includes the value of the low byte. */
#define QSPI_STATUS_SREG_Pos (24UL)
#define QSPI_STATUS_SREG_Msk (0xFFUL << QSPI_STATUS_SREG_Pos)

/* Bit 3 : Ready status. */
#define QSPI_STATUS_READY_Pos (3UL)
#define QSPI_STATUS_READY_Msk (0x1UL << QSPI_STATUS_READY_Pos)
#define QSPI_STATUS_READY_BUSY (0x0UL)
#define QSPI_STATUS_READY_READY (0x1UL)

/* Bit 2 : Deep power-down mode (DPM) status of external flash. */
#define QSPI_STATUS_DPM_Pos (2UL)
#define QSPI_STATUS_DPM_Msk (0x1UL << QSPI_STATUS_DPM_Pos)
#define QSPI_STATUS_DPM_Disabled (0x0UL)
#define QSPI_STATUS_DPM_Enabled (0x1UL)

/* Register: QSPI_DPMDUR */
/* Description: Set the duration required to enter/exit deep power-down mode (DPM). */

/* Bits 31..16 : Duration needed by external flash to exit DPM. Duration is given as EXIT * 256 * 31.25 ns. */
#define QSPI_DPMDUR_EXIT_Pos (16UL)
#define QSPI_DPMDUR_EXIT_Msk (0xFFFFUL << QSPI_DPMDUR_EXIT_Pos)

/* Bits 15..0 : Duration needed by external flash to enter DPM. Duration is given as ENTER * 256 * 31.25 ns */
#define QSPI_DPMDUR_ENTER_Pos (0UL)
#define QSPI_DPMDUR_ENTER_Msk (0xFFFFUL << QSPI_DPMDUR_ENTER_Pos)

/* Register: QSPI_ADDRCONF */
/* Description: Extended address configuration. */

/* Bit 27 : Send WREN (write enable opcode 0x06) before instruction. */
#define QSPI_ADDRCONF_WREN_Pos (27UL)
#define QSPI_ADDRCONF_WREN_Msk (0x1UL << QSPI_ADDRCONF_WREN_Pos)
#define QSPI_ADDRCONF_WREN_Disable (0x0UL)
#define QSPI_ADDRCONF_WREN_Enable (0x1UL)

/* Bit 26 : Wait for write complete before sending command. */
#define QSPI_ADDRCONF_WIPWAIT_Pos (26UL)
#define QSPI_ADDRCONF_WIPWAIT_Msk (0x1UL << QSPI_ADDRCONF_WIPWAIT_Pos)
#define QSPI_ADDRCONF_WIPWAIT_Disable (0x0UL)
#define QSPI_ADDRCONF_WIPWAIT_Enable (0x1UL)

/* Bits 25..24 : Extended addressing mode. */
#define QSPI_ADDRCONF_MODE_Pos (24UL)
#define QSPI_ADDRCONF_MODE_Msk (0x3UL << QSPI_ADDRCONF_MODE_Pos)
#define QSPI_ADDRCONF_MODE_NoInstr (0x0UL)
#define QSPI_ADDRCONF_MODE_Opcode (0x1UL)
#define QSPI_ADDRCONF_MODE_OpByte0 (0x2UL)
#define QSPI_ADDRCONF_MODE_All (0x3UL)

/* Bits 23..16 : Byte 1 following byte 0. */
#define QSPI_ADDRCONF_BYTE1_Pos (16UL)
#define QSPI_ADDRCONF_BYTE1_Msk (0xFFUL << QSPI_ADDRCONF_BYTE1_Pos)

/* Bits 15..8 : Byte 0 following opcode. */
#define QSPI_ADDRCONF_BYTE0_Pos (8UL)
#define QSPI_ADDRCONF_BYTE0_Msk (0xFFUL << QSPI_ADDRCONF_BYTE0_Pos)

/* Bits 7..0 : Opcode that enters the 32-bit addressing mode. */
#define QSPI_ADDRCONF_OPCODE_Pos (0UL)
#define QSPI_ADDRCONF_OPCODE_Msk (0xFFUL << QSPI_ADDRCONF_OPCODE_Pos)

/* Register: QSPI_CINSTRCONF */
/* Description: Custom instruction configuration register. */

/* Bit 17 : Stop (finalize) long frame transaction */
#define QSPI_CINSTRCONF_LFSTOP_Pos (17UL)
#define QSPI_CINSTRCONF_LFSTOP_Msk (0x1UL << QSPI_CINSTRCONF_LFSTOP_Pos)
#define QSPI_CINSTRCONF_LFSTOP_Stop (0x1UL)

/* Bit 16 : Enable Long frame mode. When enabled, a custom instruction transaction has to be ended by writing the LFSTOP field. */
#define QSPI_CINSTRCONF_LFEN_Pos (16UL)
#define QSPI_CINSTRCONF_LFEN_Msk (0x1UL << QSPI_CINSTRCONF_LFEN_Pos)
#define QSPI_CINSTRCONF_LFEN_Disable (0x0UL)
#define QSPI_CINSTRCONF_LFEN_Enable (0x1UL)

/* Bit 15 : Send WREN (write enable opcode 0x06) before instruction. */
#define QSPI_CINSTRCONF_WREN_Pos (15UL)
#define QSPI_CINSTRCONF_WREN_Msk (0x1UL << QSPI_CINSTRCONF_WREN_Pos)
#define QSPI_CINSTRCONF_WREN_Disable (0x0UL)
#define QSPI_CINSTRCONF_WREN_Enable (0x1UL)

/* Bit 14 : Wait for write complete before sending command. */
#define QSPI_CINSTRCONF_WIPWAIT_Pos (14UL)
#define QSPI_CINSTRCONF_WIPWAIT_Msk (0x1UL << QSPI_CINSTRCONF_WIPWAIT_Pos)
#define QSPI_CINSTRCONF_WIPWAIT_Disable (0x0UL)
#define QSPI_CINSTRCONF_WIPWAIT_Enable (0x1UL)

/* Bit 13 : Level of the IO3 pin (if connected) during transmission of custom instruction. */
#define QSPI_CINSTRCONF_LIO3_Pos (13UL)
#define QSPI_CINSTRCONF_LIO3_Msk (0x1UL << QSPI_CINSTRCONF_LIO3_Pos)

/* Bit 12 : Level of the IO2 pin (if connected) during transmission of custom instruction. */
#define QSPI_CINSTRCONF_LIO2_Pos (12UL)
#define QSPI_CINSTRCONF_LIO2_Msk (0x1UL << QSPI_CINSTRCONF_LIO2_Pos)

/* Bits 11..8 : Length of custom instruction in number of bytes. */
#define QSPI_CINSTRCONF_LENGTH_Pos (8UL)
#define QSPI_CINSTRCONF_LENGTH_Msk (0xFUL << QSPI_CINSTRCONF_LENGTH_Pos)
#define QSPI_CINSTRCONF_LENGTH_1B (0x1UL)
#define QSPI_CINSTRCONF_LENGTH_2B (0x2UL)
#define QSPI_CINSTRCONF_LENGTH_3B (0x3UL)
#define QSPI_CINSTRCONF_LENGTH_4B (0x4UL)
#define QSPI_CINSTRCONF_LENGTH_5B (0x5UL)
#define QSPI_CINSTRCONF_LENGTH_6B (0x6UL)
#define QSPI_CINSTRCONF_LENGTH_7B (0x7UL)
#define QSPI_CINSTRCONF_LENGTH_8B (0x8UL)
#define QSPI_CINSTRCONF_LENGTH_9B (0x9UL)

/* Bits 7..0 : Opcode of Custom instruction. */
#define QSPI_CINSTRCONF_OPCODE_Pos (0UL)
#define QSPI_CINSTRCONF_OPCODE_Msk (0xFFUL << QSPI_CINSTRCONF_OPCODE_Pos)

/* Register: QSPI_CINSTRDAT0 */
/* Description: Custom instruction data register 0. */

/* Bits 31..24 : Data byte 3 */
#define QSPI_CINSTRDAT0_BYTE3_Pos (24UL)
#define QSPI_CINSTRDAT0_BYTE3_Msk (0xFFUL << QSPI_CINSTRDAT0_BYTE3_Pos)

/* Bits 23..16 : Data byte 2 */
#define QSPI_CINSTRDAT0_BYTE2_Pos (16UL)
#define QSPI_CINSTRDAT0_BYTE2_Msk (0xFFUL << QSPI_CINSTRDAT0_BYTE2_Pos)

/* Bits 15..8 : Data byte 1 */
#define QSPI_CINSTRDAT0_BYTE1_Pos (8UL)
#define QSPI_CINSTRDAT0_BYTE1_Msk (0xFFUL << QSPI_CINSTRDAT0_BYTE1_Pos)

/* Bits 7..0 : Data byte 0 */
#define QSPI_CINSTRDAT0_BYTE0_Pos (0UL)
#define QSPI_CINSTRDAT0_BYTE0_Msk (0xFFUL << QSPI_CINSTRDAT0_BYTE0_Pos)

/* Register: QSPI_CINSTRDAT1 */
/* Description: Custom instruction data register 1. */

/* Bits 31..24 : Data byte 7 */
#define QSPI_CINSTRDAT1_BYTE7_Pos (24UL)
#define QSPI_CINSTRDAT1_BYTE7_Msk (0xFFUL << QSPI_CINSTRDAT1_BYTE7_Pos)

/* Bits 23..16 : Data byte 6 */
#define QSPI_CINSTRDAT1_BYTE6_Pos (16UL)
#define QSPI_CINSTRDAT1_BYTE6_Msk (0xFFUL << QSPI_CINSTRDAT1_BYTE6_Pos)

/* Bits 15..8 : Data byte 5 */
#define QSPI_CINSTRDAT1_BYTE5_Pos (8UL)
#define QSPI_CINSTRDAT1_BYTE5_Msk (0xFFUL << QSPI_CINSTRDAT1_BYTE5_Pos)

/* Bits 7..0 : Data byte 4 */
#define QSPI_CINSTRDAT1_BYTE4_Pos (0UL)
#define QSPI_CINSTRDAT1_BYTE4_Msk (0xFFUL << QSPI_CINSTRDAT1_BYTE4_Pos)

/* Register: QSPI_IFTIMING */
/* Description: SPI interface timing. */

/* Bits 10..8 : Timing related to sampling of the input serial data. The value of RXDELAY specifies the number of prescaled 192 MHz cycles delay from the the rising edge of the SPI Clock (SCK) until the input serial data is sampled. For example, if RXDELAY is set to 0, the input serial data is sampled on the rising edge of SCK. */
#define QSPI_IFTIMING_RXDELAY_Pos (8UL)
#define QSPI_IFTIMING_RXDELAY_Msk (0x7UL << QSPI_IFTIMING_RXDELAY_Pos)


/* Peripheral: REGULATORS */
/* Description: Voltage regulators 0 */

/* Register: REGULATORS_MAINREGSTATUS */
/* Description: Main supply status */

/* Bit 0 : VREGH status */
#define REGULATORS_MAINREGSTATUS_VREGH_Pos (0UL)
#define REGULATORS_MAINREGSTATUS_VREGH_Msk (0x1UL << REGULATORS_MAINREGSTATUS_VREGH_Pos)
#define REGULATORS_MAINREGSTATUS_VREGH_Inactive (0x0UL)
#define REGULATORS_MAINREGSTATUS_VREGH_Active (0x1UL)

/* Register: REGULATORS_SYSTEMOFF */
/* Description: System OFF register */

/* Bit 0 : Enable System OFF mode */
#define REGULATORS_SYSTEMOFF_SYSTEMOFF_Pos (0UL)
#define REGULATORS_SYSTEMOFF_SYSTEMOFF_Msk (0x1UL << REGULATORS_SYSTEMOFF_SYSTEMOFF_Pos)
#define REGULATORS_SYSTEMOFF_SYSTEMOFF_Enter (0x1UL)

/* Register: REGULATORS_POFCON */
/* Description: Power-fail comparator configuration */

/* Bits 11..8 : Power-fail comparator threshold setting for voltage supply on VDDH */
#define REGULATORS_POFCON_THRESHOLDVDDH_Pos (8UL)
#define REGULATORS_POFCON_THRESHOLDVDDH_Msk (0xFUL << REGULATORS_POFCON_THRESHOLDVDDH_Pos)
#define REGULATORS_POFCON_THRESHOLDVDDH_V27 (0x0UL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V28 (0x1UL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V29 (0x2UL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V30 (0x3UL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V31 (0x4UL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V32 (0x5UL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V33 (0x6UL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V34 (0x7UL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V35 (0x8UL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V36 (0x9UL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V37 (0xAUL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V38 (0xBUL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V39 (0xCUL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V40 (0xDUL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V41 (0xEUL)
#define REGULATORS_POFCON_THRESHOLDVDDH_V42 (0xFUL)

/* Bits 4..1 : Power-fail comparator threshold setting */
#define REGULATORS_POFCON_THRESHOLD_Pos (1UL)
#define REGULATORS_POFCON_THRESHOLD_Msk (0xFUL << REGULATORS_POFCON_THRESHOLD_Pos)
#define REGULATORS_POFCON_THRESHOLD_V19 (0x6UL)
#define REGULATORS_POFCON_THRESHOLD_V20 (0x7UL)
#define REGULATORS_POFCON_THRESHOLD_V21 (0x8UL)
#define REGULATORS_POFCON_THRESHOLD_V22 (0x9UL)
#define REGULATORS_POFCON_THRESHOLD_V23 (0xAUL)
#define REGULATORS_POFCON_THRESHOLD_V24 (0xBUL)
#define REGULATORS_POFCON_THRESHOLD_V25 (0xCUL)
#define REGULATORS_POFCON_THRESHOLD_V26 (0xDUL)
#define REGULATORS_POFCON_THRESHOLD_V27 (0xEUL)
#define REGULATORS_POFCON_THRESHOLD_V28 (0xFUL)

/* Bit 0 : Enable or disable power-fail comparator */
#define REGULATORS_POFCON_POF_Pos (0UL)
#define REGULATORS_POFCON_POF_Msk (0x1UL << REGULATORS_POFCON_POF_Pos)
#define REGULATORS_POFCON_POF_Disabled (0x0UL)
#define REGULATORS_POFCON_POF_Enabled (0x1UL)

/* Register: REGULATORS_VREGMAIN_DCDCEN */
/* Description: DC/DC enable register for VREGMAIN */

/* Bit 0 : Enable or disable DC/DC converter */
#define REGULATORS_VREGMAIN_DCDCEN_DCDCEN_Pos (0UL)
#define REGULATORS_VREGMAIN_DCDCEN_DCDCEN_Msk (0x1UL << REGULATORS_VREGMAIN_DCDCEN_DCDCEN_Pos)
#define REGULATORS_VREGMAIN_DCDCEN_DCDCEN_Disabled (0x0UL)
#define REGULATORS_VREGMAIN_DCDCEN_DCDCEN_Enabled (0x1UL)

/* Register: REGULATORS_VREGRADIO_DCDCEN */
/* Description: DC/DC enable register for VREGRADIO */

/* Bit 0 : Enable or disable DC/DC converter */
#define REGULATORS_VREGRADIO_DCDCEN_DCDCEN_Pos (0UL)
#define REGULATORS_VREGRADIO_DCDCEN_DCDCEN_Msk (0x1UL << REGULATORS_VREGRADIO_DCDCEN_DCDCEN_Pos)
#define REGULATORS_VREGRADIO_DCDCEN_DCDCEN_Disabled (0x0UL)
#define REGULATORS_VREGRADIO_DCDCEN_DCDCEN_Enabled (0x1UL)

/* Register: REGULATORS_VREGH_DCDCEN */
/* Description: DC/DC enable register for VREGH */

/* Bit 0 : Enable or disable DC/DC converter */
#define REGULATORS_VREGH_DCDCEN_DCDCEN_Pos (0UL)
#define REGULATORS_VREGH_DCDCEN_DCDCEN_Msk (0x1UL << REGULATORS_VREGH_DCDCEN_DCDCEN_Pos)
#define REGULATORS_VREGH_DCDCEN_DCDCEN_Disabled (0x0UL)
#define REGULATORS_VREGH_DCDCEN_DCDCEN_Enabled (0x1UL)

/* Register: REGULATORS_VREGH_EXTSILENTEN */
/* Description: When VREGH is in DC/DC mode, enable VREGH silent mode to supply external components from VDD. Silent mode has lower voltage ripple. Silent mode is used when DC/DC is enabled, and is ignored in LDO mode. Disabling silent mode reduces current consumption in sleep. */

/* Bit 0 : Enable silent external DC/DC supply */
#define REGULATORS_VREGH_EXTSILENTEN_EXTSILENTEN_Pos (0UL)
#define REGULATORS_VREGH_EXTSILENTEN_EXTSILENTEN_Msk (0x1UL << REGULATORS_VREGH_EXTSILENTEN_EXTSILENTEN_Pos)
#define REGULATORS_VREGH_EXTSILENTEN_EXTSILENTEN_Disabled (0x0UL)
#define REGULATORS_VREGH_EXTSILENTEN_EXTSILENTEN_Enabled (0x1UL)


/* Peripheral: RESET */
/* Description: Reset control 0 */

/* Register: RESET_RESETREAS */
/* Description: Reset reason */

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

/* Register: RESET_NETWORK_FORCEOFF */
/* Description: Force network core off */

/* Bit 0 : Force network core off */
#define RESET_NETWORK_FORCEOFF_FORCEOFF_Pos (0UL)
#define RESET_NETWORK_FORCEOFF_FORCEOFF_Msk (0x1UL << RESET_NETWORK_FORCEOFF_FORCEOFF_Pos)
#define RESET_NETWORK_FORCEOFF_FORCEOFF_Release (0x0UL)
#define RESET_NETWORK_FORCEOFF_FORCEOFF_Hold (0x1UL)


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


/* Peripheral: SAADC */
/* Description: Analog to Digital Converter 0 */

/* Register: SAADC_TASKS_START */
/* Description: Start the ADC and prepare the result buffer in RAM */

/* Bit 0 : Start the ADC and prepare the result buffer in RAM */
#define SAADC_TASKS_START_TASKS_START_Pos (0UL)
#define SAADC_TASKS_START_TASKS_START_Msk (0x1UL << SAADC_TASKS_START_TASKS_START_Pos)
#define SAADC_TASKS_START_TASKS_START_Trigger (0x1UL)

/* Register: SAADC_TASKS_SAMPLE */
/* Description: Take one ADC sample, if scan is enabled all channels are sampled */

/* Bit 0 : Take one ADC sample, if scan is enabled all channels are sampled */
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL)
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Pos)
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Trigger (0x1UL)

/* Register: SAADC_TASKS_STOP */
/* Description: Stop the ADC and terminate any ongoing conversion */

/* Bit 0 : Stop the ADC and terminate any ongoing conversion */
#define SAADC_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define SAADC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << SAADC_TASKS_STOP_TASKS_STOP_Pos)
#define SAADC_TASKS_STOP_TASKS_STOP_Trigger (0x1UL)

/* Register: SAADC_TASKS_CALIBRATEOFFSET */
/* Description: Starts offset auto-calibration */

/* Bit 0 : Starts offset auto-calibration */
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Pos (0UL)
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Msk (0x1UL << SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Pos)
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Trigger (0x1UL)

/* Register: SAADC_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_START_EN_Pos (31UL)
#define SAADC_SUBSCRIBE_START_EN_Msk (0x1UL << SAADC_SUBSCRIBE_START_EN_Pos)
#define SAADC_SUBSCRIBE_START_EN_Disabled (0x0UL)
#define SAADC_SUBSCRIBE_START_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define SAADC_SUBSCRIBE_START_CHIDX_Pos (0UL)
#define SAADC_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_START_CHIDX_Pos)

/* Register: SAADC_SUBSCRIBE_SAMPLE */
/* Description: Subscribe configuration for task SAMPLE */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_SAMPLE_EN_Pos (31UL)
#define SAADC_SUBSCRIBE_SAMPLE_EN_Msk (0x1UL << SAADC_SUBSCRIBE_SAMPLE_EN_Pos)
#define SAADC_SUBSCRIBE_SAMPLE_EN_Disabled (0x0UL)
#define SAADC_SUBSCRIBE_SAMPLE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task SAMPLE will subscribe to */
#define SAADC_SUBSCRIBE_SAMPLE_CHIDX_Pos (0UL)
#define SAADC_SUBSCRIBE_SAMPLE_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_SAMPLE_CHIDX_Pos)

/* Register: SAADC_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_STOP_EN_Pos (31UL)
#define SAADC_SUBSCRIBE_STOP_EN_Msk (0x1UL << SAADC_SUBSCRIBE_STOP_EN_Pos)
#define SAADC_SUBSCRIBE_STOP_EN_Disabled (0x0UL)
#define SAADC_SUBSCRIBE_STOP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define SAADC_SUBSCRIBE_STOP_CHIDX_Pos (0UL)
#define SAADC_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_STOP_CHIDX_Pos)

/* Register: SAADC_SUBSCRIBE_CALIBRATEOFFSET */
/* Description: Subscribe configuration for task CALIBRATEOFFSET */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Pos (31UL)
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Msk (0x1UL << SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Pos)
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Disabled (0x0UL)
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task CALIBRATEOFFSET will subscribe to */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_CHIDX_Pos (0UL)
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_CALIBRATEOFFSET_CHIDX_Pos)

/* Register: SAADC_EVENTS_STARTED */
/* Description: The ADC has started */

/* Bit 0 : The ADC has started */
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << SAADC_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0x0UL)
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Generated (0x1UL)

/* Register: SAADC_EVENTS_END */
/* Description: The ADC has filled up the Result buffer */

/* Bit 0 : The ADC has filled up the Result buffer */
#define SAADC_EVENTS_END_EVENTS_END_Pos (0UL)
#define SAADC_EVENTS_END_EVENTS_END_Msk (0x1UL << SAADC_EVENTS_END_EVENTS_END_Pos)
#define SAADC_EVENTS_END_EVENTS_END_NotGenerated (0x0UL)
#define SAADC_EVENTS_END_EVENTS_END_Generated (0x1UL)

/* Register: SAADC_EVENTS_DONE */
/* Description: A conversion task has been completed. Depending on the mode, multiple conversions might be needed for a result to be transferred to RAM. */

/* Bit 0 : A conversion task has been completed. Depending on the mode, multiple conversions might be needed for a result to be transferred to RAM. */
#define SAADC_EVENTS_DONE_EVENTS_DONE_Pos (0UL)
#define SAADC_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << SAADC_EVENTS_DONE_EVENTS_DONE_Pos)
#define SAADC_EVENTS_DONE_EVENTS_DONE_NotGenerated (0x0UL)
#define SAADC_EVENTS_DONE_EVENTS_DONE_Generated (0x1UL)

/* Register: SAADC_EVENTS_RESULTDONE */
/* Description: A result is ready to get transferred to RAM */

/* Bit 0 : A result is ready to get transferred to RAM */
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Pos (0UL)
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Msk (0x1UL << SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Pos)
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_NotGenerated (0x0UL)
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Generated (0x1UL)

/* Register: SAADC_EVENTS_CALIBRATEDONE */
/* Description: Calibration is complete */

/* Bit 0 : Calibration is complete */
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Pos (0UL)
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Msk (0x1UL << SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Pos)
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_NotGenerated (0x0UL)
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Generated (0x1UL)

/* Register: SAADC_EVENTS_STOPPED */
/* Description: The ADC has stopped */

/* Bit 0 : The ADC has stopped */
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0x0UL)
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Generated (0x1UL)

/* Register: SAADC_EVENTS_CH_LIMITH */
/* Description: Description cluster: Last results is equal or above CH[n].LIMIT.HIGH */

/* Bit 0 : Last results is equal or above CH[n].LIMIT.HIGH */
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Pos (0UL)
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Msk (0x1UL << SAADC_EVENTS_CH_LIMITH_LIMITH_Pos)
#define SAADC_EVENTS_CH_LIMITH_LIMITH_NotGenerated (0x0UL)
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Generated (0x1UL)

/* Register: SAADC_EVENTS_CH_LIMITL */
/* Description: Description cluster: Last results is equal or below CH[n].LIMIT.LOW */

/* Bit 0 : Last results is equal or below CH[n].LIMIT.LOW */
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Pos (0UL)
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Msk (0x1UL << SAADC_EVENTS_CH_LIMITL_LIMITL_Pos)
#define SAADC_EVENTS_CH_LIMITL_LIMITL_NotGenerated (0x0UL)
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Generated (0x1UL)

/* Register: SAADC_PUBLISH_STARTED */
/* Description: Publish configuration for event STARTED */

/* Bit 31 :   */
#define SAADC_PUBLISH_STARTED_EN_Pos (31UL)
#define SAADC_PUBLISH_STARTED_EN_Msk (0x1UL << SAADC_PUBLISH_STARTED_EN_Pos)
#define SAADC_PUBLISH_STARTED_EN_Disabled (0x0UL)
#define SAADC_PUBLISH_STARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STARTED will publish to */
#define SAADC_PUBLISH_STARTED_CHIDX_Pos (0UL)
#define SAADC_PUBLISH_STARTED_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_STARTED_CHIDX_Pos)

/* Register: SAADC_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define SAADC_PUBLISH_END_EN_Pos (31UL)
#define SAADC_PUBLISH_END_EN_Msk (0x1UL << SAADC_PUBLISH_END_EN_Pos)
#define SAADC_PUBLISH_END_EN_Disabled (0x0UL)
#define SAADC_PUBLISH_END_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event END will publish to */
#define SAADC_PUBLISH_END_CHIDX_Pos (0UL)
#define SAADC_PUBLISH_END_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_END_CHIDX_Pos)

/* Register: SAADC_PUBLISH_DONE */
/* Description: Publish configuration for event DONE */

/* Bit 31 :   */
#define SAADC_PUBLISH_DONE_EN_Pos (31UL)
#define SAADC_PUBLISH_DONE_EN_Msk (0x1UL << SAADC_PUBLISH_DONE_EN_Pos)
#define SAADC_PUBLISH_DONE_EN_Disabled (0x0UL)
#define SAADC_PUBLISH_DONE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event DONE will publish to */
#define SAADC_PUBLISH_DONE_CHIDX_Pos (0UL)
#define SAADC_PUBLISH_DONE_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_DONE_CHIDX_Pos)

/* Register: SAADC_PUBLISH_RESULTDONE */
/* Description: Publish configuration for event RESULTDONE */

/* Bit 31 :   */
#define SAADC_PUBLISH_RESULTDONE_EN_Pos (31UL)
#define SAADC_PUBLISH_RESULTDONE_EN_Msk (0x1UL << SAADC_PUBLISH_RESULTDONE_EN_Pos)
#define SAADC_PUBLISH_RESULTDONE_EN_Disabled (0x0UL)
#define SAADC_PUBLISH_RESULTDONE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RESULTDONE will publish to */
#define SAADC_PUBLISH_RESULTDONE_CHIDX_Pos (0UL)
#define SAADC_PUBLISH_RESULTDONE_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_RESULTDONE_CHIDX_Pos)

/* Register: SAADC_PUBLISH_CALIBRATEDONE */
/* Description: Publish configuration for event CALIBRATEDONE */

/* Bit 31 :   */
#define SAADC_PUBLISH_CALIBRATEDONE_EN_Pos (31UL)
#define SAADC_PUBLISH_CALIBRATEDONE_EN_Msk (0x1UL << SAADC_PUBLISH_CALIBRATEDONE_EN_Pos)
#define SAADC_PUBLISH_CALIBRATEDONE_EN_Disabled (0x0UL)
#define SAADC_PUBLISH_CALIBRATEDONE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event CALIBRATEDONE will publish to */
#define SAADC_PUBLISH_CALIBRATEDONE_CHIDX_Pos (0UL)
#define SAADC_PUBLISH_CALIBRATEDONE_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_CALIBRATEDONE_CHIDX_Pos)

/* Register: SAADC_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define SAADC_PUBLISH_STOPPED_EN_Pos (31UL)
#define SAADC_PUBLISH_STOPPED_EN_Msk (0x1UL << SAADC_PUBLISH_STOPPED_EN_Pos)
#define SAADC_PUBLISH_STOPPED_EN_Disabled (0x0UL)
#define SAADC_PUBLISH_STOPPED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STOPPED will publish to */
#define SAADC_PUBLISH_STOPPED_CHIDX_Pos (0UL)
#define SAADC_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_STOPPED_CHIDX_Pos)

/* Register: SAADC_PUBLISH_CH_LIMITH */
/* Description: Description cluster: Publish configuration for event CH[n].LIMITH */

/* Bit 31 :   */
#define SAADC_PUBLISH_CH_LIMITH_EN_Pos (31UL)
#define SAADC_PUBLISH_CH_LIMITH_EN_Msk (0x1UL << SAADC_PUBLISH_CH_LIMITH_EN_Pos)
#define SAADC_PUBLISH_CH_LIMITH_EN_Disabled (0x0UL)
#define SAADC_PUBLISH_CH_LIMITH_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event CH[n].LIMITH will publish to */
#define SAADC_PUBLISH_CH_LIMITH_CHIDX_Pos (0UL)
#define SAADC_PUBLISH_CH_LIMITH_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_CH_LIMITH_CHIDX_Pos)

/* Register: SAADC_PUBLISH_CH_LIMITL */
/* Description: Description cluster: Publish configuration for event CH[n].LIMITL */

/* Bit 31 :   */
#define SAADC_PUBLISH_CH_LIMITL_EN_Pos (31UL)
#define SAADC_PUBLISH_CH_LIMITL_EN_Msk (0x1UL << SAADC_PUBLISH_CH_LIMITL_EN_Pos)
#define SAADC_PUBLISH_CH_LIMITL_EN_Disabled (0x0UL)
#define SAADC_PUBLISH_CH_LIMITL_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event CH[n].LIMITL will publish to */
#define SAADC_PUBLISH_CH_LIMITL_CHIDX_Pos (0UL)
#define SAADC_PUBLISH_CH_LIMITL_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_CH_LIMITL_CHIDX_Pos)

/* Register: SAADC_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 21 : Enable or disable interrupt for event CH7LIMITL */
#define SAADC_INTEN_CH7LIMITL_Pos (21UL)
#define SAADC_INTEN_CH7LIMITL_Msk (0x1UL << SAADC_INTEN_CH7LIMITL_Pos)
#define SAADC_INTEN_CH7LIMITL_Disabled (0x0UL)
#define SAADC_INTEN_CH7LIMITL_Enabled (0x1UL)

/* Bit 20 : Enable or disable interrupt for event CH7LIMITH */
#define SAADC_INTEN_CH7LIMITH_Pos (20UL)
#define SAADC_INTEN_CH7LIMITH_Msk (0x1UL << SAADC_INTEN_CH7LIMITH_Pos)
#define SAADC_INTEN_CH7LIMITH_Disabled (0x0UL)
#define SAADC_INTEN_CH7LIMITH_Enabled (0x1UL)

/* Bit 19 : Enable or disable interrupt for event CH6LIMITL */
#define SAADC_INTEN_CH6LIMITL_Pos (19UL)
#define SAADC_INTEN_CH6LIMITL_Msk (0x1UL << SAADC_INTEN_CH6LIMITL_Pos)
#define SAADC_INTEN_CH6LIMITL_Disabled (0x0UL)
#define SAADC_INTEN_CH6LIMITL_Enabled (0x1UL)

/* Bit 18 : Enable or disable interrupt for event CH6LIMITH */
#define SAADC_INTEN_CH6LIMITH_Pos (18UL)
#define SAADC_INTEN_CH6LIMITH_Msk (0x1UL << SAADC_INTEN_CH6LIMITH_Pos)
#define SAADC_INTEN_CH6LIMITH_Disabled (0x0UL)
#define SAADC_INTEN_CH6LIMITH_Enabled (0x1UL)

/* Bit 17 : Enable or disable interrupt for event CH5LIMITL */
#define SAADC_INTEN_CH5LIMITL_Pos (17UL)
#define SAADC_INTEN_CH5LIMITL_Msk (0x1UL << SAADC_INTEN_CH5LIMITL_Pos)
#define SAADC_INTEN_CH5LIMITL_Disabled (0x0UL)
#define SAADC_INTEN_CH5LIMITL_Enabled (0x1UL)

/* Bit 16 : Enable or disable interrupt for event CH5LIMITH */
#define SAADC_INTEN_CH5LIMITH_Pos (16UL)
#define SAADC_INTEN_CH5LIMITH_Msk (0x1UL << SAADC_INTEN_CH5LIMITH_Pos)
#define SAADC_INTEN_CH5LIMITH_Disabled (0x0UL)
#define SAADC_INTEN_CH5LIMITH_Enabled (0x1UL)

/* Bit 15 : Enable or disable interrupt for event CH4LIMITL */
#define SAADC_INTEN_CH4LIMITL_Pos (15UL)
#define SAADC_INTEN_CH4LIMITL_Msk (0x1UL << SAADC_INTEN_CH4LIMITL_Pos)
#define SAADC_INTEN_CH4LIMITL_Disabled (0x0UL)
#define SAADC_INTEN_CH4LIMITL_Enabled (0x1UL)

/* Bit 14 : Enable or disable interrupt for event CH4LIMITH */
#define SAADC_INTEN_CH4LIMITH_Pos (14UL)
#define SAADC_INTEN_CH4LIMITH_Msk (0x1UL << SAADC_INTEN_CH4LIMITH_Pos)
#define SAADC_INTEN_CH4LIMITH_Disabled (0x0UL)
#define SAADC_INTEN_CH4LIMITH_Enabled (0x1UL)

/* Bit 13 : Enable or disable interrupt for event CH3LIMITL */
#define SAADC_INTEN_CH3LIMITL_Pos (13UL)
#define SAADC_INTEN_CH3LIMITL_Msk (0x1UL << SAADC_INTEN_CH3LIMITL_Pos)
#define SAADC_INTEN_CH3LIMITL_Disabled (0x0UL)
#define SAADC_INTEN_CH3LIMITL_Enabled (0x1UL)

/* Bit 12 : Enable or disable interrupt for event CH3LIMITH */
#define SAADC_INTEN_CH3LIMITH_Pos (12UL)
#define SAADC_INTEN_CH3LIMITH_Msk (0x1UL << SAADC_INTEN_CH3LIMITH_Pos)
#define SAADC_INTEN_CH3LIMITH_Disabled (0x0UL)
#define SAADC_INTEN_CH3LIMITH_Enabled (0x1UL)

/* Bit 11 : Enable or disable interrupt for event CH2LIMITL */
#define SAADC_INTEN_CH2LIMITL_Pos (11UL)
#define SAADC_INTEN_CH2LIMITL_Msk (0x1UL << SAADC_INTEN_CH2LIMITL_Pos)
#define SAADC_INTEN_CH2LIMITL_Disabled (0x0UL)
#define SAADC_INTEN_CH2LIMITL_Enabled (0x1UL)

/* Bit 10 : Enable or disable interrupt for event CH2LIMITH */
#define SAADC_INTEN_CH2LIMITH_Pos (10UL)
#define SAADC_INTEN_CH2LIMITH_Msk (0x1UL << SAADC_INTEN_CH2LIMITH_Pos)
#define SAADC_INTEN_CH2LIMITH_Disabled (0x0UL)
#define SAADC_INTEN_CH2LIMITH_Enabled (0x1UL)

/* Bit 9 : Enable or disable interrupt for event CH1LIMITL */
#define SAADC_INTEN_CH1LIMITL_Pos (9UL)
#define SAADC_INTEN_CH1LIMITL_Msk (0x1UL << SAADC_INTEN_CH1LIMITL_Pos)
#define SAADC_INTEN_CH1LIMITL_Disabled (0x0UL)
#define SAADC_INTEN_CH1LIMITL_Enabled (0x1UL)

/* Bit 8 : Enable or disable interrupt for event CH1LIMITH */
#define SAADC_INTEN_CH1LIMITH_Pos (8UL)
#define SAADC_INTEN_CH1LIMITH_Msk (0x1UL << SAADC_INTEN_CH1LIMITH_Pos)
#define SAADC_INTEN_CH1LIMITH_Disabled (0x0UL)
#define SAADC_INTEN_CH1LIMITH_Enabled (0x1UL)

/* Bit 7 : Enable or disable interrupt for event CH0LIMITL */
#define SAADC_INTEN_CH0LIMITL_Pos (7UL)
#define SAADC_INTEN_CH0LIMITL_Msk (0x1UL << SAADC_INTEN_CH0LIMITL_Pos)
#define SAADC_INTEN_CH0LIMITL_Disabled (0x0UL)
#define SAADC_INTEN_CH0LIMITL_Enabled (0x1UL)

/* Bit 6 : Enable or disable interrupt for event CH0LIMITH */
#define SAADC_INTEN_CH0LIMITH_Pos (6UL)
#define SAADC_INTEN_CH0LIMITH_Msk (0x1UL << SAADC_INTEN_CH0LIMITH_Pos)
#define SAADC_INTEN_CH0LIMITH_Disabled (0x0UL)
#define SAADC_INTEN_CH0LIMITH_Enabled (0x1UL)

/* Bit 5 : Enable or disable interrupt for event STOPPED */
#define SAADC_INTEN_STOPPED_Pos (5UL)
#define SAADC_INTEN_STOPPED_Msk (0x1UL << SAADC_INTEN_STOPPED_Pos)
#define SAADC_INTEN_STOPPED_Disabled (0x0UL)
#define SAADC_INTEN_STOPPED_Enabled (0x1UL)

/* Bit 4 : Enable or disable interrupt for event CALIBRATEDONE */
#define SAADC_INTEN_CALIBRATEDONE_Pos (4UL)
#define SAADC_INTEN_CALIBRATEDONE_Msk (0x1UL << SAADC_INTEN_CALIBRATEDONE_Pos)
#define SAADC_INTEN_CALIBRATEDONE_Disabled (0x0UL)
#define SAADC_INTEN_CALIBRATEDONE_Enabled (0x1UL)

/* Bit 3 : Enable or disable interrupt for event RESULTDONE */
#define SAADC_INTEN_RESULTDONE_Pos (3UL)
#define SAADC_INTEN_RESULTDONE_Msk (0x1UL << SAADC_INTEN_RESULTDONE_Pos)
#define SAADC_INTEN_RESULTDONE_Disabled (0x0UL)
#define SAADC_INTEN_RESULTDONE_Enabled (0x1UL)

/* Bit 2 : Enable or disable interrupt for event DONE */
#define SAADC_INTEN_DONE_Pos (2UL)
#define SAADC_INTEN_DONE_Msk (0x1UL << SAADC_INTEN_DONE_Pos)
#define SAADC_INTEN_DONE_Disabled (0x0UL)
#define SAADC_INTEN_DONE_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event END */
#define SAADC_INTEN_END_Pos (1UL)
#define SAADC_INTEN_END_Msk (0x1UL << SAADC_INTEN_END_Pos)
#define SAADC_INTEN_END_Disabled (0x0UL)
#define SAADC_INTEN_END_Enabled (0x1UL)

/* Bit 0 : Enable or disable interrupt for event STARTED */
#define SAADC_INTEN_STARTED_Pos (0UL)
#define SAADC_INTEN_STARTED_Msk (0x1UL << SAADC_INTEN_STARTED_Pos)
#define SAADC_INTEN_STARTED_Disabled (0x0UL)
#define SAADC_INTEN_STARTED_Enabled (0x1UL)

/* Register: SAADC_INTENSET */
/* Description: Enable interrupt */

/* Bit 21 : Write '1' to enable interrupt for event CH7LIMITL */
#define SAADC_INTENSET_CH7LIMITL_Pos (21UL)
#define SAADC_INTENSET_CH7LIMITL_Msk (0x1UL << SAADC_INTENSET_CH7LIMITL_Pos)
#define SAADC_INTENSET_CH7LIMITL_Disabled (0x0UL)
#define SAADC_INTENSET_CH7LIMITL_Enabled (0x1UL)
#define SAADC_INTENSET_CH7LIMITL_Set (0x1UL)

/* Bit 20 : Write '1' to enable interrupt for event CH7LIMITH */
#define SAADC_INTENSET_CH7LIMITH_Pos (20UL)
#define SAADC_INTENSET_CH7LIMITH_Msk (0x1UL << SAADC_INTENSET_CH7LIMITH_Pos)
#define SAADC_INTENSET_CH7LIMITH_Disabled (0x0UL)
#define SAADC_INTENSET_CH7LIMITH_Enabled (0x1UL)
#define SAADC_INTENSET_CH7LIMITH_Set (0x1UL)

/* Bit 19 : Write '1' to enable interrupt for event CH6LIMITL */
#define SAADC_INTENSET_CH6LIMITL_Pos (19UL)
#define SAADC_INTENSET_CH6LIMITL_Msk (0x1UL << SAADC_INTENSET_CH6LIMITL_Pos)
#define SAADC_INTENSET_CH6LIMITL_Disabled (0x0UL)
#define SAADC_INTENSET_CH6LIMITL_Enabled (0x1UL)
#define SAADC_INTENSET_CH6LIMITL_Set (0x1UL)

/* Bit 18 : Write '1' to enable interrupt for event CH6LIMITH */
#define SAADC_INTENSET_CH6LIMITH_Pos (18UL)
#define SAADC_INTENSET_CH6LIMITH_Msk (0x1UL << SAADC_INTENSET_CH6LIMITH_Pos)
#define SAADC_INTENSET_CH6LIMITH_Disabled (0x0UL)
#define SAADC_INTENSET_CH6LIMITH_Enabled (0x1UL)
#define SAADC_INTENSET_CH6LIMITH_Set (0x1UL)

/* Bit 17 : Write '1' to enable interrupt for event CH5LIMITL */
#define SAADC_INTENSET_CH5LIMITL_Pos (17UL)
#define SAADC_INTENSET_CH5LIMITL_Msk (0x1UL << SAADC_INTENSET_CH5LIMITL_Pos)
#define SAADC_INTENSET_CH5LIMITL_Disabled (0x0UL)
#define SAADC_INTENSET_CH5LIMITL_Enabled (0x1UL)
#define SAADC_INTENSET_CH5LIMITL_Set (0x1UL)

/* Bit 16 : Write '1' to enable interrupt for event CH5LIMITH */
#define SAADC_INTENSET_CH5LIMITH_Pos (16UL)
#define SAADC_INTENSET_CH5LIMITH_Msk (0x1UL << SAADC_INTENSET_CH5LIMITH_Pos)
#define SAADC_INTENSET_CH5LIMITH_Disabled (0x0UL)
#define SAADC_INTENSET_CH5LIMITH_Enabled (0x1UL)
#define SAADC_INTENSET_CH5LIMITH_Set (0x1UL)

/* Bit 15 : Write '1' to enable interrupt for event CH4LIMITL */
#define SAADC_INTENSET_CH4LIMITL_Pos (15UL)
#define SAADC_INTENSET_CH4LIMITL_Msk (0x1UL << SAADC_INTENSET_CH4LIMITL_Pos)
#define SAADC_INTENSET_CH4LIMITL_Disabled (0x0UL)
#define SAADC_INTENSET_CH4LIMITL_Enabled (0x1UL)
#define SAADC_INTENSET_CH4LIMITL_Set (0x1UL)

/* Bit 14 : Write '1' to enable interrupt for event CH4LIMITH */
#define SAADC_INTENSET_CH4LIMITH_Pos (14UL)
#define SAADC_INTENSET_CH4LIMITH_Msk (0x1UL << SAADC_INTENSET_CH4LIMITH_Pos)
#define SAADC_INTENSET_CH4LIMITH_Disabled (0x0UL)
#define SAADC_INTENSET_CH4LIMITH_Enabled (0x1UL)
#define SAADC_INTENSET_CH4LIMITH_Set (0x1UL)

/* Bit 13 : Write '1' to enable interrupt for event CH3LIMITL */
#define SAADC_INTENSET_CH3LIMITL_Pos (13UL)
#define SAADC_INTENSET_CH3LIMITL_Msk (0x1UL << SAADC_INTENSET_CH3LIMITL_Pos)
#define SAADC_INTENSET_CH3LIMITL_Disabled (0x0UL)
#define SAADC_INTENSET_CH3LIMITL_Enabled (0x1UL)
#define SAADC_INTENSET_CH3LIMITL_Set (0x1UL)

/* Bit 12 : Write '1' to enable interrupt for event CH3LIMITH */
#define SAADC_INTENSET_CH3LIMITH_Pos (12UL)
#define SAADC_INTENSET_CH3LIMITH_Msk (0x1UL << SAADC_INTENSET_CH3LIMITH_Pos)
#define SAADC_INTENSET_CH3LIMITH_Disabled (0x0UL)
#define SAADC_INTENSET_CH3LIMITH_Enabled (0x1UL)
#define SAADC_INTENSET_CH3LIMITH_Set (0x1UL)

/* Bit 11 : Write '1' to enable interrupt for event CH2LIMITL */
#define SAADC_INTENSET_CH2LIMITL_Pos (11UL)
#define SAADC_INTENSET_CH2LIMITL_Msk (0x1UL << SAADC_INTENSET_CH2LIMITL_Pos)
#define SAADC_INTENSET_CH2LIMITL_Disabled (0x0UL)
#define SAADC_INTENSET_CH2LIMITL_Enabled (0x1UL)
#define SAADC_INTENSET_CH2LIMITL_Set (0x1UL)

/* Bit 10 : Write '1' to enable interrupt for event CH2LIMITH */
#define SAADC_INTENSET_CH2LIMITH_Pos (10UL)
#define SAADC_INTENSET_CH2LIMITH_Msk (0x1UL << SAADC_INTENSET_CH2LIMITH_Pos)
#define SAADC_INTENSET_CH2LIMITH_Disabled (0x0UL)
#define SAADC_INTENSET_CH2LIMITH_Enabled (0x1UL)
#define SAADC_INTENSET_CH2LIMITH_Set (0x1UL)

/* Bit 9 : Write '1' to enable interrupt for event CH1LIMITL */
#define SAADC_INTENSET_CH1LIMITL_Pos (9UL)
#define SAADC_INTENSET_CH1LIMITL_Msk (0x1UL << SAADC_INTENSET_CH1LIMITL_Pos)
#define SAADC_INTENSET_CH1LIMITL_Disabled (0x0UL)
#define SAADC_INTENSET_CH1LIMITL_Enabled (0x1UL)
#define SAADC_INTENSET_CH1LIMITL_Set (0x1UL)

/* Bit 8 : Write '1' to enable interrupt for event CH1LIMITH */
#define SAADC_INTENSET_CH1LIMITH_Pos (8UL)
#define SAADC_INTENSET_CH1LIMITH_Msk (0x1UL << SAADC_INTENSET_CH1LIMITH_Pos)
#define SAADC_INTENSET_CH1LIMITH_Disabled (0x0UL)
#define SAADC_INTENSET_CH1LIMITH_Enabled (0x1UL)
#define SAADC_INTENSET_CH1LIMITH_Set (0x1UL)

/* Bit 7 : Write '1' to enable interrupt for event CH0LIMITL */
#define SAADC_INTENSET_CH0LIMITL_Pos (7UL)
#define SAADC_INTENSET_CH0LIMITL_Msk (0x1UL << SAADC_INTENSET_CH0LIMITL_Pos)
#define SAADC_INTENSET_CH0LIMITL_Disabled (0x0UL)
#define SAADC_INTENSET_CH0LIMITL_Enabled (0x1UL)
#define SAADC_INTENSET_CH0LIMITL_Set (0x1UL)

/* Bit 6 : Write '1' to enable interrupt for event CH0LIMITH */
#define SAADC_INTENSET_CH0LIMITH_Pos (6UL)
#define SAADC_INTENSET_CH0LIMITH_Msk (0x1UL << SAADC_INTENSET_CH0LIMITH_Pos)
#define SAADC_INTENSET_CH0LIMITH_Disabled (0x0UL)
#define SAADC_INTENSET_CH0LIMITH_Enabled (0x1UL)
#define SAADC_INTENSET_CH0LIMITH_Set (0x1UL)

/* Bit 5 : Write '1' to enable interrupt for event STOPPED */
#define SAADC_INTENSET_STOPPED_Pos (5UL)
#define SAADC_INTENSET_STOPPED_Msk (0x1UL << SAADC_INTENSET_STOPPED_Pos)
#define SAADC_INTENSET_STOPPED_Disabled (0x0UL)
#define SAADC_INTENSET_STOPPED_Enabled (0x1UL)
#define SAADC_INTENSET_STOPPED_Set (0x1UL)

/* Bit 4 : Write '1' to enable interrupt for event CALIBRATEDONE */
#define SAADC_INTENSET_CALIBRATEDONE_Pos (4UL)
#define SAADC_INTENSET_CALIBRATEDONE_Msk (0x1UL << SAADC_INTENSET_CALIBRATEDONE_Pos)
#define SAADC_INTENSET_CALIBRATEDONE_Disabled (0x0UL)
#define SAADC_INTENSET_CALIBRATEDONE_Enabled (0x1UL)
#define SAADC_INTENSET_CALIBRATEDONE_Set (0x1UL)

/* Bit 3 : Write '1' to enable interrupt for event RESULTDONE */
#define SAADC_INTENSET_RESULTDONE_Pos (3UL)
#define SAADC_INTENSET_RESULTDONE_Msk (0x1UL << SAADC_INTENSET_RESULTDONE_Pos)
#define SAADC_INTENSET_RESULTDONE_Disabled (0x0UL)
#define SAADC_INTENSET_RESULTDONE_Enabled (0x1UL)
#define SAADC_INTENSET_RESULTDONE_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event DONE */
#define SAADC_INTENSET_DONE_Pos (2UL)
#define SAADC_INTENSET_DONE_Msk (0x1UL << SAADC_INTENSET_DONE_Pos)
#define SAADC_INTENSET_DONE_Disabled (0x0UL)
#define SAADC_INTENSET_DONE_Enabled (0x1UL)
#define SAADC_INTENSET_DONE_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event END */
#define SAADC_INTENSET_END_Pos (1UL)
#define SAADC_INTENSET_END_Msk (0x1UL << SAADC_INTENSET_END_Pos)
#define SAADC_INTENSET_END_Disabled (0x0UL)
#define SAADC_INTENSET_END_Enabled (0x1UL)
#define SAADC_INTENSET_END_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event STARTED */
#define SAADC_INTENSET_STARTED_Pos (0UL)
#define SAADC_INTENSET_STARTED_Msk (0x1UL << SAADC_INTENSET_STARTED_Pos)
#define SAADC_INTENSET_STARTED_Disabled (0x0UL)
#define SAADC_INTENSET_STARTED_Enabled (0x1UL)
#define SAADC_INTENSET_STARTED_Set (0x1UL)

/* Register: SAADC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 21 : Write '1' to disable interrupt for event CH7LIMITL */
#define SAADC_INTENCLR_CH7LIMITL_Pos (21UL)
#define SAADC_INTENCLR_CH7LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH7LIMITL_Pos)
#define SAADC_INTENCLR_CH7LIMITL_Disabled (0x0UL)
#define SAADC_INTENCLR_CH7LIMITL_Enabled (0x1UL)
#define SAADC_INTENCLR_CH7LIMITL_Clear (0x1UL)

/* Bit 20 : Write '1' to disable interrupt for event CH7LIMITH */
#define SAADC_INTENCLR_CH7LIMITH_Pos (20UL)
#define SAADC_INTENCLR_CH7LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH7LIMITH_Pos)
#define SAADC_INTENCLR_CH7LIMITH_Disabled (0x0UL)
#define SAADC_INTENCLR_CH7LIMITH_Enabled (0x1UL)
#define SAADC_INTENCLR_CH7LIMITH_Clear (0x1UL)

/* Bit 19 : Write '1' to disable interrupt for event CH6LIMITL */
#define SAADC_INTENCLR_CH6LIMITL_Pos (19UL)
#define SAADC_INTENCLR_CH6LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH6LIMITL_Pos)
#define SAADC_INTENCLR_CH6LIMITL_Disabled (0x0UL)
#define SAADC_INTENCLR_CH6LIMITL_Enabled (0x1UL)
#define SAADC_INTENCLR_CH6LIMITL_Clear (0x1UL)

/* Bit 18 : Write '1' to disable interrupt for event CH6LIMITH */
#define SAADC_INTENCLR_CH6LIMITH_Pos (18UL)
#define SAADC_INTENCLR_CH6LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH6LIMITH_Pos)
#define SAADC_INTENCLR_CH6LIMITH_Disabled (0x0UL)
#define SAADC_INTENCLR_CH6LIMITH_Enabled (0x1UL)
#define SAADC_INTENCLR_CH6LIMITH_Clear (0x1UL)

/* Bit 17 : Write '1' to disable interrupt for event CH5LIMITL */
#define SAADC_INTENCLR_CH5LIMITL_Pos (17UL)
#define SAADC_INTENCLR_CH5LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH5LIMITL_Pos)
#define SAADC_INTENCLR_CH5LIMITL_Disabled (0x0UL)
#define SAADC_INTENCLR_CH5LIMITL_Enabled (0x1UL)
#define SAADC_INTENCLR_CH5LIMITL_Clear (0x1UL)

/* Bit 16 : Write '1' to disable interrupt for event CH5LIMITH */
#define SAADC_INTENCLR_CH5LIMITH_Pos (16UL)
#define SAADC_INTENCLR_CH5LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH5LIMITH_Pos)
#define SAADC_INTENCLR_CH5LIMITH_Disabled (0x0UL)
#define SAADC_INTENCLR_CH5LIMITH_Enabled (0x1UL)
#define SAADC_INTENCLR_CH5LIMITH_Clear (0x1UL)

/* Bit 15 : Write '1' to disable interrupt for event CH4LIMITL */
#define SAADC_INTENCLR_CH4LIMITL_Pos (15UL)
#define SAADC_INTENCLR_CH4LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH4LIMITL_Pos)
#define SAADC_INTENCLR_CH4LIMITL_Disabled (0x0UL)
#define SAADC_INTENCLR_CH4LIMITL_Enabled (0x1UL)
#define SAADC_INTENCLR_CH4LIMITL_Clear (0x1UL)

/* Bit 14 : Write '1' to disable interrupt for event CH4LIMITH */
#define SAADC_INTENCLR_CH4LIMITH_Pos (14UL)
#define SAADC_INTENCLR_CH4LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH4LIMITH_Pos)
#define SAADC_INTENCLR_CH4LIMITH_Disabled (0x0UL)
#define SAADC_INTENCLR_CH4LIMITH_Enabled (0x1UL)
#define SAADC_INTENCLR_CH4LIMITH_Clear (0x1UL)

/* Bit 13 : Write '1' to disable interrupt for event CH3LIMITL */
#define SAADC_INTENCLR_CH3LIMITL_Pos (13UL)
#define SAADC_INTENCLR_CH3LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH3LIMITL_Pos)
#define SAADC_INTENCLR_CH3LIMITL_Disabled (0x0UL)
#define SAADC_INTENCLR_CH3LIMITL_Enabled (0x1UL)
#define SAADC_INTENCLR_CH3LIMITL_Clear (0x1UL)

/* Bit 12 : Write '1' to disable interrupt for event CH3LIMITH */
#define SAADC_INTENCLR_CH3LIMITH_Pos (12UL)
#define SAADC_INTENCLR_CH3LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH3LIMITH_Pos)
#define SAADC_INTENCLR_CH3LIMITH_Disabled (0x0UL)
#define SAADC_INTENCLR_CH3LIMITH_Enabled (0x1UL)
#define SAADC_INTENCLR_CH3LIMITH_Clear (0x1UL)

/* Bit 11 : Write '1' to disable interrupt for event CH2LIMITL */
#define SAADC_INTENCLR_CH2LIMITL_Pos (11UL)
#define SAADC_INTENCLR_CH2LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH2LIMITL_Pos)
#define SAADC_INTENCLR_CH2LIMITL_Disabled (0x0UL)
#define SAADC_INTENCLR_CH2LIMITL_Enabled (0x1UL)
#define SAADC_INTENCLR_CH2LIMITL_Clear (0x1UL)

/* Bit 10 : Write '1' to disable interrupt for event CH2LIMITH */
#define SAADC_INTENCLR_CH2LIMITH_Pos (10UL)
#define SAADC_INTENCLR_CH2LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH2LIMITH_Pos)
#define SAADC_INTENCLR_CH2LIMITH_Disabled (0x0UL)
#define SAADC_INTENCLR_CH2LIMITH_Enabled (0x1UL)
#define SAADC_INTENCLR_CH2LIMITH_Clear (0x1UL)

/* Bit 9 : Write '1' to disable interrupt for event CH1LIMITL */
#define SAADC_INTENCLR_CH1LIMITL_Pos (9UL)
#define SAADC_INTENCLR_CH1LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH1LIMITL_Pos)
#define SAADC_INTENCLR_CH1LIMITL_Disabled (0x0UL)
#define SAADC_INTENCLR_CH1LIMITL_Enabled (0x1UL)
#define SAADC_INTENCLR_CH1LIMITL_Clear (0x1UL)

/* Bit 8 : Write '1' to disable interrupt for event CH1LIMITH */
#define SAADC_INTENCLR_CH1LIMITH_Pos (8UL)
#define SAADC_INTENCLR_CH1LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH1LIMITH_Pos)
#define SAADC_INTENCLR_CH1LIMITH_Disabled (0x0UL)
#define SAADC_INTENCLR_CH1LIMITH_Enabled (0x1UL)
#define SAADC_INTENCLR_CH1LIMITH_Clear (0x1UL)

/* Bit 7 : Write '1' to disable interrupt for event CH0LIMITL */
#define SAADC_INTENCLR_CH0LIMITL_Pos (7UL)
#define SAADC_INTENCLR_CH0LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH0LIMITL_Pos)
#define SAADC_INTENCLR_CH0LIMITL_Disabled (0x0UL)
#define SAADC_INTENCLR_CH0LIMITL_Enabled (0x1UL)
#define SAADC_INTENCLR_CH0LIMITL_Clear (0x1UL)

/* Bit 6 : Write '1' to disable interrupt for event CH0LIMITH */
#define SAADC_INTENCLR_CH0LIMITH_Pos (6UL)
#define SAADC_INTENCLR_CH0LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH0LIMITH_Pos)
#define SAADC_INTENCLR_CH0LIMITH_Disabled (0x0UL)
#define SAADC_INTENCLR_CH0LIMITH_Enabled (0x1UL)
#define SAADC_INTENCLR_CH0LIMITH_Clear (0x1UL)

/* Bit 5 : Write '1' to disable interrupt for event STOPPED */
#define SAADC_INTENCLR_STOPPED_Pos (5UL)
#define SAADC_INTENCLR_STOPPED_Msk (0x1UL << SAADC_INTENCLR_STOPPED_Pos)
#define SAADC_INTENCLR_STOPPED_Disabled (0x0UL)
#define SAADC_INTENCLR_STOPPED_Enabled (0x1UL)
#define SAADC_INTENCLR_STOPPED_Clear (0x1UL)

/* Bit 4 : Write '1' to disable interrupt for event CALIBRATEDONE */
#define SAADC_INTENCLR_CALIBRATEDONE_Pos (4UL)
#define SAADC_INTENCLR_CALIBRATEDONE_Msk (0x1UL << SAADC_INTENCLR_CALIBRATEDONE_Pos)
#define SAADC_INTENCLR_CALIBRATEDONE_Disabled (0x0UL)
#define SAADC_INTENCLR_CALIBRATEDONE_Enabled (0x1UL)
#define SAADC_INTENCLR_CALIBRATEDONE_Clear (0x1UL)

/* Bit 3 : Write '1' to disable interrupt for event RESULTDONE */
#define SAADC_INTENCLR_RESULTDONE_Pos (3UL)
#define SAADC_INTENCLR_RESULTDONE_Msk (0x1UL << SAADC_INTENCLR_RESULTDONE_Pos)
#define SAADC_INTENCLR_RESULTDONE_Disabled (0x0UL)
#define SAADC_INTENCLR_RESULTDONE_Enabled (0x1UL)
#define SAADC_INTENCLR_RESULTDONE_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event DONE */
#define SAADC_INTENCLR_DONE_Pos (2UL)
#define SAADC_INTENCLR_DONE_Msk (0x1UL << SAADC_INTENCLR_DONE_Pos)
#define SAADC_INTENCLR_DONE_Disabled (0x0UL)
#define SAADC_INTENCLR_DONE_Enabled (0x1UL)
#define SAADC_INTENCLR_DONE_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event END */
#define SAADC_INTENCLR_END_Pos (1UL)
#define SAADC_INTENCLR_END_Msk (0x1UL << SAADC_INTENCLR_END_Pos)
#define SAADC_INTENCLR_END_Disabled (0x0UL)
#define SAADC_INTENCLR_END_Enabled (0x1UL)
#define SAADC_INTENCLR_END_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event STARTED */
#define SAADC_INTENCLR_STARTED_Pos (0UL)
#define SAADC_INTENCLR_STARTED_Msk (0x1UL << SAADC_INTENCLR_STARTED_Pos)
#define SAADC_INTENCLR_STARTED_Disabled (0x0UL)
#define SAADC_INTENCLR_STARTED_Enabled (0x1UL)
#define SAADC_INTENCLR_STARTED_Clear (0x1UL)

/* Register: SAADC_STATUS */
/* Description: Status */

/* Bit 0 : Status */
#define SAADC_STATUS_STATUS_Pos (0UL)
#define SAADC_STATUS_STATUS_Msk (0x1UL << SAADC_STATUS_STATUS_Pos)
#define SAADC_STATUS_STATUS_Ready (0x0UL)
#define SAADC_STATUS_STATUS_Busy (0x1UL)

/* Register: SAADC_ENABLE */
/* Description: Enable or disable ADC */

/* Bit 0 : Enable or disable ADC */
#define SAADC_ENABLE_ENABLE_Pos (0UL)
#define SAADC_ENABLE_ENABLE_Msk (0x1UL << SAADC_ENABLE_ENABLE_Pos)
#define SAADC_ENABLE_ENABLE_Disabled (0x0UL)
#define SAADC_ENABLE_ENABLE_Enabled (0x1UL)

/* Register: SAADC_CH_PSELP */
/* Description: Description cluster: Input positive pin selection for CH[n] */

/* Bits 4..0 : Analog positive input channel */
#define SAADC_CH_PSELP_PSELP_Pos (0UL)
#define SAADC_CH_PSELP_PSELP_Msk (0x1FUL << SAADC_CH_PSELP_PSELP_Pos)
#define SAADC_CH_PSELP_PSELP_NC (0x00UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput0 (0x01UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput1 (0x02UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput2 (0x03UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput3 (0x04UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput4 (0x05UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput5 (0x06UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput6 (0x07UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput7 (0x08UL)
#define SAADC_CH_PSELP_PSELP_VDD (0x09UL)
#define SAADC_CH_PSELP_PSELP_VDDHDIV5 (0x0DUL)

/* Register: SAADC_CH_PSELN */
/* Description: Description cluster: Input negative pin selection for CH[n] */

/* Bits 4..0 : Analog negative input, enables differential channel */
#define SAADC_CH_PSELN_PSELN_Pos (0UL)
#define SAADC_CH_PSELN_PSELN_Msk (0x1FUL << SAADC_CH_PSELN_PSELN_Pos)
#define SAADC_CH_PSELN_PSELN_NC (0x00UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput0 (0x01UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput1 (0x02UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput2 (0x03UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput3 (0x04UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput4 (0x05UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput5 (0x06UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput6 (0x07UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput7 (0x08UL)
#define SAADC_CH_PSELN_PSELN_VDD (0x09UL)
#define SAADC_CH_PSELN_PSELN_VDDHDIV5 (0x0DUL)

/* Register: SAADC_CH_CONFIG */
/* Description: Description cluster: Input configuration for CH[n] */

/* Bit 24 : Enable burst mode */
#define SAADC_CH_CONFIG_BURST_Pos (24UL)
#define SAADC_CH_CONFIG_BURST_Msk (0x1UL << SAADC_CH_CONFIG_BURST_Pos)
#define SAADC_CH_CONFIG_BURST_Disabled (0x0UL)
#define SAADC_CH_CONFIG_BURST_Enabled (0x1UL)

/* Bit 20 : Enable differential mode */
#define SAADC_CH_CONFIG_MODE_Pos (20UL)
#define SAADC_CH_CONFIG_MODE_Msk (0x1UL << SAADC_CH_CONFIG_MODE_Pos)
#define SAADC_CH_CONFIG_MODE_SE (0x0UL)
#define SAADC_CH_CONFIG_MODE_Diff (0x1UL)

/* Bits 18..16 : Acquisition time, the time the ADC uses to sample the input voltage */
#define SAADC_CH_CONFIG_TACQ_Pos (16UL)
#define SAADC_CH_CONFIG_TACQ_Msk (0x7UL << SAADC_CH_CONFIG_TACQ_Pos)
#define SAADC_CH_CONFIG_TACQ_3us (0x0UL)
#define SAADC_CH_CONFIG_TACQ_5us (0x1UL)
#define SAADC_CH_CONFIG_TACQ_10us (0x2UL)
#define SAADC_CH_CONFIG_TACQ_15us (0x3UL)
#define SAADC_CH_CONFIG_TACQ_20us (0x4UL)
#define SAADC_CH_CONFIG_TACQ_40us (0x5UL)

/* Bit 12 : Reference control */
#define SAADC_CH_CONFIG_REFSEL_Pos (12UL)
#define SAADC_CH_CONFIG_REFSEL_Msk (0x1UL << SAADC_CH_CONFIG_REFSEL_Pos)
#define SAADC_CH_CONFIG_REFSEL_Internal (0x0UL)
#define SAADC_CH_CONFIG_REFSEL_VDD1_4 (0x1UL)

/* Bits 10..8 : Gain control */
#define SAADC_CH_CONFIG_GAIN_Pos (8UL)
#define SAADC_CH_CONFIG_GAIN_Msk (0x7UL << SAADC_CH_CONFIG_GAIN_Pos)
#define SAADC_CH_CONFIG_GAIN_Gain1_6 (0x0UL)
#define SAADC_CH_CONFIG_GAIN_Gain1_5 (0x1UL)
#define SAADC_CH_CONFIG_GAIN_Gain1_4 (0x2UL)
#define SAADC_CH_CONFIG_GAIN_Gain1_3 (0x3UL)
#define SAADC_CH_CONFIG_GAIN_Gain1_2 (0x4UL)
#define SAADC_CH_CONFIG_GAIN_Gain1 (0x5UL)
#define SAADC_CH_CONFIG_GAIN_Gain2 (0x6UL)
#define SAADC_CH_CONFIG_GAIN_Gain4 (0x7UL)

/* Bits 5..4 : Negative channel resistor control */
#define SAADC_CH_CONFIG_RESN_Pos (4UL)
#define SAADC_CH_CONFIG_RESN_Msk (0x3UL << SAADC_CH_CONFIG_RESN_Pos)
#define SAADC_CH_CONFIG_RESN_Bypass (0x0UL)
#define SAADC_CH_CONFIG_RESN_Pulldown (0x1UL)
#define SAADC_CH_CONFIG_RESN_Pullup (0x2UL)
#define SAADC_CH_CONFIG_RESN_VDD1_2 (0x3UL)

/* Bits 1..0 : Positive channel resistor control */
#define SAADC_CH_CONFIG_RESP_Pos (0UL)
#define SAADC_CH_CONFIG_RESP_Msk (0x3UL << SAADC_CH_CONFIG_RESP_Pos)
#define SAADC_CH_CONFIG_RESP_Bypass (0x0UL)
#define SAADC_CH_CONFIG_RESP_Pulldown (0x1UL)
#define SAADC_CH_CONFIG_RESP_Pullup (0x2UL)
#define SAADC_CH_CONFIG_RESP_VDD1_2 (0x3UL)

/* Register: SAADC_CH_LIMIT */
/* Description: Description cluster: High/low limits for event monitoring a channel */

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
#define SAADC_RESOLUTION_VAL_8bit (0x0UL)
#define SAADC_RESOLUTION_VAL_10bit (0x1UL)
#define SAADC_RESOLUTION_VAL_12bit (0x2UL)
#define SAADC_RESOLUTION_VAL_14bit (0x3UL)

/* Register: SAADC_OVERSAMPLE */
/* Description: Oversampling configuration. OVERSAMPLE should not be combined with SCAN. The RESOLUTION is applied before averaging, thus for high OVERSAMPLE a higher RESOLUTION should be used. */

/* Bits 3..0 : Oversample control */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Pos (0UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Msk (0xFUL << SAADC_OVERSAMPLE_OVERSAMPLE_Pos)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Bypass (0x0UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over2x (0x1UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over4x (0x2UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over8x (0x3UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over16x (0x4UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over32x (0x5UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over64x (0x6UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over128x (0x7UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over256x (0x8UL)

/* Register: SAADC_SAMPLERATE */
/* Description: Controls normal or continuous sample rate */

/* Bit 12 : Select mode for sample rate control */
#define SAADC_SAMPLERATE_MODE_Pos (12UL)
#define SAADC_SAMPLERATE_MODE_Msk (0x1UL << SAADC_SAMPLERATE_MODE_Pos)
#define SAADC_SAMPLERATE_MODE_Task (0x0UL)
#define SAADC_SAMPLERATE_MODE_Timers (0x1UL)

/* Bits 10..0 : Capture and compare value; sample rate is 16 MHz/CC */
#define SAADC_SAMPLERATE_CC_Pos (0UL)
#define SAADC_SAMPLERATE_CC_Msk (0x7FFUL << SAADC_SAMPLERATE_CC_Pos)

/* Register: SAADC_RESULT_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define SAADC_RESULT_PTR_PTR_Pos (0UL)
#define SAADC_RESULT_PTR_PTR_Msk (0xFFFFFFFFUL << SAADC_RESULT_PTR_PTR_Pos)

/* Register: SAADC_RESULT_MAXCNT */
/* Description: Maximum number of buffer words to transfer */

/* Bits 14..0 : Maximum number of buffer words to transfer */
#define SAADC_RESULT_MAXCNT_MAXCNT_Pos (0UL)
#define SAADC_RESULT_MAXCNT_MAXCNT_Msk (0x7FFFUL << SAADC_RESULT_MAXCNT_MAXCNT_Pos)

/* Register: SAADC_RESULT_AMOUNT */
/* Description: Number of buffer words transferred since last START */

/* Bits 14..0 : Number of buffer words transferred since last START. This register can be read after an END or STOPPED event. */
#define SAADC_RESULT_AMOUNT_AMOUNT_Pos (0UL)
#define SAADC_RESULT_AMOUNT_AMOUNT_Msk (0x7FFFUL << SAADC_RESULT_AMOUNT_AMOUNT_Pos)


/* Peripheral: SPIM */
/* Description: Serial Peripheral Interface Master with EasyDMA 0 */

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
/* Description: SPI Slave 0 */

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


/* Peripheral: SPU */
/* Description: System protection unit */

/* Register: SPU_EVENTS_RAMACCERR */
/* Description: A security violation has been detected for the RAM memory space */

/* Bit 0 : A security violation has been detected for the RAM memory space */
#define SPU_EVENTS_RAMACCERR_EVENTS_RAMACCERR_Pos (0UL)
#define SPU_EVENTS_RAMACCERR_EVENTS_RAMACCERR_Msk (0x1UL << SPU_EVENTS_RAMACCERR_EVENTS_RAMACCERR_Pos)
#define SPU_EVENTS_RAMACCERR_EVENTS_RAMACCERR_NotGenerated (0x0UL)
#define SPU_EVENTS_RAMACCERR_EVENTS_RAMACCERR_Generated (0x1UL)

/* Register: SPU_EVENTS_FLASHACCERR */
/* Description: A security violation has been detected for the flash memory space */

/* Bit 0 : A security violation has been detected for the flash memory space */
#define SPU_EVENTS_FLASHACCERR_EVENTS_FLASHACCERR_Pos (0UL)
#define SPU_EVENTS_FLASHACCERR_EVENTS_FLASHACCERR_Msk (0x1UL << SPU_EVENTS_FLASHACCERR_EVENTS_FLASHACCERR_Pos)
#define SPU_EVENTS_FLASHACCERR_EVENTS_FLASHACCERR_NotGenerated (0x0UL)
#define SPU_EVENTS_FLASHACCERR_EVENTS_FLASHACCERR_Generated (0x1UL)

/* Register: SPU_EVENTS_PERIPHACCERR */
/* Description: A security violation has been detected on one or several peripherals */

/* Bit 0 : A security violation has been detected on one or several peripherals */
#define SPU_EVENTS_PERIPHACCERR_EVENTS_PERIPHACCERR_Pos (0UL)
#define SPU_EVENTS_PERIPHACCERR_EVENTS_PERIPHACCERR_Msk (0x1UL << SPU_EVENTS_PERIPHACCERR_EVENTS_PERIPHACCERR_Pos)
#define SPU_EVENTS_PERIPHACCERR_EVENTS_PERIPHACCERR_NotGenerated (0x0UL)
#define SPU_EVENTS_PERIPHACCERR_EVENTS_PERIPHACCERR_Generated (0x1UL)

/* Register: SPU_PUBLISH_RAMACCERR */
/* Description: Publish configuration for event RAMACCERR */

/* Bit 31 :   */
#define SPU_PUBLISH_RAMACCERR_EN_Pos (31UL)
#define SPU_PUBLISH_RAMACCERR_EN_Msk (0x1UL << SPU_PUBLISH_RAMACCERR_EN_Pos)
#define SPU_PUBLISH_RAMACCERR_EN_Disabled (0x0UL)
#define SPU_PUBLISH_RAMACCERR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event RAMACCERR will publish to */
#define SPU_PUBLISH_RAMACCERR_CHIDX_Pos (0UL)
#define SPU_PUBLISH_RAMACCERR_CHIDX_Msk (0xFFUL << SPU_PUBLISH_RAMACCERR_CHIDX_Pos)

/* Register: SPU_PUBLISH_FLASHACCERR */
/* Description: Publish configuration for event FLASHACCERR */

/* Bit 31 :   */
#define SPU_PUBLISH_FLASHACCERR_EN_Pos (31UL)
#define SPU_PUBLISH_FLASHACCERR_EN_Msk (0x1UL << SPU_PUBLISH_FLASHACCERR_EN_Pos)
#define SPU_PUBLISH_FLASHACCERR_EN_Disabled (0x0UL)
#define SPU_PUBLISH_FLASHACCERR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event FLASHACCERR will publish to */
#define SPU_PUBLISH_FLASHACCERR_CHIDX_Pos (0UL)
#define SPU_PUBLISH_FLASHACCERR_CHIDX_Msk (0xFFUL << SPU_PUBLISH_FLASHACCERR_CHIDX_Pos)

/* Register: SPU_PUBLISH_PERIPHACCERR */
/* Description: Publish configuration for event PERIPHACCERR */

/* Bit 31 :   */
#define SPU_PUBLISH_PERIPHACCERR_EN_Pos (31UL)
#define SPU_PUBLISH_PERIPHACCERR_EN_Msk (0x1UL << SPU_PUBLISH_PERIPHACCERR_EN_Pos)
#define SPU_PUBLISH_PERIPHACCERR_EN_Disabled (0x0UL)
#define SPU_PUBLISH_PERIPHACCERR_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event PERIPHACCERR will publish to */
#define SPU_PUBLISH_PERIPHACCERR_CHIDX_Pos (0UL)
#define SPU_PUBLISH_PERIPHACCERR_CHIDX_Msk (0xFFUL << SPU_PUBLISH_PERIPHACCERR_CHIDX_Pos)

/* Register: SPU_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 2 : Enable or disable interrupt for event PERIPHACCERR */
#define SPU_INTEN_PERIPHACCERR_Pos (2UL)
#define SPU_INTEN_PERIPHACCERR_Msk (0x1UL << SPU_INTEN_PERIPHACCERR_Pos)
#define SPU_INTEN_PERIPHACCERR_Disabled (0x0UL)
#define SPU_INTEN_PERIPHACCERR_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event FLASHACCERR */
#define SPU_INTEN_FLASHACCERR_Pos (1UL)
#define SPU_INTEN_FLASHACCERR_Msk (0x1UL << SPU_INTEN_FLASHACCERR_Pos)
#define SPU_INTEN_FLASHACCERR_Disabled (0x0UL)
#define SPU_INTEN_FLASHACCERR_Enabled (0x1UL)

/* Bit 0 : Enable or disable interrupt for event RAMACCERR */
#define SPU_INTEN_RAMACCERR_Pos (0UL)
#define SPU_INTEN_RAMACCERR_Msk (0x1UL << SPU_INTEN_RAMACCERR_Pos)
#define SPU_INTEN_RAMACCERR_Disabled (0x0UL)
#define SPU_INTEN_RAMACCERR_Enabled (0x1UL)

/* Register: SPU_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event PERIPHACCERR */
#define SPU_INTENSET_PERIPHACCERR_Pos (2UL)
#define SPU_INTENSET_PERIPHACCERR_Msk (0x1UL << SPU_INTENSET_PERIPHACCERR_Pos)
#define SPU_INTENSET_PERIPHACCERR_Disabled (0x0UL)
#define SPU_INTENSET_PERIPHACCERR_Enabled (0x1UL)
#define SPU_INTENSET_PERIPHACCERR_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event FLASHACCERR */
#define SPU_INTENSET_FLASHACCERR_Pos (1UL)
#define SPU_INTENSET_FLASHACCERR_Msk (0x1UL << SPU_INTENSET_FLASHACCERR_Pos)
#define SPU_INTENSET_FLASHACCERR_Disabled (0x0UL)
#define SPU_INTENSET_FLASHACCERR_Enabled (0x1UL)
#define SPU_INTENSET_FLASHACCERR_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event RAMACCERR */
#define SPU_INTENSET_RAMACCERR_Pos (0UL)
#define SPU_INTENSET_RAMACCERR_Msk (0x1UL << SPU_INTENSET_RAMACCERR_Pos)
#define SPU_INTENSET_RAMACCERR_Disabled (0x0UL)
#define SPU_INTENSET_RAMACCERR_Enabled (0x1UL)
#define SPU_INTENSET_RAMACCERR_Set (0x1UL)

/* Register: SPU_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event PERIPHACCERR */
#define SPU_INTENCLR_PERIPHACCERR_Pos (2UL)
#define SPU_INTENCLR_PERIPHACCERR_Msk (0x1UL << SPU_INTENCLR_PERIPHACCERR_Pos)
#define SPU_INTENCLR_PERIPHACCERR_Disabled (0x0UL)
#define SPU_INTENCLR_PERIPHACCERR_Enabled (0x1UL)
#define SPU_INTENCLR_PERIPHACCERR_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event FLASHACCERR */
#define SPU_INTENCLR_FLASHACCERR_Pos (1UL)
#define SPU_INTENCLR_FLASHACCERR_Msk (0x1UL << SPU_INTENCLR_FLASHACCERR_Pos)
#define SPU_INTENCLR_FLASHACCERR_Disabled (0x0UL)
#define SPU_INTENCLR_FLASHACCERR_Enabled (0x1UL)
#define SPU_INTENCLR_FLASHACCERR_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event RAMACCERR */
#define SPU_INTENCLR_RAMACCERR_Pos (0UL)
#define SPU_INTENCLR_RAMACCERR_Msk (0x1UL << SPU_INTENCLR_RAMACCERR_Pos)
#define SPU_INTENCLR_RAMACCERR_Disabled (0x0UL)
#define SPU_INTENCLR_RAMACCERR_Enabled (0x1UL)
#define SPU_INTENCLR_RAMACCERR_Clear (0x1UL)

/* Register: SPU_CAP */
/* Description: Show implemented features for the current device */

/* Bit 0 : Show Arm TrustZone status */
#define SPU_CAP_TZM_Pos (0UL)
#define SPU_CAP_TZM_Msk (0x1UL << SPU_CAP_TZM_Pos)
#define SPU_CAP_TZM_NotAvailable (0x0UL)
#define SPU_CAP_TZM_Enabled (0x1UL)

/* Register: SPU_CPULOCK */
/* Description: Configure bits to lock down CPU features at runtime */

/* Bit 4 : Write '1' to prevent updating the secure SAU regions until the next reset */
#define SPU_CPULOCK_LOCKSAU_Pos (4UL)
#define SPU_CPULOCK_LOCKSAU_Msk (0x1UL << SPU_CPULOCK_LOCKSAU_Pos)
#define SPU_CPULOCK_LOCKSAU_Unlocked (0x0UL)
#define SPU_CPULOCK_LOCKSAU_Locked (0x1UL)

/* Bit 3 : Write '1' to prevent updating the Non-secure MPU regions until the next reset */
#define SPU_CPULOCK_LOCKNSMPU_Pos (3UL)
#define SPU_CPULOCK_LOCKNSMPU_Msk (0x1UL << SPU_CPULOCK_LOCKNSMPU_Pos)
#define SPU_CPULOCK_LOCKNSMPU_Unlocked (0x0UL)
#define SPU_CPULOCK_LOCKNSMPU_Locked (0x1UL)

/* Bit 2 : Write '1' to prevent updating the secure MPU regions until the next reset */
#define SPU_CPULOCK_LOCKSMPU_Pos (2UL)
#define SPU_CPULOCK_LOCKSMPU_Msk (0x1UL << SPU_CPULOCK_LOCKSMPU_Pos)
#define SPU_CPULOCK_LOCKSMPU_Unlocked (0x0UL)
#define SPU_CPULOCK_LOCKSMPU_Locked (0x1UL)

/* Bit 1 : Write '1' to prevent updating the non-secure vector table base address until the next reset */
#define SPU_CPULOCK_LOCKNSVTOR_Pos (1UL)
#define SPU_CPULOCK_LOCKNSVTOR_Msk (0x1UL << SPU_CPULOCK_LOCKNSVTOR_Pos)
#define SPU_CPULOCK_LOCKNSVTOR_Unlocked (0x0UL)
#define SPU_CPULOCK_LOCKNSVTOR_Locked (0x1UL)

/* Bit 0 : Write '1' to prevent updating the secure interrupt configuration until the next reset */
#define SPU_CPULOCK_LOCKSVTAIRCR_Pos (0UL)
#define SPU_CPULOCK_LOCKSVTAIRCR_Msk (0x1UL << SPU_CPULOCK_LOCKSVTAIRCR_Pos)
#define SPU_CPULOCK_LOCKSVTAIRCR_Unlocked (0x0UL)
#define SPU_CPULOCK_LOCKSVTAIRCR_Locked (0x1UL)

/* Register: SPU_EXTDOMAIN_PERM */
/* Description: Description cluster: Access  for bus access generated from the external domain n List capabilities of the external domain  n */

/* Bit 8 :   */
#define SPU_EXTDOMAIN_PERM_LOCK_Pos (8UL)
#define SPU_EXTDOMAIN_PERM_LOCK_Msk (0x1UL << SPU_EXTDOMAIN_PERM_LOCK_Pos)
#define SPU_EXTDOMAIN_PERM_LOCK_Unlocked (0x0UL)
#define SPU_EXTDOMAIN_PERM_LOCK_Locked (0x1UL)

/* Bit 4 : Peripheral security mapping */
#define SPU_EXTDOMAIN_PERM_SECATTR_Pos (4UL)
#define SPU_EXTDOMAIN_PERM_SECATTR_Msk (0x1UL << SPU_EXTDOMAIN_PERM_SECATTR_Pos)
#define SPU_EXTDOMAIN_PERM_SECATTR_NonSecure (0x0UL)
#define SPU_EXTDOMAIN_PERM_SECATTR_Secure (0x1UL)

/* Bits 1..0 : Define configuration capabilities for TrustZone Cortex-M secure attribute */
#define SPU_EXTDOMAIN_PERM_SECUREMAPPING_Pos (0UL)
#define SPU_EXTDOMAIN_PERM_SECUREMAPPING_Msk (0x3UL << SPU_EXTDOMAIN_PERM_SECUREMAPPING_Pos)
#define SPU_EXTDOMAIN_PERM_SECUREMAPPING_NonSecure (0x0UL)
#define SPU_EXTDOMAIN_PERM_SECUREMAPPING_Secure (0x1UL)
#define SPU_EXTDOMAIN_PERM_SECUREMAPPING_UserSelectable (0x2UL)

/* Register: SPU_DPPI_PERM */
/* Description: Description cluster: Select between secure and non-secure attribute  for the DPPI channels */

/* Bit 31 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL31_Pos (31UL)
#define SPU_DPPI_PERM_CHANNEL31_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL31_Pos)
#define SPU_DPPI_PERM_CHANNEL31_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL31_Secure (0x1UL)

/* Bit 30 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL30_Pos (30UL)
#define SPU_DPPI_PERM_CHANNEL30_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL30_Pos)
#define SPU_DPPI_PERM_CHANNEL30_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL30_Secure (0x1UL)

/* Bit 29 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL29_Pos (29UL)
#define SPU_DPPI_PERM_CHANNEL29_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL29_Pos)
#define SPU_DPPI_PERM_CHANNEL29_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL29_Secure (0x1UL)

/* Bit 28 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL28_Pos (28UL)
#define SPU_DPPI_PERM_CHANNEL28_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL28_Pos)
#define SPU_DPPI_PERM_CHANNEL28_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL28_Secure (0x1UL)

/* Bit 27 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL27_Pos (27UL)
#define SPU_DPPI_PERM_CHANNEL27_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL27_Pos)
#define SPU_DPPI_PERM_CHANNEL27_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL27_Secure (0x1UL)

/* Bit 26 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL26_Pos (26UL)
#define SPU_DPPI_PERM_CHANNEL26_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL26_Pos)
#define SPU_DPPI_PERM_CHANNEL26_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL26_Secure (0x1UL)

/* Bit 25 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL25_Pos (25UL)
#define SPU_DPPI_PERM_CHANNEL25_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL25_Pos)
#define SPU_DPPI_PERM_CHANNEL25_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL25_Secure (0x1UL)

/* Bit 24 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL24_Pos (24UL)
#define SPU_DPPI_PERM_CHANNEL24_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL24_Pos)
#define SPU_DPPI_PERM_CHANNEL24_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL24_Secure (0x1UL)

/* Bit 23 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL23_Pos (23UL)
#define SPU_DPPI_PERM_CHANNEL23_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL23_Pos)
#define SPU_DPPI_PERM_CHANNEL23_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL23_Secure (0x1UL)

/* Bit 22 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL22_Pos (22UL)
#define SPU_DPPI_PERM_CHANNEL22_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL22_Pos)
#define SPU_DPPI_PERM_CHANNEL22_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL22_Secure (0x1UL)

/* Bit 21 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL21_Pos (21UL)
#define SPU_DPPI_PERM_CHANNEL21_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL21_Pos)
#define SPU_DPPI_PERM_CHANNEL21_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL21_Secure (0x1UL)

/* Bit 20 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL20_Pos (20UL)
#define SPU_DPPI_PERM_CHANNEL20_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL20_Pos)
#define SPU_DPPI_PERM_CHANNEL20_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL20_Secure (0x1UL)

/* Bit 19 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL19_Pos (19UL)
#define SPU_DPPI_PERM_CHANNEL19_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL19_Pos)
#define SPU_DPPI_PERM_CHANNEL19_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL19_Secure (0x1UL)

/* Bit 18 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL18_Pos (18UL)
#define SPU_DPPI_PERM_CHANNEL18_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL18_Pos)
#define SPU_DPPI_PERM_CHANNEL18_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL18_Secure (0x1UL)

/* Bit 17 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL17_Pos (17UL)
#define SPU_DPPI_PERM_CHANNEL17_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL17_Pos)
#define SPU_DPPI_PERM_CHANNEL17_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL17_Secure (0x1UL)

/* Bit 16 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL16_Pos (16UL)
#define SPU_DPPI_PERM_CHANNEL16_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL16_Pos)
#define SPU_DPPI_PERM_CHANNEL16_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL16_Secure (0x1UL)

/* Bit 15 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL15_Pos (15UL)
#define SPU_DPPI_PERM_CHANNEL15_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL15_Pos)
#define SPU_DPPI_PERM_CHANNEL15_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL15_Secure (0x1UL)

/* Bit 14 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL14_Pos (14UL)
#define SPU_DPPI_PERM_CHANNEL14_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL14_Pos)
#define SPU_DPPI_PERM_CHANNEL14_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL14_Secure (0x1UL)

/* Bit 13 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL13_Pos (13UL)
#define SPU_DPPI_PERM_CHANNEL13_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL13_Pos)
#define SPU_DPPI_PERM_CHANNEL13_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL13_Secure (0x1UL)

/* Bit 12 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL12_Pos (12UL)
#define SPU_DPPI_PERM_CHANNEL12_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL12_Pos)
#define SPU_DPPI_PERM_CHANNEL12_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL12_Secure (0x1UL)

/* Bit 11 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL11_Pos (11UL)
#define SPU_DPPI_PERM_CHANNEL11_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL11_Pos)
#define SPU_DPPI_PERM_CHANNEL11_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL11_Secure (0x1UL)

/* Bit 10 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL10_Pos (10UL)
#define SPU_DPPI_PERM_CHANNEL10_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL10_Pos)
#define SPU_DPPI_PERM_CHANNEL10_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL10_Secure (0x1UL)

/* Bit 9 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL9_Pos (9UL)
#define SPU_DPPI_PERM_CHANNEL9_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL9_Pos)
#define SPU_DPPI_PERM_CHANNEL9_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL9_Secure (0x1UL)

/* Bit 8 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL8_Pos (8UL)
#define SPU_DPPI_PERM_CHANNEL8_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL8_Pos)
#define SPU_DPPI_PERM_CHANNEL8_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL8_Secure (0x1UL)

/* Bit 7 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL7_Pos (7UL)
#define SPU_DPPI_PERM_CHANNEL7_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL7_Pos)
#define SPU_DPPI_PERM_CHANNEL7_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL7_Secure (0x1UL)

/* Bit 6 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL6_Pos (6UL)
#define SPU_DPPI_PERM_CHANNEL6_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL6_Pos)
#define SPU_DPPI_PERM_CHANNEL6_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL6_Secure (0x1UL)

/* Bit 5 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL5_Pos (5UL)
#define SPU_DPPI_PERM_CHANNEL5_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL5_Pos)
#define SPU_DPPI_PERM_CHANNEL5_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL5_Secure (0x1UL)

/* Bit 4 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL4_Pos (4UL)
#define SPU_DPPI_PERM_CHANNEL4_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL4_Pos)
#define SPU_DPPI_PERM_CHANNEL4_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL4_Secure (0x1UL)

/* Bit 3 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL3_Pos (3UL)
#define SPU_DPPI_PERM_CHANNEL3_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL3_Pos)
#define SPU_DPPI_PERM_CHANNEL3_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL3_Secure (0x1UL)

/* Bit 2 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL2_Pos (2UL)
#define SPU_DPPI_PERM_CHANNEL2_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL2_Pos)
#define SPU_DPPI_PERM_CHANNEL2_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL2_Secure (0x1UL)

/* Bit 1 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL1_Pos (1UL)
#define SPU_DPPI_PERM_CHANNEL1_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL1_Pos)
#define SPU_DPPI_PERM_CHANNEL1_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL1_Secure (0x1UL)

/* Bit 0 : Select secure attribute */
#define SPU_DPPI_PERM_CHANNEL0_Pos (0UL)
#define SPU_DPPI_PERM_CHANNEL0_Msk (0x1UL << SPU_DPPI_PERM_CHANNEL0_Pos)
#define SPU_DPPI_PERM_CHANNEL0_NonSecure (0x0UL)
#define SPU_DPPI_PERM_CHANNEL0_Secure (0x1UL)

/* Register: SPU_DPPI_LOCK */
/* Description: Description cluster: Prevent further modification of the corresponding PERM register */

/* Bit 0 :   */
#define SPU_DPPI_LOCK_LOCK_Pos (0UL)
#define SPU_DPPI_LOCK_LOCK_Msk (0x1UL << SPU_DPPI_LOCK_LOCK_Pos)
#define SPU_DPPI_LOCK_LOCK_Unlocked (0x0UL)
#define SPU_DPPI_LOCK_LOCK_Locked (0x1UL)

/* Register: SPU_GPIOPORT_PERM */
/* Description: Description cluster: Select between secure and non-secure attribute  for pins 0 to 31  of port n */

/* Bit 31 : Select secure attribute attribute for PIN 31. */
#define SPU_GPIOPORT_PERM_PIN31_Pos (31UL)
#define SPU_GPIOPORT_PERM_PIN31_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN31_Pos)
#define SPU_GPIOPORT_PERM_PIN31_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN31_Secure (0x1UL)

/* Bit 30 : Select secure attribute attribute for PIN 30. */
#define SPU_GPIOPORT_PERM_PIN30_Pos (30UL)
#define SPU_GPIOPORT_PERM_PIN30_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN30_Pos)
#define SPU_GPIOPORT_PERM_PIN30_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN30_Secure (0x1UL)

/* Bit 29 : Select secure attribute attribute for PIN 29. */
#define SPU_GPIOPORT_PERM_PIN29_Pos (29UL)
#define SPU_GPIOPORT_PERM_PIN29_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN29_Pos)
#define SPU_GPIOPORT_PERM_PIN29_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN29_Secure (0x1UL)

/* Bit 28 : Select secure attribute attribute for PIN 28. */
#define SPU_GPIOPORT_PERM_PIN28_Pos (28UL)
#define SPU_GPIOPORT_PERM_PIN28_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN28_Pos)
#define SPU_GPIOPORT_PERM_PIN28_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN28_Secure (0x1UL)

/* Bit 27 : Select secure attribute attribute for PIN 27. */
#define SPU_GPIOPORT_PERM_PIN27_Pos (27UL)
#define SPU_GPIOPORT_PERM_PIN27_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN27_Pos)
#define SPU_GPIOPORT_PERM_PIN27_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN27_Secure (0x1UL)

/* Bit 26 : Select secure attribute attribute for PIN 26. */
#define SPU_GPIOPORT_PERM_PIN26_Pos (26UL)
#define SPU_GPIOPORT_PERM_PIN26_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN26_Pos)
#define SPU_GPIOPORT_PERM_PIN26_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN26_Secure (0x1UL)

/* Bit 25 : Select secure attribute attribute for PIN 25. */
#define SPU_GPIOPORT_PERM_PIN25_Pos (25UL)
#define SPU_GPIOPORT_PERM_PIN25_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN25_Pos)
#define SPU_GPIOPORT_PERM_PIN25_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN25_Secure (0x1UL)

/* Bit 24 : Select secure attribute attribute for PIN 24. */
#define SPU_GPIOPORT_PERM_PIN24_Pos (24UL)
#define SPU_GPIOPORT_PERM_PIN24_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN24_Pos)
#define SPU_GPIOPORT_PERM_PIN24_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN24_Secure (0x1UL)

/* Bit 23 : Select secure attribute attribute for PIN 23. */
#define SPU_GPIOPORT_PERM_PIN23_Pos (23UL)
#define SPU_GPIOPORT_PERM_PIN23_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN23_Pos)
#define SPU_GPIOPORT_PERM_PIN23_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN23_Secure (0x1UL)

/* Bit 22 : Select secure attribute attribute for PIN 22. */
#define SPU_GPIOPORT_PERM_PIN22_Pos (22UL)
#define SPU_GPIOPORT_PERM_PIN22_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN22_Pos)
#define SPU_GPIOPORT_PERM_PIN22_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN22_Secure (0x1UL)

/* Bit 21 : Select secure attribute attribute for PIN 21. */
#define SPU_GPIOPORT_PERM_PIN21_Pos (21UL)
#define SPU_GPIOPORT_PERM_PIN21_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN21_Pos)
#define SPU_GPIOPORT_PERM_PIN21_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN21_Secure (0x1UL)

/* Bit 20 : Select secure attribute attribute for PIN 20. */
#define SPU_GPIOPORT_PERM_PIN20_Pos (20UL)
#define SPU_GPIOPORT_PERM_PIN20_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN20_Pos)
#define SPU_GPIOPORT_PERM_PIN20_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN20_Secure (0x1UL)

/* Bit 19 : Select secure attribute attribute for PIN 19. */
#define SPU_GPIOPORT_PERM_PIN19_Pos (19UL)
#define SPU_GPIOPORT_PERM_PIN19_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN19_Pos)
#define SPU_GPIOPORT_PERM_PIN19_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN19_Secure (0x1UL)

/* Bit 18 : Select secure attribute attribute for PIN 18. */
#define SPU_GPIOPORT_PERM_PIN18_Pos (18UL)
#define SPU_GPIOPORT_PERM_PIN18_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN18_Pos)
#define SPU_GPIOPORT_PERM_PIN18_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN18_Secure (0x1UL)

/* Bit 17 : Select secure attribute attribute for PIN 17. */
#define SPU_GPIOPORT_PERM_PIN17_Pos (17UL)
#define SPU_GPIOPORT_PERM_PIN17_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN17_Pos)
#define SPU_GPIOPORT_PERM_PIN17_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN17_Secure (0x1UL)

/* Bit 16 : Select secure attribute attribute for PIN 16. */
#define SPU_GPIOPORT_PERM_PIN16_Pos (16UL)
#define SPU_GPIOPORT_PERM_PIN16_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN16_Pos)
#define SPU_GPIOPORT_PERM_PIN16_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN16_Secure (0x1UL)

/* Bit 15 : Select secure attribute attribute for PIN 15. */
#define SPU_GPIOPORT_PERM_PIN15_Pos (15UL)
#define SPU_GPIOPORT_PERM_PIN15_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN15_Pos)
#define SPU_GPIOPORT_PERM_PIN15_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN15_Secure (0x1UL)

/* Bit 14 : Select secure attribute attribute for PIN 14. */
#define SPU_GPIOPORT_PERM_PIN14_Pos (14UL)
#define SPU_GPIOPORT_PERM_PIN14_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN14_Pos)
#define SPU_GPIOPORT_PERM_PIN14_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN14_Secure (0x1UL)

/* Bit 13 : Select secure attribute attribute for PIN 13. */
#define SPU_GPIOPORT_PERM_PIN13_Pos (13UL)
#define SPU_GPIOPORT_PERM_PIN13_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN13_Pos)
#define SPU_GPIOPORT_PERM_PIN13_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN13_Secure (0x1UL)

/* Bit 12 : Select secure attribute attribute for PIN 12. */
#define SPU_GPIOPORT_PERM_PIN12_Pos (12UL)
#define SPU_GPIOPORT_PERM_PIN12_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN12_Pos)
#define SPU_GPIOPORT_PERM_PIN12_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN12_Secure (0x1UL)

/* Bit 11 : Select secure attribute attribute for PIN 11. */
#define SPU_GPIOPORT_PERM_PIN11_Pos (11UL)
#define SPU_GPIOPORT_PERM_PIN11_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN11_Pos)
#define SPU_GPIOPORT_PERM_PIN11_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN11_Secure (0x1UL)

/* Bit 10 : Select secure attribute attribute for PIN 10. */
#define SPU_GPIOPORT_PERM_PIN10_Pos (10UL)
#define SPU_GPIOPORT_PERM_PIN10_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN10_Pos)
#define SPU_GPIOPORT_PERM_PIN10_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN10_Secure (0x1UL)

/* Bit 9 : Select secure attribute attribute for PIN 9. */
#define SPU_GPIOPORT_PERM_PIN9_Pos (9UL)
#define SPU_GPIOPORT_PERM_PIN9_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN9_Pos)
#define SPU_GPIOPORT_PERM_PIN9_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN9_Secure (0x1UL)

/* Bit 8 : Select secure attribute attribute for PIN 8. */
#define SPU_GPIOPORT_PERM_PIN8_Pos (8UL)
#define SPU_GPIOPORT_PERM_PIN8_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN8_Pos)
#define SPU_GPIOPORT_PERM_PIN8_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN8_Secure (0x1UL)

/* Bit 7 : Select secure attribute attribute for PIN 7. */
#define SPU_GPIOPORT_PERM_PIN7_Pos (7UL)
#define SPU_GPIOPORT_PERM_PIN7_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN7_Pos)
#define SPU_GPIOPORT_PERM_PIN7_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN7_Secure (0x1UL)

/* Bit 6 : Select secure attribute attribute for PIN 6. */
#define SPU_GPIOPORT_PERM_PIN6_Pos (6UL)
#define SPU_GPIOPORT_PERM_PIN6_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN6_Pos)
#define SPU_GPIOPORT_PERM_PIN6_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN6_Secure (0x1UL)

/* Bit 5 : Select secure attribute attribute for PIN 5. */
#define SPU_GPIOPORT_PERM_PIN5_Pos (5UL)
#define SPU_GPIOPORT_PERM_PIN5_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN5_Pos)
#define SPU_GPIOPORT_PERM_PIN5_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN5_Secure (0x1UL)

/* Bit 4 : Select secure attribute attribute for PIN 4. */
#define SPU_GPIOPORT_PERM_PIN4_Pos (4UL)
#define SPU_GPIOPORT_PERM_PIN4_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN4_Pos)
#define SPU_GPIOPORT_PERM_PIN4_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN4_Secure (0x1UL)

/* Bit 3 : Select secure attribute attribute for PIN 3. */
#define SPU_GPIOPORT_PERM_PIN3_Pos (3UL)
#define SPU_GPIOPORT_PERM_PIN3_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN3_Pos)
#define SPU_GPIOPORT_PERM_PIN3_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN3_Secure (0x1UL)

/* Bit 2 : Select secure attribute attribute for PIN 2. */
#define SPU_GPIOPORT_PERM_PIN2_Pos (2UL)
#define SPU_GPIOPORT_PERM_PIN2_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN2_Pos)
#define SPU_GPIOPORT_PERM_PIN2_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN2_Secure (0x1UL)

/* Bit 1 : Select secure attribute attribute for PIN 1. */
#define SPU_GPIOPORT_PERM_PIN1_Pos (1UL)
#define SPU_GPIOPORT_PERM_PIN1_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN1_Pos)
#define SPU_GPIOPORT_PERM_PIN1_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN1_Secure (0x1UL)

/* Bit 0 : Select secure attribute attribute for PIN 0. */
#define SPU_GPIOPORT_PERM_PIN0_Pos (0UL)
#define SPU_GPIOPORT_PERM_PIN0_Msk (0x1UL << SPU_GPIOPORT_PERM_PIN0_Pos)
#define SPU_GPIOPORT_PERM_PIN0_NonSecure (0x0UL)
#define SPU_GPIOPORT_PERM_PIN0_Secure (0x1UL)

/* Register: SPU_GPIOPORT_LOCK */
/* Description: Description cluster: Prevent further modification of the corresponding PERM register */

/* Bit 0 :   */
#define SPU_GPIOPORT_LOCK_LOCK_Pos (0UL)
#define SPU_GPIOPORT_LOCK_LOCK_Msk (0x1UL << SPU_GPIOPORT_LOCK_LOCK_Pos)
#define SPU_GPIOPORT_LOCK_LOCK_Unlocked (0x0UL)
#define SPU_GPIOPORT_LOCK_LOCK_Locked (0x1UL)

/* Register: SPU_FLASHNSC_REGION */
/* Description: Description cluster: Define which flash region can contain the non-secure callable (NSC) region n */

/* Bit 8 :   */
#define SPU_FLASHNSC_REGION_LOCK_Pos (8UL)
#define SPU_FLASHNSC_REGION_LOCK_Msk (0x1UL << SPU_FLASHNSC_REGION_LOCK_Pos)
#define SPU_FLASHNSC_REGION_LOCK_Unlocked (0x0UL)
#define SPU_FLASHNSC_REGION_LOCK_Locked (0x1UL)

/* Bits 5..0 : Region number */
#define SPU_FLASHNSC_REGION_REGION_Pos (0UL)
#define SPU_FLASHNSC_REGION_REGION_Msk (0x3FUL << SPU_FLASHNSC_REGION_REGION_Pos)

/* Register: SPU_FLASHNSC_SIZE */
/* Description: Description cluster: Define the size of the non-secure callable (NSC) region n */

/* Bit 8 :   */
#define SPU_FLASHNSC_SIZE_LOCK_Pos (8UL)
#define SPU_FLASHNSC_SIZE_LOCK_Msk (0x1UL << SPU_FLASHNSC_SIZE_LOCK_Pos)
#define SPU_FLASHNSC_SIZE_LOCK_Unlocked (0x0UL)
#define SPU_FLASHNSC_SIZE_LOCK_Locked (0x1UL)

/* Bits 3..0 : Size of the non-secure callable (NSC) region n */
#define SPU_FLASHNSC_SIZE_SIZE_Pos (0UL)
#define SPU_FLASHNSC_SIZE_SIZE_Msk (0xFUL << SPU_FLASHNSC_SIZE_SIZE_Pos)
#define SPU_FLASHNSC_SIZE_SIZE_Disabled (0x0UL)
#define SPU_FLASHNSC_SIZE_SIZE_32 (0x1UL)
#define SPU_FLASHNSC_SIZE_SIZE_64 (0x2UL)
#define SPU_FLASHNSC_SIZE_SIZE_128 (0x3UL)
#define SPU_FLASHNSC_SIZE_SIZE_256 (0x4UL)
#define SPU_FLASHNSC_SIZE_SIZE_512 (0x5UL)
#define SPU_FLASHNSC_SIZE_SIZE_1024 (0x6UL)
#define SPU_FLASHNSC_SIZE_SIZE_2048 (0x7UL)
#define SPU_FLASHNSC_SIZE_SIZE_4096 (0x8UL)

/* Register: SPU_RAMNSC_REGION */
/* Description: Description cluster: Define which RAM region can contain the non-secure callable (NSC) region n */

/* Bit 8 :   */
#define SPU_RAMNSC_REGION_LOCK_Pos (8UL)
#define SPU_RAMNSC_REGION_LOCK_Msk (0x1UL << SPU_RAMNSC_REGION_LOCK_Pos)
#define SPU_RAMNSC_REGION_LOCK_Unlocked (0x0UL)
#define SPU_RAMNSC_REGION_LOCK_Locked (0x1UL)

/* Bits 5..0 : Region number */
#define SPU_RAMNSC_REGION_REGION_Pos (0UL)
#define SPU_RAMNSC_REGION_REGION_Msk (0x3FUL << SPU_RAMNSC_REGION_REGION_Pos)

/* Register: SPU_RAMNSC_SIZE */
/* Description: Description cluster: Define the size of the non-secure callable (NSC) region n */

/* Bit 8 :   */
#define SPU_RAMNSC_SIZE_LOCK_Pos (8UL)
#define SPU_RAMNSC_SIZE_LOCK_Msk (0x1UL << SPU_RAMNSC_SIZE_LOCK_Pos)
#define SPU_RAMNSC_SIZE_LOCK_Unlocked (0x0UL)
#define SPU_RAMNSC_SIZE_LOCK_Locked (0x1UL)

/* Bits 3..0 : Size of the non-secure callable (NSC) region n */
#define SPU_RAMNSC_SIZE_SIZE_Pos (0UL)
#define SPU_RAMNSC_SIZE_SIZE_Msk (0xFUL << SPU_RAMNSC_SIZE_SIZE_Pos)
#define SPU_RAMNSC_SIZE_SIZE_Disabled (0x0UL)
#define SPU_RAMNSC_SIZE_SIZE_32 (0x1UL)
#define SPU_RAMNSC_SIZE_SIZE_64 (0x2UL)
#define SPU_RAMNSC_SIZE_SIZE_128 (0x3UL)
#define SPU_RAMNSC_SIZE_SIZE_256 (0x4UL)
#define SPU_RAMNSC_SIZE_SIZE_512 (0x5UL)
#define SPU_RAMNSC_SIZE_SIZE_1024 (0x6UL)
#define SPU_RAMNSC_SIZE_SIZE_2048 (0x7UL)
#define SPU_RAMNSC_SIZE_SIZE_4096 (0x8UL)

/* Register: SPU_FLASHREGION_PERM */
/* Description: Description cluster: Access permissions for flash region n */

/* Bit 8 :   */
#define SPU_FLASHREGION_PERM_LOCK_Pos (8UL)
#define SPU_FLASHREGION_PERM_LOCK_Msk (0x1UL << SPU_FLASHREGION_PERM_LOCK_Pos)
#define SPU_FLASHREGION_PERM_LOCK_Unlocked (0x0UL)
#define SPU_FLASHREGION_PERM_LOCK_Locked (0x1UL)

/* Bit 4 : Security attribute for flash region n */
#define SPU_FLASHREGION_PERM_SECATTR_Pos (4UL)
#define SPU_FLASHREGION_PERM_SECATTR_Msk (0x1UL << SPU_FLASHREGION_PERM_SECATTR_Pos)
#define SPU_FLASHREGION_PERM_SECATTR_Non_Secure (0x0UL)
#define SPU_FLASHREGION_PERM_SECATTR_Secure (0x1UL)

/* Bit 2 : Configure read permissions for flash region n */
#define SPU_FLASHREGION_PERM_READ_Pos (2UL)
#define SPU_FLASHREGION_PERM_READ_Msk (0x1UL << SPU_FLASHREGION_PERM_READ_Pos)
#define SPU_FLASHREGION_PERM_READ_Disable (0x0UL)
#define SPU_FLASHREGION_PERM_READ_Enable (0x1UL)

/* Bit 1 : Configure write permission for flash region n */
#define SPU_FLASHREGION_PERM_WRITE_Pos (1UL)
#define SPU_FLASHREGION_PERM_WRITE_Msk (0x1UL << SPU_FLASHREGION_PERM_WRITE_Pos)
#define SPU_FLASHREGION_PERM_WRITE_Disable (0x0UL)
#define SPU_FLASHREGION_PERM_WRITE_Enable (0x1UL)

/* Bit 0 : Configure instruction fetch permissions from flash region n */
#define SPU_FLASHREGION_PERM_EXECUTE_Pos (0UL)
#define SPU_FLASHREGION_PERM_EXECUTE_Msk (0x1UL << SPU_FLASHREGION_PERM_EXECUTE_Pos)
#define SPU_FLASHREGION_PERM_EXECUTE_Disable (0x0UL)
#define SPU_FLASHREGION_PERM_EXECUTE_Enable (0x1UL)

/* Register: SPU_RAMREGION_PERM */
/* Description: Description cluster: Access permissions for RAM region n */

/* Bit 8 :   */
#define SPU_RAMREGION_PERM_LOCK_Pos (8UL)
#define SPU_RAMREGION_PERM_LOCK_Msk (0x1UL << SPU_RAMREGION_PERM_LOCK_Pos)
#define SPU_RAMREGION_PERM_LOCK_Unlocked (0x0UL)
#define SPU_RAMREGION_PERM_LOCK_Locked (0x1UL)

/* Bit 4 : Security attribute for RAM region n */
#define SPU_RAMREGION_PERM_SECATTR_Pos (4UL)
#define SPU_RAMREGION_PERM_SECATTR_Msk (0x1UL << SPU_RAMREGION_PERM_SECATTR_Pos)
#define SPU_RAMREGION_PERM_SECATTR_Non_Secure (0x0UL)
#define SPU_RAMREGION_PERM_SECATTR_Secure (0x1UL)

/* Bit 2 : Configure read permissions for RAM region n */
#define SPU_RAMREGION_PERM_READ_Pos (2UL)
#define SPU_RAMREGION_PERM_READ_Msk (0x1UL << SPU_RAMREGION_PERM_READ_Pos)
#define SPU_RAMREGION_PERM_READ_Disable (0x0UL)
#define SPU_RAMREGION_PERM_READ_Enable (0x1UL)

/* Bit 1 : Configure write permission for RAM region n */
#define SPU_RAMREGION_PERM_WRITE_Pos (1UL)
#define SPU_RAMREGION_PERM_WRITE_Msk (0x1UL << SPU_RAMREGION_PERM_WRITE_Pos)
#define SPU_RAMREGION_PERM_WRITE_Disable (0x0UL)
#define SPU_RAMREGION_PERM_WRITE_Enable (0x1UL)

/* Bit 0 : Configure instruction fetch permissions from RAM region n */
#define SPU_RAMREGION_PERM_EXECUTE_Pos (0UL)
#define SPU_RAMREGION_PERM_EXECUTE_Msk (0x1UL << SPU_RAMREGION_PERM_EXECUTE_Pos)
#define SPU_RAMREGION_PERM_EXECUTE_Disable (0x0UL)
#define SPU_RAMREGION_PERM_EXECUTE_Enable (0x1UL)

/* Register: SPU_PERIPHID_PERM */
/* Description: Description cluster: List capabilities and access permissions for the peripheral with ID n */

/* Bit 31 : Indicate if a peripheral is present with ID n */
#define SPU_PERIPHID_PERM_PRESENT_Pos (31UL)
#define SPU_PERIPHID_PERM_PRESENT_Msk (0x1UL << SPU_PERIPHID_PERM_PRESENT_Pos)
#define SPU_PERIPHID_PERM_PRESENT_NotPresent (0x0UL)
#define SPU_PERIPHID_PERM_PRESENT_IsPresent (0x1UL)

/* Bit 8 :   */
#define SPU_PERIPHID_PERM_LOCK_Pos (8UL)
#define SPU_PERIPHID_PERM_LOCK_Msk (0x1UL << SPU_PERIPHID_PERM_LOCK_Pos)
#define SPU_PERIPHID_PERM_LOCK_Unlocked (0x0UL)
#define SPU_PERIPHID_PERM_LOCK_Locked (0x1UL)

/* Bit 5 : Security attribution for the DMA transfer */
#define SPU_PERIPHID_PERM_DMASEC_Pos (5UL)
#define SPU_PERIPHID_PERM_DMASEC_Msk (0x1UL << SPU_PERIPHID_PERM_DMASEC_Pos)
#define SPU_PERIPHID_PERM_DMASEC_NonSecure (0x0UL)
#define SPU_PERIPHID_PERM_DMASEC_Secure (0x1UL)

/* Bit 4 : Peripheral security mapping */
#define SPU_PERIPHID_PERM_SECATTR_Pos (4UL)
#define SPU_PERIPHID_PERM_SECATTR_Msk (0x1UL << SPU_PERIPHID_PERM_SECATTR_Pos)
#define SPU_PERIPHID_PERM_SECATTR_NonSecure (0x0UL)
#define SPU_PERIPHID_PERM_SECATTR_Secure (0x1UL)

/* Bits 3..2 : Indicates if the peripheral has DMA capabilities and if DMA transfer can be assigned to a different security attribute than the peripheral itself */
#define SPU_PERIPHID_PERM_DMA_Pos (2UL)
#define SPU_PERIPHID_PERM_DMA_Msk (0x3UL << SPU_PERIPHID_PERM_DMA_Pos)
#define SPU_PERIPHID_PERM_DMA_NoDMA (0x0UL)
#define SPU_PERIPHID_PERM_DMA_NoSeparateAttribute (0x1UL)
#define SPU_PERIPHID_PERM_DMA_SeparateAttribute (0x2UL)

/* Bits 1..0 : Define configuration capabilities for Arm TrustZone Cortex-M secure attribute */
#define SPU_PERIPHID_PERM_SECUREMAPPING_Pos (0UL)
#define SPU_PERIPHID_PERM_SECUREMAPPING_Msk (0x3UL << SPU_PERIPHID_PERM_SECUREMAPPING_Pos)
#define SPU_PERIPHID_PERM_SECUREMAPPING_NonSecure (0x0UL)
#define SPU_PERIPHID_PERM_SECUREMAPPING_Secure (0x1UL)
#define SPU_PERIPHID_PERM_SECUREMAPPING_UserSelectable (0x2UL)
#define SPU_PERIPHID_PERM_SECUREMAPPING_Split (0x3UL)


/* Peripheral: TAD */
/* Description: Trace and debug control */

/* Register: TAD_CLOCKSTART */
/* Description: Start all trace and debug clocks. */

/* Bit 0 :   */
#define TAD_CLOCKSTART_START_Pos (0UL)
#define TAD_CLOCKSTART_START_Msk (0x1UL << TAD_CLOCKSTART_START_Pos)
#define TAD_CLOCKSTART_START_Start (0x1UL)

/* Register: TAD_CLOCKSTOP */
/* Description: Stop all trace and debug clocks. */

/* Bit 0 :   */
#define TAD_CLOCKSTOP_STOP_Pos (0UL)
#define TAD_CLOCKSTOP_STOP_Msk (0x1UL << TAD_CLOCKSTOP_STOP_Pos)
#define TAD_CLOCKSTOP_STOP_Stop (0x1UL)

/* Register: TAD_ENABLE */
/* Description: Enable debug domain and aquire selected GPIOs */

/* Bit 0 :   */
#define TAD_ENABLE_ENABLE_Pos (0UL)
#define TAD_ENABLE_ENABLE_Msk (0x1UL << TAD_ENABLE_ENABLE_Pos)
#define TAD_ENABLE_ENABLE_DISABLED (0x0UL)
#define TAD_ENABLE_ENABLE_ENABLED (0x1UL)

/* Register: TAD_PSEL_TRACECLK */
/* Description: Pin configuration for TRACECLK */

/* Bit 31 : Connection */
#define TAD_PSEL_TRACECLK_CONNECT_Pos (31UL)
#define TAD_PSEL_TRACECLK_CONNECT_Msk (0x1UL << TAD_PSEL_TRACECLK_CONNECT_Pos)
#define TAD_PSEL_TRACECLK_CONNECT_Connected (0x0UL)
#define TAD_PSEL_TRACECLK_CONNECT_Disconnected (0x1UL)

/* Bits 4..0 : Pin number */
#define TAD_PSEL_TRACECLK_PIN_Pos (0UL)
#define TAD_PSEL_TRACECLK_PIN_Msk (0x1FUL << TAD_PSEL_TRACECLK_PIN_Pos)
#define TAD_PSEL_TRACECLK_PIN_Traceclk (0x0CUL)

/* Register: TAD_PSEL_TRACEDATA0 */
/* Description: Pin configuration for TRACEDATA[0] */

/* Bit 31 : Connection */
#define TAD_PSEL_TRACEDATA0_CONNECT_Pos (31UL)
#define TAD_PSEL_TRACEDATA0_CONNECT_Msk (0x1UL << TAD_PSEL_TRACEDATA0_CONNECT_Pos)
#define TAD_PSEL_TRACEDATA0_CONNECT_Connected (0x0UL)
#define TAD_PSEL_TRACEDATA0_CONNECT_Disconnected (0x1UL)

/* Bits 4..0 : Pin number */
#define TAD_PSEL_TRACEDATA0_PIN_Pos (0UL)
#define TAD_PSEL_TRACEDATA0_PIN_Msk (0x1FUL << TAD_PSEL_TRACEDATA0_PIN_Pos)
#define TAD_PSEL_TRACEDATA0_PIN_Tracedata0 (0x0BUL)

/* Register: TAD_PSEL_TRACEDATA1 */
/* Description: Pin configuration for TRACEDATA[1] */

/* Bit 31 : Connection */
#define TAD_PSEL_TRACEDATA1_CONNECT_Pos (31UL)
#define TAD_PSEL_TRACEDATA1_CONNECT_Msk (0x1UL << TAD_PSEL_TRACEDATA1_CONNECT_Pos)
#define TAD_PSEL_TRACEDATA1_CONNECT_Connected (0x0UL)
#define TAD_PSEL_TRACEDATA1_CONNECT_Disconnected (0x1UL)

/* Bits 4..0 : Pin number */
#define TAD_PSEL_TRACEDATA1_PIN_Pos (0UL)
#define TAD_PSEL_TRACEDATA1_PIN_Msk (0x1FUL << TAD_PSEL_TRACEDATA1_PIN_Pos)
#define TAD_PSEL_TRACEDATA1_PIN_Tracedata1 (0x0AUL)

/* Register: TAD_PSEL_TRACEDATA2 */
/* Description: Pin configuration for TRACEDATA[2] */

/* Bit 31 : Connection */
#define TAD_PSEL_TRACEDATA2_CONNECT_Pos (31UL)
#define TAD_PSEL_TRACEDATA2_CONNECT_Msk (0x1UL << TAD_PSEL_TRACEDATA2_CONNECT_Pos)
#define TAD_PSEL_TRACEDATA2_CONNECT_Connected (0x0UL)
#define TAD_PSEL_TRACEDATA2_CONNECT_Disconnected (0x1UL)

/* Bits 4..0 : Pin number */
#define TAD_PSEL_TRACEDATA2_PIN_Pos (0UL)
#define TAD_PSEL_TRACEDATA2_PIN_Msk (0x1FUL << TAD_PSEL_TRACEDATA2_PIN_Pos)
#define TAD_PSEL_TRACEDATA2_PIN_Tracedata2 (0x09UL)

/* Register: TAD_PSEL_TRACEDATA3 */
/* Description: Pin configuration for TRACEDATA[3] */

/* Bit 31 : Connection */
#define TAD_PSEL_TRACEDATA3_CONNECT_Pos (31UL)
#define TAD_PSEL_TRACEDATA3_CONNECT_Msk (0x1UL << TAD_PSEL_TRACEDATA3_CONNECT_Pos)
#define TAD_PSEL_TRACEDATA3_CONNECT_Connected (0x0UL)
#define TAD_PSEL_TRACEDATA3_CONNECT_Disconnected (0x1UL)

/* Bits 4..0 : Pin number */
#define TAD_PSEL_TRACEDATA3_PIN_Pos (0UL)
#define TAD_PSEL_TRACEDATA3_PIN_Msk (0x1FUL << TAD_PSEL_TRACEDATA3_PIN_Pos)
#define TAD_PSEL_TRACEDATA3_PIN_Tracedata3 (0x08UL)

/* Register: TAD_TRACEPORTSPEED */
/* Description: Clocking options for the Trace Port debug interface Reset behavior is the same as debug components */

/* Bits 1..0 : Speed of Trace Port clock. Note that the TRACECLK pin output will be divided again by two from the Trace Port clock. */
#define TAD_TRACEPORTSPEED_TRACEPORTSPEED_Pos (0UL)
#define TAD_TRACEPORTSPEED_TRACEPORTSPEED_Msk (0x3UL << TAD_TRACEPORTSPEED_TRACEPORTSPEED_Pos)
#define TAD_TRACEPORTSPEED_TRACEPORTSPEED_64MHz (0x0UL)
#define TAD_TRACEPORTSPEED_TRACEPORTSPEED_32MHz (0x1UL)
#define TAD_TRACEPORTSPEED_TRACEPORTSPEED_16MHz (0x2UL)
#define TAD_TRACEPORTSPEED_TRACEPORTSPEED_8MHz (0x3UL)


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
/* Description: I2C compatible Two-Wire Master Interface with EasyDMA 0 */

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
/* Description: I2C compatible Two-Wire Slave Interface with EasyDMA 0 */

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
/* Description: UART with EasyDMA 0 */

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
/* Description: User Information Configuration Registers User information configuration registers */

/* Register: UICR_APPROTECT */
/* Description: Access port protection */

/* Bits 31..0 : Blocks debugger read/write access to all CPU registers and
          memory mapped addresses. */
#define UICR_APPROTECT_PALL_Pos (0UL)
#define UICR_APPROTECT_PALL_Msk (0xFFFFFFFFUL << UICR_APPROTECT_PALL_Pos)
#define UICR_APPROTECT_PALL_Protected (0x00000000UL)
#define UICR_APPROTECT_PALL_Unprotected (0x50FA50FAUL)

/* Register: UICR_VREGHVOUT */
/* Description: Output voltage from the high voltage (VREGH) regulator stage. The maximum output voltage from this stage is given as VDDH - VREGHDROP. */

/* Bits 2..0 : VREGH regulator output voltage. */
#define UICR_VREGHVOUT_VREGHVOUT_Pos (0UL)
#define UICR_VREGHVOUT_VREGHVOUT_Msk (0x7UL << UICR_VREGHVOUT_VREGHVOUT_Pos)
#define UICR_VREGHVOUT_VREGHVOUT_1V8 (0x0UL)
#define UICR_VREGHVOUT_VREGHVOUT_2V1 (0x1UL)
#define UICR_VREGHVOUT_VREGHVOUT_2V4 (0x2UL)
#define UICR_VREGHVOUT_VREGHVOUT_2V7 (0x3UL)
#define UICR_VREGHVOUT_VREGHVOUT_3V0 (0x4UL)
#define UICR_VREGHVOUT_VREGHVOUT_3V3 (0x5UL)
#define UICR_VREGHVOUT_VREGHVOUT_DEFAULT (0x7UL)

/* Register: UICR_HFXOCNT */
/* Description: HFXO startup counter */

/* Bits 7..0 : HFXO startup counter. Total debounce time = HFXOCNT*64 us + 0.5 us */
#define UICR_HFXOCNT_HFXOCNT_Pos (0UL)
#define UICR_HFXOCNT_HFXOCNT_Msk (0xFFUL << UICR_HFXOCNT_HFXOCNT_Pos)
#define UICR_HFXOCNT_HFXOCNT_MinDebounceTime (0x00UL)
#define UICR_HFXOCNT_HFXOCNT_MaxDebounceTime (0xFEUL)
#define UICR_HFXOCNT_HFXOCNT_DefaultDebounceTime (0xFFUL)

/* Register: UICR_SECUREAPPROTECT */
/* Description: Secure access port protection */

/* Bits 31..0 : Blocks debugger read/write access to all secure CPU registers and secure memory
        mapped addresses. */
#define UICR_SECUREAPPROTECT_PALL_Pos (0UL)
#define UICR_SECUREAPPROTECT_PALL_Msk (0xFFFFFFFFUL << UICR_SECUREAPPROTECT_PALL_Pos)
#define UICR_SECUREAPPROTECT_PALL_Protected (0x00000000UL)
#define UICR_SECUREAPPROTECT_PALL_Unprotected (0x50FA50FAUL)

/* Register: UICR_ERASEPROTECT */
/* Description: Erase protection */

/* Bits 31..0 : Blocks NVMC ERASEALL and CTRLAP ERASEALL functionality. Using any value except Unprotected will lead to the protection being enabled. */
#define UICR_ERASEPROTECT_PALL_Pos (0UL)
#define UICR_ERASEPROTECT_PALL_Msk (0xFFFFFFFFUL << UICR_ERASEPROTECT_PALL_Pos)
#define UICR_ERASEPROTECT_PALL_Protected (0x00000000UL)
#define UICR_ERASEPROTECT_PALL_Unprotected (0xFFFFFFFFUL)

/* Register: UICR_TINSTANCE */
/* Description: SW-DP Target instance */

/* Bits 31..28 : TINSTANCE bits are negated and used in the SW-DP DLPIDR.TINSTANCE field. E.g. 0xF in this field is translated to 0x0 in DLPIDR.TINSTANCE field. */
#define UICR_TINSTANCE_TINSTANCE_Pos (28UL)
#define UICR_TINSTANCE_TINSTANCE_Msk (0xFUL << UICR_TINSTANCE_TINSTANCE_Pos)

/* Register: UICR_NFCPINS */
/* Description: Setting of pins dedicated to NFC functionality: NFC antenna or GPIO */

/* Bit 0 : Setting of pins dedicated to NFC functionality */
#define UICR_NFCPINS_PROTECT_Pos (0UL)
#define UICR_NFCPINS_PROTECT_Msk (0x1UL << UICR_NFCPINS_PROTECT_Pos)
#define UICR_NFCPINS_PROTECT_Disabled (0x0UL)
#define UICR_NFCPINS_PROTECT_NFC (0x1UL)

/* Register: UICR_OTP */
/* Description: Description collection: One time programmable memory */

/* Bits 31..16 : Upper half word */
#define UICR_OTP_UPPER_Pos (16UL)
#define UICR_OTP_UPPER_Msk (0xFFFFUL << UICR_OTP_UPPER_Pos)

/* Bits 15..0 : Lower half word */
#define UICR_OTP_LOWER_Pos (0UL)
#define UICR_OTP_LOWER_Msk (0xFFFFUL << UICR_OTP_LOWER_Pos)

/* Register: UICR_KEYSLOT_CONFIG_DEST */
/* Description: Description cluster: Destination address where content of the key value registers (KEYSLOT.KEYn.VALUE[0-3])
          will be pushed by KMU. Note that this address must match that of a peripherals
          APB mapped write-only key registers, else the KMU can push this key value into
          an address range which the CPU can potentially read. */

/* Bits 31..0 : Secure APB destination address */
#define UICR_KEYSLOT_CONFIG_DEST_DEST_Pos (0UL)
#define UICR_KEYSLOT_CONFIG_DEST_DEST_Msk (0xFFFFFFFFUL << UICR_KEYSLOT_CONFIG_DEST_DEST_Pos)

/* Register: UICR_KEYSLOT_CONFIG_PERM */
/* Description: Description cluster: Define permissions for the key slot. Bits 0-15 and 16-31 can only be written when equal to 0xFFFF. */

/* Bit 16 : Revocation state for the key slot */
#define UICR_KEYSLOT_CONFIG_PERM_STATE_Pos (16UL)
#define UICR_KEYSLOT_CONFIG_PERM_STATE_Msk (0x1UL << UICR_KEYSLOT_CONFIG_PERM_STATE_Pos)
#define UICR_KEYSLOT_CONFIG_PERM_STATE_Revoked (0x0UL)
#define UICR_KEYSLOT_CONFIG_PERM_STATE_Active (0x1UL)

/* Bit 2 : Push permission for key slot */
#define UICR_KEYSLOT_CONFIG_PERM_PUSH_Pos (2UL)
#define UICR_KEYSLOT_CONFIG_PERM_PUSH_Msk (0x1UL << UICR_KEYSLOT_CONFIG_PERM_PUSH_Pos)
#define UICR_KEYSLOT_CONFIG_PERM_PUSH_Disabled (0x0UL)
#define UICR_KEYSLOT_CONFIG_PERM_PUSH_Enabled (0x1UL)

/* Bit 1 : Read permission for key slot */
#define UICR_KEYSLOT_CONFIG_PERM_READ_Pos (1UL)
#define UICR_KEYSLOT_CONFIG_PERM_READ_Msk (0x1UL << UICR_KEYSLOT_CONFIG_PERM_READ_Pos)
#define UICR_KEYSLOT_CONFIG_PERM_READ_Disabled (0x0UL)
#define UICR_KEYSLOT_CONFIG_PERM_READ_Enabled (0x1UL)

/* Bit 0 : Write permission for key slot */
#define UICR_KEYSLOT_CONFIG_PERM_WRITE_Pos (0UL)
#define UICR_KEYSLOT_CONFIG_PERM_WRITE_Msk (0x1UL << UICR_KEYSLOT_CONFIG_PERM_WRITE_Pos)
#define UICR_KEYSLOT_CONFIG_PERM_WRITE_Disabled (0x0UL)
#define UICR_KEYSLOT_CONFIG_PERM_WRITE_Enabled (0x1UL)

/* Register: UICR_KEYSLOT_KEY_VALUE */
/* Description: Description collection: Define bits [31+o*32:0+o*32] of value assigned to KMU key slot. */

/* Bits 31..0 : Define bits [31+o*32:0+o*32] of value assigned to KMU key slot */
#define UICR_KEYSLOT_KEY_VALUE_VALUE_Pos (0UL)
#define UICR_KEYSLOT_KEY_VALUE_VALUE_Msk (0xFFFFFFFFUL << UICR_KEYSLOT_KEY_VALUE_VALUE_Pos)


/* Peripheral: USBD */
/* Description: Universal serial bus device 0 */

/* Register: USBD_TASKS_STARTEPIN */
/* Description: Description collection: Captures the EPIN[n].PTR and EPIN[n].MAXCNT registers values, and enables endpoint IN n to respond to traffic from host */

/* Bit 0 : Captures the EPIN[n].PTR and EPIN[n].MAXCNT registers values, and enables endpoint IN n to respond to traffic from host */
#define USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Pos (0UL)
#define USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Msk (0x1UL << USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Pos)
#define USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Trigger (0x1UL)

/* Register: USBD_TASKS_STARTISOIN */
/* Description: Captures the ISOIN.PTR and ISOIN.MAXCNT registers values, and enables sending data on ISO endpoint */

/* Bit 0 : Captures the ISOIN.PTR and ISOIN.MAXCNT registers values, and enables sending data on ISO endpoint */
#define USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Pos (0UL)
#define USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Msk (0x1UL << USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Pos)
#define USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Trigger (0x1UL)

/* Register: USBD_TASKS_STARTEPOUT */
/* Description: Description collection: Captures the EPOUT[n].PTR and EPOUT[n].MAXCNT registers values, and enables endpoint n to respond to traffic from host */

/* Bit 0 : Captures the EPOUT[n].PTR and EPOUT[n].MAXCNT registers values, and enables endpoint n to respond to traffic from host */
#define USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Pos (0UL)
#define USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Msk (0x1UL << USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Pos)
#define USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Trigger (0x1UL)

/* Register: USBD_TASKS_STARTISOOUT */
/* Description: Captures the ISOOUT.PTR and ISOOUT.MAXCNT registers values, and enables receiving of data on ISO endpoint */

/* Bit 0 : Captures the ISOOUT.PTR and ISOOUT.MAXCNT registers values, and enables receiving of data on ISO endpoint */
#define USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Pos (0UL)
#define USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Msk (0x1UL << USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Pos)
#define USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Trigger (0x1UL)

/* Register: USBD_TASKS_EP0RCVOUT */
/* Description: Allows OUT data stage on control endpoint 0 */

/* Bit 0 : Allows OUT data stage on control endpoint 0 */
#define USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Pos (0UL)
#define USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Msk (0x1UL << USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Pos)
#define USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Trigger (0x1UL)

/* Register: USBD_TASKS_EP0STATUS */
/* Description: Allows status stage on control endpoint 0 */

/* Bit 0 : Allows status stage on control endpoint 0 */
#define USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Pos (0UL)
#define USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Msk (0x1UL << USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Pos)
#define USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Trigger (0x1UL)

/* Register: USBD_TASKS_EP0STALL */
/* Description: Stalls data and status stage on control endpoint 0 */

/* Bit 0 : Stalls data and status stage on control endpoint 0 */
#define USBD_TASKS_EP0STALL_TASKS_EP0STALL_Pos (0UL)
#define USBD_TASKS_EP0STALL_TASKS_EP0STALL_Msk (0x1UL << USBD_TASKS_EP0STALL_TASKS_EP0STALL_Pos)
#define USBD_TASKS_EP0STALL_TASKS_EP0STALL_Trigger (0x1UL)

/* Register: USBD_TASKS_DPDMDRIVE */
/* Description: Forces D+ and D- lines into the state defined in the DPDMVALUE register */

/* Bit 0 : Forces D+ and D- lines into the state defined in the DPDMVALUE register */
#define USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Pos (0UL)
#define USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Msk (0x1UL << USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Pos)
#define USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Trigger (0x1UL)

/* Register: USBD_TASKS_DPDMNODRIVE */
/* Description: Stops forcing D+ and D- lines into any state (USB engine takes control) */

/* Bit 0 : Stops forcing D+ and D- lines into any state (USB engine takes control) */
#define USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Pos (0UL)
#define USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Msk (0x1UL << USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Pos)
#define USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Trigger (0x1UL)

/* Register: USBD_SUBSCRIBE_STARTEPIN */
/* Description: Description collection: Subscribe configuration for task STARTEPIN[n] */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_STARTEPIN_EN_Pos (31UL)
#define USBD_SUBSCRIBE_STARTEPIN_EN_Msk (0x1UL << USBD_SUBSCRIBE_STARTEPIN_EN_Pos)
#define USBD_SUBSCRIBE_STARTEPIN_EN_Disabled (0x0UL)
#define USBD_SUBSCRIBE_STARTEPIN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STARTEPIN[n] will subscribe to */
#define USBD_SUBSCRIBE_STARTEPIN_CHIDX_Pos (0UL)
#define USBD_SUBSCRIBE_STARTEPIN_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_STARTEPIN_CHIDX_Pos)

/* Register: USBD_SUBSCRIBE_STARTISOIN */
/* Description: Subscribe configuration for task STARTISOIN */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_STARTISOIN_EN_Pos (31UL)
#define USBD_SUBSCRIBE_STARTISOIN_EN_Msk (0x1UL << USBD_SUBSCRIBE_STARTISOIN_EN_Pos)
#define USBD_SUBSCRIBE_STARTISOIN_EN_Disabled (0x0UL)
#define USBD_SUBSCRIBE_STARTISOIN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STARTISOIN will subscribe to */
#define USBD_SUBSCRIBE_STARTISOIN_CHIDX_Pos (0UL)
#define USBD_SUBSCRIBE_STARTISOIN_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_STARTISOIN_CHIDX_Pos)

/* Register: USBD_SUBSCRIBE_STARTEPOUT */
/* Description: Description collection: Subscribe configuration for task STARTEPOUT[n] */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_STARTEPOUT_EN_Pos (31UL)
#define USBD_SUBSCRIBE_STARTEPOUT_EN_Msk (0x1UL << USBD_SUBSCRIBE_STARTEPOUT_EN_Pos)
#define USBD_SUBSCRIBE_STARTEPOUT_EN_Disabled (0x0UL)
#define USBD_SUBSCRIBE_STARTEPOUT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STARTEPOUT[n] will subscribe to */
#define USBD_SUBSCRIBE_STARTEPOUT_CHIDX_Pos (0UL)
#define USBD_SUBSCRIBE_STARTEPOUT_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_STARTEPOUT_CHIDX_Pos)

/* Register: USBD_SUBSCRIBE_STARTISOOUT */
/* Description: Subscribe configuration for task STARTISOOUT */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_STARTISOOUT_EN_Pos (31UL)
#define USBD_SUBSCRIBE_STARTISOOUT_EN_Msk (0x1UL << USBD_SUBSCRIBE_STARTISOOUT_EN_Pos)
#define USBD_SUBSCRIBE_STARTISOOUT_EN_Disabled (0x0UL)
#define USBD_SUBSCRIBE_STARTISOOUT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task STARTISOOUT will subscribe to */
#define USBD_SUBSCRIBE_STARTISOOUT_CHIDX_Pos (0UL)
#define USBD_SUBSCRIBE_STARTISOOUT_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_STARTISOOUT_CHIDX_Pos)

/* Register: USBD_SUBSCRIBE_EP0RCVOUT */
/* Description: Subscribe configuration for task EP0RCVOUT */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_EP0RCVOUT_EN_Pos (31UL)
#define USBD_SUBSCRIBE_EP0RCVOUT_EN_Msk (0x1UL << USBD_SUBSCRIBE_EP0RCVOUT_EN_Pos)
#define USBD_SUBSCRIBE_EP0RCVOUT_EN_Disabled (0x0UL)
#define USBD_SUBSCRIBE_EP0RCVOUT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task EP0RCVOUT will subscribe to */
#define USBD_SUBSCRIBE_EP0RCVOUT_CHIDX_Pos (0UL)
#define USBD_SUBSCRIBE_EP0RCVOUT_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_EP0RCVOUT_CHIDX_Pos)

/* Register: USBD_SUBSCRIBE_EP0STATUS */
/* Description: Subscribe configuration for task EP0STATUS */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_EP0STATUS_EN_Pos (31UL)
#define USBD_SUBSCRIBE_EP0STATUS_EN_Msk (0x1UL << USBD_SUBSCRIBE_EP0STATUS_EN_Pos)
#define USBD_SUBSCRIBE_EP0STATUS_EN_Disabled (0x0UL)
#define USBD_SUBSCRIBE_EP0STATUS_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task EP0STATUS will subscribe to */
#define USBD_SUBSCRIBE_EP0STATUS_CHIDX_Pos (0UL)
#define USBD_SUBSCRIBE_EP0STATUS_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_EP0STATUS_CHIDX_Pos)

/* Register: USBD_SUBSCRIBE_EP0STALL */
/* Description: Subscribe configuration for task EP0STALL */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_EP0STALL_EN_Pos (31UL)
#define USBD_SUBSCRIBE_EP0STALL_EN_Msk (0x1UL << USBD_SUBSCRIBE_EP0STALL_EN_Pos)
#define USBD_SUBSCRIBE_EP0STALL_EN_Disabled (0x0UL)
#define USBD_SUBSCRIBE_EP0STALL_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task EP0STALL will subscribe to */
#define USBD_SUBSCRIBE_EP0STALL_CHIDX_Pos (0UL)
#define USBD_SUBSCRIBE_EP0STALL_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_EP0STALL_CHIDX_Pos)

/* Register: USBD_SUBSCRIBE_DPDMDRIVE */
/* Description: Subscribe configuration for task DPDMDRIVE */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_DPDMDRIVE_EN_Pos (31UL)
#define USBD_SUBSCRIBE_DPDMDRIVE_EN_Msk (0x1UL << USBD_SUBSCRIBE_DPDMDRIVE_EN_Pos)
#define USBD_SUBSCRIBE_DPDMDRIVE_EN_Disabled (0x0UL)
#define USBD_SUBSCRIBE_DPDMDRIVE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task DPDMDRIVE will subscribe to */
#define USBD_SUBSCRIBE_DPDMDRIVE_CHIDX_Pos (0UL)
#define USBD_SUBSCRIBE_DPDMDRIVE_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_DPDMDRIVE_CHIDX_Pos)

/* Register: USBD_SUBSCRIBE_DPDMNODRIVE */
/* Description: Subscribe configuration for task DPDMNODRIVE */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_DPDMNODRIVE_EN_Pos (31UL)
#define USBD_SUBSCRIBE_DPDMNODRIVE_EN_Msk (0x1UL << USBD_SUBSCRIBE_DPDMNODRIVE_EN_Pos)
#define USBD_SUBSCRIBE_DPDMNODRIVE_EN_Disabled (0x0UL)
#define USBD_SUBSCRIBE_DPDMNODRIVE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that task DPDMNODRIVE will subscribe to */
#define USBD_SUBSCRIBE_DPDMNODRIVE_CHIDX_Pos (0UL)
#define USBD_SUBSCRIBE_DPDMNODRIVE_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_DPDMNODRIVE_CHIDX_Pos)

/* Register: USBD_EVENTS_USBRESET */
/* Description: Signals that a USB reset condition has been detected on USB lines */

/* Bit 0 : Signals that a USB reset condition has been detected on USB lines */
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_Pos (0UL)
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_Msk (0x1UL << USBD_EVENTS_USBRESET_EVENTS_USBRESET_Pos)
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_NotGenerated (0x0UL)
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_Generated (0x1UL)

/* Register: USBD_EVENTS_STARTED */
/* Description: Confirms that the EPIN[n].PTR and EPIN[n].MAXCNT, or EPOUT[n].PTR and EPOUT[n].MAXCNT registers have been captured on all endpoints reported in the EPSTATUS register */

/* Bit 0 : Confirms that the EPIN[n].PTR and EPIN[n].MAXCNT, or EPOUT[n].PTR and EPOUT[n].MAXCNT registers have been captured on all endpoints reported in the EPSTATUS register */
#define USBD_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define USBD_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << USBD_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define USBD_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0x0UL)
#define USBD_EVENTS_STARTED_EVENTS_STARTED_Generated (0x1UL)

/* Register: USBD_EVENTS_ENDEPIN */
/* Description: Description collection: The whole EPIN[n] buffer has been consumed. The buffer can be accessed safely by software. */

/* Bit 0 : The whole EPIN[n] buffer has been consumed. The buffer can be accessed safely by software. */
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Pos (0UL)
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Msk (0x1UL << USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Pos)
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_NotGenerated (0x0UL)
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Generated (0x1UL)

/* Register: USBD_EVENTS_EP0DATADONE */
/* Description: An acknowledged data transfer has taken place on the control endpoint */

/* Bit 0 : An acknowledged data transfer has taken place on the control endpoint */
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Pos (0UL)
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Msk (0x1UL << USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Pos)
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_NotGenerated (0x0UL)
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Generated (0x1UL)

/* Register: USBD_EVENTS_ENDISOIN */
/* Description: The whole ISOIN buffer has been consumed. The buffer can be accessed safely by software. */

/* Bit 0 : The whole ISOIN buffer has been consumed. The buffer can be accessed safely by software. */
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Pos (0UL)
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Msk (0x1UL << USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Pos)
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_NotGenerated (0x0UL)
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Generated (0x1UL)

/* Register: USBD_EVENTS_ENDEPOUT */
/* Description: Description collection: The whole EPOUT[n] buffer has been consumed. The buffer can be accessed safely by software. */

/* Bit 0 : The whole EPOUT[n] buffer has been consumed. The buffer can be accessed safely by software. */
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Pos (0UL)
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Msk (0x1UL << USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Pos)
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_NotGenerated (0x0UL)
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Generated (0x1UL)

/* Register: USBD_EVENTS_ENDISOOUT */
/* Description: The whole ISOOUT buffer has been consumed. The buffer can be accessed safely by software. */

/* Bit 0 : The whole ISOOUT buffer has been consumed. The buffer can be accessed safely by software. */
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Pos (0UL)
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Msk (0x1UL << USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Pos)
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_NotGenerated (0x0UL)
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Generated (0x1UL)

/* Register: USBD_EVENTS_SOF */
/* Description: Signals that a SOF (start of frame) condition has been detected on USB lines */

/* Bit 0 : Signals that a SOF (start of frame) condition has been detected on USB lines */
#define USBD_EVENTS_SOF_EVENTS_SOF_Pos (0UL)
#define USBD_EVENTS_SOF_EVENTS_SOF_Msk (0x1UL << USBD_EVENTS_SOF_EVENTS_SOF_Pos)
#define USBD_EVENTS_SOF_EVENTS_SOF_NotGenerated (0x0UL)
#define USBD_EVENTS_SOF_EVENTS_SOF_Generated (0x1UL)

/* Register: USBD_EVENTS_USBEVENT */
/* Description: An event or an error not covered by specific events has occurred. Check EVENTCAUSE register to find the cause. */

/* Bit 0 : An event or an error not covered by specific events has occurred. Check EVENTCAUSE register to find the cause. */
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Pos (0UL)
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Msk (0x1UL << USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Pos)
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_NotGenerated (0x0UL)
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Generated (0x1UL)

/* Register: USBD_EVENTS_EP0SETUP */
/* Description: A valid SETUP token has been received (and acknowledged) on the control endpoint */

/* Bit 0 : A valid SETUP token has been received (and acknowledged) on the control endpoint */
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Pos (0UL)
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Msk (0x1UL << USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Pos)
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_NotGenerated (0x0UL)
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Generated (0x1UL)

/* Register: USBD_EVENTS_EPDATA */
/* Description: A data transfer has occurred on a data endpoint, indicated by the EPDATASTATUS register */

/* Bit 0 : A data transfer has occurred on a data endpoint, indicated by the EPDATASTATUS register */
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_Pos (0UL)
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_Msk (0x1UL << USBD_EVENTS_EPDATA_EVENTS_EPDATA_Pos)
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_NotGenerated (0x0UL)
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_Generated (0x1UL)

/* Register: USBD_PUBLISH_USBRESET */
/* Description: Publish configuration for event USBRESET */

/* Bit 31 :   */
#define USBD_PUBLISH_USBRESET_EN_Pos (31UL)
#define USBD_PUBLISH_USBRESET_EN_Msk (0x1UL << USBD_PUBLISH_USBRESET_EN_Pos)
#define USBD_PUBLISH_USBRESET_EN_Disabled (0x0UL)
#define USBD_PUBLISH_USBRESET_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event USBRESET will publish to */
#define USBD_PUBLISH_USBRESET_CHIDX_Pos (0UL)
#define USBD_PUBLISH_USBRESET_CHIDX_Msk (0xFFUL << USBD_PUBLISH_USBRESET_CHIDX_Pos)

/* Register: USBD_PUBLISH_STARTED */
/* Description: Publish configuration for event STARTED */

/* Bit 31 :   */
#define USBD_PUBLISH_STARTED_EN_Pos (31UL)
#define USBD_PUBLISH_STARTED_EN_Msk (0x1UL << USBD_PUBLISH_STARTED_EN_Pos)
#define USBD_PUBLISH_STARTED_EN_Disabled (0x0UL)
#define USBD_PUBLISH_STARTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event STARTED will publish to */
#define USBD_PUBLISH_STARTED_CHIDX_Pos (0UL)
#define USBD_PUBLISH_STARTED_CHIDX_Msk (0xFFUL << USBD_PUBLISH_STARTED_CHIDX_Pos)

/* Register: USBD_PUBLISH_ENDEPIN */
/* Description: Description collection: Publish configuration for event ENDEPIN[n] */

/* Bit 31 :   */
#define USBD_PUBLISH_ENDEPIN_EN_Pos (31UL)
#define USBD_PUBLISH_ENDEPIN_EN_Msk (0x1UL << USBD_PUBLISH_ENDEPIN_EN_Pos)
#define USBD_PUBLISH_ENDEPIN_EN_Disabled (0x0UL)
#define USBD_PUBLISH_ENDEPIN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDEPIN[n] will publish to */
#define USBD_PUBLISH_ENDEPIN_CHIDX_Pos (0UL)
#define USBD_PUBLISH_ENDEPIN_CHIDX_Msk (0xFFUL << USBD_PUBLISH_ENDEPIN_CHIDX_Pos)

/* Register: USBD_PUBLISH_EP0DATADONE */
/* Description: Publish configuration for event EP0DATADONE */

/* Bit 31 :   */
#define USBD_PUBLISH_EP0DATADONE_EN_Pos (31UL)
#define USBD_PUBLISH_EP0DATADONE_EN_Msk (0x1UL << USBD_PUBLISH_EP0DATADONE_EN_Pos)
#define USBD_PUBLISH_EP0DATADONE_EN_Disabled (0x0UL)
#define USBD_PUBLISH_EP0DATADONE_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event EP0DATADONE will publish to */
#define USBD_PUBLISH_EP0DATADONE_CHIDX_Pos (0UL)
#define USBD_PUBLISH_EP0DATADONE_CHIDX_Msk (0xFFUL << USBD_PUBLISH_EP0DATADONE_CHIDX_Pos)

/* Register: USBD_PUBLISH_ENDISOIN */
/* Description: Publish configuration for event ENDISOIN */

/* Bit 31 :   */
#define USBD_PUBLISH_ENDISOIN_EN_Pos (31UL)
#define USBD_PUBLISH_ENDISOIN_EN_Msk (0x1UL << USBD_PUBLISH_ENDISOIN_EN_Pos)
#define USBD_PUBLISH_ENDISOIN_EN_Disabled (0x0UL)
#define USBD_PUBLISH_ENDISOIN_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDISOIN will publish to */
#define USBD_PUBLISH_ENDISOIN_CHIDX_Pos (0UL)
#define USBD_PUBLISH_ENDISOIN_CHIDX_Msk (0xFFUL << USBD_PUBLISH_ENDISOIN_CHIDX_Pos)

/* Register: USBD_PUBLISH_ENDEPOUT */
/* Description: Description collection: Publish configuration for event ENDEPOUT[n] */

/* Bit 31 :   */
#define USBD_PUBLISH_ENDEPOUT_EN_Pos (31UL)
#define USBD_PUBLISH_ENDEPOUT_EN_Msk (0x1UL << USBD_PUBLISH_ENDEPOUT_EN_Pos)
#define USBD_PUBLISH_ENDEPOUT_EN_Disabled (0x0UL)
#define USBD_PUBLISH_ENDEPOUT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDEPOUT[n] will publish to */
#define USBD_PUBLISH_ENDEPOUT_CHIDX_Pos (0UL)
#define USBD_PUBLISH_ENDEPOUT_CHIDX_Msk (0xFFUL << USBD_PUBLISH_ENDEPOUT_CHIDX_Pos)

/* Register: USBD_PUBLISH_ENDISOOUT */
/* Description: Publish configuration for event ENDISOOUT */

/* Bit 31 :   */
#define USBD_PUBLISH_ENDISOOUT_EN_Pos (31UL)
#define USBD_PUBLISH_ENDISOOUT_EN_Msk (0x1UL << USBD_PUBLISH_ENDISOOUT_EN_Pos)
#define USBD_PUBLISH_ENDISOOUT_EN_Disabled (0x0UL)
#define USBD_PUBLISH_ENDISOOUT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event ENDISOOUT will publish to */
#define USBD_PUBLISH_ENDISOOUT_CHIDX_Pos (0UL)
#define USBD_PUBLISH_ENDISOOUT_CHIDX_Msk (0xFFUL << USBD_PUBLISH_ENDISOOUT_CHIDX_Pos)

/* Register: USBD_PUBLISH_SOF */
/* Description: Publish configuration for event SOF */

/* Bit 31 :   */
#define USBD_PUBLISH_SOF_EN_Pos (31UL)
#define USBD_PUBLISH_SOF_EN_Msk (0x1UL << USBD_PUBLISH_SOF_EN_Pos)
#define USBD_PUBLISH_SOF_EN_Disabled (0x0UL)
#define USBD_PUBLISH_SOF_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event SOF will publish to */
#define USBD_PUBLISH_SOF_CHIDX_Pos (0UL)
#define USBD_PUBLISH_SOF_CHIDX_Msk (0xFFUL << USBD_PUBLISH_SOF_CHIDX_Pos)

/* Register: USBD_PUBLISH_USBEVENT */
/* Description: Publish configuration for event USBEVENT */

/* Bit 31 :   */
#define USBD_PUBLISH_USBEVENT_EN_Pos (31UL)
#define USBD_PUBLISH_USBEVENT_EN_Msk (0x1UL << USBD_PUBLISH_USBEVENT_EN_Pos)
#define USBD_PUBLISH_USBEVENT_EN_Disabled (0x0UL)
#define USBD_PUBLISH_USBEVENT_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event USBEVENT will publish to */
#define USBD_PUBLISH_USBEVENT_CHIDX_Pos (0UL)
#define USBD_PUBLISH_USBEVENT_CHIDX_Msk (0xFFUL << USBD_PUBLISH_USBEVENT_CHIDX_Pos)

/* Register: USBD_PUBLISH_EP0SETUP */
/* Description: Publish configuration for event EP0SETUP */

/* Bit 31 :   */
#define USBD_PUBLISH_EP0SETUP_EN_Pos (31UL)
#define USBD_PUBLISH_EP0SETUP_EN_Msk (0x1UL << USBD_PUBLISH_EP0SETUP_EN_Pos)
#define USBD_PUBLISH_EP0SETUP_EN_Disabled (0x0UL)
#define USBD_PUBLISH_EP0SETUP_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event EP0SETUP will publish to */
#define USBD_PUBLISH_EP0SETUP_CHIDX_Pos (0UL)
#define USBD_PUBLISH_EP0SETUP_CHIDX_Msk (0xFFUL << USBD_PUBLISH_EP0SETUP_CHIDX_Pos)

/* Register: USBD_PUBLISH_EPDATA */
/* Description: Publish configuration for event EPDATA */

/* Bit 31 :   */
#define USBD_PUBLISH_EPDATA_EN_Pos (31UL)
#define USBD_PUBLISH_EPDATA_EN_Msk (0x1UL << USBD_PUBLISH_EPDATA_EN_Pos)
#define USBD_PUBLISH_EPDATA_EN_Disabled (0x0UL)
#define USBD_PUBLISH_EPDATA_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event EPDATA will publish to */
#define USBD_PUBLISH_EPDATA_CHIDX_Pos (0UL)
#define USBD_PUBLISH_EPDATA_CHIDX_Msk (0xFFUL << USBD_PUBLISH_EPDATA_CHIDX_Pos)

/* Register: USBD_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 4 : Shortcut between event ENDEPOUT[0] and task EP0RCVOUT */
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Pos (4UL)
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Msk (0x1UL << USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Pos)
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Disabled (0x0UL)
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Enabled (0x1UL)

/* Bit 3 : Shortcut between event ENDEPOUT[0] and task EP0STATUS */
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Pos (3UL)
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Msk (0x1UL << USBD_SHORTS_ENDEPOUT0_EP0STATUS_Pos)
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Disabled (0x0UL)
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Enabled (0x1UL)

/* Bit 2 : Shortcut between event EP0DATADONE and task EP0STATUS */
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Pos (2UL)
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Msk (0x1UL << USBD_SHORTS_EP0DATADONE_EP0STATUS_Pos)
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Disabled (0x0UL)
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Enabled (0x1UL)

/* Bit 1 : Shortcut between event EP0DATADONE and task STARTEPOUT[0] */
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Pos (1UL)
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Msk (0x1UL << USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Pos)
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Disabled (0x0UL)
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Enabled (0x1UL)

/* Bit 0 : Shortcut between event EP0DATADONE and task STARTEPIN[0] */
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Pos (0UL)
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Msk (0x1UL << USBD_SHORTS_EP0DATADONE_STARTEPIN0_Pos)
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Disabled (0x0UL)
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Enabled (0x1UL)

/* Register: USBD_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 24 : Enable or disable interrupt for event EPDATA */
#define USBD_INTEN_EPDATA_Pos (24UL)
#define USBD_INTEN_EPDATA_Msk (0x1UL << USBD_INTEN_EPDATA_Pos)
#define USBD_INTEN_EPDATA_Disabled (0x0UL)
#define USBD_INTEN_EPDATA_Enabled (0x1UL)

/* Bit 23 : Enable or disable interrupt for event EP0SETUP */
#define USBD_INTEN_EP0SETUP_Pos (23UL)
#define USBD_INTEN_EP0SETUP_Msk (0x1UL << USBD_INTEN_EP0SETUP_Pos)
#define USBD_INTEN_EP0SETUP_Disabled (0x0UL)
#define USBD_INTEN_EP0SETUP_Enabled (0x1UL)

/* Bit 22 : Enable or disable interrupt for event USBEVENT */
#define USBD_INTEN_USBEVENT_Pos (22UL)
#define USBD_INTEN_USBEVENT_Msk (0x1UL << USBD_INTEN_USBEVENT_Pos)
#define USBD_INTEN_USBEVENT_Disabled (0x0UL)
#define USBD_INTEN_USBEVENT_Enabled (0x1UL)

/* Bit 21 : Enable or disable interrupt for event SOF */
#define USBD_INTEN_SOF_Pos (21UL)
#define USBD_INTEN_SOF_Msk (0x1UL << USBD_INTEN_SOF_Pos)
#define USBD_INTEN_SOF_Disabled (0x0UL)
#define USBD_INTEN_SOF_Enabled (0x1UL)

/* Bit 20 : Enable or disable interrupt for event ENDISOOUT */
#define USBD_INTEN_ENDISOOUT_Pos (20UL)
#define USBD_INTEN_ENDISOOUT_Msk (0x1UL << USBD_INTEN_ENDISOOUT_Pos)
#define USBD_INTEN_ENDISOOUT_Disabled (0x0UL)
#define USBD_INTEN_ENDISOOUT_Enabled (0x1UL)

/* Bit 19 : Enable or disable interrupt for event ENDEPOUT[7] */
#define USBD_INTEN_ENDEPOUT7_Pos (19UL)
#define USBD_INTEN_ENDEPOUT7_Msk (0x1UL << USBD_INTEN_ENDEPOUT7_Pos)
#define USBD_INTEN_ENDEPOUT7_Disabled (0x0UL)
#define USBD_INTEN_ENDEPOUT7_Enabled (0x1UL)

/* Bit 18 : Enable or disable interrupt for event ENDEPOUT[6] */
#define USBD_INTEN_ENDEPOUT6_Pos (18UL)
#define USBD_INTEN_ENDEPOUT6_Msk (0x1UL << USBD_INTEN_ENDEPOUT6_Pos)
#define USBD_INTEN_ENDEPOUT6_Disabled (0x0UL)
#define USBD_INTEN_ENDEPOUT6_Enabled (0x1UL)

/* Bit 17 : Enable or disable interrupt for event ENDEPOUT[5] */
#define USBD_INTEN_ENDEPOUT5_Pos (17UL)
#define USBD_INTEN_ENDEPOUT5_Msk (0x1UL << USBD_INTEN_ENDEPOUT5_Pos)
#define USBD_INTEN_ENDEPOUT5_Disabled (0x0UL)
#define USBD_INTEN_ENDEPOUT5_Enabled (0x1UL)

/* Bit 16 : Enable or disable interrupt for event ENDEPOUT[4] */
#define USBD_INTEN_ENDEPOUT4_Pos (16UL)
#define USBD_INTEN_ENDEPOUT4_Msk (0x1UL << USBD_INTEN_ENDEPOUT4_Pos)
#define USBD_INTEN_ENDEPOUT4_Disabled (0x0UL)
#define USBD_INTEN_ENDEPOUT4_Enabled (0x1UL)

/* Bit 15 : Enable or disable interrupt for event ENDEPOUT[3] */
#define USBD_INTEN_ENDEPOUT3_Pos (15UL)
#define USBD_INTEN_ENDEPOUT3_Msk (0x1UL << USBD_INTEN_ENDEPOUT3_Pos)
#define USBD_INTEN_ENDEPOUT3_Disabled (0x0UL)
#define USBD_INTEN_ENDEPOUT3_Enabled (0x1UL)

/* Bit 14 : Enable or disable interrupt for event ENDEPOUT[2] */
#define USBD_INTEN_ENDEPOUT2_Pos (14UL)
#define USBD_INTEN_ENDEPOUT2_Msk (0x1UL << USBD_INTEN_ENDEPOUT2_Pos)
#define USBD_INTEN_ENDEPOUT2_Disabled (0x0UL)
#define USBD_INTEN_ENDEPOUT2_Enabled (0x1UL)

/* Bit 13 : Enable or disable interrupt for event ENDEPOUT[1] */
#define USBD_INTEN_ENDEPOUT1_Pos (13UL)
#define USBD_INTEN_ENDEPOUT1_Msk (0x1UL << USBD_INTEN_ENDEPOUT1_Pos)
#define USBD_INTEN_ENDEPOUT1_Disabled (0x0UL)
#define USBD_INTEN_ENDEPOUT1_Enabled (0x1UL)

/* Bit 12 : Enable or disable interrupt for event ENDEPOUT[0] */
#define USBD_INTEN_ENDEPOUT0_Pos (12UL)
#define USBD_INTEN_ENDEPOUT0_Msk (0x1UL << USBD_INTEN_ENDEPOUT0_Pos)
#define USBD_INTEN_ENDEPOUT0_Disabled (0x0UL)
#define USBD_INTEN_ENDEPOUT0_Enabled (0x1UL)

/* Bit 11 : Enable or disable interrupt for event ENDISOIN */
#define USBD_INTEN_ENDISOIN_Pos (11UL)
#define USBD_INTEN_ENDISOIN_Msk (0x1UL << USBD_INTEN_ENDISOIN_Pos)
#define USBD_INTEN_ENDISOIN_Disabled (0x0UL)
#define USBD_INTEN_ENDISOIN_Enabled (0x1UL)

/* Bit 10 : Enable or disable interrupt for event EP0DATADONE */
#define USBD_INTEN_EP0DATADONE_Pos (10UL)
#define USBD_INTEN_EP0DATADONE_Msk (0x1UL << USBD_INTEN_EP0DATADONE_Pos)
#define USBD_INTEN_EP0DATADONE_Disabled (0x0UL)
#define USBD_INTEN_EP0DATADONE_Enabled (0x1UL)

/* Bit 9 : Enable or disable interrupt for event ENDEPIN[7] */
#define USBD_INTEN_ENDEPIN7_Pos (9UL)
#define USBD_INTEN_ENDEPIN7_Msk (0x1UL << USBD_INTEN_ENDEPIN7_Pos)
#define USBD_INTEN_ENDEPIN7_Disabled (0x0UL)
#define USBD_INTEN_ENDEPIN7_Enabled (0x1UL)

/* Bit 8 : Enable or disable interrupt for event ENDEPIN[6] */
#define USBD_INTEN_ENDEPIN6_Pos (8UL)
#define USBD_INTEN_ENDEPIN6_Msk (0x1UL << USBD_INTEN_ENDEPIN6_Pos)
#define USBD_INTEN_ENDEPIN6_Disabled (0x0UL)
#define USBD_INTEN_ENDEPIN6_Enabled (0x1UL)

/* Bit 7 : Enable or disable interrupt for event ENDEPIN[5] */
#define USBD_INTEN_ENDEPIN5_Pos (7UL)
#define USBD_INTEN_ENDEPIN5_Msk (0x1UL << USBD_INTEN_ENDEPIN5_Pos)
#define USBD_INTEN_ENDEPIN5_Disabled (0x0UL)
#define USBD_INTEN_ENDEPIN5_Enabled (0x1UL)

/* Bit 6 : Enable or disable interrupt for event ENDEPIN[4] */
#define USBD_INTEN_ENDEPIN4_Pos (6UL)
#define USBD_INTEN_ENDEPIN4_Msk (0x1UL << USBD_INTEN_ENDEPIN4_Pos)
#define USBD_INTEN_ENDEPIN4_Disabled (0x0UL)
#define USBD_INTEN_ENDEPIN4_Enabled (0x1UL)

/* Bit 5 : Enable or disable interrupt for event ENDEPIN[3] */
#define USBD_INTEN_ENDEPIN3_Pos (5UL)
#define USBD_INTEN_ENDEPIN3_Msk (0x1UL << USBD_INTEN_ENDEPIN3_Pos)
#define USBD_INTEN_ENDEPIN3_Disabled (0x0UL)
#define USBD_INTEN_ENDEPIN3_Enabled (0x1UL)

/* Bit 4 : Enable or disable interrupt for event ENDEPIN[2] */
#define USBD_INTEN_ENDEPIN2_Pos (4UL)
#define USBD_INTEN_ENDEPIN2_Msk (0x1UL << USBD_INTEN_ENDEPIN2_Pos)
#define USBD_INTEN_ENDEPIN2_Disabled (0x0UL)
#define USBD_INTEN_ENDEPIN2_Enabled (0x1UL)

/* Bit 3 : Enable or disable interrupt for event ENDEPIN[1] */
#define USBD_INTEN_ENDEPIN1_Pos (3UL)
#define USBD_INTEN_ENDEPIN1_Msk (0x1UL << USBD_INTEN_ENDEPIN1_Pos)
#define USBD_INTEN_ENDEPIN1_Disabled (0x0UL)
#define USBD_INTEN_ENDEPIN1_Enabled (0x1UL)

/* Bit 2 : Enable or disable interrupt for event ENDEPIN[0] */
#define USBD_INTEN_ENDEPIN0_Pos (2UL)
#define USBD_INTEN_ENDEPIN0_Msk (0x1UL << USBD_INTEN_ENDEPIN0_Pos)
#define USBD_INTEN_ENDEPIN0_Disabled (0x0UL)
#define USBD_INTEN_ENDEPIN0_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event STARTED */
#define USBD_INTEN_STARTED_Pos (1UL)
#define USBD_INTEN_STARTED_Msk (0x1UL << USBD_INTEN_STARTED_Pos)
#define USBD_INTEN_STARTED_Disabled (0x0UL)
#define USBD_INTEN_STARTED_Enabled (0x1UL)

/* Bit 0 : Enable or disable interrupt for event USBRESET */
#define USBD_INTEN_USBRESET_Pos (0UL)
#define USBD_INTEN_USBRESET_Msk (0x1UL << USBD_INTEN_USBRESET_Pos)
#define USBD_INTEN_USBRESET_Disabled (0x0UL)
#define USBD_INTEN_USBRESET_Enabled (0x1UL)

/* Register: USBD_INTENSET */
/* Description: Enable interrupt */

/* Bit 24 : Write '1' to enable interrupt for event EPDATA */
#define USBD_INTENSET_EPDATA_Pos (24UL)
#define USBD_INTENSET_EPDATA_Msk (0x1UL << USBD_INTENSET_EPDATA_Pos)
#define USBD_INTENSET_EPDATA_Disabled (0x0UL)
#define USBD_INTENSET_EPDATA_Enabled (0x1UL)
#define USBD_INTENSET_EPDATA_Set (0x1UL)

/* Bit 23 : Write '1' to enable interrupt for event EP0SETUP */
#define USBD_INTENSET_EP0SETUP_Pos (23UL)
#define USBD_INTENSET_EP0SETUP_Msk (0x1UL << USBD_INTENSET_EP0SETUP_Pos)
#define USBD_INTENSET_EP0SETUP_Disabled (0x0UL)
#define USBD_INTENSET_EP0SETUP_Enabled (0x1UL)
#define USBD_INTENSET_EP0SETUP_Set (0x1UL)

/* Bit 22 : Write '1' to enable interrupt for event USBEVENT */
#define USBD_INTENSET_USBEVENT_Pos (22UL)
#define USBD_INTENSET_USBEVENT_Msk (0x1UL << USBD_INTENSET_USBEVENT_Pos)
#define USBD_INTENSET_USBEVENT_Disabled (0x0UL)
#define USBD_INTENSET_USBEVENT_Enabled (0x1UL)
#define USBD_INTENSET_USBEVENT_Set (0x1UL)

/* Bit 21 : Write '1' to enable interrupt for event SOF */
#define USBD_INTENSET_SOF_Pos (21UL)
#define USBD_INTENSET_SOF_Msk (0x1UL << USBD_INTENSET_SOF_Pos)
#define USBD_INTENSET_SOF_Disabled (0x0UL)
#define USBD_INTENSET_SOF_Enabled (0x1UL)
#define USBD_INTENSET_SOF_Set (0x1UL)

/* Bit 20 : Write '1' to enable interrupt for event ENDISOOUT */
#define USBD_INTENSET_ENDISOOUT_Pos (20UL)
#define USBD_INTENSET_ENDISOOUT_Msk (0x1UL << USBD_INTENSET_ENDISOOUT_Pos)
#define USBD_INTENSET_ENDISOOUT_Disabled (0x0UL)
#define USBD_INTENSET_ENDISOOUT_Enabled (0x1UL)
#define USBD_INTENSET_ENDISOOUT_Set (0x1UL)

/* Bit 19 : Write '1' to enable interrupt for event ENDEPOUT[7] */
#define USBD_INTENSET_ENDEPOUT7_Pos (19UL)
#define USBD_INTENSET_ENDEPOUT7_Msk (0x1UL << USBD_INTENSET_ENDEPOUT7_Pos)
#define USBD_INTENSET_ENDEPOUT7_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPOUT7_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPOUT7_Set (0x1UL)

/* Bit 18 : Write '1' to enable interrupt for event ENDEPOUT[6] */
#define USBD_INTENSET_ENDEPOUT6_Pos (18UL)
#define USBD_INTENSET_ENDEPOUT6_Msk (0x1UL << USBD_INTENSET_ENDEPOUT6_Pos)
#define USBD_INTENSET_ENDEPOUT6_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPOUT6_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPOUT6_Set (0x1UL)

/* Bit 17 : Write '1' to enable interrupt for event ENDEPOUT[5] */
#define USBD_INTENSET_ENDEPOUT5_Pos (17UL)
#define USBD_INTENSET_ENDEPOUT5_Msk (0x1UL << USBD_INTENSET_ENDEPOUT5_Pos)
#define USBD_INTENSET_ENDEPOUT5_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPOUT5_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPOUT5_Set (0x1UL)

/* Bit 16 : Write '1' to enable interrupt for event ENDEPOUT[4] */
#define USBD_INTENSET_ENDEPOUT4_Pos (16UL)
#define USBD_INTENSET_ENDEPOUT4_Msk (0x1UL << USBD_INTENSET_ENDEPOUT4_Pos)
#define USBD_INTENSET_ENDEPOUT4_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPOUT4_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPOUT4_Set (0x1UL)

/* Bit 15 : Write '1' to enable interrupt for event ENDEPOUT[3] */
#define USBD_INTENSET_ENDEPOUT3_Pos (15UL)
#define USBD_INTENSET_ENDEPOUT3_Msk (0x1UL << USBD_INTENSET_ENDEPOUT3_Pos)
#define USBD_INTENSET_ENDEPOUT3_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPOUT3_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPOUT3_Set (0x1UL)

/* Bit 14 : Write '1' to enable interrupt for event ENDEPOUT[2] */
#define USBD_INTENSET_ENDEPOUT2_Pos (14UL)
#define USBD_INTENSET_ENDEPOUT2_Msk (0x1UL << USBD_INTENSET_ENDEPOUT2_Pos)
#define USBD_INTENSET_ENDEPOUT2_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPOUT2_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPOUT2_Set (0x1UL)

/* Bit 13 : Write '1' to enable interrupt for event ENDEPOUT[1] */
#define USBD_INTENSET_ENDEPOUT1_Pos (13UL)
#define USBD_INTENSET_ENDEPOUT1_Msk (0x1UL << USBD_INTENSET_ENDEPOUT1_Pos)
#define USBD_INTENSET_ENDEPOUT1_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPOUT1_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPOUT1_Set (0x1UL)

/* Bit 12 : Write '1' to enable interrupt for event ENDEPOUT[0] */
#define USBD_INTENSET_ENDEPOUT0_Pos (12UL)
#define USBD_INTENSET_ENDEPOUT0_Msk (0x1UL << USBD_INTENSET_ENDEPOUT0_Pos)
#define USBD_INTENSET_ENDEPOUT0_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPOUT0_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPOUT0_Set (0x1UL)

/* Bit 11 : Write '1' to enable interrupt for event ENDISOIN */
#define USBD_INTENSET_ENDISOIN_Pos (11UL)
#define USBD_INTENSET_ENDISOIN_Msk (0x1UL << USBD_INTENSET_ENDISOIN_Pos)
#define USBD_INTENSET_ENDISOIN_Disabled (0x0UL)
#define USBD_INTENSET_ENDISOIN_Enabled (0x1UL)
#define USBD_INTENSET_ENDISOIN_Set (0x1UL)

/* Bit 10 : Write '1' to enable interrupt for event EP0DATADONE */
#define USBD_INTENSET_EP0DATADONE_Pos (10UL)
#define USBD_INTENSET_EP0DATADONE_Msk (0x1UL << USBD_INTENSET_EP0DATADONE_Pos)
#define USBD_INTENSET_EP0DATADONE_Disabled (0x0UL)
#define USBD_INTENSET_EP0DATADONE_Enabled (0x1UL)
#define USBD_INTENSET_EP0DATADONE_Set (0x1UL)

/* Bit 9 : Write '1' to enable interrupt for event ENDEPIN[7] */
#define USBD_INTENSET_ENDEPIN7_Pos (9UL)
#define USBD_INTENSET_ENDEPIN7_Msk (0x1UL << USBD_INTENSET_ENDEPIN7_Pos)
#define USBD_INTENSET_ENDEPIN7_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPIN7_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPIN7_Set (0x1UL)

/* Bit 8 : Write '1' to enable interrupt for event ENDEPIN[6] */
#define USBD_INTENSET_ENDEPIN6_Pos (8UL)
#define USBD_INTENSET_ENDEPIN6_Msk (0x1UL << USBD_INTENSET_ENDEPIN6_Pos)
#define USBD_INTENSET_ENDEPIN6_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPIN6_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPIN6_Set (0x1UL)

/* Bit 7 : Write '1' to enable interrupt for event ENDEPIN[5] */
#define USBD_INTENSET_ENDEPIN5_Pos (7UL)
#define USBD_INTENSET_ENDEPIN5_Msk (0x1UL << USBD_INTENSET_ENDEPIN5_Pos)
#define USBD_INTENSET_ENDEPIN5_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPIN5_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPIN5_Set (0x1UL)

/* Bit 6 : Write '1' to enable interrupt for event ENDEPIN[4] */
#define USBD_INTENSET_ENDEPIN4_Pos (6UL)
#define USBD_INTENSET_ENDEPIN4_Msk (0x1UL << USBD_INTENSET_ENDEPIN4_Pos)
#define USBD_INTENSET_ENDEPIN4_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPIN4_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPIN4_Set (0x1UL)

/* Bit 5 : Write '1' to enable interrupt for event ENDEPIN[3] */
#define USBD_INTENSET_ENDEPIN3_Pos (5UL)
#define USBD_INTENSET_ENDEPIN3_Msk (0x1UL << USBD_INTENSET_ENDEPIN3_Pos)
#define USBD_INTENSET_ENDEPIN3_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPIN3_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPIN3_Set (0x1UL)

/* Bit 4 : Write '1' to enable interrupt for event ENDEPIN[2] */
#define USBD_INTENSET_ENDEPIN2_Pos (4UL)
#define USBD_INTENSET_ENDEPIN2_Msk (0x1UL << USBD_INTENSET_ENDEPIN2_Pos)
#define USBD_INTENSET_ENDEPIN2_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPIN2_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPIN2_Set (0x1UL)

/* Bit 3 : Write '1' to enable interrupt for event ENDEPIN[1] */
#define USBD_INTENSET_ENDEPIN1_Pos (3UL)
#define USBD_INTENSET_ENDEPIN1_Msk (0x1UL << USBD_INTENSET_ENDEPIN1_Pos)
#define USBD_INTENSET_ENDEPIN1_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPIN1_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPIN1_Set (0x1UL)

/* Bit 2 : Write '1' to enable interrupt for event ENDEPIN[0] */
#define USBD_INTENSET_ENDEPIN0_Pos (2UL)
#define USBD_INTENSET_ENDEPIN0_Msk (0x1UL << USBD_INTENSET_ENDEPIN0_Pos)
#define USBD_INTENSET_ENDEPIN0_Disabled (0x0UL)
#define USBD_INTENSET_ENDEPIN0_Enabled (0x1UL)
#define USBD_INTENSET_ENDEPIN0_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event STARTED */
#define USBD_INTENSET_STARTED_Pos (1UL)
#define USBD_INTENSET_STARTED_Msk (0x1UL << USBD_INTENSET_STARTED_Pos)
#define USBD_INTENSET_STARTED_Disabled (0x0UL)
#define USBD_INTENSET_STARTED_Enabled (0x1UL)
#define USBD_INTENSET_STARTED_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event USBRESET */
#define USBD_INTENSET_USBRESET_Pos (0UL)
#define USBD_INTENSET_USBRESET_Msk (0x1UL << USBD_INTENSET_USBRESET_Pos)
#define USBD_INTENSET_USBRESET_Disabled (0x0UL)
#define USBD_INTENSET_USBRESET_Enabled (0x1UL)
#define USBD_INTENSET_USBRESET_Set (0x1UL)

/* Register: USBD_INTENCLR */
/* Description: Disable interrupt */

/* Bit 24 : Write '1' to disable interrupt for event EPDATA */
#define USBD_INTENCLR_EPDATA_Pos (24UL)
#define USBD_INTENCLR_EPDATA_Msk (0x1UL << USBD_INTENCLR_EPDATA_Pos)
#define USBD_INTENCLR_EPDATA_Disabled (0x0UL)
#define USBD_INTENCLR_EPDATA_Enabled (0x1UL)
#define USBD_INTENCLR_EPDATA_Clear (0x1UL)

/* Bit 23 : Write '1' to disable interrupt for event EP0SETUP */
#define USBD_INTENCLR_EP0SETUP_Pos (23UL)
#define USBD_INTENCLR_EP0SETUP_Msk (0x1UL << USBD_INTENCLR_EP0SETUP_Pos)
#define USBD_INTENCLR_EP0SETUP_Disabled (0x0UL)
#define USBD_INTENCLR_EP0SETUP_Enabled (0x1UL)
#define USBD_INTENCLR_EP0SETUP_Clear (0x1UL)

/* Bit 22 : Write '1' to disable interrupt for event USBEVENT */
#define USBD_INTENCLR_USBEVENT_Pos (22UL)
#define USBD_INTENCLR_USBEVENT_Msk (0x1UL << USBD_INTENCLR_USBEVENT_Pos)
#define USBD_INTENCLR_USBEVENT_Disabled (0x0UL)
#define USBD_INTENCLR_USBEVENT_Enabled (0x1UL)
#define USBD_INTENCLR_USBEVENT_Clear (0x1UL)

/* Bit 21 : Write '1' to disable interrupt for event SOF */
#define USBD_INTENCLR_SOF_Pos (21UL)
#define USBD_INTENCLR_SOF_Msk (0x1UL << USBD_INTENCLR_SOF_Pos)
#define USBD_INTENCLR_SOF_Disabled (0x0UL)
#define USBD_INTENCLR_SOF_Enabled (0x1UL)
#define USBD_INTENCLR_SOF_Clear (0x1UL)

/* Bit 20 : Write '1' to disable interrupt for event ENDISOOUT */
#define USBD_INTENCLR_ENDISOOUT_Pos (20UL)
#define USBD_INTENCLR_ENDISOOUT_Msk (0x1UL << USBD_INTENCLR_ENDISOOUT_Pos)
#define USBD_INTENCLR_ENDISOOUT_Disabled (0x0UL)
#define USBD_INTENCLR_ENDISOOUT_Enabled (0x1UL)
#define USBD_INTENCLR_ENDISOOUT_Clear (0x1UL)

/* Bit 19 : Write '1' to disable interrupt for event ENDEPOUT[7] */
#define USBD_INTENCLR_ENDEPOUT7_Pos (19UL)
#define USBD_INTENCLR_ENDEPOUT7_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT7_Pos)
#define USBD_INTENCLR_ENDEPOUT7_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPOUT7_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPOUT7_Clear (0x1UL)

/* Bit 18 : Write '1' to disable interrupt for event ENDEPOUT[6] */
#define USBD_INTENCLR_ENDEPOUT6_Pos (18UL)
#define USBD_INTENCLR_ENDEPOUT6_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT6_Pos)
#define USBD_INTENCLR_ENDEPOUT6_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPOUT6_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPOUT6_Clear (0x1UL)

/* Bit 17 : Write '1' to disable interrupt for event ENDEPOUT[5] */
#define USBD_INTENCLR_ENDEPOUT5_Pos (17UL)
#define USBD_INTENCLR_ENDEPOUT5_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT5_Pos)
#define USBD_INTENCLR_ENDEPOUT5_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPOUT5_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPOUT5_Clear (0x1UL)

/* Bit 16 : Write '1' to disable interrupt for event ENDEPOUT[4] */
#define USBD_INTENCLR_ENDEPOUT4_Pos (16UL)
#define USBD_INTENCLR_ENDEPOUT4_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT4_Pos)
#define USBD_INTENCLR_ENDEPOUT4_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPOUT4_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPOUT4_Clear (0x1UL)

/* Bit 15 : Write '1' to disable interrupt for event ENDEPOUT[3] */
#define USBD_INTENCLR_ENDEPOUT3_Pos (15UL)
#define USBD_INTENCLR_ENDEPOUT3_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT3_Pos)
#define USBD_INTENCLR_ENDEPOUT3_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPOUT3_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPOUT3_Clear (0x1UL)

/* Bit 14 : Write '1' to disable interrupt for event ENDEPOUT[2] */
#define USBD_INTENCLR_ENDEPOUT2_Pos (14UL)
#define USBD_INTENCLR_ENDEPOUT2_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT2_Pos)
#define USBD_INTENCLR_ENDEPOUT2_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPOUT2_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPOUT2_Clear (0x1UL)

/* Bit 13 : Write '1' to disable interrupt for event ENDEPOUT[1] */
#define USBD_INTENCLR_ENDEPOUT1_Pos (13UL)
#define USBD_INTENCLR_ENDEPOUT1_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT1_Pos)
#define USBD_INTENCLR_ENDEPOUT1_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPOUT1_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPOUT1_Clear (0x1UL)

/* Bit 12 : Write '1' to disable interrupt for event ENDEPOUT[0] */
#define USBD_INTENCLR_ENDEPOUT0_Pos (12UL)
#define USBD_INTENCLR_ENDEPOUT0_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT0_Pos)
#define USBD_INTENCLR_ENDEPOUT0_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPOUT0_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPOUT0_Clear (0x1UL)

/* Bit 11 : Write '1' to disable interrupt for event ENDISOIN */
#define USBD_INTENCLR_ENDISOIN_Pos (11UL)
#define USBD_INTENCLR_ENDISOIN_Msk (0x1UL << USBD_INTENCLR_ENDISOIN_Pos)
#define USBD_INTENCLR_ENDISOIN_Disabled (0x0UL)
#define USBD_INTENCLR_ENDISOIN_Enabled (0x1UL)
#define USBD_INTENCLR_ENDISOIN_Clear (0x1UL)

/* Bit 10 : Write '1' to disable interrupt for event EP0DATADONE */
#define USBD_INTENCLR_EP0DATADONE_Pos (10UL)
#define USBD_INTENCLR_EP0DATADONE_Msk (0x1UL << USBD_INTENCLR_EP0DATADONE_Pos)
#define USBD_INTENCLR_EP0DATADONE_Disabled (0x0UL)
#define USBD_INTENCLR_EP0DATADONE_Enabled (0x1UL)
#define USBD_INTENCLR_EP0DATADONE_Clear (0x1UL)

/* Bit 9 : Write '1' to disable interrupt for event ENDEPIN[7] */
#define USBD_INTENCLR_ENDEPIN7_Pos (9UL)
#define USBD_INTENCLR_ENDEPIN7_Msk (0x1UL << USBD_INTENCLR_ENDEPIN7_Pos)
#define USBD_INTENCLR_ENDEPIN7_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPIN7_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPIN7_Clear (0x1UL)

/* Bit 8 : Write '1' to disable interrupt for event ENDEPIN[6] */
#define USBD_INTENCLR_ENDEPIN6_Pos (8UL)
#define USBD_INTENCLR_ENDEPIN6_Msk (0x1UL << USBD_INTENCLR_ENDEPIN6_Pos)
#define USBD_INTENCLR_ENDEPIN6_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPIN6_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPIN6_Clear (0x1UL)

/* Bit 7 : Write '1' to disable interrupt for event ENDEPIN[5] */
#define USBD_INTENCLR_ENDEPIN5_Pos (7UL)
#define USBD_INTENCLR_ENDEPIN5_Msk (0x1UL << USBD_INTENCLR_ENDEPIN5_Pos)
#define USBD_INTENCLR_ENDEPIN5_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPIN5_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPIN5_Clear (0x1UL)

/* Bit 6 : Write '1' to disable interrupt for event ENDEPIN[4] */
#define USBD_INTENCLR_ENDEPIN4_Pos (6UL)
#define USBD_INTENCLR_ENDEPIN4_Msk (0x1UL << USBD_INTENCLR_ENDEPIN4_Pos)
#define USBD_INTENCLR_ENDEPIN4_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPIN4_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPIN4_Clear (0x1UL)

/* Bit 5 : Write '1' to disable interrupt for event ENDEPIN[3] */
#define USBD_INTENCLR_ENDEPIN3_Pos (5UL)
#define USBD_INTENCLR_ENDEPIN3_Msk (0x1UL << USBD_INTENCLR_ENDEPIN3_Pos)
#define USBD_INTENCLR_ENDEPIN3_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPIN3_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPIN3_Clear (0x1UL)

/* Bit 4 : Write '1' to disable interrupt for event ENDEPIN[2] */
#define USBD_INTENCLR_ENDEPIN2_Pos (4UL)
#define USBD_INTENCLR_ENDEPIN2_Msk (0x1UL << USBD_INTENCLR_ENDEPIN2_Pos)
#define USBD_INTENCLR_ENDEPIN2_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPIN2_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPIN2_Clear (0x1UL)

/* Bit 3 : Write '1' to disable interrupt for event ENDEPIN[1] */
#define USBD_INTENCLR_ENDEPIN1_Pos (3UL)
#define USBD_INTENCLR_ENDEPIN1_Msk (0x1UL << USBD_INTENCLR_ENDEPIN1_Pos)
#define USBD_INTENCLR_ENDEPIN1_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPIN1_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPIN1_Clear (0x1UL)

/* Bit 2 : Write '1' to disable interrupt for event ENDEPIN[0] */
#define USBD_INTENCLR_ENDEPIN0_Pos (2UL)
#define USBD_INTENCLR_ENDEPIN0_Msk (0x1UL << USBD_INTENCLR_ENDEPIN0_Pos)
#define USBD_INTENCLR_ENDEPIN0_Disabled (0x0UL)
#define USBD_INTENCLR_ENDEPIN0_Enabled (0x1UL)
#define USBD_INTENCLR_ENDEPIN0_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event STARTED */
#define USBD_INTENCLR_STARTED_Pos (1UL)
#define USBD_INTENCLR_STARTED_Msk (0x1UL << USBD_INTENCLR_STARTED_Pos)
#define USBD_INTENCLR_STARTED_Disabled (0x0UL)
#define USBD_INTENCLR_STARTED_Enabled (0x1UL)
#define USBD_INTENCLR_STARTED_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event USBRESET */
#define USBD_INTENCLR_USBRESET_Pos (0UL)
#define USBD_INTENCLR_USBRESET_Msk (0x1UL << USBD_INTENCLR_USBRESET_Pos)
#define USBD_INTENCLR_USBRESET_Disabled (0x0UL)
#define USBD_INTENCLR_USBRESET_Enabled (0x1UL)
#define USBD_INTENCLR_USBRESET_Clear (0x1UL)

/* Register: USBD_EVENTCAUSE */
/* Description: Details on what caused the USBEVENT event */

/* Bit 11 : USB device is ready for normal operation. Write '1' to clear. */
#define USBD_EVENTCAUSE_READY_Pos (11UL)
#define USBD_EVENTCAUSE_READY_Msk (0x1UL << USBD_EVENTCAUSE_READY_Pos)
#define USBD_EVENTCAUSE_READY_NotDetected (0x0UL)
#define USBD_EVENTCAUSE_READY_Ready (0x1UL)

/* Bit 10 : USB MAC has been woken up and operational. Write '1' to clear. */
#define USBD_EVENTCAUSE_USBWUALLOWED_Pos (10UL)
#define USBD_EVENTCAUSE_USBWUALLOWED_Msk (0x1UL << USBD_EVENTCAUSE_USBWUALLOWED_Pos)
#define USBD_EVENTCAUSE_USBWUALLOWED_NotAllowed (0x0UL)
#define USBD_EVENTCAUSE_USBWUALLOWED_Allowed (0x1UL)

/* Bit 9 : Signals that a RESUME condition (K state or activity restart) has been detected on USB lines. Write '1' to clear. */
#define USBD_EVENTCAUSE_RESUME_Pos (9UL)
#define USBD_EVENTCAUSE_RESUME_Msk (0x1UL << USBD_EVENTCAUSE_RESUME_Pos)
#define USBD_EVENTCAUSE_RESUME_NotDetected (0x0UL)
#define USBD_EVENTCAUSE_RESUME_Detected (0x1UL)

/* Bit 8 : Signals that USB lines have been idle long enough for the device to enter suspend. Write '1' to clear. */
#define USBD_EVENTCAUSE_SUSPEND_Pos (8UL)
#define USBD_EVENTCAUSE_SUSPEND_Msk (0x1UL << USBD_EVENTCAUSE_SUSPEND_Pos)
#define USBD_EVENTCAUSE_SUSPEND_NotDetected (0x0UL)
#define USBD_EVENTCAUSE_SUSPEND_Detected (0x1UL)

/* Bit 0 : CRC error was detected on isochronous OUT endpoint 8. Write '1' to clear. */
#define USBD_EVENTCAUSE_ISOOUTCRC_Pos (0UL)
#define USBD_EVENTCAUSE_ISOOUTCRC_Msk (0x1UL << USBD_EVENTCAUSE_ISOOUTCRC_Pos)
#define USBD_EVENTCAUSE_ISOOUTCRC_NotDetected (0x0UL)
#define USBD_EVENTCAUSE_ISOOUTCRC_Detected (0x1UL)

/* Register: USBD_HALTED_EPIN */
/* Description: Description collection: IN endpoint halted status. Can be used as is as response to a GetStatus() request to endpoint. */

/* Bits 15..0 : IN endpoint halted status. Can be used as is as response to a GetStatus() request to endpoint. */
#define USBD_HALTED_EPIN_GETSTATUS_Pos (0UL)
#define USBD_HALTED_EPIN_GETSTATUS_Msk (0xFFFFUL << USBD_HALTED_EPIN_GETSTATUS_Pos)
#define USBD_HALTED_EPIN_GETSTATUS_NotHalted (0x0000UL)
#define USBD_HALTED_EPIN_GETSTATUS_Halted (0x0001UL)

/* Register: USBD_HALTED_EPOUT */
/* Description: Description collection: OUT endpoint halted status. Can be used as is as response to a GetStatus() request to endpoint. */

/* Bits 15..0 : OUT endpoint halted status. Can be used as is as response to a GetStatus() request to endpoint. */
#define USBD_HALTED_EPOUT_GETSTATUS_Pos (0UL)
#define USBD_HALTED_EPOUT_GETSTATUS_Msk (0xFFFFUL << USBD_HALTED_EPOUT_GETSTATUS_Pos)
#define USBD_HALTED_EPOUT_GETSTATUS_NotHalted (0x0000UL)
#define USBD_HALTED_EPOUT_GETSTATUS_Halted (0x0001UL)

/* Register: USBD_EPSTATUS */
/* Description: Provides information on which endpoint's EasyDMA registers have been captured */

/* Bit 24 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT8_Pos (24UL)
#define USBD_EPSTATUS_EPOUT8_Msk (0x1UL << USBD_EPSTATUS_EPOUT8_Pos)
#define USBD_EPSTATUS_EPOUT8_NoData (0x0UL)
#define USBD_EPSTATUS_EPOUT8_DataDone (0x1UL)

/* Bit 23 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT7_Pos (23UL)
#define USBD_EPSTATUS_EPOUT7_Msk (0x1UL << USBD_EPSTATUS_EPOUT7_Pos)
#define USBD_EPSTATUS_EPOUT7_NoData (0x0UL)
#define USBD_EPSTATUS_EPOUT7_DataDone (0x1UL)

/* Bit 22 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT6_Pos (22UL)
#define USBD_EPSTATUS_EPOUT6_Msk (0x1UL << USBD_EPSTATUS_EPOUT6_Pos)
#define USBD_EPSTATUS_EPOUT6_NoData (0x0UL)
#define USBD_EPSTATUS_EPOUT6_DataDone (0x1UL)

/* Bit 21 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT5_Pos (21UL)
#define USBD_EPSTATUS_EPOUT5_Msk (0x1UL << USBD_EPSTATUS_EPOUT5_Pos)
#define USBD_EPSTATUS_EPOUT5_NoData (0x0UL)
#define USBD_EPSTATUS_EPOUT5_DataDone (0x1UL)

/* Bit 20 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT4_Pos (20UL)
#define USBD_EPSTATUS_EPOUT4_Msk (0x1UL << USBD_EPSTATUS_EPOUT4_Pos)
#define USBD_EPSTATUS_EPOUT4_NoData (0x0UL)
#define USBD_EPSTATUS_EPOUT4_DataDone (0x1UL)

/* Bit 19 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT3_Pos (19UL)
#define USBD_EPSTATUS_EPOUT3_Msk (0x1UL << USBD_EPSTATUS_EPOUT3_Pos)
#define USBD_EPSTATUS_EPOUT3_NoData (0x0UL)
#define USBD_EPSTATUS_EPOUT3_DataDone (0x1UL)

/* Bit 18 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT2_Pos (18UL)
#define USBD_EPSTATUS_EPOUT2_Msk (0x1UL << USBD_EPSTATUS_EPOUT2_Pos)
#define USBD_EPSTATUS_EPOUT2_NoData (0x0UL)
#define USBD_EPSTATUS_EPOUT2_DataDone (0x1UL)

/* Bit 17 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT1_Pos (17UL)
#define USBD_EPSTATUS_EPOUT1_Msk (0x1UL << USBD_EPSTATUS_EPOUT1_Pos)
#define USBD_EPSTATUS_EPOUT1_NoData (0x0UL)
#define USBD_EPSTATUS_EPOUT1_DataDone (0x1UL)

/* Bit 16 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT0_Pos (16UL)
#define USBD_EPSTATUS_EPOUT0_Msk (0x1UL << USBD_EPSTATUS_EPOUT0_Pos)
#define USBD_EPSTATUS_EPOUT0_NoData (0x0UL)
#define USBD_EPSTATUS_EPOUT0_DataDone (0x1UL)

/* Bit 8 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN8_Pos (8UL)
#define USBD_EPSTATUS_EPIN8_Msk (0x1UL << USBD_EPSTATUS_EPIN8_Pos)
#define USBD_EPSTATUS_EPIN8_NoData (0x0UL)
#define USBD_EPSTATUS_EPIN8_DataDone (0x1UL)

/* Bit 7 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN7_Pos (7UL)
#define USBD_EPSTATUS_EPIN7_Msk (0x1UL << USBD_EPSTATUS_EPIN7_Pos)
#define USBD_EPSTATUS_EPIN7_NoData (0x0UL)
#define USBD_EPSTATUS_EPIN7_DataDone (0x1UL)

/* Bit 6 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN6_Pos (6UL)
#define USBD_EPSTATUS_EPIN6_Msk (0x1UL << USBD_EPSTATUS_EPIN6_Pos)
#define USBD_EPSTATUS_EPIN6_NoData (0x0UL)
#define USBD_EPSTATUS_EPIN6_DataDone (0x1UL)

/* Bit 5 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN5_Pos (5UL)
#define USBD_EPSTATUS_EPIN5_Msk (0x1UL << USBD_EPSTATUS_EPIN5_Pos)
#define USBD_EPSTATUS_EPIN5_NoData (0x0UL)
#define USBD_EPSTATUS_EPIN5_DataDone (0x1UL)

/* Bit 4 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN4_Pos (4UL)
#define USBD_EPSTATUS_EPIN4_Msk (0x1UL << USBD_EPSTATUS_EPIN4_Pos)
#define USBD_EPSTATUS_EPIN4_NoData (0x0UL)
#define USBD_EPSTATUS_EPIN4_DataDone (0x1UL)

/* Bit 3 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN3_Pos (3UL)
#define USBD_EPSTATUS_EPIN3_Msk (0x1UL << USBD_EPSTATUS_EPIN3_Pos)
#define USBD_EPSTATUS_EPIN3_NoData (0x0UL)
#define USBD_EPSTATUS_EPIN3_DataDone (0x1UL)

/* Bit 2 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN2_Pos (2UL)
#define USBD_EPSTATUS_EPIN2_Msk (0x1UL << USBD_EPSTATUS_EPIN2_Pos)
#define USBD_EPSTATUS_EPIN2_NoData (0x0UL)
#define USBD_EPSTATUS_EPIN2_DataDone (0x1UL)

/* Bit 1 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN1_Pos (1UL)
#define USBD_EPSTATUS_EPIN1_Msk (0x1UL << USBD_EPSTATUS_EPIN1_Pos)
#define USBD_EPSTATUS_EPIN1_NoData (0x0UL)
#define USBD_EPSTATUS_EPIN1_DataDone (0x1UL)

/* Bit 0 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN0_Pos (0UL)
#define USBD_EPSTATUS_EPIN0_Msk (0x1UL << USBD_EPSTATUS_EPIN0_Pos)
#define USBD_EPSTATUS_EPIN0_NoData (0x0UL)
#define USBD_EPSTATUS_EPIN0_DataDone (0x1UL)

/* Register: USBD_EPDATASTATUS */
/* Description: Provides information on which endpoint(s) an acknowledged data transfer has occurred (EPDATA event) */

/* Bit 23 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT7_Pos (23UL)
#define USBD_EPDATASTATUS_EPOUT7_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT7_Pos)
#define USBD_EPDATASTATUS_EPOUT7_NotStarted (0x0UL)
#define USBD_EPDATASTATUS_EPOUT7_Started (0x1UL)

/* Bit 22 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT6_Pos (22UL)
#define USBD_EPDATASTATUS_EPOUT6_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT6_Pos)
#define USBD_EPDATASTATUS_EPOUT6_NotStarted (0x0UL)
#define USBD_EPDATASTATUS_EPOUT6_Started (0x1UL)

/* Bit 21 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT5_Pos (21UL)
#define USBD_EPDATASTATUS_EPOUT5_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT5_Pos)
#define USBD_EPDATASTATUS_EPOUT5_NotStarted (0x0UL)
#define USBD_EPDATASTATUS_EPOUT5_Started (0x1UL)

/* Bit 20 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT4_Pos (20UL)
#define USBD_EPDATASTATUS_EPOUT4_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT4_Pos)
#define USBD_EPDATASTATUS_EPOUT4_NotStarted (0x0UL)
#define USBD_EPDATASTATUS_EPOUT4_Started (0x1UL)

/* Bit 19 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT3_Pos (19UL)
#define USBD_EPDATASTATUS_EPOUT3_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT3_Pos)
#define USBD_EPDATASTATUS_EPOUT3_NotStarted (0x0UL)
#define USBD_EPDATASTATUS_EPOUT3_Started (0x1UL)

/* Bit 18 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT2_Pos (18UL)
#define USBD_EPDATASTATUS_EPOUT2_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT2_Pos)
#define USBD_EPDATASTATUS_EPOUT2_NotStarted (0x0UL)
#define USBD_EPDATASTATUS_EPOUT2_Started (0x1UL)

/* Bit 17 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT1_Pos (17UL)
#define USBD_EPDATASTATUS_EPOUT1_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT1_Pos)
#define USBD_EPDATASTATUS_EPOUT1_NotStarted (0x0UL)
#define USBD_EPDATASTATUS_EPOUT1_Started (0x1UL)

/* Bit 7 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN7_Pos (7UL)
#define USBD_EPDATASTATUS_EPIN7_Msk (0x1UL << USBD_EPDATASTATUS_EPIN7_Pos)
#define USBD_EPDATASTATUS_EPIN7_NotDone (0x0UL)
#define USBD_EPDATASTATUS_EPIN7_DataDone (0x1UL)

/* Bit 6 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN6_Pos (6UL)
#define USBD_EPDATASTATUS_EPIN6_Msk (0x1UL << USBD_EPDATASTATUS_EPIN6_Pos)
#define USBD_EPDATASTATUS_EPIN6_NotDone (0x0UL)
#define USBD_EPDATASTATUS_EPIN6_DataDone (0x1UL)

/* Bit 5 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN5_Pos (5UL)
#define USBD_EPDATASTATUS_EPIN5_Msk (0x1UL << USBD_EPDATASTATUS_EPIN5_Pos)
#define USBD_EPDATASTATUS_EPIN5_NotDone (0x0UL)
#define USBD_EPDATASTATUS_EPIN5_DataDone (0x1UL)

/* Bit 4 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN4_Pos (4UL)
#define USBD_EPDATASTATUS_EPIN4_Msk (0x1UL << USBD_EPDATASTATUS_EPIN4_Pos)
#define USBD_EPDATASTATUS_EPIN4_NotDone (0x0UL)
#define USBD_EPDATASTATUS_EPIN4_DataDone (0x1UL)

/* Bit 3 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN3_Pos (3UL)
#define USBD_EPDATASTATUS_EPIN3_Msk (0x1UL << USBD_EPDATASTATUS_EPIN3_Pos)
#define USBD_EPDATASTATUS_EPIN3_NotDone (0x0UL)
#define USBD_EPDATASTATUS_EPIN3_DataDone (0x1UL)

/* Bit 2 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN2_Pos (2UL)
#define USBD_EPDATASTATUS_EPIN2_Msk (0x1UL << USBD_EPDATASTATUS_EPIN2_Pos)
#define USBD_EPDATASTATUS_EPIN2_NotDone (0x0UL)
#define USBD_EPDATASTATUS_EPIN2_DataDone (0x1UL)

/* Bit 1 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN1_Pos (1UL)
#define USBD_EPDATASTATUS_EPIN1_Msk (0x1UL << USBD_EPDATASTATUS_EPIN1_Pos)
#define USBD_EPDATASTATUS_EPIN1_NotDone (0x0UL)
#define USBD_EPDATASTATUS_EPIN1_DataDone (0x1UL)

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
#define USBD_BMREQUESTTYPE_DIRECTION_HostToDevice (0x0UL)
#define USBD_BMREQUESTTYPE_DIRECTION_DeviceToHost (0x1UL)

/* Bits 6..5 : Data transfer type */
#define USBD_BMREQUESTTYPE_TYPE_Pos (5UL)
#define USBD_BMREQUESTTYPE_TYPE_Msk (0x3UL << USBD_BMREQUESTTYPE_TYPE_Pos)
#define USBD_BMREQUESTTYPE_TYPE_Standard (0x0UL)
#define USBD_BMREQUESTTYPE_TYPE_Class (0x1UL)
#define USBD_BMREQUESTTYPE_TYPE_Vendor (0x2UL)

/* Bits 4..0 : Data transfer type */
#define USBD_BMREQUESTTYPE_RECIPIENT_Pos (0UL)
#define USBD_BMREQUESTTYPE_RECIPIENT_Msk (0x1FUL << USBD_BMREQUESTTYPE_RECIPIENT_Pos)
#define USBD_BMREQUESTTYPE_RECIPIENT_Device (0x00UL)
#define USBD_BMREQUESTTYPE_RECIPIENT_Interface (0x01UL)
#define USBD_BMREQUESTTYPE_RECIPIENT_Endpoint (0x02UL)
#define USBD_BMREQUESTTYPE_RECIPIENT_Other (0x03UL)

/* Register: USBD_BREQUEST */
/* Description: SETUP data, byte 1, bRequest */

/* Bits 7..0 : SETUP data, byte 1, bRequest. Values provided for standard requests only, user must implement class and vendor values. */
#define USBD_BREQUEST_BREQUEST_Pos (0UL)
#define USBD_BREQUEST_BREQUEST_Msk (0xFFUL << USBD_BREQUEST_BREQUEST_Pos)
#define USBD_BREQUEST_BREQUEST_STD_GET_STATUS (0x00UL)
#define USBD_BREQUEST_BREQUEST_STD_CLEAR_FEATURE (0x01UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_FEATURE (0x03UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_ADDRESS (0x05UL)
#define USBD_BREQUEST_BREQUEST_STD_GET_DESCRIPTOR (0x06UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_DESCRIPTOR (0x07UL)
#define USBD_BREQUEST_BREQUEST_STD_GET_CONFIGURATION (0x08UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_CONFIGURATION (0x09UL)
#define USBD_BREQUEST_BREQUEST_STD_GET_INTERFACE (0x0AUL)
#define USBD_BREQUEST_BREQUEST_STD_SET_INTERFACE (0x0BUL)
#define USBD_BREQUEST_BREQUEST_STD_SYNCH_FRAME (0x0CUL)

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
#define USBD_SIZE_ISOOUT_ZERO_Normal (0x0UL)
#define USBD_SIZE_ISOOUT_ZERO_ZeroData (0x1UL)

/* Bits 9..0 : Number of bytes received last on this ISO OUT data endpoint */
#define USBD_SIZE_ISOOUT_SIZE_Pos (0UL)
#define USBD_SIZE_ISOOUT_SIZE_Msk (0x3FFUL << USBD_SIZE_ISOOUT_SIZE_Pos)

/* Register: USBD_ENABLE */
/* Description: Enable USB */

/* Bit 0 : Enable USB */
#define USBD_ENABLE_ENABLE_Pos (0UL)
#define USBD_ENABLE_ENABLE_Msk (0x1UL << USBD_ENABLE_ENABLE_Pos)
#define USBD_ENABLE_ENABLE_Disabled (0x0UL)
#define USBD_ENABLE_ENABLE_Enabled (0x1UL)

/* Register: USBD_USBPULLUP */
/* Description: Control of the USB pull-up */

/* Bit 0 : Control of the USB pull-up on the D+ line */
#define USBD_USBPULLUP_CONNECT_Pos (0UL)
#define USBD_USBPULLUP_CONNECT_Msk (0x1UL << USBD_USBPULLUP_CONNECT_Pos)
#define USBD_USBPULLUP_CONNECT_Disabled (0x0UL)
#define USBD_USBPULLUP_CONNECT_Enabled (0x1UL)

/* Register: USBD_DPDMVALUE */
/* Description: State D+ and D- lines will be forced into by the DPDMDRIVE task. The DPDMNODRIVE task reverts the control of the lines to MAC IP (no forcing). */

/* Bits 4..0 : State D+ and D- lines will be forced into by the DPDMDRIVE task */
#define USBD_DPDMVALUE_STATE_Pos (0UL)
#define USBD_DPDMVALUE_STATE_Msk (0x1FUL << USBD_DPDMVALUE_STATE_Pos)
#define USBD_DPDMVALUE_STATE_Resume (0x01UL)
#define USBD_DPDMVALUE_STATE_J (0x02UL)
#define USBD_DPDMVALUE_STATE_K (0x04UL)

/* Register: USBD_DTOGGLE */
/* Description: Data toggle control and status */

/* Bits 9..8 : Data toggle value */
#define USBD_DTOGGLE_VALUE_Pos (8UL)
#define USBD_DTOGGLE_VALUE_Msk (0x3UL << USBD_DTOGGLE_VALUE_Pos)
#define USBD_DTOGGLE_VALUE_Nop (0x0UL)
#define USBD_DTOGGLE_VALUE_Data0 (0x1UL)
#define USBD_DTOGGLE_VALUE_Data1 (0x2UL)

/* Bit 7 : Selects IN or OUT endpoint */
#define USBD_DTOGGLE_IO_Pos (7UL)
#define USBD_DTOGGLE_IO_Msk (0x1UL << USBD_DTOGGLE_IO_Pos)
#define USBD_DTOGGLE_IO_Out (0x0UL)
#define USBD_DTOGGLE_IO_In (0x1UL)

/* Bits 2..0 : Select bulk endpoint number */
#define USBD_DTOGGLE_EP_Pos (0UL)
#define USBD_DTOGGLE_EP_Msk (0x7UL << USBD_DTOGGLE_EP_Pos)

/* Register: USBD_EPINEN */
/* Description: Endpoint IN enable */

/* Bit 8 : Enable ISO IN endpoint */
#define USBD_EPINEN_ISOIN_Pos (8UL)
#define USBD_EPINEN_ISOIN_Msk (0x1UL << USBD_EPINEN_ISOIN_Pos)
#define USBD_EPINEN_ISOIN_Disable (0x0UL)
#define USBD_EPINEN_ISOIN_Enable (0x1UL)

/* Bit 7 : Enable IN endpoint 7 */
#define USBD_EPINEN_IN7_Pos (7UL)
#define USBD_EPINEN_IN7_Msk (0x1UL << USBD_EPINEN_IN7_Pos)
#define USBD_EPINEN_IN7_Disable (0x0UL)
#define USBD_EPINEN_IN7_Enable (0x1UL)

/* Bit 6 : Enable IN endpoint 6 */
#define USBD_EPINEN_IN6_Pos (6UL)
#define USBD_EPINEN_IN6_Msk (0x1UL << USBD_EPINEN_IN6_Pos)
#define USBD_EPINEN_IN6_Disable (0x0UL)
#define USBD_EPINEN_IN6_Enable (0x1UL)

/* Bit 5 : Enable IN endpoint 5 */
#define USBD_EPINEN_IN5_Pos (5UL)
#define USBD_EPINEN_IN5_Msk (0x1UL << USBD_EPINEN_IN5_Pos)
#define USBD_EPINEN_IN5_Disable (0x0UL)
#define USBD_EPINEN_IN5_Enable (0x1UL)

/* Bit 4 : Enable IN endpoint 4 */
#define USBD_EPINEN_IN4_Pos (4UL)
#define USBD_EPINEN_IN4_Msk (0x1UL << USBD_EPINEN_IN4_Pos)
#define USBD_EPINEN_IN4_Disable (0x0UL)
#define USBD_EPINEN_IN4_Enable (0x1UL)

/* Bit 3 : Enable IN endpoint 3 */
#define USBD_EPINEN_IN3_Pos (3UL)
#define USBD_EPINEN_IN3_Msk (0x1UL << USBD_EPINEN_IN3_Pos)
#define USBD_EPINEN_IN3_Disable (0x0UL)
#define USBD_EPINEN_IN3_Enable (0x1UL)

/* Bit 2 : Enable IN endpoint 2 */
#define USBD_EPINEN_IN2_Pos (2UL)
#define USBD_EPINEN_IN2_Msk (0x1UL << USBD_EPINEN_IN2_Pos)
#define USBD_EPINEN_IN2_Disable (0x0UL)
#define USBD_EPINEN_IN2_Enable (0x1UL)

/* Bit 1 : Enable IN endpoint 1 */
#define USBD_EPINEN_IN1_Pos (1UL)
#define USBD_EPINEN_IN1_Msk (0x1UL << USBD_EPINEN_IN1_Pos)
#define USBD_EPINEN_IN1_Disable (0x0UL)
#define USBD_EPINEN_IN1_Enable (0x1UL)

/* Bit 0 : Enable IN endpoint 0 */
#define USBD_EPINEN_IN0_Pos (0UL)
#define USBD_EPINEN_IN0_Msk (0x1UL << USBD_EPINEN_IN0_Pos)
#define USBD_EPINEN_IN0_Disable (0x0UL)
#define USBD_EPINEN_IN0_Enable (0x1UL)

/* Register: USBD_EPOUTEN */
/* Description: Endpoint OUT enable */

/* Bit 8 : Enable ISO OUT endpoint 8 */
#define USBD_EPOUTEN_ISOOUT_Pos (8UL)
#define USBD_EPOUTEN_ISOOUT_Msk (0x1UL << USBD_EPOUTEN_ISOOUT_Pos)
#define USBD_EPOUTEN_ISOOUT_Disable (0x0UL)
#define USBD_EPOUTEN_ISOOUT_Enable (0x1UL)

/* Bit 7 : Enable OUT endpoint 7 */
#define USBD_EPOUTEN_OUT7_Pos (7UL)
#define USBD_EPOUTEN_OUT7_Msk (0x1UL << USBD_EPOUTEN_OUT7_Pos)
#define USBD_EPOUTEN_OUT7_Disable (0x0UL)
#define USBD_EPOUTEN_OUT7_Enable (0x1UL)

/* Bit 6 : Enable OUT endpoint 6 */
#define USBD_EPOUTEN_OUT6_Pos (6UL)
#define USBD_EPOUTEN_OUT6_Msk (0x1UL << USBD_EPOUTEN_OUT6_Pos)
#define USBD_EPOUTEN_OUT6_Disable (0x0UL)
#define USBD_EPOUTEN_OUT6_Enable (0x1UL)

/* Bit 5 : Enable OUT endpoint 5 */
#define USBD_EPOUTEN_OUT5_Pos (5UL)
#define USBD_EPOUTEN_OUT5_Msk (0x1UL << USBD_EPOUTEN_OUT5_Pos)
#define USBD_EPOUTEN_OUT5_Disable (0x0UL)
#define USBD_EPOUTEN_OUT5_Enable (0x1UL)

/* Bit 4 : Enable OUT endpoint 4 */
#define USBD_EPOUTEN_OUT4_Pos (4UL)
#define USBD_EPOUTEN_OUT4_Msk (0x1UL << USBD_EPOUTEN_OUT4_Pos)
#define USBD_EPOUTEN_OUT4_Disable (0x0UL)
#define USBD_EPOUTEN_OUT4_Enable (0x1UL)

/* Bit 3 : Enable OUT endpoint 3 */
#define USBD_EPOUTEN_OUT3_Pos (3UL)
#define USBD_EPOUTEN_OUT3_Msk (0x1UL << USBD_EPOUTEN_OUT3_Pos)
#define USBD_EPOUTEN_OUT3_Disable (0x0UL)
#define USBD_EPOUTEN_OUT3_Enable (0x1UL)

/* Bit 2 : Enable OUT endpoint 2 */
#define USBD_EPOUTEN_OUT2_Pos (2UL)
#define USBD_EPOUTEN_OUT2_Msk (0x1UL << USBD_EPOUTEN_OUT2_Pos)
#define USBD_EPOUTEN_OUT2_Disable (0x0UL)
#define USBD_EPOUTEN_OUT2_Enable (0x1UL)

/* Bit 1 : Enable OUT endpoint 1 */
#define USBD_EPOUTEN_OUT1_Pos (1UL)
#define USBD_EPOUTEN_OUT1_Msk (0x1UL << USBD_EPOUTEN_OUT1_Pos)
#define USBD_EPOUTEN_OUT1_Disable (0x0UL)
#define USBD_EPOUTEN_OUT1_Enable (0x1UL)

/* Bit 0 : Enable OUT endpoint 0 */
#define USBD_EPOUTEN_OUT0_Pos (0UL)
#define USBD_EPOUTEN_OUT0_Msk (0x1UL << USBD_EPOUTEN_OUT0_Pos)
#define USBD_EPOUTEN_OUT0_Disable (0x0UL)
#define USBD_EPOUTEN_OUT0_Enable (0x1UL)

/* Register: USBD_EPSTALL */
/* Description: STALL endpoints */

/* Bit 8 : Stall selected endpoint */
#define USBD_EPSTALL_STALL_Pos (8UL)
#define USBD_EPSTALL_STALL_Msk (0x1UL << USBD_EPSTALL_STALL_Pos)
#define USBD_EPSTALL_STALL_UnStall (0x0UL)
#define USBD_EPSTALL_STALL_Stall (0x1UL)

/* Bit 7 : Selects IN or OUT endpoint */
#define USBD_EPSTALL_IO_Pos (7UL)
#define USBD_EPSTALL_IO_Msk (0x1UL << USBD_EPSTALL_IO_Pos)
#define USBD_EPSTALL_IO_Out (0x0UL)
#define USBD_EPSTALL_IO_In (0x1UL)

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
/* Description: Controls USBD peripheral Low-power mode during USB suspend */

/* Bit 0 : Controls USBD peripheral Low-power mode during USB suspend */
#define USBD_LOWPOWER_LOWPOWER_Pos (0UL)
#define USBD_LOWPOWER_LOWPOWER_Msk (0x1UL << USBD_LOWPOWER_LOWPOWER_Pos)
#define USBD_LOWPOWER_LOWPOWER_ForceNormal (0x0UL)
#define USBD_LOWPOWER_LOWPOWER_LowPower (0x1UL)

/* Register: USBD_ISOINCONFIG */
/* Description: Controls the response of the ISO IN endpoint to an IN token when no data is ready to be sent */

/* Bit 0 : Controls the response of the ISO IN endpoint to an IN token when no data is ready to be sent */
#define USBD_ISOINCONFIG_RESPONSE_Pos (0UL)
#define USBD_ISOINCONFIG_RESPONSE_Msk (0x1UL << USBD_ISOINCONFIG_RESPONSE_Pos)
#define USBD_ISOINCONFIG_RESPONSE_NoResp (0x0UL)
#define USBD_ISOINCONFIG_RESPONSE_ZeroData (0x1UL)

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


/* Peripheral: USBREG */
/* Description: USB Regulator 0 */

/* Register: USBREG_EVENTS_USBDETECTED */
/* Description: Voltage supply detected on VBUS */

/* Bit 0 : Voltage supply detected on VBUS */
#define USBREG_EVENTS_USBDETECTED_EVENTS_USBDETECTED_Pos (0UL)
#define USBREG_EVENTS_USBDETECTED_EVENTS_USBDETECTED_Msk (0x1UL << USBREG_EVENTS_USBDETECTED_EVENTS_USBDETECTED_Pos)
#define USBREG_EVENTS_USBDETECTED_EVENTS_USBDETECTED_NotGenerated (0x0UL)
#define USBREG_EVENTS_USBDETECTED_EVENTS_USBDETECTED_Generated (0x1UL)

/* Register: USBREG_EVENTS_USBREMOVED */
/* Description: Voltage supply removed from VBUS */

/* Bit 0 : Voltage supply removed from VBUS */
#define USBREG_EVENTS_USBREMOVED_EVENTS_USBREMOVED_Pos (0UL)
#define USBREG_EVENTS_USBREMOVED_EVENTS_USBREMOVED_Msk (0x1UL << USBREG_EVENTS_USBREMOVED_EVENTS_USBREMOVED_Pos)
#define USBREG_EVENTS_USBREMOVED_EVENTS_USBREMOVED_NotGenerated (0x0UL)
#define USBREG_EVENTS_USBREMOVED_EVENTS_USBREMOVED_Generated (0x1UL)

/* Register: USBREG_EVENTS_USBPWRRDY */
/* Description: USB 3.3 V supply ready */

/* Bit 0 : USB 3.3 V supply ready */
#define USBREG_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_Pos (0UL)
#define USBREG_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_Msk (0x1UL << USBREG_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_Pos)
#define USBREG_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_NotGenerated (0x0UL)
#define USBREG_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_Generated (0x1UL)

/* Register: USBREG_PUBLISH_USBDETECTED */
/* Description: Publish configuration for event USBDETECTED */

/* Bit 31 :   */
#define USBREG_PUBLISH_USBDETECTED_EN_Pos (31UL)
#define USBREG_PUBLISH_USBDETECTED_EN_Msk (0x1UL << USBREG_PUBLISH_USBDETECTED_EN_Pos)
#define USBREG_PUBLISH_USBDETECTED_EN_Disabled (0x0UL)
#define USBREG_PUBLISH_USBDETECTED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event USBDETECTED will publish to */
#define USBREG_PUBLISH_USBDETECTED_CHIDX_Pos (0UL)
#define USBREG_PUBLISH_USBDETECTED_CHIDX_Msk (0xFFUL << USBREG_PUBLISH_USBDETECTED_CHIDX_Pos)

/* Register: USBREG_PUBLISH_USBREMOVED */
/* Description: Publish configuration for event USBREMOVED */

/* Bit 31 :   */
#define USBREG_PUBLISH_USBREMOVED_EN_Pos (31UL)
#define USBREG_PUBLISH_USBREMOVED_EN_Msk (0x1UL << USBREG_PUBLISH_USBREMOVED_EN_Pos)
#define USBREG_PUBLISH_USBREMOVED_EN_Disabled (0x0UL)
#define USBREG_PUBLISH_USBREMOVED_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event USBREMOVED will publish to */
#define USBREG_PUBLISH_USBREMOVED_CHIDX_Pos (0UL)
#define USBREG_PUBLISH_USBREMOVED_CHIDX_Msk (0xFFUL << USBREG_PUBLISH_USBREMOVED_CHIDX_Pos)

/* Register: USBREG_PUBLISH_USBPWRRDY */
/* Description: Publish configuration for event USBPWRRDY */

/* Bit 31 :   */
#define USBREG_PUBLISH_USBPWRRDY_EN_Pos (31UL)
#define USBREG_PUBLISH_USBPWRRDY_EN_Msk (0x1UL << USBREG_PUBLISH_USBPWRRDY_EN_Pos)
#define USBREG_PUBLISH_USBPWRRDY_EN_Disabled (0x0UL)
#define USBREG_PUBLISH_USBPWRRDY_EN_Enabled (0x1UL)

/* Bits 7..0 : DPPI channel that event USBPWRRDY will publish to */
#define USBREG_PUBLISH_USBPWRRDY_CHIDX_Pos (0UL)
#define USBREG_PUBLISH_USBPWRRDY_CHIDX_Msk (0xFFUL << USBREG_PUBLISH_USBPWRRDY_CHIDX_Pos)

/* Register: USBREG_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 2 : Enable or disable interrupt for event USBPWRRDY */
#define USBREG_INTEN_USBPWRRDY_Pos (2UL)
#define USBREG_INTEN_USBPWRRDY_Msk (0x1UL << USBREG_INTEN_USBPWRRDY_Pos)
#define USBREG_INTEN_USBPWRRDY_Disabled (0x0UL)
#define USBREG_INTEN_USBPWRRDY_Enabled (0x1UL)

/* Bit 1 : Enable or disable interrupt for event USBREMOVED */
#define USBREG_INTEN_USBREMOVED_Pos (1UL)
#define USBREG_INTEN_USBREMOVED_Msk (0x1UL << USBREG_INTEN_USBREMOVED_Pos)
#define USBREG_INTEN_USBREMOVED_Disabled (0x0UL)
#define USBREG_INTEN_USBREMOVED_Enabled (0x1UL)

/* Bit 0 : Enable or disable interrupt for event USBDETECTED */
#define USBREG_INTEN_USBDETECTED_Pos (0UL)
#define USBREG_INTEN_USBDETECTED_Msk (0x1UL << USBREG_INTEN_USBDETECTED_Pos)
#define USBREG_INTEN_USBDETECTED_Disabled (0x0UL)
#define USBREG_INTEN_USBDETECTED_Enabled (0x1UL)

/* Register: USBREG_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event USBPWRRDY */
#define USBREG_INTENSET_USBPWRRDY_Pos (2UL)
#define USBREG_INTENSET_USBPWRRDY_Msk (0x1UL << USBREG_INTENSET_USBPWRRDY_Pos)
#define USBREG_INTENSET_USBPWRRDY_Disabled (0x0UL)
#define USBREG_INTENSET_USBPWRRDY_Enabled (0x1UL)
#define USBREG_INTENSET_USBPWRRDY_Set (0x1UL)

/* Bit 1 : Write '1' to enable interrupt for event USBREMOVED */
#define USBREG_INTENSET_USBREMOVED_Pos (1UL)
#define USBREG_INTENSET_USBREMOVED_Msk (0x1UL << USBREG_INTENSET_USBREMOVED_Pos)
#define USBREG_INTENSET_USBREMOVED_Disabled (0x0UL)
#define USBREG_INTENSET_USBREMOVED_Enabled (0x1UL)
#define USBREG_INTENSET_USBREMOVED_Set (0x1UL)

/* Bit 0 : Write '1' to enable interrupt for event USBDETECTED */
#define USBREG_INTENSET_USBDETECTED_Pos (0UL)
#define USBREG_INTENSET_USBDETECTED_Msk (0x1UL << USBREG_INTENSET_USBDETECTED_Pos)
#define USBREG_INTENSET_USBDETECTED_Disabled (0x0UL)
#define USBREG_INTENSET_USBDETECTED_Enabled (0x1UL)
#define USBREG_INTENSET_USBDETECTED_Set (0x1UL)

/* Register: USBREG_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event USBPWRRDY */
#define USBREG_INTENCLR_USBPWRRDY_Pos (2UL)
#define USBREG_INTENCLR_USBPWRRDY_Msk (0x1UL << USBREG_INTENCLR_USBPWRRDY_Pos)
#define USBREG_INTENCLR_USBPWRRDY_Disabled (0x0UL)
#define USBREG_INTENCLR_USBPWRRDY_Enabled (0x1UL)
#define USBREG_INTENCLR_USBPWRRDY_Clear (0x1UL)

/* Bit 1 : Write '1' to disable interrupt for event USBREMOVED */
#define USBREG_INTENCLR_USBREMOVED_Pos (1UL)
#define USBREG_INTENCLR_USBREMOVED_Msk (0x1UL << USBREG_INTENCLR_USBREMOVED_Pos)
#define USBREG_INTENCLR_USBREMOVED_Disabled (0x0UL)
#define USBREG_INTENCLR_USBREMOVED_Enabled (0x1UL)
#define USBREG_INTENCLR_USBREMOVED_Clear (0x1UL)

/* Bit 0 : Write '1' to disable interrupt for event USBDETECTED */
#define USBREG_INTENCLR_USBDETECTED_Pos (0UL)
#define USBREG_INTENCLR_USBDETECTED_Msk (0x1UL << USBREG_INTENCLR_USBDETECTED_Pos)
#define USBREG_INTENCLR_USBDETECTED_Disabled (0x0UL)
#define USBREG_INTENCLR_USBDETECTED_Enabled (0x1UL)
#define USBREG_INTENCLR_USBDETECTED_Clear (0x1UL)

/* Register: USBREG_USBREGSTATUS */
/* Description: USB supply status */

/* Bit 1 : USB supply output settling time elapsed */
#define USBREG_USBREGSTATUS_OUTPUTRDY_Pos (1UL)
#define USBREG_USBREGSTATUS_OUTPUTRDY_Msk (0x1UL << USBREG_USBREGSTATUS_OUTPUTRDY_Pos)
#define USBREG_USBREGSTATUS_OUTPUTRDY_NotReady (0x0UL)
#define USBREG_USBREGSTATUS_OUTPUTRDY_Ready (0x1UL)

/* Bit 0 : VBUS input detection status (USBDETECTED and USBREMOVED events are derived from this information) */
#define USBREG_USBREGSTATUS_VBUSDETECT_Pos (0UL)
#define USBREG_USBREGSTATUS_VBUSDETECT_Msk (0x1UL << USBREG_USBREGSTATUS_VBUSDETECT_Pos)
#define USBREG_USBREGSTATUS_VBUSDETECT_NoVbus (0x0UL)
#define USBREG_USBREGSTATUS_VBUSDETECT_VbusPresent (0x1UL)


/* Peripheral: VMC */
/* Description: Volatile Memory controller 0 */

/* Register: VMC_RAM_POWER */
/* Description: Description cluster: RAM[n] power control register */

/* Bit 31 : Keep retention on RAM section S15 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S15RETENTION_Pos (31UL)
#define VMC_RAM_POWER_S15RETENTION_Msk (0x1UL << VMC_RAM_POWER_S15RETENTION_Pos)
#define VMC_RAM_POWER_S15RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S15RETENTION_On (0x1UL)

/* Bit 30 : Keep retention on RAM section S14 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S14RETENTION_Pos (30UL)
#define VMC_RAM_POWER_S14RETENTION_Msk (0x1UL << VMC_RAM_POWER_S14RETENTION_Pos)
#define VMC_RAM_POWER_S14RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S14RETENTION_On (0x1UL)

/* Bit 29 : Keep retention on RAM section S13 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S13RETENTION_Pos (29UL)
#define VMC_RAM_POWER_S13RETENTION_Msk (0x1UL << VMC_RAM_POWER_S13RETENTION_Pos)
#define VMC_RAM_POWER_S13RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S13RETENTION_On (0x1UL)

/* Bit 28 : Keep retention on RAM section S12 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S12RETENTION_Pos (28UL)
#define VMC_RAM_POWER_S12RETENTION_Msk (0x1UL << VMC_RAM_POWER_S12RETENTION_Pos)
#define VMC_RAM_POWER_S12RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S12RETENTION_On (0x1UL)

/* Bit 27 : Keep retention on RAM section S11 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S11RETENTION_Pos (27UL)
#define VMC_RAM_POWER_S11RETENTION_Msk (0x1UL << VMC_RAM_POWER_S11RETENTION_Pos)
#define VMC_RAM_POWER_S11RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S11RETENTION_On (0x1UL)

/* Bit 26 : Keep retention on RAM section S10 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S10RETENTION_Pos (26UL)
#define VMC_RAM_POWER_S10RETENTION_Msk (0x1UL << VMC_RAM_POWER_S10RETENTION_Pos)
#define VMC_RAM_POWER_S10RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S10RETENTION_On (0x1UL)

/* Bit 25 : Keep retention on RAM section S9 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S9RETENTION_Pos (25UL)
#define VMC_RAM_POWER_S9RETENTION_Msk (0x1UL << VMC_RAM_POWER_S9RETENTION_Pos)
#define VMC_RAM_POWER_S9RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S9RETENTION_On (0x1UL)

/* Bit 24 : Keep retention on RAM section S8 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S8RETENTION_Pos (24UL)
#define VMC_RAM_POWER_S8RETENTION_Msk (0x1UL << VMC_RAM_POWER_S8RETENTION_Pos)
#define VMC_RAM_POWER_S8RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S8RETENTION_On (0x1UL)

/* Bit 23 : Keep retention on RAM section S7 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S7RETENTION_Pos (23UL)
#define VMC_RAM_POWER_S7RETENTION_Msk (0x1UL << VMC_RAM_POWER_S7RETENTION_Pos)
#define VMC_RAM_POWER_S7RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S7RETENTION_On (0x1UL)

/* Bit 22 : Keep retention on RAM section S6 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S6RETENTION_Pos (22UL)
#define VMC_RAM_POWER_S6RETENTION_Msk (0x1UL << VMC_RAM_POWER_S6RETENTION_Pos)
#define VMC_RAM_POWER_S6RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S6RETENTION_On (0x1UL)

/* Bit 21 : Keep retention on RAM section S5 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S5RETENTION_Pos (21UL)
#define VMC_RAM_POWER_S5RETENTION_Msk (0x1UL << VMC_RAM_POWER_S5RETENTION_Pos)
#define VMC_RAM_POWER_S5RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S5RETENTION_On (0x1UL)

/* Bit 20 : Keep retention on RAM section S4 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S4RETENTION_Pos (20UL)
#define VMC_RAM_POWER_S4RETENTION_Msk (0x1UL << VMC_RAM_POWER_S4RETENTION_Pos)
#define VMC_RAM_POWER_S4RETENTION_Off (0x0UL)
#define VMC_RAM_POWER_S4RETENTION_On (0x1UL)

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

/* Bit 15 : Keep RAM section S15 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S15POWER_Pos (15UL)
#define VMC_RAM_POWER_S15POWER_Msk (0x1UL << VMC_RAM_POWER_S15POWER_Pos)
#define VMC_RAM_POWER_S15POWER_Off (0x0UL)
#define VMC_RAM_POWER_S15POWER_On (0x1UL)

/* Bit 14 : Keep RAM section S14 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S14POWER_Pos (14UL)
#define VMC_RAM_POWER_S14POWER_Msk (0x1UL << VMC_RAM_POWER_S14POWER_Pos)
#define VMC_RAM_POWER_S14POWER_Off (0x0UL)
#define VMC_RAM_POWER_S14POWER_On (0x1UL)

/* Bit 13 : Keep RAM section S13 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S13POWER_Pos (13UL)
#define VMC_RAM_POWER_S13POWER_Msk (0x1UL << VMC_RAM_POWER_S13POWER_Pos)
#define VMC_RAM_POWER_S13POWER_Off (0x0UL)
#define VMC_RAM_POWER_S13POWER_On (0x1UL)

/* Bit 12 : Keep RAM section S12 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S12POWER_Pos (12UL)
#define VMC_RAM_POWER_S12POWER_Msk (0x1UL << VMC_RAM_POWER_S12POWER_Pos)
#define VMC_RAM_POWER_S12POWER_Off (0x0UL)
#define VMC_RAM_POWER_S12POWER_On (0x1UL)

/* Bit 11 : Keep RAM section S11 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S11POWER_Pos (11UL)
#define VMC_RAM_POWER_S11POWER_Msk (0x1UL << VMC_RAM_POWER_S11POWER_Pos)
#define VMC_RAM_POWER_S11POWER_Off (0x0UL)
#define VMC_RAM_POWER_S11POWER_On (0x1UL)

/* Bit 10 : Keep RAM section S10 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S10POWER_Pos (10UL)
#define VMC_RAM_POWER_S10POWER_Msk (0x1UL << VMC_RAM_POWER_S10POWER_Pos)
#define VMC_RAM_POWER_S10POWER_Off (0x0UL)
#define VMC_RAM_POWER_S10POWER_On (0x1UL)

/* Bit 9 : Keep RAM section S9 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S9POWER_Pos (9UL)
#define VMC_RAM_POWER_S9POWER_Msk (0x1UL << VMC_RAM_POWER_S9POWER_Pos)
#define VMC_RAM_POWER_S9POWER_Off (0x0UL)
#define VMC_RAM_POWER_S9POWER_On (0x1UL)

/* Bit 8 : Keep RAM section S8 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S8POWER_Pos (8UL)
#define VMC_RAM_POWER_S8POWER_Msk (0x1UL << VMC_RAM_POWER_S8POWER_Pos)
#define VMC_RAM_POWER_S8POWER_Off (0x0UL)
#define VMC_RAM_POWER_S8POWER_On (0x1UL)

/* Bit 7 : Keep RAM section S7 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S7POWER_Pos (7UL)
#define VMC_RAM_POWER_S7POWER_Msk (0x1UL << VMC_RAM_POWER_S7POWER_Pos)
#define VMC_RAM_POWER_S7POWER_Off (0x0UL)
#define VMC_RAM_POWER_S7POWER_On (0x1UL)

/* Bit 6 : Keep RAM section S6 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S6POWER_Pos (6UL)
#define VMC_RAM_POWER_S6POWER_Msk (0x1UL << VMC_RAM_POWER_S6POWER_Pos)
#define VMC_RAM_POWER_S6POWER_Off (0x0UL)
#define VMC_RAM_POWER_S6POWER_On (0x1UL)

/* Bit 5 : Keep RAM section S5 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S5POWER_Pos (5UL)
#define VMC_RAM_POWER_S5POWER_Msk (0x1UL << VMC_RAM_POWER_S5POWER_Pos)
#define VMC_RAM_POWER_S5POWER_Off (0x0UL)
#define VMC_RAM_POWER_S5POWER_On (0x1UL)

/* Bit 4 : Keep RAM section S4 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S4POWER_Pos (4UL)
#define VMC_RAM_POWER_S4POWER_Msk (0x1UL << VMC_RAM_POWER_S4POWER_Pos)
#define VMC_RAM_POWER_S4POWER_Off (0x0UL)
#define VMC_RAM_POWER_S4POWER_On (0x1UL)

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

/* Bit 31 : Keep retention on RAM section S15 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S15RETENTION_Pos (31UL)
#define VMC_RAM_POWERSET_S15RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S15RETENTION_Pos)
#define VMC_RAM_POWERSET_S15RETENTION_On (0x1UL)

/* Bit 30 : Keep retention on RAM section S14 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S14RETENTION_Pos (30UL)
#define VMC_RAM_POWERSET_S14RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S14RETENTION_Pos)
#define VMC_RAM_POWERSET_S14RETENTION_On (0x1UL)

/* Bit 29 : Keep retention on RAM section S13 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S13RETENTION_Pos (29UL)
#define VMC_RAM_POWERSET_S13RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S13RETENTION_Pos)
#define VMC_RAM_POWERSET_S13RETENTION_On (0x1UL)

/* Bit 28 : Keep retention on RAM section S12 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S12RETENTION_Pos (28UL)
#define VMC_RAM_POWERSET_S12RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S12RETENTION_Pos)
#define VMC_RAM_POWERSET_S12RETENTION_On (0x1UL)

/* Bit 27 : Keep retention on RAM section S11 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S11RETENTION_Pos (27UL)
#define VMC_RAM_POWERSET_S11RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S11RETENTION_Pos)
#define VMC_RAM_POWERSET_S11RETENTION_On (0x1UL)

/* Bit 26 : Keep retention on RAM section S10 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S10RETENTION_Pos (26UL)
#define VMC_RAM_POWERSET_S10RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S10RETENTION_Pos)
#define VMC_RAM_POWERSET_S10RETENTION_On (0x1UL)

/* Bit 25 : Keep retention on RAM section S9 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S9RETENTION_Pos (25UL)
#define VMC_RAM_POWERSET_S9RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S9RETENTION_Pos)
#define VMC_RAM_POWERSET_S9RETENTION_On (0x1UL)

/* Bit 24 : Keep retention on RAM section S8 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S8RETENTION_Pos (24UL)
#define VMC_RAM_POWERSET_S8RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S8RETENTION_Pos)
#define VMC_RAM_POWERSET_S8RETENTION_On (0x1UL)

/* Bit 23 : Keep retention on RAM section S7 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S7RETENTION_Pos (23UL)
#define VMC_RAM_POWERSET_S7RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S7RETENTION_Pos)
#define VMC_RAM_POWERSET_S7RETENTION_On (0x1UL)

/* Bit 22 : Keep retention on RAM section S6 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S6RETENTION_Pos (22UL)
#define VMC_RAM_POWERSET_S6RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S6RETENTION_Pos)
#define VMC_RAM_POWERSET_S6RETENTION_On (0x1UL)

/* Bit 21 : Keep retention on RAM section S5 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S5RETENTION_Pos (21UL)
#define VMC_RAM_POWERSET_S5RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S5RETENTION_Pos)
#define VMC_RAM_POWERSET_S5RETENTION_On (0x1UL)

/* Bit 20 : Keep retention on RAM section S4 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S4RETENTION_Pos (20UL)
#define VMC_RAM_POWERSET_S4RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S4RETENTION_Pos)
#define VMC_RAM_POWERSET_S4RETENTION_On (0x1UL)

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

/* Bit 15 : Keep RAM section S15 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S15POWER_Pos (15UL)
#define VMC_RAM_POWERSET_S15POWER_Msk (0x1UL << VMC_RAM_POWERSET_S15POWER_Pos)
#define VMC_RAM_POWERSET_S15POWER_On (0x1UL)

/* Bit 14 : Keep RAM section S14 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S14POWER_Pos (14UL)
#define VMC_RAM_POWERSET_S14POWER_Msk (0x1UL << VMC_RAM_POWERSET_S14POWER_Pos)
#define VMC_RAM_POWERSET_S14POWER_On (0x1UL)

/* Bit 13 : Keep RAM section S13 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S13POWER_Pos (13UL)
#define VMC_RAM_POWERSET_S13POWER_Msk (0x1UL << VMC_RAM_POWERSET_S13POWER_Pos)
#define VMC_RAM_POWERSET_S13POWER_On (0x1UL)

/* Bit 12 : Keep RAM section S12 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S12POWER_Pos (12UL)
#define VMC_RAM_POWERSET_S12POWER_Msk (0x1UL << VMC_RAM_POWERSET_S12POWER_Pos)
#define VMC_RAM_POWERSET_S12POWER_On (0x1UL)

/* Bit 11 : Keep RAM section S11 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S11POWER_Pos (11UL)
#define VMC_RAM_POWERSET_S11POWER_Msk (0x1UL << VMC_RAM_POWERSET_S11POWER_Pos)
#define VMC_RAM_POWERSET_S11POWER_On (0x1UL)

/* Bit 10 : Keep RAM section S10 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S10POWER_Pos (10UL)
#define VMC_RAM_POWERSET_S10POWER_Msk (0x1UL << VMC_RAM_POWERSET_S10POWER_Pos)
#define VMC_RAM_POWERSET_S10POWER_On (0x1UL)

/* Bit 9 : Keep RAM section S9 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S9POWER_Pos (9UL)
#define VMC_RAM_POWERSET_S9POWER_Msk (0x1UL << VMC_RAM_POWERSET_S9POWER_Pos)
#define VMC_RAM_POWERSET_S9POWER_On (0x1UL)

/* Bit 8 : Keep RAM section S8 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S8POWER_Pos (8UL)
#define VMC_RAM_POWERSET_S8POWER_Msk (0x1UL << VMC_RAM_POWERSET_S8POWER_Pos)
#define VMC_RAM_POWERSET_S8POWER_On (0x1UL)

/* Bit 7 : Keep RAM section S7 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S7POWER_Pos (7UL)
#define VMC_RAM_POWERSET_S7POWER_Msk (0x1UL << VMC_RAM_POWERSET_S7POWER_Pos)
#define VMC_RAM_POWERSET_S7POWER_On (0x1UL)

/* Bit 6 : Keep RAM section S6 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S6POWER_Pos (6UL)
#define VMC_RAM_POWERSET_S6POWER_Msk (0x1UL << VMC_RAM_POWERSET_S6POWER_Pos)
#define VMC_RAM_POWERSET_S6POWER_On (0x1UL)

/* Bit 5 : Keep RAM section S5 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S5POWER_Pos (5UL)
#define VMC_RAM_POWERSET_S5POWER_Msk (0x1UL << VMC_RAM_POWERSET_S5POWER_Pos)
#define VMC_RAM_POWERSET_S5POWER_On (0x1UL)

/* Bit 4 : Keep RAM section S4 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S4POWER_Pos (4UL)
#define VMC_RAM_POWERSET_S4POWER_Msk (0x1UL << VMC_RAM_POWERSET_S4POWER_Pos)
#define VMC_RAM_POWERSET_S4POWER_On (0x1UL)

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

/* Bit 31 : Keep retention on RAM section S15 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S15RETENTION_Pos (31UL)
#define VMC_RAM_POWERCLR_S15RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S15RETENTION_Pos)
#define VMC_RAM_POWERCLR_S15RETENTION_Off (0x1UL)

/* Bit 30 : Keep retention on RAM section S14 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S14RETENTION_Pos (30UL)
#define VMC_RAM_POWERCLR_S14RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S14RETENTION_Pos)
#define VMC_RAM_POWERCLR_S14RETENTION_Off (0x1UL)

/* Bit 29 : Keep retention on RAM section S13 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S13RETENTION_Pos (29UL)
#define VMC_RAM_POWERCLR_S13RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S13RETENTION_Pos)
#define VMC_RAM_POWERCLR_S13RETENTION_Off (0x1UL)

/* Bit 28 : Keep retention on RAM section S12 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S12RETENTION_Pos (28UL)
#define VMC_RAM_POWERCLR_S12RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S12RETENTION_Pos)
#define VMC_RAM_POWERCLR_S12RETENTION_Off (0x1UL)

/* Bit 27 : Keep retention on RAM section S11 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S11RETENTION_Pos (27UL)
#define VMC_RAM_POWERCLR_S11RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S11RETENTION_Pos)
#define VMC_RAM_POWERCLR_S11RETENTION_Off (0x1UL)

/* Bit 26 : Keep retention on RAM section S10 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S10RETENTION_Pos (26UL)
#define VMC_RAM_POWERCLR_S10RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S10RETENTION_Pos)
#define VMC_RAM_POWERCLR_S10RETENTION_Off (0x1UL)

/* Bit 25 : Keep retention on RAM section S9 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S9RETENTION_Pos (25UL)
#define VMC_RAM_POWERCLR_S9RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S9RETENTION_Pos)
#define VMC_RAM_POWERCLR_S9RETENTION_Off (0x1UL)

/* Bit 24 : Keep retention on RAM section S8 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S8RETENTION_Pos (24UL)
#define VMC_RAM_POWERCLR_S8RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S8RETENTION_Pos)
#define VMC_RAM_POWERCLR_S8RETENTION_Off (0x1UL)

/* Bit 23 : Keep retention on RAM section S7 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S7RETENTION_Pos (23UL)
#define VMC_RAM_POWERCLR_S7RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S7RETENTION_Pos)
#define VMC_RAM_POWERCLR_S7RETENTION_Off (0x1UL)

/* Bit 22 : Keep retention on RAM section S6 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S6RETENTION_Pos (22UL)
#define VMC_RAM_POWERCLR_S6RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S6RETENTION_Pos)
#define VMC_RAM_POWERCLR_S6RETENTION_Off (0x1UL)

/* Bit 21 : Keep retention on RAM section S5 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S5RETENTION_Pos (21UL)
#define VMC_RAM_POWERCLR_S5RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S5RETENTION_Pos)
#define VMC_RAM_POWERCLR_S5RETENTION_Off (0x1UL)

/* Bit 20 : Keep retention on RAM section S4 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S4RETENTION_Pos (20UL)
#define VMC_RAM_POWERCLR_S4RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S4RETENTION_Pos)
#define VMC_RAM_POWERCLR_S4RETENTION_Off (0x1UL)

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

/* Bit 15 : Keep RAM section S15 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S15POWER_Pos (15UL)
#define VMC_RAM_POWERCLR_S15POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S15POWER_Pos)
#define VMC_RAM_POWERCLR_S15POWER_Off (0x1UL)

/* Bit 14 : Keep RAM section S14 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S14POWER_Pos (14UL)
#define VMC_RAM_POWERCLR_S14POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S14POWER_Pos)
#define VMC_RAM_POWERCLR_S14POWER_Off (0x1UL)

/* Bit 13 : Keep RAM section S13 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S13POWER_Pos (13UL)
#define VMC_RAM_POWERCLR_S13POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S13POWER_Pos)
#define VMC_RAM_POWERCLR_S13POWER_Off (0x1UL)

/* Bit 12 : Keep RAM section S12 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S12POWER_Pos (12UL)
#define VMC_RAM_POWERCLR_S12POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S12POWER_Pos)
#define VMC_RAM_POWERCLR_S12POWER_Off (0x1UL)

/* Bit 11 : Keep RAM section S11 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S11POWER_Pos (11UL)
#define VMC_RAM_POWERCLR_S11POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S11POWER_Pos)
#define VMC_RAM_POWERCLR_S11POWER_Off (0x1UL)

/* Bit 10 : Keep RAM section S10 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S10POWER_Pos (10UL)
#define VMC_RAM_POWERCLR_S10POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S10POWER_Pos)
#define VMC_RAM_POWERCLR_S10POWER_Off (0x1UL)

/* Bit 9 : Keep RAM section S9 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S9POWER_Pos (9UL)
#define VMC_RAM_POWERCLR_S9POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S9POWER_Pos)
#define VMC_RAM_POWERCLR_S9POWER_Off (0x1UL)

/* Bit 8 : Keep RAM section S8 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S8POWER_Pos (8UL)
#define VMC_RAM_POWERCLR_S8POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S8POWER_Pos)
#define VMC_RAM_POWERCLR_S8POWER_Off (0x1UL)

/* Bit 7 : Keep RAM section S7 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S7POWER_Pos (7UL)
#define VMC_RAM_POWERCLR_S7POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S7POWER_Pos)
#define VMC_RAM_POWERCLR_S7POWER_Off (0x1UL)

/* Bit 6 : Keep RAM section S6 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S6POWER_Pos (6UL)
#define VMC_RAM_POWERCLR_S6POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S6POWER_Pos)
#define VMC_RAM_POWERCLR_S6POWER_Off (0x1UL)

/* Bit 5 : Keep RAM section S5 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S5POWER_Pos (5UL)
#define VMC_RAM_POWERCLR_S5POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S5POWER_Pos)
#define VMC_RAM_POWERCLR_S5POWER_Off (0x1UL)

/* Bit 4 : Keep RAM section S4 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S4POWER_Pos (4UL)
#define VMC_RAM_POWERCLR_S4POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S4POWER_Pos)
#define VMC_RAM_POWERCLR_S4POWER_Off (0x1UL)

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


/* Peripheral: WDT */
/* Description: Watchdog Timer 0 */

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
