#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of an array :";
    cin>>n;

    int *arr=(int*)malloc(n*sizeof(int));
    int arr2[n];

    cout<<"enter the elements in the array\n";

    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
        arr2[i]=0;
    }

    for(int i=1;i<n-1;i++)
    {
        arr2[i]=arr[i-1]*arr[i+1];
    }

    for(int i=0 ;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}