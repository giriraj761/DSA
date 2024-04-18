// Using hovers partation (FASTER)

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int partation(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low-1;
    int j=high+1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i]<pivot);
        
        do
        {
            j--;
        } while (arr[j]>pivot);

         if(i>=j)
         {
            return j;
         }
         cout<<arr[i]<<" "<<arr[j]<<endl;
        swap(arr[i],arr[j]);
    } 

}

void qsort(int arr[],int low,int high)
{
    if (low<high)
    {
        int mid=partation(arr,low,high);
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        qsort(arr,low,mid);
        qsort(arr,mid+1,high);
    }
    
}

int main ()
{
    //int arr[]={8,2,1,5,6,1,3,7,4,9,5};
    int arr[]={5,3,8,1,4,6,2,7};
    int length=sizeof(arr)/sizeof(arr[0]);

     
     qsort(arr,0,length-1);

     for (int  i = 0; i <length ; i++)
     {
         cout<<arr[i]<<" ";
     }
     
    return 0;
}