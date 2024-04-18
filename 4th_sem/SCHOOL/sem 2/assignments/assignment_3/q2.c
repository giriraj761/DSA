#include<stdio.h>

int main()
{
    int a,b;
    printf("\n\n\nenter two integer values a and b :");
    scanf("%d %d",&a,&b);
    printf("\n\n\n\nthe addition of the integers a=%d and b=%d is a + b= %d\n", a,b,a+b);
    printf("the subtraction of the integers a=%d and b=%d is a - b= %d\n", a,b,a-b);
    printf("the divison of the integers a=%d and b=%d is a / b= %d\n", a,b,a/b);
    printf("the multiplication of the integers a=%d and b=%d is a * b= %d\n", a,b,a*b);
    printf("the modulo of the integers a=%d and b=%d is a %% b= %d\n\n\n\n", a,b,a%b);

    return 0;
}