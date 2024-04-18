#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
using namespace std::chrono;
using namespace std;

bool cmp1(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first > b.first;
}
bool cmp2(const pair<int, int> &a,const pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first > b.first;
    return a.second > b.second;
}
int main()
{
    cout << "\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";
    int t;
    cout << "enter number of test case :";
    cin >> t;
    while (t--)
    {
        int w, n, m;
        cin >> w >> n >> m;

        vector<pair<int,int>> v[w + 1];
        for (int i = w / m; i >= 0; i--)
        {
            int l = w - (m * i);
            v[l % n].push_back({l / n, i});
        }
        int flag = 1;
        for (int i = 0; i <= w; i++)
        {
            if (v[i].size() > 0)
            {
                flag = 0;
                if (n > m)
                    sort(v[i].begin(), v[i].end(), cmp1);
                else
                    sort(v[i].begin(), v[i].end(), cmp2);
                cout << v[i][0].first << " " << v[i][0].second << "\n";
                break;
            }
        }
        if (flag == 1)
            cout << "0 0\n";
    }
    return 0;
}