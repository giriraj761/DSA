#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter range:"); scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        sum+=(i*(i+1)/2);
    }

    printf(" the sum of series is :%d ",sum);
    return 0;
}