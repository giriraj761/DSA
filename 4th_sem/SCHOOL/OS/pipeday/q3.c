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
        printf("Message recived at: %s\n", inbuf);
    }
    else
    {
        write(p[1], "Hello from parent", MSGSIZE);
    }
    wait(1);
    return 0;
}