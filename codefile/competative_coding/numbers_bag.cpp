/*
C. Three Bags
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given three bags. Each bag contains a non-empty multiset of numbers. You can perform a number of operations on these bags. In one operation, you can choose any two non-empty bags, and choose one number from each of the bags. Let's say that you choose number a from the first bag and number b from the second bag. Then, you remove b from the second bag and replace a with a−b in the first bag. Note that if there are multiple occurrences of these numbers, then you shall only remove/replace exactly one occurrence.

You have to perform these operations in such a way that you have exactly one number remaining in exactly one of the bags (the other two bags being empty). It can be shown that you can always apply these operations to receive such a configuration in the end. Among all these configurations, find the one which has the maximum number left in the end.

Input
The first line of the input contains three space-separated integers n1, n2 and n3 (1≤n1,n2,n3≤3⋅105, 1≤n1+n2+n3≤3⋅105) — the number of numbers in the three bags.

The i-th of the next three lines contain ni space-separated integers ai,1, ai,2, ..., ai,ni (1≤ai,j≤109) — the numbers in the i-th bag.

Output
Print a single integer — the maximum number which you can achieve in the end.

Examples
inputCopy
2 4 1
1 2
6 3 4 5
5
outputCopy
20
inputCopy
3 2 2
7 5 4
2 9
7 1
outputCopy
29
Note
In the first example input, let us perform the following operations:

[1,2],[6,3,4,5],[5]
[−5,2],[3,4,5],[5] (Applying an operation to (1,6))

[−10,2],[3,4],[5] (Applying an operation to (−5,5))

[2],[3,4],[15] (Applying an operation to (5,−10))

[−1],[4],[15] (Applying an operation to (2,3))

[−5],[],[15] (Applying an operation to (−1,4))

[],[],[20] (Applying an operation to (15,−5))

You can verify that you cannot achieve a bigger number. Hence, the answer is 20
*/


#include<iostream>
using namespace std;

int main()
{
    long long n1,n2,n3;
    cin>>n1>>n2>>n3;
    long long sum=0,sum1=0,sum2=0,sum3=0,a[n1],b[n2],c[n3];

    for (int i = 0; i <n1 ; i++)
    {
        cin>>a[i];
        sum1+=a[i];
    }
     for (int i = 0; i <n2 ; i++)
    {
        cin>>b[i];
        sum2+=b[i];
    }
     for (int i = 0; i <n3 ; i++)
    {
        cin>>c[i];
        sum3+=c[i];
    }

    sum=sum1+sum2+sum3;

    cout<<sum-2*min(sum1,a[0]+c[0])<<"\n";
    
}