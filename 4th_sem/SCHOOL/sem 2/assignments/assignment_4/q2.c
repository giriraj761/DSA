#include<stdio.h>
int main()
{
    char a;
    printf("Enter an alphabet: ");
    scanf("%c",&a);
    a>='a'&&a<='z'?
    printf("Captialized Letter is %c",a-32):
    printf("Enter a letter in lowercase.");

}