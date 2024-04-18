#include <bits/stdc++.h>
#include<time.h>
using namespace std;
void arrymilti(int arr[])
{
    int temp[5]={0};
    for(int i =0 ;i<5;i++)
    {
        int pro=1;
        for(int j=0;j<5;j++)
        {
            if(arr[j]==arr[i])
            {
                continue;
            }
            pro*=arr[j];
        }
        temp[i]=pro;
    }
    for(int i=0;i<5;i++)
    {
        cout<<temp[i]<<" ";
    }  
    cout<<endl;
}
int main()
{
    clock_t start,end;
    start= clock();
    cout<<"1973 GIRIRAJ KRISHNA SHARMA\n\n";
    int arr[]={3,4,5,1,2};
    arrymilti(arr);
    end = clock();
  
    // Calculating total time taken by the program.
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}