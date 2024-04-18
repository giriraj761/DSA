// 7.WAP to print all odd and even numbers separately within
// a given range.The range is input through user.
#include<stdio.h>
int main()
{
    int r;
    printf("enter a range of numbers");scanf("%d",&r);
    int flag=0;

    do
    {
        flag=1;
        if(flag==1)printf("\nodd numbers: ");
        for(int i=1;i<=r;i+=2)
        {
            printf("%d ",i);
        }
        if(flag==1)printf("\neven numbers: ");
        for(int i=2;i<=r;i+=2)
        {
            printf("%d ",i);
        }
        flag=0;
    } while(flag==1);

    return 0;
}