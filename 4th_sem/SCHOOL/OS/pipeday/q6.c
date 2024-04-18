#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#define MSGSIZE 20
int main()
{
    char inbuf[MSGSIZE];
    int p[2], i;
    if (pipe(p) < 0)
        exit(1);
    
    if (fork()==0)
    {
        read(p[0], inbuf, MSGSIZE);
        int a=atoi(inbuf);
        read(p[0], inbuf, MSGSIZE);
        int b=atoi(inbuf);
        printf("Sum of the number is: %d\n", a+b);
    }
    else
    {
        write(p[1], "12", MSGSIZE);
        write(p[1], "24", MSGSIZE);
    }
        wait(10);
    return 0;
}