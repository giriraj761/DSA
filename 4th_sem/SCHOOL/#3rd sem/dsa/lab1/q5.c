#include<stdio.h>
struct employee
{
    char name[50];
    int empno;
    char address[50];
};

int main()
{
    int n;
    printf("enter the number of employee");
    scanf("%d",&n);

    struct employee obj[n];
    for (int  j = 0; j < n; j++)
    {
        printf("enter the employee name for company %d:",j+1);scanf("%s",&obj[j].name);
        printf("enter the employeenumber for company %d:",j+1);scanf("%s",&obj[j].empno);
        printf("enter the address for employee %d:",j+1);scanf("%s",&obj[j].address);
        printf("\n");
    }

    printf("\n\nprinting the data............\n\n");
    for(int j=0 ;j<n;j++)
    {
        printf("--employee %d DETAILS--\n",j+1);
        printf("NAME = %s\naddress =%s\nempno = %d\n",obj[j].name,obj[j].address,obj[j].empno);
        printf("\n\n");
    }
    return 0;
}