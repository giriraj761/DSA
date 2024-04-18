#include<stdio.h>
int main()
{
    int n,j=0,key=0;
    printf("enter size of array:");scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

        if(i==0)continue;

        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}