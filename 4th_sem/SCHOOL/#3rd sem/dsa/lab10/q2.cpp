#include<iostream>
#include<stack>
using namespace std;

void printstack(stack<int> st)
{
    while(st.empty()==false)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"\n";
}

stack<int> sortstack(stack<int> st)
{
    stack<int> temp;
    while (st.empty()==false)
    {
        int x = st.top();
        st.pop();

        if(temp.empty()==false && temp.top()<x){
            temp.push(x);
        }
        else{
            while(temp.empty()==false && temp.top()>x)
            {
                st.push(temp.top());
                temp.pop();
            }
            temp.push(x);
        }
    }

    return temp;
    
}
int main()
{
    stack<int> st;
    st.push(12);
    st.push(66);
    st.push(52);
    st.push(112);
    st.push(2);
    printstack(st);

    st = sortstack(st);

    printstack(st);
    return 0;
}