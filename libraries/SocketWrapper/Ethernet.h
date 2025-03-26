#include "SocketHelpers.h"

#include <zephyr/net/ethernet.h>

enum EthernetLinkStatus {
  Unknown,
  LinkON,
  LinkOFF
};

enum EthernetHardwareStatus {
  EthernetNoHardware,
  EthernetOk
};

class EthernetClass: public NetworkInterface
{
public:
	EthernetClass() {}
	virtual ~EthernetClass() {}

    EthernetLinkStatus linkStatus() {
        hardwareStatus();
        if (net_if_is_up(netif)) {
            return LinkON;
        } else {
            return LinkOFF;
        }
    }

    bool begin(bool blocking = true, uint32_t additional_event_mask = 0) {
        hardwareStatus();
        return NetworkInterface::begin(blocking, additional_event_mask);
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
            for (int i = 1; i < 3; i++) {
                auto _if = net_if_get_by_index(i);
                if (!net_eth_type_is_wifi(_if)) {
                    netif = _if;
                    break;
                }
            }
            return EthernetOk;
        } else {
            return EthernetNoHardware;
        }
    }
};
extern EthernetClass Ethernet;
