#include <stdio.h>
#include <stdlib.h>
void main()
{

    int arr[5]={0,0,0,0,0};
    arr[0]=76;
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }


    int n;
    int *p;
    int max = -36500;
    printf("enter the size of the array.\n");
    scanf("%d", &n);
    p = (int*)malloc(n * sizeof(int));

    printf("enter %d elements in the array.\n", n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);

    }

    *(p+2)=-1;

    for(int i=0 ;i<n;i++)
    {
       printf("%d ",*(p+i));
        
    }
}