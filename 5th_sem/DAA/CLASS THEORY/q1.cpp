// find the max element of an 2darray;
#include<iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int maxim= INT16_MIN;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            arr[i][j]=i*j*j+28; 
            cout<<arr[i][j]<<" ";
            maxim= max(maxim,arr[i][j]);
        }
        cout<<endl;
    }

    cout<<"\n"<<maxim<<" ";
    return 0;
}