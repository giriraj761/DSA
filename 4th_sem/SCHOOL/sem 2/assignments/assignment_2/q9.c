#include<stdio.h>

int main()
{
    float cel,fah;
    printf("enter temperature in celcius : ");
    scanf("%f",&cel);
    fah=(cel*1.8)+32;
    printf("the temperature in faherheight is %0.2f\n",fah);
    return 0;
}


