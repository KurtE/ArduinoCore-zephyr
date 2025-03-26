#pragma once

#include <zephyr/net/dhcpv4.h>
#include <zephyr/net/dhcpv4_server.h>
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
#undef LOG_ERR
#define LOG_ERR(...)

class NetworkInterface {
private:

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

protected:

    struct net_if *netif = nullptr;
    int dhcp()
    {
        net_mgmt_init_event_callback(&mgmt_cb, event_handler, NET_EVENT_IPV4_ADDR_ADD | NET_EVENT_IF_UP | NET_EVENT_IF_DOWN);
        net_mgmt_add_event_callback(&mgmt_cb);

        net_dhcpv4_init_option_callback(&dhcp_cb, option_handler,
                        DHCP_OPTION_NTP, ntp_server,
                        sizeof(ntp_server));

        net_dhcpv4_add_option_callback(&dhcp_cb);

        net_dhcpv4_start(netif);

        return 0;
    }

    void enable_dhcpv4_server(struct net_if *netif, char* _netmask = "255.255.255.0")
    {
        static struct in_addr addr;
        static struct in_addr netmaskAddr;

        if (net_addr_pton(AF_INET, String(localIP()).c_str(), &addr)) {
            LOG_ERR("Invalid address: %s", String(localIP()).c_str());
            return;
        }

        if (net_addr_pton(AF_INET,  _netmask, &netmaskAddr)) {
            LOG_ERR("Invalid netmask: %s", _netmask);
            return;
        }

        net_if_ipv4_set_gw(netif, &addr);

        if (net_if_ipv4_addr_add(netif, &addr, NET_ADDR_MANUAL, 0) == NULL) {
            LOG_ERR("unable to set IP address for AP interface");
        }

        if (!net_if_ipv4_set_netmask_by_addr(netif, &addr, &netmaskAddr)) {
            LOG_ERR("Unable to set netmask for AP interface: %s", _netmask);
        }

        addr.s4_addr[3] += 10; /* Starting IPv4 address for DHCPv4 address pool. */

        if (net_dhcpv4_server_start(netif, &addr) != 0) {
            LOG_ERR("DHCP server is not started for desired IP");
            return;
        }

        LOG_INF("DHCPv4 server started...\n");
    }


public:
    NetworkInterface() {}
    ~NetworkInterface() {}
    IPAddress localIP() {
        return IPAddress(netif->config.ip.ipv4->unicast[0].ipv4.address.in_addr.s_addr);
    }

    IPAddress subnetMask() {
        return IPAddress(netif->config.ip.ipv4->unicast[0].netmask.s_addr);
    }
    IPAddress gatewayIP() {
        return IPAddress(netif->config.ip.ipv4->gw.s_addr);
    }
    IPAddress dnsServerIP() {
        return arduino::INADDR_NONE;
    }

    IPAddress dnsIP(int n = 0);

    void setMACAddress(const uint8_t* mac);

    bool begin(bool blocking = true, uint32_t additional_event_mask = 0) {
        dhcp();
        int ret =  net_mgmt_event_wait_on_iface(netif, NET_EVENT_IPV4_ADDR_ADD | additional_event_mask,
                    NULL, NULL, NULL, blocking ? K_FOREVER : K_SECONDS(1));
        return (ret == 0);
    }

    bool disconnect() {
        return (net_if_down(netif) == 0);
    }

    // TODO: manual functions for setting IP address, subnet mask, gateway, etc.
    // net_if_ipv4_set_netmask_by_addr(iface, &addr4, &nm);
    // net_if_ipv4_addr_add(iface, &addr4, NET_ADDR_MANUAL, 0);
};