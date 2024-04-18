#include<stdio.h>

struct units
{
   float inch;
   int feet;

}dis1,dis2,sum;

int main()
{
    printf("1st distance\n");
    printf("Enter the feet: ");
    scanf("%d", &dis1.feet);
    printf("Enter the inches: ");
    scanf("%f", &dis1.inch);
    printf("2nd distance\n");
    printf("Enter the feet: ");
    scanf("%d", &dis2.feet);
    printf("Enter the inches: ");
    scanf("%f", &dis2.inch);

    sum.inch=dis1.inch+dis2.inch;
    sum.feet=dis1.feet+dis2.feet;

    if(sum.inch>11)
    {
        sum.feet+=sum.inch/12;
        sum.inch=(int)sum.inch%12;
    }

    printf("\nThe units after adding is :%d feet and %0.2f inches",sum.feet,sum.inch);

    return 0;
}