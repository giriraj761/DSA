#include<stdio.h>
int main()
{
    char n;
    printf("enter any character: ");scanf("%c",&n);

    if(n>='a'&& n<='z' || n>='A'&& n<='Z' )printf("alphabets\n\n");
    else if(n>='0'&& n<='9')printf("number\n\n");
    else printf("special\n\n");

    return 0;

}