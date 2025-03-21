/*
 * Copyright (c) 2022 Intel Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __DAI_PARAMS_INTEL_IPC3_H__
#define __DAI_PARAMS_INTEL_IPC3_H__

#include <stdint.h>

#define DAI_INTEL_IPC3_SSP_FMT_I2S	1
#define DAI_INTEL_IPC3_SSP_FMT_RIGHT_J	2
#define DAI_INTEL_IPC3_SSP_FMT_LEFT_J	3
#define DAI_INTEL_IPC3_SSP_FMT_DSP_A	4
#define DAI_INTEL_IPC3_SSP_FMT_DSP_B	5
#define DAI_INTEL_IPC3_SSP_FMT_PDM	6

#define DAI_INTEL_IPC3_SSP_FMT_CONT	(1 << 4)
#define DAI_INTEL_IPC3_SSP_FMT_GATED	(0 << 4)

#define DAI_INTEL_IPC3_SSP_FMT_NB_NF	(0 << 8)
#define DAI_INTEL_IPC3_SSP_FMT_NB_IF	(2 << 8)
#define DAI_INTEL_IPC3_SSP_FMT_IB_NF	(3 << 8)
#define DAI_INTEL_IPC3_SSP_FMT_IB_IF	(4 << 8)

#define DAI_INTEL_IPC3_SSP_FMT_CBP_CFP	(0 << 12)
#define DAI_INTEL_IPC3_SSP_FMT_CBC_CFP	(2 << 12)
#define DAI_INTEL_IPC3_SSP_FMT_CBP_CFC	(3 << 12)
#define DAI_INTEL_IPC3_SSP_FMT_CBC_CFC	(4 << 12)

#define DAI_INTEL_IPC3_SSP_FMT_FORMAT_MASK		0x000f
#define DAI_INTEL_IPC3_SSP_FMT_CLOCK_MASK		0x00f0
#define DAI_INTEL_IPC3_SSP_FMT_INV_MASK			0x0f00
#define DAI_INTEL_IPC3_SSP_FMT_CLOCK_PROVIDER_MASK	0xf000

/*
 * DAI_CONFIG flags. The 4 LSB bits are used for the commands, HW_PARAMS, HW_FREE and PAUSE
 * representing when the IPC is sent. The 4 MSB bits are used to add quirks along with the above
 * commands.
 */
#define DAI_INTEL_IPC3_SSP_CONFIG_FLAGS_CMD_MASK	0xF
#define DAI_INTEL_IPC3_SSP_CONFIG_FLAGS_NONE		0
#define DAI_INTEL_IPC3_SSP_CONFIG_FLAGS_HW_PARAMS	BIT(0)
#define DAI_INTEL_IPC3_SSP_CONFIG_FLAGS_HW_FREE		BIT(1)

/**< DAI_CONFIG sent during pause trigger. Only available ABI 3.20 onwards */
#define DAI_INTEL_IPC3_SSP_CONFIG_FLAGS_PAUSE	BIT(2)
#define DAI_INTEL_IPC3_SSP_CONFIG_FLAGS_QUIRK_SHIFT 4
#define DAI_INTEL_IPC3_SSP_CONFIG_FLAGS_QUIRK_MASK  (0xF << SOF_DAI_CONFIG_FLAGS_QUIRK_SHIFT)
/*
 * This should be used along with the DAI_INTEL_IPC3_SSP_CONFIG_FLAGS_HW_PARAMS to indicate that
 * pipeline stop/pause and DAI DMA stop/pause should happen in two steps. This change is only
 * available ABI 3.20 onwards.
 */
#define DAI_INTEL_IPC3_SSP_CONFIG_FLAGS_2_STEP_STOP BIT(0)

 /* ssc1: TINTE */
#define DAI_INTEL_IPC3_SSP_QUIRK_TINTE		(1 << 0)
 /* ssc1: PINTE */
#define DAI_INTEL_IPC3_SSP_QUIRK_PINTE		(1 << 1)
 /* ssc2: SMTATF */
#define DAI_INTEL_IPC3_SSP_QUIRK_SMTATF		(1 << 2)
 /* ssc2: MMRATF */
#define DAI_INTEL_IPC3_SSP_QUIRK_MMRATF		(1 << 3)
 /* ssc2: PSPSTWFDFD */
#define DAI_INTEL_IPC3_SSP_QUIRK_PSPSTWFDFD	(1 << 4)
 /* ssc2: PSPSRWFDFD */
#define DAI_INTEL_IPC3_SSP_QUIRK_PSPSRWFDFD	(1 << 5)
/* ssc1: LBM */
#define DAI_INTEL_IPC3_SSP_QUIRK_LBM		(1 << 6)

 /* here is the possibility to define others aux macros */

#define DAI_INTEL_IPC3_SSP_FRAME_PULSE_WIDTH_MAX	38
#define DAI_INTEL_IPC3_SSP_SLOT_PADDING_MAX		31

/* SSP clocks control settings
 *
 * Macros for clks_control field in sof_dai_ssp_params struct.
 */

/* mclk 0 disable */
#define DAI_INTEL_IPC3_SSP_MCLK_0_DISABLE		BIT(0)
/* mclk 1 disable */
#define DAI_INTEL_IPC3_SSP_MCLK_1_DISABLE		BIT(1)
/* mclk keep active */
#define DAI_INTEL_IPC3_SSP_CLKCTRL_MCLK_KA		BIT(2)
/* bclk keep active */
#define DAI_INTEL_IPC3_SSP_CLKCTRL_BCLK_KA		BIT(3)
/* fs keep active */
#define DAI_INTEL_IPC3_SSP_CLKCTRL_FS_KA		BIT(4)
/* bclk idle */
#define DAI_INTEL_IPC3_SSP_CLKCTRL_BCLK_IDLE_HIGH	BIT(5)
/* mclk early start */
#define DAI_INTEL_IPC3_SSP_CLKCTRL_MCLK_ES		BIT(6)
/* bclk early start */
#define DAI_INTEL_IPC3_SSP_CLKCTRL_BCLK_ES		BIT(7)

/* SSP Configuration Request - SOF_DAI_SSP_CONFIG */
struct dai_intel_ipc3_ssp_params {
	uint32_t reserved0;
	uint16_t reserved1;
	uint16_t mclk_id;

	uint32_t mclk_rate;
	uint32_t fsync_rate;
	uint32_t bclk_rate;

	/* TDM */
	uint32_t tdm_slots;
	uint32_t rx_slots;
	uint32_t tx_slots;

	/* data */
	uint32_t sample_valid_bits;
	uint16_t tdm_slot_width;
	uint16_t reserved2;

	/* MCLK */
	uint32_t mclk_direction;

	uint16_t frame_pulse_width;
	uint16_t tdm_per_slot_padding_flag;
	uint32_t clks_control;
	uint32_t quirks;
	uint32_t bclk_delay;	/* guaranteed time (ms) for which BCLK
				 * will be driven, before sending data
				 */
} __packed;

#endif /* __DAI_PARAMS_INTEL_IPC3_H__ */
