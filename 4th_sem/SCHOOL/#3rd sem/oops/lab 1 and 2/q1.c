#include <stdio.h>
void add(int a, int b, int *ans)
{
    *ans = a + b;
}
void main()
{
    int a;
    add(10, 5, &a);
    printf("\n%d\n", a);
}