#include <stdio.h>

void fibo(int n)
{
    int a=0,b=1,c;

    printf("%d %d ",a,b);

    for (int  i = 0; i < n-2; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    
}

int main()
{
    int n;
    printf("Enter no of elements:");
    scanf("%d", &n);
    fibo(n);

    return 0;

}    