#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;

int prec(char c) 
{
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string convet_post(string str, int len)
{
    stack<char>st;
    //transform(str.begin(), str.end(),str.begin(), ::toupper);
    string post;
    for(int i=0; i <len ; i++)
    {
        char c=str[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            post+=c;
        }

        else if(c=='(')
        {
            st.push(c);
        }

        else if(c == ')') 
        {
            while(st.top() != '(')
            {
                post += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && prec(str[i]) <= prec(st.top()))
            {
                post+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()) 
    {
        post += st.top();
        st.pop();
    }

    return post;
}
int main()
{
    string str;
    cin>>str;
    int len=str.size();
    cout<<convet_post(str,len);
    return 0;
}