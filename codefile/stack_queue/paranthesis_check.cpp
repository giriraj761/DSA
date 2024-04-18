#include<iostream>
#include<stack>

using namespace std;

bool matching(char a , char b)
{
    return(a=='[' && b==']' || a=='{' && b=='}' || a=='(' && b==')');
}

bool check(string str)
{
    stack<int> s;

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]=='[' || str[i]=='{' || str[i]=='(')
        {
            s.push(str[i]);
        }
        else
        {
            if (s.empty()==true)
            {
                return false;
            }
            else if(matching( s.top() , str[i] )==false)
            {
                return false;
            }
            else 
            {
                s.pop();
            }  
        }
    }  

    if(s.empty()==true)
        return true;

   return false;
}

int main()
{
    string str;
    // system("cls");
    cout<<"please enter a paranthesis string :";
    cin>>str;

    bool returned;
    returned=check(str);

    if(returned==true)cout<<"\nGood ";
    else cout<<"\nBad";

    return 0;
}