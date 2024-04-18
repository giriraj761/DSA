#include<stdio.h>
int main()
{
    int a,b; // initillization of a and variables 
    printf("enter the values : "); scanf("%d,%d",&a,&b);
    a=a+b , b=a-b , a=a-b; // swapping values of a and b in a single line of code
    printf("\n\n\nthe values after swapping  : a=%d b=%d",a,b);
    return 0;
}
