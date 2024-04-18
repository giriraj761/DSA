#include <iostream>
#include <cstring>
using namespace std;

class STRINGS
{
    char data[20];

public:
    void setString(char mess[])
    {
        strcpy(data, mess);
    }
    char *getString()
    {
        return data;
    }
    STRINGS()
    {
    }
    friend STRINGS operator+(STRINGS A, STRINGS B);
};
STRINGS operator+(STRINGS A, STRINGS B)
{
    STRINGS c;
    c.setString("");
    strcat(c.getString(), A.getString());
    strcat(c.getString(), B.getString());
    return c;
}
int main()
{

    STRINGS A;
    STRINGS B;
    A.setString("KIIT");
    B.setString("KISS");
    STRINGS C = A + B;
    system("cls");
    cout <<"string 1: "<<A.getString()<<endl;
    cout <<"string 2: "<< B.getString()<<endl;
    cout<<endl;
    cout<<"string 3: "<< C.getString()<<endl;
    return 0;
}