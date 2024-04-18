// FINDING THE Nth TERM OF THE FIBONACCHI SERIES

#include <bits/stdc++.h>
using namespace std;

// 0 1 1 2 3 5 8 13 21 ....
int memo[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

int fibo(int n)
{
    if (memo[n] == -1)
    {
        int res;
        if (n <= 1)
            res = n;
        else
            res = fibo(n - 2) + fibo(n - 1) ;
            cout<<res<<" ";
        memo[n] = res;
    }
    return memo[n];
}

int main()
{
    fibo(4);
    return 0;
}
