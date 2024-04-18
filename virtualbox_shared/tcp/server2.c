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

    if ((listen(sockfd, 3)) != 0)
    {
        printf("Listen failed...\n");
        exit(0);
    }
    len = sizeof(cli);
    while (1 == 1)
    {

        if ((connfd = accept(sockfd, (SA *)&cli, &len)) < 0)
        {
            printf("server accept failed...\n");
            exit(0);
        }
        int num[3];
        read(connfd, num, sizeof(num));
        //printf("Client: %d %d\n", num[0], num[1]);
        //sprintf(buff, "Sum is %d", num[0] + num[1]);
        for(int i =0;i<3;i++)
        {
                if(num[i] >= 90 && num[i] <=100)
                sprintf(buff, "grade : O ");
                else if(num[i] >= 80 && num[i] <90)
                sprintf(buff, "grade : E ");
                else if(num[i] >= 70 && num[i] <80)
                sprintf(buff, "grade : A ");
                else if(num[i] >= 70 && num[i] <80)
                sprintf(buff, "grade : B ");
                else if(num[i] >= 70 && num[i] <80)
                sprintf(buff, "grade : C ");
                else
                sprintf(buff, "grade : D ");
	}
        write(connfd, buff, sizeof(buff));
    }
    close(sockfd);
}
