#include <stdio.h>
int fact(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}
void main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("%d", fact(a));
}