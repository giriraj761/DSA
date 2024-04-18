#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
    int arr[]={3,5,7,4,2,6,5,6,6,5,8,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter 2 numbers with in the array\n";
    int x,y,count=INT16_MAX,a=0;
    cin>>x>>y;

    if(x==y)
    {
        count=1;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]==x)
            {
                for(int j=0; j<n; j++)
                {
                    if(arr[j]==y)
                    {
                        a=abs(j-i);
                        count=min(count,a);
                    }
                }
            }
        }
    }
    if(count==INT16_MAX)//36756
    {
        cout<<"the element does not exists in the array";
    }
    else
        cout<<"the shortest distance is: "<<count;

    return 0;
}