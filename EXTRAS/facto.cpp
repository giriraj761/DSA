#include <bits/stdc++.h>
using namespace std;

int functio(char s,char h,char d ,int x)
{
    if (x == 0)
        return 0;

    functio(s,d, h, x - 1);
    cout << "move block " << x<<" from tower  "<<s<<" to "<<d<<endl;
    functio(h, s,d, x - 1);
    // cout << x << " ";
}
int main()
{
    functio('A','B','C',4);
    return 0;
}