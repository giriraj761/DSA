/*complex Create a class complex which stores real and imaginary part of a complex number. Include all types of constructors. Create objects using different
constructors and display them.*/
#include <iostream>
using namespace std;

class complex
{
    float r;
    float i;

public:
    complex() {}
    complex(float c)
    {
        r = c;
        i = c;
    }
    complex(float r1, float i1)
    {
        r = r1;
        i = i1;
    }
    complex(complex &c) 
    {
        r = c.r;
        i = c.i;
    }
    void display()
    {
        cout << "The number is: " << r << " + " << i << "i.\n";
    }
    void setValue(float a, float b)
    {
        r = a;
        i = b;
    }
};
int main()
{
    complex c1;
    cout << "\n Created c1.";
    c1.setValue(2, 4);
    complex c2(1, 4);
    cout << "\n Created c2.";
    complex c3(2);
    cout << "\n Created c3.\n\nNow printing c1(Set by user).\n";
    c1.display();
    cout << "Now printing c2(2 values).\n";
    c2.display();
    cout << "Now printing c3(constant).\n";
    c3.display();
}