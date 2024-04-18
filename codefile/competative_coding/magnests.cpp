#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int group =0;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]%10!=arr[i+1]%10)
        {
            group++;
        }
    }
    
    cout<<group+1;
    return 0;
}