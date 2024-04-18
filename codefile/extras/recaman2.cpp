#include<iostream>
using namespace std;

int a=0;
int main()
{
    int j,size=100000,pos=0,i=1;
    int arr[size];
    int max=-1;

    for (j = 0; j <size ; j++)
    {
        arr[j]=0;
    }

    for( i=1; i<1000; i++)
    {
        if(a-i<0)
        {
            a=a+i;
            arr[i]=a;
        }
        else
        {
            bool flag=false;
            int ch=a-i;

            for(j=0;j<i;j++)
            {
                 if(ch==arr[j])
                 {
                   flag=true;  
                   break;
                 }
            }
            if(!flag)
            {
                a=a-i;
                arr[i]=a;
            }
            else
            {
                a=a+i;
                arr[i]=a;
            }
        }
    }
    for (j = 0; j <i ; j++)
    {
        cout<<arr[j]<<" ";
        if(arr[j]>max)
        {
            max=arr[j];
            pos=j;
        }
    }
    cout<<"\nmax value and the position are: "<<max<<" "<<pos<<"\n";
    return 0;
}