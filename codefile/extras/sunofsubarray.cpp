#include<iostream>
using namespace std;

bool found(int arr[],int ch,int s)
{
    if(arr[s]==ch)
    return true;

    return false;

}

int main()
{
    int sum,n,it=0;
    cin>>n>>sum;
    int arr[n];
    int s=0,e=0,currsum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        currsum+=arr[i];
        e++;
        if(currsum==sum)
        {
            break;
        }
        if(currsum>sum)
        {
            if(found(arr,currsum-sum,s))
            {
                currsum-=arr[s++];
                break;
            }            
            else
            {
              currsum-=arr[s];
              s++;
              e=i;
            }
        }
        it++;
    }
    
    cout<<s<<" "<<e-1<<" "<<it<<" ";
    return 0;
}