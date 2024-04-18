#include <stdio.h>

int main()
{
    int at[10], bt[10], temp[10];
    int i, low, count = 0, time, limit;
    double wt = 0, tat = 0, end;
    float avget, avgtat;
    printf("Enter the Total Number of Processes:\n");
    scanf("%d", &limit);
    printf("Enter Details of %d Processes \n", limit);
    for (i = 0; i < limit; i++)
    {
        printf("Enter Arrival Time:");
        scanf("%d", &at[i]);
        printf("Enter Burst Time:");
        scanf("%d", &bt[i]);
        temp[i] = bt[i];
    }
    bt[9] = 9999;
    for (time = 0; count != limit; time++)
    {
        low = 9;
        for (i = 0; i < limit; i++)
        {
            if (at[i] <= time && bt[i] < bt[low] && bt[i] > 0)
            {
                low = i;
            }
        }
        bt[low]--;
        if (bt[low] == 0)
        {
            count++;
            end = time + 1;
            wt = wt + end - at[low] - temp[low];
            tat = tat + end - at[low];
        }
    }
    avget = wt / limit;
    avgtat = tat / limit;
    printf("Average Waiting Time:%lf\n", avget);
    printf("Average Turnaround Time:%lf", avgtat);
    return 0;
}
