/*
WAP to enter marks of the exam as input (out of10) and if 
S/he is getting marks in range 8 to 10, S/he will get 'outstanding',
*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter the marks out of 10: ");scanf("%d",&n);

    if(n>=8)printf("outstanding\n\n");
    else if(n<8 && n>=5)printf("excellent\n\n");
    else if(n<5 && n>=2)printf("average\n\n");
    else printf("fail\n\n");

    return 0;

}