#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p0;
    long *p1;
    float *p2;
    double *p3;
    char *p4;
    printf("size of int pointer is    %d\nsize of int is     %d\n\n", sizeof(p0), sizeof(int));

    printf("size of long pointer is   %d\nsize of long is    %d\n\n", sizeof(p1), sizeof(long));

    printf("size of float pointer is  %d\nsize of float is   %d\n\n", sizeof(p2), sizeof(float));

    printf("size of double pointer is %d\nsize of double is  %d\n\n", sizeof(p3), sizeof(double));

    printf("size of char pointer is   %d\nsize of char is    %d\n\n", sizeof(p4), sizeof(char));  
}