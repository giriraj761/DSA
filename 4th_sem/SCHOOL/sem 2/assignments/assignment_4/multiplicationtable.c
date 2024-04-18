#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    
    for (int i = 1; i <=10; i++)
    {
        sum=i*num;
        printf("%d x %d = %d\n",num,i,sum);
    }

     return 0;
}