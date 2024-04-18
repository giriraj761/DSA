#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of an array :";
    cin>>n;

    int *arr=(int*)malloc(n*sizeof(int));

    cout<<"enter the elements in the array\n";

    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    }

    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }

     for(int i=0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}