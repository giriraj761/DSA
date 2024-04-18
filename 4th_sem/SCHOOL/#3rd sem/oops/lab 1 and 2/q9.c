#include <stdio.h>
struct length
{
    int feet;
    int inch;
};
struct length add(struct length a, struct length b)
{
    struct length res;
    res.inch = a.inch + b.inch;
    res.feet = a.feet + b.feet + (res.inch / 12);
    res.inch %= 12;
    return res;
}
void main()
{
    struct length a, b;
    printf("Enter first length in feets and inches: ");
    scanf("%d %d", &a.feet, &a.inch);
    printf("Enter second length in feets and inches: ");
    scanf("%d %d", &b.feet, &b.inch);
    struct length res = add(a, b);
    printf("%dFEET AND  %d INCHES", res.feet, res.inch);
};
