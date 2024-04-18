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
    int arr[]= {23,65,86,9,100,3,5};
    
    quicksort(arr,0,sizeof(arr)/sizeof(arr[0])-1);

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}