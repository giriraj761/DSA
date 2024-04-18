#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array max 100:"); scanf("%d",&n);
    int arr[n];

      for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {        
        if(arr[i]>99 && arr[i]<1000)
        {
            if(arr[i]%2==0)
            {
                printf("%d ",arr[i]);
            }
        }
    }
    
    return 0;
}