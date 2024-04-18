#include<stdio.h>

 int fact(int n)
 {
     if(n<=1)
     {
         return 1;
     }
     return n*fact(n-1);
 }

 int main()
 {
     int a;
     printf("enter a numbers:");
     scanf("%d",&a);

     printf("the factorial is :%d ",fact(a));

     return 0;
 }