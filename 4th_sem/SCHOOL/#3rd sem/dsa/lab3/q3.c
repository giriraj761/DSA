#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[50];
    char gender[10];
    char designation[50];
    char department[50];
    float basic_pay;
    float gross;
    
} employee;

void main()
{
    int n;
    printf("ENTER THE LENGTH OF THE ARRAY: ");
    scanf("%d", &n);
    employee *arr = (employee *)malloc(n * sizeof(employee));
    printf("ENTER INFORMATION OF THE EMPLOYEES\n");
    for (int i = 0; i < n; i++)
    {
        printf("For employee %d\n", i + 1);
        printf("ENTER THE NAME OF THE EMPLOYEE: ");
        scanf("%s", (arr + i)->name);
        printf("ENTER THE GENDER OF THE EMPLOYEE: ");
        scanf("%s", (arr + i)->gender);
        printf("ENTER THE DESIGNATION OF THE EMPLOYEE: ");
        scanf("%s", (arr + i)->designation);
        printf("ENTER THE DEPARTMENT OF THE EMPLOYEE: ");
        scanf("%s", (arr + i)->department);
        printf("ENTER THE BASIC PAY OF THE EMPLOYEE: ");
        scanf("%f", &((arr + i)->basic_pay));

        arr[i].gross=arr[i].basic_pay+arr[i].basic_pay;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Gross pay of %s is %0.2f with %0.2f as basic pay. \n", (arr + i)->name, arr[i].gross, (arr + i)->basic_pay);
    }
}