#include <stdio.h>

int add(int a, int b)
{ 
    return a+b;
}

void main()
{
    int a ,b;
    printf("enter 2 numbers to add: ");
    scanf("%d %d", &a, &b);
    int sum = add(a,b) ;
    printf("%d", sum);
}