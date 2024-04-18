#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int roll;
    char name[50];
    char gender[10];
    float marks[5];
    float totalMarks;
} Stud;
Stud *student;
int n;

void getInfo()
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the student. ");
        scanf("%s", (student + i)->name);
        printf("Enter the roll no of the student. ");
        scanf("%d", &(student + i)->roll);
        printf("Enter the gender of the student(m/f). ");
        scanf("%s", ((student + i)->gender));

        (student + i)->totalMarks = 0;
        printf("Enter the marks of the student.");
        for (int j = 0; j < 5; j++)
        {
            scanf("%f", &(student + i)->marks[j]);
            (student + i)->totalMarks += (student + i)->marks[j];
        }
    }
}
void displayInfo()
{
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s\n", (student + i)->name);
        printf("Roll No: %d\n", (student + i)->roll);
        printf("Gender: %s\n", (student + i)->gender);
        printf("Marks of the student are as follows.");
        for (int j = 0; j < 5; j++)
        {
            printf("Subject %d: %0.2f\n", i, (student + i)->marks[j]);
        }
        printf("Total marks is %0.2f.\n", (student + i)->totalMarks);
    }
}
void failedIn(int f)
{
    for (int i = 0; i < n; i++)
    {
        if ((student + i)->marks[f - 1] < 40)
            printf("%s has failed in subject no. %d with %0.2f marks.\n", (student + i)->name, f, (student + i)->marks[f]);
    }
}
void main()
{
    printf("Enter the no of students.");
    scanf("%d", &n);
    student = (Stud *)calloc(n, sizeof(Stud));
    getInfo();
    displayInfo();
    int f;
    printf("Enter the subject no you want to check failours. ");
    scanf("%d", &(f));
    failedIn(f);
}
