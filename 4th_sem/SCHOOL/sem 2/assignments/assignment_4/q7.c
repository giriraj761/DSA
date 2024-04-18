#include<stdio.h>
int main()
{
   
    int a;
    printf("Enter your age: ");
    scanf("%d",&a);
    a<1?printf("you aren't even born -_- lol "):
    a<=10?printf("Child"):
    a<=20?printf("Adolescent"):
    a<=100?printf("Adult"):
    printf("You are probably dead.'o'");

    return 0;
    
}