
//kadnes algo is imortant for questions like max sum subarray


#include<iostream>
using namespace std;

int main()
{
    // int arr[]={-3,2,4,-10,2,3,-2};
    int arr[]={-1};
    int i,last,sum=0,max;
    int length=sizeof(arr)/sizeof(arr[0]);

    max=INT16_MIN;

    for ( i = 0; i <length ; i++)
    {
        sum+=arr[i];

        if(sum>max)
        {
            max=sum;
        }
        if(sum<0)
        {
           sum=0;
        }
    }
    
    cout<<"\n"<<max;

    return 0;
}