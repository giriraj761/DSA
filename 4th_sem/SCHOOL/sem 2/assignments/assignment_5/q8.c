#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int j=1;j<=n;j++)    
    {
        int fac=1;
        for(int i=2;i<=j;i++)
        {
            fac*=i;
        }
        printf("%d is factorial of %d.\n",fac,j);
    }   
}