/* SPDX-License-Identifier: BSD-3-Clause */

/*    $NetBSD: fnmatch.h,v 1.12.50.1 2011/02/08 16:18:55 bouyer Exp $    */

/*-
 * Copyright (c) 1992, 1993
 *    The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *    @(#)fnmatch.h    8.1 (Berkeley) 6/2/93
 */

#ifndef _FNMATCH_H_
#define _FNMATCH_H_

#define FNM_NOMATCH 1
#define FNM_NOSYS   2
#define FNM_NORES   3

#define FNM_NOESCAPE	0x01
#define FNM_PATHNAME	0x02
#define FNM_PERIOD	0x04
#define FNM_CASEFOLD	0x08
#define FNM_LEADING_DIR 0x10

#ifdef __cplusplus
extern "C" {
#endif

int fnmatch(const char *, const char *, int);

#ifdef __cplusplus
}
#endif

#endif /* !_FNMATCH_H_ */
