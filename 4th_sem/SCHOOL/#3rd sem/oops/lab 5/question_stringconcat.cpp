#include<iostream>
#include<string.h>
using namespace std;

class strings
{
private:
    string str;
    int len;
    static string mainstr;
    static int mainlen;

public:
    strings(){}
    strings(string str1,int len1)
    {
        str=str1;
        len=len1;
    }
    strings(const strings &st)
    {
        str=st.str;
        len=st.str.size();
    }
    void enter(int n)
    {
        cout<<"enter the string "<<n+1<<" :";cin>>str;
        len=str.size();
    }
    void print()
    {
        cout<<str<<" "<<len<<endl;
    }
    void concatstr()
    {
        mainstr+=str;
        mainlen+=len;
    }
    static void getconcat()
    {
        cout<<mainstr;
        cout<<" "<<mainlen<<endl;
    }
    
    // ~strings();
};

string strings::mainstr;
int strings::mainlen;

int main()
{
    strings st[2]=strings();
    for(int i=0;i<2;i++)
    {
        st[i].enter(i);
        st[i].concatstr();
    }
    strings::getconcat();


    return 0;
}
