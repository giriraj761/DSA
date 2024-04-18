#include <stdlib.h>
#include <stdio.h>
void main()
{
    int n;
    printf("ENTER THE LENGTH OF THE ARRAY: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("ENTER ELEMENTS IN THE ARRAY: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
int j=0;
    for (int i = 0; i < n; i++)
    {
        int nge = -1; 
        for (j = i + 1; j < n; j++)
        {
            if (*(arr + j) > *(arr + i))
            {
                nge = *(arr + j);
                break;
            }  
        }
        printf("%d %d\n", *(arr + i), nge);
    }
}