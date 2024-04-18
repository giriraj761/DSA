#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next; 
};

int max(int x,int y)
{
    return x<y?y:x;
}

void printlist(struct node* curr)
{
    int i=0;
    while (curr!=NULL)
    {
        printf(" %dx^%d ",curr->data,i);
        curr=curr->next;
        i++;
    }
}

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


struct node* add(struct node *head1 , struct node *head2 , struct node *head3)
{
    struct node *curr1 = head1, *curr2=head2, *curr3=head3;

    while(curr1!=NULL && curr2!=NULL)
    {
        curr3->data=0;
        curr3->data =curr1->data+curr2->data;
        curr1=curr1->next;
        curr2=curr2->next;
        curr3=curr3->next;
    }
     while(curr1!=NULL)
    {
        curr3->data=0;
        curr3->data=curr1->data;
        printf("\n %d\n",curr3->data);
        curr1=curr1->next;
        curr3=curr3->next;
    }
     while(curr2!=NULL)
    {
        curr3->data=0;
        curr3->data=curr2->data;
        curr2=curr2->next;
        curr3=curr3->next;
    }
    curr3=NULL;

    return head3;
}

int main()
{ 


    int n1,n2,m,val;
    struct node *head1=NULL;
    struct node *head2=NULL;
    struct node *head3=NULL;
    printf("enter the order of 1st polynomial :\n");
    scanf("%d",&n1);
    for(int i=0;i<n1+1;i++)
    {
        scanf("%d",&val);
        head1=insert(head1,val);
    }
    printf("enter the order of 2nd polynomial :\n");
    scanf("%d",&n2);
    for(int i=0;i<n2+1;i++)
    {
        scanf("%d",&val);
        head2=insert(head2,val);
    }
    for (int i = 0; i < max(n1,n2)+1; i++)
    {
        head3=insert(head3,-1000);
    }
    
    printf("\nThe elements of 1st polynomial are : ");
    printlist(head1);
    printf("\nThe elements of 2nd polynomial are : ");
    printlist(head2);
    head3=add(head1,head2,head3);
    printf("\nTheir sum is : ");
    printlist(head3);

    
    return 0;
}