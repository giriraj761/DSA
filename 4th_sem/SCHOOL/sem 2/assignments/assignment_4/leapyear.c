#include<stdio.h>
int main()
{
    int year,arr[10];
    printf("enter a year: "); scanf("%d",&year);

    (year%4==0 && year%100!=0)?
      printf("leap year"):(year%400==0)?
         printf("leap year"):printf("not a leap year");

    // for(auto x:arr[])
    // {
    //     printf("hello world");
    // }
    

    return 0;
}
