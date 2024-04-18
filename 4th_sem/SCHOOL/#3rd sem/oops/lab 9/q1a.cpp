#include <iostream>
using namespace std;
class String
{
protected:
    char *cont;
    int length;

public:
    String()
    {
        cont = new char[50];
        length = 0;
    }

    String(char *ch)
    {
        cont = ch;
        length = sizeof(cont) + 1;
    }
    String operator+(String ob)
    {
        String rets;
        rets.length = length + ob.length;
        rets.cont = new char[rets.length];
        cout << rets.length << endl;
        for (int i = 0; i < length; i++)
        {
            rets.cont[i] = cont[i];
        }
        for (int i = 0; i < ob.length; i++)
        {
            rets.cont[length + i] = ob.cont[i];
        }
            return rets;
    }
    void operator=(String ob)
    {
        cont = ob.cont;
    }
    int operator+=(String ob)
    {
        for (int i = 0; i < min(sizeof(cont), sizeof(ob.cont)); i++)
        {
            if (cont[i] != ob.cont[i])
                return cont[i] - ob.cont[i];
        }
        return 0;
    }
    void print()
    {
        cout << cont << endl;
    }
    void getLength()
    {
        cout << length<<endl;
    }
};
int main()
{
    String obj((char *)("Hello"));
    obj.print();
    String obj2((char *)("HeLlo"));
    int d = obj2 += obj;
    cout << d << endl;
    String obj3 = obj2 + obj;
    obj2.print();
    obj.getLength();
    obj2.getLength();
    obj3.print();
    return 0;
}