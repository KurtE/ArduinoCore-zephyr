/** @file
 * @brief HTTP request methods
 */

/*
 * Copyright (c) 2022 Meta
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_NET_HTTP_METHOD_H_
#define ZEPHYR_INCLUDE_NET_HTTP_METHOD_H_

/**
 * @brief HTTP request methods
 * @defgroup http_methods HTTP request methods
 * @since 3.3
 * @version 0.8.0
 * @ingroup networking
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif

/** @brief HTTP Request Methods */
enum http_method {
	HTTP_DELETE = 0,
	HTTP_GET = 1,
	HTTP_HEAD = 2,
	HTTP_POST = 3,
	HTTP_PUT = 4,
	HTTP_CONNECT = 5,
	HTTP_OPTIONS = 6,
	HTTP_TRACE = 7,
	HTTP_COPY = 8,
	HTTP_LOCK = 9,
	HTTP_MKCOL = 10,
	HTTP_MOVE = 11,
	HTTP_PROPFIND = 12,
	HTTP_PROPPATCH = 13,
	HTTP_SEARCH = 14,
	HTTP_UNLOCK = 15,
	HTTP_BIND = 16,
	HTTP_REBIND = 17,
	HTTP_UNBIND = 18,
	HTTP_ACL = 19,
	HTTP_REPORT = 20,
	HTTP_MKACTIVITY = 21,
	HTTP_CHECKOUT = 22,
	HTTP_MERGE = 23,
	HTTP_MSEARCH = 24,
	HTTP_NOTIFY = 25,
	HTTP_SUBSCRIBE = 26,
	HTTP_UNSUBSCRIBE = 27,
	HTTP_PATCH = 28,
	HTTP_PURGE = 29,
	HTTP_MKCALENDAR = 30,
	HTTP_LINK = 31,
	HTTP_UNLINK = 32,

	/** @cond INTERNAL_HIDDEN */
	HTTP_METHOD_END_VALUE
	/** @endcond */
};

#ifdef __cplusplus
}
#endif

/**
 * @}
 */

#endif
