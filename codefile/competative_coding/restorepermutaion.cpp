#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(2 * n);
        for (auto &it : arr)
            cin >> it;

        vector<int> count(n);
        vector<int> p;

        for (int i = 0; i < 2 * n; ++i)
        {
            
            if (count[arr[i]-1]==0)
            {
                count[arr[i]-1] = 1;
                p.push_back(arr[i]);
            }
        }
        for (auto it : p)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}