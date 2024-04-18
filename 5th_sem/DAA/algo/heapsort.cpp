#include <bits/stdc++.h>
using namespace std;

heapify( int arr[] , int n , int i )
{
    int left= 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;
    if(left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if(right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if(i != largest)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
    
void buildheap(int arr[],int n)
{
    for (int i = n / 2 + 1; i >= 0; i-- )
    {
        heapify(arr , n , i);
    }
    for(int i = n - 1 ; i > 0 ; i-- )
    {
        swap(arr[0] , arr[i]);
        heapify(arr , i , 0);
    }
}

int main()
{
    int arr[]={45,55,1,2,645,32,64};

    buildheap(arr,sizeof(arr)/sizeof(arr[0]));

    for(auto x : arr)
    {
        cout<<x<<" ";
    }
    return 0;
}