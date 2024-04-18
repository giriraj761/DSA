#include <stdio.h>
#include <stdlib.h>
void swp(int *a, int *b)
{
    *a= *a + *b;
    *b= *a - *b;
    *a= *a - *b;
}

void nswap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;

    printf("the normal swapped is :%d %d\n",a,b);
}
void main()
{
    system("cls");
    int a, b;
    printf("enter two number: ");
    scanf("%d %d", &a, &b);
    printf("before swapping %d, %d\n", a, b);
    nswap(a,b);//normally value
    swp(&a, &b);//call by refrence
    printf("after swapping by refrence %d, %d\n", a, b);
}