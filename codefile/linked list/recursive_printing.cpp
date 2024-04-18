#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int x)
    {
        data=x;
        next=nullptr;
    }
};

//recursive printing
void print(node *head){
    if(head==nullptr)
    return;

    cout<<head->data<<" ";

    print(head->next);
}

node *insert_end(node *head, int x)
{
    node *temp=new node(x);

    if(head==nullptr)
    return temp;

    node *curr=head;
    while(curr->next!=nullptr){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

int main(){
    node *head=nullptr;
    head=insert_end(head,10);
    head=insert_end(head,20);
    head=insert_end(head,30);

    print(head);
 
    return 0;
}