#include<stdio.h>

struct student
{
    int roll;
    char name[50];
    char gender[5]; 
    int marks[4];
};

int main()
{
    int n;
    printf("enter the number of students");
    scanf("%d",&n);

    struct student std[n];
    for (int  j = 0; j < n; j++)
    {
        printf("enter the roll number for student %d:",j+1);scanf("%d",&std[j].roll);
        printf("enter the name for student %d:",j+1);scanf("%s",&std[j].name);
        printf("enter the gender for student %d:",j+1);scanf("%s",&std[j].gender);
        printf("enter the marks in 4 subjects for student %d\n",j+1);
        
        for(int i=0;i<4;i++)
        {
            scanf("%d",&std[j].marks[i]);
        }
    }

    printf("\n\nprinting the data............\n\n");
    for(int j=0 ;j<n;j++)
    {
        printf("--STUDENT %d DETAILS--\n",j+1);
        printf("NAME = %s\nROLL.NO= %d\nGENDER= %s\n",std[j].name,std[j].roll,std[j].gender);
        printf("Your MARKS ARE AS FOLLOWS:\n");
        for (int i = 0; i < 4; i++)
        {
            printf("SUBJECT %d = %d\n",i+1,std[j].marks[i]);
        }
        printf("\n\n");
    }
    return 0;
}