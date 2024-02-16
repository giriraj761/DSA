#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> files;
    int limit;
    int maxCores;
    vector<int> x;

    //
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int inp=0;
        cin >> inp;
        files.push_back(inp);
    }
    cin >> maxCores >> limit;
    // input

    int sum = 0, dsum = 0;
    for (int i = 0; i < n; i++)
    {
        // cout<<files[i]<<" ";
        if (files[i] % maxCores == 0)
        {
            x.push_back(files[i]);
            // cout<<" * "<<x[i]<<" ";
        }
        else
        {
            dsum += files[i];
        }
    }
    sort(x.rbegin(), x.rend());
    for (int i = 0; i < limit; i++)
    {
        if(i>=x.size())
        {
            break;
        }
        // cout<<x[i]<<" ";
        sum += x[i];
    }
    long ans = (int)(sum / maxCores);
    for (int i = limit; i < x.size(); i++)
    {
        ans += x[i];
    }
    cout<<"ans = " << ans + dsum;

    return 0;
}