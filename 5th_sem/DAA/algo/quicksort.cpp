#include<iostream>
using namespace std;

int partitation(int arr[] , int low , int high)
{
    int i = low - 1;
    int j = high + 1;
    int pivot = arr[low];
    
    while(true)
    {
        do
        {
            i++;
        }while(arr[i] < pivot);
    
        do
        {
            j--;
        }while(arr[j] > pivot);
    
        if(i >= j)
        {
            return j;
        }

        swap(arr[i] , arr[j]);
    }
}

void quicksort(int arr[],int low ,int high)
{
    if(high > low)
    {
        int mid = partitation(arr , low , high);
    
        quicksort(arr , low , mid);
        quicksort(arr , mid+1 , high);
    }
}
int main()
{
    int arr[]={50,60,45,10,3,2,1}; 
    quicksort(arr,0,sizeof(arr)/sizeof(arr[0]));

    for(auto x : arr)
    {
        cout<<x<<" ";
    }
    return 0;
}