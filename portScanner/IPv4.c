/* This pogram scans ports within the given range on the target ip
*  and reports which, if any, ports are open
*
*  Author: Greyson Sequino, greyson.sequino@colostate.edu
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void port_scanner(char tIP[], char fromPort[], char toPort[]);

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        printf("Incorrect usage\n");
        printf("USAGE: %s IP FromPort ToPort\n", argv[0]);
        exit(1);
    }

    char tIP[16] = {0};
    strcpy(tIP, argv[1]);  // copy the IPv4 address
    char fromPort[6] = {0};
    strcpy(fromPort, argv[2]); // copy the beginning port
    char toPort[6] = {0};
    strcpy(toPort, argv[3]);   // copy the end port

    // start port scanner
    port_scanner(tIP, fromPort, toPort);
    return 0;
}

void port_scanner(char tIP[], char fromPort[], char toPort[])
{
    struct addrinfo hints;
    memsets(&hints, 0, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
}

