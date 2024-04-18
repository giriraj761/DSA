#include<iostream>
#include<stack>
using namespace std;

struct node
{
    int data;
    struct node *next; 

    node(int x)
    {
        data=x;
        next=nullptr;
    }
};

node* insertbeg(node *head, int x)
{
    struct node *temp = new node(x);
    temp->next=head;
    return temp;
}

stack<int> printlist(node* curr, stack<int>st)
{
    while (curr!=NULL)
    {
        cout<<curr->data<<" ";
        st.push(curr->data);
        curr=curr->next;
    }
    return st;
}

int main()
{
    stack<int> st;
    node *head=nullptr;

    for(int i=5;i>=1;i--)
    {
        head=insertbeg(head,i);
    }

    cout<<"linked list : ";
    st=printlist(head,st);
    cout<<"\nthe linked list in reverse :";
    
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}