#include <stdio.h>
#include <stdlib.h>
struct info
{
    int roll_no;
    char name[50];
    float CGPA;
};
void print(struct info *a)
{
    printf("%s\n", a->name);
    printf("%d\n", a->roll_no);
    printf("%0.2f\n", a->CGPA);
}
int main()
{
    struct info *inf = (struct info *)calloc(1, sizeof(struct info));
    inf->roll_no = 20051973;
    char na[] = "GIRIRAJ KRISHNA SHARMA ";
    for (int i = 0; i < sizeof(na); i++)
    {
        inf->name[i] = na[i];
    }
    inf->CGPA = 8.97;
    print(inf);
    return 0;
}