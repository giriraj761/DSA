#include<iostream>
#include<math.h>
using namespace std;

class circle
{
    protected:
    int r;
    public:
    
    void getdata(int rad)
    {
        r=rad;
    }
    float area()
    {
        return M_PI*r*r;
    } 
};
class cylinder : public circle
{
    protected:
    int h;
    public:
    float volume()
    {
        return area()*(h);
    }
    void getdata(int rad,int hei)
    {
        r=rad;
        h=hei;
    }
};
int main()
{
    cylinder obj;
    int r,h;
    cout<<"enter the radius and height ";
    cin>>r>>h;
    obj.getdata(r,h);
    float area=obj.area();
    cout<<"the area of cicle is : "<<area;
    float volume=obj.volume();
    cout<<endl<<"the volume of cylinder is : "<<volume;
    return 0;
}