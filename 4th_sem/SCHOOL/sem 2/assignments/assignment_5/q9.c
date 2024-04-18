#include<stdio.h>
int fact(int num)
{
    int fac=1;
    for (int i = 2; i <=num; i++)
    {
        fac*=i;
    }
    return fac;
}

void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum=0,temp=n;

    while(n>0)
    {
        sum+=fact(n%10);
        n/=10;
    }   
    (temp==sum)?
        printf("Strong number."):
        printf("Not strong number.");
}