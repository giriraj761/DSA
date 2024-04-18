#include <bits/stdc++.h>
using namespace std;
int main()
{

    int nT, nM;
    cout<<"\nEnter number of machines and tasks\n";
    cin>>nM>>nT;
    int minarr[nM][nT];
    int tmp[nM][nT];
    int maketime = 0;
    cout<<"\nFill Data\n";
    for (int i = 0; i < nM; i++)
        for (int j = 0; j < nT; j++)
        {
            cin>>minarr[i][j];
            tmp[i][j] = minarr[i][j];
        }

    cout<<"\nOriginal Data\n";

    for (int i = 0; i < nM; i++)
    {
        for (int j = 0; j < nT; j++)
            cout<<minarr[i][j]<<"\n";
    }

    int rt[nT];
    int rm[nT];
    int rtime[nT];
    int ptr = -1;

    while (ptr < nT - 1)
    {
        int time[nT], mac[nT]; 
        for (int j = 0; j < nT; j++)
        {
            int mini = INT_MAX;
            int pos = -1;
            for (int i = 0; i < nM; i++)
            {
                if (minarr[i][j] < mini)
                {
                    mini = minarr[i][j];
                    pos = i;
                }
            }
            time[j] = mini;
            mac[j] = pos;
        }

        int mini = INT_MAX;
        int pos = -1;

        for (int j = 0; j < nT; j++)
        {
            if (time[j] < mini)
            {
                mini = time[j];
                pos = j;
            }
        }

        rt[++ptr] = pos;
        rm[ptr] = mac[pos];
        rtime[ptr] = tmp[mac[pos]][pos];
        if (mini > maketime)
            maketime = mini;

        for (int i = 0; i < nM; i++)
        {
            for (int j = 0; j < nT; j++)
            {
                if (j == rt[ptr])
                    minarr[i][j] = INT_MAX;
                else if (i == rm[ptr] && minarr[i][j] != INT_MAX)
                    minarr[i][j] += mini;
                else
                    continue;
            }
        }
    }
    cout<<"\nScheduled Task are :\n"; 
    for (int i = 0; i < nT; i++)
    {
        cout<<"\nTask"<<rt[i]+1<<" Runs on Machine" <<rm[i] + 1 << "with Time" <<rtime[i] << "units\n"; ;
    }

    cout<<"\nMakespan :" <<maketime<<" units\n";
    return 0;
}