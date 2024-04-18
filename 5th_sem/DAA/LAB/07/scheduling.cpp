#include <bits/stdc++.h>
using namespace std;

struct scheduling
{
    string name;
    int st;
    int sf;
};

bool compare(const scheduling &obj1, const scheduling &obj2)
{
    if (obj2.sf > obj1.sf)
        return 1;
    return 0;
}

void printMaxActivities(scheduling obj[], int n)
{
    int i, j;
    cout << "Following activities are selected " << endl;
    i = 0;
    cout << " " << obj[i].name<<endl;

    for (j = 1; j < n; j++)
    {
        if (obj[j].st >= obj[i].sf)
        {
            cout << " " << obj[j].name<<endl;
            i = j;
        }
    }
}
int main()
{
    cout << "\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";

    int n;
    cout << "enter n";
    cin >> n;

    scheduling obj[n];
    cout << "enter activity name , start and finish :";
    for (int i = 0; i < n; i++)
    {
        cout << "\n"
             << i + 1 << " : ";
        cin >>obj[i].name>> obj[i].st >> obj[i].sf;
    }
    sort(obj, obj + n, &compare);
    // cout<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<obj[i].name<<" "<< obj[i].st<<" "<<obj[i].sf<<endl;
    // }
    printMaxActivities(obj, n);
    return 0;
}
// A 1 2
// B 3 4
// C 0 6
// D 5 7
// E 8 9
// F 5 9