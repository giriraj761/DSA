#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main() {

int a, b;

    {
        if(fork() == 0)
        {
        printf("child my pid is %d ppid is %d\n",getpid(),getppid());
            if(fork()== 0)
            {
             printf("child my pid is %d ppid is %d\n",getpid(),getppid());
              
               if(fork()== 0)
             {
             printf("child my pid is %d ppid is %d\n",getpid(),getppid());
                }
            }
       
        }
        else
        printf("father my pid is %d ppid is %d\n",getpid(),getppid());
    
    }

return 0;
}
