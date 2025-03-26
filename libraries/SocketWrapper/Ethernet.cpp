#include "Ethernet.h"

#if DT_HAS_COMPAT_STATUS_OKAY(ethernet_phy)
EthernetClass Ethernet;
#endif