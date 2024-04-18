#include<iostream>
using namespace std;

struct node
{
    int data;
    node * next;
    node(int x)
    {
        data =x ;
        next = nullptr;
    }
};

void printlist(node * head)
{
    node* curr = head ;
    while(curr != nullptr)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
node * insertlist(node * head , int x)
{
    node * temp = new node(x);
    temp->next=nullptr;


    if(head==nullptr)return temp;

    node * curr=head;
    while (curr->next!=nullptr)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;

}
node * mergelistalt(node * l1,node* l2 , node * l3)
{
    while (l1->next!=nullptr && l2->next!=nullptr)
    {
        l3 = insertlist(l3,l1->data);
        l1=l1->next;
        l3 = insertlist(l3,l2->data);
        l2=l2->next;
    }
    
    if (l1->next==nullptr)
    {
       l3 = insertlist(l3,l1->data);
       l1=l1->next;
    }
    if(l2->next==nullptr)
    {
        l3 = insertlist(l3,l2->data);
        l2=l2->next;
    }
    return l3;
}
int main()
{
    node *l1=nullptr;
    node *l2=nullptr;
    for(int i =0 ; i<5;i++)
    {
        l1=insertlist(l1,i);
        l2=insertlist(l2,i+5);
    }
    printlist(l1);
    cout<<"\n";
    printlist(l2);
    node *l3=nullptr;
    cout<<"\nans:\n";

    l3 = mergelistalt(l1,l2,l3);
    printlist(l3);
    return 0;
}