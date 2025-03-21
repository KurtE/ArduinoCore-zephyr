/*
 * Copyright (c) 2018 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef ZEPHYR_INCLUDE_SHELL_TYPES_H_
#define ZEPHYR_INCLUDE_SHELL_TYPES_H_


#ifdef __cplusplus
extern "C" {
#endif

enum shell_vt100_color {
	SHELL_VT100_COLOR_BLACK,
	SHELL_VT100_COLOR_RED,
	SHELL_VT100_COLOR_GREEN,
	SHELL_VT100_COLOR_YELLOW,
	SHELL_VT100_COLOR_BLUE,
	SHELL_VT100_COLOR_MAGENTA,
	SHELL_VT100_COLOR_CYAN,
	SHELL_VT100_COLOR_WHITE,

	SHELL_VT100_COLOR_DEFAULT,

	VT100_COLOR_END
};

struct shell_vt100_colors {
	enum shell_vt100_color col;
	enum shell_vt100_color bgcol;
};

struct shell_multiline_cons {
	uint16_t cur_x;
	uint16_t cur_x_end;
	uint16_t cur_y;
	uint16_t cur_y_end;
	uint16_t terminal_hei;
	uint16_t terminal_wid;
	uint8_t name_len;
};

struct shell_vt100_ctx {
	struct shell_multiline_cons cons;
	struct shell_vt100_colors col;
	uint16_t printed_cmd;
};

#ifdef __cplusplus
}
#endif

#endif /* ZEPHYR_INCLUDE_SHELL_TYPES_H_ */
