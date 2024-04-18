#include <stdio.h>
#include <stdlib.h>

struct proc{
    int name;
    int AT;
    int BT;
    int CT;
    
};
int main()
{
    printf("Enter the no of processes: ");
    int n=0;
    scanf("%d",&n);
    struct proc *ps=(struct proc *)malloc(n*sizeof(struct proc));
    for(int i=0;i<n;i++)
    {
        ps[i].name=i;
        printf("Enter the AT for P%d :",i);
        scanf("%d",&(ps[i].AT));
    }
    int ch=0;
    while(ch!=5)
    {
        printf("Enter the process ID: ");
        int p=0;
        scanf("%d",&p);
        int beg=0,end=0;
        printf("Enter the entry time for the process P%d :",p);
        scanf("%d",&beg);
        printf("Enter the exit time for the process P%d :",p);
        scanf("%d",&end);
        ps[p].BT+=end-beg;
        ps[p].CT=end;
        // printf("Enter -1 to exit.");
        // scanf("%d",&ch);
        ch++;
    }
    int TAT[n],WT[n];
    float AWT=0,ATAT=0;
    for(int i=0;i<n;i++)
    {
        TAT[i]=ps[i].CT-ps[i].AT;
        WT[i]=TAT[i]-ps[i].BT;
        ATAT+=TAT[i];
        AWT+=WT[i];
    }
    ATAT/=n;
    AWT/=n;
    printf("process\tAT\tBT\tWT\tTAT\n");
    for(int i=0;i<n;i++)
    {
        printf("P%d\t%d\t%d\t%d\t%d\n",ps[i].name,ps[i].AT,ps[i].BT,WT[i],TAT[i]);
    }
    printf("AWT=%f \n",AWT);
    printf("ATAT=%f",ATAT);
    
}