/*
*  in doubly linked list two pointers are there that assign next and prev 

*   | node1 |--| node 2 |--| node3 |  here node 2 can access node 1 ass well as 
                                                                      node 3
*                                                                                                                                        
*/
#include <iostream>
using namespace std;

struct node  //self refrencing structure
{
    int data;
    node *next; //structure type pointer
    node *prev;
    node(int x) //constructor
    {
        data=x;
        next=prev=nullptr;
    }
};

void print_node(node *head)  //structure pointer taken as argumnet
{
    while (head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
        
}

void mid_list(node *head)
{
                  
         if(head==nullptr)
         cout<<"empty List";

         node *slow=head;
         node *fast=head;

         while(fast->next!=nullptr || fast!=nullptr)
         {
             slow=slow->next;
             fast=fast->next->next;
         }

         cout<<"\n"<<slow->data;
        
}

node *delete_node(node *head,int pos)
{
    if(head==nullptr)  return nullptr;

    node *curr=head;

    if(pos==1) //deleting head
    {
        head->data=head->next->data;
        node *temp=head->next->next;
        delete head->next;
        head->next=temp;
        temp->prev=head;

        return head;
    }
     
    for (int i=1; i<=pos-2; i++)
    {
       curr=curr->next;
    }

    if(curr->next->next==nullptr)
    {
        delete curr->next;
        curr->next=nullptr;
        return head;
    }

    node *temp=curr->next->next;
    delete curr->next;
    curr->next=temp;
    temp->prev=curr;

    return head;
     
}

node *insert_end(node *head , int x)
{
    node *temp = new node(x);
     
     if(head==nullptr)
     {
        return temp;
     }

     node *curr=head;
     while (curr->next!=nullptr)
     {
         curr=curr->next;
     }

     curr->next=temp;
     temp->prev=curr;

     return head;
         
}

node *insert_beg(node *head,int x)
{
    node *temp= new node(x);
    temp->next=head;

    if(head!=nullptr)
    {
        head->prev=temp;
    }

    return temp;
}

node *reverse_node(node *head)
{
    node *curr=head;
    node *previous;

    while (curr!=nullptr)
    {
        node *temp=curr->next;
        curr->next=previous;
        previous=curr;
        curr=temp; 
    }

    return previous;
}

int main()
{
    int x,n;
    node *head=nullptr;
    head=insert_beg(head,10);
    head=insert_beg(head,20);
    head=insert_beg(head,30);
    head=insert_beg(head,40);
    head=insert_beg(head,50);
    head=insert_beg(head,60);
    head=insert_beg(head,70);
    head=insert_beg(head,80);
    head=insert_end(head,100);

    print_node(head);

    cout<<"\nEnter node position to delete\n";
    cin>>n;
    head=delete_node(head,n);
    print_node(head); 

    // mid_list(head);

    // cout<<"\nNOW REVERSING\n";
    // reverse_node(head);
    // print_node(head);

    return 0;
}

