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
    int sockfd73, connfd, len;
    char buff[MAX];
    struct sockaddr_in servaddr, cli;

    if ((sockfd73 = socket(AF_INET, SOCK_STREAM, 0)) <= -1)
    {
        printf("socket creation failed...\n");
        exit(0);
    }
    bzero(&servaddr, sizeof(servaddr));

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    servaddr.sin_port = htons(PORT);

    if ((bind(sockfd73, (SA *)&servaddr, sizeof(servaddr))) < 0)
    {
        printf("socket bind failed...\n");
        exit(0);
    }

    if ((listen(sockfd73, 3)) != 0)
    {
        printf("Listen failed...\n");
        exit(0);
    }
    len = sizeof(cli);
    while (1 == 1)
    {

        if ((connfd73 = accept(sockfd73, (SA *)&cli, &len)) < 0)
        {
            printf("server accept failed...\n");
            exit(0);
        }
        int num[3];
        char grade[100];
        bzero(grade, sizeof(grade));
        read(connfd73, num, sizeof(num));
        grade[0]=' ';
        int j = 0;
        for(int i =1; i<=6 ;i+=2)
        {
                if(num[j] >= 90 && num[j] <=100)
                {
                	grade[i]='O';
                	grade[i+1]=' ';
                }
                	
                else if(num[j] >= 80 && num[j] <90)
                {
                	grade[i]='E';
                	grade[i+1]=' ';
		}
                else if(num[j] >= 70 && num[j] <80)
                {
                	grade[i]='A';
                	grade[i+1]=' ';
		}
                else if(num[j] >= 60 && num[j] <70)
                {
                	grade[i]='B';
                	grade[i+1]=' ';
		}
                else if(num[j] >= 50 && num[j] <60)
                {
                	grade[i]='C';
                	grade[i+1]=' ';
		}
                else if(num[j] < 50)
                {
                	grade[i]='F';
                	grade[i+1]=' ';
		}
		j++;
	}
        write(connfd73, grade, sizeof(grade));
    }
    close(sockfd73);
}
