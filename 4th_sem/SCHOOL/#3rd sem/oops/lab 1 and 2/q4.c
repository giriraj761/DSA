#include<stdio.h>

void swa(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    printf("please enter 3 numbers:\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    swa(&a,&c);
    swa(&b,&c);
    printf("the swapped values are:%d %d %d",a,b,c);
    return 0;
}