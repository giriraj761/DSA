
#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

float edis(int j,int vectorarr[][10],int vector[])
{
    float dis=0;
    for (int  a = 0; a < 3; a++)
    {
        dis+=(pow(vector[a]-vectorarr[a][j],2));
    }
    dis=sqrt(dis);
    return dis;
}

int main()
{
    int vectorarr[3][10];

    for (int  i = 0; i < 3; i++)
    {
        for (int j=0;j<10;j++)
        {
            vectorarr[i][j]=rand();
        }
        
    }

    int vector[3];
    for (int i = 0; i < 3; i++)
    {
        vector[i]=rand();
    }
    
    float distance[10];
    for (int i = 0; i < 10; i++)
    {
        distance[i]=edis(i,vectorarr,vector);
    }
    
    int min=36000;
    for (int  i = 0; i < 10; i++)
    {
        if(distance[i]<min)
        {
            min=distance[i];
        }
    }

    printf("the smallest distance is : %d ",min);
    

    return 0;
}