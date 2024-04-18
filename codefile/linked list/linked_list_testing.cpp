#include <iostream>
using namespace std;

struct node // self refrencing structure
{
    int data;
    node *next; // structure type pointer
    node(int x) // constructor
    {
        data = x;
        next = nullptr;
    }
};

void printnode(node *head) // structure pointer taken as argumnet
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node *insert_beg(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}

node *insert_end(node *head, int x)
{
    node *temp = new node(x);

    if (head == nullptr)
        return temp;

    node *curr = head;
    while (curr->next != nullptr)
    {
        curr = curr->next;
    }

    curr->next = temp;

    return head;
}

int main()
{
    int x;
    node *head = nullptr;
    cout << "\nEnter a new value to be added at the begning";
    cin >> x;
    head = insert_beg(head, x);
    cout << "\nEnter a new value to be added at the begning";
    cin >> x;
    head = insert_beg(head, x);
    head = insert_end(head,200);

    printnode(head);

    return 0;
}

/*
node *head = new node(10);
head->next = new node(20);

searching in linked list

     int search(node *head, int x)
     {
         int pos=1;
         node *curr=head;

      while(curr!=null)
      {
         if(curr->data==x){
             return pos;
         }
         else{
             pos++;
             curr=curr->next;
         }
      }
       return -1;
     }


insertion at the end of linked list

    node *insert_end(node *head , int x)
    {
        node *temp = new node(x);

         if(head==nullptr)
         return temp;

         node *curr=head;
         while(curr->next!=nullptr)
         {
             curr=curr->next;
         }

         curr->next=temp;

         return head;
    }


finding mid element using one triversal

                   !!!fast and slow concept!!!

   void mid_list(node *head)
    {

         if(head==nullptr)
         cout<<"empty List"

         node *slow=head;
         node *fast=head;

         while(fast->next!=nullptr || fast!=nullptr)
         {
             slow=slow->next;
             fast=fast->next->next;
         }

         cout<<"slow->data \n";


    }
*/