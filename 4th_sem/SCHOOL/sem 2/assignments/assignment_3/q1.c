#include <stdio.h>
int main() 
{ 
  int i = 17; 
  char c = 'c'; /* ascii value is 99 */ 
  int sum; 

  sum = i + c;
  printf("\n\n\nValue of sum : %c(%d) + %d = %c(%d)\n\n\n", c,c,i,sum,sum ); 

  return 0;
}