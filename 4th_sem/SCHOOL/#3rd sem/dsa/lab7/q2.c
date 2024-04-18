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
    printf("\n");
}

void countocc(struct node *head)
{
    int count[1000];
    for(int i=0;i<1000;i++)
    {
        count[i]=-1;
    }

    struct node *curr = head;
    while(curr!=NULL)
    {
        if(count[curr->data]==-1)
        {
            count[curr->data]=1;
        }
        else
        {
            count[curr->data]++;
        }

        curr=curr->next;
    }

    for(int i=0;i<1000; i++)
    {
        if(count[i]>0)
        {
            printf("the element %d has occured %d times \n",i,count[i]);
        }
    }

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

    countocc(head);
    
    return 0;
}