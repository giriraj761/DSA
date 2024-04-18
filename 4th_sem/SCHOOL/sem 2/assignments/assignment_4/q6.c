#include<stdio.h>
int main()
{
   
    int a;
    printf("Enter a day number: ");
    scanf("%d",&a);
    a==1?printf("Monday"):
    a==2?printf("Tuesday"):
    a==3?printf("Wednesday"):
    a==4?printf("Thursday"):
    a==5?printf("Friday"):
    a==6?printf("Saturday"):
    a==7?printf("Sunday"):
    printf("Enter appropriate number");

    return 0;
}