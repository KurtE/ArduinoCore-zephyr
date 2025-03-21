/*
 * Copyright (c) 2022 Intel Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __INTEL_DAI_DRIVER_ALH_MAP_H__
#define __INTEL_DAI_DRIVER_ALH_MAP_H__

/**
 * \brief ALH Handshakes for audio I/O
 * Stream ID -> DMA Handshake map
 * -1 identifies invalid handshakes/streams
 */
static const uint8_t alh_handshake_map[64] = {
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	22,
	23,
	24,
	25,
	26,
	27,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	32,
	33,
	34,
	35,
	36,
	37,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	42,
	43,
	44,
	45,
	46,
	47,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	52,
	53,
	54,
	55,
	56,
	57,
	-1,
	-1,
	-1,
};

#endif
