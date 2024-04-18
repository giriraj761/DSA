#include<cstring>
#include<stdlib.h>
#include<iostream>

using namespace std;


int main()
{
    const int max=1e6+5;
    char str[max];
    int n;
    cin>>str;
    n=strlen(str);

    int prefsum=0,ans=0;
    
    for (int i = 0; i+3< n; ++i)
    {  
        if( string(str+i , str+i+4)=="kick")
        {
            prefsum++;
        }
            if(string(str+i , str+i+5)=="start")
        {
            ans+=prefsum;
        }
    }

    cout<<ans;
  return 0;
}