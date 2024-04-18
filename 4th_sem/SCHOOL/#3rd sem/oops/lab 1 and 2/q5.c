#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("enter the number of terms in an array ");
    scanf("%d", &n);
    printf("enter the array \n");
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    for(int i=1 ;i<n; i++)
    {
        int key =*(arr+i);
        int j=i-1;

        while(j>=0 && arr[j]>key)
        {
            *(arr+j+1)=*(arr+j);
            j--;
        }
        *(arr+j+ 1)=key;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", *(arr + i));
    }
}