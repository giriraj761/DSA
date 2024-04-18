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

void print_node(node *head) // structure pointer taken as argumnet
{
    // cout<<head->data<<" ";
    // for (node *curr = head->next; curr!=head; curr=curr->next)
    // {
    //     cout<<curr->data<<" ";
    // }

    node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;

    } while (curr != head);
}

void mid_list(node *head)
{

    if (head == nullptr)
        cout << "empty List";

    node *slow = head->next;
    node *fast = head->next;

    while (fast->next->next != head && fast->next != head)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "\n"
         << slow->data;
}

node *delete_node(node *head, int pos)
{
    if (head == nullptr)
        return nullptr;

    if (pos == 1)
    {
        head->data = head->next->data;
    }

    node *curr = head;

    for (int i = 1; i <= pos - 2; i++)
    {
        curr = curr->next;
    }

    node *temp = curr->next->next;
    delete curr->next;
    curr->next = temp;

    return head;
}

node *insert_end(node *head, int x)
{
    node *temp = new node(x);

    if (head == nullptr)
    {
        temp->next = temp;
        return temp;
    }

    temp->next = head->next;
    head->next = temp;
    swap(head->data, head->next->data);

    return temp; // or return head->next;
}

node *insert_beg(node *head, int x)
{
    node *temp = new node(x);
    if (head == nullptr)
    {
        temp->next = temp;
        return temp;
    }

    temp->next = head->next;
    head->next = temp;
    swap(head->data, head->next->data);

    return head;
}

int search(node *head, int x)
{

    if (head->data == x)
    {
        return 1;
    }

    int pos = 2; // starting search form 2nd position
    node *curr = head->next;

    while (curr != head)
    {
        if (curr->data == x)
        {
            return pos;
        }
        else
        {
            pos++;
            curr = curr->next;
        }
    }

    return -1;
}

node *reverse_node(node *head)
{
    node *curr = head->next;
    node *prev = head;

    while (curr != head)
    {
        node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

int main()
{
    int x, n;
    node *head = insert_beg(nullptr, 10);
    head = insert_beg(head, 20);
    head = insert_beg(head, 30);
    head = insert_beg(head, 40);
    print_node(head);

    cout<<"\nEnter node position to delete\n";
    cin>>n;
    head=delete_node(head,n);

    print_node(head);

    mid_list(head);

    cout<<"\nEnter node value to search\n";
    cin>>n;
    int pos;
    pos=search(head,n);
    cout<<"Found at pos :"<<pos;

    // head = reverse_node(head);
    // cout << head->data;
    // print_node(head);

    return 0;
}
