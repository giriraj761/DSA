#include<stdio.h>

int main()
{
    float cel,fah;
    printf("enter temperature in fahenheight"); scanf("%f",&fah);
    cel=(fah-32);
    cel=cel/1.8;
    printf("the temperature in celcius is %0.2f\n",cel);
    return 0;
}