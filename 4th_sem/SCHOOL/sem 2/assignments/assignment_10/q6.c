#include<stdio.h>

struct student
{
    int roll;
    char name[50];
    char gender[5]; 
    int marks[5];
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
        printf("enter the students name for student %d:",j+1);scanf("%s",&std[j].name);
        printf("enter the gender for student %d:",j+1);scanf("%s",&std[j].gender);
        printf("enter the marks in 5 subjects for student %d\n",j+1);
        
        for(int i=0;i<5;i++)
        {
            scanf("%d",&std[j].marks[i]);
        }
    }

    printf("\n\nPrinting the data............\n\n");
    int flag=0;
    for(int j=0 ;j<5;j++)
    {
        flag=1;
        printf("FOR SUBJECT %d :\n",j+1);
        for (int i = 0; i < n; i++)
        { 
           if(std[i].marks[j]>0 && std[i].marks[j]<40)
           {
               flag=0;
              printf("\"%s\" FAILED!!! \n",std[i].name);
           } 
            if(std[i].marks[j]>100 || std[i].marks[j]<0)
           {
               flag=0;
              printf("THE MARKS OF \"%s\" IS NOT VALID\n",std[i].name);
           } 
        }
        if(flag==1){
            printf("NONE\n");
        }
        printf("\n");
    }
    return 0;
}
