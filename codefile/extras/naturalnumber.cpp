#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "enter anything : ";
    cin >> str;

    // cout<<str;
    bool flag = true;
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[0] == '0' && str[i] == '0')
        {
            count++;
        }
        if (!isdigit(str[i]))
        {
            flag = false;
            break;
        }
    }
    if (count == str.length())
    {
        flag = false;
    }
    if (flag)
    {
        cout << "its is a natural number";
    }
    else
    {
        cout << "its not a natural number";
    }
    return 0;
}