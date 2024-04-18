#include <iostream>
using namespace std;

template <class t1>
class printer
{
public:
    void print(t1 **a, int m, int n)
    {
        cout << "Array is:" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << "  ";
            }
            cout << endl;
        }
    }
};
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
    printer<int> i;
    i.print(a, m, n);
    printer<float> f;
    f.print(b, m, n);

    return 0;
}