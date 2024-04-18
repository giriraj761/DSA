#include <bits/stdc++.h>
using namespace std;
inputarray(int arr[], int dig, int n)
{
    for (int i = 0; i < dig; i++)
    {
        arr[i] = n % 10;
        n /= 10;
    }
}
int rev(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
printarr(int arr[], int dig,int a)
{
    for(int i=a;i<dig;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n = 1234567890;
    int dig = log10(n)+1;

    n = rev(n);
    int arr[dig];
    inputarray(arr, dig, n);
    cout<<endl;
    
    for (int i = 0; i < dig; i++)
    {
        printarr(arr, dig ,i);
        cout<<endl;
    }

    return 0;
}