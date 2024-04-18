#include <bits/stdc++.h>
#include <time.h>
#include<array>
using namespace std;

void swapodd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            swap(arr[count], arr[i]);
            count++;
        }
    }
}
template<typename T>
void printarr(T&& arr, int n)
{
    for(int i =0; i<n  ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl
         << endl;
}
int main()
{
    clock_t start, end;
    start = clock();
    
    int arr[] = {10, 3, 5, 6, 8, 1, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "1973 GIRIRAJ KRISHNA SHARMA\n\n";
    printarr(arr, n);
    swapodd(arr, n);
    printarr(arr, n);
    end = clock();

    // Calculating total time taken by the program.
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}