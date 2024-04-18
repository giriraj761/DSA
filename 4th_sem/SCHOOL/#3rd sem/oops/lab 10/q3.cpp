#include <iostream>
using namespace std;

template <class t1>
void print(t1 a)
{
    cout<<"==>> "<<a<<"\n";
}
int main()
{
    int a=58;
    float b=550.2225;
    
    print<int>(a);
    print<float>(b);

    return 0;
}