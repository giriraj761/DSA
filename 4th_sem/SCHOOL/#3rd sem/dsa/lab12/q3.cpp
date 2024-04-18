#include<iostream>
using namespace std;

void findtimes(int arr[],int n,int size)
{
    int count[1000];
    for (int i = 0; i < 1000; i++)
    {
        count[i]=0;
    }
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
        if(count[arr[i]]==n){
            cout<<arr[i]<<" occured "<<count[arr[i]]<<" times";
            return;
        }
    }
    cout<<"no such element exist";
    
}
int main()
{
    int arr[]={1,4,5,5,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    if(size%2==0)
    {
       findtimes(arr,size/2,size);
    }
    else{
        findtimes(arr,(size/2)+1,size);
    }
    return 0;
}