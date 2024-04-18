#include <bits/stdc++.h>
#include <time.h>
using namespace std;

void nonzero(int n,int arr[][3] )
{
    int nonzeroes =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j]!=0)nonzeroes++;
        }
    }
    cout<<"number of non zero elements "<<nonzeroes<<endl; 
}
void upperhalf(int n,int arr[][3] )
{
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i>j)sum+=arr[i][j];
        }
    }
    cout<<"the sum of upper half is "<<sum<<endl; 
}
void belowhalf(int n,int arr[][3] )
{
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j>i)
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void product_diagonal(int n,int arr[][3] )
{
    int pro=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j==i)
            pro*=arr[i][j];
        }
    }
    cout<<"the product of diagonal is "<<pro<<endl; 
}
void matrixx()
{
    int n=3;
    int arr[3][3];
    random_device rd;                         
    mt19937 gen(rd());                     
    uniform_int_distribution<> distr(-200, 200); 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = distr(gen);
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    nonzero(n,arr);
    upperhalf(n,arr);
    belowhalf(n,arr);
    product_diagonal(n,arr);
}
int main()
{
    clock_t start, end;
    start = clock();

    cout<<"\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n"; 
    matrixx();

    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "\n\nTime taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}