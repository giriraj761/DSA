#include <iostream>
using namespace std;

template <class t1, class t2>
void add(t1 **a, t2 **b, int m, int n)
{
    cout << "Sum is:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] + b[i][j] << "  ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cout << "Enter the size of array.:" << endl;
    cin >> m >> n;
    int **a = new int *[m];
    float **b = new float *[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        b[i] = new float[n];
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    add<int, float>(a, b, m, n);

    return 0;
}