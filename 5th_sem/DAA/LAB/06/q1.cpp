#include <bits/stdc++.h>
#include<chrono>
#include<unistd.h>
using namespace std::chrono;
using namespace std;

int decider=1;
bool compare(int a ,int b)
{
    if(decider == 2)
    {
        return a<b;
    }
    return b<a;
}
heapify( int arr[] , int n , int i)
{
    int left= 2*  i + 1;
    int right = 2 * i + 2;
    int largest = i;
    if(left < n && compare(arr[left],arr[largest]))
    {
        largest = left;
    }
    if(right < n && compare(arr[right],arr[largest]))
    {
        largest = right;
    }
    if(i != largest)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
} 
void buildheap(int arr[],int n)
{
    for (int i = n / 2 + 1; i >= 0; i-- )
    {
        heapify(arr , n , i);
    }
    for(int i = n - 1 ; i > 0 ; i-- )
    {
        swap(arr[0] , arr[i]);
        heapify(arr , i , 0);
    }
}
int main()
{
    cout<<"\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n"; 
    int arr[100];

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(-1000,2000);

    cout<<endl<<endl;
    for(int i=0;i<100;i++)
    {
        arr[i]=distr(gen);
    }
    cout<<"Before :\n";
    for(auto x:arr)cout<<x<<" ";
    cout<<endl;
    cout<<"choose to sort in ascending(1) and deciding order(2) ";
    cin>>decider;
    auto start = system_clock::now();
    sleep(1);
    buildheap(arr,sizeof(arr)/sizeof(arr[0]));
    auto end = system_clock::now();
    cout<<"\nAfter :\n";
    for(auto x:arr)cout<<x<<" ";
    cout<<endl;
    cout << "\nTIME TAKEN : " <<duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1<< endl;
    return 0;
}