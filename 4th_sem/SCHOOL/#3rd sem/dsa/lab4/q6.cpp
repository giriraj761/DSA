//row assending
#include<cstdlib>
#include <iostream>
using namespace std;

void heapify(int arr[],int n,int i)
{
    int largest =i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && arr[left]>arr[largest])
    {
        largest = left;
    }
    if(right<n && arr[right]>arr[largest])
    {
        largest=right ;
    }
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void buildheap(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }

}
int main()
{
    int n, m;
    cout << "ENTER THE LENGTH OF THE ARRAY";
    cin >> n >> m;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) //for every i array sort assending
    {
        buildheap(arr[i],m);
    }
    //sort
    int a = 0;
    while (a != n - 1)
    {
        int min = INT16_MIN; //MIN number possible
        int pos;
        for (int i = a; i < n; i++)
        {
            if (arr[i][0] > min)
            {
                min = arr[i][0];
                pos = i;
            }
        }
        if (pos != a)
        {
            int *temp = arr[pos];
            arr[pos] = arr[a];
            arr[a] = temp;
        }
        a++;
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}