#include<stdio.h>
struct employee
{
    char name[50];
    char gender[5]; 
    char desig[50];
    char depart[50];
    float pay;
};

float grosspay(float p)
{
    float hr,da;
    hr=(p*25)/100;
    da=(p*75)/100;
    float sum=hr+da+p;
    return sum;
}

int main()
{
    int n;
    printf("enter the number of employee");
    scanf("%d",&n);

    struct employee obj[n];
    for (int  j = 0; j < n; j++)
    {
        printf("enter the employee name for employee %d:",j+1);scanf("%s",&obj[j].name);
        printf("enter the gender for employee %d:",j+1);scanf("%s",&obj[j].gender);
        printf("enter the deisignation for employee %d:",j+1);scanf("%s",&obj[j].desig);
        printf("enter the department for employee %d:",j+1);scanf("%s",&obj[j].depart);
        printf("enter the basic pay for employee %d:",j+1);scanf("%f",&obj[j].pay);
        printf("\n");
    }

    printf("\n\nprinting the data............\n\n");
    for(int j=0 ;j<n;j++)
    {
        printf("--employee %d DETAILS--\n",j+1);
        printf("NAME = %s\nGENDER = %s\nDESIGNATION =%s\nDEPARTMENT = %s\nGROSS_PAY = %f\n",obj[j].name,obj[j].gender,obj[j].desig,obj[j].depart,grosspay(obj[j].pay));
        printf("\n\n");
    }
    return 0;
}