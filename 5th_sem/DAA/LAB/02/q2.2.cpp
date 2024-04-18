#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
using namespace std;
using namespace std::chrono;
int removeElement(int arr[], int size, int v)
{
    int n = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != v)
        {
            arr[n++] = arr[i];
        }
    }
    return n;
}
int euclidAlgo(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    return euclidAlgo(b, a % b);
}
void gfcConsecutive(int n1, int n2)
{
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    cout << n1 << endl;
}
seiveOfErasto(int arr[], int *n)
{

    for (int i = 0; i < *n; i++)
    {
        arr[i] = i + 2;
    }
    for (int i = 0; i*i< *n; i++)
    {
        if (arr[i] == 0)
            continue;
        int curr = arr[i];
        for (int j = i + curr; j < *n; j += curr)
        {
            arr[j] = 0;
        }
    }
    *n = removeElement(arr, *n, 0);
}
int gcfErasto(int a, int b)
{
    int size = max(a, b);
    int arr[size];
    seiveOfErasto(arr, &size);
    int pf = 1;
    int factor = 1;
    do
    {
        pf = 1;
        for (int i = 0; i < size; i++)
        {
            if (a % arr[i] == 0 && b % arr[i] == 0)
            {
                pf = arr[i];
                break;
            }
        }
        factor *= pf;
        a /= pf;
        b /= pf;
    } while (pf > 1);
    return factor;
}
int gcfErastoDP(int arr[], int a, int b)
{
    int n = sqrt(min(a, b)) / log(sqrt(min(a, b) + 1)) + 3;
    int pf = 1;
    int factor = 1;
    do
    {
        pf = 1;
        for (int i = 0; i < n; i++)
        {
            if (a % arr[i] == 0 && b % arr[i] == 0)
            {
                pf = arr[i];
                break;
            }
        }
        factor *= pf;
        a /= pf;
        b /= pf;
    } while (pf > 1);
    return factor;
}
int main()
{
    auto start = system_clock::now();
    cout << "\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";

    int a = 72, b =36 ;
    {
        auto start = system_clock::now();
        sleep(1);
        cout<<euclidAlgo(a, b)<<endl;
        auto end = system_clock::now();
        cout << "Time taken by method 1 is : " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) -1<< endl;
    }
    {
        auto start = system_clock::now();
        sleep(1);
        gfcConsecutive(a, b);
        auto end = system_clock::now();
        cout << "Time taken by method 2 is : " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1<< endl;
    }
    {
        auto start = system_clock::now();
        sleep(1);
        cout << gcfErasto(a, b) << endl;
        auto end = system_clock::now();
        cout << "Time taken by method 3 is : " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1<< endl;
    }

    auto end = system_clock::now();
    cout << "\nTime taken by the entire code is : " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1<< endl;

    return 0;
}