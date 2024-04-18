#include <iostream>
#include<math.h>
using namespace std;
class circle
{
    protected:
    float radius;
    public:
    void getData(){
        cout<<"Enter length: "<<endl;
        cin>>radius;
    }
    void calcArea()
    {
        cout<<"The area is "<<radius*M_PI*radius<<endl;
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
        cout<<"Enter breath: "<<endl;
        cin>>length;
    }
    void calcArea()
    {
        cout<<"The area is "<<radius*length<<endl;
    }
};
class box: public rectangle
{
    protected:
    float height;
    public:
    void getData()
    {
        rectangle::getData();
        cout<<"Enter height: "<<endl;
        cin>>height;
    }
    void calcArea()
    {
        cout<<"The Volume is "<<radius*length*height<<endl;
    }
};
int main()
{   
    circle c;
    rectangle r;
    box b;
    c.getData();
    c.calcArea();
    r.getData();
    r.calcArea();
    b.getData();
    b.calcArea();
return 0;
}