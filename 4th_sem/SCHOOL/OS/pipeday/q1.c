#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define MSGSIZE 16
int main()
{
    char inbuf[MSGSIZE];
    int p[2], i;
  
    if (pipe(p) < 0)
        exit(1);
  
    write(p[1], "Hello World", MSGSIZE);
    
    read(p[0], inbuf, MSGSIZE);
    printf("%s\n", inbuf);
    return 0;
}