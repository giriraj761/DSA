#include<iostream>
using namespace std;

int power(int a , int b)
{
    if(b>0)
    {
        return a * power(a,b-1);
    }
    return 1;
}
int main()
{
    cout<<power( 2 , 5 );
    return 0;
}