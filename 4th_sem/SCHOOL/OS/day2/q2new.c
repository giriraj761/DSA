#include <stdio.h>
#include <stdlib.h>
struct process
{
    int name;
    int BT;
    int AT;
    int remT;
    int CT;
};
void swap(struct process *xp, struct process *yp)
{
    struct process temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    struct process *cpu = (struct process *)malloc(sizeof(struct process));
    struct process ready[5];
    int bt[5] = {6, 2, 8, 3, 4};
    int at[5] = {2, 5, 1, 0, 4};
    int top = 0;
    int end = 0;
    struct process processes[5];
    for (int i = 0; i < 5; i++)
    {
        processes[i].name = i;
        // printf("Enter the burst time & arrival time for the process %d : ", i + 1);
        // scanf("%d %d", &(processes[i].BT), &(processes[i].AT));
        processes[i].BT = bt[i];
        processes[i].AT = at[i];
        processes[i].remT = processes[i].BT;
        processes[i].CT = 0;
    }

    for (int i = 0; i < 5 - 1; i++)
        for (int j = 0; j < 5 - i - 1; j++)
            if (processes[j].AT > processes[j + 1].AT)
            {
                swap(&processes[j], &processes[j + 1]);
            }

    // sorted array available

    int exectime = 0;
    int cur = 0;
    int pend = end;
    while (1 == 1)
    {
        if (exectime >= processes[end].AT && end < 5)
        {
            ready[end] = processes[end];
            pend = end++;
        }
        if (pend < end && end < 5)
        {
            printf("sorted");
            for (int i = 0; i < end - 1; i++)
                for (int j = top; j < end - i - 1; j++)
                    if (ready[j].remT > ready[j + 1].remT)
                        swap(&ready[j], &ready[j + 1]);
            cpu = &ready[top];
        }
        cpu->remT--;
        exectime++;
        printf("et: %d\n", exectime);
        if (cpu->remT == 0)
        {
            top++;
            cpu->CT = exectime;
            cpu = &ready[top];
        }
        if (top == 5)
        {
            break;
        }
    }

    int TAT[5];
    float tatSum = 0;
    for (int i = 0; i < 5; i++)
    {
        TAT[i] = ready[i].CT - ready[i].AT;
        tatSum += TAT[i];
    }
    int WT[5];
    float wtSum = 0;
    for (int i = 0; i < 5; i++)
    {
        WT[i] = TAT[i] - ready[i].BT;
        wtSum += WT[i];
    }
    printf("%s%s%s",
           "Process_____________\n",
           "|Name\t|BT\t|AT\t|WT\t|TAT\t|\n",
           "+-------+-------+-------+-------+-------|\n");
    for (int i = 0; i < 5; i++)
    {
        printf("|%d\t|%d\t|%d\t|%d\t|%d\t|\n", ready[i].name, ready[i].BT, ready[i].AT, WT[i], TAT[i]);
    }
    printf("----------------------------------------|\n");
    printf("Average TAT: %0.3f\n", tatSum / 5);
    printf("Average WT: %0.3f", wtSum / 5);
    return 0;
}


























