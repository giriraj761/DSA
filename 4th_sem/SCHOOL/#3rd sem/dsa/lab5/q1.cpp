#include <iostream>
using namespace std;
int number(int **a, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > 0)
                count++;
        }
    }
    return count;
}
void printElements(int **a, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j>n-1)
                cout << a[i][j] << " ";
            else
                cout << "_ ";
        }
        cout << endl;
    }
}

int prodOfDE(int **a, int n)
{
    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod *= a[i][i];
    }
    return prod;
}

int sum(int **a ,int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j>i)
                count+=a[i][j];
        }
    }
    return count;

}
int main()
{
    int n;
    cout << "ENTER THE SIZE OF THE MATRIX:";
    cin >> n;

    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "No of non zero elements: " << number(a, n) << endl;
    cout << "Product of diagonal: " << prodOfDE(a, n) << endl;
    cout << "sum of elements above leading diagonal: "<<sum(a,n) << endl;
    cout << "elements below minor diagonal: " << endl;
    printElements(a, n);
}