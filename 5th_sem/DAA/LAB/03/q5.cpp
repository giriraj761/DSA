#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
using namespace std::chrono;
using namespace std;
int n = 1;
int maxele = INT16_MIN;
int mid = 15;
vector<bool> marker(1000, false);
printDS(vector<int> arr)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
insertDS(int x, vector<int> &arr)
{
    arr.push_back(x);
    n++;
}
heapify( vector<int> &arr , int i )
{
    int left= 2*  i + 1;
    int right = 2 * i + 2;
    int largest = i;
    if(left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if(right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if(i != largest)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,largest);
    }
}
buildheap(vector<int> & arr)
{
    for(int i=n/2+1;i>=0;i--)
    {
        heapify(arr,i);
    }
    // printDS(arr);

    for(int i =0;i<n/2;i++)
    {
        cout<<arr[i]<<" ";
    }

}
removeBottomHalf(vector<int> &arr)
{
    buildheap(arr);
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (marker[arr[i]])
    //     {
    //         arr.erase(arr.begin() + i);
    //         n--;
    //     }
    // }
}
int main()
{
    cout << "\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";
    vector<int> arr;
    {
        // insertDS(5,arr);
        int uin;
        cout << "enter no of elements to add to data structure";
        cin >> uin;
        int x;
        auto start = system_clock::now();
        sleep(1);
        for (int i = 0; i < uin; i++)
        {
            cin >> x;
            insertDS(x, arr);
            // insertDS(12, arr);
            // insertDS(13, arr);
            // insertDS(14, arr);
            // insertDS(15, arr);
            // insertDS(16, arr);
            // insertDS(17, arr);
        }
        auto end = system_clock::now();
        cout << "\nTIME TAKEN for insert: " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1 << endl;
    }
    printDS(arr);
    {
        auto start = system_clock::now();
        sleep(1);
        removeBottomHalf(arr);
        auto end = system_clock::now();
        cout << "\nTIME TAKEN for bottom half : " << duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1 << endl;
    }
    // printDS(arr);
    return 0;
}