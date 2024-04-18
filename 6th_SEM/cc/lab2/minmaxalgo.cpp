#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
int main()
{
    int nT, nM;
    cout << "\nEnter number of machines and tasks...\n";
    cin >> nM >> nT;
    int minarr[nM][nT];
    int tmp[nM][nT];
    int makespan = 0;
    cout << "\n enter your Data\n";
    for (int i = 0; i < nM; i++)
        for (int j = 0; j < nT; j++)
        {
            cin >> minarr[i][j];
            tmp[i][j] = minarr[i][j];
        }

    cout << "\nOriginal Data" << endl;

    for (int i = 0; i < nM; i++)
    {
        for (int j = 0; j < nT; j++)
            cout << minarr[i][j] << " ";
        cout << endl;
    }
    int restask[nT];
    int resmec[nT];
    int restime[nT];

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

        int maxi = INT_MIN;
        int pos = -1;

        for (int j = 0; j < nT; j++)
        {
            if (time[j] > maxi && time[j] != INT_MAX)
            {
                maxi = time[j];
                pos = j;
            }
        }

        restask[++ptr] = pos;
        resmec[ptr] = mac[pos];
        restime[ptr] = tmp[mac[pos]][pos];
        if (maxi > makespan)
            makespan = maxi;

        for (int i = 0; i < nM; i++)
        {
            for (int j = 0; j < nT; j++)
            {
                if (j == restask[ptr])
                    minarr[i][j] = INT_MAX;
                else if (i == resmec[ptr] && minarr[i][j] != INT_MAX)
                    minarr[i][j] += maxi;
                else
                    continue;
            }
        }
    }

        cout << "\nScheduled Task are :\n";
        for (int i = 0; i < nT; i++)
        {
            cout << "\nTask " << restask[i] + 1 << " Runs on Machine " << resmec[i] + 1 << " with Time " << restime[i] << " units\n";
        }

        cout << "\nTotal elapsed time : " << makespan << " units\n";
        return 0;
    }
