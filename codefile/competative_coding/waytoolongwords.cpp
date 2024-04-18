#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        t--;
        string str;
        cin >> str;
        if (str.length() < 10)
        {
            cout << str << endl;
            continue;
        }
        cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
    }
    return 0;
}