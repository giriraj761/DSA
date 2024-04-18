#include<stdio.h>
int main()
{
    int num,comp,rev=0;
    printf("enter a num: "); scanf("%d",&num);

    comp=num;
    while (num>0)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    (rev==comp)?
    printf("plaindrome\n"):
    printf("not a plaindrome\n");

    return 0;
}    