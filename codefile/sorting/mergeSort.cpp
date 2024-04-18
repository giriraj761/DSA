#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1, n2, i, j, k;
    n1 = mid - low + 1;
    n2 = high - mid;

    int lhs[n1];
    int rhs[n2];

    // copying vales to temporary array
    for (i = 0; i < n1; i++)
    {
        lhs[i] = arr[low + i];
    }

    for (j = 0; j < n2; j++)
    {
        rhs[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = low;

    while (i < n1 && j < n2)
    {
        if (lhs[i] <= rhs[j])
        {
            arr[k] = lhs[i];
            i++;
        }
        else
        {
            arr[k] = rhs[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = lhs[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = rhs[j];
        j++;
        k++;
    }
}

void sort(int arr[], int low, int high)
{

    if (low < high)
    {
        int mid = (low + high) / 2;

        sort(arr, low, mid);
        sort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}
int main()
{
    int arr[] = {23, 45, 76, 1, 3, 2, 0};
    int length = sizeof(arr) / sizeof(arr[0]);

    sort(arr, 0, length - 1);

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
