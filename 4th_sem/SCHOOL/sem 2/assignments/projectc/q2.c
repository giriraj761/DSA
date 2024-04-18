#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    int n;
    srand(time(0));
    n=rand()%100;

    printf("%d",n);

    int *p;
    p = (int*) malloc(n * sizeof(int));

    float avg=0;

    printf("\n\n\nTHE ELEMENTS IN AN ARRAY ARE :\n\n");

    for (int i = 0; i < n; i++)
    {
        *(p+i)=rand()%100; //gernerates interger number less than 100

        printf((i==n-1)?"%d ":"%d, ",*(p+i));//printing
        
            
        avg+=*(p+i);//adding all the elements 

    }

    avg=avg/n;
    printf("\n\nTHE AVERAGE IS : %0.3f ",avg);
    printf("\n\n");

    float std=sqrt(avg);
    printf("THE STANDARD DEVIATION IS : %0.3f ",std);
    printf("\n\n");

    printf("THE SUM OF AVERAGE AND STANDARD DEVIATION IS : %0.5f \n\n--THANK YOU--",std+avg);
}