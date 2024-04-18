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

struct node* rotate(struct node *head,int k,int n)
{
    struct node *curr = head, *temp=NULL;
    for(int i=0;i<n;i++)
    {
        // printf("%d\n",curr->data);6
        
        curr=curr->next;

        if(i==k-2)
        {
            temp=curr->next;
            curr->next=NULL;
            break;
        }
        
        if(curr==NULL)
        {
            break;
        }
    }
    curr=temp;
    while (curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=head;
    
    return temp;
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

    printf("\ninsert the point from where u want to rotate : ");
    scanf("%d",&m);

    head=rotate(head,m,n);

    printlist(head);
    
    return 0;
}