#include <iostream>
using namespace std;

class DISTANCE
{
    int feet;
    int inch;

public:
    DISTANCE()
    {}
    DISTANCE(int f, int i)
    {
        feet = f;
        inch = i;
        if (i > 12)
        {
            feet += i / 12;
            i %= 12;
        }
    }
    DISTANCE add(DISTANCE b)
    {
        b.inch += inch;
        b.feet += (feet + (b.inch / 12));
        b.inch %= 12;
        return b;
    }
    void display()
    {
        cout << "The length is: " << feet << " feet " << inch << " inch." << endl;
    }
    void setValue()
    {
        cout << "Enter DISTANCE number. ";
        cin >> feet >> inch;
    }
};
int main()
{
    DISTANCE d1(2, 4);
    cout << "\nCreated d1." << endl;
    DISTANCE d2;
    d2.setValue();
    cout << "\nCreated d2." << endl;
    DISTANCE d3 = d1.add(d2);
    cout << "\nAdded .\n\nNow printing sum.\n"<< endl;
    d3.display();
}