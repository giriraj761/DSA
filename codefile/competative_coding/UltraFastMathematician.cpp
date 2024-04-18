#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    // cout<<endl;
    string newstr = "";

    for (int i = 0; str1[i]; i++)
    {
        if (str1[i] == str2[i])
        {
            newstr.append("0");
            continue;
        }
        newstr.append("1");
    }
    cout << newstr;
    // cout<<endl<<str1<<" "<<str2<<endl;
    return 0;
}