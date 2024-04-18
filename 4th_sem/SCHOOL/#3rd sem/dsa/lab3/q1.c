#include <stdio.h>
#include <stdlib.h>
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
    int ul, ll;
    printf("ENTER THE RANGE: ");
    scanf("%d %d", &ll, &ul);
    printf("ELEMENTS IN THE RANGE ARE.\n");

    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) <= ul && *(arr + i) >= ll)
        {
            printf("%d, ", *(arr + i));
        }
    }
}