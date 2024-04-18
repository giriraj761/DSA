#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next; 
    int flag;
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
    printf("\n");
}

void cycle(struct node *head)
{
    struct node *curr = head;
    while(curr!=NULL)
    {
        curr->flag=1;

        if(curr->flag==1)
        {
            printf("\nyes cycle was detected in the linked list \n");
            break;
        }

        curr=curr->next;
    }
     printf("\ncycle was not detected in the linked list \n");

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

    cycle(head);
    
    return 0;
}