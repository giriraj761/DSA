#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include<string.h>
#define MSGSIZE 20
int main()
{
    char inbuf[MSGSIZE];
    int p[2], i;
    char rev[MSGSIZE];
    if (pipe(p) < 0)
        exit(1);
    
    if (fork()==0)
    {
        write(p[1], "Hello from child", MSGSIZE);
    }
    else
    {
        read(p[0], inbuf, MSGSIZE);
        rev = strrev(inbuf);
        printf("Message recived at: %s\n", rev);
    }

    return 0;
}