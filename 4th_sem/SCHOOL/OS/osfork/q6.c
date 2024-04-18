#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
    if(fork()==0)
    {
        printf("\np1 calls p2\n");
	    printf("p1 = %d and p2 = %d\n\n",getppid(), getpid());

        if(fork()==0)
        {
            printf("\np2 calls p4\n");
	        printf("p2 = %d and p4 = %d\n\n",getppid(), getpid());
        }
        else
        {
            printf("\np2 calls p5\n");
	        printf("p2 = %d and p5 = %d\n\n",getppid(), getpid());

                if(fork()==0)
                {
                    printf("\np5 calls p8\n");
	                printf("p5 = %d and p8 = %d\n\n",getppid(), getpid());
                }
                else{
                    printf("\np5 calls p9\n");
	                printf("p5 = %d and p9 = %d\n\n",getppid(), getpid());
                }
        }
    }   
    else
    {
        printf("\np1 calls p3\n");
	    printf("p1 = %d and p3 = %d\n\n",getppid(), getpid());
        if(fork()==0)
        {
            printf("\np3 calls p6\n");
	        printf("p3 = %d and p6 = %d\n\n",getppid(), getpid());
        }
        else
        {
            printf("\np3 calls p7\n");
	        printf("p3 = %d and p7 = %d\n\n",getppid(), getpid());
        }
    }
    return 0;
}