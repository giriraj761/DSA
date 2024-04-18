#include<iostream>
using namespace std;

class Test
{
    int value;
    public:
    Test (int value)
    {
        this->value = value;
    }
    int getvalue() 
    {
        return value;
    }

};
int main()
{
    Test obj(20);
    cout<<obj.getvalue();
}