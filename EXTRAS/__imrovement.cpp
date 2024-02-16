#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "giriraj";
    for (int i = 0; str[i]; i++)
    {
        cout << str[i] << " ";
    }
    cout<<endl;

    int arr[] = {10, 2, 32, 4, 72, 612, 12, 12, 32, 52};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool even = any_of(arr, arr + n, [](int x){ return x % 2 == 0; });
    bool odd = any_of(arr, arr + n, [](int x){ return x % 2 != 0; });
    if (even && !odd)
        cout << "array has only even elements ";
    if (!even && odd)
        cout << "array has only odd elements ";
    if (even && odd)
        cout << "array has both odd and even ";

    int x = 4096;
    (x&&!(x&(x-1)))?cout<<"\npower of 2":cout<<"\nnot a power of 2";
    
    return 0;
}