#include<stdio.h>
void main()
{
    int n;
    
    do{

        printf("enter the value for n .(a positive number)\ny=nx");
        scanf("%d",&n);
        if(n<0)
        {
            continue;
        }
        for(int i=1;i<10;i++)
        {
            printf("y=%d ,x=%d\n",n*i,i);
        }break;
   
    }while(1==1);
       
}