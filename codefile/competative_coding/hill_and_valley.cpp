/*
You are given a sequence of n integers a1, a2, ..., an. Let us call an index j (2≤j≤n−1) a hill if aj>aj+1 and aj>aj−1; and let us call it a valley if aj<aj+1 and aj<aj−1.

Let us define the intimidation value of a sequence as the sum of the number of hills and the number of valleys in the sequence. You can change exactly one integer in the sequence to any number that you want, or let the sequence remain unchanged. What is the minimum intimidation value that you can achieve?

Input
The first line of the input contains a single integer t (1≤t≤10000) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n (1≤n≤3⋅105).

The second line of each test case contains n space-separated integers a1, a2, ..., an (1≤ai≤109).

It is guaranteed that the sum of n over all test cases does not exceed 3⋅105.

Output
For each test case, print a single integer — the minimum intimidation value that you can achieve.

Example
4
3
1 5 3
5
2 2 2 2 2
6
1 6 2 5 2 10
5
1 6 2 5 1

output
0
0
1
0

Note
In the first test case, changing a2 to 2 results in no hills and no valleys.

In the second test case, the best answer is just to leave the array as it is.

In the third test case, changing a3 to 6 results in only one valley (at the index 5).

In the fourth test case, changing a3 to 6 results in no hills and no valleys

*/
#include<iostream>
using namespace std;

int main()
{
    int t,h,v,value;
    cin>>t;
    while (t>0)
    {
        int n;
        v=0;h=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i <n; i++)
        {
            cin>>arr[i];
        }

        //now, 
        for(int i=1; i<n-1; i++)
        {            
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
            {
                h++;
            }
            else if(arr[i]<arr[i+1] && arr[i]<arr[i-1])
            {
                v++;
            }

            value=((v+h)/2)-1;
        }
        if (value>0)
        {
             cout<<value<<endl;
        }
        else 
        cout<<"0";
        
         t--;
    }  
    
    return 0;
}