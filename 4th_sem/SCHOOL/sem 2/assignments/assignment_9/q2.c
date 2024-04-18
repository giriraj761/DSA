#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("enter a string :");gets(str1);

    int i;
    for ( i = 0; str1[i] != '\0'; i++)
    {
        str2[i]=str1[i];
    }

   str2[i]='\0';

    printf("the copied string is :%s ",str2);
    return 0;
}