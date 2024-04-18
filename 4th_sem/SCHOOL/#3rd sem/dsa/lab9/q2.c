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
void showSt()
{
    if (stak.top == -1)
    {
        printf("\nStack is empty.\n\n");
        return;
    }
    for (int i = stak.top; i >= 0; i--)
    {
        printf("%d ", stak.arr[i]);
    }
    printf("\n\n");
}
int popSt()
{
    if (stak.top >= 0)
        return stak.arr[stak.top--];
    else
        return -9999;
}
void pushSt(int n)
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
void showQu()
{
    if (queue.end == -1)
    {
        printf("\nqueue is empty.\n\n");
        return;
    }
    for (int i = queue.start; i <= queue.end; i++)
    {
        printf("%d  ", queue.arr[i]);
    }
    printf("\n\n");
}
int popQu()
{
    if (queue.start <= queue.end)
    {
        return queue.arr[queue.start++];
    }
    else
        return NULL;
}
void pushQu(int n)
{
    if (queue.end + 1 < queue.size)
    {
        queue.arr[++queue.end] = n;
    }
    else
    {
        printf("\nqueue OVERFLOW\n\n");
    }
}
int main()
{
    int s;
    printf("Enter the size of the queue.\n");
    scanf("%d", &s);
    queue = makequeue(s);
    stak = makeStack(s);
    for (int i = 0; i < s; i++)
    {
        int c;
        scanf("%d", &c);
        pushQu(c);
    }
    showQu();
    for (int i = 0; i < s; i++)
    {
        pushSt(popQu());
    }
    showSt();
    queue.end = -1;
    queue.start = 0;
    for (int i = 0; i < s; i++)
    {
        pushQu(popSt());
    }
    printf("Queue reversed is:");
    showQu();
    return 0;
}