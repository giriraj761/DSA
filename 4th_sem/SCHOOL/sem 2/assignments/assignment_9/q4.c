#include<stdio.h>
int main()
{
    char str[100],str2[100];
    int a=1;
    printf("enter a string :");gets(str);
    str2[0]=str[0];
    for ( int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]==' ')
        {
           str2[a]=str[i+1];
           a++;
        }
    }
    str2[a]='\0';

    printf("the first words are :%s",str2);
    return 0;
}