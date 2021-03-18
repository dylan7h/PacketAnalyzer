#include <sys/socket.h>
#include <arpa/inet.h>
#include <net/ethernet.h>
#include <unistd.h>

#include <stdio.h>

int main(void)
{
    int RawSocket;
    int ret;
    uint8_t PacketBuff[ETH_MAX_MTU];
    struct ether_header* pETH;

    RawSocket = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ALL));
    if(RawSocket == -1)
    {
        perror("socket");
        return 1;
    }
    ret = read(RawSocket, PacketBuff, ETH_MAX_MTU);
    if(ret != -1)
    {
        pETH = (struct ether_header*)PacketBuff;

        pETH->ether_type;
        pETH->ether_dhost;
        pETH->ether_shost;

    }

    close(RawSocket);

    return 0;
}
