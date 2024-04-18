#include<iostream>
#include<string.h>
using namespace std;

class copyc
{
private:
    int x,y;
public:
    copyc()
    {
        x=10;
        y=20;
    }
    copyc(const copyc &obj)
    {
        x=obj.x;
        y=obj.y;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};



int main()
{
    copyc obj1;
    copyc obj2= copyc(obj1);
    cout<<"The first object :\n";
    obj1.display();
    cout<<"The copied object :\n";
    obj2.display();
    return 0;
}