#include<stdio.h>
int main()
{
    int a=5;
    printf("enter no of lines:");scanf("%d",&a);
    int b=a;
    for (int i = 1; i <=b; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = a; k >=1; k--)
        {
            printf("%d",k);  
        }
        for (int l =2 ; l <=a ; l++)
        {
            printf("%d",l);
        }  
        a--;
        printf("\n");
    }
    

    return 0;
}