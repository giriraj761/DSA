#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 2, 4, 5, 1};
    cout << "enter a index " << endl;
    int n;
    cin >> n;
    try
    {
        if (n >= sizeof(arr) / sizeof(arr[0]))
        {
            throw n;
        }
        if (n < sizeof(arr) / sizeof(arr[0]))
        {
            cout << "Element ==> " << arr[n] << endl;
        }
    }
    catch (int err)
    {
        cout << "Array out of bound." << endl;
    }

    return 0;
}