#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct books
{
    char name[50];
    char title[50]; 
    char publication[50];
    float price;
};

int main()
{
    int n;
    char str[50];
    printf("enter the number of books: ");
    scanf("%d",&n);

    struct books *ptr;
    ptr=(struct books *)malloc(n*sizeof(struct books));

    for (int i = 0; i < n; i++)
    {
        printf("enter the title of the book %d :",i+1);
        scanf("%s",(ptr+i)->title);
        // fgets((ptr+i)->title,50,stdin);
        printf("enter the authorname of the book %d :",i+1);
        scanf("%s",(ptr+i)->name);
        printf("enter the publication of the book %d :",i+1);
        scanf("%s",(ptr+i)->publication);
        printf("enter the price of the book %d :",i+1);
        scanf("%f",&(ptr+i)->price);
        printf("\n");
    }
    printf("\nenter the name of the author u want to search for :\n");
    scanf("%s", str);
    // gets(str);
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        if(strcmp(str,(ptr+i)->name)==0)
        {
            flag=1;
            printf("TITLE = \"%s\"\nPUBLICATION = \"%s\"\nPRICE = \"%0.2f\"\n",(ptr+i)->title,(ptr+i)->publication,(ptr+i)->price);
        }
    }
    if(flag==0)printf("No match found!!\n---TRY AGAIN ---");

    free(ptr);
    return 0;
}