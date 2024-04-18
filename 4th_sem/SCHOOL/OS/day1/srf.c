#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int bt[5],ct[5],tat[5],wt[5],at[5];
    float avg_wt=0,avg_tat=0;

    printf("enter the burst time and arrival time \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d,%d",&bt[i],&at[i]);
    }

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
            if (at[j] > at[j + 1])
            {
                swap(&at[j], &at[j + 1]);
                swap(&bt[j], &bt[j + 1]);
            }
    }

    ct[0]=bt[0];

    for (int i = 1; i < 5; i++)
    {
        ct[i] = bt[i] + ct[i-1];
    }
    for (int i = 0; i < 5; i++)
    {
        tat[i] = ct[i] - at[i];
        avg_tat+= tat[i];

        wt[i] = tat[i] - bt[i];
        avg_wt+= wt[i];
    }
    printf("arrival time \tburst time \t waiting time \t turn around time completion time\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",at[i],bt[i],wt[i],tat[i],ct[i]);
    }
    printf("the average Wt is :%0.3f\nand the average TAT is :%0.3f\n",avg_wt/5,avg_tat/5);
    
    return 0;
}