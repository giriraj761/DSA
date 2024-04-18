#include<stdio.h>

int add(int a, int b)
{
    return a+b;
}
int subtract(int a ,int b)
{
    return a-b;
}
int multiply(int a ,int b)
{
    return a*b;
}
float division(int a , int b)
{
    return a/b;
}

int main()
{
    int a=0,b=0;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);

    printf("the sum is %d\n",add(a,b));
    printf("the subtraction is %d\n",subtract(a,b));
    printf("the multiplication is %d\n",multiply(a,b));
    printf("the division is %0.2f\n",division(a,b));

    return 0;
}