#include <iostream>
using namespace std;
struct date
{
    int date;
    int month;
    int year;
};
void bubbleSort(struct date a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j].year < a[j - 1].year)
            {
                swap(a[j], a[j - 1]);
            }
            else if (a[j].year == a[j - 1].year && a[j].month < a[j - 1].month)
            {
                swap(a[j], a[j - 1]);
            }
            else if (a[j].year == a[j - 1].year && a[j].month == a[j - 1].month && a[j].date == a[j - 1].date)
            {
                swap(a[j], a[j - 1]);
            }
}

int main()
{
    struct date *d = (struct date *)calloc(5, sizeof(struct date));
    for (int i = 0; i < 5; i++)
    {
        cin >> (d + i)->date;
        cin >> (d + i)->month;
        cin >> (d + i)->year;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << (d + i)->date << "/" << (d + i)->month << "/" << (d + i)->year << endl;
    }
    bubbleSort(d, 5);
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << (d + i)->date << "/" << (d + i)->month << "/" << (d + i)->year << endl;
    }
    return 0;
}