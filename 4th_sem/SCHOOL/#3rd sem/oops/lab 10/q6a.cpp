#include<iostream>
using namespace std;

int main()
{
    int a ,b;
    cout<<"enter two number ";cin>>a>>b;

    try
    {
        if(b==0)
        {
            throw -1;
        }
        cout<<a/b;
    }
    catch(int err)
    {
        cout<<"divide by zero error";
    }
    
    return 0;
}