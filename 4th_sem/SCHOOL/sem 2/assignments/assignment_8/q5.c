#include<stdio.h>
int main()
{
    char str[50]="hello world";

    int count=0;
    char *p=str;

    while (*p!='\0')
    {

       if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            count++;

        p++;
    }

    printf("the string was %s\n and the no of vowels are :%d",str,count);

    return 0;  
}