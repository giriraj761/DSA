#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next; 
};

struct node* insertbeg(struct node *head, int x)
{
    struct node *temp = NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    return temp;
}

void printlist(struct node* curr)
{
    while (curr!=NULL)
    {
        printf(" %d ",curr->data);
        curr=curr->next;
    }
}

void print(struct node* curr ,int m ,int n)
{
    for(int i=0;i<n-m-1;i++)
    {
        curr=curr->next;
    }
    printf("%d ",curr->data);
}

int main()
{ 
    int n,m;
    struct node *head=NULL;
    printf("enter the number of nodes u want in the list :\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        head=insertbeg(head,i);
    }
    printf("\nThe elements are : ");
    printlist(head);

    printf("\n\nenter the the node number u want to find from the end :\n");
    scanf("%d",&m);
    
    print(head,m,n);
    return 0;
}