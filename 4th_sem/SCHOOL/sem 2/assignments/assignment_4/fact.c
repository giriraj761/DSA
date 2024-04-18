#include<stdio.h>
int main()
{
    int num,sum=1;
    printf("enter a number:");
    scanf("%d",&num);
    
    for (int i = 1; i <=num; i++)
    {
       sum=sum*i;
    }

    printf("the factorial of  %d is :%d",num,sum);
     return 0;
}