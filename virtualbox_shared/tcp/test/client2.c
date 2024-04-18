#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#define MAX 80
#define PORT 8080
#define SA struct sockaddr
void func(int sockfd)
{
}

int main()
{
    int sockfd, connfd;
    struct sockaddr_in servaddr, cli;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1)
    {
        printf("socket creation failed...\n");
        exit(0);
    }
    bzero(&servaddr, sizeof(servaddr));

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    servaddr.sin_port = htons(PORT);

    if (connect(sockfd, (SA *)&servaddr, sizeof(servaddr)) != 0)
    {
        printf("connection with the server failed...\n");
        exit(0);
    }
    char buff[MAX];
    int num[3];
    printf("Enter  marks in 3 subjects PCM : ");
    scanf("%d %d %d", &num[0], &num[1],&num[2]);
    write(sockfd, num, sizeof(num));
    bzero(buff, sizeof(buff));
    //for(int i=0;i<3;i++)
    //{
    read(sockfd, buff, sizeof(buff));
    printf("Server : %s\n",buff);
    bzero(buff, sizeof(buff));
  //}
    close(sockfd);
}
