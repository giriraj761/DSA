#include<stdio.h>
int main()
{
    int coff;
    for (int i = 1; i <=6; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            printf(" ");
        }
        
        coff=1;
      for(int j=1;j<=i;j++)
      {
          printf(" %d",coff);
          coff=coff*(i-j)/j;
      }
      printf("\n");
    }
    return 0;
}