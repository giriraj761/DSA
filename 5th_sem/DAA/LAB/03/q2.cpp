#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
#include <vector>
using namespace std::chrono;
using namespace std;

int n = 10;
vector<int> arr;

createArray()
{
    cout << "enter n ";
    extern int n;
    cin >> n;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(10, 13);

    for (int i = 0; i < n; i++)
    {
        arr.push_back(distr(gen));
    }
}
printArray()
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
checkCount()
{
    for (int j = 0; j < n; j++)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > (n / 2))
        {
            cout << "Yes there is such element." << endl;
            return 0;
        }
    }
    cout << "No there is no such element" << endl;
}
checkCountEff()
{
    int count[1000] = {0};
    int maxCount = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    maxCount = *max_element(count, count + 1000);
    (maxCount > n / 2) ? cout << "Yes there is such element." << endl : cout << "No there is no such element" << endl;
}
int main()
{
    cout << "\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";
    createArray();
    printArray();
    {
        auto start = system_clock::now();
        sleep(1);
        checkCount();
        auto end = system_clock::now();
        cout << "\nTIME TAKEN by first method : " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1 << endl;
    }
    cout << "\n2nd method" << endl;
    {
        auto start = system_clock::now();
        sleep(1);
        checkCountEff();
        auto end = system_clock::now();
        cout << "\nTIME TAKEN by 2nd method : " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1 << endl;
    }
    return 0;
}