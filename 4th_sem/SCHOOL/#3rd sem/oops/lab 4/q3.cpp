#include<iostream>
using namespace std;

class first
{
    public:
     int x;
     friend int getgreater(first obj);
};

class second
{
    public:
     int y;

     int getgreater(first obj)
     {
         if(obj.x>y)return obj.x;
         else return y;
     }
};



int main()
{
    first obj;
    second obj2;

    cout<<"enter first number ";cin>>obj.x;
    cout<<"enter second number ";cin>>obj2.y;

    cout<<"the greater number is "<<obj2.getgreater(obj);
    return 0;
}