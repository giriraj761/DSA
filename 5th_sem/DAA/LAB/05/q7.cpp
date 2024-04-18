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
node *removeDuplicates(struct node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    int dat[1000] = {0};
    node *curr = head;
    node *newhead = nullptr;
    while (curr != nullptr)
    {
        if (dat[curr->data] == 0)
        {
            newhead = insert_end(newhead, curr->data);
            dat[curr->data]=1;
        }
        curr = curr->next;
    }
    delete (curr);
    return newhead;
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
    cout << "\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";

    node *head = nullptr;

    head = insert_end(head, 100);
    head = insert_end(head, 100);
    head = insert_end(head, 600);
    head = insert_end(head, 100);
    head = insert_end(head, 800);
    head = insert_end(head, 600);
    head = insert_end(head, 400);
    head = insert_end(head, 500);

    cout << "Before : ";
    printlist(head);
    head = removeDuplicates(head);
    cout << "\nAfter  : ";
    printlist(head);

    return 0;
}