#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    char ch = 'n';
    float f = 0.4;

    bool intExp = true;
    bool charExp = false;
    bool allExp = false;
    try
    {
        if (intExp)
            throw(a);
        if (charExp)
            throw(ch);
        if (allExp)
            throw(f);
    }
    catch (int e)
    {
        cout << "Int exception caught " << e << endl;
    }
    catch (char e)
    {
        cout << "Char exception caught " << e << endl;
    }
    catch (...)
    {
        cout << "exception caught all" << endl;
    }
    return 0;
}