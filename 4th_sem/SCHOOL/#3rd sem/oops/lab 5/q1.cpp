/*complex Create a class complex which stores real and imaginary part of a complex number. Include all types of constructors. Create objects using different
constructors and display them.*/
#include <iostream>
using namespace std;

class complex
{
    public:
    float r;
    float i;


    complex(){}

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
        printf("The number is: %0.2f %0.2fi.\n", r, i);
    }
};
int main()
{
    complex c1(2,5);
    printf("\n Created c1.\n");
    complex c2(c1);
    cout<<c1.r+c2.r<<" "<<c1.i+c2.i;

    return 0;
}