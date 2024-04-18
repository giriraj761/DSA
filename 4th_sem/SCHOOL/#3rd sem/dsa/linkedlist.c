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

struct node* insertlast(struct node *head, int x)
{
    struct node * temp = NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    if(head == NULL)
    {
        temp->next=head;
        return temp;
    }
    struct node * curr=head;
    while (curr->next!=NULL)
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

struct node* deletenode(struct node *head, int x)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->data==x)
    {
        // head->data=head->next->data;   
        struct  node* temp = head;
        head=head->next;
        free(temp);
        return head;   
    }

    struct node* curr= head;
    while( curr->next!=NULL && curr->next->data!=x )
    {
        curr=curr->next;
    }
    if(curr->next==NULL)
    {
        return head;
    }

    struct node * temp=curr->next;
    curr->next=curr->next->next;
    free(temp);

    return head;
     
}
int main()
{
    int x,y,z;
    scanf("%d",&x);
    struct node *head=NULL;
    head=insertlast(head,x);//1st
    scanf("%d",&y);
    head=insertlast(head,y);//2nd
    scanf("%d",&z);
    head=insertbeg(head,z);//3rd
    scanf("%d",&z);
    head=insertlast(head,z);


    printlist(head);
    // struct node * temp = NULL;
    // temp=(struct node*)malloc(sizeof(struct node));
    // temp->data=100;

    // temp->next=head->next->next;
    // head->next->next=temp;

    // printlist(head);

    // printf("%d ",head->data);
    // printf("%d ",head->next->data);
    // printf("%d ",head->next->next->data);

    head=deletenode(head,3);
    printf("\n");
    printlist(head);
    
    return 0;
}