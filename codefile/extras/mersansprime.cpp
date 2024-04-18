#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    bool isprime;
    int num=0;

    for (int i = 1; i < 30; i++)
    {
        num=pow(2,i)-1;
        isprime=true;
        for (int j = 2; j*j <= num ; j++)
        {
            if(num%j==0)
            {
                isprime=false;
                break;
            }
        }
        if(isprime)
        {
            cout<<num<<" ";
        }
    }
    return 0;
}