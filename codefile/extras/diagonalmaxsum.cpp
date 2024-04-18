#include<iostream>
#include<map>
#include<stdlib.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    map<int, long long int>sumd;

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>a;
            sumd[i-j]+=a;
        }
    }

    long long ans=-1;

    for(auto x:sumd)
    {
        ans=max(ans,x.second);
    }
    cout<<ans;
    return 0;
}