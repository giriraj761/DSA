#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void printList(node *head)
{
    if (head)
        while (head->next != NULL)
        {
            printf("%d > ", head->data);
            head = head->next;
        }
    printf("%d ", head->data);
}
node *newNode(int n)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = n;
    temp->next = NULL;
    return temp;
}
node *insertAtHead(int n, node *head)
{
    if (head)
    {
        node *temp = newNode(n);
        temp->next = head;
        return temp;
    }
    else
    {
        return newNode(n);
    }
    return head;
}
node *deleteAtIndex(int i, node *head)
{
    node *ret = head;
    if (i == 0 || !head)
    {
        return head->next;
    }
    if (i == 1)
    {
        ret->next = head->next->next;
return ret;
    }
    while (i > 1 && head->next != NULL)
    {
        head = head->next;
        i--;
    }
    if (head)
        head->next = head->next->next;

    return ret;
}
int main()
{

    node *head = NULL;
    head = insertAtHead(5, head);
    head = insertAtHead(4, head);
    head = insertAtHead(3, head);
    head = insertAtHead(2, head);
    head = insertAtHead(1, head);
    int s = 5;
    printList(head);
    printf("\n");
    int i = 0;
    int j = 1;
    int k = 0;
    while (k < s)
    {
        head = deleteAtIndex(k, head);
        k = i + j;
        j = i;
        i = k;
        s--;
    }
    printList(head);
    return 0;
}