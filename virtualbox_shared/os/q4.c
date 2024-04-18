#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
int a,b,c;

    a=fork();
    if(a==0)
      {
	printf("\np1 calls p2\n");
	printf("p1 = %d and p2 = %d\n\n",getppid(), getpid());
	
	b=fork();
	if(b==0)
	{
	  printf("\np2 calls p3\n");
	  printf("p2 = %d and p3 = %d\n\n",getppid(), getpid());
	
	  c=fork();
	  if(c==0)
	  {
	    printf("\np3 calls p4\n");
	    printf("p3 = %d and p4 = %d\n\n",getppid(), getpid());
	 }
      }
    }
    
    return 0;
}
