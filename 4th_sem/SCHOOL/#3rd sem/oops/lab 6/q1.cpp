#include <iostream>
using namespace std;
class circle
{
    protected:
    float radius;
    public:
    void getData()
    {
        cin>>radius;
    }
    void calcArea()
    {
        cout<<"The area is "<<radius*3.141*radius<<endl;
    }
};
class rectangle: public circle 
{
    protected:
    float length;
    public:
    void getData()
    {
        circle::getData();
        cin>>length;
    }
    void calcArea()
    {
        cout<<"The area is "<<radius*length<<endl;
    }
};
int main()
{   
    circle c;
    rectangle r;
    cout<<"Enter radius: "<<endl;
    c.getData();
    cout<<"Enter length and breath: "<<endl;
    r.getData();
    c.calcArea();
    r.calcArea();
return 0;
}