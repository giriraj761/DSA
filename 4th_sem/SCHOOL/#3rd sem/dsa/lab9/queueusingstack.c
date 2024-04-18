#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int *arr;
    int size;
    int top;
} stak;
struct stack makeStack(int s)
{
    struct stack stc; // = (struct stack)malloc(sizeof(struct stack));
    stc.arr = (int *)malloc(s * sizeof(int));
    stc.size = s;
    stc.top = -1;
    return stc;
}
void show()
{
    if (stak.top == -1)
    {
        printf("\nStack is empty.\n\n");
        return;
    }
    for (int i = 0; i <= stak.top; i++)
    {
        printf("%d  ", stak.arr[i]);
    }
    printf("\n\n");
}
int pop()
{
    if (stak.top >= 0)
        return stak.arr[stak.top--];
    else
        return -9999;
}
void push(int n)
{
    if (stak.top + 1 < stak.size)
    {
        stak.arr[++stak.top] = n;
    }
    else
    {
        printf("\nSTACK OVERFLOW\n\n");
    }
}
int queuePop()
{
    int noEle = stak.top + 1;
    int retEle = 0;
    int elems[noEle];
    for (int i = 0; i < noEle; i++)
    {
        retEle = pop();
        elems[i] = retEle;
    }
    for (int i = noEle - 2; i >= 0; i--)
    {
        push(elems[i]);
    }
    return retEle;
}
void queuePush(int elems)
{

    push(elems);
}
void isEmpty()
{
    if (stak.top == -1)
    {
        printf("\nStack is empty.\n\n");
    }
    else
    {
        printf("\nStack is not empty.\n\n");
    }
}
int main()
{
    int s = 10;
    printf("Enter the size of the stack.\n");
    scanf("%d", &s);
    stak = makeStack(s);
    int choice = 0;
    do
    {
        printf("Here is your stack.\n >");
        show();
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
            show();
            break;
        }
        case 3:
        {
            int n;
            scanf("%d", &n);
            push(n);
            break;
        }
        case 4:
        {
            printf("\n%d\n\n", pop());
            break;
        }
        case 5:
        {
            printf("\n%d\n\n", queuePop());
            break;
        }
        default:
        {
            printf("\nPlease select a valid option.\n\n");
        }
        }
    } while (choice != 0);
}