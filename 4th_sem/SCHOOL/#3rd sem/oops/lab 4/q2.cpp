#include<iostream>
using namespace std;

class areacalc
{
    public:
    int l ;
    friend float area(areacalc r[]);
    friend float area(areacalc s);
};

float area(areacalc r[])
{
    return r[0].l*r[1].l;
}

float area(areacalc s)
{
    return s.l*s.l;
}

int main()
{
    areacalc r[2];
    areacalc s;
    cout<<"enter the length and breath of a rectangle ";cin>>r[0].l>>r[1].l;
    cout<<"enter the length of the square:";cin>>s.l; 


   cout<<"the area of rectangle is: "<<area(r)<<" sq units\n";
   cout<<"the area of square is: "<<area(s)<<" sq units";
   

    return 0;
}