#include<stdio.h>
int main()
{
    system("cls");
    char str[100],str2[100];
    int s,e,a=0;
    printf("enter a string :");gets(str);
    printf("enter the range in which u want to get the substring :start and end :");
    scanf("%d %d",&s,&e);
    int len =strlen(str);

    if(e>len)
    {
        printf("please enter the range less than the string length");
        exit(0);
    }
    for ( int i = s-1; i<e ; i++)
     {
       str2[a]=str[i];
       a++;
     }
    
    str2[a]='\0';

    printf("the substring is :%s",str2);
    return 0;
}