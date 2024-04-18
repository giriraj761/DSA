#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while (t)
    {
        t--;
        string str;
        cin>>str;

        if(str.length()%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool flag = true;
        for(int i=0;i<str.length()/2;i++)
        {
            if(str[i]!=str[str.length()/2+i])
            {
                flag = false;
                break;
                // cout<<str[i]<<"\n"<<str[str.length()/2+i]<<endl;
            }
        }
        (flag)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}