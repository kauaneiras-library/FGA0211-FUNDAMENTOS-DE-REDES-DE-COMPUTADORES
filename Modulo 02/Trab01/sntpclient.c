#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>
#include <unistd.h>
#include <errno.h>
#define NTP_PORT 123
#define WAIT 20
#define NTP_TIMESTAMP_DELTA 2208988800U
#pragma pack(push, 1)

typedef struct{uint8_t  li_vn_mode; uint8_t  stratum; uint8_t  poll; uint8_t  precision; uint32_t rootDelay; uint32_t rootDispersion; uint32_t refId; uint32_t refTm_s; uint32_t refTm_f; uint32_t origTm_s; uint32_t origTm_f; uint32_t rxTm_s; uint32_t rxTm_f; uint32_t txTm_s; uint32_t txTm_f; } ntp_packet;
#pragma pack(pop)

static const char *days_of_week[] ={"Dom", "Seg", "Ter", "Qua", "Qui", "Sex", "Sáb"};
static const char *months[] ={"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};

int main(int argc, char *argv[]){
    if(argc < 2){fprintf(stderr, "Uso: %s <IP_servidor_NTP>\n", argv[0]); return EXIT_FAILURE;}
    const char *server_ip = argv[1];
    ntp_packet packet;
    memset(&packet, 0, sizeof(packet));
    packet.li_vn_mode = 0x1B;
    int sd = socket(AF_INET, SOCK_DGRAM, 0);

    if(sd < 0){ perror("socket() falhou"); return EXIT_FAILURE;}

    struct sockaddr_in server_addr;
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(NTP_PORT);
    server_addr.sin_addr.s_addr = inet_addr(server_ip);

    struct timeval wait_time = { WAIT, 0 };
    if(setsockopt(sd, SOL_SOCKET, SO_RCVTIMEO, &wait_time, sizeof(wait_time)) < 0){
        perror("setsockopt(SO_RCVTIMEO) falhou");
        close(sd);
        return EXIT_FAILURE;
    }

    for(int i = 0; i < 2; i++){
        ssize_t sent = sendto(sd, &packet, sizeof(packet), 0,(struct sockaddr *)&server_addr, sizeof(server_addr));
        if(sent < 0){
            perror("sendto() falhou");
            close(sd);
            return EXIT_FAILURE;
        }
        struct sockaddr_in response_addr;
        socklen_t response_addr_len = sizeof(response_addr);

        ssize_t received = recvfrom(sd, &packet, sizeof(packet), 0,(struct sockaddr *)&response_addr, &response_addr_len);

        if(received < 0){if(i == 1){ printf("Data/hora: não foi possível contactar servidor\n"); close(sd); return EXIT_FAILURE;}} 
        else{
            uint32_t txTm_s = ntohl(packet.txTm_s); 
            time_t raw_time =(time_t)(txTm_s - NTP_TIMESTAMP_DELTA);

            struct tm *timeinfo = gmtime(&raw_time);
            if(!timeinfo){
                perror("gmtime() falhou");
                close(sd);
                return EXIT_FAILURE;
            }

            const char *day   = days_of_week[timeinfo->tm_wday];
            const char *month = months[timeinfo->tm_mon];

            printf("Data/hora: %s %s %02d %02d:%02d:%02d %d\n", day, month, timeinfo->tm_mday, timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec, 1900 + timeinfo->tm_year);
            close(sd);
            return EXIT_SUCCESS;
        }
    }
    close(sd);
    return EXIT_FAILURE;
}
