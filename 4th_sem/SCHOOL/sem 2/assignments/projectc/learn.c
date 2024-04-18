#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int s=-100,e=100;

    for (int i = 0; i < 100; i++)
    {
        printf("%d ",rand()%(e-s+1)+s);
        //{100-(-100)+1)+(-100)
    }
    

    return 0;
}