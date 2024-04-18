#include <stdio.h>

void waitingtime(int proc[],int n,
                int bt[], int wt[],int tat[])
{
	int i;
    for (i = 0; i < n; i++)
    {
        wt[i] = tat[i] - bt[i];
    }
}

void turnaroundtime(int proc[], int n,
                   int bt[], int tat[])
{
    int total_ct=0,i;
    for (i = 0; i < n; i++)
    {
        total_ct+=bt[i];
        tat[i] = total_ct-i;
    }
}
void responsetime(int proc[], int n,
                   int bt[], int rt[])
{
    int total_ct=0,i;
    for (i = 0; i < n; i++)
    {
        total_ct+=bt[i];
        rt[i] = total_ct-bt[i];
    }
}

int avgtime(int proc[], int n, int bt[])
{
    int wt[n], tat[n],rt[n], total_wt = 0, total_tat = 0,total_rt=0,i;

    turnaroundtime(proc, n, bt, tat);

    waitingtime(proc, n, bt, wt,tat);
    responsetime(proc, n, bt, rt);
    
    printf("Processes  Burst   Waiting Time    Turn around Response time\n");

    for (i = 0; i < n; i++)
    {
        total_wt +=wt[i];
        total_tat +=tat[i];
total_rt+=rt[i];
        printf(" %d\t  %d\t\t %d \t\t%d\t\t%d\n", i + 1, bt[i], wt[i], tat[i],rt[i]);
    }
    printf("Average waiting time = %0.3f\n", (float)total_wt / (float)n);
    printf("Average turn around time = %0.3f\n", (float)total_tat / (float)n);
    printf("Average response time = %0.3f\n", (float)total_rt / (float)n);
    return 0;
}

int main()
{
    // process id's
    int proc[] = {1, 2, 3, 4};
    int n = sizeof proc / sizeof proc[0];
    int bt[] = {21, 3, 6, 2};
    avgtime(proc, n, bt);
    return 0;
}
