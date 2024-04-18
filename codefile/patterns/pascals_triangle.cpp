#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        int coff=1;
        for(int j = 1; j <= i; j++)
        {
            cout<<coff<<" ";
            coff=coff*(i-j)/j;
        }
        cout<<endl;
    }
    return 0;
}