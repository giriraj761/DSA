#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

struct resource
{
    char id;
    int all[5];
    int max[5];
    int req[5];
} p[4];

int main()
{
    system("cls");
    // hardinput
    p[0].id = 'a';
    p[1].id = 'b';
    p[2].id = 'c';
    p[3].id = 'd';
    // allocated

    p[0].all[0] = 1;
    p[0].all[1] = 0;
    p[0].all[2] = 2;
    p[0].all[3] = 1;
    p[0].all[4] = 1;

    p[1].all[0] = 2;
    p[1].all[1] = 0;
    p[1].all[2] = 1;
    p[1].all[3] = 1;
    p[1].all[4] = 0;

    p[2].all[0] = 1;
    p[2].all[1] = 1;
    p[2].all[2] = 0;
    p[2].all[3] = 1;
    p[2].all[4] = 1;

    p[3].all[0] = 1;
    p[3].all[1] = 1;
    p[3].all[2] = 1;
    p[3].all[3] = 1;
    p[3].all[4] = 0;

    // maxneed

    p[0].max[0] = 1;
    p[0].max[1] = 1;
    p[0].max[2] = 2;
    p[0].max[3] = 1;
    p[0].max[4] = 2;

    p[1].max[0] = 2;
    p[1].max[1] = 2;
    p[1].max[2] = 2;
    p[1].max[3] = 1;
    p[1].max[4] = 0;

    p[2].max[0] = 2;
    p[2].max[1] = 1;
    p[2].max[2] = 2; // check
    p[2].max[3] = 1;
    p[2].max[4] = 1;

    p[3].max[0] = 1;
    p[3].max[1] = 1;
    p[3].max[2] = 2;
    p[3].max[3] = 2;
    p[3].max[4] = 0;

    // calc of required

    p[0].req[0] = p[0].max[0] - p[0].all[0];
    p[0].req[1] = p[0].max[1] - p[0].all[1];
    p[0].req[2] = p[0].max[2] - p[0].all[2];
    p[0].req[3] = p[0].max[3] - p[0].all[3];
    p[0].req[4] = p[0].max[4] - p[0].all[4];

    p[1].req[0] = p[1].max[0] - p[1].all[0];
    p[1].req[1] = p[1].max[1] - p[1].all[1];
    p[1].req[2] = p[1].max[2] - p[1].all[2];
    p[1].req[3] = p[1].max[3] - p[1].all[3];
    p[1].req[4] = p[1].max[4] - p[1].all[4];

    p[2].req[0] = p[2].max[0] - p[2].all[0];
    p[2].req[1] = p[2].max[1] - p[2].all[1];
    p[2].req[2] = p[2].max[2] - p[2].all[2];
    p[2].req[3] = p[2].max[3] - p[2].all[3];
    p[2].req[4] = p[2].max[4] - p[2].all[4];

    p[3].req[0] = p[3].max[0] - p[3].all[0];
    p[3].req[1] = p[3].max[1] - p[3].all[1];
    p[3].req[2] = p[3].max[2] - p[3].all[2];
    p[3].req[3] = p[3].max[3] - p[3].all[3];
    p[3].req[4] = p[3].max[4] - p[3].all[4];

    // driver
    int avl[] = {0, 0, 2, 1, 1};
    char arrd[4] = {' ', ' ', ' ', ' '};
    int count = 0;
    for (int ss = 0; ss < 4; ss++)
    {
        int run = 0;
        // cout << ss << " gobal\n";

        for (int i = count; i < 4; i++)
        {
            // cout << i << " inner\n";

            // for (int s = count; s < 4; s++)
            // {
            //     cout << arrd[s] << " ";
            // }
            // cout << endl;

            int flag = 0;
            // cout << "process number :" << i << endl;
            for (int j = 0; j < 5; j++)
            {
                // cout << p[i].req[j] << " ";

                if (p[i].req[j] <= avl[j])
                {
                    flag++;
                }
            }
            // cout << endl
            //  << "flag " << flag << endl;

            if (flag == 5)
            {
                // for (int s = 0; s < 4; s++)
                // {
                //     cout << arrd[s] << " ";
                // }
                // cout << endl;
                arrd[i] = p[i].id;

                for (int k = 0; k < 5; k++)
                {
                    avl[k] += p[i].all[k];
                }

                swap(arrd[count], arrd[i]);
                swap(p[count].id, p[i].id);
                count++;
                run=1;
            }
        }
        if (count == 4)
        {
            break;
        }
        if (run == 0)
        {
            cout<<"deadlock ";
            break;
        }

    }

    // printing
    for (int k = 0; k < 4; k++)
    {
        cout << arrd[k] << " ";
    }

    return 0;
}