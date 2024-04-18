#include<iostream>
using namespace std;

void printer(int beg,int end,string str,int n,int a)
{
    if(a>=n)
    {
        return ;
    }

    for (int i = beg; i <=end; i++)
    {
        cout<<str[i]; 
    }
    cout<<endl;

    printer(beg+1,end+1,str,n,a+1);
    
}
int main()
{
    string str="abc";
    int n=3;
    int a=0;
    for (int i = 0; i<n; i++)
    { 
       printer(0,i,str,n,a+i);
    }
    
    return 0;
}