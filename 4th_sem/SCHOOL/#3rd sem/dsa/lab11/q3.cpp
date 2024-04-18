#include<iostream>
using namespace std;

int main()
{
    int arr[]= {23,65,86,9,1,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int  i = 1; i < size; i++)
    {
        int key = arr[i];
        int j =i-1;

        while (j>=0 && arr[j]<key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}