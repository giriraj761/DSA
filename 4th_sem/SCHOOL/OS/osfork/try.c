#include <stdio.h>
 #include<unistd.h>
int main()
{
    int pid_t;
    pid_t = fork();
    if (pid_t >= 0)
    {
        print(“Parent process in erroneous”);
    }
    else
    {
        print(“Child process in erroneous”);
    }
    return 0;
}