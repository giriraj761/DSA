#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num ;
    cin>>num;

    for(int i = 2 ; i<num ; i++)
    {
        if(num % i ==0)
        {
            bool flag = 1;
            for(int j = 2 ; j*j <= i ; j++)
            {
                if(i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                cout<<i<<" ";
            }
        }
    }
    return 0;
}