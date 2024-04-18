#include<stdio.h>
int main()
{
    int a,b,c;
    printf("plz enter 3 numbers: a b c : "); scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)printf("\na is the largest");
        else printf("c is the largest");
    }
    else
    {
        if(b>c)printf("b is the largest");
        else printf("c is the largest");
    }
    printf("\n");
    return 0;
}