#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
using namespace std::chrono;
using namespace std;

float buffer[4][4];
float dec_arr[5][5];
float rowSum[5];
float colSum[5];
float arr[5][5];
int n;

void display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        count<<endl;
    }
}
void FloatSum()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dec_arr[i][j] = arr[i][j] - (int)arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rowSum[i] = (rowSum[i] + dec_arr[i][j]);
            colSum[i] = (colSum[i] + dec_arr[j][i]);
        }
        rowSum[i] = round(rowSum[i]);
        colSum[i] = round(colSum[i]);
    }
}
void algo()
{
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (colSum[j] > 0 && rowSum[i] > 0)
            {
                arr[i][j] = ceil(arr[i][j]);
                colSum[j] = colSum[j] - 1;
                rowSum[i] = rowSum[i] - 1;
            }
            else
                arr[i][j] = floor(arr[i][j]);
        }
    }
}
int main()
{
    cout<<"\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n"; 
    cout << "\nEnter the size of Square Matrix Upto 5x5 :";
    cin >> n;
    cout << "Enter the values :\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "\nEntered Matrix :\n";
    display();
    auto start = system_clock::now();
    sleep(1);
    FloatSum();
    algo();
    cout << "\nAfter Round off :\n";
    display();
    auto end = system_clock::now();
    cout << "\nTIME TAKEN : " <<duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1<< endl;
    

    return 0;
}