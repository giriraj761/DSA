#include<iostream>
using namespace std;

class complex
{
    public :
    int x; /*+*/ int y; //one complex number
    friend void sumcomp(complex obj[]);
};

void sumcomp(complex obj[])
{
    cout<<"the sum is "<<obj[0].x+obj[1].x<<" + "<<obj[0].y+obj[1].y<<"i";
}
int main()
{
    complex obj[2];

    cout<<"enter first complex number ";cin>>obj[0].x>>obj[0].y;
    cout<<"enter second complex number ";cin>>obj[1].x>>obj[1].y;

    sumcomp(obj);

    return 0;
}