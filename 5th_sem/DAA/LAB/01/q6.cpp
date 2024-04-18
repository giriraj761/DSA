#include <bits/stdc++.h>
using namespace std;

void second_large_small(int arr[],int n)
{
    int *maxele = max_element(arr , arr+n);
    int *minele = min_element(arr , arr+n);
    int secondMIN = INT16_MAX;
    int secondMAX = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        if(arr[i]==*maxele || arr[i]==*minele)
        {
            continue;
        }        
        if(secondMAX < arr[i])
        {
            secondMAX = arr[i];
        }
        if(secondMIN > arr[i])
        {
            secondMIN = arr[i];
        }
    }
    cout<<endl;
    cout<<"max element is "<<*maxele<<"\nmin element is "<<*minele;
    cout<<endl;
    cout<<"the second largest value is "<<secondMAX<<endl;
    cout<<"the second smallest value is "<<secondMIN<<endl;
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

    second_large_small(arr,n);
}
int main()
{
    clock_t start,end;
    start= clock();

    cout<<"1973 GIRIRAJ KRISHNA SHARMA\n\n";
    arrayinit();

    end = clock();
  
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "\n\nTime taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}