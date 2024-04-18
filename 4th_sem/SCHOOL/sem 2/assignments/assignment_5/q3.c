#include<stdio.h>
int main()
{
    int n;
    int a=0,b=1,c;
    printf("enter range:"); scanf("%d",&n);
    printf("0 1 ");
    for (int i = 1; i <n; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

    return 0;
}