#include <stdio.h>
#include <stdlib.h>
int sumDig(int n)
{
    int sum=0;
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
      return sum;   
}

void main()
{
    int a;
    printf("enter a number:");
    scanf("%d", &a);
    printf("%d", sumDig(a));
}