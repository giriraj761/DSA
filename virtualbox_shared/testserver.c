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
        char grade[100];
        bzero(grade, sizeof(grade));
        read(connfd, num, sizeof(num));
        grade[0]=' ';
        int j = 0;
        for(int i =1; i<=6 ;i+=2)
        {
                if(num[j] >= 90 && num[j] <=100)
                {
                	//sprintf(buff, "grade : O ");
                	grade[i]='O';
                	grade[i+1]=' ';
                	//write(connfd, buff, sizeof(buff));
                	//bzero(buff, sizeof(buff));
                }
                	
                else if(num[j] >= 80 && num[j] <90)
                {
                	//sprintf(buff, "grade : E ");
                	grade[i]='E';
                	grade[i+1]=' ';
                	//write(connfd, buff, sizeof(buff));
                	//bzero(buff, sizeof(buff));
		}
                else if(num[j] >= 70 && num[j] <80)
                {
                	//sprintf(buff, "grade : A ");
                	grade[i]='A';
                	grade[i+1]=' ';
                	//write(connfd, buff, sizeof(buff));
                	//bzero(buff, sizeof(buff));
		}
                else if(num[j] >= 60 && num[j] <70)
                {
                	//sprintf(buff, "grade : B ");
                	grade[i]='B';
                	grade[i+1]=' ';
                	//write(connfd, buff, sizeof(buff));
                	//bzero(buff, sizeof(buff));
		}
                else if(num[j] >= 50 && num[j] <60)
                {
                	//sprintf(buff, "grade : C ");
                	grade[i]='C';
                	grade[i+1]=' ';
                	//write(connfd, buff, sizeof(buff));
                	//bzero(buff, sizeof(buff));
		}
                else if(num[j] < 50)
                {
                	//sprintf(buff, "grade : F ");
                	grade[i]='F';
                	grade[i+1]=' ';
                	//write(connfd, buff, sizeof(buff));
                	//bzero(buff, sizeof(buff));
			bzero(buff, sizeof(buff));
		}
		j++;
	}
	//buff = grade;
	//sprintf(buff,"grade :",grade);
	//printf("%s\n",buff);
        write(connfd, grade, sizeof(grade));
    }
    close(sockfd);
}
