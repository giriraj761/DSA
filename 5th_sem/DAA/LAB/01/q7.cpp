#include <bits/stdc++.h>
using namespace std;
void arrswap(int arr[],int n)
{
    for(int i =0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i =0 ;i<n-1;i+=2)
    {
        // if((i+1)<n)
        // {
            swap(arr[i],arr[i+1]);
        // }
    }
    for(int i =0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    clock_t start,end;
    start= clock();
    cout<<"1973 GIRIRAJ KRISHNA SHARMA\n\n";
    cout<<"enter n ";
    int n;
    cin>>n;
    int arr[n];
    arrswap(arr,n);
    end = clock();
  
    // Calculating total time taken by the program.
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}