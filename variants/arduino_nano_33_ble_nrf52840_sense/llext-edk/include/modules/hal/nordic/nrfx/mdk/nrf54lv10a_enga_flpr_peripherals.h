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

#ifndef NRF54LV10A_ENGA_FLPR_PERIPHERALS_H
#define NRF54LV10A_ENGA_FLPR_PERIPHERALS_H

#ifdef __cplusplus
    extern "C" {
#endif

#include <stdbool.h>
/*VPR CSR registers*/
#define VPRCSR_PRESENT 1
#define VPRCSR_COUNT 1

#define VPRCSR_HARTNUM 14
#define VPRCSR_MCLICBASERESET 0xF0000000
#define VPRCSR_MULDIV 2
#define VPRCSR_HIBERNATE 1
#define VPRCSR_DBG 1
#define VPRCSR_REMAP 0
#define VPRCSR_BUSWIDTH 64
#define VPRCSR_BKPT 1
#define VPRCSR_RETAINED 1
#define VPRCSR_VIOPINS 0x00003FFF
#define VPRCSR_VEVIF_NTASKS_MIN 0
#define VPRCSR_VEVIF_NTASKS_MAX 31
#define VPRCSR_VEVIF_NTASKS_SIZE 32
#define VPRCSR_VEVIF_TASKS_MASK 0xFFFFFFFF
#define VPRCSR_VEVIF_NDPPI_MIN 0
#define VPRCSR_VEVIF_NDPPI_MAX 3
#define VPRCSR_VEVIF_NDPPI_SIZE 4
#define VPRCSR_VEVIF_NEVENTS_MIN 0
#define VPRCSR_VEVIF_NEVENTS_MAX 31
#define VPRCSR_VEVIF_NEVENTS_SIZE 32
#define VPRCSR_BEXT 1
#define VPRCSR_CACHE_EN 1
#define VPRCSR_CACHEEXTRATAGBUF 0
#define VPRCSR_OUTMODE_VPR1_2 1
#define VPRCSR_VPR_BUS_PRIO 1
#define VPRCSR_NMIMPID_VPR1_3_3 0
#define VPRCSR_PERIPHERALBLOCKINGACCESS 0
#define VPRCSR_BRANCHPREDECODING 0
#define VPRCSR_RTP_VPR_1_5 1

/*VPR CLIC registers*/
#define CLIC_PRESENT 1
#define CLIC_COUNT 1

#define VPRCLIC_IRQ_COUNT 32
#define VPRCLIC_IRQNUM_MIN 0
#define VPRCLIC_IRQNUM_MAX 270
#define VPRCLIC_IRQNUM_SIZE 271
#define VPRCLIC_CLIC_NTASKS_MIN 0
#define VPRCLIC_CLIC_NTASKS_MAX 31
#define VPRCLIC_CLIC_NTASKS_SIZE 32
#define VPRCLIC_CLIC_TASKS_MASK 0xFFFFFFFF
#define VPRCLIC_COUNTER_IRQ_NUM 31
#define VPRCLIC_CLIC_VPR_1_2 1

/*Factory Information Configuration Registers*/
#define FICR_PRESENT 1
#define FICR_COUNT 1

/*User Information Configuration Registers*/
#define UICR_PRESENT 1
#define UICR_COUNT 1

/*Factory Information Configuration Registers*/
#define SICR_PRESENT 1
#define SICR_COUNT 1

/*CRACENCORE*/
#define CRACENCORE_PRESENT 1
#define CRACENCORE_COUNT 1

#define CRACENCORE_CRYPTMSTRDMAREGS 1
#define CRACENCORE_CRYPTMSTRHWREGS 1
#define CRACENCORE_RNGCONTROLREGS 1
#define CRACENCORE_PKREGS 1
#define CRACENCORE_IKGREGS 1
#define CRACENCORE_RNGDATAREGS 1
#define CRACENCORE_EXTPRIVKEYSREGS 0
#define CRACENCORE_LITESMALLRESETVALUES 0
#define CRACENCORE_LITEMEDIUMRESETVALUES 1
#define CRACENCORE_FULLRESETVALUES 0
#define CRACENCORE_CRACENRESETVALUES 1
#define CRACENCORE_SHA3RESETVALUES 0
#define CRACENCORE_PKE_DATA_MEMORY 0x50018000
#define CRACENCORE_PKE_DATA_MEMORY_SIZE 16384
#define CRACENCORE_PKE_CODE_MEMORY 0x5001C000
#define CRACENCORE_PKE_CODE_MEMORY_SIZE 8192

/*System protection unit*/
#define SPU_PRESENT 1
#define SPU_COUNT 4

#define SPU00_BELLS 0
#define SPU00_IPCT 0
#define SPU00_DPPI 1
#define SPU00_GPIOTE 0
#define SPU00_GRTC 0
#define SPU00_GPIO 0
#define SPU00_CRACEN 0
#define SPU00_MRAMC 0
#define SPU00_COEXC 0
#define SPU00_ANTSWC 0
#define SPU00_TDD 0
#define SPU00_SLAVE_BITS 4                           /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/

#define SPU10_BELLS 0
#define SPU10_IPCT 0
#define SPU10_DPPI 1
#define SPU10_GPIOTE 0
#define SPU10_GRTC 0
#define SPU10_GPIO 0
#define SPU10_CRACEN 0
#define SPU10_MRAMC 0
#define SPU10_COEXC 0
#define SPU10_ANTSWC 0
#define SPU10_TDD 0
#define SPU10_SLAVE_BITS 4                           /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/

#define SPU20_BELLS 0
#define SPU20_IPCT 0
#define SPU20_DPPI 1
#define SPU20_GPIOTE 1
#define SPU20_GRTC 1
#define SPU20_GPIO 1
#define SPU20_CRACEN 0
#define SPU20_MRAMC 0
#define SPU20_COEXC 0
#define SPU20_ANTSWC 0
#define SPU20_TDD 0
#define SPU20_SLAVE_BITS 4                           /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/

#define SPU30_BELLS 0
#define SPU30_IPCT 0
#define SPU30_DPPI 1
#define SPU30_GPIOTE 1
#define SPU30_GRTC 0
#define SPU30_GPIO 1
#define SPU30_CRACEN 0
#define SPU30_MRAMC 0
#define SPU30_COEXC 0
#define SPU30_ANTSWC 0
#define SPU30_TDD 0
#define SPU30_SLAVE_BITS 4                           /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/

/*Memory Privilege Controller*/
#define MPC_PRESENT 1
#define MPC_COUNT 1

#define MPC00_EXTEND_CLOCK_REQ 0
#define MPC00_RTCHOKE 0
#define MPC00_OVERRIDE_GRAN 4096

/*Distributed programmable peripheral interconnect controller*/
#define DPPIC_PRESENT 1
#define DPPIC_COUNT 4

#define DPPIC00_HASCHANNELGROUPS 1
#define DPPIC00_CH_NUM_MIN 0
#define DPPIC00_CH_NUM_MAX 15
#define DPPIC00_CH_NUM_SIZE 16
#define DPPIC00_GROUP_NUM_MIN 0
#define DPPIC00_GROUP_NUM_MAX 1
#define DPPIC00_GROUP_NUM_SIZE 2

#define DPPIC10_HASCHANNELGROUPS 1
#define DPPIC10_CH_NUM_MIN 0
#define DPPIC10_CH_NUM_MAX 23
#define DPPIC10_CH_NUM_SIZE 24
#define DPPIC10_GROUP_NUM_MIN 0
#define DPPIC10_GROUP_NUM_MAX 5
#define DPPIC10_GROUP_NUM_SIZE 6

#define DPPIC20_HASCHANNELGROUPS 1
#define DPPIC20_CH_NUM_MIN 0
#define DPPIC20_CH_NUM_MAX 15
#define DPPIC20_CH_NUM_SIZE 16
#define DPPIC20_GROUP_NUM_MIN 0
#define DPPIC20_GROUP_NUM_MAX 5
#define DPPIC20_GROUP_NUM_SIZE 6

#define DPPIC30_HASCHANNELGROUPS 1
#define DPPIC30_CH_NUM_MIN 0
#define DPPIC30_CH_NUM_MAX 3
#define DPPIC30_CH_NUM_SIZE 4
#define DPPIC30_GROUP_NUM_MIN 0
#define DPPIC30_GROUP_NUM_MAX 1
#define DPPIC30_GROUP_NUM_SIZE 2

/*PPIB APB registers*/
#define PPIB_PRESENT 1
#define PPIB_COUNT 8

#define PPIB00_NTASKSEVENTS_MIN 0
#define PPIB00_NTASKSEVENTS_MAX 11
#define PPIB00_NTASKSEVENTS_SIZE 12

#define PPIB01_NTASKSEVENTS_MIN 0
#define PPIB01_NTASKSEVENTS_MAX 7
#define PPIB01_NTASKSEVENTS_SIZE 8

#define PPIB10_NTASKSEVENTS_MIN 0
#define PPIB10_NTASKSEVENTS_MAX 11
#define PPIB10_NTASKSEVENTS_SIZE 12

#define PPIB11_NTASKSEVENTS_MIN 0
#define PPIB11_NTASKSEVENTS_MAX 15
#define PPIB11_NTASKSEVENTS_SIZE 16

#define PPIB20_NTASKSEVENTS_MIN 0
#define PPIB20_NTASKSEVENTS_MAX 7
#define PPIB20_NTASKSEVENTS_SIZE 8

#define PPIB21_NTASKSEVENTS_MIN 0
#define PPIB21_NTASKSEVENTS_MAX 15
#define PPIB21_NTASKSEVENTS_SIZE 16

#define PPIB22_NTASKSEVENTS_MIN 0
#define PPIB22_NTASKSEVENTS_MAX 3
#define PPIB22_NTASKSEVENTS_SIZE 4

#define PPIB30_NTASKSEVENTS_MIN 0
#define PPIB30_NTASKSEVENTS_MAX 3
#define PPIB30_NTASKSEVENTS_SIZE 4

/*Key management unit*/
#define KMU_PRESENT 1
#define KMU_COUNT 1

#define KMU_KEYSLOTNUM 250
#define KMU_KEYSLOTBITS 128
#define KMU_PUSHBLOCK 1
#define KMU_BLOCK 1

/*Accelerated Address Resolver*/
#define AAR_PRESENT 1
#define AAR_COUNT 1

#define AAR00_DMAERROR 1
#define AAR00_ERRORSTATUS 1
#define AAR00_ERROREVENT 1
#define AAR00_ERROREVENT_IRQ 1
#define AAR00_PREMATUREOUTPUTPTR 1

/*AES CCM Mode Encryption*/
#define CCM_PRESENT 1
#define CCM_COUNT 1

#define CCM00_AMOUNTREG 0
#define CCM00_ONTHEFLYDECRYPTION 0
#define CCM00_DMAERROR 1

/*AES ECB Mode Encryption*/
#define ECB_PRESENT 1
#define ECB_COUNT 1

#define ECB00_AMOUNTREG 0
#define ECB00_DMAERROR 1
#define ECB00_ERRORSTATUS 1

/*VPR peripheral registers*/
#define VPR_PRESENT 1
#define VPR_COUNT 1

#define VPR00_INIT_PC_RESET_VALUE 0x00000000
#define VPR00_VPR_START_RESET_VALUE 0
#define VPR00_RAM_BASE_ADDR 0x20000000
#define VPR00_RAM_SZ 20                              /*!< VPR RAM size (RAM_SZ): 20 (Value in bytes is computed as 2^(RAM
                                                          size))*/
#define VPR00_VPRSAVEDCTX_REGNAME NRF_MEMCONF->POWER[1].RET
#define VPR00_VPRSAVEDCTX_REGBIT 0
#define VPR00_RETAINED 0
#define VPR00_VPRSAVEDCTX 1
#define VPR00_VPRSAVEADDR 0x2002FD40
#define VPR00_VPRREMAPADDRVTOB 0x00000000
#define VPR00_VEVIF_NTASKS_MIN 16
#define VPR00_VEVIF_NTASKS_MAX 22
#define VPR00_VEVIF_NTASKS_SIZE 23
#define VPR00_VEVIF_TASKS_MASK 0x007F0000
#define VPR00_VEVIF_NDPPI_MIN 0
#define VPR00_VEVIF_NDPPI_MAX 3
#define VPR00_VEVIF_NDPPI_SIZE 4
#define VPR00_VEVIF_DPPI_MASK 0x000F0000
#define VPR00_VEVIF_NEVENTS_MIN 16
#define VPR00_VEVIF_NEVENTS_MAX 22
#define VPR00_VEVIF_NEVENTS_SIZE 23
#define VPR00_VEVIF_EVENTS_MASK 0x00100000
#define VPR00_DEBUGGER_OFFSET 1024
#define VPR00_RTP_VPR_1_5 1

/*Voltage glitch detectors*/
#define GLITCHDET_PRESENT 1
#define GLITCHDET_COUNT 1

/*RRAM controller GLITCH detector*/
#define RRAMC_PRESENT 1
#define RRAMC_COUNT 1

#define RRAMC_NRRAMWORDSIZE 128
#define RRAMC_NWRITEBUFSIZE 32
#define RRAMC_REGION0ADDR_WRITABLE 0
#define RRAMC_REGION0SIZE 4
#define RRAMC_REGION0SIZE_WRITABLE 0
#define RRAMC_REGION0READ 1
#define RRAMC_REGION0READ_WRITABLE 1
#define RRAMC_REGION0WRITE 1
#define RRAMC_REGION0WRITE_WRITABLE 1
#define RRAMC_REGION0EXECUTE 0
#define RRAMC_REGION0EXECUTE_WRITABLE 0
#define RRAMC_REGION0SECURE 0
#define RRAMC_REGION0SECURE_WRITABLE 0
#define RRAMC_REGION0OWNER 0
#define RRAMC_REGION0OWNER_WRITABLE 1
#define RRAMC_REGION0WRITEONCE 1
#define RRAMC_REGION0WRITEONCE_WRITABLE 0
#define RRAMC_REGION0LOCK 0
#define RRAMC_REGION0LOCK_WRITABLE 1
#define RRAMC_REGION1ADDR_WRITABLE 0
#define RRAMC_REGION1SIZE 4
#define RRAMC_REGION1SIZE_WRITABLE 0
#define RRAMC_REGION1READ 1
#define RRAMC_REGION1READ_WRITABLE 1
#define RRAMC_REGION1WRITE 1
#define RRAMC_REGION1WRITE_WRITABLE 1
#define RRAMC_REGION1EXECUTE 0
#define RRAMC_REGION1EXECUTE_WRITABLE 0
#define RRAMC_REGION1SECURE 1
#define RRAMC_REGION1SECURE_WRITABLE 1
#define RRAMC_REGION1OWNER 0
#define RRAMC_REGION1OWNER_WRITABLE 1
#define RRAMC_REGION1WRITEONCE 1
#define RRAMC_REGION1WRITEONCE_WRITABLE 0
#define RRAMC_REGION1LOCK 0
#define RRAMC_REGION1LOCK_WRITABLE 1
#define RRAMC_REGION2ADDR_WRITABLE 0
#define RRAMC_REGION2SIZE 8
#define RRAMC_REGION2SIZE_WRITABLE 0
#define RRAMC_REGION2READ 1
#define RRAMC_REGION2READ_WRITABLE 1
#define RRAMC_REGION2WRITE 1
#define RRAMC_REGION2WRITE_WRITABLE 1
#define RRAMC_REGION2EXECUTE 0
#define RRAMC_REGION2EXECUTE_WRITABLE 0
#define RRAMC_REGION2SECURE 1
#define RRAMC_REGION2SECURE_WRITABLE 0
#define RRAMC_REGION2OWNER 2
#define RRAMC_REGION2OWNER_WRITABLE 0
#define RRAMC_REGION2WRITEONCE 0
#define RRAMC_REGION2WRITEONCE_WRITABLE 1
#define RRAMC_REGION2LOCK 0
#define RRAMC_REGION2LOCK_WRITABLE 1
#define RRAMC_REGION3ADDR_WRITABLE 0
#define RRAMC_REGION3SIZE 0
#define RRAMC_REGION3SIZE_WRITABLE 1
#define RRAMC_REGION3READ 1
#define RRAMC_REGION3READ_WRITABLE 1
#define RRAMC_REGION3WRITE 1
#define RRAMC_REGION3WRITE_WRITABLE 1
#define RRAMC_REGION3EXECUTE 1
#define RRAMC_REGION3EXECUTE_WRITABLE 1
#define RRAMC_REGION3SECURE 1
#define RRAMC_REGION3SECURE_WRITABLE 1
#define RRAMC_REGION3OWNER 0
#define RRAMC_REGION3OWNER_WRITABLE 1
#define RRAMC_REGION3WRITEONCE 0
#define RRAMC_REGION3WRITEONCE_WRITABLE 1
#define RRAMC_REGION3LOCK 0
#define RRAMC_REGION3LOCK_WRITABLE 1
#define RRAMC_REGION4ADDR_WRITABLE 1
#define RRAMC_REGION4SIZE 0
#define RRAMC_REGION4SIZE_WRITABLE 1
#define RRAMC_REGION4READ 1
#define RRAMC_REGION4READ_WRITABLE 1
#define RRAMC_REGION4WRITE 1
#define RRAMC_REGION4WRITE_WRITABLE 1
#define RRAMC_REGION4EXECUTE 1
#define RRAMC_REGION4EXECUTE_WRITABLE 1
#define RRAMC_REGION4SECURE 1
#define RRAMC_REGION4SECURE_WRITABLE 1
#define RRAMC_REGION4OWNER 0
#define RRAMC_REGION4OWNER_WRITABLE 1
#define RRAMC_REGION4WRITEONCE 0
#define RRAMC_REGION4WRITEONCE_WRITABLE 1
#define RRAMC_REGION4LOCK 0
#define RRAMC_REGION4LOCK_WRITABLE 1
#define RRAMC_GLITCHDETECTORS 0

/*Control access port*/
#define CTRLAPPERI_PRESENT 1
#define CTRLAPPERI_COUNT 1

/*Trace and debug control*/
#define TAD_PRESENT 1
#define TAD_COUNT 1

#define TAD_TADFORCEON 0
#define TAD_TAD_HAS_TASKS 0
#define TAD_PDREQCLR 1

/*Timer/Counter*/
#define TIMER_PRESENT 1
#define TIMER_COUNT 7

#define TIMER00_CC_NUM_MIN 0
#define TIMER00_CC_NUM_MAX 5
#define TIMER00_CC_NUM_SIZE 6
#define TIMER00_MAX_SIZE_MIN 0
#define TIMER00_MAX_SIZE_MAX 31
#define TIMER00_MAX_SIZE_SIZE 32
#define TIMER00_PCLK_MHZ 128
#define TIMER00_PCLK_VARIABLE 1
#define TIMER00_SHUTDOWN_TASK 0

#define TIMER10_CC_NUM_MIN 0
#define TIMER10_CC_NUM_MAX 7
#define TIMER10_CC_NUM_SIZE 8
#define TIMER10_MAX_SIZE_MIN 0
#define TIMER10_MAX_SIZE_MAX 31
#define TIMER10_MAX_SIZE_SIZE 32
#define TIMER10_PCLK_MHZ 32
#define TIMER10_PCLK_VARIABLE 0
#define TIMER10_SHUTDOWN_TASK 0

#define TIMER20_CC_NUM_MIN 0
#define TIMER20_CC_NUM_MAX 5
#define TIMER20_CC_NUM_SIZE 6
#define TIMER20_MAX_SIZE_MIN 0
#define TIMER20_MAX_SIZE_MAX 31
#define TIMER20_MAX_SIZE_SIZE 32
#define TIMER20_PCLK_MHZ 16
#define TIMER20_PCLK_VARIABLE 0
#define TIMER20_SHUTDOWN_TASK 0

#define TIMER21_CC_NUM_MIN 0
#define TIMER21_CC_NUM_MAX 5
#define TIMER21_CC_NUM_SIZE 6
#define TIMER21_MAX_SIZE_MIN 0
#define TIMER21_MAX_SIZE_MAX 31
#define TIMER21_MAX_SIZE_SIZE 32
#define TIMER21_PCLK_MHZ 16
#define TIMER21_PCLK_VARIABLE 0
#define TIMER21_SHUTDOWN_TASK 0

#define TIMER22_CC_NUM_MIN 0
#define TIMER22_CC_NUM_MAX 5
#define TIMER22_CC_NUM_SIZE 6
#define TIMER22_MAX_SIZE_MIN 0
#define TIMER22_MAX_SIZE_MAX 31
#define TIMER22_MAX_SIZE_SIZE 32
#define TIMER22_PCLK_MHZ 16
#define TIMER22_PCLK_VARIABLE 0
#define TIMER22_SHUTDOWN_TASK 0

#define TIMER23_CC_NUM_MIN 0
#define TIMER23_CC_NUM_MAX 5
#define TIMER23_CC_NUM_SIZE 6
#define TIMER23_MAX_SIZE_MIN 0
#define TIMER23_MAX_SIZE_MAX 31
#define TIMER23_MAX_SIZE_SIZE 32
#define TIMER23_PCLK_MHZ 16
#define TIMER23_PCLK_VARIABLE 0
#define TIMER23_SHUTDOWN_TASK 0

#define TIMER24_CC_NUM_MIN 0
#define TIMER24_CC_NUM_MAX 5
#define TIMER24_CC_NUM_SIZE 6
#define TIMER24_MAX_SIZE_MIN 0
#define TIMER24_MAX_SIZE_MAX 31
#define TIMER24_MAX_SIZE_SIZE 32
#define TIMER24_PCLK_MHZ 16
#define TIMER24_PCLK_VARIABLE 0
#define TIMER24_SHUTDOWN_TASK 0

/*Event generator unit*/
#define EGU_PRESENT 1
#define EGU_COUNT 3

#define EGU00_PEND 0
#define EGU00_CH_NUM_MIN 0
#define EGU00_CH_NUM_MAX 5
#define EGU00_CH_NUM_SIZE 6

#define EGU10_PEND 0
#define EGU10_CH_NUM_MIN 0
#define EGU10_CH_NUM_MAX 15
#define EGU10_CH_NUM_SIZE 16

#define EGU20_PEND 0
#define EGU20_CH_NUM_MIN 0
#define EGU20_CH_NUM_MAX 5
#define EGU20_CH_NUM_SIZE 6

/*CRACEN*/
#define CRACEN_PRESENT 1
#define CRACEN_COUNT 1

#define CRACEN_CRYPTOACCELERATOR 1
#define CRACEN_SEEDRAMLOCK 0
#define CRACEN_SPLITKEYRAMLOCK 1
#define CRACEN_SEEDALIGNED 1
#define CRACEN_PROTECTED_RAM_SEED 0x51810000
#define CRACEN_PROTECTED_RAM_SEED_SIZE 64
#define CRACEN_PROTECTED_RAM_AES_KEY0 0x51810040
#define CRACEN_PROTECTED_RAM_AES_KEY0_SIZE 32
#define CRACEN_PROTECTED_RAM_AES_KEY1 0x51810060
#define CRACEN_PROTECTED_RAM_AES_KEY1_SIZE 32
#define CRACEN_PROTECTED_RAM_SM4_KEY0 0x51810080
#define CRACEN_PROTECTED_RAM_SM4_KEY0_SIZE 16
#define CRACEN_PROTECTED_RAM_SM4_KEY1 0x51810090
#define CRACEN_PROTECTED_RAM_SM4_KEY1_SIZE 16
#define CRACEN_PROTECTED_RAM_SM4_KEY2 0x518100A0
#define CRACEN_PROTECTED_RAM_SM4_KEY2_SIZE 16
#define CRACEN_PROTECTED_RAM_SM4_KEY3 0x518100B0
#define CRACEN_PROTECTED_RAM_SM4_KEY3_SIZE 16
#define CRACEN_PROTECTED_RAM_RESERVED 0x518100C0
#define CRACEN_PROTECTED_RAM_RESERVED_SIZE 64
#define CRACEN_PKEDATA 0x50018000                    /*!< PKE data (address 0x50018000) must be read and written using aligned
                                                          access, i.e. using an operation where a word-aligned address is used
                                                          for a word, or a halfword-aligned address is used for a halfword
                                                          access.*/
#define CRACEN_PKECODE 0x5001C000                    /*!< PKE code (address 0x5001C000) must be read and written using aligned
                                                          access, i.e. using an operation where a word-aligned address is used
                                                          for a word, or a halfword-aligned address is used for a halfword
                                                          access.*/

/*2.4 GHz radio*/
#define RADIO_PRESENT 1
#define RADIO_COUNT 1

#define RADIO_IRQ_COUNT 2
#define RADIO_WHITENINGPOLY 1
#define RADIO_ADPLLCOMPANION_INCLUDE_DMA 0

/*Serial Peripheral Interface Master with EasyDMA*/
#define SPIM_PRESENT 1
#define SPIM_COUNT 3

#define SPIM20_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0
#define SPIM20_MAX_DATARATE 8
#define SPIM20_EASYDMA_MAXCNT_MIN 0
#define SPIM20_EASYDMA_MAXCNT_MAX 15
#define SPIM20_EASYDMA_MAXCNT_SIZE 16
#define SPIM20_FEATURE_HARDWARE_CSN_PRESENT 1
#define SPIM20_FEATURE_HARDWARE_DCX_PRESENT 1
#define SPIM20_FEATURE_RXDELAY_PRESENT 1
#define SPIM20_STALL_STATUS_PRESENT 0
#define SPIM20_STALL_STATUS_TX_PRESENT 0
#define SPIM20_NUM_CHIPSELECT_MIN 0
#define SPIM20_NUM_CHIPSELECT_MAX 0
#define SPIM20_NUM_CHIPSELECT_SIZE 1
#define SPIM20_CORE_FREQUENCY 16
#define SPIM20_PRESCALER_PRESENT 1
#define SPIM20_PRESCALER_DIVISOR_RANGE_MIN 2
#define SPIM20_PRESCALER_DIVISOR_RANGE_MAX 126
#define SPIM20_PRESCALER_DIVISOR_RANGE_SIZE 127
#define SPIM20_RXDELAY_VALUE_RANGE_MIN 0
#define SPIM20_RXDELAY_VALUE_RANGE_MAX 7
#define SPIM20_RXDELAY_VALUE_RANGE_SIZE 8
#define SPIM20_RXDELAY_RESET_VALUE 1
#define SPIM20_RXDELAY_FIELD_WIDTH_MIN 0
#define SPIM20_RXDELAY_FIELD_WIDTH_MAX 2
#define SPIM20_RXDELAY_FIELD_WIDTH_SIZE 3

#define SPIM21_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0
#define SPIM21_MAX_DATARATE 8
#define SPIM21_EASYDMA_MAXCNT_MIN 0
#define SPIM21_EASYDMA_MAXCNT_MAX 15
#define SPIM21_EASYDMA_MAXCNT_SIZE 16
#define SPIM21_FEATURE_HARDWARE_CSN_PRESENT 1
#define SPIM21_FEATURE_HARDWARE_DCX_PRESENT 1
#define SPIM21_FEATURE_RXDELAY_PRESENT 1
#define SPIM21_STALL_STATUS_PRESENT 0
#define SPIM21_STALL_STATUS_TX_PRESENT 0
#define SPIM21_NUM_CHIPSELECT_MIN 0
#define SPIM21_NUM_CHIPSELECT_MAX 0
#define SPIM21_NUM_CHIPSELECT_SIZE 1
#define SPIM21_CORE_FREQUENCY 16
#define SPIM21_PRESCALER_PRESENT 1
#define SPIM21_PRESCALER_DIVISOR_RANGE_MIN 2
#define SPIM21_PRESCALER_DIVISOR_RANGE_MAX 126
#define SPIM21_PRESCALER_DIVISOR_RANGE_SIZE 127
#define SPIM21_RXDELAY_VALUE_RANGE_MIN 0
#define SPIM21_RXDELAY_VALUE_RANGE_MAX 7
#define SPIM21_RXDELAY_VALUE_RANGE_SIZE 8
#define SPIM21_RXDELAY_RESET_VALUE 1
#define SPIM21_RXDELAY_FIELD_WIDTH_MIN 0
#define SPIM21_RXDELAY_FIELD_WIDTH_MAX 2
#define SPIM21_RXDELAY_FIELD_WIDTH_SIZE 3

#define SPIM30_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0
#define SPIM30_MAX_DATARATE 8
#define SPIM30_EASYDMA_MAXCNT_MIN 0
#define SPIM30_EASYDMA_MAXCNT_MAX 15
#define SPIM30_EASYDMA_MAXCNT_SIZE 16
#define SPIM30_FEATURE_HARDWARE_CSN_PRESENT 1
#define SPIM30_FEATURE_HARDWARE_DCX_PRESENT 0
#define SPIM30_FEATURE_RXDELAY_PRESENT 1
#define SPIM30_STALL_STATUS_PRESENT 0
#define SPIM30_STALL_STATUS_TX_PRESENT 0
#define SPIM30_NUM_CHIPSELECT_MIN 0
#define SPIM30_NUM_CHIPSELECT_MAX 0
#define SPIM30_NUM_CHIPSELECT_SIZE 1
#define SPIM30_CORE_FREQUENCY 16
#define SPIM30_PRESCALER_PRESENT 1
#define SPIM30_PRESCALER_DIVISOR_RANGE_MIN 2
#define SPIM30_PRESCALER_DIVISOR_RANGE_MAX 126
#define SPIM30_PRESCALER_DIVISOR_RANGE_SIZE 127
#define SPIM30_RXDELAY_VALUE_RANGE_MIN 0
#define SPIM30_RXDELAY_VALUE_RANGE_MAX 7
#define SPIM30_RXDELAY_VALUE_RANGE_SIZE 8
#define SPIM30_RXDELAY_RESET_VALUE 1
#define SPIM30_RXDELAY_FIELD_WIDTH_MIN 0
#define SPIM30_RXDELAY_FIELD_WIDTH_MAX 2
#define SPIM30_RXDELAY_FIELD_WIDTH_SIZE 3

/*SPI Slave*/
#define SPIS_PRESENT 1
#define SPIS_COUNT 3

#define SPIS20_EASYDMA_MAXCNT_MIN 0
#define SPIS20_EASYDMA_MAXCNT_MAX 15
#define SPIS20_EASYDMA_MAXCNT_SIZE 16
#define SPIS20_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0

#define SPIS21_EASYDMA_MAXCNT_MIN 0
#define SPIS21_EASYDMA_MAXCNT_MAX 15
#define SPIS21_EASYDMA_MAXCNT_SIZE 16
#define SPIS21_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0

#define SPIS30_EASYDMA_MAXCNT_MIN 0
#define SPIS30_EASYDMA_MAXCNT_MAX 15
#define SPIS30_EASYDMA_MAXCNT_SIZE 16
#define SPIS30_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0

/*I2C compatible Two-Wire Master Interface with EasyDMA*/
#define TWIM_PRESENT 1
#define TWIM_COUNT 3

#define TWIM20_EASYDMA_MAXCNT_MIN 0
#define TWIM20_EASYDMA_MAXCNT_MAX 15
#define TWIM20_EASYDMA_MAXCNT_SIZE 16
#define TWIM20_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0

#define TWIM21_EASYDMA_MAXCNT_MIN 0
#define TWIM21_EASYDMA_MAXCNT_MAX 15
#define TWIM21_EASYDMA_MAXCNT_SIZE 16
#define TWIM21_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0

#define TWIM30_EASYDMA_MAXCNT_MIN 0
#define TWIM30_EASYDMA_MAXCNT_MAX 15
#define TWIM30_EASYDMA_MAXCNT_SIZE 16
#define TWIM30_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0

/*I2C compatible Two-Wire Slave Interface with EasyDMA*/
#define TWIS_PRESENT 1
#define TWIS_COUNT 3

#define TWIS20_EASYDMA_MAXCNT_MIN 0
#define TWIS20_EASYDMA_MAXCNT_MAX 15
#define TWIS20_EASYDMA_MAXCNT_SIZE 16
#define TWIS20_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0

#define TWIS21_EASYDMA_MAXCNT_MIN 0
#define TWIS21_EASYDMA_MAXCNT_MAX 15
#define TWIS21_EASYDMA_MAXCNT_SIZE 16
#define TWIS21_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0

#define TWIS30_EASYDMA_MAXCNT_MIN 0
#define TWIS30_EASYDMA_MAXCNT_MAX 15
#define TWIS30_EASYDMA_MAXCNT_SIZE 16
#define TWIS30_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0

/*UART with EasyDMA*/
#define UARTE_PRESENT 1
#define UARTE_COUNT 3

#define UARTE20_EASYDMA_MAXCNT_MIN 0
#define UARTE20_EASYDMA_MAXCNT_MAX 15
#define UARTE20_EASYDMA_MAXCNT_SIZE 16
#define UARTE20_TIMEOUT_INTERRUPT 1
#define UARTE20_CONFIGURABLE_DATA_FRAME_SIZE 1
#define UARTE20_CORE_FREQUENCY 16
#define UARTE20_CORE_CLOCK_16 1
#define UARTE20_SHORTS_ENDTX_STOPTX 1
#define UARTE20_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0

#define UARTE21_EASYDMA_MAXCNT_MIN 0
#define UARTE21_EASYDMA_MAXCNT_MAX 15
#define UARTE21_EASYDMA_MAXCNT_SIZE 16
#define UARTE21_TIMEOUT_INTERRUPT 1
#define UARTE21_CONFIGURABLE_DATA_FRAME_SIZE 1
#define UARTE21_CORE_FREQUENCY 16
#define UARTE21_CORE_CLOCK_16 1
#define UARTE21_SHORTS_ENDTX_STOPTX 1
#define UARTE21_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0

#define UARTE30_EASYDMA_MAXCNT_MIN 0
#define UARTE30_EASYDMA_MAXCNT_MAX 15
#define UARTE30_EASYDMA_MAXCNT_SIZE 16
#define UARTE30_TIMEOUT_INTERRUPT 1
#define UARTE30_CONFIGURABLE_DATA_FRAME_SIZE 1
#define UARTE30_CORE_FREQUENCY 16
#define UARTE30_CORE_CLOCK_16 1
#define UARTE30_SHORTS_ENDTX_STOPTX 1
#define UARTE30_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0

/*Memory configuration*/
#define MEMCONF_PRESENT 1
#define MEMCONF_COUNT 1

#define MEMCONF_RETTRIM 1
#define MEMCONF_REPAIR 0
#define MEMCONF_POWER 1

/*Analog to Digital Converter*/
#define SAADC_PRESENT 1
#define SAADC_COUNT 1

#define SAADC_PSEL_V2 1
#define SAADC_TASKS_CALIBRATEGAIN 1
#define SAADC_SAMPLERATE_CC_VALUERANGE_MIN 8
#define SAADC_SAMPLERATE_CC_VALUERANGE_MAX 2047
#define SAADC_SAMPLERATE_CC_VALUERANGE_SIZE 2048
#define SAADC_TACQ_VALUE_RANGE_MIN 1
#define SAADC_TACQ_VALUE_RANGE_MAX 319
#define SAADC_TACQ_VALUE_RANGE_SIZE 320
#define SAADC_TCONV_VALUE_RANGE_MIN 1
#define SAADC_TCONV_VALUE_RANGE_MAX 7
#define SAADC_TCONV_VALUE_RANGE_SIZE 8
#define SAADC_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0

/*Temperature Sensor*/
#define TEMP_PRESENT 1
#define TEMP_COUNT 1

/*GPIO Port*/
#define GPIO_PRESENT 1
#define GPIO_COUNT 2

#define P1_CTRLSEL_MAP1 0
#define P1_CTRLSEL_MAP2 1
#define P1_CTRLSEL_MAP3 0
#define P1_PIN_NUM_MIN 0
#define P1_PIN_NUM_MAX 25
#define P1_PIN_NUM_SIZE 26
#define P1_FEATURE_PINS_PRESENT 67108863
#define P1_PIN_SENSE_MECHANISM 1
#define P1_DRIVECTRL 0
#define P1_RETAIN 0
#define P1_PWRCTRL 0
#define P1_PIN_OWNER_SEC 0
#define P1_BIASCTRL 0

#define P0_CTRLSEL_MAP1 0
#define P0_CTRLSEL_MAP2 1
#define P0_CTRLSEL_MAP3 0
#define P0_PIN_NUM_MIN 0
#define P0_PIN_NUM_MAX 4
#define P0_PIN_NUM_SIZE 5
#define P0_FEATURE_PINS_PRESENT 31
#define P0_PIN_SENSE_MECHANISM 1
#define P0_DRIVECTRL 0
#define P0_RETAIN 0
#define P0_PWRCTRL 0
#define P0_PIN_OWNER_SEC 0
#define P0_BIASCTRL 0

/*GPIO Tasks and Events*/
#define GPIOTE_PRESENT 1
#define GPIOTE_COUNT 2

#define GPIOTE20_IRQ_COUNT 2
#define GPIOTE20_GPIOTE_NCHANNELS_MIN 0
#define GPIOTE20_GPIOTE_NCHANNELS_MAX 7
#define GPIOTE20_GPIOTE_NCHANNELS_SIZE 8
#define GPIOTE20_GPIOTE_NPORTEVENTS_MIN 0
#define GPIOTE20_GPIOTE_NPORTEVENTS_MAX 0
#define GPIOTE20_GPIOTE_NPORTEVENTS_SIZE 1
#define GPIOTE20_GPIOTE_NINTERRUPTS_MIN 0
#define GPIOTE20_GPIOTE_NINTERRUPTS_MAX 1
#define GPIOTE20_GPIOTE_NINTERRUPTS_SIZE 2
#define GPIOTE20_HAS_PORT_EVENT 1

#define GPIOTE30_IRQ_COUNT 2
#define GPIOTE30_GPIOTE_NCHANNELS_MIN 0
#define GPIOTE30_GPIOTE_NCHANNELS_MAX 3
#define GPIOTE30_GPIOTE_NCHANNELS_SIZE 4
#define GPIOTE30_GPIOTE_NPORTEVENTS_MIN 0
#define GPIOTE30_GPIOTE_NPORTEVENTS_MAX 0
#define GPIOTE30_GPIOTE_NPORTEVENTS_SIZE 1
#define GPIOTE30_GPIOTE_NINTERRUPTS_MIN 0
#define GPIOTE30_GPIOTE_NINTERRUPTS_MAX 1
#define GPIOTE30_GPIOTE_NINTERRUPTS_SIZE 2
#define GPIOTE30_HAS_PORT_EVENT 1

/*Global Real-time counter*/
#define GRTC_PRESENT 1
#define GRTC_COUNT 1

#define GRTC_IRQ_COUNT 4
#define GRTC_MSBWIDTH_MIN 0                          /*!< Width of the RTCOUNTERH, RTCOMPAREH and RTCOMPARESYNCH registers :
                                                          0..14*/
#define GRTC_MSBWIDTH_MAX 14                         /*!< Width of the RTCOUNTERH, RTCOMPAREH and RTCOMPARESYNCH registers :
                                                          0..14*/
#define GRTC_MSBWIDTH_SIZE 15                        /*!< Width of the RTCOUNTERH, RTCOMPAREH and RTCOMPARESYNCH registers :
                                                          0..14*/
#define GRTC_NCC_MIN 0
#define GRTC_NCC_MAX 11
#define GRTC_NCC_SIZE 12
#define GRTC_NTIMEOUT_MIN 0
#define GRTC_NTIMEOUT_MAX 15
#define GRTC_NTIMEOUT_SIZE 16
#define GRTC_GRTC_NINTERRUPTS_MIN 0
#define GRTC_GRTC_NINTERRUPTS_MAX 3
#define GRTC_GRTC_NINTERRUPTS_SIZE 4
#define GRTC_PWMREGS 1
#define GRTC_CLKOUTREG 1
#define GRTC_CLKSELREG 1
#define GRTC_CLKSELLFLPRC 1
#define GRTC_CCADD_WRITE_ONLY 0
#define GRTC_READY_STATUS_AND_EVENTS 0
#define GRTC_SYSCOUNTER_LOADED_STATUS 1
#define GRTC_CC_PAST_STATUS 1
#define GRTC_SYSCOUNTER_WRITEABLE 1

/*Tamper controller*/
#define TAMPC_PRESENT 1
#define TAMPC_COUNT 1

#define TAMPC_APSPIDEN 0
#define TAMPC_PROTECT_INTRESETEN_CTRL_VALUE_RESET 1
#define TAMPC_TAMPERSWITCH 0
#define TAMPC_SM4DISABLECM 0

/*Comparator*/
#define COMP_PRESENT 1
#define COMP_COUNT 1

/*Low-power comparator*/
#define LPCOMP_PRESENT 1
#define LPCOMP_COUNT 1

/*Watchdog Timer*/
#define WDT_PRESENT 1
#define WDT_COUNT 2

#define WDT30_ALLOW_STOP 1
#define WDT30_HAS_INTEN 0

#define WDT31_ALLOW_STOP 1
#define WDT31_HAS_INTEN 0

/*Clock management*/
#define CLOCK_PRESENT 1
#define CLOCK_COUNT 1

#define CLOCK_XOTUNE 1
#define CLOCK_PLL24M 0

/*Power control*/
#define POWER_PRESENT 1
#define POWER_COUNT 1

#define POWER_CONSTLATSTAT 1

/*Reset control*/
#define RESET_PRESENT 1
#define RESET_COUNT 1

/*Oscillator control*/
#define OSCILLATORS_PRESENT 1
#define OSCILLATORS_COUNT 1

/*Voltage regulators*/
#define REGULATORS_PRESENT 1
#define REGULATORS_COUNT 1

/* ==================================================== Baudrate settings ==================================================== */
/**
  * @brief UARTE.BAUDRATE register values for combinations of baudrate and core frequency
  */
typedef enum {
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud1200Core16M = 319488, /*!< 1200 baud (actual rate: 1192, -0.7 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud2400Core16M = 643072, /*!< 2400 baud (actual rate: 2399, -0.0 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud4800Core16M = 1286144, /*!< 4800 baud (actual rate: 4799, -0.0 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud9600Core16M = 2576384, /*!< 9600 baud (actual rate: 9613, 0.1 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud14400Core16M = 3862528, /*!< 14400 baud (actual rate: 14412, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud19200Core16M = 5152768, /*!< 19200 baud (actual rate: 19226, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud28800Core16M = 7720960, /*!< 28800 baud (actual rate: 28809, 0.0 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud31250Core16M = 8388608, /*!< 31250 baud (actual rate: 31300, 0.2 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud38400Core16M = 10297344, /*!< 38400 baud (actual rate: 38422, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud56000Core16M = 15015936, /*!< 56000 baud (actual rate: 56029, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud57600Core16M = 15446016, /*!< 57600 baud (actual rate: 57634, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud76800Core16M = 20647936, /*!< 76800 baud (actual rate: 77044, 0.3 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud115200Core16M = 30896128, /*!< 115200 baud (actual rate: 115284, 0.1 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud230400Core16M = 62242816, /*!< 230400 baud (actual rate: 232249, 0.8 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud250000Core16M = 67108864, /*!< 250000 baud (actual rate: 250406, 0.2 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud460800Core16M = 122712064, /*!< 460800 baud (actual rate: 457880, -0.6 percent error), 16
                                                                    MHz core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud921600Core16M = 252641280, /*!< 921600 baud (actual rate: 942691, 2.3 percent error), 16 MHz
                                                                    core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud1000000Core16M = 268435456, /*!< 1000000 baud (actual rate: 1001624, 0.2 percent error), 16
                                                                     MHz core frequency*/
} NRF_UARTE20_BAUDRATE_BAUDRATE_ENUM_t;

/* ==================================================== Baudrate settings ==================================================== */
/**
  * @brief UARTE.BAUDRATE register values for combinations of baudrate and core frequency
  */
typedef enum {
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud1200Core16M = 319488, /*!< 1200 baud (actual rate: 1192, -0.7 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud2400Core16M = 643072, /*!< 2400 baud (actual rate: 2399, -0.0 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud4800Core16M = 1286144, /*!< 4800 baud (actual rate: 4799, -0.0 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud9600Core16M = 2576384, /*!< 9600 baud (actual rate: 9613, 0.1 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud14400Core16M = 3862528, /*!< 14400 baud (actual rate: 14412, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud19200Core16M = 5152768, /*!< 19200 baud (actual rate: 19226, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud28800Core16M = 7720960, /*!< 28800 baud (actual rate: 28809, 0.0 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud31250Core16M = 8388608, /*!< 31250 baud (actual rate: 31300, 0.2 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud38400Core16M = 10297344, /*!< 38400 baud (actual rate: 38422, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud56000Core16M = 15015936, /*!< 56000 baud (actual rate: 56029, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud57600Core16M = 15446016, /*!< 57600 baud (actual rate: 57634, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud76800Core16M = 20647936, /*!< 76800 baud (actual rate: 77044, 0.3 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud115200Core16M = 30896128, /*!< 115200 baud (actual rate: 115284, 0.1 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud230400Core16M = 62242816, /*!< 230400 baud (actual rate: 232249, 0.8 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud250000Core16M = 67108864, /*!< 250000 baud (actual rate: 250406, 0.2 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud460800Core16M = 122712064, /*!< 460800 baud (actual rate: 457880, -0.6 percent error), 16
                                                                    MHz core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud921600Core16M = 252641280, /*!< 921600 baud (actual rate: 942691, 2.3 percent error), 16 MHz
                                                                    core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud1000000Core16M = 268435456, /*!< 1000000 baud (actual rate: 1001624, 0.2 percent error), 16
                                                                     MHz core frequency*/
} NRF_UARTE21_BAUDRATE_BAUDRATE_ENUM_t;

/* ==================================================== Baudrate settings ==================================================== */
/**
  * @brief UARTE.BAUDRATE register values for combinations of baudrate and core frequency
  */
typedef enum {
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud1200Core16M = 319488, /*!< 1200 baud (actual rate: 1192, -0.7 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud2400Core16M = 643072, /*!< 2400 baud (actual rate: 2399, -0.0 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud4800Core16M = 1286144, /*!< 4800 baud (actual rate: 4799, -0.0 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud9600Core16M = 2576384, /*!< 9600 baud (actual rate: 9613, 0.1 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud14400Core16M = 3862528, /*!< 14400 baud (actual rate: 14412, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud19200Core16M = 5152768, /*!< 19200 baud (actual rate: 19226, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud28800Core16M = 7720960, /*!< 28800 baud (actual rate: 28809, 0.0 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud31250Core16M = 8388608, /*!< 31250 baud (actual rate: 31300, 0.2 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud38400Core16M = 10297344, /*!< 38400 baud (actual rate: 38422, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud56000Core16M = 15015936, /*!< 56000 baud (actual rate: 56029, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud57600Core16M = 15446016, /*!< 57600 baud (actual rate: 57634, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud76800Core16M = 20647936, /*!< 76800 baud (actual rate: 77044, 0.3 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud115200Core16M = 30896128, /*!< 115200 baud (actual rate: 115284, 0.1 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud230400Core16M = 62242816, /*!< 230400 baud (actual rate: 232249, 0.8 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud250000Core16M = 67108864, /*!< 250000 baud (actual rate: 250406, 0.2 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud460800Core16M = 122712064, /*!< 460800 baud (actual rate: 457880, -0.6 percent error), 16
                                                                    MHz core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud921600Core16M = 252641280, /*!< 921600 baud (actual rate: 942691, 2.3 percent error), 16 MHz
                                                                    core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud1000000Core16M = 268435456, /*!< 1000000 baud (actual rate: 1001624, 0.2 percent error), 16
                                                                     MHz core frequency*/
} NRF_UARTE30_BAUDRATE_BAUDRATE_ENUM_t;


#ifdef __cplusplus
}
#endif
#endif /* NRF54LV10A_ENGA_FLPR_PERIPHERALS_H */

