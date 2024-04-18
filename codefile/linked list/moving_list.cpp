// changing 12345 to 51234

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
    cout << endl;
}

node *insert_beg(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}

node *swapping(node *head)
{
    node *curr = head;
    while (curr->next->next != nullptr)
    {
        curr = curr->next;
    }
    node *temp = curr->next;
    temp->next = head;
    curr->next = nullptr;

    return temp;
}
int main()
{
    int x;
    node *head = nullptr;
    head = insert_beg(head, 10);
    head = insert_beg(head, 20);
    head = insert_beg(head, 30);
    head = insert_beg(head, 40);
    head = insert_beg(head, 50);

    printnode(head);
    head = swapping(head);
    printnode(head);

    return 0;
}