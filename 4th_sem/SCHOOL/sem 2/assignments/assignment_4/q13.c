#include<stdio.h>
int main()
{
    int num,rev=0;
    printf("enter a num: "); scanf("%d",&num);

    while (num>0)
    {
        rev=rev*10+num%10;
        num/=10;
    }

    printf("the reversed no is :%d",rev);
    return 0;

}  