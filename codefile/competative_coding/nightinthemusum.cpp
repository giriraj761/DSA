#include<cstring>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int i=0;
    int len=0;
    while (str[i]!='\0')
    {
        i++;
        len++;
    }

    int mark=1,curr=1,count=0;
    for (i = 0; i < len; i++)
    {
        mark=curr;
        curr=str[i]-96;
        count+=min(abs(mark-curr),26-abs(mark-curr));;
    }
    cout<<count;

    return 0;
}
