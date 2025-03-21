/*
 * Copyright (c) 2018 Intel Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Public API header file for Audio Codec
 *
 * This file contains the Audio Codec APIs
 */

#ifndef ZEPHYR_INCLUDE_AUDIO_CODEC_H_
#define ZEPHYR_INCLUDE_AUDIO_CODEC_H_

/**
 * @brief Abstraction for audio codecs
 *
 * @defgroup audio_codec_interface Audio Codec Interface
 * @since 1.13
 * @version 0.1.0
 * @ingroup audio_interface
 * @{
 */

#include <zephyr/drivers/i2s.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * PCM audio sample rates
 */
typedef enum {
	AUDIO_PCM_RATE_8K	= 8000,
	AUDIO_PCM_RATE_11P025K	= 11025,
	AUDIO_PCM_RATE_16K	= 16000,
	AUDIO_PCM_RATE_22P05K	= 22050,
	AUDIO_PCM_RATE_24K	= 24000,
	AUDIO_PCM_RATE_32K	= 32000,
	AUDIO_PCM_RATE_44P1K	= 44100,
	AUDIO_PCM_RATE_48K	= 48000,
	AUDIO_PCM_RATE_96K	= 96000,
	AUDIO_PCM_RATE_192K	= 192000,
} audio_pcm_rate_t;

/**
 * PCM audio sample bit widths
 */
typedef enum {
	AUDIO_PCM_WIDTH_16_BITS	= 16,
	AUDIO_PCM_WIDTH_20_BITS	= 20,
	AUDIO_PCM_WIDTH_24_BITS	= 24,
	AUDIO_PCM_WIDTH_32_BITS	= 32,
} audio_pcm_width_t;

/**
 * Digital Audio Interface (DAI) type
 */
typedef enum {
	AUDIO_DAI_TYPE_I2S,
	AUDIO_DAI_TYPE_LEFT_JUSTIFIED,
	AUDIO_DAI_TYPE_RIGHT_JUSTIFIED,
	AUDIO_DAI_TYPE_PCMA,
	AUDIO_DAI_TYPE_PCMB,
	AUDIO_DAI_TYPE_INVALID,
} audio_dai_type_t;

/**
 * Codec properties that can be set by audio_codec_set_property().
 */
typedef enum {
	AUDIO_PROPERTY_OUTPUT_VOLUME,
	AUDIO_PROPERTY_OUTPUT_MUTE,
	AUDIO_PROPERTY_INPUT_VOLUME,
	AUDIO_PROPERTY_INPUT_MUTE
} audio_property_t;

/**
 * Audio channel identifiers to use in audio_codec_set_property().
 */
typedef enum {
	AUDIO_CHANNEL_FRONT_LEFT,
	AUDIO_CHANNEL_FRONT_RIGHT,
	AUDIO_CHANNEL_LFE,
	AUDIO_CHANNEL_FRONT_CENTER,
	AUDIO_CHANNEL_REAR_LEFT,
	AUDIO_CHANNEL_REAR_RIGHT,
	AUDIO_CHANNEL_REAR_CENTER,
	AUDIO_CHANNEL_SIDE_LEFT,
	AUDIO_CHANNEL_SIDE_RIGHT,
	AUDIO_CHANNEL_HEADPHONE_LEFT,
	AUDIO_CHANNEL_HEADPHONE_RIGHT,
	AUDIO_CHANNEL_ALL,
} audio_channel_t;

/**
 * @brief Digital Audio Interface Configuration.
 *
 * Configuration is dependent on DAI type
 */
typedef union {
	struct i2s_config i2s;
				/* Other DAI types go here */
} audio_dai_cfg_t;

/*
 * DAI Route types
 */
typedef enum {
	AUDIO_ROUTE_BYPASS,
	AUDIO_ROUTE_PLAYBACK,
	AUDIO_ROUTE_PLAYBACK_CAPTURE,
	AUDIO_ROUTE_CAPTURE,
} audio_route_t;

/**
 * Codec configuration parameters
 */
struct audio_codec_cfg {
	uint32_t		mclk_freq;
	audio_dai_type_t	dai_type;
	audio_dai_cfg_t		dai_cfg;
	audio_route_t		dai_route;
};

/**
 * Codec property values
 */
typedef union {
	int	vol;
	bool	mute;
} audio_property_value_t;

/**
 * @brief Codec error type
 */
enum audio_codec_error_type {
	/** Output over-current */
	AUDIO_CODEC_ERROR_OVERCURRENT = BIT(0),

	/** Codec over-temperature */
	AUDIO_CODEC_ERROR_OVERTEMPERATURE = BIT(1),

	/** Power low voltage */
	AUDIO_CODEC_ERROR_UNDERVOLTAGE = BIT(2),

	/** Power high voltage */
	AUDIO_CODEC_ERROR_OVERVOLTAGE = BIT(3),

	/** Output direct-current */
	AUDIO_CODEC_ERROR_DC = BIT(4),
};

/**
 * @typedef audio_codec_error_callback_t
 * @brief Callback for error interrupt
 *
 * @param dev Pointer to the codec device
 * @param errors Device errors (bitmask of @ref audio_codec_error_type values)
 */
typedef void (*audio_codec_error_callback_t)(const struct device *dev, uint32_t errors);

/**
 * @cond INTERNAL_HIDDEN
 *
 * For internal use only, skip these in public documentation.
 */
struct audio_codec_api {
	int (*configure)(const struct device *dev,
			 struct audio_codec_cfg *cfg);
	void (*start_output)(const struct device *dev);
	void (*stop_output)(const struct device *dev);
	int (*set_property)(const struct device *dev,
			    audio_property_t property,
			    audio_channel_t channel,
			    audio_property_value_t val);
	int (*apply_properties)(const struct device *dev);
	int (*clear_errors)(const struct device *dev);
	int (*register_error_callback)(const struct device *dev,
			 audio_codec_error_callback_t cb);
	int (*route_input)(const struct device *dev, audio_channel_t channel, uint32_t input);
	int (*route_output)(const struct device *dev, audio_channel_t channel, uint32_t output);
};
/**
 * @endcond
 */

/**
 * @brief Configure the audio codec
 *
 * Configure the audio codec device according to the configuration
 * parameters provided as input
 *
 * @param dev Pointer to the device structure for codec driver instance.
 * @param cfg Pointer to the structure containing the codec configuration.
 *
 * @return 0 on success, negative error code on failure
 */
static inline int audio_codec_configure(const struct device *dev,
					struct audio_codec_cfg *cfg)
{
	const struct audio_codec_api *api =
		(const struct audio_codec_api *)dev->api;

	return api->configure(dev, cfg);
}

/**
 * @brief Set codec to start output audio playback
 *
 * Setup the audio codec device to start the audio playback
 *
 * @param dev Pointer to the device structure for codec driver instance.
 */
static inline void audio_codec_start_output(const struct device *dev)
{
	const struct audio_codec_api *api =
		(const struct audio_codec_api *)dev->api;

	api->start_output(dev);
}

/**
 * @brief Set codec to stop output audio playback
 *
 * Setup the audio codec device to stop the audio playback
 *
 * @param dev Pointer to the device structure for codec driver instance.
 */
static inline void audio_codec_stop_output(const struct device *dev)
{
	const struct audio_codec_api *api =
		(const struct audio_codec_api *)dev->api;

	api->stop_output(dev);
}

/**
 * @brief Set a codec property defined by audio_property_t
 *
 * Set a property such as volume level, clock configuration etc.
 *
 * @param dev Pointer to the device structure for codec driver instance.
 * @param property The codec property to set
 * @param channel The audio channel for which the property has to be set
 * @param val pointer to a property value of type audio_codec_property_value_t
 *
 * @return 0 on success, negative error code on failure
 */
static inline int audio_codec_set_property(const struct device *dev,
					   audio_property_t property,
					   audio_channel_t channel,
					   audio_property_value_t val)
{
	const struct audio_codec_api *api =
		(const struct audio_codec_api *)dev->api;

	return api->set_property(dev, property, channel, val);
}

/**
 * @brief Atomically apply any cached properties
 *
 * Following one or more invocations of audio_codec_set_property, that may have
 * been cached by the driver, audio_codec_apply_properties can be invoked to
 * apply all the properties as atomic as possible
 *
 * @param dev Pointer to the device structure for codec driver instance.
 *
 * @return 0 on success, negative error code on failure
 */
static inline int audio_codec_apply_properties(const struct device *dev)
{
	const struct audio_codec_api *api =
		(const struct audio_codec_api *)dev->api;

	return api->apply_properties(dev);
}

/**
 * @brief Clear any codec errors
 *
 * Clear all codec errors.
 * If an error interrupt exists, it will be de-asserted.
 *
 * @param dev Pointer to the device structure for codec driver instance.
 *
 * @return 0 on success, negative error code on failure
 */
static inline int audio_codec_clear_errors(const struct device *dev)
{
	const struct audio_codec_api *api =
		(const struct audio_codec_api *)dev->api;

	if (api->clear_errors == NULL) {
		return -ENOSYS;
	}

	return api->clear_errors(dev);
}

/**
 * @brief Register a callback function for codec error
 *
 * The callback will be called from a thread, so I2C or SPI operations are
 * safe.  However, the thread's stack is limited and defined by the
 * driver.  It is currently up to the caller to ensure that the callback
 * does not overflow the stack.
 *
 * @param dev Pointer to the audio codec device
 * @param cb The function that should be called when an error is detected
 * fires
 *
 * @return 0 if successful, negative errno code if failure.
 */
static inline int audio_codec_register_error_callback(const struct device *dev,
				     audio_codec_error_callback_t cb)
{
	const struct audio_codec_api *api =
		(const struct audio_codec_api *)dev->api;

	if (api->register_error_callback == NULL) {
		return -ENOSYS;
	}

	return api->register_error_callback(dev, cb);
}

/**
 * @brief Sets up signal routing for a given input channel.
 *
 * Some codecs can do input routing (multiplexing) from a chosen set of
 * physical inputs. This function maps a given audio (stream) channel to
 * a given physical input terminal.
 *
 * @param dev Pointer to the audio codec device
 * @param channel The channel to map
 * @param input The input terminal index, codec-specific
 *
 * @return 0 if successful, negative errno code if failure.
 */
static inline int audio_codec_route_input(const struct device *dev, audio_channel_t channel,
					  uint32_t input)
{
	const struct audio_codec_api *api = (const struct audio_codec_api *)dev->api;

	if (api->route_input == NULL) {
		return -ENOSYS;
	}

	return api->route_input(dev, channel, input);
}

/**
 * @brief Sets up signal routing for a given output channel.
 *
 * Some codecs can do output routing (multiplexing) from a chosen set of
 * physical output. This function maps a given audio (stream) channel to
 * a given physical output terminal.
 *
 * @param dev Pointer to the audio codec device
 * @param channel The channel to map
 * @param output The output terminal index, codec-specific
 *
 * @return 0 if successful, negative errno code if failure.
 */
static inline int audio_codec_route_output(const struct device *dev, audio_channel_t channel,
					   uint32_t output)
{
	const struct audio_codec_api *api = (const struct audio_codec_api *)dev->api;

	if (api->route_output == NULL) {
		return -ENOSYS;
	}

	return api->route_output(dev, channel, output);
}

#ifdef __cplusplus
}
#endif

/**
 * @}
 */

#endif /* ZEPHYR_INCLUDE_AUDIO_CODEC_H_ */
