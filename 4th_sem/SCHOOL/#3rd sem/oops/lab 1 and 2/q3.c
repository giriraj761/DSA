#include <stdio.h>
void main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = (sizeof(a) / sizeof(a[0])) - 1; i >= 0; i--)
    {
        printf("%d\n", *(a + i));
    }
}