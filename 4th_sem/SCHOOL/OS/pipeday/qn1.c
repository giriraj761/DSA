#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#define MSGSIZE 20
//parent to child number and check armstrong
int main()
{
    char inbuf1[MSGSIZE];
    char inbuf2[MSGSIZE]="Hello";
    int p1[2];
    int p2[2];
    if (pipe(p1) < 0)
        exit(1);
    if (pipe(p2) < 0)
        exit(1);
        
    int x=fork();
    if (x==0)
    {
        write(p1[1], "HelloParent", MSGSIZE);
        read(p2[0], inbuf2, MSGSIZE);
        printf("Message recived at child: %s\n", inbuf2);
    }
        else
        {
        read(p1[0], inbuf1, MSGSIZE);
        char ch[MSGSIZE];
        strcpy(ch,inbuf1);
        int len=strlen(ch);
        for(int i=0;i<len/2;i++)
        {
            char c=ch[i];
            ch[i]=ch[len-1-i];
            ch[len-1-i]=c;
        }
        write(p2[1], ch, MSGSIZE);
        printf("Message recived at parent: %s\n", inbuf1);
    }
    return 0;
}