#include<iostream>
using namespace std;

int main()
{
    float arr[]= {23.25,546.265,76.00,878.88,1.01};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n = size-1;
    int max=0;
    int pos=-1;
    for (int i = 0; i < size ; i++)
    {
        max=0;pos=-1;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]>max)
            {
                max=arr[j];
                pos = j;
            } 
        }
        if(arr[n]<max)
        {
            swap(arr[pos],arr[n]);
        }
        n--;
        
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}