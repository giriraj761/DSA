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
findthird(node *head)
{
    if (head == nullptr)
    {
        cout << "empty List";
    }
    node *slow = head;
    node *fast = head;
    if(fast!=nullptr && fast->next != nullptr && fast->next->next!=nullptr)
    {
        fast = fast->next->next->next;
    }
    while (fast != nullptr)
    {
        slow = slow->next;
        fast = fast->next;
    }
    cout <<"\n3rd element is :"<<slow->data<<"\n";
}
int main()
{
    cout<<"\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n"; 
    
    node *head = nullptr;
    head = insert_end(head, 100);
    head = insert_end(head, 200);
    head = insert_end(head, 300);
    head = insert_end(head, 400);
    head = insert_end(head, 500);
    head = insert_end(head, 600);
    head = insert_end(head, 700);
    head = insert_end(head, 800);
    printlist(head);
    findthird(head);
    return 0;
}