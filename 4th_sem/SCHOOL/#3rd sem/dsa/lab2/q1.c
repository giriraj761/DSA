#include <stdio.h>
typedef struct complex 
{
    float real;
    float imaginary;
}comp;
struct complex addComp(struct complex a, struct complex b)
{
    comp sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
struct complex subComp(struct complex a, struct complex b)
{
    comp sub;
    sub.real = a.real - b.real;
    sub.imaginary = a.imaginary - b.imaginary;
    return sub;
}
void main()
{
    comp a, b;
    printf("Enter 1st complex number.");
    scanf("%f %f", &a.real, &a.imaginary);
    printf("Enter 2nd  complex number.");
    scanf("%f %f", &b.real, &b.imaginary);
    struct complex sum = addComp(a, b);
    struct complex sub = subComp(a, b);

    printf("the sum is: %f %0.2fi\n", sum.real, sum.imaginary);
    printf("the difference is: %f %0.2fi", sub.real, sub.imaginary);
}