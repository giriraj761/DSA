

// FOR BINARY SEARCH THE ARRAY NEEDS TO BE SORTED IN INCREASING ORDER

/*
                 FASTER WAY OF BINARY SEARCHING  

    low =0;
    high length-1;
    flag=0;

    while(low < high)
    {
        mid=low+high/2;

        if(arr[mid]==term)
        {
            cout<<"found at position "<<mid+1;
            flag=1;
            break;
        }
        else if(term > arr[mid])
        {
            low=mid+1;
        }
        else //term < arr[mid]
        {
            high=mid-1;
        }
    }
        
        if(flag==0)
        {
            cout<<"the element was not founed"
        }
*/

#include<iostream>
using namespace std;

int binary_search(int arr[],int low,int high,int term)
{

    if(high>=low)
    {
         int mid=(low + high) / 2;

        if(arr[mid]==term)
        {
            return mid;
        }

        if (term>arr[mid])
        {
            return binary_search(arr,mid+1,high,term);
        }

        else  //  term < arr[mid]
        {
            return binary_search(arr,low,mid-1,term);
        }   
    }
    return -1;
}

int main()
{
     int arr[] = {14,15,16,17,18,19,20};
     int term = 20;

    int length=sizeof(arr) / sizeof(arr[0]);
    int returned=binary_search(arr,0,length-1,term);

    if(returned == -1){
        cout<<"soory the number was not found\n"<<returned;  
    }
    else
    {
        cout<<"number found at position :"<<returned+1<<"\n";
    }
    
    return 0;
}


