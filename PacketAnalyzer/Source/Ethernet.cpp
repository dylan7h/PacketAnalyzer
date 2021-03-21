#include <map>
#include "Ethernet.h"

std::map<const uint16_t, const char*> gPairOfEthType = {
    std::make_pair(ETH_P_802_3,         "Dummy type for 802.3 frames"),
    std::make_pair(ETH_P_AX25,          "Dummy protocol id for AX.25"),
    std::make_pair(ETH_P_ALL,           "Every packet (be careful!!!)"),
    std::make_pair(ETH_P_802_2,         "802.2 frames"),
    std::make_pair(ETH_P_SNAP,          "Internal only"),
    std::make_pair(ETH_P_DDCMP,         "DEC DDCMP: Internal only"),
    std::make_pair(ETH_P_WAN_PPP,       "Dummy type for WAN PPP frames"),
    std::make_pair(ETH_P_PPP_MP,        "Dummy type for PPP MP frames"),
    std::make_pair(ETH_P_LOCALTALK,     "Localtalk pseudo type"),
    std::make_pair(ETH_P_CAN,           "CAN: Controller Area Network"),
    std::make_pair(ETH_P_CANFD,         "CANFD: CAN flexible data rate"),
    std::make_pair(ETH_P_PPPTALK,       "Dummy type for Atalk over PPP"),
    std::make_pair(ETH_P_TR_802_2,      "802.2 frames"),
    std::make_pair(ETH_P_MOBITEX,       "Mobitex (kaz@cafe.net)"),
    std::make_pair(ETH_P_CONTROL,       "Card specific control frames"),
    std::make_pair(ETH_P_IRDA,          "Linux-IrDA"),
    std::make_pair(ETH_P_ECONET,        "Acorn Econet"),
    std::make_pair(ETH_P_HDLC,          "HDLC frames"),
    std::make_pair(ETH_P_ARCNET,        "1A for ArcNet"),
    std::make_pair(ETH_P_DSA,           "Distributed Switch Arch."),
    std::make_pair(ETH_P_TRAILER,       "Trailer switch tagging"),
    std::make_pair(ETH_P_PHONET,        "Nokia Phonet frames"),
    std::make_pair(ETH_P_IEEE802154,    "IEEE802.15.4 frame"),
    std::make_pair(ETH_P_CAIF,          "ST-Ericsson CAIF protocol"),
    std::make_pair(ETH_P_XDSA,          "Multiplexed DSA protocol"),
    std::make_pair(ETH_P_MAP,           "Qualcomm multiplexing and * aggregation protocol"),
    std::make_pair(ETHERTYPE_SPRITE,    "Xerox PUP"),
    std::make_pair(ETHERTYPE_IPV6,      "IP protocol version 6"),
    std::make_pair(ETH_P_LOOP,          "Ethernet Loopback packet"),
    std::make_pair(ETH_P_PUP,           "Xerox PUP packet"),
    std::make_pair(ETH_P_PUPAT,         "Xerox PUP Addr Trans packet"),
    std::make_pair(ETH_P_TSN,           "TSN (IEEE 1722) packet"),
    std::make_pair(ETH_P_ERSPAN2,       "ERSPAN version 2 (type III)"),
    std::make_pair(ETH_P_IP,            "Internet Protocol packet"),
    std::make_pair(ETH_P_X25,           "CCITT X.25"),
    std::make_pair(ETH_P_ARP,           "Address Resolution packet"),
    std::make_pair(ETH_P_BPQ,           "G8BPQ AX.25 Ethernet Packet"),
    std::make_pair(ETH_P_IEEEPUP,       "Xerox IEEE802.3 PUP packet"),
    std::make_pair(ETH_P_IEEEPUPAT,     "Xerox IEEE802.3 PUP Addr Trans packet"),
    std::make_pair(ETH_P_BATMAN,        "B.A.T.M.A.N.-Advanced packet"),
    std::make_pair(ETH_P_DEC,           "DEC Assigned proto"),
    std::make_pair(ETH_P_DNA_DL,        "DEC DNA Dump/Load"),
    std::make_pair(ETH_P_DNA_RC,        "DEC DNA Remote Console"),
    std::make_pair(ETH_P_DNA_RT,        "DEC DNA Routing"),
    std::make_pair(ETH_P_LAT,           "DEC LAT"),
    std::make_pair(ETH_P_DIAG,          "DEC Diagnostics"),
    std::make_pair(ETH_P_CUST,          "DEC Customer use"),
    std::make_pair(ETH_P_SCA,           "DEC Systems Comms Arch"),
    std::make_pair(ETH_P_TEB,           "Trans Ether Bridging"),
    std::make_pair(ETH_P_RARP,          "Reverse Addr Res packet"),
    std::make_pair(ETH_P_ATALK,         "Appletalk DDP"),
    std::make_pair(ETH_P_AARP,          "Appletalk AARP"),
    std::make_pair(ETH_P_8021Q,         "802.1Q VLAN Extended Header"),
    std::make_pair(ETH_P_ERSPAN,        "ERSPAN type II"),
    std::make_pair(ETH_P_IPX,           "IPX over DIX"),
    std::make_pair(ETH_P_IPV6,          "IPv6 over bluebook"),
    std::make_pair(ETH_P_PAUSE,         "IEEE Pause frames. See 802.3 31B"),
    std::make_pair(ETH_P_SLOW,          "Slow Protocol. See 802.3ad 43B"),
    std::make_pair(ETH_P_WCCP,          "Web-cache coordination protocol"),
    std::make_pair(ETH_P_MPLS_UC,       "MPLS Unicast traffic"),
    std::make_pair(ETH_P_MPLS_MC,       "MPLS Multicast traffic"),
    std::make_pair(ETH_P_ATMMPOA,       "MultiProtocol Over ATM"),
    std::make_pair(ETH_P_PPP_DISC,      "PPPoE discovery messages"),
    std::make_pair(ETH_P_PPP_SES,       "PPPoE session messages"),
    std::make_pair(ETH_P_LINK_CTL,      "HPNA, wlan link local tunnel"),
    std::make_pair(ETH_P_ATMFATE,       "Frame-based ATM Transport * over Ethernet"),
    std::make_pair(ETH_P_PAE,           "Port Access Entity (IEEE 802.1X)"),
    std::make_pair(ETH_P_AOE,           "ATA over Ethernet"),
    std::make_pair(ETH_P_8021AD,        "802.1ad Service VLAN"),
    std::make_pair(ETH_P_802_EX1,       "802.1 Local Experimental 1."),
    std::make_pair(ETH_P_PREAUTH,       "802.11 Preauthentication"),
    std::make_pair(ETH_P_TIPC,          "TIPC"),
    std::make_pair(ETH_P_LLDP,          "Link Layer Discovery Protocol"),
    std::make_pair(ETH_P_MACSEC,        "802.1ae MACsec"),
    std::make_pair(ETH_P_8021AH,        "802.1ah Backbone Service Tag"),
    std::make_pair(ETH_P_MVRP,          "802.1Q MVRP"),
    std::make_pair(ETH_P_1588,          "IEEE 1588 Timesync"),
    std::make_pair(ETH_P_NCSI,          "NCSI protocol"),
    std::make_pair(ETH_P_PRP,           "IEC 62439-3 PRP/HSRv0"),
    std::make_pair(ETH_P_FCOE,          "Fibre Channel over Ethernet"),
    std::make_pair(ETH_P_IBOE,          "Infiniband over Ethernet"),
    std::make_pair(ETH_P_TDLS,          "TDLS"),
    std::make_pair(ETH_P_FIP,           "FCoE Initialization Protocol"),
    std::make_pair(ETH_P_80221,         "IEEE 802.21 Media Independent Handover Protocol"),
    std::make_pair(ETH_P_HSR,           "IEC 62439-3 HSRv1"),
    std::make_pair(ETH_P_NSH,           "Network Service Header"),
    std::make_pair(ETH_P_LOOPBACK,      "Ethernet loopback packet, per IEEE 802.3"),
    std::make_pair(ETH_P_QINQ1,         "deprecated QinQ1 VLAN"),
    std::make_pair(ETH_P_QINQ2,         "deprecated QinQ2 VLAN"),
    std::make_pair(ETH_P_QINQ3,         "deprecated QinQ3 VLAN"),
    std::make_pair(ETH_P_EDSA,          "Ethertype DSA"),
    std::make_pair(ETH_P_DSA_8021Q,     "Fake VLAN Header for DSA"),
    std::make_pair(ETH_P_IFE,           "ForCES inter-FE LFB type"),
    std::make_pair(ETH_P_AF_IUCV,       "IBM af_iucv")
};

CEthernet::CEthernet(uint8_t* pEthBase, uint32_t nLength)
{
    std::copy(pEthBase, pEthBase + nLength, this->arrPacket.begin());
    this->pFrame = reinterpret_cast<struct EthFrame*>(this->arrPacket.data());
}

std::string CEthernet::GetStrSrc(void) const
{
    constexpr uint8_t CountOfHex    = (2U * ETH_ALEN);
    constexpr uint8_t CountOfDel    = (ETH_ALEN - 1U);
    constexpr uint8_t CountOfNull   = (ETH_ALEN - 1U);
    constexpr uint8_t SizeOfBuff    = CountOfHex + CountOfDel + CountOfNull;

    char strMAC[SizeOfBuff];

    snprintf(   strMAC, SizeOfBuff, 
                "%02X:%02X:%02X:%02X:%02X:%02X",
                this->pFrame->ether_shost[0U],
                this->pFrame->ether_shost[1U],
                this->pFrame->ether_shost[2U],
                this->pFrame->ether_shost[3U],
                this->pFrame->ether_shost[4U],
                this->pFrame->ether_shost[5U]
            );

    return std::string(strMAC);
}

std::string CEthernet::GetStrDst(void) const
{
    constexpr uint8_t CountOfHex    = (2U * ETH_ALEN);
    constexpr uint8_t CountOfDel    = (ETH_ALEN - 1U);
    constexpr uint8_t CountOfNull   = (ETH_ALEN - 1U);
    constexpr uint8_t SizeOfBuff    = CountOfHex + CountOfDel + CountOfNull;

    char strMAC[SizeOfBuff];

    snprintf(   strMAC, SizeOfBuff, 
                "%02X:%02X:%02X:%02X:%02X:%02X",
                this->pFrame->ether_dhost[0U],
                this->pFrame->ether_dhost[1U],
                this->pFrame->ether_dhost[2U],
                this->pFrame->ether_dhost[3U],
                this->pFrame->ether_dhost[4U],
                this->pFrame->ether_dhost[5U]
            );

    return std::string(strMAC);
}

std::string CEthernet::GetStrEthType(void) const
{
    std::string ret;

    try
    {
        ret = gPairOfEthType.at(this->pFrame->ether_type);
    }
    catch(const std::exception& e)
    {
        char strTypeOfValue[9U];

        snprintf(strTypeOfValue, sizeof(strTypeOfValue), "(0x%04X)", this->pFrame->ether_type);
        ret = "Unknown Type" + std::string(strTypeOfValue);
    }
    

    return ret;
}

std::array<uint8_t, ETH_ALEN> CEthernet::GetValueSrc(void) const
{
    std::array<uint8_t, ETH_ALEN> ret;

    std::copy(this->pFrame->ether_shost, this->pFrame->ether_shost + ETH_ALEN, ret.begin());

    return ret;
}

std::array<uint8_t, ETH_ALEN> CEthernet::GetValueDst(void) const
{
    std::array<uint8_t, ETH_ALEN> ret;

    std::copy(this->pFrame->ether_shost, this->pFrame->ether_shost + ETH_ALEN, ret.begin());

    return ret;
}

uint16_t CEthernet::GetValueEthType(void) const
{
    return this->pFrame->ether_type;
}
