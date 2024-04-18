#include<iostream>
using namespace std;

int findhunt(int arr[],int n,int hunt)
{
    for (int i = 0; i < n; i++){
        if(arr[i]==hunt){hunt=hunt*3;}
    }
        return hunt;
        
}
int main()
{
    int arr[]={1,2,3};
    int hunt;cin>>hunt;
    cout<<endl<<findhunt(arr,sizeof(arr)/sizeof(arr[0]),hunt);
    return 0;
}