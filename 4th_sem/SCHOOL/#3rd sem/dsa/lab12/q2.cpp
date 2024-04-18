#include<algorithm>
#include<iostream>
using namespace std;

int binarysearch(int arr[],int low,int high,int term)
{
    if(high>=low)
    {
        int mid = low+(high-low)/2;

        if(arr[mid]==term)return mid;

        else if(term>arr[mid]){
            return binarysearch(arr,mid+1,high,term);
        }
        else{
            return binarysearch(arr,low,mid-1,term);
        }
    }
    return -9999;
}

int main()
{
    int arr[]={1,4,2,6,7,98};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+size);
    
    int term;cout<<"enter the term to search for\n";cin>>term;
    
    int pos = binarysearch(arr,0,size-1,term);

    (pos==-9999)?cout<<"element not found":cout<<"the elemet was found in index "<<pos<<" ";

    // for(int x:arr){
    //     cout<<x<<" ";
    // }   
     return 0;
}