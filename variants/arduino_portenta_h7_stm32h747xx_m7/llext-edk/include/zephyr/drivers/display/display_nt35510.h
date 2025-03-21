/*
 * Copyright (c) 2024 Erik Andersson <erian747@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_DISPLAY_DISPLAY_NT35510_H_
#define ZEPHYR_DRIVERS_DISPLAY_DISPLAY_NT35510_H_

/**
 * @name Controller registers
 * @{
 */

/* NT35510 ID */
#define NT35510_ID	0x80U

#define  NT35510_CMD_NOP        0x00
#define  NT35510_CMD_SWRESET    0x01
#define  NT35510_CMD_RDDID      0x04
#define  NT35510_CMD_RDNUMED    0x05
#define  NT35510_CMD_RDDPM      0x0A
#define  NT35510_CMD_RDDMADCTL  0x0B
#define  NT35510_CMD_RDDCOLMOD  0x0C
#define  NT35510_CMD_RDDIM      0x0D
#define  NT35510_CMD_RDDSM      0x0E
#define  NT35510_CMD_RDDSDR     0x0F
#define  NT35510_CMD_SLPIN      0x10
#define  NT35510_CMD_SLPOUT     0x11
#define  NT35510_CMD_PTLON      0x12
#define  NT35510_CMD_NORON      0x13
#define  NT35510_CMD_INVOFF     0x20
#define  NT35510_CMD_INVON      0x21
#define  NT35510_CMD_ALLPOFF    0x22
#define  NT35510_CMD_ALLPON     0x23
#define  NT35510_CMD_GAMSET     0x26
#define  NT35510_CMD_DISPOFF    0x28
#define  NT35510_CMD_DISPON     0x29
#define  NT35510_CMD_CASET      0x2A
#define  NT35510_CMD_RASET      0x2B
#define  NT35510_CMD_RAMWR      0x2C
#define  NT35510_CMD_RAMRD      0x2E
#define  NT35510_CMD_PLTAR      0x30
#define  NT35510_CMD_TOPC       0x32
#define  NT35510_CMD_TEOFF      0x34
#define  NT35510_CMD_TEEON      0x35
#define  NT35510_CMD_MADCTL     0x36
#define  NT35510_CMD_IDMOFF     0x38
#define  NT35510_CMD_IDMON      0x39
#define  NT35510_CMD_COLMOD     0x3A
#define  NT35510_CMD_RAMWRC     0x3C
#define  NT35510_CMD_RAMRDC     0x3E
#define  NT35510_CMD_STESL      0x44
#define  NT35510_CMD_GSL        0x45

#define  NT35510_CMD_DSTBON     0x4F
#define  NT35510_CMD_WRPFD      0x50
#define  NT35510_CMD_WRDISBV    0x51
#define  NT35510_CMD_RDDISBV    0x52
#define  NT35510_CMD_WRCTRLD    0x53
#define  NT35510_CMD_RDCTRLD    0x54
#define  NT35510_CMD_WRCABC     0x55
#define  NT35510_CMD_RDCABC     0x56
#define  NT35510_CMD_WRHYSTE    0x57
#define  NT35510_CMD_WRGAMMSET  0x58
#define  NT35510_CMD_RDFSVM     0x5A
#define  NT35510_CMD_RDFSVL     0x5B
#define  NT35510_CMD_RDMFFSVM   0x5C
#define  NT35510_CMD_RDMFFSVL   0x5D
#define  NT35510_CMD_WRCABCMB   0x5E
#define  NT35510_CMD_RDCABCMB   0x5F
#define  NT35510_CMD_WRLSCC     0x65
#define  NT35510_CMD_RDLSCCM    0x66
#define  NT35510_CMD_RDLSCCL    0x67
#define  NT35510_CMD_RDBWLB     0x70
#define  NT35510_CMD_RDBKX      0x71
#define  NT35510_CMD_RDBKY      0x72
#define  NT35510_CMD_RDWX       0x73
#define  NT35510_CMD_RDWY       0x74
#define  NT35510_CMD_RDRGLB     0x75
#define  NT35510_CMD_RDRX       0x76
#define  NT35510_CMD_RDRY       0x77
#define  NT35510_CMD_RDGX       0x78
#define  NT35510_CMD_RDGY       0x79
#define  NT35510_CMD_RDBALB     0x7A
#define  NT35510_CMD_RDBX       0x7B
#define  NT35510_CMD_RDBY       0x7C
#define  NT35510_CMD_RDAX       0x7D
#define  NT35510_CMD_RDAY       0x7E
#define  NT35510_CMD_RDDDBS     0xA1
#define  NT35510_CMD_RDDDBC     0xA8
#define  NT35510_CMD_RDDCS      0xAA
#define  NT35510_CMD_RDCCS      0xAF
#define  NT35510_CMD_RDID1      0xDA
#define  NT35510_CMD_RDID2      0xDB
#define  NT35510_CMD_RDID3      0xDC

/** @} */

#endif /* ZEPHYR_DRIVERS_DISPLAY_DISPLAY_NT35510_H_ */
