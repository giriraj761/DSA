#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct stack
{
    struct node *list;
    int top;
    int size;
} stak;

//creates linked list of given length
struct node *makeList(int n)
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    scanf("%d", &(head->data));
    for (int i = 1; i < n; i++)
    {
        struct node *nNode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &(nNode->data));
        nNode->next = NULL;
        temp->next = nNode;
        temp = temp->next;
    }
    return head;
}
struct stack makeStack(int s)
{
    struct stack nStak;
    nStak.size = s;
    nStak.top = s - 1;
    nStak.list = makeList(nStak.size);
    return nStak;
}
//displays the linked list
void display(struct node *h)
{
    while (h->next != NULL)
    {
        printf("%d  ", h->data);
        h = h->next;
    }
    printf("%d \n", h->data);
}
//puts data in the linked list at given index
void push(struct node *temp)
{
    if (stak.top == stak.size - 1)
    {

        printf("Stack overflow.\n");
        return;
    }
    for (int i = -1; i < stak.top; i++)
    {
        temp = temp->next;
    }
    struct node *nNode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &(nNode->data));
    nNode->next = NULL;
    temp->next = nNode;
    stak.top++;
}

//pops the value at given index and deletes it
int pop(struct node *temp)
{
    int ret;
    printf("In pop.\n");
    if (stak.top == -1)
    {
        printf("Stack is empty.\n");
        return -9999;
    }
    printf("In pop.\n");

    ret = temp->data;
    stak.list = temp->next;
    stak.top--;
    return ret;
}
void isEmpty()
{
    if (stak.top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack is not empty.\n");
    }
}
int main()
{
    int s = 10;
    printf("Enter the size of the stack.\n");
    scanf("%d", &s);
    struct stack stak = makeStack(s);
    int choice = 0;
    do
    {
        printf("Here is your stack.\n >");
        display(stak.list);
        printf("Select the action you want to perform,from the list(0 to exit).\n");
        printf("1:Check if stack is empty.\n");
        printf("2:Display the stack.\n");
        printf("3:Push into the stack.\n");
        printf("4:Pop from the Stack.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
        {
            break;
        }
        case 1:
        {
            isEmpty();
            break;
        }
        case 2:
        {
            display(stak.list);
            break;
        }
        case 3:
        {
            int n;
            scanf("%d", &n);
            push(stak.list);
            break;
        }
        case 4:
        {
            printf("\n%d\n\n", pop(stak.list));
            break;
        }
        default:
        {
            printf("\nPlease select a valid option.\n\n");
        }
        }
    } while (choice != 0);
}
