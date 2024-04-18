#include<stdio.h>
int main()
{
    int arr[15],sum=0;
    for (int i = 0; i < 15; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
    }

    printf("\n\nthe sum is : %d",sum);
     return 0;
}