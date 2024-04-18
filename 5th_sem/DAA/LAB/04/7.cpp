#include <bits/stdc++.h>
using namespace std;

int pivotcount=0;
int totalcomparisons=0;
int partition(int arr[], int start, int end)
{
    pivotcount++;
	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);
  int i = start, j = end;
	while (i < pivotIndex && j > pivotIndex) {
        totalcomparisons++;

		while (arr[i] <= pivot) {
			i++;
		}
		while (arr[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
	if (start >= end)
		return;

	int p = partition(arr, start, end);
	quickSort(arr, start, p - 1);
	quickSort(arr, p + 1, end);
}

int main()
{
    clock_t start=clock();
	int n;
    cout<<"Enter the number of elements = ";
    cin>>n;
	int arr[n];
   // cout<<"Enter the value of elements\n";
    for(int i=0; i<n;i++)
    {
        //cin>>arr[i];
		arr[i]= rand();
    }

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
    cout<<"\nNumber of Partitions = "<<pivotcount;
    cout<<"\nNumber of Total Comparisons = "<<totalcomparisons;
    cout<<"\nExecution Time = "<<((long double)(clock() - start)/CLOCKS_PER_SEC)<<endl;
	return 0;
}
