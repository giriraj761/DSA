#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
using namespace std::chrono;
using namespace std;

long long int bruteForce(int x, int n)
{
    long long int res = 1;
    for (int i = 0; i < n; i++)
    {
        res *= x;
    }
    return res;
}
long long int divideAndConcure(int x, int n)
{
    long long int res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            res *= x;
        }
        x *= x;
        n = n >> 1;
    }
    cout<<"\t"<<res<<"   \t";
    return res;
}
double timer(int x, int n, int comp)
{
    auto start = system_clock::now();
    sleep(1);

    if (comp == 1)
        long long int ans = divideAndConcure(x, n);
    else
        long long int ans = bruteForce(x, n);

    auto end = system_clock::now();
    return duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1;
}
printTable()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 10);
    int i = 1;
    cout << "Inputs\tx\tn\tResult\t  DivideandConcure\tbruteForce\n";
    for (int x = 2; x < 18; x += 2)
    {
        int n = distr(gen);
        cout << i << "\t" << x << "\t" << n;

        double timetaken = timer(x, n, 1);
        cout << timetaken << "\t";

        timetaken = timer(x, n, 2);
        cout << timetaken << "\t"<< endl;

        i++;
    }
}
int main()
{
    printTable();
    return 0;
}