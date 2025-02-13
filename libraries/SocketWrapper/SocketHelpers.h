#pragma once

#include "zephyr/net/dhcpv4.h"
#include <cstddef>
#include <zephyr/kernel.h>
#include <zephyr/linker/sections.h>
#include <errno.h>
#include <stdio.h>

#include <zephyr/net/net_if.h>
#include <zephyr/net/net_core.h>
#include <zephyr/net/net_context.h>
#include <zephyr/net/net_mgmt.h>

#include <api/IPAddress.h>

#define DHCP_OPTION_NTP (42)

#undef LOG_INF
#define LOG_INF(...)

#ifdef SPECIALIZE_FOR_ETHERNET
enum EthernetLinkStatus {
  Unknown,
  LinkON,
  LinkOFF
};

enum EthernetHardwareStatus {
  EthernetNoHardware,
  EthernetOk
};
#endif

#ifdef SPECIALIZE_FOR_WIFI
#include "utility/wl_definitions.h"
#include <zephyr/net/wifi_mgmt.h>
#endif

class NetworkInterface {
private:
    int iface_index = -1;

    uint8_t ntp_server[4];
    static struct net_mgmt_event_callback mgmt_cb;
    static struct net_dhcpv4_option_callback dhcp_cb;

    static void event_handler(struct net_mgmt_event_callback *cb,
                uint32_t mgmt_event,
                struct net_if *iface)
    {
        int i = 0;

        if (mgmt_event != NET_EVENT_IPV4_ADDR_ADD) {
            return;
        }

        for (i = 0; i < NET_IF_MAX_IPV4_ADDR; i++) {
            char buf[NET_IPV4_ADDR_LEN];

            if (iface->config.ip.ipv4->unicast[i].ipv4.addr_type !=
                                NET_ADDR_DHCP) {
                continue;
            }

            LOG_INF("   Address[%d]: %s", net_if_get_by_iface(iface),
                net_addr_ntop(AF_INET,
                    &iface->config.ip.ipv4->unicast[i].ipv4.address.in_addr,
                            buf, sizeof(buf)));
            LOG_INF("    Subnet[%d]: %s", net_if_get_by_iface(iface),
                net_addr_ntop(AF_INET,
                        &iface->config.ip.ipv4->unicast[i].netmask,
                        buf, sizeof(buf)));
            LOG_INF("    Router[%d]: %s", net_if_get_by_iface(iface),
                net_addr_ntop(AF_INET,
                            &iface->config.ip.ipv4->gw,
                            buf, sizeof(buf)));
            LOG_INF("Lease time[%d]: %u seconds", net_if_get_by_iface(iface),
                iface->config.dhcpv4.lease_time);
        }
    }

    static void option_handler(struct net_dhcpv4_option_callback *cb,
                size_t length,
                enum net_dhcpv4_msg_type msg_type,
                struct net_if *iface)
    {
        char buf[NET_IPV4_ADDR_LEN];

        LOG_INF("DHCP Option %d: %s", cb->option,
            net_addr_ntop(AF_INET, cb->data, buf, sizeof(buf)));
    }

    int dhcp()
    {
        net_mgmt_init_event_callback(&mgmt_cb, event_handler, NET_EVENT_IPV4_ADDR_ADD | NET_EVENT_IF_UP | NET_EVENT_IF_DOWN);
        net_mgmt_add_event_callback(&mgmt_cb);

        net_dhcpv4_init_option_callback(&dhcp_cb, option_handler,
                        DHCP_OPTION_NTP, ntp_server,
                        sizeof(ntp_server));

        net_dhcpv4_add_option_callback(&dhcp_cb);

        net_dhcpv4_start(net_if_get_by_index(iface_index));

        return 0;
    }

public:
    NetworkInterface(int iface_index) : iface_index(iface_index) {}
    ~NetworkInterface() {}
    IPAddress localIP() {
        return IPAddress(net_if_get_by_index(iface_index)->config.ip.ipv4->unicast[0].ipv4.address.in_addr.s_addr);
    }

    IPAddress subnetMask() {
        return IPAddress(net_if_get_by_index(iface_index)->config.ip.ipv4->unicast[0].netmask.s_addr);
    }
    IPAddress gatewayIP() {
        return IPAddress(net_if_get_by_index(iface_index)->config.ip.ipv4->gw.s_addr);
    }
    IPAddress dnsServerIP() {
        return arduino::INADDR_NONE;
    }

    IPAddress dnsIP(int n = 0);

    void setMACAddress(const uint8_t* mac);

    bool begin(bool blocking = true, uint32_t additional_event_mask = 0) {
        dhcp();
        int ret =  net_mgmt_event_wait_on_iface(net_if_get_by_index(iface_index), NET_EVENT_IPV4_ADDR_ADD | additional_event_mask,
                    NULL, NULL, NULL, blocking ? K_FOREVER : K_SECONDS(1));
        return (ret == 0);
    }

    bool disconnect() {
        return (net_if_down(net_if_get_by_index(iface_index)) == 0);
    }

    // TODO: manual functions for setting IP address, subnet mask, gateway, etc.
    // net_if_ipv4_set_netmask_by_addr(iface, &addr4, &nm);
    // net_if_ipv4_addr_add(iface, &addr4, NET_ADDR_MANUAL, 0);

#if defined(SPECIALIZE_FOR_ETHERNET) && DT_HAS_COMPAT_STATUS_OKAY(ethernet_phy)
    EthernetLinkStatus linkStatus() {
        if (net_if_is_up(net_if_get_by_index(iface_index))) {
            return LinkON;
        } else {
            return LinkOFF;
        }
    }

    bool begin(uint8_t* mac_address, int _timeout, int _response_timeout) {
        return begin();
    }

    bool begin(uint8_t* mac_address, IPAddress _ip, IPAddress _dns, IPAddress _gateway, IPAddress _netmask, int _timeout, int _response_timeout) {
        return begin();
    }

    EthernetHardwareStatus hardwareStatus() {
        const struct device *const dev = DEVICE_DT_GET(DT_COMPAT_GET_ANY_STATUS_OKAY(ethernet_phy));
        if (device_is_ready(dev)) {
            return EthernetOk;
        } else {
            return EthernetNoHardware;
        }
    }
#endif

#ifdef SPECIALIZE_FOR_WIFI

#define NET_EVENT_WIFI_MASK                                                                        \
	(NET_EVENT_WIFI_CONNECT_RESULT | NET_EVENT_WIFI_DISCONNECT_RESULT |                        \
	 NET_EVENT_WIFI_AP_ENABLE_RESULT | NET_EVENT_WIFI_AP_DISABLE_RESULT |                      \
	 NET_EVENT_WIFI_AP_STA_CONNECTED | NET_EVENT_WIFI_AP_STA_DISCONNECTED |                    \
     NET_EVENT_WIFI_SCAN_RESULT)

    struct net_if *sta_iface;
    struct net_if *ap_iface;

    struct wifi_connect_req_params ap_config;
    struct wifi_connect_req_params sta_config;

    bool begin(const char* ssid, const char* passphrase, wl_enc_type security = ENC_TYPE_UNKNOWN, bool blocking = false) {
        sta_iface = net_if_get_wifi_sta();

        sta_config.ssid = (const uint8_t *)ssid;
        sta_config.ssid_length = strlen(ssid);
        sta_config.psk = (const uint8_t *)passphrase;
        sta_config.psk_length = strlen(passphrase);
        // TODO: change these fields with scan() results
        sta_config.security = WIFI_SECURITY_TYPE_PSK;
        sta_config.channel = WIFI_CHANNEL_ANY;
        sta_config.band = WIFI_FREQ_BAND_2_4_GHZ;
	    sta_config.bandwidth = WIFI_FREQ_BANDWIDTH_20MHZ;

        int ret = net_mgmt(NET_REQUEST_WIFI_CONNECT, sta_iface, &sta_config,
                sizeof(struct wifi_connect_req_params));
        if (ret) {
            return false;
        }

        begin(false, NET_EVENT_WIFI_MASK);
        if (blocking) {
            net_mgmt_event_wait_on_iface(sta_iface, NET_EVENT_WIFI_AP_STA_CONNECTED, NULL, NULL, NULL, K_FOREVER);
        }

        return true;
    }

    int status() {
        struct wifi_iface_status status = { 0 };

        if (net_mgmt(NET_REQUEST_WIFI_IFACE_STATUS, net_if_get_by_index(iface_index), &status,
                sizeof(struct wifi_iface_status))) {
            return WL_NO_SHIELD;
        }

	    if (status.state >= WIFI_STATE_ASSOCIATED) {
            return WL_CONNECTED;
        } else {
            return WL_DISCONNECTED;
        }
        return WL_NO_SHIELD;
    }

    int8_t scanNetworks() {
        // TODO: borrow code from mbed core for scan results handling
    }
#endif
};