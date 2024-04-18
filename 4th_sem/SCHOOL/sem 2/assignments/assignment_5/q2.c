#include<stdio.h>
#include<stdbool.h>
int main()
{
    int num;
    int fac=0;
    printf("enter any number:"); scanf("%d",&num);

    for (int i = 1; i <num; i++)
    {
        if(num%i==0)
           fac+=i;
    }
    (fac==num)?
    printf("is prefect number\n"):
    printf("is not a perfect number");

    return 0;
}