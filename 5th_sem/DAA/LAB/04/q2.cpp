#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
using namespace std::chrono;
using namespace std;

vector<int> arr;
int n;
bool compare(int a, int b, int decider)
{
    if (decider == 1)
    {
        return a > b;
    }
    return a < b;
}
heapify(int n, int i, int decider)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;
    if (left < n && compare(arr[left], arr[largest], decider))
    {
        largest = left;
    }
    if (right < n && compare(arr[right], arr[largest], decider))
    {
        largest = right;
    }
    if (i != largest)
    {
        swap(arr[i], arr[largest]);
        heapify(n, largest, decider);
    }
}
void buildheap(int n, int decider)
{
    for (int i = n / 2 + 1; i >= 0; i--)
    {
        heapify(n, i, decider);
    }
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(i, 0, decider);
    }
}
printArray()
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
createArray()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(-2000, 2000);

    for (int i = 0; i < n; i++)
        arr.push_back(distr(gen));
}
double timer(int decider)
{
    auto start = system_clock::now();
    sleep(1);

    buildheap(sizeof(arr) / sizeof(arr[0]), decider);

    auto end = system_clock::now();
    return duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1;
}
void printTable()
{
    cout << "Inputs\tAVERAGE\t\tBEST\t\tWORST\n";
    for (int i = 5000; i <= 50000; i += 5000)
    {
        n = i;
        createArray();
        cout << i << "\t";

        double time_for_sorting = timer(1); // average
        cout << time_for_sorting << "\t";

        time_for_sorting = timer(1); // best
        cout << time_for_sorting << "\t";

        time_for_sorting = timer(2); // worst
        cout << time_for_sorting << "\t";

        cout << endl;
    }
}
int main()
{
    cout << "\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";
    printTable();
    return 0;
}