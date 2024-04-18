#include<stdio.h>
int main()
{
    int paisa;
    int x,y;
    printf("\n\nplease enter the amount in paisa: "); scanf("%d",&paisa);
     x=paisa/100;
     y=paisa%100;

     printf("\n\n\n\n%d",x);
     printf(" rupree and %d",y);
     printf(" paisa\n\n\n");

     return 0;

}