// add 2 numbers using recursion

#include<iostream>
using namespace std;

int sum2(int n)
{
    if(n==0)
    {
        return 0;
    }
    int a;
    cin>>a;
    return a + sum2(n-1);
}
int main()
{
    cout<<sum2(2);
    return 0;
}