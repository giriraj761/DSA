#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <time.h>

#define PORT 8080
#define MAXLINE 1024

int main()
{
  int sockfd; //opens a socket for decided protocol
  char buffer[MAXLINE]; //buffer for storing from cilent side
  struct sockaddr_in servaddr, cliaddr;
  if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0)
  {
    perror("socket creation failed");
    exit(EXIT_FAILURE);
  }

  memset(&servaddr, 0, sizeof(servaddr));
  memset(&cliaddr, 0, sizeof(cliaddr));

  servaddr.sin_family = AF_INET; // IPv4
  servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
  servaddr.sin_port = htons(8080);

  if (bind(sockfd, (const struct sockaddr *)&servaddr,
           sizeof(servaddr)) < 0)
  {
    perror("bind failed");
    exit(EXIT_FAILURE);
  }

  int len, n;
  len = sizeof(cliaddr);

  n = recvfrom(sockfd, (char *)buffer, MAXLINE,MSG_WAITALL, (struct sockaddr *)&cliaddr,&len);
  buffer[n] = '\0';
  //int num1 = atoi(buffer);
  //struct tm *ptm = (struct tm *)buffer;
  printf("recived ");

  printf("Client : sent %s\n", buffer);
  char hello[50];

  // printf("%s", hello);
  //sprintf(hello, "The time is %2d", num1);
  sendto(sockfd, (const char *)hello, strlen(hello),MSG_CONFIRM, (const struct sockaddr *)&cliaddr,len);
  printf("time sent.\n");

  return 0;
}
