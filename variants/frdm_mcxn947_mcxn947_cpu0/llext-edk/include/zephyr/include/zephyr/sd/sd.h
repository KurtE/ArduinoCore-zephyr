/*
 * Copyright 2022 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Public API for SD subsystem
 */

#ifndef ZEPHYR_INCLUDE_SD_SD_H_
#define ZEPHYR_INCLUDE_SD_SD_H_

#include <zephyr/device.h>
#include <zephyr/drivers/sdhc.h>
#include <zephyr/kernel.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief card status. Used internally by subsystem.
 */
enum card_status {
	CARD_UNINITIALIZED = 0,
	CARD_ERROR = 1,
	CARD_INITIALIZED = 2,
};

/**
 * @brief card type. Used internally by subsystem.
 */
enum card_type {
	CARD_SDMMC = 0,
	CARD_SDIO = 1,
	CARD_COMBO = 2,
	CARD_MMC = 3,
};

/**
 * @brief SDIO function definition
 *
 * SDIO function definition. Used to store function information
 * per each SDIO function
 */
struct sdio_func {
	enum sdio_func_num num;
	struct sd_card *card;
	struct sdio_cis cis;
	uint16_t block_size;
};


/**
 * @brief SD card structure
 *
 * This structure is used by the subsystem to track an individual SD
 * device connected to the system. The application may access these
 * fields, but use caution when changing values.
 */
struct sd_card {
	const struct device *sdhc;
	struct sdhc_io bus_io;
	enum sd_voltage card_voltage;
	struct k_mutex lock;
	struct sdhc_host_props host_props;
	uint32_t ocr;
	struct sd_switch_caps switch_caps;
	unsigned int num_io: 3;
	uint16_t relative_addr;
	uint32_t block_count;
	uint16_t block_size;
	uint8_t sd_version;
	uint8_t card_speed;
	enum card_status status;
	enum card_type type;
	uint16_t flags;
	uint8_t bus_width;
	uint32_t cccr_flags;
	struct sdio_func func0;

	/* NOTE: The buffer is accessed as a uint32_t* by the SD subsystem, so must be
	 * aligned to 4 bytes for platforms that don't support unaligned access...
	 * Systems where the buffer is accessed by DMA may require wider alignment, in
	 * which case, use CONFIG_SDHC_BUFFER_ALIGNMENT.
	 */
	uint8_t card_buffer[CONFIG_SD_BUFFER_SIZE]
		__aligned(MAX(4, CONFIG_SDHC_BUFFER_ALIGNMENT));
};

/**
 * @brief Initialize an SD device
 *
 * Initializes an SD device to use with the subsystem. After this call,
 * only the SD card structure is required to access the card.
 * @param sdhc_dev SD host controller device for this card
 * @param card SD card structure for this card
 * @retval 0 card was initialized
 * @retval -ETIMEDOUT: card initialization timed out
 * @retval -EBUSY: card is busy
 * @retval -EIO: IO error while starting card
 */
int sd_init(const struct device *sdhc_dev, struct sd_card *card);

/**
 * @brief checks to see if card is present in the SD slot
 *
 * @param sdhc_dev SD host controller to check for card presence on
 * @retval true card is present
 * @retval false card is not present
 */
bool sd_is_card_present(const struct device *sdhc_dev);


#ifdef __cplusplus
}
#endif

#endif /* ZEPHYR_INCLUDE_SD_SD_H_ */
