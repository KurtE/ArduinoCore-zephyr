/*
 * Copyright (c) 2021 Telink Semiconductor
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_IEEE802154_IEEE802154_B91_H_
#define ZEPHYR_DRIVERS_IEEE802154_IEEE802154_B91_H_

/* Timeouts */
#define B91_TX_WAIT_TIME_MS                 (10)
#define B91_ACK_WAIT_TIME_MS                (10)

/* Received data parsing */
#define B91_PAYLOAD_OFFSET                  (5)
#define B91_PAYLOAD_MIN                     (5)
#define B91_PAYLOAD_MAX                     (127)
#define B91_FRAME_TYPE_OFFSET               (0)
#define B91_FRAME_TYPE_MASK                 (0x07)
#define B91_DEST_ADDR_TYPE_OFFSET           (1)
#define B91_DEST_ADDR_TYPE_MASK             (0x0c)
#define B91_DEST_ADDR_TYPE_SHORT            (8)
#define B91_DEST_ADDR_TYPE_IEEE             (0x0c)
#define B91_PAN_ID_OFFSET                   (3)
#define B91_PAN_ID_SIZE                     (2)
#define B91_DEST_ADDR_OFFSET                (5)
#define B91_SHORT_ADDRESS_SIZE              (2)
#define B91_IEEE_ADDRESS_SIZE               (8)
#define B91_LENGTH_OFFSET                   (4)
#define B91_RSSI_OFFSET                     (11)
#define B91_BROADCAST_ADDRESS               ((uint8_t [2]) { 0xff, 0xff })
#define B91_ACK_FRAME_LEN                   (3)
#define B91_ACK_TYPE                        (2)
#define B91_ACK_REQUEST                     (1 << 5)
#define B91_DSN_OFFSET                      (2)
#define B91_FCS_LENGTH                      (2)

/* Generic */
#define B91_TRX_LENGTH                      (256)
#define B91_RSSI_TO_LQI_SCALE               (3)
#define B91_RSSI_TO_LQI_MIN                 (-87)
#define B91_CCA_TIME_MAX_US                 (200)
#define B91_LOGIC_CHANNEL_TO_PHYSICAL(p)    (((p) - 10) * 5)

/* TX power lookup table */
#define B91_TX_POWER_MIN                    (-30)
#define B91_TX_POWER_MAX                    (9)
static const uint8_t b91_tx_pwr_lt[] = {
	RF_POWER_N30dBm,
	RF_POWER_N30dBm,
	RF_POWER_N30dBm,
	RF_POWER_N30dBm,
	RF_POWER_N30dBm,
	RF_POWER_N23p54dBm,
	RF_POWER_N23p54dBm,
	RF_POWER_N23p54dBm,
	RF_POWER_N23p54dBm,
	RF_POWER_N23p54dBm,
	RF_POWER_N17p83dBm,
	RF_POWER_N17p83dBm,
	RF_POWER_N17p83dBm,
	RF_POWER_N17p83dBm,
	RF_POWER_N17p83dBm,
	RF_POWER_N12p06dBm,
	RF_POWER_N12p06dBm,
	RF_POWER_N12p06dBm,
	RF_POWER_N12p06dBm,
	RF_POWER_N12p06dBm,
	RF_POWER_N8p78dBm,
	RF_POWER_N8p78dBm,
	RF_POWER_N8p78dBm,
	RF_POWER_N6p54dBm,
	RF_POWER_N6p54dBm,
	RF_POWER_N4p77dBm,
	RF_POWER_N4p77dBm,
	RF_POWER_N3p37dBm,
	RF_POWER_N2p01dBm,
	RF_POWER_N1p37dBm,
	RF_POWER_P0p01dBm,
	RF_POWER_P0p80dBm,
	RF_POWER_P2p32dBm,
	RF_POWER_P3p25dBm,
	RF_POWER_P4p35dBm,
	RF_POWER_P5p68dBm,
	RF_POWER_P5p68dBm,
	RF_POWER_P6p98dBm,
	RF_POWER_P8p05dBm,
	RF_POWER_P9p11dBm,
};

/* data structure */
struct b91_data {
	uint8_t mac_addr[B91_IEEE_ADDRESS_SIZE];
	uint8_t rx_buffer[B91_TRX_LENGTH];
	uint8_t tx_buffer[B91_TRX_LENGTH];
	struct net_if *iface;
	struct k_sem tx_wait;
	struct k_sem ack_wait;
	uint8_t filter_pan_id[B91_PAN_ID_SIZE];
	uint8_t filter_short_addr[B91_SHORT_ADDRESS_SIZE];
	uint8_t filter_ieee_addr[B91_IEEE_ADDRESS_SIZE];
	bool is_started;
	bool ack_handler_en;
	uint16_t current_channel;
};

#endif
