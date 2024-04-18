#include <iostream>
using namespace std;

template <class T>

class sortClass{
    public:
    void quick( T arr[],int low ,int high)
    {
        
        if(high > low)
        {
            int mid = partitation(arr , low , high);
        
            quick(arr , low , mid);
            quick(arr , mid+1 , high);
        }
    }

    int partitation(T arr[] , int low , int high)
    {
        int j = high + 1;
        int i = low - 1;
        T pivot = arr[low];
        
        while(true)
        {
            do
            {
                i++;
            }while(arr[i] < pivot);
        
            do
            {
                j--;
            }while(arr[j] > pivot);
        
            if(i >= j)
            {
                return j;
            }
    
            swap(arr[i] , arr[j]);
        }
    }       
};
        // quicksort(arr,0,sizeof(arr)/sizeof(arr[0]));
 
int main()
{
    
    sortClass <int>i;
    sortClass <float>fl;
    int a[5] = {10, 50, 30, 40, 20};
    float f[5]= {10.25, 10.22, 10.01, 10.55, 10.99};
	int n = sizeof(a) / sizeof(a[0]);

    i.quick(a,0,n-1);
    fl.quick(f,0,n-1);

    cout << " int : ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

    cout << " float : ";
	for (int i = 0; i < n; i++)
		cout << f[i] << " ";
	cout << endl;
    return 0;
}
