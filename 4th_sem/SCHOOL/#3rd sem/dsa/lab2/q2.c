#include <stdio.h>
struct student
{
    int rollNo;
    char Name[50];
    char address[50];
    int age;
    float marks[3];
};
void main()
{
    struct student list[12];
    float avgMarks;
    for (int i = 0; i < 12; i++)
    {
        printf("Roll no. of the student %d", i + 1);
        scanf("%d", &list[i].rollNo);
        printf("Name of the student %d", i + 1);
        scanf("%s", &list[i].Name);
        printf("Address of the student %d", i + 1);
        scanf("%s", &list[i].address);
        printf("Age of the student %d", i + 1);
        scanf("%d", &list[i].age);
        printf("Marks of the student %d", i + 1);
        float marksSum = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &list[i].marks[i]);
            marksSum += list[i].marks[i];
        }
        avgMarks += marksSum / 3;
    }
    printf("Average marks of the students= %f", avgMarks / 12);
}