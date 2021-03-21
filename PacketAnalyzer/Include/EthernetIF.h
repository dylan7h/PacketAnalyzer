#ifndef __ETHERNET_IF__H__
#define __ETHERNET_IF__H__

class CEthernet
{
    private:
        std::array<uint8_t, ETH_MAX_MTU> arrPacket;
        struct EthFrame
        {
            uint8_t  ether_dhost[ETH_ALEN];	/* destination eth addr	*/
            uint8_t  ether_shost[ETH_ALEN];	/* source ether addr	*/
            uint16_t ether_type;            /* packet type ID field	*/
        } *pFrame = nullptr;

    public:
        CEthernet(uint8_t* pEthBase, uint32_t nLength);

    public:
        std::string GetStrSrc(void) const;
        std::string GetStrDst(void) const;
        std::string GetStrEthType(void) const;

    public:
        std::array<uint8_t, ETH_ALEN>   GetValueSrc(void) const;
        std::array<uint8_t, ETH_ALEN>   GetValueDst(void) const;
        uint16_t                        GetValueEthType(void) const;
};

#endif  //!__ETHERNET_IF__H__
