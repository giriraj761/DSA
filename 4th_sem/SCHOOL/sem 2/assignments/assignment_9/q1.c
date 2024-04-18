#include<stdio.h>
int main()
{
    char str[100];
    int count=0;
    printf("enter a string :");gets(str);

    for (int  i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("the length of string is :%d ",count);
    return 0;
}