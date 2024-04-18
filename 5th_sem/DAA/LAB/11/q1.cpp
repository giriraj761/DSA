#include <bits/stdc++.h>
using namespace std;
int DWTRec(int arr1[], int arr2[], int n, int m)
{
    if (n == 0 && m == 0)
        return 0;
    if (n == 0 || m == 0)
        return INT_MAX;

    return abs(arr1[n - 1] - arr2[m - 1]) +
           min(min(DWTRec(arr1, arr2, n - 1, m),
                   DWTRec(arr1, arr2, n, m - 1)),
               DWTRec(arr1, arr2, n - 1, m - 1));
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {2, 4, 6, 8};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int DWT[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            DWT[i][j] = INT_MAX;

    DWT[0][0] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            DWT[i][j] = abs(arr1[i - 1] - arr2[j - 1]) + min(min(DWT[i][j - 1], DWT[i - 1][j]), DWT[i - 1][j - 1]);
    cout << "Distance between the arrays is " << DWT[n][m] << endl;
    cout << DWTRec(arr1, arr2, n, m);

    return 0;
}