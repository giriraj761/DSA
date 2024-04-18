#include <iostream>
using namespace std;

class complex
{
public:
    int real;      /*+*/
    int imaginary; //one complex number
    complex operator+(complex obj)
    {
        complex ret;
        ret.real = this->real + obj.real;
        ret.imaginary = this->imaginary + obj.imaginary;
        return ret;
    }
    complex operator-(complex obj)
    {
        complex ret;
        ret.real = this->real - obj.real;
        ret.imaginary = this->imaginary - obj.imaginary;
        return ret;
    }
};

int main()
{
    complex obj[2];

    cout << "enter first complex number ";
    cin >> obj[0].real >> obj[0].imaginary;
    cout << "enter second complex number ";
    cin >> obj[1].real >> obj[1].imaginary;
    complex c;
    c = obj[0] + obj[1];
    cout << c.real << " + " << c.imaginary << "i";

    return 0;
}