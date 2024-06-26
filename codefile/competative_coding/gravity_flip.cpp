/*
A. Gravity Flip
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output

Little Chris is bored during his physics lessons (too easy), so he has built a toy box to keep himself occupied. The box is special, since it has the ability to change gravity.

There are n columns of toy cubes in the box arranged in a line. The i-th column contains ai cubes. At first, the gravity in the box is pulling the cubes downwards. When Chris switches the gravity, it begins to pull all the cubes to the right side of the box. The figure shows the initial and final configurations of the cubes in the box: the cubes that have changed their position are highlighted with orange.


Given the initial configuration of the toy cubes in the box, find the amounts of cubes in each of the n columns after the gravity switch!

Input
The first line of input contains an integer n (1 ≤ n ≤ 100), the number of the columns in the box. The next line contains n space-separated integer numbers. The i-th number ai (1 ≤ ai ≤ 100) denotes the number of cubes in the i-th column.

Output
Output n integer numbers separated by spaces, where the i-th number is the amount of cubes in the i-th column after the gravity switch.

Examples

input
4
3 2 1 2
output
1 2 2 3 

input
3
2 3 8
output
2 3 8 

Note
The first example case is shown on the figure. The top cube of the first column falls to the top of the last column; the top cube of the second column falls to the top of the third column; the middle cube of the first column falls to the top of the second column.

In the second example case the gravity switch does not change the heights of the columns.
*/
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int partation(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low-1;
    int j=high+1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i]<pivot);
        
        do
        {
            j--;
        } while (arr[j]>pivot);
         
         if(i>=j)return j;

        swap(arr[i],arr[j]);
    } 

}

void qsort(int arr[],int low,int high)
{
    if (low<high)
    {
        int mid=partation(arr,low,high);

        qsort(arr,low,mid);
        qsort(arr,mid+1,high);
    }
    
}

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i <n ; i++)
     {
         cin>>arr[i];
     }
     
     qsort(arr,0,n-1);

     for (int  i = 0; i <n ; i++)
     {
         cout<<arr[i]<<" ";
     }
     
    return 0;
}