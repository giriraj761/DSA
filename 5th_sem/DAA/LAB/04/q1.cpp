#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
using namespace std::chrono;
using namespace std;
vector<int> arr;
int n;
createArray(int n)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 200);
    for (int i = 0; i < n; i++)
        arr.push_back(distr(gen));
}
int binarySearch(int low, int high, int x)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (x < arr[mid])
            binarySearch(low, mid - 1, x);
        else if (x > arr[mid])
            binarySearch(mid + 1, high, x);
    }
    return -99;
}
double timer(int x)
{
    auto start = system_clock::now();
    sleep(1);
    binarySearch(0, n, x);
    auto end = system_clock::now();
    double timetaken = duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1;
    return timetaken;
}
int main()
{
    cout << "\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";
    sort(arr.begin(), arr.end());
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 200);
    cout << endl;
    cout << "Inputs\tWORST\t\tBEST\t\tAVERAGE\n";
    for (int i = 5000; i <= 50000; i += 5000)
    {
        createArray(i);
        n = i;
        cout << i << "\t";
        double time_for_sorting = timer(1234 + i);
        cout << time_for_sorting << "\t";
        time_for_sorting = timer(distr(gen));
        cout << time_for_sorting << "\t";
        time_for_sorting = timer(n / 2);
        cout << time_for_sorting << "\t";
        cout << endl;
    }
    return 0;
}