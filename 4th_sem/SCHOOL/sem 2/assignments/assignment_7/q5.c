#include <stdio.h>
#include <stdlib.h>
void swp(int *a, int *b)
{
    *a= *a + *b;
    *b= *a - *b;
    *a= *a - *b;
}
void main()
{
    int a, b;
    printf("enter two number: ");
    scanf("%d %d", &a, &b);
    printf("before swapping %d, %d\n", a, b);
    swp(&a, &b);
    printf("after swapping %d, %d", a, b);
}