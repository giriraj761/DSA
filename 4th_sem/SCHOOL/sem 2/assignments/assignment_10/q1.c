#include<stdio.h>

struct student
{
    int roll;
    char name[50];
    char gender[5]; 
    int marks[4];
}std;

int main()
{
    printf("enter the roll number:");scanf("%d",&std.roll);
    printf("enter the students name:");scanf("%s",&std.name);
    printf("enter the gender:");scanf("%s",&std.gender);
    printf("enter the marks in 4 subjects:");
    
    for(int i=0;i<4;i++)
    {
        scanf("%d",&std.marks[i]);
    }
    
    printf("\n\nprinting the data............\n\n");
    printf("name = %s\nroll no= %d\ngender= %s\n",std.name,std.roll,std.gender);
    printf("your marks in the subjects are :\n");
    for (int i = 0; i < 4; i++)
    {
        printf("subject %d = %d\n",i+1,std.marks[i]);
    }
    
    return 0;
}