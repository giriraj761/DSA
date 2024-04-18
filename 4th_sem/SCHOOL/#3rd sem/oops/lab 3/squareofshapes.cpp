#include<iostream>
#include<cmath>
using namespace std;

float area(int rad)
{
    return M_PI*rad*rad;
}
float area(int len,int base)
{
    return len*base;
}
float area(int s1, int s2,int s3)
{
    return sqrt(((s1+s2+s3)/2-(s1))*((s1+s2+s3)/2-(2*s2))*((s1+s2+s3)/2-(2*s3)));
}
int main()
{
    int r,l,b;
    cout<<"Enter the radius of a circle\n";cin>>r;
    cout<<"The area of circle is  "<<area(r);
    cout<<"\nEnter the side of a rectangle\n";cin>>l>>b;
    cout<<"The area of rectangle is  "<<area(l,b);
    cout<<"\nEnter the 3 sides of a triangle\n";cin>>r>>b>>l;
    cout<<"The area of triangle is "<<area(r,b,l);

    return 0;
}