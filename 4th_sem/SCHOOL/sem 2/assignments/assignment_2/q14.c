#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter marks in 5 subjects :");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int avg = a+b+c+d+e;
    float per=avg/5;
    printf("the average marks is :%d and percentage is :%0.2f",avg,per);
     
     return 0;

}