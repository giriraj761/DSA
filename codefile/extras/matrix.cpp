#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
    // system("Color 0A");
    long long int num;
    cout<<"enter number \n";
    cin>>num;
    int n=0;
    long long int temp=num;
    while(temp!=0)
    {
        temp/=10;
        n++;
    }
    temp=num;
    int arr[n];
    for(int i=n-1; i>=0 ;i--)
    {
        arr[i]=temp%10;
        temp/=10;
        cout<<arr[i]<<" ";
    }

    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            // m[i][j]=arr[((i+j)<n?i+j:((n-2)-(i+j)%n))];
            m[i][j]=arr[(5+abs(i-j))%5];
            cout<<(5-abs(i-j))%5;
        }
        cout<<endl;
    }

    
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n ;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }   
}