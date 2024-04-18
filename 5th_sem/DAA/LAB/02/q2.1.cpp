#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
using namespace std;
using namespace std::chrono;

method1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;

        for (int j = 2; j * j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << arr[i] << " ";
        }
        // cout<<arr[i]<<" ";
    }
}
method2(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        if (arr[i] % 2 == 0 || arr[i] % 3 == 0)
        {
            continue;
        }

        for (int j = 5; j * j <= arr[i]; j += 6)
        {
            if (arr[i] % j == 0 || arr[i] % (j + 2) == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << arr[i] << " ";
        }
        // cout<<arr[i]<<" ";
    }
}
method3(int arr[], int n)
{
    int arrseive[1000];
    for (int i = 0; i < 1000; i++)
    {
        if (arrseive[i] == -1)
        {
            continue;
        }
        arrseive[i] = i + 2;
        int curr = arrseive[i];

        for (int j = i + curr; j < 1000; j += curr)
        {
            arrseive[j] = -1;
        }
    }
    int count = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (arrseive[i] != -1)
        {
            arrseive[count++] = arrseive[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (binary_search(arrseive, arrseive + count, arr[i]))
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{

    cout << "\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";
    int n;
    cout << "enter n ";
    cin >> n;
    int arr[n];

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(2, 1000);

    for (int i = 0; i < n; i++)
    {
        arr[i] = distr(gen);
    }

    auto start = system_clock::now();

    {
        auto start = system_clock::now();
        sleep(1);
        method1(arr, n);
        auto end = system_clock::now();
        cout << "\nTIME TAKEN BY METHOD 1 : " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1 << endl;
    }
    {
        auto start = system_clock::now();
        sleep(1);
        method2(arr, n);
        auto end = system_clock::now();
        cout << "\nTIME TAKEN BY METHOD 2 : " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1 << endl;
    }
    {
        auto start = system_clock::now();
        sleep(1);
        method3(arr, n);
        auto end = system_clock::now();
        cout << "\nTIME TAKEN BY METHOD 3 : " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1 << endl;
    }

    auto end = system_clock::now();
    cout << "\nTIME TAKEN BY ENTIRE CODE: " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1 << endl;
    return 0;
}