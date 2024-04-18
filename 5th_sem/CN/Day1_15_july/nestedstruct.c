#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[50];
    int salary;
    struct organization
    {
        char Organization_name[50];
    };
};
int main()
{

    struct employee *emp = (struct employee *)calloc(1, sizeof(struct employee));
    char na[] = "giri";
    for (int i = 0; i < sizeof(na); i++)
    {
        emp->name[i] = na[i];
    }
    emp->salary = 300;
    char una[] = "KIIT University";
    for (int i = 0; i < sizeof(una); i++)
    {
        emp->Organization_name[i] = una[i];
    }
    printf("%s\n", emp->name);
    printf("%s\n", emp->Organization_name);
    printf("%d\n", emp->salary);
    return 0;
}