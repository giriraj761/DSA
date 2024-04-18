#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    int rev=0;
     while(n>0)
     {
         rev=rev*10+n%10;
         n=n/10;
     }

     printf("the reverse is : %d",rev);
}