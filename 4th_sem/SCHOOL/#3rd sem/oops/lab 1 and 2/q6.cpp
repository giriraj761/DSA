#include<iostream>
using namespace std;

int main()

{
    cout<<"ENTER THE SIZE OF THE ARRAY";
    int n;
    cin>>n;
    int arr[n];
    int *ptr=(int*)malloc(sizeof(int)*n);

    cout<<"ENTER THE ELEMENTS OF THE ARRAY ";
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }

    cout<<"THE ELEMENTS OF THE ARRAY ARE :"; 
    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<" ";
    }

    return 0;
}