#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct que
{
    int *arr;
    int size;
    int start, end;
} queue;
struct que makequeue(int s)
{
    struct que stc; // = (struct stack)malloc(sizeof(struct stack));
    stc.arr = (int *)malloc(s * sizeof(int));
    stc.size = s;
    stc.start = 0;
    stc.end = -1;
    return stc;
}
void show()
{
    if (queue.end == -1)
    {
        printf("\nstack is empty.\n\n");
        return;
    }
    for (int i = queue.start; i <= queue.end; i++)
    {
        printf("%d  ", queue.arr[i]);
    }
    printf("\n\n");
}
void stackPush(int n)
{
    if (queue.end + 1 < queue.size)
    {
        queue.arr[++queue.end] = n;
    }
    else
    {
        printf("\nstack OVERFLOW\n\n");
    }
}

int stackPop()
{
    if (isEmpty() == -999)
    {
        return queue.arr[queue.end--];
    }
    else
        return NULL;
}
int main()
{
    int s = 10;
    printf("Enter the size of the stack.\n");
    scanf("%d", &s);
    queue = makequeue(s);
    int choice = 0;
    do
    {
        printf("Here is your stack.\n >");
        show();
        printf("Select the action you want to perform,from the list(0 to exit).\n");
        printf("1:Check if stack is empty.\n");
        printf("2:Display the stack.\n");
        printf("3:Push into the stack.\n");
        printf("4:Pop from the stack.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
        {
            break;
        }
        case 1:
        {
            int x = isEmpty();
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
        default:
        {
            printf("\nPlease select a valid option.\n\n");
        }
        }
    } while (choice != 0);
