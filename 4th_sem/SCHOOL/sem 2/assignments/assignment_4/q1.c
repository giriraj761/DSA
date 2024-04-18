#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    printf("%f is larger",a>b?a:b);

}