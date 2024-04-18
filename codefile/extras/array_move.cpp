
#include<iostream>
using namespace std;

int main()
{

    int arr[]={1,2,3,4,5};
    int ele =-4444;
    for(int i=4; i>0; i--)
    {   
        swap(arr[0],arr[i]);  //23451
        ele=max(ele,arr[i]);
    }
    cout<<ele<<endl;
     /*
     for(int i=0; i<5; i++)
     {
        swap(arr[4],arr[i]); //51234
    }
    */
    for(int i=0; i<5; i++)
       cout<<arr[i]<<" ";

    return 0;
}


