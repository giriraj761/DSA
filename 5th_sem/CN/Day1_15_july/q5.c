#include <stdio.h>
// #include <stdlib.h>
int main()
{
    unsigned int i = 1;
    char *c = (char*)&i;
    if (*c)
        printf("\nLittle Endian\n" );
    else
        printf("\nBig Endian\n" );

    int n = 0x12345678;
    int a = (n & 0xff000000) >> (3 * 8) |
            (n & 0x00ff0000) >> (1 * 8) |
            (n & 0x0000ff00) << (1 * 8) |
            (n & 0x000000ff) << (3 * 8);
            
    printf("\nLittle Endian is: 0x%x \nBig Endian is: 0x%x\n", n, a);
    return 0;
}