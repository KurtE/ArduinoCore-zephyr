/*
 * Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
 *
 * @file     ./out/R7FA6M1AD.h
 * @brief    CMSIS HeaderFile
 * @version  1.2
 */

/** @addtogroup Renesas
 * @{
 */

/** @addtogroup R7FA6M1AD
 * @{
 */

#ifndef R7FA6M1AD_H
 #define R7FA6M1AD_H

 #ifdef __cplusplus
extern "C" {
 #endif

/** @addtogroup Configuration_of_CMSIS
 * @{
 */

/* =========================================================================================================================== */
/* ================                                Interrupt Number Definition                                ================ */
/* =========================================================================================================================== */

/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* ===========================  Configuration of the ARM Cortex-M4 Processor and Core Peripherals  =========================== */
 #define __CM4_REV                 0x0001U
 #define __NVIC_PRIO_BITS          4
 #define __Vendor_SysTickConfig    0
 #define __VTOR_PRESENT            1
 #define __MPU_PRESENT             1
 #define __FPU_PRESENT             1

/** @} */ /* End of group Configuration_of_CMSIS */

 #include "core_cm4.h"
 #include "system.h"

 #ifndef __IM                              /*!< Fallback for older CMSIS versions                                         */
  #define __IM     __I
 #endif
 #ifndef __OM                              /*!< Fallback for older CMSIS versions                                         */
  #define __OM     __O
 #endif
 #ifndef __IOM                             /*!< Fallback for older CMSIS versions                                         */
  #define __IOM    __IO
 #endif

/* ========================================  Start of section using anonymous unions  ======================================== */
 #if defined(__CC_ARM)
  #pragma push
  #pragma anon_unions
 #elif defined(__ICCARM__)
  #pragma language=extended
 #elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wc11-extensions"
  #pragma clang diagnostic ignored "-Wreserved-id-macro"
  #pragma clang diagnostic ignored "-Wgnu-anonymous-struct"
  #pragma clang diagnostic ignored "-Wnested-anon-types"
 #elif defined(__GNUC__)

/* anonymous unions are enabled by default */
 #elif defined(__TMS470__)

/* anonymous unions are enabled by default */
 #elif defined(__TASKING__)
  #pragma warning 586
 #elif defined(__CSMC__)

/* anonymous unions are enabled by default */
 #else
  #warning Not supported compiler type
 #endif

/* =========================================================================================================================== */
/* ================                              Device Specific Cluster Section                              ================ */
/* =========================================================================================================================== */

/** @addtogroup Device_Peripheral_clusters
 * @{
 */

/**
 * @brief R_BUS_CSa [CSa] (CS Registers)
 */
typedef struct
{
    __IM uint16_t RESERVED;

    union
    {
        __IOM uint16_t MOD;

        struct
        {
            __IOM uint16_t WRMOD : 1;
            uint16_t             : 2;
            __IOM uint16_t EWENB : 1;
            uint16_t             : 4;
            __IOM uint16_t PRENB : 1;
            __IOM uint16_t PWENB : 1;
            uint16_t             : 5;
            __IOM uint16_t PRMOD : 1;
        } MOD_b;
    };

    union
    {
        __IOM uint32_t WCR1;

        struct
        {
            __IOM uint32_t CSPWWAIT : 3;
            uint32_t                : 5;
            __IOM uint32_t CSPRWAIT : 3;
            uint32_t                : 5;
            __IOM uint32_t CSWWAIT  : 5;
            uint32_t                : 3;
            __IOM uint32_t CSRWAIT  : 5;
            uint32_t                : 3;
        } WCR1_b;
    };

    union
    {
        __IOM uint32_t WCR2;

        struct
        {
            __IOM uint32_t CSROFF : 3;
            uint32_t              : 1;
            __IOM uint32_t CSWOFF : 3;
            uint32_t              : 1;
            __IOM uint32_t WDOFF  : 3;
            uint32_t              : 1;
            __IOM uint32_t AWAIT  : 2;
            uint32_t              : 2;
            __IOM uint32_t RDON   : 3;
            uint32_t              : 1;
            __IOM uint32_t WRON   : 3;
            uint32_t              : 1;
            __IOM uint32_t WDON   : 3;
            uint32_t              : 1;
            __IOM uint32_t CSON   : 3;
            uint32_t              : 1;
        } WCR2_b;
    };
    __IM uint32_t RESERVED1;
} R_BUS_CSa_Type;

/**
 * @brief R_BUS_CSb [CSb] (CS Registers)
 */
typedef struct
{
    __IM uint16_t RESERVED;

    union
    {
        __IOM uint16_t CR;

        struct
        {
            __IOM uint16_t EXENB : 1;
            uint16_t             : 3;
            __IOM uint16_t BSIZE : 2;
            uint16_t             : 2;
            __IOM uint16_t EMODE : 1;
            uint16_t             : 3;
            __IOM uint16_t MPXEN : 1;
            uint16_t             : 3;
        } CR_b;
    };
    __IM uint16_t RESERVED1[3];

    union
    {
        __IOM uint16_t REC;

        struct
        {
            __IOM uint16_t RRCV : 4;
            uint16_t            : 4;
            __IOM uint16_t WRCV : 4;
            uint16_t            : 4;
        } REC_b;
    };
    __IM uint16_t RESERVED2[2];
} R_BUS_CSb_Type;

/**
 * @brief R_BUS_SDRAM [SDRAM] (SDRAM Registers)
 */
typedef struct
{
    union
    {
        __IOM uint8_t SDCCR;

        struct
        {
            __IOM uint8_t EXENB : 1;
            uint8_t             : 3;
            __IOM uint8_t BSIZE : 2;
            uint8_t             : 2;
        } SDCCR_b;
    };

    union
    {
        __IOM uint8_t SDCMOD;

        struct
        {
            __IOM uint8_t EMODE : 1;
            uint8_t             : 7;
        } SDCMOD_b;
    };

    union
    {
        __IOM uint8_t SDAMOD;

        struct
        {
            __IOM uint8_t BE : 1;
            uint8_t          : 7;
        } SDAMOD_b;
    };
    __IM uint8_t  RESERVED;
    __IM uint32_t RESERVED1[3];

    union
    {
        __IOM uint8_t SDSELF;

        struct
        {
            __IOM uint8_t SFEN : 1;
            uint8_t            : 7;
        } SDSELF_b;
    };
    __IM uint8_t  RESERVED2;
    __IM uint16_t RESERVED3;

    union
    {
        __IOM uint16_t SDRFCR;

        struct
        {
            __IOM uint16_t RFC  : 12;
            __IOM uint16_t REFW : 4;   /*!< [15..12] Auto-Refresh Cycle/ Self-Refresh Clearing Cycle Count
                                        *   Setting. ( REFW+1 Cycles )                                                */
        } SDRFCR_b;
    };

    union
    {
        __IOM uint8_t SDRFEN;

        struct
        {
            __IOM uint8_t RFEN : 1;
            uint8_t            : 7;
        } SDRFEN_b;
    };
    __IM uint8_t  RESERVED4;
    __IM uint32_t RESERVED5[2];

    union
    {
        __IOM uint8_t SDICR;

        struct
        {
            __IOM uint8_t INIRQ : 1;
            uint8_t             : 7;
        } SDICR_b;
    };
    __IM uint8_t  RESERVED6;
    __IM uint16_t RESERVED7;

    union
    {
        __IOM uint16_t SDIR;

        struct
        {
            __IOM uint16_t ARFI : 4;
            __IOM uint16_t ARFC : 4;
            __IOM uint16_t PRC  : 3;   /*!< [10..8] Initialization Precharge Cycle Count ( PRF+3 cycles
                                        *   )                                                                         */
            uint16_t : 5;
        } SDIR_b;
    };
    __IM uint16_t RESERVED8;
    __IM uint32_t RESERVED9[6];

    union
    {
        __IOM uint8_t SDADR;

        struct
        {
            __IOM uint8_t MXC : 2;
            uint8_t           : 6;
        } SDADR_b;
    };
    __IM uint8_t  RESERVED10;
    __IM uint16_t RESERVED11;

    union
    {
        __IOM uint32_t SDTR;

        struct
        {
            __IOM uint32_t CL  : 3;
            uint32_t           : 5;
            __IOM uint32_t WR  : 1;
            __IOM uint32_t RP  : 3;
            __IOM uint32_t RCD : 2;
            uint32_t           : 2;
            __IOM uint32_t RAS : 3;
            uint32_t           : 13;
        } SDTR_b;
    };

    union
    {
        __IOM uint16_t SDMOD;

        struct
        {
            __IOM uint16_t MR : 15;
            uint16_t          : 1;
        } SDMOD_b;
    };
    __IM uint16_t RESERVED12;
    __IM uint32_t RESERVED13;

    union
    {
        __IM uint8_t SDSR;

        struct
        {
            __IM uint8_t MRSST : 1;
            uint8_t            : 2;
            __IM uint8_t INIST : 1;
            __IM uint8_t SRFST : 1;
            uint8_t            : 3;
        } SDSR_b;
    };
    __IM uint8_t  RESERVED14;
    __IM uint16_t RESERVED15;
} R_BUS_SDRAM_Type;

/**
 * @brief R_BUS_BUSERRa [BUSERRa] (Bus Error Registers)
 */
typedef struct
{
    union
    {
        __IM uint32_t ADD;

        struct
        {
            __IM uint32_t BERAD : 32;
        } ADD_b;
    };

    union
    {
        union
        {
            __IM uint8_t STAT;

            struct
            {
                __IM uint8_t ACCSTAT : 1;
                uint8_t              : 6;
                __IM uint8_t ERRSTAT : 1;
            } STAT_b;
        };

        union
        {
            __IM uint8_t RW;

            struct
            {
                __IM uint8_t RWSTAT : 1;
                uint8_t             : 7;
            } RW_b;
        };
    };
    __IM uint8_t  RESERVED;
    __IM uint16_t RESERVED1;
    __IM uint32_t RESERVED2[2];
} R_BUS_BUSERRa_Type;

/**
 * @brief R_BUS_BTZFERR [BTZFERR] (Bus TZF Error Registers)
 */
typedef struct
{
    union
    {
        __IM uint32_t ADD;

        struct
        {
            __IM uint32_t BTZFERAD : 32;
        } ADD_b;
    };

    union
    {
        __IM uint8_t RW;

        struct
        {
            __IM uint8_t TRWSTAT : 1;
            uint8_t              : 7;
        } RW_b;
    };
    __IM uint8_t  RESERVED;
    __IM uint16_t RESERVED1;
    __IM uint32_t RESERVED2[2];
} R_BUS_BTZFERR_Type;

/**
 * @brief R_BUS_BUSERRb [BUSERRb] (Bus Error Registers)
 */
typedef struct
{
    union
    {
        __IM uint8_t STAT;

        struct
        {
            __IM uint8_t SLERRSTAT : 1;
            __IM uint8_t STERRSTAT : 1;
            uint8_t                : 1;
            __IM uint8_t MMERRSTAT : 1;
            __IM uint8_t ILERRSTAT : 1;
            __IM uint8_t MSERRSTAT : 1;
            uint8_t                : 2;
        } STAT_b;
    };
    __IM uint8_t RESERVED[7];

    union
    {
        __IOM uint8_t CLR;

        struct
        {
            __IOM uint8_t SLERRCLR : 1;
            __IOM uint8_t STERRCLR : 1;
            uint8_t                : 1;
            __IOM uint8_t MMERRCLR : 1;
            __IOM uint8_t ILERRCLR : 1;
            __IOM uint8_t MSERRCLR : 1;
            uint8_t                : 2;
        } CLR_b;
    };
    __IM uint8_t RESERVED1[7];
} R_BUS_BUSERRb_Type;

/**
 * @brief R_BUS_DMACDTCERR [DMACDTCERR] (DMAC/DTC Error Registers)
 */
typedef struct
{
    __IM uint8_t RESERVED[36];

    union
    {
        __IM uint8_t STAT;

        struct
        {
            __IM uint8_t MTERRSTAT : 1;
            uint8_t                : 7;
        } STAT_b;
    };
    __IM uint8_t RESERVED1[7];

    union
    {
        __IOM uint8_t CLR;

        struct
        {
            __IOM uint8_t MTERRCLR : 1;
            uint8_t                : 7;
        } CLR_b;
    };
} R_BUS_DMACDTCERR_Type;

/**
 * @brief R_BUS_BUSSABT0 [BUSSABT0] (Bus Slave Arbitration Control 0 Registers)
 */
typedef struct
{
    __IM uint32_t RESERVED[2];

    union
    {
        __IOM uint32_t MRE0BI;

        struct
        {
            __IOM uint32_t ARBS : 1;
            uint32_t            : 31;
        } MRE0BI_b;
    };
    __IM uint32_t RESERVED1;

    union
    {
        __IOM uint32_t FLBI;

        struct
        {
            __IOM uint32_t ARBS : 1;
            uint32_t            : 31;
        } FLBI_b;
    };
    __IM uint32_t RESERVED2[3];

    union
    {
        __IOM uint32_t S0BI;

        struct
        {
            __IOM uint32_t ARBS : 1;
            uint32_t            : 31;
        } S0BI_b;
    };
    __IM uint32_t RESERVED3;

    union
    {
        __IOM uint32_t S1BI;

        struct
        {
            __IOM uint32_t ARBS : 1;
            uint32_t            : 31;
        } S1BI_b;
    };
    __IM uint32_t RESERVED4;

    union
    {
        __IOM uint32_t S2BI;

        struct
        {
            __IOM uint32_t ARBS : 1;
            uint32_t            : 31;
        } S2BI_b;
    };
    __IM uint32_t RESERVED5;

    union
    {
        __IOM uint32_t S3BI;

        struct
        {
            __IOM uint32_t ARBS : 1;
            uint32_t            : 31;
        } S3BI_b;
    };
    __IM uint32_t RESERVED6[3];

    union
    {
        __IOM uint32_t STBYSBI;

        struct
        {
            __IOM uint32_t ARBS : 1;
            uint32_t            : 31;
        } STBYSBI_b;
    };
    __IM uint32_t RESERVED7;

    union
    {
        union
        {
            __IOM uint32_t ECBI;

            struct
            {
                __IOM uint32_t ARBS : 1;
                uint32_t            : 31;
            } ECBI_b;
        };

        union
        {
            __IOM uint32_t SPI0BI;

            struct
            {
                __IOM uint32_t ARBS : 1;
                uint32_t            : 31;
            } SPI0BI_b;
        };
    };
    __IM uint32_t RESERVED8;

    union
    {
        union
        {
            __IOM uint32_t EOBI;

            struct
            {
                __IOM uint32_t ARBS : 1;
                uint32_t            : 31;
            } EOBI_b;
        };

        union
        {
            __IOM uint32_t SPI1BI;

            struct
            {
                __IOM uint32_t ARBS : 1;
                uint32_t            : 31;
            } SPI1BI_b;
        };
    };
    __IM uint32_t RESERVED9;

    union
    {
        __IOM uint32_t PBBI;

        struct
        {
            __IOM uint32_t ARBS : 1;
            uint32_t            : 31;
        } PBBI_b;
    };
    __IM uint32_t RESERVED10;

    union
    {
        union
        {
            __IOM uint32_t PABI;

            struct
            {
                __IOM uint32_t ARBS : 1;
                uint32_t            : 31;
            } PABI_b;
        };

        union
        {
            __IOM uint32_t CPU0SAHBI;

            struct
            {
                __IOM uint32_t ARBS : 1;
                uint32_t            : 31;
            } CPU0SAHBI_b;
        };
    };
    __IM uint32_t RESERVED11;

    union
    {
        union
        {
            __IOM uint32_t PIBI;

            struct
            {
                __IOM uint32_t ARBS : 1;
                uint32_t            : 31;
            } PIBI_b;
        };

        union
        {
            __IOM uint32_t CPU1TCMBI;

            struct
            {
                __IOM uint32_t ARBS : 1;
                uint32_t            : 31;
            } CPU1TCMBI_b;
        };
    };
    __IM uint32_t RESERVED12;

    union
    {
        __IOM uint32_t PSBI;

        struct
        {
            __IOM uint32_t ARBS : 1;
            uint32_t            : 31;
        } PSBI_b;
    };
} R_BUS_BUSSABT0_Type;

/**
 * @brief R_BUS_BUSSABT1 [BUSSABT1] (Bus Slave Arbitration Control 1 Registers)
 */
typedef struct
{
    union
    {
        union
        {
            __IOM uint32_t FHBI;

            struct
            {
                __IOM uint32_t ARBS : 2;
                uint32_t            : 30;
            } FHBI_b;
        };

        union
        {
            __IOM uint32_t MRC0BI;

            struct
            {
                __IOM uint32_t ARBS : 2;
                uint32_t            : 30;
            } MRC0BI_b;
        };
    };
    __IM uint32_t RESERVED[5];

    union
    {
        __IOM uint32_t S0BI;

        struct
        {
            __IOM uint32_t ARBS : 2;
            uint32_t            : 30;
        } S0BI_b;
    };
    __IM uint32_t RESERVED1;

    union
    {
        __IOM uint32_t S1BI;

        struct
        {
            __IOM uint32_t ARBS : 2;
            uint32_t            : 30;
        } S1BI_b;
    };
} R_BUS_BUSSABT1_Type;

/**
 * @brief R_BUS_BMSAERR [BMSAERR] (Bus Master Security Attribution Unit Error Address and Read/Write Status registers.)
 */
typedef struct
{
    union
    {
        __IM uint32_t ADD;

        struct
        {
            __IM uint32_t MSERAD : 32;
        } ADD_b;
    };

    union
    {
        __IM uint8_t RW;                /*!< (@ 0x00000004) BUS Master Security Attribution Unit Error Read
                                         *                  Write.                                                     */

        struct
        {
            __IM uint8_t MSARWSTAT : 1; /*!< [0..0] Master Security Attribution Unit error access Read/Write
                                         *   Status.                                                                   */
            uint8_t : 7;
        } RW_b;
    };
    __IM uint8_t  RESERVED;
    __IM uint16_t RESERVED1;
    __IM uint32_t RESERVED2[2];
} R_BUS_BMSAERR_Type;

/**
 * @brief R_BUS_OAD [OAD] (Bus Operation After Detection Registers)
 */
typedef struct
{
    union
    {
        __IOM uint16_t BUSOAD;

        struct
        {
            __IOM uint16_t ILERROAD : 1;
            __IOM uint16_t SLERROAD : 1;
            __IOM uint16_t BWERROAD : 1;
            uint16_t                : 13;
        } BUSOAD_b;
    };
    __IM uint16_t RESERVED;

    union
    {
        __IOM uint16_t BUSOADPT;

        struct
        {
            __IOM uint16_t PROTECT : 1;
            uint16_t               : 7;
            __OM uint16_t KEY      : 8;
        } BUSOADPT_b;
    };
    __IM uint16_t RESERVED1[5];

    union
    {
        __IOM uint16_t MSAOAD;         /*!< (@ 0x00000010) Master Security Attribution Operation After Detection
                                        *                  Register.                                                  */

        struct
        {
            __IOM uint16_t OAD : 1;
            uint16_t           : 7;
            __OM uint16_t KEY  : 8;
        } MSAOAD_b;
    };
    __IM uint16_t RESERVED2;

    union
    {
        __IOM uint16_t MSAPT;

        struct
        {
            __IOM uint16_t PROTECT : 1;
            uint16_t               : 7;
            __OM uint16_t KEY      : 8;
        } MSAPT_b;
    };
} R_BUS_OAD_Type;

/**
 * @brief R_BUS_MBWERR [MBWERR] (Master Bufferable Write Error Registers)
 */
typedef struct
{
    union
    {
        __IM uint32_t STAT;

        struct
        {
            __IM uint32_t BWERR0  : 1;
            __IM uint32_t BWERR1  : 1;
            __IM uint32_t BWERR2  : 1;
            __IM uint32_t BWERR3  : 1;
            __IM uint32_t BWERR4  : 1;
            __IM uint32_t BWERR5  : 1;
            __IM uint32_t BWERR6  : 1;
            __IM uint32_t BWERR7  : 1;
            __IM uint32_t BWERR8  : 1;
            __IM uint32_t BWERR9  : 1;
            __IM uint32_t BWERR10 : 1;
            __IM uint32_t BWERR11 : 1;
            __IM uint32_t BWERR12 : 1;
            __IM uint32_t BWERR13 : 1;
            __IM uint32_t BWERR14 : 1;
            __IM uint32_t BWERR15 : 1;
            __IM uint32_t BWERR16 : 1;
            __IM uint32_t BWERR17 : 1;
            __IM uint32_t BWERR18 : 1;
            __IM uint32_t BWERR19 : 1;
            __IM uint32_t BWERR20 : 1;
            __IM uint32_t BWERR21 : 1;
            __IM uint32_t BWERR22 : 1;
            __IM uint32_t BWERR23 : 1;
            __IM uint32_t BWERR24 : 1;
            __IM uint32_t BWERR25 : 1;
            __IM uint32_t BWERR26 : 1;
            __IM uint32_t BWERR27 : 1;
            __IM uint32_t BWERR28 : 1;
            __IM uint32_t BWERR29 : 1;
            __IM uint32_t BWERR30 : 1;
            __IM uint32_t BWERR31 : 1;
        } STAT_b;
    };
    __IM uint32_t RESERVED;

    union
    {
        __IOM uint32_t CLR;

        struct
        {
            __IOM uint32_t BWERR0  : 1;
            __IOM uint32_t BWERR1  : 1;
            __IOM uint32_t BWERR2  : 1;
            __IOM uint32_t BWERR3  : 1;
            __IOM uint32_t BWERR4  : 1;
            __IOM uint32_t BWERR5  : 1;
            __IOM uint32_t BWERR6  : 1;
            __IOM uint32_t BWERR7  : 1;
            __IOM uint32_t BWERR8  : 1;
            __IOM uint32_t BWERR9  : 1;
            __IOM uint32_t BWERR10 : 1;
            __IOM uint32_t BWERR11 : 1;
            __IOM uint32_t BWERR12 : 1;
            __IOM uint32_t BWERR13 : 1;
            __IOM uint32_t BWERR14 : 1;
            __IOM uint32_t BWERR15 : 1;
            __IOM uint32_t BWERR16 : 1;
            __IOM uint32_t BWERR17 : 1;
            __IOM uint32_t BWERR18 : 1;
            __IOM uint32_t BWERR19 : 1;
            __IOM uint32_t BWERR20 : 1;
            __IOM uint32_t BWERR21 : 1;
            __IOM uint32_t BWERR22 : 1;
            __IOM uint32_t BWERR23 : 1;
            __IOM uint32_t BWERR24 : 1;
            __IOM uint32_t BWERR25 : 1;
            __IOM uint32_t BWERR26 : 1;
            __IOM uint32_t BWERR27 : 1;
            __IOM uint32_t BWERR28 : 1;
            __IOM uint32_t BWERR29 : 1;
            __IOM uint32_t BWERR30 : 1;
            __IOM uint32_t BWERR31 : 1;
        } CLR_b;
    };
} R_BUS_MBWERR_Type;

/**
 * @brief R_BUS_BUSM [BUSM] (Master Bus Control Registers)
 */
typedef struct
{
    union
    {
        __IOM uint16_t CNT;

        struct
        {
            uint16_t             : 15;
            __IOM uint16_t IERES : 1;
        } CNT_b;
    };
    __IM uint16_t RESERVED;
} R_BUS_BUSM_Type;

/**
 * @brief R_BUS_BUSS [BUSS] (Slave Bus Control Register Array)
 */
typedef struct
{
    union
    {
        __IOM uint16_t CNT;

        struct
        {
            __IOM uint16_t ARBS   : 2;
            uint16_t              : 2;
            __IOM uint16_t ARBMET : 2;
            uint16_t              : 10;
        } CNT_b;
    };
    __IM uint16_t RESERVED;
} R_BUS_BUSS_Type;

/**
 * @brief R_CAN0_MB [MB] (Mailbox)
 */
typedef struct
{
    union
    {
        __IOM uint32_t ID;

        struct
        {
            __IOM uint32_t EID : 18;
            __IOM uint32_t SID : 11;
            uint32_t           : 1;
            __IOM uint32_t RTR : 1;
            __IOM uint32_t IDE : 1;
        } ID_b;
    };

    union
    {
        __IOM uint16_t DL;

        struct
        {
            __IOM uint16_t DLC : 4;
            uint16_t           : 12;
        } DL_b;
    };

    union
    {
        __IOM uint8_t D[8];

        struct
        {
            __IOM uint8_t DATA : 8;    /*!< [7..0] DATA0 to DATA7 store the transmitted or received CAN
                                        *   message data. Transmission or reception starts from DATA0.
                                        *   The bit order on the CAN bus is MSB-first, and transmission
                                        *   or reception starts from bit 7                                            */
        } D_b[8];
    };

    union
    {
        __IOM uint16_t TS;

        struct
        {
            __IOM uint16_t TSL : 8;    /*!< [7..0] Time Stamp Higher ByteBits TSL[7:0] store the counter
                                        *   value of the time stamp when received messages are stored
                                        *   in the mailbox.                                                           */
            __IOM uint16_t TSH : 8;    /*!< [15..8] Time Stamp Lower ByteBits TSH[7:0] store the counter
                                        *   value of the time stamp when received messages are stored
                                        *   in the mailbox.                                                           */
        } TS_b;
    };
} R_CAN0_MB_Type;

/**
 * @brief R_ELC_ELSEGR [ELSEGR] (Event Link Software Event Generation Register)
 */
typedef struct
{
    union
    {
        __IOM uint8_t BY;

        struct
        {
            __OM uint8_t SEG : 1;
            uint8_t          : 5;
            __IOM uint8_t WE : 1;
            __OM uint8_t  WI : 1;
        } BY_b;
    };
    __IM uint8_t RESERVED;
} R_ELC_ELSEGR_Type;

/**
 * @brief R_ELC_ELSR [ELSR] (Event Link Setting Register [0..22])
 */
typedef struct
{
    union
    {
        __IOM uint16_t HA;

        struct
        {
            __IOM uint16_t ELS : 9;
            uint16_t           : 7;
        } HA_b;
    };
    __IM uint16_t RESERVED;
} R_ELC_ELSR_Type;

/**
 * @brief R_GPT_ODC_GTDLYR [GTDLYR] (PWM DELAY RISING)
 */
typedef struct
{
    union
    {
        __IOM uint16_t A;

        struct
        {
            __IOM uint16_t DLY : 5;
            uint16_t           : 11;
        } A_b;
    };

    union
    {
        __IOM uint16_t B;

        struct
        {
            __IOM uint16_t DLY : 5;
            uint16_t           : 11;
        } B_b;
    };
} R_GPT_ODC_GTDLYR_Type;

/**
 * @brief R_IIC0_SAR [SAR] (Slave Address Registers)
 */
typedef struct
{
    union
    {
        __IOM uint8_t L;

        struct
        {
            __IOM uint8_t SVA : 8;     /*!< [7..0] A slave address is set.7-Bit Address = SVA[7:1] 10-Bit
                                        *   Address = { SVA9,SVA8,SVA[7:0] }                                          */
        } L_b;
    };

    union
    {
        __IOM uint8_t U;

        struct
        {
            __IOM uint8_t FS   : 1;
            __IOM uint8_t SVA8 : 1;
            __IOM uint8_t SVA9 : 1;
            uint8_t            : 5;
        } U_b;
    };
} R_IIC0_SAR_Type;

/**
 * @brief R_MPU_MMPU_MMPU_REGION [REGION] (Address Region registers)
 */
typedef struct
{
    union
    {
        __IOM uint16_t AC;

        struct
        {
            __IOM uint16_t ENABLE : 1;
            __IOM uint16_t RP     : 1;
            __IOM uint16_t WP     : 1;
            uint16_t              : 13;
        } AC_b;
    };
    __IM uint16_t RESERVED;

    union
    {
        __IOM uint32_t S;

        struct
        {
            __IOM uint32_t MMPUS : 32; /*!< [31..0] Address where the region starts, for use in region determination.
                                        *   NOTE: Some low-order bits are fixed to 0.                                 */
        } S_b;
    };

    union
    {
        __IOM uint32_t E;

        struct
        {
            __IOM uint32_t MMPUE : 32; /*!< [31..0] Region end address registerAddress where the region
                                        *   end, for use in region determination. NOTE: Some low-order
                                        *   bits are fixed to 1.                                                      */
        } E_b;
    };
    __IM uint32_t RESERVED1;
} R_MPU_MMPU_MMPU_REGION_Type;

/**
 * @brief R_MPU_MMPU_MMPU [MMPU] (Bus Master MPU Registers)
 */
typedef struct
{
    union
    {
        __IOM uint16_t CTL;

        struct
        {
            __IOM uint16_t ENABLE : 1;
            __IOM uint16_t OAD    : 1;
            uint16_t              : 6;
            __OM uint16_t KEY     : 8; /*!< [15..8] Write Keyword The data written to these bits are not
                                        *   stored.                                                                   */
        } CTL_b;
    };
    __IM uint16_t RESERVED;
    __IM uint32_t RESERVED1[63];
    __IM uint16_t RESERVED2;

    union
    {
        __IOM uint16_t PT;

        struct
        {
            __IOM uint16_t PROTECT : 1;
            uint16_t               : 7;
            __OM uint16_t KEY      : 8;           /*!< [15..8] Write Keyword The data written to these bits are not
                                                   *   stored.                                                                   */
        } PT_b;
    };
    __IM uint32_t RESERVED3[63];
    __IOM R_MPU_MMPU_MMPU_REGION_Type REGION[32];
} R_MPU_MMPU_MMPU_Type;

/**
 * @brief R_MPU_SMPU_SMPU [SMPU] (Access Control Structure for MBIU)
 */
typedef struct
{
    union
    {
        __IOM uint16_t R;

        struct
        {
            uint16_t              : 2;
            __IOM uint16_t RPGRPA : 1;
            __IOM uint16_t WPGRPA : 1;
            __IOM uint16_t RPGRPB : 1;
            __IOM uint16_t WPGRPB : 1;
            __IOM uint16_t RPGRPC : 1;
            __IOM uint16_t WPGRPC : 1;
            uint16_t              : 4;
            __IOM uint16_t RPFLI  : 1;
            __IOM uint16_t WPFLI  : 1;   /*!< [13..13] Code Flash Memory Write Protection (Note: This bit
                                          *   is read as 1. The write value should be 1.)                               */
            __IOM uint16_t RPSRAMHS : 1;
            __IOM uint16_t WPSRAMHS : 1;
        } R_b;
    };
    __IM uint16_t RESERVED;
} R_MPU_SMPU_SMPU_Type;

/**
 * @brief R_MPU_SPMON_SP [SP] (Stack Pointer Monitor)
 */
typedef struct
{
    union
    {
        __IOM uint16_t OAD;            /*!< (@ 0x00000000) Stack Pointer Monitor Operation After Detection
                                        *                  Register                                                   */

        struct
        {
            __IOM uint16_t OAD : 1;
            uint16_t           : 7;
            __OM uint16_t KEY  : 8;    /*!< [15..8] Write Keyword The data written to these bits are not
                                        *   stored.                                                                   */
        } OAD_b;
    };
    __IM uint16_t RESERVED;

    union
    {
        __IOM uint16_t CTL;

        struct
        {
            __IOM uint16_t ENABLE : 1;
            uint16_t              : 7;
            __IOM uint16_t ERROR  : 1;
            uint16_t              : 7;
        } CTL_b;
    };

    union
    {
        __IOM uint16_t PT;

        struct
        {
            __IOM uint16_t PROTECT : 1;
            uint16_t               : 7;
            __OM uint16_t KEY      : 8; /*!< [15..8] Write Keyword The data written to these bits are not
                                         *   stored.                                                                   */
        } PT_b;
    };

    union
    {
        __IOM uint32_t SA;

        struct
        {
            __IOM uint32_t MSPMPUSA : 32; /*!< [31..0] Region start address register Address where the region
                                           *   starts, for use in region determination.NOTE: Range: 0x1FF00000-0x200FFFF
                                           *   The low-order 2 bits are fixed to 0.                                      */
        } SA_b;
    };

    union
    {
        __IOM uint32_t EA;

        struct
        {
            __IOM uint32_t MSPMPUEA : 32; /*!< [31..0] Region end address register Address where the region
                                           *   starts, for use in region determination.NOTE: Range: 0x1FF00003-0x200FFFF
                                           *   The low-order 2 bits are fixed to 1.                                      */
        } EA_b;
    };
} R_MPU_SPMON_SP_Type;

/**
 * @brief R_PFS_PORT_PIN [PIN] (Pin Function Selects)
 */
typedef struct
{
    union
    {
        union
        {
            __IOM uint32_t PmnPFS;

            struct
            {
                __IOM uint32_t PODR  : 1;
                __IM uint32_t  PIDR  : 1;
                __IOM uint32_t PDR   : 1;
                uint32_t             : 1;
                __IOM uint32_t PCR   : 1;
                __IOM uint32_t PIM   : 1;
                __IOM uint32_t NCODR : 1;
                uint32_t             : 3;
                __IOM uint32_t DSCR  : 2;
                __IOM uint32_t EOFR  : 2;
                __IOM uint32_t ISEL  : 1;
                __IOM uint32_t ASEL  : 1;
                __IOM uint32_t PMR   : 1;
                uint32_t             : 7;
                __IOM uint32_t PSEL  : 5; /*!< [28..24] Port Function SelectThese bits select the peripheral
                                           *   function. For individual pin functions, see the MPC table                 */
                uint32_t : 3;
            } PmnPFS_b;
        };

        struct
        {
            union
            {
                struct
                {
                    __IM uint16_t RESERVED;

                    union
                    {
                        __IOM uint16_t PmnPFS_HA;

                        struct
                        {
                            __IOM uint16_t PODR  : 1;
                            __IM uint16_t  PIDR  : 1;
                            __IOM uint16_t PDR   : 1;
                            uint16_t             : 1;
                            __IOM uint16_t PCR   : 1;
                            __IOM uint16_t PIM   : 1;
                            __IOM uint16_t NCODR : 1;
                            uint16_t             : 3;
                            __IOM uint16_t DSCR  : 2;
                            __IOM uint16_t EOFR  : 2;
                            __IOM uint16_t ISEL  : 1;
                            __IOM uint16_t ASEL  : 1;
                        } PmnPFS_HA_b;
                    };
                };

                struct
                {
                    __IM uint16_t RESERVED1;
                    __IM uint8_t  RESERVED2;

                    union
                    {
                        __IOM uint8_t PmnPFS_BY;

                        struct
                        {
                            __IOM uint8_t PODR  : 1;
                            __IM uint8_t  PIDR  : 1;
                            __IOM uint8_t PDR   : 1;
                            uint8_t             : 1;
                            __IOM uint8_t PCR   : 1;
                            __IOM uint8_t PIM   : 1;
                            __IOM uint8_t NCODR : 1;
                            uint8_t             : 1;
                        } PmnPFS_BY_b;
                    };
                };
            };
        };
    };
} R_PFS_PORT_PIN_Type;

/**
 * @brief R_PFS_PORT [PORT] (Port [0..14])
 */
typedef struct
{
    __IOM R_PFS_PORT_PIN_Type PIN[16];
} R_PFS_PORT_Type;

/**
 * @brief R_PFS_VLSEL [VLSEL] (VLSEL)
 */
typedef struct
{
    __IM uint8_t RESERVED[389];

    union
    {
        __IOM uint8_t VL1SEL;

        struct
        {
            __IOM uint8_t SELVL : 1;
            uint8_t             : 7;
        } VL1SEL_b;
    };
} R_PFS_VLSEL_Type;

/**
 * @brief R_PMISC_PMSAR [PMSAR] (Port Security Attribution Register)
 */
typedef struct
{
    __IOM uint16_t PMSAR;
} R_PMISC_PMSAR_Type;

/**
 * @brief R_RTC_RTCCR [RTCCR] (Time Capture Control Register)
 */
typedef struct
{
    union
    {
        __IOM uint8_t RTCCR;

        struct
        {
            __IOM uint8_t TCCT : 2;
            __IM uint8_t  TCST : 1;
            uint8_t            : 1;
            __IOM uint8_t TCNF : 2;
            uint8_t            : 1;
            __IOM uint8_t TCEN : 1;
        } RTCCR_b;
    };
    __IM uint8_t RESERVED;
} R_RTC_RTCCR_Type;

/**
 * @brief R_RTC_CP [CP] (Capture registers)
 */
typedef struct
{
    __IM uint8_t RESERVED[2];

    union
    {
        union
        {
            __IM uint8_t RSEC;

            struct
            {
                __IM uint8_t SEC1 : 4;  /*!< [3..0] 1-Second Capture Capture value for the ones place of
                                         *   seconds                                                                   */
                __IM uint8_t SEC10 : 3; /*!< [6..4] 10-Second Capture Capture value for the tens place of
                                         *   seconds                                                                   */
                uint8_t : 1;
            } RSEC_b;
        };

        union
        {
            __IM uint8_t BCNT0;

            struct
            {
                __IM uint8_t BCNT0CP : 8; /*!< [7..0] BCNT0CP is a read-only register that captures the BCNT0
                                           *   value when a time capture event is detected.                              */
            } BCNT0_b;
        };
    };
    __IM uint8_t RESERVED1;

    union
    {
        union
        {
            __IM uint8_t RMIN;

            struct
            {
                __IM uint8_t MIN1 : 4;  /*!< [3..0] 1-Minute Capture Capture value for the ones place of
                                         *   minutes                                                                   */
                __IM uint8_t MIN10 : 3; /*!< [6..4] 10-Minute Capture Capture value for the tens place of
                                         *   minutes                                                                   */
                uint8_t : 1;
            } RMIN_b;
        };

        union
        {
            __IM uint8_t BCNT1;

            struct
            {
                __IM uint8_t BCNT1CP : 8; /*!< [7..0] BCNT1CP is a read-only register that captures the BCNT1
                                           *   value when a time capture event is detected.                              */
            } BCNT1_b;
        };
    };
    __IM uint8_t RESERVED2;

    union
    {
        union
        {
            __IM uint8_t RHR;

            struct
            {
                __IM uint8_t HR1 : 4;  /*!< [3..0] 1-Minute Capture Capture value for the ones place of
                                        *   minutes                                                                   */
                __IM uint8_t HR10 : 2; /*!< [5..4] 10-Minute Capture Capture value for the tens place of
                                        *   minutes                                                                   */
                __IM uint8_t PM : 1;
                uint8_t         : 1;
            } RHR_b;
        };

        union
        {
            __IM uint8_t BCNT2;

            struct
            {
                __IM uint8_t BCNT2CP : 8; /*!< [7..0] BCNT2CP is a read-only register that captures the BCNT2
                                           *   value when a time capture event is detected.                              */
            } BCNT2_b;
        };
    };
    __IM uint8_t RESERVED3[3];

    union
    {
        union
        {
            __IM uint8_t RDAY;

            struct
            {
                __IM uint8_t DATE1  : 4;
                __IM uint8_t DATE10 : 2;
                uint8_t             : 2;
            } RDAY_b;
        };

        union
        {
            __IM uint8_t BCNT3;

            struct
            {
                __IM uint8_t BCNT3CP : 8; /*!< [7..0] BCNT3CP is a read-only register that captures the BCNT3
                                           *   value when a time capture event is detected.                              */
            } BCNT3_b;
        };
    };
    __IM uint8_t RESERVED4;

    union
    {
        __IM uint8_t RMON;

        struct
        {
            __IM uint8_t MON1  : 4;
            __IM uint8_t MON10 : 1;    /*!< [4..4] 10-Month Capture Capture value for the tens place of
                                        *   months                                                                    */
            uint8_t : 3;
        } RMON_b;
    };
    __IM uint8_t RESERVED5[3];
} R_RTC_CP_Type;

/**
 * @brief R_USB_FS0_PIPE_TR [PIPE_TR] (Pipe Transaction Counter Registers)
 */
typedef struct
{
    union
    {
        __IOM uint16_t E;

        struct
        {
            uint16_t             : 8;
            __IOM uint16_t TRCLR : 1;
            __IOM uint16_t TRENB : 1;
            uint16_t             : 6;
        } E_b;
    };

    union
    {
        __IOM uint16_t N;

        struct
        {
            __IOM uint16_t TRNCNT : 16;
        } N_b;
    };
} R_USB_FS0_PIPE_TR_Type;

/**
 * @brief R_USB_HS0_PIPE_TR [PIPE_TR] (Pipe Transaction Counter Registers)
 */
typedef struct
{
    union
    {
        __IOM uint16_t E;

        struct
        {
            uint16_t             : 8;
            __IOM uint16_t TRCLR : 1;  /*!< [8..8] Transaction Counter ClearSetting this bit to 1 allows
                                        *   clearing the transaction counter to 0.                                    */
            __IOM uint16_t TRENB : 1;  /*!< [9..9] Transaction Counter EnableEnables or disables the transaction
                                        *   counter function.                                                         */
            uint16_t : 6;
        } E_b;
    };

    union
    {
        __IOM uint16_t N;

        struct
        {
            __IOM uint16_t TRNCNT : 16; /*!< [15..0] Transaction CounterWhen writing to: Specify the number
                                         *   of total packets (number of transactions) to be received
                                         *   by the relevant PIPE.When read from: When TRENB = 0: Indicate
                                         *   the specified number of transactions.When TRENB = 1: Indicate
                                         *   the number of currently counted transactions.                             */
        } N_b;
    };
} R_USB_HS0_PIPE_TR_Type;

/**
 * @brief R_AGTX0_AGT16_CTRL [CTRL] (CTRL)
 */
typedef struct
{
    union
    {
        __IOM uint8_t AGTCR;

        struct
        {
            __IOM uint8_t TSTART : 1;
            __IM uint8_t  TCSTF  : 1;
            __OM uint8_t  TSTOP  : 1;
            uint8_t              : 1;
            __IOM uint8_t TEDGF  : 1;
            __IOM uint8_t TUNDF  : 1;
            __IOM uint8_t TCMAF  : 1;
            __IOM uint8_t TCMBF  : 1;
        } AGTCR_b;
    };

    union
    {
        __IOM uint8_t AGTMR1;

        struct
        {
            __IOM uint8_t TMOD   : 3;
            __IOM uint8_t TEDGPL : 1;
            __IOM uint8_t TCK    : 3;
            uint8_t              : 1;
        } AGTMR1_b;
    };

    union
    {
        __IOM uint8_t AGTMR2;

        struct
        {
            __IOM uint8_t CKS : 3;     /*!< [2..0] AGTLCLK/AGTSCLK count source clock frequency division
                                        *   ratio                                                                     */
            uint8_t           : 4;
            __IOM uint8_t LPM : 1;
        } AGTMR2_b;
    };

    union
    {
        __IOM uint8_t AGTIOSEL_ALT;

        struct
        {
            __IOM uint8_t SEL  : 2;
            uint8_t            : 2;
            __IOM uint8_t TIES : 1;
            uint8_t            : 3;
        } AGTIOSEL_ALT_b;
    };

    union
    {
        __IOM uint8_t AGTIOC;

        struct
        {
            __IOM uint8_t TEDGSEL : 1; /*!< [0..0] I/O polarity switchFunction varies depending on the operating
                                        *   mode.                                                                     */
            uint8_t             : 1;
            __IOM uint8_t TOE   : 1;
            uint8_t             : 1;
            __IOM uint8_t TIPF  : 2;
            __IOM uint8_t TIOGT : 2;
        } AGTIOC_b;
    };

    union
    {
        __IOM uint8_t AGTISR;

        struct
        {
            uint8_t            : 2;
            __IOM uint8_t EEPS : 1;
            uint8_t            : 5;
        } AGTISR_b;
    };

    union
    {
        __IOM uint8_t AGTCMSR;

        struct
        {
            __IOM uint8_t TCMEA  : 1;
            __IOM uint8_t TOEA   : 1;
            __IOM uint8_t TOPOLA : 1;
            uint8_t              : 1;
            __IOM uint8_t TCMEB  : 1;
            __IOM uint8_t TOEB   : 1;
            __IOM uint8_t TOPOLB : 1;
            uint8_t              : 1;
        } AGTCMSR_b;
    };

    union
    {
        __IOM uint8_t AGTIOSEL;

        struct
        {
            __IOM uint8_t SEL  : 2;
            uint8_t            : 2;
            __IOM uint8_t TIES : 1;
            uint8_t            : 3;
        } AGTIOSEL_b;
    };
} R_AGTX0_AGT16_CTRL_Type;

/**
 * @brief R_AGTX0_AGT16 [AGT16] (AGT (16-bit) peripheral registers)
 */
typedef struct
{
    union
    {
        __IOM uint16_t AGT;

        struct
        {
            __IOM uint16_t AGT : 16;   /*!< [15..0] 16bit counter and reload register. NOTE : When 1 is
                                        *   written to the TSTOP bit in the AGTCRn register, the 16-bit
                                        *   counter is forcibly stopped and set to FFFFH.                             */
        } AGT_b;
    };

    union
    {
        __IOM uint16_t AGTCMA;

        struct
        {
            __IOM uint16_t AGTCMA : 16; /*!< [15..0] AGT Compare Match A data is stored.NOTE : When 1 is
                                         *   written to the TSTOP bit in the AGTCRn register, set to
                                         *   FFFFH                                                                     */
        } AGTCMA_b;
    };

    union
    {
        __IOM uint16_t AGTCMB;

        struct
        {
            __IOM uint16_t AGTCMB : 16; /*!< [15..0] AGT Compare Match B data is stored.NOTE : When 1 is
                                         *   written to the TSTOP bit in the AGTCR register, set to
                                         *   FFFFH                                                                     */
        } AGTCMB_b;
    };
    __IM uint16_t                 RESERVED;
    __IOM R_AGTX0_AGT16_CTRL_Type CTRL;
} R_AGTX0_AGT16_Type;

/**
 * @brief R_AGTX0_AGT32 [AGT32] (AGTW (32-bit) peripheral registers)
 */
typedef struct
{
    union
    {
        __IOM uint32_t AGT;

        struct
        {
            __IOM uint32_t AGT : 32;   /*!< [31..0] 32bit counter and reload register. NOTE : When 1 is
                                        *   written to the TSTOP bit in the AGTCRn register, the 16-bit
                                        *   counter is forcibly stopped and set to FFFFH.                             */
        } AGT_b;
    };

    union
    {
        __IOM uint32_t AGTCMA;

        struct
        {
            __IOM uint32_t AGTCMA : 32; /*!< [31..0] AGT Compare Match A data is stored.NOTE : When 1 is
                                         *   written to the TSTOP bit in the AGTCRn register, set to
                                         *   FFFFH                                                                     */
        } AGTCMA_b;
    };

    union
    {
        __IOM uint32_t AGTCMB;

        struct
        {
            __IOM uint32_t AGTCMB : 32; /*!< [31..0] AGT Compare Match B data is stored.NOTE : When 1 is
                                         *   written to the TSTOP bit in the AGTCR register, set to
                                         *   FFFFH                                                                     */
        } AGTCMB_b;
    };
    __IOM R_AGTX0_AGT16_CTRL_Type CTRL;
} R_AGTX0_AGT32_Type;

/** @} */ /* End of group Device_Peripheral_clusters */

/* =========================================================================================================================== */
/* ================                            Device Specific Peripheral Section                             ================ */
/* =========================================================================================================================== */

/** @addtogroup Device_Peripheral_peripherals
 * @{
 */

/* =========================================================================================================================== */
/* ================                                         R_ACMPHS0                                         ================ */
/* =========================================================================================================================== */

/**
 * @brief High-Speed Analog Comparator (R_ACMPHS0)
 */

typedef struct
{
    union
    {
        __IOM uint8_t CMPCTL;

        struct
        {
            __IOM uint8_t CINV   : 1;
            __IOM uint8_t COE    : 1;
            __IOM uint8_t CSTEN  : 1;
            __IOM uint8_t CEG    : 2;
            __IOM uint8_t CDFS   : 2;
            __IOM uint8_t HCMPON : 1;
        } CMPCTL_b;
    };
    __IM uint8_t RESERVED[3];

    union
    {
        __IOM uint8_t CMPSEL0;

        struct
        {
            __IOM uint8_t CMPSEL : 4;
            uint8_t              : 4;
        } CMPSEL0_b;
    };
    __IM uint8_t RESERVED1[3];

    union
    {
        __IOM uint8_t CMPSEL1;

        struct
        {
            __IOM uint8_t CRVS : 6;
            uint8_t            : 2;
        } CMPSEL1_b;
    };
    __IM uint8_t RESERVED2[3];

    union
    {
        __IM uint8_t CMPMON;

        struct
        {
            __IM uint8_t CMPMON : 1;
            uint8_t             : 7;
        } CMPMON_b;
    };
    __IM uint8_t RESERVED3[3];

    union
    {
        __IOM uint8_t CPIOC;

        struct
        {
            __IOM uint8_t CPOE   : 1;
            uint8_t              : 6;
            __IOM uint8_t VREFEN : 1;
        } CPIOC_b;
    };
} R_ACMPHS0_Type;

/* =========================================================================================================================== */
/* ================                                          R_ADC0                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief A/D Converter (R_ADC0)
 */

typedef struct
{
    union
    {
        __IOM uint16_t ADCSR;

        struct
        {
            __IOM uint16_t DBLANS : 5; /*!< [4..0] Double Trigger Channel SelectThese bits select one analog
                                        *   input channel for double triggered operation. The setting
                                        *   is only effective while double trigger mode is selected.                  */
            uint16_t              : 1;
            __IOM uint16_t GBADIE : 1;
            __IOM uint16_t DBLE   : 1;
            __IOM uint16_t EXTRG  : 1;
            __IOM uint16_t TRGE   : 1;
            __IOM uint16_t ADHSC  : 1;
            uint16_t              : 1;
            __IOM uint16_t ADIE   : 1;
            __IOM uint16_t ADCS   : 2;
            __IOM uint16_t ADST   : 1;
        } ADCSR_b;
    };

    union
    {
        __IOM uint8_t ADREF;

        struct
        {
            __IOM uint8_t ADF : 1;     /*!< [0..0] Scanning end flag bitThis bit is a status bit that becomes
                                        *   '1' while scanning.                                                       */
            uint8_t              : 6;
            __IM uint8_t ADSCACT : 1;
        } ADREF_b;
    };

    union
    {
        __IOM uint8_t ADEXREF;

        struct
        {
            __IOM uint8_t GBADF : 1;
            uint8_t             : 7;
        } ADEXREF_b;
    };

    union
    {
        __IOM uint16_t ADANSA[2];

        struct
        {
            __IOM uint16_t ANSA0  : 1;
            __IOM uint16_t ANSA1  : 1;
            __IOM uint16_t ANSA2  : 1;
            __IOM uint16_t ANSA3  : 1;
            __IOM uint16_t ANSA4  : 1;
            __IOM uint16_t ANSA5  : 1;
            __IOM uint16_t ANSA6  : 1;
            __IOM uint16_t ANSA7  : 1;
            __IOM uint16_t ANSA8  : 1;
            __IOM uint16_t ANSA9  : 1;
            __IOM uint16_t ANSA10 : 1;
            __IOM uint16_t ANSA11 : 1;
            __IOM uint16_t ANSA12 : 1;
            __IOM uint16_t ANSA13 : 1;
            __IOM uint16_t ANSA14 : 1;
            __IOM uint16_t ANSA15 : 1;
        } ADANSA_b[2];
    };

    union
    {
        __IOM uint16_t ADADS[2];       /*!< (@ 0x00000008) A/D-Converted Value Addition/Average Channel
                                        *                  Select Register                                            */

        struct
        {
            __IOM uint16_t ADS0  : 1;
            __IOM uint16_t ADS1  : 1;
            __IOM uint16_t ADS2  : 1;
            __IOM uint16_t ADS3  : 1;
            __IOM uint16_t ADS4  : 1;
            __IOM uint16_t ADS5  : 1;
            __IOM uint16_t ADS6  : 1;
            __IOM uint16_t ADS7  : 1;
            __IOM uint16_t ADS8  : 1;
            __IOM uint16_t ADS9  : 1;
            __IOM uint16_t ADS10 : 1;
            __IOM uint16_t ADS11 : 1;
            __IOM uint16_t ADS12 : 1;
            __IOM uint16_t ADS13 : 1;
            __IOM uint16_t ADS14 : 1;
            __IOM uint16_t ADS15 : 1;
        } ADADS_b[2];
    };

    union
    {
        __IOM uint8_t ADADC;           /*!< (@ 0x0000000C) A/D-Converted Value Addition/Average Count Select
                                        *                  Register                                                   */

        struct
        {
            __IOM uint8_t ADC : 3;     /*!< [2..0] Addition frequency selection bit.NOTE: AVEE bit is valid
                                        *   at the only setting of ADC[2:0] bits = 001b or 011b. When
                                        *   average mode is selected by setting the ADADC.AVEE bit
                                        *   to 1, do not set the addition count to three times (ADADC.ADC[2:0]
                                        *   = 010b)                                                                   */
            uint8_t            : 4;
            __IOM uint8_t AVEE : 1;    /*!< [7..7] Average Mode Enable. NOTE:When average mode is deselected
                                        *   by setting the ADADC.AVEE bit to 0, set the addition count
                                        *   to 1, 2, 3, 4 or 16-time conversion. 16-time conversion
                                        *   can only be used with 12-bit accuracy selected. NOTE: AVEE
                                        *   bit is valid at the only setting of ADC[2:0] bits = 001b
                                        *   or 011b. When average mode is selected by setting the ADADC.AVEE
                                        *   bit to 1, do not set the addition count to three times
                                        *   (ADADC.ADC[2:0] = 010b)                                                   */
        } ADADC_b;
    };
    __IM uint8_t RESERVED;

    union
    {
        __IOM uint16_t ADCER;

        struct
        {
            uint16_t               : 1;
            __IOM uint16_t ADPRC   : 2;
            uint16_t               : 1;
            __IOM uint16_t DCE     : 1;
            __IOM uint16_t ACE     : 1;
            uint16_t               : 2;
            __IOM uint16_t DIAGVAL : 2;
            __IOM uint16_t DIAGLD  : 1;
            __IOM uint16_t DIAGM   : 1;
            uint16_t               : 2;
            __IOM uint16_t ADINV   : 1;
            __IOM uint16_t ADRFMT  : 1;
        } ADCER_b;
    };

    union
    {
        __IOM uint16_t ADSTRGR;

        struct
        {
            __IOM uint16_t TRSB : 6;   /*!< [5..0] A/D Conversion Start Trigger Select for Group BSelect
                                        *   the A/D conversion start trigger for group B in group scan
                                        *   mode.                                                                     */
            uint16_t            : 2;
            __IOM uint16_t TRSA : 6;   /*!< [13..8] A/D Conversion Start Trigger SelectSelect the A/D conversion
                                        *   start trigger in single scan mode and continuous mode.
                                        *   In group scan mode, the A/D conversion start trigger for
                                        *   group A is selected.                                                      */
            uint16_t : 2;
        } ADSTRGR_b;
    };

    union
    {
        __IOM uint16_t ADEXICR;

        struct
        {
            __IOM uint16_t TSSAD : 1;  /*!< [0..0] Temperature Sensor Output A/D converted Value Addition/Average
                                        *   Mode Select                                                               */
            __IOM uint16_t OCSAD : 1;  /*!< [1..1] Internal Reference Voltage A/D converted Value Addition/Average
                                        *   Mode Select                                                               */
            uint16_t            : 6;
            __IOM uint16_t TSSA : 1;
            __IOM uint16_t OCSA : 1;
            __IOM uint16_t TSSB : 1;   /*!< [10..10] Temperature Sensor Output A/D Conversion Select for
                                        *   Group B in group scan mode.                                               */
            __IOM uint16_t OCSB : 1;   /*!< [11..11] Internal Reference Voltage A/D Conversion Select for
                                        *   Group B in group scan mode.                                               */
            uint16_t             : 2;
            __IOM uint16_t EXSEL : 1;
            __IOM uint16_t EXOEN : 1;
        } ADEXICR_b;
    };

    union
    {
        __IOM uint16_t ADANSB[2];

        struct
        {
            __IOM uint16_t ANSB0  : 1;
            __IOM uint16_t ANSB1  : 1;
            __IOM uint16_t ANSB2  : 1;
            __IOM uint16_t ANSB3  : 1;
            __IOM uint16_t ANSB4  : 1;
            __IOM uint16_t ANSB5  : 1;
            __IOM uint16_t ANSB6  : 1;
            __IOM uint16_t ANSB7  : 1;
            __IOM uint16_t ANSB8  : 1;
            __IOM uint16_t ANSB9  : 1;
            __IOM uint16_t ANSB10 : 1;
            __IOM uint16_t ANSB11 : 1;
            __IOM uint16_t ANSB12 : 1;
            __IOM uint16_t ANSB13 : 1;
            __IOM uint16_t ANSB14 : 1;
            __IOM uint16_t ANSB15 : 1;
        } ADANSB_b[2];
    };

    union
    {
        __IM uint16_t ADDBLDR;

        struct
        {
            __IM uint16_t ADDBLDR : 16; /*!< [15..0] This is a 16-bit read-only register for storing the
                                         *   result of A/D conversion in response to the second trigger
                                         *   in double trigger mode.                                                   */
        } ADDBLDR_b;
    };

    union
    {
        __IM uint16_t ADTSDR;

        struct
        {
            __IM uint16_t ADTSDR : 16; /*!< [15..0] This is a 16-bit read-only register for storing the
                                        *   A/D conversion result of temperature sensor output.                       */
        } ADTSDR_b;
    };

    union
    {
        __IM uint16_t ADOCDR;

        struct
        {
            __IM uint16_t ADOCDR : 16; /*!< [15..0] This is a 16-bit read-only register for storing the
                                        *   A/D result of internal reference voltage.                                 */
        } ADOCDR_b;
    };

    union
    {
        union
        {
            __IM uint16_t ADRD_RIGHT;

            struct
            {
                __IM uint16_t AD : 14;    /*!< [13..0] A/D-converted value (right-justified)The format for
                                           *   data determine ADCER.ADRFMT and ADCER.ADPRC.                              */
                __IM uint16_t DIAGST : 2;
            } ADRD_RIGHT_b;
        };

        union
        {
            __IM uint16_t ADRD_LEFT;

            struct
            {
                __IM uint16_t DIAGST : 2;
                __IM uint16_t AD     : 14; /*!< [15..2] A/D-converted value (right-justified)The format for
                                            *   data determine ADCER.ADRFMT and ADCER.ADPRC.                              */
            } ADRD_LEFT_b;
        };
    };

    union
    {
        __IM uint16_t ADDR[29];

        struct
        {
            __IM uint16_t ADDR : 16;   /*!< [15..0] The ADDR register is a 16-bit read-only registers for
                                        *   storing the result of A/D conversion.                                     */
        } ADDR_b[29];
    };
    __IM uint16_t RESERVED1;
    __IM uint32_t RESERVED2;
    __IM uint16_t RESERVED3;

    union
    {
        __IOM uint8_t ADAMPOFF;

        struct
        {
            __IOM uint8_t OPOFF : 8;
        } ADAMPOFF_b;
    };

    union
    {
        __IOM uint8_t ADTSTPR;

        struct
        {
            __IOM uint8_t PRO  : 1;
            __IOM uint8_t B0WI : 1;
            uint8_t            : 6;
        } ADTSTPR_b;
    };

    union
    {
        __IOM uint16_t ADDDACER;

        struct
        {
            __IOM uint16_t WRION  : 5;
            uint16_t              : 3;
            __IOM uint16_t WRIOFF : 5;
            uint16_t              : 2;
            __IOM uint16_t ADHS   : 1;
        } ADDDACER_b;
    };

    union
    {
        __IOM uint16_t ADSHCR;

        struct
        {
            __IOM uint16_t SSTSH : 8;  /*!< [7..0] Channel-Dedicated Sample-and-Hold Circuit Sampling Time
                                        *   Setting Set the sampling time (4 to 255 states)                           */
            __IOM uint16_t SHANS0 : 1;
            __IOM uint16_t SHANS1 : 1;
            __IOM uint16_t SHANS2 : 1;
            uint16_t              : 5;
        } ADSHCR_b;
    };

    union
    {
        __IOM uint16_t ADEXTSTR;

        struct
        {
            __IOM uint16_t SHTEST : 3; /*!< [2..0] Test mode bit for S&H circuit.Test mode bit of S&H circuit
                                        *   only for channel.                                                         */
            uint16_t             : 1;
            __IOM uint16_t SWTST : 2;
            uint16_t             : 2;
            __IOM uint16_t SHTRM : 2;  /*!< [9..8] Current adjustment trim bit for S&H circuit.Trim bit
                                        *   for adjustment to hardening of process.                                   */
            uint16_t              : 1;
            __IOM uint16_t ADTRM3 : 1; /*!< [11..11] Trim bit 3 for A/D hard macro.3bit Flash comparator
                                        *   power save bit for A/D hard macro to hardening of process.                */
            __IOM uint16_t ADTRM2 : 2; /*!< [13..12] Trim bit 2 for A/D hard macro.Bias adjustment trim
                                        *   bit for A/D hard macro to hardening of process.                           */
            __IOM uint16_t ADTRM1 : 2; /*!< [15..14] Trim bit 1 for A/D hard macro.Timing adjustment trim
                                        *   bit for A/D hard macro to hardening of process.                           */
        } ADEXTSTR_b;
    };

    union
    {
        __IOM uint16_t ADTSTRA;

        struct
        {
            __IOM uint16_t ATBUSSEL : 1;
            __IOM uint16_t TSTSWREF : 3;  /*!< [3..1] Pressure switch refreshing setting bit for S&H circuit
                                           *   amplifier test.Refreshing the pressure switch that opens
                                           *   for the DAC output voltage charge period when the amplifier
                                           *   of the S&H circuit is tested only for the channel is set.                 */
            uint16_t            : 1;
            __IOM uint16_t OCSW : 1;      /*!< [5..5] Internal reference voltage analog switch test control
                                           *   bit.                                                                      */
            __IOM uint16_t TSSW : 1;      /*!< [6..6] Temperature sensor output analogue switch test control
                                           *   bit                                                                       */
            uint16_t                 : 1;
            __IOM uint16_t ADTEST_AD : 4; /*!< [11..8] Test bit for A/D analog module Bit for test of A/D analog
                                           *   module Details are described to the bit explanation.                      */
            __IOM uint16_t ADTEST_IO : 4; /*!< [15..12] Test bit for analog I/ODetails are described to the
                                           *   bit explanation.                                                          */
        } ADTSTRA_b;
    };

    union
    {
        __IOM uint16_t ADTSTRB;

        struct
        {
            __IOM uint16_t ADVAL : 15; /*!< [14..0] Signal input bit bit14-0 for A/D analog module test.It
                                        *   corresponds to ADVAL 14:0 input of A/D analog module.                     */
            uint16_t : 1;
        } ADTSTRB_b;
    };

    union
    {
        __IOM uint16_t ADTSTRC;

        struct
        {
            __IOM uint16_t ADMD : 8;    /*!< [7..0] Bit for A/D analog module test.ADMODE 6:0 input of A/D
                                         *   analog module.                                                            */
            uint16_t               : 4;
            __IOM uint16_t SYNCERR : 1;
            uint16_t               : 3;
        } ADTSTRC_b;
    };

    union
    {
        __IOM uint16_t ADTSTRD;

        struct
        {
            __IOM uint16_t ADVAL16 : 1; /*!< [0..0] Signal input bit bit16 for A/D analog module test.It
                                         *   corresponds to ADVAL 16 input of A/D analog module.                       */
            uint16_t : 15;
        } ADTSTRD_b;
    };

    union
    {
        __IOM uint16_t ADSWTSTR0;

        struct
        {
            __IOM uint16_t CHSW00 : 1;
            __IOM uint16_t CHSW01 : 1;
            __IOM uint16_t CHSW02 : 1;
            __IOM uint16_t CHSW03 : 1;
            __IOM uint16_t CHSW04 : 1;
            __IOM uint16_t CHSW05 : 1;
            uint16_t              : 10;
        } ADSWTSTR0_b;
    };

    union
    {
        __IOM uint16_t ADSWTSTR1;

        struct
        {
            __IOM uint16_t CHSW16 : 1;
            __IOM uint16_t CHSW17 : 1;
            __IOM uint16_t CHSW18 : 1;
            __IOM uint16_t CHSW19 : 1;
            __IOM uint16_t CHSW20 : 1;
            __IOM uint16_t CHSW21 : 1;
            uint16_t              : 10;
        } ADSWTSTR1_b;
    };

    union
    {
        __IOM uint16_t ADSWTSTR2;

        struct
        {
            __IOM uint16_t EX0SW : 1;    /*!< [0..0] Test control of 0 enhancing input channel switches bit
                                          *   (ANEX0 switch)                                                            */
            __IOM uint16_t EX1SW : 1;    /*!< [1..1] Test control of one enhancing input channel switch bit
                                          *   (ANEX1 switch).                                                           */
            uint16_t                : 2;
            __IOM uint16_t SHBYPS0  : 1;
            __IOM uint16_t SHBYPS1  : 1;
            __IOM uint16_t SHBYPS2  : 1;
            uint16_t                : 1;
            __IOM uint16_t GRP0SW   : 1;
            __IOM uint16_t GRP1SW   : 1;
            __IOM uint16_t GRP2SW   : 1;
            __IOM uint16_t GRP3SW   : 1;
            __IOM uint16_t GRPEX1SW : 1;
            uint16_t                : 3;
        } ADSWTSTR2_b;
    };
    __IM uint16_t RESERVED4;

    union
    {
        __IOM uint8_t ADDISCR;

        struct
        {
            __IOM uint8_t ADNDIS : 4;
            __IOM uint8_t CHARGE : 1;
            uint8_t              : 3;
        } ADDISCR_b;
    };

    union
    {
        __IOM uint8_t ADSWCR;

        struct
        {
            __IOM uint8_t ADSWREF : 3; /*!< [2..0] These bits are read as 0. The write value should be 0.Refreshing
                                        *   the pressure switch in A/D analog module is set.                          */
            uint8_t               : 1;
            __IOM uint8_t SHSWREF : 3;
            uint8_t               : 1;
        } ADSWCR_b;
    };

    union
    {
        __IOM uint8_t ADSHMSR;

        struct
        {
            __IOM uint8_t SHMD : 1;    /*!< [0..0] Channel-Dedicated Sample-and-Hold Circuit Operation Mode
                                        *   Select                                                                    */
            uint8_t : 7;
        } ADSHMSR_b;
    };

    union
    {
        __IOM uint8_t ADICR;

        struct
        {
            __IOM uint8_t ADIC : 2;
            uint8_t            : 6;
        } ADICR_b;
    };

    union
    {
        __IOM uint8_t ADACSR;

        struct
        {
            uint8_t             : 1;
            __IOM uint8_t ADSAC : 1;
            uint8_t             : 6;
        } ADACSR_b;
    };
    __IM uint8_t RESERVED5;

    union
    {
        __IOM uint16_t ADGSPCR;

        struct
        {
            __IOM uint16_t PGS : 1;     /*!< [0..0] Group A priority control setting bit.Note: When the PGS
                                         *   bit is to be set to 1, the ADCSR.ADCS[1:0] bits must be
                                         *   set to 01b (group scan mode). If the bits are set to any
                                         *   other values, proper operation is not guaranteed.                         */
            __IOM uint16_t GBRSCN : 1;  /*!< [1..1] Group B Restart Setting(Enabled only when PGS = 1. Reserved
                                         *   when PGS = 0.)                                                            */
            uint16_t               : 6;
            __IOM uint16_t GBEXTRG : 1;
            uint16_t               : 6;
            __IOM uint16_t GBRP    : 1; /*!< [15..15] Group B Single Scan Continuous Start(Enabled only when
                                         *   PGS = 1. Reserved when PGS = 0.)Note: When the GBRP bit
                                         *   has been set to 1, single scan is performed continuously
                                         *   for group B regardless of the setting of the GBRSCN bit.                  */
        } ADGSPCR_b;
    };

    union
    {
        __IM uint16_t ADGSCS;          /*!< (@ 0x00000082) A/D Conversion Channel Status Register (for Group
                                        *                  Scan)                                                      */

        struct
        {
            __IM uint16_t CHSELGB : 8;
            __IM uint16_t CHSELGA : 8;
        } ADGSCS_b;
    };

    union
    {
        __IM uint16_t ADDBLDRA;

        struct
        {
            __IM uint16_t ADDBLDRA : 16; /*!< [15..0] This register is a 16-bit read-only registers for storing
                                          *   the result of A/D conversion in response to the respective
                                          *   triggers during extended operation in double trigger mode.                */
        } ADDBLDRA_b;
    };

    union
    {
        __IM uint16_t ADDBLDRB;

        struct
        {
            __IM uint16_t ADDBLDRB : 16; /*!< [15..0] This register is a 16-bit read-only registers for storing
                                          *   the result of A/D conversion in response to the respective
                                          *   triggers during extended operation in double trigger mode.                */
        } ADDBLDRB_b;
    };

    union
    {
        __IOM uint8_t ADSER;

        struct
        {
            uint8_t             : 7;
            __IOM uint8_t SMPEX : 1;
        } ADSER_b;
    };
    __IM uint8_t RESERVED6;

    union
    {
        __IOM uint8_t ADHVREFCNT;      /*!< (@ 0x0000008A) A/D High-Potential/Low-Potential Reference Voltage
                                        *                  Control Register                                           */

        struct
        {
            __IOM uint8_t HVSEL : 2;
            uint8_t             : 2;
            __IOM uint8_t LVSEL : 1;
            uint8_t             : 2;
            __IOM uint8_t ADSLP : 1;
        } ADHVREFCNT_b;
    };
    __IM uint8_t RESERVED7;

    union
    {
        __IM uint8_t ADWINMON;         /*!< (@ 0x0000008C) A/D Compare Function Window A/B Status Monitor
                                        *                  Register                                                   */

        struct
        {
            __IM uint8_t MONCOMB : 1;  /*!< [0..0] Combination result monitorThis bit indicates the combination
                                        *   result.This bit is valid when both window A operation and
                                        *   window B operation are enabled.                                           */
            uint8_t              : 3;
            __IM uint8_t MONCMPA : 1;
            __IM uint8_t MONCMPB : 1;
            uint8_t              : 2;
        } ADWINMON_b;
    };
    __IM uint8_t  RESERVED8;
    __IM uint16_t RESERVED9;

    union
    {
        __IOM uint16_t ADCMPCR;

        struct
        {
            __IOM uint16_t CMPAB : 2;  /*!< [1..0] Window A/B Composite Conditions SettingNOTE: These bits
                                        *   are valid when both window A and window B are enabled (CMPAE
                                        *   = 1 and CMPBE = 1).                                                       */
            uint16_t              : 7;
            __IOM uint16_t CMPBE  : 1;
            uint16_t              : 1;
            __IOM uint16_t CMPAE  : 1;
            uint16_t              : 1;
            __IOM uint16_t CMPBIE : 1;
            __IOM uint16_t WCMPE  : 1;
            __IOM uint16_t CMPAIE : 1;
        } ADCMPCR_b;
    };

    union
    {
        __IOM uint8_t ADCMPANSER;      /*!< (@ 0x00000092) A/D Compare Function Window A Extended Input
                                        *                  Select Register                                            */

        struct
        {
            __IOM uint8_t CMPTSA : 1;
            __IOM uint8_t CMPOCA : 1;
            uint8_t              : 6;
        } ADCMPANSER_b;
    };

    union
    {
        __IOM uint8_t ADCMPLER;        /*!< (@ 0x00000093) A/D Compare Function Window A Extended Input
                                        *                  Comparison Condition Setting Register                      */

        struct
        {
            __IOM uint8_t CMPLTSA : 1; /*!< [0..0] Compare Window A Temperature Sensor Output Comparison
                                        *   Condition Select                                                          */
            __IOM uint8_t CMPLOCA : 1; /*!< [1..1] Compare Window A Internal Reference Voltage ComparisonCondition
                                        *   Select                                                                    */
            uint8_t : 6;
        } ADCMPLER_b;
    };

    union
    {
        __IOM uint16_t ADCMPANSR[2];     /*!< (@ 0x00000094) A/D Compare Function Window A Channel Select
                                          *                  Register                                                   */

        struct
        {
            __IOM uint16_t CMPCHA0  : 1;
            __IOM uint16_t CMPCHA1  : 1;
            __IOM uint16_t CMPCHA2  : 1;
            __IOM uint16_t CMPCHA3  : 1;
            __IOM uint16_t CMPCHA4  : 1;
            __IOM uint16_t CMPCHA5  : 1;
            __IOM uint16_t CMPCHA6  : 1;
            __IOM uint16_t CMPCHA7  : 1;
            __IOM uint16_t CMPCHA8  : 1;
            __IOM uint16_t CMPCHA9  : 1;
            __IOM uint16_t CMPCHA10 : 1;
            __IOM uint16_t CMPCHA11 : 1;
            __IOM uint16_t CMPCHA12 : 1;
            __IOM uint16_t CMPCHA13 : 1;
            __IOM uint16_t CMPCHA14 : 1;
            __IOM uint16_t CMPCHA15 : 1;
        } ADCMPANSR_b[2];
    };

    union
    {
        __IOM uint16_t ADCMPLR[2];        /*!< (@ 0x00000098) A/D Compare Function Window A Comparison Condition
                                           *                  Setting Register                                           */

        struct
        {
            __IOM uint16_t CMPLCHA0  : 1;
            __IOM uint16_t CMPLCHA1  : 1;
            __IOM uint16_t CMPLCHA2  : 1;
            __IOM uint16_t CMPLCHA3  : 1;
            __IOM uint16_t CMPLCHA4  : 1;
            __IOM uint16_t CMPLCHA5  : 1;
            __IOM uint16_t CMPLCHA6  : 1;
            __IOM uint16_t CMPLCHA7  : 1;
            __IOM uint16_t CMPLCHA8  : 1;
            __IOM uint16_t CMPLCHA9  : 1;
            __IOM uint16_t CMPLCHA10 : 1;
            __IOM uint16_t CMPLCHA11 : 1;
            __IOM uint16_t CMPLCHA12 : 1;
            __IOM uint16_t CMPLCHA13 : 1;
            __IOM uint16_t CMPLCHA14 : 1;
            __IOM uint16_t CMPLCHA15 : 1;
        } ADCMPLR_b[2];
    };

    union
    {
        __IOM uint16_t ADCMPDR0;          /*!< (@ 0x0000009C) A/D Compare Function Window A Lower-Side Level
                                           *                  Setting Register                                           */

        struct
        {
            __IOM uint16_t ADCMPDR0 : 16; /*!< [15..0] The ADCMPDR0 register sets the reference data when the
                                           *   compare window A function is used. ADCMPDR0 sets the lower-side
                                           *   level of window A.                                                        */
        } ADCMPDR0_b;
    };

    union
    {
        __IOM uint16_t ADCMPDR1;          /*!< (@ 0x0000009E) A/D Compare Function Window A Upper-Side Level
                                           *                  Setting Register                                           */

        struct
        {
            __IOM uint16_t ADCMPDR1 : 16; /*!< [15..0] The ADCMPDR1 register sets the reference data when the
                                           *   compare window A function is used. ADCMPDR1 sets the upper-side
                                           *   level of window A..                                                       */
        } ADCMPDR1_b;
    };

    union
    {
        __IOM uint16_t ADCMPSR[2];         /*!< (@ 0x000000A0) A/D Compare Function Window A Channel Status
                                            *                  Register                                                   */

        struct
        {
            __IOM uint16_t CMPSTCHA0  : 1;
            __IOM uint16_t CMPSTCHA1  : 1;
            __IOM uint16_t CMPSTCHA2  : 1;
            __IOM uint16_t CMPSTCHA3  : 1;
            __IOM uint16_t CMPSTCHA4  : 1;
            __IOM uint16_t CMPSTCHA5  : 1;
            __IOM uint16_t CMPSTCHA6  : 1;
            __IOM uint16_t CMPSTCHA7  : 1;
            __IOM uint16_t CMPSTCHA8  : 1;
            __IOM uint16_t CMPSTCHA9  : 1;
            __IOM uint16_t CMPSTCHA10 : 1;
            __IOM uint16_t CMPSTCHA11 : 1;
            __IOM uint16_t CMPSTCHA12 : 1;
            __IOM uint16_t CMPSTCHA13 : 1;
            __IOM uint16_t CMPSTCHA14 : 1;
            __IOM uint16_t CMPSTCHA15 : 1;
        } ADCMPSR_b[2];
    };

    union
    {
        __IOM uint8_t ADCMPSER;         /*!< (@ 0x000000A4) A/D Compare Function Window A Extended Input
                                         *                  Channel Status Register                                    */

        struct
        {
            __IOM uint8_t CMPSTTSA : 1; /*!< [0..0] Compare Window A Temperature Sensor Output Compare Flag
                                         *   When window A operation is enabled (ADCMPCR.CMPAE = 1b),
                                         *   this bit indicates the temperature sensor output comparison
                                         *   result. When window A operation is disabled (ADCMPCR.CMPAE
                                         *   = 0b), comparison conditions for CMPSTTSA are not met any
                                         *   time.                                                                     */
            __IOM uint8_t CMPSTOCA : 1; /*!< [1..1] Compare Window A Internal Reference Voltage Compare Flag
                                         *   When window A operation is enabled (ADCMPCR.CMPAE = 1b),
                                         *   this bit indicates the temperature sensor output comparison
                                         *   result. When window A operation is disabled (ADCMPCR.CMPAE
                                         *   = 0b), comparison conditions for CMPSTTSA are not met any
                                         *   time.                                                                     */
            uint8_t : 6;
        } ADCMPSER_b;
    };
    __IM uint8_t RESERVED10;

    union
    {
        __IOM uint8_t ADCMPBNSR;       /*!< (@ 0x000000A6) A/D Compare Function Window B Channel Selection
                                        *                  Register                                                   */

        struct
        {
            __IOM uint8_t CMPCHB : 6;  /*!< [5..0] Compare window B channel selection bit.The channel that
                                        *   compares it on the condition of compare window B is selected.             */
            uint8_t             : 1;
            __IOM uint8_t CMPLB : 1;
        } ADCMPBNSR_b;
    };
    __IM uint8_t RESERVED11;

    union
    {
        __IOM uint16_t ADWINLLB;          /*!< (@ 0x000000A8) A/D Compare Function Window B Lower-Side Level
                                           *                  Setting Register                                           */

        struct
        {
            __IOM uint16_t ADWINLLB : 16; /*!< [15..0] This register is used to compare A window function is
                                           *   used to set the lower level of the window B.                              */
        } ADWINLLB_b;
    };

    union
    {
        __IOM uint16_t ADWINULB;          /*!< (@ 0x000000AA) A/D Compare Function Window B Upper-Side Level
                                           *                  Setting Register                                           */

        struct
        {
            __IOM uint16_t ADWINULB : 16; /*!< [15..0] This register is used to compare A window function is
                                           *   used to set the higher level of the window B.                             */
        } ADWINULB_b;
    };

    union
    {
        __IOM uint8_t ADCMPBSR;

        struct
        {
            __IOM uint8_t CMPSTB : 1;  /*!< [0..0] Compare window B flag.It is a status flag that shows
                                        *   the comparative result of CH (AN000-AN027, temperature
                                        *   sensor, and internal reference voltage) made the object
                                        *   of window B relation condition.                                           */
            uint8_t : 7;
        } ADCMPBSR_b;
    };
    __IM uint8_t  RESERVED12;
    __IM uint16_t RESERVED13;

    union
    {
        __IM uint16_t ADBUF0;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF0_b;
    };

    union
    {
        __IM uint16_t ADBUF1;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF1_b;
    };

    union
    {
        __IM uint16_t ADBUF2;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF2_b;
    };

    union
    {
        __IM uint16_t ADBUF3;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF3_b;
    };

    union
    {
        __IM uint16_t ADBUF4;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF4_b;
    };

    union
    {
        __IM uint16_t ADBUF5;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF5_b;
    };

    union
    {
        __IM uint16_t ADBUF6;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF6_b;
    };

    union
    {
        __IM uint16_t ADBUF7;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF7_b;
    };

    union
    {
        __IM uint16_t ADBUF8;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF8_b;
    };

    union
    {
        __IM uint16_t ADBUF9;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF9_b;
    };

    union
    {
        __IM uint16_t ADBUF10;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF10_b;
    };

    union
    {
        __IM uint16_t ADBUF11;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF11_b;
    };

    union
    {
        __IM uint16_t ADBUF12;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF12_b;
    };

    union
    {
        __IM uint16_t ADBUF13;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF13_b;
    };

    union
    {
        __IM uint16_t ADBUF14;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF14_b;
    };

    union
    {
        __IM uint16_t ADBUF15;

        struct
        {
            __IM uint16_t ADBUF : 16;  /*!< [15..0] A/D data buffer registers (ADBUF) are 16-bit read-only
                                        *   registers that sequentially store all A/D converted values.
                                        *   The automatic clear function is not applied to these registers.           */
        } ADBUF15_b;
    };

    union
    {
        __IOM uint8_t ADBUFEN;

        struct
        {
            __IOM uint8_t BUFEN : 1;
            uint8_t             : 7;
        } ADBUFEN_b;
    };
    __IM uint8_t RESERVED14;

    union
    {
        __IOM uint8_t ADBUFPTR;

        struct
        {
            __IM uint8_t BUFPTR : 4;   /*!< [3..0] Data Buffer PointerThese bits indicate the number of
                                        *   data buffer to which the next A/D converted data is transferred.          */
            __IM uint8_t PTROVF : 1;
            uint8_t             : 3;
        } ADBUFPTR_b;
    };
    __IM uint8_t  RESERVED15;
    __IM uint32_t RESERVED16[2];
    __IM uint8_t  RESERVED17;

    union
    {
        __IOM uint8_t ADSSTRL;

        struct
        {
            __IOM uint8_t SST : 8;
        } ADSSTRL_b;
    };

    union
    {
        __IOM uint8_t ADSSTRT;

        struct
        {
            __IOM uint8_t SST : 8;
        } ADSSTRT_b;
    };

    union
    {
        __IOM uint8_t ADSSTRO;

        struct
        {
            __IOM uint8_t SST : 8;
        } ADSSTRO_b;
    };

    union
    {
        __IOM uint8_t ADSSTR[16];

        struct
        {
            __IOM uint8_t SST : 8;
        } ADSSTR_b[16];
    };

    union
    {
        __IOM uint16_t ADANIM;

        struct
        {
            __IOM uint16_t ANIM0 : 1;
            __IOM uint16_t ANIM1 : 1;
            __IOM uint16_t ANIM2 : 1;
            __IOM uint16_t ANIM3 : 1;
            uint16_t             : 12;
        } ADANIM_b;
    };

    union
    {
        __IOM uint8_t ADCALEXE;

        struct
        {
            uint8_t              : 6;
            __IM uint8_t  CALMON : 1;
            __IOM uint8_t CALEXE : 1;
        } ADCALEXE_b;
    };
    __IM uint8_t RESERVED18;

    union
    {
        __IOM uint8_t VREFAMPCNT;        /*!< (@ 0x000000F4) A/D Dedicated Reference Voltage Circuit Control
                                          *                  Register                                                   */

        struct
        {
            __IOM uint8_t OLDETEN   : 1;
            __IOM uint8_t VREFADCG  : 2;
            __IOM uint8_t VREFADCEN : 1;
            __IOM uint8_t BGREN     : 1;
            uint8_t                 : 2;
            __IOM uint8_t ADSLP     : 1;
        } VREFAMPCNT_b;
    };
    __IM uint8_t  RESERVED19;
    __IM uint16_t RESERVED20;

    union
    {
        __IOM uint16_t ADRD;

        struct
        {
            __IM uint16_t AD : 16;
        } ADRD_b;
    };

    union
    {
        __IM uint8_t ADRST;

        struct
        {
            __IM uint8_t DIAGST : 2;
            uint8_t             : 6;
        } ADRST_b;
    };
    __IM uint8_t  RESERVED21;
    __IM uint32_t RESERVED22[41];

    union
    {
        __IOM uint16_t ADPGACR;

        struct
        {
            __IOM uint16_t P000SEL0  : 1;
            __IOM uint16_t P000SEL1  : 1;
            __IOM uint16_t P000ENAMP : 1;
            __IOM uint16_t P000GEN   : 1;
            __IOM uint16_t P001SEL0  : 1;
            __IOM uint16_t P001SEL1  : 1;
            __IOM uint16_t P001ENAMP : 1;
            __IOM uint16_t P001GEN   : 1;
            __IOM uint16_t P002SEL0  : 1;
            __IOM uint16_t P002SEL1  : 1;
            __IOM uint16_t P002ENAMP : 1;
            __IOM uint16_t P002GEN   : 1;
            __IOM uint16_t P003SEL0  : 1;
            __IOM uint16_t P003SEL1  : 1;
            __IOM uint16_t P003ENAMP : 1;
            __IOM uint16_t P003GEN   : 1;
        } ADPGACR_b;
    };

    union
    {
        __IOM uint16_t ADPGAGS0;         /*!< (@ 0x000001A2) A/D Programmable Gain Amplifier Gain Setting
                                          *                  Register 0                                                 */

        struct
        {
            __IOM uint16_t P000GAIN : 4; /*!< [3..0] PGA P000 gain setting bit.The gain magnification of (ADPGSDCR0.P000GEN=
                                          *   b) when the shingle end is input and each PGA P000 is set.
                                          *   When the differential motion is input, (ADPGSDCR0.P000GEN=1b)
                                          *   sets the gain magnification when the differential motion
                                          *   is input by the combination with ADPGSDCR0.P000DG 1:0.                    */
            __IOM uint16_t P001GAIN : 4; /*!< [7..4] PGA P001 gain setting bit.The gain magnification of (ADPGSDCR0.P001GEN=
                                          *   b) when the shingle end is input and each PGA P001 is set.
                                          *   When the differential motion is input, (ADPGSDCR0.P001GEN=1b)
                                          *   sets the gain magnification when the differential motion
                                          *   is input by the combination with ADPGSDCR0.P001DG 1:0.                    */
            __IOM uint16_t P002GAIN : 4; /*!< [11..8] PGA P002 gain setting bit.The gain magnification of
                                          *   (ADPGSDCR0.P002GEN=0b) when the shingle end is input and
                                          *   each PGA P002 is set. When the differential motion is input,
                                          *   (ADPGSDCR0.P002GEN=1b) sets the gain magnification when
                                          *   the differential motion is input by the combination with
                                          *   ADPGSDCR0.P002DG 1:0.                                                     */
            __IOM uint16_t P003GAIN : 4; /*!< [15..12] PGA P003 gain setting bit.The gain magnification of
                                          *   (ADPGSDCR0.P003GEN=0b) when the shingle end is input and
                                          *   each PGA P003 is set. When the differential motion is input,
                                          *   (ADPGSDCR0.P003GEN=1b) sets the gain magnification when
                                          *   the differential motion is input by the combination with
                                          *   ADPGSDCR0.P003DG 1:0.                                                     */
        } ADPGAGS0_b;
    };
    __IM uint32_t RESERVED23[3];

    union
    {
        __IOM uint16_t ADPGADCR0;       /*!< (@ 0x000001B0) A/D Programmable Gain Amplifier Differential
                                         *                  Input Control Register                                     */

        struct
        {
            __IOM uint16_t P000DG : 2;  /*!< [1..0] P000 Differential Input Gain SettingNOTE: When these
                                         *   bits are used, set {P000DEN, P000GEN} to 11b.                             */
            uint16_t               : 1;
            __IOM uint16_t P000DEN : 1;
            __IOM uint16_t P001DG  : 2; /*!< [5..4] P001 Differential Input Gain SettingNOTE: When these
                                         *   bits are used, set {P001DEN, P001GEN} to 11b.                             */
            uint16_t               : 1;
            __IOM uint16_t P001DEN : 1;
            __IOM uint16_t P002DG  : 2; /*!< [9..8] P002 Differential Input Gain SettingNOTE: When these
                                         *   bits are used, set {P002DEN, P002GEN} to 11b.                             */
            uint16_t               : 1;
            __IOM uint16_t P002DEN : 1;
            __IOM uint16_t P003DG  : 2; /*!< [13..12] P003 Differential Input Gain SettingNOTE: When these
                                         *   bits are used, set {P003DEN, P003GEN} to 11b.                             */
            uint16_t               : 1;
            __IOM uint16_t P003DEN : 1;
        } ADPGADCR0_b;
    };
    __IM uint16_t RESERVED24;

    union
    {
        __IOM uint8_t ADPGADBS0;       /*!< (@ 0x000001B4) A/D Programmable Gain Amplifier Differential
                                        *                  Input Bias Select Register 0                               */

        struct
        {
            __IOM uint8_t P0BIAS : 1;  /*!< [0..0] Programmable Gain Amplifiers P000 to P002 Bias Voltage
                                        *   SelectNOTE: This bit selects the input bias voltage value
                                        *   when differential inputs are used.                                        */
            uint8_t : 7;
        } ADPGADBS0_b;
    };

    union
    {
        __IOM uint8_t ADPGADBS1;       /*!< (@ 0x000001B5) A/D Programmable Gain Amplifier Differential
                                        *                  Input Bias Select Register 1                               */

        struct
        {
            __IOM uint8_t P3BIAS : 1;  /*!< [0..0] Programmable Gain Amplifiers P003 Bias Voltage SelectNOTE:
                                        *   This bit selects the input bias voltage value when differential
                                        *   inputs are used.                                                          */
            uint8_t : 7;
        } ADPGADBS1_b;
    };
    __IM uint16_t RESERVED25;
    __IM uint32_t RESERVED26[10];

    union
    {
        __IOM uint32_t ADREFMON;

        struct
        {
            __IOM uint32_t PGAMON : 3;
            uint32_t              : 13;
            __IOM uint32_t MONSEL : 4;
            uint32_t              : 12;
        } ADREFMON_b;
    };
} R_ADC0_Type;

/* =========================================================================================================================== */
/* ================                                           R_BUS                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Bus Interface (R_BUS)
 */

typedef struct
{
    __IOM R_BUS_CSa_Type CSa[8];
    __IM uint32_t        RESERVED[480];
    __IOM R_BUS_CSb_Type CSb[8];

    union
    {
        __IOM uint16_t CSRECEN;

        struct
        {
            __IOM uint16_t RCVEN0  : 1;
            __IOM uint16_t RCVEN1  : 1;
            __IOM uint16_t RCVEN2  : 1;
            __IOM uint16_t RCVEN3  : 1;
            __IOM uint16_t RCVEN4  : 1;
            __IOM uint16_t RCVEN5  : 1;
            __IOM uint16_t RCVEN6  : 1;
            __IOM uint16_t RCVEN7  : 1;
            __IOM uint16_t RCVENM0 : 1;
            __IOM uint16_t RCVENM1 : 1;
            __IOM uint16_t RCVENM2 : 1;
            __IOM uint16_t RCVENM3 : 1;
            __IOM uint16_t RCVENM4 : 1;
            __IOM uint16_t RCVENM5 : 1;
            __IOM uint16_t RCVENM6 : 1;
            __IOM uint16_t RCVENM7 : 1;
        } CSRECEN_b;
    };
    __IM uint16_t          RESERVED1;
    __IM uint32_t          RESERVED2[223];
    __IOM R_BUS_SDRAM_Type SDRAM;
    __IM uint32_t          RESERVED3[235];

    union
    {
        __IOM R_BUS_OAD_Type  OAD;
        __IOM R_BUS_BUSM_Type BUSM[6];
    };
    __IM uint32_t RESERVED4[58];

    union
    {
        union
        {
            __IOM uint32_t BUSMABT;

            struct
            {
                __IOM uint32_t ARBS : 1;
                uint32_t            : 31;
            } BUSMABT_b;
        };
        __IOM R_BUS_BUSS_Type BUSS[18];
    };
    __IM uint32_t RESERVED5[46];

    union
    {
        __IOM R_BUS_BUSSABT0_Type BUSSABT0;
        __IOM R_BUS_BUSSABT1_Type BUSSABT1;
    };
    __IM uint32_t RESERVED6[33];

    union
    {
        __IOM uint32_t BUSDIVBYP;

        struct
        {
            __IOM uint32_t EDMABPE  : 1;
            uint32_t                : 2;
            __IOM uint32_t GDSSBPE  : 1;
            uint32_t                : 12;
            __IOM uint32_t CPU0SBPE : 1;
            uint32_t                : 15;
        } BUSDIVBYP_b;
    };
    __IM uint32_t            RESERVED7[319];
    __IOM R_BUS_BUSERRa_Type BUSERRa[12];
    __IM uint32_t            RESERVED8[16];

    union
    {
        __IOM R_BUS_BTZFERR_Type BTZFERR[4];
        __IOM R_BUS_BMSAERR_Type BMSAERR[9]; /*!< (@ 0x00001900) Bus Master Security Attribution Unit Error Address
                                              *                  and Read/Write Status registers.                           */
    };
    __IM uint32_t RESERVED9[28];

    union
    {
        __IOM R_BUS_BUSERRb_Type    BUSERRb[12];
        __IOM R_BUS_DMACDTCERR_Type DMACDTCERR;
    };
    __IM uint32_t           RESERVED10[16];
    __IOM R_BUS_MBWERR_Type MBWERR;
    __IM uint32_t           RESERVED11[5];
    __IOM R_BUS_MBWERR_Type SBWERR;
} R_BUS_Type;

/* =========================================================================================================================== */
/* ================                                           R_CAC                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Clock Frequency Accuracy Measurement Circuit (R_CAC)
 */

typedef struct
{
    union
    {
        __IOM uint8_t CACR0;

        struct
        {
            __IOM uint8_t CFME : 1;
            uint8_t            : 7;
        } CACR0_b;
    };

    union
    {
        __IOM uint8_t CACR1;

        struct
        {
            __IOM uint8_t CACREFE : 1;
            __IOM uint8_t FMCS    : 3;
            __IOM uint8_t TCSS    : 2;
            __IOM uint8_t EDGES   : 2;
        } CACR1_b;
    };

    union
    {
        __IOM uint8_t CACR2;

        struct
        {
            __IOM uint8_t RPS  : 1;
            __IOM uint8_t RSCS : 3;
            __IOM uint8_t RCDS : 2;    /*!< [5..4] Measurement Reference Clock Frequency Division Ratio
                                        *   Select                                                                    */
            __IOM uint8_t DFS : 2;
        } CACR2_b;
    };

    union
    {
        __IOM uint8_t CAICR;

        struct
        {
            __IOM uint8_t FERRIE : 1;
            __IOM uint8_t MENDIE : 1;
            __IOM uint8_t OVFIE  : 1;
            uint8_t              : 1;
            __OM uint8_t FERRFCL : 1;
            __OM uint8_t MENDFCL : 1;
            __OM uint8_t OVFFCL  : 1;
            uint8_t              : 1;
        } CAICR_b;
    };

    union
    {
        __IM uint8_t CASTR;

        struct
        {
            __IM uint8_t FERRF : 1;
            __IM uint8_t MENDF : 1;
            __IM uint8_t OVFF  : 1;
            uint8_t            : 5;
        } CASTR_b;
    };
    __IM uint8_t RESERVED;

    union
    {
        __IOM uint16_t CAULVR;

        struct
        {
            __IOM uint16_t CAULVR : 16; /*!< [15..0] CAULVR is a 16-bit readable/writable register that stores
                                         *   the upper-limit value of the frequency.                                   */
        } CAULVR_b;
    };

    union
    {
        __IOM uint16_t CALLVR;

        struct
        {
            __IOM uint16_t CALLVR : 16; /*!< [15..0] CALLVR is a 16-bit readable/writable register that stores
                                         *   the lower-limit value of the frequency.                                   */
        } CALLVR_b;
    };

    union
    {
        __IM uint16_t CACNTBR;

        struct
        {
            __IM uint16_t CACNTBR : 16; /*!< [15..0] CACNTBR is a 16-bit read-only register that retains
                                         *   the counter value at the time a valid reference signal
                                         *   edge is input                                                             */
        } CACNTBR_b;
    };
} R_CAC_Type;

/* =========================================================================================================================== */
/* ================                                          R_CAN0                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Controller Area Network (CAN) Module (R_CAN0)
 */

typedef struct
{
    __IM uint32_t        RESERVED[128];
    __IOM R_CAN0_MB_Type MB[32];

    union
    {
        __IOM uint32_t MKR[8];

        struct
        {
            __IOM uint32_t EID : 18;
            __IOM uint32_t SID : 11;
            uint32_t           : 3;
        } MKR_b[8];
    };

    union
    {
        __IOM uint32_t FIDCR[2];

        struct
        {
            __IOM uint32_t EID : 18;
            __IOM uint32_t SID : 11;
            uint32_t           : 1;
            __IOM uint32_t RTR : 1;
            __IOM uint32_t IDE : 1;
        } FIDCR_b[2];
    };

    union
    {
        __IOM uint32_t MKIVLR;

        struct
        {
            __IOM uint32_t MB0  : 1;
            __IOM uint32_t MB1  : 1;
            __IOM uint32_t MB2  : 1;
            __IOM uint32_t MB3  : 1;
            __IOM uint32_t MB4  : 1;
            __IOM uint32_t MB5  : 1;
            __IOM uint32_t MB6  : 1;
            __IOM uint32_t MB7  : 1;
            __IOM uint32_t MB8  : 1;
            __IOM uint32_t MB9  : 1;
            __IOM uint32_t MB10 : 1;
            __IOM uint32_t MB11 : 1;
            __IOM uint32_t MB12 : 1;
            __IOM uint32_t MB13 : 1;
            __IOM uint32_t MB14 : 1;
            __IOM uint32_t MB15 : 1;
            __IOM uint32_t MB16 : 1;
            __IOM uint32_t MB17 : 1;
            __IOM uint32_t MB18 : 1;
            __IOM uint32_t MB19 : 1;
            __IOM uint32_t MB20 : 1;
            __IOM uint32_t MB21 : 1;
            __IOM uint32_t MB22 : 1;
            __IOM uint32_t MB23 : 1;
            __IOM uint32_t MB24 : 1;
            __IOM uint32_t MB25 : 1;
            __IOM uint32_t MB26 : 1;
            __IOM uint32_t MB27 : 1;
            __IOM uint32_t MB28 : 1;
            __IOM uint32_t MB29 : 1;
            __IOM uint32_t MB30 : 1;
            __IOM uint32_t MB31 : 1;
        } MKIVLR_b;
    };

    union
    {
        union
        {
            __IOM uint32_t MIER;

            struct
            {
                __IOM uint32_t MB0  : 1;
                __IOM uint32_t MB1  : 1;
                __IOM uint32_t MB2  : 1;
                __IOM uint32_t MB3  : 1;
                __IOM uint32_t MB4  : 1;
                __IOM uint32_t MB5  : 1;
                __IOM uint32_t MB6  : 1;
                __IOM uint32_t MB7  : 1;
                __IOM uint32_t MB8  : 1;
                __IOM uint32_t MB9  : 1;
                __IOM uint32_t MB10 : 1;
                __IOM uint32_t MB11 : 1;
                __IOM uint32_t MB12 : 1;
                __IOM uint32_t MB13 : 1;
                __IOM uint32_t MB14 : 1;
                __IOM uint32_t MB15 : 1;
                __IOM uint32_t MB16 : 1;
                __IOM uint32_t MB17 : 1;
                __IOM uint32_t MB18 : 1;
                __IOM uint32_t MB19 : 1;
                __IOM uint32_t MB20 : 1;
                __IOM uint32_t MB21 : 1;
                __IOM uint32_t MB22 : 1;
                __IOM uint32_t MB23 : 1;
                __IOM uint32_t MB24 : 1;
                __IOM uint32_t MB25 : 1;
                __IOM uint32_t MB26 : 1;
                __IOM uint32_t MB27 : 1;
                __IOM uint32_t MB28 : 1;
                __IOM uint32_t MB29 : 1;
                __IOM uint32_t MB30 : 1;
                __IOM uint32_t MB31 : 1;
            } MIER_b;
        };

        union
        {
            __IOM uint32_t MIER_FIFO;    /*!< (@ 0x0000042C) Mailbox Interrupt Enable Register for FIFO Mailbox
                                          *                  Mode                                                       */

            struct
            {
                __IOM uint32_t MB0  : 1;
                __IOM uint32_t MB1  : 1;
                __IOM uint32_t MB2  : 1;
                __IOM uint32_t MB3  : 1;
                __IOM uint32_t MB4  : 1;
                __IOM uint32_t MB5  : 1;
                __IOM uint32_t MB6  : 1;
                __IOM uint32_t MB7  : 1;
                __IOM uint32_t MB8  : 1;
                __IOM uint32_t MB9  : 1;
                __IOM uint32_t MB10 : 1;
                __IOM uint32_t MB11 : 1;
                __IOM uint32_t MB12 : 1;
                __IOM uint32_t MB13 : 1;
                __IOM uint32_t MB14 : 1;
                __IOM uint32_t MB15 : 1;
                __IOM uint32_t MB16 : 1;
                __IOM uint32_t MB17 : 1;
                __IOM uint32_t MB18 : 1;
                __IOM uint32_t MB19 : 1;
                __IOM uint32_t MB20 : 1;
                __IOM uint32_t MB21 : 1;
                __IOM uint32_t MB22 : 1;
                __IOM uint32_t MB23 : 1;
                __IOM uint32_t MB24 : 1;
                __IOM uint32_t MB25 : 1;
                uint32_t            : 2;
                __IOM uint32_t MB28 : 1;
                __IOM uint32_t MB29 : 1;
                uint32_t            : 2;
            } MIER_FIFO_b;
        };
    };
    __IM uint32_t RESERVED1[252];

    union
    {
        union
        {
            __IOM uint8_t MCTL_TX[32];

            struct
            {
                __IOM uint8_t SENTDATA  : 1;
                __IM uint8_t  TRMACTIVE : 1; /*!< [1..1] Transmission-in-Progress Status Flag (Transmit mailbox
                                              *   setting enabled)                                                          */
                __IOM uint8_t TRMABT : 1;    /*!< [2..2] Transmission Abort Complete Flag (Transmit mailbox setting
                                              *   enabled)                                                                  */
                uint8_t               : 1;
                __IOM uint8_t ONESHOT : 1;
                uint8_t               : 1;
                __IOM uint8_t RECREQ  : 1;
                __IOM uint8_t TRMREQ  : 1;
            } MCTL_TX_b[32];
        };

        union
        {
            __IOM uint8_t MCTL_RX[32];

            struct
            {
                __IOM uint8_t NEWDATA   : 1;
                __IM uint8_t  INVALDATA : 1; /*!< [1..1] Reception-in-Progress Status Flag (Receive mailbox setting
                                              *   enabled)                                                                  */
                __IOM uint8_t MSGLOST : 1;
                uint8_t               : 1;
                __IOM uint8_t ONESHOT : 1;
                uint8_t               : 1;
                __IOM uint8_t RECREQ  : 1;
                __IOM uint8_t TRMREQ  : 1;
            } MCTL_RX_b[32];
        };
    };

    union
    {
        __IOM uint16_t CTLR;

        struct
        {
            __IOM uint16_t MBM  : 1;
            __IOM uint16_t IDFM : 2;
            __IOM uint16_t MLM  : 1;
            __IOM uint16_t TPM  : 1;
            __IOM uint16_t TSRC : 1;
            __IOM uint16_t TSPS : 2;
            __IOM uint16_t CANM : 2;
            __IOM uint16_t SLPM : 1;
            __IOM uint16_t BOM  : 2;
            __IOM uint16_t RBOC : 1;
            uint16_t            : 2;
        } CTLR_b;
    };

    union
    {
        __IM uint16_t STR;

        struct
        {
            __IM uint16_t NDST  : 1;
            __IM uint16_t SDST  : 1;
            __IM uint16_t RFST  : 1;
            __IM uint16_t TFST  : 1;
            __IM uint16_t NMLST : 1;
            __IM uint16_t FMLST : 1;
            __IM uint16_t TABST : 1;
            __IM uint16_t EST   : 1;
            __IM uint16_t RSTST : 1;
            __IM uint16_t HLTST : 1;
            __IM uint16_t SLPST : 1;
            __IM uint16_t EPST  : 1;
            __IM uint16_t BOST  : 1;
            __IM uint16_t TRMST : 1;
            __IM uint16_t RECST : 1;
            uint16_t            : 1;
        } STR_b;
    };

    union
    {
        __IOM uint32_t BCR;

        struct
        {
            __IOM uint32_t CCLKS : 1;
            uint32_t             : 7;
            __IOM uint32_t TSEG2 : 3;
            uint32_t             : 1;
            __IOM uint32_t SJW   : 2;
            uint32_t             : 2;
            __IOM uint32_t BRP   : 10; /*!< [25..16] Prescaler Division Ratio Select . These bits set the
                                        *   frequency of the CAN communication clock (fCANCLK).                       */
            uint32_t             : 2;
            __IOM uint32_t TSEG1 : 4;
        } BCR_b;
    };

    union
    {
        __IOM uint8_t RFCR;

        struct
        {
            __IOM uint8_t RFE   : 1;
            __IM uint8_t  RFUST : 3;
            __IOM uint8_t RFMLF : 1;
            __IM uint8_t  RFFST : 1;
            __IM uint8_t  RFWST : 1;
            __IM uint8_t  RFEST : 1;
        } RFCR_b;
    };

    union
    {
        __OM uint8_t RFPCR;

        struct
        {
            __OM uint8_t RFPCR : 8;    /*!< [7..0] The CPU-side pointer for the receive FIFO is incremented
                                        *   by writing FFh to RFPCR.                                                  */
        } RFPCR_b;
    };

    union
    {
        __IOM uint8_t TFCR;

        struct
        {
            __IOM uint8_t TFE   : 1;
            __IM uint8_t  TFUST : 3;
            uint8_t             : 2;
            __IM uint8_t TFFST  : 1;
            __IM uint8_t TFEST  : 1;
        } TFCR_b;
    };

    union
    {
        __OM uint8_t TFPCR;

        struct
        {
            __OM uint8_t TFPCR : 8;    /*!< [7..0] The CPU-side pointer for the transmit FIFO is incremented
                                        *   by writing FFh to TFPCR.                                                  */
        } TFPCR_b;
    };

    union
    {
        __IOM uint8_t EIER;

        struct
        {
            __IOM uint8_t BEIE  : 1;
            __IOM uint8_t EWIE  : 1;
            __IOM uint8_t EPIE  : 1;
            __IOM uint8_t BOEIE : 1;
            __IOM uint8_t BORIE : 1;
            __IOM uint8_t ORIE  : 1;
            __IOM uint8_t OLIE  : 1;
            __IOM uint8_t BLIE  : 1;
        } EIER_b;
    };

    union
    {
        __IOM uint8_t EIFR;

        struct
        {
            __IOM uint8_t BEIF  : 1;
            __IOM uint8_t EWIF  : 1;
            __IOM uint8_t EPIF  : 1;
            __IOM uint8_t BOEIF : 1;
            __IOM uint8_t BORIF : 1;
            __IOM uint8_t ORIF  : 1;
            __IOM uint8_t OLIF  : 1;
            __IOM uint8_t BLIF  : 1;
        } EIFR_b;
    };

    union
    {
        __IM uint8_t RECR;

        struct
        {
            __IM uint8_t RECR : 8;     /*!< [7..0] Receive error count functionRECR increments or decrements
                                        *   the counter value according to the error status of the
                                        *   CAN module during reception.                                              */
        } RECR_b;
    };

    union
    {
        __IM uint8_t TECR;

        struct
        {
            __IM uint8_t TECR : 8;     /*!< [7..0] Transmit error count functionTECR increments or decrements
                                        *   the counter value according to the error status of the
                                        *   CAN module during transmission.                                           */
        } TECR_b;
    };

    union
    {
        __IOM uint8_t ECSR;

        struct
        {
            __IOM uint8_t SEF  : 1;
            __IOM uint8_t FEF  : 1;
            __IOM uint8_t AEF  : 1;
            __IOM uint8_t CEF  : 1;
            __IOM uint8_t BE1F : 1;
            __IOM uint8_t BE0F : 1;
            __IOM uint8_t ADEF : 1;
            __IOM uint8_t EDPM : 1;
        } ECSR_b;
    };

    union
    {
        __IOM uint8_t CSSR;

        struct
        {
            __IOM uint8_t CSSR : 8;    /*!< [7..0] When the value for the channel search is input, the channel
                                        *   number is output to MSSR.                                                 */
        } CSSR_b;
    };

    union
    {
        __IM uint8_t MSSR;

        struct
        {
            __IM uint8_t MBNST : 5;    /*!< [4..0] Search Result Mailbox Number Status These bits output
                                        *   the smallest mailbox number that is searched in each mode
                                        *   of MSMR.                                                                  */
            uint8_t           : 2;
            __IM uint8_t SEST : 1;
        } MSSR_b;
    };

    union
    {
        __IOM uint8_t MSMR;

        struct
        {
            __IOM uint8_t MBSM : 2;
            uint8_t            : 6;
        } MSMR_b;
    };

    union
    {
        __IM uint16_t TSR;

        struct
        {
            __IM uint16_t TSR : 16;
        } TSR_b;
    };

    union
    {
        __IOM uint16_t AFSR;

        struct
        {
            __IOM uint16_t AFSR : 16;  /*!< [15..0] After the standard ID of a received message is written,
                                        *   the value converted for data table search can be read.                    */
        } AFSR_b;
    };

    union
    {
        __IOM uint8_t TCR;

        struct
        {
            __IOM uint8_t TSTE : 1;
            __IOM uint8_t TSTM : 2;
            uint8_t            : 5;
        } TCR_b;
    };
    __IM uint8_t  RESERVED2;
    __IM uint16_t RESERVED3;
} R_CAN0_Type;

/* =========================================================================================================================== */
/* ================                                           R_CRC                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Cyclic Redundancy Check (CRC) Calculator (R_CRC)
 */

typedef struct
{
    union
    {
        __IOM uint8_t CRCCR0;

        struct
        {
            __IOM uint8_t GPS    : 3;
            uint8_t              : 3;
            __IOM uint8_t LMS    : 1;
            __OM uint8_t  DORCLR : 1;
        } CRCCR0_b;
    };

    union
    {
        __IOM uint8_t CRCCR1;

        struct
        {
            uint8_t              : 6;
            __IOM uint8_t CRCSWR : 1;
            __IOM uint8_t CRCSEN : 1;
        } CRCCR1_b;
    };
    __IM uint16_t RESERVED;

    union
    {
        union
        {
            __IOM uint32_t CRCDIR;

            struct
            {
                __IOM uint32_t CRCDIR : 32;
            } CRCDIR_b;
        };

        union
        {
            __IOM uint8_t CRCDIR_BY;

            struct
            {
                __IOM uint8_t CRCDIR_BY : 8; /*!< [7..0] Calculation input Data ( Case of CRC-8, CRC-16 or CRC-CCITT
                                              *   )                                                                         */
            } CRCDIR_BY_b;
        };
    };

    union
    {
        union
        {
            __IOM uint32_t CRCDOR;

            struct
            {
                __IOM uint32_t CRCDOR : 32;
            } CRCDOR_b;
        };

        union
        {
            __IOM uint16_t CRCDOR_HA;

            struct
            {
                __IOM uint16_t CRCDOR_HA : 16; /*!< [15..0] Calculation output Data (Case of CRC-16 or CRC-CCITT
                                                *   )                                                                         */
            } CRCDOR_HA_b;
        };

        union
        {
            __IOM uint8_t CRCDOR_BY;

            struct
            {
                __IOM uint8_t CRCDOR_BY : 8;
            } CRCDOR_BY_b;
        };
    };

    union
    {
        __IOM uint16_t CRCSAR;

        struct
        {
            __IOM uint16_t CRCSA : 14;
            uint16_t             : 2;
        } CRCSAR_b;
    };
    __IM uint16_t RESERVED1;
} R_CRC_Type;

/* =========================================================================================================================== */
/* ================                                          R_CTSU                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Capacitive Touch Sensing Unit (R_CTSU)
 */

typedef struct
{
    union
    {
        __IOM uint8_t CTSUCR0;

        struct
        {
            __IOM uint8_t CTSUSTRT   : 1;
            __IOM uint8_t CTSUCAP    : 1;
            __IOM uint8_t CTSUSNZ    : 1;
            __IOM uint8_t CTSUIOC    : 1;
            __IOM uint8_t CTSUINIT   : 1;
            uint8_t                  : 2;
            __IOM uint8_t CTSUTXVSEL : 1;
        } CTSUCR0_b;
    };

    union
    {
        __IOM uint8_t CTSUCR1;

        struct
        {
            __IOM uint8_t CTSUPON    : 1;
            __IOM uint8_t CTSUCSW    : 1;
            __IOM uint8_t CTSUATUNE0 : 1;
            __IOM uint8_t CTSUATUNE1 : 1;
            __IOM uint8_t CTSUCLK    : 2;
            __IOM uint8_t CTSUMD     : 2;
        } CTSUCR1_b;
    };

    union
    {
        __IOM uint8_t CTSUSDPRS;

        struct
        {
            __IOM uint8_t CTSUPRRATIO : 4; /*!< [3..0] CTSU Measurement Time and Pulse Count AdjustmentRecommended
                                            *   setting: 3 (0011b)                                                        */
            __IOM uint8_t CTSUPRMODE : 2;
            __IOM uint8_t CTSUSOFF   : 1;
            uint8_t                  : 1;
        } CTSUSDPRS_b;
    };

    union
    {
        __IOM uint8_t CTSUSST;

        struct
        {
            __IOM uint8_t CTSUSST : 8; /*!< [7..0] CTSU Sensor Stabilization Wait ControlNOTE: The value
                                        *   of these bits should be fixed to 00010000b.                               */
        } CTSUSST_b;
    };

    union
    {
        __IOM uint8_t CTSUMCH0;

        struct
        {
            __IOM uint8_t CTSUMCH0 : 6; /*!< [5..0] CTSU Measurement Channel 0.Note1: Writing to these bits
                                         *   is only enabled in self-capacitance single-scan mode (CTSUCR1.CTSUMD[1:0]
                                         *   bits = 00b).Note2: If the value of CTSUMCH0 was set to
                                         *   b'111111 in mode other than self-capacitor single scan
                                         *   mode, the measurement is stopped.                                         */
            uint8_t : 2;
        } CTSUMCH0_b;
    };

    union
    {
        __IOM uint8_t CTSUMCH1;

        struct
        {
            __IM uint8_t CTSUMCH1 : 6; /*!< [5..0] CTSU Measurement Channel 1Note1: If the value of CTSUMCH1
                                        *   was set to b'111111, the measurement is stopped.                          */
            uint8_t : 2;
        } CTSUMCH1_b;
    };

    union
    {
        __IOM uint8_t CTSUCHAC[5];

        struct
        {
            __IOM uint8_t TS0 : 1;
            __IOM uint8_t TS1 : 1;
            __IOM uint8_t TS2 : 1;
            __IOM uint8_t TS3 : 1;
            __IOM uint8_t TS4 : 1;
            __IOM uint8_t TS5 : 1;
            __IOM uint8_t TS6 : 1;
            __IOM uint8_t TS7 : 1;
        } CTSUCHAC_b[5];
    };

    union
    {
        __IOM uint8_t CTSUCHTRC[5];

        struct
        {
            __IOM uint8_t TS0 : 1;
            __IOM uint8_t TS1 : 1;
            __IOM uint8_t TS2 : 1;
            __IOM uint8_t TS3 : 1;
            __IOM uint8_t TS4 : 1;
            __IOM uint8_t TS5 : 1;
            __IOM uint8_t TS6 : 1;
            __IOM uint8_t TS7 : 1;
        } CTSUCHTRC_b[5];
    };

    union
    {
        __IOM uint8_t CTSUDCLKC;

        struct
        {
            __IOM uint8_t CTSUSSMOD : 2; /*!< [1..0] CTSU Diffusion Clock Mode SelectNOTE: This bit should
                                          *   be set to 00b.                                                            */
            uint8_t                 : 2;
            __IOM uint8_t CTSUSSCNT : 2; /*!< [5..4] CTSU Diffusion Clock Mode ControlNOTE: This bit should
                                          *   be set to 11b.                                                            */
            uint8_t : 2;
        } CTSUDCLKC_b;
    };

    union
    {
        __IOM uint8_t CTSUST;

        struct
        {
            __IM uint8_t CTSUSTC   : 3;
            uint8_t                : 1;
            __IM uint8_t  CTSUDTSR : 1;
            __IOM uint8_t CTSUSOVF : 1;
            __IOM uint8_t CTSUROVF : 1;
            __IM uint8_t  CTSUPS   : 1;
        } CTSUST_b;
    };

    union
    {
        __IOM uint16_t CTSUSSC;        /*!< (@ 0x00000012) CTSU High-Pass Noise Reduction Spectrum Diffusion
                                        *                  Control Register                                           */

        struct
        {
            uint16_t                 : 8;
            __IOM uint16_t CTSUSSDIV : 4;
            uint16_t                 : 4;
        } CTSUSSC_b;
    };

    union
    {
        __IOM uint16_t CTSUSO0;

        struct
        {
            __IOM uint16_t CTSUSO : 10;  /*!< [9..0] CTSU Sensor Offset AdjustmentCurrent offset amount is
                                          *   CTSUSO ( 0 to 1023 )                                                      */
            __IOM uint16_t CTSUSNUM : 6;
        } CTSUSO0_b;
    };

    union
    {
        __IOM uint16_t CTSUSO1;

        struct
        {
            __IOM uint16_t CTSURICOA : 8; /*!< [7..0] CTSU Reference ICO Current AdjustmentCurrent offset amount
                                           *   is CTSUSO ( 0 to 255 )                                                    */
            __IOM uint16_t CTSUSDPA : 5;  /*!< [12..8] CTSU Base Clock SettingOperating clock divided by (
                                           *   CTSUSDPA + 1 ) x 2                                                        */
            __IOM uint16_t CTSUICOG : 2;
            uint16_t                : 1;
        } CTSUSO1_b;
    };

    union
    {
        __IM uint16_t CTSUSC;

        struct
        {
            __IM uint16_t CTSUSC : 16; /*!< [15..0] CTSU Sensor CounterThese bits indicate the measurement
                                        *   result of the CTSU. These bits indicate FFFFh when an overflow
                                        *   occurs.                                                                   */
        } CTSUSC_b;
    };

    union
    {
        __IM uint16_t CTSURC;

        struct
        {
            __IM uint16_t CTSURC : 16; /*!< [15..0] CTSU Reference CounterThese bits indicate the measurement
                                        *   result of the reference ICO.These bits indicate FFFFh when
                                        *   an overflow occurs.                                                       */
        } CTSURC_b;
    };

    union
    {
        __IM uint16_t CTSUERRS;

        struct
        {
            __IOM uint16_t CTSUSPMD    : 2;
            __IOM uint16_t CTSUTSOD    : 1;
            __IOM uint16_t CTSUDRV     : 1;
            uint16_t                   : 2;
            __IOM uint16_t CTSUCLKSEL1 : 1;
            __IOM uint16_t CTSUTSOC    : 1;
            uint16_t                   : 7;
            __IM uint16_t CTSUICOMP    : 1;
        } CTSUERRS_b;
    };
    __IM uint16_t RESERVED;
    __IOM uint8_t CTSUTRMR;
    __IM uint8_t  RESERVED1;
    __IM uint16_t RESERVED2;
} R_CTSU_Type;

/* =========================================================================================================================== */
/* ================                                           R_DAC                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief D/A Converter (R_DAC)
 */

typedef struct
{
    union
    {
        __IOM uint16_t DADR[2];

        struct
        {
            __IOM uint16_t DADR : 16;  /*!< [15..0] D/A Data RegisterNOTE: When DADPR.DPSEL = 0, the high-order
                                        *   4 bits are fixed to 0: right justified format. When DADPR.DPSEL
                                        *   = 1, the low-order 4 bits are fixed to 0: left justified
                                        *   format.                                                                   */
        } DADR_b[2];
    };

    union
    {
        __IOM uint8_t DACR;

        struct
        {
            uint8_t             : 5;
            __IOM uint8_t DAE   : 1;
            __IOM uint8_t DAOE0 : 1;
            __IOM uint8_t DAOE1 : 1;
        } DACR_b;
    };

    union
    {
        __IOM uint8_t DADPR;

        struct
        {
            uint8_t             : 7;
            __IOM uint8_t DPSEL : 1;
        } DADPR_b;
    };

    union
    {
        __IOM uint8_t DAADSCR;

        struct
        {
            uint8_t              : 7;
            __IOM uint8_t DAADST : 1;
        } DAADSCR_b;
    };

    union
    {
        __IOM uint8_t DAVREFCR;

        struct
        {
            __IOM uint8_t REF : 3;
            uint8_t           : 5;
        } DAVREFCR_b;
    };

    union
    {
        __IOM uint8_t DAAMPCR;

        struct
        {
            uint8_t              : 6;
            __IOM uint8_t DAAMP0 : 1;
            __IOM uint8_t DAAMP1 : 1;
        } DAAMPCR_b;
    };

    union
    {
        __IOM uint8_t DAPC;

        struct
        {
            __IOM uint8_t PUMPEN : 1;
            uint8_t              : 7;
        } DAPC_b;
    };
    __IM uint16_t RESERVED[9];

    union
    {
        __IOM uint8_t DAASWCR;

        struct
        {
            uint8_t              : 6;
            __IOM uint8_t DAASW0 : 1;  /*!< [6..6] Set the DAASW0 bit to 1 in the initialization procedure
                                        *   to wait for stabilization of the output amplifier of D/A
                                        *   channel 0. When DAASW0 is set to 1, D/A conversion operates,
                                        *   but the conversion result D/A is not output from channel
                                        *   0. When the DAASW0 bit is 0, the stabilization wait time
                                        *   stops, and the D/A conversion result of channel 0 is output
                                        *   through the output amplifier.                                             */
            __IOM uint8_t DAASW1 : 1;  /*!< [7..7] Set the DAASW1 bit to 1 in the initialization procedure
                                        *   to wait for stabilization of the output amplifier of D/A
                                        *   channel 1. When DAASW1 is set to 1, D/A conversion operates,
                                        *   but the conversion result D/A is not output from channel
                                        *   1. When the DAASW1 bit is 0, the stabilization wait time
                                        *   stops, and the D/A conversion result of channel 1 is output
                                        *   through the output amplifier.                                             */
        } DAASWCR_b;
    };
    __IM uint8_t  RESERVED1;
    __IM uint16_t RESERVED2[2129];

    union
    {
        __IOM uint8_t DAADUSR;

        struct
        {
            __IOM uint8_t AMADSEL0 : 1; /*!< [0..0] The DAADUSR register selects the target ADC12 unit for
                                         *   D/A and A/D synchronous conversions. Set bit [0] to 1 to
                                         *   select unit 0 as the target synchronous unit for the MCU.
                                         *   When setting the DAADSCR.DAADST bit to 1 for synchronous
                                         *   conversions, select the target unit in this register in
                                         *   advance. Only set the DAADUSR register while the ADCSR.ADST
                                         *   bit of the ADC12 is set to 0 and the DAADSCR.DAADST bit
                                         *   is set to 0.                                                              */
            __IOM uint8_t AMADSEL1 : 1; /*!< [1..1] The DAADUSR register selects the target ADC12 unit for
                                         *   D/A and A/D synchronous conversions. Set bit [1] to 1 to
                                         *   select unit 1 as the target synchronous unit for the MCU.
                                         *   When setting the DAADSCR.DAADST bit to 1 for synchronous
                                         *   conversions, select the target unit in this register in
                                         *   advance. Only set the DAADUSR register while the ADCSR.ADST
                                         *   bit of the ADC12 is set to 0 and the DAADSCR.DAADST bit
                                         *   is set to 0.                                                              */
            uint8_t : 6;
        } DAADUSR_b;
    };
    __IM uint8_t  RESERVED3;
    __IM uint16_t RESERVED4;
} R_DAC_Type;

/* =========================================================================================================================== */
/* ================                                          R_DEBUG                                          ================ */
/* =========================================================================================================================== */

/**
 * @brief Debug Function (R_DEBUG)
 */

typedef struct
{
    union
    {
        __IM uint32_t DBGSTR;

        struct
        {
            uint32_t                   : 28;
            __IM uint32_t CDBGPWRUPREQ : 1;
            __IM uint32_t CDBGPWRUPACK : 1;
            uint32_t                   : 2;
        } DBGSTR_b;
    };
    __IM uint32_t RESERVED[3];

    union
    {
        __IOM uint32_t DBGSTOPCR;

        struct
        {
            __IOM uint32_t DBGSTOP_IWDT  : 1;
            __IOM uint32_t DBGSTOP_WDT   : 1;
            uint32_t                     : 12;
            __IOM uint32_t DBGSTOP_TIM   : 1;
            __IOM uint32_t DBGSTOP_SIR   : 1;
            __IOM uint32_t DBGSTOP_LVD0  : 1;
            __IOM uint32_t DBGSTOP_LVD1  : 1;
            __IOM uint32_t DBGSTOP_LVD2  : 1;
            uint32_t                     : 5;
            __IOM uint32_t DBGSTOP_RPER  : 1;
            __IOM uint32_t DBGSTOP_RECCR : 1;
            uint32_t                     : 5;
            __IOM uint32_t DBGSTOP_CPER  : 1;
        } DBGSTOPCR_b;
    };
    __IM uint32_t RESERVED1[123];

    union
    {
        __IOM uint32_t FSBLSTAT;

        struct
        {
            __IOM uint32_t CS     : 1;
            __IOM uint32_t RS     : 1;
            uint32_t              : 6;
            __IM uint32_t FSBLCLK : 3;
            uint32_t              : 21;
        } FSBLSTAT_b;
    };
} R_DEBUG_Type;

/* =========================================================================================================================== */
/* ================                                           R_DMA                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief DMA Controller Common (R_DMA)
 */

typedef struct
{
    union
    {
        __IOM uint8_t DMAST;

        struct
        {
            __IOM uint8_t DMST : 1;
            uint8_t            : 7;
        } DMAST_b;
    };
    __IM uint8_t  RESERVED;
    __IM uint16_t RESERVED1;
    __IM uint32_t RESERVED2[15];

    union
    {
        __IOM uint32_t DMECHR;

        struct
        {
            __IM uint32_t DMECH    : 3;
            uint32_t               : 5;
            __IM uint32_t DMECHSAM : 1;
            uint32_t               : 7;
            __IOM uint32_t DMESTA  : 1;
            uint32_t               : 15;
        } DMECHR_b;
    };
    __IM uint32_t RESERVED3[15];

    union
    {
        __IOM uint32_t DELSR[8];

        struct
        {
            __IOM uint32_t DELS : 9;
            uint32_t            : 7;
            __IOM uint32_t IR   : 1;   /*!< [16..16] Interrupt Status Flag for DMAC NOTE: Writing 1 to the
                                        *   IR flag is prohibited.                                                    */
            uint32_t : 15;
        } DELSR_b[8];
    };
} R_DMA_Type;

/* =========================================================================================================================== */
/* ================                                          R_DMAC0                                          ================ */
/* =========================================================================================================================== */

/**
 * @brief DMA Controller (R_DMAC0)
 */

typedef struct
{
    union
    {
        __IOM uint32_t DMSAR;

        struct
        {
            __IOM uint32_t DMSAR : 32;
        } DMSAR_b;
    };

    union
    {
        __IOM uint32_t DMDAR;

        struct
        {
            __IOM uint32_t DMDAR : 32;
        } DMDAR_b;
    };

    union
    {
        __IOM uint32_t DMCRA;

        struct
        {
            __IOM uint32_t DMCRAL : 16;
            __IOM uint32_t DMCRAH : 10;
            uint32_t              : 6;
        } DMCRA_b;
    };

    union
    {
        __IOM uint32_t DMCRB;

        struct
        {
            __IOM uint32_t DMCRBL : 16; /*!< [15..0] Functions as a number of block, repeat or repeat-block
                                         *   transfer counter.                                                         */
            __IOM uint32_t DMCRBH : 16; /*!< [31..16] Specifies the number of block transfer operations or
                                         *   repeat transfer operations.                                               */
        } DMCRB_b;
    };

    union
    {
        __IOM uint16_t DMTMD;

        struct
        {
            __IOM uint16_t DCTG : 2;
            uint16_t            : 6;
            __IOM uint16_t SZ   : 2;
            __IOM uint16_t TKP  : 1;
            uint16_t            : 1;
            __IOM uint16_t DTS  : 2;
            __IOM uint16_t MD   : 2;
        } DMTMD_b;
    };
    __IM uint8_t RESERVED;

    union
    {
        __IOM uint8_t DMINT;

        struct
        {
            __IOM uint8_t DARIE : 1;   /*!< [0..0] Destination Address Extended Repeat Area Overflow Interrupt
                                        *   Enable                                                                    */
            __IOM uint8_t SARIE : 1;   /*!< [1..1] Source Address Extended Repeat Area Overflow Interrupt
                                        *   Enable                                                                    */
            __IOM uint8_t RPTIE : 1;
            __IOM uint8_t ESIE  : 1;
            __IOM uint8_t DTIE  : 1;
            uint8_t             : 3;
        } DMINT_b;
    };

    union
    {
        __IOM uint16_t DMAMD;

        struct
        {
            __IOM uint16_t DARA : 5;   /*!< [4..0] Destination Address Extended Repeat Area Specifies the
                                        *   extended repeat area on the destination address. For details
                                        *   on the settings.                                                          */
            __IOM uint16_t DADR : 1;
            __IOM uint16_t DM   : 2;
            __IOM uint16_t SARA : 5;   /*!< [12..8] Source Address Extended Repeat Area Specifies the extended
                                        *   repeat area on the source address. For details on the settings.           */
            __IOM uint16_t SADR : 1;
            __IOM uint16_t SM   : 2;
        } DMAMD_b;
    };
    __IM uint16_t RESERVED1;

    union
    {
        __IOM uint32_t DMOFR;

        struct
        {
            __IOM uint32_t DMOFR : 32; /*!< [31..0] Specifies the offset when offset addition is selected
                                        *   as the address update mode for transfer source or destination.            */
        } DMOFR_b;
    };

    union
    {
        __IOM uint8_t DMCNT;

        struct
        {
            __IOM uint8_t DTE : 1;
            uint8_t           : 7;
        } DMCNT_b;
    };

    union
    {
        __IOM uint8_t DMREQ;

        struct
        {
            __IOM uint8_t SWREQ : 1;
            uint8_t             : 3;
            __IOM uint8_t CLRS  : 1;
            uint8_t             : 3;
        } DMREQ_b;
    };

    union
    {
        __IOM uint8_t DMSTS;

        struct
        {
            __IOM uint8_t ESIF : 1;
            uint8_t            : 3;
            __IOM uint8_t DTIF : 1;
            uint8_t            : 2;
            __IM uint8_t ACT   : 1;
        } DMSTS_b;
    };
    __IM uint8_t   RESERVED2;
    __IOM uint32_t DMSRR;
    __IOM uint32_t DMDRR;

    union
    {
        __IOM uint32_t DMSBS;

        struct
        {
            __IOM uint32_t DMSBSL : 16; /*!< [15..0] Functions as data transfer counter in repeat-block transfer
                                         *   mode                                                                      */
            __IOM uint32_t DMSBSH : 16; /*!< [31..16] Specifies the repeat-area size in repeat-block transfer
                                         *   mode                                                                      */
        } DMSBS_b;
    };

    union
    {
        __IOM uint32_t DMDBS;

        struct
        {
            __IOM uint32_t DMDBSL : 16; /*!< [15..0] Functions as data transfer counter in repeat-block transfer
                                         *   mode                                                                      */
            __IOM uint32_t DMDBSH : 16; /*!< [31..16] Specifies the repeat-area size in repeat-block transfer
                                         *   mode                                                                      */
        } DMDBS_b;
    };

    union
    {
        __IOM uint8_t DMBWR;

        struct
        {
            __IOM uint8_t BWE : 1;
            uint8_t           : 7;
        } DMBWR_b;
    };
    __IM uint8_t  RESERVED3;
    __IM uint16_t RESERVED4;
} R_DMAC0_Type;

/* =========================================================================================================================== */
/* ================                                           R_DOC                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Data Operation Circuit (R_DOC)
 */

typedef struct
{
    union
    {
        __IOM uint8_t DOCR;

        struct
        {
            __IOM uint8_t OMS     : 2;
            __IOM uint8_t DCSEL   : 1;
            uint8_t               : 2;
            __IM uint8_t  DOPCF   : 1;
            __IOM uint8_t DOPCFCL : 1;
            uint8_t               : 1;
        } DOCR_b;
    };
    __IM uint8_t RESERVED;

    union
    {
        __IOM uint16_t DODIR;

        struct
        {
            __IOM uint16_t DODIR : 16; /*!< [15..0] 16-bit read-write register in which 16-bit data for
                                        *   use in the operations are stored.                                         */
        } DODIR_b;
    };

    union
    {
        __IOM uint16_t DODSR;

        struct
        {
            __IOM uint16_t DODSR : 16; /*!< [15..0] This register stores 16-bit data for use as a reference
                                        *   in data comparison mode. This register also stores the
                                        *   results of operations in data addition and data subtraction
                                        *   modes.                                                                    */
        } DODSR_b;
    };
} R_DOC_Type;

/* =========================================================================================================================== */
/* ================                                           R_DTC                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Data Transfer Controller (R_DTC)
 */

typedef struct
{
    union
    {
        __IOM uint8_t DTCCR;

        struct
        {
            uint8_t           : 4;
            __IOM uint8_t RRS : 1;
            uint8_t           : 3;
        } DTCCR_b;
    };
    __IM uint8_t  RESERVED;
    __IM uint16_t RESERVED1;

    union
    {
        __IOM uint32_t DTCVBR;

        struct
        {
            __IOM uint32_t DTCVBR : 32; /*!< [31..0] DTC Vector Base Address.Note: A value cannot be set
                                         *   in the lower-order 10 bits. These bits are fixed to 0.                    */
        } DTCVBR_b;
    };
    __IM uint32_t RESERVED2;

    union
    {
        __IOM uint8_t DTCST;

        struct
        {
            __IOM uint8_t DTCST : 1;
            uint8_t             : 7;
        } DTCST_b;
    };
    __IM uint8_t RESERVED3;

    union
    {
        __IM uint16_t DTCSTS;

        struct
        {
            __IM uint16_t VECN : 8;    /*!< [7..0] DTC-Activating Vector Number MonitoringThese bits indicate
                                        *   the vector number for the activating source when DTC transfer
                                        *   is in progress.The value is only valid if DTC transfer
                                        *   is in progress (the value of the ACT flag is 1)                           */
            uint16_t          : 7;
            __IM uint16_t ACT : 1;
        } DTCSTS_b;
    };

    union
    {
        __IOM uint8_t DTCCR_SEC;

        struct
        {
            uint8_t            : 4;
            __IOM uint8_t RRSS : 1;
            uint8_t            : 3;
        } DTCCR_SEC_b;
    };
    __IM uint8_t   RESERVED4;
    __IM uint16_t  RESERVED5;
    __IOM uint32_t DTCVBR_SEC;
    __IM uint32_t  RESERVED6[2];

    union
    {
        __IOM uint32_t DTEVR;

        struct
        {
            __IM uint32_t DTEV    : 8;
            __IM uint32_t DTEVSAM : 1;
            uint32_t              : 7;
            __IOM uint32_t DTESTA : 1;
            uint32_t              : 15;
        } DTEVR_b;
    };
} R_DTC_Type;

/* =========================================================================================================================== */
/* ================                                           R_ELC                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Event Link Controller (R_ELC)
 */

typedef struct
{
    union
    {
        __IOM uint8_t ELCR;

        struct
        {
            uint8_t             : 7;
            __IOM uint8_t ELCON : 1;
        } ELCR_b;
    };
    __IM uint8_t            RESERVED;
    __IOM R_ELC_ELSEGR_Type ELSEGR[2];
    __IM uint16_t           RESERVED1[5];
    __IOM R_ELC_ELSR_Type   ELSR[23];
    __IM uint16_t           RESERVED2[4];

    union
    {
        __IOM uint16_t ELCSARA;         /*!< (@ 0x00000074) Event Link Controller Security Attribution Register
                                         *                  A                                                          */

        struct
        {
            __IOM uint16_t ELCR    : 1;
            __IOM uint16_t ELSEGR0 : 1; /*!< [1..1] Event Link Software Event Generation Register 0 Security
                                         *   Attribution                                                               */
            __IOM uint16_t ELSEGR1 : 1; /*!< [2..2] Event Link Software Event Generation Register 1Security
                                         *   Attribution                                                               */
            uint16_t : 13;
        } ELCSARA_b;
    };
    __IM uint16_t RESERVED3;

    union
    {
        __IOM uint16_t ELCSARB;        /*!< (@ 0x00000078) Event Link Controller Security Attribution Register
                                        *                  B                                                          */

        struct
        {
            __IOM uint16_t ELSR0  : 1;
            __IOM uint16_t ELSR1  : 1;
            __IOM uint16_t ELSR2  : 1;
            __IOM uint16_t ELSR3  : 1;
            __IOM uint16_t ELSR4  : 1;
            __IOM uint16_t ELSR5  : 1;
            __IOM uint16_t ELSR6  : 1;
            __IOM uint16_t ELSR7  : 1;
            __IOM uint16_t ELSR8  : 1;
            __IOM uint16_t ELSR9  : 1;
            __IOM uint16_t ELSR10 : 1;
            __IOM uint16_t ELSR11 : 1;
            __IOM uint16_t ELSR12 : 1;
            __IOM uint16_t ELSR13 : 1;
            __IOM uint16_t ELSR14 : 1;
            __IOM uint16_t ELSR15 : 1;
        } ELCSARB_b;
    };
    __IM uint16_t RESERVED4;

    union
    {
        __IOM uint16_t ELCSARC;        /*!< (@ 0x0000007C) Event Link Controller Security Attribution Register
                                        *                  C                                                          */

        struct
        {
            __IOM uint16_t ELSR16 : 1;
            __IOM uint16_t ELSR17 : 1;
            __IOM uint16_t ELSR18 : 1;
            uint16_t              : 13;
        } ELCSARC_b;
    };
} R_ELC_Type;

/* =========================================================================================================================== */
/* ================                                       R_FACI_HP_CMD                                       ================ */
/* =========================================================================================================================== */

/**
 * @brief Flash Application Command Interface Command-Issuing Area (R_FACI_HP_CMD)
 */

typedef struct
{
    union
    {
        __IOM uint16_t FACI_CMD16;
        __IOM uint8_t  FACI_CMD8;
    };
} R_FACI_HP_CMD_Type;

/* =========================================================================================================================== */
/* ================                                         R_FACI_HP                                         ================ */
/* =========================================================================================================================== */

/**
 * @brief Flash Application Command Interface (R_FACI_HP)
 */

typedef struct
{
    __IM uint32_t RESERVED[4];

    union
    {
        __IOM uint8_t FASTAT;

        struct
        {
            uint8_t             : 3;
            __IOM uint8_t DFAE  : 1;
            __IM uint8_t  CMDLK : 1;
            uint8_t             : 2;
            __IOM uint8_t CFAE  : 1;
        } FASTAT_b;
    };
    __IM uint8_t  RESERVED1;
    __IM uint16_t RESERVED2;

    union
    {
        __IOM uint8_t FAEINT;

        struct
        {
            uint8_t               : 3;
            __IOM uint8_t DFAEIE  : 1;
            __IOM uint8_t CMDLKIE : 1;
            uint8_t               : 2;
            __IOM uint8_t CFAEIE  : 1;
        } FAEINT_b;
    };
    __IM uint8_t  RESERVED3;
    __IM uint16_t RESERVED4;

    union
    {
        __IOM uint8_t FRDYIE;

        struct
        {
            __IOM uint8_t FRDYIE : 1;
            uint8_t              : 7;
        } FRDYIE_b;
    };
    __IM uint8_t  RESERVED5;
    __IM uint16_t RESERVED6;
    __IM uint32_t RESERVED7[5];

    union
    {
        __IOM uint32_t FSADDR;

        struct
        {
            __IOM uint32_t FSA : 32;   /*!< [31..0] Start Address of Flash Sequencer Command Target Area
                                        *   These bits can be written when FRDY bit of FSTATR register
                                        *   is '1'. Writing to these bits in FRDY = '0' is ignored.                   */
        } FSADDR_b;
    };

    union
    {
        __IOM uint32_t FEADDR;

        struct
        {
            __IOM uint32_t FEA : 32;   /*!< [31..0] End Address of Flash Sequencer Command Target Area Specifies
                                        *   end address of target area in 'Blank Check' command. These
                                        *   bits can be written when FRDY bit of FSTATR register is
                                        *   '1'. Writing to these bits in FRDY = '0' is ignored.                      */
        } FEADDR_b;
    };
    __IM uint32_t RESERVED8[3];

    union
    {
        __IOM uint16_t FMEPROT;

        struct
        {
            __IOM uint16_t CEPROT : 1; /*!< [0..0] Code Flash P/E Mode Entry ProtectionWriting to this bit
                                        *   is only possible when the FRDY bit in the FSTATR register
                                        *   is 1. Writing to this bit while the FRDY bit = 0 isignored.Writing
                                        *   to this bit is only possible when 16 bits are written and
                                        *   the value written to the KEY bits is D9h.Written values
                                        *   are not retained by these bits (always read as 0x00).Only
                                        *   secure access can write to this register. Both secure access
                                        *   and non-secure read access are allowed. Non-secure writeaccess
                                        *   is denied, but TrustZo                                                    */
            uint16_t          : 7;
            __OM uint16_t KEY : 8;
        } FMEPROT_b;
    };
    __IM uint16_t RESERVED9;
    __IM uint32_t RESERVED10[12];

    union
    {
        __IOM uint16_t FBPROT0;

        struct
        {
            __IOM uint16_t BPCN0 : 1;  /*!< [0..0] Block Protection for Non-secure CancelThis bit can be
                                        *   written when the FRDY bit in the FSTATR register is 1.
                                        *   Writing to this bit is ignored when the FRDY bit is 0.Writing
                                        *   to this bit is only possible when 16 bits are written and
                                        *   the value written to the KEY[7:0] bits is 0x78.Written
                                        *   values are not retained by these bits (always read as 0x00).              */
            uint16_t          : 7;
            __OM uint16_t KEY : 8;
        } FBPROT0_b;
    };
    __IM uint16_t RESERVED11;

    union
    {
        __IOM uint16_t FBPROT1;

        struct
        {
            __IOM uint16_t BPCN1 : 1;  /*!< [0..0] Block Protection for Secure CancelWriting to this bit
                                        *   is only possible when the FRDY bit in the FSTATR register
                                        *   is 1. Writing to this bit while FRDY bit = 0 is ignored.Writing
                                        *   to this bit is only possible when 16 bits are written and
                                        *   the value written to the KEY[7:0] bits is 0xB1.Written
                                        *   values are not retained by these bits (always read as 0x00).              */
            uint16_t          : 7;
            __OM uint16_t KEY : 8;
        } FBPROT1_b;
    };
    __IM uint16_t RESERVED12;

    union
    {
        __IM uint32_t FSTATR;

        struct
        {
            uint32_t                 : 6;
            __IM uint32_t FLWEERR    : 1;
            uint32_t                 : 1;
            __IM uint32_t PRGSPD     : 1;
            __IM uint32_t ERSSPD     : 1;
            __IM uint32_t DBFULL     : 1;
            __IM uint32_t SUSRDY     : 1;
            __IM uint32_t PRGERR     : 1;
            __IM uint32_t ERSERR     : 1;
            __IM uint32_t ILGLERR    : 1;
            __IM uint32_t FRDY       : 1;
            uint32_t                 : 4;
            __IM uint32_t  OTERR     : 1;
            __IOM uint32_t SECERR    : 1;
            __IM uint32_t  FESETERR  : 1;
            __IM uint32_t  ILGCOMERR : 1;
            uint32_t                 : 8;
        } FSTATR_b;
    };

    union
    {
        __IOM uint16_t FENTRYR;

        struct
        {
            __IOM uint16_t FENTRYC : 1; /*!< [0..0] Code Flash P/E Mode Entry These bits can be written when
                                         *   FRDY bit in FSTATR register is '1'. Writing to this bit
                                         *   in FRDY = '0' is ignored. Writing to these bits is enabled
                                         *   only when this register is accessed in 16-bit size and
                                         *   H'AA is written to KEY bits                                               */
            uint16_t               : 6;
            __IOM uint16_t FENTRYD : 1; /*!< [7..7] Data Flash P/E Mode Entry These bits can be written when
                                         *   FRDY bit in FSTATR register is '1'. Writing to this bit
                                         *   in FRDY = '0' is ignored. Writing to these bits is enabled
                                         *   only when this register is accessed in 16-bit size and
                                         *   H'AA is written to KEY bits.                                              */
            __OM uint16_t KEY : 8;
        } FENTRYR_b;
    };
    __IM uint16_t RESERVED13;
    __IM uint32_t RESERVED14;

    union
    {
        __IOM uint16_t FSUINITR;

        struct
        {
            __IOM uint16_t SUINIT : 1; /*!< [0..0] Set-up Initialization This bit can be written when FRDY
                                        *   bit of FSTATR register is '1'. Writing to this bit in FRDY
                                        *   = '0' is ignored. Writing to these bits is enabled only
                                        *   when this register is accessed in 16-bit size and H'2D
                                        *   is written to KEY bits.                                                   */
            uint16_t          : 7;
            __OM uint16_t KEY : 8;
        } FSUINITR_b;
    };
    __IM uint16_t RESERVED15;
    __IM uint32_t RESERVED16[4];

    union
    {
        __IM uint16_t FCMDR;

        struct
        {
            __IM uint16_t PCMDR : 8;
            __IM uint16_t CMDR  : 8;
        } FCMDR_b;
    };
    __IM uint16_t RESERVED17;
    __IM uint32_t RESERVED18[11];

    union
    {
        __IOM uint8_t FBCCNT;

        struct
        {
            __IOM uint8_t BCDIR : 1;
            uint8_t             : 7;
        } FBCCNT_b;
    };
    __IM uint8_t  RESERVED19;
    __IM uint16_t RESERVED20;

    union
    {
        __IM uint8_t FBCSTAT;

        struct
        {
            __IM uint8_t BCST : 1;
            uint8_t           : 7;
        } FBCSTAT_b;
    };
    __IM uint8_t  RESERVED21;
    __IM uint16_t RESERVED22;

    union
    {
        __IM uint32_t FPSADDR;

        struct
        {
            __IM uint32_t PSADR : 19;  /*!< [18..0] Programmed Area Start Address NOTE: Indicates address
                                        *   of the first programmed data which is found in 'Blank Check'
                                        *   command execution.                                                        */
            uint32_t : 13;
        } FPSADDR_b;
    };

    union
    {
        __IM uint32_t FAWMON;

        struct
        {
            __IM uint32_t FAWS : 11;   /*!< [10..0] Start Sector Address for Access Window NOTE: These bits
                                        *   indicate the start sector address for setting the access
                                        *   window that is located in the configuration area.                         */
            uint32_t           : 4;
            __IM uint32_t FSPR : 1;    /*!< [15..15] Protection Flag of programming the Access Window, Boot
                                        *   Flag and Temporary Boot Swap Control and 'Config Clear'
                                        *   command execution                                                         */
            __IM uint32_t FAWE : 11;   /*!< [26..16] End Sector Address for Access Window NOTE: These bits
                                        *   indicate the end sector address for setting the access
                                        *   window that is located in the configuration area.                         */
            uint32_t            : 4;
            __IM uint32_t BTFLG : 1;
        } FAWMON_b;
    };

    union
    {
        __IOM uint16_t FCPSR;

        struct
        {
            __IOM uint16_t ESUSPMD : 1;
            uint16_t               : 15;
        } FCPSR_b;
    };
    __IM uint16_t RESERVED23;

    union
    {
        __IOM uint16_t FPCKAR;

        struct
        {
            __IOM uint16_t PCKA : 8;   /*!< [7..0] Flash Sequencer Processing Clock Frequency These bits
                                        *   can be written when FRDY bit in FSTATR register is '1'.
                                        *   Writing to this bit in FRDY = '0' is ignored. Writing to
                                        *   these bits is enabled only when this register is accessed
                                        *   in 16-bit size and H'1E is written to KEY bits.                           */
            __OM uint16_t KEY : 8;
        } FPCKAR_b;
    };
    __IM uint16_t RESERVED24;

    union
    {
        __IOM uint16_t FSUACR;

        struct
        {
            __IOM uint16_t SAS : 2;    /*!< [1..0] Start Up Area Select These bits can be written when FRDY
                                        *   bit in FSTATR register is '1'. Writing to this bit in FRDY
                                        *   = '0' is ignored. Writing to these bits is enabled only
                                        *   when this register is accessed in 16-bit size and H'66
                                        *   is written to KEY bits.                                                   */
            uint16_t          : 6;
            __OM uint16_t KEY : 8;
        } FSUACR_b;
    };
    __IM uint16_t RESERVED25;
} R_FACI_HP_Type;

/* =========================================================================================================================== */
/* ================                                         R_FCACHE                                          ================ */
/* =========================================================================================================================== */

/**
 * @brief Flash Memory Cache (R_FCACHE)
 */

typedef struct
{
    __IM uint16_t RESERVED[128];

    union
    {
        __IOM uint16_t FCACHEE;

        struct
        {
            __IOM uint16_t FCACHEEN : 1;
            uint16_t                : 15;
        } FCACHEE_b;
    };
    __IM uint16_t RESERVED1;

    union
    {
        __IOM uint16_t FCACHEIV;

        struct
        {
            __IOM uint16_t FCACHEIV : 1;
            uint16_t                : 15;
        } FCACHEIV_b;
    };
    __IM uint16_t RESERVED2[11];

    union
    {
        __IOM uint8_t FLWT;

        struct
        {
            __IOM uint8_t FLWT : 3;
            uint8_t            : 5;
        } FLWT_b;
    };
    __IM uint8_t  RESERVED3;
    __IM uint16_t RESERVED4[17];

    union
    {
        __IOM uint16_t FSAR;

        struct
        {
            __IOM uint16_t FLWTSA   : 1;
            uint16_t                : 7;
            __IOM uint16_t FCKMHZSA : 1;
            uint16_t                : 7;
        } FSAR_b;
    };
} R_FCACHE_Type;

/* =========================================================================================================================== */
/* ================                                          R_GPT0                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief General PWM Timer (R_GPT0)
 */

typedef struct
{
    union
    {
        __IOM uint32_t GTWP;

        struct
        {
            __IOM uint32_t WP    : 1;
            __IOM uint32_t STRWP : 1;
            __IOM uint32_t STPWP : 1;
            __IOM uint32_t CLRWP : 1;
            __IOM uint32_t CMNWP : 1;
            uint32_t             : 3;
            __OM uint32_t PRKEY  : 8;
            uint32_t             : 16;
        } GTWP_b;
    };

    union
    {
        __IOM uint32_t GTSTR;

        struct
        {
            __IOM uint32_t CSTRT0 : 1;  /*!< [0..0] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT1 : 1;  /*!< [1..1] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT2 : 1;  /*!< [2..2] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT3 : 1;  /*!< [3..3] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT4 : 1;  /*!< [4..4] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT5 : 1;  /*!< [5..5] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT6 : 1;  /*!< [6..6] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT7 : 1;  /*!< [7..7] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT8 : 1;  /*!< [8..8] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT9 : 1;  /*!< [9..9] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT10 : 1; /*!< [10..10] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT11 : 1; /*!< [11..11] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT12 : 1; /*!< [12..12] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT13 : 1; /*!< [13..13] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT14 : 1; /*!< [14..14] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT15 : 1; /*!< [15..15] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT16 : 1; /*!< [16..16] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT17 : 1; /*!< [17..17] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT18 : 1; /*!< [18..18] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT19 : 1; /*!< [19..19] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT20 : 1; /*!< [20..20] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT21 : 1; /*!< [21..21] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT22 : 1; /*!< [22..22] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT23 : 1; /*!< [23..23] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT24 : 1; /*!< [24..24] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT25 : 1; /*!< [25..25] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT26 : 1; /*!< [26..26] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT27 : 1; /*!< [27..27] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT28 : 1; /*!< [28..28] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT29 : 1; /*!< [29..29] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT30 : 1; /*!< [30..30] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
            __IOM uint32_t CSTRT31 : 1; /*!< [31..31] Channel GTCNT Count StartRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter stop. 1
                                         *   means counter running.                                                    */
        } GTSTR_b;
    };

    union
    {
        __IOM uint32_t GTSTP;

        struct
        {
            __IOM uint32_t CSTOP0 : 1;  /*!< [0..0] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP1 : 1;  /*!< [1..1] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP2 : 1;  /*!< [2..2] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP3 : 1;  /*!< [3..3] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP4 : 1;  /*!< [4..4] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP5 : 1;  /*!< [5..5] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP6 : 1;  /*!< [6..6] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP7 : 1;  /*!< [7..7] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP8 : 1;  /*!< [8..8] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP9 : 1;  /*!< [9..9] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP10 : 1; /*!< [10..10] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP11 : 1; /*!< [11..11] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP12 : 1; /*!< [12..12] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP13 : 1; /*!< [13..13] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP14 : 1; /*!< [14..14] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP15 : 1; /*!< [15..15] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP16 : 1; /*!< [16..16] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP17 : 1; /*!< [17..17] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP18 : 1; /*!< [18..18] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP19 : 1; /*!< [19..19] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP20 : 1; /*!< [20..20] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP21 : 1; /*!< [21..21] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP22 : 1; /*!< [22..22] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP23 : 1; /*!< [23..23] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP24 : 1; /*!< [24..24] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP25 : 1; /*!< [25..25] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP26 : 1; /*!< [26..26] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP27 : 1; /*!< [27..27] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP28 : 1; /*!< [28..28] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP29 : 1; /*!< [29..29] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP30 : 1; /*!< [30..30] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
            __IOM uint32_t CSTOP31 : 1; /*!< [31..31] Channel GTCNT Count StopRead data shows each channel's
                                         *   counter status (GTCR.CST bit). 0 means counter runnning.
                                         *   1 means counter stop.                                                     */
        } GTSTP_b;
    };

    union
    {
        __OM uint32_t GTCLR;

        struct
        {
            __OM uint32_t CCLR0  : 1;
            __OM uint32_t CCLR1  : 1;
            __OM uint32_t CCLR2  : 1;
            __OM uint32_t CCLR3  : 1;
            __OM uint32_t CCLR4  : 1;
            __OM uint32_t CCLR5  : 1;
            __OM uint32_t CCLR6  : 1;
            __OM uint32_t CCLR7  : 1;
            __OM uint32_t CCLR8  : 1;
            __OM uint32_t CCLR9  : 1;
            __OM uint32_t CCLR10 : 1;
            __OM uint32_t CCLR11 : 1;
            __OM uint32_t CCLR12 : 1;
            __OM uint32_t CCLR13 : 1;
            __OM uint32_t CCLR14 : 1;
            __OM uint32_t CCLR15 : 1;
            __OM uint32_t CCLR16 : 1;
            __OM uint32_t CCLR17 : 1;
            __OM uint32_t CCLR18 : 1;
            __OM uint32_t CCLR19 : 1;
            __OM uint32_t CCLR20 : 1;
            __OM uint32_t CCLR21 : 1;
            __OM uint32_t CCLR22 : 1;
            __OM uint32_t CCLR23 : 1;
            __OM uint32_t CCLR24 : 1;
            __OM uint32_t CCLR25 : 1;
            __OM uint32_t CCLR26 : 1;
            __OM uint32_t CCLR27 : 1;
            __OM uint32_t CCLR28 : 1;
            __OM uint32_t CCLR29 : 1;
            __OM uint32_t CCLR30 : 1;
            __OM uint32_t CCLR31 : 1;
        } GTCLR_b;
    };

    union
    {
        __IOM uint32_t GTSSR;

        struct
        {
            __IOM uint32_t SSGTRGAR : 1;
            __IOM uint32_t SSGTRGAF : 1;
            __IOM uint32_t SSGTRGBR : 1;
            __IOM uint32_t SSGTRGBF : 1;
            __IOM uint32_t SSGTRGCR : 1;
            __IOM uint32_t SSGTRGCF : 1;
            __IOM uint32_t SSGTRGDR : 1;
            __IOM uint32_t SSGTRGDF : 1;
            __IOM uint32_t SSCARBL  : 1; /*!< [8..8] GTIOCA Pin Rising Input during GTIOCB Value Low Source
                                          *   Counter Start Enable                                                      */
            __IOM uint32_t SSCARBH : 1;  /*!< [9..9] GTIOCA Pin Rising Input during GTIOCB Value High Source
                                          *   Counter Start Enable                                                      */
            __IOM uint32_t SSCAFBL : 1;  /*!< [10..10] GTIOCA Pin Falling Input during GTIOCB Value Low Source
                                          *   Counter Start Enable                                                      */
            __IOM uint32_t SSCAFBH : 1;  /*!< [11..11] GTIOCA Pin Falling Input during GTIOCB Value High Source
                                          *   Counter Start Enable                                                      */
            __IOM uint32_t SSCBRAL : 1;  /*!< [12..12] GTIOCB Pin Rising Input during GTIOCA Value Low Source
                                          *   Counter Start Enable                                                      */
            __IOM uint32_t SSCBRAH : 1;  /*!< [13..13] GTIOCB Pin Rising Input during GTIOCA Value High Source
                                          *   Counter Start Enable                                                      */
            __IOM uint32_t SSCBFAL : 1;  /*!< [14..14] GTIOCB Pin Falling Input during GTIOCA Value Low Source
                                          *   Counter Start Enable                                                      */
            __IOM uint32_t SSCBFAH : 1;  /*!< [15..15] GTIOCB Pin Falling Input during GTIOCA Value High Source
                                          *   Counter Start Enable                                                      */
            __IOM uint32_t SSELCA : 1;
            __IOM uint32_t SSELCB : 1;
            __IOM uint32_t SSELCC : 1;
            __IOM uint32_t SSELCD : 1;
            __IOM uint32_t SSELCE : 1;
            __IOM uint32_t SSELCF : 1;
            __IOM uint32_t SSELCG : 1;
            __IOM uint32_t SSELCH : 1;
            uint32_t              : 7;
            __IOM uint32_t CSTRT  : 1;
        } GTSSR_b;
    };

    union
    {
        __IOM uint32_t GTPSR;

        struct
        {
            __IOM uint32_t PSGTRGAR : 1;
            __IOM uint32_t PSGTRGAF : 1;
            __IOM uint32_t PSGTRGBR : 1;
            __IOM uint32_t PSGTRGBF : 1;
            __IOM uint32_t PSGTRGCR : 1;
            __IOM uint32_t PSGTRGCF : 1;
            __IOM uint32_t PSGTRGDR : 1;
            __IOM uint32_t PSGTRGDF : 1;
            __IOM uint32_t PSCARBL  : 1; /*!< [8..8] GTIOCA Pin Rising Input during GTIOCB Value Low Source
                                          *   Counter Stop Enable                                                       */
            __IOM uint32_t PSCARBH : 1;  /*!< [9..9] GTIOCA Pin Rising Input during GTIOCB Value High Source
                                          *   Counter Stop Enable                                                       */
            __IOM uint32_t PSCAFBL : 1;  /*!< [10..10] GTIOCA Pin Falling Input during GTIOCB Value Low Source
                                          *   Counter Stop Enable                                                       */
            __IOM uint32_t PSCAFBH : 1;  /*!< [11..11] GTIOCA Pin Falling Input during GTIOCB Value High Source
                                          *   Counter Stop Enable                                                       */
            __IOM uint32_t PSCBRAL : 1;  /*!< [12..12] GTIOCB Pin Rising Input during GTIOCA Value Low Source
                                          *   Counter Stop Enable                                                       */
            __IOM uint32_t PSCBRAH : 1;  /*!< [13..13] GTIOCB Pin Rising Input during GTIOCA Value High Source
                                          *   Counter Stop Enable                                                       */
            __IOM uint32_t PSCBFAL : 1;  /*!< [14..14] GTIOCB Pin Falling Input during GTIOCA Value Low Source
                                          *   Counter Stop Enable                                                       */
            __IOM uint32_t PSCBFAH : 1;  /*!< [15..15] GTIOCB Pin Falling Input during GTIOCA Value High Source
                                          *   Counter Stop Enable                                                       */
            __IOM uint32_t PSELCA : 1;
            __IOM uint32_t PSELCB : 1;
            __IOM uint32_t PSELCC : 1;
            __IOM uint32_t PSELCD : 1;
            __IOM uint32_t PSELCE : 1;
            __IOM uint32_t PSELCF : 1;
            __IOM uint32_t PSELCG : 1;
            __IOM uint32_t PSELCH : 1;
            uint32_t              : 7;
            __IOM uint32_t CSTOP  : 1;
        } GTPSR_b;
    };

    union
    {
        __IOM uint32_t GTCSR;

        struct
        {
            __IOM uint32_t CSGTRGAR : 1;
            __IOM uint32_t CSGTRGAF : 1;
            __IOM uint32_t CSGTRGBR : 1;
            __IOM uint32_t CSGTRGBF : 1;
            __IOM uint32_t CSGTRGCR : 1;
            __IOM uint32_t CSGTRGCF : 1;
            __IOM uint32_t CSGTRGDR : 1;
            __IOM uint32_t CSGTRGDF : 1;
            __IOM uint32_t CSCARBL  : 1; /*!< [8..8] GTIOCA Pin Rising Input during GTIOCB Value Low Source
                                          *   Counter Clear Enable                                                      */
            __IOM uint32_t CSCARBH : 1;  /*!< [9..9] GTIOCA Pin Rising Input during GTIOCB Value High Source
                                          *   Counter Clear Enable                                                      */
            __IOM uint32_t CSCAFBL : 1;  /*!< [10..10] GTIOCA Pin Falling Input during GTIOCB Value Low Source
                                          *   Counter Clear Enable                                                      */
            __IOM uint32_t CSCAFBH : 1;  /*!< [11..11] GTIOCA Pin Falling Input during GTIOCB Value High Source
                                          *   Counter Clear Enable                                                      */
            __IOM uint32_t CSCBRAL : 1;  /*!< [12..12] GTIOCB Pin Rising Input during GTIOCA Value Low Source
                                          *   Counter Clear Enable                                                      */
            __IOM uint32_t CSCBRAH : 1;  /*!< [13..13] GTIOCB Pin Rising Input during GTIOCA Value High Source
                                          *   Counter Clear Enable                                                      */
            __IOM uint32_t CSCBFAL : 1;  /*!< [14..14] GTIOCB Pin Falling Input during GTIOCA Value Low Source
                                          *   Counter Clear Enable                                                      */
            __IOM uint32_t CSCBFAH : 1;  /*!< [15..15] GTIOCB Pin Falling Input during GTIOCA Value High Source
                                          *   Counter Clear Enable                                                      */
            __IOM uint32_t CSELCA : 1;
            __IOM uint32_t CSELCB : 1;
            __IOM uint32_t CSELCC : 1;
            __IOM uint32_t CSELCD : 1;
            __IOM uint32_t CSELCE : 1;
            __IOM uint32_t CSELCF : 1;
            __IOM uint32_t CSELCG : 1;
            __IOM uint32_t CSELCH : 1;
            __IOM uint32_t CSCMSC : 3;   /*!< [26..24] Compare Match/Input Capture/Synchronous counter clearing
                                          *   Source Counter Clear Enable.                                              */
            __IOM uint32_t CP1CCE : 1;   /*!< [27..27] Complementary PWM mode1 Crest Source Counter Clear
                                          *   Enable (This bit is only available in GPT324 to GPT329.
                                          *   In GPT320 to GPT323, this bit is read as 0. The write value
                                          *   should be 0.)                                                             */
            uint32_t            : 3;
            __IOM uint32_t CCLR : 1;
        } GTCSR_b;
    };

    union
    {
        __IOM uint32_t GTUPSR;

        struct
        {
            __IOM uint32_t USGTRGAR : 1;
            __IOM uint32_t USGTRGAF : 1;
            __IOM uint32_t USGTRGBR : 1;
            __IOM uint32_t USGTRGBF : 1;
            __IOM uint32_t USGTRGCR : 1;
            __IOM uint32_t USGTRGCF : 1;
            __IOM uint32_t USGTRGDR : 1;
            __IOM uint32_t USGTRGDF : 1;
            __IOM uint32_t USCARBL  : 1; /*!< [8..8] GTIOCA Pin Rising Input during GTIOCB Value Low Source
                                          *   Counter Count Up Enable                                                   */
            __IOM uint32_t USCARBH : 1;  /*!< [9..9] GTIOCA Pin Rising Input during GTIOCB Value High Source
                                          *   Counter Count Up Enable                                                   */
            __IOM uint32_t USCAFBL : 1;  /*!< [10..10] GTIOCA Pin Falling Input during GTIOCB Value Low Source
                                          *   Counter Count Up Enable                                                   */
            __IOM uint32_t USCAFBH : 1;  /*!< [11..11] GTIOCA Pin Falling Input during GTIOCB Value High Source
                                          *   Counter Count Up Enable                                                   */
            __IOM uint32_t USCBRAL : 1;  /*!< [12..12] GTIOCB Pin Rising Input during GTIOCA Value Low Source
                                          *   Counter Count Up Enable                                                   */
            __IOM uint32_t USCBRAH : 1;  /*!< [13..13] GTIOCB Pin Rising Input during GTIOCA Value High Source
                                          *   Counter Count Up Enable                                                   */
            __IOM uint32_t USCBFAL : 1;  /*!< [14..14] GTIOCB Pin Falling Input during GTIOCA Value Low Source
                                          *   Counter Count Up Enable                                                   */
            __IOM uint32_t USCBFAH : 1;  /*!< [15..15] GTIOCB Pin Falling Input during GTIOCA Value High Source
                                          *   Counter Count Up Enable                                                   */
            __IOM uint32_t USELCA : 1;
            __IOM uint32_t USELCB : 1;
            __IOM uint32_t USELCC : 1;
            __IOM uint32_t USELCD : 1;
            __IOM uint32_t USELCE : 1;
            __IOM uint32_t USELCF : 1;
            __IOM uint32_t USELCG : 1;
            __IOM uint32_t USELCH : 1;
            __IOM uint32_t USILVL : 4;
            uint32_t              : 4;
        } GTUPSR_b;
    };

    union
    {
        __IOM uint32_t GTDNSR;

        struct
        {
            __IOM uint32_t DSGTRGAR : 1;
            __IOM uint32_t DSGTRGAF : 1;
            __IOM uint32_t DSGTRGBR : 1;
            __IOM uint32_t DSGTRGBF : 1;
            __IOM uint32_t DSGTRGCR : 1;
            __IOM uint32_t DSGTRGCF : 1;
            __IOM uint32_t DSGTRGDR : 1;
            __IOM uint32_t DSGTRGDF : 1;
            __IOM uint32_t DSCARBL  : 1; /*!< [8..8] GTIOCA Pin Rising Input during GTIOCB Value Low Source
                                          *   Counter Count Down Enable                                                 */
            __IOM uint32_t DSCARBH : 1;  /*!< [9..9] GTIOCA Pin Rising Input during GTIOCB Value High Source
                                          *   Counter Count Down Enable                                                 */
            __IOM uint32_t DSCAFBL : 1;  /*!< [10..10] GTIOCA Pin Falling Input during GTIOCB Value Low Source
                                          *   Counter Count Down Enable                                                 */
            __IOM uint32_t DSCAFBH : 1;  /*!< [11..11] GTIOCA Pin Falling Input during GTIOCB Value High Source
                                          *   Counter Count Down Enable                                                 */
            __IOM uint32_t DSCBRAL : 1;  /*!< [12..12] GTIOCB Pin Rising Input during GTIOCA Value Low Source
                                          *   Counter Count Down Enable                                                 */
            __IOM uint32_t DSCBRAH : 1;  /*!< [13..13] GTIOCB Pin Rising Input during GTIOCA Value High Source
                                          *   Counter Count Down Enable                                                 */
            __IOM uint32_t DSCBFAL : 1;  /*!< [14..14] GTIOCB Pin Falling Input during GTIOCA Value Low Source
                                          *   Counter Count Down Enable                                                 */
            __IOM uint32_t DSCBFAH : 1;  /*!< [15..15] GTIOCB Pin Falling Input during GTIOCA Value High Source
                                          *   Counter Count Down Enable                                                 */
            __IOM uint32_t DSELCA : 1;
            __IOM uint32_t DSELCB : 1;
            __IOM uint32_t DSELCC : 1;
            __IOM uint32_t DSELCD : 1;
            __IOM uint32_t DSELCE : 1;
            __IOM uint32_t DSELCF : 1;
            __IOM uint32_t DSELCG : 1;
            __IOM uint32_t DSELCH : 1;
            __IOM uint32_t DSILVL : 4;
            uint32_t              : 4;
        } GTDNSR_b;
    };

    union
    {
        __IOM uint32_t GTICASR;          /*!< (@ 0x00000024) General PWM Timer Input Capture Source Select
                                          *                  Register A                                                 */

        struct
        {
            __IOM uint32_t ASGTRGAR : 1;
            __IOM uint32_t ASGTRGAF : 1; /*!< [1..1] GTETRG Pin Falling Input Source GTCCRA Input Capture
                                          *   Enable                                                                    */
            __IOM uint32_t ASGTRGBR : 1;
            __IOM uint32_t ASGTRGBF : 1; /*!< [3..3] GTETRG Pin Falling Input Source GTCCRA Input Capture
                                          *   Enable                                                                    */
            __IOM uint32_t ASGTRGCR : 1;
            __IOM uint32_t ASGTRGCF : 1; /*!< [5..5] GTETRG Pin Falling Input Source GTCCRA Input Capture
                                          *   Enable                                                                    */
            __IOM uint32_t ASGTRGDR : 1;
            __IOM uint32_t ASGTRGDF : 1; /*!< [7..7] GTETRG Pin Falling Input Source GTCCRA Input Capture
                                          *   Enable                                                                    */
            __IOM uint32_t ASCARBL : 1;  /*!< [8..8] GTIOCA Pin Rising Input during GTIOCB Value Low Source
                                          *   GTCCRA Input Capture Enable                                               */
            __IOM uint32_t ASCARBH : 1;  /*!< [9..9] GTIOCA Pin Rising Input during GTIOCB Value High Source
                                          *   GTCCRA Input Capture Enable                                               */
            __IOM uint32_t ASCAFBL : 1;  /*!< [10..10] GTIOCA Pin Falling Input during GTIOCB Value Low Source
                                          *   GTCCRA Input Capture Enable                                               */
            __IOM uint32_t ASCAFBH : 1;  /*!< [11..11] GTIOCA Pin Falling Input during GTIOCB Value High Source
                                          *   GTCCRA Input Capture Enable                                               */
            __IOM uint32_t ASCBRAL : 1;  /*!< [12..12] GTIOCB Pin Rising Input during GTIOCA Value Low Source
                                          *   GTCCRA Input Capture Enable                                               */
            __IOM uint32_t ASCBRAH : 1;  /*!< [13..13] GTIOCB Pin Rising Input during GTIOCA Value High Source
                                          *   GTCCRA Input Capture Enable                                               */
            __IOM uint32_t ASCBFAL : 1;  /*!< [14..14] GTIOCB Pin Falling Input during GTIOCA Value Low Source
                                          *   GTCCRA Input Capture Enable                                               */
            __IOM uint32_t ASCBFAH : 1;  /*!< [15..15] GTIOCB Pin Falling Input during GTIOCA Value High Source
                                          *   GTCCRA Input Capture Enable                                               */
            __IOM uint32_t ASELCA : 1;
            __IOM uint32_t ASELCB : 1;
            __IOM uint32_t ASELCC : 1;
            __IOM uint32_t ASELCD : 1;
            __IOM uint32_t ASELCE : 1;
            __IOM uint32_t ASELCF : 1;
            __IOM uint32_t ASELCG : 1;
            __IOM uint32_t ASELCH : 1;
            uint32_t              : 8;
        } GTICASR_b;
    };

    union
    {
        __IOM uint32_t GTICBSR;          /*!< (@ 0x00000028) General PWM Timer Input Capture Source Select
                                          *                  Register B                                                 */

        struct
        {
            __IOM uint32_t BSGTRGAR : 1;
            __IOM uint32_t BSGTRGAF : 1; /*!< [1..1] GTETRG Pin Falling Input Source GTCCRB Input Capture
                                          *   Enable                                                                    */
            __IOM uint32_t BSGTRGBR : 1;
            __IOM uint32_t BSGTRGBF : 1; /*!< [3..3] GTETRG Pin Falling Input Source GTCCRB Input Capture
                                          *   Enable                                                                    */
            __IOM uint32_t BSGTRGCR : 1;
            __IOM uint32_t BSGTRGCF : 1; /*!< [5..5] GTETRG Pin Falling Input Source GTCCRB Input Capture
                                          *   Enable                                                                    */
            __IOM uint32_t BSGTRGDR : 1;
            __IOM uint32_t BSGTRGDF : 1; /*!< [7..7] GTETRG Pin Falling Input Source GTCCRB Input Capture
                                          *   Enable                                                                    */
            __IOM uint32_t BSCARBL : 1;  /*!< [8..8] GTIOCA Pin Rising Input during GTIOCB Value Low Source
                                          *   GTCCRB Input Capture Enable                                               */
            __IOM uint32_t BSCARBH : 1;  /*!< [9..9] GTIOCA Pin Rising Input during GTIOCB Value High Source
                                          *   GTCCRB Input Capture Enable                                               */
            __IOM uint32_t BSCAFBL : 1;  /*!< [10..10] GTIOCA Pin Falling Input during GTIOCB Value Low Source
                                          *   GTCCRB Input Capture Enable                                               */
            __IOM uint32_t BSCAFBH : 1;  /*!< [11..11] GTIOCA Pin Falling Input during GTIOCB Value High Source
                                          *   GTCCRB Input Capture Enable                                               */
            __IOM uint32_t BSCBRAL : 1;  /*!< [12..12] GTIOCB Pin Rising Input during GTIOCA Value Low Source
                                          *   GTCCRB Input Capture Enable                                               */
            __IOM uint32_t BSCBRAH : 1;  /*!< [13..13] GTIOCB Pin Rising Input during GTIOCA Value High Source
                                          *   GTCCRB Input Capture Enable                                               */
            __IOM uint32_t BSCBFAL : 1;  /*!< [14..14] GTIOCB Pin Falling Input during GTIOCA Value Low Source
                                          *   GTCCRB Input Capture Enable                                               */
            __IOM uint32_t BSCBFAH : 1;  /*!< [15..15] GTIOCB Pin Falling Input during GTIOCA Value High Source
                                          *   GTCCRB Input Capture Enable                                               */
            __IOM uint32_t BSELCA : 1;
            __IOM uint32_t BSELCB : 1;
            __IOM uint32_t BSELCC : 1;
            __IOM uint32_t BSELCD : 1;
            __IOM uint32_t BSELCE : 1;
            __IOM uint32_t BSELCF : 1;
            __IOM uint32_t BSELCG : 1;
            __IOM uint32_t BSELCH : 1;
            uint32_t              : 8;
        } GTICBSR_b;
    };

    union
    {
        __IOM uint32_t GTCR;

        struct
        {
            __IOM uint32_t CST     : 1;
            uint32_t               : 7;
            __IOM uint32_t ICDS    : 1;
            __IOM uint32_t SCGTIOC : 1;
            __IOM uint32_t SSCGRP  : 2;
            __IOM uint32_t CPSCD   : 1;
            uint32_t               : 2;
            __IOM uint32_t SSCEN   : 1;
            __IOM uint32_t MD      : 4;
            uint32_t               : 4;
            __IOM uint32_t TPCS    : 3;
            __IOM uint32_t CKEG    : 2;
            uint32_t               : 3;
        } GTCR_b;
    };

    union
    {
        __IOM uint32_t GTUDDTYC;       /*!< (@ 0x00000030) General PWM Timer Count Direction and Duty Setting
                                        *                  Register                                                   */

        struct
        {
            __IOM uint32_t UD     : 1;
            __IOM uint32_t UDF    : 1;
            uint32_t              : 14;
            __IOM uint32_t OADTY  : 2;
            __IOM uint32_t OADTYF : 1;
            __IOM uint32_t OADTYR : 1; /*!< [19..19] GTIOCA Output Value Selecting after Releasing 0 percent/100
                                        *   percent Duty Setting                                                      */
            uint32_t              : 4;
            __IOM uint32_t OBDTY  : 2;
            __IOM uint32_t OBDTYF : 1;
            __IOM uint32_t OBDTYR : 1; /*!< [27..27] GTIOCB Output Value Selecting after Releasing 0 percent/100
                                        *   percent Duty Setting                                                      */
            uint32_t : 4;
        } GTUDDTYC_b;
    };

    union
    {
        __IOM uint32_t GTIOR;

        struct
        {
            __IOM uint32_t GTIOA  : 5;
            __IOM uint32_t CPSCIR : 1; /*!< [5..5] Complementary PWM Mode Initial Output at Synchronous
                                        *   Clear Disable.(This bit is only available in GPT324 to
                                        *   GPT329. In GPT320 to GPT323, this bit is read as 0. The
                                        *   write value should be 0.)                                                 */
            __IOM uint32_t OADFLT : 1;
            __IOM uint32_t OAHLD  : 1;
            __IOM uint32_t OAE    : 1;
            __IOM uint32_t OADF   : 2;
            __IOM uint32_t OAEOCD : 1; /*!< [11..11] GTCCRA Compare Match Cycle End Output Invalidate.(This
                                        *   bit is only available in GPT324 to GPT329. In GPT320 to
                                        *   GPT323, this bit is read as 0. The write value should be
                                        *   0.)                                                                       */
            __IOM uint32_t PSYE   : 1;
            __IOM uint32_t NFAEN  : 1;
            __IOM uint32_t NFCSA  : 2;
            __IOM uint32_t GTIOB  : 5;
            uint32_t              : 1;
            __IOM uint32_t OBDFLT : 1;
            __IOM uint32_t OBHLD  : 1;
            __IOM uint32_t OBE    : 1;
            __IOM uint32_t OBDF   : 2;
            __IOM uint32_t OBEOCD : 1; /*!< [27..27] GTCCRB Compare Match Cycle End Output Invalidate.(This
                                        *   bit is only available in GPT324 to GPT329. In GPT320 to
                                        *   GPT323, this bit is read as 0. The write value should be
                                        *   0.)                                                                       */
            uint32_t             : 1;
            __IOM uint32_t NFBEN : 1;
            __IOM uint32_t NFCSB : 2;
        } GTIOR_b;
    };

    union
    {
        __IOM uint32_t GTINTAD;

        struct
        {
            uint32_t            : 8;
            __IOM uint32_t SCFA : 1;     /*!< [8..8] GTCCRn Register Compare Match/Input Capture Source Synchronous
                                          *   Clear Enable                                                              */
            __IOM uint32_t SCFB : 1;     /*!< [9..9] GTCCRn Register Compare Match/Input Capture Source Synchronous
                                          *   Clear Enable                                                              */
            __IOM uint32_t SCFC : 1;     /*!< [10..10] GTCCRn Register Compare Match/Input Capture Source
                                          *   Synchronous Clear Enable                                                  */
            __IOM uint32_t SCFD : 1;     /*!< [11..11] GTCCRn Register Compare Match/Input Capture Source
                                          *   Synchronous Clear Enable                                                  */
            __IOM uint32_t SCFE : 1;     /*!< [12..12] GTCCRn Register Compare Match/Input Capture Source
                                          *   Synchronous Clear Enable                                                  */
            __IOM uint32_t SCFF : 1;     /*!< [13..13] GTCCRn Register Compare Match/Input Capture Source
                                          *   Synchronous Clear Enable                                                  */
            __IOM uint32_t SCFPO    : 1;
            __IOM uint32_t SCFPU    : 1;
            __IOM uint32_t ADTRAUEN : 1; /*!< [16..16] GTADTRn Register Compare Match (Up-Counting) A/D Conversion
                                          *   Start Request Enable                                                      */
            __IOM uint32_t ADTRADEN : 1; /*!< [17..17] GTADTRn Register Compare Match (Down-Counting) A/D
                                          *   Conversion Start Request Enable                                           */
            __IOM uint32_t ADTRBUEN : 1; /*!< [18..18] GTADTRn Register Compare Match (Up-Counting) A/D Conversion
                                          *   Start Request Enable                                                      */
            __IOM uint32_t ADTRBDEN : 1; /*!< [19..19] GTADTRn Register Compare Match (Down-Counting) A/D
                                          *   Conversion Start Request Enable                                           */
            uint32_t               : 4;
            __IOM uint32_t GRP     : 2;
            uint32_t               : 2;
            __IOM uint32_t GRPDTE  : 1;
            __IOM uint32_t GRPABH  : 1;
            __IOM uint32_t GRPABL  : 1;
            __IOM uint32_t GTINTPC : 1;
        } GTINTAD_b;
    };

    union
    {
        __IOM uint32_t GTST;

        struct
        {
            __IOM uint32_t TCFA  : 1;
            __IOM uint32_t TCFB  : 1;
            __IOM uint32_t TCFC  : 1;
            __IOM uint32_t TCFD  : 1;
            __IOM uint32_t TCFE  : 1;
            __IOM uint32_t TCFF  : 1;
            __IOM uint32_t TCFPO : 1;
            __IOM uint32_t TCFPU : 1;
            __IM uint32_t  ITCNT : 3;   /*!< [10..8] GTCIV/GTCIU Interrupt Skipping Count Counter(Counter
                                         *   for counting the number of times a timer interrupt has
                                         *   been skipped.)                                                            */
            uint32_t               : 4;
            __IM uint32_t  TUCF    : 1;
            __IOM uint32_t ADTRAUF : 1; /*!< [16..16] GTADTRA Compare Match (Up-Counting) A/D Converter Start
                                         *   Request Interrupt Enable                                                  */
            __IOM uint32_t ADTRADF : 1; /*!< [17..17] GTADTRA Compare Match(Down-Counting) A/D Convertor
                                         *   Start Request Flag                                                        */
            __IOM uint32_t ADTRBUF : 1; /*!< [18..18] GTADTRB Compare Match(Up-Counting) A/D Convertor Start
                                         *   Request Flag                                                              */
            __IOM uint32_t ADTRBDF : 1; /*!< [19..19] GTADTRB Compare Match(Down-Counting) A/D Convertor
                                         *   Start Request Flag                                                        */
            uint32_t             : 4;
            __IM uint32_t ODF    : 1;
            uint32_t             : 3;
            __IM uint32_t  DTEF  : 1;
            __IM uint32_t  OABHF : 1;
            __IM uint32_t  OABLF : 1;
            __IOM uint32_t PCF   : 1;
        } GTST_b;
    };

    union
    {
        __IOM uint32_t GTBER;

        struct
        {
            __IOM uint32_t BD0     : 1;
            __IOM uint32_t BD1     : 1;
            __IOM uint32_t BD2     : 1;
            __IOM uint32_t BD3     : 1;
            uint32_t               : 4;
            __IOM uint32_t DBRTECA : 1;
            uint32_t               : 1;
            __IOM uint32_t DBRTECB : 1;
            uint32_t               : 5;
            __IOM uint32_t CCRA    : 2;
            __IOM uint32_t CCRB    : 2;
            __IOM uint32_t PR      : 2;
            __OM uint32_t  CCRSWT  : 1; /*!< [22..22] GTCCRA and GTCCRB Forcible Buffer OperationThis bit
                                         *   is read as 0.                                                             */
            uint32_t             : 1;
            __IOM uint32_t ADTTA : 2;   /*!< [25..24] GTADTRA Buffer Transfer Timing Select in the Triangle
                                         *   wavesNOTE: In the Saw waves, values other than 0 0: Transfer
                                         *   at an underflow (in down-counting) or overflow (in up-counting)
                                         *   is performed.                                                             */
            __IOM uint32_t ADTDA : 1;
            uint32_t             : 1;
            __IOM uint32_t ADTTB : 2;   /*!< [29..28] GTADTRB Buffer Transfer Timing Select in the Triangle
                                         *   wavesNOTE: In the Saw waves, values other than 0 0: Transfer
                                         *   at an underflow (in down-counting) or overflow (in up-counting)
                                         *   is performed.                                                             */
            __IOM uint32_t ADTDB : 1;
            uint32_t             : 1;
        } GTBER_b;
    };

    union
    {
        __IOM uint32_t GTITC;          /*!< (@ 0x00000044) General PWM Timer Interrupt and A/D Converter
                                        *                  Start Request Skipping Setting Register                    */

        struct
        {
            __IOM uint32_t ITLA  : 1;
            __IOM uint32_t ITLB  : 1;
            __IOM uint32_t ITLC  : 1;
            __IOM uint32_t ITLD  : 1;
            __IOM uint32_t ITLE  : 1;
            __IOM uint32_t ITLF  : 1;
            __IOM uint32_t IVTC  : 2;
            __IOM uint32_t IVTT  : 3;
            uint32_t             : 1;
            __IOM uint32_t ADTAL : 1;
            uint32_t             : 1;
            __IOM uint32_t ADTBL : 1;
            uint32_t             : 17;
        } GTITC_b;
    };

    union
    {
        __IOM uint32_t GTCNT;

        struct
        {
            __IOM uint32_t GTCNT : 32;
        } GTCNT_b;
    };

    union
    {
        __IOM uint32_t GTCCR[6];

        struct
        {
            __IOM uint32_t GTCCR : 32;
        } GTCCR_b[6];
    };

    union
    {
        __IOM uint32_t GTPR;

        struct
        {
            __IOM uint32_t GTPR : 32;
        } GTPR_b;
    };

    union
    {
        __IOM uint32_t GTPBR;

        struct
        {
            __IOM uint32_t GTPBR : 32;
        } GTPBR_b;
    };

    union
    {
        __IOM uint32_t GTPDBR;          /*!< (@ 0x0000006C) General PWM Timer Cycle Setting Double-Buffer
                                         *                  Register                                                   */

        struct
        {
            __IOM uint32_t GTPDBR : 32;
        } GTPDBR_b;
    };

    union
    {
        __IOM uint32_t GTADTRA;

        struct
        {
            __IOM uint32_t GTADTRA : 32;
        } GTADTRA_b;
    };

    union
    {
        __IOM uint32_t GTADTBRA;          /*!< (@ 0x00000074) A/D Converter Start Request Timing Buffer Register
                                           *                  A                                                          */

        struct
        {
            __IOM uint32_t GTADTBRA : 32;
        } GTADTBRA_b;
    };

    union
    {
        __IOM uint32_t GTADTDBRA;          /*!< (@ 0x00000078) A/D Converter Start Request Timing Double-Buffer
                                            *                  Register A                                                 */

        struct
        {
            __IOM uint32_t GTADTDBRA : 32; /*!< [31..0] A/D Converter Start Request Timing Double-Buffer Register
                                            *   A                                                                         */
        } GTADTDBRA_b;
    };

    union
    {
        __IOM uint32_t GTADTRB;

        struct
        {
            __IOM uint32_t GTADTRB : 32;
        } GTADTRB_b;
    };

    union
    {
        __IOM uint32_t GTADTBRB;          /*!< (@ 0x00000080) A/D Converter Start Request Timing Buffer Register
                                           *                  B                                                          */

        struct
        {
            __IOM uint32_t GTADTBRB : 32;
        } GTADTBRB_b;
    };

    union
    {
        __IOM uint32_t GTADTDBRB;          /*!< (@ 0x00000084) A/D Converter Start Request Timing Double-Buffer
                                            *                  Register B                                                 */

        struct
        {
            __IOM uint32_t GTADTDBRB : 32; /*!< [31..0] A/D Converter Start Request Timing Double-Buffer Register
                                            *   B                                                                         */
        } GTADTDBRB_b;
    };

    union
    {
        __IOM uint32_t GTDTCR;

        struct
        {
            __IOM uint32_t TDE   : 1;
            uint32_t             : 3;
            __IOM uint32_t TDBUE : 1;
            __IOM uint32_t TDBDE : 1;
            uint32_t             : 2;
            __IOM uint32_t TDFER : 1;
            uint32_t             : 23;
        } GTDTCR_b;
    };

    union
    {
        __IOM uint32_t GTDVU;

        struct
        {
            __IOM uint32_t GTDVU : 32;
        } GTDVU_b;
    };

    union
    {
        __IOM uint32_t GTDVD;

        struct
        {
            __IOM uint32_t GTDVD : 32;
        } GTDVD_b;
    };

    union
    {
        __IOM uint32_t GTDBU;

        struct
        {
            __IOM uint32_t GTDVU : 32;
        } GTDBU_b;
    };

    union
    {
        __IOM uint32_t GTDBD;

        struct
        {
            __IOM uint32_t GTDBD : 32;
        } GTDBD_b;
    };

    union
    {
        __IM uint32_t GTSOS;           /*!< (@ 0x0000009C) General PWM Timer Output Protection Function
                                        *                  Status Register                                            */

        struct
        {
            __IM uint32_t SOS : 2;
            uint32_t          : 30;
        } GTSOS_b;
    };

    union
    {
        __IOM uint32_t GTSOTR;         /*!< (@ 0x000000A0) General PWM Timer Output Protection Function
                                        *                  Temporary Release Register                                 */

        struct
        {
            __IOM uint32_t SOTR : 1;
            uint32_t            : 31;
        } GTSOTR_b;
    };

    union
    {
        __IOM uint32_t GTADSMR;         /*!< (@ 0x000000A4) General PWM Timer A/D Conversion Start Request
                                         *                  Signal Monitoring Register                                 */

        struct
        {
            __IOM uint32_t ADSMS0  : 2;
            uint32_t               : 6;
            __IOM uint32_t ADSMEN0 : 1; /*!< [8..8] A/D Conversion Start Request Signal Monitor 0 Output
                                         *   Enabling                                                                  */
            uint32_t               : 7;
            __IOM uint32_t ADSMS1  : 2;
            uint32_t               : 6;
            __IOM uint32_t ADSMEN1 : 1; /*!< [24..24] A/D Conversion Start Request Signal Monitor 1 Output
                                         *   Enabling                                                                  */
            uint32_t : 7;
        } GTADSMR_b;
    };

    union
    {
        __IOM uint32_t GTEITC;            /*!< (@ 0x000000A8) General PWM Timer Extended Interrupt Skipping
                                           *                  Counter Control Register                                   */

        struct
        {
            __IOM uint32_t EIVTC1  : 2;
            uint32_t               : 2;
            __IOM uint32_t EIVTT1  : 4;
            uint32_t               : 4;
            __IM uint32_t  EITCNT1 : 4;
            __IOM uint32_t EIVTC2  : 2;   /*!< [17..16] Extended Interrupt Skipping Counter 2 Count Source
                                           *   select                                                                    */
            uint32_t                 : 2;
            __IOM uint32_t EIVTT2    : 4;
            __IOM uint32_t EITCNT2IV : 4;
            __IM uint32_t  EITCNT2   : 4;
        } GTEITC_b;
    };

    union
    {
        __IOM uint32_t GTEITLI1;       /*!< (@ 0x000000AC) General PWM Timer Extended Interrupt Skipping
                                        *                  Setting Register 1                                         */

        struct
        {
            __IOM uint32_t EITLA : 3;  /*!< [2..0] GTCCRA Register Compare Match/Input Capture Interrupt
                                        *   Extended Skipping Function Select                                         */
            uint32_t             : 1;
            __IOM uint32_t EITLB : 3;  /*!< [6..4] GTCCRB Register Compare Match/Input Capture Interrupt
                                        *   Extended Skipping Function Select                                         */
            uint32_t             : 1;
            __IOM uint32_t EITLC : 3;  /*!< [10..8] GTCCRC Register Compare Match Interrupt Extended Skipping
                                        *   Function Select                                                           */
            uint32_t             : 1;
            __IOM uint32_t EITLD : 3;  /*!< [14..12] GTCCRD Register Compare Match Interrupt Extended Skipping
                                        *   Function Select                                                           */
            uint32_t             : 1;
            __IOM uint32_t EITLE : 3;  /*!< [18..16] GTCCRE Register Compare Match Interrupt Extended Skipping
                                        *   Function Select                                                           */
            uint32_t             : 1;
            __IOM uint32_t EITLF : 3;  /*!< [22..20] GTCCRF Register Compare Match Interrupt Extended Skipping
                                        *   Function Select                                                           */
            uint32_t             : 1;
            __IOM uint32_t EITLV : 3;
            uint32_t             : 1;
            __IOM uint32_t EITLU : 3;
            uint32_t             : 1;
        } GTEITLI1_b;
    };

    union
    {
        __IOM uint32_t GTEITLI2;       /*!< (@ 0x000000B0) General PWM Timer Extended Interrupt Skipping
                                        *                  Setting Register 2                                         */

        struct
        {
            __IOM uint32_t EADTAL : 3; /*!< [2..0] GTADTRA Register A/D Conversion Start Request Extended
                                        *   Skipping Function Select                                                  */
            uint32_t              : 1;
            __IOM uint32_t EADTBL : 3; /*!< [6..4] GTADTRB Register A/D Conversion Start Request Extended
                                        *   Skipping Function Select                                                  */
            uint32_t : 25;
        } GTEITLI2_b;
    };

    union
    {
        __IOM uint32_t GTEITLB;         /*!< (@ 0x000000B4) General PWM Timer Extended Buffer Transfer Skipping
                                         *                  Setting Register                                           */

        struct
        {
            __IOM uint32_t EBTLCA : 3;  /*!< [2..0] GTCCRA Register Buffer Transfer Extended Skipping Function
                                         *   Select                                                                    */
            uint32_t              : 1;
            __IOM uint32_t EBTLCB : 3;  /*!< [6..4] GTCCRB Register Buffer Transfer Extended Skipping Function
                                         *   Select                                                                    */
            uint32_t              : 1;
            __IOM uint32_t EBTLPR : 3;  /*!< [10..8] GTPR Register Buffer Transfer Extended Skipping Function
                                         *   Select                                                                    */
            uint32_t               : 5;
            __IOM uint32_t EBTLADA : 3; /*!< [18..16] GTADTRA Register Buffer Transfer Extended Skipping
                                         *   Function Select                                                           */
            uint32_t               : 1;
            __IOM uint32_t EBTLADB : 3; /*!< [22..20] GTADTRB Register Buffer Transfer Extended Skipping
                                         *   Function Select                                                           */
            uint32_t               : 1;
            __IOM uint32_t EBTLDVU : 3; /*!< [26..24] GTDVU Register Buffer Transfer Extended Skipping Function
                                         *   Select                                                                    */
            uint32_t               : 1;
            __IOM uint32_t EBTLDVD : 3; /*!< [30..28] GTDVD Register Buffer Transfer Extended Skipping Function
                                         *   Select                                                                    */
            uint32_t : 1;
        } GTEITLB_b;
    };

    union
    {
        __IOM uint32_t GTICLF;           /*!< (@ 0x000000B8) General PWM Timer Inter Channel Logical Operation
                                          *                  Function Setting Register                                  */

        struct
        {
            __IOM uint32_t ICLFA    : 3;
            uint32_t                : 1;
            __IOM uint32_t ICLFSELC : 6;
            uint32_t                : 6;
            __IOM uint32_t ICLFB    : 3;
            uint32_t                : 1;
            __IOM uint32_t ICLFSELD : 6;
            uint32_t                : 6;
        } GTICLF_b;
    };

    union
    {
        __IOM uint32_t GTPC;

        struct
        {
            __IOM uint32_t PCEN : 1;
            uint32_t            : 7;
            __IOM uint32_t ASTP : 1;
            uint32_t            : 7;
            __IOM uint32_t PCNT : 12;
            uint32_t            : 4;
        } GTPC_b;
    };
    __IM uint32_t RESERVED[4];

    union
    {
        __IOM uint32_t GTSECSR;         /*!< (@ 0x000000D0) General PWM Timer Operation Enable Bit Simultaneous
                                         *                  Control Channel Select Register                            */

        struct
        {
            __IOM uint32_t SECSEL0 : 1; /*!< [0..0] Channel 0 Operation Enable Bit Simultaneous Control Channel
                                         *   Select                                                                    */
            __IOM uint32_t SECSEL1 : 1; /*!< [1..1] Channel 1 Operation Enable Bit Simultaneous Control Channel
                                         *   Select                                                                    */
            __IOM uint32_t SECSEL2 : 1; /*!< [2..2] Channel 2 Operation Enable Bit Simultaneous Control Channel
                                         *   Select                                                                    */
            __IOM uint32_t SECSEL3 : 1; /*!< [3..3] Channel 3 Operation Enable Bit Simultaneous Control Channel
                                         *   Select                                                                    */
            __IOM uint32_t SECSEL4 : 1; /*!< [4..4] Channel 4 Operation Enable Bit Simultaneous Control Channel
                                         *   Select                                                                    */
            __IOM uint32_t SECSEL5 : 1; /*!< [5..5] Channel 5 Operation Enable Bit Simultaneous Control Channel
                                         *   Select                                                                    */
            __IOM uint32_t SECSEL6 : 1; /*!< [6..6] Channel 6 Operation Enable Bit Simultaneous Control Channel
                                         *   Select                                                                    */
            __IOM uint32_t SECSEL7 : 1; /*!< [7..7] Channel 7 Operation Enable Bit Simultaneous Control Channel
                                         *   Select                                                                    */
            __IOM uint32_t SECSEL8 : 1; /*!< [8..8] Channel 8 Operation Enable Bit Simultaneous Control Channel
                                         *   Select                                                                    */
            __IOM uint32_t SECSEL9 : 1; /*!< [9..9] Channel 9 Operation Enable Bit Simultaneous Control Channel
                                         *   Select                                                                    */
            uint32_t : 22;
        } GTSECSR_b;
    };

    union
    {
        __IOM uint32_t GTSECR;         /*!< (@ 0x000000D4) General PWM Timer Operation Enable Bit Simultaneous
                                        *                  Control Register                                           */

        struct
        {
            __IOM uint32_t SBDCE : 1;
            __IOM uint32_t SBDPE : 1;
            __IOM uint32_t SBDAE : 1;
            __IOM uint32_t SBDDE : 1;
            uint32_t             : 4;
            __IOM uint32_t SBDCD : 1;
            __IOM uint32_t SBDPD : 1;
            __IOM uint32_t SBDAD : 1;
            __IOM uint32_t SBDDD : 1;
            uint32_t             : 4;
            __IOM uint32_t SPCE  : 1;
            __IOM uint32_t SSCE  : 1;
            uint32_t             : 6;
            __IOM uint32_t SPCD  : 1;
            __IOM uint32_t SSCD  : 1;
            uint32_t             : 6;
        } GTSECR_b;
    };
    __IM uint32_t RESERVED1[2];

    union
    {
        __IOM uint32_t GTBER2;

        struct
        {
            __IOM uint32_t CCTCA : 1;  /*!< [0..0] Counter Clear Source GTCCRA Register Buffer Transfer
                                        *   Disable                                                                   */
            __IOM uint32_t CCTCB : 1;  /*!< [1..1] Counter Clear Source GTCCRB Register Buffer Transfer
                                        *   Disable                                                                   */
            __IOM uint32_t CCTPR  : 1;
            __IOM uint32_t CCTADA : 1; /*!< [3..3] Counter Clear Source GTADTRA Register Buffer Transfer
                                        *   Disable                                                                   */
            __IOM uint32_t CCTADB : 1; /*!< [4..4] Counter Clear Source GTADTRB Register Buffer Transfer
                                        *   Disable                                                                   */
            __IOM uint32_t CCTDV : 1;  /*!< [5..5] Counter Clear Source GTDVU/GTDVD Register Buffer Transfer
                                        *   Disable                                                                   */
            uint32_t             : 2;
            __IOM uint32_t CMTCA : 2;  /*!< [9..8] Compare Match Source GTCCRA Register Buffer Transfer
                                        *   Enable                                                                    */
            __IOM uint32_t CMTCB : 2;  /*!< [11..10] Compare Match Source GTCCRB Register Buffer Transfer
                                        *   Enable                                                                    */
            uint32_t              : 1;
            __IOM uint32_t CMTADA : 1; /*!< [13..13] Compare Match Source GTADTRA Register Buffer Transfer
                                        *   Enable                                                                    */
            __IOM uint32_t CMTADB : 1; /*!< [14..14] Compare Match Source GTADTRA Register Buffer Transfer
                                        *   Enable                                                                    */
            uint32_t             : 1;
            __IOM uint32_t CPTCA : 1;  /*!< [16..16] Overflow/Underflow Source GTCCRA Register Buffer Transfer
                                        *   Disable                                                                   */
            __IOM uint32_t CPTCB : 1;  /*!< [17..17] Overflow/Underflow Source GTCCRB Register Buffer Transfer
                                        *   Disable                                                                   */
            __IOM uint32_t CPTPR : 1;  /*!< [18..18] Overflow/Underflow Source GTPR Register Buffer Transfer
                                        *   Disable                                                                   */
            __IOM uint32_t CPTADA : 1; /*!< [19..19] Overflow/Underflow Source GTADTRA Register Buffer Transfer
                                        *   Disable                                                                   */
            __IOM uint32_t CPTADB : 1; /*!< [20..20] Overflow/Underflow Source GTADTRB Register Buffer Transfer
                                        *   Disable                                                                   */
            __IOM uint32_t CPTDV : 1;  /*!< [21..21] Overflow/Underflow Source GTDVU/GTDVD Register Buffer
                                        *   Transfer Disable                                                          */
            uint32_t             : 2;
            __IOM uint32_t CP3DB : 1;
            __IOM uint32_t CPBTD : 1;
            __IOM uint32_t OLTTA : 2;
            __IOM uint32_t OLTTB : 2;
            uint32_t             : 2;
        } GTBER2_b;
    };

    union
    {
        __IOM uint32_t GTOLBR;

        struct
        {
            __IOM uint32_t GTIOAB : 5;
            uint32_t              : 11;
            __IOM uint32_t GTIOBB : 5;
            uint32_t              : 11;
        } GTOLBR_b;
    };
    __IM uint32_t RESERVED2;

    union
    {
        __IOM uint32_t GTICCR;         /*!< (@ 0x000000EC) General PWM Timer Inter Channel Cooperation Input
                                        *                  Capture Control Register                                   */

        struct
        {
            __IOM uint32_t ICAFA : 1;  /*!< [0..0] Forwarding GTCCRA register Compare Match/Input Capture
                                        *   to Other Channel GTCCRA Input Capture Source Enable                       */
            __IOM uint32_t ICAFB : 1;  /*!< [1..1] Forwarding GTCCRB register Compare Match/Input Capture
                                        *   to Other Channel GTCCRA Input Capture Source Enable                       */
            __IOM uint32_t ICAFC : 1;  /*!< [2..2] Forwarding GTCCRC register Compare Match Capture to Other
                                        *   Channel GTCCRA Input Capture Source Enable                                */
            __IOM uint32_t ICAFD : 1;  /*!< [3..3] Forwarding GTCCRD register Compare Match Capture to Other
                                        *   Channel GTCCRA Input Capture Source Enable                                */
            __IOM uint32_t ICAFE : 1;  /*!< [4..4] Forwarding GTCCRE register Compare Match Capture to Other
                                        *   Channel GTCCRA Input Capture Source Enable                                */
            __IOM uint32_t ICAFF : 1;  /*!< [5..5] Forwarding GTCCRF register Compare Match Capture to Other
                                        *   Channel GTCCRA Input Capture Source Enable                                */
            __IOM uint32_t ICAFPO : 1; /*!< [6..6] Forwarding Overflow to Other Channel GTCCRA Input Capture
                                        *   Source Enable                                                             */
            __IOM uint32_t ICAFPU : 1; /*!< [7..7] Forwarding Underflow to Other Channel GTCCRA Input Capture
                                        *   Source Enable                                                             */
            __IOM uint32_t ICACLK : 1; /*!< [8..8] Forwarding Count Clock to Other Channel GTCCRA Input
                                        *   Capture Source Enable                                                     */
            uint32_t              : 5;
            __IOM uint32_t ICAGRP : 2;
            __IOM uint32_t ICBFA  : 1; /*!< [16..16] Forwarding GTCCRA register Compare Match/Input Capture
                                        *   to Other Channel GTCCRB Input Capture Source Enable                       */
            __IOM uint32_t ICBFB : 1;  /*!< [17..17] Forwarding GTCCRB register Compare Match/Input Capture
                                        *   to Other Channel GTCCRB Input Capture Source Enable                       */
            __IOM uint32_t ICBFC : 1;  /*!< [18..18] Forwarding GTCCRC register Compare Match Capture to
                                        *   Other Channel GTCCRB Input Capture Source Enable                          */
            __IOM uint32_t ICBFD : 1;  /*!< [19..19] Forwarding GTCCRD register Compare Match Capture to
                                        *   Other Channel GTCCRB Input Capture Source Enable                          */
            __IOM uint32_t ICBFE : 1;  /*!< [20..20] Forwarding GTCCRE register Compare Match Capture to
                                        *   Other Channel GTCCRb Input Capture Source Enable                          */
            __IOM uint32_t ICBFF : 1;  /*!< [21..21] Forwarding GTCCRF register Compare Match Capture to
                                        *   Other Channel GTCCRB Input Capture Source Enable                          */
            __IOM uint32_t ICBFPO : 1; /*!< [22..22] Forwarding Overflow to Other Channel GTCCRB Input Capture
                                        *   Source Enable                                                             */
            __IOM uint32_t ICBFPU : 1; /*!< [23..23] Forwarding Underflow to Other Channel GTCCRB Input
                                        *   Capture Source Enable                                                     */
            __IOM uint32_t ICBCLK : 1; /*!< [24..24] Forwarding Count Clock to Other Channel GTCCRB Input
                                        *   Capture Source Enable                                                     */
            uint32_t              : 5;
            __IOM uint32_t ICBGRP : 2;
        } GTICCR_b;
    };
} R_GPT0_Type;

/* =========================================================================================================================== */
/* ================                                         R_GPT_ODC                                         ================ */
/* =========================================================================================================================== */

/**
 * @brief PWM Delay Generation Circuit (R_GPT_ODC)
 */

typedef struct
{
    union
    {
        __IOM uint16_t GTDLYCR1;

        struct
        {
            __IOM uint16_t DLLEN  : 1;
            __IOM uint16_t DLYRST : 1;
            uint16_t              : 6;
            __IOM uint16_t FRANGE : 1;
            uint16_t              : 7;
        } GTDLYCR1_b;
    };

    union
    {
        __IOM uint16_t GTDLYCR2;

        struct
        {
            __IOM uint16_t DLYBS0   : 1;
            __IOM uint16_t DLYBS1   : 1;
            __IOM uint16_t DLYBS2   : 1;
            __IOM uint16_t DLYBS3   : 1;
            uint16_t                : 4;
            __IOM uint16_t DLYEN0   : 1;
            __IOM uint16_t DLYEN1   : 1;
            __IOM uint16_t DLYEN2   : 1;
            __IOM uint16_t DLYEN3   : 1;
            __IOM uint16_t DLYDENB0 : 1;
            uint16_t                : 3;
        } GTDLYCR2_b;
    };
    __IM uint16_t               RESERVED[10];
    __IOM R_GPT_ODC_GTDLYR_Type GTDLYR[4];
    __IOM R_GPT_ODC_GTDLYR_Type GTDLYF[4];
} R_GPT_ODC_Type;

/* =========================================================================================================================== */
/* ================                                         R_GPT_OPS                                         ================ */
/* =========================================================================================================================== */

/**
 * @brief Output Phase Switching for GPT (R_GPT_OPS)
 */

typedef struct
{
    union
    {
        __IOM uint32_t OPSCR;

        struct
        {
            __IOM uint32_t UF : 1;     /*!< [0..0] Input Phase Soft Setting WFThis bit sets the input phase
                                        *   by the software settings.This bit setting is valid when
                                        *   the OPSCR.FB bit = 1.                                                     */
            __IOM uint32_t VF : 1;     /*!< [1..1] Input Phase Soft Setting VFThis bit sets the input phase
                                        *   by the software settings.This bit setting is valid when
                                        *   the OPSCR.FB bit = 1.                                                     */
            __IOM uint32_t WF : 1;     /*!< [2..2] Input Phase Soft Setting UFThis bit sets the input phase
                                        *   by the software settings.This bit setting is valid when
                                        *   the OPSCR.FB bit = 1.                                                     */
            uint32_t        : 1;
            __IM uint32_t U : 1;       /*!< [4..4] Input U-Phase MonitorThis bit monitors the state of the
                                        *   input phase.OPSCR.FB=0:External input monitoring by PCLKOPSCR.FB=1:Softwa
                                        *   e settings (UF/VF/WF)                                                     */
            __IM uint32_t V : 1;       /*!< [5..5] Input V-Phase MonitorThis bit monitors the state of the
                                        *   input phase.OPSCR.FB=0:External input monitoring by PCLKOPSCR.FB=1:Softwa
                                        *   e settings (UF/VF/WF)                                                     */
            __IM uint32_t W : 1;       /*!< [6..6] Input W-Phase MonitorThis bit monitors the state of the
                                        *   input phase.OPSCR.FB=0:External input monitoring by PCLKOPSCR.FB=1:Softwa
                                        *   e settings (UF/VF/WF)                                                     */
            uint32_t          : 1;
            __IOM uint32_t EN : 1;
            uint32_t          : 7;
            __IOM uint32_t FB : 1;     /*!< [16..16] External Feedback Signal EnableThis bit selects the
                                        *   input phase from the software settings and external input.                */
            __IOM uint32_t P     : 1;
            __IOM uint32_t N     : 1;
            __IOM uint32_t INV   : 1;
            __IOM uint32_t RV    : 1;
            __IOM uint32_t ALIGN : 1;
            uint32_t             : 2;
            __IOM uint32_t GRP   : 2;
            __IOM uint32_t GODF  : 1;
            uint32_t             : 2;
            __IOM uint32_t NFEN  : 1;
            __IOM uint32_t NFCS  : 2;  /*!< [31..30] External Input Noise Filter Clock selectionNoise filter
                                        *   sampling clock setting of the external input.                             */
        } OPSCR_b;
    };
} R_GPT_OPS_Type;

/* =========================================================================================================================== */
/* ================                                        R_GPT_POEG0                                        ================ */
/* =========================================================================================================================== */

/**
 * @brief Port Output Enable for GPT (R_GPT_POEG0)
 */

typedef struct
{
    union
    {
        __IOM uint32_t POEGG;

        struct
        {
            __IOM uint32_t PIDF  : 1;
            __IOM uint32_t IOCF  : 1;
            __IOM uint32_t OSTPF : 1;
            __IOM uint32_t SSF   : 1;
            __IOM uint32_t PIDE  : 1;   /*!< [4..4] Port Input Detection Enable. Note: Can be modified only
                                         *   once after a reset.                                                       */
            __IOM uint32_t IOCE : 1;    /*!< [5..5] Enable for GPT Output-Disable Request. Note: Can be modified
                                         *   only once after a reset.                                                  */
            __IOM uint32_t OSTPE : 1;   /*!< [6..6] Oscillation Stop Detection Enable. Note: Can be modified
                                         *   only once after a reset.                                                  */
            uint32_t             : 1;
            __IOM uint32_t CDRE0 : 1;   /*!< [8..8] Comparator Disable Request Enable. Note: Can be modified
                                         *   only once after a reset.                                                  */
            __IOM uint32_t CDRE1 : 1;   /*!< [9..9] Comparator Disable Request Enable. Note: Can be modified
                                         *   only once after a reset.                                                  */
            __IOM uint32_t CDRE2 : 1;   /*!< [10..10] Comparator Disable Request Enable. Note: Can be modified
                                         *   only once after a reset.                                                  */
            __IOM uint32_t CDRE3 : 1;   /*!< [11..11] Comparator Disable Request Enable. Note: Can be modified
                                         *   only once after a reset.                                                  */
            __IOM uint32_t CDRE4 : 1;   /*!< [12..12] Comparator Disable Request Enable. Note: Can be modified
                                         *   only once after a reset.                                                  */
            __IOM uint32_t CDRE5 : 1;   /*!< [13..13] Comparator Disable Request Enable. Note: Can be modified
                                         *   only once after a reset.                                                  */
            uint32_t               : 2;
            __IM uint32_t ST       : 1;
            uint32_t               : 7;
            __IOM uint32_t DERR0ST : 1;
            __IOM uint32_t DERR1ST : 1;
            __IOM uint32_t DERR0E  : 1;
            __IOM uint32_t DERR1E  : 1;
            __IOM uint32_t INV     : 1;
            __IOM uint32_t NFEN    : 1;
            __IOM uint32_t NFCS    : 2;
        } POEGG_b;
    };
    __IM uint32_t RESERVED[15];

    union
    {
        __IOM uint16_t GTONCWP;        /*!< (@ 0x00000040) GPT Output Stopping Control Group Write Protection
                                        *                  Register                                                   */

        struct
        {
            __IOM uint16_t WP    : 1;
            uint16_t             : 7;
            __IOM uint16_t PRKEY : 8;
        } GTONCWP_b;
    };
    __IM uint16_t RESERVED1;

    union
    {
        __IOM uint16_t GTONCCR;        /*!< (@ 0x00000044) GPT Output Stopping Control Group Controlling
                                        *                  Register                                                   */

        struct
        {
            __IOM uint16_t NE  : 1;
            uint16_t           : 3;
            __IOM uint16_t NFS : 4;
            __IOM uint16_t NFV : 1;
            uint16_t           : 7;
        } GTONCCR_b;
    };
    __IM uint16_t RESERVED2;
} R_GPT_POEG0_Type;

/* =========================================================================================================================== */
/* ================                                           R_ICU                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Interrupt Controller Unit (R_ICU)
 */

typedef struct
{
    union
    {
        __IOM uint8_t IRQCR[16];

        struct
        {
            __IOM uint8_t IRQMD   : 2;
            uint8_t               : 2;
            __IOM uint8_t FCLKSEL : 2;
            uint8_t               : 1;
            __IOM uint8_t FLTEN   : 1;
        } IRQCR_b[16];
    };
    __IM uint32_t RESERVED[60];

    union
    {
        __IOM uint8_t NMICR;

        struct
        {
            __IOM uint8_t NMIMD    : 1;
            uint8_t                : 3;
            __IOM uint8_t NFCLKSEL : 2;
            uint8_t                : 1;
            __IOM uint8_t NFLTEN   : 1;
        } NMICR_b;
    };
    __IM uint8_t  RESERVED1;
    __IM uint16_t RESERVED2;
    __IM uint32_t RESERVED3[7];

    union
    {
        __IOM uint16_t NMIER;

        struct
        {
            __IOM uint16_t IWDTEN  : 1;
            __IOM uint16_t WDTEN   : 1;
            __IOM uint16_t LVD1EN  : 1;
            __IOM uint16_t LVD2EN  : 1;
            __IOM uint16_t VBATTEN : 1;
            uint16_t               : 1;
            __IOM uint16_t OSTEN   : 1;
            __IOM uint16_t NMIEN   : 1;
            __IOM uint16_t RPEEN   : 1;
            __IOM uint16_t RECCEN  : 1;
            __IOM uint16_t BUSSEN  : 1;
            __IOM uint16_t BUSMEN  : 1;
            __IOM uint16_t SPEEN   : 1;
            __IOM uint16_t TZFEN   : 1;
            uint16_t               : 1;
            __IOM uint16_t CPEEN   : 1;
        } NMIER_b;
    };
    __IM uint16_t RESERVED4;
    __IM uint32_t RESERVED5[3];

    union
    {
        __IOM uint16_t NMICLR;

        struct
        {
            __OM uint16_t IWDTCLR  : 1;
            __OM uint16_t WDTCLR   : 1;
            __OM uint16_t LVD1CLR  : 1;
            __OM uint16_t LVD2CLR  : 1;
            __OM uint16_t VBATTCLR : 1;
            uint16_t               : 1;
            __OM uint16_t  OSTCLR  : 1;
            __OM uint16_t  NMICLR  : 1;
            __OM uint16_t  RPECLR  : 1;
            __OM uint16_t  RECCCLR : 1;
            __OM uint16_t  BUSSCLR : 1;
            __OM uint16_t  BUSMCLR : 1;
            __OM uint16_t  SPECLR  : 1;
            __IOM uint16_t TZFCLR  : 1;
            uint16_t               : 1;
            __IOM uint16_t CPECLR  : 1;
        } NMICLR_b;
    };
    __IM uint16_t RESERVED6;
    __IM uint32_t RESERVED7[3];

    union
    {
        __IM uint16_t NMISR;

        struct
        {
            __IM uint16_t IWDTST  : 1;
            __IM uint16_t WDTST   : 1;
            __IM uint16_t LVD1ST  : 1;
            __IM uint16_t LVD2ST  : 1;
            __IM uint16_t VBATTST : 1;
            uint16_t              : 1;
            __IM uint16_t OSTST   : 1;
            __IM uint16_t NMIST   : 1;
            __IM uint16_t RPEST   : 1;
            __IM uint16_t RECCST  : 1;
            __IM uint16_t BUSSST  : 1;
            __IM uint16_t BUSMST  : 1;
            __IM uint16_t SPEST   : 1;
            __IM uint16_t TZFST   : 1;
            uint16_t              : 1;
            __IM uint16_t CPEST   : 1;
        } NMISR_b;
    };
    __IM uint16_t RESERVED8;
    __IM uint32_t RESERVED9[23];

    union
    {
        __IOM uint32_t WUPEN;

        struct
        {
            __IOM uint32_t IRQWUPEN0    : 1;
            __IOM uint32_t IRQWUPEN1    : 1;
            __IOM uint32_t IRQWUPEN2    : 1;
            __IOM uint32_t IRQWUPEN3    : 1;
            __IOM uint32_t IRQWUPEN4    : 1;
            __IOM uint32_t IRQWUPEN5    : 1;
            __IOM uint32_t IRQWUPEN6    : 1;
            __IOM uint32_t IRQWUPEN7    : 1;
            __IOM uint32_t IRQWUPEN8    : 1;
            __IOM uint32_t IRQWUPEN9    : 1;
            __IOM uint32_t IRQWUPEN10   : 1;
            __IOM uint32_t IRQWUPEN11   : 1;
            __IOM uint32_t IRQWUPEN12   : 1;
            __IOM uint32_t IRQWUPEN13   : 1;
            __IOM uint32_t IRQWUPEN14   : 1;
            __IOM uint32_t IRQWUPEN15   : 1;
            __IOM uint32_t IWDTWUPEN    : 1;
            __IOM uint32_t KEYWUPEN     : 1;
            __IOM uint32_t LVD1WUPEN    : 1;
            __IOM uint32_t LVD2WUPEN    : 1;
            __IOM uint32_t VBATTWUPEN   : 1;
            uint32_t                    : 1;
            __IOM uint32_t ACMPHS0WUPEN : 1;
            __IOM uint32_t ACMPLP0WUPEN : 1;
            __IOM uint32_t RTCALMWUPEN  : 1;
            __IOM uint32_t RTCPRDWUPEN  : 1;
            __IOM uint32_t USBHSWUPEN   : 1;
            __IOM uint32_t USBFSWUPEN   : 1;
            __IOM uint32_t AGT1UDWUPEN  : 1;
            __IOM uint32_t AGT1CAWUPEN  : 1; /*!< [29..29] AGT1 compare match A interrupt S/W standby returns
                                              *   enable                                                                    */
            __IOM uint32_t AGT1CBWUPEN : 1;  /*!< [30..30] AGT1 compare match B interrupt S/W standby returns
                                              *   enable                                                                    */
            __IOM uint32_t IIC0WUPEN : 1;
        } WUPEN_b;
    };

    union
    {
        __IOM uint32_t WUPEN1;

        struct
        {
            __IOM uint32_t AGT3UDWUPEN : 1;
            __IOM uint32_t AGT3CAWUPEN : 1; /*!< [1..1] AGT3 compare match A interrupt S/W standby returns enable
                                             *   bit                                                                       */
            __IOM uint32_t AGT3CBWUPEN : 1; /*!< [2..2] AGT3 compare match B interrupt S/W standby returns enable
                                             *   bit                                                                       */
            uint32_t : 29;
        } WUPEN1_b;
    };
    __IM uint32_t RESERVED10[6];

    union
    {
        __IOM uint8_t IELEN;

        struct
        {
            __IOM uint8_t RTCINTEN : 1; /*!< [0..0] RTCALM and RTCPRD Interrupts Enable (when LPOPTEN bit
                                         *   = 1)                                                                      */
            __IOM uint8_t IELEN : 1;    /*!< [1..1] Parts Asynchronous Interrupts Enable except RTC (when
                                         *   LPOPTEN bit = 1)                                                          */
            uint8_t : 6;
        } IELEN_b;
    };
    __IM uint8_t  RESERVED11;
    __IM uint16_t RESERVED12;
    __IM uint32_t RESERVED13[15];

    union
    {
        __IOM uint16_t SELSR0;

        struct
        {
            __IOM uint16_t SELS : 9;
            uint16_t            : 7;
        } SELSR0_b;
    };
    __IM uint16_t RESERVED14;
    __IM uint32_t RESERVED15[31];

    union
    {
        __IOM uint32_t DELSR[8];

        struct
        {
            __IOM uint32_t DELS : 9;
            uint32_t            : 7;
            __IOM uint32_t IR   : 1;   /*!< [16..16] Interrupt Status Flag for DMAC NOTE: Writing 1 to the
                                        *   IR flag is prohibited.                                                    */
            uint32_t : 15;
        } DELSR_b[8];
    };
    __IM uint32_t RESERVED16[24];

    union
    {
        __IOM uint32_t IELSR[96];

        struct
        {
            __IOM uint32_t IELS : 9;   /*!< [8..0] ICU Event selection to NVICSet the number for the event
                                        *   signal to be linked .                                                     */
            uint32_t            : 7;
            __IOM uint32_t IR   : 1;
            uint32_t            : 7;
            __IOM uint32_t DTCE : 1;
            uint32_t            : 7;
        } IELSR_b[96];
    };
} R_ICU_Type;

/* =========================================================================================================================== */
/* ================                                          R_IIC0                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief I2C Bus Interface (R_IIC0)
 */

typedef struct
{
    union
    {
        __IOM uint8_t ICCR1;

        struct
        {
            __IM uint8_t  SDAI   : 1;
            __IM uint8_t  SCLI   : 1;
            __IOM uint8_t SDAO   : 1;
            __IOM uint8_t SCLO   : 1;
            __IOM uint8_t SOWP   : 1;
            __IOM uint8_t CLO    : 1;
            __IOM uint8_t IICRST : 1;  /*!< [6..6] I2C Bus Interface Internal ResetNote:If an internal reset
                                        *   is initiated using the IICRST bit for a bus hang-up occurred
                                        *   during communication with the master device in slave mode,
                                        *   the states may become different between the slave device
                                        *   and the master device (due to the difference in the bit
                                        *   counter information).                                                     */
            __IOM uint8_t ICE : 1;
        } ICCR1_b;
    };

    union
    {
        __IOM uint8_t ICCR2;

        struct
        {
            uint8_t          : 1;
            __IOM uint8_t ST : 1;      /*!< [1..1] Start Condition Issuance RequestSet the ST bit to 1 (start
                                        *   condition issuance request) when the BBSY flag is set to
                                        *   0 (bus free state).                                                       */
            __IOM uint8_t RS : 1;      /*!< [2..2] Restart Condition Issuance RequestNote: Do not set the
                                        *   RS bit to 1 while issuing a stop condition.                               */
            __IOM uint8_t SP : 1;      /*!< [3..3] Stop Condition Issuance RequestNote: Writing to the SP
                                        *   bit is not possible while the setting of the BBSY flag
                                        *   is 0 (bus free state).Note: Do not set the SP bit to 1
                                        *   while a restart condition is being issued.                                */
            uint8_t            : 1;
            __IOM uint8_t TRS  : 1;
            __IOM uint8_t MST  : 1;
            __IM uint8_t  BBSY : 1;
        } ICCR2_b;
    };

    union
    {
        __IOM uint8_t ICMR1;

        struct
        {
            __IOM uint8_t BC   : 3;
            __OM uint8_t  BCWP : 1;
            __IOM uint8_t CKS  : 3;    /*!< [6..4] Internal Reference Clock (fIIC) Selection ( fIIC = PCLKB
                                        *   / 2^CKS )                                                                 */
            __IOM uint8_t MTWP : 1;
        } ICMR1_b;
    };

    union
    {
        __IOM uint8_t ICMR2;

        struct
        {
            __IOM uint8_t TMOS : 1;
            __IOM uint8_t TMOL : 1;
            __IOM uint8_t TMOH : 1;
            uint8_t            : 1;
            __IOM uint8_t SDDL : 3;
            __IOM uint8_t DLCS : 1;
        } ICMR2_b;
    };

    union
    {
        __IOM uint8_t ICMR3;

        struct
        {
            __IOM uint8_t NF    : 2;
            __IM uint8_t  ACKBR : 1;
            __IOM uint8_t ACKBT : 1;
            __IOM uint8_t ACKWP : 1;
            __IOM uint8_t RDRFS : 1;
            __IOM uint8_t WAIT  : 1;   /*!< [6..6] WAITNote: When the value of the WAIT bit is to be read,
                                        *   be sure to read the ICDRR beforehand.                                     */
            __IOM uint8_t SMBS : 1;
        } ICMR3_b;
    };

    union
    {
        __IOM uint8_t ICFER;

        struct
        {
            __IOM uint8_t TMOE  : 1;
            __IOM uint8_t MALE  : 1;
            __IOM uint8_t NALE  : 1;
            __IOM uint8_t SALE  : 1;
            __IOM uint8_t NACKE : 1;
            __IOM uint8_t NFE   : 1;
            __IOM uint8_t SCLE  : 1;
            __IOM uint8_t FMPE  : 1;
        } ICFER_b;
    };

    union
    {
        __IOM uint8_t ICSER;

        struct
        {
            __IOM uint8_t SAR0E : 1;
            __IOM uint8_t SAR1E : 1;
            __IOM uint8_t SAR2E : 1;
            __IOM uint8_t GCAE  : 1;
            uint8_t             : 1;
            __IOM uint8_t DIDE  : 1;
            uint8_t             : 1;
            __IOM uint8_t HOAE  : 1;
        } ICSER_b;
    };

    union
    {
        __IOM uint8_t ICIER;

        struct
        {
            __IOM uint8_t TMOIE : 1;
            __IOM uint8_t ALIE  : 1;
            __IOM uint8_t STIE  : 1;
            __IOM uint8_t SPIE  : 1;
            __IOM uint8_t NAKIE : 1;
            __IOM uint8_t RIE   : 1;
            __IOM uint8_t TEIE  : 1;
            __IOM uint8_t TIE   : 1;
        } ICIER_b;
    };

    union
    {
        __IOM uint8_t ICSR1;

        struct
        {
            __IOM uint8_t AAS0 : 1;
            __IOM uint8_t AAS1 : 1;
            __IOM uint8_t AAS2 : 1;
            __IOM uint8_t GCA  : 1;
            uint8_t            : 1;
            __IOM uint8_t DID  : 1;
            uint8_t            : 1;
            __IOM uint8_t HOA  : 1;
        } ICSR1_b;
    };

    union
    {
        __IOM uint8_t ICSR2;

        struct
        {
            __IOM uint8_t TMOF  : 1;
            __IOM uint8_t AL    : 1;
            __IOM uint8_t START : 1;
            __IOM uint8_t STOP  : 1;
            __IOM uint8_t NACKF : 1;
            __IOM uint8_t RDRF  : 1;
            __IOM uint8_t TEND  : 1;
            __IM uint8_t  TDRE  : 1;
        } ICSR2_b;
    };
    __IOM R_IIC0_SAR_Type SAR[3];

    union
    {
        __IOM uint8_t ICBRL;

        struct
        {
            __IOM uint8_t BRL : 5;
            uint8_t           : 3;
        } ICBRL_b;
    };

    union
    {
        __IOM uint8_t ICBRH;

        struct
        {
            __IOM uint8_t BRH : 5;
            uint8_t           : 3;
        } ICBRH_b;
    };

    union
    {
        __IOM uint8_t ICDRT;

        struct
        {
            __IOM uint8_t ICDRT : 8;
        } ICDRT_b;
    };

    union
    {
        __IM uint8_t ICDRR;

        struct
        {
            __IM uint8_t ICDRR : 8;
        } ICDRR_b;
    };
    __IM uint8_t RESERVED[2];

    union
    {
        __IOM uint8_t ICWUR;

        struct
        {
            __IOM uint8_t WUAFA : 1;
            uint8_t             : 3;
            __IOM uint8_t WUACK : 1;
            __IOM uint8_t WUF   : 1;
            __IOM uint8_t WUIE  : 1;
            __IOM uint8_t WUE   : 1;
        } ICWUR_b;
    };

    union
    {
        __IOM uint8_t ICWUR2;

        struct
        {
            __IOM uint8_t WUSEN  : 1;
            __IM uint8_t  WUASYF : 1;
            __IM uint8_t  WUSYF  : 1;
            uint8_t              : 5;
        } ICWUR2_b;
    };
} R_IIC0_Type;

/* =========================================================================================================================== */
/* ================                                          R_IRDA                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief IrDA Interface (R_IRDA)
 */

typedef struct
{
    union
    {
        __IOM uint8_t IRCR;

        struct
        {
            uint8_t               : 2;
            __IOM uint8_t IRRXINV : 1;
            __IOM uint8_t IRTXINV : 1;
            uint8_t               : 3;
            __IOM uint8_t IRE     : 1;
        } IRCR_b;
    };
} R_IRDA_Type;

/* =========================================================================================================================== */
/* ================                                          R_IWDT                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Independent Watchdog Timer (R_IWDT)
 */

typedef struct
{
    union
    {
        __IOM uint8_t IWDTRR;

        struct
        {
            __IOM uint8_t IWDTRR : 8;  /*!< [7..0] The counter is refreshed by writing 0x00 and then writing
                                        *   0xFF to this register.                                                    */
        } IWDTRR_b;
    };
    __IM uint8_t RESERVED;

    union
    {
        __IOM uint16_t IWDTCR;

        struct
        {
            __IOM uint16_t TOPS : 2;
            uint16_t            : 2;
            __IOM uint16_t CKS  : 4;
            __IOM uint16_t RPES : 2;
            uint16_t            : 2;
            __IOM uint16_t RPSS : 2;
            uint16_t            : 2;
        } IWDTCR_b;
    };

    union
    {
        __IOM uint16_t IWDTSR;

        struct
        {
            __IM uint16_t  CNTVAL : 14;
            __IOM uint16_t UNDFF  : 1;
            __IOM uint16_t REFEF  : 1;
        } IWDTSR_b;
    };

    union
    {
        __IOM uint8_t IWDTRCR;

        struct
        {
            uint8_t               : 7;
            __IOM uint8_t RSTIRQS : 1;
        } IWDTRCR_b;
    };
    __IM uint8_t RESERVED1;

    union
    {
        __IOM uint8_t IWDTCSTPR;

        struct
        {
            uint8_t              : 7;
            __IOM uint8_t SLCSTP : 1;
        } IWDTCSTPR_b;
    };
    __IM uint8_t  RESERVED2;
    __IM uint16_t RESERVED3;
} R_IWDT_Type;

/* =========================================================================================================================== */
/* ================                                          R_KINT                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Key Interrupt Function (R_KINT)
 */

typedef struct
{
    union
    {
        __IOM uint8_t KRCTL;

        struct
        {
            __IOM uint8_t KREG : 1;
            uint8_t            : 6;
            __IOM uint8_t KRMD : 1;
        } KRCTL_b;
    };
    __IM uint8_t RESERVED[3];

    union
    {
        __IOM uint8_t KRF;

        struct
        {
            __IOM uint8_t KRF0 : 1;
            __IOM uint8_t KRF1 : 1;
            __IOM uint8_t KRF2 : 1;
            __IOM uint8_t KRF3 : 1;
            __IOM uint8_t KRF4 : 1;
            __IOM uint8_t KRF5 : 1;
            __IOM uint8_t KRF6 : 1;
            __IOM uint8_t KRF7 : 1;
        } KRF_b;
    };
    __IM uint8_t RESERVED1[3];

    union
    {
        __IOM uint8_t KRM;

        struct
        {
            __IOM uint8_t KRM0 : 1;
            __IOM uint8_t KRM1 : 1;
            __IOM uint8_t KRM2 : 1;
            __IOM uint8_t KRM3 : 1;
            __IOM uint8_t KRM4 : 1;
            __IOM uint8_t KRM5 : 1;
            __IOM uint8_t KRM6 : 1;
            __IOM uint8_t KRM7 : 1;
        } KRM_b;
    };
} R_KINT_Type;

/* =========================================================================================================================== */
/* ================                                           R_MMF                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Memory Mirror Function (R_MMF)
 */

typedef struct
{
    union
    {
        __IOM uint32_t MMSFR;

        struct
        {
            uint32_t                  : 7;
            __IOM uint32_t MEMMIRADDR : 16; /*!< [22..7] Specifies the memory mirror address.NOTE: A value cannot
                                             *   be set in the low-order 7 bits. These bits are fixed to
                                             *   0.                                                                        */
            uint32_t          : 1;
            __OM uint32_t KEY : 8;
        } MMSFR_b;
    };

    union
    {
        __IOM uint32_t MMEN;

        struct
        {
            __IOM uint32_t EN : 1;
            uint32_t          : 23;
            __OM uint32_t KEY : 8;
        } MMEN_b;
    };
} R_MMF_Type;

/* =========================================================================================================================== */
/* ================                                        R_MPU_MMPU                                         ================ */
/* =========================================================================================================================== */

/**
 * @brief Bus Master MPU (R_MPU_MMPU)
 */

typedef struct
{
    __IOM R_MPU_MMPU_MMPU_Type MMPU[3];
} R_MPU_MMPU_Type;

/* =========================================================================================================================== */
/* ================                                        R_MPU_SMPU                                         ================ */
/* =========================================================================================================================== */

/**
 * @brief Bus Slave MPU (R_MPU_SMPU)
 */

typedef struct
{
    union
    {
        __IOM uint16_t SMPUCTL;

        struct
        {
            __IOM uint16_t OAD     : 1;
            __IOM uint16_t PROTECT : 1;
            uint16_t               : 6;
            __OM uint16_t KEY      : 8;  /*!< [15..8] Key Code This bit is used to enable or disable rewriting
                                          *   of the PROTECT and OAD bit.                                               */
        } SMPUCTL_b;
    };
    __IM uint16_t              RESERVED[7];
    __IOM R_MPU_SMPU_SMPU_Type SMPU[10];
} R_MPU_SMPU_Type;

/* =========================================================================================================================== */
/* ================                                        R_MPU_SPMON                                        ================ */
/* =========================================================================================================================== */

/**
 * @brief CPU Stack Pointer Monitor (R_MPU_SPMON)
 */

typedef struct
{
    __IOM R_MPU_SPMON_SP_Type SP[2];
} R_MPU_SPMON_Type;

/* =========================================================================================================================== */
/* ================                                          R_MSTP                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief System-Module Stop (R_MSTP)
 */

typedef struct
{
    union
    {
        __IOM uint32_t MSTPCRA;

        struct
        {
            __IOM uint32_t MSTPA0  : 1;
            __IOM uint32_t MSTPA1  : 1;
            __IOM uint32_t MSTPA2  : 1;
            __IOM uint32_t MSTPA3  : 1;
            __IOM uint32_t MSTPA4  : 1;
            __IOM uint32_t MSTPA5  : 1;
            __IOM uint32_t MSTPA6  : 1;
            __IOM uint32_t MSTPA7  : 1;
            __IOM uint32_t MSTPA8  : 1;
            __IOM uint32_t MSTPA9  : 1;
            __IOM uint32_t MSTPA10 : 1; /*!< [10..10] Module stop bit 10. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA11 : 1; /*!< [11..11] Module stop bit 11. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA12 : 1; /*!< [12..12] Module stop bit 12. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA13 : 1; /*!< [13..13] Module stop bit 13. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA14 : 1; /*!< [14..14] Module stop bit 14. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA15 : 1; /*!< [15..15] Module stop bit 15. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA16 : 1; /*!< [16..16] Module stop bit 16. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA17 : 1; /*!< [17..17] Module stop bit 17. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA18 : 1; /*!< [18..18] Module stop bit 18. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA19 : 1; /*!< [19..19] Module stop bit 19. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA20 : 1; /*!< [20..20] Module stop bit 20. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA21 : 1; /*!< [21..21] Module stop bit 21. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA22 : 1; /*!< [22..22] Module stop bit 22. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA23 : 1; /*!< [23..23] Module stop bit 23. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA24 : 1; /*!< [24..24] Module stop bit 24. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA25 : 1; /*!< [25..25] Module stop bit 25. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA26 : 1; /*!< [26..26] Module stop bit 26. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA27 : 1; /*!< [27..27] Module stop bit 27. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA28 : 1; /*!< [28..28] Module stop bit 28. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA29 : 1; /*!< [29..29] Module stop bit 29. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA30 : 1; /*!< [30..30] Module stop bit 30. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA31 : 1; /*!< [31..31] Module stop bit 31. See device hardware manual for
                                         *   usage.                                                                    */
        } MSTPCRA_b;
    };

    union
    {
        __IOM uint32_t MSTPCRB;

        struct
        {
            __IOM uint32_t MSTPB0  : 1;
            __IOM uint32_t MSTPB1  : 1;
            __IOM uint32_t MSTPB2  : 1;
            __IOM uint32_t MSTPB3  : 1;
            __IOM uint32_t MSTPB4  : 1;
            __IOM uint32_t MSTPB5  : 1;
            __IOM uint32_t MSTPB6  : 1;
            __IOM uint32_t MSTPB7  : 1;
            __IOM uint32_t MSTPB8  : 1;
            __IOM uint32_t MSTPB9  : 1;
            __IOM uint32_t MSTPB10 : 1; /*!< [10..10] Module stop bit 10. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB11 : 1; /*!< [11..11] Module stop bit 11. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB12 : 1; /*!< [12..12] Module stop bit 12. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB13 : 1; /*!< [13..13] Module stop bit 13. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB14 : 1; /*!< [14..14] Module stop bit 14. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB15 : 1; /*!< [15..15] Module stop bit 15. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB16 : 1; /*!< [16..16] Module stop bit 16. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB17 : 1; /*!< [17..17] Module stop bit 17. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB18 : 1; /*!< [18..18] Module stop bit 18. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB19 : 1; /*!< [19..19] Module stop bit 19. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB20 : 1; /*!< [20..20] Module stop bit 20. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB21 : 1; /*!< [21..21] Module stop bit 21. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB22 : 1; /*!< [22..22] Module stop bit 22. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB23 : 1; /*!< [23..23] Module stop bit 23. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB24 : 1; /*!< [24..24] Module stop bit 24. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB25 : 1; /*!< [25..25] Module stop bit 25. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB26 : 1; /*!< [26..26] Module stop bit 26. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB27 : 1; /*!< [27..27] Module stop bit 27. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB28 : 1; /*!< [28..28] Module stop bit 28. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB29 : 1; /*!< [29..29] Module stop bit 29. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB30 : 1; /*!< [30..30] Module stop bit 30. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPB31 : 1; /*!< [31..31] Module stop bit 31. See device hardware manual for
                                         *   usage.                                                                    */
        } MSTPCRB_b;
    };

    union
    {
        __IOM uint32_t MSTPCRC;

        struct
        {
            __IOM uint32_t MSTPC0  : 1;
            __IOM uint32_t MSTPC1  : 1;
            __IOM uint32_t MSTPC2  : 1;
            __IOM uint32_t MSTPC3  : 1;
            __IOM uint32_t MSTPC4  : 1;
            __IOM uint32_t MSTPC5  : 1;
            __IOM uint32_t MSTPC6  : 1;
            __IOM uint32_t MSTPC7  : 1;
            __IOM uint32_t MSTPC8  : 1;
            __IOM uint32_t MSTPC9  : 1;
            __IOM uint32_t MSTPC10 : 1; /*!< [10..10] Module stop bit 10. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC11 : 1; /*!< [11..11] Module stop bit 11. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC12 : 1; /*!< [12..12] Module stop bit 12. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC13 : 1; /*!< [13..13] Module stop bit 13. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC14 : 1; /*!< [14..14] Module stop bit 14. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC15 : 1; /*!< [15..15] Module stop bit 15. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC16 : 1; /*!< [16..16] Module stop bit 16. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC17 : 1; /*!< [17..17] Module stop bit 17. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC18 : 1; /*!< [18..18] Module stop bit 18. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC19 : 1; /*!< [19..19] Module stop bit 19. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC20 : 1; /*!< [20..20] Module stop bit 20. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC21 : 1; /*!< [21..21] Module stop bit 21. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC22 : 1; /*!< [22..22] Module stop bit 22. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC23 : 1; /*!< [23..23] Module stop bit 23. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC24 : 1; /*!< [24..24] Module stop bit 24. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC25 : 1; /*!< [25..25] Module stop bit 25. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC26 : 1; /*!< [26..26] Module stop bit 26. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC27 : 1; /*!< [27..27] Module stop bit 27. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC28 : 1; /*!< [28..28] Module stop bit 28. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC29 : 1; /*!< [29..29] Module stop bit 29. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC30 : 1; /*!< [30..30] Module stop bit 30. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPC31 : 1; /*!< [31..31] Module stop bit 31. See device hardware manual for
                                         *   usage.                                                                    */
        } MSTPCRC_b;
    };

    union
    {
        __IOM uint32_t MSTPCRD;

        struct
        {
            __IOM uint32_t MSTPD0  : 1;
            __IOM uint32_t MSTPD1  : 1;
            __IOM uint32_t MSTPD2  : 1;
            __IOM uint32_t MSTPD3  : 1;
            __IOM uint32_t MSTPD4  : 1;
            __IOM uint32_t MSTPD5  : 1;
            __IOM uint32_t MSTPD6  : 1;
            __IOM uint32_t MSTPD7  : 1;
            __IOM uint32_t MSTPD8  : 1;
            __IOM uint32_t MSTPD9  : 1;
            __IOM uint32_t MSTPD10 : 1; /*!< [10..10] Module stop bit 10. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD11 : 1; /*!< [11..11] Module stop bit 11. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD12 : 1; /*!< [12..12] Module stop bit 12. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD13 : 1; /*!< [13..13] Module stop bit 13. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD14 : 1; /*!< [14..14] Module stop bit 14. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD15 : 1; /*!< [15..15] Module stop bit 15. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD16 : 1; /*!< [16..16] Module stop bit 16. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD17 : 1; /*!< [17..17] Module stop bit 17. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD18 : 1; /*!< [18..18] Module stop bit 18. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD19 : 1; /*!< [19..19] Module stop bit 19. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD20 : 1; /*!< [20..20] Module stop bit 20. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD21 : 1; /*!< [21..21] Module stop bit 21. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD22 : 1; /*!< [22..22] Module stop bit 22. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD23 : 1; /*!< [23..23] Module stop bit 23. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD24 : 1; /*!< [24..24] Module stop bit 24. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD25 : 1; /*!< [25..25] Module stop bit 25. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD26 : 1; /*!< [26..26] Module stop bit 26. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD27 : 1; /*!< [27..27] Module stop bit 27. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD28 : 1; /*!< [28..28] Module stop bit 28. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD29 : 1; /*!< [29..29] Module stop bit 29. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD30 : 1; /*!< [30..30] Module stop bit 30. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPD31 : 1; /*!< [31..31] Module stop bit 31. See device hardware manual for
                                         *   usage.                                                                    */
        } MSTPCRD_b;
    };

    union
    {
        union
        {
            __IOM uint32_t MSTPCRE;

            struct
            {
                __IOM uint32_t MSTPE0  : 1;
                __IOM uint32_t MSTPE1  : 1;
                __IOM uint32_t MSTPE2  : 1;
                __IOM uint32_t MSTPE3  : 1;
                __IOM uint32_t MSTPE4  : 1;
                __IOM uint32_t MSTPE5  : 1;
                __IOM uint32_t MSTPE6  : 1;
                __IOM uint32_t MSTPE7  : 1;
                __IOM uint32_t MSTPE8  : 1;
                __IOM uint32_t MSTPE9  : 1;
                __IOM uint32_t MSTPE10 : 1; /*!< [10..10] Module stop bit 10. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE11 : 1; /*!< [11..11] Module stop bit 11. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE12 : 1; /*!< [12..12] Module stop bit 12. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE13 : 1; /*!< [13..13] Module stop bit 13. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE14 : 1; /*!< [14..14] Module stop bit 14. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE15 : 1; /*!< [15..15] Module stop bit 15. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE16 : 1; /*!< [16..16] Module stop bit 16. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE17 : 1; /*!< [17..17] Module stop bit 17. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE18 : 1; /*!< [18..18] Module stop bit 18. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE19 : 1; /*!< [19..19] Module stop bit 19. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE20 : 1; /*!< [20..20] Module stop bit 20. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE21 : 1; /*!< [21..21] Module stop bit 21. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE22 : 1; /*!< [22..22] Module stop bit 22. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE23 : 1; /*!< [23..23] Module stop bit 23. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE24 : 1; /*!< [24..24] Module stop bit 24. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE25 : 1; /*!< [25..25] Module stop bit 25. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE26 : 1; /*!< [26..26] Module stop bit 26. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE27 : 1; /*!< [27..27] Module stop bit 27. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE28 : 1; /*!< [28..28] Module stop bit 28. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE29 : 1; /*!< [29..29] Module stop bit 29. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE30 : 1; /*!< [30..30] Module stop bit 30. See device hardware manual for
                                             *   usage.                                                                    */
                __IOM uint32_t MSTPE31 : 1; /*!< [31..31] Module stop bit 31. See device hardware manual for
                                             *   usage.                                                                    */
            } MSTPCRE_b;
        };

        union
        {
            __IOM uint16_t LSMRWDIS;

            struct
            {
                __IOM uint16_t RTCRWDIS : 1;
                __IOM uint16_t WDTDIS   : 1;
                __IOM uint16_t IWDTIDS  : 1;
                uint16_t                : 4;
                __IOM uint16_t WREN     : 1;
                __OM uint16_t  PRKEY    : 8;
            } LSMRWDIS_b;
        };
    };
} R_MSTP_Type;

/* =========================================================================================================================== */
/* ================                                          R_PORT0                                          ================ */
/* =========================================================================================================================== */

/**
 * @brief I/O Ports (R_PORT0)
 */

typedef struct
{
    union
    {
        union
        {
            __IOM uint32_t PCNTR1;

            struct
            {
                __IOM uint32_t PDR  : 16;
                __IOM uint32_t PODR : 16;
            } PCNTR1_b;
        };

        struct
        {
            union
            {
                __IOM uint16_t PODR;

                struct
                {
                    __IOM uint16_t PODR0  : 1;
                    __IOM uint16_t PODR1  : 1;
                    __IOM uint16_t PODR2  : 1;
                    __IOM uint16_t PODR3  : 1;
                    __IOM uint16_t PODR4  : 1;
                    __IOM uint16_t PODR5  : 1;
                    __IOM uint16_t PODR6  : 1;
                    __IOM uint16_t PODR7  : 1;
                    __IOM uint16_t PODR8  : 1;
                    __IOM uint16_t PODR9  : 1;
                    __IOM uint16_t PODR10 : 1;
                    __IOM uint16_t PODR11 : 1;
                    __IOM uint16_t PODR12 : 1;
                    __IOM uint16_t PODR13 : 1;
                    __IOM uint16_t PODR14 : 1;
                    __IOM uint16_t PODR15 : 1;
                } PODR_b;
            };

            union
            {
                __IOM uint16_t PDR;

                struct
                {
                    __IOM uint16_t PDR0  : 1;
                    __IOM uint16_t PDR1  : 1;
                    __IOM uint16_t PDR2  : 1;
                    __IOM uint16_t PDR3  : 1;
                    __IOM uint16_t PDR4  : 1;
                    __IOM uint16_t PDR5  : 1;
                    __IOM uint16_t PDR6  : 1;
                    __IOM uint16_t PDR7  : 1;
                    __IOM uint16_t PDR8  : 1;
                    __IOM uint16_t PDR9  : 1;
                    __IOM uint16_t PDR10 : 1;
                    __IOM uint16_t PDR11 : 1;
                    __IOM uint16_t PDR12 : 1;
                    __IOM uint16_t PDR13 : 1;
                    __IOM uint16_t PDR14 : 1;
                    __IOM uint16_t PDR15 : 1;
                } PDR_b;
            };
        };
    };

    union
    {
        union
        {
            __IM uint32_t PCNTR2;

            struct
            {
                __IM uint32_t PIDR : 16;
                __IM uint32_t EIDR : 16;
            } PCNTR2_b;
        };

        struct
        {
            union
            {
                __IM uint16_t EIDR;

                struct
                {
                    __IM uint16_t EIDR0  : 1;
                    __IM uint16_t EIDR1  : 1;
                    __IM uint16_t EIDR2  : 1;
                    __IM uint16_t EIDR3  : 1;
                    __IM uint16_t EIDR4  : 1;
                    __IM uint16_t EIDR5  : 1;
                    __IM uint16_t EIDR6  : 1;
                    __IM uint16_t EIDR7  : 1;
                    __IM uint16_t EIDR8  : 1;
                    __IM uint16_t EIDR9  : 1;
                    __IM uint16_t EIDR10 : 1;
                    __IM uint16_t EIDR11 : 1;
                    __IM uint16_t EIDR12 : 1;
                    __IM uint16_t EIDR13 : 1;
                    __IM uint16_t EIDR14 : 1;
                    __IM uint16_t EIDR15 : 1;
                } EIDR_b;
            };

            union
            {
                __IM uint16_t PIDR;

                struct
                {
                    __IM uint16_t PIDR0  : 1;
                    __IM uint16_t PIDR1  : 1;
                    __IM uint16_t PIDR2  : 1;
                    __IM uint16_t PIDR3  : 1;
                    __IM uint16_t PIDR4  : 1;
                    __IM uint16_t PIDR5  : 1;
                    __IM uint16_t PIDR6  : 1;
                    __IM uint16_t PIDR7  : 1;
                    __IM uint16_t PIDR8  : 1;
                    __IM uint16_t PIDR9  : 1;
                    __IM uint16_t PIDR10 : 1;
                    __IM uint16_t PIDR11 : 1;
                    __IM uint16_t PIDR12 : 1;
                    __IM uint16_t PIDR13 : 1;
                    __IM uint16_t PIDR14 : 1;
                    __IM uint16_t PIDR15 : 1;
                } PIDR_b;
            };
        };
    };

    union
    {
        union
        {
            __OM uint32_t PCNTR3;

            struct
            {
                __OM uint32_t POSR : 16;
                __OM uint32_t PORR : 16;
            } PCNTR3_b;
        };

        struct
        {
            union
            {
                __OM uint16_t PORR;

                struct
                {
                    __OM uint16_t PORR0  : 1;
                    __OM uint16_t PORR1  : 1;
                    __OM uint16_t PORR2  : 1;
                    __OM uint16_t PORR3  : 1;
                    __OM uint16_t PORR4  : 1;
                    __OM uint16_t PORR5  : 1;
                    __OM uint16_t PORR6  : 1;
                    __OM uint16_t PORR7  : 1;
                    __OM uint16_t PORR8  : 1;
                    __OM uint16_t PORR9  : 1;
                    __OM uint16_t PORR10 : 1;
                    __OM uint16_t PORR11 : 1;
                    __OM uint16_t PORR12 : 1;
                    __OM uint16_t PORR13 : 1;
                    __OM uint16_t PORR14 : 1;
                    __OM uint16_t PORR15 : 1;
                } PORR_b;
            };

            union
            {
                __OM uint16_t POSR;

                struct
                {
                    __OM uint16_t POSR0  : 1;
                    __OM uint16_t POSR1  : 1;
                    __OM uint16_t POSR2  : 1;
                    __OM uint16_t POSR3  : 1;
                    __OM uint16_t POSR4  : 1;
                    __OM uint16_t POSR5  : 1;
                    __OM uint16_t POSR6  : 1;
                    __OM uint16_t POSR7  : 1;
                    __OM uint16_t POSR8  : 1;
                    __OM uint16_t POSR9  : 1;
                    __OM uint16_t POSR10 : 1;
                    __OM uint16_t POSR11 : 1;
                    __OM uint16_t POSR12 : 1;
                    __OM uint16_t POSR13 : 1;
                    __OM uint16_t POSR14 : 1;
                    __OM uint16_t POSR15 : 1;
                } POSR_b;
            };
        };
    };

    union
    {
        union
        {
            __IOM uint32_t PCNTR4;

            struct
            {
                __IOM uint32_t EOSR : 16;
                __IOM uint32_t EORR : 16;
            } PCNTR4_b;
        };

        struct
        {
            union
            {
                __IOM uint16_t EORR;

                struct
                {
                    __IOM uint16_t EORR0  : 1;
                    __IOM uint16_t EORR1  : 1;
                    __IOM uint16_t EORR2  : 1;
                    __IOM uint16_t EORR3  : 1;
                    __IOM uint16_t EORR4  : 1;
                    __IOM uint16_t EORR5  : 1;
                    __IOM uint16_t EORR6  : 1;
                    __IOM uint16_t EORR7  : 1;
                    __IOM uint16_t EORR8  : 1;
                    __IOM uint16_t EORR9  : 1;
                    __IOM uint16_t EORR10 : 1;
                    __IOM uint16_t EORR11 : 1;
                    __IOM uint16_t EORR12 : 1;
                    __IOM uint16_t EORR13 : 1;
                    __IOM uint16_t EORR14 : 1;
                    __IOM uint16_t EORR15 : 1;
                } EORR_b;
            };

            union
            {
                __IOM uint16_t EOSR;

                struct
                {
                    __IOM uint16_t EOSR0  : 1;
                    __IOM uint16_t EOSR1  : 1;
                    __IOM uint16_t EOSR2  : 1;
                    __IOM uint16_t EOSR3  : 1;
                    __IOM uint16_t EOSR4  : 1;
                    __IOM uint16_t EOSR5  : 1;
                    __IOM uint16_t EOSR6  : 1;
                    __IOM uint16_t EOSR7  : 1;
                    __IOM uint16_t EOSR8  : 1;
                    __IOM uint16_t EOSR9  : 1;
                    __IOM uint16_t EOSR10 : 1;
                    __IOM uint16_t EOSR11 : 1;
                    __IOM uint16_t EOSR12 : 1;
                    __IOM uint16_t EOSR13 : 1;
                    __IOM uint16_t EOSR14 : 1;
                    __IOM uint16_t EOSR15 : 1;
                } EOSR_b;
            };
        };
    };
} R_PORT0_Type;

/* =========================================================================================================================== */
/* ================                                           R_PFS                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief I/O Ports-PFS (R_PFS)
 */

typedef struct
{
    union
    {
        __IOM R_PFS_PORT_Type  PORT[15];
        __IOM R_PFS_VLSEL_Type VLSEL;
    };
} R_PFS_Type;

/* =========================================================================================================================== */
/* ================                                          R_PMISC                                          ================ */
/* =========================================================================================================================== */

/**
 * @brief I/O Ports-MISC (R_PMISC)
 */

typedef struct
{
    union
    {
        __IOM uint8_t PFENET;

        struct
        {
            uint8_t                : 4;
            __IOM uint8_t PHYMODE0 : 1;
            __IOM uint8_t PHYMODE1 : 1;
            uint8_t                : 2;
        } PFENET_b;
    };
    __IM uint8_t RESERVED[2];

    union
    {
        __IOM uint8_t PWPR;

        struct
        {
            uint8_t             : 6;
            __IOM uint8_t PFSWE : 1;
            __IOM uint8_t B0WI  : 1;
        } PWPR_b;
    };
    __IM uint8_t RESERVED1;

    union
    {
        __IOM uint8_t PWPRS;

        struct
        {
            uint8_t             : 6;
            __IOM uint8_t PFSWE : 1;
            __IOM uint8_t B0WI  : 1;
        } PWPRS_b;
    };
    __IM uint16_t RESERVED2[4];
    __IM uint8_t  RESERVED3;

    union
    {
        __IOM uint8_t PRWCNTR;

        struct
        {
            __IOM uint8_t WAIT : 2;
            uint8_t            : 6;
        } PRWCNTR_b;
    };
    __IOM R_PMISC_PMSAR_Type PMSAR[12];
} R_PMISC_Type;

/* =========================================================================================================================== */
/* ================                                          R_QSPI                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Quad Serial Peripheral Interface (R_QSPI)
 */

typedef struct
{
    union
    {
        __IOM uint32_t SFMSMD;

        struct
        {
            __IOM uint32_t SFMRM  : 3;
            uint32_t              : 1;
            __IOM uint32_t SFMSE  : 2;
            __IOM uint32_t SFMPFE : 1;
            __IOM uint32_t SFMPAE : 1; /*!< [7..7] Selection of the function for stopping prefetch at locations
                                        *   other than on byte boundaries                                             */
            __IOM uint32_t SFMMD3 : 1; /*!< [8..8] SPI mode selection. An initial value is determined by
                                        *   input to CFGMD3.                                                          */
            __IOM uint32_t SFMOEX : 1; /*!< [9..9] Extension of the I/O buffer output enable signal for
                                        *   the serial interface                                                      */
            __IOM uint32_t SFMOHW : 1;
            __IOM uint32_t SFMOSW : 1;
            uint32_t              : 3;
            __IOM uint32_t SFMCCE : 1;
            uint32_t              : 16;
        } SFMSMD_b;
    };

    union
    {
        __IOM uint32_t SFMSSC;

        struct
        {
            __IOM uint32_t SFMSW  : 4;
            __IOM uint32_t SFMSHD : 1;
            __IOM uint32_t SFMSLD : 1;
            uint32_t              : 26;
        } SFMSSC_b;
    };

    union
    {
        __IOM uint32_t SFMSKC;

        struct
        {
            __IOM uint32_t SFMDV : 5;  /*!< [4..0] Serial interface reference cycle selection (* Pay attention
                                        *   to the irregularity.)NOTE: When PCLKA multiplied by an
                                        *   odd number is selected, the high-level width of the SCK
                                        *   signal is longer than the low-level width by 1 x PCLKA
                                        *   before duty ratio correction.                                             */
            __IOM uint32_t SFMDTY : 1; /*!< [5..5] Selection of a duty ratio correction function for the
                                        *   SCK signal                                                                */
            uint32_t : 26;
        } SFMSKC_b;
    };

    union
    {
        __IM uint32_t SFMSST;

        struct
        {
            __IM uint32_t PFCNT : 5;   /*!< [4..0] Number of bytes of prefetched dataRange: 00000 - 10010
                                        *   (No combination other than the above is available.)                       */
            uint32_t            : 1;
            __IM uint32_t PFFUL : 1;
            __IM uint32_t PFOFF : 1;
            uint32_t            : 24;
        } SFMSST_b;
    };

    union
    {
        __IOM uint32_t SFMCOM;

        struct
        {
            __IOM uint32_t SFMD : 8;   /*!< [7..0] Port for direct communication with the SPI bus.Input/output
                                        *   to and from this port is converted to a SPIbus cycle. This
                                        *   port is accessible in the direct communication mode (DCOM=1)
                                        *   only.Access to this port is ignored in the ROM access mode.               */
            uint32_t : 24;
        } SFMCOM_b;
    };

    union
    {
        __IOM uint32_t SFMCMD;

        struct
        {
            __IOM uint32_t DCOM : 1;
            uint32_t            : 31;
        } SFMCMD_b;
    };

    union
    {
        __IOM uint32_t SFMCST;

        struct
        {
            __IM uint32_t COMBSY : 1;
            uint32_t             : 6;
            __IM uint32_t EROMR  : 1;  /*!< [7..7] Status of ROM access detection in the direct communication
                                        *   modeNOTE: Writing of 0 only is possible. Writing of 1 is
                                        *   ignored.                                                                  */
            uint32_t : 24;
        } SFMCST_b;
    };
    __IM uint32_t RESERVED;

    union
    {
        __IOM uint32_t SFMSIC;

        struct
        {
            __IOM uint32_t SFMCIC : 8;
            uint32_t              : 24;
        } SFMSIC_b;
    };

    union
    {
        __IOM uint32_t SFMSAC;

        struct
        {
            __IOM uint32_t SFMAS  : 2;
            uint32_t              : 2;
            __IOM uint32_t SFM4BC : 1; /*!< [4..4] Selection of a default instruction code, when Serial
                                        *   Interface address width is selected 4 bytes.                              */
            uint32_t : 27;
        } SFMSAC_b;
    };

    union
    {
        __IOM uint32_t SFMSDC;

        struct
        {
            __IOM uint32_t SFMDN : 4;  /*!< [3..0] Selection of the number of dummy cycles of Fast Read
                                        *   instructions                                                              */
            uint32_t              : 2;
            __IM uint32_t  SFMXST : 1;
            __IOM uint32_t SFMXEN : 1;
            __IOM uint32_t SFMXD  : 8;
            uint32_t              : 16;
        } SFMSDC_b;
    };
    __IM uint32_t RESERVED1;

    union
    {
        __IOM uint32_t SFMSPC;

        struct
        {
            __IOM uint32_t SFMSPI : 2; /*!< [1..0] Selection of SPI protocolNOTE: Serial ROM's SPI protocol
                                        *   is required to be set by software separately.                             */
            uint32_t              : 2;
            __IOM uint32_t SFMSDE : 1; /*!< [4..4] Selection of the minimum time of input output switch,
                                        *   when Dual SPI protocol or Quad SPI protocol is selected.                  */
            uint32_t : 27;
        } SFMSPC_b;
    };

    union
    {
        __IOM uint32_t SFMPMD;

        struct
        {
            uint32_t              : 2;
            __IOM uint32_t SFMWPL : 1;
            uint32_t              : 29;
        } SFMPMD_b;
    };
    __IM uint32_t RESERVED2[499];

    union
    {
        __IOM uint32_t SFMCNT1;

        struct
        {
            uint32_t                : 26;
            __IOM uint32_t QSPI_EXT : 6; /*!< [31..26] BANK Switching AddressWhen accessing from 0x6000_0000
                                          *   to 0x63FF_FFFF, Addres bus is Set QSPI_EXT[5:0] to high-order
                                          *   6bits of SHADDR[31:0]NOTE: Setting 6'h3F is prihibited.                   */
        } SFMCNT1_b;
    };
} R_QSPI_Type;

/* =========================================================================================================================== */
/* ================                                           R_RTC                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Realtime Clock (R_RTC)
 */

typedef struct
{
    union
    {
        __IM uint8_t R64CNT;

        struct
        {
            __IM uint8_t F64HZ : 1;
            __IM uint8_t F32HZ : 1;
            __IM uint8_t F16HZ : 1;
            __IM uint8_t F8HZ  : 1;
            __IM uint8_t F4HZ  : 1;
            __IM uint8_t F2HZ  : 1;
            __IM uint8_t F1HZ  : 1;
            uint8_t            : 1;
        } R64CNT_b;
    };
    __IM uint8_t RESERVED;

    union
    {
        union
        {
            __IOM uint8_t BCNT0;

            struct
            {
                __IOM uint8_t BCNT0 : 8; /*!< [7..0] The BCNT0 counter is a readable/writable 32-bit binary
                                          *   counter b7 to b0.                                                         */
            } BCNT0_b;
        };

        union
        {
            __IOM uint8_t RSECCNT;

            struct
            {
                __IOM uint8_t SEC1 : 4;  /*!< [3..0] 1-Second Count Counts from 0 to 9 every second. When
                                          *   a carry is generated, 1 is added to the tens place.                       */
                __IOM uint8_t SEC10 : 3;
                uint8_t             : 1;
            } RSECCNT_b;
        };
    };
    __IM uint8_t RESERVED1;

    union
    {
        union
        {
            __IOM uint8_t BCNT1;

            struct
            {
                __IOM uint8_t BCNT1 : 8; /*!< [7..0] The BCNT1 counter is a readable/writable 32-bit binary
                                          *   counter b15 to b8.                                                        */
            } BCNT1_b;
        };

        union
        {
            __IOM uint8_t RMINCNT;

            struct
            {
                __IOM uint8_t MIN1 : 4;  /*!< [3..0] 1-Minute Count Counts from 0 to 9 every minute. When
                                          *   a carry is generated, 1 is added to the tens place.                       */
                __IOM uint8_t MIN10 : 3;
                uint8_t             : 1;
            } RMINCNT_b;
        };
    };
    __IM uint8_t RESERVED2;

    union
    {
        union
        {
            __IOM uint8_t BCNT2;

            struct
            {
                __IOM uint8_t BCNT2 : 8; /*!< [7..0] The BCNT2 counter is a readable/writable 32-bit binary
                                          *   counter b23 to b16.                                                       */
            } BCNT2_b;
        };

        union
        {
            __IOM uint8_t RHRCNT;

            struct
            {
                __IOM uint8_t HR1 : 4;  /*!< [3..0] 1-Hour Count Counts from 0 to 9 once per hour. When a
                                         *   carry is generated, 1 is added to the tens place.                         */
                __IOM uint8_t HR10 : 2; /*!< [5..4] 10-Hour Count Counts from 0 to 2 once per carry from
                                         *   the ones place.                                                           */
                __IOM uint8_t PM : 1;
                uint8_t          : 1;
            } RHRCNT_b;
        };
    };
    __IM uint8_t RESERVED3;

    union
    {
        union
        {
            __IOM uint8_t BCNT3;

            struct
            {
                __IOM uint8_t BCNT3 : 8; /*!< [7..0] The BCNT3 counter is a readable/writable 32-bit binary
                                          *   counter b31 to b24.                                                       */
            } BCNT3_b;
        };

        union
        {
            __IOM uint8_t RWKCNT;

            struct
            {
                __IOM uint8_t DAYW : 3;
                uint8_t            : 5;
            } RWKCNT_b;
        };
    };
    __IM uint8_t RESERVED4;

    union
    {
        __IOM uint8_t RDAYCNT;

        struct
        {
            __IOM uint8_t DATE1 : 4;   /*!< [3..0] 1-Day Count Counts from 0 to 9 once per day. When a carry
                                        *   is generated, 1 is added to the tens place.                               */
            __IOM uint8_t DATE10 : 2;  /*!< [5..4] 10-Day Count Counts from 0 to 3 once per carry from the
                                        *   ones place.                                                               */
            uint8_t : 2;
        } RDAYCNT_b;
    };
    __IM uint8_t RESERVED5;

    union
    {
        __IOM uint8_t RMONCNT;

        struct
        {
            __IOM uint8_t MON1 : 4;    /*!< [3..0] 1-Month Count Counts from 0 to 9 once per month. When
                                        *   a carry is generated, 1 is added to the tens place.                       */
            __IOM uint8_t MON10 : 1;   /*!< [4..4] 10-Month Count Counts from 0 to 1 once per carry from
                                        *   the ones place.                                                           */
            uint8_t : 3;
        } RMONCNT_b;
    };
    __IM uint8_t RESERVED6;

    union
    {
        __IOM uint16_t RYRCNT;

        struct
        {
            __IOM uint16_t YR1 : 4;    /*!< [3..0] 1-Year Count Counts from 0 to 9 once per year. When a
                                        *   carry is generated, 1 is added to the tens place.                         */
            __IOM uint16_t YR10 : 4;   /*!< [7..4] 10-Year Count Counts from 0 to 9 once per carry from
                                        *   ones place. When a carry is generated in the tens place,
                                        *   1 is added to the hundreds place.                                         */
            uint16_t : 8;
        } RYRCNT_b;
    };

    union
    {
        union
        {
            __IOM uint8_t BCNT0AR;

            struct
            {
                __IOM uint8_t BCNT0AR : 8; /*!< [7..0] he BCNT0AR counter is a readable/writable alarm register
                                            *   corresponding to 32-bit binary counter b7 to b0.                          */
            } BCNT0AR_b;
        };

        union
        {
            __IOM uint8_t RSECAR;

            struct
            {
                __OM uint8_t  SEC1  : 4;
                __IOM uint8_t SEC10 : 3;
                __IOM uint8_t ENB   : 1;
            } RSECAR_b;
        };
    };
    __IM uint8_t RESERVED7;

    union
    {
        union
        {
            __IOM uint8_t BCNT1AR;

            struct
            {
                __IOM uint8_t BCNT1AR : 8; /*!< [7..0] he BCNT1AR counter is a readable/writable alarm register
                                            *   corresponding to 32-bit binary counter b15 to b8.                         */
            } BCNT1AR_b;
        };

        union
        {
            __IOM uint8_t RMINAR;

            struct
            {
                __IOM uint8_t MIN1  : 4;
                __IOM uint8_t MIN10 : 3;
                __IOM uint8_t ENB   : 1;
            } RMINAR_b;
        };
    };
    __IM uint8_t RESERVED8;

    union
    {
        union
        {
            __IOM uint8_t BCNT2AR;

            struct
            {
                __IOM uint8_t BCNT2AR : 8; /*!< [7..0] The BCNT2AR counter is a readable/writable 32-bit binary
                                            *   counter b23 to b16.                                                       */
            } BCNT2AR_b;
        };

        union
        {
            __IOM uint8_t RHRAR;

            struct
            {
                __IOM uint8_t HR1  : 4;
                __IOM uint8_t HR10 : 2;
                __IOM uint8_t PM   : 1;
                __IOM uint8_t ENB  : 1;
            } RHRAR_b;
        };
    };
    __IM uint8_t RESERVED9;

    union
    {
        union
        {
            __IOM uint8_t BCNT3AR;

            struct
            {
                __IOM uint8_t BCNT3AR : 8; /*!< [7..0] The BCNT3AR counter is a readable/writable 32-bit binary
                                            *   counter b31 to b24.                                                       */
            } BCNT3AR_b;
        };

        union
        {
            __IOM uint8_t RWKAR;

            struct
            {
                __IOM uint8_t DAYW : 3;
                uint8_t            : 4;
                __IOM uint8_t ENB  : 1;
            } RWKAR_b;
        };
    };
    __IM uint8_t RESERVED10;

    union
    {
        union
        {
            __IOM uint8_t BCNT0AER;

            struct
            {
                __IOM uint8_t ENB : 8; /*!< [7..0] The BCNT0AER register is a readable/writable register
                                        *   for setting the alarm enable corresponding to 32-bit binary
                                        *   counter b7 to b0.                                                         */
            } BCNT0AER_b;
        };

        union
        {
            __IOM uint8_t RDAYAR;

            struct
            {
                __IOM uint8_t DATE1  : 4;
                __IOM uint8_t DATE10 : 2;
                uint8_t              : 1;
                __IOM uint8_t ENB    : 1;
            } RDAYAR_b;
        };
    };
    __IM uint8_t RESERVED11;

    union
    {
        union
        {
            __IOM uint8_t BCNT1AER;

            struct
            {
                __IOM uint8_t ENB : 8; /*!< [7..0] The BCNT1AER register is a readable/writable register
                                        *   for setting the alarm enable corresponding to 32-bit binary
                                        *   counter b15 to b8.                                                        */
            } BCNT1AER_b;
        };

        union
        {
            __IOM uint8_t RMONAR;

            struct
            {
                __IOM uint8_t MON1  : 4;
                __IOM uint8_t MON10 : 1;
                uint8_t             : 2;
                __IOM uint8_t ENB   : 1;
            } RMONAR_b;
        };
    };
    __IM uint8_t RESERVED12;

    union
    {
        union
        {
            __IOM uint16_t BCNT2AER;

            struct
            {
                __IOM uint16_t ENB : 8; /*!< [7..0] The BCNT2AER register is a readable/writable register
                                         *   for setting the alarm enable corresponding to 32-bit binary
                                         *   counter b23 to b16.                                                       */
                uint16_t : 8;
            } BCNT2AER_b;
        };

        union
        {
            __IOM uint16_t RYRAR;

            struct
            {
                __IOM uint16_t YR1  : 4;
                __IOM uint16_t YR10 : 4;
                uint16_t            : 8;
            } RYRAR_b;
        };
    };

    union
    {
        union
        {
            __IOM uint8_t BCNT3AER;

            struct
            {
                __IOM uint8_t ENB : 8; /*!< [7..0] The BCNT3AER register is a readable/writable register
                                        *   for setting the alarm enable corresponding to 32-bit binary
                                        *   counter b31 to b24.                                                       */
            } BCNT3AER_b;
        };

        union
        {
            __IOM uint8_t RYRAREN;

            struct
            {
                uint8_t           : 7;
                __IOM uint8_t ENB : 1;
            } RYRAREN_b;
        };
    };
    __IM uint8_t  RESERVED13;
    __IM uint16_t RESERVED14;

    union
    {
        __IOM uint8_t RCR1;

        struct
        {
            __IOM uint8_t AIE   : 1;
            __IOM uint8_t CIE   : 1;
            __IOM uint8_t PIE   : 1;
            __IOM uint8_t RTCOS : 1;
            __IOM uint8_t PES   : 4;
        } RCR1_b;
    };
    __IM uint8_t RESERVED15;

    union
    {
        __IOM uint8_t RCR2;

        struct
        {
            __IOM uint8_t START : 1;
            __IOM uint8_t RESET : 1;
            __IOM uint8_t ADJ30 : 1;
            __IOM uint8_t RTCOE : 1;
            __IOM uint8_t AADJE : 1;   /*!< [4..4] Automatic Adjustment Enable (When the LOCO clock is selected,
                                        *   the setting of this bit is disabled.)                                     */
            __IOM uint8_t AADJP : 1;   /*!< [5..5] Automatic Adjustment Period Select (When the LOCO clock
                                        *   is selected, the setting of this bit is disabled.)                        */
            __IOM uint8_t HR24  : 1;
            __IOM uint8_t CNTMD : 1;
        } RCR2_b;
    };
    __IM uint8_t  RESERVED16;
    __IM uint16_t RESERVED17;

    union
    {
        __IOM uint8_t RCR4;

        struct
        {
            __IOM uint8_t RCKSEL : 1;
            uint8_t              : 6;
            __IOM uint8_t ROPSEL : 1;
        } RCR4_b;
    };
    __IM uint8_t RESERVED18;

    union
    {
        __IOM uint16_t RFRH;

        struct
        {
            __IOM uint16_t RFC16 : 1;  /*!< [0..0] Frequency Comparison Value (b16) To generate the operating
                                        *   clock from the LOCOclock, this bit sets the comparison
                                        *   value of the 128-Hz clock cycle.                                          */
            uint16_t : 15;
        } RFRH_b;
    };

    union
    {
        __IOM uint16_t RFRL;

        struct
        {
            __IOM uint16_t RFC : 16;   /*!< [15..0] Frequency Comparison Value(b15-b0) To generate the operating
                                        *   clock from the main clock, this bit sets the comparison
                                        *   value of the 128-Hz clock cycle.                                          */
        } RFRL_b;
    };

    union
    {
        __IOM uint8_t RADJ;

        struct
        {
            __IOM uint8_t ADJ : 6;     /*!< [5..0] Adjustment Value These bits specify the adjustment value
                                        *   from the prescaler.                                                       */
            __IOM uint8_t PMADJ : 2;
        } RADJ_b;
    };
    __IM uint8_t           RESERVED19;
    __IM uint16_t          RESERVED20[8];
    __IOM R_RTC_RTCCR_Type RTCCR[3];
    __IM uint16_t          RESERVED21[5];
    __IOM R_RTC_CP_Type    CP[3];
} R_RTC_Type;

/* =========================================================================================================================== */
/* ================                                          R_SCI0                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Serial Communications Interface (R_SCI0)
 */

typedef struct
{
    union
    {
        union
        {
            __IOM uint8_t SMR;

            struct
            {
                __IOM uint8_t CKS  : 2;
                __IOM uint8_t MP   : 1;
                __IOM uint8_t STOP : 1;
                __IOM uint8_t PM   : 1;
                __IOM uint8_t PE   : 1;
                __IOM uint8_t CHR  : 1;
                __IOM uint8_t CM   : 1;
            } SMR_b;
        };

        union
        {
            __IOM uint8_t SMR_SMCI;

            struct
            {
                __IOM uint8_t CKS : 2;
                __IOM uint8_t BCP : 2;
                __IOM uint8_t PM  : 1;
                __IOM uint8_t PE  : 1;
                __IOM uint8_t BLK : 1;
                __IOM uint8_t GM  : 1;
            } SMR_SMCI_b;
        };
    };

    union
    {
        __IOM uint8_t BRR;

        struct
        {
            __IOM uint8_t BRR : 8;
        } BRR_b;
    };

    union
    {
        union
        {
            __IOM uint8_t SCR;

            struct
            {
                __IOM uint8_t CKE  : 2;
                __IOM uint8_t TEIE : 1;
                __IOM uint8_t MPIE : 1; /*!< [3..3] Multi-Processor Interrupt Enable(Valid in asynchronous
                                         *   mode when SMR.MP = 1)                                                     */
                __IOM uint8_t RE  : 1;
                __IOM uint8_t TE  : 1;
                __IOM uint8_t RIE : 1;
                __IOM uint8_t TIE : 1;
            } SCR_b;
        };

        union
        {
            __IOM uint8_t SCR_SMCI;

            struct
            {
                __IOM uint8_t CKE  : 2;
                __IOM uint8_t TEIE : 1;
                __IOM uint8_t MPIE : 1;
                __IOM uint8_t RE   : 1;
                __IOM uint8_t TE   : 1;
                __IOM uint8_t RIE  : 1;
                __IOM uint8_t TIE  : 1;
            } SCR_SMCI_b;
        };
    };

    union
    {
        __IOM uint8_t TDR;

        struct
        {
            __IOM uint8_t TDR : 8;
        } TDR_b;
    };

    union
    {
        union
        {
            __IOM uint8_t SSR;

            struct
            {
                __IOM uint8_t MPBT : 1;
                __IM uint8_t  MPB  : 1;
                __IM uint8_t  TEND : 1;
                __IOM uint8_t PER  : 1;
                __IOM uint8_t FER  : 1;
                __IOM uint8_t ORER : 1;
                __IOM uint8_t RDRF : 1;
                __IOM uint8_t TDRE : 1;
            } SSR_b;
        };

        union
        {
            __IOM uint8_t SSR_FIFO;

            struct
            {
                __IOM uint8_t DR : 1;   /*!< [0..0] Receive Data Ready flag(Valid only in asynchronous mode(including
                                         *   multi-processor) and FIFO selected)                                       */
                uint8_t            : 1;
                __IOM uint8_t TEND : 1;
                __IOM uint8_t PER  : 1;
                __IOM uint8_t FER  : 1;
                __IOM uint8_t ORER : 1;
                __IOM uint8_t RDF  : 1;
                __IOM uint8_t TDFE : 1;
            } SSR_FIFO_b;
        };

        union
        {
            __IOM uint8_t SSR_SMCI;

            struct
            {
                __IOM uint8_t MPBT : 1; /*!< [0..0] Multi-Processor Bit TransferThis bit should be 0 in smart
                                         *   card interface mode.                                                      */
                __IM uint8_t MPB : 1;   /*!< [1..1] Multi-ProcessorThis bit should be 0 in smart card interface
                                         *   mode.                                                                     */
                __IM uint8_t  TEND : 1;
                __IOM uint8_t PER  : 1;
                __IOM uint8_t ERS  : 1;
                __IOM uint8_t ORER : 1;
                __IOM uint8_t RDRF : 1;
                __IOM uint8_t TDRE : 1;
            } SSR_SMCI_b;
        };
    };

    union
    {
        __IM uint8_t RDR;

        struct
        {
            __IM uint8_t RDR : 8;
        } RDR_b;
    };

    union
    {
        __IOM uint8_t SCMR;

        struct
        {
            __IOM uint8_t SMIF : 1;
            uint8_t            : 1;
            __IOM uint8_t SINV : 1;    /*!< [2..2] Transmitted/Received Data InvertSet this bit to 0 if
                                        *   operation is to be in simple I2C mode.                                    */
            __IOM uint8_t SDIR : 1;    /*!< [3..3] Transmitted/Received Data Transfer DirectionNOTE: The
                                        *   setting is invalid and a fixed data length of 8 bits is
                                        *   used in modes other than asynchronous mode.Set this bit
                                        *   to 1 if operation is to be in simple I2C mode.                            */
            __IOM uint8_t CHR1 : 1;
            uint8_t            : 2;
            __IOM uint8_t BCP2 : 1;    /*!< [7..7] Base Clock Pulse 2Selects the number of base clock cycles
                                        *   in combination with the SMR.BCP[1:0] bits                                 */
        } SCMR_b;
    };

    union
    {
        __IOM uint8_t SEMR;

        struct
        {
            __IOM uint8_t ACS0 : 1;    /*!< [0..0] Asynchronous Mode Clock Source Select (Valid only in
                                        *   asynchronous mode).                                                       */
            __IOM uint8_t PADIS : 1;   /*!< [1..1] Preamble function Disable (Valid only in asynchronous
                                        *   mode).                                                                    */
            __IOM uint8_t BRME  : 1;
            __IOM uint8_t ABCSE : 1;   /*!< [3..3] Asynchronous Mode Extended Base Clock Select 1(Valid
                                        *   only in asynchronous mode and SCR.CKE[1]=0)                               */
            __IOM uint8_t ABCS : 1;    /*!< [4..4] Asynchronous Mode Base Clock Select(Valid only in asynchronous
                                        *   mode)                                                                     */
            __IOM uint8_t NFEN : 1;    /*!< [5..5] Digital Noise Filter Function Enable(The NFEN bit should
                                        *   be 0 without simple I2C mode and asynchronous mode.)In
                                        *   asynchronous mode, for RXDn input only. In simple I2C mode,
                                        *   for RXDn/TxDn input.                                                      */
            __IOM uint8_t BGDM : 1;    /*!< [6..6] Baud Rate Generator Double-Speed Mode Select(Only valid
                                        *   the CKE[1] bit in SCR is 0 in asynchronous mode).                         */
            __IOM uint8_t RXDESEL : 1; /*!< [7..7] Asynchronous Start Bit Edge Detection Select(Valid only
                                        *   in asynchronous mode)                                                     */
        } SEMR_b;
    };

    union
    {
        __IOM uint8_t SNFR;

        struct
        {
            __IOM uint8_t NFCS : 3;
            uint8_t            : 5;
        } SNFR_b;
    };

    union
    {
        __IOM uint8_t SIMR1;

        struct
        {
            __IOM uint8_t IICM  : 1;
            uint8_t             : 2;
            __IOM uint8_t IICDL : 5;   /*!< [7..3] SDA Delay Output SelectCycles below are of the clock
                                        *   signal from the on-chip baud rate generator.                              */
        } SIMR1_b;
    };

    union
    {
        __IOM uint8_t SIMR2;

        struct
        {
            __IOM uint8_t IICINTM : 1;
            __IOM uint8_t IICCSC  : 1;
            uint8_t               : 3;
            __IOM uint8_t IICACKT : 1;
            uint8_t               : 2;
        } SIMR2_b;
    };

    union
    {
        __IOM uint8_t SIMR3;

        struct
        {
            __IOM uint8_t IICSTAREQ  : 1;
            __IOM uint8_t IICRSTAREQ : 1;
            __IOM uint8_t IICSTPREQ  : 1;
            __IOM uint8_t IICSTIF    : 1; /*!< [3..3] Issuing of Start, Restart, or Stop Condition Completed
                                           *   Flag(When 0 is written to IICSTIF, it is cleared to 0.)                   */
            __IOM uint8_t IICSDAS : 2;
            __IOM uint8_t IICSCLS : 2;
        } SIMR3_b;
    };

    union
    {
        __IM uint8_t SISR;

        struct
        {
            __IM uint8_t IICACKR : 1;
            uint8_t              : 7;
        } SISR_b;
    };

    union
    {
        __IOM uint8_t SPMR;

        struct
        {
            __IOM uint8_t SSE    : 1;
            __IOM uint8_t CTSE   : 1;
            __IOM uint8_t MSS    : 1;
            __IOM uint8_t CSTPEN : 1;
            __IOM uint8_t MFF    : 1;
            uint8_t              : 1;
            __IOM uint8_t CKPOL  : 1;
            __IOM uint8_t CKPH   : 1;
        } SPMR_b;
    };

    union
    {
        union
        {
            __IOM uint16_t TDRHL;

            struct
            {
                __OM uint16_t TDRHL : 16;
            } TDRHL_b;
        };

        union
        {
            __OM uint16_t FTDRHL;

            struct
            {
                __OM uint16_t TDAT : 9; /*!< [8..0] Serial transmit data (Valid only in asynchronous mode(including
                                         *   multi-processor) or clock synchronous mode, and FIFO selected)            */
                __OM uint16_t MPBT : 1; /*!< [9..9] Multi-processor transfer bit flag(Valid only in asynchronous
                                         *   mode and SMR.MP=1 and FIFO selected)                                      */
                uint16_t : 6;
            } FTDRHL_b;
        };

        struct
        {
            union
            {
                __OM uint8_t FTDRH;

                struct
                {
                    __OM uint8_t TDATH : 1; /*!< [0..0] Serial transmit data (b8) (Valid only in asynchronous
                                             *   mode(including multi-processor) or clock synchronous mode,
                                             *   and FIFO selected)                                                        */
                    __OM uint8_t MPBT : 1;  /*!< [1..1] Multi-processor transfer bit flag(Valid only in asynchronous
                                             *   mode and SMR.MP=1 and FIFO selected)                                      */
                    uint8_t : 6;
                } FTDRH_b;
            };

            union
            {
                __OM uint8_t FTDRL;

                struct
                {
                    __OM uint8_t TDATL : 8; /*!< [7..0] Serial transmit data(b7-b0) (Valid only in asynchronous
                                             *   mode(including multi-processor) or clock synchronous mode,
                                             *   and FIFO selected)                                                        */
                } FTDRL_b;
            };
        };
    };

    union
    {
        union
        {
            __IM uint16_t RDRHL;

            struct
            {
                __IM uint16_t RDRHL : 16;
            } RDRHL_b;
        };

        union
        {
            __IM uint16_t FRDRHL;

            struct
            {
                __IM uint16_t RDAT : 9; /*!< [8..0] Serial receive data(Valid only in asynchronous mode(including
                                         *   multi-processor) or clock synchronous mode, and FIFO selected)            */
                __IM uint16_t MPB : 1;  /*!< [9..9] Multi-processor bit flag(Valid only in asynchronous mode
                                         *   with SMR.MP=1 and FIFO selected) It can read multi-processor
                                         *   bit corresponded to serial receive data(RDATA[8:0])                       */
                __IM uint16_t DR   : 1;
                __IM uint16_t PER  : 1;
                __IM uint16_t FER  : 1;
                __IM uint16_t ORER : 1;
                __IM uint16_t RDF  : 1;
                uint16_t           : 1;
            } FRDRHL_b;
        };

        struct
        {
            union
            {
                __IM uint8_t FRDRH;

                struct
                {
                    __IM uint8_t RDATH : 1; /*!< [0..0] Serial receive data(b8)(Valid only in asynchronous mode(including
                                             *   multi-processor) or clock synchronous mode, and FIFO selected)            */
                    __IM uint8_t MPB : 1;   /*!< [1..1] Multi-processor bit flag(Valid only in asynchronous mode
                                             *   with SMR.MP=1 and FIFO selected) It can read multi-processor
                                             *   bit corresponded to serial receive data(RDATA[8:0])                       */
                    __IM uint8_t DR   : 1;
                    __IM uint8_t PER  : 1;
                    __IM uint8_t FER  : 1;
                    __IM uint8_t ORER : 1;
                    __IM uint8_t RDF  : 1;
                    uint8_t           : 1;
                } FRDRH_b;
            };

            union
            {
                __IM uint8_t FRDRL;

                struct
                {
                    __IM uint8_t RDATL : 8; /*!< [7..0] Serial receive data(Valid only in asynchronous mode(including
                                             *   multi-processor) or clock synchronous mode, and FIFO selected)NOTE:
                                             *   When reading both of FRDRH register and FRDRL register,
                                             *   please read by an order of the FRDRH register and the FRDRL
                                             *   register.                                                                 */
                } FRDRL_b;
            };
        };
    };

    union
    {
        __IOM uint8_t MDDR;

        struct
        {
            __IOM uint8_t MDDR : 8;
        } MDDR_b;
    };

    union
    {
        __IOM uint8_t DCCR;

        struct
        {
            __IOM uint8_t DCMF  : 1;
            uint8_t             : 2;
            __IOM uint8_t DPER  : 1;
            __IOM uint8_t DFER  : 1;
            uint8_t             : 1;
            __IOM uint8_t IDSEL : 1;   /*!< [6..6] ID frame select(Valid only in asynchronous mode(including
                                        *   multi-processor)                                                          */
            __IOM uint8_t DCME : 1;    /*!< [7..7] Data Compare Match Enable(Valid only in asynchronous
                                        *   mode(including multi-processor)                                           */
        } DCCR_b;
    };

    union
    {
        __IOM uint16_t FCR;

        struct
        {
            __IOM uint16_t FM : 1;     /*!< [0..0] FIFO Mode Select(Valid only in asynchronous mode(including
                                        *   multi-processor) or clock synchronous mode)                               */
            __IOM uint16_t RFRST : 1;
            __IOM uint16_t TFRST : 1;
            __IOM uint16_t DRES  : 1;  /*!< [3..3] Receive data ready error select bit(When detecting a
                                        *   reception data ready, the interrupt request is selected.)                 */
            __IOM uint16_t TTRG : 4;   /*!< [7..4] Transmit FIFO data trigger number(Valid only in asynchronous
                                        *   mode(including multi-processor) or clock synchronous mode)                */
            __IOM uint16_t RTRG : 4;   /*!< [11..8] Receive FIFO data trigger number(Valid only in asynchronous
                                        *   mode(including multi-processor) or clock synchronous mode)                */
            __IOM uint16_t RSTRG : 4;  /*!< [15..12] RTS Output Active Trigger Number Select(Valid only
                                        *   in asynchronous mode(including multi-processor) or clock
                                        *   synchronous mode)                                                         */
        } FCR_b;
    };

    union
    {
        __IM uint16_t FDR;

        struct
        {
            __IM uint16_t R : 5;       /*!< [4..0] Receive FIFO Data CountIndicate the quantity of receive
                                        *   data stored in FRDRH and FRDRL(Valid only in asynchronous
                                        *   mode(including multi-processor) or clock synchronous mode,
                                        *   while FCR.FM=1)                                                           */
            uint16_t        : 3;
            __IM uint16_t T : 5;       /*!< [12..8] Transmit FIFO Data CountIndicate the quantity of non-transmit
                                        *   data stored in FTDRH and FTDRL(Valid only in asynchronous
                                        *   mode(including multi-processor) or clock synchronous mode,
                                        *   while FCR.FM=1)                                                           */
            uint16_t : 3;
        } FDR_b;
    };

    union
    {
        __IM uint16_t LSR;

        struct
        {
            __IM uint16_t ORER : 1;    /*!< [0..0] Overrun Error Flag (Valid only in asynchronous mode(including
                                        *   multi-processor) or clock synchronous mode, and FIFO selected)            */
            uint16_t           : 1;
            __IM uint16_t FNUM : 5;    /*!< [6..2] Framing Error CountIndicates the quantity of data with
                                        *   a framing error among the receive data stored in the receive
                                        *   FIFO data register (FRDRH and FRDRL).                                     */
            uint16_t           : 1;
            __IM uint16_t PNUM : 5;    /*!< [12..8] Parity Error CountIndicates the quantity of data with
                                        *   a parity error among the receive data stored in the receive
                                        *   FIFO data register (FRDRH and FRDRL).                                     */
            uint16_t : 3;
        } LSR_b;
    };

    union
    {
        __IOM uint16_t CDR;

        struct
        {
            __IOM uint16_t CMPD : 9;   /*!< [8..0] Compare Match DataCompare data pattern for address match
                                        *   wake-up function                                                          */
            uint16_t : 7;
        } CDR_b;
    };

    union
    {
        __IOM uint8_t SPTR;

        struct
        {
            __IM uint8_t RXDMON : 1;   /*!< [0..0] Serial input data monitor bit(The state of the RXD terminal
                                        *   is shown.)                                                                */
            __IOM uint8_t SPB2DT : 1;  /*!< [1..1] Serial port break data select bit(The output level of
                                        *   TxD terminal is selected when SCR.TE = 0.)                                */
            __IOM uint8_t SPB2IO : 1;  /*!< [2..2] Serial port break I/O bit(It's selected whether the value
                                        *   of SPB2DT is output to TxD terminal.)                                     */
            uint8_t            : 1;
            __IOM uint8_t RINV : 1;
            __IOM uint8_t TINV : 1;
            __IOM uint8_t ASEN : 1;
            __IOM uint8_t ATEN : 1;
        } SPTR_b;
    };

    union
    {
        __IOM uint8_t ACTR;

        struct
        {
            __IOM uint8_t AST : 3;
            __IOM uint8_t AJD : 1;
            __IOM uint8_t ATT : 3;
            __IOM uint8_t AET : 1;
        } ACTR_b;
    };
    __IM uint16_t RESERVED;

    union
    {
        __IOM uint8_t ESMER;

        struct
        {
            __IOM uint8_t ESME : 1;
            uint8_t            : 7;
        } ESMER_b;
    };

    union
    {
        __IOM uint8_t CR0;

        struct
        {
            uint8_t             : 1;
            __IM uint8_t  SFSF  : 1;
            __IM uint8_t  RXDSF : 1;
            __IOM uint8_t BRME  : 1;
            uint8_t             : 4;
        } CR0_b;
    };

    union
    {
        __IOM uint8_t CR1;

        struct
        {
            __IOM uint8_t BFE   : 1;
            __IOM uint8_t CF0RE : 1;
            __IOM uint8_t CF1DS : 2;
            __IOM uint8_t PIBE  : 1;
            __IOM uint8_t PIBS  : 3;
        } CR1_b;
    };

    union
    {
        __IOM uint8_t CR2;

        struct
        {
            __IOM uint8_t DFCS : 3;
            uint8_t            : 1;
            __IOM uint8_t BCCS : 2;
            __IOM uint8_t RTS  : 2;
        } CR2_b;
    };

    union
    {
        __IOM uint8_t CR3;

        struct
        {
            __IOM uint8_t SDST : 1;
            uint8_t            : 7;
        } CR3_b;
    };

    union
    {
        __IOM uint8_t PCR;

        struct
        {
            __IOM uint8_t TXDXPS : 1;
            __IOM uint8_t RXDXPS : 1;
            uint8_t              : 2;
            __IOM uint8_t SHARPS : 1;
            uint8_t              : 3;
        } PCR_b;
    };

    union
    {
        __IOM uint8_t ICR;

        struct
        {
            __IOM uint8_t BFDIE  : 1;
            __IOM uint8_t CF0MIE : 1;
            __IOM uint8_t CF1MIE : 1;
            __IOM uint8_t PIBDIE : 1;
            __IOM uint8_t BCDIE  : 1;
            __IOM uint8_t AEDIE  : 1;
            uint8_t              : 2;
        } ICR_b;
    };

    union
    {
        __IM uint8_t STR;

        struct
        {
            __IM uint8_t BFDF  : 1;
            __IM uint8_t CF0MF : 1;
            __IM uint8_t CF1MF : 1;
            __IM uint8_t PIBDF : 1;
            __IM uint8_t BCDF  : 1;
            __IM uint8_t AEDF  : 1;
            uint8_t            : 2;
        } STR_b;
    };

    union
    {
        __IOM uint8_t STCR;

        struct
        {
            __IOM uint8_t BFDCL  : 1;
            __IOM uint8_t CF0MCL : 1;
            __IOM uint8_t CF1MCL : 1;
            __IOM uint8_t PIBDCL : 1;
            __IOM uint8_t BCDCL  : 1;
            __IOM uint8_t AEDCL  : 1;
            uint8_t              : 2;
        } STCR_b;
    };
    __IOM uint8_t CF0DR;

    union
    {
        __IOM uint8_t CF0CR;

        struct
        {
            __IOM uint8_t CF0CE0 : 1;
            __IOM uint8_t CF0CE1 : 1;
            __IOM uint8_t CF0CE2 : 1;
            __IOM uint8_t CF0CE3 : 1;
            __IOM uint8_t CF0CE4 : 1;
            __IOM uint8_t CF0CE5 : 1;
            __IOM uint8_t CF0CE6 : 1;
            __IOM uint8_t CF0CE7 : 1;
        } CF0CR_b;
    };
    __IOM uint8_t CF0RR;
    __IOM uint8_t PCF1DR;
    __IOM uint8_t SCF1DR;

    union
    {
        __IOM uint8_t CF1CR;

        struct
        {
            __IOM uint8_t CF1CE0 : 1;
            __IOM uint8_t CF1CE1 : 1;
            __IOM uint8_t CF1CE2 : 1;
            __IOM uint8_t CF1CE3 : 1;
            __IOM uint8_t CF1CE4 : 1;
            __IOM uint8_t CF1CE5 : 1;
            __IOM uint8_t CF1CE6 : 1;
            __IOM uint8_t CF1CE7 : 1;
        } CF1CR_b;
    };
    __IOM uint8_t CF1RR;

    union
    {
        __IOM uint8_t TCR;

        struct
        {
            __IOM uint8_t TCST : 1;
            uint8_t            : 7;
        } TCR_b;
    };

    union
    {
        __IOM uint8_t TMR;

        struct
        {
            __IOM uint8_t TOMS : 2;
            uint8_t            : 1;
            __IOM uint8_t TWRC : 1;
            __IOM uint8_t TCSS : 3;
            uint8_t            : 1;
        } TMR_b;
    };
    __IOM uint8_t TPRE;
    __IOM uint8_t TCNT;
} R_SCI0_Type;

/* =========================================================================================================================== */
/* ================                                          R_SDHI0                                          ================ */
/* =========================================================================================================================== */

/**
 * @brief SD/MMC Host Interface (R_SDHI0)
 */

typedef struct
{
    union
    {
        __IOM uint32_t SD_CMD;

        struct
        {
            __IOM uint32_t CMDIDX : 6;  /*!< [5..0] Command IndexThese bits specify Command Format[45:40]
                                         *   (command index).[Examples]CMD6: SD_CMD[7:0] = 8'b00_000110CMD18:
                                         *   SD_CMD[7:0] = 8'b00_010010ACMD13: SD_CMD[7:0] = 8'b01_001101              */
            __IOM uint32_t ACMD  : 2;
            __IOM uint32_t RSPTP : 3;   /*!< [10..8] Mode/Response TypeNOTE: As some commands cannot be used
                                         *   in normal mode, see section 1.4.10, Example of SD_CMD Register
                                         *   Setting to select mode/response type.                                     */
            __IOM uint32_t CMDTP : 1;
            __IOM uint32_t CMDRW : 1;   /*!< [12..12] Write/Read Mode (enabled when the command with data
                                         *   is handled)                                                               */
            __IOM uint32_t TRSTP : 1;   /*!< [13..13] Single/Multiple Block Transfer (enabled when the command
                                         *   with data is handled)                                                     */
            __IOM uint32_t CMD12AT : 2; /*!< [15..14] Multiple Block Transfer Mode (enabled at multiple block
                                         *   transfer)                                                                 */
            uint32_t : 16;
        } SD_CMD_b;
    };
    __IM uint32_t RESERVED;

    union
    {
        __IOM uint32_t SD_ARG;

        struct
        {
            __IOM uint32_t SD_ARG : 32;
        } SD_ARG_b;
    };

    union
    {
        __IOM uint32_t SD_ARG1;

        struct
        {
            __IOM uint32_t SD_ARG1 : 16;
            uint32_t               : 16;
        } SD_ARG1_b;
    };

    union
    {
        __IOM uint32_t SD_STOP;

        struct
        {
            __IOM uint32_t STP : 1;    /*!< [0..0] Stop- When STP is set to 1 during multiple block transfer,
                                        *   CMD12 is issued to halt the transfer through the SD host
                                        *   interface.However, if a command sequence is halted because
                                        *   of a communications error or timeout, CMD12 is not issued.
                                        *   Although continued buffer access is possible even after
                                        *   STP has been set to 1, the buffer access error bit (ERR5
                                        *   or ERR4) in SD_INFO2 will be set accordingly.- When STP
                                        *   has been set to 1 during transfer for single block write,
                                        *   the access end flag is set when SD_BUF becomes emp                        */
            uint32_t           : 7;
            __IOM uint32_t SEC : 1;    /*!< [8..8] Block Count EnableSet SEC to 1 at multiple block transfer.When
                                        *   SD_CMD is set as follows to start the command sequence
                                        *   while SEC is set to 1, CMD12 is automatically issued to
                                        *   stop multi-block transfer with the number of blocks which
                                        *   is set to SD_SECCNT.1. CMD18 or CMD25 in normal mode (SD_CMD[10:8]
                                        *   = 000)2. SD_CMD[15:13] = 001 in extended mode (CMD12 is
                                        *   automatically issued, multiple block transfer)When the
                                        *   command sequence is halted because of a communications
                                        *   error or timeout, CMD12 is not automatically i                            */
            uint32_t : 23;
        } SD_STOP_b;
    };

    union
    {
        __IOM uint32_t SD_SECCNT;

        struct
        {
            __IOM uint32_t SD_SECCNT : 32; /*!< [31..0] Number of Transfer BlocksNOTE: Do not change the value
                                            *   of this bit when the CBSY bit in SD_INFO2 is set to 1.                    */
        } SD_SECCNT_b;
    };

    union
    {
        __IM uint32_t SD_RSP10;

        struct
        {
            __IM uint32_t SD_RSP10 : 32;
        } SD_RSP10_b;
    };

    union
    {
        __IM uint32_t SD_RSP1;

        struct
        {
            __IM uint32_t SD_RSP1 : 16;
            uint32_t              : 16;
        } SD_RSP1_b;
    };

    union
    {
        __IM uint32_t SD_RSP32;

        struct
        {
            __IM uint32_t SD_RSP32 : 32;
        } SD_RSP32_b;
    };

    union
    {
        __IM uint32_t SD_RSP3;

        struct
        {
            __IM uint32_t SD_RSP3 : 16;
            uint32_t              : 16;
        } SD_RSP3_b;
    };

    union
    {
        __IM uint32_t SD_RSP54;

        struct
        {
            __IM uint32_t SD_RSP54 : 32;
        } SD_RSP54_b;
    };

    union
    {
        __IM uint32_t SD_RSP5;

        struct
        {
            __IM uint32_t SD_RSP5 : 16;
            uint32_t              : 16;
        } SD_RSP5_b;
    };

    union
    {
        __IM uint32_t SD_RSP76;

        struct
        {
            __IM uint32_t SD_RSP76 : 24;
            uint32_t               : 8;
        } SD_RSP76_b;
    };

    union
    {
        __IM uint32_t SD_RSP7;

        struct
        {
            __IM uint32_t SD_RSP7 : 8;
            uint32_t              : 24;
        } SD_RSP7_b;
    };

    union
    {
        __IOM uint32_t SD_INFO1;

        struct
        {
            __IOM uint32_t RSPEND  : 1;
            uint32_t               : 1;
            __IOM uint32_t ACEND   : 1;
            __IOM uint32_t SDCDRM  : 1;
            __IOM uint32_t SDCDIN  : 1;
            __IM uint32_t  SDCDMON : 1;
            uint32_t               : 1;
            __IM uint32_t  SDWPMON : 1;
            __IOM uint32_t SDD3RM  : 1;
            __IOM uint32_t SDD3IN  : 1;
            __IM uint32_t  SDD3MON : 1;
            uint32_t               : 21;
        } SD_INFO1_b;
    };

    union
    {
        __IOM uint32_t SD_INFO2;

        struct
        {
            __IOM uint32_t CMDE    : 1;
            __IOM uint32_t CRCE    : 1;
            __IOM uint32_t ENDE    : 1;
            __IOM uint32_t DTO     : 1;
            __IOM uint32_t ILW     : 1;
            __IOM uint32_t ILR     : 1;
            __IOM uint32_t RSPTO   : 1;
            __IM uint32_t  SDD0MON : 1;      /*!< [7..7] SDDAT0Indicates the SDDAT0 state of the port specified
                                              *   by SD_PORTSEL.                                                            */
            __IOM uint32_t BRE          : 1;
            __IOM uint32_t BWE          : 1;
            uint32_t                    : 3;
            __IM uint32_t SD_CLK_CTRLEN : 1; /*!< [13..13] When a command sequence is started by writing to SD_CMD,
                                              *   the CBSY bit is set to 1 and, at the same time, the SCLKDIVEN
                                              *   bit is set to 0. The SCLKDIVEN bit is set to 1 after 8
                                              *   cycles of SDCLK have elapsed after setting of the CBSY
                                              *   bit to 0 due to completion of the command sequence.                       */
            __IM uint32_t  CBSY : 1;
            __IOM uint32_t ILA  : 1;
            uint32_t            : 16;
        } SD_INFO2_b;
    };

    union
    {
        __IOM uint32_t SD_INFO1_MASK;

        struct
        {
            __IOM uint32_t RSPENDM : 1;
            uint32_t               : 1;
            __IOM uint32_t ACENDM  : 1;
            __IOM uint32_t SDCDRMM : 1;
            __IOM uint32_t SDCDINM : 1;
            uint32_t               : 3;
            __IOM uint32_t SDD3RMM : 1;
            __IOM uint32_t SDD3INM : 1;
            uint32_t               : 22;
        } SD_INFO1_MASK_b;
    };

    union
    {
        __IOM uint32_t SD_INFO2_MASK;

        struct
        {
            __IOM uint32_t CMDEM  : 1;
            __IOM uint32_t CRCEM  : 1;
            __IOM uint32_t ENDEM  : 1;
            __IOM uint32_t DTOM   : 1;
            __IOM uint32_t ILWM   : 1;
            __IOM uint32_t ILRM   : 1;
            __IOM uint32_t RSPTOM : 1;
            uint32_t              : 1;
            __IOM uint32_t BREM   : 1;
            __IOM uint32_t BWEM   : 1;
            uint32_t              : 5;
            __IOM uint32_t ILAM   : 1;
            uint32_t              : 16;
        } SD_INFO2_MASK_b;
    };

    union
    {
        __IOM uint32_t SD_CLK_CTRL;

        struct
        {
            __IOM uint32_t CLKSEL    : 8;
            __IOM uint32_t CLKEN     : 1;
            __IOM uint32_t CLKCTRLEN : 1;
            uint32_t                 : 22;
        } SD_CLK_CTRL_b;
    };

    union
    {
        __IOM uint32_t SD_SIZE;

        struct
        {
            __IOM uint32_t LEN : 10;   /*!< [9..0] Transfer Data SizeThese bits specify a size between 1
                                        *   and 512 bytes for the transfer of single blocks.In cases
                                        *   of multiple block transfer with automatic issuing of CMD12
                                        *   (CMD18 and CMD25), the only specifiable transfer data size
                                        *   is 512 bytes. Furthermore, in cases of multiple block transfer
                                        *   without automatic issuing of CMD12, as well as 512 bytes,
                                        *   32, 64, 128, and 256 bytes are specifiable. However, in
                                        *   the reading of 32, 64, 128, and 256 bytes for the transfer
                                        *   of multiple blocks, this is restricted to mult                            */
            uint32_t : 22;
        } SD_SIZE_b;
    };

    union
    {
        __IOM uint32_t SD_OPTION;

        struct
        {
            __IOM uint32_t CTOP     : 4;
            __IOM uint32_t TOP      : 4;
            __IOM uint32_t TOUTMASK : 1; /*!< [8..8] Timeout MASKWhen timeout occurs in case of inactivating
                                          *   timeout, software reset should be executed to terminate
                                          *   command sequence.                                                         */
            uint32_t              : 4;
            __IOM uint32_t WIDTH8 : 1;
            uint32_t              : 1;
            __IOM uint32_t WIDTH  : 1;   /*!< [15..15] Bus WidthNOTE: The initial value is applied at a reset
                                          *   and when the SOFT_RST.SDRST flag is 0.                                    */
            uint32_t : 16;
        } SD_OPTION_b;
    };
    __IM uint32_t RESERVED1;

    union
    {
        __IM uint32_t SD_ERR_STS1;

        struct
        {
            __IM uint32_t CMDE0 : 1;    /*!< [0..0] Command Error 0NOTE: other than a response to a command
                                         *   issued within a command sequence                                          */
            __IM uint32_t CMDE1 : 1;    /*!< [1..1] Command Error 1NOTE: In cases where CMD12 is issued by
                                         *   setting a command index in SD_CMD, this is Indicated in
                                         *   CMDE0.                                                                    */
            __IM uint32_t RSPLENE0 : 1; /*!< [2..2] Response Length Error 0NOTE: other than a response to
                                         *   a command issued within a command sequence                                */
            __IM uint32_t RSPLENE1 : 1; /*!< [3..3] Response Length Error 1NOTE: In cases where CMD12 is
                                         *   issued by setting a command index in SD_CMD, this is indicated
                                         *   in RSPLENE0.                                                              */
            __IM uint32_t RDLENE   : 1;
            __IM uint32_t CRCLENE  : 1;
            uint32_t               : 2;
            __IM uint32_t RSPCRCE0 : 1; /*!< [8..8] Response CRC Error 0NOTE: other than a response to a
                                         *   command issued within a command sequence                                  */
            __IM uint32_t RSPCRCE1 : 1; /*!< [9..9] Response CRC Error 1NOTE: In cases where CMD12 is issued
                                         *   by setting a command index in SD_CMD, this is indicated
                                         *   in RSPCRCE0.                                                              */
            __IM uint32_t RDCRCE : 1;
            __IM uint32_t CRCTKE : 1;
            __IM uint32_t CRCTK  : 3;   /*!< [14..12] CRC Status TokenStore the CRC status token value (normal
                                         *   value is 010b)                                                            */
            uint32_t : 17;
        } SD_ERR_STS1_b;
    };

    union
    {
        __IM uint32_t SD_ERR_STS2;

        struct
        {
            __IM uint32_t RSPTO0   : 1;
            __IM uint32_t RSPTO1   : 1;
            __IM uint32_t BSYTO0   : 1;
            __IM uint32_t BSYTO1   : 1;
            __IM uint32_t RDTO     : 1;
            __IM uint32_t CRCTO    : 1;
            __IM uint32_t CRCBSYTO : 1;
            uint32_t               : 25;
        } SD_ERR_STS2_b;
    };

    union
    {
        __IOM uint32_t SD_BUF0;

        struct
        {
            __IOM uint32_t SD_BUF : 32; /*!< [31..0] SD Buffer RegisterWhen writing to the SD card, the write
                                         *   data is written to this register. When reading from the
                                         *   SD card, the read data is read from this register. This
                                         *   register is internally connected to two 512-byte buffers.If
                                         *   both buffers are not empty when executing multiple block
                                         *   read, SD/MMC clock is stopped to suspend receiving data.
                                         *   When one of buffers is empty, SD/MMC clock is supplied
                                         *   to resume receiving data.                                                 */
        } SD_BUF0_b;
    };
    __IM uint32_t RESERVED2;

    union
    {
        __IOM uint32_t SDIO_MODE;

        struct
        {
            __IOM uint32_t INTEN  : 1;
            uint32_t              : 1;
            __IOM uint32_t RWREQ  : 1;
            uint32_t              : 5;
            __IOM uint32_t IOABT  : 1;
            __IOM uint32_t C52PUB : 1;
            uint32_t              : 22;
        } SDIO_MODE_b;
    };

    union
    {
        __IOM uint32_t SDIO_INFO1;

        struct
        {
            __IOM uint32_t IOIRQ   : 1;
            uint32_t               : 13;
            __IOM uint32_t EXPUB52 : 1;
            __IOM uint32_t EXWT    : 1;
            uint32_t               : 16;
        } SDIO_INFO1_b;
    };

    union
    {
        __IOM uint32_t SDIO_INFO1_MASK;

        struct
        {
            __IOM uint32_t IOIRQM   : 1;
            uint32_t                : 13;
            __IOM uint32_t EXPUB52M : 1;
            __IOM uint32_t EXWTM    : 1;
            uint32_t                : 16;
        } SDIO_INFO1_MASK_b;
    };
    __IM uint32_t RESERVED3[79];

    union
    {
        __IOM uint32_t SD_DMAEN;

        struct
        {
            uint32_t             : 1;
            __IOM uint32_t DMAEN : 1;
            uint32_t             : 30;
        } SD_DMAEN_b;
    };
    __IM uint32_t RESERVED4[3];

    union
    {
        __IOM uint32_t SOFT_RST;

        struct
        {
            __IOM uint32_t SDRST : 1;
            uint32_t             : 31;
        } SOFT_RST_b;
    };
    __IM uint32_t RESERVED5[2];

    union
    {
        __IOM uint32_t SDIF_MODE;

        struct
        {
            uint32_t               : 8;
            __IOM uint32_t NOCHKCR : 1;
            uint32_t               : 23;
        } SDIF_MODE_b;
    };
    __IM uint32_t RESERVED6[4];

    union
    {
        __IOM uint32_t EXT_SWAP;

        struct
        {
            uint32_t             : 6;
            __IOM uint32_t BWSWP : 1;
            __IOM uint32_t BRSWP : 1;
            uint32_t             : 24;
        } EXT_SWAP_b;
    };
} R_SDHI0_Type;

/* =========================================================================================================================== */
/* ================                                          R_SPI0                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Serial Peripheral Interface (R_SPI0)
 */

typedef struct
{
    union
    {
        __IOM uint8_t SPCR;

        struct
        {
            __IOM uint8_t SPMS   : 1;
            __IOM uint8_t TXMD   : 1;
            __IOM uint8_t MODFEN : 1;
            __IOM uint8_t MSTR   : 1;
            __IOM uint8_t SPEIE  : 1;
            __IOM uint8_t SPTIE  : 1;
            __IOM uint8_t SPE    : 1;
            __IOM uint8_t SPRIE  : 1;
        } SPCR_b;
    };

    union
    {
        __IOM uint8_t SSLP;

        struct
        {
            __IOM uint8_t SSL0P : 1;
            __IOM uint8_t SSL1P : 1;
            __IOM uint8_t SSL2P : 1;
            __IOM uint8_t SSL3P : 1;
            __IOM uint8_t SSL4P : 1;
            __IOM uint8_t SSL5P : 1;
            __IOM uint8_t SSL6P : 1;
            __IOM uint8_t SSL7P : 1;
        } SSLP_b;
    };

    union
    {
        __IOM uint8_t SPPCR;

        struct
        {
            __IOM uint8_t SPLP  : 1;
            __IOM uint8_t SPLP2 : 1;
            uint8_t             : 2;
            __IOM uint8_t MOIFV : 1;
            __IOM uint8_t MOIFE : 1;
            uint8_t             : 2;
        } SPPCR_b;
    };

    union
    {
        __IOM uint8_t SPSR;

        struct
        {
            __IOM uint8_t OVRF  : 1;
            __IM uint8_t  IDLNF : 1;
            __IOM uint8_t MODF  : 1;
            __IOM uint8_t PERF  : 1;
            __IOM uint8_t UDRF  : 1;
            __IOM uint8_t SPTEF : 1;
            __IOM uint8_t CENDF : 1;
            __IOM uint8_t SPRF  : 1;
        } SPSR_b;
    };

    union
    {
        __IOM uint32_t SPDR;
        __IOM uint16_t SPDR_HA;
        __IOM uint8_t  SPDR_BY;
    };

    union
    {
        __IOM uint8_t SPSCR;

        struct
        {
            __IOM uint8_t SPSLN : 3;   /*!< [2..0] RSPI Sequence Length SpecificationThe order in which
                                        *   the SPCMD0 to SPCMD07 registers are to be referenced is
                                        *   changed in accordance with the sequence length that is
                                        *   set in these bits. The relationship among the setting of
                                        *   these bits, sequence length, and SPCMD0 to SPCMD7 registers
                                        *   referenced by the RSPI is shown above. However, the RSPI
                                        *   in slave mode always references SPCMD0.                                   */
            uint8_t : 5;
        } SPSCR_b;
    };

    union
    {
        __IM uint8_t SPSSR;

        struct
        {
            __IM uint8_t SPCP  : 3;
            uint8_t            : 1;
            __IM uint8_t SPECM : 3;
            uint8_t            : 1;
        } SPSSR_b;
    };

    union
    {
        __IOM uint8_t SPBR;

        struct
        {
            __IOM uint8_t SPR : 8;
        } SPBR_b;
    };

    union
    {
        __IOM uint8_t SPDCR;

        struct
        {
            __IOM uint8_t SPFC   : 2;
            __IOM uint8_t SLSEL  : 2;
            __IOM uint8_t SPRDTD : 1;
            __IOM uint8_t SPLW   : 1;
            __IOM uint8_t SPBYT  : 1;
            uint8_t              : 1;
        } SPDCR_b;
    };

    union
    {
        __IOM uint8_t SPCKD;

        struct
        {
            __IOM uint8_t SCKDL : 3;
            uint8_t             : 5;
        } SPCKD_b;
    };

    union
    {
        __IOM uint8_t SSLND;

        struct
        {
            __IOM uint8_t SLNDL : 3;
            uint8_t             : 5;
        } SSLND_b;
    };

    union
    {
        __IOM uint8_t SPND;

        struct
        {
            __IOM uint8_t SPNDL : 3;
            uint8_t             : 5;
        } SPND_b;
    };

    union
    {
        __IOM uint8_t SPCR2;

        struct
        {
            __IOM uint8_t SPPE   : 1;
            __IOM uint8_t SPOE   : 1;
            __IOM uint8_t SPIIE  : 1;
            __IOM uint8_t PTE    : 1;
            __IOM uint8_t SCKASE : 1;
            __IOM uint8_t SPTDDL : 3;
        } SPCR2_b;
    };

    union
    {
        __IOM uint16_t SPCMD[8];

        struct
        {
            __IOM uint16_t CPHA   : 1;
            __IOM uint16_t CPOL   : 1;
            __IOM uint16_t BRDV   : 2;
            __IOM uint16_t SSLA   : 3;
            __IOM uint16_t SSLKP  : 1;
            __IOM uint16_t SPB    : 4;
            __IOM uint16_t LSBF   : 1;
            __IOM uint16_t SPNDEN : 1;
            __IOM uint16_t SLNDEN : 1;
            __IOM uint16_t SCKDEN : 1;
        } SPCMD_b[8];
    };

    union
    {
        __IOM uint8_t SPDCR2;

        struct
        {
            __IOM uint8_t BYSW : 1;
            __IOM uint8_t SINV : 1;
            uint8_t            : 6;
        } SPDCR2_b;
    };

    union
    {
        __IOM uint8_t SPCR3;

        struct
        {
            __IOM uint8_t ETXMD  : 1;
            __IOM uint8_t BFDS   : 1;
            uint8_t              : 2;
            __IOM uint8_t CENDIE : 1;
            uint8_t              : 3;
        } SPCR3_b;
    };
    __IM uint16_t RESERVED;
    __IM uint32_t RESERVED1[6];
    __IM uint16_t RESERVED2;

    union
    {
        __IOM uint16_t SPPR;

        struct
        {
            uint16_t              : 4;
            __IOM uint16_t BUFWID : 1;
            uint16_t              : 3;
            __IOM uint16_t BUFNUM : 3;
            uint16_t              : 1;
            __IOM uint16_t CMDNUM : 4;
        } SPPR_b;
    };
} R_SPI0_Type;

/* =========================================================================================================================== */
/* ================                                          R_SRAM                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief SRAM (R_SRAM)
 */

typedef struct
{
    union
    {
        __IOM uint8_t PARIOAD;

        struct
        {
            __IOM uint8_t OAD : 1;
            uint8_t           : 7;
        } PARIOAD_b;
    };
    __IM uint8_t RESERVED[3];

    union
    {
        __IOM uint8_t SRAMPRCR;

        struct
        {
            __IOM uint8_t SRAMPRCR : 1;
            __OM uint8_t  KW       : 7;
        } SRAMPRCR_b;
    };
    __IM uint8_t  RESERVED1[3];
    __IOM uint8_t SRAMWTSC;
    __IM uint8_t  RESERVED2[3];

    union
    {
        __IOM uint8_t SRAMPRCR2;

        struct
        {
            __IOM uint8_t SRAMPRCR2 : 1;
            __OM uint8_t  KW        : 7;
        } SRAMPRCR2_b;
    };
    __IM uint8_t RESERVED3[179];

    union
    {
        __IOM uint8_t ECCMODE;

        struct
        {
            __IOM uint8_t ECCMOD : 2;
            uint8_t              : 6;
        } ECCMODE_b;
    };

    union
    {
        __IOM uint8_t ECC2STS;

        struct
        {
            __IOM uint8_t ECC2ERR : 1;
            uint8_t               : 7;
        } ECC2STS_b;
    };

    union
    {
        __IOM uint8_t ECC1STSEN;

        struct
        {
            __IOM uint8_t E1STSEN : 1;
            uint8_t               : 7;
        } ECC1STSEN_b;
    };

    union
    {
        __IOM uint8_t ECC1STS;

        struct
        {
            __IOM uint8_t ECC1ERR : 1;
            uint8_t               : 7;
        } ECC1STS_b;
    };

    union
    {
        __IOM uint8_t ECCPRCR;

        struct
        {
            __IOM uint8_t ECCPRCR : 1;
            __OM uint8_t  KW      : 7;
        } ECCPRCR_b;
    };
    __IM uint8_t RESERVED4[11];

    union
    {
        __IOM uint8_t ECCPRCR2;

        struct
        {
            __IOM uint8_t ECCPRCR2 : 1;
            __OM uint8_t  KW2      : 7;
        } ECCPRCR2_b;
    };
    __IM uint8_t RESERVED5[3];

    union
    {
        __IOM uint8_t ECCETST;

        struct
        {
            __IOM uint8_t TSTBYP : 1;
            uint8_t              : 7;
        } ECCETST_b;
    };
    __IM uint8_t RESERVED6[3];

    union
    {
        __IOM uint8_t ECCOAD;

        struct
        {
            __IOM uint8_t OAD : 1;
            uint8_t           : 7;
        } ECCOAD_b;
    };
} R_SRAM_Type;

/* =========================================================================================================================== */
/* ================                                           R_SRC                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Sampling Rate Converter (R_SRC)
 */

typedef struct
{
    union
    {
        __IOM uint32_t SRCFCTR[5552];

        struct
        {
            __IOM uint32_t SRCFCOE : 22;
            uint32_t               : 10;
        } SRCFCTR_b[5552];
    };
    __IM uint32_t RESERVED[588];

    union
    {
        __OM uint32_t SRCID;

        struct
        {
            __OM uint32_t SRCID : 32;  /*!< [31..0] SRCID is a 32-bit writ-only register that is used to
                                        *   input the data before sampling rate conversion. All the
                                        *   bits are read as 0.                                                       */
        } SRCID_b;
    };

    union
    {
        __IM uint32_t SRCOD;

        struct
        {
            __IM uint32_t SRCOD : 32;  /*!< [31..0] SRCOD is a 32-bit read-only register used to output
                                        *   the data after sampling rate conversion. The data in the
                                        *   16-stage output data FIFO is read through SRCOD. When the
                                        *   number of data in the output data FIFO is zero after the
                                        *   start of conversion, the value previously read is read
                                        *   again.                                                                    */
        } SRCOD_b;
    };

    union
    {
        __IOM uint16_t SRCIDCTRL;

        struct
        {
            __IOM uint16_t IFTRG : 2;
            uint16_t             : 6;
            __IOM uint16_t IEN   : 1;
            __IOM uint16_t IED   : 1;
            uint16_t             : 6;
        } SRCIDCTRL_b;
    };

    union
    {
        __IOM uint16_t SRCODCTRL;

        struct
        {
            __IOM uint16_t OFTRG : 2;
            uint16_t             : 6;
            __IOM uint16_t OEN   : 1;
            __IOM uint16_t OED   : 1;
            __IOM uint16_t OCH   : 1;
            uint16_t             : 5;
        } SRCODCTRL_b;
    };

    union
    {
        __IOM uint16_t SRCCTRL;

        struct
        {
            __IOM uint16_t OFS    : 3;
            uint16_t              : 1;
            __IOM uint16_t IFS    : 4;
            __IOM uint16_t CL     : 1;
            __IOM uint16_t FL     : 1;
            __IOM uint16_t OVEN   : 1;
            __IOM uint16_t UDEN   : 1;
            __IOM uint16_t SRCEN  : 1;
            __IOM uint16_t CEEN   : 1;
            uint16_t              : 1;
            __IOM uint16_t FICRAE : 1;
        } SRCCTRL_b;
    };

    union
    {
        __IOM uint16_t SRCSTAT;

        struct
        {
            __IOM uint16_t OINT : 1;
            __IOM uint16_t IINT : 1;
            __IOM uint16_t OVF  : 1;
            __IOM uint16_t UDF  : 1;
            __IM uint16_t  FLF  : 1;
            __IOM uint16_t CEF  : 1;
            uint16_t            : 1;
            __IOM uint16_t IFDN : 4;   /*!< [10..7] Input FIFO Data CountIndicates the number of data units
                                        *   in the input FIFO.                                                        */
            __IOM uint16_t OFDN : 5;   /*!< [15..11] Output FIFO Data CountIndicates the number of data
                                        *   units in the output FIFO.                                                 */
        } SRCSTAT_b;
    };
} R_SRC_Type;

/* =========================================================================================================================== */
/* ================                                          R_SSI0                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Serial Sound Interface Enhanced (SSIE) (R_SSI0)
 */

typedef struct
{
    union
    {
        __IOM uint32_t SSICR;

        struct
        {
            __IOM uint32_t REN  : 1;
            __IOM uint32_t TEN  : 1;
            uint32_t            : 1;
            __IOM uint32_t MUEN : 1;   /*!< [3..3] Mute EnableNOTE: When this module is muted, the value
                                        *   of outputting serial data is rewritten to 0 but data transmission
                                        *   is not stopped. Write dummy data to the SSIFTDR not to
                                        *   generate a transmit underflow because the number of data
                                        *   in the transmit FIFO is decreasing.                                       */
            __IOM uint32_t CKDV  : 4;
            __IOM uint32_t DEL   : 1;
            __IOM uint32_t PDTA  : 1;
            __IOM uint32_t SDTA  : 1;
            __IOM uint32_t SPDP  : 1;
            __IOM uint32_t LRCKP : 1;
            __IOM uint32_t BCKP  : 1;
            __IOM uint32_t MST   : 1;  /*!< [14..14] Serial WS Direction NOTE: Only the following settings
                                        *   are allowed: (SCKD, SWSD) = (0, 0) and (1, 1). Other settings
                                        *   are prohibited.                                                           */
            uint32_t           : 1;
            __IOM uint32_t SWL : 3;    /*!< [18..16] System Word LengthSet the system word length to the
                                        *   bit clock frequency/2 fs.                                                 */
            __IOM uint32_t DWL   : 3;
            __IOM uint32_t FRM   : 2;
            uint32_t             : 1;
            __IOM uint32_t IIEN  : 1;
            __IOM uint32_t ROIEN : 1;
            __IOM uint32_t RUIEN : 1;
            __IOM uint32_t TOIEN : 1;
            __IOM uint32_t TUIEN : 1;
            __IOM uint32_t CKS   : 1;
            uint32_t             : 1;
        } SSICR_b;
    };

    union
    {
        __IOM uint32_t SSISR;

        struct
        {
            __IM uint32_t IDST   : 1;
            __IM uint32_t RSWNO  : 1;
            __IM uint32_t RCHNO  : 2;
            __IM uint32_t TSWNO  : 1;
            __IM uint32_t TCHNO  : 2;
            uint32_t             : 18;
            __IM uint32_t  IIRQ  : 1;
            __IOM uint32_t ROIRQ : 1;  /*!< [26..26] Receive Overflow Error Interrupt Status Flag NOTE:
                                        *   Writable only to clear the flag. Confirm the value is 1
                                        *   and then write 0.                                                         */
            __IOM uint32_t RUIRQ : 1;  /*!< [27..27] Receive Underflow Error Interrupt Status Flag NOTE:
                                        *   Writable only to clear the flag. Confirm the value is 1
                                        *   and then write 0.                                                         */
            __IOM uint32_t TOIRQ : 1;  /*!< [28..28] Transmit Overflow Error Interrupt Status Flag NOTE:
                                        *   Writable only to clear the flag. Confirm the value is 1
                                        *   and then write 0.                                                         */
            __IOM uint32_t TUIRQ : 1;  /*!< [29..29] Transmit Underflow Error Interrupt Status Flag NOTE:
                                        *   Writable only to clear the flag. Confirm the value is 1
                                        *   and then write 0.                                                         */
            uint32_t : 2;
        } SSISR_b;
    };
    __IM uint32_t RESERVED[2];

    union
    {
        __IOM uint32_t SSIFCR;

        struct
        {
            __IOM uint32_t RFRST : 1;
            __IOM uint32_t TFRST : 1;
            __IOM uint32_t RIE   : 1;  /*!< [2..2] Receive Interrupt Enable NOTE: RXI can be cleared by
                                        *   clearing either the RDF flag (see the description of the
                                        *   RDF bit for details) or RIE bit.                                          */
            __IOM uint32_t TIE : 1;    /*!< [3..3] Transmit Interrupt Enable NOTE: TXI can be cleared by
                                        *   clearing either the TDE flag (see the description of the
                                        *   TDE bit for details) or TIE bit.                                          */
            __IOM uint32_t RTRG : 2;
            __IOM uint32_t TTRG : 2;   /*!< [7..6] Transmit Data Trigger Number NOTE: The values in parenthesis
                                        *   are the number of empty stages in SSIFTDR at which the
                                        *   TDE flag is set.                                                          */
            uint32_t              : 3;
            __IOM uint32_t BSW    : 1;
            uint32_t              : 4;
            __IOM uint32_t SSIRST : 1;
            uint32_t              : 14;
            __IOM uint32_t AUCKE  : 1;
        } SSIFCR_b;
    };

    union
    {
        __IOM uint32_t SSIFSR;

        struct
        {
            __IOM uint32_t RDF : 1;    /*!< [0..0] Receive Data Full Flag NOTE: Since the SSIFRDR register
                                        *   is a 32-byte FIFO register, the maximum number of data
                                        *   bytes that can be read from it while the RDF flag is 1
                                        *   is indicated in the RDC[3:0] flags. If reading data from
                                        *   the SSIFRDR register is continued after all the data is
                                        *   read, undefined values will be read.                                      */
            uint32_t          : 7;
            __IM uint32_t RDC : 6;     /*!< [13..8] Receive Data Indicate Flag(Indicates the number of data
                                        *   units stored in SSIFRDR)                                                  */
            uint32_t           : 2;
            __IOM uint32_t TDE : 1;    /*!< [16..16] Transmit Data Empty Flag NOTE: Since the SSIFTDR register
                                        *   is a 32-byte FIFO register, the maximum number of bytes
                                        *   that can be written to it while the TDE flag is 1 is 8
                                        *   - TDC[3:0]. If writing data to the SSIFTDR register is
                                        *   continued after all the data is written, writing will be
                                        *   invalid and an overflow occurs.                                           */
            uint32_t          : 7;
            __IM uint32_t TDC : 6;     /*!< [29..24] Transmit Data Indicate Flag(Indicates the number of
                                        *   data units stored in SSIFTDR)                                             */
            uint32_t : 2;
        } SSIFSR_b;
    };

    union
    {
        union
        {
            __OM uint32_t SSIFTDR;

            struct
            {
                __OM uint32_t SSIFTDR : 32; /*!< [31..0] SSIFTDR is a write-only FIFO register consisting of
                                             *   eight stages of 32-bit registers for storing data to be
                                             *   serially transmitted. NOTE: that when the SSIFTDR register
                                             *   is full of data (32 bytes), the next data cannot be written
                                             *   to it. If writing is attempted, it will be ignored and
                                             *   an overflow occurs.                                                       */
            } SSIFTDR_b;
        };
        __OM uint16_t SSIFTDR16;
        __OM uint8_t  SSIFTDR8;
    };

    union
    {
        union
        {
            __IM uint32_t SSIFRDR;

            struct
            {
                __IM uint32_t SSIFRDR : 32; /*!< [31..0] SSIFRDR is a read-only FIFO register consisting of eight
                                             *   stages of 32-bit registers for storing serially received
                                             *   data.                                                                     */
            } SSIFRDR_b;
        };
        __IM uint16_t SSIFRDR16;
        __IM uint8_t  SSIFRDR8;
    };

    union
    {
        __IOM uint32_t SSIOFR;

        struct
        {
            __IOM uint32_t OMOD    : 2;
            uint32_t               : 6;
            __IOM uint32_t LRCONT  : 1;
            __IOM uint32_t BCKASTP : 1; /*!< [9..9] Whether to Enable Stopping BCK Output When SSIE is in
                                         *   Idle Status                                                               */
            uint32_t : 22;
        } SSIOFR_b;
    };

    union
    {
        __IOM uint32_t SSISCR;

        struct
        {
            __IOM uint32_t RDFS : 5;
            uint32_t            : 3;
            __IOM uint32_t TDES : 5;
            uint32_t            : 19;
        } SSISCR_b;
    };
} R_SSI0_Type;

/* =========================================================================================================================== */
/* ================                                         R_SYSTEM                                          ================ */
/* =========================================================================================================================== */

/**
 * @brief System Pins (R_SYSTEM)
 */

typedef struct
{
    __IM uint32_t RESERVED[3];

    union
    {
        __IOM uint16_t SBYCR;

        struct
        {
            uint16_t            : 14;
            __IOM uint16_t OPE  : 1;
            __IOM uint16_t SSBY : 1;
        } SBYCR_b;
    };
    __IM uint16_t RESERVED1;
    __IM uint32_t RESERVED2[3];

    union
    {
        __IOM uint32_t MSTPCRA;

        struct
        {
            __IOM uint32_t MSTPA0  : 1;
            __IOM uint32_t MSTPA1  : 1;
            __IOM uint32_t MSTPA2  : 1;
            __IOM uint32_t MSTPA3  : 1;
            __IOM uint32_t MSTPA4  : 1;
            __IOM uint32_t MSTPA5  : 1;
            __IOM uint32_t MSTPA6  : 1;
            __IOM uint32_t MSTPA7  : 1;
            __IOM uint32_t MSTPA8  : 1;
            __IOM uint32_t MSTPA9  : 1;
            __IOM uint32_t MSTPA10 : 1; /*!< [10..10] Module Stop bit 10. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA11 : 1; /*!< [11..11] Module Stop bit 11. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA12 : 1; /*!< [12..12] Module Stop bit 12. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA13 : 1; /*!< [13..13] Module Stop bit 13. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA14 : 1; /*!< [14..14] Module Stop bit 14. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA15 : 1; /*!< [15..15] Module Stop bit 15. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA16 : 1; /*!< [16..16] Module Stop bit 16. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA17 : 1; /*!< [17..17] Module Stop bit 17. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA18 : 1; /*!< [18..18] Module Stop bit 18. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA19 : 1; /*!< [19..19] Module Stop bit 19. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA20 : 1; /*!< [20..20] Module Stop bit 20. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA21 : 1; /*!< [21..21] Module Stop bit 21. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA22 : 1; /*!< [22..22] Module Stop bit 22. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA23 : 1; /*!< [23..23] Module Stop bit 23. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA24 : 1; /*!< [24..24] Module Stop bit 24. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA25 : 1; /*!< [25..25] Module Stop bit 25. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA26 : 1; /*!< [26..26] Module Stop bit 26. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA27 : 1; /*!< [27..27] Module Stop bit 27. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA28 : 1; /*!< [28..28] Module Stop bit 28. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA29 : 1; /*!< [29..29] Module Stop bit 29. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA30 : 1; /*!< [30..30] Module Stop bit 30. See device hardware manual for
                                         *   usage.                                                                    */
            __IOM uint32_t MSTPA31 : 1; /*!< [31..31] Module Stop bit 31. See device hardware manual for
                                         *   usage.                                                                    */
        } MSTPCRA_b;
    };

    union
    {
        __IOM uint32_t SCKDIVCR;

        struct
        {
            __IOM uint32_t PCKD : 3;
            uint32_t            : 1;
            __IOM uint32_t PCKC : 3;
            uint32_t            : 1;
            __IOM uint32_t PCKB : 3;
            uint32_t            : 1;
            __IOM uint32_t PCKA : 3;
            uint32_t            : 1;
            __IOM uint32_t BCK  : 3;
            uint32_t            : 5;
            __IOM uint32_t ICK  : 3;
            uint32_t            : 1;
            __IOM uint32_t FCK  : 3;
            uint32_t            : 1;
        } SCKDIVCR_b;
    };

    union
    {
        __IOM uint8_t SCKDIVCR2;

        struct
        {
            uint8_t           : 4;
            __IOM uint8_t UCK : 3;
            uint8_t           : 1;
        } SCKDIVCR2_b;
    };
    __IM uint8_t RESERVED3;

    union
    {
        __IOM uint8_t SCKSCR;

        struct
        {
            __IOM uint8_t CKSEL : 3;
            uint8_t             : 5;
        } SCKSCR_b;
    };
    __IM uint8_t RESERVED4;

    union
    {
        __IOM uint16_t PLLCCR;

        struct
        {
            __IOM uint16_t PLIDIV   : 2;
            uint16_t                : 2;
            __IOM uint16_t PLSRCSEL : 1;
            uint16_t                : 3;
            __IOM uint16_t PLLMUL   : 6; /*!< [13..8] PLL Frequency Multiplication Factor Select [PLL Frequency
                                          *   Multiplication Factor] = (PLLUMUL+1) / 2 Range: 0x23 -
                                          *   0x3B for example 010011: x10.0 010100: x10.5 010101: x11.0
                                          *   : 011100: x14.5 011101: x15.0 011110: x15.5 : 111010: x29.5
                                          *   111011: x30.0                                                             */
            uint16_t : 2;
        } PLLCCR_b;
    };

    union
    {
        __IOM uint8_t PLLCR;

        struct
        {
            __IOM uint8_t PLLSTP : 1;
            uint8_t              : 7;
        } PLLCR_b;
    };

    union
    {
        __IOM uint8_t PLLCCR2;

        struct
        {
            __IOM uint8_t PLLMUL : 5;
            uint8_t              : 1;
            __IOM uint8_t PLODIV : 2;
        } PLLCCR2_b;
    };
    __IM uint32_t RESERVED5;

    union
    {
        __IOM uint8_t BCKCR;

        struct
        {
            __IOM uint8_t BCLKDIV : 1;
            uint8_t               : 7;
        } BCKCR_b;
    };

    union
    {
        __IOM uint8_t MEMWAIT;

        struct
        {
            __IOM uint8_t MEMWAIT : 1; /*!< [0..0] Memory Wait Cycle SelectNote: Writing 0 to the MEMWAIT
                                        *   is prohibited when SCKDIVCR.ICK selects division by 1 and
                                        *   SCKSCR.CKSEL[2:0] bits select thesystem clock source that
                                        *   is faster than 32 MHz (ICLK > 32 MHz).                                    */
            uint8_t : 7;
        } MEMWAIT_b;
    };

    union
    {
        __IOM uint8_t MOSCCR;

        struct
        {
            __IOM uint8_t MOSTP : 1;
            uint8_t             : 7;
        } MOSCCR_b;
    };
    __IM uint8_t  RESERVED6;
    __IM uint16_t RESERVED7;

    union
    {
        __IOM uint8_t HOCOCR;

        struct
        {
            __IOM uint8_t HCSTP : 1;
            uint8_t             : 7;
        } HOCOCR_b;
    };

    union
    {
        __IOM uint8_t HOCOCR2;         /*!< (@ 0x00000037) High-Speed On-Chip Oscillator Control Register
                                        *                  2                                                          */

        struct
        {
            __IOM uint8_t HCFRQ0 : 2;
            uint8_t              : 1;
            __IOM uint8_t HCFRQ1 : 3;
            uint8_t              : 2;
        } HOCOCR2_b;
    };

    union
    {
        __IOM uint8_t MOCOCR;

        struct
        {
            __IOM uint8_t MCSTP : 1;
            uint8_t             : 7;
        } MOCOCR_b;
    };

    union
    {
        __IOM uint8_t FLLCR1;

        struct
        {
            __IOM uint8_t FLLEN : 1;
            uint8_t             : 7;
        } FLLCR1_b;
    };

    union
    {
        __IOM uint16_t FLLCR2;

        struct
        {
            __IOM uint16_t FLLCNTL : 11; /*!< [10..0] FLL Multiplication ControlMultiplication ratio of the
                                          *   FLL reference clock select                                                */
            uint16_t : 5;
        } FLLCR2_b;
    };

    union
    {
        __IM uint8_t OSCSF;

        struct
        {
            __IM uint8_t HOCOSF : 1;   /*!< [0..0] HOCO Clock Oscillation Stabilization FlagNOTE: The HOCOSF
                                        *   bit value after a reset is 1 when the OFS1.HOCOEN bit is
                                        *   0. It is 0 when the OFS1.HOCOEN bit is 1.                                 */
            uint8_t             : 2;
            __IM uint8_t MOSCSF : 1;
            uint8_t             : 1;
            __IM uint8_t PLLSF  : 1;
            __IM uint8_t PLL2SF : 1;
            uint8_t             : 1;
        } OSCSF_b;
    };
    __IM uint8_t RESERVED8;

    union
    {
        __IOM uint8_t CKOCR;

        struct
        {
            __IOM uint8_t CKOSEL : 3;
            uint8_t              : 1;
            __IOM uint8_t CKODIV : 3;
            __IOM uint8_t CKOEN  : 1;
        } CKOCR_b;
    };

    union
    {
        __IOM uint8_t TRCKCR;

        struct
        {
            __IOM uint8_t TRCK   : 4;
            uint8_t              : 3;
            __IOM uint8_t TRCKEN : 1;
        } TRCKCR_b;
    };

    union
    {
        __IOM uint8_t OSTDCR;

        struct
        {
            __IOM uint8_t OSTDIE : 1;
            uint8_t              : 6;
            __IOM uint8_t OSTDE  : 1;
        } OSTDCR_b;
    };

    union
    {
        __IOM uint8_t OSTDSR;

        struct
        {
            __IOM uint8_t OSTDF : 1;
            uint8_t             : 7;
        } OSTDSR_b;
    };
    __IM uint16_t RESERVED9;
    __IM uint32_t RESERVED10;

    union
    {
        __IOM uint16_t PLL2CCR;

        struct
        {
            __IOM uint16_t PL2IDIV   : 2;
            uint16_t                 : 2;
            __IOM uint16_t PL2SRCSEL : 1;
            uint16_t                 : 3;
            __IOM uint16_t PLL2MUL   : 6;
            uint16_t                 : 2;
        } PLL2CCR_b;
    };

    union
    {
        __IOM uint8_t PLL2CR;

        struct
        {
            __IOM uint8_t PLL2STP : 1;
            uint8_t               : 7;
        } PLL2CR_b;
    };
    __IM uint8_t RESERVED11;

    union
    {
        __IOM uint8_t LPOPT;

        struct
        {
            __IOM uint8_t MPUDIS : 1;    /*!< [0..0] MPU Clock Disable Control. Stop the MPU operate clock
                                          *   (valid only when LPOPTEN = 1)                                             */
            __IOM uint8_t DCLKDIS   : 2;
            __IOM uint8_t BPFCLKDIS : 1; /*!< [3..3] BPF Clock Disable Control. Stop the Flash register R/W
                                          *   clock (valid only when LPOPT.LPOPTEN = 1)                                 */
            uint8_t               : 3;
            __IOM uint8_t LPOPTEN : 1;
        } LPOPT_b;
    };
    __IM uint8_t  RESERVED12;
    __IM uint16_t RESERVED13;

    union
    {
        __IOM uint8_t SLCDSCKCR;

        struct
        {
            __IOM uint8_t LCDSCKSEL : 3;
            uint8_t                 : 4;
            __IOM uint8_t LCDSCKEN  : 1;
        } SLCDSCKCR_b;
    };
    __IM uint8_t RESERVED14;

    union
    {
        __IOM uint8_t EBCKOCR;

        struct
        {
            __IOM uint8_t EBCKOEN : 1;
            uint8_t               : 7;
        } EBCKOCR_b;
    };

    union
    {
        __IOM uint8_t SDCKOCR;

        struct
        {
            __IOM uint8_t SDCKOEN : 1;
            uint8_t               : 7;
        } SDCKOCR_b;
    };
    __IM uint32_t RESERVED15[3];
    __IM uint8_t  RESERVED16;

    union
    {
        __IOM uint8_t MOCOUTCR;

        struct
        {
            __IOM uint8_t MOCOUTRM : 8; /*!< [7..0] MOCO User Trimming 1000_0000 : -128 1000_0001 : -127
                                         *   1000_0010 : -126 . . . 1111_1111 : -1 0000_0000 : Center
                                         *   Code 0000_0001 : +1 . . . 0111_1101 : +125 0111_1110 :
                                         +126 0111_1111 : +127These bits are added to original MOCO
                                         *   trimming bits                                                             */
        } MOCOUTCR_b;
    };

    union
    {
        __IOM uint8_t HOCOUTCR;

        struct
        {
            __IOM uint8_t HOCOUTRM : 8; /*!< [7..0] HOCO User Trimming 1000_0000 : -128 1000_0001 : -127
                                         *   1000_0010 : -126 . . . 1111_1111 : -1 0000_0000 : Center
                                         *   Code 0000_0001 : +1 . . . 0111_1101 : +125 0111_1110 :
                                         +126 0111_1111 : +127These bits are added to original HOCO
                                         *   trimming bits                                                             */
        } HOCOUTCR_b;
    };
    __IM uint8_t  RESERVED17;
    __IM uint32_t RESERVED18[2];

    union
    {
        __IOM uint8_t USBCKDIVCR;

        struct
        {
            __IOM uint8_t USBCKDIV : 3;
            uint8_t                : 5;
        } USBCKDIVCR_b;
    };

    union
    {
        union
        {
            __IOM uint8_t OCTACKDIVCR;

            struct
            {
                __IOM uint8_t OCTACKDIV : 3;
                uint8_t                 : 5;
            } OCTACKDIVCR_b;
        };

        union
        {
            __IOM uint8_t SCISPICKDIVCR;

            struct
            {
                __IOM uint8_t SCISPICKDIV : 3;
                uint8_t                   : 5;
            } SCISPICKDIVCR_b;
        };
    };

    union
    {
        __IOM uint8_t CANFDCKDIVCR;

        struct
        {
            __IOM uint8_t CANFDCKDIV : 3;
            uint8_t                  : 5;
        } CANFDCKDIVCR_b;
    };

    union
    {
        union
        {
            __IOM uint8_t GPTCKDIVCR;

            struct
            {
                __IOM uint8_t GPTCKDIV : 3;
                uint8_t                : 5;
            } GPTCKDIVCR_b;
        };

        union
        {
            __IOM uint8_t USB60CKDIVCR;

            struct
            {
                __IOM uint8_t USB60CKDIV : 3;
                uint8_t                  : 5;
            } USB60CKDIVCR_b;
        };
    };

    union
    {
        union
        {
            __IOM uint8_t CECCKDIVCR;

            struct
            {
                __IOM uint8_t CECCKDIV : 3;
                uint8_t                : 5;
            } CECCKDIVCR_b;
        };

        union
        {
            __IOM uint8_t IICCKDIVCR;

            struct
            {
                __IOM uint8_t IICCKDIV : 3;
                uint8_t                : 5;
            } IICCKDIVCR_b;
        };
    };

    union
    {
        __IOM uint8_t I3CCKDIVCR;

        struct
        {
            __IOM uint8_t I3CCKDIV : 3;
            uint8_t                : 5;
        } I3CCKDIVCR_b;
    };
    __IM uint16_t RESERVED19;

    union
    {
        __IOM uint8_t USBCKCR;

        struct
        {
            __IOM uint8_t USBCKSEL  : 3;
            uint8_t                 : 3;
            __IOM uint8_t USBCKSREQ : 1;
            __IM uint8_t  USBCKSRDY : 1;
        } USBCKCR_b;
    };

    union
    {
        union
        {
            __IOM uint8_t OCTACKCR;

            struct
            {
                __IOM uint8_t OCTACKSEL  : 3;
                uint8_t                  : 3;
                __IOM uint8_t OCTACKSREQ : 1;
                __IM uint8_t  OCTACKSRDY : 1;
            } OCTACKCR_b;
        };

        union
        {
            __IOM uint8_t SCISPICKCR;

            struct
            {
                __IOM uint8_t SCISPICKSEL  : 3;
                uint8_t                    : 3;
                __IOM uint8_t SCISPICKSREQ : 1;
                __IM uint8_t  SCISPICKSRDY : 1;
            } SCISPICKCR_b;
        };
    };

    union
    {
        __IOM uint8_t CANFDCKCR;

        struct
        {
            __IOM uint8_t CANFDCKSEL  : 3;
            uint8_t                   : 3;
            __IOM uint8_t CANFDCKSREQ : 1;
            __IM uint8_t  CANFDCKSRDY : 1;
        } CANFDCKCR_b;
    };

    union
    {
        union
        {
            __IOM uint8_t GPTCKCR;

            struct
            {
                __IOM uint8_t GPTCKSEL  : 3;
                uint8_t                 : 3;
                __IOM uint8_t GPTCKSREQ : 1;
                __IM uint8_t  GPTCKSRDY : 1;
            } GPTCKCR_b;
        };

        union
        {
            __IOM uint8_t USB60CKCR;

            struct
            {
                __IOM uint8_t USB60CKSEL  : 4;
                uint8_t                   : 2;
                __IOM uint8_t USB60CKSREQ : 1;
                __IOM uint8_t USB60CKSRDY : 1;
            } USB60CKCR_b;
        };
    };

    union
    {
        union
        {
            __IOM uint8_t CECCKCR;

            struct
            {
                __IOM uint8_t CECCKSEL  : 3;
                uint8_t                 : 3;
                __IOM uint8_t CECCKSREQ : 1;
                __IM uint8_t  CECCKSRDY : 1;
            } CECCKCR_b;
        };

        union
        {
            __IOM uint8_t IICCKCR;

            struct
            {
                __IOM uint8_t IICCKSEL  : 3;
                uint8_t                 : 3;
                __IOM uint8_t IICCKSREQ : 1;
                __IM uint8_t  IICCKSRDY : 1;
            } IICCKCR_b;
        };
    };

    union
    {
        __IOM uint8_t I3CCKCR;

        struct
        {
            __IOM uint8_t I3CCKSEL  : 3;
            uint8_t                 : 3;
            __IOM uint8_t I3CCKSREQ : 1;
            __IM uint8_t  I3CCKSRDY : 1;
        } I3CCKCR_b;
    };
    __IM uint16_t RESERVED20;
    __IM uint32_t RESERVED21[3];

    union
    {
        __IOM uint32_t SNZREQCR1;

        struct
        {
            __IOM uint32_t SNZREQEN0 : 1;
            __IOM uint32_t SNZREQEN1 : 1;
            __IOM uint32_t SNZREQEN2 : 1;
            uint32_t                 : 29;
        } SNZREQCR1_b;
    };
    __IM uint32_t RESERVED22;
    __IM uint16_t RESERVED23;

    union
    {
        __IOM uint8_t SNZCR;

        struct
        {
            __IOM uint8_t RXDREQEN : 1; /*!< [0..0] RXD0 Snooze Request Enable NOTE: Do not set to 1 other
                                         *   than in asynchronous mode.                                                */
            __IOM uint8_t SNZDTCEN : 1;
            uint8_t                : 5;
            __IOM uint8_t SNZE     : 1;
        } SNZCR_b;
    };
    __IM uint8_t RESERVED24;

    union
    {
        __IOM uint8_t SNZEDCR;

        struct
        {
            __IOM uint8_t AGT1UNFED : 1;
            __IOM uint8_t DTCZRED   : 1;
            __IOM uint8_t DTCNZRED  : 1;
            __IOM uint8_t AD0MATED  : 1;
            __IOM uint8_t AD0UMTED  : 1;
            __IOM uint8_t AD1MATED  : 1;
            __IOM uint8_t AD1UMTED  : 1;
            __IOM uint8_t SCI0UMTED : 1; /*!< [7..7] SCI0 address unmatch Snooze End EnableNote: Do not set
                                          *   to 1 other than in asynchronous mode.                                     */
        } SNZEDCR_b;
    };

    union
    {
        __IOM uint8_t SNZEDCR1;

        struct
        {
            __IOM uint8_t AGT3UNFED : 1;
            uint8_t                 : 7;
        } SNZEDCR1_b;
    };
    __IM uint16_t RESERVED25;

    union
    {
        __IOM uint32_t SNZREQCR;

        struct
        {
            __IOM uint32_t SNZREQEN0  : 1;
            __IOM uint32_t SNZREQEN1  : 1;
            __IOM uint32_t SNZREQEN2  : 1;
            __IOM uint32_t SNZREQEN3  : 1;
            __IOM uint32_t SNZREQEN4  : 1;
            __IOM uint32_t SNZREQEN5  : 1;
            __IOM uint32_t SNZREQEN6  : 1;
            __IOM uint32_t SNZREQEN7  : 1;
            __IOM uint32_t SNZREQEN8  : 1;
            __IOM uint32_t SNZREQEN9  : 1;
            __IOM uint32_t SNZREQEN10 : 1;
            __IOM uint32_t SNZREQEN11 : 1;
            __IOM uint32_t SNZREQEN12 : 1;
            __IOM uint32_t SNZREQEN13 : 1;
            __IOM uint32_t SNZREQEN14 : 1;
            __IOM uint32_t SNZREQEN15 : 1;
            uint32_t                  : 1;
            __IOM uint32_t SNZREQEN17 : 1;
            uint32_t                  : 4;
            __IOM uint32_t SNZREQEN22 : 1; /*!< [22..22] Snooze Request Enable 22Enable Comparator-HS0 snooze
                                            *   request                                                                   */
            __IOM uint32_t SNZREQEN23 : 1; /*!< [23..23] Snooze Request Enable 23Enable Comparator-LP0 snooze
                                            *   request                                                                   */
            __IOM uint32_t SNZREQEN24 : 1;
            __IOM uint32_t SNZREQEN25 : 1;
            uint32_t                  : 2;
            __IOM uint32_t SNZREQEN28 : 1; /*!< [28..28] Snooze Request Enable 28Enable AGT1 underflow snooze
                                            *   request                                                                   */
            __IOM uint32_t SNZREQEN29 : 1; /*!< [29..29] Snooze Request Enable 29Enable AGT1 compare match A
                                            *   snooze request                                                            */
            __IOM uint32_t SNZREQEN30 : 1; /*!< [30..30] Snooze Request Enable 30Enable AGT1 compare match B
                                            *   snooze request                                                            */
            uint32_t : 1;
        } SNZREQCR_b;
    };
    __IM uint16_t RESERVED26;

    union
    {
        __IOM uint8_t FLSTOP;

        struct
        {
            __IOM uint8_t FLSTOP : 1;
            uint8_t              : 3;
            __IOM uint8_t FLSTPF : 1;
            uint8_t              : 3;
        } FLSTOP_b;
    };

    union
    {
        __IOM uint8_t PSMCR;

        struct
        {
            __IOM uint8_t PSMC : 2;
            uint8_t            : 6;
        } PSMCR_b;
    };

    union
    {
        __IOM uint8_t OPCCR;

        struct
        {
            __IOM uint8_t OPCM   : 2;
            uint8_t              : 2;
            __IM uint8_t OPCMTSF : 1;
            uint8_t              : 3;
        } OPCCR_b;
    };
    __IM uint8_t RESERVED27;

    union
    {
        __IOM uint8_t MOSCWTCR;

        struct
        {
            __IOM uint8_t MSTS : 4;
            uint8_t            : 4;
        } MOSCWTCR_b;
    };
    __IM uint8_t RESERVED28[2];

    union
    {
        __IOM uint8_t HOCOWTCR;

        struct
        {
            __IOM uint8_t HSTS : 3;    /*!< [2..0] HOCO wait time settingWaiting time (sec) = setting of
                                        *   the HSTS[2:0] bits/fLOCO(Trimmed) + 3/fLOC(Untrimmed)                     */
            uint8_t : 5;
        } HOCOWTCR_b;
    };
    __IM uint16_t RESERVED29[2];

    union
    {
        __IOM uint8_t SOPCCR;

        struct
        {
            __IOM uint8_t SOPCM   : 1;
            uint8_t               : 3;
            __IM uint8_t SOPCMTSF : 1;
            uint8_t               : 3;
        } SOPCCR_b;
    };
    __IM uint8_t  RESERVED30;
    __IM uint32_t RESERVED31[5];

    union
    {
        __IOM uint16_t RSTSR1;

        struct
        {
            __IOM uint16_t IWDTRF : 1; /*!< [0..0] Independent Watchdog Timer Reset Detect FlagNOTE: Writable
                                        *   only to clear the flag. Confirm the value is 1 and then
                                        *   write 0.                                                                  */
            __IOM uint16_t WDTRF : 1;  /*!< [1..1] Watchdog Timer Reset Detect FlagNOTE: Writable only to
                                        *   clear the flag. Confirm the value is 1 and then write 0.                  */
            __IOM uint16_t SWRF : 1;   /*!< [2..2] Software Reset Detect FlagNOTE: Writable only to clear
                                        *   the flag. Confirm the value is 1 and then write 0.                        */
            uint16_t             : 5;
            __IOM uint16_t RPERF : 1;  /*!< [8..8] RAM Parity Error Reset Detect FlagNOTE: Writable only
                                        *   to clear the flag. Confirm the value is 1 and then write
                                        *   0.                                                                        */
            __IOM uint16_t REERF : 1;  /*!< [9..9] RAM ECC Error Reset Detect FlagNOTE: Writable only to
                                        *   clear the flag. Confirm the value is 1 and then write 0.                  */
            __IOM uint16_t BUSSRF : 1; /*!< [10..10] Bus Slave MPU Reset Detect FlagNOTE: Writable only
                                        *   to clear the flag. Confirm the value is 1 and then write
                                        *   0.                                                                        */
            __IOM uint16_t BUSMRF : 1; /*!< [11..11] Bus Master MPU Reset Detect FlagNOTE: Writable only
                                        *   to clear the flag. Confirm the value is 1 and then write
                                        *   0.                                                                        */
            __IOM uint16_t SPERF : 1;  /*!< [12..12] SP Error Reset Detect FlagNOTE: Writable only to clear
                                        *   the flag. Confirm the value is 1 and then write 0.                        */
            __IOM uint16_t TZERF : 1;
            uint16_t             : 1;
            __IOM uint16_t CPERF : 1;
        } RSTSR1_b;
    };
    __IM uint16_t RESERVED32;
    __IM uint32_t RESERVED33[3];

    union
    {
        __IOM uint8_t USBCKCR_ALT;

        struct
        {
            __IOM uint8_t USBCLKSEL : 1; /*!< [0..0] The USBCLKSEL bit selects the source of the USB clock
                                          *   (UCLK).                                                                   */
            uint8_t : 7;
        } USBCKCR_ALT_b;
    };

    union
    {
        __IOM uint8_t SDADCCKCR;          /*!< (@ 0x000000D1) 24-bit Sigma-Delta A/D Converter Clock Control
                                           *                  Register                                                   */

        struct
        {
            __IOM uint8_t SDADCCKSEL : 1;
            uint8_t                  : 6;
            __IOM uint8_t SDADCCKEN  : 1;
        } SDADCCKCR_b;
    };
    __IM uint16_t RESERVED34;
    __IM uint32_t RESERVED35[3];

    union
    {
        __IOM uint8_t LVD1CR1;

        struct
        {
            __IOM uint8_t IDTSEL : 2;
            __IOM uint8_t IRQSEL : 1;
            uint8_t              : 5;
        } LVD1CR1_b;
    };

    union
    {
        __IOM uint8_t LVD1SR;

        struct
        {
            __IOM uint8_t DET : 1;     /*!< [0..0] Voltage Monitor Voltage Change Detection Flag NOTE: Only
                                        *   0 can be written to this bit. After writing 0 to this bit,
                                        *   it takes 2 system clock cycles for the bit to be read as
                                        *   0.                                                                        */
            __IM uint8_t MON : 1;
            uint8_t          : 6;
        } LVD1SR_b;
    };

    union
    {
        __IOM uint8_t LVD2CR1;

        struct
        {
            __IOM uint8_t IDTSEL : 2;
            __IOM uint8_t IRQSEL : 1;
            uint8_t              : 5;
        } LVD2CR1_b;
    };

    union
    {
        __IOM uint8_t LVD2SR;

        struct
        {
            __IOM uint8_t DET : 1;     /*!< [0..0] Voltage Monitor Voltage Change Detection Flag NOTE: Only
                                        *   0 can be written to this bit. After writing 0 to this bit,
                                        *   it takes 2 system clock cycles for the bit to be read as
                                        *   0.                                                                        */
            __IM uint8_t MON : 1;
            uint8_t          : 6;
        } LVD2SR_b;
    };
    __IM uint32_t RESERVED36[183];

    union
    {
        __IOM uint32_t CGFSAR;           /*!< (@ 0x000003C0) Clock Generation Function Security Attribute
                                          *                  Register                                                   */

        struct
        {
            __IOM uint32_t NONSEC00 : 1;
            uint32_t                : 1;
            __IOM uint32_t NONSEC02 : 1;
            __IOM uint32_t NONSEC03 : 1;
            __IOM uint32_t NONSEC04 : 1;
            __IOM uint32_t NONSEC05 : 1;
            __IOM uint32_t NONSEC06 : 1;
            __IOM uint32_t NONSEC07 : 1;
            __IOM uint32_t NONSEC08 : 1;
            __IOM uint32_t NONSEC09 : 1;
            uint32_t                : 1;
            __IOM uint32_t NONSEC11 : 1;
            __IOM uint32_t NONSEC12 : 1;
            uint32_t                : 3;
            __IOM uint32_t NONSEC16 : 1;
            __IOM uint32_t NONSEC17 : 1;
            uint32_t                : 14;
        } CGFSAR_b;
    };
    __IM uint32_t RESERVED37;

    union
    {
        __IOM uint32_t LPMSAR;

        struct
        {
            __IOM uint32_t NONSEC0 : 1;
            uint32_t               : 1;
            __IOM uint32_t NONSEC2 : 1;
            uint32_t               : 1;
            __IOM uint32_t NONSEC4 : 1;
            uint32_t               : 3;
            __IOM uint32_t NONSEC8 : 1;
            __IOM uint32_t NONSEC9 : 1;
            uint32_t               : 22;
        } LPMSAR_b;
    };

    union
    {
        union
        {
            __IOM uint32_t LVDSAR;

            struct
            {
                __IOM uint32_t NONSEC0 : 1;
                __IOM uint32_t NONSEC1 : 1;
                uint32_t               : 30;
            } LVDSAR_b;
        };

        union
        {
            __IOM uint32_t RSTSAR;

            struct
            {
                __IOM uint32_t NONSEC0 : 1;
                __IOM uint32_t NONSEC1 : 1;
                __IOM uint32_t NONSEC2 : 1;
                uint32_t               : 29;
            } RSTSAR_b;
        };
    };

    union
    {
        __IOM uint32_t BBFSAR;

        struct
        {
            __IOM uint32_t NONSEC0  : 1;
            __IOM uint32_t NONSEC1  : 1;
            __IOM uint32_t NONSEC2  : 1;
            uint32_t                : 13;
            __IOM uint32_t NONSEC16 : 1;
            __IOM uint32_t NONSEC17 : 1;
            __IOM uint32_t NONSEC18 : 1;
            __IOM uint32_t NONSEC19 : 1;
            __IOM uint32_t NONSEC20 : 1;
            __IOM uint32_t NONSEC21 : 1;
            __IOM uint32_t NONSEC22 : 1;
            __IOM uint32_t NONSEC23 : 1;
            uint32_t                : 8;
        } BBFSAR_b;
    };
    __IM uint32_t RESERVED38[3];

    union
    {
        __IOM uint32_t DPFSAR;          /*!< (@ 0x000003E0) Deep Standby Interrupt Factor Security Attribution
                                         *                  Register                                                   */

        struct
        {
            __IOM uint32_t DPFSA0 : 1;  /*!< [0..0] Deep Standby Interrupt Factor Security Attribute bit
                                         *   0                                                                         */
            __IOM uint32_t DPFSA1 : 1;  /*!< [1..1] Deep Standby Interrupt Factor Security Attribute bit
                                         *   1                                                                         */
            __IOM uint32_t DPFSA2 : 1;  /*!< [2..2] Deep Standby Interrupt Factor Security Attribute bit
                                         *   2                                                                         */
            __IOM uint32_t DPFSA3 : 1;  /*!< [3..3] Deep Standby Interrupt Factor Security Attribute bit
                                         *   3                                                                         */
            __IOM uint32_t DPFSA4 : 1;  /*!< [4..4] Deep Standby Interrupt Factor Security Attribute bit
                                         *   4                                                                         */
            __IOM uint32_t DPFSA5 : 1;  /*!< [5..5] Deep Standby Interrupt Factor Security Attribute bit
                                         *   5                                                                         */
            __IOM uint32_t DPFSA6 : 1;  /*!< [6..6] Deep Standby Interrupt Factor Security Attribute bit
                                         *   6                                                                         */
            __IOM uint32_t DPFSA7 : 1;  /*!< [7..7] Deep Standby Interrupt Factor Security Attribute bit
                                         *   7                                                                         */
            __IOM uint32_t DPFSA8 : 1;  /*!< [8..8] Deep Standby Interrupt Factor Security Attribute bit
                                         *   8                                                                         */
            __IOM uint32_t DPFSA9 : 1;  /*!< [9..9] Deep Standby Interrupt Factor Security Attribute bit
                                         *   9                                                                         */
            __IOM uint32_t DPFSA10 : 1; /*!< [10..10] Deep Standby Interrupt Factor Security Attribute bit
                                         *   10                                                                        */
            __IOM uint32_t DPFSA11 : 1; /*!< [11..11] Deep Standby Interrupt Factor Security Attribute bit
                                         *   11                                                                        */
            __IOM uint32_t DPFSA12 : 1; /*!< [12..12] Deep Standby Interrupt Factor Security Attribute bit
                                         *   12                                                                        */
            __IOM uint32_t DPFSA13 : 1; /*!< [13..13] Deep Standby Interrupt Factor Security Attribute bit
                                         *   13                                                                        */
            __IOM uint32_t DPFSA14 : 1; /*!< [14..14] Deep Standby Interrupt Factor Security Attribute bit
                                         *   14                                                                        */
            __IOM uint32_t DPFSA15 : 1; /*!< [15..15] Deep Standby Interrupt Factor Security Attribute bit
                                         *   15                                                                        */
            __IOM uint32_t DPFSA16 : 1; /*!< [16..16] Deep Standby Interrupt Factor Security Attribute bit
                                         *   16                                                                        */
            __IOM uint32_t DPFSA17 : 1; /*!< [17..17] Deep Standby Interrupt Factor Security Attribute bit
                                         *   17                                                                        */
            __IOM uint32_t DPFSA18 : 1; /*!< [18..18] Deep Standby Interrupt Factor Security Attribute bit
                                         *   18                                                                        */
            __IOM uint32_t DPFSA19 : 1; /*!< [19..19] Deep Standby Interrupt Factor Security Attribute bit
                                         *   19                                                                        */
            __IOM uint32_t DPFSA20 : 1; /*!< [20..20] Deep Standby Interrupt Factor Security Attribute bit
                                         *   20                                                                        */
            uint32_t               : 3;
            __IOM uint32_t DPFSA24 : 1; /*!< [24..24] Deep Standby Interrupt Factor Security Attribute bit
                                         *   24                                                                        */
            uint32_t               : 1;
            __IOM uint32_t DPFSA26 : 1; /*!< [26..26] Deep Standby Interrupt Factor Security Attribute bit
                                         *   26                                                                        */
            __IOM uint32_t DPFSA27 : 1; /*!< [27..27] Deep Standby Interrupt Factor Security Attribute bit
                                         *   27                                                                        */
            uint32_t : 4;
        } DPFSAR_b;
    };
    __IM uint32_t RESERVED39[6];
    __IM uint16_t RESERVED40;

    union
    {
        __IOM uint16_t PRCR;

        struct
        {
            __IOM uint16_t PRC0 : 1;   /*!< [0..0] Enables writing to the registers related to the clock
                                        *   generation circuit.                                                       */
            __IOM uint16_t PRC1 : 1;   /*!< [1..1] Enables writing to the registers related to the operating
                                        *   modes, the low power consumption modes and the battery
                                        *   backup function.                                                          */
            uint16_t            : 1;
            __IOM uint16_t PRC3 : 1;
            __IOM uint16_t PRC4 : 1;
            uint16_t            : 3;
            __OM uint16_t PRKEY : 8;
        } PRCR_b;
    };

    union
    {
        __IOM uint8_t DPSBYCR;

        struct
        {
            __IOM uint8_t DEEPCUT : 2;
            uint8_t               : 4;
            __IOM uint8_t IOKEEP  : 1;
            __IOM uint8_t DPSBY   : 1;
        } DPSBYCR_b;
    };

    union
    {
        __IOM uint8_t DPSWCR;

        struct
        {
            __IOM uint8_t WTSTS : 6;
            uint8_t             : 2;
        } DPSWCR_b;
    };

    union
    {
        __IOM uint8_t DPSIER0;

        struct
        {
            __IOM uint8_t DIRQ0E : 1;
            __IOM uint8_t DIRQ1E : 1;
            __IOM uint8_t DIRQ2E : 1;
            __IOM uint8_t DIRQ3E : 1;
            __IOM uint8_t DIRQ4E : 1;
            __IOM uint8_t DIRQ5E : 1;
            __IOM uint8_t DIRQ6E : 1;
            __IOM uint8_t DIRQ7E : 1;
        } DPSIER0_b;
    };

    union
    {
        __IOM uint8_t DPSIER1;

        struct
        {
            __IOM uint8_t DIRQ8E  : 1;
            __IOM uint8_t DIRQ9E  : 1;
            __IOM uint8_t DIRQ10E : 1;
            __IOM uint8_t DIRQ11E : 1;
            __IOM uint8_t DIRQ12E : 1;
            __IOM uint8_t DIRQ13E : 1;
            __IOM uint8_t DIRQ14E : 1;
            __IOM uint8_t DIRQ15E : 1;
        } DPSIER1_b;
    };

    union
    {
        __IOM uint8_t DPSIER2;

        struct
        {
            __IOM uint8_t DLVD1IE  : 1;
            __IOM uint8_t DLVD2IE  : 1;
            __IOM uint8_t DTRTCIIE : 1;
            __IOM uint8_t DRTCAIE  : 1;
            __IOM uint8_t DNMIE    : 1;
            uint8_t                : 3;
        } DPSIER2_b;
    };

    union
    {
        __IOM uint8_t DPSIER3;

        struct
        {
            __IOM uint8_t DUSBFSIE : 1;
            __IOM uint8_t DUSBHSIE : 1;
            __IOM uint8_t DAGT1IE  : 1;
            __IOM uint8_t DAGT3IE  : 1;
            uint8_t                : 4;
        } DPSIER3_b;
    };

    union
    {
        __IOM uint8_t DPSIFR0;

        struct
        {
            __IOM uint8_t DIRQ0F : 1;
            __IOM uint8_t DIRQ1F : 1;
            __IOM uint8_t DIRQ2F : 1;
            __IOM uint8_t DIRQ3F : 1;
            __IOM uint8_t DIRQ4F : 1;
            __IOM uint8_t DIRQ5F : 1;
            __IOM uint8_t DIRQ6F : 1;
            __IOM uint8_t DIRQ7F : 1;
        } DPSIFR0_b;
    };

    union
    {
        __IOM uint8_t DPSIFR1;

        struct
        {
            __IOM uint8_t DIRQ8F  : 1;
            __IOM uint8_t DIRQ9F  : 1;
            __IOM uint8_t DIRQ10F : 1;
            __IOM uint8_t DIRQ11F : 1;
            __IOM uint8_t DIRQ12F : 1;
            __IOM uint8_t DIRQ13F : 1;
            __IOM uint8_t DIRQ14F : 1;
            __IOM uint8_t DIRQ15F : 1;
        } DPSIFR1_b;
    };

    union
    {
        __IOM uint8_t DPSIFR2;

        struct
        {
            __IOM uint8_t DLVD1IF  : 1;
            __IOM uint8_t DLVD2IF  : 1;
            __IOM uint8_t DTRTCIIF : 1;
            __IOM uint8_t DRTCAIF  : 1;
            __IOM uint8_t DNMIF    : 1;
            uint8_t                : 3;
        } DPSIFR2_b;
    };

    union
    {
        __IOM uint8_t DPSIFR3;

        struct
        {
            __IOM uint8_t DUSBFSIF : 1;
            __IOM uint8_t DUSBHSIF : 1;
            __IOM uint8_t DAGT1IF  : 1;
            __IOM uint8_t DAGT3IF  : 1;
            uint8_t                : 4;
        } DPSIFR3_b;
    };

    union
    {
        __IOM uint8_t DPSIEGR0;

        struct
        {
            __IOM uint8_t DIRQ0EG : 1;
            __IOM uint8_t DIRQ1EG : 1;
            __IOM uint8_t DIRQ2EG : 1;
            __IOM uint8_t DIRQ3EG : 1;
            __IOM uint8_t DIRQ4EG : 1;
            __IOM uint8_t DIRQ5EG : 1;
            __IOM uint8_t DIRQ6EG : 1;
            __IOM uint8_t DIRQ7EG : 1;
        } DPSIEGR0_b;
    };

    union
    {
        __IOM uint8_t DPSIEGR1;

        struct
        {
            __IOM uint8_t DIRQ0EG : 1;
            __IOM uint8_t DIRQ1EG : 1;
            __IOM uint8_t DIRQ2EG : 1;
            __IOM uint8_t DIRQ3EG : 1;
            __IOM uint8_t DIRQ4EG : 1;
            __IOM uint8_t DIRQ5EG : 1;
            __IOM uint8_t DIRQ6EG : 1;
            __IOM uint8_t DIRQ7EG : 1;
        } DPSIEGR1_b;
    };

    union
    {
        __IOM uint8_t DPSIEGR2;

        struct
        {
            __IOM uint8_t DLVD1IEG : 1;
            __IOM uint8_t DLVD2IEG : 1;
            uint8_t                : 2;
            __IOM uint8_t DNMIEG   : 1;
            uint8_t                : 3;
        } DPSIEGR2_b;
    };
    __IM uint8_t RESERVED41;

    union
    {
        __IOM uint8_t SYOCDCR;

        struct
        {
            __IOM uint8_t DOCDF : 1;
            uint8_t             : 6;
            __IOM uint8_t DBGEN : 1;
        } SYOCDCR_b;
    };

    union
    {
        __IOM uint8_t STCONR;

        struct
        {
            __IOM uint8_t STCON : 2;
            uint8_t             : 6;
        } STCONR_b;
    };

    union
    {
        __IOM uint8_t RSTSR0;

        struct
        {
            __IOM uint8_t PORF : 1;    /*!< [0..0] Power-On Reset Detect FlagNOTE: Writable only to clear
                                        *   the flag. Confirm the value is 1 and then write 0.                        */
            __IOM uint8_t LVD0RF : 1;  /*!< [1..1] Voltage Monitor 0 Reset Detect FlagNOTE: Writable only
                                        *   to clear the flag. Confirm the value is 1 and then write
                                        *   0.                                                                        */
            __IOM uint8_t LVD1RF : 1;  /*!< [2..2] Voltage Monitor 1 Reset Detect FlagNOTE: Writable only
                                        *   to clear the flag. Confirm the value is 1 and then write
                                        *   0.                                                                        */
            __IOM uint8_t LVD2RF : 1;  /*!< [3..3] Voltage Monitor 2 Reset Detect FlagNOTE: Writable only
                                        *   to clear the flag. Confirm the value is 1 and then write
                                        *   0.                                                                        */
            uint8_t               : 3;
            __IOM uint8_t DPSRSTF : 1; /*!< [7..7] Deep Software Standby Reset FlagNOTE: Writable only to
                                        *   clear the flag. Confirm the value is 1 and then write 0.                  */
        } RSTSR0_b;
    };

    union
    {
        __IOM uint8_t RSTSR2;

        struct
        {
            __IOM uint8_t CWSF : 1;
            uint8_t            : 7;
        } RSTSR2_b;
    };
    __IM uint8_t RESERVED42;

    union
    {
        __IOM uint8_t MOMCR;           /*!< (@ 0x00000413) Main Clock Oscillator Mode Oscillation Control
                                        *                  Register                                                   */

        struct
        {
            uint8_t                 : 3;
            __IOM uint8_t MODRV1    : 1;
            __IOM uint8_t MODRV0    : 2;
            __IOM uint8_t MOSEL     : 1;
            __IOM uint8_t AUTODRVEN : 1; /*!< [7..7] Main Clock Oscillator Drive Capability Auto Switching
                                          *   Enable                                                                    */
        } MOMCR_b;
    };
    __IM uint16_t RESERVED43;

    union
    {
        __IOM uint8_t FWEPROR;

        struct
        {
            __IOM uint8_t FLWE : 2;
            uint8_t            : 6;
        } FWEPROR_b;
    };

    union
    {
        union
        {
            __IOM uint8_t LVCMPCR;

            struct
            {
                uint8_t             : 5;
                __IOM uint8_t LVD1E : 1;
                __IOM uint8_t LVD2E : 1;
                uint8_t             : 1;
            } LVCMPCR_b;
        };

        union
        {
            __IOM uint8_t LVD1CMPCR;

            struct
            {
                __IOM uint8_t LVD1LVL : 5; /*!< [4..0] Voltage Detection 1 Level Select (Standard voltage during
                                            *   drop in voltage)                                                          */
                uint8_t             : 2;
                __IOM uint8_t LVD1E : 1;
            } LVD1CMPCR_b;
        };
    };

    union
    {
        union
        {
            __IOM uint8_t LVDLVLR;

            struct
            {
                __IOM uint8_t LVD1LVL : 5; /*!< [4..0] Voltage Detection 1 Level Select (Standard voltage during
                                            *   fall in voltage)                                                          */
                __IOM uint8_t LVD2LVL : 3; /*!< [7..5] Voltage Detection 2 Level Select (Standard voltage during
                                            *   fall in voltage)                                                          */
            } LVDLVLR_b;
        };

        union
        {
            __IOM uint8_t LVD2CMPCR;

            struct
            {
                __IOM uint8_t LVD2LVL : 3; /*!< [2..0] Voltage Detection 2 Level Select (Standard voltage during
                                            *   drop in voltage)                                                          */
                uint8_t             : 4;
                __IOM uint8_t LVD2E : 1;
            } LVD2CMPCR_b;
        };
    };
    __IM uint8_t RESERVED44;

    union
    {
        __IOM uint8_t LVD1CR0;

        struct
        {
            __IOM uint8_t RIE   : 1;
            __IOM uint8_t DFDIS : 1;
            __IOM uint8_t CMPE  : 1;
            uint8_t             : 1;
            __IOM uint8_t FSAMP : 2;
            __IOM uint8_t RI    : 1;
            __IOM uint8_t RN    : 1;
        } LVD1CR0_b;
    };

    union
    {
        __IOM uint8_t LVD2CR0;

        struct
        {
            __IOM uint8_t RIE   : 1;
            __IOM uint8_t DFDIS : 1;
            __IOM uint8_t CMPE  : 1;
            uint8_t             : 1;
            __IOM uint8_t FSAMP : 2;
            __IOM uint8_t RI    : 1;
            __IOM uint8_t RN    : 1;
        } LVD2CR0_b;
    };
    __IM uint8_t RESERVED45;

    union
    {
        __IOM uint8_t VBATTMNSELR;        /*!< (@ 0x0000041D) Battery Backup Voltage Monitor Function Select
                                           *                  Register                                                   */

        struct
        {
            __IOM uint8_t VBATTMNSEL : 1;
            uint8_t                  : 7;
        } VBATTMNSELR_b;
    };

    union
    {
        __IM uint8_t VBATTMONR;

        struct
        {
            __IM uint8_t VBATTMON : 1;
            uint8_t               : 7;
        } VBATTMONR_b;
    };

    union
    {
        __IOM uint8_t VBTCR1;

        struct
        {
            __IOM uint8_t BPWSWSTP : 1;
            uint8_t                : 7;
        } VBTCR1_b;
    };
    __IM uint32_t RESERVED46[8];

    union
    {
        union
        {
            __IOM uint8_t DCDCCTL;

            struct
            {
                __IOM uint8_t DCDCON  : 1;
                __IOM uint8_t OCPEN   : 1;
                uint8_t               : 2;
                __IOM uint8_t STOPZA  : 1;
                __IOM uint8_t LCBOOST : 1;
                __IOM uint8_t FST     : 1;
                __IOM uint8_t PD      : 1;
            } DCDCCTL_b;
        };

        union
        {
            __IOM uint8_t LDOSCR;

            struct
            {
                __IOM uint8_t LDOSTP0 : 1;
                __IOM uint8_t LDOSTP1 : 1;
                uint8_t               : 6;
            } LDOSCR_b;
        };
    };

    union
    {
        __IOM uint8_t VCCSEL;

        struct
        {
            __IOM uint8_t VCCSEL : 2;
            uint8_t              : 6;
        } VCCSEL_b;
    };
    __IM uint16_t RESERVED47;

    union
    {
        __IOM uint8_t PL2LDOSCR;

        struct
        {
            __IOM uint8_t PL2LDOSTP : 1;
            uint8_t                 : 7;
        } PL2LDOSCR_b;
    };
    __IM uint8_t  RESERVED48;
    __IM uint16_t RESERVED49;
    __IM uint32_t RESERVED50[14];

    union
    {
        __IOM uint8_t SOSCCR;

        struct
        {
            __IOM uint8_t SOSTP : 1;
            uint8_t             : 7;
        } SOSCCR_b;
    };

    union
    {
        __IOM uint8_t SOMCR;

        struct
        {
            __IOM uint8_t SODRV : 2;
            uint8_t             : 6;
        } SOMCR_b;
    };

    union
    {
        __IOM uint8_t SOMRG;

        struct
        {
            __IOM uint8_t SOSCMRG : 2;
            uint8_t               : 6;
        } SOMRG_b;
    };
    __IM uint8_t  RESERVED51;
    __IM uint32_t RESERVED52[3];

    union
    {
        __IOM uint8_t LOCOCR;

        struct
        {
            __IOM uint8_t LCSTP : 1;
            uint8_t             : 7;
        } LOCOCR_b;
    };
    __IM uint8_t RESERVED53;

    union
    {
        __IOM uint8_t LOCOUTCR;

        struct
        {
            __IOM uint8_t LOCOUTRM : 8; /*!< [7..0] LOCO User Trimming 1000_0000 : -128 1000_0001 : -127
                                         *   1000_0010 : -126 . . . 1111_1111 : -1 0000_0000 : Center
                                         *   Code 0000_0001 : +1 . . . 0111_1101 : +125 0111_1110 :
                                         +126 0111_1111 : +127These bits are added to original LOCO
                                         *   trimming bits                                                             */
        } LOCOUTCR_b;
    };
    __IM uint8_t  RESERVED54;
    __IM uint32_t RESERVED55[7];

    union
    {
        __IOM uint8_t VBTCR2;

        struct
        {
            uint8_t                 : 4;
            __IOM uint8_t VBTLVDEN  : 1;
            uint8_t                 : 1;
            __IOM uint8_t VBTLVDLVL : 2;
        } VBTCR2_b;
    };

    union
    {
        __IOM uint8_t VBTSR;

        struct
        {
            __IOM uint8_t VBTRDF  : 1;
            __IOM uint8_t VBTBLDF : 1;
            uint8_t               : 2;
            __IM uint8_t VBTRVLD  : 1;
            uint8_t               : 3;
        } VBTSR_b;
    };

    union
    {
        __IOM uint8_t VBTCMPCR;

        struct
        {
            __IOM uint8_t VBTCMPE : 1;
            uint8_t               : 7;
        } VBTCMPCR_b;
    };
    __IM uint8_t RESERVED56;

    union
    {
        __IOM uint8_t VBTLVDICR;          /*!< (@ 0x000004B4) VBATT Pin Low Voltage Detect Interrupt Control
                                           *                  Register                                                   */

        struct
        {
            __IOM uint8_t VBTLVDIE   : 1;
            __IOM uint8_t VBTLVDISEL : 1;
            uint8_t                  : 6;
        } VBTLVDICR_b;
    };
    __IM uint8_t RESERVED57;

    union
    {
        __IOM uint8_t VBTWCTLR;

        struct
        {
            __IOM uint8_t VWEN : 1;
            uint8_t            : 7;
        } VBTWCTLR_b;
    };
    __IM uint8_t RESERVED58;

    union
    {
        __IOM uint8_t VBTWCH0OTSR;

        struct
        {
            uint8_t                  : 1;
            __IOM uint8_t CH0VCH1TE  : 1;
            __IOM uint8_t CH0VCH2TE  : 1;
            __IOM uint8_t CH0VRTCTE  : 1;
            __IOM uint8_t CH0VRTCATE : 1;
            __IOM uint8_t CH0VAGTUTE : 1;
            uint8_t                  : 2;
        } VBTWCH0OTSR_b;
    };

    union
    {
        __IOM uint8_t VBTWCH1OTSR;

        struct
        {
            __IOM uint8_t CH1VCH0TE  : 1;
            uint8_t                  : 1;
            __IOM uint8_t CH1VCH2TE  : 1;
            __IOM uint8_t CH1VRTCTE  : 1;
            __IOM uint8_t CH1VRTCATE : 1;
            __IOM uint8_t CH1VAGTUTE : 1;
            uint8_t                  : 2;
        } VBTWCH1OTSR_b;
    };

    union
    {
        __IOM uint8_t VBTWCH2OTSR;

        struct
        {
            __IOM uint8_t CH2VCH0TE  : 1;
            __IOM uint8_t CH2VCH1TE  : 1;
            uint8_t                  : 1;
            __IOM uint8_t CH2VRTCTE  : 1;
            __IOM uint8_t CH2VRTCATE : 1;
            __IOM uint8_t CH2VAGTUTE : 1;
            uint8_t                  : 2;
        } VBTWCH2OTSR_b;
    };

    union
    {
        __IOM uint8_t VBTICTLR;

        struct
        {
            __IOM uint8_t VCH0INEN : 1;
            __IOM uint8_t VCH1INEN : 1;
            __IOM uint8_t VCH2INEN : 1;
            uint8_t                : 5;
        } VBTICTLR_b;
    };

    union
    {
        __IOM uint8_t VBTOCTLR;

        struct
        {
            __IOM uint8_t VCH0OEN   : 1;
            __IOM uint8_t VCH1OEN   : 1;
            __IOM uint8_t VCH2OEN   : 1;
            __IOM uint8_t VOUT0LSEL : 1;
            __IOM uint8_t VCOU1LSEL : 1;
            __IOM uint8_t VOUT2LSEL : 1;
            uint8_t                 : 2;
        } VBTOCTLR_b;
    };

    union
    {
        __IOM uint8_t VBTWTER;

        struct
        {
            __IOM uint8_t VCH0E  : 1;
            __IOM uint8_t VCH1E  : 1;
            __IOM uint8_t VCH2E  : 1;
            __IOM uint8_t VRTCIE : 1;
            __IOM uint8_t VRTCAE : 1;
            __IOM uint8_t VAGTUE : 1;
            uint8_t              : 2;
        } VBTWTER_b;
    };

    union
    {
        __IOM uint8_t VBTWEGR;

        struct
        {
            __IOM uint8_t VCH0EG : 1;
            __IOM uint8_t VCH1EG : 1;
            __IOM uint8_t VCH2EG : 1;
            uint8_t              : 5;
        } VBTWEGR_b;
    };

    union
    {
        __IOM uint8_t VBTWFR;

        struct
        {
            __IOM uint8_t VCH0F  : 1;
            __IOM uint8_t VCH1F  : 1;
            __IOM uint8_t VCH2F  : 1;
            __IOM uint8_t VRTCIF : 1;
            __IOM uint8_t VRTCAF : 1;
            __IOM uint8_t VAGTUF : 1;
            uint8_t              : 2;
        } VBTWFR_b;
    };

    union
    {
        __IOM uint8_t VBTBER;

        struct
        {
            uint8_t            : 3;
            __IOM uint8_t VBAE : 1;
            uint8_t            : 4;
        } VBTBER_b;
    };
    __IM uint8_t  RESERVED59;
    __IM uint16_t RESERVED60;
    __IM uint32_t RESERVED61[15];

    union
    {
        __IOM uint8_t VBTBKR[512];

        struct
        {
            __IOM uint8_t VBTBKR : 8;  /*!< [7..0] VBTBKR is a 512-byte readable/writable register to store
                                        *   data powered by VBATT.The value of this register is retained
                                        *   even when VCC is not powered but VBATT is powered.VBTBKR
                                        *   is initialized by VBATT selected voltage power-on-reset.                  */
        } VBTBKR_b[512];
    };
} R_SYSTEM_Type;

/* =========================================================================================================================== */
/* ================                                         R_TSN_CAL                                         ================ */
/* =========================================================================================================================== */

/**
 * @brief Temperature Sensor (R_TSN_CAL)
 */

typedef struct
{
    union
    {
        __IM uint32_t TSCDR;

        struct
        {
            __IM uint32_t TSCDR : 32;  /*!< [31..0] The 32 bit TSCDR register stores temperature sensor
                                        *   calibration converted value.                                              */
        } TSCDR_b;
    };
} R_TSN_CAL_Type;

/* =========================================================================================================================== */
/* ================                                        R_TSN_CTRL                                         ================ */
/* =========================================================================================================================== */

/**
 * @brief Temperature Sensor (R_TSN_CTRL)
 */

typedef struct
{
    union
    {
        __IOM uint8_t TSCR;

        struct
        {
            uint8_t            : 4;
            __IOM uint8_t TSOE : 1;
            uint8_t            : 2;
            __IOM uint8_t TSEN : 1;
        } TSCR_b;
    };
} R_TSN_CTRL_Type;

/* =========================================================================================================================== */
/* ================                                         R_USB_FS0                                         ================ */
/* =========================================================================================================================== */

/**
 * @brief USB 2.0 Module (R_USB_FS0)
 */

typedef struct
{
    union
    {
        __IOM uint16_t SYSCFG;

        struct
        {
            __IOM uint16_t USBE  : 1;
            uint16_t             : 2;
            __IOM uint16_t DMRPU : 1;
            __IOM uint16_t DPRPU : 1;
            __IOM uint16_t DRPD  : 1;
            __IOM uint16_t DCFM  : 1;
            uint16_t             : 1;
            __IOM uint16_t CNEN  : 1;
            uint16_t             : 1;
            __IOM uint16_t SCKE  : 1;
            uint16_t             : 5;
        } SYSCFG_b;
    };

    union
    {
        __IOM uint16_t BUSWAIT;

        struct
        {
            __IOM uint16_t BWAIT : 4;  /*!< [3..0] CPU Bus Access Wait Specification BWAIT waits (BWAIT+2
                                        *   access cycles)                                                            */
            uint16_t : 12;
        } BUSWAIT_b;
    };

    union
    {
        __IM uint16_t SYSSTS0;

        struct
        {
            __IM uint16_t LNST  : 2;
            __IM uint16_t IDMON : 1;
            uint16_t            : 2;
            __IM uint16_t SOFEA : 1;   /*!< [5..5] SOF Active Monitor While Host Controller Function is
                                        *   Selected.                                                                 */
            __IM uint16_t HTACT  : 1;
            uint16_t             : 7;
            __IM uint16_t OVCMON : 2;  /*!< [15..14] External USB0_OVRCURA/ USB0_OVRCURB Input Pin MonitorThe
                                        *   OCVMON[1] bit indicates the status of the USBHS_OVRCURA
                                        *   pin. The OCVMON[0] bit indicates the status of the USBHS_OVRCURB
                                        *   pin.                                                                      */
        } SYSSTS0_b;
    };

    union
    {
        __IM uint16_t PLLSTA;

        struct
        {
            __IM uint16_t PLLLOCK : 1;
            uint16_t              : 15;
        } PLLSTA_b;
    };

    union
    {
        __IOM uint16_t DVSTCTR0;

        struct
        {
            __IM uint16_t RHST     : 3;
            uint16_t               : 1;
            __IOM uint16_t UACT    : 1;
            __IOM uint16_t RESUME  : 1;
            __IOM uint16_t USBRST  : 1;
            __IOM uint16_t RWUPE   : 1;
            __IOM uint16_t WKUP    : 1;
            __IOM uint16_t VBUSEN  : 1;
            __IOM uint16_t EXICEN  : 1;
            __IOM uint16_t HNPBTOA : 1; /*!< [11..11] Host Negotiation Protocol (HNP) Control This bit is
                                         *   used when switching from device B to device A while in
                                         *   OTG mode. If the HNPBTOA bit is 1, the internal function
                                         *   control keeps the suspended state until the HNP processing
                                         *   ends even though SYSCFG.DPRPU = 0 or SYSCFG.DCFM = 1 is
                                         *   set.                                                                      */
            uint16_t : 4;
        } DVSTCTR0_b;
    };
    __IM uint16_t RESERVED;

    union
    {
        __IOM uint16_t TESTMODE;

        struct
        {
            __IOM uint16_t UTST : 4;
            uint16_t            : 12;
        } TESTMODE_b;
    };
    __IM uint16_t RESERVED1;
    __IM uint32_t RESERVED2;

    union
    {
        __IOM uint32_t CFIFO;

        struct
        {
            union
            {
                __IOM uint16_t CFIFOL;
                __IOM uint8_t  CFIFOLL;
            };

            union
            {
                __IOM uint16_t CFIFOH;

                struct
                {
                    __IM uint8_t  RESERVED3;
                    __IOM uint8_t CFIFOHH;
                };
            };
        };
    };

    union
    {
        __IOM uint32_t D0FIFO;

        struct
        {
            union
            {
                __IOM uint16_t D0FIFOL;
                __IOM uint8_t  D0FIFOLL;
            };

            union
            {
                __IOM uint16_t D0FIFOH;

                struct
                {
                    __IM uint8_t  RESERVED4;
                    __IOM uint8_t D0FIFOHH;
                };
            };
        };
    };

    union
    {
        __IOM uint32_t D1FIFO;

        struct
        {
            union
            {
                __IOM uint16_t D1FIFOL;
                __IOM uint8_t  D1FIFOLL;
            };

            union
            {
                __IOM uint16_t D1FIFOH;

                struct
                {
                    __IM uint8_t  RESERVED5;
                    __IOM uint8_t D1FIFOHH;
                };
            };
        };
    };

    union
    {
        __IOM uint16_t CFIFOSEL;

        struct
        {
            __IOM uint16_t CURPIPE : 4;
            uint16_t               : 1;
            __IOM uint16_t ISEL    : 1;
            uint16_t               : 2;
            __IOM uint16_t BIGEND  : 1;
            uint16_t               : 1;
            __IOM uint16_t MBW     : 2;
            uint16_t               : 2;
            __IOM uint16_t REW     : 1;
            __IOM uint16_t RCNT    : 1;
        } CFIFOSEL_b;
    };

    union
    {
        __IOM uint16_t CFIFOCTR;

        struct
        {
            __IM uint16_t DTLN : 12;   /*!< [11..0] Receive Data LengthIndicates the length of the receive
                                        *   data.                                                                     */
            uint16_t            : 1;
            __IM uint16_t  FRDY : 1;
            __IOM uint16_t BCLR : 1;
            __IOM uint16_t BVAL : 1;
        } CFIFOCTR_b;
    };
    __IM uint32_t RESERVED6;

    union
    {
        __IOM uint16_t D0FIFOSEL;

        struct
        {
            __IOM uint16_t CURPIPE : 4;
            uint16_t               : 4;
            __IOM uint16_t BIGEND  : 1;
            uint16_t               : 1;
            __IOM uint16_t MBW     : 2;
            __IOM uint16_t DREQE   : 1;
            __IOM uint16_t DCLRM   : 1; /*!< [13..13] Auto Buffer Memory Clear Mode Accessed after Specified
                                         *   Pipe Data is Read                                                         */
            __IOM uint16_t REW  : 1;
            __IOM uint16_t RCNT : 1;
        } D0FIFOSEL_b;
    };

    union
    {
        __IOM uint16_t D0FIFOCTR;

        struct
        {
            __IM uint16_t DTLN : 12;   /*!< [11..0] Receive Data LengthIndicates the length of the receive
                                        *   data.                                                                     */
            uint16_t            : 1;
            __IM uint16_t  FRDY : 1;
            __IOM uint16_t BCLR : 1;
            __IOM uint16_t BVAL : 1;
        } D0FIFOCTR_b;
    };

    union
    {
        __IOM uint16_t D1FIFOSEL;

        struct
        {
            __IOM uint16_t CURPIPE : 4;
            uint16_t               : 4;
            __IOM uint16_t BIGEND  : 1;
            uint16_t               : 1;
            __IOM uint16_t MBW     : 2;
            __IOM uint16_t DREQE   : 1;
            __IOM uint16_t DCLRM   : 1; /*!< [13..13] Auto Buffer Memory Clear Mode Accessed after Specified
                                         *   Pipe Data is Read                                                         */
            __IOM uint16_t REW  : 1;
            __IOM uint16_t RCNT : 1;
        } D1FIFOSEL_b;
    };

    union
    {
        __IOM uint16_t D1FIFOCTR;

        struct
        {
            __IM uint16_t DTLN : 12;   /*!< [11..0] Receive Data LengthIndicates the length of the receive
                                        *   data.                                                                     */
            uint16_t            : 1;
            __IM uint16_t  FRDY : 1;
            __IOM uint16_t BCLR : 1;
            __IOM uint16_t BVAL : 1;
        } D1FIFOCTR_b;
    };

    union
    {
        __IOM uint16_t INTENB0;

        struct
        {
            uint16_t             : 8;
            __IOM uint16_t BRDYE : 1;
            __IOM uint16_t NRDYE : 1;
            __IOM uint16_t BEMPE : 1;
            __IOM uint16_t CTRE  : 1;
            __IOM uint16_t DVSE  : 1;
            __IOM uint16_t SOFE  : 1;
            __IOM uint16_t RSME  : 1;
            __IOM uint16_t VBSE  : 1;
        } INTENB0_b;
    };

    union
    {
        __IOM uint16_t INTENB1;

        struct
        {
            __IOM uint16_t PDDETINTE0 : 1;
            uint16_t                  : 3;
            __IOM uint16_t SACKE      : 1;
            __IOM uint16_t SIGNE      : 1;
            __IOM uint16_t EOFERRE    : 1;
            uint16_t                  : 4;
            __IOM uint16_t ATTCHE     : 1;
            __IOM uint16_t DTCHE      : 1;
            uint16_t                  : 1;
            __IOM uint16_t BCHGE      : 1;
            __IOM uint16_t OVRCRE     : 1;
        } INTENB1_b;
    };
    __IM uint16_t RESERVED7;

    union
    {
        __IOM uint16_t BRDYENB;

        struct
        {
            __IOM uint16_t PIPE0BRDYE : 1;
            __IOM uint16_t PIPE1BRDYE : 1;
            __IOM uint16_t PIPE2BRDYE : 1;
            __IOM uint16_t PIPE3BRDYE : 1;
            __IOM uint16_t PIPE4BRDYE : 1;
            __IOM uint16_t PIPE5BRDYE : 1;
            __IOM uint16_t PIPE6BRDYE : 1;
            __IOM uint16_t PIPE7BRDYE : 1;
            __IOM uint16_t PIPE8BRDYE : 1;
            __IOM uint16_t PIPE9BRDYE : 1;
            uint16_t                  : 6;
        } BRDYENB_b;
    };

    union
    {
        __IOM uint16_t NRDYENB;

        struct
        {
            __IOM uint16_t PIPE0NRDYE : 1;
            __IOM uint16_t PIPE1NRDYE : 1;
            __IOM uint16_t PIPE2NRDYE : 1;
            __IOM uint16_t PIPE3NRDYE : 1;
            __IOM uint16_t PIPE4NRDYE : 1;
            __IOM uint16_t PIPE5NRDYE : 1;
            __IOM uint16_t PIPE6NRDYE : 1;
            __IOM uint16_t PIPE7NRDYE : 1;
            __IOM uint16_t PIPE8NRDYE : 1;
            __IOM uint16_t PIPE9NRDYE : 1;
            uint16_t                  : 6;
        } NRDYENB_b;
    };

    union
    {
        __IOM uint16_t BEMPENB;

        struct
        {
            __IOM uint16_t PIPE0BEMPE : 1;
            __IOM uint16_t PIPE1BEMPE : 1;
            __IOM uint16_t PIPE2BEMPE : 1;
            __IOM uint16_t PIPE3BEMPE : 1;
            __IOM uint16_t PIPE4BEMPE : 1;
            __IOM uint16_t PIPE5BEMPE : 1;
            __IOM uint16_t PIPE6BEMPE : 1;
            __IOM uint16_t PIPE7BEMPE : 1;
            __IOM uint16_t PIPE8BEMPE : 1;
            __IOM uint16_t PIPE9BEMPE : 1;
            uint16_t                  : 6;
        } BEMPENB_b;
    };

    union
    {
        __IOM uint16_t SOFCFG;

        struct
        {
            uint16_t                : 4;
            __IM uint16_t  EDGESTS  : 1;
            __IOM uint16_t INTL     : 1;
            __IOM uint16_t BRDYM    : 1;
            uint16_t                : 1;
            __IOM uint16_t TRNENSEL : 1;
            uint16_t                : 7;
        } SOFCFG_b;
    };

    union
    {
        __IOM uint16_t PHYSET;

        struct
        {
            __IOM uint16_t DIRPD    : 1;
            __IOM uint16_t PLLRESET : 1;
            uint16_t                : 1;
            __IOM uint16_t CDPEN    : 1;
            __IOM uint16_t CLKSEL   : 2;
            uint16_t                : 2;
            __IOM uint16_t REPSEL   : 2;
            uint16_t                : 1;
            __IOM uint16_t REPSTART : 1;
            uint16_t                : 3;
            __IOM uint16_t HSEB     : 1;
        } PHYSET_b;
    };

    union
    {
        __IOM uint16_t INTSTS0;

        struct
        {
            __IM uint16_t  CTSQ  : 3;
            __IOM uint16_t VALID : 1;
            __IM uint16_t  DVSQ  : 3;
            __IM uint16_t  VBSTS : 1;
            __IM uint16_t  BRDY  : 1;
            __IM uint16_t  NRDY  : 1;
            __IM uint16_t  BEMP  : 1;
            __IOM uint16_t CTRT  : 1;
            __IOM uint16_t DVST  : 1;
            __IOM uint16_t SOFR  : 1;
            __IOM uint16_t RESM  : 1;
            __IOM uint16_t VBINT : 1;
        } INTSTS0_b;
    };

    union
    {
        __IOM uint16_t INTSTS1;

        struct
        {
            __IOM uint16_t PDDETINT0 : 1;
            uint16_t                 : 3;
            __IOM uint16_t SACK      : 1;
            __IOM uint16_t SIGN      : 1;
            __IOM uint16_t EOFERR    : 1;
            uint16_t                 : 1;
            __IOM uint16_t LPMEND    : 1;
            __IOM uint16_t L1RSMEND  : 1;
            uint16_t                 : 1;
            __IOM uint16_t ATTCH     : 1;
            __IOM uint16_t DTCH      : 1;
            uint16_t                 : 1;
            __IOM uint16_t BCHG      : 1;
            __IOM uint16_t OVRCR     : 1;
        } INTSTS1_b;
    };
    __IM uint16_t RESERVED8;

    union
    {
        __IOM uint16_t BRDYSTS;

        struct
        {
            __IOM uint16_t PIPE0BRDY : 1;
            __IOM uint16_t PIPE1BRDY : 1;
            __IOM uint16_t PIPE2BRDY : 1;
            __IOM uint16_t PIPE3BRDY : 1;
            __IOM uint16_t PIPE4BRDY : 1;
            __IOM uint16_t PIPE5BRDY : 1;
            __IOM uint16_t PIPE6BRDY : 1;
            __IOM uint16_t PIPE7BRDY : 1;
            __IOM uint16_t PIPE8BRDY : 1;
            __IOM uint16_t PIPE9BRDY : 1;
            uint16_t                 : 6;
        } BRDYSTS_b;
    };

    union
    {
        __IOM uint16_t NRDYSTS;

        struct
        {
            __IOM uint16_t PIPE0NRDY : 1;
            __IOM uint16_t PIPE1NRDY : 1;
            __IOM uint16_t PIPE2NRDY : 1;
            __IOM uint16_t PIPE3NRDY : 1;
            __IOM uint16_t PIPE4NRDY : 1;
            __IOM uint16_t PIPE5NRDY : 1;
            __IOM uint16_t PIPE6NRDY : 1;
            __IOM uint16_t PIPE7NRDY : 1;
            __IOM uint16_t PIPE8NRDY : 1;
            __IOM uint16_t PIPE9NRDY : 1;
            uint16_t                 : 6;
        } NRDYSTS_b;
    };

    union
    {
        __IOM uint16_t BEMPSTS;

        struct
        {
            __IOM uint16_t PIPE0BEMP : 1;
            __IOM uint16_t PIPE1BEMP : 1;
            __IOM uint16_t PIPE2BEMP : 1;
            __IOM uint16_t PIPE3BEMP : 1;
            __IOM uint16_t PIPE4BEMP : 1;
            __IOM uint16_t PIPE5BEMP : 1;
            __IOM uint16_t PIPE6BEMP : 1;
            __IOM uint16_t PIPE7BEMP : 1;
            __IOM uint16_t PIPE8BEMP : 1;
            __IOM uint16_t PIPE9BEMP : 1;
            uint16_t                 : 6;
        } BEMPSTS_b;
    };

    union
    {
        __IOM uint16_t FRMNUM;

        struct
        {
            __IM uint16_t FRNM  : 11;
            uint16_t            : 3;
            __IOM uint16_t CRCE : 1;
            __IOM uint16_t OVRN : 1;
        } FRMNUM_b;
    };

    union
    {
        __IOM uint16_t UFRMNUM;

        struct
        {
            __IM uint16_t UFRNM  : 3;
            uint16_t             : 12;
            __IOM uint16_t DVCHG : 1;
        } UFRMNUM_b;
    };

    union
    {
        __IOM uint16_t USBADDR;

        struct
        {
            __IM uint16_t USBADDR : 7;    /*!< [6..0] USB Address In device controller mode, these flags indicate
                                           *   the USB address assigned by the host when the USBHS processed
                                           *   the SET_ADDRESS request successfully.                                     */
            uint16_t                 : 1;
            __IOM uint16_t STSRECOV0 : 3;
            uint16_t                 : 5;
        } USBADDR_b;
    };
    __IM uint16_t RESERVED9;

    union
    {
        __IOM uint16_t USBREQ;

        struct
        {
            __IOM uint16_t BMREQUESTTYPE : 8; /*!< [7..0] Request TypeThese bits store the USB request bmRequestType
                                               *   value.                                                                    */
            __IOM uint16_t BREQUEST : 8;
        } USBREQ_b;
    };

    union
    {
        __IOM uint16_t USBVAL;

        struct
        {
            __IOM uint16_t WVALUE : 16;
        } USBVAL_b;
    };

    union
    {
        __IOM uint16_t USBINDX;

        struct
        {
            __IOM uint16_t WINDEX : 16;
        } USBINDX_b;
    };

    union
    {
        __IOM uint16_t USBLENG;

        struct
        {
            __IOM uint16_t WLENGTH : 16;
        } USBLENG_b;
    };

    union
    {
        __IOM uint16_t DCPCFG;

        struct
        {
            uint16_t              : 4;
            __IOM uint16_t DIR    : 1;
            uint16_t              : 2;
            __IOM uint16_t SHTNAK : 1;
            __IOM uint16_t CNTMD  : 1;
            uint16_t              : 7;
        } DCPCFG_b;
    };

    union
    {
        __IOM uint16_t DCPMAXP;

        struct
        {
            __IOM uint16_t MXPS : 7;   /*!< [6..0] Maximum Packet SizeThese bits set the maximum amount
                                        *   of data (maximum packet size) in payloads for the DCP.                    */
            uint16_t              : 5;
            __IOM uint16_t DEVSEL : 4;
        } DCPMAXP_b;
    };

    union
    {
        __IOM uint16_t DCPCTR;

        struct
        {
            __IOM uint16_t PID      : 2;
            __IOM uint16_t CCPL     : 1;
            uint16_t                : 2;
            __IM uint16_t  PBUSY    : 1;
            __IM uint16_t  SQMON    : 1;
            __IOM uint16_t SQSET    : 1;
            __IOM uint16_t SQCLR    : 1;
            uint16_t                : 2;
            __IOM uint16_t SUREQCLR : 1;
            uint16_t                : 2;
            __IOM uint16_t SUREQ    : 1;
            __IM uint16_t  BSTS     : 1;
        } DCPCTR_b;
    };
    __IM uint16_t RESERVED10;

    union
    {
        __IOM uint16_t PIPESEL;

        struct
        {
            __IOM uint16_t PIPESEL : 4;
            uint16_t               : 12;
        } PIPESEL_b;
    };
    __IM uint16_t RESERVED11;

    union
    {
        __IOM uint16_t PIPECFG;

        struct
        {
            __IOM uint16_t EPNUM : 4;  /*!< [3..0] Endpoint NumberThese bits specify the endpoint number
                                        *   for the selected pipe.Setting 0000b means unused pipe.                    */
            __IOM uint16_t DIR    : 1;
            uint16_t              : 2;
            __IOM uint16_t SHTNAK : 1;
            uint16_t              : 1;
            __IOM uint16_t DBLB   : 1;
            __IOM uint16_t BFRE   : 1;
            uint16_t              : 3;
            __IOM uint16_t TYPE   : 2;
        } PIPECFG_b;
    };
    __IM uint16_t RESERVED12;

    union
    {
        __IOM uint16_t PIPEMAXP;

        struct
        {
            __IOM uint16_t MXPS : 9;   /*!< [8..0] Maximum Packet SizePIPE1 and PIPE2: 1 byte (001h) to
                                        *   256 bytes (100h)PIPE3 to PIPE5: 8 bytes (008h), 16 bytes
                                        *   (010h), 32 bytes (020h), 64 bytes (040h) (Bits [8:7] and
                                        *   [2:0] are not provided.)PIPE6 to PIPE9: 1 byte (001h) to
                                        *   64 bytes (040h) (Bits [8:7] are not provided.)                            */
            uint16_t              : 3;
            __IOM uint16_t DEVSEL : 4;
        } PIPEMAXP_b;
    };

    union
    {
        __IOM uint16_t PIPEPERI;

        struct
        {
            __IOM uint16_t IITV : 3;   /*!< [2..0] Interval Error Detection IntervalSpecifies the interval
                                        *   error detection timing for the selected pipe in terms of
                                        *   frames, which is expressed as nth power of 2.                             */
            uint16_t            : 9;
            __IOM uint16_t IFIS : 1;
            uint16_t            : 3;
        } PIPEPERI_b;
    };

    union
    {
        __IOM uint16_t PIPE_CTR[9];

        struct
        {
            __IOM uint16_t PID    : 2;
            uint16_t              : 3;
            __IM uint16_t  PBUSY  : 1;
            __IM uint16_t  SQMON  : 1;
            __IOM uint16_t SQSET  : 1;
            __IOM uint16_t SQCLR  : 1;
            __IOM uint16_t ACLRM  : 1;
            __IOM uint16_t ATREPM : 1;
            uint16_t              : 1;
            __IM uint16_t CSSTS   : 1; /*!< [12..12] CSSTS StatusThis bit indicates the CSPLIT status of
                                        *   Split Transaction of the relevant pipe                                    */
            __IOM uint16_t CSCLR : 1;  /*!< [13..13] CSPLIT Status ClearSet this bit to 1 when clearing
                                        *   the CSSTS bit of the relevant pipe                                        */
            __IM uint16_t INBUFM : 1;
            __IM uint16_t BSTS   : 1;
        } PIPE_CTR_b[9];
    };
    __IM uint16_t                RESERVED13;
    __IM uint32_t                RESERVED14[3];
    __IOM R_USB_FS0_PIPE_TR_Type PIPE_TR[5];
    __IM uint32_t                RESERVED15[3];

    union
    {
        __IOM uint16_t USBBCCTRL0;

        struct
        {
            __IOM uint16_t RPDME0     : 1;
            __IOM uint16_t IDPSRCE0   : 1;
            __IOM uint16_t IDMSINKE0  : 1;
            __IOM uint16_t VDPSRCE0   : 1;
            __IOM uint16_t IDPSINKE0  : 1;
            __IOM uint16_t VDMSRCE0   : 1;
            uint16_t                  : 1;
            __IOM uint16_t BATCHGE0   : 1;
            __IM uint16_t  CHGDETSTS0 : 1;
            __IM uint16_t  PDDETSTS0  : 1;
            uint16_t                  : 6;
        } USBBCCTRL0_b;
    };
    __IM uint16_t RESERVED16;
    __IM uint32_t RESERVED17[4];

    union
    {
        __IOM uint16_t UCKSEL;

        struct
        {
            __IOM uint16_t UCKSELC : 1;
            uint16_t               : 15;
        } UCKSEL_b;
    };
    __IM uint16_t RESERVED18;
    __IM uint32_t RESERVED19;

    union
    {
        __IOM uint16_t USBMC;

        struct
        {
            __IOM uint16_t VDDUSBE : 1;
            uint16_t               : 6;
            __IOM uint16_t VDCEN   : 1;
            uint16_t               : 8;
        } USBMC_b;
    };
    __IM uint16_t RESERVED20;

    union
    {
        __IOM uint16_t DEVADD[10];

        struct
        {
            uint16_t               : 6;
            __IOM uint16_t USBSPD  : 2;
            __IOM uint16_t HUBPORT : 3;
            __IOM uint16_t UPPHUB  : 4;
            uint16_t               : 1;
        } DEVADD_b[10];
    };
    __IM uint32_t RESERVED21[3];

    union
    {
        __IOM uint32_t PHYSLEW;

        struct
        {
            __IOM uint32_t SLEWR00 : 1;
            __IOM uint32_t SLEWR01 : 1;
            __IOM uint32_t SLEWF00 : 1;
            __IOM uint32_t SLEWF01 : 1;
            uint32_t               : 28;
        } PHYSLEW_b;
    };
    __IM uint32_t RESERVED22[3];

    union
    {
        __IOM uint16_t LPCTRL;

        struct
        {
            uint16_t             : 7;
            __IOM uint16_t HWUPM : 1;
            uint16_t             : 8;
        } LPCTRL_b;
    };

    union
    {
        __IOM uint16_t LPSTS;

        struct
        {
            uint16_t                : 14;
            __IOM uint16_t SUSPENDM : 1;
            uint16_t                : 1;
        } LPSTS_b;
    };
    __IM uint32_t RESERVED23[15];

    union
    {
        __IOM uint16_t BCCTRL;

        struct
        {
            __IOM uint16_t IDPSRCE  : 1;
            __IOM uint16_t IDMSINKE : 1;
            __IOM uint16_t VDPSRCE  : 1;
            __IOM uint16_t IDPSINKE : 1;
            __IOM uint16_t VDMSRCE  : 1;
            __IOM uint16_t DCPMODE  : 1;
            uint16_t                : 2;
            __IM uint16_t CHGDETSTS : 1;
            __IM uint16_t PDDETSTS  : 1;
            uint16_t                : 6;
        } BCCTRL_b;
    };
    __IM uint16_t RESERVED24;

    union
    {
        __IOM uint16_t PL1CTRL1;

        struct
        {
            __IOM uint16_t L1RESPEN : 1;
            __IOM uint16_t L1RESPMD : 2;
            __IOM uint16_t L1NEGOMD : 1; /*!< [3..3] L1 Response Negotiation Control.NOTE: This bit is valid
                                          *   only when the L1RESPMD[1:0] value is 2'b11.                               */
            __IM uint16_t DVSQ : 4;      /*!< [7..4] DVSQ Extension.DVSQ[3] is Mirror of DVSQ[2:0] in INTSTS0.Indicates
                                          *   the L1 state together with the device state bits DVSQ[2:0].               */
            __IOM uint16_t HIRDTHR : 4;  /*!< [11..8] L1 Response Negotiation Threshold ValueHIRD threshold
                                          *   value used for L1NEGOMD.The format is the same as the HIRD
                                          *   field in HL1CTRL.                                                         */
            uint16_t               : 2;
            __IOM uint16_t L1EXTMD : 1;
            uint16_t               : 1;
        } PL1CTRL1_b;
    };

    union
    {
        __IOM uint16_t PL1CTRL2;

        struct
        {
            uint16_t               : 8;
            __IOM uint16_t HIRDMON : 4;
            __IOM uint16_t RWEMON  : 1;
            uint16_t               : 3;
        } PL1CTRL2_b;
    };

    union
    {
        __IOM uint16_t HL1CTRL1;

        struct
        {
            __IOM uint16_t L1REQ    : 1;
            __IM uint16_t  L1STATUS : 2;
            uint16_t                : 13;
        } HL1CTRL1_b;
    };

    union
    {
        __IOM uint16_t HL1CTRL2;

        struct
        {
            __IOM uint16_t L1ADDR : 4; /*!< [3..0] LPM Token DeviceAddressThese bits specify the value to
                                        *   be set in the ADDR field of LPM token.                                    */
            uint16_t             : 4;
            __IOM uint16_t HIRD  : 4;
            __IOM uint16_t L1RWE : 1;  /*!< [12..12] LPM Token L1 RemoteWake EnableThese bits specify the
                                        *   value to be set in the RWE field of LPM token.                            */
            uint16_t            : 2;
            __IOM uint16_t BESL : 1;   /*!< [15..15] BESL & Alternate HIRDThis bit selects the K-State drive
                                        *   period at the time of L1 Resume.                                          */
        } HL1CTRL2_b;
    };
    __IM uint32_t RESERVED25[5];

    union
    {
        __IM uint32_t DPUSR0R;         /*!< (@ 0x00000160) Deep Standby USB Transceiver Control/Pin Monitor
                                        *                  Register                                                   */

        struct
        {
            uint32_t              : 20;
            __IM uint32_t DOVCAHM : 1;  /*!< [20..20] OVRCURA InputIndicates OVRCURA input signal on the
                                         *   HS side of USB port.                                                      */
            __IM uint32_t DOVCBHM : 1;  /*!< [21..21] OVRCURB InputIndicates OVRCURB input signal on the
                                         *   HS side of USB port.                                                      */
            uint32_t               : 1;
            __IM uint32_t DVBSTSHM : 1; /*!< [23..23] VBUS InputIndicates VBUS input signal on the HS side
                                         *   of USB port.                                                              */
            uint32_t : 8;
        } DPUSR0R_b;
    };

    union
    {
        __IOM uint32_t DPUSR1R;

        struct
        {
            uint32_t                : 4;
            __IOM uint32_t DOVCAHE  : 1;
            __IOM uint32_t DOVCBHE  : 1;
            uint32_t                : 1;
            __IOM uint32_t DVBSTSHE : 1;
            uint32_t                : 12;
            __IM uint32_t DOVCAH    : 1;
            __IM uint32_t DOVCBH    : 1;
            uint32_t                : 1;
            __IM uint32_t DVBSTSH   : 1;
            uint32_t                : 8;
        } DPUSR1R_b;
    };

    union
    {
        __IOM uint16_t DPUSR2R;

        struct
        {
            __IM uint16_t DPINT : 1;
            __IM uint16_t DMINT : 1;
            uint16_t            : 2;
            __IM uint16_t DPVAL : 1;   /*!< [4..4] DP InputIndicates DP input signal on the HS side of USB
                                        *   port.                                                                     */
            __IM uint16_t DMVAL : 1;   /*!< [5..5] DM InputIndicates DM input signal on the HS side of USB
                                        *   port.                                                                     */
            uint16_t              : 2;
            __IOM uint16_t DPINTE : 1;
            __IOM uint16_t DMINTE : 1;
            uint16_t              : 6;
        } DPUSR2R_b;
    };

    union
    {
        __IOM uint16_t DPUSRCR;

        struct
        {
            __IOM uint16_t FIXPHY   : 1;
            __IOM uint16_t FIXPHYPD : 1;
            uint16_t                : 14;
        } DPUSRCR_b;
    };
    __IM uint32_t RESERVED26[165];

    union
    {
        __IOM uint32_t DPUSR0R_FS;      /*!< (@ 0x00000400) Deep Software Standby USB Transceiver Control/Pin
                                         *                  Monitor Register                                           */

        struct
        {
            __IOM uint32_t SRPC0   : 1;
            __IOM uint32_t RPUE0   : 1;
            uint32_t               : 1;
            __IOM uint32_t DRPD0   : 1;
            __IOM uint32_t FIXPHY0 : 1;
            uint32_t               : 11;
            __IM uint32_t DP0      : 1;
            __IM uint32_t DM0      : 1;
            uint32_t               : 2;
            __IM uint32_t DOVCA0   : 1; /*!< [20..20] USB OVRCURA InputIndicates the OVRCURA input signal
                                         *   of the USB.                                                               */
            __IM uint32_t DOVCB0 : 1;   /*!< [21..21] USB OVRCURB InputIndicates the OVRCURB input signal
                                         *   of the USB.                                                               */
            uint32_t              : 1;
            __IM uint32_t DVBSTS0 : 1;  /*!< [23..23] USB VBUS InputIndicates the VBUS input signal of the
                                         *   USB.                                                                      */
            uint32_t : 8;
        } DPUSR0R_FS_b;
    };

    union
    {
        __IOM uint32_t DPUSR1R_FS;        /*!< (@ 0x00000404) Deep Software Standby USB Suspend/Resume Interrupt
                                           *                  Register                                                   */

        struct
        {
            __IOM uint32_t DPINTE0   : 1;
            __IOM uint32_t DMINTE0   : 1;
            uint32_t                 : 2;
            __IOM uint32_t DOVRCRAE0 : 1;
            __IOM uint32_t DOVRCRBE0 : 1;
            uint32_t                 : 1;
            __IOM uint32_t DVBSE0    : 1;
            uint32_t                 : 8;
            __IM uint32_t DPINT0     : 1;
            __IM uint32_t DMINT0     : 1;
            uint32_t                 : 2;
            __IM uint32_t DOVRCRA0   : 1;
            __IM uint32_t DOVRCRB0   : 1;
            uint32_t                 : 1;
            __IM uint32_t DVBINT0    : 1;
            uint32_t                 : 8;
        } DPUSR1R_FS_b;
    };
} R_USB_FS0_Type;

/* =========================================================================================================================== */
/* ================                                           R_WDT                                           ================ */
/* =========================================================================================================================== */

/**
 * @brief Watchdog Timer (R_WDT)
 */

typedef struct
{
    union
    {
        __IOM uint8_t WDTRR;

        struct
        {
            __IOM uint8_t WDTRR : 8;   /*!< [7..0] WDTRR is an 8-bit register that refreshes the down-counter
                                        *   of the WDT.                                                               */
        } WDTRR_b;
    };
    __IM uint8_t RESERVED;

    union
    {
        __IOM uint16_t WDTCR;

        struct
        {
            __IOM uint16_t TOPS : 2;
            uint16_t            : 2;
            __IOM uint16_t CKS  : 4;
            __IOM uint16_t RPES : 2;
            uint16_t            : 2;
            __IOM uint16_t RPSS : 2;
            uint16_t            : 2;
        } WDTCR_b;
    };

    union
    {
        __IOM uint16_t WDTSR;

        struct
        {
            __IM uint16_t  CNTVAL : 14;
            __IOM uint16_t UNDFF  : 1;
            __IOM uint16_t REFEF  : 1;
        } WDTSR_b;
    };

    union
    {
        __IOM uint8_t WDTRCR;

        struct
        {
            uint8_t               : 7;
            __IOM uint8_t RSTIRQS : 1;
        } WDTRCR_b;
    };
    __IM uint8_t RESERVED1;

    union
    {
        __IOM uint8_t WDTCSTPR;

        struct
        {
            uint8_t              : 7;
            __IOM uint8_t SLCSTP : 1;
        } WDTCSTPR_b;
    };
    __IM uint8_t  RESERVED2;
    __IM uint16_t RESERVED3;
} R_WDT_Type;

/* =========================================================================================================================== */
/* ================                                         R_USB_HS0                                         ================ */
/* =========================================================================================================================== */

/**
 * @brief USB 2.0 High-Speed Module (R_USB_HS0)
 */

typedef struct
{
    union
    {
        __IOM uint16_t SYSCFG;

        struct
        {
            __IOM uint16_t USBE  : 1;
            uint16_t             : 3;
            __IOM uint16_t DPRPU : 1;
            __IOM uint16_t DRPD  : 1;
            __IOM uint16_t DCFM  : 1;
            __IOM uint16_t HSE   : 1;
            __IOM uint16_t CNEN  : 1;
            uint16_t             : 7;
        } SYSCFG_b;
    };

    union
    {
        __IOM uint16_t BUSWAIT;

        struct
        {
            __IOM uint16_t BWAIT : 4;  /*!< [3..0] CPU Bus Access Wait Specification BWAIT waits (BWAIT+2
                                        *   access cycles)                                                            */
            uint16_t : 12;
        } BUSWAIT_b;
    };

    union
    {
        __IM uint16_t SYSSTS0;

        struct
        {
            __IM uint16_t LNST  : 2;
            __IM uint16_t IDMON : 1;
            uint16_t            : 2;
            __IM uint16_t SOFEA : 1;   /*!< [5..5] SOF Active Monitor While Host Controller Function is
                                        *   Selected.                                                                 */
            __IM uint16_t HTACT  : 1;
            uint16_t             : 7;
            __IM uint16_t OVCMON : 2;  /*!< [15..14] External USB1_OVRCURA/USB1_OVRCURB Input Pin MonitorThe
                                        *   OCVMON[1] bit indicates the status of the USBHS_OVRCURA
                                        *   pin. The OCVMON[0] bit indicates the status of the USBHS_OVRCURB
                                        *   pin.                                                                      */
        } SYSSTS0_b;
    };

    union
    {
        __IM uint16_t PLLSTA;

        struct
        {
            __IM uint16_t PLLLOCK : 1;
            uint16_t              : 15;
        } PLLSTA_b;
    };

    union
    {
        __IOM uint16_t DVSTCTR0;

        struct
        {
            __IM uint16_t RHST    : 3;
            uint16_t              : 1;
            __IOM uint16_t UACT   : 1;
            __IOM uint16_t RESUME : 1;
            __IOM uint16_t USBRST : 1;
            __IOM uint16_t RWUPE  : 1;  /*!< [7..7] Remote Wakeup Detection Enable for the Host Controller
                                         *   Operation                                                                 */
            __IOM uint16_t WKUP    : 1;
            __IOM uint16_t VBUSEN  : 1;
            __IOM uint16_t EXICEN  : 1;
            __IOM uint16_t HNPBTOA : 1; /*!< [11..11] Host Negotiation Protocol (HNP) Control Use this bit
                                         *   when switching from device B to device A in OTGmode. If
                                         *   the HNPBTOA bit is 1, the internal function controlremains
                                         *   in the Suspend state until the HNP processing endseven
                                         *   if SYSCFG.DPRPU = 0 or SYSCFG.DCFM = 1 is set.                            */
            uint16_t : 4;
        } DVSTCTR0_b;
    };
    __IM uint16_t RESERVED;

    union
    {
        __IOM uint16_t TESTMODE;

        struct
        {
            __IOM uint16_t UTST : 4;
            uint16_t            : 12;
        } TESTMODE_b;
    };
    __IM uint16_t RESERVED1;
    __IM uint32_t RESERVED2;

    union
    {
        union
        {
            __IOM uint32_t CFIFO;

            struct
            {
                __IOM uint32_t FIFOPORT : 32; /*!< [31..0] FIFO Port.Read receive data from the FIFO buffer or
                                               *   write transmit data to the FIFO buffer by accessing these
                                               *   bits.                                                                     */
            } CFIFO_b;
        };

        struct
        {
            union
            {
                __IOM uint16_t CFIFOL;
                __IOM uint8_t  CFIFOLL;
            };

            union
            {
                __IOM uint16_t CFIFOH;

                struct
                {
                    __IM uint8_t  RESERVED3;
                    __IOM uint8_t CFIFOHH;
                };
            };
        };
    };

    union
    {
        union
        {
            __IOM uint32_t D0FIFO;

            struct
            {
                __IOM uint32_t FIFOPORT : 32; /*!< [31..0] FIFO Port Read receive data from the FIFO buffer or
                                               *   write transmit data to the FIFO buffer by accessing these
                                               *   bits.                                                                     */
            } D0FIFO_b;
        };

        struct
        {
            union
            {
                __IOM uint16_t D0FIFOL;
                __IOM uint8_t  D0FIFOLL;
            };

            union
            {
                __IOM uint16_t D0FIFOH;

                struct
                {
                    __IM uint8_t  RESERVED4;
                    __IOM uint8_t D0FIFOHH;
                };
            };
        };
    };

    union
    {
        union
        {
            __IOM uint32_t D1FIFO;

            struct
            {
                __IOM uint32_t FIFOPORT : 32; /*!< [31..0] FIFO PortRead receive data from the FIFO buffer or write
                                               *   transmit data to the FIFO buffer by accessing these bits.                 */
            } D1FIFO_b;
        };

        struct
        {
            union
            {
                __IOM uint16_t D1FIFOL;
                __IOM uint8_t  D1FIFOLL;
            };

            union
            {
                __IOM uint16_t D1FIFOH;

                struct
                {
                    __IM uint8_t  RESERVED5;
                    __IOM uint8_t D1FIFOHH;
                };
            };
        };
    };

    union
    {
        __IOM uint16_t CFIFOSEL;

        struct
        {
            __IOM uint16_t CURPIPE : 4;
            uint16_t               : 1;
            __IOM uint16_t ISEL    : 1;
            uint16_t               : 2;
            __IOM uint16_t BIGEND  : 1;
            uint16_t               : 1;
            __IOM uint16_t MBW     : 2;
            uint16_t               : 2;
            __OM uint16_t  REW     : 1;
            __IOM uint16_t RCNT    : 1;
        } CFIFOSEL_b;
    };

    union
    {
        __IOM uint16_t CFIFOCTR;

        struct
        {
            __IM uint16_t DTLN : 12;   /*!< [11..0] Receive Data Length.Indicates the length of the receive
                                        *   data.                                                                     */
            uint16_t           : 1;
            __IM uint16_t FRDY : 1;    /*!< [13..13] FIFO Port ReadyIndicates whether the FIFO port can
                                        *   be accessed.                                                              */
            __OM uint16_t  BCLR : 1;
            __IOM uint16_t BVAL : 1;
        } CFIFOCTR_b;
    };
    __IM uint32_t RESERVED6;

    union
    {
        __IOM uint16_t D0FIFOSEL;

        struct
        {
            __IOM uint16_t CURPIPE : 4;
            uint16_t               : 4;
            __IOM uint16_t BIGEND  : 1;
            uint16_t               : 1;
            __IOM uint16_t MBW     : 2;
            __IOM uint16_t DREQE   : 1;
            __IOM uint16_t DCLRM   : 1; /*!< [13..13] Auto Buffer Memory Clear Mode Accessed after Specified
                                         *   Pipe Data is Read                                                         */
            __OM uint16_t  REW  : 1;
            __IOM uint16_t RCNT : 1;
        } D0FIFOSEL_b;
    };

    union
    {
        __IOM uint16_t D0FIFOCTR;

        struct
        {
            __IM uint16_t DTLN : 12;   /*!< [11..0] Receive Data Length.Indicates the length of the receive
                                        *   data.                                                                     */
            uint16_t           : 1;
            __IM uint16_t FRDY : 1;    /*!< [13..13] FIFO Port ReadyIndicates whether the FIFO port can
                                        *   be accessed.                                                              */
            __OM uint16_t  BCLR : 1;
            __IOM uint16_t BVAL : 1;
        } D0FIFOCTR_b;
    };

    union
    {
        __IOM uint16_t D1FIFOSEL;

        struct
        {
            __IOM uint16_t CURPIPE : 4;
            uint16_t               : 4;
            __IOM uint16_t BIGEND  : 1;
            uint16_t               : 1;
            __IOM uint16_t MBW     : 2;
            __IOM uint16_t DREQE   : 1;
            __IOM uint16_t DCLRM   : 1; /*!< [13..13] Auto Buffer Memory Clear Mode Accessed after Specified
                                         *   Pipe Data is Read                                                         */
            __OM uint16_t  REW  : 1;
            __IOM uint16_t RCNT : 1;
        } D1FIFOSEL_b;
    };

    union
    {
        __IOM uint16_t D1FIFOCTR;

        struct
        {
            __IM uint16_t DTLN : 12;   /*!< [11..0] Receive Data Length.Indicates the length of the receive
                                        *   data.                                                                     */
            uint16_t           : 1;
            __IM uint16_t FRDY : 1;    /*!< [13..13] FIFO Port ReadyIndicates whether the FIFO port can
                                        *   be accessed.                                                              */
            __OM uint16_t  BCLR : 1;
            __IOM uint16_t BVAL : 1;
        } D1FIFOCTR_b;
    };

    union
    {
        __IOM uint16_t INTENB0;

        struct
        {
            uint16_t             : 8;
            __IOM uint16_t BRDYE : 1;
            __IOM uint16_t NRDYE : 1;
            __IOM uint16_t BEMPE : 1;
            __IOM uint16_t CTRE  : 1;
            __IOM uint16_t DVSE  : 1;
            __IOM uint16_t SOFE  : 1;
            __IOM uint16_t RSME  : 1;
            __IOM uint16_t VBSE  : 1;
        } INTENB0_b;
    };

    union
    {
        __IOM uint16_t INTENB1;

        struct
        {
            __IOM uint16_t PDDETINTE0 : 1;
            uint16_t                  : 3;
            __IOM uint16_t SACKE      : 1;
            __IOM uint16_t SIGNE      : 1;
            __IOM uint16_t EOFERRE    : 1;
            uint16_t                  : 1;
            __IOM uint16_t LPMENDE    : 1;
            __IOM uint16_t L1RSMENDE  : 1;
            uint16_t                  : 1;
            __IOM uint16_t ATTCHE     : 1;
            __IOM uint16_t DTCHE      : 1;
            uint16_t                  : 1;
            __IOM uint16_t BCHGE      : 1;
            __IOM uint16_t OVRCRE     : 1;
        } INTENB1_b;
    };
    __IM uint16_t RESERVED7;

    union
    {
        __IOM uint16_t BRDYENB;

        struct
        {
            __IOM uint16_t PIPEBRDYE : 10;
            uint16_t                 : 6;
        } BRDYENB_b;
    };

    union
    {
        __IOM uint16_t NRDYENB;

        struct
        {
            __IOM uint16_t PIPENRDYE : 10;
            uint16_t                 : 6;
        } NRDYENB_b;
    };

    union
    {
        __IOM uint16_t BEMPENB;

        struct
        {
            __IOM uint16_t PIPEBEMPE : 10;
            uint16_t                 : 6;
        } BEMPENB_b;
    };

    union
    {
        __IOM uint16_t SOFCFG;

        struct
        {
            uint16_t               : 4;
            __IM uint16_t  EDGESTS : 1;
            __IOM uint16_t INTL    : 1;
            __IOM uint16_t BRDYM   : 1;  /*!< [6..6] PIPEBRDY Interrupt Status Clear Timing.This bit can be
                                          *   set only in the initial setting (before communications).The
                                          *   setting cannot be changed once communication starts.                      */
            uint16_t                : 1;
            __IOM uint16_t TRNENSEL : 1; /*!< [8..8] Transaction-Enabled Time Select.The transfer efficiency
                                          *   can be improved by setting this bit to 1 if no low-speed
                                          *   device is connected directly or via FS-HUB to the USB port.               */
            uint16_t : 7;
        } SOFCFG_b;
    };

    union
    {
        __IOM uint16_t PHYSET;

        struct
        {
            __IOM uint16_t DIRPD    : 1;
            __IOM uint16_t PLLRESET : 1;
            uint16_t                : 1;
            __IOM uint16_t CDPEN    : 1;
            __IOM uint16_t CLKSEL   : 2;
            uint16_t                : 2;
            __IOM uint16_t REPSEL   : 2;
            uint16_t                : 1;
            __IOM uint16_t REPSTART : 1;
            uint16_t                : 3;
            __IOM uint16_t HSEB     : 1;
        } PHYSET_b;
    };

    union
    {
        __IOM uint16_t INTSTS0;

        struct
        {
            __IM uint16_t  CTSQ  : 3;
            __IOM uint16_t VALID : 1;
            __IM uint16_t  DVSQ  : 3;
            __IM uint16_t  VBSTS : 1;
            __IM uint16_t  BRDY  : 1;
            __IM uint16_t  NRDY  : 1;
            __IM uint16_t  BEMP  : 1;
            __IOM uint16_t CTRT  : 1;
            __IOM uint16_t DVST  : 1;
            __IOM uint16_t SOFR  : 1;
            __IOM uint16_t RESM  : 1;
            __IOM uint16_t VBINT : 1;
        } INTSTS0_b;
    };

    union
    {
        __IOM uint16_t INTSTS1;

        struct
        {
            __IOM uint16_t PDDETINT0 : 1;
            uint16_t                 : 3;
            __IOM uint16_t SACK      : 1;
            __IOM uint16_t SIGN      : 1;
            __IOM uint16_t EOFERR    : 1;
            uint16_t                 : 1;
            __IOM uint16_t LPMEND    : 1;
            __IOM uint16_t L1RSMEND  : 1;
            uint16_t                 : 1;
            __IOM uint16_t ATTCH     : 1;
            __IOM uint16_t DTCH      : 1;
            uint16_t                 : 1;
            __IOM uint16_t BCHG      : 1;
            __IOM uint16_t OVRCR     : 1;
        } INTSTS1_b;
    };
    __IM uint16_t RESERVED8;

    union
    {
        __IOM uint16_t BRDYSTS;

        struct
        {
            __IOM uint16_t PIPEBRDY : 10;
            uint16_t                : 6;
        } BRDYSTS_b;
    };

    union
    {
        __IOM uint16_t NRDYSTS;

        struct
        {
            __IOM uint16_t PIPENRDY : 10;
            uint16_t                : 6;
        } NRDYSTS_b;
    };

    union
    {
        __IOM uint16_t BEMPSTS;

        struct
        {
            __IOM uint16_t PIPEBEMP : 10;
            uint16_t                : 6;
        } BEMPSTS_b;
    };

    union
    {
        __IOM uint16_t FRMNUM;

        struct
        {
            __IM uint16_t FRNM  : 11;
            uint16_t            : 3;
            __IOM uint16_t CRCE : 1;
            __IOM uint16_t OVRN : 1;
        } FRMNUM_b;
    };

    union
    {
        __IOM uint16_t UFRMNUM;

        struct
        {
            __IM uint16_t UFRNM  : 3;
            uint16_t             : 12;
            __IOM uint16_t DVCHG : 1;
        } UFRMNUM_b;
    };

    union
    {
        __IOM uint16_t USBADDR;

        struct
        {
            uint16_t                 : 8;
            __IOM uint16_t STSRECOV0 : 3;
            uint16_t                 : 5;
        } USBADDR_b;
    };
    __IM uint16_t RESERVED9;

    union
    {
        __IOM uint16_t USBREQ;

        struct
        {
            __IOM uint16_t BMREQUESTTYPE : 8; /*!< [7..0] USB request bmRequestType value Finction controller selected
                                               *   : read-only Host controller selected : read-write                         */
            __IOM uint16_t BREQUEST : 8;      /*!< [15..8] USB request bRequest value Finction controller selected
                                               *   : read-only Host controller selected : read-write                         */
        } USBREQ_b;
    };

    union
    {
        __IOM uint16_t USBVAL;

        struct
        {
            __IOM uint16_t WVALUE : 16; /*!< [15..0] Value of USB request wValue Finction controller selected
                                         *   : read-only Host controller selected : read-write                         */
        } USBVAL_b;
    };

    union
    {
        __IOM uint16_t USBINDX;

        struct
        {
            __IOM uint16_t WINDEX : 16; /*!< [15..0] Value of USB request wIndex Finction controller selected
                                         *   : read-only Host controller selected : read-write                         */
        } USBINDX_b;
    };

    union
    {
        __IOM uint16_t USBLENG;

        struct
        {
            __IOM uint16_t WLENGTH : 16; /*!< [15..0] Value of USB request wLength Finction controller selected
                                          *   : read-only Host controller selected : read-write                         */
        } USBLENG_b;
    };

    union
    {
        __IOM uint16_t DCPCFG;

        struct
        {
            uint16_t              : 4;
            __IOM uint16_t DIR    : 1;
            uint16_t              : 2;
            __IOM uint16_t SHTNAK : 1;
            __IOM uint16_t CNTMD  : 1;
            uint16_t              : 7;
        } DCPCFG_b;
    };

    union
    {
        __IOM uint16_t DCPMAXP;

        struct
        {
            __IOM uint16_t MXPS : 7;   /*!< [6..0] Maximum Packet SizeThese bits specify the maximum data
                                        *   payload (maximum packet size) for the DCP.                                */
            uint16_t              : 5;
            __IOM uint16_t DEVSEL : 4; /*!< [15..12] Device SelectThese bits specify the address of the
                                        *   destination function device for control transfer when the
                                        *   host controller function is selected.                                     */
        } DCPMAXP_b;
    };

    union
    {
        __IOM uint16_t DCPCTR;

        struct
        {
            __IOM uint16_t PID      : 2;
            __IOM uint16_t CCPL     : 1;
            uint16_t                : 1;
            __IOM uint16_t PINGE    : 1;
            __IM uint16_t  PBUSY    : 1;
            __IM uint16_t  SQMON    : 1;
            __IOM uint16_t SQSET    : 1;
            __IOM uint16_t SQCLR    : 1;
            uint16_t                : 2;
            __IOM uint16_t SUREQCLR : 1;
            __IM uint16_t  CSSTS    : 1;
            __IOM uint16_t CSCLR    : 1;
            __IOM uint16_t SUREQ    : 1;
            __IM uint16_t  BSTS     : 1;
        } DCPCTR_b;
    };
    __IM uint16_t  RESERVED10;
    __IOM uint16_t PIPESEL;
    __IM uint16_t  RESERVED11;

    union
    {
        __IOM uint16_t PIPECFG;

        struct
        {
            __IOM uint16_t EPNUM  : 4;
            __IOM uint16_t DIR    : 1;
            uint16_t              : 2;
            __IOM uint16_t SHTNAK : 1;
            __IOM uint16_t CNTMD  : 1;
            __IOM uint16_t DBLB   : 1;
            __IOM uint16_t BFRE   : 1;
            uint16_t              : 3;
            __IOM uint16_t TYPE   : 2;
        } PIPECFG_b;
    };

    union
    {
        __IOM uint16_t PIPEBUF;

        struct
        {
            __IOM uint16_t BUFNMB : 8;  /*!< [7..0] Buffer NumberThese bits specify the FIFO buffer number
                                         *   of the selected pipe (04h to 87h).                                        */
            uint16_t               : 2;
            __IOM uint16_t BUFSIZE : 5;
            uint16_t               : 1;
        } PIPEBUF_b;
    };

    union
    {
        __IOM uint16_t PIPEMAXP;

        struct
        {
            __IOM uint16_t MXPS : 11;  /*!< [10..0] Maximum Packet SizeThese bits specify the maximum data
                                        *   payload (maximum packet size) for the selected pipe.A size
                                        *   of 1h to 40h bytes can be set for PIPE6 to PIPE9.                         */
            uint16_t              : 1;
            __IOM uint16_t DEVSEL : 4; /*!< [15..12] Device SelectThese bits specify the address of the
                                        *   peripheral device when the host controller function is
                                        *   selected.                                                                 */
        } PIPEMAXP_b;
    };

    union
    {
        __IOM uint16_t PIPEPERI;

        struct
        {
            __IOM uint16_t IITV : 3;   /*!< [2..0] Interval Error Detection IntervalThese bits specify the
                                        *   transfer interval timing for the selected pipe as n-th
                                        *   power of 2 of the frame timing.                                           */
            uint16_t            : 9;
            __IOM uint16_t IFIS : 1;
            uint16_t            : 3;
        } PIPEPERI_b;
    };

    union
    {
        __IOM uint16_t PIPE_CTR[9];

        struct
        {
            __IOM uint16_t PID : 2;    /*!< [1..0] Response PIDThese bits specify the response type for
                                        *   the next transaction of the relevant pipe.                                */
            uint16_t            : 3;
            __IM uint16_t PBUSY : 1;   /*!< [5..5] Pipe BusyThis bit indicates whether the relevant pipe
                                        *   is being used for the USB bus                                             */
            __IM uint16_t SQMON : 1;   /*!< [6..6] Toggle Bit ConfirmationThis bit indicates the expected
                                        *   value of the sequence toggle bit for the next transaction
                                        *   of the relevant pipe                                                      */
            __IOM uint16_t SQSET : 1;  /*!< [7..7] Toggle Bit SetThis bit is set to 1 when the expected
                                        *   value of the sequence toggle bit for the next transaction
                                        *   of the relevant pipe is set for DATA1                                     */
            __IOM uint16_t SQCLR : 1;  /*!< [8..8] Toggle Bit ClearThis bit is set to 1 when the expected
                                        *   value of the sequence toggle bit for the next transaction
                                        *   of the relevant pipe is cleared to DATA0                                  */
            __IOM uint16_t ACLRM : 1;  /*!< [9..9] Auto Buffer Clear ModeThis bit enables or disables auto
                                        *   buffer clear mode for the relevant pipe                                   */
            __IOM uint16_t ATREPM : 1; /*!< [10..10] Auto Response ModeThis bit enables or disables auto
                                        *   response mode for the relevant pipe.                                      */
            uint16_t            : 1;
            __IM uint16_t CSSTS : 1;   /*!< [12..12] CSSTS StatusThis bit indicates the CSPLIT status of
                                        *   Split Transaction of the relevant pipe                                    */
            __IOM uint16_t CSCLR : 1;  /*!< [13..13] CSPLIT Status ClearSet this bit to 1 when clearing
                                        *   the CSSTS bit of the relevant pipe                                        */
            __IM uint16_t INBUFM : 1;  /*!< [14..14] Transmit Buffer MonitorThis bit indicates the FIFO
                                        *   buffer status for the relevant pipe in the transmitting
                                        *   direction.                                                                */
            __IM uint16_t BSTS : 1;    /*!< [15..15] Buffer StatusThis bit indicates the FIFO buffer status
                                        *   for the relevant pipe.                                                    */
        } PIPE_CTR_b[9];
    };
    __IM uint16_t                RESERVED12;
    __IM uint32_t                RESERVED13[3];
    __IOM R_USB_HS0_PIPE_TR_Type PIPE_TR[5];
    __IM uint32_t                RESERVED14[11];

    union
    {
        __IOM uint16_t DEVADD[10];

        struct
        {
            uint16_t               : 6;
            __IOM uint16_t USBSPD  : 2;
            __IOM uint16_t HUBPORT : 3;
            __IOM uint16_t UPPHUB  : 4;
            uint16_t               : 1;
        } DEVADD_b[10];
    };
    __IM uint32_t RESERVED15[7];

    union
    {
        __IOM uint16_t LPCTRL;

        struct
        {
            uint16_t             : 7;
            __IOM uint16_t HWUPM : 1;
            uint16_t             : 8;
        } LPCTRL_b;
    };

    union
    {
        __IOM uint16_t LPSTS;

        struct
        {
            uint16_t                : 14;
            __IOM uint16_t SUSPENDM : 1;
            uint16_t                : 1;
        } LPSTS_b;
    };
    __IM uint32_t RESERVED16[15];

    union
    {
        __IOM uint16_t BCCTRL;

        struct
        {
            __IOM uint16_t IDPSRCE  : 1;
            __IOM uint16_t IDMSINKE : 1;
            __IOM uint16_t VDPSRCE  : 1;
            __IOM uint16_t IDPSINKE : 1;
            __IOM uint16_t VDMSRCE  : 1;
            __IOM uint16_t DCPMODE  : 1;
            uint16_t                : 2;
            __IM uint16_t CHGDETSTS : 1;
            __IM uint16_t PDDETSTS  : 1;
            uint16_t                : 6;
        } BCCTRL_b;
    };
    __IM uint16_t RESERVED17;

    union
    {
        __IOM uint16_t PL1CTRL1;

        struct
        {
            __IOM uint16_t L1RESPEN : 1;
            __IOM uint16_t L1RESPMD : 2;
            __IOM uint16_t L1NEGOMD : 1; /*!< [3..3] L1 Response Negotiation Control.NOTE: This bit is valid
                                          *   only when the L1RESPMD[1:0] value is 2'b11.                               */
            __IM uint16_t DVSQ : 4;      /*!< [7..4] DVSQ Extension.DVSQ[3] is Mirror of DVSQ[2:0] in INTSTS0.Indicates
                                          *   the L1 state together with the device state bits DVSQ[2:0].               */
            __IOM uint16_t HIRDTHR : 4;  /*!< [11..8] L1 Response Negotiation Threshold ValueHIRD threshold
                                          *   value used for L1NEGOMD.The format is the same as the HIRD
                                          *   field in HL1CTRL.                                                         */
            uint16_t               : 2;
            __IOM uint16_t L1EXTMD : 1;
            uint16_t               : 1;
        } PL1CTRL1_b;
    };

    union
    {
        __IOM uint16_t PL1CTRL2;

        struct
        {
            uint16_t               : 8;
            __IOM uint16_t HIRDMON : 4;
            __IOM uint16_t RWEMON  : 1;
            uint16_t               : 3;
        } PL1CTRL2_b;
    };

    union
    {
        __IOM uint16_t HL1CTRL1;

        struct
        {
            __IOM uint16_t L1REQ    : 1;
            __IM uint16_t  L1STATUS : 2;
            uint16_t                : 13;
        } HL1CTRL1_b;
    };

    union
    {
        __IOM uint16_t HL1CTRL2;

        struct
        {
            __IOM uint16_t L1ADDR : 4; /*!< [3..0] LPM Token DeviceAddressThese bits specify the value to
                                        *   be set in the ADDR field of LPM token.                                    */
            uint16_t             : 4;
            __IOM uint16_t HIRD  : 4;
            __IOM uint16_t L1RWE : 1;  /*!< [12..12] LPM Token L1 RemoteWake EnableThese bits specify the
                                        *   value to be set in the RWE field of LPM token.                            */
            uint16_t            : 2;
            __IOM uint16_t BESL : 1;   /*!< [15..15] BESL & Alternate HIRDThis bit selects the K-State drive
                                        *   period at the time of L1 Resume.                                          */
        } HL1CTRL2_b;
    };
    __IM uint32_t RESERVED18;

    union
    {
        __IOM uint16_t PHYTRIM1;

        struct
        {
            __IOM uint16_t DRISE     : 2;
            __IOM uint16_t DFALL     : 2;
            uint16_t                 : 3;
            __IOM uint16_t PCOMPENB  : 1;
            __IOM uint16_t HSIUP     : 4;
            __IOM uint16_t IMPOFFSET : 3; /*!< [14..12] terminating resistance offset value setting.Offset
                                           *   value for adjusting the terminating resistance.                           */
            uint16_t : 1;
        } PHYTRIM1_b;
    };

    union
    {
        __IOM uint16_t PHYTRIM2;

        struct
        {
            __IOM uint16_t SQU      : 4;
            uint16_t                : 3;
            __IOM uint16_t HSRXENMO : 1;
            __IOM uint16_t PDR      : 2;
            uint16_t                : 2;
            __IOM uint16_t DIS      : 3;
            uint16_t                : 1;
        } PHYTRIM2_b;
    };
    __IM uint32_t RESERVED19[3];

    union
    {
        __IM uint32_t DPUSR0R;         /*!< (@ 0x00000160) Deep Standby USB Transceiver Control/Pin Monitor
                                        *                  Register                                                   */

        struct
        {
            uint32_t              : 20;
            __IM uint32_t DOVCAHM : 1;  /*!< [20..20] OVRCURA InputIndicates OVRCURA input signal on the
                                         *   HS side of USB port.                                                      */
            __IM uint32_t DOVCBHM : 1;  /*!< [21..21] OVRCURB InputIndicates OVRCURB input signal on the
                                         *   HS side of USB port.                                                      */
            uint32_t               : 1;
            __IM uint32_t DVBSTSHM : 1; /*!< [23..23] VBUS InputIndicates VBUS input signal on the HS side
                                         *   of USB port.                                                              */
            uint32_t : 8;
        } DPUSR0R_b;
    };

    union
    {
        __IOM uint32_t DPUSR1R;

        struct
        {
            uint32_t                : 4;
            __IOM uint32_t DOVCAHE  : 1;
            __IOM uint32_t DOVCBHE  : 1;
            uint32_t                : 1;
            __IOM uint32_t DVBSTSHE : 1;
            uint32_t                : 12;
            __IM uint32_t DOVCAH    : 1;
            __IM uint32_t DOVCBH    : 1;
            uint32_t                : 1;
            __IM uint32_t DVBSTSH   : 1;
            uint32_t                : 8;
        } DPUSR1R_b;
    };

    union
    {
        __IOM uint16_t DPUSR2R;

        struct
        {
            __IM uint16_t DPINT : 1;
            __IM uint16_t DMINT : 1;
            uint16_t            : 2;
            __IM uint16_t DPVAL : 1;   /*!< [4..4] DP InputIndicates DP input signal on the HS side of USB
                                        *   port.                                                                     */
            __IM uint16_t DMVAL : 1;   /*!< [5..5] DM InputIndicates DM input signal on the HS side of USB
                                        *   port.                                                                     */
            uint16_t              : 2;
            __IOM uint16_t DPINTE : 1;
            __IOM uint16_t DMINTE : 1;
            uint16_t              : 6;
        } DPUSR2R_b;
    };

    union
    {
        __IOM uint16_t DPUSRCR;

        struct
        {
            __IOM uint16_t FIXPHY   : 1;
            __IOM uint16_t FIXPHYPD : 1;
            uint16_t                : 14;
        } DPUSRCR_b;
    };
} R_USB_HS0_Type;

/* =========================================================================================================================== */
/* ================                                          R_AGTX0                                          ================ */
/* =========================================================================================================================== */

/**
 * @brief Asynchronous General Purpose Timer (R_AGTX0)
 */

typedef struct
{
    union
    {
        __IOM R_AGTX0_AGT32_Type AGT32;
        __IOM R_AGTX0_AGT16_Type AGT16;
    };
} R_AGTX0_Type;

/** @} */ /* End of group Device_Peripheral_peripherals */

/* =========================================================================================================================== */
/* ================                          Device Specific Peripheral Address Map                           ================ */
/* =========================================================================================================================== */

/** @addtogroup Device_Peripheral_peripheralAddr
 * @{
 */

 #define R_ACMPHS0_BASE        0x40085000UL
 #define R_ACMPHS1_BASE        0x40085100UL
 #define R_ACMPHS2_BASE        0x40085200UL
 #define R_ACMPHS3_BASE        0x40085300UL
 #define R_ACMPHS4_BASE        0x40085400UL
 #define R_ACMPHS5_BASE        0x40085500UL
 #define R_ADC0_BASE           0x4005C000UL
 #define R_ADC1_BASE           0x4005C200UL
 #define R_BUS_BASE            0x40003000UL
 #define R_CAC_BASE            0x40044600UL
 #define R_CAN0_BASE           0x40050000UL
 #define R_CAN1_BASE           0x40051000UL
 #define R_CRC_BASE            0x40074000UL
 #define R_CTSU_BASE           0x40081000UL
 #define R_DAC_BASE            0x4005E000UL
 #define R_DEBUG_BASE          0x4001B000UL
 #define R_DMA_BASE            0x40005200UL
 #define R_DMAC0_BASE          0x40005000UL
 #define R_DMAC1_BASE          0x40005040UL
 #define R_DMAC2_BASE          0x40005080UL
 #define R_DMAC3_BASE          0x400050C0UL
 #define R_DMAC4_BASE          0x40005100UL
 #define R_DMAC5_BASE          0x40005140UL
 #define R_DMAC6_BASE          0x40005180UL
 #define R_DMAC7_BASE          0x400051C0UL
 #define R_DOC_BASE            0x40054100UL
 #define R_DTC_BASE            0x40005400UL
 #define R_ELC_BASE            0x40041000UL
 #define R_FACI_HP_CMD_BASE    0x407E0000UL
 #define R_FACI_HP_BASE        0x407FE000UL
 #define R_FCACHE_BASE         0x4001C000UL
 #define R_GPT0_BASE           0x40078000UL
 #define R_GPT1_BASE           0x40078100UL
 #define R_GPT2_BASE           0x40078200UL
 #define R_GPT3_BASE           0x40078300UL
 #define R_GPT4_BASE           0x40078400UL
 #define R_GPT5_BASE           0x40078500UL
 #define R_GPT6_BASE           0x40078600UL
 #define R_GPT7_BASE           0x40078700UL
 #define R_GPT8_BASE           0x40078800UL
 #define R_GPT9_BASE           0x40078900UL
 #define R_GPT10_BASE          0x40078A00UL
 #define R_GPT11_BASE          0x40078B00UL
 #define R_GPT12_BASE          0x40078C00UL
 #define R_GPT13_BASE          0x40078D00UL
 #define R_GPT_ODC_BASE        0x4007B000UL
 #define R_GPT_OPS_BASE        0x40078FF0UL
 #define R_GPT_POEG0_BASE      0x40042000UL
 #define R_GPT_POEG1_BASE      0x40042100UL
 #define R_GPT_POEG2_BASE      0x40042200UL
 #define R_GPT_POEG3_BASE      0x40042300UL
 #define R_ICU_BASE            0x40006000UL
 #define R_IIC0_BASE           0x40053000UL
 #define R_IIC1_BASE           0x40053100UL
 #define R_IIC2_BASE           0x40053200UL
 #define R_IRDA_BASE           0x40070F00UL
 #define R_IWDT_BASE           0x40044400UL
 #define R_KINT_BASE           0x40080000UL
 #define R_MMF_BASE            0x40001000UL
 #define R_MPU_MMPU_BASE       0x40000000UL
 #define R_MPU_SMPU_BASE       0x40000C00UL
 #define R_MPU_SPMON_BASE      0x40000D00UL
 #define R_MSTP_BASE           (0x40047000UL - 4UL)
 #define R_PORT0_BASE          0x40040000UL
 #define R_PORT1_BASE          0x40040020UL
 #define R_PORT2_BASE          0x40040040UL
 #define R_PORT3_BASE          0x40040060UL
 #define R_PORT4_BASE          0x40040080UL
 #define R_PORT5_BASE          0x400400A0UL
 #define R_PORT6_BASE          0x400400C0UL
 #define R_PORT7_BASE          0x400400E0UL
 #define R_PORT8_BASE          0x40040100UL
 #define R_PORT9_BASE          0x40040120UL
 #define R_PORT10_BASE         0x40040140UL
 #define R_PORT11_BASE         0x40040160UL
 #define R_PORT12_BASE         0x40040180UL
 #define R_PORT13_BASE         0x400401A0UL
 #define R_PORT14_BASE         0x400401C0UL
 #define R_PFS_BASE            0x40040800UL
 #define R_PMISC_BASE          0x40040D00UL
 #define R_QSPI_BASE           0x64000000UL
 #define R_RTC_BASE            0x40044000UL
 #define R_SCI0_BASE           0x40070000UL
 #define R_SCI1_BASE           0x40070020UL
 #define R_SCI2_BASE           0x40070040UL
 #define R_SCI3_BASE           0x40070060UL
 #define R_SCI4_BASE           0x40070080UL
 #define R_SCI5_BASE           0x400700A0UL
 #define R_SCI6_BASE           0x400700C0UL
 #define R_SCI7_BASE           0x400700E0UL
 #define R_SCI8_BASE           0x40070100UL
 #define R_SCI9_BASE           0x40070120UL
 #define R_SDHI0_BASE          0x40062000UL
 #define R_SDHI1_BASE          0x40062400UL
 #define R_SPI0_BASE           0x40072000UL
 #define R_SPI1_BASE           0x40072100UL
 #define R_SRAM_BASE           0x40002000UL
 #define R_SRC_BASE            0x40048000UL
 #define R_SSI0_BASE           0x4004E000UL
 #define R_SSI1_BASE           0x4004E100UL
 #define R_SYSTEM_BASE         0x4001E000UL
 #define R_TSN_CAL_BASE        0x407FB17CUL
 #define R_TSN_CTRL_BASE       0x4005D000UL
 #define R_USB_FS0_BASE        0x40090000UL
 #define R_WDT_BASE            0x40044200UL
 #define R_USB_HS0_BASE        0x40060000UL
 #define R_AGTX0_BASE          0x40084000UL
 #define R_AGTX1_BASE          0x40084100UL
 #define R_AGTX2_BASE          0x40084200UL
 #define R_AGTX3_BASE          0x40084300UL
 #define R_AGTX4_BASE          0x40084400UL
 #define R_AGTX5_BASE          0x40084500UL
 #define R_AGTX6_BASE          0x40084600UL
 #define R_AGTX7_BASE          0x40084700UL
 #define R_AGTX8_BASE          0x40084800UL
 #define R_AGTX9_BASE          0x40084900UL

/** @} */ /* End of group Device_Peripheral_peripheralAddr */

/* =========================================================================================================================== */
/* ================                                  Peripheral declaration                                   ================ */
/* =========================================================================================================================== */

/** @addtogroup Device_Peripheral_declaration
 * @{
 */

 #define R_ACMPHS0        ((R_ACMPHS0_Type *) R_ACMPHS0_BASE)
 #define R_ACMPHS1        ((R_ACMPHS0_Type *) R_ACMPHS1_BASE)
 #define R_ACMPHS2        ((R_ACMPHS0_Type *) R_ACMPHS2_BASE)
 #define R_ACMPHS3        ((R_ACMPHS0_Type *) R_ACMPHS3_BASE)
 #define R_ACMPHS4        ((R_ACMPHS0_Type *) R_ACMPHS4_BASE)
 #define R_ACMPHS5        ((R_ACMPHS0_Type *) R_ACMPHS5_BASE)
 #define R_ADC0           ((R_ADC0_Type *) R_ADC0_BASE)
 #define R_ADC1           ((R_ADC0_Type *) R_ADC1_BASE)
 #define R_BUS            ((R_BUS_Type *) R_BUS_BASE)
 #define R_CAC            ((R_CAC_Type *) R_CAC_BASE)
 #define R_CAN0           ((R_CAN0_Type *) R_CAN0_BASE)
 #define R_CAN1           ((R_CAN0_Type *) R_CAN1_BASE)
 #define R_CRC            ((R_CRC_Type *) R_CRC_BASE)
 #define R_CTSU           ((R_CTSU_Type *) R_CTSU_BASE)
 #define R_DAC            ((R_DAC_Type *) R_DAC_BASE)
 #define R_DEBUG          ((R_DEBUG_Type *) R_DEBUG_BASE)
 #define R_DMA            ((R_DMA_Type *) R_DMA_BASE)
 #define R_DMAC0          ((R_DMAC0_Type *) R_DMAC0_BASE)
 #define R_DMAC1          ((R_DMAC0_Type *) R_DMAC1_BASE)
 #define R_DMAC2          ((R_DMAC0_Type *) R_DMAC2_BASE)
 #define R_DMAC3          ((R_DMAC0_Type *) R_DMAC3_BASE)
 #define R_DMAC4          ((R_DMAC0_Type *) R_DMAC4_BASE)
 #define R_DMAC5          ((R_DMAC0_Type *) R_DMAC5_BASE)
 #define R_DMAC6          ((R_DMAC0_Type *) R_DMAC6_BASE)
 #define R_DMAC7          ((R_DMAC0_Type *) R_DMAC7_BASE)
 #define R_DOC            ((R_DOC_Type *) R_DOC_BASE)
 #define R_DTC            ((R_DTC_Type *) R_DTC_BASE)
 #define R_ELC            ((R_ELC_Type *) R_ELC_BASE)
 #define R_FACI_HP_CMD    ((R_FACI_HP_CMD_Type *) R_FACI_HP_CMD_BASE)
 #define R_FACI_HP        ((R_FACI_HP_Type *) R_FACI_HP_BASE)
 #define R_FCACHE         ((R_FCACHE_Type *) R_FCACHE_BASE)
 #define R_GPT0           ((R_GPT0_Type *) R_GPT0_BASE)
 #define R_GPT1           ((R_GPT0_Type *) R_GPT1_BASE)
 #define R_GPT2           ((R_GPT0_Type *) R_GPT2_BASE)
 #define R_GPT3           ((R_GPT0_Type *) R_GPT3_BASE)
 #define R_GPT4           ((R_GPT0_Type *) R_GPT4_BASE)
 #define R_GPT5           ((R_GPT0_Type *) R_GPT5_BASE)
 #define R_GPT6           ((R_GPT0_Type *) R_GPT6_BASE)
 #define R_GPT7           ((R_GPT0_Type *) R_GPT7_BASE)
 #define R_GPT8           ((R_GPT0_Type *) R_GPT8_BASE)
 #define R_GPT9           ((R_GPT0_Type *) R_GPT9_BASE)
 #define R_GPT10          ((R_GPT0_Type *) R_GPT10_BASE)
 #define R_GPT11          ((R_GPT0_Type *) R_GPT11_BASE)
 #define R_GPT12          ((R_GPT0_Type *) R_GPT12_BASE)
 #define R_GPT13          ((R_GPT0_Type *) R_GPT13_BASE)
 #define R_GPT_ODC        ((R_GPT_ODC_Type *) R_GPT_ODC_BASE)
 #define R_GPT_OPS        ((R_GPT_OPS_Type *) R_GPT_OPS_BASE)
 #define R_GPT_POEG0      ((R_GPT_POEG0_Type *) R_GPT_POEG0_BASE)
 #define R_GPT_POEG1      ((R_GPT_POEG0_Type *) R_GPT_POEG1_BASE)
 #define R_GPT_POEG2      ((R_GPT_POEG0_Type *) R_GPT_POEG2_BASE)
 #define R_GPT_POEG3      ((R_GPT_POEG0_Type *) R_GPT_POEG3_BASE)
 #define R_ICU            ((R_ICU_Type *) R_ICU_BASE)
 #define R_IIC0           ((R_IIC0_Type *) R_IIC0_BASE)
 #define R_IIC1           ((R_IIC0_Type *) R_IIC1_BASE)
 #define R_IIC2           ((R_IIC0_Type *) R_IIC2_BASE)
 #define R_IRDA           ((R_IRDA_Type *) R_IRDA_BASE)
 #define R_IWDT           ((R_IWDT_Type *) R_IWDT_BASE)
 #define R_KINT           ((R_KINT_Type *) R_KINT_BASE)
 #define R_MMF            ((R_MMF_Type *) R_MMF_BASE)
 #define R_MPU_MMPU       ((R_MPU_MMPU_Type *) R_MPU_MMPU_BASE)
 #define R_MPU_SMPU       ((R_MPU_SMPU_Type *) R_MPU_SMPU_BASE)
 #define R_MPU_SPMON      ((R_MPU_SPMON_Type *) R_MPU_SPMON_BASE)
 #define R_MSTP           ((R_MSTP_Type *) R_MSTP_BASE)
 #define R_PORT0          ((R_PORT0_Type *) R_PORT0_BASE)
 #define R_PORT1          ((R_PORT0_Type *) R_PORT1_BASE)
 #define R_PORT2          ((R_PORT0_Type *) R_PORT2_BASE)
 #define R_PORT3          ((R_PORT0_Type *) R_PORT3_BASE)
 #define R_PORT4          ((R_PORT0_Type *) R_PORT4_BASE)
 #define R_PORT5          ((R_PORT0_Type *) R_PORT5_BASE)
 #define R_PORT6          ((R_PORT0_Type *) R_PORT6_BASE)
 #define R_PORT7          ((R_PORT0_Type *) R_PORT7_BASE)
 #define R_PORT8          ((R_PORT0_Type *) R_PORT8_BASE)
 #define R_PORT9          ((R_PORT0_Type *) R_PORT9_BASE)
 #define R_PORT10         ((R_PORT0_Type *) R_PORT10_BASE)
 #define R_PORT11         ((R_PORT0_Type *) R_PORT11_BASE)
 #define R_PORT12         ((R_PORT0_Type *) R_PORT12_BASE)
 #define R_PORT13         ((R_PORT0_Type *) R_PORT13_BASE)
 #define R_PORT14         ((R_PORT0_Type *) R_PORT14_BASE)
 #define R_PFS            ((R_PFS_Type *) R_PFS_BASE)
 #define R_PMISC          ((R_PMISC_Type *) R_PMISC_BASE)
 #define R_QSPI           ((R_QSPI_Type *) R_QSPI_BASE)
 #define R_RTC            ((R_RTC_Type *) R_RTC_BASE)
 #define R_SCI0           ((R_SCI0_Type *) R_SCI0_BASE)
 #define R_SCI1           ((R_SCI0_Type *) R_SCI1_BASE)
 #define R_SCI2           ((R_SCI0_Type *) R_SCI2_BASE)
 #define R_SCI3           ((R_SCI0_Type *) R_SCI3_BASE)
 #define R_SCI4           ((R_SCI0_Type *) R_SCI4_BASE)
 #define R_SCI5           ((R_SCI0_Type *) R_SCI5_BASE)
 #define R_SCI6           ((R_SCI0_Type *) R_SCI6_BASE)
 #define R_SCI7           ((R_SCI0_Type *) R_SCI7_BASE)
 #define R_SCI8           ((R_SCI0_Type *) R_SCI8_BASE)
 #define R_SCI9           ((R_SCI0_Type *) R_SCI9_BASE)
 #define R_SDHI0          ((R_SDHI0_Type *) R_SDHI0_BASE)
 #define R_SDHI1          ((R_SDHI0_Type *) R_SDHI1_BASE)
 #define R_SPI0           ((R_SPI0_Type *) R_SPI0_BASE)
 #define R_SPI1           ((R_SPI0_Type *) R_SPI1_BASE)
 #define R_SRAM           ((R_SRAM_Type *) R_SRAM_BASE)
 #define R_SRC            ((R_SRC_Type *) R_SRC_BASE)
 #define R_SSI0           ((R_SSI0_Type *) R_SSI0_BASE)
 #define R_SSI1           ((R_SSI0_Type *) R_SSI1_BASE)
 #define R_SYSTEM         ((R_SYSTEM_Type *) R_SYSTEM_BASE)
 #define R_TSN_CAL        ((R_TSN_CAL_Type *) R_TSN_CAL_BASE)
 #define R_TSN_CTRL       ((R_TSN_CTRL_Type *) R_TSN_CTRL_BASE)
 #define R_USB_FS0        ((R_USB_FS0_Type *) R_USB_FS0_BASE)
 #define R_WDT            ((R_WDT_Type *) R_WDT_BASE)
 #define R_USB_HS0        ((R_USB_HS0_Type *) R_USB_HS0_BASE)
 #define R_AGT0           ((R_AGTX0_Type *) R_AGTX0_BASE)
 #define R_AGT1           ((R_AGTX0_Type *) R_AGTX1_BASE)
 #define R_AGT2           ((R_AGTX0_Type *) R_AGTX2_BASE)
 #define R_AGT3           ((R_AGTX0_Type *) R_AGTX3_BASE)
 #define R_AGT4           ((R_AGTX0_Type *) R_AGTX4_BASE)
 #define R_AGT5           ((R_AGTX0_Type *) R_AGTX5_BASE)
 #define R_AGT6           ((R_AGTX0_Type *) R_AGTX6_BASE)
 #define R_AGT7           ((R_AGTX0_Type *) R_AGTX7_BASE)
 #define R_AGT8           ((R_AGTX0_Type *) R_AGTX8_BASE)
 #define R_AGT9           ((R_AGTX0_Type *) R_AGTX9_BASE)

/** @} */ /* End of group Device_Peripheral_declaration */

/* =========================================  End of section using anonymous unions  ========================================= */
 #if defined(__CC_ARM)
  #pragma pop
 #elif defined(__ICCARM__)

/* leave anonymous unions enabled */
 #elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic pop
 #elif defined(__GNUC__)

/* anonymous unions are enabled by default */
 #elif defined(__TMS470__)

/* anonymous unions are enabled by default */
 #elif defined(__TASKING__)
  #pragma warning restore
 #elif defined(__CSMC__)

/* anonymous unions are enabled by default */
 #endif

/* =========================================================================================================================== */
/* ================                                 Pos/Mask Cluster Section                                  ================ */
/* =========================================================================================================================== */

/** @addtogroup PosMask_clusters
 * @{
 */

/* =========================================================================================================================== */
/* ================                                            CSa                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  MOD  ========================================================== */
 #define R_BUS_CSa_MOD_PRMOD_Pos        (15UL)
 #define R_BUS_CSa_MOD_PRMOD_Msk        (0x8000UL)
 #define R_BUS_CSa_MOD_PWENB_Pos        (9UL)
 #define R_BUS_CSa_MOD_PWENB_Msk        (0x200UL)
 #define R_BUS_CSa_MOD_PRENB_Pos        (8UL)
 #define R_BUS_CSa_MOD_PRENB_Msk        (0x100UL)
 #define R_BUS_CSa_MOD_EWENB_Pos        (3UL)
 #define R_BUS_CSa_MOD_EWENB_Msk        (0x8UL)
 #define R_BUS_CSa_MOD_WRMOD_Pos        (0UL)
 #define R_BUS_CSa_MOD_WRMOD_Msk        (0x1UL)
/* =========================================================  WCR1  ========================================================== */
 #define R_BUS_CSa_WCR1_CSRWAIT_Pos     (24UL)
 #define R_BUS_CSa_WCR1_CSRWAIT_Msk     (0x1f000000UL)
 #define R_BUS_CSa_WCR1_CSWWAIT_Pos     (16UL)
 #define R_BUS_CSa_WCR1_CSWWAIT_Msk     (0x1f0000UL)
 #define R_BUS_CSa_WCR1_CSPRWAIT_Pos    (8UL)
 #define R_BUS_CSa_WCR1_CSPRWAIT_Msk    (0x700UL)
 #define R_BUS_CSa_WCR1_CSPWWAIT_Pos    (0UL)
 #define R_BUS_CSa_WCR1_CSPWWAIT_Msk    (0x7UL)
/* =========================================================  WCR2  ========================================================== */
 #define R_BUS_CSa_WCR2_CSON_Pos        (28UL)
 #define R_BUS_CSa_WCR2_CSON_Msk        (0x70000000UL)
 #define R_BUS_CSa_WCR2_WDON_Pos        (24UL)
 #define R_BUS_CSa_WCR2_WDON_Msk        (0x7000000UL)
 #define R_BUS_CSa_WCR2_WRON_Pos        (20UL)
 #define R_BUS_CSa_WCR2_WRON_Msk        (0x700000UL)
 #define R_BUS_CSa_WCR2_RDON_Pos        (16UL)
 #define R_BUS_CSa_WCR2_RDON_Msk        (0x70000UL)
 #define R_BUS_CSa_WCR2_AWAIT_Pos       (12UL)
 #define R_BUS_CSa_WCR2_AWAIT_Msk       (0x3000UL)
 #define R_BUS_CSa_WCR2_WDOFF_Pos       (8UL)
 #define R_BUS_CSa_WCR2_WDOFF_Msk       (0x700UL)
 #define R_BUS_CSa_WCR2_CSWOFF_Pos      (4UL)
 #define R_BUS_CSa_WCR2_CSWOFF_Msk      (0x70UL)
 #define R_BUS_CSa_WCR2_CSROFF_Pos      (0UL)
 #define R_BUS_CSa_WCR2_CSROFF_Msk      (0x7UL)

/* =========================================================================================================================== */
/* ================                                            CSb                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR  =========================================================== */
 #define R_BUS_CSb_CR_MPXEN_Pos    (12UL)
 #define R_BUS_CSb_CR_MPXEN_Msk    (0x1000UL)
 #define R_BUS_CSb_CR_EMODE_Pos    (8UL)
 #define R_BUS_CSb_CR_EMODE_Msk    (0x100UL)
 #define R_BUS_CSb_CR_BSIZE_Pos    (4UL)
 #define R_BUS_CSb_CR_BSIZE_Msk    (0x30UL)
 #define R_BUS_CSb_CR_EXENB_Pos    (0UL)
 #define R_BUS_CSb_CR_EXENB_Msk    (0x1UL)
/* ==========================================================  REC  ========================================================== */
 #define R_BUS_CSb_REC_WRCV_Pos    (8UL)
 #define R_BUS_CSb_REC_WRCV_Msk    (0xf00UL)
 #define R_BUS_CSb_REC_RRCV_Pos    (0UL)
 #define R_BUS_CSb_REC_RRCV_Msk    (0xfUL)

/* =========================================================================================================================== */
/* ================                                           SDRAM                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  SDCCR  ========================================================= */
 #define R_BUS_SDRAM_SDCCR_BSIZE_Pos     (4UL)
 #define R_BUS_SDRAM_SDCCR_BSIZE_Msk     (0x30UL)
 #define R_BUS_SDRAM_SDCCR_EXENB_Pos     (0UL)
 #define R_BUS_SDRAM_SDCCR_EXENB_Msk     (0x1UL)
/* ========================================================  SDCMOD  ========================================================= */
 #define R_BUS_SDRAM_SDCMOD_EMODE_Pos    (0UL)
 #define R_BUS_SDRAM_SDCMOD_EMODE_Msk    (0x1UL)
/* ========================================================  SDAMOD  ========================================================= */
 #define R_BUS_SDRAM_SDAMOD_BE_Pos       (0UL)
 #define R_BUS_SDRAM_SDAMOD_BE_Msk       (0x1UL)
/* ========================================================  SDSELF  ========================================================= */
 #define R_BUS_SDRAM_SDSELF_SFEN_Pos     (0UL)
 #define R_BUS_SDRAM_SDSELF_SFEN_Msk     (0x1UL)
/* ========================================================  SDRFCR  ========================================================= */
 #define R_BUS_SDRAM_SDRFCR_REFW_Pos     (12UL)
 #define R_BUS_SDRAM_SDRFCR_REFW_Msk     (0xf000UL)
 #define R_BUS_SDRAM_SDRFCR_RFC_Pos      (0UL)
 #define R_BUS_SDRAM_SDRFCR_RFC_Msk      (0xfffUL)
/* ========================================================  SDRFEN  ========================================================= */
 #define R_BUS_SDRAM_SDRFEN_RFEN_Pos     (0UL)
 #define R_BUS_SDRAM_SDRFEN_RFEN_Msk     (0x1UL)
/* =========================================================  SDICR  ========================================================= */
 #define R_BUS_SDRAM_SDICR_INIRQ_Pos     (0UL)
 #define R_BUS_SDRAM_SDICR_INIRQ_Msk     (0x1UL)
/* =========================================================  SDIR  ========================================================== */
 #define R_BUS_SDRAM_SDIR_PRC_Pos        (8UL)
 #define R_BUS_SDRAM_SDIR_PRC_Msk        (0x700UL)
 #define R_BUS_SDRAM_SDIR_ARFC_Pos       (4UL)
 #define R_BUS_SDRAM_SDIR_ARFC_Msk       (0xf0UL)
 #define R_BUS_SDRAM_SDIR_ARFI_Pos       (0UL)
 #define R_BUS_SDRAM_SDIR_ARFI_Msk       (0xfUL)
/* =========================================================  SDADR  ========================================================= */
 #define R_BUS_SDRAM_SDADR_MXC_Pos       (0UL)
 #define R_BUS_SDRAM_SDADR_MXC_Msk       (0x3UL)
/* =========================================================  SDTR  ========================================================== */
 #define R_BUS_SDRAM_SDTR_RAS_Pos        (16UL)
 #define R_BUS_SDRAM_SDTR_RAS_Msk        (0x70000UL)
 #define R_BUS_SDRAM_SDTR_RCD_Pos        (12UL)
 #define R_BUS_SDRAM_SDTR_RCD_Msk        (0x3000UL)
 #define R_BUS_SDRAM_SDTR_RP_Pos         (9UL)
 #define R_BUS_SDRAM_SDTR_RP_Msk         (0xe00UL)
 #define R_BUS_SDRAM_SDTR_WR_Pos         (8UL)
 #define R_BUS_SDRAM_SDTR_WR_Msk         (0x100UL)
 #define R_BUS_SDRAM_SDTR_CL_Pos         (0UL)
 #define R_BUS_SDRAM_SDTR_CL_Msk         (0x7UL)
/* =========================================================  SDMOD  ========================================================= */
 #define R_BUS_SDRAM_SDMOD_MR_Pos        (0UL)
 #define R_BUS_SDRAM_SDMOD_MR_Msk        (0x7fffUL)
/* =========================================================  SDSR  ========================================================== */
 #define R_BUS_SDRAM_SDSR_SRFST_Pos      (4UL)
 #define R_BUS_SDRAM_SDSR_SRFST_Msk      (0x10UL)
 #define R_BUS_SDRAM_SDSR_INIST_Pos      (3UL)
 #define R_BUS_SDRAM_SDSR_INIST_Msk      (0x8UL)
 #define R_BUS_SDRAM_SDSR_MRSST_Pos      (0UL)
 #define R_BUS_SDRAM_SDSR_MRSST_Msk      (0x1UL)

/* =========================================================================================================================== */
/* ================                                          BUSERRa                                          ================ */
/* =========================================================================================================================== */

/* ==========================================================  ADD  ========================================================== */
 #define R_BUS_BUSERRa_ADD_BERAD_Pos       (0UL)
 #define R_BUS_BUSERRa_ADD_BERAD_Msk       (0xffffffffUL)
/* =========================================================  STAT  ========================================================== */
 #define R_BUS_BUSERRa_STAT_ERRSTAT_Pos    (7UL)
 #define R_BUS_BUSERRa_STAT_ERRSTAT_Msk    (0x80UL)
 #define R_BUS_BUSERRa_STAT_ACCSTAT_Pos    (0UL)
 #define R_BUS_BUSERRa_STAT_ACCSTAT_Msk    (0x1UL)
/* ==========================================================  RW  =========================================================== */
 #define R_BUS_BUSERRa_RW_RWSTAT_Pos       (0UL)
 #define R_BUS_BUSERRa_RW_RWSTAT_Msk       (0x1UL)

/* =========================================================================================================================== */
/* ================                                          BTZFERR                                          ================ */
/* =========================================================================================================================== */

/* ==========================================================  ADD  ========================================================== */
 #define R_BUS_BTZFERR_ADD_BTZFERAD_Pos    (0UL)
 #define R_BUS_BTZFERR_ADD_BTZFERAD_Msk    (0xffffffffUL)
/* ==========================================================  RW  =========================================================== */
 #define R_BUS_BTZFERR_RW_TRWSTAT_Pos      (0UL)
 #define R_BUS_BTZFERR_RW_TRWSTAT_Msk      (0x1UL)

/* =========================================================================================================================== */
/* ================                                          BUSERRb                                          ================ */
/* =========================================================================================================================== */

/* =========================================================  STAT  ========================================================== */
 #define R_BUS_BUSERRb_STAT_MSERRSTAT_Pos    (5UL)
 #define R_BUS_BUSERRb_STAT_MSERRSTAT_Msk    (0x20UL)
 #define R_BUS_BUSERRb_STAT_ILERRSTAT_Pos    (4UL)
 #define R_BUS_BUSERRb_STAT_ILERRSTAT_Msk    (0x10UL)
 #define R_BUS_BUSERRb_STAT_MMERRSTAT_Pos    (3UL)
 #define R_BUS_BUSERRb_STAT_MMERRSTAT_Msk    (0x8UL)
 #define R_BUS_BUSERRb_STAT_STERRSTAT_Pos    (1UL)
 #define R_BUS_BUSERRb_STAT_STERRSTAT_Msk    (0x2UL)
 #define R_BUS_BUSERRb_STAT_SLERRSTAT_Pos    (0UL)
 #define R_BUS_BUSERRb_STAT_SLERRSTAT_Msk    (0x1UL)
/* ==========================================================  CLR  ========================================================== */
 #define R_BUS_BUSERRb_CLR_MSERRCLR_Pos      (5UL)
 #define R_BUS_BUSERRb_CLR_MSERRCLR_Msk      (0x20UL)
 #define R_BUS_BUSERRb_CLR_ILERRCLR_Pos      (4UL)
 #define R_BUS_BUSERRb_CLR_ILERRCLR_Msk      (0x10UL)
 #define R_BUS_BUSERRb_CLR_MMERRCLR_Pos      (3UL)
 #define R_BUS_BUSERRb_CLR_MMERRCLR_Msk      (0x8UL)
 #define R_BUS_BUSERRb_CLR_STERRCLR_Pos      (1UL)
 #define R_BUS_BUSERRb_CLR_STERRCLR_Msk      (0x2UL)
 #define R_BUS_BUSERRb_CLR_SLERRCLR_Pos      (0UL)
 #define R_BUS_BUSERRb_CLR_SLERRCLR_Msk      (0x1UL)

/* =========================================================================================================================== */
/* ================                                        DMACDTCERR                                         ================ */
/* =========================================================================================================================== */

/* =========================================================  STAT  ========================================================== */
 #define R_BUS_DMACDTCERR_STAT_MTERRSTAT_Pos    (0UL)
 #define R_BUS_DMACDTCERR_STAT_MTERRSTAT_Msk    (0x1UL)
/* ==========================================================  CLR  ========================================================== */
 #define R_BUS_DMACDTCERR_CLR_MTERRCLR_Pos      (0UL)
 #define R_BUS_DMACDTCERR_CLR_MTERRCLR_Msk      (0x1UL)

/* =========================================================================================================================== */
/* ================                                         BUSSABT0                                          ================ */
/* =========================================================================================================================== */

/* =========================================================  FLBI  ========================================================== */
 #define R_BUS_BUSSABT0_FLBI_ARBS_Pos         (0UL)
 #define R_BUS_BUSSABT0_FLBI_ARBS_Msk         (0x1UL)
/* ========================================================  MRE0BI  ========================================================= */
 #define R_BUS_BUSSABT0_MRE0BI_ARBS_Pos       (0UL)
 #define R_BUS_BUSSABT0_MRE0BI_ARBS_Msk       (0x1UL)
/* =========================================================  S0BI  ========================================================== */
 #define R_BUS_BUSSABT0_S0BI_ARBS_Pos         (0UL)
 #define R_BUS_BUSSABT0_S0BI_ARBS_Msk         (0x1UL)
/* =========================================================  S1BI  ========================================================== */
 #define R_BUS_BUSSABT0_S1BI_ARBS_Pos         (0UL)
 #define R_BUS_BUSSABT0_S1BI_ARBS_Msk         (0x1UL)
/* =========================================================  S2BI  ========================================================== */
 #define R_BUS_BUSSABT0_S2BI_ARBS_Pos         (0UL)
 #define R_BUS_BUSSABT0_S2BI_ARBS_Msk         (0x1UL)
/* =========================================================  S3BI  ========================================================== */
 #define R_BUS_BUSSABT0_S3BI_ARBS_Pos         (0UL)
 #define R_BUS_BUSSABT0_S3BI_ARBS_Msk         (0x1UL)
/* ========================================================  STBYSBI  ======================================================== */
 #define R_BUS_BUSSABT0_STBYSBI_ARBS_Pos      (0UL)
 #define R_BUS_BUSSABT0_STBYSBI_ARBS_Msk      (0x1UL)
/* =========================================================  ECBI  ========================================================== */
 #define R_BUS_BUSSABT0_ECBI_ARBS_Pos         (0UL)
 #define R_BUS_BUSSABT0_ECBI_ARBS_Msk         (0x1UL)
/* =========================================================  EOBI  ========================================================== */
 #define R_BUS_BUSSABT0_EOBI_ARBS_Pos         (0UL)
 #define R_BUS_BUSSABT0_EOBI_ARBS_Msk         (0x1UL)
/* ========================================================  SPI0BI  ========================================================= */
 #define R_BUS_BUSSABT0_SPI0BI_ARBS_Pos       (0UL)
 #define R_BUS_BUSSABT0_SPI0BI_ARBS_Msk       (0x1UL)
/* ========================================================  SPI1BI  ========================================================= */
 #define R_BUS_BUSSABT0_SPI1BI_ARBS_Pos       (0UL)
 #define R_BUS_BUSSABT0_SPI1BI_ARBS_Msk       (0x1UL)
/* =========================================================  PBBI  ========================================================== */
 #define R_BUS_BUSSABT0_PBBI_ARBS_Pos         (0UL)
 #define R_BUS_BUSSABT0_PBBI_ARBS_Msk         (0x1UL)
/* =========================================================  PABI  ========================================================== */
 #define R_BUS_BUSSABT0_PABI_ARBS_Pos         (0UL)
 #define R_BUS_BUSSABT0_PABI_ARBS_Msk         (0x1UL)
/* =========================================================  PIBI  ========================================================== */
 #define R_BUS_BUSSABT0_PIBI_ARBS_Pos         (0UL)
 #define R_BUS_BUSSABT0_PIBI_ARBS_Msk         (0x1UL)
/* =========================================================  PSBI  ========================================================== */
 #define R_BUS_BUSSABT0_PSBI_ARBS_Pos         (0UL)
 #define R_BUS_BUSSABT0_PSBI_ARBS_Msk         (0x1UL)
/* =======================================================  CPU0SAHBI  ======================================================= */
 #define R_BUS_BUSSABT0_CPU0SAHBI_ARBS_Pos    (0UL)
 #define R_BUS_BUSSABT0_CPU0SAHBI_ARBS_Msk    (0x1UL)
/* =======================================================  CPU1TCMBI  ======================================================= */
 #define R_BUS_BUSSABT0_CPU1TCMBI_ARBS_Pos    (0UL)
 #define R_BUS_BUSSABT0_CPU1TCMBI_ARBS_Msk    (0x1UL)

/* =========================================================================================================================== */
/* ================                                         BUSSABT1                                          ================ */
/* =========================================================================================================================== */

/* =========================================================  FHBI  ========================================================== */
 #define R_BUS_BUSSABT1_FHBI_ARBS_Pos      (0UL)
 #define R_BUS_BUSSABT1_FHBI_ARBS_Msk      (0x3UL)
/* ========================================================  MRC0BI  ========================================================= */
 #define R_BUS_BUSSABT1_MRC0BI_ARBS_Pos    (0UL)
 #define R_BUS_BUSSABT1_MRC0BI_ARBS_Msk    (0x3UL)
/* =========================================================  S0BI  ========================================================== */
 #define R_BUS_BUSSABT1_S0BI_ARBS_Pos      (0UL)
 #define R_BUS_BUSSABT1_S0BI_ARBS_Msk      (0x3UL)
/* =========================================================  S1BI  ========================================================== */
 #define R_BUS_BUSSABT1_S1BI_ARBS_Pos      (0UL)
 #define R_BUS_BUSSABT1_S1BI_ARBS_Msk      (0x3UL)

/* =========================================================================================================================== */
/* ================                                          BMSAERR                                          ================ */
/* =========================================================================================================================== */

/* ==========================================================  ADD  ========================================================== */
 #define R_BUS_BMSAERR_ADD_MSERAD_Pos      (0UL)
 #define R_BUS_BMSAERR_ADD_MSERAD_Msk      (0xffffffffUL)
/* ==========================================================  RW  =========================================================== */
 #define R_BUS_BMSAERR_RW_MSARWSTAT_Pos    (0UL)
 #define R_BUS_BMSAERR_RW_MSARWSTAT_Msk    (0x1UL)

/* =========================================================================================================================== */
/* ================                                            OAD                                            ================ */
/* =========================================================================================================================== */

/* ========================================================  BUSOAD  ========================================================= */
 #define R_BUS_OAD_BUSOAD_BWERROAD_Pos     (2UL)
 #define R_BUS_OAD_BUSOAD_BWERROAD_Msk     (0x4UL)
 #define R_BUS_OAD_BUSOAD_SLERROAD_Pos     (1UL)
 #define R_BUS_OAD_BUSOAD_SLERROAD_Msk     (0x2UL)
 #define R_BUS_OAD_BUSOAD_ILERROAD_Pos     (0UL)
 #define R_BUS_OAD_BUSOAD_ILERROAD_Msk     (0x1UL)
/* =======================================================  BUSOADPT  ======================================================== */
 #define R_BUS_OAD_BUSOADPT_KEY_Pos        (8UL)
 #define R_BUS_OAD_BUSOADPT_KEY_Msk        (0xff00UL)
 #define R_BUS_OAD_BUSOADPT_PROTECT_Pos    (0UL)
 #define R_BUS_OAD_BUSOADPT_PROTECT_Msk    (0x1UL)
/* ========================================================  MSAOAD  ========================================================= */
 #define R_BUS_OAD_MSAOAD_KEY_Pos          (8UL)
 #define R_BUS_OAD_MSAOAD_KEY_Msk          (0xff00UL)
 #define R_BUS_OAD_MSAOAD_OAD_Pos          (0UL)
 #define R_BUS_OAD_MSAOAD_OAD_Msk          (0x1UL)
/* =========================================================  MSAPT  ========================================================= */
 #define R_BUS_OAD_MSAPT_KEY_Pos           (8UL)
 #define R_BUS_OAD_MSAPT_KEY_Msk           (0xff00UL)
 #define R_BUS_OAD_MSAPT_PROTECT_Pos       (0UL)
 #define R_BUS_OAD_MSAPT_PROTECT_Msk       (0x1UL)

/* =========================================================================================================================== */
/* ================                                          MBWERR                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  STAT  ========================================================== */
 #define R_BUS_MBWERR_STAT_BWERR_Pos    (0UL)
 #define R_BUS_MBWERR_STAT_BWERR_Msk    (0x1UL)
/* ==========================================================  CLR  ========================================================== */
 #define R_BUS_MBWERR_CLR_BWERR_Pos     (0UL)
 #define R_BUS_MBWERR_CLR_BWERR_Msk     (0x1UL)

/* =========================================================================================================================== */
/* ================                                           BUSM                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CNT  ========================================================== */
 #define R_BUS_BUSM_CNT_IERES_Pos    (15UL)
 #define R_BUS_BUSM_CNT_IERES_Msk    (0x8000UL)

/* =========================================================================================================================== */
/* ================                                           BUSS                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CNT  ========================================================== */
 #define R_BUS_BUSS_CNT_ARBMET_Pos    (4UL)
 #define R_BUS_BUSS_CNT_ARBMET_Msk    (0x30UL)
 #define R_BUS_BUSS_CNT_ARBS_Pos      (0UL)
 #define R_BUS_BUSS_CNT_ARBS_Msk      (0x3UL)

/* =========================================================================================================================== */
/* ================                                            MB                                             ================ */
/* =========================================================================================================================== */

/* ==========================================================  ID  =========================================================== */
 #define R_CAN0_MB_ID_IDE_Pos    (31UL)
 #define R_CAN0_MB_ID_IDE_Msk    (0x80000000UL)
 #define R_CAN0_MB_ID_RTR_Pos    (30UL)
 #define R_CAN0_MB_ID_RTR_Msk    (0x40000000UL)
 #define R_CAN0_MB_ID_SID_Pos    (18UL)
 #define R_CAN0_MB_ID_SID_Msk    (0x1ffc0000UL)
 #define R_CAN0_MB_ID_EID_Pos    (0UL)
 #define R_CAN0_MB_ID_EID_Msk    (0x3ffffUL)
/* ==========================================================  DL  =========================================================== */
 #define R_CAN0_MB_DL_DLC_Pos    (0UL)
 #define R_CAN0_MB_DL_DLC_Msk    (0xfUL)
/* ===========================================================  D  =========================================================== */
 #define R_CAN0_MB_D_DATA_Pos    (0UL)
 #define R_CAN0_MB_D_DATA_Msk    (0xffUL)
/* ==========================================================  TS  =========================================================== */
 #define R_CAN0_MB_TS_TSH_Pos    (8UL)
 #define R_CAN0_MB_TS_TSH_Msk    (0xff00UL)
 #define R_CAN0_MB_TS_TSL_Pos    (0UL)
 #define R_CAN0_MB_TS_TSL_Msk    (0xffUL)

/* =========================================================================================================================== */
/* ================                                          ELSEGR                                           ================ */
/* =========================================================================================================================== */

/* ==========================================================  BY  =========================================================== */
 #define R_ELC_ELSEGR_BY_WI_Pos     (7UL)
 #define R_ELC_ELSEGR_BY_WI_Msk     (0x80UL)
 #define R_ELC_ELSEGR_BY_WE_Pos     (6UL)
 #define R_ELC_ELSEGR_BY_WE_Msk     (0x40UL)
 #define R_ELC_ELSEGR_BY_SEG_Pos    (0UL)
 #define R_ELC_ELSEGR_BY_SEG_Msk    (0x1UL)

/* =========================================================================================================================== */
/* ================                                           ELSR                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  HA  =========================================================== */
 #define R_ELC_ELSR_HA_ELS_Pos    (0UL)
 #define R_ELC_ELSR_HA_ELS_Msk    (0x1ffUL)

/* =========================================================================================================================== */
/* ================                                          GTDLYR                                           ================ */
/* =========================================================================================================================== */

/* ===========================================================  A  =========================================================== */
 #define R_GPT_ODC_GTDLYR_A_DLY_Pos    (0UL)
 #define R_GPT_ODC_GTDLYR_A_DLY_Msk    (0x1fUL)
/* ===========================================================  B  =========================================================== */
 #define R_GPT_ODC_GTDLYR_B_DLY_Pos    (0UL)
 #define R_GPT_ODC_GTDLYR_B_DLY_Msk    (0x1fUL)

/* =========================================================================================================================== */
/* ================                                            SAR                                            ================ */
/* =========================================================================================================================== */

/* ===========================================================  L  =========================================================== */
 #define R_IIC0_SAR_L_SVA_Pos     (0UL)
 #define R_IIC0_SAR_L_SVA_Msk     (0xffUL)
/* ===========================================================  U  =========================================================== */
 #define R_IIC0_SAR_U_SVA9_Pos    (2UL)
 #define R_IIC0_SAR_U_SVA9_Msk    (0x4UL)
 #define R_IIC0_SAR_U_SVA8_Pos    (1UL)
 #define R_IIC0_SAR_U_SVA8_Msk    (0x2UL)
 #define R_IIC0_SAR_U_FS_Pos      (0UL)
 #define R_IIC0_SAR_U_FS_Msk      (0x1UL)

/* =========================================================================================================================== */
/* ================                                          REGION                                           ================ */
/* =========================================================================================================================== */

/* ==========================================================  AC  =========================================================== */
 #define R_MPU_MMPU_MMPU_REGION_AC_WP_Pos        (2UL)
 #define R_MPU_MMPU_MMPU_REGION_AC_WP_Msk        (0x4UL)
 #define R_MPU_MMPU_MMPU_REGION_AC_RP_Pos        (1UL)
 #define R_MPU_MMPU_MMPU_REGION_AC_RP_Msk        (0x2UL)
 #define R_MPU_MMPU_MMPU_REGION_AC_ENABLE_Pos    (0UL)
 #define R_MPU_MMPU_MMPU_REGION_AC_ENABLE_Msk    (0x1UL)
/* ===========================================================  S  =========================================================== */
 #define R_MPU_MMPU_MMPU_REGION_S_MMPUS_Pos      (0UL)
 #define R_MPU_MMPU_MMPU_REGION_S_MMPUS_Msk      (0xffffffffUL)
/* ===========================================================  E  =========================================================== */
 #define R_MPU_MMPU_MMPU_REGION_E_MMPUE_Pos      (0UL)
 #define R_MPU_MMPU_MMPU_REGION_E_MMPUE_Msk      (0xffffffffUL)

/* =========================================================================================================================== */
/* ================                                           MMPU                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CTL  ========================================================== */
 #define R_MPU_MMPU_MMPU_CTL_KEY_Pos       (8UL)
 #define R_MPU_MMPU_MMPU_CTL_KEY_Msk       (0xff00UL)
 #define R_MPU_MMPU_MMPU_CTL_OAD_Pos       (1UL)
 #define R_MPU_MMPU_MMPU_CTL_OAD_Msk       (0x2UL)
 #define R_MPU_MMPU_MMPU_CTL_ENABLE_Pos    (0UL)
 #define R_MPU_MMPU_MMPU_CTL_ENABLE_Msk    (0x1UL)
/* ==========================================================  PT  =========================================================== */
 #define R_MPU_MMPU_MMPU_PT_KEY_Pos        (8UL)
 #define R_MPU_MMPU_MMPU_PT_KEY_Msk        (0xff00UL)
 #define R_MPU_MMPU_MMPU_PT_PROTECT_Pos    (0UL)
 #define R_MPU_MMPU_MMPU_PT_PROTECT_Msk    (0x1UL)

/* =========================================================================================================================== */
/* ================                                           SMPU                                            ================ */
/* =========================================================================================================================== */

/* ===========================================================  R  =========================================================== */
 #define R_MPU_SMPU_SMPU_R_WPSRAMHS_Pos    (15UL)
 #define R_MPU_SMPU_SMPU_R_WPSRAMHS_Msk    (0x8000UL)
 #define R_MPU_SMPU_SMPU_R_RPSRAMHS_Pos    (14UL)
 #define R_MPU_SMPU_SMPU_R_RPSRAMHS_Msk    (0x4000UL)
 #define R_MPU_SMPU_SMPU_R_WPFLI_Pos       (13UL)
 #define R_MPU_SMPU_SMPU_R_WPFLI_Msk       (0x2000UL)
 #define R_MPU_SMPU_SMPU_R_RPFLI_Pos       (12UL)
 #define R_MPU_SMPU_SMPU_R_RPFLI_Msk       (0x1000UL)
 #define R_MPU_SMPU_SMPU_R_WPGRPC_Pos      (7UL)
 #define R_MPU_SMPU_SMPU_R_WPGRPC_Msk      (0x80UL)
 #define R_MPU_SMPU_SMPU_R_RPGRPC_Pos      (6UL)
 #define R_MPU_SMPU_SMPU_R_RPGRPC_Msk      (0x40UL)
 #define R_MPU_SMPU_SMPU_R_WPGRPB_Pos      (5UL)
 #define R_MPU_SMPU_SMPU_R_WPGRPB_Msk      (0x20UL)
 #define R_MPU_SMPU_SMPU_R_RPGRPB_Pos      (4UL)
 #define R_MPU_SMPU_SMPU_R_RPGRPB_Msk      (0x10UL)
 #define R_MPU_SMPU_SMPU_R_WPGRPA_Pos      (3UL)
 #define R_MPU_SMPU_SMPU_R_WPGRPA_Msk      (0x8UL)
 #define R_MPU_SMPU_SMPU_R_RPGRPA_Pos      (2UL)
 #define R_MPU_SMPU_SMPU_R_RPGRPA_Msk      (0x4UL)

/* =========================================================================================================================== */
/* ================                                            SP                                             ================ */
/* =========================================================================================================================== */

/* ==========================================================  OAD  ========================================================== */
 #define R_MPU_SPMON_SP_OAD_KEY_Pos        (8UL)
 #define R_MPU_SPMON_SP_OAD_KEY_Msk        (0xff00UL)
 #define R_MPU_SPMON_SP_OAD_OAD_Pos        (0UL)
 #define R_MPU_SPMON_SP_OAD_OAD_Msk        (0x1UL)
/* ==========================================================  CTL  ========================================================== */
 #define R_MPU_SPMON_SP_CTL_ERROR_Pos      (8UL)
 #define R_MPU_SPMON_SP_CTL_ERROR_Msk      (0x100UL)
 #define R_MPU_SPMON_SP_CTL_ENABLE_Pos     (0UL)
 #define R_MPU_SPMON_SP_CTL_ENABLE_Msk     (0x1UL)
/* ==========================================================  PT  =========================================================== */
 #define R_MPU_SPMON_SP_PT_KEY_Pos         (8UL)
 #define R_MPU_SPMON_SP_PT_KEY_Msk         (0xff00UL)
 #define R_MPU_SPMON_SP_PT_PROTECT_Pos     (0UL)
 #define R_MPU_SPMON_SP_PT_PROTECT_Msk     (0x1UL)
/* ==========================================================  SA  =========================================================== */
 #define R_MPU_SPMON_SP_SA_MSPMPUSA_Pos    (0UL)
 #define R_MPU_SPMON_SP_SA_MSPMPUSA_Msk    (0xffffffffUL)
/* ==========================================================  EA  =========================================================== */
 #define R_MPU_SPMON_SP_EA_MSPMPUEA_Pos    (0UL)
 #define R_MPU_SPMON_SP_EA_MSPMPUEA_Msk    (0xffffffffUL)

/* =========================================================================================================================== */
/* ================                                            PIN                                            ================ */
/* =========================================================================================================================== */

/* =======================================================  PmnPFS_BY  ======================================================= */
 #define R_PFS_PORT_PIN_PmnPFS_BY_NCODR_Pos    (6UL)
 #define R_PFS_PORT_PIN_PmnPFS_BY_NCODR_Msk    (0x40UL)
 #define R_PFS_PORT_PIN_PmnPFS_BY_PIM_Pos      (5UL)
 #define R_PFS_PORT_PIN_PmnPFS_BY_PIM_Msk      (0x20UL)
 #define R_PFS_PORT_PIN_PmnPFS_BY_PCR_Pos      (4UL)
 #define R_PFS_PORT_PIN_PmnPFS_BY_PCR_Msk      (0x10UL)
 #define R_PFS_PORT_PIN_PmnPFS_BY_PDR_Pos      (2UL)
 #define R_PFS_PORT_PIN_PmnPFS_BY_PDR_Msk      (0x4UL)
 #define R_PFS_PORT_PIN_PmnPFS_BY_PIDR_Pos     (1UL)
 #define R_PFS_PORT_PIN_PmnPFS_BY_PIDR_Msk     (0x2UL)
 #define R_PFS_PORT_PIN_PmnPFS_BY_PODR_Pos     (0UL)
 #define R_PFS_PORT_PIN_PmnPFS_BY_PODR_Msk     (0x1UL)
/* =======================================================  PmnPFS_HA  ======================================================= */
 #define R_PFS_PORT_PIN_PmnPFS_HA_NCODR_Pos    (6UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_NCODR_Msk    (0x40UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_PIM_Pos      (5UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_PIM_Msk      (0x20UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_PCR_Pos      (4UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_PCR_Msk      (0x10UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_PDR_Pos      (2UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_PDR_Msk      (0x4UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_PIDR_Pos     (1UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_PIDR_Msk     (0x2UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_PODR_Pos     (0UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_PODR_Msk     (0x1UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_ASEL_Pos     (15UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_ASEL_Msk     (0x8000UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_ISEL_Pos     (14UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_ISEL_Msk     (0x4000UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_EOFR_Pos     (12UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_EOFR_Msk     (0x3000UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_DSCR_Pos     (10UL)
 #define R_PFS_PORT_PIN_PmnPFS_HA_DSCR_Msk     (0xc00UL)
/* ========================================================  PmnPFS  ========================================================= */
 #define R_PFS_PORT_PIN_PmnPFS_NCODR_Pos       (6UL)
 #define R_PFS_PORT_PIN_PmnPFS_NCODR_Msk       (0x40UL)
 #define R_PFS_PORT_PIN_PmnPFS_PIM_Pos         (5UL)
 #define R_PFS_PORT_PIN_PmnPFS_PIM_Msk         (0x20UL)
 #define R_PFS_PORT_PIN_PmnPFS_PCR_Pos         (4UL)
 #define R_PFS_PORT_PIN_PmnPFS_PCR_Msk         (0x10UL)
 #define R_PFS_PORT_PIN_PmnPFS_PDR_Pos         (2UL)
 #define R_PFS_PORT_PIN_PmnPFS_PDR_Msk         (0x4UL)
 #define R_PFS_PORT_PIN_PmnPFS_PIDR_Pos        (1UL)
 #define R_PFS_PORT_PIN_PmnPFS_PIDR_Msk        (0x2UL)
 #define R_PFS_PORT_PIN_PmnPFS_PODR_Pos        (0UL)
 #define R_PFS_PORT_PIN_PmnPFS_PODR_Msk        (0x1UL)
 #define R_PFS_PORT_PIN_PmnPFS_ASEL_Pos        (15UL)
 #define R_PFS_PORT_PIN_PmnPFS_ASEL_Msk        (0x8000UL)
 #define R_PFS_PORT_PIN_PmnPFS_ISEL_Pos        (14UL)
 #define R_PFS_PORT_PIN_PmnPFS_ISEL_Msk        (0x4000UL)
 #define R_PFS_PORT_PIN_PmnPFS_EOFR_Pos        (12UL)
 #define R_PFS_PORT_PIN_PmnPFS_EOFR_Msk        (0x3000UL)
 #define R_PFS_PORT_PIN_PmnPFS_DSCR_Pos        (10UL)
 #define R_PFS_PORT_PIN_PmnPFS_DSCR_Msk        (0xc00UL)
 #define R_PFS_PORT_PIN_PmnPFS_PSEL_Pos        (24UL)
 #define R_PFS_PORT_PIN_PmnPFS_PSEL_Msk        (0x1f000000UL)
 #define R_PFS_PORT_PIN_PmnPFS_PMR_Pos         (16UL)
 #define R_PFS_PORT_PIN_PmnPFS_PMR_Msk         (0x10000UL)

/* =========================================================================================================================== */
/* ================                                           PORT                                            ================ */
/* =========================================================================================================================== */

/* =========================================================================================================================== */
/* ================                                           VLSEL                                           ================ */
/* =========================================================================================================================== */

/* ========================================================  VL1SEL  ========================================================= */
 #define R_PFS_VLSEL_VL1SEL_SELVL_Pos    (0UL)
 #define R_PFS_VLSEL_VL1SEL_SELVL_Msk    (0x1UL)

/* =========================================================================================================================== */
/* ================                                           PMSAR                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  PMSAR  ========================================================= */

/* =========================================================================================================================== */
/* ================                                           RTCCR                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  RTCCR  ========================================================= */
 #define R_RTC_RTCCR_RTCCR_TCEN_Pos    (7UL)
 #define R_RTC_RTCCR_RTCCR_TCEN_Msk    (0x80UL)
 #define R_RTC_RTCCR_RTCCR_TCNF_Pos    (4UL)
 #define R_RTC_RTCCR_RTCCR_TCNF_Msk    (0x30UL)
 #define R_RTC_RTCCR_RTCCR_TCST_Pos    (2UL)
 #define R_RTC_RTCCR_RTCCR_TCST_Msk    (0x4UL)
 #define R_RTC_RTCCR_RTCCR_TCCT_Pos    (0UL)
 #define R_RTC_RTCCR_RTCCR_TCCT_Msk    (0x3UL)

/* =========================================================================================================================== */
/* ================                                            CP                                             ================ */
/* =========================================================================================================================== */

/* =========================================================  RSEC  ========================================================== */
 #define R_RTC_CP_RSEC_SEC10_Pos       (4UL)
 #define R_RTC_CP_RSEC_SEC10_Msk       (0x70UL)
 #define R_RTC_CP_RSEC_SEC1_Pos        (0UL)
 #define R_RTC_CP_RSEC_SEC1_Msk        (0xfUL)
/* =========================================================  BCNT0  ========================================================= */
 #define R_RTC_CP_BCNT0_BCNT0CP_Pos    (0UL)
 #define R_RTC_CP_BCNT0_BCNT0CP_Msk    (0xffUL)
/* =========================================================  RMIN  ========================================================== */
 #define R_RTC_CP_RMIN_MIN10_Pos       (4UL)
 #define R_RTC_CP_RMIN_MIN10_Msk       (0x70UL)
 #define R_RTC_CP_RMIN_MIN1_Pos        (0UL)
 #define R_RTC_CP_RMIN_MIN1_Msk        (0xfUL)
/* =========================================================  BCNT1  ========================================================= */
 #define R_RTC_CP_BCNT1_BCNT1CP_Pos    (0UL)
 #define R_RTC_CP_BCNT1_BCNT1CP_Msk    (0xffUL)
/* ==========================================================  RHR  ========================================================== */
 #define R_RTC_CP_RHR_PM_Pos           (6UL)
 #define R_RTC_CP_RHR_PM_Msk           (0x40UL)
 #define R_RTC_CP_RHR_HR10_Pos         (4UL)
 #define R_RTC_CP_RHR_HR10_Msk         (0x30UL)
 #define R_RTC_CP_RHR_HR1_Pos          (0UL)
 #define R_RTC_CP_RHR_HR1_Msk          (0xfUL)
/* =========================================================  BCNT2  ========================================================= */
 #define R_RTC_CP_BCNT2_BCNT2CP_Pos    (0UL)
 #define R_RTC_CP_BCNT2_BCNT2CP_Msk    (0xffUL)
/* =========================================================  RDAY  ========================================================== */
 #define R_RTC_CP_RDAY_DATE10_Pos      (4UL)
 #define R_RTC_CP_RDAY_DATE10_Msk      (0x30UL)
 #define R_RTC_CP_RDAY_DATE1_Pos       (0UL)
 #define R_RTC_CP_RDAY_DATE1_Msk       (0xfUL)
/* =========================================================  BCNT3  ========================================================= */
 #define R_RTC_CP_BCNT3_BCNT3CP_Pos    (0UL)
 #define R_RTC_CP_BCNT3_BCNT3CP_Msk    (0xffUL)
/* =========================================================  RMON  ========================================================== */
 #define R_RTC_CP_RMON_MON10_Pos       (4UL)
 #define R_RTC_CP_RMON_MON10_Msk       (0x10UL)
 #define R_RTC_CP_RMON_MON1_Pos        (0UL)
 #define R_RTC_CP_RMON_MON1_Msk        (0xfUL)

/* =========================================================================================================================== */
/* ================                                          PIPE_TR                                          ================ */
/* =========================================================================================================================== */

/* ===========================================================  E  =========================================================== */
 #define R_USB_FS0_PIPE_TR_E_TRENB_Pos     (9UL)
 #define R_USB_FS0_PIPE_TR_E_TRENB_Msk     (0x200UL)
 #define R_USB_FS0_PIPE_TR_E_TRCLR_Pos     (8UL)
 #define R_USB_FS0_PIPE_TR_E_TRCLR_Msk     (0x100UL)
/* ===========================================================  N  =========================================================== */
 #define R_USB_FS0_PIPE_TR_N_TRNCNT_Pos    (0UL)
 #define R_USB_FS0_PIPE_TR_N_TRNCNT_Msk    (0xffffUL)

/* =========================================================================================================================== */
/* ================                                          PIPE_TR                                          ================ */
/* =========================================================================================================================== */

/* ===========================================================  E  =========================================================== */
 #define R_USB_HS0_PIPE_TR_E_TRENB_Pos     (9UL)
 #define R_USB_HS0_PIPE_TR_E_TRENB_Msk     (0x200UL)
 #define R_USB_HS0_PIPE_TR_E_TRCLR_Pos     (8UL)
 #define R_USB_HS0_PIPE_TR_E_TRCLR_Msk     (0x100UL)
/* ===========================================================  N  =========================================================== */
 #define R_USB_HS0_PIPE_TR_N_TRNCNT_Pos    (0UL)
 #define R_USB_HS0_PIPE_TR_N_TRNCNT_Msk    (0xffffUL)

/* =========================================================================================================================== */
/* ================                                           CTRL                                            ================ */
/* =========================================================================================================================== */

/* =========================================================  AGTCR  ========================================================= */
 #define R_AGTX0_AGT16_CTRL_AGTCR_TCMBF_Pos          (7UL)
 #define R_AGTX0_AGT16_CTRL_AGTCR_TCMBF_Msk          (0x80UL)
 #define R_AGTX0_AGT16_CTRL_AGTCR_TCMAF_Pos          (6UL)
 #define R_AGTX0_AGT16_CTRL_AGTCR_TCMAF_Msk          (0x40UL)
 #define R_AGTX0_AGT16_CTRL_AGTCR_TUNDF_Pos          (5UL)
 #define R_AGTX0_AGT16_CTRL_AGTCR_TUNDF_Msk          (0x20UL)
 #define R_AGTX0_AGT16_CTRL_AGTCR_TEDGF_Pos          (4UL)
 #define R_AGTX0_AGT16_CTRL_AGTCR_TEDGF_Msk          (0x10UL)
 #define R_AGTX0_AGT16_CTRL_AGTCR_TSTOP_Pos          (2UL)
 #define R_AGTX0_AGT16_CTRL_AGTCR_TSTOP_Msk          (0x4UL)
 #define R_AGTX0_AGT16_CTRL_AGTCR_TCSTF_Pos          (1UL)
 #define R_AGTX0_AGT16_CTRL_AGTCR_TCSTF_Msk          (0x2UL)
 #define R_AGTX0_AGT16_CTRL_AGTCR_TSTART_Pos         (0UL)
 #define R_AGTX0_AGT16_CTRL_AGTCR_TSTART_Msk         (0x1UL)
/* ========================================================  AGTMR1  ========================================================= */
 #define R_AGTX0_AGT16_CTRL_AGTMR1_TCK_Pos           (4UL)
 #define R_AGTX0_AGT16_CTRL_AGTMR1_TCK_Msk           (0x70UL)
 #define R_AGTX0_AGT16_CTRL_AGTMR1_TEDGPL_Pos        (3UL)
 #define R_AGTX0_AGT16_CTRL_AGTMR1_TEDGPL_Msk        (0x8UL)
 #define R_AGTX0_AGT16_CTRL_AGTMR1_TMOD_Pos          (0UL)
 #define R_AGTX0_AGT16_CTRL_AGTMR1_TMOD_Msk          (0x7UL)
/* ========================================================  AGTMR2  ========================================================= */
 #define R_AGTX0_AGT16_CTRL_AGTMR2_LPM_Pos           (7UL)
 #define R_AGTX0_AGT16_CTRL_AGTMR2_LPM_Msk           (0x80UL)
 #define R_AGTX0_AGT16_CTRL_AGTMR2_CKS_Pos           (0UL)
 #define R_AGTX0_AGT16_CTRL_AGTMR2_CKS_Msk           (0x7UL)
/* =====================================================  AGTIOSEL_ALT  ====================================================== */
 #define R_AGTX0_AGT16_CTRL_AGTIOSEL_ALT_TIES_Pos    (4UL)
 #define R_AGTX0_AGT16_CTRL_AGTIOSEL_ALT_TIES_Msk    (0x10UL)
 #define R_AGTX0_AGT16_CTRL_AGTIOSEL_ALT_SEL_Pos     (0UL)
 #define R_AGTX0_AGT16_CTRL_AGTIOSEL_ALT_SEL_Msk     (0x3UL)
/* ========================================================  AGTIOC  ========================================================= */
 #define R_AGTX0_AGT16_CTRL_AGTIOC_TIOGT_Pos         (6UL)
 #define R_AGTX0_AGT16_CTRL_AGTIOC_TIOGT_Msk         (0xc0UL)
 #define R_AGTX0_AGT16_CTRL_AGTIOC_TIPF_Pos          (4UL)
 #define R_AGTX0_AGT16_CTRL_AGTIOC_TIPF_Msk          (0x30UL)
 #define R_AGTX0_AGT16_CTRL_AGTIOC_TOE_Pos           (2UL)
 #define R_AGTX0_AGT16_CTRL_AGTIOC_TOE_Msk           (0x4UL)
 #define R_AGTX0_AGT16_CTRL_AGTIOC_TEDGSEL_Pos       (0UL)
 #define R_AGTX0_AGT16_CTRL_AGTIOC_TEDGSEL_Msk       (0x1UL)
/* ========================================================  AGTISR  ========================================================= */
 #define R_AGTX0_AGT16_CTRL_AGTISR_EEPS_Pos          (2UL)
 #define R_AGTX0_AGT16_CTRL_AGTISR_EEPS_Msk          (0x4UL)
/* ========================================================  AGTCMSR  ======================================================== */
 #define R_AGTX0_AGT16_CTRL_AGTCMSR_TOPOLB_Pos       (6UL)
 #define R_AGTX0_AGT16_CTRL_AGTCMSR_TOPOLB_Msk       (0x40UL)
 #define R_AGTX0_AGT16_CTRL_AGTCMSR_TOEB_Pos         (5UL)
 #define R_AGTX0_AGT16_CTRL_AGTCMSR_TOEB_Msk         (0x20UL)
 #define R_AGTX0_AGT16_CTRL_AGTCMSR_TCMEB_Pos        (4UL)
 #define R_AGTX0_AGT16_CTRL_AGTCMSR_TCMEB_Msk        (0x10UL)
 #define R_AGTX0_AGT16_CTRL_AGTCMSR_TOPOLA_Pos       (2UL)
 #define R_AGTX0_AGT16_CTRL_AGTCMSR_TOPOLA_Msk       (0x4UL)
 #define R_AGTX0_AGT16_CTRL_AGTCMSR_TOEA_Pos         (1UL)
 #define R_AGTX0_AGT16_CTRL_AGTCMSR_TOEA_Msk         (0x2UL)
 #define R_AGTX0_AGT16_CTRL_AGTCMSR_TCMEA_Pos        (0UL)
 #define R_AGTX0_AGT16_CTRL_AGTCMSR_TCMEA_Msk        (0x1UL)
/* =======================================================  AGTIOSEL  ======================================================== */
 #define R_AGTX0_AGT16_CTRL_AGTIOSEL_TIES_Pos        (4UL)
 #define R_AGTX0_AGT16_CTRL_AGTIOSEL_TIES_Msk        (0x10UL)
 #define R_AGTX0_AGT16_CTRL_AGTIOSEL_SEL_Pos         (0UL)
 #define R_AGTX0_AGT16_CTRL_AGTIOSEL_SEL_Msk         (0x3UL)

/* =========================================================================================================================== */
/* ================                                           AGT16                                           ================ */
/* =========================================================================================================================== */

/* ==========================================================  AGT  ========================================================== */
 #define R_AGTX0_AGT16_AGT_AGT_Pos          (0UL)
 #define R_AGTX0_AGT16_AGT_AGT_Msk          (0xffffUL)
/* ========================================================  AGTCMA  ========================================================= */
 #define R_AGTX0_AGT16_AGTCMA_AGTCMA_Pos    (0UL)
 #define R_AGTX0_AGT16_AGTCMA_AGTCMA_Msk    (0xffffUL)
/* ========================================================  AGTCMB  ========================================================= */
 #define R_AGTX0_AGT16_AGTCMB_AGTCMB_Pos    (0UL)
 #define R_AGTX0_AGT16_AGTCMB_AGTCMB_Msk    (0xffffUL)

/* =========================================================================================================================== */
/* ================                                           AGT32                                           ================ */
/* =========================================================================================================================== */

/* ==========================================================  AGT  ========================================================== */
 #define R_AGTX0_AGT32_AGT_AGT_Pos          (0UL)
 #define R_AGTX0_AGT32_AGT_AGT_Msk          (0xffffffffUL)
/* ========================================================  AGTCMA  ========================================================= */
 #define R_AGTX0_AGT32_AGTCMA_AGTCMA_Pos    (0UL)
 #define R_AGTX0_AGT32_AGTCMA_AGTCMA_Msk    (0xffffffffUL)
/* ========================================================  AGTCMB  ========================================================= */
 #define R_AGTX0_AGT32_AGTCMB_AGTCMB_Pos    (0UL)
 #define R_AGTX0_AGT32_AGTCMB_AGTCMB_Msk    (0xffffffffUL)

/** @} */ /* End of group PosMask_clusters */

/* =========================================================================================================================== */
/* ================                                Pos/Mask Peripheral Section                                ================ */
/* =========================================================================================================================== */

/** @addtogroup PosMask_peripherals
 * @{
 */

/* =========================================================================================================================== */
/* ================                                         R_ACMPHS0                                         ================ */
/* =========================================================================================================================== */

/* ========================================================  CMPCTL  ========================================================= */
 #define R_ACMPHS0_CMPCTL_HCMPON_Pos     (7UL)
 #define R_ACMPHS0_CMPCTL_HCMPON_Msk     (0x80UL)
 #define R_ACMPHS0_CMPCTL_CDFS_Pos       (5UL)
 #define R_ACMPHS0_CMPCTL_CDFS_Msk       (0x60UL)
 #define R_ACMPHS0_CMPCTL_CEG_Pos        (3UL)
 #define R_ACMPHS0_CMPCTL_CEG_Msk        (0x18UL)
 #define R_ACMPHS0_CMPCTL_CSTEN_Pos      (2UL)
 #define R_ACMPHS0_CMPCTL_CSTEN_Msk      (0x4UL)
 #define R_ACMPHS0_CMPCTL_COE_Pos        (1UL)
 #define R_ACMPHS0_CMPCTL_COE_Msk        (0x2UL)
 #define R_ACMPHS0_CMPCTL_CINV_Pos       (0UL)
 #define R_ACMPHS0_CMPCTL_CINV_Msk       (0x1UL)
/* ========================================================  CMPSEL0  ======================================================== */
 #define R_ACMPHS0_CMPSEL0_CMPSEL_Pos    (0UL)
 #define R_ACMPHS0_CMPSEL0_CMPSEL_Msk    (0xfUL)
/* ========================================================  CMPSEL1  ======================================================== */
 #define R_ACMPHS0_CMPSEL1_CRVS_Pos      (0UL)
 #define R_ACMPHS0_CMPSEL1_CRVS_Msk      (0x3fUL)
/* ========================================================  CMPMON  ========================================================= */
 #define R_ACMPHS0_CMPMON_CMPMON_Pos     (0UL)
 #define R_ACMPHS0_CMPMON_CMPMON_Msk     (0x1UL)
/* =========================================================  CPIOC  ========================================================= */
 #define R_ACMPHS0_CPIOC_VREFEN_Pos      (7UL)
 #define R_ACMPHS0_CPIOC_VREFEN_Msk      (0x80UL)
 #define R_ACMPHS0_CPIOC_CPOE_Pos        (0UL)
 #define R_ACMPHS0_CPIOC_CPOE_Msk        (0x1UL)

/* =========================================================================================================================== */
/* ================                                          R_ADC0                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  ADCSR  ========================================================= */
 #define R_ADC0_ADCSR_ADST_Pos              (15UL)
 #define R_ADC0_ADCSR_ADST_Msk              (0x8000UL)
 #define R_ADC0_ADCSR_ADCS_Pos              (13UL)
 #define R_ADC0_ADCSR_ADCS_Msk              (0x6000UL)
 #define R_ADC0_ADCSR_ADHSC_Pos             (10UL)
 #define R_ADC0_ADCSR_ADHSC_Msk             (0x400UL)
 #define R_ADC0_ADCSR_TRGE_Pos              (9UL)
 #define R_ADC0_ADCSR_TRGE_Msk              (0x200UL)
 #define R_ADC0_ADCSR_EXTRG_Pos             (8UL)
 #define R_ADC0_ADCSR_EXTRG_Msk             (0x100UL)
 #define R_ADC0_ADCSR_DBLE_Pos              (7UL)
 #define R_ADC0_ADCSR_DBLE_Msk              (0x80UL)
 #define R_ADC0_ADCSR_GBADIE_Pos            (6UL)
 #define R_ADC0_ADCSR_GBADIE_Msk            (0x40UL)
 #define R_ADC0_ADCSR_DBLANS_Pos            (0UL)
 #define R_ADC0_ADCSR_DBLANS_Msk            (0x1fUL)
 #define R_ADC0_ADCSR_ADIE_Pos              (12UL)
 #define R_ADC0_ADCSR_ADIE_Msk              (0x1000UL)
/* ========================================================  ADANSA  ========================================================= */
 #define R_ADC0_ADANSA_ANSA_Pos             (0UL)
 #define R_ADC0_ADANSA_ANSA_Msk             (0x1UL)
/* =========================================================  ADADS  ========================================================= */
 #define R_ADC0_ADADS_ADS_Pos               (0UL)
 #define R_ADC0_ADADS_ADS_Msk               (0x1UL)
/* =========================================================  ADADC  ========================================================= */
 #define R_ADC0_ADADC_ADC_Pos               (0UL)
 #define R_ADC0_ADADC_ADC_Msk               (0x7UL)
 #define R_ADC0_ADADC_AVEE_Pos              (7UL)
 #define R_ADC0_ADADC_AVEE_Msk              (0x80UL)
/* =========================================================  ADCER  ========================================================= */
 #define R_ADC0_ADCER_ADRFMT_Pos            (15UL)
 #define R_ADC0_ADCER_ADRFMT_Msk            (0x8000UL)
 #define R_ADC0_ADCER_ADINV_Pos             (14UL)
 #define R_ADC0_ADCER_ADINV_Msk             (0x4000UL)
 #define R_ADC0_ADCER_DIAGM_Pos             (11UL)
 #define R_ADC0_ADCER_DIAGM_Msk             (0x800UL)
 #define R_ADC0_ADCER_DIAGLD_Pos            (10UL)
 #define R_ADC0_ADCER_DIAGLD_Msk            (0x400UL)
 #define R_ADC0_ADCER_DIAGVAL_Pos           (8UL)
 #define R_ADC0_ADCER_DIAGVAL_Msk           (0x300UL)
 #define R_ADC0_ADCER_ACE_Pos               (5UL)
 #define R_ADC0_ADCER_ACE_Msk               (0x20UL)
 #define R_ADC0_ADCER_ADPRC_Pos             (1UL)
 #define R_ADC0_ADCER_ADPRC_Msk             (0x6UL)
 #define R_ADC0_ADCER_DCE_Pos               (4UL)
 #define R_ADC0_ADCER_DCE_Msk               (0x10UL)
/* ========================================================  ADSTRGR  ======================================================== */
 #define R_ADC0_ADSTRGR_TRSA_Pos            (8UL)
 #define R_ADC0_ADSTRGR_TRSA_Msk            (0x3f00UL)
 #define R_ADC0_ADSTRGR_TRSB_Pos            (0UL)
 #define R_ADC0_ADSTRGR_TRSB_Msk            (0x3fUL)
/* ========================================================  ADEXICR  ======================================================== */
 #define R_ADC0_ADEXICR_OCSB_Pos            (11UL)
 #define R_ADC0_ADEXICR_OCSB_Msk            (0x800UL)
 #define R_ADC0_ADEXICR_TSSB_Pos            (10UL)
 #define R_ADC0_ADEXICR_TSSB_Msk            (0x400UL)
 #define R_ADC0_ADEXICR_OCSA_Pos            (9UL)
 #define R_ADC0_ADEXICR_OCSA_Msk            (0x200UL)
 #define R_ADC0_ADEXICR_TSSA_Pos            (8UL)
 #define R_ADC0_ADEXICR_TSSA_Msk            (0x100UL)
 #define R_ADC0_ADEXICR_OCSAD_Pos           (1UL)
 #define R_ADC0_ADEXICR_OCSAD_Msk           (0x2UL)
 #define R_ADC0_ADEXICR_TSSAD_Pos           (0UL)
 #define R_ADC0_ADEXICR_TSSAD_Msk           (0x1UL)
 #define R_ADC0_ADEXICR_EXSEL_Pos           (14UL)
 #define R_ADC0_ADEXICR_EXSEL_Msk           (0x4000UL)
 #define R_ADC0_ADEXICR_EXOEN_Pos           (15UL)
 #define R_ADC0_ADEXICR_EXOEN_Msk           (0x8000UL)
/* ========================================================  ADANSB  ========================================================= */
 #define R_ADC0_ADANSB_ANSB_Pos             (0UL)
 #define R_ADC0_ADANSB_ANSB_Msk             (0x1UL)
/* ========================================================  ADDBLDR  ======================================================== */
 #define R_ADC0_ADDBLDR_ADDBLDR_Pos         (0UL)
 #define R_ADC0_ADDBLDR_ADDBLDR_Msk         (0xffffUL)
/* ========================================================  ADTSDR  ========================================================= */
 #define R_ADC0_ADTSDR_ADTSDR_Pos           (0UL)
 #define R_ADC0_ADTSDR_ADTSDR_Msk           (0xffffUL)
/* ========================================================  ADOCDR  ========================================================= */
 #define R_ADC0_ADOCDR_ADOCDR_Pos           (0UL)
 #define R_ADC0_ADOCDR_ADOCDR_Msk           (0xffffUL)
/* ======================================================  ADRD_RIGHT  ======================================================= */
 #define R_ADC0_ADRD_RIGHT_DIAGST_Pos       (14UL)
 #define R_ADC0_ADRD_RIGHT_DIAGST_Msk       (0xc000UL)
 #define R_ADC0_ADRD_RIGHT_AD_Pos           (0UL)
 #define R_ADC0_ADRD_RIGHT_AD_Msk           (0x3fffUL)
/* =======================================================  ADRD_LEFT  ======================================================= */
 #define R_ADC0_ADRD_LEFT_AD_Pos            (2UL)
 #define R_ADC0_ADRD_LEFT_AD_Msk            (0xfffcUL)
 #define R_ADC0_ADRD_LEFT_DIAGST_Pos        (0UL)
 #define R_ADC0_ADRD_LEFT_DIAGST_Msk        (0x3UL)
/* =========================================================  ADDR  ========================================================== */
 #define R_ADC0_ADDR_ADDR_Pos               (0UL)
 #define R_ADC0_ADDR_ADDR_Msk               (0xffffUL)
/* ========================================================  ADSHCR  ========================================================= */
 #define R_ADC0_ADSHCR_SHANS2_Pos           (10UL)
 #define R_ADC0_ADSHCR_SHANS2_Msk           (0x400UL)
 #define R_ADC0_ADSHCR_SHANS1_Pos           (9UL)
 #define R_ADC0_ADSHCR_SHANS1_Msk           (0x200UL)
 #define R_ADC0_ADSHCR_SHANS0_Pos           (8UL)
 #define R_ADC0_ADSHCR_SHANS0_Msk           (0x100UL)
 #define R_ADC0_ADSHCR_SSTSH_Pos            (0UL)
 #define R_ADC0_ADSHCR_SSTSH_Msk            (0xffUL)
/* ========================================================  ADDISCR  ======================================================== */
 #define R_ADC0_ADDISCR_CHARGE_Pos          (4UL)
 #define R_ADC0_ADDISCR_CHARGE_Msk          (0x10UL)
 #define R_ADC0_ADDISCR_ADNDIS_Pos          (0UL)
 #define R_ADC0_ADDISCR_ADNDIS_Msk          (0xfUL)
/* ========================================================  ADSHMSR  ======================================================== */
 #define R_ADC0_ADSHMSR_SHMD_Pos            (0UL)
 #define R_ADC0_ADSHMSR_SHMD_Msk            (0x1UL)
/* ========================================================  ADACSR  ========================================================= */
 #define R_ADC0_ADACSR_ADSAC_Pos            (1UL)
 #define R_ADC0_ADACSR_ADSAC_Msk            (0x2UL)
/* ========================================================  ADGSPCR  ======================================================== */
 #define R_ADC0_ADGSPCR_GBRP_Pos            (15UL)
 #define R_ADC0_ADGSPCR_GBRP_Msk            (0x8000UL)
 #define R_ADC0_ADGSPCR_GBRSCN_Pos          (1UL)
 #define R_ADC0_ADGSPCR_GBRSCN_Msk          (0x2UL)
 #define R_ADC0_ADGSPCR_PGS_Pos             (0UL)
 #define R_ADC0_ADGSPCR_PGS_Msk             (0x1UL)
 #define R_ADC0_ADGSPCR_GBEXTRG_Pos         (8UL)
 #define R_ADC0_ADGSPCR_GBEXTRG_Msk         (0x100UL)
/* =========================================================  ADICR  ========================================================= */
 #define R_ADC0_ADICR_ADIC_Pos              (0UL)
 #define R_ADC0_ADICR_ADIC_Msk              (0x3UL)
/* =======================================================  ADDBLDRA  ======================================================== */
 #define R_ADC0_ADDBLDRA_ADDBLDRA_Pos       (0UL)
 #define R_ADC0_ADDBLDRA_ADDBLDRA_Msk       (0xffffUL)
/* =======================================================  ADDBLDRB  ======================================================== */
 #define R_ADC0_ADDBLDRB_ADDBLDRB_Pos       (0UL)
 #define R_ADC0_ADDBLDRB_ADDBLDRB_Msk       (0xffffUL)
/* ======================================================  ADHVREFCNT  ======================================================= */
 #define R_ADC0_ADHVREFCNT_ADSLP_Pos        (7UL)
 #define R_ADC0_ADHVREFCNT_ADSLP_Msk        (0x80UL)
 #define R_ADC0_ADHVREFCNT_LVSEL_Pos        (4UL)
 #define R_ADC0_ADHVREFCNT_LVSEL_Msk        (0x10UL)
 #define R_ADC0_ADHVREFCNT_HVSEL_Pos        (0UL)
 #define R_ADC0_ADHVREFCNT_HVSEL_Msk        (0x3UL)
/* =======================================================  ADWINMON  ======================================================== */
 #define R_ADC0_ADWINMON_MONCMPB_Pos        (5UL)
 #define R_ADC0_ADWINMON_MONCMPB_Msk        (0x20UL)
 #define R_ADC0_ADWINMON_MONCMPA_Pos        (4UL)
 #define R_ADC0_ADWINMON_MONCMPA_Msk        (0x10UL)
 #define R_ADC0_ADWINMON_MONCOMB_Pos        (0UL)
 #define R_ADC0_ADWINMON_MONCOMB_Msk        (0x1UL)
/* ========================================================  ADCMPCR  ======================================================== */
 #define R_ADC0_ADCMPCR_CMPAIE_Pos          (15UL)
 #define R_ADC0_ADCMPCR_CMPAIE_Msk          (0x8000UL)
 #define R_ADC0_ADCMPCR_WCMPE_Pos           (14UL)
 #define R_ADC0_ADCMPCR_WCMPE_Msk           (0x4000UL)
 #define R_ADC0_ADCMPCR_CMPBIE_Pos          (13UL)
 #define R_ADC0_ADCMPCR_CMPBIE_Msk          (0x2000UL)
 #define R_ADC0_ADCMPCR_CMPAE_Pos           (11UL)
 #define R_ADC0_ADCMPCR_CMPAE_Msk           (0x800UL)
 #define R_ADC0_ADCMPCR_CMPBE_Pos           (9UL)
 #define R_ADC0_ADCMPCR_CMPBE_Msk           (0x200UL)
 #define R_ADC0_ADCMPCR_CMPAB_Pos           (0UL)
 #define R_ADC0_ADCMPCR_CMPAB_Msk           (0x3UL)
/* ======================================================  ADCMPANSER  ======================================================= */
 #define R_ADC0_ADCMPANSER_CMPOCA_Pos       (1UL)
 #define R_ADC0_ADCMPANSER_CMPOCA_Msk       (0x2UL)
 #define R_ADC0_ADCMPANSER_CMPTSA_Pos       (0UL)
 #define R_ADC0_ADCMPANSER_CMPTSA_Msk       (0x1UL)
/* =======================================================  ADCMPLER  ======================================================== */
 #define R_ADC0_ADCMPLER_CMPLOCA_Pos        (1UL)
 #define R_ADC0_ADCMPLER_CMPLOCA_Msk        (0x2UL)
 #define R_ADC0_ADCMPLER_CMPLTSA_Pos        (0UL)
 #define R_ADC0_ADCMPLER_CMPLTSA_Msk        (0x1UL)
/* =======================================================  ADCMPANSR  ======================================================= */
 #define R_ADC0_ADCMPANSR_CMPCHA_Pos        (0UL)
 #define R_ADC0_ADCMPANSR_CMPCHA_Msk        (0x1UL)
/* ========================================================  ADCMPLR  ======================================================== */
 #define R_ADC0_ADCMPLR_CMPLCHA_Pos         (0UL)
 #define R_ADC0_ADCMPLR_CMPLCHA_Msk         (0x1UL)
/* =======================================================  ADCMPDR0  ======================================================== */
 #define R_ADC0_ADCMPDR0_ADCMPDR0_Pos       (0UL)
 #define R_ADC0_ADCMPDR0_ADCMPDR0_Msk       (0xffffUL)
/* =======================================================  ADCMPDR1  ======================================================== */
 #define R_ADC0_ADCMPDR1_ADCMPDR1_Pos       (0UL)
 #define R_ADC0_ADCMPDR1_ADCMPDR1_Msk       (0xffffUL)
/* ========================================================  ADCMPSR  ======================================================== */
 #define R_ADC0_ADCMPSR_CMPSTCHA_Pos        (0UL)
 #define R_ADC0_ADCMPSR_CMPSTCHA_Msk        (0x1UL)
/* =======================================================  ADCMPSER  ======================================================== */
 #define R_ADC0_ADCMPSER_CMPSTOCA_Pos       (1UL)
 #define R_ADC0_ADCMPSER_CMPSTOCA_Msk       (0x2UL)
 #define R_ADC0_ADCMPSER_CMPSTTSA_Pos       (0UL)
 #define R_ADC0_ADCMPSER_CMPSTTSA_Msk       (0x1UL)
/* =======================================================  ADCMPBNSR  ======================================================= */
 #define R_ADC0_ADCMPBNSR_CMPLB_Pos         (7UL)
 #define R_ADC0_ADCMPBNSR_CMPLB_Msk         (0x80UL)
 #define R_ADC0_ADCMPBNSR_CMPCHB_Pos        (0UL)
 #define R_ADC0_ADCMPBNSR_CMPCHB_Msk        (0x3fUL)
/* =======================================================  ADWINLLB  ======================================================== */
 #define R_ADC0_ADWINLLB_ADWINLLB_Pos       (0UL)
 #define R_ADC0_ADWINLLB_ADWINLLB_Msk       (0xffffUL)
/* =======================================================  ADWINULB  ======================================================== */
 #define R_ADC0_ADWINULB_ADWINULB_Pos       (0UL)
 #define R_ADC0_ADWINULB_ADWINULB_Msk       (0xffffUL)
/* =======================================================  ADCMPBSR  ======================================================== */
 #define R_ADC0_ADCMPBSR_CMPSTB_Pos         (0UL)
 #define R_ADC0_ADCMPBSR_CMPSTB_Msk         (0x1UL)
/* ========================================================  ADSSTRL  ======================================================== */
 #define R_ADC0_ADSSTRL_SST_Pos             (0UL)
 #define R_ADC0_ADSSTRL_SST_Msk             (0xffUL)
/* ========================================================  ADSSTRT  ======================================================== */
 #define R_ADC0_ADSSTRT_SST_Pos             (0UL)
 #define R_ADC0_ADSSTRT_SST_Msk             (0xffUL)
/* ========================================================  ADSSTRO  ======================================================== */
 #define R_ADC0_ADSSTRO_SST_Pos             (0UL)
 #define R_ADC0_ADSSTRO_SST_Msk             (0xffUL)
/* ========================================================  ADSSTR  ========================================================= */
 #define R_ADC0_ADSSTR_SST_Pos              (0UL)
 #define R_ADC0_ADSSTR_SST_Msk              (0xffUL)
/* ========================================================  ADPGACR  ======================================================== */
 #define R_ADC0_ADPGACR_P002GEN_Pos         (11UL)
 #define R_ADC0_ADPGACR_P002GEN_Msk         (0x800UL)
 #define R_ADC0_ADPGACR_P002ENAMP_Pos       (10UL)
 #define R_ADC0_ADPGACR_P002ENAMP_Msk       (0x400UL)
 #define R_ADC0_ADPGACR_P002SEL1_Pos        (9UL)
 #define R_ADC0_ADPGACR_P002SEL1_Msk        (0x200UL)
 #define R_ADC0_ADPGACR_P002SEL0_Pos        (8UL)
 #define R_ADC0_ADPGACR_P002SEL0_Msk        (0x100UL)
 #define R_ADC0_ADPGACR_P001GEN_Pos         (7UL)
 #define R_ADC0_ADPGACR_P001GEN_Msk         (0x80UL)
 #define R_ADC0_ADPGACR_P001ENAMP_Pos       (6UL)
 #define R_ADC0_ADPGACR_P001ENAMP_Msk       (0x40UL)
 #define R_ADC0_ADPGACR_P001SEL1_Pos        (5UL)
 #define R_ADC0_ADPGACR_P001SEL1_Msk        (0x20UL)
 #define R_ADC0_ADPGACR_P001SEL0_Pos        (4UL)
 #define R_ADC0_ADPGACR_P001SEL0_Msk        (0x10UL)
 #define R_ADC0_ADPGACR_P000GEN_Pos         (3UL)
 #define R_ADC0_ADPGACR_P000GEN_Msk         (0x8UL)
 #define R_ADC0_ADPGACR_P000ENAMP_Pos       (2UL)
 #define R_ADC0_ADPGACR_P000ENAMP_Msk       (0x4UL)
 #define R_ADC0_ADPGACR_P000SEL1_Pos        (1UL)
 #define R_ADC0_ADPGACR_P000SEL1_Msk        (0x2UL)
 #define R_ADC0_ADPGACR_P000SEL0_Pos        (0UL)
 #define R_ADC0_ADPGACR_P000SEL0_Msk        (0x1UL)
 #define R_ADC0_ADPGACR_P003SEL0_Pos        (12UL)
 #define R_ADC0_ADPGACR_P003SEL0_Msk        (0x1000UL)
 #define R_ADC0_ADPGACR_P003SEL1_Pos        (13UL)
 #define R_ADC0_ADPGACR_P003SEL1_Msk        (0x2000UL)
 #define R_ADC0_ADPGACR_P003ENAMP_Pos       (14UL)
 #define R_ADC0_ADPGACR_P003ENAMP_Msk       (0x4000UL)
 #define R_ADC0_ADPGACR_P003GEN_Pos         (15UL)
 #define R_ADC0_ADPGACR_P003GEN_Msk         (0x8000UL)
/* =========================================================  ADRD  ========================================================== */
 #define R_ADC0_ADRD_AD_Pos                 (0UL)
 #define R_ADC0_ADRD_AD_Msk                 (0xffffUL)
/* =========================================================  ADRST  ========================================================= */
 #define R_ADC0_ADRST_DIAGST_Pos            (0UL)
 #define R_ADC0_ADRST_DIAGST_Msk            (0x3UL)
/* ======================================================  VREFAMPCNT  ======================================================= */
 #define R_ADC0_VREFAMPCNT_VREFADCG_Pos     (1UL)
 #define R_ADC0_VREFAMPCNT_VREFADCG_Msk     (0x6UL)
 #define R_ADC0_VREFAMPCNT_VREFADCEN_Pos    (3UL)
 #define R_ADC0_VREFAMPCNT_VREFADCEN_Msk    (0x8UL)
 #define R_ADC0_VREFAMPCNT_ADSLP_Pos        (7UL)
 #define R_ADC0_VREFAMPCNT_ADSLP_Msk        (0x80UL)
 #define R_ADC0_VREFAMPCNT_OLDETEN_Pos      (0UL)
 #define R_ADC0_VREFAMPCNT_OLDETEN_Msk      (0x1UL)
 #define R_ADC0_VREFAMPCNT_BGREN_Pos        (4UL)
 #define R_ADC0_VREFAMPCNT_BGREN_Msk        (0x10UL)
/* =======================================================  ADCALEXE  ======================================================== */
 #define R_ADC0_ADCALEXE_CALEXE_Pos         (7UL)
 #define R_ADC0_ADCALEXE_CALEXE_Msk         (0x80UL)
 #define R_ADC0_ADCALEXE_CALMON_Pos         (6UL)
 #define R_ADC0_ADCALEXE_CALMON_Msk         (0x40UL)
/* ========================================================  ADANIM  ========================================================= */
 #define R_ADC0_ADANIM_ANIM_Pos             (0UL)
 #define R_ADC0_ADANIM_ANIM_Msk             (0x1UL)
/* =======================================================  ADPGAGS0  ======================================================== */
 #define R_ADC0_ADPGAGS0_P002GAIN_Pos       (8UL)
 #define R_ADC0_ADPGAGS0_P002GAIN_Msk       (0xf00UL)
 #define R_ADC0_ADPGAGS0_P001GAIN_Pos       (4UL)
 #define R_ADC0_ADPGAGS0_P001GAIN_Msk       (0xf0UL)
 #define R_ADC0_ADPGAGS0_P000GAIN_Pos       (0UL)
 #define R_ADC0_ADPGAGS0_P000GAIN_Msk       (0xfUL)
 #define R_ADC0_ADPGAGS0_P003GAIN_Pos       (12UL)
 #define R_ADC0_ADPGAGS0_P003GAIN_Msk       (0xf000UL)
/* =======================================================  ADPGADCR0  ======================================================= */
 #define R_ADC0_ADPGADCR0_P003DG_Pos        (12UL)
 #define R_ADC0_ADPGADCR0_P003DG_Msk        (0x3000UL)
 #define R_ADC0_ADPGADCR0_P002DEN_Pos       (11UL)
 #define R_ADC0_ADPGADCR0_P002DEN_Msk       (0x800UL)
 #define R_ADC0_ADPGADCR0_P002DG_Pos        (8UL)
 #define R_ADC0_ADPGADCR0_P002DG_Msk        (0x300UL)
 #define R_ADC0_ADPGADCR0_P001DEN_Pos       (7UL)
 #define R_ADC0_ADPGADCR0_P001DEN_Msk       (0x80UL)
 #define R_ADC0_ADPGADCR0_P001DG_Pos        (4UL)
 #define R_ADC0_ADPGADCR0_P001DG_Msk        (0x30UL)
 #define R_ADC0_ADPGADCR0_P000DEN_Pos       (3UL)
 #define R_ADC0_ADPGADCR0_P000DEN_Msk       (0x8UL)
 #define R_ADC0_ADPGADCR0_P000DG_Pos        (0UL)
 #define R_ADC0_ADPGADCR0_P000DG_Msk        (0x3UL)
 #define R_ADC0_ADPGADCR0_P003DEN_Pos       (15UL)
 #define R_ADC0_ADPGADCR0_P003DEN_Msk       (0x8000UL)
/* =========================================================  ADREF  ========================================================= */
 #define R_ADC0_ADREF_ADF_Pos               (0UL)
 #define R_ADC0_ADREF_ADF_Msk               (0x1UL)
 #define R_ADC0_ADREF_ADSCACT_Pos           (7UL)
 #define R_ADC0_ADREF_ADSCACT_Msk           (0x80UL)
/* ========================================================  ADEXREF  ======================================================== */
 #define R_ADC0_ADEXREF_GBADF_Pos           (0UL)
 #define R_ADC0_ADEXREF_GBADF_Msk           (0x1UL)
/* =======================================================  ADAMPOFF  ======================================================== */
 #define R_ADC0_ADAMPOFF_OPOFF_Pos          (0UL)
 #define R_ADC0_ADAMPOFF_OPOFF_Msk          (0xffUL)
/* ========================================================  ADTSTPR  ======================================================== */
 #define R_ADC0_ADTSTPR_PRO_Pos             (0UL)
 #define R_ADC0_ADTSTPR_PRO_Msk             (0x1UL)
 #define R_ADC0_ADTSTPR_B0WI_Pos            (1UL)
 #define R_ADC0_ADTSTPR_B0WI_Msk            (0x2UL)
/* =======================================================  ADDDACER  ======================================================== */
 #define R_ADC0_ADDDACER_WRION_Pos          (0UL)
 #define R_ADC0_ADDDACER_WRION_Msk          (0x1fUL)
 #define R_ADC0_ADDDACER_WRIOFF_Pos         (8UL)
 #define R_ADC0_ADDDACER_WRIOFF_Msk         (0x1f00UL)
 #define R_ADC0_ADDDACER_ADHS_Pos           (15UL)
 #define R_ADC0_ADDDACER_ADHS_Msk           (0x8000UL)
/* =======================================================  ADEXTSTR  ======================================================== */
 #define R_ADC0_ADEXTSTR_SHTEST_Pos         (0UL)
 #define R_ADC0_ADEXTSTR_SHTEST_Msk         (0x7UL)
 #define R_ADC0_ADEXTSTR_SWTST_Pos          (4UL)
 #define R_ADC0_ADEXTSTR_SWTST_Msk          (0x30UL)
 #define R_ADC0_ADEXTSTR_SHTRM_Pos          (8UL)
 #define R_ADC0_ADEXTSTR_SHTRM_Msk          (0x300UL)
 #define R_ADC0_ADEXTSTR_ADTRM3_Pos         (11UL)
 #define R_ADC0_ADEXTSTR_ADTRM3_Msk         (0x800UL)
 #define R_ADC0_ADEXTSTR_ADTRM2_Pos         (12UL)
 #define R_ADC0_ADEXTSTR_ADTRM2_Msk         (0x3000UL)
 #define R_ADC0_ADEXTSTR_ADTRM1_Pos         (14UL)
 #define R_ADC0_ADEXTSTR_ADTRM1_Msk         (0xc000UL)
/* ========================================================  ADTSTRA  ======================================================== */
 #define R_ADC0_ADTSTRA_ATBUSSEL_Pos        (0UL)
 #define R_ADC0_ADTSTRA_ATBUSSEL_Msk        (0x1UL)
 #define R_ADC0_ADTSTRA_TSTSWREF_Pos        (1UL)
 #define R_ADC0_ADTSTRA_TSTSWREF_Msk        (0xeUL)
 #define R_ADC0_ADTSTRA_OCSW_Pos            (5UL)
 #define R_ADC0_ADTSTRA_OCSW_Msk            (0x20UL)
 #define R_ADC0_ADTSTRA_TSSW_Pos            (6UL)
 #define R_ADC0_ADTSTRA_TSSW_Msk            (0x40UL)
 #define R_ADC0_ADTSTRA_ADTEST_AD_Pos       (8UL)
 #define R_ADC0_ADTSTRA_ADTEST_AD_Msk       (0xf00UL)
 #define R_ADC0_ADTSTRA_ADTEST_IO_Pos       (12UL)
 #define R_ADC0_ADTSTRA_ADTEST_IO_Msk       (0xf000UL)
/* ========================================================  ADTSTRB  ======================================================== */
 #define R_ADC0_ADTSTRB_ADVAL_Pos           (0UL)
 #define R_ADC0_ADTSTRB_ADVAL_Msk           (0x7fffUL)
/* ========================================================  ADTSTRC  ======================================================== */
 #define R_ADC0_ADTSTRC_ADMD_Pos            (0UL)
 #define R_ADC0_ADTSTRC_ADMD_Msk            (0xffUL)
 #define R_ADC0_ADTSTRC_SYNCERR_Pos         (12UL)
 #define R_ADC0_ADTSTRC_SYNCERR_Msk         (0x1000UL)
/* ========================================================  ADTSTRD  ======================================================== */
 #define R_ADC0_ADTSTRD_ADVAL16_Pos         (0UL)
 #define R_ADC0_ADTSTRD_ADVAL16_Msk         (0x1UL)
/* =======================================================  ADSWTSTR0  ======================================================= */
 #define R_ADC0_ADSWTSTR0_CHSW00_Pos        (0UL)
 #define R_ADC0_ADSWTSTR0_CHSW00_Msk        (0x1UL)
 #define R_ADC0_ADSWTSTR0_CHSW01_Pos        (1UL)
 #define R_ADC0_ADSWTSTR0_CHSW01_Msk        (0x2UL)
 #define R_ADC0_ADSWTSTR0_CHSW02_Pos        (2UL)
 #define R_ADC0_ADSWTSTR0_CHSW02_Msk        (0x4UL)
 #define R_ADC0_ADSWTSTR0_CHSW03_Pos        (3UL)
 #define R_ADC0_ADSWTSTR0_CHSW03_Msk        (0x8UL)
 #define R_ADC0_ADSWTSTR0_CHSW04_Pos        (4UL)
 #define R_ADC0_ADSWTSTR0_CHSW04_Msk        (0x10UL)
 #define R_ADC0_ADSWTSTR0_CHSW05_Pos        (5UL)
 #define R_ADC0_ADSWTSTR0_CHSW05_Msk        (0x20UL)
/* =======================================================  ADSWTSTR1  ======================================================= */
 #define R_ADC0_ADSWTSTR1_CHSW16_Pos        (0UL)
 #define R_ADC0_ADSWTSTR1_CHSW16_Msk        (0x1UL)
 #define R_ADC0_ADSWTSTR1_CHSW17_Pos        (1UL)
 #define R_ADC0_ADSWTSTR1_CHSW17_Msk        (0x2UL)
 #define R_ADC0_ADSWTSTR1_CHSW18_Pos        (2UL)
 #define R_ADC0_ADSWTSTR1_CHSW18_Msk        (0x4UL)
 #define R_ADC0_ADSWTSTR1_CHSW19_Pos        (3UL)
 #define R_ADC0_ADSWTSTR1_CHSW19_Msk        (0x8UL)
 #define R_ADC0_ADSWTSTR1_CHSW20_Pos        (4UL)
 #define R_ADC0_ADSWTSTR1_CHSW20_Msk        (0x10UL)
 #define R_ADC0_ADSWTSTR1_CHSW21_Pos        (5UL)
 #define R_ADC0_ADSWTSTR1_CHSW21_Msk        (0x20UL)
/* =======================================================  ADSWTSTR2  ======================================================= */
 #define R_ADC0_ADSWTSTR2_EX0SW_Pos         (0UL)
 #define R_ADC0_ADSWTSTR2_EX0SW_Msk         (0x1UL)
 #define R_ADC0_ADSWTSTR2_EX1SW_Pos         (1UL)
 #define R_ADC0_ADSWTSTR2_EX1SW_Msk         (0x2UL)
 #define R_ADC0_ADSWTSTR2_SHBYPS0_Pos       (4UL)
 #define R_ADC0_ADSWTSTR2_SHBYPS0_Msk       (0x10UL)
 #define R_ADC0_ADSWTSTR2_SHBYPS1_Pos       (5UL)
 #define R_ADC0_ADSWTSTR2_SHBYPS1_Msk       (0x20UL)
 #define R_ADC0_ADSWTSTR2_SHBYPS2_Pos       (6UL)
 #define R_ADC0_ADSWTSTR2_SHBYPS2_Msk       (0x40UL)
 #define R_ADC0_ADSWTSTR2_GRP0SW_Pos        (8UL)
 #define R_ADC0_ADSWTSTR2_GRP0SW_Msk        (0x100UL)
 #define R_ADC0_ADSWTSTR2_GRP1SW_Pos        (9UL)
 #define R_ADC0_ADSWTSTR2_GRP1SW_Msk        (0x200UL)
 #define R_ADC0_ADSWTSTR2_GRP2SW_Pos        (10UL)
 #define R_ADC0_ADSWTSTR2_GRP2SW_Msk        (0x400UL)
 #define R_ADC0_ADSWTSTR2_GRP3SW_Pos        (11UL)
 #define R_ADC0_ADSWTSTR2_GRP3SW_Msk        (0x800UL)
 #define R_ADC0_ADSWTSTR2_GRPEX1SW_Pos      (12UL)
 #define R_ADC0_ADSWTSTR2_GRPEX1SW_Msk      (0x1000UL)
/* ========================================================  ADSWCR  ========================================================= */
 #define R_ADC0_ADSWCR_ADSWREF_Pos          (0UL)
 #define R_ADC0_ADSWCR_ADSWREF_Msk          (0x7UL)
 #define R_ADC0_ADSWCR_SHSWREF_Pos          (4UL)
 #define R_ADC0_ADSWCR_SHSWREF_Msk          (0x70UL)
/* ========================================================  ADGSCS  ========================================================= */
 #define R_ADC0_ADGSCS_CHSELGB_Pos          (0UL)
 #define R_ADC0_ADGSCS_CHSELGB_Msk          (0xffUL)
 #define R_ADC0_ADGSCS_CHSELGA_Pos          (8UL)
 #define R_ADC0_ADGSCS_CHSELGA_Msk          (0xff00UL)
/* =========================================================  ADSER  ========================================================= */
 #define R_ADC0_ADSER_SMPEX_Pos             (7UL)
 #define R_ADC0_ADSER_SMPEX_Msk             (0x80UL)
/* ========================================================  ADBUF0  ========================================================= */
 #define R_ADC0_ADBUF0_ADBUF_Pos            (0UL)
 #define R_ADC0_ADBUF0_ADBUF_Msk            (0xffffUL)
/* ========================================================  ADBUF1  ========================================================= */
 #define R_ADC0_ADBUF1_ADBUF_Pos            (0UL)
 #define R_ADC0_ADBUF1_ADBUF_Msk            (0xffffUL)
/* ========================================================  ADBUF2  ========================================================= */
 #define R_ADC0_ADBUF2_ADBUF_Pos            (0UL)
 #define R_ADC0_ADBUF2_ADBUF_Msk            (0xffffUL)
/* ========================================================  ADBUF3  ========================================================= */
 #define R_ADC0_ADBUF3_ADBUF_Pos            (0UL)
 #define R_ADC0_ADBUF3_ADBUF_Msk            (0xffffUL)
/* ========================================================  ADBUF4  ========================================================= */
 #define R_ADC0_ADBUF4_ADBUF_Pos            (0UL)
 #define R_ADC0_ADBUF4_ADBUF_Msk            (0xffffUL)
/* ========================================================  ADBUF5  ========================================================= */
 #define R_ADC0_ADBUF5_ADBUF_Pos            (0UL)
 #define R_ADC0_ADBUF5_ADBUF_Msk            (0xffffUL)
/* ========================================================  ADBUF6  ========================================================= */
 #define R_ADC0_ADBUF6_ADBUF_Pos            (0UL)
 #define R_ADC0_ADBUF6_ADBUF_Msk            (0xffffUL)
/* ========================================================  ADBUF7  ========================================================= */
 #define R_ADC0_ADBUF7_ADBUF_Pos            (0UL)
 #define R_ADC0_ADBUF7_ADBUF_Msk            (0xffffUL)
/* ========================================================  ADBUF8  ========================================================= */
 #define R_ADC0_ADBUF8_ADBUF_Pos            (0UL)
 #define R_ADC0_ADBUF8_ADBUF_Msk            (0xffffUL)
/* ========================================================  ADBUF9  ========================================================= */
 #define R_ADC0_ADBUF9_ADBUF_Pos            (0UL)
 #define R_ADC0_ADBUF9_ADBUF_Msk            (0xffffUL)
/* ========================================================  ADBUF10  ======================================================== */
 #define R_ADC0_ADBUF10_ADBUF_Pos           (0UL)
 #define R_ADC0_ADBUF10_ADBUF_Msk           (0xffffUL)
/* ========================================================  ADBUF11  ======================================================== */
 #define R_ADC0_ADBUF11_ADBUF_Pos           (0UL)
 #define R_ADC0_ADBUF11_ADBUF_Msk           (0xffffUL)
/* ========================================================  ADBUF12  ======================================================== */
 #define R_ADC0_ADBUF12_ADBUF_Pos           (0UL)
 #define R_ADC0_ADBUF12_ADBUF_Msk           (0xffffUL)
/* ========================================================  ADBUF13  ======================================================== */
 #define R_ADC0_ADBUF13_ADBUF_Pos           (0UL)
 #define R_ADC0_ADBUF13_ADBUF_Msk           (0xffffUL)
/* ========================================================  ADBUF14  ======================================================== */
 #define R_ADC0_ADBUF14_ADBUF_Pos           (0UL)
 #define R_ADC0_ADBUF14_ADBUF_Msk           (0xffffUL)
/* ========================================================  ADBUF15  ======================================================== */
 #define R_ADC0_ADBUF15_ADBUF_Pos           (0UL)
 #define R_ADC0_ADBUF15_ADBUF_Msk           (0xffffUL)
/* ========================================================  ADBUFEN  ======================================================== */
 #define R_ADC0_ADBUFEN_BUFEN_Pos           (0UL)
 #define R_ADC0_ADBUFEN_BUFEN_Msk           (0x1UL)
/* =======================================================  ADBUFPTR  ======================================================== */
 #define R_ADC0_ADBUFPTR_BUFPTR_Pos         (0UL)
 #define R_ADC0_ADBUFPTR_BUFPTR_Msk         (0xfUL)
 #define R_ADC0_ADBUFPTR_PTROVF_Pos         (4UL)
 #define R_ADC0_ADBUFPTR_PTROVF_Msk         (0x10UL)
/* =======================================================  ADPGADBS0  ======================================================= */
 #define R_ADC0_ADPGADBS0_P0BIAS_Pos        (0UL)
 #define R_ADC0_ADPGADBS0_P0BIAS_Msk        (0x1UL)
/* =======================================================  ADPGADBS1  ======================================================= */
 #define R_ADC0_ADPGADBS1_P3BIAS_Pos        (0UL)
 #define R_ADC0_ADPGADBS1_P3BIAS_Msk        (0x1UL)
/* =======================================================  ADREFMON  ======================================================== */
 #define R_ADC0_ADREFMON_PGAMON_Pos         (0UL)
 #define R_ADC0_ADREFMON_PGAMON_Msk         (0x7UL)
 #define R_ADC0_ADREFMON_MONSEL_Pos         (16UL)
 #define R_ADC0_ADREFMON_MONSEL_Msk         (0xf0000UL)

/* =========================================================================================================================== */
/* ================                                           R_BUS                                           ================ */
/* =========================================================================================================================== */

/* ========================================================  CSRECEN  ======================================================== */
 #define R_BUS_CSRECEN_RCVENM_Pos        (8UL)
 #define R_BUS_CSRECEN_RCVENM_Msk        (0x100UL)
 #define R_BUS_CSRECEN_RCVEN_Pos         (0UL)
 #define R_BUS_CSRECEN_RCVEN_Msk         (0x1UL)
/* ========================================================  BUSMABT  ======================================================== */
 #define R_BUS_BUSMABT_ARBS_Pos          (0UL)
 #define R_BUS_BUSMABT_ARBS_Msk          (0x1UL)
/* =======================================================  BUSDIVBYP  ======================================================= */
 #define R_BUS_BUSDIVBYP_CPU0SBPE_Pos    (16UL)
 #define R_BUS_BUSDIVBYP_CPU0SBPE_Msk    (0x10000UL)
 #define R_BUS_BUSDIVBYP_GDSSBPE_Pos     (3UL)
 #define R_BUS_BUSDIVBYP_GDSSBPE_Msk     (0x8UL)
 #define R_BUS_BUSDIVBYP_EDMABPE_Pos     (0UL)
 #define R_BUS_BUSDIVBYP_EDMABPE_Msk     (0x1UL)

/* =========================================================================================================================== */
/* ================                                           R_CAC                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  CACR0  ========================================================= */
 #define R_CAC_CACR0_CFME_Pos         (0UL)
 #define R_CAC_CACR0_CFME_Msk         (0x1UL)
/* =========================================================  CACR1  ========================================================= */
 #define R_CAC_CACR1_EDGES_Pos        (6UL)
 #define R_CAC_CACR1_EDGES_Msk        (0xc0UL)
 #define R_CAC_CACR1_TCSS_Pos         (4UL)
 #define R_CAC_CACR1_TCSS_Msk         (0x30UL)
 #define R_CAC_CACR1_FMCS_Pos         (1UL)
 #define R_CAC_CACR1_FMCS_Msk         (0xeUL)
 #define R_CAC_CACR1_CACREFE_Pos      (0UL)
 #define R_CAC_CACR1_CACREFE_Msk      (0x1UL)
/* =========================================================  CACR2  ========================================================= */
 #define R_CAC_CACR2_DFS_Pos          (6UL)
 #define R_CAC_CACR2_DFS_Msk          (0xc0UL)
 #define R_CAC_CACR2_RCDS_Pos         (4UL)
 #define R_CAC_CACR2_RCDS_Msk         (0x30UL)
 #define R_CAC_CACR2_RSCS_Pos         (1UL)
 #define R_CAC_CACR2_RSCS_Msk         (0xeUL)
 #define R_CAC_CACR2_RPS_Pos          (0UL)
 #define R_CAC_CACR2_RPS_Msk          (0x1UL)
/* =========================================================  CAICR  ========================================================= */
 #define R_CAC_CAICR_OVFFCL_Pos       (6UL)
 #define R_CAC_CAICR_OVFFCL_Msk       (0x40UL)
 #define R_CAC_CAICR_MENDFCL_Pos      (5UL)
 #define R_CAC_CAICR_MENDFCL_Msk      (0x20UL)
 #define R_CAC_CAICR_FERRFCL_Pos      (4UL)
 #define R_CAC_CAICR_FERRFCL_Msk      (0x10UL)
 #define R_CAC_CAICR_OVFIE_Pos        (2UL)
 #define R_CAC_CAICR_OVFIE_Msk        (0x4UL)
 #define R_CAC_CAICR_MENDIE_Pos       (1UL)
 #define R_CAC_CAICR_MENDIE_Msk       (0x2UL)
 #define R_CAC_CAICR_FERRIE_Pos       (0UL)
 #define R_CAC_CAICR_FERRIE_Msk       (0x1UL)
/* =========================================================  CASTR  ========================================================= */
 #define R_CAC_CASTR_OVFF_Pos         (2UL)
 #define R_CAC_CASTR_OVFF_Msk         (0x4UL)
 #define R_CAC_CASTR_MENDF_Pos        (1UL)
 #define R_CAC_CASTR_MENDF_Msk        (0x2UL)
 #define R_CAC_CASTR_FERRF_Pos        (0UL)
 #define R_CAC_CASTR_FERRF_Msk        (0x1UL)
/* ========================================================  CAULVR  ========================================================= */
 #define R_CAC_CAULVR_CAULVR_Pos      (0UL)
 #define R_CAC_CAULVR_CAULVR_Msk      (0xffffUL)
/* ========================================================  CALLVR  ========================================================= */
 #define R_CAC_CALLVR_CALLVR_Pos      (0UL)
 #define R_CAC_CALLVR_CALLVR_Msk      (0xffffUL)
/* ========================================================  CACNTBR  ======================================================== */
 #define R_CAC_CACNTBR_CACNTBR_Pos    (0UL)
 #define R_CAC_CACNTBR_CACNTBR_Msk    (0xffffUL)

/* =========================================================================================================================== */
/* ================                                          R_CAN0                                           ================ */
/* =========================================================================================================================== */

/* ==========================================================  MKR  ========================================================== */
 #define R_CAN0_MKR_SID_Pos              (18UL)
 #define R_CAN0_MKR_SID_Msk              (0x1ffc0000UL)
 #define R_CAN0_MKR_EID_Pos              (0UL)
 #define R_CAN0_MKR_EID_Msk              (0x3ffffUL)
/* =========================================================  FIDCR  ========================================================= */
 #define R_CAN0_FIDCR_IDE_Pos            (31UL)
 #define R_CAN0_FIDCR_IDE_Msk            (0x80000000UL)
 #define R_CAN0_FIDCR_RTR_Pos            (30UL)
 #define R_CAN0_FIDCR_RTR_Msk            (0x40000000UL)
 #define R_CAN0_FIDCR_SID_Pos            (18UL)
 #define R_CAN0_FIDCR_SID_Msk            (0x1ffc0000UL)
 #define R_CAN0_FIDCR_EID_Pos            (0UL)
 #define R_CAN0_FIDCR_EID_Msk            (0x3ffffUL)
/* ========================================================  MKIVLR  ========================================================= */
 #define R_CAN0_MKIVLR_MB31_Pos          (31UL)
 #define R_CAN0_MKIVLR_MB31_Msk          (0x80000000UL)
 #define R_CAN0_MKIVLR_MB30_Pos          (30UL)
 #define R_CAN0_MKIVLR_MB30_Msk          (0x40000000UL)
 #define R_CAN0_MKIVLR_MB29_Pos          (29UL)
 #define R_CAN0_MKIVLR_MB29_Msk          (0x20000000UL)
 #define R_CAN0_MKIVLR_MB28_Pos          (28UL)
 #define R_CAN0_MKIVLR_MB28_Msk          (0x10000000UL)
 #define R_CAN0_MKIVLR_MB27_Pos          (27UL)
 #define R_CAN0_MKIVLR_MB27_Msk          (0x8000000UL)
 #define R_CAN0_MKIVLR_MB26_Pos          (26UL)
 #define R_CAN0_MKIVLR_MB26_Msk          (0x4000000UL)
 #define R_CAN0_MKIVLR_MB25_Pos          (25UL)
 #define R_CAN0_MKIVLR_MB25_Msk          (0x2000000UL)
 #define R_CAN0_MKIVLR_MB24_Pos          (24UL)
 #define R_CAN0_MKIVLR_MB24_Msk          (0x1000000UL)
 #define R_CAN0_MKIVLR_MB23_Pos          (23UL)
 #define R_CAN0_MKIVLR_MB23_Msk          (0x800000UL)
 #define R_CAN0_MKIVLR_MB22_Pos          (22UL)
 #define R_CAN0_MKIVLR_MB22_Msk          (0x400000UL)
 #define R_CAN0_MKIVLR_MB21_Pos          (21UL)
 #define R_CAN0_MKIVLR_MB21_Msk          (0x200000UL)
 #define R_CAN0_MKIVLR_MB20_Pos          (20UL)
 #define R_CAN0_MKIVLR_MB20_Msk          (0x100000UL)
 #define R_CAN0_MKIVLR_MB19_Pos          (19UL)
 #define R_CAN0_MKIVLR_MB19_Msk          (0x80000UL)
 #define R_CAN0_MKIVLR_MB18_Pos          (18UL)
 #define R_CAN0_MKIVLR_MB18_Msk          (0x40000UL)
 #define R_CAN0_MKIVLR_MB17_Pos          (17UL)
 #define R_CAN0_MKIVLR_MB17_Msk          (0x20000UL)
 #define R_CAN0_MKIVLR_MB16_Pos          (16UL)
 #define R_CAN0_MKIVLR_MB16_Msk          (0x10000UL)
 #define R_CAN0_MKIVLR_MB15_Pos          (15UL)
 #define R_CAN0_MKIVLR_MB15_Msk          (0x8000UL)
 #define R_CAN0_MKIVLR_MB14_Pos          (14UL)
 #define R_CAN0_MKIVLR_MB14_Msk          (0x4000UL)
 #define R_CAN0_MKIVLR_MB13_Pos          (13UL)
 #define R_CAN0_MKIVLR_MB13_Msk          (0x2000UL)
 #define R_CAN0_MKIVLR_MB12_Pos          (12UL)
 #define R_CAN0_MKIVLR_MB12_Msk          (0x1000UL)
 #define R_CAN0_MKIVLR_MB11_Pos          (11UL)
 #define R_CAN0_MKIVLR_MB11_Msk          (0x800UL)
 #define R_CAN0_MKIVLR_MB10_Pos          (10UL)
 #define R_CAN0_MKIVLR_MB10_Msk          (0x400UL)
 #define R_CAN0_MKIVLR_MB9_Pos           (9UL)
 #define R_CAN0_MKIVLR_MB9_Msk           (0x200UL)
 #define R_CAN0_MKIVLR_MB8_Pos           (8UL)
 #define R_CAN0_MKIVLR_MB8_Msk           (0x100UL)
 #define R_CAN0_MKIVLR_MB7_Pos           (7UL)
 #define R_CAN0_MKIVLR_MB7_Msk           (0x80UL)
 #define R_CAN0_MKIVLR_MB6_Pos           (6UL)
 #define R_CAN0_MKIVLR_MB6_Msk           (0x40UL)
 #define R_CAN0_MKIVLR_MB5_Pos           (5UL)
 #define R_CAN0_MKIVLR_MB5_Msk           (0x20UL)
 #define R_CAN0_MKIVLR_MB4_Pos           (4UL)
 #define R_CAN0_MKIVLR_MB4_Msk           (0x10UL)
 #define R_CAN0_MKIVLR_MB3_Pos           (3UL)
 #define R_CAN0_MKIVLR_MB3_Msk           (0x8UL)
 #define R_CAN0_MKIVLR_MB2_Pos           (2UL)
 #define R_CAN0_MKIVLR_MB2_Msk           (0x4UL)
 #define R_CAN0_MKIVLR_MB1_Pos           (1UL)
 #define R_CAN0_MKIVLR_MB1_Msk           (0x2UL)
 #define R_CAN0_MKIVLR_MB0_Pos           (0UL)
 #define R_CAN0_MKIVLR_MB0_Msk           (0x1UL)
/* =========================================================  MIER  ========================================================== */
 #define R_CAN0_MIER_MB31_Pos            (31UL)
 #define R_CAN0_MIER_MB31_Msk            (0x80000000UL)
 #define R_CAN0_MIER_MB30_Pos            (30UL)
 #define R_CAN0_MIER_MB30_Msk            (0x40000000UL)
 #define R_CAN0_MIER_MB29_Pos            (29UL)
 #define R_CAN0_MIER_MB29_Msk            (0x20000000UL)
 #define R_CAN0_MIER_MB28_Pos            (28UL)
 #define R_CAN0_MIER_MB28_Msk            (0x10000000UL)
 #define R_CAN0_MIER_MB27_Pos            (27UL)
 #define R_CAN0_MIER_MB27_Msk            (0x8000000UL)
 #define R_CAN0_MIER_MB26_Pos            (26UL)
 #define R_CAN0_MIER_MB26_Msk            (0x4000000UL)
 #define R_CAN0_MIER_MB25_Pos            (25UL)
 #define R_CAN0_MIER_MB25_Msk            (0x2000000UL)
 #define R_CAN0_MIER_MB24_Pos            (24UL)
 #define R_CAN0_MIER_MB24_Msk            (0x1000000UL)
 #define R_CAN0_MIER_MB23_Pos            (23UL)
 #define R_CAN0_MIER_MB23_Msk            (0x800000UL)
 #define R_CAN0_MIER_MB22_Pos            (22UL)
 #define R_CAN0_MIER_MB22_Msk            (0x400000UL)
 #define R_CAN0_MIER_MB21_Pos            (21UL)
 #define R_CAN0_MIER_MB21_Msk            (0x200000UL)
 #define R_CAN0_MIER_MB20_Pos            (20UL)
 #define R_CAN0_MIER_MB20_Msk            (0x100000UL)
 #define R_CAN0_MIER_MB19_Pos            (19UL)
 #define R_CAN0_MIER_MB19_Msk            (0x80000UL)
 #define R_CAN0_MIER_MB18_Pos            (18UL)
 #define R_CAN0_MIER_MB18_Msk            (0x40000UL)
 #define R_CAN0_MIER_MB17_Pos            (17UL)
 #define R_CAN0_MIER_MB17_Msk            (0x20000UL)
 #define R_CAN0_MIER_MB16_Pos            (16UL)
 #define R_CAN0_MIER_MB16_Msk            (0x10000UL)
 #define R_CAN0_MIER_MB15_Pos            (15UL)
 #define R_CAN0_MIER_MB15_Msk            (0x8000UL)
 #define R_CAN0_MIER_MB14_Pos            (14UL)
 #define R_CAN0_MIER_MB14_Msk            (0x4000UL)
 #define R_CAN0_MIER_MB13_Pos            (13UL)
 #define R_CAN0_MIER_MB13_Msk            (0x2000UL)
 #define R_CAN0_MIER_MB12_Pos            (12UL)
 #define R_CAN0_MIER_MB12_Msk            (0x1000UL)
 #define R_CAN0_MIER_MB11_Pos            (11UL)
 #define R_CAN0_MIER_MB11_Msk            (0x800UL)
 #define R_CAN0_MIER_MB10_Pos            (10UL)
 #define R_CAN0_MIER_MB10_Msk            (0x400UL)
 #define R_CAN0_MIER_MB9_Pos             (9UL)
 #define R_CAN0_MIER_MB9_Msk             (0x200UL)
 #define R_CAN0_MIER_MB8_Pos             (8UL)
 #define R_CAN0_MIER_MB8_Msk             (0x100UL)
 #define R_CAN0_MIER_MB7_Pos             (7UL)
 #define R_CAN0_MIER_MB7_Msk             (0x80UL)
 #define R_CAN0_MIER_MB6_Pos             (6UL)
 #define R_CAN0_MIER_MB6_Msk             (0x40UL)
 #define R_CAN0_MIER_MB5_Pos             (5UL)
 #define R_CAN0_MIER_MB5_Msk             (0x20UL)
 #define R_CAN0_MIER_MB4_Pos             (4UL)
 #define R_CAN0_MIER_MB4_Msk             (0x10UL)
 #define R_CAN0_MIER_MB3_Pos             (3UL)
 #define R_CAN0_MIER_MB3_Msk             (0x8UL)
 #define R_CAN0_MIER_MB2_Pos             (2UL)
 #define R_CAN0_MIER_MB2_Msk             (0x4UL)
 #define R_CAN0_MIER_MB1_Pos             (1UL)
 #define R_CAN0_MIER_MB1_Msk             (0x2UL)
 #define R_CAN0_MIER_MB0_Pos             (0UL)
 #define R_CAN0_MIER_MB0_Msk             (0x1UL)
/* =======================================================  MIER_FIFO  ======================================================= */
 #define R_CAN0_MIER_FIFO_MB29_Pos       (29UL)
 #define R_CAN0_MIER_FIFO_MB29_Msk       (0x20000000UL)
 #define R_CAN0_MIER_FIFO_MB28_Pos       (28UL)
 #define R_CAN0_MIER_FIFO_MB28_Msk       (0x10000000UL)
 #define R_CAN0_MIER_FIFO_MB25_Pos       (25UL)
 #define R_CAN0_MIER_FIFO_MB25_Msk       (0x2000000UL)
 #define R_CAN0_MIER_FIFO_MB24_Pos       (24UL)
 #define R_CAN0_MIER_FIFO_MB24_Msk       (0x1000000UL)
 #define R_CAN0_MIER_FIFO_MB23_Pos       (23UL)
 #define R_CAN0_MIER_FIFO_MB23_Msk       (0x800000UL)
 #define R_CAN0_MIER_FIFO_MB22_Pos       (22UL)
 #define R_CAN0_MIER_FIFO_MB22_Msk       (0x400000UL)
 #define R_CAN0_MIER_FIFO_MB21_Pos       (21UL)
 #define R_CAN0_MIER_FIFO_MB21_Msk       (0x200000UL)
 #define R_CAN0_MIER_FIFO_MB20_Pos       (20UL)
 #define R_CAN0_MIER_FIFO_MB20_Msk       (0x100000UL)
 #define R_CAN0_MIER_FIFO_MB19_Pos       (19UL)
 #define R_CAN0_MIER_FIFO_MB19_Msk       (0x80000UL)
 #define R_CAN0_MIER_FIFO_MB18_Pos       (18UL)
 #define R_CAN0_MIER_FIFO_MB18_Msk       (0x40000UL)
 #define R_CAN0_MIER_FIFO_MB17_Pos       (17UL)
 #define R_CAN0_MIER_FIFO_MB17_Msk       (0x20000UL)
 #define R_CAN0_MIER_FIFO_MB16_Pos       (16UL)
 #define R_CAN0_MIER_FIFO_MB16_Msk       (0x10000UL)
 #define R_CAN0_MIER_FIFO_MB15_Pos       (15UL)
 #define R_CAN0_MIER_FIFO_MB15_Msk       (0x8000UL)
 #define R_CAN0_MIER_FIFO_MB14_Pos       (14UL)
 #define R_CAN0_MIER_FIFO_MB14_Msk       (0x4000UL)
 #define R_CAN0_MIER_FIFO_MB13_Pos       (13UL)
 #define R_CAN0_MIER_FIFO_MB13_Msk       (0x2000UL)
 #define R_CAN0_MIER_FIFO_MB12_Pos       (12UL)
 #define R_CAN0_MIER_FIFO_MB12_Msk       (0x1000UL)
 #define R_CAN0_MIER_FIFO_MB11_Pos       (11UL)
 #define R_CAN0_MIER_FIFO_MB11_Msk       (0x800UL)
 #define R_CAN0_MIER_FIFO_MB10_Pos       (10UL)
 #define R_CAN0_MIER_FIFO_MB10_Msk       (0x400UL)
 #define R_CAN0_MIER_FIFO_MB9_Pos        (9UL)
 #define R_CAN0_MIER_FIFO_MB9_Msk        (0x200UL)
 #define R_CAN0_MIER_FIFO_MB8_Pos        (8UL)
 #define R_CAN0_MIER_FIFO_MB8_Msk        (0x100UL)
 #define R_CAN0_MIER_FIFO_MB7_Pos        (7UL)
 #define R_CAN0_MIER_FIFO_MB7_Msk        (0x80UL)
 #define R_CAN0_MIER_FIFO_MB6_Pos        (6UL)
 #define R_CAN0_MIER_FIFO_MB6_Msk        (0x40UL)
 #define R_CAN0_MIER_FIFO_MB5_Pos        (5UL)
 #define R_CAN0_MIER_FIFO_MB5_Msk        (0x20UL)
 #define R_CAN0_MIER_FIFO_MB4_Pos        (4UL)
 #define R_CAN0_MIER_FIFO_MB4_Msk        (0x10UL)
 #define R_CAN0_MIER_FIFO_MB3_Pos        (3UL)
 #define R_CAN0_MIER_FIFO_MB3_Msk        (0x8UL)
 #define R_CAN0_MIER_FIFO_MB2_Pos        (2UL)
 #define R_CAN0_MIER_FIFO_MB2_Msk        (0x4UL)
 #define R_CAN0_MIER_FIFO_MB1_Pos        (1UL)
 #define R_CAN0_MIER_FIFO_MB1_Msk        (0x2UL)
 #define R_CAN0_MIER_FIFO_MB0_Pos        (0UL)
 #define R_CAN0_MIER_FIFO_MB0_Msk        (0x1UL)
/* ========================================================  MCTL_TX  ======================================================== */
 #define R_CAN0_MCTL_TX_TRMREQ_Pos       (7UL)
 #define R_CAN0_MCTL_TX_TRMREQ_Msk       (0x80UL)
 #define R_CAN0_MCTL_TX_RECREQ_Pos       (6UL)
 #define R_CAN0_MCTL_TX_RECREQ_Msk       (0x40UL)
 #define R_CAN0_MCTL_TX_ONESHOT_Pos      (4UL)
 #define R_CAN0_MCTL_TX_ONESHOT_Msk      (0x10UL)
 #define R_CAN0_MCTL_TX_TRMABT_Pos       (2UL)
 #define R_CAN0_MCTL_TX_TRMABT_Msk       (0x4UL)
 #define R_CAN0_MCTL_TX_TRMACTIVE_Pos    (1UL)
 #define R_CAN0_MCTL_TX_TRMACTIVE_Msk    (0x2UL)
 #define R_CAN0_MCTL_TX_SENTDATA_Pos     (0UL)
 #define R_CAN0_MCTL_TX_SENTDATA_Msk     (0x1UL)
/* ========================================================  MCTL_RX  ======================================================== */
 #define R_CAN0_MCTL_RX_TRMREQ_Pos       (7UL)
 #define R_CAN0_MCTL_RX_TRMREQ_Msk       (0x80UL)
 #define R_CAN0_MCTL_RX_RECREQ_Pos       (6UL)
 #define R_CAN0_MCTL_RX_RECREQ_Msk       (0x40UL)
 #define R_CAN0_MCTL_RX_ONESHOT_Pos      (4UL)
 #define R_CAN0_MCTL_RX_ONESHOT_Msk      (0x10UL)
 #define R_CAN0_MCTL_RX_MSGLOST_Pos      (2UL)
 #define R_CAN0_MCTL_RX_MSGLOST_Msk      (0x4UL)
 #define R_CAN0_MCTL_RX_INVALDATA_Pos    (1UL)
 #define R_CAN0_MCTL_RX_INVALDATA_Msk    (0x2UL)
 #define R_CAN0_MCTL_RX_NEWDATA_Pos      (0UL)
 #define R_CAN0_MCTL_RX_NEWDATA_Msk      (0x1UL)
/* =========================================================  CTLR  ========================================================== */
 #define R_CAN0_CTLR_RBOC_Pos            (13UL)
 #define R_CAN0_CTLR_RBOC_Msk            (0x2000UL)
 #define R_CAN0_CTLR_BOM_Pos             (11UL)
 #define R_CAN0_CTLR_BOM_Msk             (0x1800UL)
 #define R_CAN0_CTLR_SLPM_Pos            (10UL)
 #define R_CAN0_CTLR_SLPM_Msk            (0x400UL)
 #define R_CAN0_CTLR_CANM_Pos            (8UL)
 #define R_CAN0_CTLR_CANM_Msk            (0x300UL)
 #define R_CAN0_CTLR_TSPS_Pos            (6UL)
 #define R_CAN0_CTLR_TSPS_Msk            (0xc0UL)
 #define R_CAN0_CTLR_TSRC_Pos            (5UL)
 #define R_CAN0_CTLR_TSRC_Msk            (0x20UL)
 #define R_CAN0_CTLR_TPM_Pos             (4UL)
 #define R_CAN0_CTLR_TPM_Msk             (0x10UL)
 #define R_CAN0_CTLR_MLM_Pos             (3UL)
 #define R_CAN0_CTLR_MLM_Msk             (0x8UL)
 #define R_CAN0_CTLR_IDFM_Pos            (1UL)
 #define R_CAN0_CTLR_IDFM_Msk            (0x6UL)
 #define R_CAN0_CTLR_MBM_Pos             (0UL)
 #define R_CAN0_CTLR_MBM_Msk             (0x1UL)
/* ==========================================================  STR  ========================================================== */
 #define R_CAN0_STR_RECST_Pos            (14UL)
 #define R_CAN0_STR_RECST_Msk            (0x4000UL)
 #define R_CAN0_STR_TRMST_Pos            (13UL)
 #define R_CAN0_STR_TRMST_Msk            (0x2000UL)
 #define R_CAN0_STR_BOST_Pos             (12UL)
 #define R_CAN0_STR_BOST_Msk             (0x1000UL)
 #define R_CAN0_STR_EPST_Pos             (11UL)
 #define R_CAN0_STR_EPST_Msk             (0x800UL)
 #define R_CAN0_STR_SLPST_Pos            (10UL)
 #define R_CAN0_STR_SLPST_Msk            (0x400UL)
 #define R_CAN0_STR_HLTST_Pos            (9UL)
 #define R_CAN0_STR_HLTST_Msk            (0x200UL)
 #define R_CAN0_STR_RSTST_Pos            (8UL)
 #define R_CAN0_STR_RSTST_Msk            (0x100UL)
 #define R_CAN0_STR_EST_Pos              (7UL)
 #define R_CAN0_STR_EST_Msk              (0x80UL)
 #define R_CAN0_STR_TABST_Pos            (6UL)
 #define R_CAN0_STR_TABST_Msk            (0x40UL)
 #define R_CAN0_STR_FMLST_Pos            (5UL)
 #define R_CAN0_STR_FMLST_Msk            (0x20UL)
 #define R_CAN0_STR_NMLST_Pos            (4UL)
 #define R_CAN0_STR_NMLST_Msk            (0x10UL)
 #define R_CAN0_STR_TFST_Pos             (3UL)
 #define R_CAN0_STR_TFST_Msk             (0x8UL)
 #define R_CAN0_STR_RFST_Pos             (2UL)
 #define R_CAN0_STR_RFST_Msk             (0x4UL)
 #define R_CAN0_STR_SDST_Pos             (1UL)
 #define R_CAN0_STR_SDST_Msk             (0x2UL)
 #define R_CAN0_STR_NDST_Pos             (0UL)
 #define R_CAN0_STR_NDST_Msk             (0x1UL)
/* ==========================================================  BCR  ========================================================== */
 #define R_CAN0_BCR_TSEG1_Pos            (28UL)
 #define R_CAN0_BCR_TSEG1_Msk            (0xf0000000UL)
 #define R_CAN0_BCR_BRP_Pos              (16UL)
 #define R_CAN0_BCR_BRP_Msk              (0x3ff0000UL)
 #define R_CAN0_BCR_SJW_Pos              (12UL)
 #define R_CAN0_BCR_SJW_Msk              (0x3000UL)
 #define R_CAN0_BCR_TSEG2_Pos            (8UL)
 #define R_CAN0_BCR_TSEG2_Msk            (0x700UL)
 #define R_CAN0_BCR_CCLKS_Pos            (0UL)
 #define R_CAN0_BCR_CCLKS_Msk            (0x1UL)
/* =========================================================  RFCR  ========================================================== */
 #define R_CAN0_RFCR_RFEST_Pos           (7UL)
 #define R_CAN0_RFCR_RFEST_Msk           (0x80UL)
 #define R_CAN0_RFCR_RFWST_Pos           (6UL)
 #define R_CAN0_RFCR_RFWST_Msk           (0x40UL)
 #define R_CAN0_RFCR_RFFST_Pos           (5UL)
 #define R_CAN0_RFCR_RFFST_Msk           (0x20UL)
 #define R_CAN0_RFCR_RFMLF_Pos           (4UL)
 #define R_CAN0_RFCR_RFMLF_Msk           (0x10UL)
 #define R_CAN0_RFCR_RFUST_Pos           (1UL)
 #define R_CAN0_RFCR_RFUST_Msk           (0xeUL)
 #define R_CAN0_RFCR_RFE_Pos             (0UL)
 #define R_CAN0_RFCR_RFE_Msk             (0x1UL)
/* =========================================================  RFPCR  ========================================================= */
 #define R_CAN0_RFPCR_RFPCR_Pos          (0UL)
 #define R_CAN0_RFPCR_RFPCR_Msk          (0xffUL)
/* =========================================================  TFCR  ========================================================== */
 #define R_CAN0_TFCR_TFEST_Pos           (7UL)
 #define R_CAN0_TFCR_TFEST_Msk           (0x80UL)
 #define R_CAN0_TFCR_TFFST_Pos           (6UL)
 #define R_CAN0_TFCR_TFFST_Msk           (0x40UL)
 #define R_CAN0_TFCR_TFUST_Pos           (1UL)
 #define R_CAN0_TFCR_TFUST_Msk           (0xeUL)
 #define R_CAN0_TFCR_TFE_Pos             (0UL)
 #define R_CAN0_TFCR_TFE_Msk             (0x1UL)
/* =========================================================  TFPCR  ========================================================= */
 #define R_CAN0_TFPCR_TFPCR_Pos          (0UL)
 #define R_CAN0_TFPCR_TFPCR_Msk          (0xffUL)
/* =========================================================  EIER  ========================================================== */
 #define R_CAN0_EIER_BLIE_Pos            (7UL)
 #define R_CAN0_EIER_BLIE_Msk            (0x80UL)
 #define R_CAN0_EIER_OLIE_Pos            (6UL)
 #define R_CAN0_EIER_OLIE_Msk            (0x40UL)
 #define R_CAN0_EIER_ORIE_Pos            (5UL)
 #define R_CAN0_EIER_ORIE_Msk            (0x20UL)
 #define R_CAN0_EIER_BORIE_Pos           (4UL)
 #define R_CAN0_EIER_BORIE_Msk           (0x10UL)
 #define R_CAN0_EIER_BOEIE_Pos           (3UL)
 #define R_CAN0_EIER_BOEIE_Msk           (0x8UL)
 #define R_CAN0_EIER_EPIE_Pos            (2UL)
 #define R_CAN0_EIER_EPIE_Msk            (0x4UL)
 #define R_CAN0_EIER_EWIE_Pos            (1UL)
 #define R_CAN0_EIER_EWIE_Msk            (0x2UL)
 #define R_CAN0_EIER_BEIE_Pos            (0UL)
 #define R_CAN0_EIER_BEIE_Msk            (0x1UL)
/* =========================================================  EIFR  ========================================================== */
 #define R_CAN0_EIFR_BLIF_Pos            (7UL)
 #define R_CAN0_EIFR_BLIF_Msk            (0x80UL)
 #define R_CAN0_EIFR_OLIF_Pos            (6UL)
 #define R_CAN0_EIFR_OLIF_Msk            (0x40UL)
 #define R_CAN0_EIFR_ORIF_Pos            (5UL)
 #define R_CAN0_EIFR_ORIF_Msk            (0x20UL)
 #define R_CAN0_EIFR_BORIF_Pos           (4UL)
 #define R_CAN0_EIFR_BORIF_Msk           (0x10UL)
 #define R_CAN0_EIFR_BOEIF_Pos           (3UL)
 #define R_CAN0_EIFR_BOEIF_Msk           (0x8UL)
 #define R_CAN0_EIFR_EPIF_Pos            (2UL)
 #define R_CAN0_EIFR_EPIF_Msk            (0x4UL)
 #define R_CAN0_EIFR_EWIF_Pos            (1UL)
 #define R_CAN0_EIFR_EWIF_Msk            (0x2UL)
 #define R_CAN0_EIFR_BEIF_Pos            (0UL)
 #define R_CAN0_EIFR_BEIF_Msk            (0x1UL)
/* =========================================================  RECR  ========================================================== */
 #define R_CAN0_RECR_RECR_Pos            (0UL)
 #define R_CAN0_RECR_RECR_Msk            (0xffUL)
/* =========================================================  TECR  ========================================================== */
 #define R_CAN0_TECR_TECR_Pos            (0UL)
 #define R_CAN0_TECR_TECR_Msk            (0xffUL)
/* =========================================================  ECSR  ========================================================== */
 #define R_CAN0_ECSR_EDPM_Pos            (7UL)
 #define R_CAN0_ECSR_EDPM_Msk            (0x80UL)
 #define R_CAN0_ECSR_ADEF_Pos            (6UL)
 #define R_CAN0_ECSR_ADEF_Msk            (0x40UL)
 #define R_CAN0_ECSR_BE0F_Pos            (5UL)
 #define R_CAN0_ECSR_BE0F_Msk            (0x20UL)
 #define R_CAN0_ECSR_BE1F_Pos            (4UL)
 #define R_CAN0_ECSR_BE1F_Msk            (0x10UL)
 #define R_CAN0_ECSR_CEF_Pos             (3UL)
 #define R_CAN0_ECSR_CEF_Msk             (0x8UL)
 #define R_CAN0_ECSR_AEF_Pos             (2UL)
 #define R_CAN0_ECSR_AEF_Msk             (0x4UL)
 #define R_CAN0_ECSR_FEF_Pos             (1UL)
 #define R_CAN0_ECSR_FEF_Msk             (0x2UL)
 #define R_CAN0_ECSR_SEF_Pos             (0UL)
 #define R_CAN0_ECSR_SEF_Msk             (0x1UL)
/* =========================================================  CSSR  ========================================================== */
 #define R_CAN0_CSSR_CSSR_Pos            (0UL)
 #define R_CAN0_CSSR_CSSR_Msk            (0xffUL)
/* =========================================================  MSSR  ========================================================== */
 #define R_CAN0_MSSR_SEST_Pos            (7UL)
 #define R_CAN0_MSSR_SEST_Msk            (0x80UL)
 #define R_CAN0_MSSR_MBNST_Pos           (0UL)
 #define R_CAN0_MSSR_MBNST_Msk           (0x1fUL)
/* =========================================================  MSMR  ========================================================== */
 #define R_CAN0_MSMR_MBSM_Pos            (0UL)
 #define R_CAN0_MSMR_MBSM_Msk            (0x3UL)
/* ==========================================================  TSR  ========================================================== */
 #define R_CAN0_TSR_TSR_Pos              (0UL)
 #define R_CAN0_TSR_TSR_Msk              (0xffffUL)
/* =========================================================  AFSR  ========================================================== */
 #define R_CAN0_AFSR_AFSR_Pos            (0UL)
 #define R_CAN0_AFSR_AFSR_Msk            (0xffffUL)
/* ==========================================================  TCR  ========================================================== */
 #define R_CAN0_TCR_TSTM_Pos             (1UL)
 #define R_CAN0_TCR_TSTM_Msk             (0x6UL)
 #define R_CAN0_TCR_TSTE_Pos             (0UL)
 #define R_CAN0_TCR_TSTE_Msk             (0x1UL)

/* =========================================================================================================================== */
/* ================                                           R_CRC                                           ================ */
/* =========================================================================================================================== */

/* ========================================================  CRCCR0  ========================================================= */
 #define R_CRC_CRCCR0_DORCLR_Pos          (7UL)
 #define R_CRC_CRCCR0_DORCLR_Msk          (0x80UL)
 #define R_CRC_CRCCR0_LMS_Pos             (6UL)
 #define R_CRC_CRCCR0_LMS_Msk             (0x40UL)
 #define R_CRC_CRCCR0_GPS_Pos             (0UL)
 #define R_CRC_CRCCR0_GPS_Msk             (0x7UL)
/* ========================================================  CRCCR1  ========================================================= */
 #define R_CRC_CRCCR1_CRCSEN_Pos          (7UL)
 #define R_CRC_CRCCR1_CRCSEN_Msk          (0x80UL)
 #define R_CRC_CRCCR1_CRCSWR_Pos          (6UL)
 #define R_CRC_CRCCR1_CRCSWR_Msk          (0x40UL)
/* ========================================================  CRCDIR  ========================================================= */
 #define R_CRC_CRCDIR_CRCDIR_Pos          (0UL)
 #define R_CRC_CRCDIR_CRCDIR_Msk          (0xffffffffUL)
/* =======================================================  CRCDIR_BY  ======================================================= */
 #define R_CRC_CRCDIR_BY_CRCDIR_BY_Pos    (0UL)
 #define R_CRC_CRCDIR_BY_CRCDIR_BY_Msk    (0xffUL)
/* ========================================================  CRCDOR  ========================================================= */
 #define R_CRC_CRCDOR_CRCDOR_Pos          (0UL)
 #define R_CRC_CRCDOR_CRCDOR_Msk          (0xffffffffUL)
/* =======================================================  CRCDOR_HA  ======================================================= */
 #define R_CRC_CRCDOR_HA_CRCDOR_HA_Pos    (0UL)
 #define R_CRC_CRCDOR_HA_CRCDOR_HA_Msk    (0xffffUL)
/* =======================================================  CRCDOR_BY  ======================================================= */
 #define R_CRC_CRCDOR_BY_CRCDOR_BY_Pos    (0UL)
 #define R_CRC_CRCDOR_BY_CRCDOR_BY_Msk    (0xffUL)
/* ========================================================  CRCSAR  ========================================================= */
 #define R_CRC_CRCSAR_CRCSA_Pos           (0UL)
 #define R_CRC_CRCSAR_CRCSA_Msk           (0x3fffUL)

/* =========================================================================================================================== */
/* ================                                          R_CTSU                                           ================ */
/* =========================================================================================================================== */

/* ========================================================  CTSUCR0  ======================================================== */
 #define R_CTSU_CTSUCR0_CTSUTXVSEL_Pos       (7UL)
 #define R_CTSU_CTSUCR0_CTSUTXVSEL_Msk       (0x80UL)
 #define R_CTSU_CTSUCR0_CTSUINIT_Pos         (4UL)
 #define R_CTSU_CTSUCR0_CTSUINIT_Msk         (0x10UL)
 #define R_CTSU_CTSUCR0_CTSUIOC_Pos          (3UL)
 #define R_CTSU_CTSUCR0_CTSUIOC_Msk          (0x8UL)
 #define R_CTSU_CTSUCR0_CTSUSNZ_Pos          (2UL)
 #define R_CTSU_CTSUCR0_CTSUSNZ_Msk          (0x4UL)
 #define R_CTSU_CTSUCR0_CTSUCAP_Pos          (1UL)
 #define R_CTSU_CTSUCR0_CTSUCAP_Msk          (0x2UL)
 #define R_CTSU_CTSUCR0_CTSUSTRT_Pos         (0UL)
 #define R_CTSU_CTSUCR0_CTSUSTRT_Msk         (0x1UL)
/* ========================================================  CTSUCR1  ======================================================== */
 #define R_CTSU_CTSUCR1_CTSUMD_Pos           (6UL)
 #define R_CTSU_CTSUCR1_CTSUMD_Msk           (0xc0UL)
 #define R_CTSU_CTSUCR1_CTSUCLK_Pos          (4UL)
 #define R_CTSU_CTSUCR1_CTSUCLK_Msk          (0x30UL)
 #define R_CTSU_CTSUCR1_CTSUATUNE1_Pos       (3UL)
 #define R_CTSU_CTSUCR1_CTSUATUNE1_Msk       (0x8UL)
 #define R_CTSU_CTSUCR1_CTSUATUNE0_Pos       (2UL)
 #define R_CTSU_CTSUCR1_CTSUATUNE0_Msk       (0x4UL)
 #define R_CTSU_CTSUCR1_CTSUCSW_Pos          (1UL)
 #define R_CTSU_CTSUCR1_CTSUCSW_Msk          (0x2UL)
 #define R_CTSU_CTSUCR1_CTSUPON_Pos          (0UL)
 #define R_CTSU_CTSUCR1_CTSUPON_Msk          (0x1UL)
/* =======================================================  CTSUSDPRS  ======================================================= */
 #define R_CTSU_CTSUSDPRS_CTSUSOFF_Pos       (6UL)
 #define R_CTSU_CTSUSDPRS_CTSUSOFF_Msk       (0x40UL)
 #define R_CTSU_CTSUSDPRS_CTSUPRMODE_Pos     (4UL)
 #define R_CTSU_CTSUSDPRS_CTSUPRMODE_Msk     (0x30UL)
 #define R_CTSU_CTSUSDPRS_CTSUPRRATIO_Pos    (0UL)
 #define R_CTSU_CTSUSDPRS_CTSUPRRATIO_Msk    (0xfUL)
/* ========================================================  CTSUSST  ======================================================== */
 #define R_CTSU_CTSUSST_CTSUSST_Pos          (0UL)
 #define R_CTSU_CTSUSST_CTSUSST_Msk          (0xffUL)
/* =======================================================  CTSUMCH0  ======================================================== */
 #define R_CTSU_CTSUMCH0_CTSUMCH0_Pos        (0UL)
 #define R_CTSU_CTSUMCH0_CTSUMCH0_Msk        (0x3fUL)
/* =======================================================  CTSUMCH1  ======================================================== */
 #define R_CTSU_CTSUMCH1_CTSUMCH1_Pos        (0UL)
 #define R_CTSU_CTSUMCH1_CTSUMCH1_Msk        (0x3fUL)
/* =======================================================  CTSUCHAC  ======================================================== */
 #define R_CTSU_CTSUCHAC_TS_Pos              (0UL)
 #define R_CTSU_CTSUCHAC_TS_Msk              (0x1UL)
/* =======================================================  CTSUCHTRC  ======================================================= */
 #define R_CTSU_CTSUCHTRC_TS_Pos             (0UL)
 #define R_CTSU_CTSUCHTRC_TS_Msk             (0x1UL)
/* =======================================================  CTSUDCLKC  ======================================================= */
 #define R_CTSU_CTSUDCLKC_CTSUSSCNT_Pos      (4UL)
 #define R_CTSU_CTSUDCLKC_CTSUSSCNT_Msk      (0x30UL)
 #define R_CTSU_CTSUDCLKC_CTSUSSMOD_Pos      (0UL)
 #define R_CTSU_CTSUDCLKC_CTSUSSMOD_Msk      (0x3UL)
/* ========================================================  CTSUST  ========================================================= */
 #define R_CTSU_CTSUST_CTSUPS_Pos            (7UL)
 #define R_CTSU_CTSUST_CTSUPS_Msk            (0x80UL)
 #define R_CTSU_CTSUST_CTSUROVF_Pos          (6UL)
 #define R_CTSU_CTSUST_CTSUROVF_Msk          (0x40UL)
 #define R_CTSU_CTSUST_CTSUSOVF_Pos          (5UL)
 #define R_CTSU_CTSUST_CTSUSOVF_Msk          (0x20UL)
 #define R_CTSU_CTSUST_CTSUDTSR_Pos          (4UL)
 #define R_CTSU_CTSUST_CTSUDTSR_Msk          (0x10UL)
 #define R_CTSU_CTSUST_CTSUSTC_Pos           (0UL)
 #define R_CTSU_CTSUST_CTSUSTC_Msk           (0x7UL)
/* ========================================================  CTSUSSC  ======================================================== */
 #define R_CTSU_CTSUSSC_CTSUSSDIV_Pos        (8UL)
 #define R_CTSU_CTSUSSC_CTSUSSDIV_Msk        (0xf00UL)
/* ========================================================  CTSUSO0  ======================================================== */
 #define R_CTSU_CTSUSO0_CTSUSNUM_Pos         (10UL)
 #define R_CTSU_CTSUSO0_CTSUSNUM_Msk         (0xfc00UL)
 #define R_CTSU_CTSUSO0_CTSUSO_Pos           (0UL)
 #define R_CTSU_CTSUSO0_CTSUSO_Msk           (0x3ffUL)
/* ========================================================  CTSUSO1  ======================================================== */
 #define R_CTSU_CTSUSO1_CTSUICOG_Pos         (13UL)
 #define R_CTSU_CTSUSO1_CTSUICOG_Msk         (0x6000UL)
 #define R_CTSU_CTSUSO1_CTSUSDPA_Pos         (8UL)
 #define R_CTSU_CTSUSO1_CTSUSDPA_Msk         (0x1f00UL)
 #define R_CTSU_CTSUSO1_CTSURICOA_Pos        (0UL)
 #define R_CTSU_CTSUSO1_CTSURICOA_Msk        (0xffUL)
/* ========================================================  CTSUSC  ========================================================= */
 #define R_CTSU_CTSUSC_CTSUSC_Pos            (0UL)
 #define R_CTSU_CTSUSC_CTSUSC_Msk            (0xffffUL)
/* ========================================================  CTSURC  ========================================================= */
 #define R_CTSU_CTSURC_CTSURC_Pos            (0UL)
 #define R_CTSU_CTSURC_CTSURC_Msk            (0xffffUL)
/* =======================================================  CTSUERRS  ======================================================== */
 #define R_CTSU_CTSUERRS_CTSUICOMP_Pos       (15UL)
 #define R_CTSU_CTSUERRS_CTSUICOMP_Msk       (0x8000UL)
 #define R_CTSU_CTSUERRS_CTSUSPMD_Pos        (0UL)
 #define R_CTSU_CTSUERRS_CTSUSPMD_Msk        (0x3UL)
 #define R_CTSU_CTSUERRS_CTSUTSOD_Pos        (2UL)
 #define R_CTSU_CTSUERRS_CTSUTSOD_Msk        (0x4UL)
 #define R_CTSU_CTSUERRS_CTSUDRV_Pos         (3UL)
 #define R_CTSU_CTSUERRS_CTSUDRV_Msk         (0x8UL)
 #define R_CTSU_CTSUERRS_CTSUCLKSEL1_Pos     (6UL)
 #define R_CTSU_CTSUERRS_CTSUCLKSEL1_Msk     (0x40UL)
 #define R_CTSU_CTSUERRS_CTSUTSOC_Pos        (7UL)
 #define R_CTSU_CTSUERRS_CTSUTSOC_Msk        (0x80UL)
/* =======================================================  CTSUTRMR  ======================================================== */

/* =========================================================================================================================== */
/* ================                                           R_DAC                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  DACR  ========================================================== */
 #define R_DAC_DACR_DAE_Pos            (5UL)
 #define R_DAC_DACR_DAE_Msk            (0x20UL)
 #define R_DAC_DACR_DAOE_Pos           (6UL)
 #define R_DAC_DACR_DAOE_Msk           (0x40UL)
/* =========================================================  DADR  ========================================================== */
 #define R_DAC_DADR_DADR_Pos           (0UL)
 #define R_DAC_DADR_DADR_Msk           (0xffffUL)
/* =========================================================  DADPR  ========================================================= */
 #define R_DAC_DADPR_DPSEL_Pos         (7UL)
 #define R_DAC_DADPR_DPSEL_Msk         (0x80UL)
/* ========================================================  DAADSCR  ======================================================== */
 #define R_DAC_DAADSCR_DAADST_Pos      (7UL)
 #define R_DAC_DAADSCR_DAADST_Msk      (0x80UL)
/* =======================================================  DAVREFCR  ======================================================== */
 #define R_DAC_DAVREFCR_REF_Pos        (0UL)
 #define R_DAC_DAVREFCR_REF_Msk        (0x7UL)
/* =========================================================  DAPC  ========================================================== */
 #define R_DAC_DAPC_PUMPEN_Pos         (0UL)
 #define R_DAC_DAPC_PUMPEN_Msk         (0x1UL)
/* ========================================================  DAAMPCR  ======================================================== */
 #define R_DAC_DAAMPCR_DAAMP_Pos       (6UL)
 #define R_DAC_DAAMPCR_DAAMP_Msk       (0x40UL)
/* ========================================================  DAASWCR  ======================================================== */
 #define R_DAC_DAASWCR_DAASW1_Pos      (7UL)
 #define R_DAC_DAASWCR_DAASW1_Msk      (0x80UL)
 #define R_DAC_DAASWCR_DAASW0_Pos      (6UL)
 #define R_DAC_DAASWCR_DAASW0_Msk      (0x40UL)
/* ========================================================  DAADUSR  ======================================================== */
 #define R_DAC_DAADUSR_AMADSEL0_Pos    (0UL)
 #define R_DAC_DAADUSR_AMADSEL0_Msk    (0x1UL)
 #define R_DAC_DAADUSR_AMADSEL1_Pos    (1UL)
 #define R_DAC_DAADUSR_AMADSEL1_Msk    (0x2UL)

/* =========================================================================================================================== */
/* ================                                          R_DEBUG                                          ================ */
/* =========================================================================================================================== */

/* ========================================================  DBGSTR  ========================================================= */
 #define R_DEBUG_DBGSTR_CDBGPWRUPREQ_Pos        (28UL)
 #define R_DEBUG_DBGSTR_CDBGPWRUPREQ_Msk        (0x10000000UL)
 #define R_DEBUG_DBGSTR_CDBGPWRUPACK_Pos        (29UL)
 #define R_DEBUG_DBGSTR_CDBGPWRUPACK_Msk        (0x20000000UL)
/* =======================================================  DBGSTOPCR  ======================================================= */
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_RPER_Pos     (24UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_RPER_Msk     (0x1000000UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_TIM_Pos      (14UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_TIM_Msk      (0x4000UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_SIR_Pos      (15UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_SIR_Msk      (0x8000UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_LVD_Pos      (16UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_LVD_Msk      (0x10000UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_RECCR_Pos    (25UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_RECCR_Msk    (0x2000000UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_IWDT_Pos     (0UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_IWDT_Msk     (0x1UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_WDT_Pos      (1UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_WDT_Msk      (0x2UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_CPER_Pos     (31UL)
 #define R_DEBUG_DBGSTOPCR_DBGSTOP_CPER_Msk     (0x80000000UL)
/* =======================================================  FSBLSTAT  ======================================================== */
 #define R_DEBUG_FSBLSTAT_CS_Pos                (0UL)
 #define R_DEBUG_FSBLSTAT_CS_Msk                (0x1UL)
 #define R_DEBUG_FSBLSTAT_RS_Pos                (1UL)
 #define R_DEBUG_FSBLSTAT_RS_Msk                (0x2UL)
 #define R_DEBUG_FSBLSTAT_FSBLCLK_Pos           (8UL)
 #define R_DEBUG_FSBLSTAT_FSBLCLK_Msk           (0x700UL)

/* =========================================================================================================================== */
/* ================                                           R_DMA                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  DMAST  ========================================================= */
 #define R_DMA_DMAST_DMST_Pos         (0UL)
 #define R_DMA_DMAST_DMST_Msk         (0x1UL)
/* ========================================================  DMECHR  ========================================================= */
 #define R_DMA_DMECHR_DMECH_Pos       (0UL)
 #define R_DMA_DMECHR_DMECH_Msk       (0x7UL)
 #define R_DMA_DMECHR_DMECHSAM_Pos    (8UL)
 #define R_DMA_DMECHR_DMECHSAM_Msk    (0x100UL)
 #define R_DMA_DMECHR_DMESTA_Pos      (16UL)
 #define R_DMA_DMECHR_DMESTA_Msk      (0x10000UL)
/* =========================================================  DELSR  ========================================================= */
 #define R_DMA_DELSR_IR_Pos           (16UL)
 #define R_DMA_DELSR_IR_Msk           (0x10000UL)
 #define R_DMA_DELSR_DELS_Pos         (0UL)
 #define R_DMA_DELSR_DELS_Msk         (0x1ffUL)

/* =========================================================================================================================== */
/* ================                                          R_DMAC0                                          ================ */
/* =========================================================================================================================== */

/* =========================================================  DMSAR  ========================================================= */
 #define R_DMAC0_DMSAR_DMSAR_Pos     (0UL)
 #define R_DMAC0_DMSAR_DMSAR_Msk     (0xffffffffUL)
/* =========================================================  DMDAR  ========================================================= */
 #define R_DMAC0_DMDAR_DMDAR_Pos     (0UL)
 #define R_DMAC0_DMDAR_DMDAR_Msk     (0xffffffffUL)
/* =========================================================  DMCRA  ========================================================= */
 #define R_DMAC0_DMCRA_DMCRAH_Pos    (16UL)
 #define R_DMAC0_DMCRA_DMCRAH_Msk    (0x3ff0000UL)
 #define R_DMAC0_DMCRA_DMCRAL_Pos    (0UL)
 #define R_DMAC0_DMCRA_DMCRAL_Msk    (0xffffUL)
/* =========================================================  DMCRB  ========================================================= */
 #define R_DMAC0_DMCRB_DMCRBL_Pos    (0UL)
 #define R_DMAC0_DMCRB_DMCRBL_Msk    (0xffffUL)
 #define R_DMAC0_DMCRB_DMCRBH_Pos    (16UL)
 #define R_DMAC0_DMCRB_DMCRBH_Msk    (0xffff0000UL)
/* =========================================================  DMTMD  ========================================================= */
 #define R_DMAC0_DMTMD_MD_Pos        (14UL)
 #define R_DMAC0_DMTMD_MD_Msk        (0xc000UL)
 #define R_DMAC0_DMTMD_DTS_Pos       (12UL)
 #define R_DMAC0_DMTMD_DTS_Msk       (0x3000UL)
 #define R_DMAC0_DMTMD_SZ_Pos        (8UL)
 #define R_DMAC0_DMTMD_SZ_Msk        (0x300UL)
 #define R_DMAC0_DMTMD_DCTG_Pos      (0UL)
 #define R_DMAC0_DMTMD_DCTG_Msk      (0x3UL)
 #define R_DMAC0_DMTMD_TKP_Pos       (10UL)
 #define R_DMAC0_DMTMD_TKP_Msk       (0x400UL)
/* =========================================================  DMINT  ========================================================= */
 #define R_DMAC0_DMINT_DTIE_Pos      (4UL)
 #define R_DMAC0_DMINT_DTIE_Msk      (0x10UL)
 #define R_DMAC0_DMINT_ESIE_Pos      (3UL)
 #define R_DMAC0_DMINT_ESIE_Msk      (0x8UL)
 #define R_DMAC0_DMINT_RPTIE_Pos     (2UL)
 #define R_DMAC0_DMINT_RPTIE_Msk     (0x4UL)
 #define R_DMAC0_DMINT_SARIE_Pos     (1UL)
 #define R_DMAC0_DMINT_SARIE_Msk     (0x2UL)
 #define R_DMAC0_DMINT_DARIE_Pos     (0UL)
 #define R_DMAC0_DMINT_DARIE_Msk     (0x1UL)
/* =========================================================  DMAMD  ========================================================= */
 #define R_DMAC0_DMAMD_SM_Pos        (14UL)
 #define R_DMAC0_DMAMD_SM_Msk        (0xc000UL)
 #define R_DMAC0_DMAMD_SARA_Pos      (8UL)
 #define R_DMAC0_DMAMD_SARA_Msk      (0x1f00UL)
 #define R_DMAC0_DMAMD_DM_Pos        (6UL)
 #define R_DMAC0_DMAMD_DM_Msk        (0xc0UL)
 #define R_DMAC0_DMAMD_DARA_Pos      (0UL)
 #define R_DMAC0_DMAMD_DARA_Msk      (0x1fUL)
 #define R_DMAC0_DMAMD_DADR_Pos      (5UL)
 #define R_DMAC0_DMAMD_DADR_Msk      (0x20UL)
 #define R_DMAC0_DMAMD_SADR_Pos      (13UL)
 #define R_DMAC0_DMAMD_SADR_Msk      (0x2000UL)
/* =========================================================  DMOFR  ========================================================= */
 #define R_DMAC0_DMOFR_DMOFR_Pos     (0UL)
 #define R_DMAC0_DMOFR_DMOFR_Msk     (0xffffffffUL)
/* =========================================================  DMCNT  ========================================================= */
 #define R_DMAC0_DMCNT_DTE_Pos       (0UL)
 #define R_DMAC0_DMCNT_DTE_Msk       (0x1UL)
/* =========================================================  DMREQ  ========================================================= */
 #define R_DMAC0_DMREQ_CLRS_Pos      (4UL)
 #define R_DMAC0_DMREQ_CLRS_Msk      (0x10UL)
 #define R_DMAC0_DMREQ_SWREQ_Pos     (0UL)
 #define R_DMAC0_DMREQ_SWREQ_Msk     (0x1UL)
/* =========================================================  DMSTS  ========================================================= */
 #define R_DMAC0_DMSTS_ACT_Pos       (7UL)
 #define R_DMAC0_DMSTS_ACT_Msk       (0x80UL)
 #define R_DMAC0_DMSTS_DTIF_Pos      (4UL)
 #define R_DMAC0_DMSTS_DTIF_Msk      (0x10UL)
 #define R_DMAC0_DMSTS_ESIF_Pos      (0UL)
 #define R_DMAC0_DMSTS_ESIF_Msk      (0x1UL)
/* =========================================================  DMSRR  ========================================================= */
/* =========================================================  DMDRR  ========================================================= */
/* =========================================================  DMSBS  ========================================================= */
 #define R_DMAC0_DMSBS_DMSBSL_Pos    (0UL)
 #define R_DMAC0_DMSBS_DMSBSL_Msk    (0xffffUL)
 #define R_DMAC0_DMSBS_DMSBSH_Pos    (16UL)
 #define R_DMAC0_DMSBS_DMSBSH_Msk    (0xffff0000UL)
/* =========================================================  DMDBS  ========================================================= */
 #define R_DMAC0_DMDBS_DMDBSL_Pos    (0UL)
 #define R_DMAC0_DMDBS_DMDBSL_Msk    (0xffffUL)
 #define R_DMAC0_DMDBS_DMDBSH_Pos    (16UL)
 #define R_DMAC0_DMDBS_DMDBSH_Msk    (0xffff0000UL)
/* =========================================================  DMBWR  ========================================================= */
 #define R_DMAC0_DMBWR_BWE_Pos       (0UL)
 #define R_DMAC0_DMBWR_BWE_Msk       (0x1UL)

/* =========================================================================================================================== */
/* ================                                           R_DOC                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  DOCR  ========================================================== */
 #define R_DOC_DOCR_DOPCFCL_Pos    (6UL)
 #define R_DOC_DOCR_DOPCFCL_Msk    (0x40UL)
 #define R_DOC_DOCR_DOPCF_Pos      (5UL)
 #define R_DOC_DOCR_DOPCF_Msk      (0x20UL)
 #define R_DOC_DOCR_DCSEL_Pos      (2UL)
 #define R_DOC_DOCR_DCSEL_Msk      (0x4UL)
 #define R_DOC_DOCR_OMS_Pos        (0UL)
 #define R_DOC_DOCR_OMS_Msk        (0x3UL)
/* =========================================================  DODIR  ========================================================= */
 #define R_DOC_DODIR_DODIR_Pos     (0UL)
 #define R_DOC_DODIR_DODIR_Msk     (0xffffUL)
/* =========================================================  DODSR  ========================================================= */
 #define R_DOC_DODSR_DODSR_Pos     (0UL)
 #define R_DOC_DODSR_DODSR_Msk     (0xffffUL)

/* =========================================================================================================================== */
/* ================                                           R_DTC                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  DTCCR  ========================================================= */
 #define R_DTC_DTCCR_RRS_Pos         (4UL)
 #define R_DTC_DTCCR_RRS_Msk         (0x10UL)
/* ========================================================  DTCVBR  ========================================================= */
 #define R_DTC_DTCVBR_DTCVBR_Pos     (0UL)
 #define R_DTC_DTCVBR_DTCVBR_Msk     (0xffffffffUL)
/* =========================================================  DTCST  ========================================================= */
 #define R_DTC_DTCST_DTCST_Pos       (0UL)
 #define R_DTC_DTCST_DTCST_Msk       (0x1UL)
/* ========================================================  DTCSTS  ========================================================= */
 #define R_DTC_DTCSTS_ACT_Pos        (15UL)
 #define R_DTC_DTCSTS_ACT_Msk        (0x8000UL)
 #define R_DTC_DTCSTS_VECN_Pos       (0UL)
 #define R_DTC_DTCSTS_VECN_Msk       (0xffUL)
/* =======================================================  DTCCR_SEC  ======================================================= */
 #define R_DTC_DTCCR_SEC_RRSS_Pos    (4UL)
 #define R_DTC_DTCCR_SEC_RRSS_Msk    (0x10UL)
/* ======================================================  DTCVBR_SEC  ======================================================= */
/* =========================================================  DTEVR  ========================================================= */
 #define R_DTC_DTEVR_DTEV_Pos        (0UL)
 #define R_DTC_DTEVR_DTEV_Msk        (0xffUL)
 #define R_DTC_DTEVR_DTEVSAM_Pos     (8UL)
 #define R_DTC_DTEVR_DTEVSAM_Msk     (0x100UL)
 #define R_DTC_DTEVR_DTESTA_Pos      (16UL)
 #define R_DTC_DTEVR_DTESTA_Msk      (0x10000UL)

/* =========================================================================================================================== */
/* ================                                           R_ELC                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  ELCR  ========================================================== */
 #define R_ELC_ELCR_ELCON_Pos         (7UL)
 #define R_ELC_ELCR_ELCON_Msk         (0x80UL)
/* ========================================================  ELCSARA  ======================================================== */
 #define R_ELC_ELCSARA_ELCR_Pos       (0UL)
 #define R_ELC_ELCSARA_ELCR_Msk       (0x1UL)
 #define R_ELC_ELCSARA_ELSEGR0_Pos    (1UL)
 #define R_ELC_ELCSARA_ELSEGR0_Msk    (0x2UL)
 #define R_ELC_ELCSARA_ELSEGR1_Pos    (2UL)
 #define R_ELC_ELCSARA_ELSEGR1_Msk    (0x4UL)
/* ========================================================  ELCSARB  ======================================================== */
 #define R_ELC_ELCSARB_ELSR0_Pos      (0UL)
 #define R_ELC_ELCSARB_ELSR0_Msk      (0x1UL)
 #define R_ELC_ELCSARB_ELSR1_Pos      (1UL)
 #define R_ELC_ELCSARB_ELSR1_Msk      (0x2UL)
 #define R_ELC_ELCSARB_ELSR2_Pos      (2UL)
 #define R_ELC_ELCSARB_ELSR2_Msk      (0x4UL)
 #define R_ELC_ELCSARB_ELSR3_Pos      (3UL)
 #define R_ELC_ELCSARB_ELSR3_Msk      (0x8UL)
 #define R_ELC_ELCSARB_ELSR4_Pos      (4UL)
 #define R_ELC_ELCSARB_ELSR4_Msk      (0x10UL)
 #define R_ELC_ELCSARB_ELSR5_Pos      (5UL)
 #define R_ELC_ELCSARB_ELSR5_Msk      (0x20UL)
 #define R_ELC_ELCSARB_ELSR6_Pos      (6UL)
 #define R_ELC_ELCSARB_ELSR6_Msk      (0x40UL)
 #define R_ELC_ELCSARB_ELSR7_Pos      (7UL)
 #define R_ELC_ELCSARB_ELSR7_Msk      (0x80UL)
 #define R_ELC_ELCSARB_ELSR8_Pos      (8UL)
 #define R_ELC_ELCSARB_ELSR8_Msk      (0x100UL)
 #define R_ELC_ELCSARB_ELSR9_Pos      (9UL)
 #define R_ELC_ELCSARB_ELSR9_Msk      (0x200UL)
 #define R_ELC_ELCSARB_ELSR10_Pos     (10UL)
 #define R_ELC_ELCSARB_ELSR10_Msk     (0x400UL)
 #define R_ELC_ELCSARB_ELSR11_Pos     (11UL)
 #define R_ELC_ELCSARB_ELSR11_Msk     (0x800UL)
 #define R_ELC_ELCSARB_ELSR12_Pos     (12UL)
 #define R_ELC_ELCSARB_ELSR12_Msk     (0x1000UL)
 #define R_ELC_ELCSARB_ELSR13_Pos     (13UL)
 #define R_ELC_ELCSARB_ELSR13_Msk     (0x2000UL)
 #define R_ELC_ELCSARB_ELSR14_Pos     (14UL)
 #define R_ELC_ELCSARB_ELSR14_Msk     (0x4000UL)
 #define R_ELC_ELCSARB_ELSR15_Pos     (15UL)
 #define R_ELC_ELCSARB_ELSR15_Msk     (0x8000UL)
/* ========================================================  ELCSARC  ======================================================== */
 #define R_ELC_ELCSARC_ELSR16_Pos     (0UL)
 #define R_ELC_ELCSARC_ELSR16_Msk     (0x1UL)
 #define R_ELC_ELCSARC_ELSR17_Pos     (1UL)
 #define R_ELC_ELCSARC_ELSR17_Msk     (0x2UL)
 #define R_ELC_ELCSARC_ELSR18_Pos     (2UL)
 #define R_ELC_ELCSARC_ELSR18_Msk     (0x4UL)

/* =========================================================================================================================== */
/* ================                                       R_FACI_HP_CMD                                       ================ */
/* =========================================================================================================================== */

/* ======================================================  FACI_CMD16  ======================================================= */
/* =======================================================  FACI_CMD8  ======================================================= */

/* =========================================================================================================================== */
/* ================                                         R_FACI_HP                                         ================ */
/* =========================================================================================================================== */

/* ========================================================  FASTAT  ========================================================= */
 #define R_FACI_HP_FASTAT_CFAE_Pos         (7UL)
 #define R_FACI_HP_FASTAT_CFAE_Msk         (0x80UL)
 #define R_FACI_HP_FASTAT_CMDLK_Pos        (4UL)
 #define R_FACI_HP_FASTAT_CMDLK_Msk        (0x10UL)
 #define R_FACI_HP_FASTAT_DFAE_Pos         (3UL)
 #define R_FACI_HP_FASTAT_DFAE_Msk         (0x8UL)
/* ========================================================  FAEINT  ========================================================= */
 #define R_FACI_HP_FAEINT_CFAEIE_Pos       (7UL)
 #define R_FACI_HP_FAEINT_CFAEIE_Msk       (0x80UL)
 #define R_FACI_HP_FAEINT_CMDLKIE_Pos      (4UL)
 #define R_FACI_HP_FAEINT_CMDLKIE_Msk      (0x10UL)
 #define R_FACI_HP_FAEINT_DFAEIE_Pos       (3UL)
 #define R_FACI_HP_FAEINT_DFAEIE_Msk       (0x8UL)
/* ========================================================  FRDYIE  ========================================================= */
 #define R_FACI_HP_FRDYIE_FRDYIE_Pos       (0UL)
 #define R_FACI_HP_FRDYIE_FRDYIE_Msk       (0x1UL)
/* ========================================================  FSADDR  ========================================================= */
 #define R_FACI_HP_FSADDR_FSA_Pos          (0UL)
 #define R_FACI_HP_FSADDR_FSA_Msk          (0xffffffffUL)
/* ========================================================  FEADDR  ========================================================= */
 #define R_FACI_HP_FEADDR_FEA_Pos          (0UL)
 #define R_FACI_HP_FEADDR_FEA_Msk          (0xffffffffUL)
/* ========================================================  FMEPROT  ======================================================== */
 #define R_FACI_HP_FMEPROT_KEY_Pos         (8UL)
 #define R_FACI_HP_FMEPROT_KEY_Msk         (0xff00UL)
 #define R_FACI_HP_FMEPROT_CEPROT_Pos      (0UL)
 #define R_FACI_HP_FMEPROT_CEPROT_Msk      (0x1UL)
/* ========================================================  FBPROT0  ======================================================== */
 #define R_FACI_HP_FBPROT0_KEY_Pos         (8UL)
 #define R_FACI_HP_FBPROT0_KEY_Msk         (0xff00UL)
 #define R_FACI_HP_FBPROT0_BPCN0_Pos       (0UL)
 #define R_FACI_HP_FBPROT0_BPCN0_Msk       (0x1UL)
/* ========================================================  FBPROT1  ======================================================== */
 #define R_FACI_HP_FBPROT1_KEY_Pos         (8UL)
 #define R_FACI_HP_FBPROT1_KEY_Msk         (0xff00UL)
 #define R_FACI_HP_FBPROT1_BPCN1_Pos       (0UL)
 #define R_FACI_HP_FBPROT1_BPCN1_Msk       (0x1UL)
/* ========================================================  FSTATR  ========================================================= */
 #define R_FACI_HP_FSTATR_ILGCOMERR_Pos    (23UL)
 #define R_FACI_HP_FSTATR_ILGCOMERR_Msk    (0x800000UL)
 #define R_FACI_HP_FSTATR_FESETERR_Pos     (22UL)
 #define R_FACI_HP_FSTATR_FESETERR_Msk     (0x400000UL)
 #define R_FACI_HP_FSTATR_SECERR_Pos       (21UL)
 #define R_FACI_HP_FSTATR_SECERR_Msk       (0x200000UL)
 #define R_FACI_HP_FSTATR_OTERR_Pos        (20UL)
 #define R_FACI_HP_FSTATR_OTERR_Msk        (0x100000UL)
 #define R_FACI_HP_FSTATR_FRDY_Pos         (15UL)
 #define R_FACI_HP_FSTATR_FRDY_Msk         (0x8000UL)
 #define R_FACI_HP_FSTATR_ILGLERR_Pos      (14UL)
 #define R_FACI_HP_FSTATR_ILGLERR_Msk      (0x4000UL)
 #define R_FACI_HP_FSTATR_ERSERR_Pos       (13UL)
 #define R_FACI_HP_FSTATR_ERSERR_Msk       (0x2000UL)
 #define R_FACI_HP_FSTATR_PRGERR_Pos       (12UL)
 #define R_FACI_HP_FSTATR_PRGERR_Msk       (0x1000UL)
 #define R_FACI_HP_FSTATR_SUSRDY_Pos       (11UL)
 #define R_FACI_HP_FSTATR_SUSRDY_Msk       (0x800UL)
 #define R_FACI_HP_FSTATR_DBFULL_Pos       (10UL)
 #define R_FACI_HP_FSTATR_DBFULL_Msk       (0x400UL)
 #define R_FACI_HP_FSTATR_ERSSPD_Pos       (9UL)
 #define R_FACI_HP_FSTATR_ERSSPD_Msk       (0x200UL)
 #define R_FACI_HP_FSTATR_PRGSPD_Pos       (8UL)
 #define R_FACI_HP_FSTATR_PRGSPD_Msk       (0x100UL)
 #define R_FACI_HP_FSTATR_FLWEERR_Pos      (6UL)
 #define R_FACI_HP_FSTATR_FLWEERR_Msk      (0x40UL)
/* ========================================================  FENTRYR  ======================================================== */
 #define R_FACI_HP_FENTRYR_KEY_Pos         (8UL)
 #define R_FACI_HP_FENTRYR_KEY_Msk         (0xff00UL)
 #define R_FACI_HP_FENTRYR_FENTRYD_Pos     (7UL)
 #define R_FACI_HP_FENTRYR_FENTRYD_Msk     (0x80UL)
 #define R_FACI_HP_FENTRYR_FENTRYC_Pos     (0UL)
 #define R_FACI_HP_FENTRYR_FENTRYC_Msk     (0x1UL)
/* =======================================================  FSUINITR  ======================================================== */
 #define R_FACI_HP_FSUINITR_KEY_Pos        (8UL)
 #define R_FACI_HP_FSUINITR_KEY_Msk        (0xff00UL)
 #define R_FACI_HP_FSUINITR_SUINIT_Pos     (0UL)
 #define R_FACI_HP_FSUINITR_SUINIT_Msk     (0x1UL)
/* =========================================================  FCMDR  ========================================================= */
 #define R_FACI_HP_FCMDR_CMDR_Pos          (8UL)
 #define R_FACI_HP_FCMDR_CMDR_Msk          (0xff00UL)
 #define R_FACI_HP_FCMDR_PCMDR_Pos         (0UL)
 #define R_FACI_HP_FCMDR_PCMDR_Msk         (0xffUL)
/* ========================================================  FBCCNT  ========================================================= */
 #define R_FACI_HP_FBCCNT_BCDIR_Pos        (0UL)
 #define R_FACI_HP_FBCCNT_BCDIR_Msk        (0x1UL)
/* ========================================================  FBCSTAT  ======================================================== */
 #define R_FACI_HP_FBCSTAT_BCST_Pos        (0UL)
 #define R_FACI_HP_FBCSTAT_BCST_Msk        (0x1UL)
/* ========================================================  FPSADDR  ======================================================== */
 #define R_FACI_HP_FPSADDR_PSADR_Pos       (0UL)
 #define R_FACI_HP_FPSADDR_PSADR_Msk       (0x7ffffUL)
/* ========================================================  FAWMON  ========================================================= */
 #define R_FACI_HP_FAWMON_BTFLG_Pos        (31UL)
 #define R_FACI_HP_FAWMON_BTFLG_Msk        (0x80000000UL)
 #define R_FACI_HP_FAWMON_FAWE_Pos         (16UL)
 #define R_FACI_HP_FAWMON_FAWE_Msk         (0x7ff0000UL)
 #define R_FACI_HP_FAWMON_FSPR_Pos         (15UL)
 #define R_FACI_HP_FAWMON_FSPR_Msk         (0x8000UL)
 #define R_FACI_HP_FAWMON_FAWS_Pos         (0UL)
 #define R_FACI_HP_FAWMON_FAWS_Msk         (0x7ffUL)
/* =========================================================  FCPSR  ========================================================= */
 #define R_FACI_HP_FCPSR_ESUSPMD_Pos       (0UL)
 #define R_FACI_HP_FCPSR_ESUSPMD_Msk       (0x1UL)
/* ========================================================  FPCKAR  ========================================================= */
 #define R_FACI_HP_FPCKAR_KEY_Pos          (8UL)
 #define R_FACI_HP_FPCKAR_KEY_Msk          (0xff00UL)
 #define R_FACI_HP_FPCKAR_PCKA_Pos         (0UL)
 #define R_FACI_HP_FPCKAR_PCKA_Msk         (0xffUL)
/* ========================================================  FSUACR  ========================================================= */
 #define R_FACI_HP_FSUACR_KEY_Pos          (8UL)
 #define R_FACI_HP_FSUACR_KEY_Msk          (0xff00UL)
 #define R_FACI_HP_FSUACR_SAS_Pos          (0UL)
 #define R_FACI_HP_FSUACR_SAS_Msk          (0x3UL)

/* =========================================================================================================================== */
/* ================                                         R_FCACHE                                          ================ */
/* =========================================================================================================================== */

/* ========================================================  FCACHEE  ======================================================== */
 #define R_FCACHE_FCACHEE_FCACHEEN_Pos     (0UL)
 #define R_FCACHE_FCACHEE_FCACHEEN_Msk     (0x1UL)
/* =======================================================  FCACHEIV  ======================================================== */
 #define R_FCACHE_FCACHEIV_FCACHEIV_Pos    (0UL)
 #define R_FCACHE_FCACHEIV_FCACHEIV_Msk    (0x1UL)
/* =========================================================  FLWT  ========================================================== */
 #define R_FCACHE_FLWT_FLWT_Pos            (0UL)
 #define R_FCACHE_FLWT_FLWT_Msk            (0x7UL)
/* =========================================================  FSAR  ========================================================== */
 #define R_FCACHE_FSAR_FLWTSA_Pos          (0UL)
 #define R_FCACHE_FSAR_FLWTSA_Msk          (0x1UL)
 #define R_FCACHE_FSAR_FCKMHZSA_Pos        (8UL)
 #define R_FCACHE_FSAR_FCKMHZSA_Msk        (0x100UL)

/* =========================================================================================================================== */
/* ================                                          R_GPT0                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  GTWP  ========================================================== */
 #define R_GPT0_GTWP_PRKEY_Pos             (8UL)
 #define R_GPT0_GTWP_PRKEY_Msk             (0xff00UL)
 #define R_GPT0_GTWP_WP_Pos                (0UL)
 #define R_GPT0_GTWP_WP_Msk                (0x1UL)
 #define R_GPT0_GTWP_STRWP_Pos             (1UL)
 #define R_GPT0_GTWP_STRWP_Msk             (0x2UL)
 #define R_GPT0_GTWP_STPWP_Pos             (2UL)
 #define R_GPT0_GTWP_STPWP_Msk             (0x4UL)
 #define R_GPT0_GTWP_CLRWP_Pos             (3UL)
 #define R_GPT0_GTWP_CLRWP_Msk             (0x8UL)
 #define R_GPT0_GTWP_CMNWP_Pos             (4UL)
 #define R_GPT0_GTWP_CMNWP_Msk             (0x10UL)
/* =========================================================  GTSTR  ========================================================= */
 #define R_GPT0_GTSTR_CSTRT_Pos            (0UL)
 #define R_GPT0_GTSTR_CSTRT_Msk            (0x1UL)
/* =========================================================  GTSTP  ========================================================= */
 #define R_GPT0_GTSTP_CSTOP_Pos            (0UL)
 #define R_GPT0_GTSTP_CSTOP_Msk            (0x1UL)
/* =========================================================  GTCLR  ========================================================= */
 #define R_GPT0_GTCLR_CCLR_Pos             (0UL)
 #define R_GPT0_GTCLR_CCLR_Msk             (0x1UL)
/* =========================================================  GTSSR  ========================================================= */
 #define R_GPT0_GTSSR_CSTRT_Pos            (31UL)
 #define R_GPT0_GTSSR_CSTRT_Msk            (0x80000000UL)
 #define R_GPT0_GTSSR_SSELC_Pos            (16UL)
 #define R_GPT0_GTSSR_SSELC_Msk            (0x10000UL)
 #define R_GPT0_GTSSR_SSCBFAH_Pos          (15UL)
 #define R_GPT0_GTSSR_SSCBFAH_Msk          (0x8000UL)
 #define R_GPT0_GTSSR_SSCBFAL_Pos          (14UL)
 #define R_GPT0_GTSSR_SSCBFAL_Msk          (0x4000UL)
 #define R_GPT0_GTSSR_SSCBRAH_Pos          (13UL)
 #define R_GPT0_GTSSR_SSCBRAH_Msk          (0x2000UL)
 #define R_GPT0_GTSSR_SSCBRAL_Pos          (12UL)
 #define R_GPT0_GTSSR_SSCBRAL_Msk          (0x1000UL)
 #define R_GPT0_GTSSR_SSCAFBH_Pos          (11UL)
 #define R_GPT0_GTSSR_SSCAFBH_Msk          (0x800UL)
 #define R_GPT0_GTSSR_SSCAFBL_Pos          (10UL)
 #define R_GPT0_GTSSR_SSCAFBL_Msk          (0x400UL)
 #define R_GPT0_GTSSR_SSCARBH_Pos          (9UL)
 #define R_GPT0_GTSSR_SSCARBH_Msk          (0x200UL)
 #define R_GPT0_GTSSR_SSCARBL_Pos          (8UL)
 #define R_GPT0_GTSSR_SSCARBL_Msk          (0x100UL)
 #define R_GPT0_GTSSR_SSGTRGF_Pos          (1UL)
 #define R_GPT0_GTSSR_SSGTRGF_Msk          (0x2UL)
 #define R_GPT0_GTSSR_SSGTRGR_Pos          (0UL)
 #define R_GPT0_GTSSR_SSGTRGR_Msk          (0x1UL)
/* =========================================================  GTPSR  ========================================================= */
 #define R_GPT0_GTPSR_CSTOP_Pos            (31UL)
 #define R_GPT0_GTPSR_CSTOP_Msk            (0x80000000UL)
 #define R_GPT0_GTPSR_PSELC_Pos            (16UL)
 #define R_GPT0_GTPSR_PSELC_Msk            (0x10000UL)
 #define R_GPT0_GTPSR_PSCBFAH_Pos          (15UL)
 #define R_GPT0_GTPSR_PSCBFAH_Msk          (0x8000UL)
 #define R_GPT0_GTPSR_PSCBFAL_Pos          (14UL)
 #define R_GPT0_GTPSR_PSCBFAL_Msk          (0x4000UL)
 #define R_GPT0_GTPSR_PSCBRAH_Pos          (13UL)
 #define R_GPT0_GTPSR_PSCBRAH_Msk          (0x2000UL)
 #define R_GPT0_GTPSR_PSCBRAL_Pos          (12UL)
 #define R_GPT0_GTPSR_PSCBRAL_Msk          (0x1000UL)
 #define R_GPT0_GTPSR_PSCAFBH_Pos          (11UL)
 #define R_GPT0_GTPSR_PSCAFBH_Msk          (0x800UL)
 #define R_GPT0_GTPSR_PSCAFBL_Pos          (10UL)
 #define R_GPT0_GTPSR_PSCAFBL_Msk          (0x400UL)
 #define R_GPT0_GTPSR_PSCARBH_Pos          (9UL)
 #define R_GPT0_GTPSR_PSCARBH_Msk          (0x200UL)
 #define R_GPT0_GTPSR_PSCARBL_Pos          (8UL)
 #define R_GPT0_GTPSR_PSCARBL_Msk          (0x100UL)
 #define R_GPT0_GTPSR_PSGTRGF_Pos          (1UL)
 #define R_GPT0_GTPSR_PSGTRGF_Msk          (0x2UL)
 #define R_GPT0_GTPSR_PSGTRGR_Pos          (0UL)
 #define R_GPT0_GTPSR_PSGTRGR_Msk          (0x1UL)
/* =========================================================  GTCSR  ========================================================= */
 #define R_GPT0_GTCSR_CCLR_Pos             (31UL)
 #define R_GPT0_GTCSR_CCLR_Msk             (0x80000000UL)
 #define R_GPT0_GTCSR_CP1CCE_Pos           (27UL)
 #define R_GPT0_GTCSR_CP1CCE_Msk           (0x8000000UL)
 #define R_GPT0_GTCSR_CSCMSC_Pos           (24UL)
 #define R_GPT0_GTCSR_CSCMSC_Msk           (0x7000000UL)
 #define R_GPT0_GTCSR_CSELC_Pos            (16UL)
 #define R_GPT0_GTCSR_CSELC_Msk            (0x10000UL)
 #define R_GPT0_GTCSR_CSCBFAH_Pos          (15UL)
 #define R_GPT0_GTCSR_CSCBFAH_Msk          (0x8000UL)
 #define R_GPT0_GTCSR_CSCBFAL_Pos          (14UL)
 #define R_GPT0_GTCSR_CSCBFAL_Msk          (0x4000UL)
 #define R_GPT0_GTCSR_CSCBRAH_Pos          (13UL)
 #define R_GPT0_GTCSR_CSCBRAH_Msk          (0x2000UL)
 #define R_GPT0_GTCSR_CSCBRAL_Pos          (12UL)
 #define R_GPT0_GTCSR_CSCBRAL_Msk          (0x1000UL)
 #define R_GPT0_GTCSR_CSCAFBH_Pos          (11UL)
 #define R_GPT0_GTCSR_CSCAFBH_Msk          (0x800UL)
 #define R_GPT0_GTCSR_CSCAFBL_Pos          (10UL)
 #define R_GPT0_GTCSR_CSCAFBL_Msk          (0x400UL)
 #define R_GPT0_GTCSR_CSCARBH_Pos          (9UL)
 #define R_GPT0_GTCSR_CSCARBH_Msk          (0x200UL)
 #define R_GPT0_GTCSR_CSCARBL_Pos          (8UL)
 #define R_GPT0_GTCSR_CSCARBL_Msk          (0x100UL)
 #define R_GPT0_GTCSR_CSGTRGF_Pos          (1UL)
 #define R_GPT0_GTCSR_CSGTRGF_Msk          (0x2UL)
 #define R_GPT0_GTCSR_CSGTRGR_Pos          (0UL)
 #define R_GPT0_GTCSR_CSGTRGR_Msk          (0x1UL)
/* ========================================================  GTUPSR  ========================================================= */
 #define R_GPT0_GTUPSR_USILVL_Pos          (24UL)
 #define R_GPT0_GTUPSR_USILVL_Msk          (0xf000000UL)
 #define R_GPT0_GTUPSR_USELC_Pos           (16UL)
 #define R_GPT0_GTUPSR_USELC_Msk           (0x10000UL)
 #define R_GPT0_GTUPSR_USCBFAH_Pos         (15UL)
 #define R_GPT0_GTUPSR_USCBFAH_Msk         (0x8000UL)
 #define R_GPT0_GTUPSR_USCBFAL_Pos         (14UL)
 #define R_GPT0_GTUPSR_USCBFAL_Msk         (0x4000UL)
 #define R_GPT0_GTUPSR_USCBRAH_Pos         (13UL)
 #define R_GPT0_GTUPSR_USCBRAH_Msk         (0x2000UL)
 #define R_GPT0_GTUPSR_USCBRAL_Pos         (12UL)
 #define R_GPT0_GTUPSR_USCBRAL_Msk         (0x1000UL)
 #define R_GPT0_GTUPSR_USCAFBH_Pos         (11UL)
 #define R_GPT0_GTUPSR_USCAFBH_Msk         (0x800UL)
 #define R_GPT0_GTUPSR_USCAFBL_Pos         (10UL)
 #define R_GPT0_GTUPSR_USCAFBL_Msk         (0x400UL)
 #define R_GPT0_GTUPSR_USCARBH_Pos         (9UL)
 #define R_GPT0_GTUPSR_USCARBH_Msk         (0x200UL)
 #define R_GPT0_GTUPSR_USCARBL_Pos         (8UL)
 #define R_GPT0_GTUPSR_USCARBL_Msk         (0x100UL)
 #define R_GPT0_GTUPSR_USGTRGF_Pos         (1UL)
 #define R_GPT0_GTUPSR_USGTRGF_Msk         (0x2UL)
 #define R_GPT0_GTUPSR_USGTRGR_Pos         (0UL)
 #define R_GPT0_GTUPSR_USGTRGR_Msk         (0x1UL)
/* ========================================================  GTDNSR  ========================================================= */
 #define R_GPT0_GTDNSR_DSILVL_Pos          (24UL)
 #define R_GPT0_GTDNSR_DSILVL_Msk          (0xf000000UL)
 #define R_GPT0_GTDNSR_DSELC_Pos           (16UL)
 #define R_GPT0_GTDNSR_DSELC_Msk           (0x10000UL)
 #define R_GPT0_GTDNSR_DSCBFAH_Pos         (15UL)
 #define R_GPT0_GTDNSR_DSCBFAH_Msk         (0x8000UL)
 #define R_GPT0_GTDNSR_DSCBFAL_Pos         (14UL)
 #define R_GPT0_GTDNSR_DSCBFAL_Msk         (0x4000UL)
 #define R_GPT0_GTDNSR_DSCBRAH_Pos         (13UL)
 #define R_GPT0_GTDNSR_DSCBRAH_Msk         (0x2000UL)
 #define R_GPT0_GTDNSR_DSCBRAL_Pos         (12UL)
 #define R_GPT0_GTDNSR_DSCBRAL_Msk         (0x1000UL)
 #define R_GPT0_GTDNSR_DSCAFBH_Pos         (11UL)
 #define R_GPT0_GTDNSR_DSCAFBH_Msk         (0x800UL)
 #define R_GPT0_GTDNSR_DSCAFBL_Pos         (10UL)
 #define R_GPT0_GTDNSR_DSCAFBL_Msk         (0x400UL)
 #define R_GPT0_GTDNSR_DSCARBH_Pos         (9UL)
 #define R_GPT0_GTDNSR_DSCARBH_Msk         (0x200UL)
 #define R_GPT0_GTDNSR_DSCARBL_Pos         (8UL)
 #define R_GPT0_GTDNSR_DSCARBL_Msk         (0x100UL)
 #define R_GPT0_GTDNSR_DSGTRGF_Pos         (1UL)
 #define R_GPT0_GTDNSR_DSGTRGF_Msk         (0x2UL)
 #define R_GPT0_GTDNSR_DSGTRGR_Pos         (0UL)
 #define R_GPT0_GTDNSR_DSGTRGR_Msk         (0x1UL)
/* ========================================================  GTICASR  ======================================================== */
 #define R_GPT0_GTICASR_ASELC_Pos          (16UL)
 #define R_GPT0_GTICASR_ASELC_Msk          (0x10000UL)
 #define R_GPT0_GTICASR_ASCBFAH_Pos        (15UL)
 #define R_GPT0_GTICASR_ASCBFAH_Msk        (0x8000UL)
 #define R_GPT0_GTICASR_ASCBFAL_Pos        (14UL)
 #define R_GPT0_GTICASR_ASCBFAL_Msk        (0x4000UL)
 #define R_GPT0_GTICASR_ASCBRAH_Pos        (13UL)
 #define R_GPT0_GTICASR_ASCBRAH_Msk        (0x2000UL)
 #define R_GPT0_GTICASR_ASCBRAL_Pos        (12UL)
 #define R_GPT0_GTICASR_ASCBRAL_Msk        (0x1000UL)
 #define R_GPT0_GTICASR_ASCAFBH_Pos        (11UL)
 #define R_GPT0_GTICASR_ASCAFBH_Msk        (0x800UL)
 #define R_GPT0_GTICASR_ASCAFBL_Pos        (10UL)
 #define R_GPT0_GTICASR_ASCAFBL_Msk        (0x400UL)
 #define R_GPT0_GTICASR_ASCARBH_Pos        (9UL)
 #define R_GPT0_GTICASR_ASCARBH_Msk        (0x200UL)
 #define R_GPT0_GTICASR_ASCARBL_Pos        (8UL)
 #define R_GPT0_GTICASR_ASCARBL_Msk        (0x100UL)
 #define R_GPT0_GTICASR_ASGTRGF_Pos        (1UL)
 #define R_GPT0_GTICASR_ASGTRGF_Msk        (0x2UL)
 #define R_GPT0_GTICASR_ASGTRGR_Pos        (0UL)
 #define R_GPT0_GTICASR_ASGTRGR_Msk        (0x1UL)
/* ========================================================  GTICBSR  ======================================================== */
 #define R_GPT0_GTICBSR_BSELC_Pos          (16UL)
 #define R_GPT0_GTICBSR_BSELC_Msk          (0x10000UL)
 #define R_GPT0_GTICBSR_BSCBFAH_Pos        (15UL)
 #define R_GPT0_GTICBSR_BSCBFAH_Msk        (0x8000UL)
 #define R_GPT0_GTICBSR_BSCBFAL_Pos        (14UL)
 #define R_GPT0_GTICBSR_BSCBFAL_Msk        (0x4000UL)
 #define R_GPT0_GTICBSR_BSCBRAH_Pos        (13UL)
 #define R_GPT0_GTICBSR_BSCBRAH_Msk        (0x2000UL)
 #define R_GPT0_GTICBSR_BSCBRAL_Pos        (12UL)
 #define R_GPT0_GTICBSR_BSCBRAL_Msk        (0x1000UL)
 #define R_GPT0_GTICBSR_BSCAFBH_Pos        (11UL)
 #define R_GPT0_GTICBSR_BSCAFBH_Msk        (0x800UL)
 #define R_GPT0_GTICBSR_BSCAFBL_Pos        (10UL)
 #define R_GPT0_GTICBSR_BSCAFBL_Msk        (0x400UL)
 #define R_GPT0_GTICBSR_BSCARBH_Pos        (9UL)
 #define R_GPT0_GTICBSR_BSCARBH_Msk        (0x200UL)
 #define R_GPT0_GTICBSR_BSCARBL_Pos        (8UL)
 #define R_GPT0_GTICBSR_BSCARBL_Msk        (0x100UL)
 #define R_GPT0_GTICBSR_BSGTRGF_Pos        (1UL)
 #define R_GPT0_GTICBSR_BSGTRGF_Msk        (0x2UL)
 #define R_GPT0_GTICBSR_BSGTRGR_Pos        (0UL)
 #define R_GPT0_GTICBSR_BSGTRGR_Msk        (0x1UL)
/* =========================================================  GTCR  ========================================================== */
 #define R_GPT0_GTCR_CKEG_Pos              (27UL)
 #define R_GPT0_GTCR_CKEG_Msk              (0x18000000UL)
 #define R_GPT0_GTCR_TPCS_Pos              (24UL)
 #define R_GPT0_GTCR_TPCS_Msk              (0x7000000UL)
 #define R_GPT0_GTCR_MD_Pos                (16UL)
 #define R_GPT0_GTCR_MD_Msk                (0xf0000UL)
 #define R_GPT0_GTCR_SSCEN_Pos             (15UL)
 #define R_GPT0_GTCR_SSCEN_Msk             (0x8000UL)
 #define R_GPT0_GTCR_CPSCD_Pos             (12UL)
 #define R_GPT0_GTCR_CPSCD_Msk             (0x1000UL)
 #define R_GPT0_GTCR_SSCGRP_Pos            (10UL)
 #define R_GPT0_GTCR_SSCGRP_Msk            (0xc00UL)
 #define R_GPT0_GTCR_SCGTIOC_Pos           (9UL)
 #define R_GPT0_GTCR_SCGTIOC_Msk           (0x200UL)
 #define R_GPT0_GTCR_ICDS_Pos              (8UL)
 #define R_GPT0_GTCR_ICDS_Msk              (0x100UL)
 #define R_GPT0_GTCR_CST_Pos               (0UL)
 #define R_GPT0_GTCR_CST_Msk               (0x1UL)
/* =======================================================  GTUDDTYC  ======================================================== */
 #define R_GPT0_GTUDDTYC_OBDTYR_Pos        (27UL)
 #define R_GPT0_GTUDDTYC_OBDTYR_Msk        (0x8000000UL)
 #define R_GPT0_GTUDDTYC_OBDTYF_Pos        (26UL)
 #define R_GPT0_GTUDDTYC_OBDTYF_Msk        (0x4000000UL)
 #define R_GPT0_GTUDDTYC_OBDTY_Pos         (24UL)
 #define R_GPT0_GTUDDTYC_OBDTY_Msk         (0x3000000UL)
 #define R_GPT0_GTUDDTYC_OADTYR_Pos        (19UL)
 #define R_GPT0_GTUDDTYC_OADTYR_Msk        (0x80000UL)
 #define R_GPT0_GTUDDTYC_OADTYF_Pos        (18UL)
 #define R_GPT0_GTUDDTYC_OADTYF_Msk        (0x40000UL)
 #define R_GPT0_GTUDDTYC_OADTY_Pos         (16UL)
 #define R_GPT0_GTUDDTYC_OADTY_Msk         (0x30000UL)
 #define R_GPT0_GTUDDTYC_UDF_Pos           (1UL)
 #define R_GPT0_GTUDDTYC_UDF_Msk           (0x2UL)
 #define R_GPT0_GTUDDTYC_UD_Pos            (0UL)
 #define R_GPT0_GTUDDTYC_UD_Msk            (0x1UL)
/* =========================================================  GTIOR  ========================================================= */
 #define R_GPT0_GTIOR_NFCSB_Pos            (30UL)
 #define R_GPT0_GTIOR_NFCSB_Msk            (0xc0000000UL)
 #define R_GPT0_GTIOR_NFBEN_Pos            (29UL)
 #define R_GPT0_GTIOR_NFBEN_Msk            (0x20000000UL)
 #define R_GPT0_GTIOR_OBEOCD_Pos           (27UL)
 #define R_GPT0_GTIOR_OBEOCD_Msk           (0x8000000UL)
 #define R_GPT0_GTIOR_OBDF_Pos             (25UL)
 #define R_GPT0_GTIOR_OBDF_Msk             (0x6000000UL)
 #define R_GPT0_GTIOR_OBE_Pos              (24UL)
 #define R_GPT0_GTIOR_OBE_Msk              (0x1000000UL)
 #define R_GPT0_GTIOR_OBHLD_Pos            (23UL)
 #define R_GPT0_GTIOR_OBHLD_Msk            (0x800000UL)
 #define R_GPT0_GTIOR_OBDFLT_Pos           (22UL)
 #define R_GPT0_GTIOR_OBDFLT_Msk           (0x400000UL)
 #define R_GPT0_GTIOR_GTIOB_Pos            (16UL)
 #define R_GPT0_GTIOR_GTIOB_Msk            (0x1f0000UL)
 #define R_GPT0_GTIOR_NFCSA_Pos            (14UL)
 #define R_GPT0_GTIOR_NFCSA_Msk            (0xc000UL)
 #define R_GPT0_GTIOR_NFAEN_Pos            (13UL)
 #define R_GPT0_GTIOR_NFAEN_Msk            (0x2000UL)
 #define R_GPT0_GTIOR_PSYE_Pos             (12UL)
 #define R_GPT0_GTIOR_PSYE_Msk             (0x1000UL)
 #define R_GPT0_GTIOR_OAEOCD_Pos           (11UL)
 #define R_GPT0_GTIOR_OAEOCD_Msk           (0x800UL)
 #define R_GPT0_GTIOR_OADF_Pos             (9UL)
 #define R_GPT0_GTIOR_OADF_Msk             (0x600UL)
 #define R_GPT0_GTIOR_OAE_Pos              (8UL)
 #define R_GPT0_GTIOR_OAE_Msk              (0x100UL)
 #define R_GPT0_GTIOR_OAHLD_Pos            (7UL)
 #define R_GPT0_GTIOR_OAHLD_Msk            (0x80UL)
 #define R_GPT0_GTIOR_OADFLT_Pos           (6UL)
 #define R_GPT0_GTIOR_OADFLT_Msk           (0x40UL)
 #define R_GPT0_GTIOR_CPSCIR_Pos           (5UL)
 #define R_GPT0_GTIOR_CPSCIR_Msk           (0x20UL)
 #define R_GPT0_GTIOR_GTIOA_Pos            (0UL)
 #define R_GPT0_GTIOR_GTIOA_Msk            (0x1fUL)
/* ========================================================  GTINTAD  ======================================================== */
 #define R_GPT0_GTINTAD_GTINTPC_Pos        (31UL)
 #define R_GPT0_GTINTAD_GTINTPC_Msk        (0x80000000UL)
 #define R_GPT0_GTINTAD_GRPABL_Pos         (30UL)
 #define R_GPT0_GTINTAD_GRPABL_Msk         (0x40000000UL)
 #define R_GPT0_GTINTAD_GRPABH_Pos         (29UL)
 #define R_GPT0_GTINTAD_GRPABH_Msk         (0x20000000UL)
 #define R_GPT0_GTINTAD_GRPDTE_Pos         (28UL)
 #define R_GPT0_GTINTAD_GRPDTE_Msk         (0x10000000UL)
 #define R_GPT0_GTINTAD_GRP_Pos            (24UL)
 #define R_GPT0_GTINTAD_GRP_Msk            (0x3000000UL)
 #define R_GPT0_GTINTAD_ADTRDEN_Pos        (17UL)
 #define R_GPT0_GTINTAD_ADTRDEN_Msk        (0x20000UL)
 #define R_GPT0_GTINTAD_ADTRUEN_Pos        (16UL)
 #define R_GPT0_GTINTAD_ADTRUEN_Msk        (0x10000UL)
 #define R_GPT0_GTINTAD_SCFPU_Pos          (15UL)
 #define R_GPT0_GTINTAD_SCFPU_Msk          (0x8000UL)
 #define R_GPT0_GTINTAD_SCFPO_Pos          (14UL)
 #define R_GPT0_GTINTAD_SCFPO_Msk          (0x4000UL)
 #define R_GPT0_GTINTAD_SCF_Pos            (8UL)
 #define R_GPT0_GTINTAD_SCF_Msk            (0x100UL)
/* =========================================================  GTST  ========================================================== */
 #define R_GPT0_GTST_OABLF_Pos             (30UL)
 #define R_GPT0_GTST_OABLF_Msk             (0x40000000UL)
 #define R_GPT0_GTST_OABHF_Pos             (29UL)
 #define R_GPT0_GTST_OABHF_Msk             (0x20000000UL)
 #define R_GPT0_GTST_DTEF_Pos              (28UL)
 #define R_GPT0_GTST_DTEF_Msk              (0x10000000UL)
 #define R_GPT0_GTST_ODF_Pos               (24UL)
 #define R_GPT0_GTST_ODF_Msk               (0x1000000UL)
 #define R_GPT0_GTST_ADTRBDF_Pos           (19UL)
 #define R_GPT0_GTST_ADTRBDF_Msk           (0x80000UL)
 #define R_GPT0_GTST_ADTRBUF_Pos           (18UL)
 #define R_GPT0_GTST_ADTRBUF_Msk           (0x40000UL)
 #define R_GPT0_GTST_ADTRADF_Pos           (17UL)
 #define R_GPT0_GTST_ADTRADF_Msk           (0x20000UL)
 #define R_GPT0_GTST_ADTRAUF_Pos           (16UL)
 #define R_GPT0_GTST_ADTRAUF_Msk           (0x10000UL)
 #define R_GPT0_GTST_TUCF_Pos              (15UL)
 #define R_GPT0_GTST_TUCF_Msk              (0x8000UL)
 #define R_GPT0_GTST_ITCNT_Pos             (8UL)
 #define R_GPT0_GTST_ITCNT_Msk             (0x700UL)
 #define R_GPT0_GTST_TCFPU_Pos             (7UL)
 #define R_GPT0_GTST_TCFPU_Msk             (0x80UL)
 #define R_GPT0_GTST_TCFPO_Pos             (6UL)
 #define R_GPT0_GTST_TCFPO_Msk             (0x40UL)
 #define R_GPT0_GTST_TCFF_Pos              (5UL)
 #define R_GPT0_GTST_TCFF_Msk              (0x20UL)
 #define R_GPT0_GTST_TCFE_Pos              (4UL)
 #define R_GPT0_GTST_TCFE_Msk              (0x10UL)
 #define R_GPT0_GTST_TCFD_Pos              (3UL)
 #define R_GPT0_GTST_TCFD_Msk              (0x8UL)
 #define R_GPT0_GTST_TCFC_Pos              (2UL)
 #define R_GPT0_GTST_TCFC_Msk              (0x4UL)
 #define R_GPT0_GTST_TCFB_Pos              (1UL)
 #define R_GPT0_GTST_TCFB_Msk              (0x2UL)
 #define R_GPT0_GTST_TCFA_Pos              (0UL)
 #define R_GPT0_GTST_TCFA_Msk              (0x1UL)
 #define R_GPT0_GTST_PCF_Pos               (31UL)
 #define R_GPT0_GTST_PCF_Msk               (0x80000000UL)
/* =========================================================  GTBER  ========================================================= */
 #define R_GPT0_GTBER_ADTDB_Pos            (30UL)
 #define R_GPT0_GTBER_ADTDB_Msk            (0x40000000UL)
 #define R_GPT0_GTBER_ADTTB_Pos            (28UL)
 #define R_GPT0_GTBER_ADTTB_Msk            (0x30000000UL)
 #define R_GPT0_GTBER_ADTDA_Pos            (26UL)
 #define R_GPT0_GTBER_ADTDA_Msk            (0x4000000UL)
 #define R_GPT0_GTBER_ADTTA_Pos            (24UL)
 #define R_GPT0_GTBER_ADTTA_Msk            (0x3000000UL)
 #define R_GPT0_GTBER_CCRSWT_Pos           (22UL)
 #define R_GPT0_GTBER_CCRSWT_Msk           (0x400000UL)
 #define R_GPT0_GTBER_PR_Pos               (20UL)
 #define R_GPT0_GTBER_PR_Msk               (0x300000UL)
 #define R_GPT0_GTBER_CCRB_Pos             (18UL)
 #define R_GPT0_GTBER_CCRB_Msk             (0xc0000UL)
 #define R_GPT0_GTBER_CCRA_Pos             (16UL)
 #define R_GPT0_GTBER_CCRA_Msk             (0x30000UL)
 #define R_GPT0_GTBER_DBRTEC_Pos           (8UL)
 #define R_GPT0_GTBER_DBRTEC_Msk           (0x100UL)
 #define R_GPT0_GTBER_BD3_Pos              (3UL)
 #define R_GPT0_GTBER_BD3_Msk              (0x8UL)
 #define R_GPT0_GTBER_BD2_Pos              (2UL)
 #define R_GPT0_GTBER_BD2_Msk              (0x4UL)
 #define R_GPT0_GTBER_BD1_Pos              (1UL)
 #define R_GPT0_GTBER_BD1_Msk              (0x2UL)
 #define R_GPT0_GTBER_BD0_Pos              (0UL)
 #define R_GPT0_GTBER_BD0_Msk              (0x1UL)
/* =========================================================  GTITC  ========================================================= */
 #define R_GPT0_GTITC_ADTBL_Pos            (14UL)
 #define R_GPT0_GTITC_ADTBL_Msk            (0x4000UL)
 #define R_GPT0_GTITC_ADTAL_Pos            (12UL)
 #define R_GPT0_GTITC_ADTAL_Msk            (0x1000UL)
 #define R_GPT0_GTITC_IVTT_Pos             (8UL)
 #define R_GPT0_GTITC_IVTT_Msk             (0x700UL)
 #define R_GPT0_GTITC_IVTC_Pos             (6UL)
 #define R_GPT0_GTITC_IVTC_Msk             (0xc0UL)
 #define R_GPT0_GTITC_ITLF_Pos             (5UL)
 #define R_GPT0_GTITC_ITLF_Msk             (0x20UL)
 #define R_GPT0_GTITC_ITLE_Pos             (4UL)
 #define R_GPT0_GTITC_ITLE_Msk             (0x10UL)
 #define R_GPT0_GTITC_ITLD_Pos             (3UL)
 #define R_GPT0_GTITC_ITLD_Msk             (0x8UL)
 #define R_GPT0_GTITC_ITLC_Pos             (2UL)
 #define R_GPT0_GTITC_ITLC_Msk             (0x4UL)
 #define R_GPT0_GTITC_ITLB_Pos             (1UL)
 #define R_GPT0_GTITC_ITLB_Msk             (0x2UL)
 #define R_GPT0_GTITC_ITLA_Pos             (0UL)
 #define R_GPT0_GTITC_ITLA_Msk             (0x1UL)
/* =========================================================  GTCNT  ========================================================= */
 #define R_GPT0_GTCNT_GTCNT_Pos            (0UL)
 #define R_GPT0_GTCNT_GTCNT_Msk            (0xffffffffUL)
/* =========================================================  GTCCR  ========================================================= */
 #define R_GPT0_GTCCR_GTCCR_Pos            (0UL)
 #define R_GPT0_GTCCR_GTCCR_Msk            (0xffffffffUL)
/* =========================================================  GTPR  ========================================================== */
 #define R_GPT0_GTPR_GTPR_Pos              (0UL)
 #define R_GPT0_GTPR_GTPR_Msk              (0xffffffffUL)
/* =========================================================  GTPBR  ========================================================= */
 #define R_GPT0_GTPBR_GTPBR_Pos            (0UL)
 #define R_GPT0_GTPBR_GTPBR_Msk            (0xffffffffUL)
/* ========================================================  GTPDBR  ========================================================= */
 #define R_GPT0_GTPDBR_GTPDBR_Pos          (0UL)
 #define R_GPT0_GTPDBR_GTPDBR_Msk          (0xffffffffUL)
/* ========================================================  GTADTRA  ======================================================== */
 #define R_GPT0_GTADTRA_GTADTRA_Pos        (0UL)
 #define R_GPT0_GTADTRA_GTADTRA_Msk        (0xffffffffUL)
/* ========================================================  GTADTRB  ======================================================== */
 #define R_GPT0_GTADTRB_GTADTRB_Pos        (0UL)
 #define R_GPT0_GTADTRB_GTADTRB_Msk        (0xffffffffUL)
/* =======================================================  GTADTBRA  ======================================================== */
 #define R_GPT0_GTADTBRA_GTADTBRA_Pos      (0UL)
 #define R_GPT0_GTADTBRA_GTADTBRA_Msk      (0xffffffffUL)
/* =======================================================  GTADTBRB  ======================================================== */
 #define R_GPT0_GTADTBRB_GTADTBRB_Pos      (0UL)
 #define R_GPT0_GTADTBRB_GTADTBRB_Msk      (0xffffffffUL)
/* =======================================================  GTADTDBRA  ======================================================= */
 #define R_GPT0_GTADTDBRA_GTADTDBRA_Pos    (0UL)
 #define R_GPT0_GTADTDBRA_GTADTDBRA_Msk    (0xffffffffUL)
/* =======================================================  GTADTDBRB  ======================================================= */
 #define R_GPT0_GTADTDBRB_GTADTDBRB_Pos    (0UL)
 #define R_GPT0_GTADTDBRB_GTADTDBRB_Msk    (0xffffffffUL)
/* ========================================================  GTDTCR  ========================================================= */
 #define R_GPT0_GTDTCR_TDFER_Pos           (8UL)
 #define R_GPT0_GTDTCR_TDFER_Msk           (0x100UL)
 #define R_GPT0_GTDTCR_TDBDE_Pos           (5UL)
 #define R_GPT0_GTDTCR_TDBDE_Msk           (0x20UL)
 #define R_GPT0_GTDTCR_TDBUE_Pos           (4UL)
 #define R_GPT0_GTDTCR_TDBUE_Msk           (0x10UL)
 #define R_GPT0_GTDTCR_TDE_Pos             (0UL)
 #define R_GPT0_GTDTCR_TDE_Msk             (0x1UL)
/* =========================================================  GTDVU  ========================================================= */
 #define R_GPT0_GTDVU_GTDVU_Pos            (0UL)
 #define R_GPT0_GTDVU_GTDVU_Msk            (0xffffffffUL)
/* =========================================================  GTDVD  ========================================================= */
 #define R_GPT0_GTDVD_GTDVD_Pos            (0UL)
 #define R_GPT0_GTDVD_GTDVD_Msk            (0xffffffffUL)
/* =========================================================  GTDBU  ========================================================= */
 #define R_GPT0_GTDBU_GTDVU_Pos            (0UL)
 #define R_GPT0_GTDBU_GTDVU_Msk            (0xffffffffUL)
/* =========================================================  GTDBD  ========================================================= */
 #define R_GPT0_GTDBD_GTDBD_Pos            (0UL)
 #define R_GPT0_GTDBD_GTDBD_Msk            (0xffffffffUL)
/* =========================================================  GTSOS  ========================================================= */
 #define R_GPT0_GTSOS_SOS_Pos              (0UL)
 #define R_GPT0_GTSOS_SOS_Msk              (0x3UL)
/* ========================================================  GTSOTR  ========================================================= */
 #define R_GPT0_GTSOTR_SOTR_Pos            (0UL)
 #define R_GPT0_GTSOTR_SOTR_Msk            (0x1UL)
/* ========================================================  GTADSMR  ======================================================== */
 #define R_GPT0_GTADSMR_ADSMS0_Pos         (0UL)
 #define R_GPT0_GTADSMR_ADSMS0_Msk         (0x3UL)
 #define R_GPT0_GTADSMR_ADSMEN0_Pos        (8UL)
 #define R_GPT0_GTADSMR_ADSMEN0_Msk        (0x100UL)
 #define R_GPT0_GTADSMR_ADSMS1_Pos         (16UL)
 #define R_GPT0_GTADSMR_ADSMS1_Msk         (0x30000UL)
 #define R_GPT0_GTADSMR_ADSMEN1_Pos        (24UL)
 #define R_GPT0_GTADSMR_ADSMEN1_Msk        (0x1000000UL)
/* ========================================================  GTEITC  ========================================================= */
 #define R_GPT0_GTEITC_EIVTC1_Pos          (0UL)
 #define R_GPT0_GTEITC_EIVTC1_Msk          (0x3UL)
 #define R_GPT0_GTEITC_EIVTT1_Pos          (4UL)
 #define R_GPT0_GTEITC_EIVTT1_Msk          (0xf0UL)
 #define R_GPT0_GTEITC_EITCNT1_Pos         (12UL)
 #define R_GPT0_GTEITC_EITCNT1_Msk         (0xf000UL)
 #define R_GPT0_GTEITC_EIVTC2_Pos          (16UL)
 #define R_GPT0_GTEITC_EIVTC2_Msk          (0x30000UL)
 #define R_GPT0_GTEITC_EIVTT2_Pos          (20UL)
 #define R_GPT0_GTEITC_EIVTT2_Msk          (0xf00000UL)
 #define R_GPT0_GTEITC_EITCNT2IV_Pos       (24UL)
 #define R_GPT0_GTEITC_EITCNT2IV_Msk       (0xf000000UL)
 #define R_GPT0_GTEITC_EITCNT2_Pos         (28UL)
 #define R_GPT0_GTEITC_EITCNT2_Msk         (0xf0000000UL)
/* =======================================================  GTEITLI1  ======================================================== */
 #define R_GPT0_GTEITLI1_EITLA_Pos         (0UL)
 #define R_GPT0_GTEITLI1_EITLA_Msk         (0x7UL)
 #define R_GPT0_GTEITLI1_EITLB_Pos         (4UL)
 #define R_GPT0_GTEITLI1_EITLB_Msk         (0x70UL)
 #define R_GPT0_GTEITLI1_EITLC_Pos         (8UL)
 #define R_GPT0_GTEITLI1_EITLC_Msk         (0x700UL)
 #define R_GPT0_GTEITLI1_EITLD_Pos         (12UL)
 #define R_GPT0_GTEITLI1_EITLD_Msk         (0x7000UL)
 #define R_GPT0_GTEITLI1_EITLE_Pos         (16UL)
 #define R_GPT0_GTEITLI1_EITLE_Msk         (0x70000UL)
 #define R_GPT0_GTEITLI1_EITLF_Pos         (20UL)
 #define R_GPT0_GTEITLI1_EITLF_Msk         (0x700000UL)
 #define R_GPT0_GTEITLI1_EITLV_Pos         (24UL)
 #define R_GPT0_GTEITLI1_EITLV_Msk         (0x7000000UL)
 #define R_GPT0_GTEITLI1_EITLU_Pos         (28UL)
 #define R_GPT0_GTEITLI1_EITLU_Msk         (0x70000000UL)
/* =======================================================  GTEITLI2  ======================================================== */
 #define R_GPT0_GTEITLI2_EADTAL_Pos        (0UL)
 #define R_GPT0_GTEITLI2_EADTAL_Msk        (0x7UL)
 #define R_GPT0_GTEITLI2_EADTBL_Pos        (4UL)
 #define R_GPT0_GTEITLI2_EADTBL_Msk        (0x70UL)
/* ========================================================  GTEITLB  ======================================================== */
 #define R_GPT0_GTEITLB_EBTLCA_Pos         (0UL)
 #define R_GPT0_GTEITLB_EBTLCA_Msk         (0x7UL)
 #define R_GPT0_GTEITLB_EBTLCB_Pos         (4UL)
 #define R_GPT0_GTEITLB_EBTLCB_Msk         (0x70UL)
 #define R_GPT0_GTEITLB_EBTLPR_Pos         (8UL)
 #define R_GPT0_GTEITLB_EBTLPR_Msk         (0x700UL)
 #define R_GPT0_GTEITLB_EBTLADA_Pos        (16UL)
 #define R_GPT0_GTEITLB_EBTLADA_Msk        (0x70000UL)
 #define R_GPT0_GTEITLB_EBTLADB_Pos        (20UL)
 #define R_GPT0_GTEITLB_EBTLADB_Msk        (0x700000UL)
 #define R_GPT0_GTEITLB_EBTLDVU_Pos        (24UL)
 #define R_GPT0_GTEITLB_EBTLDVU_Msk        (0x7000000UL)
 #define R_GPT0_GTEITLB_EBTLDVD_Pos        (28UL)
 #define R_GPT0_GTEITLB_EBTLDVD_Msk        (0x70000000UL)
/* ========================================================  GTICLF  ========================================================= */
 #define R_GPT0_GTICLF_ICLFA_Pos           (0UL)
 #define R_GPT0_GTICLF_ICLFA_Msk           (0x7UL)
 #define R_GPT0_GTICLF_ICLFSELC_Pos        (4UL)
 #define R_GPT0_GTICLF_ICLFSELC_Msk        (0x3f0UL)
 #define R_GPT0_GTICLF_ICLFB_Pos           (16UL)
 #define R_GPT0_GTICLF_ICLFB_Msk           (0x70000UL)
 #define R_GPT0_GTICLF_ICLFSELD_Pos        (20UL)
 #define R_GPT0_GTICLF_ICLFSELD_Msk        (0x3f00000UL)
/* =========================================================  GTPC  ========================================================== */
 #define R_GPT0_GTPC_PCEN_Pos              (0UL)
 #define R_GPT0_GTPC_PCEN_Msk              (0x1UL)
 #define R_GPT0_GTPC_ASTP_Pos              (8UL)
 #define R_GPT0_GTPC_ASTP_Msk              (0x100UL)
 #define R_GPT0_GTPC_PCNT_Pos              (16UL)
 #define R_GPT0_GTPC_PCNT_Msk              (0xfff0000UL)
/* ========================================================  GTSECSR  ======================================================== */
 #define R_GPT0_GTSECSR_SECSEL0_Pos        (0UL)
 #define R_GPT0_GTSECSR_SECSEL0_Msk        (0x1UL)
 #define R_GPT0_GTSECSR_SECSEL1_Pos        (1UL)
 #define R_GPT0_GTSECSR_SECSEL1_Msk        (0x2UL)
 #define R_GPT0_GTSECSR_SECSEL2_Pos        (2UL)
 #define R_GPT0_GTSECSR_SECSEL2_Msk        (0x4UL)
 #define R_GPT0_GTSECSR_SECSEL3_Pos        (3UL)
 #define R_GPT0_GTSECSR_SECSEL3_Msk        (0x8UL)
 #define R_GPT0_GTSECSR_SECSEL4_Pos        (4UL)
 #define R_GPT0_GTSECSR_SECSEL4_Msk        (0x10UL)
 #define R_GPT0_GTSECSR_SECSEL5_Pos        (5UL)
 #define R_GPT0_GTSECSR_SECSEL5_Msk        (0x20UL)
 #define R_GPT0_GTSECSR_SECSEL6_Pos        (6UL)
 #define R_GPT0_GTSECSR_SECSEL6_Msk        (0x40UL)
 #define R_GPT0_GTSECSR_SECSEL7_Pos        (7UL)
 #define R_GPT0_GTSECSR_SECSEL7_Msk        (0x80UL)
 #define R_GPT0_GTSECSR_SECSEL8_Pos        (8UL)
 #define R_GPT0_GTSECSR_SECSEL8_Msk        (0x100UL)
 #define R_GPT0_GTSECSR_SECSEL9_Pos        (9UL)
 #define R_GPT0_GTSECSR_SECSEL9_Msk        (0x200UL)
/* ========================================================  GTSECR  ========================================================= */
 #define R_GPT0_GTSECR_SBDCE_Pos           (0UL)
 #define R_GPT0_GTSECR_SBDCE_Msk           (0x1UL)
 #define R_GPT0_GTSECR_SBDPE_Pos           (1UL)
 #define R_GPT0_GTSECR_SBDPE_Msk           (0x2UL)
 #define R_GPT0_GTSECR_SBDAE_Pos           (2UL)
 #define R_GPT0_GTSECR_SBDAE_Msk           (0x4UL)
 #define R_GPT0_GTSECR_SBDDE_Pos           (3UL)
 #define R_GPT0_GTSECR_SBDDE_Msk           (0x8UL)
 #define R_GPT0_GTSECR_SBDCD_Pos           (8UL)
 #define R_GPT0_GTSECR_SBDCD_Msk           (0x100UL)
 #define R_GPT0_GTSECR_SBDPD_Pos           (9UL)
 #define R_GPT0_GTSECR_SBDPD_Msk           (0x200UL)
 #define R_GPT0_GTSECR_SBDAD_Pos           (10UL)
 #define R_GPT0_GTSECR_SBDAD_Msk           (0x400UL)
 #define R_GPT0_GTSECR_SBDDD_Pos           (11UL)
 #define R_GPT0_GTSECR_SBDDD_Msk           (0x800UL)
 #define R_GPT0_GTSECR_SPCE_Pos            (16UL)
 #define R_GPT0_GTSECR_SPCE_Msk            (0x10000UL)
 #define R_GPT0_GTSECR_SSCE_Pos            (17UL)
 #define R_GPT0_GTSECR_SSCE_Msk            (0x20000UL)
 #define R_GPT0_GTSECR_SPCD_Pos            (24UL)
 #define R_GPT0_GTSECR_SPCD_Msk            (0x1000000UL)
 #define R_GPT0_GTSECR_SSCD_Pos            (25UL)
 #define R_GPT0_GTSECR_SSCD_Msk            (0x2000000UL)
/* ========================================================  GTBER2  ========================================================= */
 #define R_GPT0_GTBER2_CCTCA_Pos           (0UL)
 #define R_GPT0_GTBER2_CCTCA_Msk           (0x1UL)
 #define R_GPT0_GTBER2_CCTCB_Pos           (1UL)
 #define R_GPT0_GTBER2_CCTCB_Msk           (0x2UL)
 #define R_GPT0_GTBER2_CCTPR_Pos           (2UL)
 #define R_GPT0_GTBER2_CCTPR_Msk           (0x4UL)
 #define R_GPT0_GTBER2_CCTADA_Pos          (3UL)
 #define R_GPT0_GTBER2_CCTADA_Msk          (0x8UL)
 #define R_GPT0_GTBER2_CCTADB_Pos          (4UL)
 #define R_GPT0_GTBER2_CCTADB_Msk          (0x10UL)
 #define R_GPT0_GTBER2_CCTDV_Pos           (5UL)
 #define R_GPT0_GTBER2_CCTDV_Msk           (0x20UL)
 #define R_GPT0_GTBER2_CMTCA_Pos           (8UL)
 #define R_GPT0_GTBER2_CMTCA_Msk           (0x300UL)
 #define R_GPT0_GTBER2_CMTCB_Pos           (10UL)
 #define R_GPT0_GTBER2_CMTCB_Msk           (0xc00UL)
 #define R_GPT0_GTBER2_CMTADA_Pos          (13UL)
 #define R_GPT0_GTBER2_CMTADA_Msk          (0x2000UL)
 #define R_GPT0_GTBER2_CMTADB_Pos          (14UL)
 #define R_GPT0_GTBER2_CMTADB_Msk          (0x4000UL)
 #define R_GPT0_GTBER2_CPTCA_Pos           (16UL)
 #define R_GPT0_GTBER2_CPTCA_Msk           (0x10000UL)
 #define R_GPT0_GTBER2_CPTCB_Pos           (17UL)
 #define R_GPT0_GTBER2_CPTCB_Msk           (0x20000UL)
 #define R_GPT0_GTBER2_CPTPR_Pos           (18UL)
 #define R_GPT0_GTBER2_CPTPR_Msk           (0x40000UL)
 #define R_GPT0_GTBER2_CPTADA_Pos          (19UL)
 #define R_GPT0_GTBER2_CPTADA_Msk          (0x80000UL)
 #define R_GPT0_GTBER2_CPTADB_Pos          (20UL)
 #define R_GPT0_GTBER2_CPTADB_Msk          (0x100000UL)
 #define R_GPT0_GTBER2_CPTDV_Pos           (21UL)
 #define R_GPT0_GTBER2_CPTDV_Msk           (0x200000UL)
 #define R_GPT0_GTBER2_CP3DB_Pos           (24UL)
 #define R_GPT0_GTBER2_CP3DB_Msk           (0x1000000UL)
 #define R_GPT0_GTBER2_CPBTD_Pos           (25UL)
 #define R_GPT0_GTBER2_CPBTD_Msk           (0x2000000UL)
 #define R_GPT0_GTBER2_OLTTA_Pos           (26UL)
 #define R_GPT0_GTBER2_OLTTA_Msk           (0xc000000UL)
 #define R_GPT0_GTBER2_OLTTB_Pos           (28UL)
 #define R_GPT0_GTBER2_OLTTB_Msk           (0x30000000UL)
/* ========================================================  GTOLBR  ========================================================= */
 #define R_GPT0_GTOLBR_GTIOAB_Pos          (0UL)
 #define R_GPT0_GTOLBR_GTIOAB_Msk          (0x1fUL)
 #define R_GPT0_GTOLBR_GTIOBB_Pos          (16UL)
 #define R_GPT0_GTOLBR_GTIOBB_Msk          (0x1f0000UL)
/* ========================================================  GTICCR  ========================================================= */
 #define R_GPT0_GTICCR_ICAFA_Pos           (0UL)
 #define R_GPT0_GTICCR_ICAFA_Msk           (0x1UL)
 #define R_GPT0_GTICCR_ICAFB_Pos           (1UL)
 #define R_GPT0_GTICCR_ICAFB_Msk           (0x2UL)
 #define R_GPT0_GTICCR_ICAFC_Pos           (2UL)
 #define R_GPT0_GTICCR_ICAFC_Msk           (0x4UL)
 #define R_GPT0_GTICCR_ICAFD_Pos           (3UL)
 #define R_GPT0_GTICCR_ICAFD_Msk           (0x8UL)
 #define R_GPT0_GTICCR_ICAFE_Pos           (4UL)
 #define R_GPT0_GTICCR_ICAFE_Msk           (0x10UL)
 #define R_GPT0_GTICCR_ICAFF_Pos           (5UL)
 #define R_GPT0_GTICCR_ICAFF_Msk           (0x20UL)
 #define R_GPT0_GTICCR_ICAFPO_Pos          (6UL)
 #define R_GPT0_GTICCR_ICAFPO_Msk          (0x40UL)
 #define R_GPT0_GTICCR_ICAFPU_Pos          (7UL)
 #define R_GPT0_GTICCR_ICAFPU_Msk          (0x80UL)
 #define R_GPT0_GTICCR_ICACLK_Pos          (8UL)
 #define R_GPT0_GTICCR_ICACLK_Msk          (0x100UL)
 #define R_GPT0_GTICCR_ICAGRP_Pos          (14UL)
 #define R_GPT0_GTICCR_ICAGRP_Msk          (0xc000UL)
 #define R_GPT0_GTICCR_ICBFA_Pos           (16UL)
 #define R_GPT0_GTICCR_ICBFA_Msk           (0x10000UL)
 #define R_GPT0_GTICCR_ICBFB_Pos           (17UL)
 #define R_GPT0_GTICCR_ICBFB_Msk           (0x20000UL)
 #define R_GPT0_GTICCR_ICBFC_Pos           (18UL)
 #define R_GPT0_GTICCR_ICBFC_Msk           (0x40000UL)
 #define R_GPT0_GTICCR_ICBFD_Pos           (19UL)
 #define R_GPT0_GTICCR_ICBFD_Msk           (0x80000UL)
 #define R_GPT0_GTICCR_ICBFE_Pos           (20UL)
 #define R_GPT0_GTICCR_ICBFE_Msk           (0x100000UL)
 #define R_GPT0_GTICCR_ICBFF_Pos           (21UL)
 #define R_GPT0_GTICCR_ICBFF_Msk           (0x200000UL)
 #define R_GPT0_GTICCR_ICBFPO_Pos          (22UL)
 #define R_GPT0_GTICCR_ICBFPO_Msk          (0x400000UL)
 #define R_GPT0_GTICCR_ICBFPU_Pos          (23UL)
 #define R_GPT0_GTICCR_ICBFPU_Msk          (0x800000UL)
 #define R_GPT0_GTICCR_ICBCLK_Pos          (24UL)
 #define R_GPT0_GTICCR_ICBCLK_Msk          (0x1000000UL)
 #define R_GPT0_GTICCR_ICBGRP_Pos          (30UL)
 #define R_GPT0_GTICCR_ICBGRP_Msk          (0xc0000000UL)

/* =========================================================================================================================== */
/* ================                                         R_GPT_ODC                                         ================ */
/* =========================================================================================================================== */

/* =======================================================  GTDLYCR1  ======================================================== */
 #define R_GPT_ODC_GTDLYCR1_FRANGE_Pos     (8UL)
 #define R_GPT_ODC_GTDLYCR1_FRANGE_Msk     (0x100UL)
 #define R_GPT_ODC_GTDLYCR1_DLYRST_Pos     (1UL)
 #define R_GPT_ODC_GTDLYCR1_DLYRST_Msk     (0x2UL)
 #define R_GPT_ODC_GTDLYCR1_DLLEN_Pos      (0UL)
 #define R_GPT_ODC_GTDLYCR1_DLLEN_Msk      (0x1UL)
/* =======================================================  GTDLYCR2  ======================================================== */
 #define R_GPT_ODC_GTDLYCR2_DLYDENB_Pos    (12UL)
 #define R_GPT_ODC_GTDLYCR2_DLYDENB_Msk    (0x1000UL)
 #define R_GPT_ODC_GTDLYCR2_DLYEN_Pos      (8UL)
 #define R_GPT_ODC_GTDLYCR2_DLYEN_Msk      (0x100UL)
 #define R_GPT_ODC_GTDLYCR2_DLYBS_Pos      (0UL)
 #define R_GPT_ODC_GTDLYCR2_DLYBS_Msk      (0x1UL)

/* =========================================================================================================================== */
/* ================                                         R_GPT_OPS                                         ================ */
/* =========================================================================================================================== */

/* =========================================================  OPSCR  ========================================================= */
 #define R_GPT_OPS_OPSCR_NFCS_Pos     (30UL)
 #define R_GPT_OPS_OPSCR_NFCS_Msk     (0xc0000000UL)
 #define R_GPT_OPS_OPSCR_NFEN_Pos     (29UL)
 #define R_GPT_OPS_OPSCR_NFEN_Msk     (0x20000000UL)
 #define R_GPT_OPS_OPSCR_GODF_Pos     (26UL)
 #define R_GPT_OPS_OPSCR_GODF_Msk     (0x4000000UL)
 #define R_GPT_OPS_OPSCR_GRP_Pos      (24UL)
 #define R_GPT_OPS_OPSCR_GRP_Msk      (0x3000000UL)
 #define R_GPT_OPS_OPSCR_ALIGN_Pos    (21UL)
 #define R_GPT_OPS_OPSCR_ALIGN_Msk    (0x200000UL)
 #define R_GPT_OPS_OPSCR_RV_Pos       (20UL)
 #define R_GPT_OPS_OPSCR_RV_Msk       (0x100000UL)
 #define R_GPT_OPS_OPSCR_INV_Pos      (19UL)
 #define R_GPT_OPS_OPSCR_INV_Msk      (0x80000UL)
 #define R_GPT_OPS_OPSCR_N_Pos        (18UL)
 #define R_GPT_OPS_OPSCR_N_Msk        (0x40000UL)
 #define R_GPT_OPS_OPSCR_P_Pos        (17UL)
 #define R_GPT_OPS_OPSCR_P_Msk        (0x20000UL)
 #define R_GPT_OPS_OPSCR_FB_Pos       (16UL)
 #define R_GPT_OPS_OPSCR_FB_Msk       (0x10000UL)
 #define R_GPT_OPS_OPSCR_EN_Pos       (8UL)
 #define R_GPT_OPS_OPSCR_EN_Msk       (0x100UL)
 #define R_GPT_OPS_OPSCR_W_Pos        (6UL)
 #define R_GPT_OPS_OPSCR_W_Msk        (0x40UL)
 #define R_GPT_OPS_OPSCR_V_Pos        (5UL)
 #define R_GPT_OPS_OPSCR_V_Msk        (0x20UL)
 #define R_GPT_OPS_OPSCR_U_Pos        (4UL)
 #define R_GPT_OPS_OPSCR_U_Msk        (0x10UL)
 #define R_GPT_OPS_OPSCR_WF_Pos       (2UL)
 #define R_GPT_OPS_OPSCR_WF_Msk       (0x4UL)
 #define R_GPT_OPS_OPSCR_VF_Pos       (1UL)
 #define R_GPT_OPS_OPSCR_VF_Msk       (0x2UL)
 #define R_GPT_OPS_OPSCR_UF_Pos       (0UL)
 #define R_GPT_OPS_OPSCR_UF_Msk       (0x1UL)

/* =========================================================================================================================== */
/* ================                                        R_GPT_POEG0                                        ================ */
/* =========================================================================================================================== */

/* =========================================================  POEGG  ========================================================= */
 #define R_GPT_POEG0_POEGG_NFCS_Pos       (30UL)
 #define R_GPT_POEG0_POEGG_NFCS_Msk       (0xc0000000UL)
 #define R_GPT_POEG0_POEGG_NFEN_Pos       (29UL)
 #define R_GPT_POEG0_POEGG_NFEN_Msk       (0x20000000UL)
 #define R_GPT_POEG0_POEGG_INV_Pos        (28UL)
 #define R_GPT_POEG0_POEGG_INV_Msk        (0x10000000UL)
 #define R_GPT_POEG0_POEGG_DERRE_Pos      (26UL)
 #define R_GPT_POEG0_POEGG_DERRE_Msk      (0x4000000UL)
 #define R_GPT_POEG0_POEGG_DERRST_Pos     (24UL)
 #define R_GPT_POEG0_POEGG_DERRST_Msk     (0x1000000UL)
 #define R_GPT_POEG0_POEGG_ST_Pos         (16UL)
 #define R_GPT_POEG0_POEGG_ST_Msk         (0x10000UL)
 #define R_GPT_POEG0_POEGG_CDRE_Pos       (8UL)
 #define R_GPT_POEG0_POEGG_CDRE_Msk       (0x100UL)
 #define R_GPT_POEG0_POEGG_OSTPE_Pos      (6UL)
 #define R_GPT_POEG0_POEGG_OSTPE_Msk      (0x40UL)
 #define R_GPT_POEG0_POEGG_IOCE_Pos       (5UL)
 #define R_GPT_POEG0_POEGG_IOCE_Msk       (0x20UL)
 #define R_GPT_POEG0_POEGG_PIDE_Pos       (4UL)
 #define R_GPT_POEG0_POEGG_PIDE_Msk       (0x10UL)
 #define R_GPT_POEG0_POEGG_SSF_Pos        (3UL)
 #define R_GPT_POEG0_POEGG_SSF_Msk        (0x8UL)
 #define R_GPT_POEG0_POEGG_OSTPF_Pos      (2UL)
 #define R_GPT_POEG0_POEGG_OSTPF_Msk      (0x4UL)
 #define R_GPT_POEG0_POEGG_IOCF_Pos       (1UL)
 #define R_GPT_POEG0_POEGG_IOCF_Msk       (0x2UL)
 #define R_GPT_POEG0_POEGG_PIDF_Pos       (0UL)
 #define R_GPT_POEG0_POEGG_PIDF_Msk       (0x1UL)
/* ========================================================  GTONCWP  ======================================================== */
 #define R_GPT_POEG0_GTONCWP_WP_Pos       (0UL)
 #define R_GPT_POEG0_GTONCWP_WP_Msk       (0x1UL)
 #define R_GPT_POEG0_GTONCWP_PRKEY_Pos    (8UL)
 #define R_GPT_POEG0_GTONCWP_PRKEY_Msk    (0xff00UL)
/* ========================================================  GTONCCR  ======================================================== */
 #define R_GPT_POEG0_GTONCCR_NE_Pos       (0UL)
 #define R_GPT_POEG0_GTONCCR_NE_Msk       (0x1UL)
 #define R_GPT_POEG0_GTONCCR_NFS_Pos      (4UL)
 #define R_GPT_POEG0_GTONCCR_NFS_Msk      (0xf0UL)
 #define R_GPT_POEG0_GTONCCR_NFV_Pos      (8UL)
 #define R_GPT_POEG0_GTONCCR_NFV_Msk      (0x100UL)

/* =========================================================================================================================== */
/* ================                                           R_ICU                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  IRQCR  ========================================================= */
 #define R_ICU_IRQCR_FLTEN_Pos           (7UL)
 #define R_ICU_IRQCR_FLTEN_Msk           (0x80UL)
 #define R_ICU_IRQCR_FCLKSEL_Pos         (4UL)
 #define R_ICU_IRQCR_FCLKSEL_Msk         (0x30UL)
 #define R_ICU_IRQCR_IRQMD_Pos           (0UL)
 #define R_ICU_IRQCR_IRQMD_Msk           (0x3UL)
/* =========================================================  NMISR  ========================================================= */
 #define R_ICU_NMISR_SPEST_Pos           (12UL)
 #define R_ICU_NMISR_SPEST_Msk           (0x1000UL)
 #define R_ICU_NMISR_BUSMST_Pos          (11UL)
 #define R_ICU_NMISR_BUSMST_Msk          (0x800UL)
 #define R_ICU_NMISR_BUSSST_Pos          (10UL)
 #define R_ICU_NMISR_BUSSST_Msk          (0x400UL)
 #define R_ICU_NMISR_RECCST_Pos          (9UL)
 #define R_ICU_NMISR_RECCST_Msk          (0x200UL)
 #define R_ICU_NMISR_RPEST_Pos           (8UL)
 #define R_ICU_NMISR_RPEST_Msk           (0x100UL)
 #define R_ICU_NMISR_NMIST_Pos           (7UL)
 #define R_ICU_NMISR_NMIST_Msk           (0x80UL)
 #define R_ICU_NMISR_OSTST_Pos           (6UL)
 #define R_ICU_NMISR_OSTST_Msk           (0x40UL)
 #define R_ICU_NMISR_VBATTST_Pos         (4UL)
 #define R_ICU_NMISR_VBATTST_Msk         (0x10UL)
 #define R_ICU_NMISR_LVD2ST_Pos          (3UL)
 #define R_ICU_NMISR_LVD2ST_Msk          (0x8UL)
 #define R_ICU_NMISR_LVD1ST_Pos          (2UL)
 #define R_ICU_NMISR_LVD1ST_Msk          (0x4UL)
 #define R_ICU_NMISR_WDTST_Pos           (1UL)
 #define R_ICU_NMISR_WDTST_Msk           (0x2UL)
 #define R_ICU_NMISR_IWDTST_Pos          (0UL)
 #define R_ICU_NMISR_IWDTST_Msk          (0x1UL)
 #define R_ICU_NMISR_TZFST_Pos           (13UL)
 #define R_ICU_NMISR_TZFST_Msk           (0x2000UL)
 #define R_ICU_NMISR_CPEST_Pos           (15UL)
 #define R_ICU_NMISR_CPEST_Msk           (0x8000UL)
/* =========================================================  NMIER  ========================================================= */
 #define R_ICU_NMIER_SPEEN_Pos           (12UL)
 #define R_ICU_NMIER_SPEEN_Msk           (0x1000UL)
 #define R_ICU_NMIER_BUSMEN_Pos          (11UL)
 #define R_ICU_NMIER_BUSMEN_Msk          (0x800UL)
 #define R_ICU_NMIER_BUSSEN_Pos          (10UL)
 #define R_ICU_NMIER_BUSSEN_Msk          (0x400UL)
 #define R_ICU_NMIER_RECCEN_Pos          (9UL)
 #define R_ICU_NMIER_RECCEN_Msk          (0x200UL)
 #define R_ICU_NMIER_RPEEN_Pos           (8UL)
 #define R_ICU_NMIER_RPEEN_Msk           (0x100UL)
 #define R_ICU_NMIER_NMIEN_Pos           (7UL)
 #define R_ICU_NMIER_NMIEN_Msk           (0x80UL)
 #define R_ICU_NMIER_OSTEN_Pos           (6UL)
 #define R_ICU_NMIER_OSTEN_Msk           (0x40UL)
 #define R_ICU_NMIER_VBATTEN_Pos         (4UL)
 #define R_ICU_NMIER_VBATTEN_Msk         (0x10UL)
 #define R_ICU_NMIER_LVD2EN_Pos          (3UL)
 #define R_ICU_NMIER_LVD2EN_Msk          (0x8UL)
 #define R_ICU_NMIER_LVD1EN_Pos          (2UL)
 #define R_ICU_NMIER_LVD1EN_Msk          (0x4UL)
 #define R_ICU_NMIER_WDTEN_Pos           (1UL)
 #define R_ICU_NMIER_WDTEN_Msk           (0x2UL)
 #define R_ICU_NMIER_IWDTEN_Pos          (0UL)
 #define R_ICU_NMIER_IWDTEN_Msk          (0x1UL)
 #define R_ICU_NMIER_TZFEN_Pos           (13UL)
 #define R_ICU_NMIER_TZFEN_Msk           (0x2000UL)
 #define R_ICU_NMIER_CPEEN_Pos           (15UL)
 #define R_ICU_NMIER_CPEEN_Msk           (0x8000UL)
/* ========================================================  NMICLR  ========================================================= */
 #define R_ICU_NMICLR_SPECLR_Pos         (12UL)
 #define R_ICU_NMICLR_SPECLR_Msk         (0x1000UL)
 #define R_ICU_NMICLR_BUSMCLR_Pos        (11UL)
 #define R_ICU_NMICLR_BUSMCLR_Msk        (0x800UL)
 #define R_ICU_NMICLR_BUSSCLR_Pos        (10UL)
 #define R_ICU_NMICLR_BUSSCLR_Msk        (0x400UL)
 #define R_ICU_NMICLR_RECCCLR_Pos        (9UL)
 #define R_ICU_NMICLR_RECCCLR_Msk        (0x200UL)
 #define R_ICU_NMICLR_RPECLR_Pos         (8UL)
 #define R_ICU_NMICLR_RPECLR_Msk         (0x100UL)
 #define R_ICU_NMICLR_NMICLR_Pos         (7UL)
 #define R_ICU_NMICLR_NMICLR_Msk         (0x80UL)
 #define R_ICU_NMICLR_OSTCLR_Pos         (6UL)
 #define R_ICU_NMICLR_OSTCLR_Msk         (0x40UL)
 #define R_ICU_NMICLR_VBATTCLR_Pos       (4UL)
 #define R_ICU_NMICLR_VBATTCLR_Msk       (0x10UL)
 #define R_ICU_NMICLR_LVD2CLR_Pos        (3UL)
 #define R_ICU_NMICLR_LVD2CLR_Msk        (0x8UL)
 #define R_ICU_NMICLR_LVD1CLR_Pos        (2UL)
 #define R_ICU_NMICLR_LVD1CLR_Msk        (0x4UL)
 #define R_ICU_NMICLR_WDTCLR_Pos         (1UL)
 #define R_ICU_NMICLR_WDTCLR_Msk         (0x2UL)
 #define R_ICU_NMICLR_IWDTCLR_Pos        (0UL)
 #define R_ICU_NMICLR_IWDTCLR_Msk        (0x1UL)
 #define R_ICU_NMICLR_TZFCLR_Pos         (13UL)
 #define R_ICU_NMICLR_TZFCLR_Msk         (0x2000UL)
 #define R_ICU_NMICLR_CPECLR_Pos         (15UL)
 #define R_ICU_NMICLR_CPECLR_Msk         (0x8000UL)
/* =========================================================  NMICR  ========================================================= */
 #define R_ICU_NMICR_NFLTEN_Pos          (7UL)
 #define R_ICU_NMICR_NFLTEN_Msk          (0x80UL)
 #define R_ICU_NMICR_NFCLKSEL_Pos        (4UL)
 #define R_ICU_NMICR_NFCLKSEL_Msk        (0x30UL)
 #define R_ICU_NMICR_NMIMD_Pos           (0UL)
 #define R_ICU_NMICR_NMIMD_Msk           (0x1UL)
/* =========================================================  IELSR  ========================================================= */
 #define R_ICU_IELSR_DTCE_Pos            (24UL)
 #define R_ICU_IELSR_DTCE_Msk            (0x1000000UL)
 #define R_ICU_IELSR_IR_Pos              (16UL)
 #define R_ICU_IELSR_IR_Msk              (0x10000UL)
 #define R_ICU_IELSR_IELS_Pos            (0UL)
 #define R_ICU_IELSR_IELS_Msk            (0x1ffUL)
/* =========================================================  DELSR  ========================================================= */
 #define R_ICU_DELSR_IR_Pos              (16UL)
 #define R_ICU_DELSR_IR_Msk              (0x10000UL)
 #define R_ICU_DELSR_DELS_Pos            (0UL)
 #define R_ICU_DELSR_DELS_Msk            (0x1ffUL)
/* ========================================================  SELSR0  ========================================================= */
 #define R_ICU_SELSR0_SELS_Pos           (0UL)
 #define R_ICU_SELSR0_SELS_Msk           (0x1ffUL)
/* =========================================================  WUPEN  ========================================================= */
 #define R_ICU_WUPEN_IIC0WUPEN_Pos       (31UL)
 #define R_ICU_WUPEN_IIC0WUPEN_Msk       (0x80000000UL)
 #define R_ICU_WUPEN_AGT1CBWUPEN_Pos     (30UL)
 #define R_ICU_WUPEN_AGT1CBWUPEN_Msk     (0x40000000UL)
 #define R_ICU_WUPEN_AGT1CAWUPEN_Pos     (29UL)
 #define R_ICU_WUPEN_AGT1CAWUPEN_Msk     (0x20000000UL)
 #define R_ICU_WUPEN_AGT1UDWUPEN_Pos     (28UL)
 #define R_ICU_WUPEN_AGT1UDWUPEN_Msk     (0x10000000UL)
 #define R_ICU_WUPEN_USBFSWUPEN_Pos      (27UL)
 #define R_ICU_WUPEN_USBFSWUPEN_Msk      (0x8000000UL)
 #define R_ICU_WUPEN_USBHSWUPEN_Pos      (26UL)
 #define R_ICU_WUPEN_USBHSWUPEN_Msk      (0x4000000UL)
 #define R_ICU_WUPEN_RTCPRDWUPEN_Pos     (25UL)
 #define R_ICU_WUPEN_RTCPRDWUPEN_Msk     (0x2000000UL)
 #define R_ICU_WUPEN_RTCALMWUPEN_Pos     (24UL)
 #define R_ICU_WUPEN_RTCALMWUPEN_Msk     (0x1000000UL)
 #define R_ICU_WUPEN_ACMPLP0WUPEN_Pos    (23UL)
 #define R_ICU_WUPEN_ACMPLP0WUPEN_Msk    (0x800000UL)
 #define R_ICU_WUPEN_ACMPHS0WUPEN_Pos    (22UL)
 #define R_ICU_WUPEN_ACMPHS0WUPEN_Msk    (0x400000UL)
 #define R_ICU_WUPEN_VBATTWUPEN_Pos      (20UL)
 #define R_ICU_WUPEN_VBATTWUPEN_Msk      (0x100000UL)
 #define R_ICU_WUPEN_LVD2WUPEN_Pos       (19UL)
 #define R_ICU_WUPEN_LVD2WUPEN_Msk       (0x80000UL)
 #define R_ICU_WUPEN_LVD1WUPEN_Pos       (18UL)
 #define R_ICU_WUPEN_LVD1WUPEN_Msk       (0x40000UL)
 #define R_ICU_WUPEN_KEYWUPEN_Pos        (17UL)
 #define R_ICU_WUPEN_KEYWUPEN_Msk        (0x20000UL)
 #define R_ICU_WUPEN_IWDTWUPEN_Pos       (16UL)
 #define R_ICU_WUPEN_IWDTWUPEN_Msk       (0x10000UL)
 #define R_ICU_WUPEN_IRQWUPEN_Pos        (0UL)
 #define R_ICU_WUPEN_IRQWUPEN_Msk        (0x1UL)
/* ========================================================  WUPEN1  ========================================================= */
 #define R_ICU_WUPEN1_AGT3UDWUPEN_Pos    (0UL)
 #define R_ICU_WUPEN1_AGT3UDWUPEN_Msk    (0x1UL)
 #define R_ICU_WUPEN1_AGT3CAWUPEN_Pos    (1UL)
 #define R_ICU_WUPEN1_AGT3CAWUPEN_Msk    (0x2UL)
 #define R_ICU_WUPEN1_AGT3CBWUPEN_Pos    (2UL)
 #define R_ICU_WUPEN1_AGT3CBWUPEN_Msk    (0x4UL)
/* =========================================================  IELEN  ========================================================= */
 #define R_ICU_IELEN_IELEN_Pos           (1UL)
 #define R_ICU_IELEN_IELEN_Msk           (0x2UL)
 #define R_ICU_IELEN_RTCINTEN_Pos        (0UL)
 #define R_ICU_IELEN_RTCINTEN_Msk        (0x1UL)

/* =========================================================================================================================== */
/* ================                                          R_IIC0                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  ICCR1  ========================================================= */
 #define R_IIC0_ICCR1_ICE_Pos        (7UL)
 #define R_IIC0_ICCR1_ICE_Msk        (0x80UL)
 #define R_IIC0_ICCR1_IICRST_Pos     (6UL)
 #define R_IIC0_ICCR1_IICRST_Msk     (0x40UL)
 #define R_IIC0_ICCR1_CLO_Pos        (5UL)
 #define R_IIC0_ICCR1_CLO_Msk        (0x20UL)
 #define R_IIC0_ICCR1_SOWP_Pos       (4UL)
 #define R_IIC0_ICCR1_SOWP_Msk       (0x10UL)
 #define R_IIC0_ICCR1_SCLO_Pos       (3UL)
 #define R_IIC0_ICCR1_SCLO_Msk       (0x8UL)
 #define R_IIC0_ICCR1_SDAO_Pos       (2UL)
 #define R_IIC0_ICCR1_SDAO_Msk       (0x4UL)
 #define R_IIC0_ICCR1_SCLI_Pos       (1UL)
 #define R_IIC0_ICCR1_SCLI_Msk       (0x2UL)
 #define R_IIC0_ICCR1_SDAI_Pos       (0UL)
 #define R_IIC0_ICCR1_SDAI_Msk       (0x1UL)
/* =========================================================  ICCR2  ========================================================= */
 #define R_IIC0_ICCR2_BBSY_Pos       (7UL)
 #define R_IIC0_ICCR2_BBSY_Msk       (0x80UL)
 #define R_IIC0_ICCR2_MST_Pos        (6UL)
 #define R_IIC0_ICCR2_MST_Msk        (0x40UL)
 #define R_IIC0_ICCR2_TRS_Pos        (5UL)
 #define R_IIC0_ICCR2_TRS_Msk        (0x20UL)
 #define R_IIC0_ICCR2_SP_Pos         (3UL)
 #define R_IIC0_ICCR2_SP_Msk         (0x8UL)
 #define R_IIC0_ICCR2_RS_Pos         (2UL)
 #define R_IIC0_ICCR2_RS_Msk         (0x4UL)
 #define R_IIC0_ICCR2_ST_Pos         (1UL)
 #define R_IIC0_ICCR2_ST_Msk         (0x2UL)
/* =========================================================  ICMR1  ========================================================= */
 #define R_IIC0_ICMR1_MTWP_Pos       (7UL)
 #define R_IIC0_ICMR1_MTWP_Msk       (0x80UL)
 #define R_IIC0_ICMR1_CKS_Pos        (4UL)
 #define R_IIC0_ICMR1_CKS_Msk        (0x70UL)
 #define R_IIC0_ICMR1_BCWP_Pos       (3UL)
 #define R_IIC0_ICMR1_BCWP_Msk       (0x8UL)
 #define R_IIC0_ICMR1_BC_Pos         (0UL)
 #define R_IIC0_ICMR1_BC_Msk         (0x7UL)
/* =========================================================  ICMR2  ========================================================= */
 #define R_IIC0_ICMR2_DLCS_Pos       (7UL)
 #define R_IIC0_ICMR2_DLCS_Msk       (0x80UL)
 #define R_IIC0_ICMR2_SDDL_Pos       (4UL)
 #define R_IIC0_ICMR2_SDDL_Msk       (0x70UL)
 #define R_IIC0_ICMR2_TMOH_Pos       (2UL)
 #define R_IIC0_ICMR2_TMOH_Msk       (0x4UL)
 #define R_IIC0_ICMR2_TMOL_Pos       (1UL)
 #define R_IIC0_ICMR2_TMOL_Msk       (0x2UL)
 #define R_IIC0_ICMR2_TMOS_Pos       (0UL)
 #define R_IIC0_ICMR2_TMOS_Msk       (0x1UL)
/* =========================================================  ICMR3  ========================================================= */
 #define R_IIC0_ICMR3_SMBS_Pos       (7UL)
 #define R_IIC0_ICMR3_SMBS_Msk       (0x80UL)
 #define R_IIC0_ICMR3_WAIT_Pos       (6UL)
 #define R_IIC0_ICMR3_WAIT_Msk       (0x40UL)
 #define R_IIC0_ICMR3_RDRFS_Pos      (5UL)
 #define R_IIC0_ICMR3_RDRFS_Msk      (0x20UL)
 #define R_IIC0_ICMR3_ACKWP_Pos      (4UL)
 #define R_IIC0_ICMR3_ACKWP_Msk      (0x10UL)
 #define R_IIC0_ICMR3_ACKBT_Pos      (3UL)
 #define R_IIC0_ICMR3_ACKBT_Msk      (0x8UL)
 #define R_IIC0_ICMR3_ACKBR_Pos      (2UL)
 #define R_IIC0_ICMR3_ACKBR_Msk      (0x4UL)
 #define R_IIC0_ICMR3_NF_Pos         (0UL)
 #define R_IIC0_ICMR3_NF_Msk         (0x3UL)
/* =========================================================  ICFER  ========================================================= */
 #define R_IIC0_ICFER_FMPE_Pos       (7UL)
 #define R_IIC0_ICFER_FMPE_Msk       (0x80UL)
 #define R_IIC0_ICFER_SCLE_Pos       (6UL)
 #define R_IIC0_ICFER_SCLE_Msk       (0x40UL)
 #define R_IIC0_ICFER_NFE_Pos        (5UL)
 #define R_IIC0_ICFER_NFE_Msk        (0x20UL)
 #define R_IIC0_ICFER_NACKE_Pos      (4UL)
 #define R_IIC0_ICFER_NACKE_Msk      (0x10UL)
 #define R_IIC0_ICFER_SALE_Pos       (3UL)
 #define R_IIC0_ICFER_SALE_Msk       (0x8UL)
 #define R_IIC0_ICFER_NALE_Pos       (2UL)
 #define R_IIC0_ICFER_NALE_Msk       (0x4UL)
 #define R_IIC0_ICFER_MALE_Pos       (1UL)
 #define R_IIC0_ICFER_MALE_Msk       (0x2UL)
 #define R_IIC0_ICFER_TMOE_Pos       (0UL)
 #define R_IIC0_ICFER_TMOE_Msk       (0x1UL)
/* =========================================================  ICSER  ========================================================= */
 #define R_IIC0_ICSER_HOAE_Pos       (7UL)
 #define R_IIC0_ICSER_HOAE_Msk       (0x80UL)
 #define R_IIC0_ICSER_DIDE_Pos       (5UL)
 #define R_IIC0_ICSER_DIDE_Msk       (0x20UL)
 #define R_IIC0_ICSER_GCAE_Pos       (3UL)
 #define R_IIC0_ICSER_GCAE_Msk       (0x8UL)
 #define R_IIC0_ICSER_SAR2E_Pos      (2UL)
 #define R_IIC0_ICSER_SAR2E_Msk      (0x4UL)
 #define R_IIC0_ICSER_SAR1E_Pos      (1UL)
 #define R_IIC0_ICSER_SAR1E_Msk      (0x2UL)
 #define R_IIC0_ICSER_SAR0E_Pos      (0UL)
 #define R_IIC0_ICSER_SAR0E_Msk      (0x1UL)
/* =========================================================  ICIER  ========================================================= */
 #define R_IIC0_ICIER_TIE_Pos        (7UL)
 #define R_IIC0_ICIER_TIE_Msk        (0x80UL)
 #define R_IIC0_ICIER_TEIE_Pos       (6UL)
 #define R_IIC0_ICIER_TEIE_Msk       (0x40UL)
 #define R_IIC0_ICIER_RIE_Pos        (5UL)
 #define R_IIC0_ICIER_RIE_Msk        (0x20UL)
 #define R_IIC0_ICIER_NAKIE_Pos      (4UL)
 #define R_IIC0_ICIER_NAKIE_Msk      (0x10UL)
 #define R_IIC0_ICIER_SPIE_Pos       (3UL)
 #define R_IIC0_ICIER_SPIE_Msk       (0x8UL)
 #define R_IIC0_ICIER_STIE_Pos       (2UL)
 #define R_IIC0_ICIER_STIE_Msk       (0x4UL)
 #define R_IIC0_ICIER_ALIE_Pos       (1UL)
 #define R_IIC0_ICIER_ALIE_Msk       (0x2UL)
 #define R_IIC0_ICIER_TMOIE_Pos      (0UL)
 #define R_IIC0_ICIER_TMOIE_Msk      (0x1UL)
/* =========================================================  ICSR1  ========================================================= */
 #define R_IIC0_ICSR1_HOA_Pos        (7UL)
 #define R_IIC0_ICSR1_HOA_Msk        (0x80UL)
 #define R_IIC0_ICSR1_DID_Pos        (5UL)
 #define R_IIC0_ICSR1_DID_Msk        (0x20UL)
 #define R_IIC0_ICSR1_GCA_Pos        (3UL)
 #define R_IIC0_ICSR1_GCA_Msk        (0x8UL)
 #define R_IIC0_ICSR1_AAS2_Pos       (2UL)
 #define R_IIC0_ICSR1_AAS2_Msk       (0x4UL)
 #define R_IIC0_ICSR1_AAS1_Pos       (1UL)
 #define R_IIC0_ICSR1_AAS1_Msk       (0x2UL)
 #define R_IIC0_ICSR1_AAS0_Pos       (0UL)
 #define R_IIC0_ICSR1_AAS0_Msk       (0x1UL)
/* =========================================================  ICSR2  ========================================================= */
 #define R_IIC0_ICSR2_TDRE_Pos       (7UL)
 #define R_IIC0_ICSR2_TDRE_Msk       (0x80UL)
 #define R_IIC0_ICSR2_TEND_Pos       (6UL)
 #define R_IIC0_ICSR2_TEND_Msk       (0x40UL)
 #define R_IIC0_ICSR2_RDRF_Pos       (5UL)
 #define R_IIC0_ICSR2_RDRF_Msk       (0x20UL)
 #define R_IIC0_ICSR2_NACKF_Pos      (4UL)
 #define R_IIC0_ICSR2_NACKF_Msk      (0x10UL)
 #define R_IIC0_ICSR2_STOP_Pos       (3UL)
 #define R_IIC0_ICSR2_STOP_Msk       (0x8UL)
 #define R_IIC0_ICSR2_START_Pos      (2UL)
 #define R_IIC0_ICSR2_START_Msk      (0x4UL)
 #define R_IIC0_ICSR2_AL_Pos         (1UL)
 #define R_IIC0_ICSR2_AL_Msk         (0x2UL)
 #define R_IIC0_ICSR2_TMOF_Pos       (0UL)
 #define R_IIC0_ICSR2_TMOF_Msk       (0x1UL)
/* =========================================================  ICBRL  ========================================================= */
 #define R_IIC0_ICBRL_BRL_Pos        (0UL)
 #define R_IIC0_ICBRL_BRL_Msk        (0x1fUL)
/* =========================================================  ICBRH  ========================================================= */
 #define R_IIC0_ICBRH_BRH_Pos        (0UL)
 #define R_IIC0_ICBRH_BRH_Msk        (0x1fUL)
/* =========================================================  ICDRT  ========================================================= */
 #define R_IIC0_ICDRT_ICDRT_Pos      (0UL)
 #define R_IIC0_ICDRT_ICDRT_Msk      (0xffUL)
/* =========================================================  ICDRR  ========================================================= */
 #define R_IIC0_ICDRR_ICDRR_Pos      (0UL)
 #define R_IIC0_ICDRR_ICDRR_Msk      (0xffUL)
/* =========================================================  ICWUR  ========================================================= */
 #define R_IIC0_ICWUR_WUE_Pos        (7UL)
 #define R_IIC0_ICWUR_WUE_Msk        (0x80UL)
 #define R_IIC0_ICWUR_WUIE_Pos       (6UL)
 #define R_IIC0_ICWUR_WUIE_Msk       (0x40UL)
 #define R_IIC0_ICWUR_WUF_Pos        (5UL)
 #define R_IIC0_ICWUR_WUF_Msk        (0x20UL)
 #define R_IIC0_ICWUR_WUACK_Pos      (4UL)
 #define R_IIC0_ICWUR_WUACK_Msk      (0x10UL)
 #define R_IIC0_ICWUR_WUAFA_Pos      (0UL)
 #define R_IIC0_ICWUR_WUAFA_Msk      (0x1UL)
/* ========================================================  ICWUR2  ========================================================= */
 #define R_IIC0_ICWUR2_WUSYF_Pos     (2UL)
 #define R_IIC0_ICWUR2_WUSYF_Msk     (0x4UL)
 #define R_IIC0_ICWUR2_WUASYF_Pos    (1UL)
 #define R_IIC0_ICWUR2_WUASYF_Msk    (0x2UL)
 #define R_IIC0_ICWUR2_WUSEN_Pos     (0UL)
 #define R_IIC0_ICWUR2_WUSEN_Msk     (0x1UL)

/* =========================================================================================================================== */
/* ================                                          R_IRDA                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  IRCR  ========================================================== */
 #define R_IRDA_IRCR_IRE_Pos        (7UL)
 #define R_IRDA_IRCR_IRE_Msk        (0x80UL)
 #define R_IRDA_IRCR_IRTXINV_Pos    (3UL)
 #define R_IRDA_IRCR_IRTXINV_Msk    (0x8UL)
 #define R_IRDA_IRCR_IRRXINV_Pos    (2UL)
 #define R_IRDA_IRCR_IRRXINV_Msk    (0x4UL)

/* =========================================================================================================================== */
/* ================                                          R_IWDT                                           ================ */
/* =========================================================================================================================== */

/* ========================================================  IWDTRR  ========================================================= */
 #define R_IWDT_IWDTRR_IWDTRR_Pos       (0UL)
 #define R_IWDT_IWDTRR_IWDTRR_Msk       (0xffUL)
/* ========================================================  IWDTCR  ========================================================= */
 #define R_IWDT_IWDTCR_RPSS_Pos         (12UL)
 #define R_IWDT_IWDTCR_RPSS_Msk         (0x3000UL)
 #define R_IWDT_IWDTCR_RPES_Pos         (8UL)
 #define R_IWDT_IWDTCR_RPES_Msk         (0x300UL)
 #define R_IWDT_IWDTCR_CKS_Pos          (4UL)
 #define R_IWDT_IWDTCR_CKS_Msk          (0xf0UL)
 #define R_IWDT_IWDTCR_TOPS_Pos         (0UL)
 #define R_IWDT_IWDTCR_TOPS_Msk         (0x3UL)
/* ========================================================  IWDTSR  ========================================================= */
 #define R_IWDT_IWDTSR_REFEF_Pos        (15UL)
 #define R_IWDT_IWDTSR_REFEF_Msk        (0x8000UL)
 #define R_IWDT_IWDTSR_UNDFF_Pos        (14UL)
 #define R_IWDT_IWDTSR_UNDFF_Msk        (0x4000UL)
 #define R_IWDT_IWDTSR_CNTVAL_Pos       (0UL)
 #define R_IWDT_IWDTSR_CNTVAL_Msk       (0x3fffUL)
/* ========================================================  IWDTRCR  ======================================================== */
 #define R_IWDT_IWDTRCR_RSTIRQS_Pos     (7UL)
 #define R_IWDT_IWDTRCR_RSTIRQS_Msk     (0x80UL)
/* =======================================================  IWDTCSTPR  ======================================================= */
 #define R_IWDT_IWDTCSTPR_SLCSTP_Pos    (7UL)
 #define R_IWDT_IWDTCSTPR_SLCSTP_Msk    (0x80UL)

/* =========================================================================================================================== */
/* ================                                          R_KINT                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  KRCTL  ========================================================= */
 #define R_KINT_KRCTL_KRMD_Pos    (7UL)
 #define R_KINT_KRCTL_KRMD_Msk    (0x80UL)
 #define R_KINT_KRCTL_KREG_Pos    (0UL)
 #define R_KINT_KRCTL_KREG_Msk    (0x1UL)
/* ==========================================================  KRF  ========================================================== */
 #define R_KINT_KRF_KRF7_Pos      (7UL)
 #define R_KINT_KRF_KRF7_Msk      (0x80UL)
 #define R_KINT_KRF_KRF6_Pos      (6UL)
 #define R_KINT_KRF_KRF6_Msk      (0x40UL)
 #define R_KINT_KRF_KRF5_Pos      (5UL)
 #define R_KINT_KRF_KRF5_Msk      (0x20UL)
 #define R_KINT_KRF_KRF4_Pos      (4UL)
 #define R_KINT_KRF_KRF4_Msk      (0x10UL)
 #define R_KINT_KRF_KRF3_Pos      (3UL)
 #define R_KINT_KRF_KRF3_Msk      (0x8UL)
 #define R_KINT_KRF_KRF2_Pos      (2UL)
 #define R_KINT_KRF_KRF2_Msk      (0x4UL)
 #define R_KINT_KRF_KRF1_Pos      (1UL)
 #define R_KINT_KRF_KRF1_Msk      (0x2UL)
 #define R_KINT_KRF_KRF0_Pos      (0UL)
 #define R_KINT_KRF_KRF0_Msk      (0x1UL)
/* ==========================================================  KRM  ========================================================== */
 #define R_KINT_KRM_KRM7_Pos      (7UL)
 #define R_KINT_KRM_KRM7_Msk      (0x80UL)
 #define R_KINT_KRM_KRM6_Pos      (6UL)
 #define R_KINT_KRM_KRM6_Msk      (0x40UL)
 #define R_KINT_KRM_KRM5_Pos      (5UL)
 #define R_KINT_KRM_KRM5_Msk      (0x20UL)
 #define R_KINT_KRM_KRM4_Pos      (4UL)
 #define R_KINT_KRM_KRM4_Msk      (0x10UL)
 #define R_KINT_KRM_KRM3_Pos      (3UL)
 #define R_KINT_KRM_KRM3_Msk      (0x8UL)
 #define R_KINT_KRM_KRM2_Pos      (2UL)
 #define R_KINT_KRM_KRM2_Msk      (0x4UL)
 #define R_KINT_KRM_KRM1_Pos      (1UL)
 #define R_KINT_KRM_KRM1_Msk      (0x2UL)
 #define R_KINT_KRM_KRM0_Pos      (0UL)
 #define R_KINT_KRM_KRM0_Msk      (0x1UL)

/* =========================================================================================================================== */
/* ================                                           R_MMF                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  MMSFR  ========================================================= */
 #define R_MMF_MMSFR_KEY_Pos           (24UL)
 #define R_MMF_MMSFR_KEY_Msk           (0xff000000UL)
 #define R_MMF_MMSFR_MEMMIRADDR_Pos    (7UL)
 #define R_MMF_MMSFR_MEMMIRADDR_Msk    (0x7fff80UL)
/* =========================================================  MMEN  ========================================================== */
 #define R_MMF_MMEN_KEY_Pos            (24UL)
 #define R_MMF_MMEN_KEY_Msk            (0xff000000UL)
 #define R_MMF_MMEN_EN_Pos             (0UL)
 #define R_MMF_MMEN_EN_Msk             (0x1UL)

/* =========================================================================================================================== */
/* ================                                        R_MPU_MMPU                                         ================ */
/* =========================================================================================================================== */

/* =========================================================================================================================== */
/* ================                                        R_MPU_SMPU                                         ================ */
/* =========================================================================================================================== */

/* ========================================================  SMPUCTL  ======================================================== */
 #define R_MPU_SMPU_SMPUCTL_KEY_Pos        (8UL)
 #define R_MPU_SMPU_SMPUCTL_KEY_Msk        (0xff00UL)
 #define R_MPU_SMPU_SMPUCTL_PROTECT_Pos    (1UL)
 #define R_MPU_SMPU_SMPUCTL_PROTECT_Msk    (0x2UL)
 #define R_MPU_SMPU_SMPUCTL_OAD_Pos        (0UL)
 #define R_MPU_SMPU_SMPUCTL_OAD_Msk        (0x1UL)

/* =========================================================================================================================== */
/* ================                                        R_MPU_SPMON                                        ================ */
/* =========================================================================================================================== */

/* =========================================================================================================================== */
/* ================                                          R_MSTP                                           ================ */
/* =========================================================================================================================== */

/* ========================================================  MSTPCRA  ======================================================== */
 #define R_MSTP_MSTPCRA_MSTPA_Pos        (0UL)
 #define R_MSTP_MSTPCRA_MSTPA_Msk        (0x1UL)
/* ========================================================  MSTPCRB  ======================================================== */
 #define R_MSTP_MSTPCRB_MSTPB_Pos        (0UL)
 #define R_MSTP_MSTPCRB_MSTPB_Msk        (0x1UL)
/* ========================================================  MSTPCRC  ======================================================== */
 #define R_MSTP_MSTPCRC_MSTPC_Pos        (0UL)
 #define R_MSTP_MSTPCRC_MSTPC_Msk        (0x1UL)
/* ========================================================  MSTPCRD  ======================================================== */
 #define R_MSTP_MSTPCRD_MSTPD_Pos        (0UL)
 #define R_MSTP_MSTPCRD_MSTPD_Msk        (0x1UL)
/* ========================================================  MSTPCRE  ======================================================== */
 #define R_MSTP_MSTPCRE_MSTPE_Pos        (0UL)
 #define R_MSTP_MSTPCRE_MSTPE_Msk        (0x1UL)
/* =======================================================  LSMRWDIS  ======================================================== */
 #define R_MSTP_LSMRWDIS_RTCRWDIS_Pos    (0UL)
 #define R_MSTP_LSMRWDIS_RTCRWDIS_Msk    (0x1UL)
 #define R_MSTP_LSMRWDIS_WDTDIS_Pos      (1UL)
 #define R_MSTP_LSMRWDIS_WDTDIS_Msk      (0x2UL)
 #define R_MSTP_LSMRWDIS_IWDTIDS_Pos     (2UL)
 #define R_MSTP_LSMRWDIS_IWDTIDS_Msk     (0x4UL)
 #define R_MSTP_LSMRWDIS_WREN_Pos        (7UL)
 #define R_MSTP_LSMRWDIS_WREN_Msk        (0x80UL)
 #define R_MSTP_LSMRWDIS_PRKEY_Pos       (8UL)
 #define R_MSTP_LSMRWDIS_PRKEY_Msk       (0xff00UL)

/* =========================================================================================================================== */
/* ================                                          R_PORT0                                          ================ */
/* =========================================================================================================================== */

/* ========================================================  PCNTR1  ========================================================= */
 #define R_PORT0_PCNTR1_PODR_Pos    (16UL)
 #define R_PORT0_PCNTR1_PODR_Msk    (0xffff0000UL)
 #define R_PORT0_PCNTR1_PDR_Pos     (0UL)
 #define R_PORT0_PCNTR1_PDR_Msk     (0xffffUL)
/* =========================================================  PODR  ========================================================== */
 #define R_PORT0_PODR_PODR_Pos      (0UL)
 #define R_PORT0_PODR_PODR_Msk      (0x1UL)
/* ==========================================================  PDR  ========================================================== */
 #define R_PORT0_PDR_PDR_Pos        (0UL)
 #define R_PORT0_PDR_PDR_Msk        (0x1UL)
/* ========================================================  PCNTR2  ========================================================= */
 #define R_PORT0_PCNTR2_EIDR_Pos    (16UL)
 #define R_PORT0_PCNTR2_EIDR_Msk    (0xffff0000UL)
 #define R_PORT0_PCNTR2_PIDR_Pos    (0UL)
 #define R_PORT0_PCNTR2_PIDR_Msk    (0xffffUL)
/* =========================================================  EIDR  ========================================================== */
 #define R_PORT0_EIDR_EIDR_Pos      (0UL)
 #define R_PORT0_EIDR_EIDR_Msk      (0x1UL)
/* =========================================================  PIDR  ========================================================== */
 #define R_PORT0_PIDR_PIDR_Pos      (0UL)
 #define R_PORT0_PIDR_PIDR_Msk      (0x1UL)
/* ========================================================  PCNTR3  ========================================================= */
 #define R_PORT0_PCNTR3_PORR_Pos    (16UL)
 #define R_PORT0_PCNTR3_PORR_Msk    (0xffff0000UL)
 #define R_PORT0_PCNTR3_POSR_Pos    (0UL)
 #define R_PORT0_PCNTR3_POSR_Msk    (0xffffUL)
/* =========================================================  PORR  ========================================================== */
 #define R_PORT0_PORR_PORR_Pos      (0UL)
 #define R_PORT0_PORR_PORR_Msk      (0x1UL)
/* =========================================================  POSR  ========================================================== */
 #define R_PORT0_POSR_POSR_Pos      (0UL)
 #define R_PORT0_POSR_POSR_Msk      (0x1UL)
/* ========================================================  PCNTR4  ========================================================= */
 #define R_PORT0_PCNTR4_EORR_Pos    (16UL)
 #define R_PORT0_PCNTR4_EORR_Msk    (0xffff0000UL)
 #define R_PORT0_PCNTR4_EOSR_Pos    (0UL)
 #define R_PORT0_PCNTR4_EOSR_Msk    (0xffffUL)
/* =========================================================  EORR  ========================================================== */
 #define R_PORT0_EORR_EORR_Pos      (0UL)
 #define R_PORT0_EORR_EORR_Msk      (0x1UL)
/* =========================================================  EOSR  ========================================================== */
 #define R_PORT0_EOSR_EOSR_Pos      (0UL)
 #define R_PORT0_EOSR_EOSR_Msk      (0x1UL)

/* =========================================================================================================================== */
/* ================                                           R_PFS                                           ================ */
/* =========================================================================================================================== */

/* =========================================================================================================================== */
/* ================                                          R_PMISC                                          ================ */
/* =========================================================================================================================== */

/* ========================================================  PFENET  ========================================================= */
 #define R_PMISC_PFENET_PHYMODE1_Pos    (5UL)
 #define R_PMISC_PFENET_PHYMODE1_Msk    (0x20UL)
 #define R_PMISC_PFENET_PHYMODE0_Pos    (4UL)
 #define R_PMISC_PFENET_PHYMODE0_Msk    (0x10UL)
/* =========================================================  PWPR  ========================================================== */
 #define R_PMISC_PWPR_PFSWE_Pos         (6UL)
 #define R_PMISC_PWPR_PFSWE_Msk         (0x40UL)
 #define R_PMISC_PWPR_B0WI_Pos          (7UL)
 #define R_PMISC_PWPR_B0WI_Msk          (0x80UL)
/* =========================================================  PWPRS  ========================================================= */
 #define R_PMISC_PWPRS_PFSWE_Pos        (6UL)
 #define R_PMISC_PWPRS_PFSWE_Msk        (0x40UL)
 #define R_PMISC_PWPRS_B0WI_Pos         (7UL)
 #define R_PMISC_PWPRS_B0WI_Msk         (0x80UL)
/* ========================================================  PRWCNTR  ======================================================== */
 #define R_PMISC_PRWCNTR_WAIT_Pos       (0UL)
 #define R_PMISC_PRWCNTR_WAIT_Msk       (0x3UL)

/* =========================================================================================================================== */
/* ================                                          R_QSPI                                           ================ */
/* =========================================================================================================================== */

/* ========================================================  SFMSMD  ========================================================= */
 #define R_QSPI_SFMSMD_SFMCCE_Pos       (15UL)
 #define R_QSPI_SFMSMD_SFMCCE_Msk       (0x8000UL)
 #define R_QSPI_SFMSMD_SFMOSW_Pos       (11UL)
 #define R_QSPI_SFMSMD_SFMOSW_Msk       (0x800UL)
 #define R_QSPI_SFMSMD_SFMOHW_Pos       (10UL)
 #define R_QSPI_SFMSMD_SFMOHW_Msk       (0x400UL)
 #define R_QSPI_SFMSMD_SFMOEX_Pos       (9UL)
 #define R_QSPI_SFMSMD_SFMOEX_Msk       (0x200UL)
 #define R_QSPI_SFMSMD_SFMMD3_Pos       (8UL)
 #define R_QSPI_SFMSMD_SFMMD3_Msk       (0x100UL)
 #define R_QSPI_SFMSMD_SFMPAE_Pos       (7UL)
 #define R_QSPI_SFMSMD_SFMPAE_Msk       (0x80UL)
 #define R_QSPI_SFMSMD_SFMPFE_Pos       (6UL)
 #define R_QSPI_SFMSMD_SFMPFE_Msk       (0x40UL)
 #define R_QSPI_SFMSMD_SFMSE_Pos        (4UL)
 #define R_QSPI_SFMSMD_SFMSE_Msk        (0x30UL)
 #define R_QSPI_SFMSMD_SFMRM_Pos        (0UL)
 #define R_QSPI_SFMSMD_SFMRM_Msk        (0x7UL)
/* ========================================================  SFMSSC  ========================================================= */
 #define R_QSPI_SFMSSC_SFMSLD_Pos       (5UL)
 #define R_QSPI_SFMSSC_SFMSLD_Msk       (0x20UL)
 #define R_QSPI_SFMSSC_SFMSHD_Pos       (4UL)
 #define R_QSPI_SFMSSC_SFMSHD_Msk       (0x10UL)
 #define R_QSPI_SFMSSC_SFMSW_Pos        (0UL)
 #define R_QSPI_SFMSSC_SFMSW_Msk        (0xfUL)
/* ========================================================  SFMSKC  ========================================================= */
 #define R_QSPI_SFMSKC_SFMDTY_Pos       (5UL)
 #define R_QSPI_SFMSKC_SFMDTY_Msk       (0x20UL)
 #define R_QSPI_SFMSKC_SFMDV_Pos        (0UL)
 #define R_QSPI_SFMSKC_SFMDV_Msk        (0x1fUL)
/* ========================================================  SFMSST  ========================================================= */
 #define R_QSPI_SFMSST_PFOFF_Pos        (7UL)
 #define R_QSPI_SFMSST_PFOFF_Msk        (0x80UL)
 #define R_QSPI_SFMSST_PFFUL_Pos        (6UL)
 #define R_QSPI_SFMSST_PFFUL_Msk        (0x40UL)
 #define R_QSPI_SFMSST_PFCNT_Pos        (0UL)
 #define R_QSPI_SFMSST_PFCNT_Msk        (0x1fUL)
/* ========================================================  SFMCOM  ========================================================= */
 #define R_QSPI_SFMCOM_SFMD_Pos         (0UL)
 #define R_QSPI_SFMCOM_SFMD_Msk         (0xffUL)
/* ========================================================  SFMCMD  ========================================================= */
 #define R_QSPI_SFMCMD_DCOM_Pos         (0UL)
 #define R_QSPI_SFMCMD_DCOM_Msk         (0x1UL)
/* ========================================================  SFMCST  ========================================================= */
 #define R_QSPI_SFMCST_EROMR_Pos        (7UL)
 #define R_QSPI_SFMCST_EROMR_Msk        (0x80UL)
 #define R_QSPI_SFMCST_COMBSY_Pos       (0UL)
 #define R_QSPI_SFMCST_COMBSY_Msk       (0x1UL)
/* ========================================================  SFMSIC  ========================================================= */
 #define R_QSPI_SFMSIC_SFMCIC_Pos       (0UL)
 #define R_QSPI_SFMSIC_SFMCIC_Msk       (0xffUL)
/* ========================================================  SFMSAC  ========================================================= */
 #define R_QSPI_SFMSAC_SFM4BC_Pos       (4UL)
 #define R_QSPI_SFMSAC_SFM4BC_Msk       (0x10UL)
 #define R_QSPI_SFMSAC_SFMAS_Pos        (0UL)
 #define R_QSPI_SFMSAC_SFMAS_Msk        (0x3UL)
/* ========================================================  SFMSDC  ========================================================= */
 #define R_QSPI_SFMSDC_SFMXD_Pos        (8UL)
 #define R_QSPI_SFMSDC_SFMXD_Msk        (0xff00UL)
 #define R_QSPI_SFMSDC_SFMXEN_Pos       (7UL)
 #define R_QSPI_SFMSDC_SFMXEN_Msk       (0x80UL)
 #define R_QSPI_SFMSDC_SFMXST_Pos       (6UL)
 #define R_QSPI_SFMSDC_SFMXST_Msk       (0x40UL)
 #define R_QSPI_SFMSDC_SFMDN_Pos        (0UL)
 #define R_QSPI_SFMSDC_SFMDN_Msk        (0xfUL)
/* ========================================================  SFMSPC  ========================================================= */
 #define R_QSPI_SFMSPC_SFMSDE_Pos       (4UL)
 #define R_QSPI_SFMSPC_SFMSDE_Msk       (0x10UL)
 #define R_QSPI_SFMSPC_SFMSPI_Pos       (0UL)
 #define R_QSPI_SFMSPC_SFMSPI_Msk       (0x3UL)
/* ========================================================  SFMPMD  ========================================================= */
 #define R_QSPI_SFMPMD_SFMWPL_Pos       (2UL)
 #define R_QSPI_SFMPMD_SFMWPL_Msk       (0x4UL)
/* ========================================================  SFMCNT1  ======================================================== */
 #define R_QSPI_SFMCNT1_QSPI_EXT_Pos    (26UL)
 #define R_QSPI_SFMCNT1_QSPI_EXT_Msk    (0xfc000000UL)

/* =========================================================================================================================== */
/* ================                                           R_RTC                                           ================ */
/* =========================================================================================================================== */

/* ========================================================  R64CNT  ========================================================= */
 #define R_RTC_R64CNT_F1HZ_Pos        (6UL)
 #define R_RTC_R64CNT_F1HZ_Msk        (0x40UL)
 #define R_RTC_R64CNT_F2HZ_Pos        (5UL)
 #define R_RTC_R64CNT_F2HZ_Msk        (0x20UL)
 #define R_RTC_R64CNT_F4HZ_Pos        (4UL)
 #define R_RTC_R64CNT_F4HZ_Msk        (0x10UL)
 #define R_RTC_R64CNT_F8HZ_Pos        (3UL)
 #define R_RTC_R64CNT_F8HZ_Msk        (0x8UL)
 #define R_RTC_R64CNT_F16HZ_Pos       (2UL)
 #define R_RTC_R64CNT_F16HZ_Msk       (0x4UL)
 #define R_RTC_R64CNT_F32HZ_Pos       (1UL)
 #define R_RTC_R64CNT_F32HZ_Msk       (0x2UL)
 #define R_RTC_R64CNT_F64HZ_Pos       (0UL)
 #define R_RTC_R64CNT_F64HZ_Msk       (0x1UL)
/* =========================================================  BCNT0  ========================================================= */
 #define R_RTC_BCNT0_BCNT0_Pos        (0UL)
 #define R_RTC_BCNT0_BCNT0_Msk        (0xffUL)
/* ========================================================  RSECCNT  ======================================================== */
 #define R_RTC_RSECCNT_SEC10_Pos      (4UL)
 #define R_RTC_RSECCNT_SEC10_Msk      (0x70UL)
 #define R_RTC_RSECCNT_SEC1_Pos       (0UL)
 #define R_RTC_RSECCNT_SEC1_Msk       (0xfUL)
/* =========================================================  BCNT1  ========================================================= */
 #define R_RTC_BCNT1_BCNT1_Pos        (0UL)
 #define R_RTC_BCNT1_BCNT1_Msk        (0xffUL)
/* ========================================================  RMINCNT  ======================================================== */
 #define R_RTC_RMINCNT_MIN10_Pos      (4UL)
 #define R_RTC_RMINCNT_MIN10_Msk      (0x70UL)
 #define R_RTC_RMINCNT_MIN1_Pos       (0UL)
 #define R_RTC_RMINCNT_MIN1_Msk       (0xfUL)
/* =========================================================  BCNT2  ========================================================= */
 #define R_RTC_BCNT2_BCNT2_Pos        (0UL)
 #define R_RTC_BCNT2_BCNT2_Msk        (0xffUL)
/* ========================================================  RHRCNT  ========================================================= */
 #define R_RTC_RHRCNT_PM_Pos          (6UL)
 #define R_RTC_RHRCNT_PM_Msk          (0x40UL)
 #define R_RTC_RHRCNT_HR10_Pos        (4UL)
 #define R_RTC_RHRCNT_HR10_Msk        (0x30UL)
 #define R_RTC_RHRCNT_HR1_Pos         (0UL)
 #define R_RTC_RHRCNT_HR1_Msk         (0xfUL)
/* =========================================================  BCNT3  ========================================================= */
 #define R_RTC_BCNT3_BCNT3_Pos        (0UL)
 #define R_RTC_BCNT3_BCNT3_Msk        (0xffUL)
/* ========================================================  RWKCNT  ========================================================= */
 #define R_RTC_RWKCNT_DAYW_Pos        (0UL)
 #define R_RTC_RWKCNT_DAYW_Msk        (0x7UL)
/* ========================================================  RDAYCNT  ======================================================== */
 #define R_RTC_RDAYCNT_DATE10_Pos     (4UL)
 #define R_RTC_RDAYCNT_DATE10_Msk     (0x30UL)
 #define R_RTC_RDAYCNT_DATE1_Pos      (0UL)
 #define R_RTC_RDAYCNT_DATE1_Msk      (0xfUL)
/* ========================================================  RMONCNT  ======================================================== */
 #define R_RTC_RMONCNT_MON10_Pos      (4UL)
 #define R_RTC_RMONCNT_MON10_Msk      (0x10UL)
 #define R_RTC_RMONCNT_MON1_Pos       (0UL)
 #define R_RTC_RMONCNT_MON1_Msk       (0xfUL)
/* ========================================================  RYRCNT  ========================================================= */
 #define R_RTC_RYRCNT_YR10_Pos        (4UL)
 #define R_RTC_RYRCNT_YR10_Msk        (0xf0UL)
 #define R_RTC_RYRCNT_YR1_Pos         (0UL)
 #define R_RTC_RYRCNT_YR1_Msk         (0xfUL)
/* ========================================================  BCNT0AR  ======================================================== */
 #define R_RTC_BCNT0AR_BCNT0AR_Pos    (0UL)
 #define R_RTC_BCNT0AR_BCNT0AR_Msk    (0xffUL)
/* ========================================================  RSECAR  ========================================================= */
 #define R_RTC_RSECAR_ENB_Pos         (7UL)
 #define R_RTC_RSECAR_ENB_Msk         (0x80UL)
 #define R_RTC_RSECAR_SEC10_Pos       (4UL)
 #define R_RTC_RSECAR_SEC10_Msk       (0x70UL)
 #define R_RTC_RSECAR_SEC1_Pos        (0UL)
 #define R_RTC_RSECAR_SEC1_Msk        (0xfUL)
/* ========================================================  BCNT1AR  ======================================================== */
 #define R_RTC_BCNT1AR_BCNT1AR_Pos    (0UL)
 #define R_RTC_BCNT1AR_BCNT1AR_Msk    (0xffUL)
/* ========================================================  RMINAR  ========================================================= */
 #define R_RTC_RMINAR_ENB_Pos         (7UL)
 #define R_RTC_RMINAR_ENB_Msk         (0x80UL)
 #define R_RTC_RMINAR_MIN10_Pos       (4UL)
 #define R_RTC_RMINAR_MIN10_Msk       (0x70UL)
 #define R_RTC_RMINAR_MIN1_Pos        (0UL)
 #define R_RTC_RMINAR_MIN1_Msk        (0xfUL)
/* ========================================================  BCNT2AR  ======================================================== */
 #define R_RTC_BCNT2AR_BCNT2AR_Pos    (0UL)
 #define R_RTC_BCNT2AR_BCNT2AR_Msk    (0xffUL)
/* =========================================================  RHRAR  ========================================================= */
 #define R_RTC_RHRAR_ENB_Pos          (7UL)
 #define R_RTC_RHRAR_ENB_Msk          (0x80UL)
 #define R_RTC_RHRAR_PM_Pos           (6UL)
 #define R_RTC_RHRAR_PM_Msk           (0x40UL)
 #define R_RTC_RHRAR_HR10_Pos         (4UL)
 #define R_RTC_RHRAR_HR10_Msk         (0x30UL)
 #define R_RTC_RHRAR_HR1_Pos          (0UL)
 #define R_RTC_RHRAR_HR1_Msk          (0xfUL)
/* ========================================================  BCNT3AR  ======================================================== */
 #define R_RTC_BCNT3AR_BCNT3AR_Pos    (0UL)
 #define R_RTC_BCNT3AR_BCNT3AR_Msk    (0xffUL)
/* =========================================================  RWKAR  ========================================================= */
 #define R_RTC_RWKAR_ENB_Pos          (7UL)
 #define R_RTC_RWKAR_ENB_Msk          (0x80UL)
 #define R_RTC_RWKAR_DAYW_Pos         (0UL)
 #define R_RTC_RWKAR_DAYW_Msk         (0x7UL)
/* =======================================================  BCNT0AER  ======================================================== */
 #define R_RTC_BCNT0AER_ENB_Pos       (0UL)
 #define R_RTC_BCNT0AER_ENB_Msk       (0xffUL)
/* ========================================================  RDAYAR  ========================================================= */
 #define R_RTC_RDAYAR_ENB_Pos         (7UL)
 #define R_RTC_RDAYAR_ENB_Msk         (0x80UL)
 #define R_RTC_RDAYAR_DATE10_Pos      (4UL)
 #define R_RTC_RDAYAR_DATE10_Msk      (0x30UL)
 #define R_RTC_RDAYAR_DATE1_Pos       (0UL)
 #define R_RTC_RDAYAR_DATE1_Msk       (0xfUL)
/* =======================================================  BCNT1AER  ======================================================== */
 #define R_RTC_BCNT1AER_ENB_Pos       (0UL)
 #define R_RTC_BCNT1AER_ENB_Msk       (0xffUL)
/* ========================================================  RMONAR  ========================================================= */
 #define R_RTC_RMONAR_ENB_Pos         (7UL)
 #define R_RTC_RMONAR_ENB_Msk         (0x80UL)
 #define R_RTC_RMONAR_MON10_Pos       (4UL)
 #define R_RTC_RMONAR_MON10_Msk       (0x10UL)
 #define R_RTC_RMONAR_MON1_Pos        (0UL)
 #define R_RTC_RMONAR_MON1_Msk        (0xfUL)
/* =======================================================  BCNT2AER  ======================================================== */
 #define R_RTC_BCNT2AER_ENB_Pos       (0UL)
 #define R_RTC_BCNT2AER_ENB_Msk       (0xffUL)
/* =========================================================  RYRAR  ========================================================= */
 #define R_RTC_RYRAR_YR10_Pos         (4UL)
 #define R_RTC_RYRAR_YR10_Msk         (0xf0UL)
 #define R_RTC_RYRAR_YR1_Pos          (0UL)
 #define R_RTC_RYRAR_YR1_Msk          (0xfUL)
/* =======================================================  BCNT3AER  ======================================================== */
 #define R_RTC_BCNT3AER_ENB_Pos       (0UL)
 #define R_RTC_BCNT3AER_ENB_Msk       (0xffUL)
/* ========================================================  RYRAREN  ======================================================== */
 #define R_RTC_RYRAREN_ENB_Pos        (7UL)
 #define R_RTC_RYRAREN_ENB_Msk        (0x80UL)
/* =========================================================  RCR1  ========================================================== */
 #define R_RTC_RCR1_PES_Pos           (4UL)
 #define R_RTC_RCR1_PES_Msk           (0xf0UL)
 #define R_RTC_RCR1_RTCOS_Pos         (3UL)
 #define R_RTC_RCR1_RTCOS_Msk         (0x8UL)
 #define R_RTC_RCR1_PIE_Pos           (2UL)
 #define R_RTC_RCR1_PIE_Msk           (0x4UL)
 #define R_RTC_RCR1_CIE_Pos           (1UL)
 #define R_RTC_RCR1_CIE_Msk           (0x2UL)
 #define R_RTC_RCR1_AIE_Pos           (0UL)
 #define R_RTC_RCR1_AIE_Msk           (0x1UL)
/* =========================================================  RCR2  ========================================================== */
 #define R_RTC_RCR2_CNTMD_Pos         (7UL)
 #define R_RTC_RCR2_CNTMD_Msk         (0x80UL)
 #define R_RTC_RCR2_HR24_Pos          (6UL)
 #define R_RTC_RCR2_HR24_Msk          (0x40UL)
 #define R_RTC_RCR2_AADJP_Pos         (5UL)
 #define R_RTC_RCR2_AADJP_Msk         (0x20UL)
 #define R_RTC_RCR2_AADJE_Pos         (4UL)
 #define R_RTC_RCR2_AADJE_Msk         (0x10UL)
 #define R_RTC_RCR2_RTCOE_Pos         (3UL)
 #define R_RTC_RCR2_RTCOE_Msk         (0x8UL)
 #define R_RTC_RCR2_ADJ30_Pos         (2UL)
 #define R_RTC_RCR2_ADJ30_Msk         (0x4UL)
 #define R_RTC_RCR2_RESET_Pos         (1UL)
 #define R_RTC_RCR2_RESET_Msk         (0x2UL)
 #define R_RTC_RCR2_START_Pos         (0UL)
 #define R_RTC_RCR2_START_Msk         (0x1UL)
/* =========================================================  RCR4  ========================================================== */
 #define R_RTC_RCR4_RCKSEL_Pos        (0UL)
 #define R_RTC_RCR4_RCKSEL_Msk        (0x1UL)
 #define R_RTC_RCR4_ROPSEL_Pos        (7UL)
 #define R_RTC_RCR4_ROPSEL_Msk        (0x80UL)
/* =========================================================  RFRH  ========================================================== */
 #define R_RTC_RFRH_RFC16_Pos         (0UL)
 #define R_RTC_RFRH_RFC16_Msk         (0x1UL)
/* =========================================================  RFRL  ========================================================== */
 #define R_RTC_RFRL_RFC_Pos           (0UL)
 #define R_RTC_RFRL_RFC_Msk           (0xffffUL)
/* =========================================================  RADJ  ========================================================== */
 #define R_RTC_RADJ_PMADJ_Pos         (6UL)
 #define R_RTC_RADJ_PMADJ_Msk         (0xc0UL)
 #define R_RTC_RADJ_ADJ_Pos           (0UL)
 #define R_RTC_RADJ_ADJ_Msk           (0x3fUL)

/* =========================================================================================================================== */
/* ================                                          R_SCI0                                           ================ */
/* =========================================================================================================================== */

/* ==========================================================  SMR  ========================================================== */
 #define R_SCI0_SMR_CM_Pos              (7UL)
 #define R_SCI0_SMR_CM_Msk              (0x80UL)
 #define R_SCI0_SMR_CHR_Pos             (6UL)
 #define R_SCI0_SMR_CHR_Msk             (0x40UL)
 #define R_SCI0_SMR_PE_Pos              (5UL)
 #define R_SCI0_SMR_PE_Msk              (0x20UL)
 #define R_SCI0_SMR_PM_Pos              (4UL)
 #define R_SCI0_SMR_PM_Msk              (0x10UL)
 #define R_SCI0_SMR_STOP_Pos            (3UL)
 #define R_SCI0_SMR_STOP_Msk            (0x8UL)
 #define R_SCI0_SMR_MP_Pos              (2UL)
 #define R_SCI0_SMR_MP_Msk              (0x4UL)
 #define R_SCI0_SMR_CKS_Pos             (0UL)
 #define R_SCI0_SMR_CKS_Msk             (0x3UL)
/* =======================================================  SMR_SMCI  ======================================================== */
 #define R_SCI0_SMR_SMCI_GM_Pos         (7UL)
 #define R_SCI0_SMR_SMCI_GM_Msk         (0x80UL)
 #define R_SCI0_SMR_SMCI_BLK_Pos        (6UL)
 #define R_SCI0_SMR_SMCI_BLK_Msk        (0x40UL)
 #define R_SCI0_SMR_SMCI_PE_Pos         (5UL)
 #define R_SCI0_SMR_SMCI_PE_Msk         (0x20UL)
 #define R_SCI0_SMR_SMCI_PM_Pos         (4UL)
 #define R_SCI0_SMR_SMCI_PM_Msk         (0x10UL)
 #define R_SCI0_SMR_SMCI_BCP_Pos        (2UL)
 #define R_SCI0_SMR_SMCI_BCP_Msk        (0xcUL)
 #define R_SCI0_SMR_SMCI_CKS_Pos        (0UL)
 #define R_SCI0_SMR_SMCI_CKS_Msk        (0x3UL)
/* ==========================================================  BRR  ========================================================== */
 #define R_SCI0_BRR_BRR_Pos             (0UL)
 #define R_SCI0_BRR_BRR_Msk             (0xffUL)
/* ==========================================================  SCR  ========================================================== */
 #define R_SCI0_SCR_TIE_Pos             (7UL)
 #define R_SCI0_SCR_TIE_Msk             (0x80UL)
 #define R_SCI0_SCR_RIE_Pos             (6UL)
 #define R_SCI0_SCR_RIE_Msk             (0x40UL)
 #define R_SCI0_SCR_TE_Pos              (5UL)
 #define R_SCI0_SCR_TE_Msk              (0x20UL)
 #define R_SCI0_SCR_RE_Pos              (4UL)
 #define R_SCI0_SCR_RE_Msk              (0x10UL)
 #define R_SCI0_SCR_MPIE_Pos            (3UL)
 #define R_SCI0_SCR_MPIE_Msk            (0x8UL)
 #define R_SCI0_SCR_TEIE_Pos            (2UL)
 #define R_SCI0_SCR_TEIE_Msk            (0x4UL)
 #define R_SCI0_SCR_CKE_Pos             (0UL)
 #define R_SCI0_SCR_CKE_Msk             (0x3UL)
/* =======================================================  SCR_SMCI  ======================================================== */
 #define R_SCI0_SCR_SMCI_TIE_Pos        (7UL)
 #define R_SCI0_SCR_SMCI_TIE_Msk        (0x80UL)
 #define R_SCI0_SCR_SMCI_RIE_Pos        (6UL)
 #define R_SCI0_SCR_SMCI_RIE_Msk        (0x40UL)
 #define R_SCI0_SCR_SMCI_TE_Pos         (5UL)
 #define R_SCI0_SCR_SMCI_TE_Msk         (0x20UL)
 #define R_SCI0_SCR_SMCI_RE_Pos         (4UL)
 #define R_SCI0_SCR_SMCI_RE_Msk         (0x10UL)
 #define R_SCI0_SCR_SMCI_MPIE_Pos       (3UL)
 #define R_SCI0_SCR_SMCI_MPIE_Msk       (0x8UL)
 #define R_SCI0_SCR_SMCI_TEIE_Pos       (2UL)
 #define R_SCI0_SCR_SMCI_TEIE_Msk       (0x4UL)
 #define R_SCI0_SCR_SMCI_CKE_Pos        (0UL)
 #define R_SCI0_SCR_SMCI_CKE_Msk        (0x3UL)
/* ==========================================================  TDR  ========================================================== */
 #define R_SCI0_TDR_TDR_Pos             (0UL)
 #define R_SCI0_TDR_TDR_Msk             (0xffUL)
/* ==========================================================  SSR  ========================================================== */
 #define R_SCI0_SSR_TDRE_Pos            (7UL)
 #define R_SCI0_SSR_TDRE_Msk            (0x80UL)
 #define R_SCI0_SSR_RDRF_Pos            (6UL)
 #define R_SCI0_SSR_RDRF_Msk            (0x40UL)
 #define R_SCI0_SSR_ORER_Pos            (5UL)
 #define R_SCI0_SSR_ORER_Msk            (0x20UL)
 #define R_SCI0_SSR_FER_Pos             (4UL)
 #define R_SCI0_SSR_FER_Msk             (0x10UL)
 #define R_SCI0_SSR_PER_Pos             (3UL)
 #define R_SCI0_SSR_PER_Msk             (0x8UL)
 #define R_SCI0_SSR_TEND_Pos            (2UL)
 #define R_SCI0_SSR_TEND_Msk            (0x4UL)
 #define R_SCI0_SSR_MPB_Pos             (1UL)
 #define R_SCI0_SSR_MPB_Msk             (0x2UL)
 #define R_SCI0_SSR_MPBT_Pos            (0UL)
 #define R_SCI0_SSR_MPBT_Msk            (0x1UL)
/* =======================================================  SSR_FIFO  ======================================================== */
 #define R_SCI0_SSR_FIFO_TDFE_Pos       (7UL)
 #define R_SCI0_SSR_FIFO_TDFE_Msk       (0x80UL)
 #define R_SCI0_SSR_FIFO_RDF_Pos        (6UL)
 #define R_SCI0_SSR_FIFO_RDF_Msk        (0x40UL)
 #define R_SCI0_SSR_FIFO_ORER_Pos       (5UL)
 #define R_SCI0_SSR_FIFO_ORER_Msk       (0x20UL)
 #define R_SCI0_SSR_FIFO_FER_Pos        (4UL)
 #define R_SCI0_SSR_FIFO_FER_Msk        (0x10UL)
 #define R_SCI0_SSR_FIFO_PER_Pos        (3UL)
 #define R_SCI0_SSR_FIFO_PER_Msk        (0x8UL)
 #define R_SCI0_SSR_FIFO_TEND_Pos       (2UL)
 #define R_SCI0_SSR_FIFO_TEND_Msk       (0x4UL)
 #define R_SCI0_SSR_FIFO_DR_Pos         (0UL)
 #define R_SCI0_SSR_FIFO_DR_Msk         (0x1UL)
/* =======================================================  SSR_SMCI  ======================================================== */
 #define R_SCI0_SSR_SMCI_TDRE_Pos       (7UL)
 #define R_SCI0_SSR_SMCI_TDRE_Msk       (0x80UL)
 #define R_SCI0_SSR_SMCI_RDRF_Pos       (6UL)
 #define R_SCI0_SSR_SMCI_RDRF_Msk       (0x40UL)
 #define R_SCI0_SSR_SMCI_ORER_Pos       (5UL)
 #define R_SCI0_SSR_SMCI_ORER_Msk       (0x20UL)
 #define R_SCI0_SSR_SMCI_ERS_Pos        (4UL)
 #define R_SCI0_SSR_SMCI_ERS_Msk        (0x10UL)
 #define R_SCI0_SSR_SMCI_PER_Pos        (3UL)
 #define R_SCI0_SSR_SMCI_PER_Msk        (0x8UL)
 #define R_SCI0_SSR_SMCI_TEND_Pos       (2UL)
 #define R_SCI0_SSR_SMCI_TEND_Msk       (0x4UL)
 #define R_SCI0_SSR_SMCI_MPB_Pos        (1UL)
 #define R_SCI0_SSR_SMCI_MPB_Msk        (0x2UL)
 #define R_SCI0_SSR_SMCI_MPBT_Pos       (0UL)
 #define R_SCI0_SSR_SMCI_MPBT_Msk       (0x1UL)
/* ==========================================================  RDR  ========================================================== */
 #define R_SCI0_RDR_RDR_Pos             (0UL)
 #define R_SCI0_RDR_RDR_Msk             (0xffUL)
/* =========================================================  SCMR  ========================================================== */
 #define R_SCI0_SCMR_BCP2_Pos           (7UL)
 #define R_SCI0_SCMR_BCP2_Msk           (0x80UL)
 #define R_SCI0_SCMR_CHR1_Pos           (4UL)
 #define R_SCI0_SCMR_CHR1_Msk           (0x10UL)
 #define R_SCI0_SCMR_SDIR_Pos           (3UL)
 #define R_SCI0_SCMR_SDIR_Msk           (0x8UL)
 #define R_SCI0_SCMR_SINV_Pos           (2UL)
 #define R_SCI0_SCMR_SINV_Msk           (0x4UL)
 #define R_SCI0_SCMR_SMIF_Pos           (0UL)
 #define R_SCI0_SCMR_SMIF_Msk           (0x1UL)
/* =========================================================  SEMR  ========================================================== */
 #define R_SCI0_SEMR_RXDESEL_Pos        (7UL)
 #define R_SCI0_SEMR_RXDESEL_Msk        (0x80UL)
 #define R_SCI0_SEMR_BGDM_Pos           (6UL)
 #define R_SCI0_SEMR_BGDM_Msk           (0x40UL)
 #define R_SCI0_SEMR_NFEN_Pos           (5UL)
 #define R_SCI0_SEMR_NFEN_Msk           (0x20UL)
 #define R_SCI0_SEMR_ABCS_Pos           (4UL)
 #define R_SCI0_SEMR_ABCS_Msk           (0x10UL)
 #define R_SCI0_SEMR_ABCSE_Pos          (3UL)
 #define R_SCI0_SEMR_ABCSE_Msk          (0x8UL)
 #define R_SCI0_SEMR_BRME_Pos           (2UL)
 #define R_SCI0_SEMR_BRME_Msk           (0x4UL)
 #define R_SCI0_SEMR_PADIS_Pos          (1UL)
 #define R_SCI0_SEMR_PADIS_Msk          (0x2UL)
 #define R_SCI0_SEMR_ACS0_Pos           (0UL)
 #define R_SCI0_SEMR_ACS0_Msk           (0x1UL)
/* =========================================================  SNFR  ========================================================== */
 #define R_SCI0_SNFR_NFCS_Pos           (0UL)
 #define R_SCI0_SNFR_NFCS_Msk           (0x7UL)
/* =========================================================  SIMR1  ========================================================= */
 #define R_SCI0_SIMR1_IICDL_Pos         (3UL)
 #define R_SCI0_SIMR1_IICDL_Msk         (0xf8UL)
 #define R_SCI0_SIMR1_IICM_Pos          (0UL)
 #define R_SCI0_SIMR1_IICM_Msk          (0x1UL)
/* =========================================================  SIMR2  ========================================================= */
 #define R_SCI0_SIMR2_IICACKT_Pos       (5UL)
 #define R_SCI0_SIMR2_IICACKT_Msk       (0x20UL)
 #define R_SCI0_SIMR2_IICCSC_Pos        (1UL)
 #define R_SCI0_SIMR2_IICCSC_Msk        (0x2UL)
 #define R_SCI0_SIMR2_IICINTM_Pos       (0UL)
 #define R_SCI0_SIMR2_IICINTM_Msk       (0x1UL)
/* =========================================================  SIMR3  ========================================================= */
 #define R_SCI0_SIMR3_IICSCLS_Pos       (6UL)
 #define R_SCI0_SIMR3_IICSCLS_Msk       (0xc0UL)
 #define R_SCI0_SIMR3_IICSDAS_Pos       (4UL)
 #define R_SCI0_SIMR3_IICSDAS_Msk       (0x30UL)
 #define R_SCI0_SIMR3_IICSTIF_Pos       (3UL)
 #define R_SCI0_SIMR3_IICSTIF_Msk       (0x8UL)
 #define R_SCI0_SIMR3_IICSTPREQ_Pos     (2UL)
 #define R_SCI0_SIMR3_IICSTPREQ_Msk     (0x4UL)
 #define R_SCI0_SIMR3_IICRSTAREQ_Pos    (1UL)
 #define R_SCI0_SIMR3_IICRSTAREQ_Msk    (0x2UL)
 #define R_SCI0_SIMR3_IICSTAREQ_Pos     (0UL)
 #define R_SCI0_SIMR3_IICSTAREQ_Msk     (0x1UL)
/* =========================================================  SISR  ========================================================== */
 #define R_SCI0_SISR_IICACKR_Pos        (0UL)
 #define R_SCI0_SISR_IICACKR_Msk        (0x1UL)
/* =========================================================  SPMR  ========================================================== */
 #define R_SCI0_SPMR_CKPH_Pos           (7UL)
 #define R_SCI0_SPMR_CKPH_Msk           (0x80UL)
 #define R_SCI0_SPMR_CKPOL_Pos          (6UL)
 #define R_SCI0_SPMR_CKPOL_Msk          (0x40UL)
 #define R_SCI0_SPMR_MFF_Pos            (4UL)
 #define R_SCI0_SPMR_MFF_Msk            (0x10UL)
 #define R_SCI0_SPMR_CSTPEN_Pos         (3UL)
 #define R_SCI0_SPMR_CSTPEN_Msk         (0x8UL)
 #define R_SCI0_SPMR_MSS_Pos            (2UL)
 #define R_SCI0_SPMR_MSS_Msk            (0x4UL)
 #define R_SCI0_SPMR_CTSE_Pos           (1UL)
 #define R_SCI0_SPMR_CTSE_Msk           (0x2UL)
 #define R_SCI0_SPMR_SSE_Pos            (0UL)
 #define R_SCI0_SPMR_SSE_Msk            (0x1UL)
/* =========================================================  TDRHL  ========================================================= */
 #define R_SCI0_TDRHL_TDRHL_Pos         (0UL)
 #define R_SCI0_TDRHL_TDRHL_Msk         (0xffffUL)
/* ========================================================  FTDRHL  ========================================================= */
 #define R_SCI0_FTDRHL_MPBT_Pos         (9UL)
 #define R_SCI0_FTDRHL_MPBT_Msk         (0x200UL)
 #define R_SCI0_FTDRHL_TDAT_Pos         (0UL)
 #define R_SCI0_FTDRHL_TDAT_Msk         (0x1ffUL)
/* =========================================================  FTDRH  ========================================================= */
 #define R_SCI0_FTDRH_MPBT_Pos          (1UL)
 #define R_SCI0_FTDRH_MPBT_Msk          (0x2UL)
 #define R_SCI0_FTDRH_TDATH_Pos         (0UL)
 #define R_SCI0_FTDRH_TDATH_Msk         (0x1UL)
/* =========================================================  FTDRL  ========================================================= */
 #define R_SCI0_FTDRL_TDATL_Pos         (0UL)
 #define R_SCI0_FTDRL_TDATL_Msk         (0xffUL)
/* =========================================================  RDRHL  ========================================================= */
 #define R_SCI0_RDRHL_RDRHL_Pos         (0UL)
 #define R_SCI0_RDRHL_RDRHL_Msk         (0xffffUL)
/* ========================================================  FRDRHL  ========================================================= */
 #define R_SCI0_FRDRHL_RDF_Pos          (14UL)
 #define R_SCI0_FRDRHL_RDF_Msk          (0x4000UL)
 #define R_SCI0_FRDRHL_ORER_Pos         (13UL)
 #define R_SCI0_FRDRHL_ORER_Msk         (0x2000UL)
 #define R_SCI0_FRDRHL_FER_Pos          (12UL)
 #define R_SCI0_FRDRHL_FER_Msk          (0x1000UL)
 #define R_SCI0_FRDRHL_PER_Pos          (11UL)
 #define R_SCI0_FRDRHL_PER_Msk          (0x800UL)
 #define R_SCI0_FRDRHL_DR_Pos           (10UL)
 #define R_SCI0_FRDRHL_DR_Msk           (0x400UL)
 #define R_SCI0_FRDRHL_MPB_Pos          (9UL)
 #define R_SCI0_FRDRHL_MPB_Msk          (0x200UL)
 #define R_SCI0_FRDRHL_RDAT_Pos         (0UL)
 #define R_SCI0_FRDRHL_RDAT_Msk         (0x1ffUL)
/* =========================================================  FRDRH  ========================================================= */
 #define R_SCI0_FRDRH_RDF_Pos           (6UL)
 #define R_SCI0_FRDRH_RDF_Msk           (0x40UL)
 #define R_SCI0_FRDRH_ORER_Pos          (5UL)
 #define R_SCI0_FRDRH_ORER_Msk          (0x20UL)
 #define R_SCI0_FRDRH_FER_Pos           (4UL)
 #define R_SCI0_FRDRH_FER_Msk           (0x10UL)
 #define R_SCI0_FRDRH_PER_Pos           (3UL)
 #define R_SCI0_FRDRH_PER_Msk           (0x8UL)
 #define R_SCI0_FRDRH_DR_Pos            (2UL)
 #define R_SCI0_FRDRH_DR_Msk            (0x4UL)
 #define R_SCI0_FRDRH_MPB_Pos           (1UL)
 #define R_SCI0_FRDRH_MPB_Msk           (0x2UL)
 #define R_SCI0_FRDRH_RDATH_Pos         (0UL)
 #define R_SCI0_FRDRH_RDATH_Msk         (0x1UL)
/* =========================================================  FRDRL  ========================================================= */
 #define R_SCI0_FRDRL_RDATL_Pos         (0UL)
 #define R_SCI0_FRDRL_RDATL_Msk         (0xffUL)
/* =========================================================  MDDR  ========================================================== */
 #define R_SCI0_MDDR_MDDR_Pos           (0UL)
 #define R_SCI0_MDDR_MDDR_Msk           (0xffUL)
/* =========================================================  DCCR  ========================================================== */
 #define R_SCI0_DCCR_DCME_Pos           (7UL)
 #define R_SCI0_DCCR_DCME_Msk           (0x80UL)
 #define R_SCI0_DCCR_IDSEL_Pos          (6UL)
 #define R_SCI0_DCCR_IDSEL_Msk          (0x40UL)
 #define R_SCI0_DCCR_DFER_Pos           (4UL)
 #define R_SCI0_DCCR_DFER_Msk           (0x10UL)
 #define R_SCI0_DCCR_DPER_Pos           (3UL)
 #define R_SCI0_DCCR_DPER_Msk           (0x8UL)
 #define R_SCI0_DCCR_DCMF_Pos           (0UL)
 #define R_SCI0_DCCR_DCMF_Msk           (0x1UL)
/* ==========================================================  FCR  ========================================================== */
 #define R_SCI0_FCR_RSTRG_Pos           (12UL)
 #define R_SCI0_FCR_RSTRG_Msk           (0xf000UL)
 #define R_SCI0_FCR_RTRG_Pos            (8UL)
 #define R_SCI0_FCR_RTRG_Msk            (0xf00UL)
 #define R_SCI0_FCR_TTRG_Pos            (4UL)
 #define R_SCI0_FCR_TTRG_Msk            (0xf0UL)
 #define R_SCI0_FCR_DRES_Pos            (3UL)
 #define R_SCI0_FCR_DRES_Msk            (0x8UL)
 #define R_SCI0_FCR_TFRST_Pos           (2UL)
 #define R_SCI0_FCR_TFRST_Msk           (0x4UL)
 #define R_SCI0_FCR_RFRST_Pos           (1UL)
 #define R_SCI0_FCR_RFRST_Msk           (0x2UL)
 #define R_SCI0_FCR_FM_Pos              (0UL)
 #define R_SCI0_FCR_FM_Msk              (0x1UL)
/* ==========================================================  FDR  ========================================================== */
 #define R_SCI0_FDR_T_Pos               (8UL)
 #define R_SCI0_FDR_T_Msk               (0x1f00UL)
 #define R_SCI0_FDR_R_Pos               (0UL)
 #define R_SCI0_FDR_R_Msk               (0x1fUL)
/* ==========================================================  LSR  ========================================================== */
 #define R_SCI0_LSR_PNUM_Pos            (8UL)
 #define R_SCI0_LSR_PNUM_Msk            (0x1f00UL)
 #define R_SCI0_LSR_FNUM_Pos            (2UL)
 #define R_SCI0_LSR_FNUM_Msk            (0x7cUL)
 #define R_SCI0_LSR_ORER_Pos            (0UL)
 #define R_SCI0_LSR_ORER_Msk            (0x1UL)
/* ==========================================================  CDR  ========================================================== */
 #define R_SCI0_CDR_CMPD_Pos            (0UL)
 #define R_SCI0_CDR_CMPD_Msk            (0x1ffUL)
/* =========================================================  SPTR  ========================================================== */
 #define R_SCI0_SPTR_SPB2IO_Pos         (2UL)
 #define R_SCI0_SPTR_SPB2IO_Msk         (0x4UL)
 #define R_SCI0_SPTR_SPB2DT_Pos         (1UL)
 #define R_SCI0_SPTR_SPB2DT_Msk         (0x2UL)
 #define R_SCI0_SPTR_RXDMON_Pos         (0UL)
 #define R_SCI0_SPTR_RXDMON_Msk         (0x1UL)
 #define R_SCI0_SPTR_RINV_Pos           (4UL)
 #define R_SCI0_SPTR_RINV_Msk           (0x10UL)
 #define R_SCI0_SPTR_TINV_Pos           (5UL)
 #define R_SCI0_SPTR_TINV_Msk           (0x20UL)
 #define R_SCI0_SPTR_ASEN_Pos           (6UL)
 #define R_SCI0_SPTR_ASEN_Msk           (0x40UL)
 #define R_SCI0_SPTR_ATEN_Pos           (7UL)
 #define R_SCI0_SPTR_ATEN_Msk           (0x80UL)
/* =========================================================  ACTR  ========================================================== */
 #define R_SCI0_ACTR_AST_Pos            (0UL)
 #define R_SCI0_ACTR_AST_Msk            (0x7UL)
 #define R_SCI0_ACTR_AJD_Pos            (3UL)
 #define R_SCI0_ACTR_AJD_Msk            (0x8UL)
 #define R_SCI0_ACTR_ATT_Pos            (4UL)
 #define R_SCI0_ACTR_ATT_Msk            (0x70UL)
 #define R_SCI0_ACTR_AET_Pos            (7UL)
 #define R_SCI0_ACTR_AET_Msk            (0x80UL)
/* =========================================================  ESMER  ========================================================= */
 #define R_SCI0_ESMER_ESME_Pos          (0UL)
 #define R_SCI0_ESMER_ESME_Msk          (0x1UL)
/* ==========================================================  CR0  ========================================================== */
 #define R_SCI0_CR0_SFSF_Pos            (1UL)
 #define R_SCI0_CR0_SFSF_Msk            (0x2UL)
 #define R_SCI0_CR0_RXDSF_Pos           (2UL)
 #define R_SCI0_CR0_RXDSF_Msk           (0x4UL)
 #define R_SCI0_CR0_BRME_Pos            (3UL)
 #define R_SCI0_CR0_BRME_Msk            (0x8UL)
/* ==========================================================  CR1  ========================================================== */
 #define R_SCI0_CR1_BFE_Pos             (0UL)
 #define R_SCI0_CR1_BFE_Msk             (0x1UL)
 #define R_SCI0_CR1_CF0RE_Pos           (1UL)
 #define R_SCI0_CR1_CF0RE_Msk           (0x2UL)
 #define R_SCI0_CR1_CF1DS_Pos           (2UL)
 #define R_SCI0_CR1_CF1DS_Msk           (0xcUL)
 #define R_SCI0_CR1_PIBE_Pos            (4UL)
 #define R_SCI0_CR1_PIBE_Msk            (0x10UL)
 #define R_SCI0_CR1_PIBS_Pos            (5UL)
 #define R_SCI0_CR1_PIBS_Msk            (0xe0UL)
/* ==========================================================  CR2  ========================================================== */
 #define R_SCI0_CR2_DFCS_Pos            (0UL)
 #define R_SCI0_CR2_DFCS_Msk            (0x7UL)
 #define R_SCI0_CR2_BCCS_Pos            (4UL)
 #define R_SCI0_CR2_BCCS_Msk            (0x30UL)
 #define R_SCI0_CR2_RTS_Pos             (6UL)
 #define R_SCI0_CR2_RTS_Msk             (0xc0UL)
/* ==========================================================  CR3  ========================================================== */
 #define R_SCI0_CR3_SDST_Pos            (0UL)
 #define R_SCI0_CR3_SDST_Msk            (0x1UL)
/* ==========================================================  PCR  ========================================================== */
 #define R_SCI0_PCR_TXDXPS_Pos          (0UL)
 #define R_SCI0_PCR_TXDXPS_Msk          (0x1UL)
 #define R_SCI0_PCR_RXDXPS_Pos          (1UL)
 #define R_SCI0_PCR_RXDXPS_Msk          (0x2UL)
 #define R_SCI0_PCR_SHARPS_Pos          (4UL)
 #define R_SCI0_PCR_SHARPS_Msk          (0x10UL)
/* ==========================================================  ICR  ========================================================== */
 #define R_SCI0_ICR_BFDIE_Pos           (0UL)
 #define R_SCI0_ICR_BFDIE_Msk           (0x1UL)
 #define R_SCI0_ICR_CF0MIE_Pos          (1UL)
 #define R_SCI0_ICR_CF0MIE_Msk          (0x2UL)
 #define R_SCI0_ICR_CF1MIE_Pos          (2UL)
 #define R_SCI0_ICR_CF1MIE_Msk          (0x4UL)
 #define R_SCI0_ICR_PIBDIE_Pos          (3UL)
 #define R_SCI0_ICR_PIBDIE_Msk          (0x8UL)
 #define R_SCI0_ICR_BCDIE_Pos           (4UL)
 #define R_SCI0_ICR_BCDIE_Msk           (0x10UL)
 #define R_SCI0_ICR_AEDIE_Pos           (5UL)
 #define R_SCI0_ICR_AEDIE_Msk           (0x20UL)
/* ==========================================================  STR  ========================================================== */
 #define R_SCI0_STR_BFDF_Pos            (0UL)
 #define R_SCI0_STR_BFDF_Msk            (0x1UL)
 #define R_SCI0_STR_CF0MF_Pos           (1UL)
 #define R_SCI0_STR_CF0MF_Msk           (0x2UL)
 #define R_SCI0_STR_CF1MF_Pos           (2UL)
 #define R_SCI0_STR_CF1MF_Msk           (0x4UL)
 #define R_SCI0_STR_PIBDF_Pos           (3UL)
 #define R_SCI0_STR_PIBDF_Msk           (0x8UL)
 #define R_SCI0_STR_BCDF_Pos            (4UL)
 #define R_SCI0_STR_BCDF_Msk            (0x10UL)
 #define R_SCI0_STR_AEDF_Pos            (5UL)
 #define R_SCI0_STR_AEDF_Msk            (0x20UL)
/* =========================================================  STCR  ========================================================== */
 #define R_SCI0_STCR_BFDCL_Pos          (0UL)
 #define R_SCI0_STCR_BFDCL_Msk          (0x1UL)
 #define R_SCI0_STCR_CF0MCL_Pos         (1UL)
 #define R_SCI0_STCR_CF0MCL_Msk         (0x2UL)
 #define R_SCI0_STCR_CF1MCL_Pos         (2UL)
 #define R_SCI0_STCR_CF1MCL_Msk         (0x4UL)
 #define R_SCI0_STCR_PIBDCL_Pos         (3UL)
 #define R_SCI0_STCR_PIBDCL_Msk         (0x8UL)
 #define R_SCI0_STCR_BCDCL_Pos          (4UL)
 #define R_SCI0_STCR_BCDCL_Msk          (0x10UL)
 #define R_SCI0_STCR_AEDCL_Pos          (5UL)
 #define R_SCI0_STCR_AEDCL_Msk          (0x20UL)
/* =========================================================  CF0DR  ========================================================= */
/* =========================================================  CF0CR  ========================================================= */
 #define R_SCI0_CF0CR_CF0CE0_Pos        (0UL)
 #define R_SCI0_CF0CR_CF0CE0_Msk        (0x1UL)
 #define R_SCI0_CF0CR_CF0CE1_Pos        (1UL)
 #define R_SCI0_CF0CR_CF0CE1_Msk        (0x2UL)
 #define R_SCI0_CF0CR_CF0CE2_Pos        (2UL)
 #define R_SCI0_CF0CR_CF0CE2_Msk        (0x4UL)
 #define R_SCI0_CF0CR_CF0CE3_Pos        (3UL)
 #define R_SCI0_CF0CR_CF0CE3_Msk        (0x8UL)
 #define R_SCI0_CF0CR_CF0CE4_Pos        (4UL)
 #define R_SCI0_CF0CR_CF0CE4_Msk        (0x10UL)
 #define R_SCI0_CF0CR_CF0CE5_Pos        (5UL)
 #define R_SCI0_CF0CR_CF0CE5_Msk        (0x20UL)
 #define R_SCI0_CF0CR_CF0CE6_Pos        (6UL)
 #define R_SCI0_CF0CR_CF0CE6_Msk        (0x40UL)
 #define R_SCI0_CF0CR_CF0CE7_Pos        (7UL)
 #define R_SCI0_CF0CR_CF0CE7_Msk        (0x80UL)
/* =========================================================  CF0RR  ========================================================= */
/* ========================================================  PCF1DR  ========================================================= */
/* ========================================================  SCF1DR  ========================================================= */
/* =========================================================  CF1CR  ========================================================= */
 #define R_SCI0_CF1CR_CF1CE0_Pos        (0UL)
 #define R_SCI0_CF1CR_CF1CE0_Msk        (0x1UL)
 #define R_SCI0_CF1CR_CF1CE1_Pos        (1UL)
 #define R_SCI0_CF1CR_CF1CE1_Msk        (0x2UL)
 #define R_SCI0_CF1CR_CF1CE2_Pos        (2UL)
 #define R_SCI0_CF1CR_CF1CE2_Msk        (0x4UL)
 #define R_SCI0_CF1CR_CF1CE3_Pos        (3UL)
 #define R_SCI0_CF1CR_CF1CE3_Msk        (0x8UL)
 #define R_SCI0_CF1CR_CF1CE4_Pos        (4UL)
 #define R_SCI0_CF1CR_CF1CE4_Msk        (0x10UL)
 #define R_SCI0_CF1CR_CF1CE5_Pos        (5UL)
 #define R_SCI0_CF1CR_CF1CE5_Msk        (0x20UL)
 #define R_SCI0_CF1CR_CF1CE6_Pos        (6UL)
 #define R_SCI0_CF1CR_CF1CE6_Msk        (0x40UL)
 #define R_SCI0_CF1CR_CF1CE7_Pos        (7UL)
 #define R_SCI0_CF1CR_CF1CE7_Msk        (0x80UL)
/* =========================================================  CF1RR  ========================================================= */
/* ==========================================================  TCR  ========================================================== */
 #define R_SCI0_TCR_TCST_Pos            (0UL)
 #define R_SCI0_TCR_TCST_Msk            (0x1UL)
/* ==========================================================  TMR  ========================================================== */
 #define R_SCI0_TMR_TOMS_Pos            (0UL)
 #define R_SCI0_TMR_TOMS_Msk            (0x3UL)
 #define R_SCI0_TMR_TWRC_Pos            (3UL)
 #define R_SCI0_TMR_TWRC_Msk            (0x8UL)
 #define R_SCI0_TMR_TCSS_Pos            (4UL)
 #define R_SCI0_TMR_TCSS_Msk            (0x70UL)
/* =========================================================  TPRE  ========================================================== */
/* =========================================================  TCNT  ========================================================== */

/* =========================================================================================================================== */
/* ================                                          R_SDHI0                                          ================ */
/* =========================================================================================================================== */

/* ========================================================  SD_CMD  ========================================================= */
 #define R_SDHI0_SD_CMD_CMD12AT_Pos              (14UL)
 #define R_SDHI0_SD_CMD_CMD12AT_Msk              (0xc000UL)
 #define R_SDHI0_SD_CMD_TRSTP_Pos                (13UL)
 #define R_SDHI0_SD_CMD_TRSTP_Msk                (0x2000UL)
 #define R_SDHI0_SD_CMD_CMDRW_Pos                (12UL)
 #define R_SDHI0_SD_CMD_CMDRW_Msk                (0x1000UL)
 #define R_SDHI0_SD_CMD_CMDTP_Pos                (11UL)
 #define R_SDHI0_SD_CMD_CMDTP_Msk                (0x800UL)
 #define R_SDHI0_SD_CMD_RSPTP_Pos                (8UL)
 #define R_SDHI0_SD_CMD_RSPTP_Msk                (0x700UL)
 #define R_SDHI0_SD_CMD_ACMD_Pos                 (6UL)
 #define R_SDHI0_SD_CMD_ACMD_Msk                 (0xc0UL)
 #define R_SDHI0_SD_CMD_CMDIDX_Pos               (0UL)
 #define R_SDHI0_SD_CMD_CMDIDX_Msk               (0x3fUL)
/* ========================================================  SD_ARG  ========================================================= */
 #define R_SDHI0_SD_ARG_SD_ARG_Pos               (0UL)
 #define R_SDHI0_SD_ARG_SD_ARG_Msk               (0xffffffffUL)
/* ========================================================  SD_ARG1  ======================================================== */
 #define R_SDHI0_SD_ARG1_SD_ARG1_Pos             (0UL)
 #define R_SDHI0_SD_ARG1_SD_ARG1_Msk             (0xffffUL)
/* ========================================================  SD_STOP  ======================================================== */
 #define R_SDHI0_SD_STOP_SEC_Pos                 (8UL)
 #define R_SDHI0_SD_STOP_SEC_Msk                 (0x100UL)
 #define R_SDHI0_SD_STOP_STP_Pos                 (0UL)
 #define R_SDHI0_SD_STOP_STP_Msk                 (0x1UL)
/* =======================================================  SD_SECCNT  ======================================================= */
 #define R_SDHI0_SD_SECCNT_SD_SECCNT_Pos         (0UL)
 #define R_SDHI0_SD_SECCNT_SD_SECCNT_Msk         (0xffffffffUL)
/* =======================================================  SD_RSP10  ======================================================== */
 #define R_SDHI0_SD_RSP10_SD_RSP10_Pos           (0UL)
 #define R_SDHI0_SD_RSP10_SD_RSP10_Msk           (0xffffffffUL)
/* ========================================================  SD_RSP1  ======================================================== */
 #define R_SDHI0_SD_RSP1_SD_RSP1_Pos             (0UL)
 #define R_SDHI0_SD_RSP1_SD_RSP1_Msk             (0xffffUL)
/* =======================================================  SD_RSP32  ======================================================== */
 #define R_SDHI0_SD_RSP32_SD_RSP32_Pos           (0UL)
 #define R_SDHI0_SD_RSP32_SD_RSP32_Msk           (0xffffffffUL)
/* ========================================================  SD_RSP3  ======================================================== */
 #define R_SDHI0_SD_RSP3_SD_RSP3_Pos             (0UL)
 #define R_SDHI0_SD_RSP3_SD_RSP3_Msk             (0xffffUL)
/* =======================================================  SD_RSP54  ======================================================== */
 #define R_SDHI0_SD_RSP54_SD_RSP54_Pos           (0UL)
 #define R_SDHI0_SD_RSP54_SD_RSP54_Msk           (0xffffffffUL)
/* ========================================================  SD_RSP5  ======================================================== */
 #define R_SDHI0_SD_RSP5_SD_RSP5_Pos             (0UL)
 #define R_SDHI0_SD_RSP5_SD_RSP5_Msk             (0xffffUL)
/* =======================================================  SD_RSP76  ======================================================== */
 #define R_SDHI0_SD_RSP76_SD_RSP76_Pos           (0UL)
 #define R_SDHI0_SD_RSP76_SD_RSP76_Msk           (0xffffffUL)
/* ========================================================  SD_RSP7  ======================================================== */
 #define R_SDHI0_SD_RSP7_SD_RSP7_Pos             (0UL)
 #define R_SDHI0_SD_RSP7_SD_RSP7_Msk             (0xffUL)
/* =======================================================  SD_INFO1  ======================================================== */
 #define R_SDHI0_SD_INFO1_SDD3MON_Pos            (10UL)
 #define R_SDHI0_SD_INFO1_SDD3MON_Msk            (0x400UL)
 #define R_SDHI0_SD_INFO1_SDD3IN_Pos             (9UL)
 #define R_SDHI0_SD_INFO1_SDD3IN_Msk             (0x200UL)
 #define R_SDHI0_SD_INFO1_SDD3RM_Pos             (8UL)
 #define R_SDHI0_SD_INFO1_SDD3RM_Msk             (0x100UL)
 #define R_SDHI0_SD_INFO1_SDWPMON_Pos            (7UL)
 #define R_SDHI0_SD_INFO1_SDWPMON_Msk            (0x80UL)
 #define R_SDHI0_SD_INFO1_SDCDMON_Pos            (5UL)
 #define R_SDHI0_SD_INFO1_SDCDMON_Msk            (0x20UL)
 #define R_SDHI0_SD_INFO1_SDCDIN_Pos             (4UL)
 #define R_SDHI0_SD_INFO1_SDCDIN_Msk             (0x10UL)
 #define R_SDHI0_SD_INFO1_SDCDRM_Pos             (3UL)
 #define R_SDHI0_SD_INFO1_SDCDRM_Msk             (0x8UL)
 #define R_SDHI0_SD_INFO1_ACEND_Pos              (2UL)
 #define R_SDHI0_SD_INFO1_ACEND_Msk              (0x4UL)
 #define R_SDHI0_SD_INFO1_RSPEND_Pos             (0UL)
 #define R_SDHI0_SD_INFO1_RSPEND_Msk             (0x1UL)
/* =======================================================  SD_INFO2  ======================================================== */
 #define R_SDHI0_SD_INFO2_ILA_Pos                (15UL)
 #define R_SDHI0_SD_INFO2_ILA_Msk                (0x8000UL)
 #define R_SDHI0_SD_INFO2_CBSY_Pos               (14UL)
 #define R_SDHI0_SD_INFO2_CBSY_Msk               (0x4000UL)
 #define R_SDHI0_SD_INFO2_SD_CLK_CTRLEN_Pos      (13UL)
 #define R_SDHI0_SD_INFO2_SD_CLK_CTRLEN_Msk      (0x2000UL)
 #define R_SDHI0_SD_INFO2_BWE_Pos                (9UL)
 #define R_SDHI0_SD_INFO2_BWE_Msk                (0x200UL)
 #define R_SDHI0_SD_INFO2_BRE_Pos                (8UL)
 #define R_SDHI0_SD_INFO2_BRE_Msk                (0x100UL)
 #define R_SDHI0_SD_INFO2_SDD0MON_Pos            (7UL)
 #define R_SDHI0_SD_INFO2_SDD0MON_Msk            (0x80UL)
 #define R_SDHI0_SD_INFO2_RSPTO_Pos              (6UL)
 #define R_SDHI0_SD_INFO2_RSPTO_Msk              (0x40UL)
 #define R_SDHI0_SD_INFO2_ILR_Pos                (5UL)
 #define R_SDHI0_SD_INFO2_ILR_Msk                (0x20UL)
 #define R_SDHI0_SD_INFO2_ILW_Pos                (4UL)
 #define R_SDHI0_SD_INFO2_ILW_Msk                (0x10UL)
 #define R_SDHI0_SD_INFO2_DTO_Pos                (3UL)
 #define R_SDHI0_SD_INFO2_DTO_Msk                (0x8UL)
 #define R_SDHI0_SD_INFO2_ENDE_Pos               (2UL)
 #define R_SDHI0_SD_INFO2_ENDE_Msk               (0x4UL)
 #define R_SDHI0_SD_INFO2_CRCE_Pos               (1UL)
 #define R_SDHI0_SD_INFO2_CRCE_Msk               (0x2UL)
 #define R_SDHI0_SD_INFO2_CMDE_Pos               (0UL)
 #define R_SDHI0_SD_INFO2_CMDE_Msk               (0x1UL)
/* =====================================================  SD_INFO1_MASK  ===================================================== */
 #define R_SDHI0_SD_INFO1_MASK_SDD3INM_Pos       (9UL)
 #define R_SDHI0_SD_INFO1_MASK_SDD3INM_Msk       (0x200UL)
 #define R_SDHI0_SD_INFO1_MASK_SDD3RMM_Pos       (8UL)
 #define R_SDHI0_SD_INFO1_MASK_SDD3RMM_Msk       (0x100UL)
 #define R_SDHI0_SD_INFO1_MASK_SDCDINM_Pos       (4UL)
 #define R_SDHI0_SD_INFO1_MASK_SDCDINM_Msk       (0x10UL)
 #define R_SDHI0_SD_INFO1_MASK_SDCDRMM_Pos       (3UL)
 #define R_SDHI0_SD_INFO1_MASK_SDCDRMM_Msk       (0x8UL)
 #define R_SDHI0_SD_INFO1_MASK_ACENDM_Pos        (2UL)
 #define R_SDHI0_SD_INFO1_MASK_ACENDM_Msk        (0x4UL)
 #define R_SDHI0_SD_INFO1_MASK_RSPENDM_Pos       (0UL)
 #define R_SDHI0_SD_INFO1_MASK_RSPENDM_Msk       (0x1UL)
/* =====================================================  SD_INFO2_MASK  ===================================================== */
 #define R_SDHI0_SD_INFO2_MASK_ILAM_Pos          (15UL)
 #define R_SDHI0_SD_INFO2_MASK_ILAM_Msk          (0x8000UL)
 #define R_SDHI0_SD_INFO2_MASK_BWEM_Pos          (9UL)
 #define R_SDHI0_SD_INFO2_MASK_BWEM_Msk          (0x200UL)
 #define R_SDHI0_SD_INFO2_MASK_BREM_Pos          (8UL)
 #define R_SDHI0_SD_INFO2_MASK_BREM_Msk          (0x100UL)
 #define R_SDHI0_SD_INFO2_MASK_RSPTOM_Pos        (6UL)
 #define R_SDHI0_SD_INFO2_MASK_RSPTOM_Msk        (0x40UL)
 #define R_SDHI0_SD_INFO2_MASK_ILRM_Pos          (5UL)
 #define R_SDHI0_SD_INFO2_MASK_ILRM_Msk          (0x20UL)
 #define R_SDHI0_SD_INFO2_MASK_ILWM_Pos          (4UL)
 #define R_SDHI0_SD_INFO2_MASK_ILWM_Msk          (0x10UL)
 #define R_SDHI0_SD_INFO2_MASK_DTOM_Pos          (3UL)
 #define R_SDHI0_SD_INFO2_MASK_DTOM_Msk          (0x8UL)
 #define R_SDHI0_SD_INFO2_MASK_ENDEM_Pos         (2UL)
 #define R_SDHI0_SD_INFO2_MASK_ENDEM_Msk         (0x4UL)
 #define R_SDHI0_SD_INFO2_MASK_CRCEM_Pos         (1UL)
 #define R_SDHI0_SD_INFO2_MASK_CRCEM_Msk         (0x2UL)
 #define R_SDHI0_SD_INFO2_MASK_CMDEM_Pos         (0UL)
 #define R_SDHI0_SD_INFO2_MASK_CMDEM_Msk         (0x1UL)
/* ======================================================  SD_CLK_CTRL  ====================================================== */
 #define R_SDHI0_SD_CLK_CTRL_CLKCTRLEN_Pos       (9UL)
 #define R_SDHI0_SD_CLK_CTRL_CLKCTRLEN_Msk       (0x200UL)
 #define R_SDHI0_SD_CLK_CTRL_CLKEN_Pos           (8UL)
 #define R_SDHI0_SD_CLK_CTRL_CLKEN_Msk           (0x100UL)
 #define R_SDHI0_SD_CLK_CTRL_CLKSEL_Pos          (0UL)
 #define R_SDHI0_SD_CLK_CTRL_CLKSEL_Msk          (0xffUL)
/* ========================================================  SD_SIZE  ======================================================== */
 #define R_SDHI0_SD_SIZE_LEN_Pos                 (0UL)
 #define R_SDHI0_SD_SIZE_LEN_Msk                 (0x3ffUL)
/* =======================================================  SD_OPTION  ======================================================= */
 #define R_SDHI0_SD_OPTION_WIDTH_Pos             (15UL)
 #define R_SDHI0_SD_OPTION_WIDTH_Msk             (0x8000UL)
 #define R_SDHI0_SD_OPTION_WIDTH8_Pos            (13UL)
 #define R_SDHI0_SD_OPTION_WIDTH8_Msk            (0x2000UL)
 #define R_SDHI0_SD_OPTION_TOUTMASK_Pos          (8UL)
 #define R_SDHI0_SD_OPTION_TOUTMASK_Msk          (0x100UL)
 #define R_SDHI0_SD_OPTION_TOP_Pos               (4UL)
 #define R_SDHI0_SD_OPTION_TOP_Msk               (0xf0UL)
 #define R_SDHI0_SD_OPTION_CTOP_Pos              (0UL)
 #define R_SDHI0_SD_OPTION_CTOP_Msk              (0xfUL)
/* ======================================================  SD_ERR_STS1  ====================================================== */
 #define R_SDHI0_SD_ERR_STS1_CRCTK_Pos           (12UL)
 #define R_SDHI0_SD_ERR_STS1_CRCTK_Msk           (0x7000UL)
 #define R_SDHI0_SD_ERR_STS1_CRCTKE_Pos          (11UL)
 #define R_SDHI0_SD_ERR_STS1_CRCTKE_Msk          (0x800UL)
 #define R_SDHI0_SD_ERR_STS1_RDCRCE_Pos          (10UL)
 #define R_SDHI0_SD_ERR_STS1_RDCRCE_Msk          (0x400UL)
 #define R_SDHI0_SD_ERR_STS1_RSPCRCE1_Pos        (9UL)
 #define R_SDHI0_SD_ERR_STS1_RSPCRCE1_Msk        (0x200UL)
 #define R_SDHI0_SD_ERR_STS1_RSPCRCE0_Pos        (8UL)
 #define R_SDHI0_SD_ERR_STS1_RSPCRCE0_Msk        (0x100UL)
 #define R_SDHI0_SD_ERR_STS1_CRCLENE_Pos         (5UL)
 #define R_SDHI0_SD_ERR_STS1_CRCLENE_Msk         (0x20UL)
 #define R_SDHI0_SD_ERR_STS1_RDLENE_Pos          (4UL)
 #define R_SDHI0_SD_ERR_STS1_RDLENE_Msk          (0x10UL)
 #define R_SDHI0_SD_ERR_STS1_RSPLENE1_Pos        (3UL)
 #define R_SDHI0_SD_ERR_STS1_RSPLENE1_Msk        (0x8UL)
 #define R_SDHI0_SD_ERR_STS1_RSPLENE0_Pos        (2UL)
 #define R_SDHI0_SD_ERR_STS1_RSPLENE0_Msk        (0x4UL)
 #define R_SDHI0_SD_ERR_STS1_CMDE1_Pos           (1UL)
 #define R_SDHI0_SD_ERR_STS1_CMDE1_Msk           (0x2UL)
 #define R_SDHI0_SD_ERR_STS1_CMDE0_Pos           (0UL)
 #define R_SDHI0_SD_ERR_STS1_CMDE0_Msk           (0x1UL)
/* ======================================================  SD_ERR_STS2  ====================================================== */
 #define R_SDHI0_SD_ERR_STS2_CRCBSYTO_Pos        (6UL)
 #define R_SDHI0_SD_ERR_STS2_CRCBSYTO_Msk        (0x40UL)
 #define R_SDHI0_SD_ERR_STS2_CRCTO_Pos           (5UL)
 #define R_SDHI0_SD_ERR_STS2_CRCTO_Msk           (0x20UL)
 #define R_SDHI0_SD_ERR_STS2_RDTO_Pos            (4UL)
 #define R_SDHI0_SD_ERR_STS2_RDTO_Msk            (0x10UL)
 #define R_SDHI0_SD_ERR_STS2_BSYTO1_Pos          (3UL)
 #define R_SDHI0_SD_ERR_STS2_BSYTO1_Msk          (0x8UL)
 #define R_SDHI0_SD_ERR_STS2_BSYTO0_Pos          (2UL)
 #define R_SDHI0_SD_ERR_STS2_BSYTO0_Msk          (0x4UL)
 #define R_SDHI0_SD_ERR_STS2_RSPTO1_Pos          (1UL)
 #define R_SDHI0_SD_ERR_STS2_RSPTO1_Msk          (0x2UL)
 #define R_SDHI0_SD_ERR_STS2_RSPTO0_Pos          (0UL)
 #define R_SDHI0_SD_ERR_STS2_RSPTO0_Msk          (0x1UL)
/* ========================================================  SD_BUF0  ======================================================== */
 #define R_SDHI0_SD_BUF0_SD_BUF_Pos              (0UL)
 #define R_SDHI0_SD_BUF0_SD_BUF_Msk              (0xffffffffUL)
/* =======================================================  SDIO_MODE  ======================================================= */
 #define R_SDHI0_SDIO_MODE_C52PUB_Pos            (9UL)
 #define R_SDHI0_SDIO_MODE_C52PUB_Msk            (0x200UL)
 #define R_SDHI0_SDIO_MODE_IOABT_Pos             (8UL)
 #define R_SDHI0_SDIO_MODE_IOABT_Msk             (0x100UL)
 #define R_SDHI0_SDIO_MODE_RWREQ_Pos             (2UL)
 #define R_SDHI0_SDIO_MODE_RWREQ_Msk             (0x4UL)
 #define R_SDHI0_SDIO_MODE_INTEN_Pos             (0UL)
 #define R_SDHI0_SDIO_MODE_INTEN_Msk             (0x1UL)
/* ======================================================  SDIO_INFO1  ======================================================= */
 #define R_SDHI0_SDIO_INFO1_EXWT_Pos             (15UL)
 #define R_SDHI0_SDIO_INFO1_EXWT_Msk             (0x8000UL)
 #define R_SDHI0_SDIO_INFO1_EXPUB52_Pos          (14UL)
 #define R_SDHI0_SDIO_INFO1_EXPUB52_Msk          (0x4000UL)
 #define R_SDHI0_SDIO_INFO1_IOIRQ_Pos            (0UL)
 #define R_SDHI0_SDIO_INFO1_IOIRQ_Msk            (0x1UL)
/* ====================================================  SDIO_INFO1_MASK  ==================================================== */
 #define R_SDHI0_SDIO_INFO1_MASK_EXWTM_Pos       (15UL)
 #define R_SDHI0_SDIO_INFO1_MASK_EXWTM_Msk       (0x8000UL)
 #define R_SDHI0_SDIO_INFO1_MASK_EXPUB52M_Pos    (14UL)
 #define R_SDHI0_SDIO_INFO1_MASK_EXPUB52M_Msk    (0x4000UL)
 #define R_SDHI0_SDIO_INFO1_MASK_IOIRQM_Pos      (0UL)
 #define R_SDHI0_SDIO_INFO1_MASK_IOIRQM_Msk      (0x1UL)
/* =======================================================  SD_DMAEN  ======================================================== */
 #define R_SDHI0_SD_DMAEN_DMAEN_Pos              (1UL)
 #define R_SDHI0_SD_DMAEN_DMAEN_Msk              (0x2UL)
/* =======================================================  SOFT_RST  ======================================================== */
 #define R_SDHI0_SOFT_RST_SDRST_Pos              (0UL)
 #define R_SDHI0_SOFT_RST_SDRST_Msk              (0x1UL)
/* =======================================================  SDIF_MODE  ======================================================= */
 #define R_SDHI0_SDIF_MODE_NOCHKCR_Pos           (8UL)
 #define R_SDHI0_SDIF_MODE_NOCHKCR_Msk           (0x100UL)
/* =======================================================  EXT_SWAP  ======================================================== */
 #define R_SDHI0_EXT_SWAP_BRSWP_Pos              (7UL)
 #define R_SDHI0_EXT_SWAP_BRSWP_Msk              (0x80UL)
 #define R_SDHI0_EXT_SWAP_BWSWP_Pos              (6UL)
 #define R_SDHI0_EXT_SWAP_BWSWP_Msk              (0x40UL)

/* =========================================================================================================================== */
/* ================                                          R_SPI0                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  SPCR  ========================================================== */
 #define R_SPI0_SPCR_SPRIE_Pos      (7UL)
 #define R_SPI0_SPCR_SPRIE_Msk      (0x80UL)
 #define R_SPI0_SPCR_SPE_Pos        (6UL)
 #define R_SPI0_SPCR_SPE_Msk        (0x40UL)
 #define R_SPI0_SPCR_SPTIE_Pos      (5UL)
 #define R_SPI0_SPCR_SPTIE_Msk      (0x20UL)
 #define R_SPI0_SPCR_SPEIE_Pos      (4UL)
 #define R_SPI0_SPCR_SPEIE_Msk      (0x10UL)
 #define R_SPI0_SPCR_MSTR_Pos       (3UL)
 #define R_SPI0_SPCR_MSTR_Msk       (0x8UL)
 #define R_SPI0_SPCR_MODFEN_Pos     (2UL)
 #define R_SPI0_SPCR_MODFEN_Msk     (0x4UL)
 #define R_SPI0_SPCR_TXMD_Pos       (1UL)
 #define R_SPI0_SPCR_TXMD_Msk       (0x2UL)
 #define R_SPI0_SPCR_SPMS_Pos       (0UL)
 #define R_SPI0_SPCR_SPMS_Msk       (0x1UL)
/* =========================================================  SSLP  ========================================================== */
 #define R_SPI0_SSLP_SSL3P_Pos      (3UL)
 #define R_SPI0_SSLP_SSL3P_Msk      (0x8UL)
 #define R_SPI0_SSLP_SSL2P_Pos      (2UL)
 #define R_SPI0_SSLP_SSL2P_Msk      (0x4UL)
 #define R_SPI0_SSLP_SSL1P_Pos      (1UL)
 #define R_SPI0_SSLP_SSL1P_Msk      (0x2UL)
 #define R_SPI0_SSLP_SSL0P_Pos      (0UL)
 #define R_SPI0_SSLP_SSL0P_Msk      (0x1UL)
 #define R_SPI0_SSLP_SSL4P_Pos      (4UL)
 #define R_SPI0_SSLP_SSL4P_Msk      (0x10UL)
 #define R_SPI0_SSLP_SSL5P_Pos      (5UL)
 #define R_SPI0_SSLP_SSL5P_Msk      (0x20UL)
 #define R_SPI0_SSLP_SSL6P_Pos      (6UL)
 #define R_SPI0_SSLP_SSL6P_Msk      (0x40UL)
 #define R_SPI0_SSLP_SSL7P_Pos      (7UL)
 #define R_SPI0_SSLP_SSL7P_Msk      (0x80UL)
/* =========================================================  SPPCR  ========================================================= */
 #define R_SPI0_SPPCR_MOIFE_Pos     (5UL)
 #define R_SPI0_SPPCR_MOIFE_Msk     (0x20UL)
 #define R_SPI0_SPPCR_MOIFV_Pos     (4UL)
 #define R_SPI0_SPPCR_MOIFV_Msk     (0x10UL)
 #define R_SPI0_SPPCR_SPLP2_Pos     (1UL)
 #define R_SPI0_SPPCR_SPLP2_Msk     (0x2UL)
 #define R_SPI0_SPPCR_SPLP_Pos      (0UL)
 #define R_SPI0_SPPCR_SPLP_Msk      (0x1UL)
/* =========================================================  SPSR  ========================================================== */
 #define R_SPI0_SPSR_SPRF_Pos       (7UL)
 #define R_SPI0_SPSR_SPRF_Msk       (0x80UL)
 #define R_SPI0_SPSR_SPTEF_Pos      (5UL)
 #define R_SPI0_SPSR_SPTEF_Msk      (0x20UL)
 #define R_SPI0_SPSR_UDRF_Pos       (4UL)
 #define R_SPI0_SPSR_UDRF_Msk       (0x10UL)
 #define R_SPI0_SPSR_PERF_Pos       (3UL)
 #define R_SPI0_SPSR_PERF_Msk       (0x8UL)
 #define R_SPI0_SPSR_MODF_Pos       (2UL)
 #define R_SPI0_SPSR_MODF_Msk       (0x4UL)
 #define R_SPI0_SPSR_IDLNF_Pos      (1UL)
 #define R_SPI0_SPSR_IDLNF_Msk      (0x2UL)
 #define R_SPI0_SPSR_OVRF_Pos       (0UL)
 #define R_SPI0_SPSR_OVRF_Msk       (0x1UL)
 #define R_SPI0_SPSR_CENDF_Pos      (6UL)
 #define R_SPI0_SPSR_CENDF_Msk      (0x40UL)
/* =========================================================  SPDR  ========================================================== */
/* ========================================================  SPDR_HA  ======================================================== */
/* ========================================================  SPDR_BY  ======================================================== */
/* =========================================================  SPSCR  ========================================================= */
 #define R_SPI0_SPSCR_SPSLN_Pos     (0UL)
 #define R_SPI0_SPSCR_SPSLN_Msk     (0x7UL)
/* =========================================================  SPBR  ========================================================== */
 #define R_SPI0_SPBR_SPR_Pos        (0UL)
 #define R_SPI0_SPBR_SPR_Msk        (0xffUL)
/* =========================================================  SPDCR  ========================================================= */
 #define R_SPI0_SPDCR_SPBYT_Pos     (6UL)
 #define R_SPI0_SPDCR_SPBYT_Msk     (0x40UL)
 #define R_SPI0_SPDCR_SPLW_Pos      (5UL)
 #define R_SPI0_SPDCR_SPLW_Msk      (0x20UL)
 #define R_SPI0_SPDCR_SPRDTD_Pos    (4UL)
 #define R_SPI0_SPDCR_SPRDTD_Msk    (0x10UL)
 #define R_SPI0_SPDCR_SPFC_Pos      (0UL)
 #define R_SPI0_SPDCR_SPFC_Msk      (0x3UL)
 #define R_SPI0_SPDCR_SLSEL_Pos     (2UL)
 #define R_SPI0_SPDCR_SLSEL_Msk     (0xcUL)
/* =========================================================  SPCKD  ========================================================= */
 #define R_SPI0_SPCKD_SCKDL_Pos     (0UL)
 #define R_SPI0_SPCKD_SCKDL_Msk     (0x7UL)
/* =========================================================  SSLND  ========================================================= */
 #define R_SPI0_SSLND_SLNDL_Pos     (0UL)
 #define R_SPI0_SSLND_SLNDL_Msk     (0x7UL)
/* =========================================================  SPND  ========================================================== */
 #define R_SPI0_SPND_SPNDL_Pos      (0UL)
 #define R_SPI0_SPND_SPNDL_Msk      (0x7UL)
/* =========================================================  SPCR2  ========================================================= */
 #define R_SPI0_SPCR2_SCKASE_Pos    (4UL)
 #define R_SPI0_SPCR2_SCKASE_Msk    (0x10UL)
 #define R_SPI0_SPCR2_PTE_Pos       (3UL)
 #define R_SPI0_SPCR2_PTE_Msk       (0x8UL)
 #define R_SPI0_SPCR2_SPIIE_Pos     (2UL)
 #define R_SPI0_SPCR2_SPIIE_Msk     (0x4UL)
 #define R_SPI0_SPCR2_SPOE_Pos      (1UL)
 #define R_SPI0_SPCR2_SPOE_Msk      (0x2UL)
 #define R_SPI0_SPCR2_SPPE_Pos      (0UL)
 #define R_SPI0_SPCR2_SPPE_Msk      (0x1UL)
 #define R_SPI0_SPCR2_SPTDDL_Pos    (5UL)
 #define R_SPI0_SPCR2_SPTDDL_Msk    (0xe0UL)
/* =========================================================  SPCMD  ========================================================= */
 #define R_SPI0_SPCMD_SCKDEN_Pos    (15UL)
 #define R_SPI0_SPCMD_SCKDEN_Msk    (0x8000UL)
 #define R_SPI0_SPCMD_SLNDEN_Pos    (14UL)
 #define R_SPI0_SPCMD_SLNDEN_Msk    (0x4000UL)
 #define R_SPI0_SPCMD_SPNDEN_Pos    (13UL)
 #define R_SPI0_SPCMD_SPNDEN_Msk    (0x2000UL)
 #define R_SPI0_SPCMD_LSBF_Pos      (12UL)
 #define R_SPI0_SPCMD_LSBF_Msk      (0x1000UL)
 #define R_SPI0_SPCMD_SPB_Pos       (8UL)
 #define R_SPI0_SPCMD_SPB_Msk       (0xf00UL)
 #define R_SPI0_SPCMD_SSLKP_Pos     (7UL)
 #define R_SPI0_SPCMD_SSLKP_Msk     (0x80UL)
 #define R_SPI0_SPCMD_SSLA_Pos      (4UL)
 #define R_SPI0_SPCMD_SSLA_Msk      (0x70UL)
 #define R_SPI0_SPCMD_BRDV_Pos      (2UL)
 #define R_SPI0_SPCMD_BRDV_Msk      (0xcUL)
 #define R_SPI0_SPCMD_CPOL_Pos      (1UL)
 #define R_SPI0_SPCMD_CPOL_Msk      (0x2UL)
 #define R_SPI0_SPCMD_CPHA_Pos      (0UL)
 #define R_SPI0_SPCMD_CPHA_Msk      (0x1UL)
/* ========================================================  SPDCR2  ========================================================= */
 #define R_SPI0_SPDCR2_BYSW_Pos     (0UL)
 #define R_SPI0_SPDCR2_BYSW_Msk     (0x1UL)
 #define R_SPI0_SPDCR2_SINV_Pos     (1UL)
 #define R_SPI0_SPDCR2_SINV_Msk     (0x2UL)
/* =========================================================  SPSSR  ========================================================= */
 #define R_SPI0_SPSSR_SPCP_Pos      (0UL)
 #define R_SPI0_SPSSR_SPCP_Msk      (0x7UL)
 #define R_SPI0_SPSSR_SPECM_Pos     (4UL)
 #define R_SPI0_SPSSR_SPECM_Msk     (0x70UL)
/* =========================================================  SPCR3  ========================================================= */
 #define R_SPI0_SPCR3_ETXMD_Pos     (0UL)
 #define R_SPI0_SPCR3_ETXMD_Msk     (0x1UL)
 #define R_SPI0_SPCR3_BFDS_Pos      (1UL)
 #define R_SPI0_SPCR3_BFDS_Msk      (0x2UL)
 #define R_SPI0_SPCR3_CENDIE_Pos    (4UL)
 #define R_SPI0_SPCR3_CENDIE_Msk    (0x10UL)
/* =========================================================  SPPR  ========================================================== */
 #define R_SPI0_SPPR_BUFWID_Pos     (4UL)
 #define R_SPI0_SPPR_BUFWID_Msk     (0x10UL)
 #define R_SPI0_SPPR_BUFNUM_Pos     (8UL)
 #define R_SPI0_SPPR_BUFNUM_Msk     (0x700UL)
 #define R_SPI0_SPPR_CMDNUM_Pos     (12UL)
 #define R_SPI0_SPPR_CMDNUM_Msk     (0xf000UL)

/* =========================================================================================================================== */
/* ================                                          R_SRAM                                           ================ */
/* =========================================================================================================================== */

/* ========================================================  PARIOAD  ======================================================== */
 #define R_SRAM_PARIOAD_OAD_Pos            (0UL)
 #define R_SRAM_PARIOAD_OAD_Msk            (0x1UL)
/* =======================================================  SRAMPRCR  ======================================================== */
 #define R_SRAM_SRAMPRCR_KW_Pos            (1UL)
 #define R_SRAM_SRAMPRCR_KW_Msk            (0xfeUL)
 #define R_SRAM_SRAMPRCR_SRAMPRCR_Pos      (0UL)
 #define R_SRAM_SRAMPRCR_SRAMPRCR_Msk      (0x1UL)
/* =======================================================  SRAMWTSC  ======================================================== */
/* ========================================================  ECCMODE  ======================================================== */
 #define R_SRAM_ECCMODE_ECCMOD_Pos         (0UL)
 #define R_SRAM_ECCMODE_ECCMOD_Msk         (0x3UL)
/* ========================================================  ECC2STS  ======================================================== */
 #define R_SRAM_ECC2STS_ECC2ERR_Pos        (0UL)
 #define R_SRAM_ECC2STS_ECC2ERR_Msk        (0x1UL)
/* =======================================================  ECC1STSEN  ======================================================= */
 #define R_SRAM_ECC1STSEN_E1STSEN_Pos      (0UL)
 #define R_SRAM_ECC1STSEN_E1STSEN_Msk      (0x1UL)
/* ========================================================  ECC1STS  ======================================================== */
 #define R_SRAM_ECC1STS_ECC1ERR_Pos        (0UL)
 #define R_SRAM_ECC1STS_ECC1ERR_Msk        (0x1UL)
/* ========================================================  ECCPRCR  ======================================================== */
 #define R_SRAM_ECCPRCR_KW_Pos             (1UL)
 #define R_SRAM_ECCPRCR_KW_Msk             (0xfeUL)
 #define R_SRAM_ECCPRCR_ECCPRCR_Pos        (0UL)
 #define R_SRAM_ECCPRCR_ECCPRCR_Msk        (0x1UL)
/* =======================================================  ECCPRCR2  ======================================================== */
 #define R_SRAM_ECCPRCR2_KW2_Pos           (1UL)
 #define R_SRAM_ECCPRCR2_KW2_Msk           (0xfeUL)
 #define R_SRAM_ECCPRCR2_ECCPRCR2_Pos      (0UL)
 #define R_SRAM_ECCPRCR2_ECCPRCR2_Msk      (0x1UL)
/* ========================================================  ECCETST  ======================================================== */
 #define R_SRAM_ECCETST_TSTBYP_Pos         (0UL)
 #define R_SRAM_ECCETST_TSTBYP_Msk         (0x1UL)
/* ========================================================  ECCOAD  ========================================================= */
 #define R_SRAM_ECCOAD_OAD_Pos             (0UL)
 #define R_SRAM_ECCOAD_OAD_Msk             (0x1UL)
/* =======================================================  SRAMPRCR2  ======================================================= */
 #define R_SRAM_SRAMPRCR2_SRAMPRCR2_Pos    (0UL)
 #define R_SRAM_SRAMPRCR2_SRAMPRCR2_Msk    (0x1UL)
 #define R_SRAM_SRAMPRCR2_KW_Pos           (1UL)
 #define R_SRAM_SRAMPRCR2_KW_Msk           (0xfeUL)

/* =========================================================================================================================== */
/* ================                                           R_SRC                                           ================ */
/* =========================================================================================================================== */

/* ========================================================  SRCFCTR  ======================================================== */
 #define R_SRC_SRCFCTR_SRCFCOE_Pos    (0UL)
 #define R_SRC_SRCFCTR_SRCFCOE_Msk    (0x3fffffUL)
/* =========================================================  SRCID  ========================================================= */
 #define R_SRC_SRCID_SRCID_Pos        (0UL)
 #define R_SRC_SRCID_SRCID_Msk        (0xffffffffUL)
/* =========================================================  SRCOD  ========================================================= */
 #define R_SRC_SRCOD_SRCOD_Pos        (0UL)
 #define R_SRC_SRCOD_SRCOD_Msk        (0xffffffffUL)
/* =======================================================  SRCIDCTRL  ======================================================= */
 #define R_SRC_SRCIDCTRL_IED_Pos      (9UL)
 #define R_SRC_SRCIDCTRL_IED_Msk      (0x200UL)
 #define R_SRC_SRCIDCTRL_IEN_Pos      (8UL)
 #define R_SRC_SRCIDCTRL_IEN_Msk      (0x100UL)
 #define R_SRC_SRCIDCTRL_IFTRG_Pos    (0UL)
 #define R_SRC_SRCIDCTRL_IFTRG_Msk    (0x3UL)
/* ========================================================  SRCCTRL  ======================================================== */
 #define R_SRC_SRCCTRL_FICRAE_Pos     (15UL)
 #define R_SRC_SRCCTRL_FICRAE_Msk     (0x8000UL)
 #define R_SRC_SRCCTRL_CEEN_Pos       (13UL)
 #define R_SRC_SRCCTRL_CEEN_Msk       (0x2000UL)
 #define R_SRC_SRCCTRL_SRCEN_Pos      (12UL)
 #define R_SRC_SRCCTRL_SRCEN_Msk      (0x1000UL)
 #define R_SRC_SRCCTRL_UDEN_Pos       (11UL)
 #define R_SRC_SRCCTRL_UDEN_Msk       (0x800UL)
 #define R_SRC_SRCCTRL_OVEN_Pos       (10UL)
 #define R_SRC_SRCCTRL_OVEN_Msk       (0x400UL)
 #define R_SRC_SRCCTRL_FL_Pos         (9UL)
 #define R_SRC_SRCCTRL_FL_Msk         (0x200UL)
 #define R_SRC_SRCCTRL_CL_Pos         (8UL)
 #define R_SRC_SRCCTRL_CL_Msk         (0x100UL)
 #define R_SRC_SRCCTRL_IFS_Pos        (4UL)
 #define R_SRC_SRCCTRL_IFS_Msk        (0xf0UL)
 #define R_SRC_SRCCTRL_OFS_Pos        (0UL)
 #define R_SRC_SRCCTRL_OFS_Msk        (0x7UL)
/* =======================================================  SRCODCTRL  ======================================================= */
 #define R_SRC_SRCODCTRL_OCH_Pos      (10UL)
 #define R_SRC_SRCODCTRL_OCH_Msk      (0x400UL)
 #define R_SRC_SRCODCTRL_OED_Pos      (9UL)
 #define R_SRC_SRCODCTRL_OED_Msk      (0x200UL)
 #define R_SRC_SRCODCTRL_OEN_Pos      (8UL)
 #define R_SRC_SRCODCTRL_OEN_Msk      (0x100UL)
 #define R_SRC_SRCODCTRL_OFTRG_Pos    (0UL)
 #define R_SRC_SRCODCTRL_OFTRG_Msk    (0x3UL)
/* ========================================================  SRCSTAT  ======================================================== */
 #define R_SRC_SRCSTAT_OFDN_Pos       (11UL)
 #define R_SRC_SRCSTAT_OFDN_Msk       (0xf800UL)
 #define R_SRC_SRCSTAT_IFDN_Pos       (7UL)
 #define R_SRC_SRCSTAT_IFDN_Msk       (0x780UL)
 #define R_SRC_SRCSTAT_CEF_Pos        (5UL)
 #define R_SRC_SRCSTAT_CEF_Msk        (0x20UL)
 #define R_SRC_SRCSTAT_FLF_Pos        (4UL)
 #define R_SRC_SRCSTAT_FLF_Msk        (0x10UL)
 #define R_SRC_SRCSTAT_UDF_Pos        (3UL)
 #define R_SRC_SRCSTAT_UDF_Msk        (0x8UL)
 #define R_SRC_SRCSTAT_OVF_Pos        (2UL)
 #define R_SRC_SRCSTAT_OVF_Msk        (0x4UL)
 #define R_SRC_SRCSTAT_IINT_Pos       (1UL)
 #define R_SRC_SRCSTAT_IINT_Msk       (0x2UL)
 #define R_SRC_SRCSTAT_OINT_Pos       (0UL)
 #define R_SRC_SRCSTAT_OINT_Msk       (0x1UL)

/* =========================================================================================================================== */
/* ================                                          R_SSI0                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  SSICR  ========================================================= */
 #define R_SSI0_SSICR_CKS_Pos          (30UL)
 #define R_SSI0_SSICR_CKS_Msk          (0x40000000UL)
 #define R_SSI0_SSICR_TUIEN_Pos        (29UL)
 #define R_SSI0_SSICR_TUIEN_Msk        (0x20000000UL)
 #define R_SSI0_SSICR_TOIEN_Pos        (28UL)
 #define R_SSI0_SSICR_TOIEN_Msk        (0x10000000UL)
 #define R_SSI0_SSICR_RUIEN_Pos        (27UL)
 #define R_SSI0_SSICR_RUIEN_Msk        (0x8000000UL)
 #define R_SSI0_SSICR_ROIEN_Pos        (26UL)
 #define R_SSI0_SSICR_ROIEN_Msk        (0x4000000UL)
 #define R_SSI0_SSICR_IIEN_Pos         (25UL)
 #define R_SSI0_SSICR_IIEN_Msk         (0x2000000UL)
 #define R_SSI0_SSICR_FRM_Pos          (22UL)
 #define R_SSI0_SSICR_FRM_Msk          (0xc00000UL)
 #define R_SSI0_SSICR_DWL_Pos          (19UL)
 #define R_SSI0_SSICR_DWL_Msk          (0x380000UL)
 #define R_SSI0_SSICR_SWL_Pos          (16UL)
 #define R_SSI0_SSICR_SWL_Msk          (0x70000UL)
 #define R_SSI0_SSICR_MST_Pos          (14UL)
 #define R_SSI0_SSICR_MST_Msk          (0x4000UL)
 #define R_SSI0_SSICR_BCKP_Pos         (13UL)
 #define R_SSI0_SSICR_BCKP_Msk         (0x2000UL)
 #define R_SSI0_SSICR_LRCKP_Pos        (12UL)
 #define R_SSI0_SSICR_LRCKP_Msk        (0x1000UL)
 #define R_SSI0_SSICR_SPDP_Pos         (11UL)
 #define R_SSI0_SSICR_SPDP_Msk         (0x800UL)
 #define R_SSI0_SSICR_SDTA_Pos         (10UL)
 #define R_SSI0_SSICR_SDTA_Msk         (0x400UL)
 #define R_SSI0_SSICR_PDTA_Pos         (9UL)
 #define R_SSI0_SSICR_PDTA_Msk         (0x200UL)
 #define R_SSI0_SSICR_DEL_Pos          (8UL)
 #define R_SSI0_SSICR_DEL_Msk          (0x100UL)
 #define R_SSI0_SSICR_CKDV_Pos         (4UL)
 #define R_SSI0_SSICR_CKDV_Msk         (0xf0UL)
 #define R_SSI0_SSICR_MUEN_Pos         (3UL)
 #define R_SSI0_SSICR_MUEN_Msk         (0x8UL)
 #define R_SSI0_SSICR_TEN_Pos          (1UL)
 #define R_SSI0_SSICR_TEN_Msk          (0x2UL)
 #define R_SSI0_SSICR_REN_Pos          (0UL)
 #define R_SSI0_SSICR_REN_Msk          (0x1UL)
/* =========================================================  SSISR  ========================================================= */
 #define R_SSI0_SSISR_TUIRQ_Pos        (29UL)
 #define R_SSI0_SSISR_TUIRQ_Msk        (0x20000000UL)
 #define R_SSI0_SSISR_TOIRQ_Pos        (28UL)
 #define R_SSI0_SSISR_TOIRQ_Msk        (0x10000000UL)
 #define R_SSI0_SSISR_RUIRQ_Pos        (27UL)
 #define R_SSI0_SSISR_RUIRQ_Msk        (0x8000000UL)
 #define R_SSI0_SSISR_ROIRQ_Pos        (26UL)
 #define R_SSI0_SSISR_ROIRQ_Msk        (0x4000000UL)
 #define R_SSI0_SSISR_IIRQ_Pos         (25UL)
 #define R_SSI0_SSISR_IIRQ_Msk         (0x2000000UL)
 #define R_SSI0_SSISR_TCHNO_Pos        (5UL)
 #define R_SSI0_SSISR_TCHNO_Msk        (0x60UL)
 #define R_SSI0_SSISR_TSWNO_Pos        (4UL)
 #define R_SSI0_SSISR_TSWNO_Msk        (0x10UL)
 #define R_SSI0_SSISR_RCHNO_Pos        (2UL)
 #define R_SSI0_SSISR_RCHNO_Msk        (0xcUL)
 #define R_SSI0_SSISR_RSWNO_Pos        (1UL)
 #define R_SSI0_SSISR_RSWNO_Msk        (0x2UL)
 #define R_SSI0_SSISR_IDST_Pos         (0UL)
 #define R_SSI0_SSISR_IDST_Msk         (0x1UL)
/* ========================================================  SSIFCR  ========================================================= */
 #define R_SSI0_SSIFCR_AUCKE_Pos       (31UL)
 #define R_SSI0_SSIFCR_AUCKE_Msk       (0x80000000UL)
 #define R_SSI0_SSIFCR_SSIRST_Pos      (16UL)
 #define R_SSI0_SSIFCR_SSIRST_Msk      (0x10000UL)
 #define R_SSI0_SSIFCR_TTRG_Pos        (6UL)
 #define R_SSI0_SSIFCR_TTRG_Msk        (0xc0UL)
 #define R_SSI0_SSIFCR_RTRG_Pos        (4UL)
 #define R_SSI0_SSIFCR_RTRG_Msk        (0x30UL)
 #define R_SSI0_SSIFCR_TIE_Pos         (3UL)
 #define R_SSI0_SSIFCR_TIE_Msk         (0x8UL)
 #define R_SSI0_SSIFCR_RIE_Pos         (2UL)
 #define R_SSI0_SSIFCR_RIE_Msk         (0x4UL)
 #define R_SSI0_SSIFCR_TFRST_Pos       (1UL)
 #define R_SSI0_SSIFCR_TFRST_Msk       (0x2UL)
 #define R_SSI0_SSIFCR_RFRST_Pos       (0UL)
 #define R_SSI0_SSIFCR_RFRST_Msk       (0x1UL)
 #define R_SSI0_SSIFCR_BSW_Pos         (11UL)
 #define R_SSI0_SSIFCR_BSW_Msk         (0x800UL)
/* ========================================================  SSIFSR  ========================================================= */
 #define R_SSI0_SSIFSR_TDC_Pos         (24UL)
 #define R_SSI0_SSIFSR_TDC_Msk         (0x3f000000UL)
 #define R_SSI0_SSIFSR_TDE_Pos         (16UL)
 #define R_SSI0_SSIFSR_TDE_Msk         (0x10000UL)
 #define R_SSI0_SSIFSR_RDC_Pos         (8UL)
 #define R_SSI0_SSIFSR_RDC_Msk         (0x3f00UL)
 #define R_SSI0_SSIFSR_RDF_Pos         (0UL)
 #define R_SSI0_SSIFSR_RDF_Msk         (0x1UL)
/* ========================================================  SSIFTDR  ======================================================== */
 #define R_SSI0_SSIFTDR_SSIFTDR_Pos    (0UL)
 #define R_SSI0_SSIFTDR_SSIFTDR_Msk    (0xffffffffUL)
/* =======================================================  SSIFTDR16  ======================================================= */
/* =======================================================  SSIFTDR8  ======================================================== */
/* ========================================================  SSIFRDR  ======================================================== */
 #define R_SSI0_SSIFRDR_SSIFRDR_Pos    (0UL)
 #define R_SSI0_SSIFRDR_SSIFRDR_Msk    (0xffffffffUL)
/* =======================================================  SSIFRDR16  ======================================================= */
/* =======================================================  SSIFRDR8  ======================================================== */
/* ========================================================  SSIOFR  ========================================================= */
 #define R_SSI0_SSIOFR_BCKASTP_Pos     (9UL)
 #define R_SSI0_SSIOFR_BCKASTP_Msk     (0x200UL)
 #define R_SSI0_SSIOFR_LRCONT_Pos      (8UL)
 #define R_SSI0_SSIOFR_LRCONT_Msk      (0x100UL)
 #define R_SSI0_SSIOFR_OMOD_Pos        (0UL)
 #define R_SSI0_SSIOFR_OMOD_Msk        (0x3UL)
/* ========================================================  SSISCR  ========================================================= */
 #define R_SSI0_SSISCR_TDES_Pos        (8UL)
 #define R_SSI0_SSISCR_TDES_Msk        (0x1f00UL)
 #define R_SSI0_SSISCR_RDFS_Pos        (0UL)
 #define R_SSI0_SSISCR_RDFS_Msk        (0x1fUL)

/* =========================================================================================================================== */
/* ================                                         R_SYSTEM                                          ================ */
/* =========================================================================================================================== */

/* =========================================================  SBYCR  ========================================================= */
 #define R_SYSTEM_SBYCR_SSBY_Pos                   (15UL)
 #define R_SYSTEM_SBYCR_SSBY_Msk                   (0x8000UL)
 #define R_SYSTEM_SBYCR_OPE_Pos                    (14UL)
 #define R_SYSTEM_SBYCR_OPE_Msk                    (0x4000UL)
/* ========================================================  MSTPCRA  ======================================================== */
 #define R_SYSTEM_MSTPCRA_MSTPA_Pos                (0UL)
 #define R_SYSTEM_MSTPCRA_MSTPA_Msk                (0x1UL)
/* =======================================================  SCKDIVCR  ======================================================== */
 #define R_SYSTEM_SCKDIVCR_FCK_Pos                 (28UL)
 #define R_SYSTEM_SCKDIVCR_FCK_Msk                 (0x70000000UL)
 #define R_SYSTEM_SCKDIVCR_ICK_Pos                 (24UL)
 #define R_SYSTEM_SCKDIVCR_ICK_Msk                 (0x7000000UL)
 #define R_SYSTEM_SCKDIVCR_BCK_Pos                 (16UL)
 #define R_SYSTEM_SCKDIVCR_BCK_Msk                 (0x70000UL)
 #define R_SYSTEM_SCKDIVCR_PCKA_Pos                (12UL)
 #define R_SYSTEM_SCKDIVCR_PCKA_Msk                (0x7000UL)
 #define R_SYSTEM_SCKDIVCR_PCKB_Pos                (8UL)
 #define R_SYSTEM_SCKDIVCR_PCKB_Msk                (0x700UL)
 #define R_SYSTEM_SCKDIVCR_PCKC_Pos                (4UL)
 #define R_SYSTEM_SCKDIVCR_PCKC_Msk                (0x70UL)
 #define R_SYSTEM_SCKDIVCR_PCKD_Pos                (0UL)
 #define R_SYSTEM_SCKDIVCR_PCKD_Msk                (0x7UL)
/* =======================================================  SCKDIVCR2  ======================================================= */
 #define R_SYSTEM_SCKDIVCR2_UCK_Pos                (4UL)
 #define R_SYSTEM_SCKDIVCR2_UCK_Msk                (0x70UL)
/* ========================================================  SCKSCR  ========================================================= */
 #define R_SYSTEM_SCKSCR_CKSEL_Pos                 (0UL)
 #define R_SYSTEM_SCKSCR_CKSEL_Msk                 (0x7UL)
/* ========================================================  PLLCCR  ========================================================= */
 #define R_SYSTEM_PLLCCR_PLLMUL_Pos                (8UL)
 #define R_SYSTEM_PLLCCR_PLLMUL_Msk                (0x3f00UL)
 #define R_SYSTEM_PLLCCR_PLSRCSEL_Pos              (4UL)
 #define R_SYSTEM_PLLCCR_PLSRCSEL_Msk              (0x10UL)
 #define R_SYSTEM_PLLCCR_PLIDIV_Pos                (0UL)
 #define R_SYSTEM_PLLCCR_PLIDIV_Msk                (0x3UL)
/* =========================================================  PLLCR  ========================================================= */
 #define R_SYSTEM_PLLCR_PLLSTP_Pos                 (0UL)
 #define R_SYSTEM_PLLCR_PLLSTP_Msk                 (0x1UL)
/* ========================================================  PLLCCR2  ======================================================== */
 #define R_SYSTEM_PLLCCR2_PLODIV_Pos               (6UL)
 #define R_SYSTEM_PLLCCR2_PLODIV_Msk               (0xc0UL)
 #define R_SYSTEM_PLLCCR2_PLLMUL_Pos               (0UL)
 #define R_SYSTEM_PLLCCR2_PLLMUL_Msk               (0x1fUL)
/* =========================================================  BCKCR  ========================================================= */
 #define R_SYSTEM_BCKCR_BCLKDIV_Pos                (0UL)
 #define R_SYSTEM_BCKCR_BCLKDIV_Msk                (0x1UL)
/* ========================================================  MEMWAIT  ======================================================== */
 #define R_SYSTEM_MEMWAIT_MEMWAIT_Pos              (0UL)
 #define R_SYSTEM_MEMWAIT_MEMWAIT_Msk              (0x1UL)
/* ========================================================  MOSCCR  ========================================================= */
 #define R_SYSTEM_MOSCCR_MOSTP_Pos                 (0UL)
 #define R_SYSTEM_MOSCCR_MOSTP_Msk                 (0x1UL)
/* ========================================================  HOCOCR  ========================================================= */
 #define R_SYSTEM_HOCOCR_HCSTP_Pos                 (0UL)
 #define R_SYSTEM_HOCOCR_HCSTP_Msk                 (0x1UL)
/* ========================================================  HOCOCR2  ======================================================== */
 #define R_SYSTEM_HOCOCR2_HCFRQ0_Pos               (0UL)
 #define R_SYSTEM_HOCOCR2_HCFRQ0_Msk               (0x3UL)
 #define R_SYSTEM_HOCOCR2_HCFRQ1_Pos               (3UL)
 #define R_SYSTEM_HOCOCR2_HCFRQ1_Msk               (0x38UL)
/* ========================================================  MOCOCR  ========================================================= */
 #define R_SYSTEM_MOCOCR_MCSTP_Pos                 (0UL)
 #define R_SYSTEM_MOCOCR_MCSTP_Msk                 (0x1UL)
/* ========================================================  FLLCR1  ========================================================= */
 #define R_SYSTEM_FLLCR1_FLLEN_Pos                 (0UL)
 #define R_SYSTEM_FLLCR1_FLLEN_Msk                 (0x1UL)
/* ========================================================  FLLCR2  ========================================================= */
 #define R_SYSTEM_FLLCR2_FLLCNTL_Pos               (0UL)
 #define R_SYSTEM_FLLCR2_FLLCNTL_Msk               (0x7ffUL)
/* =========================================================  OSCSF  ========================================================= */
 #define R_SYSTEM_OSCSF_PLLSF_Pos                  (5UL)
 #define R_SYSTEM_OSCSF_PLLSF_Msk                  (0x20UL)
 #define R_SYSTEM_OSCSF_MOSCSF_Pos                 (3UL)
 #define R_SYSTEM_OSCSF_MOSCSF_Msk                 (0x8UL)
 #define R_SYSTEM_OSCSF_HOCOSF_Pos                 (0UL)
 #define R_SYSTEM_OSCSF_HOCOSF_Msk                 (0x1UL)
 #define R_SYSTEM_OSCSF_PLL2SF_Pos                 (6UL)
 #define R_SYSTEM_OSCSF_PLL2SF_Msk                 (0x40UL)
/* =========================================================  CKOCR  ========================================================= */
 #define R_SYSTEM_CKOCR_CKOEN_Pos                  (7UL)
 #define R_SYSTEM_CKOCR_CKOEN_Msk                  (0x80UL)
 #define R_SYSTEM_CKOCR_CKODIV_Pos                 (4UL)
 #define R_SYSTEM_CKOCR_CKODIV_Msk                 (0x70UL)
 #define R_SYSTEM_CKOCR_CKOSEL_Pos                 (0UL)
 #define R_SYSTEM_CKOCR_CKOSEL_Msk                 (0x7UL)
/* ========================================================  TRCKCR  ========================================================= */
 #define R_SYSTEM_TRCKCR_TRCKEN_Pos                (7UL)
 #define R_SYSTEM_TRCKCR_TRCKEN_Msk                (0x80UL)
 #define R_SYSTEM_TRCKCR_TRCK_Pos                  (0UL)
 #define R_SYSTEM_TRCKCR_TRCK_Msk                  (0xfUL)
/* ========================================================  OSTDCR  ========================================================= */
 #define R_SYSTEM_OSTDCR_OSTDE_Pos                 (7UL)
 #define R_SYSTEM_OSTDCR_OSTDE_Msk                 (0x80UL)
 #define R_SYSTEM_OSTDCR_OSTDIE_Pos                (0UL)
 #define R_SYSTEM_OSTDCR_OSTDIE_Msk                (0x1UL)
/* ========================================================  OSTDSR  ========================================================= */
 #define R_SYSTEM_OSTDSR_OSTDF_Pos                 (0UL)
 #define R_SYSTEM_OSTDSR_OSTDF_Msk                 (0x1UL)
/* =========================================================  LPOPT  ========================================================= */
 #define R_SYSTEM_LPOPT_LPOPTEN_Pos                (7UL)
 #define R_SYSTEM_LPOPT_LPOPTEN_Msk                (0x80UL)
 #define R_SYSTEM_LPOPT_BPFCLKDIS_Pos              (3UL)
 #define R_SYSTEM_LPOPT_BPFCLKDIS_Msk              (0x8UL)
 #define R_SYSTEM_LPOPT_DCLKDIS_Pos                (1UL)
 #define R_SYSTEM_LPOPT_DCLKDIS_Msk                (0x6UL)
 #define R_SYSTEM_LPOPT_MPUDIS_Pos                 (0UL)
 #define R_SYSTEM_LPOPT_MPUDIS_Msk                 (0x1UL)
/* =======================================================  SLCDSCKCR  ======================================================= */
 #define R_SYSTEM_SLCDSCKCR_LCDSCKEN_Pos           (7UL)
 #define R_SYSTEM_SLCDSCKCR_LCDSCKEN_Msk           (0x80UL)
 #define R_SYSTEM_SLCDSCKCR_LCDSCKSEL_Pos          (0UL)
 #define R_SYSTEM_SLCDSCKCR_LCDSCKSEL_Msk          (0x7UL)
/* ========================================================  EBCKOCR  ======================================================== */
 #define R_SYSTEM_EBCKOCR_EBCKOEN_Pos              (0UL)
 #define R_SYSTEM_EBCKOCR_EBCKOEN_Msk              (0x1UL)
/* ========================================================  SDCKOCR  ======================================================== */
 #define R_SYSTEM_SDCKOCR_SDCKOEN_Pos              (0UL)
 #define R_SYSTEM_SDCKOCR_SDCKOEN_Msk              (0x1UL)
/* =======================================================  MOCOUTCR  ======================================================== */
 #define R_SYSTEM_MOCOUTCR_MOCOUTRM_Pos            (0UL)
 #define R_SYSTEM_MOCOUTCR_MOCOUTRM_Msk            (0xffUL)
/* =======================================================  HOCOUTCR  ======================================================== */
 #define R_SYSTEM_HOCOUTCR_HOCOUTRM_Pos            (0UL)
 #define R_SYSTEM_HOCOUTCR_HOCOUTRM_Msk            (0xffUL)
/* =========================================================  SNZCR  ========================================================= */
 #define R_SYSTEM_SNZCR_SNZE_Pos                   (7UL)
 #define R_SYSTEM_SNZCR_SNZE_Msk                   (0x80UL)
 #define R_SYSTEM_SNZCR_SNZDTCEN_Pos               (1UL)
 #define R_SYSTEM_SNZCR_SNZDTCEN_Msk               (0x2UL)
 #define R_SYSTEM_SNZCR_RXDREQEN_Pos               (0UL)
 #define R_SYSTEM_SNZCR_RXDREQEN_Msk               (0x1UL)
/* ========================================================  SNZEDCR  ======================================================== */
 #define R_SYSTEM_SNZEDCR_SCI0UMTED_Pos            (7UL)
 #define R_SYSTEM_SNZEDCR_SCI0UMTED_Msk            (0x80UL)
 #define R_SYSTEM_SNZEDCR_AD1UMTED_Pos             (6UL)
 #define R_SYSTEM_SNZEDCR_AD1UMTED_Msk             (0x40UL)
 #define R_SYSTEM_SNZEDCR_AD1MATED_Pos             (5UL)
 #define R_SYSTEM_SNZEDCR_AD1MATED_Msk             (0x20UL)
 #define R_SYSTEM_SNZEDCR_AD0UMTED_Pos             (4UL)
 #define R_SYSTEM_SNZEDCR_AD0UMTED_Msk             (0x10UL)
 #define R_SYSTEM_SNZEDCR_AD0MATED_Pos             (3UL)
 #define R_SYSTEM_SNZEDCR_AD0MATED_Msk             (0x8UL)
 #define R_SYSTEM_SNZEDCR_DTCNZRED_Pos             (2UL)
 #define R_SYSTEM_SNZEDCR_DTCNZRED_Msk             (0x4UL)
 #define R_SYSTEM_SNZEDCR_DTCZRED_Pos              (1UL)
 #define R_SYSTEM_SNZEDCR_DTCZRED_Msk              (0x2UL)
 #define R_SYSTEM_SNZEDCR_AGT1UNFED_Pos            (0UL)
 #define R_SYSTEM_SNZEDCR_AGT1UNFED_Msk            (0x1UL)
/* =======================================================  SNZREQCR  ======================================================== */
 #define R_SYSTEM_SNZREQCR_SNZREQEN30_Pos          (30UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN30_Msk          (0x40000000UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN29_Pos          (29UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN29_Msk          (0x20000000UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN28_Pos          (28UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN28_Msk          (0x10000000UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN25_Pos          (25UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN25_Msk          (0x2000000UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN24_Pos          (24UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN24_Msk          (0x1000000UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN23_Pos          (23UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN23_Msk          (0x800000UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN22_Pos          (22UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN22_Msk          (0x400000UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN17_Pos          (17UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN17_Msk          (0x20000UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN_Pos            (0UL)
 #define R_SYSTEM_SNZREQCR_SNZREQEN_Msk            (0x1UL)
/* ========================================================  FLSTOP  ========================================================= */
 #define R_SYSTEM_FLSTOP_FLSTPF_Pos                (4UL)
 #define R_SYSTEM_FLSTOP_FLSTPF_Msk                (0x10UL)
 #define R_SYSTEM_FLSTOP_FLSTOP_Pos                (0UL)
 #define R_SYSTEM_FLSTOP_FLSTOP_Msk                (0x1UL)
/* =========================================================  PSMCR  ========================================================= */
 #define R_SYSTEM_PSMCR_PSMC_Pos                   (0UL)
 #define R_SYSTEM_PSMCR_PSMC_Msk                   (0x3UL)
/* =========================================================  OPCCR  ========================================================= */
 #define R_SYSTEM_OPCCR_OPCMTSF_Pos                (4UL)
 #define R_SYSTEM_OPCCR_OPCMTSF_Msk                (0x10UL)
 #define R_SYSTEM_OPCCR_OPCM_Pos                   (0UL)
 #define R_SYSTEM_OPCCR_OPCM_Msk                   (0x3UL)
/* ========================================================  SOPCCR  ========================================================= */
 #define R_SYSTEM_SOPCCR_SOPCMTSF_Pos              (4UL)
 #define R_SYSTEM_SOPCCR_SOPCMTSF_Msk              (0x10UL)
 #define R_SYSTEM_SOPCCR_SOPCM_Pos                 (0UL)
 #define R_SYSTEM_SOPCCR_SOPCM_Msk                 (0x1UL)
/* =======================================================  MOSCWTCR  ======================================================== */
 #define R_SYSTEM_MOSCWTCR_MSTS_Pos                (0UL)
 #define R_SYSTEM_MOSCWTCR_MSTS_Msk                (0xfUL)
/* =======================================================  HOCOWTCR  ======================================================== */
 #define R_SYSTEM_HOCOWTCR_HSTS_Pos                (0UL)
 #define R_SYSTEM_HOCOWTCR_HSTS_Msk                (0x7UL)
/* ========================================================  RSTSR1  ========================================================= */
 #define R_SYSTEM_RSTSR1_SPERF_Pos                 (12UL)
 #define R_SYSTEM_RSTSR1_SPERF_Msk                 (0x1000UL)
 #define R_SYSTEM_RSTSR1_BUSMRF_Pos                (11UL)
 #define R_SYSTEM_RSTSR1_BUSMRF_Msk                (0x800UL)
 #define R_SYSTEM_RSTSR1_BUSSRF_Pos                (10UL)
 #define R_SYSTEM_RSTSR1_BUSSRF_Msk                (0x400UL)
 #define R_SYSTEM_RSTSR1_REERF_Pos                 (9UL)
 #define R_SYSTEM_RSTSR1_REERF_Msk                 (0x200UL)
 #define R_SYSTEM_RSTSR1_RPERF_Pos                 (8UL)
 #define R_SYSTEM_RSTSR1_RPERF_Msk                 (0x100UL)
 #define R_SYSTEM_RSTSR1_SWRF_Pos                  (2UL)
 #define R_SYSTEM_RSTSR1_SWRF_Msk                  (0x4UL)
 #define R_SYSTEM_RSTSR1_WDTRF_Pos                 (1UL)
 #define R_SYSTEM_RSTSR1_WDTRF_Msk                 (0x2UL)
 #define R_SYSTEM_RSTSR1_IWDTRF_Pos                (0UL)
 #define R_SYSTEM_RSTSR1_IWDTRF_Msk                (0x1UL)
 #define R_SYSTEM_RSTSR1_TZERF_Pos                 (13UL)
 #define R_SYSTEM_RSTSR1_TZERF_Msk                 (0x2000UL)
 #define R_SYSTEM_RSTSR1_CPERF_Pos                 (15UL)
 #define R_SYSTEM_RSTSR1_CPERF_Msk                 (0x8000UL)
/* ========================================================  STCONR  ========================================================= */
 #define R_SYSTEM_STCONR_STCON_Pos                 (0UL)
 #define R_SYSTEM_STCONR_STCON_Msk                 (0x3UL)
/* ========================================================  LVD1CR1  ======================================================== */
 #define R_SYSTEM_LVD1CR1_IRQSEL_Pos               (2UL)
 #define R_SYSTEM_LVD1CR1_IRQSEL_Msk               (0x4UL)
 #define R_SYSTEM_LVD1CR1_IDTSEL_Pos               (0UL)
 #define R_SYSTEM_LVD1CR1_IDTSEL_Msk               (0x3UL)
/* ========================================================  LVD2CR1  ======================================================== */
 #define R_SYSTEM_LVD2CR1_IRQSEL_Pos               (2UL)
 #define R_SYSTEM_LVD2CR1_IRQSEL_Msk               (0x4UL)
 #define R_SYSTEM_LVD2CR1_IDTSEL_Pos               (0UL)
 #define R_SYSTEM_LVD2CR1_IDTSEL_Msk               (0x3UL)
/* ======================================================  USBCKCR_ALT  ====================================================== */
 #define R_SYSTEM_USBCKCR_ALT_USBCLKSEL_Pos        (0UL)
 #define R_SYSTEM_USBCKCR_ALT_USBCLKSEL_Msk        (0x1UL)
/* =======================================================  SDADCCKCR  ======================================================= */
 #define R_SYSTEM_SDADCCKCR_SDADCCKSEL_Pos         (0UL)
 #define R_SYSTEM_SDADCCKCR_SDADCCKSEL_Msk         (0x1UL)
 #define R_SYSTEM_SDADCCKCR_SDADCCKEN_Pos          (7UL)
 #define R_SYSTEM_SDADCCKCR_SDADCCKEN_Msk          (0x80UL)
/* ========================================================  LVD1SR  ========================================================= */
 #define R_SYSTEM_LVD1SR_MON_Pos                   (1UL)
 #define R_SYSTEM_LVD1SR_MON_Msk                   (0x2UL)
 #define R_SYSTEM_LVD1SR_DET_Pos                   (0UL)
 #define R_SYSTEM_LVD1SR_DET_Msk                   (0x1UL)
/* ========================================================  LVD2SR  ========================================================= */
 #define R_SYSTEM_LVD2SR_MON_Pos                   (1UL)
 #define R_SYSTEM_LVD2SR_MON_Msk                   (0x2UL)
 #define R_SYSTEM_LVD2SR_DET_Pos                   (0UL)
 #define R_SYSTEM_LVD2SR_DET_Msk                   (0x1UL)
/* =========================================================  PRCR  ========================================================== */
 #define R_SYSTEM_PRCR_PRKEY_Pos                   (8UL)
 #define R_SYSTEM_PRCR_PRKEY_Msk                   (0xff00UL)
 #define R_SYSTEM_PRCR_PRC3_Pos                    (3UL)
 #define R_SYSTEM_PRCR_PRC3_Msk                    (0x8UL)
 #define R_SYSTEM_PRCR_PRC1_Pos                    (1UL)
 #define R_SYSTEM_PRCR_PRC1_Msk                    (0x2UL)
 #define R_SYSTEM_PRCR_PRC0_Pos                    (0UL)
 #define R_SYSTEM_PRCR_PRC0_Msk                    (0x1UL)
 #define R_SYSTEM_PRCR_PRC4_Pos                    (4UL)
 #define R_SYSTEM_PRCR_PRC4_Msk                    (0x10UL)
/* ========================================================  DPSIER0  ======================================================== */
 #define R_SYSTEM_DPSIER0_DIRQE_Pos                (0UL)
 #define R_SYSTEM_DPSIER0_DIRQE_Msk                (0x1UL)
/* ========================================================  DPSIER1  ======================================================== */
 #define R_SYSTEM_DPSIER1_DIRQE_Pos                (0UL)
 #define R_SYSTEM_DPSIER1_DIRQE_Msk                (0x1UL)
/* ========================================================  DPSIER2  ======================================================== */
 #define R_SYSTEM_DPSIER2_DNMIE_Pos                (4UL)
 #define R_SYSTEM_DPSIER2_DNMIE_Msk                (0x10UL)
 #define R_SYSTEM_DPSIER2_DRTCAIE_Pos              (3UL)
 #define R_SYSTEM_DPSIER2_DRTCAIE_Msk              (0x8UL)
 #define R_SYSTEM_DPSIER2_DTRTCIIE_Pos             (2UL)
 #define R_SYSTEM_DPSIER2_DTRTCIIE_Msk             (0x4UL)
 #define R_SYSTEM_DPSIER2_DLVD2IE_Pos              (1UL)
 #define R_SYSTEM_DPSIER2_DLVD2IE_Msk              (0x2UL)
 #define R_SYSTEM_DPSIER2_DLVD1IE_Pos              (0UL)
 #define R_SYSTEM_DPSIER2_DLVD1IE_Msk              (0x1UL)
/* ========================================================  DPSIER3  ======================================================== */
 #define R_SYSTEM_DPSIER3_DAGT1IE_Pos              (2UL)
 #define R_SYSTEM_DPSIER3_DAGT1IE_Msk              (0x4UL)
 #define R_SYSTEM_DPSIER3_DUSBHSIE_Pos             (1UL)
 #define R_SYSTEM_DPSIER3_DUSBHSIE_Msk             (0x2UL)
 #define R_SYSTEM_DPSIER3_DUSBFSIE_Pos             (0UL)
 #define R_SYSTEM_DPSIER3_DUSBFSIE_Msk             (0x1UL)
 #define R_SYSTEM_DPSIER3_DAGT3IE_Pos              (3UL)
 #define R_SYSTEM_DPSIER3_DAGT3IE_Msk              (0x8UL)
/* ========================================================  DPSIFR0  ======================================================== */
 #define R_SYSTEM_DPSIFR0_DIRQF_Pos                (0UL)
 #define R_SYSTEM_DPSIFR0_DIRQF_Msk                (0x1UL)
/* ========================================================  DPSIFR1  ======================================================== */
 #define R_SYSTEM_DPSIFR1_DIRQF_Pos                (0UL)
 #define R_SYSTEM_DPSIFR1_DIRQF_Msk                (0x1UL)
/* ========================================================  DPSIFR2  ======================================================== */
 #define R_SYSTEM_DPSIFR2_DNMIF_Pos                (4UL)
 #define R_SYSTEM_DPSIFR2_DNMIF_Msk                (0x10UL)
 #define R_SYSTEM_DPSIFR2_DRTCAIF_Pos              (3UL)
 #define R_SYSTEM_DPSIFR2_DRTCAIF_Msk              (0x8UL)
 #define R_SYSTEM_DPSIFR2_DTRTCIIF_Pos             (2UL)
 #define R_SYSTEM_DPSIFR2_DTRTCIIF_Msk             (0x4UL)
 #define R_SYSTEM_DPSIFR2_DLVD2IF_Pos              (1UL)
 #define R_SYSTEM_DPSIFR2_DLVD2IF_Msk              (0x2UL)
 #define R_SYSTEM_DPSIFR2_DLVD1IF_Pos              (0UL)
 #define R_SYSTEM_DPSIFR2_DLVD1IF_Msk              (0x1UL)
/* ========================================================  DPSIFR3  ======================================================== */
 #define R_SYSTEM_DPSIFR3_DAGT1IF_Pos              (2UL)
 #define R_SYSTEM_DPSIFR3_DAGT1IF_Msk              (0x4UL)
 #define R_SYSTEM_DPSIFR3_DUSBHSIF_Pos             (1UL)
 #define R_SYSTEM_DPSIFR3_DUSBHSIF_Msk             (0x2UL)
 #define R_SYSTEM_DPSIFR3_DUSBFSIF_Pos             (0UL)
 #define R_SYSTEM_DPSIFR3_DUSBFSIF_Msk             (0x1UL)
 #define R_SYSTEM_DPSIFR3_DAGT3IF_Pos              (3UL)
 #define R_SYSTEM_DPSIFR3_DAGT3IF_Msk              (0x8UL)
/* =======================================================  DPSIEGR0  ======================================================== */
 #define R_SYSTEM_DPSIEGR0_DIRQEG_Pos              (0UL)
 #define R_SYSTEM_DPSIEGR0_DIRQEG_Msk              (0x1UL)
/* =======================================================  DPSIEGR1  ======================================================== */
 #define R_SYSTEM_DPSIEGR1_DIRQEG_Pos              (0UL)
 #define R_SYSTEM_DPSIEGR1_DIRQEG_Msk              (0x1UL)
/* =======================================================  DPSIEGR2  ======================================================== */
 #define R_SYSTEM_DPSIEGR2_DNMIEG_Pos              (4UL)
 #define R_SYSTEM_DPSIEGR2_DNMIEG_Msk              (0x10UL)
 #define R_SYSTEM_DPSIEGR2_DLVD2IEG_Pos            (1UL)
 #define R_SYSTEM_DPSIEGR2_DLVD2IEG_Msk            (0x2UL)
 #define R_SYSTEM_DPSIEGR2_DLVD1IEG_Pos            (0UL)
 #define R_SYSTEM_DPSIEGR2_DLVD1IEG_Msk            (0x1UL)
/* ========================================================  DPSBYCR  ======================================================== */
 #define R_SYSTEM_DPSBYCR_DPSBY_Pos                (7UL)
 #define R_SYSTEM_DPSBYCR_DPSBY_Msk                (0x80UL)
 #define R_SYSTEM_DPSBYCR_IOKEEP_Pos               (6UL)
 #define R_SYSTEM_DPSBYCR_IOKEEP_Msk               (0x40UL)
 #define R_SYSTEM_DPSBYCR_DEEPCUT_Pos              (0UL)
 #define R_SYSTEM_DPSBYCR_DEEPCUT_Msk              (0x3UL)
/* ========================================================  SYOCDCR  ======================================================== */
 #define R_SYSTEM_SYOCDCR_DBGEN_Pos                (7UL)
 #define R_SYSTEM_SYOCDCR_DBGEN_Msk                (0x80UL)
 #define R_SYSTEM_SYOCDCR_DOCDF_Pos                (0UL)
 #define R_SYSTEM_SYOCDCR_DOCDF_Msk                (0x1UL)
/* =========================================================  MOMCR  ========================================================= */
 #define R_SYSTEM_MOMCR_AUTODRVEN_Pos              (7UL)
 #define R_SYSTEM_MOMCR_AUTODRVEN_Msk              (0x80UL)
 #define R_SYSTEM_MOMCR_MOSEL_Pos                  (6UL)
 #define R_SYSTEM_MOMCR_MOSEL_Msk                  (0x40UL)
 #define R_SYSTEM_MOMCR_MODRV0_Pos                 (4UL)
 #define R_SYSTEM_MOMCR_MODRV0_Msk                 (0x30UL)
 #define R_SYSTEM_MOMCR_MODRV1_Pos                 (3UL)
 #define R_SYSTEM_MOMCR_MODRV1_Msk                 (0x8UL)
/* ========================================================  RSTSR0  ========================================================= */
 #define R_SYSTEM_RSTSR0_DPSRSTF_Pos               (7UL)
 #define R_SYSTEM_RSTSR0_DPSRSTF_Msk               (0x80UL)
 #define R_SYSTEM_RSTSR0_LVD2RF_Pos                (3UL)
 #define R_SYSTEM_RSTSR0_LVD2RF_Msk                (0x8UL)
 #define R_SYSTEM_RSTSR0_LVD1RF_Pos                (2UL)
 #define R_SYSTEM_RSTSR0_LVD1RF_Msk                (0x4UL)
 #define R_SYSTEM_RSTSR0_LVD0RF_Pos                (1UL)
 #define R_SYSTEM_RSTSR0_LVD0RF_Msk                (0x2UL)
 #define R_SYSTEM_RSTSR0_PORF_Pos                  (0UL)
 #define R_SYSTEM_RSTSR0_PORF_Msk                  (0x1UL)
/* ========================================================  RSTSR2  ========================================================= */
 #define R_SYSTEM_RSTSR2_CWSF_Pos                  (0UL)
 #define R_SYSTEM_RSTSR2_CWSF_Msk                  (0x1UL)
/* ========================================================  LVCMPCR  ======================================================== */
 #define R_SYSTEM_LVCMPCR_LVD2E_Pos                (6UL)
 #define R_SYSTEM_LVCMPCR_LVD2E_Msk                (0x40UL)
 #define R_SYSTEM_LVCMPCR_LVD1E_Pos                (5UL)
 #define R_SYSTEM_LVCMPCR_LVD1E_Msk                (0x20UL)
/* =======================================================  LVD1CMPCR  ======================================================= */
 #define R_SYSTEM_LVD1CMPCR_LVD1LVL_Pos            (0UL)
 #define R_SYSTEM_LVD1CMPCR_LVD1LVL_Msk            (0x1fUL)
 #define R_SYSTEM_LVD1CMPCR_LVD1E_Pos              (7UL)
 #define R_SYSTEM_LVD1CMPCR_LVD1E_Msk              (0x80UL)
/* ========================================================  LVDLVLR  ======================================================== */
 #define R_SYSTEM_LVDLVLR_LVD2LVL_Pos              (5UL)
 #define R_SYSTEM_LVDLVLR_LVD2LVL_Msk              (0xe0UL)
 #define R_SYSTEM_LVDLVLR_LVD1LVL_Pos              (0UL)
 #define R_SYSTEM_LVDLVLR_LVD1LVL_Msk              (0x1fUL)
/* =======================================================  LVD2CMPCR  ======================================================= */
 #define R_SYSTEM_LVD2CMPCR_LVD2LVL_Pos            (0UL)
 #define R_SYSTEM_LVD2CMPCR_LVD2LVL_Msk            (0x7UL)
 #define R_SYSTEM_LVD2CMPCR_LVD2E_Pos              (7UL)
 #define R_SYSTEM_LVD2CMPCR_LVD2E_Msk              (0x80UL)
/* ========================================================  LVD1CR0  ======================================================== */
 #define R_SYSTEM_LVD1CR0_RN_Pos                   (7UL)
 #define R_SYSTEM_LVD1CR0_RN_Msk                   (0x80UL)
 #define R_SYSTEM_LVD1CR0_RI_Pos                   (6UL)
 #define R_SYSTEM_LVD1CR0_RI_Msk                   (0x40UL)
 #define R_SYSTEM_LVD1CR0_FSAMP_Pos                (4UL)
 #define R_SYSTEM_LVD1CR0_FSAMP_Msk                (0x30UL)
 #define R_SYSTEM_LVD1CR0_CMPE_Pos                 (2UL)
 #define R_SYSTEM_LVD1CR0_CMPE_Msk                 (0x4UL)
 #define R_SYSTEM_LVD1CR0_DFDIS_Pos                (1UL)
 #define R_SYSTEM_LVD1CR0_DFDIS_Msk                (0x2UL)
 #define R_SYSTEM_LVD1CR0_RIE_Pos                  (0UL)
 #define R_SYSTEM_LVD1CR0_RIE_Msk                  (0x1UL)
/* ========================================================  LVD2CR0  ======================================================== */
 #define R_SYSTEM_LVD2CR0_RN_Pos                   (7UL)
 #define R_SYSTEM_LVD2CR0_RN_Msk                   (0x80UL)
 #define R_SYSTEM_LVD2CR0_RI_Pos                   (6UL)
 #define R_SYSTEM_LVD2CR0_RI_Msk                   (0x40UL)
 #define R_SYSTEM_LVD2CR0_FSAMP_Pos                (4UL)
 #define R_SYSTEM_LVD2CR0_FSAMP_Msk                (0x30UL)
 #define R_SYSTEM_LVD2CR0_CMPE_Pos                 (2UL)
 #define R_SYSTEM_LVD2CR0_CMPE_Msk                 (0x4UL)
 #define R_SYSTEM_LVD2CR0_DFDIS_Pos                (1UL)
 #define R_SYSTEM_LVD2CR0_DFDIS_Msk                (0x2UL)
 #define R_SYSTEM_LVD2CR0_RIE_Pos                  (0UL)
 #define R_SYSTEM_LVD2CR0_RIE_Msk                  (0x1UL)
/* ========================================================  VBTCR1  ========================================================= */
 #define R_SYSTEM_VBTCR1_BPWSWSTP_Pos              (0UL)
 #define R_SYSTEM_VBTCR1_BPWSWSTP_Msk              (0x1UL)
/* ========================================================  DCDCCTL  ======================================================== */
 #define R_SYSTEM_DCDCCTL_PD_Pos                   (7UL)
 #define R_SYSTEM_DCDCCTL_PD_Msk                   (0x80UL)
 #define R_SYSTEM_DCDCCTL_FST_Pos                  (6UL)
 #define R_SYSTEM_DCDCCTL_FST_Msk                  (0x40UL)
 #define R_SYSTEM_DCDCCTL_LCBOOST_Pos              (5UL)
 #define R_SYSTEM_DCDCCTL_LCBOOST_Msk              (0x20UL)
 #define R_SYSTEM_DCDCCTL_STOPZA_Pos               (4UL)
 #define R_SYSTEM_DCDCCTL_STOPZA_Msk               (0x10UL)
 #define R_SYSTEM_DCDCCTL_OCPEN_Pos                (1UL)
 #define R_SYSTEM_DCDCCTL_OCPEN_Msk                (0x2UL)
 #define R_SYSTEM_DCDCCTL_DCDCON_Pos               (0UL)
 #define R_SYSTEM_DCDCCTL_DCDCON_Msk               (0x1UL)
/* ========================================================  VCCSEL  ========================================================= */
 #define R_SYSTEM_VCCSEL_VCCSEL_Pos                (0UL)
 #define R_SYSTEM_VCCSEL_VCCSEL_Msk                (0x3UL)
/* ========================================================  LDOSCR  ========================================================= */
 #define R_SYSTEM_LDOSCR_LDOSTP0_Pos               (0UL)
 #define R_SYSTEM_LDOSCR_LDOSTP0_Msk               (0x1UL)
 #define R_SYSTEM_LDOSCR_LDOSTP1_Pos               (1UL)
 #define R_SYSTEM_LDOSCR_LDOSTP1_Msk               (0x2UL)
/* =======================================================  PL2LDOSCR  ======================================================= */
 #define R_SYSTEM_PL2LDOSCR_PL2LDOSTP_Pos          (0UL)
 #define R_SYSTEM_PL2LDOSCR_PL2LDOSTP_Msk          (0x1UL)
/* ========================================================  SOSCCR  ========================================================= */
 #define R_SYSTEM_SOSCCR_SOSTP_Pos                 (0UL)
 #define R_SYSTEM_SOSCCR_SOSTP_Msk                 (0x1UL)
/* =========================================================  SOMCR  ========================================================= */
 #define R_SYSTEM_SOMCR_SODRV_Pos                  (0UL)
 #define R_SYSTEM_SOMCR_SODRV_Msk                  (0x3UL)
/* =========================================================  SOMRG  ========================================================= */
 #define R_SYSTEM_SOMRG_SOSCMRG_Pos                (0UL)
 #define R_SYSTEM_SOMRG_SOSCMRG_Msk                (0x3UL)
/* ========================================================  LOCOCR  ========================================================= */
 #define R_SYSTEM_LOCOCR_LCSTP_Pos                 (0UL)
 #define R_SYSTEM_LOCOCR_LCSTP_Msk                 (0x1UL)
/* =======================================================  LOCOUTCR  ======================================================== */
 #define R_SYSTEM_LOCOUTCR_LOCOUTRM_Pos            (0UL)
 #define R_SYSTEM_LOCOUTCR_LOCOUTRM_Msk            (0xffUL)
/* ========================================================  VBTCR2  ========================================================= */
 #define R_SYSTEM_VBTCR2_VBTLVDLVL_Pos             (6UL)
 #define R_SYSTEM_VBTCR2_VBTLVDLVL_Msk             (0xc0UL)
 #define R_SYSTEM_VBTCR2_VBTLVDEN_Pos              (4UL)
 #define R_SYSTEM_VBTCR2_VBTLVDEN_Msk              (0x10UL)
/* =========================================================  VBTSR  ========================================================= */
 #define R_SYSTEM_VBTSR_VBTRVLD_Pos                (4UL)
 #define R_SYSTEM_VBTSR_VBTRVLD_Msk                (0x10UL)
 #define R_SYSTEM_VBTSR_VBTBLDF_Pos                (1UL)
 #define R_SYSTEM_VBTSR_VBTBLDF_Msk                (0x2UL)
 #define R_SYSTEM_VBTSR_VBTRDF_Pos                 (0UL)
 #define R_SYSTEM_VBTSR_VBTRDF_Msk                 (0x1UL)
/* =======================================================  VBTCMPCR  ======================================================== */
 #define R_SYSTEM_VBTCMPCR_VBTCMPE_Pos             (0UL)
 #define R_SYSTEM_VBTCMPCR_VBTCMPE_Msk             (0x1UL)
/* =======================================================  VBTLVDICR  ======================================================= */
 #define R_SYSTEM_VBTLVDICR_VBTLVDISEL_Pos         (1UL)
 #define R_SYSTEM_VBTLVDICR_VBTLVDISEL_Msk         (0x2UL)
 #define R_SYSTEM_VBTLVDICR_VBTLVDIE_Pos           (0UL)
 #define R_SYSTEM_VBTLVDICR_VBTLVDIE_Msk           (0x1UL)
/* =======================================================  VBTWCTLR  ======================================================== */
 #define R_SYSTEM_VBTWCTLR_VWEN_Pos                (0UL)
 #define R_SYSTEM_VBTWCTLR_VWEN_Msk                (0x1UL)
/* ======================================================  VBTWCH0OTSR  ====================================================== */
 #define R_SYSTEM_VBTWCH0OTSR_CH0VAGTUTE_Pos       (5UL)
 #define R_SYSTEM_VBTWCH0OTSR_CH0VAGTUTE_Msk       (0x20UL)
 #define R_SYSTEM_VBTWCH0OTSR_CH0VRTCATE_Pos       (4UL)
 #define R_SYSTEM_VBTWCH0OTSR_CH0VRTCATE_Msk       (0x10UL)
 #define R_SYSTEM_VBTWCH0OTSR_CH0VRTCTE_Pos        (3UL)
 #define R_SYSTEM_VBTWCH0OTSR_CH0VRTCTE_Msk        (0x8UL)
 #define R_SYSTEM_VBTWCH0OTSR_CH0VCH2TE_Pos        (2UL)
 #define R_SYSTEM_VBTWCH0OTSR_CH0VCH2TE_Msk        (0x4UL)
 #define R_SYSTEM_VBTWCH0OTSR_CH0VCH1TE_Pos        (1UL)
 #define R_SYSTEM_VBTWCH0OTSR_CH0VCH1TE_Msk        (0x2UL)
/* ======================================================  VBTWCH1OTSR  ====================================================== */
 #define R_SYSTEM_VBTWCH1OTSR_CH1VAGTUTE_Pos       (5UL)
 #define R_SYSTEM_VBTWCH1OTSR_CH1VAGTUTE_Msk       (0x20UL)
 #define R_SYSTEM_VBTWCH1OTSR_CH1VRTCATE_Pos       (4UL)
 #define R_SYSTEM_VBTWCH1OTSR_CH1VRTCATE_Msk       (0x10UL)
 #define R_SYSTEM_VBTWCH1OTSR_CH1VRTCTE_Pos        (3UL)
 #define R_SYSTEM_VBTWCH1OTSR_CH1VRTCTE_Msk        (0x8UL)
 #define R_SYSTEM_VBTWCH1OTSR_CH1VCH2TE_Pos        (2UL)
 #define R_SYSTEM_VBTWCH1OTSR_CH1VCH2TE_Msk        (0x4UL)
 #define R_SYSTEM_VBTWCH1OTSR_CH1VCH0TE_Pos        (0UL)
 #define R_SYSTEM_VBTWCH1OTSR_CH1VCH0TE_Msk        (0x1UL)
/* ======================================================  VBTWCH2OTSR  ====================================================== */
 #define R_SYSTEM_VBTWCH2OTSR_CH2VAGTUTE_Pos       (5UL)
 #define R_SYSTEM_VBTWCH2OTSR_CH2VAGTUTE_Msk       (0x20UL)
 #define R_SYSTEM_VBTWCH2OTSR_CH2VRTCATE_Pos       (4UL)
 #define R_SYSTEM_VBTWCH2OTSR_CH2VRTCATE_Msk       (0x10UL)
 #define R_SYSTEM_VBTWCH2OTSR_CH2VRTCTE_Pos        (3UL)
 #define R_SYSTEM_VBTWCH2OTSR_CH2VRTCTE_Msk        (0x8UL)
 #define R_SYSTEM_VBTWCH2OTSR_CH2VCH1TE_Pos        (1UL)
 #define R_SYSTEM_VBTWCH2OTSR_CH2VCH1TE_Msk        (0x2UL)
 #define R_SYSTEM_VBTWCH2OTSR_CH2VCH0TE_Pos        (0UL)
 #define R_SYSTEM_VBTWCH2OTSR_CH2VCH0TE_Msk        (0x1UL)
/* =======================================================  VBTICTLR  ======================================================== */
 #define R_SYSTEM_VBTICTLR_VCH2INEN_Pos            (2UL)
 #define R_SYSTEM_VBTICTLR_VCH2INEN_Msk            (0x4UL)
 #define R_SYSTEM_VBTICTLR_VCH1INEN_Pos            (1UL)
 #define R_SYSTEM_VBTICTLR_VCH1INEN_Msk            (0x2UL)
 #define R_SYSTEM_VBTICTLR_VCH0INEN_Pos            (0UL)
 #define R_SYSTEM_VBTICTLR_VCH0INEN_Msk            (0x1UL)
/* =======================================================  VBTOCTLR  ======================================================== */
 #define R_SYSTEM_VBTOCTLR_VOUT2LSEL_Pos           (5UL)
 #define R_SYSTEM_VBTOCTLR_VOUT2LSEL_Msk           (0x20UL)
 #define R_SYSTEM_VBTOCTLR_VCOU1LSEL_Pos           (4UL)
 #define R_SYSTEM_VBTOCTLR_VCOU1LSEL_Msk           (0x10UL)
 #define R_SYSTEM_VBTOCTLR_VOUT0LSEL_Pos           (3UL)
 #define R_SYSTEM_VBTOCTLR_VOUT0LSEL_Msk           (0x8UL)
 #define R_SYSTEM_VBTOCTLR_VCH2OEN_Pos             (2UL)
 #define R_SYSTEM_VBTOCTLR_VCH2OEN_Msk             (0x4UL)
 #define R_SYSTEM_VBTOCTLR_VCH1OEN_Pos             (1UL)
 #define R_SYSTEM_VBTOCTLR_VCH1OEN_Msk             (0x2UL)
 #define R_SYSTEM_VBTOCTLR_VCH0OEN_Pos             (0UL)
 #define R_SYSTEM_VBTOCTLR_VCH0OEN_Msk             (0x1UL)
/* ========================================================  VBTWTER  ======================================================== */
 #define R_SYSTEM_VBTWTER_VAGTUE_Pos               (5UL)
 #define R_SYSTEM_VBTWTER_VAGTUE_Msk               (0x20UL)
 #define R_SYSTEM_VBTWTER_VRTCAE_Pos               (4UL)
 #define R_SYSTEM_VBTWTER_VRTCAE_Msk               (0x10UL)
 #define R_SYSTEM_VBTWTER_VRTCIE_Pos               (3UL)
 #define R_SYSTEM_VBTWTER_VRTCIE_Msk               (0x8UL)
 #define R_SYSTEM_VBTWTER_VCH2E_Pos                (2UL)
 #define R_SYSTEM_VBTWTER_VCH2E_Msk                (0x4UL)
 #define R_SYSTEM_VBTWTER_VCH1E_Pos                (1UL)
 #define R_SYSTEM_VBTWTER_VCH1E_Msk                (0x2UL)
 #define R_SYSTEM_VBTWTER_VCH0E_Pos                (0UL)
 #define R_SYSTEM_VBTWTER_VCH0E_Msk                (0x1UL)
/* ========================================================  VBTWEGR  ======================================================== */
 #define R_SYSTEM_VBTWEGR_VCH2EG_Pos               (2UL)
 #define R_SYSTEM_VBTWEGR_VCH2EG_Msk               (0x4UL)
 #define R_SYSTEM_VBTWEGR_VCH1EG_Pos               (1UL)
 #define R_SYSTEM_VBTWEGR_VCH1EG_Msk               (0x2UL)
 #define R_SYSTEM_VBTWEGR_VCH0EG_Pos               (0UL)
 #define R_SYSTEM_VBTWEGR_VCH0EG_Msk               (0x1UL)
/* ========================================================  VBTWFR  ========================================================= */
 #define R_SYSTEM_VBTWFR_VAGTUF_Pos                (5UL)
 #define R_SYSTEM_VBTWFR_VAGTUF_Msk                (0x20UL)
 #define R_SYSTEM_VBTWFR_VRTCAF_Pos                (4UL)
 #define R_SYSTEM_VBTWFR_VRTCAF_Msk                (0x10UL)
 #define R_SYSTEM_VBTWFR_VRTCIF_Pos                (3UL)
 #define R_SYSTEM_VBTWFR_VRTCIF_Msk                (0x8UL)
 #define R_SYSTEM_VBTWFR_VCH2F_Pos                 (2UL)
 #define R_SYSTEM_VBTWFR_VCH2F_Msk                 (0x4UL)
 #define R_SYSTEM_VBTWFR_VCH1F_Pos                 (1UL)
 #define R_SYSTEM_VBTWFR_VCH1F_Msk                 (0x2UL)
 #define R_SYSTEM_VBTWFR_VCH0F_Pos                 (0UL)
 #define R_SYSTEM_VBTWFR_VCH0F_Msk                 (0x1UL)
/* ========================================================  VBTBKR  ========================================================= */
 #define R_SYSTEM_VBTBKR_VBTBKR_Pos                (0UL)
 #define R_SYSTEM_VBTBKR_VBTBKR_Msk                (0xffUL)
/* ========================================================  FWEPROR  ======================================================== */
 #define R_SYSTEM_FWEPROR_FLWE_Pos                 (0UL)
 #define R_SYSTEM_FWEPROR_FLWE_Msk                 (0x3UL)
/* ========================================================  PLL2CCR  ======================================================== */
 #define R_SYSTEM_PLL2CCR_PL2IDIV_Pos              (0UL)
 #define R_SYSTEM_PLL2CCR_PL2IDIV_Msk              (0x3UL)
 #define R_SYSTEM_PLL2CCR_PL2SRCSEL_Pos            (4UL)
 #define R_SYSTEM_PLL2CCR_PL2SRCSEL_Msk            (0x10UL)
 #define R_SYSTEM_PLL2CCR_PLL2MUL_Pos              (8UL)
 #define R_SYSTEM_PLL2CCR_PLL2MUL_Msk              (0x3f00UL)
/* ========================================================  PLL2CR  ========================================================= */
 #define R_SYSTEM_PLL2CR_PLL2STP_Pos               (0UL)
 #define R_SYSTEM_PLL2CR_PLL2STP_Msk               (0x1UL)
/* ======================================================  USBCKDIVCR  ======================================================= */
 #define R_SYSTEM_USBCKDIVCR_USBCKDIV_Pos          (0UL)
 #define R_SYSTEM_USBCKDIVCR_USBCKDIV_Msk          (0x7UL)
/* ======================================================  OCTACKDIVCR  ====================================================== */
 #define R_SYSTEM_OCTACKDIVCR_OCTACKDIV_Pos        (0UL)
 #define R_SYSTEM_OCTACKDIVCR_OCTACKDIV_Msk        (0x7UL)
/* =====================================================  SCISPICKDIVCR  ===================================================== */
 #define R_SYSTEM_SCISPICKDIVCR_SCISPICKDIV_Pos    (0UL)
 #define R_SYSTEM_SCISPICKDIVCR_SCISPICKDIV_Msk    (0x7UL)
/* =====================================================  CANFDCKDIVCR  ====================================================== */
 #define R_SYSTEM_CANFDCKDIVCR_CANFDCKDIV_Pos      (0UL)
 #define R_SYSTEM_CANFDCKDIVCR_CANFDCKDIV_Msk      (0x7UL)
/* ======================================================  GPTCKDIVCR  ======================================================= */
 #define R_SYSTEM_GPTCKDIVCR_GPTCKDIV_Pos          (0UL)
 #define R_SYSTEM_GPTCKDIVCR_GPTCKDIV_Msk          (0x7UL)
/* =====================================================  USB60CKDIVCR  ====================================================== */
 #define R_SYSTEM_USB60CKDIVCR_USB60CKDIV_Pos      (0UL)
 #define R_SYSTEM_USB60CKDIVCR_USB60CKDIV_Msk      (0x7UL)
/* ======================================================  CECCKDIVCR  ======================================================= */
 #define R_SYSTEM_CECCKDIVCR_CECCKDIV_Pos          (0UL)
 #define R_SYSTEM_CECCKDIVCR_CECCKDIV_Msk          (0x7UL)
/* ======================================================  I3CCKDIVCR  ======================================================= */
 #define R_SYSTEM_I3CCKDIVCR_I3CCKDIV_Pos          (0UL)
 #define R_SYSTEM_I3CCKDIVCR_I3CCKDIV_Msk          (0x7UL)
/* ======================================================  IICCKDIVCR  ======================================================= */
 #define R_SYSTEM_IICCKDIVCR_IICCKDIV_Pos          (0UL)
 #define R_SYSTEM_IICCKDIVCR_IICCKDIV_Msk          (0x7UL)
/* ========================================================  USBCKCR  ======================================================== */
 #define R_SYSTEM_USBCKCR_USBCKSEL_Pos             (0UL)
 #define R_SYSTEM_USBCKCR_USBCKSEL_Msk             (0x7UL)
 #define R_SYSTEM_USBCKCR_USBCKSREQ_Pos            (6UL)
 #define R_SYSTEM_USBCKCR_USBCKSREQ_Msk            (0x40UL)
 #define R_SYSTEM_USBCKCR_USBCKSRDY_Pos            (7UL)
 #define R_SYSTEM_USBCKCR_USBCKSRDY_Msk            (0x80UL)
/* =======================================================  OCTACKCR  ======================================================== */
 #define R_SYSTEM_OCTACKCR_OCTACKSEL_Pos           (0UL)
 #define R_SYSTEM_OCTACKCR_OCTACKSEL_Msk           (0x7UL)
 #define R_SYSTEM_OCTACKCR_OCTACKSREQ_Pos          (6UL)
 #define R_SYSTEM_OCTACKCR_OCTACKSREQ_Msk          (0x40UL)
 #define R_SYSTEM_OCTACKCR_OCTACKSRDY_Pos          (7UL)
 #define R_SYSTEM_OCTACKCR_OCTACKSRDY_Msk          (0x80UL)
/* ======================================================  SCISPICKCR  ======================================================= */
 #define R_SYSTEM_SCISPICKCR_SCISPICKSEL_Pos       (0UL)
 #define R_SYSTEM_SCISPICKCR_SCISPICKSEL_Msk       (0x7UL)
 #define R_SYSTEM_SCISPICKCR_SCISPICKSREQ_Pos      (6UL)
 #define R_SYSTEM_SCISPICKCR_SCISPICKSREQ_Msk      (0x40UL)
 #define R_SYSTEM_SCISPICKCR_SCISPICKSRDY_Pos      (7UL)
 #define R_SYSTEM_SCISPICKCR_SCISPICKSRDY_Msk      (0x80UL)
/* =======================================================  CANFDCKCR  ======================================================= */
 #define R_SYSTEM_CANFDCKCR_CANFDCKSEL_Pos         (0UL)
 #define R_SYSTEM_CANFDCKCR_CANFDCKSEL_Msk         (0x7UL)
 #define R_SYSTEM_CANFDCKCR_CANFDCKSREQ_Pos        (6UL)
 #define R_SYSTEM_CANFDCKCR_CANFDCKSREQ_Msk        (0x40UL)
 #define R_SYSTEM_CANFDCKCR_CANFDCKSRDY_Pos        (7UL)
 #define R_SYSTEM_CANFDCKCR_CANFDCKSRDY_Msk        (0x80UL)
/* ========================================================  GPTCKCR  ======================================================== */
 #define R_SYSTEM_GPTCKCR_GPTCKSEL_Pos             (0UL)
 #define R_SYSTEM_GPTCKCR_GPTCKSEL_Msk             (0x7UL)
 #define R_SYSTEM_GPTCKCR_GPTCKSREQ_Pos            (6UL)
 #define R_SYSTEM_GPTCKCR_GPTCKSREQ_Msk            (0x40UL)
 #define R_SYSTEM_GPTCKCR_GPTCKSRDY_Pos            (7UL)
 #define R_SYSTEM_GPTCKCR_GPTCKSRDY_Msk            (0x80UL)
/* =======================================================  USB60CKCR  ======================================================= */
 #define R_SYSTEM_USB60CKCR_USB60CKSEL_Pos         (0UL)
 #define R_SYSTEM_USB60CKCR_USB60CKSEL_Msk         (0xfUL)
 #define R_SYSTEM_USB60CKCR_USB60CKSREQ_Pos        (6UL)
 #define R_SYSTEM_USB60CKCR_USB60CKSREQ_Msk        (0x40UL)
 #define R_SYSTEM_USB60CKCR_USB60CKSRDY_Pos        (7UL)
 #define R_SYSTEM_USB60CKCR_USB60CKSRDY_Msk        (0x80UL)
/* ========================================================  CECCKCR  ======================================================== */
 #define R_SYSTEM_CECCKCR_CECCKSEL_Pos             (0UL)
 #define R_SYSTEM_CECCKCR_CECCKSEL_Msk             (0x7UL)
 #define R_SYSTEM_CECCKCR_CECCKSREQ_Pos            (6UL)
 #define R_SYSTEM_CECCKCR_CECCKSREQ_Msk            (0x40UL)
 #define R_SYSTEM_CECCKCR_CECCKSRDY_Pos            (7UL)
 #define R_SYSTEM_CECCKCR_CECCKSRDY_Msk            (0x80UL)
/* ========================================================  IICCKCR  ======================================================== */
 #define R_SYSTEM_IICCKCR_IICCKSEL_Pos             (0UL)
 #define R_SYSTEM_IICCKCR_IICCKSEL_Msk             (0x7UL)
 #define R_SYSTEM_IICCKCR_IICCKSREQ_Pos            (6UL)
 #define R_SYSTEM_IICCKCR_IICCKSREQ_Msk            (0x40UL)
 #define R_SYSTEM_IICCKCR_IICCKSRDY_Pos            (7UL)
 #define R_SYSTEM_IICCKCR_IICCKSRDY_Msk            (0x80UL)
/* ========================================================  I3CCKCR  ======================================================== */
 #define R_SYSTEM_I3CCKCR_I3CCKSEL_Pos             (0UL)
 #define R_SYSTEM_I3CCKCR_I3CCKSEL_Msk             (0x7UL)
 #define R_SYSTEM_I3CCKCR_I3CCKSREQ_Pos            (6UL)
 #define R_SYSTEM_I3CCKCR_I3CCKSREQ_Msk            (0x40UL)
 #define R_SYSTEM_I3CCKCR_I3CCKSRDY_Pos            (7UL)
 #define R_SYSTEM_I3CCKCR_I3CCKSRDY_Msk            (0x80UL)
/* =======================================================  SNZREQCR1  ======================================================= */
 #define R_SYSTEM_SNZREQCR1_SNZREQEN0_Pos          (0UL)
 #define R_SYSTEM_SNZREQCR1_SNZREQEN0_Msk          (0x1UL)
 #define R_SYSTEM_SNZREQCR1_SNZREQEN1_Pos          (1UL)
 #define R_SYSTEM_SNZREQCR1_SNZREQEN1_Msk          (0x2UL)
 #define R_SYSTEM_SNZREQCR1_SNZREQEN2_Pos          (2UL)
 #define R_SYSTEM_SNZREQCR1_SNZREQEN2_Msk          (0x4UL)
/* =======================================================  SNZEDCR1  ======================================================== */
 #define R_SYSTEM_SNZEDCR1_AGT3UNFED_Pos           (0UL)
 #define R_SYSTEM_SNZEDCR1_AGT3UNFED_Msk           (0x1UL)
/* ========================================================  CGFSAR  ========================================================= */
 #define R_SYSTEM_CGFSAR_NONSEC00_Pos              (0UL)
 #define R_SYSTEM_CGFSAR_NONSEC00_Msk              (0x1UL)
 #define R_SYSTEM_CGFSAR_NONSEC02_Pos              (2UL)
 #define R_SYSTEM_CGFSAR_NONSEC02_Msk              (0x4UL)
 #define R_SYSTEM_CGFSAR_NONSEC03_Pos              (3UL)
 #define R_SYSTEM_CGFSAR_NONSEC03_Msk              (0x8UL)
 #define R_SYSTEM_CGFSAR_NONSEC04_Pos              (4UL)
 #define R_SYSTEM_CGFSAR_NONSEC04_Msk              (0x10UL)
 #define R_SYSTEM_CGFSAR_NONSEC05_Pos              (5UL)
 #define R_SYSTEM_CGFSAR_NONSEC05_Msk              (0x20UL)
 #define R_SYSTEM_CGFSAR_NONSEC06_Pos              (6UL)
 #define R_SYSTEM_CGFSAR_NONSEC06_Msk              (0x40UL)
 #define R_SYSTEM_CGFSAR_NONSEC07_Pos              (7UL)
 #define R_SYSTEM_CGFSAR_NONSEC07_Msk              (0x80UL)
 #define R_SYSTEM_CGFSAR_NONSEC08_Pos              (8UL)
 #define R_SYSTEM_CGFSAR_NONSEC08_Msk              (0x100UL)
 #define R_SYSTEM_CGFSAR_NONSEC09_Pos              (9UL)
 #define R_SYSTEM_CGFSAR_NONSEC09_Msk              (0x200UL)
 #define R_SYSTEM_CGFSAR_NONSEC11_Pos              (11UL)
 #define R_SYSTEM_CGFSAR_NONSEC11_Msk              (0x800UL)
 #define R_SYSTEM_CGFSAR_NONSEC12_Pos              (12UL)
 #define R_SYSTEM_CGFSAR_NONSEC12_Msk              (0x1000UL)
 #define R_SYSTEM_CGFSAR_NONSEC16_Pos              (16UL)
 #define R_SYSTEM_CGFSAR_NONSEC16_Msk              (0x10000UL)
 #define R_SYSTEM_CGFSAR_NONSEC17_Pos              (17UL)
 #define R_SYSTEM_CGFSAR_NONSEC17_Msk              (0x20000UL)
/* ========================================================  LPMSAR  ========================================================= */
 #define R_SYSTEM_LPMSAR_NONSEC0_Pos               (0UL)
 #define R_SYSTEM_LPMSAR_NONSEC0_Msk               (0x1UL)
 #define R_SYSTEM_LPMSAR_NONSEC2_Pos               (2UL)
 #define R_SYSTEM_LPMSAR_NONSEC2_Msk               (0x4UL)
 #define R_SYSTEM_LPMSAR_NONSEC4_Pos               (4UL)
 #define R_SYSTEM_LPMSAR_NONSEC4_Msk               (0x10UL)
 #define R_SYSTEM_LPMSAR_NONSEC8_Pos               (8UL)
 #define R_SYSTEM_LPMSAR_NONSEC8_Msk               (0x100UL)
 #define R_SYSTEM_LPMSAR_NONSEC9_Pos               (9UL)
 #define R_SYSTEM_LPMSAR_NONSEC9_Msk               (0x200UL)
/* ========================================================  LVDSAR  ========================================================= */
 #define R_SYSTEM_LVDSAR_NONSEC0_Pos               (0UL)
 #define R_SYSTEM_LVDSAR_NONSEC0_Msk               (0x1UL)
 #define R_SYSTEM_LVDSAR_NONSEC1_Pos               (1UL)
 #define R_SYSTEM_LVDSAR_NONSEC1_Msk               (0x2UL)
/* ========================================================  RSTSAR  ========================================================= */
 #define R_SYSTEM_RSTSAR_NONSEC0_Pos               (0UL)
 #define R_SYSTEM_RSTSAR_NONSEC0_Msk               (0x1UL)
 #define R_SYSTEM_RSTSAR_NONSEC1_Pos               (1UL)
 #define R_SYSTEM_RSTSAR_NONSEC1_Msk               (0x2UL)
 #define R_SYSTEM_RSTSAR_NONSEC2_Pos               (2UL)
 #define R_SYSTEM_RSTSAR_NONSEC2_Msk               (0x4UL)
/* ========================================================  BBFSAR  ========================================================= */
 #define R_SYSTEM_BBFSAR_NONSEC0_Pos               (0UL)
 #define R_SYSTEM_BBFSAR_NONSEC0_Msk               (0x1UL)
 #define R_SYSTEM_BBFSAR_NONSEC1_Pos               (1UL)
 #define R_SYSTEM_BBFSAR_NONSEC1_Msk               (0x2UL)
 #define R_SYSTEM_BBFSAR_NONSEC2_Pos               (2UL)
 #define R_SYSTEM_BBFSAR_NONSEC2_Msk               (0x4UL)
 #define R_SYSTEM_BBFSAR_NONSEC16_Pos              (16UL)
 #define R_SYSTEM_BBFSAR_NONSEC16_Msk              (0x10000UL)
 #define R_SYSTEM_BBFSAR_NONSEC17_Pos              (17UL)
 #define R_SYSTEM_BBFSAR_NONSEC17_Msk              (0x20000UL)
 #define R_SYSTEM_BBFSAR_NONSEC18_Pos              (18UL)
 #define R_SYSTEM_BBFSAR_NONSEC18_Msk              (0x40000UL)
 #define R_SYSTEM_BBFSAR_NONSEC19_Pos              (19UL)
 #define R_SYSTEM_BBFSAR_NONSEC19_Msk              (0x80000UL)
 #define R_SYSTEM_BBFSAR_NONSEC20_Pos              (20UL)
 #define R_SYSTEM_BBFSAR_NONSEC20_Msk              (0x100000UL)
 #define R_SYSTEM_BBFSAR_NONSEC21_Pos              (21UL)
 #define R_SYSTEM_BBFSAR_NONSEC21_Msk              (0x200000UL)
 #define R_SYSTEM_BBFSAR_NONSEC22_Pos              (22UL)
 #define R_SYSTEM_BBFSAR_NONSEC22_Msk              (0x400000UL)
 #define R_SYSTEM_BBFSAR_NONSEC23_Pos              (23UL)
 #define R_SYSTEM_BBFSAR_NONSEC23_Msk              (0x800000UL)
/* ========================================================  DPFSAR  ========================================================= */
 #define R_SYSTEM_DPFSAR_DPFSA0_Pos                (0UL)
 #define R_SYSTEM_DPFSAR_DPFSA0_Msk                (0x1UL)
 #define R_SYSTEM_DPFSAR_DPFSA1_Pos                (1UL)
 #define R_SYSTEM_DPFSAR_DPFSA1_Msk                (0x2UL)
 #define R_SYSTEM_DPFSAR_DPFSA2_Pos                (2UL)
 #define R_SYSTEM_DPFSAR_DPFSA2_Msk                (0x4UL)
 #define R_SYSTEM_DPFSAR_DPFSA3_Pos                (3UL)
 #define R_SYSTEM_DPFSAR_DPFSA3_Msk                (0x8UL)
 #define R_SYSTEM_DPFSAR_DPFSA4_Pos                (4UL)
 #define R_SYSTEM_DPFSAR_DPFSA4_Msk                (0x10UL)
 #define R_SYSTEM_DPFSAR_DPFSA5_Pos                (5UL)
 #define R_SYSTEM_DPFSAR_DPFSA5_Msk                (0x20UL)
 #define R_SYSTEM_DPFSAR_DPFSA6_Pos                (6UL)
 #define R_SYSTEM_DPFSAR_DPFSA6_Msk                (0x40UL)
 #define R_SYSTEM_DPFSAR_DPFSA7_Pos                (7UL)
 #define R_SYSTEM_DPFSAR_DPFSA7_Msk                (0x80UL)
 #define R_SYSTEM_DPFSAR_DPFSA8_Pos                (8UL)
 #define R_SYSTEM_DPFSAR_DPFSA8_Msk                (0x100UL)
 #define R_SYSTEM_DPFSAR_DPFSA9_Pos                (9UL)
 #define R_SYSTEM_DPFSAR_DPFSA9_Msk                (0x200UL)
 #define R_SYSTEM_DPFSAR_DPFSA10_Pos               (10UL)
 #define R_SYSTEM_DPFSAR_DPFSA10_Msk               (0x400UL)
 #define R_SYSTEM_DPFSAR_DPFSA11_Pos               (11UL)
 #define R_SYSTEM_DPFSAR_DPFSA11_Msk               (0x800UL)
 #define R_SYSTEM_DPFSAR_DPFSA12_Pos               (12UL)
 #define R_SYSTEM_DPFSAR_DPFSA12_Msk               (0x1000UL)
 #define R_SYSTEM_DPFSAR_DPFSA13_Pos               (13UL)
 #define R_SYSTEM_DPFSAR_DPFSA13_Msk               (0x2000UL)
 #define R_SYSTEM_DPFSAR_DPFSA14_Pos               (14UL)
 #define R_SYSTEM_DPFSAR_DPFSA14_Msk               (0x4000UL)
 #define R_SYSTEM_DPFSAR_DPFSA15_Pos               (15UL)
 #define R_SYSTEM_DPFSAR_DPFSA15_Msk               (0x8000UL)
 #define R_SYSTEM_DPFSAR_DPFSA16_Pos               (16UL)
 #define R_SYSTEM_DPFSAR_DPFSA16_Msk               (0x10000UL)
 #define R_SYSTEM_DPFSAR_DPFSA17_Pos               (17UL)
 #define R_SYSTEM_DPFSAR_DPFSA17_Msk               (0x20000UL)
 #define R_SYSTEM_DPFSAR_DPFSA18_Pos               (18UL)
 #define R_SYSTEM_DPFSAR_DPFSA18_Msk               (0x40000UL)
 #define R_SYSTEM_DPFSAR_DPFSA19_Pos               (19UL)
 #define R_SYSTEM_DPFSAR_DPFSA19_Msk               (0x80000UL)
 #define R_SYSTEM_DPFSAR_DPFSA20_Pos               (20UL)
 #define R_SYSTEM_DPFSAR_DPFSA20_Msk               (0x100000UL)
 #define R_SYSTEM_DPFSAR_DPFSA24_Pos               (24UL)
 #define R_SYSTEM_DPFSAR_DPFSA24_Msk               (0x1000000UL)
 #define R_SYSTEM_DPFSAR_DPFSA26_Pos               (26UL)
 #define R_SYSTEM_DPFSAR_DPFSA26_Msk               (0x4000000UL)
 #define R_SYSTEM_DPFSAR_DPFSA27_Pos               (27UL)
 #define R_SYSTEM_DPFSAR_DPFSA27_Msk               (0x8000000UL)
/* ========================================================  DPSWCR  ========================================================= */
 #define R_SYSTEM_DPSWCR_WTSTS_Pos                 (0UL)
 #define R_SYSTEM_DPSWCR_WTSTS_Msk                 (0x3fUL)
/* ======================================================  VBATTMNSELR  ====================================================== */
 #define R_SYSTEM_VBATTMNSELR_VBATTMNSEL_Pos       (0UL)
 #define R_SYSTEM_VBATTMNSELR_VBATTMNSEL_Msk       (0x1UL)
/* =======================================================  VBATTMONR  ======================================================= */
 #define R_SYSTEM_VBATTMONR_VBATTMON_Pos           (0UL)
 #define R_SYSTEM_VBATTMONR_VBATTMON_Msk           (0x1UL)
/* ========================================================  VBTBER  ========================================================= */
 #define R_SYSTEM_VBTBER_VBAE_Pos                  (3UL)
 #define R_SYSTEM_VBTBER_VBAE_Msk                  (0x8UL)

/* =========================================================================================================================== */
/* ================                                         R_TSN_CAL                                         ================ */
/* =========================================================================================================================== */

/* =========================================================  TSCDR  ========================================================= */
 #define R_TSN_CAL_TSCDR_TSCDR_Pos    (0UL)
 #define R_TSN_CAL_TSCDR_TSCDR_Msk    (0xffffffffUL)

/* =========================================================================================================================== */
/* ================                                        R_TSN_CTRL                                         ================ */
/* =========================================================================================================================== */

/* =========================================================  TSCR  ========================================================== */
 #define R_TSN_CTRL_TSCR_TSEN_Pos    (7UL)
 #define R_TSN_CTRL_TSCR_TSEN_Msk    (0x80UL)
 #define R_TSN_CTRL_TSCR_TSOE_Pos    (4UL)
 #define R_TSN_CTRL_TSCR_TSOE_Msk    (0x10UL)

/* =========================================================================================================================== */
/* ================                                         R_USB_FS0                                         ================ */
/* =========================================================================================================================== */

/* ========================================================  SYSCFG  ========================================================= */
 #define R_USB_FS0_SYSCFG_SCKE_Pos         (10UL)
 #define R_USB_FS0_SYSCFG_SCKE_Msk         (0x400UL)
 #define R_USB_FS0_SYSCFG_CNEN_Pos         (8UL)
 #define R_USB_FS0_SYSCFG_CNEN_Msk         (0x100UL)
 #define R_USB_FS0_SYSCFG_DCFM_Pos         (6UL)
 #define R_USB_FS0_SYSCFG_DCFM_Msk         (0x40UL)
 #define R_USB_FS0_SYSCFG_DRPD_Pos         (5UL)
 #define R_USB_FS0_SYSCFG_DRPD_Msk         (0x20UL)
 #define R_USB_FS0_SYSCFG_DPRPU_Pos        (4UL)
 #define R_USB_FS0_SYSCFG_DPRPU_Msk        (0x10UL)
 #define R_USB_FS0_SYSCFG_DMRPU_Pos        (3UL)
 #define R_USB_FS0_SYSCFG_DMRPU_Msk        (0x8UL)
 #define R_USB_FS0_SYSCFG_USBE_Pos         (0UL)
 #define R_USB_FS0_SYSCFG_USBE_Msk         (0x1UL)
/* ========================================================  BUSWAIT  ======================================================== */
 #define R_USB_FS0_BUSWAIT_BWAIT_Pos       (0UL)
 #define R_USB_FS0_BUSWAIT_BWAIT_Msk       (0xfUL)
/* ========================================================  SYSSTS0  ======================================================== */
 #define R_USB_FS0_SYSSTS0_OVCMON_Pos      (14UL)
 #define R_USB_FS0_SYSSTS0_OVCMON_Msk      (0xc000UL)
 #define R_USB_FS0_SYSSTS0_HTACT_Pos       (6UL)
 #define R_USB_FS0_SYSSTS0_HTACT_Msk       (0x40UL)
 #define R_USB_FS0_SYSSTS0_SOFEA_Pos       (5UL)
 #define R_USB_FS0_SYSSTS0_SOFEA_Msk       (0x20UL)
 #define R_USB_FS0_SYSSTS0_IDMON_Pos       (2UL)
 #define R_USB_FS0_SYSSTS0_IDMON_Msk       (0x4UL)
 #define R_USB_FS0_SYSSTS0_LNST_Pos        (0UL)
 #define R_USB_FS0_SYSSTS0_LNST_Msk        (0x3UL)
/* ========================================================  PLLSTA  ========================================================= */
 #define R_USB_FS0_PLLSTA_PLLLOCK_Pos      (0UL)
 #define R_USB_FS0_PLLSTA_PLLLOCK_Msk      (0x1UL)
/* =======================================================  DVSTCTR0  ======================================================== */
 #define R_USB_FS0_DVSTCTR0_HNPBTOA_Pos    (11UL)
 #define R_USB_FS0_DVSTCTR0_HNPBTOA_Msk    (0x800UL)
 #define R_USB_FS0_DVSTCTR0_EXICEN_Pos     (10UL)
 #define R_USB_FS0_DVSTCTR0_EXICEN_Msk     (0x400UL)
 #define R_USB_FS0_DVSTCTR0_VBUSEN_Pos     (9UL)
 #define R_USB_FS0_DVSTCTR0_VBUSEN_Msk     (0x200UL)
 #define R_USB_FS0_DVSTCTR0_WKUP_Pos       (8UL)
 #define R_USB_FS0_DVSTCTR0_WKUP_Msk       (0x100UL)
 #define R_USB_FS0_DVSTCTR0_RWUPE_Pos      (7UL)
 #define R_USB_FS0_DVSTCTR0_RWUPE_Msk      (0x80UL)
 #define R_USB_FS0_DVSTCTR0_USBRST_Pos     (6UL)
 #define R_USB_FS0_DVSTCTR0_USBRST_Msk     (0x40UL)
 #define R_USB_FS0_DVSTCTR0_RESUME_Pos     (5UL)
 #define R_USB_FS0_DVSTCTR0_RESUME_Msk     (0x20UL)
 #define R_USB_FS0_DVSTCTR0_UACT_Pos       (4UL)
 #define R_USB_FS0_DVSTCTR0_UACT_Msk       (0x10UL)
 #define R_USB_FS0_DVSTCTR0_RHST_Pos       (0UL)
 #define R_USB_FS0_DVSTCTR0_RHST_Msk       (0x7UL)
/* =======================================================  TESTMODE  ======================================================== */
 #define R_USB_FS0_TESTMODE_UTST_Pos       (0UL)
 #define R_USB_FS0_TESTMODE_UTST_Msk       (0xfUL)
/* ========================================================  CFIFOL  ========================================================= */
/* ========================================================  CFIFOLL  ======================================================== */
/* =========================================================  CFIFO  ========================================================= */
/* ========================================================  CFIFOH  ========================================================= */
/* ========================================================  CFIFOHH  ======================================================== */
/* ========================================================  D0FIFOL  ======================================================== */
/* =======================================================  D0FIFOLL  ======================================================== */
/* ========================================================  D0FIFO  ========================================================= */
/* ========================================================  D0FIFOH  ======================================================== */
/* =======================================================  D0FIFOHH  ======================================================== */
/* ========================================================  D1FIFOL  ======================================================== */
/* =======================================================  D1FIFOLL  ======================================================== */
/* ========================================================  D1FIFO  ========================================================= */
/* ========================================================  D1FIFOH  ======================================================== */
/* =======================================================  D1FIFOHH  ======================================================== */
/* =======================================================  CFIFOSEL  ======================================================== */
 #define R_USB_FS0_CFIFOSEL_RCNT_Pos            (15UL)
 #define R_USB_FS0_CFIFOSEL_RCNT_Msk            (0x8000UL)
 #define R_USB_FS0_CFIFOSEL_REW_Pos             (14UL)
 #define R_USB_FS0_CFIFOSEL_REW_Msk             (0x4000UL)
 #define R_USB_FS0_CFIFOSEL_MBW_Pos             (10UL)
 #define R_USB_FS0_CFIFOSEL_MBW_Msk             (0xc00UL)
 #define R_USB_FS0_CFIFOSEL_BIGEND_Pos          (8UL)
 #define R_USB_FS0_CFIFOSEL_BIGEND_Msk          (0x100UL)
 #define R_USB_FS0_CFIFOSEL_ISEL_Pos            (5UL)
 #define R_USB_FS0_CFIFOSEL_ISEL_Msk            (0x20UL)
 #define R_USB_FS0_CFIFOSEL_CURPIPE_Pos         (0UL)
 #define R_USB_FS0_CFIFOSEL_CURPIPE_Msk         (0xfUL)
/* =======================================================  CFIFOCTR  ======================================================== */
 #define R_USB_FS0_CFIFOCTR_BVAL_Pos            (15UL)
 #define R_USB_FS0_CFIFOCTR_BVAL_Msk            (0x8000UL)
 #define R_USB_FS0_CFIFOCTR_BCLR_Pos            (14UL)
 #define R_USB_FS0_CFIFOCTR_BCLR_Msk            (0x4000UL)
 #define R_USB_FS0_CFIFOCTR_FRDY_Pos            (13UL)
 #define R_USB_FS0_CFIFOCTR_FRDY_Msk            (0x2000UL)
 #define R_USB_FS0_CFIFOCTR_DTLN_Pos            (0UL)
 #define R_USB_FS0_CFIFOCTR_DTLN_Msk            (0xfffUL)
/* =======================================================  D0FIFOSEL  ======================================================= */
 #define R_USB_FS0_D0FIFOSEL_RCNT_Pos           (15UL)
 #define R_USB_FS0_D0FIFOSEL_RCNT_Msk           (0x8000UL)
 #define R_USB_FS0_D0FIFOSEL_REW_Pos            (14UL)
 #define R_USB_FS0_D0FIFOSEL_REW_Msk            (0x4000UL)
 #define R_USB_FS0_D0FIFOSEL_DCLRM_Pos          (13UL)
 #define R_USB_FS0_D0FIFOSEL_DCLRM_Msk          (0x2000UL)
 #define R_USB_FS0_D0FIFOSEL_DREQE_Pos          (12UL)
 #define R_USB_FS0_D0FIFOSEL_DREQE_Msk          (0x1000UL)
 #define R_USB_FS0_D0FIFOSEL_MBW_Pos            (10UL)
 #define R_USB_FS0_D0FIFOSEL_MBW_Msk            (0xc00UL)
 #define R_USB_FS0_D0FIFOSEL_BIGEND_Pos         (8UL)
 #define R_USB_FS0_D0FIFOSEL_BIGEND_Msk         (0x100UL)
 #define R_USB_FS0_D0FIFOSEL_CURPIPE_Pos        (0UL)
 #define R_USB_FS0_D0FIFOSEL_CURPIPE_Msk        (0xfUL)
/* =======================================================  D0FIFOCTR  ======================================================= */
 #define R_USB_FS0_D0FIFOCTR_BVAL_Pos           (15UL)
 #define R_USB_FS0_D0FIFOCTR_BVAL_Msk           (0x8000UL)
 #define R_USB_FS0_D0FIFOCTR_BCLR_Pos           (14UL)
 #define R_USB_FS0_D0FIFOCTR_BCLR_Msk           (0x4000UL)
 #define R_USB_FS0_D0FIFOCTR_FRDY_Pos           (13UL)
 #define R_USB_FS0_D0FIFOCTR_FRDY_Msk           (0x2000UL)
 #define R_USB_FS0_D0FIFOCTR_DTLN_Pos           (0UL)
 #define R_USB_FS0_D0FIFOCTR_DTLN_Msk           (0xfffUL)
/* =======================================================  D1FIFOSEL  ======================================================= */
 #define R_USB_FS0_D1FIFOSEL_RCNT_Pos           (15UL)
 #define R_USB_FS0_D1FIFOSEL_RCNT_Msk           (0x8000UL)
 #define R_USB_FS0_D1FIFOSEL_REW_Pos            (14UL)
 #define R_USB_FS0_D1FIFOSEL_REW_Msk            (0x4000UL)
 #define R_USB_FS0_D1FIFOSEL_DCLRM_Pos          (13UL)
 #define R_USB_FS0_D1FIFOSEL_DCLRM_Msk          (0x2000UL)
 #define R_USB_FS0_D1FIFOSEL_DREQE_Pos          (12UL)
 #define R_USB_FS0_D1FIFOSEL_DREQE_Msk          (0x1000UL)
 #define R_USB_FS0_D1FIFOSEL_MBW_Pos            (10UL)
 #define R_USB_FS0_D1FIFOSEL_MBW_Msk            (0xc00UL)
 #define R_USB_FS0_D1FIFOSEL_BIGEND_Pos         (8UL)
 #define R_USB_FS0_D1FIFOSEL_BIGEND_Msk         (0x100UL)
 #define R_USB_FS0_D1FIFOSEL_CURPIPE_Pos        (0UL)
 #define R_USB_FS0_D1FIFOSEL_CURPIPE_Msk        (0xfUL)
/* =======================================================  D1FIFOCTR  ======================================================= */
 #define R_USB_FS0_D1FIFOCTR_BVAL_Pos           (15UL)
 #define R_USB_FS0_D1FIFOCTR_BVAL_Msk           (0x8000UL)
 #define R_USB_FS0_D1FIFOCTR_BCLR_Pos           (14UL)
 #define R_USB_FS0_D1FIFOCTR_BCLR_Msk           (0x4000UL)
 #define R_USB_FS0_D1FIFOCTR_FRDY_Pos           (13UL)
 #define R_USB_FS0_D1FIFOCTR_FRDY_Msk           (0x2000UL)
 #define R_USB_FS0_D1FIFOCTR_DTLN_Pos           (0UL)
 #define R_USB_FS0_D1FIFOCTR_DTLN_Msk           (0xfffUL)
/* ========================================================  INTENB0  ======================================================== */
 #define R_USB_FS0_INTENB0_VBSE_Pos             (15UL)
 #define R_USB_FS0_INTENB0_VBSE_Msk             (0x8000UL)
 #define R_USB_FS0_INTENB0_RSME_Pos             (14UL)
 #define R_USB_FS0_INTENB0_RSME_Msk             (0x4000UL)
 #define R_USB_FS0_INTENB0_SOFE_Pos             (13UL)
 #define R_USB_FS0_INTENB0_SOFE_Msk             (0x2000UL)
 #define R_USB_FS0_INTENB0_DVSE_Pos             (12UL)
 #define R_USB_FS0_INTENB0_DVSE_Msk             (0x1000UL)
 #define R_USB_FS0_INTENB0_CTRE_Pos             (11UL)
 #define R_USB_FS0_INTENB0_CTRE_Msk             (0x800UL)
 #define R_USB_FS0_INTENB0_BEMPE_Pos            (10UL)
 #define R_USB_FS0_INTENB0_BEMPE_Msk            (0x400UL)
 #define R_USB_FS0_INTENB0_NRDYE_Pos            (9UL)
 #define R_USB_FS0_INTENB0_NRDYE_Msk            (0x200UL)
 #define R_USB_FS0_INTENB0_BRDYE_Pos            (8UL)
 #define R_USB_FS0_INTENB0_BRDYE_Msk            (0x100UL)
/* ========================================================  INTENB1  ======================================================== */
 #define R_USB_FS0_INTENB1_OVRCRE_Pos           (15UL)
 #define R_USB_FS0_INTENB1_OVRCRE_Msk           (0x8000UL)
 #define R_USB_FS0_INTENB1_BCHGE_Pos            (14UL)
 #define R_USB_FS0_INTENB1_BCHGE_Msk            (0x4000UL)
 #define R_USB_FS0_INTENB1_DTCHE_Pos            (12UL)
 #define R_USB_FS0_INTENB1_DTCHE_Msk            (0x1000UL)
 #define R_USB_FS0_INTENB1_ATTCHE_Pos           (11UL)
 #define R_USB_FS0_INTENB1_ATTCHE_Msk           (0x800UL)
 #define R_USB_FS0_INTENB1_EOFERRE_Pos          (6UL)
 #define R_USB_FS0_INTENB1_EOFERRE_Msk          (0x40UL)
 #define R_USB_FS0_INTENB1_SIGNE_Pos            (5UL)
 #define R_USB_FS0_INTENB1_SIGNE_Msk            (0x20UL)
 #define R_USB_FS0_INTENB1_SACKE_Pos            (4UL)
 #define R_USB_FS0_INTENB1_SACKE_Msk            (0x10UL)
 #define R_USB_FS0_INTENB1_PDDETINTE0_Pos       (0UL)
 #define R_USB_FS0_INTENB1_PDDETINTE0_Msk       (0x1UL)
/* ========================================================  BRDYENB  ======================================================== */
 #define R_USB_FS0_BRDYENB_PIPEBRDYE_Pos        (0UL)
 #define R_USB_FS0_BRDYENB_PIPEBRDYE_Msk        (0x1UL)
/* ========================================================  NRDYENB  ======================================================== */
 #define R_USB_FS0_NRDYENB_PIPENRDYE_Pos        (0UL)
 #define R_USB_FS0_NRDYENB_PIPENRDYE_Msk        (0x1UL)
/* ========================================================  BEMPENB  ======================================================== */
 #define R_USB_FS0_BEMPENB_PIPEBEMPE_Pos        (0UL)
 #define R_USB_FS0_BEMPENB_PIPEBEMPE_Msk        (0x1UL)
/* ========================================================  SOFCFG  ========================================================= */
 #define R_USB_FS0_SOFCFG_TRNENSEL_Pos          (8UL)
 #define R_USB_FS0_SOFCFG_TRNENSEL_Msk          (0x100UL)
 #define R_USB_FS0_SOFCFG_BRDYM_Pos             (6UL)
 #define R_USB_FS0_SOFCFG_BRDYM_Msk             (0x40UL)
 #define R_USB_FS0_SOFCFG_INTL_Pos              (5UL)
 #define R_USB_FS0_SOFCFG_INTL_Msk              (0x20UL)
 #define R_USB_FS0_SOFCFG_EDGESTS_Pos           (4UL)
 #define R_USB_FS0_SOFCFG_EDGESTS_Msk           (0x10UL)
/* ========================================================  PHYSET  ========================================================= */
 #define R_USB_FS0_PHYSET_HSEB_Pos              (15UL)
 #define R_USB_FS0_PHYSET_HSEB_Msk              (0x8000UL)
 #define R_USB_FS0_PHYSET_REPSTART_Pos          (11UL)
 #define R_USB_FS0_PHYSET_REPSTART_Msk          (0x800UL)
 #define R_USB_FS0_PHYSET_REPSEL_Pos            (8UL)
 #define R_USB_FS0_PHYSET_REPSEL_Msk            (0x300UL)
 #define R_USB_FS0_PHYSET_CLKSEL_Pos            (4UL)
 #define R_USB_FS0_PHYSET_CLKSEL_Msk            (0x30UL)
 #define R_USB_FS0_PHYSET_CDPEN_Pos             (3UL)
 #define R_USB_FS0_PHYSET_CDPEN_Msk             (0x8UL)
 #define R_USB_FS0_PHYSET_PLLRESET_Pos          (1UL)
 #define R_USB_FS0_PHYSET_PLLRESET_Msk          (0x2UL)
 #define R_USB_FS0_PHYSET_DIRPD_Pos             (0UL)
 #define R_USB_FS0_PHYSET_DIRPD_Msk             (0x1UL)
/* ========================================================  INTSTS0  ======================================================== */
 #define R_USB_FS0_INTSTS0_VBINT_Pos            (15UL)
 #define R_USB_FS0_INTSTS0_VBINT_Msk            (0x8000UL)
 #define R_USB_FS0_INTSTS0_RESM_Pos             (14UL)
 #define R_USB_FS0_INTSTS0_RESM_Msk             (0x4000UL)
 #define R_USB_FS0_INTSTS0_SOFR_Pos             (13UL)
 #define R_USB_FS0_INTSTS0_SOFR_Msk             (0x2000UL)
 #define R_USB_FS0_INTSTS0_DVST_Pos             (12UL)
 #define R_USB_FS0_INTSTS0_DVST_Msk             (0x1000UL)
 #define R_USB_FS0_INTSTS0_CTRT_Pos             (11UL)
 #define R_USB_FS0_INTSTS0_CTRT_Msk             (0x800UL)
 #define R_USB_FS0_INTSTS0_BEMP_Pos             (10UL)
 #define R_USB_FS0_INTSTS0_BEMP_Msk             (0x400UL)
 #define R_USB_FS0_INTSTS0_NRDY_Pos             (9UL)
 #define R_USB_FS0_INTSTS0_NRDY_Msk             (0x200UL)
 #define R_USB_FS0_INTSTS0_BRDY_Pos             (8UL)
 #define R_USB_FS0_INTSTS0_BRDY_Msk             (0x100UL)
 #define R_USB_FS0_INTSTS0_VBSTS_Pos            (7UL)
 #define R_USB_FS0_INTSTS0_VBSTS_Msk            (0x80UL)
 #define R_USB_FS0_INTSTS0_DVSQ_Pos             (4UL)
 #define R_USB_FS0_INTSTS0_DVSQ_Msk             (0x70UL)
 #define R_USB_FS0_INTSTS0_VALID_Pos            (3UL)
 #define R_USB_FS0_INTSTS0_VALID_Msk            (0x8UL)
 #define R_USB_FS0_INTSTS0_CTSQ_Pos             (0UL)
 #define R_USB_FS0_INTSTS0_CTSQ_Msk             (0x7UL)
/* ========================================================  INTSTS1  ======================================================== */
 #define R_USB_FS0_INTSTS1_OVRCR_Pos            (15UL)
 #define R_USB_FS0_INTSTS1_OVRCR_Msk            (0x8000UL)
 #define R_USB_FS0_INTSTS1_BCHG_Pos             (14UL)
 #define R_USB_FS0_INTSTS1_BCHG_Msk             (0x4000UL)
 #define R_USB_FS0_INTSTS1_DTCH_Pos             (12UL)
 #define R_USB_FS0_INTSTS1_DTCH_Msk             (0x1000UL)
 #define R_USB_FS0_INTSTS1_ATTCH_Pos            (11UL)
 #define R_USB_FS0_INTSTS1_ATTCH_Msk            (0x800UL)
 #define R_USB_FS0_INTSTS1_L1RSMEND_Pos         (9UL)
 #define R_USB_FS0_INTSTS1_L1RSMEND_Msk         (0x200UL)
 #define R_USB_FS0_INTSTS1_LPMEND_Pos           (8UL)
 #define R_USB_FS0_INTSTS1_LPMEND_Msk           (0x100UL)
 #define R_USB_FS0_INTSTS1_EOFERR_Pos           (6UL)
 #define R_USB_FS0_INTSTS1_EOFERR_Msk           (0x40UL)
 #define R_USB_FS0_INTSTS1_SIGN_Pos             (5UL)
 #define R_USB_FS0_INTSTS1_SIGN_Msk             (0x20UL)
 #define R_USB_FS0_INTSTS1_SACK_Pos             (4UL)
 #define R_USB_FS0_INTSTS1_SACK_Msk             (0x10UL)
 #define R_USB_FS0_INTSTS1_PDDETINT0_Pos        (0UL)
 #define R_USB_FS0_INTSTS1_PDDETINT0_Msk        (0x1UL)
/* ========================================================  BRDYSTS  ======================================================== */
 #define R_USB_FS0_BRDYSTS_PIPEBRDY_Pos         (0UL)
 #define R_USB_FS0_BRDYSTS_PIPEBRDY_Msk         (0x1UL)
/* ========================================================  NRDYSTS  ======================================================== */
 #define R_USB_FS0_NRDYSTS_PIPENRDY_Pos         (0UL)
 #define R_USB_FS0_NRDYSTS_PIPENRDY_Msk         (0x1UL)
/* ========================================================  BEMPSTS  ======================================================== */
 #define R_USB_FS0_BEMPSTS_PIPEBEMP_Pos         (0UL)
 #define R_USB_FS0_BEMPSTS_PIPEBEMP_Msk         (0x1UL)
/* ========================================================  FRMNUM  ========================================================= */
 #define R_USB_FS0_FRMNUM_OVRN_Pos              (15UL)
 #define R_USB_FS0_FRMNUM_OVRN_Msk              (0x8000UL)
 #define R_USB_FS0_FRMNUM_CRCE_Pos              (14UL)
 #define R_USB_FS0_FRMNUM_CRCE_Msk              (0x4000UL)
 #define R_USB_FS0_FRMNUM_FRNM_Pos              (0UL)
 #define R_USB_FS0_FRMNUM_FRNM_Msk              (0x7ffUL)
/* ========================================================  UFRMNUM  ======================================================== */
 #define R_USB_FS0_UFRMNUM_DVCHG_Pos            (15UL)
 #define R_USB_FS0_UFRMNUM_DVCHG_Msk            (0x8000UL)
 #define R_USB_FS0_UFRMNUM_UFRNM_Pos            (0UL)
 #define R_USB_FS0_UFRMNUM_UFRNM_Msk            (0x7UL)
/* ========================================================  USBADDR  ======================================================== */
 #define R_USB_FS0_USBADDR_STSRECOV0_Pos        (8UL)
 #define R_USB_FS0_USBADDR_STSRECOV0_Msk        (0x700UL)
 #define R_USB_FS0_USBADDR_USBADDR_Pos          (0UL)
 #define R_USB_FS0_USBADDR_USBADDR_Msk          (0x7fUL)
/* ========================================================  USBREQ  ========================================================= */
 #define R_USB_FS0_USBREQ_BREQUEST_Pos          (8UL)
 #define R_USB_FS0_USBREQ_BREQUEST_Msk          (0xff00UL)
 #define R_USB_FS0_USBREQ_BMREQUESTTYPE_Pos     (0UL)
 #define R_USB_FS0_USBREQ_BMREQUESTTYPE_Msk     (0xffUL)
/* ========================================================  USBVAL  ========================================================= */
 #define R_USB_FS0_USBVAL_WVALUE_Pos            (0UL)
 #define R_USB_FS0_USBVAL_WVALUE_Msk            (0xffffUL)
/* ========================================================  USBINDX  ======================================================== */
 #define R_USB_FS0_USBINDX_WINDEX_Pos           (0UL)
 #define R_USB_FS0_USBINDX_WINDEX_Msk           (0xffffUL)
/* ========================================================  USBLENG  ======================================================== */
 #define R_USB_FS0_USBLENG_WLENGTH_Pos          (0UL)
 #define R_USB_FS0_USBLENG_WLENGTH_Msk          (0xffffUL)
/* ========================================================  DCPCFG  ========================================================= */
 #define R_USB_FS0_DCPCFG_CNTMD_Pos             (8UL)
 #define R_USB_FS0_DCPCFG_CNTMD_Msk             (0x100UL)
 #define R_USB_FS0_DCPCFG_SHTNAK_Pos            (7UL)
 #define R_USB_FS0_DCPCFG_SHTNAK_Msk            (0x80UL)
 #define R_USB_FS0_DCPCFG_DIR_Pos               (4UL)
 #define R_USB_FS0_DCPCFG_DIR_Msk               (0x10UL)
/* ========================================================  DCPMAXP  ======================================================== */
 #define R_USB_FS0_DCPMAXP_DEVSEL_Pos           (12UL)
 #define R_USB_FS0_DCPMAXP_DEVSEL_Msk           (0xf000UL)
 #define R_USB_FS0_DCPMAXP_MXPS_Pos             (0UL)
 #define R_USB_FS0_DCPMAXP_MXPS_Msk             (0x7fUL)
/* ========================================================  DCPCTR  ========================================================= */
 #define R_USB_FS0_DCPCTR_BSTS_Pos              (15UL)
 #define R_USB_FS0_DCPCTR_BSTS_Msk              (0x8000UL)
 #define R_USB_FS0_DCPCTR_SUREQ_Pos             (14UL)
 #define R_USB_FS0_DCPCTR_SUREQ_Msk             (0x4000UL)
 #define R_USB_FS0_DCPCTR_SUREQCLR_Pos          (11UL)
 #define R_USB_FS0_DCPCTR_SUREQCLR_Msk          (0x800UL)
 #define R_USB_FS0_DCPCTR_SQCLR_Pos             (8UL)
 #define R_USB_FS0_DCPCTR_SQCLR_Msk             (0x100UL)
 #define R_USB_FS0_DCPCTR_SQSET_Pos             (7UL)
 #define R_USB_FS0_DCPCTR_SQSET_Msk             (0x80UL)
 #define R_USB_FS0_DCPCTR_SQMON_Pos             (6UL)
 #define R_USB_FS0_DCPCTR_SQMON_Msk             (0x40UL)
 #define R_USB_FS0_DCPCTR_PBUSY_Pos             (5UL)
 #define R_USB_FS0_DCPCTR_PBUSY_Msk             (0x20UL)
 #define R_USB_FS0_DCPCTR_CCPL_Pos              (2UL)
 #define R_USB_FS0_DCPCTR_CCPL_Msk              (0x4UL)
 #define R_USB_FS0_DCPCTR_PID_Pos               (0UL)
 #define R_USB_FS0_DCPCTR_PID_Msk               (0x3UL)
/* ========================================================  PIPESEL  ======================================================== */
 #define R_USB_FS0_PIPESEL_PIPESEL_Pos          (0UL)
 #define R_USB_FS0_PIPESEL_PIPESEL_Msk          (0xfUL)
/* ========================================================  PIPECFG  ======================================================== */
 #define R_USB_FS0_PIPECFG_TYPE_Pos             (14UL)
 #define R_USB_FS0_PIPECFG_TYPE_Msk             (0xc000UL)
 #define R_USB_FS0_PIPECFG_BFRE_Pos             (10UL)
 #define R_USB_FS0_PIPECFG_BFRE_Msk             (0x400UL)
 #define R_USB_FS0_PIPECFG_DBLB_Pos             (9UL)
 #define R_USB_FS0_PIPECFG_DBLB_Msk             (0x200UL)
 #define R_USB_FS0_PIPECFG_SHTNAK_Pos           (7UL)
 #define R_USB_FS0_PIPECFG_SHTNAK_Msk           (0x80UL)
 #define R_USB_FS0_PIPECFG_DIR_Pos              (4UL)
 #define R_USB_FS0_PIPECFG_DIR_Msk              (0x10UL)
 #define R_USB_FS0_PIPECFG_EPNUM_Pos            (0UL)
 #define R_USB_FS0_PIPECFG_EPNUM_Msk            (0xfUL)
/* =======================================================  PIPEMAXP  ======================================================== */
 #define R_USB_FS0_PIPEMAXP_DEVSEL_Pos          (12UL)
 #define R_USB_FS0_PIPEMAXP_DEVSEL_Msk          (0xf000UL)
 #define R_USB_FS0_PIPEMAXP_MXPS_Pos            (0UL)
 #define R_USB_FS0_PIPEMAXP_MXPS_Msk            (0x1ffUL)
/* =======================================================  PIPEPERI  ======================================================== */
 #define R_USB_FS0_PIPEPERI_IFIS_Pos            (12UL)
 #define R_USB_FS0_PIPEPERI_IFIS_Msk            (0x1000UL)
 #define R_USB_FS0_PIPEPERI_IITV_Pos            (0UL)
 #define R_USB_FS0_PIPEPERI_IITV_Msk            (0x7UL)
/* =======================================================  PIPE_CTR  ======================================================== */
 #define R_USB_FS0_PIPE_CTR_BSTS_Pos            (15UL)
 #define R_USB_FS0_PIPE_CTR_BSTS_Msk            (0x8000UL)
 #define R_USB_FS0_PIPE_CTR_INBUFM_Pos          (14UL)
 #define R_USB_FS0_PIPE_CTR_INBUFM_Msk          (0x4000UL)
 #define R_USB_FS0_PIPE_CTR_CSCLR_Pos           (13UL)
 #define R_USB_FS0_PIPE_CTR_CSCLR_Msk           (0x2000UL)
 #define R_USB_FS0_PIPE_CTR_CSSTS_Pos           (12UL)
 #define R_USB_FS0_PIPE_CTR_CSSTS_Msk           (0x1000UL)
 #define R_USB_FS0_PIPE_CTR_ATREPM_Pos          (10UL)
 #define R_USB_FS0_PIPE_CTR_ATREPM_Msk          (0x400UL)
 #define R_USB_FS0_PIPE_CTR_ACLRM_Pos           (9UL)
 #define R_USB_FS0_PIPE_CTR_ACLRM_Msk           (0x200UL)
 #define R_USB_FS0_PIPE_CTR_SQCLR_Pos           (8UL)
 #define R_USB_FS0_PIPE_CTR_SQCLR_Msk           (0x100UL)
 #define R_USB_FS0_PIPE_CTR_SQSET_Pos           (7UL)
 #define R_USB_FS0_PIPE_CTR_SQSET_Msk           (0x80UL)
 #define R_USB_FS0_PIPE_CTR_SQMON_Pos           (6UL)
 #define R_USB_FS0_PIPE_CTR_SQMON_Msk           (0x40UL)
 #define R_USB_FS0_PIPE_CTR_PBUSY_Pos           (5UL)
 #define R_USB_FS0_PIPE_CTR_PBUSY_Msk           (0x20UL)
 #define R_USB_FS0_PIPE_CTR_PID_Pos             (0UL)
 #define R_USB_FS0_PIPE_CTR_PID_Msk             (0x3UL)
/* ========================================================  DEVADD  ========================================================= */
 #define R_USB_FS0_DEVADD_UPPHUB_Pos            (11UL)
 #define R_USB_FS0_DEVADD_UPPHUB_Msk            (0x7800UL)
 #define R_USB_FS0_DEVADD_HUBPORT_Pos           (8UL)
 #define R_USB_FS0_DEVADD_HUBPORT_Msk           (0x700UL)
 #define R_USB_FS0_DEVADD_USBSPD_Pos            (6UL)
 #define R_USB_FS0_DEVADD_USBSPD_Msk            (0xc0UL)
/* ======================================================  USBBCCTRL0  ======================================================= */
 #define R_USB_FS0_USBBCCTRL0_PDDETSTS0_Pos     (9UL)
 #define R_USB_FS0_USBBCCTRL0_PDDETSTS0_Msk     (0x200UL)
 #define R_USB_FS0_USBBCCTRL0_CHGDETSTS0_Pos    (8UL)
 #define R_USB_FS0_USBBCCTRL0_CHGDETSTS0_Msk    (0x100UL)
 #define R_USB_FS0_USBBCCTRL0_BATCHGE0_Pos      (7UL)
 #define R_USB_FS0_USBBCCTRL0_BATCHGE0_Msk      (0x80UL)
 #define R_USB_FS0_USBBCCTRL0_VDMSRCE0_Pos      (5UL)
 #define R_USB_FS0_USBBCCTRL0_VDMSRCE0_Msk      (0x20UL)
 #define R_USB_FS0_USBBCCTRL0_IDPSINKE0_Pos     (4UL)
 #define R_USB_FS0_USBBCCTRL0_IDPSINKE0_Msk     (0x10UL)
 #define R_USB_FS0_USBBCCTRL0_VDPSRCE0_Pos      (3UL)
 #define R_USB_FS0_USBBCCTRL0_VDPSRCE0_Msk      (0x8UL)
 #define R_USB_FS0_USBBCCTRL0_IDMSINKE0_Pos     (2UL)
 #define R_USB_FS0_USBBCCTRL0_IDMSINKE0_Msk     (0x4UL)
 #define R_USB_FS0_USBBCCTRL0_IDPSRCE0_Pos      (1UL)
 #define R_USB_FS0_USBBCCTRL0_IDPSRCE0_Msk      (0x2UL)
 #define R_USB_FS0_USBBCCTRL0_RPDME0_Pos        (0UL)
 #define R_USB_FS0_USBBCCTRL0_RPDME0_Msk        (0x1UL)
/* ========================================================  UCKSEL  ========================================================= */
 #define R_USB_FS0_UCKSEL_UCKSELC_Pos           (0UL)
 #define R_USB_FS0_UCKSEL_UCKSELC_Msk           (0x1UL)
/* =========================================================  USBMC  ========================================================= */
 #define R_USB_FS0_USBMC_VDCEN_Pos              (7UL)
 #define R_USB_FS0_USBMC_VDCEN_Msk              (0x80UL)
 #define R_USB_FS0_USBMC_VDDUSBE_Pos            (0UL)
 #define R_USB_FS0_USBMC_VDDUSBE_Msk            (0x1UL)
/* ========================================================  PHYSLEW  ======================================================== */
 #define R_USB_FS0_PHYSLEW_SLEWF01_Pos          (3UL)
 #define R_USB_FS0_PHYSLEW_SLEWF01_Msk          (0x8UL)
 #define R_USB_FS0_PHYSLEW_SLEWF00_Pos          (2UL)
 #define R_USB_FS0_PHYSLEW_SLEWF00_Msk          (0x4UL)
 #define R_USB_FS0_PHYSLEW_SLEWR01_Pos          (1UL)
 #define R_USB_FS0_PHYSLEW_SLEWR01_Msk          (0x2UL)
 #define R_USB_FS0_PHYSLEW_SLEWR00_Pos          (0UL)
 #define R_USB_FS0_PHYSLEW_SLEWR00_Msk          (0x1UL)
/* ========================================================  LPCTRL  ========================================================= */
 #define R_USB_FS0_LPCTRL_HWUPM_Pos             (7UL)
 #define R_USB_FS0_LPCTRL_HWUPM_Msk             (0x80UL)
/* =========================================================  LPSTS  ========================================================= */
 #define R_USB_FS0_LPSTS_SUSPENDM_Pos           (14UL)
 #define R_USB_FS0_LPSTS_SUSPENDM_Msk           (0x4000UL)
/* ========================================================  BCCTRL  ========================================================= */
 #define R_USB_FS0_BCCTRL_PDDETSTS_Pos          (9UL)
 #define R_USB_FS0_BCCTRL_PDDETSTS_Msk          (0x200UL)
 #define R_USB_FS0_BCCTRL_CHGDETSTS_Pos         (8UL)
 #define R_USB_FS0_BCCTRL_CHGDETSTS_Msk         (0x100UL)
 #define R_USB_FS0_BCCTRL_DCPMODE_Pos           (5UL)
 #define R_USB_FS0_BCCTRL_DCPMODE_Msk           (0x20UL)
 #define R_USB_FS0_BCCTRL_VDMSRCE_Pos           (4UL)
 #define R_USB_FS0_BCCTRL_VDMSRCE_Msk           (0x10UL)
 #define R_USB_FS0_BCCTRL_IDPSINKE_Pos          (3UL)
 #define R_USB_FS0_BCCTRL_IDPSINKE_Msk          (0x8UL)
 #define R_USB_FS0_BCCTRL_VDPSRCE_Pos           (2UL)
 #define R_USB_FS0_BCCTRL_VDPSRCE_Msk           (0x4UL)
 #define R_USB_FS0_BCCTRL_IDMSINKE_Pos          (1UL)
 #define R_USB_FS0_BCCTRL_IDMSINKE_Msk          (0x2UL)
 #define R_USB_FS0_BCCTRL_IDPSRCE_Pos           (0UL)
 #define R_USB_FS0_BCCTRL_IDPSRCE_Msk           (0x1UL)
/* =======================================================  PL1CTRL1  ======================================================== */
 #define R_USB_FS0_PL1CTRL1_L1EXTMD_Pos         (14UL)
 #define R_USB_FS0_PL1CTRL1_L1EXTMD_Msk         (0x4000UL)
 #define R_USB_FS0_PL1CTRL1_HIRDTHR_Pos         (8UL)
 #define R_USB_FS0_PL1CTRL1_HIRDTHR_Msk         (0xf00UL)
 #define R_USB_FS0_PL1CTRL1_DVSQ_Pos            (4UL)
 #define R_USB_FS0_PL1CTRL1_DVSQ_Msk            (0xf0UL)
 #define R_USB_FS0_PL1CTRL1_L1NEGOMD_Pos        (3UL)
 #define R_USB_FS0_PL1CTRL1_L1NEGOMD_Msk        (0x8UL)
 #define R_USB_FS0_PL1CTRL1_L1RESPMD_Pos        (1UL)
 #define R_USB_FS0_PL1CTRL1_L1RESPMD_Msk        (0x6UL)
 #define R_USB_FS0_PL1CTRL1_L1RESPEN_Pos        (0UL)
 #define R_USB_FS0_PL1CTRL1_L1RESPEN_Msk        (0x1UL)
/* =======================================================  PL1CTRL2  ======================================================== */
 #define R_USB_FS0_PL1CTRL2_RWEMON_Pos          (12UL)
 #define R_USB_FS0_PL1CTRL2_RWEMON_Msk          (0x1000UL)
 #define R_USB_FS0_PL1CTRL2_HIRDMON_Pos         (8UL)
 #define R_USB_FS0_PL1CTRL2_HIRDMON_Msk         (0xf00UL)
/* =======================================================  HL1CTRL1  ======================================================== */
 #define R_USB_FS0_HL1CTRL1_L1STATUS_Pos        (1UL)
 #define R_USB_FS0_HL1CTRL1_L1STATUS_Msk        (0x6UL)
 #define R_USB_FS0_HL1CTRL1_L1REQ_Pos           (0UL)
 #define R_USB_FS0_HL1CTRL1_L1REQ_Msk           (0x1UL)
/* =======================================================  HL1CTRL2  ======================================================== */
 #define R_USB_FS0_HL1CTRL2_BESL_Pos            (15UL)
 #define R_USB_FS0_HL1CTRL2_BESL_Msk            (0x8000UL)
 #define R_USB_FS0_HL1CTRL2_L1RWE_Pos           (12UL)
 #define R_USB_FS0_HL1CTRL2_L1RWE_Msk           (0x1000UL)
 #define R_USB_FS0_HL1CTRL2_HIRD_Pos            (8UL)
 #define R_USB_FS0_HL1CTRL2_HIRD_Msk            (0xf00UL)
 #define R_USB_FS0_HL1CTRL2_L1ADDR_Pos          (0UL)
 #define R_USB_FS0_HL1CTRL2_L1ADDR_Msk          (0xfUL)
/* ========================================================  DPUSR0R  ======================================================== */
 #define R_USB_FS0_DPUSR0R_DVBSTSHM_Pos         (23UL)
 #define R_USB_FS0_DPUSR0R_DVBSTSHM_Msk         (0x800000UL)
 #define R_USB_FS0_DPUSR0R_DOVCBHM_Pos          (21UL)
 #define R_USB_FS0_DPUSR0R_DOVCBHM_Msk          (0x200000UL)
 #define R_USB_FS0_DPUSR0R_DOVCAHM_Pos          (20UL)
 #define R_USB_FS0_DPUSR0R_DOVCAHM_Msk          (0x100000UL)
/* ========================================================  DPUSR1R  ======================================================== */
 #define R_USB_FS0_DPUSR1R_DVBSTSH_Pos          (23UL)
 #define R_USB_FS0_DPUSR1R_DVBSTSH_Msk          (0x800000UL)
 #define R_USB_FS0_DPUSR1R_DOVCBH_Pos           (21UL)
 #define R_USB_FS0_DPUSR1R_DOVCBH_Msk           (0x200000UL)
 #define R_USB_FS0_DPUSR1R_DOVCAH_Pos           (20UL)
 #define R_USB_FS0_DPUSR1R_DOVCAH_Msk           (0x100000UL)
 #define R_USB_FS0_DPUSR1R_DVBSTSHE_Pos         (7UL)
 #define R_USB_FS0_DPUSR1R_DVBSTSHE_Msk         (0x80UL)
 #define R_USB_FS0_DPUSR1R_DOVCBHE_Pos          (5UL)
 #define R_USB_FS0_DPUSR1R_DOVCBHE_Msk          (0x20UL)
 #define R_USB_FS0_DPUSR1R_DOVCAHE_Pos          (4UL)
 #define R_USB_FS0_DPUSR1R_DOVCAHE_Msk          (0x10UL)
/* ========================================================  DPUSR2R  ======================================================== */
 #define R_USB_FS0_DPUSR2R_DMINTE_Pos           (9UL)
 #define R_USB_FS0_DPUSR2R_DMINTE_Msk           (0x200UL)
 #define R_USB_FS0_DPUSR2R_DPINTE_Pos           (8UL)
 #define R_USB_FS0_DPUSR2R_DPINTE_Msk           (0x100UL)
 #define R_USB_FS0_DPUSR2R_DMVAL_Pos            (5UL)
 #define R_USB_FS0_DPUSR2R_DMVAL_Msk            (0x20UL)
 #define R_USB_FS0_DPUSR2R_DPVAL_Pos            (4UL)
 #define R_USB_FS0_DPUSR2R_DPVAL_Msk            (0x10UL)
 #define R_USB_FS0_DPUSR2R_DMINT_Pos            (1UL)
 #define R_USB_FS0_DPUSR2R_DMINT_Msk            (0x2UL)
 #define R_USB_FS0_DPUSR2R_DPINT_Pos            (0UL)
 #define R_USB_FS0_DPUSR2R_DPINT_Msk            (0x1UL)
/* ========================================================  DPUSRCR  ======================================================== */
 #define R_USB_FS0_DPUSRCR_FIXPHYPD_Pos         (1UL)
 #define R_USB_FS0_DPUSRCR_FIXPHYPD_Msk         (0x2UL)
 #define R_USB_FS0_DPUSRCR_FIXPHY_Pos           (0UL)
 #define R_USB_FS0_DPUSRCR_FIXPHY_Msk           (0x1UL)
/* ======================================================  DPUSR0R_FS  ======================================================= */
 #define R_USB_FS0_DPUSR0R_FS_DVBSTS0_Pos       (23UL)
 #define R_USB_FS0_DPUSR0R_FS_DVBSTS0_Msk       (0x800000UL)
 #define R_USB_FS0_DPUSR0R_FS_DOVCB0_Pos        (21UL)
 #define R_USB_FS0_DPUSR0R_FS_DOVCB0_Msk        (0x200000UL)
 #define R_USB_FS0_DPUSR0R_FS_DOVCA0_Pos        (20UL)
 #define R_USB_FS0_DPUSR0R_FS_DOVCA0_Msk        (0x100000UL)
 #define R_USB_FS0_DPUSR0R_FS_DM0_Pos           (17UL)
 #define R_USB_FS0_DPUSR0R_FS_DM0_Msk           (0x20000UL)
 #define R_USB_FS0_DPUSR0R_FS_DP0_Pos           (16UL)
 #define R_USB_FS0_DPUSR0R_FS_DP0_Msk           (0x10000UL)
 #define R_USB_FS0_DPUSR0R_FS_FIXPHY0_Pos       (4UL)
 #define R_USB_FS0_DPUSR0R_FS_FIXPHY0_Msk       (0x10UL)
 #define R_USB_FS0_DPUSR0R_FS_DRPD0_Pos         (3UL)
 #define R_USB_FS0_DPUSR0R_FS_DRPD0_Msk         (0x8UL)
 #define R_USB_FS0_DPUSR0R_FS_RPUE0_Pos         (1UL)
 #define R_USB_FS0_DPUSR0R_FS_RPUE0_Msk         (0x2UL)
 #define R_USB_FS0_DPUSR0R_FS_SRPC0_Pos         (0UL)
 #define R_USB_FS0_DPUSR0R_FS_SRPC0_Msk         (0x1UL)
/* ======================================================  DPUSR1R_FS  ======================================================= */
 #define R_USB_FS0_DPUSR1R_FS_DVBINT0_Pos       (23UL)
 #define R_USB_FS0_DPUSR1R_FS_DVBINT0_Msk       (0x800000UL)
 #define R_USB_FS0_DPUSR1R_FS_DOVRCRB0_Pos      (21UL)
 #define R_USB_FS0_DPUSR1R_FS_DOVRCRB0_Msk      (0x200000UL)
 #define R_USB_FS0_DPUSR1R_FS_DOVRCRA0_Pos      (20UL)
 #define R_USB_FS0_DPUSR1R_FS_DOVRCRA0_Msk      (0x100000UL)
 #define R_USB_FS0_DPUSR1R_FS_DMINT0_Pos        (17UL)
 #define R_USB_FS0_DPUSR1R_FS_DMINT0_Msk        (0x20000UL)
 #define R_USB_FS0_DPUSR1R_FS_DPINT0_Pos        (16UL)
 #define R_USB_FS0_DPUSR1R_FS_DPINT0_Msk        (0x10000UL)
 #define R_USB_FS0_DPUSR1R_FS_DVBSE0_Pos        (7UL)
 #define R_USB_FS0_DPUSR1R_FS_DVBSE0_Msk        (0x80UL)
 #define R_USB_FS0_DPUSR1R_FS_DOVRCRBE0_Pos     (5UL)
 #define R_USB_FS0_DPUSR1R_FS_DOVRCRBE0_Msk     (0x20UL)
 #define R_USB_FS0_DPUSR1R_FS_DOVRCRAE0_Pos     (4UL)
 #define R_USB_FS0_DPUSR1R_FS_DOVRCRAE0_Msk     (0x10UL)
 #define R_USB_FS0_DPUSR1R_FS_DMINTE0_Pos       (1UL)
 #define R_USB_FS0_DPUSR1R_FS_DMINTE0_Msk       (0x2UL)
 #define R_USB_FS0_DPUSR1R_FS_DPINTE0_Pos       (0UL)
 #define R_USB_FS0_DPUSR1R_FS_DPINTE0_Msk       (0x1UL)

/* =========================================================================================================================== */
/* ================                                           R_WDT                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  WDTRR  ========================================================= */
 #define R_WDT_WDTRR_WDTRR_Pos        (0UL)
 #define R_WDT_WDTRR_WDTRR_Msk        (0xffUL)
/* =========================================================  WDTCR  ========================================================= */
 #define R_WDT_WDTCR_RPSS_Pos         (12UL)
 #define R_WDT_WDTCR_RPSS_Msk         (0x3000UL)
 #define R_WDT_WDTCR_RPES_Pos         (8UL)
 #define R_WDT_WDTCR_RPES_Msk         (0x300UL)
 #define R_WDT_WDTCR_CKS_Pos          (4UL)
 #define R_WDT_WDTCR_CKS_Msk          (0xf0UL)
 #define R_WDT_WDTCR_TOPS_Pos         (0UL)
 #define R_WDT_WDTCR_TOPS_Msk         (0x3UL)
/* =========================================================  WDTSR  ========================================================= */
 #define R_WDT_WDTSR_REFEF_Pos        (15UL)
 #define R_WDT_WDTSR_REFEF_Msk        (0x8000UL)
 #define R_WDT_WDTSR_UNDFF_Pos        (14UL)
 #define R_WDT_WDTSR_UNDFF_Msk        (0x4000UL)
 #define R_WDT_WDTSR_CNTVAL_Pos       (0UL)
 #define R_WDT_WDTSR_CNTVAL_Msk       (0x3fffUL)
/* ========================================================  WDTRCR  ========================================================= */
 #define R_WDT_WDTRCR_RSTIRQS_Pos     (7UL)
 #define R_WDT_WDTRCR_RSTIRQS_Msk     (0x80UL)
/* =======================================================  WDTCSTPR  ======================================================== */
 #define R_WDT_WDTCSTPR_SLCSTP_Pos    (7UL)
 #define R_WDT_WDTCSTPR_SLCSTP_Msk    (0x80UL)

/* =========================================================================================================================== */
/* ================                                         R_USB_HS0                                         ================ */
/* =========================================================================================================================== */

/* ========================================================  SYSCFG  ========================================================= */
 #define R_USB_HS0_SYSCFG_CNEN_Pos         (8UL)
 #define R_USB_HS0_SYSCFG_CNEN_Msk         (0x100UL)
 #define R_USB_HS0_SYSCFG_HSE_Pos          (7UL)
 #define R_USB_HS0_SYSCFG_HSE_Msk          (0x80UL)
 #define R_USB_HS0_SYSCFG_DCFM_Pos         (6UL)
 #define R_USB_HS0_SYSCFG_DCFM_Msk         (0x40UL)
 #define R_USB_HS0_SYSCFG_DRPD_Pos         (5UL)
 #define R_USB_HS0_SYSCFG_DRPD_Msk         (0x20UL)
 #define R_USB_HS0_SYSCFG_DPRPU_Pos        (4UL)
 #define R_USB_HS0_SYSCFG_DPRPU_Msk        (0x10UL)
 #define R_USB_HS0_SYSCFG_USBE_Pos         (0UL)
 #define R_USB_HS0_SYSCFG_USBE_Msk         (0x1UL)
/* ========================================================  BUSWAIT  ======================================================== */
 #define R_USB_HS0_BUSWAIT_BWAIT_Pos       (0UL)
 #define R_USB_HS0_BUSWAIT_BWAIT_Msk       (0xfUL)
/* ========================================================  SYSSTS0  ======================================================== */
 #define R_USB_HS0_SYSSTS0_HTACT_Pos       (6UL)
 #define R_USB_HS0_SYSSTS0_HTACT_Msk       (0x40UL)
 #define R_USB_HS0_SYSSTS0_SOFEA_Pos       (5UL)
 #define R_USB_HS0_SYSSTS0_SOFEA_Msk       (0x20UL)
 #define R_USB_HS0_SYSSTS0_IDMON_Pos       (2UL)
 #define R_USB_HS0_SYSSTS0_IDMON_Msk       (0x4UL)
 #define R_USB_HS0_SYSSTS0_LNST_Pos        (0UL)
 #define R_USB_HS0_SYSSTS0_LNST_Msk        (0x3UL)
 #define R_USB_HS0_SYSSTS0_OVCMON_Pos      (14UL)
 #define R_USB_HS0_SYSSTS0_OVCMON_Msk      (0xc000UL)
/* ========================================================  PLLSTA  ========================================================= */
 #define R_USB_HS0_PLLSTA_PLLLOCK_Pos      (0UL)
 #define R_USB_HS0_PLLSTA_PLLLOCK_Msk      (0x1UL)
/* =======================================================  DVSTCTR0  ======================================================== */
 #define R_USB_HS0_DVSTCTR0_HNPBTOA_Pos    (11UL)
 #define R_USB_HS0_DVSTCTR0_HNPBTOA_Msk    (0x800UL)
 #define R_USB_HS0_DVSTCTR0_EXICEN_Pos     (10UL)
 #define R_USB_HS0_DVSTCTR0_EXICEN_Msk     (0x400UL)
 #define R_USB_HS0_DVSTCTR0_VBUSEN_Pos     (9UL)
 #define R_USB_HS0_DVSTCTR0_VBUSEN_Msk     (0x200UL)
 #define R_USB_HS0_DVSTCTR0_WKUP_Pos       (8UL)
 #define R_USB_HS0_DVSTCTR0_WKUP_Msk       (0x100UL)
 #define R_USB_HS0_DVSTCTR0_RWUPE_Pos      (7UL)
 #define R_USB_HS0_DVSTCTR0_RWUPE_Msk      (0x80UL)
 #define R_USB_HS0_DVSTCTR0_USBRST_Pos     (6UL)
 #define R_USB_HS0_DVSTCTR0_USBRST_Msk     (0x40UL)
 #define R_USB_HS0_DVSTCTR0_RESUME_Pos     (5UL)
 #define R_USB_HS0_DVSTCTR0_RESUME_Msk     (0x20UL)
 #define R_USB_HS0_DVSTCTR0_UACT_Pos       (4UL)
 #define R_USB_HS0_DVSTCTR0_UACT_Msk       (0x10UL)
 #define R_USB_HS0_DVSTCTR0_RHST_Pos       (0UL)
 #define R_USB_HS0_DVSTCTR0_RHST_Msk       (0x7UL)
/* =======================================================  TESTMODE  ======================================================== */
 #define R_USB_HS0_TESTMODE_UTST_Pos       (0UL)
 #define R_USB_HS0_TESTMODE_UTST_Msk       (0xfUL)
/* =========================================================  CFIFO  ========================================================= */
 #define R_USB_HS0_CFIFO_FIFOPORT_Pos      (0UL)
 #define R_USB_HS0_CFIFO_FIFOPORT_Msk      (0xffffffffUL)
/* ========================================================  CFIFOL  ========================================================= */
/* ========================================================  CFIFOH  ========================================================= */
/* ========================================================  CFIFOLL  ======================================================== */
/* ========================================================  CFIFOHH  ======================================================== */
/* ========================================================  D0FIFO  ========================================================= */
 #define R_USB_HS0_D0FIFO_FIFOPORT_Pos    (0UL)
 #define R_USB_HS0_D0FIFO_FIFOPORT_Msk    (0xffffffffUL)
/* ========================================================  D0FIFOL  ======================================================== */
/* ========================================================  D0FIFOH  ======================================================== */
/* =======================================================  D0FIFOLL  ======================================================== */
/* =======================================================  D0FIFOHH  ======================================================== */
/* ========================================================  D1FIFO  ========================================================= */
 #define R_USB_HS0_D1FIFO_FIFOPORT_Pos    (0UL)
 #define R_USB_HS0_D1FIFO_FIFOPORT_Msk    (0xffffffffUL)
/* ========================================================  D1FIFOL  ======================================================== */
/* ========================================================  D1FIFOH  ======================================================== */
/* =======================================================  D1FIFOLL  ======================================================== */
/* =======================================================  D1FIFOHH  ======================================================== */
/* =======================================================  CFIFOSEL  ======================================================== */
 #define R_USB_HS0_CFIFOSEL_RCNT_Pos           (15UL)
 #define R_USB_HS0_CFIFOSEL_RCNT_Msk           (0x8000UL)
 #define R_USB_HS0_CFIFOSEL_REW_Pos            (14UL)
 #define R_USB_HS0_CFIFOSEL_REW_Msk            (0x4000UL)
 #define R_USB_HS0_CFIFOSEL_MBW_Pos            (10UL)
 #define R_USB_HS0_CFIFOSEL_MBW_Msk            (0xc00UL)
 #define R_USB_HS0_CFIFOSEL_BIGEND_Pos         (8UL)
 #define R_USB_HS0_CFIFOSEL_BIGEND_Msk         (0x100UL)
 #define R_USB_HS0_CFIFOSEL_ISEL_Pos           (5UL)
 #define R_USB_HS0_CFIFOSEL_ISEL_Msk           (0x20UL)
 #define R_USB_HS0_CFIFOSEL_CURPIPE_Pos        (0UL)
 #define R_USB_HS0_CFIFOSEL_CURPIPE_Msk        (0xfUL)
/* =======================================================  CFIFOCTR  ======================================================== */
 #define R_USB_HS0_CFIFOCTR_BVAL_Pos           (15UL)
 #define R_USB_HS0_CFIFOCTR_BVAL_Msk           (0x8000UL)
 #define R_USB_HS0_CFIFOCTR_BCLR_Pos           (14UL)
 #define R_USB_HS0_CFIFOCTR_BCLR_Msk           (0x4000UL)
 #define R_USB_HS0_CFIFOCTR_FRDY_Pos           (13UL)
 #define R_USB_HS0_CFIFOCTR_FRDY_Msk           (0x2000UL)
 #define R_USB_HS0_CFIFOCTR_DTLN_Pos           (0UL)
 #define R_USB_HS0_CFIFOCTR_DTLN_Msk           (0xfffUL)
/* =======================================================  D0FIFOSEL  ======================================================= */
 #define R_USB_HS0_D0FIFOSEL_RCNT_Pos          (15UL)
 #define R_USB_HS0_D0FIFOSEL_RCNT_Msk          (0x8000UL)
 #define R_USB_HS0_D0FIFOSEL_REW_Pos           (14UL)
 #define R_USB_HS0_D0FIFOSEL_REW_Msk           (0x4000UL)
 #define R_USB_HS0_D0FIFOSEL_DCLRM_Pos         (13UL)
 #define R_USB_HS0_D0FIFOSEL_DCLRM_Msk         (0x2000UL)
 #define R_USB_HS0_D0FIFOSEL_DREQE_Pos         (12UL)
 #define R_USB_HS0_D0FIFOSEL_DREQE_Msk         (0x1000UL)
 #define R_USB_HS0_D0FIFOSEL_MBW_Pos           (10UL)
 #define R_USB_HS0_D0FIFOSEL_MBW_Msk           (0xc00UL)
 #define R_USB_HS0_D0FIFOSEL_BIGEND_Pos        (8UL)
 #define R_USB_HS0_D0FIFOSEL_BIGEND_Msk        (0x100UL)
 #define R_USB_HS0_D0FIFOSEL_CURPIPE_Pos       (0UL)
 #define R_USB_HS0_D0FIFOSEL_CURPIPE_Msk       (0xfUL)
/* =======================================================  D0FIFOCTR  ======================================================= */
 #define R_USB_HS0_D0FIFOCTR_BVAL_Pos          (15UL)
 #define R_USB_HS0_D0FIFOCTR_BVAL_Msk          (0x8000UL)
 #define R_USB_HS0_D0FIFOCTR_BCLR_Pos          (14UL)
 #define R_USB_HS0_D0FIFOCTR_BCLR_Msk          (0x4000UL)
 #define R_USB_HS0_D0FIFOCTR_FRDY_Pos          (13UL)
 #define R_USB_HS0_D0FIFOCTR_FRDY_Msk          (0x2000UL)
 #define R_USB_HS0_D0FIFOCTR_DTLN_Pos          (0UL)
 #define R_USB_HS0_D0FIFOCTR_DTLN_Msk          (0xfffUL)
/* =======================================================  D1FIFOSEL  ======================================================= */
 #define R_USB_HS0_D1FIFOSEL_RCNT_Pos          (15UL)
 #define R_USB_HS0_D1FIFOSEL_RCNT_Msk          (0x8000UL)
 #define R_USB_HS0_D1FIFOSEL_REW_Pos           (14UL)
 #define R_USB_HS0_D1FIFOSEL_REW_Msk           (0x4000UL)
 #define R_USB_HS0_D1FIFOSEL_DCLRM_Pos         (13UL)
 #define R_USB_HS0_D1FIFOSEL_DCLRM_Msk         (0x2000UL)
 #define R_USB_HS0_D1FIFOSEL_DREQE_Pos         (12UL)
 #define R_USB_HS0_D1FIFOSEL_DREQE_Msk         (0x1000UL)
 #define R_USB_HS0_D1FIFOSEL_MBW_Pos           (10UL)
 #define R_USB_HS0_D1FIFOSEL_MBW_Msk           (0xc00UL)
 #define R_USB_HS0_D1FIFOSEL_BIGEND_Pos        (8UL)
 #define R_USB_HS0_D1FIFOSEL_BIGEND_Msk        (0x100UL)
 #define R_USB_HS0_D1FIFOSEL_CURPIPE_Pos       (0UL)
 #define R_USB_HS0_D1FIFOSEL_CURPIPE_Msk       (0xfUL)
/* =======================================================  D1FIFOCTR  ======================================================= */
 #define R_USB_HS0_D1FIFOCTR_BVAL_Pos          (15UL)
 #define R_USB_HS0_D1FIFOCTR_BVAL_Msk          (0x8000UL)
 #define R_USB_HS0_D1FIFOCTR_BCLR_Pos          (14UL)
 #define R_USB_HS0_D1FIFOCTR_BCLR_Msk          (0x4000UL)
 #define R_USB_HS0_D1FIFOCTR_FRDY_Pos          (13UL)
 #define R_USB_HS0_D1FIFOCTR_FRDY_Msk          (0x2000UL)
 #define R_USB_HS0_D1FIFOCTR_DTLN_Pos          (0UL)
 #define R_USB_HS0_D1FIFOCTR_DTLN_Msk          (0xfffUL)
/* ========================================================  INTENB0  ======================================================== */
 #define R_USB_HS0_INTENB0_VBSE_Pos            (15UL)
 #define R_USB_HS0_INTENB0_VBSE_Msk            (0x8000UL)
 #define R_USB_HS0_INTENB0_RSME_Pos            (14UL)
 #define R_USB_HS0_INTENB0_RSME_Msk            (0x4000UL)
 #define R_USB_HS0_INTENB0_SOFE_Pos            (13UL)
 #define R_USB_HS0_INTENB0_SOFE_Msk            (0x2000UL)
 #define R_USB_HS0_INTENB0_DVSE_Pos            (12UL)
 #define R_USB_HS0_INTENB0_DVSE_Msk            (0x1000UL)
 #define R_USB_HS0_INTENB0_CTRE_Pos            (11UL)
 #define R_USB_HS0_INTENB0_CTRE_Msk            (0x800UL)
 #define R_USB_HS0_INTENB0_BEMPE_Pos           (10UL)
 #define R_USB_HS0_INTENB0_BEMPE_Msk           (0x400UL)
 #define R_USB_HS0_INTENB0_NRDYE_Pos           (9UL)
 #define R_USB_HS0_INTENB0_NRDYE_Msk           (0x200UL)
 #define R_USB_HS0_INTENB0_BRDYE_Pos           (8UL)
 #define R_USB_HS0_INTENB0_BRDYE_Msk           (0x100UL)
/* ========================================================  INTENB1  ======================================================== */
 #define R_USB_HS0_INTENB1_OVRCRE_Pos          (15UL)
 #define R_USB_HS0_INTENB1_OVRCRE_Msk          (0x8000UL)
 #define R_USB_HS0_INTENB1_BCHGE_Pos           (14UL)
 #define R_USB_HS0_INTENB1_BCHGE_Msk           (0x4000UL)
 #define R_USB_HS0_INTENB1_DTCHE_Pos           (12UL)
 #define R_USB_HS0_INTENB1_DTCHE_Msk           (0x1000UL)
 #define R_USB_HS0_INTENB1_ATTCHE_Pos          (11UL)
 #define R_USB_HS0_INTENB1_ATTCHE_Msk          (0x800UL)
 #define R_USB_HS0_INTENB1_L1RSMENDE_Pos       (9UL)
 #define R_USB_HS0_INTENB1_L1RSMENDE_Msk       (0x200UL)
 #define R_USB_HS0_INTENB1_LPMENDE_Pos         (8UL)
 #define R_USB_HS0_INTENB1_LPMENDE_Msk         (0x100UL)
 #define R_USB_HS0_INTENB1_EOFERRE_Pos         (6UL)
 #define R_USB_HS0_INTENB1_EOFERRE_Msk         (0x40UL)
 #define R_USB_HS0_INTENB1_SIGNE_Pos           (5UL)
 #define R_USB_HS0_INTENB1_SIGNE_Msk           (0x20UL)
 #define R_USB_HS0_INTENB1_SACKE_Pos           (4UL)
 #define R_USB_HS0_INTENB1_SACKE_Msk           (0x10UL)
 #define R_USB_HS0_INTENB1_PDDETINTE0_Pos      (0UL)
 #define R_USB_HS0_INTENB1_PDDETINTE0_Msk      (0x1UL)
/* ========================================================  BRDYENB  ======================================================== */
 #define R_USB_HS0_BRDYENB_PIPEBRDYE_Pos       (0UL)
 #define R_USB_HS0_BRDYENB_PIPEBRDYE_Msk       (0x3ffUL)
/* ========================================================  NRDYENB  ======================================================== */
 #define R_USB_HS0_NRDYENB_PIPENRDYE_Pos       (0UL)
 #define R_USB_HS0_NRDYENB_PIPENRDYE_Msk       (0x3ffUL)
/* ========================================================  BEMPENB  ======================================================== */
 #define R_USB_HS0_BEMPENB_PIPEBEMPE_Pos       (0UL)
 #define R_USB_HS0_BEMPENB_PIPEBEMPE_Msk       (0x3ffUL)
/* ========================================================  SOFCFG  ========================================================= */
 #define R_USB_HS0_SOFCFG_TRNENSEL_Pos         (8UL)
 #define R_USB_HS0_SOFCFG_TRNENSEL_Msk         (0x100UL)
 #define R_USB_HS0_SOFCFG_BRDYM_Pos            (6UL)
 #define R_USB_HS0_SOFCFG_BRDYM_Msk            (0x40UL)
 #define R_USB_HS0_SOFCFG_INTL_Pos             (5UL)
 #define R_USB_HS0_SOFCFG_INTL_Msk             (0x20UL)
 #define R_USB_HS0_SOFCFG_EDGESTS_Pos          (4UL)
 #define R_USB_HS0_SOFCFG_EDGESTS_Msk          (0x10UL)
/* ========================================================  PHYSET  ========================================================= */
 #define R_USB_HS0_PHYSET_HSEB_Pos             (15UL)
 #define R_USB_HS0_PHYSET_HSEB_Msk             (0x8000UL)
 #define R_USB_HS0_PHYSET_REPSTART_Pos         (11UL)
 #define R_USB_HS0_PHYSET_REPSTART_Msk         (0x800UL)
 #define R_USB_HS0_PHYSET_REPSEL_Pos           (8UL)
 #define R_USB_HS0_PHYSET_REPSEL_Msk           (0x300UL)
 #define R_USB_HS0_PHYSET_CLKSEL_Pos           (4UL)
 #define R_USB_HS0_PHYSET_CLKSEL_Msk           (0x30UL)
 #define R_USB_HS0_PHYSET_CDPEN_Pos            (3UL)
 #define R_USB_HS0_PHYSET_CDPEN_Msk            (0x8UL)
 #define R_USB_HS0_PHYSET_PLLRESET_Pos         (1UL)
 #define R_USB_HS0_PHYSET_PLLRESET_Msk         (0x2UL)
 #define R_USB_HS0_PHYSET_DIRPD_Pos            (0UL)
 #define R_USB_HS0_PHYSET_DIRPD_Msk            (0x1UL)
/* ========================================================  INTSTS0  ======================================================== */
 #define R_USB_HS0_INTSTS0_VBINT_Pos           (15UL)
 #define R_USB_HS0_INTSTS0_VBINT_Msk           (0x8000UL)
 #define R_USB_HS0_INTSTS0_RESM_Pos            (14UL)
 #define R_USB_HS0_INTSTS0_RESM_Msk            (0x4000UL)
 #define R_USB_HS0_INTSTS0_SOFR_Pos            (13UL)
 #define R_USB_HS0_INTSTS0_SOFR_Msk            (0x2000UL)
 #define R_USB_HS0_INTSTS0_DVST_Pos            (12UL)
 #define R_USB_HS0_INTSTS0_DVST_Msk            (0x1000UL)
 #define R_USB_HS0_INTSTS0_CTRT_Pos            (11UL)
 #define R_USB_HS0_INTSTS0_CTRT_Msk            (0x800UL)
 #define R_USB_HS0_INTSTS0_BEMP_Pos            (10UL)
 #define R_USB_HS0_INTSTS0_BEMP_Msk            (0x400UL)
 #define R_USB_HS0_INTSTS0_NRDY_Pos            (9UL)
 #define R_USB_HS0_INTSTS0_NRDY_Msk            (0x200UL)
 #define R_USB_HS0_INTSTS0_BRDY_Pos            (8UL)
 #define R_USB_HS0_INTSTS0_BRDY_Msk            (0x100UL)
 #define R_USB_HS0_INTSTS0_VBSTS_Pos           (7UL)
 #define R_USB_HS0_INTSTS0_VBSTS_Msk           (0x80UL)
 #define R_USB_HS0_INTSTS0_DVSQ_Pos            (4UL)
 #define R_USB_HS0_INTSTS0_DVSQ_Msk            (0x70UL)
 #define R_USB_HS0_INTSTS0_VALID_Pos           (3UL)
 #define R_USB_HS0_INTSTS0_VALID_Msk           (0x8UL)
 #define R_USB_HS0_INTSTS0_CTSQ_Pos            (0UL)
 #define R_USB_HS0_INTSTS0_CTSQ_Msk            (0x7UL)
/* ========================================================  INTSTS1  ======================================================== */
 #define R_USB_HS0_INTSTS1_OVRCR_Pos           (15UL)
 #define R_USB_HS0_INTSTS1_OVRCR_Msk           (0x8000UL)
 #define R_USB_HS0_INTSTS1_BCHG_Pos            (14UL)
 #define R_USB_HS0_INTSTS1_BCHG_Msk            (0x4000UL)
 #define R_USB_HS0_INTSTS1_DTCH_Pos            (12UL)
 #define R_USB_HS0_INTSTS1_DTCH_Msk            (0x1000UL)
 #define R_USB_HS0_INTSTS1_ATTCH_Pos           (11UL)
 #define R_USB_HS0_INTSTS1_ATTCH_Msk           (0x800UL)
 #define R_USB_HS0_INTSTS1_L1RSMEND_Pos        (9UL)
 #define R_USB_HS0_INTSTS1_L1RSMEND_Msk        (0x200UL)
 #define R_USB_HS0_INTSTS1_LPMEND_Pos          (8UL)
 #define R_USB_HS0_INTSTS1_LPMEND_Msk          (0x100UL)
 #define R_USB_HS0_INTSTS1_EOFERR_Pos          (6UL)
 #define R_USB_HS0_INTSTS1_EOFERR_Msk          (0x40UL)
 #define R_USB_HS0_INTSTS1_SIGN_Pos            (5UL)
 #define R_USB_HS0_INTSTS1_SIGN_Msk            (0x20UL)
 #define R_USB_HS0_INTSTS1_SACK_Pos            (4UL)
 #define R_USB_HS0_INTSTS1_SACK_Msk            (0x10UL)
 #define R_USB_HS0_INTSTS1_PDDETINT0_Pos       (0UL)
 #define R_USB_HS0_INTSTS1_PDDETINT0_Msk       (0x1UL)
/* ========================================================  BRDYSTS  ======================================================== */
 #define R_USB_HS0_BRDYSTS_PIPEBRDY_Pos        (0UL)
 #define R_USB_HS0_BRDYSTS_PIPEBRDY_Msk        (0x3ffUL)
/* ========================================================  NRDYSTS  ======================================================== */
 #define R_USB_HS0_NRDYSTS_PIPENRDY_Pos        (0UL)
 #define R_USB_HS0_NRDYSTS_PIPENRDY_Msk        (0x3ffUL)
/* ========================================================  BEMPSTS  ======================================================== */
 #define R_USB_HS0_BEMPSTS_PIPEBEMP_Pos        (0UL)
 #define R_USB_HS0_BEMPSTS_PIPEBEMP_Msk        (0x3ffUL)
/* ========================================================  FRMNUM  ========================================================= */
 #define R_USB_HS0_FRMNUM_OVRN_Pos             (15UL)
 #define R_USB_HS0_FRMNUM_OVRN_Msk             (0x8000UL)
 #define R_USB_HS0_FRMNUM_CRCE_Pos             (14UL)
 #define R_USB_HS0_FRMNUM_CRCE_Msk             (0x4000UL)
 #define R_USB_HS0_FRMNUM_FRNM_Pos             (0UL)
 #define R_USB_HS0_FRMNUM_FRNM_Msk             (0x7ffUL)
/* ========================================================  UFRMNUM  ======================================================== */
 #define R_USB_HS0_UFRMNUM_DVCHG_Pos           (15UL)
 #define R_USB_HS0_UFRMNUM_DVCHG_Msk           (0x8000UL)
 #define R_USB_HS0_UFRMNUM_UFRNM_Pos           (0UL)
 #define R_USB_HS0_UFRMNUM_UFRNM_Msk           (0x7UL)
/* ========================================================  USBADDR  ======================================================== */
 #define R_USB_HS0_USBADDR_STSRECOV0_Pos       (8UL)
 #define R_USB_HS0_USBADDR_STSRECOV0_Msk       (0x700UL)
/* ========================================================  USBREQ  ========================================================= */
 #define R_USB_HS0_USBREQ_BREQUEST_Pos         (8UL)
 #define R_USB_HS0_USBREQ_BREQUEST_Msk         (0xff00UL)
 #define R_USB_HS0_USBREQ_BMREQUESTTYPE_Pos    (0UL)
 #define R_USB_HS0_USBREQ_BMREQUESTTYPE_Msk    (0xffUL)
/* ========================================================  USBVAL  ========================================================= */
 #define R_USB_HS0_USBVAL_WVALUE_Pos           (0UL)
 #define R_USB_HS0_USBVAL_WVALUE_Msk           (0xffffUL)
/* ========================================================  USBINDX  ======================================================== */
 #define R_USB_HS0_USBINDX_WINDEX_Pos          (0UL)
 #define R_USB_HS0_USBINDX_WINDEX_Msk          (0xffffUL)
/* ========================================================  USBLENG  ======================================================== */
 #define R_USB_HS0_USBLENG_WLENGTH_Pos         (0UL)
 #define R_USB_HS0_USBLENG_WLENGTH_Msk         (0xffffUL)
/* ========================================================  DCPCFG  ========================================================= */
 #define R_USB_HS0_DCPCFG_CNTMD_Pos            (8UL)
 #define R_USB_HS0_DCPCFG_CNTMD_Msk            (0x100UL)
 #define R_USB_HS0_DCPCFG_SHTNAK_Pos           (7UL)
 #define R_USB_HS0_DCPCFG_SHTNAK_Msk           (0x80UL)
 #define R_USB_HS0_DCPCFG_DIR_Pos              (4UL)
 #define R_USB_HS0_DCPCFG_DIR_Msk              (0x10UL)
/* ========================================================  DCPMAXP  ======================================================== */
 #define R_USB_HS0_DCPMAXP_DEVSEL_Pos          (12UL)
 #define R_USB_HS0_DCPMAXP_DEVSEL_Msk          (0xf000UL)
 #define R_USB_HS0_DCPMAXP_MXPS_Pos            (0UL)
 #define R_USB_HS0_DCPMAXP_MXPS_Msk            (0x7fUL)
/* ========================================================  DCPCTR  ========================================================= */
 #define R_USB_HS0_DCPCTR_BSTS_Pos             (15UL)
 #define R_USB_HS0_DCPCTR_BSTS_Msk             (0x8000UL)
 #define R_USB_HS0_DCPCTR_SUREQ_Pos            (14UL)
 #define R_USB_HS0_DCPCTR_SUREQ_Msk            (0x4000UL)
 #define R_USB_HS0_DCPCTR_CSCLR_Pos            (13UL)
 #define R_USB_HS0_DCPCTR_CSCLR_Msk            (0x2000UL)
 #define R_USB_HS0_DCPCTR_CSSTS_Pos            (12UL)
 #define R_USB_HS0_DCPCTR_CSSTS_Msk            (0x1000UL)
 #define R_USB_HS0_DCPCTR_SUREQCLR_Pos         (11UL)
 #define R_USB_HS0_DCPCTR_SUREQCLR_Msk         (0x800UL)
 #define R_USB_HS0_DCPCTR_SQCLR_Pos            (8UL)
 #define R_USB_HS0_DCPCTR_SQCLR_Msk            (0x100UL)
 #define R_USB_HS0_DCPCTR_SQSET_Pos            (7UL)
 #define R_USB_HS0_DCPCTR_SQSET_Msk            (0x80UL)
 #define R_USB_HS0_DCPCTR_SQMON_Pos            (6UL)
 #define R_USB_HS0_DCPCTR_SQMON_Msk            (0x40UL)
 #define R_USB_HS0_DCPCTR_PBUSY_Pos            (5UL)
 #define R_USB_HS0_DCPCTR_PBUSY_Msk            (0x20UL)
 #define R_USB_HS0_DCPCTR_PINGE_Pos            (4UL)
 #define R_USB_HS0_DCPCTR_PINGE_Msk            (0x10UL)
 #define R_USB_HS0_DCPCTR_CCPL_Pos             (2UL)
 #define R_USB_HS0_DCPCTR_CCPL_Msk             (0x4UL)
 #define R_USB_HS0_DCPCTR_PID_Pos              (0UL)
 #define R_USB_HS0_DCPCTR_PID_Msk              (0x3UL)
/* ========================================================  PIPESEL  ======================================================== */
/* ========================================================  PIPECFG  ======================================================== */
 #define R_USB_HS0_PIPECFG_TYPE_Pos            (14UL)
 #define R_USB_HS0_PIPECFG_TYPE_Msk            (0xc000UL)
 #define R_USB_HS0_PIPECFG_BFRE_Pos            (10UL)
 #define R_USB_HS0_PIPECFG_BFRE_Msk            (0x400UL)
 #define R_USB_HS0_PIPECFG_DBLB_Pos            (9UL)
 #define R_USB_HS0_PIPECFG_DBLB_Msk            (0x200UL)
 #define R_USB_HS0_PIPECFG_CNTMD_Pos           (8UL)
 #define R_USB_HS0_PIPECFG_CNTMD_Msk           (0x100UL)
 #define R_USB_HS0_PIPECFG_SHTNAK_Pos          (7UL)
 #define R_USB_HS0_PIPECFG_SHTNAK_Msk          (0x80UL)
 #define R_USB_HS0_PIPECFG_DIR_Pos             (4UL)
 #define R_USB_HS0_PIPECFG_DIR_Msk             (0x10UL)
 #define R_USB_HS0_PIPECFG_EPNUM_Pos           (0UL)
 #define R_USB_HS0_PIPECFG_EPNUM_Msk           (0xfUL)
/* ========================================================  PIPEBUF  ======================================================== */
 #define R_USB_HS0_PIPEBUF_BUFSIZE_Pos         (10UL)
 #define R_USB_HS0_PIPEBUF_BUFSIZE_Msk         (0x7c00UL)
 #define R_USB_HS0_PIPEBUF_BUFNMB_Pos          (0UL)
 #define R_USB_HS0_PIPEBUF_BUFNMB_Msk          (0xffUL)
/* =======================================================  PIPEMAXP  ======================================================== */
 #define R_USB_HS0_PIPEMAXP_DEVSEL_Pos         (12UL)
 #define R_USB_HS0_PIPEMAXP_DEVSEL_Msk         (0xf000UL)
 #define R_USB_HS0_PIPEMAXP_MXPS_Pos           (0UL)
 #define R_USB_HS0_PIPEMAXP_MXPS_Msk           (0x7ffUL)
/* =======================================================  PIPEPERI  ======================================================== */
 #define R_USB_HS0_PIPEPERI_IFIS_Pos           (12UL)
 #define R_USB_HS0_PIPEPERI_IFIS_Msk           (0x1000UL)
 #define R_USB_HS0_PIPEPERI_IITV_Pos           (0UL)
 #define R_USB_HS0_PIPEPERI_IITV_Msk           (0x7UL)
/* =======================================================  PIPE_CTR  ======================================================== */
 #define R_USB_HS0_PIPE_CTR_BSTS_Pos           (15UL)
 #define R_USB_HS0_PIPE_CTR_BSTS_Msk           (0x8000UL)
 #define R_USB_HS0_PIPE_CTR_INBUFM_Pos         (14UL)
 #define R_USB_HS0_PIPE_CTR_INBUFM_Msk         (0x4000UL)
 #define R_USB_HS0_PIPE_CTR_CSCLR_Pos          (13UL)
 #define R_USB_HS0_PIPE_CTR_CSCLR_Msk          (0x2000UL)
 #define R_USB_HS0_PIPE_CTR_CSSTS_Pos          (12UL)
 #define R_USB_HS0_PIPE_CTR_CSSTS_Msk          (0x1000UL)
 #define R_USB_HS0_PIPE_CTR_ATREPM_Pos         (10UL)
 #define R_USB_HS0_PIPE_CTR_ATREPM_Msk         (0x400UL)
 #define R_USB_HS0_PIPE_CTR_ACLRM_Pos          (9UL)
 #define R_USB_HS0_PIPE_CTR_ACLRM_Msk          (0x200UL)
 #define R_USB_HS0_PIPE_CTR_SQCLR_Pos          (8UL)
 #define R_USB_HS0_PIPE_CTR_SQCLR_Msk          (0x100UL)
 #define R_USB_HS0_PIPE_CTR_SQSET_Pos          (7UL)
 #define R_USB_HS0_PIPE_CTR_SQSET_Msk          (0x80UL)
 #define R_USB_HS0_PIPE_CTR_SQMON_Pos          (6UL)
 #define R_USB_HS0_PIPE_CTR_SQMON_Msk          (0x40UL)
 #define R_USB_HS0_PIPE_CTR_PBUSY_Pos          (5UL)
 #define R_USB_HS0_PIPE_CTR_PBUSY_Msk          (0x20UL)
 #define R_USB_HS0_PIPE_CTR_PID_Pos            (0UL)
 #define R_USB_HS0_PIPE_CTR_PID_Msk            (0x3UL)
/* ========================================================  DEVADD  ========================================================= */
 #define R_USB_HS0_DEVADD_UPPHUB_Pos           (11UL)
 #define R_USB_HS0_DEVADD_UPPHUB_Msk           (0x7800UL)
 #define R_USB_HS0_DEVADD_HUBPORT_Pos          (8UL)
 #define R_USB_HS0_DEVADD_HUBPORT_Msk          (0x700UL)
 #define R_USB_HS0_DEVADD_USBSPD_Pos           (6UL)
 #define R_USB_HS0_DEVADD_USBSPD_Msk           (0xc0UL)
/* ========================================================  LPCTRL  ========================================================= */
 #define R_USB_HS0_LPCTRL_HWUPM_Pos            (7UL)
 #define R_USB_HS0_LPCTRL_HWUPM_Msk            (0x80UL)
/* =========================================================  LPSTS  ========================================================= */
 #define R_USB_HS0_LPSTS_SUSPENDM_Pos          (14UL)
 #define R_USB_HS0_LPSTS_SUSPENDM_Msk          (0x4000UL)
/* ========================================================  BCCTRL  ========================================================= */
 #define R_USB_HS0_BCCTRL_PDDETSTS_Pos         (9UL)
 #define R_USB_HS0_BCCTRL_PDDETSTS_Msk         (0x200UL)
 #define R_USB_HS0_BCCTRL_CHGDETSTS_Pos        (8UL)
 #define R_USB_HS0_BCCTRL_CHGDETSTS_Msk        (0x100UL)
 #define R_USB_HS0_BCCTRL_DCPMODE_Pos          (5UL)
 #define R_USB_HS0_BCCTRL_DCPMODE_Msk          (0x20UL)
 #define R_USB_HS0_BCCTRL_VDMSRCE_Pos          (4UL)
 #define R_USB_HS0_BCCTRL_VDMSRCE_Msk          (0x10UL)
 #define R_USB_HS0_BCCTRL_IDPSINKE_Pos         (3UL)
 #define R_USB_HS0_BCCTRL_IDPSINKE_Msk         (0x8UL)
 #define R_USB_HS0_BCCTRL_VDPSRCE_Pos          (2UL)
 #define R_USB_HS0_BCCTRL_VDPSRCE_Msk          (0x4UL)
 #define R_USB_HS0_BCCTRL_IDMSINKE_Pos         (1UL)
 #define R_USB_HS0_BCCTRL_IDMSINKE_Msk         (0x2UL)
 #define R_USB_HS0_BCCTRL_IDPSRCE_Pos          (0UL)
 #define R_USB_HS0_BCCTRL_IDPSRCE_Msk          (0x1UL)
/* =======================================================  PL1CTRL1  ======================================================== */
 #define R_USB_HS0_PL1CTRL1_L1EXTMD_Pos        (14UL)
 #define R_USB_HS0_PL1CTRL1_L1EXTMD_Msk        (0x4000UL)
 #define R_USB_HS0_PL1CTRL1_HIRDTHR_Pos        (8UL)
 #define R_USB_HS0_PL1CTRL1_HIRDTHR_Msk        (0xf00UL)
 #define R_USB_HS0_PL1CTRL1_DVSQ_Pos           (4UL)
 #define R_USB_HS0_PL1CTRL1_DVSQ_Msk           (0xf0UL)
 #define R_USB_HS0_PL1CTRL1_L1NEGOMD_Pos       (3UL)
 #define R_USB_HS0_PL1CTRL1_L1NEGOMD_Msk       (0x8UL)
 #define R_USB_HS0_PL1CTRL1_L1RESPMD_Pos       (1UL)
 #define R_USB_HS0_PL1CTRL1_L1RESPMD_Msk       (0x6UL)
 #define R_USB_HS0_PL1CTRL1_L1RESPEN_Pos       (0UL)
 #define R_USB_HS0_PL1CTRL1_L1RESPEN_Msk       (0x1UL)
/* =======================================================  PL1CTRL2  ======================================================== */
 #define R_USB_HS0_PL1CTRL2_RWEMON_Pos         (12UL)
 #define R_USB_HS0_PL1CTRL2_RWEMON_Msk         (0x1000UL)
 #define R_USB_HS0_PL1CTRL2_HIRDMON_Pos        (8UL)
 #define R_USB_HS0_PL1CTRL2_HIRDMON_Msk        (0xf00UL)
/* =======================================================  HL1CTRL1  ======================================================== */
 #define R_USB_HS0_HL1CTRL1_L1STATUS_Pos       (1UL)
 #define R_USB_HS0_HL1CTRL1_L1STATUS_Msk       (0x6UL)
 #define R_USB_HS0_HL1CTRL1_L1REQ_Pos          (0UL)
 #define R_USB_HS0_HL1CTRL1_L1REQ_Msk          (0x1UL)
/* =======================================================  HL1CTRL2  ======================================================== */
 #define R_USB_HS0_HL1CTRL2_BESL_Pos           (15UL)
 #define R_USB_HS0_HL1CTRL2_BESL_Msk           (0x8000UL)
 #define R_USB_HS0_HL1CTRL2_L1RWE_Pos          (12UL)
 #define R_USB_HS0_HL1CTRL2_L1RWE_Msk          (0x1000UL)
 #define R_USB_HS0_HL1CTRL2_HIRD_Pos           (8UL)
 #define R_USB_HS0_HL1CTRL2_HIRD_Msk           (0xf00UL)
 #define R_USB_HS0_HL1CTRL2_L1ADDR_Pos         (0UL)
 #define R_USB_HS0_HL1CTRL2_L1ADDR_Msk         (0xfUL)
/* =======================================================  PHYTRIM1  ======================================================== */
 #define R_USB_HS0_PHYTRIM1_IMPOFFSET_Pos      (12UL)
 #define R_USB_HS0_PHYTRIM1_IMPOFFSET_Msk      (0x7000UL)
 #define R_USB_HS0_PHYTRIM1_HSIUP_Pos          (8UL)
 #define R_USB_HS0_PHYTRIM1_HSIUP_Msk          (0xf00UL)
 #define R_USB_HS0_PHYTRIM1_PCOMPENB_Pos       (7UL)
 #define R_USB_HS0_PHYTRIM1_PCOMPENB_Msk       (0x80UL)
 #define R_USB_HS0_PHYTRIM1_DFALL_Pos          (2UL)
 #define R_USB_HS0_PHYTRIM1_DFALL_Msk          (0xcUL)
 #define R_USB_HS0_PHYTRIM1_DRISE_Pos          (0UL)
 #define R_USB_HS0_PHYTRIM1_DRISE_Msk          (0x3UL)
/* =======================================================  PHYTRIM2  ======================================================== */
 #define R_USB_HS0_PHYTRIM2_DIS_Pos            (12UL)
 #define R_USB_HS0_PHYTRIM2_DIS_Msk            (0x7000UL)
 #define R_USB_HS0_PHYTRIM2_PDR_Pos            (8UL)
 #define R_USB_HS0_PHYTRIM2_PDR_Msk            (0x300UL)
 #define R_USB_HS0_PHYTRIM2_HSRXENMO_Pos       (7UL)
 #define R_USB_HS0_PHYTRIM2_HSRXENMO_Msk       (0x80UL)
 #define R_USB_HS0_PHYTRIM2_SQU_Pos            (0UL)
 #define R_USB_HS0_PHYTRIM2_SQU_Msk            (0xfUL)
/* ========================================================  DPUSR0R  ======================================================== */
 #define R_USB_HS0_DPUSR0R_DVBSTSHM_Pos        (23UL)
 #define R_USB_HS0_DPUSR0R_DVBSTSHM_Msk        (0x800000UL)
 #define R_USB_HS0_DPUSR0R_DOVCBHM_Pos         (21UL)
 #define R_USB_HS0_DPUSR0R_DOVCBHM_Msk         (0x200000UL)
 #define R_USB_HS0_DPUSR0R_DOVCAHM_Pos         (20UL)
 #define R_USB_HS0_DPUSR0R_DOVCAHM_Msk         (0x100000UL)
/* ========================================================  DPUSR1R  ======================================================== */
 #define R_USB_HS0_DPUSR1R_DVBSTSH_Pos         (23UL)
 #define R_USB_HS0_DPUSR1R_DVBSTSH_Msk         (0x800000UL)
 #define R_USB_HS0_DPUSR1R_DOVCBH_Pos          (21UL)
 #define R_USB_HS0_DPUSR1R_DOVCBH_Msk          (0x200000UL)
 #define R_USB_HS0_DPUSR1R_DOVCAH_Pos          (20UL)
 #define R_USB_HS0_DPUSR1R_DOVCAH_Msk          (0x100000UL)
 #define R_USB_HS0_DPUSR1R_DVBSTSHE_Pos        (7UL)
 #define R_USB_HS0_DPUSR1R_DVBSTSHE_Msk        (0x80UL)
 #define R_USB_HS0_DPUSR1R_DOVCBHE_Pos         (5UL)
 #define R_USB_HS0_DPUSR1R_DOVCBHE_Msk         (0x20UL)
 #define R_USB_HS0_DPUSR1R_DOVCAHE_Pos         (4UL)
 #define R_USB_HS0_DPUSR1R_DOVCAHE_Msk         (0x10UL)
/* ========================================================  DPUSR2R  ======================================================== */
 #define R_USB_HS0_DPUSR2R_DMINTE_Pos          (9UL)
 #define R_USB_HS0_DPUSR2R_DMINTE_Msk          (0x200UL)
 #define R_USB_HS0_DPUSR2R_DPINTE_Pos          (8UL)
 #define R_USB_HS0_DPUSR2R_DPINTE_Msk          (0x100UL)
 #define R_USB_HS0_DPUSR2R_DMVAL_Pos           (5UL)
 #define R_USB_HS0_DPUSR2R_DMVAL_Msk           (0x20UL)
 #define R_USB_HS0_DPUSR2R_DPVAL_Pos           (4UL)
 #define R_USB_HS0_DPUSR2R_DPVAL_Msk           (0x10UL)
 #define R_USB_HS0_DPUSR2R_DMINT_Pos           (1UL)
 #define R_USB_HS0_DPUSR2R_DMINT_Msk           (0x2UL)
 #define R_USB_HS0_DPUSR2R_DPINT_Pos           (0UL)
 #define R_USB_HS0_DPUSR2R_DPINT_Msk           (0x1UL)
/* ========================================================  DPUSRCR  ======================================================== */
 #define R_USB_HS0_DPUSRCR_FIXPHYPD_Pos        (1UL)
 #define R_USB_HS0_DPUSRCR_FIXPHYPD_Msk        (0x2UL)
 #define R_USB_HS0_DPUSRCR_FIXPHY_Pos          (0UL)
 #define R_USB_HS0_DPUSRCR_FIXPHY_Msk          (0x1UL)

/* =========================================================================================================================== */
/* ================                                          R_AGTX0                                          ================ */
/* =========================================================================================================================== */

/** @} */ /* End of group PosMask_peripherals */

 #ifdef __cplusplus
}
 #endif

#endif                                 /* R7FA6M1AD_H */

/** @} */ /* End of group R7FA6M1AD */

/** @} */ /* End of group Renesas */
