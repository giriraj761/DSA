#include<iostream>
using namespace std;

void max_heapify(int arr[],int n,int i)
{
    int largest=i,left=2*i+1,right=2*i+2;

    if(left<n && arr[left]>arr[largest])
    {
        largest=left;
    }
      if(right<n && arr[right]>arr[largest])
    {
        largest=right;
    }
    
    if(largest!=i){
        swap(arr[i],arr[largest]);
        max_heapify(arr,n,largest);
    }
}

void build_heap(int arr[],int n)
{
    int i;
   for(i=n/2-1;i>=0;i--)
   {
      max_heapify(arr,n,i);
   }
    for(i=n-1;i>=0;i--)
   {
       swap(arr[0],arr[i]);
       max_heapify(arr,i,0);
   }   
}

int main ()
{
    int arr[]={23,45,76,100,1,3,2,10};
    int length=sizeof(arr)/sizeof(arr[0]);

     build_heap(arr,length);


    //  for (int  i = 0; i <length ; i++)
    //  {
    //      cout<<arr[i]<<" ";
    //  }
     for(auto x:arr)
     {
        cout<<x<<" ";
     }
     cout<<"\n";

    return 0;
}