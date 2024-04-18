#include <bits/stdc++.h>
using namespace std;

int maxproduct(int arr[],int n)
{
    int currmax = arr[0], currmin = arr[0],result=INT16_MIN;
    for (int i = 1; i < n; i++)
    {
        int temp = max({arr[0], currmax * arr[i], currmin * arr[i]});
        currmin = min({arr[0], currmax * arr[i], currmin * arr[i]});

        currmax = temp;

        result = max(currmax,result);
    }
    return result;
}
int main()
{
    int arr[] = { 1, -2, -3, 0, 7, -8, -2};
    cout << maxproduct(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}