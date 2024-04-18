#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
using namespace std::chrono;
using namespace std;

vector<int> arr;
generate(int n, int a, int b)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(a, b);
    for (int i = 0; i < n; i++)
    {
        arr.push_back(distr(gen));
    }
}
void driver(int low, int high, int &min, int &max)
{
    if (low == high)
    {
        if (max < arr[low])
        {
            max = arr[low];
        }
        if (min > arr[high])
        {
            min = arr[high];
        }
        return;
    }
    if (high - low == 1)
    {
        if (arr[low] < arr[high])
        {
            if (min > arr[low])
            {
                min = arr[low];
            }

            if (max < arr[high])
            {
                max = arr[high];
            }
        }
        else
        {
            if (min > arr[high])
            {
                min = arr[high];
            }

            if (max < arr[low])
            {
                max = arr[low];
            }
        }
        return;
    }
    int mid = (low + high) / 2;
    driver(low, mid, min, max);
    driver( mid + 1, high, min, max);
}
double divideConqure(int low, int high, int &min, int &max)
{
    auto start = system_clock::now();
    sleep(1);
    driver(low,high,min,max);
    auto end = system_clock::now();
    return duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1;
}
double bruteForce(int n)
{
    auto start = system_clock::now();
    sleep(1);

    int maxele = *max_element(arr.begin(), arr.end());
    int minele = *min_element(arr.begin(), arr.end());
    cout << maxele << "  " << minele << "\t";

    auto end = system_clock::now();
    return duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1;
}
printTable()
{
    int i = 1;
    cout << "Inputs\tn\tmax     min   bruteForce\tDivideandConcure\n";
    for (int x = 10000; x <= 100000; x += 10000)
    {
        generate(x, x * 200 * (-1), x * 250);
        cout << i << "\t" << x << "\t";
        double timetaken = bruteForce(x);
        cout << timetaken << "\t" ;
        int max=INT16_MIN ,min =INT16_MAX;
        timetaken = divideConqure(0,x-1,min,max);
        cout << timetaken << endl;
        i++;
    }
}
int main()
{
    cout << "\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";
    printTable();
    return 0;
}