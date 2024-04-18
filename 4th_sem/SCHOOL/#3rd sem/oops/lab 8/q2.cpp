#include <iostream>
using namespace std;
class overLOp
{
    int val;

public:
    overLOp(int i)
    {
        val = i;
    }
    friend int operator-(overLOp);
};
int operator-(overLOp ob)
{
    return ob.val;
}
int main()
{
    overLOp obj(3);
    cout << -obj;
    return 0;
}