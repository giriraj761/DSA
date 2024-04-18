#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("How many numbers you want to enter: ");
    scanf("%d",&n);
    int *a=(int *)malloc(n * sizeof(int));
    printf("Enter the numbers: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
               if(a[j]>a[i])
               {
                   a[i]=a[j];
                   break;
               }
               if(j == n-1)
               a[i]=-1;
            }
        }
        a[n-1]=-1;
    
    printf("\nThe replaced numbers are ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}