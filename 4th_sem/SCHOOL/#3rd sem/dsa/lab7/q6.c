#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int **arr = (int **)calloc(n, sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        arr[i] = (int *)calloc(m, sizeof(int));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int zcount = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                zcount++;
            }
        }
    }
    if (zcount > 0.50 * n * m)
    {
        printf("Array is sparse with %f percent 0s.\n", ((float)zcount / (n * m)) * 100);
    }
}