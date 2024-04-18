#include <bits/stdc++.h>
using namespace std;
int main()
{
    int level = 4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int pr = 0;
            (abs(i + j) <4)?pr=level-min(i,j)-1:pr=max(i,j)-1;
            cout << pr << "  ";
            // cout<<abs(level-min(i,j))<<" ";
        }
        cout << endl;
    }
    return 0;
}