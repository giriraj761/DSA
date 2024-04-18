
#include<iostream>
using namespace std;

bool isprime(int num)
{
    for (int i = 2; i*i <= num; i++)
    {
        if(num%i==0)
        return false;
    }
    return true;
    
}

int main()
{
    int r=10000;
    int arr[r];
    for (int i = 0; i < r; i++)
    {
        arr[i]=i;
    }
    int a=2;
    int b;
    for (int i = 2; i*i < r; i++)
    {
        int flag=0;
        while (a!=r && a<r)
        {
            arr[a]=0;
            if(flag==0 && isprime(a)==true )
            {
                arr[a]=a;
            }
            a+=i;
            flag=1;
        }
        a=i+1;  
    }

    for (int i = 0; i < r; i++)
    {
        if(arr[i]!=0)
        cout<<arr[i]<<" ";
    }

    return 0;
}