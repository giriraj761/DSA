#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
using namespace std::chrono;
using namespace std;

vector<int> common;
findage()
{
    int boys[] = {10, 20, 11, 89, 23, 21};
    int girls[] = {12, 30, 11, 20};
    int count[100] = {};
    for (int i = 0; i < sizeof(boys) / sizeof(boys[0]); i++)
    {
        if (count[boys[i]] == 0)
        {
            count[boys[i]] = 1;
        }
    }
    for (int i = 0; i < sizeof(girls) / sizeof(girls[0]); i++)
    {
        cout << girls[i] << " " << count[girls[i]] << endl;
        if (count[girls[i]] == 1)
        {
            common.push_back(girls[i]);
            count[girls[i]] = 0;
        }
    }    cout << "the commom age is\n";
    for (auto x : common)
    {
        cout << x << " ";
    }
}
int main()
{
    cout << "\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";
    auto start = system_clock::now();
    sleep(1);
    findage();
    auto end = system_clock::now();
    cout << "\nTIME TAKEN : " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1 << endl;
    return 0;
}