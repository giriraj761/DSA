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

void printing(node *head)
{
    while (head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }   
}
/*
     In this method we are not changing the data we are changing the 
     links so instead of having data to be reversed we are reversing 
     the links which are much efficient in terms of space and time.
*/
node *reverse_list(node *head)
{
     node *curr=head;
     node *prev=nullptr;

     if(curr==nullptr) return nullptr;

     while(curr!=nullptr)
     {
         node *temp=curr->next;
               curr->next=prev;
               prev=curr;
               curr=temp;
     }

     return prev;
}
/*
    recursive reversing

    node *rec_revrse(node *curr , node *prev)
    {
        if(curr==nullptr) return prev;

          node *temp=curr->next;
                curr->next=prev;

        return rec_reverse(temp , curr);       
    }
*/
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);

    cout<<"before reversing :";
    printing(head);

    cout<<"\nafter reversing  :";
    head=reverse_list(head);
    printing(head);

   return 0;
}