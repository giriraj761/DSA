#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter size of array:");scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("\n\nThe sum of the array is :%d",sum);
    
    return 0;
}