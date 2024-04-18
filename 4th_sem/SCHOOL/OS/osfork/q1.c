#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    
    if(fork()==0)
    {
        printf(" child :");
        for(int i=1;i<10;i+=2)
        {
            sum += arr[i];
        }
    }
    else
    {
        printf(" parent :");
        for(int i=0;i<10;i+=2)
        {
            sum += arr[i];
        }  
    }
    
    printf(" %d ",sum);
    
    return 0;
}