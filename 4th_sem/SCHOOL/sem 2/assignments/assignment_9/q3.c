#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("enter 1st string :");gets(str1);
    printf("enter 2nd string :");gets(str2);

    int flag=0;
    for ( int i = 0; str1[i] != '\0'; i++)
    {
        if(str2[i]!=str1[i])
        {
            flag=1;
        }
    }
    (flag==0)?
    printf("the string match is "):
    printf("the string is not matching ");

    return 0;
}