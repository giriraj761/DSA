#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
#include <vector>
using namespace std::chrono;
using namespace std;
vector<int> arr;
int n;
createArray()
{
    cout << "enter n ";
    extern int n;
    cin >> n;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(-10, 5);

    for (int i = 0; i < n; i++)
    {
        arr.push_back(distr(gen));
    }
}
printArray()
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int maxSumSubarray()
{
    int maxsum=INT16_MIN,currsum=0;
    for (int i = 0; i < n; i++)
    {
        currsum+=arr[i];

        if(currsum<0)
        {
            currsum=0;
        }
        if(currsum>maxsum)
        {
            maxsum = currsum;
        }
    }
    return maxsum;
}

int main()
{
    cout<<"\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n"; 
    createArray();
    printArray();
    auto start = system_clock::now();
    sleep(1);
    cout<<"maxsum is " <<maxSumSubarray();
    auto end = system_clock::now();
    cout << "\nTIME TAKEN : " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1 << endl;
    return 0;
}