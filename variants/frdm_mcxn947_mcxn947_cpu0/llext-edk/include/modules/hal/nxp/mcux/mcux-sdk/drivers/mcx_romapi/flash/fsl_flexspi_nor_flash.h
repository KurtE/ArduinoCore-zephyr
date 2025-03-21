/*
 * Copyright 2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef FSL_FLEXSPI_NOR_FLASH_H__
#define FSL_FLEXSPI_NOR_FLASH_H__

#include "fsl_common.h"
/*!
 * @addtogroup flexspi_nor_flash_driver
 * @{
 */

/*! @file */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define FLEXSPI_FEATURE_HAS_PARALLEL_MODE 0

#define FSL_ROM_FLEXSPI_LUT_SEQ(cmd0, pad0, op0, cmd1, pad1, op1)                                                      \
    (FLEXSPI_LUT_OPERAND0(op0) | FLEXSPI_LUT_NUM_PADS0(pad0) | FLEXSPI_LUT_OPCODE0(cmd0) | FLEXSPI_LUT_OPERAND1(op1) | \
     FLEXSPI_LUT_NUM_PADS1(pad1) | FLEXSPI_LUT_OPCODE1(cmd1))

#define CMD_SDR        0x01U
#define CMD_DDR        0x21U
#define RADDR_SDR      0x02U
#define RADDR_DDR      0x22U
#define CADDR_SDR      0x03U
#define CADDR_DDR      0x23U
#define MODE1_SDR      0x04U
#define MODE1_DDR      0x24U
#define MODE2_SDR      0x05U
#define MODE2_DDR      0x25U
#define MODE4_SDR      0x06U
#define MODE4_DDR      0x26U
#define MODE8_SDR      0x07U
#define MODE8_DDR      0x27U
#define WRITE_SDR      0x08U
#define WRITE_DDR      0x28U
#define READ_SDR       0x09U
#define READ_DDR       0x29U
#define LEARN_SDR      0x0AU
#define LEARN_DDR      0x2AU
#define DATSZ_SDR      0x0BU
#define DATSZ_DDR      0x2BU
#define DUMMY_SDR      0x0CU
#define DUMMY_DDR      0x2CU
#define DUMMY_RWDS_SDR 0x0DU
#define DUMMY_RWDS_DDR 0x2DU
#define JMP_ON_CS      0x1FU
#define FLEXSPI_STOP   0U

#define FLEXSPI_1PAD 0U
#define FLEXSPI_2PAD 1U
#define FLEXSPI_4PAD 2U
#define FLEXSPI_8PAD 3U

/*!
 * @brief NOR LUT sequence index used for default LUT assignment
 * NOTE:
 *      The will take effect if the lut sequences are not customized.
 */
#define NOR_CMD_LUT_SEQ_IDX_READ       0U
#define NOR_CMD_LUT_SEQ_IDX_READSTATUS 1U
#define NOR_CMD_LUT_SEQ_IDX_READSTATUS_XPI \
    2U
#define NOR_CMD_LUT_SEQ_IDX_WRITEENABLE 3U
#define NOR_CMD_LUT_SEQ_IDX_WRITEENABLE_XPI \
    4U
#define NOR_CMD_LUT_SEQ_IDX_ERASESECTOR 5U
#define NOR_CMD_LUT_SEQ_IDX_READID      7U
#define NOR_CMD_LUT_SEQ_IDX_ERASEBLOCK  8U
#define NOR_CMD_LUT_SEQ_IDX_PAGEPROGRAM 9U
#define NOR_CMD_LUT_SEQ_IDX_CHIPERASE   11U
#define NOR_CMD_LUT_SEQ_IDX_READ_SFDP   13U
#define NOR_CMD_LUT_SEQ_IDX_RESTORE_NOCMD \
    14U
#define NOR_CMD_LUT_SEQ_IDX_EXIT_NOCMD \
    15U

/*! @brief FLEXSPI status group numbers. */
enum _flexspi_status_groups
{
    kStatusROMGroup_FLEXSPI    = 60,
    kStatusROMGroup_FLEXSPINOR = 201,
};

/*! @brief FLEXSPI NOR status */
enum _flexspi_nor_status
{
    kStatus_FLEXSPINOR_ProgramFail =
        MAKE_STATUS(kStatusROMGroup_FLEXSPINOR, 0),
    kStatus_FLEXSPINOR_EraseSectorFail =
        MAKE_STATUS(kStatusROMGroup_FLEXSPINOR, 1),
    kStatus_FLEXSPINOR_EraseAllFail = MAKE_STATUS(kStatusROMGroup_FLEXSPINOR, 2),
    kStatus_FLEXSPINOR_WaitTimeout  = MAKE_STATUS(kStatusROMGroup_FLEXSPINOR, 3),
    kStatus_FlexSPINOR_NotSupported = MAKE_STATUS(kStatusROMGroup_FLEXSPINOR, 4), // Status for PageSize overflow */
    kStatus_FlexSPINOR_WriteAlignmentError =
        MAKE_STATUS(kStatusROMGroup_FLEXSPINOR, 5),
    kStatus_FlexSPINOR_CommandFailure =
        MAKE_STATUS(kStatusROMGroup_FLEXSPINOR, 6),
    kStatus_FlexSPINOR_SFDP_NotFound = MAKE_STATUS(kStatusROMGroup_FLEXSPINOR, 7),
    kStatus_FLEXSPINOR_Unsupported_SFDP_Version =
        MAKE_STATUS(kStatusROMGroup_FLEXSPINOR, 8),
    kStatus_FLEXSPINOR_Flash_NotFound =
        MAKE_STATUS(kStatusROMGroup_FLEXSPINOR, 9),
    kStatus_FLEXSPINOR_DTRRead_DummyProbeFailed =
        MAKE_STATUS(kStatusROMGroup_FLEXSPINOR, 10),

    kStatus_FLEXSPI_SequenceExecutionTimeout =
        MAKE_STATUS(kStatusROMGroup_FLEXSPI, 0),
    kStatus_FLEXSPI_InvalidSequence = MAKE_STATUS(kStatusROMGroup_FLEXSPI, 1),
    kStatus_FLEXSPI_DeviceTimeout   = MAKE_STATUS(kStatusROMGroup_FLEXSPI, 2),

};

/*! @brief Configure the device_type of "serial_nor_config_option_t" structure */
enum
{
    kSerialNorCfgOption_Tag                         = 0x0cU,
    kSerialNorCfgOption_DeviceType_ReadSFDP_SDR     = 0U,
    kSerialNorCfgOption_DeviceType_ReadSFDP_DDR     = 1U,
    kSerialNorCfgOption_DeviceType_HyperFLASH1V8    = 2U,
    kSerialNorCfgOption_DeviceType_HyperFLASH3V0    = 3U,
    kSerialNorCfgOption_DeviceType_MacronixOctalDDR = 4U,
    kSerialNorCfgOption_DeviceType_MacronixOctalSDR = 5U,
    kSerialNorCfgOption_DeviceType_MicronOctalDDR   = 6U,
    kSerialNorCfgOption_DeviceType_MicronOctalSDR   = 7U,
    kSerialNorCfgOption_DeviceType_AdestoOctalDDR   = 8U,
    kSerialNorCfgOption_DeviceType_AdestoOctalSDR   = 9U,
};

/*! @brief Configure the quad_mode_setting of "serial_nor_config_option_t" structure */
enum
{
    kSerialNorQuadMode_NotConfig            = 0U,
    kSerialNorQuadMode_StatusReg1_Bit6      = 1U,
    kSerialNorQuadMode_StatusReg2_Bit1      = 2U,
    kSerialNorQuadMode_StatusReg2_Bit7      = 3U,
    kSerialNorQuadMode_StatusReg2_Bit1_0x31 = 4U,
};

/*! @brief FLEXSPI NOR Octal mode */
enum
{
    kSerialNorOctaldMode_NoOctalEnableBit  = 0U,
    kSerialNorOctaldMode_HasOctalEnableBit = 1U,
};

/*! @brief miscellaneous mode */
enum
{
    kSerialNorEnhanceMode_Disabled         = 0U,
    kSerialNorEnhanceMode_0_4_4_Mode       = 1U,
    kSerialNorEnhanceMode_0_8_8_Mode       = 2U,
    kSerialNorEnhanceMode_DataOrderSwapped = 3U,
    kSerialNorEnhanceMode_2ndPinMux        = 4U,
    kSerialNorEnhanceMode_InternalLoopback = 5U,
    kSerialNorEnhanceMode_SpiMode          = 6U,
    kSerialNorEnhanceMode_ExtDqs           = 8U,
};

/*! @brief FLEXSPI NOR reset logic options */
enum
{
    kFlashResetLogic_Disabled     = 0U,
    kFlashResetLogic_ResetPin     = 1U,
    kFlashResetLogic_JedecHwReset = 2U,
};

/*! @brief Configure the flash_connection of "serial_nor_config_option_t" structure */
enum
{
    kSerialNorConnection_SinglePortA,
    kSerialNorConnection_Parallel,
    kSerialNorConnection_SinglePortB,
    kSerialNorConnection_BothPorts
};

/*! @brief
 * FLEXSPI ROOT clock soruce related definitions
 */
enum
{
    kFLEXSPIClkSrc_MainClk = 0U,
    kFLEXSPIClkSrc_Pll0    = 1U,
    kFLEXSPIClkSrc_FroHf   = 3U,
    kFLEXSPIClkSrc_Pll1    = 5U,
};

/*! @brief Restore sequence options
 *  Configure the restore_sequence of "flash_run_context_t" structure
 */
enum
{
    kRestoreSequence_None             = 0U,
    kRestoreSequence_HW_Reset         = 1U,
    kRestoreSequence_QPI_4_0xFFs      = 2U,
    kRestoreSequence_QPI_Mode_0x00    = 3U,
    kRestoreSequence_8QPI_FF          = 4U,
    kRestoreSequence_Send_F0          = 5U,
    kRestoreSequence_Send_66_99       = 6U,
    kRestoreSequence_Send_6699_9966   = 7U,
    kRestoreSequence_Send_06_FF       = 8U,
    kRestoreSequence_QPI_5_0xFFs      = 9U,
    kRestoreSequence_Send_QPI_8_0xFFs = 10U,
    kRestoreSequence_Wakeup_0xAB      = 11U,
    kRestoreSequence_Wakeup_0xAB_54   = 12U,
};

/*! @brief Port mode options*/
enum
{
    kFlashInstMode_ExtendedSpi = 0x00U,
    kFlashInstMode_0_4_4_SDR   = 0x01U,
    kFlashInstMode_0_4_4_DDR   = 0x02U,
    kFlashInstMode_DPI_SDR     = 0x21U,
    kFlashInstMode_DPI_DDR     = 0x22U,
    kFlashInstMode_QPI_SDR     = 0x41U,
    kFlashInstMode_QPI_DDR     = 0x42U,
    kFlashInstMode_OPI_SDR     = 0x81U,
    kFlashInstMode_OPI_DDR     = 0x82U,
};

/*!
 * @name Support for init FLEXSPI NOR configuration
 * @{
 */
/*! @brief Flash Pad Definitions */
enum
{
    kSerialFlash_1Pad  = 1U,
    kSerialFlash_2Pads = 2U,
    kSerialFlash_4Pads = 4U,
    kSerialFlash_8Pads = 8U,
};

/*! @brief FLEXSPI clock configuration type */
enum
{
    kFLEXSPIClk_SDR,
    kFLEXSPIClk_DDR,
};

/*! @brief FLEXSPI Read Sample Clock Source definition */
enum _flexspi_read_sample_clk
{
    kFLEXSPIReadSampleClk_LoopbackInternally      = 0U,
    kFLEXSPIReadSampleClk_LoopbackFromDqsPad      = 1U,
    kFLEXSPIReadSampleClk_LoopbackFromSckPad      = 2U,
    kFLEXSPIReadSampleClk_ExternalInputFromDqsPad = 3U,
};

/*! @brief Flash Type Definition */
enum
{
    kFLEXSPIDeviceType_SerialNOR = 1U,
};

/*! @brief Flash Configuration Command Type */
enum
{
    kDeviceConfigCmdType_Generic,
    kDeviceConfigCmdType_QuadEnable,
    kDeviceConfigCmdType_Spi2Xpi,
    kDeviceConfigCmdType_Xpi2Spi,
    kDeviceConfigCmdType_Spi2NoCmd,
    kDeviceConfigCmdType_Reset,
};

/*! @brief Defintions for FLEXSPI Serial Clock Frequency */
enum _flexspi_serial_clk_freq
{
    kFLEXSPISerialClk_NoChange = 0U,
    kFLEXSPISerialClk_30MHz    = 1U,
    kFLEXSPISerialClk_50MHz    = 2U,
    kFLEXSPISerialClk_60MHz    = 3U,
    kFLEXSPISerialClk_75MHz    = 4U,
    kFLEXSPISerialClk_100MHz   = 5U,
};

/*! @brief Misc feature bit definitions */
enum
{
    kFLEXSPIMiscOffset_DiffClkEnable            = 0U,
    kFLEXSPIMiscOffset_Ck2Enable                = 1U,
    kFLEXSPIMiscOffset_ParallelEnable           = 2U,
    kFLEXSPIMiscOffset_WordAddressableEnable    = 3U,
    kFLEXSPIMiscOffset_SafeConfigFreqEnable     = 4U,
    kFLEXSPIMiscOffset_PadSettingOverrideEnable = 5U,
    kFLEXSPIMiscOffset_DdrModeEnable            = 6U,
    kFLEXSPIMiscOffset_UseValidTimeForAllFreq   = 7U,
};

/*! @} */

/*! @brief Manufacturer ID */
enum
{
    kSerialFlash_ISSI_ManufacturerID    = 0x9DU,
    kSerialFlash_Adesto_ManufacturerID  = 0x1FU,
    kSerialFlash_Winbond_ManufacturerID = 0xEFU,
    kSerialFlash_Cypress_ManufacturerID = 0x01U,
};

/*! @brief
 * Serial NOR configuration option
 */
typedef struct _serial_nor_config_option
{
    union
    {
        struct
        {
            uint32_t max_freq : 4;
            uint32_t misc_mode : 4;
            uint32_t quad_mode_setting : 4;
            uint32_t cmd_pads : 4;
            uint32_t query_pads : 4;
            uint32_t device_type : 4;
            uint32_t option_size : 4;
            uint32_t tag : 4;
        } B;
        uint32_t U;
    } option0;

    union
    {
        struct
        {
            uint32_t dummy_cycles : 8;
            uint32_t status_override : 8;
            uint32_t pinmux_group : 4;
            uint32_t dqs_pinmux_group : 4;
            uint32_t drive_strength : 4;
            uint32_t flash_connection : 4;
                                           /*!< Parallel mode, 2 - Single Flash connected to Port B */
        } B;
        uint32_t U;
    } option1;

} serial_nor_config_option_t;

typedef union
{
    struct
    {
        uint8_t por_mode;
        uint8_t current_mode;
        uint8_t exit_no_cmd_sequence;
        uint8_t restore_sequence;
    } B;
    uint32_t U;
} flash_run_context_t;

/*! @brief
 * FLEXSPI LUT Sequence structure
 */
typedef struct _lut_sequence
{
    uint8_t seqNum;
    uint8_t seqId;
    uint16_t reserved;
} flexspi_lut_seq_t;

typedef struct
{
    uint8_t time_100ps;
    uint8_t delay_cells;
} flexspi_dll_time_t;

/*! @brief
 * FLEXSPI Memory Configuration Block
 */
typedef struct _FlexSPIConfig
{
    uint32_t tag;
    uint32_t version;
    uint32_t reserved0;
    uint8_t readSampleClkSrc;
    uint8_t csHoldTime;
    uint8_t csSetupTime;
    uint8_t columnAddressWidth;  /*!< [0x00f-0x00f] Column Address with, for HyperBus protocol, it is fixed to 3, For
                                    Serial NAND, need to refer to datasheet */
    uint8_t deviceModeCfgEnable;
    uint8_t deviceModeType; /*!< [0x011-0x011] Specify the configuration command type:Quad Enable, DPI/QPI/OPI switch,
                               Generic configuration, etc. */
    uint16_t waitTimeCfgCommands;    /*!< [0x012-0x013] Wait time for all configuration commands, unit: 100us, Used for
                                        DPI/QPI/OPI switch or reset command */
    flexspi_lut_seq_t deviceModeSeq; /*!< [0x014-0x017] Device mode sequence info, [7:0] - LUT sequence id, [15:8] - LUt
                                        sequence number, [31:16] Reserved */
    uint32_t deviceModeArg;
    uint8_t configCmdEnable;
    uint8_t configModeType[3];
    flexspi_lut_seq_t
        configCmdSeqs[3];
    uint32_t reserved1;
    uint32_t configCmdArgs[3];
    uint32_t reserved2;
    uint32_t controllerMiscOption; /*!< [0x040-0x043] Controller Misc Options, see Misc feature bit definitions for more
                                      details */
    uint8_t deviceType;
    uint8_t sflashPadType;
    uint8_t serialClkFreq;      /*!< [0x046-0x046] Serial Flash Frequencey, device specific definitions, See System Boot
                                   Chapter for more details */
    uint8_t lutCustomSeqEnable; /*!< [0x047-0x047] LUT customization Enable, it is required if the program/erase cannot
                                   be done using 1 LUT sequence, currently, only applicable to HyperFLASH */
    uint32_t reserved3[2];
    uint32_t sflashA1Size;
    uint32_t sflashA2Size;
    uint32_t sflashB1Size;
    uint32_t sflashB2Size;
    uint32_t csPadSettingOverride;
    uint32_t sclkPadSettingOverride;
    uint32_t dataPadSettingOverride;
    uint32_t dqsPadSettingOverride;
    uint32_t timeoutInMs;
    uint32_t commandInterval;
    flexspi_dll_time_t dataValidTime[2];
    uint16_t busyOffset;
    uint16_t busyBitPolarity; /*!< [0x07e-0x07f] Busy flag polarity, 0 - busy flag is 1 when flash device is busy, 1 -
                                 busy flag is 0 when flash device is busy */
    uint32_t lookupTable[64];
    flexspi_lut_seq_t lutCustomSeq[12];
    uint32_t dll0CrVal;                 //!> [0x1b0-0x1b3] Customizable DLL0CR setting */
    uint32_t dll1CrVal;                 //!> [0x1b4-0x1b7] Customizable DLL1CR setting */
    uint32_t reserved4[2];
} flexspi_mem_config_t;

/*! @brief
 *  Serial NOR configuration block
 */
typedef struct _flexspi_nor_config
{
    flexspi_mem_config_t memConfig;
    uint32_t pageSize;
    uint32_t sectorSize;
    uint8_t ipcmdSerialClkFreq;
    uint8_t isUniformBlockSize;
    uint8_t isDataOrderSwapped;
    uint8_t reserved0[1];
    uint8_t serialNorType;
    uint8_t needExitNoCmdMode;
    uint8_t halfClkForNonReadCmd;
    uint8_t needRestoreNoCmdMode;
    uint32_t blockSize;
    uint32_t flashStateCtx;
    uint32_t reserve2[10];
} flexspi_nor_config_t;

typedef enum _flexspi_operation
{
    kFLEXSPIOperation_Command,
    kFLEXSPIOperation_Config,
    kFLEXSPIOperation_Write,
    kFLEXSPIOperation_Read,
    kFLEXSPIOperation_End = kFLEXSPIOperation_Read,
} flexspi_operation_t;

/*! @brief FLEXSPI Transfer Context */
typedef struct _flexspi_xfer
{
    flexspi_operation_t operation;
    uint32_t baseAddress;
    uint32_t seqId;
    uint32_t seqNum;
    bool isParallelModeEnable;
    uint32_t *txBuffer;
    uint32_t txSize;
    uint32_t *rxBuffer;
    uint32_t rxSize;
} flexspi_xfer_t;

/*! @brief
 * FLEXSPI Clock Type
 */
typedef enum
{
    kFlexSpiClock_CoreClock,
    kFlexSpiClock_AhbClock,
    kFlexSpiClock_SerialRootClock,
    kFlexSpiClock_IpgClock,
} flexspi_clock_type_t;

#ifdef __cplusplus
extern "C" {
#endif

uint32_t FLEXSPI_NorFlash_GetVersion(void);
/*!
 * @brief Initialize Serial NOR devices via FLEXSPI
 *
 * This function checks and initializes the FLEXSPI module for the other FLEXSPI APIs.
 *
 * @param instance storage the instance of FLEXSPI.
 * @param config A pointer to the storage for the driver runtime state.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_FLEXSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_FLEXSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_FLEXSPI_DeviceTimeout the device timeout
 */
status_t FLEXSPI_NorFlash_Init(uint32_t instance, flexspi_nor_config_t *config);

/*!
 * @brief Program data to Serial NOR via FLEXSPI.
 *
 * This function programs the NOR flash memory with the dest address for a given
 * flash area as determined by the dst address and the length.
 *
 * @param instance storage the instance of FLEXSPI.
 * @param config  A pointer to the storage for the driver runtime state.
 * @param dst_addr A pointer to the desired flash memory to be programmed.
 *                NOTE:
 *                It is recommended that use page aligned access;
 *                If the dst_addr is not aligned to page,the driver automatically
 *                aligns address down with the page address.
 * @param src A pointer to the source buffer of data that is to be programmed
 *            into the NOR flash.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_FLEXSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_FLEXSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_FLEXSPI_DeviceTimeout the device timeout
 */
status_t FLEXSPI_NorFlash_ProgramPage(uint32_t instance,
                                      flexspi_nor_config_t *config,
                                      uint32_t dstAddr,
                                      const uint32_t *src);

/*!
 * @brief Erase all the Serial NOR devices connected on FLEXSPI.
 *
 * @param instance storage the instance of FLEXSPI.
 * @param config A pointer to the storage for the driver runtime state.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_FLEXSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_FLEXSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_FLEXSPI_DeviceTimeout the device timeout
 */
status_t FLEXSPI_NorFlash_EraseAll(uint32_t instance, flexspi_nor_config_t *config);

/*!
 * @brief Erase one sector specified by address
 *
 * This function erases one of NOR flash sectors based on the desired address.
 *
 * @param instance storage the index of FLEXSPI.
 * @param config A pointer to the storage for the driver runtime state.
 * @param address The start address of the desired NOR flash memory to be erased.
 *                NOTE:
 *                It is recommended that use sector-aligned access nor device;
 *                If dstAddr is not aligned with the sector,The driver automatically
 *                aligns address down with the sector address.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_FLEXSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_FLEXSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_FLEXSPI_DeviceTimeout the device timeout
 */
status_t FLEXSPI_NorFlash_EraseSector(uint32_t instance, flexspi_nor_config_t *config, uint32_t address);

/*!
 * @brief Erase one block specified by address
 *
 * This function erases one block of NOR flash based on the desired address.
 *
 * @param instance storage the index of FLEXSPI.
 * @param config A pointer to the storage for the driver runtime state.
 * @param start The start address of the desired NOR flash memory to be erased.
 *              NOTE:
 *              It is recommended that use block-aligned access nor device;
 *              If dstAddr is not aligned with the block,The driver automatically
 *              aligns address down with the block address.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_FLEXSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_FLEXSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_FLEXSPI_DeviceTimeout the device timeout
 */
status_t FLEXSPI_NorFlash_EraseBlock(uint32_t instance, flexspi_nor_config_t *config, uint32_t address);

/*!
 * @brief Get FLEXSPI NOR Configuration Block based on specified option.
 *
 * @param instance storage the instance of FLEXSPI.
 * @param config A pointer to the storage for the driver runtime state.
 * @param option A pointer to the storage Serial NOR Configuration Option Context.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_FLEXSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_FLEXSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_FLEXSPI_DeviceTimeout the device timeout
 */
status_t FLEXSPI_NorFlash_GetConfig(uint32_t instance,
                                    flexspi_nor_config_t *config,
                                    serial_nor_config_option_t *option);

/*!
 * @brief Erase Flash Region specified by address and length
 *
 * This function erases the appropriate number of flash sectors based on the
 * desired start address and length.
 *
 * @param instance storage the index of FLEXSPI.
 * @param config A pointer to the storage for the driver runtime state.
 * @param start The start address of the desired NOR flash memory to be erased.
 *              NOTE:
 *              It is recommended that use sector-aligned access nor device;
 *              If dstAddr is not aligned with the sector,the driver automatically
 *              aligns address down with the sector address.
 * @param length The length, given in bytes to be erased.
 *              NOTE:
 *              It is recommended that use sector-aligned access nor device;
 *              If length is not aligned with the sector,the driver automatically
 *              aligns up with the sector.
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_FLEXSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_FLEXSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_FLEXSPI_DeviceTimeout the device timeout
 */
status_t FLEXSPI_NorFlash_Erase(uint32_t instance, flexspi_nor_config_t *config, uint32_t start, uint32_t length);

/*!
 * @brief Read data from Serial NOR via FLEXSPI.
 *
 * This function read the NOR flash memory with the start address for a given
 * flash area as determined by the dst address and the length.
 *
 * @param instance storage the instance of FLEXSPI.
 * @param config  A pointer to the storage for the driver runtime state.
 * @param dst     A pointer to the dest buffer of data that is to be read from the NOR flash.
 *                NOTE:
 *                It is recommended that use page aligned access;
 *                If the dstAddr is not aligned to page,the driver automatically
 *                aligns address down with the page address.
 * @param start   The start address of the desired NOR flash memory to be read.
 * @param lengthInBytes The length, given in bytes to be read.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 * @retval #kStatus_FLEXSPI_InvalidSequence A invalid Sequence is provided.
 * @retval #kStatus_FLEXSPI_SequenceExecutionTimeout Sequence Execution timeout.
 * @retval #kStatus_FLEXSPI_DeviceTimeout the device timeout
 */
status_t FLEXSPI_NorFlash_Read(
    uint32_t instance, flexspi_nor_config_t *config, uint32_t *dst, uint32_t start, uint32_t bytes);

/*!
 * @brief FLEXSPI command
 *
 * This function is used to perform the command write sequence to the NOR device.
 *
 * @param instance storage the index of FLEXSPI.
 * @param xfer A pointer to the storage FLEXSPI Transfer Context.
 *
 * @retval kStatus_Success Api was executed succesfuly.
 * @retval kStatus_InvalidArgument A invalid argument is provided.
 * @retval kStatus_ROM_FLEXSPI_InvalidSequence A invalid Sequence is provided.
 * @retval kStatus_ROM_FLEXSPI_SequenceExecutionTimeout Sequence Execution timeout.
 */
status_t FLEXSPI_NorFlash_CommandXfer(uint32_t instance, flexspi_xfer_t *xfer);

/*!
 * @brief Configure FLEXSPI Lookup table
 *
 * @param instance storage the index of FLEXSPI.
 * @param seqIndex storage the sequence Id.
 * @param lutBase A pointer to the look-up-table for command sequences.
 * @param seqNumber storage sequence number.
 *
 * @retval kStatus_Success Api was executed succesfuly.
 * @retval kStatus_InvalidArgument A invalid argument is provided.
 * @retval kStatus_ROM_FLEXSPI_InvalidSequence A invalid Sequence is provided.
 * @retval kStatus_ROM_FLEXSPI_SequenceExecutionTimeout Sequence Execution timeout.
 */
status_t FLEXSPI_NorFlash_UpdateLut(uint32_t instance, uint32_t seqIndex, const uint32_t *lutBase, uint32_t seqNumber);

/*!
 * @brief Set the clock source for FLEXSPI NOR
 *
 * @param clockSource Clock source for FLEXSPI NOR. See to "_flexspi_nor_clock_source".
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 */
status_t FLEXSPI_NorFlash_SetClockSource(uint32_t clockSource);

/*!
 * @brief Configure the FlexSPI clock.
 *
 *The API is used for configuring the FlexSPI clock.
 *
 * @param instance storage the index of FLEXSPI.
 * @param freqOption storage FlexSPIFlexSPI flash serial clock frequency.
 * @param sampleClkMode storage the FlexSPI clock configuration type.
 *
 * @retval #kStatus_Success Api was executed succesfuly.
 * @retval #kStatus_InvalidArgument A invalid argument is provided.
 */
void FLEXSPI_NorFlash_ConfigClock(uint32_t instance, uint32_t freqOption, uint32_t sampleClkMode);

#ifdef __cplusplus
}
#endif

#endif /*! FSL_FLEXSPI_NOR_FLASH_H__ */
