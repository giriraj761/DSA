#include <stdio.h>
int max(int a, int b, int c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}
int min(int a, int b, int c)
{
    return a < b ? (a < c ? a : c) : (b < c ? b : c);
}
void main()
{
    printf("the maximum number is :");
    printf("%d", min(1, 2, 3));
    printf("\nthe minimum number is :");
    printf("%d", max(1, 2, 3));
}