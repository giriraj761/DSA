#include<iostream>

using namespace std;

class rec
{
    public:
    int l ;
    int b;
    friend float rectangle(rec r);
};

float rectangle(rec r)
{
    return r.l*r.b;
}

int main()
{
    rec r;
    cout<<"enter the length and breath of a rectangle ";
    cin>>r.l>>r.b;

   cout<<"the area is: "<<rectangle(r)<<"sq units";

    return 0;
}