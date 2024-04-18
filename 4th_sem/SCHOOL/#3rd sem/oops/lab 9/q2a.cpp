#include<iostream>
#include<math.h>
using namespace std;


class shape{
    int a;
    public:
    virtual void pay(){
        cout<<"the area of shape is ";
    }
};
class circle : public shape{
    int r;
    public:
    circle(){}
    circle(int a){
        r=a;
    }
    void pay(){
        cout<<"the area of circle is "<<M_PI*r*r<<endl;
    }
};
class square : public shape{
    int l;
    public:
    square(int a){
        l=a;
    }
    void pay(){
        cout<<"the area of square is "<<l*l<<endl;
    }
};
class triangle : virtual public shape{
    int h,b;
    public:
    triangle(){}
    triangle(int i ,int j)
    {
        h=i;
        b=j;
    }
    void pay(){
        cout<<"the area of triangle is :"<<0.5*h*b;
    }
};
int main()
{
    shape *s,*sq ,*tr;
    circle c(2);
    square sqo(2);
    triangle t(2,8);
    s=&c;
    sq=&sqo;
    tr=&t;
    s->pay();
    sq->pay();
    tr->pay();

    return 0;
}