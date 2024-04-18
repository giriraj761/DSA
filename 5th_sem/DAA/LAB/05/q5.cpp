#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = nullptr;
    }
};
void printlist(node *head)
{
    node *curr = head;
    while (curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
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
node *insert_beg(node *head, int x)
{
    node *temp = new node(x);
    if (head == nullptr)
    {
        return temp;
    }
    temp->next = head;
    return temp;
}
node *variablesort(node *head, int x, node *newlist)
{
    if (head == nullptr)
    {
        cout << "empty List";
    }
    node *curr = head;
    while (curr != nullptr)
    {
        if (curr->data < x)
        {
            int temp = curr->data;
            newlist = insert_beg(newlist, temp);
        }
        else //(curr->data <= x)
        {
            int temp = curr->data;
            newlist = insert_end(newlist, temp);
        }
        curr = curr->next;
    }
    return newlist;
}
node *deleteend(node *head)
{
    if (head == nullptr)
        return nullptr;

    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    node *curr = head;
    while (curr->next->next != nullptr)
    {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = nullptr;
    return head;
}
int main()
{
    cout<<"\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n"; 

    node *head = nullptr;
    node *newlist = nullptr;

    newlist = insert_beg(newlist, 500);

    head = insert_end(head, 100);
    head = insert_end(head, 200);
    head = insert_end(head, 600);
    head = insert_end(head, 700);
    head = insert_end(head, 800);
    head = insert_end(head, 300);
    head = insert_end(head, 400);
    head = insert_end(head, 500);

    printlist(head);
    newlist = variablesort(head, 500, newlist);
    cout << "\nafter sorting using a variable  \n all larger number are on right side and all smaller are on the left\n";
    newlist = deleteend(newlist);
    printlist(newlist);

    return 0;
}