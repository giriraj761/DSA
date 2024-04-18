#include <bits/stdc++.h>
using namespace std;

void Q2_array()
{
    int arr[]={12,34,65,12,45,34,12,45,12};
    int count[100]={0};
    int sum = 0;

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        count[arr[i]]++;

        if(count[arr[i]]>1)
        {
            sum++;
        }
    }
    cout<<"the number of elements that are repeating are "<<sum<<endl;

    int pos=-1;
    int max = INT16_MIN;

    for(int i=0;i<100;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            pos=i;
        }
    }
    cout<<"the element that has repeated most number of times is "<<pos<<endl;
}
int main()
{
    clock_t start,end;
    start= clock();
    cout<<"1973 GIRIRAJ KRISHNA SHARMA\n\n";
    Q2_array();
    end = clock();
  
    // Calculating total time taken by the program.
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}