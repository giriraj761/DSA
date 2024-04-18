#include <bits/stdc++.h>
#include<cmath>
using namespace std;

double driver(double n, double lowerbound, double upperbound)
{
    double temp = (lowerbound + upperbound) / 2;

    if ((temp * temp) == n || (abs(n - (temp * temp)) < 0.001))
    {
        return temp;
    }
    else if(temp * temp < n)
    {
        return driver(n, temp, upperbound);
    }
    else
    {
        return driver(n, lowerbound, temp);
    }
}
void findsq(double n)
{
    double i = 1;
    bool found = false;

    while (!found)
    {
        if (i * i == n)
        {
            cout << fixed << setprecision(0) << i;
            found = true;
        }
        else if (i * i > n)
        {
            double res = driver(n, i - 1, i);
            cout << fixed << setprecision(5) << res;
            found = true;
        }
        i++;
    }
}
int main()
{

    clock_t start, end;
    start = clock();

    cout<<"\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n"; 
    cout << "enter n ";
    double n;
    cin >> n;
    findsq(n);

    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "\n\nTime taken by program is :" << fixed << floor(time_taken) << setprecision(0);
    cout << "sec" << endl;

    return 0;
}