#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a number : "); scanf("%d",&n);

    while (n>0)
    {
        sum+=n%10;
        n=n/10;
    }
    
    printf("the sum of digits is: %d\n",sum);

    return 0;
}   