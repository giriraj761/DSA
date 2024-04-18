#include<iostream>
using namespace std;

void mergesort(double arr[], int low ,int mid, int high)
{
    int n1,n2;
    n1=mid-low+1;
    n2=high-mid;

    int lhs[n1],rhs[n2];
    int i,j,k;

    for(i=0;i<n1;i++)
    {
        lhs[i]=arr[low+i];
    }
    for ( j = 0; j < n2; j++)
    {
        rhs[j]=arr[mid+1+j];
    }

    i=0,j=0,k=low;

    while (i<n1 && j<n2)
    {
        if(lhs[i]<=rhs[j])
        {
            arr[k]=lhs[i];
            i++;
        }
        else
        {
            arr[k]=rhs[j];
            j++;    
        }
        k++;
    }
    while (i<n1 )
    {
        arr[k]=lhs[i];
        i++;
        k++;
    }

    while ( j<n2)
    {
        arr[k]=rhs[j];
        j++;    
        k++;
    }
    
}
void merger (double arr[],int low,int high)
{
    if(high>low)
    {
        int mid = ( low + high )/2;

        merger(arr,low,mid);
        merger(arr,mid+1,high);

        mergesort(arr,low,mid,high);
    }
}
int main()
{
    double arr[]= {23000,65,62,86,9,100000,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    merger(arr,0,size-1);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}