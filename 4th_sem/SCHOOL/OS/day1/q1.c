#include <stdio.h>
#include <stdlib.h>
int main()
{
    int bt[5],ct[5],tat[5],wt[5];
    float avg_wt=0,avg_tat=0;

    printf("enter the burst time\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&bt[i]);
    }

    ct[0]=bt[0];
    
    for (int i = 1; i < 5; i++)
    {
        ct[i] = bt[i] + ct[i-1];
    }
    for (int i = 0; i < 5; i++)
    {
        tat[i] = ct[i] - 0;//arival time is zero for all
        avg_tat+= tat[i];

        wt[i] = tat[i] - bt[i];
        avg_wt+= wt[i];
    }
    printf("burst time \t waiting time \t turn around time \t completion time\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\t%d\t\t%d\t\t%d\t\t%d\n",bt[i],wt[i],tat[i],ct[i]);
    }
    printf("the average Wt is :%f\n and the average TAT is :%f\n",avg_wt/5,avg_tat/5);
    
    return 0;
}