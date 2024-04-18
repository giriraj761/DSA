#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next; 
};

struct node* insert(struct node *head, int x)
{
    struct node *temp = NULL;
    struct node *curr = head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;

    if(head==NULL)
    {
        return temp;
    }
    
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=NULL;
    return head;
}

void printlist(struct node* curr)
{
    while (curr!=NULL)
    {
        printf(" %d ",curr->data);
        curr=curr->next;
    }
}

struct node* insertsort(struct node *head, int x)
{
    struct node *temp = NULL , *curr= head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;

    if(head==NULL)
    {
        return temp;
    }

    if(x<head->data)
    {
        temp->next=head;
        return temp;
    }
    while(curr->next!=NULL && curr->next->data<x)
    {
        curr=curr->next;
    }
    if(curr->next!=NULL)
    {
        temp->next=curr->next;
        curr->next=temp;

        return head;
    }

    curr->next=temp;
    return head;
}


int main()
{ 
    int n,m,val;
    struct node *head=NULL;
    printf("enter the number of nodes u want in the list :\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        head=insert(head,val);
    }
    printf("\nThe elements are : ");
    printlist(head);

    printf("\n\nenter the element you want to insert :\n");
    scanf("%d",&m);
    head = insertsort(head,m); 

    printlist(head);
    
    return 0;
}