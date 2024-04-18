#include<stdio.h>
int main()
{
    int n,max=-35000;
    printf("enter size of array:");scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)max=arr[i];
    }
    printf("\n\nThe maximum of the array is :%d",max);
    
    return 0;
}