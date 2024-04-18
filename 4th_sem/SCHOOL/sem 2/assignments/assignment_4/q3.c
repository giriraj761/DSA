#include<stdio.h>
int main()
{
    char a;
    printf("Enter an alphabet: ");
    scanf("%c",&a);
    a+=a>='a'&&a<='z'?0:'a'-'A';
    a=='a'||a=='e'||a=='i'||a=='o'||a=='u'?
    printf("%c is a Vowel",a):
    printf("%c is consonent",a);

}