#include<iostream>
using namespace std;


int main()
{
     int arr[]={23,45,76,1,3,2,0,5};
     int length=sizeof(arr)/sizeof(arr[0]);
     int j=length-1;

     for (int i = 0; i <length-1; i+=2)
     {
         swap(arr[i],arr[i+1]);
     }

     for(int arrptr:arr)
     {
         cout<<arrptr<<" ";
     }
     
     
}





