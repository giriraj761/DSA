#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct pens
    {
        int color;
    }p1[2];

    struct pens p2[3];
     p1[0].color=5;
     p1[1].color=9;
     p2[0].color=11;
     p2[1].color=9;

     if (p2[1].color==p1[1].color)
     {
          printf("true\n");
     }
     
     system("cls");
     printf("%d",p1[0].color);
     printf("\n%d",p1[1].color);
     printf("\n%d",p2[0].color);
    
    return 0;
}