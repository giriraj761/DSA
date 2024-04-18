#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{

    int a,b,c,d,e,f,g;
    a=fork();
    if( a==0){
	printf("\np1 calls p2\n");
	printf("p1 = %d and p2 = %d\n\n",getppid(), getpid());
    }
    else
    {
	b=fork();
	if(b==0)
	{
	   printf("p1 calls p3\n");
	   printf("p1 = %d and p3 = %d\n\n",getppid(), getpid());
	}
	else
	{
	   printf("\np1 calls p4\n");
	   printf("p1 = %d and p4 = %d\n\n",getppid(), getpid());
	}
     }   
    return 0;
}