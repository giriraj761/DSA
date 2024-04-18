#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#define MAX 80
#define PORT 8080
#define SA struct sockaddr

int main()
{
    int sockfd, connfd, len;
    char buff[MAX];
    struct sockaddr_in servaddr, cli;

    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) <= -1)
    {
        printf("socket creation failed...\n");
        exit(0);
    }
    bzero(&servaddr, sizeof(servaddr));

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    servaddr.sin_port = htons(PORT);

    if ((bind(sockfd, (SA *)&servaddr, sizeof(servaddr))) < 0)
    {
        printf("socket bind failed...\n");
        exit(0);
    }
    if ((listen(sockfd, 1)) != 0)
    {
        printf("Listen failed...\n");
        exit(0);
    }
    len = sizeof(cli);

    if ((connfd = accept(sockfd, (SA *)&cli, &len)) < 0)
    {
        printf("server accept failed...\n");
        exit(0);
    }
    read(connfd, buff, sizeof(buff));
    printf("Client: %s\n", buff);
    sprintf(buff, "Hello from server");
    write(connfd, buff, sizeof(buff));

    close(sockfd);
}
