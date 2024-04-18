#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int vowelcheck(string s)
{ 
    int n=s.size(); 
    int count[256],cou=0;

    for(int i=0 ;i<256; i++)
    {
        count[i]=-1;
    }

     for(int i=n ; i>=0; i--)
    {
        if(s[i]=='e'|| s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            if(count[s[i]-'0']==-1)
            {
                cou++;
                count[s[i]-'0']++;
            }
        }
    }
    // cout<<cou<<" "<<s<<" \n";
    return cou;
}

int main()
{
    string str="aeiosskau";
    int n=str.size();

    int count[256],cou=0;
    for(int i=0 ;i<256; i++)
    {
        count[i]=-1;
    }
    for(int i=n ; i>=0; i--)
    {
        if(str[i]=='e'|| str[i]=='a'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            if(count[str[i]-'0']==-1)
            {
                cou++;
                count[str[i]-'0']++;
            }
        }
    }
    cout<<cou<<" ";

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            string s=str.substr(i,j);

           int ret=vowelcheck(s);
            // cout<<ret<<" "<<s<<" "<<cou<<"@"<<"\n";
           // cout<<s<<" \n";
            if(ret>=cou)
            {
                cout<<s<<"\n";
            }
        }
    }
    return 0;
}