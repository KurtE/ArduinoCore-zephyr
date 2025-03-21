/*
 * Copyright (c) 2023 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_DISK_EMMC_HOST_H_
#define ZEPHYR_DRIVERS_DISK_EMMC_HOST_H_

/* Bit map for command Register */
#define EMMC_HOST_CMD_RESP_TYPE_LOC    0
#define EMMC_HOST_CMD_CRC_CHECK_EN_LOC 3
#define EMMC_HOST_CMD_IDX_CHECK_EN_LOC 4
#define EMMC_HOST_CMD_DATA_PRESENT_LOC 5
#define EMMC_HOST_CMD_TYPE_LOC         6
#define EMMC_HOST_CMD_INDEX_LOC        8

/* Bit map for Transfer Mode Register */
#define EMMC_HOST_XFER_DMA_EN_LOC          0
#define EMMC_HOST_XFER_BLOCK_CNT_EN_LOC    1
#define EMMC_HOST_XFER_AUTO_CMD_EN_LOC     2
#define EMMC_HOST_XFER_DATA_DIR_LOC        4
#define EMMC_HOST_XFER_MULTI_BLOCK_SEL_LOC 5

#define EMMC_HOST_XFER_DMA_EN_MASK          0x01
#define EMMC_HOST_XFER_BLOCK_CNT_EN_MASK    0x01
#define EMMC_HOST_XFER_AUTO_CMD_EN_MASK     0x03
#define EMMC_HOST_XFER_DATA_DIR_MASK        0x01
#define EMMC_HOST_XFER_MULTI_BLOCK_SEL_MASK 0x01

/* Bit map for Block Size and GAP Register */
#define EMMC_HOST_BLOCK_SIZE_LOC    0
#define EMMC_HOST_BLOCK_SIZE_MASK   0xFFF
#define EMMC_HOST_DMA_BUF_SIZE_LOC  12
#define EMMC_HOST_DMA_BUF_SIZE_MASK 0x07
#define EMMC_HOST_BLOCK_GAP_LOC     3
#define EMMC_HOST_BLOCK_GAP_MASK    0x01

#define EMMC_HOST_ADMA_BUFF_ADD_LOC   32
#define EMMC_HOST_ADMA_BUFF_LEN_LOC   16
#define EMMC_HOST_ADMA_BUFF_LINK_NEXT (0x3 << 4)
#define EMMC_HOST_ADMA_BUFF_LINK_LAST (0x2 << 4)
#define EMMC_HOST_ADMA_INTR_EN        BIT(2)
#define EMMC_HOST_ADMA_BUFF_LAST      BIT(1)
#define EMMC_HOST_ADMA_BUFF_VALID     BIT(0)

/* Bit Map and length details for Clock Control Register */
#define EMMC_HOST_CLK_SDCLCK_FREQ_SEL_LOC       8
#define EMMC_HOST_CLK_SDCLCK_FREQ_SEL_UPPER_LOC 6

#define EMMC_HOST_CLK_SDCLCK_FREQ_SEL_MASK       0xFF
#define EMMC_HOST_CLK_SDCLCK_FREQ_SEL_UPPER_MASK 0x03

/* Bit Map for Host Control 1 Register */
#define EMMC_HOST_CTRL1_DAT_WIDTH_LOC     1
#define EMMC_HOST_CTRL1_DMA_SEL_LOC       3
#define EMMC_HOST_CTRL1_EXT_DAT_WIDTH_LOC 5

#define EMMC_HOST_CTRL1_DMA_SEL_MASK       0x03
#define EMMC_HOST_CTRL1_EXT_DAT_WIDTH_MASK 0x01
#define EMMC_HOST_CTRL1_DAT_WIDTH_MASK     0x01

/** Constants Software Reset register */
#define EMMC_HOST_SW_RESET_REG_ALL  BIT(0)
#define EMMC_HOST_SW_RESET_REG_CMD  BIT(1)
#define EMMC_HOST_SW_RESET_REG_DATA BIT(2)

#define EMMC_HOST_RESPONSE_SIZE      4
#define EMMC_HOST_OCR_BUSY_BIT       BIT(31)
#define EMMC_HOST_OCR_CAPACITY_MASK  0x40000000U
#define EMMC_HOST_DUAL_VOLTAGE_RANGE 0x40FF8080U
#define EMMC_HOST_BLOCK_SIZE         512

#define EMMC_HOST_RCA_SHIFT                16
#define EMMC_HOST_EXTCSD_SEC_COUNT         53
#define EMMC_HOST_EXTCSD_GENERIC_CMD6_TIME 62
#define EMMC_HOST_EXTCSD_BUS_WIDTH_ADDR    0xB7
#define EMMC_HOST_EXTCSD_HS_TIMING_ADDR    0xB9
#define EMMC_HOST_BUS_SPEED_HIGHSPEED      1

#define EMMC_HOST_CMD_COMPLETE_RETRY 10000
#define EMMC_HOST_XFR_COMPLETE_RETRY 2000000

#define EMMC_HOST_CMD1_RETRY_TIMEOUT 1000
#define EMMC_HOST_CMD6_TIMEOUT_MULT  10

#define EMMC_HOST_NORMAL_INTR_MASK     0x3f
#define EMMC_HOST_ERROR_INTR_MASK      0x13ff
#define EMMC_HOST_NORMAL_INTR_MASK_CLR 0x60ff

#define EMMC_HOST_POWER_CTRL_SD_BUS_POWER    0x1
#define EMMC_HOST_POWER_CTRL_SD_BUS_VOLT_SEL 0x5

#define EMMC_HOST_UHSMODE_SDR12  0x0
#define EMMC_HOST_UHSMODE_SDR25  0x1
#define EMMC_HOST_UHSMODE_SDR50  0x2
#define EMMC_HOST_UHSMODE_SDR104 0x3
#define EMMC_HOST_UHSMODE_DDR50  0x4
#define EMMC_HOST_UHSMODE_HS400  0x5

#define EMMC_HOST_CTRL2_1P8V_SIG_EN       1
#define EMMC_HOST_CTRL2_1P8V_SIG_LOC      3
#define EMMC_HOST_CTRL2_UHS_MODE_SEL_LOC  0
#define EMMC_HOST_CTRL2_UHS_MODE_SEL_MASK 0x07

/* Event/command status */
#define EMMC_HOST_CMD_COMPLETE   BIT(0)
#define EMMC_HOST_XFER_COMPLETE  BIT(1)
#define EMMC_HOST_BLOCK_GAP_INTR BIT(2)
#define EMMC_HOST_DMA_INTR       BIT(3)
#define EMMC_HOST_BUF_WR_READY   BIT(4)
#define EMMC_HOST_BUF_RD_READY   BIT(5)

#define EMMC_HOST_CMD_TIMEOUT_ERR  BIT(0)
#define EMMC_HOST_CMD_CRC_ERR      BIT(1)
#define EMMC_HOST_CMD_END_BIT_ERR  BIT(2)
#define EMMC_HOST_CMD_IDX_ERR      BIT(3)
#define EMMC_HOST_DATA_TIMEOUT_ERR BIT(4)
#define EMMC_HOST_DATA_CRC_ERR     BIT(5)
#define EMMC_HOST_DATA_END_BIT_ERR BIT(6)
#define EMMC_HOST_CUR_LMT_ERR      BIT(7)
#define EMMC_HOST_DMA_TXFR_ERR     BIT(12)
#define EMMC_HOST_ERR_STATUS       0xFFF

/** PState register bits */
#define EMMC_HOST_PSTATE_CMD_INHIBIT     BIT(0)
#define EMMC_HOST_PSTATE_DAT_INHIBIT     BIT(1)
#define EMMC_HOST_PSTATE_DAT_LINE_ACTIVE BIT(2)

#define EMMC_HOST_PSTATE_WR_DMA_ACTIVE BIT(8)
#define EMMC_HOST_PSTATE_RD_DMA_ACTIVE BIT(9)

#define EMMC_HOST_PSTATE_BUF_READ_EN  BIT(11)
#define EMMC_HOST_PSTATE_BUF_WRITE_EN BIT(10)

#define EMMC_HOST_PSTATE_CARD_INSERTED BIT(16)

#define EMMC_HOST_MAX_TIMEOUT 0xe
#define EMMC_HOST_MSEC_DELAY  1000

/** Constants for Clock Control register */
#define EMMC_HOST_INTERNAL_CLOCK_EN     BIT(0)
#define EMMC_HOST_INTERNAL_CLOCK_STABLE BIT(1)
#define EMMC_HOST_SD_CLOCK_EN           BIT(2)

/** Clock frequency */
#define EMMC_HOST_CLK_FREQ_400K 0.4
#define EMMC_HOST_CLK_FREQ_25M  25
#define EMMC_HOST_CLK_FREQ_50M  50
#define EMMC_HOST_CLK_FREQ_100M 100
#define EMMC_HOST_CLK_FREQ_200M 200

#define EMMC_HOST_TUNING_SUCCESS BIT(7)
#define EMMC_HOST_START_TUNING   BIT(6)

#define EMMC_HOST_VOL_3_3_V_SUPPORT BIT(24)
#define EMMC_HOST_VOL_3_3_V_SELECT  (7 << 1)
#define EMMC_HOST_VOL_3_0_V_SUPPORT BIT(25)
#define EMMC_HOST_VOL_3_0_V_SELECT  (6 << 1)
#define EMMC_HOST_VOL_1_8_V_SUPPORT BIT(26)
#define EMMC_HOST_VOL_1_8_V_SELECT  (5 << 1)

#define EMMC_HOST_CMD_WAIT_TIMEOUT_US    3000
#define EMMC_HOST_CMD_CMPLETE_TIMEOUT_US 9000
#define EMMC_HOST_XFR_CMPLETE_TIMEOUT_US 1000
#define EMMC_HOST_SDMA_BOUNDARY          0x0
#define EMMC_HOST_RCA_ADDRESS            0x2

#define EMMC_HOST_RESP_MASK (0xFF000000U)

#define EMMC_HOST_SET_RESP(resp0, resp1) (resp0 >> 1) | ((resp1 & 1) << 30)

#define SET_BITS(reg, pos, bit_width, val)                                                         \
	reg &= ~(bit_width << pos);                                                                \
	reg |= ((val & bit_width) << pos)

/* get value from certain bit
 */
#define GET_BITS(reg_name, start, width) ((reg_name) & (((1 << (width)) - 1) << (start)))

#define ERR_INTR_STATUS_EVENT(reg_bits) reg_bits << 16

#define ADDRESS_32BIT_MASK 0xFFFFFFFF

struct emmc_reg {
	volatile uint32_t sdma_sysaddr;
	volatile uint16_t block_size;
	volatile uint16_t block_count;
	volatile uint32_t argument;
	volatile uint16_t transfer_mode;
	volatile uint16_t cmd;

	volatile uint32_t resp_01;
	volatile uint16_t resp_2;
	volatile uint16_t resp_3;
	volatile uint16_t resp_4;
	volatile uint16_t resp_5;
	volatile uint16_t resp_6;
	volatile uint16_t resp_7;
	volatile uint32_t data_port;
	volatile uint32_t present_state;
	volatile uint8_t host_ctrl1;
	volatile uint8_t power_ctrl;
	volatile uint8_t block_gap_ctrl;
	volatile uint8_t wake_up_ctrl;
	volatile uint16_t clock_ctrl;
	volatile uint8_t timeout_ctrl;
	volatile uint8_t sw_reset;
	volatile uint16_t normal_int_stat;
	volatile uint16_t err_int_stat;
	volatile uint16_t normal_int_stat_en;
	volatile uint16_t err_int_stat_en;
	volatile uint16_t normal_int_signal_en;
	volatile uint16_t err_int_signal_en;
	volatile uint16_t auto_cmd_err_stat;
	volatile uint16_t host_ctrl2;
	volatile uint64_t capabilities;

	volatile uint64_t max_current_cap;
	volatile uint16_t force_err_autocmd_stat;
	volatile uint16_t force_err_int_stat;
	volatile uint8_t adma_err_stat;
	volatile uint8_t reserved[3];
	volatile uint32_t adma_sys_addr1;
	volatile uint32_t adma_sys_addr2;
	volatile uint16_t preset_val_0;
	volatile uint16_t preset_val_1;
	volatile uint16_t preset_val_2;
	volatile uint16_t preset_val_3;
	volatile uint16_t preset_val_4;
	volatile uint16_t preset_val_5;
	volatile uint16_t preset_val_6;
	volatile uint16_t preset_val_7;
	volatile uint32_t boot_timeout;
	volatile uint16_t preset_val_8;
	volatile uint16_t reserved3;
	volatile uint16_t vendor_reg;
	volatile uint16_t reserved4[56];
	volatile uint32_t reserved5[4];
	volatile uint16_t slot_intr_stat;
	volatile uint16_t host_cntrl_version;
	volatile uint32_t reserved6[64];
	volatile uint32_t cq_ver;
	volatile uint32_t cq_cap;
	volatile uint32_t cq_cfg;
	volatile uint32_t cq_ctrl;
	volatile uint32_t cq_intr_stat;
	volatile uint32_t cq_intr_stat_en;
	volatile uint32_t cq_intr_sig_en;
	volatile uint32_t cq_intr_coalesc;
	volatile uint32_t cq_tdlba;
	volatile uint32_t cq_tdlba_upr;
	volatile uint32_t cq_task_db;
	volatile uint32_t cq_task_db_notify;
	volatile uint32_t cq_dev_qstat;
	volatile uint32_t cq_dev_pend_task;
	volatile uint32_t cq_task_clr;
	volatile uint32_t reserved7;
	volatile uint32_t cq_ssc1;
	volatile uint32_t cq_ssc2;
	volatile uint32_t cq_crdct;
	volatile uint32_t reserved8;
	volatile uint32_t cq_rmem;
	volatile uint32_t cq_terri;
	volatile uint32_t cq_cri;
	volatile uint32_t cq_cra;
	volatile uint32_t reserved9[425];
};

enum emmc_sw_reset {
	EMMC_HOST_SW_RESET_DATA_LINE = 0,
	EMMC_HOST_SW_RESET_CMD_LINE,
	EMMC_HOST_SW_RESET_ALL
};

enum emmc_cmd_type {
	EMMC_HOST_CMD_NORMAL = 0,
	EMMC_HOST_CMD_SUSPEND,
	EMMC_HOST_CMD_RESUME,
	EMMC_HOST_CMD_ABORT,
};

enum emmc_response_type {
	EMMC_HOST_RESP_NONE = 0,
	EMMC_HOST_RESP_LEN_136,
	EMMC_HOST_RESP_LEN_48,
	EMMC_HOST_RESP_LEN_48B,
	EMMC_HOST_INVAL_HOST_RESP_LEN,
};

struct emmc_cmd_config {
	struct sdhc_command *sdhc_cmd;
	uint32_t cmd_idx;
	enum emmc_cmd_type cmd_type;
	bool data_present;
	bool idx_check_en;
	bool crc_check_en;
};

struct resp {
	uint64_t resp_48bit;
};
#endif /* _EMMC_HOST_HC_H_ */
