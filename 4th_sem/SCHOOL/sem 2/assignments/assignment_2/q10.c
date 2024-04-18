#include<stdio.h>
int  main()
{
    int radius;
    printf("enter the radius of the circle : ");
    scanf("%d",&radius);
    float peri = radius * 3.1469 * 2;
    printf("the perimeter of the circle is : %0.2f sq units",peri);
    return 0;
}