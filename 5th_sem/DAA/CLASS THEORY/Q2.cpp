// find the fibonacii

#include<iostream>
using namespace std;
void fibo(int a,int b ,int n)
{
    if(n==1)
    {
        exit(0);
    }
    int sum = b+a ;
    cout<<sum<<" ";
    fibo(b,sum,n-1);
}
int main()
{
    cout<<" 0"<<" 1 ";  
    fibo(0,1,15);

    return 0;
}