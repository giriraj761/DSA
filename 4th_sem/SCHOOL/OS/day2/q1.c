#include <stdio.h>
#include <stdlib.h>
struct process
{
    int name;
    int AT;
    int BT;
};
void swap(struct process *xp, struct process *yp)
{
    struct process temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    struct process ready[5];
    // int bt[5] = {6, 2, 3, 3, 4};
    // int at[5] = {2, 5, 1, 0, 4};
    int top = 0;
    int end = 0;
    struct process processes[5];
    for (int i = 0; i < 3; i++)
    {
        processes[i].name = i;
        printf("Enter the burst time & arrival time for the process %d : ", i + 1);
        scanf("%d %d", &(processes[i].BT), &(processes[i].AT));
        // processes[i].BT = bt[i];
        // processes[i].AT = at[i];
    }

    for (int i = 0; i < 3 - 1; i++)
        for (int j = 0; j < 3 - i - 1; j++)
            if (processes[j].AT > processes[j + 1].AT)
            {
                swap(&processes[j], &processes[j + 1]);
            }

    int exectime = 0;
    struct process grantt[5];
    int cur = 0;
    for (int k = 0; k < 5; k++)
    {
        while (1 == 1 && end < 5)
        {
            if (processes[k].AT <= exectime)
            {
                ready[end++] = processes[k++];
            }
            else
            {
                k--;
                break;
            }
        }
        for (int i = 0; i < end - 1; i++)
            for (int j = top; j < end - i - 1; j++)
                if (ready[j].BT > ready[j + 1].BT)
                    swap(&ready[j], &ready[j + 1]);

        grantt[cur] = ready[top++];
        exectime += grantt[cur++].BT;
    }
    for (int i = cur; cur < 3; cur++)
    {
        grantt[cur] = ready[cur];
    }
    int CT[5];
    CT[0] = grantt[0].BT;
    for (int i = 1; i < 3; i++)
    {
        CT[i] = grantt[i].BT + CT[i - 1];
    }
    int TAT[5];
    float tatSum = 0;
    for (int i = 0; i < 3; i++)
    {
        TAT[i] = CT[i] - grantt[i].AT;
        tatSum += TAT[i];
    }
    int WT[5];
    float wtSum = 0;
    for (int i = 0; i < 3; i++)
    {
        WT[i] = TAT[i] - grantt[i].BT;
        wtSum += WT[i];
    }
    printf("%s%s%s",
           "Process_____________\n",
           "|Name\t|BT\t|AT\t|WT\t|TAT\t|\n",
           "+-------+-------+-------+-------+-------|\n");
    for (int i = 0; i < 5; i++)
    {
        printf("|%d\t|%d\t|%d\t|%d\t|%d\t|\n", grantt[i].name, grantt[i].BT, grantt[i].AT, WT[i], TAT[i]);
    }
    printf("----------------------------------------|\n");
    printf("Average TAT: %0.3f\n", tatSum / 5);
    printf("Average WT: %0.3f", wtSum / 5);
    return 0;
}


