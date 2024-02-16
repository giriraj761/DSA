#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin>>t;
    int a=1;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x;
        int count[110]={0};
        for(int i=0;i<n;i++)
        {
            cin >>x;
            count[x]++;
        }
        int flag =1;
        if(2*k<n)
        {
            flag = 0;
        }
        for(int i=0;i<110;i++)
        {
            if(count[i]>2)
            {
                flag = 0;
            }
        }
        cout<<"Case #"<<a<<": ";
        (flag)?cout<<"YES":cout<<"NO";
        cout<<endl;
        a++;
    }
    return 0;
}