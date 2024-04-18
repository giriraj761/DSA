#include <bits/stdc++.h>
using namespace std;

int check(string &str, int end, int start)
{
    while (end >= 0 && start < str.length() && str[end] == str[start])
    {
        end--;
        start++;
    }
    return start - end - 1;
}

string lps(string str)
{
     int ans = 0, st = 0;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        int len1 = check(str, i, i);
        int len2 = check(str, i, i + 1);
        int maxlen = max(len1, len2);

        if (maxlen > ans)
        {
            ans = maxlen;
            st = i - (maxlen - 1) / 2;
        }
    }
    return str.substr(st, ans);

}
int main()
{
    string str;
    cout << "enter a string : ";
    cin >> str;
    cout <<"\nlongest common substring is : "<< lps(str);
}