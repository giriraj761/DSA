#include<iostream>
using namespace std;

int main()

{
    cout<<"ENTER THE SIZE OF THE ARRAY";
    int n,sum=0;
    cin>>n;
    int arr[n];
    int *ptr=(int*)malloc(sizeof(int)*n);

    cout<<"ENTER THE ELEMENTS OF THE ARRAY ";
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
        sum+=*(ptr+i);
    }
    cout<<"THE SUM OF THE ELEMENTS ARE :"<<sum;
    return 0;
}