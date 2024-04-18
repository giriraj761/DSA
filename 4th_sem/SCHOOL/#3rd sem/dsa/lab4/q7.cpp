#include<cstdlib>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of an array :";
    cin>>n;
    int* count=(int *)calloc(INT16_MAX,sizeof(int));
    int grt=INT16_MIN;
    int pos=-100;
    int *arr=(int*)malloc(n*sizeof(int));

    cout<<"enter the elements in the array\n";
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
        count[arr[i]]++;
        if(arr[i]>grt){grt=arr[i];pos=i;}
    }

    cout<<"The largest number is :"<<grt<<" and it occured "<<count[arr[pos]]<<" times";

    return 0;
}