//    LARGEST SUM SUB_ARRAY
//    asked by google microsoft amazon gs and other big companies
//    kadnes algorithm

#include<iostream>
using namespace std;

int main()
{
    int arr[]={-3,2,4,-1,2,3,-2};
    int i,j,k,sum=0,max;
    int length=sizeof(arr)/sizeof(arr[0]);
    max=INT16_MIN;
    int sumarr[length];
    sumarr[0]=arr[0];

    for ( i = 1; i < length; i++)
    {
        sumarr[i]=sumarr[i-1]+arr[i];

    }
    

    for ( i = 0; i <length ; i++)
    {
        for ( j = i; j <length ; j++)
        {
            sum=sumarr[j]-sumarr[i]+arr[i];

                  if(sum>max)
                  {
                      max=sum;
                  }
                  
        }
    }
    
    cout<<"\n"<<max;

    return 0;
}