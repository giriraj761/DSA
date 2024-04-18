#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("enter any number:"); scanf("%d",&n);

   for(int j=1;j<=n;j++)
   {
    bool isprime=true;
    for (int i = 2; i*i<=j; i++)
    {
        if(j%i==0)
        {
            isprime=false;
            break;
        } 
    }
    if(isprime)
    {
        printf("%d ",j);
    }
  }

    return 0;
}