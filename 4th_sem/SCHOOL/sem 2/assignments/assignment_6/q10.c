#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array:");scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\nThe terms in reverse order of the array are :");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}