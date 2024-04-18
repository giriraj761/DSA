#include <bits/stdc++.h>
using namespace std;
int findmax(int arr[],int n)
{
    int * maxele = max_element(arr,arr+n);
    return * maxele;
}
int findmin(int arr[],int n)
{
    int * minele = min_element(arr,arr+n);
    return * minele;
}
printarr(int arr[],int n)
{
    for(int i =0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void arrayinit()
{
    cout<<"enter n ";
    int n;
    cin>>n;
    int arr[n];

    random_device rd;                         
    mt19937 gen(rd());                     
    uniform_int_distribution<> distr(-200, 200);

    for(int i =0 ;i<n;i++)
    {
        arr[i]=distr(gen);
    }
    printarr(arr,n);
    cout<<"minimum element is "<<findmin(arr,n)<<endl;
    cout<<"maximum element is "<<findmax(arr,n)<<endl;
}
int main()
{
    clock_t start, end;
    start = clock();

    cout<<"\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n"; 
    arrayinit();

    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout<<"Time taken by program is :"<< fixed << time_taken << setprecision(5);
    cout<<"sec"<<endl;
    return 0;
}