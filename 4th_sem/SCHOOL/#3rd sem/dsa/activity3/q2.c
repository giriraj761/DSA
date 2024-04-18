#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
int isEmpty()
{
    if (stak.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int peekLowestElement()
{
    if (!isEmpty())
    {
        int lowest = 2147483647;
        for (int i = 0; i <= stak.top; i++)
        {

            lowest = lowest > stak.arr[i] ? stak.arr[i] : lowest;
        }
        return lowest;
    }
    else
    {
        printf("Stack Empty\n");
        return -999;
    }
}
int peekHighestElement()
{
    if (!isEmpty())
    {
        int highest = -2147483647;
        for (int i = 0; i <= stak.top; i++)
        {

            highest = highest < stak.arr[i] ? stak.arr[i] : highest;
        }
        return highest;
    }
    else
    {
        printf("Stack Empty\n");
        return -999;
    }
}
int peekMiddleElement()
{
    if (!isEmpty())
    {
        int lowest = 2147483647;
        int range = ((stak.size / 2) + 1) > stak.top ? stak.top : ((stak.size / 2) + 1);
        for (int i = 0; i <= range; i++)
        {
            lowest = lowest > stak.arr[i] ? stak.arr[i] : lowest;
        }
        return lowest;
    }
    else
    {
        printf("Stack Empty\n");
        return -999;
    }
}
int main()
{
    int s = 10;
    printf("Enter the size of the stack.\n");
    //scanf("%d", &s);
    stak = makeStack(4);
    int choice = 0;
    push(2);
    push(3);
    push(1);
    push(0);
    printf("%d\n", peekHighestElement());
    printf("%d\n", peekLowestElement());
    printf("%d\n", peekMiddleElement());
}