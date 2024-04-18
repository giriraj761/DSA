#include<iostream>
using namespace std;

class triangle
{
    int base;
    int height;

    public:
    void getdata(int x ,int y)
    {
        base = x;
        height = y;
    }
    float areatrin()
    {
        return (base*height)/2;
    }
};

int main()
{
    int h,b;
    cout<<"enter the base and height of a triangle: ";cin>>b>>h;

    triangle obj;
    obj.getdata(h,b);
    cout<<"The area of the triangle is "<<obj.areatrin();

    return 0;
}