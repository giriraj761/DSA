#include <bits/stdc++.h>
using namespace std;

int main()
{
    clock_t start, last;
    start = clock();

    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int currsum = 0;
    int maxsum = 0;

    for (int i = 0; i < end(arr) - begin(arr); i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        if (currsum > maxsum)
        {
            maxsum = currsum;
        }
    }
    cout << maxsum << endl;

    last = clock();
    double time_taken = double(last - start) / double(CLOCKS_PER_SEC);
    cout<<"\n\nTime taken by program is :"<<fixed<< time_taken << setprecision(5);
    cout<<"sec"<<endl;
    
    return 0;
}