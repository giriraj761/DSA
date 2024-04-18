#include<iostream>
using namespace std;

inline double cube(int c)
{
    return c*c*c;
}
int main()
{
    int c;
    cout<<"enter an number ";cin>>c;
    cout<<"\nthe cube of the number is "<<cube(c);
    return 0;
}