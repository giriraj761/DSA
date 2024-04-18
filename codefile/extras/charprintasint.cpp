#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t)
    {
        string str;
        int len;
        cin>>len>>str;
        for (int i =0; i <len; i++)
        {
            cout<<str[i]-64<<" ";
        }
        t--;
    }

    return 0;
}