#include <stdio.h>
#include <math.h>
struct employ
{
    char Name[50];
    float salary;
    float hoursPDay;
};
int salaryInc(int hours)
{
    if (hours >= 12)
    {
        return 15000;
    }
    if (hours >= 10)
    {
        return 10000;
    }
    if (hours >= 8)
    {
        return 5000;
    }
    return 0;
}
void main()
{
    struct employ emploies[10];
    for (int i = 0; i < 3; i++)
    {
        printf("Name of the employ %d: ", 1 + i);
        scanf("%s", &emploies[i].Name);
        printf("Salary of the employ %d: ", 1 + i);
        scanf("%f", &emploies[i].salary);
        printf("Hours per day employ %d: ", 1 + i);
        scanf("%f", &emploies[i].hoursPDay);
        float hours = emploies[i].hoursPDay;
        emploies[i].salary += salaryInc(hours);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Name: %s\n", emploies[i].Name);
        printf("New salary: %f\n", emploies[i].salary);
    }
}