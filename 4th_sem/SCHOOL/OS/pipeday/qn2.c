#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#define MSGSIZE 20
//parent to child number and check armstrong
int main()
{
    char inbuf[MSGSIZE];
    int p[2], i;
    if (pipe(p) < 0)
        exit(1);
    
    if (fork()==0)
    {
        read(p[0], inbuf, MSGSIZE);
        int num=atoi(inbuf);
        int temp=num;
        int sum=0;
        int digits=0;
        while(temp>0)
        {
            digits++;
            temp/=10;
        }
        temp=num;
        while(temp>0)
        {
            sum+=pow(temp%10,digits);
            temp/=10;
        }
        if(sum==num)
        write(p[1], "is armstrong", MSGSIZE);
        else
        write(p[1], "is not armstrong", MSGSIZE);
    }
    else
    {
        write(p[1], "153", MSGSIZE);
        wait(10);
        read(p[0], inbuf, MSGSIZE);
        printf("Message recived at parent: %s\n", inbuf);
    }
    return 0;
}