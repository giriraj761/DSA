#include <iostream>
using namespace std;

struct node  //self refrencing structure
{
    int data;
    node *next; //structure type pointer
    node(int x) //constructor
    {
        data=x;
        next=nullptr;
    }
};

void printnode(node *head)  //structure pointer taken as argumnet
{
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}


//function to insert new links 
node *insert_end(node *head , int x)
{
    node *temp=new node(x);
    node *curr=head;
    while (curr->next!=nullptr)
    {
        curr=curr->next;
    }
    curr->next=temp;

    return head;
    
}

//function to delete duplicate term in linked list 
//if two conjugative terms are not same than only increment
node *delete_duplicate(node *head)
{
    node *curr=head;
    while (curr->next!=nullptr)
    {
        if (curr->data==curr->next->data)
        {
            node *temp=curr->next->next;
            delete  curr->next;
            curr->next=temp;
        }
        else
        {
            curr=curr->next; 
        }       
    }
    return head;
}

int main()
{
    node *head=new node(10);
    head=insert_end(head,10);
    head=insert_end(head,20);
    head=insert_end(head,20);
    head=insert_end(head,30);
    head=insert_end(head,30);
    head=insert_end(head,30);
    head=insert_end(head,40);
    
    
    printnode(head);
    
    cout<<endl;
    head=delete_duplicate(head);

    printnode(head);

    return 0;
}