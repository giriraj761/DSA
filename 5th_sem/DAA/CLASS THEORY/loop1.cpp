#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    // int i=0;
    // for(cout<<"a";cout<<"b";cout<<"c")
    // {
        // i++;
        // cout<<"d";
        // if(i==4){break;}
    // }
    int arr[]={10 ,45, 67 ,44,88,23,2,1,777,-222};
    int maxim=INT16_MIN;

    for(int i=0;i<10;i++)
    {
        // if(arr[i]>maxim)
        // {
        //     maxim=arr[i];
        // }
        maxim = max(maxim,arr[i]);
    }    
    cout<<maxim;
    return 0;
}