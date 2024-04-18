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

//deletion at the begning
node *delete_node(node *head)
{
    if(head==nullptr)return nullptr;

     node *temp=head->next;
     delete head;
     return temp;
}

/*
deletion at the end

node *delete_node(node *head)
{
    if(head==nullptr)  return nullptr;

    if(head->next==nullptr)
    [
        delete head;
        return nullptr;
    ]

     node *curr=head;
     while(curr->next->next!=nullptr)
     {
         curr=curr->next;
     }

     delete curr->next;
     curr->next=nullptr;
     return head;
}
*/

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    
    head=delete_node(head);

    printnode(head);

    return 0;
}

