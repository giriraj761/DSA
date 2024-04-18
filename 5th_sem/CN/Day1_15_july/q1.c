#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        printf("before :a=%d b=%d\n", a, b);
        swap(&a, &b);
        printf("after :a=%d b=%d", a, b);
    }
    else
    {
        printf("Arguments required.");
    }

    return 0;
}