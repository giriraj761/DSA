#include <iostream>
#include<stack>
using namespace std;
bool strmatch(char a, char b)
{
    return ((a=='{'&& b=='}')||(a=='['&& b==']')||(a=='('&& b==')'));
}
bool praenthesis_check(string str,int len)
{
    stack<char>st;
    for(int i=0 ;i<len;i++)
    {
        if(str[i]=='{'||str[i]=='['||str[i]=='(')
        {
           st.push(str[i]); 
        }
        else
        {
            if(st.empty()==true)
            {
                return false;
                
            }
            else if(strmatch(st.top(),str[i])==false)
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    if(st.empty()==true)
    {
        return true;
    }
}
int main()
{
    string str;
    cin>>str;
    int len=str.size();
    bool is_ok = praenthesis_check(str,len);

    (is_ok)?cout<<"YES":cout<<"NO";

    return 0;
}