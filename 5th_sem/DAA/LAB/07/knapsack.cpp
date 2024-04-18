#include <bits/stdc++.h>
using namespace std;

struct knapsack
{
    int val;
    int wt;
    float frac;
};

bool compare(const knapsack &obj1, const knapsack &obj2)
{
    if (obj2.frac < obj1.frac)
        return 1;
    return 0;
}

double Knap(int w, knapsack obj[], int n)
{
    double ans = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (obj[i].wt <= w)
        {
            w -= obj[i].wt;
            ans += obj[i].val;
        }
        else
        {
            ans += obj[i].val * ((double)w / (double)obj[i].wt);
            break;
        }
    }
    return ans;
}
int main()
{
    cout << "\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";

    int n;
    cout << "enter n";
    cin >> n;
    int w;
    cout << "enter weight ";
    cin >> w;

    knapsack obj[n];
    cout << "enter value and weight :";
    for (int i = 0; i < n; i++)
    {
        cout << "\n"
             << i + 1 << " : ";
        cin >> obj[i].val >> obj[i].wt;
        obj[i].frac = obj[i].val / obj[i].wt;
    }
    sort(obj, obj + n, &compare);
    cout << endl;
    cout << "value\tweight\tfraction\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << obj[i].val << "\t" << obj[i].wt << "\t" << obj[i].frac << endl;
    }
    cout << "answer = ";
    cout << Knap(w, obj, n);
    return 0;
}
